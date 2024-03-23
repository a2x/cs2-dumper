'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CBaseRendererSource2: # CParticleFunctionRenderer
    m_flRadiusScale = 0x200 # CParticleCollectionRendererFloatInput
    m_flAlphaScale = 0x358 # CParticleCollectionRendererFloatInput
    m_flRollScale = 0x4B0 # CParticleCollectionRendererFloatInput
    m_nAlpha2Field = 0x608 # ParticleAttributeIndex_t
    m_vecColorScale = 0x610 # CParticleCollectionRendererVecInput
    m_nColorBlendType = 0xC68 # ParticleColorBlendType_t
    m_nShaderType = 0xC6C # SpriteCardShaderType_t
    m_strShaderOverride = 0xC70 # CUtlString
    m_flCenterXOffset = 0xC78 # CParticleCollectionRendererFloatInput
    m_flCenterYOffset = 0xDD0 # CParticleCollectionRendererFloatInput
    m_flBumpStrength = 0xF28 # float
    m_nCropTextureOverride = 0xF2C # ParticleSequenceCropOverride_t
    m_vecTexturesInput = 0xF30 # CUtlVector<TextureGroup_t>
    m_flAnimationRate = 0xF48 # float
    m_nAnimationType = 0xF4C # AnimationType_t
    m_bAnimateInFPS = 0xF50 # bool
    m_flSelfIllumAmount = 0xF58 # CParticleCollectionRendererFloatInput
    m_flDiffuseAmount = 0x10B0 # CParticleCollectionRendererFloatInput
    m_flDiffuseClamp = 0x1208 # CParticleCollectionRendererFloatInput
    m_nLightingControlPoint = 0x1360 # int32_t
    m_nSelfIllumPerParticle = 0x1364 # ParticleAttributeIndex_t
    m_nOutputBlendMode = 0x1368 # ParticleOutputBlendMode_t
    m_bGammaCorrectVertexColors = 0x136C # bool
    m_bSaturateColorPreAlphaBlend = 0x136D # bool
    m_flAddSelfAmount = 0x1370 # CParticleCollectionRendererFloatInput
    m_flDesaturation = 0x14C8 # CParticleCollectionRendererFloatInput
    m_flOverbrightFactor = 0x1620 # CParticleCollectionRendererFloatInput
    m_nHSVShiftControlPoint = 0x1778 # int32_t
    m_nFogType = 0x177C # ParticleFogType_t
    m_flFogAmount = 0x1780 # CParticleCollectionRendererFloatInput
    m_bTintByFOW = 0x18D8 # bool
    m_bTintByGlobalLight = 0x18D9 # bool
    m_nPerParticleAlphaReference = 0x18DC # SpriteCardPerParticleScale_t
    m_nPerParticleAlphaRefWindow = 0x18E0 # SpriteCardPerParticleScale_t
    m_nAlphaReferenceType = 0x18E4 # ParticleAlphaReferenceType_t
    m_flAlphaReferenceSoftness = 0x18E8 # CParticleCollectionRendererFloatInput
    m_flSourceAlphaValueToMapToZero = 0x1A40 # CParticleCollectionRendererFloatInput
    m_flSourceAlphaValueToMapToOne = 0x1B98 # CParticleCollectionRendererFloatInput
    m_bRefract = 0x1CF0 # bool
    m_bRefractSolid = 0x1CF1 # bool
    m_flRefractAmount = 0x1CF8 # CParticleCollectionRendererFloatInput
    m_nRefractBlurRadius = 0x1E50 # int32_t
    m_nRefractBlurType = 0x1E54 # BlurFilterType_t
    m_bOnlyRenderInEffectsBloomPass = 0x1E58 # bool
    m_bOnlyRenderInEffectsWaterPass = 0x1E59 # bool
    m_bUseMixedResolutionRendering = 0x1E5A # bool
    m_bOnlyRenderInEffecsGameOverlay = 0x1E5B # bool
    m_stencilTestID = 0x1E5C # char[128]
    m_bStencilTestExclude = 0x1EDC # bool
    m_stencilWriteID = 0x1EDD # char[128]
    m_bWriteStencilOnDepthPass = 0x1F5D # bool
    m_bWriteStencilOnDepthFail = 0x1F5E # bool
    m_bReverseZBuffering = 0x1F5F # bool
    m_bDisableZBuffering = 0x1F60 # bool
    m_nFeatheringMode = 0x1F64 # ParticleDepthFeatheringMode_t
    m_flFeatheringMinDist = 0x1F68 # CParticleCollectionRendererFloatInput
    m_flFeatheringMaxDist = 0x20C0 # CParticleCollectionRendererFloatInput
    m_flFeatheringFilter = 0x2218 # CParticleCollectionRendererFloatInput
    m_flDepthBias = 0x2370 # CParticleCollectionRendererFloatInput
    m_nSortMethod = 0x24C8 # ParticleSortingChoiceList_t
    m_bBlendFramesSeq0 = 0x24CC # bool
    m_bMaxLuminanceBlendingSequence0 = 0x24CD # bool

class CBaseTrailRenderer: # CBaseRendererSource2
    m_nOrientationType = 0x2710 # ParticleOrientationChoiceList_t
    m_nOrientationControlPoint = 0x2714 # int32_t
    m_flMinSize = 0x2718 # float
    m_flMaxSize = 0x271C # float
    m_flStartFadeSize = 0x2720 # CParticleCollectionRendererFloatInput
    m_flEndFadeSize = 0x2878 # CParticleCollectionRendererFloatInput
    m_bClampV = 0x29D0 # bool

class CGeneralRandomRotation: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flDegrees = 0x1C4 # float
    m_flDegreesMin = 0x1C8 # float
    m_flDegreesMax = 0x1CC # float
    m_flRotationRandExponent = 0x1D0 # float
    m_bRandomlyFlipDirection = 0x1D4 # bool

class CGeneralSpin: # CParticleFunctionOperator
    m_nSpinRateDegrees = 0x1C0 # int32_t
    m_nSpinRateMinDegrees = 0x1C4 # int32_t
    m_fSpinRateStopTime = 0x1CC # float

class CNewParticleEffect: # IParticleEffect
    m_pNext = 0x10 # CNewParticleEffect*
    m_pPrev = 0x18 # CNewParticleEffect*
    m_pParticles = 0x20 # IParticleCollection*
    m_pDebugName = 0x28 # char*
    m_bDontRemove = 0x0 # bitfield:1
    m_bRemove = 0x0 # bitfield:1
    m_bNeedsBBoxUpdate = 0x0 # bitfield:1
    m_bIsFirstFrame = 0x0 # bitfield:1
    m_bAutoUpdateBBox = 0x0 # bitfield:1
    m_bAllocated = 0x0 # bitfield:1
    m_bSimulate = 0x0 # bitfield:1
    m_bShouldPerformCullCheck = 0x0 # bitfield:1
    m_bForceNoDraw = 0x0 # bitfield:1
    m_bShouldSave = 0x0 # bitfield:1
    m_bDisableAggregation = 0x0 # bitfield:1
    m_bShouldSimulateDuringGamePaused = 0x0 # bitfield:1
    m_bShouldCheckFoW = 0x0 # bitfield:1
    m_vSortOrigin = 0x40 # Vector
    m_flScale = 0x4C # float
    m_hOwner = 0x50 # PARTICLE_EHANDLE__*
    m_pOwningParticleProperty = 0x58 # CParticleProperty*
    m_flFreezeTransitionStart = 0x70 # float
    m_flFreezeTransitionDuration = 0x74 # float
    m_flFreezeTransitionOverride = 0x78 # float
    m_bFreezeTransitionActive = 0x7C # bool
    m_bFreezeTargetState = 0x7D # bool
    m_bCanFreeze = 0x7E # bool
    m_LastMin = 0x80 # Vector
    m_LastMax = 0x8C # Vector
    m_nSplitScreenUser = 0x98 # CSplitScreenSlot
    m_vecAggregationCenter = 0x9C # Vector
    m_RefCount = 0xC0 # int32_t

class CParticleCollectionBindingInstance: # CBasePulseGraphInstance

class CParticleCollectionFloatInput: # CParticleFloatInput

class CParticleCollectionRendererFloatInput: # CParticleCollectionFloatInput

class CParticleCollectionRendererVecInput: # CParticleCollectionVecInput

class CParticleCollectionVecInput: # CParticleVecInput

class CParticleFloatInput: # CParticleInput
    m_nType = 0x10 # ParticleFloatType_t
    m_nMapType = 0x14 # ParticleFloatMapType_t
    m_flLiteralValue = 0x18 # float
    m_NamedValue = 0x20 # CParticleNamedValueRef
    m_nControlPoint = 0x60 # int32_t
    m_nScalarAttribute = 0x64 # ParticleAttributeIndex_t
    m_nVectorAttribute = 0x68 # ParticleAttributeIndex_t
    m_nVectorComponent = 0x6C # int32_t
    m_flRandomMin = 0x70 # float
    m_flRandomMax = 0x74 # float
    m_bHasRandomSignFlip = 0x78 # bool
    m_nRandomSeed = 0x7C # int32_t
    m_nRandomMode = 0x80 # ParticleFloatRandomMode_t
    m_flLOD0 = 0x88 # float
    m_flLOD1 = 0x8C # float
    m_flLOD2 = 0x90 # float
    m_flLOD3 = 0x94 # float
    m_nNoiseInputVectorAttribute = 0x98 # ParticleAttributeIndex_t
    m_flNoiseOutputMin = 0x9C # float
    m_flNoiseOutputMax = 0xA0 # float
    m_flNoiseScale = 0xA4 # float
    m_vecNoiseOffsetRate = 0xA8 # Vector
    m_flNoiseOffset = 0xB4 # float
    m_nNoiseOctaves = 0xB8 # int32_t
    m_nNoiseTurbulence = 0xBC # PFNoiseTurbulence_t
    m_nNoiseType = 0xC0 # PFNoiseType_t
    m_nNoiseModifier = 0xC4 # PFNoiseModifier_t
    m_flNoiseTurbulenceScale = 0xC8 # float
    m_flNoiseTurbulenceMix = 0xCC # float
    m_flNoiseImgPreviewScale = 0xD0 # float
    m_bNoiseImgPreviewLive = 0xD4 # bool
    m_flNoCameraFallback = 0xE0 # float
    m_bUseBoundsCenter = 0xE4 # bool
    m_nInputMode = 0xE8 # ParticleFloatInputMode_t
    m_flMultFactor = 0xEC # float
    m_flInput0 = 0xF0 # float
    m_flInput1 = 0xF4 # float
    m_flOutput0 = 0xF8 # float
    m_flOutput1 = 0xFC # float
    m_flNotchedRangeMin = 0x100 # float
    m_flNotchedRangeMax = 0x104 # float
    m_flNotchedOutputOutside = 0x108 # float
    m_flNotchedOutputInside = 0x10C # float
    m_nBiasType = 0x110 # ParticleFloatBiasType_t
    m_flBiasParameter = 0x114 # float
    m_Curve = 0x118 # CPiecewiseCurve

class CParticleFunction:
    m_flOpStrength = 0x8 # CParticleCollectionFloatInput
    m_nOpEndCapState = 0x160 # ParticleEndcapMode_t
    m_flOpStartFadeInTime = 0x164 # float
    m_flOpEndFadeInTime = 0x168 # float
    m_flOpStartFadeOutTime = 0x16C # float
    m_flOpEndFadeOutTime = 0x170 # float
    m_flOpFadeOscillatePeriod = 0x174 # float
    m_bNormalizeToStopTime = 0x178 # bool
    m_flOpTimeOffsetMin = 0x17C # float
    m_flOpTimeOffsetMax = 0x180 # float
    m_nOpTimeOffsetSeed = 0x184 # int32_t
    m_nOpTimeScaleSeed = 0x188 # int32_t
    m_flOpTimeScaleMin = 0x18C # float
    m_flOpTimeScaleMax = 0x190 # float
    m_bDisableOperator = 0x196 # bool
    m_Notes = 0x198 # CUtlString

class CParticleFunctionConstraint: # CParticleFunction

class CParticleFunctionEmitter: # CParticleFunction
    m_nEmitterIndex = 0x1B8 # int32_t

class CParticleFunctionForce: # CParticleFunction

class CParticleFunctionInitializer: # CParticleFunction
    m_nAssociatedEmitterIndex = 0x1B8 # int32_t

class CParticleFunctionOperator: # CParticleFunction

class CParticleFunctionPreEmission: # CParticleFunctionOperator
    m_bRunOnce = 0x1C0 # bool

class CParticleFunctionRenderer: # CParticleFunction
    VisibilityInputs = 0x1B8 # CParticleVisibilityInputs
    m_bCannotBeRefracted = 0x1FC # bool
    m_bSkipRenderingOnMobile = 0x1FD # bool

class CParticleInput:

class CParticleModelInput: # CParticleInput
    m_nType = 0x10 # ParticleModelType_t
    m_NamedValue = 0x18 # CParticleNamedValueRef
    m_nControlPoint = 0x58 # int32_t

class CParticleProperty:

class CParticleRemapFloatInput: # CParticleFloatInput

class CParticleSystemDefinition: # IParticleSystemDefinition
    m_nBehaviorVersion = 0x8 # int32_t
    m_PreEmissionOperators = 0x10 # CUtlVector<CParticleFunctionPreEmission*>
    m_Emitters = 0x28 # CUtlVector<CParticleFunctionEmitter*>
    m_Initializers = 0x40 # CUtlVector<CParticleFunctionInitializer*>
    m_Operators = 0x58 # CUtlVector<CParticleFunctionOperator*>
    m_ForceGenerators = 0x70 # CUtlVector<CParticleFunctionForce*>
    m_Constraints = 0x88 # CUtlVector<CParticleFunctionConstraint*>
    m_Renderers = 0xA0 # CUtlVector<CParticleFunctionRenderer*>
    m_Children = 0xB8 # CUtlVector<ParticleChildrenInfo_t>
    m_nFirstMultipleOverride_BackwardCompat = 0x178 # int32_t
    m_nInitialParticles = 0x210 # int32_t
    m_nMaxParticles = 0x214 # int32_t
    m_nGroupID = 0x218 # int32_t
    m_BoundingBoxMin = 0x21C # Vector
    m_BoundingBoxMax = 0x228 # Vector
    m_flDepthSortBias = 0x234 # float
    m_nSortOverridePositionCP = 0x238 # int32_t
    m_bInfiniteBounds = 0x23C # bool
    m_bEnableNamedValues = 0x23D # bool
    m_NamedValueDomain = 0x240 # CUtlString
    m_NamedValueLocals = 0x248 # CUtlVector<ParticleNamedValueSource_t*>
    m_ConstantColor = 0x260 # Color
    m_ConstantNormal = 0x264 # Vector
    m_flConstantRadius = 0x270 # float
    m_flConstantRotation = 0x274 # float
    m_flConstantRotationSpeed = 0x278 # float
    m_flConstantLifespan = 0x27C # float
    m_nConstantSequenceNumber = 0x280 # int32_t
    m_nConstantSequenceNumber1 = 0x284 # int32_t
    m_nSnapshotControlPoint = 0x288 # int32_t
    m_hSnapshot = 0x290 # CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    m_pszCullReplacementName = 0x298 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flCullRadius = 0x2A0 # float
    m_flCullFillCost = 0x2A4 # float
    m_nCullControlPoint = 0x2A8 # int32_t
    m_hFallback = 0x2B0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nFallbackMaxCount = 0x2B8 # int32_t
    m_hLowViolenceDef = 0x2C0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_hReferenceReplacement = 0x2C8 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flPreSimulationTime = 0x2D0 # float
    m_flStopSimulationAfterTime = 0x2D4 # float
    m_flMaximumTimeStep = 0x2D8 # float
    m_flMaximumSimTime = 0x2DC # float
    m_flMinimumSimTime = 0x2E0 # float
    m_flMinimumTimeStep = 0x2E4 # float
    m_nMinimumFrames = 0x2E8 # int32_t
    m_nMinCPULevel = 0x2EC # int32_t
    m_nMinGPULevel = 0x2F0 # int32_t
    m_flNoDrawTimeToGoToSleep = 0x2F4 # float
    m_flMaxDrawDistance = 0x2F8 # float
    m_flStartFadeDistance = 0x2FC # float
    m_flMaxCreationDistance = 0x300 # float
    m_nAggregationMinAvailableParticles = 0x304 # int32_t
    m_flAggregateRadius = 0x308 # float
    m_bShouldBatch = 0x30C # bool
    m_bShouldHitboxesFallbackToRenderBounds = 0x30D # bool
    m_bShouldHitboxesFallbackToSnapshot = 0x30E # bool
    m_nViewModelEffect = 0x310 # InheritableBoolType_t
    m_bScreenSpaceEffect = 0x314 # bool
    m_pszTargetLayerID = 0x318 # CUtlSymbolLarge
    m_nSkipRenderControlPoint = 0x320 # int32_t
    m_nAllowRenderControlPoint = 0x324 # int32_t
    m_bShouldSort = 0x328 # bool
    m_controlPointConfigurations = 0x370 # CUtlVector<ParticleControlPointConfiguration_t>

class CParticleTransformInput: # CParticleInput
    m_nType = 0x10 # ParticleTransformType_t
    m_NamedValue = 0x18 # CParticleNamedValueRef
    m_bFollowNamedValue = 0x58 # bool
    m_bSupportsDisabled = 0x59 # bool
    m_bUseOrientation = 0x5A # bool
    m_nControlPoint = 0x5C # int32_t
    m_nControlPointRangeMax = 0x60 # int32_t
    m_flEndCPGrowthTime = 0x64 # float

class CParticleVariableRef:
    m_variableName = 0x0 # CKV3MemberNameWithStorage
    m_variableType = 0x38 # PulseValueType_t

class CParticleVecInput: # CParticleInput
    m_nType = 0x10 # ParticleVecType_t
    m_vLiteralValue = 0x14 # Vector
    m_LiteralColor = 0x20 # Color
    m_NamedValue = 0x28 # CParticleNamedValueRef
    m_bFollowNamedValue = 0x68 # bool
    m_nVectorAttribute = 0x6C # ParticleAttributeIndex_t
    m_vVectorAttributeScale = 0x70 # Vector
    m_nControlPoint = 0x7C # int32_t
    m_nDeltaControlPoint = 0x80 # int32_t
    m_vCPValueScale = 0x84 # Vector
    m_vCPRelativePosition = 0x90 # Vector
    m_vCPRelativeDir = 0x9C # Vector
    m_FloatComponentX = 0xA8 # CParticleFloatInput
    m_FloatComponentY = 0x200 # CParticleFloatInput
    m_FloatComponentZ = 0x358 # CParticleFloatInput
    m_FloatInterp = 0x4B0 # CParticleFloatInput
    m_flInterpInput0 = 0x608 # float
    m_flInterpInput1 = 0x60C # float
    m_vInterpOutput0 = 0x610 # Vector
    m_vInterpOutput1 = 0x61C # Vector
    m_Gradient = 0x628 # CColorGradient
    m_vRandomMin = 0x640 # Vector
    m_vRandomMax = 0x64C # Vector

class CParticleVisibilityInputs:
    m_flCameraBias = 0x0 # float
    m_nCPin = 0x4 # int32_t
    m_flProxyRadius = 0x8 # float
    m_flInputMin = 0xC # float
    m_flInputMax = 0x10 # float
    m_flNoPixelVisibilityFallback = 0x14 # float
    m_flDistanceInputMin = 0x18 # float
    m_flDistanceInputMax = 0x1C # float
    m_flDotInputMin = 0x20 # float
    m_flDotInputMax = 0x24 # float
    m_bDotCPAngles = 0x28 # bool
    m_bDotCameraAngles = 0x29 # bool
    m_flAlphaScaleMin = 0x2C # float
    m_flAlphaScaleMax = 0x30 # float
    m_flRadiusScaleMin = 0x34 # float
    m_flRadiusScaleMax = 0x38 # float
    m_flRadiusScaleFOVBase = 0x3C # float
    m_bRightEye = 0x40 # bool

class CPathParameters:
    m_nStartControlPointNumber = 0x0 # int32_t
    m_nEndControlPointNumber = 0x4 # int32_t
    m_nBulgeControl = 0x8 # int32_t
    m_flBulge = 0xC # float
    m_flMidPoint = 0x10 # float
    m_vStartPointOffset = 0x14 # Vector
    m_vMidPointOffset = 0x20 # Vector
    m_vEndOffset = 0x2C # Vector

class CPerParticleFloatInput: # CParticleFloatInput

class CPerParticleVecInput: # CParticleVecInput

class CRandomNumberGeneratorParameters:
    m_bDistributeEvenly = 0x0 # bool
    m_nSeed = 0x4 # int32_t

class CSpinUpdateBase: # CParticleFunctionOperator

class C_INIT_AddVectorToVector: # CParticleFunctionInitializer
    m_vecScale = 0x1C0 # Vector
    m_nFieldOutput = 0x1CC # ParticleAttributeIndex_t
    m_nFieldInput = 0x1D0 # ParticleAttributeIndex_t
    m_vOffsetMin = 0x1D4 # Vector
    m_vOffsetMax = 0x1E0 # Vector
    m_randomnessParameters = 0x1EC # CRandomNumberGeneratorParameters

class C_INIT_AgeNoise: # CParticleFunctionInitializer
    m_bAbsVal = 0x1C0 # bool
    m_bAbsValInv = 0x1C1 # bool
    m_flOffset = 0x1C4 # float
    m_flAgeMin = 0x1C8 # float
    m_flAgeMax = 0x1CC # float
    m_flNoiseScale = 0x1D0 # float
    m_flNoiseScaleLoc = 0x1D4 # float
    m_vecOffsetLoc = 0x1D8 # Vector

class C_INIT_ChaoticAttractor: # CParticleFunctionInitializer
    m_flAParm = 0x1C0 # float
    m_flBParm = 0x1C4 # float
    m_flCParm = 0x1C8 # float
    m_flDParm = 0x1CC # float
    m_flScale = 0x1D0 # float
    m_flSpeedMin = 0x1D4 # float
    m_flSpeedMax = 0x1D8 # float
    m_nBaseCP = 0x1DC # int32_t
    m_bUniformSpeed = 0x1E0 # bool

class C_INIT_ColorLitPerParticle: # CParticleFunctionInitializer
    m_ColorMin = 0x1D8 # Color
    m_ColorMax = 0x1DC # Color
    m_TintMin = 0x1E0 # Color
    m_TintMax = 0x1E4 # Color
    m_flTintPerc = 0x1E8 # float
    m_nTintBlendMode = 0x1EC # ParticleColorBlendMode_t
    m_flLightAmplification = 0x1F0 # float

class C_INIT_CreateAlongPath: # CParticleFunctionInitializer
    m_fMaxDistance = 0x1C0 # float
    m_PathParams = 0x1D0 # CPathParameters
    m_bUseRandomCPs = 0x210 # bool
    m_vEndOffset = 0x214 # Vector
    m_bSaveOffset = 0x220 # bool

class C_INIT_CreateFromCPs: # CParticleFunctionInitializer
    m_nIncrement = 0x1C0 # int32_t
    m_nMinCP = 0x1C4 # int32_t
    m_nMaxCP = 0x1C8 # int32_t
    m_nDynamicCPCount = 0x1D0 # CParticleCollectionFloatInput

