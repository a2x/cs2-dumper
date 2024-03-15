/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Fri, 15 Mar 2024 16:09:38 +0000
 */

#pragma once

#include <cstddef>

namespace CBaseRendererSource2 { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1F8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flAlphaScale = 0x348; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flRollScale = 0x498; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nAlpha2Field = 0x5E8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecColorScale = 0x5F0; // CParticleCollectionRendererVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0xC20; // ParticleColorBlendType_t
    constexpr std::ptrdiff_t m_nShaderType = 0xC24; // SpriteCardShaderType_t
    constexpr std::ptrdiff_t m_strShaderOverride = 0xC28; // CUtlString
    constexpr std::ptrdiff_t m_flCenterXOffset = 0xC30; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flCenterYOffset = 0xD80; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flBumpStrength = 0xED0; // float
    constexpr std::ptrdiff_t m_nCropTextureOverride = 0xED4; // ParticleSequenceCropOverride_t
    constexpr std::ptrdiff_t m_vecTexturesInput = 0xED8; // CUtlVector<TextureGroup_t>
    constexpr std::ptrdiff_t m_flAnimationRate = 0xEF0; // float
    constexpr std::ptrdiff_t m_nAnimationType = 0xEF4; // AnimationType_t
    constexpr std::ptrdiff_t m_bAnimateInFPS = 0xEF8; // bool
    constexpr std::ptrdiff_t m_flSelfIllumAmount = 0xF00; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flDiffuseAmount = 0x1050; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flDiffuseClamp = 0x11A0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nLightingControlPoint = 0x12F0; // int32_t
    constexpr std::ptrdiff_t m_nSelfIllumPerParticle = 0x12F4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nOutputBlendMode = 0x12F8; // ParticleOutputBlendMode_t
    constexpr std::ptrdiff_t m_bGammaCorrectVertexColors = 0x12FC; // bool
    constexpr std::ptrdiff_t m_bSaturateColorPreAlphaBlend = 0x12FD; // bool
    constexpr std::ptrdiff_t m_flAddSelfAmount = 0x1300; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flDesaturation = 0x1450; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flOverbrightFactor = 0x15A0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x16F0; // int32_t
    constexpr std::ptrdiff_t m_nFogType = 0x16F4; // ParticleFogType_t
    constexpr std::ptrdiff_t m_flFogAmount = 0x16F8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_bTintByFOW = 0x1848; // bool
    constexpr std::ptrdiff_t m_bTintByGlobalLight = 0x1849; // bool
    constexpr std::ptrdiff_t m_nPerParticleAlphaReference = 0x184C; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleAlphaRefWindow = 0x1850; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nAlphaReferenceType = 0x1854; // ParticleAlphaReferenceType_t
    constexpr std::ptrdiff_t m_flAlphaReferenceSoftness = 0x1858; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToZero = 0x19A8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToOne = 0x1AF8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_bRefract = 0x1C48; // bool
    constexpr std::ptrdiff_t m_bRefractSolid = 0x1C49; // bool
    constexpr std::ptrdiff_t m_flRefractAmount = 0x1C50; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nRefractBlurRadius = 0x1DA0; // int32_t
    constexpr std::ptrdiff_t m_nRefractBlurType = 0x1DA4; // BlurFilterType_t
    constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x1DA8; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x1DA9; // bool
    constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x1DAA; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x1DAB; // bool
    constexpr std::ptrdiff_t m_stencilTestID = 0x1DAC; // char[128]
    constexpr std::ptrdiff_t m_bStencilTestExclude = 0x1E2C; // bool
    constexpr std::ptrdiff_t m_stencilWriteID = 0x1E2D; // char[128]
    constexpr std::ptrdiff_t m_bWriteStencilOnDepthPass = 0x1EAD; // bool
    constexpr std::ptrdiff_t m_bWriteStencilOnDepthFail = 0x1EAE; // bool
    constexpr std::ptrdiff_t m_bReverseZBuffering = 0x1EAF; // bool
    constexpr std::ptrdiff_t m_bDisableZBuffering = 0x1EB0; // bool
    constexpr std::ptrdiff_t m_nFeatheringMode = 0x1EB4; // ParticleDepthFeatheringMode_t
    constexpr std::ptrdiff_t m_flFeatheringMinDist = 0x1EB8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flFeatheringMaxDist = 0x2008; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flFeatheringFilter = 0x2158; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flDepthBias = 0x22A8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nSortMethod = 0x23F8; // ParticleSortingChoiceList_t
    constexpr std::ptrdiff_t m_bBlendFramesSeq0 = 0x23FC; // bool
    constexpr std::ptrdiff_t m_bMaxLuminanceBlendingSequence0 = 0x23FD; // bool
}

namespace CBaseTrailRenderer { // CBaseRendererSource2
    constexpr std::ptrdiff_t m_nOrientationType = 0x2638; // ParticleOrientationChoiceList_t
    constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x263C; // int32_t
    constexpr std::ptrdiff_t m_flMinSize = 0x2640; // float
    constexpr std::ptrdiff_t m_flMaxSize = 0x2644; // float
    constexpr std::ptrdiff_t m_flStartFadeSize = 0x2648; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flEndFadeSize = 0x2798; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_bClampV = 0x28E8; // bool
}

namespace CGeneralRandomRotation { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flDegrees = 0x1B8; // float
    constexpr std::ptrdiff_t m_flDegreesMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flDegreesMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flRotationRandExponent = 0x1C4; // float
    constexpr std::ptrdiff_t m_bRandomlyFlipDirection = 0x1C8; // bool
}

namespace CGeneralSpin { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nSpinRateDegrees = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nSpinRateMinDegrees = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_fSpinRateStopTime = 0x1BC; // float
}

namespace CNewParticleEffect { // IParticleEffect
    constexpr std::ptrdiff_t m_pNext = 0x10; // CNewParticleEffect*
    constexpr std::ptrdiff_t m_pPrev = 0x18; // CNewParticleEffect*
    constexpr std::ptrdiff_t m_pParticles = 0x20; // IParticleCollection*
    constexpr std::ptrdiff_t m_pDebugName = 0x28; // char*
    constexpr std::ptrdiff_t m_bDontRemove = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bRemove = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNeedsBBoxUpdate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsFirstFrame = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bAutoUpdateBBox = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bAllocated = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bSimulate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bShouldPerformCullCheck = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bForceNoDraw = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bShouldSave = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bDisableAggregation = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bShouldCheckFoW = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_vSortOrigin = 0x40; // Vector
    constexpr std::ptrdiff_t m_flScale = 0x4C; // float
    constexpr std::ptrdiff_t m_hOwner = 0x50; // PARTICLE_EHANDLE__*
    constexpr std::ptrdiff_t m_pOwningParticleProperty = 0x58; // CParticleProperty*
    constexpr std::ptrdiff_t m_flFreezeTransitionStart = 0x70; // float
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x74; // float
    constexpr std::ptrdiff_t m_flFreezeTransitionOverride = 0x78; // float
    constexpr std::ptrdiff_t m_bFreezeTransitionActive = 0x7C; // bool
    constexpr std::ptrdiff_t m_bFreezeTargetState = 0x7D; // bool
    constexpr std::ptrdiff_t m_bCanFreeze = 0x7E; // bool
    constexpr std::ptrdiff_t m_LastMin = 0x80; // Vector
    constexpr std::ptrdiff_t m_LastMax = 0x8C; // Vector
    constexpr std::ptrdiff_t m_nSplitScreenUser = 0x98; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_vecAggregationCenter = 0x9C; // Vector
    constexpr std::ptrdiff_t m_RefCount = 0xC0; // int32_t
}

namespace CParticleCollectionBindingInstance { // CBasePulseGraphInstance
}

namespace CParticleCollectionFloatInput { // CParticleFloatInput
}

namespace CParticleCollectionRendererFloatInput { // CParticleCollectionFloatInput
}

namespace CParticleCollectionRendererVecInput { // CParticleCollectionVecInput
}

namespace CParticleCollectionVecInput { // CParticleVecInput
}

namespace CParticleFloatInput { // CParticleInput
    constexpr std::ptrdiff_t m_nType = 0xC; // ParticleFloatType_t
    constexpr std::ptrdiff_t m_nMapType = 0x10; // ParticleFloatMapType_t
    constexpr std::ptrdiff_t m_flLiteralValue = 0x14; // float
    constexpr std::ptrdiff_t m_NamedValue = 0x18; // CParticleNamedValueRef
    constexpr std::ptrdiff_t m_nControlPoint = 0x58; // int32_t
    constexpr std::ptrdiff_t m_nScalarAttribute = 0x5C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVectorAttribute = 0x60; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVectorComponent = 0x64; // int32_t
    constexpr std::ptrdiff_t m_flRandomMin = 0x68; // float
    constexpr std::ptrdiff_t m_flRandomMax = 0x6C; // float
    constexpr std::ptrdiff_t m_bHasRandomSignFlip = 0x70; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x74; // int32_t
    constexpr std::ptrdiff_t m_nRandomMode = 0x78; // ParticleFloatRandomMode_t
    constexpr std::ptrdiff_t m_flLOD0 = 0x80; // float
    constexpr std::ptrdiff_t m_flLOD1 = 0x84; // float
    constexpr std::ptrdiff_t m_flLOD2 = 0x88; // float
    constexpr std::ptrdiff_t m_flLOD3 = 0x8C; // float
    constexpr std::ptrdiff_t m_nNoiseInputVectorAttribute = 0x90; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flNoiseOutputMin = 0x94; // float
    constexpr std::ptrdiff_t m_flNoiseOutputMax = 0x98; // float
    constexpr std::ptrdiff_t m_flNoiseScale = 0x9C; // float
    constexpr std::ptrdiff_t m_vecNoiseOffsetRate = 0xA0; // Vector
    constexpr std::ptrdiff_t m_flNoiseOffset = 0xAC; // float
    constexpr std::ptrdiff_t m_nNoiseOctaves = 0xB0; // int32_t
    constexpr std::ptrdiff_t m_nNoiseTurbulence = 0xB4; // PFNoiseTurbulence_t
    constexpr std::ptrdiff_t m_nNoiseType = 0xB8; // PFNoiseType_t
    constexpr std::ptrdiff_t m_nNoiseModifier = 0xBC; // PFNoiseModifier_t
    constexpr std::ptrdiff_t m_flNoiseTurbulenceScale = 0xC0; // float
    constexpr std::ptrdiff_t m_flNoiseTurbulenceMix = 0xC4; // float
    constexpr std::ptrdiff_t m_flNoiseImgPreviewScale = 0xC8; // float
    constexpr std::ptrdiff_t m_bNoiseImgPreviewLive = 0xCC; // bool
    constexpr std::ptrdiff_t m_flNoCameraFallback = 0xD8; // float
    constexpr std::ptrdiff_t m_bUseBoundsCenter = 0xDC; // bool
    constexpr std::ptrdiff_t m_nInputMode = 0xE0; // ParticleFloatInputMode_t
    constexpr std::ptrdiff_t m_flMultFactor = 0xE4; // float
    constexpr std::ptrdiff_t m_flInput0 = 0xE8; // float
    constexpr std::ptrdiff_t m_flInput1 = 0xEC; // float
    constexpr std::ptrdiff_t m_flOutput0 = 0xF0; // float
    constexpr std::ptrdiff_t m_flOutput1 = 0xF4; // float
    constexpr std::ptrdiff_t m_flNotchedRangeMin = 0xF8; // float
    constexpr std::ptrdiff_t m_flNotchedRangeMax = 0xFC; // float
    constexpr std::ptrdiff_t m_flNotchedOutputOutside = 0x100; // float
    constexpr std::ptrdiff_t m_flNotchedOutputInside = 0x104; // float
    constexpr std::ptrdiff_t m_nBiasType = 0x108; // ParticleFloatBiasType_t
    constexpr std::ptrdiff_t m_flBiasParameter = 0x10C; // float
    constexpr std::ptrdiff_t m_Curve = 0x110; // CPiecewiseCurve
}

namespace CParticleFunction {
    constexpr std::ptrdiff_t m_flOpStrength = 0x8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nOpEndCapState = 0x158; // ParticleEndcapMode_t
    constexpr std::ptrdiff_t m_flOpStartFadeInTime = 0x15C; // float
    constexpr std::ptrdiff_t m_flOpEndFadeInTime = 0x160; // float
    constexpr std::ptrdiff_t m_flOpStartFadeOutTime = 0x164; // float
    constexpr std::ptrdiff_t m_flOpEndFadeOutTime = 0x168; // float
    constexpr std::ptrdiff_t m_flOpFadeOscillatePeriod = 0x16C; // float
    constexpr std::ptrdiff_t m_bNormalizeToStopTime = 0x170; // bool
    constexpr std::ptrdiff_t m_flOpTimeOffsetMin = 0x174; // float
    constexpr std::ptrdiff_t m_flOpTimeOffsetMax = 0x178; // float
    constexpr std::ptrdiff_t m_nOpTimeOffsetSeed = 0x17C; // int32_t
    constexpr std::ptrdiff_t m_nOpTimeScaleSeed = 0x180; // int32_t
    constexpr std::ptrdiff_t m_flOpTimeScaleMin = 0x184; // float
    constexpr std::ptrdiff_t m_flOpTimeScaleMax = 0x188; // float
    constexpr std::ptrdiff_t m_bDisableOperator = 0x18E; // bool
    constexpr std::ptrdiff_t m_Notes = 0x190; // CUtlString
}

namespace CParticleFunctionConstraint { // CParticleFunction
}

namespace CParticleFunctionEmitter { // CParticleFunction
    constexpr std::ptrdiff_t m_nEmitterIndex = 0x1B0; // int32_t
}

namespace CParticleFunctionForce { // CParticleFunction
}

namespace CParticleFunctionInitializer { // CParticleFunction
    constexpr std::ptrdiff_t m_nAssociatedEmitterIndex = 0x1B0; // int32_t
}

namespace CParticleFunctionOperator { // CParticleFunction
}

namespace CParticleFunctionPreEmission { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_bRunOnce = 0x1B0; // bool
}

namespace CParticleFunctionRenderer { // CParticleFunction
    constexpr std::ptrdiff_t VisibilityInputs = 0x1B0; // CParticleVisibilityInputs
    constexpr std::ptrdiff_t m_bCannotBeRefracted = 0x1F4; // bool
    constexpr std::ptrdiff_t m_bSkipRenderingOnMobile = 0x1F5; // bool
}

namespace CParticleInput {
}

namespace CParticleModelInput { // CParticleInput
    constexpr std::ptrdiff_t m_nType = 0xC; // ParticleModelType_t
    constexpr std::ptrdiff_t m_NamedValue = 0x10; // CParticleNamedValueRef
    constexpr std::ptrdiff_t m_nControlPoint = 0x50; // int32_t
}

namespace CParticleProperty {
}

namespace CParticleRemapFloatInput { // CParticleFloatInput
}

namespace CParticleSystemDefinition { // IParticleSystemDefinition
    constexpr std::ptrdiff_t m_nBehaviorVersion = 0x8; // int32_t
    constexpr std::ptrdiff_t m_PreEmissionOperators = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
    constexpr std::ptrdiff_t m_Emitters = 0x28; // CUtlVector<CParticleFunctionEmitter*>
    constexpr std::ptrdiff_t m_Initializers = 0x40; // CUtlVector<CParticleFunctionInitializer*>
    constexpr std::ptrdiff_t m_Operators = 0x58; // CUtlVector<CParticleFunctionOperator*>
    constexpr std::ptrdiff_t m_ForceGenerators = 0x70; // CUtlVector<CParticleFunctionForce*>
    constexpr std::ptrdiff_t m_Constraints = 0x88; // CUtlVector<CParticleFunctionConstraint*>
    constexpr std::ptrdiff_t m_Renderers = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
    constexpr std::ptrdiff_t m_Children = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
    constexpr std::ptrdiff_t m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32_t
    constexpr std::ptrdiff_t m_nInitialParticles = 0x210; // int32_t
    constexpr std::ptrdiff_t m_nMaxParticles = 0x214; // int32_t
    constexpr std::ptrdiff_t m_nGroupID = 0x218; // int32_t
    constexpr std::ptrdiff_t m_BoundingBoxMin = 0x21C; // Vector
    constexpr std::ptrdiff_t m_BoundingBoxMax = 0x228; // Vector
    constexpr std::ptrdiff_t m_flDepthSortBias = 0x234; // float
    constexpr std::ptrdiff_t m_nSortOverridePositionCP = 0x238; // int32_t
    constexpr std::ptrdiff_t m_bInfiniteBounds = 0x23C; // bool
    constexpr std::ptrdiff_t m_bEnableNamedValues = 0x23D; // bool
    constexpr std::ptrdiff_t m_NamedValueDomain = 0x240; // CUtlString
    constexpr std::ptrdiff_t m_NamedValueLocals = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
    constexpr std::ptrdiff_t m_ConstantColor = 0x260; // Color
    constexpr std::ptrdiff_t m_ConstantNormal = 0x264; // Vector
    constexpr std::ptrdiff_t m_flConstantRadius = 0x270; // float
    constexpr std::ptrdiff_t m_flConstantRotation = 0x274; // float
    constexpr std::ptrdiff_t m_flConstantRotationSpeed = 0x278; // float
    constexpr std::ptrdiff_t m_flConstantLifespan = 0x27C; // float
    constexpr std::ptrdiff_t m_nConstantSequenceNumber = 0x280; // int32_t
    constexpr std::ptrdiff_t m_nConstantSequenceNumber1 = 0x284; // int32_t
    constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x288; // int32_t
    constexpr std::ptrdiff_t m_hSnapshot = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    constexpr std::ptrdiff_t m_pszCullReplacementName = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flCullRadius = 0x2A0; // float
    constexpr std::ptrdiff_t m_flCullFillCost = 0x2A4; // float
    constexpr std::ptrdiff_t m_nCullControlPoint = 0x2A8; // int32_t
    constexpr std::ptrdiff_t m_hFallback = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nFallbackMaxCount = 0x2B8; // int32_t
    constexpr std::ptrdiff_t m_hLowViolenceDef = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_hReferenceReplacement = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flPreSimulationTime = 0x2D0; // float
    constexpr std::ptrdiff_t m_flStopSimulationAfterTime = 0x2D4; // float
    constexpr std::ptrdiff_t m_flMaximumTimeStep = 0x2D8; // float
    constexpr std::ptrdiff_t m_flMaximumSimTime = 0x2DC; // float
    constexpr std::ptrdiff_t m_flMinimumSimTime = 0x2E0; // float
    constexpr std::ptrdiff_t m_flMinimumTimeStep = 0x2E4; // float
    constexpr std::ptrdiff_t m_nMinimumFrames = 0x2E8; // int32_t
    constexpr std::ptrdiff_t m_nMinCPULevel = 0x2EC; // int32_t
    constexpr std::ptrdiff_t m_nMinGPULevel = 0x2F0; // int32_t
    constexpr std::ptrdiff_t m_flNoDrawTimeToGoToSleep = 0x2F4; // float
    constexpr std::ptrdiff_t m_flMaxDrawDistance = 0x2F8; // float
    constexpr std::ptrdiff_t m_flStartFadeDistance = 0x2FC; // float
    constexpr std::ptrdiff_t m_flMaxCreationDistance = 0x300; // float
    constexpr std::ptrdiff_t m_nAggregationMinAvailableParticles = 0x304; // int32_t
    constexpr std::ptrdiff_t m_flAggregateRadius = 0x308; // float
    constexpr std::ptrdiff_t m_bShouldBatch = 0x30C; // bool
    constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
    constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToSnapshot = 0x30E; // bool
    constexpr std::ptrdiff_t m_nViewModelEffect = 0x310; // InheritableBoolType_t
    constexpr std::ptrdiff_t m_bScreenSpaceEffect = 0x314; // bool
    constexpr std::ptrdiff_t m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nSkipRenderControlPoint = 0x320; // int32_t
    constexpr std::ptrdiff_t m_nAllowRenderControlPoint = 0x324; // int32_t
    constexpr std::ptrdiff_t m_bShouldSort = 0x328; // bool
    constexpr std::ptrdiff_t m_controlPointConfigurations = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
}

