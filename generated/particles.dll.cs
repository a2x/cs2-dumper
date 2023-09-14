public static class CBaseRendererSource2 {
    public const ulong m_flRadiusScale = 0x200;
    public const ulong m_flAlphaScale = 0x358;
    public const ulong m_flRollScale = 0x4b0;
    public const ulong m_nAlpha2Field = 0x608;
    public const ulong m_vecColorScale = 0x610;
    public const ulong m_nColorBlendType = 0xc68;
    public const ulong m_nShaderType = 0xc6c;
    public const ulong m_strShaderOverride = 0xc70;
    public const ulong m_flCenterXOffset = 0xc78;
    public const ulong m_flCenterYOffset = 0xdd0;
    public const ulong m_flBumpStrength = 0xf28;
    public const ulong m_nCropTextureOverride = 0xf2c;
    public const ulong m_vecTexturesInput = 0xf30;
    public const ulong m_flAnimationRate = 0xf48;
    public const ulong m_nAnimationType = 0xf4c;
    public const ulong m_bAnimateInFPS = 0xf50;
    public const ulong m_flSelfIllumAmount = 0xf58;
    public const ulong m_flDiffuseAmount = 0x10b0;
    public const ulong m_nLightingControlPoint = 0x1208;
    public const ulong m_nSelfIllumPerParticle = 0x120c;
    public const ulong m_nOutputBlendMode = 0x1210;
    public const ulong m_bGammaCorrectVertexColors = 0x1214;
    public const ulong m_bSaturateColorPreAlphaBlend = 0x1215;
    public const ulong m_flAddSelfAmount = 0x1218;
    public const ulong m_flDesaturation = 0x1370;
    public const ulong m_flOverbrightFactor = 0x14c8;
    public const ulong m_nHSVShiftControlPoint = 0x1620;
    public const ulong m_nFogType = 0x1624;
    public const ulong m_flFogAmount = 0x1628;
    public const ulong m_bTintByFOW = 0x1780;
    public const ulong m_bTintByGlobalLight = 0x1781;
    public const ulong m_nPerParticleAlphaReference = 0x1784;
    public const ulong m_nPerParticleAlphaRefWindow = 0x1788;
    public const ulong m_nAlphaReferenceType = 0x178c;
    public const ulong m_flAlphaReferenceSoftness = 0x1790;
    public const ulong m_flSourceAlphaValueToMapToZero = 0x18e8;
    public const ulong m_flSourceAlphaValueToMapToOne = 0x1a40;
    public const ulong m_bRefract = 0x1b98;
    public const ulong m_bRefractSolid = 0x1b99;
    public const ulong m_flRefractAmount = 0x1ba0;
    public const ulong m_nRefractBlurRadius = 0x1cf8;
    public const ulong m_nRefractBlurType = 0x1cfc;
    public const ulong m_bOnlyRenderInEffectsBloomPass = 0x1d00;
    public const ulong m_bOnlyRenderInEffectsWaterPass = 0x1d01;
    public const ulong m_bUseMixedResolutionRendering = 0x1d02;
    public const ulong m_bOnlyRenderInEffecsGameOverlay = 0x1d03;
    public const ulong m_stencilTestID = 0x1d04;
    public const ulong m_bStencilTestExclude = 0x1d84;
    public const ulong m_stencilWriteID = 0x1d85;
    public const ulong m_bWriteStencilOnDepthPass = 0x1e05;
    public const ulong m_bWriteStencilOnDepthFail = 0x1e06;
    public const ulong m_bReverseZBuffering = 0x1e07;
    public const ulong m_bDisableZBuffering = 0x1e08;
    public const ulong m_nFeatheringMode = 0x1e0c;
    public const ulong m_flFeatheringMinDist = 0x1e10;
    public const ulong m_flFeatheringMaxDist = 0x1f68;
    public const ulong m_flFeatheringFilter = 0x20c0;
    public const ulong m_flDepthBias = 0x2218;
    public const ulong m_nSortMethod = 0x221c;
    public const ulong m_bBlendFramesSeq0 = 0x2220;
    public const ulong m_bMaxLuminanceBlendingSequence0 = 0x2221;
}

public static class CBaseTrailRenderer {
    public const ulong m_nOrientationType = 0x2470;
    public const ulong m_nOrientationControlPoint = 0x2474;
    public const ulong m_flMinSize = 0x2478;
    public const ulong m_flMaxSize = 0x247c;
    public const ulong m_flStartFadeSize = 0x2480;
    public const ulong m_flEndFadeSize = 0x25d8;
    public const ulong m_bClampV = 0x2730;
}

public static class CGeneralRandomRotation {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flDegrees = 0x1c4;
    public const ulong m_flDegreesMin = 0x1c8;
    public const ulong m_flDegreesMax = 0x1cc;
    public const ulong m_flRotationRandExponent = 0x1d0;
    public const ulong m_bRandomlyFlipDirection = 0x1d4;
}

public static class CGeneralSpin {
    public const ulong m_nSpinRateDegrees = 0x1c0;
    public const ulong m_nSpinRateMinDegrees = 0x1c4;
    public const ulong m_fSpinRateStopTime = 0x1cc;
}

public static class CNewParticleEffect {
    public const ulong m_pNext = 0x10;
    public const ulong m_pPrev = 0x18;
    public const ulong m_pParticles = 0x20;
    public const ulong m_pDebugName = 0x28;
    public const ulong m_bDontRemove = 0x0;
    public const ulong m_bRemove = 0x0;
    public const ulong m_bNeedsBBoxUpdate = 0x0;
    public const ulong m_bIsFirstFrame = 0x0;
    public const ulong m_bAutoUpdateBBox = 0x0;
    public const ulong m_bAllocated = 0x0;
    public const ulong m_bSimulate = 0x0;
    public const ulong m_bShouldPerformCullCheck = 0x0;
    public const ulong m_bForceNoDraw = 0x0;
    public const ulong m_bShouldSave = 0x0;
    public const ulong m_bDisableAggregation = 0x0;
    public const ulong m_bShouldSimulateDuringGamePaused = 0x0;
    public const ulong m_bShouldCheckFoW = 0x0;
    public const ulong m_vSortOrigin = 0x40;
    public const ulong m_flScale = 0x4c;
    public const ulong m_hOwner = 0x50;
    public const ulong m_pOwningParticleProperty = 0x58;
    public const ulong m_flFreezeTransitionStart = 0x70;
    public const ulong m_flFreezeTransitionDuration = 0x74;
    public const ulong m_flFreezeTransitionOverride = 0x78;
    public const ulong m_bFreezeTransitionActive = 0x7c;
    public const ulong m_bFreezeTargetState = 0x7d;
    public const ulong m_bCanFreeze = 0x7e;
    public const ulong m_LastMin = 0x80;
    public const ulong m_LastMax = 0x8c;
    public const ulong m_nSplitScreenUser = 0x98;
    public const ulong m_vecAggregationCenter = 0x9c;
    public const ulong m_RefCount = 0xc0;
}

public static class CParticleFloatInput {
    public const ulong m_nType = 0x10;
    public const ulong m_nMapType = 0x14;
    public const ulong m_flLiteralValue = 0x18;
    public const ulong m_NamedValue = 0x20;
    public const ulong m_nControlPoint = 0x60;
    public const ulong m_nScalarAttribute = 0x64;
    public const ulong m_nVectorAttribute = 0x68;
    public const ulong m_nVectorComponent = 0x6c;
    public const ulong m_flRandomMin = 0x70;
    public const ulong m_flRandomMax = 0x74;
    public const ulong m_bHasRandomSignFlip = 0x78;
    public const ulong m_nRandomSeed = 0x7c;
    public const ulong m_nRandomMode = 0x80;
    public const ulong m_flLOD0 = 0x88;
    public const ulong m_flLOD1 = 0x8c;
    public const ulong m_flLOD2 = 0x90;
    public const ulong m_flLOD3 = 0x94;
    public const ulong m_nNoiseInputVectorAttribute = 0x98;
    public const ulong m_flNoiseOutputMin = 0x9c;
    public const ulong m_flNoiseOutputMax = 0xa0;
    public const ulong m_flNoiseScale = 0xa4;
    public const ulong m_vecNoiseOffsetRate = 0xa8;
    public const ulong m_flNoiseOffset = 0xb4;
    public const ulong m_nNoiseOctaves = 0xb8;
    public const ulong m_nNoiseTurbulence = 0xbc;
    public const ulong m_nNoiseType = 0xc0;
    public const ulong m_nNoiseModifier = 0xc4;
    public const ulong m_flNoiseTurbulenceScale = 0xc8;
    public const ulong m_flNoiseTurbulenceMix = 0xcc;
    public const ulong m_flNoiseImgPreviewScale = 0xd0;
    public const ulong m_bNoiseImgPreviewLive = 0xd4;
    public const ulong m_flNoCameraFallback = 0xe0;
    public const ulong m_bUseBoundsCenter = 0xe4;
    public const ulong m_nInputMode = 0xe8;
    public const ulong m_flMultFactor = 0xec;
    public const ulong m_flInput0 = 0xf0;
    public const ulong m_flInput1 = 0xf4;
    public const ulong m_flOutput0 = 0xf8;
    public const ulong m_flOutput1 = 0xfc;
    public const ulong m_flNotchedRangeMin = 0x100;
    public const ulong m_flNotchedRangeMax = 0x104;
    public const ulong m_flNotchedOutputOutside = 0x108;
    public const ulong m_flNotchedOutputInside = 0x10c;
    public const ulong m_nBiasType = 0x110;
    public const ulong m_flBiasParameter = 0x114;
    public const ulong m_Curve = 0x118;
}

public static class CParticleFunction {
    public const ulong m_flOpStrength = 0x8;
    public const ulong m_nOpEndCapState = 0x160;
    public const ulong m_flOpStartFadeInTime = 0x164;
    public const ulong m_flOpEndFadeInTime = 0x168;
    public const ulong m_flOpStartFadeOutTime = 0x16c;
    public const ulong m_flOpEndFadeOutTime = 0x170;
    public const ulong m_flOpFadeOscillatePeriod = 0x174;
    public const ulong m_bNormalizeToStopTime = 0x178;
    public const ulong m_flOpTimeOffsetMin = 0x17c;
    public const ulong m_flOpTimeOffsetMax = 0x180;
    public const ulong m_nOpTimeOffsetSeed = 0x184;
    public const ulong m_nOpTimeScaleSeed = 0x188;
    public const ulong m_flOpTimeScaleMin = 0x18c;
    public const ulong m_flOpTimeScaleMax = 0x190;
    public const ulong m_bDisableOperator = 0x196;
    public const ulong m_Notes = 0x198;
}

public static class CParticleFunctionEmitter {
    public const ulong m_nEmitterIndex = 0x1b8;
}

public static class CParticleFunctionInitializer {
    public const ulong m_nAssociatedEmitterIndex = 0x1b8;
}

public static class CParticleFunctionPreEmission {
    public const ulong m_bRunOnce = 0x1c0;
}

public static class CParticleFunctionRenderer {
    public const ulong VisibilityInputs = 0x1b8;
    public const ulong m_bCannotBeRefracted = 0x1fc;
    public const ulong m_bSkipRenderingOnMobile = 0x1fd;
}

public static class CParticleModelInput {
    public const ulong m_nType = 0x10;
    public const ulong m_NamedValue = 0x18;
    public const ulong m_nControlPoint = 0x58;
}

public static class CParticleSystemDefinition {
    public const ulong m_nBehaviorVersion = 0x8;
    public const ulong m_PreEmissionOperators = 0x10;
    public const ulong m_Emitters = 0x28;
    public const ulong m_Initializers = 0x40;
    public const ulong m_Operators = 0x58;
    public const ulong m_ForceGenerators = 0x70;
    public const ulong m_Constraints = 0x88;
    public const ulong m_Renderers = 0xa0;
    public const ulong m_Children = 0xb8;
    public const ulong m_nFirstMultipleOverride_BackwardCompat = 0x178;
    public const ulong m_nInitialParticles = 0x210;
    public const ulong m_nMaxParticles = 0x214;
    public const ulong m_nGroupID = 0x218;
    public const ulong m_BoundingBoxMin = 0x21c;
    public const ulong m_BoundingBoxMax = 0x228;
    public const ulong m_flDepthSortBias = 0x234;
    public const ulong m_nSortOverridePositionCP = 0x238;
    public const ulong m_bInfiniteBounds = 0x23c;
    public const ulong m_bEnableNamedValues = 0x23d;
    public const ulong m_NamedValueDomain = 0x240;
    public const ulong m_NamedValueLocals = 0x248;
    public const ulong m_ConstantColor = 0x260;
    public const ulong m_ConstantNormal = 0x264;
    public const ulong m_flConstantRadius = 0x270;
    public const ulong m_flConstantRotation = 0x274;
    public const ulong m_flConstantRotationSpeed = 0x278;
    public const ulong m_flConstantLifespan = 0x27c;
    public const ulong m_nConstantSequenceNumber = 0x280;
    public const ulong m_nConstantSequenceNumber1 = 0x284;
    public const ulong m_nSnapshotControlPoint = 0x288;
    public const ulong m_hSnapshot = 0x290;
    public const ulong m_pszCullReplacementName = 0x298;
    public const ulong m_flCullRadius = 0x2a0;
    public const ulong m_flCullFillCost = 0x2a4;
    public const ulong m_nCullControlPoint = 0x2a8;
    public const ulong m_hFallback = 0x2b0;
    public const ulong m_nFallbackMaxCount = 0x2b8;
    public const ulong m_hLowViolenceDef = 0x2c0;
    public const ulong m_hReferenceReplacement = 0x2c8;
    public const ulong m_flPreSimulationTime = 0x2d0;
    public const ulong m_flStopSimulationAfterTime = 0x2d4;
    public const ulong m_flMaximumTimeStep = 0x2d8;
    public const ulong m_flMaximumSimTime = 0x2dc;
    public const ulong m_flMinimumSimTime = 0x2e0;
    public const ulong m_flMinimumTimeStep = 0x2e4;
    public const ulong m_nMinimumFrames = 0x2e8;
    public const ulong m_nMinCPULevel = 0x2ec;
    public const ulong m_nMinGPULevel = 0x2f0;
    public const ulong m_flNoDrawTimeToGoToSleep = 0x2f4;
    public const ulong m_flMaxDrawDistance = 0x2f8;
    public const ulong m_flStartFadeDistance = 0x2fc;
    public const ulong m_flMaxCreationDistance = 0x300;
    public const ulong m_nAggregationMinAvailableParticles = 0x304;
    public const ulong m_flAggregateRadius = 0x308;
    public const ulong m_bShouldBatch = 0x30c;
    public const ulong m_bShouldHitboxesFallbackToRenderBounds = 0x30d;
    public const ulong m_bShouldHitboxesFallbackToSnapshot = 0x30e;
    public const ulong m_nViewModelEffect = 0x310;
    public const ulong m_bScreenSpaceEffect = 0x314;
    public const ulong m_pszTargetLayerID = 0x318;
    public const ulong m_nSkipRenderControlPoint = 0x320;
    public const ulong m_nAllowRenderControlPoint = 0x324;
    public const ulong m_bShouldSort = 0x328;
    public const ulong m_controlPointConfigurations = 0x370;
}

public static class CParticleTransformInput {
    public const ulong m_nType = 0x10;
    public const ulong m_NamedValue = 0x18;
    public const ulong m_bFollowNamedValue = 0x58;
    public const ulong m_bSupportsDisabled = 0x59;
    public const ulong m_bUseOrientation = 0x5a;
    public const ulong m_nControlPoint = 0x5c;
    public const ulong m_nControlPointRangeMax = 0x60;
    public const ulong m_flEndCPGrowthTime = 0x64;
}

public static class CParticleVariableRef {
    public const ulong m_variableName = 0x0;
    public const ulong m_variableType = 0x38;
}

public static class CParticleVecInput {
    public const ulong m_nType = 0x10;
    public const ulong m_vLiteralValue = 0x14;
    public const ulong m_LiteralColor = 0x20;
    public const ulong m_NamedValue = 0x28;
    public const ulong m_bFollowNamedValue = 0x68;
    public const ulong m_nVectorAttribute = 0x6c;
    public const ulong m_vVectorAttributeScale = 0x70;
    public const ulong m_nControlPoint = 0x7c;
    public const ulong m_nDeltaControlPoint = 0x80;
    public const ulong m_vCPValueScale = 0x84;
    public const ulong m_vCPRelativePosition = 0x90;
    public const ulong m_vCPRelativeDir = 0x9c;
    public const ulong m_FloatComponentX = 0xa8;
    public const ulong m_FloatComponentY = 0x200;
    public const ulong m_FloatComponentZ = 0x358;
    public const ulong m_FloatInterp = 0x4b0;
    public const ulong m_flInterpInput0 = 0x608;
    public const ulong m_flInterpInput1 = 0x60c;
    public const ulong m_vInterpOutput0 = 0x610;
    public const ulong m_vInterpOutput1 = 0x61c;
    public const ulong m_Gradient = 0x628;
    public const ulong m_vRandomMin = 0x640;
    public const ulong m_vRandomMax = 0x64c;
}

public static class CParticleVisibilityInputs {
    public const ulong m_flCameraBias = 0x0;
    public const ulong m_nCPin = 0x4;
    public const ulong m_flProxyRadius = 0x8;
    public const ulong m_flInputMin = 0xc;
    public const ulong m_flInputMax = 0x10;
    public const ulong m_flNoPixelVisibilityFallback = 0x14;
    public const ulong m_flDistanceInputMin = 0x18;
    public const ulong m_flDistanceInputMax = 0x1c;
    public const ulong m_flDotInputMin = 0x20;
    public const ulong m_flDotInputMax = 0x24;
    public const ulong m_bDotCPAngles = 0x28;
    public const ulong m_bDotCameraAngles = 0x29;
    public const ulong m_flAlphaScaleMin = 0x2c;
    public const ulong m_flAlphaScaleMax = 0x30;
    public const ulong m_flRadiusScaleMin = 0x34;
    public const ulong m_flRadiusScaleMax = 0x38;
    public const ulong m_flRadiusScaleFOVBase = 0x3c;
    public const ulong m_bRightEye = 0x40;
}

public static class CPathParameters {
    public const ulong m_nStartControlPointNumber = 0x0;
    public const ulong m_nEndControlPointNumber = 0x4;
    public const ulong m_nBulgeControl = 0x8;
    public const ulong m_flBulge = 0xc;
    public const ulong m_flMidPoint = 0x10;
    public const ulong m_vStartPointOffset = 0x14;
    public const ulong m_vMidPointOffset = 0x20;
    public const ulong m_vEndOffset = 0x2c;
}

public static class CRandomNumberGeneratorParameters {
    public const ulong m_bDistributeEvenly = 0x0;
    public const ulong m_nSeed = 0x4;
}

public static class C_INIT_AddVectorToVector {
    public const ulong m_vecScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1cc;
    public const ulong m_nFieldInput = 0x1d0;
    public const ulong m_vOffsetMin = 0x1d4;
    public const ulong m_vOffsetMax = 0x1e0;
    public const ulong m_randomnessParameters = 0x1ec;
}

public static class C_INIT_AgeNoise {
    public const ulong m_bAbsVal = 0x1c0;
    public const ulong m_bAbsValInv = 0x1c1;
    public const ulong m_flOffset = 0x1c4;
    public const ulong m_flAgeMin = 0x1c8;
    public const ulong m_flAgeMax = 0x1cc;
    public const ulong m_flNoiseScale = 0x1d0;
    public const ulong m_flNoiseScaleLoc = 0x1d4;
    public const ulong m_vecOffsetLoc = 0x1d8;
}

public static class C_INIT_ChaoticAttractor {
    public const ulong m_flAParm = 0x1c0;
    public const ulong m_flBParm = 0x1c4;
    public const ulong m_flCParm = 0x1c8;
    public const ulong m_flDParm = 0x1cc;
    public const ulong m_flScale = 0x1d0;
    public const ulong m_flSpeedMin = 0x1d4;
    public const ulong m_flSpeedMax = 0x1d8;
    public const ulong m_nBaseCP = 0x1dc;
    public const ulong m_bUniformSpeed = 0x1e0;
}

public static class C_INIT_ColorLitPerParticle {
    public const ulong m_ColorMin = 0x1d8;
    public const ulong m_ColorMax = 0x1dc;
    public const ulong m_TintMin = 0x1e0;
    public const ulong m_TintMax = 0x1e4;
    public const ulong m_flTintPerc = 0x1e8;
    public const ulong m_nTintBlendMode = 0x1ec;
    public const ulong m_flLightAmplification = 0x1f0;
}

