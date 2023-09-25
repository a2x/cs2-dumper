public static class CBaseRendererSource2 {
    public const nint m_flRadiusScale = 0x200;
    public const nint m_flAlphaScale = 0x358;
    public const nint m_flRollScale = 0x4B0;
    public const nint m_nAlpha2Field = 0x608;
    public const nint m_vecColorScale = 0x610;
    public const nint m_nColorBlendType = 0xC68;
    public const nint m_nShaderType = 0xC6C;
    public const nint m_strShaderOverride = 0xC70;
    public const nint m_flCenterXOffset = 0xC78;
    public const nint m_flCenterYOffset = 0xDD0;
    public const nint m_flBumpStrength = 0xF28;
    public const nint m_nCropTextureOverride = 0xF2C;
    public const nint m_vecTexturesInput = 0xF30;
    public const nint m_flAnimationRate = 0xF48;
    public const nint m_nAnimationType = 0xF4C;
    public const nint m_bAnimateInFPS = 0xF50;
    public const nint m_flSelfIllumAmount = 0xF58;
    public const nint m_flDiffuseAmount = 0x10B0;
    public const nint m_nLightingControlPoint = 0x1208;
    public const nint m_nSelfIllumPerParticle = 0x120C;
    public const nint m_nOutputBlendMode = 0x1210;
    public const nint m_bGammaCorrectVertexColors = 0x1214;
    public const nint m_bSaturateColorPreAlphaBlend = 0x1215;
    public const nint m_flAddSelfAmount = 0x1218;
    public const nint m_flDesaturation = 0x1370;
    public const nint m_flOverbrightFactor = 0x14C8;
    public const nint m_nHSVShiftControlPoint = 0x1620;
    public const nint m_nFogType = 0x1624;
    public const nint m_flFogAmount = 0x1628;
    public const nint m_bTintByFOW = 0x1780;
    public const nint m_bTintByGlobalLight = 0x1781;
    public const nint m_nPerParticleAlphaReference = 0x1784;
    public const nint m_nPerParticleAlphaRefWindow = 0x1788;
    public const nint m_nAlphaReferenceType = 0x178C;
    public const nint m_flAlphaReferenceSoftness = 0x1790;
    public const nint m_flSourceAlphaValueToMapToZero = 0x18E8;
    public const nint m_flSourceAlphaValueToMapToOne = 0x1A40;
    public const nint m_bRefract = 0x1B98;
    public const nint m_bRefractSolid = 0x1B99;
    public const nint m_flRefractAmount = 0x1BA0;
    public const nint m_nRefractBlurRadius = 0x1CF8;
    public const nint m_nRefractBlurType = 0x1CFC;
    public const nint m_bOnlyRenderInEffectsBloomPass = 0x1D00;
    public const nint m_bOnlyRenderInEffectsWaterPass = 0x1D01;
    public const nint m_bUseMixedResolutionRendering = 0x1D02;
    public const nint m_bOnlyRenderInEffecsGameOverlay = 0x1D03;
    public const nint m_stencilTestID = 0x1D04;
    public const nint m_bStencilTestExclude = 0x1D84;
    public const nint m_stencilWriteID = 0x1D85;
    public const nint m_bWriteStencilOnDepthPass = 0x1E05;
    public const nint m_bWriteStencilOnDepthFail = 0x1E06;
    public const nint m_bReverseZBuffering = 0x1E07;
    public const nint m_bDisableZBuffering = 0x1E08;
    public const nint m_nFeatheringMode = 0x1E0C;
    public const nint m_flFeatheringMinDist = 0x1E10;
    public const nint m_flFeatheringMaxDist = 0x1F68;
    public const nint m_flFeatheringFilter = 0x20C0;
    public const nint m_flDepthBias = 0x2218;
    public const nint m_nSortMethod = 0x221C;
    public const nint m_bBlendFramesSeq0 = 0x2220;
    public const nint m_bMaxLuminanceBlendingSequence0 = 0x2221;
}

public static class CBaseTrailRenderer {
    public const nint m_nOrientationType = 0x2470;
    public const nint m_nOrientationControlPoint = 0x2474;
    public const nint m_flMinSize = 0x2478;
    public const nint m_flMaxSize = 0x247C;
    public const nint m_flStartFadeSize = 0x2480;
    public const nint m_flEndFadeSize = 0x25D8;
    public const nint m_bClampV = 0x2730;
}

public static class CGeneralRandomRotation {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flDegrees = 0x1C4;
    public const nint m_flDegreesMin = 0x1C8;
    public const nint m_flDegreesMax = 0x1CC;
    public const nint m_flRotationRandExponent = 0x1D0;
    public const nint m_bRandomlyFlipDirection = 0x1D4;
}

public static class CGeneralSpin {
    public const nint m_nSpinRateDegrees = 0x1C0;
    public const nint m_nSpinRateMinDegrees = 0x1C4;
    public const nint m_fSpinRateStopTime = 0x1CC;
}

public static class CNewParticleEffect {
    public const nint m_pNext = 0x10;
    public const nint m_pPrev = 0x18;
    public const nint m_pParticles = 0x20;
    public const nint m_pDebugName = 0x28;
    public const nint m_bDontRemove = 0x0;
    public const nint m_bRemove = 0x0;
    public const nint m_bNeedsBBoxUpdate = 0x0;
    public const nint m_bIsFirstFrame = 0x0;
    public const nint m_bAutoUpdateBBox = 0x0;
    public const nint m_bAllocated = 0x0;
    public const nint m_bSimulate = 0x0;
    public const nint m_bShouldPerformCullCheck = 0x0;
    public const nint m_bForceNoDraw = 0x0;
    public const nint m_bShouldSave = 0x0;
    public const nint m_bDisableAggregation = 0x0;
    public const nint m_bShouldSimulateDuringGamePaused = 0x0;
    public const nint m_bShouldCheckFoW = 0x0;
    public const nint m_vSortOrigin = 0x40;
    public const nint m_flScale = 0x4C;
    public const nint m_hOwner = 0x50;
    public const nint m_pOwningParticleProperty = 0x58;
    public const nint m_flFreezeTransitionStart = 0x70;
    public const nint m_flFreezeTransitionDuration = 0x74;
    public const nint m_flFreezeTransitionOverride = 0x78;
    public const nint m_bFreezeTransitionActive = 0x7C;
    public const nint m_bFreezeTargetState = 0x7D;
    public const nint m_bCanFreeze = 0x7E;
    public const nint m_LastMin = 0x80;
    public const nint m_LastMax = 0x8C;
    public const nint m_nSplitScreenUser = 0x98;
    public const nint m_vecAggregationCenter = 0x9C;
    public const nint m_RefCount = 0xC0;
}

public static class CParticleFloatInput {
    public const nint m_nType = 0x10;
    public const nint m_nMapType = 0x14;
    public const nint m_flLiteralValue = 0x18;
    public const nint m_NamedValue = 0x20;
    public const nint m_nControlPoint = 0x60;
    public const nint m_nScalarAttribute = 0x64;
    public const nint m_nVectorAttribute = 0x68;
    public const nint m_nVectorComponent = 0x6C;
    public const nint m_flRandomMin = 0x70;
    public const nint m_flRandomMax = 0x74;
    public const nint m_bHasRandomSignFlip = 0x78;
    public const nint m_nRandomSeed = 0x7C;
    public const nint m_nRandomMode = 0x80;
    public const nint m_flLOD0 = 0x88;
    public const nint m_flLOD1 = 0x8C;
    public const nint m_flLOD2 = 0x90;
    public const nint m_flLOD3 = 0x94;
    public const nint m_nNoiseInputVectorAttribute = 0x98;
    public const nint m_flNoiseOutputMin = 0x9C;
    public const nint m_flNoiseOutputMax = 0xA0;
    public const nint m_flNoiseScale = 0xA4;
    public const nint m_vecNoiseOffsetRate = 0xA8;
    public const nint m_flNoiseOffset = 0xB4;
    public const nint m_nNoiseOctaves = 0xB8;
    public const nint m_nNoiseTurbulence = 0xBC;
    public const nint m_nNoiseType = 0xC0;
    public const nint m_nNoiseModifier = 0xC4;
    public const nint m_flNoiseTurbulenceScale = 0xC8;
    public const nint m_flNoiseTurbulenceMix = 0xCC;
    public const nint m_flNoiseImgPreviewScale = 0xD0;
    public const nint m_bNoiseImgPreviewLive = 0xD4;
    public const nint m_flNoCameraFallback = 0xE0;
    public const nint m_bUseBoundsCenter = 0xE4;
    public const nint m_nInputMode = 0xE8;
    public const nint m_flMultFactor = 0xEC;
    public const nint m_flInput0 = 0xF0;
    public const nint m_flInput1 = 0xF4;
    public const nint m_flOutput0 = 0xF8;
    public const nint m_flOutput1 = 0xFC;
    public const nint m_flNotchedRangeMin = 0x100;
    public const nint m_flNotchedRangeMax = 0x104;
    public const nint m_flNotchedOutputOutside = 0x108;
    public const nint m_flNotchedOutputInside = 0x10C;
    public const nint m_nBiasType = 0x110;
    public const nint m_flBiasParameter = 0x114;
    public const nint m_Curve = 0x118;
}

public static class CParticleFunction {
    public const nint m_flOpStrength = 0x8;
    public const nint m_nOpEndCapState = 0x160;
    public const nint m_flOpStartFadeInTime = 0x164;
    public const nint m_flOpEndFadeInTime = 0x168;
    public const nint m_flOpStartFadeOutTime = 0x16C;
    public const nint m_flOpEndFadeOutTime = 0x170;
    public const nint m_flOpFadeOscillatePeriod = 0x174;
    public const nint m_bNormalizeToStopTime = 0x178;
    public const nint m_flOpTimeOffsetMin = 0x17C;
    public const nint m_flOpTimeOffsetMax = 0x180;
    public const nint m_nOpTimeOffsetSeed = 0x184;
    public const nint m_nOpTimeScaleSeed = 0x188;
    public const nint m_flOpTimeScaleMin = 0x18C;
    public const nint m_flOpTimeScaleMax = 0x190;
    public const nint m_bDisableOperator = 0x196;
    public const nint m_Notes = 0x198;
}

public static class CParticleFunctionEmitter {
    public const nint m_nEmitterIndex = 0x1B8;
}

public static class CParticleFunctionInitializer {
    public const nint m_nAssociatedEmitterIndex = 0x1B8;
}

public static class CParticleFunctionPreEmission {
    public const nint m_bRunOnce = 0x1C0;
}

public static class CParticleFunctionRenderer {
    public const nint VisibilityInputs = 0x1B8;
    public const nint m_bCannotBeRefracted = 0x1FC;
    public const nint m_bSkipRenderingOnMobile = 0x1FD;
}

public static class CParticleModelInput {
    public const nint m_nType = 0x10;
    public const nint m_NamedValue = 0x18;
    public const nint m_nControlPoint = 0x58;
}

public static class CParticleSystemDefinition {
    public const nint m_nBehaviorVersion = 0x8;
    public const nint m_PreEmissionOperators = 0x10;
    public const nint m_Emitters = 0x28;
    public const nint m_Initializers = 0x40;
    public const nint m_Operators = 0x58;
    public const nint m_ForceGenerators = 0x70;
    public const nint m_Constraints = 0x88;
    public const nint m_Renderers = 0xA0;
    public const nint m_Children = 0xB8;
    public const nint m_nFirstMultipleOverride_BackwardCompat = 0x178;
    public const nint m_nInitialParticles = 0x210;
    public const nint m_nMaxParticles = 0x214;
    public const nint m_nGroupID = 0x218;
    public const nint m_BoundingBoxMin = 0x21C;
    public const nint m_BoundingBoxMax = 0x228;
    public const nint m_flDepthSortBias = 0x234;
    public const nint m_nSortOverridePositionCP = 0x238;
    public const nint m_bInfiniteBounds = 0x23C;
    public const nint m_bEnableNamedValues = 0x23D;
    public const nint m_NamedValueDomain = 0x240;
    public const nint m_NamedValueLocals = 0x248;
    public const nint m_ConstantColor = 0x260;
    public const nint m_ConstantNormal = 0x264;
    public const nint m_flConstantRadius = 0x270;
    public const nint m_flConstantRotation = 0x274;
    public const nint m_flConstantRotationSpeed = 0x278;
    public const nint m_flConstantLifespan = 0x27C;
    public const nint m_nConstantSequenceNumber = 0x280;
    public const nint m_nConstantSequenceNumber1 = 0x284;
    public const nint m_nSnapshotControlPoint = 0x288;
    public const nint m_hSnapshot = 0x290;
    public const nint m_pszCullReplacementName = 0x298;
    public const nint m_flCullRadius = 0x2A0;
    public const nint m_flCullFillCost = 0x2A4;
    public const nint m_nCullControlPoint = 0x2A8;
    public const nint m_hFallback = 0x2B0;
    public const nint m_nFallbackMaxCount = 0x2B8;
    public const nint m_hLowViolenceDef = 0x2C0;
    public const nint m_hReferenceReplacement = 0x2C8;
    public const nint m_flPreSimulationTime = 0x2D0;
    public const nint m_flStopSimulationAfterTime = 0x2D4;
    public const nint m_flMaximumTimeStep = 0x2D8;
    public const nint m_flMaximumSimTime = 0x2DC;
    public const nint m_flMinimumSimTime = 0x2E0;
    public const nint m_flMinimumTimeStep = 0x2E4;
    public const nint m_nMinimumFrames = 0x2E8;
    public const nint m_nMinCPULevel = 0x2EC;
    public const nint m_nMinGPULevel = 0x2F0;
    public const nint m_flNoDrawTimeToGoToSleep = 0x2F4;
    public const nint m_flMaxDrawDistance = 0x2F8;
    public const nint m_flStartFadeDistance = 0x2FC;
    public const nint m_flMaxCreationDistance = 0x300;
    public const nint m_nAggregationMinAvailableParticles = 0x304;
    public const nint m_flAggregateRadius = 0x308;
    public const nint m_bShouldBatch = 0x30C;
    public const nint m_bShouldHitboxesFallbackToRenderBounds = 0x30D;
    public const nint m_bShouldHitboxesFallbackToSnapshot = 0x30E;
    public const nint m_nViewModelEffect = 0x310;
    public const nint m_bScreenSpaceEffect = 0x314;
    public const nint m_pszTargetLayerID = 0x318;
    public const nint m_nSkipRenderControlPoint = 0x320;
    public const nint m_nAllowRenderControlPoint = 0x324;
    public const nint m_bShouldSort = 0x328;
    public const nint m_controlPointConfigurations = 0x370;
}

public static class CParticleTransformInput {
    public const nint m_nType = 0x10;
    public const nint m_NamedValue = 0x18;
    public const nint m_bFollowNamedValue = 0x58;
    public const nint m_bSupportsDisabled = 0x59;
    public const nint m_bUseOrientation = 0x5A;
    public const nint m_nControlPoint = 0x5C;
    public const nint m_nControlPointRangeMax = 0x60;
    public const nint m_flEndCPGrowthTime = 0x64;
}

public static class CParticleVariableRef {
    public const nint m_variableName = 0x0;
    public const nint m_variableType = 0x38;
}

public static class CParticleVecInput {
    public const nint m_nType = 0x10;
    public const nint m_vLiteralValue = 0x14;
    public const nint m_LiteralColor = 0x20;
    public const nint m_NamedValue = 0x28;
    public const nint m_bFollowNamedValue = 0x68;
    public const nint m_nVectorAttribute = 0x6C;
    public const nint m_vVectorAttributeScale = 0x70;
    public const nint m_nControlPoint = 0x7C;
    public const nint m_nDeltaControlPoint = 0x80;
    public const nint m_vCPValueScale = 0x84;
    public const nint m_vCPRelativePosition = 0x90;
    public const nint m_vCPRelativeDir = 0x9C;
    public const nint m_FloatComponentX = 0xA8;
    public const nint m_FloatComponentY = 0x200;
    public const nint m_FloatComponentZ = 0x358;
    public const nint m_FloatInterp = 0x4B0;
    public const nint m_flInterpInput0 = 0x608;
    public const nint m_flInterpInput1 = 0x60C;
    public const nint m_vInterpOutput0 = 0x610;
    public const nint m_vInterpOutput1 = 0x61C;
    public const nint m_Gradient = 0x628;
    public const nint m_vRandomMin = 0x640;
    public const nint m_vRandomMax = 0x64C;
}

public static class CParticleVisibilityInputs {
    public const nint m_flCameraBias = 0x0;
    public const nint m_nCPin = 0x4;
    public const nint m_flProxyRadius = 0x8;
    public const nint m_flInputMin = 0xC;
    public const nint m_flInputMax = 0x10;
    public const nint m_flNoPixelVisibilityFallback = 0x14;
    public const nint m_flDistanceInputMin = 0x18;
    public const nint m_flDistanceInputMax = 0x1C;
    public const nint m_flDotInputMin = 0x20;
    public const nint m_flDotInputMax = 0x24;
    public const nint m_bDotCPAngles = 0x28;
    public const nint m_bDotCameraAngles = 0x29;
    public const nint m_flAlphaScaleMin = 0x2C;
    public const nint m_flAlphaScaleMax = 0x30;
    public const nint m_flRadiusScaleMin = 0x34;
    public const nint m_flRadiusScaleMax = 0x38;
    public const nint m_flRadiusScaleFOVBase = 0x3C;
    public const nint m_bRightEye = 0x40;
}

public static class CPathParameters {
    public const nint m_nStartControlPointNumber = 0x0;
    public const nint m_nEndControlPointNumber = 0x4;
    public const nint m_nBulgeControl = 0x8;
    public const nint m_flBulge = 0xC;
    public const nint m_flMidPoint = 0x10;
    public const nint m_vStartPointOffset = 0x14;
    public const nint m_vMidPointOffset = 0x20;
    public const nint m_vEndOffset = 0x2C;
}

public static class CRandomNumberGeneratorParameters {
    public const nint m_bDistributeEvenly = 0x0;
    public const nint m_nSeed = 0x4;
}

public static class C_INIT_AddVectorToVector {
    public const nint m_vecScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1CC;
    public const nint m_nFieldInput = 0x1D0;
    public const nint m_vOffsetMin = 0x1D4;
    public const nint m_vOffsetMax = 0x1E0;
    public const nint m_randomnessParameters = 0x1EC;
}

public static class C_INIT_AgeNoise {
    public const nint m_bAbsVal = 0x1C0;
    public const nint m_bAbsValInv = 0x1C1;
    public const nint m_flOffset = 0x1C4;
    public const nint m_flAgeMin = 0x1C8;
    public const nint m_flAgeMax = 0x1CC;
    public const nint m_flNoiseScale = 0x1D0;
    public const nint m_flNoiseScaleLoc = 0x1D4;
    public const nint m_vecOffsetLoc = 0x1D8;
}

public static class C_INIT_ChaoticAttractor {
    public const nint m_flAParm = 0x1C0;
    public const nint m_flBParm = 0x1C4;
    public const nint m_flCParm = 0x1C8;
    public const nint m_flDParm = 0x1CC;
    public const nint m_flScale = 0x1D0;
    public const nint m_flSpeedMin = 0x1D4;
    public const nint m_flSpeedMax = 0x1D8;
    public const nint m_nBaseCP = 0x1DC;
    public const nint m_bUniformSpeed = 0x1E0;
}

public static class C_INIT_ColorLitPerParticle {
    public const nint m_ColorMin = 0x1D8;
    public const nint m_ColorMax = 0x1DC;
    public const nint m_TintMin = 0x1E0;
    public const nint m_TintMax = 0x1E4;
    public const nint m_flTintPerc = 0x1E8;
    public const nint m_nTintBlendMode = 0x1EC;
    public const nint m_flLightAmplification = 0x1F0;
}