namespace CParticleTransformInput { // CParticleInput
    constexpr std::ptrdiff_t m_nType = 0xC; // ParticleTransformType_t
    constexpr std::ptrdiff_t m_NamedValue = 0x10; // CParticleNamedValueRef
    constexpr std::ptrdiff_t m_bFollowNamedValue = 0x50; // bool
    constexpr std::ptrdiff_t m_bSupportsDisabled = 0x51; // bool
    constexpr std::ptrdiff_t m_bUseOrientation = 0x52; // bool
    constexpr std::ptrdiff_t m_nControlPoint = 0x54; // int32_t
    constexpr std::ptrdiff_t m_nControlPointRangeMax = 0x58; // int32_t
    constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0x5C; // float
}

namespace CParticleVariableRef {
    constexpr std::ptrdiff_t m_variableName = 0x0; // CKV3MemberNameWithStorage
    constexpr std::ptrdiff_t m_variableType = 0x38; // PulseValueType_t
}

namespace CParticleVecInput { // CParticleInput
    constexpr std::ptrdiff_t m_nType = 0xC; // ParticleVecType_t
    constexpr std::ptrdiff_t m_vLiteralValue = 0x10; // Vector
    constexpr std::ptrdiff_t m_LiteralColor = 0x1C; // Color
    constexpr std::ptrdiff_t m_NamedValue = 0x20; // CParticleNamedValueRef
    constexpr std::ptrdiff_t m_bFollowNamedValue = 0x60; // bool
    constexpr std::ptrdiff_t m_nVectorAttribute = 0x64; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vVectorAttributeScale = 0x68; // Vector
    constexpr std::ptrdiff_t m_nControlPoint = 0x74; // int32_t
    constexpr std::ptrdiff_t m_nDeltaControlPoint = 0x78; // int32_t
    constexpr std::ptrdiff_t m_vCPValueScale = 0x7C; // Vector
    constexpr std::ptrdiff_t m_vCPRelativePosition = 0x88; // Vector
    constexpr std::ptrdiff_t m_vCPRelativeDir = 0x94; // Vector
    constexpr std::ptrdiff_t m_FloatComponentX = 0xA0; // CParticleFloatInput
    constexpr std::ptrdiff_t m_FloatComponentY = 0x1F0; // CParticleFloatInput
    constexpr std::ptrdiff_t m_FloatComponentZ = 0x340; // CParticleFloatInput
    constexpr std::ptrdiff_t m_FloatInterp = 0x490; // CParticleFloatInput
    constexpr std::ptrdiff_t m_flInterpInput0 = 0x5E0; // float
    constexpr std::ptrdiff_t m_flInterpInput1 = 0x5E4; // float
    constexpr std::ptrdiff_t m_vInterpOutput0 = 0x5E8; // Vector
    constexpr std::ptrdiff_t m_vInterpOutput1 = 0x5F4; // Vector
    constexpr std::ptrdiff_t m_Gradient = 0x600; // CColorGradient
    constexpr std::ptrdiff_t m_vRandomMin = 0x618; // Vector
    constexpr std::ptrdiff_t m_vRandomMax = 0x624; // Vector
}

namespace CParticleVisibilityInputs {
    constexpr std::ptrdiff_t m_flCameraBias = 0x0; // float
    constexpr std::ptrdiff_t m_nCPin = 0x4; // int32_t
    constexpr std::ptrdiff_t m_flProxyRadius = 0x8; // float
    constexpr std::ptrdiff_t m_flInputMin = 0xC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x10; // float
    constexpr std::ptrdiff_t m_flNoPixelVisibilityFallback = 0x14; // float
    constexpr std::ptrdiff_t m_flDistanceInputMin = 0x18; // float
    constexpr std::ptrdiff_t m_flDistanceInputMax = 0x1C; // float
    constexpr std::ptrdiff_t m_flDotInputMin = 0x20; // float
    constexpr std::ptrdiff_t m_flDotInputMax = 0x24; // float
    constexpr std::ptrdiff_t m_bDotCPAngles = 0x28; // bool
    constexpr std::ptrdiff_t m_bDotCameraAngles = 0x29; // bool
    constexpr std::ptrdiff_t m_flAlphaScaleMin = 0x2C; // float
    constexpr std::ptrdiff_t m_flAlphaScaleMax = 0x30; // float
    constexpr std::ptrdiff_t m_flRadiusScaleMin = 0x34; // float
    constexpr std::ptrdiff_t m_flRadiusScaleMax = 0x38; // float
    constexpr std::ptrdiff_t m_flRadiusScaleFOVBase = 0x3C; // float
    constexpr std::ptrdiff_t m_bRightEye = 0x40; // bool
}

namespace CPathParameters {
    constexpr std::ptrdiff_t m_nStartControlPointNumber = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x4; // int32_t
    constexpr std::ptrdiff_t m_nBulgeControl = 0x8; // int32_t
    constexpr std::ptrdiff_t m_flBulge = 0xC; // float
    constexpr std::ptrdiff_t m_flMidPoint = 0x10; // float
    constexpr std::ptrdiff_t m_vStartPointOffset = 0x14; // Vector
    constexpr std::ptrdiff_t m_vMidPointOffset = 0x20; // Vector
    constexpr std::ptrdiff_t m_vEndOffset = 0x2C; // Vector
}

namespace CPerParticleFloatInput { // CParticleFloatInput
}

namespace CPerParticleVecInput { // CParticleVecInput
}

namespace CRandomNumberGeneratorParameters {
    constexpr std::ptrdiff_t m_bDistributeEvenly = 0x0; // bool
    constexpr std::ptrdiff_t m_nSeed = 0x4; // int32_t
}

namespace CSpinUpdateBase { // CParticleFunctionOperator
}

namespace C_INIT_AddVectorToVector { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecScale = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldInput = 0x1C4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vOffsetMin = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_vOffsetMax = 0x1D4; // Vector
    constexpr std::ptrdiff_t m_randomnessParameters = 0x1E0; // CRandomNumberGeneratorParameters
}

namespace C_INIT_AgeNoise { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_bAbsVal = 0x1B4; // bool
    constexpr std::ptrdiff_t m_bAbsValInv = 0x1B5; // bool
    constexpr std::ptrdiff_t m_flOffset = 0x1B8; // float
    constexpr std::ptrdiff_t m_flAgeMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flAgeMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flNoiseScale = 0x1C4; // float
    constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1C8; // float
    constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1CC; // Vector
}

namespace C_INIT_ChaoticAttractor { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flAParm = 0x1B4; // float
    constexpr std::ptrdiff_t m_flBParm = 0x1B8; // float
    constexpr std::ptrdiff_t m_flCParm = 0x1BC; // float
    constexpr std::ptrdiff_t m_flDParm = 0x1C0; // float
    constexpr std::ptrdiff_t m_flScale = 0x1C4; // float
    constexpr std::ptrdiff_t m_flSpeedMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flSpeedMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_nBaseCP = 0x1D0; // int32_t
    constexpr std::ptrdiff_t m_bUniformSpeed = 0x1D4; // bool
}

namespace C_INIT_ColorLitPerParticle { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_ColorMin = 0x1CC; // Color
    constexpr std::ptrdiff_t m_ColorMax = 0x1D0; // Color
    constexpr std::ptrdiff_t m_TintMin = 0x1D4; // Color
    constexpr std::ptrdiff_t m_TintMax = 0x1D8; // Color
    constexpr std::ptrdiff_t m_flTintPerc = 0x1DC; // float
    constexpr std::ptrdiff_t m_nTintBlendMode = 0x1E0; // ParticleColorBlendMode_t
    constexpr std::ptrdiff_t m_flLightAmplification = 0x1E4; // float
}

namespace C_INIT_CreateAlongPath { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_fMaxDistance = 0x1B4; // float
    constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
    constexpr std::ptrdiff_t m_bUseRandomCPs = 0x200; // bool
    constexpr std::ptrdiff_t m_vEndOffset = 0x204; // Vector
    constexpr std::ptrdiff_t m_bSaveOffset = 0x210; // bool
}

namespace C_INIT_CreateFromCPs { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nIncrement = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nMinCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nMaxCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nDynamicCPCount = 0x1C0; // CParticleCollectionFloatInput
}

namespace C_INIT_CreateFromParentParticles { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flVelocityScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_flIncrement = 0x1B8; // float
    constexpr std::ptrdiff_t m_bRandomDistribution = 0x1BC; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bSubFrame = 0x1C4; // bool
}

namespace C_INIT_CreateFromPlaneCache { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecOffsetMin = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecOffsetMax = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_bUseNormal = 0x1CD; // bool
}

namespace C_INIT_CreateInEpitrochoid { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nComponent1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nComponent2 = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flParticleDensity = 0x220; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOffset = 0x370; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRadius1 = 0x4C0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRadius2 = 0x610; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bUseCount = 0x760; // bool
    constexpr std::ptrdiff_t m_bUseLocalCoords = 0x761; // bool
    constexpr std::ptrdiff_t m_bOffsetExistingPos = 0x762; // bool
}

namespace C_INIT_CreateOnGrid { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nXCount = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nYCount = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nZCount = 0x458; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nXSpacing = 0x5A8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nYSpacing = 0x6F8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nZSpacing = 0x848; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x998; // int32_t
    constexpr std::ptrdiff_t m_bLocalSpace = 0x99C; // bool
    constexpr std::ptrdiff_t m_bCenter = 0x99D; // bool
    constexpr std::ptrdiff_t m_bHollow = 0x99E; // bool
}

namespace C_INIT_CreateOnModel { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_modelInput = 0x1B8; // CParticleModelInput
    constexpr std::ptrdiff_t m_transformInput = 0x210; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nForceInModel = 0x270; // int32_t
    constexpr std::ptrdiff_t m_nDesiredHitbox = 0x274; // int32_t
    constexpr std::ptrdiff_t m_nHitboxValueFromControlPointIndex = 0x278; // int32_t
    constexpr std::ptrdiff_t m_vecHitBoxScale = 0x280; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flBoneVelocity = 0x8B0; // float
    constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x8B4; // float
    constexpr std::ptrdiff_t m_vecDirectionBias = 0x8B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_HitboxSetName = 0xEE8; // char[128]
    constexpr std::ptrdiff_t m_bLocalCoords = 0xF68; // bool
    constexpr std::ptrdiff_t m_bUseBones = 0xF69; // bool
    constexpr std::ptrdiff_t m_bUseMesh = 0xF6A; // bool
    constexpr std::ptrdiff_t m_flShellSize = 0xF70; // CParticleCollectionFloatInput
}

namespace C_INIT_CreateOnModelAtHeight { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_bUseBones = 0x1B4; // bool
    constexpr std::ptrdiff_t m_bForceZ = 0x1B5; // bool
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nHeightCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bUseWaterHeight = 0x1C0; // bool
    constexpr std::ptrdiff_t m_flDesiredHeight = 0x1C8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vecHitBoxScale = 0x318; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_vecDirectionBias = 0x948; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nBiasType = 0xF78; // ParticleHitboxBiasType_t
    constexpr std::ptrdiff_t m_bLocalCoords = 0xF7C; // bool
    constexpr std::ptrdiff_t m_bPreferMovingBoxes = 0xF7D; // bool
    constexpr std::ptrdiff_t m_HitboxSetName = 0xF7E; // char[128]
    constexpr std::ptrdiff_t m_flHitboxVelocityScale = 0x1000; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x1150; // CParticleCollectionFloatInput
}

namespace C_INIT_CreateParticleImpulse { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_InputRadius = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_InputMagnitude = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nFalloffFunction = 0x458; // ParticleFalloffFunction_t
    constexpr std::ptrdiff_t m_InputFalloffExp = 0x460; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nImpulseType = 0x5B0; // ParticleImpulseType_t
}

namespace C_INIT_CreatePhyllotaxis { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nScaleCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nComponent = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_fRadCentCore = 0x1C0; // float
    constexpr std::ptrdiff_t m_fRadPerPoint = 0x1C4; // float
    constexpr std::ptrdiff_t m_fRadPerPointTo = 0x1C8; // float
    constexpr std::ptrdiff_t m_fpointAngle = 0x1CC; // float
    constexpr std::ptrdiff_t m_fsizeOverall = 0x1D0; // float
    constexpr std::ptrdiff_t m_fRadBias = 0x1D4; // float
    constexpr std::ptrdiff_t m_fMinRad = 0x1D8; // float
    constexpr std::ptrdiff_t m_fDistBias = 0x1DC; // float
    constexpr std::ptrdiff_t m_bUseLocalCoords = 0x1E0; // bool
    constexpr std::ptrdiff_t m_bUseWithContEmit = 0x1E1; // bool
    constexpr std::ptrdiff_t m_bUseOrigRadius = 0x1E2; // bool
}

namespace C_INIT_CreateSequentialPath { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_fMaxDistance = 0x1B4; // float
    constexpr std::ptrdiff_t m_flNumToAssign = 0x1B8; // float
    constexpr std::ptrdiff_t m_bLoop = 0x1BC; // bool
    constexpr std::ptrdiff_t m_bCPPairs = 0x1BD; // bool
    constexpr std::ptrdiff_t m_bSaveOffset = 0x1BE; // bool
    constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
}

namespace C_INIT_CreateSequentialPathV2 { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_fMaxDistance = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flNumToAssign = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bLoop = 0x458; // bool
    constexpr std::ptrdiff_t m_bCPPairs = 0x459; // bool
    constexpr std::ptrdiff_t m_bSaveOffset = 0x45A; // bool
    constexpr std::ptrdiff_t m_PathParams = 0x460; // CPathParameters
}

namespace C_INIT_CreateSpiralSphere { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOverrideCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nDensity = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flInitialRadius = 0x1C0; // float
    constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_bUseParticleCount = 0x1CC; // bool
}

namespace C_INIT_CreateWithinBox { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecMin = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecMax = 0x7E8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nControlPointNumber = 0xE18; // int32_t
    constexpr std::ptrdiff_t m_bLocalSpace = 0xE1C; // bool
    constexpr std::ptrdiff_t m_randomnessParameters = 0xE20; // CRandomNumberGeneratorParameters
}

namespace C_INIT_CreateWithinSphereTransform { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_fRadiusMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_fRadiusMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecDistanceBias = 0x458; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecDistanceBiasAbs = 0xA88; // Vector
    constexpr std::ptrdiff_t m_TransformInput = 0xA98; // CParticleTransformInput
    constexpr std::ptrdiff_t m_fSpeedMin = 0xAF8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_fSpeedMax = 0xC48; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_fSpeedRandExp = 0xD98; // float
    constexpr std::ptrdiff_t m_bLocalCoords = 0xD9C; // bool
    constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0xDA0; // float
    constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0xDA8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x13D8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1A08; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldVelocity = 0x1A0C; // ParticleAttributeIndex_t
}

namespace C_INIT_CreationNoise { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bAbsVal = 0x1B8; // bool
    constexpr std::ptrdiff_t m_bAbsValInv = 0x1B9; // bool
    constexpr std::ptrdiff_t m_flOffset = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_flNoiseScale = 0x1C8; // float
    constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1CC; // float
    constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D0; // Vector
    constexpr std::ptrdiff_t m_flWorldTimeScale = 0x1DC; // float
}

namespace C_INIT_DistanceCull { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bCullInside = 0x308; // bool
}

namespace C_INIT_DistanceToCPInit { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nStartCP = 0x6F8; // int32_t
    constexpr std::ptrdiff_t m_bLOS = 0x6FC; // bool
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x6FD; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x780; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x788; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flLOSScale = 0x8D8; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x8DC; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x8E0; // bool
    constexpr std::ptrdiff_t m_vecDistanceScale = 0x8E4; // Vector
    constexpr std::ptrdiff_t m_flRemapBias = 0x8F0; // float
}

namespace C_INIT_DistanceToNeighborCull { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CPerParticleFloatInput
}

namespace C_INIT_GlobalScale { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bScaleRadius = 0x1C0; // bool
    constexpr std::ptrdiff_t m_bScalePosition = 0x1C1; // bool
    constexpr std::ptrdiff_t m_bScaleVelocity = 0x1C2; // bool
}

namespace C_INIT_InheritFromParentParticles { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nIncrement = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bRandomDistribution = 0x1C0; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1C4; // int32_t
}

namespace C_INIT_InheritVelocity { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flVelocityScale = 0x1B8; // float
}

namespace C_INIT_InitFloat { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x308; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x30C; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_InputStrength = 0x310; // CPerParticleFloatInput
}

namespace C_INIT_InitFloatCollection { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x308; // ParticleAttributeIndex_t
}

namespace C_INIT_InitFromCPSnapshot { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nAttributeToRead = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bRandom = 0x1C4; // bool
    constexpr std::ptrdiff_t m_bReverse = 0x1C5; // bool
    constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x1C8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nManualSnapshotIndex = 0x318; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nRandomSeed = 0x468; // int32_t
    constexpr std::ptrdiff_t m_bLocalSpaceAngles = 0x46C; // bool
}

namespace C_INIT_InitFromParentKilled { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nAttributeToCopy = 0x1B4; // ParticleAttributeIndex_t
}

namespace C_INIT_InitFromVectorFieldSnapshot { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nWeightUpdateCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bUseVerticalVelocity = 0x1C0; // bool
    constexpr std::ptrdiff_t m_vecScale = 0x1C8; // CPerParticleVecInput
}

namespace C_INIT_InitSkinnedPositionFromCPSnapshot { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bRandom = 0x1BC; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bRigid = 0x1C4; // bool
    constexpr std::ptrdiff_t m_bSetNormal = 0x1C5; // bool
    constexpr std::ptrdiff_t m_bIgnoreDt = 0x1C6; // bool
    constexpr std::ptrdiff_t m_flMinNormalVelocity = 0x1C8; // float
    constexpr std::ptrdiff_t m_flMaxNormalVelocity = 0x1CC; // float
    constexpr std::ptrdiff_t m_nIndexType = 0x1D0; // SnapshotIndexType_t
    constexpr std::ptrdiff_t m_flReadIndex = 0x1D8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flIncrement = 0x328; // float
    constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x32C; // int32_t
    constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x330; // int32_t
    constexpr std::ptrdiff_t m_flBoneVelocity = 0x334; // float
    constexpr std::ptrdiff_t m_flBoneVelocityMax = 0x338; // float
    constexpr std::ptrdiff_t m_bCopyColor = 0x33C; // bool
    constexpr std::ptrdiff_t m_bCopyAlpha = 0x33D; // bool
    constexpr std::ptrdiff_t m_bSetRadius = 0x33E; // bool
}

namespace C_INIT_InitVec { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x7EC; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bNormalizedOutput = 0x7F0; // bool
    constexpr std::ptrdiff_t m_bWritePreviousPosition = 0x7F1; // bool
}

namespace C_INIT_InitVecCollection { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
}

namespace C_INIT_InitialRepulsionVelocity { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x1B4; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x234; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_vecOutputMin = 0x238; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x244; // Vector
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x250; // int32_t
    constexpr std::ptrdiff_t m_bPerParticle = 0x254; // bool
    constexpr std::ptrdiff_t m_bTranslate = 0x255; // bool
    constexpr std::ptrdiff_t m_bProportional = 0x256; // bool
    constexpr std::ptrdiff_t m_flTraceLength = 0x258; // float
    constexpr std::ptrdiff_t m_bPerParticleTR = 0x25C; // bool
    constexpr std::ptrdiff_t m_bInherit = 0x25D; // bool
    constexpr std::ptrdiff_t m_nChildCP = 0x260; // int32_t
    constexpr std::ptrdiff_t m_nChildGroupID = 0x264; // int32_t
}

namespace C_INIT_InitialSequenceFromModel { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
}

namespace C_INIT_InitialVelocityFromHitbox { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flVelocityMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flVelocityMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_HitboxSetName = 0x1C0; // char[128]
    constexpr std::ptrdiff_t m_bUseBones = 0x240; // bool
}

namespace C_INIT_InitialVelocityNoise { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecAbsVal = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecAbsValInv = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flOffset = 0x800; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecOutputMin = 0x950; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecOutputMax = 0xF80; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flNoiseScale = 0x15B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1700; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_TransformInput = 0x1850; // CParticleTransformInput
    constexpr std::ptrdiff_t m_bIgnoreDt = 0x18B0; // bool
}

