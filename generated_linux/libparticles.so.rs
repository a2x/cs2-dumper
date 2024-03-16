/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 16 Mar 2024 22:03:48 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod CBaseRendererSource2 { // CParticleFunctionRenderer
    pub const m_flRadiusScale: usize = 0x1F8; // CParticleCollectionRendererFloatInput
    pub const m_flAlphaScale: usize = 0x348; // CParticleCollectionRendererFloatInput
    pub const m_flRollScale: usize = 0x498; // CParticleCollectionRendererFloatInput
    pub const m_nAlpha2Field: usize = 0x5E8; // ParticleAttributeIndex_t
    pub const m_vecColorScale: usize = 0x5F0; // CParticleCollectionRendererVecInput
    pub const m_nColorBlendType: usize = 0xC20; // ParticleColorBlendType_t
    pub const m_nShaderType: usize = 0xC24; // SpriteCardShaderType_t
    pub const m_strShaderOverride: usize = 0xC28; // CUtlString
    pub const m_flCenterXOffset: usize = 0xC30; // CParticleCollectionRendererFloatInput
    pub const m_flCenterYOffset: usize = 0xD80; // CParticleCollectionRendererFloatInput
    pub const m_flBumpStrength: usize = 0xED0; // float
    pub const m_nCropTextureOverride: usize = 0xED4; // ParticleSequenceCropOverride_t
    pub const m_vecTexturesInput: usize = 0xED8; // CUtlVector<TextureGroup_t>
    pub const m_flAnimationRate: usize = 0xEF0; // float
    pub const m_nAnimationType: usize = 0xEF4; // AnimationType_t
    pub const m_bAnimateInFPS: usize = 0xEF8; // bool
    pub const m_flSelfIllumAmount: usize = 0xF00; // CParticleCollectionRendererFloatInput
    pub const m_flDiffuseAmount: usize = 0x1050; // CParticleCollectionRendererFloatInput
    pub const m_flDiffuseClamp: usize = 0x11A0; // CParticleCollectionRendererFloatInput
    pub const m_nLightingControlPoint: usize = 0x12F0; // int32_t
    pub const m_nSelfIllumPerParticle: usize = 0x12F4; // ParticleAttributeIndex_t
    pub const m_nOutputBlendMode: usize = 0x12F8; // ParticleOutputBlendMode_t
    pub const m_bGammaCorrectVertexColors: usize = 0x12FC; // bool
    pub const m_bSaturateColorPreAlphaBlend: usize = 0x12FD; // bool
    pub const m_flAddSelfAmount: usize = 0x1300; // CParticleCollectionRendererFloatInput
    pub const m_flDesaturation: usize = 0x1450; // CParticleCollectionRendererFloatInput
    pub const m_flOverbrightFactor: usize = 0x15A0; // CParticleCollectionRendererFloatInput
    pub const m_nHSVShiftControlPoint: usize = 0x16F0; // int32_t
    pub const m_nFogType: usize = 0x16F4; // ParticleFogType_t
    pub const m_flFogAmount: usize = 0x16F8; // CParticleCollectionRendererFloatInput
    pub const m_bTintByFOW: usize = 0x1848; // bool
    pub const m_bTintByGlobalLight: usize = 0x1849; // bool
    pub const m_nPerParticleAlphaReference: usize = 0x184C; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleAlphaRefWindow: usize = 0x1850; // SpriteCardPerParticleScale_t
    pub const m_nAlphaReferenceType: usize = 0x1854; // ParticleAlphaReferenceType_t
    pub const m_flAlphaReferenceSoftness: usize = 0x1858; // CParticleCollectionRendererFloatInput
    pub const m_flSourceAlphaValueToMapToZero: usize = 0x19A8; // CParticleCollectionRendererFloatInput
    pub const m_flSourceAlphaValueToMapToOne: usize = 0x1AF8; // CParticleCollectionRendererFloatInput
    pub const m_bRefract: usize = 0x1C48; // bool
    pub const m_bRefractSolid: usize = 0x1C49; // bool
    pub const m_flRefractAmount: usize = 0x1C50; // CParticleCollectionRendererFloatInput
    pub const m_nRefractBlurRadius: usize = 0x1DA0; // int32_t
    pub const m_nRefractBlurType: usize = 0x1DA4; // BlurFilterType_t
    pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x1DA8; // bool
    pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x1DA9; // bool
    pub const m_bUseMixedResolutionRendering: usize = 0x1DAA; // bool
    pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x1DAB; // bool
    pub const m_stencilTestID: usize = 0x1DAC; // char[128]
    pub const m_bStencilTestExclude: usize = 0x1E2C; // bool
    pub const m_stencilWriteID: usize = 0x1E2D; // char[128]
    pub const m_bWriteStencilOnDepthPass: usize = 0x1EAD; // bool
    pub const m_bWriteStencilOnDepthFail: usize = 0x1EAE; // bool
    pub const m_bReverseZBuffering: usize = 0x1EAF; // bool
    pub const m_bDisableZBuffering: usize = 0x1EB0; // bool
    pub const m_nFeatheringMode: usize = 0x1EB4; // ParticleDepthFeatheringMode_t
    pub const m_flFeatheringMinDist: usize = 0x1EB8; // CParticleCollectionRendererFloatInput
    pub const m_flFeatheringMaxDist: usize = 0x2008; // CParticleCollectionRendererFloatInput
    pub const m_flFeatheringFilter: usize = 0x2158; // CParticleCollectionRendererFloatInput
    pub const m_flDepthBias: usize = 0x22A8; // CParticleCollectionRendererFloatInput
    pub const m_nSortMethod: usize = 0x23F8; // ParticleSortingChoiceList_t
    pub const m_bBlendFramesSeq0: usize = 0x23FC; // bool
    pub const m_bMaxLuminanceBlendingSequence0: usize = 0x23FD; // bool
}

pub mod CBaseTrailRenderer { // CBaseRendererSource2
    pub const m_nOrientationType: usize = 0x2638; // ParticleOrientationChoiceList_t
    pub const m_nOrientationControlPoint: usize = 0x263C; // int32_t
    pub const m_flMinSize: usize = 0x2640; // float
    pub const m_flMaxSize: usize = 0x2644; // float
    pub const m_flStartFadeSize: usize = 0x2648; // CParticleCollectionRendererFloatInput
    pub const m_flEndFadeSize: usize = 0x2798; // CParticleCollectionRendererFloatInput
    pub const m_bClampV: usize = 0x28E8; // bool
}

pub mod CGeneralRandomRotation { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flDegrees: usize = 0x1B8; // float
    pub const m_flDegreesMin: usize = 0x1BC; // float
    pub const m_flDegreesMax: usize = 0x1C0; // float
    pub const m_flRotationRandExponent: usize = 0x1C4; // float
    pub const m_bRandomlyFlipDirection: usize = 0x1C8; // bool
}

pub mod CGeneralSpin { // CParticleFunctionOperator
    pub const m_nSpinRateDegrees: usize = 0x1B0; // int32_t
    pub const m_nSpinRateMinDegrees: usize = 0x1B4; // int32_t
    pub const m_fSpinRateStopTime: usize = 0x1BC; // float
}

pub mod CNewParticleEffect { // IParticleEffect
    pub const m_pNext: usize = 0x10; // CNewParticleEffect*
    pub const m_pPrev: usize = 0x18; // CNewParticleEffect*
    pub const m_pParticles: usize = 0x20; // IParticleCollection*
    pub const m_pDebugName: usize = 0x28; // char*
    pub const m_bDontRemove: usize = 0x0; // bitfield:1
    pub const m_bRemove: usize = 0x0; // bitfield:1
    pub const m_bNeedsBBoxUpdate: usize = 0x0; // bitfield:1
    pub const m_bIsFirstFrame: usize = 0x0; // bitfield:1
    pub const m_bAutoUpdateBBox: usize = 0x0; // bitfield:1
    pub const m_bAllocated: usize = 0x0; // bitfield:1
    pub const m_bSimulate: usize = 0x0; // bitfield:1
    pub const m_bShouldPerformCullCheck: usize = 0x0; // bitfield:1
    pub const m_bForceNoDraw: usize = 0x0; // bitfield:1
    pub const m_bShouldSave: usize = 0x0; // bitfield:1
    pub const m_bDisableAggregation: usize = 0x0; // bitfield:1
    pub const m_bShouldSimulateDuringGamePaused: usize = 0x0; // bitfield:1
    pub const m_bShouldCheckFoW: usize = 0x0; // bitfield:1
    pub const m_vSortOrigin: usize = 0x40; // Vector
    pub const m_flScale: usize = 0x4C; // float
    pub const m_hOwner: usize = 0x50; // PARTICLE_EHANDLE__*
    pub const m_pOwningParticleProperty: usize = 0x58; // CParticleProperty*
    pub const m_flFreezeTransitionStart: usize = 0x70; // float
    pub const m_flFreezeTransitionDuration: usize = 0x74; // float
    pub const m_flFreezeTransitionOverride: usize = 0x78; // float
    pub const m_bFreezeTransitionActive: usize = 0x7C; // bool
    pub const m_bFreezeTargetState: usize = 0x7D; // bool
    pub const m_bCanFreeze: usize = 0x7E; // bool
    pub const m_LastMin: usize = 0x80; // Vector
    pub const m_LastMax: usize = 0x8C; // Vector
    pub const m_nSplitScreenUser: usize = 0x98; // CSplitScreenSlot
    pub const m_vecAggregationCenter: usize = 0x9C; // Vector
    pub const m_RefCount: usize = 0xC0; // int32_t
}

pub mod CParticleCollectionBindingInstance { // CBasePulseGraphInstance
}

pub mod CParticleCollectionFloatInput { // CParticleFloatInput
}

pub mod CParticleCollectionRendererFloatInput { // CParticleCollectionFloatInput
}

pub mod CParticleCollectionRendererVecInput { // CParticleCollectionVecInput
}

pub mod CParticleCollectionVecInput { // CParticleVecInput
}

pub mod CParticleFloatInput { // CParticleInput
    pub const m_nType: usize = 0xC; // ParticleFloatType_t
    pub const m_nMapType: usize = 0x10; // ParticleFloatMapType_t
    pub const m_flLiteralValue: usize = 0x14; // float
    pub const m_NamedValue: usize = 0x18; // CParticleNamedValueRef
    pub const m_nControlPoint: usize = 0x58; // int32_t
    pub const m_nScalarAttribute: usize = 0x5C; // ParticleAttributeIndex_t
    pub const m_nVectorAttribute: usize = 0x60; // ParticleAttributeIndex_t
    pub const m_nVectorComponent: usize = 0x64; // int32_t
    pub const m_flRandomMin: usize = 0x68; // float
    pub const m_flRandomMax: usize = 0x6C; // float
    pub const m_bHasRandomSignFlip: usize = 0x70; // bool
    pub const m_nRandomSeed: usize = 0x74; // int32_t
    pub const m_nRandomMode: usize = 0x78; // ParticleFloatRandomMode_t
    pub const m_flLOD0: usize = 0x80; // float
    pub const m_flLOD1: usize = 0x84; // float
    pub const m_flLOD2: usize = 0x88; // float
    pub const m_flLOD3: usize = 0x8C; // float
    pub const m_nNoiseInputVectorAttribute: usize = 0x90; // ParticleAttributeIndex_t
    pub const m_flNoiseOutputMin: usize = 0x94; // float
    pub const m_flNoiseOutputMax: usize = 0x98; // float
    pub const m_flNoiseScale: usize = 0x9C; // float
    pub const m_vecNoiseOffsetRate: usize = 0xA0; // Vector
    pub const m_flNoiseOffset: usize = 0xAC; // float
    pub const m_nNoiseOctaves: usize = 0xB0; // int32_t
    pub const m_nNoiseTurbulence: usize = 0xB4; // PFNoiseTurbulence_t
    pub const m_nNoiseType: usize = 0xB8; // PFNoiseType_t
    pub const m_nNoiseModifier: usize = 0xBC; // PFNoiseModifier_t
    pub const m_flNoiseTurbulenceScale: usize = 0xC0; // float
    pub const m_flNoiseTurbulenceMix: usize = 0xC4; // float
    pub const m_flNoiseImgPreviewScale: usize = 0xC8; // float
    pub const m_bNoiseImgPreviewLive: usize = 0xCC; // bool
    pub const m_flNoCameraFallback: usize = 0xD8; // float
    pub const m_bUseBoundsCenter: usize = 0xDC; // bool
    pub const m_nInputMode: usize = 0xE0; // ParticleFloatInputMode_t
    pub const m_flMultFactor: usize = 0xE4; // float
    pub const m_flInput0: usize = 0xE8; // float
    pub const m_flInput1: usize = 0xEC; // float
    pub const m_flOutput0: usize = 0xF0; // float
    pub const m_flOutput1: usize = 0xF4; // float
    pub const m_flNotchedRangeMin: usize = 0xF8; // float
    pub const m_flNotchedRangeMax: usize = 0xFC; // float
    pub const m_flNotchedOutputOutside: usize = 0x100; // float
    pub const m_flNotchedOutputInside: usize = 0x104; // float
    pub const m_nBiasType: usize = 0x108; // ParticleFloatBiasType_t
    pub const m_flBiasParameter: usize = 0x10C; // float
    pub const m_Curve: usize = 0x110; // CPiecewiseCurve
}

pub mod CParticleFunction {
    pub const m_flOpStrength: usize = 0x8; // CParticleCollectionFloatInput
    pub const m_nOpEndCapState: usize = 0x158; // ParticleEndcapMode_t
    pub const m_flOpStartFadeInTime: usize = 0x15C; // float
    pub const m_flOpEndFadeInTime: usize = 0x160; // float
    pub const m_flOpStartFadeOutTime: usize = 0x164; // float
    pub const m_flOpEndFadeOutTime: usize = 0x168; // float
    pub const m_flOpFadeOscillatePeriod: usize = 0x16C; // float
    pub const m_bNormalizeToStopTime: usize = 0x170; // bool
    pub const m_flOpTimeOffsetMin: usize = 0x174; // float
    pub const m_flOpTimeOffsetMax: usize = 0x178; // float
    pub const m_nOpTimeOffsetSeed: usize = 0x17C; // int32_t
    pub const m_nOpTimeScaleSeed: usize = 0x180; // int32_t
    pub const m_flOpTimeScaleMin: usize = 0x184; // float
    pub const m_flOpTimeScaleMax: usize = 0x188; // float
    pub const m_bDisableOperator: usize = 0x18E; // bool
    pub const m_Notes: usize = 0x190; // CUtlString
}

pub mod CParticleFunctionConstraint { // CParticleFunction
}

pub mod CParticleFunctionEmitter { // CParticleFunction
    pub const m_nEmitterIndex: usize = 0x1B0; // int32_t
}

pub mod CParticleFunctionForce { // CParticleFunction
}

pub mod CParticleFunctionInitializer { // CParticleFunction
    pub const m_nAssociatedEmitterIndex: usize = 0x1B0; // int32_t
}

pub mod CParticleFunctionOperator { // CParticleFunction
}

pub mod CParticleFunctionPreEmission { // CParticleFunctionOperator
    pub const m_bRunOnce: usize = 0x1B0; // bool
}

pub mod CParticleFunctionRenderer { // CParticleFunction
    pub const VisibilityInputs: usize = 0x1B0; // CParticleVisibilityInputs
    pub const m_bCannotBeRefracted: usize = 0x1F4; // bool
    pub const m_bSkipRenderingOnMobile: usize = 0x1F5; // bool
}

pub mod CParticleInput {
}

pub mod CParticleModelInput { // CParticleInput
    pub const m_nType: usize = 0xC; // ParticleModelType_t
    pub const m_NamedValue: usize = 0x10; // CParticleNamedValueRef
    pub const m_nControlPoint: usize = 0x50; // int32_t
}

pub mod CParticleProperty {
}

pub mod CParticleRemapFloatInput { // CParticleFloatInput
}

pub mod CParticleSystemDefinition { // IParticleSystemDefinition
    pub const m_nBehaviorVersion: usize = 0x8; // int32_t
    pub const m_PreEmissionOperators: usize = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
    pub const m_Emitters: usize = 0x28; // CUtlVector<CParticleFunctionEmitter*>
    pub const m_Initializers: usize = 0x40; // CUtlVector<CParticleFunctionInitializer*>
    pub const m_Operators: usize = 0x58; // CUtlVector<CParticleFunctionOperator*>
    pub const m_ForceGenerators: usize = 0x70; // CUtlVector<CParticleFunctionForce*>
    pub const m_Constraints: usize = 0x88; // CUtlVector<CParticleFunctionConstraint*>
    pub const m_Renderers: usize = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
    pub const m_Children: usize = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
    pub const m_nFirstMultipleOverride_BackwardCompat: usize = 0x178; // int32_t
    pub const m_nInitialParticles: usize = 0x210; // int32_t
    pub const m_nMaxParticles: usize = 0x214; // int32_t
    pub const m_nGroupID: usize = 0x218; // int32_t
    pub const m_BoundingBoxMin: usize = 0x21C; // Vector
    pub const m_BoundingBoxMax: usize = 0x228; // Vector
    pub const m_flDepthSortBias: usize = 0x234; // float
    pub const m_nSortOverridePositionCP: usize = 0x238; // int32_t
    pub const m_bInfiniteBounds: usize = 0x23C; // bool
    pub const m_bEnableNamedValues: usize = 0x23D; // bool
    pub const m_NamedValueDomain: usize = 0x240; // CUtlString
    pub const m_NamedValueLocals: usize = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
    pub const m_ConstantColor: usize = 0x260; // Color
    pub const m_ConstantNormal: usize = 0x264; // Vector
    pub const m_flConstantRadius: usize = 0x270; // float
    pub const m_flConstantRotation: usize = 0x274; // float
    pub const m_flConstantRotationSpeed: usize = 0x278; // float
    pub const m_flConstantLifespan: usize = 0x27C; // float
    pub const m_nConstantSequenceNumber: usize = 0x280; // int32_t
    pub const m_nConstantSequenceNumber1: usize = 0x284; // int32_t
    pub const m_nSnapshotControlPoint: usize = 0x288; // int32_t
    pub const m_hSnapshot: usize = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    pub const m_pszCullReplacementName: usize = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_flCullRadius: usize = 0x2A0; // float
    pub const m_flCullFillCost: usize = 0x2A4; // float
    pub const m_nCullControlPoint: usize = 0x2A8; // int32_t
    pub const m_hFallback: usize = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_nFallbackMaxCount: usize = 0x2B8; // int32_t
    pub const m_hLowViolenceDef: usize = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_hReferenceReplacement: usize = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_flPreSimulationTime: usize = 0x2D0; // float
    pub const m_flStopSimulationAfterTime: usize = 0x2D4; // float
    pub const m_flMaximumTimeStep: usize = 0x2D8; // float
    pub const m_flMaximumSimTime: usize = 0x2DC; // float
    pub const m_flMinimumSimTime: usize = 0x2E0; // float
    pub const m_flMinimumTimeStep: usize = 0x2E4; // float
    pub const m_nMinimumFrames: usize = 0x2E8; // int32_t
    pub const m_nMinCPULevel: usize = 0x2EC; // int32_t
    pub const m_nMinGPULevel: usize = 0x2F0; // int32_t
    pub const m_flNoDrawTimeToGoToSleep: usize = 0x2F4; // float
    pub const m_flMaxDrawDistance: usize = 0x2F8; // float
    pub const m_flStartFadeDistance: usize = 0x2FC; // float
    pub const m_flMaxCreationDistance: usize = 0x300; // float
    pub const m_nAggregationMinAvailableParticles: usize = 0x304; // int32_t
    pub const m_flAggregateRadius: usize = 0x308; // float
    pub const m_bShouldBatch: usize = 0x30C; // bool
    pub const m_bShouldHitboxesFallbackToRenderBounds: usize = 0x30D; // bool
    pub const m_bShouldHitboxesFallbackToSnapshot: usize = 0x30E; // bool
    pub const m_nViewModelEffect: usize = 0x310; // InheritableBoolType_t
    pub const m_bScreenSpaceEffect: usize = 0x314; // bool
    pub const m_pszTargetLayerID: usize = 0x318; // CUtlSymbolLarge
    pub const m_nSkipRenderControlPoint: usize = 0x320; // int32_t
    pub const m_nAllowRenderControlPoint: usize = 0x324; // int32_t
    pub const m_bShouldSort: usize = 0x328; // bool
    pub const m_controlPointConfigurations: usize = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
}

pub mod CParticleTransformInput { // CParticleInput
    pub const m_nType: usize = 0xC; // ParticleTransformType_t
    pub const m_NamedValue: usize = 0x10; // CParticleNamedValueRef
    pub const m_bFollowNamedValue: usize = 0x50; // bool
    pub const m_bSupportsDisabled: usize = 0x51; // bool
    pub const m_bUseOrientation: usize = 0x52; // bool
    pub const m_nControlPoint: usize = 0x54; // int32_t
    pub const m_nControlPointRangeMax: usize = 0x58; // int32_t
    pub const m_flEndCPGrowthTime: usize = 0x5C; // float
}

pub mod CParticleVariableRef {
    pub const m_variableName: usize = 0x0; // CKV3MemberNameWithStorage
    pub const m_variableType: usize = 0x38; // PulseValueType_t
}

pub mod CParticleVecInput { // CParticleInput
    pub const m_nType: usize = 0xC; // ParticleVecType_t
    pub const m_vLiteralValue: usize = 0x10; // Vector
    pub const m_LiteralColor: usize = 0x1C; // Color
    pub const m_NamedValue: usize = 0x20; // CParticleNamedValueRef
    pub const m_bFollowNamedValue: usize = 0x60; // bool
    pub const m_nVectorAttribute: usize = 0x64; // ParticleAttributeIndex_t
    pub const m_vVectorAttributeScale: usize = 0x68; // Vector
    pub const m_nControlPoint: usize = 0x74; // int32_t
    pub const m_nDeltaControlPoint: usize = 0x78; // int32_t
    pub const m_vCPValueScale: usize = 0x7C; // Vector
    pub const m_vCPRelativePosition: usize = 0x88; // Vector
    pub const m_vCPRelativeDir: usize = 0x94; // Vector
    pub const m_FloatComponentX: usize = 0xA0; // CParticleFloatInput
    pub const m_FloatComponentY: usize = 0x1F0; // CParticleFloatInput
    pub const m_FloatComponentZ: usize = 0x340; // CParticleFloatInput
    pub const m_FloatInterp: usize = 0x490; // CParticleFloatInput
    pub const m_flInterpInput0: usize = 0x5E0; // float
    pub const m_flInterpInput1: usize = 0x5E4; // float
    pub const m_vInterpOutput0: usize = 0x5E8; // Vector
    pub const m_vInterpOutput1: usize = 0x5F4; // Vector
    pub const m_Gradient: usize = 0x600; // CColorGradient
    pub const m_vRandomMin: usize = 0x618; // Vector
    pub const m_vRandomMax: usize = 0x624; // Vector
}

pub mod CParticleVisibilityInputs {
    pub const m_flCameraBias: usize = 0x0; // float
    pub const m_nCPin: usize = 0x4; // int32_t
    pub const m_flProxyRadius: usize = 0x8; // float
    pub const m_flInputMin: usize = 0xC; // float
    pub const m_flInputMax: usize = 0x10; // float
    pub const m_flNoPixelVisibilityFallback: usize = 0x14; // float
    pub const m_flDistanceInputMin: usize = 0x18; // float
    pub const m_flDistanceInputMax: usize = 0x1C; // float
    pub const m_flDotInputMin: usize = 0x20; // float
    pub const m_flDotInputMax: usize = 0x24; // float
    pub const m_bDotCPAngles: usize = 0x28; // bool
    pub const m_bDotCameraAngles: usize = 0x29; // bool
    pub const m_flAlphaScaleMin: usize = 0x2C; // float
    pub const m_flAlphaScaleMax: usize = 0x30; // float
    pub const m_flRadiusScaleMin: usize = 0x34; // float
    pub const m_flRadiusScaleMax: usize = 0x38; // float
    pub const m_flRadiusScaleFOVBase: usize = 0x3C; // float
    pub const m_bRightEye: usize = 0x40; // bool
}

pub mod CPathParameters {
    pub const m_nStartControlPointNumber: usize = 0x0; // int32_t
    pub const m_nEndControlPointNumber: usize = 0x4; // int32_t
    pub const m_nBulgeControl: usize = 0x8; // int32_t
    pub const m_flBulge: usize = 0xC; // float
    pub const m_flMidPoint: usize = 0x10; // float
    pub const m_vStartPointOffset: usize = 0x14; // Vector
    pub const m_vMidPointOffset: usize = 0x20; // Vector
    pub const m_vEndOffset: usize = 0x2C; // Vector
}

pub mod CPerParticleFloatInput { // CParticleFloatInput
}

pub mod CPerParticleVecInput { // CParticleVecInput
}

pub mod CRandomNumberGeneratorParameters {
    pub const m_bDistributeEvenly: usize = 0x0; // bool
    pub const m_nSeed: usize = 0x4; // int32_t
}

pub mod CSpinUpdateBase { // CParticleFunctionOperator
}

pub mod C_INIT_AddVectorToVector { // CParticleFunctionInitializer
    pub const m_vecScale: usize = 0x1B4; // Vector
    pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
    pub const m_nFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
    pub const m_vOffsetMin: usize = 0x1C8; // Vector
    pub const m_vOffsetMax: usize = 0x1D4; // Vector
    pub const m_randomnessParameters: usize = 0x1E0; // CRandomNumberGeneratorParameters
}

pub mod C_INIT_AgeNoise { // CParticleFunctionInitializer
    pub const m_bAbsVal: usize = 0x1B4; // bool
    pub const m_bAbsValInv: usize = 0x1B5; // bool
    pub const m_flOffset: usize = 0x1B8; // float
    pub const m_flAgeMin: usize = 0x1BC; // float
    pub const m_flAgeMax: usize = 0x1C0; // float
    pub const m_flNoiseScale: usize = 0x1C4; // float
    pub const m_flNoiseScaleLoc: usize = 0x1C8; // float
    pub const m_vecOffsetLoc: usize = 0x1CC; // Vector
}

pub mod C_INIT_ChaoticAttractor { // CParticleFunctionInitializer
    pub const m_flAParm: usize = 0x1B4; // float
    pub const m_flBParm: usize = 0x1B8; // float
    pub const m_flCParm: usize = 0x1BC; // float
    pub const m_flDParm: usize = 0x1C0; // float
    pub const m_flScale: usize = 0x1C4; // float
    pub const m_flSpeedMin: usize = 0x1C8; // float
    pub const m_flSpeedMax: usize = 0x1CC; // float
    pub const m_nBaseCP: usize = 0x1D0; // int32_t
    pub const m_bUniformSpeed: usize = 0x1D4; // bool
}