public static class C_INIT_CreateAlongPath {
    public const nint m_fMaxDistance = 0x1C0;
    public const nint m_PathParams = 0x1D0;
    public const nint m_bUseRandomCPs = 0x210;
    public const nint m_vEndOffset = 0x214;
    public const nint m_bSaveOffset = 0x220;
}

public static class C_INIT_CreateFromCPs {
    public const nint m_nIncrement = 0x1C0;
    public const nint m_nMinCP = 0x1C4;
    public const nint m_nMaxCP = 0x1C8;
    public const nint m_nDynamicCPCount = 0x1D0;
}

public static class C_INIT_CreateFromParentParticles {
    public const nint m_flVelocityScale = 0x1C0;
    public const nint m_flIncrement = 0x1C4;
    public const nint m_bRandomDistribution = 0x1C8;
    public const nint m_nRandomSeed = 0x1CC;
    public const nint m_bSubFrame = 0x1D0;
}

public static class C_INIT_CreateFromPlaneCache {
    public const nint m_vecOffsetMin = 0x1C0;
    public const nint m_vecOffsetMax = 0x1CC;
    public const nint m_bUseNormal = 0x1D9;
}

public static class C_INIT_CreateInEpitrochoid {
    public const nint m_nComponent1 = 0x1C0;
    public const nint m_nComponent2 = 0x1C4;
    public const nint m_TransformInput = 0x1C8;
    public const nint m_flParticleDensity = 0x230;
    public const nint m_flOffset = 0x388;
    public const nint m_flRadius1 = 0x4E0;
    public const nint m_flRadius2 = 0x638;
    public const nint m_bUseCount = 0x790;
    public const nint m_bUseLocalCoords = 0x791;
    public const nint m_bOffsetExistingPos = 0x792;
}

public static class C_INIT_CreateOnGrid {
    public const nint m_nXCount = 0x1C0;
    public const nint m_nYCount = 0x318;
    public const nint m_nZCount = 0x470;
    public const nint m_nXSpacing = 0x5C8;
    public const nint m_nYSpacing = 0x720;
    public const nint m_nZSpacing = 0x878;
    public const nint m_nControlPointNumber = 0x9D0;
    public const nint m_bLocalSpace = 0x9D4;
    public const nint m_bCenter = 0x9D5;
    public const nint m_bHollow = 0x9D6;
}

public static class C_INIT_CreateOnModel {
    public const nint m_modelInput = 0x1C0;
    public const nint m_transformInput = 0x220;
    public const nint m_nForceInModel = 0x288;
    public const nint m_nDesiredHitbox = 0x28C;
    public const nint m_nHitboxValueFromControlPointIndex = 0x290;
    public const nint m_vecHitBoxScale = 0x298;
    public const nint m_flBoneVelocity = 0x8F0;
    public const nint m_flMaxBoneVelocity = 0x8F4;
    public const nint m_vecDirectionBias = 0x8F8;
    public const nint m_HitboxSetName = 0xF50;
    public const nint m_bLocalCoords = 0xFD0;
    public const nint m_bUseBones = 0xFD1;
    public const nint m_flShellSize = 0xFD8;
}

public static class C_INIT_CreateOnModelAtHeight {
    public const nint m_bUseBones = 0x1C0;
    public const nint m_bForceZ = 0x1C1;
    public const nint m_nControlPointNumber = 0x1C4;
    public const nint m_nHeightCP = 0x1C8;
    public const nint m_bUseWaterHeight = 0x1CC;
    public const nint m_flDesiredHeight = 0x1D0;
    public const nint m_vecHitBoxScale = 0x328;
    public const nint m_vecDirectionBias = 0x980;
    public const nint m_nBiasType = 0xFD8;
    public const nint m_bLocalCoords = 0xFDC;
    public const nint m_bPreferMovingBoxes = 0xFDD;
    public const nint m_HitboxSetName = 0xFDE;
    public const nint m_flHitboxVelocityScale = 0x1060;
    public const nint m_flMaxBoneVelocity = 0x11B8;
}

public static class C_INIT_CreateParticleImpulse {
    public const nint m_InputRadius = 0x1C0;
    public const nint m_InputMagnitude = 0x318;
    public const nint m_nFalloffFunction = 0x470;
    public const nint m_InputFalloffExp = 0x478;
    public const nint m_nImpulseType = 0x5D0;
}

public static class C_INIT_CreatePhyllotaxis {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nScaleCP = 0x1C4;
    public const nint m_nComponent = 0x1C8;
    public const nint m_fRadCentCore = 0x1CC;
    public const nint m_fRadPerPoint = 0x1D0;
    public const nint m_fRadPerPointTo = 0x1D4;
    public const nint m_fpointAngle = 0x1D8;
    public const nint m_fsizeOverall = 0x1DC;
    public const nint m_fRadBias = 0x1E0;
    public const nint m_fMinRad = 0x1E4;
    public const nint m_fDistBias = 0x1E8;
    public const nint m_bUseLocalCoords = 0x1EC;
    public const nint m_bUseWithContEmit = 0x1ED;
    public const nint m_bUseOrigRadius = 0x1EE;
}

public static class C_INIT_CreateSequentialPath {
    public const nint m_fMaxDistance = 0x1C0;
    public const nint m_flNumToAssign = 0x1C4;
    public const nint m_bLoop = 0x1C8;
    public const nint m_bCPPairs = 0x1C9;
    public const nint m_bSaveOffset = 0x1CA;
    public const nint m_PathParams = 0x1D0;
}

public static class C_INIT_CreateSequentialPathV2 {
    public const nint m_fMaxDistance = 0x1C0;
    public const nint m_flNumToAssign = 0x318;
    public const nint m_bLoop = 0x470;
    public const nint m_bCPPairs = 0x471;
    public const nint m_bSaveOffset = 0x472;
    public const nint m_PathParams = 0x480;
}

public static class C_INIT_CreateSpiralSphere {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nOverrideCP = 0x1C4;
    public const nint m_nDensity = 0x1C8;
    public const nint m_flInitialRadius = 0x1CC;
    public const nint m_flInitialSpeedMin = 0x1D0;
    public const nint m_flInitialSpeedMax = 0x1D4;
    public const nint m_bUseParticleCount = 0x1D8;
}

public static class C_INIT_CreateWithinBox {
    public const nint m_vecMin = 0x1C0;
    public const nint m_vecMax = 0x818;
    public const nint m_nControlPointNumber = 0xE70;
    public const nint m_bLocalSpace = 0xE74;
    public const nint m_randomnessParameters = 0xE78;
}

public static class C_INIT_CreateWithinSphereTransform {
    public const nint m_fRadiusMin = 0x1C0;
    public const nint m_fRadiusMax = 0x318;
    public const nint m_vecDistanceBias = 0x470;
    public const nint m_vecDistanceBiasAbs = 0xAC8;
    public const nint m_TransformInput = 0xAD8;
    public const nint m_fSpeedMin = 0xB40;
    public const nint m_fSpeedMax = 0xC98;
    public const nint m_fSpeedRandExp = 0xDF0;
    public const nint m_bLocalCoords = 0xDF4;
    public const nint m_flEndCPGrowthTime = 0xDF8;
    public const nint m_LocalCoordinateSystemSpeedMin = 0xE00;
    public const nint m_LocalCoordinateSystemSpeedMax = 0x1458;
    public const nint m_nFieldOutput = 0x1AB0;
    public const nint m_nFieldVelocity = 0x1AB4;
}

public static class C_INIT_CreationNoise {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_bAbsVal = 0x1C4;
    public const nint m_bAbsValInv = 0x1C5;
    public const nint m_flOffset = 0x1C8;
    public const nint m_flOutputMin = 0x1CC;
    public const nint m_flOutputMax = 0x1D0;
    public const nint m_flNoiseScale = 0x1D4;
    public const nint m_flNoiseScaleLoc = 0x1D8;
    public const nint m_vecOffsetLoc = 0x1DC;
    public const nint m_flWorldTimeScale = 0x1E8;
}

public static class C_INIT_DistanceCull {
    public const nint m_nControlPoint = 0x1C0;
    public const nint m_flDistance = 0x1C8;
    public const nint m_bCullInside = 0x320;
}

public static class C_INIT_DistanceToCPInit {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x320;
    public const nint m_flOutputMin = 0x478;
    public const nint m_flOutputMax = 0x5D0;
    public const nint m_nStartCP = 0x728;
    public const nint m_bLOS = 0x72C;
    public const nint m_CollisionGroupName = 0x72D;
    public const nint m_nTraceSet = 0x7B0;
    public const nint m_flMaxTraceLength = 0x7B8;
    public const nint m_flLOSScale = 0x910;
    public const nint m_nSetMethod = 0x914;
    public const nint m_bActiveRange = 0x918;
    public const nint m_vecDistanceScale = 0x91C;
    public const nint m_flRemapBias = 0x928;
}

public static class C_INIT_DistanceToNeighborCull {
    public const nint m_flDistance = 0x1C0;
}

public static class C_INIT_GlobalScale {
    public const nint m_flScale = 0x1C0;
    public const nint m_nScaleControlPointNumber = 0x1C4;
    public const nint m_nControlPointNumber = 0x1C8;
    public const nint m_bScaleRadius = 0x1CC;
    public const nint m_bScalePosition = 0x1CD;
    public const nint m_bScaleVelocity = 0x1CE;
}

public static class C_INIT_InheritFromParentParticles {
    public const nint m_flScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nIncrement = 0x1C8;
    public const nint m_bRandomDistribution = 0x1CC;
    public const nint m_nRandomSeed = 0x1D0;
}

public static class C_INIT_InheritVelocity {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_flVelocityScale = 0x1C4;
}

public static class C_INIT_InitFloat {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x318;
    public const nint m_nSetMethod = 0x31C;
    public const nint m_InputStrength = 0x320;
}

public static class C_INIT_InitFloatCollection {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x318;
}

public static class C_INIT_InitFromCPSnapshot {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nAttributeToRead = 0x1C4;
    public const nint m_nAttributeToWrite = 0x1C8;
    public const nint m_nLocalSpaceCP = 0x1CC;
    public const nint m_bRandom = 0x1D0;
    public const nint m_bReverse = 0x1D1;
    public const nint m_nSnapShotIncrement = 0x1D8;
    public const nint m_nManualSnapshotIndex = 0x330;
    public const nint m_nRandomSeed = 0x488;
    public const nint m_bLocalSpaceAngles = 0x48C;
}

public static class C_INIT_InitFromParentKilled {
    public const nint m_nAttributeToCopy = 0x1C0;
}

public static class C_INIT_InitFromVectorFieldSnapshot {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nLocalSpaceCP = 0x1C4;
    public const nint m_nWeightUpdateCP = 0x1C8;
    public const nint m_bUseVerticalVelocity = 0x1CC;
    public const nint m_vecScale = 0x1D0;
}

public static class C_INIT_InitSkinnedPositionFromCPSnapshot {
    public const nint m_nSnapshotControlPointNumber = 0x1C0;
    public const nint m_nControlPointNumber = 0x1C4;
    public const nint m_bRandom = 0x1C8;
    public const nint m_nRandomSeed = 0x1CC;
    public const nint m_bRigid = 0x1D0;
    public const nint m_bSetNormal = 0x1D1;
    public const nint m_bIgnoreDt = 0x1D2;
    public const nint m_flMinNormalVelocity = 0x1D4;
    public const nint m_flMaxNormalVelocity = 0x1D8;
    public const nint m_flIncrement = 0x1DC;
    public const nint m_nFullLoopIncrement = 0x1E0;
    public const nint m_nSnapShotStartPoint = 0x1E4;
    public const nint m_flBoneVelocity = 0x1E8;
    public const nint m_flBoneVelocityMax = 0x1EC;
    public const nint m_bCopyColor = 0x1F0;
    public const nint m_bCopyAlpha = 0x1F1;
    public const nint m_bSetRadius = 0x1F2;
}

public static class C_INIT_InitVec {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x818;
    public const nint m_nSetMethod = 0x81C;
    public const nint m_bNormalizedOutput = 0x820;
    public const nint m_bWritePreviousPosition = 0x821;
}

public static class C_INIT_InitVecCollection {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x818;
}

public static class C_INIT_InitialRepulsionVelocity {
    public const nint m_CollisionGroupName = 0x1C0;
    public const nint m_nTraceSet = 0x240;
    public const nint m_vecOutputMin = 0x244;
    public const nint m_vecOutputMax = 0x250;
    public const nint m_nControlPointNumber = 0x25C;
    public const nint m_bPerParticle = 0x260;
    public const nint m_bTranslate = 0x261;
    public const nint m_bProportional = 0x262;
    public const nint m_flTraceLength = 0x264;
    public const nint m_bPerParticleTR = 0x268;
    public const nint m_bInherit = 0x269;
    public const nint m_nChildCP = 0x26C;
    public const nint m_nChildGroupID = 0x270;
}

public static class C_INIT_InitialSequenceFromModel {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nFieldOutputAnim = 0x1C8;
    public const nint m_flInputMin = 0x1CC;
    public const nint m_flInputMax = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_nSetMethod = 0x1DC;
}

public static class C_INIT_InitialVelocityFromHitbox {
    public const nint m_flVelocityMin = 0x1C0;
    public const nint m_flVelocityMax = 0x1C4;
    public const nint m_nControlPointNumber = 0x1C8;
    public const nint m_HitboxSetName = 0x1CC;
    public const nint m_bUseBones = 0x24C;
}

public static class C_INIT_InitialVelocityNoise {
    public const nint m_vecAbsVal = 0x1C0;
    public const nint m_vecAbsValInv = 0x1CC;
    public const nint m_vecOffsetLoc = 0x1D8;
    public const nint m_flOffset = 0x830;
    public const nint m_vecOutputMin = 0x988;
    public const nint m_vecOutputMax = 0xFE0;
    public const nint m_flNoiseScale = 0x1638;
    public const nint m_flNoiseScaleLoc = 0x1790;
    public const nint m_TransformInput = 0x18E8;
    public const nint m_bIgnoreDt = 0x1950;
}

public static class C_INIT_LifespanFromVelocity {
    public const nint m_vecComponentScale = 0x1C0;
    public const nint m_flTraceOffset = 0x1CC;
    public const nint m_flMaxTraceLength = 0x1D0;
    public const nint m_flTraceTolerance = 0x1D4;
    public const nint m_nMaxPlanes = 0x1D8;
    public const nint m_CollisionGroupName = 0x1E0;
    public const nint m_nTraceSet = 0x260;
    public const nint m_bIncludeWater = 0x270;
}

public static class C_INIT_ModelCull {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_bBoundBox = 0x1C4;
    public const nint m_bCullOutside = 0x1C5;
    public const nint m_bUseBones = 0x1C6;
    public const nint m_HitboxSetName = 0x1C7;
}

public static class C_INIT_MoveBetweenPoints {
    public const nint m_flSpeedMin = 0x1C0;
    public const nint m_flSpeedMax = 0x318;
    public const nint m_flEndSpread = 0x470;
    public const nint m_flStartOffset = 0x5C8;
    public const nint m_flEndOffset = 0x720;
    public const nint m_nEndControlPointNumber = 0x878;
    public const nint m_bTrailBias = 0x87C;
}

public static class C_INIT_NormalAlignToCP {
    public const nint m_transformInput = 0x1C0;
    public const nint m_nControlPointAxis = 0x228;
}

public static class C_INIT_NormalOffset {
    public const nint m_OffsetMin = 0x1C0;
    public const nint m_OffsetMax = 0x1CC;
    public const nint m_nControlPointNumber = 0x1D8;
    public const nint m_bLocalCoords = 0x1DC;
    public const nint m_bNormalize = 0x1DD;
}

public static class C_INIT_OffsetVectorToVector {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_vecOutputMin = 0x1C8;
    public const nint m_vecOutputMax = 0x1D4;
    public const nint m_randomnessParameters = 0x1E0;
}

public static class C_INIT_Orient2DRelToCP {
    public const nint m_nCP = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flRotOffset = 0x1C8;
}

public static class C_INIT_PlaneCull {
    public const nint m_nControlPoint = 0x1C0;
    public const nint m_flDistance = 0x1C8;
    public const nint m_bCullInside = 0x320;
}

public static class C_INIT_PointList {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_pointList = 0x1C8;
    public const nint m_bPlaceAlongPath = 0x1E0;
    public const nint m_bClosedLoop = 0x1E1;
    public const nint m_nNumPointsAlongPath = 0x1E4;
}

public static class C_INIT_PositionOffset {
    public const nint m_OffsetMin = 0x1C0;
    public const nint m_OffsetMax = 0x818;
    public const nint m_TransformInput = 0xE70;
    public const nint m_bLocalCoords = 0xED8;
    public const nint m_bProportional = 0xED9;
    public const nint m_randomnessParameters = 0xEDC;
}

public static class C_INIT_PositionOffsetToCP {
    public const nint m_nControlPointNumberStart = 0x1C0;
    public const nint m_nControlPointNumberEnd = 0x1C4;
    public const nint m_bLocalCoords = 0x1C8;
}

public static class C_INIT_PositionPlaceOnGround {
    public const nint m_flOffset = 0x1C0;
    public const nint m_flMaxTraceLength = 0x318;
    public const nint m_CollisionGroupName = 0x470;
    public const nint m_nTraceSet = 0x4F0;
    public const nint m_nTraceMissBehavior = 0x500;
    public const nint m_bIncludeWater = 0x504;
    public const nint m_bSetNormal = 0x505;
    public const nint m_bSetPXYZOnly = 0x506;
    public const nint m_bTraceAlongNormal = 0x507;
    public const nint m_bOffsetonColOnly = 0x508;
    public const nint m_flOffsetByRadiusFactor = 0x50C;
    public const nint m_nPreserveOffsetCP = 0x510;
    public const nint m_nIgnoreCP = 0x514;
}

public static class C_INIT_PositionWarp {
    public const nint m_vecWarpMin = 0x1C0;
    public const nint m_vecWarpMax = 0x818;
    public const nint m_nScaleControlPointNumber = 0xE70;
    public const nint m_nControlPointNumber = 0xE74;
    public const nint m_nRadiusComponent = 0xE78;
    public const nint m_flWarpTime = 0xE7C;
    public const nint m_flWarpStartTime = 0xE80;
    public const nint m_flPrevPosScale = 0xE84;
    public const nint m_bInvertWarp = 0xE88;
    public const nint m_bUseCount = 0xE89;
}

public static class C_INIT_PositionWarpScalar {
    public const nint m_vecWarpMin = 0x1C0;
    public const nint m_vecWarpMax = 0x1CC;
    public const nint m_InputValue = 0x1D8;
    public const nint m_flPrevPosScale = 0x330;
    public const nint m_nScaleControlPointNumber = 0x334;
    public const nint m_nControlPointNumber = 0x338;
}

public static class C_INIT_QuantizeFloat {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x318;
}

public static class C_INIT_RadiusFromCPObject {
    public const nint m_nControlPoint = 0x1C0;
}

public static class C_INIT_RandomAlpha {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nAlphaMin = 0x1C4;
    public const nint m_nAlphaMax = 0x1C8;
    public const nint m_flAlphaRandExponent = 0x1D4;
}

public static class C_INIT_RandomAlphaWindowThreshold {
    public const nint m_flMin = 0x1C0;
    public const nint m_flMax = 0x1C4;
    public const nint m_flExponent = 0x1C8;
}

public static class C_INIT_RandomColor {
    public const nint m_ColorMin = 0x1DC;
    public const nint m_ColorMax = 0x1E0;
    public const nint m_TintMin = 0x1E4;
    public const nint m_TintMax = 0x1E8;
    public const nint m_flTintPerc = 0x1EC;
    public const nint m_flUpdateThreshold = 0x1F0;
    public const nint m_nTintCP = 0x1F4;
    public const nint m_nFieldOutput = 0x1F8;
    public const nint m_nTintBlendMode = 0x1FC;
    public const nint m_flLightAmplification = 0x200;
}

public static class C_INIT_RandomLifeTime {
    public const nint m_fLifetimeMin = 0x1C0;
    public const nint m_fLifetimeMax = 0x1C4;
    public const nint m_fLifetimeRandExponent = 0x1C8;
}