namespace C_INIT_LifespanFromVelocity { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecComponentScale = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_flTraceOffset = 0x1C0; // float
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1C4; // float
    constexpr std::ptrdiff_t m_flTraceTolerance = 0x1C8; // float
    constexpr std::ptrdiff_t m_nMaxPlanes = 0x1CC; // int32_t
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x1D4; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x254; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_bIncludeWater = 0x260; // bool
}

namespace C_INIT_ModelCull { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_bBoundBox = 0x1B8; // bool
    constexpr std::ptrdiff_t m_bCullOutside = 0x1B9; // bool
    constexpr std::ptrdiff_t m_bUseBones = 0x1BA; // bool
    constexpr std::ptrdiff_t m_HitboxSetName = 0x1BB; // char[128]
}

namespace C_INIT_MoveBetweenPoints { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flSpeedMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flSpeedMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flEndSpread = 0x458; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flStartOffset = 0x5A8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flEndOffset = 0x6F8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x848; // int32_t
    constexpr std::ptrdiff_t m_bTrailBias = 0x84C; // bool
}

namespace C_INIT_NormalAlignToCP { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_transformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nControlPointAxis = 0x218; // ParticleControlPointAxis_t
}

namespace C_INIT_NormalOffset { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_OffsetMin = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_OffsetMax = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1CC; // int32_t
    constexpr std::ptrdiff_t m_bLocalCoords = 0x1D0; // bool
    constexpr std::ptrdiff_t m_bNormalize = 0x1D1; // bool
}

namespace C_INIT_OffsetVectorToVector { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecOutputMin = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_randomnessParameters = 0x1D4; // CRandomNumberGeneratorParameters
}

namespace C_INIT_Orient2DRelToCP { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flRotOffset = 0x1BC; // float
}

namespace C_INIT_PlaneCull { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bCullInside = 0x308; // bool
}

namespace C_INIT_PointList { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
    constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1D0; // bool
    constexpr std::ptrdiff_t m_bClosedLoop = 0x1D1; // bool
    constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1D4; // int32_t
}

namespace C_INIT_PositionOffset { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_OffsetMin = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_OffsetMax = 0x7E8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_TransformInput = 0xE18; // CParticleTransformInput
    constexpr std::ptrdiff_t m_bLocalCoords = 0xE78; // bool
    constexpr std::ptrdiff_t m_bProportional = 0xE79; // bool
    constexpr std::ptrdiff_t m_randomnessParameters = 0xE7C; // CRandomNumberGeneratorParameters
}

namespace C_INIT_PositionOffsetToCP { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumberStart = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nControlPointNumberEnd = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bLocalCoords = 0x1BC; // bool
}

namespace C_INIT_PositionPlaceOnGround { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flOffset = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x458; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x4D8; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_nTraceMissBehavior = 0x4E8; // ParticleTraceMissBehavior_t
    constexpr std::ptrdiff_t m_bIncludeWater = 0x4EC; // bool
    constexpr std::ptrdiff_t m_bSetNormal = 0x4ED; // bool
    constexpr std::ptrdiff_t m_bSetPXYZOnly = 0x4EE; // bool
    constexpr std::ptrdiff_t m_bTraceAlongNormal = 0x4EF; // bool
    constexpr std::ptrdiff_t m_bOffsetonColOnly = 0x4F0; // bool
    constexpr std::ptrdiff_t m_flOffsetByRadiusFactor = 0x4F4; // float
    constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0x4F8; // int32_t
    constexpr std::ptrdiff_t m_nIgnoreCP = 0x4FC; // int32_t
}

namespace C_INIT_PositionWarp { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecWarpMin = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_vecWarpMax = 0x7E8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0xE18; // int32_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0xE1C; // int32_t
    constexpr std::ptrdiff_t m_nRadiusComponent = 0xE20; // int32_t
    constexpr std::ptrdiff_t m_flWarpTime = 0xE24; // float
    constexpr std::ptrdiff_t m_flWarpStartTime = 0xE28; // float
    constexpr std::ptrdiff_t m_flPrevPosScale = 0xE2C; // float
    constexpr std::ptrdiff_t m_bInvertWarp = 0xE30; // bool
    constexpr std::ptrdiff_t m_bUseCount = 0xE31; // bool
}

namespace C_INIT_PositionWarpScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecWarpMin = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecWarpMax = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_InputValue = 0x1D0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flPrevPosScale = 0x320; // float
    constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x324; // int32_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x328; // int32_t
}

namespace C_INIT_QuantizeFloat { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x308; // ParticleAttributeIndex_t
}

namespace C_INIT_RadiusFromCPObject { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPoint = 0x1B4; // int32_t
}

namespace C_INIT_RandomAlpha { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAlphaMin = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nAlphaMax = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flAlphaRandExponent = 0x1C8; // float
}

namespace C_INIT_RandomAlphaWindowThreshold { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_flExponent = 0x1BC; // float
}

namespace C_INIT_RandomColor { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_ColorMin = 0x1D0; // Color
    constexpr std::ptrdiff_t m_ColorMax = 0x1D4; // Color
    constexpr std::ptrdiff_t m_TintMin = 0x1D8; // Color
    constexpr std::ptrdiff_t m_TintMax = 0x1DC; // Color
    constexpr std::ptrdiff_t m_flTintPerc = 0x1E0; // float
    constexpr std::ptrdiff_t m_flUpdateThreshold = 0x1E4; // float
    constexpr std::ptrdiff_t m_nTintCP = 0x1E8; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nTintBlendMode = 0x1F0; // ParticleColorBlendMode_t
    constexpr std::ptrdiff_t m_flLightAmplification = 0x1F4; // float
}

namespace C_INIT_RandomLifeTime { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_fLifetimeMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_fLifetimeMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_fLifetimeRandExponent = 0x1BC; // float
}

namespace C_INIT_RandomModelSequence { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_ActivityName = 0x1B4; // char[256]
    constexpr std::ptrdiff_t m_SequenceName = 0x2B4; // char[256]
    constexpr std::ptrdiff_t m_hModel = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
}

namespace C_INIT_RandomNamedModelBodyPart { // C_INIT_RandomNamedModelElement
}

namespace C_INIT_RandomNamedModelElement { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_names = 0x1C0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_bShuffle = 0x1D8; // bool
    constexpr std::ptrdiff_t m_bLinear = 0x1D9; // bool
    constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1DA; // bool
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
}

namespace C_INIT_RandomNamedModelMeshGroup { // C_INIT_RandomNamedModelElement
}

namespace C_INIT_RandomNamedModelSequence { // C_INIT_RandomNamedModelElement
}

namespace C_INIT_RandomRadius { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flRadiusMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flRadiusMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_flRadiusRandExponent = 0x1BC; // float
}

namespace C_INIT_RandomRotation { // CGeneralRandomRotation
}

namespace C_INIT_RandomRotationSpeed { // CGeneralRandomRotation
}

namespace C_INIT_RandomScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_flExponent = 0x1BC; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
}

namespace C_INIT_RandomSecondSequence { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nSequenceMin = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nSequenceMax = 0x1B8; // int32_t
}

namespace C_INIT_RandomSequence { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nSequenceMin = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nSequenceMax = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bShuffle = 0x1BC; // bool
    constexpr std::ptrdiff_t m_bLinear = 0x1BD; // bool
    constexpr std::ptrdiff_t m_WeightedList = 0x1C0; // CUtlVector<SequenceWeightedList_t>
}

namespace C_INIT_RandomTrailLength { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flMinLength = 0x1B4; // float
    constexpr std::ptrdiff_t m_flMaxLength = 0x1B8; // float
    constexpr std::ptrdiff_t m_flLengthRandExponent = 0x1BC; // float
}

namespace C_INIT_RandomVector { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecMin = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecMax = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_randomnessParameters = 0x1D0; // CRandomNumberGeneratorParameters
}

namespace C_INIT_RandomVectorComponent { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nComponent = 0x1C0; // int32_t
}

namespace C_INIT_RandomYaw { // CGeneralRandomRotation
}

namespace C_INIT_RandomYawFlip { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flPercent = 0x1B4; // float
}

namespace C_INIT_RemapCPtoScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nCPInput = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nField = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x1D0; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1D4; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_flRemapBias = 0x1DC; // float
}

namespace C_INIT_RemapInitialDirectionToTransformToVector { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x21C; // float
    constexpr std::ptrdiff_t m_flOffsetRot = 0x220; // float
    constexpr std::ptrdiff_t m_vecOffsetAxis = 0x224; // Vector
    constexpr std::ptrdiff_t m_bNormalize = 0x230; // bool
}

namespace C_INIT_RemapInitialTransformDirectionToRotation { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOffsetRot = 0x21C; // float
    constexpr std::ptrdiff_t m_nComponent = 0x220; // int32_t
}

namespace C_INIT_RemapInitialVisibilityScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
}

namespace C_INIT_RemapNamedModelBodyPartToScalar { // C_INIT_RemapNamedModelElementToScalar
}

namespace C_INIT_RemapNamedModelElementToScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_names = 0x1C0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_values = 0x1D8; // CUtlVector<float>
    constexpr std::ptrdiff_t m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1F4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x1F8; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1FC; // bool
}

namespace C_INIT_RemapNamedModelMeshGroupToScalar { // C_INIT_RemapNamedModelElementToScalar
}

namespace C_INIT_RemapNamedModelSequenceToScalar { // C_INIT_RemapNamedModelElementToScalar
}

namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

namespace C_INIT_RemapParticleCountToNamedModelElementScalar { // C_INIT_RemapParticleCountToScalar
    constexpr std::ptrdiff_t m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_outputMinName = 0x1E8; // CUtlString
    constexpr std::ptrdiff_t m_outputMaxName = 0x1F0; // CUtlString
    constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1F8; // bool
}

namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar { // C_INIT_RemapParticleCountToNamedModelElementScalar
}

namespace C_INIT_RemapParticleCountToScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nInputMin = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nInputMax = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x1D4; // bool
    constexpr std::ptrdiff_t m_bInvert = 0x1D5; // bool
    constexpr std::ptrdiff_t m_bWrap = 0x1D6; // bool
    constexpr std::ptrdiff_t m_flRemapBias = 0x1D8; // float
}

namespace C_INIT_RemapQAnglesToRotation { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
}

namespace C_INIT_RemapScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x1CC; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1D0; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D4; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x1D8; // bool
    constexpr std::ptrdiff_t m_flRemapBias = 0x1DC; // float
}

namespace C_INIT_RemapScalarToVector { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_vecOutputMin = 0x1C4; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x1D0; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0x1DC; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1E0; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1E4; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32_t
    constexpr std::ptrdiff_t m_bLocalCoords = 0x1EC; // bool
    constexpr std::ptrdiff_t m_flRemapBias = 0x1F0; // float
}

namespace C_INIT_RemapSpeedToScalar { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flStartTime = 0x1BC; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1C0; // float
    constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D4; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bPerParticle = 0x1D8; // bool
}

namespace C_INIT_RemapTransformOrientationToRotations { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_vecRotation = 0x218; // Vector
    constexpr std::ptrdiff_t m_bUseQuat = 0x224; // bool
    constexpr std::ptrdiff_t m_bWriteNormal = 0x225; // bool
}

namespace C_INIT_RemapTransformToVector { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vInputMin = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_vInputMax = 0x1C4; // Vector
    constexpr std::ptrdiff_t m_vOutputMin = 0x1D0; // Vector
    constexpr std::ptrdiff_t m_vOutputMax = 0x1DC; // Vector
    constexpr std::ptrdiff_t m_TransformInput = 0x1E8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_LocalSpaceTransform = 0x248; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flStartTime = 0x2A8; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x2AC; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x2B0; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bOffset = 0x2B4; // bool
    constexpr std::ptrdiff_t m_bAccelerate = 0x2B5; // bool
    constexpr std::ptrdiff_t m_flRemapBias = 0x2B8; // float
}

namespace C_INIT_RingWave { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flParticlesPerOrbit = 0x218; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInitialRadius = 0x368; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flThickness = 0x4B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x608; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x758; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRoll = 0x8A8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flPitch = 0x9F8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flYaw = 0xB48; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bEvenDistribution = 0xC98; // bool
    constexpr std::ptrdiff_t m_bXYVelocityOnly = 0xC99; // bool
}

namespace C_INIT_RtEnvCull { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecTestDir = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecTestNormal = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_bUseVelocity = 0x1CC; // bool
    constexpr std::ptrdiff_t m_bCullOnMiss = 0x1CD; // bool
    constexpr std::ptrdiff_t m_bLifeAdjust = 0x1CE; // bool
    constexpr std::ptrdiff_t m_RtEnvName = 0x1CF; // char[128]
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x250; // int32_t
    constexpr std::ptrdiff_t m_nComponent = 0x254; // int32_t
}

namespace C_INIT_ScaleVelocity { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_vecScale = 0x1B8; // CParticleCollectionVecInput
}

namespace C_INIT_SequenceFromCP { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_bKillUnused = 0x1B4; // bool
    constexpr std::ptrdiff_t m_bRadiusScale = 0x1B5; // bool
    constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_vecOffset = 0x1BC; // Vector
}

namespace C_INIT_SequenceLifeTime { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flFramerate = 0x1B4; // float
}

namespace C_INIT_SetAttributeToScalarExpression { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nExpression = 0x1B4; // ScalarExpressionType_t
    constexpr std::ptrdiff_t m_flInput1 = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInput2 = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputRemap = 0x458; // CParticleRemapFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x5AC; // ParticleSetMethod_t
}

namespace C_INIT_SetHitboxToClosest { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_HitboxSetName = 0x7F0; // char[128]
    constexpr std::ptrdiff_t m_bUseBones = 0x870; // bool
    constexpr std::ptrdiff_t m_bUseClosestPointOnHitbox = 0x871; // bool
    constexpr std::ptrdiff_t m_nTestType = 0x874; // ClosestPointTestType_t
    constexpr std::ptrdiff_t m_flHybridRatio = 0x878; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bUpdatePosition = 0x9C8; // bool
}

namespace C_INIT_SetHitboxToModel { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nForceInModel = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_vecDirectionBias = 0x7F0; // Vector
    constexpr std::ptrdiff_t m_bMaintainHitbox = 0x7FC; // bool
    constexpr std::ptrdiff_t m_bUseBones = 0x7FD; // bool
    constexpr std::ptrdiff_t m_HitboxSetName = 0x7FE; // char[128]
    constexpr std::ptrdiff_t m_flShellSize = 0x880; // CParticleCollectionFloatInput
}

namespace C_INIT_SetRigidAttachment { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bLocalSpace = 0x1C0; // bool
}

namespace C_INIT_SetVectorAttributeToVectorExpression { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nExpression = 0x1B4; // VectorExpressionType_t
    constexpr std::ptrdiff_t m_vInput1 = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vInput2 = 0x7E8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nOutputField = 0xE18; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0xE1C; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE20; // bool
}

namespace C_INIT_StatusEffect { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nDetail2Combo = 0x1B4; // Detail2Combo_t
    constexpr std::ptrdiff_t m_flDetail2Rotation = 0x1B8; // float
    constexpr std::ptrdiff_t m_flDetail2Scale = 0x1BC; // float
    constexpr std::ptrdiff_t m_flDetail2BlendFactor = 0x1C0; // float
    constexpr std::ptrdiff_t m_flColorWarpIntensity = 0x1C4; // float
    constexpr std::ptrdiff_t m_flDiffuseWarpBlendToFull = 0x1C8; // float
    constexpr std::ptrdiff_t m_flEnvMapIntensity = 0x1CC; // float
    constexpr std::ptrdiff_t m_flAmbientScale = 0x1D0; // float
    constexpr std::ptrdiff_t m_specularColor = 0x1D4; // Color
    constexpr std::ptrdiff_t m_flSpecularScale = 0x1D8; // float
    constexpr std::ptrdiff_t m_flSpecularExponent = 0x1DC; // float
    constexpr std::ptrdiff_t m_flSpecularExponentBlendToFull = 0x1E0; // float
    constexpr std::ptrdiff_t m_flSpecularBlendToFull = 0x1E4; // float
    constexpr std::ptrdiff_t m_rimLightColor = 0x1E8; // Color
    constexpr std::ptrdiff_t m_flRimLightScale = 0x1EC; // float
    constexpr std::ptrdiff_t m_flReflectionsTintByBaseBlendToNone = 0x1F0; // float
    constexpr std::ptrdiff_t m_flMetalnessBlendToFull = 0x1F4; // float
    constexpr std::ptrdiff_t m_flSelfIllumBlendToFull = 0x1F8; // float
}

namespace C_INIT_StatusEffectCitadel { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_flSFXColorWarpAmount = 0x1B4; // float
    constexpr std::ptrdiff_t m_flSFXNormalAmount = 0x1B8; // float
    constexpr std::ptrdiff_t m_flSFXMetalnessAmount = 0x1BC; // float
    constexpr std::ptrdiff_t m_flSFXRoughnessAmount = 0x1C0; // float
    constexpr std::ptrdiff_t m_flSFXSelfIllumAmount = 0x1C4; // float
    constexpr std::ptrdiff_t m_flSFXSScale = 0x1C8; // float
    constexpr std::ptrdiff_t m_flSFXSScrollX = 0x1CC; // float
    constexpr std::ptrdiff_t m_flSFXSScrollY = 0x1D0; // float
    constexpr std::ptrdiff_t m_flSFXSScrollZ = 0x1D4; // float
    constexpr std::ptrdiff_t m_flSFXSOffsetX = 0x1D8; // float
    constexpr std::ptrdiff_t m_flSFXSOffsetY = 0x1DC; // float
    constexpr std::ptrdiff_t m_flSFXSOffsetZ = 0x1E0; // float
    constexpr std::ptrdiff_t m_nDetailCombo = 0x1E4; // DetailCombo_t
    constexpr std::ptrdiff_t m_flSFXSDetailAmount = 0x1E8; // float
    constexpr std::ptrdiff_t m_flSFXSDetailScale = 0x1EC; // float
    constexpr std::ptrdiff_t m_flSFXSDetailScrollX = 0x1F0; // float
    constexpr std::ptrdiff_t m_flSFXSDetailScrollY = 0x1F4; // float
    constexpr std::ptrdiff_t m_flSFXSDetailScrollZ = 0x1F8; // float
    constexpr std::ptrdiff_t m_flSFXSUseModelUVs = 0x1FC; // float
}

namespace C_INIT_VelocityFromCP { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_velocityInput = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_transformInput = 0x7E8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flVelocityScale = 0x848; // float
    constexpr std::ptrdiff_t m_bDirectionOnly = 0x84C; // bool
}

namespace C_INIT_VelocityFromNormal { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_fSpeedMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_fSpeedMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_bIgnoreDt = 0x1BC; // bool
}

namespace C_INIT_VelocityRadialRandom { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_fSpeedMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_fSpeedMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_vecLocalCoordinateSystemSpeedScale = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1CD; // bool
}

namespace C_INIT_VelocityRandom { // CParticleFunctionInitializer
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_fSpeedMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_fSpeedMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x458; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0xA88; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_bIgnoreDT = 0x10B8; // bool
    constexpr std::ptrdiff_t m_randomnessParameters = 0x10BC; // CRandomNumberGeneratorParameters
}

namespace C_OP_AlphaDecay { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flMinAlpha = 0x1B0; // float
}

namespace C_OP_AttractToControlPoint { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_vecComponentScale = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_fForceAmount = 0x1C8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_fFalloffPower = 0x318; // float
    constexpr std::ptrdiff_t m_TransformInput = 0x320; // CParticleTransformInput
    constexpr std::ptrdiff_t m_fForceAmountMin = 0x380; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bApplyMinForce = 0x4D0; // bool
}

namespace C_OP_BasicMovement { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_Gravity = 0x1B0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_fDrag = 0x7E0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nMaxConstraintPasses = 0x930; // int32_t
}

namespace C_OP_BoxConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_vecMin = 0x1B0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_vecMax = 0x7E0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nCP = 0xE10; // int32_t
    constexpr std::ptrdiff_t m_bLocalSpace = 0xE14; // bool
    constexpr std::ptrdiff_t m_bAccountForRadius = 0xE15; // bool
}