pub mod C_INIT_ColorLitPerParticle { // CParticleFunctionInitializer
    pub const m_ColorMin: usize = 0x1CC; // Color
    pub const m_ColorMax: usize = 0x1D0; // Color
    pub const m_TintMin: usize = 0x1D4; // Color
    pub const m_TintMax: usize = 0x1D8; // Color
    pub const m_flTintPerc: usize = 0x1DC; // float
    pub const m_nTintBlendMode: usize = 0x1E0; // ParticleColorBlendMode_t
    pub const m_flLightAmplification: usize = 0x1E4; // float
}

pub mod C_INIT_CreateAlongPath { // CParticleFunctionInitializer
    pub const m_fMaxDistance: usize = 0x1B4; // float
    pub const m_PathParams: usize = 0x1C0; // CPathParameters
    pub const m_bUseRandomCPs: usize = 0x200; // bool
    pub const m_vEndOffset: usize = 0x204; // Vector
    pub const m_bSaveOffset: usize = 0x210; // bool
}

pub mod C_INIT_CreateFromCPs { // CParticleFunctionInitializer
    pub const m_nIncrement: usize = 0x1B4; // int32_t
    pub const m_nMinCP: usize = 0x1B8; // int32_t
    pub const m_nMaxCP: usize = 0x1BC; // int32_t
    pub const m_nDynamicCPCount: usize = 0x1C0; // CParticleCollectionFloatInput
}

pub mod C_INIT_CreateFromParentParticles { // CParticleFunctionInitializer
    pub const m_flVelocityScale: usize = 0x1B4; // float
    pub const m_flIncrement: usize = 0x1B8; // float
    pub const m_bRandomDistribution: usize = 0x1BC; // bool
    pub const m_nRandomSeed: usize = 0x1C0; // int32_t
    pub const m_bSubFrame: usize = 0x1C4; // bool
}

pub mod C_INIT_CreateFromPlaneCache { // CParticleFunctionInitializer
    pub const m_vecOffsetMin: usize = 0x1B4; // Vector
    pub const m_vecOffsetMax: usize = 0x1C0; // Vector
    pub const m_bUseNormal: usize = 0x1CD; // bool
}

pub mod C_INIT_CreateInEpitrochoid { // CParticleFunctionInitializer
    pub const m_nComponent1: usize = 0x1B4; // int32_t
    pub const m_nComponent2: usize = 0x1B8; // int32_t
    pub const m_TransformInput: usize = 0x1C0; // CParticleTransformInput
    pub const m_flParticleDensity: usize = 0x220; // CPerParticleFloatInput
    pub const m_flOffset: usize = 0x370; // CPerParticleFloatInput
    pub const m_flRadius1: usize = 0x4C0; // CPerParticleFloatInput
    pub const m_flRadius2: usize = 0x610; // CPerParticleFloatInput
    pub const m_bUseCount: usize = 0x760; // bool
    pub const m_bUseLocalCoords: usize = 0x761; // bool
    pub const m_bOffsetExistingPos: usize = 0x762; // bool
}

pub mod C_INIT_CreateOnGrid { // CParticleFunctionInitializer
    pub const m_nXCount: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_nYCount: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_nZCount: usize = 0x458; // CParticleCollectionFloatInput
    pub const m_nXSpacing: usize = 0x5A8; // CParticleCollectionFloatInput
    pub const m_nYSpacing: usize = 0x6F8; // CParticleCollectionFloatInput
    pub const m_nZSpacing: usize = 0x848; // CParticleCollectionFloatInput
    pub const m_nControlPointNumber: usize = 0x998; // int32_t
    pub const m_bLocalSpace: usize = 0x99C; // bool
    pub const m_bCenter: usize = 0x99D; // bool
    pub const m_bHollow: usize = 0x99E; // bool
}

pub mod C_INIT_CreateOnModel { // CParticleFunctionInitializer
    pub const m_modelInput: usize = 0x1B8; // CParticleModelInput
    pub const m_transformInput: usize = 0x210; // CParticleTransformInput
    pub const m_nForceInModel: usize = 0x270; // int32_t
    pub const m_nDesiredHitbox: usize = 0x274; // int32_t
    pub const m_nHitboxValueFromControlPointIndex: usize = 0x278; // int32_t
    pub const m_vecHitBoxScale: usize = 0x280; // CParticleCollectionVecInput
    pub const m_flBoneVelocity: usize = 0x8B0; // float
    pub const m_flMaxBoneVelocity: usize = 0x8B4; // float
    pub const m_vecDirectionBias: usize = 0x8B8; // CParticleCollectionVecInput
    pub const m_HitboxSetName: usize = 0xEE8; // char[128]
    pub const m_bLocalCoords: usize = 0xF68; // bool
    pub const m_bUseBones: usize = 0xF69; // bool
    pub const m_bUseMesh: usize = 0xF6A; // bool
    pub const m_flShellSize: usize = 0xF70; // CParticleCollectionFloatInput
}

pub mod C_INIT_CreateOnModelAtHeight { // CParticleFunctionInitializer
    pub const m_bUseBones: usize = 0x1B4; // bool
    pub const m_bForceZ: usize = 0x1B5; // bool
    pub const m_nControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_nHeightCP: usize = 0x1BC; // int32_t
    pub const m_bUseWaterHeight: usize = 0x1C0; // bool
    pub const m_flDesiredHeight: usize = 0x1C8; // CParticleCollectionFloatInput
    pub const m_vecHitBoxScale: usize = 0x318; // CParticleCollectionVecInput
    pub const m_vecDirectionBias: usize = 0x948; // CParticleCollectionVecInput
    pub const m_nBiasType: usize = 0xF78; // ParticleHitboxBiasType_t
    pub const m_bLocalCoords: usize = 0xF7C; // bool
    pub const m_bPreferMovingBoxes: usize = 0xF7D; // bool
    pub const m_HitboxSetName: usize = 0xF7E; // char[128]
    pub const m_flHitboxVelocityScale: usize = 0x1000; // CParticleCollectionFloatInput
    pub const m_flMaxBoneVelocity: usize = 0x1150; // CParticleCollectionFloatInput
}

pub mod C_INIT_CreateParticleImpulse { // CParticleFunctionInitializer
    pub const m_InputRadius: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_InputMagnitude: usize = 0x308; // CPerParticleFloatInput
    pub const m_nFalloffFunction: usize = 0x458; // ParticleFalloffFunction_t
    pub const m_InputFalloffExp: usize = 0x460; // CPerParticleFloatInput
    pub const m_nImpulseType: usize = 0x5B0; // ParticleImpulseType_t
}

pub mod C_INIT_CreatePhyllotaxis { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nScaleCP: usize = 0x1B8; // int32_t
    pub const m_nComponent: usize = 0x1BC; // int32_t
    pub const m_fRadCentCore: usize = 0x1C0; // float
    pub const m_fRadPerPoint: usize = 0x1C4; // float
    pub const m_fRadPerPointTo: usize = 0x1C8; // float
    pub const m_fpointAngle: usize = 0x1CC; // float
    pub const m_fsizeOverall: usize = 0x1D0; // float
    pub const m_fRadBias: usize = 0x1D4; // float
    pub const m_fMinRad: usize = 0x1D8; // float
    pub const m_fDistBias: usize = 0x1DC; // float
    pub const m_bUseLocalCoords: usize = 0x1E0; // bool
    pub const m_bUseWithContEmit: usize = 0x1E1; // bool
    pub const m_bUseOrigRadius: usize = 0x1E2; // bool
}

pub mod C_INIT_CreateSequentialPath { // CParticleFunctionInitializer
    pub const m_fMaxDistance: usize = 0x1B4; // float
    pub const m_flNumToAssign: usize = 0x1B8; // float
    pub const m_bLoop: usize = 0x1BC; // bool
    pub const m_bCPPairs: usize = 0x1BD; // bool
    pub const m_bSaveOffset: usize = 0x1BE; // bool
    pub const m_PathParams: usize = 0x1C0; // CPathParameters
}

pub mod C_INIT_CreateSequentialPathV2 { // CParticleFunctionInitializer
    pub const m_fMaxDistance: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flNumToAssign: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_bLoop: usize = 0x458; // bool
    pub const m_bCPPairs: usize = 0x459; // bool
    pub const m_bSaveOffset: usize = 0x45A; // bool
    pub const m_PathParams: usize = 0x460; // CPathParameters
}

pub mod C_INIT_CreateSpiralSphere { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nOverrideCP: usize = 0x1B8; // int32_t
    pub const m_nDensity: usize = 0x1BC; // int32_t
    pub const m_flInitialRadius: usize = 0x1C0; // float
    pub const m_flInitialSpeedMin: usize = 0x1C4; // float
    pub const m_flInitialSpeedMax: usize = 0x1C8; // float
    pub const m_bUseParticleCount: usize = 0x1CC; // bool
}

pub mod C_INIT_CreateWithinBox { // CParticleFunctionInitializer
    pub const m_vecMin: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vecMax: usize = 0x7E8; // CPerParticleVecInput
    pub const m_nControlPointNumber: usize = 0xE18; // int32_t
    pub const m_bLocalSpace: usize = 0xE1C; // bool
    pub const m_randomnessParameters: usize = 0xE20; // CRandomNumberGeneratorParameters
}

pub mod C_INIT_CreateWithinSphereTransform { // CParticleFunctionInitializer
    pub const m_fRadiusMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_fRadiusMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_vecDistanceBias: usize = 0x458; // CPerParticleVecInput
    pub const m_vecDistanceBiasAbs: usize = 0xA88; // Vector
    pub const m_TransformInput: usize = 0xA98; // CParticleTransformInput
    pub const m_fSpeedMin: usize = 0xAF8; // CPerParticleFloatInput
    pub const m_fSpeedMax: usize = 0xC48; // CPerParticleFloatInput
    pub const m_fSpeedRandExp: usize = 0xD98; // float
    pub const m_bLocalCoords: usize = 0xD9C; // bool
    pub const m_flEndCPGrowthTime: usize = 0xDA0; // float
    pub const m_LocalCoordinateSystemSpeedMin: usize = 0xDA8; // CPerParticleVecInput
    pub const m_LocalCoordinateSystemSpeedMax: usize = 0x13D8; // CPerParticleVecInput
    pub const m_nFieldOutput: usize = 0x1A08; // ParticleAttributeIndex_t
    pub const m_nFieldVelocity: usize = 0x1A0C; // ParticleAttributeIndex_t
}

pub mod C_INIT_CreationNoise { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_bAbsVal: usize = 0x1B8; // bool
    pub const m_bAbsValInv: usize = 0x1B9; // bool
    pub const m_flOffset: usize = 0x1BC; // float
    pub const m_flOutputMin: usize = 0x1C0; // float
    pub const m_flOutputMax: usize = 0x1C4; // float
    pub const m_flNoiseScale: usize = 0x1C8; // float
    pub const m_flNoiseScaleLoc: usize = 0x1CC; // float
    pub const m_vecOffsetLoc: usize = 0x1D0; // Vector
    pub const m_flWorldTimeScale: usize = 0x1DC; // float
}

pub mod C_INIT_DistanceCull { // CParticleFunctionInitializer
    pub const m_nControlPoint: usize = 0x1B4; // int32_t
    pub const m_flDistance: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_bCullInside: usize = 0x308; // bool
}

pub mod C_INIT_DistanceToCPInit { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flInputMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_flOutputMin: usize = 0x458; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x5A8; // CPerParticleFloatInput
    pub const m_nStartCP: usize = 0x6F8; // int32_t
    pub const m_bLOS: usize = 0x6FC; // bool
    pub const m_CollisionGroupName: usize = 0x6FD; // char[128]
    pub const m_nTraceSet: usize = 0x780; // ParticleTraceSet_t
    pub const m_flMaxTraceLength: usize = 0x788; // CPerParticleFloatInput
    pub const m_flLOSScale: usize = 0x8D8; // float
    pub const m_nSetMethod: usize = 0x8DC; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x8E0; // bool
    pub const m_vecDistanceScale: usize = 0x8E4; // Vector
    pub const m_flRemapBias: usize = 0x8F0; // float
}

pub mod C_INIT_DistanceToNeighborCull { // CParticleFunctionInitializer
    pub const m_flDistance: usize = 0x1B8; // CPerParticleFloatInput
}

pub mod C_INIT_GlobalScale { // CParticleFunctionInitializer
    pub const m_flScale: usize = 0x1B4; // float
    pub const m_nScaleControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_nControlPointNumber: usize = 0x1BC; // int32_t
    pub const m_bScaleRadius: usize = 0x1C0; // bool
    pub const m_bScalePosition: usize = 0x1C1; // bool
    pub const m_bScaleVelocity: usize = 0x1C2; // bool
}

pub mod C_INIT_InheritFromParentParticles { // CParticleFunctionInitializer
    pub const m_flScale: usize = 0x1B4; // float
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_nIncrement: usize = 0x1BC; // int32_t
    pub const m_bRandomDistribution: usize = 0x1C0; // bool
    pub const m_nRandomSeed: usize = 0x1C4; // int32_t
}

pub mod C_INIT_InheritVelocity { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_flVelocityScale: usize = 0x1B8; // float
}

pub mod C_INIT_InitFloat { // CParticleFunctionInitializer
    pub const m_InputValue: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_nOutputField: usize = 0x308; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x30C; // ParticleSetMethod_t
    pub const m_InputStrength: usize = 0x310; // CPerParticleFloatInput
}

pub mod C_INIT_InitFloatCollection { // CParticleFunctionInitializer
    pub const m_InputValue: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_nOutputField: usize = 0x308; // ParticleAttributeIndex_t
}

pub mod C_INIT_InitFromCPSnapshot { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nAttributeToRead: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_nAttributeToWrite: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_nLocalSpaceCP: usize = 0x1C0; // int32_t
    pub const m_bRandom: usize = 0x1C4; // bool
    pub const m_bReverse: usize = 0x1C5; // bool
    pub const m_nSnapShotIncrement: usize = 0x1C8; // CParticleCollectionFloatInput
    pub const m_nManualSnapshotIndex: usize = 0x318; // CPerParticleFloatInput
    pub const m_nRandomSeed: usize = 0x468; // int32_t
    pub const m_bLocalSpaceAngles: usize = 0x46C; // bool
}

pub mod C_INIT_InitFromParentKilled { // CParticleFunctionInitializer
    pub const m_nAttributeToCopy: usize = 0x1B4; // ParticleAttributeIndex_t
}

pub mod C_INIT_InitFromVectorFieldSnapshot { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nLocalSpaceCP: usize = 0x1B8; // int32_t
    pub const m_nWeightUpdateCP: usize = 0x1BC; // int32_t
    pub const m_bUseVerticalVelocity: usize = 0x1C0; // bool
    pub const m_vecScale: usize = 0x1C8; // CPerParticleVecInput
}

pub mod C_INIT_InitSkinnedPositionFromCPSnapshot { // CParticleFunctionInitializer
    pub const m_nSnapshotControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_bRandom: usize = 0x1BC; // bool
    pub const m_nRandomSeed: usize = 0x1C0; // int32_t
    pub const m_bRigid: usize = 0x1C4; // bool
    pub const m_bSetNormal: usize = 0x1C5; // bool
    pub const m_bIgnoreDt: usize = 0x1C6; // bool
    pub const m_flMinNormalVelocity: usize = 0x1C8; // float
    pub const m_flMaxNormalVelocity: usize = 0x1CC; // float
    pub const m_nIndexType: usize = 0x1D0; // SnapshotIndexType_t
    pub const m_flReadIndex: usize = 0x1D8; // CPerParticleFloatInput
    pub const m_flIncrement: usize = 0x328; // float
    pub const m_nFullLoopIncrement: usize = 0x32C; // int32_t
    pub const m_nSnapShotStartPoint: usize = 0x330; // int32_t
    pub const m_flBoneVelocity: usize = 0x334; // float
    pub const m_flBoneVelocityMax: usize = 0x338; // float
    pub const m_bCopyColor: usize = 0x33C; // bool
    pub const m_bCopyAlpha: usize = 0x33D; // bool
    pub const m_bSetRadius: usize = 0x33E; // bool
}

pub mod C_INIT_InitVec { // CParticleFunctionInitializer
    pub const m_InputValue: usize = 0x1B8; // CPerParticleVecInput
    pub const m_nOutputField: usize = 0x7E8; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x7EC; // ParticleSetMethod_t
    pub const m_bNormalizedOutput: usize = 0x7F0; // bool
    pub const m_bWritePreviousPosition: usize = 0x7F1; // bool
}

pub mod C_INIT_InitVecCollection { // CParticleFunctionInitializer
    pub const m_InputValue: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_nOutputField: usize = 0x7E8; // ParticleAttributeIndex_t
}

pub mod C_INIT_InitialRepulsionVelocity { // CParticleFunctionInitializer
    pub const m_CollisionGroupName: usize = 0x1B4; // char[128]
    pub const m_nTraceSet: usize = 0x234; // ParticleTraceSet_t
    pub const m_vecOutputMin: usize = 0x238; // Vector
    pub const m_vecOutputMax: usize = 0x244; // Vector
    pub const m_nControlPointNumber: usize = 0x250; // int32_t
    pub const m_bPerParticle: usize = 0x254; // bool
    pub const m_bTranslate: usize = 0x255; // bool
    pub const m_bProportional: usize = 0x256; // bool
    pub const m_flTraceLength: usize = 0x258; // float
    pub const m_bPerParticleTR: usize = 0x25C; // bool
    pub const m_bInherit: usize = 0x25D; // bool
    pub const m_nChildCP: usize = 0x260; // int32_t
    pub const m_nChildGroupID: usize = 0x264; // int32_t
}

pub mod C_INIT_InitialSequenceFromModel { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_nFieldOutputAnim: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1C0; // float
    pub const m_flInputMax: usize = 0x1C4; // float
    pub const m_flOutputMin: usize = 0x1C8; // float
    pub const m_flOutputMax: usize = 0x1CC; // float
    pub const m_nSetMethod: usize = 0x1D0; // ParticleSetMethod_t
}

pub mod C_INIT_InitialVelocityFromHitbox { // CParticleFunctionInitializer
    pub const m_flVelocityMin: usize = 0x1B4; // float
    pub const m_flVelocityMax: usize = 0x1B8; // float
    pub const m_nControlPointNumber: usize = 0x1BC; // int32_t
    pub const m_HitboxSetName: usize = 0x1C0; // char[128]
    pub const m_bUseBones: usize = 0x240; // bool
}

pub mod C_INIT_InitialVelocityNoise { // CParticleFunctionInitializer
    pub const m_vecAbsVal: usize = 0x1B4; // Vector
    pub const m_vecAbsValInv: usize = 0x1C0; // Vector
    pub const m_vecOffsetLoc: usize = 0x1D0; // CPerParticleVecInput
    pub const m_flOffset: usize = 0x800; // CPerParticleFloatInput
    pub const m_vecOutputMin: usize = 0x950; // CPerParticleVecInput
    pub const m_vecOutputMax: usize = 0xF80; // CPerParticleVecInput
    pub const m_flNoiseScale: usize = 0x15B0; // CPerParticleFloatInput
    pub const m_flNoiseScaleLoc: usize = 0x1700; // CPerParticleFloatInput
    pub const m_TransformInput: usize = 0x1850; // CParticleTransformInput
    pub const m_bIgnoreDt: usize = 0x18B0; // bool
}

pub mod C_INIT_LifespanFromVelocity { // CParticleFunctionInitializer
    pub const m_vecComponentScale: usize = 0x1B4; // Vector
    pub const m_flTraceOffset: usize = 0x1C0; // float
    pub const m_flMaxTraceLength: usize = 0x1C4; // float
    pub const m_flTraceTolerance: usize = 0x1C8; // float
    pub const m_nMaxPlanes: usize = 0x1CC; // int32_t
    pub const m_CollisionGroupName: usize = 0x1D4; // char[128]
    pub const m_nTraceSet: usize = 0x254; // ParticleTraceSet_t
    pub const m_bIncludeWater: usize = 0x260; // bool
}

pub mod C_INIT_ModelCull { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_bBoundBox: usize = 0x1B8; // bool
    pub const m_bCullOutside: usize = 0x1B9; // bool
    pub const m_bUseBones: usize = 0x1BA; // bool
    pub const m_HitboxSetName: usize = 0x1BB; // char[128]
}

pub mod C_INIT_MoveBetweenPoints { // CParticleFunctionInitializer
    pub const m_flSpeedMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flSpeedMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_flEndSpread: usize = 0x458; // CPerParticleFloatInput
    pub const m_flStartOffset: usize = 0x5A8; // CPerParticleFloatInput
    pub const m_flEndOffset: usize = 0x6F8; // CPerParticleFloatInput
    pub const m_nEndControlPointNumber: usize = 0x848; // int32_t
    pub const m_bTrailBias: usize = 0x84C; // bool
}

pub mod C_INIT_NormalAlignToCP { // CParticleFunctionInitializer
    pub const m_transformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_nControlPointAxis: usize = 0x218; // ParticleControlPointAxis_t
}

pub mod C_INIT_NormalOffset { // CParticleFunctionInitializer
    pub const m_OffsetMin: usize = 0x1B4; // Vector
    pub const m_OffsetMax: usize = 0x1C0; // Vector
    pub const m_nControlPointNumber: usize = 0x1CC; // int32_t
    pub const m_bLocalCoords: usize = 0x1D0; // bool
    pub const m_bNormalize: usize = 0x1D1; // bool
}

pub mod C_INIT_OffsetVectorToVector { // CParticleFunctionInitializer
    pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_vecOutputMin: usize = 0x1BC; // Vector
    pub const m_vecOutputMax: usize = 0x1C8; // Vector
    pub const m_randomnessParameters: usize = 0x1D4; // CRandomNumberGeneratorParameters
}

pub mod C_INIT_Orient2DRelToCP { // CParticleFunctionInitializer
    pub const m_nCP: usize = 0x1B4; // int32_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flRotOffset: usize = 0x1BC; // float
}

pub mod C_INIT_PlaneCull { // CParticleFunctionInitializer
    pub const m_nControlPoint: usize = 0x1B4; // int32_t
    pub const m_flDistance: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_bCullInside: usize = 0x308; // bool
}

pub mod C_INIT_PointList { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_pointList: usize = 0x1B8; // CUtlVector<PointDefinition_t>
    pub const m_bPlaceAlongPath: usize = 0x1D0; // bool
    pub const m_bClosedLoop: usize = 0x1D1; // bool
    pub const m_nNumPointsAlongPath: usize = 0x1D4; // int32_t
}

pub mod C_INIT_PositionOffset { // CParticleFunctionInitializer
    pub const m_OffsetMin: usize = 0x1B8; // CPerParticleVecInput
    pub const m_OffsetMax: usize = 0x7E8; // CPerParticleVecInput
    pub const m_TransformInput: usize = 0xE18; // CParticleTransformInput
    pub const m_bLocalCoords: usize = 0xE78; // bool
    pub const m_bProportional: usize = 0xE79; // bool
    pub const m_randomnessParameters: usize = 0xE7C; // CRandomNumberGeneratorParameters
}

pub mod C_INIT_PositionOffsetToCP { // CParticleFunctionInitializer
    pub const m_nControlPointNumberStart: usize = 0x1B4; // int32_t
    pub const m_nControlPointNumberEnd: usize = 0x1B8; // int32_t
    pub const m_bLocalCoords: usize = 0x1BC; // bool
}

pub mod C_INIT_PositionPlaceOnGround { // CParticleFunctionInitializer
    pub const m_flOffset: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flMaxTraceLength: usize = 0x308; // CPerParticleFloatInput
    pub const m_CollisionGroupName: usize = 0x458; // char[128]
    pub const m_nTraceSet: usize = 0x4D8; // ParticleTraceSet_t
    pub const m_nTraceMissBehavior: usize = 0x4E8; // ParticleTraceMissBehavior_t
    pub const m_bIncludeWater: usize = 0x4EC; // bool
    pub const m_bSetNormal: usize = 0x4ED; // bool
    pub const m_bSetPXYZOnly: usize = 0x4EE; // bool
    pub const m_bTraceAlongNormal: usize = 0x4EF; // bool
    pub const m_bOffsetonColOnly: usize = 0x4F0; // bool
    pub const m_flOffsetByRadiusFactor: usize = 0x4F4; // float
    pub const m_nPreserveOffsetCP: usize = 0x4F8; // int32_t
    pub const m_nIgnoreCP: usize = 0x4FC; // int32_t
}

pub mod C_INIT_PositionWarp { // CParticleFunctionInitializer
    pub const m_vecWarpMin: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_vecWarpMax: usize = 0x7E8; // CParticleCollectionVecInput
    pub const m_nScaleControlPointNumber: usize = 0xE18; // int32_t
    pub const m_nControlPointNumber: usize = 0xE1C; // int32_t
    pub const m_nRadiusComponent: usize = 0xE20; // int32_t
    pub const m_flWarpTime: usize = 0xE24; // float
    pub const m_flWarpStartTime: usize = 0xE28; // float
    pub const m_flPrevPosScale: usize = 0xE2C; // float
    pub const m_bInvertWarp: usize = 0xE30; // bool
    pub const m_bUseCount: usize = 0xE31; // bool
}

pub mod C_INIT_PositionWarpScalar { // CParticleFunctionInitializer
    pub const m_vecWarpMin: usize = 0x1B4; // Vector
    pub const m_vecWarpMax: usize = 0x1C0; // Vector
    pub const m_InputValue: usize = 0x1D0; // CPerParticleFloatInput
    pub const m_flPrevPosScale: usize = 0x320; // float
    pub const m_nScaleControlPointNumber: usize = 0x324; // int32_t
    pub const m_nControlPointNumber: usize = 0x328; // int32_t
}

pub mod C_INIT_QuantizeFloat { // CParticleFunctionInitializer
    pub const m_InputValue: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_nOutputField: usize = 0x308; // ParticleAttributeIndex_t
}

pub mod C_INIT_RadiusFromCPObject { // CParticleFunctionInitializer
    pub const m_nControlPoint: usize = 0x1B4; // int32_t
}

pub mod C_INIT_RandomAlpha { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nAlphaMin: usize = 0x1B8; // int32_t
    pub const m_nAlphaMax: usize = 0x1BC; // int32_t
    pub const m_flAlphaRandExponent: usize = 0x1C8; // float
}

pub mod C_INIT_RandomAlphaWindowThreshold { // CParticleFunctionInitializer
    pub const m_flMin: usize = 0x1B4; // float
    pub const m_flMax: usize = 0x1B8; // float
    pub const m_flExponent: usize = 0x1BC; // float
}

