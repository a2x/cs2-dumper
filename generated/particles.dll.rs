#![allow(non_snake_case, non_upper_case_globals)]

pub mod CBaseRendererSource2 {
    pub const m_flRadiusScale: usize = 0x200;
    pub const m_flAlphaScale: usize = 0x358;
    pub const m_flRollScale: usize = 0x4b0;
    pub const m_nAlpha2Field: usize = 0x608;
    pub const m_vecColorScale: usize = 0x610;
    pub const m_nColorBlendType: usize = 0xc68;
    pub const m_nShaderType: usize = 0xc6c;
    pub const m_strShaderOverride: usize = 0xc70;
    pub const m_flCenterXOffset: usize = 0xc78;
    pub const m_flCenterYOffset: usize = 0xdd0;
    pub const m_flBumpStrength: usize = 0xf28;
    pub const m_nCropTextureOverride: usize = 0xf2c;
    pub const m_vecTexturesInput: usize = 0xf30;
    pub const m_flAnimationRate: usize = 0xf48;
    pub const m_nAnimationType: usize = 0xf4c;
    pub const m_bAnimateInFPS: usize = 0xf50;
    pub const m_flSelfIllumAmount: usize = 0xf58;
    pub const m_flDiffuseAmount: usize = 0x10b0;
    pub const m_nLightingControlPoint: usize = 0x1208;
    pub const m_nSelfIllumPerParticle: usize = 0x120c;
    pub const m_nOutputBlendMode: usize = 0x1210;
    pub const m_bGammaCorrectVertexColors: usize = 0x1214;
    pub const m_bSaturateColorPreAlphaBlend: usize = 0x1215;
    pub const m_flAddSelfAmount: usize = 0x1218;
    pub const m_flDesaturation: usize = 0x1370;
    pub const m_flOverbrightFactor: usize = 0x14c8;
    pub const m_nHSVShiftControlPoint: usize = 0x1620;
    pub const m_nFogType: usize = 0x1624;
    pub const m_flFogAmount: usize = 0x1628;
    pub const m_bTintByFOW: usize = 0x1780;
    pub const m_bTintByGlobalLight: usize = 0x1781;
    pub const m_nPerParticleAlphaReference: usize = 0x1784;
    pub const m_nPerParticleAlphaRefWindow: usize = 0x1788;
    pub const m_nAlphaReferenceType: usize = 0x178c;
    pub const m_flAlphaReferenceSoftness: usize = 0x1790;
    pub const m_flSourceAlphaValueToMapToZero: usize = 0x18e8;
    pub const m_flSourceAlphaValueToMapToOne: usize = 0x1a40;
    pub const m_bRefract: usize = 0x1b98;
    pub const m_bRefractSolid: usize = 0x1b99;
    pub const m_flRefractAmount: usize = 0x1ba0;
    pub const m_nRefractBlurRadius: usize = 0x1cf8;
    pub const m_nRefractBlurType: usize = 0x1cfc;
    pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x1d00;
    pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x1d01;
    pub const m_bUseMixedResolutionRendering: usize = 0x1d02;
    pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x1d03;
    pub const m_stencilTestID: usize = 0x1d04;
    pub const m_bStencilTestExclude: usize = 0x1d84;
    pub const m_stencilWriteID: usize = 0x1d85;
    pub const m_bWriteStencilOnDepthPass: usize = 0x1e05;
    pub const m_bWriteStencilOnDepthFail: usize = 0x1e06;
    pub const m_bReverseZBuffering: usize = 0x1e07;
    pub const m_bDisableZBuffering: usize = 0x1e08;
    pub const m_nFeatheringMode: usize = 0x1e0c;
    pub const m_flFeatheringMinDist: usize = 0x1e10;
    pub const m_flFeatheringMaxDist: usize = 0x1f68;
    pub const m_flFeatheringFilter: usize = 0x20c0;
    pub const m_flDepthBias: usize = 0x2218;
    pub const m_nSortMethod: usize = 0x221c;
    pub const m_bBlendFramesSeq0: usize = 0x2220;
    pub const m_bMaxLuminanceBlendingSequence0: usize = 0x2221;
}

pub mod CBaseTrailRenderer {
    pub const m_nOrientationType: usize = 0x2470;
    pub const m_nOrientationControlPoint: usize = 0x2474;
    pub const m_flMinSize: usize = 0x2478;
    pub const m_flMaxSize: usize = 0x247c;
    pub const m_flStartFadeSize: usize = 0x2480;
    pub const m_flEndFadeSize: usize = 0x25d8;
    pub const m_bClampV: usize = 0x2730;
}

pub mod CGeneralRandomRotation {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flDegrees: usize = 0x1c4;
    pub const m_flDegreesMin: usize = 0x1c8;
    pub const m_flDegreesMax: usize = 0x1cc;
    pub const m_flRotationRandExponent: usize = 0x1d0;
    pub const m_bRandomlyFlipDirection: usize = 0x1d4;
}

pub mod CGeneralSpin {
    pub const m_nSpinRateDegrees: usize = 0x1c0;
    pub const m_nSpinRateMinDegrees: usize = 0x1c4;
    pub const m_fSpinRateStopTime: usize = 0x1cc;
}

pub mod CNewParticleEffect {
    pub const m_pNext: usize = 0x10;
    pub const m_pPrev: usize = 0x18;
    pub const m_pParticles: usize = 0x20;
    pub const m_pDebugName: usize = 0x28;
    pub const m_bDontRemove: usize = 0x0;
    pub const m_bRemove: usize = 0x0;
    pub const m_bNeedsBBoxUpdate: usize = 0x0;
    pub const m_bIsFirstFrame: usize = 0x0;
    pub const m_bAutoUpdateBBox: usize = 0x0;
    pub const m_bAllocated: usize = 0x0;
    pub const m_bSimulate: usize = 0x0;
    pub const m_bShouldPerformCullCheck: usize = 0x0;
    pub const m_bForceNoDraw: usize = 0x0;
    pub const m_bShouldSave: usize = 0x0;
    pub const m_bDisableAggregation: usize = 0x0;
    pub const m_bShouldSimulateDuringGamePaused: usize = 0x0;
    pub const m_bShouldCheckFoW: usize = 0x0;
    pub const m_vSortOrigin: usize = 0x40;
    pub const m_flScale: usize = 0x4c;
    pub const m_hOwner: usize = 0x50;
    pub const m_pOwningParticleProperty: usize = 0x58;
    pub const m_flFreezeTransitionStart: usize = 0x70;
    pub const m_flFreezeTransitionDuration: usize = 0x74;
    pub const m_flFreezeTransitionOverride: usize = 0x78;
    pub const m_bFreezeTransitionActive: usize = 0x7c;
    pub const m_bFreezeTargetState: usize = 0x7d;
    pub const m_bCanFreeze: usize = 0x7e;
    pub const m_LastMin: usize = 0x80;
    pub const m_LastMax: usize = 0x8c;
    pub const m_nSplitScreenUser: usize = 0x98;
    pub const m_vecAggregationCenter: usize = 0x9c;
    pub const m_RefCount: usize = 0xc0;
}

pub mod CParticleFloatInput {
    pub const m_nType: usize = 0x10;
    pub const m_nMapType: usize = 0x14;
    pub const m_flLiteralValue: usize = 0x18;
    pub const m_NamedValue: usize = 0x20;
    pub const m_nControlPoint: usize = 0x60;
    pub const m_nScalarAttribute: usize = 0x64;
    pub const m_nVectorAttribute: usize = 0x68;
    pub const m_nVectorComponent: usize = 0x6c;
    pub const m_flRandomMin: usize = 0x70;
    pub const m_flRandomMax: usize = 0x74;
    pub const m_bHasRandomSignFlip: usize = 0x78;
    pub const m_nRandomMode: usize = 0x7c;
    pub const m_flLOD0: usize = 0x84;
    pub const m_flLOD1: usize = 0x88;
    pub const m_flLOD2: usize = 0x8c;
    pub const m_flLOD3: usize = 0x90;
    pub const m_nNoiseInputVectorAttribute: usize = 0x94;
    pub const m_flNoiseOutputMin: usize = 0x98;
    pub const m_flNoiseOutputMax: usize = 0x9c;
    pub const m_flNoiseScale: usize = 0xa0;
    pub const m_vecNoiseOffsetRate: usize = 0xa4;
    pub const m_flNoiseOffset: usize = 0xb0;
    pub const m_nNoiseOctaves: usize = 0xb4;
    pub const m_nNoiseTurbulence: usize = 0xb8;
    pub const m_nNoiseType: usize = 0xbc;
    pub const m_nNoiseModifier: usize = 0xc0;
    pub const m_flNoiseTurbulenceScale: usize = 0xc4;
    pub const m_flNoiseTurbulenceMix: usize = 0xc8;
    pub const m_flNoiseImgPreviewScale: usize = 0xcc;
    pub const m_bNoiseImgPreviewLive: usize = 0xd0;
    pub const m_flNoCameraFallback: usize = 0xdc;
    pub const m_bUseBoundsCenter: usize = 0xe0;
    pub const m_nInputMode: usize = 0xe4;
    pub const m_flMultFactor: usize = 0xe8;
    pub const m_flInput0: usize = 0xec;
    pub const m_flInput1: usize = 0xf0;
    pub const m_flOutput0: usize = 0xf4;
    pub const m_flOutput1: usize = 0xf8;
    pub const m_flNotchedRangeMin: usize = 0xfc;
    pub const m_flNotchedRangeMax: usize = 0x100;
    pub const m_flNotchedOutputOutside: usize = 0x104;
    pub const m_flNotchedOutputInside: usize = 0x108;
    pub const m_nBiasType: usize = 0x10c;
    pub const m_flBiasParameter: usize = 0x110;
    pub const m_Curve: usize = 0x118;
}

pub mod CParticleFunction {
    pub const m_flOpStrength: usize = 0x8;
    pub const m_nOpEndCapState: usize = 0x160;
    pub const m_flOpStartFadeInTime: usize = 0x164;
    pub const m_flOpEndFadeInTime: usize = 0x168;
    pub const m_flOpStartFadeOutTime: usize = 0x16c;
    pub const m_flOpEndFadeOutTime: usize = 0x170;
    pub const m_flOpFadeOscillatePeriod: usize = 0x174;
    pub const m_bNormalizeToStopTime: usize = 0x178;
    pub const m_flOpTimeOffsetMin: usize = 0x17c;
    pub const m_flOpTimeOffsetMax: usize = 0x180;
    pub const m_nOpTimeOffsetSeed: usize = 0x184;
    pub const m_nOpTimeScaleSeed: usize = 0x188;
    pub const m_flOpTimeScaleMin: usize = 0x18c;
    pub const m_flOpTimeScaleMax: usize = 0x190;
    pub const m_bDisableOperator: usize = 0x196;
    pub const m_Notes: usize = 0x198;
}

pub mod CParticleFunctionEmitter {
    pub const m_nEmitterIndex: usize = 0x1b8;
}

pub mod CParticleFunctionInitializer {
    pub const m_nAssociatedEmitterIndex: usize = 0x1b8;
}

pub mod CParticleFunctionPreEmission {
    pub const m_bRunOnce: usize = 0x1c0;
}

pub mod CParticleFunctionRenderer {
    pub const VisibilityInputs: usize = 0x1b8;
    pub const m_bCannotBeRefracted: usize = 0x1fc;
    pub const m_bSkipRenderingOnMobile: usize = 0x1fd;
}

pub mod CParticleModelInput {
    pub const m_nType: usize = 0x10;
    pub const m_NamedValue: usize = 0x18;
    pub const m_nControlPoint: usize = 0x58;
}

pub mod CParticleSystemDefinition {
    pub const m_nBehaviorVersion: usize = 0x8;
    pub const m_PreEmissionOperators: usize = 0x10;
    pub const m_Emitters: usize = 0x28;
    pub const m_Initializers: usize = 0x40;
    pub const m_Operators: usize = 0x58;
    pub const m_ForceGenerators: usize = 0x70;
    pub const m_Constraints: usize = 0x88;
    pub const m_Renderers: usize = 0xa0;
    pub const m_Children: usize = 0xb8;
    pub const m_nFirstMultipleOverride_BackwardCompat: usize = 0x178;
    pub const m_nInitialParticles: usize = 0x210;
    pub const m_nMaxParticles: usize = 0x214;
    pub const m_nGroupID: usize = 0x218;
    pub const m_BoundingBoxMin: usize = 0x21c;
    pub const m_BoundingBoxMax: usize = 0x228;
    pub const m_flDepthSortBias: usize = 0x234;
    pub const m_nSortOverridePositionCP: usize = 0x238;
    pub const m_bInfiniteBounds: usize = 0x23c;
    pub const m_bEnableNamedValues: usize = 0x23d;
    pub const m_NamedValueDomain: usize = 0x240;
    pub const m_NamedValueLocals: usize = 0x248;
    pub const m_ConstantColor: usize = 0x260;
    pub const m_ConstantNormal: usize = 0x264;
    pub const m_flConstantRadius: usize = 0x270;
    pub const m_flConstantRotation: usize = 0x274;
    pub const m_flConstantRotationSpeed: usize = 0x278;
    pub const m_flConstantLifespan: usize = 0x27c;
    pub const m_nConstantSequenceNumber: usize = 0x280;
    pub const m_nConstantSequenceNumber1: usize = 0x284;
    pub const m_nSnapshotControlPoint: usize = 0x288;
    pub const m_hSnapshot: usize = 0x290;
    pub const m_pszCullReplacementName: usize = 0x298;
    pub const m_flCullRadius: usize = 0x2a0;
    pub const m_flCullFillCost: usize = 0x2a4;
    pub const m_nCullControlPoint: usize = 0x2a8;
    pub const m_hFallback: usize = 0x2b0;
    pub const m_nFallbackMaxCount: usize = 0x2b8;
    pub const m_hLowViolenceDef: usize = 0x2c0;
    pub const m_hReferenceReplacement: usize = 0x2c8;
    pub const m_flPreSimulationTime: usize = 0x2d0;
    pub const m_flStopSimulationAfterTime: usize = 0x2d4;
    pub const m_flMaximumTimeStep: usize = 0x2d8;
    pub const m_flMaximumSimTime: usize = 0x2dc;
    pub const m_flMinimumSimTime: usize = 0x2e0;
    pub const m_flMinimumTimeStep: usize = 0x2e4;
    pub const m_nMinimumFrames: usize = 0x2e8;
    pub const m_nMinCPULevel: usize = 0x2ec;
    pub const m_nMinGPULevel: usize = 0x2f0;
    pub const m_flNoDrawTimeToGoToSleep: usize = 0x2f4;
    pub const m_flMaxDrawDistance: usize = 0x2f8;
    pub const m_flStartFadeDistance: usize = 0x2fc;
    pub const m_flMaxCreationDistance: usize = 0x300;
    pub const m_nAggregationMinAvailableParticles: usize = 0x304;
    pub const m_flAggregateRadius: usize = 0x308;
    pub const m_bShouldBatch: usize = 0x30c;
    pub const m_bShouldHitboxesFallbackToRenderBounds: usize = 0x30d;
    pub const m_bShouldHitboxesFallbackToSnapshot: usize = 0x30e;
    pub const m_nViewModelEffect: usize = 0x310;
    pub const m_bScreenSpaceEffect: usize = 0x314;
    pub const m_pszTargetLayerID: usize = 0x318;
    pub const m_nSkipRenderControlPoint: usize = 0x320;
    pub const m_nAllowRenderControlPoint: usize = 0x324;
    pub const m_bShouldSort: usize = 0x328;
    pub const m_controlPointConfigurations: usize = 0x370;
}

pub mod CParticleTransformInput {
    pub const m_nType: usize = 0x10;
    pub const m_NamedValue: usize = 0x18;
    pub const m_bFollowNamedValue: usize = 0x58;
    pub const m_bSupportsDisabled: usize = 0x59;
    pub const m_bUseOrientation: usize = 0x5a;
    pub const m_nControlPoint: usize = 0x5c;
    pub const m_nControlPointRangeMax: usize = 0x60;
    pub const m_flEndCPGrowthTime: usize = 0x64;
}

pub mod CParticleVariableRef {
    pub const m_variableName: usize = 0x0;
    pub const m_variableType: usize = 0x38;
}

pub mod CParticleVecInput {
    pub const m_nType: usize = 0x10;
    pub const m_vLiteralValue: usize = 0x14;
    pub const m_LiteralColor: usize = 0x20;
    pub const m_NamedValue: usize = 0x28;
    pub const m_bFollowNamedValue: usize = 0x68;
    pub const m_nVectorAttribute: usize = 0x6c;
    pub const m_vVectorAttributeScale: usize = 0x70;
    pub const m_nControlPoint: usize = 0x7c;
    pub const m_nDeltaControlPoint: usize = 0x80;
    pub const m_vCPValueScale: usize = 0x84;
    pub const m_vCPRelativePosition: usize = 0x90;
    pub const m_vCPRelativeDir: usize = 0x9c;
    pub const m_FloatComponentX: usize = 0xa8;
    pub const m_FloatComponentY: usize = 0x200;
    pub const m_FloatComponentZ: usize = 0x358;
    pub const m_FloatInterp: usize = 0x4b0;
    pub const m_flInterpInput0: usize = 0x608;
    pub const m_flInterpInput1: usize = 0x60c;
    pub const m_vInterpOutput0: usize = 0x610;
    pub const m_vInterpOutput1: usize = 0x61c;
    pub const m_Gradient: usize = 0x628;
    pub const m_vRandomMin: usize = 0x640;
    pub const m_vRandomMax: usize = 0x64c;
}

pub mod CParticleVisibilityInputs {
    pub const m_flCameraBias: usize = 0x0;
    pub const m_nCPin: usize = 0x4;
    pub const m_flProxyRadius: usize = 0x8;
    pub const m_flInputMin: usize = 0xc;
    pub const m_flInputMax: usize = 0x10;
    pub const m_flNoPixelVisibilityFallback: usize = 0x14;
    pub const m_flDistanceInputMin: usize = 0x18;
    pub const m_flDistanceInputMax: usize = 0x1c;
    pub const m_flDotInputMin: usize = 0x20;
    pub const m_flDotInputMax: usize = 0x24;
    pub const m_bDotCPAngles: usize = 0x28;
    pub const m_bDotCameraAngles: usize = 0x29;
    pub const m_flAlphaScaleMin: usize = 0x2c;
    pub const m_flAlphaScaleMax: usize = 0x30;
    pub const m_flRadiusScaleMin: usize = 0x34;
    pub const m_flRadiusScaleMax: usize = 0x38;
    pub const m_flRadiusScaleFOVBase: usize = 0x3c;
    pub const m_bRightEye: usize = 0x40;
}

pub mod CPathParameters {
    pub const m_nStartControlPointNumber: usize = 0x0;
    pub const m_nEndControlPointNumber: usize = 0x4;
    pub const m_nBulgeControl: usize = 0x8;
    pub const m_flBulge: usize = 0xc;
    pub const m_flMidPoint: usize = 0x10;
    pub const m_vStartPointOffset: usize = 0x14;
    pub const m_vMidPointOffset: usize = 0x20;
    pub const m_vEndOffset: usize = 0x2c;
}

pub mod CRandomNumberGeneratorParameters {
    pub const m_bDistributeEvenly: usize = 0x0;
    pub const m_nSeed: usize = 0x4;
}

pub mod C_INIT_AddVectorToVector {
    pub const m_vecScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1cc;
    pub const m_nFieldInput: usize = 0x1d0;
    pub const m_vOffsetMin: usize = 0x1d4;
    pub const m_vOffsetMax: usize = 0x1e0;
    pub const m_randomnessParameters: usize = 0x1ec;
}

pub mod C_INIT_AgeNoise {
    pub const m_bAbsVal: usize = 0x1c0;
    pub const m_bAbsValInv: usize = 0x1c1;
    pub const m_flOffset: usize = 0x1c4;
    pub const m_flAgeMin: usize = 0x1c8;
    pub const m_flAgeMax: usize = 0x1cc;
    pub const m_flNoiseScale: usize = 0x1d0;
    pub const m_flNoiseScaleLoc: usize = 0x1d4;
    pub const m_vecOffsetLoc: usize = 0x1d8;
}

pub mod C_INIT_ChaoticAttractor {
    pub const m_flAParm: usize = 0x1c0;
    pub const m_flBParm: usize = 0x1c4;
    pub const m_flCParm: usize = 0x1c8;
    pub const m_flDParm: usize = 0x1cc;
    pub const m_flScale: usize = 0x1d0;
    pub const m_flSpeedMin: usize = 0x1d4;
    pub const m_flSpeedMax: usize = 0x1d8;
    pub const m_nBaseCP: usize = 0x1dc;
    pub const m_bUniformSpeed: usize = 0x1e0;
}

pub mod C_INIT_ColorLitPerParticle {
    pub const m_ColorMin: usize = 0x1d8;
    pub const m_ColorMax: usize = 0x1dc;
    pub const m_TintMin: usize = 0x1e0;
    pub const m_TintMax: usize = 0x1e4;
    pub const m_flTintPerc: usize = 0x1e8;
    pub const m_nTintBlendMode: usize = 0x1ec;
    pub const m_flLightAmplification: usize = 0x1f0;
}

pub mod C_INIT_CreateAlongPath {
    pub const m_fMaxDistance: usize = 0x1c0;
    pub const m_PathParams: usize = 0x1d0;
    pub const m_bUseRandomCPs: usize = 0x210;
    pub const m_vEndOffset: usize = 0x214;
    pub const m_bSaveOffset: usize = 0x220;
}

