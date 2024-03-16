/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 16 Mar 2024 22:03:48 +0000
 */

public static class CBaseRendererSource2 { // CParticleFunctionRenderer
    public const nint m_flRadiusScale = 0x1F8; // CParticleCollectionRendererFloatInput
    public const nint m_flAlphaScale = 0x348; // CParticleCollectionRendererFloatInput
    public const nint m_flRollScale = 0x498; // CParticleCollectionRendererFloatInput
    public const nint m_nAlpha2Field = 0x5E8; // ParticleAttributeIndex_t
    public const nint m_vecColorScale = 0x5F0; // CParticleCollectionRendererVecInput
    public const nint m_nColorBlendType = 0xC20; // ParticleColorBlendType_t
    public const nint m_nShaderType = 0xC24; // SpriteCardShaderType_t
    public const nint m_strShaderOverride = 0xC28; // CUtlString
    public const nint m_flCenterXOffset = 0xC30; // CParticleCollectionRendererFloatInput
    public const nint m_flCenterYOffset = 0xD80; // CParticleCollectionRendererFloatInput
    public const nint m_flBumpStrength = 0xED0; // float
    public const nint m_nCropTextureOverride = 0xED4; // ParticleSequenceCropOverride_t
    public const nint m_vecTexturesInput = 0xED8; // CUtlVector<TextureGroup_t>
    public const nint m_flAnimationRate = 0xEF0; // float
    public const nint m_nAnimationType = 0xEF4; // AnimationType_t
    public const nint m_bAnimateInFPS = 0xEF8; // bool
    public const nint m_flSelfIllumAmount = 0xF00; // CParticleCollectionRendererFloatInput
    public const nint m_flDiffuseAmount = 0x1050; // CParticleCollectionRendererFloatInput
    public const nint m_flDiffuseClamp = 0x11A0; // CParticleCollectionRendererFloatInput
    public const nint m_nLightingControlPoint = 0x12F0; // int32_t
    public const nint m_nSelfIllumPerParticle = 0x12F4; // ParticleAttributeIndex_t
    public const nint m_nOutputBlendMode = 0x12F8; // ParticleOutputBlendMode_t
    public const nint m_bGammaCorrectVertexColors = 0x12FC; // bool
    public const nint m_bSaturateColorPreAlphaBlend = 0x12FD; // bool
    public const nint m_flAddSelfAmount = 0x1300; // CParticleCollectionRendererFloatInput
    public const nint m_flDesaturation = 0x1450; // CParticleCollectionRendererFloatInput
    public const nint m_flOverbrightFactor = 0x15A0; // CParticleCollectionRendererFloatInput
    public const nint m_nHSVShiftControlPoint = 0x16F0; // int32_t
    public const nint m_nFogType = 0x16F4; // ParticleFogType_t
    public const nint m_flFogAmount = 0x16F8; // CParticleCollectionRendererFloatInput
    public const nint m_bTintByFOW = 0x1848; // bool
    public const nint m_bTintByGlobalLight = 0x1849; // bool
    public const nint m_nPerParticleAlphaReference = 0x184C; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleAlphaRefWindow = 0x1850; // SpriteCardPerParticleScale_t
    public const nint m_nAlphaReferenceType = 0x1854; // ParticleAlphaReferenceType_t
    public const nint m_flAlphaReferenceSoftness = 0x1858; // CParticleCollectionRendererFloatInput
    public const nint m_flSourceAlphaValueToMapToZero = 0x19A8; // CParticleCollectionRendererFloatInput
    public const nint m_flSourceAlphaValueToMapToOne = 0x1AF8; // CParticleCollectionRendererFloatInput
    public const nint m_bRefract = 0x1C48; // bool
    public const nint m_bRefractSolid = 0x1C49; // bool
    public const nint m_flRefractAmount = 0x1C50; // CParticleCollectionRendererFloatInput
    public const nint m_nRefractBlurRadius = 0x1DA0; // int32_t
    public const nint m_nRefractBlurType = 0x1DA4; // BlurFilterType_t
    public const nint m_bOnlyRenderInEffectsBloomPass = 0x1DA8; // bool
    public const nint m_bOnlyRenderInEffectsWaterPass = 0x1DA9; // bool
    public const nint m_bUseMixedResolutionRendering = 0x1DAA; // bool
    public const nint m_bOnlyRenderInEffecsGameOverlay = 0x1DAB; // bool
    public const nint m_stencilTestID = 0x1DAC; // char[128]
    public const nint m_bStencilTestExclude = 0x1E2C; // bool
    public const nint m_stencilWriteID = 0x1E2D; // char[128]
    public const nint m_bWriteStencilOnDepthPass = 0x1EAD; // bool
    public const nint m_bWriteStencilOnDepthFail = 0x1EAE; // bool
    public const nint m_bReverseZBuffering = 0x1EAF; // bool
    public const nint m_bDisableZBuffering = 0x1EB0; // bool
    public const nint m_nFeatheringMode = 0x1EB4; // ParticleDepthFeatheringMode_t
    public const nint m_flFeatheringMinDist = 0x1EB8; // CParticleCollectionRendererFloatInput
    public const nint m_flFeatheringMaxDist = 0x2008; // CParticleCollectionRendererFloatInput
    public const nint m_flFeatheringFilter = 0x2158; // CParticleCollectionRendererFloatInput
    public const nint m_flDepthBias = 0x22A8; // CParticleCollectionRendererFloatInput
    public const nint m_nSortMethod = 0x23F8; // ParticleSortingChoiceList_t
    public const nint m_bBlendFramesSeq0 = 0x23FC; // bool
    public const nint m_bMaxLuminanceBlendingSequence0 = 0x23FD; // bool
}

public static class CBaseTrailRenderer { // CBaseRendererSource2
    public const nint m_nOrientationType = 0x2638; // ParticleOrientationChoiceList_t
    public const nint m_nOrientationControlPoint = 0x263C; // int32_t
    public const nint m_flMinSize = 0x2640; // float
    public const nint m_flMaxSize = 0x2644; // float
    public const nint m_flStartFadeSize = 0x2648; // CParticleCollectionRendererFloatInput
    public const nint m_flEndFadeSize = 0x2798; // CParticleCollectionRendererFloatInput
    public const nint m_bClampV = 0x28E8; // bool
}

public static class CGeneralRandomRotation { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flDegrees = 0x1B8; // float
    public const nint m_flDegreesMin = 0x1BC; // float
    public const nint m_flDegreesMax = 0x1C0; // float
    public const nint m_flRotationRandExponent = 0x1C4; // float
    public const nint m_bRandomlyFlipDirection = 0x1C8; // bool
}

public static class CGeneralSpin { // CParticleFunctionOperator
    public const nint m_nSpinRateDegrees = 0x1B0; // int32_t
    public const nint m_nSpinRateMinDegrees = 0x1B4; // int32_t
    public const nint m_fSpinRateStopTime = 0x1BC; // float
}

public static class CNewParticleEffect { // IParticleEffect
    public const nint m_pNext = 0x10; // CNewParticleEffect*
    public const nint m_pPrev = 0x18; // CNewParticleEffect*
    public const nint m_pParticles = 0x20; // IParticleCollection*
    public const nint m_pDebugName = 0x28; // char*
    public const nint m_bDontRemove = 0x0; // bitfield:1
    public const nint m_bRemove = 0x0; // bitfield:1
    public const nint m_bNeedsBBoxUpdate = 0x0; // bitfield:1
    public const nint m_bIsFirstFrame = 0x0; // bitfield:1
    public const nint m_bAutoUpdateBBox = 0x0; // bitfield:1
    public const nint m_bAllocated = 0x0; // bitfield:1
    public const nint m_bSimulate = 0x0; // bitfield:1
    public const nint m_bShouldPerformCullCheck = 0x0; // bitfield:1
    public const nint m_bForceNoDraw = 0x0; // bitfield:1
    public const nint m_bShouldSave = 0x0; // bitfield:1
    public const nint m_bDisableAggregation = 0x0; // bitfield:1
    public const nint m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
    public const nint m_bShouldCheckFoW = 0x0; // bitfield:1
    public const nint m_vSortOrigin = 0x40; // Vector
    public const nint m_flScale = 0x4C; // float
    public const nint m_hOwner = 0x50; // PARTICLE_EHANDLE__*
    public const nint m_pOwningParticleProperty = 0x58; // CParticleProperty*
    public const nint m_flFreezeTransitionStart = 0x70; // float
    public const nint m_flFreezeTransitionDuration = 0x74; // float
    public const nint m_flFreezeTransitionOverride = 0x78; // float
    public const nint m_bFreezeTransitionActive = 0x7C; // bool
    public const nint m_bFreezeTargetState = 0x7D; // bool
    public const nint m_bCanFreeze = 0x7E; // bool
    public const nint m_LastMin = 0x80; // Vector
    public const nint m_LastMax = 0x8C; // Vector
    public const nint m_nSplitScreenUser = 0x98; // CSplitScreenSlot
    public const nint m_vecAggregationCenter = 0x9C; // Vector
    public const nint m_RefCount = 0xC0; // int32_t
}

public static class CParticleCollectionBindingInstance { // CBasePulseGraphInstance
}

public static class CParticleCollectionFloatInput { // CParticleFloatInput
}

public static class CParticleCollectionRendererFloatInput { // CParticleCollectionFloatInput
}

public static class CParticleCollectionRendererVecInput { // CParticleCollectionVecInput
}

public static class CParticleCollectionVecInput { // CParticleVecInput
}

public static class CParticleFloatInput { // CParticleInput
    public const nint m_nType = 0xC; // ParticleFloatType_t
    public const nint m_nMapType = 0x10; // ParticleFloatMapType_t
    public const nint m_flLiteralValue = 0x14; // float
    public const nint m_NamedValue = 0x18; // CParticleNamedValueRef
    public const nint m_nControlPoint = 0x58; // int32_t
    public const nint m_nScalarAttribute = 0x5C; // ParticleAttributeIndex_t
    public const nint m_nVectorAttribute = 0x60; // ParticleAttributeIndex_t
    public const nint m_nVectorComponent = 0x64; // int32_t
    public const nint m_flRandomMin = 0x68; // float
    public const nint m_flRandomMax = 0x6C; // float
    public const nint m_bHasRandomSignFlip = 0x70; // bool
    public const nint m_nRandomSeed = 0x74; // int32_t
    public const nint m_nRandomMode = 0x78; // ParticleFloatRandomMode_t
    public const nint m_flLOD0 = 0x80; // float
    public const nint m_flLOD1 = 0x84; // float
    public const nint m_flLOD2 = 0x88; // float
    public const nint m_flLOD3 = 0x8C; // float
    public const nint m_nNoiseInputVectorAttribute = 0x90; // ParticleAttributeIndex_t
    public const nint m_flNoiseOutputMin = 0x94; // float
    public const nint m_flNoiseOutputMax = 0x98; // float
    public const nint m_flNoiseScale = 0x9C; // float
    public const nint m_vecNoiseOffsetRate = 0xA0; // Vector
    public const nint m_flNoiseOffset = 0xAC; // float
    public const nint m_nNoiseOctaves = 0xB0; // int32_t
    public const nint m_nNoiseTurbulence = 0xB4; // PFNoiseTurbulence_t
    public const nint m_nNoiseType = 0xB8; // PFNoiseType_t
    public const nint m_nNoiseModifier = 0xBC; // PFNoiseModifier_t
    public const nint m_flNoiseTurbulenceScale = 0xC0; // float
    public const nint m_flNoiseTurbulenceMix = 0xC4; // float
    public const nint m_flNoiseImgPreviewScale = 0xC8; // float
    public const nint m_bNoiseImgPreviewLive = 0xCC; // bool
    public const nint m_flNoCameraFallback = 0xD8; // float
    public const nint m_bUseBoundsCenter = 0xDC; // bool
    public const nint m_nInputMode = 0xE0; // ParticleFloatInputMode_t
    public const nint m_flMultFactor = 0xE4; // float
    public const nint m_flInput0 = 0xE8; // float
    public const nint m_flInput1 = 0xEC; // float
    public const nint m_flOutput0 = 0xF0; // float
    public const nint m_flOutput1 = 0xF4; // float
    public const nint m_flNotchedRangeMin = 0xF8; // float
    public const nint m_flNotchedRangeMax = 0xFC; // float
    public const nint m_flNotchedOutputOutside = 0x100; // float
    public const nint m_flNotchedOutputInside = 0x104; // float
    public const nint m_nBiasType = 0x108; // ParticleFloatBiasType_t
    public const nint m_flBiasParameter = 0x10C; // float
    public const nint m_Curve = 0x110; // CPiecewiseCurve
}

public static class CParticleFunction {
    public const nint m_flOpStrength = 0x8; // CParticleCollectionFloatInput
    public const nint m_nOpEndCapState = 0x158; // ParticleEndcapMode_t
    public const nint m_flOpStartFadeInTime = 0x15C; // float
    public const nint m_flOpEndFadeInTime = 0x160; // float
    public const nint m_flOpStartFadeOutTime = 0x164; // float
    public const nint m_flOpEndFadeOutTime = 0x168; // float
    public const nint m_flOpFadeOscillatePeriod = 0x16C; // float
    public const nint m_bNormalizeToStopTime = 0x170; // bool
    public const nint m_flOpTimeOffsetMin = 0x174; // float
    public const nint m_flOpTimeOffsetMax = 0x178; // float
    public const nint m_nOpTimeOffsetSeed = 0x17C; // int32_t
    public const nint m_nOpTimeScaleSeed = 0x180; // int32_t
    public const nint m_flOpTimeScaleMin = 0x184; // float
    public const nint m_flOpTimeScaleMax = 0x188; // float
    public const nint m_bDisableOperator = 0x18E; // bool
    public const nint m_Notes = 0x190; // CUtlString
}

public static class CParticleFunctionConstraint { // CParticleFunction
}

public static class CParticleFunctionEmitter { // CParticleFunction
    public const nint m_nEmitterIndex = 0x1B0; // int32_t
}

public static class CParticleFunctionForce { // CParticleFunction
}

public static class CParticleFunctionInitializer { // CParticleFunction
    public const nint m_nAssociatedEmitterIndex = 0x1B0; // int32_t
}

public static class CParticleFunctionOperator { // CParticleFunction
}

public static class CParticleFunctionPreEmission { // CParticleFunctionOperator
    public const nint m_bRunOnce = 0x1B0; // bool
}

public static class CParticleFunctionRenderer { // CParticleFunction
    public const nint VisibilityInputs = 0x1B0; // CParticleVisibilityInputs
    public const nint m_bCannotBeRefracted = 0x1F4; // bool
    public const nint m_bSkipRenderingOnMobile = 0x1F5; // bool
}

public static class CParticleInput {
}

public static class CParticleModelInput { // CParticleInput
    public const nint m_nType = 0xC; // ParticleModelType_t
    public const nint m_NamedValue = 0x10; // CParticleNamedValueRef
    public const nint m_nControlPoint = 0x50; // int32_t
}

public static class CParticleProperty {
}

public static class CParticleRemapFloatInput { // CParticleFloatInput
}

public static class CParticleSystemDefinition { // IParticleSystemDefinition
    public const nint m_nBehaviorVersion = 0x8; // int32_t
    public const nint m_PreEmissionOperators = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
    public const nint m_Emitters = 0x28; // CUtlVector<CParticleFunctionEmitter*>
    public const nint m_Initializers = 0x40; // CUtlVector<CParticleFunctionInitializer*>
    public const nint m_Operators = 0x58; // CUtlVector<CParticleFunctionOperator*>
    public const nint m_ForceGenerators = 0x70; // CUtlVector<CParticleFunctionForce*>
    public const nint m_Constraints = 0x88; // CUtlVector<CParticleFunctionConstraint*>
    public const nint m_Renderers = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
    public const nint m_Children = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
    public const nint m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32_t
    public const nint m_nInitialParticles = 0x210; // int32_t
    public const nint m_nMaxParticles = 0x214; // int32_t
    public const nint m_nGroupID = 0x218; // int32_t
    public const nint m_BoundingBoxMin = 0x21C; // Vector
    public const nint m_BoundingBoxMax = 0x228; // Vector
    public const nint m_flDepthSortBias = 0x234; // float
    public const nint m_nSortOverridePositionCP = 0x238; // int32_t
    public const nint m_bInfiniteBounds = 0x23C; // bool
    public const nint m_bEnableNamedValues = 0x23D; // bool
    public const nint m_NamedValueDomain = 0x240; // CUtlString
    public const nint m_NamedValueLocals = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
    public const nint m_ConstantColor = 0x260; // Color
    public const nint m_ConstantNormal = 0x264; // Vector
    public const nint m_flConstantRadius = 0x270; // float
    public const nint m_flConstantRotation = 0x274; // float
    public const nint m_flConstantRotationSpeed = 0x278; // float
    public const nint m_flConstantLifespan = 0x27C; // float
    public const nint m_nConstantSequenceNumber = 0x280; // int32_t
    public const nint m_nConstantSequenceNumber1 = 0x284; // int32_t
    public const nint m_nSnapshotControlPoint = 0x288; // int32_t
    public const nint m_hSnapshot = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    public const nint m_pszCullReplacementName = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_flCullRadius = 0x2A0; // float
    public const nint m_flCullFillCost = 0x2A4; // float
    public const nint m_nCullControlPoint = 0x2A8; // int32_t
    public const nint m_hFallback = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_nFallbackMaxCount = 0x2B8; // int32_t
    public const nint m_hLowViolenceDef = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_hReferenceReplacement = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_flPreSimulationTime = 0x2D0; // float
    public const nint m_flStopSimulationAfterTime = 0x2D4; // float
    public const nint m_flMaximumTimeStep = 0x2D8; // float
    public const nint m_flMaximumSimTime = 0x2DC; // float
    public const nint m_flMinimumSimTime = 0x2E0; // float
    public const nint m_flMinimumTimeStep = 0x2E4; // float
    public const nint m_nMinimumFrames = 0x2E8; // int32_t
    public const nint m_nMinCPULevel = 0x2EC; // int32_t
    public const nint m_nMinGPULevel = 0x2F0; // int32_t
    public const nint m_flNoDrawTimeToGoToSleep = 0x2F4; // float
    public const nint m_flMaxDrawDistance = 0x2F8; // float
    public const nint m_flStartFadeDistance = 0x2FC; // float
    public const nint m_flMaxCreationDistance = 0x300; // float
    public const nint m_nAggregationMinAvailableParticles = 0x304; // int32_t
    public const nint m_flAggregateRadius = 0x308; // float
    public const nint m_bShouldBatch = 0x30C; // bool
    public const nint m_bShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
    public const nint m_bShouldHitboxesFallbackToSnapshot = 0x30E; // bool
    public const nint m_nViewModelEffect = 0x310; // InheritableBoolType_t
    public const nint m_bScreenSpaceEffect = 0x314; // bool
    public const nint m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
    public const nint m_nSkipRenderControlPoint = 0x320; // int32_t
    public const nint m_nAllowRenderControlPoint = 0x324; // int32_t
    public const nint m_bShouldSort = 0x328; // bool
    public const nint m_controlPointConfigurations = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
}

public static class CParticleTransformInput { // CParticleInput
    public const nint m_nType = 0xC; // ParticleTransformType_t
    public const nint m_NamedValue = 0x10; // CParticleNamedValueRef
    public const nint m_bFollowNamedValue = 0x50; // bool
    public const nint m_bSupportsDisabled = 0x51; // bool
    public const nint m_bUseOrientation = 0x52; // bool
    public const nint m_nControlPoint = 0x54; // int32_t
    public const nint m_nControlPointRangeMax = 0x58; // int32_t
    public const nint m_flEndCPGrowthTime = 0x5C; // float
}

public static class CParticleVariableRef {
    public const nint m_variableName = 0x0; // CKV3MemberNameWithStorage
    public const nint m_variableType = 0x38; // PulseValueType_t
}

public static class CParticleVecInput { // CParticleInput
    public const nint m_nType = 0xC; // ParticleVecType_t
    public const nint m_vLiteralValue = 0x10; // Vector
    public const nint m_LiteralColor = 0x1C; // Color
    public const nint m_NamedValue = 0x20; // CParticleNamedValueRef
    public const nint m_bFollowNamedValue = 0x60; // bool
    public const nint m_nVectorAttribute = 0x64; // ParticleAttributeIndex_t
    public const nint m_vVectorAttributeScale = 0x68; // Vector
    public const nint m_nControlPoint = 0x74; // int32_t
    public const nint m_nDeltaControlPoint = 0x78; // int32_t
    public const nint m_vCPValueScale = 0x7C; // Vector
    public const nint m_vCPRelativePosition = 0x88; // Vector
    public const nint m_vCPRelativeDir = 0x94; // Vector
    public const nint m_FloatComponentX = 0xA0; // CParticleFloatInput
    public const nint m_FloatComponentY = 0x1F0; // CParticleFloatInput
    public const nint m_FloatComponentZ = 0x340; // CParticleFloatInput
    public const nint m_FloatInterp = 0x490; // CParticleFloatInput
    public const nint m_flInterpInput0 = 0x5E0; // float
    public const nint m_flInterpInput1 = 0x5E4; // float
    public const nint m_vInterpOutput0 = 0x5E8; // Vector
    public const nint m_vInterpOutput1 = 0x5F4; // Vector
    public const nint m_Gradient = 0x600; // CColorGradient
    public const nint m_vRandomMin = 0x618; // Vector
    public const nint m_vRandomMax = 0x624; // Vector
}

public static class CParticleVisibilityInputs {
    public const nint m_flCameraBias = 0x0; // float
    public const nint m_nCPin = 0x4; // int32_t
    public const nint m_flProxyRadius = 0x8; // float
    public const nint m_flInputMin = 0xC; // float
    public const nint m_flInputMax = 0x10; // float
    public const nint m_flNoPixelVisibilityFallback = 0x14; // float
    public const nint m_flDistanceInputMin = 0x18; // float
    public const nint m_flDistanceInputMax = 0x1C; // float
    public const nint m_flDotInputMin = 0x20; // float
    public const nint m_flDotInputMax = 0x24; // float
    public const nint m_bDotCPAngles = 0x28; // bool
    public const nint m_bDotCameraAngles = 0x29; // bool
    public const nint m_flAlphaScaleMin = 0x2C; // float
    public const nint m_flAlphaScaleMax = 0x30; // float
    public const nint m_flRadiusScaleMin = 0x34; // float
    public const nint m_flRadiusScaleMax = 0x38; // float
    public const nint m_flRadiusScaleFOVBase = 0x3C; // float
    public const nint m_bRightEye = 0x40; // bool
}

public static class CPathParameters {
    public const nint m_nStartControlPointNumber = 0x0; // int32_t
    public const nint m_nEndControlPointNumber = 0x4; // int32_t
    public const nint m_nBulgeControl = 0x8; // int32_t
    public const nint m_flBulge = 0xC; // float
    public const nint m_flMidPoint = 0x10; // float
    public const nint m_vStartPointOffset = 0x14; // Vector
    public const nint m_vMidPointOffset = 0x20; // Vector
    public const nint m_vEndOffset = 0x2C; // Vector
}

public static class CPerParticleFloatInput { // CParticleFloatInput
}

public static class CPerParticleVecInput { // CParticleVecInput
}

public static class CRandomNumberGeneratorParameters {
    public const nint m_bDistributeEvenly = 0x0; // bool
    public const nint m_nSeed = 0x4; // int32_t
}

public static class CSpinUpdateBase { // CParticleFunctionOperator
}

public static class C_INIT_AddVectorToVector { // CParticleFunctionInitializer
    public const nint m_vecScale = 0x1B4; // Vector
    public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
    public const nint m_nFieldInput = 0x1C4; // ParticleAttributeIndex_t
    public const nint m_vOffsetMin = 0x1C8; // Vector
    public const nint m_vOffsetMax = 0x1D4; // Vector
    public const nint m_randomnessParameters = 0x1E0; // CRandomNumberGeneratorParameters
}

public static class C_INIT_AgeNoise { // CParticleFunctionInitializer
    public const nint m_bAbsVal = 0x1B4; // bool
    public const nint m_bAbsValInv = 0x1B5; // bool
    public const nint m_flOffset = 0x1B8; // float
    public const nint m_flAgeMin = 0x1BC; // float
    public const nint m_flAgeMax = 0x1C0; // float
    public const nint m_flNoiseScale = 0x1C4; // float
    public const nint m_flNoiseScaleLoc = 0x1C8; // float
    public const nint m_vecOffsetLoc = 0x1CC; // Vector
}

public static class C_INIT_ChaoticAttractor { // CParticleFunctionInitializer
    public const nint m_flAParm = 0x1B4; // float
    public const nint m_flBParm = 0x1B8; // float
    public const nint m_flCParm = 0x1BC; // float
    public const nint m_flDParm = 0x1C0; // float
    public const nint m_flScale = 0x1C4; // float
    public const nint m_flSpeedMin = 0x1C8; // float
    public const nint m_flSpeedMax = 0x1CC; // float
    public const nint m_nBaseCP = 0x1D0; // int32_t
    public const nint m_bUniformSpeed = 0x1D4; // bool
}