pub mod C_INIT_RandomColor { // CParticleFunctionInitializer
    pub const m_ColorMin: usize = 0x1D0; // Color
    pub const m_ColorMax: usize = 0x1D4; // Color
    pub const m_TintMin: usize = 0x1D8; // Color
    pub const m_TintMax: usize = 0x1DC; // Color
    pub const m_flTintPerc: usize = 0x1E0; // float
    pub const m_flUpdateThreshold: usize = 0x1E4; // float
    pub const m_nTintCP: usize = 0x1E8; // int32_t
    pub const m_nFieldOutput: usize = 0x1EC; // ParticleAttributeIndex_t
    pub const m_nTintBlendMode: usize = 0x1F0; // ParticleColorBlendMode_t
    pub const m_flLightAmplification: usize = 0x1F4; // float
}

pub mod C_INIT_RandomLifeTime { // CParticleFunctionInitializer
    pub const m_fLifetimeMin: usize = 0x1B4; // float
    pub const m_fLifetimeMax: usize = 0x1B8; // float
    pub const m_fLifetimeRandExponent: usize = 0x1BC; // float
}

pub mod C_INIT_RandomModelSequence { // CParticleFunctionInitializer
    pub const m_ActivityName: usize = 0x1B4; // char[256]
    pub const m_SequenceName: usize = 0x2B4; // char[256]
    pub const m_hModel: usize = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
}

pub mod C_INIT_RandomNamedModelBodyPart { // C_INIT_RandomNamedModelElement
}

pub mod C_INIT_RandomNamedModelElement { // CParticleFunctionInitializer
    pub const m_hModel: usize = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_names: usize = 0x1C0; // CUtlVector<CUtlString>
    pub const m_bShuffle: usize = 0x1D8; // bool
    pub const m_bLinear: usize = 0x1D9; // bool
    pub const m_bModelFromRenderer: usize = 0x1DA; // bool
    pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
}

pub mod C_INIT_RandomNamedModelMeshGroup { // C_INIT_RandomNamedModelElement
}

pub mod C_INIT_RandomNamedModelSequence { // C_INIT_RandomNamedModelElement
}

pub mod C_INIT_RandomRadius { // CParticleFunctionInitializer
    pub const m_flRadiusMin: usize = 0x1B4; // float
    pub const m_flRadiusMax: usize = 0x1B8; // float
    pub const m_flRadiusRandExponent: usize = 0x1BC; // float
}

pub mod C_INIT_RandomRotation { // CGeneralRandomRotation
}

pub mod C_INIT_RandomRotationSpeed { // CGeneralRandomRotation
}

pub mod C_INIT_RandomScalar { // CParticleFunctionInitializer
    pub const m_flMin: usize = 0x1B4; // float
    pub const m_flMax: usize = 0x1B8; // float
    pub const m_flExponent: usize = 0x1BC; // float
    pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
}

pub mod C_INIT_RandomSecondSequence { // CParticleFunctionInitializer
    pub const m_nSequenceMin: usize = 0x1B4; // int32_t
    pub const m_nSequenceMax: usize = 0x1B8; // int32_t
}

pub mod C_INIT_RandomSequence { // CParticleFunctionInitializer
    pub const m_nSequenceMin: usize = 0x1B4; // int32_t
    pub const m_nSequenceMax: usize = 0x1B8; // int32_t
    pub const m_bShuffle: usize = 0x1BC; // bool
    pub const m_bLinear: usize = 0x1BD; // bool
    pub const m_WeightedList: usize = 0x1C0; // CUtlVector<SequenceWeightedList_t>
}

pub mod C_INIT_RandomTrailLength { // CParticleFunctionInitializer
    pub const m_flMinLength: usize = 0x1B4; // float
    pub const m_flMaxLength: usize = 0x1B8; // float
    pub const m_flLengthRandExponent: usize = 0x1BC; // float
}

pub mod C_INIT_RandomVector { // CParticleFunctionInitializer
    pub const m_vecMin: usize = 0x1B4; // Vector
    pub const m_vecMax: usize = 0x1C0; // Vector
    pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
    pub const m_randomnessParameters: usize = 0x1D0; // CRandomNumberGeneratorParameters
}

pub mod C_INIT_RandomVectorComponent { // CParticleFunctionInitializer
    pub const m_flMin: usize = 0x1B4; // float
    pub const m_flMax: usize = 0x1B8; // float
    pub const m_nFieldOutput: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_nComponent: usize = 0x1C0; // int32_t
}

pub mod C_INIT_RandomYaw { // CGeneralRandomRotation
}

pub mod C_INIT_RandomYawFlip { // CParticleFunctionInitializer
    pub const m_flPercent: usize = 0x1B4; // float
}

pub mod C_INIT_RemapCPtoScalar { // CParticleFunctionInitializer
    pub const m_nCPInput: usize = 0x1B4; // int32_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_nField: usize = 0x1BC; // int32_t
    pub const m_flInputMin: usize = 0x1C0; // float
    pub const m_flInputMax: usize = 0x1C4; // float
    pub const m_flOutputMin: usize = 0x1C8; // float
    pub const m_flOutputMax: usize = 0x1CC; // float
    pub const m_flStartTime: usize = 0x1D0; // float
    pub const m_flEndTime: usize = 0x1D4; // float
    pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
    pub const m_flRemapBias: usize = 0x1DC; // float
}

pub mod C_INIT_RemapInitialDirectionToTransformToVector { // CParticleFunctionInitializer
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x21C; // float
    pub const m_flOffsetRot: usize = 0x220; // float
    pub const m_vecOffsetAxis: usize = 0x224; // Vector
    pub const m_bNormalize: usize = 0x230; // bool
}

pub mod C_INIT_RemapInitialTransformDirectionToRotation { // CParticleFunctionInitializer
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
    pub const m_flOffsetRot: usize = 0x21C; // float
    pub const m_nComponent: usize = 0x220; // int32_t
}

pub mod C_INIT_RemapInitialVisibilityScalar { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
}

pub mod C_INIT_RemapNamedModelBodyPartToScalar { // C_INIT_RemapNamedModelElementToScalar
}

pub mod C_INIT_RemapNamedModelElementToScalar { // CParticleFunctionInitializer
    pub const m_hModel: usize = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_names: usize = 0x1C0; // CUtlVector<CUtlString>
    pub const m_values: usize = 0x1D8; // CUtlVector<float>
    pub const m_nFieldInput: usize = 0x1F0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1F4; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x1F8; // ParticleSetMethod_t
    pub const m_bModelFromRenderer: usize = 0x1FC; // bool
}

pub mod C_INIT_RemapNamedModelMeshGroupToScalar { // C_INIT_RemapNamedModelElementToScalar
}

pub mod C_INIT_RemapNamedModelSequenceToScalar { // C_INIT_RemapNamedModelElementToScalar
}

pub mod C_INIT_RemapParticleCountToNamedModelBodyPartScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

pub mod C_INIT_RemapParticleCountToNamedModelElementScalar { // C_INIT_RemapParticleCountToScalar
    pub const m_hModel: usize = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_outputMinName: usize = 0x1E8; // CUtlString
    pub const m_outputMaxName: usize = 0x1F0; // CUtlString
    pub const m_bModelFromRenderer: usize = 0x1F8; // bool
}

pub mod C_INIT_RemapParticleCountToNamedModelMeshGroupScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

pub mod C_INIT_RemapParticleCountToNamedModelSequenceScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

pub mod C_INIT_RemapParticleCountToScalar { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nInputMin: usize = 0x1B8; // int32_t
    pub const m_nInputMax: usize = 0x1BC; // int32_t
    pub const m_nScaleControlPoint: usize = 0x1C0; // int32_t
    pub const m_nScaleControlPointField: usize = 0x1C4; // int32_t
    pub const m_flOutputMin: usize = 0x1C8; // float
    pub const m_flOutputMax: usize = 0x1CC; // float
    pub const m_nSetMethod: usize = 0x1D0; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x1D4; // bool
    pub const m_bInvert: usize = 0x1D5; // bool
    pub const m_bWrap: usize = 0x1D6; // bool
    pub const m_flRemapBias: usize = 0x1D8; // float
}

pub mod C_INIT_RemapQAnglesToRotation { // CParticleFunctionInitializer
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
}

pub mod C_INIT_RemapScalar { // CParticleFunctionInitializer
    pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
    pub const m_flStartTime: usize = 0x1CC; // float
    pub const m_flEndTime: usize = 0x1D0; // float
    pub const m_nSetMethod: usize = 0x1D4; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x1D8; // bool
    pub const m_flRemapBias: usize = 0x1DC; // float
}

pub mod C_INIT_RemapScalarToVector { // CParticleFunctionInitializer
    pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_vecOutputMin: usize = 0x1C4; // Vector
    pub const m_vecOutputMax: usize = 0x1D0; // Vector
    pub const m_flStartTime: usize = 0x1DC; // float
    pub const m_flEndTime: usize = 0x1E0; // float
    pub const m_nSetMethod: usize = 0x1E4; // ParticleSetMethod_t
    pub const m_nControlPointNumber: usize = 0x1E8; // int32_t
    pub const m_bLocalCoords: usize = 0x1EC; // bool
    pub const m_flRemapBias: usize = 0x1F0; // float
}

pub mod C_INIT_RemapSpeedToScalar { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_flStartTime: usize = 0x1BC; // float
    pub const m_flEndTime: usize = 0x1C0; // float
    pub const m_flInputMin: usize = 0x1C4; // float
    pub const m_flInputMax: usize = 0x1C8; // float
    pub const m_flOutputMin: usize = 0x1CC; // float
    pub const m_flOutputMax: usize = 0x1D0; // float
    pub const m_nSetMethod: usize = 0x1D4; // ParticleSetMethod_t
    pub const m_bPerParticle: usize = 0x1D8; // bool
}

pub mod C_INIT_RemapTransformOrientationToRotations { // CParticleFunctionInitializer
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_vecRotation: usize = 0x218; // Vector
    pub const m_bUseQuat: usize = 0x224; // bool
    pub const m_bWriteNormal: usize = 0x225; // bool
}

pub mod C_INIT_RemapTransformToVector { // CParticleFunctionInitializer
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_vInputMin: usize = 0x1B8; // Vector
    pub const m_vInputMax: usize = 0x1C4; // Vector
    pub const m_vOutputMin: usize = 0x1D0; // Vector
    pub const m_vOutputMax: usize = 0x1DC; // Vector
    pub const m_TransformInput: usize = 0x1E8; // CParticleTransformInput
    pub const m_LocalSpaceTransform: usize = 0x248; // CParticleTransformInput
    pub const m_flStartTime: usize = 0x2A8; // float
    pub const m_flEndTime: usize = 0x2AC; // float
    pub const m_nSetMethod: usize = 0x2B0; // ParticleSetMethod_t
    pub const m_bOffset: usize = 0x2B4; // bool
    pub const m_bAccelerate: usize = 0x2B5; // bool
    pub const m_flRemapBias: usize = 0x2B8; // float
}

pub mod C_INIT_RingWave { // CParticleFunctionInitializer
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_flParticlesPerOrbit: usize = 0x218; // CParticleCollectionFloatInput
    pub const m_flInitialRadius: usize = 0x368; // CPerParticleFloatInput
    pub const m_flThickness: usize = 0x4B8; // CPerParticleFloatInput
    pub const m_flInitialSpeedMin: usize = 0x608; // CPerParticleFloatInput
    pub const m_flInitialSpeedMax: usize = 0x758; // CPerParticleFloatInput
    pub const m_flRoll: usize = 0x8A8; // CPerParticleFloatInput
    pub const m_flPitch: usize = 0x9F8; // CPerParticleFloatInput
    pub const m_flYaw: usize = 0xB48; // CPerParticleFloatInput
    pub const m_bEvenDistribution: usize = 0xC98; // bool
    pub const m_bXYVelocityOnly: usize = 0xC99; // bool
}

pub mod C_INIT_RtEnvCull { // CParticleFunctionInitializer
    pub const m_vecTestDir: usize = 0x1B4; // Vector
    pub const m_vecTestNormal: usize = 0x1C0; // Vector
    pub const m_bUseVelocity: usize = 0x1CC; // bool
    pub const m_bCullOnMiss: usize = 0x1CD; // bool
    pub const m_bLifeAdjust: usize = 0x1CE; // bool
    pub const m_RtEnvName: usize = 0x1CF; // char[128]
    pub const m_nRTEnvCP: usize = 0x250; // int32_t
    pub const m_nComponent: usize = 0x254; // int32_t
}

pub mod C_INIT_ScaleVelocity { // CParticleFunctionInitializer
    pub const m_vecScale: usize = 0x1B8; // CParticleCollectionVecInput
}

pub mod C_INIT_SequenceFromCP { // CParticleFunctionInitializer
    pub const m_bKillUnused: usize = 0x1B4; // bool
    pub const m_bRadiusScale: usize = 0x1B5; // bool
    pub const m_nCP: usize = 0x1B8; // int32_t
    pub const m_vecOffset: usize = 0x1BC; // Vector
}

pub mod C_INIT_SequenceLifeTime { // CParticleFunctionInitializer
    pub const m_flFramerate: usize = 0x1B4; // float
}

pub mod C_INIT_SetAttributeToScalarExpression { // CParticleFunctionInitializer
    pub const m_nExpression: usize = 0x1B4; // ScalarExpressionType_t
    pub const m_flInput1: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flInput2: usize = 0x308; // CPerParticleFloatInput
    pub const m_flOutputRemap: usize = 0x458; // CParticleRemapFloatInput
    pub const m_nOutputField: usize = 0x5A8; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x5AC; // ParticleSetMethod_t
}

pub mod C_INIT_SetHitboxToClosest { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nDesiredHitbox: usize = 0x1B8; // int32_t
    pub const m_vecHitBoxScale: usize = 0x1C0; // CParticleCollectionVecInput
    pub const m_HitboxSetName: usize = 0x7F0; // char[128]
    pub const m_bUseBones: usize = 0x870; // bool
    pub const m_bUseClosestPointOnHitbox: usize = 0x871; // bool
    pub const m_nTestType: usize = 0x874; // ClosestPointTestType_t
    pub const m_flHybridRatio: usize = 0x878; // CParticleCollectionFloatInput
    pub const m_bUpdatePosition: usize = 0x9C8; // bool
}

pub mod C_INIT_SetHitboxToModel { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nForceInModel: usize = 0x1B8; // int32_t
    pub const m_nDesiredHitbox: usize = 0x1BC; // int32_t
    pub const m_vecHitBoxScale: usize = 0x1C0; // CParticleCollectionVecInput
    pub const m_vecDirectionBias: usize = 0x7F0; // Vector
    pub const m_bMaintainHitbox: usize = 0x7FC; // bool
    pub const m_bUseBones: usize = 0x7FD; // bool
    pub const m_HitboxSetName: usize = 0x7FE; // char[128]
    pub const m_flShellSize: usize = 0x880; // CParticleCollectionFloatInput
}

pub mod C_INIT_SetRigidAttachment { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nFieldInput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_bLocalSpace: usize = 0x1C0; // bool
}

pub mod C_INIT_SetVectorAttributeToVectorExpression { // CParticleFunctionInitializer
    pub const m_nExpression: usize = 0x1B4; // VectorExpressionType_t
    pub const m_vInput1: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vInput2: usize = 0x7E8; // CPerParticleVecInput
    pub const m_nOutputField: usize = 0xE18; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0xE1C; // ParticleSetMethod_t
    pub const m_bNormalizedOutput: usize = 0xE20; // bool
}

pub mod C_INIT_StatusEffect { // CParticleFunctionInitializer
    pub const m_nDetail2Combo: usize = 0x1B4; // Detail2Combo_t
    pub const m_flDetail2Rotation: usize = 0x1B8; // float
    pub const m_flDetail2Scale: usize = 0x1BC; // float
    pub const m_flDetail2BlendFactor: usize = 0x1C0; // float
    pub const m_flColorWarpIntensity: usize = 0x1C4; // float
    pub const m_flDiffuseWarpBlendToFull: usize = 0x1C8; // float
    pub const m_flEnvMapIntensity: usize = 0x1CC; // float
    pub const m_flAmbientScale: usize = 0x1D0; // float
    pub const m_specularColor: usize = 0x1D4; // Color
    pub const m_flSpecularScale: usize = 0x1D8; // float
    pub const m_flSpecularExponent: usize = 0x1DC; // float
    pub const m_flSpecularExponentBlendToFull: usize = 0x1E0; // float
    pub const m_flSpecularBlendToFull: usize = 0x1E4; // float
    pub const m_rimLightColor: usize = 0x1E8; // Color
    pub const m_flRimLightScale: usize = 0x1EC; // float
    pub const m_flReflectionsTintByBaseBlendToNone: usize = 0x1F0; // float
    pub const m_flMetalnessBlendToFull: usize = 0x1F4; // float
    pub const m_flSelfIllumBlendToFull: usize = 0x1F8; // float
}

pub mod C_INIT_StatusEffectCitadel { // CParticleFunctionInitializer
    pub const m_flSFXColorWarpAmount: usize = 0x1B4; // float
    pub const m_flSFXNormalAmount: usize = 0x1B8; // float
    pub const m_flSFXMetalnessAmount: usize = 0x1BC; // float
    pub const m_flSFXRoughnessAmount: usize = 0x1C0; // float
    pub const m_flSFXSelfIllumAmount: usize = 0x1C4; // float
    pub const m_flSFXSScale: usize = 0x1C8; // float
    pub const m_flSFXSScrollX: usize = 0x1CC; // float
    pub const m_flSFXSScrollY: usize = 0x1D0; // float
    pub const m_flSFXSScrollZ: usize = 0x1D4; // float
    pub const m_flSFXSOffsetX: usize = 0x1D8; // float
    pub const m_flSFXSOffsetY: usize = 0x1DC; // float
    pub const m_flSFXSOffsetZ: usize = 0x1E0; // float
    pub const m_nDetailCombo: usize = 0x1E4; // DetailCombo_t
    pub const m_flSFXSDetailAmount: usize = 0x1E8; // float
    pub const m_flSFXSDetailScale: usize = 0x1EC; // float
    pub const m_flSFXSDetailScrollX: usize = 0x1F0; // float
    pub const m_flSFXSDetailScrollY: usize = 0x1F4; // float
    pub const m_flSFXSDetailScrollZ: usize = 0x1F8; // float
    pub const m_flSFXSUseModelUVs: usize = 0x1FC; // float
}

pub mod C_INIT_VelocityFromCP { // CParticleFunctionInitializer
    pub const m_velocityInput: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_transformInput: usize = 0x7E8; // CParticleTransformInput
    pub const m_flVelocityScale: usize = 0x848; // float
    pub const m_bDirectionOnly: usize = 0x84C; // bool
}

pub mod C_INIT_VelocityFromNormal { // CParticleFunctionInitializer
    pub const m_fSpeedMin: usize = 0x1B4; // float
    pub const m_fSpeedMax: usize = 0x1B8; // float
    pub const m_bIgnoreDt: usize = 0x1BC; // bool
}

pub mod C_INIT_VelocityRadialRandom { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_fSpeedMin: usize = 0x1B8; // float
    pub const m_fSpeedMax: usize = 0x1BC; // float
    pub const m_vecLocalCoordinateSystemSpeedScale: usize = 0x1C0; // Vector
    pub const m_bIgnoreDelta: usize = 0x1CD; // bool
}

pub mod C_INIT_VelocityRandom { // CParticleFunctionInitializer
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_fSpeedMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_fSpeedMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_LocalCoordinateSystemSpeedMin: usize = 0x458; // CPerParticleVecInput
    pub const m_LocalCoordinateSystemSpeedMax: usize = 0xA88; // CPerParticleVecInput
    pub const m_bIgnoreDT: usize = 0x10B8; // bool
    pub const m_randomnessParameters: usize = 0x10BC; // CRandomNumberGeneratorParameters
}

pub mod C_OP_AlphaDecay { // CParticleFunctionOperator
    pub const m_flMinAlpha: usize = 0x1B0; // float
}

pub mod C_OP_AttractToControlPoint { // CParticleFunctionForce
    pub const m_vecComponentScale: usize = 0x1BC; // Vector
    pub const m_fForceAmount: usize = 0x1C8; // CPerParticleFloatInput
    pub const m_fFalloffPower: usize = 0x318; // float
    pub const m_TransformInput: usize = 0x320; // CParticleTransformInput
    pub const m_fForceAmountMin: usize = 0x380; // CPerParticleFloatInput
    pub const m_bApplyMinForce: usize = 0x4D0; // bool
}

pub mod C_OP_BasicMovement { // CParticleFunctionOperator
    pub const m_Gravity: usize = 0x1B0; // CParticleCollectionVecInput
    pub const m_fDrag: usize = 0x7E0; // CParticleCollectionFloatInput
    pub const m_nMaxConstraintPasses: usize = 0x930; // int32_t
}

pub mod C_OP_BoxConstraint { // CParticleFunctionConstraint
    pub const m_vecMin: usize = 0x1B0; // CParticleCollectionVecInput
    pub const m_vecMax: usize = 0x7E0; // CParticleCollectionVecInput
    pub const m_nCP: usize = 0xE10; // int32_t
    pub const m_bLocalSpace: usize = 0xE14; // bool
    pub const m_bAccountForRadius: usize = 0xE15; // bool
}

pub mod C_OP_CPOffsetToPercentageBetweenCPs { // CParticleFunctionOperator
    pub const m_flInputMin: usize = 0x1B0; // float
    pub const m_flInputMax: usize = 0x1B4; // float
    pub const m_flInputBias: usize = 0x1B8; // float
    pub const m_nStartCP: usize = 0x1BC; // int32_t
    pub const m_nEndCP: usize = 0x1C0; // int32_t
    pub const m_nOffsetCP: usize = 0x1C4; // int32_t
    pub const m_nOuputCP: usize = 0x1C8; // int32_t
    pub const m_nInputCP: usize = 0x1CC; // int32_t
    pub const m_bRadialCheck: usize = 0x1D0; // bool
    pub const m_bScaleOffset: usize = 0x1D1; // bool
    pub const m_vecOffset: usize = 0x1D4; // Vector
}

pub mod C_OP_CPVelocityForce { // CParticleFunctionForce
    pub const m_nControlPointNumber: usize = 0x1BC; // int32_t
    pub const m_flScale: usize = 0x1C0; // CPerParticleFloatInput
}

pub mod C_OP_CalculateVectorAttribute { // CParticleFunctionOperator
    pub const m_vStartValue: usize = 0x1B0; // Vector
    pub const m_nFieldInput1: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_flInputScale1: usize = 0x1C0; // float
    pub const m_nFieldInput2: usize = 0x1C4; // ParticleAttributeIndex_t
    pub const m_flInputScale2: usize = 0x1C8; // float
    pub const m_nControlPointInput1: usize = 0x1CC; // ControlPointReference_t
    pub const m_flControlPointScale1: usize = 0x1E0; // float
    pub const m_nControlPointInput2: usize = 0x1E4; // ControlPointReference_t
    pub const m_flControlPointScale2: usize = 0x1F8; // float
    pub const m_nFieldOutput: usize = 0x1FC; // ParticleAttributeIndex_t
    pub const m_vFinalOutputScale: usize = 0x200; // Vector
}

pub mod C_OP_Callback { // CParticleFunctionRenderer
}

pub mod C_OP_ChladniWave { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flInputMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_flOutputMin: usize = 0x458; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x5A8; // CPerParticleFloatInput
    pub const m_vecWaveLength: usize = 0x6F8; // CPerParticleVecInput
    pub const m_vecHarmonics: usize = 0xD28; // CPerParticleVecInput
    pub const m_nSetMethod: usize = 0x1358; // ParticleSetMethod_t
    pub const m_nLocalSpaceControlPoint: usize = 0x135C; // int32_t
    pub const m_b3D: usize = 0x1360; // bool
}

pub mod C_OP_ChooseRandomChildrenInGroup { // CParticleFunctionPreEmission
    pub const m_nChildGroupID: usize = 0x1B4; // int32_t
    pub const m_flNumberOfChildren: usize = 0x1B8; // CParticleCollectionFloatInput
}

pub mod C_OP_ClampScalar { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flOutputMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x308; // CPerParticleFloatInput
}

pub mod C_OP_ClampVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecOutputMin: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vecOutputMax: usize = 0x7E8; // CPerParticleVecInput
}

pub mod C_OP_CollideWithParentParticles { // CParticleFunctionConstraint
    pub const m_flParentRadiusScale: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_flRadiusScale: usize = 0x300; // CPerParticleFloatInput
}

pub mod C_OP_CollideWithSelf { // CParticleFunctionConstraint
    pub const m_flRadiusScale: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_flMinimumSpeed: usize = 0x300; // CPerParticleFloatInput
}

pub mod C_OP_ColorAdjustHSL { // CParticleFunctionOperator
    pub const m_flHueAdjust: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_flSaturationAdjust: usize = 0x300; // CPerParticleFloatInput
    pub const m_flLightnessAdjust: usize = 0x450; // CPerParticleFloatInput
}

pub mod C_OP_ColorInterpolate { // CParticleFunctionOperator
    pub const m_ColorFade: usize = 0x1B0; // Color
    pub const m_flFadeStartTime: usize = 0x1C0; // float
    pub const m_flFadeEndTime: usize = 0x1C4; // float
    pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
    pub const m_bEaseInOut: usize = 0x1CC; // bool
    pub const m_bUseNewCode: usize = 0x1CD; // bool
}

pub mod C_OP_ColorInterpolateRandom { // CParticleFunctionOperator
    pub const m_ColorFadeMin: usize = 0x1B0; // Color
    pub const m_ColorFadeMax: usize = 0x1CC; // Color
    pub const m_flFadeStartTime: usize = 0x1DC; // float
    pub const m_flFadeEndTime: usize = 0x1E0; // float
    pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
    pub const m_bEaseInOut: usize = 0x1E8; // bool
}

pub mod C_OP_ConnectParentParticleToNearest { // CParticleFunctionOperator
    pub const m_nFirstControlPoint: usize = 0x1B0; // int32_t
    pub const m_nSecondControlPoint: usize = 0x1B4; // int32_t
    pub const m_bUseRadius: usize = 0x1B8; // bool
    pub const m_flRadiusScale: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_flParentRadiusScale: usize = 0x310; // CParticleCollectionFloatInput
}

pub mod C_OP_ConstrainDistance { // CParticleFunctionConstraint
    pub const m_fMinDistance: usize = 0x1B0; // CParticleCollectionFloatInput
    pub const m_fMaxDistance: usize = 0x300; // CParticleCollectionFloatInput
    pub const m_nControlPointNumber: usize = 0x450; // int32_t
    pub const m_CenterOffset: usize = 0x454; // Vector
    pub const m_bGlobalCenter: usize = 0x460; // bool
}