pub mod C_INIT_CreateFromCPs {
    pub const m_nIncrement: usize = 0x1c0;
    pub const m_nMinCP: usize = 0x1c4;
    pub const m_nMaxCP: usize = 0x1c8;
    pub const m_nDynamicCPCount: usize = 0x1d0;
}

pub mod C_INIT_CreateFromParentParticles {
    pub const m_flVelocityScale: usize = 0x1c0;
    pub const m_flIncrement: usize = 0x1c4;
    pub const m_bRandomDistribution: usize = 0x1c8;
    pub const m_nRandomSeed: usize = 0x1cc;
    pub const m_bSubFrame: usize = 0x1d0;
}

pub mod C_INIT_CreateFromPlaneCache {
    pub const m_vecOffsetMin: usize = 0x1c0;
    pub const m_vecOffsetMax: usize = 0x1cc;
    pub const m_bUseNormal: usize = 0x1d9;
}

pub mod C_INIT_CreateInEpitrochoid {
    pub const m_nComponent1: usize = 0x1c0;
    pub const m_nComponent2: usize = 0x1c4;
    pub const m_TransformInput: usize = 0x1c8;
    pub const m_flParticleDensity: usize = 0x230;
    pub const m_flOffset: usize = 0x388;
    pub const m_flRadius1: usize = 0x4e0;
    pub const m_flRadius2: usize = 0x638;
    pub const m_bUseCount: usize = 0x790;
    pub const m_bUseLocalCoords: usize = 0x791;
    pub const m_bOffsetExistingPos: usize = 0x792;
}

pub mod C_INIT_CreateOnGrid {
    pub const m_nXCount: usize = 0x1c0;
    pub const m_nYCount: usize = 0x318;
    pub const m_nZCount: usize = 0x470;
    pub const m_nXSpacing: usize = 0x5c8;
    pub const m_nYSpacing: usize = 0x720;
    pub const m_nZSpacing: usize = 0x878;
    pub const m_nControlPointNumber: usize = 0x9d0;
    pub const m_bLocalSpace: usize = 0x9d4;
    pub const m_bCenter: usize = 0x9d5;
    pub const m_bHollow: usize = 0x9d6;
}

pub mod C_INIT_CreateOnModel {
    pub const m_modelInput: usize = 0x1c0;
    pub const m_transformInput: usize = 0x220;
    pub const m_nForceInModel: usize = 0x288;
    pub const m_nDesiredHitbox: usize = 0x28c;
    pub const m_nHitboxValueFromControlPointIndex: usize = 0x290;
    pub const m_vecHitBoxScale: usize = 0x298;
    pub const m_flBoneVelocity: usize = 0x8f0;
    pub const m_flMaxBoneVelocity: usize = 0x8f4;
    pub const m_vecDirectionBias: usize = 0x8f8;
    pub const m_HitboxSetName: usize = 0xf50;
    pub const m_bLocalCoords: usize = 0xfd0;
    pub const m_bUseBones: usize = 0xfd1;
    pub const m_flShellSize: usize = 0xfd8;
}

pub mod C_INIT_CreateOnModelAtHeight {
    pub const m_bUseBones: usize = 0x1c0;
    pub const m_bForceZ: usize = 0x1c1;
    pub const m_nControlPointNumber: usize = 0x1c4;
    pub const m_nHeightCP: usize = 0x1c8;
    pub const m_bUseWaterHeight: usize = 0x1cc;
    pub const m_flDesiredHeight: usize = 0x1d0;
    pub const m_vecHitBoxScale: usize = 0x328;
    pub const m_vecDirectionBias: usize = 0x980;
    pub const m_nBiasType: usize = 0xfd8;
    pub const m_bLocalCoords: usize = 0xfdc;
    pub const m_bPreferMovingBoxes: usize = 0xfdd;
    pub const m_HitboxSetName: usize = 0xfde;
    pub const m_flHitboxVelocityScale: usize = 0x1060;
    pub const m_flMaxBoneVelocity: usize = 0x11b8;
}

pub mod C_INIT_CreateParticleImpulse {
    pub const m_InputRadius: usize = 0x1c0;
    pub const m_InputMagnitude: usize = 0x318;
    pub const m_nFalloffFunction: usize = 0x470;
    pub const m_InputFalloffExp: usize = 0x478;
    pub const m_nImpulseType: usize = 0x5d0;
}

pub mod C_INIT_CreatePhyllotaxis {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nScaleCP: usize = 0x1c4;
    pub const m_nComponent: usize = 0x1c8;
    pub const m_fRadCentCore: usize = 0x1cc;
    pub const m_fRadPerPoint: usize = 0x1d0;
    pub const m_fRadPerPointTo: usize = 0x1d4;
    pub const m_fpointAngle: usize = 0x1d8;
    pub const m_fsizeOverall: usize = 0x1dc;
    pub const m_fRadBias: usize = 0x1e0;
    pub const m_fMinRad: usize = 0x1e4;
    pub const m_fDistBias: usize = 0x1e8;
    pub const m_bUseLocalCoords: usize = 0x1ec;
    pub const m_bUseWithContEmit: usize = 0x1ed;
    pub const m_bUseOrigRadius: usize = 0x1ee;
}

pub mod C_INIT_CreateSequentialPath {
    pub const m_fMaxDistance: usize = 0x1c0;
    pub const m_flNumToAssign: usize = 0x1c4;
    pub const m_bLoop: usize = 0x1c8;
    pub const m_bCPPairs: usize = 0x1c9;
    pub const m_bSaveOffset: usize = 0x1ca;
    pub const m_PathParams: usize = 0x1d0;
}

pub mod C_INIT_CreateSequentialPathV2 {
    pub const m_fMaxDistance: usize = 0x1c0;
    pub const m_flNumToAssign: usize = 0x318;
    pub const m_bLoop: usize = 0x470;
    pub const m_bCPPairs: usize = 0x471;
    pub const m_bSaveOffset: usize = 0x472;
    pub const m_PathParams: usize = 0x480;
}

pub mod C_INIT_CreateSpiralSphere {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nOverrideCP: usize = 0x1c4;
    pub const m_nDensity: usize = 0x1c8;
    pub const m_flInitialRadius: usize = 0x1cc;
    pub const m_flInitialSpeedMin: usize = 0x1d0;
    pub const m_flInitialSpeedMax: usize = 0x1d4;
    pub const m_bUseParticleCount: usize = 0x1d8;
}

pub mod C_INIT_CreateWithinBox {
    pub const m_vecMin: usize = 0x1c0;
    pub const m_vecMax: usize = 0x818;
    pub const m_nControlPointNumber: usize = 0xe70;
    pub const m_bLocalSpace: usize = 0xe74;
    pub const m_randomnessParameters: usize = 0xe78;
}

pub mod C_INIT_CreateWithinSphereTransform {
    pub const m_fRadiusMin: usize = 0x1c0;
    pub const m_fRadiusMax: usize = 0x318;
    pub const m_vecDistanceBias: usize = 0x470;
    pub const m_vecDistanceBiasAbs: usize = 0xac8;
    pub const m_TransformInput: usize = 0xad8;
    pub const m_fSpeedMin: usize = 0xb40;
    pub const m_fSpeedMax: usize = 0xc98;
    pub const m_fSpeedRandExp: usize = 0xdf0;
    pub const m_bLocalCoords: usize = 0xdf4;
    pub const m_flEndCPGrowthTime: usize = 0xdf8;
    pub const m_LocalCoordinateSystemSpeedMin: usize = 0xe00;
    pub const m_LocalCoordinateSystemSpeedMax: usize = 0x1458;
    pub const m_nFieldOutput: usize = 0x1ab0;
    pub const m_nFieldVelocity: usize = 0x1ab4;
}

pub mod C_INIT_CreationNoise {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_bAbsVal: usize = 0x1c4;
    pub const m_bAbsValInv: usize = 0x1c5;
    pub const m_flOffset: usize = 0x1c8;
    pub const m_flOutputMin: usize = 0x1cc;
    pub const m_flOutputMax: usize = 0x1d0;
    pub const m_flNoiseScale: usize = 0x1d4;
    pub const m_flNoiseScaleLoc: usize = 0x1d8;
    pub const m_vecOffsetLoc: usize = 0x1dc;
    pub const m_flWorldTimeScale: usize = 0x1e8;
}

pub mod C_INIT_DistanceCull {
    pub const m_nControlPoint: usize = 0x1c0;
    pub const m_flDistance: usize = 0x1c8;
    pub const m_bCullInside: usize = 0x320;
}

pub mod C_INIT_DistanceToCPInit {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x320;
    pub const m_flOutputMin: usize = 0x478;
    pub const m_flOutputMax: usize = 0x5d0;
    pub const m_nStartCP: usize = 0x728;
    pub const m_bLOS: usize = 0x72c;
    pub const m_CollisionGroupName: usize = 0x72d;
    pub const m_nTraceSet: usize = 0x7b0;
    pub const m_flMaxTraceLength: usize = 0x7b8;
    pub const m_flLOSScale: usize = 0x910;
    pub const m_nSetMethod: usize = 0x914;
    pub const m_bActiveRange: usize = 0x918;
    pub const m_vecDistanceScale: usize = 0x91c;
    pub const m_flRemapBias: usize = 0x928;
}

pub mod C_INIT_DistanceToNeighborCull {
    pub const m_flDistance: usize = 0x1c0;
}

pub mod C_INIT_GlobalScale {
    pub const m_flScale: usize = 0x1c0;
    pub const m_nScaleControlPointNumber: usize = 0x1c4;
    pub const m_nControlPointNumber: usize = 0x1c8;
    pub const m_bScaleRadius: usize = 0x1cc;
    pub const m_bScalePosition: usize = 0x1cd;
    pub const m_bScaleVelocity: usize = 0x1ce;
}

pub mod C_INIT_InheritFromParentParticles {
    pub const m_flScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nIncrement: usize = 0x1c8;
    pub const m_bRandomDistribution: usize = 0x1cc;
    pub const m_nRandomSeed: usize = 0x1d0;
}

pub mod C_INIT_InheritVelocity {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_flVelocityScale: usize = 0x1c4;
}

pub mod C_INIT_InitFloat {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x318;
    pub const m_nSetMethod: usize = 0x31c;
    pub const m_InputStrength: usize = 0x320;
}

pub mod C_INIT_InitFloatCollection {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x318;
}

pub mod C_INIT_InitFromCPSnapshot {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nAttributeToRead: usize = 0x1c4;
    pub const m_nAttributeToWrite: usize = 0x1c8;
    pub const m_nLocalSpaceCP: usize = 0x1cc;
    pub const m_bRandom: usize = 0x1d0;
    pub const m_bReverse: usize = 0x1d1;
    pub const m_nSnapShotIncrement: usize = 0x1d8;
    pub const m_nManualSnapshotIndex: usize = 0x330;
    pub const m_nRandomSeed: usize = 0x488;
    pub const m_bLocalSpaceAngles: usize = 0x48c;
}

pub mod C_INIT_InitFromParentKilled {
    pub const m_nAttributeToCopy: usize = 0x1c0;
}

pub mod C_INIT_InitFromVectorFieldSnapshot {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nLocalSpaceCP: usize = 0x1c4;
    pub const m_nWeightUpdateCP: usize = 0x1c8;
    pub const m_bUseVerticalVelocity: usize = 0x1cc;
    pub const m_vecScale: usize = 0x1d0;
}

pub mod C_INIT_InitSkinnedPositionFromCPSnapshot {
    pub const m_nSnapshotControlPointNumber: usize = 0x1c0;
    pub const m_nControlPointNumber: usize = 0x1c4;
    pub const m_bRandom: usize = 0x1c8;
    pub const m_nRandomSeed: usize = 0x1cc;
    pub const m_bRigid: usize = 0x1d0;
    pub const m_bSetNormal: usize = 0x1d1;
    pub const m_bIgnoreDt: usize = 0x1d2;
    pub const m_flMinNormalVelocity: usize = 0x1d4;
    pub const m_flMaxNormalVelocity: usize = 0x1d8;
    pub const m_flIncrement: usize = 0x1dc;
    pub const m_nFullLoopIncrement: usize = 0x1e0;
    pub const m_nSnapShotStartPoint: usize = 0x1e4;
    pub const m_flBoneVelocity: usize = 0x1e8;
    pub const m_flBoneVelocityMax: usize = 0x1ec;
    pub const m_bCopyColor: usize = 0x1f0;
    pub const m_bCopyAlpha: usize = 0x1f1;
    pub const m_bSetRadius: usize = 0x1f2;
}

pub mod C_INIT_InitVec {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x818;
    pub const m_nSetMethod: usize = 0x81c;
    pub const m_bNormalizedOutput: usize = 0x820;
    pub const m_bWritePreviousPosition: usize = 0x821;
}

pub mod C_INIT_InitVecCollection {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x818;
}

pub mod C_INIT_InitialRepulsionVelocity {
    pub const m_CollisionGroupName: usize = 0x1c0;
    pub const m_nTraceSet: usize = 0x240;
    pub const m_vecOutputMin: usize = 0x244;
    pub const m_vecOutputMax: usize = 0x250;
    pub const m_nControlPointNumber: usize = 0x25c;
    pub const m_bPerParticle: usize = 0x260;
    pub const m_bTranslate: usize = 0x261;
    pub const m_bProportional: usize = 0x262;
    pub const m_flTraceLength: usize = 0x264;
    pub const m_bPerParticleTR: usize = 0x268;
    pub const m_bInherit: usize = 0x269;
    pub const m_nChildCP: usize = 0x26c;
    pub const m_nChildGroupID: usize = 0x270;
}

pub mod C_INIT_InitialSequenceFromModel {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nFieldOutputAnim: usize = 0x1c8;
    pub const m_flInputMin: usize = 0x1cc;
    pub const m_flInputMax: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_nSetMethod: usize = 0x1dc;
}

pub mod C_INIT_InitialVelocityFromHitbox {
    pub const m_flVelocityMin: usize = 0x1c0;
    pub const m_flVelocityMax: usize = 0x1c4;
    pub const m_nControlPointNumber: usize = 0x1c8;
    pub const m_HitboxSetName: usize = 0x1cc;
    pub const m_bUseBones: usize = 0x24c;
}

pub mod C_INIT_InitialVelocityNoise {
    pub const m_vecAbsVal: usize = 0x1c0;
    pub const m_vecAbsValInv: usize = 0x1cc;
    pub const m_vecOffsetLoc: usize = 0x1d8;
    pub const m_flOffset: usize = 0x830;
    pub const m_vecOutputMin: usize = 0x988;
    pub const m_vecOutputMax: usize = 0xfe0;
    pub const m_flNoiseScale: usize = 0x1638;
    pub const m_flNoiseScaleLoc: usize = 0x1790;
    pub const m_TransformInput: usize = 0x18e8;
    pub const m_bIgnoreDt: usize = 0x1950;
}

pub mod C_INIT_LifespanFromVelocity {
    pub const m_vecComponentScale: usize = 0x1c0;
    pub const m_flTraceOffset: usize = 0x1cc;
    pub const m_flMaxTraceLength: usize = 0x1d0;
    pub const m_flTraceTolerance: usize = 0x1d4;
    pub const m_nMaxPlanes: usize = 0x1d8;
    pub const m_CollisionGroupName: usize = 0x1e0;
    pub const m_nTraceSet: usize = 0x260;
    pub const m_bIncludeWater: usize = 0x270;
}

pub mod C_INIT_ModelCull {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_bBoundBox: usize = 0x1c4;
    pub const m_bCullOutside: usize = 0x1c5;
    pub const m_bUseBones: usize = 0x1c6;
    pub const m_HitboxSetName: usize = 0x1c7;
}

pub mod C_INIT_MoveBetweenPoints {
    pub const m_flSpeedMin: usize = 0x1c0;
    pub const m_flSpeedMax: usize = 0x318;
    pub const m_flEndSpread: usize = 0x470;
    pub const m_flStartOffset: usize = 0x5c8;
    pub const m_flEndOffset: usize = 0x720;
    pub const m_nEndControlPointNumber: usize = 0x878;
    pub const m_bTrailBias: usize = 0x87c;
}

pub mod C_INIT_NormalAlignToCP {
    pub const m_transformInput: usize = 0x1c0;
    pub const m_nControlPointAxis: usize = 0x228;
}

pub mod C_INIT_NormalOffset {
    pub const m_OffsetMin: usize = 0x1c0;
    pub const m_OffsetMax: usize = 0x1cc;
    pub const m_nControlPointNumber: usize = 0x1d8;
    pub const m_bLocalCoords: usize = 0x1dc;
    pub const m_bNormalize: usize = 0x1dd;
}

pub mod C_INIT_OffsetVectorToVector {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_vecOutputMin: usize = 0x1c8;
    pub const m_vecOutputMax: usize = 0x1d4;
    pub const m_randomnessParameters: usize = 0x1e0;
}

pub mod C_INIT_Orient2DRelToCP {
    pub const m_nCP: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flRotOffset: usize = 0x1c8;
}

pub mod C_INIT_PlaneCull {
    pub const m_nControlPoint: usize = 0x1c0;
    pub const m_flDistance: usize = 0x1c8;
    pub const m_bCullInside: usize = 0x320;
}

pub mod C_INIT_PointList {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_pointList: usize = 0x1c8;
    pub const m_bPlaceAlongPath: usize = 0x1e0;
    pub const m_bClosedLoop: usize = 0x1e1;
    pub const m_nNumPointsAlongPath: usize = 0x1e4;
}

pub mod C_INIT_PositionOffset {
    pub const m_OffsetMin: usize = 0x1c0;
    pub const m_OffsetMax: usize = 0x818;
    pub const m_TransformInput: usize = 0xe70;
    pub const m_bLocalCoords: usize = 0xed8;
    pub const m_bProportional: usize = 0xed9;
    pub const m_randomnessParameters: usize = 0xedc;
}

pub mod C_INIT_PositionOffsetToCP {
    pub const m_nControlPointNumberStart: usize = 0x1c0;
    pub const m_nControlPointNumberEnd: usize = 0x1c4;
    pub const m_bLocalCoords: usize = 0x1c8;
}

pub mod C_INIT_PositionPlaceOnGround {
    pub const m_flOffset: usize = 0x1c0;
    pub const m_flMaxTraceLength: usize = 0x318;
    pub const m_CollisionGroupName: usize = 0x470;
    pub const m_nTraceSet: usize = 0x4f0;
    pub const m_nTraceMissBehavior: usize = 0x500;
    pub const m_bIncludeWater: usize = 0x504;
    pub const m_bSetNormal: usize = 0x505;
    pub const m_bSetPXYZOnly: usize = 0x506;
    pub const m_bTraceAlongNormal: usize = 0x507;
    pub const m_bOffsetonColOnly: usize = 0x508;
    pub const m_flOffsetByRadiusFactor: usize = 0x50c;
    pub const m_nPreserveOffsetCP: usize = 0x510;
    pub const m_nIgnoreCP: usize = 0x514;
}

pub mod C_INIT_PositionWarp {
    pub const m_vecWarpMin: usize = 0x1c0;
    pub const m_vecWarpMax: usize = 0x818;
    pub const m_nScaleControlPointNumber: usize = 0xe70;
    pub const m_nControlPointNumber: usize = 0xe74;
    pub const m_nRadiusComponent: usize = 0xe78;
    pub const m_flWarpTime: usize = 0xe7c;
    pub const m_flWarpStartTime: usize = 0xe80;
    pub const m_flPrevPosScale: usize = 0xe84;
    pub const m_bInvertWarp: usize = 0xe88;
    pub const m_bUseCount: usize = 0xe89;
}

pub mod C_INIT_PositionWarpScalar {
    pub const m_vecWarpMin: usize = 0x1c0;
    pub const m_vecWarpMax: usize = 0x1cc;
    pub const m_InputValue: usize = 0x1d8;
    pub const m_flPrevPosScale: usize = 0x330;
    pub const m_nScaleControlPointNumber: usize = 0x334;
    pub const m_nControlPointNumber: usize = 0x338;
}

pub mod C_INIT_QuantizeFloat {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x318;
}

pub mod C_INIT_RadiusFromCPObject {
    pub const m_nControlPoint: usize = 0x1c0;
}

pub mod C_INIT_RandomAlpha {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nAlphaMin: usize = 0x1c4;
    pub const m_nAlphaMax: usize = 0x1c8;
    pub const m_flAlphaRandExponent: usize = 0x1d4;
}

pub mod C_INIT_RandomAlphaWindowThreshold {
    pub const m_flMin: usize = 0x1c0;
    pub const m_flMax: usize = 0x1c4;
    pub const m_flExponent: usize = 0x1c8;
}

pub mod C_INIT_RandomColor {
    pub const m_ColorMin: usize = 0x1dc;
    pub const m_ColorMax: usize = 0x1e0;
    pub const m_TintMin: usize = 0x1e4;
    pub const m_TintMax: usize = 0x1e8;
    pub const m_flTintPerc: usize = 0x1ec;
    pub const m_flUpdateThreshold: usize = 0x1f0;
    pub const m_nTintCP: usize = 0x1f4;
    pub const m_nFieldOutput: usize = 0x1f8;
    pub const m_nTintBlendMode: usize = 0x1fc;
    pub const m_flLightAmplification: usize = 0x200;
}