namespace C_OP_CPOffsetToPercentageBetweenCPs { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flInputMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_flInputBias = 0x1B8; // float
    constexpr std::ptrdiff_t m_nStartCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nEndCP = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nOffsetCP = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_nOuputCP = 0x1C8; // int32_t
    constexpr std::ptrdiff_t m_nInputCP = 0x1CC; // int32_t
    constexpr std::ptrdiff_t m_bRadialCheck = 0x1D0; // bool
    constexpr std::ptrdiff_t m_bScaleOffset = 0x1D1; // bool
    constexpr std::ptrdiff_t m_vecOffset = 0x1D4; // Vector
}

namespace C_OP_CPVelocityForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flScale = 0x1C0; // CPerParticleFloatInput
}

namespace C_OP_CalculateVectorAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_vStartValue = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_nFieldInput1 = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputScale1 = 0x1C0; // float
    constexpr std::ptrdiff_t m_nFieldInput2 = 0x1C4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputScale2 = 0x1C8; // float
    constexpr std::ptrdiff_t m_nControlPointInput1 = 0x1CC; // ControlPointReference_t
    constexpr std::ptrdiff_t m_flControlPointScale1 = 0x1E0; // float
    constexpr std::ptrdiff_t m_nControlPointInput2 = 0x1E4; // ControlPointReference_t
    constexpr std::ptrdiff_t m_flControlPointScale2 = 0x1F8; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1FC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vFinalOutputScale = 0x200; // Vector
}

namespace C_OP_Callback { // CParticleFunctionRenderer
}

namespace C_OP_ChladniWave { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecWaveLength = 0x6F8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecHarmonics = 0xD28; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nSetMethod = 0x1358; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_nLocalSpaceControlPoint = 0x135C; // int32_t
    constexpr std::ptrdiff_t m_b3D = 0x1360; // bool
}

namespace C_OP_ChooseRandomChildrenInGroup { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flNumberOfChildren = 0x1B8; // CParticleCollectionFloatInput
}

namespace C_OP_ClampScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOutputMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x308; // CPerParticleFloatInput
}

namespace C_OP_ClampVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecOutputMin = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecOutputMax = 0x7E8; // CPerParticleVecInput
}

namespace C_OP_CollideWithParentParticles { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flParentRadiusScale = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRadiusScale = 0x300; // CPerParticleFloatInput
}

namespace C_OP_CollideWithSelf { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMinimumSpeed = 0x300; // CPerParticleFloatInput
}

namespace C_OP_ColorAdjustHSL { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flHueAdjust = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flSaturationAdjust = 0x300; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flLightnessAdjust = 0x450; // CPerParticleFloatInput
}

namespace C_OP_ColorInterpolate { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_ColorFade = 0x1B0; // Color
    constexpr std::ptrdiff_t m_flFadeStartTime = 0x1C0; // float
    constexpr std::ptrdiff_t m_flFadeEndTime = 0x1C4; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1C8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bEaseInOut = 0x1CC; // bool
    constexpr std::ptrdiff_t m_bUseNewCode = 0x1CD; // bool
}

namespace C_OP_ColorInterpolateRandom { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_ColorFadeMin = 0x1B0; // Color
    constexpr std::ptrdiff_t m_ColorFadeMax = 0x1CC; // Color
    constexpr std::ptrdiff_t m_flFadeStartTime = 0x1DC; // float
    constexpr std::ptrdiff_t m_flFadeEndTime = 0x1E0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bEaseInOut = 0x1E8; // bool
}

namespace C_OP_ConnectParentParticleToNearest { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nSecondControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_bUseRadius = 0x1B8; // bool
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flParentRadiusScale = 0x310; // CParticleCollectionFloatInput
}

namespace C_OP_ConstrainDistance { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_fMinDistance = 0x1B0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_fMaxDistance = 0x300; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x450; // int32_t
    constexpr std::ptrdiff_t m_CenterOffset = 0x454; // Vector
    constexpr std::ptrdiff_t m_bGlobalCenter = 0x460; // bool
}

namespace C_OP_ConstrainDistanceToPath { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_fMinDistance = 0x1B0; // float
    constexpr std::ptrdiff_t m_flMaxDistance0 = 0x1B4; // float
    constexpr std::ptrdiff_t m_flMaxDistanceMid = 0x1B8; // float
    constexpr std::ptrdiff_t m_flMaxDistance1 = 0x1BC; // float
    constexpr std::ptrdiff_t m_PathParameters = 0x1C0; // CPathParameters
    constexpr std::ptrdiff_t m_flTravelTime = 0x200; // float
    constexpr std::ptrdiff_t m_nFieldScale = 0x204; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nManualTField = 0x208; // ParticleAttributeIndex_t
}

namespace C_OP_ConstrainDistanceToUserSpecifiedPath { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_fMinDistance = 0x1B0; // float
    constexpr std::ptrdiff_t m_flMaxDistance = 0x1B4; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x1B8; // float
    constexpr std::ptrdiff_t m_bLoopedPath = 0x1BC; // bool
    constexpr std::ptrdiff_t m_pointList = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
}

namespace C_OP_ConstrainLineLength { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flMinDistance = 0x1B0; // float
    constexpr std::ptrdiff_t m_flMaxDistance = 0x1B4; // float
}

namespace C_OP_ContinuousEmitter { // CParticleFunctionEmitter
    constexpr std::ptrdiff_t m_flEmissionDuration = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flStartTime = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flEmitRate = 0x458; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flEmissionScale = 0x5A8; // float
    constexpr std::ptrdiff_t m_flScalePerParentParticle = 0x5AC; // float
    constexpr std::ptrdiff_t m_bInitFromKilledParentParticles = 0x5B0; // bool
    constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x5B4; // int32_t
    constexpr std::ptrdiff_t m_nLimitPerUpdate = 0x5B8; // int32_t
    constexpr std::ptrdiff_t m_bForceEmitOnFirstUpdate = 0x5BC; // bool
    constexpr std::ptrdiff_t m_bForceEmitOnLastUpdate = 0x5BD; // bool
}

namespace C_OP_ControlPointToRadialScreenSpace { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPIn = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_nCPOut = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_nCPOutField = 0x1C8; // int32_t
    constexpr std::ptrdiff_t m_nCPSSPosOut = 0x1CC; // int32_t
}

namespace C_OP_ControlpointLight { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_nControlPoint1 = 0x640; // int32_t
    constexpr std::ptrdiff_t m_nControlPoint2 = 0x644; // int32_t
    constexpr std::ptrdiff_t m_nControlPoint3 = 0x648; // int32_t
    constexpr std::ptrdiff_t m_nControlPoint4 = 0x64C; // int32_t
    constexpr std::ptrdiff_t m_vecCPOffset1 = 0x650; // Vector
    constexpr std::ptrdiff_t m_vecCPOffset2 = 0x65C; // Vector
    constexpr std::ptrdiff_t m_vecCPOffset3 = 0x668; // Vector
    constexpr std::ptrdiff_t m_vecCPOffset4 = 0x674; // Vector
    constexpr std::ptrdiff_t m_LightFiftyDist1 = 0x680; // float
    constexpr std::ptrdiff_t m_LightZeroDist1 = 0x684; // float
    constexpr std::ptrdiff_t m_LightFiftyDist2 = 0x688; // float
    constexpr std::ptrdiff_t m_LightZeroDist2 = 0x68C; // float
    constexpr std::ptrdiff_t m_LightFiftyDist3 = 0x690; // float
    constexpr std::ptrdiff_t m_LightZeroDist3 = 0x694; // float
    constexpr std::ptrdiff_t m_LightFiftyDist4 = 0x698; // float
    constexpr std::ptrdiff_t m_LightZeroDist4 = 0x69C; // float
    constexpr std::ptrdiff_t m_LightColor1 = 0x6A0; // Color
    constexpr std::ptrdiff_t m_LightColor2 = 0x6A4; // Color
    constexpr std::ptrdiff_t m_LightColor3 = 0x6A8; // Color
    constexpr std::ptrdiff_t m_LightColor4 = 0x6AC; // Color
    constexpr std::ptrdiff_t m_bLightType1 = 0x6B0; // bool
    constexpr std::ptrdiff_t m_bLightType2 = 0x6B1; // bool
    constexpr std::ptrdiff_t m_bLightType3 = 0x6B2; // bool
    constexpr std::ptrdiff_t m_bLightType4 = 0x6B3; // bool
    constexpr std::ptrdiff_t m_bLightDynamic1 = 0x6B4; // bool
    constexpr std::ptrdiff_t m_bLightDynamic2 = 0x6B5; // bool
    constexpr std::ptrdiff_t m_bLightDynamic3 = 0x6B6; // bool
    constexpr std::ptrdiff_t m_bLightDynamic4 = 0x6B7; // bool
    constexpr std::ptrdiff_t m_bUseNormal = 0x6B8; // bool
    constexpr std::ptrdiff_t m_bUseHLambert = 0x6B9; // bool
    constexpr std::ptrdiff_t m_bClampLowerRange = 0x6BE; // bool
    constexpr std::ptrdiff_t m_bClampUpperRange = 0x6BF; // bool
}

namespace C_OP_Cull { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flCullPerc = 0x1B0; // float
    constexpr std::ptrdiff_t m_flCullStart = 0x1B4; // float
    constexpr std::ptrdiff_t m_flCullEnd = 0x1B8; // float
    constexpr std::ptrdiff_t m_flCullExp = 0x1BC; // float
}

namespace C_OP_CurlNoiseForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_nNoiseType = 0x1BC; // ParticleDirectionNoiseType_t
    constexpr std::ptrdiff_t m_vecNoiseFreq = 0x1C0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecNoiseScale = 0x7F0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecOffset = 0xE20; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecOffsetRate = 0x1450; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flWorleySeed = 0x1A80; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flWorleyJitter = 0x1BD0; // CPerParticleFloatInput
}

namespace C_OP_CycleScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nDestField = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flStartValue = 0x1B4; // float
    constexpr std::ptrdiff_t m_flEndValue = 0x1B8; // float
    constexpr std::ptrdiff_t m_flCycleTime = 0x1BC; // float
    constexpr std::ptrdiff_t m_bDoNotRepeatCycle = 0x1C0; // bool
    constexpr std::ptrdiff_t m_bSynchronizeParticles = 0x1C1; // bool
    constexpr std::ptrdiff_t m_nCPScale = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_nCPFieldMin = 0x1C8; // int32_t
    constexpr std::ptrdiff_t m_nCPFieldMax = 0x1CC; // int32_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
}

namespace C_OP_CylindricalDistanceToTransform { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_TransformStart = 0x6F8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_TransformEnd = 0x758; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nSetMethod = 0x7B8; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x7BC; // bool
    constexpr std::ptrdiff_t m_bAdditive = 0x7BD; // bool
    constexpr std::ptrdiff_t m_bCapsule = 0x7BE; // bool
}

namespace C_OP_DampenToCP { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_flRange = 0x1B4; // float
    constexpr std::ptrdiff_t m_flScale = 0x1B8; // float
}

namespace C_OP_Decay { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_bRopeDecay = 0x1B0; // bool
    constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1B1; // bool
}

namespace C_OP_DecayClampCount { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCount = 0x1B0; // CParticleCollectionFloatInput
}

namespace C_OP_DecayMaintainCount { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_flDecayDelay = 0x1B4; // float
    constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bLifespanDecay = 0x1BC; // bool
    constexpr std::ptrdiff_t m_flScale = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bKillNewest = 0x310; // bool
}

namespace C_OP_DecayOffscreen { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flOffscreenTime = 0x1B0; // CParticleCollectionFloatInput
}

namespace C_OP_DensityForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1BC; // float
    constexpr std::ptrdiff_t m_flForceScale = 0x1C0; // float
    constexpr std::ptrdiff_t m_flTargetDensity = 0x1C4; // float
}

namespace C_OP_DifferencePreviousParticle { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1C8; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x1CC; // bool
    constexpr std::ptrdiff_t m_bSetPreviousParticle = 0x1CD; // bool
}

namespace C_OP_Diffusion { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1B8; // int32_t
}

namespace C_OP_DirectionBetweenVecsToVec { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecPoint1 = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecPoint2 = 0x7E8; // CPerParticleVecInput
}

namespace C_OP_DistanceBetweenCPsToCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nStartCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nEndCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nOutputCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nOutputCPField = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bSetOnce = 0x1C4; // bool
    constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1D8; // float
    constexpr std::ptrdiff_t m_flLOSScale = 0x1DC; // float
    constexpr std::ptrdiff_t m_bLOS = 0x1E0; // bool
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x1E1; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x264; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_nSetParent = 0x268; // ParticleParentSetMode_t
}

namespace C_OP_DistanceBetweenTransforms { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_TransformStart = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_TransformEnd = 0x218; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flInputMin = 0x278; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x3C8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x518; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x668; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x7B8; // float
    constexpr std::ptrdiff_t m_flLOSScale = 0x7BC; // float
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x7C0; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x840; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_bLOS = 0x844; // bool
    constexpr std::ptrdiff_t m_nSetMethod = 0x848; // ParticleSetMethod_t
}

namespace C_OP_DistanceBetweenVecs { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecPoint1 = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecPoint2 = 0x7E8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flInputMin = 0xE18; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0xF68; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x10B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x1208; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nSetMethod = 0x1358; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bDeltaTime = 0x135C; // bool
}

namespace C_OP_DistanceCull { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPoint = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_vecPointOffset = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_flDistance = 0x1C0; // float
    constexpr std::ptrdiff_t m_bCullInside = 0x1C4; // bool
}

namespace C_OP_DistanceToTransform { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_TransformStart = 0x6F8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_bLOS = 0x758; // bool
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x759; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x7DC; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x7E0; // float
    constexpr std::ptrdiff_t m_flLOSScale = 0x7E4; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x7E8; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x7EC; // bool
    constexpr std::ptrdiff_t m_bAdditive = 0x7ED; // bool
    constexpr std::ptrdiff_t m_vecComponentScale = 0x7F0; // CPerParticleVecInput
}

namespace C_OP_DragRelativeToPlane { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flDragAtPlane = 0x1B0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flFalloff = 0x300; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bDirectional = 0x450; // bool
    constexpr std::ptrdiff_t m_vecPlaneNormal = 0x458; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nControlPointNumber = 0xA88; // int32_t
}

namespace C_OP_DriveCPFromGlobalSoundFloat { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOutputField = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_StackName = 0x1D0; // CUtlString
    constexpr std::ptrdiff_t m_OperatorName = 0x1D8; // CUtlString
    constexpr std::ptrdiff_t m_FieldName = 0x1E0; // CUtlString
}

namespace C_OP_EnableChildrenFromParentParticleCount { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nFirstChild = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bDisableChildren = 0x310; // bool
    constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x311; // bool
    constexpr std::ptrdiff_t m_bDestroyImmediately = 0x312; // bool
}

namespace C_OP_EndCapDecay { // CParticleFunctionOperator
}

namespace C_OP_EndCapTimedDecay { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flDecayTime = 0x1B0; // float
}

namespace C_OP_EndCapTimedFreeze { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFreezeTime = 0x1B0; // CParticleCollectionFloatInput
}

namespace C_OP_ExternalGameImpulseForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flForceScale = 0x1C0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bRopes = 0x310; // bool
    constexpr std::ptrdiff_t m_bRopesZOnly = 0x311; // bool
    constexpr std::ptrdiff_t m_bExplosions = 0x312; // bool
    constexpr std::ptrdiff_t m_bParticles = 0x313; // bool
}

namespace C_OP_ExternalWindForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_vecSamplePosition = 0x1C0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecScale = 0x7F0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_bSampleWind = 0xE20; // bool
    constexpr std::ptrdiff_t m_bSampleWater = 0xE21; // bool
    constexpr std::ptrdiff_t m_bDampenNearWaterPlane = 0xE22; // bool
    constexpr std::ptrdiff_t m_bSampleGravity = 0xE23; // bool
    constexpr std::ptrdiff_t m_vecGravityForce = 0xE28; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_bUseBasicMovementGravity = 0x1458; // bool
    constexpr std::ptrdiff_t m_flLocalGravityScale = 0x1460; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flLocalBuoyancyScale = 0x15B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecBuoyancyForce = 0x1700; // CPerParticleVecInput
}

namespace C_OP_FadeAndKill { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1B0; // float
    constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1B4; // float
    constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1B8; // float
    constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1BC; // float
    constexpr std::ptrdiff_t m_flStartAlpha = 0x1C0; // float
    constexpr std::ptrdiff_t m_flEndAlpha = 0x1C4; // float
    constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1C8; // bool
}

namespace C_OP_FadeAndKillForTracers { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1B0; // float
    constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1B4; // float
    constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1B8; // float
    constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1BC; // float
    constexpr std::ptrdiff_t m_flStartAlpha = 0x1C0; // float
    constexpr std::ptrdiff_t m_flEndAlpha = 0x1C4; // float
}

namespace C_OP_FadeIn { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFadeInTimeMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_flFadeInTimeMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_flFadeInTimeExp = 0x1B8; // float
    constexpr std::ptrdiff_t m_bProportional = 0x1BC; // bool
}

namespace C_OP_FadeInSimple { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFadeInTime = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

namespace C_OP_FadeOut { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFadeOutTimeMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_flFadeOutTimeMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_flFadeOutTimeExp = 0x1B8; // float
    constexpr std::ptrdiff_t m_flFadeBias = 0x1BC; // float
    constexpr std::ptrdiff_t m_bProportional = 0x1F0; // bool
    constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1F1; // bool
}

namespace C_OP_FadeOutSimple { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFadeOutTime = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

namespace C_OP_ForceBasedOnDistanceToPlane { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flMinDist = 0x1BC; // float
    constexpr std::ptrdiff_t m_vecForceAtMinDist = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_flMaxDist = 0x1CC; // float
    constexpr std::ptrdiff_t m_vecForceAtMaxDist = 0x1D0; // Vector
    constexpr std::ptrdiff_t m_vecPlaneNormal = 0x1DC; // Vector
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32_t
    constexpr std::ptrdiff_t m_flExponent = 0x1EC; // float
}

namespace C_OP_ForceControlPointStub { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_ControlPoint = 0x1B4; // int32_t
}

namespace C_OP_GlobalLight { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_bClampLowerRange = 0x1B4; // bool
    constexpr std::ptrdiff_t m_bClampUpperRange = 0x1B5; // bool
}

namespace C_OP_HSVShiftToCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nColorCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nColorGemEnableCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nOutputCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_DefaultHSVColor = 0x1C0; // Color
}

namespace C_OP_InheritFromParentParticles { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nIncrement = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bRandomDistribution = 0x1BC; // bool
}

namespace C_OP_InheritFromParentParticlesV2 { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nIncrement = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bRandomDistribution = 0x1BC; // bool
    constexpr std::ptrdiff_t m_nMissingParentBehavior = 0x1C0; // MissingParentInheritBehavior_t
}

namespace C_OP_InheritFromPeerSystem { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nIncrement = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nGroupID = 0x1BC; // int32_t
}

namespace C_OP_InstantaneousEmitter { // CParticleFunctionEmitter
    constexpr std::ptrdiff_t m_nParticlesToEmit = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flStartTime = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInitFromKilledParentParticles = 0x458; // float
    constexpr std::ptrdiff_t m_flParentParticleScale = 0x460; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nMaxEmittedPerFrame = 0x5B0; // int32_t
    constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x5B4; // int32_t
}

namespace C_OP_InterpolateRadius { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flStartTime = 0x1B0; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1B4; // float
    constexpr std::ptrdiff_t m_flStartScale = 0x1B8; // float
    constexpr std::ptrdiff_t m_flEndScale = 0x1BC; // float
    constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1C0; // bool
    constexpr std::ptrdiff_t m_flBias = 0x1C4; // float
}

namespace C_OP_LagCompensation { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nDesiredVelocityCP = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nLatencyCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nLatencyCPField = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nDesiredVelocityCPField = 0x1BC; // int32_t
}

namespace C_OP_LerpEndCapScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOutput = 0x1B4; // float
    constexpr std::ptrdiff_t m_flLerpTime = 0x1B8; // float
}

namespace C_OP_LerpEndCapVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecOutput = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_flLerpTime = 0x1C0; // float
}

namespace C_OP_LerpScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOutput = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flStartTime = 0x308; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x30C; // float
}

namespace C_OP_LerpToInitialPosition { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_flInterpolation = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nCacheField = 0x308; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x310; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vecScale = 0x460; // CParticleCollectionVecInput
}