pub mod C_OP_ConstrainDistanceToPath { // CParticleFunctionConstraint
    pub const m_fMinDistance: usize = 0x1B0; // float
    pub const m_flMaxDistance0: usize = 0x1B4; // float
    pub const m_flMaxDistanceMid: usize = 0x1B8; // float
    pub const m_flMaxDistance1: usize = 0x1BC; // float
    pub const m_PathParameters: usize = 0x1C0; // CPathParameters
    pub const m_flTravelTime: usize = 0x200; // float
    pub const m_nFieldScale: usize = 0x204; // ParticleAttributeIndex_t
    pub const m_nManualTField: usize = 0x208; // ParticleAttributeIndex_t
}

pub mod C_OP_ConstrainDistanceToUserSpecifiedPath { // CParticleFunctionConstraint
    pub const m_fMinDistance: usize = 0x1B0; // float
    pub const m_flMaxDistance: usize = 0x1B4; // float
    pub const m_flTimeScale: usize = 0x1B8; // float
    pub const m_bLoopedPath: usize = 0x1BC; // bool
    pub const m_pointList: usize = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
}

pub mod C_OP_ConstrainLineLength { // CParticleFunctionConstraint
    pub const m_flMinDistance: usize = 0x1B0; // float
    pub const m_flMaxDistance: usize = 0x1B4; // float
}

pub mod C_OP_ContinuousEmitter { // CParticleFunctionEmitter
    pub const m_flEmissionDuration: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flStartTime: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_flEmitRate: usize = 0x458; // CParticleCollectionFloatInput
    pub const m_flEmissionScale: usize = 0x5A8; // float
    pub const m_flScalePerParentParticle: usize = 0x5AC; // float
    pub const m_bInitFromKilledParentParticles: usize = 0x5B0; // bool
    pub const m_nSnapshotControlPoint: usize = 0x5B4; // int32_t
    pub const m_nLimitPerUpdate: usize = 0x5B8; // int32_t
    pub const m_bForceEmitOnFirstUpdate: usize = 0x5BC; // bool
    pub const m_bForceEmitOnLastUpdate: usize = 0x5BD; // bool
}

pub mod C_OP_ControlPointToRadialScreenSpace { // CParticleFunctionPreEmission
    pub const m_nCPIn: usize = 0x1B4; // int32_t
    pub const m_vecCP1Pos: usize = 0x1B8; // Vector
    pub const m_nCPOut: usize = 0x1C4; // int32_t
    pub const m_nCPOutField: usize = 0x1C8; // int32_t
    pub const m_nCPSSPosOut: usize = 0x1CC; // int32_t
}

pub mod C_OP_ControlpointLight { // CParticleFunctionOperator
    pub const m_flScale: usize = 0x1B0; // float
    pub const m_nControlPoint1: usize = 0x640; // int32_t
    pub const m_nControlPoint2: usize = 0x644; // int32_t
    pub const m_nControlPoint3: usize = 0x648; // int32_t
    pub const m_nControlPoint4: usize = 0x64C; // int32_t
    pub const m_vecCPOffset1: usize = 0x650; // Vector
    pub const m_vecCPOffset2: usize = 0x65C; // Vector
    pub const m_vecCPOffset3: usize = 0x668; // Vector
    pub const m_vecCPOffset4: usize = 0x674; // Vector
    pub const m_LightFiftyDist1: usize = 0x680; // float
    pub const m_LightZeroDist1: usize = 0x684; // float
    pub const m_LightFiftyDist2: usize = 0x688; // float
    pub const m_LightZeroDist2: usize = 0x68C; // float
    pub const m_LightFiftyDist3: usize = 0x690; // float
    pub const m_LightZeroDist3: usize = 0x694; // float
    pub const m_LightFiftyDist4: usize = 0x698; // float
    pub const m_LightZeroDist4: usize = 0x69C; // float
    pub const m_LightColor1: usize = 0x6A0; // Color
    pub const m_LightColor2: usize = 0x6A4; // Color
    pub const m_LightColor3: usize = 0x6A8; // Color
    pub const m_LightColor4: usize = 0x6AC; // Color
    pub const m_bLightType1: usize = 0x6B0; // bool
    pub const m_bLightType2: usize = 0x6B1; // bool
    pub const m_bLightType3: usize = 0x6B2; // bool
    pub const m_bLightType4: usize = 0x6B3; // bool
    pub const m_bLightDynamic1: usize = 0x6B4; // bool
    pub const m_bLightDynamic2: usize = 0x6B5; // bool
    pub const m_bLightDynamic3: usize = 0x6B6; // bool
    pub const m_bLightDynamic4: usize = 0x6B7; // bool
    pub const m_bUseNormal: usize = 0x6B8; // bool
    pub const m_bUseHLambert: usize = 0x6B9; // bool
    pub const m_bClampLowerRange: usize = 0x6BE; // bool
    pub const m_bClampUpperRange: usize = 0x6BF; // bool
}

pub mod C_OP_Cull { // CParticleFunctionOperator
    pub const m_flCullPerc: usize = 0x1B0; // float
    pub const m_flCullStart: usize = 0x1B4; // float
    pub const m_flCullEnd: usize = 0x1B8; // float
    pub const m_flCullExp: usize = 0x1BC; // float
}

pub mod C_OP_CurlNoiseForce { // CParticleFunctionForce
    pub const m_nNoiseType: usize = 0x1BC; // ParticleDirectionNoiseType_t
    pub const m_vecNoiseFreq: usize = 0x1C0; // CPerParticleVecInput
    pub const m_vecNoiseScale: usize = 0x7F0; // CPerParticleVecInput
    pub const m_vecOffset: usize = 0xE20; // CPerParticleVecInput
    pub const m_vecOffsetRate: usize = 0x1450; // CPerParticleVecInput
    pub const m_flWorleySeed: usize = 0x1A80; // CPerParticleFloatInput
    pub const m_flWorleyJitter: usize = 0x1BD0; // CPerParticleFloatInput
}

pub mod C_OP_CycleScalar { // CParticleFunctionOperator
    pub const m_nDestField: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flStartValue: usize = 0x1B4; // float
    pub const m_flEndValue: usize = 0x1B8; // float
    pub const m_flCycleTime: usize = 0x1BC; // float
    pub const m_bDoNotRepeatCycle: usize = 0x1C0; // bool
    pub const m_bSynchronizeParticles: usize = 0x1C1; // bool
    pub const m_nCPScale: usize = 0x1C4; // int32_t
    pub const m_nCPFieldMin: usize = 0x1C8; // int32_t
    pub const m_nCPFieldMax: usize = 0x1CC; // int32_t
    pub const m_nSetMethod: usize = 0x1D0; // ParticleSetMethod_t
}

pub mod C_OP_CylindricalDistanceToTransform { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flInputMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_flOutputMin: usize = 0x458; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x5A8; // CPerParticleFloatInput
    pub const m_TransformStart: usize = 0x6F8; // CParticleTransformInput
    pub const m_TransformEnd: usize = 0x758; // CParticleTransformInput
    pub const m_nSetMethod: usize = 0x7B8; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x7BC; // bool
    pub const m_bAdditive: usize = 0x7BD; // bool
    pub const m_bCapsule: usize = 0x7BE; // bool
}

pub mod C_OP_DampenToCP { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_flRange: usize = 0x1B4; // float
    pub const m_flScale: usize = 0x1B8; // float
}

pub mod C_OP_Decay { // CParticleFunctionOperator
    pub const m_bRopeDecay: usize = 0x1B0; // bool
    pub const m_bForcePreserveParticleOrder: usize = 0x1B1; // bool
}

pub mod C_OP_DecayClampCount { // CParticleFunctionOperator
    pub const m_nCount: usize = 0x1B0; // CParticleCollectionFloatInput
}

pub mod C_OP_DecayMaintainCount { // CParticleFunctionOperator
    pub const m_nParticlesToMaintain: usize = 0x1B0; // int32_t
    pub const m_flDecayDelay: usize = 0x1B4; // float
    pub const m_nSnapshotControlPoint: usize = 0x1B8; // int32_t
    pub const m_bLifespanDecay: usize = 0x1BC; // bool
    pub const m_flScale: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_bKillNewest: usize = 0x310; // bool
}

pub mod C_OP_DecayOffscreen { // CParticleFunctionOperator
    pub const m_flOffscreenTime: usize = 0x1B0; // CParticleCollectionFloatInput
}

pub mod C_OP_DensityForce { // CParticleFunctionForce
    pub const m_flRadiusScale: usize = 0x1BC; // float
    pub const m_flForceScale: usize = 0x1C0; // float
    pub const m_flTargetDensity: usize = 0x1C4; // float
}

pub mod C_OP_DifferencePreviousParticle { // CParticleFunctionOperator
    pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // float
    pub const m_flInputMax: usize = 0x1BC; // float
    pub const m_flOutputMin: usize = 0x1C0; // float
    pub const m_flOutputMax: usize = 0x1C4; // float
    pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x1CC; // bool
    pub const m_bSetPreviousParticle: usize = 0x1CD; // bool
}

pub mod C_OP_Diffusion { // CParticleFunctionOperator
    pub const m_flRadiusScale: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nVoxelGridResolution: usize = 0x1B8; // int32_t
}

pub mod C_OP_DirectionBetweenVecsToVec { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecPoint1: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vecPoint2: usize = 0x7E8; // CPerParticleVecInput
}

pub mod C_OP_DistanceBetweenCPsToCP { // CParticleFunctionPreEmission
    pub const m_nStartCP: usize = 0x1B4; // int32_t
    pub const m_nEndCP: usize = 0x1B8; // int32_t
    pub const m_nOutputCP: usize = 0x1BC; // int32_t
    pub const m_nOutputCPField: usize = 0x1C0; // int32_t
    pub const m_bSetOnce: usize = 0x1C4; // bool
    pub const m_flInputMin: usize = 0x1C8; // float
    pub const m_flInputMax: usize = 0x1CC; // float
    pub const m_flOutputMin: usize = 0x1D0; // float
    pub const m_flOutputMax: usize = 0x1D4; // float
    pub const m_flMaxTraceLength: usize = 0x1D8; // float
    pub const m_flLOSScale: usize = 0x1DC; // float
    pub const m_bLOS: usize = 0x1E0; // bool
    pub const m_CollisionGroupName: usize = 0x1E1; // char[128]
    pub const m_nTraceSet: usize = 0x264; // ParticleTraceSet_t
    pub const m_nSetParent: usize = 0x268; // ParticleParentSetMode_t
}

pub mod C_OP_DistanceBetweenTransforms { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_TransformStart: usize = 0x1B8; // CParticleTransformInput
    pub const m_TransformEnd: usize = 0x218; // CParticleTransformInput
    pub const m_flInputMin: usize = 0x278; // CPerParticleFloatInput
    pub const m_flInputMax: usize = 0x3C8; // CPerParticleFloatInput
    pub const m_flOutputMin: usize = 0x518; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x668; // CPerParticleFloatInput
    pub const m_flMaxTraceLength: usize = 0x7B8; // float
    pub const m_flLOSScale: usize = 0x7BC; // float
    pub const m_CollisionGroupName: usize = 0x7C0; // char[128]
    pub const m_nTraceSet: usize = 0x840; // ParticleTraceSet_t
    pub const m_bLOS: usize = 0x844; // bool
    pub const m_nSetMethod: usize = 0x848; // ParticleSetMethod_t
}

pub mod C_OP_DistanceBetweenVecs { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecPoint1: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vecPoint2: usize = 0x7E8; // CPerParticleVecInput
    pub const m_flInputMin: usize = 0xE18; // CPerParticleFloatInput
    pub const m_flInputMax: usize = 0xF68; // CPerParticleFloatInput
    pub const m_flOutputMin: usize = 0x10B8; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x1208; // CPerParticleFloatInput
    pub const m_nSetMethod: usize = 0x1358; // ParticleSetMethod_t
    pub const m_bDeltaTime: usize = 0x135C; // bool
}

pub mod C_OP_DistanceCull { // CParticleFunctionOperator
    pub const m_nControlPoint: usize = 0x1B0; // int32_t
    pub const m_vecPointOffset: usize = 0x1B4; // Vector
    pub const m_flDistance: usize = 0x1C0; // float
    pub const m_bCullInside: usize = 0x1C4; // bool
}

pub mod C_OP_DistanceToTransform { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flInputMax: usize = 0x308; // CPerParticleFloatInput
    pub const m_flOutputMin: usize = 0x458; // CPerParticleFloatInput
    pub const m_flOutputMax: usize = 0x5A8; // CPerParticleFloatInput
    pub const m_TransformStart: usize = 0x6F8; // CParticleTransformInput
    pub const m_bLOS: usize = 0x758; // bool
    pub const m_CollisionGroupName: usize = 0x759; // char[128]
    pub const m_nTraceSet: usize = 0x7DC; // ParticleTraceSet_t
    pub const m_flMaxTraceLength: usize = 0x7E0; // float
    pub const m_flLOSScale: usize = 0x7E4; // float
    pub const m_nSetMethod: usize = 0x7E8; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x7EC; // bool
    pub const m_bAdditive: usize = 0x7ED; // bool
    pub const m_vecComponentScale: usize = 0x7F0; // CPerParticleVecInput
}

pub mod C_OP_DragRelativeToPlane { // CParticleFunctionOperator
    pub const m_flDragAtPlane: usize = 0x1B0; // CParticleCollectionFloatInput
    pub const m_flFalloff: usize = 0x300; // CParticleCollectionFloatInput
    pub const m_bDirectional: usize = 0x450; // bool
    pub const m_vecPlaneNormal: usize = 0x458; // CParticleCollectionVecInput
    pub const m_nControlPointNumber: usize = 0xA88; // int32_t
}

pub mod C_OP_DriveCPFromGlobalSoundFloat { // CParticleFunctionPreEmission
    pub const m_nOutputControlPoint: usize = 0x1B4; // int32_t
    pub const m_nOutputField: usize = 0x1B8; // int32_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
    pub const m_StackName: usize = 0x1D0; // CUtlString
    pub const m_OperatorName: usize = 0x1D8; // CUtlString
    pub const m_FieldName: usize = 0x1E0; // CUtlString
}

pub mod C_OP_EnableChildrenFromParentParticleCount { // CParticleFunctionPreEmission
    pub const m_nChildGroupID: usize = 0x1B4; // int32_t
    pub const m_nFirstChild: usize = 0x1B8; // int32_t
    pub const m_nNumChildrenToEnable: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_bDisableChildren: usize = 0x310; // bool
    pub const m_bPlayEndcapOnStop: usize = 0x311; // bool
    pub const m_bDestroyImmediately: usize = 0x312; // bool
}

pub mod C_OP_EndCapDecay { // CParticleFunctionOperator
}

pub mod C_OP_EndCapTimedDecay { // CParticleFunctionOperator
    pub const m_flDecayTime: usize = 0x1B0; // float
}

pub mod C_OP_EndCapTimedFreeze { // CParticleFunctionOperator
    pub const m_flFreezeTime: usize = 0x1B0; // CParticleCollectionFloatInput
}

pub mod C_OP_ExternalGameImpulseForce { // CParticleFunctionForce
    pub const m_flForceScale: usize = 0x1C0; // CPerParticleFloatInput
    pub const m_bRopes: usize = 0x310; // bool
    pub const m_bRopesZOnly: usize = 0x311; // bool
    pub const m_bExplosions: usize = 0x312; // bool
    pub const m_bParticles: usize = 0x313; // bool
}

pub mod C_OP_ExternalWindForce { // CParticleFunctionForce
    pub const m_vecSamplePosition: usize = 0x1C0; // CPerParticleVecInput
    pub const m_vecScale: usize = 0x7F0; // CPerParticleVecInput
    pub const m_bSampleWind: usize = 0xE20; // bool
    pub const m_bSampleWater: usize = 0xE21; // bool
    pub const m_bDampenNearWaterPlane: usize = 0xE22; // bool
    pub const m_bSampleGravity: usize = 0xE23; // bool
    pub const m_vecGravityForce: usize = 0xE28; // CPerParticleVecInput
    pub const m_bUseBasicMovementGravity: usize = 0x1458; // bool
    pub const m_flLocalGravityScale: usize = 0x1460; // CPerParticleFloatInput
    pub const m_flLocalBuoyancyScale: usize = 0x15B0; // CPerParticleFloatInput
    pub const m_vecBuoyancyForce: usize = 0x1700; // CPerParticleVecInput
}

pub mod C_OP_FadeAndKill { // CParticleFunctionOperator
    pub const m_flStartFadeInTime: usize = 0x1B0; // float
    pub const m_flEndFadeInTime: usize = 0x1B4; // float
    pub const m_flStartFadeOutTime: usize = 0x1B8; // float
    pub const m_flEndFadeOutTime: usize = 0x1BC; // float
    pub const m_flStartAlpha: usize = 0x1C0; // float
    pub const m_flEndAlpha: usize = 0x1C4; // float
    pub const m_bForcePreserveParticleOrder: usize = 0x1C8; // bool
}

pub mod C_OP_FadeAndKillForTracers { // CParticleFunctionOperator
    pub const m_flStartFadeInTime: usize = 0x1B0; // float
    pub const m_flEndFadeInTime: usize = 0x1B4; // float
    pub const m_flStartFadeOutTime: usize = 0x1B8; // float
    pub const m_flEndFadeOutTime: usize = 0x1BC; // float
    pub const m_flStartAlpha: usize = 0x1C0; // float
    pub const m_flEndAlpha: usize = 0x1C4; // float
}

pub mod C_OP_FadeIn { // CParticleFunctionOperator
    pub const m_flFadeInTimeMin: usize = 0x1B0; // float
    pub const m_flFadeInTimeMax: usize = 0x1B4; // float
    pub const m_flFadeInTimeExp: usize = 0x1B8; // float
    pub const m_bProportional: usize = 0x1BC; // bool
}

pub mod C_OP_FadeInSimple { // CParticleFunctionOperator
    pub const m_flFadeInTime: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
}

pub mod C_OP_FadeOut { // CParticleFunctionOperator
    pub const m_flFadeOutTimeMin: usize = 0x1B0; // float
    pub const m_flFadeOutTimeMax: usize = 0x1B4; // float
    pub const m_flFadeOutTimeExp: usize = 0x1B8; // float
    pub const m_flFadeBias: usize = 0x1BC; // float
    pub const m_bProportional: usize = 0x1F0; // bool
    pub const m_bEaseInAndOut: usize = 0x1F1; // bool
}

pub mod C_OP_FadeOutSimple { // CParticleFunctionOperator
    pub const m_flFadeOutTime: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
}

pub mod C_OP_ForceBasedOnDistanceToPlane { // CParticleFunctionForce
    pub const m_flMinDist: usize = 0x1BC; // float
    pub const m_vecForceAtMinDist: usize = 0x1C0; // Vector
    pub const m_flMaxDist: usize = 0x1CC; // float
    pub const m_vecForceAtMaxDist: usize = 0x1D0; // Vector
    pub const m_vecPlaneNormal: usize = 0x1DC; // Vector
    pub const m_nControlPointNumber: usize = 0x1E8; // int32_t
    pub const m_flExponent: usize = 0x1EC; // float
}

pub mod C_OP_ForceControlPointStub { // CParticleFunctionPreEmission
    pub const m_ControlPoint: usize = 0x1B4; // int32_t
}

pub mod C_OP_GlobalLight { // CParticleFunctionOperator
    pub const m_flScale: usize = 0x1B0; // float
    pub const m_bClampLowerRange: usize = 0x1B4; // bool
    pub const m_bClampUpperRange: usize = 0x1B5; // bool
}

pub mod C_OP_HSVShiftToCP { // CParticleFunctionPreEmission
    pub const m_nColorCP: usize = 0x1B4; // int32_t
    pub const m_nColorGemEnableCP: usize = 0x1B8; // int32_t
    pub const m_nOutputCP: usize = 0x1BC; // int32_t
    pub const m_DefaultHSVColor: usize = 0x1C0; // Color
}

pub mod C_OP_InheritFromParentParticles { // CParticleFunctionOperator
    pub const m_flScale: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nIncrement: usize = 0x1B8; // int32_t
    pub const m_bRandomDistribution: usize = 0x1BC; // bool
}

pub mod C_OP_InheritFromParentParticlesV2 { // CParticleFunctionOperator
    pub const m_flScale: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nIncrement: usize = 0x1B8; // int32_t
    pub const m_bRandomDistribution: usize = 0x1BC; // bool
    pub const m_nMissingParentBehavior: usize = 0x1C0; // MissingParentInheritBehavior_t
}

pub mod C_OP_InheritFromPeerSystem { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nIncrement: usize = 0x1B8; // int32_t
    pub const m_nGroupID: usize = 0x1BC; // int32_t
}

pub mod C_OP_InstantaneousEmitter { // CParticleFunctionEmitter
    pub const m_nParticlesToEmit: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flStartTime: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_flInitFromKilledParentParticles: usize = 0x458; // float
    pub const m_flParentParticleScale: usize = 0x460; // CParticleCollectionFloatInput
    pub const m_nMaxEmittedPerFrame: usize = 0x5B0; // int32_t
    pub const m_nSnapshotControlPoint: usize = 0x5B4; // int32_t
}

pub mod C_OP_InterpolateRadius { // CParticleFunctionOperator
    pub const m_flStartTime: usize = 0x1B0; // float
    pub const m_flEndTime: usize = 0x1B4; // float
    pub const m_flStartScale: usize = 0x1B8; // float
    pub const m_flEndScale: usize = 0x1BC; // float
    pub const m_bEaseInAndOut: usize = 0x1C0; // bool
    pub const m_flBias: usize = 0x1C4; // float
}

pub mod C_OP_LagCompensation { // CParticleFunctionOperator
    pub const m_nDesiredVelocityCP: usize = 0x1B0; // int32_t
    pub const m_nLatencyCP: usize = 0x1B4; // int32_t
    pub const m_nLatencyCPField: usize = 0x1B8; // int32_t
    pub const m_nDesiredVelocityCPField: usize = 0x1BC; // int32_t
}

pub mod C_OP_LerpEndCapScalar { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flOutput: usize = 0x1B4; // float
    pub const m_flLerpTime: usize = 0x1B8; // float
}

pub mod C_OP_LerpEndCapVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecOutput: usize = 0x1B4; // Vector
    pub const m_flLerpTime: usize = 0x1C0; // float
}

pub mod C_OP_LerpScalar { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flOutput: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flStartTime: usize = 0x308; // float
    pub const m_flEndTime: usize = 0x30C; // float
}

pub mod C_OP_LerpToInitialPosition { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_flInterpolation: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_nCacheField: usize = 0x308; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x310; // CParticleCollectionFloatInput
    pub const m_vecScale: usize = 0x460; // CParticleCollectionVecInput
}

pub mod C_OP_LerpToOtherAttribute { // CParticleFunctionOperator
    pub const m_flInterpolation: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_nFieldInputFrom: usize = 0x300; // ParticleAttributeIndex_t
    pub const m_nFieldInput: usize = 0x304; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x308; // ParticleAttributeIndex_t
}

pub mod C_OP_LerpVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecOutput: usize = 0x1B4; // Vector
    pub const m_flStartTime: usize = 0x1C0; // float
    pub const m_flEndTime: usize = 0x1C4; // float
    pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
}

pub mod C_OP_LightningSnapshotGenerator { // CParticleFunctionPreEmission
    pub const m_nCPSnapshot: usize = 0x1B4; // int32_t
    pub const m_nCPStartPnt: usize = 0x1B8; // int32_t
    pub const m_nCPEndPnt: usize = 0x1BC; // int32_t
    pub const m_flSegments: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_flOffset: usize = 0x310; // CParticleCollectionFloatInput
    pub const m_flOffsetDecay: usize = 0x460; // CParticleCollectionFloatInput
    pub const m_flRecalcRate: usize = 0x5B0; // CParticleCollectionFloatInput
    pub const m_flUVScale: usize = 0x700; // CParticleCollectionFloatInput
    pub const m_flUVOffset: usize = 0x850; // CParticleCollectionFloatInput
    pub const m_flSplitRate: usize = 0x9A0; // CParticleCollectionFloatInput
    pub const m_flBranchTwist: usize = 0xAF0; // CParticleCollectionFloatInput
    pub const m_nBranchBehavior: usize = 0xC40; // ParticleLightnintBranchBehavior_t
    pub const m_flRadiusStart: usize = 0xC48; // CParticleCollectionFloatInput
    pub const m_flRadiusEnd: usize = 0xD98; // CParticleCollectionFloatInput
    pub const m_flDedicatedPool: usize = 0xEE8; // CParticleCollectionFloatInput
}

pub mod C_OP_LocalAccelerationForce { // CParticleFunctionForce
    pub const m_nCP: usize = 0x1BC; // int32_t
    pub const m_nScaleCP: usize = 0x1C0; // int32_t
    pub const m_vecAccel: usize = 0x1C8; // CParticleCollectionVecInput
}

pub mod C_OP_LockPoints { // CParticleFunctionOperator
    pub const m_nMinCol: usize = 0x1B0; // int32_t
    pub const m_nMaxCol: usize = 0x1B4; // int32_t
    pub const m_nMinRow: usize = 0x1B8; // int32_t
    pub const m_nMaxRow: usize = 0x1BC; // int32_t
    pub const m_nControlPoint: usize = 0x1C0; // int32_t
    pub const m_flBlendValue: usize = 0x1C4; // float
}

pub mod C_OP_LockToBone { // CParticleFunctionOperator
    pub const m_modelInput: usize = 0x1B0; // CParticleModelInput
    pub const m_transformInput: usize = 0x208; // CParticleTransformInput
    pub const m_flLifeTimeFadeStart: usize = 0x268; // float
    pub const m_flLifeTimeFadeEnd: usize = 0x26C; // float
    pub const m_flJumpThreshold: usize = 0x270; // float
    pub const m_flPrevPosScale: usize = 0x274; // float
    pub const m_HitboxSetName: usize = 0x278; // char[128]
    pub const m_bRigid: usize = 0x2F8; // bool
    pub const m_bUseBones: usize = 0x2F9; // bool
    pub const m_nFieldOutput: usize = 0x2FC; // ParticleAttributeIndex_t
    pub const m_nFieldOutputPrev: usize = 0x300; // ParticleAttributeIndex_t
    pub const m_nRotationSetType: usize = 0x304; // ParticleRotationLockType_t
    pub const m_bRigidRotationLock: usize = 0x308; // bool
    pub const m_vecRotation: usize = 0x310; // CPerParticleVecInput
    pub const m_flRotLerp: usize = 0x940; // CPerParticleFloatInput
}

pub mod C_OP_LockToPointList { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_pointList: usize = 0x1B8; // CUtlVector<PointDefinition_t>
    pub const m_bPlaceAlongPath: usize = 0x1D0; // bool
    pub const m_bClosedLoop: usize = 0x1D1; // bool
    pub const m_nNumPointsAlongPath: usize = 0x1D4; // int32_t
}