public static class C_INIT_CreateAlongPath {
    public const ulong m_fMaxDistance = 0x1c0;
    public const ulong m_PathParams = 0x1d0;
    public const ulong m_bUseRandomCPs = 0x210;
    public const ulong m_vEndOffset = 0x214;
    public const ulong m_bSaveOffset = 0x220;
}

public static class C_INIT_CreateFromCPs {
    public const ulong m_nIncrement = 0x1c0;
    public const ulong m_nMinCP = 0x1c4;
    public const ulong m_nMaxCP = 0x1c8;
    public const ulong m_nDynamicCPCount = 0x1d0;
}

public static class C_INIT_CreateFromParentParticles {
    public const ulong m_flVelocityScale = 0x1c0;
    public const ulong m_flIncrement = 0x1c4;
    public const ulong m_bRandomDistribution = 0x1c8;
    public const ulong m_nRandomSeed = 0x1cc;
    public const ulong m_bSubFrame = 0x1d0;
}

public static class C_INIT_CreateFromPlaneCache {
    public const ulong m_vecOffsetMin = 0x1c0;
    public const ulong m_vecOffsetMax = 0x1cc;
    public const ulong m_bUseNormal = 0x1d9;
}

public static class C_INIT_CreateInEpitrochoid {
    public const ulong m_nComponent1 = 0x1c0;
    public const ulong m_nComponent2 = 0x1c4;
    public const ulong m_TransformInput = 0x1c8;
    public const ulong m_flParticleDensity = 0x230;
    public const ulong m_flOffset = 0x388;
    public const ulong m_flRadius1 = 0x4e0;
    public const ulong m_flRadius2 = 0x638;
    public const ulong m_bUseCount = 0x790;
    public const ulong m_bUseLocalCoords = 0x791;
    public const ulong m_bOffsetExistingPos = 0x792;
}

public static class C_INIT_CreateOnGrid {
    public const ulong m_nXCount = 0x1c0;
    public const ulong m_nYCount = 0x318;
    public const ulong m_nZCount = 0x470;
    public const ulong m_nXSpacing = 0x5c8;
    public const ulong m_nYSpacing = 0x720;
    public const ulong m_nZSpacing = 0x878;
    public const ulong m_nControlPointNumber = 0x9d0;
    public const ulong m_bLocalSpace = 0x9d4;
    public const ulong m_bCenter = 0x9d5;
    public const ulong m_bHollow = 0x9d6;
}

public static class C_INIT_CreateOnModel {
    public const ulong m_modelInput = 0x1c0;
    public const ulong m_transformInput = 0x220;
    public const ulong m_nForceInModel = 0x288;
    public const ulong m_nDesiredHitbox = 0x28c;
    public const ulong m_nHitboxValueFromControlPointIndex = 0x290;
    public const ulong m_vecHitBoxScale = 0x298;
    public const ulong m_flBoneVelocity = 0x8f0;
    public const ulong m_flMaxBoneVelocity = 0x8f4;
    public const ulong m_vecDirectionBias = 0x8f8;
    public const ulong m_HitboxSetName = 0xf50;
    public const ulong m_bLocalCoords = 0xfd0;
    public const ulong m_bUseBones = 0xfd1;
    public const ulong m_flShellSize = 0xfd8;
}

public static class C_INIT_CreateOnModelAtHeight {
    public const ulong m_bUseBones = 0x1c0;
    public const ulong m_bForceZ = 0x1c1;
    public const ulong m_nControlPointNumber = 0x1c4;
    public const ulong m_nHeightCP = 0x1c8;
    public const ulong m_bUseWaterHeight = 0x1cc;
    public const ulong m_flDesiredHeight = 0x1d0;
    public const ulong m_vecHitBoxScale = 0x328;
    public const ulong m_vecDirectionBias = 0x980;
    public const ulong m_nBiasType = 0xfd8;
    public const ulong m_bLocalCoords = 0xfdc;
    public const ulong m_bPreferMovingBoxes = 0xfdd;
    public const ulong m_HitboxSetName = 0xfde;
    public const ulong m_flHitboxVelocityScale = 0x1060;
    public const ulong m_flMaxBoneVelocity = 0x11b8;
}

public static class C_INIT_CreateParticleImpulse {
    public const ulong m_InputRadius = 0x1c0;
    public const ulong m_InputMagnitude = 0x318;
    public const ulong m_nFalloffFunction = 0x470;
    public const ulong m_InputFalloffExp = 0x478;
    public const ulong m_nImpulseType = 0x5d0;
}

public static class C_INIT_CreatePhyllotaxis {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nScaleCP = 0x1c4;
    public const ulong m_nComponent = 0x1c8;
    public const ulong m_fRadCentCore = 0x1cc;
    public const ulong m_fRadPerPoint = 0x1d0;
    public const ulong m_fRadPerPointTo = 0x1d4;
    public const ulong m_fpointAngle = 0x1d8;
    public const ulong m_fsizeOverall = 0x1dc;
    public const ulong m_fRadBias = 0x1e0;
    public const ulong m_fMinRad = 0x1e4;
    public const ulong m_fDistBias = 0x1e8;
    public const ulong m_bUseLocalCoords = 0x1ec;
    public const ulong m_bUseWithContEmit = 0x1ed;
    public const ulong m_bUseOrigRadius = 0x1ee;
}

public static class C_INIT_CreateSequentialPath {
    public const ulong m_fMaxDistance = 0x1c0;
    public const ulong m_flNumToAssign = 0x1c4;
    public const ulong m_bLoop = 0x1c8;
    public const ulong m_bCPPairs = 0x1c9;
    public const ulong m_bSaveOffset = 0x1ca;
    public const ulong m_PathParams = 0x1d0;
}

public static class C_INIT_CreateSequentialPathV2 {
    public const ulong m_fMaxDistance = 0x1c0;
    public const ulong m_flNumToAssign = 0x318;
    public const ulong m_bLoop = 0x470;
    public const ulong m_bCPPairs = 0x471;
    public const ulong m_bSaveOffset = 0x472;
    public const ulong m_PathParams = 0x480;
}

public static class C_INIT_CreateSpiralSphere {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nOverrideCP = 0x1c4;
    public const ulong m_nDensity = 0x1c8;
    public const ulong m_flInitialRadius = 0x1cc;
    public const ulong m_flInitialSpeedMin = 0x1d0;
    public const ulong m_flInitialSpeedMax = 0x1d4;
    public const ulong m_bUseParticleCount = 0x1d8;
}

public static class C_INIT_CreateWithinBox {
    public const ulong m_vecMin = 0x1c0;
    public const ulong m_vecMax = 0x818;
    public const ulong m_nControlPointNumber = 0xe70;
    public const ulong m_bLocalSpace = 0xe74;
    public const ulong m_randomnessParameters = 0xe78;
}

public static class C_INIT_CreateWithinSphereTransform {
    public const ulong m_fRadiusMin = 0x1c0;
    public const ulong m_fRadiusMax = 0x318;
    public const ulong m_vecDistanceBias = 0x470;
    public const ulong m_vecDistanceBiasAbs = 0xac8;
    public const ulong m_TransformInput = 0xad8;
    public const ulong m_fSpeedMin = 0xb40;
    public const ulong m_fSpeedMax = 0xc98;
    public const ulong m_fSpeedRandExp = 0xdf0;
    public const ulong m_bLocalCoords = 0xdf4;
    public const ulong m_flEndCPGrowthTime = 0xdf8;
    public const ulong m_LocalCoordinateSystemSpeedMin = 0xe00;
    public const ulong m_LocalCoordinateSystemSpeedMax = 0x1458;
    public const ulong m_nFieldOutput = 0x1ab0;
    public const ulong m_nFieldVelocity = 0x1ab4;
}

public static class C_INIT_CreationNoise {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_bAbsVal = 0x1c4;
    public const ulong m_bAbsValInv = 0x1c5;
    public const ulong m_flOffset = 0x1c8;
    public const ulong m_flOutputMin = 0x1cc;
    public const ulong m_flOutputMax = 0x1d0;
    public const ulong m_flNoiseScale = 0x1d4;
    public const ulong m_flNoiseScaleLoc = 0x1d8;
    public const ulong m_vecOffsetLoc = 0x1dc;
    public const ulong m_flWorldTimeScale = 0x1e8;
}

public static class C_INIT_DistanceCull {
    public const ulong m_nControlPoint = 0x1c0;
    public const ulong m_flDistance = 0x1c8;
    public const ulong m_bCullInside = 0x320;
}

public static class C_INIT_DistanceToCPInit {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x320;
    public const ulong m_flOutputMin = 0x478;
    public const ulong m_flOutputMax = 0x5d0;
    public const ulong m_nStartCP = 0x728;
    public const ulong m_bLOS = 0x72c;
    public const ulong m_CollisionGroupName = 0x72d;
    public const ulong m_nTraceSet = 0x7b0;
    public const ulong m_flMaxTraceLength = 0x7b8;
    public const ulong m_flLOSScale = 0x910;
    public const ulong m_nSetMethod = 0x914;
    public const ulong m_bActiveRange = 0x918;
    public const ulong m_vecDistanceScale = 0x91c;
    public const ulong m_flRemapBias = 0x928;
}

public static class C_INIT_DistanceToNeighborCull {
    public const ulong m_flDistance = 0x1c0;
}

public static class C_INIT_GlobalScale {
    public const ulong m_flScale = 0x1c0;
    public const ulong m_nScaleControlPointNumber = 0x1c4;
    public const ulong m_nControlPointNumber = 0x1c8;
    public const ulong m_bScaleRadius = 0x1cc;
    public const ulong m_bScalePosition = 0x1cd;
    public const ulong m_bScaleVelocity = 0x1ce;
}

public static class C_INIT_InheritFromParentParticles {
    public const ulong m_flScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nIncrement = 0x1c8;
    public const ulong m_bRandomDistribution = 0x1cc;
    public const ulong m_nRandomSeed = 0x1d0;
}

public static class C_INIT_InheritVelocity {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_flVelocityScale = 0x1c4;
}

public static class C_INIT_InitFloat {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x318;
    public const ulong m_nSetMethod = 0x31c;
    public const ulong m_InputStrength = 0x320;
}

public static class C_INIT_InitFloatCollection {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x318;
}

public static class C_INIT_InitFromCPSnapshot {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nAttributeToRead = 0x1c4;
    public const ulong m_nAttributeToWrite = 0x1c8;
    public const ulong m_nLocalSpaceCP = 0x1cc;
    public const ulong m_bRandom = 0x1d0;
    public const ulong m_bReverse = 0x1d1;
    public const ulong m_nSnapShotIncrement = 0x1d8;
    public const ulong m_nManualSnapshotIndex = 0x330;
    public const ulong m_nRandomSeed = 0x488;
    public const ulong m_bLocalSpaceAngles = 0x48c;
}

public static class C_INIT_InitFromParentKilled {
    public const ulong m_nAttributeToCopy = 0x1c0;
}

public static class C_INIT_InitFromVectorFieldSnapshot {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nLocalSpaceCP = 0x1c4;
    public const ulong m_nWeightUpdateCP = 0x1c8;
    public const ulong m_bUseVerticalVelocity = 0x1cc;
    public const ulong m_vecScale = 0x1d0;
}

public static class C_INIT_InitSkinnedPositionFromCPSnapshot {
    public const ulong m_nSnapshotControlPointNumber = 0x1c0;
    public const ulong m_nControlPointNumber = 0x1c4;
    public const ulong m_bRandom = 0x1c8;
    public const ulong m_nRandomSeed = 0x1cc;
    public const ulong m_bRigid = 0x1d0;
    public const ulong m_bSetNormal = 0x1d1;
    public const ulong m_bIgnoreDt = 0x1d2;
    public const ulong m_flMinNormalVelocity = 0x1d4;
    public const ulong m_flMaxNormalVelocity = 0x1d8;
    public const ulong m_flIncrement = 0x1dc;
    public const ulong m_nFullLoopIncrement = 0x1e0;
    public const ulong m_nSnapShotStartPoint = 0x1e4;
    public const ulong m_flBoneVelocity = 0x1e8;
    public const ulong m_flBoneVelocityMax = 0x1ec;
    public const ulong m_bCopyColor = 0x1f0;
    public const ulong m_bCopyAlpha = 0x1f1;
    public const ulong m_bSetRadius = 0x1f2;
}

public static class C_INIT_InitVec {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x818;
    public const ulong m_nSetMethod = 0x81c;
    public const ulong m_bNormalizedOutput = 0x820;
    public const ulong m_bWritePreviousPosition = 0x821;
}

public static class C_INIT_InitVecCollection {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x818;
}

public static class C_INIT_InitialRepulsionVelocity {
    public const ulong m_CollisionGroupName = 0x1c0;
    public const ulong m_nTraceSet = 0x240;
    public const ulong m_vecOutputMin = 0x244;
    public const ulong m_vecOutputMax = 0x250;
    public const ulong m_nControlPointNumber = 0x25c;
    public const ulong m_bPerParticle = 0x260;
    public const ulong m_bTranslate = 0x261;
    public const ulong m_bProportional = 0x262;
    public const ulong m_flTraceLength = 0x264;
    public const ulong m_bPerParticleTR = 0x268;
    public const ulong m_bInherit = 0x269;
    public const ulong m_nChildCP = 0x26c;
    public const ulong m_nChildGroupID = 0x270;
}

public static class C_INIT_InitialSequenceFromModel {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nFieldOutputAnim = 0x1c8;
    public const ulong m_flInputMin = 0x1cc;
    public const ulong m_flInputMax = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_nSetMethod = 0x1dc;
}

public static class C_INIT_InitialVelocityFromHitbox {
    public const ulong m_flVelocityMin = 0x1c0;
    public const ulong m_flVelocityMax = 0x1c4;
    public const ulong m_nControlPointNumber = 0x1c8;
    public const ulong m_HitboxSetName = 0x1cc;
    public const ulong m_bUseBones = 0x24c;
}

public static class C_INIT_InitialVelocityNoise {
    public const ulong m_vecAbsVal = 0x1c0;
    public const ulong m_vecAbsValInv = 0x1cc;
    public const ulong m_vecOffsetLoc = 0x1d8;
    public const ulong m_flOffset = 0x830;
    public const ulong m_vecOutputMin = 0x988;
    public const ulong m_vecOutputMax = 0xfe0;
    public const ulong m_flNoiseScale = 0x1638;
    public const ulong m_flNoiseScaleLoc = 0x1790;
    public const ulong m_TransformInput = 0x18e8;
    public const ulong m_bIgnoreDt = 0x1950;
}

public static class C_INIT_LifespanFromVelocity {
    public const ulong m_vecComponentScale = 0x1c0;
    public const ulong m_flTraceOffset = 0x1cc;
    public const ulong m_flMaxTraceLength = 0x1d0;
    public const ulong m_flTraceTolerance = 0x1d4;
    public const ulong m_nMaxPlanes = 0x1d8;
    public const ulong m_CollisionGroupName = 0x1e0;
    public const ulong m_nTraceSet = 0x260;
    public const ulong m_bIncludeWater = 0x270;
}

public static class C_INIT_ModelCull {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_bBoundBox = 0x1c4;
    public const ulong m_bCullOutside = 0x1c5;
    public const ulong m_bUseBones = 0x1c6;
    public const ulong m_HitboxSetName = 0x1c7;
}

public static class C_INIT_MoveBetweenPoints {
    public const ulong m_flSpeedMin = 0x1c0;
    public const ulong m_flSpeedMax = 0x318;
    public const ulong m_flEndSpread = 0x470;
    public const ulong m_flStartOffset = 0x5c8;
    public const ulong m_flEndOffset = 0x720;
    public const ulong m_nEndControlPointNumber = 0x878;
    public const ulong m_bTrailBias = 0x87c;
}

public static class C_INIT_NormalAlignToCP {
    public const ulong m_transformInput = 0x1c0;
    public const ulong m_nControlPointAxis = 0x228;
}

public static class C_INIT_NormalOffset {
    public const ulong m_OffsetMin = 0x1c0;
    public const ulong m_OffsetMax = 0x1cc;
    public const ulong m_nControlPointNumber = 0x1d8;
    public const ulong m_bLocalCoords = 0x1dc;
    public const ulong m_bNormalize = 0x1dd;
}

public static class C_INIT_OffsetVectorToVector {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_vecOutputMin = 0x1c8;
    public const ulong m_vecOutputMax = 0x1d4;
    public const ulong m_randomnessParameters = 0x1e0;
}

public static class C_INIT_Orient2DRelToCP {
    public const ulong m_nCP = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flRotOffset = 0x1c8;
}

public static class C_INIT_PlaneCull {
    public const ulong m_nControlPoint = 0x1c0;
    public const ulong m_flDistance = 0x1c8;
    public const ulong m_bCullInside = 0x320;
}

public static class C_INIT_PointList {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_pointList = 0x1c8;
    public const ulong m_bPlaceAlongPath = 0x1e0;
    public const ulong m_bClosedLoop = 0x1e1;
    public const ulong m_nNumPointsAlongPath = 0x1e4;
}

public static class C_INIT_PositionOffset {
    public const ulong m_OffsetMin = 0x1c0;
    public const ulong m_OffsetMax = 0x818;
    public const ulong m_TransformInput = 0xe70;
    public const ulong m_bLocalCoords = 0xed8;
    public const ulong m_bProportional = 0xed9;
    public const ulong m_randomnessParameters = 0xedc;
}

public static class C_INIT_PositionOffsetToCP {
    public const ulong m_nControlPointNumberStart = 0x1c0;
    public const ulong m_nControlPointNumberEnd = 0x1c4;
    public const ulong m_bLocalCoords = 0x1c8;
}

public static class C_INIT_PositionPlaceOnGround {
    public const ulong m_flOffset = 0x1c0;
    public const ulong m_flMaxTraceLength = 0x318;
    public const ulong m_CollisionGroupName = 0x470;
    public const ulong m_nTraceSet = 0x4f0;
    public const ulong m_nTraceMissBehavior = 0x500;
    public const ulong m_bIncludeWater = 0x504;
    public const ulong m_bSetNormal = 0x505;
    public const ulong m_bSetPXYZOnly = 0x506;
    public const ulong m_bTraceAlongNormal = 0x507;
    public const ulong m_bOffsetonColOnly = 0x508;
    public const ulong m_flOffsetByRadiusFactor = 0x50c;
    public const ulong m_nPreserveOffsetCP = 0x510;
    public const ulong m_nIgnoreCP = 0x514;
}

public static class C_INIT_PositionWarp {
    public const ulong m_vecWarpMin = 0x1c0;
    public const ulong m_vecWarpMax = 0x818;
    public const ulong m_nScaleControlPointNumber = 0xe70;
    public const ulong m_nControlPointNumber = 0xe74;
    public const ulong m_nRadiusComponent = 0xe78;
    public const ulong m_flWarpTime = 0xe7c;
    public const ulong m_flWarpStartTime = 0xe80;
    public const ulong m_flPrevPosScale = 0xe84;
    public const ulong m_bInvertWarp = 0xe88;
    public const ulong m_bUseCount = 0xe89;
}

public static class C_INIT_PositionWarpScalar {
    public const ulong m_vecWarpMin = 0x1c0;
    public const ulong m_vecWarpMax = 0x1cc;
    public const ulong m_InputValue = 0x1d8;
    public const ulong m_flPrevPosScale = 0x330;
    public const ulong m_nScaleControlPointNumber = 0x334;
    public const ulong m_nControlPointNumber = 0x338;
}

public static class C_INIT_QuantizeFloat {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x318;
}

public static class C_INIT_RadiusFromCPObject {
    public const ulong m_nControlPoint = 0x1c0;
}

public static class C_INIT_RandomAlpha {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nAlphaMin = 0x1c4;
    public const ulong m_nAlphaMax = 0x1c8;
    public const ulong m_flAlphaRandExponent = 0x1d4;
}

public static class C_INIT_RandomAlphaWindowThreshold {
    public const ulong m_flMin = 0x1c0;
    public const ulong m_flMax = 0x1c4;
    public const ulong m_flExponent = 0x1c8;
}

public static class C_INIT_RandomColor {
    public const ulong m_ColorMin = 0x1dc;
    public const ulong m_ColorMax = 0x1e0;
    public const ulong m_TintMin = 0x1e4;
    public const ulong m_TintMax = 0x1e8;
    public const ulong m_flTintPerc = 0x1ec;
    public const ulong m_flUpdateThreshold = 0x1f0;
    public const ulong m_nTintCP = 0x1f4;
    public const ulong m_nFieldOutput = 0x1f8;
    public const ulong m_nTintBlendMode = 0x1fc;
    public const ulong m_flLightAmplification = 0x200;
}