pub mod C_INIT_RandomLifeTime {
    pub const m_fLifetimeMin: usize = 0x1c0;
    pub const m_fLifetimeMax: usize = 0x1c4;
    pub const m_fLifetimeRandExponent: usize = 0x1c8;
}

pub mod C_INIT_RandomModelSequence {
    pub const m_ActivityName: usize = 0x1c0;
    pub const m_SequenceName: usize = 0x2c0;
    pub const m_hModel: usize = 0x3c0;
}

pub mod C_INIT_RandomNamedModelElement {
    pub const m_hModel: usize = 0x1c0;
    pub const m_names: usize = 0x1c8;
    pub const m_bShuffle: usize = 0x1e0;
    pub const m_bLinear: usize = 0x1e1;
    pub const m_bModelFromRenderer: usize = 0x1e2;
    pub const m_nFieldOutput: usize = 0x1e4;
}

pub mod C_INIT_RandomRadius {
    pub const m_flRadiusMin: usize = 0x1c0;
    pub const m_flRadiusMax: usize = 0x1c4;
    pub const m_flRadiusRandExponent: usize = 0x1c8;
}

pub mod C_INIT_RandomScalar {
    pub const m_flMin: usize = 0x1c0;
    pub const m_flMax: usize = 0x1c4;
    pub const m_flExponent: usize = 0x1c8;
    pub const m_nFieldOutput: usize = 0x1cc;
}

pub mod C_INIT_RandomSecondSequence {
    pub const m_nSequenceMin: usize = 0x1c0;
    pub const m_nSequenceMax: usize = 0x1c4;
}

pub mod C_INIT_RandomSequence {
    pub const m_nSequenceMin: usize = 0x1c0;
    pub const m_nSequenceMax: usize = 0x1c4;
    pub const m_bShuffle: usize = 0x1c8;
    pub const m_bLinear: usize = 0x1c9;
    pub const m_WeightedList: usize = 0x1d0;
}

pub mod C_INIT_RandomTrailLength {
    pub const m_flMinLength: usize = 0x1c0;
    pub const m_flMaxLength: usize = 0x1c4;
    pub const m_flLengthRandExponent: usize = 0x1c8;
}

pub mod C_INIT_RandomVector {
    pub const m_vecMin: usize = 0x1c0;
    pub const m_vecMax: usize = 0x1cc;
    pub const m_nFieldOutput: usize = 0x1d8;
    pub const m_randomnessParameters: usize = 0x1dc;
}

pub mod C_INIT_RandomVectorComponent {
    pub const m_flMin: usize = 0x1c0;
    pub const m_flMax: usize = 0x1c4;
    pub const m_nFieldOutput: usize = 0x1c8;
    pub const m_nComponent: usize = 0x1cc;
}

pub mod C_INIT_RandomYawFlip {
    pub const m_flPercent: usize = 0x1c0;
}

pub mod C_INIT_RemapCPtoScalar {
    pub const m_nCPInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nField: usize = 0x1c8;
    pub const m_flInputMin: usize = 0x1cc;
    pub const m_flInputMax: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_flStartTime: usize = 0x1dc;
    pub const m_flEndTime: usize = 0x1e0;
    pub const m_nSetMethod: usize = 0x1e4;
    pub const m_flRemapBias: usize = 0x1e8;
}

pub mod C_INIT_RemapInitialDirectionToTransformToVector {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x228;
    pub const m_flScale: usize = 0x22c;
    pub const m_flOffsetRot: usize = 0x230;
    pub const m_vecOffsetAxis: usize = 0x234;
    pub const m_bNormalize: usize = 0x240;
}

pub mod C_INIT_RemapInitialTransformDirectionToRotation {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x228;
    pub const m_flOffsetRot: usize = 0x22c;
    pub const m_nComponent: usize = 0x230;
}

pub mod C_INIT_RemapInitialVisibilityScalar {
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_flOutputMin: usize = 0x1d0;
    pub const m_flOutputMax: usize = 0x1d4;
}

pub mod C_INIT_RemapNamedModelElementToScalar {
    pub const m_hModel: usize = 0x1c0;
    pub const m_names: usize = 0x1c8;
    pub const m_values: usize = 0x1e0;
    pub const m_nFieldInput: usize = 0x1f8;
    pub const m_nFieldOutput: usize = 0x1fc;
    pub const m_nSetMethod: usize = 0x200;
    pub const m_bModelFromRenderer: usize = 0x204;
}

pub mod C_INIT_RemapParticleCountToNamedModelElementScalar {
    pub const m_hModel: usize = 0x1f0;
    pub const m_outputMinName: usize = 0x1f8;
    pub const m_outputMaxName: usize = 0x200;
    pub const m_bModelFromRenderer: usize = 0x208;
}

pub mod C_INIT_RemapParticleCountToScalar {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nInputMin: usize = 0x1c4;
    pub const m_nInputMax: usize = 0x1c8;
    pub const m_nScaleControlPoint: usize = 0x1cc;
    pub const m_nScaleControlPointField: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_nSetMethod: usize = 0x1dc;
    pub const m_bActiveRange: usize = 0x1e0;
    pub const m_bInvert: usize = 0x1e1;
    pub const m_bWrap: usize = 0x1e2;
    pub const m_flRemapBias: usize = 0x1e4;
}

pub mod C_INIT_RemapQAnglesToRotation {
    pub const m_TransformInput: usize = 0x1c0;
}

pub mod C_INIT_RemapScalar {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_flOutputMin: usize = 0x1d0;
    pub const m_flOutputMax: usize = 0x1d4;
    pub const m_flStartTime: usize = 0x1d8;
    pub const m_flEndTime: usize = 0x1dc;
    pub const m_nSetMethod: usize = 0x1e0;
    pub const m_bActiveRange: usize = 0x1e4;
    pub const m_flRemapBias: usize = 0x1e8;
}

pub mod C_INIT_RemapScalarToVector {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_vecOutputMin: usize = 0x1d0;
    pub const m_vecOutputMax: usize = 0x1dc;
    pub const m_flStartTime: usize = 0x1e8;
    pub const m_flEndTime: usize = 0x1ec;
    pub const m_nSetMethod: usize = 0x1f0;
    pub const m_nControlPointNumber: usize = 0x1f4;
    pub const m_bLocalCoords: usize = 0x1f8;
    pub const m_flRemapBias: usize = 0x1fc;
}

pub mod C_INIT_RemapSpeedToScalar {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nControlPointNumber: usize = 0x1c4;
    pub const m_flStartTime: usize = 0x1c8;
    pub const m_flEndTime: usize = 0x1cc;
    pub const m_flInputMin: usize = 0x1d0;
    pub const m_flInputMax: usize = 0x1d4;
    pub const m_flOutputMin: usize = 0x1d8;
    pub const m_flOutputMax: usize = 0x1dc;
    pub const m_nSetMethod: usize = 0x1e0;
    pub const m_bPerParticle: usize = 0x1e4;
}

pub mod C_INIT_RemapTransformOrientationToRotations {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_vecRotation: usize = 0x228;
    pub const m_bUseQuat: usize = 0x234;
    pub const m_bWriteNormal: usize = 0x235;
}

pub mod C_INIT_RemapTransformToVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vInputMin: usize = 0x1c4;
    pub const m_vInputMax: usize = 0x1d0;
    pub const m_vOutputMin: usize = 0x1dc;
    pub const m_vOutputMax: usize = 0x1e8;
    pub const m_TransformInput: usize = 0x1f8;
    pub const m_LocalSpaceTransform: usize = 0x260;
    pub const m_flStartTime: usize = 0x2c8;
    pub const m_flEndTime: usize = 0x2cc;
    pub const m_nSetMethod: usize = 0x2d0;
    pub const m_bOffset: usize = 0x2d4;
    pub const m_bAccelerate: usize = 0x2d5;
    pub const m_flRemapBias: usize = 0x2d8;
}

pub mod C_INIT_RingWave {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_flParticlesPerOrbit: usize = 0x228;
    pub const m_flInitialRadius: usize = 0x380;
    pub const m_flThickness: usize = 0x4d8;
    pub const m_flInitialSpeedMin: usize = 0x630;
    pub const m_flInitialSpeedMax: usize = 0x788;
    pub const m_flRoll: usize = 0x8e0;
    pub const m_flPitch: usize = 0xa38;
    pub const m_flYaw: usize = 0xb90;
    pub const m_bEvenDistribution: usize = 0xce8;
    pub const m_bXYVelocityOnly: usize = 0xce9;
}

pub mod C_INIT_RtEnvCull {
    pub const m_vecTestDir: usize = 0x1c0;
    pub const m_vecTestNormal: usize = 0x1cc;
    pub const m_bUseVelocity: usize = 0x1d8;
    pub const m_bCullOnMiss: usize = 0x1d9;
    pub const m_bLifeAdjust: usize = 0x1da;
    pub const m_RtEnvName: usize = 0x1db;
    pub const m_nRTEnvCP: usize = 0x25c;
    pub const m_nComponent: usize = 0x260;
}

pub mod C_INIT_ScaleVelocity {
    pub const m_vecScale: usize = 0x1c0;
}

pub mod C_INIT_SequenceFromCP {
    pub const m_bKillUnused: usize = 0x1c0;
    pub const m_bRadiusScale: usize = 0x1c1;
    pub const m_nCP: usize = 0x1c4;
    pub const m_vecOffset: usize = 0x1c8;
}

pub mod C_INIT_SequenceLifeTime {
    pub const m_flFramerate: usize = 0x1c0;
}

pub mod C_INIT_SetHitboxToClosest {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nDesiredHitbox: usize = 0x1c4;
    pub const m_vecHitBoxScale: usize = 0x1c8;
    pub const m_HitboxSetName: usize = 0x820;
    pub const m_bUseBones: usize = 0x8a0;
    pub const m_bUseClosestPointOnHitbox: usize = 0x8a1;
    pub const m_nTestType: usize = 0x8a4;
    pub const m_flHybridRatio: usize = 0x8a8;
    pub const m_bUpdatePosition: usize = 0xa00;
}

pub mod C_INIT_SetHitboxToModel {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nForceInModel: usize = 0x1c4;
    pub const m_nDesiredHitbox: usize = 0x1c8;
    pub const m_vecHitBoxScale: usize = 0x1d0;
    pub const m_vecDirectionBias: usize = 0x828;
    pub const m_bMaintainHitbox: usize = 0x834;
    pub const m_bUseBones: usize = 0x835;
    pub const m_HitboxSetName: usize = 0x836;
    pub const m_flShellSize: usize = 0x8b8;
}

pub mod C_INIT_SetRigidAttachment {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nFieldInput: usize = 0x1c4;
    pub const m_nFieldOutput: usize = 0x1c8;
    pub const m_bLocalSpace: usize = 0x1cc;
}

pub mod C_INIT_SetVectorAttributeToVectorExpression {
    pub const m_nExpression: usize = 0x1c0;
    pub const m_vInput1: usize = 0x1c8;
    pub const m_vInput2: usize = 0x820;
    pub const m_nOutputField: usize = 0xe78;
    pub const m_nSetMethod: usize = 0xe7c;
    pub const m_bNormalizedOutput: usize = 0xe80;
}

pub mod C_INIT_StatusEffect {
    pub const m_nDetail2Combo: usize = 0x1c0;
    pub const m_flDetail2Rotation: usize = 0x1c4;
    pub const m_flDetail2Scale: usize = 0x1c8;
    pub const m_flDetail2BlendFactor: usize = 0x1cc;
    pub const m_flColorWarpIntensity: usize = 0x1d0;
    pub const m_flDiffuseWarpBlendToFull: usize = 0x1d4;
    pub const m_flEnvMapIntensity: usize = 0x1d8;
    pub const m_flAmbientScale: usize = 0x1dc;
    pub const m_specularColor: usize = 0x1e0;
    pub const m_flSpecularScale: usize = 0x1e4;
    pub const m_flSpecularExponent: usize = 0x1e8;
    pub const m_flSpecularExponentBlendToFull: usize = 0x1ec;
    pub const m_flSpecularBlendToFull: usize = 0x1f0;
    pub const m_rimLightColor: usize = 0x1f4;
    pub const m_flRimLightScale: usize = 0x1f8;
    pub const m_flReflectionsTintByBaseBlendToNone: usize = 0x1fc;
    pub const m_flMetalnessBlendToFull: usize = 0x200;
    pub const m_flSelfIllumBlendToFull: usize = 0x204;
}

pub mod C_INIT_StatusEffectCitadel {
    pub const m_flSFXColorWarpAmount: usize = 0x1c0;
    pub const m_flSFXNormalAmount: usize = 0x1c4;
    pub const m_flSFXMetalnessAmount: usize = 0x1c8;
    pub const m_flSFXRoughnessAmount: usize = 0x1cc;
    pub const m_flSFXSelfIllumAmount: usize = 0x1d0;
    pub const m_flSFXSScale: usize = 0x1d4;
    pub const m_flSFXSScrollX: usize = 0x1d8;
    pub const m_flSFXSScrollY: usize = 0x1dc;
    pub const m_flSFXSScrollZ: usize = 0x1e0;
    pub const m_flSFXSOffsetX: usize = 0x1e4;
    pub const m_flSFXSOffsetY: usize = 0x1e8;
    pub const m_flSFXSOffsetZ: usize = 0x1ec;
    pub const m_nDetailCombo: usize = 0x1f0;
    pub const m_flSFXSDetailAmount: usize = 0x1f4;
    pub const m_flSFXSDetailScale: usize = 0x1f8;
    pub const m_flSFXSDetailScrollX: usize = 0x1fc;
    pub const m_flSFXSDetailScrollY: usize = 0x200;
    pub const m_flSFXSDetailScrollZ: usize = 0x204;
    pub const m_flSFXSUseModelUVs: usize = 0x208;
}

pub mod C_INIT_VelocityFromCP {
    pub const m_velocityInput: usize = 0x1c0;
    pub const m_transformInput: usize = 0x818;
    pub const m_flVelocityScale: usize = 0x880;
    pub const m_bDirectionOnly: usize = 0x884;
}

pub mod C_INIT_VelocityFromNormal {
    pub const m_fSpeedMin: usize = 0x1c0;
    pub const m_fSpeedMax: usize = 0x1c4;
    pub const m_bIgnoreDt: usize = 0x1c8;
}

pub mod C_INIT_VelocityRadialRandom {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_fSpeedMin: usize = 0x1c4;
    pub const m_fSpeedMax: usize = 0x1c8;
    pub const m_vecLocalCoordinateSystemSpeedScale: usize = 0x1cc;
    pub const m_bIgnoreDelta: usize = 0x1d9;
}

pub mod C_INIT_VelocityRandom {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_fSpeedMin: usize = 0x1c8;
    pub const m_fSpeedMax: usize = 0x320;
    pub const m_LocalCoordinateSystemSpeedMin: usize = 0x478;
    pub const m_LocalCoordinateSystemSpeedMax: usize = 0xad0;
    pub const m_bIgnoreDT: usize = 0x1128;
    pub const m_randomnessParameters: usize = 0x112c;
}

pub mod C_OP_AlphaDecay {
    pub const m_flMinAlpha: usize = 0x1c0;
}

pub mod C_OP_AttractToControlPoint {
    pub const m_vecComponentScale: usize = 0x1d0;
    pub const m_fForceAmount: usize = 0x1e0;
    pub const m_fFalloffPower: usize = 0x338;
    pub const m_TransformInput: usize = 0x340;
    pub const m_fForceAmountMin: usize = 0x3a8;
    pub const m_bApplyMinForce: usize = 0x500;
}

pub mod C_OP_BasicMovement {
    pub const m_Gravity: usize = 0x1c0;
    pub const m_fDrag: usize = 0x818;
    pub const m_nMaxConstraintPasses: usize = 0x970;
}

pub mod C_OP_BoxConstraint {
    pub const m_vecMin: usize = 0x1c0;
    pub const m_vecMax: usize = 0x818;
    pub const m_nCP: usize = 0xe70;
    pub const m_bLocalSpace: usize = 0xe74;
    pub const m_bAccountForRadius: usize = 0xe75;
}

pub mod C_OP_CPOffsetToPercentageBetweenCPs {
    pub const m_flInputMin: usize = 0x1c0;
    pub const m_flInputMax: usize = 0x1c4;
    pub const m_flInputBias: usize = 0x1c8;
    pub const m_nStartCP: usize = 0x1cc;
    pub const m_nEndCP: usize = 0x1d0;
    pub const m_nOffsetCP: usize = 0x1d4;
    pub const m_nOuputCP: usize = 0x1d8;
    pub const m_nInputCP: usize = 0x1dc;
    pub const m_bRadialCheck: usize = 0x1e0;
    pub const m_bScaleOffset: usize = 0x1e1;
    pub const m_vecOffset: usize = 0x1e4;
}

pub mod C_OP_CPVelocityForce {
    pub const m_nControlPointNumber: usize = 0x1d0;
    pub const m_flScale: usize = 0x1d8;
}

pub mod C_OP_CalculateVectorAttribute {
    pub const m_vStartValue: usize = 0x1c0;
    pub const m_nFieldInput1: usize = 0x1cc;
    pub const m_flInputScale1: usize = 0x1d0;
    pub const m_nFieldInput2: usize = 0x1d4;
    pub const m_flInputScale2: usize = 0x1d8;
    pub const m_nControlPointInput1: usize = 0x1dc;
    pub const m_flControlPointScale1: usize = 0x1f0;
    pub const m_nControlPointInput2: usize = 0x1f4;
    pub const m_flControlPointScale2: usize = 0x208;
    pub const m_nFieldOutput: usize = 0x20c;
    pub const m_vFinalOutputScale: usize = 0x210;
}

pub mod C_OP_ChladniWave {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x320;
    pub const m_flOutputMin: usize = 0x478;
    pub const m_flOutputMax: usize = 0x5d0;
    pub const m_vecWaveLength: usize = 0x728;
    pub const m_vecHarmonics: usize = 0xd80;
    pub const m_nSetMethod: usize = 0x13d8;
    pub const m_nLocalSpaceControlPoint: usize = 0x13dc;
    pub const m_b3D: usize = 0x13e0;
}

pub mod C_OP_ChooseRandomChildrenInGroup {
    pub const m_nChildGroupID: usize = 0x1d0;
    pub const m_flNumberOfChildren: usize = 0x1d8;
}

pub mod C_OP_ClampScalar {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flOutputMin: usize = 0x1c8;
    pub const m_flOutputMax: usize = 0x320;
}

pub mod C_OP_ClampVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecOutputMin: usize = 0x1c8;
    pub const m_vecOutputMax: usize = 0x820;
}

pub mod C_OP_CollideWithParentParticles {
    pub const m_flParentRadiusScale: usize = 0x1c0;
    pub const m_flRadiusScale: usize = 0x318;
}

pub mod C_OP_CollideWithSelf {
    pub const m_flRadiusScale: usize = 0x1c0;
    pub const m_flMinimumSpeed: usize = 0x318;
}

pub mod C_OP_ColorAdjustHSL {
    pub const m_flHueAdjust: usize = 0x1c0;
    pub const m_flSaturationAdjust: usize = 0x318;
    pub const m_flLightnessAdjust: usize = 0x470;
}

pub mod C_OP_ColorInterpolate {
    pub const m_ColorFade: usize = 0x1c0;
    pub const m_flFadeStartTime: usize = 0x1d0;
    pub const m_flFadeEndTime: usize = 0x1d4;
    pub const m_nFieldOutput: usize = 0x1d8;
    pub const m_bEaseInOut: usize = 0x1dc;
}

pub mod C_OP_ColorInterpolateRandom {
    pub const m_ColorFadeMin: usize = 0x1c0;
    pub const m_ColorFadeMax: usize = 0x1dc;
    pub const m_flFadeStartTime: usize = 0x1ec;
    pub const m_flFadeEndTime: usize = 0x1f0;
    pub const m_nFieldOutput: usize = 0x1f4;
    pub const m_bEaseInOut: usize = 0x1f8;
}

pub mod C_OP_ConnectParentParticleToNearest {
    pub const m_nFirstControlPoint: usize = 0x1c0;
    pub const m_nSecondControlPoint: usize = 0x1c4;
}

pub mod C_OP_ConstrainDistance {
    pub const m_fMinDistance: usize = 0x1c0;
    pub const m_fMaxDistance: usize = 0x318;
    pub const m_nControlPointNumber: usize = 0x470;
    pub const m_CenterOffset: usize = 0x474;
    pub const m_bGlobalCenter: usize = 0x480;
}

pub mod C_OP_ConstrainDistanceToPath {
    pub const m_fMinDistance: usize = 0x1c0;
    pub const m_flMaxDistance0: usize = 0x1c4;
    pub const m_flMaxDistanceMid: usize = 0x1c8;
    pub const m_flMaxDistance1: usize = 0x1cc;
    pub const m_PathParameters: usize = 0x1d0;
    pub const m_flTravelTime: usize = 0x210;
    pub const m_nFieldScale: usize = 0x214;
    pub const m_nManualTField: usize = 0x218;
}

pub mod C_OP_ConstrainDistanceToUserSpecifiedPath {
    pub const m_fMinDistance: usize = 0x1c0;
    pub const m_flMaxDistance: usize = 0x1c4;
    pub const m_flTimeScale: usize = 0x1c8;
    pub const m_bLoopedPath: usize = 0x1cc;
    pub const m_pointList: usize = 0x1d0;
}

pub mod C_OP_ConstrainLineLength {
    pub const m_flMinDistance: usize = 0x1c0;
    pub const m_flMaxDistance: usize = 0x1c4;
}