public static class C_INIT_ColorLitPerParticle { // CParticleFunctionInitializer
    public const nint m_ColorMin = 0x1CC; // Color
    public const nint m_ColorMax = 0x1D0; // Color
    public const nint m_TintMin = 0x1D4; // Color
    public const nint m_TintMax = 0x1D8; // Color
    public const nint m_flTintPerc = 0x1DC; // float
    public const nint m_nTintBlendMode = 0x1E0; // ParticleColorBlendMode_t
    public const nint m_flLightAmplification = 0x1E4; // float
}

public static class C_INIT_CreateAlongPath { // CParticleFunctionInitializer
    public const nint m_fMaxDistance = 0x1B4; // float
    public const nint m_PathParams = 0x1C0; // CPathParameters
    public const nint m_bUseRandomCPs = 0x200; // bool
    public const nint m_vEndOffset = 0x204; // Vector
    public const nint m_bSaveOffset = 0x210; // bool
}

public static class C_INIT_CreateFromCPs { // CParticleFunctionInitializer
    public const nint m_nIncrement = 0x1B4; // int32_t
    public const nint m_nMinCP = 0x1B8; // int32_t
    public const nint m_nMaxCP = 0x1BC; // int32_t
    public const nint m_nDynamicCPCount = 0x1C0; // CParticleCollectionFloatInput
}

public static class C_INIT_CreateFromParentParticles { // CParticleFunctionInitializer
    public const nint m_flVelocityScale = 0x1B4; // float
    public const nint m_flIncrement = 0x1B8; // float
    public const nint m_bRandomDistribution = 0x1BC; // bool
    public const nint m_nRandomSeed = 0x1C0; // int32_t
    public const nint m_bSubFrame = 0x1C4; // bool
}

public static class C_INIT_CreateFromPlaneCache { // CParticleFunctionInitializer
    public const nint m_vecOffsetMin = 0x1B4; // Vector
    public const nint m_vecOffsetMax = 0x1C0; // Vector
    public const nint m_bUseNormal = 0x1CD; // bool
}

public static class C_INIT_CreateInEpitrochoid { // CParticleFunctionInitializer
    public const nint m_nComponent1 = 0x1B4; // int32_t
    public const nint m_nComponent2 = 0x1B8; // int32_t
    public const nint m_TransformInput = 0x1C0; // CParticleTransformInput
    public const nint m_flParticleDensity = 0x220; // CPerParticleFloatInput
    public const nint m_flOffset = 0x370; // CPerParticleFloatInput
    public const nint m_flRadius1 = 0x4C0; // CPerParticleFloatInput
    public const nint m_flRadius2 = 0x610; // CPerParticleFloatInput
    public const nint m_bUseCount = 0x760; // bool
    public const nint m_bUseLocalCoords = 0x761; // bool
    public const nint m_bOffsetExistingPos = 0x762; // bool
}

public static class C_INIT_CreateOnGrid { // CParticleFunctionInitializer
    public const nint m_nXCount = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_nYCount = 0x308; // CParticleCollectionFloatInput
    public const nint m_nZCount = 0x458; // CParticleCollectionFloatInput
    public const nint m_nXSpacing = 0x5A8; // CParticleCollectionFloatInput
    public const nint m_nYSpacing = 0x6F8; // CParticleCollectionFloatInput
    public const nint m_nZSpacing = 0x848; // CParticleCollectionFloatInput
    public const nint m_nControlPointNumber = 0x998; // int32_t
    public const nint m_bLocalSpace = 0x99C; // bool
    public const nint m_bCenter = 0x99D; // bool
    public const nint m_bHollow = 0x99E; // bool
}

public static class C_INIT_CreateOnModel { // CParticleFunctionInitializer
    public const nint m_modelInput = 0x1B8; // CParticleModelInput
    public const nint m_transformInput = 0x210; // CParticleTransformInput
    public const nint m_nForceInModel = 0x270; // int32_t
    public const nint m_nDesiredHitbox = 0x274; // int32_t
    public const nint m_nHitboxValueFromControlPointIndex = 0x278; // int32_t
    public const nint m_vecHitBoxScale = 0x280; // CParticleCollectionVecInput
    public const nint m_flBoneVelocity = 0x8B0; // float
    public const nint m_flMaxBoneVelocity = 0x8B4; // float
    public const nint m_vecDirectionBias = 0x8B8; // CParticleCollectionVecInput
    public const nint m_HitboxSetName = 0xEE8; // char[128]
    public const nint m_bLocalCoords = 0xF68; // bool
    public const nint m_bUseBones = 0xF69; // bool
    public const nint m_bUseMesh = 0xF6A; // bool
    public const nint m_flShellSize = 0xF70; // CParticleCollectionFloatInput
}

public static class C_INIT_CreateOnModelAtHeight { // CParticleFunctionInitializer
    public const nint m_bUseBones = 0x1B4; // bool
    public const nint m_bForceZ = 0x1B5; // bool
    public const nint m_nControlPointNumber = 0x1B8; // int32_t
    public const nint m_nHeightCP = 0x1BC; // int32_t
    public const nint m_bUseWaterHeight = 0x1C0; // bool
    public const nint m_flDesiredHeight = 0x1C8; // CParticleCollectionFloatInput
    public const nint m_vecHitBoxScale = 0x318; // CParticleCollectionVecInput
    public const nint m_vecDirectionBias = 0x948; // CParticleCollectionVecInput
    public const nint m_nBiasType = 0xF78; // ParticleHitboxBiasType_t
    public const nint m_bLocalCoords = 0xF7C; // bool
    public const nint m_bPreferMovingBoxes = 0xF7D; // bool
    public const nint m_HitboxSetName = 0xF7E; // char[128]
    public const nint m_flHitboxVelocityScale = 0x1000; // CParticleCollectionFloatInput
    public const nint m_flMaxBoneVelocity = 0x1150; // CParticleCollectionFloatInput
}

public static class C_INIT_CreateParticleImpulse { // CParticleFunctionInitializer
    public const nint m_InputRadius = 0x1B8; // CPerParticleFloatInput
    public const nint m_InputMagnitude = 0x308; // CPerParticleFloatInput
    public const nint m_nFalloffFunction = 0x458; // ParticleFalloffFunction_t
    public const nint m_InputFalloffExp = 0x460; // CPerParticleFloatInput
    public const nint m_nImpulseType = 0x5B0; // ParticleImpulseType_t
}

public static class C_INIT_CreatePhyllotaxis { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nScaleCP = 0x1B8; // int32_t
    public const nint m_nComponent = 0x1BC; // int32_t
    public const nint m_fRadCentCore = 0x1C0; // float
    public const nint m_fRadPerPoint = 0x1C4; // float
    public const nint m_fRadPerPointTo = 0x1C8; // float
    public const nint m_fpointAngle = 0x1CC; // float
    public const nint m_fsizeOverall = 0x1D0; // float
    public const nint m_fRadBias = 0x1D4; // float
    public const nint m_fMinRad = 0x1D8; // float
    public const nint m_fDistBias = 0x1DC; // float
    public const nint m_bUseLocalCoords = 0x1E0; // bool
    public const nint m_bUseWithContEmit = 0x1E1; // bool
    public const nint m_bUseOrigRadius = 0x1E2; // bool
}

public static class C_INIT_CreateSequentialPath { // CParticleFunctionInitializer
    public const nint m_fMaxDistance = 0x1B4; // float
    public const nint m_flNumToAssign = 0x1B8; // float
    public const nint m_bLoop = 0x1BC; // bool
    public const nint m_bCPPairs = 0x1BD; // bool
    public const nint m_bSaveOffset = 0x1BE; // bool
    public const nint m_PathParams = 0x1C0; // CPathParameters
}

public static class C_INIT_CreateSequentialPathV2 { // CParticleFunctionInitializer
    public const nint m_fMaxDistance = 0x1B8; // CPerParticleFloatInput
    public const nint m_flNumToAssign = 0x308; // CParticleCollectionFloatInput
    public const nint m_bLoop = 0x458; // bool
    public const nint m_bCPPairs = 0x459; // bool
    public const nint m_bSaveOffset = 0x45A; // bool
    public const nint m_PathParams = 0x460; // CPathParameters
}

public static class C_INIT_CreateSpiralSphere { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nOverrideCP = 0x1B8; // int32_t
    public const nint m_nDensity = 0x1BC; // int32_t
    public const nint m_flInitialRadius = 0x1C0; // float
    public const nint m_flInitialSpeedMin = 0x1C4; // float
    public const nint m_flInitialSpeedMax = 0x1C8; // float
    public const nint m_bUseParticleCount = 0x1CC; // bool
}

public static class C_INIT_CreateWithinBox { // CParticleFunctionInitializer
    public const nint m_vecMin = 0x1B8; // CPerParticleVecInput
    public const nint m_vecMax = 0x7E8; // CPerParticleVecInput
    public const nint m_nControlPointNumber = 0xE18; // int32_t
    public const nint m_bLocalSpace = 0xE1C; // bool
    public const nint m_randomnessParameters = 0xE20; // CRandomNumberGeneratorParameters
}

public static class C_INIT_CreateWithinSphereTransform { // CParticleFunctionInitializer
    public const nint m_fRadiusMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_fRadiusMax = 0x308; // CPerParticleFloatInput
    public const nint m_vecDistanceBias = 0x458; // CPerParticleVecInput
    public const nint m_vecDistanceBiasAbs = 0xA88; // Vector
    public const nint m_TransformInput = 0xA98; // CParticleTransformInput
    public const nint m_fSpeedMin = 0xAF8; // CPerParticleFloatInput
    public const nint m_fSpeedMax = 0xC48; // CPerParticleFloatInput
    public const nint m_fSpeedRandExp = 0xD98; // float
    public const nint m_bLocalCoords = 0xD9C; // bool
    public const nint m_flEndCPGrowthTime = 0xDA0; // float
    public const nint m_LocalCoordinateSystemSpeedMin = 0xDA8; // CPerParticleVecInput
    public const nint m_LocalCoordinateSystemSpeedMax = 0x13D8; // CPerParticleVecInput
    public const nint m_nFieldOutput = 0x1A08; // ParticleAttributeIndex_t
    public const nint m_nFieldVelocity = 0x1A0C; // ParticleAttributeIndex_t
}

public static class C_INIT_CreationNoise { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_bAbsVal = 0x1B8; // bool
    public const nint m_bAbsValInv = 0x1B9; // bool
    public const nint m_flOffset = 0x1BC; // float
    public const nint m_flOutputMin = 0x1C0; // float
    public const nint m_flOutputMax = 0x1C4; // float
    public const nint m_flNoiseScale = 0x1C8; // float
    public const nint m_flNoiseScaleLoc = 0x1CC; // float
    public const nint m_vecOffsetLoc = 0x1D0; // Vector
    public const nint m_flWorldTimeScale = 0x1DC; // float
}

public static class C_INIT_DistanceCull { // CParticleFunctionInitializer
    public const nint m_nControlPoint = 0x1B4; // int32_t
    public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_bCullInside = 0x308; // bool
}

public static class C_INIT_DistanceToCPInit { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
    public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    public const nint m_nStartCP = 0x6F8; // int32_t
    public const nint m_bLOS = 0x6FC; // bool
    public const nint m_CollisionGroupName = 0x6FD; // char[128]
    public const nint m_nTraceSet = 0x780; // ParticleTraceSet_t
    public const nint m_flMaxTraceLength = 0x788; // CPerParticleFloatInput
    public const nint m_flLOSScale = 0x8D8; // float
    public const nint m_nSetMethod = 0x8DC; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x8E0; // bool
    public const nint m_vecDistanceScale = 0x8E4; // Vector
    public const nint m_flRemapBias = 0x8F0; // float
}

public static class C_INIT_DistanceToNeighborCull { // CParticleFunctionInitializer
    public const nint m_flDistance = 0x1B8; // CPerParticleFloatInput
}

public static class C_INIT_GlobalScale { // CParticleFunctionInitializer
    public const nint m_flScale = 0x1B4; // float
    public const nint m_nScaleControlPointNumber = 0x1B8; // int32_t
    public const nint m_nControlPointNumber = 0x1BC; // int32_t
    public const nint m_bScaleRadius = 0x1C0; // bool
    public const nint m_bScalePosition = 0x1C1; // bool
    public const nint m_bScaleVelocity = 0x1C2; // bool
}

public static class C_INIT_InheritFromParentParticles { // CParticleFunctionInitializer
    public const nint m_flScale = 0x1B4; // float
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_nIncrement = 0x1BC; // int32_t
    public const nint m_bRandomDistribution = 0x1C0; // bool
    public const nint m_nRandomSeed = 0x1C4; // int32_t
}

public static class C_INIT_InheritVelocity { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_flVelocityScale = 0x1B8; // float
}

public static class C_INIT_InitFloat { // CParticleFunctionInitializer
    public const nint m_InputValue = 0x1B8; // CPerParticleFloatInput
    public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x30C; // ParticleSetMethod_t
    public const nint m_InputStrength = 0x310; // CPerParticleFloatInput
}

public static class C_INIT_InitFloatCollection { // CParticleFunctionInitializer
    public const nint m_InputValue = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
}

public static class C_INIT_InitFromCPSnapshot { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nAttributeToRead = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_nAttributeToWrite = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_nLocalSpaceCP = 0x1C0; // int32_t
    public const nint m_bRandom = 0x1C4; // bool
    public const nint m_bReverse = 0x1C5; // bool
    public const nint m_nSnapShotIncrement = 0x1C8; // CParticleCollectionFloatInput
    public const nint m_nManualSnapshotIndex = 0x318; // CPerParticleFloatInput
    public const nint m_nRandomSeed = 0x468; // int32_t
    public const nint m_bLocalSpaceAngles = 0x46C; // bool
}

public static class C_INIT_InitFromParentKilled { // CParticleFunctionInitializer
    public const nint m_nAttributeToCopy = 0x1B4; // ParticleAttributeIndex_t
}

public static class C_INIT_InitFromVectorFieldSnapshot { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nLocalSpaceCP = 0x1B8; // int32_t
    public const nint m_nWeightUpdateCP = 0x1BC; // int32_t
    public const nint m_bUseVerticalVelocity = 0x1C0; // bool
    public const nint m_vecScale = 0x1C8; // CPerParticleVecInput
}

public static class C_INIT_InitSkinnedPositionFromCPSnapshot { // CParticleFunctionInitializer
    public const nint m_nSnapshotControlPointNumber = 0x1B4; // int32_t
    public const nint m_nControlPointNumber = 0x1B8; // int32_t
    public const nint m_bRandom = 0x1BC; // bool
    public const nint m_nRandomSeed = 0x1C0; // int32_t
    public const nint m_bRigid = 0x1C4; // bool
    public const nint m_bSetNormal = 0x1C5; // bool
    public const nint m_bIgnoreDt = 0x1C6; // bool
    public const nint m_flMinNormalVelocity = 0x1C8; // float
    public const nint m_flMaxNormalVelocity = 0x1CC; // float
    public const nint m_nIndexType = 0x1D0; // SnapshotIndexType_t
    public const nint m_flReadIndex = 0x1D8; // CPerParticleFloatInput
    public const nint m_flIncrement = 0x328; // float
    public const nint m_nFullLoopIncrement = 0x32C; // int32_t
    public const nint m_nSnapShotStartPoint = 0x330; // int32_t
    public const nint m_flBoneVelocity = 0x334; // float
    public const nint m_flBoneVelocityMax = 0x338; // float
    public const nint m_bCopyColor = 0x33C; // bool
    public const nint m_bCopyAlpha = 0x33D; // bool
    public const nint m_bSetRadius = 0x33E; // bool
}

public static class C_INIT_InitVec { // CParticleFunctionInitializer
    public const nint m_InputValue = 0x1B8; // CPerParticleVecInput
    public const nint m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x7EC; // ParticleSetMethod_t
    public const nint m_bNormalizedOutput = 0x7F0; // bool
    public const nint m_bWritePreviousPosition = 0x7F1; // bool
}

public static class C_INIT_InitVecCollection { // CParticleFunctionInitializer
    public const nint m_InputValue = 0x1B8; // CParticleCollectionVecInput
    public const nint m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
}

public static class C_INIT_InitialRepulsionVelocity { // CParticleFunctionInitializer
    public const nint m_CollisionGroupName = 0x1B4; // char[128]
    public const nint m_nTraceSet = 0x234; // ParticleTraceSet_t
    public const nint m_vecOutputMin = 0x238; // Vector
    public const nint m_vecOutputMax = 0x244; // Vector
    public const nint m_nControlPointNumber = 0x250; // int32_t
    public const nint m_bPerParticle = 0x254; // bool
    public const nint m_bTranslate = 0x255; // bool
    public const nint m_bProportional = 0x256; // bool
    public const nint m_flTraceLength = 0x258; // float
    public const nint m_bPerParticleTR = 0x25C; // bool
    public const nint m_bInherit = 0x25D; // bool
    public const nint m_nChildCP = 0x260; // int32_t
    public const nint m_nChildGroupID = 0x264; // int32_t
}

public static class C_INIT_InitialSequenceFromModel { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_nFieldOutputAnim = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1C0; // float
    public const nint m_flInputMax = 0x1C4; // float
    public const nint m_flOutputMin = 0x1C8; // float
    public const nint m_flOutputMax = 0x1CC; // float
    public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
}

public static class C_INIT_InitialVelocityFromHitbox { // CParticleFunctionInitializer
    public const nint m_flVelocityMin = 0x1B4; // float
    public const nint m_flVelocityMax = 0x1B8; // float
    public const nint m_nControlPointNumber = 0x1BC; // int32_t
    public const nint m_HitboxSetName = 0x1C0; // char[128]
    public const nint m_bUseBones = 0x240; // bool
}

public static class C_INIT_InitialVelocityNoise { // CParticleFunctionInitializer
    public const nint m_vecAbsVal = 0x1B4; // Vector
    public const nint m_vecAbsValInv = 0x1C0; // Vector
    public const nint m_vecOffsetLoc = 0x1D0; // CPerParticleVecInput
    public const nint m_flOffset = 0x800; // CPerParticleFloatInput
    public const nint m_vecOutputMin = 0x950; // CPerParticleVecInput
    public const nint m_vecOutputMax = 0xF80; // CPerParticleVecInput
    public const nint m_flNoiseScale = 0x15B0; // CPerParticleFloatInput
    public const nint m_flNoiseScaleLoc = 0x1700; // CPerParticleFloatInput
    public const nint m_TransformInput = 0x1850; // CParticleTransformInput
    public const nint m_bIgnoreDt = 0x18B0; // bool
}

public static class C_INIT_LifespanFromVelocity { // CParticleFunctionInitializer
    public const nint m_vecComponentScale = 0x1B4; // Vector
    public const nint m_flTraceOffset = 0x1C0; // float
    public const nint m_flMaxTraceLength = 0x1C4; // float
    public const nint m_flTraceTolerance = 0x1C8; // float
    public const nint m_nMaxPlanes = 0x1CC; // int32_t
    public const nint m_CollisionGroupName = 0x1D4; // char[128]
    public const nint m_nTraceSet = 0x254; // ParticleTraceSet_t
    public const nint m_bIncludeWater = 0x260; // bool
}

public static class C_INIT_ModelCull { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_bBoundBox = 0x1B8; // bool
    public const nint m_bCullOutside = 0x1B9; // bool
    public const nint m_bUseBones = 0x1BA; // bool
    public const nint m_HitboxSetName = 0x1BB; // char[128]
}

public static class C_INIT_MoveBetweenPoints { // CParticleFunctionInitializer
    public const nint m_flSpeedMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_flSpeedMax = 0x308; // CPerParticleFloatInput
    public const nint m_flEndSpread = 0x458; // CPerParticleFloatInput
    public const nint m_flStartOffset = 0x5A8; // CPerParticleFloatInput
    public const nint m_flEndOffset = 0x6F8; // CPerParticleFloatInput
    public const nint m_nEndControlPointNumber = 0x848; // int32_t
    public const nint m_bTrailBias = 0x84C; // bool
}

public static class C_INIT_NormalAlignToCP { // CParticleFunctionInitializer
    public const nint m_transformInput = 0x1B8; // CParticleTransformInput
    public const nint m_nControlPointAxis = 0x218; // ParticleControlPointAxis_t
}

public static class C_INIT_NormalOffset { // CParticleFunctionInitializer
    public const nint m_OffsetMin = 0x1B4; // Vector
    public const nint m_OffsetMax = 0x1C0; // Vector
    public const nint m_nControlPointNumber = 0x1CC; // int32_t
    public const nint m_bLocalCoords = 0x1D0; // bool
    public const nint m_bNormalize = 0x1D1; // bool
}

public static class C_INIT_OffsetVectorToVector { // CParticleFunctionInitializer
    public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_vecOutputMin = 0x1BC; // Vector
    public const nint m_vecOutputMax = 0x1C8; // Vector
    public const nint m_randomnessParameters = 0x1D4; // CRandomNumberGeneratorParameters
}

public static class C_INIT_Orient2DRelToCP { // CParticleFunctionInitializer
    public const nint m_nCP = 0x1B4; // int32_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flRotOffset = 0x1BC; // float
}

public static class C_INIT_PlaneCull { // CParticleFunctionInitializer
    public const nint m_nControlPoint = 0x1B4; // int32_t
    public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_bCullInside = 0x308; // bool
}

public static class C_INIT_PointList { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
    public const nint m_bPlaceAlongPath = 0x1D0; // bool
    public const nint m_bClosedLoop = 0x1D1; // bool
    public const nint m_nNumPointsAlongPath = 0x1D4; // int32_t
}

public static class C_INIT_PositionOffset { // CParticleFunctionInitializer
    public const nint m_OffsetMin = 0x1B8; // CPerParticleVecInput
    public const nint m_OffsetMax = 0x7E8; // CPerParticleVecInput
    public const nint m_TransformInput = 0xE18; // CParticleTransformInput
    public const nint m_bLocalCoords = 0xE78; // bool
    public const nint m_bProportional = 0xE79; // bool
    public const nint m_randomnessParameters = 0xE7C; // CRandomNumberGeneratorParameters
}

public static class C_INIT_PositionOffsetToCP { // CParticleFunctionInitializer
    public const nint m_nControlPointNumberStart = 0x1B4; // int32_t
    public const nint m_nControlPointNumberEnd = 0x1B8; // int32_t
    public const nint m_bLocalCoords = 0x1BC; // bool
}

public static class C_INIT_PositionPlaceOnGround { // CParticleFunctionInitializer
    public const nint m_flOffset = 0x1B8; // CPerParticleFloatInput
    public const nint m_flMaxTraceLength = 0x308; // CPerParticleFloatInput
    public const nint m_CollisionGroupName = 0x458; // char[128]
    public const nint m_nTraceSet = 0x4D8; // ParticleTraceSet_t
    public const nint m_nTraceMissBehavior = 0x4E8; // ParticleTraceMissBehavior_t
    public const nint m_bIncludeWater = 0x4EC; // bool
    public const nint m_bSetNormal = 0x4ED; // bool
    public const nint m_bSetPXYZOnly = 0x4EE; // bool
    public const nint m_bTraceAlongNormal = 0x4EF; // bool
    public const nint m_bOffsetonColOnly = 0x4F0; // bool
    public const nint m_flOffsetByRadiusFactor = 0x4F4; // float
    public const nint m_nPreserveOffsetCP = 0x4F8; // int32_t
    public const nint m_nIgnoreCP = 0x4FC; // int32_t
}

public static class C_INIT_PositionWarp { // CParticleFunctionInitializer
    public const nint m_vecWarpMin = 0x1B8; // CParticleCollectionVecInput
    public const nint m_vecWarpMax = 0x7E8; // CParticleCollectionVecInput
    public const nint m_nScaleControlPointNumber = 0xE18; // int32_t
    public const nint m_nControlPointNumber = 0xE1C; // int32_t
    public const nint m_nRadiusComponent = 0xE20; // int32_t
    public const nint m_flWarpTime = 0xE24; // float
    public const nint m_flWarpStartTime = 0xE28; // float
    public const nint m_flPrevPosScale = 0xE2C; // float
    public const nint m_bInvertWarp = 0xE30; // bool
    public const nint m_bUseCount = 0xE31; // bool
}

public static class C_INIT_PositionWarpScalar { // CParticleFunctionInitializer
    public const nint m_vecWarpMin = 0x1B4; // Vector
    public const nint m_vecWarpMax = 0x1C0; // Vector
    public const nint m_InputValue = 0x1D0; // CPerParticleFloatInput
    public const nint m_flPrevPosScale = 0x320; // float
    public const nint m_nScaleControlPointNumber = 0x324; // int32_t
    public const nint m_nControlPointNumber = 0x328; // int32_t
}

public static class C_INIT_QuantizeFloat { // CParticleFunctionInitializer
    public const nint m_InputValue = 0x1B8; // CPerParticleFloatInput
    public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
}

public static class C_INIT_RadiusFromCPObject { // CParticleFunctionInitializer
    public const nint m_nControlPoint = 0x1B4; // int32_t
}

public static class C_INIT_RandomAlpha { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nAlphaMin = 0x1B8; // int32_t
    public const nint m_nAlphaMax = 0x1BC; // int32_t
    public const nint m_flAlphaRandExponent = 0x1C8; // float
}