public static class C_INIT_RandomLifeTime {
    public const ulong m_fLifetimeMin = 0x1c0;
    public const ulong m_fLifetimeMax = 0x1c4;
    public const ulong m_fLifetimeRandExponent = 0x1c8;
}

public static class C_INIT_RandomModelSequence {
    public const ulong m_ActivityName = 0x1c0;
    public const ulong m_SequenceName = 0x2c0;
    public const ulong m_hModel = 0x3c0;
}

public static class C_INIT_RandomNamedModelElement {
    public const ulong m_hModel = 0x1c0;
    public const ulong m_names = 0x1c8;
    public const ulong m_bShuffle = 0x1e0;
    public const ulong m_bLinear = 0x1e1;
    public const ulong m_bModelFromRenderer = 0x1e2;
    public const ulong m_nFieldOutput = 0x1e4;
}

public static class C_INIT_RandomRadius {
    public const ulong m_flRadiusMin = 0x1c0;
    public const ulong m_flRadiusMax = 0x1c4;
    public const ulong m_flRadiusRandExponent = 0x1c8;
}

public static class C_INIT_RandomScalar {
    public const ulong m_flMin = 0x1c0;
    public const ulong m_flMax = 0x1c4;
    public const ulong m_flExponent = 0x1c8;
    public const ulong m_nFieldOutput = 0x1cc;
}

public static class C_INIT_RandomSecondSequence {
    public const ulong m_nSequenceMin = 0x1c0;
    public const ulong m_nSequenceMax = 0x1c4;
}

public static class C_INIT_RandomSequence {
    public const ulong m_nSequenceMin = 0x1c0;
    public const ulong m_nSequenceMax = 0x1c4;
    public const ulong m_bShuffle = 0x1c8;
    public const ulong m_bLinear = 0x1c9;
    public const ulong m_WeightedList = 0x1d0;
}

public static class C_INIT_RandomTrailLength {
    public const ulong m_flMinLength = 0x1c0;
    public const ulong m_flMaxLength = 0x1c4;
    public const ulong m_flLengthRandExponent = 0x1c8;
}

public static class C_INIT_RandomVector {
    public const ulong m_vecMin = 0x1c0;
    public const ulong m_vecMax = 0x1cc;
    public const ulong m_nFieldOutput = 0x1d8;
    public const ulong m_randomnessParameters = 0x1dc;
}

public static class C_INIT_RandomVectorComponent {
    public const ulong m_flMin = 0x1c0;
    public const ulong m_flMax = 0x1c4;
    public const ulong m_nFieldOutput = 0x1c8;
    public const ulong m_nComponent = 0x1cc;
}

public static class C_INIT_RandomYawFlip {
    public const ulong m_flPercent = 0x1c0;
}

public static class C_INIT_RemapCPtoScalar {
    public const ulong m_nCPInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nField = 0x1c8;
    public const ulong m_flInputMin = 0x1cc;
    public const ulong m_flInputMax = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_flStartTime = 0x1dc;
    public const ulong m_flEndTime = 0x1e0;
    public const ulong m_nSetMethod = 0x1e4;
    public const ulong m_flRemapBias = 0x1e8;
}

public static class C_INIT_RemapInitialDirectionToTransformToVector {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x228;
    public const ulong m_flScale = 0x22c;
    public const ulong m_flOffsetRot = 0x230;
    public const ulong m_vecOffsetAxis = 0x234;
    public const ulong m_bNormalize = 0x240;
}

public static class C_INIT_RemapInitialTransformDirectionToRotation {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x228;
    public const ulong m_flOffsetRot = 0x22c;
    public const ulong m_nComponent = 0x230;
}

public static class C_INIT_RemapInitialVisibilityScalar {
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_flOutputMin = 0x1d0;
    public const ulong m_flOutputMax = 0x1d4;
}

public static class C_INIT_RemapNamedModelElementToScalar {
    public const ulong m_hModel = 0x1c0;
    public const ulong m_names = 0x1c8;
    public const ulong m_values = 0x1e0;
    public const ulong m_nFieldInput = 0x1f8;
    public const ulong m_nFieldOutput = 0x1fc;
    public const ulong m_nSetMethod = 0x200;
    public const ulong m_bModelFromRenderer = 0x204;
}

public static class C_INIT_RemapParticleCountToNamedModelElementScalar {
    public const ulong m_hModel = 0x1f0;
    public const ulong m_outputMinName = 0x1f8;
    public const ulong m_outputMaxName = 0x200;
    public const ulong m_bModelFromRenderer = 0x208;
}

public static class C_INIT_RemapParticleCountToScalar {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nInputMin = 0x1c4;
    public const ulong m_nInputMax = 0x1c8;
    public const ulong m_nScaleControlPoint = 0x1cc;
    public const ulong m_nScaleControlPointField = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_nSetMethod = 0x1dc;
    public const ulong m_bActiveRange = 0x1e0;
    public const ulong m_bInvert = 0x1e1;
    public const ulong m_bWrap = 0x1e2;
    public const ulong m_flRemapBias = 0x1e4;
}

public static class C_INIT_RemapQAnglesToRotation {
    public const ulong m_TransformInput = 0x1c0;
}

public static class C_INIT_RemapScalar {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_flOutputMin = 0x1d0;
    public const ulong m_flOutputMax = 0x1d4;
    public const ulong m_flStartTime = 0x1d8;
    public const ulong m_flEndTime = 0x1dc;
    public const ulong m_nSetMethod = 0x1e0;
    public const ulong m_bActiveRange = 0x1e4;
    public const ulong m_flRemapBias = 0x1e8;
}

public static class C_INIT_RemapScalarToVector {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_vecOutputMin = 0x1d0;
    public const ulong m_vecOutputMax = 0x1dc;
    public const ulong m_flStartTime = 0x1e8;
    public const ulong m_flEndTime = 0x1ec;
    public const ulong m_nSetMethod = 0x1f0;
    public const ulong m_nControlPointNumber = 0x1f4;
    public const ulong m_bLocalCoords = 0x1f8;
    public const ulong m_flRemapBias = 0x1fc;
}

public static class C_INIT_RemapSpeedToScalar {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nControlPointNumber = 0x1c4;
    public const ulong m_flStartTime = 0x1c8;
    public const ulong m_flEndTime = 0x1cc;
    public const ulong m_flInputMin = 0x1d0;
    public const ulong m_flInputMax = 0x1d4;
    public const ulong m_flOutputMin = 0x1d8;
    public const ulong m_flOutputMax = 0x1dc;
    public const ulong m_nSetMethod = 0x1e0;
    public const ulong m_bPerParticle = 0x1e4;
}

public static class C_INIT_RemapTransformOrientationToRotations {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_vecRotation = 0x228;
    public const ulong m_bUseQuat = 0x234;
    public const ulong m_bWriteNormal = 0x235;
}

public static class C_INIT_RemapTransformToVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vInputMin = 0x1c4;
    public const ulong m_vInputMax = 0x1d0;
    public const ulong m_vOutputMin = 0x1dc;
    public const ulong m_vOutputMax = 0x1e8;
    public const ulong m_TransformInput = 0x1f8;
    public const ulong m_LocalSpaceTransform = 0x260;
    public const ulong m_flStartTime = 0x2c8;
    public const ulong m_flEndTime = 0x2cc;
    public const ulong m_nSetMethod = 0x2d0;
    public const ulong m_bOffset = 0x2d4;
    public const ulong m_bAccelerate = 0x2d5;
    public const ulong m_flRemapBias = 0x2d8;
}

public static class C_INIT_RingWave {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_flParticlesPerOrbit = 0x228;
    public const ulong m_flInitialRadius = 0x380;
    public const ulong m_flThickness = 0x4d8;
    public const ulong m_flInitialSpeedMin = 0x630;
    public const ulong m_flInitialSpeedMax = 0x788;
    public const ulong m_flRoll = 0x8e0;
    public const ulong m_flPitch = 0xa38;
    public const ulong m_flYaw = 0xb90;
    public const ulong m_bEvenDistribution = 0xce8;
    public const ulong m_bXYVelocityOnly = 0xce9;
}

public static class C_INIT_RtEnvCull {
    public const ulong m_vecTestDir = 0x1c0;
    public const ulong m_vecTestNormal = 0x1cc;
    public const ulong m_bUseVelocity = 0x1d8;
    public const ulong m_bCullOnMiss = 0x1d9;
    public const ulong m_bLifeAdjust = 0x1da;
    public const ulong m_RtEnvName = 0x1db;
    public const ulong m_nRTEnvCP = 0x25c;
    public const ulong m_nComponent = 0x260;
}

public static class C_INIT_ScaleVelocity {
    public const ulong m_vecScale = 0x1c0;
}

public static class C_INIT_SequenceFromCP {
    public const ulong m_bKillUnused = 0x1c0;
    public const ulong m_bRadiusScale = 0x1c1;
    public const ulong m_nCP = 0x1c4;
    public const ulong m_vecOffset = 0x1c8;
}

public static class C_INIT_SequenceLifeTime {
    public const ulong m_flFramerate = 0x1c0;
}

public static class C_INIT_SetHitboxToClosest {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nDesiredHitbox = 0x1c4;
    public const ulong m_vecHitBoxScale = 0x1c8;
    public const ulong m_HitboxSetName = 0x820;
    public const ulong m_bUseBones = 0x8a0;
    public const ulong m_bUseClosestPointOnHitbox = 0x8a1;
    public const ulong m_nTestType = 0x8a4;
    public const ulong m_flHybridRatio = 0x8a8;
    public const ulong m_bUpdatePosition = 0xa00;
}

public static class C_INIT_SetHitboxToModel {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nForceInModel = 0x1c4;
    public const ulong m_nDesiredHitbox = 0x1c8;
    public const ulong m_vecHitBoxScale = 0x1d0;
    public const ulong m_vecDirectionBias = 0x828;
    public const ulong m_bMaintainHitbox = 0x834;
    public const ulong m_bUseBones = 0x835;
    public const ulong m_HitboxSetName = 0x836;
    public const ulong m_flShellSize = 0x8b8;
}

public static class C_INIT_SetRigidAttachment {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nFieldInput = 0x1c4;
    public const ulong m_nFieldOutput = 0x1c8;
    public const ulong m_bLocalSpace = 0x1cc;
}

public static class C_INIT_SetVectorAttributeToVectorExpression {
    public const ulong m_nExpression = 0x1c0;
    public const ulong m_vInput1 = 0x1c8;
    public const ulong m_vInput2 = 0x820;
    public const ulong m_nOutputField = 0xe78;
    public const ulong m_nSetMethod = 0xe7c;
    public const ulong m_bNormalizedOutput = 0xe80;
}

public static class C_INIT_StatusEffect {
    public const ulong m_nDetail2Combo = 0x1c0;
    public const ulong m_flDetail2Rotation = 0x1c4;
    public const ulong m_flDetail2Scale = 0x1c8;
    public const ulong m_flDetail2BlendFactor = 0x1cc;
    public const ulong m_flColorWarpIntensity = 0x1d0;
    public const ulong m_flDiffuseWarpBlendToFull = 0x1d4;
    public const ulong m_flEnvMapIntensity = 0x1d8;
    public const ulong m_flAmbientScale = 0x1dc;
    public const ulong m_specularColor = 0x1e0;
    public const ulong m_flSpecularScale = 0x1e4;
    public const ulong m_flSpecularExponent = 0x1e8;
    public const ulong m_flSpecularExponentBlendToFull = 0x1ec;
    public const ulong m_flSpecularBlendToFull = 0x1f0;
    public const ulong m_rimLightColor = 0x1f4;
    public const ulong m_flRimLightScale = 0x1f8;
    public const ulong m_flReflectionsTintByBaseBlendToNone = 0x1fc;
    public const ulong m_flMetalnessBlendToFull = 0x200;
    public const ulong m_flSelfIllumBlendToFull = 0x204;
}

public static class C_INIT_StatusEffectCitadel {
    public const ulong m_flSFXColorWarpAmount = 0x1c0;
    public const ulong m_flSFXNormalAmount = 0x1c4;
    public const ulong m_flSFXMetalnessAmount = 0x1c8;
    public const ulong m_flSFXRoughnessAmount = 0x1cc;
    public const ulong m_flSFXSelfIllumAmount = 0x1d0;
    public const ulong m_flSFXSScale = 0x1d4;
    public const ulong m_flSFXSScrollX = 0x1d8;
    public const ulong m_flSFXSScrollY = 0x1dc;
    public const ulong m_flSFXSScrollZ = 0x1e0;
    public const ulong m_flSFXSOffsetX = 0x1e4;
    public const ulong m_flSFXSOffsetY = 0x1e8;
    public const ulong m_flSFXSOffsetZ = 0x1ec;
    public const ulong m_nDetailCombo = 0x1f0;
    public const ulong m_flSFXSDetailAmount = 0x1f4;
    public const ulong m_flSFXSDetailScale = 0x1f8;
    public const ulong m_flSFXSDetailScrollX = 0x1fc;
    public const ulong m_flSFXSDetailScrollY = 0x200;
    public const ulong m_flSFXSDetailScrollZ = 0x204;
    public const ulong m_flSFXSUseModelUVs = 0x208;
}

public static class C_INIT_VelocityFromCP {
    public const ulong m_velocityInput = 0x1c0;
    public const ulong m_transformInput = 0x818;
    public const ulong m_flVelocityScale = 0x880;
    public const ulong m_bDirectionOnly = 0x884;
}

public static class C_INIT_VelocityFromNormal {
    public const ulong m_fSpeedMin = 0x1c0;
    public const ulong m_fSpeedMax = 0x1c4;
    public const ulong m_bIgnoreDt = 0x1c8;
}

public static class C_INIT_VelocityRadialRandom {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_fSpeedMin = 0x1c4;
    public const ulong m_fSpeedMax = 0x1c8;
    public const ulong m_vecLocalCoordinateSystemSpeedScale = 0x1cc;
    public const ulong m_bIgnoreDelta = 0x1d9;
}

public static class C_INIT_VelocityRandom {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_fSpeedMin = 0x1c8;
    public const ulong m_fSpeedMax = 0x320;
    public const ulong m_LocalCoordinateSystemSpeedMin = 0x478;
    public const ulong m_LocalCoordinateSystemSpeedMax = 0xad0;
    public const ulong m_bIgnoreDT = 0x1128;
    public const ulong m_randomnessParameters = 0x112c;
}

public static class C_OP_AlphaDecay {
    public const ulong m_flMinAlpha = 0x1c0;
}

public static class C_OP_AttractToControlPoint {
    public const ulong m_vecComponentScale = 0x1d0;
    public const ulong m_fForceAmount = 0x1e0;
    public const ulong m_fFalloffPower = 0x338;
    public const ulong m_TransformInput = 0x340;
    public const ulong m_fForceAmountMin = 0x3a8;
    public const ulong m_bApplyMinForce = 0x500;
}

public static class C_OP_BasicMovement {
    public const ulong m_Gravity = 0x1c0;
    public const ulong m_fDrag = 0x818;
    public const ulong m_nMaxConstraintPasses = 0x970;
}

public static class C_OP_BoxConstraint {
    public const ulong m_vecMin = 0x1c0;
    public const ulong m_vecMax = 0x818;
    public const ulong m_nCP = 0xe70;
    public const ulong m_bLocalSpace = 0xe74;
    public const ulong m_bAccountForRadius = 0xe75;
}

public static class C_OP_CPOffsetToPercentageBetweenCPs {
    public const ulong m_flInputMin = 0x1c0;
    public const ulong m_flInputMax = 0x1c4;
    public const ulong m_flInputBias = 0x1c8;
    public const ulong m_nStartCP = 0x1cc;
    public const ulong m_nEndCP = 0x1d0;
    public const ulong m_nOffsetCP = 0x1d4;
    public const ulong m_nOuputCP = 0x1d8;
    public const ulong m_nInputCP = 0x1dc;
    public const ulong m_bRadialCheck = 0x1e0;
    public const ulong m_bScaleOffset = 0x1e1;
    public const ulong m_vecOffset = 0x1e4;
}

public static class C_OP_CPVelocityForce {
    public const ulong m_nControlPointNumber = 0x1d0;
    public const ulong m_flScale = 0x1d8;
}

public static class C_OP_CalculateVectorAttribute {
    public const ulong m_vStartValue = 0x1c0;
    public const ulong m_nFieldInput1 = 0x1cc;
    public const ulong m_flInputScale1 = 0x1d0;
    public const ulong m_nFieldInput2 = 0x1d4;
    public const ulong m_flInputScale2 = 0x1d8;
    public const ulong m_nControlPointInput1 = 0x1dc;
    public const ulong m_flControlPointScale1 = 0x1f0;
    public const ulong m_nControlPointInput2 = 0x1f4;
    public const ulong m_flControlPointScale2 = 0x208;
    public const ulong m_nFieldOutput = 0x20c;
    public const ulong m_vFinalOutputScale = 0x210;
}

public static class C_OP_ChladniWave {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x320;
    public const ulong m_flOutputMin = 0x478;
    public const ulong m_flOutputMax = 0x5d0;
    public const ulong m_vecWaveLength = 0x728;
    public const ulong m_vecHarmonics = 0xd80;
    public const ulong m_nSetMethod = 0x13d8;
    public const ulong m_nLocalSpaceControlPoint = 0x13dc;
    public const ulong m_b3D = 0x13e0;
}

public static class C_OP_ChooseRandomChildrenInGroup {
    public const ulong m_nChildGroupID = 0x1d0;
    public const ulong m_flNumberOfChildren = 0x1d8;
}

public static class C_OP_ClampScalar {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flOutputMin = 0x1c8;
    public const ulong m_flOutputMax = 0x320;
}

public static class C_OP_ClampVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecOutputMin = 0x1c8;
    public const ulong m_vecOutputMax = 0x820;
}

public static class C_OP_CollideWithParentParticles {
    public const ulong m_flParentRadiusScale = 0x1c0;
    public const ulong m_flRadiusScale = 0x318;
}

public static class C_OP_CollideWithSelf {
    public const ulong m_flRadiusScale = 0x1c0;
    public const ulong m_flMinimumSpeed = 0x318;
}

public static class C_OP_ColorAdjustHSL {
    public const ulong m_flHueAdjust = 0x1c0;
    public const ulong m_flSaturationAdjust = 0x318;
    public const ulong m_flLightnessAdjust = 0x470;
}

public static class C_OP_ColorInterpolate {
    public const ulong m_ColorFade = 0x1c0;
    public const ulong m_flFadeStartTime = 0x1d0;
    public const ulong m_flFadeEndTime = 0x1d4;
    public const ulong m_nFieldOutput = 0x1d8;
    public const ulong m_bEaseInOut = 0x1dc;
    public const ulong m_bUseNewCode = 0x1dd;
}

public static class C_OP_ColorInterpolateRandom {
    public const ulong m_ColorFadeMin = 0x1c0;
    public const ulong m_ColorFadeMax = 0x1dc;
    public const ulong m_flFadeStartTime = 0x1ec;
    public const ulong m_flFadeEndTime = 0x1f0;
    public const ulong m_nFieldOutput = 0x1f4;
    public const ulong m_bEaseInOut = 0x1f8;
}

public static class C_OP_ConnectParentParticleToNearest {
    public const ulong m_nFirstControlPoint = 0x1c0;
    public const ulong m_nSecondControlPoint = 0x1c4;
}

public static class C_OP_ConstrainDistance {
    public const ulong m_fMinDistance = 0x1c0;
    public const ulong m_fMaxDistance = 0x318;
    public const ulong m_nControlPointNumber = 0x470;
    public const ulong m_CenterOffset = 0x474;
    public const ulong m_bGlobalCenter = 0x480;
}

public static class C_OP_ConstrainDistanceToPath {
    public const ulong m_fMinDistance = 0x1c0;
    public const ulong m_flMaxDistance0 = 0x1c4;
    public const ulong m_flMaxDistanceMid = 0x1c8;
    public const ulong m_flMaxDistance1 = 0x1cc;
    public const ulong m_PathParameters = 0x1d0;
    public const ulong m_flTravelTime = 0x210;
    public const ulong m_nFieldScale = 0x214;
    public const ulong m_nManualTField = 0x218;
}

public static class C_OP_ConstrainDistanceToUserSpecifiedPath {
    public const ulong m_fMinDistance = 0x1c0;
    public const ulong m_flMaxDistance = 0x1c4;
    public const ulong m_flTimeScale = 0x1c8;
    public const ulong m_bLoopedPath = 0x1cc;
    public const ulong m_pointList = 0x1d0;
}

public static class C_OP_ConstrainLineLength {
    public const ulong m_flMinDistance = 0x1c0;
    public const ulong m_flMaxDistance = 0x1c4;
}