class C_INIT_CreateFromParentParticles: # CParticleFunctionInitializer
    m_flVelocityScale = 0x1C0 # float
    m_flIncrement = 0x1C4 # float
    m_bRandomDistribution = 0x1C8 # bool
    m_nRandomSeed = 0x1CC # int32_t
    m_bSubFrame = 0x1D0 # bool

class C_INIT_CreateFromPlaneCache: # CParticleFunctionInitializer
    m_vecOffsetMin = 0x1C0 # Vector
    m_vecOffsetMax = 0x1CC # Vector
    m_bUseNormal = 0x1D9 # bool

class C_INIT_CreateInEpitrochoid: # CParticleFunctionInitializer
    m_nComponent1 = 0x1C0 # int32_t
    m_nComponent2 = 0x1C4 # int32_t
    m_TransformInput = 0x1C8 # CParticleTransformInput
    m_flParticleDensity = 0x230 # CPerParticleFloatInput
    m_flOffset = 0x388 # CPerParticleFloatInput
    m_flRadius1 = 0x4E0 # CPerParticleFloatInput
    m_flRadius2 = 0x638 # CPerParticleFloatInput
    m_bUseCount = 0x790 # bool
    m_bUseLocalCoords = 0x791 # bool
    m_bOffsetExistingPos = 0x792 # bool

class C_INIT_CreateOnGrid: # CParticleFunctionInitializer
    m_nXCount = 0x1C0 # CParticleCollectionFloatInput
    m_nYCount = 0x318 # CParticleCollectionFloatInput
    m_nZCount = 0x470 # CParticleCollectionFloatInput
    m_nXSpacing = 0x5C8 # CParticleCollectionFloatInput
    m_nYSpacing = 0x720 # CParticleCollectionFloatInput
    m_nZSpacing = 0x878 # CParticleCollectionFloatInput
    m_nControlPointNumber = 0x9D0 # int32_t
    m_bLocalSpace = 0x9D4 # bool
    m_bCenter = 0x9D5 # bool
    m_bHollow = 0x9D6 # bool

class C_INIT_CreateOnModel: # CParticleFunctionInitializer
    m_modelInput = 0x1C0 # CParticleModelInput
    m_transformInput = 0x220 # CParticleTransformInput
    m_nForceInModel = 0x288 # int32_t
    m_nDesiredHitbox = 0x28C # int32_t
    m_nHitboxValueFromControlPointIndex = 0x290 # int32_t
    m_vecHitBoxScale = 0x298 # CParticleCollectionVecInput
    m_flBoneVelocity = 0x8F0 # float
    m_flMaxBoneVelocity = 0x8F4 # float
    m_vecDirectionBias = 0x8F8 # CParticleCollectionVecInput
    m_HitboxSetName = 0xF50 # char[128]
    m_bLocalCoords = 0xFD0 # bool
    m_bUseBones = 0xFD1 # bool
    m_bUseMesh = 0xFD2 # bool
    m_flShellSize = 0xFD8 # CParticleCollectionFloatInput

class C_INIT_CreateOnModelAtHeight: # CParticleFunctionInitializer
    m_bUseBones = 0x1C0 # bool
    m_bForceZ = 0x1C1 # bool
    m_nControlPointNumber = 0x1C4 # int32_t
    m_nHeightCP = 0x1C8 # int32_t
    m_bUseWaterHeight = 0x1CC # bool
    m_flDesiredHeight = 0x1D0 # CParticleCollectionFloatInput
    m_vecHitBoxScale = 0x328 # CParticleCollectionVecInput
    m_vecDirectionBias = 0x980 # CParticleCollectionVecInput
    m_nBiasType = 0xFD8 # ParticleHitboxBiasType_t
    m_bLocalCoords = 0xFDC # bool
    m_bPreferMovingBoxes = 0xFDD # bool
    m_HitboxSetName = 0xFDE # char[128]
    m_flHitboxVelocityScale = 0x1060 # CParticleCollectionFloatInput
    m_flMaxBoneVelocity = 0x11B8 # CParticleCollectionFloatInput

class C_INIT_CreateParticleImpulse: # CParticleFunctionInitializer
    m_InputRadius = 0x1C0 # CPerParticleFloatInput
    m_InputMagnitude = 0x318 # CPerParticleFloatInput
    m_nFalloffFunction = 0x470 # ParticleFalloffFunction_t
    m_InputFalloffExp = 0x478 # CPerParticleFloatInput
    m_nImpulseType = 0x5D0 # ParticleImpulseType_t

class C_INIT_CreatePhyllotaxis: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nScaleCP = 0x1C4 # int32_t
    m_nComponent = 0x1C8 # int32_t
    m_fRadCentCore = 0x1CC # float
    m_fRadPerPoint = 0x1D0 # float
    m_fRadPerPointTo = 0x1D4 # float
    m_fpointAngle = 0x1D8 # float
    m_fsizeOverall = 0x1DC # float
    m_fRadBias = 0x1E0 # float
    m_fMinRad = 0x1E4 # float
    m_fDistBias = 0x1E8 # float
    m_bUseLocalCoords = 0x1EC # bool
    m_bUseWithContEmit = 0x1ED # bool
    m_bUseOrigRadius = 0x1EE # bool

class C_INIT_CreateSequentialPath: # CParticleFunctionInitializer
    m_fMaxDistance = 0x1C0 # float
    m_flNumToAssign = 0x1C4 # float
    m_bLoop = 0x1C8 # bool
    m_bCPPairs = 0x1C9 # bool
    m_bSaveOffset = 0x1CA # bool
    m_PathParams = 0x1D0 # CPathParameters

class C_INIT_CreateSequentialPathV2: # CParticleFunctionInitializer
    m_fMaxDistance = 0x1C0 # CPerParticleFloatInput
    m_flNumToAssign = 0x318 # CParticleCollectionFloatInput
    m_bLoop = 0x470 # bool
    m_bCPPairs = 0x471 # bool
    m_bSaveOffset = 0x472 # bool
    m_PathParams = 0x480 # CPathParameters

class C_INIT_CreateSpiralSphere: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nOverrideCP = 0x1C4 # int32_t
    m_nDensity = 0x1C8 # int32_t
    m_flInitialRadius = 0x1CC # float
    m_flInitialSpeedMin = 0x1D0 # float
    m_flInitialSpeedMax = 0x1D4 # float
    m_bUseParticleCount = 0x1D8 # bool

class C_INIT_CreateWithinBox: # CParticleFunctionInitializer
    m_vecMin = 0x1C0 # CPerParticleVecInput
    m_vecMax = 0x818 # CPerParticleVecInput
    m_nControlPointNumber = 0xE70 # int32_t
    m_bLocalSpace = 0xE74 # bool
    m_randomnessParameters = 0xE78 # CRandomNumberGeneratorParameters

class C_INIT_CreateWithinSphereTransform: # CParticleFunctionInitializer
    m_fRadiusMin = 0x1C0 # CPerParticleFloatInput
    m_fRadiusMax = 0x318 # CPerParticleFloatInput
    m_vecDistanceBias = 0x470 # CPerParticleVecInput
    m_vecDistanceBiasAbs = 0xAC8 # Vector
    m_TransformInput = 0xAD8 # CParticleTransformInput
    m_fSpeedMin = 0xB40 # CPerParticleFloatInput
    m_fSpeedMax = 0xC98 # CPerParticleFloatInput
    m_fSpeedRandExp = 0xDF0 # float
    m_bLocalCoords = 0xDF4 # bool
    m_flEndCPGrowthTime = 0xDF8 # float
    m_LocalCoordinateSystemSpeedMin = 0xE00 # CPerParticleVecInput
    m_LocalCoordinateSystemSpeedMax = 0x1458 # CPerParticleVecInput
    m_nFieldOutput = 0x1AB0 # ParticleAttributeIndex_t
    m_nFieldVelocity = 0x1AB4 # ParticleAttributeIndex_t

class C_INIT_CreationNoise: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_bAbsVal = 0x1C4 # bool
    m_bAbsValInv = 0x1C5 # bool
    m_flOffset = 0x1C8 # float
    m_flOutputMin = 0x1CC # float
    m_flOutputMax = 0x1D0 # float
    m_flNoiseScale = 0x1D4 # float
    m_flNoiseScaleLoc = 0x1D8 # float
    m_vecOffsetLoc = 0x1DC # Vector
    m_flWorldTimeScale = 0x1E8 # float

class C_INIT_DistanceCull: # CParticleFunctionInitializer
    m_nControlPoint = 0x1C0 # int32_t
    m_flDistance = 0x1C8 # CParticleCollectionFloatInput
    m_bCullInside = 0x320 # bool

class C_INIT_DistanceToCPInit: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # CPerParticleFloatInput
    m_flInputMax = 0x320 # CPerParticleFloatInput
    m_flOutputMin = 0x478 # CPerParticleFloatInput
    m_flOutputMax = 0x5D0 # CPerParticleFloatInput
    m_nStartCP = 0x728 # int32_t
    m_bLOS = 0x72C # bool
    m_CollisionGroupName = 0x72D # char[128]
    m_nTraceSet = 0x7B0 # ParticleTraceSet_t
    m_flMaxTraceLength = 0x7B8 # CPerParticleFloatInput
    m_flLOSScale = 0x910 # float
    m_nSetMethod = 0x914 # ParticleSetMethod_t
    m_bActiveRange = 0x918 # bool
    m_vecDistanceScale = 0x91C # Vector
    m_flRemapBias = 0x928 # float

class C_INIT_DistanceToNeighborCull: # CParticleFunctionInitializer
    m_flDistance = 0x1C0 # CPerParticleFloatInput

class C_INIT_GlobalScale: # CParticleFunctionInitializer
    m_flScale = 0x1C0 # float
    m_nScaleControlPointNumber = 0x1C4 # int32_t
    m_nControlPointNumber = 0x1C8 # int32_t
    m_bScaleRadius = 0x1CC # bool
    m_bScalePosition = 0x1CD # bool
    m_bScaleVelocity = 0x1CE # bool

class C_INIT_InheritFromParentParticles: # CParticleFunctionInitializer
    m_flScale = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nIncrement = 0x1C8 # int32_t
    m_bRandomDistribution = 0x1CC # bool
    m_nRandomSeed = 0x1D0 # int32_t

class C_INIT_InheritVelocity: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_flVelocityScale = 0x1C4 # float

class C_INIT_InitFloat: # CParticleFunctionInitializer
    m_InputValue = 0x1C0 # CPerParticleFloatInput
    m_nOutputField = 0x318 # ParticleAttributeIndex_t
    m_nSetMethod = 0x31C # ParticleSetMethod_t
    m_InputStrength = 0x320 # CPerParticleFloatInput

class C_INIT_InitFloatCollection: # CParticleFunctionInitializer
    m_InputValue = 0x1C0 # CParticleCollectionFloatInput
    m_nOutputField = 0x318 # ParticleAttributeIndex_t

class C_INIT_InitFromCPSnapshot: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nAttributeToRead = 0x1C4 # ParticleAttributeIndex_t
    m_nAttributeToWrite = 0x1C8 # ParticleAttributeIndex_t
    m_nLocalSpaceCP = 0x1CC # int32_t
    m_bRandom = 0x1D0 # bool
    m_bReverse = 0x1D1 # bool
    m_nSnapShotIncrement = 0x1D8 # CParticleCollectionFloatInput
    m_nManualSnapshotIndex = 0x330 # CPerParticleFloatInput
    m_nRandomSeed = 0x488 # int32_t
    m_bLocalSpaceAngles = 0x48C # bool

class C_INIT_InitFromParentKilled: # CParticleFunctionInitializer
    m_nAttributeToCopy = 0x1C0 # ParticleAttributeIndex_t

class C_INIT_InitFromVectorFieldSnapshot: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nLocalSpaceCP = 0x1C4 # int32_t
    m_nWeightUpdateCP = 0x1C8 # int32_t
    m_bUseVerticalVelocity = 0x1CC # bool
    m_vecScale = 0x1D0 # CPerParticleVecInput

class C_INIT_InitSkinnedPositionFromCPSnapshot: # CParticleFunctionInitializer
    m_nSnapshotControlPointNumber = 0x1C0 # int32_t
    m_nControlPointNumber = 0x1C4 # int32_t
    m_bRandom = 0x1C8 # bool
    m_nRandomSeed = 0x1CC # int32_t
    m_bRigid = 0x1D0 # bool
    m_bSetNormal = 0x1D1 # bool
    m_bIgnoreDt = 0x1D2 # bool
    m_flMinNormalVelocity = 0x1D4 # float
    m_flMaxNormalVelocity = 0x1D8 # float
    m_nIndexType = 0x1DC # SnapshotIndexType_t
    m_flReadIndex = 0x1E0 # CPerParticleFloatInput
    m_flIncrement = 0x338 # float
    m_nFullLoopIncrement = 0x33C # int32_t
    m_nSnapShotStartPoint = 0x340 # int32_t
    m_flBoneVelocity = 0x344 # float
    m_flBoneVelocityMax = 0x348 # float
    m_bCopyColor = 0x34C # bool
    m_bCopyAlpha = 0x34D # bool
    m_bSetRadius = 0x34E # bool

class C_INIT_InitVec: # CParticleFunctionInitializer
    m_InputValue = 0x1C0 # CPerParticleVecInput
    m_nOutputField = 0x818 # ParticleAttributeIndex_t
    m_nSetMethod = 0x81C # ParticleSetMethod_t
    m_bNormalizedOutput = 0x820 # bool
    m_bWritePreviousPosition = 0x821 # bool

class C_INIT_InitVecCollection: # CParticleFunctionInitializer
    m_InputValue = 0x1C0 # CParticleCollectionVecInput
    m_nOutputField = 0x818 # ParticleAttributeIndex_t

class C_INIT_InitialRepulsionVelocity: # CParticleFunctionInitializer
    m_CollisionGroupName = 0x1C0 # char[128]
    m_nTraceSet = 0x240 # ParticleTraceSet_t
    m_vecOutputMin = 0x244 # Vector
    m_vecOutputMax = 0x250 # Vector
    m_nControlPointNumber = 0x25C # int32_t
    m_bPerParticle = 0x260 # bool
    m_bTranslate = 0x261 # bool
    m_bProportional = 0x262 # bool
    m_flTraceLength = 0x264 # float
    m_bPerParticleTR = 0x268 # bool
    m_bInherit = 0x269 # bool
    m_nChildCP = 0x26C # int32_t
    m_nChildGroupID = 0x270 # int32_t

class C_INIT_InitialSequenceFromModel: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nFieldOutputAnim = 0x1C8 # ParticleAttributeIndex_t
    m_flInputMin = 0x1CC # float
    m_flInputMax = 0x1D0 # float
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_nSetMethod = 0x1DC # ParticleSetMethod_t

class C_INIT_InitialVelocityFromHitbox: # CParticleFunctionInitializer
    m_flVelocityMin = 0x1C0 # float
    m_flVelocityMax = 0x1C4 # float
    m_nControlPointNumber = 0x1C8 # int32_t
    m_HitboxSetName = 0x1CC # char[128]
    m_bUseBones = 0x24C # bool

class C_INIT_InitialVelocityNoise: # CParticleFunctionInitializer
    m_vecAbsVal = 0x1C0 # Vector
    m_vecAbsValInv = 0x1CC # Vector
    m_vecOffsetLoc = 0x1D8 # CPerParticleVecInput
    m_flOffset = 0x830 # CPerParticleFloatInput
    m_vecOutputMin = 0x988 # CPerParticleVecInput
    m_vecOutputMax = 0xFE0 # CPerParticleVecInput
    m_flNoiseScale = 0x1638 # CPerParticleFloatInput
    m_flNoiseScaleLoc = 0x1790 # CPerParticleFloatInput
    m_TransformInput = 0x18E8 # CParticleTransformInput
    m_bIgnoreDt = 0x1950 # bool

class C_INIT_LifespanFromVelocity: # CParticleFunctionInitializer
    m_vecComponentScale = 0x1C0 # Vector
    m_flTraceOffset = 0x1CC # float
    m_flMaxTraceLength = 0x1D0 # float
    m_flTraceTolerance = 0x1D4 # float
    m_nMaxPlanes = 0x1D8 # int32_t
    m_CollisionGroupName = 0x1E0 # char[128]
    m_nTraceSet = 0x260 # ParticleTraceSet_t
    m_bIncludeWater = 0x270 # bool

class C_INIT_ModelCull: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_bBoundBox = 0x1C4 # bool
    m_bCullOutside = 0x1C5 # bool
    m_bUseBones = 0x1C6 # bool
    m_HitboxSetName = 0x1C7 # char[128]

class C_INIT_MoveBetweenPoints: # CParticleFunctionInitializer
    m_flSpeedMin = 0x1C0 # CPerParticleFloatInput
    m_flSpeedMax = 0x318 # CPerParticleFloatInput
    m_flEndSpread = 0x470 # CPerParticleFloatInput
    m_flStartOffset = 0x5C8 # CPerParticleFloatInput
    m_flEndOffset = 0x720 # CPerParticleFloatInput
    m_nEndControlPointNumber = 0x878 # int32_t
    m_bTrailBias = 0x87C # bool

class C_INIT_NormalAlignToCP: # CParticleFunctionInitializer
    m_transformInput = 0x1C0 # CParticleTransformInput
    m_nControlPointAxis = 0x228 # ParticleControlPointAxis_t

class C_INIT_NormalOffset: # CParticleFunctionInitializer
    m_OffsetMin = 0x1C0 # Vector
    m_OffsetMax = 0x1CC # Vector
    m_nControlPointNumber = 0x1D8 # int32_t
    m_bLocalCoords = 0x1DC # bool
    m_bNormalize = 0x1DD # bool

class C_INIT_OffsetVectorToVector: # CParticleFunctionInitializer
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_vecOutputMin = 0x1C8 # Vector
    m_vecOutputMax = 0x1D4 # Vector
    m_randomnessParameters = 0x1E0 # CRandomNumberGeneratorParameters

class C_INIT_Orient2DRelToCP: # CParticleFunctionInitializer
    m_nCP = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flRotOffset = 0x1C8 # float

class C_INIT_PlaneCull: # CParticleFunctionInitializer
    m_nControlPoint = 0x1C0 # int32_t
    m_flDistance = 0x1C8 # CParticleCollectionFloatInput
    m_bCullInside = 0x320 # bool

class C_INIT_PointList: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_pointList = 0x1C8 # CUtlVector<PointDefinition_t>
    m_bPlaceAlongPath = 0x1E0 # bool
    m_bClosedLoop = 0x1E1 # bool
    m_nNumPointsAlongPath = 0x1E4 # int32_t

class C_INIT_PositionOffset: # CParticleFunctionInitializer
    m_OffsetMin = 0x1C0 # CPerParticleVecInput
    m_OffsetMax = 0x818 # CPerParticleVecInput
    m_TransformInput = 0xE70 # CParticleTransformInput
    m_bLocalCoords = 0xED8 # bool
    m_bProportional = 0xED9 # bool
    m_randomnessParameters = 0xEDC # CRandomNumberGeneratorParameters

class C_INIT_PositionOffsetToCP: # CParticleFunctionInitializer
    m_nControlPointNumberStart = 0x1C0 # int32_t
    m_nControlPointNumberEnd = 0x1C4 # int32_t
    m_bLocalCoords = 0x1C8 # bool

class C_INIT_PositionPlaceOnGround: # CParticleFunctionInitializer
    m_flOffset = 0x1C0 # CPerParticleFloatInput
    m_flMaxTraceLength = 0x318 # CPerParticleFloatInput
    m_CollisionGroupName = 0x470 # char[128]
    m_nTraceSet = 0x4F0 # ParticleTraceSet_t
    m_nTraceMissBehavior = 0x500 # ParticleTraceMissBehavior_t
    m_bIncludeWater = 0x504 # bool
    m_bSetNormal = 0x505 # bool
    m_bSetPXYZOnly = 0x506 # bool
    m_bTraceAlongNormal = 0x507 # bool
    m_bOffsetonColOnly = 0x508 # bool
    m_flOffsetByRadiusFactor = 0x50C # float
    m_nPreserveOffsetCP = 0x510 # int32_t
    m_nIgnoreCP = 0x514 # int32_t

class C_INIT_PositionWarp: # CParticleFunctionInitializer
    m_vecWarpMin = 0x1C0 # CParticleCollectionVecInput
    m_vecWarpMax = 0x818 # CParticleCollectionVecInput
    m_nScaleControlPointNumber = 0xE70 # int32_t
    m_nControlPointNumber = 0xE74 # int32_t
    m_nRadiusComponent = 0xE78 # int32_t
    m_flWarpTime = 0xE7C # float
    m_flWarpStartTime = 0xE80 # float
    m_flPrevPosScale = 0xE84 # float
    m_bInvertWarp = 0xE88 # bool
    m_bUseCount = 0xE89 # bool

class C_INIT_PositionWarpScalar: # CParticleFunctionInitializer
    m_vecWarpMin = 0x1C0 # Vector
    m_vecWarpMax = 0x1CC # Vector
    m_InputValue = 0x1D8 # CPerParticleFloatInput
    m_flPrevPosScale = 0x330 # float
    m_nScaleControlPointNumber = 0x334 # int32_t
    m_nControlPointNumber = 0x338 # int32_t

class C_INIT_QuantizeFloat: # CParticleFunctionInitializer
    m_InputValue = 0x1C0 # CPerParticleFloatInput
    m_nOutputField = 0x318 # ParticleAttributeIndex_t

class C_INIT_RadiusFromCPObject: # CParticleFunctionInitializer
    m_nControlPoint = 0x1C0 # int32_t

class C_INIT_RandomAlpha: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nAlphaMin = 0x1C4 # int32_t
    m_nAlphaMax = 0x1C8 # int32_t
    m_flAlphaRandExponent = 0x1D4 # float

class C_INIT_RandomAlphaWindowThreshold: # CParticleFunctionInitializer
    m_flMin = 0x1C0 # float
    m_flMax = 0x1C4 # float
    m_flExponent = 0x1C8 # float

class C_INIT_RandomColor: # CParticleFunctionInitializer
    m_ColorMin = 0x1DC # Color
    m_ColorMax = 0x1E0 # Color
    m_TintMin = 0x1E4 # Color
    m_TintMax = 0x1E8 # Color
    m_flTintPerc = 0x1EC # float
    m_flUpdateThreshold = 0x1F0 # float
    m_nTintCP = 0x1F4 # int32_t
    m_nFieldOutput = 0x1F8 # ParticleAttributeIndex_t
    m_nTintBlendMode = 0x1FC # ParticleColorBlendMode_t
    m_flLightAmplification = 0x200 # float

class C_INIT_RandomLifeTime: # CParticleFunctionInitializer
    m_fLifetimeMin = 0x1C0 # float
    m_fLifetimeMax = 0x1C4 # float
    m_fLifetimeRandExponent = 0x1C8 # float

class C_INIT_RandomModelSequence: # CParticleFunctionInitializer
    m_ActivityName = 0x1C0 # char[256]
    m_SequenceName = 0x2C0 # char[256]
    m_hModel = 0x3C0 # CStrongHandle<InfoForResourceTypeCModel>

class C_INIT_RandomNamedModelBodyPart: # C_INIT_RandomNamedModelElement