pub mod C_OP_ContinuousEmitter {
    pub const m_flEmissionDuration: usize = 0x1c0;
    pub const m_flStartTime: usize = 0x318;
    pub const m_flEmitRate: usize = 0x470;
    pub const m_flEmissionScale: usize = 0x5c8;
    pub const m_flScalePerParentParticle: usize = 0x5cc;
    pub const m_bInitFromKilledParentParticles: usize = 0x5d0;
    pub const m_nSnapshotControlPoint: usize = 0x5d4;
    pub const m_nLimitPerUpdate: usize = 0x5d8;
    pub const m_bForceEmitOnFirstUpdate: usize = 0x5dc;
    pub const m_bForceEmitOnLastUpdate: usize = 0x5dd;
}

pub mod C_OP_ControlPointToRadialScreenSpace {
    pub const m_nCPIn: usize = 0x1d0;
    pub const m_vecCP1Pos: usize = 0x1d4;
    pub const m_nCPOut: usize = 0x1e0;
    pub const m_nCPOutField: usize = 0x1e4;
    pub const m_nCPSSPosOut: usize = 0x1e8;
}

pub mod C_OP_ControlpointLight {
    pub const m_flScale: usize = 0x1c0;
    pub const m_nControlPoint1: usize = 0x690;
    pub const m_nControlPoint2: usize = 0x694;
    pub const m_nControlPoint3: usize = 0x698;
    pub const m_nControlPoint4: usize = 0x69c;
    pub const m_vecCPOffset1: usize = 0x6a0;
    pub const m_vecCPOffset2: usize = 0x6ac;
    pub const m_vecCPOffset3: usize = 0x6b8;
    pub const m_vecCPOffset4: usize = 0x6c4;
    pub const m_LightFiftyDist1: usize = 0x6d0;
    pub const m_LightZeroDist1: usize = 0x6d4;
    pub const m_LightFiftyDist2: usize = 0x6d8;
    pub const m_LightZeroDist2: usize = 0x6dc;
    pub const m_LightFiftyDist3: usize = 0x6e0;
    pub const m_LightZeroDist3: usize = 0x6e4;
    pub const m_LightFiftyDist4: usize = 0x6e8;
    pub const m_LightZeroDist4: usize = 0x6ec;
    pub const m_LightColor1: usize = 0x6f0;
    pub const m_LightColor2: usize = 0x6f4;
    pub const m_LightColor3: usize = 0x6f8;
    pub const m_LightColor4: usize = 0x6fc;
    pub const m_bLightType1: usize = 0x700;
    pub const m_bLightType2: usize = 0x701;
    pub const m_bLightType3: usize = 0x702;
    pub const m_bLightType4: usize = 0x703;
    pub const m_bLightDynamic1: usize = 0x704;
    pub const m_bLightDynamic2: usize = 0x705;
    pub const m_bLightDynamic3: usize = 0x706;
    pub const m_bLightDynamic4: usize = 0x707;
    pub const m_bUseNormal: usize = 0x708;
    pub const m_bUseHLambert: usize = 0x709;
    pub const m_bClampLowerRange: usize = 0x70e;
    pub const m_bClampUpperRange: usize = 0x70f;
}

pub mod C_OP_Cull {
    pub const m_flCullPerc: usize = 0x1c0;
    pub const m_flCullStart: usize = 0x1c4;
    pub const m_flCullEnd: usize = 0x1c8;
    pub const m_flCullExp: usize = 0x1cc;
}

pub mod C_OP_CurlNoiseForce {
    pub const m_nNoiseType: usize = 0x1d0;
    pub const m_vecNoiseFreq: usize = 0x1d8;
    pub const m_vecNoiseScale: usize = 0x830;
    pub const m_vecOffset: usize = 0xe88;
    pub const m_vecOffsetRate: usize = 0x14e0;
    pub const m_flWorleySeed: usize = 0x1b38;
    pub const m_flWorleyJitter: usize = 0x1c90;
}

pub mod C_OP_CycleScalar {
    pub const m_nDestField: usize = 0x1c0;
    pub const m_flStartValue: usize = 0x1c4;
    pub const m_flEndValue: usize = 0x1c8;
    pub const m_flCycleTime: usize = 0x1cc;
    pub const m_bDoNotRepeatCycle: usize = 0x1d0;
    pub const m_bSynchronizeParticles: usize = 0x1d1;
    pub const m_nCPScale: usize = 0x1d4;
    pub const m_nCPFieldMin: usize = 0x1d8;
    pub const m_nCPFieldMax: usize = 0x1dc;
    pub const m_nSetMethod: usize = 0x1e0;
}

pub mod C_OP_CylindricalDistanceToTransform {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x320;
    pub const m_flOutputMin: usize = 0x478;
    pub const m_flOutputMax: usize = 0x5d0;
    pub const m_TransformStart: usize = 0x728;
    pub const m_TransformEnd: usize = 0x790;
    pub const m_nSetMethod: usize = 0x7f8;
    pub const m_bActiveRange: usize = 0x7fc;
    pub const m_bAdditive: usize = 0x7fd;
    pub const m_bCapsule: usize = 0x7fe;
}

pub mod C_OP_DampenToCP {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_flRange: usize = 0x1c4;
    pub const m_flScale: usize = 0x1c8;
}

pub mod C_OP_Decay {
    pub const m_bRopeDecay: usize = 0x1c0;
    pub const m_bForcePreserveParticleOrder: usize = 0x1c1;
}

pub mod C_OP_DecayClampCount {
    pub const m_nCount: usize = 0x1c0;
}

pub mod C_OP_DecayMaintainCount {
    pub const m_nParticlesToMaintain: usize = 0x1c0;
    pub const m_flDecayDelay: usize = 0x1c4;
    pub const m_nSnapshotControlPoint: usize = 0x1c8;
    pub const m_bLifespanDecay: usize = 0x1cc;
    pub const m_flScale: usize = 0x1d0;
    pub const m_bKillNewest: usize = 0x328;
}

pub mod C_OP_DecayOffscreen {
    pub const m_flOffscreenTime: usize = 0x1c0;
}

pub mod C_OP_DensityForce {
    pub const m_flRadiusScale: usize = 0x1d0;
    pub const m_flForceScale: usize = 0x1d4;
    pub const m_flTargetDensity: usize = 0x1d8;
}

pub mod C_OP_DifferencePreviousParticle {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_flOutputMin: usize = 0x1d0;
    pub const m_flOutputMax: usize = 0x1d4;
    pub const m_nSetMethod: usize = 0x1d8;
    pub const m_bActiveRange: usize = 0x1dc;
    pub const m_bSetPreviousParticle: usize = 0x1dd;
}

pub mod C_OP_Diffusion {
    pub const m_flRadiusScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nVoxelGridResolution: usize = 0x1c8;
}

pub mod C_OP_DirectionBetweenVecsToVec {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecPoint1: usize = 0x1c8;
    pub const m_vecPoint2: usize = 0x820;
}

pub mod C_OP_DistanceBetweenCPsToCP {
    pub const m_nStartCP: usize = 0x1d0;
    pub const m_nEndCP: usize = 0x1d4;
    pub const m_nOutputCP: usize = 0x1d8;
    pub const m_nOutputCPField: usize = 0x1dc;
    pub const m_bSetOnce: usize = 0x1e0;
    pub const m_flInputMin: usize = 0x1e4;
    pub const m_flInputMax: usize = 0x1e8;
    pub const m_flOutputMin: usize = 0x1ec;
    pub const m_flOutputMax: usize = 0x1f0;
    pub const m_flMaxTraceLength: usize = 0x1f4;
    pub const m_flLOSScale: usize = 0x1f8;
    pub const m_bLOS: usize = 0x1fc;
    pub const m_CollisionGroupName: usize = 0x1fd;
    pub const m_nTraceSet: usize = 0x280;
    pub const m_nSetParent: usize = 0x284;
}

pub mod C_OP_DistanceBetweenTransforms {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_TransformStart: usize = 0x1c8;
    pub const m_TransformEnd: usize = 0x230;
    pub const m_flInputMin: usize = 0x298;
    pub const m_flInputMax: usize = 0x3f0;
    pub const m_flOutputMin: usize = 0x548;
    pub const m_flOutputMax: usize = 0x6a0;
    pub const m_flMaxTraceLength: usize = 0x7f8;
    pub const m_flLOSScale: usize = 0x7fc;
    pub const m_CollisionGroupName: usize = 0x800;
    pub const m_nTraceSet: usize = 0x880;
    pub const m_bLOS: usize = 0x884;
    pub const m_nSetMethod: usize = 0x888;
}

pub mod C_OP_DistanceBetweenVecs {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecPoint1: usize = 0x1c8;
    pub const m_vecPoint2: usize = 0x820;
    pub const m_flInputMin: usize = 0xe78;
    pub const m_flInputMax: usize = 0xfd0;
    pub const m_flOutputMin: usize = 0x1128;
    pub const m_flOutputMax: usize = 0x1280;
    pub const m_nSetMethod: usize = 0x13d8;
    pub const m_bDeltaTime: usize = 0x13dc;
}

pub mod C_OP_DistanceCull {
    pub const m_nControlPoint: usize = 0x1c0;
    pub const m_vecPointOffset: usize = 0x1c4;
    pub const m_flDistance: usize = 0x1d0;
    pub const m_bCullInside: usize = 0x1d4;
}

pub mod C_OP_DistanceToTransform {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x320;
    pub const m_flOutputMin: usize = 0x478;
    pub const m_flOutputMax: usize = 0x5d0;
    pub const m_TransformStart: usize = 0x728;
    pub const m_bLOS: usize = 0x790;
    pub const m_CollisionGroupName: usize = 0x791;
    pub const m_nTraceSet: usize = 0x814;
    pub const m_flMaxTraceLength: usize = 0x818;
    pub const m_flLOSScale: usize = 0x81c;
    pub const m_nSetMethod: usize = 0x820;
    pub const m_bActiveRange: usize = 0x824;
    pub const m_bAdditive: usize = 0x825;
    pub const m_vecComponentScale: usize = 0x828;
}

pub mod C_OP_DragRelativeToPlane {
    pub const m_flDragAtPlane: usize = 0x1c0;
    pub const m_flFalloff: usize = 0x318;
    pub const m_bDirectional: usize = 0x470;
    pub const m_vecPlaneNormal: usize = 0x478;
    pub const m_nControlPointNumber: usize = 0xad0;
}

pub mod C_OP_DriveCPFromGlobalSoundFloat {
    pub const m_nOutputControlPoint: usize = 0x1d0;
    pub const m_nOutputField: usize = 0x1d4;
    pub const m_flInputMin: usize = 0x1d8;
    pub const m_flInputMax: usize = 0x1dc;
    pub const m_flOutputMin: usize = 0x1e0;
    pub const m_flOutputMax: usize = 0x1e4;
    pub const m_StackName: usize = 0x1e8;
    pub const m_OperatorName: usize = 0x1f0;
    pub const m_FieldName: usize = 0x1f8;
}

pub mod C_OP_EnableChildrenFromParentParticleCount {
    pub const m_nChildGroupID: usize = 0x1d0;
    pub const m_nFirstChild: usize = 0x1d4;
    pub const m_nNumChildrenToEnable: usize = 0x1d8;
    pub const m_bDisableChildren: usize = 0x330;
    pub const m_bPlayEndcapOnStop: usize = 0x331;
    pub const m_bDestroyImmediately: usize = 0x332;
}

pub mod C_OP_EndCapTimedDecay {
    pub const m_flDecayTime: usize = 0x1c0;
}

pub mod C_OP_EndCapTimedFreeze {
    pub const m_flFreezeTime: usize = 0x1c0;
}

pub mod C_OP_ExternalGameImpulseForce {
    pub const m_flForceScale: usize = 0x1d0;
    pub const m_bRopes: usize = 0x328;
    pub const m_bRopesZOnly: usize = 0x329;
    pub const m_bExplosions: usize = 0x32a;
    pub const m_bParticles: usize = 0x32b;
}

pub mod C_OP_ExternalWindForce {
    pub const m_vecSamplePosition: usize = 0x1d0;
    pub const m_vecScale: usize = 0x828;
    pub const m_bSampleWind: usize = 0xe80;
    pub const m_bSampleWater: usize = 0xe81;
    pub const m_bDampenNearWaterPlane: usize = 0xe82;
    pub const m_bSampleGravity: usize = 0xe83;
    pub const m_vecGravityForce: usize = 0xe88;
    pub const m_bUseBasicMovementGravity: usize = 0x14e0;
    pub const m_flLocalGravityScale: usize = 0x14e8;
    pub const m_flLocalBuoyancyScale: usize = 0x1640;
    pub const m_vecBuoyancyForce: usize = 0x1798;
}

pub mod C_OP_FadeAndKill {
    pub const m_flStartFadeInTime: usize = 0x1c0;
    pub const m_flEndFadeInTime: usize = 0x1c4;
    pub const m_flStartFadeOutTime: usize = 0x1c8;
    pub const m_flEndFadeOutTime: usize = 0x1cc;
    pub const m_flStartAlpha: usize = 0x1d0;
    pub const m_flEndAlpha: usize = 0x1d4;
    pub const m_bForcePreserveParticleOrder: usize = 0x1d8;
}

pub mod C_OP_FadeAndKillForTracers {
    pub const m_flStartFadeInTime: usize = 0x1c0;
    pub const m_flEndFadeInTime: usize = 0x1c4;
    pub const m_flStartFadeOutTime: usize = 0x1c8;
    pub const m_flEndFadeOutTime: usize = 0x1cc;
    pub const m_flStartAlpha: usize = 0x1d0;
    pub const m_flEndAlpha: usize = 0x1d4;
}

pub mod C_OP_FadeIn {
    pub const m_flFadeInTimeMin: usize = 0x1c0;
    pub const m_flFadeInTimeMax: usize = 0x1c4;
    pub const m_flFadeInTimeExp: usize = 0x1c8;
    pub const m_bProportional: usize = 0x1cc;
}

pub mod C_OP_FadeInSimple {
    pub const m_flFadeInTime: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
}

pub mod C_OP_FadeOut {
    pub const m_flFadeOutTimeMin: usize = 0x1c0;
    pub const m_flFadeOutTimeMax: usize = 0x1c4;
    pub const m_flFadeOutTimeExp: usize = 0x1c8;
    pub const m_flFadeBias: usize = 0x1cc;
    pub const m_bProportional: usize = 0x200;
    pub const m_bEaseInAndOut: usize = 0x201;
}

pub mod C_OP_FadeOutSimple {
    pub const m_flFadeOutTime: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
}

pub mod C_OP_ForceBasedOnDistanceToPlane {
    pub const m_flMinDist: usize = 0x1d0;
    pub const m_vecForceAtMinDist: usize = 0x1d4;
    pub const m_flMaxDist: usize = 0x1e0;
    pub const m_vecForceAtMaxDist: usize = 0x1e4;
    pub const m_vecPlaneNormal: usize = 0x1f0;
    pub const m_nControlPointNumber: usize = 0x1fc;
    pub const m_flExponent: usize = 0x200;
}

pub mod C_OP_ForceControlPointStub {
    pub const m_ControlPoint: usize = 0x1d0;
}

pub mod C_OP_GlobalLight {
    pub const m_flScale: usize = 0x1c0;
    pub const m_bClampLowerRange: usize = 0x1c4;
    pub const m_bClampUpperRange: usize = 0x1c5;
}

pub mod C_OP_HSVShiftToCP {
    pub const m_nColorCP: usize = 0x1d0;
    pub const m_nColorGemEnableCP: usize = 0x1d4;
    pub const m_nOutputCP: usize = 0x1d8;
    pub const m_DefaultHSVColor: usize = 0x1dc;
}

pub mod C_OP_InheritFromParentParticles {
    pub const m_flScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nIncrement: usize = 0x1c8;
    pub const m_bRandomDistribution: usize = 0x1cc;
}

pub mod C_OP_InheritFromParentParticlesV2 {
    pub const m_flScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nIncrement: usize = 0x1c8;
    pub const m_bRandomDistribution: usize = 0x1cc;
    pub const m_nMissingParentBehavior: usize = 0x1d0;
}

pub mod C_OP_InheritFromPeerSystem {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nFieldInput: usize = 0x1c4;
    pub const m_nIncrement: usize = 0x1c8;
    pub const m_nGroupID: usize = 0x1cc;
}

pub mod C_OP_InstantaneousEmitter {
    pub const m_nParticlesToEmit: usize = 0x1c0;
    pub const m_flStartTime: usize = 0x318;
    pub const m_flInitFromKilledParentParticles: usize = 0x470;
    pub const m_nMaxEmittedPerFrame: usize = 0x474;
    pub const m_nSnapshotControlPoint: usize = 0x478;
}

pub mod C_OP_InterpolateRadius {
    pub const m_flStartTime: usize = 0x1c0;
    pub const m_flEndTime: usize = 0x1c4;
    pub const m_flStartScale: usize = 0x1c8;
    pub const m_flEndScale: usize = 0x1cc;
    pub const m_bEaseInAndOut: usize = 0x1d0;
    pub const m_flBias: usize = 0x1d4;
}

pub mod C_OP_LagCompensation {
    pub const m_nDesiredVelocityCP: usize = 0x1c0;
    pub const m_nLatencyCP: usize = 0x1c4;
    pub const m_nLatencyCPField: usize = 0x1c8;
    pub const m_nDesiredVelocityCPField: usize = 0x1cc;
}

pub mod C_OP_LerpEndCapScalar {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flOutput: usize = 0x1c4;
    pub const m_flLerpTime: usize = 0x1c8;
}

pub mod C_OP_LerpEndCapVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecOutput: usize = 0x1c4;
    pub const m_flLerpTime: usize = 0x1d0;
}

pub mod C_OP_LerpScalar {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flOutput: usize = 0x1c8;
    pub const m_flStartTime: usize = 0x320;
    pub const m_flEndTime: usize = 0x324;
}

pub mod C_OP_LerpToInitialPosition {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_flInterpolation: usize = 0x1c8;
    pub const m_nCacheField: usize = 0x320;
    pub const m_flScale: usize = 0x328;
    pub const m_vecScale: usize = 0x480;
}

pub mod C_OP_LerpToOtherAttribute {
    pub const m_flInterpolation: usize = 0x1c0;
    pub const m_nFieldInputFrom: usize = 0x318;
    pub const m_nFieldInput: usize = 0x31c;
    pub const m_nFieldOutput: usize = 0x320;
}

pub mod C_OP_LerpVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecOutput: usize = 0x1c4;
    pub const m_flStartTime: usize = 0x1d0;
    pub const m_flEndTime: usize = 0x1d4;
    pub const m_nSetMethod: usize = 0x1d8;
}

pub mod C_OP_LightningSnapshotGenerator {
    pub const m_nCPSnapshot: usize = 0x1d0;
    pub const m_nCPStartPnt: usize = 0x1d4;
    pub const m_nCPEndPnt: usize = 0x1d8;
    pub const m_flSegments: usize = 0x1e0;
    pub const m_flOffset: usize = 0x338;
    pub const m_flOffsetDecay: usize = 0x490;
    pub const m_flRecalcRate: usize = 0x5e8;
    pub const m_flUVScale: usize = 0x740;
    pub const m_flUVOffset: usize = 0x898;
    pub const m_flSplitRate: usize = 0x9f0;
    pub const m_flBranchTwist: usize = 0xb48;
    pub const m_nBranchBehavior: usize = 0xca0;
    pub const m_flRadiusStart: usize = 0xca8;
    pub const m_flRadiusEnd: usize = 0xe00;
    pub const m_flDedicatedPool: usize = 0xf58;
}

pub mod C_OP_LocalAccelerationForce {
    pub const m_nCP: usize = 0x1d0;
    pub const m_nScaleCP: usize = 0x1d4;
    pub const m_vecAccel: usize = 0x1d8;
}

pub mod C_OP_LockPoints {
    pub const m_nMinCol: usize = 0x1c0;
    pub const m_nMaxCol: usize = 0x1c4;
    pub const m_nMinRow: usize = 0x1c8;
    pub const m_nMaxRow: usize = 0x1cc;
    pub const m_nControlPoint: usize = 0x1d0;
    pub const m_flBlendValue: usize = 0x1d4;
}

pub mod C_OP_LockToBone {
    pub const m_modelInput: usize = 0x1c0;
    pub const m_transformInput: usize = 0x220;
    pub const m_flLifeTimeFadeStart: usize = 0x288;
    pub const m_flLifeTimeFadeEnd: usize = 0x28c;
    pub const m_flJumpThreshold: usize = 0x290;
    pub const m_flPrevPosScale: usize = 0x294;
    pub const m_HitboxSetName: usize = 0x298;
    pub const m_bRigid: usize = 0x318;
    pub const m_bUseBones: usize = 0x319;
    pub const m_nFieldOutput: usize = 0x31c;
    pub const m_nFieldOutputPrev: usize = 0x320;
    pub const m_nRotationSetType: usize = 0x324;
    pub const m_bRigidRotationLock: usize = 0x328;
    pub const m_vecRotation: usize = 0x330;
    pub const m_flRotLerp: usize = 0x988;
}

pub mod C_OP_LockToPointList {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_pointList: usize = 0x1c8;
    pub const m_bPlaceAlongPath: usize = 0x1e0;
    pub const m_bClosedLoop: usize = 0x1e1;
    pub const m_nNumPointsAlongPath: usize = 0x1e4;
}