public static class C_OP_ContinuousEmitter {
    public const ulong m_flEmissionDuration = 0x1c0;
    public const ulong m_flStartTime = 0x318;
    public const ulong m_flEmitRate = 0x470;
    public const ulong m_flEmissionScale = 0x5c8;
    public const ulong m_flScalePerParentParticle = 0x5cc;
    public const ulong m_bInitFromKilledParentParticles = 0x5d0;
    public const ulong m_nSnapshotControlPoint = 0x5d4;
    public const ulong m_nLimitPerUpdate = 0x5d8;
    public const ulong m_bForceEmitOnFirstUpdate = 0x5dc;
    public const ulong m_bForceEmitOnLastUpdate = 0x5dd;
}

public static class C_OP_ControlPointToRadialScreenSpace {
    public const ulong m_nCPIn = 0x1d0;
    public const ulong m_vecCP1Pos = 0x1d4;
    public const ulong m_nCPOut = 0x1e0;
    public const ulong m_nCPOutField = 0x1e4;
    public const ulong m_nCPSSPosOut = 0x1e8;
}

public static class C_OP_ControlpointLight {
    public const ulong m_flScale = 0x1c0;
    public const ulong m_nControlPoint1 = 0x690;
    public const ulong m_nControlPoint2 = 0x694;
    public const ulong m_nControlPoint3 = 0x698;
    public const ulong m_nControlPoint4 = 0x69c;
    public const ulong m_vecCPOffset1 = 0x6a0;
    public const ulong m_vecCPOffset2 = 0x6ac;
    public const ulong m_vecCPOffset3 = 0x6b8;
    public const ulong m_vecCPOffset4 = 0x6c4;
    public const ulong m_LightFiftyDist1 = 0x6d0;
    public const ulong m_LightZeroDist1 = 0x6d4;
    public const ulong m_LightFiftyDist2 = 0x6d8;
    public const ulong m_LightZeroDist2 = 0x6dc;
    public const ulong m_LightFiftyDist3 = 0x6e0;
    public const ulong m_LightZeroDist3 = 0x6e4;
    public const ulong m_LightFiftyDist4 = 0x6e8;
    public const ulong m_LightZeroDist4 = 0x6ec;
    public const ulong m_LightColor1 = 0x6f0;
    public const ulong m_LightColor2 = 0x6f4;
    public const ulong m_LightColor3 = 0x6f8;
    public const ulong m_LightColor4 = 0x6fc;
    public const ulong m_bLightType1 = 0x700;
    public const ulong m_bLightType2 = 0x701;
    public const ulong m_bLightType3 = 0x702;
    public const ulong m_bLightType4 = 0x703;
    public const ulong m_bLightDynamic1 = 0x704;
    public const ulong m_bLightDynamic2 = 0x705;
    public const ulong m_bLightDynamic3 = 0x706;
    public const ulong m_bLightDynamic4 = 0x707;
    public const ulong m_bUseNormal = 0x708;
    public const ulong m_bUseHLambert = 0x709;
    public const ulong m_bClampLowerRange = 0x70e;
    public const ulong m_bClampUpperRange = 0x70f;
}

public static class C_OP_Cull {
    public const ulong m_flCullPerc = 0x1c0;
    public const ulong m_flCullStart = 0x1c4;
    public const ulong m_flCullEnd = 0x1c8;
    public const ulong m_flCullExp = 0x1cc;
}

public static class C_OP_CurlNoiseForce {
    public const ulong m_nNoiseType = 0x1d0;
    public const ulong m_vecNoiseFreq = 0x1d8;
    public const ulong m_vecNoiseScale = 0x830;
    public const ulong m_vecOffset = 0xe88;
    public const ulong m_vecOffsetRate = 0x14e0;
    public const ulong m_flWorleySeed = 0x1b38;
    public const ulong m_flWorleyJitter = 0x1c90;
}

public static class C_OP_CycleScalar {
    public const ulong m_nDestField = 0x1c0;
    public const ulong m_flStartValue = 0x1c4;
    public const ulong m_flEndValue = 0x1c8;
    public const ulong m_flCycleTime = 0x1cc;
    public const ulong m_bDoNotRepeatCycle = 0x1d0;
    public const ulong m_bSynchronizeParticles = 0x1d1;
    public const ulong m_nCPScale = 0x1d4;
    public const ulong m_nCPFieldMin = 0x1d8;
    public const ulong m_nCPFieldMax = 0x1dc;
    public const ulong m_nSetMethod = 0x1e0;
}

public static class C_OP_CylindricalDistanceToTransform {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x320;
    public const ulong m_flOutputMin = 0x478;
    public const ulong m_flOutputMax = 0x5d0;
    public const ulong m_TransformStart = 0x728;
    public const ulong m_TransformEnd = 0x790;
    public const ulong m_nSetMethod = 0x7f8;
    public const ulong m_bActiveRange = 0x7fc;
    public const ulong m_bAdditive = 0x7fd;
    public const ulong m_bCapsule = 0x7fe;
}

public static class C_OP_DampenToCP {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_flRange = 0x1c4;
    public const ulong m_flScale = 0x1c8;
}

public static class C_OP_Decay {
    public const ulong m_bRopeDecay = 0x1c0;
    public const ulong m_bForcePreserveParticleOrder = 0x1c1;
}

public static class C_OP_DecayClampCount {
    public const ulong m_nCount = 0x1c0;
}

public static class C_OP_DecayMaintainCount {
    public const ulong m_nParticlesToMaintain = 0x1c0;
    public const ulong m_flDecayDelay = 0x1c4;
    public const ulong m_nSnapshotControlPoint = 0x1c8;
    public const ulong m_bLifespanDecay = 0x1cc;
    public const ulong m_flScale = 0x1d0;
    public const ulong m_bKillNewest = 0x328;
}

public static class C_OP_DecayOffscreen {
    public const ulong m_flOffscreenTime = 0x1c0;
}

public static class C_OP_DensityForce {
    public const ulong m_flRadiusScale = 0x1d0;
    public const ulong m_flForceScale = 0x1d4;
    public const ulong m_flTargetDensity = 0x1d8;
}

public static class C_OP_DifferencePreviousParticle {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_flOutputMin = 0x1d0;
    public const ulong m_flOutputMax = 0x1d4;
    public const ulong m_nSetMethod = 0x1d8;
    public const ulong m_bActiveRange = 0x1dc;
    public const ulong m_bSetPreviousParticle = 0x1dd;
}

public static class C_OP_Diffusion {
    public const ulong m_flRadiusScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nVoxelGridResolution = 0x1c8;
}

public static class C_OP_DirectionBetweenVecsToVec {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecPoint1 = 0x1c8;
    public const ulong m_vecPoint2 = 0x820;
}

public static class C_OP_DistanceBetweenCPsToCP {
    public const ulong m_nStartCP = 0x1d0;
    public const ulong m_nEndCP = 0x1d4;
    public const ulong m_nOutputCP = 0x1d8;
    public const ulong m_nOutputCPField = 0x1dc;
    public const ulong m_bSetOnce = 0x1e0;
    public const ulong m_flInputMin = 0x1e4;
    public const ulong m_flInputMax = 0x1e8;
    public const ulong m_flOutputMin = 0x1ec;
    public const ulong m_flOutputMax = 0x1f0;
    public const ulong m_flMaxTraceLength = 0x1f4;
    public const ulong m_flLOSScale = 0x1f8;
    public const ulong m_bLOS = 0x1fc;
    public const ulong m_CollisionGroupName = 0x1fd;
    public const ulong m_nTraceSet = 0x280;
    public const ulong m_nSetParent = 0x284;
}

public static class C_OP_DistanceBetweenTransforms {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_TransformStart = 0x1c8;
    public const ulong m_TransformEnd = 0x230;
    public const ulong m_flInputMin = 0x298;
    public const ulong m_flInputMax = 0x3f0;
    public const ulong m_flOutputMin = 0x548;
    public const ulong m_flOutputMax = 0x6a0;
    public const ulong m_flMaxTraceLength = 0x7f8;
    public const ulong m_flLOSScale = 0x7fc;
    public const ulong m_CollisionGroupName = 0x800;
    public const ulong m_nTraceSet = 0x880;
    public const ulong m_bLOS = 0x884;
    public const ulong m_nSetMethod = 0x888;
}

public static class C_OP_DistanceBetweenVecs {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecPoint1 = 0x1c8;
    public const ulong m_vecPoint2 = 0x820;
    public const ulong m_flInputMin = 0xe78;
    public const ulong m_flInputMax = 0xfd0;
    public const ulong m_flOutputMin = 0x1128;
    public const ulong m_flOutputMax = 0x1280;
    public const ulong m_nSetMethod = 0x13d8;
    public const ulong m_bDeltaTime = 0x13dc;
}

public static class C_OP_DistanceCull {
    public const ulong m_nControlPoint = 0x1c0;
    public const ulong m_vecPointOffset = 0x1c4;
    public const ulong m_flDistance = 0x1d0;
    public const ulong m_bCullInside = 0x1d4;
}

public static class C_OP_DistanceToTransform {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x320;
    public const ulong m_flOutputMin = 0x478;
    public const ulong m_flOutputMax = 0x5d0;
    public const ulong m_TransformStart = 0x728;
    public const ulong m_bLOS = 0x790;
    public const ulong m_CollisionGroupName = 0x791;
    public const ulong m_nTraceSet = 0x814;
    public const ulong m_flMaxTraceLength = 0x818;
    public const ulong m_flLOSScale = 0x81c;
    public const ulong m_nSetMethod = 0x820;
    public const ulong m_bActiveRange = 0x824;
    public const ulong m_bAdditive = 0x825;
    public const ulong m_vecComponentScale = 0x828;
}

public static class C_OP_DragRelativeToPlane {
    public const ulong m_flDragAtPlane = 0x1c0;
    public const ulong m_flFalloff = 0x318;
    public const ulong m_bDirectional = 0x470;
    public const ulong m_vecPlaneNormal = 0x478;
    public const ulong m_nControlPointNumber = 0xad0;
}

public static class C_OP_DriveCPFromGlobalSoundFloat {
    public const ulong m_nOutputControlPoint = 0x1d0;
    public const ulong m_nOutputField = 0x1d4;
    public const ulong m_flInputMin = 0x1d8;
    public const ulong m_flInputMax = 0x1dc;
    public const ulong m_flOutputMin = 0x1e0;
    public const ulong m_flOutputMax = 0x1e4;
    public const ulong m_StackName = 0x1e8;
    public const ulong m_OperatorName = 0x1f0;
    public const ulong m_FieldName = 0x1f8;
}

public static class C_OP_EnableChildrenFromParentParticleCount {
    public const ulong m_nChildGroupID = 0x1d0;
    public const ulong m_nFirstChild = 0x1d4;
    public const ulong m_nNumChildrenToEnable = 0x1d8;
    public const ulong m_bDisableChildren = 0x330;
    public const ulong m_bPlayEndcapOnStop = 0x331;
    public const ulong m_bDestroyImmediately = 0x332;
}

public static class C_OP_EndCapTimedDecay {
    public const ulong m_flDecayTime = 0x1c0;
}

public static class C_OP_EndCapTimedFreeze {
    public const ulong m_flFreezeTime = 0x1c0;
}

public static class C_OP_ExternalGameImpulseForce {
    public const ulong m_flForceScale = 0x1d0;
    public const ulong m_bRopes = 0x328;
    public const ulong m_bRopesZOnly = 0x329;
    public const ulong m_bExplosions = 0x32a;
    public const ulong m_bParticles = 0x32b;
}

public static class C_OP_ExternalWindForce {
    public const ulong m_vecSamplePosition = 0x1d0;
    public const ulong m_vecScale = 0x828;
    public const ulong m_bSampleWind = 0xe80;
    public const ulong m_bSampleWater = 0xe81;
    public const ulong m_bDampenNearWaterPlane = 0xe82;
    public const ulong m_bSampleGravity = 0xe83;
    public const ulong m_vecGravityForce = 0xe88;
    public const ulong m_bUseBasicMovementGravity = 0x14e0;
    public const ulong m_flLocalGravityScale = 0x14e8;
    public const ulong m_flLocalBuoyancyScale = 0x1640;
    public const ulong m_vecBuoyancyForce = 0x1798;
}

public static class C_OP_FadeAndKill {
    public const ulong m_flStartFadeInTime = 0x1c0;
    public const ulong m_flEndFadeInTime = 0x1c4;
    public const ulong m_flStartFadeOutTime = 0x1c8;
    public const ulong m_flEndFadeOutTime = 0x1cc;
    public const ulong m_flStartAlpha = 0x1d0;
    public const ulong m_flEndAlpha = 0x1d4;
    public const ulong m_bForcePreserveParticleOrder = 0x1d8;
}

public static class C_OP_FadeAndKillForTracers {
    public const ulong m_flStartFadeInTime = 0x1c0;
    public const ulong m_flEndFadeInTime = 0x1c4;
    public const ulong m_flStartFadeOutTime = 0x1c8;
    public const ulong m_flEndFadeOutTime = 0x1cc;
    public const ulong m_flStartAlpha = 0x1d0;
    public const ulong m_flEndAlpha = 0x1d4;
}

public static class C_OP_FadeIn {
    public const ulong m_flFadeInTimeMin = 0x1c0;
    public const ulong m_flFadeInTimeMax = 0x1c4;
    public const ulong m_flFadeInTimeExp = 0x1c8;
    public const ulong m_bProportional = 0x1cc;
}

public static class C_OP_FadeInSimple {
    public const ulong m_flFadeInTime = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
}

public static class C_OP_FadeOut {
    public const ulong m_flFadeOutTimeMin = 0x1c0;
    public const ulong m_flFadeOutTimeMax = 0x1c4;
    public const ulong m_flFadeOutTimeExp = 0x1c8;
    public const ulong m_flFadeBias = 0x1cc;
    public const ulong m_bProportional = 0x200;
    public const ulong m_bEaseInAndOut = 0x201;
}

public static class C_OP_FadeOutSimple {
    public const ulong m_flFadeOutTime = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
}

public static class C_OP_ForceBasedOnDistanceToPlane {
    public const ulong m_flMinDist = 0x1d0;
    public const ulong m_vecForceAtMinDist = 0x1d4;
    public const ulong m_flMaxDist = 0x1e0;
    public const ulong m_vecForceAtMaxDist = 0x1e4;
    public const ulong m_vecPlaneNormal = 0x1f0;
    public const ulong m_nControlPointNumber = 0x1fc;
    public const ulong m_flExponent = 0x200;
}

public static class C_OP_ForceControlPointStub {
    public const ulong m_ControlPoint = 0x1d0;
}

public static class C_OP_GlobalLight {
    public const ulong m_flScale = 0x1c0;
    public const ulong m_bClampLowerRange = 0x1c4;
    public const ulong m_bClampUpperRange = 0x1c5;
}

public static class C_OP_HSVShiftToCP {
    public const ulong m_nColorCP = 0x1d0;
    public const ulong m_nColorGemEnableCP = 0x1d4;
    public const ulong m_nOutputCP = 0x1d8;
    public const ulong m_DefaultHSVColor = 0x1dc;
}

public static class C_OP_InheritFromParentParticles {
    public const ulong m_flScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nIncrement = 0x1c8;
    public const ulong m_bRandomDistribution = 0x1cc;
}

public static class C_OP_InheritFromParentParticlesV2 {
    public const ulong m_flScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nIncrement = 0x1c8;
    public const ulong m_bRandomDistribution = 0x1cc;
    public const ulong m_nMissingParentBehavior = 0x1d0;
}

public static class C_OP_InheritFromPeerSystem {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nFieldInput = 0x1c4;
    public const ulong m_nIncrement = 0x1c8;
    public const ulong m_nGroupID = 0x1cc;
}

public static class C_OP_InstantaneousEmitter {
    public const ulong m_nParticlesToEmit = 0x1c0;
    public const ulong m_flStartTime = 0x318;
    public const ulong m_flInitFromKilledParentParticles = 0x470;
    public const ulong m_nMaxEmittedPerFrame = 0x474;
    public const ulong m_nSnapshotControlPoint = 0x478;
}

public static class C_OP_InterpolateRadius {
    public const ulong m_flStartTime = 0x1c0;
    public const ulong m_flEndTime = 0x1c4;
    public const ulong m_flStartScale = 0x1c8;
    public const ulong m_flEndScale = 0x1cc;
    public const ulong m_bEaseInAndOut = 0x1d0;
    public const ulong m_flBias = 0x1d4;
}

public static class C_OP_LagCompensation {
    public const ulong m_nDesiredVelocityCP = 0x1c0;
    public const ulong m_nLatencyCP = 0x1c4;
    public const ulong m_nLatencyCPField = 0x1c8;
    public const ulong m_nDesiredVelocityCPField = 0x1cc;
}

public static class C_OP_LerpEndCapScalar {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flOutput = 0x1c4;
    public const ulong m_flLerpTime = 0x1c8;
}

public static class C_OP_LerpEndCapVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecOutput = 0x1c4;
    public const ulong m_flLerpTime = 0x1d0;
}

public static class C_OP_LerpScalar {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flOutput = 0x1c8;
    public const ulong m_flStartTime = 0x320;
    public const ulong m_flEndTime = 0x324;
}

public static class C_OP_LerpToInitialPosition {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_flInterpolation = 0x1c8;
    public const ulong m_nCacheField = 0x320;
    public const ulong m_flScale = 0x328;
    public const ulong m_vecScale = 0x480;
}

public static class C_OP_LerpToOtherAttribute {
    public const ulong m_flInterpolation = 0x1c0;
    public const ulong m_nFieldInputFrom = 0x318;
    public const ulong m_nFieldInput = 0x31c;
    public const ulong m_nFieldOutput = 0x320;
}

public static class C_OP_LerpVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecOutput = 0x1c4;
    public const ulong m_flStartTime = 0x1d0;
    public const ulong m_flEndTime = 0x1d4;
    public const ulong m_nSetMethod = 0x1d8;
}

public static class C_OP_LightningSnapshotGenerator {
    public const ulong m_nCPSnapshot = 0x1d0;
    public const ulong m_nCPStartPnt = 0x1d4;
    public const ulong m_nCPEndPnt = 0x1d8;
    public const ulong m_flSegments = 0x1e0;
    public const ulong m_flOffset = 0x338;
    public const ulong m_flOffsetDecay = 0x490;
    public const ulong m_flRecalcRate = 0x5e8;
    public const ulong m_flUVScale = 0x740;
    public const ulong m_flUVOffset = 0x898;
    public const ulong m_flSplitRate = 0x9f0;
    public const ulong m_flBranchTwist = 0xb48;
    public const ulong m_nBranchBehavior = 0xca0;
    public const ulong m_flRadiusStart = 0xca8;
    public const ulong m_flRadiusEnd = 0xe00;
    public const ulong m_flDedicatedPool = 0xf58;
}

public static class C_OP_LocalAccelerationForce {
    public const ulong m_nCP = 0x1d0;
    public const ulong m_nScaleCP = 0x1d4;
    public const ulong m_vecAccel = 0x1d8;
}

public static class C_OP_LockPoints {
    public const ulong m_nMinCol = 0x1c0;
    public const ulong m_nMaxCol = 0x1c4;
    public const ulong m_nMinRow = 0x1c8;
    public const ulong m_nMaxRow = 0x1cc;
    public const ulong m_nControlPoint = 0x1d0;
    public const ulong m_flBlendValue = 0x1d4;
}

public static class C_OP_LockToBone {
    public const ulong m_modelInput = 0x1c0;
    public const ulong m_transformInput = 0x220;
    public const ulong m_flLifeTimeFadeStart = 0x288;
    public const ulong m_flLifeTimeFadeEnd = 0x28c;
    public const ulong m_flJumpThreshold = 0x290;
    public const ulong m_flPrevPosScale = 0x294;
    public const ulong m_HitboxSetName = 0x298;
    public const ulong m_bRigid = 0x318;
    public const ulong m_bUseBones = 0x319;
    public const ulong m_nFieldOutput = 0x31c;
    public const ulong m_nFieldOutputPrev = 0x320;
    public const ulong m_nRotationSetType = 0x324;
    public const ulong m_bRigidRotationLock = 0x328;
    public const ulong m_vecRotation = 0x330;
    public const ulong m_flRotLerp = 0x988;
}

public static class C_OP_LockToPointList {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_pointList = 0x1c8;
    public const ulong m_bPlaceAlongPath = 0x1e0;
    public const ulong m_bClosedLoop = 0x1e1;
    public const ulong m_nNumPointsAlongPath = 0x1e4;
}