public static class C_INIT_RandomModelSequence {
    public const nint m_ActivityName = 0x1C0;
    public const nint m_SequenceName = 0x2C0;
    public const nint m_hModel = 0x3C0;
}

public static class C_INIT_RandomNamedModelElement {
    public const nint m_hModel = 0x1C0;
    public const nint m_names = 0x1C8;
    public const nint m_bShuffle = 0x1E0;
    public const nint m_bLinear = 0x1E1;
    public const nint m_bModelFromRenderer = 0x1E2;
    public const nint m_nFieldOutput = 0x1E4;
}

public static class C_INIT_RandomRadius {
    public const nint m_flRadiusMin = 0x1C0;
    public const nint m_flRadiusMax = 0x1C4;
    public const nint m_flRadiusRandExponent = 0x1C8;
}

public static class C_INIT_RandomScalar {
    public const nint m_flMin = 0x1C0;
    public const nint m_flMax = 0x1C4;
    public const nint m_flExponent = 0x1C8;
    public const nint m_nFieldOutput = 0x1CC;
}

public static class C_INIT_RandomSecondSequence {
    public const nint m_nSequenceMin = 0x1C0;
    public const nint m_nSequenceMax = 0x1C4;
}

public static class C_INIT_RandomSequence {
    public const nint m_nSequenceMin = 0x1C0;
    public const nint m_nSequenceMax = 0x1C4;
    public const nint m_bShuffle = 0x1C8;
    public const nint m_bLinear = 0x1C9;
    public const nint m_WeightedList = 0x1D0;
}

public static class C_INIT_RandomTrailLength {
    public const nint m_flMinLength = 0x1C0;
    public const nint m_flMaxLength = 0x1C4;
    public const nint m_flLengthRandExponent = 0x1C8;
}

public static class C_INIT_RandomVector {
    public const nint m_vecMin = 0x1C0;
    public const nint m_vecMax = 0x1CC;
    public const nint m_nFieldOutput = 0x1D8;
    public const nint m_randomnessParameters = 0x1DC;
}

public static class C_INIT_RandomVectorComponent {
    public const nint m_flMin = 0x1C0;
    public const nint m_flMax = 0x1C4;
    public const nint m_nFieldOutput = 0x1C8;
    public const nint m_nComponent = 0x1CC;
}

public static class C_INIT_RandomYawFlip {
    public const nint m_flPercent = 0x1C0;
}

public static class C_INIT_RemapCPtoScalar {
    public const nint m_nCPInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nField = 0x1C8;
    public const nint m_flInputMin = 0x1CC;
    public const nint m_flInputMax = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_flStartTime = 0x1DC;
    public const nint m_flEndTime = 0x1E0;
    public const nint m_nSetMethod = 0x1E4;
    public const nint m_flRemapBias = 0x1E8;
}

public static class C_INIT_RemapInitialDirectionToTransformToVector {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_nFieldOutput = 0x228;
    public const nint m_flScale = 0x22C;
    public const nint m_flOffsetRot = 0x230;
    public const nint m_vecOffsetAxis = 0x234;
    public const nint m_bNormalize = 0x240;
}

public static class C_INIT_RemapInitialTransformDirectionToRotation {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_nFieldOutput = 0x228;
    public const nint m_flOffsetRot = 0x22C;
    public const nint m_nComponent = 0x230;
}

public static class C_INIT_RemapInitialVisibilityScalar {
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_flOutputMin = 0x1D0;
    public const nint m_flOutputMax = 0x1D4;
}

public static class C_INIT_RemapNamedModelElementToScalar {
    public const nint m_hModel = 0x1C0;
    public const nint m_names = 0x1C8;
    public const nint m_values = 0x1E0;
    public const nint m_nFieldInput = 0x1F8;
    public const nint m_nFieldOutput = 0x1FC;
    public const nint m_nSetMethod = 0x200;
    public const nint m_bModelFromRenderer = 0x204;
}

public static class C_INIT_RemapParticleCountToNamedModelElementScalar {
    public const nint m_hModel = 0x1F0;
    public const nint m_outputMinName = 0x1F8;
    public const nint m_outputMaxName = 0x200;
    public const nint m_bModelFromRenderer = 0x208;
}

public static class C_INIT_RemapParticleCountToScalar {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nInputMin = 0x1C4;
    public const nint m_nInputMax = 0x1C8;
    public const nint m_nScaleControlPoint = 0x1CC;
    public const nint m_nScaleControlPointField = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_nSetMethod = 0x1DC;
    public const nint m_bActiveRange = 0x1E0;
    public const nint m_bInvert = 0x1E1;
    public const nint m_bWrap = 0x1E2;
    public const nint m_flRemapBias = 0x1E4;
}

public static class C_INIT_RemapQAnglesToRotation {
    public const nint m_TransformInput = 0x1C0;
}

public static class C_INIT_RemapScalar {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_flOutputMin = 0x1D0;
    public const nint m_flOutputMax = 0x1D4;
    public const nint m_flStartTime = 0x1D8;
    public const nint m_flEndTime = 0x1DC;
    public const nint m_nSetMethod = 0x1E0;
    public const nint m_bActiveRange = 0x1E4;
    public const nint m_flRemapBias = 0x1E8;
}

public static class C_INIT_RemapScalarToVector {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_vecOutputMin = 0x1D0;
    public const nint m_vecOutputMax = 0x1DC;
    public const nint m_flStartTime = 0x1E8;
    public const nint m_flEndTime = 0x1EC;
    public const nint m_nSetMethod = 0x1F0;
    public const nint m_nControlPointNumber = 0x1F4;
    public const nint m_bLocalCoords = 0x1F8;
    public const nint m_flRemapBias = 0x1FC;
}

public static class C_INIT_RemapSpeedToScalar {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nControlPointNumber = 0x1C4;
    public const nint m_flStartTime = 0x1C8;
    public const nint m_flEndTime = 0x1CC;
    public const nint m_flInputMin = 0x1D0;
    public const nint m_flInputMax = 0x1D4;
    public const nint m_flOutputMin = 0x1D8;
    public const nint m_flOutputMax = 0x1DC;
    public const nint m_nSetMethod = 0x1E0;
    public const nint m_bPerParticle = 0x1E4;
}

public static class C_INIT_RemapTransformOrientationToRotations {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_vecRotation = 0x228;
    public const nint m_bUseQuat = 0x234;
    public const nint m_bWriteNormal = 0x235;
}

public static class C_INIT_RemapTransformToVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vInputMin = 0x1C4;
    public const nint m_vInputMax = 0x1D0;
    public const nint m_vOutputMin = 0x1DC;
    public const nint m_vOutputMax = 0x1E8;
    public const nint m_TransformInput = 0x1F8;
    public const nint m_LocalSpaceTransform = 0x260;
    public const nint m_flStartTime = 0x2C8;
    public const nint m_flEndTime = 0x2CC;
    public const nint m_nSetMethod = 0x2D0;
    public const nint m_bOffset = 0x2D4;
    public const nint m_bAccelerate = 0x2D5;
    public const nint m_flRemapBias = 0x2D8;
}

public static class C_INIT_RingWave {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_flParticlesPerOrbit = 0x228;
    public const nint m_flInitialRadius = 0x380;
    public const nint m_flThickness = 0x4D8;
    public const nint m_flInitialSpeedMin = 0x630;
    public const nint m_flInitialSpeedMax = 0x788;
    public const nint m_flRoll = 0x8E0;
    public const nint m_flPitch = 0xA38;
    public const nint m_flYaw = 0xB90;
    public const nint m_bEvenDistribution = 0xCE8;
    public const nint m_bXYVelocityOnly = 0xCE9;
}

public static class C_INIT_RtEnvCull {
    public const nint m_vecTestDir = 0x1C0;
    public const nint m_vecTestNormal = 0x1CC;
    public const nint m_bUseVelocity = 0x1D8;
    public const nint m_bCullOnMiss = 0x1D9;
    public const nint m_bLifeAdjust = 0x1DA;
    public const nint m_RtEnvName = 0x1DB;
    public const nint m_nRTEnvCP = 0x25C;
    public const nint m_nComponent = 0x260;
}

public static class C_INIT_ScaleVelocity {
    public const nint m_vecScale = 0x1C0;
}

public static class C_INIT_SequenceFromCP {
    public const nint m_bKillUnused = 0x1C0;
    public const nint m_bRadiusScale = 0x1C1;
    public const nint m_nCP = 0x1C4;
    public const nint m_vecOffset = 0x1C8;
}

public static class C_INIT_SequenceLifeTime {
    public const nint m_flFramerate = 0x1C0;
}

public static class C_INIT_SetHitboxToClosest {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nDesiredHitbox = 0x1C4;
    public const nint m_vecHitBoxScale = 0x1C8;
    public const nint m_HitboxSetName = 0x820;
    public const nint m_bUseBones = 0x8A0;
    public const nint m_bUseClosestPointOnHitbox = 0x8A1;
    public const nint m_nTestType = 0x8A4;
    public const nint m_flHybridRatio = 0x8A8;
    public const nint m_bUpdatePosition = 0xA00;
}

public static class C_INIT_SetHitboxToModel {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nForceInModel = 0x1C4;
    public const nint m_nDesiredHitbox = 0x1C8;
    public const nint m_vecHitBoxScale = 0x1D0;
    public const nint m_vecDirectionBias = 0x828;
    public const nint m_bMaintainHitbox = 0x834;
    public const nint m_bUseBones = 0x835;
    public const nint m_HitboxSetName = 0x836;
    public const nint m_flShellSize = 0x8B8;
}

public static class C_INIT_SetRigidAttachment {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nFieldInput = 0x1C4;
    public const nint m_nFieldOutput = 0x1C8;
    public const nint m_bLocalSpace = 0x1CC;
}

public static class C_INIT_SetVectorAttributeToVectorExpression {
    public const nint m_nExpression = 0x1C0;
    public const nint m_vInput1 = 0x1C8;
    public const nint m_vInput2 = 0x820;
    public const nint m_nOutputField = 0xE78;
    public const nint m_nSetMethod = 0xE7C;
    public const nint m_bNormalizedOutput = 0xE80;
}

public static class C_INIT_StatusEffect {
    public const nint m_nDetail2Combo = 0x1C0;
    public const nint m_flDetail2Rotation = 0x1C4;
    public const nint m_flDetail2Scale = 0x1C8;
    public const nint m_flDetail2BlendFactor = 0x1CC;
    public const nint m_flColorWarpIntensity = 0x1D0;
    public const nint m_flDiffuseWarpBlendToFull = 0x1D4;
    public const nint m_flEnvMapIntensity = 0x1D8;
    public const nint m_flAmbientScale = 0x1DC;
    public const nint m_specularColor = 0x1E0;
    public const nint m_flSpecularScale = 0x1E4;
    public const nint m_flSpecularExponent = 0x1E8;
    public const nint m_flSpecularExponentBlendToFull = 0x1EC;
    public const nint m_flSpecularBlendToFull = 0x1F0;
    public const nint m_rimLightColor = 0x1F4;
    public const nint m_flRimLightScale = 0x1F8;
    public const nint m_flReflectionsTintByBaseBlendToNone = 0x1FC;
    public const nint m_flMetalnessBlendToFull = 0x200;
    public const nint m_flSelfIllumBlendToFull = 0x204;
}

public static class C_INIT_StatusEffectCitadel {
    public const nint m_flSFXColorWarpAmount = 0x1C0;
    public const nint m_flSFXNormalAmount = 0x1C4;
    public const nint m_flSFXMetalnessAmount = 0x1C8;
    public const nint m_flSFXRoughnessAmount = 0x1CC;
    public const nint m_flSFXSelfIllumAmount = 0x1D0;
    public const nint m_flSFXSScale = 0x1D4;
    public const nint m_flSFXSScrollX = 0x1D8;
    public const nint m_flSFXSScrollY = 0x1DC;
    public const nint m_flSFXSScrollZ = 0x1E0;
    public const nint m_flSFXSOffsetX = 0x1E4;
    public const nint m_flSFXSOffsetY = 0x1E8;
    public const nint m_flSFXSOffsetZ = 0x1EC;
    public const nint m_nDetailCombo = 0x1F0;
    public const nint m_flSFXSDetailAmount = 0x1F4;
    public const nint m_flSFXSDetailScale = 0x1F8;
    public const nint m_flSFXSDetailScrollX = 0x1FC;
    public const nint m_flSFXSDetailScrollY = 0x200;
    public const nint m_flSFXSDetailScrollZ = 0x204;
    public const nint m_flSFXSUseModelUVs = 0x208;
}

public static class C_INIT_VelocityFromCP {
    public const nint m_velocityInput = 0x1C0;
    public const nint m_transformInput = 0x818;
    public const nint m_flVelocityScale = 0x880;
    public const nint m_bDirectionOnly = 0x884;
}

public static class C_INIT_VelocityFromNormal {
    public const nint m_fSpeedMin = 0x1C0;
    public const nint m_fSpeedMax = 0x1C4;
    public const nint m_bIgnoreDt = 0x1C8;
}

public static class C_INIT_VelocityRadialRandom {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_fSpeedMin = 0x1C4;
    public const nint m_fSpeedMax = 0x1C8;
    public const nint m_vecLocalCoordinateSystemSpeedScale = 0x1CC;
    public const nint m_bIgnoreDelta = 0x1D9;
}

public static class C_INIT_VelocityRandom {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_fSpeedMin = 0x1C8;
    public const nint m_fSpeedMax = 0x320;
    public const nint m_LocalCoordinateSystemSpeedMin = 0x478;
    public const nint m_LocalCoordinateSystemSpeedMax = 0xAD0;
    public const nint m_bIgnoreDT = 0x1128;
    public const nint m_randomnessParameters = 0x112C;
}

public static class C_OP_AlphaDecay {
    public const nint m_flMinAlpha = 0x1C0;
}

public static class C_OP_AttractToControlPoint {
    public const nint m_vecComponentScale = 0x1D0;
    public const nint m_fForceAmount = 0x1E0;
    public const nint m_fFalloffPower = 0x338;
    public const nint m_TransformInput = 0x340;
    public const nint m_fForceAmountMin = 0x3A8;
    public const nint m_bApplyMinForce = 0x500;
}

public static class C_OP_BasicMovement {
    public const nint m_Gravity = 0x1C0;
    public const nint m_fDrag = 0x818;
    public const nint m_nMaxConstraintPasses = 0x970;
}

public static class C_OP_BoxConstraint {
    public const nint m_vecMin = 0x1C0;
    public const nint m_vecMax = 0x818;
    public const nint m_nCP = 0xE70;
    public const nint m_bLocalSpace = 0xE74;
    public const nint m_bAccountForRadius = 0xE75;
}

public static class C_OP_CPOffsetToPercentageBetweenCPs {
    public const nint m_flInputMin = 0x1C0;
    public const nint m_flInputMax = 0x1C4;
    public const nint m_flInputBias = 0x1C8;
    public const nint m_nStartCP = 0x1CC;
    public const nint m_nEndCP = 0x1D0;
    public const nint m_nOffsetCP = 0x1D4;
    public const nint m_nOuputCP = 0x1D8;
    public const nint m_nInputCP = 0x1DC;
    public const nint m_bRadialCheck = 0x1E0;
    public const nint m_bScaleOffset = 0x1E1;
    public const nint m_vecOffset = 0x1E4;
}

public static class C_OP_CPVelocityForce {
    public const nint m_nControlPointNumber = 0x1D0;
    public const nint m_flScale = 0x1D8;
}

public static class C_OP_CalculateVectorAttribute {
    public const nint m_vStartValue = 0x1C0;
    public const nint m_nFieldInput1 = 0x1CC;
    public const nint m_flInputScale1 = 0x1D0;
    public const nint m_nFieldInput2 = 0x1D4;
    public const nint m_flInputScale2 = 0x1D8;
    public const nint m_nControlPointInput1 = 0x1DC;
    public const nint m_flControlPointScale1 = 0x1F0;
    public const nint m_nControlPointInput2 = 0x1F4;
    public const nint m_flControlPointScale2 = 0x208;
    public const nint m_nFieldOutput = 0x20C;
    public const nint m_vFinalOutputScale = 0x210;
}

public static class C_OP_ChladniWave {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x320;
    public const nint m_flOutputMin = 0x478;
    public const nint m_flOutputMax = 0x5D0;
    public const nint m_vecWaveLength = 0x728;
    public const nint m_vecHarmonics = 0xD80;
    public const nint m_nSetMethod = 0x13D8;
    public const nint m_nLocalSpaceControlPoint = 0x13DC;
    public const nint m_b3D = 0x13E0;
}

public static class C_OP_ChooseRandomChildrenInGroup {
    public const nint m_nChildGroupID = 0x1D0;
    public const nint m_flNumberOfChildren = 0x1D8;
}

public static class C_OP_ClampScalar {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flOutputMin = 0x1C8;
    public const nint m_flOutputMax = 0x320;
}

public static class C_OP_ClampVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecOutputMin = 0x1C8;
    public const nint m_vecOutputMax = 0x820;
}

public static class C_OP_CollideWithParentParticles {
    public const nint m_flParentRadiusScale = 0x1C0;
    public const nint m_flRadiusScale = 0x318;
}

public static class C_OP_CollideWithSelf {
    public const nint m_flRadiusScale = 0x1C0;
    public const nint m_flMinimumSpeed = 0x318;
}

public static class C_OP_ColorAdjustHSL {
    public const nint m_flHueAdjust = 0x1C0;
    public const nint m_flSaturationAdjust = 0x318;
    public const nint m_flLightnessAdjust = 0x470;
}

public static class C_OP_ColorInterpolate {
    public const nint m_ColorFade = 0x1C0;
    public const nint m_flFadeStartTime = 0x1D0;
    public const nint m_flFadeEndTime = 0x1D4;
    public const nint m_nFieldOutput = 0x1D8;
    public const nint m_bEaseInOut = 0x1DC;
    public const nint m_bUseNewCode = 0x1DD;
}

public static class C_OP_ColorInterpolateRandom {
    public const nint m_ColorFadeMin = 0x1C0;
    public const nint m_ColorFadeMax = 0x1DC;
    public const nint m_flFadeStartTime = 0x1EC;
    public const nint m_flFadeEndTime = 0x1F0;
    public const nint m_nFieldOutput = 0x1F4;
    public const nint m_bEaseInOut = 0x1F8;
}

public static class C_OP_ConnectParentParticleToNearest {
    public const nint m_nFirstControlPoint = 0x1C0;
    public const nint m_nSecondControlPoint = 0x1C4;
}

public static class C_OP_ConstrainDistance {
    public const nint m_fMinDistance = 0x1C0;
    public const nint m_fMaxDistance = 0x318;
    public const nint m_nControlPointNumber = 0x470;
    public const nint m_CenterOffset = 0x474;
    public const nint m_bGlobalCenter = 0x480;
}

public static class C_OP_ConstrainDistanceToPath {
    public const nint m_fMinDistance = 0x1C0;
    public const nint m_flMaxDistance0 = 0x1C4;
    public const nint m_flMaxDistanceMid = 0x1C8;
    public const nint m_flMaxDistance1 = 0x1CC;
    public const nint m_PathParameters = 0x1D0;
    public const nint m_flTravelTime = 0x210;
    public const nint m_nFieldScale = 0x214;
    public const nint m_nManualTField = 0x218;
}

public static class C_OP_ConstrainDistanceToUserSpecifiedPath {
    public const nint m_fMinDistance = 0x1C0;
    public const nint m_flMaxDistance = 0x1C4;
    public const nint m_flTimeScale = 0x1C8;
    public const nint m_bLoopedPath = 0x1CC;
    public const nint m_pointList = 0x1D0;
}

public static class C_OP_ConstrainLineLength {
    public const nint m_flMinDistance = 0x1C0;
    public const nint m_flMaxDistance = 0x1C4;
}