pub mod C_OP_LockToSavedSequentialPath {
    pub const m_flFadeStart: usize = 0x1c4;
    pub const m_flFadeEnd: usize = 0x1c8;
    pub const m_bCPPairs: usize = 0x1cc;
    pub const m_PathParams: usize = 0x1d0;
}

pub mod C_OP_LockToSavedSequentialPathV2 {
    pub const m_flFadeStart: usize = 0x1c0;
    pub const m_flFadeEnd: usize = 0x1c4;
    pub const m_bCPPairs: usize = 0x1c8;
    pub const m_PathParams: usize = 0x1d0;
}

pub mod C_OP_MaintainEmitter {
    pub const m_nParticlesToMaintain: usize = 0x1c0;
    pub const m_flStartTime: usize = 0x318;
    pub const m_flEmissionDuration: usize = 0x320;
    pub const m_flEmissionRate: usize = 0x478;
    pub const m_nSnapshotControlPoint: usize = 0x47c;
    pub const m_bEmitInstantaneously: usize = 0x480;
    pub const m_bFinalEmitOnStop: usize = 0x481;
    pub const m_flScale: usize = 0x488;
}

pub mod C_OP_MaintainSequentialPath {
    pub const m_fMaxDistance: usize = 0x1c0;
    pub const m_flNumToAssign: usize = 0x1c4;
    pub const m_flCohesionStrength: usize = 0x1c8;
    pub const m_flTolerance: usize = 0x1cc;
    pub const m_bLoop: usize = 0x1d0;
    pub const m_bUseParticleCount: usize = 0x1d1;
    pub const m_PathParams: usize = 0x1e0;
}

pub mod C_OP_MaxVelocity {
    pub const m_flMaxVelocity: usize = 0x1c0;
    pub const m_flMinVelocity: usize = 0x1c4;
    pub const m_nOverrideCP: usize = 0x1c8;
    pub const m_nOverrideCPField: usize = 0x1cc;
}

pub mod C_OP_ModelCull {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_bBoundBox: usize = 0x1c4;
    pub const m_bCullOutside: usize = 0x1c5;
    pub const m_bUseBones: usize = 0x1c6;
    pub const m_HitboxSetName: usize = 0x1c7;
}

pub mod C_OP_ModelDampenMovement {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_bBoundBox: usize = 0x1c4;
    pub const m_bOutside: usize = 0x1c5;
    pub const m_bUseBones: usize = 0x1c6;
    pub const m_HitboxSetName: usize = 0x1c7;
    pub const m_vecPosOffset: usize = 0x248;
    pub const m_fDrag: usize = 0x8a0;
}

pub mod C_OP_MoveToHitbox {
    pub const m_modelInput: usize = 0x1c0;
    pub const m_transformInput: usize = 0x220;
    pub const m_flLifeTimeLerpStart: usize = 0x28c;
    pub const m_flLifeTimeLerpEnd: usize = 0x290;
    pub const m_flPrevPosScale: usize = 0x294;
    pub const m_HitboxSetName: usize = 0x298;
    pub const m_bUseBones: usize = 0x318;
    pub const m_nLerpType: usize = 0x31c;
    pub const m_flInterpolation: usize = 0x320;
}

pub mod C_OP_MovementLoopInsideSphere {
    pub const m_nCP: usize = 0x1c0;
    pub const m_flDistance: usize = 0x1c8;
    pub const m_vecScale: usize = 0x320;
    pub const m_nDistSqrAttr: usize = 0x978;
}

pub mod C_OP_MovementMaintainOffset {
    pub const m_vecOffset: usize = 0x1c0;
    pub const m_nCP: usize = 0x1cc;
    pub const m_bRadiusScale: usize = 0x1d0;
}

pub mod C_OP_MovementMoveAlongSkinnedCPSnapshot {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nSnapshotControlPointNumber: usize = 0x1c4;
    pub const m_bSetNormal: usize = 0x1c8;
    pub const m_bSetRadius: usize = 0x1c9;
    pub const m_flInterpolation: usize = 0x1d0;
    pub const m_flTValue: usize = 0x328;
}

pub mod C_OP_MovementPlaceOnGround {
    pub const m_flOffset: usize = 0x1c0;
    pub const m_flMaxTraceLength: usize = 0x318;
    pub const m_flTolerance: usize = 0x31c;
    pub const m_flTraceOffset: usize = 0x320;
    pub const m_flLerpRate: usize = 0x324;
    pub const m_CollisionGroupName: usize = 0x328;
    pub const m_nTraceSet: usize = 0x3a8;
    pub const m_nRefCP1: usize = 0x3ac;
    pub const m_nRefCP2: usize = 0x3b0;
    pub const m_nLerpCP: usize = 0x3b4;
    pub const m_nTraceMissBehavior: usize = 0x3c0;
    pub const m_bIncludeShotHull: usize = 0x3c4;
    pub const m_bIncludeWater: usize = 0x3c5;
    pub const m_bSetNormal: usize = 0x3c8;
    pub const m_bScaleOffset: usize = 0x3c9;
    pub const m_nPreserveOffsetCP: usize = 0x3cc;
    pub const m_nIgnoreCP: usize = 0x3d0;
}

pub mod C_OP_MovementRigidAttachToCP {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nScaleControlPoint: usize = 0x1c4;
    pub const m_nScaleCPField: usize = 0x1c8;
    pub const m_nFieldInput: usize = 0x1cc;
    pub const m_nFieldOutput: usize = 0x1d0;
    pub const m_bOffsetLocal: usize = 0x1d4;
}

pub mod C_OP_MovementRotateParticleAroundAxis {
    pub const m_vecRotAxis: usize = 0x1c0;
    pub const m_flRotRate: usize = 0x818;
    pub const m_TransformInput: usize = 0x970;
    pub const m_bLocalSpace: usize = 0x9d8;
}

pub mod C_OP_MovementSkinnedPositionFromCPSnapshot {
    pub const m_nSnapshotControlPointNumber: usize = 0x1c0;
    pub const m_nControlPointNumber: usize = 0x1c4;
    pub const m_bRandom: usize = 0x1c8;
    pub const m_nRandomSeed: usize = 0x1cc;
    pub const m_bSetNormal: usize = 0x1d0;
    pub const m_bSetRadius: usize = 0x1d1;
    pub const m_flIncrement: usize = 0x1d8;
    pub const m_nFullLoopIncrement: usize = 0x330;
    pub const m_nSnapShotStartPoint: usize = 0x488;
    pub const m_flInterpolation: usize = 0x5e0;
}

pub mod C_OP_Noise {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flOutputMin: usize = 0x1c4;
    pub const m_flOutputMax: usize = 0x1c8;
    pub const m_fl4NoiseScale: usize = 0x1cc;
    pub const m_bAdditive: usize = 0x1d0;
    pub const m_flNoiseAnimationTimeScale: usize = 0x1d4;
}

pub mod C_OP_NoiseEmitter {
    pub const m_flEmissionDuration: usize = 0x1c0;
    pub const m_flStartTime: usize = 0x1c4;
    pub const m_flEmissionScale: usize = 0x1c8;
    pub const m_nScaleControlPoint: usize = 0x1cc;
    pub const m_nScaleControlPointField: usize = 0x1d0;
    pub const m_nWorldNoisePoint: usize = 0x1d4;
    pub const m_bAbsVal: usize = 0x1d8;
    pub const m_bAbsValInv: usize = 0x1d9;
    pub const m_flOffset: usize = 0x1dc;
    pub const m_flOutputMin: usize = 0x1e0;
    pub const m_flOutputMax: usize = 0x1e4;
    pub const m_flNoiseScale: usize = 0x1e8;
    pub const m_flWorldNoiseScale: usize = 0x1ec;
    pub const m_vecOffsetLoc: usize = 0x1f0;
    pub const m_flWorldTimeScale: usize = 0x1fc;
}

pub mod C_OP_NormalLock {
    pub const m_nControlPointNumber: usize = 0x1c0;
}

pub mod C_OP_NormalizeVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flScale: usize = 0x1c4;
}

pub mod C_OP_Orient2DRelToCP {
    pub const m_flRotOffset: usize = 0x1c0;
    pub const m_flSpinStrength: usize = 0x1c4;
    pub const m_nCP: usize = 0x1c8;
    pub const m_nFieldOutput: usize = 0x1cc;
}

pub mod C_OP_OrientTo2dDirection {
    pub const m_flRotOffset: usize = 0x1c0;
    pub const m_flSpinStrength: usize = 0x1c4;
    pub const m_nFieldOutput: usize = 0x1c8;
}

pub mod C_OP_OscillateScalar {
    pub const m_RateMin: usize = 0x1c0;
    pub const m_RateMax: usize = 0x1c4;
    pub const m_FrequencyMin: usize = 0x1c8;
    pub const m_FrequencyMax: usize = 0x1cc;
    pub const m_nField: usize = 0x1d0;
    pub const m_bProportional: usize = 0x1d4;
    pub const m_bProportionalOp: usize = 0x1d5;
    pub const m_flStartTime_min: usize = 0x1d8;
    pub const m_flStartTime_max: usize = 0x1dc;
    pub const m_flEndTime_min: usize = 0x1e0;
    pub const m_flEndTime_max: usize = 0x1e4;
    pub const m_flOscMult: usize = 0x1e8;
    pub const m_flOscAdd: usize = 0x1ec;
}

pub mod C_OP_OscillateScalarSimple {
    pub const m_Rate: usize = 0x1c0;
    pub const m_Frequency: usize = 0x1c4;
    pub const m_nField: usize = 0x1c8;
    pub const m_flOscMult: usize = 0x1cc;
    pub const m_flOscAdd: usize = 0x1d0;
}

pub mod C_OP_OscillateVector {
    pub const m_RateMin: usize = 0x1c0;
    pub const m_RateMax: usize = 0x1cc;
    pub const m_FrequencyMin: usize = 0x1d8;
    pub const m_FrequencyMax: usize = 0x1e4;
    pub const m_nField: usize = 0x1f0;
    pub const m_bProportional: usize = 0x1f4;
    pub const m_bProportionalOp: usize = 0x1f5;
    pub const m_bOffset: usize = 0x1f6;
    pub const m_flStartTime_min: usize = 0x1f8;
    pub const m_flStartTime_max: usize = 0x1fc;
    pub const m_flEndTime_min: usize = 0x200;
    pub const m_flEndTime_max: usize = 0x204;
    pub const m_flOscMult: usize = 0x208;
    pub const m_flOscAdd: usize = 0x360;
    pub const m_flRateScale: usize = 0x4b8;
}

pub mod C_OP_OscillateVectorSimple {
    pub const m_Rate: usize = 0x1c0;
    pub const m_Frequency: usize = 0x1cc;
    pub const m_nField: usize = 0x1d8;
    pub const m_flOscMult: usize = 0x1dc;
    pub const m_flOscAdd: usize = 0x1e0;
    pub const m_bOffset: usize = 0x1e4;
}

pub mod C_OP_ParentVortices {
    pub const m_flForceScale: usize = 0x1d0;
    pub const m_vecTwistAxis: usize = 0x1d4;
    pub const m_bFlipBasedOnYaw: usize = 0x1e0;
}

pub mod C_OP_ParticlePhysics {
    pub const m_Gravity: usize = 0x1c0;
    pub const m_fDrag: usize = 0x818;
    pub const m_nMaxConstraintPasses: usize = 0x970;
}

pub mod C_OP_PerParticleForce {
    pub const m_flForceScale: usize = 0x1d0;
    pub const m_vForce: usize = 0x328;
    pub const m_nCP: usize = 0x980;
}

pub mod C_OP_PercentageBetweenTransformLerpCPs {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c4;
    pub const m_flInputMax: usize = 0x1c8;
    pub const m_TransformStart: usize = 0x1d0;
    pub const m_TransformEnd: usize = 0x238;
    pub const m_nOutputStartCP: usize = 0x2a0;
    pub const m_nOutputStartField: usize = 0x2a4;
    pub const m_nOutputEndCP: usize = 0x2a8;
    pub const m_nOutputEndField: usize = 0x2ac;
    pub const m_nSetMethod: usize = 0x2b0;
    pub const m_bActiveRange: usize = 0x2b4;
    pub const m_bRadialCheck: usize = 0x2b5;
}

pub mod C_OP_PercentageBetweenTransforms {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c4;
    pub const m_flInputMax: usize = 0x1c8;
    pub const m_flOutputMin: usize = 0x1cc;
    pub const m_flOutputMax: usize = 0x1d0;
    pub const m_TransformStart: usize = 0x1d8;
    pub const m_TransformEnd: usize = 0x240;
    pub const m_nSetMethod: usize = 0x2a8;
    pub const m_bActiveRange: usize = 0x2ac;
    pub const m_bRadialCheck: usize = 0x2ad;
}

pub mod C_OP_PercentageBetweenTransformsVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c4;
    pub const m_flInputMax: usize = 0x1c8;
    pub const m_vecOutputMin: usize = 0x1cc;
    pub const m_vecOutputMax: usize = 0x1d8;
    pub const m_TransformStart: usize = 0x1e8;
    pub const m_TransformEnd: usize = 0x250;
    pub const m_nSetMethod: usize = 0x2b8;
    pub const m_bActiveRange: usize = 0x2bc;
    pub const m_bRadialCheck: usize = 0x2bd;
}

pub mod C_OP_PinParticleToCP {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_vecOffset: usize = 0x1c8;
    pub const m_bOffsetLocal: usize = 0x820;
    pub const m_nParticleSelection: usize = 0x824;
    pub const m_nParticleNumber: usize = 0x828;
    pub const m_nPinBreakType: usize = 0x980;
    pub const m_flBreakDistance: usize = 0x988;
    pub const m_flBreakSpeed: usize = 0xae0;
    pub const m_flAge: usize = 0xc38;
    pub const m_nBreakControlPointNumber: usize = 0xd90;
    pub const m_nBreakControlPointNumber2: usize = 0xd94;
    pub const m_flBreakValue: usize = 0xd98;
    pub const m_flInterpolation: usize = 0xef0;
}

pub mod C_OP_PlanarConstraint {
    pub const m_PointOnPlane: usize = 0x1c0;
    pub const m_PlaneNormal: usize = 0x1cc;
    pub const m_nControlPointNumber: usize = 0x1d8;
    pub const m_bGlobalOrigin: usize = 0x1dc;
    pub const m_bGlobalNormal: usize = 0x1dd;
    pub const m_flRadiusScale: usize = 0x1e0;
    pub const m_flMaximumDistanceToCP: usize = 0x338;
}

pub mod C_OP_PlaneCull {
    pub const m_nPlaneControlPoint: usize = 0x1c0;
    pub const m_vecPlaneDirection: usize = 0x1c4;
    pub const m_bLocalSpace: usize = 0x1d0;
    pub const m_flPlaneOffset: usize = 0x1d4;
}

pub mod C_OP_PlayEndCapWhenFinished {
    pub const m_bFireOnEmissionEnd: usize = 0x1d0;
    pub const m_bIncludeChildren: usize = 0x1d1;
}

pub mod C_OP_PointVectorAtNextParticle {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInterpolation: usize = 0x1c8;
}

pub mod C_OP_PositionLock {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_flStartTime_min: usize = 0x228;
    pub const m_flStartTime_max: usize = 0x22c;
    pub const m_flStartTime_exp: usize = 0x230;
    pub const m_flEndTime_min: usize = 0x234;
    pub const m_flEndTime_max: usize = 0x238;
    pub const m_flEndTime_exp: usize = 0x23c;
    pub const m_flRange: usize = 0x240;
    pub const m_flRangeBias: usize = 0x248;
    pub const m_flJumpThreshold: usize = 0x3a0;
    pub const m_flPrevPosScale: usize = 0x3a4;
    pub const m_bLockRot: usize = 0x3a8;
    pub const m_vecScale: usize = 0x3b0;
    pub const m_nFieldOutput: usize = 0xa08;
    pub const m_nFieldOutputPrev: usize = 0xa0c;
}

pub mod C_OP_QuantizeCPComponent {
    pub const m_flInputValue: usize = 0x1d0;
    pub const m_nCPOutput: usize = 0x328;
    pub const m_nOutVectorField: usize = 0x32c;
    pub const m_flQuantizeValue: usize = 0x330;
}

pub mod C_OP_QuantizeFloat {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x318;
}

pub mod C_OP_RadiusDecay {
    pub const m_flMinRadius: usize = 0x1c0;
}

pub mod C_OP_RampCPLinearRandom {
    pub const m_nOutControlPointNumber: usize = 0x1d0;
    pub const m_vecRateMin: usize = 0x1d4;
    pub const m_vecRateMax: usize = 0x1e0;
}

pub mod C_OP_RampScalarLinear {
    pub const m_RateMin: usize = 0x1c0;
    pub const m_RateMax: usize = 0x1c4;
    pub const m_flStartTime_min: usize = 0x1c8;
    pub const m_flStartTime_max: usize = 0x1cc;
    pub const m_flEndTime_min: usize = 0x1d0;
    pub const m_flEndTime_max: usize = 0x1d4;
    pub const m_nField: usize = 0x200;
    pub const m_bProportionalOp: usize = 0x204;
}

pub mod C_OP_RampScalarLinearSimple {
    pub const m_Rate: usize = 0x1c0;
    pub const m_flStartTime: usize = 0x1c4;
    pub const m_flEndTime: usize = 0x1c8;
    pub const m_nField: usize = 0x1f0;
}

pub mod C_OP_RampScalarSpline {
    pub const m_RateMin: usize = 0x1c0;
    pub const m_RateMax: usize = 0x1c4;
    pub const m_flStartTime_min: usize = 0x1c8;
    pub const m_flStartTime_max: usize = 0x1cc;
    pub const m_flEndTime_min: usize = 0x1d0;
    pub const m_flEndTime_max: usize = 0x1d4;
    pub const m_flBias: usize = 0x1d8;
    pub const m_nField: usize = 0x200;
    pub const m_bProportionalOp: usize = 0x204;
    pub const m_bEaseOut: usize = 0x205;
}

pub mod C_OP_RampScalarSplineSimple {
    pub const m_Rate: usize = 0x1c0;
    pub const m_flStartTime: usize = 0x1c4;
    pub const m_flEndTime: usize = 0x1c8;
    pub const m_nField: usize = 0x1f0;
    pub const m_bEaseOut: usize = 0x1f4;
}

pub mod C_OP_RandomForce {
    pub const m_MinForce: usize = 0x1d0;
    pub const m_MaxForce: usize = 0x1dc;
}

pub mod C_OP_ReadFromNeighboringParticle {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nIncrement: usize = 0x1c8;
    pub const m_DistanceCheck: usize = 0x1d0;
    pub const m_flInterpolation: usize = 0x328;
}

pub mod C_OP_ReinitializeScalarEndCap {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flOutputMin: usize = 0x1c4;
    pub const m_flOutputMax: usize = 0x1c8;
}

pub mod C_OP_RemapAverageHitboxSpeedtoCP {
    pub const m_nInControlPointNumber: usize = 0x1d0;
    pub const m_nOutControlPointNumber: usize = 0x1d4;
    pub const m_nField: usize = 0x1d8;
    pub const m_flInputMin: usize = 0x1e0;
    pub const m_flInputMax: usize = 0x338;
    pub const m_flOutputMin: usize = 0x490;
    pub const m_flOutputMax: usize = 0x5e8;
    pub const m_nHeightControlPointNumber: usize = 0x740;
    pub const m_vecComparisonVelocity: usize = 0x748;
    pub const m_HitboxSetName: usize = 0xda0;
}

pub mod C_OP_RemapAverageScalarValuetoCP {
    pub const m_nOutControlPointNumber: usize = 0x1d0;
    pub const m_nOutVectorField: usize = 0x1d4;
    pub const m_nField: usize = 0x1d8;
    pub const m_flInputMin: usize = 0x1dc;
    pub const m_flInputMax: usize = 0x1e0;
    pub const m_flOutputMin: usize = 0x1e4;
    pub const m_flOutputMax: usize = 0x1e8;
}

pub mod C_OP_RemapBoundingVolumetoCP {
    pub const m_nOutControlPointNumber: usize = 0x1d0;
    pub const m_flInputMin: usize = 0x1d4;
    pub const m_flInputMax: usize = 0x1d8;
    pub const m_flOutputMin: usize = 0x1dc;
    pub const m_flOutputMax: usize = 0x1e0;
}

pub mod C_OP_RemapCPVelocityToVector {
    pub const m_nControlPoint: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flScale: usize = 0x1c8;
    pub const m_bNormalize: usize = 0x1cc;
}

pub mod C_OP_RemapCPtoCP {
    pub const m_nInputControlPoint: usize = 0x1d0;
    pub const m_nOutputControlPoint: usize = 0x1d4;
    pub const m_nInputField: usize = 0x1d8;
    pub const m_nOutputField: usize = 0x1dc;
    pub const m_flInputMin: usize = 0x1e0;
    pub const m_flInputMax: usize = 0x1e4;
    pub const m_flOutputMin: usize = 0x1e8;
    pub const m_flOutputMax: usize = 0x1ec;
    pub const m_bDerivative: usize = 0x1f0;
    pub const m_flInterpRate: usize = 0x1f4;
}

pub mod C_OP_RemapCPtoScalar {
    pub const m_nCPInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nField: usize = 0x1c8;
    pub const m_flInputMin: usize = 0x1cc;
    pub const m_flInputMax: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_flStartTime: usize = 0x1dc;
    pub const m_flEndTime: usize = 0x1e0;
    pub const m_flInterpRate: usize = 0x1e4;
    pub const m_nSetMethod: usize = 0x1e8;
}