public static class C_OP_LockToSavedSequentialPath {
    public const ulong m_flFadeStart = 0x1c4;
    public const ulong m_flFadeEnd = 0x1c8;
    public const ulong m_bCPPairs = 0x1cc;
    public const ulong m_PathParams = 0x1d0;
}

public static class C_OP_LockToSavedSequentialPathV2 {
    public const ulong m_flFadeStart = 0x1c0;
    public const ulong m_flFadeEnd = 0x1c4;
    public const ulong m_bCPPairs = 0x1c8;
    public const ulong m_PathParams = 0x1d0;
}

public static class C_OP_MaintainEmitter {
    public const ulong m_nParticlesToMaintain = 0x1c0;
    public const ulong m_flStartTime = 0x318;
    public const ulong m_flEmissionDuration = 0x320;
    public const ulong m_flEmissionRate = 0x478;
    public const ulong m_nSnapshotControlPoint = 0x47c;
    public const ulong m_bEmitInstantaneously = 0x480;
    public const ulong m_bFinalEmitOnStop = 0x481;
    public const ulong m_flScale = 0x488;
}

public static class C_OP_MaintainSequentialPath {
    public const ulong m_fMaxDistance = 0x1c0;
    public const ulong m_flNumToAssign = 0x1c4;
    public const ulong m_flCohesionStrength = 0x1c8;
    public const ulong m_flTolerance = 0x1cc;
    public const ulong m_bLoop = 0x1d0;
    public const ulong m_bUseParticleCount = 0x1d1;
    public const ulong m_PathParams = 0x1e0;
}

public static class C_OP_MaxVelocity {
    public const ulong m_flMaxVelocity = 0x1c0;
    public const ulong m_flMinVelocity = 0x1c4;
    public const ulong m_nOverrideCP = 0x1c8;
    public const ulong m_nOverrideCPField = 0x1cc;
}

public static class C_OP_ModelCull {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_bBoundBox = 0x1c4;
    public const ulong m_bCullOutside = 0x1c5;
    public const ulong m_bUseBones = 0x1c6;
    public const ulong m_HitboxSetName = 0x1c7;
}

public static class C_OP_ModelDampenMovement {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_bBoundBox = 0x1c4;
    public const ulong m_bOutside = 0x1c5;
    public const ulong m_bUseBones = 0x1c6;
    public const ulong m_HitboxSetName = 0x1c7;
    public const ulong m_vecPosOffset = 0x248;
    public const ulong m_fDrag = 0x8a0;
}

public static class C_OP_MoveToHitbox {
    public const ulong m_modelInput = 0x1c0;
    public const ulong m_transformInput = 0x220;
    public const ulong m_flLifeTimeLerpStart = 0x28c;
    public const ulong m_flLifeTimeLerpEnd = 0x290;
    public const ulong m_flPrevPosScale = 0x294;
    public const ulong m_HitboxSetName = 0x298;
    public const ulong m_bUseBones = 0x318;
    public const ulong m_nLerpType = 0x31c;
    public const ulong m_flInterpolation = 0x320;
}

public static class C_OP_MovementLoopInsideSphere {
    public const ulong m_nCP = 0x1c0;
    public const ulong m_flDistance = 0x1c8;
    public const ulong m_vecScale = 0x320;
    public const ulong m_nDistSqrAttr = 0x978;
}

public static class C_OP_MovementMaintainOffset {
    public const ulong m_vecOffset = 0x1c0;
    public const ulong m_nCP = 0x1cc;
    public const ulong m_bRadiusScale = 0x1d0;
}

public static class C_OP_MovementMoveAlongSkinnedCPSnapshot {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nSnapshotControlPointNumber = 0x1c4;
    public const ulong m_bSetNormal = 0x1c8;
    public const ulong m_bSetRadius = 0x1c9;
    public const ulong m_flInterpolation = 0x1d0;
    public const ulong m_flTValue = 0x328;
}

public static class C_OP_MovementPlaceOnGround {
    public const ulong m_flOffset = 0x1c0;
    public const ulong m_flMaxTraceLength = 0x318;
    public const ulong m_flTolerance = 0x31c;
    public const ulong m_flTraceOffset = 0x320;
    public const ulong m_flLerpRate = 0x324;
    public const ulong m_CollisionGroupName = 0x328;
    public const ulong m_nTraceSet = 0x3a8;
    public const ulong m_nRefCP1 = 0x3ac;
    public const ulong m_nRefCP2 = 0x3b0;
    public const ulong m_nLerpCP = 0x3b4;
    public const ulong m_nTraceMissBehavior = 0x3c0;
    public const ulong m_bIncludeShotHull = 0x3c4;
    public const ulong m_bIncludeWater = 0x3c5;
    public const ulong m_bSetNormal = 0x3c8;
    public const ulong m_bScaleOffset = 0x3c9;
    public const ulong m_nPreserveOffsetCP = 0x3cc;
    public const ulong m_nIgnoreCP = 0x3d0;
}

public static class C_OP_MovementRigidAttachToCP {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nScaleControlPoint = 0x1c4;
    public const ulong m_nScaleCPField = 0x1c8;
    public const ulong m_nFieldInput = 0x1cc;
    public const ulong m_nFieldOutput = 0x1d0;
    public const ulong m_bOffsetLocal = 0x1d4;
}

public static class C_OP_MovementRotateParticleAroundAxis {
    public const ulong m_vecRotAxis = 0x1c0;
    public const ulong m_flRotRate = 0x818;
    public const ulong m_TransformInput = 0x970;
    public const ulong m_bLocalSpace = 0x9d8;
}

public static class C_OP_MovementSkinnedPositionFromCPSnapshot {
    public const ulong m_nSnapshotControlPointNumber = 0x1c0;
    public const ulong m_nControlPointNumber = 0x1c4;
    public const ulong m_bRandom = 0x1c8;
    public const ulong m_nRandomSeed = 0x1cc;
    public const ulong m_bSetNormal = 0x1d0;
    public const ulong m_bSetRadius = 0x1d1;
    public const ulong m_flIncrement = 0x1d8;
    public const ulong m_nFullLoopIncrement = 0x330;
    public const ulong m_nSnapShotStartPoint = 0x488;
    public const ulong m_flInterpolation = 0x5e0;
}

public static class C_OP_Noise {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flOutputMin = 0x1c4;
    public const ulong m_flOutputMax = 0x1c8;
    public const ulong m_fl4NoiseScale = 0x1cc;
    public const ulong m_bAdditive = 0x1d0;
    public const ulong m_flNoiseAnimationTimeScale = 0x1d4;
}

public static class C_OP_NoiseEmitter {
    public const ulong m_flEmissionDuration = 0x1c0;
    public const ulong m_flStartTime = 0x1c4;
    public const ulong m_flEmissionScale = 0x1c8;
    public const ulong m_nScaleControlPoint = 0x1cc;
    public const ulong m_nScaleControlPointField = 0x1d0;
    public const ulong m_nWorldNoisePoint = 0x1d4;
    public const ulong m_bAbsVal = 0x1d8;
    public const ulong m_bAbsValInv = 0x1d9;
    public const ulong m_flOffset = 0x1dc;
    public const ulong m_flOutputMin = 0x1e0;
    public const ulong m_flOutputMax = 0x1e4;
    public const ulong m_flNoiseScale = 0x1e8;
    public const ulong m_flWorldNoiseScale = 0x1ec;
    public const ulong m_vecOffsetLoc = 0x1f0;
    public const ulong m_flWorldTimeScale = 0x1fc;
}

public static class C_OP_NormalLock {
    public const ulong m_nControlPointNumber = 0x1c0;
}

public static class C_OP_NormalizeVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flScale = 0x1c4;
}

public static class C_OP_Orient2DRelToCP {
    public const ulong m_flRotOffset = 0x1c0;
    public const ulong m_flSpinStrength = 0x1c4;
    public const ulong m_nCP = 0x1c8;
    public const ulong m_nFieldOutput = 0x1cc;
}

public static class C_OP_OrientTo2dDirection {
    public const ulong m_flRotOffset = 0x1c0;
    public const ulong m_flSpinStrength = 0x1c4;
    public const ulong m_nFieldOutput = 0x1c8;
}

public static class C_OP_OscillateScalar {
    public const ulong m_RateMin = 0x1c0;
    public const ulong m_RateMax = 0x1c4;
    public const ulong m_FrequencyMin = 0x1c8;
    public const ulong m_FrequencyMax = 0x1cc;
    public const ulong m_nField = 0x1d0;
    public const ulong m_bProportional = 0x1d4;
    public const ulong m_bProportionalOp = 0x1d5;
    public const ulong m_flStartTime_min = 0x1d8;
    public const ulong m_flStartTime_max = 0x1dc;
    public const ulong m_flEndTime_min = 0x1e0;
    public const ulong m_flEndTime_max = 0x1e4;
    public const ulong m_flOscMult = 0x1e8;
    public const ulong m_flOscAdd = 0x1ec;
}

public static class C_OP_OscillateScalarSimple {
    public const ulong m_Rate = 0x1c0;
    public const ulong m_Frequency = 0x1c4;
    public const ulong m_nField = 0x1c8;
    public const ulong m_flOscMult = 0x1cc;
    public const ulong m_flOscAdd = 0x1d0;
}

public static class C_OP_OscillateVector {
    public const ulong m_RateMin = 0x1c0;
    public const ulong m_RateMax = 0x1cc;
    public const ulong m_FrequencyMin = 0x1d8;
    public const ulong m_FrequencyMax = 0x1e4;
    public const ulong m_nField = 0x1f0;
    public const ulong m_bProportional = 0x1f4;
    public const ulong m_bProportionalOp = 0x1f5;
    public const ulong m_bOffset = 0x1f6;
    public const ulong m_flStartTime_min = 0x1f8;
    public const ulong m_flStartTime_max = 0x1fc;
    public const ulong m_flEndTime_min = 0x200;
    public const ulong m_flEndTime_max = 0x204;
    public const ulong m_flOscMult = 0x208;
    public const ulong m_flOscAdd = 0x360;
    public const ulong m_flRateScale = 0x4b8;
}

public static class C_OP_OscillateVectorSimple {
    public const ulong m_Rate = 0x1c0;
    public const ulong m_Frequency = 0x1cc;
    public const ulong m_nField = 0x1d8;
    public const ulong m_flOscMult = 0x1dc;
    public const ulong m_flOscAdd = 0x1e0;
    public const ulong m_bOffset = 0x1e4;
}

public static class C_OP_ParentVortices {
    public const ulong m_flForceScale = 0x1d0;
    public const ulong m_vecTwistAxis = 0x1d4;
    public const ulong m_bFlipBasedOnYaw = 0x1e0;
}

public static class C_OP_ParticlePhysics {
    public const ulong m_Gravity = 0x1c0;
    public const ulong m_fDrag = 0x818;
    public const ulong m_nMaxConstraintPasses = 0x970;
}

public static class C_OP_PerParticleForce {
    public const ulong m_flForceScale = 0x1d0;
    public const ulong m_vForce = 0x328;
    public const ulong m_nCP = 0x980;
}

public static class C_OP_PercentageBetweenTransformLerpCPs {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c4;
    public const ulong m_flInputMax = 0x1c8;
    public const ulong m_TransformStart = 0x1d0;
    public const ulong m_TransformEnd = 0x238;
    public const ulong m_nOutputStartCP = 0x2a0;
    public const ulong m_nOutputStartField = 0x2a4;
    public const ulong m_nOutputEndCP = 0x2a8;
    public const ulong m_nOutputEndField = 0x2ac;
    public const ulong m_nSetMethod = 0x2b0;
    public const ulong m_bActiveRange = 0x2b4;
    public const ulong m_bRadialCheck = 0x2b5;
}

public static class C_OP_PercentageBetweenTransforms {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c4;
    public const ulong m_flInputMax = 0x1c8;
    public const ulong m_flOutputMin = 0x1cc;
    public const ulong m_flOutputMax = 0x1d0;
    public const ulong m_TransformStart = 0x1d8;
    public const ulong m_TransformEnd = 0x240;
    public const ulong m_nSetMethod = 0x2a8;
    public const ulong m_bActiveRange = 0x2ac;
    public const ulong m_bRadialCheck = 0x2ad;
}

public static class C_OP_PercentageBetweenTransformsVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c4;
    public const ulong m_flInputMax = 0x1c8;
    public const ulong m_vecOutputMin = 0x1cc;
    public const ulong m_vecOutputMax = 0x1d8;
    public const ulong m_TransformStart = 0x1e8;
    public const ulong m_TransformEnd = 0x250;
    public const ulong m_nSetMethod = 0x2b8;
    public const ulong m_bActiveRange = 0x2bc;
    public const ulong m_bRadialCheck = 0x2bd;
}

public static class C_OP_PinParticleToCP {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_vecOffset = 0x1c8;
    public const ulong m_bOffsetLocal = 0x820;
    public const ulong m_nParticleSelection = 0x824;
    public const ulong m_nParticleNumber = 0x828;
    public const ulong m_nPinBreakType = 0x980;
    public const ulong m_flBreakDistance = 0x988;
    public const ulong m_flBreakSpeed = 0xae0;
    public const ulong m_flAge = 0xc38;
    public const ulong m_nBreakControlPointNumber = 0xd90;
    public const ulong m_nBreakControlPointNumber2 = 0xd94;
    public const ulong m_flBreakValue = 0xd98;
    public const ulong m_flInterpolation = 0xef0;
}

public static class C_OP_PlanarConstraint {
    public const ulong m_PointOnPlane = 0x1c0;
    public const ulong m_PlaneNormal = 0x1cc;
    public const ulong m_nControlPointNumber = 0x1d8;
    public const ulong m_bGlobalOrigin = 0x1dc;
    public const ulong m_bGlobalNormal = 0x1dd;
    public const ulong m_flRadiusScale = 0x1e0;
    public const ulong m_flMaximumDistanceToCP = 0x338;
}

public static class C_OP_PlaneCull {
    public const ulong m_nPlaneControlPoint = 0x1c0;
    public const ulong m_vecPlaneDirection = 0x1c4;
    public const ulong m_bLocalSpace = 0x1d0;
    public const ulong m_flPlaneOffset = 0x1d4;
}

public static class C_OP_PlayEndCapWhenFinished {
    public const ulong m_bFireOnEmissionEnd = 0x1d0;
    public const ulong m_bIncludeChildren = 0x1d1;
}

public static class C_OP_PointVectorAtNextParticle {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInterpolation = 0x1c8;
}

public static class C_OP_PositionLock {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_flStartTime_min = 0x228;
    public const ulong m_flStartTime_max = 0x22c;
    public const ulong m_flStartTime_exp = 0x230;
    public const ulong m_flEndTime_min = 0x234;
    public const ulong m_flEndTime_max = 0x238;
    public const ulong m_flEndTime_exp = 0x23c;
    public const ulong m_flRange = 0x240;
    public const ulong m_flRangeBias = 0x248;
    public const ulong m_flJumpThreshold = 0x3a0;
    public const ulong m_flPrevPosScale = 0x3a4;
    public const ulong m_bLockRot = 0x3a8;
    public const ulong m_vecScale = 0x3b0;
    public const ulong m_nFieldOutput = 0xa08;
    public const ulong m_nFieldOutputPrev = 0xa0c;
}

public static class C_OP_QuantizeCPComponent {
    public const ulong m_flInputValue = 0x1d0;
    public const ulong m_nCPOutput = 0x328;
    public const ulong m_nOutVectorField = 0x32c;
    public const ulong m_flQuantizeValue = 0x330;
}

public static class C_OP_QuantizeFloat {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x318;
}

public static class C_OP_RadiusDecay {
    public const ulong m_flMinRadius = 0x1c0;
}

public static class C_OP_RampCPLinearRandom {
    public const ulong m_nOutControlPointNumber = 0x1d0;
    public const ulong m_vecRateMin = 0x1d4;
    public const ulong m_vecRateMax = 0x1e0;
}

public static class C_OP_RampScalarLinear {
    public const ulong m_RateMin = 0x1c0;
    public const ulong m_RateMax = 0x1c4;
    public const ulong m_flStartTime_min = 0x1c8;
    public const ulong m_flStartTime_max = 0x1cc;
    public const ulong m_flEndTime_min = 0x1d0;
    public const ulong m_flEndTime_max = 0x1d4;
    public const ulong m_nField = 0x200;
    public const ulong m_bProportionalOp = 0x204;
}

public static class C_OP_RampScalarLinearSimple {
    public const ulong m_Rate = 0x1c0;
    public const ulong m_flStartTime = 0x1c4;
    public const ulong m_flEndTime = 0x1c8;
    public const ulong m_nField = 0x1f0;
}

public static class C_OP_RampScalarSpline {
    public const ulong m_RateMin = 0x1c0;
    public const ulong m_RateMax = 0x1c4;
    public const ulong m_flStartTime_min = 0x1c8;
    public const ulong m_flStartTime_max = 0x1cc;
    public const ulong m_flEndTime_min = 0x1d0;
    public const ulong m_flEndTime_max = 0x1d4;
    public const ulong m_flBias = 0x1d8;
    public const ulong m_nField = 0x200;
    public const ulong m_bProportionalOp = 0x204;
    public const ulong m_bEaseOut = 0x205;
}

public static class C_OP_RampScalarSplineSimple {
    public const ulong m_Rate = 0x1c0;
    public const ulong m_flStartTime = 0x1c4;
    public const ulong m_flEndTime = 0x1c8;
    public const ulong m_nField = 0x1f0;
    public const ulong m_bEaseOut = 0x1f4;
}

public static class C_OP_RandomForce {
    public const ulong m_MinForce = 0x1d0;
    public const ulong m_MaxForce = 0x1dc;
}

public static class C_OP_ReadFromNeighboringParticle {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nIncrement = 0x1c8;
    public const ulong m_DistanceCheck = 0x1d0;
    public const ulong m_flInterpolation = 0x328;
}

public static class C_OP_ReinitializeScalarEndCap {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flOutputMin = 0x1c4;
    public const ulong m_flOutputMax = 0x1c8;
}

public static class C_OP_RemapAverageHitboxSpeedtoCP {
    public const ulong m_nInControlPointNumber = 0x1d0;
    public const ulong m_nOutControlPointNumber = 0x1d4;
    public const ulong m_nField = 0x1d8;
    public const ulong m_flInputMin = 0x1e0;
    public const ulong m_flInputMax = 0x338;
    public const ulong m_flOutputMin = 0x490;
    public const ulong m_flOutputMax = 0x5e8;
    public const ulong m_nHeightControlPointNumber = 0x740;
    public const ulong m_vecComparisonVelocity = 0x748;
    public const ulong m_HitboxSetName = 0xda0;
}

public static class C_OP_RemapAverageScalarValuetoCP {
    public const ulong m_nOutControlPointNumber = 0x1d0;
    public const ulong m_nOutVectorField = 0x1d4;
    public const ulong m_nField = 0x1d8;
    public const ulong m_flInputMin = 0x1dc;
    public const ulong m_flInputMax = 0x1e0;
    public const ulong m_flOutputMin = 0x1e4;
    public const ulong m_flOutputMax = 0x1e8;
}

public static class C_OP_RemapBoundingVolumetoCP {
    public const ulong m_nOutControlPointNumber = 0x1d0;
    public const ulong m_flInputMin = 0x1d4;
    public const ulong m_flInputMax = 0x1d8;
    public const ulong m_flOutputMin = 0x1dc;
    public const ulong m_flOutputMax = 0x1e0;
}

public static class C_OP_RemapCPVelocityToVector {
    public const ulong m_nControlPoint = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flScale = 0x1c8;
    public const ulong m_bNormalize = 0x1cc;
}

public static class C_OP_RemapCPtoCP {
    public const ulong m_nInputControlPoint = 0x1d0;
    public const ulong m_nOutputControlPoint = 0x1d4;
    public const ulong m_nInputField = 0x1d8;
    public const ulong m_nOutputField = 0x1dc;
    public const ulong m_flInputMin = 0x1e0;
    public const ulong m_flInputMax = 0x1e4;
    public const ulong m_flOutputMin = 0x1e8;
    public const ulong m_flOutputMax = 0x1ec;
    public const ulong m_bDerivative = 0x1f0;
    public const ulong m_flInterpRate = 0x1f4;
}

public static class C_OP_RemapCPtoScalar {
    public const ulong m_nCPInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nField = 0x1c8;
    public const ulong m_flInputMin = 0x1cc;
    public const ulong m_flInputMax = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_flStartTime = 0x1dc;
    public const ulong m_flEndTime = 0x1e0;
    public const ulong m_flInterpRate = 0x1e4;
    public const ulong m_nSetMethod = 0x1e8;
}