public static class C_INIT_RandomAlphaWindowThreshold { // CParticleFunctionInitializer
    public const nint m_flMin = 0x1B4; // float
    public const nint m_flMax = 0x1B8; // float
    public const nint m_flExponent = 0x1BC; // float
}

public static class C_INIT_RandomColor { // CParticleFunctionInitializer
    public const nint m_ColorMin = 0x1D0; // Color
    public const nint m_ColorMax = 0x1D4; // Color
    public const nint m_TintMin = 0x1D8; // Color
    public const nint m_TintMax = 0x1DC; // Color
    public const nint m_flTintPerc = 0x1E0; // float
    public const nint m_flUpdateThreshold = 0x1E4; // float
    public const nint m_nTintCP = 0x1E8; // int32_t
    public const nint m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
    public const nint m_nTintBlendMode = 0x1F0; // ParticleColorBlendMode_t
    public const nint m_flLightAmplification = 0x1F4; // float
}

public static class C_INIT_RandomLifeTime { // CParticleFunctionInitializer
    public const nint m_fLifetimeMin = 0x1B4; // float
    public const nint m_fLifetimeMax = 0x1B8; // float
    public const nint m_fLifetimeRandExponent = 0x1BC; // float
}

public static class C_INIT_RandomModelSequence { // CParticleFunctionInitializer
    public const nint m_ActivityName = 0x1B4; // char[256]
    public const nint m_SequenceName = 0x2B4; // char[256]
    public const nint m_hModel = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
}

public static class C_INIT_RandomNamedModelBodyPart { // C_INIT_RandomNamedModelElement
}

public static class C_INIT_RandomNamedModelElement { // CParticleFunctionInitializer
    public const nint m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_names = 0x1C0; // CUtlVector<CUtlString>
    public const nint m_bShuffle = 0x1D8; // bool
    public const nint m_bLinear = 0x1D9; // bool
    public const nint m_bModelFromRenderer = 0x1DA; // bool
    public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
}

public static class C_INIT_RandomNamedModelMeshGroup { // C_INIT_RandomNamedModelElement
}

public static class C_INIT_RandomNamedModelSequence { // C_INIT_RandomNamedModelElement
}

public static class C_INIT_RandomRadius { // CParticleFunctionInitializer
    public const nint m_flRadiusMin = 0x1B4; // float
    public const nint m_flRadiusMax = 0x1B8; // float
    public const nint m_flRadiusRandExponent = 0x1BC; // float
}

public static class C_INIT_RandomRotation { // CGeneralRandomRotation
}

public static class C_INIT_RandomRotationSpeed { // CGeneralRandomRotation
}

public static class C_INIT_RandomScalar { // CParticleFunctionInitializer
    public const nint m_flMin = 0x1B4; // float
    public const nint m_flMax = 0x1B8; // float
    public const nint m_flExponent = 0x1BC; // float
    public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
}

public static class C_INIT_RandomSecondSequence { // CParticleFunctionInitializer
    public const nint m_nSequenceMin = 0x1B4; // int32_t
    public const nint m_nSequenceMax = 0x1B8; // int32_t
}

public static class C_INIT_RandomSequence { // CParticleFunctionInitializer
    public const nint m_nSequenceMin = 0x1B4; // int32_t
    public const nint m_nSequenceMax = 0x1B8; // int32_t
    public const nint m_bShuffle = 0x1BC; // bool
    public const nint m_bLinear = 0x1BD; // bool
    public const nint m_WeightedList = 0x1C0; // CUtlVector<SequenceWeightedList_t>
}

public static class C_INIT_RandomTrailLength { // CParticleFunctionInitializer
    public const nint m_flMinLength = 0x1B4; // float
    public const nint m_flMaxLength = 0x1B8; // float
    public const nint m_flLengthRandExponent = 0x1BC; // float
}

public static class C_INIT_RandomVector { // CParticleFunctionInitializer
    public const nint m_vecMin = 0x1B4; // Vector
    public const nint m_vecMax = 0x1C0; // Vector
    public const nint m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
    public const nint m_randomnessParameters = 0x1D0; // CRandomNumberGeneratorParameters
}

public static class C_INIT_RandomVectorComponent { // CParticleFunctionInitializer
    public const nint m_flMin = 0x1B4; // float
    public const nint m_flMax = 0x1B8; // float
    public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_nComponent = 0x1C0; // int32_t
}

public static class C_INIT_RandomYaw { // CGeneralRandomRotation
}

public static class C_INIT_RandomYawFlip { // CParticleFunctionInitializer
    public const nint m_flPercent = 0x1B4; // float
}

public static class C_INIT_RemapCPtoScalar { // CParticleFunctionInitializer
    public const nint m_nCPInput = 0x1B4; // int32_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_nField = 0x1BC; // int32_t
    public const nint m_flInputMin = 0x1C0; // float
    public const nint m_flInputMax = 0x1C4; // float
    public const nint m_flOutputMin = 0x1C8; // float
    public const nint m_flOutputMax = 0x1CC; // float
    public const nint m_flStartTime = 0x1D0; // float
    public const nint m_flEndTime = 0x1D4; // float
    public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
    public const nint m_flRemapBias = 0x1DC; // float
}

public static class C_INIT_RemapInitialDirectionToTransformToVector { // CParticleFunctionInitializer
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
    public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x21C; // float
    public const nint m_flOffsetRot = 0x220; // float
    public const nint m_vecOffsetAxis = 0x224; // Vector
    public const nint m_bNormalize = 0x230; // bool
}

public static class C_INIT_RemapInitialTransformDirectionToRotation { // CParticleFunctionInitializer
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
    public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    public const nint m_flOffsetRot = 0x21C; // float
    public const nint m_nComponent = 0x220; // int32_t
}

public static class C_INIT_RemapInitialVisibilityScalar { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
}

public static class C_INIT_RemapNamedModelBodyPartToScalar { // C_INIT_RemapNamedModelElementToScalar
}

public static class C_INIT_RemapNamedModelElementToScalar { // CParticleFunctionInitializer
    public const nint m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_names = 0x1C0; // CUtlVector<CUtlString>
    public const nint m_values = 0x1D8; // CUtlVector<float>
    public const nint m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1F4; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
    public const nint m_bModelFromRenderer = 0x1FC; // bool
}

public static class C_INIT_RemapNamedModelMeshGroupToScalar { // C_INIT_RemapNamedModelElementToScalar
}

public static class C_INIT_RemapNamedModelSequenceToScalar { // C_INIT_RemapNamedModelElementToScalar
}

public static class C_INIT_RemapParticleCountToNamedModelBodyPartScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

public static class C_INIT_RemapParticleCountToNamedModelElementScalar { // C_INIT_RemapParticleCountToScalar
    public const nint m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_outputMinName = 0x1E8; // CUtlString
    public const nint m_outputMaxName = 0x1F0; // CUtlString
    public const nint m_bModelFromRenderer = 0x1F8; // bool
}

public static class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

public static class C_INIT_RemapParticleCountToNamedModelSequenceScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

public static class C_INIT_RemapParticleCountToScalar { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nInputMin = 0x1B8; // int32_t
    public const nint m_nInputMax = 0x1BC; // int32_t
    public const nint m_nScaleControlPoint = 0x1C0; // int32_t
    public const nint m_nScaleControlPointField = 0x1C4; // int32_t
    public const nint m_flOutputMin = 0x1C8; // float
    public const nint m_flOutputMax = 0x1CC; // float
    public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x1D4; // bool
    public const nint m_bInvert = 0x1D5; // bool
    public const nint m_bWrap = 0x1D6; // bool
    public const nint m_flRemapBias = 0x1D8; // float
}

public static class C_INIT_RemapQAnglesToRotation { // CParticleFunctionInitializer
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
}

public static class C_INIT_RemapScalar { // CParticleFunctionInitializer
    public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
    public const nint m_flStartTime = 0x1CC; // float
    public const nint m_flEndTime = 0x1D0; // float
    public const nint m_nSetMethod = 0x1D4; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x1D8; // bool
    public const nint m_flRemapBias = 0x1DC; // float
}

public static class C_INIT_RemapScalarToVector { // CParticleFunctionInitializer
    public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_vecOutputMin = 0x1C4; // Vector
    public const nint m_vecOutputMax = 0x1D0; // Vector
    public const nint m_flStartTime = 0x1DC; // float
    public const nint m_flEndTime = 0x1E0; // float
    public const nint m_nSetMethod = 0x1E4; // ParticleSetMethod_t
    public const nint m_nControlPointNumber = 0x1E8; // int32_t
    public const nint m_bLocalCoords = 0x1EC; // bool
    public const nint m_flRemapBias = 0x1F0; // float
}

public static class C_INIT_RemapSpeedToScalar { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nControlPointNumber = 0x1B8; // int32_t
    public const nint m_flStartTime = 0x1BC; // float
    public const nint m_flEndTime = 0x1C0; // float
    public const nint m_flInputMin = 0x1C4; // float
    public const nint m_flInputMax = 0x1C8; // float
    public const nint m_flOutputMin = 0x1CC; // float
    public const nint m_flOutputMax = 0x1D0; // float
    public const nint m_nSetMethod = 0x1D4; // ParticleSetMethod_t
    public const nint m_bPerParticle = 0x1D8; // bool
}

public static class C_INIT_RemapTransformOrientationToRotations { // CParticleFunctionInitializer
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
    public const nint m_vecRotation = 0x218; // Vector
    public const nint m_bUseQuat = 0x224; // bool
    public const nint m_bWriteNormal = 0x225; // bool
}

public static class C_INIT_RemapTransformToVector { // CParticleFunctionInitializer
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_vInputMin = 0x1B8; // Vector
    public const nint m_vInputMax = 0x1C4; // Vector
    public const nint m_vOutputMin = 0x1D0; // Vector
    public const nint m_vOutputMax = 0x1DC; // Vector
    public const nint m_TransformInput = 0x1E8; // CParticleTransformInput
    public const nint m_LocalSpaceTransform = 0x248; // CParticleTransformInput
    public const nint m_flStartTime = 0x2A8; // float
    public const nint m_flEndTime = 0x2AC; // float
    public const nint m_nSetMethod = 0x2B0; // ParticleSetMethod_t
    public const nint m_bOffset = 0x2B4; // bool
    public const nint m_bAccelerate = 0x2B5; // bool
    public const nint m_flRemapBias = 0x2B8; // float
}

public static class C_INIT_RingWave { // CParticleFunctionInitializer
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
    public const nint m_flParticlesPerOrbit = 0x218; // CParticleCollectionFloatInput
    public const nint m_flInitialRadius = 0x368; // CPerParticleFloatInput
    public const nint m_flThickness = 0x4B8; // CPerParticleFloatInput
    public const nint m_flInitialSpeedMin = 0x608; // CPerParticleFloatInput
    public const nint m_flInitialSpeedMax = 0x758; // CPerParticleFloatInput
    public const nint m_flRoll = 0x8A8; // CPerParticleFloatInput
    public const nint m_flPitch = 0x9F8; // CPerParticleFloatInput
    public const nint m_flYaw = 0xB48; // CPerParticleFloatInput
    public const nint m_bEvenDistribution = 0xC98; // bool
    public const nint m_bXYVelocityOnly = 0xC99; // bool
}

public static class C_INIT_RtEnvCull { // CParticleFunctionInitializer
    public const nint m_vecTestDir = 0x1B4; // Vector
    public const nint m_vecTestNormal = 0x1C0; // Vector
    public const nint m_bUseVelocity = 0x1CC; // bool
    public const nint m_bCullOnMiss = 0x1CD; // bool
    public const nint m_bLifeAdjust = 0x1CE; // bool
    public const nint m_RtEnvName = 0x1CF; // char[128]
    public const nint m_nRTEnvCP = 0x250; // int32_t
    public const nint m_nComponent = 0x254; // int32_t
}

public static class C_INIT_ScaleVelocity { // CParticleFunctionInitializer
    public const nint m_vecScale = 0x1B8; // CParticleCollectionVecInput
}

public static class C_INIT_SequenceFromCP { // CParticleFunctionInitializer
    public const nint m_bKillUnused = 0x1B4; // bool
    public const nint m_bRadiusScale = 0x1B5; // bool
    public const nint m_nCP = 0x1B8; // int32_t
    public const nint m_vecOffset = 0x1BC; // Vector
}

public static class C_INIT_SequenceLifeTime { // CParticleFunctionInitializer
    public const nint m_flFramerate = 0x1B4; // float
}

public static class C_INIT_SetAttributeToScalarExpression { // CParticleFunctionInitializer
    public const nint m_nExpression = 0x1B4; // ScalarExpressionType_t
    public const nint m_flInput1 = 0x1B8; // CPerParticleFloatInput
    public const nint m_flInput2 = 0x308; // CPerParticleFloatInput
    public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
    public const nint m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x5AC; // ParticleSetMethod_t
}

public static class C_INIT_SetHitboxToClosest { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nDesiredHitbox = 0x1B8; // int32_t
    public const nint m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
    public const nint m_HitboxSetName = 0x7F0; // char[128]
    public const nint m_bUseBones = 0x870; // bool
    public const nint m_bUseClosestPointOnHitbox = 0x871; // bool
    public const nint m_nTestType = 0x874; // ClosestPointTestType_t
    public const nint m_flHybridRatio = 0x878; // CParticleCollectionFloatInput
    public const nint m_bUpdatePosition = 0x9C8; // bool
}

public static class C_INIT_SetHitboxToModel { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nForceInModel = 0x1B8; // int32_t
    public const nint m_nDesiredHitbox = 0x1BC; // int32_t
    public const nint m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
    public const nint m_vecDirectionBias = 0x7F0; // Vector
    public const nint m_bMaintainHitbox = 0x7FC; // bool
    public const nint m_bUseBones = 0x7FD; // bool
    public const nint m_HitboxSetName = 0x7FE; // char[128]
    public const nint m_flShellSize = 0x880; // CParticleCollectionFloatInput
}

public static class C_INIT_SetRigidAttachment { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_bLocalSpace = 0x1C0; // bool
}

public static class C_INIT_SetVectorAttributeToVectorExpression { // CParticleFunctionInitializer
    public const nint m_nExpression = 0x1B4; // VectorExpressionType_t
    public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
    public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
    public const nint m_nOutputField = 0xE18; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0xE1C; // ParticleSetMethod_t
    public const nint m_bNormalizedOutput = 0xE20; // bool
}

public static class C_INIT_StatusEffect { // CParticleFunctionInitializer
    public const nint m_nDetail2Combo = 0x1B4; // Detail2Combo_t
    public const nint m_flDetail2Rotation = 0x1B8; // float
    public const nint m_flDetail2Scale = 0x1BC; // float
    public const nint m_flDetail2BlendFactor = 0x1C0; // float
    public const nint m_flColorWarpIntensity = 0x1C4; // float
    public const nint m_flDiffuseWarpBlendToFull = 0x1C8; // float
    public const nint m_flEnvMapIntensity = 0x1CC; // float
    public const nint m_flAmbientScale = 0x1D0; // float
    public const nint m_specularColor = 0x1D4; // Color
    public const nint m_flSpecularScale = 0x1D8; // float
    public const nint m_flSpecularExponent = 0x1DC; // float
    public const nint m_flSpecularExponentBlendToFull = 0x1E0; // float
    public const nint m_flSpecularBlendToFull = 0x1E4; // float
    public const nint m_rimLightColor = 0x1E8; // Color
    public const nint m_flRimLightScale = 0x1EC; // float
    public const nint m_flReflectionsTintByBaseBlendToNone = 0x1F0; // float
    public const nint m_flMetalnessBlendToFull = 0x1F4; // float
    public const nint m_flSelfIllumBlendToFull = 0x1F8; // float
}

public static class C_INIT_StatusEffectCitadel { // CParticleFunctionInitializer
    public const nint m_flSFXColorWarpAmount = 0x1B4; // float
    public const nint m_flSFXNormalAmount = 0x1B8; // float
    public const nint m_flSFXMetalnessAmount = 0x1BC; // float
    public const nint m_flSFXRoughnessAmount = 0x1C0; // float
    public const nint m_flSFXSelfIllumAmount = 0x1C4; // float
    public const nint m_flSFXSScale = 0x1C8; // float
    public const nint m_flSFXSScrollX = 0x1CC; // float
    public const nint m_flSFXSScrollY = 0x1D0; // float
    public const nint m_flSFXSScrollZ = 0x1D4; // float
    public const nint m_flSFXSOffsetX = 0x1D8; // float
    public const nint m_flSFXSOffsetY = 0x1DC; // float
    public const nint m_flSFXSOffsetZ = 0x1E0; // float
    public const nint m_nDetailCombo = 0x1E4; // DetailCombo_t
    public const nint m_flSFXSDetailAmount = 0x1E8; // float
    public const nint m_flSFXSDetailScale = 0x1EC; // float
    public const nint m_flSFXSDetailScrollX = 0x1F0; // float
    public const nint m_flSFXSDetailScrollY = 0x1F4; // float
    public const nint m_flSFXSDetailScrollZ = 0x1F8; // float
    public const nint m_flSFXSUseModelUVs = 0x1FC; // float
}

public static class C_INIT_VelocityFromCP { // CParticleFunctionInitializer
    public const nint m_velocityInput = 0x1B8; // CParticleCollectionVecInput
    public const nint m_transformInput = 0x7E8; // CParticleTransformInput
    public const nint m_flVelocityScale = 0x848; // float
    public const nint m_bDirectionOnly = 0x84C; // bool
}

public static class C_INIT_VelocityFromNormal { // CParticleFunctionInitializer
    public const nint m_fSpeedMin = 0x1B4; // float
    public const nint m_fSpeedMax = 0x1B8; // float
    public const nint m_bIgnoreDt = 0x1BC; // bool
}

public static class C_INIT_VelocityRadialRandom { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_fSpeedMin = 0x1B8; // float
    public const nint m_fSpeedMax = 0x1BC; // float
    public const nint m_vecLocalCoordinateSystemSpeedScale = 0x1C0; // Vector
    public const nint m_bIgnoreDelta = 0x1CD; // bool
}

public static class C_INIT_VelocityRandom { // CParticleFunctionInitializer
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_fSpeedMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_fSpeedMax = 0x308; // CPerParticleFloatInput
    public const nint m_LocalCoordinateSystemSpeedMin = 0x458; // CPerParticleVecInput
    public const nint m_LocalCoordinateSystemSpeedMax = 0xA88; // CPerParticleVecInput
    public const nint m_bIgnoreDT = 0x10B8; // bool
    public const nint m_randomnessParameters = 0x10BC; // CRandomNumberGeneratorParameters
}

public static class C_OP_AlphaDecay { // CParticleFunctionOperator
    public const nint m_flMinAlpha = 0x1B0; // float
}

public static class C_OP_AttractToControlPoint { // CParticleFunctionForce
    public const nint m_vecComponentScale = 0x1BC; // Vector
    public const nint m_fForceAmount = 0x1C8; // CPerParticleFloatInput
    public const nint m_fFalloffPower = 0x318; // float
    public const nint m_TransformInput = 0x320; // CParticleTransformInput
    public const nint m_fForceAmountMin = 0x380; // CPerParticleFloatInput
    public const nint m_bApplyMinForce = 0x4D0; // bool
}

public static class C_OP_BasicMovement { // CParticleFunctionOperator
    public const nint m_Gravity = 0x1B0; // CParticleCollectionVecInput
    public const nint m_fDrag = 0x7E0; // CParticleCollectionFloatInput
    public const nint m_nMaxConstraintPasses = 0x930; // int32_t
}

public static class C_OP_BoxConstraint { // CParticleFunctionConstraint
    public const nint m_vecMin = 0x1B0; // CParticleCollectionVecInput
    public const nint m_vecMax = 0x7E0; // CParticleCollectionVecInput
    public const nint m_nCP = 0xE10; // int32_t
    public const nint m_bLocalSpace = 0xE14; // bool
    public const nint m_bAccountForRadius = 0xE15; // bool
}

public static class C_OP_CPOffsetToPercentageBetweenCPs { // CParticleFunctionOperator
    public const nint m_flInputMin = 0x1B0; // float
    public const nint m_flInputMax = 0x1B4; // float
    public const nint m_flInputBias = 0x1B8; // float
    public const nint m_nStartCP = 0x1BC; // int32_t
    public const nint m_nEndCP = 0x1C0; // int32_t
    public const nint m_nOffsetCP = 0x1C4; // int32_t
    public const nint m_nOuputCP = 0x1C8; // int32_t
    public const nint m_nInputCP = 0x1CC; // int32_t
    public const nint m_bRadialCheck = 0x1D0; // bool
    public const nint m_bScaleOffset = 0x1D1; // bool
    public const nint m_vecOffset = 0x1D4; // Vector
}

public static class C_OP_CPVelocityForce { // CParticleFunctionForce
    public const nint m_nControlPointNumber = 0x1BC; // int32_t
    public const nint m_flScale = 0x1C0; // CPerParticleFloatInput
}

public static class C_OP_CalculateVectorAttribute { // CParticleFunctionOperator
    public const nint m_vStartValue = 0x1B0; // Vector
    public const nint m_nFieldInput1 = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_flInputScale1 = 0x1C0; // float
    public const nint m_nFieldInput2 = 0x1C4; // ParticleAttributeIndex_t
    public const nint m_flInputScale2 = 0x1C8; // float
    public const nint m_nControlPointInput1 = 0x1CC; // ControlPointReference_t
    public const nint m_flControlPointScale1 = 0x1E0; // float
    public const nint m_nControlPointInput2 = 0x1E4; // ControlPointReference_t
    public const nint m_flControlPointScale2 = 0x1F8; // float
    public const nint m_nFieldOutput = 0x1FC; // ParticleAttributeIndex_t
    public const nint m_vFinalOutputScale = 0x200; // Vector
}

public static class C_OP_Callback { // CParticleFunctionRenderer
}

public static class C_OP_ChladniWave { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
    public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    public const nint m_vecWaveLength = 0x6F8; // CPerParticleVecInput
    public const nint m_vecHarmonics = 0xD28; // CPerParticleVecInput
    public const nint m_nSetMethod = 0x1358; // ParticleSetMethod_t
    public const nint m_nLocalSpaceControlPoint = 0x135C; // int32_t
    public const nint m_b3D = 0x1360; // bool
}

public static class C_OP_ChooseRandomChildrenInGroup { // CParticleFunctionPreEmission
    public const nint m_nChildGroupID = 0x1B4; // int32_t
    public const nint m_flNumberOfChildren = 0x1B8; // CParticleCollectionFloatInput
}

public static class C_OP_ClampScalar { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flOutputMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x308; // CPerParticleFloatInput
}

public static class C_OP_ClampVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecOutputMin = 0x1B8; // CPerParticleVecInput
    public const nint m_vecOutputMax = 0x7E8; // CPerParticleVecInput
}

public static class C_OP_CollideWithParentParticles { // CParticleFunctionConstraint
    public const nint m_flParentRadiusScale = 0x1B0; // CPerParticleFloatInput
    public const nint m_flRadiusScale = 0x300; // CPerParticleFloatInput
}

public static class C_OP_CollideWithSelf { // CParticleFunctionConstraint
    public const nint m_flRadiusScale = 0x1B0; // CPerParticleFloatInput
    public const nint m_flMinimumSpeed = 0x300; // CPerParticleFloatInput
}

public static class C_OP_ColorAdjustHSL { // CParticleFunctionOperator
    public const nint m_flHueAdjust = 0x1B0; // CPerParticleFloatInput
    public const nint m_flSaturationAdjust = 0x300; // CPerParticleFloatInput
    public const nint m_flLightnessAdjust = 0x450; // CPerParticleFloatInput
}

public static class C_OP_ColorInterpolate { // CParticleFunctionOperator
    public const nint m_ColorFade = 0x1B0; // Color
    public const nint m_flFadeStartTime = 0x1C0; // float
    public const nint m_flFadeEndTime = 0x1C4; // float
    public const nint m_nFieldOutput = 0x1C8; // ParticleAttributeIndex_t
    public const nint m_bEaseInOut = 0x1CC; // bool
    public const nint m_bUseNewCode = 0x1CD; // bool
}

public static class C_OP_ColorInterpolateRandom { // CParticleFunctionOperator
    public const nint m_ColorFadeMin = 0x1B0; // Color
    public const nint m_ColorFadeMax = 0x1CC; // Color
    public const nint m_flFadeStartTime = 0x1DC; // float
    public const nint m_flFadeEndTime = 0x1E0; // float
    public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
    public const nint m_bEaseInOut = 0x1E8; // bool
}

public static class C_OP_ConnectParentParticleToNearest { // CParticleFunctionOperator
    public const nint m_nFirstControlPoint = 0x1B0; // int32_t
    public const nint m_nSecondControlPoint = 0x1B4; // int32_t
    public const nint m_bUseRadius = 0x1B8; // bool
    public const nint m_flRadiusScale = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_flParentRadiusScale = 0x310; // CParticleCollectionFloatInput
}

public static class C_OP_ConstrainDistance { // CParticleFunctionConstraint
    public const nint m_fMinDistance = 0x1B0; // CParticleCollectionFloatInput
    public const nint m_fMaxDistance = 0x300; // CParticleCollectionFloatInput
    public const nint m_nControlPointNumber = 0x450; // int32_t
    public const nint m_CenterOffset = 0x454; // Vector
    public const nint m_bGlobalCenter = 0x460; // bool
}