pub mod C_OP_RemapCPtoVector {
    pub const m_nCPInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nLocalSpaceCP: usize = 0x1c8;
    pub const m_vInputMin: usize = 0x1cc;
    pub const m_vInputMax: usize = 0x1d8;
    pub const m_vOutputMin: usize = 0x1e4;
    pub const m_vOutputMax: usize = 0x1f0;
    pub const m_flStartTime: usize = 0x1fc;
    pub const m_flEndTime: usize = 0x200;
    pub const m_flInterpRate: usize = 0x204;
    pub const m_nSetMethod: usize = 0x208;
    pub const m_bOffset: usize = 0x20c;
    pub const m_bAccelerate: usize = 0x20d;
}

pub mod C_OP_RemapControlPointDirectionToVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flScale: usize = 0x1c4;
    pub const m_nControlPointNumber: usize = 0x1c8;
}

pub mod C_OP_RemapControlPointOrientationToRotation {
    pub const m_nCP: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flOffsetRot: usize = 0x1c8;
    pub const m_nComponent: usize = 0x1cc;
}

pub mod C_OP_RemapCrossProductOfTwoVectorsToVector {
    pub const m_InputVec1: usize = 0x1c0;
    pub const m_InputVec2: usize = 0x818;
    pub const m_nFieldOutput: usize = 0xe70;
    pub const m_bNormalize: usize = 0xe74;
}

pub mod C_OP_RemapDensityGradientToVectorAttribute {
    pub const m_flRadiusScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
}

pub mod C_OP_RemapDensityToVector {
    pub const m_flRadiusScale: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flDensityMin: usize = 0x1c8;
    pub const m_flDensityMax: usize = 0x1cc;
    pub const m_vecOutputMin: usize = 0x1d0;
    pub const m_vecOutputMax: usize = 0x1dc;
    pub const m_bUseParentDensity: usize = 0x1e8;
    pub const m_nVoxelGridResolution: usize = 0x1ec;
}

pub mod C_OP_RemapDirectionToCPToVector {
    pub const m_nCP: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flScale: usize = 0x1c8;
    pub const m_flOffsetRot: usize = 0x1cc;
    pub const m_vecOffsetAxis: usize = 0x1d0;
    pub const m_bNormalize: usize = 0x1dc;
    pub const m_nFieldStrength: usize = 0x1e0;
}

pub mod C_OP_RemapDistanceToLineSegmentBase {
    pub const m_nCP0: usize = 0x1c0;
    pub const m_nCP1: usize = 0x1c4;
    pub const m_flMinInputValue: usize = 0x1c8;
    pub const m_flMaxInputValue: usize = 0x1cc;
    pub const m_bInfiniteLine: usize = 0x1d0;
}

pub mod C_OP_RemapDistanceToLineSegmentToScalar {
    pub const m_nFieldOutput: usize = 0x1e0;
    pub const m_flMinOutputValue: usize = 0x1e4;
    pub const m_flMaxOutputValue: usize = 0x1e8;
}

pub mod C_OP_RemapDistanceToLineSegmentToVector {
    pub const m_nFieldOutput: usize = 0x1e0;
    pub const m_vMinOutputValue: usize = 0x1e4;
    pub const m_vMaxOutputValue: usize = 0x1f0;
}

pub mod C_OP_RemapDotProductToCP {
    pub const m_nInputCP1: usize = 0x1d0;
    pub const m_nInputCP2: usize = 0x1d4;
    pub const m_nOutputCP: usize = 0x1d8;
    pub const m_nOutVectorField: usize = 0x1dc;
    pub const m_flInputMin: usize = 0x1e0;
    pub const m_flInputMax: usize = 0x338;
    pub const m_flOutputMin: usize = 0x490;
    pub const m_flOutputMax: usize = 0x5e8;
}

pub mod C_OP_RemapDotProductToScalar {
    pub const m_nInputCP1: usize = 0x1c0;
    pub const m_nInputCP2: usize = 0x1c4;
    pub const m_nFieldOutput: usize = 0x1c8;
    pub const m_flInputMin: usize = 0x1cc;
    pub const m_flInputMax: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_bUseParticleVelocity: usize = 0x1dc;
    pub const m_nSetMethod: usize = 0x1e0;
    pub const m_bActiveRange: usize = 0x1e4;
    pub const m_bUseParticleNormal: usize = 0x1e5;
}

pub mod C_OP_RemapExternalWindToCP {
    pub const m_nCP: usize = 0x1d0;
    pub const m_nCPOutput: usize = 0x1d4;
    pub const m_vecScale: usize = 0x1d8;
    pub const m_bSetMagnitude: usize = 0x830;
    pub const m_nOutVectorField: usize = 0x834;
}

pub mod C_OP_RemapModelVolumetoCP {
    pub const m_nBBoxType: usize = 0x1d0;
    pub const m_nInControlPointNumber: usize = 0x1d4;
    pub const m_nOutControlPointNumber: usize = 0x1d8;
    pub const m_nOutControlPointMaxNumber: usize = 0x1dc;
    pub const m_nField: usize = 0x1e0;
    pub const m_flInputMin: usize = 0x1e4;
    pub const m_flInputMax: usize = 0x1e8;
    pub const m_flOutputMin: usize = 0x1ec;
    pub const m_flOutputMax: usize = 0x1f0;
}

pub mod C_OP_RemapNamedModelElementEndCap {
    pub const m_hModel: usize = 0x1c0;
    pub const m_inNames: usize = 0x1c8;
    pub const m_outNames: usize = 0x1e0;
    pub const m_fallbackNames: usize = 0x1f8;
    pub const m_bModelFromRenderer: usize = 0x210;
    pub const m_nFieldInput: usize = 0x214;
    pub const m_nFieldOutput: usize = 0x218;
}

pub mod C_OP_RemapNamedModelElementOnceTimed {
    pub const m_hModel: usize = 0x1c0;
    pub const m_inNames: usize = 0x1c8;
    pub const m_outNames: usize = 0x1e0;
    pub const m_fallbackNames: usize = 0x1f8;
    pub const m_bModelFromRenderer: usize = 0x210;
    pub const m_bProportional: usize = 0x211;
    pub const m_nFieldInput: usize = 0x214;
    pub const m_nFieldOutput: usize = 0x218;
    pub const m_flRemapTime: usize = 0x21c;
}

pub mod C_OP_RemapParticleCountOnScalarEndCap {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nInputMin: usize = 0x1c4;
    pub const m_nInputMax: usize = 0x1c8;
    pub const m_flOutputMin: usize = 0x1cc;
    pub const m_flOutputMax: usize = 0x1d0;
    pub const m_bBackwards: usize = 0x1d4;
    pub const m_nSetMethod: usize = 0x1d8;
}

pub mod C_OP_RemapParticleCountToScalar {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nInputMin: usize = 0x1c8;
    pub const m_nInputMax: usize = 0x320;
    pub const m_flOutputMin: usize = 0x478;
    pub const m_flOutputMax: usize = 0x5d0;
    pub const m_bActiveRange: usize = 0x728;
    pub const m_nSetMethod: usize = 0x72c;
}

pub mod C_OP_RemapSDFDistanceToScalarAttribute {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_nVectorFieldInput: usize = 0x1c4;
    pub const m_flMinDistance: usize = 0x1c8;
    pub const m_flMaxDistance: usize = 0x320;
    pub const m_flValueBelowMin: usize = 0x478;
    pub const m_flValueAtMin: usize = 0x5d0;
    pub const m_flValueAtMax: usize = 0x728;
    pub const m_flValueAboveMax: usize = 0x880;
}

pub mod C_OP_RemapSDFDistanceToVectorAttribute {
    pub const m_nVectorFieldOutput: usize = 0x1c0;
    pub const m_nVectorFieldInput: usize = 0x1c4;
    pub const m_flMinDistance: usize = 0x1c8;
    pub const m_flMaxDistance: usize = 0x320;
    pub const m_vValueBelowMin: usize = 0x478;
    pub const m_vValueAtMin: usize = 0x484;
    pub const m_vValueAtMax: usize = 0x490;
    pub const m_vValueAboveMax: usize = 0x49c;
}

pub mod C_OP_RemapSDFGradientToVectorAttribute {
    pub const m_nFieldOutput: usize = 0x1c0;
}

pub mod C_OP_RemapScalar {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_flOutputMin: usize = 0x1d0;
    pub const m_flOutputMax: usize = 0x1d4;
    pub const m_bOldCode: usize = 0x1d8;
}

pub mod C_OP_RemapScalarEndCap {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_flOutputMin: usize = 0x1d0;
    pub const m_flOutputMax: usize = 0x1d4;
}

pub mod C_OP_RemapScalarOnceTimed {
    pub const m_bProportional: usize = 0x1c0;
    pub const m_nFieldInput: usize = 0x1c4;
    pub const m_nFieldOutput: usize = 0x1c8;
    pub const m_flInputMin: usize = 0x1cc;
    pub const m_flInputMax: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_flRemapTime: usize = 0x1dc;
}

pub mod C_OP_RemapSpeed {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flInputMin: usize = 0x1c4;
    pub const m_flInputMax: usize = 0x1c8;
    pub const m_flOutputMin: usize = 0x1cc;
    pub const m_flOutputMax: usize = 0x1d0;
    pub const m_nSetMethod: usize = 0x1d4;
    pub const m_bIgnoreDelta: usize = 0x1d8;
}

pub mod C_OP_RemapSpeedtoCP {
    pub const m_nInControlPointNumber: usize = 0x1d0;
    pub const m_nOutControlPointNumber: usize = 0x1d4;
    pub const m_nField: usize = 0x1d8;
    pub const m_flInputMin: usize = 0x1dc;
    pub const m_flInputMax: usize = 0x1e0;
    pub const m_flOutputMin: usize = 0x1e4;
    pub const m_flOutputMax: usize = 0x1e8;
    pub const m_bUseDeltaV: usize = 0x1ec;
}

pub mod C_OP_RemapTransformOrientationToRotations {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_vecRotation: usize = 0x228;
    pub const m_bUseQuat: usize = 0x234;
    pub const m_bWriteNormal: usize = 0x235;
}

pub mod C_OP_RemapTransformOrientationToYaw {
    pub const m_TransformInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x228;
    pub const m_flRotOffset: usize = 0x22c;
    pub const m_flSpinStrength: usize = 0x230;
}

pub mod C_OP_RemapTransformToVelocity {
    pub const m_TransformInput: usize = 0x1c0;
}

pub mod C_OP_RemapTransformVisibilityToScalar {
    pub const m_nSetMethod: usize = 0x1c0;
    pub const m_TransformInput: usize = 0x1c8;
    pub const m_nFieldOutput: usize = 0x230;
    pub const m_flInputMin: usize = 0x234;
    pub const m_flInputMax: usize = 0x238;
    pub const m_flOutputMin: usize = 0x23c;
    pub const m_flOutputMax: usize = 0x240;
    pub const m_flRadius: usize = 0x244;
}

pub mod C_OP_RemapTransformVisibilityToVector {
    pub const m_nSetMethod: usize = 0x1c0;
    pub const m_TransformInput: usize = 0x1c8;
    pub const m_nFieldOutput: usize = 0x230;
    pub const m_flInputMin: usize = 0x234;
    pub const m_flInputMax: usize = 0x238;
    pub const m_vecOutputMin: usize = 0x23c;
    pub const m_vecOutputMax: usize = 0x248;
    pub const m_flRadius: usize = 0x254;
}

pub mod C_OP_RemapVectorComponentToScalar {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nComponent: usize = 0x1c8;
}

pub mod C_OP_RemapVectortoCP {
    pub const m_nOutControlPointNumber: usize = 0x1c0;
    pub const m_nFieldInput: usize = 0x1c4;
    pub const m_nParticleNumber: usize = 0x1c8;
}

pub mod C_OP_RemapVelocityToVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_flScale: usize = 0x1c4;
    pub const m_bNormalize: usize = 0x1c8;
}

pub mod C_OP_RemapVisibilityScalar {
    pub const m_nFieldInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_flInputMin: usize = 0x1c8;
    pub const m_flInputMax: usize = 0x1cc;
    pub const m_flOutputMin: usize = 0x1d0;
    pub const m_flOutputMax: usize = 0x1d4;
    pub const m_flRadiusScale: usize = 0x1d8;
}

pub mod C_OP_RenderAsModels {
    pub const m_ModelList: usize = 0x200;
    pub const m_flModelScale: usize = 0x21c;
    pub const m_bFitToModelSize: usize = 0x220;
    pub const m_bNonUniformScaling: usize = 0x221;
    pub const m_nXAxisScalingAttribute: usize = 0x224;
    pub const m_nYAxisScalingAttribute: usize = 0x228;
    pub const m_nZAxisScalingAttribute: usize = 0x22c;
    pub const m_nSizeCullBloat: usize = 0x230;
}

pub mod C_OP_RenderBlobs {
    pub const m_cubeWidth: usize = 0x200;
    pub const m_cutoffRadius: usize = 0x358;
    pub const m_renderRadius: usize = 0x4b0;
    pub const m_nScaleCP: usize = 0x608;
    pub const m_MaterialVars: usize = 0x610;
    pub const m_hMaterial: usize = 0x640;
}

pub mod C_OP_RenderCables {
    pub const m_flRadiusScale: usize = 0x200;
    pub const m_flAlphaScale: usize = 0x358;
    pub const m_vecColorScale: usize = 0x4b0;
    pub const m_nColorBlendType: usize = 0xb08;
    pub const m_hMaterial: usize = 0xb10;
    pub const m_nTextureRepetitionMode: usize = 0xb18;
    pub const m_flTextureRepeatsPerSegment: usize = 0xb20;
    pub const m_flTextureRepeatsCircumference: usize = 0xc78;
    pub const m_flColorMapOffsetV: usize = 0xdd0;
    pub const m_flColorMapOffsetU: usize = 0xf28;
    pub const m_flNormalMapOffsetV: usize = 0x1080;
    pub const m_flNormalMapOffsetU: usize = 0x11d8;
    pub const m_bDrawCableCaps: usize = 0x1330;
    pub const m_flCapRoundness: usize = 0x1334;
    pub const m_flCapOffsetAmount: usize = 0x1338;
    pub const m_flTessScale: usize = 0x133c;
    pub const m_nMinTesselation: usize = 0x1340;
    pub const m_nMaxTesselation: usize = 0x1344;
    pub const m_nRoundness: usize = 0x1348;
    pub const m_LightingTransform: usize = 0x1350;
    pub const m_MaterialFloatVars: usize = 0x13b8;
    pub const m_MaterialVecVars: usize = 0x13e8;
}

pub mod C_OP_RenderDeferredLight {
    pub const m_bUseAlphaTestWindow: usize = 0x200;
    pub const m_bUseTexture: usize = 0x201;
    pub const m_flRadiusScale: usize = 0x204;
    pub const m_flAlphaScale: usize = 0x208;
    pub const m_nAlpha2Field: usize = 0x20c;
    pub const m_vecColorScale: usize = 0x210;
    pub const m_nColorBlendType: usize = 0x868;
    pub const m_flLightDistance: usize = 0x86c;
    pub const m_flStartFalloff: usize = 0x870;
    pub const m_flDistanceFalloff: usize = 0x874;
    pub const m_flSpotFoV: usize = 0x878;
    pub const m_nAlphaTestPointField: usize = 0x87c;
    pub const m_nAlphaTestRangeField: usize = 0x880;
    pub const m_nAlphaTestSharpnessField: usize = 0x884;
    pub const m_hTexture: usize = 0x888;
    pub const m_nHSVShiftControlPoint: usize = 0x890;
}

pub mod C_OP_RenderFlattenGrass {
    pub const m_flFlattenStrength: usize = 0x200;
    pub const m_nStrengthFieldOverride: usize = 0x204;
    pub const m_flRadiusScale: usize = 0x208;
}

pub mod C_OP_RenderGpuImplicit {
    pub const m_bUsePerParticleRadius: usize = 0x200;
    pub const m_fGridSize: usize = 0x208;
    pub const m_fRadiusScale: usize = 0x360;
    pub const m_fIsosurfaceThreshold: usize = 0x4b8;
    pub const m_nScaleCP: usize = 0x610;
    pub const m_hMaterial: usize = 0x618;
}

pub mod C_OP_RenderLightBeam {
    pub const m_vColorBlend: usize = 0x200;
    pub const m_nColorBlendType: usize = 0x858;
    pub const m_flBrightnessLumensPerMeter: usize = 0x860;
    pub const m_bCastShadows: usize = 0x9b8;
    pub const m_flSkirt: usize = 0x9c0;
    pub const m_flRange: usize = 0xb18;
    pub const m_flThickness: usize = 0xc70;
}

pub mod C_OP_RenderLights {
    pub const m_flAnimationRate: usize = 0x210;
    pub const m_nAnimationType: usize = 0x214;
    pub const m_bAnimateInFPS: usize = 0x218;
    pub const m_flMinSize: usize = 0x21c;
    pub const m_flMaxSize: usize = 0x220;
    pub const m_flStartFadeSize: usize = 0x224;
    pub const m_flEndFadeSize: usize = 0x228;
}

pub mod C_OP_RenderMaterialProxy {
    pub const m_nMaterialControlPoint: usize = 0x200;
    pub const m_nProxyType: usize = 0x204;
    pub const m_MaterialVars: usize = 0x208;
    pub const m_hOverrideMaterial: usize = 0x220;
    pub const m_flMaterialOverrideEnabled: usize = 0x228;
    pub const m_vecColorScale: usize = 0x380;
    pub const m_flAlpha: usize = 0x9d8;
    pub const m_nColorBlendType: usize = 0xb30;
}

pub mod C_OP_RenderModels {
    pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x200;
    pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x201;
    pub const m_bUseMixedResolutionRendering: usize = 0x202;
    pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x203;
    pub const m_ModelList: usize = 0x208;
    pub const m_nBodyGroupField: usize = 0x224;
    pub const m_nSubModelField: usize = 0x228;
    pub const m_bIgnoreNormal: usize = 0x22c;
    pub const m_bOrientZ: usize = 0x22d;
    pub const m_bCenterOffset: usize = 0x22e;
    pub const m_vecLocalOffset: usize = 0x230;
    pub const m_vecLocalRotation: usize = 0x888;
    pub const m_bIgnoreRadius: usize = 0xee0;
    pub const m_nModelScaleCP: usize = 0xee4;
    pub const m_vecComponentScale: usize = 0xee8;
    pub const m_bLocalScale: usize = 0x1540;
    pub const m_bAnimated: usize = 0x1541;
    pub const m_flAnimationRate: usize = 0x1544;
    pub const m_bScaleAnimationRate: usize = 0x1548;
    pub const m_bForceLoopingAnimation: usize = 0x1549;
    pub const m_bResetAnimOnStop: usize = 0x154a;
    pub const m_bManualAnimFrame: usize = 0x154b;
    pub const m_nAnimationScaleField: usize = 0x154c;
    pub const m_nAnimationField: usize = 0x1550;
    pub const m_nManualFrameField: usize = 0x1554;
    pub const m_ActivityName: usize = 0x1558;
    pub const m_SequenceName: usize = 0x1658;
    pub const m_bEnableClothSimulation: usize = 0x1758;
    pub const m_hOverrideMaterial: usize = 0x1760;
    pub const m_bOverrideTranslucentMaterials: usize = 0x1768;
    pub const m_nSkin: usize = 0x1770;
    pub const m_MaterialVars: usize = 0x18c8;
    pub const m_modelInput: usize = 0x18e0;
    pub const m_nLOD: usize = 0x1940;
    pub const m_EconSlotName: usize = 0x1944;
    pub const m_bOriginalModel: usize = 0x1a44;
    pub const m_bSuppressTint: usize = 0x1a45;
    pub const m_bUseRawMeshGroup: usize = 0x1a46;
    pub const m_bDisableShadows: usize = 0x1a47;
    pub const m_bAcceptsDecals: usize = 0x1a48;
    pub const m_bForceDrawInterlevedWithSiblings: usize = 0x1a49;
    pub const m_bDoNotDrawInParticlePass: usize = 0x1a4a;
    pub const m_szRenderAttribute: usize = 0x1a4b;
    pub const m_flRadiusScale: usize = 0x1b50;
    pub const m_flAlphaScale: usize = 0x1ca8;
    pub const m_flRollScale: usize = 0x1e00;
    pub const m_nAlpha2Field: usize = 0x1f58;
    pub const m_vecColorScale: usize = 0x1f60;
    pub const m_nColorBlendType: usize = 0x25b8;
}

pub mod C_OP_RenderOmni2Light {
    pub const m_nLightType: usize = 0x200;
    pub const m_vColorBlend: usize = 0x208;
    pub const m_nColorBlendType: usize = 0x860;
    pub const m_nBrightnessUnit: usize = 0x864;
    pub const m_flBrightnessLumens: usize = 0x868;
    pub const m_flBrightnessCandelas: usize = 0x9c0;
    pub const m_bCastShadows: usize = 0xb18;
    pub const m_flLuminaireRadius: usize = 0xb20;
    pub const m_flSkirt: usize = 0xc78;
    pub const m_flRange: usize = 0xdd0;
    pub const m_flInnerConeAngle: usize = 0xf28;
    pub const m_flOuterConeAngle: usize = 0x1080;
    pub const m_hLightCookie: usize = 0x11d8;
    pub const m_bSphericalCookie: usize = 0x11e0;
}