pub mod C_OP_LockToSavedSequentialPath { // CParticleFunctionOperator
    pub const m_flFadeStart: usize = 0x1B4; // float
    pub const m_flFadeEnd: usize = 0x1B8; // float
    pub const m_bCPPairs: usize = 0x1BC; // bool
    pub const m_PathParams: usize = 0x1C0; // CPathParameters
}

pub mod C_OP_LockToSavedSequentialPathV2 { // CParticleFunctionOperator
    pub const m_flFadeStart: usize = 0x1B0; // float
    pub const m_flFadeEnd: usize = 0x1B4; // float
    pub const m_bCPPairs: usize = 0x1B8; // bool
    pub const m_PathParams: usize = 0x1C0; // CPathParameters
}

pub mod C_OP_MaintainEmitter { // CParticleFunctionEmitter
    pub const m_nParticlesToMaintain: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flStartTime: usize = 0x308; // float
    pub const m_flEmissionDuration: usize = 0x310; // CParticleCollectionFloatInput
    pub const m_flEmissionRate: usize = 0x460; // float
    pub const m_nSnapshotControlPoint: usize = 0x464; // int32_t
    pub const m_bEmitInstantaneously: usize = 0x468; // bool
    pub const m_bFinalEmitOnStop: usize = 0x469; // bool
    pub const m_flScale: usize = 0x470; // CParticleCollectionFloatInput
}

pub mod C_OP_MaintainSequentialPath { // CParticleFunctionOperator
    pub const m_fMaxDistance: usize = 0x1B0; // float
    pub const m_flNumToAssign: usize = 0x1B4; // float
    pub const m_flCohesionStrength: usize = 0x1B8; // float
    pub const m_flTolerance: usize = 0x1BC; // float
    pub const m_bLoop: usize = 0x1C0; // bool
    pub const m_bUseParticleCount: usize = 0x1C1; // bool
    pub const m_PathParams: usize = 0x1D0; // CPathParameters
}

pub mod C_OP_MaxVelocity { // CParticleFunctionOperator
    pub const m_flMaxVelocity: usize = 0x1B0; // float
    pub const m_flMinVelocity: usize = 0x1B4; // float
    pub const m_nOverrideCP: usize = 0x1B8; // int32_t
    pub const m_nOverrideCPField: usize = 0x1BC; // int32_t
}

pub mod C_OP_ModelCull { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_bBoundBox: usize = 0x1B4; // bool
    pub const m_bCullOutside: usize = 0x1B5; // bool
    pub const m_bUseBones: usize = 0x1B6; // bool
    pub const m_HitboxSetName: usize = 0x1B7; // char[128]
}

pub mod C_OP_ModelDampenMovement { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_bBoundBox: usize = 0x1B4; // bool
    pub const m_bOutside: usize = 0x1B5; // bool
    pub const m_bUseBones: usize = 0x1B6; // bool
    pub const m_HitboxSetName: usize = 0x1B7; // char[128]
    pub const m_vecPosOffset: usize = 0x238; // CPerParticleVecInput
    pub const m_fDrag: usize = 0x868; // float
}

pub mod C_OP_MoveToHitbox { // CParticleFunctionOperator
    pub const m_modelInput: usize = 0x1B0; // CParticleModelInput
    pub const m_transformInput: usize = 0x208; // CParticleTransformInput
    pub const m_flLifeTimeLerpStart: usize = 0x26C; // float
    pub const m_flLifeTimeLerpEnd: usize = 0x270; // float
    pub const m_flPrevPosScale: usize = 0x274; // float
    pub const m_HitboxSetName: usize = 0x278; // char[128]
    pub const m_bUseBones: usize = 0x2F8; // bool
    pub const m_nLerpType: usize = 0x2FC; // HitboxLerpType_t
    pub const m_flInterpolation: usize = 0x300; // CPerParticleFloatInput
}

pub mod C_OP_MovementLoopInsideSphere { // CParticleFunctionOperator
    pub const m_nCP: usize = 0x1B0; // int32_t
    pub const m_flDistance: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_vecScale: usize = 0x308; // CParticleCollectionVecInput
    pub const m_nDistSqrAttr: usize = 0x938; // ParticleAttributeIndex_t
}

pub mod C_OP_MovementMaintainOffset { // CParticleFunctionOperator
    pub const m_vecOffset: usize = 0x1B0; // Vector
    pub const m_nCP: usize = 0x1BC; // int32_t
    pub const m_bRadiusScale: usize = 0x1C0; // bool
}

pub mod C_OP_MovementMoveAlongSkinnedCPSnapshot { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nSnapshotControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_bSetNormal: usize = 0x1B8; // bool
    pub const m_bSetRadius: usize = 0x1B9; // bool
    pub const m_flInterpolation: usize = 0x1C0; // CPerParticleFloatInput
    pub const m_flTValue: usize = 0x310; // CPerParticleFloatInput
}

pub mod C_OP_MovementPlaceOnGround { // CParticleFunctionOperator
    pub const m_flOffset: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_flMaxTraceLength: usize = 0x300; // float
    pub const m_flTolerance: usize = 0x304; // float
    pub const m_flTraceOffset: usize = 0x308; // float
    pub const m_flLerpRate: usize = 0x30C; // float
    pub const m_CollisionGroupName: usize = 0x310; // char[128]
    pub const m_nTraceSet: usize = 0x390; // ParticleTraceSet_t
    pub const m_nRefCP1: usize = 0x394; // int32_t
    pub const m_nRefCP2: usize = 0x398; // int32_t
    pub const m_nLerpCP: usize = 0x39C; // int32_t
    pub const m_nTraceMissBehavior: usize = 0x3A8; // ParticleTraceMissBehavior_t
    pub const m_bIncludeShotHull: usize = 0x3AC; // bool
    pub const m_bIncludeWater: usize = 0x3AD; // bool
    pub const m_bSetNormal: usize = 0x3B0; // bool
    pub const m_bScaleOffset: usize = 0x3B1; // bool
    pub const m_nPreserveOffsetCP: usize = 0x3B4; // int32_t
    pub const m_nIgnoreCP: usize = 0x3B8; // int32_t
}

pub mod C_OP_MovementRigidAttachToCP { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nScaleControlPoint: usize = 0x1B4; // int32_t
    pub const m_nScaleCPField: usize = 0x1B8; // int32_t
    pub const m_nFieldInput: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
    pub const m_bOffsetLocal: usize = 0x1C4; // bool
}

pub mod C_OP_MovementRotateParticleAroundAxis { // CParticleFunctionOperator
    pub const m_vecRotAxis: usize = 0x1B0; // CParticleCollectionVecInput
    pub const m_flRotRate: usize = 0x7E0; // CParticleCollectionFloatInput
    pub const m_TransformInput: usize = 0x930; // CParticleTransformInput
    pub const m_bLocalSpace: usize = 0x990; // bool
}

pub mod C_OP_MovementSkinnedPositionFromCPSnapshot { // CParticleFunctionOperator
    pub const m_nSnapshotControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_bRandom: usize = 0x1B8; // bool
    pub const m_nRandomSeed: usize = 0x1BC; // int32_t
    pub const m_bSetNormal: usize = 0x1C0; // bool
    pub const m_bSetRadius: usize = 0x1C1; // bool
    pub const m_nIndexType: usize = 0x1C4; // SnapshotIndexType_t
    pub const m_flReadIndex: usize = 0x1C8; // CPerParticleFloatInput
    pub const m_flIncrement: usize = 0x318; // CParticleCollectionFloatInput
    pub const m_nFullLoopIncrement: usize = 0x468; // CParticleCollectionFloatInput
    pub const m_nSnapShotStartPoint: usize = 0x5B8; // CParticleCollectionFloatInput
    pub const m_flInterpolation: usize = 0x708; // CPerParticleFloatInput
}

pub mod C_OP_Noise { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flOutputMin: usize = 0x1B4; // float
    pub const m_flOutputMax: usize = 0x1B8; // float
    pub const m_fl4NoiseScale: usize = 0x1BC; // float
    pub const m_bAdditive: usize = 0x1C0; // bool
    pub const m_flNoiseAnimationTimeScale: usize = 0x1C4; // float
}

pub mod C_OP_NoiseEmitter { // CParticleFunctionEmitter
    pub const m_flEmissionDuration: usize = 0x1B4; // float
    pub const m_flStartTime: usize = 0x1B8; // float
    pub const m_flEmissionScale: usize = 0x1BC; // float
    pub const m_nScaleControlPoint: usize = 0x1C0; // int32_t
    pub const m_nScaleControlPointField: usize = 0x1C4; // int32_t
    pub const m_nWorldNoisePoint: usize = 0x1C8; // int32_t
    pub const m_bAbsVal: usize = 0x1CC; // bool
    pub const m_bAbsValInv: usize = 0x1CD; // bool
    pub const m_flOffset: usize = 0x1D0; // float
    pub const m_flOutputMin: usize = 0x1D4; // float
    pub const m_flOutputMax: usize = 0x1D8; // float
    pub const m_flNoiseScale: usize = 0x1DC; // float
    pub const m_flWorldNoiseScale: usize = 0x1E0; // float
    pub const m_vecOffsetLoc: usize = 0x1E4; // Vector
    pub const m_flWorldTimeScale: usize = 0x1F0; // float
}

pub mod C_OP_NormalLock { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
}

pub mod C_OP_NormalizeVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x1B4; // float
}

pub mod C_OP_Orient2DRelToCP { // CParticleFunctionOperator
    pub const m_flRotOffset: usize = 0x1B0; // float
    pub const m_flSpinStrength: usize = 0x1B4; // float
    pub const m_nCP: usize = 0x1B8; // int32_t
    pub const m_nFieldOutput: usize = 0x1BC; // ParticleAttributeIndex_t
}

pub mod C_OP_OrientTo2dDirection { // CParticleFunctionOperator
    pub const m_flRotOffset: usize = 0x1B0; // float
    pub const m_flSpinStrength: usize = 0x1B4; // float
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
}

pub mod C_OP_OscillateScalar { // CParticleFunctionOperator
    pub const m_RateMin: usize = 0x1B0; // float
    pub const m_RateMax: usize = 0x1B4; // float
    pub const m_FrequencyMin: usize = 0x1B8; // float
    pub const m_FrequencyMax: usize = 0x1BC; // float
    pub const m_nField: usize = 0x1C0; // ParticleAttributeIndex_t
    pub const m_bProportional: usize = 0x1C4; // bool
    pub const m_bProportionalOp: usize = 0x1C5; // bool
    pub const m_flStartTime_min: usize = 0x1C8; // float
    pub const m_flStartTime_max: usize = 0x1CC; // float
    pub const m_flEndTime_min: usize = 0x1D0; // float
    pub const m_flEndTime_max: usize = 0x1D4; // float
    pub const m_flOscMult: usize = 0x1D8; // float
    pub const m_flOscAdd: usize = 0x1DC; // float
}

pub mod C_OP_OscillateScalarSimple { // CParticleFunctionOperator
    pub const m_Rate: usize = 0x1B0; // float
    pub const m_Frequency: usize = 0x1B4; // float
    pub const m_nField: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flOscMult: usize = 0x1BC; // float
    pub const m_flOscAdd: usize = 0x1C0; // float
}

pub mod C_OP_OscillateVector { // CParticleFunctionOperator
    pub const m_RateMin: usize = 0x1B0; // Vector
    pub const m_RateMax: usize = 0x1BC; // Vector
    pub const m_FrequencyMin: usize = 0x1C8; // Vector
    pub const m_FrequencyMax: usize = 0x1D4; // Vector
    pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
    pub const m_bProportional: usize = 0x1E4; // bool
    pub const m_bProportionalOp: usize = 0x1E5; // bool
    pub const m_bOffset: usize = 0x1E6; // bool
    pub const m_flStartTime_min: usize = 0x1E8; // float
    pub const m_flStartTime_max: usize = 0x1EC; // float
    pub const m_flEndTime_min: usize = 0x1F0; // float
    pub const m_flEndTime_max: usize = 0x1F4; // float
    pub const m_flOscMult: usize = 0x1F8; // CPerParticleFloatInput
    pub const m_flOscAdd: usize = 0x348; // CPerParticleFloatInput
    pub const m_flRateScale: usize = 0x498; // CPerParticleFloatInput
}

pub mod C_OP_OscillateVectorSimple { // CParticleFunctionOperator
    pub const m_Rate: usize = 0x1B0; // Vector
    pub const m_Frequency: usize = 0x1BC; // Vector
    pub const m_nField: usize = 0x1C8; // ParticleAttributeIndex_t
    pub const m_flOscMult: usize = 0x1CC; // float
    pub const m_flOscAdd: usize = 0x1D0; // float
    pub const m_bOffset: usize = 0x1D4; // bool
}

pub mod C_OP_ParentVortices { // CParticleFunctionForce
    pub const m_flForceScale: usize = 0x1BC; // float
    pub const m_vecTwistAxis: usize = 0x1C0; // Vector
    pub const m_bFlipBasedOnYaw: usize = 0x1CC; // bool
}

pub mod C_OP_ParticlePhysics { // CParticleFunctionOperator
    pub const m_Gravity: usize = 0x1B0; // CParticleCollectionVecInput
    pub const m_fDrag: usize = 0x7E0; // CParticleCollectionFloatInput
    pub const m_nMaxConstraintPasses: usize = 0x930; // int32_t
}

pub mod C_OP_PerParticleForce { // CParticleFunctionForce
    pub const m_flForceScale: usize = 0x1C0; // CPerParticleFloatInput
    pub const m_vForce: usize = 0x310; // CPerParticleVecInput
    pub const m_nCP: usize = 0x940; // int32_t
}

pub mod C_OP_PercentageBetweenTransformLerpCPs { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B4; // float
    pub const m_flInputMax: usize = 0x1B8; // float
    pub const m_TransformStart: usize = 0x1C0; // CParticleTransformInput
    pub const m_TransformEnd: usize = 0x220; // CParticleTransformInput
    pub const m_nOutputStartCP: usize = 0x280; // int32_t
    pub const m_nOutputStartField: usize = 0x284; // int32_t
    pub const m_nOutputEndCP: usize = 0x288; // int32_t
    pub const m_nOutputEndField: usize = 0x28C; // int32_t
    pub const m_nSetMethod: usize = 0x290; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x294; // bool
    pub const m_bRadialCheck: usize = 0x295; // bool
}

pub mod C_OP_PercentageBetweenTransforms { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B4; // float
    pub const m_flInputMax: usize = 0x1B8; // float
    pub const m_flOutputMin: usize = 0x1BC; // float
    pub const m_flOutputMax: usize = 0x1C0; // float
    pub const m_TransformStart: usize = 0x1C8; // CParticleTransformInput
    pub const m_TransformEnd: usize = 0x228; // CParticleTransformInput
    pub const m_nSetMethod: usize = 0x288; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x28C; // bool
    pub const m_bRadialCheck: usize = 0x28D; // bool
}

pub mod C_OP_PercentageBetweenTransformsVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B4; // float
    pub const m_flInputMax: usize = 0x1B8; // float
    pub const m_vecOutputMin: usize = 0x1BC; // Vector
    pub const m_vecOutputMax: usize = 0x1C8; // Vector
    pub const m_TransformStart: usize = 0x1D8; // CParticleTransformInput
    pub const m_TransformEnd: usize = 0x238; // CParticleTransformInput
    pub const m_nSetMethod: usize = 0x298; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x29C; // bool
    pub const m_bRadialCheck: usize = 0x29D; // bool
}

pub mod C_OP_PinParticleToCP { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_vecOffset: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_bOffsetLocal: usize = 0x7E8; // bool
    pub const m_nParticleSelection: usize = 0x7EC; // ParticleSelection_t
    pub const m_nParticleNumber: usize = 0x7F0; // CParticleCollectionFloatInput
    pub const m_nPinBreakType: usize = 0x940; // ParticlePinDistance_t
    pub const m_flBreakDistance: usize = 0x948; // CParticleCollectionFloatInput
    pub const m_flBreakSpeed: usize = 0xA98; // CParticleCollectionFloatInput
    pub const m_flAge: usize = 0xBE8; // CParticleCollectionFloatInput
    pub const m_nBreakControlPointNumber: usize = 0xD38; // int32_t
    pub const m_nBreakControlPointNumber2: usize = 0xD3C; // int32_t
    pub const m_flBreakValue: usize = 0xD40; // CParticleCollectionFloatInput
    pub const m_flInterpolation: usize = 0xE90; // CPerParticleFloatInput
}

pub mod C_OP_PlanarConstraint { // CParticleFunctionConstraint
    pub const m_PointOnPlane: usize = 0x1B0; // Vector
    pub const m_PlaneNormal: usize = 0x1BC; // Vector
    pub const m_nControlPointNumber: usize = 0x1C8; // int32_t
    pub const m_bGlobalOrigin: usize = 0x1CC; // bool
    pub const m_bGlobalNormal: usize = 0x1CD; // bool
    pub const m_flRadiusScale: usize = 0x1D0; // CPerParticleFloatInput
    pub const m_flMaximumDistanceToCP: usize = 0x320; // CParticleCollectionFloatInput
    pub const m_bUseOldCode: usize = 0x470; // bool
}

pub mod C_OP_PlaneCull { // CParticleFunctionOperator
    pub const m_nPlaneControlPoint: usize = 0x1B0; // int32_t
    pub const m_vecPlaneDirection: usize = 0x1B4; // Vector
    pub const m_bLocalSpace: usize = 0x1C0; // bool
    pub const m_flPlaneOffset: usize = 0x1C4; // float
}

pub mod C_OP_PlayEndCapWhenFinished { // CParticleFunctionPreEmission
    pub const m_bFireOnEmissionEnd: usize = 0x1B1; // bool
    pub const m_bIncludeChildren: usize = 0x1B2; // bool
}

pub mod C_OP_PointVectorAtNextParticle { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInterpolation: usize = 0x1B8; // CPerParticleFloatInput
}

pub mod C_OP_PositionLock { // CParticleFunctionOperator
    pub const m_TransformInput: usize = 0x1B0; // CParticleTransformInput
    pub const m_flStartTime_min: usize = 0x210; // float
    pub const m_flStartTime_max: usize = 0x214; // float
    pub const m_flStartTime_exp: usize = 0x218; // float
    pub const m_flEndTime_min: usize = 0x21C; // float
    pub const m_flEndTime_max: usize = 0x220; // float
    pub const m_flEndTime_exp: usize = 0x224; // float
    pub const m_flRange: usize = 0x228; // float
    pub const m_flRangeBias: usize = 0x230; // CParticleCollectionFloatInput
    pub const m_flJumpThreshold: usize = 0x380; // float
    pub const m_flPrevPosScale: usize = 0x384; // float
    pub const m_bLockRot: usize = 0x388; // bool
    pub const m_vecScale: usize = 0x390; // CParticleCollectionVecInput
    pub const m_nFieldOutput: usize = 0x9C0; // ParticleAttributeIndex_t
    pub const m_nFieldOutputPrev: usize = 0x9C4; // ParticleAttributeIndex_t
}

pub mod C_OP_QuantizeCPComponent { // CParticleFunctionPreEmission
    pub const m_flInputValue: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_nCPOutput: usize = 0x308; // int32_t
    pub const m_nOutVectorField: usize = 0x30C; // int32_t
    pub const m_flQuantizeValue: usize = 0x310; // CParticleCollectionFloatInput
}

pub mod C_OP_QuantizeFloat { // CParticleFunctionOperator
    pub const m_InputValue: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_nOutputField: usize = 0x300; // ParticleAttributeIndex_t
}

pub mod C_OP_RadiusDecay { // CParticleFunctionOperator
    pub const m_flMinRadius: usize = 0x1B0; // float
}

pub mod C_OP_RampCPLinearRandom { // CParticleFunctionPreEmission
    pub const m_nOutControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_vecRateMin: usize = 0x1B8; // Vector
    pub const m_vecRateMax: usize = 0x1C4; // Vector
}

pub mod C_OP_RampScalarLinear { // CParticleFunctionOperator
    pub const m_RateMin: usize = 0x1B0; // float
    pub const m_RateMax: usize = 0x1B4; // float
    pub const m_flStartTime_min: usize = 0x1B8; // float
    pub const m_flStartTime_max: usize = 0x1BC; // float
    pub const m_flEndTime_min: usize = 0x1C0; // float
    pub const m_flEndTime_max: usize = 0x1C4; // float
    pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
    pub const m_bProportionalOp: usize = 0x1F4; // bool
}

pub mod C_OP_RampScalarLinearSimple { // CParticleFunctionOperator
    pub const m_Rate: usize = 0x1B0; // float
    pub const m_flStartTime: usize = 0x1B4; // float
    pub const m_flEndTime: usize = 0x1B8; // float
    pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
}

pub mod C_OP_RampScalarSpline { // CParticleFunctionOperator
    pub const m_RateMin: usize = 0x1B0; // float
    pub const m_RateMax: usize = 0x1B4; // float
    pub const m_flStartTime_min: usize = 0x1B8; // float
    pub const m_flStartTime_max: usize = 0x1BC; // float
    pub const m_flEndTime_min: usize = 0x1C0; // float
    pub const m_flEndTime_max: usize = 0x1C4; // float
    pub const m_flBias: usize = 0x1C8; // float
    pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
    pub const m_bProportionalOp: usize = 0x1F4; // bool
    pub const m_bEaseOut: usize = 0x1F5; // bool
}

pub mod C_OP_RampScalarSplineSimple { // CParticleFunctionOperator
    pub const m_Rate: usize = 0x1B0; // float
    pub const m_flStartTime: usize = 0x1B4; // float
    pub const m_flEndTime: usize = 0x1B8; // float
    pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
    pub const m_bEaseOut: usize = 0x1E4; // bool
}

pub mod C_OP_RandomForce { // CParticleFunctionForce
    pub const m_MinForce: usize = 0x1BC; // Vector
    pub const m_MaxForce: usize = 0x1C8; // Vector
}

pub mod C_OP_ReadFromNeighboringParticle { // CParticleFunctionOperator
    pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nIncrement: usize = 0x1B8; // int32_t
    pub const m_DistanceCheck: usize = 0x1C0; // CPerParticleFloatInput
    pub const m_flInterpolation: usize = 0x310; // CPerParticleFloatInput
}

pub mod C_OP_ReinitializeScalarEndCap { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flOutputMin: usize = 0x1B4; // float
    pub const m_flOutputMax: usize = 0x1B8; // float
}

pub mod C_OP_RemapAverageHitboxSpeedtoCP { // CParticleFunctionPreEmission
    pub const m_nInControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nOutControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_nField: usize = 0x1BC; // int32_t
    pub const m_nHitboxDataType: usize = 0x1C0; // ParticleHitboxDataSelection_t
    pub const m_flInputMin: usize = 0x1C8; // CParticleCollectionFloatInput
    pub const m_flInputMax: usize = 0x318; // CParticleCollectionFloatInput
    pub const m_flOutputMin: usize = 0x468; // CParticleCollectionFloatInput
    pub const m_flOutputMax: usize = 0x5B8; // CParticleCollectionFloatInput
    pub const m_nHeightControlPointNumber: usize = 0x708; // int32_t
    pub const m_vecComparisonVelocity: usize = 0x710; // CParticleCollectionVecInput
    pub const m_HitboxSetName: usize = 0xD40; // char[128]
}

pub mod C_OP_RemapAverageScalarValuetoCP { // CParticleFunctionPreEmission
    pub const m_nOutControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nOutVectorField: usize = 0x1B8; // int32_t
    pub const m_nField: usize = 0x1BC; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1C0; // float
    pub const m_flInputMax: usize = 0x1C4; // float
    pub const m_flOutputMin: usize = 0x1C8; // float
    pub const m_flOutputMax: usize = 0x1CC; // float
}

pub mod C_OP_RemapBoundingVolumetoCP { // CParticleFunctionPreEmission
    pub const m_nOutControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_flInputMin: usize = 0x1B8; // float
    pub const m_flInputMax: usize = 0x1BC; // float
    pub const m_flOutputMin: usize = 0x1C0; // float
    pub const m_flOutputMax: usize = 0x1C4; // float
}

pub mod C_OP_RemapCPVelocityToVector { // CParticleFunctionOperator
    pub const m_nControlPoint: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x1B8; // float
    pub const m_bNormalize: usize = 0x1BC; // bool
}

pub mod C_OP_RemapCPtoCP { // CParticleFunctionPreEmission
    pub const m_nInputControlPoint: usize = 0x1B4; // int32_t
    pub const m_nOutputControlPoint: usize = 0x1B8; // int32_t
    pub const m_nInputField: usize = 0x1BC; // int32_t
    pub const m_nOutputField: usize = 0x1C0; // int32_t
    pub const m_flInputMin: usize = 0x1C4; // float
    pub const m_flInputMax: usize = 0x1C8; // float
    pub const m_flOutputMin: usize = 0x1CC; // float
    pub const m_flOutputMax: usize = 0x1D0; // float
    pub const m_bDerivative: usize = 0x1D4; // bool
    pub const m_flInterpRate: usize = 0x1D8; // float
}

pub mod C_OP_RemapCPtoScalar { // CParticleFunctionOperator
    pub const m_nCPInput: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nField: usize = 0x1B8; // int32_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
    pub const m_flStartTime: usize = 0x1CC; // float
    pub const m_flEndTime: usize = 0x1D0; // float
    pub const m_flInterpRate: usize = 0x1D4; // float
    pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
}

pub mod C_OP_RemapCPtoVector { // CParticleFunctionOperator
    pub const m_nCPInput: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nLocalSpaceCP: usize = 0x1B8; // int32_t
    pub const m_vInputMin: usize = 0x1BC; // Vector
    pub const m_vInputMax: usize = 0x1C8; // Vector
    pub const m_vOutputMin: usize = 0x1D4; // Vector
    pub const m_vOutputMax: usize = 0x1E0; // Vector
    pub const m_flStartTime: usize = 0x1EC; // float
    pub const m_flEndTime: usize = 0x1F0; // float
    pub const m_flInterpRate: usize = 0x1F4; // float
    pub const m_nSetMethod: usize = 0x1F8; // ParticleSetMethod_t
    pub const m_bOffset: usize = 0x1FC; // bool
    pub const m_bAccelerate: usize = 0x1FD; // bool
}

pub mod C_OP_RemapControlPointDirectionToVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x1B4; // float
    pub const m_nControlPointNumber: usize = 0x1B8; // int32_t
}

pub mod C_OP_RemapControlPointOrientationToRotation { // CParticleFunctionOperator
    pub const m_nCP: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flOffsetRot: usize = 0x1B8; // float
    pub const m_nComponent: usize = 0x1BC; // int32_t
}