class C_INIT_RandomNamedModelElement: # CParticleFunctionInitializer
    m_hModel = 0x1C0 # CStrongHandle<InfoForResourceTypeCModel>
    m_names = 0x1C8 # CUtlVector<CUtlString>
    m_bShuffle = 0x1E0 # bool
    m_bLinear = 0x1E1 # bool
    m_bModelFromRenderer = 0x1E2 # bool
    m_nFieldOutput = 0x1E4 # ParticleAttributeIndex_t

class C_INIT_RandomNamedModelMeshGroup: # C_INIT_RandomNamedModelElement

class C_INIT_RandomNamedModelSequence: # C_INIT_RandomNamedModelElement

class C_INIT_RandomRadius: # CParticleFunctionInitializer
    m_flRadiusMin = 0x1C0 # float
    m_flRadiusMax = 0x1C4 # float
    m_flRadiusRandExponent = 0x1C8 # float

class C_INIT_RandomRotation: # CGeneralRandomRotation

class C_INIT_RandomRotationSpeed: # CGeneralRandomRotation

class C_INIT_RandomScalar: # CParticleFunctionInitializer
    m_flMin = 0x1C0 # float
    m_flMax = 0x1C4 # float
    m_flExponent = 0x1C8 # float
    m_nFieldOutput = 0x1CC # ParticleAttributeIndex_t

class C_INIT_RandomSecondSequence: # CParticleFunctionInitializer
    m_nSequenceMin = 0x1C0 # int32_t
    m_nSequenceMax = 0x1C4 # int32_t

class C_INIT_RandomSequence: # CParticleFunctionInitializer
    m_nSequenceMin = 0x1C0 # int32_t
    m_nSequenceMax = 0x1C4 # int32_t
    m_bShuffle = 0x1C8 # bool
    m_bLinear = 0x1C9 # bool
    m_WeightedList = 0x1D0 # CUtlVector<SequenceWeightedList_t>

class C_INIT_RandomTrailLength: # CParticleFunctionInitializer
    m_flMinLength = 0x1C0 # float
    m_flMaxLength = 0x1C4 # float
    m_flLengthRandExponent = 0x1C8 # float

class C_INIT_RandomVector: # CParticleFunctionInitializer
    m_vecMin = 0x1C0 # Vector
    m_vecMax = 0x1CC # Vector
    m_nFieldOutput = 0x1D8 # ParticleAttributeIndex_t
    m_randomnessParameters = 0x1DC # CRandomNumberGeneratorParameters

class C_INIT_RandomVectorComponent: # CParticleFunctionInitializer
    m_flMin = 0x1C0 # float
    m_flMax = 0x1C4 # float
    m_nFieldOutput = 0x1C8 # ParticleAttributeIndex_t
    m_nComponent = 0x1CC # int32_t

class C_INIT_RandomYaw: # CGeneralRandomRotation

class C_INIT_RandomYawFlip: # CParticleFunctionInitializer
    m_flPercent = 0x1C0 # float

class C_INIT_RemapCPtoScalar: # CParticleFunctionInitializer
    m_nCPInput = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nField = 0x1C8 # int32_t
    m_flInputMin = 0x1CC # float
    m_flInputMax = 0x1D0 # float
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_flStartTime = 0x1DC # float
    m_flEndTime = 0x1E0 # float
    m_nSetMethod = 0x1E4 # ParticleSetMethod_t
    m_flRemapBias = 0x1E8 # float

class C_INIT_RemapInitialDirectionToTransformToVector: # CParticleFunctionInitializer
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_nFieldOutput = 0x228 # ParticleAttributeIndex_t
    m_flScale = 0x22C # float
    m_flOffsetRot = 0x230 # float
    m_vecOffsetAxis = 0x234 # Vector
    m_bNormalize = 0x240 # bool

class C_INIT_RemapInitialTransformDirectionToRotation: # CParticleFunctionInitializer
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_nFieldOutput = 0x228 # ParticleAttributeIndex_t
    m_flOffsetRot = 0x22C # float
    m_nComponent = 0x230 # int32_t

class C_INIT_RemapInitialVisibilityScalar: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_flOutputMin = 0x1D0 # float
    m_flOutputMax = 0x1D4 # float

class C_INIT_RemapNamedModelBodyPartToScalar: # C_INIT_RemapNamedModelElementToScalar

class C_INIT_RemapNamedModelElementToScalar: # CParticleFunctionInitializer
    m_hModel = 0x1C0 # CStrongHandle<InfoForResourceTypeCModel>
    m_names = 0x1C8 # CUtlVector<CUtlString>
    m_values = 0x1E0 # CUtlVector<float>
    m_nFieldInput = 0x1F8 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1FC # ParticleAttributeIndex_t
    m_nSetMethod = 0x200 # ParticleSetMethod_t
    m_bModelFromRenderer = 0x204 # bool

class C_INIT_RemapNamedModelMeshGroupToScalar: # C_INIT_RemapNamedModelElementToScalar

class C_INIT_RemapNamedModelSequenceToScalar: # C_INIT_RemapNamedModelElementToScalar

class C_INIT_RemapParticleCountToNamedModelBodyPartScalar: # C_INIT_RemapParticleCountToNamedModelElementScalar

class C_INIT_RemapParticleCountToNamedModelElementScalar: # C_INIT_RemapParticleCountToScalar
    m_hModel = 0x1F0 # CStrongHandle<InfoForResourceTypeCModel>
    m_outputMinName = 0x1F8 # CUtlString
    m_outputMaxName = 0x200 # CUtlString
    m_bModelFromRenderer = 0x208 # bool

class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar: # C_INIT_RemapParticleCountToNamedModelElementScalar

class C_INIT_RemapParticleCountToNamedModelSequenceScalar: # C_INIT_RemapParticleCountToNamedModelElementScalar

class C_INIT_RemapParticleCountToScalar: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nInputMin = 0x1C4 # int32_t
    m_nInputMax = 0x1C8 # int32_t
    m_nScaleControlPoint = 0x1CC # int32_t
    m_nScaleControlPointField = 0x1D0 # int32_t
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_nSetMethod = 0x1DC # ParticleSetMethod_t
    m_bActiveRange = 0x1E0 # bool
    m_bInvert = 0x1E1 # bool
    m_bWrap = 0x1E2 # bool
    m_flRemapBias = 0x1E4 # float

class C_INIT_RemapQAnglesToRotation: # CParticleFunctionInitializer
    m_TransformInput = 0x1C0 # CParticleTransformInput

class C_INIT_RemapScalar: # CParticleFunctionInitializer
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_flOutputMin = 0x1D0 # float
    m_flOutputMax = 0x1D4 # float
    m_flStartTime = 0x1D8 # float
    m_flEndTime = 0x1DC # float
    m_nSetMethod = 0x1E0 # ParticleSetMethod_t
    m_bActiveRange = 0x1E4 # bool
    m_flRemapBias = 0x1E8 # float

class C_INIT_RemapScalarToVector: # CParticleFunctionInitializer
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_vecOutputMin = 0x1D0 # Vector
    m_vecOutputMax = 0x1DC # Vector
    m_flStartTime = 0x1E8 # float
    m_flEndTime = 0x1EC # float
    m_nSetMethod = 0x1F0 # ParticleSetMethod_t
    m_nControlPointNumber = 0x1F4 # int32_t
    m_bLocalCoords = 0x1F8 # bool
    m_flRemapBias = 0x1FC # float

class C_INIT_RemapSpeedToScalar: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nControlPointNumber = 0x1C4 # int32_t
    m_flStartTime = 0x1C8 # float
    m_flEndTime = 0x1CC # float
    m_flInputMin = 0x1D0 # float
    m_flInputMax = 0x1D4 # float
    m_flOutputMin = 0x1D8 # float
    m_flOutputMax = 0x1DC # float
    m_nSetMethod = 0x1E0 # ParticleSetMethod_t
    m_bPerParticle = 0x1E4 # bool

class C_INIT_RemapTransformOrientationToRotations: # CParticleFunctionInitializer
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_vecRotation = 0x228 # Vector
    m_bUseQuat = 0x234 # bool
    m_bWriteNormal = 0x235 # bool

class C_INIT_RemapTransformToVector: # CParticleFunctionInitializer
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vInputMin = 0x1C4 # Vector
    m_vInputMax = 0x1D0 # Vector
    m_vOutputMin = 0x1DC # Vector
    m_vOutputMax = 0x1E8 # Vector
    m_TransformInput = 0x1F8 # CParticleTransformInput
    m_LocalSpaceTransform = 0x260 # CParticleTransformInput
    m_flStartTime = 0x2C8 # float
    m_flEndTime = 0x2CC # float
    m_nSetMethod = 0x2D0 # ParticleSetMethod_t
    m_bOffset = 0x2D4 # bool
    m_bAccelerate = 0x2D5 # bool
    m_flRemapBias = 0x2D8 # float

class C_INIT_RingWave: # CParticleFunctionInitializer
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_flParticlesPerOrbit = 0x228 # CParticleCollectionFloatInput
    m_flInitialRadius = 0x380 # CPerParticleFloatInput
    m_flThickness = 0x4D8 # CPerParticleFloatInput
    m_flInitialSpeedMin = 0x630 # CPerParticleFloatInput
    m_flInitialSpeedMax = 0x788 # CPerParticleFloatInput
    m_flRoll = 0x8E0 # CPerParticleFloatInput
    m_flPitch = 0xA38 # CPerParticleFloatInput
    m_flYaw = 0xB90 # CPerParticleFloatInput
    m_bEvenDistribution = 0xCE8 # bool
    m_bXYVelocityOnly = 0xCE9 # bool

class C_INIT_RtEnvCull: # CParticleFunctionInitializer
    m_vecTestDir = 0x1C0 # Vector
    m_vecTestNormal = 0x1CC # Vector
    m_bUseVelocity = 0x1D8 # bool
    m_bCullOnMiss = 0x1D9 # bool
    m_bLifeAdjust = 0x1DA # bool
    m_RtEnvName = 0x1DB # char[128]
    m_nRTEnvCP = 0x25C # int32_t
    m_nComponent = 0x260 # int32_t

class C_INIT_ScaleVelocity: # CParticleFunctionInitializer
    m_vecScale = 0x1C0 # CParticleCollectionVecInput

class C_INIT_SequenceFromCP: # CParticleFunctionInitializer
    m_bKillUnused = 0x1C0 # bool
    m_bRadiusScale = 0x1C1 # bool
    m_nCP = 0x1C4 # int32_t
    m_vecOffset = 0x1C8 # Vector

class C_INIT_SequenceLifeTime: # CParticleFunctionInitializer
    m_flFramerate = 0x1C0 # float

class C_INIT_SetAttributeToScalarExpression: # CParticleFunctionInitializer
    m_nExpression = 0x1C0 # ScalarExpressionType_t
    m_flInput1 = 0x1C8 # CPerParticleFloatInput
    m_flInput2 = 0x320 # CPerParticleFloatInput
    m_flOutputRemap = 0x478 # CParticleRemapFloatInput
    m_nOutputField = 0x5D0 # ParticleAttributeIndex_t
    m_nSetMethod = 0x5D4 # ParticleSetMethod_t

class C_INIT_SetHitboxToClosest: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nDesiredHitbox = 0x1C4 # int32_t
    m_vecHitBoxScale = 0x1C8 # CParticleCollectionVecInput
    m_HitboxSetName = 0x820 # char[128]
    m_bUseBones = 0x8A0 # bool
    m_bUseClosestPointOnHitbox = 0x8A1 # bool
    m_nTestType = 0x8A4 # ClosestPointTestType_t
    m_flHybridRatio = 0x8A8 # CParticleCollectionFloatInput
    m_bUpdatePosition = 0xA00 # bool

class C_INIT_SetHitboxToModel: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nForceInModel = 0x1C4 # int32_t
    m_nDesiredHitbox = 0x1C8 # int32_t
    m_vecHitBoxScale = 0x1D0 # CParticleCollectionVecInput
    m_vecDirectionBias = 0x828 # Vector
    m_bMaintainHitbox = 0x834 # bool
    m_bUseBones = 0x835 # bool
    m_HitboxSetName = 0x836 # char[128]
    m_flShellSize = 0x8B8 # CParticleCollectionFloatInput

class C_INIT_SetRigidAttachment: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nFieldInput = 0x1C4 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C8 # ParticleAttributeIndex_t
    m_bLocalSpace = 0x1CC # bool

class C_INIT_SetVectorAttributeToVectorExpression: # CParticleFunctionInitializer
    m_nExpression = 0x1C0 # VectorExpressionType_t
    m_vInput1 = 0x1C8 # CPerParticleVecInput
    m_vInput2 = 0x820 # CPerParticleVecInput
    m_nOutputField = 0xE78 # ParticleAttributeIndex_t
    m_nSetMethod = 0xE7C # ParticleSetMethod_t
    m_bNormalizedOutput = 0xE80 # bool

class C_INIT_StatusEffect: # CParticleFunctionInitializer
    m_nDetail2Combo = 0x1C0 # Detail2Combo_t
    m_flDetail2Rotation = 0x1C4 # float
    m_flDetail2Scale = 0x1C8 # float
    m_flDetail2BlendFactor = 0x1CC # float
    m_flColorWarpIntensity = 0x1D0 # float
    m_flDiffuseWarpBlendToFull = 0x1D4 # float
    m_flEnvMapIntensity = 0x1D8 # float
    m_flAmbientScale = 0x1DC # float
    m_specularColor = 0x1E0 # Color
    m_flSpecularScale = 0x1E4 # float
    m_flSpecularExponent = 0x1E8 # float
    m_flSpecularExponentBlendToFull = 0x1EC # float
    m_flSpecularBlendToFull = 0x1F0 # float
    m_rimLightColor = 0x1F4 # Color
    m_flRimLightScale = 0x1F8 # float
    m_flReflectionsTintByBaseBlendToNone = 0x1FC # float
    m_flMetalnessBlendToFull = 0x200 # float
    m_flSelfIllumBlendToFull = 0x204 # float

class C_INIT_StatusEffectCitadel: # CParticleFunctionInitializer
    m_flSFXColorWarpAmount = 0x1C0 # float
    m_flSFXNormalAmount = 0x1C4 # float
    m_flSFXMetalnessAmount = 0x1C8 # float
    m_flSFXRoughnessAmount = 0x1CC # float
    m_flSFXSelfIllumAmount = 0x1D0 # float
    m_flSFXSScale = 0x1D4 # float
    m_flSFXSScrollX = 0x1D8 # float
    m_flSFXSScrollY = 0x1DC # float
    m_flSFXSScrollZ = 0x1E0 # float
    m_flSFXSOffsetX = 0x1E4 # float
    m_flSFXSOffsetY = 0x1E8 # float
    m_flSFXSOffsetZ = 0x1EC # float
    m_nDetailCombo = 0x1F0 # DetailCombo_t
    m_flSFXSDetailAmount = 0x1F4 # float
    m_flSFXSDetailScale = 0x1F8 # float
    m_flSFXSDetailScrollX = 0x1FC # float
    m_flSFXSDetailScrollY = 0x200 # float
    m_flSFXSDetailScrollZ = 0x204 # float
    m_flSFXSUseModelUVs = 0x208 # float

class C_INIT_VelocityFromCP: # CParticleFunctionInitializer
    m_velocityInput = 0x1C0 # CParticleCollectionVecInput
    m_transformInput = 0x818 # CParticleTransformInput
    m_flVelocityScale = 0x880 # float
    m_bDirectionOnly = 0x884 # bool

class C_INIT_VelocityFromNormal: # CParticleFunctionInitializer
    m_fSpeedMin = 0x1C0 # float
    m_fSpeedMax = 0x1C4 # float
    m_bIgnoreDt = 0x1C8 # bool

class C_INIT_VelocityRadialRandom: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_fSpeedMin = 0x1C4 # float
    m_fSpeedMax = 0x1C8 # float
    m_vecLocalCoordinateSystemSpeedScale = 0x1CC # Vector
    m_bIgnoreDelta = 0x1D9 # bool

class C_INIT_VelocityRandom: # CParticleFunctionInitializer
    m_nControlPointNumber = 0x1C0 # int32_t
    m_fSpeedMin = 0x1C8 # CPerParticleFloatInput
    m_fSpeedMax = 0x320 # CPerParticleFloatInput
    m_LocalCoordinateSystemSpeedMin = 0x478 # CPerParticleVecInput
    m_LocalCoordinateSystemSpeedMax = 0xAD0 # CPerParticleVecInput
    m_bIgnoreDT = 0x1128 # bool
    m_randomnessParameters = 0x112C # CRandomNumberGeneratorParameters

class C_OP_AlphaDecay: # CParticleFunctionOperator
    m_flMinAlpha = 0x1C0 # float

class C_OP_AttractToControlPoint: # CParticleFunctionForce
    m_vecComponentScale = 0x1D0 # Vector
    m_fForceAmount = 0x1E0 # CPerParticleFloatInput
    m_fFalloffPower = 0x338 # float
    m_TransformInput = 0x340 # CParticleTransformInput
    m_fForceAmountMin = 0x3A8 # CPerParticleFloatInput
    m_bApplyMinForce = 0x500 # bool

class C_OP_BasicMovement: # CParticleFunctionOperator
    m_Gravity = 0x1C0 # CParticleCollectionVecInput
    m_fDrag = 0x818 # CParticleCollectionFloatInput
    m_nMaxConstraintPasses = 0x970 # int32_t

class C_OP_BoxConstraint: # CParticleFunctionConstraint
    m_vecMin = 0x1C0 # CParticleCollectionVecInput
    m_vecMax = 0x818 # CParticleCollectionVecInput
    m_nCP = 0xE70 # int32_t
    m_bLocalSpace = 0xE74 # bool
    m_bAccountForRadius = 0xE75 # bool

class C_OP_CPOffsetToPercentageBetweenCPs: # CParticleFunctionOperator
    m_flInputMin = 0x1C0 # float
    m_flInputMax = 0x1C4 # float
    m_flInputBias = 0x1C8 # float
    m_nStartCP = 0x1CC # int32_t
    m_nEndCP = 0x1D0 # int32_t
    m_nOffsetCP = 0x1D4 # int32_t
    m_nOuputCP = 0x1D8 # int32_t
    m_nInputCP = 0x1DC # int32_t
    m_bRadialCheck = 0x1E0 # bool
    m_bScaleOffset = 0x1E1 # bool
    m_vecOffset = 0x1E4 # Vector

class C_OP_CPVelocityForce: # CParticleFunctionForce
    m_nControlPointNumber = 0x1D0 # int32_t
    m_flScale = 0x1D8 # CPerParticleFloatInput

class C_OP_CalculateVectorAttribute: # CParticleFunctionOperator
    m_vStartValue = 0x1C0 # Vector
    m_nFieldInput1 = 0x1CC # ParticleAttributeIndex_t
    m_flInputScale1 = 0x1D0 # float
    m_nFieldInput2 = 0x1D4 # ParticleAttributeIndex_t
    m_flInputScale2 = 0x1D8 # float
    m_nControlPointInput1 = 0x1DC # ControlPointReference_t
    m_flControlPointScale1 = 0x1F0 # float
    m_nControlPointInput2 = 0x1F4 # ControlPointReference_t
    m_flControlPointScale2 = 0x208 # float
    m_nFieldOutput = 0x20C # ParticleAttributeIndex_t
    m_vFinalOutputScale = 0x210 # Vector

class C_OP_Callback: # CParticleFunctionRenderer

class C_OP_ChladniWave: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # CPerParticleFloatInput
    m_flInputMax = 0x320 # CPerParticleFloatInput
    m_flOutputMin = 0x478 # CPerParticleFloatInput
    m_flOutputMax = 0x5D0 # CPerParticleFloatInput
    m_vecWaveLength = 0x728 # CPerParticleVecInput
    m_vecHarmonics = 0xD80 # CPerParticleVecInput
    m_nSetMethod = 0x13D8 # ParticleSetMethod_t
    m_nLocalSpaceControlPoint = 0x13DC # int32_t
    m_b3D = 0x13E0 # bool

class C_OP_ChooseRandomChildrenInGroup: # CParticleFunctionPreEmission
    m_nChildGroupID = 0x1D0 # int32_t
    m_flNumberOfChildren = 0x1D8 # CParticleCollectionFloatInput

class C_OP_ClampScalar: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flOutputMin = 0x1C8 # CPerParticleFloatInput
    m_flOutputMax = 0x320 # CPerParticleFloatInput

class C_OP_ClampVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecOutputMin = 0x1C8 # CPerParticleVecInput
    m_vecOutputMax = 0x820 # CPerParticleVecInput

class C_OP_CollideWithParentParticles: # CParticleFunctionConstraint
    m_flParentRadiusScale = 0x1C0 # CPerParticleFloatInput
    m_flRadiusScale = 0x318 # CPerParticleFloatInput

class C_OP_CollideWithSelf: # CParticleFunctionConstraint
    m_flRadiusScale = 0x1C0 # CPerParticleFloatInput
    m_flMinimumSpeed = 0x318 # CPerParticleFloatInput

class C_OP_ColorAdjustHSL: # CParticleFunctionOperator
    m_flHueAdjust = 0x1C0 # CPerParticleFloatInput
    m_flSaturationAdjust = 0x318 # CPerParticleFloatInput
    m_flLightnessAdjust = 0x470 # CPerParticleFloatInput

class C_OP_ColorInterpolate: # CParticleFunctionOperator
    m_ColorFade = 0x1C0 # Color
    m_flFadeStartTime = 0x1D0 # float
    m_flFadeEndTime = 0x1D4 # float
    m_nFieldOutput = 0x1D8 # ParticleAttributeIndex_t
    m_bEaseInOut = 0x1DC # bool
    m_bUseNewCode = 0x1DD # bool

class C_OP_ColorInterpolateRandom: # CParticleFunctionOperator
    m_ColorFadeMin = 0x1C0 # Color
    m_ColorFadeMax = 0x1DC # Color
    m_flFadeStartTime = 0x1EC # float
    m_flFadeEndTime = 0x1F0 # float
    m_nFieldOutput = 0x1F4 # ParticleAttributeIndex_t
    m_bEaseInOut = 0x1F8 # bool

class C_OP_ConnectParentParticleToNearest: # CParticleFunctionOperator
    m_nFirstControlPoint = 0x1C0 # int32_t
    m_nSecondControlPoint = 0x1C4 # int32_t
    m_bUseRadius = 0x1C8 # bool
    m_flRadiusScale = 0x1D0 # CParticleCollectionFloatInput
    m_flParentRadiusScale = 0x328 # CParticleCollectionFloatInput

class C_OP_ConstrainDistance: # CParticleFunctionConstraint
    m_fMinDistance = 0x1C0 # CParticleCollectionFloatInput
    m_fMaxDistance = 0x318 # CParticleCollectionFloatInput
    m_nControlPointNumber = 0x470 # int32_t
    m_CenterOffset = 0x474 # Vector
    m_bGlobalCenter = 0x480 # bool

class C_OP_ConstrainDistanceToPath: # CParticleFunctionConstraint
    m_fMinDistance = 0x1C0 # float
    m_flMaxDistance0 = 0x1C4 # float
    m_flMaxDistanceMid = 0x1C8 # float
    m_flMaxDistance1 = 0x1CC # float
    m_PathParameters = 0x1D0 # CPathParameters
    m_flTravelTime = 0x210 # float
    m_nFieldScale = 0x214 # ParticleAttributeIndex_t
    m_nManualTField = 0x218 # ParticleAttributeIndex_t