pub mod C_OP_RenderPoints {
    pub const m_hMaterial: usize = 0x200;
}

pub mod C_OP_RenderPostProcessing {
    pub const m_flPostProcessStrength: usize = 0x200;
    pub const m_hPostTexture: usize = 0x358;
    pub const m_nPriority: usize = 0x360;
}

pub mod C_OP_RenderProjected {
    pub const m_bProjectCharacter: usize = 0x200;
    pub const m_bProjectWorld: usize = 0x201;
    pub const m_bProjectWater: usize = 0x202;
    pub const m_bFlipHorizontal: usize = 0x203;
    pub const m_bEnableProjectedDepthControls: usize = 0x204;
    pub const m_flMinProjectionDepth: usize = 0x208;
    pub const m_flMaxProjectionDepth: usize = 0x20c;
    pub const m_hProjectedMaterial: usize = 0x210;
    pub const m_flAnimationTimeScale: usize = 0x218;
    pub const m_bOrientToNormal: usize = 0x21c;
    pub const m_MaterialVars: usize = 0x220;
}

pub mod C_OP_RenderRopes {
    pub const m_bEnableFadingAndClamping: usize = 0x2470;
    pub const m_flMinSize: usize = 0x2474;
    pub const m_flMaxSize: usize = 0x2478;
    pub const m_flStartFadeSize: usize = 0x247c;
    pub const m_flEndFadeSize: usize = 0x2480;
    pub const m_flStartFadeDot: usize = 0x2484;
    pub const m_flEndFadeDot: usize = 0x2488;
    pub const m_flRadiusTaper: usize = 0x248c;
    pub const m_nMinTesselation: usize = 0x2490;
    pub const m_nMaxTesselation: usize = 0x2494;
    pub const m_flTessScale: usize = 0x2498;
    pub const m_flTextureVWorldSize: usize = 0x24a0;
    pub const m_flTextureVScrollRate: usize = 0x25f8;
    pub const m_flTextureVOffset: usize = 0x2750;
    pub const m_nTextureVParamsCP: usize = 0x28a8;
    pub const m_bClampV: usize = 0x28ac;
    pub const m_nScaleCP1: usize = 0x28b0;
    pub const m_nScaleCP2: usize = 0x28b4;
    pub const m_flScaleVSizeByControlPointDistance: usize = 0x28b8;
    pub const m_flScaleVScrollByControlPointDistance: usize = 0x28bc;
    pub const m_flScaleVOffsetByControlPointDistance: usize = 0x28c0;
    pub const m_bUseScalarForTextureCoordinate: usize = 0x28c5;
    pub const m_nScalarFieldForTextureCoordinate: usize = 0x28c8;
    pub const m_flScalarAttributeTextureCoordScale: usize = 0x28cc;
    pub const m_bReverseOrder: usize = 0x28d0;
    pub const m_bClosedLoop: usize = 0x28d1;
    pub const m_nOrientationType: usize = 0x28d4;
    pub const m_nVectorFieldForOrientation: usize = 0x28d8;
    pub const m_bDrawAsOpaque: usize = 0x28dc;
    pub const m_bGenerateNormals: usize = 0x28dd;
}

pub mod C_OP_RenderScreenShake {
    pub const m_flDurationScale: usize = 0x200;
    pub const m_flRadiusScale: usize = 0x204;
    pub const m_flFrequencyScale: usize = 0x208;
    pub const m_flAmplitudeScale: usize = 0x20c;
    pub const m_nRadiusField: usize = 0x210;
    pub const m_nDurationField: usize = 0x214;
    pub const m_nFrequencyField: usize = 0x218;
    pub const m_nAmplitudeField: usize = 0x21c;
    pub const m_nFilterCP: usize = 0x220;
}

pub mod C_OP_RenderScreenVelocityRotate {
    pub const m_flRotateRateDegrees: usize = 0x200;
    pub const m_flForwardDegrees: usize = 0x204;
}

pub mod C_OP_RenderSound {
    pub const m_flDurationScale: usize = 0x200;
    pub const m_flSndLvlScale: usize = 0x204;
    pub const m_flPitchScale: usize = 0x208;
    pub const m_flVolumeScale: usize = 0x20c;
    pub const m_nSndLvlField: usize = 0x210;
    pub const m_nDurationField: usize = 0x214;
    pub const m_nPitchField: usize = 0x218;
    pub const m_nVolumeField: usize = 0x21c;
    pub const m_nChannel: usize = 0x220;
    pub const m_nCPReference: usize = 0x224;
    pub const m_pszSoundName: usize = 0x228;
    pub const m_bSuppressStopSoundEvent: usize = 0x328;
}

pub mod C_OP_RenderSprites {
    pub const m_nSequenceOverride: usize = 0x2470;
    pub const m_nOrientationType: usize = 0x25c8;
    pub const m_nOrientationControlPoint: usize = 0x25cc;
    pub const m_bUseYawWithNormalAligned: usize = 0x25d0;
    pub const m_flMinSize: usize = 0x25d4;
    pub const m_flMaxSize: usize = 0x25d8;
    pub const m_flAlphaAdjustWithSizeAdjust: usize = 0x25dc;
    pub const m_flStartFadeSize: usize = 0x25e0;
    pub const m_flEndFadeSize: usize = 0x2738;
    pub const m_flStartFadeDot: usize = 0x2890;
    pub const m_flEndFadeDot: usize = 0x2894;
    pub const m_bDistanceAlpha: usize = 0x2898;
    pub const m_bSoftEdges: usize = 0x2899;
    pub const m_flEdgeSoftnessStart: usize = 0x289c;
    pub const m_flEdgeSoftnessEnd: usize = 0x28a0;
    pub const m_bOutline: usize = 0x28a4;
    pub const m_OutlineColor: usize = 0x28a5;
    pub const m_nOutlineAlpha: usize = 0x28ac;
    pub const m_flOutlineStart0: usize = 0x28b0;
    pub const m_flOutlineStart1: usize = 0x28b4;
    pub const m_flOutlineEnd0: usize = 0x28b8;
    pub const m_flOutlineEnd1: usize = 0x28bc;
    pub const m_nLightingMode: usize = 0x28c0;
    pub const m_flLightingTessellation: usize = 0x28c8;
    pub const m_flLightingDirectionality: usize = 0x2a20;
    pub const m_bParticleShadows: usize = 0x2b78;
    pub const m_flShadowDensity: usize = 0x2b7c;
}

pub mod C_OP_RenderStandardLight {
    pub const m_nLightType: usize = 0x200;
    pub const m_vecColorScale: usize = 0x208;
    pub const m_nColorBlendType: usize = 0x860;
    pub const m_flIntensity: usize = 0x868;
    pub const m_bCastShadows: usize = 0x9c0;
    pub const m_flTheta: usize = 0x9c8;
    pub const m_flPhi: usize = 0xb20;
    pub const m_flRadiusMultiplier: usize = 0xc78;
    pub const m_nAttenuationStyle: usize = 0xdd0;
    pub const m_flFalloffLinearity: usize = 0xdd8;
    pub const m_flFiftyPercentFalloff: usize = 0xf30;
    pub const m_flZeroPercentFalloff: usize = 0x1088;
    pub const m_bRenderDiffuse: usize = 0x11e0;
    pub const m_bRenderSpecular: usize = 0x11e1;
    pub const m_lightCookie: usize = 0x11e8;
    pub const m_nPriority: usize = 0x11f0;
    pub const m_nFogLightingMode: usize = 0x11f4;
    pub const m_flFogContribution: usize = 0x11f8;
    pub const m_nCapsuleLightBehavior: usize = 0x1350;
    pub const m_flCapsuleLength: usize = 0x1354;
    pub const m_bReverseOrder: usize = 0x1358;
    pub const m_bClosedLoop: usize = 0x1359;
    pub const m_nPrevPntSource: usize = 0x135c;
    pub const m_flMaxLength: usize = 0x1360;
    pub const m_flMinLength: usize = 0x1364;
    pub const m_bIgnoreDT: usize = 0x1368;
    pub const m_flConstrainRadiusToLengthRatio: usize = 0x136c;
    pub const m_flLengthScale: usize = 0x1370;
    pub const m_flLengthFadeInTime: usize = 0x1374;
}

pub mod C_OP_RenderStatusEffect {
    pub const m_pTextureColorWarp: usize = 0x200;
    pub const m_pTextureDetail2: usize = 0x208;
    pub const m_pTextureDiffuseWarp: usize = 0x210;
    pub const m_pTextureFresnelColorWarp: usize = 0x218;
    pub const m_pTextureFresnelWarp: usize = 0x220;
    pub const m_pTextureSpecularWarp: usize = 0x228;
    pub const m_pTextureEnvMap: usize = 0x230;
}

pub mod C_OP_RenderStatusEffectCitadel {
    pub const m_pTextureColorWarp: usize = 0x200;
    pub const m_pTextureNormal: usize = 0x208;
    pub const m_pTextureMetalness: usize = 0x210;
    pub const m_pTextureRoughness: usize = 0x218;
    pub const m_pTextureSelfIllum: usize = 0x220;
    pub const m_pTextureDetail: usize = 0x228;
}

pub mod C_OP_RenderText {
    pub const m_OutlineColor: usize = 0x200;
    pub const m_DefaultText: usize = 0x208;
}

pub mod C_OP_RenderTonemapController {
    pub const m_flTonemapLevel: usize = 0x200;
    pub const m_flTonemapWeight: usize = 0x204;
    pub const m_nTonemapLevelField: usize = 0x208;
    pub const m_nTonemapWeightField: usize = 0x20c;
}

pub mod C_OP_RenderTrails {
    pub const m_bEnableFadingAndClamping: usize = 0x2740;
    pub const m_flStartFadeDot: usize = 0x2744;
    pub const m_flEndFadeDot: usize = 0x2748;
    pub const m_nPrevPntSource: usize = 0x274c;
    pub const m_flMaxLength: usize = 0x2750;
    pub const m_flMinLength: usize = 0x2754;
    pub const m_bIgnoreDT: usize = 0x2758;
    pub const m_flConstrainRadiusToLengthRatio: usize = 0x275c;
    pub const m_flLengthScale: usize = 0x2760;
    pub const m_flLengthFadeInTime: usize = 0x2764;
    pub const m_flRadiusHeadTaper: usize = 0x2768;
    pub const m_vecHeadColorScale: usize = 0x28c0;
    pub const m_flHeadAlphaScale: usize = 0x2f18;
    pub const m_flRadiusTaper: usize = 0x3070;
    pub const m_vecTailColorScale: usize = 0x31c8;
    pub const m_flTailAlphaScale: usize = 0x3820;
    pub const m_nHorizCropField: usize = 0x3978;
    pub const m_nVertCropField: usize = 0x397c;
    pub const m_flForwardShift: usize = 0x3980;
    pub const m_bFlipUVBasedOnPitchYaw: usize = 0x3984;
}

pub mod C_OP_RenderTreeShake {
    pub const m_flPeakStrength: usize = 0x200;
    pub const m_nPeakStrengthFieldOverride: usize = 0x204;
    pub const m_flRadius: usize = 0x208;
    pub const m_nRadiusFieldOverride: usize = 0x20c;
    pub const m_flShakeDuration: usize = 0x210;
    pub const m_flTransitionTime: usize = 0x214;
    pub const m_flTwistAmount: usize = 0x218;
    pub const m_flRadialAmount: usize = 0x21c;
    pub const m_flControlPointOrientationAmount: usize = 0x220;
    pub const m_nControlPointForLinearDirection: usize = 0x224;
}

pub mod C_OP_RenderVRHapticEvent {
    pub const m_nHand: usize = 0x200;
    pub const m_nOutputHandCP: usize = 0x204;
    pub const m_nOutputField: usize = 0x208;
    pub const m_flAmplitude: usize = 0x210;
}

pub mod C_OP_RepeatedTriggerChildGroup {
    pub const m_nChildGroupID: usize = 0x1d0;
    pub const m_flClusterRefireTime: usize = 0x1d8;
    pub const m_flClusterSize: usize = 0x330;
    pub const m_flClusterCooldown: usize = 0x488;
    pub const m_bLimitChildCount: usize = 0x5e0;
}

pub mod C_OP_RestartAfterDuration {
    pub const m_flDurationMin: usize = 0x1c0;
    pub const m_flDurationMax: usize = 0x1c4;
    pub const m_nCP: usize = 0x1c8;
    pub const m_nCPField: usize = 0x1cc;
    pub const m_nChildGroupID: usize = 0x1d0;
    pub const m_bOnlyChildren: usize = 0x1d4;
}

pub mod C_OP_RopeSpringConstraint {
    pub const m_flRestLength: usize = 0x1c0;
    pub const m_flMinDistance: usize = 0x318;
    pub const m_flMaxDistance: usize = 0x470;
    pub const m_flAdjustmentScale: usize = 0x5c8;
    pub const m_flInitialRestingLength: usize = 0x5d0;
}

pub mod C_OP_RotateVector {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecRotAxisMin: usize = 0x1c4;
    pub const m_vecRotAxisMax: usize = 0x1d0;
    pub const m_flRotRateMin: usize = 0x1dc;
    pub const m_flRotRateMax: usize = 0x1e0;
    pub const m_bNormalize: usize = 0x1e4;
    pub const m_flScale: usize = 0x1e8;
}

pub mod C_OP_RtEnvCull {
    pub const m_vecTestDir: usize = 0x1c0;
    pub const m_vecTestNormal: usize = 0x1cc;
    pub const m_bCullOnMiss: usize = 0x1d8;
    pub const m_bStickInsteadOfCull: usize = 0x1d9;
    pub const m_RtEnvName: usize = 0x1da;
    pub const m_nRTEnvCP: usize = 0x25c;
    pub const m_nComponent: usize = 0x260;
}

pub mod C_OP_SDFConstraint {
    pub const m_flMinDist: usize = 0x1c0;
    pub const m_flMaxDist: usize = 0x318;
    pub const m_nMaxIterations: usize = 0x470;
}

pub mod C_OP_SDFForce {
    pub const m_flForceScale: usize = 0x1d0;
}

pub mod C_OP_SDFLighting {
    pub const m_vLightingDir: usize = 0x1c0;
    pub const m_vTint_0: usize = 0x1cc;
    pub const m_vTint_1: usize = 0x1d8;
}

pub mod C_OP_SelectivelyEnableChildren {
    pub const m_nChildGroupID: usize = 0x1d0;
    pub const m_nFirstChild: usize = 0x328;
    pub const m_nNumChildrenToEnable: usize = 0x480;
    pub const m_bPlayEndcapOnStop: usize = 0x5d8;
    pub const m_bDestroyImmediately: usize = 0x5d9;
}

pub mod C_OP_SequenceFromModel {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
    pub const m_nFieldOutputAnim: usize = 0x1c8;
    pub const m_flInputMin: usize = 0x1cc;
    pub const m_flInputMax: usize = 0x1d0;
    pub const m_flOutputMin: usize = 0x1d4;
    pub const m_flOutputMax: usize = 0x1d8;
    pub const m_nSetMethod: usize = 0x1dc;
}

pub mod C_OP_SetAttributeToScalarExpression {
    pub const m_nExpression: usize = 0x1c0;
    pub const m_flInput1: usize = 0x1c8;
    pub const m_flInput2: usize = 0x320;
    pub const m_nOutputField: usize = 0x478;
    pub const m_nSetMethod: usize = 0x47c;
}

pub mod C_OP_SetCPOrientationToDirection {
    pub const m_nInputControlPoint: usize = 0x1c0;
    pub const m_nOutputControlPoint: usize = 0x1c4;
}

pub mod C_OP_SetCPOrientationToGroundNormal {
    pub const m_flInterpRate: usize = 0x1c0;
    pub const m_flMaxTraceLength: usize = 0x1c4;
    pub const m_flTolerance: usize = 0x1c8;
    pub const m_flTraceOffset: usize = 0x1cc;
    pub const m_CollisionGroupName: usize = 0x1d0;
    pub const m_nTraceSet: usize = 0x250;
    pub const m_nInputCP: usize = 0x254;
    pub const m_nOutputCP: usize = 0x258;
    pub const m_bIncludeWater: usize = 0x268;
}

pub mod C_OP_SetCPOrientationToPointAtCP {
    pub const m_nInputCP: usize = 0x1d0;
    pub const m_nOutputCP: usize = 0x1d4;
    pub const m_flInterpolation: usize = 0x1d8;
    pub const m_b2DOrientation: usize = 0x330;
    pub const m_bAvoidSingularity: usize = 0x331;
    pub const m_bPointAway: usize = 0x332;
}

pub mod C_OP_SetCPtoVector {
    pub const m_nCPInput: usize = 0x1c0;
    pub const m_nFieldOutput: usize = 0x1c4;
}

pub mod C_OP_SetChildControlPoints {
    pub const m_nChildGroupID: usize = 0x1c0;
    pub const m_nFirstControlPoint: usize = 0x1c4;
    pub const m_nNumControlPoints: usize = 0x1c8;
    pub const m_nFirstSourcePoint: usize = 0x1d0;
    pub const m_bReverse: usize = 0x328;
    pub const m_bSetOrientation: usize = 0x329;
}

pub mod C_OP_SetControlPointFieldFromVectorExpression {
    pub const m_nExpression: usize = 0x1d0;
    pub const m_vecInput1: usize = 0x1d8;
    pub const m_vecInput2: usize = 0x830;
    pub const m_flOutputRemap: usize = 0xe88;
    pub const m_nOutputCP: usize = 0xfe0;
    pub const m_nOutVectorField: usize = 0xfe4;
}

pub mod C_OP_SetControlPointFieldToScalarExpression {
    pub const m_nExpression: usize = 0x1d0;
    pub const m_flInput1: usize = 0x1d8;
    pub const m_flInput2: usize = 0x330;
    pub const m_flOutputRemap: usize = 0x488;
    pub const m_nOutputCP: usize = 0x5e0;
    pub const m_nOutVectorField: usize = 0x5e4;
}

pub mod C_OP_SetControlPointFieldToWater {
    pub const m_nSourceCP: usize = 0x1d0;
    pub const m_nDestCP: usize = 0x1d4;
    pub const m_nCPField: usize = 0x1d8;
}

pub mod C_OP_SetControlPointFromObjectScale {
    pub const m_nCPInput: usize = 0x1d0;
    pub const m_nCPOutput: usize = 0x1d4;
}

pub mod C_OP_SetControlPointOrientation {
    pub const m_bUseWorldLocation: usize = 0x1d0;
    pub const m_bRandomize: usize = 0x1d2;
    pub const m_bSetOnce: usize = 0x1d3;
    pub const m_nCP: usize = 0x1d4;
    pub const m_nHeadLocation: usize = 0x1d8;
    pub const m_vecRotation: usize = 0x1dc;
    pub const m_vecRotationB: usize = 0x1e8;
    pub const m_flInterpolation: usize = 0x1f8;
}

pub mod C_OP_SetControlPointOrientationToCPVelocity {
    pub const m_nCPInput: usize = 0x1d0;
    pub const m_nCPOutput: usize = 0x1d4;
}

pub mod C_OP_SetControlPointPositionToRandomActiveCP {
    pub const m_nCP1: usize = 0x1d0;
    pub const m_nHeadLocationMin: usize = 0x1d4;
    pub const m_nHeadLocationMax: usize = 0x1d8;
    pub const m_flResetRate: usize = 0x1e0;
}

pub mod C_OP_SetControlPointPositionToTimeOfDayValue {
    pub const m_nControlPointNumber: usize = 0x1d0;
    pub const m_pszTimeOfDayParameter: usize = 0x1d4;
    pub const m_vecDefaultValue: usize = 0x254;
}

pub mod C_OP_SetControlPointPositions {
    pub const m_bUseWorldLocation: usize = 0x1d0;
    pub const m_bOrient: usize = 0x1d1;
    pub const m_bSetOnce: usize = 0x1d2;
    pub const m_nCP1: usize = 0x1d4;
    pub const m_nCP2: usize = 0x1d8;
    pub const m_nCP3: usize = 0x1dc;
    pub const m_nCP4: usize = 0x1e0;
    pub const m_vecCP1Pos: usize = 0x1e4;
    pub const m_vecCP2Pos: usize = 0x1f0;
    pub const m_vecCP3Pos: usize = 0x1fc;
    pub const m_vecCP4Pos: usize = 0x208;
    pub const m_nHeadLocation: usize = 0x214;
}

pub mod C_OP_SetControlPointRotation {
    pub const m_vecRotAxis: usize = 0x1d0;
    pub const m_flRotRate: usize = 0x828;
    pub const m_nCP: usize = 0x980;
    pub const m_nLocalCP: usize = 0x984;
}

pub mod C_OP_SetControlPointToCPVelocity {
    pub const m_nCPInput: usize = 0x1d0;
    pub const m_nCPOutputVel: usize = 0x1d4;
    pub const m_bNormalize: usize = 0x1d8;
    pub const m_nCPOutputMag: usize = 0x1dc;
    pub const m_nCPField: usize = 0x1e0;
    pub const m_vecComparisonVelocity: usize = 0x1e8;
}

pub mod C_OP_SetControlPointToCenter {
    pub const m_nCP1: usize = 0x1d0;
    pub const m_vecCP1Pos: usize = 0x1d4;
    pub const m_nSetParent: usize = 0x1e0;
}

pub mod C_OP_SetControlPointToHMD {
    pub const m_nCP1: usize = 0x1d0;
    pub const m_vecCP1Pos: usize = 0x1d4;
    pub const m_bOrientToHMD: usize = 0x1e0;
}