pub mod C_OP_RemapCrossProductOfTwoVectorsToVector { // CParticleFunctionOperator
    pub const m_InputVec1: usize = 0x1B0; // CPerParticleVecInput
    pub const m_InputVec2: usize = 0x7E0; // CPerParticleVecInput
    pub const m_nFieldOutput: usize = 0xE10; // ParticleAttributeIndex_t
    pub const m_bNormalize: usize = 0xE14; // bool
}

pub mod C_OP_RemapDensityGradientToVectorAttribute { // CParticleFunctionOperator
    pub const m_flRadiusScale: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
}

pub mod C_OP_RemapDensityToVector { // CParticleFunctionOperator
    pub const m_flRadiusScale: usize = 0x1B0; // float
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flDensityMin: usize = 0x1B8; // float
    pub const m_flDensityMax: usize = 0x1BC; // float
    pub const m_vecOutputMin: usize = 0x1C0; // Vector
    pub const m_vecOutputMax: usize = 0x1CC; // Vector
    pub const m_bUseParentDensity: usize = 0x1D8; // bool
    pub const m_nVoxelGridResolution: usize = 0x1DC; // int32_t
}

pub mod C_OP_RemapDirectionToCPToVector { // CParticleFunctionOperator
    pub const m_nCP: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x1B8; // float
    pub const m_flOffsetRot: usize = 0x1BC; // float
    pub const m_vecOffsetAxis: usize = 0x1C0; // Vector
    pub const m_bNormalize: usize = 0x1CC; // bool
    pub const m_nFieldStrength: usize = 0x1D0; // ParticleAttributeIndex_t
}

pub mod C_OP_RemapDistanceToLineSegmentBase { // CParticleFunctionOperator
    pub const m_nCP0: usize = 0x1B0; // int32_t
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_flMinInputValue: usize = 0x1B8; // float
    pub const m_flMaxInputValue: usize = 0x1BC; // float
    pub const m_bInfiniteLine: usize = 0x1C0; // bool
}

pub mod C_OP_RemapDistanceToLineSegmentToScalar { // C_OP_RemapDistanceToLineSegmentBase
    pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
    pub const m_flMinOutputValue: usize = 0x1C8; // float
    pub const m_flMaxOutputValue: usize = 0x1CC; // float
}

pub mod C_OP_RemapDistanceToLineSegmentToVector { // C_OP_RemapDistanceToLineSegmentBase
    pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
    pub const m_vMinOutputValue: usize = 0x1C8; // Vector
    pub const m_vMaxOutputValue: usize = 0x1D4; // Vector
}

pub mod C_OP_RemapDotProductToCP { // CParticleFunctionPreEmission
    pub const m_nInputCP1: usize = 0x1B4; // int32_t
    pub const m_nInputCP2: usize = 0x1B8; // int32_t
    pub const m_nOutputCP: usize = 0x1BC; // int32_t
    pub const m_nOutVectorField: usize = 0x1C0; // int32_t
    pub const m_flInputMin: usize = 0x1C8; // CParticleCollectionFloatInput
    pub const m_flInputMax: usize = 0x318; // CParticleCollectionFloatInput
    pub const m_flOutputMin: usize = 0x468; // CParticleCollectionFloatInput
    pub const m_flOutputMax: usize = 0x5B8; // CParticleCollectionFloatInput
}

pub mod C_OP_RemapDotProductToScalar { // CParticleFunctionOperator
    pub const m_nInputCP1: usize = 0x1B0; // int32_t
    pub const m_nInputCP2: usize = 0x1B4; // int32_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
    pub const m_bUseParticleVelocity: usize = 0x1CC; // bool
    pub const m_nSetMethod: usize = 0x1D0; // ParticleSetMethod_t
    pub const m_bActiveRange: usize = 0x1D4; // bool
    pub const m_bUseParticleNormal: usize = 0x1D5; // bool
}

pub mod C_OP_RemapExternalWindToCP { // CParticleFunctionPreEmission
    pub const m_nCP: usize = 0x1B4; // int32_t
    pub const m_nCPOutput: usize = 0x1B8; // int32_t
    pub const m_vecScale: usize = 0x1C0; // CParticleCollectionVecInput
    pub const m_bSetMagnitude: usize = 0x7F0; // bool
    pub const m_nOutVectorField: usize = 0x7F4; // int32_t
}

pub mod C_OP_RemapModelVolumetoCP { // CParticleFunctionPreEmission
    pub const m_nBBoxType: usize = 0x1B4; // BBoxVolumeType_t
    pub const m_nInControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_nOutControlPointNumber: usize = 0x1BC; // int32_t
    pub const m_nOutControlPointMaxNumber: usize = 0x1C0; // int32_t
    pub const m_nField: usize = 0x1C4; // int32_t
    pub const m_flInputMin: usize = 0x1C8; // float
    pub const m_flInputMax: usize = 0x1CC; // float
    pub const m_flOutputMin: usize = 0x1D0; // float
    pub const m_flOutputMax: usize = 0x1D4; // float
}

pub mod C_OP_RemapNamedModelBodyPartEndCap { // C_OP_RemapNamedModelElementEndCap
}

pub mod C_OP_RemapNamedModelBodyPartOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

pub mod C_OP_RemapNamedModelElementEndCap { // CParticleFunctionOperator
    pub const m_hModel: usize = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_inNames: usize = 0x1B8; // CUtlVector<CUtlString>
    pub const m_outNames: usize = 0x1D0; // CUtlVector<CUtlString>
    pub const m_fallbackNames: usize = 0x1E8; // CUtlVector<CUtlString>
    pub const m_bModelFromRenderer: usize = 0x200; // bool
    pub const m_nFieldInput: usize = 0x204; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x208; // ParticleAttributeIndex_t
}

pub mod C_OP_RemapNamedModelElementOnceTimed { // CParticleFunctionOperator
    pub const m_hModel: usize = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_inNames: usize = 0x1B8; // CUtlVector<CUtlString>
    pub const m_outNames: usize = 0x1D0; // CUtlVector<CUtlString>
    pub const m_fallbackNames: usize = 0x1E8; // CUtlVector<CUtlString>
    pub const m_bModelFromRenderer: usize = 0x200; // bool
    pub const m_bProportional: usize = 0x201; // bool
    pub const m_nFieldInput: usize = 0x204; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x208; // ParticleAttributeIndex_t
    pub const m_flRemapTime: usize = 0x20C; // float
}

pub mod C_OP_RemapNamedModelMeshGroupEndCap { // C_OP_RemapNamedModelElementEndCap
}

pub mod C_OP_RemapNamedModelMeshGroupOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

pub mod C_OP_RemapNamedModelSequenceEndCap { // C_OP_RemapNamedModelElementEndCap
}

pub mod C_OP_RemapNamedModelSequenceOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

pub mod C_OP_RemapParticleCountOnScalarEndCap { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nInputMin: usize = 0x1B4; // int32_t
    pub const m_nInputMax: usize = 0x1B8; // int32_t
    pub const m_flOutputMin: usize = 0x1BC; // float
    pub const m_flOutputMax: usize = 0x1C0; // float
    pub const m_bBackwards: usize = 0x1C4; // bool
    pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
}

pub mod C_OP_RemapParticleCountToScalar { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nInputMin: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_nInputMax: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_flOutputMin: usize = 0x458; // CParticleCollectionFloatInput
    pub const m_flOutputMax: usize = 0x5A8; // CParticleCollectionFloatInput
    pub const m_bActiveRange: usize = 0x6F8; // bool
    pub const m_nSetMethod: usize = 0x6FC; // ParticleSetMethod_t
}

pub mod C_OP_RemapSDFDistanceToScalarAttribute { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nVectorFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flMinDistance: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flMaxDistance: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_flValueBelowMin: usize = 0x458; // CParticleCollectionFloatInput
    pub const m_flValueAtMin: usize = 0x5A8; // CParticleCollectionFloatInput
    pub const m_flValueAtMax: usize = 0x6F8; // CParticleCollectionFloatInput
    pub const m_flValueAboveMax: usize = 0x848; // CParticleCollectionFloatInput
}

pub mod C_OP_RemapSDFDistanceToVectorAttribute { // CParticleFunctionOperator
    pub const m_nVectorFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nVectorFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flMinDistance: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flMaxDistance: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_vValueBelowMin: usize = 0x458; // Vector
    pub const m_vValueAtMin: usize = 0x464; // Vector
    pub const m_vValueAtMax: usize = 0x470; // Vector
    pub const m_vValueAboveMax: usize = 0x47C; // Vector
}

pub mod C_OP_RemapSDFGradientToVectorAttribute { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
}

pub mod C_OP_RemapScalar { // CParticleFunctionOperator
    pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // float
    pub const m_flInputMax: usize = 0x1BC; // float
    pub const m_flOutputMin: usize = 0x1C0; // float
    pub const m_flOutputMax: usize = 0x1C4; // float
    pub const m_bOldCode: usize = 0x1C8; // bool
}

pub mod C_OP_RemapScalarEndCap { // CParticleFunctionOperator
    pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // float
    pub const m_flInputMax: usize = 0x1BC; // float
    pub const m_flOutputMin: usize = 0x1C0; // float
    pub const m_flOutputMax: usize = 0x1C4; // float
}

pub mod C_OP_RemapScalarOnceTimed { // CParticleFunctionOperator
    pub const m_bProportional: usize = 0x1B0; // bool
    pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
    pub const m_flRemapTime: usize = 0x1CC; // float
}

pub mod C_OP_RemapSpeed { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B4; // float
    pub const m_flInputMax: usize = 0x1B8; // float
    pub const m_flOutputMin: usize = 0x1BC; // float
    pub const m_flOutputMax: usize = 0x1C0; // float
    pub const m_nSetMethod: usize = 0x1C4; // ParticleSetMethod_t
    pub const m_bIgnoreDelta: usize = 0x1C8; // bool
}

pub mod C_OP_RemapSpeedtoCP { // CParticleFunctionPreEmission
    pub const m_nInControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_nOutControlPointNumber: usize = 0x1B8; // int32_t
    pub const m_nField: usize = 0x1BC; // int32_t
    pub const m_flInputMin: usize = 0x1C0; // float
    pub const m_flInputMax: usize = 0x1C4; // float
    pub const m_flOutputMin: usize = 0x1C8; // float
    pub const m_flOutputMax: usize = 0x1CC; // float
    pub const m_bUseDeltaV: usize = 0x1D0; // bool
}

pub mod C_OP_RemapTransformOrientationToRotations { // CParticleFunctionOperator
    pub const m_TransformInput: usize = 0x1B0; // CParticleTransformInput
    pub const m_vecRotation: usize = 0x210; // Vector
    pub const m_bUseQuat: usize = 0x21C; // bool
    pub const m_bWriteNormal: usize = 0x21D; // bool
}

pub mod C_OP_RemapTransformOrientationToYaw { // CParticleFunctionOperator
    pub const m_TransformInput: usize = 0x1B0; // CParticleTransformInput
    pub const m_nFieldOutput: usize = 0x210; // ParticleAttributeIndex_t
    pub const m_flRotOffset: usize = 0x214; // float
    pub const m_flSpinStrength: usize = 0x218; // float
}

pub mod C_OP_RemapTransformToVelocity { // CParticleFunctionOperator
    pub const m_TransformInput: usize = 0x1B0; // CParticleTransformInput
}

pub mod C_OP_RemapTransformVisibilityToScalar { // CParticleFunctionOperator
    pub const m_nSetMethod: usize = 0x1B0; // ParticleSetMethod_t
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x21C; // float
    pub const m_flInputMax: usize = 0x220; // float
    pub const m_flOutputMin: usize = 0x224; // float
    pub const m_flOutputMax: usize = 0x228; // float
    pub const m_flRadius: usize = 0x22C; // float
}

pub mod C_OP_RemapTransformVisibilityToVector { // CParticleFunctionOperator
    pub const m_nSetMethod: usize = 0x1B0; // ParticleSetMethod_t
    pub const m_TransformInput: usize = 0x1B8; // CParticleTransformInput
    pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x21C; // float
    pub const m_flInputMax: usize = 0x220; // float
    pub const m_vecOutputMin: usize = 0x224; // Vector
    pub const m_vecOutputMax: usize = 0x230; // Vector
    pub const m_flRadius: usize = 0x23C; // float
}

pub mod C_OP_RemapVectorComponentToScalar { // CParticleFunctionOperator
    pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nComponent: usize = 0x1B8; // int32_t
}

pub mod C_OP_RemapVectortoCP { // CParticleFunctionOperator
    pub const m_nOutControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nFieldInput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nParticleNumber: usize = 0x1B8; // int32_t
}

pub mod C_OP_RemapVelocityToVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0x1B4; // float
    pub const m_bNormalize: usize = 0x1B8; // bool
}

pub mod C_OP_RemapVisibilityScalar { // CParticleFunctionOperator
    pub const m_nFieldInput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1B8; // float
    pub const m_flInputMax: usize = 0x1BC; // float
    pub const m_flOutputMin: usize = 0x1C0; // float
    pub const m_flOutputMax: usize = 0x1C4; // float
    pub const m_flRadiusScale: usize = 0x1C8; // float
}

pub mod C_OP_RenderAsModels { // CParticleFunctionRenderer
    pub const m_ModelList: usize = 0x1F8; // CUtlVector<ModelReference_t>
    pub const m_flModelScale: usize = 0x214; // float
    pub const m_bFitToModelSize: usize = 0x218; // bool
    pub const m_bNonUniformScaling: usize = 0x219; // bool
    pub const m_nXAxisScalingAttribute: usize = 0x21C; // ParticleAttributeIndex_t
    pub const m_nYAxisScalingAttribute: usize = 0x220; // ParticleAttributeIndex_t
    pub const m_nZAxisScalingAttribute: usize = 0x224; // ParticleAttributeIndex_t
    pub const m_nSizeCullBloat: usize = 0x228; // int32_t
}