class C_OP_ConstrainDistanceToUserSpecifiedPath: # CParticleFunctionConstraint
    m_fMinDistance = 0x1C0 # float
    m_flMaxDistance = 0x1C4 # float
    m_flTimeScale = 0x1C8 # float
    m_bLoopedPath = 0x1CC # bool
    m_pointList = 0x1D0 # CUtlVector<PointDefinitionWithTimeValues_t>

class C_OP_ConstrainLineLength: # CParticleFunctionConstraint
    m_flMinDistance = 0x1C0 # float
    m_flMaxDistance = 0x1C4 # float

class C_OP_ContinuousEmitter: # CParticleFunctionEmitter
    m_flEmissionDuration = 0x1C0 # CParticleCollectionFloatInput
    m_flStartTime = 0x318 # CParticleCollectionFloatInput
    m_flEmitRate = 0x470 # CParticleCollectionFloatInput
    m_flEmissionScale = 0x5C8 # float
    m_flScalePerParentParticle = 0x5CC # float
    m_bInitFromKilledParentParticles = 0x5D0 # bool
    m_nSnapshotControlPoint = 0x5D4 # int32_t
    m_nLimitPerUpdate = 0x5D8 # int32_t
    m_bForceEmitOnFirstUpdate = 0x5DC # bool
    m_bForceEmitOnLastUpdate = 0x5DD # bool

class C_OP_ControlPointToRadialScreenSpace: # CParticleFunctionPreEmission
    m_nCPIn = 0x1D0 # int32_t
    m_vecCP1Pos = 0x1D4 # Vector
    m_nCPOut = 0x1E0 # int32_t
    m_nCPOutField = 0x1E4 # int32_t
    m_nCPSSPosOut = 0x1E8 # int32_t

class C_OP_ControlpointLight: # CParticleFunctionOperator
    m_flScale = 0x1C0 # float
    m_nControlPoint1 = 0x650 # int32_t
    m_nControlPoint2 = 0x654 # int32_t
    m_nControlPoint3 = 0x658 # int32_t
    m_nControlPoint4 = 0x65C # int32_t
    m_vecCPOffset1 = 0x660 # Vector
    m_vecCPOffset2 = 0x66C # Vector
    m_vecCPOffset3 = 0x678 # Vector
    m_vecCPOffset4 = 0x684 # Vector
    m_LightFiftyDist1 = 0x690 # float
    m_LightZeroDist1 = 0x694 # float
    m_LightFiftyDist2 = 0x698 # float
    m_LightZeroDist2 = 0x69C # float
    m_LightFiftyDist3 = 0x6A0 # float
    m_LightZeroDist3 = 0x6A4 # float
    m_LightFiftyDist4 = 0x6A8 # float
    m_LightZeroDist4 = 0x6AC # float
    m_LightColor1 = 0x6B0 # Color
    m_LightColor2 = 0x6B4 # Color
    m_LightColor3 = 0x6B8 # Color
    m_LightColor4 = 0x6BC # Color
    m_bLightType1 = 0x6C0 # bool
    m_bLightType2 = 0x6C1 # bool
    m_bLightType3 = 0x6C2 # bool
    m_bLightType4 = 0x6C3 # bool
    m_bLightDynamic1 = 0x6C4 # bool
    m_bLightDynamic2 = 0x6C5 # bool
    m_bLightDynamic3 = 0x6C6 # bool
    m_bLightDynamic4 = 0x6C7 # bool
    m_bUseNormal = 0x6C8 # bool
    m_bUseHLambert = 0x6C9 # bool
    m_bClampLowerRange = 0x6CE # bool
    m_bClampUpperRange = 0x6CF # bool

class C_OP_Cull: # CParticleFunctionOperator
    m_flCullPerc = 0x1C0 # float
    m_flCullStart = 0x1C4 # float
    m_flCullEnd = 0x1C8 # float
    m_flCullExp = 0x1CC # float

class C_OP_CurlNoiseForce: # CParticleFunctionForce
    m_nNoiseType = 0x1D0 # ParticleDirectionNoiseType_t
    m_vecNoiseFreq = 0x1D8 # CPerParticleVecInput
    m_vecNoiseScale = 0x830 # CPerParticleVecInput
    m_vecOffset = 0xE88 # CPerParticleVecInput
    m_vecOffsetRate = 0x14E0 # CPerParticleVecInput
    m_flWorleySeed = 0x1B38 # CPerParticleFloatInput
    m_flWorleyJitter = 0x1C90 # CPerParticleFloatInput

class C_OP_CycleScalar: # CParticleFunctionOperator
    m_nDestField = 0x1C0 # ParticleAttributeIndex_t
    m_flStartValue = 0x1C4 # float
    m_flEndValue = 0x1C8 # float
    m_flCycleTime = 0x1CC # float
    m_bDoNotRepeatCycle = 0x1D0 # bool
    m_bSynchronizeParticles = 0x1D1 # bool
    m_nCPScale = 0x1D4 # int32_t
    m_nCPFieldMin = 0x1D8 # int32_t
    m_nCPFieldMax = 0x1DC # int32_t
    m_nSetMethod = 0x1E0 # ParticleSetMethod_t

class C_OP_CylindricalDistanceToTransform: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # CPerParticleFloatInput
    m_flInputMax = 0x320 # CPerParticleFloatInput
    m_flOutputMin = 0x478 # CPerParticleFloatInput
    m_flOutputMax = 0x5D0 # CPerParticleFloatInput
    m_TransformStart = 0x728 # CParticleTransformInput
    m_TransformEnd = 0x790 # CParticleTransformInput
    m_nSetMethod = 0x7F8 # ParticleSetMethod_t
    m_bActiveRange = 0x7FC # bool
    m_bAdditive = 0x7FD # bool
    m_bCapsule = 0x7FE # bool

class C_OP_DampenToCP: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_flRange = 0x1C4 # float
    m_flScale = 0x1C8 # float

class C_OP_Decay: # CParticleFunctionOperator
    m_bRopeDecay = 0x1C0 # bool
    m_bForcePreserveParticleOrder = 0x1C1 # bool

class C_OP_DecayClampCount: # CParticleFunctionOperator
    m_nCount = 0x1C0 # CParticleCollectionFloatInput

class C_OP_DecayMaintainCount: # CParticleFunctionOperator
    m_nParticlesToMaintain = 0x1C0 # int32_t
    m_flDecayDelay = 0x1C4 # float
    m_nSnapshotControlPoint = 0x1C8 # int32_t
    m_bLifespanDecay = 0x1CC # bool
    m_flScale = 0x1D0 # CParticleCollectionFloatInput
    m_bKillNewest = 0x328 # bool

class C_OP_DecayOffscreen: # CParticleFunctionOperator
    m_flOffscreenTime = 0x1C0 # CParticleCollectionFloatInput

class C_OP_DensityForce: # CParticleFunctionForce
    m_flRadiusScale = 0x1D0 # float
    m_flForceScale = 0x1D4 # float
    m_flTargetDensity = 0x1D8 # float

class C_OP_DifferencePreviousParticle: # CParticleFunctionOperator
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_flOutputMin = 0x1D0 # float
    m_flOutputMax = 0x1D4 # float
    m_nSetMethod = 0x1D8 # ParticleSetMethod_t
    m_bActiveRange = 0x1DC # bool
    m_bSetPreviousParticle = 0x1DD # bool

class C_OP_Diffusion: # CParticleFunctionOperator
    m_flRadiusScale = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nVoxelGridResolution = 0x1C8 # int32_t

class C_OP_DirectionBetweenVecsToVec: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecPoint1 = 0x1C8 # CPerParticleVecInput
    m_vecPoint2 = 0x820 # CPerParticleVecInput

class C_OP_DistanceBetweenCPsToCP: # CParticleFunctionPreEmission
    m_nStartCP = 0x1D0 # int32_t
    m_nEndCP = 0x1D4 # int32_t
    m_nOutputCP = 0x1D8 # int32_t
    m_nOutputCPField = 0x1DC # int32_t
    m_bSetOnce = 0x1E0 # bool
    m_flInputMin = 0x1E4 # float
    m_flInputMax = 0x1E8 # float
    m_flOutputMin = 0x1EC # float
    m_flOutputMax = 0x1F0 # float
    m_flMaxTraceLength = 0x1F4 # float
    m_flLOSScale = 0x1F8 # float
    m_bLOS = 0x1FC # bool
    m_CollisionGroupName = 0x1FD # char[128]
    m_nTraceSet = 0x280 # ParticleTraceSet_t
    m_nSetParent = 0x284 # ParticleParentSetMode_t

class C_OP_DistanceBetweenTransforms: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_TransformStart = 0x1C8 # CParticleTransformInput
    m_TransformEnd = 0x230 # CParticleTransformInput
    m_flInputMin = 0x298 # CPerParticleFloatInput
    m_flInputMax = 0x3F0 # CPerParticleFloatInput
    m_flOutputMin = 0x548 # CPerParticleFloatInput
    m_flOutputMax = 0x6A0 # CPerParticleFloatInput
    m_flMaxTraceLength = 0x7F8 # float
    m_flLOSScale = 0x7FC # float
    m_CollisionGroupName = 0x800 # char[128]
    m_nTraceSet = 0x880 # ParticleTraceSet_t
    m_bLOS = 0x884 # bool
    m_nSetMethod = 0x888 # ParticleSetMethod_t

class C_OP_DistanceBetweenVecs: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecPoint1 = 0x1C8 # CPerParticleVecInput
    m_vecPoint2 = 0x820 # CPerParticleVecInput
    m_flInputMin = 0xE78 # CPerParticleFloatInput
    m_flInputMax = 0xFD0 # CPerParticleFloatInput
    m_flOutputMin = 0x1128 # CPerParticleFloatInput
    m_flOutputMax = 0x1280 # CPerParticleFloatInput
    m_nSetMethod = 0x13D8 # ParticleSetMethod_t
    m_bDeltaTime = 0x13DC # bool

class C_OP_DistanceCull: # CParticleFunctionOperator
    m_nControlPoint = 0x1C0 # int32_t
    m_vecPointOffset = 0x1C4 # Vector
    m_flDistance = 0x1D0 # float
    m_bCullInside = 0x1D4 # bool

class C_OP_DistanceToTransform: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # CPerParticleFloatInput
    m_flInputMax = 0x320 # CPerParticleFloatInput
    m_flOutputMin = 0x478 # CPerParticleFloatInput
    m_flOutputMax = 0x5D0 # CPerParticleFloatInput
    m_TransformStart = 0x728 # CParticleTransformInput
    m_bLOS = 0x790 # bool
    m_CollisionGroupName = 0x791 # char[128]
    m_nTraceSet = 0x814 # ParticleTraceSet_t
    m_flMaxTraceLength = 0x818 # float
    m_flLOSScale = 0x81C # float
    m_nSetMethod = 0x820 # ParticleSetMethod_t
    m_bActiveRange = 0x824 # bool
    m_bAdditive = 0x825 # bool
    m_vecComponentScale = 0x828 # CPerParticleVecInput

class C_OP_DragRelativeToPlane: # CParticleFunctionOperator
    m_flDragAtPlane = 0x1C0 # CParticleCollectionFloatInput
    m_flFalloff = 0x318 # CParticleCollectionFloatInput
    m_bDirectional = 0x470 # bool
    m_vecPlaneNormal = 0x478 # CParticleCollectionVecInput
    m_nControlPointNumber = 0xAD0 # int32_t

class C_OP_DriveCPFromGlobalSoundFloat: # CParticleFunctionPreEmission
    m_nOutputControlPoint = 0x1D0 # int32_t
    m_nOutputField = 0x1D4 # int32_t
    m_flInputMin = 0x1D8 # float
    m_flInputMax = 0x1DC # float
    m_flOutputMin = 0x1E0 # float
    m_flOutputMax = 0x1E4 # float
    m_StackName = 0x1E8 # CUtlString
    m_OperatorName = 0x1F0 # CUtlString
    m_FieldName = 0x1F8 # CUtlString

class C_OP_EnableChildrenFromParentParticleCount: # CParticleFunctionPreEmission
    m_nChildGroupID = 0x1D0 # int32_t
    m_nFirstChild = 0x1D4 # int32_t
    m_nNumChildrenToEnable = 0x1D8 # CParticleCollectionFloatInput
    m_bDisableChildren = 0x330 # bool
    m_bPlayEndcapOnStop = 0x331 # bool
    m_bDestroyImmediately = 0x332 # bool

class C_OP_EndCapDecay: # CParticleFunctionOperator

class C_OP_EndCapTimedDecay: # CParticleFunctionOperator
    m_flDecayTime = 0x1C0 # float

class C_OP_EndCapTimedFreeze: # CParticleFunctionOperator
    m_flFreezeTime = 0x1C0 # CParticleCollectionFloatInput

class C_OP_ExternalGameImpulseForce: # CParticleFunctionForce
    m_flForceScale = 0x1D0 # CPerParticleFloatInput
    m_bRopes = 0x328 # bool
    m_bRopesZOnly = 0x329 # bool
    m_bExplosions = 0x32A # bool
    m_bParticles = 0x32B # bool

class C_OP_ExternalWindForce: # CParticleFunctionForce
    m_vecSamplePosition = 0x1D0 # CPerParticleVecInput
    m_vecScale = 0x828 # CPerParticleVecInput
    m_bSampleWind = 0xE80 # bool
    m_bSampleWater = 0xE81 # bool
    m_bDampenNearWaterPlane = 0xE82 # bool
    m_bSampleGravity = 0xE83 # bool
    m_vecGravityForce = 0xE88 # CPerParticleVecInput
    m_bUseBasicMovementGravity = 0x14E0 # bool
    m_flLocalGravityScale = 0x14E8 # CPerParticleFloatInput
    m_flLocalBuoyancyScale = 0x1640 # CPerParticleFloatInput
    m_vecBuoyancyForce = 0x1798 # CPerParticleVecInput

class C_OP_FadeAndKill: # CParticleFunctionOperator
    m_flStartFadeInTime = 0x1C0 # float
    m_flEndFadeInTime = 0x1C4 # float
    m_flStartFadeOutTime = 0x1C8 # float
    m_flEndFadeOutTime = 0x1CC # float
    m_flStartAlpha = 0x1D0 # float
    m_flEndAlpha = 0x1D4 # float
    m_bForcePreserveParticleOrder = 0x1D8 # bool

class C_OP_FadeAndKillForTracers: # CParticleFunctionOperator
    m_flStartFadeInTime = 0x1C0 # float
    m_flEndFadeInTime = 0x1C4 # float
    m_flStartFadeOutTime = 0x1C8 # float
    m_flEndFadeOutTime = 0x1CC # float
    m_flStartAlpha = 0x1D0 # float
    m_flEndAlpha = 0x1D4 # float

class C_OP_FadeIn: # CParticleFunctionOperator
    m_flFadeInTimeMin = 0x1C0 # float
    m_flFadeInTimeMax = 0x1C4 # float
    m_flFadeInTimeExp = 0x1C8 # float
    m_bProportional = 0x1CC # bool

class C_OP_FadeInSimple: # CParticleFunctionOperator
    m_flFadeInTime = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t

class C_OP_FadeOut: # CParticleFunctionOperator
    m_flFadeOutTimeMin = 0x1C0 # float
    m_flFadeOutTimeMax = 0x1C4 # float
    m_flFadeOutTimeExp = 0x1C8 # float
    m_flFadeBias = 0x1CC # float
    m_bProportional = 0x200 # bool
    m_bEaseInAndOut = 0x201 # bool

class C_OP_FadeOutSimple: # CParticleFunctionOperator
    m_flFadeOutTime = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t

class C_OP_ForceBasedOnDistanceToPlane: # CParticleFunctionForce
    m_flMinDist = 0x1D0 # float
    m_vecForceAtMinDist = 0x1D4 # Vector
    m_flMaxDist = 0x1E0 # float
    m_vecForceAtMaxDist = 0x1E4 # Vector
    m_vecPlaneNormal = 0x1F0 # Vector
    m_nControlPointNumber = 0x1FC # int32_t
    m_flExponent = 0x200 # float

class C_OP_ForceControlPointStub: # CParticleFunctionPreEmission
    m_ControlPoint = 0x1D0 # int32_t

class C_OP_GlobalLight: # CParticleFunctionOperator
    m_flScale = 0x1C0 # float
    m_bClampLowerRange = 0x1C4 # bool
    m_bClampUpperRange = 0x1C5 # bool

class C_OP_HSVShiftToCP: # CParticleFunctionPreEmission
    m_nColorCP = 0x1D0 # int32_t
    m_nColorGemEnableCP = 0x1D4 # int32_t
    m_nOutputCP = 0x1D8 # int32_t
    m_DefaultHSVColor = 0x1DC # Color

class C_OP_InheritFromParentParticles: # CParticleFunctionOperator
    m_flScale = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nIncrement = 0x1C8 # int32_t
    m_bRandomDistribution = 0x1CC # bool

class C_OP_InheritFromParentParticlesV2: # CParticleFunctionOperator
    m_flScale = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nIncrement = 0x1C8 # int32_t
    m_bRandomDistribution = 0x1CC # bool
    m_nMissingParentBehavior = 0x1D0 # MissingParentInheritBehavior_t

class C_OP_InheritFromPeerSystem: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldInput = 0x1C4 # ParticleAttributeIndex_t
    m_nIncrement = 0x1C8 # int32_t
    m_nGroupID = 0x1CC # int32_t

class C_OP_InstantaneousEmitter: # CParticleFunctionEmitter
    m_nParticlesToEmit = 0x1C0 # CParticleCollectionFloatInput
    m_flStartTime = 0x318 # CParticleCollectionFloatInput
    m_flInitFromKilledParentParticles = 0x470 # float
    m_flParentParticleScale = 0x478 # CParticleCollectionFloatInput
    m_nMaxEmittedPerFrame = 0x5D0 # int32_t
    m_nSnapshotControlPoint = 0x5D4 # int32_t

class C_OP_InterpolateRadius: # CParticleFunctionOperator
    m_flStartTime = 0x1C0 # float
    m_flEndTime = 0x1C4 # float
    m_flStartScale = 0x1C8 # float
    m_flEndScale = 0x1CC # float
    m_bEaseInAndOut = 0x1D0 # bool
    m_flBias = 0x1D4 # float

class C_OP_LagCompensation: # CParticleFunctionOperator
    m_nDesiredVelocityCP = 0x1C0 # int32_t
    m_nLatencyCP = 0x1C4 # int32_t
    m_nLatencyCPField = 0x1C8 # int32_t
    m_nDesiredVelocityCPField = 0x1CC # int32_t

class C_OP_LerpEndCapScalar: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flOutput = 0x1C4 # float
    m_flLerpTime = 0x1C8 # float

class C_OP_LerpEndCapVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecOutput = 0x1C4 # Vector
    m_flLerpTime = 0x1D0 # float

class C_OP_LerpScalar: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flOutput = 0x1C8 # CPerParticleFloatInput
    m_flStartTime = 0x320 # float
    m_flEndTime = 0x324 # float

class C_OP_LerpToInitialPosition: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_flInterpolation = 0x1C8 # CPerParticleFloatInput
    m_nCacheField = 0x320 # ParticleAttributeIndex_t
    m_flScale = 0x328 # CParticleCollectionFloatInput
    m_vecScale = 0x480 # CParticleCollectionVecInput

class C_OP_LerpToOtherAttribute: # CParticleFunctionOperator
    m_flInterpolation = 0x1C0 # CPerParticleFloatInput
    m_nFieldInputFrom = 0x318 # ParticleAttributeIndex_t
    m_nFieldInput = 0x31C # ParticleAttributeIndex_t
    m_nFieldOutput = 0x320 # ParticleAttributeIndex_t

class C_OP_LerpVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecOutput = 0x1C4 # Vector
    m_flStartTime = 0x1D0 # float
    m_flEndTime = 0x1D4 # float
    m_nSetMethod = 0x1D8 # ParticleSetMethod_t

class C_OP_LightningSnapshotGenerator: # CParticleFunctionPreEmission
    m_nCPSnapshot = 0x1D0 # int32_t
    m_nCPStartPnt = 0x1D4 # int32_t
    m_nCPEndPnt = 0x1D8 # int32_t
    m_flSegments = 0x1E0 # CParticleCollectionFloatInput
    m_flOffset = 0x338 # CParticleCollectionFloatInput
    m_flOffsetDecay = 0x490 # CParticleCollectionFloatInput
    m_flRecalcRate = 0x5E8 # CParticleCollectionFloatInput
    m_flUVScale = 0x740 # CParticleCollectionFloatInput
    m_flUVOffset = 0x898 # CParticleCollectionFloatInput
    m_flSplitRate = 0x9F0 # CParticleCollectionFloatInput
    m_flBranchTwist = 0xB48 # CParticleCollectionFloatInput
    m_nBranchBehavior = 0xCA0 # ParticleLightnintBranchBehavior_t
    m_flRadiusStart = 0xCA8 # CParticleCollectionFloatInput
    m_flRadiusEnd = 0xE00 # CParticleCollectionFloatInput
    m_flDedicatedPool = 0xF58 # CParticleCollectionFloatInput

class C_OP_LocalAccelerationForce: # CParticleFunctionForce
    m_nCP = 0x1D0 # int32_t
    m_nScaleCP = 0x1D4 # int32_t
    m_vecAccel = 0x1D8 # CParticleCollectionVecInput

class C_OP_LockPoints: # CParticleFunctionOperator
    m_nMinCol = 0x1C0 # int32_t
    m_nMaxCol = 0x1C4 # int32_t
    m_nMinRow = 0x1C8 # int32_t
    m_nMaxRow = 0x1CC # int32_t
    m_nControlPoint = 0x1D0 # int32_t
    m_flBlendValue = 0x1D4 # float

class C_OP_LockToBone: # CParticleFunctionOperator
    m_modelInput = 0x1C0 # CParticleModelInput
    m_transformInput = 0x220 # CParticleTransformInput
    m_flLifeTimeFadeStart = 0x288 # float
    m_flLifeTimeFadeEnd = 0x28C # float
    m_flJumpThreshold = 0x290 # float
    m_flPrevPosScale = 0x294 # float
    m_HitboxSetName = 0x298 # char[128]
    m_bRigid = 0x318 # bool
    m_bUseBones = 0x319 # bool
    m_nFieldOutput = 0x31C # ParticleAttributeIndex_t
    m_nFieldOutputPrev = 0x320 # ParticleAttributeIndex_t
    m_nRotationSetType = 0x324 # ParticleRotationLockType_t
    m_bRigidRotationLock = 0x328 # bool
    m_vecRotation = 0x330 # CPerParticleVecInput
    m_flRotLerp = 0x988 # CPerParticleFloatInput

class C_OP_LockToPointList: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_pointList = 0x1C8 # CUtlVector<PointDefinition_t>
    m_bPlaceAlongPath = 0x1E0 # bool
    m_bClosedLoop = 0x1E1 # bool
    m_nNumPointsAlongPath = 0x1E4 # int32_t

class C_OP_LockToSavedSequentialPath: # CParticleFunctionOperator
    m_flFadeStart = 0x1C4 # float
    m_flFadeEnd = 0x1C8 # float
    m_bCPPairs = 0x1CC # bool
    m_PathParams = 0x1D0 # CPathParameters