public static class C_OP_ContinuousEmitter {
    public const nint m_flEmissionDuration = 0x1C0;
    public const nint m_flStartTime = 0x318;
    public const nint m_flEmitRate = 0x470;
    public const nint m_flEmissionScale = 0x5C8;
    public const nint m_flScalePerParentParticle = 0x5CC;
    public const nint m_bInitFromKilledParentParticles = 0x5D0;
    public const nint m_nSnapshotControlPoint = 0x5D4;
    public const nint m_nLimitPerUpdate = 0x5D8;
    public const nint m_bForceEmitOnFirstUpdate = 0x5DC;
    public const nint m_bForceEmitOnLastUpdate = 0x5DD;
}

public static class C_OP_ControlPointToRadialScreenSpace {
    public const nint m_nCPIn = 0x1D0;
    public const nint m_vecCP1Pos = 0x1D4;
    public const nint m_nCPOut = 0x1E0;
    public const nint m_nCPOutField = 0x1E4;
    public const nint m_nCPSSPosOut = 0x1E8;
}

public static class C_OP_ControlpointLight {
    public const nint m_flScale = 0x1C0;
    public const nint m_nControlPoint1 = 0x690;
    public const nint m_nControlPoint2 = 0x694;
    public const nint m_nControlPoint3 = 0x698;
    public const nint m_nControlPoint4 = 0x69C;
    public const nint m_vecCPOffset1 = 0x6A0;
    public const nint m_vecCPOffset2 = 0x6AC;
    public const nint m_vecCPOffset3 = 0x6B8;
    public const nint m_vecCPOffset4 = 0x6C4;
    public const nint m_LightFiftyDist1 = 0x6D0;
    public const nint m_LightZeroDist1 = 0x6D4;
    public const nint m_LightFiftyDist2 = 0x6D8;
    public const nint m_LightZeroDist2 = 0x6DC;
    public const nint m_LightFiftyDist3 = 0x6E0;
    public const nint m_LightZeroDist3 = 0x6E4;
    public const nint m_LightFiftyDist4 = 0x6E8;
    public const nint m_LightZeroDist4 = 0x6EC;
    public const nint m_LightColor1 = 0x6F0;
    public const nint m_LightColor2 = 0x6F4;
    public const nint m_LightColor3 = 0x6F8;
    public const nint m_LightColor4 = 0x6FC;
    public const nint m_bLightType1 = 0x700;
    public const nint m_bLightType2 = 0x701;
    public const nint m_bLightType3 = 0x702;
    public const nint m_bLightType4 = 0x703;
    public const nint m_bLightDynamic1 = 0x704;
    public const nint m_bLightDynamic2 = 0x705;
    public const nint m_bLightDynamic3 = 0x706;
    public const nint m_bLightDynamic4 = 0x707;
    public const nint m_bUseNormal = 0x708;
    public const nint m_bUseHLambert = 0x709;
    public const nint m_bClampLowerRange = 0x70E;
    public const nint m_bClampUpperRange = 0x70F;
}

public static class C_OP_Cull {
    public const nint m_flCullPerc = 0x1C0;
    public const nint m_flCullStart = 0x1C4;
    public const nint m_flCullEnd = 0x1C8;
    public const nint m_flCullExp = 0x1CC;
}

public static class C_OP_CurlNoiseForce {
    public const nint m_nNoiseType = 0x1D0;
    public const nint m_vecNoiseFreq = 0x1D8;
    public const nint m_vecNoiseScale = 0x830;
    public const nint m_vecOffset = 0xE88;
    public const nint m_vecOffsetRate = 0x14E0;
    public const nint m_flWorleySeed = 0x1B38;
    public const nint m_flWorleyJitter = 0x1C90;
}

public static class C_OP_CycleScalar {
    public const nint m_nDestField = 0x1C0;
    public const nint m_flStartValue = 0x1C4;
    public const nint m_flEndValue = 0x1C8;
    public const nint m_flCycleTime = 0x1CC;
    public const nint m_bDoNotRepeatCycle = 0x1D0;
    public const nint m_bSynchronizeParticles = 0x1D1;
    public const nint m_nCPScale = 0x1D4;
    public const nint m_nCPFieldMin = 0x1D8;
    public const nint m_nCPFieldMax = 0x1DC;
    public const nint m_nSetMethod = 0x1E0;
}

public static class C_OP_CylindricalDistanceToTransform {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x320;
    public const nint m_flOutputMin = 0x478;
    public const nint m_flOutputMax = 0x5D0;
    public const nint m_TransformStart = 0x728;
    public const nint m_TransformEnd = 0x790;
    public const nint m_nSetMethod = 0x7F8;
    public const nint m_bActiveRange = 0x7FC;
    public const nint m_bAdditive = 0x7FD;
    public const nint m_bCapsule = 0x7FE;
}

public static class C_OP_DampenToCP {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_flRange = 0x1C4;
    public const nint m_flScale = 0x1C8;
}

public static class C_OP_Decay {
    public const nint m_bRopeDecay = 0x1C0;
    public const nint m_bForcePreserveParticleOrder = 0x1C1;
}

public static class C_OP_DecayClampCount {
    public const nint m_nCount = 0x1C0;
}

public static class C_OP_DecayMaintainCount {
    public const nint m_nParticlesToMaintain = 0x1C0;
    public const nint m_flDecayDelay = 0x1C4;
    public const nint m_nSnapshotControlPoint = 0x1C8;
    public const nint m_bLifespanDecay = 0x1CC;
    public const nint m_flScale = 0x1D0;
    public const nint m_bKillNewest = 0x328;
}

public static class C_OP_DecayOffscreen {
    public const nint m_flOffscreenTime = 0x1C0;
}

public static class C_OP_DensityForce {
    public const nint m_flRadiusScale = 0x1D0;
    public const nint m_flForceScale = 0x1D4;
    public const nint m_flTargetDensity = 0x1D8;
}

public static class C_OP_DifferencePreviousParticle {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_flOutputMin = 0x1D0;
    public const nint m_flOutputMax = 0x1D4;
    public const nint m_nSetMethod = 0x1D8;
    public const nint m_bActiveRange = 0x1DC;
    public const nint m_bSetPreviousParticle = 0x1DD;
}

public static class C_OP_Diffusion {
    public const nint m_flRadiusScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nVoxelGridResolution = 0x1C8;
}

public static class C_OP_DirectionBetweenVecsToVec {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecPoint1 = 0x1C8;
    public const nint m_vecPoint2 = 0x820;
}

public static class C_OP_DistanceBetweenCPsToCP {
    public const nint m_nStartCP = 0x1D0;
    public const nint m_nEndCP = 0x1D4;
    public const nint m_nOutputCP = 0x1D8;
    public const nint m_nOutputCPField = 0x1DC;
    public const nint m_bSetOnce = 0x1E0;
    public const nint m_flInputMin = 0x1E4;
    public const nint m_flInputMax = 0x1E8;
    public const nint m_flOutputMin = 0x1EC;
    public const nint m_flOutputMax = 0x1F0;
    public const nint m_flMaxTraceLength = 0x1F4;
    public const nint m_flLOSScale = 0x1F8;
    public const nint m_bLOS = 0x1FC;
    public const nint m_CollisionGroupName = 0x1FD;
    public const nint m_nTraceSet = 0x280;
    public const nint m_nSetParent = 0x284;
}

public static class C_OP_DistanceBetweenTransforms {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_TransformStart = 0x1C8;
    public const nint m_TransformEnd = 0x230;
    public const nint m_flInputMin = 0x298;
    public const nint m_flInputMax = 0x3F0;
    public const nint m_flOutputMin = 0x548;
    public const nint m_flOutputMax = 0x6A0;
    public const nint m_flMaxTraceLength = 0x7F8;
    public const nint m_flLOSScale = 0x7FC;
    public const nint m_CollisionGroupName = 0x800;
    public const nint m_nTraceSet = 0x880;
    public const nint m_bLOS = 0x884;
    public const nint m_nSetMethod = 0x888;
}

public static class C_OP_DistanceBetweenVecs {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecPoint1 = 0x1C8;
    public const nint m_vecPoint2 = 0x820;
    public const nint m_flInputMin = 0xE78;
    public const nint m_flInputMax = 0xFD0;
    public const nint m_flOutputMin = 0x1128;
    public const nint m_flOutputMax = 0x1280;
    public const nint m_nSetMethod = 0x13D8;
    public const nint m_bDeltaTime = 0x13DC;
}

public static class C_OP_DistanceCull {
    public const nint m_nControlPoint = 0x1C0;
    public const nint m_vecPointOffset = 0x1C4;
    public const nint m_flDistance = 0x1D0;
    public const nint m_bCullInside = 0x1D4;
}

public static class C_OP_DistanceToTransform {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x320;
    public const nint m_flOutputMin = 0x478;
    public const nint m_flOutputMax = 0x5D0;
    public const nint m_TransformStart = 0x728;
    public const nint m_bLOS = 0x790;
    public const nint m_CollisionGroupName = 0x791;
    public const nint m_nTraceSet = 0x814;
    public const nint m_flMaxTraceLength = 0x818;
    public const nint m_flLOSScale = 0x81C;
    public const nint m_nSetMethod = 0x820;
    public const nint m_bActiveRange = 0x824;
    public const nint m_bAdditive = 0x825;
    public const nint m_vecComponentScale = 0x828;
}

public static class C_OP_DragRelativeToPlane {
    public const nint m_flDragAtPlane = 0x1C0;
    public const nint m_flFalloff = 0x318;
    public const nint m_bDirectional = 0x470;
    public const nint m_vecPlaneNormal = 0x478;
    public const nint m_nControlPointNumber = 0xAD0;
}

public static class C_OP_DriveCPFromGlobalSoundFloat {
    public const nint m_nOutputControlPoint = 0x1D0;
    public const nint m_nOutputField = 0x1D4;
    public const nint m_flInputMin = 0x1D8;
    public const nint m_flInputMax = 0x1DC;
    public const nint m_flOutputMin = 0x1E0;
    public const nint m_flOutputMax = 0x1E4;
    public const nint m_StackName = 0x1E8;
    public const nint m_OperatorName = 0x1F0;
    public const nint m_FieldName = 0x1F8;
}

public static class C_OP_EnableChildrenFromParentParticleCount {
    public const nint m_nChildGroupID = 0x1D0;
    public const nint m_nFirstChild = 0x1D4;
    public const nint m_nNumChildrenToEnable = 0x1D8;
    public const nint m_bDisableChildren = 0x330;
    public const nint m_bPlayEndcapOnStop = 0x331;
    public const nint m_bDestroyImmediately = 0x332;
}

public static class C_OP_EndCapTimedDecay {
    public const nint m_flDecayTime = 0x1C0;
}

public static class C_OP_EndCapTimedFreeze {
    public const nint m_flFreezeTime = 0x1C0;
}

public static class C_OP_ExternalGameImpulseForce {
    public const nint m_flForceScale = 0x1D0;
    public const nint m_bRopes = 0x328;
    public const nint m_bRopesZOnly = 0x329;
    public const nint m_bExplosions = 0x32A;
    public const nint m_bParticles = 0x32B;
}

public static class C_OP_ExternalWindForce {
    public const nint m_vecSamplePosition = 0x1D0;
    public const nint m_vecScale = 0x828;
    public const nint m_bSampleWind = 0xE80;
    public const nint m_bSampleWater = 0xE81;
    public const nint m_bDampenNearWaterPlane = 0xE82;
    public const nint m_bSampleGravity = 0xE83;
    public const nint m_vecGravityForce = 0xE88;
    public const nint m_bUseBasicMovementGravity = 0x14E0;
    public const nint m_flLocalGravityScale = 0x14E8;
    public const nint m_flLocalBuoyancyScale = 0x1640;
    public const nint m_vecBuoyancyForce = 0x1798;
}

public static class C_OP_FadeAndKill {
    public const nint m_flStartFadeInTime = 0x1C0;
    public const nint m_flEndFadeInTime = 0x1C4;
    public const nint m_flStartFadeOutTime = 0x1C8;
    public const nint m_flEndFadeOutTime = 0x1CC;
    public const nint m_flStartAlpha = 0x1D0;
    public const nint m_flEndAlpha = 0x1D4;
    public const nint m_bForcePreserveParticleOrder = 0x1D8;
}

public static class C_OP_FadeAndKillForTracers {
    public const nint m_flStartFadeInTime = 0x1C0;
    public const nint m_flEndFadeInTime = 0x1C4;
    public const nint m_flStartFadeOutTime = 0x1C8;
    public const nint m_flEndFadeOutTime = 0x1CC;
    public const nint m_flStartAlpha = 0x1D0;
    public const nint m_flEndAlpha = 0x1D4;
}

public static class C_OP_FadeIn {
    public const nint m_flFadeInTimeMin = 0x1C0;
    public const nint m_flFadeInTimeMax = 0x1C4;
    public const nint m_flFadeInTimeExp = 0x1C8;
    public const nint m_bProportional = 0x1CC;
}

public static class C_OP_FadeInSimple {
    public const nint m_flFadeInTime = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
}

public static class C_OP_FadeOut {
    public const nint m_flFadeOutTimeMin = 0x1C0;
    public const nint m_flFadeOutTimeMax = 0x1C4;
    public const nint m_flFadeOutTimeExp = 0x1C8;
    public const nint m_flFadeBias = 0x1CC;
    public const nint m_bProportional = 0x200;
    public const nint m_bEaseInAndOut = 0x201;
}

public static class C_OP_FadeOutSimple {
    public const nint m_flFadeOutTime = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
}

public static class C_OP_ForceBasedOnDistanceToPlane {
    public const nint m_flMinDist = 0x1D0;
    public const nint m_vecForceAtMinDist = 0x1D4;
    public const nint m_flMaxDist = 0x1E0;
    public const nint m_vecForceAtMaxDist = 0x1E4;
    public const nint m_vecPlaneNormal = 0x1F0;
    public const nint m_nControlPointNumber = 0x1FC;
    public const nint m_flExponent = 0x200;
}

public static class C_OP_ForceControlPointStub {
    public const nint m_ControlPoint = 0x1D0;
}

public static class C_OP_GlobalLight {
    public const nint m_flScale = 0x1C0;
    public const nint m_bClampLowerRange = 0x1C4;
    public const nint m_bClampUpperRange = 0x1C5;
}

public static class C_OP_HSVShiftToCP {
    public const nint m_nColorCP = 0x1D0;
    public const nint m_nColorGemEnableCP = 0x1D4;
    public const nint m_nOutputCP = 0x1D8;
    public const nint m_DefaultHSVColor = 0x1DC;
}

public static class C_OP_InheritFromParentParticles {
    public const nint m_flScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nIncrement = 0x1C8;
    public const nint m_bRandomDistribution = 0x1CC;
}

public static class C_OP_InheritFromParentParticlesV2 {
    public const nint m_flScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nIncrement = 0x1C8;
    public const nint m_bRandomDistribution = 0x1CC;
    public const nint m_nMissingParentBehavior = 0x1D0;
}

public static class C_OP_InheritFromPeerSystem {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nFieldInput = 0x1C4;
    public const nint m_nIncrement = 0x1C8;
    public const nint m_nGroupID = 0x1CC;
}

public static class C_OP_InstantaneousEmitter {
    public const nint m_nParticlesToEmit = 0x1C0;
    public const nint m_flStartTime = 0x318;
    public const nint m_flInitFromKilledParentParticles = 0x470;
    public const nint m_nMaxEmittedPerFrame = 0x474;
    public const nint m_nSnapshotControlPoint = 0x478;
}

public static class C_OP_InterpolateRadius {
    public const nint m_flStartTime = 0x1C0;
    public const nint m_flEndTime = 0x1C4;
    public const nint m_flStartScale = 0x1C8;
    public const nint m_flEndScale = 0x1CC;
    public const nint m_bEaseInAndOut = 0x1D0;
    public const nint m_flBias = 0x1D4;
}

public static class C_OP_LagCompensation {
    public const nint m_nDesiredVelocityCP = 0x1C0;
    public const nint m_nLatencyCP = 0x1C4;
    public const nint m_nLatencyCPField = 0x1C8;
    public const nint m_nDesiredVelocityCPField = 0x1CC;
}

public static class C_OP_LerpEndCapScalar {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flOutput = 0x1C4;
    public const nint m_flLerpTime = 0x1C8;
}

public static class C_OP_LerpEndCapVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecOutput = 0x1C4;
    public const nint m_flLerpTime = 0x1D0;
}

public static class C_OP_LerpScalar {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flOutput = 0x1C8;
    public const nint m_flStartTime = 0x320;
    public const nint m_flEndTime = 0x324;
}

public static class C_OP_LerpToInitialPosition {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_flInterpolation = 0x1C8;
    public const nint m_nCacheField = 0x320;
    public const nint m_flScale = 0x328;
    public const nint m_vecScale = 0x480;
}

public static class C_OP_LerpToOtherAttribute {
    public const nint m_flInterpolation = 0x1C0;
    public const nint m_nFieldInputFrom = 0x318;
    public const nint m_nFieldInput = 0x31C;
    public const nint m_nFieldOutput = 0x320;
}

public static class C_OP_LerpVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecOutput = 0x1C4;
    public const nint m_flStartTime = 0x1D0;
    public const nint m_flEndTime = 0x1D4;
    public const nint m_nSetMethod = 0x1D8;
}

public static class C_OP_LightningSnapshotGenerator {
    public const nint m_nCPSnapshot = 0x1D0;
    public const nint m_nCPStartPnt = 0x1D4;
    public const nint m_nCPEndPnt = 0x1D8;
    public const nint m_flSegments = 0x1E0;
    public const nint m_flOffset = 0x338;
    public const nint m_flOffsetDecay = 0x490;
    public const nint m_flRecalcRate = 0x5E8;
    public const nint m_flUVScale = 0x740;
    public const nint m_flUVOffset = 0x898;
    public const nint m_flSplitRate = 0x9F0;
    public const nint m_flBranchTwist = 0xB48;
    public const nint m_nBranchBehavior = 0xCA0;
    public const nint m_flRadiusStart = 0xCA8;
    public const nint m_flRadiusEnd = 0xE00;
    public const nint m_flDedicatedPool = 0xF58;
}

public static class C_OP_LocalAccelerationForce {
    public const nint m_nCP = 0x1D0;
    public const nint m_nScaleCP = 0x1D4;
    public const nint m_vecAccel = 0x1D8;
}

public static class C_OP_LockPoints {
    public const nint m_nMinCol = 0x1C0;
    public const nint m_nMaxCol = 0x1C4;
    public const nint m_nMinRow = 0x1C8;
    public const nint m_nMaxRow = 0x1CC;
    public const nint m_nControlPoint = 0x1D0;
    public const nint m_flBlendValue = 0x1D4;
}

public static class C_OP_LockToBone {
    public const nint m_modelInput = 0x1C0;
    public const nint m_transformInput = 0x220;
    public const nint m_flLifeTimeFadeStart = 0x288;
    public const nint m_flLifeTimeFadeEnd = 0x28C;
    public const nint m_flJumpThreshold = 0x290;
    public const nint m_flPrevPosScale = 0x294;
    public const nint m_HitboxSetName = 0x298;
    public const nint m_bRigid = 0x318;
    public const nint m_bUseBones = 0x319;
    public const nint m_nFieldOutput = 0x31C;
    public const nint m_nFieldOutputPrev = 0x320;
    public const nint m_nRotationSetType = 0x324;
    public const nint m_bRigidRotationLock = 0x328;
    public const nint m_vecRotation = 0x330;
    public const nint m_flRotLerp = 0x988;
}

public static class C_OP_LockToPointList {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_pointList = 0x1C8;
    public const nint m_bPlaceAlongPath = 0x1E0;
    public const nint m_bClosedLoop = 0x1E1;
    public const nint m_nNumPointsAlongPath = 0x1E4;
}