namespace C_OP_LerpToOtherAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flInterpolation = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nFieldInputFrom = 0x300; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldInput = 0x304; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x308; // ParticleAttributeIndex_t
}

namespace C_OP_LerpVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecOutput = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0x1C0; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1C4; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1C8; // ParticleSetMethod_t
}

namespace C_OP_LightningSnapshotGenerator { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPSnapshot = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPStartPnt = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nCPEndPnt = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flSegments = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOffset = 0x310; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOffsetDecay = 0x460; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flRecalcRate = 0x5B0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flUVScale = 0x700; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flUVOffset = 0x850; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flSplitRate = 0x9A0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flBranchTwist = 0xAF0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nBranchBehavior = 0xC40; // ParticleLightnintBranchBehavior_t
    constexpr std::ptrdiff_t m_flRadiusStart = 0xC48; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flRadiusEnd = 0xD98; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flDedicatedPool = 0xEE8; // CParticleCollectionFloatInput
}

namespace C_OP_LocalAccelerationForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_nCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nScaleCP = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_vecAccel = 0x1C8; // CParticleCollectionVecInput
}

namespace C_OP_LockPoints { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nMinCol = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nMaxCol = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nMinRow = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nMaxRow = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nControlPoint = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_flBlendValue = 0x1C4; // float
}

namespace C_OP_LockToBone { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_modelInput = 0x1B0; // CParticleModelInput
    constexpr std::ptrdiff_t m_transformInput = 0x208; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x268; // float
    constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x26C; // float
    constexpr std::ptrdiff_t m_flJumpThreshold = 0x270; // float
    constexpr std::ptrdiff_t m_flPrevPosScale = 0x274; // float
    constexpr std::ptrdiff_t m_HitboxSetName = 0x278; // char[128]
    constexpr std::ptrdiff_t m_bRigid = 0x2F8; // bool
    constexpr std::ptrdiff_t m_bUseBones = 0x2F9; // bool
    constexpr std::ptrdiff_t m_nFieldOutput = 0x2FC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutputPrev = 0x300; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nRotationSetType = 0x304; // ParticleRotationLockType_t
    constexpr std::ptrdiff_t m_bRigidRotationLock = 0x308; // bool
    constexpr std::ptrdiff_t m_vecRotation = 0x310; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flRotLerp = 0x940; // CPerParticleFloatInput
}

namespace C_OP_LockToPointList { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
    constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1D0; // bool
    constexpr std::ptrdiff_t m_bClosedLoop = 0x1D1; // bool
    constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1D4; // int32_t
}

namespace C_OP_LockToSavedSequentialPath { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFadeStart = 0x1B4; // float
    constexpr std::ptrdiff_t m_flFadeEnd = 0x1B8; // float
    constexpr std::ptrdiff_t m_bCPPairs = 0x1BC; // bool
    constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
}

namespace C_OP_LockToSavedSequentialPathV2 { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flFadeStart = 0x1B0; // float
    constexpr std::ptrdiff_t m_flFadeEnd = 0x1B4; // float
    constexpr std::ptrdiff_t m_bCPPairs = 0x1B8; // bool
    constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
}

namespace C_OP_MaintainEmitter { // CParticleFunctionEmitter
    constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flStartTime = 0x308; // float
    constexpr std::ptrdiff_t m_flEmissionDuration = 0x310; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flEmissionRate = 0x460; // float
    constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x464; // int32_t
    constexpr std::ptrdiff_t m_bEmitInstantaneously = 0x468; // bool
    constexpr std::ptrdiff_t m_bFinalEmitOnStop = 0x469; // bool
    constexpr std::ptrdiff_t m_flScale = 0x470; // CParticleCollectionFloatInput
}

namespace C_OP_MaintainSequentialPath { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_fMaxDistance = 0x1B0; // float
    constexpr std::ptrdiff_t m_flNumToAssign = 0x1B4; // float
    constexpr std::ptrdiff_t m_flCohesionStrength = 0x1B8; // float
    constexpr std::ptrdiff_t m_flTolerance = 0x1BC; // float
    constexpr std::ptrdiff_t m_bLoop = 0x1C0; // bool
    constexpr std::ptrdiff_t m_bUseParticleCount = 0x1C1; // bool
    constexpr std::ptrdiff_t m_PathParams = 0x1D0; // CPathParameters
}

namespace C_OP_MaxVelocity { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flMaxVelocity = 0x1B0; // float
    constexpr std::ptrdiff_t m_flMinVelocity = 0x1B4; // float
    constexpr std::ptrdiff_t m_nOverrideCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nOverrideCPField = 0x1BC; // int32_t
}

namespace C_OP_ModelCull { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_bBoundBox = 0x1B4; // bool
    constexpr std::ptrdiff_t m_bCullOutside = 0x1B5; // bool
    constexpr std::ptrdiff_t m_bUseBones = 0x1B6; // bool
    constexpr std::ptrdiff_t m_HitboxSetName = 0x1B7; // char[128]
}

namespace C_OP_ModelDampenMovement { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_bBoundBox = 0x1B4; // bool
    constexpr std::ptrdiff_t m_bOutside = 0x1B5; // bool
    constexpr std::ptrdiff_t m_bUseBones = 0x1B6; // bool
    constexpr std::ptrdiff_t m_HitboxSetName = 0x1B7; // char[128]
    constexpr std::ptrdiff_t m_vecPosOffset = 0x238; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_fDrag = 0x868; // float
}

namespace C_OP_MoveToHitbox { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_modelInput = 0x1B0; // CParticleModelInput
    constexpr std::ptrdiff_t m_transformInput = 0x208; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flLifeTimeLerpStart = 0x26C; // float
    constexpr std::ptrdiff_t m_flLifeTimeLerpEnd = 0x270; // float
    constexpr std::ptrdiff_t m_flPrevPosScale = 0x274; // float
    constexpr std::ptrdiff_t m_HitboxSetName = 0x278; // char[128]
    constexpr std::ptrdiff_t m_bUseBones = 0x2F8; // bool
    constexpr std::ptrdiff_t m_nLerpType = 0x2FC; // HitboxLerpType_t
    constexpr std::ptrdiff_t m_flInterpolation = 0x300; // CPerParticleFloatInput
}

namespace C_OP_MovementLoopInsideSphere { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCP = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_flDistance = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vecScale = 0x308; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nDistSqrAttr = 0x938; // ParticleAttributeIndex_t
}

namespace C_OP_MovementMaintainOffset { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_vecOffset = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_nCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bRadiusScale = 0x1C0; // bool
}

namespace C_OP_MovementMoveAlongSkinnedCPSnapshot { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_bSetNormal = 0x1B8; // bool
    constexpr std::ptrdiff_t m_bSetRadius = 0x1B9; // bool
    constexpr std::ptrdiff_t m_flInterpolation = 0x1C0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flTValue = 0x310; // CPerParticleFloatInput
}

namespace C_OP_MovementPlaceOnGround { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flOffset = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x300; // float
    constexpr std::ptrdiff_t m_flTolerance = 0x304; // float
    constexpr std::ptrdiff_t m_flTraceOffset = 0x308; // float
    constexpr std::ptrdiff_t m_flLerpRate = 0x30C; // float
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x310; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x390; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_nRefCP1 = 0x394; // int32_t
    constexpr std::ptrdiff_t m_nRefCP2 = 0x398; // int32_t
    constexpr std::ptrdiff_t m_nLerpCP = 0x39C; // int32_t
    constexpr std::ptrdiff_t m_nTraceMissBehavior = 0x3A8; // ParticleTraceMissBehavior_t
    constexpr std::ptrdiff_t m_bIncludeShotHull = 0x3AC; // bool
    constexpr std::ptrdiff_t m_bIncludeWater = 0x3AD; // bool
    constexpr std::ptrdiff_t m_bSetNormal = 0x3B0; // bool
    constexpr std::ptrdiff_t m_bScaleOffset = 0x3B1; // bool
    constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0x3B4; // int32_t
    constexpr std::ptrdiff_t m_nIgnoreCP = 0x3B8; // int32_t
}

namespace C_OP_MovementRigidAttachToCP { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nScaleCPField = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bOffsetLocal = 0x1C4; // bool
}

namespace C_OP_MovementRotateParticleAroundAxis { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_vecRotAxis = 0x1B0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flRotRate = 0x7E0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_TransformInput = 0x930; // CParticleTransformInput
    constexpr std::ptrdiff_t m_bLocalSpace = 0x990; // bool
}

namespace C_OP_MovementSkinnedPositionFromCPSnapshot { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_bRandom = 0x1B8; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bSetNormal = 0x1C0; // bool
    constexpr std::ptrdiff_t m_bSetRadius = 0x1C1; // bool
    constexpr std::ptrdiff_t m_nIndexType = 0x1C4; // SnapshotIndexType_t
    constexpr std::ptrdiff_t m_flReadIndex = 0x1C8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flIncrement = 0x318; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x468; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x5B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInterpolation = 0x708; // CPerParticleFloatInput
}

namespace C_OP_Noise { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOutputMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1BC; // float
    constexpr std::ptrdiff_t m_bAdditive = 0x1C0; // bool
    constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1C4; // float
}

namespace C_OP_NoiseEmitter { // CParticleFunctionEmitter
    constexpr std::ptrdiff_t m_flEmissionDuration = 0x1B4; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x1B8; // float
    constexpr std::ptrdiff_t m_flEmissionScale = 0x1BC; // float
    constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_nWorldNoisePoint = 0x1C8; // int32_t
    constexpr std::ptrdiff_t m_bAbsVal = 0x1CC; // bool
    constexpr std::ptrdiff_t m_bAbsValInv = 0x1CD; // bool
    constexpr std::ptrdiff_t m_flOffset = 0x1D0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1D4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1D8; // float
    constexpr std::ptrdiff_t m_flNoiseScale = 0x1DC; // float
    constexpr std::ptrdiff_t m_flWorldNoiseScale = 0x1E0; // float
    constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1E4; // Vector
    constexpr std::ptrdiff_t m_flWorldTimeScale = 0x1F0; // float
}

namespace C_OP_NormalLock { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
}

namespace C_OP_NormalizeVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x1B4; // float
}

namespace C_OP_Orient2DRelToCP { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flRotOffset = 0x1B0; // float
    constexpr std::ptrdiff_t m_flSpinStrength = 0x1B4; // float
    constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
}

namespace C_OP_OrientTo2dDirection { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flRotOffset = 0x1B0; // float
    constexpr std::ptrdiff_t m_flSpinStrength = 0x1B4; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
}

namespace C_OP_OscillateScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_RateMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_RateMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_FrequencyMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_FrequencyMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_nField = 0x1C0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bProportional = 0x1C4; // bool
    constexpr std::ptrdiff_t m_bProportionalOp = 0x1C5; // bool
    constexpr std::ptrdiff_t m_flStartTime_min = 0x1C8; // float
    constexpr std::ptrdiff_t m_flStartTime_max = 0x1CC; // float
    constexpr std::ptrdiff_t m_flEndTime_min = 0x1D0; // float
    constexpr std::ptrdiff_t m_flEndTime_max = 0x1D4; // float
    constexpr std::ptrdiff_t m_flOscMult = 0x1D8; // float
    constexpr std::ptrdiff_t m_flOscAdd = 0x1DC; // float
}

namespace C_OP_OscillateScalarSimple { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_Rate = 0x1B0; // float
    constexpr std::ptrdiff_t m_Frequency = 0x1B4; // float
    constexpr std::ptrdiff_t m_nField = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOscMult = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOscAdd = 0x1C0; // float
}

namespace C_OP_OscillateVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_RateMin = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_RateMax = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_FrequencyMin = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_FrequencyMax = 0x1D4; // Vector
    constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bProportional = 0x1E4; // bool
    constexpr std::ptrdiff_t m_bProportionalOp = 0x1E5; // bool
    constexpr std::ptrdiff_t m_bOffset = 0x1E6; // bool
    constexpr std::ptrdiff_t m_flStartTime_min = 0x1E8; // float
    constexpr std::ptrdiff_t m_flStartTime_max = 0x1EC; // float
    constexpr std::ptrdiff_t m_flEndTime_min = 0x1F0; // float
    constexpr std::ptrdiff_t m_flEndTime_max = 0x1F4; // float
    constexpr std::ptrdiff_t m_flOscMult = 0x1F8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOscAdd = 0x348; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRateScale = 0x498; // CPerParticleFloatInput
}

namespace C_OP_OscillateVectorSimple { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_Rate = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_Frequency = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_nField = 0x1C8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOscMult = 0x1CC; // float
    constexpr std::ptrdiff_t m_flOscAdd = 0x1D0; // float
    constexpr std::ptrdiff_t m_bOffset = 0x1D4; // bool
}

namespace C_OP_ParentVortices { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flForceScale = 0x1BC; // float
    constexpr std::ptrdiff_t m_vecTwistAxis = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_bFlipBasedOnYaw = 0x1CC; // bool
}

namespace C_OP_ParticlePhysics { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_Gravity = 0x1B0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_fDrag = 0x7E0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nMaxConstraintPasses = 0x930; // int32_t
}

namespace C_OP_PerParticleForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flForceScale = 0x1C0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vForce = 0x310; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nCP = 0x940; // int32_t
}

namespace C_OP_PercentageBetweenTransformLerpCPs { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_TransformStart = 0x1C0; // CParticleTransformInput
    constexpr std::ptrdiff_t m_TransformEnd = 0x220; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nOutputStartCP = 0x280; // int32_t
    constexpr std::ptrdiff_t m_nOutputStartField = 0x284; // int32_t
    constexpr std::ptrdiff_t m_nOutputEndCP = 0x288; // int32_t
    constexpr std::ptrdiff_t m_nOutputEndField = 0x28C; // int32_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x290; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x294; // bool
    constexpr std::ptrdiff_t m_bRadialCheck = 0x295; // bool
}

namespace C_OP_PercentageBetweenTransforms { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_TransformStart = 0x1C8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_TransformEnd = 0x228; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nSetMethod = 0x288; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x28C; // bool
    constexpr std::ptrdiff_t m_bRadialCheck = 0x28D; // bool
}

namespace C_OP_PercentageBetweenTransformsVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_vecOutputMin = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_TransformStart = 0x1D8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_TransformEnd = 0x238; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nSetMethod = 0x298; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x29C; // bool
    constexpr std::ptrdiff_t m_bRadialCheck = 0x29D; // bool
}

namespace C_OP_PinParticleToCP { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_vecOffset = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_bOffsetLocal = 0x7E8; // bool
    constexpr std::ptrdiff_t m_nParticleSelection = 0x7EC; // ParticleSelection_t
    constexpr std::ptrdiff_t m_nParticleNumber = 0x7F0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nPinBreakType = 0x940; // ParticlePinDistance_t
    constexpr std::ptrdiff_t m_flBreakDistance = 0x948; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flBreakSpeed = 0xA98; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flAge = 0xBE8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nBreakControlPointNumber = 0xD38; // int32_t
    constexpr std::ptrdiff_t m_nBreakControlPointNumber2 = 0xD3C; // int32_t
    constexpr std::ptrdiff_t m_flBreakValue = 0xD40; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInterpolation = 0xE90; // CPerParticleFloatInput
}

namespace C_OP_PlanarConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_PointOnPlane = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_PlaneNormal = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C8; // int32_t
    constexpr std::ptrdiff_t m_bGlobalOrigin = 0x1CC; // bool
    constexpr std::ptrdiff_t m_bGlobalNormal = 0x1CD; // bool
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1D0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMaximumDistanceToCP = 0x320; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bUseOldCode = 0x470; // bool
}

namespace C_OP_PlaneCull { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nPlaneControlPoint = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_vecPlaneDirection = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_bLocalSpace = 0x1C0; // bool
    constexpr std::ptrdiff_t m_flPlaneOffset = 0x1C4; // float
}

namespace C_OP_PlayEndCapWhenFinished { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_bFireOnEmissionEnd = 0x1B1; // bool
    constexpr std::ptrdiff_t m_bIncludeChildren = 0x1B2; // bool
}

namespace C_OP_PointVectorAtNextParticle { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInterpolation = 0x1B8; // CPerParticleFloatInput
}

namespace C_OP_PositionLock { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_TransformInput = 0x1B0; // CParticleTransformInput
    constexpr std::ptrdiff_t m_flStartTime_min = 0x210; // float
    constexpr std::ptrdiff_t m_flStartTime_max = 0x214; // float
    constexpr std::ptrdiff_t m_flStartTime_exp = 0x218; // float
    constexpr std::ptrdiff_t m_flEndTime_min = 0x21C; // float
    constexpr std::ptrdiff_t m_flEndTime_max = 0x220; // float
    constexpr std::ptrdiff_t m_flEndTime_exp = 0x224; // float
    constexpr std::ptrdiff_t m_flRange = 0x228; // float
    constexpr std::ptrdiff_t m_flRangeBias = 0x230; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flJumpThreshold = 0x380; // float
    constexpr std::ptrdiff_t m_flPrevPosScale = 0x384; // float
    constexpr std::ptrdiff_t m_bLockRot = 0x388; // bool
    constexpr std::ptrdiff_t m_vecScale = 0x390; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x9C0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutputPrev = 0x9C4; // ParticleAttributeIndex_t
}

namespace C_OP_QuantizeCPComponent { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_flInputValue = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nCPOutput = 0x308; // int32_t
    constexpr std::ptrdiff_t m_nOutVectorField = 0x30C; // int32_t
    constexpr std::ptrdiff_t m_flQuantizeValue = 0x310; // CParticleCollectionFloatInput
}

namespace C_OP_QuantizeFloat { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_InputValue = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x300; // ParticleAttributeIndex_t
}

namespace C_OP_RadiusDecay { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flMinRadius = 0x1B0; // float
}

namespace C_OP_RampCPLinearRandom { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_vecRateMin = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_vecRateMax = 0x1C4; // Vector
}

namespace C_OP_RampScalarLinear { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_RateMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_RateMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_flStartTime_min = 0x1B8; // float
    constexpr std::ptrdiff_t m_flStartTime_max = 0x1BC; // float
    constexpr std::ptrdiff_t m_flEndTime_min = 0x1C0; // float
    constexpr std::ptrdiff_t m_flEndTime_max = 0x1C4; // float
    constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bProportionalOp = 0x1F4; // bool
}

namespace C_OP_RampScalarLinearSimple { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_Rate = 0x1B0; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x1B4; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1B8; // float
    constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
}

namespace C_OP_RampScalarSpline { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_RateMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_RateMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_flStartTime_min = 0x1B8; // float
    constexpr std::ptrdiff_t m_flStartTime_max = 0x1BC; // float
    constexpr std::ptrdiff_t m_flEndTime_min = 0x1C0; // float
    constexpr std::ptrdiff_t m_flEndTime_max = 0x1C4; // float
    constexpr std::ptrdiff_t m_flBias = 0x1C8; // float
    constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bProportionalOp = 0x1F4; // bool
    constexpr std::ptrdiff_t m_bEaseOut = 0x1F5; // bool
}

namespace C_OP_RampScalarSplineSimple { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_Rate = 0x1B0; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x1B4; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1B8; // float
    constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bEaseOut = 0x1E4; // bool
}

namespace C_OP_RandomForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_MinForce = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_MaxForce = 0x1C8; // Vector
}

namespace C_OP_ReadFromNeighboringParticle { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nIncrement = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_DistanceCheck = 0x1C0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInterpolation = 0x310; // CPerParticleFloatInput
}

namespace C_OP_ReinitializeScalarEndCap { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOutputMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1B8; // float
}

namespace C_OP_RemapAverageHitboxSpeedtoCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nField = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nHitboxDataType = 0x1C0; // ParticleHitboxDataSelection_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x318; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x468; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nHeightControlPointNumber = 0x708; // int32_t
    constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x710; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_HitboxSetName = 0xD40; // char[128]
}

namespace C_OP_RemapAverageScalarValuetoCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOutVectorField = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nField = 0x1BC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float
}

namespace C_OP_RemapBoundingVolumetoCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float
}

namespace C_OP_RemapCPVelocityToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPoint = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x1B8; // float
    constexpr std::ptrdiff_t m_bNormalize = 0x1BC; // bool
}