class C_OP_LockToSavedSequentialPathV2: # CParticleFunctionOperator
    m_flFadeStart = 0x1C0 # float
    m_flFadeEnd = 0x1C4 # float
    m_bCPPairs = 0x1C8 # bool
    m_PathParams = 0x1D0 # CPathParameters

class C_OP_MaintainEmitter: # CParticleFunctionEmitter
    m_nParticlesToMaintain = 0x1C0 # CParticleCollectionFloatInput
    m_flStartTime = 0x318 # float
    m_flEmissionDuration = 0x320 # CParticleCollectionFloatInput
    m_flEmissionRate = 0x478 # float
    m_nSnapshotControlPoint = 0x47C # int32_t
    m_bEmitInstantaneously = 0x480 # bool
    m_bFinalEmitOnStop = 0x481 # bool
    m_flScale = 0x488 # CParticleCollectionFloatInput

class C_OP_MaintainSequentialPath: # CParticleFunctionOperator
    m_fMaxDistance = 0x1C0 # float
    m_flNumToAssign = 0x1C4 # float
    m_flCohesionStrength = 0x1C8 # float
    m_flTolerance = 0x1CC # float
    m_bLoop = 0x1D0 # bool
    m_bUseParticleCount = 0x1D1 # bool
    m_PathParams = 0x1E0 # CPathParameters

class C_OP_MaxVelocity: # CParticleFunctionOperator
    m_flMaxVelocity = 0x1C0 # float
    m_flMinVelocity = 0x1C4 # float
    m_nOverrideCP = 0x1C8 # int32_t
    m_nOverrideCPField = 0x1CC # int32_t

class C_OP_ModelCull: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_bBoundBox = 0x1C4 # bool
    m_bCullOutside = 0x1C5 # bool
    m_bUseBones = 0x1C6 # bool
    m_HitboxSetName = 0x1C7 # char[128]

class C_OP_ModelDampenMovement: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_bBoundBox = 0x1C4 # bool
    m_bOutside = 0x1C5 # bool
    m_bUseBones = 0x1C6 # bool
    m_HitboxSetName = 0x1C7 # char[128]
    m_vecPosOffset = 0x248 # CPerParticleVecInput
    m_fDrag = 0x8A0 # float

class C_OP_MoveToHitbox: # CParticleFunctionOperator
    m_modelInput = 0x1C0 # CParticleModelInput
    m_transformInput = 0x220 # CParticleTransformInput
    m_flLifeTimeLerpStart = 0x28C # float
    m_flLifeTimeLerpEnd = 0x290 # float
    m_flPrevPosScale = 0x294 # float
    m_HitboxSetName = 0x298 # char[128]
    m_bUseBones = 0x318 # bool
    m_nLerpType = 0x31C # HitboxLerpType_t
    m_flInterpolation = 0x320 # CPerParticleFloatInput

class C_OP_MovementLoopInsideSphere: # CParticleFunctionOperator
    m_nCP = 0x1C0 # int32_t
    m_flDistance = 0x1C8 # CParticleCollectionFloatInput
    m_vecScale = 0x320 # CParticleCollectionVecInput
    m_nDistSqrAttr = 0x978 # ParticleAttributeIndex_t

class C_OP_MovementMaintainOffset: # CParticleFunctionOperator
    m_vecOffset = 0x1C0 # Vector
    m_nCP = 0x1CC # int32_t
    m_bRadiusScale = 0x1D0 # bool

class C_OP_MovementMoveAlongSkinnedCPSnapshot: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nSnapshotControlPointNumber = 0x1C4 # int32_t
    m_bSetNormal = 0x1C8 # bool
    m_bSetRadius = 0x1C9 # bool
    m_flInterpolation = 0x1D0 # CPerParticleFloatInput
    m_flTValue = 0x328 # CPerParticleFloatInput

class C_OP_MovementPlaceOnGround: # CParticleFunctionOperator
    m_flOffset = 0x1C0 # CPerParticleFloatInput
    m_flMaxTraceLength = 0x318 # float
    m_flTolerance = 0x31C # float
    m_flTraceOffset = 0x320 # float
    m_flLerpRate = 0x324 # float
    m_CollisionGroupName = 0x328 # char[128]
    m_nTraceSet = 0x3A8 # ParticleTraceSet_t
    m_nRefCP1 = 0x3AC # int32_t
    m_nRefCP2 = 0x3B0 # int32_t
    m_nLerpCP = 0x3B4 # int32_t
    m_nTraceMissBehavior = 0x3C0 # ParticleTraceMissBehavior_t
    m_bIncludeShotHull = 0x3C4 # bool
    m_bIncludeWater = 0x3C5 # bool
    m_bSetNormal = 0x3C8 # bool
    m_bScaleOffset = 0x3C9 # bool
    m_nPreserveOffsetCP = 0x3CC # int32_t
    m_nIgnoreCP = 0x3D0 # int32_t

class C_OP_MovementRigidAttachToCP: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nScaleControlPoint = 0x1C4 # int32_t
    m_nScaleCPField = 0x1C8 # int32_t
    m_nFieldInput = 0x1CC # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1D0 # ParticleAttributeIndex_t
    m_bOffsetLocal = 0x1D4 # bool

class C_OP_MovementRotateParticleAroundAxis: # CParticleFunctionOperator
    m_vecRotAxis = 0x1C0 # CParticleCollectionVecInput
    m_flRotRate = 0x818 # CParticleCollectionFloatInput
    m_TransformInput = 0x970 # CParticleTransformInput
    m_bLocalSpace = 0x9D8 # bool

class C_OP_MovementSkinnedPositionFromCPSnapshot: # CParticleFunctionOperator
    m_nSnapshotControlPointNumber = 0x1C0 # int32_t
    m_nControlPointNumber = 0x1C4 # int32_t
    m_bRandom = 0x1C8 # bool
    m_nRandomSeed = 0x1CC # int32_t
    m_bSetNormal = 0x1D0 # bool
    m_bSetRadius = 0x1D1 # bool
    m_nIndexType = 0x1D4 # SnapshotIndexType_t
    m_flReadIndex = 0x1D8 # CPerParticleFloatInput
    m_flIncrement = 0x330 # CParticleCollectionFloatInput
    m_nFullLoopIncrement = 0x488 # CParticleCollectionFloatInput
    m_nSnapShotStartPoint = 0x5E0 # CParticleCollectionFloatInput
    m_flInterpolation = 0x738 # CPerParticleFloatInput

class C_OP_Noise: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flOutputMin = 0x1C4 # float
    m_flOutputMax = 0x1C8 # float
    m_fl4NoiseScale = 0x1CC # float
    m_bAdditive = 0x1D0 # bool
    m_flNoiseAnimationTimeScale = 0x1D4 # float

class C_OP_NoiseEmitter: # CParticleFunctionEmitter
    m_flEmissionDuration = 0x1C0 # float
    m_flStartTime = 0x1C4 # float
    m_flEmissionScale = 0x1C8 # float
    m_nScaleControlPoint = 0x1CC # int32_t
    m_nScaleControlPointField = 0x1D0 # int32_t
    m_nWorldNoisePoint = 0x1D4 # int32_t
    m_bAbsVal = 0x1D8 # bool
    m_bAbsValInv = 0x1D9 # bool
    m_flOffset = 0x1DC # float
    m_flOutputMin = 0x1E0 # float
    m_flOutputMax = 0x1E4 # float
    m_flNoiseScale = 0x1E8 # float
    m_flWorldNoiseScale = 0x1EC # float
    m_vecOffsetLoc = 0x1F0 # Vector
    m_flWorldTimeScale = 0x1FC # float

class C_OP_NormalLock: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t

class C_OP_NormalizeVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flScale = 0x1C4 # float

class C_OP_Orient2DRelToCP: # CParticleFunctionOperator
    m_flRotOffset = 0x1C0 # float
    m_flSpinStrength = 0x1C4 # float
    m_nCP = 0x1C8 # int32_t
    m_nFieldOutput = 0x1CC # ParticleAttributeIndex_t

class C_OP_OrientTo2dDirection: # CParticleFunctionOperator
    m_flRotOffset = 0x1C0 # float
    m_flSpinStrength = 0x1C4 # float
    m_nFieldOutput = 0x1C8 # ParticleAttributeIndex_t

class C_OP_OscillateScalar: # CParticleFunctionOperator
    m_RateMin = 0x1C0 # float
    m_RateMax = 0x1C4 # float
    m_FrequencyMin = 0x1C8 # float
    m_FrequencyMax = 0x1CC # float
    m_nField = 0x1D0 # ParticleAttributeIndex_t
    m_bProportional = 0x1D4 # bool
    m_bProportionalOp = 0x1D5 # bool
    m_flStartTime_min = 0x1D8 # float
    m_flStartTime_max = 0x1DC # float
    m_flEndTime_min = 0x1E0 # float
    m_flEndTime_max = 0x1E4 # float
    m_flOscMult = 0x1E8 # float
    m_flOscAdd = 0x1EC # float

class C_OP_OscillateScalarSimple: # CParticleFunctionOperator
    m_Rate = 0x1C0 # float
    m_Frequency = 0x1C4 # float
    m_nField = 0x1C8 # ParticleAttributeIndex_t
    m_flOscMult = 0x1CC # float
    m_flOscAdd = 0x1D0 # float

class C_OP_OscillateVector: # CParticleFunctionOperator
    m_RateMin = 0x1C0 # Vector
    m_RateMax = 0x1CC # Vector
    m_FrequencyMin = 0x1D8 # Vector
    m_FrequencyMax = 0x1E4 # Vector
    m_nField = 0x1F0 # ParticleAttributeIndex_t
    m_bProportional = 0x1F4 # bool
    m_bProportionalOp = 0x1F5 # bool
    m_bOffset = 0x1F6 # bool
    m_flStartTime_min = 0x1F8 # float
    m_flStartTime_max = 0x1FC # float
    m_flEndTime_min = 0x200 # float
    m_flEndTime_max = 0x204 # float
    m_flOscMult = 0x208 # CPerParticleFloatInput
    m_flOscAdd = 0x360 # CPerParticleFloatInput
    m_flRateScale = 0x4B8 # CPerParticleFloatInput

class C_OP_OscillateVectorSimple: # CParticleFunctionOperator
    m_Rate = 0x1C0 # Vector
    m_Frequency = 0x1CC # Vector
    m_nField = 0x1D8 # ParticleAttributeIndex_t
    m_flOscMult = 0x1DC # float
    m_flOscAdd = 0x1E0 # float
    m_bOffset = 0x1E4 # bool

class C_OP_ParentVortices: # CParticleFunctionForce
    m_flForceScale = 0x1D0 # float
    m_vecTwistAxis = 0x1D4 # Vector
    m_bFlipBasedOnYaw = 0x1E0 # bool

class C_OP_ParticlePhysics: # CParticleFunctionOperator
    m_Gravity = 0x1C0 # CParticleCollectionVecInput
    m_fDrag = 0x818 # CParticleCollectionFloatInput
    m_nMaxConstraintPasses = 0x970 # int32_t

class C_OP_PerParticleForce: # CParticleFunctionForce
    m_flForceScale = 0x1D0 # CPerParticleFloatInput
    m_vForce = 0x328 # CPerParticleVecInput
    m_nCP = 0x980 # int32_t

class C_OP_PercentageBetweenTransformLerpCPs: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C4 # float
    m_flInputMax = 0x1C8 # float
    m_TransformStart = 0x1D0 # CParticleTransformInput
    m_TransformEnd = 0x238 # CParticleTransformInput
    m_nOutputStartCP = 0x2A0 # int32_t
    m_nOutputStartField = 0x2A4 # int32_t
    m_nOutputEndCP = 0x2A8 # int32_t
    m_nOutputEndField = 0x2AC # int32_t
    m_nSetMethod = 0x2B0 # ParticleSetMethod_t
    m_bActiveRange = 0x2B4 # bool
    m_bRadialCheck = 0x2B5 # bool

class C_OP_PercentageBetweenTransforms: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C4 # float
    m_flInputMax = 0x1C8 # float
    m_flOutputMin = 0x1CC # float
    m_flOutputMax = 0x1D0 # float
    m_TransformStart = 0x1D8 # CParticleTransformInput
    m_TransformEnd = 0x240 # CParticleTransformInput
    m_nSetMethod = 0x2A8 # ParticleSetMethod_t
    m_bActiveRange = 0x2AC # bool
    m_bRadialCheck = 0x2AD # bool

class C_OP_PercentageBetweenTransformsVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C4 # float
    m_flInputMax = 0x1C8 # float
    m_vecOutputMin = 0x1CC # Vector
    m_vecOutputMax = 0x1D8 # Vector
    m_TransformStart = 0x1E8 # CParticleTransformInput
    m_TransformEnd = 0x250 # CParticleTransformInput
    m_nSetMethod = 0x2B8 # ParticleSetMethod_t
    m_bActiveRange = 0x2BC # bool
    m_bRadialCheck = 0x2BD # bool

class C_OP_PinParticleToCP: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_vecOffset = 0x1C8 # CParticleCollectionVecInput
    m_bOffsetLocal = 0x820 # bool
    m_nParticleSelection = 0x824 # ParticleSelection_t
    m_nParticleNumber = 0x828 # CParticleCollectionFloatInput
    m_nPinBreakType = 0x980 # ParticlePinDistance_t
    m_flBreakDistance = 0x988 # CParticleCollectionFloatInput
    m_flBreakSpeed = 0xAE0 # CParticleCollectionFloatInput
    m_flAge = 0xC38 # CParticleCollectionFloatInput
    m_nBreakControlPointNumber = 0xD90 # int32_t
    m_nBreakControlPointNumber2 = 0xD94 # int32_t
    m_flBreakValue = 0xD98 # CParticleCollectionFloatInput
    m_flInterpolation = 0xEF0 # CPerParticleFloatInput

class C_OP_PlanarConstraint: # CParticleFunctionConstraint
    m_PointOnPlane = 0x1C0 # Vector
    m_PlaneNormal = 0x1CC # Vector
    m_nControlPointNumber = 0x1D8 # int32_t
    m_bGlobalOrigin = 0x1DC # bool
    m_bGlobalNormal = 0x1DD # bool
    m_flRadiusScale = 0x1E0 # CPerParticleFloatInput
    m_flMaximumDistanceToCP = 0x338 # CParticleCollectionFloatInput
    m_bUseOldCode = 0x490 # bool

class C_OP_PlaneCull: # CParticleFunctionOperator
    m_nPlaneControlPoint = 0x1C0 # int32_t
    m_vecPlaneDirection = 0x1C4 # Vector
    m_bLocalSpace = 0x1D0 # bool
    m_flPlaneOffset = 0x1D4 # float

class C_OP_PlayEndCapWhenFinished: # CParticleFunctionPreEmission
    m_bFireOnEmissionEnd = 0x1D0 # bool
    m_bIncludeChildren = 0x1D1 # bool

class C_OP_PointVectorAtNextParticle: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInterpolation = 0x1C8 # CPerParticleFloatInput

class C_OP_PositionLock: # CParticleFunctionOperator
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_flStartTime_min = 0x228 # float
    m_flStartTime_max = 0x22C # float
    m_flStartTime_exp = 0x230 # float
    m_flEndTime_min = 0x234 # float
    m_flEndTime_max = 0x238 # float
    m_flEndTime_exp = 0x23C # float
    m_flRange = 0x240 # float
    m_flRangeBias = 0x248 # CParticleCollectionFloatInput
    m_flJumpThreshold = 0x3A0 # float
    m_flPrevPosScale = 0x3A4 # float
    m_bLockRot = 0x3A8 # bool
    m_vecScale = 0x3B0 # CParticleCollectionVecInput
    m_nFieldOutput = 0xA08 # ParticleAttributeIndex_t
    m_nFieldOutputPrev = 0xA0C # ParticleAttributeIndex_t

class C_OP_QuantizeCPComponent: # CParticleFunctionPreEmission
    m_flInputValue = 0x1D0 # CParticleCollectionFloatInput
    m_nCPOutput = 0x328 # int32_t
    m_nOutVectorField = 0x32C # int32_t
    m_flQuantizeValue = 0x330 # CParticleCollectionFloatInput

class C_OP_QuantizeFloat: # CParticleFunctionOperator
    m_InputValue = 0x1C0 # CPerParticleFloatInput
    m_nOutputField = 0x318 # ParticleAttributeIndex_t

class C_OP_RadiusDecay: # CParticleFunctionOperator
    m_flMinRadius = 0x1C0 # float

class C_OP_RampCPLinearRandom: # CParticleFunctionPreEmission
    m_nOutControlPointNumber = 0x1D0 # int32_t
    m_vecRateMin = 0x1D4 # Vector
    m_vecRateMax = 0x1E0 # Vector

class C_OP_RampScalarLinear: # CParticleFunctionOperator
    m_RateMin = 0x1C0 # float
    m_RateMax = 0x1C4 # float
    m_flStartTime_min = 0x1C8 # float
    m_flStartTime_max = 0x1CC # float
    m_flEndTime_min = 0x1D0 # float
    m_flEndTime_max = 0x1D4 # float
    m_nField = 0x200 # ParticleAttributeIndex_t
    m_bProportionalOp = 0x204 # bool

class C_OP_RampScalarLinearSimple: # CParticleFunctionOperator
    m_Rate = 0x1C0 # float
    m_flStartTime = 0x1C4 # float
    m_flEndTime = 0x1C8 # float
    m_nField = 0x1F0 # ParticleAttributeIndex_t

class C_OP_RampScalarSpline: # CParticleFunctionOperator
    m_RateMin = 0x1C0 # float
    m_RateMax = 0x1C4 # float
    m_flStartTime_min = 0x1C8 # float
    m_flStartTime_max = 0x1CC # float
    m_flEndTime_min = 0x1D0 # float
    m_flEndTime_max = 0x1D4 # float
    m_flBias = 0x1D8 # float
    m_nField = 0x200 # ParticleAttributeIndex_t
    m_bProportionalOp = 0x204 # bool
    m_bEaseOut = 0x205 # bool

class C_OP_RampScalarSplineSimple: # CParticleFunctionOperator
    m_Rate = 0x1C0 # float
    m_flStartTime = 0x1C4 # float
    m_flEndTime = 0x1C8 # float
    m_nField = 0x1F0 # ParticleAttributeIndex_t
    m_bEaseOut = 0x1F4 # bool

class C_OP_RandomForce: # CParticleFunctionForce
    m_MinForce = 0x1D0 # Vector
    m_MaxForce = 0x1DC # Vector

class C_OP_ReadFromNeighboringParticle: # CParticleFunctionOperator
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nIncrement = 0x1C8 # int32_t
    m_DistanceCheck = 0x1D0 # CPerParticleFloatInput
    m_flInterpolation = 0x328 # CPerParticleFloatInput

class C_OP_ReinitializeScalarEndCap: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flOutputMin = 0x1C4 # float
    m_flOutputMax = 0x1C8 # float

class C_OP_RemapAverageHitboxSpeedtoCP: # CParticleFunctionPreEmission
    m_nInControlPointNumber = 0x1D0 # int32_t
    m_nOutControlPointNumber = 0x1D4 # int32_t
    m_nField = 0x1D8 # int32_t
    m_nHitboxDataType = 0x1DC # ParticleHitboxDataSelection_t
    m_flInputMin = 0x1E0 # CParticleCollectionFloatInput
    m_flInputMax = 0x338 # CParticleCollectionFloatInput
    m_flOutputMin = 0x490 # CParticleCollectionFloatInput
    m_flOutputMax = 0x5E8 # CParticleCollectionFloatInput
    m_nHeightControlPointNumber = 0x740 # int32_t
    m_vecComparisonVelocity = 0x748 # CParticleCollectionVecInput
    m_HitboxSetName = 0xDA0 # char[128]

class C_OP_RemapAverageScalarValuetoCP: # CParticleFunctionPreEmission
    m_nOutControlPointNumber = 0x1D0 # int32_t
    m_nOutVectorField = 0x1D4 # int32_t
    m_nField = 0x1D8 # ParticleAttributeIndex_t
    m_flInputMin = 0x1DC # float
    m_flInputMax = 0x1E0 # float
    m_flOutputMin = 0x1E4 # float
    m_flOutputMax = 0x1E8 # float

class C_OP_RemapBoundingVolumetoCP: # CParticleFunctionPreEmission
    m_nOutControlPointNumber = 0x1D0 # int32_t
    m_flInputMin = 0x1D4 # float
    m_flInputMax = 0x1D8 # float
    m_flOutputMin = 0x1DC # float
    m_flOutputMax = 0x1E0 # float

class C_OP_RemapCPVelocityToVector: # CParticleFunctionOperator
    m_nControlPoint = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flScale = 0x1C8 # float
    m_bNormalize = 0x1CC # bool

class C_OP_RemapCPtoCP: # CParticleFunctionPreEmission
    m_nInputControlPoint = 0x1D0 # int32_t
    m_nOutputControlPoint = 0x1D4 # int32_t
    m_nInputField = 0x1D8 # int32_t
    m_nOutputField = 0x1DC # int32_t
    m_flInputMin = 0x1E0 # float
    m_flInputMax = 0x1E4 # float
    m_flOutputMin = 0x1E8 # float
    m_flOutputMax = 0x1EC # float
    m_bDerivative = 0x1F0 # bool
    m_flInterpRate = 0x1F4 # float

class C_OP_RemapCPtoScalar: # CParticleFunctionOperator
    m_nCPInput = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nField = 0x1C8 # int32_t
    m_flInputMin = 0x1CC # float
    m_flInputMax = 0x1D0 # float
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_flStartTime = 0x1DC # float
    m_flEndTime = 0x1E0 # float
    m_flInterpRate = 0x1E4 # float
    m_nSetMethod = 0x1E8 # ParticleSetMethod_t

class C_OP_RemapCPtoVector: # CParticleFunctionOperator
    m_nCPInput = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nLocalSpaceCP = 0x1C8 # int32_t
    m_vInputMin = 0x1CC # Vector
    m_vInputMax = 0x1D8 # Vector
    m_vOutputMin = 0x1E4 # Vector
    m_vOutputMax = 0x1F0 # Vector
    m_flStartTime = 0x1FC # float
    m_flEndTime = 0x200 # float
    m_flInterpRate = 0x204 # float
    m_nSetMethod = 0x208 # ParticleSetMethod_t
    m_bOffset = 0x20C # bool
    m_bAccelerate = 0x20D # bool

class C_OP_RemapControlPointDirectionToVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flScale = 0x1C4 # float
    m_nControlPointNumber = 0x1C8 # int32_t

class C_OP_RemapControlPointOrientationToRotation: # CParticleFunctionOperator
    m_nCP = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flOffsetRot = 0x1C8 # float
    m_nComponent = 0x1CC # int32_t

class C_OP_RemapCrossProductOfTwoVectorsToVector: # CParticleFunctionOperator
    m_InputVec1 = 0x1C0 # CPerParticleVecInput
    m_InputVec2 = 0x818 # CPerParticleVecInput
    m_nFieldOutput = 0xE70 # ParticleAttributeIndex_t
    m_bNormalize = 0xE74 # bool

class C_OP_RemapDensityGradientToVectorAttribute: # CParticleFunctionOperator
    m_flRadiusScale = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t