public static class C_OP_LockToSavedSequentialPath {
    public const nint m_flFadeStart = 0x1C4;
    public const nint m_flFadeEnd = 0x1C8;
    public const nint m_bCPPairs = 0x1CC;
    public const nint m_PathParams = 0x1D0;
}

public static class C_OP_LockToSavedSequentialPathV2 {
    public const nint m_flFadeStart = 0x1C0;
    public const nint m_flFadeEnd = 0x1C4;
    public const nint m_bCPPairs = 0x1C8;
    public const nint m_PathParams = 0x1D0;
}

public static class C_OP_MaintainEmitter {
    public const nint m_nParticlesToMaintain = 0x1C0;
    public const nint m_flStartTime = 0x318;
    public const nint m_flEmissionDuration = 0x320;
    public const nint m_flEmissionRate = 0x478;
    public const nint m_nSnapshotControlPoint = 0x47C;
    public const nint m_bEmitInstantaneously = 0x480;
    public const nint m_bFinalEmitOnStop = 0x481;
    public const nint m_flScale = 0x488;
}

public static class C_OP_MaintainSequentialPath {
    public const nint m_fMaxDistance = 0x1C0;
    public const nint m_flNumToAssign = 0x1C4;
    public const nint m_flCohesionStrength = 0x1C8;
    public const nint m_flTolerance = 0x1CC;
    public const nint m_bLoop = 0x1D0;
    public const nint m_bUseParticleCount = 0x1D1;
    public const nint m_PathParams = 0x1E0;
}

public static class C_OP_MaxVelocity {
    public const nint m_flMaxVelocity = 0x1C0;
    public const nint m_flMinVelocity = 0x1C4;
    public const nint m_nOverrideCP = 0x1C8;
    public const nint m_nOverrideCPField = 0x1CC;
}

public static class C_OP_ModelCull {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_bBoundBox = 0x1C4;
    public const nint m_bCullOutside = 0x1C5;
    public const nint m_bUseBones = 0x1C6;
    public const nint m_HitboxSetName = 0x1C7;
}

public static class C_OP_ModelDampenMovement {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_bBoundBox = 0x1C4;
    public const nint m_bOutside = 0x1C5;
    public const nint m_bUseBones = 0x1C6;
    public const nint m_HitboxSetName = 0x1C7;
    public const nint m_vecPosOffset = 0x248;
    public const nint m_fDrag = 0x8A0;
}

public static class C_OP_MoveToHitbox {
    public const nint m_modelInput = 0x1C0;
    public const nint m_transformInput = 0x220;
    public const nint m_flLifeTimeLerpStart = 0x28C;
    public const nint m_flLifeTimeLerpEnd = 0x290;
    public const nint m_flPrevPosScale = 0x294;
    public const nint m_HitboxSetName = 0x298;
    public const nint m_bUseBones = 0x318;
    public const nint m_nLerpType = 0x31C;
    public const nint m_flInterpolation = 0x320;
}

public static class C_OP_MovementLoopInsideSphere {
    public const nint m_nCP = 0x1C0;
    public const nint m_flDistance = 0x1C8;
    public const nint m_vecScale = 0x320;
    public const nint m_nDistSqrAttr = 0x978;
}

public static class C_OP_MovementMaintainOffset {
    public const nint m_vecOffset = 0x1C0;
    public const nint m_nCP = 0x1CC;
    public const nint m_bRadiusScale = 0x1D0;
}

public static class C_OP_MovementMoveAlongSkinnedCPSnapshot {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nSnapshotControlPointNumber = 0x1C4;
    public const nint m_bSetNormal = 0x1C8;
    public const nint m_bSetRadius = 0x1C9;
    public const nint m_flInterpolation = 0x1D0;
    public const nint m_flTValue = 0x328;
}

public static class C_OP_MovementPlaceOnGround {
    public const nint m_flOffset = 0x1C0;
    public const nint m_flMaxTraceLength = 0x318;
    public const nint m_flTolerance = 0x31C;
    public const nint m_flTraceOffset = 0x320;
    public const nint m_flLerpRate = 0x324;
    public const nint m_CollisionGroupName = 0x328;
    public const nint m_nTraceSet = 0x3A8;
    public const nint m_nRefCP1 = 0x3AC;
    public const nint m_nRefCP2 = 0x3B0;
    public const nint m_nLerpCP = 0x3B4;
    public const nint m_nTraceMissBehavior = 0x3C0;
    public const nint m_bIncludeShotHull = 0x3C4;
    public const nint m_bIncludeWater = 0x3C5;
    public const nint m_bSetNormal = 0x3C8;
    public const nint m_bScaleOffset = 0x3C9;
    public const nint m_nPreserveOffsetCP = 0x3CC;
    public const nint m_nIgnoreCP = 0x3D0;
}

public static class C_OP_MovementRigidAttachToCP {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nScaleControlPoint = 0x1C4;
    public const nint m_nScaleCPField = 0x1C8;
    public const nint m_nFieldInput = 0x1CC;
    public const nint m_nFieldOutput = 0x1D0;
    public const nint m_bOffsetLocal = 0x1D4;
}

public static class C_OP_MovementRotateParticleAroundAxis {
    public const nint m_vecRotAxis = 0x1C0;
    public const nint m_flRotRate = 0x818;
    public const nint m_TransformInput = 0x970;
    public const nint m_bLocalSpace = 0x9D8;
}

public static class C_OP_MovementSkinnedPositionFromCPSnapshot {
    public const nint m_nSnapshotControlPointNumber = 0x1C0;
    public const nint m_nControlPointNumber = 0x1C4;
    public const nint m_bRandom = 0x1C8;
    public const nint m_nRandomSeed = 0x1CC;
    public const nint m_bSetNormal = 0x1D0;
    public const nint m_bSetRadius = 0x1D1;
    public const nint m_flIncrement = 0x1D8;
    public const nint m_nFullLoopIncrement = 0x330;
    public const nint m_nSnapShotStartPoint = 0x488;
    public const nint m_flInterpolation = 0x5E0;
}

public static class C_OP_Noise {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flOutputMin = 0x1C4;
    public const nint m_flOutputMax = 0x1C8;
    public const nint m_fl4NoiseScale = 0x1CC;
    public const nint m_bAdditive = 0x1D0;
    public const nint m_flNoiseAnimationTimeScale = 0x1D4;
}

public static class C_OP_NoiseEmitter {
    public const nint m_flEmissionDuration = 0x1C0;
    public const nint m_flStartTime = 0x1C4;
    public const nint m_flEmissionScale = 0x1C8;
    public const nint m_nScaleControlPoint = 0x1CC;
    public const nint m_nScaleControlPointField = 0x1D0;
    public const nint m_nWorldNoisePoint = 0x1D4;
    public const nint m_bAbsVal = 0x1D8;
    public const nint m_bAbsValInv = 0x1D9;
    public const nint m_flOffset = 0x1DC;
    public const nint m_flOutputMin = 0x1E0;
    public const nint m_flOutputMax = 0x1E4;
    public const nint m_flNoiseScale = 0x1E8;
    public const nint m_flWorldNoiseScale = 0x1EC;
    public const nint m_vecOffsetLoc = 0x1F0;
    public const nint m_flWorldTimeScale = 0x1FC;
}

public static class C_OP_NormalLock {
    public const nint m_nControlPointNumber = 0x1C0;
}

public static class C_OP_NormalizeVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flScale = 0x1C4;
}

public static class C_OP_Orient2DRelToCP {
    public const nint m_flRotOffset = 0x1C0;
    public const nint m_flSpinStrength = 0x1C4;
    public const nint m_nCP = 0x1C8;
    public const nint m_nFieldOutput = 0x1CC;
}

public static class C_OP_OrientTo2dDirection {
    public const nint m_flRotOffset = 0x1C0;
    public const nint m_flSpinStrength = 0x1C4;
    public const nint m_nFieldOutput = 0x1C8;
}

public static class C_OP_OscillateScalar {
    public const nint m_RateMin = 0x1C0;
    public const nint m_RateMax = 0x1C4;
    public const nint m_FrequencyMin = 0x1C8;
    public const nint m_FrequencyMax = 0x1CC;
    public const nint m_nField = 0x1D0;
    public const nint m_bProportional = 0x1D4;
    public const nint m_bProportionalOp = 0x1D5;
    public const nint m_flStartTime_min = 0x1D8;
    public const nint m_flStartTime_max = 0x1DC;
    public const nint m_flEndTime_min = 0x1E0;
    public const nint m_flEndTime_max = 0x1E4;
    public const nint m_flOscMult = 0x1E8;
    public const nint m_flOscAdd = 0x1EC;
}

public static class C_OP_OscillateScalarSimple {
    public const nint m_Rate = 0x1C0;
    public const nint m_Frequency = 0x1C4;
    public const nint m_nField = 0x1C8;
    public const nint m_flOscMult = 0x1CC;
    public const nint m_flOscAdd = 0x1D0;
}

public static class C_OP_OscillateVector {
    public const nint m_RateMin = 0x1C0;
    public const nint m_RateMax = 0x1CC;
    public const nint m_FrequencyMin = 0x1D8;
    public const nint m_FrequencyMax = 0x1E4;
    public const nint m_nField = 0x1F0;
    public const nint m_bProportional = 0x1F4;
    public const nint m_bProportionalOp = 0x1F5;
    public const nint m_bOffset = 0x1F6;
    public const nint m_flStartTime_min = 0x1F8;
    public const nint m_flStartTime_max = 0x1FC;
    public const nint m_flEndTime_min = 0x200;
    public const nint m_flEndTime_max = 0x204;
    public const nint m_flOscMult = 0x208;
    public const nint m_flOscAdd = 0x360;
    public const nint m_flRateScale = 0x4B8;
}

public static class C_OP_OscillateVectorSimple {
    public const nint m_Rate = 0x1C0;
    public const nint m_Frequency = 0x1CC;
    public const nint m_nField = 0x1D8;
    public const nint m_flOscMult = 0x1DC;
    public const nint m_flOscAdd = 0x1E0;
    public const nint m_bOffset = 0x1E4;
}

public static class C_OP_ParentVortices {
    public const nint m_flForceScale = 0x1D0;
    public const nint m_vecTwistAxis = 0x1D4;
    public const nint m_bFlipBasedOnYaw = 0x1E0;
}

public static class C_OP_ParticlePhysics {
    public const nint m_Gravity = 0x1C0;
    public const nint m_fDrag = 0x818;
    public const nint m_nMaxConstraintPasses = 0x970;
}

public static class C_OP_PerParticleForce {
    public const nint m_flForceScale = 0x1D0;
    public const nint m_vForce = 0x328;
    public const nint m_nCP = 0x980;
}

public static class C_OP_PercentageBetweenTransformLerpCPs {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C4;
    public const nint m_flInputMax = 0x1C8;
    public const nint m_TransformStart = 0x1D0;
    public const nint m_TransformEnd = 0x238;
    public const nint m_nOutputStartCP = 0x2A0;
    public const nint m_nOutputStartField = 0x2A4;
    public const nint m_nOutputEndCP = 0x2A8;
    public const nint m_nOutputEndField = 0x2AC;
    public const nint m_nSetMethod = 0x2B0;
    public const nint m_bActiveRange = 0x2B4;
    public const nint m_bRadialCheck = 0x2B5;
}

public static class C_OP_PercentageBetweenTransforms {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C4;
    public const nint m_flInputMax = 0x1C8;
    public const nint m_flOutputMin = 0x1CC;
    public const nint m_flOutputMax = 0x1D0;
    public const nint m_TransformStart = 0x1D8;
    public const nint m_TransformEnd = 0x240;
    public const nint m_nSetMethod = 0x2A8;
    public const nint m_bActiveRange = 0x2AC;
    public const nint m_bRadialCheck = 0x2AD;
}

public static class C_OP_PercentageBetweenTransformsVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C4;
    public const nint m_flInputMax = 0x1C8;
    public const nint m_vecOutputMin = 0x1CC;
    public const nint m_vecOutputMax = 0x1D8;
    public const nint m_TransformStart = 0x1E8;
    public const nint m_TransformEnd = 0x250;
    public const nint m_nSetMethod = 0x2B8;
    public const nint m_bActiveRange = 0x2BC;
    public const nint m_bRadialCheck = 0x2BD;
}

public static class C_OP_PinParticleToCP {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_vecOffset = 0x1C8;
    public const nint m_bOffsetLocal = 0x820;
    public const nint m_nParticleSelection = 0x824;
    public const nint m_nParticleNumber = 0x828;
    public const nint m_nPinBreakType = 0x980;
    public const nint m_flBreakDistance = 0x988;
    public const nint m_flBreakSpeed = 0xAE0;
    public const nint m_flAge = 0xC38;
    public const nint m_nBreakControlPointNumber = 0xD90;
    public const nint m_nBreakControlPointNumber2 = 0xD94;
    public const nint m_flBreakValue = 0xD98;
    public const nint m_flInterpolation = 0xEF0;
}

public static class C_OP_PlanarConstraint {
    public const nint m_PointOnPlane = 0x1C0;
    public const nint m_PlaneNormal = 0x1CC;
    public const nint m_nControlPointNumber = 0x1D8;
    public const nint m_bGlobalOrigin = 0x1DC;
    public const nint m_bGlobalNormal = 0x1DD;
    public const nint m_flRadiusScale = 0x1E0;
    public const nint m_flMaximumDistanceToCP = 0x338;
}

public static class C_OP_PlaneCull {
    public const nint m_nPlaneControlPoint = 0x1C0;
    public const nint m_vecPlaneDirection = 0x1C4;
    public const nint m_bLocalSpace = 0x1D0;
    public const nint m_flPlaneOffset = 0x1D4;
}

public static class C_OP_PlayEndCapWhenFinished {
    public const nint m_bFireOnEmissionEnd = 0x1D0;
    public const nint m_bIncludeChildren = 0x1D1;
}

public static class C_OP_PointVectorAtNextParticle {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInterpolation = 0x1C8;
}

public static class C_OP_PositionLock {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_flStartTime_min = 0x228;
    public const nint m_flStartTime_max = 0x22C;
    public const nint m_flStartTime_exp = 0x230;
    public const nint m_flEndTime_min = 0x234;
    public const nint m_flEndTime_max = 0x238;
    public const nint m_flEndTime_exp = 0x23C;
    public const nint m_flRange = 0x240;
    public const nint m_flRangeBias = 0x248;
    public const nint m_flJumpThreshold = 0x3A0;
    public const nint m_flPrevPosScale = 0x3A4;
    public const nint m_bLockRot = 0x3A8;
    public const nint m_vecScale = 0x3B0;
    public const nint m_nFieldOutput = 0xA08;
    public const nint m_nFieldOutputPrev = 0xA0C;
}

public static class C_OP_QuantizeCPComponent {
    public const nint m_flInputValue = 0x1D0;
    public const nint m_nCPOutput = 0x328;
    public const nint m_nOutVectorField = 0x32C;
    public const nint m_flQuantizeValue = 0x330;
}

public static class C_OP_QuantizeFloat {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x318;
}

public static class C_OP_RadiusDecay {
    public const nint m_flMinRadius = 0x1C0;
}

public static class C_OP_RampCPLinearRandom {
    public const nint m_nOutControlPointNumber = 0x1D0;
    public const nint m_vecRateMin = 0x1D4;
    public const nint m_vecRateMax = 0x1E0;
}

public static class C_OP_RampScalarLinear {
    public const nint m_RateMin = 0x1C0;
    public const nint m_RateMax = 0x1C4;
    public const nint m_flStartTime_min = 0x1C8;
    public const nint m_flStartTime_max = 0x1CC;
    public const nint m_flEndTime_min = 0x1D0;
    public const nint m_flEndTime_max = 0x1D4;
    public const nint m_nField = 0x200;
    public const nint m_bProportionalOp = 0x204;
}

public static class C_OP_RampScalarLinearSimple {
    public const nint m_Rate = 0x1C0;
    public const nint m_flStartTime = 0x1C4;
    public const nint m_flEndTime = 0x1C8;
    public const nint m_nField = 0x1F0;
}

public static class C_OP_RampScalarSpline {
    public const nint m_RateMin = 0x1C0;
    public const nint m_RateMax = 0x1C4;
    public const nint m_flStartTime_min = 0x1C8;
    public const nint m_flStartTime_max = 0x1CC;
    public const nint m_flEndTime_min = 0x1D0;
    public const nint m_flEndTime_max = 0x1D4;
    public const nint m_flBias = 0x1D8;
    public const nint m_nField = 0x200;
    public const nint m_bProportionalOp = 0x204;
    public const nint m_bEaseOut = 0x205;
}

public static class C_OP_RampScalarSplineSimple {
    public const nint m_Rate = 0x1C0;
    public const nint m_flStartTime = 0x1C4;
    public const nint m_flEndTime = 0x1C8;
    public const nint m_nField = 0x1F0;
    public const nint m_bEaseOut = 0x1F4;
}

public static class C_OP_RandomForce {
    public const nint m_MinForce = 0x1D0;
    public const nint m_MaxForce = 0x1DC;
}

public static class C_OP_ReadFromNeighboringParticle {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nIncrement = 0x1C8;
    public const nint m_DistanceCheck = 0x1D0;
    public const nint m_flInterpolation = 0x328;
}

public static class C_OP_ReinitializeScalarEndCap {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flOutputMin = 0x1C4;
    public const nint m_flOutputMax = 0x1C8;
}

public static class C_OP_RemapAverageHitboxSpeedtoCP {
    public const nint m_nInControlPointNumber = 0x1D0;
    public const nint m_nOutControlPointNumber = 0x1D4;
    public const nint m_nField = 0x1D8;
    public const nint m_flInputMin = 0x1E0;
    public const nint m_flInputMax = 0x338;
    public const nint m_flOutputMin = 0x490;
    public const nint m_flOutputMax = 0x5E8;
    public const nint m_nHeightControlPointNumber = 0x740;
    public const nint m_vecComparisonVelocity = 0x748;
    public const nint m_HitboxSetName = 0xDA0;
}

public static class C_OP_RemapAverageScalarValuetoCP {
    public const nint m_nOutControlPointNumber = 0x1D0;
    public const nint m_nOutVectorField = 0x1D4;
    public const nint m_nField = 0x1D8;
    public const nint m_flInputMin = 0x1DC;
    public const nint m_flInputMax = 0x1E0;
    public const nint m_flOutputMin = 0x1E4;
    public const nint m_flOutputMax = 0x1E8;
}

public static class C_OP_RemapBoundingVolumetoCP {
    public const nint m_nOutControlPointNumber = 0x1D0;
    public const nint m_flInputMin = 0x1D4;
    public const nint m_flInputMax = 0x1D8;
    public const nint m_flOutputMin = 0x1DC;
    public const nint m_flOutputMax = 0x1E0;
}

public static class C_OP_RemapCPVelocityToVector {
    public const nint m_nControlPoint = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flScale = 0x1C8;
    public const nint m_bNormalize = 0x1CC;
}

public static class C_OP_RemapCPtoCP {
    public const nint m_nInputControlPoint = 0x1D0;
    public const nint m_nOutputControlPoint = 0x1D4;
    public const nint m_nInputField = 0x1D8;
    public const nint m_nOutputField = 0x1DC;
    public const nint m_flInputMin = 0x1E0;
    public const nint m_flInputMax = 0x1E4;
    public const nint m_flOutputMin = 0x1E8;
    public const nint m_flOutputMax = 0x1EC;
    public const nint m_bDerivative = 0x1F0;
    public const nint m_flInterpRate = 0x1F4;
}

public static class C_OP_RemapCPtoScalar {
    public const nint m_nCPInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nField = 0x1C8;
    public const nint m_flInputMin = 0x1CC;
    public const nint m_flInputMax = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_flStartTime = 0x1DC;
    public const nint m_flEndTime = 0x1E0;
    public const nint m_flInterpRate = 0x1E4;
    public const nint m_nSetMethod = 0x1E8;
}