namespace C_OP_RemapCPtoCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nInputControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nInputField = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nOutputField = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float
    constexpr std::ptrdiff_t m_bDerivative = 0x1D4; // bool
    constexpr std::ptrdiff_t m_flInterpRate = 0x1D8; // float
}

namespace C_OP_RemapCPtoScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCPInput = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nField = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x1CC; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1D0; // float
    constexpr std::ptrdiff_t m_flInterpRate = 0x1D4; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
}

namespace C_OP_RemapCPtoVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCPInput = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_vInputMin = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_vInputMax = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_vOutputMin = 0x1D4; // Vector
    constexpr std::ptrdiff_t m_vOutputMax = 0x1E0; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0x1EC; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x1F0; // float
    constexpr std::ptrdiff_t m_flInterpRate = 0x1F4; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1F8; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bOffset = 0x1FC; // bool
    constexpr std::ptrdiff_t m_bAccelerate = 0x1FD; // bool
}

namespace C_OP_RemapControlPointDirectionToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32_t
}

namespace C_OP_RemapControlPointOrientationToRotation { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCP = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flOffsetRot = 0x1B8; // float
    constexpr std::ptrdiff_t m_nComponent = 0x1BC; // int32_t
}

namespace C_OP_RemapCrossProductOfTwoVectorsToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_InputVec1 = 0x1B0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_InputVec2 = 0x7E0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0xE10; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bNormalize = 0xE14; // bool
}

namespace C_OP_RemapDensityGradientToVectorAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

namespace C_OP_RemapDensityToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flDensityMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_flDensityMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_vecOutputMin = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x1CC; // Vector
    constexpr std::ptrdiff_t m_bUseParentDensity = 0x1D8; // bool
    constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1DC; // int32_t
}

namespace C_OP_RemapDirectionToCPToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCP = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x1B8; // float
    constexpr std::ptrdiff_t m_flOffsetRot = 0x1BC; // float
    constexpr std::ptrdiff_t m_vecOffsetAxis = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_bNormalize = 0x1CC; // bool
    constexpr std::ptrdiff_t m_nFieldStrength = 0x1D0; // ParticleAttributeIndex_t
}

namespace C_OP_RemapDistanceToLineSegmentBase { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCP0 = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flMinInputValue = 0x1B8; // float
    constexpr std::ptrdiff_t m_flMaxInputValue = 0x1BC; // float
    constexpr std::ptrdiff_t m_bInfiniteLine = 0x1C0; // bool
}

namespace C_OP_RemapDistanceToLineSegmentToScalar { // C_OP_RemapDistanceToLineSegmentBase
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flMinOutputValue = 0x1C8; // float
    constexpr std::ptrdiff_t m_flMaxOutputValue = 0x1CC; // float
}

namespace C_OP_RemapDistanceToLineSegmentToVector { // C_OP_RemapDistanceToLineSegmentBase
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vMinOutputValue = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_vMaxOutputValue = 0x1D4; // Vector
}

namespace C_OP_RemapDotProductToCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nInputCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nInputCP2 = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nOutputCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nOutVectorField = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInputMax = 0x318; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x468; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5B8; // CParticleCollectionFloatInput
}

namespace C_OP_RemapDotProductToScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nInputCP1 = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nInputCP2 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_bUseParticleVelocity = 0x1CC; // bool
    constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bActiveRange = 0x1D4; // bool
    constexpr std::ptrdiff_t m_bUseParticleNormal = 0x1D5; // bool
}

namespace C_OP_RemapExternalWindToCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPOutput = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_vecScale = 0x1C0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_bSetMagnitude = 0x7F0; // bool
    constexpr std::ptrdiff_t m_nOutVectorField = 0x7F4; // int32_t
}

namespace C_OP_RemapModelVolumetoCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nBBoxType = 0x1B4; // BBoxVolumeType_t
    constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nOutControlPointMaxNumber = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nField = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float
}

namespace C_OP_RemapNamedModelBodyPartEndCap { // C_OP_RemapNamedModelElementEndCap
}

namespace C_OP_RemapNamedModelBodyPartOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

namespace C_OP_RemapNamedModelElementEndCap { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_hModel = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_inNames = 0x1B8; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_outNames = 0x1D0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_fallbackNames = 0x1E8; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_bModelFromRenderer = 0x200; // bool
    constexpr std::ptrdiff_t m_nFieldInput = 0x204; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x208; // ParticleAttributeIndex_t
}

namespace C_OP_RemapNamedModelElementOnceTimed { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_hModel = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_inNames = 0x1B8; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_outNames = 0x1D0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_fallbackNames = 0x1E8; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_bModelFromRenderer = 0x200; // bool
    constexpr std::ptrdiff_t m_bProportional = 0x201; // bool
    constexpr std::ptrdiff_t m_nFieldInput = 0x204; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x208; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flRemapTime = 0x20C; // float
}

namespace C_OP_RemapNamedModelMeshGroupEndCap { // C_OP_RemapNamedModelElementEndCap
}

namespace C_OP_RemapNamedModelMeshGroupOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

namespace C_OP_RemapNamedModelSequenceEndCap { // C_OP_RemapNamedModelElementEndCap
}

namespace C_OP_RemapNamedModelSequenceOnceTimed { // C_OP_RemapNamedModelElementOnceTimed
}

namespace C_OP_RemapParticleCountOnScalarEndCap { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nInputMin = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nInputMax = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_bBackwards = 0x1C4; // bool
    constexpr std::ptrdiff_t m_nSetMethod = 0x1C8; // ParticleSetMethod_t
}

namespace C_OP_RemapParticleCountToScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nInputMin = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nInputMax = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputMin = 0x458; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputMax = 0x5A8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bActiveRange = 0x6F8; // bool
    constexpr std::ptrdiff_t m_nSetMethod = 0x6FC; // ParticleSetMethod_t
}

namespace C_OP_RemapSDFDistanceToScalarAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVectorFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flMinDistance = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flMaxDistance = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flValueBelowMin = 0x458; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flValueAtMin = 0x5A8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flValueAtMax = 0x6F8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flValueAboveMax = 0x848; // CParticleCollectionFloatInput
}

namespace C_OP_RemapSDFDistanceToVectorAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nVectorFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVectorFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flMinDistance = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flMaxDistance = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vValueBelowMin = 0x458; // Vector
    constexpr std::ptrdiff_t m_vValueAtMin = 0x464; // Vector
    constexpr std::ptrdiff_t m_vValueAtMax = 0x470; // Vector
    constexpr std::ptrdiff_t m_vValueAboveMax = 0x47C; // Vector
}

namespace C_OP_RemapSDFGradientToVectorAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
}

namespace C_OP_RemapScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_bOldCode = 0x1C8; // bool
}

namespace C_OP_RemapScalarEndCap { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float
}

namespace C_OP_RemapScalarOnceTimed { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_bProportional = 0x1B0; // bool
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_flRemapTime = 0x1CC; // float
}

namespace C_OP_RemapSpeed { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B4; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1B8; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1C4; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1C8; // bool
}

namespace C_OP_RemapSpeedtoCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nField = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float
    constexpr std::ptrdiff_t m_bUseDeltaV = 0x1D0; // bool
}

namespace C_OP_RemapTransformOrientationToRotations { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_TransformInput = 0x1B0; // CParticleTransformInput
    constexpr std::ptrdiff_t m_vecRotation = 0x210; // Vector
    constexpr std::ptrdiff_t m_bUseQuat = 0x21C; // bool
    constexpr std::ptrdiff_t m_bWriteNormal = 0x21D; // bool
}

namespace C_OP_RemapTransformOrientationToYaw { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_TransformInput = 0x1B0; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x210; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flRotOffset = 0x214; // float
    constexpr std::ptrdiff_t m_flSpinStrength = 0x218; // float
}

namespace C_OP_RemapTransformToVelocity { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_TransformInput = 0x1B0; // CParticleTransformInput
}

namespace C_OP_RemapTransformVisibilityToScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nSetMethod = 0x1B0; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x21C; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x220; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x224; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x228; // float
    constexpr std::ptrdiff_t m_flRadius = 0x22C; // float
}

namespace C_OP_RemapTransformVisibilityToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nSetMethod = 0x1B0; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x21C; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x220; // float
    constexpr std::ptrdiff_t m_vecOutputMin = 0x224; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x230; // Vector
    constexpr std::ptrdiff_t m_flRadius = 0x23C; // float
}

namespace C_OP_RemapVectorComponentToScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nComponent = 0x1B8; // int32_t
}

namespace C_OP_RemapVectortoCP { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nParticleNumber = 0x1B8; // int32_t
}

namespace C_OP_RemapVelocityToVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_bNormalize = 0x1B8; // bool
}

namespace C_OP_RemapVisibilityScalar { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C4; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1C8; // float
}

namespace C_OP_RenderAsModels { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_ModelList = 0x1F8; // CUtlVector<ModelReference_t>
    constexpr std::ptrdiff_t m_flModelScale = 0x214; // float
    constexpr std::ptrdiff_t m_bFitToModelSize = 0x218; // bool
    constexpr std::ptrdiff_t m_bNonUniformScaling = 0x219; // bool
    constexpr std::ptrdiff_t m_nXAxisScalingAttribute = 0x21C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nYAxisScalingAttribute = 0x220; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nZAxisScalingAttribute = 0x224; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSizeCullBloat = 0x228; // int32_t
}