public static class C_OP_RemapCPtoVector {
    public const ulong m_nCPInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nLocalSpaceCP = 0x1c8;
    public const ulong m_vInputMin = 0x1cc;
    public const ulong m_vInputMax = 0x1d8;
    public const ulong m_vOutputMin = 0x1e4;
    public const ulong m_vOutputMax = 0x1f0;
    public const ulong m_flStartTime = 0x1fc;
    public const ulong m_flEndTime = 0x200;
    public const ulong m_flInterpRate = 0x204;
    public const ulong m_nSetMethod = 0x208;
    public const ulong m_bOffset = 0x20c;
    public const ulong m_bAccelerate = 0x20d;
}

public static class C_OP_RemapControlPointDirectionToVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flScale = 0x1c4;
    public const ulong m_nControlPointNumber = 0x1c8;
}

public static class C_OP_RemapControlPointOrientationToRotation {
    public const ulong m_nCP = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flOffsetRot = 0x1c8;
    public const ulong m_nComponent = 0x1cc;
}

public static class C_OP_RemapCrossProductOfTwoVectorsToVector {
    public const ulong m_InputVec1 = 0x1c0;
    public const ulong m_InputVec2 = 0x818;
    public const ulong m_nFieldOutput = 0xe70;
    public const ulong m_bNormalize = 0xe74;
}

public static class C_OP_RemapDensityGradientToVectorAttribute {
    public const ulong m_flRadiusScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
}

public static class C_OP_RemapDensityToVector {
    public const ulong m_flRadiusScale = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flDensityMin = 0x1c8;
    public const ulong m_flDensityMax = 0x1cc;
    public const ulong m_vecOutputMin = 0x1d0;
    public const ulong m_vecOutputMax = 0x1dc;
    public const ulong m_bUseParentDensity = 0x1e8;
    public const ulong m_nVoxelGridResolution = 0x1ec;
}

public static class C_OP_RemapDirectionToCPToVector {
    public const ulong m_nCP = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flScale = 0x1c8;
    public const ulong m_flOffsetRot = 0x1cc;
    public const ulong m_vecOffsetAxis = 0x1d0;
    public const ulong m_bNormalize = 0x1dc;
    public const ulong m_nFieldStrength = 0x1e0;
}

public static class C_OP_RemapDistanceToLineSegmentBase {
    public const ulong m_nCP0 = 0x1c0;
    public const ulong m_nCP1 = 0x1c4;
    public const ulong m_flMinInputValue = 0x1c8;
    public const ulong m_flMaxInputValue = 0x1cc;
    public const ulong m_bInfiniteLine = 0x1d0;
}

public static class C_OP_RemapDistanceToLineSegmentToScalar {
    public const ulong m_nFieldOutput = 0x1e0;
    public const ulong m_flMinOutputValue = 0x1e4;
    public const ulong m_flMaxOutputValue = 0x1e8;
}

public static class C_OP_RemapDistanceToLineSegmentToVector {
    public const ulong m_nFieldOutput = 0x1e0;
    public const ulong m_vMinOutputValue = 0x1e4;
    public const ulong m_vMaxOutputValue = 0x1f0;
}

public static class C_OP_RemapDotProductToCP {
    public const ulong m_nInputCP1 = 0x1d0;
    public const ulong m_nInputCP2 = 0x1d4;
    public const ulong m_nOutputCP = 0x1d8;
    public const ulong m_nOutVectorField = 0x1dc;
    public const ulong m_flInputMin = 0x1e0;
    public const ulong m_flInputMax = 0x338;
    public const ulong m_flOutputMin = 0x490;
    public const ulong m_flOutputMax = 0x5e8;
}

public static class C_OP_RemapDotProductToScalar {
    public const ulong m_nInputCP1 = 0x1c0;
    public const ulong m_nInputCP2 = 0x1c4;
    public const ulong m_nFieldOutput = 0x1c8;
    public const ulong m_flInputMin = 0x1cc;
    public const ulong m_flInputMax = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_bUseParticleVelocity = 0x1dc;
    public const ulong m_nSetMethod = 0x1e0;
    public const ulong m_bActiveRange = 0x1e4;
    public const ulong m_bUseParticleNormal = 0x1e5;
}

public static class C_OP_RemapExternalWindToCP {
    public const ulong m_nCP = 0x1d0;
    public const ulong m_nCPOutput = 0x1d4;
    public const ulong m_vecScale = 0x1d8;
    public const ulong m_bSetMagnitude = 0x830;
    public const ulong m_nOutVectorField = 0x834;
}

public static class C_OP_RemapModelVolumetoCP {
    public const ulong m_nBBoxType = 0x1d0;
    public const ulong m_nInControlPointNumber = 0x1d4;
    public const ulong m_nOutControlPointNumber = 0x1d8;
    public const ulong m_nOutControlPointMaxNumber = 0x1dc;
    public const ulong m_nField = 0x1e0;
    public const ulong m_flInputMin = 0x1e4;
    public const ulong m_flInputMax = 0x1e8;
    public const ulong m_flOutputMin = 0x1ec;
    public const ulong m_flOutputMax = 0x1f0;
}

public static class C_OP_RemapNamedModelElementEndCap {
    public const ulong m_hModel = 0x1c0;
    public const ulong m_inNames = 0x1c8;
    public const ulong m_outNames = 0x1e0;
    public const ulong m_fallbackNames = 0x1f8;
    public const ulong m_bModelFromRenderer = 0x210;
    public const ulong m_nFieldInput = 0x214;
    public const ulong m_nFieldOutput = 0x218;
}

public static class C_OP_RemapNamedModelElementOnceTimed {
    public const ulong m_hModel = 0x1c0;
    public const ulong m_inNames = 0x1c8;
    public const ulong m_outNames = 0x1e0;
    public const ulong m_fallbackNames = 0x1f8;
    public const ulong m_bModelFromRenderer = 0x210;
    public const ulong m_bProportional = 0x211;
    public const ulong m_nFieldInput = 0x214;
    public const ulong m_nFieldOutput = 0x218;
    public const ulong m_flRemapTime = 0x21c;
}

public static class C_OP_RemapParticleCountOnScalarEndCap {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nInputMin = 0x1c4;
    public const ulong m_nInputMax = 0x1c8;
    public const ulong m_flOutputMin = 0x1cc;
    public const ulong m_flOutputMax = 0x1d0;
    public const ulong m_bBackwards = 0x1d4;
    public const ulong m_nSetMethod = 0x1d8;
}

public static class C_OP_RemapParticleCountToScalar {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nInputMin = 0x1c8;
    public const ulong m_nInputMax = 0x320;
    public const ulong m_flOutputMin = 0x478;
    public const ulong m_flOutputMax = 0x5d0;
    public const ulong m_bActiveRange = 0x728;
    public const ulong m_nSetMethod = 0x72c;
}

public static class C_OP_RemapSDFDistanceToScalarAttribute {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_nVectorFieldInput = 0x1c4;
    public const ulong m_flMinDistance = 0x1c8;
    public const ulong m_flMaxDistance = 0x320;
    public const ulong m_flValueBelowMin = 0x478;
    public const ulong m_flValueAtMin = 0x5d0;
    public const ulong m_flValueAtMax = 0x728;
    public const ulong m_flValueAboveMax = 0x880;
}

public static class C_OP_RemapSDFDistanceToVectorAttribute {
    public const ulong m_nVectorFieldOutput = 0x1c0;
    public const ulong m_nVectorFieldInput = 0x1c4;
    public const ulong m_flMinDistance = 0x1c8;
    public const ulong m_flMaxDistance = 0x320;
    public const ulong m_vValueBelowMin = 0x478;
    public const ulong m_vValueAtMin = 0x484;
    public const ulong m_vValueAtMax = 0x490;
    public const ulong m_vValueAboveMax = 0x49c;
}

public static class C_OP_RemapSDFGradientToVectorAttribute {
    public const ulong m_nFieldOutput = 0x1c0;
}

public static class C_OP_RemapScalar {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_flOutputMin = 0x1d0;
    public const ulong m_flOutputMax = 0x1d4;
    public const ulong m_bOldCode = 0x1d8;
}

public static class C_OP_RemapScalarEndCap {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_flOutputMin = 0x1d0;
    public const ulong m_flOutputMax = 0x1d4;
}

public static class C_OP_RemapScalarOnceTimed {
    public const ulong m_bProportional = 0x1c0;
    public const ulong m_nFieldInput = 0x1c4;
    public const ulong m_nFieldOutput = 0x1c8;
    public const ulong m_flInputMin = 0x1cc;
    public const ulong m_flInputMax = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_flRemapTime = 0x1dc;
}

public static class C_OP_RemapSpeed {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flInputMin = 0x1c4;
    public const ulong m_flInputMax = 0x1c8;
    public const ulong m_flOutputMin = 0x1cc;
    public const ulong m_flOutputMax = 0x1d0;
    public const ulong m_nSetMethod = 0x1d4;
    public const ulong m_bIgnoreDelta = 0x1d8;
}

public static class C_OP_RemapSpeedtoCP {
    public const ulong m_nInControlPointNumber = 0x1d0;
    public const ulong m_nOutControlPointNumber = 0x1d4;
    public const ulong m_nField = 0x1d8;
    public const ulong m_flInputMin = 0x1dc;
    public const ulong m_flInputMax = 0x1e0;
    public const ulong m_flOutputMin = 0x1e4;
    public const ulong m_flOutputMax = 0x1e8;
    public const ulong m_bUseDeltaV = 0x1ec;
}

public static class C_OP_RemapTransformOrientationToRotations {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_vecRotation = 0x228;
    public const ulong m_bUseQuat = 0x234;
    public const ulong m_bWriteNormal = 0x235;
}

public static class C_OP_RemapTransformOrientationToYaw {
    public const ulong m_TransformInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x228;
    public const ulong m_flRotOffset = 0x22c;
    public const ulong m_flSpinStrength = 0x230;
}

public static class C_OP_RemapTransformToVelocity {
    public const ulong m_TransformInput = 0x1c0;
}

public static class C_OP_RemapTransformVisibilityToScalar {
    public const ulong m_nSetMethod = 0x1c0;
    public const ulong m_TransformInput = 0x1c8;
    public const ulong m_nFieldOutput = 0x230;
    public const ulong m_flInputMin = 0x234;
    public const ulong m_flInputMax = 0x238;
    public const ulong m_flOutputMin = 0x23c;
    public const ulong m_flOutputMax = 0x240;
    public const ulong m_flRadius = 0x244;
}

public static class C_OP_RemapTransformVisibilityToVector {
    public const ulong m_nSetMethod = 0x1c0;
    public const ulong m_TransformInput = 0x1c8;
    public const ulong m_nFieldOutput = 0x230;
    public const ulong m_flInputMin = 0x234;
    public const ulong m_flInputMax = 0x238;
    public const ulong m_vecOutputMin = 0x23c;
    public const ulong m_vecOutputMax = 0x248;
    public const ulong m_flRadius = 0x254;
}

public static class C_OP_RemapVectorComponentToScalar {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nComponent = 0x1c8;
}

public static class C_OP_RemapVectortoCP {
    public const ulong m_nOutControlPointNumber = 0x1c0;
    public const ulong m_nFieldInput = 0x1c4;
    public const ulong m_nParticleNumber = 0x1c8;
}

public static class C_OP_RemapVelocityToVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_flScale = 0x1c4;
    public const ulong m_bNormalize = 0x1c8;
}

public static class C_OP_RemapVisibilityScalar {
    public const ulong m_nFieldInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_flInputMin = 0x1c8;
    public const ulong m_flInputMax = 0x1cc;
    public const ulong m_flOutputMin = 0x1d0;
    public const ulong m_flOutputMax = 0x1d4;
    public const ulong m_flRadiusScale = 0x1d8;
}

public static class C_OP_RenderAsModels {
    public const ulong m_ModelList = 0x200;
    public const ulong m_flModelScale = 0x21c;
    public const ulong m_bFitToModelSize = 0x220;
    public const ulong m_bNonUniformScaling = 0x221;
    public const ulong m_nXAxisScalingAttribute = 0x224;
    public const ulong m_nYAxisScalingAttribute = 0x228;
    public const ulong m_nZAxisScalingAttribute = 0x22c;
    public const ulong m_nSizeCullBloat = 0x230;
}

public static class C_OP_RenderBlobs {
    public const ulong m_cubeWidth = 0x200;
    public const ulong m_cutoffRadius = 0x358;
    public const ulong m_renderRadius = 0x4b0;
    public const ulong m_nScaleCP = 0x608;
    public const ulong m_MaterialVars = 0x610;
    public const ulong m_hMaterial = 0x640;
}

public static class C_OP_RenderCables {
    public const ulong m_flRadiusScale = 0x200;
    public const ulong m_flAlphaScale = 0x358;
    public const ulong m_vecColorScale = 0x4b0;
    public const ulong m_nColorBlendType = 0xb08;
    public const ulong m_hMaterial = 0xb10;
    public const ulong m_nTextureRepetitionMode = 0xb18;
    public const ulong m_flTextureRepeatsPerSegment = 0xb20;
    public const ulong m_flTextureRepeatsCircumference = 0xc78;
    public const ulong m_flColorMapOffsetV = 0xdd0;
    public const ulong m_flColorMapOffsetU = 0xf28;
    public const ulong m_flNormalMapOffsetV = 0x1080;
    public const ulong m_flNormalMapOffsetU = 0x11d8;
    public const ulong m_bDrawCableCaps = 0x1330;
    public const ulong m_flCapRoundness = 0x1334;
    public const ulong m_flCapOffsetAmount = 0x1338;
    public const ulong m_flTessScale = 0x133c;
    public const ulong m_nMinTesselation = 0x1340;
    public const ulong m_nMaxTesselation = 0x1344;
    public const ulong m_nRoundness = 0x1348;
    public const ulong m_LightingTransform = 0x1350;
    public const ulong m_MaterialFloatVars = 0x13b8;
    public const ulong m_MaterialVecVars = 0x13e8;
}

public static class C_OP_RenderDeferredLight {
    public const ulong m_bUseAlphaTestWindow = 0x200;
    public const ulong m_bUseTexture = 0x201;
    public const ulong m_flRadiusScale = 0x204;
    public const ulong m_flAlphaScale = 0x208;
    public const ulong m_nAlpha2Field = 0x20c;
    public const ulong m_vecColorScale = 0x210;
    public const ulong m_nColorBlendType = 0x868;
    public const ulong m_flLightDistance = 0x86c;
    public const ulong m_flStartFalloff = 0x870;
    public const ulong m_flDistanceFalloff = 0x874;
    public const ulong m_flSpotFoV = 0x878;
    public const ulong m_nAlphaTestPointField = 0x87c;
    public const ulong m_nAlphaTestRangeField = 0x880;
    public const ulong m_nAlphaTestSharpnessField = 0x884;
    public const ulong m_hTexture = 0x888;
    public const ulong m_nHSVShiftControlPoint = 0x890;
}

public static class C_OP_RenderFlattenGrass {
    public const ulong m_flFlattenStrength = 0x200;
    public const ulong m_nStrengthFieldOverride = 0x204;
    public const ulong m_flRadiusScale = 0x208;
}

public static class C_OP_RenderGpuImplicit {
    public const ulong m_bUsePerParticleRadius = 0x200;
    public const ulong m_fGridSize = 0x208;
    public const ulong m_fRadiusScale = 0x360;
    public const ulong m_fIsosurfaceThreshold = 0x4b8;
    public const ulong m_nScaleCP = 0x610;
    public const ulong m_hMaterial = 0x618;
}

public static class C_OP_RenderLightBeam {
    public const ulong m_vColorBlend = 0x200;
    public const ulong m_nColorBlendType = 0x858;
    public const ulong m_flBrightnessLumensPerMeter = 0x860;
    public const ulong m_bCastShadows = 0x9b8;
    public const ulong m_flSkirt = 0x9c0;
    public const ulong m_flRange = 0xb18;
    public const ulong m_flThickness = 0xc70;
}

public static class C_OP_RenderLights {
    public const ulong m_flAnimationRate = 0x210;
    public const ulong m_nAnimationType = 0x214;
    public const ulong m_bAnimateInFPS = 0x218;
    public const ulong m_flMinSize = 0x21c;
    public const ulong m_flMaxSize = 0x220;
    public const ulong m_flStartFadeSize = 0x224;
    public const ulong m_flEndFadeSize = 0x228;
}

public static class C_OP_RenderMaterialProxy {
    public const ulong m_nMaterialControlPoint = 0x200;
    public const ulong m_nProxyType = 0x204;
    public const ulong m_MaterialVars = 0x208;
    public const ulong m_hOverrideMaterial = 0x220;
    public const ulong m_flMaterialOverrideEnabled = 0x228;
    public const ulong m_vecColorScale = 0x380;
    public const ulong m_flAlpha = 0x9d8;
    public const ulong m_nColorBlendType = 0xb30;
}

public static class C_OP_RenderModels {
    public const ulong m_bOnlyRenderInEffectsBloomPass = 0x200;
    public const ulong m_bOnlyRenderInEffectsWaterPass = 0x201;
    public const ulong m_bUseMixedResolutionRendering = 0x202;
    public const ulong m_bOnlyRenderInEffecsGameOverlay = 0x203;
    public const ulong m_ModelList = 0x208;
    public const ulong m_nBodyGroupField = 0x224;
    public const ulong m_nSubModelField = 0x228;
    public const ulong m_bIgnoreNormal = 0x22c;
    public const ulong m_bOrientZ = 0x22d;
    public const ulong m_bCenterOffset = 0x22e;
    public const ulong m_vecLocalOffset = 0x230;
    public const ulong m_vecLocalRotation = 0x888;
    public const ulong m_bIgnoreRadius = 0xee0;
    public const ulong m_nModelScaleCP = 0xee4;
    public const ulong m_vecComponentScale = 0xee8;
    public const ulong m_bLocalScale = 0x1540;
    public const ulong m_nSizeCullBloat = 0x1544;
    public const ulong m_bAnimated = 0x1548;
    public const ulong m_flAnimationRate = 0x154c;
    public const ulong m_bScaleAnimationRate = 0x1550;
    public const ulong m_bForceLoopingAnimation = 0x1551;
    public const ulong m_bResetAnimOnStop = 0x1552;
    public const ulong m_bManualAnimFrame = 0x1553;
    public const ulong m_nAnimationScaleField = 0x1554;
    public const ulong m_nAnimationField = 0x1558;
    public const ulong m_nManualFrameField = 0x155c;
    public const ulong m_ActivityName = 0x1560;
    public const ulong m_SequenceName = 0x1660;
    public const ulong m_bEnableClothSimulation = 0x1760;
    public const ulong m_hOverrideMaterial = 0x1768;
    public const ulong m_bOverrideTranslucentMaterials = 0x1770;
    public const ulong m_nSkin = 0x1778;
    public const ulong m_MaterialVars = 0x18d0;
    public const ulong m_modelInput = 0x18e8;
    public const ulong m_nLOD = 0x1948;
    public const ulong m_EconSlotName = 0x194c;
    public const ulong m_bOriginalModel = 0x1a4c;
    public const ulong m_bSuppressTint = 0x1a4d;
    public const ulong m_bUseRawMeshGroup = 0x1a4e;
    public const ulong m_bDisableShadows = 0x1a4f;
    public const ulong m_bAcceptsDecals = 0x1a50;
    public const ulong m_bForceDrawInterlevedWithSiblings = 0x1a51;
    public const ulong m_bDoNotDrawInParticlePass = 0x1a52;
    public const ulong m_szRenderAttribute = 0x1a53;
    public const ulong m_flRadiusScale = 0x1b58;
    public const ulong m_flAlphaScale = 0x1cb0;
    public const ulong m_flRollScale = 0x1e08;
    public const ulong m_nAlpha2Field = 0x1f60;
    public const ulong m_vecColorScale = 0x1f68;
    public const ulong m_nColorBlendType = 0x25c0;
}

public static class C_OP_RenderOmni2Light {
    public const ulong m_nLightType = 0x200;
    public const ulong m_vColorBlend = 0x208;
    public const ulong m_nColorBlendType = 0x860;
    public const ulong m_nBrightnessUnit = 0x864;
    public const ulong m_flBrightnessLumens = 0x868;
    public const ulong m_flBrightnessCandelas = 0x9c0;
    public const ulong m_bCastShadows = 0xb18;
    public const ulong m_flLuminaireRadius = 0xb20;
    public const ulong m_flSkirt = 0xc78;
    public const ulong m_flRange = 0xdd0;
    public const ulong m_flInnerConeAngle = 0xf28;
    public const ulong m_flOuterConeAngle = 0x1080;
    public const ulong m_hLightCookie = 0x11d8;
    public const ulong m_bSphericalCookie = 0x11e0;
}