public static class C_OP_RemapCPtoVector {
    public const nint m_nCPInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nLocalSpaceCP = 0x1C8;
    public const nint m_vInputMin = 0x1CC;
    public const nint m_vInputMax = 0x1D8;
    public const nint m_vOutputMin = 0x1E4;
    public const nint m_vOutputMax = 0x1F0;
    public const nint m_flStartTime = 0x1FC;
    public const nint m_flEndTime = 0x200;
    public const nint m_flInterpRate = 0x204;
    public const nint m_nSetMethod = 0x208;
    public const nint m_bOffset = 0x20C;
    public const nint m_bAccelerate = 0x20D;
}

public static class C_OP_RemapControlPointDirectionToVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flScale = 0x1C4;
    public const nint m_nControlPointNumber = 0x1C8;
}

public static class C_OP_RemapControlPointOrientationToRotation {
    public const nint m_nCP = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flOffsetRot = 0x1C8;
    public const nint m_nComponent = 0x1CC;
}

public static class C_OP_RemapCrossProductOfTwoVectorsToVector {
    public const nint m_InputVec1 = 0x1C0;
    public const nint m_InputVec2 = 0x818;
    public const nint m_nFieldOutput = 0xE70;
    public const nint m_bNormalize = 0xE74;
}

public static class C_OP_RemapDensityGradientToVectorAttribute {
    public const nint m_flRadiusScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
}

public static class C_OP_RemapDensityToVector {
    public const nint m_flRadiusScale = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flDensityMin = 0x1C8;
    public const nint m_flDensityMax = 0x1CC;
    public const nint m_vecOutputMin = 0x1D0;
    public const nint m_vecOutputMax = 0x1DC;
    public const nint m_bUseParentDensity = 0x1E8;
    public const nint m_nVoxelGridResolution = 0x1EC;
}

public static class C_OP_RemapDirectionToCPToVector {
    public const nint m_nCP = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flScale = 0x1C8;
    public const nint m_flOffsetRot = 0x1CC;
    public const nint m_vecOffsetAxis = 0x1D0;
    public const nint m_bNormalize = 0x1DC;
    public const nint m_nFieldStrength = 0x1E0;
}

public static class C_OP_RemapDistanceToLineSegmentBase {
    public const nint m_nCP0 = 0x1C0;
    public const nint m_nCP1 = 0x1C4;
    public const nint m_flMinInputValue = 0x1C8;
    public const nint m_flMaxInputValue = 0x1CC;
    public const nint m_bInfiniteLine = 0x1D0;
}

public static class C_OP_RemapDistanceToLineSegmentToScalar {
    public const nint m_nFieldOutput = 0x1E0;
    public const nint m_flMinOutputValue = 0x1E4;
    public const nint m_flMaxOutputValue = 0x1E8;
}

public static class C_OP_RemapDistanceToLineSegmentToVector {
    public const nint m_nFieldOutput = 0x1E0;
    public const nint m_vMinOutputValue = 0x1E4;
    public const nint m_vMaxOutputValue = 0x1F0;
}

public static class C_OP_RemapDotProductToCP {
    public const nint m_nInputCP1 = 0x1D0;
    public const nint m_nInputCP2 = 0x1D4;
    public const nint m_nOutputCP = 0x1D8;
    public const nint m_nOutVectorField = 0x1DC;
    public const nint m_flInputMin = 0x1E0;
    public const nint m_flInputMax = 0x338;
    public const nint m_flOutputMin = 0x490;
    public const nint m_flOutputMax = 0x5E8;
}

public static class C_OP_RemapDotProductToScalar {
    public const nint m_nInputCP1 = 0x1C0;
    public const nint m_nInputCP2 = 0x1C4;
    public const nint m_nFieldOutput = 0x1C8;
    public const nint m_flInputMin = 0x1CC;
    public const nint m_flInputMax = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_bUseParticleVelocity = 0x1DC;
    public const nint m_nSetMethod = 0x1E0;
    public const nint m_bActiveRange = 0x1E4;
    public const nint m_bUseParticleNormal = 0x1E5;
}

public static class C_OP_RemapExternalWindToCP {
    public const nint m_nCP = 0x1D0;
    public const nint m_nCPOutput = 0x1D4;
    public const nint m_vecScale = 0x1D8;
    public const nint m_bSetMagnitude = 0x830;
    public const nint m_nOutVectorField = 0x834;
}

public static class C_OP_RemapModelVolumetoCP {
    public const nint m_nBBoxType = 0x1D0;
    public const nint m_nInControlPointNumber = 0x1D4;
    public const nint m_nOutControlPointNumber = 0x1D8;
    public const nint m_nOutControlPointMaxNumber = 0x1DC;
    public const nint m_nField = 0x1E0;
    public const nint m_flInputMin = 0x1E4;
    public const nint m_flInputMax = 0x1E8;
    public const nint m_flOutputMin = 0x1EC;
    public const nint m_flOutputMax = 0x1F0;
}

public static class C_OP_RemapNamedModelElementEndCap {
    public const nint m_hModel = 0x1C0;
    public const nint m_inNames = 0x1C8;
    public const nint m_outNames = 0x1E0;
    public const nint m_fallbackNames = 0x1F8;
    public const nint m_bModelFromRenderer = 0x210;
    public const nint m_nFieldInput = 0x214;
    public const nint m_nFieldOutput = 0x218;
}

public static class C_OP_RemapNamedModelElementOnceTimed {
    public const nint m_hModel = 0x1C0;
    public const nint m_inNames = 0x1C8;
    public const nint m_outNames = 0x1E0;
    public const nint m_fallbackNames = 0x1F8;
    public const nint m_bModelFromRenderer = 0x210;
    public const nint m_bProportional = 0x211;
    public const nint m_nFieldInput = 0x214;
    public const nint m_nFieldOutput = 0x218;
    public const nint m_flRemapTime = 0x21C;
}

public static class C_OP_RemapParticleCountOnScalarEndCap {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nInputMin = 0x1C4;
    public const nint m_nInputMax = 0x1C8;
    public const nint m_flOutputMin = 0x1CC;
    public const nint m_flOutputMax = 0x1D0;
    public const nint m_bBackwards = 0x1D4;
    public const nint m_nSetMethod = 0x1D8;
}

public static class C_OP_RemapParticleCountToScalar {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nInputMin = 0x1C8;
    public const nint m_nInputMax = 0x320;
    public const nint m_flOutputMin = 0x478;
    public const nint m_flOutputMax = 0x5D0;
    public const nint m_bActiveRange = 0x728;
    public const nint m_nSetMethod = 0x72C;
}

public static class C_OP_RemapSDFDistanceToScalarAttribute {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_nVectorFieldInput = 0x1C4;
    public const nint m_flMinDistance = 0x1C8;
    public const nint m_flMaxDistance = 0x320;
    public const nint m_flValueBelowMin = 0x478;
    public const nint m_flValueAtMin = 0x5D0;
    public const nint m_flValueAtMax = 0x728;
    public const nint m_flValueAboveMax = 0x880;
}

public static class C_OP_RemapSDFDistanceToVectorAttribute {
    public const nint m_nVectorFieldOutput = 0x1C0;
    public const nint m_nVectorFieldInput = 0x1C4;
    public const nint m_flMinDistance = 0x1C8;
    public const nint m_flMaxDistance = 0x320;
    public const nint m_vValueBelowMin = 0x478;
    public const nint m_vValueAtMin = 0x484;
    public const nint m_vValueAtMax = 0x490;
    public const nint m_vValueAboveMax = 0x49C;
}

public static class C_OP_RemapSDFGradientToVectorAttribute {
    public const nint m_nFieldOutput = 0x1C0;
}

public static class C_OP_RemapScalar {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_flOutputMin = 0x1D0;
    public const nint m_flOutputMax = 0x1D4;
    public const nint m_bOldCode = 0x1D8;
}

public static class C_OP_RemapScalarEndCap {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_flOutputMin = 0x1D0;
    public const nint m_flOutputMax = 0x1D4;
}

public static class C_OP_RemapScalarOnceTimed {
    public const nint m_bProportional = 0x1C0;
    public const nint m_nFieldInput = 0x1C4;
    public const nint m_nFieldOutput = 0x1C8;
    public const nint m_flInputMin = 0x1CC;
    public const nint m_flInputMax = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_flRemapTime = 0x1DC;
}

public static class C_OP_RemapSpeed {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flInputMin = 0x1C4;
    public const nint m_flInputMax = 0x1C8;
    public const nint m_flOutputMin = 0x1CC;
    public const nint m_flOutputMax = 0x1D0;
    public const nint m_nSetMethod = 0x1D4;
    public const nint m_bIgnoreDelta = 0x1D8;
}

public static class C_OP_RemapSpeedtoCP {
    public const nint m_nInControlPointNumber = 0x1D0;
    public const nint m_nOutControlPointNumber = 0x1D4;
    public const nint m_nField = 0x1D8;
    public const nint m_flInputMin = 0x1DC;
    public const nint m_flInputMax = 0x1E0;
    public const nint m_flOutputMin = 0x1E4;
    public const nint m_flOutputMax = 0x1E8;
    public const nint m_bUseDeltaV = 0x1EC;
}

public static class C_OP_RemapTransformOrientationToRotations {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_vecRotation = 0x228;
    public const nint m_bUseQuat = 0x234;
    public const nint m_bWriteNormal = 0x235;
}

public static class C_OP_RemapTransformOrientationToYaw {
    public const nint m_TransformInput = 0x1C0;
    public const nint m_nFieldOutput = 0x228;
    public const nint m_flRotOffset = 0x22C;
    public const nint m_flSpinStrength = 0x230;
}

public static class C_OP_RemapTransformToVelocity {
    public const nint m_TransformInput = 0x1C0;
}

public static class C_OP_RemapTransformVisibilityToScalar {
    public const nint m_nSetMethod = 0x1C0;
    public const nint m_TransformInput = 0x1C8;
    public const nint m_nFieldOutput = 0x230;
    public const nint m_flInputMin = 0x234;
    public const nint m_flInputMax = 0x238;
    public const nint m_flOutputMin = 0x23C;
    public const nint m_flOutputMax = 0x240;
    public const nint m_flRadius = 0x244;
}

public static class C_OP_RemapTransformVisibilityToVector {
    public const nint m_nSetMethod = 0x1C0;
    public const nint m_TransformInput = 0x1C8;
    public const nint m_nFieldOutput = 0x230;
    public const nint m_flInputMin = 0x234;
    public const nint m_flInputMax = 0x238;
    public const nint m_vecOutputMin = 0x23C;
    public const nint m_vecOutputMax = 0x248;
    public const nint m_flRadius = 0x254;
}

public static class C_OP_RemapVectorComponentToScalar {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nComponent = 0x1C8;
}

public static class C_OP_RemapVectortoCP {
    public const nint m_nOutControlPointNumber = 0x1C0;
    public const nint m_nFieldInput = 0x1C4;
    public const nint m_nParticleNumber = 0x1C8;
}

public static class C_OP_RemapVelocityToVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_flScale = 0x1C4;
    public const nint m_bNormalize = 0x1C8;
}

public static class C_OP_RemapVisibilityScalar {
    public const nint m_nFieldInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_flInputMin = 0x1C8;
    public const nint m_flInputMax = 0x1CC;
    public const nint m_flOutputMin = 0x1D0;
    public const nint m_flOutputMax = 0x1D4;
    public const nint m_flRadiusScale = 0x1D8;
}

public static class C_OP_RenderAsModels {
    public const nint m_ModelList = 0x200;
    public const nint m_flModelScale = 0x21C;
    public const nint m_bFitToModelSize = 0x220;
    public const nint m_bNonUniformScaling = 0x221;
    public const nint m_nXAxisScalingAttribute = 0x224;
    public const nint m_nYAxisScalingAttribute = 0x228;
    public const nint m_nZAxisScalingAttribute = 0x22C;
    public const nint m_nSizeCullBloat = 0x230;
}

public static class C_OP_RenderBlobs {
    public const nint m_cubeWidth = 0x200;
    public const nint m_cutoffRadius = 0x358;
    public const nint m_renderRadius = 0x4B0;
    public const nint m_nScaleCP = 0x608;
    public const nint m_MaterialVars = 0x610;
    public const nint m_hMaterial = 0x640;
}

public static class C_OP_RenderCables {
    public const nint m_flRadiusScale = 0x200;
    public const nint m_flAlphaScale = 0x358;
    public const nint m_vecColorScale = 0x4B0;
    public const nint m_nColorBlendType = 0xB08;
    public const nint m_hMaterial = 0xB10;
    public const nint m_nTextureRepetitionMode = 0xB18;
    public const nint m_flTextureRepeatsPerSegment = 0xB20;
    public const nint m_flTextureRepeatsCircumference = 0xC78;
    public const nint m_flColorMapOffsetV = 0xDD0;
    public const nint m_flColorMapOffsetU = 0xF28;
    public const nint m_flNormalMapOffsetV = 0x1080;
    public const nint m_flNormalMapOffsetU = 0x11D8;
    public const nint m_bDrawCableCaps = 0x1330;
    public const nint m_flCapRoundness = 0x1334;
    public const nint m_flCapOffsetAmount = 0x1338;
    public const nint m_flTessScale = 0x133C;
    public const nint m_nMinTesselation = 0x1340;
    public const nint m_nMaxTesselation = 0x1344;
    public const nint m_nRoundness = 0x1348;
    public const nint m_LightingTransform = 0x1350;
    public const nint m_MaterialFloatVars = 0x13B8;
    public const nint m_MaterialVecVars = 0x13E8;
}

public static class C_OP_RenderDeferredLight {
    public const nint m_bUseAlphaTestWindow = 0x200;
    public const nint m_bUseTexture = 0x201;
    public const nint m_flRadiusScale = 0x204;
    public const nint m_flAlphaScale = 0x208;
    public const nint m_nAlpha2Field = 0x20C;
    public const nint m_vecColorScale = 0x210;
    public const nint m_nColorBlendType = 0x868;
    public const nint m_flLightDistance = 0x86C;
    public const nint m_flStartFalloff = 0x870;
    public const nint m_flDistanceFalloff = 0x874;
    public const nint m_flSpotFoV = 0x878;
    public const nint m_nAlphaTestPointField = 0x87C;
    public const nint m_nAlphaTestRangeField = 0x880;
    public const nint m_nAlphaTestSharpnessField = 0x884;
    public const nint m_hTexture = 0x888;
    public const nint m_nHSVShiftControlPoint = 0x890;
}

public static class C_OP_RenderFlattenGrass {
    public const nint m_flFlattenStrength = 0x200;
    public const nint m_nStrengthFieldOverride = 0x204;
    public const nint m_flRadiusScale = 0x208;
}

public static class C_OP_RenderGpuImplicit {
    public const nint m_bUsePerParticleRadius = 0x200;
    public const nint m_fGridSize = 0x208;
    public const nint m_fRadiusScale = 0x360;
    public const nint m_fIsosurfaceThreshold = 0x4B8;
    public const nint m_nScaleCP = 0x610;
    public const nint m_hMaterial = 0x618;
}

public static class C_OP_RenderLightBeam {
    public const nint m_vColorBlend = 0x200;
    public const nint m_nColorBlendType = 0x858;
    public const nint m_flBrightnessLumensPerMeter = 0x860;
    public const nint m_bCastShadows = 0x9B8;
    public const nint m_flSkirt = 0x9C0;
    public const nint m_flRange = 0xB18;
    public const nint m_flThickness = 0xC70;
}

public static class C_OP_RenderLights {
    public const nint m_flAnimationRate = 0x210;
    public const nint m_nAnimationType = 0x214;
    public const nint m_bAnimateInFPS = 0x218;
    public const nint m_flMinSize = 0x21C;
    public const nint m_flMaxSize = 0x220;
    public const nint m_flStartFadeSize = 0x224;
    public const nint m_flEndFadeSize = 0x228;
}

public static class C_OP_RenderMaterialProxy {
    public const nint m_nMaterialControlPoint = 0x200;
    public const nint m_nProxyType = 0x204;
    public const nint m_MaterialVars = 0x208;
    public const nint m_hOverrideMaterial = 0x220;
    public const nint m_flMaterialOverrideEnabled = 0x228;
    public const nint m_vecColorScale = 0x380;
    public const nint m_flAlpha = 0x9D8;
    public const nint m_nColorBlendType = 0xB30;
}

public static class C_OP_RenderModels {
    public const nint m_bOnlyRenderInEffectsBloomPass = 0x200;
    public const nint m_bOnlyRenderInEffectsWaterPass = 0x201;
    public const nint m_bUseMixedResolutionRendering = 0x202;
    public const nint m_bOnlyRenderInEffecsGameOverlay = 0x203;
    public const nint m_ModelList = 0x208;
    public const nint m_nBodyGroupField = 0x224;
    public const nint m_nSubModelField = 0x228;
    public const nint m_bIgnoreNormal = 0x22C;
    public const nint m_bOrientZ = 0x22D;
    public const nint m_bCenterOffset = 0x22E;
    public const nint m_vecLocalOffset = 0x230;
    public const nint m_vecLocalRotation = 0x888;
    public const nint m_bIgnoreRadius = 0xEE0;
    public const nint m_nModelScaleCP = 0xEE4;
    public const nint m_vecComponentScale = 0xEE8;
    public const nint m_bLocalScale = 0x1540;
    public const nint m_nSizeCullBloat = 0x1544;
    public const nint m_bAnimated = 0x1548;
    public const nint m_flAnimationRate = 0x154C;
    public const nint m_bScaleAnimationRate = 0x1550;
    public const nint m_bForceLoopingAnimation = 0x1551;
    public const nint m_bResetAnimOnStop = 0x1552;
    public const nint m_bManualAnimFrame = 0x1553;
    public const nint m_nAnimationScaleField = 0x1554;
    public const nint m_nAnimationField = 0x1558;
    public const nint m_nManualFrameField = 0x155C;
    public const nint m_ActivityName = 0x1560;
    public const nint m_SequenceName = 0x1660;
    public const nint m_bEnableClothSimulation = 0x1760;
    public const nint m_hOverrideMaterial = 0x1768;
    public const nint m_bOverrideTranslucentMaterials = 0x1770;
    public const nint m_nSkin = 0x1778;
    public const nint m_MaterialVars = 0x18D0;
    public const nint m_modelInput = 0x18E8;
    public const nint m_nLOD = 0x1948;
    public const nint m_EconSlotName = 0x194C;
    public const nint m_bOriginalModel = 0x1A4C;
    public const nint m_bSuppressTint = 0x1A4D;
    public const nint m_bUseRawMeshGroup = 0x1A4E;
    public const nint m_bDisableShadows = 0x1A4F;
    public const nint m_bAcceptsDecals = 0x1A50;
    public const nint m_bForceDrawInterlevedWithSiblings = 0x1A51;
    public const nint m_bDoNotDrawInParticlePass = 0x1A52;
    public const nint m_szRenderAttribute = 0x1A53;
    public const nint m_flRadiusScale = 0x1B58;
    public const nint m_flAlphaScale = 0x1CB0;
    public const nint m_flRollScale = 0x1E08;
    public const nint m_nAlpha2Field = 0x1F60;
    public const nint m_vecColorScale = 0x1F68;
    public const nint m_nColorBlendType = 0x25C0;
}

public static class C_OP_RenderOmni2Light {
    public const nint m_nLightType = 0x200;
    public const nint m_vColorBlend = 0x208;
    public const nint m_nColorBlendType = 0x860;
    public const nint m_nBrightnessUnit = 0x864;
    public const nint m_flBrightnessLumens = 0x868;
    public const nint m_flBrightnessCandelas = 0x9C0;
    public const nint m_bCastShadows = 0xB18;
    public const nint m_flLuminaireRadius = 0xB20;
    public const nint m_flSkirt = 0xC78;
    public const nint m_flRange = 0xDD0;
    public const nint m_flInnerConeAngle = 0xF28;
    public const nint m_flOuterConeAngle = 0x1080;
    public const nint m_hLightCookie = 0x11D8;
    public const nint m_bSphericalCookie = 0x11E0;
}