pub mod C_OP_SetControlPointToHand {
    pub const m_nCP1: usize = 0x1d0;
    pub const m_nHand: usize = 0x1d4;
    pub const m_vecCP1Pos: usize = 0x1d8;
    pub const m_bOrientToHand: usize = 0x1e4;
}

pub mod C_OP_SetControlPointToImpactPoint {
    pub const m_nCPOut: usize = 0x1d0;
    pub const m_nCPIn: usize = 0x1d4;
    pub const m_flUpdateRate: usize = 0x1d8;
    pub const m_flTraceLength: usize = 0x1e0;
    pub const m_flStartOffset: usize = 0x338;
    pub const m_flOffset: usize = 0x33c;
    pub const m_vecTraceDir: usize = 0x340;
    pub const m_CollisionGroupName: usize = 0x34c;
    pub const m_nTraceSet: usize = 0x3cc;
    pub const m_bSetToEndpoint: usize = 0x3d0;
    pub const m_bTraceToClosestSurface: usize = 0x3d1;
    pub const m_bIncludeWater: usize = 0x3d2;
}

pub mod C_OP_SetControlPointToPlayer {
    pub const m_nCP1: usize = 0x1d0;
    pub const m_vecCP1Pos: usize = 0x1d4;
    pub const m_bOrientToEyes: usize = 0x1e0;
}

pub mod C_OP_SetControlPointToVectorExpression {
    pub const m_nExpression: usize = 0x1d0;
    pub const m_nOutputCP: usize = 0x1d4;
    pub const m_vInput1: usize = 0x1d8;
    pub const m_vInput2: usize = 0x830;
    pub const m_bNormalizedOutput: usize = 0xe88;
}

pub mod C_OP_SetControlPointToWaterSurface {
    pub const m_nSourceCP: usize = 0x1d0;
    pub const m_nDestCP: usize = 0x1d4;
    pub const m_nFlowCP: usize = 0x1d8;
    pub const m_nActiveCP: usize = 0x1dc;
    pub const m_nActiveCPField: usize = 0x1e0;
    pub const m_flRetestRate: usize = 0x1e8;
    pub const m_bAdaptiveThreshold: usize = 0x340;
}

pub mod C_OP_SetControlPointsToModelParticles {
    pub const m_HitboxSetName: usize = 0x1c0;
    pub const m_AttachmentName: usize = 0x240;
    pub const m_nFirstControlPoint: usize = 0x2c0;
    pub const m_nNumControlPoints: usize = 0x2c4;
    pub const m_nFirstSourcePoint: usize = 0x2c8;
    pub const m_bSkin: usize = 0x2cc;
    pub const m_bAttachment: usize = 0x2cd;
}

pub mod C_OP_SetControlPointsToParticle {
    pub const m_nChildGroupID: usize = 0x1c0;
    pub const m_nFirstControlPoint: usize = 0x1c4;
    pub const m_nNumControlPoints: usize = 0x1c8;
    pub const m_nFirstSourcePoint: usize = 0x1cc;
    pub const m_bSetOrientation: usize = 0x1d0;
    pub const m_nOrientationMode: usize = 0x1d4;
    pub const m_nSetParent: usize = 0x1d8;
}

pub mod C_OP_SetFloat {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x318;
    pub const m_nSetMethod: usize = 0x31c;
    pub const m_Lerp: usize = 0x320;
}

pub mod C_OP_SetFloatAttributeToVectorExpression {
    pub const m_nExpression: usize = 0x1c0;
    pub const m_vInput1: usize = 0x1c8;
    pub const m_vInput2: usize = 0x820;
    pub const m_flOutputRemap: usize = 0xe78;
    pub const m_nOutputField: usize = 0xfd0;
    pub const m_nSetMethod: usize = 0xfd4;
}

pub mod C_OP_SetFloatCollection {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x318;
    pub const m_nSetMethod: usize = 0x31c;
    pub const m_Lerp: usize = 0x320;
}

pub mod C_OP_SetFromCPSnapshot {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nAttributeToRead: usize = 0x1c4;
    pub const m_nAttributeToWrite: usize = 0x1c8;
    pub const m_nLocalSpaceCP: usize = 0x1cc;
    pub const m_bRandom: usize = 0x1d0;
    pub const m_bReverse: usize = 0x1d1;
    pub const m_nRandomSeed: usize = 0x1d4;
    pub const m_nSnapShotStartPoint: usize = 0x1d8;
    pub const m_nSnapShotIncrement: usize = 0x330;
    pub const m_flInterpolation: usize = 0x488;
    pub const m_bSubSample: usize = 0x5e0;
}

pub mod C_OP_SetGravityToCP {
    pub const m_nCPInput: usize = 0x1d0;
    pub const m_nCPOutput: usize = 0x1d4;
    pub const m_flScale: usize = 0x1d8;
    pub const m_bSetOrientation: usize = 0x330;
    pub const m_bSetZDown: usize = 0x331;
}

pub mod C_OP_SetParentControlPointsToChildCP {
    pub const m_nChildGroupID: usize = 0x1d0;
    pub const m_nChildControlPoint: usize = 0x1d4;
    pub const m_nNumControlPoints: usize = 0x1d8;
    pub const m_nFirstSourcePoint: usize = 0x1dc;
    pub const m_bSetOrientation: usize = 0x1e0;
}

pub mod C_OP_SetPerChildControlPoint {
    pub const m_nChildGroupID: usize = 0x1c0;
    pub const m_nFirstControlPoint: usize = 0x1c4;
    pub const m_nNumControlPoints: usize = 0x1c8;
    pub const m_nParticleIncrement: usize = 0x1d0;
    pub const m_nFirstSourcePoint: usize = 0x328;
    pub const m_bSetOrientation: usize = 0x480;
    pub const m_nOrientationField: usize = 0x484;
    pub const m_bNumBasedOnParticleCount: usize = 0x488;
}

pub mod C_OP_SetPerChildControlPointFromAttribute {
    pub const m_nChildGroupID: usize = 0x1c0;
    pub const m_nFirstControlPoint: usize = 0x1c4;
    pub const m_nNumControlPoints: usize = 0x1c8;
    pub const m_nParticleIncrement: usize = 0x1cc;
    pub const m_nFirstSourcePoint: usize = 0x1d0;
    pub const m_bNumBasedOnParticleCount: usize = 0x1d4;
    pub const m_nAttributeToRead: usize = 0x1d8;
    pub const m_nCPField: usize = 0x1dc;
}

pub mod C_OP_SetRandomControlPointPosition {
    pub const m_bUseWorldLocation: usize = 0x1d0;
    pub const m_bOrient: usize = 0x1d1;
    pub const m_nCP1: usize = 0x1d4;
    pub const m_nHeadLocation: usize = 0x1d8;
    pub const m_flReRandomRate: usize = 0x1e0;
    pub const m_vecCPMinPos: usize = 0x338;
    pub const m_vecCPMaxPos: usize = 0x344;
    pub const m_flInterpolation: usize = 0x350;
}

pub mod C_OP_SetSimulationRate {
    pub const m_flSimulationScale: usize = 0x1d0;
}

pub mod C_OP_SetSingleControlPointPosition {
    pub const m_bSetOnce: usize = 0x1d0;
    pub const m_nCP1: usize = 0x1d4;
    pub const m_vecCP1Pos: usize = 0x1d8;
    pub const m_transformInput: usize = 0x830;
}

pub mod C_OP_SetToCP {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_vecOffset: usize = 0x1c4;
    pub const m_bOffsetLocal: usize = 0x1d0;
}

pub mod C_OP_SetVariable {
    pub const m_variableReference: usize = 0x1d0;
    pub const m_transformInput: usize = 0x210;
    pub const m_positionOffset: usize = 0x278;
    pub const m_rotationOffset: usize = 0x284;
    pub const m_vecInput: usize = 0x290;
    pub const m_floatInput: usize = 0x8e8;
}

pub mod C_OP_SetVec {
    pub const m_InputValue: usize = 0x1c0;
    pub const m_nOutputField: usize = 0x818;
    pub const m_nSetMethod: usize = 0x81c;
    pub const m_Lerp: usize = 0x820;
    pub const m_bNormalizedOutput: usize = 0x978;
}

pub mod C_OP_SetVectorAttributeToVectorExpression {
    pub const m_nExpression: usize = 0x1c0;
    pub const m_vInput1: usize = 0x1c8;
    pub const m_vInput2: usize = 0x820;
    pub const m_nOutputField: usize = 0xe78;
    pub const m_nSetMethod: usize = 0xe7c;
    pub const m_bNormalizedOutput: usize = 0xe80;
}

pub mod C_OP_SnapshotRigidSkinToBones {
    pub const m_bTransformNormals: usize = 0x1c0;
    pub const m_bTransformRadii: usize = 0x1c1;
    pub const m_nControlPointNumber: usize = 0x1c4;
}

pub mod C_OP_SnapshotSkinToBones {
    pub const m_bTransformNormals: usize = 0x1c0;
    pub const m_bTransformRadii: usize = 0x1c1;
    pub const m_nControlPointNumber: usize = 0x1c4;
    pub const m_flLifeTimeFadeStart: usize = 0x1c8;
    pub const m_flLifeTimeFadeEnd: usize = 0x1cc;
    pub const m_flJumpThreshold: usize = 0x1d0;
    pub const m_flPrevPosScale: usize = 0x1d4;
}

pub mod C_OP_SpringToVectorConstraint {
    pub const m_flRestLength: usize = 0x1c0;
    pub const m_flMinDistance: usize = 0x318;
    pub const m_flMaxDistance: usize = 0x470;
    pub const m_flRestingLength: usize = 0x5c8;
    pub const m_vecAnchorVector: usize = 0x720;
}

pub mod C_OP_StopAfterCPDuration {
    pub const m_flDuration: usize = 0x1d0;
    pub const m_bDestroyImmediately: usize = 0x328;
    pub const m_bPlayEndCap: usize = 0x329;
}

pub mod C_OP_TeleportBeam {
    pub const m_nCPPosition: usize = 0x1c0;
    pub const m_nCPVelocity: usize = 0x1c4;
    pub const m_nCPMisc: usize = 0x1c8;
    pub const m_nCPColor: usize = 0x1cc;
    pub const m_nCPInvalidColor: usize = 0x1d0;
    pub const m_nCPExtraArcData: usize = 0x1d4;
    pub const m_vGravity: usize = 0x1d8;
    pub const m_flArcMaxDuration: usize = 0x1e4;
    pub const m_flSegmentBreak: usize = 0x1e8;
    pub const m_flArcSpeed: usize = 0x1ec;
    pub const m_flAlpha: usize = 0x1f0;
}

pub mod C_OP_TimeVaryingForce {
    pub const m_flStartLerpTime: usize = 0x1d0;
    pub const m_StartingForce: usize = 0x1d4;
    pub const m_flEndLerpTime: usize = 0x1e0;
    pub const m_EndingForce: usize = 0x1e4;
}

pub mod C_OP_TurbulenceForce {
    pub const m_flNoiseCoordScale0: usize = 0x1d0;
    pub const m_flNoiseCoordScale1: usize = 0x1d4;
    pub const m_flNoiseCoordScale2: usize = 0x1d8;
    pub const m_flNoiseCoordScale3: usize = 0x1dc;
    pub const m_vecNoiseAmount0: usize = 0x1e0;
    pub const m_vecNoiseAmount1: usize = 0x1ec;
    pub const m_vecNoiseAmount2: usize = 0x1f8;
    pub const m_vecNoiseAmount3: usize = 0x204;
}

pub mod C_OP_TwistAroundAxis {
    pub const m_fForceAmount: usize = 0x1d0;
    pub const m_TwistAxis: usize = 0x1d4;
    pub const m_bLocalSpace: usize = 0x1e0;
    pub const m_nControlPointNumber: usize = 0x1e4;
}

pub mod C_OP_UpdateLightSource {
    pub const m_vColorTint: usize = 0x1c0;
    pub const m_flBrightnessScale: usize = 0x1c4;
    pub const m_flRadiusScale: usize = 0x1c8;
    pub const m_flMinimumLightingRadius: usize = 0x1cc;
    pub const m_flMaximumLightingRadius: usize = 0x1d0;
    pub const m_flPositionDampingConstant: usize = 0x1d4;
}

pub mod C_OP_VectorFieldSnapshot {
    pub const m_nControlPointNumber: usize = 0x1c0;
    pub const m_nAttributeToWrite: usize = 0x1c4;
    pub const m_nLocalSpaceCP: usize = 0x1c8;
    pub const m_flInterpolation: usize = 0x1d0;
    pub const m_vecScale: usize = 0x328;
    pub const m_flBoundaryDampening: usize = 0x980;
    pub const m_bSetVelocity: usize = 0x984;
    pub const m_bLockToSurface: usize = 0x985;
    pub const m_flGridSpacing: usize = 0x988;
}

pub mod C_OP_VectorNoise {
    pub const m_nFieldOutput: usize = 0x1c0;
    pub const m_vecOutputMin: usize = 0x1c4;
    pub const m_vecOutputMax: usize = 0x1d0;
    pub const m_fl4NoiseScale: usize = 0x1dc;
    pub const m_bAdditive: usize = 0x1e0;
    pub const m_bOffset: usize = 0x1e1;
    pub const m_flNoiseAnimationTimeScale: usize = 0x1e4;
}

pub mod C_OP_VelocityDecay {
    pub const m_flMinVelocity: usize = 0x1c0;
}

pub mod C_OP_VelocityMatchingForce {
    pub const m_flDirScale: usize = 0x1c0;
    pub const m_flSpdScale: usize = 0x1c4;
    pub const m_nCPBroadcast: usize = 0x1c8;
}

pub mod C_OP_WindForce {
    pub const m_vForce: usize = 0x1d0;
}

pub mod C_OP_WorldTraceConstraint {
    pub const m_nCP: usize = 0x1c0;
    pub const m_vecCpOffset: usize = 0x1c4;
    pub const m_nCollisionMode: usize = 0x1d0;
    pub const m_nCollisionModeMin: usize = 0x1d4;
    pub const m_nTraceSet: usize = 0x1d8;
    pub const m_CollisionGroupName: usize = 0x1dc;
    pub const m_bWorldOnly: usize = 0x25c;
    pub const m_bBrushOnly: usize = 0x25d;
    pub const m_bIncludeWater: usize = 0x25e;
    pub const m_nIgnoreCP: usize = 0x260;
    pub const m_flCpMovementTolerance: usize = 0x264;
    pub const m_flRetestRate: usize = 0x268;
    pub const m_flTraceTolerance: usize = 0x26c;
    pub const m_flCollisionConfirmationSpeed: usize = 0x270;
    pub const m_nMaxTracesPerFrame: usize = 0x274;
    pub const m_flRadiusScale: usize = 0x278;
    pub const m_flBounceAmount: usize = 0x3d0;
    pub const m_flSlideAmount: usize = 0x528;
    pub const m_flRandomDirScale: usize = 0x680;
    pub const m_bDecayBounce: usize = 0x7d8;
    pub const m_bKillonContact: usize = 0x7d9;
    pub const m_flMinSpeed: usize = 0x7dc;
    pub const m_bSetNormal: usize = 0x7e0;
    pub const m_nStickOnCollisionField: usize = 0x7e4;
    pub const m_flStopSpeed: usize = 0x7e8;
    pub const m_nEntityStickDataField: usize = 0x940;
    pub const m_nEntityStickNormalField: usize = 0x944;
}

pub mod CollisionGroupContext_t {
    pub const m_nCollisionGroupNumber: usize = 0x0;
}

pub mod ControlPointReference_t {
    pub const m_controlPointNameString: usize = 0x0;
    pub const m_vOffsetFromControlPoint: usize = 0x4;
    pub const m_bOffsetInLocalSpace: usize = 0x10;
}

pub mod FloatInputMaterialVariable_t {
    pub const m_strVariable: usize = 0x0;
    pub const m_flInput: usize = 0x8;
}

pub mod MaterialVariable_t {
    pub const m_strVariable: usize = 0x0;
    pub const m_nVariableField: usize = 0x8;
    pub const m_flScale: usize = 0xc;
}

pub mod ModelReference_t {
    pub const m_model: usize = 0x0;
    pub const m_flRelativeProbabilityOfSpawn: usize = 0x8;
}

pub mod PARTICLE_EHANDLE__ {
    pub const unused: usize = 0x0;
}

pub mod PARTICLE_WORLD_HANDLE__ {
    pub const unused: usize = 0x0;
}

pub mod ParticleAttributeIndex_t {
    pub const m_Value: usize = 0x0;
}

pub mod ParticleChildrenInfo_t {
    pub const m_ChildRef: usize = 0x0;
    pub const m_flDelay: usize = 0x8;
    pub const m_bEndCap: usize = 0xc;
    pub const m_bDisableChild: usize = 0xd;
    pub const m_nDetailLevel: usize = 0x10;
}

pub mod ParticleControlPointConfiguration_t {
    pub const m_name: usize = 0x0;
    pub const m_drivers: usize = 0x8;
    pub const m_previewState: usize = 0x20;
}

pub mod ParticleControlPointDriver_t {
    pub const m_iControlPoint: usize = 0x0;
    pub const m_iAttachType: usize = 0x4;
    pub const m_attachmentName: usize = 0x8;
    pub const m_vecOffset: usize = 0x10;
    pub const m_angOffset: usize = 0x1c;
    pub const m_entityName: usize = 0x28;
}

pub mod ParticleNamedValueConfiguration_t {
    pub const m_ConfigName: usize = 0x0;
    pub const m_ConfigValue: usize = 0x8;
    pub const m_iAttachType: usize = 0x18;
    pub const m_BoundEntityPath: usize = 0x20;
    pub const m_strEntityScope: usize = 0x28;
    pub const m_strAttachmentName: usize = 0x30;
}

pub mod ParticleNamedValueSource_t {
    pub const m_Name: usize = 0x0;
    pub const m_IsPublic: usize = 0x8;
    pub const m_ValueType: usize = 0xc;
    pub const m_DefaultConfig: usize = 0x10;
    pub const m_NamedConfigs: usize = 0x48;
}

pub mod ParticlePreviewBodyGroup_t {
    pub const m_bodyGroupName: usize = 0x0;
    pub const m_nValue: usize = 0x8;
}

pub mod ParticlePreviewState_t {
    pub const m_previewModel: usize = 0x0;
    pub const m_nModSpecificData: usize = 0x8;
    pub const m_groundType: usize = 0xc;
    pub const m_sequenceName: usize = 0x10;
    pub const m_nFireParticleOnSequenceFrame: usize = 0x18;
    pub const m_hitboxSetName: usize = 0x20;
    pub const m_materialGroupName: usize = 0x28;
    pub const m_vecBodyGroups: usize = 0x30;
    pub const m_flPlaybackSpeed: usize = 0x48;
    pub const m_flParticleSimulationRate: usize = 0x4c;
    pub const m_bShouldDrawHitboxes: usize = 0x50;
    pub const m_bShouldDrawAttachments: usize = 0x51;
    pub const m_bShouldDrawAttachmentNames: usize = 0x52;
    pub const m_bShouldDrawControlPointAxes: usize = 0x53;
    pub const m_bAnimationNonLooping: usize = 0x54;
    pub const m_vecPreviewGravity: usize = 0x58;
}

pub mod PointDefinitionWithTimeValues_t {
    pub const m_flTimeDuration: usize = 0x14;
}

pub mod PointDefinition_t {
    pub const m_nControlPoint: usize = 0x0;
    pub const m_bLocalCoords: usize = 0x4;
    pub const m_vOffset: usize = 0x8;
}

pub mod SequenceWeightedList_t {
    pub const m_nSequence: usize = 0x0;
    pub const m_flRelativeWeight: usize = 0x4;
}

pub mod TextureControls_t {
    pub const m_flFinalTextureScaleU: usize = 0x0;
    pub const m_flFinalTextureScaleV: usize = 0x158;
    pub const m_flFinalTextureOffsetU: usize = 0x2b0;
    pub const m_flFinalTextureOffsetV: usize = 0x408;
    pub const m_flFinalTextureUVRotation: usize = 0x560;
    pub const m_flZoomScale: usize = 0x6b8;
    pub const m_flDistortion: usize = 0x810;
    pub const m_bRandomizeOffsets: usize = 0x968;
    pub const m_bClampUVs: usize = 0x969;
    pub const m_nPerParticleBlend: usize = 0x96c;
    pub const m_nPerParticleScale: usize = 0x970;
    pub const m_nPerParticleOffsetU: usize = 0x974;
    pub const m_nPerParticleOffsetV: usize = 0x978;
    pub const m_nPerParticleRotation: usize = 0x97c;
    pub const m_nPerParticleZoom: usize = 0x980;
    pub const m_nPerParticleDistortion: usize = 0x984;
}

pub mod TextureGroup_t {
    pub const m_bEnabled: usize = 0x0;
    pub const m_bReplaceTextureWithGradient: usize = 0x1;
    pub const m_hTexture: usize = 0x8;
    pub const m_Gradient: usize = 0x10;
    pub const m_nTextureType: usize = 0x28;
    pub const m_nTextureChannels: usize = 0x2c;
    pub const m_nTextureBlendMode: usize = 0x30;
    pub const m_flTextureBlend: usize = 0x38;
    pub const m_TextureControls: usize = 0x190;
}

pub mod VecInputMaterialVariable_t {
    pub const m_strVariable: usize = 0x0;
    pub const m_vecInput: usize = 0x8;
}