public static class C_OP_RenderPoints {
    public const ulong m_hMaterial = 0x200;
}

public static class C_OP_RenderPostProcessing {
    public const ulong m_flPostProcessStrength = 0x200;
    public const ulong m_hPostTexture = 0x358;
    public const ulong m_nPriority = 0x360;
}

public static class C_OP_RenderProjected {
    public const ulong m_bProjectCharacter = 0x200;
    public const ulong m_bProjectWorld = 0x201;
    public const ulong m_bProjectWater = 0x202;
    public const ulong m_bFlipHorizontal = 0x203;
    public const ulong m_bEnableProjectedDepthControls = 0x204;
    public const ulong m_flMinProjectionDepth = 0x208;
    public const ulong m_flMaxProjectionDepth = 0x20c;
    public const ulong m_hProjectedMaterial = 0x210;
    public const ulong m_flAnimationTimeScale = 0x218;
    public const ulong m_bOrientToNormal = 0x21c;
    public const ulong m_MaterialVars = 0x220;
}

public static class C_OP_RenderRopes {
    public const ulong m_bEnableFadingAndClamping = 0x2470;
    public const ulong m_flMinSize = 0x2474;
    public const ulong m_flMaxSize = 0x2478;
    public const ulong m_flStartFadeSize = 0x247c;
    public const ulong m_flEndFadeSize = 0x2480;
    public const ulong m_flStartFadeDot = 0x2484;
    public const ulong m_flEndFadeDot = 0x2488;
    public const ulong m_flRadiusTaper = 0x248c;
    public const ulong m_nMinTesselation = 0x2490;
    public const ulong m_nMaxTesselation = 0x2494;
    public const ulong m_flTessScale = 0x2498;
    public const ulong m_flTextureVWorldSize = 0x24a0;
    public const ulong m_flTextureVScrollRate = 0x25f8;
    public const ulong m_flTextureVOffset = 0x2750;
    public const ulong m_nTextureVParamsCP = 0x28a8;
    public const ulong m_bClampV = 0x28ac;
    public const ulong m_nScaleCP1 = 0x28b0;
    public const ulong m_nScaleCP2 = 0x28b4;
    public const ulong m_flScaleVSizeByControlPointDistance = 0x28b8;
    public const ulong m_flScaleVScrollByControlPointDistance = 0x28bc;
    public const ulong m_flScaleVOffsetByControlPointDistance = 0x28c0;
    public const ulong m_bUseScalarForTextureCoordinate = 0x28c5;
    public const ulong m_nScalarFieldForTextureCoordinate = 0x28c8;
    public const ulong m_flScalarAttributeTextureCoordScale = 0x28cc;
    public const ulong m_bReverseOrder = 0x28d0;
    public const ulong m_bClosedLoop = 0x28d1;
    public const ulong m_nOrientationType = 0x28d4;
    public const ulong m_nVectorFieldForOrientation = 0x28d8;
    public const ulong m_bDrawAsOpaque = 0x28dc;
    public const ulong m_bGenerateNormals = 0x28dd;
}

public static class C_OP_RenderScreenShake {
    public const ulong m_flDurationScale = 0x200;
    public const ulong m_flRadiusScale = 0x204;
    public const ulong m_flFrequencyScale = 0x208;
    public const ulong m_flAmplitudeScale = 0x20c;
    public const ulong m_nRadiusField = 0x210;
    public const ulong m_nDurationField = 0x214;
    public const ulong m_nFrequencyField = 0x218;
    public const ulong m_nAmplitudeField = 0x21c;
    public const ulong m_nFilterCP = 0x220;
}

public static class C_OP_RenderScreenVelocityRotate {
    public const ulong m_flRotateRateDegrees = 0x200;
    public const ulong m_flForwardDegrees = 0x204;
}

public static class C_OP_RenderSound {
    public const ulong m_flDurationScale = 0x200;
    public const ulong m_flSndLvlScale = 0x204;
    public const ulong m_flPitchScale = 0x208;
    public const ulong m_flVolumeScale = 0x20c;
    public const ulong m_nSndLvlField = 0x210;
    public const ulong m_nDurationField = 0x214;
    public const ulong m_nPitchField = 0x218;
    public const ulong m_nVolumeField = 0x21c;
    public const ulong m_nChannel = 0x220;
    public const ulong m_nCPReference = 0x224;
    public const ulong m_pszSoundName = 0x228;
    public const ulong m_bSuppressStopSoundEvent = 0x328;
}

public static class C_OP_RenderSprites {
    public const ulong m_nSequenceOverride = 0x2470;
    public const ulong m_nOrientationType = 0x25c8;
    public const ulong m_nOrientationControlPoint = 0x25cc;
    public const ulong m_bUseYawWithNormalAligned = 0x25d0;
    public const ulong m_flMinSize = 0x25d4;
    public const ulong m_flMaxSize = 0x25d8;
    public const ulong m_flAlphaAdjustWithSizeAdjust = 0x25dc;
    public const ulong m_flStartFadeSize = 0x25e0;
    public const ulong m_flEndFadeSize = 0x2738;
    public const ulong m_flStartFadeDot = 0x2890;
    public const ulong m_flEndFadeDot = 0x2894;
    public const ulong m_bDistanceAlpha = 0x2898;
    public const ulong m_bSoftEdges = 0x2899;
    public const ulong m_flEdgeSoftnessStart = 0x289c;
    public const ulong m_flEdgeSoftnessEnd = 0x28a0;
    public const ulong m_bOutline = 0x28a4;
    public const ulong m_OutlineColor = 0x28a5;
    public const ulong m_nOutlineAlpha = 0x28ac;
    public const ulong m_flOutlineStart0 = 0x28b0;
    public const ulong m_flOutlineStart1 = 0x28b4;
    public const ulong m_flOutlineEnd0 = 0x28b8;
    public const ulong m_flOutlineEnd1 = 0x28bc;
    public const ulong m_nLightingMode = 0x28c0;
    public const ulong m_flLightingTessellation = 0x28c8;
    public const ulong m_flLightingDirectionality = 0x2a20;
    public const ulong m_bParticleShadows = 0x2b78;
    public const ulong m_flShadowDensity = 0x2b7c;
}

public static class C_OP_RenderStandardLight {
    public const ulong m_nLightType = 0x200;
    public const ulong m_vecColorScale = 0x208;
    public const ulong m_nColorBlendType = 0x860;
    public const ulong m_flIntensity = 0x868;
    public const ulong m_bCastShadows = 0x9c0;
    public const ulong m_flTheta = 0x9c8;
    public const ulong m_flPhi = 0xb20;
    public const ulong m_flRadiusMultiplier = 0xc78;
    public const ulong m_nAttenuationStyle = 0xdd0;
    public const ulong m_flFalloffLinearity = 0xdd8;
    public const ulong m_flFiftyPercentFalloff = 0xf30;
    public const ulong m_flZeroPercentFalloff = 0x1088;
    public const ulong m_bRenderDiffuse = 0x11e0;
    public const ulong m_bRenderSpecular = 0x11e1;
    public const ulong m_lightCookie = 0x11e8;
    public const ulong m_nPriority = 0x11f0;
    public const ulong m_nFogLightingMode = 0x11f4;
    public const ulong m_flFogContribution = 0x11f8;
    public const ulong m_nCapsuleLightBehavior = 0x1350;
    public const ulong m_flCapsuleLength = 0x1354;
    public const ulong m_bReverseOrder = 0x1358;
    public const ulong m_bClosedLoop = 0x1359;
    public const ulong m_nPrevPntSource = 0x135c;
    public const ulong m_flMaxLength = 0x1360;
    public const ulong m_flMinLength = 0x1364;
    public const ulong m_bIgnoreDT = 0x1368;
    public const ulong m_flConstrainRadiusToLengthRatio = 0x136c;
    public const ulong m_flLengthScale = 0x1370;
    public const ulong m_flLengthFadeInTime = 0x1374;
}

public static class C_OP_RenderStatusEffect {
    public const ulong m_pTextureColorWarp = 0x200;
    public const ulong m_pTextureDetail2 = 0x208;
    public const ulong m_pTextureDiffuseWarp = 0x210;
    public const ulong m_pTextureFresnelColorWarp = 0x218;
    public const ulong m_pTextureFresnelWarp = 0x220;
    public const ulong m_pTextureSpecularWarp = 0x228;
    public const ulong m_pTextureEnvMap = 0x230;
}

public static class C_OP_RenderStatusEffectCitadel {
    public const ulong m_pTextureColorWarp = 0x200;
    public const ulong m_pTextureNormal = 0x208;
    public const ulong m_pTextureMetalness = 0x210;
    public const ulong m_pTextureRoughness = 0x218;
    public const ulong m_pTextureSelfIllum = 0x220;
    public const ulong m_pTextureDetail = 0x228;
}

public static class C_OP_RenderText {
    public const ulong m_OutlineColor = 0x200;
    public const ulong m_DefaultText = 0x208;
}

public static class C_OP_RenderTonemapController {
    public const ulong m_flTonemapLevel = 0x200;
    public const ulong m_flTonemapWeight = 0x204;
    public const ulong m_nTonemapLevelField = 0x208;
    public const ulong m_nTonemapWeightField = 0x20c;
}

public static class C_OP_RenderTrails {
    public const ulong m_bEnableFadingAndClamping = 0x2740;
    public const ulong m_flStartFadeDot = 0x2744;
    public const ulong m_flEndFadeDot = 0x2748;
    public const ulong m_nPrevPntSource = 0x274c;
    public const ulong m_flMaxLength = 0x2750;
    public const ulong m_flMinLength = 0x2754;
    public const ulong m_bIgnoreDT = 0x2758;
    public const ulong m_flConstrainRadiusToLengthRatio = 0x275c;
    public const ulong m_flLengthScale = 0x2760;
    public const ulong m_flLengthFadeInTime = 0x2764;
    public const ulong m_flRadiusHeadTaper = 0x2768;
    public const ulong m_vecHeadColorScale = 0x28c0;
    public const ulong m_flHeadAlphaScale = 0x2f18;
    public const ulong m_flRadiusTaper = 0x3070;
    public const ulong m_vecTailColorScale = 0x31c8;
    public const ulong m_flTailAlphaScale = 0x3820;
    public const ulong m_nHorizCropField = 0x3978;
    public const ulong m_nVertCropField = 0x397c;
    public const ulong m_flForwardShift = 0x3980;
    public const ulong m_bFlipUVBasedOnPitchYaw = 0x3984;
}

public static class C_OP_RenderTreeShake {
    public const ulong m_flPeakStrength = 0x200;
    public const ulong m_nPeakStrengthFieldOverride = 0x204;
    public const ulong m_flRadius = 0x208;
    public const ulong m_nRadiusFieldOverride = 0x20c;
    public const ulong m_flShakeDuration = 0x210;
    public const ulong m_flTransitionTime = 0x214;
    public const ulong m_flTwistAmount = 0x218;
    public const ulong m_flRadialAmount = 0x21c;
    public const ulong m_flControlPointOrientationAmount = 0x220;
    public const ulong m_nControlPointForLinearDirection = 0x224;
}

public static class C_OP_RenderVRHapticEvent {
    public const ulong m_nHand = 0x200;
    public const ulong m_nOutputHandCP = 0x204;
    public const ulong m_nOutputField = 0x208;
    public const ulong m_flAmplitude = 0x210;
}

public static class C_OP_RepeatedTriggerChildGroup {
    public const ulong m_nChildGroupID = 0x1d0;
    public const ulong m_flClusterRefireTime = 0x1d8;
    public const ulong m_flClusterSize = 0x330;
    public const ulong m_flClusterCooldown = 0x488;
    public const ulong m_bLimitChildCount = 0x5e0;
}

public static class C_OP_RestartAfterDuration {
    public const ulong m_flDurationMin = 0x1c0;
    public const ulong m_flDurationMax = 0x1c4;
    public const ulong m_nCP = 0x1c8;
    public const ulong m_nCPField = 0x1cc;
    public const ulong m_nChildGroupID = 0x1d0;
    public const ulong m_bOnlyChildren = 0x1d4;
}

public static class C_OP_RopeSpringConstraint {
    public const ulong m_flRestLength = 0x1c0;
    public const ulong m_flMinDistance = 0x318;
    public const ulong m_flMaxDistance = 0x470;
    public const ulong m_flAdjustmentScale = 0x5c8;
    public const ulong m_flInitialRestingLength = 0x5d0;
}

public static class C_OP_RotateVector {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecRotAxisMin = 0x1c4;
    public const ulong m_vecRotAxisMax = 0x1d0;
    public const ulong m_flRotRateMin = 0x1dc;
    public const ulong m_flRotRateMax = 0x1e0;
    public const ulong m_bNormalize = 0x1e4;
    public const ulong m_flScale = 0x1e8;
}

public static class C_OP_RtEnvCull {
    public const ulong m_vecTestDir = 0x1c0;
    public const ulong m_vecTestNormal = 0x1cc;
    public const ulong m_bCullOnMiss = 0x1d8;
    public const ulong m_bStickInsteadOfCull = 0x1d9;
    public const ulong m_RtEnvName = 0x1da;
    public const ulong m_nRTEnvCP = 0x25c;
    public const ulong m_nComponent = 0x260;
}

public static class C_OP_SDFConstraint {
    public const ulong m_flMinDist = 0x1c0;
    public const ulong m_flMaxDist = 0x318;
    public const ulong m_nMaxIterations = 0x470;
}

public static class C_OP_SDFForce {
    public const ulong m_flForceScale = 0x1d0;
}

public static class C_OP_SDFLighting {
    public const ulong m_vLightingDir = 0x1c0;
    public const ulong m_vTint_0 = 0x1cc;
    public const ulong m_vTint_1 = 0x1d8;
}

public static class C_OP_SelectivelyEnableChildren {
    public const ulong m_nChildGroupID = 0x1d0;
    public const ulong m_nFirstChild = 0x328;
    public const ulong m_nNumChildrenToEnable = 0x480;
    public const ulong m_bPlayEndcapOnStop = 0x5d8;
    public const ulong m_bDestroyImmediately = 0x5d9;
}

public static class C_OP_SequenceFromModel {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
    public const ulong m_nFieldOutputAnim = 0x1c8;
    public const ulong m_flInputMin = 0x1cc;
    public const ulong m_flInputMax = 0x1d0;
    public const ulong m_flOutputMin = 0x1d4;
    public const ulong m_flOutputMax = 0x1d8;
    public const ulong m_nSetMethod = 0x1dc;
}

public static class C_OP_SetAttributeToScalarExpression {
    public const ulong m_nExpression = 0x1c0;
    public const ulong m_flInput1 = 0x1c8;
    public const ulong m_flInput2 = 0x320;
    public const ulong m_nOutputField = 0x478;
    public const ulong m_nSetMethod = 0x47c;
}

public static class C_OP_SetCPOrientationToDirection {
    public const ulong m_nInputControlPoint = 0x1c0;
    public const ulong m_nOutputControlPoint = 0x1c4;
}

public static class C_OP_SetCPOrientationToGroundNormal {
    public const ulong m_flInterpRate = 0x1c0;
    public const ulong m_flMaxTraceLength = 0x1c4;
    public const ulong m_flTolerance = 0x1c8;
    public const ulong m_flTraceOffset = 0x1cc;
    public const ulong m_CollisionGroupName = 0x1d0;
    public const ulong m_nTraceSet = 0x250;
    public const ulong m_nInputCP = 0x254;
    public const ulong m_nOutputCP = 0x258;
    public const ulong m_bIncludeWater = 0x268;
}

public static class C_OP_SetCPOrientationToPointAtCP {
    public const ulong m_nInputCP = 0x1d0;
    public const ulong m_nOutputCP = 0x1d4;
    public const ulong m_flInterpolation = 0x1d8;
    public const ulong m_b2DOrientation = 0x330;
    public const ulong m_bAvoidSingularity = 0x331;
    public const ulong m_bPointAway = 0x332;
}

public static class C_OP_SetCPtoVector {
    public const ulong m_nCPInput = 0x1c0;
    public const ulong m_nFieldOutput = 0x1c4;
}

public static class C_OP_SetChildControlPoints {
    public const ulong m_nChildGroupID = 0x1c0;
    public const ulong m_nFirstControlPoint = 0x1c4;
    public const ulong m_nNumControlPoints = 0x1c8;
    public const ulong m_nFirstSourcePoint = 0x1d0;
    public const ulong m_bReverse = 0x328;
    public const ulong m_bSetOrientation = 0x329;
}

public static class C_OP_SetControlPointFieldFromVectorExpression {
    public const ulong m_nExpression = 0x1d0;
    public const ulong m_vecInput1 = 0x1d8;
    public const ulong m_vecInput2 = 0x830;
    public const ulong m_flOutputRemap = 0xe88;
    public const ulong m_nOutputCP = 0xfe0;
    public const ulong m_nOutVectorField = 0xfe4;
}

public static class C_OP_SetControlPointFieldToScalarExpression {
    public const ulong m_nExpression = 0x1d0;
    public const ulong m_flInput1 = 0x1d8;
    public const ulong m_flInput2 = 0x330;
    public const ulong m_flOutputRemap = 0x488;
    public const ulong m_nOutputCP = 0x5e0;
    public const ulong m_nOutVectorField = 0x5e4;
}

public static class C_OP_SetControlPointFieldToWater {
    public const ulong m_nSourceCP = 0x1d0;
    public const ulong m_nDestCP = 0x1d4;
    public const ulong m_nCPField = 0x1d8;
}

public static class C_OP_SetControlPointFromObjectScale {
    public const ulong m_nCPInput = 0x1d0;
    public const ulong m_nCPOutput = 0x1d4;
}

public static class C_OP_SetControlPointOrientation {
    public const ulong m_bUseWorldLocation = 0x1d0;
    public const ulong m_bRandomize = 0x1d2;
    public const ulong m_bSetOnce = 0x1d3;
    public const ulong m_nCP = 0x1d4;
    public const ulong m_nHeadLocation = 0x1d8;
    public const ulong m_vecRotation = 0x1dc;
    public const ulong m_vecRotationB = 0x1e8;
    public const ulong m_flInterpolation = 0x1f8;
}

public static class C_OP_SetControlPointOrientationToCPVelocity {
    public const ulong m_nCPInput = 0x1d0;
    public const ulong m_nCPOutput = 0x1d4;
}

public static class C_OP_SetControlPointPositionToRandomActiveCP {
    public const ulong m_nCP1 = 0x1d0;
    public const ulong m_nHeadLocationMin = 0x1d4;
    public const ulong m_nHeadLocationMax = 0x1d8;
    public const ulong m_flResetRate = 0x1e0;
}

public static class C_OP_SetControlPointPositionToTimeOfDayValue {
    public const ulong m_nControlPointNumber = 0x1d0;
    public const ulong m_pszTimeOfDayParameter = 0x1d4;
    public const ulong m_vecDefaultValue = 0x254;
}

public static class C_OP_SetControlPointPositions {
    public const ulong m_bUseWorldLocation = 0x1d0;
    public const ulong m_bOrient = 0x1d1;
    public const ulong m_bSetOnce = 0x1d2;
    public const ulong m_nCP1 = 0x1d4;
    public const ulong m_nCP2 = 0x1d8;
    public const ulong m_nCP3 = 0x1dc;
    public const ulong m_nCP4 = 0x1e0;
    public const ulong m_vecCP1Pos = 0x1e4;
    public const ulong m_vecCP2Pos = 0x1f0;
    public const ulong m_vecCP3Pos = 0x1fc;
    public const ulong m_vecCP4Pos = 0x208;
    public const ulong m_nHeadLocation = 0x214;
}

public static class C_OP_SetControlPointRotation {
    public const ulong m_vecRotAxis = 0x1d0;
    public const ulong m_flRotRate = 0x828;
    public const ulong m_nCP = 0x980;
    public const ulong m_nLocalCP = 0x984;
}

public static class C_OP_SetControlPointToCPVelocity {
    public const ulong m_nCPInput = 0x1d0;
    public const ulong m_nCPOutputVel = 0x1d4;
    public const ulong m_bNormalize = 0x1d8;
    public const ulong m_nCPOutputMag = 0x1dc;
    public const ulong m_nCPField = 0x1e0;
    public const ulong m_vecComparisonVelocity = 0x1e8;
}

public static class C_OP_SetControlPointToCenter {
    public const ulong m_nCP1 = 0x1d0;
    public const ulong m_vecCP1Pos = 0x1d4;
    public const ulong m_nSetParent = 0x1e0;
}

public static class C_OP_SetControlPointToHMD {
    public const ulong m_nCP1 = 0x1d0;
    public const ulong m_vecCP1Pos = 0x1d4;
    public const ulong m_bOrientToHMD = 0x1e0;
}