public static class C_OP_RenderPoints {
    public const nint m_hMaterial = 0x200;
}

public static class C_OP_RenderPostProcessing {
    public const nint m_flPostProcessStrength = 0x200;
    public const nint m_hPostTexture = 0x358;
    public const nint m_nPriority = 0x360;
}

public static class C_OP_RenderProjected {
    public const nint m_bProjectCharacter = 0x200;
    public const nint m_bProjectWorld = 0x201;
    public const nint m_bProjectWater = 0x202;
    public const nint m_bFlipHorizontal = 0x203;
    public const nint m_bEnableProjectedDepthControls = 0x204;
    public const nint m_flMinProjectionDepth = 0x208;
    public const nint m_flMaxProjectionDepth = 0x20C;
    public const nint m_hProjectedMaterial = 0x210;
    public const nint m_flAnimationTimeScale = 0x218;
    public const nint m_bOrientToNormal = 0x21C;
    public const nint m_MaterialVars = 0x220;
}

public static class C_OP_RenderRopes {
    public const nint m_bEnableFadingAndClamping = 0x2470;
    public const nint m_flMinSize = 0x2474;
    public const nint m_flMaxSize = 0x2478;
    public const nint m_flStartFadeSize = 0x247C;
    public const nint m_flEndFadeSize = 0x2480;
    public const nint m_flStartFadeDot = 0x2484;
    public const nint m_flEndFadeDot = 0x2488;
    public const nint m_flRadiusTaper = 0x248C;
    public const nint m_nMinTesselation = 0x2490;
    public const nint m_nMaxTesselation = 0x2494;
    public const nint m_flTessScale = 0x2498;
    public const nint m_flTextureVWorldSize = 0x24A0;
    public const nint m_flTextureVScrollRate = 0x25F8;
    public const nint m_flTextureVOffset = 0x2750;
    public const nint m_nTextureVParamsCP = 0x28A8;
    public const nint m_bClampV = 0x28AC;
    public const nint m_nScaleCP1 = 0x28B0;
    public const nint m_nScaleCP2 = 0x28B4;
    public const nint m_flScaleVSizeByControlPointDistance = 0x28B8;
    public const nint m_flScaleVScrollByControlPointDistance = 0x28BC;
    public const nint m_flScaleVOffsetByControlPointDistance = 0x28C0;
    public const nint m_bUseScalarForTextureCoordinate = 0x28C5;
    public const nint m_nScalarFieldForTextureCoordinate = 0x28C8;
    public const nint m_flScalarAttributeTextureCoordScale = 0x28CC;
    public const nint m_bReverseOrder = 0x28D0;
    public const nint m_bClosedLoop = 0x28D1;
    public const nint m_nOrientationType = 0x28D4;
    public const nint m_nVectorFieldForOrientation = 0x28D8;
    public const nint m_bDrawAsOpaque = 0x28DC;
    public const nint m_bGenerateNormals = 0x28DD;
}

public static class C_OP_RenderScreenShake {
    public const nint m_flDurationScale = 0x200;
    public const nint m_flRadiusScale = 0x204;
    public const nint m_flFrequencyScale = 0x208;
    public const nint m_flAmplitudeScale = 0x20C;
    public const nint m_nRadiusField = 0x210;
    public const nint m_nDurationField = 0x214;
    public const nint m_nFrequencyField = 0x218;
    public const nint m_nAmplitudeField = 0x21C;
    public const nint m_nFilterCP = 0x220;
}

public static class C_OP_RenderScreenVelocityRotate {
    public const nint m_flRotateRateDegrees = 0x200;
    public const nint m_flForwardDegrees = 0x204;
}

public static class C_OP_RenderSound {
    public const nint m_flDurationScale = 0x200;
    public const nint m_flSndLvlScale = 0x204;
    public const nint m_flPitchScale = 0x208;
    public const nint m_flVolumeScale = 0x20C;
    public const nint m_nSndLvlField = 0x210;
    public const nint m_nDurationField = 0x214;
    public const nint m_nPitchField = 0x218;
    public const nint m_nVolumeField = 0x21C;
    public const nint m_nChannel = 0x220;
    public const nint m_nCPReference = 0x224;
    public const nint m_pszSoundName = 0x228;
    public const nint m_bSuppressStopSoundEvent = 0x328;
}

public static class C_OP_RenderSprites {
    public const nint m_nSequenceOverride = 0x2470;
    public const nint m_nOrientationType = 0x25C8;
    public const nint m_nOrientationControlPoint = 0x25CC;
    public const nint m_bUseYawWithNormalAligned = 0x25D0;
    public const nint m_flMinSize = 0x25D4;
    public const nint m_flMaxSize = 0x25D8;
    public const nint m_flAlphaAdjustWithSizeAdjust = 0x25DC;
    public const nint m_flStartFadeSize = 0x25E0;
    public const nint m_flEndFadeSize = 0x2738;
    public const nint m_flStartFadeDot = 0x2890;
    public const nint m_flEndFadeDot = 0x2894;
    public const nint m_bDistanceAlpha = 0x2898;
    public const nint m_bSoftEdges = 0x2899;
    public const nint m_flEdgeSoftnessStart = 0x289C;
    public const nint m_flEdgeSoftnessEnd = 0x28A0;
    public const nint m_bOutline = 0x28A4;
    public const nint m_OutlineColor = 0x28A5;
    public const nint m_nOutlineAlpha = 0x28AC;
    public const nint m_flOutlineStart0 = 0x28B0;
    public const nint m_flOutlineStart1 = 0x28B4;
    public const nint m_flOutlineEnd0 = 0x28B8;
    public const nint m_flOutlineEnd1 = 0x28BC;
    public const nint m_nLightingMode = 0x28C0;
    public const nint m_flLightingTessellation = 0x28C8;
    public const nint m_flLightingDirectionality = 0x2A20;
    public const nint m_bParticleShadows = 0x2B78;
    public const nint m_flShadowDensity = 0x2B7C;
}

public static class C_OP_RenderStandardLight {
    public const nint m_nLightType = 0x200;
    public const nint m_vecColorScale = 0x208;
    public const nint m_nColorBlendType = 0x860;
    public const nint m_flIntensity = 0x868;
    public const nint m_bCastShadows = 0x9C0;
    public const nint m_flTheta = 0x9C8;
    public const nint m_flPhi = 0xB20;
    public const nint m_flRadiusMultiplier = 0xC78;
    public const nint m_nAttenuationStyle = 0xDD0;
    public const nint m_flFalloffLinearity = 0xDD8;
    public const nint m_flFiftyPercentFalloff = 0xF30;
    public const nint m_flZeroPercentFalloff = 0x1088;
    public const nint m_bRenderDiffuse = 0x11E0;
    public const nint m_bRenderSpecular = 0x11E1;
    public const nint m_lightCookie = 0x11E8;
    public const nint m_nPriority = 0x11F0;
    public const nint m_nFogLightingMode = 0x11F4;
    public const nint m_flFogContribution = 0x11F8;
    public const nint m_nCapsuleLightBehavior = 0x1350;
    public const nint m_flCapsuleLength = 0x1354;
    public const nint m_bReverseOrder = 0x1358;
    public const nint m_bClosedLoop = 0x1359;
    public const nint m_nPrevPntSource = 0x135C;
    public const nint m_flMaxLength = 0x1360;
    public const nint m_flMinLength = 0x1364;
    public const nint m_bIgnoreDT = 0x1368;
    public const nint m_flConstrainRadiusToLengthRatio = 0x136C;
    public const nint m_flLengthScale = 0x1370;
    public const nint m_flLengthFadeInTime = 0x1374;
}

public static class C_OP_RenderStatusEffect {
    public const nint m_pTextureColorWarp = 0x200;
    public const nint m_pTextureDetail2 = 0x208;
    public const nint m_pTextureDiffuseWarp = 0x210;
    public const nint m_pTextureFresnelColorWarp = 0x218;
    public const nint m_pTextureFresnelWarp = 0x220;
    public const nint m_pTextureSpecularWarp = 0x228;
    public const nint m_pTextureEnvMap = 0x230;
}

public static class C_OP_RenderStatusEffectCitadel {
    public const nint m_pTextureColorWarp = 0x200;
    public const nint m_pTextureNormal = 0x208;
    public const nint m_pTextureMetalness = 0x210;
    public const nint m_pTextureRoughness = 0x218;
    public const nint m_pTextureSelfIllum = 0x220;
    public const nint m_pTextureDetail = 0x228;
}

public static class C_OP_RenderText {
    public const nint m_OutlineColor = 0x200;
    public const nint m_DefaultText = 0x208;
}

public static class C_OP_RenderTonemapController {
    public const nint m_flTonemapLevel = 0x200;
    public const nint m_flTonemapWeight = 0x204;
    public const nint m_nTonemapLevelField = 0x208;
    public const nint m_nTonemapWeightField = 0x20C;
}

public static class C_OP_RenderTrails {
    public const nint m_bEnableFadingAndClamping = 0x2740;
    public const nint m_flStartFadeDot = 0x2744;
    public const nint m_flEndFadeDot = 0x2748;
    public const nint m_nPrevPntSource = 0x274C;
    public const nint m_flMaxLength = 0x2750;
    public const nint m_flMinLength = 0x2754;
    public const nint m_bIgnoreDT = 0x2758;
    public const nint m_flConstrainRadiusToLengthRatio = 0x275C;
    public const nint m_flLengthScale = 0x2760;
    public const nint m_flLengthFadeInTime = 0x2764;
    public const nint m_flRadiusHeadTaper = 0x2768;
    public const nint m_vecHeadColorScale = 0x28C0;
    public const nint m_flHeadAlphaScale = 0x2F18;
    public const nint m_flRadiusTaper = 0x3070;
    public const nint m_vecTailColorScale = 0x31C8;
    public const nint m_flTailAlphaScale = 0x3820;
    public const nint m_nHorizCropField = 0x3978;
    public const nint m_nVertCropField = 0x397C;
    public const nint m_flForwardShift = 0x3980;
    public const nint m_bFlipUVBasedOnPitchYaw = 0x3984;
}

public static class C_OP_RenderTreeShake {
    public const nint m_flPeakStrength = 0x200;
    public const nint m_nPeakStrengthFieldOverride = 0x204;
    public const nint m_flRadius = 0x208;
    public const nint m_nRadiusFieldOverride = 0x20C;
    public const nint m_flShakeDuration = 0x210;
    public const nint m_flTransitionTime = 0x214;
    public const nint m_flTwistAmount = 0x218;
    public const nint m_flRadialAmount = 0x21C;
    public const nint m_flControlPointOrientationAmount = 0x220;
    public const nint m_nControlPointForLinearDirection = 0x224;
}

public static class C_OP_RenderVRHapticEvent {
    public const nint m_nHand = 0x200;
    public const nint m_nOutputHandCP = 0x204;
    public const nint m_nOutputField = 0x208;
    public const nint m_flAmplitude = 0x210;
}

public static class C_OP_RepeatedTriggerChildGroup {
    public const nint m_nChildGroupID = 0x1D0;
    public const nint m_flClusterRefireTime = 0x1D8;
    public const nint m_flClusterSize = 0x330;
    public const nint m_flClusterCooldown = 0x488;
    public const nint m_bLimitChildCount = 0x5E0;
}

public static class C_OP_RestartAfterDuration {
    public const nint m_flDurationMin = 0x1C0;
    public const nint m_flDurationMax = 0x1C4;
    public const nint m_nCP = 0x1C8;
    public const nint m_nCPField = 0x1CC;
    public const nint m_nChildGroupID = 0x1D0;
    public const nint m_bOnlyChildren = 0x1D4;
}

public static class C_OP_RopeSpringConstraint {
    public const nint m_flRestLength = 0x1C0;
    public const nint m_flMinDistance = 0x318;
    public const nint m_flMaxDistance = 0x470;
    public const nint m_flAdjustmentScale = 0x5C8;
    public const nint m_flInitialRestingLength = 0x5D0;
}

public static class C_OP_RotateVector {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecRotAxisMin = 0x1C4;
    public const nint m_vecRotAxisMax = 0x1D0;
    public const nint m_flRotRateMin = 0x1DC;
    public const nint m_flRotRateMax = 0x1E0;
    public const nint m_bNormalize = 0x1E4;
    public const nint m_flScale = 0x1E8;
}

public static class C_OP_RtEnvCull {
    public const nint m_vecTestDir = 0x1C0;
    public const nint m_vecTestNormal = 0x1CC;
    public const nint m_bCullOnMiss = 0x1D8;
    public const nint m_bStickInsteadOfCull = 0x1D9;
    public const nint m_RtEnvName = 0x1DA;
    public const nint m_nRTEnvCP = 0x25C;
    public const nint m_nComponent = 0x260;
}

public static class C_OP_SDFConstraint {
    public const nint m_flMinDist = 0x1C0;
    public const nint m_flMaxDist = 0x318;
    public const nint m_nMaxIterations = 0x470;
}

public static class C_OP_SDFForce {
    public const nint m_flForceScale = 0x1D0;
}

public static class C_OP_SDFLighting {
    public const nint m_vLightingDir = 0x1C0;
    public const nint m_vTint_0 = 0x1CC;
    public const nint m_vTint_1 = 0x1D8;
}

public static class C_OP_SelectivelyEnableChildren {
    public const nint m_nChildGroupID = 0x1D0;
    public const nint m_nFirstChild = 0x328;
    public const nint m_nNumChildrenToEnable = 0x480;
    public const nint m_bPlayEndcapOnStop = 0x5D8;
    public const nint m_bDestroyImmediately = 0x5D9;
}

public static class C_OP_SequenceFromModel {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
    public const nint m_nFieldOutputAnim = 0x1C8;
    public const nint m_flInputMin = 0x1CC;
    public const nint m_flInputMax = 0x1D0;
    public const nint m_flOutputMin = 0x1D4;
    public const nint m_flOutputMax = 0x1D8;
    public const nint m_nSetMethod = 0x1DC;
}

public static class C_OP_SetAttributeToScalarExpression {
    public const nint m_nExpression = 0x1C0;
    public const nint m_flInput1 = 0x1C8;
    public const nint m_flInput2 = 0x320;
    public const nint m_nOutputField = 0x478;
    public const nint m_nSetMethod = 0x47C;
}

public static class C_OP_SetCPOrientationToDirection {
    public const nint m_nInputControlPoint = 0x1C0;
    public const nint m_nOutputControlPoint = 0x1C4;
}

public static class C_OP_SetCPOrientationToGroundNormal {
    public const nint m_flInterpRate = 0x1C0;
    public const nint m_flMaxTraceLength = 0x1C4;
    public const nint m_flTolerance = 0x1C8;
    public const nint m_flTraceOffset = 0x1CC;
    public const nint m_CollisionGroupName = 0x1D0;
    public const nint m_nTraceSet = 0x250;
    public const nint m_nInputCP = 0x254;
    public const nint m_nOutputCP = 0x258;
    public const nint m_bIncludeWater = 0x268;
}

public static class C_OP_SetCPOrientationToPointAtCP {
    public const nint m_nInputCP = 0x1D0;
    public const nint m_nOutputCP = 0x1D4;
    public const nint m_flInterpolation = 0x1D8;
    public const nint m_b2DOrientation = 0x330;
    public const nint m_bAvoidSingularity = 0x331;
    public const nint m_bPointAway = 0x332;
}

public static class C_OP_SetCPtoVector {
    public const nint m_nCPInput = 0x1C0;
    public const nint m_nFieldOutput = 0x1C4;
}

public static class C_OP_SetChildControlPoints {
    public const nint m_nChildGroupID = 0x1C0;
    public const nint m_nFirstControlPoint = 0x1C4;
    public const nint m_nNumControlPoints = 0x1C8;
    public const nint m_nFirstSourcePoint = 0x1D0;
    public const nint m_bReverse = 0x328;
    public const nint m_bSetOrientation = 0x329;
}

public static class C_OP_SetControlPointFieldFromVectorExpression {
    public const nint m_nExpression = 0x1D0;
    public const nint m_vecInput1 = 0x1D8;
    public const nint m_vecInput2 = 0x830;
    public const nint m_flOutputRemap = 0xE88;
    public const nint m_nOutputCP = 0xFE0;
    public const nint m_nOutVectorField = 0xFE4;
}

public static class C_OP_SetControlPointFieldToScalarExpression {
    public const nint m_nExpression = 0x1D0;
    public const nint m_flInput1 = 0x1D8;
    public const nint m_flInput2 = 0x330;
    public const nint m_flOutputRemap = 0x488;
    public const nint m_nOutputCP = 0x5E0;
    public const nint m_nOutVectorField = 0x5E4;
}

public static class C_OP_SetControlPointFieldToWater {
    public const nint m_nSourceCP = 0x1D0;
    public const nint m_nDestCP = 0x1D4;
    public const nint m_nCPField = 0x1D8;
}

public static class C_OP_SetControlPointFromObjectScale {
    public const nint m_nCPInput = 0x1D0;
    public const nint m_nCPOutput = 0x1D4;
}

public static class C_OP_SetControlPointOrientation {
    public const nint m_bUseWorldLocation = 0x1D0;
    public const nint m_bRandomize = 0x1D2;
    public const nint m_bSetOnce = 0x1D3;
    public const nint m_nCP = 0x1D4;
    public const nint m_nHeadLocation = 0x1D8;
    public const nint m_vecRotation = 0x1DC;
    public const nint m_vecRotationB = 0x1E8;
    public const nint m_flInterpolation = 0x1F8;
}

public static class C_OP_SetControlPointOrientationToCPVelocity {
    public const nint m_nCPInput = 0x1D0;
    public const nint m_nCPOutput = 0x1D4;
}

public static class C_OP_SetControlPointPositionToRandomActiveCP {
    public const nint m_nCP1 = 0x1D0;
    public const nint m_nHeadLocationMin = 0x1D4;
    public const nint m_nHeadLocationMax = 0x1D8;
    public const nint m_flResetRate = 0x1E0;
}

public static class C_OP_SetControlPointPositionToTimeOfDayValue {
    public const nint m_nControlPointNumber = 0x1D0;
    public const nint m_pszTimeOfDayParameter = 0x1D4;
    public const nint m_vecDefaultValue = 0x254;
}

public static class C_OP_SetControlPointPositions {
    public const nint m_bUseWorldLocation = 0x1D0;
    public const nint m_bOrient = 0x1D1;
    public const nint m_bSetOnce = 0x1D2;
    public const nint m_nCP1 = 0x1D4;
    public const nint m_nCP2 = 0x1D8;
    public const nint m_nCP3 = 0x1DC;
    public const nint m_nCP4 = 0x1E0;
    public const nint m_vecCP1Pos = 0x1E4;
    public const nint m_vecCP2Pos = 0x1F0;
    public const nint m_vecCP3Pos = 0x1FC;
    public const nint m_vecCP4Pos = 0x208;
    public const nint m_nHeadLocation = 0x214;
}

public static class C_OP_SetControlPointRotation {
    public const nint m_vecRotAxis = 0x1D0;
    public const nint m_flRotRate = 0x828;
    public const nint m_nCP = 0x980;
    public const nint m_nLocalCP = 0x984;
}

public static class C_OP_SetControlPointToCPVelocity {
    public const nint m_nCPInput = 0x1D0;
    public const nint m_nCPOutputVel = 0x1D4;
    public const nint m_bNormalize = 0x1D8;
    public const nint m_nCPOutputMag = 0x1DC;
    public const nint m_nCPField = 0x1E0;
    public const nint m_vecComparisonVelocity = 0x1E8;
}

public static class C_OP_SetControlPointToCenter {
    public const nint m_nCP1 = 0x1D0;
    public const nint m_vecCP1Pos = 0x1D4;
    public const nint m_nSetParent = 0x1E0;
}

public static class C_OP_SetControlPointToHMD {
    public const nint m_nCP1 = 0x1D0;
    public const nint m_vecCP1Pos = 0x1D4;
    public const nint m_bOrientToHMD = 0x1E0;
}