namespace C_OP_RenderBlobs { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_cubeWidth = 0x1F8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_cutoffRadius = 0x348; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_renderRadius = 0x498; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nScaleCP = 0x5E8; // int32_t
    constexpr std::ptrdiff_t m_MaterialVars = 0x5F0; // CUtlVector<MaterialVariable_t>
    constexpr std::ptrdiff_t m_hMaterial = 0x620; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

namespace C_OP_RenderCables { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1F8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flAlphaScale = 0x348; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vecColorScale = 0x498; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0xAC8; // ParticleColorBlendType_t
    constexpr std::ptrdiff_t m_hMaterial = 0xAD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nTextureRepetitionMode = 0xAD8; // TextureRepetitionMode_t
    constexpr std::ptrdiff_t m_flTextureRepeatsPerSegment = 0xAE0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flTextureRepeatsCircumference = 0xC30; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flColorMapOffsetV = 0xD80; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flColorMapOffsetU = 0xED0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flNormalMapOffsetV = 0x1020; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flNormalMapOffsetU = 0x1170; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bDrawCableCaps = 0x12C0; // bool
    constexpr std::ptrdiff_t m_flCapRoundness = 0x12C4; // float
    constexpr std::ptrdiff_t m_flCapOffsetAmount = 0x12C8; // float
    constexpr std::ptrdiff_t m_flTessScale = 0x12CC; // float
    constexpr std::ptrdiff_t m_nMinTesselation = 0x12D0; // int32_t
    constexpr std::ptrdiff_t m_nMaxTesselation = 0x12D4; // int32_t
    constexpr std::ptrdiff_t m_nRoundness = 0x12D8; // int32_t
    constexpr std::ptrdiff_t m_LightingTransform = 0x12E0; // CParticleTransformInput
    constexpr std::ptrdiff_t m_MaterialFloatVars = 0x1340; // CUtlVector<FloatInputMaterialVariable_t>
    constexpr std::ptrdiff_t m_MaterialVecVars = 0x1370; // CUtlVector<VecInputMaterialVariable_t>
}

namespace C_OP_RenderClothForce { // CParticleFunctionRenderer
}

namespace C_OP_RenderDeferredLight { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_bUseAlphaTestWindow = 0x1F6; // bool
    constexpr std::ptrdiff_t m_bUseTexture = 0x1F7; // bool
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1F8; // float
    constexpr std::ptrdiff_t m_flAlphaScale = 0x1FC; // float
    constexpr std::ptrdiff_t m_nAlpha2Field = 0x200; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecColorScale = 0x208; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0x838; // ParticleColorBlendType_t
    constexpr std::ptrdiff_t m_flLightDistance = 0x83C; // float
    constexpr std::ptrdiff_t m_flStartFalloff = 0x840; // float
    constexpr std::ptrdiff_t m_flDistanceFalloff = 0x844; // float
    constexpr std::ptrdiff_t m_flSpotFoV = 0x848; // float
    constexpr std::ptrdiff_t m_nAlphaTestPointField = 0x84C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAlphaTestRangeField = 0x850; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAlphaTestSharpnessField = 0x854; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_hTexture = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x860; // int32_t
}

namespace C_OP_RenderFlattenGrass { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flFlattenStrength = 0x1F8; // float
    constexpr std::ptrdiff_t m_nStrengthFieldOverride = 0x1FC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flRadiusScale = 0x200; // float
}

namespace C_OP_RenderGpuImplicit { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_bUsePerParticleRadius = 0x1F6; // bool
    constexpr std::ptrdiff_t m_fGridSize = 0x1F8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_fRadiusScale = 0x348; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_fIsosurfaceThreshold = 0x498; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nScaleCP = 0x5E8; // int32_t
    constexpr std::ptrdiff_t m_hMaterial = 0x5F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

namespace C_OP_RenderLightBeam { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_vColorBlend = 0x1F8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0x828; // ParticleColorBlendType_t
    constexpr std::ptrdiff_t m_flBrightnessLumensPerMeter = 0x830; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bCastShadows = 0x980; // bool
    constexpr std::ptrdiff_t m_flSkirt = 0x988; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flRange = 0xAD8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flThickness = 0xC28; // CParticleCollectionFloatInput
}

namespace C_OP_RenderLights { // C_OP_RenderPoints
    constexpr std::ptrdiff_t m_flAnimationRate = 0x200; // float
    constexpr std::ptrdiff_t m_nAnimationType = 0x204; // AnimationType_t
    constexpr std::ptrdiff_t m_bAnimateInFPS = 0x208; // bool
    constexpr std::ptrdiff_t m_flMinSize = 0x20C; // float
    constexpr std::ptrdiff_t m_flMaxSize = 0x210; // float
    constexpr std::ptrdiff_t m_flStartFadeSize = 0x214; // float
    constexpr std::ptrdiff_t m_flEndFadeSize = 0x218; // float
}

namespace C_OP_RenderMaterialProxy { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_nMaterialControlPoint = 0x1F8; // int32_t
    constexpr std::ptrdiff_t m_nProxyType = 0x1FC; // MaterialProxyType_t
    constexpr std::ptrdiff_t m_MaterialVars = 0x200; // CUtlVector<MaterialVariable_t>
    constexpr std::ptrdiff_t m_hOverrideMaterial = 0x218; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_flMaterialOverrideEnabled = 0x220; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vecColorScale = 0x370; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flAlpha = 0x9A0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0xAF0; // ParticleColorBlendType_t
}

namespace C_OP_RenderModels { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x1F6; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x1F7; // bool
    constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x1F8; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x1F9; // bool
    constexpr std::ptrdiff_t m_ModelList = 0x200; // CUtlVector<ModelReference_t>
    constexpr std::ptrdiff_t m_nBodyGroupField = 0x21C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSubModelField = 0x220; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bIgnoreNormal = 0x224; // bool
    constexpr std::ptrdiff_t m_bOrientZ = 0x225; // bool
    constexpr std::ptrdiff_t m_bCenterOffset = 0x226; // bool
    constexpr std::ptrdiff_t m_vecLocalOffset = 0x228; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vecLocalRotation = 0x858; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_bIgnoreRadius = 0xE88; // bool
    constexpr std::ptrdiff_t m_nModelScaleCP = 0xE8C; // int32_t
    constexpr std::ptrdiff_t m_vecComponentScale = 0xE90; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_bLocalScale = 0x14C0; // bool
    constexpr std::ptrdiff_t m_nSizeCullBloat = 0x14C4; // int32_t
    constexpr std::ptrdiff_t m_bAnimated = 0x14C8; // bool
    constexpr std::ptrdiff_t m_flAnimationRate = 0x14D0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bScaleAnimationRate = 0x1620; // bool
    constexpr std::ptrdiff_t m_bForceLoopingAnimation = 0x1621; // bool
    constexpr std::ptrdiff_t m_bResetAnimOnStop = 0x1622; // bool
    constexpr std::ptrdiff_t m_bManualAnimFrame = 0x1623; // bool
    constexpr std::ptrdiff_t m_nAnimationScaleField = 0x1624; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAnimationField = 0x1628; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nManualFrameField = 0x162C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_ActivityName = 0x1630; // char[256]
    constexpr std::ptrdiff_t m_SequenceName = 0x1730; // char[256]
    constexpr std::ptrdiff_t m_bEnableClothSimulation = 0x1830; // bool
    constexpr std::ptrdiff_t m_hOverrideMaterial = 0x1838; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_bOverrideTranslucentMaterials = 0x1840; // bool
    constexpr std::ptrdiff_t m_nSkin = 0x1848; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_MaterialVars = 0x1998; // CUtlVector<MaterialVariable_t>
    constexpr std::ptrdiff_t m_flManualModelSelection = 0x19B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_modelInput = 0x1B00; // CParticleModelInput
    constexpr std::ptrdiff_t m_nLOD = 0x1B58; // int32_t
    constexpr std::ptrdiff_t m_EconSlotName = 0x1B5C; // char[256]
    constexpr std::ptrdiff_t m_bOriginalModel = 0x1C5C; // bool
    constexpr std::ptrdiff_t m_bSuppressTint = 0x1C5D; // bool
    constexpr std::ptrdiff_t m_bUseRawMeshGroup = 0x1C5E; // bool
    constexpr std::ptrdiff_t m_bDisableShadows = 0x1C5F; // bool
    constexpr std::ptrdiff_t m_bDisableDepthPrepass = 0x1C60; // bool
    constexpr std::ptrdiff_t m_bAcceptsDecals = 0x1C61; // bool
    constexpr std::ptrdiff_t m_bForceDrawInterlevedWithSiblings = 0x1C62; // bool
    constexpr std::ptrdiff_t m_bDoNotDrawInParticlePass = 0x1C63; // bool
    constexpr std::ptrdiff_t m_bUseFastModelCollectionRenderPath = 0x1C64; // bool
    constexpr std::ptrdiff_t m_bAllowApproximateTransforms = 0x1C65; // bool
    constexpr std::ptrdiff_t m_szRenderAttribute = 0x1C66; // char[4096]
    constexpr std::ptrdiff_t m_flRadiusScale = 0x2C68; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flAlphaScale = 0x2DB8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flRollScale = 0x2F08; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nAlpha2Field = 0x3058; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecColorScale = 0x3060; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0x3690; // ParticleColorBlendType_t
}

namespace C_OP_RenderOmni2Light { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_nLightType = 0x1F8; // ParticleOmni2LightTypeChoiceList_t
    constexpr std::ptrdiff_t m_vColorBlend = 0x200; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0x830; // ParticleColorBlendType_t
    constexpr std::ptrdiff_t m_nBrightnessUnit = 0x834; // ParticleLightUnitChoiceList_t
    constexpr std::ptrdiff_t m_flBrightnessLumens = 0x838; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flBrightnessCandelas = 0x988; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bCastShadows = 0xAD8; // bool
    constexpr std::ptrdiff_t m_flLuminaireRadius = 0xAE0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flSkirt = 0xC30; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRange = 0xD80; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInnerConeAngle = 0xED0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOuterConeAngle = 0x1020; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_hLightCookie = 0x1170; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bSphericalCookie = 0x1178; // bool
}

namespace C_OP_RenderPoints { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_hMaterial = 0x1F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

namespace C_OP_RenderPostProcessing { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flPostProcessStrength = 0x1F8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_hPostTexture = 0x348; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    constexpr std::ptrdiff_t m_nPriority = 0x350; // ParticlePostProcessPriorityGroup_t
}

namespace C_OP_RenderProjected { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_bProjectCharacter = 0x1F6; // bool
    constexpr std::ptrdiff_t m_bProjectWorld = 0x1F7; // bool
    constexpr std::ptrdiff_t m_bProjectWater = 0x1F8; // bool
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0x1F9; // bool
    constexpr std::ptrdiff_t m_bEnableProjectedDepthControls = 0x1FA; // bool
    constexpr std::ptrdiff_t m_flMinProjectionDepth = 0x1FC; // float
    constexpr std::ptrdiff_t m_flMaxProjectionDepth = 0x200; // float
    constexpr std::ptrdiff_t m_vecProjectedMaterials = 0x208; // CUtlVector<RenderProjectedMaterial_t>
    constexpr std::ptrdiff_t m_flMaterialSelection = 0x220; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flAnimationTimeScale = 0x370; // float
    constexpr std::ptrdiff_t m_bOrientToNormal = 0x374; // bool
    constexpr std::ptrdiff_t m_MaterialVars = 0x378; // CUtlVector<MaterialVariable_t>
}

namespace C_OP_RenderRopes { // CBaseRendererSource2
    constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x2638; // bool
    constexpr std::ptrdiff_t m_flMinSize = 0x263C; // float
    constexpr std::ptrdiff_t m_flMaxSize = 0x2640; // float
    constexpr std::ptrdiff_t m_flStartFadeSize = 0x2644; // float
    constexpr std::ptrdiff_t m_flEndFadeSize = 0x2648; // float
    constexpr std::ptrdiff_t m_flStartFadeDot = 0x264C; // float
    constexpr std::ptrdiff_t m_flEndFadeDot = 0x2650; // float
    constexpr std::ptrdiff_t m_flRadiusTaper = 0x2654; // float
    constexpr std::ptrdiff_t m_nMinTesselation = 0x2658; // int32_t
    constexpr std::ptrdiff_t m_nMaxTesselation = 0x265C; // int32_t
    constexpr std::ptrdiff_t m_flTessScale = 0x2660; // float
    constexpr std::ptrdiff_t m_flTextureVWorldSize = 0x2668; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flTextureVScrollRate = 0x27B8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flTextureVOffset = 0x2908; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nTextureVParamsCP = 0x2A58; // int32_t
    constexpr std::ptrdiff_t m_bClampV = 0x2A5C; // bool
    constexpr std::ptrdiff_t m_nScaleCP1 = 0x2A60; // int32_t
    constexpr std::ptrdiff_t m_nScaleCP2 = 0x2A64; // int32_t
    constexpr std::ptrdiff_t m_flScaleVSizeByControlPointDistance = 0x2A68; // float
    constexpr std::ptrdiff_t m_flScaleVScrollByControlPointDistance = 0x2A6C; // float
    constexpr std::ptrdiff_t m_flScaleVOffsetByControlPointDistance = 0x2A70; // float
    constexpr std::ptrdiff_t m_bUseScalarForTextureCoordinate = 0x2A75; // bool
    constexpr std::ptrdiff_t m_nScalarFieldForTextureCoordinate = 0x2A78; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScalarAttributeTextureCoordScale = 0x2A7C; // float
    constexpr std::ptrdiff_t m_bReverseOrder = 0x2A80; // bool
    constexpr std::ptrdiff_t m_bClosedLoop = 0x2A81; // bool
    constexpr std::ptrdiff_t m_nOrientationType = 0x2A84; // ParticleOrientationChoiceList_t
    constexpr std::ptrdiff_t m_nVectorFieldForOrientation = 0x2A88; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bDrawAsOpaque = 0x2A8C; // bool
    constexpr std::ptrdiff_t m_bGenerateNormals = 0x2A8D; // bool
}

namespace C_OP_RenderScreenShake { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flDurationScale = 0x1F8; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1FC; // float
    constexpr std::ptrdiff_t m_flFrequencyScale = 0x200; // float
    constexpr std::ptrdiff_t m_flAmplitudeScale = 0x204; // float
    constexpr std::ptrdiff_t m_nRadiusField = 0x208; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nDurationField = 0x20C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFrequencyField = 0x210; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAmplitudeField = 0x214; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFilterCP = 0x218; // int32_t
}

namespace C_OP_RenderScreenVelocityRotate { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flRotateRateDegrees = 0x1F8; // float
    constexpr std::ptrdiff_t m_flForwardDegrees = 0x1FC; // float
}

namespace C_OP_RenderSimpleModelCollection { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_bCenterOffset = 0x1F6; // bool
    constexpr std::ptrdiff_t m_modelInput = 0x1F8; // CParticleModelInput
    constexpr std::ptrdiff_t m_nLOD = 0x250; // int32_t
    constexpr std::ptrdiff_t m_bDisableShadows = 0x254; // bool
    constexpr std::ptrdiff_t m_bAcceptsDecals = 0x255; // bool
}

namespace C_OP_RenderSound { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flDurationScale = 0x1F8; // float
    constexpr std::ptrdiff_t m_flSndLvlScale = 0x1FC; // float
    constexpr std::ptrdiff_t m_flPitchScale = 0x200; // float
    constexpr std::ptrdiff_t m_flVolumeScale = 0x204; // float
    constexpr std::ptrdiff_t m_nSndLvlField = 0x208; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nDurationField = 0x20C; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nPitchField = 0x210; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVolumeField = 0x214; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nChannel = 0x218; // int32_t
    constexpr std::ptrdiff_t m_nCPReference = 0x21C; // int32_t
    constexpr std::ptrdiff_t m_pszSoundName = 0x220; // char[256]
    constexpr std::ptrdiff_t m_bSuppressStopSoundEvent = 0x320; // bool
}

namespace C_OP_RenderSprites { // CBaseRendererSource2
    constexpr std::ptrdiff_t m_nSequenceOverride = 0x2638; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nOrientationType = 0x2788; // ParticleOrientationChoiceList_t
    constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x278C; // int32_t
    constexpr std::ptrdiff_t m_bUseYawWithNormalAligned = 0x2790; // bool
    constexpr std::ptrdiff_t m_flMinSize = 0x2798; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flMaxSize = 0x28E8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flAlphaAdjustWithSizeAdjust = 0x2A38; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flStartFadeSize = 0x2B88; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flEndFadeSize = 0x2CD8; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flStartFadeDot = 0x2E28; // float
    constexpr std::ptrdiff_t m_flEndFadeDot = 0x2E2C; // float
    constexpr std::ptrdiff_t m_bDistanceAlpha = 0x2E30; // bool
    constexpr std::ptrdiff_t m_bSoftEdges = 0x2E31; // bool
    constexpr std::ptrdiff_t m_flEdgeSoftnessStart = 0x2E34; // float
    constexpr std::ptrdiff_t m_flEdgeSoftnessEnd = 0x2E38; // float
    constexpr std::ptrdiff_t m_bOutline = 0x2E3C; // bool
    constexpr std::ptrdiff_t m_OutlineColor = 0x2E3D; // Color
    constexpr std::ptrdiff_t m_nOutlineAlpha = 0x2E44; // int32_t
    constexpr std::ptrdiff_t m_flOutlineStart0 = 0x2E48; // float
    constexpr std::ptrdiff_t m_flOutlineStart1 = 0x2E4C; // float
    constexpr std::ptrdiff_t m_flOutlineEnd0 = 0x2E50; // float
    constexpr std::ptrdiff_t m_flOutlineEnd1 = 0x2E54; // float
    constexpr std::ptrdiff_t m_nLightingMode = 0x2E58; // ParticleLightingQuality_t
    constexpr std::ptrdiff_t m_flLightingTessellation = 0x2E60; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flLightingDirectionality = 0x2FB0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_bParticleShadows = 0x3100; // bool
    constexpr std::ptrdiff_t m_flShadowDensity = 0x3104; // float
}

namespace C_OP_RenderStandardLight { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_nLightType = 0x1F8; // ParticleLightTypeChoiceList_t
    constexpr std::ptrdiff_t m_vecColorScale = 0x200; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_nColorBlendType = 0x830; // ParticleColorBlendType_t
    constexpr std::ptrdiff_t m_flIntensity = 0x838; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bCastShadows = 0x988; // bool
    constexpr std::ptrdiff_t m_flTheta = 0x990; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flPhi = 0xAE0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flRadiusMultiplier = 0xC30; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nAttenuationStyle = 0xD80; // StandardLightingAttenuationStyle_t
    constexpr std::ptrdiff_t m_flFalloffLinearity = 0xD88; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flFiftyPercentFalloff = 0xED8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flZeroPercentFalloff = 0x1028; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0x1178; // bool
    constexpr std::ptrdiff_t m_bRenderSpecular = 0x1179; // bool
    constexpr std::ptrdiff_t m_lightCookie = 0x1180; // CUtlString
    constexpr std::ptrdiff_t m_nPriority = 0x1188; // int32_t
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x118C; // ParticleLightFogLightingMode_t
    constexpr std::ptrdiff_t m_flFogContribution = 0x1190; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_nCapsuleLightBehavior = 0x12E0; // ParticleLightBehaviorChoiceList_t
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x12E4; // float
    constexpr std::ptrdiff_t m_bReverseOrder = 0x12E8; // bool
    constexpr std::ptrdiff_t m_bClosedLoop = 0x12E9; // bool
    constexpr std::ptrdiff_t m_nPrevPntSource = 0x12EC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flMaxLength = 0x12F0; // float
    constexpr std::ptrdiff_t m_flMinLength = 0x12F4; // float
    constexpr std::ptrdiff_t m_bIgnoreDT = 0x12F8; // bool
    constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x12FC; // float
    constexpr std::ptrdiff_t m_flLengthScale = 0x1300; // float
    constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x1304; // float
}

namespace C_OP_RenderStatusEffect { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_pTextureColorWarp = 0x1F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureDetail2 = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureDiffuseWarp = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureFresnelColorWarp = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureFresnelWarp = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureSpecularWarp = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureEnvMap = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

namespace C_OP_RenderStatusEffectCitadel { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_pTextureColorWarp = 0x1F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureNormal = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureMetalness = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureRoughness = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureSelfIllum = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_pTextureDetail = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

namespace C_OP_RenderText { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_OutlineColor = 0x1F6; // Color
    constexpr std::ptrdiff_t m_DefaultText = 0x200; // CUtlString
}

namespace C_OP_RenderTonemapController { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flTonemapLevel = 0x1F8; // float
    constexpr std::ptrdiff_t m_flTonemapWeight = 0x1FC; // float
    constexpr std::ptrdiff_t m_nTonemapLevelField = 0x200; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nTonemapWeightField = 0x204; // ParticleAttributeIndex_t
}

namespace C_OP_RenderTrails { // CBaseTrailRenderer
    constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x28E9; // bool
    constexpr std::ptrdiff_t m_flStartFadeDot = 0x28EC; // float
    constexpr std::ptrdiff_t m_flEndFadeDot = 0x28F0; // float
    constexpr std::ptrdiff_t m_nPrevPntSource = 0x28F4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flMaxLength = 0x28F8; // float
    constexpr std::ptrdiff_t m_flMinLength = 0x28FC; // float
    constexpr std::ptrdiff_t m_bIgnoreDT = 0x2900; // bool
    constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x2904; // float
    constexpr std::ptrdiff_t m_flLengthScale = 0x2908; // float
    constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x290C; // float
    constexpr std::ptrdiff_t m_flRadiusHeadTaper = 0x2910; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecHeadColorScale = 0x2A60; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flHeadAlphaScale = 0x3090; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRadiusTaper = 0x31E0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecTailColorScale = 0x3330; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flTailAlphaScale = 0x3960; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nHorizCropField = 0x3AB0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nVertCropField = 0x3AB4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flForwardShift = 0x3AB8; // float
    constexpr std::ptrdiff_t m_bFlipUVBasedOnPitchYaw = 0x3ABC; // bool
}

namespace C_OP_RenderTreeShake { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_flPeakStrength = 0x1F8; // float
    constexpr std::ptrdiff_t m_nPeakStrengthFieldOverride = 0x1FC; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flRadius = 0x200; // float
    constexpr std::ptrdiff_t m_nRadiusFieldOverride = 0x204; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flShakeDuration = 0x208; // float
    constexpr std::ptrdiff_t m_flTransitionTime = 0x20C; // float
    constexpr std::ptrdiff_t m_flTwistAmount = 0x210; // float
    constexpr std::ptrdiff_t m_flRadialAmount = 0x214; // float
    constexpr std::ptrdiff_t m_flControlPointOrientationAmount = 0x218; // float
    constexpr std::ptrdiff_t m_nControlPointForLinearDirection = 0x21C; // int32_t
}

namespace C_OP_RenderVRHapticEvent { // CParticleFunctionRenderer
    constexpr std::ptrdiff_t m_nHand = 0x1F8; // ParticleVRHandChoiceList_t
    constexpr std::ptrdiff_t m_nOutputHandCP = 0x1FC; // int32_t
    constexpr std::ptrdiff_t m_nOutputField = 0x200; // int32_t
    constexpr std::ptrdiff_t m_flAmplitude = 0x208; // CPerParticleFloatInput
}

namespace C_OP_RepeatedTriggerChildGroup { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flClusterRefireTime = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flClusterSize = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flClusterCooldown = 0x458; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bLimitChildCount = 0x5A8; // bool
}

namespace C_OP_RestartAfterDuration { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flDurationMin = 0x1B0; // float
    constexpr std::ptrdiff_t m_flDurationMax = 0x1B4; // float
    constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nCPField = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bOnlyChildren = 0x1C4; // bool
}

namespace C_OP_RopeSpringConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flRestLength = 0x1B0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flMinDistance = 0x300; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flMaxDistance = 0x450; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flAdjustmentScale = 0x5A0; // float
    constexpr std::ptrdiff_t m_flInitialRestingLength = 0x5A8; // CParticleCollectionFloatInput
}

namespace C_OP_RotateVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecRotAxisMin = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecRotAxisMax = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_flRotRateMin = 0x1CC; // float
    constexpr std::ptrdiff_t m_flRotRateMax = 0x1D0; // float
    constexpr std::ptrdiff_t m_bNormalize = 0x1D4; // bool
    constexpr std::ptrdiff_t m_flScale = 0x1D8; // CPerParticleFloatInput
}

namespace C_OP_RtEnvCull { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_vecTestDir = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_vecTestNormal = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_bCullOnMiss = 0x1C8; // bool
    constexpr std::ptrdiff_t m_bStickInsteadOfCull = 0x1C9; // bool
    constexpr std::ptrdiff_t m_RtEnvName = 0x1CA; // char[128]
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x24C; // int32_t
    constexpr std::ptrdiff_t m_nComponent = 0x250; // int32_t
}

namespace C_OP_SDFConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flMinDist = 0x1B0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flMaxDist = 0x300; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nMaxIterations = 0x450; // int32_t
}

namespace C_OP_SDFForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flForceScale = 0x1BC; // float
}

namespace C_OP_SDFLighting { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_vLightingDir = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_vTint_0 = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_vTint_1 = 0x1C8; // Vector
}

namespace C_OP_SelectivelyEnableChildren { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nFirstChild = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x458; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x5A8; // bool
    constexpr std::ptrdiff_t m_bDestroyImmediately = 0x5A9; // bool
}

namespace C_OP_SequenceFromModel { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float
    constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float
    constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float
    constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float
    constexpr std::ptrdiff_t m_nSetMethod = 0x1CC; // ParticleSetMethod_t
}

namespace C_OP_SetAttributeToScalarExpression { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nExpression = 0x1B0; // ScalarExpressionType_t
    constexpr std::ptrdiff_t m_flInput1 = 0x1B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flInput2 = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flOutputRemap = 0x458; // CParticleRemapFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x5AC; // ParticleSetMethod_t
}

namespace C_OP_SetCPOrientationToDirection { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nInputControlPoint = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1B4; // int32_t
}

namespace C_OP_SetCPOrientationToGroundNormal { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flInterpRate = 0x1B0; // float
    constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1B4; // float
    constexpr std::ptrdiff_t m_flTolerance = 0x1B8; // float
    constexpr std::ptrdiff_t m_flTraceOffset = 0x1BC; // float
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x1C0; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x240; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_nInputCP = 0x244; // int32_t
    constexpr std::ptrdiff_t m_nOutputCP = 0x248; // int32_t
    constexpr std::ptrdiff_t m_bIncludeWater = 0x258; // bool
}

namespace C_OP_SetCPOrientationToPointAtCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nInputCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nOutputCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flInterpolation = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_b2DOrientation = 0x310; // bool
    constexpr std::ptrdiff_t m_bAvoidSingularity = 0x311; // bool
    constexpr std::ptrdiff_t m_bPointAway = 0x312; // bool
}

namespace C_OP_SetCPtoVector { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCPInput = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
}

namespace C_OP_SetChildControlPoints { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nNumControlPoints = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bReverse = 0x310; // bool
    constexpr std::ptrdiff_t m_bSetOrientation = 0x311; // bool
}

namespace C_OP_SetControlPointFieldFromVectorExpression { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nExpression = 0x1B4; // VectorFloatExpressionType_t
    constexpr std::ptrdiff_t m_vecInput1 = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_vecInput2 = 0x7E8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flOutputRemap = 0xE18; // CParticleRemapFloatInput
    constexpr std::ptrdiff_t m_nOutputCP = 0xF68; // int32_t
    constexpr std::ptrdiff_t m_nOutVectorField = 0xF6C; // int32_t
}

namespace C_OP_SetControlPointFieldToScalarExpression { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nExpression = 0x1B4; // ScalarExpressionType_t
    constexpr std::ptrdiff_t m_flInput1 = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInput2 = 0x308; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flOutputRemap = 0x458; // CParticleRemapFloatInput
    constexpr std::ptrdiff_t m_nOutputCP = 0x5A8; // int32_t
    constexpr std::ptrdiff_t m_nOutVectorField = 0x5AC; // int32_t
}

namespace C_OP_SetControlPointFieldToWater { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nSourceCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nDestCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nCPField = 0x1BC; // int32_t
}

namespace C_OP_SetControlPointFromObjectScale { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPInput = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPOutput = 0x1B8; // int32_t
}

namespace C_OP_SetControlPointOrientation { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1B1; // bool
    constexpr std::ptrdiff_t m_bRandomize = 0x1B3; // bool
    constexpr std::ptrdiff_t m_bSetOnce = 0x1B4; // bool
    constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nHeadLocation = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_vecRotation = 0x1C0; // QAngle
    constexpr std::ptrdiff_t m_vecRotationB = 0x1CC; // QAngle
    constexpr std::ptrdiff_t m_flInterpolation = 0x1D8; // CParticleCollectionFloatInput
}

namespace C_OP_SetControlPointOrientationToCPVelocity { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPInput = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPOutput = 0x1B8; // int32_t
}

namespace C_OP_SetControlPointPositionToRandomActiveCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nHeadLocationMin = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nHeadLocationMax = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_flResetRate = 0x1C0; // CParticleCollectionFloatInput
}

namespace C_OP_SetControlPointPositionToTimeOfDayValue { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_pszTimeOfDayParameter = 0x1B8; // char[128]
    constexpr std::ptrdiff_t m_vecDefaultValue = 0x238; // Vector
}

namespace C_OP_SetControlPointPositions { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1B1; // bool
    constexpr std::ptrdiff_t m_bOrient = 0x1B2; // bool
    constexpr std::ptrdiff_t m_bSetOnce = 0x1B3; // bool
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCP2 = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nCP3 = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nCP4 = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C4; // Vector
    constexpr std::ptrdiff_t m_vecCP2Pos = 0x1D0; // Vector
    constexpr std::ptrdiff_t m_vecCP3Pos = 0x1DC; // Vector
    constexpr std::ptrdiff_t m_vecCP4Pos = 0x1E8; // Vector
    constexpr std::ptrdiff_t m_nHeadLocation = 0x1F4; // int32_t
}

namespace C_OP_SetControlPointRotation { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_vecRotAxis = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_flRotRate = 0x7E8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nCP = 0x938; // int32_t
    constexpr std::ptrdiff_t m_nLocalCP = 0x93C; // int32_t
}

namespace C_OP_SetControlPointToCPVelocity { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPInput = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPOutputVel = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_bNormalize = 0x1BC; // bool
    constexpr std::ptrdiff_t m_nCPOutputMag = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nCPField = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x1C8; // CParticleCollectionVecInput
}

namespace C_OP_SetControlPointToCenter { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_nSetParent = 0x1C4; // ParticleParentSetMode_t
}

namespace C_OP_SetControlPointToHMD { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_bOrientToHMD = 0x1C4; // bool
}

namespace C_OP_SetControlPointToHand { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nHand = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1BC; // Vector
    constexpr std::ptrdiff_t m_bOrientToHand = 0x1C8; // bool
}