class C_OP_RemapDensityToVector: # CParticleFunctionOperator
    m_flRadiusScale = 0x1C0 # float
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flDensityMin = 0x1C8 # float
    m_flDensityMax = 0x1CC # float
    m_vecOutputMin = 0x1D0 # Vector
    m_vecOutputMax = 0x1DC # Vector
    m_bUseParentDensity = 0x1E8 # bool
    m_nVoxelGridResolution = 0x1EC # int32_t

class C_OP_RemapDirectionToCPToVector: # CParticleFunctionOperator
    m_nCP = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flScale = 0x1C8 # float
    m_flOffsetRot = 0x1CC # float
    m_vecOffsetAxis = 0x1D0 # Vector
    m_bNormalize = 0x1DC # bool
    m_nFieldStrength = 0x1E0 # ParticleAttributeIndex_t

class C_OP_RemapDistanceToLineSegmentBase: # CParticleFunctionOperator
    m_nCP0 = 0x1C0 # int32_t
    m_nCP1 = 0x1C4 # int32_t
    m_flMinInputValue = 0x1C8 # float
    m_flMaxInputValue = 0x1CC # float
    m_bInfiniteLine = 0x1D0 # bool

class C_OP_RemapDistanceToLineSegmentToScalar: # C_OP_RemapDistanceToLineSegmentBase
    m_nFieldOutput = 0x1E0 # ParticleAttributeIndex_t
    m_flMinOutputValue = 0x1E4 # float
    m_flMaxOutputValue = 0x1E8 # float

class C_OP_RemapDistanceToLineSegmentToVector: # C_OP_RemapDistanceToLineSegmentBase
    m_nFieldOutput = 0x1E0 # ParticleAttributeIndex_t
    m_vMinOutputValue = 0x1E4 # Vector
    m_vMaxOutputValue = 0x1F0 # Vector

class C_OP_RemapDotProductToCP: # CParticleFunctionPreEmission
    m_nInputCP1 = 0x1D0 # int32_t
    m_nInputCP2 = 0x1D4 # int32_t
    m_nOutputCP = 0x1D8 # int32_t
    m_nOutVectorField = 0x1DC # int32_t
    m_flInputMin = 0x1E0 # CParticleCollectionFloatInput
    m_flInputMax = 0x338 # CParticleCollectionFloatInput
    m_flOutputMin = 0x490 # CParticleCollectionFloatInput
    m_flOutputMax = 0x5E8 # CParticleCollectionFloatInput

class C_OP_RemapDotProductToScalar: # CParticleFunctionOperator
    m_nInputCP1 = 0x1C0 # int32_t
    m_nInputCP2 = 0x1C4 # int32_t
    m_nFieldOutput = 0x1C8 # ParticleAttributeIndex_t
    m_flInputMin = 0x1CC # float
    m_flInputMax = 0x1D0 # float
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_bUseParticleVelocity = 0x1DC # bool
    m_nSetMethod = 0x1E0 # ParticleSetMethod_t
    m_bActiveRange = 0x1E4 # bool
    m_bUseParticleNormal = 0x1E5 # bool

class C_OP_RemapExternalWindToCP: # CParticleFunctionPreEmission
    m_nCP = 0x1D0 # int32_t
    m_nCPOutput = 0x1D4 # int32_t
    m_vecScale = 0x1D8 # CParticleCollectionVecInput
    m_bSetMagnitude = 0x830 # bool
    m_nOutVectorField = 0x834 # int32_t

class C_OP_RemapModelVolumetoCP: # CParticleFunctionPreEmission
    m_nBBoxType = 0x1D0 # BBoxVolumeType_t
    m_nInControlPointNumber = 0x1D4 # int32_t
    m_nOutControlPointNumber = 0x1D8 # int32_t
    m_nOutControlPointMaxNumber = 0x1DC # int32_t
    m_nField = 0x1E0 # int32_t
    m_flInputMin = 0x1E4 # float
    m_flInputMax = 0x1E8 # float
    m_flOutputMin = 0x1EC # float
    m_flOutputMax = 0x1F0 # float

class C_OP_RemapNamedModelBodyPartEndCap: # C_OP_RemapNamedModelElementEndCap

class C_OP_RemapNamedModelBodyPartOnceTimed: # C_OP_RemapNamedModelElementOnceTimed

class C_OP_RemapNamedModelElementEndCap: # CParticleFunctionOperator
    m_hModel = 0x1C0 # CStrongHandle<InfoForResourceTypeCModel>
    m_inNames = 0x1C8 # CUtlVector<CUtlString>
    m_outNames = 0x1E0 # CUtlVector<CUtlString>
    m_fallbackNames = 0x1F8 # CUtlVector<CUtlString>
    m_bModelFromRenderer = 0x210 # bool
    m_nFieldInput = 0x214 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x218 # ParticleAttributeIndex_t

class C_OP_RemapNamedModelElementOnceTimed: # CParticleFunctionOperator
    m_hModel = 0x1C0 # CStrongHandle<InfoForResourceTypeCModel>
    m_inNames = 0x1C8 # CUtlVector<CUtlString>
    m_outNames = 0x1E0 # CUtlVector<CUtlString>
    m_fallbackNames = 0x1F8 # CUtlVector<CUtlString>
    m_bModelFromRenderer = 0x210 # bool
    m_bProportional = 0x211 # bool
    m_nFieldInput = 0x214 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x218 # ParticleAttributeIndex_t
    m_flRemapTime = 0x21C # float

class C_OP_RemapNamedModelMeshGroupEndCap: # C_OP_RemapNamedModelElementEndCap

class C_OP_RemapNamedModelMeshGroupOnceTimed: # C_OP_RemapNamedModelElementOnceTimed

class C_OP_RemapNamedModelSequenceEndCap: # C_OP_RemapNamedModelElementEndCap

class C_OP_RemapNamedModelSequenceOnceTimed: # C_OP_RemapNamedModelElementOnceTimed

class C_OP_RemapParticleCountOnScalarEndCap: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nInputMin = 0x1C4 # int32_t
    m_nInputMax = 0x1C8 # int32_t
    m_flOutputMin = 0x1CC # float
    m_flOutputMax = 0x1D0 # float
    m_bBackwards = 0x1D4 # bool
    m_nSetMethod = 0x1D8 # ParticleSetMethod_t

class C_OP_RemapParticleCountToScalar: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nInputMin = 0x1C8 # CParticleCollectionFloatInput
    m_nInputMax = 0x320 # CParticleCollectionFloatInput
    m_flOutputMin = 0x478 # CParticleCollectionFloatInput
    m_flOutputMax = 0x5D0 # CParticleCollectionFloatInput
    m_bActiveRange = 0x728 # bool
    m_nSetMethod = 0x72C # ParticleSetMethod_t

class C_OP_RemapSDFDistanceToScalarAttribute: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nVectorFieldInput = 0x1C4 # ParticleAttributeIndex_t
    m_flMinDistance = 0x1C8 # CParticleCollectionFloatInput
    m_flMaxDistance = 0x320 # CParticleCollectionFloatInput
    m_flValueBelowMin = 0x478 # CParticleCollectionFloatInput
    m_flValueAtMin = 0x5D0 # CParticleCollectionFloatInput
    m_flValueAtMax = 0x728 # CParticleCollectionFloatInput
    m_flValueAboveMax = 0x880 # CParticleCollectionFloatInput

class C_OP_RemapSDFDistanceToVectorAttribute: # CParticleFunctionOperator
    m_nVectorFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_nVectorFieldInput = 0x1C4 # ParticleAttributeIndex_t
    m_flMinDistance = 0x1C8 # CParticleCollectionFloatInput
    m_flMaxDistance = 0x320 # CParticleCollectionFloatInput
    m_vValueBelowMin = 0x478 # Vector
    m_vValueAtMin = 0x484 # Vector
    m_vValueAtMax = 0x490 # Vector
    m_vValueAboveMax = 0x49C # Vector

class C_OP_RemapSDFGradientToVectorAttribute: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t

class C_OP_RemapScalar: # CParticleFunctionOperator
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_flOutputMin = 0x1D0 # float
    m_flOutputMax = 0x1D4 # float
    m_bOldCode = 0x1D8 # bool

class C_OP_RemapScalarEndCap: # CParticleFunctionOperator
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_flOutputMin = 0x1D0 # float
    m_flOutputMax = 0x1D4 # float

class C_OP_RemapScalarOnceTimed: # CParticleFunctionOperator
    m_bProportional = 0x1C0 # bool
    m_nFieldInput = 0x1C4 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C8 # ParticleAttributeIndex_t
    m_flInputMin = 0x1CC # float
    m_flInputMax = 0x1D0 # float
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_flRemapTime = 0x1DC # float

class C_OP_RemapSpeed: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C4 # float
    m_flInputMax = 0x1C8 # float
    m_flOutputMin = 0x1CC # float
    m_flOutputMax = 0x1D0 # float
    m_nSetMethod = 0x1D4 # ParticleSetMethod_t
    m_bIgnoreDelta = 0x1D8 # bool

class C_OP_RemapSpeedtoCP: # CParticleFunctionPreEmission
    m_nInControlPointNumber = 0x1D0 # int32_t
    m_nOutControlPointNumber = 0x1D4 # int32_t
    m_nField = 0x1D8 # int32_t
    m_flInputMin = 0x1DC # float
    m_flInputMax = 0x1E0 # float
    m_flOutputMin = 0x1E4 # float
    m_flOutputMax = 0x1E8 # float
    m_bUseDeltaV = 0x1EC # bool

class C_OP_RemapTransformOrientationToRotations: # CParticleFunctionOperator
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_vecRotation = 0x228 # Vector
    m_bUseQuat = 0x234 # bool
    m_bWriteNormal = 0x235 # bool

class C_OP_RemapTransformOrientationToYaw: # CParticleFunctionOperator
    m_TransformInput = 0x1C0 # CParticleTransformInput
    m_nFieldOutput = 0x228 # ParticleAttributeIndex_t
    m_flRotOffset = 0x22C # float
    m_flSpinStrength = 0x230 # float

class C_OP_RemapTransformToVelocity: # CParticleFunctionOperator
    m_TransformInput = 0x1C0 # CParticleTransformInput

class C_OP_RemapTransformVisibilityToScalar: # CParticleFunctionOperator
    m_nSetMethod = 0x1C0 # ParticleSetMethod_t
    m_TransformInput = 0x1C8 # CParticleTransformInput
    m_nFieldOutput = 0x230 # ParticleAttributeIndex_t
    m_flInputMin = 0x234 # float
    m_flInputMax = 0x238 # float
    m_flOutputMin = 0x23C # float
    m_flOutputMax = 0x240 # float
    m_flRadius = 0x244 # float

class C_OP_RemapTransformVisibilityToVector: # CParticleFunctionOperator
    m_nSetMethod = 0x1C0 # ParticleSetMethod_t
    m_TransformInput = 0x1C8 # CParticleTransformInput
    m_nFieldOutput = 0x230 # ParticleAttributeIndex_t
    m_flInputMin = 0x234 # float
    m_flInputMax = 0x238 # float
    m_vecOutputMin = 0x23C # Vector
    m_vecOutputMax = 0x248 # Vector
    m_flRadius = 0x254 # float

class C_OP_RemapVectorComponentToScalar: # CParticleFunctionOperator
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nComponent = 0x1C8 # int32_t

class C_OP_RemapVectortoCP: # CParticleFunctionOperator
    m_nOutControlPointNumber = 0x1C0 # int32_t
    m_nFieldInput = 0x1C4 # ParticleAttributeIndex_t
    m_nParticleNumber = 0x1C8 # int32_t

class C_OP_RemapVelocityToVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_flScale = 0x1C4 # float
    m_bNormalize = 0x1C8 # bool

class C_OP_RemapVisibilityScalar: # CParticleFunctionOperator
    m_nFieldInput = 0x1C0 # ParticleAttributeIndex_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_flInputMin = 0x1C8 # float
    m_flInputMax = 0x1CC # float
    m_flOutputMin = 0x1D0 # float
    m_flOutputMax = 0x1D4 # float
    m_flRadiusScale = 0x1D8 # float

class C_OP_RenderAsModels: # CParticleFunctionRenderer
    m_ModelList = 0x200 # CUtlVector<ModelReference_t>
    m_flModelScale = 0x21C # float
    m_bFitToModelSize = 0x220 # bool
    m_bNonUniformScaling = 0x221 # bool
    m_nXAxisScalingAttribute = 0x224 # ParticleAttributeIndex_t
    m_nYAxisScalingAttribute = 0x228 # ParticleAttributeIndex_t
    m_nZAxisScalingAttribute = 0x22C # ParticleAttributeIndex_t
    m_nSizeCullBloat = 0x230 # int32_t

class C_OP_RenderBlobs: # CParticleFunctionRenderer
    m_cubeWidth = 0x200 # CParticleCollectionRendererFloatInput
    m_cutoffRadius = 0x358 # CParticleCollectionRendererFloatInput
    m_renderRadius = 0x4B0 # CParticleCollectionRendererFloatInput
    m_nScaleCP = 0x608 # int32_t
    m_MaterialVars = 0x610 # CUtlVector<MaterialVariable_t>
    m_hMaterial = 0x640 # CStrongHandle<InfoForResourceTypeIMaterial2>

class C_OP_RenderCables: # CParticleFunctionRenderer
    m_flRadiusScale = 0x200 # CParticleCollectionFloatInput
    m_flAlphaScale = 0x358 # CParticleCollectionFloatInput
    m_vecColorScale = 0x4B0 # CParticleCollectionVecInput
    m_nColorBlendType = 0xB08 # ParticleColorBlendType_t
    m_hMaterial = 0xB10 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nTextureRepetitionMode = 0xB18 # TextureRepetitionMode_t
    m_flTextureRepeatsPerSegment = 0xB20 # CParticleCollectionFloatInput
    m_flTextureRepeatsCircumference = 0xC78 # CParticleCollectionFloatInput
    m_flColorMapOffsetV = 0xDD0 # CParticleCollectionFloatInput
    m_flColorMapOffsetU = 0xF28 # CParticleCollectionFloatInput
    m_flNormalMapOffsetV = 0x1080 # CParticleCollectionFloatInput
    m_flNormalMapOffsetU = 0x11D8 # CParticleCollectionFloatInput
    m_bDrawCableCaps = 0x1330 # bool
    m_flCapRoundness = 0x1334 # float
    m_flCapOffsetAmount = 0x1338 # float
    m_flTessScale = 0x133C # float
    m_nMinTesselation = 0x1340 # int32_t
    m_nMaxTesselation = 0x1344 # int32_t
    m_nRoundness = 0x1348 # int32_t
    m_LightingTransform = 0x1350 # CParticleTransformInput
    m_MaterialFloatVars = 0x13B8 # CUtlVector<FloatInputMaterialVariable_t>
    m_MaterialVecVars = 0x13E8 # CUtlVector<VecInputMaterialVariable_t>

class C_OP_RenderClothForce: # CParticleFunctionRenderer

class C_OP_RenderDeferredLight: # CParticleFunctionRenderer
    m_bUseAlphaTestWindow = 0x200 # bool
    m_bUseTexture = 0x201 # bool
    m_flRadiusScale = 0x204 # float
    m_flAlphaScale = 0x208 # float
    m_nAlpha2Field = 0x20C # ParticleAttributeIndex_t
    m_vecColorScale = 0x210 # CParticleCollectionVecInput
    m_nColorBlendType = 0x868 # ParticleColorBlendType_t
    m_flLightDistance = 0x86C # float
    m_flStartFalloff = 0x870 # float
    m_flDistanceFalloff = 0x874 # float
    m_flSpotFoV = 0x878 # float
    m_nAlphaTestPointField = 0x87C # ParticleAttributeIndex_t
    m_nAlphaTestRangeField = 0x880 # ParticleAttributeIndex_t
    m_nAlphaTestSharpnessField = 0x884 # ParticleAttributeIndex_t
    m_hTexture = 0x888 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nHSVShiftControlPoint = 0x890 # int32_t

class C_OP_RenderFlattenGrass: # CParticleFunctionRenderer
    m_flFlattenStrength = 0x200 # float
    m_nStrengthFieldOverride = 0x204 # ParticleAttributeIndex_t
    m_flRadiusScale = 0x208 # float

class C_OP_RenderGpuImplicit: # CParticleFunctionRenderer
    m_bUsePerParticleRadius = 0x200 # bool
    m_fGridSize = 0x208 # CParticleCollectionRendererFloatInput
    m_fRadiusScale = 0x360 # CParticleCollectionRendererFloatInput
    m_fIsosurfaceThreshold = 0x4B8 # CParticleCollectionRendererFloatInput
    m_nScaleCP = 0x610 # int32_t
    m_hMaterial = 0x618 # CStrongHandle<InfoForResourceTypeIMaterial2>

class C_OP_RenderLightBeam: # CParticleFunctionRenderer
    m_vColorBlend = 0x200 # CParticleCollectionVecInput
    m_nColorBlendType = 0x858 # ParticleColorBlendType_t
    m_flBrightnessLumensPerMeter = 0x860 # CParticleCollectionFloatInput
    m_bCastShadows = 0x9B8 # bool
    m_flSkirt = 0x9C0 # CParticleCollectionFloatInput
    m_flRange = 0xB18 # CParticleCollectionFloatInput
    m_flThickness = 0xC70 # CParticleCollectionFloatInput

class C_OP_RenderLights: # C_OP_RenderPoints
    m_flAnimationRate = 0x210 # float
    m_nAnimationType = 0x214 # AnimationType_t
    m_bAnimateInFPS = 0x218 # bool
    m_flMinSize = 0x21C # float
    m_flMaxSize = 0x220 # float
    m_flStartFadeSize = 0x224 # float
    m_flEndFadeSize = 0x228 # float

class C_OP_RenderMaterialProxy: # CParticleFunctionRenderer
    m_nMaterialControlPoint = 0x200 # int32_t
    m_nProxyType = 0x204 # MaterialProxyType_t
    m_MaterialVars = 0x208 # CUtlVector<MaterialVariable_t>
    m_hOverrideMaterial = 0x220 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_flMaterialOverrideEnabled = 0x228 # CParticleCollectionFloatInput
    m_vecColorScale = 0x380 # CParticleCollectionVecInput
    m_flAlpha = 0x9D8 # CPerParticleFloatInput
    m_nColorBlendType = 0xB30 # ParticleColorBlendType_t

class C_OP_RenderModels: # CParticleFunctionRenderer
    m_bOnlyRenderInEffectsBloomPass = 0x200 # bool
    m_bOnlyRenderInEffectsWaterPass = 0x201 # bool
    m_bUseMixedResolutionRendering = 0x202 # bool
    m_bOnlyRenderInEffecsGameOverlay = 0x203 # bool
    m_ModelList = 0x208 # CUtlVector<ModelReference_t>
    m_nBodyGroupField = 0x224 # ParticleAttributeIndex_t
    m_nSubModelField = 0x228 # ParticleAttributeIndex_t
    m_bIgnoreNormal = 0x22C # bool
    m_bOrientZ = 0x22D # bool
    m_bCenterOffset = 0x22E # bool
    m_vecLocalOffset = 0x230 # CPerParticleVecInput
    m_vecLocalRotation = 0x888 # CPerParticleVecInput
    m_bIgnoreRadius = 0xEE0 # bool
    m_nModelScaleCP = 0xEE4 # int32_t
    m_vecComponentScale = 0xEE8 # CPerParticleVecInput
    m_bLocalScale = 0x1540 # bool
    m_nSizeCullBloat = 0x1544 # int32_t
    m_bAnimated = 0x1548 # bool
    m_flAnimationRate = 0x1550 # CPerParticleFloatInput
    m_bScaleAnimationRate = 0x16A8 # bool
    m_bForceLoopingAnimation = 0x16A9 # bool
    m_bResetAnimOnStop = 0x16AA # bool
    m_bManualAnimFrame = 0x16AB # bool
    m_nAnimationScaleField = 0x16AC # ParticleAttributeIndex_t
    m_nAnimationField = 0x16B0 # ParticleAttributeIndex_t
    m_nManualFrameField = 0x16B4 # ParticleAttributeIndex_t
    m_ActivityName = 0x16B8 # char[256]
    m_SequenceName = 0x17B8 # char[256]
    m_bEnableClothSimulation = 0x18B8 # bool
    m_hOverrideMaterial = 0x18C0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_bOverrideTranslucentMaterials = 0x18C8 # bool
    m_nSkin = 0x18D0 # CPerParticleFloatInput
    m_MaterialVars = 0x1A28 # CUtlVector<MaterialVariable_t>
    m_flManualModelSelection = 0x1A40 # CPerParticleFloatInput
    m_modelInput = 0x1B98 # CParticleModelInput
    m_nLOD = 0x1BF8 # int32_t
    m_EconSlotName = 0x1BFC # char[256]
    m_bOriginalModel = 0x1CFC # bool
    m_bSuppressTint = 0x1CFD # bool
    m_bUseRawMeshGroup = 0x1CFE # bool
    m_bDisableShadows = 0x1CFF # bool
    m_bDisableDepthPrepass = 0x1D00 # bool
    m_bAcceptsDecals = 0x1D01 # bool
    m_bForceDrawInterlevedWithSiblings = 0x1D02 # bool
    m_bDoNotDrawInParticlePass = 0x1D03 # bool
    m_bUseFastModelCollectionRenderPath = 0x1D04 # bool
    m_bAllowApproximateTransforms = 0x1D05 # bool
    m_szRenderAttribute = 0x1D06 # char[260]
    m_flRadiusScale = 0x1E10 # CParticleCollectionFloatInput
    m_flAlphaScale = 0x1F68 # CParticleCollectionFloatInput
    m_flRollScale = 0x20C0 # CParticleCollectionFloatInput
    m_nAlpha2Field = 0x2218 # ParticleAttributeIndex_t
    m_vecColorScale = 0x2220 # CParticleCollectionVecInput
    m_nColorBlendType = 0x2878 # ParticleColorBlendType_t

class C_OP_RenderOmni2Light: # CParticleFunctionRenderer
    m_nLightType = 0x200 # ParticleOmni2LightTypeChoiceList_t
    m_vColorBlend = 0x208 # CParticleCollectionVecInput
    m_nColorBlendType = 0x860 # ParticleColorBlendType_t
    m_nBrightnessUnit = 0x864 # ParticleLightUnitChoiceList_t
    m_flBrightnessLumens = 0x868 # CPerParticleFloatInput
    m_flBrightnessCandelas = 0x9C0 # CPerParticleFloatInput
    m_bCastShadows = 0xB18 # bool
    m_flLuminaireRadius = 0xB20 # CPerParticleFloatInput
    m_flSkirt = 0xC78 # CPerParticleFloatInput
    m_flRange = 0xDD0 # CPerParticleFloatInput
    m_flInnerConeAngle = 0xF28 # CPerParticleFloatInput
    m_flOuterConeAngle = 0x1080 # CPerParticleFloatInput
    m_hLightCookie = 0x11D8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bSphericalCookie = 0x11E0 # bool

class C_OP_RenderPoints: # CParticleFunctionRenderer
    m_hMaterial = 0x200 # CStrongHandle<InfoForResourceTypeIMaterial2>