public static class C_OP_ConstrainDistanceToPath { // CParticleFunctionConstraint
    public const nint m_fMinDistance = 0x1B0; // float
    public const nint m_flMaxDistance0 = 0x1B4; // float
    public const nint m_flMaxDistanceMid = 0x1B8; // float
    public const nint m_flMaxDistance1 = 0x1BC; // float
    public const nint m_PathParameters = 0x1C0; // CPathParameters
    public const nint m_flTravelTime = 0x200; // float
    public const nint m_nFieldScale = 0x204; // ParticleAttributeIndex_t
    public const nint m_nManualTField = 0x208; // ParticleAttributeIndex_t
}

public static class C_OP_ConstrainDistanceToUserSpecifiedPath { // CParticleFunctionConstraint
    public const nint m_fMinDistance = 0x1B0; // float
    public const nint m_flMaxDistance = 0x1B4; // float
    public const nint m_flTimeScale = 0x1B8; // float
    public const nint m_bLoopedPath = 0x1BC; // bool
    public const nint m_pointList = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
}

public static class C_OP_ConstrainLineLength { // CParticleFunctionConstraint
    public const nint m_flMinDistance = 0x1B0; // float
    public const nint m_flMaxDistance = 0x1B4; // float
}

public static class C_OP_ContinuousEmitter { // CParticleFunctionEmitter
    public const nint m_flEmissionDuration = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flStartTime = 0x308; // CParticleCollectionFloatInput
    public const nint m_flEmitRate = 0x458; // CParticleCollectionFloatInput
    public const nint m_flEmissionScale = 0x5A8; // float
    public const nint m_flScalePerParentParticle = 0x5AC; // float
    public const nint m_bInitFromKilledParentParticles = 0x5B0; // bool
    public const nint m_nSnapshotControlPoint = 0x5B4; // int32_t
    public const nint m_nLimitPerUpdate = 0x5B8; // int32_t
    public const nint m_bForceEmitOnFirstUpdate = 0x5BC; // bool
    public const nint m_bForceEmitOnLastUpdate = 0x5BD; // bool
}

public static class C_OP_ControlPointToRadialScreenSpace { // CParticleFunctionPreEmission
    public const nint m_nCPIn = 0x1B4; // int32_t
    public const nint m_vecCP1Pos = 0x1B8; // Vector
    public const nint m_nCPOut = 0x1C4; // int32_t
    public const nint m_nCPOutField = 0x1C8; // int32_t
    public const nint m_nCPSSPosOut = 0x1CC; // int32_t
}

public static class C_OP_ControlpointLight { // CParticleFunctionOperator
    public const nint m_flScale = 0x1B0; // float
    public const nint m_nControlPoint1 = 0x640; // int32_t
    public const nint m_nControlPoint2 = 0x644; // int32_t
    public const nint m_nControlPoint3 = 0x648; // int32_t
    public const nint m_nControlPoint4 = 0x64C; // int32_t
    public const nint m_vecCPOffset1 = 0x650; // Vector
    public const nint m_vecCPOffset2 = 0x65C; // Vector
    public const nint m_vecCPOffset3 = 0x668; // Vector
    public const nint m_vecCPOffset4 = 0x674; // Vector
    public const nint m_LightFiftyDist1 = 0x680; // float
    public const nint m_LightZeroDist1 = 0x684; // float
    public const nint m_LightFiftyDist2 = 0x688; // float
    public const nint m_LightZeroDist2 = 0x68C; // float
    public const nint m_LightFiftyDist3 = 0x690; // float
    public const nint m_LightZeroDist3 = 0x694; // float
    public const nint m_LightFiftyDist4 = 0x698; // float
    public const nint m_LightZeroDist4 = 0x69C; // float
    public const nint m_LightColor1 = 0x6A0; // Color
    public const nint m_LightColor2 = 0x6A4; // Color
    public const nint m_LightColor3 = 0x6A8; // Color
    public const nint m_LightColor4 = 0x6AC; // Color
    public const nint m_bLightType1 = 0x6B0; // bool
    public const nint m_bLightType2 = 0x6B1; // bool
    public const nint m_bLightType3 = 0x6B2; // bool
    public const nint m_bLightType4 = 0x6B3; // bool
    public const nint m_bLightDynamic1 = 0x6B4; // bool
    public const nint m_bLightDynamic2 = 0x6B5; // bool
    public const nint m_bLightDynamic3 = 0x6B6; // bool
    public const nint m_bLightDynamic4 = 0x6B7; // bool
    public const nint m_bUseNormal = 0x6B8; // bool
    public const nint m_bUseHLambert = 0x6B9; // bool
    public const nint m_bClampLowerRange = 0x6BE; // bool
    public const nint m_bClampUpperRange = 0x6BF; // bool
}

public static class C_OP_Cull { // CParticleFunctionOperator
    public const nint m_flCullPerc = 0x1B0; // float
    public const nint m_flCullStart = 0x1B4; // float
    public const nint m_flCullEnd = 0x1B8; // float
    public const nint m_flCullExp = 0x1BC; // float
}

public static class C_OP_CurlNoiseForce { // CParticleFunctionForce
    public const nint m_nNoiseType = 0x1BC; // ParticleDirectionNoiseType_t
    public const nint m_vecNoiseFreq = 0x1C0; // CPerParticleVecInput
    public const nint m_vecNoiseScale = 0x7F0; // CPerParticleVecInput
    public const nint m_vecOffset = 0xE20; // CPerParticleVecInput
    public const nint m_vecOffsetRate = 0x1450; // CPerParticleVecInput
    public const nint m_flWorleySeed = 0x1A80; // CPerParticleFloatInput
    public const nint m_flWorleyJitter = 0x1BD0; // CPerParticleFloatInput
}

public static class C_OP_CycleScalar { // CParticleFunctionOperator
    public const nint m_nDestField = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flStartValue = 0x1B4; // float
    public const nint m_flEndValue = 0x1B8; // float
    public const nint m_flCycleTime = 0x1BC; // float
    public const nint m_bDoNotRepeatCycle = 0x1C0; // bool
    public const nint m_bSynchronizeParticles = 0x1C1; // bool
    public const nint m_nCPScale = 0x1C4; // int32_t
    public const nint m_nCPFieldMin = 0x1C8; // int32_t
    public const nint m_nCPFieldMax = 0x1CC; // int32_t
    public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
}

public static class C_OP_CylindricalDistanceToTransform { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
    public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    public const nint m_TransformStart = 0x6F8; // CParticleTransformInput
    public const nint m_TransformEnd = 0x758; // CParticleTransformInput
    public const nint m_nSetMethod = 0x7B8; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x7BC; // bool
    public const nint m_bAdditive = 0x7BD; // bool
    public const nint m_bCapsule = 0x7BE; // bool
}

public static class C_OP_DampenToCP { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_flRange = 0x1B4; // float
    public const nint m_flScale = 0x1B8; // float
}

public static class C_OP_Decay { // CParticleFunctionOperator
    public const nint m_bRopeDecay = 0x1B0; // bool
    public const nint m_bForcePreserveParticleOrder = 0x1B1; // bool
}

public static class C_OP_DecayClampCount { // CParticleFunctionOperator
    public const nint m_nCount = 0x1B0; // CParticleCollectionFloatInput
}

public static class C_OP_DecayMaintainCount { // CParticleFunctionOperator
    public const nint m_nParticlesToMaintain = 0x1B0; // int32_t
    public const nint m_flDecayDelay = 0x1B4; // float
    public const nint m_nSnapshotControlPoint = 0x1B8; // int32_t
    public const nint m_bLifespanDecay = 0x1BC; // bool
    public const nint m_flScale = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_bKillNewest = 0x310; // bool
}

public static class C_OP_DecayOffscreen { // CParticleFunctionOperator
    public const nint m_flOffscreenTime = 0x1B0; // CParticleCollectionFloatInput
}

public static class C_OP_DensityForce { // CParticleFunctionForce
    public const nint m_flRadiusScale = 0x1BC; // float
    public const nint m_flForceScale = 0x1C0; // float
    public const nint m_flTargetDensity = 0x1C4; // float
}

public static class C_OP_DifferencePreviousParticle { // CParticleFunctionOperator
    public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // float
    public const nint m_flInputMax = 0x1BC; // float
    public const nint m_flOutputMin = 0x1C0; // float
    public const nint m_flOutputMax = 0x1C4; // float
    public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x1CC; // bool
    public const nint m_bSetPreviousParticle = 0x1CD; // bool
}

public static class C_OP_Diffusion { // CParticleFunctionOperator
    public const nint m_flRadiusScale = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nVoxelGridResolution = 0x1B8; // int32_t
}

public static class C_OP_DirectionBetweenVecsToVec { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecPoint1 = 0x1B8; // CPerParticleVecInput
    public const nint m_vecPoint2 = 0x7E8; // CPerParticleVecInput
}

public static class C_OP_DistanceBetweenCPsToCP { // CParticleFunctionPreEmission
    public const nint m_nStartCP = 0x1B4; // int32_t
    public const nint m_nEndCP = 0x1B8; // int32_t
    public const nint m_nOutputCP = 0x1BC; // int32_t
    public const nint m_nOutputCPField = 0x1C0; // int32_t
    public const nint m_bSetOnce = 0x1C4; // bool
    public const nint m_flInputMin = 0x1C8; // float
    public const nint m_flInputMax = 0x1CC; // float
    public const nint m_flOutputMin = 0x1D0; // float
    public const nint m_flOutputMax = 0x1D4; // float
    public const nint m_flMaxTraceLength = 0x1D8; // float
    public const nint m_flLOSScale = 0x1DC; // float
    public const nint m_bLOS = 0x1E0; // bool
    public const nint m_CollisionGroupName = 0x1E1; // char[128]
    public const nint m_nTraceSet = 0x264; // ParticleTraceSet_t
    public const nint m_nSetParent = 0x268; // ParticleParentSetMode_t
}

public static class C_OP_DistanceBetweenTransforms { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_TransformStart = 0x1B8; // CParticleTransformInput
    public const nint m_TransformEnd = 0x218; // CParticleTransformInput
    public const nint m_flInputMin = 0x278; // CPerParticleFloatInput
    public const nint m_flInputMax = 0x3C8; // CPerParticleFloatInput
    public const nint m_flOutputMin = 0x518; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x668; // CPerParticleFloatInput
    public const nint m_flMaxTraceLength = 0x7B8; // float
    public const nint m_flLOSScale = 0x7BC; // float
    public const nint m_CollisionGroupName = 0x7C0; // char[128]
    public const nint m_nTraceSet = 0x840; // ParticleTraceSet_t
    public const nint m_bLOS = 0x844; // bool
    public const nint m_nSetMethod = 0x848; // ParticleSetMethod_t
}

public static class C_OP_DistanceBetweenVecs { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecPoint1 = 0x1B8; // CPerParticleVecInput
    public const nint m_vecPoint2 = 0x7E8; // CPerParticleVecInput
    public const nint m_flInputMin = 0xE18; // CPerParticleFloatInput
    public const nint m_flInputMax = 0xF68; // CPerParticleFloatInput
    public const nint m_flOutputMin = 0x10B8; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x1208; // CPerParticleFloatInput
    public const nint m_nSetMethod = 0x1358; // ParticleSetMethod_t
    public const nint m_bDeltaTime = 0x135C; // bool
}

public static class C_OP_DistanceCull { // CParticleFunctionOperator
    public const nint m_nControlPoint = 0x1B0; // int32_t
    public const nint m_vecPointOffset = 0x1B4; // Vector
    public const nint m_flDistance = 0x1C0; // float
    public const nint m_bCullInside = 0x1C4; // bool
}

public static class C_OP_DistanceToTransform { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
    public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
    public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
    public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    public const nint m_TransformStart = 0x6F8; // CParticleTransformInput
    public const nint m_bLOS = 0x758; // bool
    public const nint m_CollisionGroupName = 0x759; // char[128]
    public const nint m_nTraceSet = 0x7DC; // ParticleTraceSet_t
    public const nint m_flMaxTraceLength = 0x7E0; // float
    public const nint m_flLOSScale = 0x7E4; // float
    public const nint m_nSetMethod = 0x7E8; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x7EC; // bool
    public const nint m_bAdditive = 0x7ED; // bool
    public const nint m_vecComponentScale = 0x7F0; // CPerParticleVecInput
}

public static class C_OP_DragRelativeToPlane { // CParticleFunctionOperator
    public const nint m_flDragAtPlane = 0x1B0; // CParticleCollectionFloatInput
    public const nint m_flFalloff = 0x300; // CParticleCollectionFloatInput
    public const nint m_bDirectional = 0x450; // bool
    public const nint m_vecPlaneNormal = 0x458; // CParticleCollectionVecInput
    public const nint m_nControlPointNumber = 0xA88; // int32_t
}

public static class C_OP_DriveCPFromGlobalSoundFloat { // CParticleFunctionPreEmission
    public const nint m_nOutputControlPoint = 0x1B4; // int32_t
    public const nint m_nOutputField = 0x1B8; // int32_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
    public const nint m_StackName = 0x1D0; // CUtlString
    public const nint m_OperatorName = 0x1D8; // CUtlString
    public const nint m_FieldName = 0x1E0; // CUtlString
}

public static class C_OP_EnableChildrenFromParentParticleCount { // CParticleFunctionPreEmission
    public const nint m_nChildGroupID = 0x1B4; // int32_t
    public const nint m_nFirstChild = 0x1B8; // int32_t
    public const nint m_nNumChildrenToEnable = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_bDisableChildren = 0x310; // bool
    public const nint m_bPlayEndcapOnStop = 0x311; // bool
    public const nint m_bDestroyImmediately = 0x312; // bool
}

public static class C_OP_EndCapDecay { // CParticleFunctionOperator
}

public static class C_OP_EndCapTimedDecay { // CParticleFunctionOperator
    public const nint m_flDecayTime = 0x1B0; // float
}

public static class C_OP_EndCapTimedFreeze { // CParticleFunctionOperator
    public const nint m_flFreezeTime = 0x1B0; // CParticleCollectionFloatInput
}

public static class C_OP_ExternalGameImpulseForce { // CParticleFunctionForce
    public const nint m_flForceScale = 0x1C0; // CPerParticleFloatInput
    public const nint m_bRopes = 0x310; // bool
    public const nint m_bRopesZOnly = 0x311; // bool
    public const nint m_bExplosions = 0x312; // bool
    public const nint m_bParticles = 0x313; // bool
}

public static class C_OP_ExternalWindForce { // CParticleFunctionForce
    public const nint m_vecSamplePosition = 0x1C0; // CPerParticleVecInput
    public const nint m_vecScale = 0x7F0; // CPerParticleVecInput
    public const nint m_bSampleWind = 0xE20; // bool
    public const nint m_bSampleWater = 0xE21; // bool
    public const nint m_bDampenNearWaterPlane = 0xE22; // bool
    public const nint m_bSampleGravity = 0xE23; // bool
    public const nint m_vecGravityForce = 0xE28; // CPerParticleVecInput
    public const nint m_bUseBasicMovementGravity = 0x1458; // bool
    public const nint m_flLocalGravityScale = 0x1460; // CPerParticleFloatInput
    public const nint m_flLocalBuoyancyScale = 0x15B0; // CPerParticleFloatInput
    public const nint m_vecBuoyancyForce = 0x1700; // CPerParticleVecInput
}

public static class C_OP_FadeAndKill { // CParticleFunctionOperator
    public const nint m_flStartFadeInTime = 0x1B0; // float
    public const nint m_flEndFadeInTime = 0x1B4; // float
    public const nint m_flStartFadeOutTime = 0x1B8; // float
    public const nint m_flEndFadeOutTime = 0x1BC; // float
    public const nint m_flStartAlpha = 0x1C0; // float
    public const nint m_flEndAlpha = 0x1C4; // float
    public const nint m_bForcePreserveParticleOrder = 0x1C8; // bool
}

public static class C_OP_FadeAndKillForTracers { // CParticleFunctionOperator
    public const nint m_flStartFadeInTime = 0x1B0; // float
    public const nint m_flEndFadeInTime = 0x1B4; // float
    public const nint m_flStartFadeOutTime = 0x1B8; // float
    public const nint m_flEndFadeOutTime = 0x1BC; // float
    public const nint m_flStartAlpha = 0x1C0; // float
    public const nint m_flEndAlpha = 0x1C4; // float
}

public static class C_OP_FadeIn { // CParticleFunctionOperator
    public const nint m_flFadeInTimeMin = 0x1B0; // float
    public const nint m_flFadeInTimeMax = 0x1B4; // float
    public const nint m_flFadeInTimeExp = 0x1B8; // float
    public const nint m_bProportional = 0x1BC; // bool
}

public static class C_OP_FadeInSimple { // CParticleFunctionOperator
    public const nint m_flFadeInTime = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

public static class C_OP_FadeOut { // CParticleFunctionOperator
    public const nint m_flFadeOutTimeMin = 0x1B0; // float
    public const nint m_flFadeOutTimeMax = 0x1B4; // float
    public const nint m_flFadeOutTimeExp = 0x1B8; // float
    public const nint m_flFadeBias = 0x1BC; // float
    public const nint m_bProportional = 0x1F0; // bool
    public const nint m_bEaseInAndOut = 0x1F1; // bool
}

public static class C_OP_FadeOutSimple { // CParticleFunctionOperator
    public const nint m_flFadeOutTime = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

public static class C_OP_ForceBasedOnDistanceToPlane { // CParticleFunctionForce
    public const nint m_flMinDist = 0x1BC; // float
    public const nint m_vecForceAtMinDist = 0x1C0; // Vector
    public const nint m_flMaxDist = 0x1CC; // float
    public const nint m_vecForceAtMaxDist = 0x1D0; // Vector
    public const nint m_vecPlaneNormal = 0x1DC; // Vector
    public const nint m_nControlPointNumber = 0x1E8; // int32_t
    public const nint m_flExponent = 0x1EC; // float
}

public static class C_OP_ForceControlPointStub { // CParticleFunctionPreEmission
    public const nint m_ControlPoint = 0x1B4; // int32_t
}

public static class C_OP_GlobalLight { // CParticleFunctionOperator
    public const nint m_flScale = 0x1B0; // float
    public const nint m_bClampLowerRange = 0x1B4; // bool
    public const nint m_bClampUpperRange = 0x1B5; // bool
}

public static class C_OP_HSVShiftToCP { // CParticleFunctionPreEmission
    public const nint m_nColorCP = 0x1B4; // int32_t
    public const nint m_nColorGemEnableCP = 0x1B8; // int32_t
    public const nint m_nOutputCP = 0x1BC; // int32_t
    public const nint m_DefaultHSVColor = 0x1C0; // Color
}

public static class C_OP_InheritFromParentParticles { // CParticleFunctionOperator
    public const nint m_flScale = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nIncrement = 0x1B8; // int32_t
    public const nint m_bRandomDistribution = 0x1BC; // bool
}

public static class C_OP_InheritFromParentParticlesV2 { // CParticleFunctionOperator
    public const nint m_flScale = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nIncrement = 0x1B8; // int32_t
    public const nint m_bRandomDistribution = 0x1BC; // bool
    public const nint m_nMissingParentBehavior = 0x1C0; // MissingParentInheritBehavior_t
}

public static class C_OP_InheritFromPeerSystem { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nIncrement = 0x1B8; // int32_t
    public const nint m_nGroupID = 0x1BC; // int32_t
}

public static class C_OP_InstantaneousEmitter { // CParticleFunctionEmitter
    public const nint m_nParticlesToEmit = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flStartTime = 0x308; // CParticleCollectionFloatInput
    public const nint m_flInitFromKilledParentParticles = 0x458; // float
    public const nint m_flParentParticleScale = 0x460; // CParticleCollectionFloatInput
    public const nint m_nMaxEmittedPerFrame = 0x5B0; // int32_t
    public const nint m_nSnapshotControlPoint = 0x5B4; // int32_t
}

public static class C_OP_InterpolateRadius { // CParticleFunctionOperator
    public const nint m_flStartTime = 0x1B0; // float
    public const nint m_flEndTime = 0x1B4; // float
    public const nint m_flStartScale = 0x1B8; // float
    public const nint m_flEndScale = 0x1BC; // float
    public const nint m_bEaseInAndOut = 0x1C0; // bool
    public const nint m_flBias = 0x1C4; // float
}

public static class C_OP_LagCompensation { // CParticleFunctionOperator
    public const nint m_nDesiredVelocityCP = 0x1B0; // int32_t
    public const nint m_nLatencyCP = 0x1B4; // int32_t
    public const nint m_nLatencyCPField = 0x1B8; // int32_t
    public const nint m_nDesiredVelocityCPField = 0x1BC; // int32_t
}

public static class C_OP_LerpEndCapScalar { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flOutput = 0x1B4; // float
    public const nint m_flLerpTime = 0x1B8; // float
}

public static class C_OP_LerpEndCapVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecOutput = 0x1B4; // Vector
    public const nint m_flLerpTime = 0x1C0; // float
}

public static class C_OP_LerpScalar { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flOutput = 0x1B8; // CPerParticleFloatInput
    public const nint m_flStartTime = 0x308; // float
    public const nint m_flEndTime = 0x30C; // float
}

public static class C_OP_LerpToInitialPosition { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_flInterpolation = 0x1B8; // CPerParticleFloatInput
    public const nint m_nCacheField = 0x308; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x310; // CParticleCollectionFloatInput
    public const nint m_vecScale = 0x460; // CParticleCollectionVecInput
}

public static class C_OP_LerpToOtherAttribute { // CParticleFunctionOperator
    public const nint m_flInterpolation = 0x1B0; // CPerParticleFloatInput
    public const nint m_nFieldInputFrom = 0x300; // ParticleAttributeIndex_t
    public const nint m_nFieldInput = 0x304; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x308; // ParticleAttributeIndex_t
}

public static class C_OP_LerpVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecOutput = 0x1B4; // Vector
    public const nint m_flStartTime = 0x1C0; // float
    public const nint m_flEndTime = 0x1C4; // float
    public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
}

public static class C_OP_LightningSnapshotGenerator { // CParticleFunctionPreEmission
    public const nint m_nCPSnapshot = 0x1B4; // int32_t
    public const nint m_nCPStartPnt = 0x1B8; // int32_t
    public const nint m_nCPEndPnt = 0x1BC; // int32_t
    public const nint m_flSegments = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_flOffset = 0x310; // CParticleCollectionFloatInput
    public const nint m_flOffsetDecay = 0x460; // CParticleCollectionFloatInput
    public const nint m_flRecalcRate = 0x5B0; // CParticleCollectionFloatInput
    public const nint m_flUVScale = 0x700; // CParticleCollectionFloatInput
    public const nint m_flUVOffset = 0x850; // CParticleCollectionFloatInput
    public const nint m_flSplitRate = 0x9A0; // CParticleCollectionFloatInput
    public const nint m_flBranchTwist = 0xAF0; // CParticleCollectionFloatInput
    public const nint m_nBranchBehavior = 0xC40; // ParticleLightnintBranchBehavior_t
    public const nint m_flRadiusStart = 0xC48; // CParticleCollectionFloatInput
    public const nint m_flRadiusEnd = 0xD98; // CParticleCollectionFloatInput
    public const nint m_flDedicatedPool = 0xEE8; // CParticleCollectionFloatInput
}

public static class C_OP_LocalAccelerationForce { // CParticleFunctionForce
    public const nint m_nCP = 0x1BC; // int32_t
    public const nint m_nScaleCP = 0x1C0; // int32_t
    public const nint m_vecAccel = 0x1C8; // CParticleCollectionVecInput
}

public static class C_OP_LockPoints { // CParticleFunctionOperator
    public const nint m_nMinCol = 0x1B0; // int32_t
    public const nint m_nMaxCol = 0x1B4; // int32_t
    public const nint m_nMinRow = 0x1B8; // int32_t
    public const nint m_nMaxRow = 0x1BC; // int32_t
    public const nint m_nControlPoint = 0x1C0; // int32_t
    public const nint m_flBlendValue = 0x1C4; // float
}

public static class C_OP_LockToBone { // CParticleFunctionOperator
    public const nint m_modelInput = 0x1B0; // CParticleModelInput
    public const nint m_transformInput = 0x208; // CParticleTransformInput
    public const nint m_flLifeTimeFadeStart = 0x268; // float
    public const nint m_flLifeTimeFadeEnd = 0x26C; // float
    public const nint m_flJumpThreshold = 0x270; // float
    public const nint m_flPrevPosScale = 0x274; // float
    public const nint m_HitboxSetName = 0x278; // char[128]
    public const nint m_bRigid = 0x2F8; // bool
    public const nint m_bUseBones = 0x2F9; // bool
    public const nint m_nFieldOutput = 0x2FC; // ParticleAttributeIndex_t
    public const nint m_nFieldOutputPrev = 0x300; // ParticleAttributeIndex_t
    public const nint m_nRotationSetType = 0x304; // ParticleRotationLockType_t
    public const nint m_bRigidRotationLock = 0x308; // bool
    public const nint m_vecRotation = 0x310; // CPerParticleVecInput
    public const nint m_flRotLerp = 0x940; // CPerParticleFloatInput
}