namespace C_OP_SetControlPointToImpactPoint { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPOut = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPIn = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flUpdateRate = 0x1BC; // float
    constexpr std::ptrdiff_t m_flTraceLength = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flStartOffset = 0x310; // float
    constexpr std::ptrdiff_t m_flOffset = 0x314; // float
    constexpr std::ptrdiff_t m_vecTraceDir = 0x318; // Vector
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x324; // char[128]
    constexpr std::ptrdiff_t m_nTraceSet = 0x3A4; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_bSetToEndpoint = 0x3A8; // bool
    constexpr std::ptrdiff_t m_bTraceToClosestSurface = 0x3A9; // bool
    constexpr std::ptrdiff_t m_bIncludeWater = 0x3AA; // bool
}

namespace C_OP_SetControlPointToPlayer { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_bOrientToEyes = 0x1C4; // bool
}

namespace C_OP_SetControlPointToVectorExpression { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nExpression = 0x1B4; // VectorExpressionType_t
    constexpr std::ptrdiff_t m_nOutputCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_vInput1 = 0x1C0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_vInput2 = 0x7F0; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE20; // bool
}

namespace C_OP_SetControlPointToWaterSurface { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nSourceCP = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nDestCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nFlowCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nActiveCP = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nActiveCPField = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_flRetestRate = 0x1C8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bAdaptiveThreshold = 0x318; // bool
}

namespace C_OP_SetControlPointsToModelParticles { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_HitboxSetName = 0x1B0; // char[128]
    constexpr std::ptrdiff_t m_AttachmentName = 0x230; // char[128]
    constexpr std::ptrdiff_t m_nFirstControlPoint = 0x2B0; // int32_t
    constexpr std::ptrdiff_t m_nNumControlPoints = 0x2B4; // int32_t
    constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x2B8; // int32_t
    constexpr std::ptrdiff_t m_bSkin = 0x2BC; // bool
    constexpr std::ptrdiff_t m_bAttachment = 0x2BD; // bool
}

namespace C_OP_SetControlPointsToParticle { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nNumControlPoints = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bSetOrientation = 0x1C0; // bool
    constexpr std::ptrdiff_t m_nOrientationMode = 0x1C4; // ParticleOrientationSetMode_t
    constexpr std::ptrdiff_t m_nSetParent = 0x1C8; // ParticleParentSetMode_t
}

namespace C_OP_SetFloat { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_InputValue = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x300; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x304; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_Lerp = 0x308; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bUseNewCode = 0x458; // bool
}

namespace C_OP_SetFloatAttributeToVectorExpression { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nExpression = 0x1B0; // VectorFloatExpressionType_t
    constexpr std::ptrdiff_t m_vInput1 = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vInput2 = 0x7E8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flOutputRemap = 0xE18; // CParticleRemapFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0xF68; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0xF6C; // ParticleSetMethod_t
}

namespace C_OP_SetFloatCollection { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_InputValue = 0x1B0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nOutputField = 0x300; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x304; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_Lerp = 0x308; // CParticleCollectionFloatInput
}

namespace C_OP_SetFromCPSnapshot { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nAttributeToRead = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1B8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_bRandom = 0x1C0; // bool
    constexpr std::ptrdiff_t m_bReverse = 0x1C1; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x1C8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x318; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_flInterpolation = 0x468; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bSubSample = 0x5B8; // bool
    constexpr std::ptrdiff_t m_bPrev = 0x5B9; // bool
}

namespace C_OP_SetGravityToCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nCPInput = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPOutput = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flScale = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bSetOrientation = 0x310; // bool
    constexpr std::ptrdiff_t m_bSetZDown = 0x311; // bool
}

namespace C_OP_SetParentControlPointsToChildCP { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nChildControlPoint = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nNumControlPoints = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bSetOrientation = 0x1C4; // bool
}

namespace C_OP_SetPerChildControlPoint { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nNumControlPoints = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nParticleIncrement = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x310; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bSetOrientation = 0x460; // bool
    constexpr std::ptrdiff_t m_nOrientationField = 0x464; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x468; // bool
}

namespace C_OP_SetPerChildControlPointFromAttribute { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nChildGroupID = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nNumControlPoints = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nParticleIncrement = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x1C4; // bool
    constexpr std::ptrdiff_t m_nAttributeToRead = 0x1C8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nCPField = 0x1CC; // int32_t
}

namespace C_OP_SetRandomControlPointPosition { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1B1; // bool
    constexpr std::ptrdiff_t m_bOrient = 0x1B2; // bool
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nHeadLocation = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flReRandomRate = 0x1C0; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_vecCPMinPos = 0x310; // Vector
    constexpr std::ptrdiff_t m_vecCPMaxPos = 0x31C; // Vector
    constexpr std::ptrdiff_t m_flInterpolation = 0x328; // CParticleCollectionFloatInput
}

namespace C_OP_SetSimulationRate { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_flSimulationScale = 0x1B8; // CParticleCollectionFloatInput
}

namespace C_OP_SetSingleControlPointPosition { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_bSetOnce = 0x1B1; // bool
    constexpr std::ptrdiff_t m_nCP1 = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_vecCP1Pos = 0x1B8; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_transformInput = 0x7E8; // CParticleTransformInput
}

namespace C_OP_SetToCP { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_vecOffset = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_bOffsetLocal = 0x1C0; // bool
}

namespace C_OP_SetVariable { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_variableReference = 0x1B8; // CParticleVariableRef
    constexpr std::ptrdiff_t m_transformInput = 0x1F8; // CParticleTransformInput
    constexpr std::ptrdiff_t m_positionOffset = 0x258; // Vector
    constexpr std::ptrdiff_t m_rotationOffset = 0x264; // QAngle
    constexpr std::ptrdiff_t m_vecInput = 0x270; // CParticleCollectionVecInput
    constexpr std::ptrdiff_t m_floatInput = 0x8A0; // CParticleCollectionFloatInput
}

namespace C_OP_SetVec { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_InputValue = 0x1B0; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nOutputField = 0x7E0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0x7E4; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_Lerp = 0x7E8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bNormalizedOutput = 0x938; // bool
}

namespace C_OP_SetVectorAttributeToVectorExpression { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nExpression = 0x1B0; // VectorExpressionType_t
    constexpr std::ptrdiff_t m_vInput1 = 0x1B8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_vInput2 = 0x7E8; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_nOutputField = 0xE18; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nSetMethod = 0xE1C; // ParticleSetMethod_t
    constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE20; // bool
}

namespace C_OP_ShapeMatchingConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flShapeRestorationTime = 0x1B0; // float
}

namespace C_OP_SnapshotRigidSkinToBones { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_bTransformNormals = 0x1B0; // bool
    constexpr std::ptrdiff_t m_bTransformRadii = 0x1B1; // bool
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
}

namespace C_OP_SnapshotSkinToBones { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_bTransformNormals = 0x1B0; // bool
    constexpr std::ptrdiff_t m_bTransformRadii = 0x1B1; // bool
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x1B8; // float
    constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x1BC; // float
    constexpr std::ptrdiff_t m_flJumpThreshold = 0x1C0; // float
    constexpr std::ptrdiff_t m_flPrevPosScale = 0x1C4; // float
}

namespace C_OP_Spin { // CGeneralSpin
}

namespace C_OP_SpinUpdate { // CSpinUpdateBase
}

namespace C_OP_SpinYaw { // CGeneralSpin
}

namespace C_OP_SpringToVectorConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_flRestLength = 0x1B0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMinDistance = 0x300; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flMaxDistance = 0x450; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRestingLength = 0x5A0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecAnchorVector = 0x6F0; // CPerParticleVecInput
}

namespace C_OP_StopAfterCPDuration { // CParticleFunctionPreEmission
    constexpr std::ptrdiff_t m_flDuration = 0x1B8; // CParticleCollectionFloatInput
    constexpr std::ptrdiff_t m_bDestroyImmediately = 0x308; // bool
    constexpr std::ptrdiff_t m_bPlayEndCap = 0x309; // bool
}

namespace C_OP_TeleportBeam { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nCPPosition = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nCPVelocity = 0x1B4; // int32_t
    constexpr std::ptrdiff_t m_nCPMisc = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nCPColor = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nCPInvalidColor = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_nCPExtraArcData = 0x1C4; // int32_t
    constexpr std::ptrdiff_t m_vGravity = 0x1C8; // Vector
    constexpr std::ptrdiff_t m_flArcMaxDuration = 0x1D4; // float
    constexpr std::ptrdiff_t m_flSegmentBreak = 0x1D8; // float
    constexpr std::ptrdiff_t m_flArcSpeed = 0x1DC; // float
    constexpr std::ptrdiff_t m_flAlpha = 0x1E0; // float
}

namespace C_OP_TimeVaryingForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flStartLerpTime = 0x1BC; // float
    constexpr std::ptrdiff_t m_StartingForce = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_flEndLerpTime = 0x1CC; // float
    constexpr std::ptrdiff_t m_EndingForce = 0x1D0; // Vector
}

namespace C_OP_TurbulenceForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_flNoiseCoordScale0 = 0x1BC; // float
    constexpr std::ptrdiff_t m_flNoiseCoordScale1 = 0x1C0; // float
    constexpr std::ptrdiff_t m_flNoiseCoordScale2 = 0x1C4; // float
    constexpr std::ptrdiff_t m_flNoiseCoordScale3 = 0x1C8; // float
    constexpr std::ptrdiff_t m_vecNoiseAmount0 = 0x1CC; // Vector
    constexpr std::ptrdiff_t m_vecNoiseAmount1 = 0x1D8; // Vector
    constexpr std::ptrdiff_t m_vecNoiseAmount2 = 0x1E4; // Vector
    constexpr std::ptrdiff_t m_vecNoiseAmount3 = 0x1F0; // Vector
}

namespace C_OP_TwistAroundAxis { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_fForceAmount = 0x1BC; // float
    constexpr std::ptrdiff_t m_TwistAxis = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_bLocalSpace = 0x1CC; // bool
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D0; // int32_t
}

namespace C_OP_UpdateLightSource { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_vColorTint = 0x1B0; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1B8; // float
    constexpr std::ptrdiff_t m_flMinimumLightingRadius = 0x1BC; // float
    constexpr std::ptrdiff_t m_flMaximumLightingRadius = 0x1C0; // float
    constexpr std::ptrdiff_t m_flPositionDampingConstant = 0x1C4; // float
}

namespace C_OP_VectorFieldSnapshot { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_flInterpolation = 0x1C0; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_vecScale = 0x310; // CPerParticleVecInput
    constexpr std::ptrdiff_t m_flBoundaryDampening = 0x940; // float
    constexpr std::ptrdiff_t m_bSetVelocity = 0x944; // bool
    constexpr std::ptrdiff_t m_bLockToSurface = 0x945; // bool
    constexpr std::ptrdiff_t m_flGridSpacing = 0x948; // float
}

namespace C_OP_VectorNoise { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_vecOutputMin = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_vecOutputMax = 0x1C0; // Vector
    constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1CC; // float
    constexpr std::ptrdiff_t m_bAdditive = 0x1D0; // bool
    constexpr std::ptrdiff_t m_bOffset = 0x1D1; // bool
    constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1D4; // float
}

namespace C_OP_VelocityDecay { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flMinVelocity = 0x1B0; // float
}

namespace C_OP_VelocityMatchingForce { // CParticleFunctionOperator
    constexpr std::ptrdiff_t m_flDirScale = 0x1B0; // float
    constexpr std::ptrdiff_t m_flSpdScale = 0x1B4; // float
    constexpr std::ptrdiff_t m_nCPBroadcast = 0x1B8; // int32_t
}

namespace C_OP_WindForce { // CParticleFunctionForce
    constexpr std::ptrdiff_t m_vForce = 0x1BC; // Vector
}

namespace C_OP_WorldCollideConstraint { // CParticleFunctionConstraint
}

namespace C_OP_WorldTraceConstraint { // CParticleFunctionConstraint
    constexpr std::ptrdiff_t m_nCP = 0x1B0; // int32_t
    constexpr std::ptrdiff_t m_vecCpOffset = 0x1B4; // Vector
    constexpr std::ptrdiff_t m_nCollisionMode = 0x1C0; // ParticleCollisionMode_t
    constexpr std::ptrdiff_t m_nCollisionModeMin = 0x1C4; // ParticleCollisionMode_t
    constexpr std::ptrdiff_t m_nTraceSet = 0x1C8; // ParticleTraceSet_t
    constexpr std::ptrdiff_t m_CollisionGroupName = 0x1CC; // char[128]
    constexpr std::ptrdiff_t m_bWorldOnly = 0x24C; // bool
    constexpr std::ptrdiff_t m_bBrushOnly = 0x24D; // bool
    constexpr std::ptrdiff_t m_bIncludeWater = 0x24E; // bool
    constexpr std::ptrdiff_t m_nIgnoreCP = 0x250; // int32_t
    constexpr std::ptrdiff_t m_flCpMovementTolerance = 0x254; // float
    constexpr std::ptrdiff_t m_flRetestRate = 0x258; // float
    constexpr std::ptrdiff_t m_flTraceTolerance = 0x25C; // float
    constexpr std::ptrdiff_t m_flCollisionConfirmationSpeed = 0x260; // float
    constexpr std::ptrdiff_t m_nMaxTracesPerFrame = 0x264; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0x268; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flBounceAmount = 0x3B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flSlideAmount = 0x508; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_flRandomDirScale = 0x658; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_bDecayBounce = 0x7A8; // bool
    constexpr std::ptrdiff_t m_bKillonContact = 0x7A9; // bool
    constexpr std::ptrdiff_t m_flMinSpeed = 0x7AC; // float
    constexpr std::ptrdiff_t m_bSetNormal = 0x7B0; // bool
    constexpr std::ptrdiff_t m_nStickOnCollisionField = 0x7B4; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flStopSpeed = 0x7B8; // CPerParticleFloatInput
    constexpr std::ptrdiff_t m_nEntityStickDataField = 0x908; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_nEntityStickNormalField = 0x90C; // ParticleAttributeIndex_t
}

namespace CollisionGroupContext_t {
    constexpr std::ptrdiff_t m_nCollisionGroupNumber = 0x0; // int32_t
}

namespace ControlPointReference_t {
    constexpr std::ptrdiff_t m_controlPointNameString = 0x0; // int32_t
    constexpr std::ptrdiff_t m_vOffsetFromControlPoint = 0x4; // Vector
    constexpr std::ptrdiff_t m_bOffsetInLocalSpace = 0x10; // bool
}

namespace FloatInputMaterialVariable_t {
    constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flInput = 0x8; // CParticleCollectionFloatInput
}

namespace IControlPointEditorData {
}

namespace IParticleCollection {
}

namespace IParticleEffect {
}

namespace IParticleSystemDefinition {
}

namespace MaterialVariable_t {
    constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nVariableField = 0x8; // ParticleAttributeIndex_t
    constexpr std::ptrdiff_t m_flScale = 0xC; // float
}

namespace ModelReference_t {
    constexpr std::ptrdiff_t m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_flRelativeProbabilityOfSpawn = 0x8; // float
}

namespace PARTICLE_EHANDLE__ {
    constexpr std::ptrdiff_t unused = 0x0; // int32_t
}

namespace PARTICLE_WORLD_HANDLE__ {
    constexpr std::ptrdiff_t unused = 0x0; // int32_t
}

namespace ParticleAttributeIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace ParticleChildrenInfo_t {
    constexpr std::ptrdiff_t m_ChildRef = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flDelay = 0x8; // float
    constexpr std::ptrdiff_t m_bEndCap = 0xC; // bool
    constexpr std::ptrdiff_t m_bDisableChild = 0xD; // bool
    constexpr std::ptrdiff_t m_nDetailLevel = 0x10; // ParticleDetailLevel_t
}

namespace ParticleControlPointConfiguration_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
    constexpr std::ptrdiff_t m_previewState = 0x20; // ParticlePreviewState_t
}

namespace ParticleControlPointDriver_t {
    constexpr std::ptrdiff_t m_iControlPoint = 0x0; // int32_t
    constexpr std::ptrdiff_t m_iAttachType = 0x4; // ParticleAttachment_t
    constexpr std::ptrdiff_t m_attachmentName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_vecOffset = 0x10; // Vector
    constexpr std::ptrdiff_t m_angOffset = 0x1C; // QAngle
    constexpr std::ptrdiff_t m_entityName = 0x28; // CUtlString
}

namespace ParticleNamedValueConfiguration_t {
    constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_ConfigValue = 0x8; // KeyValues3
    constexpr std::ptrdiff_t m_iAttachType = 0x18; // ParticleAttachment_t
    constexpr std::ptrdiff_t m_BoundEntityPath = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_strEntityScope = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_strAttachmentName = 0x30; // CUtlString
}

namespace ParticleNamedValueSource_t {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_IsPublic = 0x8; // bool
    constexpr std::ptrdiff_t m_ValueType = 0xC; // PulseValueType_t
    constexpr std::ptrdiff_t m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
    constexpr std::ptrdiff_t m_NamedConfigs = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
}

namespace ParticlePreviewBodyGroup_t {
    constexpr std::ptrdiff_t m_bodyGroupName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nValue = 0x8; // int32_t
}

namespace ParticlePreviewState_t {
    constexpr std::ptrdiff_t m_previewModel = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nModSpecificData = 0x8; // uint32_t
    constexpr std::ptrdiff_t m_groundType = 0xC; // PetGroundType_t
    constexpr std::ptrdiff_t m_sequenceName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_nFireParticleOnSequenceFrame = 0x18; // int32_t
    constexpr std::ptrdiff_t m_hitboxSetName = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_materialGroupName = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_vecBodyGroups = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
    constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x48; // float
    constexpr std::ptrdiff_t m_flParticleSimulationRate = 0x4C; // float
    constexpr std::ptrdiff_t m_bShouldDrawHitboxes = 0x50; // bool
    constexpr std::ptrdiff_t m_bShouldDrawAttachments = 0x51; // bool
    constexpr std::ptrdiff_t m_bShouldDrawAttachmentNames = 0x52; // bool
    constexpr std::ptrdiff_t m_bShouldDrawControlPointAxes = 0x53; // bool
    constexpr std::ptrdiff_t m_bAnimationNonLooping = 0x54; // bool
    constexpr std::ptrdiff_t m_vecPreviewGravity = 0x58; // Vector
}

namespace PointDefinitionWithTimeValues_t { // PointDefinition_t
    constexpr std::ptrdiff_t m_flTimeDuration = 0x14; // float
}

namespace PointDefinition_t {
    constexpr std::ptrdiff_t m_nControlPoint = 0x0; // int32_t
    constexpr std::ptrdiff_t m_bLocalCoords = 0x4; // bool
    constexpr std::ptrdiff_t m_vOffset = 0x8; // Vector
}

namespace RenderProjectedMaterial_t {
    constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

namespace SequenceWeightedList_t {
    constexpr std::ptrdiff_t m_nSequence = 0x0; // int32_t
    constexpr std::ptrdiff_t m_flRelativeWeight = 0x4; // float
}

namespace TextureControls_t {
    constexpr std::ptrdiff_t m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flFinalTextureScaleV = 0x150; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flFinalTextureOffsetU = 0x2A0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flFinalTextureOffsetV = 0x3F0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flFinalTextureUVRotation = 0x540; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flZoomScale = 0x690; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_flDistortion = 0x7E0; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_bRandomizeOffsets = 0x930; // bool
    constexpr std::ptrdiff_t m_bClampUVs = 0x931; // bool
    constexpr std::ptrdiff_t m_nPerParticleBlend = 0x934; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleScale = 0x938; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleOffsetU = 0x93C; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleOffsetV = 0x940; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleRotation = 0x944; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleZoom = 0x948; // SpriteCardPerParticleScale_t
    constexpr std::ptrdiff_t m_nPerParticleDistortion = 0x94C; // SpriteCardPerParticleScale_t
}

namespace TextureGroup_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_bReplaceTextureWithGradient = 0x1; // bool
    constexpr std::ptrdiff_t m_hTexture = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_Gradient = 0x10; // CColorGradient
    constexpr std::ptrdiff_t m_nTextureType = 0x28; // SpriteCardTextureType_t
    constexpr std::ptrdiff_t m_nTextureChannels = 0x2C; // SpriteCardTextureChannel_t
    constexpr std::ptrdiff_t m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
    constexpr std::ptrdiff_t m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
    constexpr std::ptrdiff_t m_TextureControls = 0x188; // TextureControls_t
}

namespace VecInputMaterialVariable_t {
    constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_vecInput = 0x8; // CParticleCollectionVecInput
}