class C_OP_RenderPostProcessing: # CParticleFunctionRenderer
    m_flPostProcessStrength = 0x200 # CPerParticleFloatInput
    m_hPostTexture = 0x358 # CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    m_nPriority = 0x360 # ParticlePostProcessPriorityGroup_t

class C_OP_RenderProjected: # CParticleFunctionRenderer
    m_bProjectCharacter = 0x200 # bool
    m_bProjectWorld = 0x201 # bool
    m_bProjectWater = 0x202 # bool
    m_bFlipHorizontal = 0x203 # bool
    m_bEnableProjectedDepthControls = 0x204 # bool
    m_flMinProjectionDepth = 0x208 # float
    m_flMaxProjectionDepth = 0x20C # float
    m_vecProjectedMaterials = 0x210 # CUtlVector<RenderProjectedMaterial_t>
    m_flMaterialSelection = 0x228 # CPerParticleFloatInput
    m_flAnimationTimeScale = 0x380 # float
    m_bOrientToNormal = 0x384 # bool
    m_MaterialVars = 0x388 # CUtlVector<MaterialVariable_t>

class C_OP_RenderRopes: # CBaseRendererSource2
    m_bEnableFadingAndClamping = 0x2710 # bool
    m_flMinSize = 0x2714 # float
    m_flMaxSize = 0x2718 # float
    m_flStartFadeSize = 0x271C # float
    m_flEndFadeSize = 0x2720 # float
    m_flStartFadeDot = 0x2724 # float
    m_flEndFadeDot = 0x2728 # float
    m_flRadiusTaper = 0x272C # float
    m_nMinTesselation = 0x2730 # int32_t
    m_nMaxTesselation = 0x2734 # int32_t
    m_flTessScale = 0x2738 # float
    m_flTextureVWorldSize = 0x2740 # CParticleCollectionRendererFloatInput
    m_flTextureVScrollRate = 0x2898 # CParticleCollectionRendererFloatInput
    m_flTextureVOffset = 0x29F0 # CParticleCollectionRendererFloatInput
    m_nTextureVParamsCP = 0x2B48 # int32_t
    m_bClampV = 0x2B4C # bool
    m_nScaleCP1 = 0x2B50 # int32_t
    m_nScaleCP2 = 0x2B54 # int32_t
    m_flScaleVSizeByControlPointDistance = 0x2B58 # float
    m_flScaleVScrollByControlPointDistance = 0x2B5C # float
    m_flScaleVOffsetByControlPointDistance = 0x2B60 # float
    m_bUseScalarForTextureCoordinate = 0x2B65 # bool
    m_nScalarFieldForTextureCoordinate = 0x2B68 # ParticleAttributeIndex_t
    m_flScalarAttributeTextureCoordScale = 0x2B6C # float
    m_bReverseOrder = 0x2B70 # bool
    m_bClosedLoop = 0x2B71 # bool
    m_nOrientationType = 0x2B74 # ParticleOrientationChoiceList_t
    m_nVectorFieldForOrientation = 0x2B78 # ParticleAttributeIndex_t
    m_bDrawAsOpaque = 0x2B7C # bool
    m_bGenerateNormals = 0x2B7D # bool

class C_OP_RenderScreenShake: # CParticleFunctionRenderer
    m_flDurationScale = 0x200 # float
    m_flRadiusScale = 0x204 # float
    m_flFrequencyScale = 0x208 # float
    m_flAmplitudeScale = 0x20C # float
    m_nRadiusField = 0x210 # ParticleAttributeIndex_t
    m_nDurationField = 0x214 # ParticleAttributeIndex_t
    m_nFrequencyField = 0x218 # ParticleAttributeIndex_t
    m_nAmplitudeField = 0x21C # ParticleAttributeIndex_t
    m_nFilterCP = 0x220 # int32_t

class C_OP_RenderScreenVelocityRotate: # CParticleFunctionRenderer
    m_flRotateRateDegrees = 0x200 # float
    m_flForwardDegrees = 0x204 # float

class C_OP_RenderSimpleModelCollection: # CParticleFunctionRenderer
    m_bCenterOffset = 0x200 # bool
    m_modelInput = 0x208 # CParticleModelInput
    m_nLOD = 0x268 # int32_t
    m_bDisableShadows = 0x26C # bool
    m_bAcceptsDecals = 0x26D # bool

class C_OP_RenderSound: # CParticleFunctionRenderer
    m_flDurationScale = 0x200 # float
    m_flSndLvlScale = 0x204 # float
    m_flPitchScale = 0x208 # float
    m_flVolumeScale = 0x20C # float
    m_nSndLvlField = 0x210 # ParticleAttributeIndex_t
    m_nDurationField = 0x214 # ParticleAttributeIndex_t
    m_nPitchField = 0x218 # ParticleAttributeIndex_t
    m_nVolumeField = 0x21C # ParticleAttributeIndex_t
    m_nChannel = 0x220 # int32_t
    m_nCPReference = 0x224 # int32_t
    m_pszSoundName = 0x228 # char[256]
    m_bSuppressStopSoundEvent = 0x328 # bool

class C_OP_RenderSprites: # CBaseRendererSource2
    m_nSequenceOverride = 0x2710 # CParticleCollectionRendererFloatInput
    m_nOrientationType = 0x2868 # ParticleOrientationChoiceList_t
    m_nOrientationControlPoint = 0x286C # int32_t
    m_bUseYawWithNormalAligned = 0x2870 # bool
    m_flMinSize = 0x2878 # CParticleCollectionRendererFloatInput
    m_flMaxSize = 0x29D0 # CParticleCollectionRendererFloatInput
    m_flAlphaAdjustWithSizeAdjust = 0x2B28 # CParticleCollectionRendererFloatInput
    m_flStartFadeSize = 0x2C80 # CParticleCollectionRendererFloatInput
    m_flEndFadeSize = 0x2DD8 # CParticleCollectionRendererFloatInput
    m_flStartFadeDot = 0x2F30 # float
    m_flEndFadeDot = 0x2F34 # float
    m_bDistanceAlpha = 0x2F38 # bool
    m_bSoftEdges = 0x2F39 # bool
    m_flEdgeSoftnessStart = 0x2F3C # float
    m_flEdgeSoftnessEnd = 0x2F40 # float
    m_bOutline = 0x2F44 # bool
    m_OutlineColor = 0x2F45 # Color
    m_nOutlineAlpha = 0x2F4C # int32_t
    m_flOutlineStart0 = 0x2F50 # float
    m_flOutlineStart1 = 0x2F54 # float
    m_flOutlineEnd0 = 0x2F58 # float
    m_flOutlineEnd1 = 0x2F5C # float
    m_nLightingMode = 0x2F60 # ParticleLightingQuality_t
    m_flLightingTessellation = 0x2F68 # CParticleCollectionRendererFloatInput
    m_flLightingDirectionality = 0x30C0 # CParticleCollectionRendererFloatInput
    m_bParticleShadows = 0x3218 # bool
    m_flShadowDensity = 0x321C # float

class C_OP_RenderStandardLight: # CParticleFunctionRenderer
    m_nLightType = 0x200 # ParticleLightTypeChoiceList_t
    m_vecColorScale = 0x208 # CParticleCollectionVecInput
    m_nColorBlendType = 0x860 # ParticleColorBlendType_t
    m_flIntensity = 0x868 # CParticleCollectionFloatInput
    m_bCastShadows = 0x9C0 # bool
    m_flTheta = 0x9C8 # CParticleCollectionFloatInput
    m_flPhi = 0xB20 # CParticleCollectionFloatInput
    m_flRadiusMultiplier = 0xC78 # CParticleCollectionFloatInput
    m_nAttenuationStyle = 0xDD0 # StandardLightingAttenuationStyle_t
    m_flFalloffLinearity = 0xDD8 # CParticleCollectionFloatInput
    m_flFiftyPercentFalloff = 0xF30 # CParticleCollectionFloatInput
    m_flZeroPercentFalloff = 0x1088 # CParticleCollectionFloatInput
    m_bRenderDiffuse = 0x11E0 # bool
    m_bRenderSpecular = 0x11E1 # bool
    m_lightCookie = 0x11E8 # CUtlString
    m_nPriority = 0x11F0 # int32_t
    m_nFogLightingMode = 0x11F4 # ParticleLightFogLightingMode_t
    m_flFogContribution = 0x11F8 # CParticleCollectionRendererFloatInput
    m_nCapsuleLightBehavior = 0x1350 # ParticleLightBehaviorChoiceList_t
    m_flCapsuleLength = 0x1354 # float
    m_bReverseOrder = 0x1358 # bool
    m_bClosedLoop = 0x1359 # bool
    m_nPrevPntSource = 0x135C # ParticleAttributeIndex_t
    m_flMaxLength = 0x1360 # float
    m_flMinLength = 0x1364 # float
    m_bIgnoreDT = 0x1368 # bool
    m_flConstrainRadiusToLengthRatio = 0x136C # float
    m_flLengthScale = 0x1370 # float
    m_flLengthFadeInTime = 0x1374 # float

class C_OP_RenderStatusEffect: # CParticleFunctionRenderer
    m_pTextureColorWarp = 0x200 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureDetail2 = 0x208 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureDiffuseWarp = 0x210 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureFresnelColorWarp = 0x218 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureFresnelWarp = 0x220 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureSpecularWarp = 0x228 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureEnvMap = 0x230 # CStrongHandle<InfoForResourceTypeCTextureBase>

class C_OP_RenderStatusEffectCitadel: # CParticleFunctionRenderer
    m_pTextureColorWarp = 0x200 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureNormal = 0x208 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureMetalness = 0x210 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureRoughness = 0x218 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureSelfIllum = 0x220 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_pTextureDetail = 0x228 # CStrongHandle<InfoForResourceTypeCTextureBase>

class C_OP_RenderText: # CParticleFunctionRenderer
    m_OutlineColor = 0x200 # Color
    m_DefaultText = 0x208 # CUtlString

class C_OP_RenderTonemapController: # CParticleFunctionRenderer
    m_flTonemapLevel = 0x200 # float
    m_flTonemapWeight = 0x204 # float
    m_nTonemapLevelField = 0x208 # ParticleAttributeIndex_t
    m_nTonemapWeightField = 0x20C # ParticleAttributeIndex_t

class C_OP_RenderTrails: # CBaseTrailRenderer
    m_bEnableFadingAndClamping = 0x29E0 # bool
    m_flStartFadeDot = 0x29E4 # float
    m_flEndFadeDot = 0x29E8 # float
    m_nPrevPntSource = 0x29EC # ParticleAttributeIndex_t
    m_flMaxLength = 0x29F0 # float
    m_flMinLength = 0x29F4 # float
    m_bIgnoreDT = 0x29F8 # bool
    m_flConstrainRadiusToLengthRatio = 0x29FC # float
    m_flLengthScale = 0x2A00 # float
    m_flLengthFadeInTime = 0x2A04 # float
    m_flRadiusHeadTaper = 0x2A08 # CPerParticleFloatInput
    m_vecHeadColorScale = 0x2B60 # CParticleCollectionVecInput
    m_flHeadAlphaScale = 0x31B8 # CPerParticleFloatInput
    m_flRadiusTaper = 0x3310 # CPerParticleFloatInput
    m_vecTailColorScale = 0x3468 # CParticleCollectionVecInput
    m_flTailAlphaScale = 0x3AC0 # CPerParticleFloatInput
    m_nHorizCropField = 0x3C18 # ParticleAttributeIndex_t
    m_nVertCropField = 0x3C1C # ParticleAttributeIndex_t
    m_flForwardShift = 0x3C20 # float
    m_bFlipUVBasedOnPitchYaw = 0x3C24 # bool

class C_OP_RenderTreeShake: # CParticleFunctionRenderer
    m_flPeakStrength = 0x200 # float
    m_nPeakStrengthFieldOverride = 0x204 # ParticleAttributeIndex_t
    m_flRadius = 0x208 # float
    m_nRadiusFieldOverride = 0x20C # ParticleAttributeIndex_t
    m_flShakeDuration = 0x210 # float
    m_flTransitionTime = 0x214 # float
    m_flTwistAmount = 0x218 # float
    m_flRadialAmount = 0x21C # float
    m_flControlPointOrientationAmount = 0x220 # float
    m_nControlPointForLinearDirection = 0x224 # int32_t

class C_OP_RenderVRHapticEvent: # CParticleFunctionRenderer
    m_nHand = 0x200 # ParticleVRHandChoiceList_t
    m_nOutputHandCP = 0x204 # int32_t
    m_nOutputField = 0x208 # int32_t
    m_flAmplitude = 0x210 # CPerParticleFloatInput

class C_OP_RepeatedTriggerChildGroup: # CParticleFunctionPreEmission
    m_nChildGroupID = 0x1D0 # int32_t
    m_flClusterRefireTime = 0x1D8 # CParticleCollectionFloatInput
    m_flClusterSize = 0x330 # CParticleCollectionFloatInput
    m_flClusterCooldown = 0x488 # CParticleCollectionFloatInput
    m_bLimitChildCount = 0x5E0 # bool

class C_OP_RestartAfterDuration: # CParticleFunctionOperator
    m_flDurationMin = 0x1C0 # float
    m_flDurationMax = 0x1C4 # float
    m_nCP = 0x1C8 # int32_t
    m_nCPField = 0x1CC # int32_t
    m_nChildGroupID = 0x1D0 # int32_t
    m_bOnlyChildren = 0x1D4 # bool

class C_OP_RopeSpringConstraint: # CParticleFunctionConstraint
    m_flRestLength = 0x1C0 # CParticleCollectionFloatInput
    m_flMinDistance = 0x318 # CParticleCollectionFloatInput
    m_flMaxDistance = 0x470 # CParticleCollectionFloatInput
    m_flAdjustmentScale = 0x5C8 # float
    m_flInitialRestingLength = 0x5D0 # CParticleCollectionFloatInput

class C_OP_RotateVector: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecRotAxisMin = 0x1C4 # Vector
    m_vecRotAxisMax = 0x1D0 # Vector
    m_flRotRateMin = 0x1DC # float
    m_flRotRateMax = 0x1E0 # float
    m_bNormalize = 0x1E4 # bool
    m_flScale = 0x1E8 # CPerParticleFloatInput

class C_OP_RtEnvCull: # CParticleFunctionOperator
    m_vecTestDir = 0x1C0 # Vector
    m_vecTestNormal = 0x1CC # Vector
    m_bCullOnMiss = 0x1D8 # bool
    m_bStickInsteadOfCull = 0x1D9 # bool
    m_RtEnvName = 0x1DA # char[128]
    m_nRTEnvCP = 0x25C # int32_t
    m_nComponent = 0x260 # int32_t

class C_OP_SDFConstraint: # CParticleFunctionConstraint
    m_flMinDist = 0x1C0 # CParticleCollectionFloatInput
    m_flMaxDist = 0x318 # CParticleCollectionFloatInput
    m_nMaxIterations = 0x470 # int32_t

class C_OP_SDFForce: # CParticleFunctionForce
    m_flForceScale = 0x1D0 # float

class C_OP_SDFLighting: # CParticleFunctionOperator
    m_vLightingDir = 0x1C0 # Vector
    m_vTint_0 = 0x1CC # Vector
    m_vTint_1 = 0x1D8 # Vector

class C_OP_SelectivelyEnableChildren: # CParticleFunctionPreEmission
    m_nChildGroupID = 0x1D0 # CParticleCollectionFloatInput
    m_nFirstChild = 0x328 # CParticleCollectionFloatInput
    m_nNumChildrenToEnable = 0x480 # CParticleCollectionFloatInput
    m_bPlayEndcapOnStop = 0x5D8 # bool
    m_bDestroyImmediately = 0x5D9 # bool

class C_OP_SequenceFromModel: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t
    m_nFieldOutputAnim = 0x1C8 # ParticleAttributeIndex_t
    m_flInputMin = 0x1CC # float
    m_flInputMax = 0x1D0 # float
    m_flOutputMin = 0x1D4 # float
    m_flOutputMax = 0x1D8 # float
    m_nSetMethod = 0x1DC # ParticleSetMethod_t

class C_OP_SetAttributeToScalarExpression: # CParticleFunctionOperator
    m_nExpression = 0x1C0 # ScalarExpressionType_t
    m_flInput1 = 0x1C8 # CPerParticleFloatInput
    m_flInput2 = 0x320 # CPerParticleFloatInput
    m_flOutputRemap = 0x478 # CParticleRemapFloatInput
    m_nOutputField = 0x5D0 # ParticleAttributeIndex_t
    m_nSetMethod = 0x5D4 # ParticleSetMethod_t

class C_OP_SetCPOrientationToDirection: # CParticleFunctionOperator
    m_nInputControlPoint = 0x1C0 # int32_t
    m_nOutputControlPoint = 0x1C4 # int32_t

class C_OP_SetCPOrientationToGroundNormal: # CParticleFunctionOperator
    m_flInterpRate = 0x1C0 # float
    m_flMaxTraceLength = 0x1C4 # float
    m_flTolerance = 0x1C8 # float
    m_flTraceOffset = 0x1CC # float
    m_CollisionGroupName = 0x1D0 # char[128]
    m_nTraceSet = 0x250 # ParticleTraceSet_t
    m_nInputCP = 0x254 # int32_t
    m_nOutputCP = 0x258 # int32_t
    m_bIncludeWater = 0x268 # bool

class C_OP_SetCPOrientationToPointAtCP: # CParticleFunctionPreEmission
    m_nInputCP = 0x1D0 # int32_t
    m_nOutputCP = 0x1D4 # int32_t
    m_flInterpolation = 0x1D8 # CParticleCollectionFloatInput
    m_b2DOrientation = 0x330 # bool
    m_bAvoidSingularity = 0x331 # bool
    m_bPointAway = 0x332 # bool

class C_OP_SetCPtoVector: # CParticleFunctionOperator
    m_nCPInput = 0x1C0 # int32_t
    m_nFieldOutput = 0x1C4 # ParticleAttributeIndex_t

class C_OP_SetChildControlPoints: # CParticleFunctionOperator
    m_nChildGroupID = 0x1C0 # int32_t
    m_nFirstControlPoint = 0x1C4 # int32_t
    m_nNumControlPoints = 0x1C8 # int32_t
    m_nFirstSourcePoint = 0x1D0 # CParticleCollectionFloatInput
    m_bReverse = 0x328 # bool
    m_bSetOrientation = 0x329 # bool

class C_OP_SetControlPointFieldFromVectorExpression: # CParticleFunctionPreEmission
    m_nExpression = 0x1D0 # VectorFloatExpressionType_t
    m_vecInput1 = 0x1D8 # CParticleCollectionVecInput
    m_vecInput2 = 0x830 # CParticleCollectionVecInput
    m_flOutputRemap = 0xE88 # CParticleRemapFloatInput
    m_nOutputCP = 0xFE0 # int32_t
    m_nOutVectorField = 0xFE4 # int32_t

class C_OP_SetControlPointFieldToScalarExpression: # CParticleFunctionPreEmission
    m_nExpression = 0x1D0 # ScalarExpressionType_t
    m_flInput1 = 0x1D8 # CParticleCollectionFloatInput
    m_flInput2 = 0x330 # CParticleCollectionFloatInput
    m_flOutputRemap = 0x488 # CParticleRemapFloatInput
    m_nOutputCP = 0x5E0 # int32_t
    m_nOutVectorField = 0x5E4 # int32_t

class C_OP_SetControlPointFieldToWater: # CParticleFunctionPreEmission
    m_nSourceCP = 0x1D0 # int32_t
    m_nDestCP = 0x1D4 # int32_t
    m_nCPField = 0x1D8 # int32_t

class C_OP_SetControlPointFromObjectScale: # CParticleFunctionPreEmission
    m_nCPInput = 0x1D0 # int32_t
    m_nCPOutput = 0x1D4 # int32_t

class C_OP_SetControlPointOrientation: # CParticleFunctionPreEmission
    m_bUseWorldLocation = 0x1D0 # bool
    m_bRandomize = 0x1D2 # bool
    m_bSetOnce = 0x1D3 # bool
    m_nCP = 0x1D4 # int32_t
    m_nHeadLocation = 0x1D8 # int32_t
    m_vecRotation = 0x1DC # QAngle
    m_vecRotationB = 0x1E8 # QAngle
    m_flInterpolation = 0x1F8 # CParticleCollectionFloatInput

class C_OP_SetControlPointOrientationToCPVelocity: # CParticleFunctionPreEmission
    m_nCPInput = 0x1D0 # int32_t
    m_nCPOutput = 0x1D4 # int32_t

class C_OP_SetControlPointPositionToRandomActiveCP: # CParticleFunctionPreEmission
    m_nCP1 = 0x1D0 # int32_t
    m_nHeadLocationMin = 0x1D4 # int32_t
    m_nHeadLocationMax = 0x1D8 # int32_t
    m_flResetRate = 0x1E0 # CParticleCollectionFloatInput

class C_OP_SetControlPointPositionToTimeOfDayValue: # CParticleFunctionPreEmission
    m_nControlPointNumber = 0x1D0 # int32_t
    m_pszTimeOfDayParameter = 0x1D4 # char[128]
    m_vecDefaultValue = 0x254 # Vector

class C_OP_SetControlPointPositions: # CParticleFunctionPreEmission
    m_bUseWorldLocation = 0x1D0 # bool
    m_bOrient = 0x1D1 # bool
    m_bSetOnce = 0x1D2 # bool
    m_nCP1 = 0x1D4 # int32_t
    m_nCP2 = 0x1D8 # int32_t
    m_nCP3 = 0x1DC # int32_t
    m_nCP4 = 0x1E0 # int32_t
    m_vecCP1Pos = 0x1E4 # Vector
    m_vecCP2Pos = 0x1F0 # Vector
    m_vecCP3Pos = 0x1FC # Vector
    m_vecCP4Pos = 0x208 # Vector
    m_nHeadLocation = 0x214 # int32_t

class C_OP_SetControlPointRotation: # CParticleFunctionPreEmission
    m_vecRotAxis = 0x1D0 # CParticleCollectionVecInput
    m_flRotRate = 0x828 # CParticleCollectionFloatInput
    m_nCP = 0x980 # int32_t
    m_nLocalCP = 0x984 # int32_t

class C_OP_SetControlPointToCPVelocity: # CParticleFunctionPreEmission
    m_nCPInput = 0x1D0 # int32_t
    m_nCPOutputVel = 0x1D4 # int32_t
    m_bNormalize = 0x1D8 # bool
    m_nCPOutputMag = 0x1DC # int32_t
    m_nCPField = 0x1E0 # int32_t
    m_vecComparisonVelocity = 0x1E8 # CParticleCollectionVecInput

class C_OP_SetControlPointToCenter: # CParticleFunctionPreEmission
    m_nCP1 = 0x1D0 # int32_t
    m_vecCP1Pos = 0x1D4 # Vector
    m_nSetParent = 0x1E0 # ParticleParentSetMode_t

class C_OP_SetControlPointToHMD: # CParticleFunctionPreEmission
    m_nCP1 = 0x1D0 # int32_t
    m_vecCP1Pos = 0x1D4 # Vector
    m_bOrientToHMD = 0x1E0 # bool

class C_OP_SetControlPointToHand: # CParticleFunctionPreEmission
    m_nCP1 = 0x1D0 # int32_t
    m_nHand = 0x1D4 # int32_t
    m_vecCP1Pos = 0x1D8 # Vector
    m_bOrientToHand = 0x1E4 # bool