public static class C_OP_LockToPointList { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
    public const nint m_bPlaceAlongPath = 0x1D0; // bool
    public const nint m_bClosedLoop = 0x1D1; // bool
    public const nint m_nNumPointsAlongPath = 0x1D4; // int32_t
}

public static class C_OP_LockToSavedSequentialPath { // CParticleFunctionOperator
    public const nint m_flFadeStart = 0x1B4; // float
    public const nint m_flFadeEnd = 0x1B8; // float
    public const nint m_bCPPairs = 0x1BC; // bool
    public const nint m_PathParams = 0x1C0; // CPathParameters
}

public static class C_OP_LockToSavedSequentialPathV2 { // CParticleFunctionOperator
    public const nint m_flFadeStart = 0x1B0; // float
    public const nint m_flFadeEnd = 0x1B4; // float
    public const nint m_bCPPairs = 0x1B8; // bool
    public const nint m_PathParams = 0x1C0; // CPathParameters
}

public static class C_OP_MaintainEmitter { // CParticleFunctionEmitter
    public const nint m_nParticlesToMaintain = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flStartTime = 0x308; // float
    public const nint m_flEmissionDuration = 0x310; // CParticleCollectionFloatInput
    public const nint m_flEmissionRate = 0x460; // float
    public const nint m_nSnapshotControlPoint = 0x464; // int32_t
    public const nint m_bEmitInstantaneously = 0x468; // bool
    public const nint m_bFinalEmitOnStop = 0x469; // bool
    public const nint m_flScale = 0x470; // CParticleCollectionFloatInput
}

public static class C_OP_MaintainSequentialPath { // CParticleFunctionOperator
    public const nint m_fMaxDistance = 0x1B0; // float
    public const nint m_flNumToAssign = 0x1B4; // float
    public const nint m_flCohesionStrength = 0x1B8; // float
    public const nint m_flTolerance = 0x1BC; // float
    public const nint m_bLoop = 0x1C0; // bool
    public const nint m_bUseParticleCount = 0x1C1; // bool
    public const nint m_PathParams = 0x1D0; // CPathParameters
}

public static class C_OP_MaxVelocity { // CParticleFunctionOperator
    public const nint m_flMaxVelocity = 0x1B0; // float
    public const nint m_flMinVelocity = 0x1B4; // float
    public const nint m_nOverrideCP = 0x1B8; // int32_t
    public const nint m_nOverrideCPField = 0x1BC; // int32_t
}

public static class C_OP_ModelCull { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_bBoundBox = 0x1B4; // bool
    public const nint m_bCullOutside = 0x1B5; // bool
    public const nint m_bUseBones = 0x1B6; // bool
    public const nint m_HitboxSetName = 0x1B7; // char[128]
}

public static class C_OP_ModelDampenMovement { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_bBoundBox = 0x1B4; // bool
    public const nint m_bOutside = 0x1B5; // bool
    public const nint m_bUseBones = 0x1B6; // bool
    public const nint m_HitboxSetName = 0x1B7; // char[128]
    public const nint m_vecPosOffset = 0x238; // CPerParticleVecInput
    public const nint m_fDrag = 0x868; // float
}

public static class C_OP_MoveToHitbox { // CParticleFunctionOperator
    public const nint m_modelInput = 0x1B0; // CParticleModelInput
    public const nint m_transformInput = 0x208; // CParticleTransformInput
    public const nint m_flLifeTimeLerpStart = 0x26C; // float
    public const nint m_flLifeTimeLerpEnd = 0x270; // float
    public const nint m_flPrevPosScale = 0x274; // float
    public const nint m_HitboxSetName = 0x278; // char[128]
    public const nint m_bUseBones = 0x2F8; // bool
    public const nint m_nLerpType = 0x2FC; // HitboxLerpType_t
    public const nint m_flInterpolation = 0x300; // CPerParticleFloatInput
}

public static class C_OP_MovementLoopInsideSphere { // CParticleFunctionOperator
    public const nint m_nCP = 0x1B0; // int32_t
    public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_vecScale = 0x308; // CParticleCollectionVecInput
    public const nint m_nDistSqrAttr = 0x938; // ParticleAttributeIndex_t
}

public static class C_OP_MovementMaintainOffset { // CParticleFunctionOperator
    public const nint m_vecOffset = 0x1B0; // Vector
    public const nint m_nCP = 0x1BC; // int32_t
    public const nint m_bRadiusScale = 0x1C0; // bool
}

public static class C_OP_MovementMoveAlongSkinnedCPSnapshot { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_nSnapshotControlPointNumber = 0x1B4; // int32_t
    public const nint m_bSetNormal = 0x1B8; // bool
    public const nint m_bSetRadius = 0x1B9; // bool
    public const nint m_flInterpolation = 0x1C0; // CPerParticleFloatInput
    public const nint m_flTValue = 0x310; // CPerParticleFloatInput
}

public static class C_OP_MovementPlaceOnGround { // CParticleFunctionOperator
    public const nint m_flOffset = 0x1B0; // CPerParticleFloatInput
    public const nint m_flMaxTraceLength = 0x300; // float
    public const nint m_flTolerance = 0x304; // float
    public const nint m_flTraceOffset = 0x308; // float
    public const nint m_flLerpRate = 0x30C; // float
    public const nint m_CollisionGroupName = 0x310; // char[128]
    public const nint m_nTraceSet = 0x390; // ParticleTraceSet_t
    public const nint m_nRefCP1 = 0x394; // int32_t
    public const nint m_nRefCP2 = 0x398; // int32_t
    public const nint m_nLerpCP = 0x39C; // int32_t
    public const nint m_nTraceMissBehavior = 0x3A8; // ParticleTraceMissBehavior_t
    public const nint m_bIncludeShotHull = 0x3AC; // bool
    public const nint m_bIncludeWater = 0x3AD; // bool
    public const nint m_bSetNormal = 0x3B0; // bool
    public const nint m_bScaleOffset = 0x3B1; // bool
    public const nint m_nPreserveOffsetCP = 0x3B4; // int32_t
    public const nint m_nIgnoreCP = 0x3B8; // int32_t
}

public static class C_OP_MovementRigidAttachToCP { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_nScaleControlPoint = 0x1B4; // int32_t
    public const nint m_nScaleCPField = 0x1B8; // int32_t
    public const nint m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
    public const nint m_bOffsetLocal = 0x1C4; // bool
}

public static class C_OP_MovementRotateParticleAroundAxis { // CParticleFunctionOperator
    public const nint m_vecRotAxis = 0x1B0; // CParticleCollectionVecInput
    public const nint m_flRotRate = 0x7E0; // CParticleCollectionFloatInput
    public const nint m_TransformInput = 0x930; // CParticleTransformInput
    public const nint m_bLocalSpace = 0x990; // bool
}

public static class C_OP_MovementSkinnedPositionFromCPSnapshot { // CParticleFunctionOperator
    public const nint m_nSnapshotControlPointNumber = 0x1B0; // int32_t
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_bRandom = 0x1B8; // bool
    public const nint m_nRandomSeed = 0x1BC; // int32_t
    public const nint m_bSetNormal = 0x1C0; // bool
    public const nint m_bSetRadius = 0x1C1; // bool
    public const nint m_nIndexType = 0x1C4; // SnapshotIndexType_t
    public const nint m_flReadIndex = 0x1C8; // CPerParticleFloatInput
    public const nint m_flIncrement = 0x318; // CParticleCollectionFloatInput
    public const nint m_nFullLoopIncrement = 0x468; // CParticleCollectionFloatInput
    public const nint m_nSnapShotStartPoint = 0x5B8; // CParticleCollectionFloatInput
    public const nint m_flInterpolation = 0x708; // CPerParticleFloatInput
}

public static class C_OP_Noise { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flOutputMin = 0x1B4; // float
    public const nint m_flOutputMax = 0x1B8; // float
    public const nint m_fl4NoiseScale = 0x1BC; // float
    public const nint m_bAdditive = 0x1C0; // bool
    public const nint m_flNoiseAnimationTimeScale = 0x1C4; // float
}

public static class C_OP_NoiseEmitter { // CParticleFunctionEmitter
    public const nint m_flEmissionDuration = 0x1B4; // float
    public const nint m_flStartTime = 0x1B8; // float
    public const nint m_flEmissionScale = 0x1BC; // float
    public const nint m_nScaleControlPoint = 0x1C0; // int32_t
    public const nint m_nScaleControlPointField = 0x1C4; // int32_t
    public const nint m_nWorldNoisePoint = 0x1C8; // int32_t
    public const nint m_bAbsVal = 0x1CC; // bool
    public const nint m_bAbsValInv = 0x1CD; // bool
    public const nint m_flOffset = 0x1D0; // float
    public const nint m_flOutputMin = 0x1D4; // float
    public const nint m_flOutputMax = 0x1D8; // float
    public const nint m_flNoiseScale = 0x1DC; // float
    public const nint m_flWorldNoiseScale = 0x1E0; // float
    public const nint m_vecOffsetLoc = 0x1E4; // Vector
    public const nint m_flWorldTimeScale = 0x1F0; // float
}

public static class C_OP_NormalLock { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
}

public static class C_OP_NormalizeVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x1B4; // float
}

public static class C_OP_Orient2DRelToCP { // CParticleFunctionOperator
    public const nint m_flRotOffset = 0x1B0; // float
    public const nint m_flSpinStrength = 0x1B4; // float
    public const nint m_nCP = 0x1B8; // int32_t
    public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
}

public static class C_OP_OrientTo2dDirection { // CParticleFunctionOperator
    public const nint m_flRotOffset = 0x1B0; // float
    public const nint m_flSpinStrength = 0x1B4; // float
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
}

public static class C_OP_OscillateScalar { // CParticleFunctionOperator
    public const nint m_RateMin = 0x1B0; // float
    public const nint m_RateMax = 0x1B4; // float
    public const nint m_FrequencyMin = 0x1B8; // float
    public const nint m_FrequencyMax = 0x1BC; // float
    public const nint m_nField = 0x1C0; // ParticleAttributeIndex_t
    public const nint m_bProportional = 0x1C4; // bool
    public const nint m_bProportionalOp = 0x1C5; // bool
    public const nint m_flStartTime_min = 0x1C8; // float
    public const nint m_flStartTime_max = 0x1CC; // float
    public const nint m_flEndTime_min = 0x1D0; // float
    public const nint m_flEndTime_max = 0x1D4; // float
    public const nint m_flOscMult = 0x1D8; // float
    public const nint m_flOscAdd = 0x1DC; // float
}

public static class C_OP_OscillateScalarSimple { // CParticleFunctionOperator
    public const nint m_Rate = 0x1B0; // float
    public const nint m_Frequency = 0x1B4; // float
    public const nint m_nField = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flOscMult = 0x1BC; // float
    public const nint m_flOscAdd = 0x1C0; // float
}

public static class C_OP_OscillateVector { // CParticleFunctionOperator
    public const nint m_RateMin = 0x1B0; // Vector
    public const nint m_RateMax = 0x1BC; // Vector
    public const nint m_FrequencyMin = 0x1C8; // Vector
    public const nint m_FrequencyMax = 0x1D4; // Vector
    public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
    public const nint m_bProportional = 0x1E4; // bool
    public const nint m_bProportionalOp = 0x1E5; // bool
    public const nint m_bOffset = 0x1E6; // bool
    public const nint m_flStartTime_min = 0x1E8; // float
    public const nint m_flStartTime_max = 0x1EC; // float
    public const nint m_flEndTime_min = 0x1F0; // float
    public const nint m_flEndTime_max = 0x1F4; // float
    public const nint m_flOscMult = 0x1F8; // CPerParticleFloatInput
    public const nint m_flOscAdd = 0x348; // CPerParticleFloatInput
    public const nint m_flRateScale = 0x498; // CPerParticleFloatInput
}

public static class C_OP_OscillateVectorSimple { // CParticleFunctionOperator
    public const nint m_Rate = 0x1B0; // Vector
    public const nint m_Frequency = 0x1BC; // Vector
    public const nint m_nField = 0x1C8; // ParticleAttributeIndex_t
    public const nint m_flOscMult = 0x1CC; // float
    public const nint m_flOscAdd = 0x1D0; // float
    public const nint m_bOffset = 0x1D4; // bool
}

public static class C_OP_ParentVortices { // CParticleFunctionForce
    public const nint m_flForceScale = 0x1BC; // float
    public const nint m_vecTwistAxis = 0x1C0; // Vector
    public const nint m_bFlipBasedOnYaw = 0x1CC; // bool
}

public static class C_OP_ParticlePhysics { // CParticleFunctionOperator
    public const nint m_Gravity = 0x1B0; // CParticleCollectionVecInput
    public const nint m_fDrag = 0x7E0; // CParticleCollectionFloatInput
    public const nint m_nMaxConstraintPasses = 0x930; // int32_t
}

public static class C_OP_PerParticleForce { // CParticleFunctionForce
    public const nint m_flForceScale = 0x1C0; // CPerParticleFloatInput
    public const nint m_vForce = 0x310; // CPerParticleVecInput
    public const nint m_nCP = 0x940; // int32_t
}

public static class C_OP_PercentageBetweenTransformLerpCPs { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B4; // float
    public const nint m_flInputMax = 0x1B8; // float
    public const nint m_TransformStart = 0x1C0; // CParticleTransformInput
    public const nint m_TransformEnd = 0x220; // CParticleTransformInput
    public const nint m_nOutputStartCP = 0x280; // int32_t
    public const nint m_nOutputStartField = 0x284; // int32_t
    public const nint m_nOutputEndCP = 0x288; // int32_t
    public const nint m_nOutputEndField = 0x28C; // int32_t
    public const nint m_nSetMethod = 0x290; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x294; // bool
    public const nint m_bRadialCheck = 0x295; // bool
}

public static class C_OP_PercentageBetweenTransforms { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B4; // float
    public const nint m_flInputMax = 0x1B8; // float
    public const nint m_flOutputMin = 0x1BC; // float
    public const nint m_flOutputMax = 0x1C0; // float
    public const nint m_TransformStart = 0x1C8; // CParticleTransformInput
    public const nint m_TransformEnd = 0x228; // CParticleTransformInput
    public const nint m_nSetMethod = 0x288; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x28C; // bool
    public const nint m_bRadialCheck = 0x28D; // bool
}

public static class C_OP_PercentageBetweenTransformsVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B4; // float
    public const nint m_flInputMax = 0x1B8; // float
    public const nint m_vecOutputMin = 0x1BC; // Vector
    public const nint m_vecOutputMax = 0x1C8; // Vector
    public const nint m_TransformStart = 0x1D8; // CParticleTransformInput
    public const nint m_TransformEnd = 0x238; // CParticleTransformInput
    public const nint m_nSetMethod = 0x298; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x29C; // bool
    public const nint m_bRadialCheck = 0x29D; // bool
}

public static class C_OP_PinParticleToCP { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_vecOffset = 0x1B8; // CParticleCollectionVecInput
    public const nint m_bOffsetLocal = 0x7E8; // bool
    public const nint m_nParticleSelection = 0x7EC; // ParticleSelection_t
    public const nint m_nParticleNumber = 0x7F0; // CParticleCollectionFloatInput
    public const nint m_nPinBreakType = 0x940; // ParticlePinDistance_t
    public const nint m_flBreakDistance = 0x948; // CParticleCollectionFloatInput
    public const nint m_flBreakSpeed = 0xA98; // CParticleCollectionFloatInput
    public const nint m_flAge = 0xBE8; // CParticleCollectionFloatInput
    public const nint m_nBreakControlPointNumber = 0xD38; // int32_t
    public const nint m_nBreakControlPointNumber2 = 0xD3C; // int32_t
    public const nint m_flBreakValue = 0xD40; // CParticleCollectionFloatInput
    public const nint m_flInterpolation = 0xE90; // CPerParticleFloatInput
}

public static class C_OP_PlanarConstraint { // CParticleFunctionConstraint
    public const nint m_PointOnPlane = 0x1B0; // Vector
    public const nint m_PlaneNormal = 0x1BC; // Vector
    public const nint m_nControlPointNumber = 0x1C8; // int32_t
    public const nint m_bGlobalOrigin = 0x1CC; // bool
    public const nint m_bGlobalNormal = 0x1CD; // bool
    public const nint m_flRadiusScale = 0x1D0; // CPerParticleFloatInput
    public const nint m_flMaximumDistanceToCP = 0x320; // CParticleCollectionFloatInput
    public const nint m_bUseOldCode = 0x470; // bool
}

public static class C_OP_PlaneCull { // CParticleFunctionOperator
    public const nint m_nPlaneControlPoint = 0x1B0; // int32_t
    public const nint m_vecPlaneDirection = 0x1B4; // Vector
    public const nint m_bLocalSpace = 0x1C0; // bool
    public const nint m_flPlaneOffset = 0x1C4; // float
}

public static class C_OP_PlayEndCapWhenFinished { // CParticleFunctionPreEmission
    public const nint m_bFireOnEmissionEnd = 0x1B1; // bool
    public const nint m_bIncludeChildren = 0x1B2; // bool
}

public static class C_OP_PointVectorAtNextParticle { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInterpolation = 0x1B8; // CPerParticleFloatInput
}

public static class C_OP_PositionLock { // CParticleFunctionOperator
    public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
    public const nint m_flStartTime_min = 0x210; // float
    public const nint m_flStartTime_max = 0x214; // float
    public const nint m_flStartTime_exp = 0x218; // float
    public const nint m_flEndTime_min = 0x21C; // float
    public const nint m_flEndTime_max = 0x220; // float
    public const nint m_flEndTime_exp = 0x224; // float
    public const nint m_flRange = 0x228; // float
    public const nint m_flRangeBias = 0x230; // CParticleCollectionFloatInput
    public const nint m_flJumpThreshold = 0x380; // float
    public const nint m_flPrevPosScale = 0x384; // float
    public const nint m_bLockRot = 0x388; // bool
    public const nint m_vecScale = 0x390; // CParticleCollectionVecInput
    public const nint m_nFieldOutput = 0x9C0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutputPrev = 0x9C4; // ParticleAttributeIndex_t
}

public static class C_OP_QuantizeCPComponent { // CParticleFunctionPreEmission
    public const nint m_flInputValue = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_nCPOutput = 0x308; // int32_t
    public const nint m_nOutVectorField = 0x30C; // int32_t
    public const nint m_flQuantizeValue = 0x310; // CParticleCollectionFloatInput
}

public static class C_OP_QuantizeFloat { // CParticleFunctionOperator
    public const nint m_InputValue = 0x1B0; // CPerParticleFloatInput
    public const nint m_nOutputField = 0x300; // ParticleAttributeIndex_t
}

public static class C_OP_RadiusDecay { // CParticleFunctionOperator
    public const nint m_flMinRadius = 0x1B0; // float
}

public static class C_OP_RampCPLinearRandom { // CParticleFunctionPreEmission
    public const nint m_nOutControlPointNumber = 0x1B4; // int32_t
    public const nint m_vecRateMin = 0x1B8; // Vector
    public const nint m_vecRateMax = 0x1C4; // Vector
}

public static class C_OP_RampScalarLinear { // CParticleFunctionOperator
    public const nint m_RateMin = 0x1B0; // float
    public const nint m_RateMax = 0x1B4; // float
    public const nint m_flStartTime_min = 0x1B8; // float
    public const nint m_flStartTime_max = 0x1BC; // float
    public const nint m_flEndTime_min = 0x1C0; // float
    public const nint m_flEndTime_max = 0x1C4; // float
    public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
    public const nint m_bProportionalOp = 0x1F4; // bool
}

public static class C_OP_RampScalarLinearSimple { // CParticleFunctionOperator
    public const nint m_Rate = 0x1B0; // float
    public const nint m_flStartTime = 0x1B4; // float
    public const nint m_flEndTime = 0x1B8; // float
    public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
}

public static class C_OP_RampScalarSpline { // CParticleFunctionOperator
    public const nint m_RateMin = 0x1B0; // float
    public const nint m_RateMax = 0x1B4; // float
    public const nint m_flStartTime_min = 0x1B8; // float
    public const nint m_flStartTime_max = 0x1BC; // float
    public const nint m_flEndTime_min = 0x1C0; // float
    public const nint m_flEndTime_max = 0x1C4; // float
    public const nint m_flBias = 0x1C8; // float
    public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
    public const nint m_bProportionalOp = 0x1F4; // bool
    public const nint m_bEaseOut = 0x1F5; // bool
}

public static class C_OP_RampScalarSplineSimple { // CParticleFunctionOperator
    public const nint m_Rate = 0x1B0; // float
    public const nint m_flStartTime = 0x1B4; // float
    public const nint m_flEndTime = 0x1B8; // float
    public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
    public const nint m_bEaseOut = 0x1E4; // bool
}

public static class C_OP_RandomForce { // CParticleFunctionForce
    public const nint m_MinForce = 0x1BC; // Vector
    public const nint m_MaxForce = 0x1C8; // Vector
}

public static class C_OP_ReadFromNeighboringParticle { // CParticleFunctionOperator
    public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nIncrement = 0x1B8; // int32_t
    public const nint m_DistanceCheck = 0x1C0; // CPerParticleFloatInput
    public const nint m_flInterpolation = 0x310; // CPerParticleFloatInput
}

public static class C_OP_ReinitializeScalarEndCap { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flOutputMin = 0x1B4; // float
    public const nint m_flOutputMax = 0x1B8; // float
}

public static class C_OP_RemapAverageHitboxSpeedtoCP { // CParticleFunctionPreEmission
    public const nint m_nInControlPointNumber = 0x1B4; // int32_t
    public const nint m_nOutControlPointNumber = 0x1B8; // int32_t
    public const nint m_nField = 0x1BC; // int32_t
    public const nint m_nHitboxDataType = 0x1C0; // ParticleHitboxDataSelection_t
    public const nint m_flInputMin = 0x1C8; // CParticleCollectionFloatInput
    public const nint m_flInputMax = 0x318; // CParticleCollectionFloatInput
    public const nint m_flOutputMin = 0x468; // CParticleCollectionFloatInput
    public const nint m_flOutputMax = 0x5B8; // CParticleCollectionFloatInput
    public const nint m_nHeightControlPointNumber = 0x708; // int32_t
    public const nint m_vecComparisonVelocity = 0x710; // CParticleCollectionVecInput
    public const nint m_HitboxSetName = 0xD40; // char[128]
}

public static class C_OP_RemapAverageScalarValuetoCP { // CParticleFunctionPreEmission
    public const nint m_nOutControlPointNumber = 0x1B4; // int32_t
    public const nint m_nOutVectorField = 0x1B8; // int32_t
    public const nint m_nField = 0x1BC; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1C0; // float
    public const nint m_flInputMax = 0x1C4; // float
    public const nint m_flOutputMin = 0x1C8; // float
    public const nint m_flOutputMax = 0x1CC; // float
}

public static class C_OP_RemapBoundingVolumetoCP { // CParticleFunctionPreEmission
    public const nint m_nOutControlPointNumber = 0x1B4; // int32_t
    public const nint m_flInputMin = 0x1B8; // float
    public const nint m_flInputMax = 0x1BC; // float
    public const nint m_flOutputMin = 0x1C0; // float
    public const nint m_flOutputMax = 0x1C4; // float
}

public static class C_OP_RemapCPVelocityToVector { // CParticleFunctionOperator
    public const nint m_nControlPoint = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x1B8; // float
    public const nint m_bNormalize = 0x1BC; // bool
}

public static class C_OP_RemapCPtoCP { // CParticleFunctionPreEmission
    public const nint m_nInputControlPoint = 0x1B4; // int32_t
    public const nint m_nOutputControlPoint = 0x1B8; // int32_t
    public const nint m_nInputField = 0x1BC; // int32_t
    public const nint m_nOutputField = 0x1C0; // int32_t
    public const nint m_flInputMin = 0x1C4; // float
    public const nint m_flInputMax = 0x1C8; // float
    public const nint m_flOutputMin = 0x1CC; // float
    public const nint m_flOutputMax = 0x1D0; // float
    public const nint m_bDerivative = 0x1D4; // bool
    public const nint m_flInterpRate = 0x1D8; // float
}

public static class C_OP_RemapCPtoScalar { // CParticleFunctionOperator
    public const nint m_nCPInput = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nField = 0x1B8; // int32_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
    public const nint m_flStartTime = 0x1CC; // float
    public const nint m_flEndTime = 0x1D0; // float
    public const nint m_flInterpRate = 0x1D4; // float
    public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
}

public static class C_OP_RemapCPtoVector { // CParticleFunctionOperator
    public const nint m_nCPInput = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nLocalSpaceCP = 0x1B8; // int32_t
    public const nint m_vInputMin = 0x1BC; // Vector
    public const nint m_vInputMax = 0x1C8; // Vector
    public const nint m_vOutputMin = 0x1D4; // Vector
    public const nint m_vOutputMax = 0x1E0; // Vector
    public const nint m_flStartTime = 0x1EC; // float
    public const nint m_flEndTime = 0x1F0; // float
    public const nint m_flInterpRate = 0x1F4; // float
    public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
    public const nint m_bOffset = 0x1FC; // bool
    public const nint m_bAccelerate = 0x1FD; // bool
}

public static class C_OP_RemapControlPointDirectionToVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x1B4; // float
    public const nint m_nControlPointNumber = 0x1B8; // int32_t
}

public static class C_OP_RemapControlPointOrientationToRotation { // CParticleFunctionOperator
    public const nint m_nCP = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flOffsetRot = 0x1B8; // float
    public const nint m_nComponent = 0x1BC; // int32_t
}

public static class C_OP_RemapCrossProductOfTwoVectorsToVector { // CParticleFunctionOperator
    public const nint m_InputVec1 = 0x1B0; // CPerParticleVecInput
    public const nint m_InputVec2 = 0x7E0; // CPerParticleVecInput
    public const nint m_nFieldOutput = 0xE10; // ParticleAttributeIndex_t
    public const nint m_bNormalize = 0xE14; // bool
}

public static class C_OP_RemapDensityGradientToVectorAttribute { // CParticleFunctionOperator
    public const nint m_flRadiusScale = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

public static class C_OP_RemapDensityToVector { // CParticleFunctionOperator
    public const nint m_flRadiusScale = 0x1B0; // float
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flDensityMin = 0x1B8; // float
    public const nint m_flDensityMax = 0x1BC; // float
    public const nint m_vecOutputMin = 0x1C0; // Vector
    public const nint m_vecOutputMax = 0x1CC; // Vector
    public const nint m_bUseParentDensity = 0x1D8; // bool
    public const nint m_nVoxelGridResolution = 0x1DC; // int32_t
}

public static class C_OP_RemapDirectionToCPToVector { // CParticleFunctionOperator
    public const nint m_nCP = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x1B8; // float
    public const nint m_flOffsetRot = 0x1BC; // float
    public const nint m_vecOffsetAxis = 0x1C0; // Vector
    public const nint m_bNormalize = 0x1CC; // bool
    public const nint m_nFieldStrength = 0x1D0; // ParticleAttributeIndex_t
}

public static class C_OP_RemapDistanceToLineSegmentBase { // CParticleFunctionOperator
    public const nint m_nCP0 = 0x1B0; // int32_t
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_flMinInputValue = 0x1B8; // float
    public const nint m_flMaxInputValue = 0x1BC; // float
    public const nint m_bInfiniteLine = 0x1C0; // bool
}

public static class C_OP_RemapDistanceToLineSegmentToScalar { // C_OP_RemapDistanceToLineSegmentBase
    public const nint m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
    public const nint m_flMinOutputValue = 0x1C8; // float
    public const nint m_flMaxOutputValue = 0x1CC; // float
}

public static class C_OP_RemapDistanceToLineSegmentToVector { // C_OP_RemapDistanceToLineSegmentBase
    public const nint m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
    public const nint m_vMinOutputValue = 0x1C8; // Vector
    public const nint m_vMaxOutputValue = 0x1D4; // Vector
}

public static class C_OP_RemapDotProductToCP { // CParticleFunctionPreEmission
    public const nint m_nInputCP1 = 0x1B4; // int32_t
    public const nint m_nInputCP2 = 0x1B8; // int32_t
    public const nint m_nOutputCP = 0x1BC; // int32_t
    public const nint m_nOutVectorField = 0x1C0; // int32_t
    public const nint m_flInputMin = 0x1C8; // CParticleCollectionFloatInput
    public const nint m_flInputMax = 0x318; // CParticleCollectionFloatInput
    public const nint m_flOutputMin = 0x468; // CParticleCollectionFloatInput
    public const nint m_flOutputMax = 0x5B8; // CParticleCollectionFloatInput
}

public static class C_OP_RemapDotProductToScalar { // CParticleFunctionOperator
    public const nint m_nInputCP1 = 0x1B0; // int32_t
    public const nint m_nInputCP2 = 0x1B4; // int32_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
    public const nint m_bUseParticleVelocity = 0x1CC; // bool
    public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
    public const nint m_bActiveRange = 0x1D4; // bool
    public const nint m_bUseParticleNormal = 0x1D5; // bool
}

public static class C_OP_RemapExternalWindToCP { // CParticleFunctionPreEmission
    public const nint m_nCP = 0x1B4; // int32_t
    public const nint m_nCPOutput = 0x1B8; // int32_t
    public const nint m_vecScale = 0x1C0; // CParticleCollectionVecInput
    public const nint m_bSetMagnitude = 0x7F0; // bool
    public const nint m_nOutVectorField = 0x7F4; // int32_t
}

public static class C_OP_RemapModelVolumetoCP { // CParticleFunctionPreEmission
    public const nint m_nBBoxType = 0x1B4; // BBoxVolumeType_t
    public const nint m_nInControlPointNumber = 0x1B8; // int32_t
    public const nint m_nOutControlPointNumber = 0x1BC; // int32_t
    public const nint m_nOutControlPointMaxNumber = 0x1C0; // int32_t
    public const nint m_nField = 0x1C4; // int32_t
    public const nint m_flInputMin = 0x1C8; // float
    public const nint m_flInputMax = 0x1CC; // float
    public const nint m_flOutputMin = 0x1D0; // float
    public const nint m_flOutputMax = 0x1D4; // float
}

public static class C_OP_RemapNamedModelBodyPartEndCap { // C_OP_RemapNamedModelElementEndCap
}

public static class C_OP_RemapNamedModelBodyPartOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

public static class C_OP_RemapNamedModelElementEndCap { // CParticleFunctionOperator
    public const nint m_hModel = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_inNames = 0x1B8; // CUtlVector<CUtlString>
    public const nint m_outNames = 0x1D0; // CUtlVector<CUtlString>
    public const nint m_fallbackNames = 0x1E8; // CUtlVector<CUtlString>
    public const nint m_bModelFromRenderer = 0x200; // bool
    public const nint m_nFieldInput = 0x204; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x208; // ParticleAttributeIndex_t
}

public static class C_OP_RemapNamedModelElementOnceTimed { // CParticleFunctionOperator
    public const nint m_hModel = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_inNames = 0x1B8; // CUtlVector<CUtlString>
    public const nint m_outNames = 0x1D0; // CUtlVector<CUtlString>
    public const nint m_fallbackNames = 0x1E8; // CUtlVector<CUtlString>
    public const nint m_bModelFromRenderer = 0x200; // bool
    public const nint m_bProportional = 0x201; // bool
    public const nint m_nFieldInput = 0x204; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x208; // ParticleAttributeIndex_t
    public const nint m_flRemapTime = 0x20C; // float
}

public static class C_OP_RemapNamedModelMeshGroupEndCap { // C_OP_RemapNamedModelElementEndCap
}

public static class C_OP_RemapNamedModelMeshGroupOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

public static class C_OP_RemapNamedModelSequenceEndCap { // C_OP_RemapNamedModelElementEndCap
}

public static class C_OP_RemapNamedModelSequenceOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

public static class C_OP_RemapParticleCountOnScalarEndCap { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nInputMin = 0x1B4; // int32_t
    public const nint m_nInputMax = 0x1B8; // int32_t
    public const nint m_flOutputMin = 0x1BC; // float
    public const nint m_flOutputMax = 0x1C0; // float
    public const nint m_bBackwards = 0x1C4; // bool
    public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
}

public static class C_OP_RemapParticleCountToScalar { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nInputMin = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_nInputMax = 0x308; // CParticleCollectionFloatInput
    public const nint m_flOutputMin = 0x458; // CParticleCollectionFloatInput
    public const nint m_flOutputMax = 0x5A8; // CParticleCollectionFloatInput
    public const nint m_bActiveRange = 0x6F8; // bool
    public const nint m_nSetMethod = 0x6FC; // ParticleSetMethod_t
}

public static class C_OP_RemapSDFDistanceToScalarAttribute { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nVectorFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flMinDistance = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flMaxDistance = 0x308; // CParticleCollectionFloatInput
    public const nint m_flValueBelowMin = 0x458; // CParticleCollectionFloatInput
    public const nint m_flValueAtMin = 0x5A8; // CParticleCollectionFloatInput
    public const nint m_flValueAtMax = 0x6F8; // CParticleCollectionFloatInput
    public const nint m_flValueAboveMax = 0x848; // CParticleCollectionFloatInput
}

public static class C_OP_RemapSDFDistanceToVectorAttribute { // CParticleFunctionOperator
    public const nint m_nVectorFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nVectorFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flMinDistance = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flMaxDistance = 0x308; // CParticleCollectionFloatInput
    public const nint m_vValueBelowMin = 0x458; // Vector
    public const nint m_vValueAtMin = 0x464; // Vector
    public const nint m_vValueAtMax = 0x470; // Vector
    public const nint m_vValueAboveMax = 0x47C; // Vector
}

public static class C_OP_RemapSDFGradientToVectorAttribute { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
}

public static class C_OP_RemapScalar { // CParticleFunctionOperator
    public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // float
    public const nint m_flInputMax = 0x1BC; // float
    public const nint m_flOutputMin = 0x1C0; // float
    public const nint m_flOutputMax = 0x1C4; // float
    public const nint m_bOldCode = 0x1C8; // bool
}

public static class C_OP_RemapScalarEndCap { // CParticleFunctionOperator
    public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // float
    public const nint m_flInputMax = 0x1BC; // float
    public const nint m_flOutputMin = 0x1C0; // float
    public const nint m_flOutputMax = 0x1C4; // float
}

public static class C_OP_RemapScalarOnceTimed { // CParticleFunctionOperator
    public const nint m_bProportional = 0x1B0; // bool
    public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
    public const nint m_flRemapTime = 0x1CC; // float
}

public static class C_OP_RemapSpeed { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B4; // float
    public const nint m_flInputMax = 0x1B8; // float
    public const nint m_flOutputMin = 0x1BC; // float
    public const nint m_flOutputMax = 0x1C0; // float
    public const nint m_nSetMethod = 0x1C4; // ParticleSetMethod_t
    public const nint m_bIgnoreDelta = 0x1C8; // bool
}

public static class C_OP_RemapSpeedtoCP { // CParticleFunctionPreEmission
    public const nint m_nInControlPointNumber = 0x1B4; // int32_t
    public const nint m_nOutControlPointNumber = 0x1B8; // int32_t
    public const nint m_nField = 0x1BC; // int32_t
    public const nint m_flInputMin = 0x1C0; // float
    public const nint m_flInputMax = 0x1C4; // float
    public const nint m_flOutputMin = 0x1C8; // float
    public const nint m_flOutputMax = 0x1CC; // float
    public const nint m_bUseDeltaV = 0x1D0; // bool
}

public static class C_OP_RemapTransformOrientationToRotations { // CParticleFunctionOperator
    public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
    public const nint m_vecRotation = 0x210; // Vector
    public const nint m_bUseQuat = 0x21C; // bool
    public const nint m_bWriteNormal = 0x21D; // bool
}

public static class C_OP_RemapTransformOrientationToYaw { // CParticleFunctionOperator
    public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
    public const nint m_nFieldOutput = 0x210; // ParticleAttributeIndex_t
    public const nint m_flRotOffset = 0x214; // float
    public const nint m_flSpinStrength = 0x218; // float
}

public static class C_OP_RemapTransformToVelocity { // CParticleFunctionOperator
    public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
}

public static class C_OP_RemapTransformVisibilityToScalar { // CParticleFunctionOperator
    public const nint m_nSetMethod = 0x1B0; // ParticleSetMethod_t
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
    public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x21C; // float
    public const nint m_flInputMax = 0x220; // float
    public const nint m_flOutputMin = 0x224; // float
    public const nint m_flOutputMax = 0x228; // float
    public const nint m_flRadius = 0x22C; // float
}

public static class C_OP_RemapTransformVisibilityToVector { // CParticleFunctionOperator
    public const nint m_nSetMethod = 0x1B0; // ParticleSetMethod_t
    public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
    public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x21C; // float
    public const nint m_flInputMax = 0x220; // float
    public const nint m_vecOutputMin = 0x224; // Vector
    public const nint m_vecOutputMax = 0x230; // Vector
    public const nint m_flRadius = 0x23C; // float
}

public static class C_OP_RemapVectorComponentToScalar { // CParticleFunctionOperator
    public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nComponent = 0x1B8; // int32_t
}

public static class C_OP_RemapVectortoCP { // CParticleFunctionOperator
    public const nint m_nOutControlPointNumber = 0x1B0; // int32_t
    public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nParticleNumber = 0x1B8; // int32_t
}

public static class C_OP_RemapVelocityToVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_flScale = 0x1B4; // float
    public const nint m_bNormalize = 0x1B8; // bool
}

public static class C_OP_RemapVisibilityScalar { // CParticleFunctionOperator
    public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1B8; // float
    public const nint m_flInputMax = 0x1BC; // float
    public const nint m_flOutputMin = 0x1C0; // float
    public const nint m_flOutputMax = 0x1C4; // float
    public const nint m_flRadiusScale = 0x1C8; // float
}

public static class C_OP_RenderAsModels { // CParticleFunctionRenderer
    public const nint m_ModelList = 0x1F8; // CUtlVector<ModelReference_t>
    public const nint m_flModelScale = 0x214; // float
    public const nint m_bFitToModelSize = 0x218; // bool
    public const nint m_bNonUniformScaling = 0x219; // bool
    public const nint m_nXAxisScalingAttribute = 0x21C; // ParticleAttributeIndex_t
    public const nint m_nYAxisScalingAttribute = 0x220; // ParticleAttributeIndex_t
    public const nint m_nZAxisScalingAttribute = 0x224; // ParticleAttributeIndex_t
    public const nint m_nSizeCullBloat = 0x228; // int32_t
}