public static class C_OP_SetControlPointToHand {
    public const nint m_nCP1 = 0x1D0;
    public const nint m_nHand = 0x1D4;
    public const nint m_vecCP1Pos = 0x1D8;
    public const nint m_bOrientToHand = 0x1E4;
}

public static class C_OP_SetControlPointToImpactPoint {
    public const nint m_nCPOut = 0x1D0;
    public const nint m_nCPIn = 0x1D4;
    public const nint m_flUpdateRate = 0x1D8;
    public const nint m_flTraceLength = 0x1E0;
    public const nint m_flStartOffset = 0x338;
    public const nint m_flOffset = 0x33C;
    public const nint m_vecTraceDir = 0x340;
    public const nint m_CollisionGroupName = 0x34C;
    public const nint m_nTraceSet = 0x3CC;
    public const nint m_bSetToEndpoint = 0x3D0;
    public const nint m_bTraceToClosestSurface = 0x3D1;
    public const nint m_bIncludeWater = 0x3D2;
}

public static class C_OP_SetControlPointToPlayer {
    public const nint m_nCP1 = 0x1D0;
    public const nint m_vecCP1Pos = 0x1D4;
    public const nint m_bOrientToEyes = 0x1E0;
}

public static class C_OP_SetControlPointToVectorExpression {
    public const nint m_nExpression = 0x1D0;
    public const nint m_nOutputCP = 0x1D4;
    public const nint m_vInput1 = 0x1D8;
    public const nint m_vInput2 = 0x830;
    public const nint m_bNormalizedOutput = 0xE88;
}

public static class C_OP_SetControlPointToWaterSurface {
    public const nint m_nSourceCP = 0x1D0;
    public const nint m_nDestCP = 0x1D4;
    public const nint m_nFlowCP = 0x1D8;
    public const nint m_nActiveCP = 0x1DC;
    public const nint m_nActiveCPField = 0x1E0;
    public const nint m_flRetestRate = 0x1E8;
    public const nint m_bAdaptiveThreshold = 0x340;
}

public static class C_OP_SetControlPointsToModelParticles {
    public const nint m_HitboxSetName = 0x1C0;
    public const nint m_AttachmentName = 0x240;
    public const nint m_nFirstControlPoint = 0x2C0;
    public const nint m_nNumControlPoints = 0x2C4;
    public const nint m_nFirstSourcePoint = 0x2C8;
    public const nint m_bSkin = 0x2CC;
    public const nint m_bAttachment = 0x2CD;
}

public static class C_OP_SetControlPointsToParticle {
    public const nint m_nChildGroupID = 0x1C0;
    public const nint m_nFirstControlPoint = 0x1C4;
    public const nint m_nNumControlPoints = 0x1C8;
    public const nint m_nFirstSourcePoint = 0x1CC;
    public const nint m_bSetOrientation = 0x1D0;
    public const nint m_nOrientationMode = 0x1D4;
    public const nint m_nSetParent = 0x1D8;
}

public static class C_OP_SetFloat {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x318;
    public const nint m_nSetMethod = 0x31C;
    public const nint m_Lerp = 0x320;
    public const nint m_bUseNewCode = 0x478;
}

public static class C_OP_SetFloatAttributeToVectorExpression {
    public const nint m_nExpression = 0x1C0;
    public const nint m_vInput1 = 0x1C8;
    public const nint m_vInput2 = 0x820;
    public const nint m_flOutputRemap = 0xE78;
    public const nint m_nOutputField = 0xFD0;
    public const nint m_nSetMethod = 0xFD4;
}

public static class C_OP_SetFloatCollection {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x318;
    public const nint m_nSetMethod = 0x31C;
    public const nint m_Lerp = 0x320;
}

public static class C_OP_SetFromCPSnapshot {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nAttributeToRead = 0x1C4;
    public const nint m_nAttributeToWrite = 0x1C8;
    public const nint m_nLocalSpaceCP = 0x1CC;
    public const nint m_bRandom = 0x1D0;
    public const nint m_bReverse = 0x1D1;
    public const nint m_nRandomSeed = 0x1D4;
    public const nint m_nSnapShotStartPoint = 0x1D8;
    public const nint m_nSnapShotIncrement = 0x330;
    public const nint m_flInterpolation = 0x488;
    public const nint m_bSubSample = 0x5E0;
}

public static class C_OP_SetGravityToCP {
    public const nint m_nCPInput = 0x1D0;
    public const nint m_nCPOutput = 0x1D4;
    public const nint m_flScale = 0x1D8;
    public const nint m_bSetOrientation = 0x330;
    public const nint m_bSetZDown = 0x331;
}

public static class C_OP_SetParentControlPointsToChildCP {
    public const nint m_nChildGroupID = 0x1D0;
    public const nint m_nChildControlPoint = 0x1D4;
    public const nint m_nNumControlPoints = 0x1D8;
    public const nint m_nFirstSourcePoint = 0x1DC;
    public const nint m_bSetOrientation = 0x1E0;
}

public static class C_OP_SetPerChildControlPoint {
    public const nint m_nChildGroupID = 0x1C0;
    public const nint m_nFirstControlPoint = 0x1C4;
    public const nint m_nNumControlPoints = 0x1C8;
    public const nint m_nParticleIncrement = 0x1D0;
    public const nint m_nFirstSourcePoint = 0x328;
    public const nint m_bSetOrientation = 0x480;
    public const nint m_nOrientationField = 0x484;
    public const nint m_bNumBasedOnParticleCount = 0x488;
}

public static class C_OP_SetPerChildControlPointFromAttribute {
    public const nint m_nChildGroupID = 0x1C0;
    public const nint m_nFirstControlPoint = 0x1C4;
    public const nint m_nNumControlPoints = 0x1C8;
    public const nint m_nParticleIncrement = 0x1CC;
    public const nint m_nFirstSourcePoint = 0x1D0;
    public const nint m_bNumBasedOnParticleCount = 0x1D4;
    public const nint m_nAttributeToRead = 0x1D8;
    public const nint m_nCPField = 0x1DC;
}

public static class C_OP_SetRandomControlPointPosition {
    public const nint m_bUseWorldLocation = 0x1D0;
    public const nint m_bOrient = 0x1D1;
    public const nint m_nCP1 = 0x1D4;
    public const nint m_nHeadLocation = 0x1D8;
    public const nint m_flReRandomRate = 0x1E0;
    public const nint m_vecCPMinPos = 0x338;
    public const nint m_vecCPMaxPos = 0x344;
    public const nint m_flInterpolation = 0x350;
}

public static class C_OP_SetSimulationRate {
    public const nint m_flSimulationScale = 0x1D0;
}

public static class C_OP_SetSingleControlPointPosition {
    public const nint m_bSetOnce = 0x1D0;
    public const nint m_nCP1 = 0x1D4;
    public const nint m_vecCP1Pos = 0x1D8;
    public const nint m_transformInput = 0x830;
}

public static class C_OP_SetToCP {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_vecOffset = 0x1C4;
    public const nint m_bOffsetLocal = 0x1D0;
}

public static class C_OP_SetVariable {
    public const nint m_variableReference = 0x1D0;
    public const nint m_transformInput = 0x210;
    public const nint m_positionOffset = 0x278;
    public const nint m_rotationOffset = 0x284;
    public const nint m_vecInput = 0x290;
    public const nint m_floatInput = 0x8E8;
}

public static class C_OP_SetVec {
    public const nint m_InputValue = 0x1C0;
    public const nint m_nOutputField = 0x818;
    public const nint m_nSetMethod = 0x81C;
    public const nint m_Lerp = 0x820;
    public const nint m_bNormalizedOutput = 0x978;
}

public static class C_OP_SetVectorAttributeToVectorExpression {
    public const nint m_nExpression = 0x1C0;
    public const nint m_vInput1 = 0x1C8;
    public const nint m_vInput2 = 0x820;
    public const nint m_nOutputField = 0xE78;
    public const nint m_nSetMethod = 0xE7C;
    public const nint m_bNormalizedOutput = 0xE80;
}

public static class C_OP_SnapshotRigidSkinToBones {
    public const nint m_bTransformNormals = 0x1C0;
    public const nint m_bTransformRadii = 0x1C1;
    public const nint m_nControlPointNumber = 0x1C4;
}

public static class C_OP_SnapshotSkinToBones {
    public const nint m_bTransformNormals = 0x1C0;
    public const nint m_bTransformRadii = 0x1C1;
    public const nint m_nControlPointNumber = 0x1C4;
    public const nint m_flLifeTimeFadeStart = 0x1C8;
    public const nint m_flLifeTimeFadeEnd = 0x1CC;
    public const nint m_flJumpThreshold = 0x1D0;
    public const nint m_flPrevPosScale = 0x1D4;
}

public static class C_OP_SpringToVectorConstraint {
    public const nint m_flRestLength = 0x1C0;
    public const nint m_flMinDistance = 0x318;
    public const nint m_flMaxDistance = 0x470;
    public const nint m_flRestingLength = 0x5C8;
    public const nint m_vecAnchorVector = 0x720;
}

public static class C_OP_StopAfterCPDuration {
    public const nint m_flDuration = 0x1D0;
    public const nint m_bDestroyImmediately = 0x328;
    public const nint m_bPlayEndCap = 0x329;
}

public static class C_OP_TeleportBeam {
    public const nint m_nCPPosition = 0x1C0;
    public const nint m_nCPVelocity = 0x1C4;
    public const nint m_nCPMisc = 0x1C8;
    public const nint m_nCPColor = 0x1CC;
    public const nint m_nCPInvalidColor = 0x1D0;
    public const nint m_nCPExtraArcData = 0x1D4;
    public const nint m_vGravity = 0x1D8;
    public const nint m_flArcMaxDuration = 0x1E4;
    public const nint m_flSegmentBreak = 0x1E8;
    public const nint m_flArcSpeed = 0x1EC;
    public const nint m_flAlpha = 0x1F0;
}

public static class C_OP_TimeVaryingForce {
    public const nint m_flStartLerpTime = 0x1D0;
    public const nint m_StartingForce = 0x1D4;
    public const nint m_flEndLerpTime = 0x1E0;
    public const nint m_EndingForce = 0x1E4;
}

public static class C_OP_TurbulenceForce {
    public const nint m_flNoiseCoordScale0 = 0x1D0;
    public const nint m_flNoiseCoordScale1 = 0x1D4;
    public const nint m_flNoiseCoordScale2 = 0x1D8;
    public const nint m_flNoiseCoordScale3 = 0x1DC;
    public const nint m_vecNoiseAmount0 = 0x1E0;
    public const nint m_vecNoiseAmount1 = 0x1EC;
    public const nint m_vecNoiseAmount2 = 0x1F8;
    public const nint m_vecNoiseAmount3 = 0x204;
}

public static class C_OP_TwistAroundAxis {
    public const nint m_fForceAmount = 0x1D0;
    public const nint m_TwistAxis = 0x1D4;
    public const nint m_bLocalSpace = 0x1E0;
    public const nint m_nControlPointNumber = 0x1E4;
}

public static class C_OP_UpdateLightSource {
    public const nint m_vColorTint = 0x1C0;
    public const nint m_flBrightnessScale = 0x1C4;
    public const nint m_flRadiusScale = 0x1C8;
    public const nint m_flMinimumLightingRadius = 0x1CC;
    public const nint m_flMaximumLightingRadius = 0x1D0;
    public const nint m_flPositionDampingConstant = 0x1D4;
}

public static class C_OP_VectorFieldSnapshot {
    public const nint m_nControlPointNumber = 0x1C0;
    public const nint m_nAttributeToWrite = 0x1C4;
    public const nint m_nLocalSpaceCP = 0x1C8;
    public const nint m_flInterpolation = 0x1D0;
    public const nint m_vecScale = 0x328;
    public const nint m_flBoundaryDampening = 0x980;
    public const nint m_bSetVelocity = 0x984;
    public const nint m_bLockToSurface = 0x985;
    public const nint m_flGridSpacing = 0x988;
}

public static class C_OP_VectorNoise {
    public const nint m_nFieldOutput = 0x1C0;
    public const nint m_vecOutputMin = 0x1C4;
    public const nint m_vecOutputMax = 0x1D0;
    public const nint m_fl4NoiseScale = 0x1DC;
    public const nint m_bAdditive = 0x1E0;
    public const nint m_bOffset = 0x1E1;
    public const nint m_flNoiseAnimationTimeScale = 0x1E4;
}

public static class C_OP_VelocityDecay {
    public const nint m_flMinVelocity = 0x1C0;
}

public static class C_OP_VelocityMatchingForce {
    public const nint m_flDirScale = 0x1C0;
    public const nint m_flSpdScale = 0x1C4;
    public const nint m_nCPBroadcast = 0x1C8;
}

public static class C_OP_WindForce {
    public const nint m_vForce = 0x1D0;
}

public static class C_OP_WorldTraceConstraint {
    public const nint m_nCP = 0x1C0;
    public const nint m_vecCpOffset = 0x1C4;
    public const nint m_nCollisionMode = 0x1D0;
    public const nint m_nCollisionModeMin = 0x1D4;
    public const nint m_nTraceSet = 0x1D8;
    public const nint m_CollisionGroupName = 0x1DC;
    public const nint m_bWorldOnly = 0x25C;
    public const nint m_bBrushOnly = 0x25D;
    public const nint m_bIncludeWater = 0x25E;
    public const nint m_nIgnoreCP = 0x260;
    public const nint m_flCpMovementTolerance = 0x264;
    public const nint m_flRetestRate = 0x268;
    public const nint m_flTraceTolerance = 0x26C;
    public const nint m_flCollisionConfirmationSpeed = 0x270;
    public const nint m_nMaxTracesPerFrame = 0x274;
    public const nint m_flRadiusScale = 0x278;
    public const nint m_flBounceAmount = 0x3D0;
    public const nint m_flSlideAmount = 0x528;
    public const nint m_flRandomDirScale = 0x680;
    public const nint m_bDecayBounce = 0x7D8;
    public const nint m_bKillonContact = 0x7D9;
    public const nint m_flMinSpeed = 0x7DC;
    public const nint m_bSetNormal = 0x7E0;
    public const nint m_nStickOnCollisionField = 0x7E4;
    public const nint m_flStopSpeed = 0x7E8;
    public const nint m_nEntityStickDataField = 0x940;
    public const nint m_nEntityStickNormalField = 0x944;
}

public static class CollisionGroupContext_t {
    public const nint m_nCollisionGroupNumber = 0x0;
}

public static class ControlPointReference_t {
    public const nint m_controlPointNameString = 0x0;
    public const nint m_vOffsetFromControlPoint = 0x4;
    public const nint m_bOffsetInLocalSpace = 0x10;
}

public static class FloatInputMaterialVariable_t {
    public const nint m_strVariable = 0x0;
    public const nint m_flInput = 0x8;
}

public static class MaterialVariable_t {
    public const nint m_strVariable = 0x0;
    public const nint m_nVariableField = 0x8;
    public const nint m_flScale = 0xC;
}

public static class ModelReference_t {
    public const nint m_model = 0x0;
    public const nint m_flRelativeProbabilityOfSpawn = 0x8;
}

public static class PARTICLE_EHANDLE__ {
    public const nint unused = 0x0;
}

public static class PARTICLE_WORLD_HANDLE__ {
    public const nint unused = 0x0;
}

public static class ParticleAttributeIndex_t {
    public const nint m_Value = 0x0;
}

public static class ParticleChildrenInfo_t {
    public const nint m_ChildRef = 0x0;
    public const nint m_flDelay = 0x8;
    public const nint m_bEndCap = 0xC;
    public const nint m_bDisableChild = 0xD;
    public const nint m_nDetailLevel = 0x10;
}

public static class ParticleControlPointConfiguration_t {
    public const nint m_name = 0x0;
    public const nint m_drivers = 0x8;
    public const nint m_previewState = 0x20;
}

public static class ParticleControlPointDriver_t {
    public const nint m_iControlPoint = 0x0;
    public const nint m_iAttachType = 0x4;
    public const nint m_attachmentName = 0x8;
    public const nint m_vecOffset = 0x10;
    public const nint m_angOffset = 0x1C;
    public const nint m_entityName = 0x28;
}

public static class ParticleNamedValueConfiguration_t {
    public const nint m_ConfigName = 0x0;
    public const nint m_ConfigValue = 0x8;
    public const nint m_iAttachType = 0x18;
    public const nint m_BoundEntityPath = 0x20;
    public const nint m_strEntityScope = 0x28;
    public const nint m_strAttachmentName = 0x30;
}

public static class ParticleNamedValueSource_t {
    public const nint m_Name = 0x0;
    public const nint m_IsPublic = 0x8;
    public const nint m_ValueType = 0xC;
    public const nint m_DefaultConfig = 0x10;
    public const nint m_NamedConfigs = 0x48;
}

public static class ParticlePreviewBodyGroup_t {
    public const nint m_bodyGroupName = 0x0;
    public const nint m_nValue = 0x8;
}

public static class ParticlePreviewState_t {
    public const nint m_previewModel = 0x0;
    public const nint m_nModSpecificData = 0x8;
    public const nint m_groundType = 0xC;
    public const nint m_sequenceName = 0x10;
    public const nint m_nFireParticleOnSequenceFrame = 0x18;
    public const nint m_hitboxSetName = 0x20;
    public const nint m_materialGroupName = 0x28;
    public const nint m_vecBodyGroups = 0x30;
    public const nint m_flPlaybackSpeed = 0x48;
    public const nint m_flParticleSimulationRate = 0x4C;
    public const nint m_bShouldDrawHitboxes = 0x50;
    public const nint m_bShouldDrawAttachments = 0x51;
    public const nint m_bShouldDrawAttachmentNames = 0x52;
    public const nint m_bShouldDrawControlPointAxes = 0x53;
    public const nint m_bAnimationNonLooping = 0x54;
    public const nint m_vecPreviewGravity = 0x58;
}

public static class PointDefinitionWithTimeValues_t {
    public const nint m_flTimeDuration = 0x14;
}

public static class PointDefinition_t {
    public const nint m_nControlPoint = 0x0;
    public const nint m_bLocalCoords = 0x4;
    public const nint m_vOffset = 0x8;
}

public static class SequenceWeightedList_t {
    public const nint m_nSequence = 0x0;
    public const nint m_flRelativeWeight = 0x4;
}

public static class TextureControls_t {
    public const nint m_flFinalTextureScaleU = 0x0;
    public const nint m_flFinalTextureScaleV = 0x158;
    public const nint m_flFinalTextureOffsetU = 0x2B0;
    public const nint m_flFinalTextureOffsetV = 0x408;
    public const nint m_flFinalTextureUVRotation = 0x560;
    public const nint m_flZoomScale = 0x6B8;
    public const nint m_flDistortion = 0x810;
    public const nint m_bRandomizeOffsets = 0x968;
    public const nint m_bClampUVs = 0x969;
    public const nint m_nPerParticleBlend = 0x96C;
    public const nint m_nPerParticleScale = 0x970;
    public const nint m_nPerParticleOffsetU = 0x974;
    public const nint m_nPerParticleOffsetV = 0x978;
    public const nint m_nPerParticleRotation = 0x97C;
    public const nint m_nPerParticleZoom = 0x980;
    public const nint m_nPerParticleDistortion = 0x984;
}

public static class TextureGroup_t {
    public const nint m_bEnabled = 0x0;
    public const nint m_bReplaceTextureWithGradient = 0x1;
    public const nint m_hTexture = 0x8;
    public const nint m_Gradient = 0x10;
    public const nint m_nTextureType = 0x28;
    public const nint m_nTextureChannels = 0x2C;
    public const nint m_nTextureBlendMode = 0x30;
    public const nint m_flTextureBlend = 0x38;
    public const nint m_TextureControls = 0x190;
}

public static class VecInputMaterialVariable_t {
    public const nint m_strVariable = 0x0;
    public const nint m_vecInput = 0x8;
}