class C_OP_SetControlPointToImpactPoint: # CParticleFunctionPreEmission
    m_nCPOut = 0x1D0 # int32_t
    m_nCPIn = 0x1D4 # int32_t
    m_flUpdateRate = 0x1D8 # float
    m_flTraceLength = 0x1E0 # CParticleCollectionFloatInput
    m_flStartOffset = 0x338 # float
    m_flOffset = 0x33C # float
    m_vecTraceDir = 0x340 # Vector
    m_CollisionGroupName = 0x34C # char[128]
    m_nTraceSet = 0x3CC # ParticleTraceSet_t
    m_bSetToEndpoint = 0x3D0 # bool
    m_bTraceToClosestSurface = 0x3D1 # bool
    m_bIncludeWater = 0x3D2 # bool

class C_OP_SetControlPointToPlayer: # CParticleFunctionPreEmission
    m_nCP1 = 0x1D0 # int32_t
    m_vecCP1Pos = 0x1D4 # Vector
    m_bOrientToEyes = 0x1E0 # bool

class C_OP_SetControlPointToVectorExpression: # CParticleFunctionPreEmission
    m_nExpression = 0x1D0 # VectorExpressionType_t
    m_nOutputCP = 0x1D4 # int32_t
    m_vInput1 = 0x1D8 # CParticleCollectionVecInput
    m_vInput2 = 0x830 # CParticleCollectionVecInput
    m_bNormalizedOutput = 0xE88 # bool

class C_OP_SetControlPointToWaterSurface: # CParticleFunctionPreEmission
    m_nSourceCP = 0x1D0 # int32_t
    m_nDestCP = 0x1D4 # int32_t
    m_nFlowCP = 0x1D8 # int32_t
    m_nActiveCP = 0x1DC # int32_t
    m_nActiveCPField = 0x1E0 # int32_t
    m_flRetestRate = 0x1E8 # CParticleCollectionFloatInput
    m_bAdaptiveThreshold = 0x340 # bool

class C_OP_SetControlPointsToModelParticles: # CParticleFunctionOperator
    m_HitboxSetName = 0x1C0 # char[128]
    m_AttachmentName = 0x240 # char[128]
    m_nFirstControlPoint = 0x2C0 # int32_t
    m_nNumControlPoints = 0x2C4 # int32_t
    m_nFirstSourcePoint = 0x2C8 # int32_t
    m_bSkin = 0x2CC # bool
    m_bAttachment = 0x2CD # bool

class C_OP_SetControlPointsToParticle: # CParticleFunctionOperator
    m_nChildGroupID = 0x1C0 # int32_t
    m_nFirstControlPoint = 0x1C4 # int32_t
    m_nNumControlPoints = 0x1C8 # int32_t
    m_nFirstSourcePoint = 0x1CC # int32_t
    m_bSetOrientation = 0x1D0 # bool
    m_nOrientationMode = 0x1D4 # ParticleOrientationSetMode_t
    m_nSetParent = 0x1D8 # ParticleParentSetMode_t

class C_OP_SetFloat: # CParticleFunctionOperator
    m_InputValue = 0x1C0 # CPerParticleFloatInput
    m_nOutputField = 0x318 # ParticleAttributeIndex_t
    m_nSetMethod = 0x31C # ParticleSetMethod_t
    m_Lerp = 0x320 # CPerParticleFloatInput
    m_bUseNewCode = 0x478 # bool

class C_OP_SetFloatAttributeToVectorExpression: # CParticleFunctionOperator
    m_nExpression = 0x1C0 # VectorFloatExpressionType_t
    m_vInput1 = 0x1C8 # CPerParticleVecInput
    m_vInput2 = 0x820 # CPerParticleVecInput
    m_flOutputRemap = 0xE78 # CParticleRemapFloatInput
    m_nOutputField = 0xFD0 # ParticleAttributeIndex_t
    m_nSetMethod = 0xFD4 # ParticleSetMethod_t

class C_OP_SetFloatCollection: # CParticleFunctionOperator
    m_InputValue = 0x1C0 # CParticleCollectionFloatInput
    m_nOutputField = 0x318 # ParticleAttributeIndex_t
    m_nSetMethod = 0x31C # ParticleSetMethod_t
    m_Lerp = 0x320 # CParticleCollectionFloatInput

class C_OP_SetFromCPSnapshot: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nAttributeToRead = 0x1C4 # ParticleAttributeIndex_t
    m_nAttributeToWrite = 0x1C8 # ParticleAttributeIndex_t
    m_nLocalSpaceCP = 0x1CC # int32_t
    m_bRandom = 0x1D0 # bool
    m_bReverse = 0x1D1 # bool
    m_nRandomSeed = 0x1D4 # int32_t
    m_nSnapShotStartPoint = 0x1D8 # CParticleCollectionFloatInput
    m_nSnapShotIncrement = 0x330 # CParticleCollectionFloatInput
    m_flInterpolation = 0x488 # CPerParticleFloatInput
    m_bSubSample = 0x5E0 # bool
    m_bPrev = 0x5E1 # bool

class C_OP_SetGravityToCP: # CParticleFunctionPreEmission
    m_nCPInput = 0x1D0 # int32_t
    m_nCPOutput = 0x1D4 # int32_t
    m_flScale = 0x1D8 # CParticleCollectionFloatInput
    m_bSetOrientation = 0x330 # bool
    m_bSetZDown = 0x331 # bool

class C_OP_SetParentControlPointsToChildCP: # CParticleFunctionPreEmission
    m_nChildGroupID = 0x1D0 # int32_t
    m_nChildControlPoint = 0x1D4 # int32_t
    m_nNumControlPoints = 0x1D8 # int32_t
    m_nFirstSourcePoint = 0x1DC # int32_t
    m_bSetOrientation = 0x1E0 # bool

class C_OP_SetPerChildControlPoint: # CParticleFunctionOperator
    m_nChildGroupID = 0x1C0 # int32_t
    m_nFirstControlPoint = 0x1C4 # int32_t
    m_nNumControlPoints = 0x1C8 # int32_t
    m_nParticleIncrement = 0x1D0 # CParticleCollectionFloatInput
    m_nFirstSourcePoint = 0x328 # CParticleCollectionFloatInput
    m_bSetOrientation = 0x480 # bool
    m_nOrientationField = 0x484 # ParticleAttributeIndex_t
    m_bNumBasedOnParticleCount = 0x488 # bool

class C_OP_SetPerChildControlPointFromAttribute: # CParticleFunctionOperator
    m_nChildGroupID = 0x1C0 # int32_t
    m_nFirstControlPoint = 0x1C4 # int32_t
    m_nNumControlPoints = 0x1C8 # int32_t
    m_nParticleIncrement = 0x1CC # int32_t
    m_nFirstSourcePoint = 0x1D0 # int32_t
    m_bNumBasedOnParticleCount = 0x1D4 # bool
    m_nAttributeToRead = 0x1D8 # ParticleAttributeIndex_t
    m_nCPField = 0x1DC # int32_t

class C_OP_SetRandomControlPointPosition: # CParticleFunctionPreEmission
    m_bUseWorldLocation = 0x1D0 # bool
    m_bOrient = 0x1D1 # bool
    m_nCP1 = 0x1D4 # int32_t
    m_nHeadLocation = 0x1D8 # int32_t
    m_flReRandomRate = 0x1E0 # CParticleCollectionFloatInput
    m_vecCPMinPos = 0x338 # Vector
    m_vecCPMaxPos = 0x344 # Vector
    m_flInterpolation = 0x350 # CParticleCollectionFloatInput

class C_OP_SetSimulationRate: # CParticleFunctionPreEmission
    m_flSimulationScale = 0x1D0 # CParticleCollectionFloatInput

class C_OP_SetSingleControlPointPosition: # CParticleFunctionPreEmission
    m_bSetOnce = 0x1D0 # bool
    m_nCP1 = 0x1D4 # int32_t
    m_vecCP1Pos = 0x1D8 # CParticleCollectionVecInput
    m_transformInput = 0x830 # CParticleTransformInput

class C_OP_SetToCP: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_vecOffset = 0x1C4 # Vector
    m_bOffsetLocal = 0x1D0 # bool

class C_OP_SetVariable: # CParticleFunctionPreEmission
    m_variableReference = 0x1D0 # CParticleVariableRef
    m_transformInput = 0x210 # CParticleTransformInput
    m_positionOffset = 0x278 # Vector
    m_rotationOffset = 0x284 # QAngle
    m_vecInput = 0x290 # CParticleCollectionVecInput
    m_floatInput = 0x8E8 # CParticleCollectionFloatInput

class C_OP_SetVec: # CParticleFunctionOperator
    m_InputValue = 0x1C0 # CPerParticleVecInput
    m_nOutputField = 0x818 # ParticleAttributeIndex_t
    m_nSetMethod = 0x81C # ParticleSetMethod_t
    m_Lerp = 0x820 # CPerParticleFloatInput
    m_bNormalizedOutput = 0x978 # bool

class C_OP_SetVectorAttributeToVectorExpression: # CParticleFunctionOperator
    m_nExpression = 0x1C0 # VectorExpressionType_t
    m_vInput1 = 0x1C8 # CPerParticleVecInput
    m_vInput2 = 0x820 # CPerParticleVecInput
    m_nOutputField = 0xE78 # ParticleAttributeIndex_t
    m_nSetMethod = 0xE7C # ParticleSetMethod_t
    m_bNormalizedOutput = 0xE80 # bool

class C_OP_ShapeMatchingConstraint: # CParticleFunctionConstraint
    m_flShapeRestorationTime = 0x1C0 # float

class C_OP_SnapshotRigidSkinToBones: # CParticleFunctionOperator
    m_bTransformNormals = 0x1C0 # bool
    m_bTransformRadii = 0x1C1 # bool
    m_nControlPointNumber = 0x1C4 # int32_t

class C_OP_SnapshotSkinToBones: # CParticleFunctionOperator
    m_bTransformNormals = 0x1C0 # bool
    m_bTransformRadii = 0x1C1 # bool
    m_nControlPointNumber = 0x1C4 # int32_t
    m_flLifeTimeFadeStart = 0x1C8 # float
    m_flLifeTimeFadeEnd = 0x1CC # float
    m_flJumpThreshold = 0x1D0 # float
    m_flPrevPosScale = 0x1D4 # float

class C_OP_Spin: # CGeneralSpin

class C_OP_SpinUpdate: # CSpinUpdateBase

class C_OP_SpinYaw: # CGeneralSpin

class C_OP_SpringToVectorConstraint: # CParticleFunctionConstraint
    m_flRestLength = 0x1C0 # CPerParticleFloatInput
    m_flMinDistance = 0x318 # CPerParticleFloatInput
    m_flMaxDistance = 0x470 # CPerParticleFloatInput
    m_flRestingLength = 0x5C8 # CPerParticleFloatInput
    m_vecAnchorVector = 0x720 # CPerParticleVecInput

class C_OP_StopAfterCPDuration: # CParticleFunctionPreEmission
    m_flDuration = 0x1D0 # CParticleCollectionFloatInput
    m_bDestroyImmediately = 0x328 # bool
    m_bPlayEndCap = 0x329 # bool

class C_OP_TeleportBeam: # CParticleFunctionOperator
    m_nCPPosition = 0x1C0 # int32_t
    m_nCPVelocity = 0x1C4 # int32_t
    m_nCPMisc = 0x1C8 # int32_t
    m_nCPColor = 0x1CC # int32_t
    m_nCPInvalidColor = 0x1D0 # int32_t
    m_nCPExtraArcData = 0x1D4 # int32_t
    m_vGravity = 0x1D8 # Vector
    m_flArcMaxDuration = 0x1E4 # float
    m_flSegmentBreak = 0x1E8 # float
    m_flArcSpeed = 0x1EC # float
    m_flAlpha = 0x1F0 # float

class C_OP_TimeVaryingForce: # CParticleFunctionForce
    m_flStartLerpTime = 0x1D0 # float
    m_StartingForce = 0x1D4 # Vector
    m_flEndLerpTime = 0x1E0 # float
    m_EndingForce = 0x1E4 # Vector

class C_OP_TurbulenceForce: # CParticleFunctionForce
    m_flNoiseCoordScale0 = 0x1D0 # float
    m_flNoiseCoordScale1 = 0x1D4 # float
    m_flNoiseCoordScale2 = 0x1D8 # float
    m_flNoiseCoordScale3 = 0x1DC # float
    m_vecNoiseAmount0 = 0x1E0 # Vector
    m_vecNoiseAmount1 = 0x1EC # Vector
    m_vecNoiseAmount2 = 0x1F8 # Vector
    m_vecNoiseAmount3 = 0x204 # Vector

class C_OP_TwistAroundAxis: # CParticleFunctionForce
    m_fForceAmount = 0x1D0 # float
    m_TwistAxis = 0x1D4 # Vector
    m_bLocalSpace = 0x1E0 # bool
    m_nControlPointNumber = 0x1E4 # int32_t

class C_OP_UpdateLightSource: # CParticleFunctionOperator
    m_vColorTint = 0x1C0 # Color
    m_flBrightnessScale = 0x1C4 # float
    m_flRadiusScale = 0x1C8 # float
    m_flMinimumLightingRadius = 0x1CC # float
    m_flMaximumLightingRadius = 0x1D0 # float
    m_flPositionDampingConstant = 0x1D4 # float

class C_OP_VectorFieldSnapshot: # CParticleFunctionOperator
    m_nControlPointNumber = 0x1C0 # int32_t
    m_nAttributeToWrite = 0x1C4 # ParticleAttributeIndex_t
    m_nLocalSpaceCP = 0x1C8 # int32_t
    m_flInterpolation = 0x1D0 # CPerParticleFloatInput
    m_vecScale = 0x328 # CPerParticleVecInput
    m_flBoundaryDampening = 0x980 # float
    m_bSetVelocity = 0x984 # bool
    m_bLockToSurface = 0x985 # bool
    m_flGridSpacing = 0x988 # float

class C_OP_VectorNoise: # CParticleFunctionOperator
    m_nFieldOutput = 0x1C0 # ParticleAttributeIndex_t
    m_vecOutputMin = 0x1C4 # Vector
    m_vecOutputMax = 0x1D0 # Vector
    m_fl4NoiseScale = 0x1DC # float
    m_bAdditive = 0x1E0 # bool
    m_bOffset = 0x1E1 # bool
    m_flNoiseAnimationTimeScale = 0x1E4 # float

class C_OP_VelocityDecay: # CParticleFunctionOperator
    m_flMinVelocity = 0x1C0 # float

class C_OP_VelocityMatchingForce: # CParticleFunctionOperator
    m_flDirScale = 0x1C0 # float
    m_flSpdScale = 0x1C4 # float
    m_nCPBroadcast = 0x1C8 # int32_t

class C_OP_WindForce: # CParticleFunctionForce
    m_vForce = 0x1D0 # Vector

class C_OP_WorldCollideConstraint: # CParticleFunctionConstraint

class C_OP_WorldTraceConstraint: # CParticleFunctionConstraint
    m_nCP = 0x1C0 # int32_t
    m_vecCpOffset = 0x1C4 # Vector
    m_nCollisionMode = 0x1D0 # ParticleCollisionMode_t
    m_nCollisionModeMin = 0x1D4 # ParticleCollisionMode_t
    m_nTraceSet = 0x1D8 # ParticleTraceSet_t
    m_CollisionGroupName = 0x1DC # char[128]
    m_bWorldOnly = 0x25C # bool
    m_bBrushOnly = 0x25D # bool
    m_bIncludeWater = 0x25E # bool
    m_nIgnoreCP = 0x260 # int32_t
    m_flCpMovementTolerance = 0x264 # float
    m_flRetestRate = 0x268 # float
    m_flTraceTolerance = 0x26C # float
    m_flCollisionConfirmationSpeed = 0x270 # float
    m_nMaxTracesPerFrame = 0x274 # float
    m_flRadiusScale = 0x278 # CPerParticleFloatInput
    m_flBounceAmount = 0x3D0 # CPerParticleFloatInput
    m_flSlideAmount = 0x528 # CPerParticleFloatInput
    m_flRandomDirScale = 0x680 # CPerParticleFloatInput
    m_bDecayBounce = 0x7D8 # bool
    m_bKillonContact = 0x7D9 # bool
    m_flMinSpeed = 0x7DC # float
    m_bSetNormal = 0x7E0 # bool
    m_nStickOnCollisionField = 0x7E4 # ParticleAttributeIndex_t
    m_flStopSpeed = 0x7E8 # CPerParticleFloatInput
    m_nEntityStickDataField = 0x940 # ParticleAttributeIndex_t
    m_nEntityStickNormalField = 0x944 # ParticleAttributeIndex_t

class CollisionGroupContext_t:
    m_nCollisionGroupNumber = 0x0 # int32_t

class ControlPointReference_t:
    m_controlPointNameString = 0x0 # int32_t
    m_vOffsetFromControlPoint = 0x4 # Vector
    m_bOffsetInLocalSpace = 0x10 # bool

class FloatInputMaterialVariable_t:
    m_strVariable = 0x0 # CUtlString
    m_flInput = 0x8 # CParticleCollectionFloatInput

class IControlPointEditorData:

class IParticleCollection:

class IParticleEffect:

class IParticleSystemDefinition:

class MaterialVariable_t:
    m_strVariable = 0x0 # CUtlString
    m_nVariableField = 0x8 # ParticleAttributeIndex_t
    m_flScale = 0xC # float

class ModelReference_t:
    m_model = 0x0 # CStrongHandle<InfoForResourceTypeCModel>
    m_flRelativeProbabilityOfSpawn = 0x8 # float

class PARTICLE_EHANDLE__:
    unused = 0x0 # int32_t

class PARTICLE_WORLD_HANDLE__:
    unused = 0x0 # int32_t

class ParticleAttributeIndex_t:
    m_Value = 0x0 # int32_t

class ParticleChildrenInfo_t:
    m_ChildRef = 0x0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flDelay = 0x8 # float
    m_bEndCap = 0xC # bool
    m_bDisableChild = 0xD # bool
    m_nDetailLevel = 0x10 # ParticleDetailLevel_t

class ParticleControlPointConfiguration_t:
    m_name = 0x0 # CUtlString
    m_drivers = 0x8 # CUtlVector<ParticleControlPointDriver_t>
    m_previewState = 0x20 # ParticlePreviewState_t

class ParticleControlPointDriver_t:
    m_iControlPoint = 0x0 # int32_t
    m_iAttachType = 0x4 # ParticleAttachment_t
    m_attachmentName = 0x8 # CUtlString
    m_vecOffset = 0x10 # Vector
    m_angOffset = 0x1C # QAngle
    m_entityName = 0x28 # CUtlString

class ParticleNamedValueConfiguration_t:
    m_ConfigName = 0x0 # CUtlString
    m_ConfigValue = 0x8 # KeyValues3
    m_iAttachType = 0x18 # ParticleAttachment_t
    m_BoundEntityPath = 0x20 # CUtlString
    m_strEntityScope = 0x28 # CUtlString
    m_strAttachmentName = 0x30 # CUtlString

class ParticleNamedValueSource_t:
    m_Name = 0x0 # CUtlString
    m_IsPublic = 0x8 # bool
    m_ValueType = 0xC # PulseValueType_t
    m_DefaultConfig = 0x10 # ParticleNamedValueConfiguration_t
    m_NamedConfigs = 0x48 # CUtlVector<ParticleNamedValueConfiguration_t>

class ParticlePreviewBodyGroup_t:
    m_bodyGroupName = 0x0 # CUtlString
    m_nValue = 0x8 # int32_t

class ParticlePreviewState_t:
    m_previewModel = 0x0 # CUtlString
    m_nModSpecificData = 0x8 # uint32_t
    m_groundType = 0xC # PetGroundType_t
    m_sequenceName = 0x10 # CUtlString
    m_nFireParticleOnSequenceFrame = 0x18 # int32_t
    m_hitboxSetName = 0x20 # CUtlString
    m_materialGroupName = 0x28 # CUtlString
    m_vecBodyGroups = 0x30 # CUtlVector<ParticlePreviewBodyGroup_t>
    m_flPlaybackSpeed = 0x48 # float
    m_flParticleSimulationRate = 0x4C # float
    m_bShouldDrawHitboxes = 0x50 # bool
    m_bShouldDrawAttachments = 0x51 # bool
    m_bShouldDrawAttachmentNames = 0x52 # bool
    m_bShouldDrawControlPointAxes = 0x53 # bool
    m_bAnimationNonLooping = 0x54 # bool
    m_vecPreviewGravity = 0x58 # Vector

class PointDefinitionWithTimeValues_t: # PointDefinition_t
    m_flTimeDuration = 0x14 # float

class PointDefinition_t:
    m_nControlPoint = 0x0 # int32_t
    m_bLocalCoords = 0x4 # bool
    m_vOffset = 0x8 # Vector

class RenderProjectedMaterial_t:
    m_hMaterial = 0x0 # CStrongHandle<InfoForResourceTypeIMaterial2>

class SequenceWeightedList_t:
    m_nSequence = 0x0 # int32_t
    m_flRelativeWeight = 0x4 # float

class TextureControls_t:
    m_flFinalTextureScaleU = 0x0 # CParticleCollectionRendererFloatInput
    m_flFinalTextureScaleV = 0x158 # CParticleCollectionRendererFloatInput
    m_flFinalTextureOffsetU = 0x2B0 # CParticleCollectionRendererFloatInput
    m_flFinalTextureOffsetV = 0x408 # CParticleCollectionRendererFloatInput
    m_flFinalTextureUVRotation = 0x560 # CParticleCollectionRendererFloatInput
    m_flZoomScale = 0x6B8 # CParticleCollectionRendererFloatInput
    m_flDistortion = 0x810 # CParticleCollectionRendererFloatInput
    m_bRandomizeOffsets = 0x968 # bool
    m_bClampUVs = 0x969 # bool
    m_nPerParticleBlend = 0x96C # SpriteCardPerParticleScale_t
    m_nPerParticleScale = 0x970 # SpriteCardPerParticleScale_t
    m_nPerParticleOffsetU = 0x974 # SpriteCardPerParticleScale_t
    m_nPerParticleOffsetV = 0x978 # SpriteCardPerParticleScale_t
    m_nPerParticleRotation = 0x97C # SpriteCardPerParticleScale_t
    m_nPerParticleZoom = 0x980 # SpriteCardPerParticleScale_t
    m_nPerParticleDistortion = 0x984 # SpriteCardPerParticleScale_t

class TextureGroup_t:
    m_bEnabled = 0x0 # bool
    m_bReplaceTextureWithGradient = 0x1 # bool
    m_hTexture = 0x8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_Gradient = 0x10 # CColorGradient
    m_nTextureType = 0x28 # SpriteCardTextureType_t
    m_nTextureChannels = 0x2C # SpriteCardTextureChannel_t
    m_nTextureBlendMode = 0x30 # ParticleTextureLayerBlendType_t
    m_flTextureBlend = 0x38 # CParticleCollectionRendererFloatInput
    m_TextureControls = 0x190 # TextureControls_t

class VecInputMaterialVariable_t:
    m_strVariable = 0x0 # CUtlString
    m_vecInput = 0x8 # CParticleCollectionVecInput