public static class C_OP_RenderBlobs { // CParticleFunctionRenderer
    public const nint m_cubeWidth = 0x1F8; // CParticleCollectionRendererFloatInput
    public const nint m_cutoffRadius = 0x348; // CParticleCollectionRendererFloatInput
    public const nint m_renderRadius = 0x498; // CParticleCollectionRendererFloatInput
    public const nint m_nScaleCP = 0x5E8; // int32_t
    public const nint m_MaterialVars = 0x5F0; // CUtlVector<MaterialVariable_t>
    public const nint m_hMaterial = 0x620; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class C_OP_RenderCables { // CParticleFunctionRenderer
    public const nint m_flRadiusScale = 0x1F8; // CParticleCollectionFloatInput
    public const nint m_flAlphaScale = 0x348; // CParticleCollectionFloatInput
    public const nint m_vecColorScale = 0x498; // CParticleCollectionVecInput
    public const nint m_nColorBlendType = 0xAC8; // ParticleColorBlendType_t
    public const nint m_hMaterial = 0xAD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nTextureRepetitionMode = 0xAD8; // TextureRepetitionMode_t
    public const nint m_flTextureRepeatsPerSegment = 0xAE0; // CParticleCollectionFloatInput
    public const nint m_flTextureRepeatsCircumference = 0xC30; // CParticleCollectionFloatInput
    public const nint m_flColorMapOffsetV = 0xD80; // CParticleCollectionFloatInput
    public const nint m_flColorMapOffsetU = 0xED0; // CParticleCollectionFloatInput
    public const nint m_flNormalMapOffsetV = 0x1020; // CParticleCollectionFloatInput
    public const nint m_flNormalMapOffsetU = 0x1170; // CParticleCollectionFloatInput
    public const nint m_bDrawCableCaps = 0x12C0; // bool
    public const nint m_flCapRoundness = 0x12C4; // float
    public const nint m_flCapOffsetAmount = 0x12C8; // float
    public const nint m_flTessScale = 0x12CC; // float
    public const nint m_nMinTesselation = 0x12D0; // int32_t
    public const nint m_nMaxTesselation = 0x12D4; // int32_t
    public const nint m_nRoundness = 0x12D8; // int32_t
    public const nint m_LightingTransform = 0x12E0; // CParticleTransformInput
    public const nint m_MaterialFloatVars = 0x1340; // CUtlVector<FloatInputMaterialVariable_t>
    public const nint m_MaterialVecVars = 0x1370; // CUtlVector<VecInputMaterialVariable_t>
}

public static class C_OP_RenderClothForce { // CParticleFunctionRenderer
}

public static class C_OP_RenderDeferredLight { // CParticleFunctionRenderer
    public const nint m_bUseAlphaTestWindow = 0x1F6; // bool
    public const nint m_bUseTexture = 0x1F7; // bool
    public const nint m_flRadiusScale = 0x1F8; // float
    public const nint m_flAlphaScale = 0x1FC; // float
    public const nint m_nAlpha2Field = 0x200; // ParticleAttributeIndex_t
    public const nint m_vecColorScale = 0x208; // CParticleCollectionVecInput
    public const nint m_nColorBlendType = 0x838; // ParticleColorBlendType_t
    public const nint m_flLightDistance = 0x83C; // float
    public const nint m_flStartFalloff = 0x840; // float
    public const nint m_flDistanceFalloff = 0x844; // float
    public const nint m_flSpotFoV = 0x848; // float
    public const nint m_nAlphaTestPointField = 0x84C; // ParticleAttributeIndex_t
    public const nint m_nAlphaTestRangeField = 0x850; // ParticleAttributeIndex_t
    public const nint m_nAlphaTestSharpnessField = 0x854; // ParticleAttributeIndex_t
    public const nint m_hTexture = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_nHSVShiftControlPoint = 0x860; // int32_t
}

public static class C_OP_RenderFlattenGrass { // CParticleFunctionRenderer
    public const nint m_flFlattenStrength = 0x1F8; // float
    public const nint m_nStrengthFieldOverride = 0x1FC; // ParticleAttributeIndex_t
    public const nint m_flRadiusScale = 0x200; // float
}

public static class C_OP_RenderGpuImplicit { // CParticleFunctionRenderer
    public const nint m_bUsePerParticleRadius = 0x1F6; // bool
    public const nint m_fGridSize = 0x1F8; // CParticleCollectionRendererFloatInput
    public const nint m_fRadiusScale = 0x348; // CParticleCollectionRendererFloatInput
    public const nint m_fIsosurfaceThreshold = 0x498; // CParticleCollectionRendererFloatInput
    public const nint m_nScaleCP = 0x5E8; // int32_t
    public const nint m_hMaterial = 0x5F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class C_OP_RenderLightBeam { // CParticleFunctionRenderer
    public const nint m_vColorBlend = 0x1F8; // CParticleCollectionVecInput
    public const nint m_nColorBlendType = 0x828; // ParticleColorBlendType_t
    public const nint m_flBrightnessLumensPerMeter = 0x830; // CParticleCollectionFloatInput
    public const nint m_bCastShadows = 0x980; // bool
    public const nint m_flSkirt = 0x988; // CParticleCollectionFloatInput
    public const nint m_flRange = 0xAD8; // CParticleCollectionFloatInput
    public const nint m_flThickness = 0xC28; // CParticleCollectionFloatInput
}

public static class C_OP_RenderLights { // C_OP_RenderPoints
    public const nint m_flAnimationRate = 0x200; // float
    public const nint m_nAnimationType = 0x204; // AnimationType_t
    public const nint m_bAnimateInFPS = 0x208; // bool
    public const nint m_flMinSize = 0x20C; // float
    public const nint m_flMaxSize = 0x210; // float
    public const nint m_flStartFadeSize = 0x214; // float
    public const nint m_flEndFadeSize = 0x218; // float
}

public static class C_OP_RenderMaterialProxy { // CParticleFunctionRenderer
    public const nint m_nMaterialControlPoint = 0x1F8; // int32_t
    public const nint m_nProxyType = 0x1FC; // MaterialProxyType_t
    public const nint m_MaterialVars = 0x200; // CUtlVector<MaterialVariable_t>
    public const nint m_hOverrideMaterial = 0x218; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_flMaterialOverrideEnabled = 0x220; // CParticleCollectionFloatInput
    public const nint m_vecColorScale = 0x370; // CParticleCollectionVecInput
    public const nint m_flAlpha = 0x9A0; // CPerParticleFloatInput
    public const nint m_nColorBlendType = 0xAF0; // ParticleColorBlendType_t
}

public static class C_OP_RenderModels { // CParticleFunctionRenderer
    public const nint m_bOnlyRenderInEffectsBloomPass = 0x1F6; // bool
    public const nint m_bOnlyRenderInEffectsWaterPass = 0x1F7; // bool
    public const nint m_bUseMixedResolutionRendering = 0x1F8; // bool
    public const nint m_bOnlyRenderInEffecsGameOverlay = 0x1F9; // bool
    public const nint m_ModelList = 0x200; // CUtlVector<ModelReference_t>
    public const nint m_nBodyGroupField = 0x21C; // ParticleAttributeIndex_t
    public const nint m_nSubModelField = 0x220; // ParticleAttributeIndex_t
    public const nint m_bIgnoreNormal = 0x224; // bool
    public const nint m_bOrientZ = 0x225; // bool
    public const nint m_bCenterOffset = 0x226; // bool
    public const nint m_vecLocalOffset = 0x228; // CPerParticleVecInput
    public const nint m_vecLocalRotation = 0x858; // CPerParticleVecInput
    public const nint m_bIgnoreRadius = 0xE88; // bool
    public const nint m_nModelScaleCP = 0xE8C; // int32_t
    public const nint m_vecComponentScale = 0xE90; // CPerParticleVecInput
    public const nint m_bLocalScale = 0x14C0; // bool
    public const nint m_nSizeCullBloat = 0x14C4; // int32_t
    public const nint m_bAnimated = 0x14C8; // bool
    public const nint m_flAnimationRate = 0x14D0; // CPerParticleFloatInput
    public const nint m_bScaleAnimationRate = 0x1620; // bool
    public const nint m_bForceLoopingAnimation = 0x1621; // bool
    public const nint m_bResetAnimOnStop = 0x1622; // bool
    public const nint m_bManualAnimFrame = 0x1623; // bool
    public const nint m_nAnimationScaleField = 0x1624; // ParticleAttributeIndex_t
    public const nint m_nAnimationField = 0x1628; // ParticleAttributeIndex_t
    public const nint m_nManualFrameField = 0x162C; // ParticleAttributeIndex_t
    public const nint m_ActivityName = 0x1630; // char[256]
    public const nint m_SequenceName = 0x1730; // char[256]
    public const nint m_bEnableClothSimulation = 0x1830; // bool
    public const nint m_hOverrideMaterial = 0x1838; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_bOverrideTranslucentMaterials = 0x1840; // bool
    public const nint m_nSkin = 0x1848; // CPerParticleFloatInput
    public const nint m_MaterialVars = 0x1998; // CUtlVector<MaterialVariable_t>
    public const nint m_flManualModelSelection = 0x19B0; // CPerParticleFloatInput
    public const nint m_modelInput = 0x1B00; // CParticleModelInput
    public const nint m_nLOD = 0x1B58; // int32_t
    public const nint m_EconSlotName = 0x1B5C; // char[256]
    public const nint m_bOriginalModel = 0x1C5C; // bool
    public const nint m_bSuppressTint = 0x1C5D; // bool
    public const nint m_bUseRawMeshGroup = 0x1C5E; // bool
    public const nint m_bDisableShadows = 0x1C5F; // bool
    public const nint m_bDisableDepthPrepass = 0x1C60; // bool
    public const nint m_bAcceptsDecals = 0x1C61; // bool
    public const nint m_bForceDrawInterlevedWithSiblings = 0x1C62; // bool
    public const nint m_bDoNotDrawInParticlePass = 0x1C63; // bool
    public const nint m_bUseFastModelCollectionRenderPath = 0x1C64; // bool
    public const nint m_bAllowApproximateTransforms = 0x1C65; // bool
    public const nint m_szRenderAttribute = 0x1C66; // char[4096]
    public const nint m_flRadiusScale = 0x2C68; // CParticleCollectionFloatInput
    public const nint m_flAlphaScale = 0x2DB8; // CParticleCollectionFloatInput
    public const nint m_flRollScale = 0x2F08; // CParticleCollectionFloatInput
    public const nint m_nAlpha2Field = 0x3058; // ParticleAttributeIndex_t
    public const nint m_vecColorScale = 0x3060; // CParticleCollectionVecInput
    public const nint m_nColorBlendType = 0x3690; // ParticleColorBlendType_t
}

public static class C_OP_RenderOmni2Light { // CParticleFunctionRenderer
    public const nint m_nLightType = 0x1F8; // ParticleOmni2LightTypeChoiceList_t
    public const nint m_vColorBlend = 0x200; // CParticleCollectionVecInput
    public const nint m_nColorBlendType = 0x830; // ParticleColorBlendType_t
    public const nint m_nBrightnessUnit = 0x834; // ParticleLightUnitChoiceList_t
    public const nint m_flBrightnessLumens = 0x838; // CPerParticleFloatInput
    public const nint m_flBrightnessCandelas = 0x988; // CPerParticleFloatInput
    public const nint m_bCastShadows = 0xAD8; // bool
    public const nint m_flLuminaireRadius = 0xAE0; // CPerParticleFloatInput
    public const nint m_flSkirt = 0xC30; // CPerParticleFloatInput
    public const nint m_flRange = 0xD80; // CPerParticleFloatInput
    public const nint m_flInnerConeAngle = 0xED0; // CPerParticleFloatInput
    public const nint m_flOuterConeAngle = 0x1020; // CPerParticleFloatInput
    public const nint m_hLightCookie = 0x1170; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bSphericalCookie = 0x1178; // bool
}

public static class C_OP_RenderPoints { // CParticleFunctionRenderer
    public const nint m_hMaterial = 0x1F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class C_OP_RenderPostProcessing { // CParticleFunctionRenderer
    public const nint m_flPostProcessStrength = 0x1F8; // CPerParticleFloatInput
    public const nint m_hPostTexture = 0x348; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    public const nint m_nPriority = 0x350; // ParticlePostProcessPriorityGroup_t
}

public static class C_OP_RenderProjected { // CParticleFunctionRenderer
    public const nint m_bProjectCharacter = 0x1F6; // bool
    public const nint m_bProjectWorld = 0x1F7; // bool
    public const nint m_bProjectWater = 0x1F8; // bool
    public const nint m_bFlipHorizontal = 0x1F9; // bool
    public const nint m_bEnableProjectedDepthControls = 0x1FA; // bool
    public const nint m_flMinProjectionDepth = 0x1FC; // float
    public const nint m_flMaxProjectionDepth = 0x200; // float
    public const nint m_vecProjectedMaterials = 0x208; // CUtlVector<RenderProjectedMaterial_t>
    public const nint m_flMaterialSelection = 0x220; // CPerParticleFloatInput
    public const nint m_flAnimationTimeScale = 0x370; // float
    public const nint m_bOrientToNormal = 0x374; // bool
    public const nint m_MaterialVars = 0x378; // CUtlVector<MaterialVariable_t>
}

public static class C_OP_RenderRopes { // CBaseRendererSource2
    public const nint m_bEnableFadingAndClamping = 0x2638; // bool
    public const nint m_flMinSize = 0x263C; // float
    public const nint m_flMaxSize = 0x2640; // float
    public const nint m_flStartFadeSize = 0x2644; // float
    public const nint m_flEndFadeSize = 0x2648; // float
    public const nint m_flStartFadeDot = 0x264C; // float
    public const nint m_flEndFadeDot = 0x2650; // float
    public const nint m_flRadiusTaper = 0x2654; // float
    public const nint m_nMinTesselation = 0x2658; // int32_t
    public const nint m_nMaxTesselation = 0x265C; // int32_t
    public const nint m_flTessScale = 0x2660; // float
    public const nint m_flTextureVWorldSize = 0x2668; // CParticleCollectionRendererFloatInput
    public const nint m_flTextureVScrollRate = 0x27B8; // CParticleCollectionRendererFloatInput
    public const nint m_flTextureVOffset = 0x2908; // CParticleCollectionRendererFloatInput
    public const nint m_nTextureVParamsCP = 0x2A58; // int32_t
    public const nint m_bClampV = 0x2A5C; // bool
    public const nint m_nScaleCP1 = 0x2A60; // int32_t
    public const nint m_nScaleCP2 = 0x2A64; // int32_t
    public const nint m_flScaleVSizeByControlPointDistance = 0x2A68; // float
    public const nint m_flScaleVScrollByControlPointDistance = 0x2A6C; // float
    public const nint m_flScaleVOffsetByControlPointDistance = 0x2A70; // float
    public const nint m_bUseScalarForTextureCoordinate = 0x2A75; // bool
    public const nint m_nScalarFieldForTextureCoordinate = 0x2A78; // ParticleAttributeIndex_t
    public const nint m_flScalarAttributeTextureCoordScale = 0x2A7C; // float
    public const nint m_bReverseOrder = 0x2A80; // bool
    public const nint m_bClosedLoop = 0x2A81; // bool
    public const nint m_nOrientationType = 0x2A84; // ParticleOrientationChoiceList_t
    public const nint m_nVectorFieldForOrientation = 0x2A88; // ParticleAttributeIndex_t
    public const nint m_bDrawAsOpaque = 0x2A8C; // bool
    public const nint m_bGenerateNormals = 0x2A8D; // bool
}

public static class C_OP_RenderScreenShake { // CParticleFunctionRenderer
    public const nint m_flDurationScale = 0x1F8; // float
    public const nint m_flRadiusScale = 0x1FC; // float
    public const nint m_flFrequencyScale = 0x200; // float
    public const nint m_flAmplitudeScale = 0x204; // float
    public const nint m_nRadiusField = 0x208; // ParticleAttributeIndex_t
    public const nint m_nDurationField = 0x20C; // ParticleAttributeIndex_t
    public const nint m_nFrequencyField = 0x210; // ParticleAttributeIndex_t
    public const nint m_nAmplitudeField = 0x214; // ParticleAttributeIndex_t
    public const nint m_nFilterCP = 0x218; // int32_t
}

public static class C_OP_RenderScreenVelocityRotate { // CParticleFunctionRenderer
    public const nint m_flRotateRateDegrees = 0x1F8; // float
    public const nint m_flForwardDegrees = 0x1FC; // float
}

public static class C_OP_RenderSimpleModelCollection { // CParticleFunctionRenderer
    public const nint m_bCenterOffset = 0x1F6; // bool
    public const nint m_modelInput = 0x1F8; // CParticleModelInput
    public const nint m_nLOD = 0x250; // int32_t
    public const nint m_bDisableShadows = 0x254; // bool
    public const nint m_bAcceptsDecals = 0x255; // bool
}

public static class C_OP_RenderSound { // CParticleFunctionRenderer
    public const nint m_flDurationScale = 0x1F8; // float
    public const nint m_flSndLvlScale = 0x1FC; // float
    public const nint m_flPitchScale = 0x200; // float
    public const nint m_flVolumeScale = 0x204; // float
    public const nint m_nSndLvlField = 0x208; // ParticleAttributeIndex_t
    public const nint m_nDurationField = 0x20C; // ParticleAttributeIndex_t
    public const nint m_nPitchField = 0x210; // ParticleAttributeIndex_t
    public const nint m_nVolumeField = 0x214; // ParticleAttributeIndex_t
    public const nint m_nChannel = 0x218; // int32_t
    public const nint m_nCPReference = 0x21C; // int32_t
    public const nint m_pszSoundName = 0x220; // char[256]
    public const nint m_bSuppressStopSoundEvent = 0x320; // bool
}

public static class C_OP_RenderSprites { // CBaseRendererSource2
    public const nint m_nSequenceOverride = 0x2638; // CParticleCollectionRendererFloatInput
    public const nint m_nOrientationType = 0x2788; // ParticleOrientationChoiceList_t
    public const nint m_nOrientationControlPoint = 0x278C; // int32_t
    public const nint m_bUseYawWithNormalAligned = 0x2790; // bool
    public const nint m_flMinSize = 0x2798; // CParticleCollectionRendererFloatInput
    public const nint m_flMaxSize = 0x28E8; // CParticleCollectionRendererFloatInput
    public const nint m_flAlphaAdjustWithSizeAdjust = 0x2A38; // CParticleCollectionRendererFloatInput
    public const nint m_flStartFadeSize = 0x2B88; // CParticleCollectionRendererFloatInput
    public const nint m_flEndFadeSize = 0x2CD8; // CParticleCollectionRendererFloatInput
    public const nint m_flStartFadeDot = 0x2E28; // float
    public const nint m_flEndFadeDot = 0x2E2C; // float
    public const nint m_bDistanceAlpha = 0x2E30; // bool
    public const nint m_bSoftEdges = 0x2E31; // bool
    public const nint m_flEdgeSoftnessStart = 0x2E34; // float
    public const nint m_flEdgeSoftnessEnd = 0x2E38; // float
    public const nint m_bOutline = 0x2E3C; // bool
    public const nint m_OutlineColor = 0x2E3D; // Color
    public const nint m_nOutlineAlpha = 0x2E44; // int32_t
    public const nint m_flOutlineStart0 = 0x2E48; // float
    public const nint m_flOutlineStart1 = 0x2E4C; // float
    public const nint m_flOutlineEnd0 = 0x2E50; // float
    public const nint m_flOutlineEnd1 = 0x2E54; // float
    public const nint m_nLightingMode = 0x2E58; // ParticleLightingQuality_t
    public const nint m_flLightingTessellation = 0x2E60; // CParticleCollectionRendererFloatInput
    public const nint m_flLightingDirectionality = 0x2FB0; // CParticleCollectionRendererFloatInput
    public const nint m_bParticleShadows = 0x3100; // bool
    public const nint m_flShadowDensity = 0x3104; // float
}

public static class C_OP_RenderStandardLight { // CParticleFunctionRenderer
    public const nint m_nLightType = 0x1F8; // ParticleLightTypeChoiceList_t
    public const nint m_vecColorScale = 0x200; // CParticleCollectionVecInput
    public const nint m_nColorBlendType = 0x830; // ParticleColorBlendType_t
    public const nint m_flIntensity = 0x838; // CParticleCollectionFloatInput
    public const nint m_bCastShadows = 0x988; // bool
    public const nint m_flTheta = 0x990; // CParticleCollectionFloatInput
    public const nint m_flPhi = 0xAE0; // CParticleCollectionFloatInput
    public const nint m_flRadiusMultiplier = 0xC30; // CParticleCollectionFloatInput
    public const nint m_nAttenuationStyle = 0xD80; // StandardLightingAttenuationStyle_t
    public const nint m_flFalloffLinearity = 0xD88; // CParticleCollectionFloatInput
    public const nint m_flFiftyPercentFalloff = 0xED8; // CParticleCollectionFloatInput
    public const nint m_flZeroPercentFalloff = 0x1028; // CParticleCollectionFloatInput
    public const nint m_bRenderDiffuse = 0x1178; // bool
    public const nint m_bRenderSpecular = 0x1179; // bool
    public const nint m_lightCookie = 0x1180; // CUtlString
    public const nint m_nPriority = 0x1188; // int32_t
    public const nint m_nFogLightingMode = 0x118C; // ParticleLightFogLightingMode_t
    public const nint m_flFogContribution = 0x1190; // CParticleCollectionRendererFloatInput
    public const nint m_nCapsuleLightBehavior = 0x12E0; // ParticleLightBehaviorChoiceList_t
    public const nint m_flCapsuleLength = 0x12E4; // float
    public const nint m_bReverseOrder = 0x12E8; // bool
    public const nint m_bClosedLoop = 0x12E9; // bool
    public const nint m_nPrevPntSource = 0x12EC; // ParticleAttributeIndex_t
    public const nint m_flMaxLength = 0x12F0; // float
    public const nint m_flMinLength = 0x12F4; // float
    public const nint m_bIgnoreDT = 0x12F8; // bool
    public const nint m_flConstrainRadiusToLengthRatio = 0x12FC; // float
    public const nint m_flLengthScale = 0x1300; // float
    public const nint m_flLengthFadeInTime = 0x1304; // float
}

public static class C_OP_RenderStatusEffect { // CParticleFunctionRenderer
    public const nint m_pTextureColorWarp = 0x1F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureDetail2 = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureDiffuseWarp = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureFresnelColorWarp = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureFresnelWarp = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureSpecularWarp = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureEnvMap = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

public static class C_OP_RenderStatusEffectCitadel { // CParticleFunctionRenderer
    public const nint m_pTextureColorWarp = 0x1F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureNormal = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureMetalness = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureRoughness = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureSelfIllum = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_pTextureDetail = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

public static class C_OP_RenderText { // CParticleFunctionRenderer
    public const nint m_OutlineColor = 0x1F6; // Color
    public const nint m_DefaultText = 0x200; // CUtlString
}

public static class C_OP_RenderTonemapController { // CParticleFunctionRenderer
    public const nint m_flTonemapLevel = 0x1F8; // float
    public const nint m_flTonemapWeight = 0x1FC; // float
    public const nint m_nTonemapLevelField = 0x200; // ParticleAttributeIndex_t
    public const nint m_nTonemapWeightField = 0x204; // ParticleAttributeIndex_t
}

public static class C_OP_RenderTrails { // CBaseTrailRenderer
    public const nint m_bEnableFadingAndClamping = 0x28E9; // bool
    public const nint m_flStartFadeDot = 0x28EC; // float
    public const nint m_flEndFadeDot = 0x28F0; // float
    public const nint m_nPrevPntSource = 0x28F4; // ParticleAttributeIndex_t
    public const nint m_flMaxLength = 0x28F8; // float
    public const nint m_flMinLength = 0x28FC; // float
    public const nint m_bIgnoreDT = 0x2900; // bool
    public const nint m_flConstrainRadiusToLengthRatio = 0x2904; // float
    public const nint m_flLengthScale = 0x2908; // float
    public const nint m_flLengthFadeInTime = 0x290C; // float
    public const nint m_flRadiusHeadTaper = 0x2910; // CPerParticleFloatInput
    public const nint m_vecHeadColorScale = 0x2A60; // CParticleCollectionVecInput
    public const nint m_flHeadAlphaScale = 0x3090; // CPerParticleFloatInput
    public const nint m_flRadiusTaper = 0x31E0; // CPerParticleFloatInput
    public const nint m_vecTailColorScale = 0x3330; // CParticleCollectionVecInput
    public const nint m_flTailAlphaScale = 0x3960; // CPerParticleFloatInput
    public const nint m_nHorizCropField = 0x3AB0; // ParticleAttributeIndex_t
    public const nint m_nVertCropField = 0x3AB4; // ParticleAttributeIndex_t
    public const nint m_flForwardShift = 0x3AB8; // float
    public const nint m_bFlipUVBasedOnPitchYaw = 0x3ABC; // bool
}

public static class C_OP_RenderTreeShake { // CParticleFunctionRenderer
    public const nint m_flPeakStrength = 0x1F8; // float
    public const nint m_nPeakStrengthFieldOverride = 0x1FC; // ParticleAttributeIndex_t
    public const nint m_flRadius = 0x200; // float
    public const nint m_nRadiusFieldOverride = 0x204; // ParticleAttributeIndex_t
    public const nint m_flShakeDuration = 0x208; // float
    public const nint m_flTransitionTime = 0x20C; // float
    public const nint m_flTwistAmount = 0x210; // float
    public const nint m_flRadialAmount = 0x214; // float
    public const nint m_flControlPointOrientationAmount = 0x218; // float
    public const nint m_nControlPointForLinearDirection = 0x21C; // int32_t
}

public static class C_OP_RenderVRHapticEvent { // CParticleFunctionRenderer
    public const nint m_nHand = 0x1F8; // ParticleVRHandChoiceList_t
    public const nint m_nOutputHandCP = 0x1FC; // int32_t
    public const nint m_nOutputField = 0x200; // int32_t
    public const nint m_flAmplitude = 0x208; // CPerParticleFloatInput
}

public static class C_OP_RepeatedTriggerChildGroup { // CParticleFunctionPreEmission
    public const nint m_nChildGroupID = 0x1B4; // int32_t
    public const nint m_flClusterRefireTime = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flClusterSize = 0x308; // CParticleCollectionFloatInput
    public const nint m_flClusterCooldown = 0x458; // CParticleCollectionFloatInput
    public const nint m_bLimitChildCount = 0x5A8; // bool
}

public static class C_OP_RestartAfterDuration { // CParticleFunctionOperator
    public const nint m_flDurationMin = 0x1B0; // float
    public const nint m_flDurationMax = 0x1B4; // float
    public const nint m_nCP = 0x1B8; // int32_t
    public const nint m_nCPField = 0x1BC; // int32_t
    public const nint m_nChildGroupID = 0x1C0; // int32_t
    public const nint m_bOnlyChildren = 0x1C4; // bool
}

public static class C_OP_RopeSpringConstraint { // CParticleFunctionConstraint
    public const nint m_flRestLength = 0x1B0; // CParticleCollectionFloatInput
    public const nint m_flMinDistance = 0x300; // CParticleCollectionFloatInput
    public const nint m_flMaxDistance = 0x450; // CParticleCollectionFloatInput
    public const nint m_flAdjustmentScale = 0x5A0; // float
    public const nint m_flInitialRestingLength = 0x5A8; // CParticleCollectionFloatInput
}

public static class C_OP_RotateVector { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecRotAxisMin = 0x1B4; // Vector
    public const nint m_vecRotAxisMax = 0x1C0; // Vector
    public const nint m_flRotRateMin = 0x1CC; // float
    public const nint m_flRotRateMax = 0x1D0; // float
    public const nint m_bNormalize = 0x1D4; // bool
    public const nint m_flScale = 0x1D8; // CPerParticleFloatInput
}

public static class C_OP_RtEnvCull { // CParticleFunctionOperator
    public const nint m_vecTestDir = 0x1B0; // Vector
    public const nint m_vecTestNormal = 0x1BC; // Vector
    public const nint m_bCullOnMiss = 0x1C8; // bool
    public const nint m_bStickInsteadOfCull = 0x1C9; // bool
    public const nint m_RtEnvName = 0x1CA; // char[128]
    public const nint m_nRTEnvCP = 0x24C; // int32_t
    public const nint m_nComponent = 0x250; // int32_t
}

public static class C_OP_SDFConstraint { // CParticleFunctionConstraint
    public const nint m_flMinDist = 0x1B0; // CParticleCollectionFloatInput
    public const nint m_flMaxDist = 0x300; // CParticleCollectionFloatInput
    public const nint m_nMaxIterations = 0x450; // int32_t
}

public static class C_OP_SDFForce { // CParticleFunctionForce
    public const nint m_flForceScale = 0x1BC; // float
}

public static class C_OP_SDFLighting { // CParticleFunctionOperator
    public const nint m_vLightingDir = 0x1B0; // Vector
    public const nint m_vTint_0 = 0x1BC; // Vector
    public const nint m_vTint_1 = 0x1C8; // Vector
}

public static class C_OP_SelectivelyEnableChildren { // CParticleFunctionPreEmission
    public const nint m_nChildGroupID = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_nFirstChild = 0x308; // CParticleCollectionFloatInput
    public const nint m_nNumChildrenToEnable = 0x458; // CParticleCollectionFloatInput
    public const nint m_bPlayEndcapOnStop = 0x5A8; // bool
    public const nint m_bDestroyImmediately = 0x5A9; // bool
}

public static class C_OP_SequenceFromModel { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nFieldOutputAnim = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_flInputMin = 0x1BC; // float
    public const nint m_flInputMax = 0x1C0; // float
    public const nint m_flOutputMin = 0x1C4; // float
    public const nint m_flOutputMax = 0x1C8; // float
    public const nint m_nSetMethod = 0x1CC; // ParticleSetMethod_t
}

public static class C_OP_SetAttributeToScalarExpression { // CParticleFunctionOperator
    public const nint m_nExpression = 0x1B0; // ScalarExpressionType_t
    public const nint m_flInput1 = 0x1B8; // CPerParticleFloatInput
    public const nint m_flInput2 = 0x308; // CPerParticleFloatInput
    public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
    public const nint m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x5AC; // ParticleSetMethod_t
}

public static class C_OP_SetCPOrientationToDirection { // CParticleFunctionOperator
    public const nint m_nInputControlPoint = 0x1B0; // int32_t
    public const nint m_nOutputControlPoint = 0x1B4; // int32_t
}

public static class C_OP_SetCPOrientationToGroundNormal { // CParticleFunctionOperator
    public const nint m_flInterpRate = 0x1B0; // float
    public const nint m_flMaxTraceLength = 0x1B4; // float
    public const nint m_flTolerance = 0x1B8; // float
    public const nint m_flTraceOffset = 0x1BC; // float
    public const nint m_CollisionGroupName = 0x1C0; // char[128]
    public const nint m_nTraceSet = 0x240; // ParticleTraceSet_t
    public const nint m_nInputCP = 0x244; // int32_t
    public const nint m_nOutputCP = 0x248; // int32_t
    public const nint m_bIncludeWater = 0x258; // bool
}

public static class C_OP_SetCPOrientationToPointAtCP { // CParticleFunctionPreEmission
    public const nint m_nInputCP = 0x1B4; // int32_t
    public const nint m_nOutputCP = 0x1B8; // int32_t
    public const nint m_flInterpolation = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_b2DOrientation = 0x310; // bool
    public const nint m_bAvoidSingularity = 0x311; // bool
    public const nint m_bPointAway = 0x312; // bool
}

public static class C_OP_SetCPtoVector { // CParticleFunctionOperator
    public const nint m_nCPInput = 0x1B0; // int32_t
    public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

public static class C_OP_SetChildControlPoints { // CParticleFunctionOperator
    public const nint m_nChildGroupID = 0x1B0; // int32_t
    public const nint m_nFirstControlPoint = 0x1B4; // int32_t
    public const nint m_nNumControlPoints = 0x1B8; // int32_t
    public const nint m_nFirstSourcePoint = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_bReverse = 0x310; // bool
    public const nint m_bSetOrientation = 0x311; // bool
}

public static class C_OP_SetControlPointFieldFromVectorExpression { // CParticleFunctionPreEmission
    public const nint m_nExpression = 0x1B4; // VectorFloatExpressionType_t
    public const nint m_vecInput1 = 0x1B8; // CParticleCollectionVecInput
    public const nint m_vecInput2 = 0x7E8; // CParticleCollectionVecInput
    public const nint m_flOutputRemap = 0xE18; // CParticleRemapFloatInput
    public const nint m_nOutputCP = 0xF68; // int32_t
    public const nint m_nOutVectorField = 0xF6C; // int32_t
}

public static class C_OP_SetControlPointFieldToScalarExpression { // CParticleFunctionPreEmission
    public const nint m_nExpression = 0x1B4; // ScalarExpressionType_t
    public const nint m_flInput1 = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_flInput2 = 0x308; // CParticleCollectionFloatInput
    public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
    public const nint m_nOutputCP = 0x5A8; // int32_t
    public const nint m_nOutVectorField = 0x5AC; // int32_t
}

public static class C_OP_SetControlPointFieldToWater { // CParticleFunctionPreEmission
    public const nint m_nSourceCP = 0x1B4; // int32_t
    public const nint m_nDestCP = 0x1B8; // int32_t
    public const nint m_nCPField = 0x1BC; // int32_t
}

public static class C_OP_SetControlPointFromObjectScale { // CParticleFunctionPreEmission
    public const nint m_nCPInput = 0x1B4; // int32_t
    public const nint m_nCPOutput = 0x1B8; // int32_t
}

public static class C_OP_SetControlPointOrientation { // CParticleFunctionPreEmission
    public const nint m_bUseWorldLocation = 0x1B1; // bool
    public const nint m_bRandomize = 0x1B3; // bool
    public const nint m_bSetOnce = 0x1B4; // bool
    public const nint m_nCP = 0x1B8; // int32_t
    public const nint m_nHeadLocation = 0x1BC; // int32_t
    public const nint m_vecRotation = 0x1C0; // QAngle
    public const nint m_vecRotationB = 0x1CC; // QAngle
    public const nint m_flInterpolation = 0x1D8; // CParticleCollectionFloatInput
}

public static class C_OP_SetControlPointOrientationToCPVelocity { // CParticleFunctionPreEmission
    public const nint m_nCPInput = 0x1B4; // int32_t
    public const nint m_nCPOutput = 0x1B8; // int32_t
}

public static class C_OP_SetControlPointPositionToRandomActiveCP { // CParticleFunctionPreEmission
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_nHeadLocationMin = 0x1B8; // int32_t
    public const nint m_nHeadLocationMax = 0x1BC; // int32_t
    public const nint m_flResetRate = 0x1C0; // CParticleCollectionFloatInput
}

public static class C_OP_SetControlPointPositionToTimeOfDayValue { // CParticleFunctionPreEmission
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_pszTimeOfDayParameter = 0x1B8; // char[128]
    public const nint m_vecDefaultValue = 0x238; // Vector
}

public static class C_OP_SetControlPointPositions { // CParticleFunctionPreEmission
    public const nint m_bUseWorldLocation = 0x1B1; // bool
    public const nint m_bOrient = 0x1B2; // bool
    public const nint m_bSetOnce = 0x1B3; // bool
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_nCP2 = 0x1B8; // int32_t
    public const nint m_nCP3 = 0x1BC; // int32_t
    public const nint m_nCP4 = 0x1C0; // int32_t
    public const nint m_vecCP1Pos = 0x1C4; // Vector
    public const nint m_vecCP2Pos = 0x1D0; // Vector
    public const nint m_vecCP3Pos = 0x1DC; // Vector
    public const nint m_vecCP4Pos = 0x1E8; // Vector
    public const nint m_nHeadLocation = 0x1F4; // int32_t
}

public static class C_OP_SetControlPointRotation { // CParticleFunctionPreEmission
    public const nint m_vecRotAxis = 0x1B8; // CParticleCollectionVecInput
    public const nint m_flRotRate = 0x7E8; // CParticleCollectionFloatInput
    public const nint m_nCP = 0x938; // int32_t
    public const nint m_nLocalCP = 0x93C; // int32_t
}

public static class C_OP_SetControlPointToCPVelocity { // CParticleFunctionPreEmission
    public const nint m_nCPInput = 0x1B4; // int32_t
    public const nint m_nCPOutputVel = 0x1B8; // int32_t
    public const nint m_bNormalize = 0x1BC; // bool
    public const nint m_nCPOutputMag = 0x1C0; // int32_t
    public const nint m_nCPField = 0x1C4; // int32_t
    public const nint m_vecComparisonVelocity = 0x1C8; // CParticleCollectionVecInput
}

public static class C_OP_SetControlPointToCenter { // CParticleFunctionPreEmission
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_vecCP1Pos = 0x1B8; // Vector
    public const nint m_nSetParent = 0x1C4; // ParticleParentSetMode_t
}

public static class C_OP_SetControlPointToHMD { // CParticleFunctionPreEmission
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_vecCP1Pos = 0x1B8; // Vector
    public const nint m_bOrientToHMD = 0x1C4; // bool
}

public static class C_OP_SetControlPointToHand { // CParticleFunctionPreEmission
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_nHand = 0x1B8; // int32_t
    public const nint m_vecCP1Pos = 0x1BC; // Vector
    public const nint m_bOrientToHand = 0x1C8; // bool
}

public static class C_OP_SetControlPointToImpactPoint { // CParticleFunctionPreEmission
    public const nint m_nCPOut = 0x1B4; // int32_t
    public const nint m_nCPIn = 0x1B8; // int32_t
    public const nint m_flUpdateRate = 0x1BC; // float
    public const nint m_flTraceLength = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_flStartOffset = 0x310; // float
    public const nint m_flOffset = 0x314; // float
    public const nint m_vecTraceDir = 0x318; // Vector
    public const nint m_CollisionGroupName = 0x324; // char[128]
    public const nint m_nTraceSet = 0x3A4; // ParticleTraceSet_t
    public const nint m_bSetToEndpoint = 0x3A8; // bool
    public const nint m_bTraceToClosestSurface = 0x3A9; // bool
    public const nint m_bIncludeWater = 0x3AA; // bool
}

public static class C_OP_SetControlPointToPlayer { // CParticleFunctionPreEmission
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_vecCP1Pos = 0x1B8; // Vector
    public const nint m_bOrientToEyes = 0x1C4; // bool
}

public static class C_OP_SetControlPointToVectorExpression { // CParticleFunctionPreEmission
    public const nint m_nExpression = 0x1B4; // VectorExpressionType_t
    public const nint m_nOutputCP = 0x1B8; // int32_t
    public const nint m_vInput1 = 0x1C0; // CParticleCollectionVecInput
    public const nint m_vInput2 = 0x7F0; // CParticleCollectionVecInput
    public const nint m_bNormalizedOutput = 0xE20; // bool
}

public static class C_OP_SetControlPointToWaterSurface { // CParticleFunctionPreEmission
    public const nint m_nSourceCP = 0x1B4; // int32_t
    public const nint m_nDestCP = 0x1B8; // int32_t
    public const nint m_nFlowCP = 0x1BC; // int32_t
    public const nint m_nActiveCP = 0x1C0; // int32_t
    public const nint m_nActiveCPField = 0x1C4; // int32_t
    public const nint m_flRetestRate = 0x1C8; // CParticleCollectionFloatInput
    public const nint m_bAdaptiveThreshold = 0x318; // bool
}

public static class C_OP_SetControlPointsToModelParticles { // CParticleFunctionOperator
    public const nint m_HitboxSetName = 0x1B0; // char[128]
    public const nint m_AttachmentName = 0x230; // char[128]
    public const nint m_nFirstControlPoint = 0x2B0; // int32_t
    public const nint m_nNumControlPoints = 0x2B4; // int32_t
    public const nint m_nFirstSourcePoint = 0x2B8; // int32_t
    public const nint m_bSkin = 0x2BC; // bool
    public const nint m_bAttachment = 0x2BD; // bool
}

public static class C_OP_SetControlPointsToParticle { // CParticleFunctionOperator
    public const nint m_nChildGroupID = 0x1B0; // int32_t
    public const nint m_nFirstControlPoint = 0x1B4; // int32_t
    public const nint m_nNumControlPoints = 0x1B8; // int32_t
    public const nint m_nFirstSourcePoint = 0x1BC; // int32_t
    public const nint m_bSetOrientation = 0x1C0; // bool
    public const nint m_nOrientationMode = 0x1C4; // ParticleOrientationSetMode_t
    public const nint m_nSetParent = 0x1C8; // ParticleParentSetMode_t
}

public static class C_OP_SetFloat { // CParticleFunctionOperator
    public const nint m_InputValue = 0x1B0; // CPerParticleFloatInput
    public const nint m_nOutputField = 0x300; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x304; // ParticleSetMethod_t
    public const nint m_Lerp = 0x308; // CPerParticleFloatInput
    public const nint m_bUseNewCode = 0x458; // bool
}

public static class C_OP_SetFloatAttributeToVectorExpression { // CParticleFunctionOperator
    public const nint m_nExpression = 0x1B0; // VectorFloatExpressionType_t
    public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
    public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
    public const nint m_flOutputRemap = 0xE18; // CParticleRemapFloatInput
    public const nint m_nOutputField = 0xF68; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0xF6C; // ParticleSetMethod_t
}

public static class C_OP_SetFloatCollection { // CParticleFunctionOperator
    public const nint m_InputValue = 0x1B0; // CParticleCollectionFloatInput
    public const nint m_nOutputField = 0x300; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x304; // ParticleSetMethod_t
    public const nint m_Lerp = 0x308; // CParticleCollectionFloatInput
}

public static class C_OP_SetFromCPSnapshot { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_nAttributeToRead = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nAttributeToWrite = 0x1B8; // ParticleAttributeIndex_t
    public const nint m_nLocalSpaceCP = 0x1BC; // int32_t
    public const nint m_bRandom = 0x1C0; // bool
    public const nint m_bReverse = 0x1C1; // bool
    public const nint m_nRandomSeed = 0x1C4; // int32_t
    public const nint m_nSnapShotStartPoint = 0x1C8; // CParticleCollectionFloatInput
    public const nint m_nSnapShotIncrement = 0x318; // CParticleCollectionFloatInput
    public const nint m_flInterpolation = 0x468; // CPerParticleFloatInput
    public const nint m_bSubSample = 0x5B8; // bool
    public const nint m_bPrev = 0x5B9; // bool
}

public static class C_OP_SetGravityToCP { // CParticleFunctionPreEmission
    public const nint m_nCPInput = 0x1B4; // int32_t
    public const nint m_nCPOutput = 0x1B8; // int32_t
    public const nint m_flScale = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_bSetOrientation = 0x310; // bool
    public const nint m_bSetZDown = 0x311; // bool
}

public static class C_OP_SetParentControlPointsToChildCP { // CParticleFunctionPreEmission
    public const nint m_nChildGroupID = 0x1B4; // int32_t
    public const nint m_nChildControlPoint = 0x1B8; // int32_t
    public const nint m_nNumControlPoints = 0x1BC; // int32_t
    public const nint m_nFirstSourcePoint = 0x1C0; // int32_t
    public const nint m_bSetOrientation = 0x1C4; // bool
}

public static class C_OP_SetPerChildControlPoint { // CParticleFunctionOperator
    public const nint m_nChildGroupID = 0x1B0; // int32_t
    public const nint m_nFirstControlPoint = 0x1B4; // int32_t
    public const nint m_nNumControlPoints = 0x1B8; // int32_t
    public const nint m_nParticleIncrement = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_nFirstSourcePoint = 0x310; // CParticleCollectionFloatInput
    public const nint m_bSetOrientation = 0x460; // bool
    public const nint m_nOrientationField = 0x464; // ParticleAttributeIndex_t
    public const nint m_bNumBasedOnParticleCount = 0x468; // bool
}

public static class C_OP_SetPerChildControlPointFromAttribute { // CParticleFunctionOperator
    public const nint m_nChildGroupID = 0x1B0; // int32_t
    public const nint m_nFirstControlPoint = 0x1B4; // int32_t
    public const nint m_nNumControlPoints = 0x1B8; // int32_t
    public const nint m_nParticleIncrement = 0x1BC; // int32_t
    public const nint m_nFirstSourcePoint = 0x1C0; // int32_t
    public const nint m_bNumBasedOnParticleCount = 0x1C4; // bool
    public const nint m_nAttributeToRead = 0x1C8; // ParticleAttributeIndex_t
    public const nint m_nCPField = 0x1CC; // int32_t
}

public static class C_OP_SetRandomControlPointPosition { // CParticleFunctionPreEmission
    public const nint m_bUseWorldLocation = 0x1B1; // bool
    public const nint m_bOrient = 0x1B2; // bool
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_nHeadLocation = 0x1B8; // int32_t
    public const nint m_flReRandomRate = 0x1C0; // CParticleCollectionFloatInput
    public const nint m_vecCPMinPos = 0x310; // Vector
    public const nint m_vecCPMaxPos = 0x31C; // Vector
    public const nint m_flInterpolation = 0x328; // CParticleCollectionFloatInput
}

public static class C_OP_SetSimulationRate { // CParticleFunctionPreEmission
    public const nint m_flSimulationScale = 0x1B8; // CParticleCollectionFloatInput
}

public static class C_OP_SetSingleControlPointPosition { // CParticleFunctionPreEmission
    public const nint m_bSetOnce = 0x1B1; // bool
    public const nint m_nCP1 = 0x1B4; // int32_t
    public const nint m_vecCP1Pos = 0x1B8; // CParticleCollectionVecInput
    public const nint m_transformInput = 0x7E8; // CParticleTransformInput
}

public static class C_OP_SetToCP { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_vecOffset = 0x1B4; // Vector
    public const nint m_bOffsetLocal = 0x1C0; // bool
}

public static class C_OP_SetVariable { // CParticleFunctionPreEmission
    public const nint m_variableReference = 0x1B8; // CParticleVariableRef
    public const nint m_transformInput = 0x1F8; // CParticleTransformInput
    public const nint m_positionOffset = 0x258; // Vector
    public const nint m_rotationOffset = 0x264; // QAngle
    public const nint m_vecInput = 0x270; // CParticleCollectionVecInput
    public const nint m_floatInput = 0x8A0; // CParticleCollectionFloatInput
}

public static class C_OP_SetVec { // CParticleFunctionOperator
    public const nint m_InputValue = 0x1B0; // CPerParticleVecInput
    public const nint m_nOutputField = 0x7E0; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0x7E4; // ParticleSetMethod_t
    public const nint m_Lerp = 0x7E8; // CPerParticleFloatInput
    public const nint m_bNormalizedOutput = 0x938; // bool
}

public static class C_OP_SetVectorAttributeToVectorExpression { // CParticleFunctionOperator
    public const nint m_nExpression = 0x1B0; // VectorExpressionType_t
    public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
    public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
    public const nint m_nOutputField = 0xE18; // ParticleAttributeIndex_t
    public const nint m_nSetMethod = 0xE1C; // ParticleSetMethod_t
    public const nint m_bNormalizedOutput = 0xE20; // bool
}

public static class C_OP_ShapeMatchingConstraint { // CParticleFunctionConstraint
    public const nint m_flShapeRestorationTime = 0x1B0; // float
}

public static class C_OP_SnapshotRigidSkinToBones { // CParticleFunctionOperator
    public const nint m_bTransformNormals = 0x1B0; // bool
    public const nint m_bTransformRadii = 0x1B1; // bool
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
}

public static class C_OP_SnapshotSkinToBones { // CParticleFunctionOperator
    public const nint m_bTransformNormals = 0x1B0; // bool
    public const nint m_bTransformRadii = 0x1B1; // bool
    public const nint m_nControlPointNumber = 0x1B4; // int32_t
    public const nint m_flLifeTimeFadeStart = 0x1B8; // float
    public const nint m_flLifeTimeFadeEnd = 0x1BC; // float
    public const nint m_flJumpThreshold = 0x1C0; // float
    public const nint m_flPrevPosScale = 0x1C4; // float
}

public static class C_OP_Spin { // CGeneralSpin
}

public static class C_OP_SpinUpdate { // CSpinUpdateBase
}

public static class C_OP_SpinYaw { // CGeneralSpin
}

public static class C_OP_SpringToVectorConstraint { // CParticleFunctionConstraint
    public const nint m_flRestLength = 0x1B0; // CPerParticleFloatInput
    public const nint m_flMinDistance = 0x300; // CPerParticleFloatInput
    public const nint m_flMaxDistance = 0x450; // CPerParticleFloatInput
    public const nint m_flRestingLength = 0x5A0; // CPerParticleFloatInput
    public const nint m_vecAnchorVector = 0x6F0; // CPerParticleVecInput
}

public static class C_OP_StopAfterCPDuration { // CParticleFunctionPreEmission
    public const nint m_flDuration = 0x1B8; // CParticleCollectionFloatInput
    public const nint m_bDestroyImmediately = 0x308; // bool
    public const nint m_bPlayEndCap = 0x309; // bool
}

public static class C_OP_TeleportBeam { // CParticleFunctionOperator
    public const nint m_nCPPosition = 0x1B0; // int32_t
    public const nint m_nCPVelocity = 0x1B4; // int32_t
    public const nint m_nCPMisc = 0x1B8; // int32_t
    public const nint m_nCPColor = 0x1BC; // int32_t
    public const nint m_nCPInvalidColor = 0x1C0; // int32_t
    public const nint m_nCPExtraArcData = 0x1C4; // int32_t
    public const nint m_vGravity = 0x1C8; // Vector
    public const nint m_flArcMaxDuration = 0x1D4; // float
    public const nint m_flSegmentBreak = 0x1D8; // float
    public const nint m_flArcSpeed = 0x1DC; // float
    public const nint m_flAlpha = 0x1E0; // float
}

public static class C_OP_TimeVaryingForce { // CParticleFunctionForce
    public const nint m_flStartLerpTime = 0x1BC; // float
    public const nint m_StartingForce = 0x1C0; // Vector
    public const nint m_flEndLerpTime = 0x1CC; // float
    public const nint m_EndingForce = 0x1D0; // Vector
}

public static class C_OP_TurbulenceForce { // CParticleFunctionForce
    public const nint m_flNoiseCoordScale0 = 0x1BC; // float
    public const nint m_flNoiseCoordScale1 = 0x1C0; // float
    public const nint m_flNoiseCoordScale2 = 0x1C4; // float
    public const nint m_flNoiseCoordScale3 = 0x1C8; // float
    public const nint m_vecNoiseAmount0 = 0x1CC; // Vector
    public const nint m_vecNoiseAmount1 = 0x1D8; // Vector
    public const nint m_vecNoiseAmount2 = 0x1E4; // Vector
    public const nint m_vecNoiseAmount3 = 0x1F0; // Vector
}

public static class C_OP_TwistAroundAxis { // CParticleFunctionForce
    public const nint m_fForceAmount = 0x1BC; // float
    public const nint m_TwistAxis = 0x1C0; // Vector
    public const nint m_bLocalSpace = 0x1CC; // bool
    public const nint m_nControlPointNumber = 0x1D0; // int32_t
}

public static class C_OP_UpdateLightSource { // CParticleFunctionOperator
    public const nint m_vColorTint = 0x1B0; // Color
    public const nint m_flBrightnessScale = 0x1B4; // float
    public const nint m_flRadiusScale = 0x1B8; // float
    public const nint m_flMinimumLightingRadius = 0x1BC; // float
    public const nint m_flMaximumLightingRadius = 0x1C0; // float
    public const nint m_flPositionDampingConstant = 0x1C4; // float
}

public static class C_OP_VectorFieldSnapshot { // CParticleFunctionOperator
    public const nint m_nControlPointNumber = 0x1B0; // int32_t
    public const nint m_nAttributeToWrite = 0x1B4; // ParticleAttributeIndex_t
    public const nint m_nLocalSpaceCP = 0x1B8; // int32_t
    public const nint m_flInterpolation = 0x1C0; // CPerParticleFloatInput
    public const nint m_vecScale = 0x310; // CPerParticleVecInput
    public const nint m_flBoundaryDampening = 0x940; // float
    public const nint m_bSetVelocity = 0x944; // bool
    public const nint m_bLockToSurface = 0x945; // bool
    public const nint m_flGridSpacing = 0x948; // float
}

public static class C_OP_VectorNoise { // CParticleFunctionOperator
    public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    public const nint m_vecOutputMin = 0x1B4; // Vector
    public const nint m_vecOutputMax = 0x1C0; // Vector
    public const nint m_fl4NoiseScale = 0x1CC; // float
    public const nint m_bAdditive = 0x1D0; // bool
    public const nint m_bOffset = 0x1D1; // bool
    public const nint m_flNoiseAnimationTimeScale = 0x1D4; // float
}

public static class C_OP_VelocityDecay { // CParticleFunctionOperator
    public const nint m_flMinVelocity = 0x1B0; // float
}

public static class C_OP_VelocityMatchingForce { // CParticleFunctionOperator
    public const nint m_flDirScale = 0x1B0; // float
    public const nint m_flSpdScale = 0x1B4; // float
    public const nint m_nCPBroadcast = 0x1B8; // int32_t
}

public static class C_OP_WindForce { // CParticleFunctionForce
    public const nint m_vForce = 0x1BC; // Vector
}

public static class C_OP_WorldCollideConstraint { // CParticleFunctionConstraint
}

public static class C_OP_WorldTraceConstraint { // CParticleFunctionConstraint
    public const nint m_nCP = 0x1B0; // int32_t
    public const nint m_vecCpOffset = 0x1B4; // Vector
    public const nint m_nCollisionMode = 0x1C0; // ParticleCollisionMode_t
    public const nint m_nCollisionModeMin = 0x1C4; // ParticleCollisionMode_t
    public const nint m_nTraceSet = 0x1C8; // ParticleTraceSet_t
    public const nint m_CollisionGroupName = 0x1CC; // char[128]
    public const nint m_bWorldOnly = 0x24C; // bool
    public const nint m_bBrushOnly = 0x24D; // bool
    public const nint m_bIncludeWater = 0x24E; // bool
    public const nint m_nIgnoreCP = 0x250; // int32_t
    public const nint m_flCpMovementTolerance = 0x254; // float
    public const nint m_flRetestRate = 0x258; // float
    public const nint m_flTraceTolerance = 0x25C; // float
    public const nint m_flCollisionConfirmationSpeed = 0x260; // float
    public const nint m_nMaxTracesPerFrame = 0x264; // float
    public const nint m_flRadiusScale = 0x268; // CPerParticleFloatInput
    public const nint m_flBounceAmount = 0x3B8; // CPerParticleFloatInput
    public const nint m_flSlideAmount = 0x508; // CPerParticleFloatInput
    public const nint m_flRandomDirScale = 0x658; // CPerParticleFloatInput
    public const nint m_bDecayBounce = 0x7A8; // bool
    public const nint m_bKillonContact = 0x7A9; // bool
    public const nint m_flMinSpeed = 0x7AC; // float
    public const nint m_bSetNormal = 0x7B0; // bool
    public const nint m_nStickOnCollisionField = 0x7B4; // ParticleAttributeIndex_t
    public const nint m_flStopSpeed = 0x7B8; // CPerParticleFloatInput
    public const nint m_nEntityStickDataField = 0x908; // ParticleAttributeIndex_t
    public const nint m_nEntityStickNormalField = 0x90C; // ParticleAttributeIndex_t
}

public static class CollisionGroupContext_t {
    public const nint m_nCollisionGroupNumber = 0x0; // int32_t
}

public static class ControlPointReference_t {
    public const nint m_controlPointNameString = 0x0; // int32_t
    public const nint m_vOffsetFromControlPoint = 0x4; // Vector
    public const nint m_bOffsetInLocalSpace = 0x10; // bool
}

public static class FloatInputMaterialVariable_t {
    public const nint m_strVariable = 0x0; // CUtlString
    public const nint m_flInput = 0x8; // CParticleCollectionFloatInput
}

public static class IControlPointEditorData {
}

public static class IParticleCollection {
}

public static class IParticleEffect {
}

public static class IParticleSystemDefinition {
}

public static class MaterialVariable_t {
    public const nint m_strVariable = 0x0; // CUtlString
    public const nint m_nVariableField = 0x8; // ParticleAttributeIndex_t
    public const nint m_flScale = 0xC; // float
}

public static class ModelReference_t {
    public const nint m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_flRelativeProbabilityOfSpawn = 0x8; // float
}

public static class PARTICLE_EHANDLE__ {
    public const nint unused = 0x0; // int32_t
}

public static class PARTICLE_WORLD_HANDLE__ {
    public const nint unused = 0x0; // int32_t
}

public static class ParticleAttributeIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class ParticleChildrenInfo_t {
    public const nint m_ChildRef = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_flDelay = 0x8; // float
    public const nint m_bEndCap = 0xC; // bool
    public const nint m_bDisableChild = 0xD; // bool
    public const nint m_nDetailLevel = 0x10; // ParticleDetailLevel_t
}

public static class ParticleControlPointConfiguration_t {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
    public const nint m_previewState = 0x20; // ParticlePreviewState_t
}

public static class ParticleControlPointDriver_t {
    public const nint m_iControlPoint = 0x0; // int32_t
    public const nint m_iAttachType = 0x4; // ParticleAttachment_t
    public const nint m_attachmentName = 0x8; // CUtlString
    public const nint m_vecOffset = 0x10; // Vector
    public const nint m_angOffset = 0x1C; // QAngle
    public const nint m_entityName = 0x28; // CUtlString
}

public static class ParticleNamedValueConfiguration_t {
    public const nint m_ConfigName = 0x0; // CUtlString
    public const nint m_ConfigValue = 0x8; // KeyValues3
    public const nint m_iAttachType = 0x18; // ParticleAttachment_t
    public const nint m_BoundEntityPath = 0x20; // CUtlString
    public const nint m_strEntityScope = 0x28; // CUtlString
    public const nint m_strAttachmentName = 0x30; // CUtlString
}

public static class ParticleNamedValueSource_t {
    public const nint m_Name = 0x0; // CUtlString
    public const nint m_IsPublic = 0x8; // bool
    public const nint m_ValueType = 0xC; // PulseValueType_t
    public const nint m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
    public const nint m_NamedConfigs = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
}

public static class ParticlePreviewBodyGroup_t {
    public const nint m_bodyGroupName = 0x0; // CUtlString
    public const nint m_nValue = 0x8; // int32_t
}

public static class ParticlePreviewState_t {
    public const nint m_previewModel = 0x0; // CUtlString
    public const nint m_nModSpecificData = 0x8; // uint32_t
    public const nint m_groundType = 0xC; // PetGroundType_t
    public const nint m_sequenceName = 0x10; // CUtlString
    public const nint m_nFireParticleOnSequenceFrame = 0x18; // int32_t
    public const nint m_hitboxSetName = 0x20; // CUtlString
    public const nint m_materialGroupName = 0x28; // CUtlString
    public const nint m_vecBodyGroups = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
    public const nint m_flPlaybackSpeed = 0x48; // float
    public const nint m_flParticleSimulationRate = 0x4C; // float
    public const nint m_bShouldDrawHitboxes = 0x50; // bool
    public const nint m_bShouldDrawAttachments = 0x51; // bool
    public const nint m_bShouldDrawAttachmentNames = 0x52; // bool
    public const nint m_bShouldDrawControlPointAxes = 0x53; // bool
    public const nint m_bAnimationNonLooping = 0x54; // bool
    public const nint m_vecPreviewGravity = 0x58; // Vector
}

public static class PointDefinitionWithTimeValues_t { // PointDefinition_t
    public const nint m_flTimeDuration = 0x14; // float
}

public static class PointDefinition_t {
    public const nint m_nControlPoint = 0x0; // int32_t
    public const nint m_bLocalCoords = 0x4; // bool
    public const nint m_vOffset = 0x8; // Vector
}

public static class RenderProjectedMaterial_t {
    public const nint m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class SequenceWeightedList_t {
    public const nint m_nSequence = 0x0; // int32_t
    public const nint m_flRelativeWeight = 0x4; // float
}

public static class TextureControls_t {
    public const nint m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
    public const nint m_flFinalTextureScaleV = 0x150; // CParticleCollectionRendererFloatInput
    public const nint m_flFinalTextureOffsetU = 0x2A0; // CParticleCollectionRendererFloatInput
    public const nint m_flFinalTextureOffsetV = 0x3F0; // CParticleCollectionRendererFloatInput
    public const nint m_flFinalTextureUVRotation = 0x540; // CParticleCollectionRendererFloatInput
    public const nint m_flZoomScale = 0x690; // CParticleCollectionRendererFloatInput
    public const nint m_flDistortion = 0x7E0; // CParticleCollectionRendererFloatInput
    public const nint m_bRandomizeOffsets = 0x930; // bool
    public const nint m_bClampUVs = 0x931; // bool
    public const nint m_nPerParticleBlend = 0x934; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleScale = 0x938; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleOffsetU = 0x93C; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleOffsetV = 0x940; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleRotation = 0x944; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleZoom = 0x948; // SpriteCardPerParticleScale_t
    public const nint m_nPerParticleDistortion = 0x94C; // SpriteCardPerParticleScale_t
}

public static class TextureGroup_t {
    public const nint m_bEnabled = 0x0; // bool
    public const nint m_bReplaceTextureWithGradient = 0x1; // bool
    public const nint m_hTexture = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_Gradient = 0x10; // CColorGradient
    public const nint m_nTextureType = 0x28; // SpriteCardTextureType_t
    public const nint m_nTextureChannels = 0x2C; // SpriteCardTextureChannel_t
    public const nint m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
    public const nint m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
    public const nint m_TextureControls = 0x188; // TextureControls_t
}

public static class VecInputMaterialVariable_t {
    public const nint m_strVariable = 0x0; // CUtlString
    public const nint m_vecInput = 0x8; // CParticleCollectionVecInput
}