pub mod C_OP_RenderBlobs { // CParticleFunctionRenderer
    pub const m_cubeWidth: usize = 0x1F8; // CParticleCollectionRendererFloatInput
    pub const m_cutoffRadius: usize = 0x348; // CParticleCollectionRendererFloatInput
    pub const m_renderRadius: usize = 0x498; // CParticleCollectionRendererFloatInput
    pub const m_nScaleCP: usize = 0x5E8; // int32_t
    pub const m_MaterialVars: usize = 0x5F0; // CUtlVector<MaterialVariable_t>
    pub const m_hMaterial: usize = 0x620; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

pub mod C_OP_RenderCables { // CParticleFunctionRenderer
    pub const m_flRadiusScale: usize = 0x1F8; // CParticleCollectionFloatInput
    pub const m_flAlphaScale: usize = 0x348; // CParticleCollectionFloatInput
    pub const m_vecColorScale: usize = 0x498; // CParticleCollectionVecInput
    pub const m_nColorBlendType: usize = 0xAC8; // ParticleColorBlendType_t
    pub const m_hMaterial: usize = 0xAD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nTextureRepetitionMode: usize = 0xAD8; // TextureRepetitionMode_t
    pub const m_flTextureRepeatsPerSegment: usize = 0xAE0; // CParticleCollectionFloatInput
    pub const m_flTextureRepeatsCircumference: usize = 0xC30; // CParticleCollectionFloatInput
    pub const m_flColorMapOffsetV: usize = 0xD80; // CParticleCollectionFloatInput
    pub const m_flColorMapOffsetU: usize = 0xED0; // CParticleCollectionFloatInput
    pub const m_flNormalMapOffsetV: usize = 0x1020; // CParticleCollectionFloatInput
    pub const m_flNormalMapOffsetU: usize = 0x1170; // CParticleCollectionFloatInput
    pub const m_bDrawCableCaps: usize = 0x12C0; // bool
    pub const m_flCapRoundness: usize = 0x12C4; // float
    pub const m_flCapOffsetAmount: usize = 0x12C8; // float
    pub const m_flTessScale: usize = 0x12CC; // float
    pub const m_nMinTesselation: usize = 0x12D0; // int32_t
    pub const m_nMaxTesselation: usize = 0x12D4; // int32_t
    pub const m_nRoundness: usize = 0x12D8; // int32_t
    pub const m_LightingTransform: usize = 0x12E0; // CParticleTransformInput
    pub const m_MaterialFloatVars: usize = 0x1340; // CUtlVector<FloatInputMaterialVariable_t>
    pub const m_MaterialVecVars: usize = 0x1370; // CUtlVector<VecInputMaterialVariable_t>
}

pub mod C_OP_RenderClothForce { // CParticleFunctionRenderer
}

pub mod C_OP_RenderDeferredLight { // CParticleFunctionRenderer
    pub const m_bUseAlphaTestWindow: usize = 0x1F6; // bool
    pub const m_bUseTexture: usize = 0x1F7; // bool
    pub const m_flRadiusScale: usize = 0x1F8; // float
    pub const m_flAlphaScale: usize = 0x1FC; // float
    pub const m_nAlpha2Field: usize = 0x200; // ParticleAttributeIndex_t
    pub const m_vecColorScale: usize = 0x208; // CParticleCollectionVecInput
    pub const m_nColorBlendType: usize = 0x838; // ParticleColorBlendType_t
    pub const m_flLightDistance: usize = 0x83C; // float
    pub const m_flStartFalloff: usize = 0x840; // float
    pub const m_flDistanceFalloff: usize = 0x844; // float
    pub const m_flSpotFoV: usize = 0x848; // float
    pub const m_nAlphaTestPointField: usize = 0x84C; // ParticleAttributeIndex_t
    pub const m_nAlphaTestRangeField: usize = 0x850; // ParticleAttributeIndex_t
    pub const m_nAlphaTestSharpnessField: usize = 0x854; // ParticleAttributeIndex_t
    pub const m_hTexture: usize = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nHSVShiftControlPoint: usize = 0x860; // int32_t
}

pub mod C_OP_RenderFlattenGrass { // CParticleFunctionRenderer
    pub const m_flFlattenStrength: usize = 0x1F8; // float
    pub const m_nStrengthFieldOverride: usize = 0x1FC; // ParticleAttributeIndex_t
    pub const m_flRadiusScale: usize = 0x200; // float
}

pub mod C_OP_RenderGpuImplicit { // CParticleFunctionRenderer
    pub const m_bUsePerParticleRadius: usize = 0x1F6; // bool
    pub const m_fGridSize: usize = 0x1F8; // CParticleCollectionRendererFloatInput
    pub const m_fRadiusScale: usize = 0x348; // CParticleCollectionRendererFloatInput
    pub const m_fIsosurfaceThreshold: usize = 0x498; // CParticleCollectionRendererFloatInput
    pub const m_nScaleCP: usize = 0x5E8; // int32_t
    pub const m_hMaterial: usize = 0x5F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

pub mod C_OP_RenderLightBeam { // CParticleFunctionRenderer
    pub const m_vColorBlend: usize = 0x1F8; // CParticleCollectionVecInput
    pub const m_nColorBlendType: usize = 0x828; // ParticleColorBlendType_t
    pub const m_flBrightnessLumensPerMeter: usize = 0x830; // CParticleCollectionFloatInput
    pub const m_bCastShadows: usize = 0x980; // bool
    pub const m_flSkirt: usize = 0x988; // CParticleCollectionFloatInput
    pub const m_flRange: usize = 0xAD8; // CParticleCollectionFloatInput
    pub const m_flThickness: usize = 0xC28; // CParticleCollectionFloatInput
}

pub mod C_OP_RenderLights { // C_OP_RenderPoints
    pub const m_flAnimationRate: usize = 0x200; // float
    pub const m_nAnimationType: usize = 0x204; // AnimationType_t
    pub const m_bAnimateInFPS: usize = 0x208; // bool
    pub const m_flMinSize: usize = 0x20C; // float
    pub const m_flMaxSize: usize = 0x210; // float
    pub const m_flStartFadeSize: usize = 0x214; // float
    pub const m_flEndFadeSize: usize = 0x218; // float
}

pub mod C_OP_RenderMaterialProxy { // CParticleFunctionRenderer
    pub const m_nMaterialControlPoint: usize = 0x1F8; // int32_t
    pub const m_nProxyType: usize = 0x1FC; // MaterialProxyType_t
    pub const m_MaterialVars: usize = 0x200; // CUtlVector<MaterialVariable_t>
    pub const m_hOverrideMaterial: usize = 0x218; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_flMaterialOverrideEnabled: usize = 0x220; // CParticleCollectionFloatInput
    pub const m_vecColorScale: usize = 0x370; // CParticleCollectionVecInput
    pub const m_flAlpha: usize = 0x9A0; // CPerParticleFloatInput
    pub const m_nColorBlendType: usize = 0xAF0; // ParticleColorBlendType_t
}

pub mod C_OP_RenderModels { // CParticleFunctionRenderer
    pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x1F6; // bool
    pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x1F7; // bool
    pub const m_bUseMixedResolutionRendering: usize = 0x1F8; // bool
    pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x1F9; // bool
    pub const m_ModelList: usize = 0x200; // CUtlVector<ModelReference_t>
    pub const m_nBodyGroupField: usize = 0x21C; // ParticleAttributeIndex_t
    pub const m_nSubModelField: usize = 0x220; // ParticleAttributeIndex_t
    pub const m_bIgnoreNormal: usize = 0x224; // bool
    pub const m_bOrientZ: usize = 0x225; // bool
    pub const m_bCenterOffset: usize = 0x226; // bool
    pub const m_vecLocalOffset: usize = 0x228; // CPerParticleVecInput
    pub const m_vecLocalRotation: usize = 0x858; // CPerParticleVecInput
    pub const m_bIgnoreRadius: usize = 0xE88; // bool
    pub const m_nModelScaleCP: usize = 0xE8C; // int32_t
    pub const m_vecComponentScale: usize = 0xE90; // CPerParticleVecInput
    pub const m_bLocalScale: usize = 0x14C0; // bool
    pub const m_nSizeCullBloat: usize = 0x14C4; // int32_t
    pub const m_bAnimated: usize = 0x14C8; // bool
    pub const m_flAnimationRate: usize = 0x14D0; // CPerParticleFloatInput
    pub const m_bScaleAnimationRate: usize = 0x1620; // bool
    pub const m_bForceLoopingAnimation: usize = 0x1621; // bool
    pub const m_bResetAnimOnStop: usize = 0x1622; // bool
    pub const m_bManualAnimFrame: usize = 0x1623; // bool
    pub const m_nAnimationScaleField: usize = 0x1624; // ParticleAttributeIndex_t
    pub const m_nAnimationField: usize = 0x1628; // ParticleAttributeIndex_t
    pub const m_nManualFrameField: usize = 0x162C; // ParticleAttributeIndex_t
    pub const m_ActivityName: usize = 0x1630; // char[256]
    pub const m_SequenceName: usize = 0x1730; // char[256]
    pub const m_bEnableClothSimulation: usize = 0x1830; // bool
    pub const m_hOverrideMaterial: usize = 0x1838; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_bOverrideTranslucentMaterials: usize = 0x1840; // bool
    pub const m_nSkin: usize = 0x1848; // CPerParticleFloatInput
    pub const m_MaterialVars: usize = 0x1998; // CUtlVector<MaterialVariable_t>
    pub const m_flManualModelSelection: usize = 0x19B0; // CPerParticleFloatInput
    pub const m_modelInput: usize = 0x1B00; // CParticleModelInput
    pub const m_nLOD: usize = 0x1B58; // int32_t
    pub const m_EconSlotName: usize = 0x1B5C; // char[256]
    pub const m_bOriginalModel: usize = 0x1C5C; // bool
    pub const m_bSuppressTint: usize = 0x1C5D; // bool
    pub const m_bUseRawMeshGroup: usize = 0x1C5E; // bool
    pub const m_bDisableShadows: usize = 0x1C5F; // bool
    pub const m_bDisableDepthPrepass: usize = 0x1C60; // bool
    pub const m_bAcceptsDecals: usize = 0x1C61; // bool
    pub const m_bForceDrawInterlevedWithSiblings: usize = 0x1C62; // bool
    pub const m_bDoNotDrawInParticlePass: usize = 0x1C63; // bool
    pub const m_bUseFastModelCollectionRenderPath: usize = 0x1C64; // bool
    pub const m_bAllowApproximateTransforms: usize = 0x1C65; // bool
    pub const m_szRenderAttribute: usize = 0x1C66; // char[4096]
    pub const m_flRadiusScale: usize = 0x2C68; // CParticleCollectionFloatInput
    pub const m_flAlphaScale: usize = 0x2DB8; // CParticleCollectionFloatInput
    pub const m_flRollScale: usize = 0x2F08; // CParticleCollectionFloatInput
    pub const m_nAlpha2Field: usize = 0x3058; // ParticleAttributeIndex_t
    pub const m_vecColorScale: usize = 0x3060; // CParticleCollectionVecInput
    pub const m_nColorBlendType: usize = 0x3690; // ParticleColorBlendType_t
}

pub mod C_OP_RenderOmni2Light { // CParticleFunctionRenderer
    pub const m_nLightType: usize = 0x1F8; // ParticleOmni2LightTypeChoiceList_t
    pub const m_vColorBlend: usize = 0x200; // CParticleCollectionVecInput
    pub const m_nColorBlendType: usize = 0x830; // ParticleColorBlendType_t
    pub const m_nBrightnessUnit: usize = 0x834; // ParticleLightUnitChoiceList_t
    pub const m_flBrightnessLumens: usize = 0x838; // CPerParticleFloatInput
    pub const m_flBrightnessCandelas: usize = 0x988; // CPerParticleFloatInput
    pub const m_bCastShadows: usize = 0xAD8; // bool
    pub const m_flLuminaireRadius: usize = 0xAE0; // CPerParticleFloatInput
    pub const m_flSkirt: usize = 0xC30; // CPerParticleFloatInput
    pub const m_flRange: usize = 0xD80; // CPerParticleFloatInput
    pub const m_flInnerConeAngle: usize = 0xED0; // CPerParticleFloatInput
    pub const m_flOuterConeAngle: usize = 0x1020; // CPerParticleFloatInput
    pub const m_hLightCookie: usize = 0x1170; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bSphericalCookie: usize = 0x1178; // bool
}

pub mod C_OP_RenderPoints { // CParticleFunctionRenderer
    pub const m_hMaterial: usize = 0x1F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

pub mod C_OP_RenderPostProcessing { // CParticleFunctionRenderer
    pub const m_flPostProcessStrength: usize = 0x1F8; // CPerParticleFloatInput
    pub const m_hPostTexture: usize = 0x348; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    pub const m_nPriority: usize = 0x350; // ParticlePostProcessPriorityGroup_t
}

pub mod C_OP_RenderProjected { // CParticleFunctionRenderer
    pub const m_bProjectCharacter: usize = 0x1F6; // bool
    pub const m_bProjectWorld: usize = 0x1F7; // bool
    pub const m_bProjectWater: usize = 0x1F8; // bool
    pub const m_bFlipHorizontal: usize = 0x1F9; // bool
    pub const m_bEnableProjectedDepthControls: usize = 0x1FA; // bool
    pub const m_flMinProjectionDepth: usize = 0x1FC; // float
    pub const m_flMaxProjectionDepth: usize = 0x200; // float
    pub const m_vecProjectedMaterials: usize = 0x208; // CUtlVector<RenderProjectedMaterial_t>
    pub const m_flMaterialSelection: usize = 0x220; // CPerParticleFloatInput
    pub const m_flAnimationTimeScale: usize = 0x370; // float
    pub const m_bOrientToNormal: usize = 0x374; // bool
    pub const m_MaterialVars: usize = 0x378; // CUtlVector<MaterialVariable_t>
}

pub mod C_OP_RenderRopes { // CBaseRendererSource2
    pub const m_bEnableFadingAndClamping: usize = 0x2638; // bool
    pub const m_flMinSize: usize = 0x263C; // float
    pub const m_flMaxSize: usize = 0x2640; // float
    pub const m_flStartFadeSize: usize = 0x2644; // float
    pub const m_flEndFadeSize: usize = 0x2648; // float
    pub const m_flStartFadeDot: usize = 0x264C; // float
    pub const m_flEndFadeDot: usize = 0x2650; // float
    pub const m_flRadiusTaper: usize = 0x2654; // float
    pub const m_nMinTesselation: usize = 0x2658; // int32_t
    pub const m_nMaxTesselation: usize = 0x265C; // int32_t
    pub const m_flTessScale: usize = 0x2660; // float
    pub const m_flTextureVWorldSize: usize = 0x2668; // CParticleCollectionRendererFloatInput
    pub const m_flTextureVScrollRate: usize = 0x27B8; // CParticleCollectionRendererFloatInput
    pub const m_flTextureVOffset: usize = 0x2908; // CParticleCollectionRendererFloatInput
    pub const m_nTextureVParamsCP: usize = 0x2A58; // int32_t
    pub const m_bClampV: usize = 0x2A5C; // bool
    pub const m_nScaleCP1: usize = 0x2A60; // int32_t
    pub const m_nScaleCP2: usize = 0x2A64; // int32_t
    pub const m_flScaleVSizeByControlPointDistance: usize = 0x2A68; // float
    pub const m_flScaleVScrollByControlPointDistance: usize = 0x2A6C; // float
    pub const m_flScaleVOffsetByControlPointDistance: usize = 0x2A70; // float
    pub const m_bUseScalarForTextureCoordinate: usize = 0x2A75; // bool
    pub const m_nScalarFieldForTextureCoordinate: usize = 0x2A78; // ParticleAttributeIndex_t
    pub const m_flScalarAttributeTextureCoordScale: usize = 0x2A7C; // float
    pub const m_bReverseOrder: usize = 0x2A80; // bool
    pub const m_bClosedLoop: usize = 0x2A81; // bool
    pub const m_nOrientationType: usize = 0x2A84; // ParticleOrientationChoiceList_t
    pub const m_nVectorFieldForOrientation: usize = 0x2A88; // ParticleAttributeIndex_t
    pub const m_bDrawAsOpaque: usize = 0x2A8C; // bool
    pub const m_bGenerateNormals: usize = 0x2A8D; // bool
}

pub mod C_OP_RenderScreenShake { // CParticleFunctionRenderer
    pub const m_flDurationScale: usize = 0x1F8; // float
    pub const m_flRadiusScale: usize = 0x1FC; // float
    pub const m_flFrequencyScale: usize = 0x200; // float
    pub const m_flAmplitudeScale: usize = 0x204; // float
    pub const m_nRadiusField: usize = 0x208; // ParticleAttributeIndex_t
    pub const m_nDurationField: usize = 0x20C; // ParticleAttributeIndex_t
    pub const m_nFrequencyField: usize = 0x210; // ParticleAttributeIndex_t
    pub const m_nAmplitudeField: usize = 0x214; // ParticleAttributeIndex_t
    pub const m_nFilterCP: usize = 0x218; // int32_t
}

pub mod C_OP_RenderScreenVelocityRotate { // CParticleFunctionRenderer
    pub const m_flRotateRateDegrees: usize = 0x1F8; // float
    pub const m_flForwardDegrees: usize = 0x1FC; // float
}

pub mod C_OP_RenderSimpleModelCollection { // CParticleFunctionRenderer
    pub const m_bCenterOffset: usize = 0x1F6; // bool
    pub const m_modelInput: usize = 0x1F8; // CParticleModelInput
    pub const m_nLOD: usize = 0x250; // int32_t
    pub const m_bDisableShadows: usize = 0x254; // bool
    pub const m_bAcceptsDecals: usize = 0x255; // bool
}

pub mod C_OP_RenderSound { // CParticleFunctionRenderer
    pub const m_flDurationScale: usize = 0x1F8; // float
    pub const m_flSndLvlScale: usize = 0x1FC; // float
    pub const m_flPitchScale: usize = 0x200; // float
    pub const m_flVolumeScale: usize = 0x204; // float
    pub const m_nSndLvlField: usize = 0x208; // ParticleAttributeIndex_t
    pub const m_nDurationField: usize = 0x20C; // ParticleAttributeIndex_t
    pub const m_nPitchField: usize = 0x210; // ParticleAttributeIndex_t
    pub const m_nVolumeField: usize = 0x214; // ParticleAttributeIndex_t
    pub const m_nChannel: usize = 0x218; // int32_t
    pub const m_nCPReference: usize = 0x21C; // int32_t
    pub const m_pszSoundName: usize = 0x220; // char[256]
    pub const m_bSuppressStopSoundEvent: usize = 0x320; // bool
}

pub mod C_OP_RenderSprites { // CBaseRendererSource2
    pub const m_nSequenceOverride: usize = 0x2638; // CParticleCollectionRendererFloatInput
    pub const m_nOrientationType: usize = 0x2788; // ParticleOrientationChoiceList_t
    pub const m_nOrientationControlPoint: usize = 0x278C; // int32_t
    pub const m_bUseYawWithNormalAligned: usize = 0x2790; // bool
    pub const m_flMinSize: usize = 0x2798; // CParticleCollectionRendererFloatInput
    pub const m_flMaxSize: usize = 0x28E8; // CParticleCollectionRendererFloatInput
    pub const m_flAlphaAdjustWithSizeAdjust: usize = 0x2A38; // CParticleCollectionRendererFloatInput
    pub const m_flStartFadeSize: usize = 0x2B88; // CParticleCollectionRendererFloatInput
    pub const m_flEndFadeSize: usize = 0x2CD8; // CParticleCollectionRendererFloatInput
    pub const m_flStartFadeDot: usize = 0x2E28; // float
    pub const m_flEndFadeDot: usize = 0x2E2C; // float
    pub const m_bDistanceAlpha: usize = 0x2E30; // bool
    pub const m_bSoftEdges: usize = 0x2E31; // bool
    pub const m_flEdgeSoftnessStart: usize = 0x2E34; // float
    pub const m_flEdgeSoftnessEnd: usize = 0x2E38; // float
    pub const m_bOutline: usize = 0x2E3C; // bool
    pub const m_OutlineColor: usize = 0x2E3D; // Color
    pub const m_nOutlineAlpha: usize = 0x2E44; // int32_t
    pub const m_flOutlineStart0: usize = 0x2E48; // float
    pub const m_flOutlineStart1: usize = 0x2E4C; // float
    pub const m_flOutlineEnd0: usize = 0x2E50; // float
    pub const m_flOutlineEnd1: usize = 0x2E54; // float
    pub const m_nLightingMode: usize = 0x2E58; // ParticleLightingQuality_t
    pub const m_flLightingTessellation: usize = 0x2E60; // CParticleCollectionRendererFloatInput
    pub const m_flLightingDirectionality: usize = 0x2FB0; // CParticleCollectionRendererFloatInput
    pub const m_bParticleShadows: usize = 0x3100; // bool
    pub const m_flShadowDensity: usize = 0x3104; // float
}

pub mod C_OP_RenderStandardLight { // CParticleFunctionRenderer
    pub const m_nLightType: usize = 0x1F8; // ParticleLightTypeChoiceList_t
    pub const m_vecColorScale: usize = 0x200; // CParticleCollectionVecInput
    pub const m_nColorBlendType: usize = 0x830; // ParticleColorBlendType_t
    pub const m_flIntensity: usize = 0x838; // CParticleCollectionFloatInput
    pub const m_bCastShadows: usize = 0x988; // bool
    pub const m_flTheta: usize = 0x990; // CParticleCollectionFloatInput
    pub const m_flPhi: usize = 0xAE0; // CParticleCollectionFloatInput
    pub const m_flRadiusMultiplier: usize = 0xC30; // CParticleCollectionFloatInput
    pub const m_nAttenuationStyle: usize = 0xD80; // StandardLightingAttenuationStyle_t
    pub const m_flFalloffLinearity: usize = 0xD88; // CParticleCollectionFloatInput
    pub const m_flFiftyPercentFalloff: usize = 0xED8; // CParticleCollectionFloatInput
    pub const m_flZeroPercentFalloff: usize = 0x1028; // CParticleCollectionFloatInput
    pub const m_bRenderDiffuse: usize = 0x1178; // bool
    pub const m_bRenderSpecular: usize = 0x1179; // bool
    pub const m_lightCookie: usize = 0x1180; // CUtlString
    pub const m_nPriority: usize = 0x1188; // int32_t
    pub const m_nFogLightingMode: usize = 0x118C; // ParticleLightFogLightingMode_t
    pub const m_flFogContribution: usize = 0x1190; // CParticleCollectionRendererFloatInput
    pub const m_nCapsuleLightBehavior: usize = 0x12E0; // ParticleLightBehaviorChoiceList_t
    pub const m_flCapsuleLength: usize = 0x12E4; // float
    pub const m_bReverseOrder: usize = 0x12E8; // bool
    pub const m_bClosedLoop: usize = 0x12E9; // bool
    pub const m_nPrevPntSource: usize = 0x12EC; // ParticleAttributeIndex_t
    pub const m_flMaxLength: usize = 0x12F0; // float
    pub const m_flMinLength: usize = 0x12F4; // float
    pub const m_bIgnoreDT: usize = 0x12F8; // bool
    pub const m_flConstrainRadiusToLengthRatio: usize = 0x12FC; // float
    pub const m_flLengthScale: usize = 0x1300; // float
    pub const m_flLengthFadeInTime: usize = 0x1304; // float
}

pub mod C_OP_RenderStatusEffect { // CParticleFunctionRenderer
    pub const m_pTextureColorWarp: usize = 0x1F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureDetail2: usize = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureDiffuseWarp: usize = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureFresnelColorWarp: usize = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureFresnelWarp: usize = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureSpecularWarp: usize = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureEnvMap: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

pub mod C_OP_RenderStatusEffectCitadel { // CParticleFunctionRenderer
    pub const m_pTextureColorWarp: usize = 0x1F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureNormal: usize = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureMetalness: usize = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureRoughness: usize = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureSelfIllum: usize = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_pTextureDetail: usize = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

pub mod C_OP_RenderText { // CParticleFunctionRenderer
    pub const m_OutlineColor: usize = 0x1F6; // Color
    pub const m_DefaultText: usize = 0x200; // CUtlString
}

pub mod C_OP_RenderTonemapController { // CParticleFunctionRenderer
    pub const m_flTonemapLevel: usize = 0x1F8; // float
    pub const m_flTonemapWeight: usize = 0x1FC; // float
    pub const m_nTonemapLevelField: usize = 0x200; // ParticleAttributeIndex_t
    pub const m_nTonemapWeightField: usize = 0x204; // ParticleAttributeIndex_t
}

pub mod C_OP_RenderTrails { // CBaseTrailRenderer
    pub const m_bEnableFadingAndClamping: usize = 0x28E9; // bool
    pub const m_flStartFadeDot: usize = 0x28EC; // float
    pub const m_flEndFadeDot: usize = 0x28F0; // float
    pub const m_nPrevPntSource: usize = 0x28F4; // ParticleAttributeIndex_t
    pub const m_flMaxLength: usize = 0x28F8; // float
    pub const m_flMinLength: usize = 0x28FC; // float
    pub const m_bIgnoreDT: usize = 0x2900; // bool
    pub const m_flConstrainRadiusToLengthRatio: usize = 0x2904; // float
    pub const m_flLengthScale: usize = 0x2908; // float
    pub const m_flLengthFadeInTime: usize = 0x290C; // float
    pub const m_flRadiusHeadTaper: usize = 0x2910; // CPerParticleFloatInput
    pub const m_vecHeadColorScale: usize = 0x2A60; // CParticleCollectionVecInput
    pub const m_flHeadAlphaScale: usize = 0x3090; // CPerParticleFloatInput
    pub const m_flRadiusTaper: usize = 0x31E0; // CPerParticleFloatInput
    pub const m_vecTailColorScale: usize = 0x3330; // CParticleCollectionVecInput
    pub const m_flTailAlphaScale: usize = 0x3960; // CPerParticleFloatInput
    pub const m_nHorizCropField: usize = 0x3AB0; // ParticleAttributeIndex_t
    pub const m_nVertCropField: usize = 0x3AB4; // ParticleAttributeIndex_t
    pub const m_flForwardShift: usize = 0x3AB8; // float
    pub const m_bFlipUVBasedOnPitchYaw: usize = 0x3ABC; // bool
}

pub mod C_OP_RenderTreeShake { // CParticleFunctionRenderer
    pub const m_flPeakStrength: usize = 0x1F8; // float
    pub const m_nPeakStrengthFieldOverride: usize = 0x1FC; // ParticleAttributeIndex_t
    pub const m_flRadius: usize = 0x200; // float
    pub const m_nRadiusFieldOverride: usize = 0x204; // ParticleAttributeIndex_t
    pub const m_flShakeDuration: usize = 0x208; // float
    pub const m_flTransitionTime: usize = 0x20C; // float
    pub const m_flTwistAmount: usize = 0x210; // float
    pub const m_flRadialAmount: usize = 0x214; // float
    pub const m_flControlPointOrientationAmount: usize = 0x218; // float
    pub const m_nControlPointForLinearDirection: usize = 0x21C; // int32_t
}

pub mod C_OP_RenderVRHapticEvent { // CParticleFunctionRenderer
    pub const m_nHand: usize = 0x1F8; // ParticleVRHandChoiceList_t
    pub const m_nOutputHandCP: usize = 0x1FC; // int32_t
    pub const m_nOutputField: usize = 0x200; // int32_t
    pub const m_flAmplitude: usize = 0x208; // CPerParticleFloatInput
}

pub mod C_OP_RepeatedTriggerChildGroup { // CParticleFunctionPreEmission
    pub const m_nChildGroupID: usize = 0x1B4; // int32_t
    pub const m_flClusterRefireTime: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flClusterSize: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_flClusterCooldown: usize = 0x458; // CParticleCollectionFloatInput
    pub const m_bLimitChildCount: usize = 0x5A8; // bool
}

pub mod C_OP_RestartAfterDuration { // CParticleFunctionOperator
    pub const m_flDurationMin: usize = 0x1B0; // float
    pub const m_flDurationMax: usize = 0x1B4; // float
    pub const m_nCP: usize = 0x1B8; // int32_t
    pub const m_nCPField: usize = 0x1BC; // int32_t
    pub const m_nChildGroupID: usize = 0x1C0; // int32_t
    pub const m_bOnlyChildren: usize = 0x1C4; // bool
}

pub mod C_OP_RopeSpringConstraint { // CParticleFunctionConstraint
    pub const m_flRestLength: usize = 0x1B0; // CParticleCollectionFloatInput
    pub const m_flMinDistance: usize = 0x300; // CParticleCollectionFloatInput
    pub const m_flMaxDistance: usize = 0x450; // CParticleCollectionFloatInput
    pub const m_flAdjustmentScale: usize = 0x5A0; // float
    pub const m_flInitialRestingLength: usize = 0x5A8; // CParticleCollectionFloatInput
}

pub mod C_OP_RotateVector { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecRotAxisMin: usize = 0x1B4; // Vector
    pub const m_vecRotAxisMax: usize = 0x1C0; // Vector
    pub const m_flRotRateMin: usize = 0x1CC; // float
    pub const m_flRotRateMax: usize = 0x1D0; // float
    pub const m_bNormalize: usize = 0x1D4; // bool
    pub const m_flScale: usize = 0x1D8; // CPerParticleFloatInput
}

pub mod C_OP_RtEnvCull { // CParticleFunctionOperator
    pub const m_vecTestDir: usize = 0x1B0; // Vector
    pub const m_vecTestNormal: usize = 0x1BC; // Vector
    pub const m_bCullOnMiss: usize = 0x1C8; // bool
    pub const m_bStickInsteadOfCull: usize = 0x1C9; // bool
    pub const m_RtEnvName: usize = 0x1CA; // char[128]
    pub const m_nRTEnvCP: usize = 0x24C; // int32_t
    pub const m_nComponent: usize = 0x250; // int32_t
}

pub mod C_OP_SDFConstraint { // CParticleFunctionConstraint
    pub const m_flMinDist: usize = 0x1B0; // CParticleCollectionFloatInput
    pub const m_flMaxDist: usize = 0x300; // CParticleCollectionFloatInput
    pub const m_nMaxIterations: usize = 0x450; // int32_t
}

pub mod C_OP_SDFForce { // CParticleFunctionForce
    pub const m_flForceScale: usize = 0x1BC; // float
}

pub mod C_OP_SDFLighting { // CParticleFunctionOperator
    pub const m_vLightingDir: usize = 0x1B0; // Vector
    pub const m_vTint_0: usize = 0x1BC; // Vector
    pub const m_vTint_1: usize = 0x1C8; // Vector
}

pub mod C_OP_SelectivelyEnableChildren { // CParticleFunctionPreEmission
    pub const m_nChildGroupID: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_nFirstChild: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_nNumChildrenToEnable: usize = 0x458; // CParticleCollectionFloatInput
    pub const m_bPlayEndcapOnStop: usize = 0x5A8; // bool
    pub const m_bDestroyImmediately: usize = 0x5A9; // bool
}

pub mod C_OP_SequenceFromModel { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nFieldOutputAnim: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_flInputMin: usize = 0x1BC; // float
    pub const m_flInputMax: usize = 0x1C0; // float
    pub const m_flOutputMin: usize = 0x1C4; // float
    pub const m_flOutputMax: usize = 0x1C8; // float
    pub const m_nSetMethod: usize = 0x1CC; // ParticleSetMethod_t
}

pub mod C_OP_SetAttributeToScalarExpression { // CParticleFunctionOperator
    pub const m_nExpression: usize = 0x1B0; // ScalarExpressionType_t
    pub const m_flInput1: usize = 0x1B8; // CPerParticleFloatInput
    pub const m_flInput2: usize = 0x308; // CPerParticleFloatInput
    pub const m_flOutputRemap: usize = 0x458; // CParticleRemapFloatInput
    pub const m_nOutputField: usize = 0x5A8; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x5AC; // ParticleSetMethod_t
}

pub mod C_OP_SetCPOrientationToDirection { // CParticleFunctionOperator
    pub const m_nInputControlPoint: usize = 0x1B0; // int32_t
    pub const m_nOutputControlPoint: usize = 0x1B4; // int32_t
}

pub mod C_OP_SetCPOrientationToGroundNormal { // CParticleFunctionOperator
    pub const m_flInterpRate: usize = 0x1B0; // float
    pub const m_flMaxTraceLength: usize = 0x1B4; // float
    pub const m_flTolerance: usize = 0x1B8; // float
    pub const m_flTraceOffset: usize = 0x1BC; // float
    pub const m_CollisionGroupName: usize = 0x1C0; // char[128]
    pub const m_nTraceSet: usize = 0x240; // ParticleTraceSet_t
    pub const m_nInputCP: usize = 0x244; // int32_t
    pub const m_nOutputCP: usize = 0x248; // int32_t
    pub const m_bIncludeWater: usize = 0x258; // bool
}

pub mod C_OP_SetCPOrientationToPointAtCP { // CParticleFunctionPreEmission
    pub const m_nInputCP: usize = 0x1B4; // int32_t
    pub const m_nOutputCP: usize = 0x1B8; // int32_t
    pub const m_flInterpolation: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_b2DOrientation: usize = 0x310; // bool
    pub const m_bAvoidSingularity: usize = 0x311; // bool
    pub const m_bPointAway: usize = 0x312; // bool
}

pub mod C_OP_SetCPtoVector { // CParticleFunctionOperator
    pub const m_nCPInput: usize = 0x1B0; // int32_t
    pub const m_nFieldOutput: usize = 0x1B4; // ParticleAttributeIndex_t
}

pub mod C_OP_SetChildControlPoints { // CParticleFunctionOperator
    pub const m_nChildGroupID: usize = 0x1B0; // int32_t
    pub const m_nFirstControlPoint: usize = 0x1B4; // int32_t
    pub const m_nNumControlPoints: usize = 0x1B8; // int32_t
    pub const m_nFirstSourcePoint: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_bReverse: usize = 0x310; // bool
    pub const m_bSetOrientation: usize = 0x311; // bool
}

pub mod C_OP_SetControlPointFieldFromVectorExpression { // CParticleFunctionPreEmission
    pub const m_nExpression: usize = 0x1B4; // VectorFloatExpressionType_t
    pub const m_vecInput1: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_vecInput2: usize = 0x7E8; // CParticleCollectionVecInput
    pub const m_flOutputRemap: usize = 0xE18; // CParticleRemapFloatInput
    pub const m_nOutputCP: usize = 0xF68; // int32_t
    pub const m_nOutVectorField: usize = 0xF6C; // int32_t
}

pub mod C_OP_SetControlPointFieldToScalarExpression { // CParticleFunctionPreEmission
    pub const m_nExpression: usize = 0x1B4; // ScalarExpressionType_t
    pub const m_flInput1: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_flInput2: usize = 0x308; // CParticleCollectionFloatInput
    pub const m_flOutputRemap: usize = 0x458; // CParticleRemapFloatInput
    pub const m_nOutputCP: usize = 0x5A8; // int32_t
    pub const m_nOutVectorField: usize = 0x5AC; // int32_t
}

pub mod C_OP_SetControlPointFieldToWater { // CParticleFunctionPreEmission
    pub const m_nSourceCP: usize = 0x1B4; // int32_t
    pub const m_nDestCP: usize = 0x1B8; // int32_t
    pub const m_nCPField: usize = 0x1BC; // int32_t
}

pub mod C_OP_SetControlPointFromObjectScale { // CParticleFunctionPreEmission
    pub const m_nCPInput: usize = 0x1B4; // int32_t
    pub const m_nCPOutput: usize = 0x1B8; // int32_t
}

pub mod C_OP_SetControlPointOrientation { // CParticleFunctionPreEmission
    pub const m_bUseWorldLocation: usize = 0x1B1; // bool
    pub const m_bRandomize: usize = 0x1B3; // bool
    pub const m_bSetOnce: usize = 0x1B4; // bool
    pub const m_nCP: usize = 0x1B8; // int32_t
    pub const m_nHeadLocation: usize = 0x1BC; // int32_t
    pub const m_vecRotation: usize = 0x1C0; // QAngle
    pub const m_vecRotationB: usize = 0x1CC; // QAngle
    pub const m_flInterpolation: usize = 0x1D8; // CParticleCollectionFloatInput
}

pub mod C_OP_SetControlPointOrientationToCPVelocity { // CParticleFunctionPreEmission
    pub const m_nCPInput: usize = 0x1B4; // int32_t
    pub const m_nCPOutput: usize = 0x1B8; // int32_t
}

pub mod C_OP_SetControlPointPositionToRandomActiveCP { // CParticleFunctionPreEmission
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_nHeadLocationMin: usize = 0x1B8; // int32_t
    pub const m_nHeadLocationMax: usize = 0x1BC; // int32_t
    pub const m_flResetRate: usize = 0x1C0; // CParticleCollectionFloatInput
}

pub mod C_OP_SetControlPointPositionToTimeOfDayValue { // CParticleFunctionPreEmission
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_pszTimeOfDayParameter: usize = 0x1B8; // char[128]
    pub const m_vecDefaultValue: usize = 0x238; // Vector
}

pub mod C_OP_SetControlPointPositions { // CParticleFunctionPreEmission
    pub const m_bUseWorldLocation: usize = 0x1B1; // bool
    pub const m_bOrient: usize = 0x1B2; // bool
    pub const m_bSetOnce: usize = 0x1B3; // bool
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_nCP2: usize = 0x1B8; // int32_t
    pub const m_nCP3: usize = 0x1BC; // int32_t
    pub const m_nCP4: usize = 0x1C0; // int32_t
    pub const m_vecCP1Pos: usize = 0x1C4; // Vector
    pub const m_vecCP2Pos: usize = 0x1D0; // Vector
    pub const m_vecCP3Pos: usize = 0x1DC; // Vector
    pub const m_vecCP4Pos: usize = 0x1E8; // Vector
    pub const m_nHeadLocation: usize = 0x1F4; // int32_t
}

pub mod C_OP_SetControlPointRotation { // CParticleFunctionPreEmission
    pub const m_vecRotAxis: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_flRotRate: usize = 0x7E8; // CParticleCollectionFloatInput
    pub const m_nCP: usize = 0x938; // int32_t
    pub const m_nLocalCP: usize = 0x93C; // int32_t
}

pub mod C_OP_SetControlPointToCPVelocity { // CParticleFunctionPreEmission
    pub const m_nCPInput: usize = 0x1B4; // int32_t
    pub const m_nCPOutputVel: usize = 0x1B8; // int32_t
    pub const m_bNormalize: usize = 0x1BC; // bool
    pub const m_nCPOutputMag: usize = 0x1C0; // int32_t
    pub const m_nCPField: usize = 0x1C4; // int32_t
    pub const m_vecComparisonVelocity: usize = 0x1C8; // CParticleCollectionVecInput
}

pub mod C_OP_SetControlPointToCenter { // CParticleFunctionPreEmission
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_vecCP1Pos: usize = 0x1B8; // Vector
    pub const m_nSetParent: usize = 0x1C4; // ParticleParentSetMode_t
}

pub mod C_OP_SetControlPointToHMD { // CParticleFunctionPreEmission
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_vecCP1Pos: usize = 0x1B8; // Vector
    pub const m_bOrientToHMD: usize = 0x1C4; // bool
}

pub mod C_OP_SetControlPointToHand { // CParticleFunctionPreEmission
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_nHand: usize = 0x1B8; // int32_t
    pub const m_vecCP1Pos: usize = 0x1BC; // Vector
    pub const m_bOrientToHand: usize = 0x1C8; // bool
}

pub mod C_OP_SetControlPointToImpactPoint { // CParticleFunctionPreEmission
    pub const m_nCPOut: usize = 0x1B4; // int32_t
    pub const m_nCPIn: usize = 0x1B8; // int32_t
    pub const m_flUpdateRate: usize = 0x1BC; // float
    pub const m_flTraceLength: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_flStartOffset: usize = 0x310; // float
    pub const m_flOffset: usize = 0x314; // float
    pub const m_vecTraceDir: usize = 0x318; // Vector
    pub const m_CollisionGroupName: usize = 0x324; // char[128]
    pub const m_nTraceSet: usize = 0x3A4; // ParticleTraceSet_t
    pub const m_bSetToEndpoint: usize = 0x3A8; // bool
    pub const m_bTraceToClosestSurface: usize = 0x3A9; // bool
    pub const m_bIncludeWater: usize = 0x3AA; // bool
}

pub mod C_OP_SetControlPointToPlayer { // CParticleFunctionPreEmission
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_vecCP1Pos: usize = 0x1B8; // Vector
    pub const m_bOrientToEyes: usize = 0x1C4; // bool
}

pub mod C_OP_SetControlPointToVectorExpression { // CParticleFunctionPreEmission
    pub const m_nExpression: usize = 0x1B4; // VectorExpressionType_t
    pub const m_nOutputCP: usize = 0x1B8; // int32_t
    pub const m_vInput1: usize = 0x1C0; // CParticleCollectionVecInput
    pub const m_vInput2: usize = 0x7F0; // CParticleCollectionVecInput
    pub const m_bNormalizedOutput: usize = 0xE20; // bool
}

pub mod C_OP_SetControlPointToWaterSurface { // CParticleFunctionPreEmission
    pub const m_nSourceCP: usize = 0x1B4; // int32_t
    pub const m_nDestCP: usize = 0x1B8; // int32_t
    pub const m_nFlowCP: usize = 0x1BC; // int32_t
    pub const m_nActiveCP: usize = 0x1C0; // int32_t
    pub const m_nActiveCPField: usize = 0x1C4; // int32_t
    pub const m_flRetestRate: usize = 0x1C8; // CParticleCollectionFloatInput
    pub const m_bAdaptiveThreshold: usize = 0x318; // bool
}

pub mod C_OP_SetControlPointsToModelParticles { // CParticleFunctionOperator
    pub const m_HitboxSetName: usize = 0x1B0; // char[128]
    pub const m_AttachmentName: usize = 0x230; // char[128]
    pub const m_nFirstControlPoint: usize = 0x2B0; // int32_t
    pub const m_nNumControlPoints: usize = 0x2B4; // int32_t
    pub const m_nFirstSourcePoint: usize = 0x2B8; // int32_t
    pub const m_bSkin: usize = 0x2BC; // bool
    pub const m_bAttachment: usize = 0x2BD; // bool
}

pub mod C_OP_SetControlPointsToParticle { // CParticleFunctionOperator
    pub const m_nChildGroupID: usize = 0x1B0; // int32_t
    pub const m_nFirstControlPoint: usize = 0x1B4; // int32_t
    pub const m_nNumControlPoints: usize = 0x1B8; // int32_t
    pub const m_nFirstSourcePoint: usize = 0x1BC; // int32_t
    pub const m_bSetOrientation: usize = 0x1C0; // bool
    pub const m_nOrientationMode: usize = 0x1C4; // ParticleOrientationSetMode_t
    pub const m_nSetParent: usize = 0x1C8; // ParticleParentSetMode_t
}

pub mod C_OP_SetFloat { // CParticleFunctionOperator
    pub const m_InputValue: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_nOutputField: usize = 0x300; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x304; // ParticleSetMethod_t
    pub const m_Lerp: usize = 0x308; // CPerParticleFloatInput
    pub const m_bUseNewCode: usize = 0x458; // bool
}

pub mod C_OP_SetFloatAttributeToVectorExpression { // CParticleFunctionOperator
    pub const m_nExpression: usize = 0x1B0; // VectorFloatExpressionType_t
    pub const m_vInput1: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vInput2: usize = 0x7E8; // CPerParticleVecInput
    pub const m_flOutputRemap: usize = 0xE18; // CParticleRemapFloatInput
    pub const m_nOutputField: usize = 0xF68; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0xF6C; // ParticleSetMethod_t
}

pub mod C_OP_SetFloatCollection { // CParticleFunctionOperator
    pub const m_InputValue: usize = 0x1B0; // CParticleCollectionFloatInput
    pub const m_nOutputField: usize = 0x300; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x304; // ParticleSetMethod_t
    pub const m_Lerp: usize = 0x308; // CParticleCollectionFloatInput
}

pub mod C_OP_SetFromCPSnapshot { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nAttributeToRead: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nAttributeToWrite: usize = 0x1B8; // ParticleAttributeIndex_t
    pub const m_nLocalSpaceCP: usize = 0x1BC; // int32_t
    pub const m_bRandom: usize = 0x1C0; // bool
    pub const m_bReverse: usize = 0x1C1; // bool
    pub const m_nRandomSeed: usize = 0x1C4; // int32_t
    pub const m_nSnapShotStartPoint: usize = 0x1C8; // CParticleCollectionFloatInput
    pub const m_nSnapShotIncrement: usize = 0x318; // CParticleCollectionFloatInput
    pub const m_flInterpolation: usize = 0x468; // CPerParticleFloatInput
    pub const m_bSubSample: usize = 0x5B8; // bool
    pub const m_bPrev: usize = 0x5B9; // bool
}

pub mod C_OP_SetGravityToCP { // CParticleFunctionPreEmission
    pub const m_nCPInput: usize = 0x1B4; // int32_t
    pub const m_nCPOutput: usize = 0x1B8; // int32_t
    pub const m_flScale: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_bSetOrientation: usize = 0x310; // bool
    pub const m_bSetZDown: usize = 0x311; // bool
}

pub mod C_OP_SetParentControlPointsToChildCP { // CParticleFunctionPreEmission
    pub const m_nChildGroupID: usize = 0x1B4; // int32_t
    pub const m_nChildControlPoint: usize = 0x1B8; // int32_t
    pub const m_nNumControlPoints: usize = 0x1BC; // int32_t
    pub const m_nFirstSourcePoint: usize = 0x1C0; // int32_t
    pub const m_bSetOrientation: usize = 0x1C4; // bool
}

pub mod C_OP_SetPerChildControlPoint { // CParticleFunctionOperator
    pub const m_nChildGroupID: usize = 0x1B0; // int32_t
    pub const m_nFirstControlPoint: usize = 0x1B4; // int32_t
    pub const m_nNumControlPoints: usize = 0x1B8; // int32_t
    pub const m_nParticleIncrement: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_nFirstSourcePoint: usize = 0x310; // CParticleCollectionFloatInput
    pub const m_bSetOrientation: usize = 0x460; // bool
    pub const m_nOrientationField: usize = 0x464; // ParticleAttributeIndex_t
    pub const m_bNumBasedOnParticleCount: usize = 0x468; // bool
}

pub mod C_OP_SetPerChildControlPointFromAttribute { // CParticleFunctionOperator
    pub const m_nChildGroupID: usize = 0x1B0; // int32_t
    pub const m_nFirstControlPoint: usize = 0x1B4; // int32_t
    pub const m_nNumControlPoints: usize = 0x1B8; // int32_t
    pub const m_nParticleIncrement: usize = 0x1BC; // int32_t
    pub const m_nFirstSourcePoint: usize = 0x1C0; // int32_t
    pub const m_bNumBasedOnParticleCount: usize = 0x1C4; // bool
    pub const m_nAttributeToRead: usize = 0x1C8; // ParticleAttributeIndex_t
    pub const m_nCPField: usize = 0x1CC; // int32_t
}

pub mod C_OP_SetRandomControlPointPosition { // CParticleFunctionPreEmission
    pub const m_bUseWorldLocation: usize = 0x1B1; // bool
    pub const m_bOrient: usize = 0x1B2; // bool
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_nHeadLocation: usize = 0x1B8; // int32_t
    pub const m_flReRandomRate: usize = 0x1C0; // CParticleCollectionFloatInput
    pub const m_vecCPMinPos: usize = 0x310; // Vector
    pub const m_vecCPMaxPos: usize = 0x31C; // Vector
    pub const m_flInterpolation: usize = 0x328; // CParticleCollectionFloatInput
}

pub mod C_OP_SetSimulationRate { // CParticleFunctionPreEmission
    pub const m_flSimulationScale: usize = 0x1B8; // CParticleCollectionFloatInput
}

pub mod C_OP_SetSingleControlPointPosition { // CParticleFunctionPreEmission
    pub const m_bSetOnce: usize = 0x1B1; // bool
    pub const m_nCP1: usize = 0x1B4; // int32_t
    pub const m_vecCP1Pos: usize = 0x1B8; // CParticleCollectionVecInput
    pub const m_transformInput: usize = 0x7E8; // CParticleTransformInput
}

pub mod C_OP_SetToCP { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_vecOffset: usize = 0x1B4; // Vector
    pub const m_bOffsetLocal: usize = 0x1C0; // bool
}

pub mod C_OP_SetVariable { // CParticleFunctionPreEmission
    pub const m_variableReference: usize = 0x1B8; // CParticleVariableRef
    pub const m_transformInput: usize = 0x1F8; // CParticleTransformInput
    pub const m_positionOffset: usize = 0x258; // Vector
    pub const m_rotationOffset: usize = 0x264; // QAngle
    pub const m_vecInput: usize = 0x270; // CParticleCollectionVecInput
    pub const m_floatInput: usize = 0x8A0; // CParticleCollectionFloatInput
}

pub mod C_OP_SetVec { // CParticleFunctionOperator
    pub const m_InputValue: usize = 0x1B0; // CPerParticleVecInput
    pub const m_nOutputField: usize = 0x7E0; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0x7E4; // ParticleSetMethod_t
    pub const m_Lerp: usize = 0x7E8; // CPerParticleFloatInput
    pub const m_bNormalizedOutput: usize = 0x938; // bool
}

pub mod C_OP_SetVectorAttributeToVectorExpression { // CParticleFunctionOperator
    pub const m_nExpression: usize = 0x1B0; // VectorExpressionType_t
    pub const m_vInput1: usize = 0x1B8; // CPerParticleVecInput
    pub const m_vInput2: usize = 0x7E8; // CPerParticleVecInput
    pub const m_nOutputField: usize = 0xE18; // ParticleAttributeIndex_t
    pub const m_nSetMethod: usize = 0xE1C; // ParticleSetMethod_t
    pub const m_bNormalizedOutput: usize = 0xE20; // bool
}

pub mod C_OP_ShapeMatchingConstraint { // CParticleFunctionConstraint
    pub const m_flShapeRestorationTime: usize = 0x1B0; // float
}

pub mod C_OP_SnapshotRigidSkinToBones { // CParticleFunctionOperator
    pub const m_bTransformNormals: usize = 0x1B0; // bool
    pub const m_bTransformRadii: usize = 0x1B1; // bool
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
}

pub mod C_OP_SnapshotSkinToBones { // CParticleFunctionOperator
    pub const m_bTransformNormals: usize = 0x1B0; // bool
    pub const m_bTransformRadii: usize = 0x1B1; // bool
    pub const m_nControlPointNumber: usize = 0x1B4; // int32_t
    pub const m_flLifeTimeFadeStart: usize = 0x1B8; // float
    pub const m_flLifeTimeFadeEnd: usize = 0x1BC; // float
    pub const m_flJumpThreshold: usize = 0x1C0; // float
    pub const m_flPrevPosScale: usize = 0x1C4; // float
}

pub mod C_OP_Spin { // CGeneralSpin
}

pub mod C_OP_SpinUpdate { // CSpinUpdateBase
}

pub mod C_OP_SpinYaw { // CGeneralSpin
}

pub mod C_OP_SpringToVectorConstraint { // CParticleFunctionConstraint
    pub const m_flRestLength: usize = 0x1B0; // CPerParticleFloatInput
    pub const m_flMinDistance: usize = 0x300; // CPerParticleFloatInput
    pub const m_flMaxDistance: usize = 0x450; // CPerParticleFloatInput
    pub const m_flRestingLength: usize = 0x5A0; // CPerParticleFloatInput
    pub const m_vecAnchorVector: usize = 0x6F0; // CPerParticleVecInput
}

pub mod C_OP_StopAfterCPDuration { // CParticleFunctionPreEmission
    pub const m_flDuration: usize = 0x1B8; // CParticleCollectionFloatInput
    pub const m_bDestroyImmediately: usize = 0x308; // bool
    pub const m_bPlayEndCap: usize = 0x309; // bool
}

pub mod C_OP_TeleportBeam { // CParticleFunctionOperator
    pub const m_nCPPosition: usize = 0x1B0; // int32_t
    pub const m_nCPVelocity: usize = 0x1B4; // int32_t
    pub const m_nCPMisc: usize = 0x1B8; // int32_t
    pub const m_nCPColor: usize = 0x1BC; // int32_t
    pub const m_nCPInvalidColor: usize = 0x1C0; // int32_t
    pub const m_nCPExtraArcData: usize = 0x1C4; // int32_t
    pub const m_vGravity: usize = 0x1C8; // Vector
    pub const m_flArcMaxDuration: usize = 0x1D4; // float
    pub const m_flSegmentBreak: usize = 0x1D8; // float
    pub const m_flArcSpeed: usize = 0x1DC; // float
    pub const m_flAlpha: usize = 0x1E0; // float
}

pub mod C_OP_TimeVaryingForce { // CParticleFunctionForce
    pub const m_flStartLerpTime: usize = 0x1BC; // float
    pub const m_StartingForce: usize = 0x1C0; // Vector
    pub const m_flEndLerpTime: usize = 0x1CC; // float
    pub const m_EndingForce: usize = 0x1D0; // Vector
}

pub mod C_OP_TurbulenceForce { // CParticleFunctionForce
    pub const m_flNoiseCoordScale0: usize = 0x1BC; // float
    pub const m_flNoiseCoordScale1: usize = 0x1C0; // float
    pub const m_flNoiseCoordScale2: usize = 0x1C4; // float
    pub const m_flNoiseCoordScale3: usize = 0x1C8; // float
    pub const m_vecNoiseAmount0: usize = 0x1CC; // Vector
    pub const m_vecNoiseAmount1: usize = 0x1D8; // Vector
    pub const m_vecNoiseAmount2: usize = 0x1E4; // Vector
    pub const m_vecNoiseAmount3: usize = 0x1F0; // Vector
}

pub mod C_OP_TwistAroundAxis { // CParticleFunctionForce
    pub const m_fForceAmount: usize = 0x1BC; // float
    pub const m_TwistAxis: usize = 0x1C0; // Vector
    pub const m_bLocalSpace: usize = 0x1CC; // bool
    pub const m_nControlPointNumber: usize = 0x1D0; // int32_t
}

pub mod C_OP_UpdateLightSource { // CParticleFunctionOperator
    pub const m_vColorTint: usize = 0x1B0; // Color
    pub const m_flBrightnessScale: usize = 0x1B4; // float
    pub const m_flRadiusScale: usize = 0x1B8; // float
    pub const m_flMinimumLightingRadius: usize = 0x1BC; // float
    pub const m_flMaximumLightingRadius: usize = 0x1C0; // float
    pub const m_flPositionDampingConstant: usize = 0x1C4; // float
}

pub mod C_OP_VectorFieldSnapshot { // CParticleFunctionOperator
    pub const m_nControlPointNumber: usize = 0x1B0; // int32_t
    pub const m_nAttributeToWrite: usize = 0x1B4; // ParticleAttributeIndex_t
    pub const m_nLocalSpaceCP: usize = 0x1B8; // int32_t
    pub const m_flInterpolation: usize = 0x1C0; // CPerParticleFloatInput
    pub const m_vecScale: usize = 0x310; // CPerParticleVecInput
    pub const m_flBoundaryDampening: usize = 0x940; // float
    pub const m_bSetVelocity: usize = 0x944; // bool
    pub const m_bLockToSurface: usize = 0x945; // bool
    pub const m_flGridSpacing: usize = 0x948; // float
}

pub mod C_OP_VectorNoise { // CParticleFunctionOperator
    pub const m_nFieldOutput: usize = 0x1B0; // ParticleAttributeIndex_t
    pub const m_vecOutputMin: usize = 0x1B4; // Vector
    pub const m_vecOutputMax: usize = 0x1C0; // Vector
    pub const m_fl4NoiseScale: usize = 0x1CC; // float
    pub const m_bAdditive: usize = 0x1D0; // bool
    pub const m_bOffset: usize = 0x1D1; // bool
    pub const m_flNoiseAnimationTimeScale: usize = 0x1D4; // float
}

pub mod C_OP_VelocityDecay { // CParticleFunctionOperator
    pub const m_flMinVelocity: usize = 0x1B0; // float
}

pub mod C_OP_VelocityMatchingForce { // CParticleFunctionOperator
    pub const m_flDirScale: usize = 0x1B0; // float
    pub const m_flSpdScale: usize = 0x1B4; // float
    pub const m_nCPBroadcast: usize = 0x1B8; // int32_t
}

pub mod C_OP_WindForce { // CParticleFunctionForce
    pub const m_vForce: usize = 0x1BC; // Vector
}

pub mod C_OP_WorldCollideConstraint { // CParticleFunctionConstraint
}

pub mod C_OP_WorldTraceConstraint { // CParticleFunctionConstraint
    pub const m_nCP: usize = 0x1B0; // int32_t
    pub const m_vecCpOffset: usize = 0x1B4; // Vector
    pub const m_nCollisionMode: usize = 0x1C0; // ParticleCollisionMode_t
    pub const m_nCollisionModeMin: usize = 0x1C4; // ParticleCollisionMode_t
    pub const m_nTraceSet: usize = 0x1C8; // ParticleTraceSet_t
    pub const m_CollisionGroupName: usize = 0x1CC; // char[128]
    pub const m_bWorldOnly: usize = 0x24C; // bool
    pub const m_bBrushOnly: usize = 0x24D; // bool
    pub const m_bIncludeWater: usize = 0x24E; // bool
    pub const m_nIgnoreCP: usize = 0x250; // int32_t
    pub const m_flCpMovementTolerance: usize = 0x254; // float
    pub const m_flRetestRate: usize = 0x258; // float
    pub const m_flTraceTolerance: usize = 0x25C; // float
    pub const m_flCollisionConfirmationSpeed: usize = 0x260; // float
    pub const m_nMaxTracesPerFrame: usize = 0x264; // float
    pub const m_flRadiusScale: usize = 0x268; // CPerParticleFloatInput
    pub const m_flBounceAmount: usize = 0x3B8; // CPerParticleFloatInput
    pub const m_flSlideAmount: usize = 0x508; // CPerParticleFloatInput
    pub const m_flRandomDirScale: usize = 0x658; // CPerParticleFloatInput
    pub const m_bDecayBounce: usize = 0x7A8; // bool
    pub const m_bKillonContact: usize = 0x7A9; // bool
    pub const m_flMinSpeed: usize = 0x7AC; // float
    pub const m_bSetNormal: usize = 0x7B0; // bool
    pub const m_nStickOnCollisionField: usize = 0x7B4; // ParticleAttributeIndex_t
    pub const m_flStopSpeed: usize = 0x7B8; // CPerParticleFloatInput
    pub const m_nEntityStickDataField: usize = 0x908; // ParticleAttributeIndex_t
    pub const m_nEntityStickNormalField: usize = 0x90C; // ParticleAttributeIndex_t
}

pub mod CollisionGroupContext_t {
    pub const m_nCollisionGroupNumber: usize = 0x0; // int32_t
}

pub mod ControlPointReference_t {
    pub const m_controlPointNameString: usize = 0x0; // int32_t
    pub const m_vOffsetFromControlPoint: usize = 0x4; // Vector
    pub const m_bOffsetInLocalSpace: usize = 0x10; // bool
}

pub mod FloatInputMaterialVariable_t {
    pub const m_strVariable: usize = 0x0; // CUtlString
    pub const m_flInput: usize = 0x8; // CParticleCollectionFloatInput
}

pub mod IControlPointEditorData {
}

pub mod IParticleCollection {
}

pub mod IParticleEffect {
}

pub mod IParticleSystemDefinition {
}

pub mod MaterialVariable_t {
    pub const m_strVariable: usize = 0x0; // CUtlString
    pub const m_nVariableField: usize = 0x8; // ParticleAttributeIndex_t
    pub const m_flScale: usize = 0xC; // float
}

pub mod ModelReference_t {
    pub const m_model: usize = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_flRelativeProbabilityOfSpawn: usize = 0x8; // float
}

pub mod PARTICLE_EHANDLE__ {
    pub const unused: usize = 0x0; // int32_t
}

pub mod PARTICLE_WORLD_HANDLE__ {
    pub const unused: usize = 0x0; // int32_t
}

pub mod ParticleAttributeIndex_t {
    pub const m_Value: usize = 0x0; // int32_t
}

pub mod ParticleChildrenInfo_t {
    pub const m_ChildRef: usize = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_flDelay: usize = 0x8; // float
    pub const m_bEndCap: usize = 0xC; // bool
    pub const m_bDisableChild: usize = 0xD; // bool
    pub const m_nDetailLevel: usize = 0x10; // ParticleDetailLevel_t
}

pub mod ParticleControlPointConfiguration_t {
    pub const m_name: usize = 0x0; // CUtlString
    pub const m_drivers: usize = 0x8; // CUtlVector<ParticleControlPointDriver_t>
    pub const m_previewState: usize = 0x20; // ParticlePreviewState_t
}

pub mod ParticleControlPointDriver_t {
    pub const m_iControlPoint: usize = 0x0; // int32_t
    pub const m_iAttachType: usize = 0x4; // ParticleAttachment_t
    pub const m_attachmentName: usize = 0x8; // CUtlString
    pub const m_vecOffset: usize = 0x10; // Vector
    pub const m_angOffset: usize = 0x1C; // QAngle
    pub const m_entityName: usize = 0x28; // CUtlString
}

pub mod ParticleNamedValueConfiguration_t {
    pub const m_ConfigName: usize = 0x0; // CUtlString
    pub const m_ConfigValue: usize = 0x8; // KeyValues3
    pub const m_iAttachType: usize = 0x18; // ParticleAttachment_t
    pub const m_BoundEntityPath: usize = 0x20; // CUtlString
    pub const m_strEntityScope: usize = 0x28; // CUtlString
    pub const m_strAttachmentName: usize = 0x30; // CUtlString
}

pub mod ParticleNamedValueSource_t {
    pub const m_Name: usize = 0x0; // CUtlString
    pub const m_IsPublic: usize = 0x8; // bool
    pub const m_ValueType: usize = 0xC; // PulseValueType_t
    pub const m_DefaultConfig: usize = 0x10; // ParticleNamedValueConfiguration_t
    pub const m_NamedConfigs: usize = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
}

pub mod ParticlePreviewBodyGroup_t {
    pub const m_bodyGroupName: usize = 0x0; // CUtlString
    pub const m_nValue: usize = 0x8; // int32_t
}

pub mod ParticlePreviewState_t {
    pub const m_previewModel: usize = 0x0; // CUtlString
    pub const m_nModSpecificData: usize = 0x8; // uint32_t
    pub const m_groundType: usize = 0xC; // PetGroundType_t
    pub const m_sequenceName: usize = 0x10; // CUtlString
    pub const m_nFireParticleOnSequenceFrame: usize = 0x18; // int32_t
    pub const m_hitboxSetName: usize = 0x20; // CUtlString
    pub const m_materialGroupName: usize = 0x28; // CUtlString
    pub const m_vecBodyGroups: usize = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
    pub const m_flPlaybackSpeed: usize = 0x48; // float
    pub const m_flParticleSimulationRate: usize = 0x4C; // float
    pub const m_bShouldDrawHitboxes: usize = 0x50; // bool
    pub const m_bShouldDrawAttachments: usize = 0x51; // bool
    pub const m_bShouldDrawAttachmentNames: usize = 0x52; // bool
    pub const m_bShouldDrawControlPointAxes: usize = 0x53; // bool
    pub const m_bAnimationNonLooping: usize = 0x54; // bool
    pub const m_vecPreviewGravity: usize = 0x58; // Vector
}

pub mod PointDefinitionWithTimeValues_t { // PointDefinition_t
    pub const m_flTimeDuration: usize = 0x14; // float
}

pub mod PointDefinition_t {
    pub const m_nControlPoint: usize = 0x0; // int32_t
    pub const m_bLocalCoords: usize = 0x4; // bool
    pub const m_vOffset: usize = 0x8; // Vector
}

pub mod RenderProjectedMaterial_t {
    pub const m_hMaterial: usize = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

pub mod SequenceWeightedList_t {
    pub const m_nSequence: usize = 0x0; // int32_t
    pub const m_flRelativeWeight: usize = 0x4; // float
}

pub mod TextureControls_t {
    pub const m_flFinalTextureScaleU: usize = 0x0; // CParticleCollectionRendererFloatInput
    pub const m_flFinalTextureScaleV: usize = 0x150; // CParticleCollectionRendererFloatInput
    pub const m_flFinalTextureOffsetU: usize = 0x2A0; // CParticleCollectionRendererFloatInput
    pub const m_flFinalTextureOffsetV: usize = 0x3F0; // CParticleCollectionRendererFloatInput
    pub const m_flFinalTextureUVRotation: usize = 0x540; // CParticleCollectionRendererFloatInput
    pub const m_flZoomScale: usize = 0x690; // CParticleCollectionRendererFloatInput
    pub const m_flDistortion: usize = 0x7E0; // CParticleCollectionRendererFloatInput
    pub const m_bRandomizeOffsets: usize = 0x930; // bool
    pub const m_bClampUVs: usize = 0x931; // bool
    pub const m_nPerParticleBlend: usize = 0x934; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleScale: usize = 0x938; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleOffsetU: usize = 0x93C; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleOffsetV: usize = 0x940; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleRotation: usize = 0x944; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleZoom: usize = 0x948; // SpriteCardPerParticleScale_t
    pub const m_nPerParticleDistortion: usize = 0x94C; // SpriteCardPerParticleScale_t
}

pub mod TextureGroup_t {
    pub const m_bEnabled: usize = 0x0; // bool
    pub const m_bReplaceTextureWithGradient: usize = 0x1; // bool
    pub const m_hTexture: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_Gradient: usize = 0x10; // CColorGradient
    pub const m_nTextureType: usize = 0x28; // SpriteCardTextureType_t
    pub const m_nTextureChannels: usize = 0x2C; // SpriteCardTextureChannel_t
    pub const m_nTextureBlendMode: usize = 0x30; // ParticleTextureLayerBlendType_t
    pub const m_flTextureBlend: usize = 0x38; // CParticleCollectionRendererFloatInput
    pub const m_TextureControls: usize = 0x188; // TextureControls_t
}

pub mod VecInputMaterialVariable_t {
    pub const m_strVariable: usize = 0x0; // CUtlString
    pub const m_vecInput: usize = 0x8; // CParticleCollectionVecInput
}