public static class C_OP_SetControlPointToHand {
    public const ulong m_nCP1 = 0x1d0;
    public const ulong m_nHand = 0x1d4;
    public const ulong m_vecCP1Pos = 0x1d8;
    public const ulong m_bOrientToHand = 0x1e4;
}

public static class C_OP_SetControlPointToImpactPoint {
    public const ulong m_nCPOut = 0x1d0;
    public const ulong m_nCPIn = 0x1d4;
    public const ulong m_flUpdateRate = 0x1d8;
    public const ulong m_flTraceLength = 0x1e0;
    public const ulong m_flStartOffset = 0x338;
    public const ulong m_flOffset = 0x33c;
    public const ulong m_vecTraceDir = 0x340;
    public const ulong m_CollisionGroupName = 0x34c;
    public const ulong m_nTraceSet = 0x3cc;
    public const ulong m_bSetToEndpoint = 0x3d0;
    public const ulong m_bTraceToClosestSurface = 0x3d1;
    public const ulong m_bIncludeWater = 0x3d2;
}

public static class C_OP_SetControlPointToPlayer {
    public const ulong m_nCP1 = 0x1d0;
    public const ulong m_vecCP1Pos = 0x1d4;
    public const ulong m_bOrientToEyes = 0x1e0;
}

public static class C_OP_SetControlPointToVectorExpression {
    public const ulong m_nExpression = 0x1d0;
    public const ulong m_nOutputCP = 0x1d4;
    public const ulong m_vInput1 = 0x1d8;
    public const ulong m_vInput2 = 0x830;
    public const ulong m_bNormalizedOutput = 0xe88;
}

public static class C_OP_SetControlPointToWaterSurface {
    public const ulong m_nSourceCP = 0x1d0;
    public const ulong m_nDestCP = 0x1d4;
    public const ulong m_nFlowCP = 0x1d8;
    public const ulong m_nActiveCP = 0x1dc;
    public const ulong m_nActiveCPField = 0x1e0;
    public const ulong m_flRetestRate = 0x1e8;
    public const ulong m_bAdaptiveThreshold = 0x340;
}

public static class C_OP_SetControlPointsToModelParticles {
    public const ulong m_HitboxSetName = 0x1c0;
    public const ulong m_AttachmentName = 0x240;
    public const ulong m_nFirstControlPoint = 0x2c0;
    public const ulong m_nNumControlPoints = 0x2c4;
    public const ulong m_nFirstSourcePoint = 0x2c8;
    public const ulong m_bSkin = 0x2cc;
    public const ulong m_bAttachment = 0x2cd;
}

public static class C_OP_SetControlPointsToParticle {
    public const ulong m_nChildGroupID = 0x1c0;
    public const ulong m_nFirstControlPoint = 0x1c4;
    public const ulong m_nNumControlPoints = 0x1c8;
    public const ulong m_nFirstSourcePoint = 0x1cc;
    public const ulong m_bSetOrientation = 0x1d0;
    public const ulong m_nOrientationMode = 0x1d4;
    public const ulong m_nSetParent = 0x1d8;
}

public static class C_OP_SetFloat {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x318;
    public const ulong m_nSetMethod = 0x31c;
    public const ulong m_Lerp = 0x320;
    public const ulong m_bUseNewCode = 0x478;
}

public static class C_OP_SetFloatAttributeToVectorExpression {
    public const ulong m_nExpression = 0x1c0;
    public const ulong m_vInput1 = 0x1c8;
    public const ulong m_vInput2 = 0x820;
    public const ulong m_flOutputRemap = 0xe78;
    public const ulong m_nOutputField = 0xfd0;
    public const ulong m_nSetMethod = 0xfd4;
}

public static class C_OP_SetFloatCollection {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x318;
    public const ulong m_nSetMethod = 0x31c;
    public const ulong m_Lerp = 0x320;
}

public static class C_OP_SetFromCPSnapshot {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nAttributeToRead = 0x1c4;
    public const ulong m_nAttributeToWrite = 0x1c8;
    public const ulong m_nLocalSpaceCP = 0x1cc;
    public const ulong m_bRandom = 0x1d0;
    public const ulong m_bReverse = 0x1d1;
    public const ulong m_nRandomSeed = 0x1d4;
    public const ulong m_nSnapShotStartPoint = 0x1d8;
    public const ulong m_nSnapShotIncrement = 0x330;
    public const ulong m_flInterpolation = 0x488;
    public const ulong m_bSubSample = 0x5e0;
}

public static class C_OP_SetGravityToCP {
    public const ulong m_nCPInput = 0x1d0;
    public const ulong m_nCPOutput = 0x1d4;
    public const ulong m_flScale = 0x1d8;
    public const ulong m_bSetOrientation = 0x330;
    public const ulong m_bSetZDown = 0x331;
}

public static class C_OP_SetParentControlPointsToChildCP {
    public const ulong m_nChildGroupID = 0x1d0;
    public const ulong m_nChildControlPoint = 0x1d4;
    public const ulong m_nNumControlPoints = 0x1d8;
    public const ulong m_nFirstSourcePoint = 0x1dc;
    public const ulong m_bSetOrientation = 0x1e0;
}

public static class C_OP_SetPerChildControlPoint {
    public const ulong m_nChildGroupID = 0x1c0;
    public const ulong m_nFirstControlPoint = 0x1c4;
    public const ulong m_nNumControlPoints = 0x1c8;
    public const ulong m_nParticleIncrement = 0x1d0;
    public const ulong m_nFirstSourcePoint = 0x328;
    public const ulong m_bSetOrientation = 0x480;
    public const ulong m_nOrientationField = 0x484;
    public const ulong m_bNumBasedOnParticleCount = 0x488;
}

public static class C_OP_SetPerChildControlPointFromAttribute {
    public const ulong m_nChildGroupID = 0x1c0;
    public const ulong m_nFirstControlPoint = 0x1c4;
    public const ulong m_nNumControlPoints = 0x1c8;
    public const ulong m_nParticleIncrement = 0x1cc;
    public const ulong m_nFirstSourcePoint = 0x1d0;
    public const ulong m_bNumBasedOnParticleCount = 0x1d4;
    public const ulong m_nAttributeToRead = 0x1d8;
    public const ulong m_nCPField = 0x1dc;
}

public static class C_OP_SetRandomControlPointPosition {
    public const ulong m_bUseWorldLocation = 0x1d0;
    public const ulong m_bOrient = 0x1d1;
    public const ulong m_nCP1 = 0x1d4;
    public const ulong m_nHeadLocation = 0x1d8;
    public const ulong m_flReRandomRate = 0x1e0;
    public const ulong m_vecCPMinPos = 0x338;
    public const ulong m_vecCPMaxPos = 0x344;
    public const ulong m_flInterpolation = 0x350;
}

public static class C_OP_SetSimulationRate {
    public const ulong m_flSimulationScale = 0x1d0;
}

public static class C_OP_SetSingleControlPointPosition {
    public const ulong m_bSetOnce = 0x1d0;
    public const ulong m_nCP1 = 0x1d4;
    public const ulong m_vecCP1Pos = 0x1d8;
    public const ulong m_transformInput = 0x830;
}

public static class C_OP_SetToCP {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_vecOffset = 0x1c4;
    public const ulong m_bOffsetLocal = 0x1d0;
}

public static class C_OP_SetVariable {
    public const ulong m_variableReference = 0x1d0;
    public const ulong m_transformInput = 0x210;
    public const ulong m_positionOffset = 0x278;
    public const ulong m_rotationOffset = 0x284;
    public const ulong m_vecInput = 0x290;
    public const ulong m_floatInput = 0x8e8;
}

public static class C_OP_SetVec {
    public const ulong m_InputValue = 0x1c0;
    public const ulong m_nOutputField = 0x818;
    public const ulong m_nSetMethod = 0x81c;
    public const ulong m_Lerp = 0x820;
    public const ulong m_bNormalizedOutput = 0x978;
}

public static class C_OP_SetVectorAttributeToVectorExpression {
    public const ulong m_nExpression = 0x1c0;
    public const ulong m_vInput1 = 0x1c8;
    public const ulong m_vInput2 = 0x820;
    public const ulong m_nOutputField = 0xe78;
    public const ulong m_nSetMethod = 0xe7c;
    public const ulong m_bNormalizedOutput = 0xe80;
}

public static class C_OP_SnapshotRigidSkinToBones {
    public const ulong m_bTransformNormals = 0x1c0;
    public const ulong m_bTransformRadii = 0x1c1;
    public const ulong m_nControlPointNumber = 0x1c4;
}

public static class C_OP_SnapshotSkinToBones {
    public const ulong m_bTransformNormals = 0x1c0;
    public const ulong m_bTransformRadii = 0x1c1;
    public const ulong m_nControlPointNumber = 0x1c4;
    public const ulong m_flLifeTimeFadeStart = 0x1c8;
    public const ulong m_flLifeTimeFadeEnd = 0x1cc;
    public const ulong m_flJumpThreshold = 0x1d0;
    public const ulong m_flPrevPosScale = 0x1d4;
}

public static class C_OP_SpringToVectorConstraint {
    public const ulong m_flRestLength = 0x1c0;
    public const ulong m_flMinDistance = 0x318;
    public const ulong m_flMaxDistance = 0x470;
    public const ulong m_flRestingLength = 0x5c8;
    public const ulong m_vecAnchorVector = 0x720;
}

public static class C_OP_StopAfterCPDuration {
    public const ulong m_flDuration = 0x1d0;
    public const ulong m_bDestroyImmediately = 0x328;
    public const ulong m_bPlayEndCap = 0x329;
}

public static class C_OP_TeleportBeam {
    public const ulong m_nCPPosition = 0x1c0;
    public const ulong m_nCPVelocity = 0x1c4;
    public const ulong m_nCPMisc = 0x1c8;
    public const ulong m_nCPColor = 0x1cc;
    public const ulong m_nCPInvalidColor = 0x1d0;
    public const ulong m_nCPExtraArcData = 0x1d4;
    public const ulong m_vGravity = 0x1d8;
    public const ulong m_flArcMaxDuration = 0x1e4;
    public const ulong m_flSegmentBreak = 0x1e8;
    public const ulong m_flArcSpeed = 0x1ec;
    public const ulong m_flAlpha = 0x1f0;
}

public static class C_OP_TimeVaryingForce {
    public const ulong m_flStartLerpTime = 0x1d0;
    public const ulong m_StartingForce = 0x1d4;
    public const ulong m_flEndLerpTime = 0x1e0;
    public const ulong m_EndingForce = 0x1e4;
}

public static class C_OP_TurbulenceForce {
    public const ulong m_flNoiseCoordScale0 = 0x1d0;
    public const ulong m_flNoiseCoordScale1 = 0x1d4;
    public const ulong m_flNoiseCoordScale2 = 0x1d8;
    public const ulong m_flNoiseCoordScale3 = 0x1dc;
    public const ulong m_vecNoiseAmount0 = 0x1e0;
    public const ulong m_vecNoiseAmount1 = 0x1ec;
    public const ulong m_vecNoiseAmount2 = 0x1f8;
    public const ulong m_vecNoiseAmount3 = 0x204;
}

public static class C_OP_TwistAroundAxis {
    public const ulong m_fForceAmount = 0x1d0;
    public const ulong m_TwistAxis = 0x1d4;
    public const ulong m_bLocalSpace = 0x1e0;
    public const ulong m_nControlPointNumber = 0x1e4;
}

public static class C_OP_UpdateLightSource {
    public const ulong m_vColorTint = 0x1c0;
    public const ulong m_flBrightnessScale = 0x1c4;
    public const ulong m_flRadiusScale = 0x1c8;
    public const ulong m_flMinimumLightingRadius = 0x1cc;
    public const ulong m_flMaximumLightingRadius = 0x1d0;
    public const ulong m_flPositionDampingConstant = 0x1d4;
}

public static class C_OP_VectorFieldSnapshot {
    public const ulong m_nControlPointNumber = 0x1c0;
    public const ulong m_nAttributeToWrite = 0x1c4;
    public const ulong m_nLocalSpaceCP = 0x1c8;
    public const ulong m_flInterpolation = 0x1d0;
    public const ulong m_vecScale = 0x328;
    public const ulong m_flBoundaryDampening = 0x980;
    public const ulong m_bSetVelocity = 0x984;
    public const ulong m_bLockToSurface = 0x985;
    public const ulong m_flGridSpacing = 0x988;
}

public static class C_OP_VectorNoise {
    public const ulong m_nFieldOutput = 0x1c0;
    public const ulong m_vecOutputMin = 0x1c4;
    public const ulong m_vecOutputMax = 0x1d0;
    public const ulong m_fl4NoiseScale = 0x1dc;
    public const ulong m_bAdditive = 0x1e0;
    public const ulong m_bOffset = 0x1e1;
    public const ulong m_flNoiseAnimationTimeScale = 0x1e4;
}

public static class C_OP_VelocityDecay {
    public const ulong m_flMinVelocity = 0x1c0;
}

public static class C_OP_VelocityMatchingForce {
    public const ulong m_flDirScale = 0x1c0;
    public const ulong m_flSpdScale = 0x1c4;
    public const ulong m_nCPBroadcast = 0x1c8;
}

public static class C_OP_WindForce {
    public const ulong m_vForce = 0x1d0;
}

public static class C_OP_WorldTraceConstraint {
    public const ulong m_nCP = 0x1c0;
    public const ulong m_vecCpOffset = 0x1c4;
    public const ulong m_nCollisionMode = 0x1d0;
    public const ulong m_nCollisionModeMin = 0x1d4;
    public const ulong m_nTraceSet = 0x1d8;
    public const ulong m_CollisionGroupName = 0x1dc;
    public const ulong m_bWorldOnly = 0x25c;
    public const ulong m_bBrushOnly = 0x25d;
    public const ulong m_bIncludeWater = 0x25e;
    public const ulong m_nIgnoreCP = 0x260;
    public const ulong m_flCpMovementTolerance = 0x264;
    public const ulong m_flRetestRate = 0x268;
    public const ulong m_flTraceTolerance = 0x26c;
    public const ulong m_flCollisionConfirmationSpeed = 0x270;
    public const ulong m_nMaxTracesPerFrame = 0x274;
    public const ulong m_flRadiusScale = 0x278;
    public const ulong m_flBounceAmount = 0x3d0;
    public const ulong m_flSlideAmount = 0x528;
    public const ulong m_flRandomDirScale = 0x680;
    public const ulong m_bDecayBounce = 0x7d8;
    public const ulong m_bKillonContact = 0x7d9;
    public const ulong m_flMinSpeed = 0x7dc;
    public const ulong m_bSetNormal = 0x7e0;
    public const ulong m_nStickOnCollisionField = 0x7e4;
    public const ulong m_flStopSpeed = 0x7e8;
    public const ulong m_nEntityStickDataField = 0x940;
    public const ulong m_nEntityStickNormalField = 0x944;
}

public static class CollisionGroupContext_t {
    public const ulong m_nCollisionGroupNumber = 0x0;
}

public static class ControlPointReference_t {
    public const ulong m_controlPointNameString = 0x0;
    public const ulong m_vOffsetFromControlPoint = 0x4;
    public const ulong m_bOffsetInLocalSpace = 0x10;
}

public static class FloatInputMaterialVariable_t {
    public const ulong m_strVariable = 0x0;
    public const ulong m_flInput = 0x8;
}

public static class MaterialVariable_t {
    public const ulong m_strVariable = 0x0;
    public const ulong m_nVariableField = 0x8;
    public const ulong m_flScale = 0xc;
}

public static class ModelReference_t {
    public const ulong m_model = 0x0;
    public const ulong m_flRelativeProbabilityOfSpawn = 0x8;
}

public static class PARTICLE_EHANDLE__ {
    public const ulong unused = 0x0;
}

public static class PARTICLE_WORLD_HANDLE__ {
    public const ulong unused = 0x0;
}

public static class ParticleAttributeIndex_t {
    public const ulong m_Value = 0x0;
}

public static class ParticleChildrenInfo_t {
    public const ulong m_ChildRef = 0x0;
    public const ulong m_flDelay = 0x8;
    public const ulong m_bEndCap = 0xc;
    public const ulong m_bDisableChild = 0xd;
    public const ulong m_nDetailLevel = 0x10;
}

public static class ParticleControlPointConfiguration_t {
    public const ulong m_name = 0x0;
    public const ulong m_drivers = 0x8;
    public const ulong m_previewState = 0x20;
}

public static class ParticleControlPointDriver_t {
    public const ulong m_iControlPoint = 0x0;
    public const ulong m_iAttachType = 0x4;
    public const ulong m_attachmentName = 0x8;
    public const ulong m_vecOffset = 0x10;
    public const ulong m_angOffset = 0x1c;
    public const ulong m_entityName = 0x28;
}

public static class ParticleNamedValueConfiguration_t {
    public const ulong m_ConfigName = 0x0;
    public const ulong m_ConfigValue = 0x8;
    public const ulong m_iAttachType = 0x18;
    public const ulong m_BoundEntityPath = 0x20;
    public const ulong m_strEntityScope = 0x28;
    public const ulong m_strAttachmentName = 0x30;
}

public static class ParticleNamedValueSource_t {
    public const ulong m_Name = 0x0;
    public const ulong m_IsPublic = 0x8;
    public const ulong m_ValueType = 0xc;
    public const ulong m_DefaultConfig = 0x10;
    public const ulong m_NamedConfigs = 0x48;
}

public static class ParticlePreviewBodyGroup_t {
    public const ulong m_bodyGroupName = 0x0;
    public const ulong m_nValue = 0x8;
}

public static class ParticlePreviewState_t {
    public const ulong m_previewModel = 0x0;
    public const ulong m_nModSpecificData = 0x8;
    public const ulong m_groundType = 0xc;
    public const ulong m_sequenceName = 0x10;
    public const ulong m_nFireParticleOnSequenceFrame = 0x18;
    public const ulong m_hitboxSetName = 0x20;
    public const ulong m_materialGroupName = 0x28;
    public const ulong m_vecBodyGroups = 0x30;
    public const ulong m_flPlaybackSpeed = 0x48;
    public const ulong m_flParticleSimulationRate = 0x4c;
    public const ulong m_bShouldDrawHitboxes = 0x50;
    public const ulong m_bShouldDrawAttachments = 0x51;
    public const ulong m_bShouldDrawAttachmentNames = 0x52;
    public const ulong m_bShouldDrawControlPointAxes = 0x53;
    public const ulong m_bAnimationNonLooping = 0x54;
    public const ulong m_vecPreviewGravity = 0x58;
}

public static class PointDefinitionWithTimeValues_t {
    public const ulong m_flTimeDuration = 0x14;
}

public static class PointDefinition_t {
    public const ulong m_nControlPoint = 0x0;
    public const ulong m_bLocalCoords = 0x4;
    public const ulong m_vOffset = 0x8;
}

public static class SequenceWeightedList_t {
    public const ulong m_nSequence = 0x0;
    public const ulong m_flRelativeWeight = 0x4;
}

public static class TextureControls_t {
    public const ulong m_flFinalTextureScaleU = 0x0;
    public const ulong m_flFinalTextureScaleV = 0x158;
    public const ulong m_flFinalTextureOffsetU = 0x2b0;
    public const ulong m_flFinalTextureOffsetV = 0x408;
    public const ulong m_flFinalTextureUVRotation = 0x560;
    public const ulong m_flZoomScale = 0x6b8;
    public const ulong m_flDistortion = 0x810;
    public const ulong m_bRandomizeOffsets = 0x968;
    public const ulong m_bClampUVs = 0x969;
    public const ulong m_nPerParticleBlend = 0x96c;
    public const ulong m_nPerParticleScale = 0x970;
    public const ulong m_nPerParticleOffsetU = 0x974;
    public const ulong m_nPerParticleOffsetV = 0x978;
    public const ulong m_nPerParticleRotation = 0x97c;
    public const ulong m_nPerParticleZoom = 0x980;
    public const ulong m_nPerParticleDistortion = 0x984;
}

public static class TextureGroup_t {
    public const ulong m_bEnabled = 0x0;
    public const ulong m_bReplaceTextureWithGradient = 0x1;
    public const ulong m_hTexture = 0x8;
    public const ulong m_Gradient = 0x10;
    public const ulong m_nTextureType = 0x28;
    public const ulong m_nTextureChannels = 0x2c;
    public const ulong m_nTextureBlendMode = 0x30;
    public const ulong m_flTextureBlend = 0x38;
    public const ulong m_TextureControls = 0x190;
}

public static class VecInputMaterialVariable_t {
    public const ulong m_strVariable = 0x0;
    public const ulong m_vecInput = 0x8;
}