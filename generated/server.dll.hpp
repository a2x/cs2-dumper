#pragma once

#include <cstddef>

namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
    constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase< CUtlSymbolLarge >
}

namespace AmmoIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int8
}

namespace AmmoTypeInfo_t {
    constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32
    constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
    constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
    constexpr std::ptrdiff_t m_flMass = 0x28; // float32
    constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
}

namespace AnimationUpdateListHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint32
}

namespace CAISound {
    constexpr std::ptrdiff_t m_iSoundType = 0x4B0; // int32
    constexpr std::ptrdiff_t m_iSoundContext = 0x4B4; // int32
    constexpr std::ptrdiff_t m_iVolume = 0x4B8; // int32
    constexpr std::ptrdiff_t m_iSoundIndex = 0x4BC; // int32
    constexpr std::ptrdiff_t m_flDuration = 0x4C0; // float32
    constexpr std::ptrdiff_t m_iszProxyEntityName = 0x4C8; // CUtlSymbolLarge
}

namespace CAI_ChangeHintGroup {
    constexpr std::ptrdiff_t m_iSearchType = 0x4B0; // int32
    constexpr std::ptrdiff_t m_strSearchName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strNewHintGroup = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x4C8; // float32
}

namespace CAI_ChangeTarget {
    constexpr std::ptrdiff_t m_iszNewTarget = 0x4B0; // CUtlSymbolLarge
}

namespace CAI_Expresser {
    constexpr std::ptrdiff_t m_flStopTalkTime = 0x38; // GameTime_t
    constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
    constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x40; // GameTime_t
    constexpr std::ptrdiff_t m_voicePitch = 0x44; // int32
    constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x4C; // bool
    constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x4D; // bool
    constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x50; // int32
    constexpr std::ptrdiff_t m_pOuter = 0x58; // CBaseFlex*
}

namespace CAI_ExpresserWithFollowup {
    constexpr std::ptrdiff_t m_pPostponedFollowup = 0x60; // ResponseFollowup*
}

namespace CAmbientGeneric {
    constexpr std::ptrdiff_t m_radius = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flMaxRadius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_iSoundLevel = 0x4B8; // soundlevel_t
    constexpr std::ptrdiff_t m_dpv = 0x4BC; // dynpitchvol_t
    constexpr std::ptrdiff_t m_fActive = 0x520; // bool
    constexpr std::ptrdiff_t m_fLooping = 0x521; // bool
    constexpr std::ptrdiff_t m_iszSound = 0x528; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSourceEntName = 0x530; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSoundSource = 0x538; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x53C; // CEntityIndex
}

namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase< uint16 >
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase< uint64 >
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase< Quaternion >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xE0; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0xF8; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x110; // CNetworkUtlVectorBase< uint16 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x128; // CNetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x140; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x158; // CNetworkUtlVectorBase< uint64 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x170; // CNetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x188; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1A0; // CNetworkUtlVectorBase< Quaternion >
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1B8; // int32
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1BC; // int32
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1C0; // int32
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1C4; // float32
}

namespace CAnimGraphTagRef {
    constexpr std::ptrdiff_t m_nTagIndex = 0x0; // int32
    constexpr std::ptrdiff_t m_tagName = 0x10; // CGlobalSymbol
}

namespace CAttributeContainer {
    constexpr std::ptrdiff_t m_Item = 0x50; // CEconItemView
}

namespace CAttributeList {
    constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute >
    constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
}

namespace CAttributeManager {
    constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
    constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
    constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
    constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
}

namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0; // float32
    constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t flOut = 0x10; // float32
}

namespace CBarnLight {
    constexpr std::ptrdiff_t m_bEnabled = 0x700; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0x704; // int32
    constexpr std::ptrdiff_t m_Color = 0x708; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0x70C; // float32
    constexpr std::ptrdiff_t m_flBrightness = 0x710; // float32
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x714; // float32
    constexpr std::ptrdiff_t m_nDirectLight = 0x718; // int32
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x71C; // int32
    constexpr std::ptrdiff_t m_nLuminaireShape = 0x720; // int32
    constexpr std::ptrdiff_t m_flLuminaireSize = 0x724; // float32
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x728; // float32
    constexpr std::ptrdiff_t m_LightStyleString = 0x730; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x738; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x740; // CNetworkUtlVectorBase< CUtlString >
    constexpr std::ptrdiff_t m_LightStyleEvents = 0x758; // CNetworkUtlVectorBase< CUtlString >
    constexpr std::ptrdiff_t m_LightStyleTargets = 0x770; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_StyleEvent = 0x788; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_StyleRadianceVar = 0x828; // CUtlString
    constexpr std::ptrdiff_t m_StyleVar = 0x830; // CUtlString
    constexpr std::ptrdiff_t m_hLightCookie = 0x858; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_flShape = 0x860; // float32
    constexpr std::ptrdiff_t m_flSoftX = 0x864; // float32
    constexpr std::ptrdiff_t m_flSoftY = 0x868; // float32
    constexpr std::ptrdiff_t m_flSkirt = 0x86C; // float32
    constexpr std::ptrdiff_t m_flSkirtNear = 0x870; // float32
    constexpr std::ptrdiff_t m_vSizeParams = 0x874; // Vector
    constexpr std::ptrdiff_t m_flRange = 0x880; // float32
    constexpr std::ptrdiff_t m_vShear = 0x884; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x890; // int32
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x894; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0x8A0; // int32
    constexpr std::ptrdiff_t m_nShadowMapSize = 0x8A4; // int32
    constexpr std::ptrdiff_t m_nShadowPriority = 0x8A8; // int32
    constexpr std::ptrdiff_t m_bContactShadow = 0x8AC; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0x8B0; // int32
    constexpr std::ptrdiff_t m_flBounceScale = 0x8B4; // float32
    constexpr std::ptrdiff_t m_flMinRoughness = 0x8B8; // float32
    constexpr std::ptrdiff_t m_vAlternateColor = 0x8BC; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8C8; // float32
    constexpr std::ptrdiff_t m_nFog = 0x8CC; // int32
    constexpr std::ptrdiff_t m_flFogStrength = 0x8D0; // float32
    constexpr std::ptrdiff_t m_nFogShadows = 0x8D4; // int32
    constexpr std::ptrdiff_t m_flFogScale = 0x8D8; // float32
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0x8DC; // float32
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x8E0; // float32
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x8E4; // float32
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x8E8; // float32
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x8EC; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x8F0; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8FC; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x908; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x914; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x920; // Vector
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x92C; // bool
}

namespace CBaseAnimGraph {
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x700; // bool
    constexpr std::ptrdiff_t m_bShouldAnimateDuringGameplayPause = 0x701; // bool
    constexpr std::ptrdiff_t m_pChoreoServices = 0x708; // IChoreoServices*
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x710; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x714; // float32
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x718; // Vector
    constexpr std::ptrdiff_t m_bAnimGraphDirty = 0x724; // bool
    constexpr std::ptrdiff_t m_vecForce = 0x728; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0x734; // int32
    constexpr std::ptrdiff_t m_pRagdollPose = 0x748; // PhysicsRagdollPose_t*
    constexpr std::ptrdiff_t m_bClientRagdoll = 0x750; // bool
}

namespace CBaseAnimGraphController {
    constexpr std::ptrdiff_t m_baseLayer = 0x18; // CNetworkedSequenceOperation
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x40; // CAnimGraphNetworkedVariables
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x218; // bool
    constexpr std::ptrdiff_t m_flLastEventCycle = 0x21C; // float32
    constexpr std::ptrdiff_t m_flLastEventAnimTime = 0x220; // float32
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x224; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_flPrevAnimTime = 0x22C; // float32
    constexpr std::ptrdiff_t m_bClientSideAnimation = 0x230; // bool
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x231; // bool
    constexpr std::ptrdiff_t m_nNewSequenceParity = 0x234; // int32
    constexpr std::ptrdiff_t m_nResetEventsParity = 0x238; // int32
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x23C; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_hAnimationUpdate = 0x2DC; // AnimationUpdateListHandle_t
}

namespace CBaseButton {
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x780; // QAngle
    constexpr std::ptrdiff_t m_fStayPushed = 0x78C; // bool
    constexpr std::ptrdiff_t m_fRotating = 0x78D; // bool
    constexpr std::ptrdiff_t m_ls = 0x790; // locksound_t
    constexpr std::ptrdiff_t m_sUseSound = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sLockedSound = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sUnlockedSound = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bLocked = 0x7C8; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x7C9; // bool
    constexpr std::ptrdiff_t m_flUseLockedTime = 0x7CC; // GameTime_t
    constexpr std::ptrdiff_t m_bSolidBsp = 0x7D0; // bool
    constexpr std::ptrdiff_t m_OnDamaged = 0x7D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPressed = 0x800; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUseLocked = 0x828; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnIn = 0x850; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOut = 0x878; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nState = 0x8A0; // int32
    constexpr std::ptrdiff_t m_hConstraint = 0x8A4; // CEntityHandle
    constexpr std::ptrdiff_t m_hConstraintParent = 0x8A8; // CEntityHandle
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x8AC; // bool
    constexpr std::ptrdiff_t m_sGlowEntity = 0x8B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_glowEntity = 0x8B8; // CHandle< CBaseModelEntity >
    constexpr std::ptrdiff_t m_usable = 0x8BC; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0x8C0; // CUtlSymbolLarge
}

namespace CBaseCSGrenade {
    constexpr std::ptrdiff_t m_bRedraw = 0xDF8; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0xDF9; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0xDFA; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0xDFB; // bool
    constexpr std::ptrdiff_t m_eThrowStatus = 0xDFC; // EGrenadeThrowState
    constexpr std::ptrdiff_t m_fThrowTime = 0xE00; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0xE04; // float32
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0xE08; // float32
    constexpr std::ptrdiff_t m_fDropTime = 0xE0C; // GameTime_t
}

namespace CBaseCSGrenadeProjectile {
    constexpr std::ptrdiff_t m_vInitialVelocity = 0x9C8; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0x9D4; // int32
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x9D8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x9E0; // int32
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x9E4; // Vector
    constexpr std::ptrdiff_t m_unOGSExtraFlags = 0x9F0; // uint8
    constexpr std::ptrdiff_t m_bDetonationRecorded = 0x9F1; // bool
    constexpr std::ptrdiff_t m_flDetonateTime = 0x9F4; // GameTime_t
    constexpr std::ptrdiff_t m_nItemIndex = 0x9F8; // uint16
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x9FC; // Vector
    constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xA08; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xA0C; // RotationVector
    constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xA18; // Vector
    constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xA24; // int32
}

namespace CBaseClientUIEntity {
    constexpr std::ptrdiff_t m_bEnabled = 0x700; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0x708; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0x718; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_CustomOutput0 = 0x720; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput1 = 0x748; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput2 = 0x770; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput3 = 0x798; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput4 = 0x7C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput5 = 0x7E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput6 = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput7 = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput8 = 0x860; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput9 = 0x888; // CEntityIOOutput
}

namespace CBaseCombatCharacter {
    constexpr std::ptrdiff_t m_bForceServerRagdoll = 0x920; // bool
    constexpr std::ptrdiff_t m_hMyWearables = 0x928; // CNetworkUtlVectorBase< CHandle< CEconWearable > >
    constexpr std::ptrdiff_t m_flFieldOfView = 0x940; // float32
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x944; // float32
    constexpr std::ptrdiff_t m_LastHitGroup = 0x948; // HitGroup_t
    constexpr std::ptrdiff_t m_bApplyStressDamage = 0x94C; // bool
    constexpr std::ptrdiff_t m_bloodColor = 0x950; // int32
    constexpr std::ptrdiff_t m_navMeshID = 0x9B0; // int32
    constexpr std::ptrdiff_t m_iDamageCount = 0x9B4; // int32
    constexpr std::ptrdiff_t m_pVecRelationships = 0x9B8; // CUtlVector< RelationshipOverride_t >*
    constexpr std::ptrdiff_t m_strRelationships = 0x9C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_eHull = 0x9C8; // Hull_t
    constexpr std::ptrdiff_t m_nNavHullIdx = 0x9CC; // uint32
}

namespace CBaseDMStart {
    constexpr std::ptrdiff_t m_Master = 0x4B0; // CUtlSymbolLarge
}

namespace CBaseDoor {
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x790; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x79C; // Vector
    constexpr std::ptrdiff_t m_ls = 0x7A8; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0x7C8; // bool
    constexpr std::ptrdiff_t m_bDoorGroup = 0x7C9; // bool
    constexpr std::ptrdiff_t m_bLocked = 0x7CA; // bool
    constexpr std::ptrdiff_t m_bIgnoreDebris = 0x7CB; // bool
    constexpr std::ptrdiff_t m_eSpawnPosition = 0x7CC; // FuncDoorSpawnPos_t
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7D0; // float32
    constexpr std::ptrdiff_t m_NoiseMoving = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ChainTarget = 0x7F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0x800; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0x828; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x850; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x878; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x8A0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x8C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0x940; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bLoopMoveSound = 0x968; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x980; // bool
    constexpr std::ptrdiff_t m_isChaining = 0x981; // bool
    constexpr std::ptrdiff_t m_bIsUsable = 0x982; // bool
}

namespace CBaseEntity {
    constexpr std::ptrdiff_t m_CBodyComponent = 0x30; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x228; // CUtlVector< thinkfunc_t >
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x240; // int32
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x244; // GameTick_t
    constexpr std::ptrdiff_t m_isSteadyState = 0x250; // CBitVec< 64 >
    constexpr std::ptrdiff_t m_lastNetworkChange = 0x258; // float32
    constexpr std::ptrdiff_t m_ResponseContexts = 0x268; // CUtlVector< ResponseContext_t >
    constexpr std::ptrdiff_t m_iszResponseContext = 0x280; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iHealth = 0x2A8; // int32
    constexpr std::ptrdiff_t m_iMaxHealth = 0x2AC; // int32
    constexpr std::ptrdiff_t m_lifeState = 0x2B0; // uint8
    constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2B4; // float32
    constexpr std::ptrdiff_t m_bTakesDamage = 0x2B8; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2BC; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_MoveCollide = 0x2C1; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x2C2; // MoveType_t
    constexpr std::ptrdiff_t m_nWaterTouch = 0x2C3; // uint8
    constexpr std::ptrdiff_t m_nSlimeTouch = 0x2C4; // uint8
    constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2C5; // bool
    constexpr std::ptrdiff_t m_target = 0x2C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveDoneTime = 0x2D0; // float32
    constexpr std::ptrdiff_t m_hDamageFilter = 0x2D4; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_iszDamageFilterName = 0x2D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nSubclassID = 0x2E0; // CUtlStringToken
    constexpr std::ptrdiff_t m_flAnimTime = 0x2F0; // float32
    constexpr std::ptrdiff_t m_flSimulationTime = 0x2F4; // float32
    constexpr std::ptrdiff_t m_flCreateTime = 0x2F8; // GameTime_t
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x2FC; // bool
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x2FD; // uint8
    constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x300; // Vector
    constexpr std::ptrdiff_t m_iTeamNum = 0x30C; // uint8
    constexpr std::ptrdiff_t m_iGlobalname = 0x310; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iSentToClients = 0x318; // int32
    constexpr std::ptrdiff_t m_flSpeed = 0x31C; // float32
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x320; // CUtlString
    constexpr std::ptrdiff_t m_spawnflags = 0x328; // uint32
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x32C; // GameTick_t
    constexpr std::ptrdiff_t m_nSimulationTick = 0x330; // int32
    constexpr std::ptrdiff_t m_OnKilled = 0x338; // CEntityIOOutput
    constexpr std::ptrdiff_t m_fFlags = 0x360; // uint32
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x364; // Vector
    constexpr std::ptrdiff_t m_vecVelocity = 0x370; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3A0; // Vector
    constexpr std::ptrdiff_t m_nPushEnumCount = 0x3AC; // int32
    constexpr std::ptrdiff_t m_pCollision = 0x3B0; // CCollisionProperty*
    constexpr std::ptrdiff_t m_hEffectEntity = 0x3B8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x3BC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_fEffects = 0x3C0; // uint32
    constexpr std::ptrdiff_t m_hGroundEntity = 0x3C4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flFriction = 0x3C8; // float32
    constexpr std::ptrdiff_t m_flElasticity = 0x3CC; // float32
    constexpr std::ptrdiff_t m_flGravityScale = 0x3D0; // float32
    constexpr std::ptrdiff_t m_flTimeScale = 0x3D4; // float32
    constexpr std::ptrdiff_t m_flWaterLevel = 0x3D8; // float32
    constexpr std::ptrdiff_t m_bSimulatedEveryTick = 0x3DC; // bool
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x3DD; // bool
    constexpr std::ptrdiff_t m_bDisableLowViolence = 0x3DE; // bool
    constexpr std::ptrdiff_t m_nWaterType = 0x3DF; // uint8
    constexpr std::ptrdiff_t m_iEFlags = 0x3E0; // int32
    constexpr std::ptrdiff_t m_OnUser1 = 0x3E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser2 = 0x410; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser3 = 0x438; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser4 = 0x460; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInitialTeamNum = 0x488; // int32
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x48C; // GameTime_t
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x490; // QAngle
    constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x49C; // bool
    constexpr std::ptrdiff_t m_bLagCompensate = 0x49D; // bool
    constexpr std::ptrdiff_t m_flOverriddenFriction = 0x4A0; // float32
    constexpr std::ptrdiff_t m_pBlocker = 0x4A4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flLocalTime = 0x4A8; // float32
    constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4AC; // float32
}

namespace CBaseFilter {
    constexpr std::ptrdiff_t m_bNegated = 0x4B0; // bool
    constexpr std::ptrdiff_t m_OnPass = 0x4B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFail = 0x4E0; // CEntityIOOutput
}

namespace CBaseFire {
    constexpr std::ptrdiff_t m_flScale = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flStartScale = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flScaleTime = 0x4B8; // float32
    constexpr std::ptrdiff_t m_nFlags = 0x4BC; // uint32
}

namespace CBaseFlex {
    constexpr std::ptrdiff_t m_flexWeight = 0x890; // CNetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0x8A8; // Vector
    constexpr std::ptrdiff_t m_blinktoggle = 0x8B4; // bool
    constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x908; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0x90C; // GameTime_t
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0x910; // uint32
    constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0x914; // bool
}

namespace CBaseGrenade {
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x928; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExplode = 0x950; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0x978; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x979; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0x97A; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0x97C; // float32
    constexpr std::ptrdiff_t m_flDetonateTime = 0x980; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0x984; // float32
    constexpr std::ptrdiff_t m_flDamage = 0x988; // float32
    constexpr std::ptrdiff_t m_iszBounceSound = 0x990; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0x998; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0x9A4; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_flNextAttack = 0x9BC; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0x9C0; // CHandle< CCSPlayerPawn >
}

namespace CBaseIssue {
    constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
    constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[260]
    constexpr std::ptrdiff_t m_iNumYesVotes = 0x164; // int32
    constexpr std::ptrdiff_t m_iNumNoVotes = 0x168; // int32
    constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x16C; // int32
    constexpr std::ptrdiff_t m_pVoteController = 0x170; // CVoteController*
}

namespace CBaseModelEntity {
    constexpr std::ptrdiff_t m_CRenderComponent = 0x4B0; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0x4B8; // CHitboxComponent
    constexpr std::ptrdiff_t m_flDissolveStartTime = 0x4E0; // GameTime_t
    constexpr std::ptrdiff_t m_OnIgnite = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nRenderMode = 0x510; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0x511; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0x512; // bool
    constexpr std::ptrdiff_t m_clrRender = 0x513; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0x518; // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
    constexpr std::ptrdiff_t m_LightGroup = 0x568; // CUtlStringToken
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x56C; // bool
    constexpr std::ptrdiff_t m_Collision = 0x570; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0x620; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x678; // float32
    constexpr std::ptrdiff_t m_fadeMinDist = 0x67C; // float32
    constexpr std::ptrdiff_t m_fadeMaxDist = 0x680; // float32
    constexpr std::ptrdiff_t m_flFadeScale = 0x684; // float32
    constexpr std::ptrdiff_t m_flShadowStrength = 0x688; // float32
    constexpr std::ptrdiff_t m_nObjectCulling = 0x68C; // uint8
    constexpr std::ptrdiff_t m_nAddDecal = 0x690; // int32
    constexpr std::ptrdiff_t m_vDecalPosition = 0x694; // Vector
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x6A0; // Vector
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x6AC; // float32
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x6B0; // float32
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6B8; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_vecViewOffset = 0x6D0; // CNetworkViewOffsetVector
}

namespace CBaseMoveBehavior {
    constexpr std::ptrdiff_t m_iPositionInterpolator = 0x510; // int32
    constexpr std::ptrdiff_t m_iRotationInterpolator = 0x514; // int32
    constexpr std::ptrdiff_t m_flAnimStartTime = 0x518; // float32
    constexpr std::ptrdiff_t m_flAnimEndTime = 0x51C; // float32
    constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x520; // float32
    constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x528; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x530; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPreKeyFrame = 0x538; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPostKeyFrame = 0x540; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x548; // float32
    constexpr std::ptrdiff_t m_iDirection = 0x54C; // int32
}

namespace CBasePlatTrain {
    constexpr std::ptrdiff_t m_NoiseMoving = 0x780; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_volume = 0x798; // float32
    constexpr std::ptrdiff_t m_flTWidth = 0x79C; // float32
    constexpr std::ptrdiff_t m_flTLength = 0x7A0; // float32
}

namespace CBasePlayerController {
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4B8; // uint64
    constexpr std::ptrdiff_t m_nTickBase = 0x4C0; // uint32
    constexpr std::ptrdiff_t m_hPawn = 0x4F0; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x4F4; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x4F8; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x500; // CUtlVector< CHandle< CBasePlayerController > >
    constexpr std::ptrdiff_t m_bIsHLTV = 0x518; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x51C; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x520; // char[128]
    constexpr std::ptrdiff_t m_szNetworkIDString = 0x5A0; // CUtlString
    constexpr std::ptrdiff_t m_fLerpTime = 0x5A8; // float32
    constexpr std::ptrdiff_t m_bLagCompensation = 0x5AC; // bool
    constexpr std::ptrdiff_t m_bPredict = 0x5AD; // bool
    constexpr std::ptrdiff_t m_bAutoKickDisabled = 0x5AE; // bool
    constexpr std::ptrdiff_t m_bIsLowViolence = 0x5AF; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0x5B0; // bool
    constexpr std::ptrdiff_t m_nHighestCommandNumberReceived = 0x628; // int32
    constexpr std::ptrdiff_t m_nUsecTimestampLastUserCmdReceived = 0x630; // int64
    constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x648; // ChatIgnoreType_t
    constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x64C; // float32
    constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x650; // float32
    constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x654; // int32
    constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x658; // bool
    constexpr std::ptrdiff_t m_steamID = 0x668; // uint64
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x670; // uint32
}

namespace CBasePlayerPawn {
    constexpr std::ptrdiff_t m_pWeaponServices = 0x9D0; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0x9D8; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0x9E0; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0x9E8; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0x9F0; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0x9F8; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0xA00; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0xA08; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0xA10; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xA20; // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
    constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xA70; // uint32
    constexpr std::ptrdiff_t v_angle = 0xA74; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0xA80; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0xA8C; // uint32
    constexpr std::ptrdiff_t m_skybox3d = 0xA90; // sky3dparams_t
    constexpr std::ptrdiff_t m_fTimeLastHurt = 0xB20; // GameTime_t
    constexpr std::ptrdiff_t m_flDeathTime = 0xB24; // GameTime_t
    constexpr std::ptrdiff_t m_fNextSuicideTime = 0xB28; // GameTime_t
    constexpr std::ptrdiff_t m_fInitHUD = 0xB2C; // bool
    constexpr std::ptrdiff_t m_pExpresser = 0xB30; // CAI_Expresser*
    constexpr std::ptrdiff_t m_hController = 0xB38; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xB40; // float32
    constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xB44; // float32
    constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xB48; // CEntityIndex
}

namespace CBasePlayerVData {
    constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
    constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
    constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
    constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float32
    constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float32
    constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32
    constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32
    constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32
    constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float32
    constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float32
    constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float32
}

namespace CBasePlayerWeapon {
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xC18; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xC1C; // float32
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xC20; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xC24; // float32
    constexpr std::ptrdiff_t m_iClip1 = 0xC28; // int32
    constexpr std::ptrdiff_t m_iClip2 = 0xC2C; // int32
    constexpr std::ptrdiff_t m_pReserveAmmo = 0xC30; // int32[2]
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xC38; // CEntityIOOutput
}

namespace CBasePlayerWeaponVData {
    constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108; // bool
    constexpr std::ptrdiff_t m_bAllowFlipping = 0x109; // bool
    constexpr std::ptrdiff_t m_bIsFullAuto = 0x10A; // bool
    constexpr std::ptrdiff_t m_nNumBullets = 0x10C; // int32
    constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110; // CUtlString
    constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_iFlags = 0x1F8; // ItemFlagTypes_t
    constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC; // int32
    constexpr std::ptrdiff_t m_iMaxClip2 = 0x200; // int32
    constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204; // int32
    constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208; // int32
    constexpr std::ptrdiff_t m_iWeight = 0x20C; // int32
    constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210; // bool
    constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211; // bool
    constexpr std::ptrdiff_t m_iRumbleEffect = 0x214; // RumbleEffect_t
    constexpr std::ptrdiff_t m_aShootSounds = 0x218; // CUtlMap< WeaponSound_t, CSoundEventName >
    constexpr std::ptrdiff_t m_iSlot = 0x238; // int32
    constexpr std::ptrdiff_t m_iPosition = 0x23C; // int32
}

namespace CBaseProp {
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x890; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0x894; // int32
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x898; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x89C; // matrix3x4_t
}

namespace CBasePropDoor {
    constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xB18; // float32
    constexpr std::ptrdiff_t m_hDoorList = 0xB20; // CUtlVector< CHandle< CBasePropDoor > >
    constexpr std::ptrdiff_t m_nHardwareType = 0xB38; // int32
    constexpr std::ptrdiff_t m_bNeedsHardware = 0xB3C; // bool
    constexpr std::ptrdiff_t m_eDoorState = 0xB40; // DoorState_t
    constexpr std::ptrdiff_t m_bLocked = 0xB44; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0xB48; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0xB54; // QAngle
    constexpr std::ptrdiff_t m_hBlocker = 0xB60; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bFirstBlocked = 0xB64; // bool
    constexpr std::ptrdiff_t m_ls = 0xB68; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0xB88; // bool
    constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xB8C; // Vector
    constexpr std::ptrdiff_t m_hActivator = 0xB98; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_SoundMoving = 0xBA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundOpen = 0xBB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundClose = 0xBB8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLock = 0xBC0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundUnlock = 0xBC8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLatch = 0xBD0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundPound = 0xBD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundJiggle = 0xBE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLockedAnim = 0xBE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_numCloseAttempts = 0xBF0; // int32
    constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xBF4; // CUtlStringToken
    constexpr std::ptrdiff_t m_SlaveName = 0xBF8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMaster = 0xC00; // CHandle< CBasePropDoor >
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0xC08; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0xC30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xC58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xC80; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xCA8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xCD0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0xCF8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0xD20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0xD48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAjarOpen = 0xD70; // CEntityIOOutput
}

namespace CBaseToggle {
    constexpr std::ptrdiff_t m_toggle_state = 0x700; // TOGGLE_STATE
    constexpr std::ptrdiff_t m_flMoveDistance = 0x704; // float32
    constexpr std::ptrdiff_t m_flWait = 0x708; // float32
    constexpr std::ptrdiff_t m_flLip = 0x70C; // float32
    constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x710; // bool
    constexpr std::ptrdiff_t m_vecPosition1 = 0x714; // Vector
    constexpr std::ptrdiff_t m_vecPosition2 = 0x720; // Vector
    constexpr std::ptrdiff_t m_vecMoveAng = 0x72C; // QAngle
    constexpr std::ptrdiff_t m_vecAngle1 = 0x738; // QAngle
    constexpr std::ptrdiff_t m_vecAngle2 = 0x744; // QAngle
    constexpr std::ptrdiff_t m_flHeight = 0x750; // float32
    constexpr std::ptrdiff_t m_hActivator = 0x754; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecFinalDest = 0x758; // Vector
    constexpr std::ptrdiff_t m_vecFinalAngle = 0x764; // QAngle
    constexpr std::ptrdiff_t m_movementType = 0x770; // int32
    constexpr std::ptrdiff_t m_sMaster = 0x778; // CUtlSymbolLarge
}

namespace CBaseTrigger {
    constexpr std::ptrdiff_t m_bDisabled = 0x780; // bool
    constexpr std::ptrdiff_t m_iFilterName = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x790; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_OnStartTouch = 0x798; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouchAll = 0x7C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0x7E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouchAll = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouching = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotTouching = 0x860; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hTouchingEntities = 0x888; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0x8A0; // bool
}

namespace CBaseViewModel {
    constexpr std::ptrdiff_t m_vecLastFacing = 0x898; // Vector
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x8A4; // uint32
    constexpr std::ptrdiff_t m_nAnimationParity = 0x8A8; // uint32
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0x8AC; // float32
    constexpr std::ptrdiff_t m_hWeapon = 0x8B0; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_sVMName = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0x8C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0x8C8; // HSequence
    constexpr std::ptrdiff_t m_oldLayer = 0x8CC; // int32
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0x8D0; // float32
    constexpr std::ptrdiff_t m_hControlPanel = 0x8D4; // CHandle< CBaseEntity >
}

namespace CBeam {
    constexpr std::ptrdiff_t m_flFrameRate = 0x700; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x704; // float32
    constexpr std::ptrdiff_t m_flFireTime = 0x708; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0x70C; // float32
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0x710; // uint8
    constexpr std::ptrdiff_t m_hBaseMaterial = 0x718; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nHaloIndex = 0x720; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nBeamType = 0x728; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0x72C; // uint32
    constexpr std::ptrdiff_t m_hAttachEntity = 0x730; // CHandle< CBaseEntity >[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0x758; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0x764; // float32
    constexpr std::ptrdiff_t m_fEndWidth = 0x768; // float32
    constexpr std::ptrdiff_t m_fFadeLength = 0x76C; // float32
    constexpr std::ptrdiff_t m_fHaloScale = 0x770; // float32
    constexpr std::ptrdiff_t m_fAmplitude = 0x774; // float32
    constexpr std::ptrdiff_t m_fStartFrame = 0x778; // float32
    constexpr std::ptrdiff_t m_fSpeed = 0x77C; // float32
    constexpr std::ptrdiff_t m_flFrame = 0x780; // float32
    constexpr std::ptrdiff_t m_nClipStyle = 0x784; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0x788; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0x78C; // Vector
    constexpr std::ptrdiff_t m_hEndEntity = 0x798; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nDissolveType = 0x79C; // int32
}

namespace CBlood {
    constexpr std::ptrdiff_t m_vecSprayAngles = 0x4B0; // QAngle
    constexpr std::ptrdiff_t m_vecSprayDir = 0x4BC; // Vector
    constexpr std::ptrdiff_t m_flAmount = 0x4C8; // float32
    constexpr std::ptrdiff_t m_Color = 0x4CC; // int32
}

namespace CBodyComponent {
    constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
    constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
}

namespace CBodyComponentBaseAnimGraph {
    constexpr std::ptrdiff_t m_animationController = 0x470; // CBaseAnimGraphController
    constexpr std::ptrdiff_t __m_pChainEntity = 0x750; // CNetworkVarChainer
}

namespace CBodyComponentBaseModelEntity {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x470; // CNetworkVarChainer
}

namespace CBodyComponentPoint {
    constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

namespace CBodyComponentSkeletonInstance {
    constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x440; // CNetworkVarChainer
}

namespace CBombTarget {
    constexpr std::ptrdiff_t m_OnBombExplode = 0x8A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombPlanted = 0x8D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefused = 0x8F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsBombSiteB = 0x920; // bool
    constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x921; // bool
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0x922; // bool
    constexpr std::ptrdiff_t m_szMountTarget = 0x928; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hInstructorHint = 0x930; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x934; // int32
}

namespace CBot {
    constexpr std::ptrdiff_t m_pController = 0x10; // CCSPlayerController*
    constexpr std::ptrdiff_t m_pPlayer = 0x18; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // bool
    constexpr std::ptrdiff_t m_id = 0x24; // uint32
    constexpr std::ptrdiff_t m_isRunning = 0x98; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0x99; // bool
    constexpr std::ptrdiff_t m_forwardSpeed = 0x9C; // float32
    constexpr std::ptrdiff_t m_leftSpeed = 0xA0; // float32
    constexpr std::ptrdiff_t m_verticalSpeed = 0xA4; // float32
    constexpr std::ptrdiff_t m_buttonFlags = 0xA8; // uint64
    constexpr std::ptrdiff_t m_jumpTimestamp = 0xB0; // float32
    constexpr std::ptrdiff_t m_viewForward = 0xB4; // Vector
    constexpr std::ptrdiff_t m_postureStackIndex = 0xD0; // int32
}

namespace CBreakable {
    constexpr std::ptrdiff_t m_Material = 0x710; // Materials
    constexpr std::ptrdiff_t m_hBreaker = 0x714; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_Explosion = 0x718; // Explosions
    constexpr std::ptrdiff_t m_iszSpawnObject = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPressureDelay = 0x728; // float32
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x72C; // int32
    constexpr std::ptrdiff_t m_iszPropData = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x738; // float32
    constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x73C; // EOverrideBlockLOS_t
    constexpr std::ptrdiff_t m_OnBreak = 0x740; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x768; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x790; // float32
    constexpr std::ptrdiff_t m_flDmgModClub = 0x794; // float32
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x798; // float32
    constexpr std::ptrdiff_t m_flDmgModFire = 0x79C; // float32
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x7A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0x7B0; // int32
    constexpr std::ptrdiff_t m_PerformanceMode = 0x7B4; // PerformanceMode_t
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x7B8; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x7BC; // GameTime_t
}

namespace CBreakableProp {
    constexpr std::ptrdiff_t m_OnBreak = 0x8E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x908; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnTakeDamage = 0x930; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x958; // float32
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x95C; // int32
    constexpr std::ptrdiff_t m_preferredCarryAngles = 0x960; // QAngle
    constexpr std::ptrdiff_t m_flPressureDelay = 0x96C; // float32
    constexpr std::ptrdiff_t m_hBreaker = 0x970; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_PerformanceMode = 0x974; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x978; // float32
    constexpr std::ptrdiff_t m_flDmgModClub = 0x97C; // float32
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x980; // float32
    constexpr std::ptrdiff_t m_flDmgModFire = 0x984; // float32
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x988; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0x990; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0x998; // int32
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x99C; // GameTime_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x9A0; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0x9A4; // float32
    constexpr std::ptrdiff_t m_explodeRadius = 0x9A8; // float32
    constexpr std::ptrdiff_t m_explosionDelay = 0x9B0; // float32
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0x9B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0x9C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0x9C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0x9D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x9D8; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x9DC; // GameTime_t
    constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0x9E0; // bool
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x9E4; // float32
    constexpr std::ptrdiff_t m_hLastAttacker = 0x9E8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hFlareEnt = 0x9EC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bUsePuntSound = 0x9F0; // bool
    constexpr std::ptrdiff_t m_iszPuntSound = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_noGhostCollision = 0xA00; // bool
}

namespace CBreakableStageHelper {
    constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32
    constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32
}

namespace CBtActionAim {
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szAimReadyKey = 0x80; // CUtlString
    constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88; // float32
    constexpr std::ptrdiff_t m_bDoneAiming = 0x8C; // bool
    constexpr std::ptrdiff_t m_flLerpStartTime = 0x90; // float32
    constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94; // float32
    constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98; // float32
    constexpr std::ptrdiff_t m_NextLookTarget = 0x9C; // QAngle
    constexpr std::ptrdiff_t m_AimTimer = 0xA8; // CountdownTimer
    constexpr std::ptrdiff_t m_SniperHoldTimer = 0xC0; // CountdownTimer
    constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xD8; // CountdownTimer
    constexpr std::ptrdiff_t m_bAcquired = 0xF0; // bool
}

namespace CBtActionCombatPositioning {
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80; // CUtlString
    constexpr std::ptrdiff_t m_ActionTimer = 0x88; // CountdownTimer
    constexpr std::ptrdiff_t m_bCrouching = 0xA0; // bool
}

namespace CBtActionMoveTo {
    constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60; // CUtlString
    constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szThreatInputKey = 0x70; // CUtlString
    constexpr std::ptrdiff_t m_vecDestination = 0x78; // Vector
    constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84; // bool
    constexpr std::ptrdiff_t m_bComputePath = 0x85; // bool
    constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88; // float32
    constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
    constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xA8; // CountdownTimer
    constexpr std::ptrdiff_t m_RepathTimer = 0xC0; // CountdownTimer
    constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xD8; // float32
    constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xDC; // float32
    constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xE0; // float32
    constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xE4; // float32
}

namespace CBtActionParachutePositioning {
    constexpr std::ptrdiff_t m_ActionTimer = 0x58; // CountdownTimer
}

namespace CBtNodeCondition {
    constexpr std::ptrdiff_t m_bNegated = 0x58; // bool
}

namespace CBtNodeConditionInactive {
    constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78; // float32
    constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7C; // float32
    constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80; // CountdownTimer
}

namespace CBubbling {
    constexpr std::ptrdiff_t m_density = 0x700; // int32
    constexpr std::ptrdiff_t m_frequency = 0x704; // int32
    constexpr std::ptrdiff_t m_state = 0x708; // int32
}

namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float32
}

namespace CBuyZone {
    constexpr std::ptrdiff_t m_LegacyTeamNum = 0x8A8; // int32
}

namespace CC4 {
    constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xDD8; // Vector
    constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0xDE4; // Vector
    constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0xDF0; // bool
    constexpr std::ptrdiff_t m_bStartedArming = 0xDF1; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0xDF4; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0xDF8; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0xDF9; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0xE00; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xE18; // int32
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0xE1C; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0xE23; // bool
    constexpr std::ptrdiff_t m_bDroppedFromDeath = 0xE24; // bool
}

namespace CCSBot {
    constexpr std::ptrdiff_t m_lastCoopSpawnPoint = 0xD8; // CHandle< SpawnPointCoopEnemy >
    constexpr std::ptrdiff_t m_eyePosition = 0xE8; // Vector
    constexpr std::ptrdiff_t m_name = 0xF4; // char[64]
    constexpr std::ptrdiff_t m_combatRange = 0x134; // float32
    constexpr std::ptrdiff_t m_isRogue = 0x138; // bool
    constexpr std::ptrdiff_t m_rogueTimer = 0x140; // CountdownTimer
    constexpr std::ptrdiff_t m_diedLastRound = 0x15C; // bool
    constexpr std::ptrdiff_t m_safeTime = 0x160; // float32
    constexpr std::ptrdiff_t m_wasSafe = 0x164; // bool
    constexpr std::ptrdiff_t m_blindFire = 0x16C; // bool
    constexpr std::ptrdiff_t m_surpriseTimer = 0x170; // CountdownTimer
    constexpr std::ptrdiff_t m_bAllowActive = 0x188; // bool
    constexpr std::ptrdiff_t m_isFollowing = 0x189; // bool
    constexpr std::ptrdiff_t m_leader = 0x18C; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_followTimestamp = 0x190; // float32
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x194; // float32
    constexpr std::ptrdiff_t m_hurryTimer = 0x198; // CountdownTimer
    constexpr std::ptrdiff_t m_alertTimer = 0x1B0; // CountdownTimer
    constexpr std::ptrdiff_t m_sneakTimer = 0x1C8; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0x1E0; // CountdownTimer
    constexpr std::ptrdiff_t m_stateTimestamp = 0x4B0; // float32
    constexpr std::ptrdiff_t m_isAttacking = 0x4B4; // bool
    constexpr std::ptrdiff_t m_isOpeningDoor = 0x4B5; // bool
    constexpr std::ptrdiff_t m_taskEntity = 0x4BC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_goalPosition = 0x4CC; // Vector
    constexpr std::ptrdiff_t m_goalEntity = 0x4D8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_avoid = 0x4DC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_avoidTimestamp = 0x4E0; // float32
    constexpr std::ptrdiff_t m_isStopping = 0x4E4; // bool
    constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x4E5; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0x4E8; // IntervalTimer
    constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x4F8; // bool
    constexpr std::ptrdiff_t m_pathIndex = 0x65F0; // int32
    constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x65F4; // GameTime_t
    constexpr std::ptrdiff_t m_repathTimer = 0x65F8; // CountdownTimer
    constexpr std::ptrdiff_t m_avoidFriendTimer = 0x6610; // CountdownTimer
    constexpr std::ptrdiff_t m_isFriendInTheWay = 0x6628; // bool
    constexpr std::ptrdiff_t m_politeTimer = 0x6630; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x6648; // bool
    constexpr std::ptrdiff_t m_pathLadderEnd = 0x6674; // float32
    constexpr std::ptrdiff_t m_mustRunTimer = 0x66C0; // CountdownTimer
    constexpr std::ptrdiff_t m_waitTimer = 0x66D8; // CountdownTimer
    constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x66F0; // CountdownTimer
    constexpr std::ptrdiff_t m_playerTravelDistance = 0x6708; // float32[64]
    constexpr std::ptrdiff_t m_travelDistancePhase = 0x6808; // uint8
    constexpr std::ptrdiff_t m_hostageEscortCount = 0x69A0; // uint8
    constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x69A4; // float32
    constexpr std::ptrdiff_t m_desiredTeam = 0x69A8; // int32
    constexpr std::ptrdiff_t m_hasJoined = 0x69AC; // bool
    constexpr std::ptrdiff_t m_isWaitingForHostage = 0x69AD; // bool
    constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x69B0; // CountdownTimer
    constexpr std::ptrdiff_t m_waitForHostageTimer = 0x69C8; // CountdownTimer
    constexpr std::ptrdiff_t m_noisePosition = 0x69E0; // Vector
    constexpr std::ptrdiff_t m_noiseTravelDistance = 0x69EC; // float32
    constexpr std::ptrdiff_t m_noiseTimestamp = 0x69F0; // float32
    constexpr std::ptrdiff_t m_noiseSource = 0x69F8; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_noiseBendTimer = 0x6A10; // CountdownTimer
    constexpr std::ptrdiff_t m_bentNoisePosition = 0x6A28; // Vector
    constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x6A34; // bool
    constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6A38; // float32
    constexpr std::ptrdiff_t m_lookAheadAngle = 0x6A3C; // float32
    constexpr std::ptrdiff_t m_forwardAngle = 0x6A40; // float32
    constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x6A44; // float32
    constexpr std::ptrdiff_t m_lookAtSpot = 0x6A4C; // Vector
    constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x6A5C; // float32
    constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6A60; // float32
    constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x6A64; // float32
    constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6A68; // bool
    constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6A69; // bool
    constexpr std::ptrdiff_t m_lookAtDesc = 0x6A70; // char*
    constexpr std::ptrdiff_t m_peripheralTimestamp = 0x6A78; // float32
    constexpr std::ptrdiff_t m_approachPointCount = 0x6C00; // uint8
    constexpr std::ptrdiff_t m_approachPointViewPosition = 0x6C04; // Vector
    constexpr std::ptrdiff_t m_viewSteadyTimer = 0x6C10; // IntervalTimer
    constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x6C28; // CountdownTimer
    constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6C48; // CountdownTimer
    constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6C68; // float32
    constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x7070; // int32
    constexpr std::ptrdiff_t m_lookPitch = 0x7074; // float32
    constexpr std::ptrdiff_t m_lookPitchVel = 0x7078; // float32
    constexpr std::ptrdiff_t m_lookYaw = 0x707C; // float32
    constexpr std::ptrdiff_t m_lookYawVel = 0x7080; // float32
    constexpr std::ptrdiff_t m_targetSpot = 0x7084; // Vector
    constexpr std::ptrdiff_t m_targetSpotVelocity = 0x7090; // Vector
    constexpr std::ptrdiff_t m_targetSpotPredicted = 0x709C; // Vector
    constexpr std::ptrdiff_t m_aimError = 0x70A8; // QAngle
    constexpr std::ptrdiff_t m_aimGoal = 0x70B4; // QAngle
    constexpr std::ptrdiff_t m_targetSpotTime = 0x70C0; // GameTime_t
    constexpr std::ptrdiff_t m_aimFocus = 0x70C4; // float32
    constexpr std::ptrdiff_t m_aimFocusInterval = 0x70C8; // float32
    constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x70CC; // GameTime_t
    constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x70D8; // CountdownTimer
    constexpr std::ptrdiff_t m_enemy = 0x70F0; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_isEnemyVisible = 0x70F4; // bool
    constexpr std::ptrdiff_t m_visibleEnemyParts = 0x70F5; // uint8
    constexpr std::ptrdiff_t m_lastEnemyPosition = 0x70F8; // Vector
    constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x7104; // float32
    constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x7108; // float32
    constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x710C; // float32
    constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x7110; // float32
    constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x7114; // float32
    constexpr std::ptrdiff_t m_isLastEnemyDead = 0x7118; // bool
    constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x711C; // int32
    constexpr std::ptrdiff_t m_bomber = 0x7328; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_nearbyFriendCount = 0x732C; // int32
    constexpr std::ptrdiff_t m_closestVisibleFriend = 0x7330; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x7334; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_attentionInterval = 0x7338; // IntervalTimer
    constexpr std::ptrdiff_t m_attacker = 0x7348; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_attackedTimestamp = 0x734C; // float32
    constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x7350; // IntervalTimer
    constexpr std::ptrdiff_t m_lastVictimID = 0x7360; // int32
    constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x7364; // bool
    constexpr std::ptrdiff_t m_isRapidFiring = 0x7365; // bool
    constexpr std::ptrdiff_t m_equipTimer = 0x7368; // IntervalTimer
    constexpr std::ptrdiff_t m_zoomTimer = 0x7378; // CountdownTimer
    constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x7390; // GameTime_t
    constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x7398; // CountdownTimer
    constexpr std::ptrdiff_t m_bIsSleeping = 0x73B0; // bool
    constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x73B1; // bool
    constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x73B8; // CountdownTimer
    constexpr std::ptrdiff_t m_enemyQueueIndex = 0x7470; // uint8
    constexpr std::ptrdiff_t m_enemyQueueCount = 0x7471; // uint8
    constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x7472; // uint8
    constexpr std::ptrdiff_t m_isStuck = 0x7473; // bool
    constexpr std::ptrdiff_t m_stuckTimestamp = 0x7474; // GameTime_t
    constexpr std::ptrdiff_t m_stuckSpot = 0x7478; // Vector
    constexpr std::ptrdiff_t m_wiggleTimer = 0x7488; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckJumpTimer = 0x74A0; // CountdownTimer
    constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x74B8; // GameTime_t
    constexpr std::ptrdiff_t m_avgVel = 0x74BC; // float32[10]
    constexpr std::ptrdiff_t m_avgVelIndex = 0x74E4; // int32
    constexpr std::ptrdiff_t m_avgVelCount = 0x74E8; // int32
    constexpr std::ptrdiff_t m_lastOrigin = 0x74EC; // Vector
    constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x74FC; // float32
    constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x7500; // float32
    constexpr std::ptrdiff_t m_radioSubject = 0x7504; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_radioPosition = 0x7508; // Vector
    constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x7514; // float32
    constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x7520; // int32
}

namespace CCSGOViewModel {
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x8D8; // bool
    constexpr std::ptrdiff_t m_nWeaponParity = 0x8DC; // uint32
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0x8E0; // uint32
}

namespace CCSGO_TeamPreviewCharacterPosition {
    constexpr std::ptrdiff_t m_nVariant = 0x4B0; // int32
    constexpr std::ptrdiff_t m_nRandom = 0x4B4; // int32
    constexpr std::ptrdiff_t m_nOrdinal = 0x4B8; // int32
    constexpr std::ptrdiff_t m_sWeaponName = 0x4C0; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x4C8; // uint64
    constexpr std::ptrdiff_t m_weaponItem = 0x4D0; // CEconItemView
}

namespace CCSGameModeRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CCSGameModeRules_Deathmatch {
    constexpr std::ptrdiff_t m_bFirstThink = 0x30; // bool
    constexpr std::ptrdiff_t m_bFirstThinkAfterConnected = 0x31; // bool
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x34; // GameTime_t
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x38; // float32
    constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x3C; // int16
}

namespace CCSGameRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x98; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_coopMissionManager = 0xC0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bFreezePeriod = 0xC4; // bool
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC5; // bool
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xC8; // GameTime_t
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xCC; // GameTime_t
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xD0; // int32
    constexpr std::ptrdiff_t m_nPauseStartTick = 0xD4; // int32
    constexpr std::ptrdiff_t m_bServerPaused = 0xD8; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0xD9; // bool
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xDA; // bool
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xDB; // bool
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xDC; // float32
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xE0; // float32
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE4; // int32
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE8; // int32
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xEC; // bool
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xED; // bool
    constexpr std::ptrdiff_t m_iRoundTime = 0xF0; // int32
    constexpr std::ptrdiff_t m_fMatchStartTime = 0xF4; // float32
    constexpr std::ptrdiff_t m_fRoundStartTime = 0xF8; // GameTime_t
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0xFC; // GameTime_t
    constexpr std::ptrdiff_t m_bGameRestart = 0x100; // bool
    constexpr std::ptrdiff_t m_flGameStartTime = 0x104; // float32
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x108; // float32
    constexpr std::ptrdiff_t m_gamePhase = 0x10C; // int32
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x110; // int32
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x114; // int32
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x118; // int32
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x11C; // int32
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x120; // bool
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x121; // bool
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x122; // bool
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x123; // bool
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x124; // bool
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x128; // int32
    constexpr std::ptrdiff_t m_bIsValveDS = 0x12C; // bool
    constexpr std::ptrdiff_t m_bLogoMap = 0x12D; // bool
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12E; // bool
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x130; // int32
    constexpr std::ptrdiff_t m_MatchDevice = 0x134; // int32
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0x138; // bool
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x13C; // int32
    constexpr std::ptrdiff_t m_szTournamentEventName = 0x140; // char[512]
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x340; // char[512]
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x540; // char[512]
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x740; // char[512]
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x940; // int32
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0x94C; // bool
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0x94D; // bool
    constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x950; // int32
    constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
    constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
    constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x95C; // int32
    constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x960; // int32
    constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x964; // uint32
    constexpr std::ptrdiff_t m_numGlobalGifters = 0x968; // uint32
    constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
    constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
    constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x990; // uint16[100]
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
    constexpr std::ptrdiff_t m_numBestOfMaps = 0xA68; // int32
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA6C; // int32
    constexpr std::ptrdiff_t m_bBombDropped = 0xA70; // bool
    constexpr std::ptrdiff_t m_bBombPlanted = 0xA71; // bool
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA74; // int32
    constexpr std::ptrdiff_t m_eRoundWinReason = 0xA78; // int32
    constexpr std::ptrdiff_t m_bTCantBuy = 0xA7C; // bool
    constexpr std::ptrdiff_t m_bCTCantBuy = 0xA7D; // bool
    constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA84; // int32[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
    constexpr std::ptrdiff_t m_nServerQuestID = 0xCEC; // int32
    constexpr std::ptrdiff_t m_vMinimapMins = 0xCF0; // Vector
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCFC; // Vector
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
    constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xD28; // bool
    constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD7C; // int32
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD80; // int32
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD84; // int32
    constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xDA0; // bool
    constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xDA4; // GameTime_t
    constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xDA8; // GameTime_t
    constexpr std::ptrdiff_t m_bLevelInitialized = 0xDAC; // bool
    constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xDB0; // int32
    constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xDB4; // int32
    constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xDB8; // bool
    constexpr std::ptrdiff_t m_endMatchOnThink = 0xDB9; // bool
    constexpr std::ptrdiff_t m_iFreezeTime = 0xDBC; // int32
    constexpr std::ptrdiff_t m_iNumTerrorist = 0xDC0; // int32
    constexpr std::ptrdiff_t m_iNumCT = 0xDC4; // int32
    constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xDC8; // int32
    constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xDCC; // int32
    constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_bFirstConnected = 0xDE8; // bool
    constexpr std::ptrdiff_t m_bCompleteReset = 0xDE9; // bool
    constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDEA; // bool
    constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDEB; // bool
    constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDEC; // bool
    constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDF8; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
    constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xE18; // uint32
    constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xE20; // char*
    constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xE28; // uint32
    constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xE2C; // uint32
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE30; // uint32
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE34; // uint32
    constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE40; // bool
    constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE41; // bool
    constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE78; // int32
    constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE7C; // float32
    constexpr std::ptrdiff_t m_flCoopRespawnAndHealTime = 0xE98; // float32
    constexpr std::ptrdiff_t m_coopBonusCoinsFound = 0xE9C; // int32
    constexpr std::ptrdiff_t m_coopBonusPistolsOnly = 0xEA0; // bool
    constexpr std::ptrdiff_t m_coopPlayersInDeploymentZone = 0xEA1; // bool
    constexpr std::ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
    constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xEA4; // int32
    constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xEA8; // float32
    constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
    constexpr std::ptrdiff_t m_iAccountTerrorist = 0xEB0; // int32
    constexpr std::ptrdiff_t m_iAccountCT = 0xEB4; // int32
    constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xEB8; // int32
    constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xEBC; // int32
    constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xEC0; // int32
    constexpr std::ptrdiff_t m_iMaxNumCTs = 0xEC4; // int32
    constexpr std::ptrdiff_t m_iLoserBonus = 0xEC8; // int32
    constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xECC; // int32
    constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xED0; // float32
    constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xED4; // bool
    constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xED8; // float32
    constexpr std::ptrdiff_t m_iHostagesRescued = 0xEE0; // int32
    constexpr std::ptrdiff_t m_iHostagesTouched = 0xEE4; // int32
    constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEE8; // float32
    constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEEC; // bool
    constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEED; // bool
    constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEEE; // bool
    constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEEF; // bool
    constexpr std::ptrdiff_t m_firstKillTime = 0xEF4; // float32
    constexpr std::ptrdiff_t m_firstBloodTime = 0xEFC; // float32
    constexpr std::ptrdiff_t m_hostageWasInjured = 0xF18; // bool
    constexpr std::ptrdiff_t m_hostageWasKilled = 0xF19; // bool
    constexpr std::ptrdiff_t m_bVoteCalled = 0xF28; // bool
    constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xF29; // bool
    constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xF2C; // float32
    constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xF30; // bool
    constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xF34; // int32
    constexpr std::ptrdiff_t m_bTargetBombed = 0xF38; // bool
    constexpr std::ptrdiff_t m_bBombDefused = 0xF39; // bool
    constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF3A; // bool
    constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF58; // Vector
    constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF68; // CUtlVector< SpawnPoint* >
    constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector< SpawnPoint* >
    constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF98; // int32
    constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xF9C; // int32
    constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFA0; // CUtlVector< SpawnPoint* >
    constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFB8; // CUtlVector< SpawnPoint* >
    constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFD0; // bool
    constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFD4; // float32
    constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1240; // bool
    constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1241; // bool
    constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x1244; // GameTime_t
    constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1248; // float32
    constexpr std::ptrdiff_t m_flLastThinkTime = 0x124C; // GameTime_t
    constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1250; // float32
    constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x1254; // int32
    constexpr std::ptrdiff_t m_bMatchAbortedDueToPlayerBan = 0x14D0; // bool
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14D1; // bool
    constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x14D2; // bool
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14D3; // bool
    constexpr std::ptrdiff_t m_pGameModeRules = 0x14F0; // CCSGameModeRules*
    constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x14F8; // KeyValues3
    constexpr std::ptrdiff_t m_hPlayerResource = 0x1560; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_RetakeRules = 0x1568; // CRetakeGameRules
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x174C; // int32
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x1750; // int32
    constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1758; // CUtlVector< int32 >[4]
    constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17B8; // bool[4]
    constexpr std::ptrdiff_t m_nMatchEndCount = 0x17E0; // uint8
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x17E4; // int32
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17E8; // int32
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17EC; // bool
    constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x17F0; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x17F4; // bool
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x27B0; // float64
    constexpr std::ptrdiff_t m_bSkipNextPerfSample = 0x27B8; // bool
}

namespace CCSGameRulesProxy {
    constexpr std::ptrdiff_t m_pGameRules = 0x4B0; // CCSGameRules*
}

namespace CCSPlace {
    constexpr std::ptrdiff_t m_name = 0x708; // CUtlSymbolLarge
}

namespace CCSPlayerBase_CameraServices {
    constexpr std::ptrdiff_t m_iFOV = 0x170; // uint32
    constexpr std::ptrdiff_t m_iFOVStart = 0x174; // uint32
    constexpr std::ptrdiff_t m_flFOVTime = 0x178; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVRate = 0x17C; // float32
    constexpr std::ptrdiff_t m_hZoomOwner = 0x180; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTriggerFogList = 0x188; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A0; // CHandle< CBaseEntity >
}

namespace CCSPlayerController {
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6A0; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x6A8; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x6B0; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x6B8; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x6C0; // uint32
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x6C4; // bool
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x6C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x6D0; // uint8
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x6D4; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x6D8; // int32
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x6DC; // bool
    constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x6DD; // bool
    constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x6E0; // int32
    constexpr std::ptrdiff_t m_bTeamChanged = 0x6E4; // bool
    constexpr std::ptrdiff_t m_bInSwitchTeam = 0x6E5; // bool
    constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x6E6; // bool
    constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x6E7; // bool
    constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x6E8; // bool
    constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x6E9; // bool
    constexpr std::ptrdiff_t m_szClan = 0x6F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szClanName = 0x6F8; // char[32]
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x718; // int32
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x720; // uint64
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x728; // uint64
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x730; // int32
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x734; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x738; // int8
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x73C; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x740; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x744; // int32
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x748; // int32
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x74C; // uint16
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x750; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x754; // uint32
    constexpr std::ptrdiff_t m_iDraftIndex = 0x7C0; // int32
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7C4; // uint32
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7C8; // uint32
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7CC; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7CD; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7CE; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7CF; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0x7D0; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7D4; // int32
    constexpr std::ptrdiff_t m_bControllingBot = 0x7E0; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7E1; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7E2; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7E4; // int32
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7E8; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7EC; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_hObserverPawn = 0x7F0; // CHandle< CCSObserverPawn >
    constexpr std::ptrdiff_t m_DesiredObserverMode = 0x7F4; // int32
    constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x7F8; // CEntityHandle
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x7FC; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0x800; // uint32
    constexpr std::ptrdiff_t m_iPawnArmor = 0x804; // int32
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x808; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x809; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x80A; // uint16
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x80C; // int32
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x810; // int32
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x814; // int32
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x818; // CHandle< CCSPlayerController >
    constexpr std::ptrdiff_t m_iScore = 0x81C; // int32
    constexpr std::ptrdiff_t m_iRoundScore = 0x820; // int32
    constexpr std::ptrdiff_t m_vecKills = 0x828; // CNetworkUtlVectorBase< EKillTypes_t >
    constexpr std::ptrdiff_t m_iMVPs = 0x840; // int32
    constexpr std::ptrdiff_t m_nUpdateCounter = 0x844; // int32
    constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xF8E8; // IntervalTimer
    constexpr std::ptrdiff_t m_bShowHints = 0xF900; // bool
    constexpr std::ptrdiff_t m_iNextTimeCheck = 0xF904; // int32
}

namespace CCSPlayerController_ActionTrackingServices {
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
    constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x148; // int32
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x14C; // int32
}

namespace CCSPlayerController_DamageServices {
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
    constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar< CDamageRecord >
}

namespace CCSPlayerController_InGameMoneyServices {
    constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
    constexpr std::ptrdiff_t m_iAccountMoneyEarnedForNextRound = 0x44; // int32
    constexpr std::ptrdiff_t m_iAccount = 0x48; // int32
    constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // int32
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32
}

namespace CCSPlayerController_InventoryServices {
    constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
    constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
    constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xF48; // uint32[1]
    constexpr std::ptrdiff_t m_vecTerroristLoadoutCache = 0xF50; // CUtlVectorEmbeddedNetworkVar< CEconItemView >
    constexpr std::ptrdiff_t m_vecCounterTerroristLoadoutCache = 0xFA0; // CUtlVectorEmbeddedNetworkVar< CEconItemView >
}

namespace CCSPlayerPawn {
    constexpr std::ptrdiff_t m_pBulletServices = 0x1568; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0x1570; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0x1578; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1580; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pRadioServices = 0x1588; // CCSPlayer_RadioServices*
    constexpr std::ptrdiff_t m_pDamageReactServices = 0x1590; // CCSPlayer_DamageReactServices*
    constexpr std::ptrdiff_t m_nCharacterDefIndex = 0x1598; // uint16
    constexpr std::ptrdiff_t m_hPreviousModel = 0x15A0; // CStrongHandle< InfoForResourceTypeCModel >
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x15A8; // bool
    constexpr std::ptrdiff_t m_strVOPrefix = 0x15B0; // CUtlString
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x15B8; // char[18]
    constexpr std::ptrdiff_t m_bInBuyZone = 0x1678; // bool
    constexpr std::ptrdiff_t m_bWasInBuyZone = 0x1679; // bool
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x167A; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0x167B; // bool
    constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x167C; // bool
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x1680; // int32
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1684; // int32
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1688; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1689; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x168C; // int32
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1690; // loadout_slot_t
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1694; // GameTime_t
    constexpr std::ptrdiff_t m_flLandseconds = 0x1698; // float32
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x169C; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x16A8; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x16B4; // int32
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x16B8; // float32
    constexpr std::ptrdiff_t m_aimPunchCache = 0x16C0; // CUtlVector< QAngle >
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x16D8; // bool
    constexpr std::ptrdiff_t m_xLastHeadBoneTransform = 0x1C30; // CTransform
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x1C50; // bool
    constexpr std::ptrdiff_t m_lastLandTime = 0x1C54; // GameTime_t
    constexpr std::ptrdiff_t m_iPlayerLocked = 0x1C58; // int32
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1C60; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1C64; // GameTime_t
    constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x1C68; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1C6C; // int32
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1C70; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1C7C; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1C88; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1CC8; // bool
    constexpr std::ptrdiff_t m_EconGloves = 0x1CD0; // CEconItemView
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x1F48; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x1F54; // bool
}

namespace CCSPlayerPawnBase {
    constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xB60; // CTouchExpansionComponent
    constexpr std::ptrdiff_t m_pPingServices = 0xBB0; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_pViewModelServices = 0xBB8; // CPlayer_ViewModelServices*
    constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0xBC0; // uint32
    constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0xBC4; // float32
    constexpr std::ptrdiff_t m_hOriginalController = 0xBC8; // CHandle< CCSPlayerController >
    constexpr std::ptrdiff_t m_blindUntilTime = 0xBCC; // GameTime_t
    constexpr std::ptrdiff_t m_blindStartTime = 0xBD0; // GameTime_t
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0xBD4; // GameTime_t
    constexpr std::ptrdiff_t m_entitySpottedState = 0xBD8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xBF0; // int32
    constexpr std::ptrdiff_t m_iPlayerState = 0xBF4; // CSPlayerState
    constexpr std::ptrdiff_t m_chickenIdleSoundTimer = 0xC00; // CountdownTimer
    constexpr std::ptrdiff_t m_chickenJumpSoundTimer = 0xC18; // CountdownTimer
    constexpr std::ptrdiff_t m_vecLastBookmarkedPosition = 0xCD0; // Vector
    constexpr std::ptrdiff_t m_flLastDistanceTraveledNotice = 0xCDC; // float32
    constexpr std::ptrdiff_t m_flAccumulatedDistanceTraveled = 0xCE0; // float32
    constexpr std::ptrdiff_t m_flLastFriendlyFireDamageReductionRatio = 0xCE4; // float32
    constexpr std::ptrdiff_t m_bRespawning = 0xCE8; // bool
    constexpr std::ptrdiff_t m_nLastPickupPriority = 0xCEC; // int32
    constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0xCF0; // float32
    constexpr std::ptrdiff_t m_bIsScoped = 0xCF4; // bool
    constexpr std::ptrdiff_t m_bIsWalking = 0xCF5; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0xCF6; // bool
    constexpr std::ptrdiff_t m_bIsDefusing = 0xCF7; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0xCF8; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0xCFC; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0xD00; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0xD04; // bool
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0xD08; // uint32
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0xD0C; // float32
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xD10; // bool
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0xD11; // bool
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0xD14; // float32
    constexpr std::ptrdiff_t m_flNextGuardianTooFarHurtTime = 0xD18; // float32
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0xD1C; // GameTime_t
    constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0xD20; // float32
    constexpr std::ptrdiff_t m_flLastEquippedHelmetTime = 0xD24; // GameTime_t
    constexpr std::ptrdiff_t m_flLastEquippedArmorTime = 0xD28; // GameTime_t
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0xD2C; // int32
    constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0xD30; // bool
    constexpr std::ptrdiff_t m_flLastBumpMineBumpTime = 0xD34; // GameTime_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0xD38; // GameTime_t
    constexpr std::ptrdiff_t m_iNumSpawns = 0xD3C; // int32
    constexpr std::ptrdiff_t m_iShouldHaveCash = 0xD40; // int32
    constexpr std::ptrdiff_t m_bJustKilledTeammate = 0xD44; // bool
    constexpr std::ptrdiff_t m_bPunishedForTK = 0xD45; // bool
    constexpr std::ptrdiff_t m_bInvalidSteamLogonDelayed = 0xD46; // bool
    constexpr std::ptrdiff_t m_iTeamKills = 0xD48; // int32
    constexpr std::ptrdiff_t m_flLastAction = 0xD4C; // GameTime_t
    constexpr std::ptrdiff_t m_flNameChangeHistory = 0xD50; // float32[5]
    constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0xD64; // float32
    constexpr std::ptrdiff_t m_fLastGivenBombTime = 0xD68; // float32
    constexpr std::ptrdiff_t m_bHasNightVision = 0xD6C; // bool
    constexpr std::ptrdiff_t m_bNightVisionOn = 0xD6D; // bool
    constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xD70; // float32
    constexpr std::ptrdiff_t m_flLastMoneyUpdateTime = 0xD74; // float32
    constexpr std::ptrdiff_t m_MenuStringBuffer = 0xD78; // char[1024]
    constexpr std::ptrdiff_t m_fIntroCamTime = 0x1178; // float32
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x117C; // int32
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1180; // bool
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x1181; // bool
    constexpr std::ptrdiff_t m_iMoveState = 0x1184; // int32
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1188; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x118C; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1190; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x119C; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x11A8; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x11B4; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x11CC; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x11E4; // Vector[2]
    constexpr std::ptrdiff_t m_bDiedAirborne = 0x11FC; // bool
    constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1200; // CEntityIndex
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x1204; // int32
    constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1208; // bool
    constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1209; // bool
    constexpr std::ptrdiff_t m_iDirection = 0x120C; // int32
    constexpr std::ptrdiff_t m_iShotsFired = 0x1210; // int32
    constexpr std::ptrdiff_t m_ArmorValue = 0x1214; // int32
    constexpr std::ptrdiff_t m_flFlinchStack = 0x1218; // float32
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x121C; // float32
    constexpr std::ptrdiff_t m_flHitHeading = 0x1220; // float32
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x1224; // int32
    constexpr std::ptrdiff_t m_iHostagesKilled = 0x1228; // int32
    constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x122C; // Vector
    constexpr std::ptrdiff_t m_flFlashDuration = 0x1238; // float32
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x123C; // float32
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1240; // float32
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1244; // int32
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1248; // bool
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x124C; // float32
    constexpr std::ptrdiff_t m_bStrafing = 0x1250; // bool
    constexpr std::ptrdiff_t m_lastStandingPos = 0x1254; // Vector
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1260; // float32
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x1268; // CountdownTimer
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x1280; // Vector
    constexpr std::ptrdiff_t m_lastLadderPos = 0x128C; // Vector
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1298; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x12A4; // float32
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x12A8; // float32
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x12AC; // Vector
    constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x12C0; // int32
    constexpr std::ptrdiff_t m_angEyeAngles = 0x12C4; // QAngle
    constexpr std::ptrdiff_t m_bVCollisionInitted = 0x12D0; // bool
    constexpr std::ptrdiff_t m_storedSpawnPosition = 0x12D4; // Vector
    constexpr std::ptrdiff_t m_storedSpawnAngle = 0x12E0; // QAngle
    constexpr std::ptrdiff_t m_bIsSpawning = 0x12EC; // bool
    constexpr std::ptrdiff_t m_bHideTargetID = 0x12ED; // bool
    constexpr std::ptrdiff_t m_nNumDangerZoneDamageHits = 0x12F0; // int32
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x12F4; // bool
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x12F5; // bool
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x12F8; // CEntityIndex
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x12FC; // int32
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1300; // int32
    constexpr std::ptrdiff_t m_iAddonBits = 0x1304; // int32
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1308; // int32
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x130C; // int32
    constexpr std::ptrdiff_t m_nTeamDamageGivenForMatch = 0x1310; // int32
    constexpr std::ptrdiff_t m_bTDGaveProtectionWarning = 0x1314; // bool
    constexpr std::ptrdiff_t m_bTDGaveProtectionWarningThisRound = 0x1315; // bool
    constexpr std::ptrdiff_t m_flLastTHWarningTime = 0x1318; // float32
    constexpr std::ptrdiff_t m_currentDeafnessFilter = 0x131C; // CUtlStringToken
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisSpawn = 0x1320; // int32
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisRound = 0x1324; // int32
    constexpr std::ptrdiff_t m_NumEnemiesAtRoundStart = 0x1328; // int32
    constexpr std::ptrdiff_t m_iRoundsWon = 0x132C; // int32
    constexpr std::ptrdiff_t m_lastRoundResult = 0x1330; // int32
    constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1334; // bool
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1338; // uint32[5]
    constexpr std::ptrdiff_t m_iDeathFlags = 0x134C; // int32
    constexpr std::ptrdiff_t m_hPet = 0x1350; // CHandle< CChicken >
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1520; // uint16
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1522; // uint16
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1524; // uint16
    constexpr std::ptrdiff_t m_nSuicides = 0x1528; // int32
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x152C; // int32
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1530; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1534; // float32
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1538; // Vector
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1544; // bool
    constexpr std::ptrdiff_t m_LastHitBox = 0x1548; // int32
    constexpr std::ptrdiff_t m_LastHealth = 0x154C; // int32
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x1550; // float32
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x1554; // float32
    constexpr std::ptrdiff_t m_pBot = 0x1558; // CCSBot*
    constexpr std::ptrdiff_t m_bBotAllowActive = 0x1560; // bool
    constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1561; // bool
}

namespace CCSPlayerResource {
    constexpr std::ptrdiff_t m_bHostageAlive = 0x4B0; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4BC; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4C8; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x4F8; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x504; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x510; // int32[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x520; // int32[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x530; // int32[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x540; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x541; // bool
}

namespace CCSPlayer_ActionTrackingServices {
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_bIsRescuing = 0x23C; // bool
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
}

namespace CCSPlayer_BulletServices {
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
}

namespace CCSPlayer_BuyServices {
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
}

namespace CCSPlayer_HostageServices {
    constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle< CBaseEntity >
}

namespace CCSPlayer_ItemServices {
    constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
    constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
    constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // bool
}

namespace CCSPlayer_MovementServices {
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x220; // float32
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x224; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x230; // int32
    constexpr std::ptrdiff_t m_flDuckAmount = 0x234; // float32
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x238; // float32
    constexpr std::ptrdiff_t m_bDuckOverride = 0x23C; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x23D; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x240; // float32
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x244; // uint32
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x248; // uint32
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x24C; // uint32
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x250; // float32
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x260; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x268; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x269; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x26A; // bool
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x278; // float32[64][2]
    constexpr std::ptrdiff_t m_nTraceCount = 0x478; // int32
    constexpr std::ptrdiff_t m_StuckLast = 0x47C; // int32
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x480; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x484; // int32
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x488; // float32
    constexpr std::ptrdiff_t m_vecForward = 0x48C; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x498; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x4A4; // Vector
    constexpr std::ptrdiff_t m_vecPreviouslyPredictedOrigin = 0x4B0; // Vector
    constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4BC; // bool
    constexpr std::ptrdiff_t m_iFootsteps = 0x4C0; // int32
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4C4; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4C8; // float32
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4CC; // float32
    constexpr std::ptrdiff_t m_flJumpVel = 0x4D0; // float32
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4D4; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4D8; // uint64
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4E0; // float32
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4E4; // float32
    constexpr std::ptrdiff_t m_flStamina = 0x4E8; // float32
}

namespace CCSPlayer_PingServices {
    constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
    constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle< CBaseEntity >
}

namespace CCSPlayer_RadioServices {
    constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x40; // GameTime_t
    constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x44; // GameTime_t
    constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
    constexpr std::ptrdiff_t m_bIgnoreRadio = 0x58; // bool
}

namespace CCSPlayer_UseServices {
    constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x40; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x44; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeStartedHoldingUse = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x4C; // GameTime_t
}

namespace CCSPlayer_ViewModelServices {
    constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle< CBaseViewModel >[3]
}

namespace CCSPlayer_WaterServices {
    constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x40; // float32
    constexpr std::ptrdiff_t m_nDrownDmgRate = 0x44; // int32
    constexpr std::ptrdiff_t m_AirFinishedTime = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x4C; // float32
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x50; // Vector
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x5C; // float32
}

namespace CCSPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_flNextAttack = 0xB0; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xB4; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xB5; // bool
    constexpr std::ptrdiff_t m_hSavedWeapon = 0xB8; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_nTimeToMelee = 0xBC; // int32
    constexpr std::ptrdiff_t m_nTimeToSecondary = 0xC0; // int32
    constexpr std::ptrdiff_t m_nTimeToPrimary = 0xC4; // int32
    constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xC8; // int32
    constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xCC; // bool
    constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xCD; // bool
    constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xCE; // bool
}

namespace CCSTeam {
    constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x568; // int32
    constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x56C; // int32
    constexpr std::ptrdiff_t m_bSurrendered = 0x570; // bool
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x571; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0x774; // int32
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x778; // int32
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x77C; // int32
    constexpr std::ptrdiff_t m_scoreOvertime = 0x780; // int32
    constexpr std::ptrdiff_t m_szClanTeamname = 0x784; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0x808; // uint32
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x80C; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x814; // char[8]
    constexpr std::ptrdiff_t m_flNextResourceTime = 0x81C; // float32
    constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x820; // int32
}

namespace CCSWeaponBase {
    constexpr std::ptrdiff_t m_bRemoveable = 0xC88; // bool
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xC8C; // float32
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xC90; // int32
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xC94; // int32
    constexpr std::ptrdiff_t m_bPlayerFireEventIsPrimary = 0xC98; // bool
    constexpr std::ptrdiff_t m_seqIdle = 0xC9C; // HSequence
    constexpr std::ptrdiff_t m_seqFirePrimary = 0xCA0; // HSequence
    constexpr std::ptrdiff_t m_seqFireSecondary = 0xCA4; // HSequence
    constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xCB0; // bool
    constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xCB1; // bool
    constexpr std::ptrdiff_t m_iState = 0xCB4; // CSWeaponState_t
    constexpr std::ptrdiff_t m_flLastTimeInAir = 0xCB8; // GameTime_t
    constexpr std::ptrdiff_t m_flLastDeployTime = 0xCBC; // GameTime_t
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xCC0; // uint32
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0xCC4; // bool
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0xCE0; // GameTime_t
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0xCE4; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xCE8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0xD10; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xD14; // float32
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xD18; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xD24; // float32
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xD28; // float32
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xD2C; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xD30; // float32
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0xD34; // GameTime_t
    constexpr std::ptrdiff_t m_iRecoilIndex = 0xD38; // int32
    constexpr std::ptrdiff_t m_flRecoilIndex = 0xD3C; // float32
    constexpr std::ptrdiff_t m_bBurstMode = 0xD40; // bool
    constexpr std::ptrdiff_t m_flPostponeFireReadyTime = 0xD44; // GameTime_t
    constexpr std::ptrdiff_t m_bInReload = 0xD48; // bool
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0xD49; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0xD4C; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0xD50; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0xD51; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xD54; // GameTime_t
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xD58; // int32
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xD5C; // float32
    constexpr std::ptrdiff_t m_bCanBePickedUp = 0xD68; // bool
    constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xD69; // bool
    constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xD6C; // GameTime_t
    constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xD70; // GameTime_t
    constexpr std::ptrdiff_t m_hPrevOwner = 0xD74; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_nDropTick = 0xD78; // GameTick_t
    constexpr std::ptrdiff_t m_donated = 0xD9C; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0xDA0; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xDA4; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xDA5; // bool
    constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0xDA6; // bool
    constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xDA8; // int32
    constexpr std::ptrdiff_t m_IronSightController = 0xDB0; // CIronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0xDC8; // int32
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xDCC; // GameTime_t
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0xDD0; // int32
}

namespace CCSWeaponBaseGun {
    constexpr std::ptrdiff_t m_zoomLevel = 0xDD8; // int32
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0xDDC; // int32
    constexpr std::ptrdiff_t m_silencedModelIndex = 0xDE8; // int32
    constexpr std::ptrdiff_t m_inPrecache = 0xDEC; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0xDED; // bool
    constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0xDEE; // bool
    constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xDEF; // bool
    constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0xDF0; // bool
    constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0xDF1; // bool
}

namespace CCSWeaponBaseVData {
    constexpr std::ptrdiff_t m_WeaponType = 0x240; // CSWeaponType
    constexpr std::ptrdiff_t m_WeaponCategory = 0x244; // CSWeaponCategory
    constexpr std::ptrdiff_t m_szViewModel = 0x248; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_szPlayerModel = 0x328; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x408; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4E8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_szMagazineModel = 0x5C8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_szHeatEffect = 0x6A8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x788; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x868; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x948; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_szTracerParticle = 0xB08; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_GearSlot = 0xBE8; // gear_slot_t
    constexpr std::ptrdiff_t m_GearSlotPosition = 0xBEC; // int32
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF0; // loadout_slot_t
    constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xBF8; // CUtlString
    constexpr std::ptrdiff_t m_nPrice = 0xC00; // int32
    constexpr std::ptrdiff_t m_nKillAward = 0xC04; // int32
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC08; // int32
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC0C; // int32
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC10; // bool
    constexpr std::ptrdiff_t m_bHasBurstMode = 0xC11; // bool
    constexpr std::ptrdiff_t m_bIsRevolver = 0xC12; // bool
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC13; // bool
    constexpr std::ptrdiff_t m_szName = 0xC18; // CUtlString
    constexpr std::ptrdiff_t m_szAnimExtension = 0xC20; // CUtlString
    constexpr std::ptrdiff_t m_eSilencerType = 0xC28; // CSWeaponSilencerType
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC2C; // int32
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC30; // int32
    constexpr std::ptrdiff_t m_flCycleTime = 0xC34; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xC3C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flSpread = 0xC44; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC4C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC54; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC5C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC64; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC6C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC74; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC7C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngle = 0xC84; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC8C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xC94; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xC9C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_nTracerFrequency = 0xCA4; // CFiringModeInt
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCAC; // float32
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCB0; // float32
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCB4; // float32
    constexpr std::ptrdiff_t m_nRecoilSeed = 0xCB8; // int32
    constexpr std::ptrdiff_t m_nSpreadSeed = 0xCBC; // int32
    constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCC0; // float32
    constexpr std::ptrdiff_t m_flIdleInterval = 0xCC4; // float32
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCC8; // float32
    constexpr std::ptrdiff_t m_flHeatPerShot = 0xCCC; // float32
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCD0; // float32
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCD4; // float32
    constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCD8; // float32
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCE0; // CUtlString
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCE8; // bool
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCE9; // bool
    constexpr std::ptrdiff_t m_nZoomLevels = 0xCEC; // int32
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0xCF0; // int32
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0xCF4; // int32
    constexpr std::ptrdiff_t m_flZoomTime0 = 0xCF8; // float32
    constexpr std::ptrdiff_t m_flZoomTime1 = 0xCFC; // float32
    constexpr std::ptrdiff_t m_flZoomTime2 = 0xD00; // float32
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD04; // float32
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD08; // float32
    constexpr std::ptrdiff_t m_flIronSightFOV = 0xD0C; // float32
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD10; // float32
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD14; // float32
    constexpr std::ptrdiff_t m_angPivotAngle = 0xD18; // QAngle
    constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD24; // Vector
    constexpr std::ptrdiff_t m_nDamage = 0xD30; // int32
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD34; // float32
    constexpr std::ptrdiff_t m_flArmorRatio = 0xD38; // float32
    constexpr std::ptrdiff_t m_flPenetration = 0xD3C; // float32
    constexpr std::ptrdiff_t m_flRange = 0xD40; // float32
    constexpr std::ptrdiff_t m_flRangeModifier = 0xD44; // float32
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD48; // float32
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD4C; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD50; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD54; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD58; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD5C; // float32
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD60; // int32
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD64; // int32
    constexpr std::ptrdiff_t m_flThrowVelocity = 0xD68; // float32
    constexpr std::ptrdiff_t m_vSmokeColor = 0xD6C; // Vector
    constexpr std::ptrdiff_t m_szAnimClass = 0xD78; // CUtlString
}

namespace CChangeLevel {
    constexpr std::ptrdiff_t m_sMapName = 0x8A8; // CUtlString
    constexpr std::ptrdiff_t m_sLandmarkName = 0x8B0; // CUtlString
    constexpr std::ptrdiff_t m_OnChangeLevel = 0x8B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bTouched = 0x8E0; // bool
    constexpr std::ptrdiff_t m_bNoTouch = 0x8E1; // bool
    constexpr std::ptrdiff_t m_bNewChapter = 0x8E2; // bool
    constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x8E3; // bool
}

namespace CChicken {
    constexpr std::ptrdiff_t m_AttributeManager = 0xB28; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xDF0; // uint32
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xDF4; // uint32
    constexpr std::ptrdiff_t m_updateTimer = 0xDF8; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckAnchor = 0xE10; // Vector
    constexpr std::ptrdiff_t m_stuckTimer = 0xE20; // CountdownTimer
    constexpr std::ptrdiff_t m_collisionStuckTimer = 0xE38; // CountdownTimer
    constexpr std::ptrdiff_t m_isOnGround = 0xE50; // bool
    constexpr std::ptrdiff_t m_vFallVelocity = 0xE54; // Vector
    constexpr std::ptrdiff_t m_activity = 0xE60; // ChickenActivity
    constexpr std::ptrdiff_t m_activityTimer = 0xE68; // CountdownTimer
    constexpr std::ptrdiff_t m_turnRate = 0xE80; // float32
    constexpr std::ptrdiff_t m_fleeFrom = 0xE84; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xE88; // CountdownTimer
    constexpr std::ptrdiff_t m_startleTimer = 0xEA0; // CountdownTimer
    constexpr std::ptrdiff_t m_vocalizeTimer = 0xEB8; // CountdownTimer
    constexpr std::ptrdiff_t m_flWhenZombified = 0xED0; // GameTime_t
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xED4; // bool
    constexpr std::ptrdiff_t m_leader = 0xED8; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_reuseTimer = 0xEE0; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xEF8; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0xF00; // CountdownTimer
    constexpr std::ptrdiff_t m_flLastJumpTime = 0xF18; // float32
    constexpr std::ptrdiff_t m_bInJump = 0xF1C; // bool
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xF1D; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x2F28; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2F40; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2FD0; // CountdownTimer
    constexpr std::ptrdiff_t m_vecPathGoal = 0x2FF0; // Vector
    constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x2FFC; // GameTime_t
    constexpr std::ptrdiff_t m_followMinuteTimer = 0x3000; // CountdownTimer
    constexpr std::ptrdiff_t m_vecLastEggPoopPosition = 0x3018; // Vector
    constexpr std::ptrdiff_t m_vecEggsPooped = 0x3028; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3048; // CountdownTimer
}

namespace CCollisionProperty {
    constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
    constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
    constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
    constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
    constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
    constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
    constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
    constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
    constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
}

namespace CColorCorrection {
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4C0; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4C4; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxWeight = 0x4C8; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4CC; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x4CD; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x4CE; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x4CF; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x4D0; // bool
    constexpr std::ptrdiff_t m_MinFalloff = 0x4D4; // float32
    constexpr std::ptrdiff_t m_MaxFalloff = 0x4D8; // float32
    constexpr std::ptrdiff_t m_flCurWeight = 0x4DC; // float32
    constexpr std::ptrdiff_t m_netlookupFilename = 0x4E0; // char[512]
    constexpr std::ptrdiff_t m_lookupFilename = 0x6E0; // CUtlSymbolLarge
}

namespace CColorCorrectionVolume {
    constexpr std::ptrdiff_t m_bEnabled = 0x8A8; // bool
    constexpr std::ptrdiff_t m_MaxWeight = 0x8AC; // float32
    constexpr std::ptrdiff_t m_FadeDuration = 0x8B0; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x8B4; // bool
    constexpr std::ptrdiff_t m_Weight = 0x8B8; // float32
    constexpr std::ptrdiff_t m_lookupFilename = 0x8BC; // char[512]
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xABC; // float32
    constexpr std::ptrdiff_t m_LastEnterTime = 0xAC0; // GameTime_t
    constexpr std::ptrdiff_t m_LastExitWeight = 0xAC4; // float32
    constexpr std::ptrdiff_t m_LastExitTime = 0xAC8; // GameTime_t
}

namespace CCommentaryAuto {
    constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x500; // CEntityIOOutput
}

namespace CCommentarySystem {
    constexpr std::ptrdiff_t m_bCommentaryConvarsChanging = 0x11; // bool
    constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12; // bool
    constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14; // GameTime_t
    constexpr std::ptrdiff_t m_iTeleportStage = 0x18; // int32
    constexpr std::ptrdiff_t m_bCheatState = 0x1C; // bool
    constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
    constexpr std::ptrdiff_t m_hCurrentNode = 0x38; // CHandle< CPointCommentaryNode >
    constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3C; // CHandle< CPointCommentaryNode >
    constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40; // CHandle< CPointCommentaryNode >
    constexpr std::ptrdiff_t m_vecNodes = 0x48; // CUtlVector< CHandle< CPointCommentaryNode > >
}

namespace CConstantForceController {
    constexpr std::ptrdiff_t m_linear = 0xC; // Vector
    constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
    constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
    constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
}

namespace CConstraintAnchor {
    constexpr std::ptrdiff_t m_massScale = 0x890; // float32
}

namespace CCopyRecipientFilter {
    constexpr std::ptrdiff_t m_Flags = 0x8; // int32
    constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector< CPlayerSlot >
}

namespace CCredits {
    constexpr std::ptrdiff_t m_OnCreditsDone = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x4D8; // bool
    constexpr std::ptrdiff_t m_flLogoLength = 0x4DC; // float32
}

namespace CDamageRecord {
    constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle< CCSPlayerPawnBase >
    constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle< CCSPlayerPawnBase >
    constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // CHandle< CCSPlayerController >
    constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // CHandle< CCSPlayerController >
    constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // CUtlString
    constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // uint64
    constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // uint64
    constexpr std::ptrdiff_t m_iDamage = 0x58; // int32
    constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C; // int32
    constexpr std::ptrdiff_t m_iNumHits = 0x60; // int32
    constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64; // int32
    constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68; // bool
    constexpr std::ptrdiff_t m_killType = 0x69; // EKillTypes_t
}

namespace CDebugHistory {
    constexpr std::ptrdiff_t m_nNpcEvents = 0x44F0; // int32
}

namespace CDecoyProjectile {
    constexpr std::ptrdiff_t m_shotsRemaining = 0xA30; // int32
    constexpr std::ptrdiff_t m_fExpireTime = 0xA34; // GameTime_t
    constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xA40; // uint16
}

namespace CDynamicLight {
    constexpr std::ptrdiff_t m_ActualFlags = 0x700; // uint8
    constexpr std::ptrdiff_t m_Flags = 0x701; // uint8
    constexpr std::ptrdiff_t m_LightStyle = 0x702; // uint8
    constexpr std::ptrdiff_t m_On = 0x703; // bool
    constexpr std::ptrdiff_t m_Radius = 0x704; // float32
    constexpr std::ptrdiff_t m_Exponent = 0x708; // int32
    constexpr std::ptrdiff_t m_InnerAngle = 0x70C; // float32
    constexpr std::ptrdiff_t m_OuterAngle = 0x710; // float32
    constexpr std::ptrdiff_t m_SpotRadius = 0x714; // float32
}

namespace CDynamicProp {
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xA10; // bool
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xA11; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xA12; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xA18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0xA40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xA68; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xA90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xAB8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszDefaultAnim = 0xAE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0xAE8; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bAnimateOnServer = 0xAEC; // bool
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0xAED; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0xAEE; // bool
    constexpr std::ptrdiff_t m_bScriptedMovement = 0xAEF; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xAF0; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xAF1; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0xAF2; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xAF3; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xAF4; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0xAF8; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xAFC; // int32
    constexpr std::ptrdiff_t m_glowColor = 0xB00; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0xB04; // int32
}

namespace CEconEntity {
    constexpr std::ptrdiff_t m_AttributeManager = 0x930; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xBF8; // uint32
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xBFC; // uint32
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xC00; // int32
    constexpr std::ptrdiff_t m_nFallbackSeed = 0xC04; // int32
    constexpr std::ptrdiff_t m_flFallbackWear = 0xC08; // float32
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xC0C; // int32
    constexpr std::ptrdiff_t m_hOldProvidee = 0xC10; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iOldOwnerClass = 0xC14; // int32
}

namespace CEconItemAttribute {
    constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
    constexpr std::ptrdiff_t m_flValue = 0x34; // float32
    constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
    constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
    constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
}

namespace CEconItemView {
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38; // uint16
    constexpr std::ptrdiff_t m_iEntityQuality = 0x3C; // int32
    constexpr std::ptrdiff_t m_iEntityLevel = 0x40; // uint32
    constexpr std::ptrdiff_t m_iItemID = 0x48; // uint64
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x50; // uint32
    constexpr std::ptrdiff_t m_iItemIDLow = 0x54; // uint32
    constexpr std::ptrdiff_t m_iAccountID = 0x58; // uint32
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x5C; // uint32
    constexpr std::ptrdiff_t m_bInitialized = 0x68; // bool
    constexpr std::ptrdiff_t m_AttributeList = 0x70; // CAttributeList
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
    constexpr std::ptrdiff_t m_szCustomName = 0x130; // char[161]
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1D1; // char[161]
}

namespace CEconWearable {
    constexpr std::ptrdiff_t m_nForceSkin = 0xC18; // int32
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0xC1C; // bool
}

namespace CEffectData {
    constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
    constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
    constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
    constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
    constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
    constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
    constexpr std::ptrdiff_t m_flScale = 0x40; // float32
    constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
    constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
    constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
    constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
    constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
    constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16
    constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
    constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
    constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
    constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
    constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
}

namespace CEntityDissolve {
    constexpr std::ptrdiff_t m_flFadeInStart = 0x700; // float32
    constexpr std::ptrdiff_t m_flFadeInLength = 0x704; // float32
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x708; // float32
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x70C; // float32
    constexpr std::ptrdiff_t m_flFadeOutStart = 0x710; // float32
    constexpr std::ptrdiff_t m_flFadeOutLength = 0x714; // float32
    constexpr std::ptrdiff_t m_flStartTime = 0x718; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0x71C; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0x720; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0x72C; // uint32
}

namespace CEntityFlame {
    constexpr std::ptrdiff_t m_hEntAttached = 0x4B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bCheapEffect = 0x4B4; // bool
    constexpr std::ptrdiff_t m_flSize = 0x4B8; // float32
    constexpr std::ptrdiff_t m_bUseHitboxes = 0x4BC; // bool
    constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4C0; // int32
    constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flLifetime = 0x4C8; // GameTime_t
    constexpr std::ptrdiff_t m_hAttacker = 0x4CC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iDangerSound = 0x4D0; // int32
    constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4D4; // float32
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x4D8; // int32
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flags = 0x30; // uint32
    constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
    constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
}

namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
    constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
}

namespace CEnvBeam {
    constexpr std::ptrdiff_t m_active = 0x7A0; // int32
    constexpr std::ptrdiff_t m_spriteTexture = 0x7A8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_iszStartEntity = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEndEntity = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_life = 0x7C0; // float32
    constexpr std::ptrdiff_t m_boltWidth = 0x7C4; // float32
    constexpr std::ptrdiff_t m_noiseAmplitude = 0x7C8; // float32
    constexpr std::ptrdiff_t m_speed = 0x7CC; // int32
    constexpr std::ptrdiff_t m_restrike = 0x7D0; // float32
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_frameStart = 0x7E0; // int32
    constexpr std::ptrdiff_t m_vEndPointWorld = 0x7E4; // Vector
    constexpr std::ptrdiff_t m_vEndPointRelative = 0x7F0; // Vector
    constexpr std::ptrdiff_t m_radius = 0x7FC; // float32
    constexpr std::ptrdiff_t m_TouchType = 0x800; // Touch_t
    constexpr std::ptrdiff_t m_iFilterName = 0x808; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x810; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszDecal = 0x818; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x820; // CEntityIOOutput
}

namespace CEnvBeverage {
    constexpr std::ptrdiff_t m_CanInDispenser = 0x4B0; // bool
    constexpr std::ptrdiff_t m_nBeverageType = 0x4B4; // int32
}

namespace CEnvCombinedLightProbeVolume {
    constexpr std::ptrdiff_t m_Color = 0x1518; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x151C; // float32
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x1520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1528; // bool
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1530; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1540; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1548; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_vBoxMins = 0x1550; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x155C; // Vector
    constexpr std::ptrdiff_t m_LightGroups = 0x1568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bMoveable = 0x1570; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x1574; // int32
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1578; // int32
    constexpr std::ptrdiff_t m_nPriority = 0x157C; // int32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x1580; // bool
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x1584; // float32
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1588; // Vector
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1594; // int32
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1598; // int32
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x159C; // int32
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x15A0; // int32
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x15A4; // int32
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x15A8; // int32
    constexpr std::ptrdiff_t m_bEnabled = 0x15C1; // bool
}

namespace CEnvCubemap {
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x540; // bool
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x544; // float32
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x548; // Vector
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x554; // Vector
    constexpr std::ptrdiff_t m_LightGroups = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bMoveable = 0x568; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x56C; // int32
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x570; // int32
    constexpr std::ptrdiff_t m_nPriority = 0x574; // int32
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x578; // float32
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x57C; // Vector
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x588; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x58C; // bool
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x58D; // bool
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x58E; // bool
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x58F; // bool
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x590; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x5A0; // bool
}

namespace CEnvCubemapFog {
    constexpr std::ptrdiff_t m_flEndDistance = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flStartDistance = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4B8; // float32
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4BC; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x4C8; // float32
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4CC; // float32
    constexpr std::ptrdiff_t m_flLODBias = 0x4D0; // float32
    constexpr std::ptrdiff_t m_bActive = 0x4D4; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4D5; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4D8; // float32
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4DC; // int32
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x4E0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x4F0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x4F8; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x4F9; // bool
}

namespace CEnvDecal {
    constexpr std::ptrdiff_t m_hDecalMaterial = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_flWidth = 0x708; // float32
    constexpr std::ptrdiff_t m_flHeight = 0x70C; // float32
    constexpr std::ptrdiff_t m_flDepth = 0x710; // float32
    constexpr std::ptrdiff_t m_nRenderOrder = 0x714; // uint32
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0x718; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x719; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0x71A; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0x71C; // float32
}

namespace CEnvDetailController {
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x4B4; // float32
}

namespace CEnvEntityIgniter {
    constexpr std::ptrdiff_t m_flLifetime = 0x4B0; // float32
}

namespace CEnvEntityMaker {
    constexpr std::ptrdiff_t m_vecEntityMins = 0x4B0; // Vector
    constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4BC; // Vector
    constexpr std::ptrdiff_t m_hCurrentInstance = 0x4C8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4CC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x4D0; // Vector
    constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x4DC; // QAngle
    constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x4E8; // float32
    constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x4EC; // float32
    constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x4F0; // bool
    constexpr std::ptrdiff_t m_iszTemplate = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x528; // CEntityIOOutput
}

namespace CEnvExplosion {
    constexpr std::ptrdiff_t m_iMagnitude = 0x700; // int32
    constexpr std::ptrdiff_t m_flPlayerDamage = 0x704; // float32
    constexpr std::ptrdiff_t m_iRadiusOverride = 0x708; // int32
    constexpr std::ptrdiff_t m_flInnerRadius = 0x70C; // float32
    constexpr std::ptrdiff_t m_spriteScale = 0x710; // int32
    constexpr std::ptrdiff_t m_flDamageForce = 0x714; // float32
    constexpr std::ptrdiff_t m_hInflictor = 0x718; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x71C; // int32
    constexpr std::ptrdiff_t m_iszExplosionType = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomEffectName = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomSoundName = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iClassIgnore = 0x740; // Class_T
    constexpr std::ptrdiff_t m_iClassIgnore2 = 0x744; // Class_T
    constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x748; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hEntityIgnore = 0x750; // CHandle< CBaseEntity >
}

namespace CEnvFade {
    constexpr std::ptrdiff_t m_fadeColor = 0x4B0; // Color
    constexpr std::ptrdiff_t m_Duration = 0x4B4; // float32
    constexpr std::ptrdiff_t m_HoldDuration = 0x4B8; // float32
    constexpr std::ptrdiff_t m_OnBeginFade = 0x4C0; // CEntityIOOutput
}

namespace CEnvFireSensor {
    constexpr std::ptrdiff_t m_bEnabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_bHeatAtLevel = 0x4B1; // bool
    constexpr std::ptrdiff_t m_radius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_targetLevel = 0x4B8; // float32
    constexpr std::ptrdiff_t m_targetTime = 0x4BC; // float32
    constexpr std::ptrdiff_t m_levelTime = 0x4C0; // float32
    constexpr std::ptrdiff_t m_OnHeatLevelStart = 0x4C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHeatLevelEnd = 0x4F0; // CEntityIOOutput
}

namespace CEnvFireSource {
    constexpr std::ptrdiff_t m_bEnabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_radius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_damage = 0x4B8; // float32
}

namespace CEnvGlobal {
    constexpr std::ptrdiff_t m_outCounter = 0x4B0; // CEntityOutputTemplate< int32 >
    constexpr std::ptrdiff_t m_globalstate = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_triggermode = 0x4E0; // int32
    constexpr std::ptrdiff_t m_initialstate = 0x4E4; // int32
    constexpr std::ptrdiff_t m_counter = 0x4E8; // int32
}

namespace CEnvHudHint {
    constexpr std::ptrdiff_t m_iszMessage = 0x4B0; // CUtlSymbolLarge
}

namespace CEnvInstructorHint {
    constexpr std::ptrdiff_t m_iszName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszReplace_Key = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x4C8; // int32
    constexpr std::ptrdiff_t m_iDisplayLimit = 0x4CC; // int32
    constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCaption = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszActivatorCaption = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Color = 0x4F0; // Color
    constexpr std::ptrdiff_t m_fIconOffset = 0x4F4; // float32
    constexpr std::ptrdiff_t m_fRange = 0x4F8; // float32
    constexpr std::ptrdiff_t m_iPulseOption = 0x4FC; // uint8
    constexpr std::ptrdiff_t m_iAlphaOption = 0x4FD; // uint8
    constexpr std::ptrdiff_t m_iShakeOption = 0x4FE; // uint8
    constexpr std::ptrdiff_t m_bStatic = 0x4FF; // bool
    constexpr std::ptrdiff_t m_bNoOffscreen = 0x500; // bool
    constexpr std::ptrdiff_t m_bForceCaption = 0x501; // bool
    constexpr std::ptrdiff_t m_iInstanceType = 0x504; // int32
    constexpr std::ptrdiff_t m_bSuppressRest = 0x508; // bool
    constexpr std::ptrdiff_t m_iszBinding = 0x510; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x518; // bool
    constexpr std::ptrdiff_t m_bAutoStart = 0x519; // bool
    constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x51A; // bool
}

namespace CEnvInstructorVRHint {
    constexpr std::ptrdiff_t m_iszName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x4C0; // int32
    constexpr std::ptrdiff_t m_iszCaption = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStartSound = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iLayoutFileType = 0x4D8; // int32
    constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iAttachType = 0x4E8; // int32
    constexpr std::ptrdiff_t m_flHeightOffset = 0x4EC; // float32
}

namespace CEnvLaser {
    constexpr std::ptrdiff_t m_iszLaserTarget = 0x7A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pSprite = 0x7A8; // CSprite*
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_firePosition = 0x7B8; // Vector
    constexpr std::ptrdiff_t m_flStartFrame = 0x7C4; // float32
}

namespace CEnvLightProbeVolume {
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1490; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1498; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x14A0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x14A8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_vBoxMins = 0x14B0; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x14BC; // Vector
    constexpr std::ptrdiff_t m_LightGroups = 0x14C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bMoveable = 0x14D0; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x14D4; // int32
    constexpr std::ptrdiff_t m_nPriority = 0x14D8; // int32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x14DC; // bool
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x14E0; // int32
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x14E4; // int32
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x14E8; // int32
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x14EC; // int32
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x14F0; // int32
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x14F4; // int32
    constexpr std::ptrdiff_t m_bEnabled = 0x1501; // bool
}

namespace CEnvMicrophone {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4B4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nSoundMask = 0x4B8; // int32
    constexpr std::ptrdiff_t m_flSensitivity = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flSmoothFactor = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flMaxRange = 0x4C4; // float32
    constexpr std::ptrdiff_t m_iszSpeakerName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSpeaker = 0x4D0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bAvoidFeedback = 0x4D4; // bool
    constexpr std::ptrdiff_t m_iSpeakerDSPPreset = 0x4D8; // int32
    constexpr std::ptrdiff_t m_iszListenFilter = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hListenFilter = 0x4E8; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_SoundLevel = 0x4F0; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnRoutedSound = 0x518; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHeardSound = 0x540; // CEntityIOOutput
    constexpr std::ptrdiff_t m_szLastSound = 0x568; // char[256]
    constexpr std::ptrdiff_t m_iLastRoutedFrame = 0x668; // int32
}

namespace CEnvMuzzleFlash {
    constexpr std::ptrdiff_t m_flScale = 0x4B0; // float32
    constexpr std::ptrdiff_t m_iszParentAttachment = 0x4B8; // CUtlSymbolLarge
}

namespace CEnvParticleGlow {
    constexpr std::ptrdiff_t m_flAlphaScale = 0xC78; // float32
    constexpr std::ptrdiff_t m_flRadiusScale = 0xC7C; // float32
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0xC80; // float32
    constexpr std::ptrdiff_t m_ColorTint = 0xC84; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0xC88; // CStrongHandle< InfoForResourceTypeCTextureBase >
}

namespace CEnvProjectedTexture {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x700; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bState = 0x704; // bool
    constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x705; // bool
    constexpr std::ptrdiff_t m_flLightFOV = 0x708; // float32
    constexpr std::ptrdiff_t m_bEnableShadows = 0x70C; // bool
    constexpr std::ptrdiff_t m_bSimpleProjection = 0x70D; // bool
    constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x70E; // bool
    constexpr std::ptrdiff_t m_bLightWorld = 0x70F; // bool
    constexpr std::ptrdiff_t m_bCameraSpace = 0x710; // bool
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x714; // float32
    constexpr std::ptrdiff_t m_LightColor = 0x718; // Color
    constexpr std::ptrdiff_t m_flIntensity = 0x71C; // float32
    constexpr std::ptrdiff_t m_flLinearAttenuation = 0x720; // float32
    constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x724; // float32
    constexpr std::ptrdiff_t m_bVolumetric = 0x728; // bool
    constexpr std::ptrdiff_t m_flNoiseStrength = 0x72C; // float32
    constexpr std::ptrdiff_t m_flFlashlightTime = 0x730; // float32
    constexpr std::ptrdiff_t m_nNumPlanes = 0x734; // uint32
    constexpr std::ptrdiff_t m_flPlaneOffset = 0x738; // float32
    constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x73C; // float32
    constexpr std::ptrdiff_t m_flColorTransitionTime = 0x740; // float32
    constexpr std::ptrdiff_t m_flAmbient = 0x744; // float32
    constexpr std::ptrdiff_t m_SpotlightTextureName = 0x748; // char[512]
    constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x948; // int32
    constexpr std::ptrdiff_t m_nShadowQuality = 0x94C; // uint32
    constexpr std::ptrdiff_t m_flNearZ = 0x950; // float32
    constexpr std::ptrdiff_t m_flFarZ = 0x954; // float32
    constexpr std::ptrdiff_t m_flProjectionSize = 0x958; // float32
    constexpr std::ptrdiff_t m_flRotation = 0x95C; // float32
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0x960; // bool
}

namespace CEnvScreenOverlay {
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x4B0; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x500; // float32[10]
    constexpr std::ptrdiff_t m_flStartTime = 0x528; // GameTime_t
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x52C; // int32
    constexpr std::ptrdiff_t m_bIsActive = 0x530; // bool
}

namespace CEnvShake {
    constexpr std::ptrdiff_t m_limitToEntity = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Amplitude = 0x4B8; // float32
    constexpr std::ptrdiff_t m_Frequency = 0x4BC; // float32
    constexpr std::ptrdiff_t m_Duration = 0x4C0; // float32
    constexpr std::ptrdiff_t m_Radius = 0x4C4; // float32
    constexpr std::ptrdiff_t m_stopTime = 0x4C8; // GameTime_t
    constexpr std::ptrdiff_t m_nextShake = 0x4CC; // GameTime_t
    constexpr std::ptrdiff_t m_currentAmp = 0x4D0; // float32
    constexpr std::ptrdiff_t m_maxForce = 0x4D4; // Vector
    constexpr std::ptrdiff_t m_shakeCallback = 0x4E8; // CPhysicsShake
}

namespace CEnvSky {
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x708; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_bStartDisabled = 0x710; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0x711; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x715; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x71C; // float32
    constexpr std::ptrdiff_t m_nFogType = 0x720; // int32
    constexpr std::ptrdiff_t m_flFogMinStart = 0x724; // float32
    constexpr std::ptrdiff_t m_flFogMinEnd = 0x728; // float32
    constexpr std::ptrdiff_t m_flFogMaxStart = 0x72C; // float32
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0x730; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x734; // bool
}

namespace CEnvSoundscape {
    constexpr std::ptrdiff_t m_OnPlay = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flRadius = 0x4D8; // float32
    constexpr std::ptrdiff_t m_soundscapeName = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundEventName = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x4F0; // bool
    constexpr std::ptrdiff_t m_soundscapeIndex = 0x4F4; // int32
    constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x4F8; // int32
    constexpr std::ptrdiff_t m_soundEventHash = 0x4FC; // uint32
    constexpr std::ptrdiff_t m_positionNames = 0x500; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_hProxySoundscape = 0x540; // CHandle< CEnvSoundscape >
    constexpr std::ptrdiff_t m_bDisabled = 0x544; // bool
}

namespace CEnvSoundscapeProxy {
    constexpr std::ptrdiff_t m_MainSoundscapeName = 0x548; // CUtlSymbolLarge
}

namespace CEnvSpark {
    constexpr std::ptrdiff_t m_flDelay = 0x4B0; // float32
    constexpr std::ptrdiff_t m_nMagnitude = 0x4B4; // int32
    constexpr std::ptrdiff_t m_nTrailLength = 0x4B8; // int32
    constexpr std::ptrdiff_t m_nType = 0x4BC; // int32
    constexpr std::ptrdiff_t m_OnSpark = 0x4C0; // CEntityIOOutput
}

namespace CEnvSplash {
    constexpr std::ptrdiff_t m_flScale = 0x4B0; // float32
}

namespace CEnvTilt {
    constexpr std::ptrdiff_t m_Duration = 0x4B0; // float32
    constexpr std::ptrdiff_t m_Radius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_TiltTime = 0x4B8; // float32
    constexpr std::ptrdiff_t m_stopTime = 0x4BC; // GameTime_t
}

namespace CEnvTracer {
    constexpr std::ptrdiff_t m_vecEnd = 0x4B0; // Vector
    constexpr std::ptrdiff_t m_flDelay = 0x4BC; // float32
}

namespace CEnvViewPunch {
    constexpr std::ptrdiff_t m_flRadius = 0x4B0; // float32
    constexpr std::ptrdiff_t m_angViewPunch = 0x4B4; // QAngle
}

namespace CEnvVolumetricFogController {
    constexpr std::ptrdiff_t m_flScattering = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flAnisotropy = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flDrawDistance = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flFadeInStart = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x4C8; // float32
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4CC; // int32
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4D0; // int32
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4D4; // int32
    constexpr std::ptrdiff_t m_vBoxMins = 0x4D8; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4E4; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x4F0; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x4F4; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x4F8; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x4FC; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x500; // float32
    constexpr std::ptrdiff_t m_flStartScattering = 0x504; // float32
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x508; // float32
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x50C; // float32
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x510; // float32
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x514; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x518; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x519; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x51A; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x528; // int32
    constexpr std::ptrdiff_t m_bFirstTime = 0x52C; // bool
}

namespace CEnvVolumetricFogVolume {
    constexpr std::ptrdiff_t m_bActive = 0x4B0; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x4B4; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4C0; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4CC; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x4D0; // float32
    constexpr std::ptrdiff_t m_nFalloffShape = 0x4D4; // int32
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x4D8; // float32
}

namespace CEnvWind {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x4B0; // CEnvWindShared
}

namespace CEnvWindShared {
    constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
    constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
    constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
    constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
    constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
    constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
    constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
    constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
    constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
    constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
    constexpr std::ptrdiff_t m_location = 0x2C; // Vector
    constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
    constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
    constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
    constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
    constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
    constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
    constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
    constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
    constexpr std::ptrdiff_t m_OnGustStart = 0x70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGustEnd = 0x98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flVariationTime = 0xC0; // GameTime_t
    constexpr std::ptrdiff_t m_flSwayTime = 0xC4; // GameTime_t
    constexpr std::ptrdiff_t m_flSimTime = 0xC8; // GameTime_t
    constexpr std::ptrdiff_t m_flSwitchTime = 0xCC; // GameTime_t
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0xD0; // float32
    constexpr std::ptrdiff_t m_bGusting = 0xD4; // bool
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0xD8; // float32
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0xDC; // float32
    constexpr std::ptrdiff_t m_iEntIndex = 0xE0; // CEntityIndex
}

namespace CEnvWindShared_WindAveEvent_t {
    constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float32
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float32
}

namespace CEnvWindShared_WindVariationEvent_t {
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float32
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float32
}

namespace CFilterAttributeInt {
    constexpr std::ptrdiff_t m_sAttributeName = 0x508; // CUtlStringToken
}

namespace CFilterClass {
    constexpr std::ptrdiff_t m_iFilterClass = 0x508; // CUtlSymbolLarge
}

namespace CFilterContext {
    constexpr std::ptrdiff_t m_iFilterContext = 0x508; // CUtlSymbolLarge
}

namespace CFilterEnemy {
    constexpr std::ptrdiff_t m_iszEnemyName = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x510; // float32
    constexpr std::ptrdiff_t m_flOuterRadius = 0x514; // float32
    constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x518; // int32
    constexpr std::ptrdiff_t m_iszPlayerName = 0x520; // CUtlSymbolLarge
}

namespace CFilterMassGreater {
    constexpr std::ptrdiff_t m_fFilterMass = 0x508; // float32
}

namespace CFilterModel {
    constexpr std::ptrdiff_t m_iFilterModel = 0x508; // CUtlSymbolLarge
}

namespace CFilterMultiple {
    constexpr std::ptrdiff_t m_nFilterType = 0x508; // filter_t
    constexpr std::ptrdiff_t m_iFilterName = 0x510; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_hFilter = 0x560; // CHandle< CBaseEntity >[10]
    constexpr std::ptrdiff_t m_nFilterCount = 0x588; // int32
}

namespace CFilterName {
    constexpr std::ptrdiff_t m_iFilterName = 0x508; // CUtlSymbolLarge
}

namespace CFilterProximity {
    constexpr std::ptrdiff_t m_flRadius = 0x508; // float32
}

namespace CFire {
    constexpr std::ptrdiff_t m_hEffect = 0x700; // CHandle< CBaseFire >
    constexpr std::ptrdiff_t m_hOwner = 0x704; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nFireType = 0x708; // int32
    constexpr std::ptrdiff_t m_flFuel = 0x70C; // float32
    constexpr std::ptrdiff_t m_flDamageTime = 0x710; // GameTime_t
    constexpr std::ptrdiff_t m_lastDamage = 0x714; // GameTime_t
    constexpr std::ptrdiff_t m_flFireSize = 0x718; // float32
    constexpr std::ptrdiff_t m_flLastNavUpdateTime = 0x71C; // GameTime_t
    constexpr std::ptrdiff_t m_flHeatLevel = 0x720; // float32
    constexpr std::ptrdiff_t m_flHeatAbsorb = 0x724; // float32
    constexpr std::ptrdiff_t m_flDamageScale = 0x728; // float32
    constexpr std::ptrdiff_t m_flMaxHeat = 0x72C; // float32
    constexpr std::ptrdiff_t m_flLastHeatLevel = 0x730; // float32
    constexpr std::ptrdiff_t m_flAttackTime = 0x734; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x738; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x739; // bool
    constexpr std::ptrdiff_t m_bDidActivate = 0x73A; // bool
    constexpr std::ptrdiff_t m_OnIgnited = 0x740; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExtinguished = 0x768; // CEntityIOOutput
}

namespace CFireSmoke {
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x4C0; // int32
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x4C4; // int32
}

namespace CFiringModeFloat {
    constexpr std::ptrdiff_t m_flValues = 0x0; // float32[2]
}

namespace CFiringModeInt {
    constexpr std::ptrdiff_t m_nValues = 0x0; // int32[2]
}

namespace CFish {
    constexpr std::ptrdiff_t m_pool = 0x890; // CHandle< CFishPool >
    constexpr std::ptrdiff_t m_id = 0x894; // uint32
    constexpr std::ptrdiff_t m_x = 0x898; // float32
    constexpr std::ptrdiff_t m_y = 0x89C; // float32
    constexpr std::ptrdiff_t m_z = 0x8A0; // float32
    constexpr std::ptrdiff_t m_angle = 0x8A4; // float32
    constexpr std::ptrdiff_t m_angleChange = 0x8A8; // float32
    constexpr std::ptrdiff_t m_forward = 0x8AC; // Vector
    constexpr std::ptrdiff_t m_perp = 0x8B8; // Vector
    constexpr std::ptrdiff_t m_poolOrigin = 0x8C4; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0x8D0; // float32
    constexpr std::ptrdiff_t m_speed = 0x8D4; // float32
    constexpr std::ptrdiff_t m_desiredSpeed = 0x8D8; // float32
    constexpr std::ptrdiff_t m_calmSpeed = 0x8DC; // float32
    constexpr std::ptrdiff_t m_panicSpeed = 0x8E0; // float32
    constexpr std::ptrdiff_t m_avoidRange = 0x8E4; // float32
    constexpr std::ptrdiff_t m_turnTimer = 0x8E8; // CountdownTimer
    constexpr std::ptrdiff_t m_turnClockwise = 0x900; // bool
    constexpr std::ptrdiff_t m_goTimer = 0x908; // CountdownTimer
    constexpr std::ptrdiff_t m_moveTimer = 0x920; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0x938; // CountdownTimer
    constexpr std::ptrdiff_t m_disperseTimer = 0x950; // CountdownTimer
    constexpr std::ptrdiff_t m_proximityTimer = 0x968; // CountdownTimer
    constexpr std::ptrdiff_t m_visible = 0x980; // CUtlVector< CFish* >
}

namespace CFishPool {
    constexpr std::ptrdiff_t m_fishCount = 0x4C0; // int32
    constexpr std::ptrdiff_t m_maxRange = 0x4C4; // float32
    constexpr std::ptrdiff_t m_swimDepth = 0x4C8; // float32
    constexpr std::ptrdiff_t m_waterLevel = 0x4CC; // float32
    constexpr std::ptrdiff_t m_isDormant = 0x4D0; // bool
    constexpr std::ptrdiff_t m_fishes = 0x4D8; // CUtlVector< CHandle< CFish > >
    constexpr std::ptrdiff_t m_visTimer = 0x4F0; // CountdownTimer
}

namespace CFists {
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0xDD8; // bool
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0xDDC; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_bRestorePrevWep = 0xDE0; // bool
    constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0xDE4; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_hWeaponPrevious = 0xDE8; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0xDEC; // bool
    constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0xDED; // bool
}

namespace CFlashbangProjectile {
    constexpr std::ptrdiff_t m_flTimeToDetonate = 0xA28; // float32
    constexpr std::ptrdiff_t m_numOpponentsHit = 0xA2C; // uint8
    constexpr std::ptrdiff_t m_numTeammatesHit = 0xA2D; // uint8
}

namespace CFogController {
    constexpr std::ptrdiff_t m_fog = 0x4B0; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x518; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x51C; // int32
}

namespace CFogTrigger {
    constexpr std::ptrdiff_t m_fog = 0x8A8; // fogparams_t
}

namespace CFogVolume {
    constexpr std::ptrdiff_t m_fogName = 0x700; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_postProcessName = 0x708; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_colorCorrectionName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x720; // bool
    constexpr std::ptrdiff_t m_bInFogVolumesList = 0x721; // bool
}

namespace CFootstepControl {
    constexpr std::ptrdiff_t m_source = 0x8A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0x8B0; // CUtlSymbolLarge
}

namespace CFuncBrush {
    constexpr std::ptrdiff_t m_iSolidity = 0x700; // BrushSolidities_e
    constexpr std::ptrdiff_t m_iDisabled = 0x704; // int32
    constexpr std::ptrdiff_t m_bSolidBsp = 0x708; // bool
    constexpr std::ptrdiff_t m_iszExcludedClass = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bInvertExclusion = 0x718; // bool
    constexpr std::ptrdiff_t m_bScriptedMovement = 0x719; // bool
}

namespace CFuncConveyor {
    constexpr std::ptrdiff_t m_szConveyorModels = 0x700; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x708; // float32
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x70C; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x718; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x724; // float32
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0x728; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x72C; // int32
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x730; // float32
    constexpr std::ptrdiff_t m_hConveyorModels = 0x738; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
}

namespace CFuncElectrifiedVolume {
    constexpr std::ptrdiff_t m_EffectName = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectZapName = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEffectSource = 0x738; // CUtlSymbolLarge
}

namespace CFuncInteractionLayerClip {
    constexpr std::ptrdiff_t m_bDisabled = 0x700; // bool
    constexpr std::ptrdiff_t m_iszInteractsAs = 0x708; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszInteractsWith = 0x710; // CUtlSymbolLarge
}

namespace CFuncLadder {
    constexpr std::ptrdiff_t m_vecLadderDir = 0x700; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0x710; // CUtlVector< CHandle< CInfoLadderDismount > >
    constexpr std::ptrdiff_t m_vecLocalTop = 0x728; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x734; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x740; // Vector
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x74C; // float32
    constexpr std::ptrdiff_t m_bDisabled = 0x750; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0x751; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0x752; // bool
    constexpr std::ptrdiff_t m_surfacePropName = 0x758; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x760; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x788; // CEntityIOOutput
}

namespace CFuncMonitor {
    constexpr std::ptrdiff_t m_targetCamera = 0x720; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0x728; // int32
    constexpr std::ptrdiff_t m_bRenderShadows = 0x72C; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x72D; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0x730; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0x738; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bEnabled = 0x73C; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x73D; // bool
    constexpr std::ptrdiff_t m_bStartEnabled = 0x73E; // bool
}

namespace CFuncMoveLinear {
    constexpr std::ptrdiff_t m_authoredPosition = 0x780; // MoveLinearAuthoredPos_t
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x784; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x790; // Vector
    constexpr std::ptrdiff_t m_soundStart = 0x7A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundStop = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_currentSound = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7B8; // float32
    constexpr std::ptrdiff_t m_flStartPosition = 0x7BC; // float32
    constexpr std::ptrdiff_t m_flMoveDistance = 0x7C0; // float32
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x820; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x821; // bool
}

namespace CFuncNavBlocker {
    constexpr std::ptrdiff_t m_bDisabled = 0x700; // bool
    constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x704; // int32
}

namespace CFuncNavObstruction {
    constexpr std::ptrdiff_t m_bDisabled = 0x708; // bool
}

namespace CFuncPlat {
    constexpr std::ptrdiff_t m_sNoise = 0x7A8; // CUtlSymbolLarge
}

namespace CFuncPlatRot {
    constexpr std::ptrdiff_t m_end = 0x7B0; // QAngle
    constexpr std::ptrdiff_t m_start = 0x7BC; // QAngle
}

namespace CFuncRotating {
    constexpr std::ptrdiff_t m_vecMoveAng = 0x700; // QAngle
    constexpr std::ptrdiff_t m_flFanFriction = 0x70C; // float32
    constexpr std::ptrdiff_t m_flAttenuation = 0x710; // float32
    constexpr std::ptrdiff_t m_flVolume = 0x714; // float32
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x718; // float32
    constexpr std::ptrdiff_t m_flMaxSpeed = 0x71C; // float32
    constexpr std::ptrdiff_t m_flBlockDamage = 0x720; // float32
    constexpr std::ptrdiff_t m_flTimeScale = 0x724; // float32
    constexpr std::ptrdiff_t m_NoiseRunning = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bReversed = 0x730; // bool
    constexpr std::ptrdiff_t m_angStart = 0x73C; // QAngle
    constexpr std::ptrdiff_t m_bStopAtStartPos = 0x748; // bool
    constexpr std::ptrdiff_t m_vecClientOrigin = 0x74C; // Vector
    constexpr std::ptrdiff_t m_vecClientAngles = 0x758; // QAngle
}

namespace CFuncShatterglass {
    constexpr std::ptrdiff_t m_hGlassMaterialDamaged = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hGlassMaterialUndamaged = 0x708; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFace = 0x710; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeCaps = 0x718; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFins = 0x720; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_matPanelTransform = 0x728; // matrix3x4_t
    constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x758; // matrix3x4_t
    constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x788; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_PanelSize = 0x7A0; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelNormalWs = 0x7A8; // Vector
    constexpr std::ptrdiff_t m_nNumShardsEverCreated = 0x7B4; // int32
    constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7B8; // GameTime_t
    constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7BC; // GameTime_t
    constexpr std::ptrdiff_t m_flInitAtTime = 0x7C0; // GameTime_t
    constexpr std::ptrdiff_t m_flGlassThickness = 0x7C4; // float32
    constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7C8; // float32
    constexpr std::ptrdiff_t m_bBreakSilent = 0x7CC; // bool
    constexpr std::ptrdiff_t m_bBreakShardless = 0x7CD; // bool
    constexpr std::ptrdiff_t m_bBroken = 0x7CE; // bool
    constexpr std::ptrdiff_t m_bHasRateLimitedShards = 0x7CF; // bool
    constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7D0; // bool
    constexpr std::ptrdiff_t m_bGlassInFrame = 0x7D1; // bool
    constexpr std::ptrdiff_t m_bStartBroken = 0x7D2; // bool
    constexpr std::ptrdiff_t m_iInitialDamageType = 0x7D3; // uint8
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x7F8; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x810; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_OnBroken = 0x828; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iSurfaceType = 0x851; // uint8
}

namespace CFuncTankTrain {
    constexpr std::ptrdiff_t m_OnDeath = 0x850; // CEntityIOOutput
}

namespace CFuncTimescale {
    constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flAcceleration = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flMinBlendRate = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4BC; // float32
    constexpr std::ptrdiff_t m_isStarted = 0x4C0; // bool
}

namespace CFuncTrackChange {
    constexpr std::ptrdiff_t m_trackTop = 0x7C8; // CPathTrack*
    constexpr std::ptrdiff_t m_trackBottom = 0x7D0; // CPathTrack*
    constexpr std::ptrdiff_t m_train = 0x7D8; // CFuncTrackTrain*
    constexpr std::ptrdiff_t m_trackTopName = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trackBottomName = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trainName = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_code = 0x7F8; // TRAIN_CODE
    constexpr std::ptrdiff_t m_targetState = 0x7FC; // int32
    constexpr std::ptrdiff_t m_use = 0x800; // int32
}

namespace CFuncTrackTrain {
    constexpr std::ptrdiff_t m_ppath = 0x700; // CHandle< CPathTrack >
    constexpr std::ptrdiff_t m_length = 0x704; // float32
    constexpr std::ptrdiff_t m_vPosPrev = 0x708; // Vector
    constexpr std::ptrdiff_t m_angPrev = 0x714; // QAngle
    constexpr std::ptrdiff_t m_controlMins = 0x720; // Vector
    constexpr std::ptrdiff_t m_controlMaxs = 0x72C; // Vector
    constexpr std::ptrdiff_t m_lastBlockPos = 0x738; // Vector
    constexpr std::ptrdiff_t m_lastBlockTick = 0x744; // int32
    constexpr std::ptrdiff_t m_flVolume = 0x748; // float32
    constexpr std::ptrdiff_t m_flBank = 0x74C; // float32
    constexpr std::ptrdiff_t m_oldSpeed = 0x750; // float32
    constexpr std::ptrdiff_t m_flBlockDamage = 0x754; // float32
    constexpr std::ptrdiff_t m_height = 0x758; // float32
    constexpr std::ptrdiff_t m_maxSpeed = 0x75C; // float32
    constexpr std::ptrdiff_t m_dir = 0x760; // float32
    constexpr std::ptrdiff_t m_iszSoundMove = 0x768; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovePing = 0x770; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStart = 0x778; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStop = 0x780; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strPathTarget = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x790; // float32
    constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x794; // float32
    constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x798; // GameTime_t
    constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x79C; // float32
    constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x7A0; // float32
    constexpr std::ptrdiff_t m_eOrientationType = 0x7A4; // TrainOrientationType_t
    constexpr std::ptrdiff_t m_eVelocityType = 0x7A8; // TrainVelocityType_t
    constexpr std::ptrdiff_t m_OnStart = 0x7B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNext = 0x7E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x808; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x830; // bool
    constexpr std::ptrdiff_t m_flDesiredSpeed = 0x834; // float32
    constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x838; // GameTime_t
    constexpr std::ptrdiff_t m_flAccelSpeed = 0x83C; // float32
    constexpr std::ptrdiff_t m_flDecelSpeed = 0x840; // float32
    constexpr std::ptrdiff_t m_bAccelToSpeed = 0x844; // bool
    constexpr std::ptrdiff_t m_flTimeScale = 0x848; // float32
    constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x84C; // GameTime_t
}

namespace CFuncTrain {
    constexpr std::ptrdiff_t m_hCurrentTarget = 0x7A8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_activated = 0x7AC; // bool
    constexpr std::ptrdiff_t m_hEnemy = 0x7B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7B4; // float32
    constexpr std::ptrdiff_t m_flNextBlockTime = 0x7B8; // GameTime_t
    constexpr std::ptrdiff_t m_iszLastTarget = 0x7C0; // CUtlSymbolLarge
}

namespace CFuncVPhysicsClip {
    constexpr std::ptrdiff_t m_bDisabled = 0x700; // bool
}

namespace CFuncWall {
    constexpr std::ptrdiff_t m_nState = 0x700; // int32
}

namespace CFuncWater {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x700; // CBuoyancyHelper
}

namespace CGameChoreoServices {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle< CBaseAnimGraph >
    constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle< CScriptedSequence >
    constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
    constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
    constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
}

namespace CGameGibManager {
    constexpr std::ptrdiff_t m_bAllowNewGibs = 0x4D0; // bool
    constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x4D4; // int32
    constexpr std::ptrdiff_t m_iMaxPieces = 0x4D8; // int32
    constexpr std::ptrdiff_t m_iLastFrame = 0x4DC; // int32
}

namespace CGamePlayerEquip {
    constexpr std::ptrdiff_t m_weaponNames = 0x710; // CUtlSymbolLarge[32]
    constexpr std::ptrdiff_t m_weaponCount = 0x810; // int32[32]
}

namespace CGamePlayerZone {
    constexpr std::ptrdiff_t m_OnPlayerInZone = 0x708; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x730; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayersInCount = 0x758; // CEntityOutputTemplate< int32 >
    constexpr std::ptrdiff_t m_PlayersOutCount = 0x780; // CEntityOutputTemplate< int32 >
}

namespace CGameRules {
    constexpr std::ptrdiff_t m_szQuestName = 0x8; // char[128]
    constexpr std::ptrdiff_t m_nQuestPhase = 0x88; // int32
}

namespace CGameSceneNode {
    constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
    constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
    constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
    constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
    constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
    constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
    constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
    constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // Vector
    constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
    constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float32
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
    constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
    constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNotifyBoneTransformsChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
    constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8
    constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
    constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x130; // CUtlStringToken
    constexpr std::ptrdiff_t m_flZOffset = 0x134; // float32
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x138; // Vector
}

namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
    constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
}

namespace CGameScriptedMoveData {
    constexpr std::ptrdiff_t m_vDest = 0x0; // Vector
    constexpr std::ptrdiff_t m_vSrc = 0xC; // Vector
    constexpr std::ptrdiff_t m_angSrc = 0x18; // QAngle
    constexpr std::ptrdiff_t m_angDst = 0x24; // QAngle
    constexpr std::ptrdiff_t m_angCurrent = 0x30; // QAngle
    constexpr std::ptrdiff_t m_flAngRate = 0x3C; // float32
    constexpr std::ptrdiff_t m_flDuration = 0x40; // float32
    constexpr std::ptrdiff_t m_flStartTime = 0x44; // GameTime_t
    constexpr std::ptrdiff_t m_nPrevMoveType = 0x48; // MoveType_t
    constexpr std::ptrdiff_t m_bActive = 0x49; // bool
    constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x4A; // bool
    constexpr std::ptrdiff_t m_bEndOnDestinationReached = 0x4B; // bool
    constexpr std::ptrdiff_t m_bIgnoreRotation = 0x4C; // bool
    constexpr std::ptrdiff_t m_nType = 0x50; // ScriptedMoveType_t
    constexpr std::ptrdiff_t m_bSuccess = 0x54; // bool
    constexpr std::ptrdiff_t m_nForcedCrouchState = 0x58; // ForcedCrouchState_t
    constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x5C; // bool
}

namespace CGameText {
    constexpr std::ptrdiff_t m_iszMessage = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_textParms = 0x718; // hudtextparms_t
}

namespace CGenericConstraint {
    constexpr std::ptrdiff_t m_nLinearMotionX = 0x510; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionY = 0x514; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionZ = 0x518; // JointMotion_t
    constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x51C; // float32
    constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x520; // float32
    constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x524; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x528; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x52C; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x530; // float32
    constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x534; // float32
    constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x538; // float32
    constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x53C; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x540; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x544; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x548; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x54C; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x550; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x554; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x558; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x55C; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x560; // float32
    constexpr std::ptrdiff_t m_flNotifyForceX = 0x564; // float32
    constexpr std::ptrdiff_t m_flNotifyForceY = 0x568; // float32
    constexpr std::ptrdiff_t m_flNotifyForceZ = 0x56C; // float32
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x570; // float32
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x574; // float32
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x578; // float32
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x57C; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x580; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x584; // GameTime_t
    constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x588; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x589; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x58A; // bool
    constexpr std::ptrdiff_t m_nAngularMotionX = 0x58C; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionY = 0x590; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionZ = 0x594; // JointMotion_t
    constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x598; // float32
    constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x59C; // float32
    constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5A0; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5A4; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5A8; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5AC; // float32
    constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x5B0; // float32
    constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x5B4; // float32
    constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x5B8; // float32
    constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x5C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x5E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x610; // CEntityIOOutput
}

namespace CGlowProperty {
    constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
    constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
    constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
    constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
    constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
    constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
    constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
    constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
    constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
}

namespace CGradientFog {
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x4BC; // float32
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x4C8; // float32
    constexpr std::ptrdiff_t m_flFarZ = 0x4CC; // float32
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4D0; // float32
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4D4; // float32
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4D8; // float32
    constexpr std::ptrdiff_t m_fogColor = 0x4DC; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x4E0; // float32
    constexpr std::ptrdiff_t m_flFadeTime = 0x4E4; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4E8; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4E9; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4EA; // bool
}

namespace CGunTarget {
    constexpr std::ptrdiff_t m_on = 0x780; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x784; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_OnDeath = 0x788; // CEntityIOOutput
}

namespace CHandleTest {
    constexpr std::ptrdiff_t m_Handle = 0x4B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bSendHandle = 0x4B4; // bool
}

namespace CHintMessage {
    constexpr std::ptrdiff_t m_hintString = 0x8; // char*
    constexpr std::ptrdiff_t m_args = 0x10; // CUtlVector< char* >
    constexpr std::ptrdiff_t m_duration = 0x28; // float32
}

namespace CHintMessageQueue {
    constexpr std::ptrdiff_t m_tmMessageEnd = 0x8; // float32
    constexpr std::ptrdiff_t m_messages = 0x10; // CUtlVector< CHintMessage* >
    constexpr std::ptrdiff_t m_pPlayerController = 0x28; // CBasePlayerController*
}

namespace CHitboxComponent {
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
}

namespace CHostage {
    constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0x9E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xA10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xA38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRescued = 0xA60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_entitySpottedState = 0xA88; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xAA0; // int32
    constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xAA4; // uint32
    constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xAA8; // uint32
    constexpr std::ptrdiff_t m_bRemove = 0xAAC; // bool
    constexpr std::ptrdiff_t m_vel = 0xAB0; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0xABC; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xABD; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0xAC0; // int32
    constexpr std::ptrdiff_t m_leader = 0xAC4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_lastLeader = 0xAC8; // CHandle< CCSPlayerPawnBase >
    constexpr std::ptrdiff_t m_reuseTimer = 0xAD0; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xAE8; // bool
    constexpr std::ptrdiff_t m_accel = 0xAEC; // Vector
    constexpr std::ptrdiff_t m_isRunning = 0xAF8; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xAF9; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0xB00; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xB18; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x2B28; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2B40; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2BD0; // CountdownTimer
    constexpr std::ptrdiff_t m_wiggleTimer = 0x2BF0; // CountdownTimer
    constexpr std::ptrdiff_t m_isAdjusted = 0x2C0C; // bool
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2C0D; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x2C10; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x2C14; // GameTime_t
    constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2C18; // Vector
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2C24; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x2C30; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2C34; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x2C38; // GameTime_t
    constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2C3C; // int32
    constexpr std::ptrdiff_t m_nPickupEventCount = 0x2C40; // int32
    constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2C44; // Vector
}

namespace CHostageExpresserShim {
    constexpr std::ptrdiff_t m_pExpresser = 0x9D0; // CAI_Expresser*
}

namespace CInButtonState {
    constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64[3]
}

namespace CInferno {
    constexpr std::ptrdiff_t m_fireXDelta = 0x710; // int32[64]
    constexpr std::ptrdiff_t m_fireYDelta = 0x810; // int32[64]
    constexpr std::ptrdiff_t m_fireZDelta = 0x910; // int32[64]
    constexpr std::ptrdiff_t m_fireParentXDelta = 0xA10; // int32[64]
    constexpr std::ptrdiff_t m_fireParentYDelta = 0xB10; // int32[64]
    constexpr std::ptrdiff_t m_fireParentZDelta = 0xC10; // int32[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0xD10; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0xD50; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1050; // int32
    constexpr std::ptrdiff_t m_nInfernoType = 0x1054; // int32
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1058; // int32
    constexpr std::ptrdiff_t m_nFireLifetime = 0x105C; // float32
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1060; // bool
    constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x1064; // int32
    constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1068; // bool
    constexpr std::ptrdiff_t m_extent = 0x1270; // Extent
    constexpr std::ptrdiff_t m_damageTimer = 0x1288; // CountdownTimer
    constexpr std::ptrdiff_t m_damageRampTimer = 0x12A0; // CountdownTimer
    constexpr std::ptrdiff_t m_splashVelocity = 0x12B8; // Vector
    constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x12C4; // Vector
    constexpr std::ptrdiff_t m_startPos = 0x12D0; // Vector
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x12DC; // Vector
    constexpr std::ptrdiff_t m_activeTimer = 0x12E8; // IntervalTimer
    constexpr std::ptrdiff_t m_fireSpawnOffset = 0x12F8; // int32
    constexpr std::ptrdiff_t m_nMaxFlames = 0x12FC; // int32
    constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1300; // CountdownTimer
    constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1318; // CountdownTimer
    constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1330; // uint16
}

namespace CInfoDynamicShadowHint {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_flRange = 0x4B4; // float32
    constexpr std::ptrdiff_t m_nImportance = 0x4B8; // int32
    constexpr std::ptrdiff_t m_nLightChoice = 0x4BC; // int32
    constexpr std::ptrdiff_t m_hLight = 0x4C0; // CHandle< CBaseEntity >
}

namespace CInfoDynamicShadowHintBox {
    constexpr std::ptrdiff_t m_vBoxMins = 0x4C8; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4D4; // Vector
}

namespace CInfoGameEventProxy {
    constexpr std::ptrdiff_t m_iszEventName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRange = 0x4B8; // float32
}

namespace CInfoOffscreenPanoramaTexture {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x4B4; // int32
    constexpr std::ptrdiff_t m_nResolutionY = 0x4B8; // int32
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x4D0; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4E8; // int32
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x4F0; // CNetworkUtlVectorBase< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_szTargetsName = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x510; // CUtlVector< CHandle< CBaseModelEntity > >
}

namespace CInfoPlayerStart {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
}

namespace CInfoSpawnGroupLoadUnload {
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x528; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLandmarkName = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x568; // CUtlString
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x570; // float32
    constexpr std::ptrdiff_t m_bStreamingStarted = 0x574; // bool
    constexpr std::ptrdiff_t m_bUnloadingStarted = 0x575; // bool
}

namespace CInfoVisibilityBox {
    constexpr std::ptrdiff_t m_nMode = 0x4B4; // int32
    constexpr std::ptrdiff_t m_vBoxSize = 0x4B8; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x4C4; // bool
}

namespace CInfoWorldLayer {
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4E8; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4E9; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4EA; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4EC; // uint32
}

namespace CInstancedSceneEntity {
    constexpr std::ptrdiff_t m_hOwner = 0xA08; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bHadOwner = 0xA0C; // bool
    constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xA10; // float32
    constexpr std::ptrdiff_t m_flPreDelay = 0xA14; // float32
    constexpr std::ptrdiff_t m_bIsBackground = 0xA18; // bool
}

namespace CInstructorEventEntity {
    constexpr std::ptrdiff_t m_iszName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetPlayer = 0x4C0; // CHandle< CBasePlayerPawn >
}

namespace CIronSightController {
    constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
    constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float32
    constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float32
    constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float32
}

namespace CItem {
    constexpr std::ptrdiff_t m_OnPlayerTouch = 0x898; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0x8C0; // bool
    constexpr std::ptrdiff_t m_OnCacheInteraction = 0x8C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGlovePulled = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0x940; // Vector
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0x94C; // QAngle
    constexpr std::ptrdiff_t m_bPhysStartAsleep = 0x958; // bool
}

namespace CItemDefuser {
    constexpr std::ptrdiff_t m_entitySpottedState = 0x968; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x980; // int32
}

namespace CItemDogtags {
    constexpr std::ptrdiff_t m_OwningPlayer = 0x968; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_KillingPlayer = 0x96C; // CHandle< CCSPlayerPawn >
}

namespace CItemGeneric {
    constexpr std::ptrdiff_t m_bHasTriggerRadius = 0x970; // bool
    constexpr std::ptrdiff_t m_bHasPickupRadius = 0x971; // bool
    constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0x974; // float32
    constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0x978; // float32
    constexpr std::ptrdiff_t m_flLastPickupCheck = 0x97C; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0x980; // bool
    constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0x981; // bool
    constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0x988; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0x990; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0x998; // bool
    constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0x9A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupParticleEffect = 0x9A8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_pPickupSoundEffect = 0x9B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupScriptFunction = 0x9B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0x9C0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0x9C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0x9D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupFilterName = 0x9D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupFilter = 0x9E0; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_OnPickup = 0x9E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimeout = 0xA10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xA38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerTouch = 0xA60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xA88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xAB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPickupRadius = 0xAB8; // float32
    constexpr std::ptrdiff_t m_flTriggerRadius = 0xABC; // float32
    constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xAC0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xAC8; // bool
    constexpr std::ptrdiff_t m_glowColor = 0xAC9; // Color
    constexpr std::ptrdiff_t m_bUseable = 0xACD; // bool
    constexpr std::ptrdiff_t m_hTriggerHelper = 0xAD0; // CHandle< CItemGenericTriggerHelper >
}

namespace CItemGenericTriggerHelper {
    constexpr std::ptrdiff_t m_hParentItem = 0x700; // CHandle< CItemGeneric >
}

namespace CKeepUpright {
    constexpr std::ptrdiff_t m_worldGoalAxis = 0x4B8; // Vector
    constexpr std::ptrdiff_t m_localTestAxis = 0x4C4; // Vector
    constexpr std::ptrdiff_t m_nameAttach = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_attachedObject = 0x4E0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_angularLimit = 0x4E4; // float32
    constexpr std::ptrdiff_t m_bActive = 0x4E8; // bool
    constexpr std::ptrdiff_t m_bDampAllRotation = 0x4E9; // bool
}

namespace CLightComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Color = 0x85; // Color
    constexpr std::ptrdiff_t m_SecondaryColor = 0x89; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x90; // float32
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x94; // float32
    constexpr std::ptrdiff_t m_flBrightnessMult = 0x98; // float32
    constexpr std::ptrdiff_t m_flRange = 0x9C; // float32
    constexpr std::ptrdiff_t m_flFalloff = 0xA0; // float32
    constexpr std::ptrdiff_t m_flAttenuation0 = 0xA4; // float32
    constexpr std::ptrdiff_t m_flAttenuation1 = 0xA8; // float32
    constexpr std::ptrdiff_t m_flAttenuation2 = 0xAC; // float32
    constexpr std::ptrdiff_t m_flTheta = 0xB0; // float32
    constexpr std::ptrdiff_t m_flPhi = 0xB4; // float32
    constexpr std::ptrdiff_t m_hLightCookie = 0xB8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_nCascades = 0xC0; // int32
    constexpr std::ptrdiff_t m_nCastShadows = 0xC4; // int32
    constexpr std::ptrdiff_t m_nShadowWidth = 0xC8; // int32
    constexpr std::ptrdiff_t m_nShadowHeight = 0xCC; // int32
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xD0; // bool
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xD4; // int32
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xD8; // bool
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xDC; // float32
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xE0; // float32
    constexpr std::ptrdiff_t m_nStyle = 0xE4; // int32
    constexpr std::ptrdiff_t m_Pattern = 0xE8; // CUtlString
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xF0; // int32
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xF4; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xF8; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xFC; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x100; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x104; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x108; // float32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x10C; // int32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x110; // int32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x114; // int32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x118; // int32
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x11C; // bool
    constexpr std::ptrdiff_t m_nShadowPriority = 0x120; // int32
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x124; // int32
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x128; // bool
    constexpr std::ptrdiff_t m_LightGroups = 0x130; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nDirectLight = 0x138; // int32
    constexpr std::ptrdiff_t m_nIndirectLight = 0x13C; // int32
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x140; // float32
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x144; // float32
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x148; // float32
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x14C; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x150; // bool
    constexpr std::ptrdiff_t m_bFlicker = 0x151; // bool
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x152; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x154; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x160; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x16C; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x178; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x184; // Vector
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x190; // float32
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x194; // int32
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x198; // float32
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x19C; // float32
    constexpr std::ptrdiff_t m_SkyColor = 0x1A0; // Color
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A4; // float32
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1A8; // Color
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1AC; // bool
    constexpr std::ptrdiff_t m_bMixedShadows = 0x1AD; // bool
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B0; // GameTime_t
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B4; // float32
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1B8; // float32
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1C8; // bool
}

namespace CLightEntity {
    constexpr std::ptrdiff_t m_CLightComponent = 0x700; // CLightComponent*
}

namespace CLightGlow {
    constexpr std::ptrdiff_t m_nHorizontalSize = 0x700; // uint32
    constexpr std::ptrdiff_t m_nVerticalSize = 0x704; // uint32
    constexpr std::ptrdiff_t m_nMinDist = 0x708; // uint32
    constexpr std::ptrdiff_t m_nMaxDist = 0x70C; // uint32
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0x710; // uint32
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x714; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x718; // float32
}

namespace CLogicAchievement {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnFired = 0x4C0; // CEntityIOOutput
}

namespace CLogicActiveAutosave {
    constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4C0; // int32
    constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flStartTime = 0x4C8; // GameTime_t
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4CC; // float32
}

namespace CLogicAuto {
    constexpr std::ptrdiff_t m_OnMapSpawn = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNewGame = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLoadGame = 0x528; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMapTransition = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBackgroundMap = 0x578; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewMap = 0x5A0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewRound = 0x5C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVREnabled = 0x5F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x618; // CEntityIOOutput
    constexpr std::ptrdiff_t m_globalstate = 0x640; // CUtlSymbolLarge
}

namespace CLogicAutosave {
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4B0; // bool
    constexpr std::ptrdiff_t m_minHitPoints = 0x4B4; // int32
    constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4B8; // int32
}

namespace CLogicBranch {
    constexpr std::ptrdiff_t m_bInValue = 0x4B0; // bool
    constexpr std::ptrdiff_t m_Listeners = 0x4B8; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_OnTrue = 0x4D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFalse = 0x4F8; // CEntityIOOutput
}

namespace CLogicBranchList {
    constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4B0; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_LogicBranchList = 0x530; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_eLastState = 0x548; // CLogicBranchList::LogicBranchListenerLastState_t
    constexpr std::ptrdiff_t m_OnAllTrue = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAllFalse = 0x578; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMixed = 0x5A0; // CEntityIOOutput
}

namespace CLogicCase {
    constexpr std::ptrdiff_t m_nCase = 0x4B0; // CUtlSymbolLarge[32]
    constexpr std::ptrdiff_t m_nShuffleCases = 0x5B0; // int32
    constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5B4; // int32
    constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5B8; // uint8[32]
    constexpr std::ptrdiff_t m_OnCase = 0x5D8; // CEntityIOOutput[32]
    constexpr std::ptrdiff_t m_OnDefault = 0xAD8; // CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > >
}

namespace CLogicCollisionPair {
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_disabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_succeeded = 0x4C1; // bool
}

namespace CLogicCompare {
    constexpr std::ptrdiff_t m_flInValue = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flCompareValue = 0x4B4; // float32
    constexpr std::ptrdiff_t m_OnLessThan = 0x4B8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnEqualTo = 0x4E0; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnNotEqualTo = 0x508; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x530; // CEntityOutputTemplate< float32 >
}

namespace CLogicDistanceAutosave {
    constexpr std::ptrdiff_t m_iszTargetEntity = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4B8; // float32
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4BC; // bool
    constexpr std::ptrdiff_t m_bCheckCough = 0x4BD; // bool
    constexpr std::ptrdiff_t m_bThinkDangerous = 0x4BE; // bool
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4C0; // float32
}

namespace CLogicDistanceCheck {
    constexpr std::ptrdiff_t m_iszEntityA = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityB = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flZone1Distance = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flZone2Distance = 0x4C4; // float32
    constexpr std::ptrdiff_t m_InZone1 = 0x4C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone2 = 0x4F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone3 = 0x518; // CEntityIOOutput
}

namespace CLogicGameEvent {
    constexpr std::ptrdiff_t m_iszEventName = 0x4B0; // CUtlSymbolLarge
}

namespace CLogicGameEventListener {
    constexpr std::ptrdiff_t m_OnEventFired = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszGameEventName = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszGameEventItem = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bEnabled = 0x4F8; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4F9; // bool
}

namespace CLogicLineToEntity {
    constexpr std::ptrdiff_t m_Line = 0x4B0; // CEntityOutputTemplate< Vector >
    constexpr std::ptrdiff_t m_SourceName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_StartEntity = 0x4E0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_EndEntity = 0x4E4; // CHandle< CBaseEntity >
}

namespace CLogicMeasureMovement {
    constexpr std::ptrdiff_t m_strMeasureTarget = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMeasureReference = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strTargetReference = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4C8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hMeasureReference = 0x4CC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget = 0x4D0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTargetReference = 0x4D4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flScale = 0x4D8; // float32
    constexpr std::ptrdiff_t m_nMeasureType = 0x4DC; // int32
}

namespace CLogicNPCCounter {
    constexpr std::ptrdiff_t m_OnMinCountAll = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCountAll = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactorAll = 0x500; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x528; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinCount_1 = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x578; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_1 = 0x5A0; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x5C8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinCount_2 = 0x5F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x618; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_2 = 0x640; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x668; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinCount_3 = 0x690; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x6B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_3 = 0x6E0; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x708; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_hSource = 0x730; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceMax = 0x740; // float32
    constexpr std::ptrdiff_t m_bDisabled = 0x744; // bool
    constexpr std::ptrdiff_t m_nMinCountAll = 0x748; // int32
    constexpr std::ptrdiff_t m_nMaxCountAll = 0x74C; // int32
    constexpr std::ptrdiff_t m_nMinFactorAll = 0x750; // int32
    constexpr std::ptrdiff_t m_nMaxFactorAll = 0x754; // int32
    constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x760; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_1 = 0x768; // int32
    constexpr std::ptrdiff_t m_bInvertState_1 = 0x76C; // bool
    constexpr std::ptrdiff_t m_nMinCount_1 = 0x770; // int32
    constexpr std::ptrdiff_t m_nMaxCount_1 = 0x774; // int32
    constexpr std::ptrdiff_t m_nMinFactor_1 = 0x778; // int32
    constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x77C; // int32
    constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x784; // float32
    constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_2 = 0x790; // int32
    constexpr std::ptrdiff_t m_bInvertState_2 = 0x794; // bool
    constexpr std::ptrdiff_t m_nMinCount_2 = 0x798; // int32
    constexpr std::ptrdiff_t m_nMaxCount_2 = 0x79C; // int32
    constexpr std::ptrdiff_t m_nMinFactor_2 = 0x7A0; // int32
    constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x7A4; // int32
    constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x7AC; // float32
    constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_3 = 0x7B8; // int32
    constexpr std::ptrdiff_t m_bInvertState_3 = 0x7BC; // bool
    constexpr std::ptrdiff_t m_nMinCount_3 = 0x7C0; // int32
    constexpr std::ptrdiff_t m_nMaxCount_3 = 0x7C4; // int32
    constexpr std::ptrdiff_t m_nMinFactor_3 = 0x7C8; // int32
    constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x7CC; // int32
    constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x7D4; // float32
}

namespace CLogicNPCCounterAABB {
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x7F0; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x7FC; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x808; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x814; // Vector
}

namespace CLogicNavigation {
    constexpr std::ptrdiff_t m_isOn = 0x4B8; // bool
    constexpr std::ptrdiff_t m_navProperty = 0x4BC; // navproperties_t
}

namespace CLogicPlayerProxy {
    constexpr std::ptrdiff_t m_hPlayer = 0x4B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x4E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerDied = 0x508; // CEntityIOOutput
    constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x530; // CEntityOutputTemplate< int32 >
}

namespace CLogicRelay {
    constexpr std::ptrdiff_t m_OnTrigger = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawn = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bDisabled = 0x500; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x501; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x502; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x503; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x504; // bool
}

namespace CMapInfo {
    constexpr std::ptrdiff_t m_iBuyingStatus = 0x4B0; // int32
    constexpr std::ptrdiff_t m_flBombRadius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_iPetPopulation = 0x4B8; // int32
    constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4BC; // bool
    constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4BD; // bool
    constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4C0; // float32
    constexpr std::ptrdiff_t m_iHostageCount = 0x4C4; // int32
    constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4C8; // bool
}

namespace CMapVetoPickController {
    constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4B0; // bool
    constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4B1; // bool
    constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4D0; // float64
    constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4D8; // bool
    constexpr std::ptrdiff_t m_nDraftType = 0x4DC; // int32
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4E0; // int32
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4E4; // int32[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5E4; // int32[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x600; // int32[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x700; // int32[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0x800; // int32[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0x900; // int32[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0xA00; // int32[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xB00; // int32[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xC00; // int32[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xD00; // int32[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xE00; // int32
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE04; // int32
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE08; // int32
    constexpr std::ptrdiff_t m_OnMapVetoed = 0xE10; // CEntityOutputTemplate< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_OnMapPicked = 0xE38; // CEntityOutputTemplate< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_OnSidesPicked = 0xE60; // CEntityOutputTemplate< int32 >
    constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xE88; // CEntityOutputTemplate< int32 >
    constexpr std::ptrdiff_t m_OnLevelTransition = 0xEB0; // CEntityOutputTemplate< int32 >
}

namespace CMarkupVolume {
    constexpr std::ptrdiff_t m_bEnabled = 0x700; // bool
}

namespace CMarkupVolumeTagged {
    constexpr std::ptrdiff_t m_bIsGroup = 0x738; // bool
    constexpr std::ptrdiff_t m_bGroupByPrefab = 0x739; // bool
    constexpr std::ptrdiff_t m_bGroupByVolume = 0x73A; // bool
    constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x73B; // bool
    constexpr std::ptrdiff_t m_bIsInGroup = 0x73C; // bool
}

namespace CMarkupVolumeTagged_NavGame {
    constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x758; // bool
}

namespace CMarkupVolumeWithRef {
    constexpr std::ptrdiff_t m_bUseRef = 0x740; // bool
    constexpr std::ptrdiff_t m_vRefPos = 0x744; // Vector
    constexpr std::ptrdiff_t m_flRefDot = 0x750; // float32
}

namespace CMathColorBlend {
    constexpr std::ptrdiff_t m_flInMin = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flInMax = 0x4B4; // float32
    constexpr std::ptrdiff_t m_OutColor1 = 0x4B8; // Color
    constexpr std::ptrdiff_t m_OutColor2 = 0x4BC; // Color
    constexpr std::ptrdiff_t m_OutValue = 0x4C0; // CEntityOutputTemplate< Color >
}

namespace CMathCounter {
    constexpr std::ptrdiff_t m_flMin = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flMax = 0x4B4; // float32
    constexpr std::ptrdiff_t m_bHitMin = 0x4B8; // bool
    constexpr std::ptrdiff_t m_bHitMax = 0x4B9; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x4BA; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x4C0; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnGetValue = 0x4E8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnHitMin = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHitMax = 0x538; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMin = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMax = 0x588; // CEntityIOOutput
}

namespace CMathRemap {
    constexpr std::ptrdiff_t m_flInMin = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flInMax = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flOut1 = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flOut2 = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flOldInValue = 0x4C0; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x4C4; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x4C8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x4F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x518; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMin = 0x540; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMax = 0x568; // CEntityIOOutput
}

namespace CMelee {
    constexpr std::ptrdiff_t m_flThrowAt = 0xDD8; // GameTime_t
    constexpr std::ptrdiff_t m_hThrower = 0xDDC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bDidThrowDamage = 0xDE0; // bool
}

namespace CMessage {
    constexpr std::ptrdiff_t m_iszMessage = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_MessageVolume = 0x4B8; // float32
    constexpr std::ptrdiff_t m_MessageAttenuation = 0x4BC; // int32
    constexpr std::ptrdiff_t m_Radius = 0x4C0; // float32
    constexpr std::ptrdiff_t m_sNoise = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnShowMessage = 0x4D0; // CEntityIOOutput
}

namespace CMessageEntity {
    constexpr std::ptrdiff_t m_radius = 0x4B0; // int32
    constexpr std::ptrdiff_t m_messageText = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_drawText = 0x4C0; // bool
    constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4C1; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x4C2; // bool
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
    constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x222; // int8
    constexpr std::ptrdiff_t m_nForceLOD = 0x223; // int8
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x224; // int8
}

namespace CMolotovProjectile {
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0xA28; // bool
    constexpr std::ptrdiff_t m_bDetonated = 0xA34; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0xA38; // IntervalTimer
    constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xB18; // bool
}

namespace CMomentaryRotButton {
    constexpr std::ptrdiff_t m_Position = 0x8C8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnUnpressed = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x940; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedPosition = 0x968; // CEntityIOOutput
    constexpr std::ptrdiff_t m_lastUsed = 0x990; // int32
    constexpr std::ptrdiff_t m_start = 0x994; // QAngle
    constexpr std::ptrdiff_t m_end = 0x9A0; // QAngle
    constexpr std::ptrdiff_t m_IdealYaw = 0x9AC; // float32
    constexpr std::ptrdiff_t m_sNoise = 0x9B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUpdateTarget = 0x9B8; // bool
    constexpr std::ptrdiff_t m_direction = 0x9BC; // int32
    constexpr std::ptrdiff_t m_returnSpeed = 0x9C0; // float32
    constexpr std::ptrdiff_t m_flStartPosition = 0x9C4; // float32
}

namespace CMotorController {
    constexpr std::ptrdiff_t m_speed = 0x8; // float32
    constexpr std::ptrdiff_t m_maxTorque = 0xC; // float32
    constexpr std::ptrdiff_t m_axis = 0x10; // Vector
    constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float32
}

namespace CMultiLightProxy {
    constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4C4; // float32
    constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4C8; // bool
    constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4CC; // float32
    constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x4D0; // float32
    constexpr std::ptrdiff_t m_vecLights = 0x4D8; // CUtlVector< CHandle< CLightEntity > >
}

namespace CMultiSource {
    constexpr std::ptrdiff_t m_rgEntities = 0x4B0; // CHandle< CBaseEntity >[32]
    constexpr std::ptrdiff_t m_rgTriggered = 0x530; // int32[32]
    constexpr std::ptrdiff_t m_OnTrigger = 0x5B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iTotal = 0x5D8; // int32
    constexpr std::ptrdiff_t m_globalstate = 0x5E0; // CUtlSymbolLarge
}

namespace CMultiplayer_Expresser {
    constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0x70; // bool
}

namespace CNavHullPresetVData {
    constexpr std::ptrdiff_t m_vecNavHulls = 0x0; // CUtlVector< CUtlString >
}

namespace CNavHullVData {
    constexpr std::ptrdiff_t m_bAgentEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_agentRadius = 0x4; // float32
    constexpr std::ptrdiff_t m_agentHeight = 0x8; // float32
    constexpr std::ptrdiff_t m_agentShortHeightEnabled = 0xC; // bool
    constexpr std::ptrdiff_t m_agentShortHeight = 0x10; // float32
    constexpr std::ptrdiff_t m_agentMaxClimb = 0x14; // float32
    constexpr std::ptrdiff_t m_agentMaxSlope = 0x18; // int32
    constexpr std::ptrdiff_t m_agentMaxJumpDownDist = 0x1C; // float32
    constexpr std::ptrdiff_t m_agentMaxJumpHorizDistBase = 0x20; // float32
    constexpr std::ptrdiff_t m_agentMaxJumpUpDist = 0x24; // float32
    constexpr std::ptrdiff_t m_agentBorderErosion = 0x28; // int32
}

namespace CNavLinkAnimgraphVar {
    constexpr std::ptrdiff_t m_strAnimgraphVar = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8; // uint32
}

namespace CNavLinkAreaEntity {
    constexpr std::ptrdiff_t m_flWidth = 0x4B0; // float32
    constexpr std::ptrdiff_t m_vLocatorOffset = 0x4B4; // Vector
    constexpr std::ptrdiff_t m_qLocatorAnglesOffset = 0x4C0; // QAngle
    constexpr std::ptrdiff_t m_strMovementForward = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMovementReverse = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNavLinkIdForward = 0x4E0; // int32
    constexpr std::ptrdiff_t m_nNavLinkIdReverse = 0x4E4; // int32
    constexpr std::ptrdiff_t m_bEnabled = 0x4E8; // bool
    constexpr std::ptrdiff_t m_strFilterName = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4F8; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_OnNavLinkStart = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNavLinkFinish = 0x528; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsTerminus = 0x550; // bool
}

namespace CNavLinkMovementVData {
    constexpr std::ptrdiff_t m_bIsInterpolated = 0x0; // bool
    constexpr std::ptrdiff_t m_unRecommendedDistance = 0x4; // uint32
    constexpr std::ptrdiff_t m_vecAnimgraphVars = 0x8; // CUtlVector< CNavLinkAnimgraphVar >
}

namespace CNavSpaceInfo {
    constexpr std::ptrdiff_t m_bCreateFlightSpace = 0x4B0; // bool
}

namespace CNavVolumeBreadthFirstSearch {
    constexpr std::ptrdiff_t m_vStartPos = 0xA0; // Vector
    constexpr std::ptrdiff_t m_flSearchDist = 0xAC; // float32
}

namespace CNavVolumeSphere {
    constexpr std::ptrdiff_t m_vCenter = 0x70; // Vector
    constexpr std::ptrdiff_t m_flRadius = 0x7C; // float32
}

namespace CNavVolumeSphericalShell {
    constexpr std::ptrdiff_t m_flRadiusInner = 0x80; // float32
}

namespace CNavVolumeVector {
    constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x78; // bool
}

namespace CNetworkOriginCellCoordQuantizedVector {
    constexpr std::ptrdiff_t m_cellX = 0x10; // uint16
    constexpr std::ptrdiff_t m_cellY = 0x12; // uint16
    constexpr std::ptrdiff_t m_cellZ = 0x14; // uint16
    constexpr std::ptrdiff_t m_nOutsideWorld = 0x16; // uint16
    constexpr std::ptrdiff_t m_vecX = 0x18; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecY = 0x20; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecZ = 0x28; // CNetworkedQuantizedFloat
}

namespace CNetworkOriginQuantizedVector {
    constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
}

namespace CNetworkTransmitComponent {
    constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x16C; // uint8
}

namespace CNetworkVelocityVector {
    constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
}

namespace CNetworkViewOffsetVector {
    constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
}

namespace CNetworkedSequenceOperation {
    constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
    constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
    constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
    constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
    constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
    constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
    constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
}

namespace COmniLight {
    constexpr std::ptrdiff_t m_flInnerAngle = 0x938; // float32
    constexpr std::ptrdiff_t m_flOuterAngle = 0x93C; // float32
    constexpr std::ptrdiff_t m_bShowLight = 0x940; // bool
}

namespace COrnamentProp {
    constexpr std::ptrdiff_t m_initialOwner = 0xB08; // CUtlSymbolLarge
}

namespace CParticleSystem {
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0x700; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0x900; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0x901; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x904; // float32
    constexpr std::ptrdiff_t m_nStopType = 0x908; // int32
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x90C; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0x910; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_flStartTime = 0x918; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0x91C; // float32
    constexpr std::ptrdiff_t m_vServerControlPoints = 0x920; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x950; // uint8[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0x954; // CHandle< CBaseEntity >[64]
    constexpr std::ptrdiff_t m_bNoSave = 0xA54; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0xA55; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0xA56; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0xA57; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0xA58; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0xA60; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0xC60; // int32
    constexpr std::ptrdiff_t m_vecDataCPValue = 0xC64; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0xC70; // int32
    constexpr std::ptrdiff_t m_clrTint = 0xC74; // Color
}

namespace CPathCorner {
    constexpr std::ptrdiff_t m_flWait = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_OnPass = 0x4B8; // CEntityIOOutput
}

namespace CPathKeyFrame {
    constexpr std::ptrdiff_t m_Origin = 0x4B0; // Vector
    constexpr std::ptrdiff_t m_Angles = 0x4BC; // QAngle
    constexpr std::ptrdiff_t m_qAngle = 0x4D0; // Quaternion
    constexpr std::ptrdiff_t m_iNextKey = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flNextTime = 0x4E8; // float32
    constexpr std::ptrdiff_t m_pNextKey = 0x4F0; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPrevKey = 0x4F8; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flSpeed = 0x500; // float32
}

namespace CPathParticleRope {
    constexpr std::ptrdiff_t m_bStartActive = 0x4B0; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4B4; // float32
    constexpr std::ptrdiff_t m_iszEffectName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x4C0; // CUtlVector< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x4D8; // float32
    constexpr std::ptrdiff_t m_flSlack = 0x4DC; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x4E0; // float32
    constexpr std::ptrdiff_t m_ColorTint = 0x4E4; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x4E8; // int32
    constexpr std::ptrdiff_t m_iEffectIndex = 0x4F0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x4F8; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x510; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x528; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x540; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x558; // CNetworkUtlVectorBase< bool >
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x570; // CNetworkUtlVectorBase< float32 >
}

namespace CPathTrack {
    constexpr std::ptrdiff_t m_pnext = 0x4B0; // CPathTrack*
    constexpr std::ptrdiff_t m_pprevious = 0x4B8; // CPathTrack*
    constexpr std::ptrdiff_t m_paltpath = 0x4C0; // CPathTrack*
    constexpr std::ptrdiff_t m_flRadius = 0x4C8; // float32
    constexpr std::ptrdiff_t m_length = 0x4CC; // float32
    constexpr std::ptrdiff_t m_altName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIterVal = 0x4D8; // int32
    constexpr std::ptrdiff_t m_eOrientationType = 0x4DC; // TrackOrientationType_t
    constexpr std::ptrdiff_t m_OnPass = 0x4E0; // CEntityIOOutput
}

namespace CPhysBallSocket {
    constexpr std::ptrdiff_t m_flFriction = 0x508; // float32
    constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x50C; // bool
    constexpr std::ptrdiff_t m_flSwingLimit = 0x510; // float32
    constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x514; // bool
    constexpr std::ptrdiff_t m_flMinTwistAngle = 0x518; // float32
    constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x51C; // float32
}

namespace CPhysBox {
    constexpr std::ptrdiff_t m_damageType = 0x7C0; // int32
    constexpr std::ptrdiff_t m_massScale = 0x7C4; // float32
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0x7C8; // int32
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x7CC; // float32
    constexpr std::ptrdiff_t m_angPreferredCarryAngles = 0x7D0; // QAngle
    constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x7DC; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0x7DD; // bool
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0x7E0; // int32
    constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x7E4; // float32
    constexpr std::ptrdiff_t m_OnDamaged = 0x7E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMotionEnabled = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0x860; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouch = 0x888; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hCarryingPlayer = 0x8B0; // CHandle< CBasePlayerPawn >
}

namespace CPhysConstraint {
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_breakSound = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceLimit = 0x4D0; // float32
    constexpr std::ptrdiff_t m_torqueLimit = 0x4D4; // float32
    constexpr std::ptrdiff_t m_teleportTick = 0x4D8; // uint32
    constexpr std::ptrdiff_t m_minTeleportDistance = 0x4DC; // float32
    constexpr std::ptrdiff_t m_OnBreak = 0x4E0; // CEntityIOOutput
}

namespace CPhysExplosion {
    constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4B0; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flDamage = 0x4B8; // float32
    constexpr std::ptrdiff_t m_radius = 0x4BC; // float32
    constexpr std::ptrdiff_t m_targetEntityName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4C8; // float32
    constexpr std::ptrdiff_t m_flPushScale = 0x4CC; // float32
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x4D0; // bool
    constexpr std::ptrdiff_t m_OnPushedPlayer = 0x4D8; // CEntityIOOutput
}

namespace CPhysFixed {
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x508; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x50C; // float32
    constexpr std::ptrdiff_t m_flAngularFrequency = 0x510; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x514; // float32
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x518; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x519; // bool
}

namespace CPhysForce {
    constexpr std::ptrdiff_t m_nameAttach = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_force = 0x4C0; // float32
    constexpr std::ptrdiff_t m_forceTime = 0x4C4; // float32
    constexpr std::ptrdiff_t m_attachedObject = 0x4C8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_wasRestored = 0x4CC; // bool
    constexpr std::ptrdiff_t m_integrator = 0x4D0; // CConstantForceController
}

namespace CPhysHinge {
    constexpr std::ptrdiff_t m_soundInfo = 0x510; // ConstraintSoundInfo
    constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x598; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x5C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAtMinLimit = 0x5E8; // bool
    constexpr std::ptrdiff_t m_bAtMaxLimit = 0x5E9; // bool
    constexpr std::ptrdiff_t m_hinge = 0x5EC; // constraint_hingeparams_t
    constexpr std::ptrdiff_t m_hingeFriction = 0x62C; // float32
    constexpr std::ptrdiff_t m_systemLoadScale = 0x630; // float32
    constexpr std::ptrdiff_t m_bIsAxisLocal = 0x634; // bool
    constexpr std::ptrdiff_t m_flMinRotation = 0x638; // float32
    constexpr std::ptrdiff_t m_flMaxRotation = 0x63C; // float32
    constexpr std::ptrdiff_t m_flInitialRotation = 0x640; // float32
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x644; // float32
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x648; // float32
    constexpr std::ptrdiff_t m_flAngleSpeed = 0x64C; // float32
    constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x650; // float32
    constexpr std::ptrdiff_t m_OnStartMoving = 0x658; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStopMoving = 0x680; // CEntityIOOutput
}

namespace CPhysImpact {
    constexpr std::ptrdiff_t m_damage = 0x4B0; // float32
    constexpr std::ptrdiff_t m_distance = 0x4B4; // float32
    constexpr std::ptrdiff_t m_directionEntityName = 0x4B8; // CUtlSymbolLarge
}

namespace CPhysLength {
    constexpr std::ptrdiff_t m_offset = 0x508; // Vector[2]
    constexpr std::ptrdiff_t m_vecAttach = 0x520; // Vector
    constexpr std::ptrdiff_t m_addLength = 0x52C; // float32
    constexpr std::ptrdiff_t m_minLength = 0x530; // float32
    constexpr std::ptrdiff_t m_totalLength = 0x534; // float32
    constexpr std::ptrdiff_t m_bEnableCollision = 0x538; // bool
}

namespace CPhysMagnet {
    constexpr std::ptrdiff_t m_OnMagnetAttach = 0x890; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMagnetDetach = 0x8B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0x8E0; // float32
    constexpr std::ptrdiff_t m_forceLimit = 0x8E4; // float32
    constexpr std::ptrdiff_t m_torqueLimit = 0x8E8; // float32
    constexpr std::ptrdiff_t m_MagnettedEntities = 0x8F0; // CUtlVector< magnetted_objects_t >
    constexpr std::ptrdiff_t m_bActive = 0x908; // bool
    constexpr std::ptrdiff_t m_bHasHitSomething = 0x909; // bool
    constexpr std::ptrdiff_t m_flTotalMass = 0x90C; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x910; // float32
    constexpr std::ptrdiff_t m_flNextSuckTime = 0x914; // GameTime_t
    constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0x918; // int32
}

namespace CPhysMotor {
    constexpr std::ptrdiff_t m_nameAttach = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hAttachedObject = 0x4B8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_spinUp = 0x4BC; // float32
    constexpr std::ptrdiff_t m_additionalAcceleration = 0x4C0; // float32
    constexpr std::ptrdiff_t m_angularAcceleration = 0x4C4; // float32
    constexpr std::ptrdiff_t m_lastTime = 0x4C8; // GameTime_t
    constexpr std::ptrdiff_t m_motor = 0x4E0; // CMotorController
}

namespace CPhysPulley {
    constexpr std::ptrdiff_t m_position2 = 0x508; // Vector
    constexpr std::ptrdiff_t m_offset = 0x514; // Vector[2]
    constexpr std::ptrdiff_t m_addLength = 0x52C; // float32
    constexpr std::ptrdiff_t m_gearRatio = 0x530; // float32
}

namespace CPhysSlideConstraint {
    constexpr std::ptrdiff_t m_axisEnd = 0x510; // Vector
    constexpr std::ptrdiff_t m_slideFriction = 0x51C; // float32
    constexpr std::ptrdiff_t m_systemLoadScale = 0x520; // float32
    constexpr std::ptrdiff_t m_initialOffset = 0x524; // float32
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x528; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x529; // bool
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x52C; // float32
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x530; // float32
    constexpr std::ptrdiff_t m_bUseEntityPivot = 0x534; // bool
    constexpr std::ptrdiff_t m_soundInfo = 0x538; // ConstraintSoundInfo
}

namespace CPhysThruster {
    constexpr std::ptrdiff_t m_localOrigin = 0x510; // Vector
}

namespace CPhysTorque {
    constexpr std::ptrdiff_t m_axis = 0x510; // Vector
}

namespace CPhysWheelConstraint {
    constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x508; // float32
    constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x50C; // float32
    constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x510; // float32
    constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x514; // bool
    constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x518; // float32
    constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x51C; // float32
    constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x520; // bool
    constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x524; // float32
    constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x528; // float32
    constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x52C; // float32
    constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x530; // float32
}

namespace CPhysicsEntitySolver {
    constexpr std::ptrdiff_t m_hMovingEntity = 0x4B8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4BC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_separationDuration = 0x4C0; // float32
    constexpr std::ptrdiff_t m_cancelTime = 0x4C4; // GameTime_t
}

namespace CPhysicsProp {
    constexpr std::ptrdiff_t m_MotionEnabled = 0xA10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0xA38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwake = 0xA60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAsleep = 0xA88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xAB0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xAD8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOutOfWorld = 0xB00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0xB28; // float32
    constexpr std::ptrdiff_t m_inertiaScale = 0xB2C; // float32
    constexpr std::ptrdiff_t m_buoyancyScale = 0xB30; // float32
    constexpr std::ptrdiff_t m_damageType = 0xB34; // int32
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0xB38; // int32
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xB3C; // float32
    constexpr std::ptrdiff_t m_bThrownByPlayer = 0xB40; // bool
    constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xB41; // bool
    constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xB42; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xB43; // bool
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xB44; // int32
    constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xB48; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xB49; // bool
    constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xB4C; // GameTime_t
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xB50; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0xB54; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xB58; // int32
    constexpr std::ptrdiff_t m_glowColor = 0xB5C; // Color
    constexpr std::ptrdiff_t m_bForceNavIgnore = 0xB60; // bool
    constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xB61; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xB62; // bool
    constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xB63; // bool
    constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xB64; // bool
    constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xB6C; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0xB6D; // bool
    constexpr std::ptrdiff_t m_bAwake = 0xB6E; // bool
    constexpr std::ptrdiff_t m_nCollisionGroupOverride = 0xB70; // int32
}

namespace CPhysicsPropRespawnable {
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xB78; // Vector
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xB84; // QAngle
    constexpr std::ptrdiff_t m_vOriginalMins = 0xB90; // Vector
    constexpr std::ptrdiff_t m_vOriginalMaxs = 0xB9C; // Vector
    constexpr std::ptrdiff_t m_flRespawnDuration = 0xBA8; // float32
}

namespace CPhysicsShake {
    constexpr std::ptrdiff_t m_force = 0x8; // Vector
}

namespace CPhysicsSpring {
    constexpr std::ptrdiff_t m_flFrequency = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flDampingRatio = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flRestLength = 0x4C0; // float32
    constexpr std::ptrdiff_t m_nameAttachStart = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttachEnd = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_start = 0x4D8; // Vector
    constexpr std::ptrdiff_t m_end = 0x4E4; // Vector
    constexpr std::ptrdiff_t m_teleportTick = 0x4F0; // uint32
}

namespace CPhysicsWire {
    constexpr std::ptrdiff_t m_nDensity = 0x4B0; // int32
}

namespace CPlantedC4 {
    constexpr std::ptrdiff_t m_bBombTicking = 0x890; // bool
    constexpr std::ptrdiff_t m_flC4Blow = 0x894; // GameTime_t
    constexpr std::ptrdiff_t m_nBombSite = 0x898; // int32
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x89C; // int32
    constexpr std::ptrdiff_t m_OnBombDefused = 0x8A0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0x8C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0x918; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x920; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x938; // int32
    constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0x93C; // bool
    constexpr std::ptrdiff_t m_bHasExploded = 0x93D; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0x940; // float32
    constexpr std::ptrdiff_t m_bBeingDefused = 0x944; // bool
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0x94C; // GameTime_t
    constexpr std::ptrdiff_t m_flDefuseLength = 0x954; // float32
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0x958; // GameTime_t
    constexpr std::ptrdiff_t m_bBombDefused = 0x95C; // bool
    constexpr std::ptrdiff_t m_hBombDefuser = 0x960; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_hControlPanel = 0x964; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iProgressBarTime = 0x968; // int32
    constexpr std::ptrdiff_t m_bVoiceAlertFired = 0x96C; // bool
    constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0x96D; // bool[4]
    constexpr std::ptrdiff_t m_flNextBotBeepTime = 0x974; // GameTime_t
    constexpr std::ptrdiff_t m_bPlantedAfterPickup = 0x97C; // bool
    constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0x980; // QAngle
    constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0x98C; // GameTime_t
}

namespace CPlatTrigger {
    constexpr std::ptrdiff_t m_pPlatform = 0x700; // CHandle< CFuncPlat >
}

namespace CPlayerControllerComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CPlayerPawnComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CPlayerPing {
    constexpr std::ptrdiff_t m_hPlayer = 0x4B8; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_hPingedEntity = 0x4BC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iType = 0x4C0; // int32
    constexpr std::ptrdiff_t m_bUrgent = 0x4C4; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x4C5; // char[18]
}

namespace CPlayerSprayDecal {
    constexpr std::ptrdiff_t m_nUniqueID = 0x700; // int32
    constexpr std::ptrdiff_t m_unAccountID = 0x704; // uint32
    constexpr std::ptrdiff_t m_unTraceID = 0x708; // uint32
    constexpr std::ptrdiff_t m_rtGcTime = 0x70C; // uint32
    constexpr std::ptrdiff_t m_vecEndPos = 0x710; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0x71C; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x728; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0x734; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0x740; // int32
    constexpr std::ptrdiff_t m_nEntity = 0x744; // int32
    constexpr std::ptrdiff_t m_nHitbox = 0x748; // int32
    constexpr std::ptrdiff_t m_flCreationTime = 0x74C; // float32
    constexpr std::ptrdiff_t m_nTintID = 0x750; // int32
    constexpr std::ptrdiff_t m_nVersion = 0x754; // uint8
    constexpr std::ptrdiff_t m_ubSignature = 0x755; // uint8[128]
}

namespace CPlayerVisibility {
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flFadeTime = 0x4BC; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4C1; // bool
}

namespace CPlayer_CameraServices {
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
    constexpr std::ptrdiff_t m_PlayerFog = 0x58; // fogplayerparams_t
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle< CColorCorrection >
    constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle< CTonemapController2 >
    constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
    constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158; // CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
}

namespace CPlayer_MovementServices {
    constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
    constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
    constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
    constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
    constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
    constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
    constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
    constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
    constexpr std::ptrdiff_t m_flMaxspeed = 0x190; // float32
    constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x194; // float32[4]
    constexpr std::ptrdiff_t m_flForwardMove = 0x1A4; // float32
    constexpr std::ptrdiff_t m_flLeftMove = 0x1A8; // float32
    constexpr std::ptrdiff_t m_flUpMove = 0x1AC; // float32
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1BC; // QAngle
}

namespace CPlayer_MovementServices_Humanoid {
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D0; // float32
    constexpr std::ptrdiff_t m_flFallVelocity = 0x1D4; // float32
    constexpr std::ptrdiff_t m_bInCrouch = 0x1D8; // bool
    constexpr std::ptrdiff_t m_nCrouchState = 0x1DC; // uint32
    constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E0; // GameTime_t
    constexpr std::ptrdiff_t m_bDucked = 0x1E4; // bool
    constexpr std::ptrdiff_t m_bDucking = 0x1E5; // bool
    constexpr std::ptrdiff_t m_bInDuckJump = 0x1E6; // bool
    constexpr std::ptrdiff_t m_groundNormal = 0x1E8; // Vector
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1F4; // float32
    constexpr std::ptrdiff_t m_surfaceProps = 0x1F8; // CUtlStringToken
    constexpr std::ptrdiff_t m_nStepside = 0x208; // int32
    constexpr std::ptrdiff_t m_iTargetVolume = 0x20C; // int32
    constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x210; // Vector
}

namespace CPlayer_ObserverServices {
    constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
    constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
}

namespace CPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_bAllowSwitchToNoWeapon = 0x40; // bool
    constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
    constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA8; // bool
}

namespace CPointAngleSensor {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_nLookAtName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4C0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hLookAtEntity = 0x4C4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flDuration = 0x4C8; // float32
    constexpr std::ptrdiff_t m_flDotTolerance = 0x4CC; // float32
    constexpr std::ptrdiff_t m_flFacingTime = 0x4D0; // GameTime_t
    constexpr std::ptrdiff_t m_bFired = 0x4D4; // bool
    constexpr std::ptrdiff_t m_OnFacingLookat = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_TargetDir = 0x528; // CEntityOutputTemplate< Vector >
    constexpr std::ptrdiff_t m_FacingPercentage = 0x550; // CEntityOutputTemplate< float32 >
}

namespace CPointAngularVelocitySensor {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flThreshold = 0x4B4; // float32
    constexpr std::ptrdiff_t m_nLastCompareResult = 0x4B8; // int32
    constexpr std::ptrdiff_t m_nLastFireResult = 0x4BC; // int32
    constexpr std::ptrdiff_t m_flFireTime = 0x4C0; // GameTime_t
    constexpr std::ptrdiff_t m_flFireInterval = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4C8; // float32
    constexpr std::ptrdiff_t m_lastOrientation = 0x4CC; // QAngle
    constexpr std::ptrdiff_t m_vecAxis = 0x4D8; // Vector
    constexpr std::ptrdiff_t m_bUseHelper = 0x4E4; // bool
    constexpr std::ptrdiff_t m_AngularVelocity = 0x4E8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnLessThan = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x538; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x588; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEqualTo = 0x5B0; // CEntityIOOutput
}

namespace CPointCamera {
    constexpr std::ptrdiff_t m_FOV = 0x4B0; // float32
    constexpr std::ptrdiff_t m_Resolution = 0x4B4; // float32
    constexpr std::ptrdiff_t m_bFogEnable = 0x4B8; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x4B9; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flFogEnd = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4C8; // float32
    constexpr std::ptrdiff_t m_bActive = 0x4CC; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4CD; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x4D0; // float32
    constexpr std::ptrdiff_t m_bNoSky = 0x4D4; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x4D8; // float32
    constexpr std::ptrdiff_t m_flZFar = 0x4DC; // float32
    constexpr std::ptrdiff_t m_flZNear = 0x4E0; // float32
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4E4; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x4E5; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4E8; // float32
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4EC; // float32
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x4F0; // float32
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x4F4; // float32
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x4F8; // float32
    constexpr std::ptrdiff_t m_TargetFOV = 0x4FC; // float32
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x500; // float32
    constexpr std::ptrdiff_t m_bIsOn = 0x504; // bool
    constexpr std::ptrdiff_t m_pNext = 0x508; // CPointCamera*
}

namespace CPointCameraVFOV {
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x510; // float32
}

namespace CPointClientUIDialog {
    constexpr std::ptrdiff_t m_hActivator = 0x8B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bStartEnabled = 0x8B4; // bool
}

namespace CPointClientUIWorldPanel {
    constexpr std::ptrdiff_t m_bIgnoreInput = 0x8B0; // bool
    constexpr std::ptrdiff_t m_bLit = 0x8B1; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x8B2; // bool
    constexpr std::ptrdiff_t m_flWidth = 0x8B4; // float32
    constexpr std::ptrdiff_t m_flHeight = 0x8B8; // float32
    constexpr std::ptrdiff_t m_flDPI = 0x8BC; // float32
    constexpr std::ptrdiff_t m_flInteractDistance = 0x8C0; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x8C4; // float32
    constexpr std::ptrdiff_t m_unOwnerContext = 0x8C8; // uint32
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8CC; // uint32
    constexpr std::ptrdiff_t m_unVerticalAlign = 0x8D0; // uint32
    constexpr std::ptrdiff_t m_unOrientation = 0x8D4; // uint32
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8D8; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x8E0; // CNetworkUtlVectorBase< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_bOpaque = 0x8F8; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0x8F9; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0x8FA; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x8FB; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x8FC; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0x8FD; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x8FE; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0x8FF; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x900; // int32
}

namespace CPointClientUIWorldTextPanel {
    constexpr std::ptrdiff_t m_messageText = 0x908; // char[512]
}

namespace CPointCommentaryNode {
    constexpr std::ptrdiff_t m_iszPreCommands = 0x890; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostCommands = 0x898; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0x8A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszViewTarget = 0x8A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewTarget = 0x8B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hViewTargetAngles = 0x8B4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszViewPosition = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewPosition = 0x8C0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hViewPositionMover = 0x8C4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bPreventMovement = 0x8C8; // bool
    constexpr std::ptrdiff_t m_bUnderCrosshair = 0x8C9; // bool
    constexpr std::ptrdiff_t m_bUnstoppable = 0x8CA; // bool
    constexpr std::ptrdiff_t m_flFinishedTime = 0x8CC; // GameTime_t
    constexpr std::ptrdiff_t m_vecFinishOrigin = 0x8D0; // Vector
    constexpr std::ptrdiff_t m_vecOriginalAngles = 0x8DC; // QAngle
    constexpr std::ptrdiff_t m_vecFinishAngles = 0x8E8; // QAngle
    constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0x8F4; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x8F5; // bool
    constexpr std::ptrdiff_t m_vecTeleportOrigin = 0x8F8; // Vector
    constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0x904; // GameTime_t
    constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0x908; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0x930; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActive = 0x958; // bool
    constexpr std::ptrdiff_t m_flStartTime = 0x95C; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x960; // float32
    constexpr std::ptrdiff_t m_iszTitle = 0x968; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0x970; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0x978; // int32
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0x97C; // int32
    constexpr std::ptrdiff_t m_bListenedTo = 0x980; // bool
}

namespace CPointEntityFinder {
    constexpr std::ptrdiff_t m_hEntity = 0x4B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iFilterName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4C0; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_iRefName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hReference = 0x4D0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_FindMethod = 0x4D4; // EntFinderMethod_t
    constexpr std::ptrdiff_t m_OnFoundEntity = 0x4D8; // CEntityIOOutput
}

namespace CPointGamestatsCounter {
    constexpr std::ptrdiff_t m_strStatisticName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x4B8; // bool
}

namespace CPointGiveAmmo {
    constexpr std::ptrdiff_t m_pActivator = 0x4B0; // CHandle< CBaseEntity >
}

namespace CPointHurt {
    constexpr std::ptrdiff_t m_nDamage = 0x4B0; // int32
    constexpr std::ptrdiff_t m_bitsDamageType = 0x4B4; // int32
    constexpr std::ptrdiff_t m_flRadius = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flDelay = 0x4BC; // float32
    constexpr std::ptrdiff_t m_strTarget = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pActivator = 0x4C8; // CHandle< CBaseEntity >
}

namespace CPointPrefab {
    constexpr std::ptrdiff_t m_targetMapName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fixupNames = 0x4C8; // bool
    constexpr std::ptrdiff_t m_bLoadDynamic = 0x4C9; // bool
    constexpr std::ptrdiff_t m_associatedRelayEntity = 0x4CC; // CHandle< CPointPrefab >
}

namespace CPointProximitySensor {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4B4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_Distance = 0x4B8; // CEntityOutputTemplate< float32 >
}

namespace CPointPulse {
    constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x5C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sNameFixupParent = 0x5D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sNameFixupLocal = 0x5D8; // CUtlSymbolLarge
}

namespace CPointPush {
    constexpr std::ptrdiff_t m_bEnabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4C0; // float32
    constexpr std::ptrdiff_t m_iszFilterName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4D0; // CHandle< CBaseFilter >
}

namespace CPointTeleport {
    constexpr std::ptrdiff_t m_vSaveOrigin = 0x4B0; // Vector
    constexpr std::ptrdiff_t m_vSaveAngles = 0x4BC; // QAngle
    constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4C8; // bool
    constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4C9; // bool
}

namespace CPointTemplate {
    constexpr std::ptrdiff_t m_iszWorldName = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4C8; // float32
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4CC; // bool
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x4D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x4F8; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x4FC; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x500; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x518; // CUtlVector< CEntityHandle >
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x530; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x538; // HSCRIPT
}

namespace CPointValueRemapper {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4B1; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x4B4; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x4C8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4CC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4D0; // float32
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x4D4; // float32
    constexpr std::ptrdiff_t m_flEngageDistance = 0x4D8; // float32
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4DC; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x4E0; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x500; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOutputEntities = 0x508; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_nHapticsType = 0x520; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x524; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x528; // float32
    constexpr std::ptrdiff_t m_flSnapValue = 0x52C; // float32
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x530; // float32
    constexpr std::ptrdiff_t m_nRatchetType = 0x534; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x538; // float32
    constexpr std::ptrdiff_t m_flInputOffset = 0x53C; // float32
    constexpr std::ptrdiff_t m_bEngaged = 0x540; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x541; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x544; // float32
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x548; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x54C; // Vector
    constexpr std::ptrdiff_t m_hUsingPlayer = 0x558; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flCustomOutputValue = 0x55C; // float32
    constexpr std::ptrdiff_t m_iszSoundEngage = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundDisengage = 0x568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x570; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x578; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x580; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Position = 0x590; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_PositionDelta = 0x5B8; // CEntityOutputTemplate< float32 >
    constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueOne = 0x608; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x630; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEngage = 0x658; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDisengage = 0x680; // CEntityIOOutput
}

namespace CPointVelocitySensor {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecAxis = 0x4B4; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_fPrevVelocity = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flAvgInterval = 0x4C8; // float32
    constexpr std::ptrdiff_t m_Velocity = 0x4D0; // CEntityOutputTemplate< float32 >
}

namespace CPointWorldText {
    constexpr std::ptrdiff_t m_messageText = 0x700; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0x900; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0x940; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0x941; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x944; // float32
    constexpr std::ptrdiff_t m_flFontSize = 0x948; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x94C; // float32
    constexpr std::ptrdiff_t m_Color = 0x950; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x954; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0x958; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0x95C; // PointWorldTextReorientMode_t
}

namespace CPostProcessingVolume {
    constexpr std::ptrdiff_t m_hPostSettings = 0x8B8; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
    constexpr std::ptrdiff_t m_flFadeDuration = 0x8C0; // float32
    constexpr std::ptrdiff_t m_flMinLogExposure = 0x8C4; // float32
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8C8; // float32
    constexpr std::ptrdiff_t m_flMinExposure = 0x8CC; // float32
    constexpr std::ptrdiff_t m_flMaxExposure = 0x8D0; // float32
    constexpr std::ptrdiff_t m_flExposureCompensation = 0x8D4; // float32
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8D8; // float32
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8DC; // float32
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x8E0; // float32
    constexpr std::ptrdiff_t m_bMaster = 0x8E4; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0x8E5; // bool
    constexpr std::ptrdiff_t m_flRate = 0x8E8; // float32
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x8EC; // float32
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x8F0; // float32
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x8F4; // float32
}

namespace CPrecipitationVData {
    constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
    constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
    constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
    constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
    constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
}

namespace CProjectedDecal {
    constexpr std::ptrdiff_t m_nTexture = 0x4B0; // int32
    constexpr std::ptrdiff_t m_flDistance = 0x4B4; // float32
}

namespace CPropDoorRotating {
    constexpr std::ptrdiff_t m_vecAxis = 0xD98; // Vector
    constexpr std::ptrdiff_t m_flDistance = 0xDA4; // float32
    constexpr std::ptrdiff_t m_eSpawnPosition = 0xDA8; // PropDoorRotatingSpawnPos_t
    constexpr std::ptrdiff_t m_eOpenDirection = 0xDAC; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xDB0; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_flAjarAngle = 0xDB4; // float32
    constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xDB8; // QAngle
    constexpr std::ptrdiff_t m_angRotationClosed = 0xDC4; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenForward = 0xDD0; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenBack = 0xDDC; // QAngle
    constexpr std::ptrdiff_t m_angGoal = 0xDE8; // QAngle
    constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xDF4; // Vector
    constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xE00; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xE0C; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xE18; // Vector
    constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xE24; // bool
    constexpr std::ptrdiff_t m_hEntityBlocker = 0xE28; // CHandle< CEntityBlocker >
}

namespace CPropDoorRotatingBreakable {
    constexpr std::ptrdiff_t m_bBreakable = 0xE30; // bool
    constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xE31; // bool
    constexpr std::ptrdiff_t m_currentDamageState = 0xE34; // int32
    constexpr std::ptrdiff_t m_damageStates = 0xE38; // CUtlVector< CUtlSymbolLarge >
}

namespace CPulseCell_Inflow_GameEvent {
    constexpr std::ptrdiff_t m_EventName = 0x70; // CBufferString
}

namespace CPulseCell_Outflow_PlayVCD {
    constexpr std::ptrdiff_t m_vcdFilename = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_OnFinished = 0x50; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_Triggers = 0x60; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_SoundEventStart {
    constexpr std::ptrdiff_t m_Type = 0x48; // SoundEventStartType_t
}

namespace CPulseCell_Step_EntFire {
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

namespace CPulseCell_Step_SetAnimGraphParam {
    constexpr std::ptrdiff_t m_ParamName = 0x48; // CUtlString
}

namespace CPulseCell_Value_FindEntByName {
    constexpr std::ptrdiff_t m_EntityType = 0x48; // CUtlString
}

namespace CRR_Response {
    constexpr std::ptrdiff_t m_Type = 0x0; // uint8
    constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
    constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
    constexpr std::ptrdiff_t m_Params = 0x148; // ResponseParams
    constexpr std::ptrdiff_t m_fMatchScore = 0x168; // float32
    constexpr std::ptrdiff_t m_szSpeakerContext = 0x170; // char*
    constexpr std::ptrdiff_t m_szWorldContext = 0x178; // char*
    constexpr std::ptrdiff_t m_Followup = 0x180; // ResponseFollowup
    constexpr std::ptrdiff_t m_pchCriteriaNames = 0x1B8; // CUtlVector< CUtlSymbol >
    constexpr std::ptrdiff_t m_pchCriteriaValues = 0x1D0; // CUtlVector< char* >
}

namespace CRagdollConstraint {
    constexpr std::ptrdiff_t m_xmin = 0x508; // float32
    constexpr std::ptrdiff_t m_xmax = 0x50C; // float32
    constexpr std::ptrdiff_t m_ymin = 0x510; // float32
    constexpr std::ptrdiff_t m_ymax = 0x514; // float32
    constexpr std::ptrdiff_t m_zmin = 0x518; // float32
    constexpr std::ptrdiff_t m_zmax = 0x51C; // float32
    constexpr std::ptrdiff_t m_xfriction = 0x520; // float32
    constexpr std::ptrdiff_t m_yfriction = 0x524; // float32
    constexpr std::ptrdiff_t m_zfriction = 0x528; // float32
}

namespace CRagdollMagnet {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_radius = 0x4B4; // float32
    constexpr std::ptrdiff_t m_force = 0x4B8; // float32
    constexpr std::ptrdiff_t m_axis = 0x4BC; // Vector
}

namespace CRagdollManager {
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4B0; // int8
    constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4B4; // int32
    constexpr std::ptrdiff_t m_bSaveImportant = 0x4B8; // bool
}

namespace CRagdollProp {
    constexpr std::ptrdiff_t m_ragdoll = 0x898; // ragdoll_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x8D0; // bool
    constexpr std::ptrdiff_t m_ragPos = 0x8D8; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_ragAngles = 0x8F0; // CNetworkUtlVectorBase< QAngle >
    constexpr std::ptrdiff_t m_hRagdollSource = 0x908; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_lastUpdateTickCount = 0x90C; // uint32
    constexpr std::ptrdiff_t m_allAsleep = 0x910; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0x911; // bool
    constexpr std::ptrdiff_t m_hDamageEntity = 0x914; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hKiller = 0x918; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x91C; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x920; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeOutStartTime = 0x924; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeTime = 0x928; // float32
    constexpr std::ptrdiff_t m_vecLastOrigin = 0x92C; // Vector
    constexpr std::ptrdiff_t m_flAwakeTime = 0x938; // GameTime_t
    constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0x93C; // GameTime_t
    constexpr std::ptrdiff_t m_nBloodColor = 0x940; // int32
    constexpr std::ptrdiff_t m_strOriginClassName = 0x948; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strSourceClassName = 0x950; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0x958; // bool
    constexpr std::ptrdiff_t m_bShouldTeleportPhysics = 0x959; // bool
    constexpr std::ptrdiff_t m_flBlendWeight = 0x95C; // float32
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x960; // float32
    constexpr std::ptrdiff_t m_ragdollMins = 0x968; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_ragdollMaxs = 0x980; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0x998; // bool
    constexpr std::ptrdiff_t m_bValidatePoweredRagdollPose = 0x9F8; // bool
}

namespace CRagdollPropAttached {
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xA38; // uint32
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xA3C; // uint32
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xA40; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xA4C; // Vector
    constexpr std::ptrdiff_t m_bShouldDetach = 0xA58; // bool
    constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xA68; // bool
}

namespace CRandSimTimer {
    constexpr std::ptrdiff_t m_minInterval = 0x8; // float32
    constexpr std::ptrdiff_t m_maxInterval = 0xC; // float32
}

namespace CRandStopwatch {
    constexpr std::ptrdiff_t m_minInterval = 0xC; // float32
    constexpr std::ptrdiff_t m_maxInterval = 0x10; // float32
}

namespace CRangeFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
}

namespace CRangeInt {
    constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
}

namespace CRectLight {
    constexpr std::ptrdiff_t m_bShowLight = 0x938; // bool
}

namespace CRemapFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
}

namespace CRenderComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
    constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0; // bool
}

namespace CResponseCriteriaSet {
    constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x28; // int32
    constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x2C; // bool
}

namespace CResponseQueue {
    constexpr std::ptrdiff_t m_ExpresserTargets = 0x50; // CUtlVector< CAI_Expresser* >
}

namespace CResponseQueue_CDeferredResponse {
    constexpr std::ptrdiff_t m_contexts = 0x10; // CResponseCriteriaSet
    constexpr std::ptrdiff_t m_fDispatchTime = 0x40; // float32
    constexpr std::ptrdiff_t m_hIssuer = 0x44; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_response = 0x50; // CRR_Response
    constexpr std::ptrdiff_t m_bResponseValid = 0x238; // bool
}

namespace CRetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
    constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
}

namespace CRevertSaved {
    constexpr std::ptrdiff_t m_loadTime = 0x700; // float32
    constexpr std::ptrdiff_t m_Duration = 0x704; // float32
    constexpr std::ptrdiff_t m_HoldTime = 0x708; // float32
}

namespace CRopeKeyframe {
    constexpr std::ptrdiff_t m_RopeFlags = 0x708; // uint16
    constexpr std::ptrdiff_t m_iNextLinkName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Slack = 0x718; // int16
    constexpr std::ptrdiff_t m_Width = 0x71C; // float32
    constexpr std::ptrdiff_t m_TextureScale = 0x720; // float32
    constexpr std::ptrdiff_t m_nSegments = 0x724; // uint8
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x725; // bool
    constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x730; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_Subdiv = 0x738; // uint8
    constexpr std::ptrdiff_t m_nChangeCount = 0x739; // uint8
    constexpr std::ptrdiff_t m_RopeLength = 0x73A; // int16
    constexpr std::ptrdiff_t m_fLockedPoints = 0x73C; // uint8
    constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x73D; // bool
    constexpr std::ptrdiff_t m_flScrollSpeed = 0x740; // float32
    constexpr std::ptrdiff_t m_bStartPointValid = 0x744; // bool
    constexpr std::ptrdiff_t m_bEndPointValid = 0x745; // bool
    constexpr std::ptrdiff_t m_hStartPoint = 0x748; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hEndPoint = 0x74C; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iStartAttachment = 0x750; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0x751; // AttachmentHandle_t
}

namespace CRotDoor {
    constexpr std::ptrdiff_t m_bSolidBsp = 0x988; // bool
}

namespace CRuleEntity {
    constexpr std::ptrdiff_t m_iszMaster = 0x700; // CUtlSymbolLarge
}

namespace CRulePointEntity {
    constexpr std::ptrdiff_t m_Score = 0x708; // int32
}

namespace CSAdditionalMatchStats_t {
    constexpr std::ptrdiff_t m_numRoundsSurvived = 0x14; // int32
    constexpr std::ptrdiff_t m_maxNumRoundsSurvived = 0x18; // int32
    constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x1C; // int32
    constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x20; // int32
    constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x24; // int32
    constexpr std::ptrdiff_t m_numFirstKills = 0x28; // int32
    constexpr std::ptrdiff_t m_numClutchKills = 0x2C; // int32
    constexpr std::ptrdiff_t m_numPistolKills = 0x30; // int32
    constexpr std::ptrdiff_t m_numSniperKills = 0x34; // int32
}

namespace CSAdditionalPerRoundStats_t {
    constexpr std::ptrdiff_t m_numChickensKilled = 0x0; // int32
    constexpr std::ptrdiff_t m_killsWhileBlind = 0x4; // int32
    constexpr std::ptrdiff_t m_bombCarrierkills = 0x8; // int32
    constexpr std::ptrdiff_t m_iBurnDamageInflicted = 0xC; // int32
    constexpr std::ptrdiff_t m_iDinks = 0x10; // int32
}

namespace CSMatchStats_t {
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
    constexpr std::ptrdiff_t m_iEnemy2Ks = 0x74; // int32
    constexpr std::ptrdiff_t m_iUtility_Count = 0x78; // int32
    constexpr std::ptrdiff_t m_iUtility_Successes = 0x7C; // int32
    constexpr std::ptrdiff_t m_iUtility_Enemies = 0x80; // int32
    constexpr std::ptrdiff_t m_iFlash_Count = 0x84; // int32
    constexpr std::ptrdiff_t m_iFlash_Successes = 0x88; // int32
    constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x8C; // int32
    constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x90; // int32
    constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x94; // int32
    constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0x98; // int32
    constexpr std::ptrdiff_t m_i1v1Count = 0x9C; // int32
    constexpr std::ptrdiff_t m_i1v1Wins = 0xA0; // int32
    constexpr std::ptrdiff_t m_i1v2Count = 0xA4; // int32
    constexpr std::ptrdiff_t m_i1v2Wins = 0xA8; // int32
    constexpr std::ptrdiff_t m_iEntryCount = 0xAC; // int32
    constexpr std::ptrdiff_t m_iEntryWins = 0xB0; // int32
}

namespace CSPerRoundStats_t {
    constexpr std::ptrdiff_t m_iKills = 0x30; // int32
    constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
    constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
    constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
    constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
    constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
    constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
    constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
    constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
    constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
    constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
    constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
    constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
}

namespace CSceneEntity {
    constexpr std::ptrdiff_t m_iszSceneFile = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget1 = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget2 = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget3 = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget4 = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget5 = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget6 = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget7 = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget8 = 0x500; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTarget1 = 0x508; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget2 = 0x50C; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget3 = 0x510; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget4 = 0x514; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget5 = 0x518; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget6 = 0x51C; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget7 = 0x520; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget8 = 0x524; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x528; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x529; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x52A; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x52B; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x52C; // float32
    constexpr std::ptrdiff_t m_flCurrentTime = 0x530; // float32
    constexpr std::ptrdiff_t m_flFrameTime = 0x534; // float32
    constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x538; // bool
    constexpr std::ptrdiff_t m_fPitch = 0x53C; // float32
    constexpr std::ptrdiff_t m_bAutomated = 0x540; // bool
    constexpr std::ptrdiff_t m_nAutomatedAction = 0x544; // int32
    constexpr std::ptrdiff_t m_flAutomationDelay = 0x548; // float32
    constexpr std::ptrdiff_t m_flAutomationTime = 0x54C; // float32
    constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x550; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x554; // bool
    constexpr std::ptrdiff_t m_bPausedViaInput = 0x555; // bool
    constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x556; // bool
    constexpr std::ptrdiff_t m_bWaitingForActor = 0x557; // bool
    constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x558; // bool
    constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x559; // bool
    constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x55A; // bool
    constexpr std::ptrdiff_t m_hActorList = 0x560; // CNetworkUtlVectorBase< CHandle< CBaseFlex > >
    constexpr std::ptrdiff_t m_hRemoveActorList = 0x578; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x5A0; // int32
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5A4; // uint16
    constexpr std::ptrdiff_t m_OnStart = 0x5A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCompletion = 0x5D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCanceled = 0x5F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPaused = 0x620; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnResumed = 0x648; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTrigger = 0x670; // CEntityIOOutput[16]
    constexpr std::ptrdiff_t m_hInterruptScene = 0x980; // CHandle< CSceneEntity >
    constexpr std::ptrdiff_t m_nInterruptCount = 0x984; // int32
    constexpr std::ptrdiff_t m_bSceneMissing = 0x988; // bool
    constexpr std::ptrdiff_t m_bInterrupted = 0x989; // bool
    constexpr std::ptrdiff_t m_bCompletedEarly = 0x98A; // bool
    constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x98B; // bool
    constexpr std::ptrdiff_t m_bRestoring = 0x98C; // bool
    constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x990; // CUtlVector< CHandle< CSceneEntity > >
    constexpr std::ptrdiff_t m_hListManagers = 0x9A8; // CUtlVector< CHandle< CSceneListManager > >
    constexpr std::ptrdiff_t m_iszSoundName = 0x9E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hActor = 0x9F0; // CHandle< CBaseFlex >
    constexpr std::ptrdiff_t m_hActivator = 0x9F4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_BusyActor = 0x9F8; // int32
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x9FC; // SceneOnPlayerDeath_t
}

namespace CSceneEventInfo {
    constexpr std::ptrdiff_t m_iLayer = 0x0; // int32
    constexpr std::ptrdiff_t m_iPriority = 0x4; // int32
    constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
    constexpr std::ptrdiff_t m_flWeight = 0xC; // float32
    constexpr std::ptrdiff_t m_bIsMoving = 0x10; // bool
    constexpr std::ptrdiff_t m_bHasArrived = 0x11; // bool
    constexpr std::ptrdiff_t m_flInitialYaw = 0x14; // float32
    constexpr std::ptrdiff_t m_flTargetYaw = 0x18; // float32
    constexpr std::ptrdiff_t m_flFacingYaw = 0x1C; // float32
    constexpr std::ptrdiff_t m_nType = 0x20; // int32
    constexpr std::ptrdiff_t m_flNext = 0x24; // GameTime_t
    constexpr std::ptrdiff_t m_bIsGesture = 0x28; // bool
    constexpr std::ptrdiff_t m_bShouldRemove = 0x29; // bool
    constexpr std::ptrdiff_t m_hTarget = 0x54; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nSceneEventId = 0x58; // uint32
    constexpr std::ptrdiff_t m_bClientSide = 0x5C; // bool
    constexpr std::ptrdiff_t m_bStarted = 0x5D; // bool
}

namespace CSceneListManager {
    constexpr std::ptrdiff_t m_hListManagers = 0x4B0; // CUtlVector< CHandle< CSceneListManager > >
    constexpr std::ptrdiff_t m_iszScenes = 0x4C8; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_hScenes = 0x548; // CHandle< CBaseEntity >[16]
}

namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

namespace CScriptItem {
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x968; // CEntityIOOutput
    constexpr std::ptrdiff_t m_MoveTypeOverride = 0x990; // MoveType_t
}

namespace CScriptNavBlocker {
    constexpr std::ptrdiff_t m_vExtent = 0x710; // Vector
}

namespace CScriptTriggerHurt {
    constexpr std::ptrdiff_t m_vExtent = 0x948; // Vector
}

namespace CScriptTriggerMultiple {
    constexpr std::ptrdiff_t m_vExtent = 0x8D0; // Vector
}

namespace CScriptTriggerOnce {
    constexpr std::ptrdiff_t m_vExtent = 0x8D0; // Vector
}

namespace CScriptTriggerPush {
    constexpr std::ptrdiff_t m_vExtent = 0x8D0; // Vector
}

namespace CScriptUniformRandomStream {
    constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
    constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32
}

namespace CScriptedSequence {
    constexpr std::ptrdiff_t m_iszEntry = 0x4B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPreIdle = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPlay = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostIdle = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszNextScript = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntity = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSyncGroup = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nMoveTo = 0x4F0; // ScriptedMoveTo_t
    constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x4F4; // bool
    constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x4F5; // bool
    constexpr std::ptrdiff_t m_bIsPlayingAction = 0x4F6; // bool
    constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x4F7; // bool
    constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x4F8; // bool
    constexpr std::ptrdiff_t m_bLoopActionSequence = 0x4F9; // bool
    constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x4FA; // bool
    constexpr std::ptrdiff_t m_bSynchPostIdles = 0x4FB; // bool
    constexpr std::ptrdiff_t m_bIgnoreGravity = 0x4FC; // bool
    constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x4FD; // bool
    constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x4FE; // bool
    constexpr std::ptrdiff_t m_bDontAddModifiers = 0x4FF; // bool
    constexpr std::ptrdiff_t m_flRadius = 0x500; // float32
    constexpr std::ptrdiff_t m_flRepeat = 0x504; // float32
    constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x508; // float32
    constexpr std::ptrdiff_t m_flMoveInterpTime = 0x50C; // float32
    constexpr std::ptrdiff_t m_flAngRate = 0x510; // float32
    constexpr std::ptrdiff_t m_iDelay = 0x514; // int32
    constexpr std::ptrdiff_t m_startTime = 0x518; // GameTime_t
    constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x51C; // bool
    constexpr std::ptrdiff_t m_saved_effects = 0x520; // int32
    constexpr std::ptrdiff_t m_savedFlags = 0x524; // int32
    constexpr std::ptrdiff_t m_savedCollisionGroup = 0x528; // int32
    constexpr std::ptrdiff_t m_interruptable = 0x52C; // bool
    constexpr std::ptrdiff_t m_sequenceStarted = 0x52D; // bool
    constexpr std::ptrdiff_t m_bPrevAnimatedEveryTick = 0x52E; // bool
    constexpr std::ptrdiff_t m_bForcedAnimatedEveryTick = 0x52F; // bool
    constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x530; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x534; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hNextCine = 0x538; // CHandle< CScriptedSequence >
    constexpr std::ptrdiff_t m_bThinking = 0x53C; // bool
    constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x53D; // bool
    constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x53E; // bool
    constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x53F; // bool
    constexpr std::ptrdiff_t m_hLastFoundEntity = 0x540; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hForcedTarget = 0x544; // CHandle< CBaseAnimGraph >
    constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x548; // bool
    constexpr std::ptrdiff_t m_bForceSynch = 0x549; // bool
    constexpr std::ptrdiff_t m_bTargetWasAsleep = 0x54A; // bool
    constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x54B; // bool
    constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x54C; // bool
    constexpr std::ptrdiff_t m_onDeathBehavior = 0x550; // ScriptedOnDeath_t
    constexpr std::ptrdiff_t m_ConflictResponse = 0x554; // ScriptedConflictResponse_t
    constexpr std::ptrdiff_t m_OnBeginSequence = 0x558; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x580; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndSequence = 0x5A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x5D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelSequence = 0x5F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x620; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnScriptEvent = 0x648; // CEntityIOOutput[8]
    constexpr std::ptrdiff_t m_matOtherToMain = 0x790; // CTransform
    constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x7B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x7B4; // int32
}

namespace CSensorGrenadeProjectile {
    constexpr std::ptrdiff_t m_fExpireTime = 0xA28; // GameTime_t
    constexpr std::ptrdiff_t m_fNextDetectPlayerSound = 0xA2C; // GameTime_t
    constexpr std::ptrdiff_t m_hDisplayGrenade = 0xA30; // CHandle< CBaseEntity >
}

namespace CShatterGlassShard {
    constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector< Vector2D >
    constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
    constexpr std::ptrdiff_t m_hModel = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
    constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38; // CHandle< CShatterGlassShardPhysics >
    constexpr std::ptrdiff_t m_hParentPanel = 0x3C; // CHandle< CFuncShatterglass >
    constexpr std::ptrdiff_t m_hParentShard = 0x40; // uint32
    constexpr std::ptrdiff_t m_ShatterStressType = 0x44; // ShatterGlassStressType
    constexpr std::ptrdiff_t m_vecStressVelocity = 0x48; // Vector
    constexpr std::ptrdiff_t m_bCreatedModel = 0x54; // bool
    constexpr std::ptrdiff_t m_flLongestEdge = 0x58; // float32
    constexpr std::ptrdiff_t m_flShortestEdge = 0x5C; // float32
    constexpr std::ptrdiff_t m_flLongestAcross = 0x60; // float32
    constexpr std::ptrdiff_t m_flShortestAcross = 0x64; // float32
    constexpr std::ptrdiff_t m_flSumOfAllEdges = 0x68; // float32
    constexpr std::ptrdiff_t m_flArea = 0x6C; // float32
    constexpr std::ptrdiff_t m_nOnFrameEdge = 0x70; // OnFrame
    constexpr std::ptrdiff_t m_nParentPanelsNthShard = 0x74; // int32
    constexpr std::ptrdiff_t m_nSubShardGeneration = 0x78; // int32
    constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x7C; // Vector2D
    constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x84; // bool
    constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x88; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x90; // Vector2D
    constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x98; // bool
    constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x99; // bool
    constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x9A; // bool
    constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
    constexpr std::ptrdiff_t m_bShatterRateLimited = 0xA0; // bool
    constexpr std::ptrdiff_t m_hEntityHittingMe = 0xA4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecNeighbors = 0xA8; // CUtlVector< uint32 >
}

namespace CShatterGlassShardPhysics {
    constexpr std::ptrdiff_t m_bDebris = 0xB78; // bool
    constexpr std::ptrdiff_t m_hParentShard = 0xB7C; // uint32
    constexpr std::ptrdiff_t m_ShardDesc = 0xB80; // shard_model_desc_t
}

namespace CSimTimer {
    constexpr std::ptrdiff_t m_interval = 0x8; // float32
}

namespace CSimpleSimTimer {
    constexpr std::ptrdiff_t m_next = 0x0; // GameTime_t
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
}

namespace CSingleplayRules {
    constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0x90; // bool
}

namespace CSkeletonAnimationController {
    constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
}

namespace CSkeletonInstance {
    constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x390; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x391; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x392; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x394; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x398; // uint8
}

namespace CSkillDamage {
    constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
    constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x10; // float32
}

namespace CSkillFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
}

namespace CSkillInt {
    constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
}

namespace CSkyCamera {
    constexpr std::ptrdiff_t m_skyboxData = 0x4B0; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x540; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x544; // bool
    constexpr std::ptrdiff_t m_pNext = 0x548; // CSkyCamera*
}

namespace CSkyboxReference {
    constexpr std::ptrdiff_t m_worldGroupId = 0x4B0; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x4B4; // CHandle< CSkyCamera >
}

namespace CSmokeGrenadeProjectile {
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xA40; // int32
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xA44; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0xA48; // int32
    constexpr std::ptrdiff_t m_vSmokeColor = 0xA4C; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xA58; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0xA68; // CUtlVector< uint8 >
    constexpr std::ptrdiff_t m_flLastBounce = 0xA80; // GameTime_t
    constexpr std::ptrdiff_t m_fllastSimulationTime = 0xA84; // GameTime_t
}

namespace CSmoothFunc {
    constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float32
    constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float32
    constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float32
    constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float32
    constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32
}

namespace CSound {
    constexpr std::ptrdiff_t m_hOwner = 0x0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget = 0x4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iVolume = 0x8; // int32
    constexpr std::ptrdiff_t m_flOcclusionScale = 0xC; // float32
    constexpr std::ptrdiff_t m_iType = 0x10; // int32
    constexpr std::ptrdiff_t m_iNextAudible = 0x14; // int32
    constexpr std::ptrdiff_t m_flExpireTime = 0x18; // GameTime_t
    constexpr std::ptrdiff_t m_iNext = 0x1C; // int16
    constexpr std::ptrdiff_t m_bNoExpirationTime = 0x1E; // bool
    constexpr std::ptrdiff_t m_ownerChannelIndex = 0x20; // int32
    constexpr std::ptrdiff_t m_vecOrigin = 0x24; // Vector
    constexpr std::ptrdiff_t m_bHasOwner = 0x30; // bool
}

namespace CSoundAreaEntityBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x4C0; // Vector
}

namespace CSoundAreaEntityOrientedBox {
    constexpr std::ptrdiff_t m_vMin = 0x4D0; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x4DC; // Vector
}

namespace CSoundAreaEntitySphere {
    constexpr std::ptrdiff_t m_flRadius = 0x4D0; // float32
}

namespace CSoundEnt {
    constexpr std::ptrdiff_t m_iFreeSound = 0x4B0; // int32
    constexpr std::ptrdiff_t m_iActiveSound = 0x4B4; // int32
    constexpr std::ptrdiff_t m_cLastActiveSounds = 0x4B8; // int32
    constexpr std::ptrdiff_t m_SoundPool = 0x4BC; // CSound[128]
}

namespace CSoundEnvelope {
    constexpr std::ptrdiff_t m_current = 0x0; // float32
    constexpr std::ptrdiff_t m_target = 0x4; // float32
    constexpr std::ptrdiff_t m_rate = 0x8; // float32
    constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
}

namespace CSoundEventAABBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x558; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x564; // Vector
}

namespace CSoundEventEntity {
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4B0; // bool
    constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4B1; // bool
    constexpr std::ptrdiff_t m_bStopOnNew = 0x4B2; // bool
    constexpr std::ptrdiff_t m_bSaveRestore = 0x4B3; // bool
    constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4B4; // bool
    constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4B8; // float32
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszAttachmentName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_onGUIDChanged = 0x4D0; // CEntityOutputTemplate< uint64 >
    constexpr std::ptrdiff_t m_onSoundFinished = 0x4F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSoundName = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSource = 0x550; // CEntityHandle
}

namespace CSoundEventOBBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x558; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x564; // Vector
}

namespace CSoundEventParameter {
    constexpr std::ptrdiff_t m_iszParamName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flFloatValue = 0x4C0; // float32
}

namespace CSoundEventPathCornerEntity {
    constexpr std::ptrdiff_t m_iszPathCorner = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iCountMax = 0x560; // int32
    constexpr std::ptrdiff_t m_flDistanceMax = 0x564; // float32
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x568; // float32
    constexpr std::ptrdiff_t m_flDotProductMax = 0x56C; // float32
    constexpr std::ptrdiff_t bPlaying = 0x570; // bool
}

namespace CSoundOpvarSetAABBEntity {
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x648; // Vector
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x654; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x660; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x66C; // Vector
    constexpr std::ptrdiff_t m_nAABBDirection = 0x678; // int32
    constexpr std::ptrdiff_t m_vInnerMins = 0x67C; // Vector
    constexpr std::ptrdiff_t m_vInnerMaxs = 0x688; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x694; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x6A0; // Vector
}

namespace CSoundOpvarSetEntity {
    constexpr std::ptrdiff_t m_iszStackName = 0x4B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nOpvarType = 0x4D0; // int32
    constexpr std::ptrdiff_t m_nOpvarIndex = 0x4D4; // int32
    constexpr std::ptrdiff_t m_flOpvarValue = 0x4D8; // float32
    constexpr std::ptrdiff_t m_OpvarValueString = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bSetOnSpawn = 0x4E8; // bool
}

namespace CSoundOpvarSetOBBWindEntity {
    constexpr std::ptrdiff_t m_vMins = 0x548; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x554; // Vector
    constexpr std::ptrdiff_t m_vDistanceMins = 0x560; // Vector
    constexpr std::ptrdiff_t m_vDistanceMaxs = 0x56C; // Vector
    constexpr std::ptrdiff_t m_flWindMin = 0x578; // float32
    constexpr std::ptrdiff_t m_flWindMax = 0x57C; // float32
    constexpr std::ptrdiff_t m_flWindMapMin = 0x580; // float32
    constexpr std::ptrdiff_t m_flWindMapMax = 0x584; // float32
}

namespace CSoundOpvarSetPathCornerEntity {
    constexpr std::ptrdiff_t m_flDistMinSqr = 0x660; // float32
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x664; // float32
    constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x668; // CUtlSymbolLarge
}

namespace CSoundOpvarSetPointBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
    constexpr std::ptrdiff_t m_hSource = 0x4B4; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vLastPosition = 0x518; // Vector
    constexpr std::ptrdiff_t m_iszStackName = 0x528; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x530; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x538; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x540; // int32
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x544; // bool
}

namespace CSoundOpvarSetPointEntity {
    constexpr std::ptrdiff_t m_OnEnter = 0x548; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExit = 0x570; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAutoDisable = 0x598; // bool
    constexpr std::ptrdiff_t m_flDistanceMin = 0x5DC; // float32
    constexpr std::ptrdiff_t m_flDistanceMax = 0x5E0; // float32
    constexpr std::ptrdiff_t m_flDistanceMapMin = 0x5E4; // float32
    constexpr std::ptrdiff_t m_flDistanceMapMax = 0x5E8; // float32
    constexpr std::ptrdiff_t m_flOcclusionRadius = 0x5EC; // float32
    constexpr std::ptrdiff_t m_flOcclusionMin = 0x5F0; // float32
    constexpr std::ptrdiff_t m_flOcclusionMax = 0x5F4; // float32
    constexpr std::ptrdiff_t m_flValSetOnDisable = 0x5F8; // float32
    constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x5FC; // bool
    constexpr std::ptrdiff_t m_nSimulationMode = 0x600; // int32
    constexpr std::ptrdiff_t m_nVisibilitySamples = 0x604; // int32
    constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x608; // Vector
    constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x614; // float32
    constexpr std::ptrdiff_t m_hDynamicEntity = 0x618; // CEntityHandle
    constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x620; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x628; // float32
    constexpr std::ptrdiff_t m_vPathingSourcePos = 0x62C; // Vector
    constexpr std::ptrdiff_t m_vPathingListenerPos = 0x638; // Vector
    constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x644; // int32
}

namespace CSoundPatch {
    constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
    constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
    constexpr std::ptrdiff_t m_shutdownTime = 0x30; // float32
    constexpr std::ptrdiff_t m_flLastTime = 0x34; // float32
    constexpr std::ptrdiff_t m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hEnt = 0x40; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_soundEntityIndex = 0x44; // CEntityIndex
    constexpr std::ptrdiff_t m_soundOrigin = 0x48; // Vector
    constexpr std::ptrdiff_t m_isPlaying = 0x54; // int32
    constexpr std::ptrdiff_t m_Filter = 0x58; // CCopyRecipientFilter
    constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0x80; // float32
    constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0x84; // bool
    constexpr std::ptrdiff_t m_iszClassName = 0x88; // CUtlSymbolLarge
}

namespace CSoundStackSave {
    constexpr std::ptrdiff_t m_iszStackName = 0x4B0; // CUtlSymbolLarge
}

namespace CSpotlightEnd {
    constexpr std::ptrdiff_t m_flLightScale = 0x700; // float32
    constexpr std::ptrdiff_t m_Radius = 0x704; // float32
    constexpr std::ptrdiff_t m_vSpotlightDir = 0x708; // Vector
    constexpr std::ptrdiff_t m_vSpotlightOrg = 0x714; // Vector
}

namespace CSprite {
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0x708; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nAttachment = 0x70C; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0x710; // float32
    constexpr std::ptrdiff_t m_flFrame = 0x714; // float32
    constexpr std::ptrdiff_t m_flDieTime = 0x718; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0x728; // uint32
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0x72C; // float32
    constexpr std::ptrdiff_t m_flSpriteScale = 0x730; // float32
    constexpr std::ptrdiff_t m_flScaleDuration = 0x734; // float32
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x738; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x73C; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x740; // float32
    constexpr std::ptrdiff_t m_flLastTime = 0x744; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0x748; // float32
    constexpr std::ptrdiff_t m_flStartScale = 0x74C; // float32
    constexpr std::ptrdiff_t m_flDestScale = 0x750; // float32
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x754; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0x758; // int32
    constexpr std::ptrdiff_t m_nDestBrightness = 0x75C; // int32
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x760; // GameTime_t
    constexpr std::ptrdiff_t m_nSpriteWidth = 0x764; // int32
    constexpr std::ptrdiff_t m_nSpriteHeight = 0x768; // int32
}

namespace CStopwatch {
    constexpr std::ptrdiff_t m_interval = 0xC; // float32
}

namespace CStopwatchBase {
    constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
}

namespace CSun {
    constexpr std::ptrdiff_t m_vDirection = 0x700; // Vector
    constexpr std::ptrdiff_t m_clrOverlay = 0x70C; // Color
    constexpr std::ptrdiff_t m_iszEffectName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSSEffectName = 0x718; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOn = 0x720; // bool
    constexpr std::ptrdiff_t m_bmaxColor = 0x721; // bool
    constexpr std::ptrdiff_t m_flSize = 0x724; // float32
    constexpr std::ptrdiff_t m_flRotation = 0x728; // float32
    constexpr std::ptrdiff_t m_flHazeScale = 0x72C; // float32
    constexpr std::ptrdiff_t m_flAlphaHaze = 0x730; // float32
    constexpr std::ptrdiff_t m_flAlphaHdr = 0x734; // float32
    constexpr std::ptrdiff_t m_flAlphaScale = 0x738; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x73C; // float32
    constexpr std::ptrdiff_t m_flFarZScale = 0x740; // float32
}

namespace CTakeDamageInfo {
    constexpr std::ptrdiff_t m_vecDamageForce = 0x8; // Vector
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x14; // Vector
    constexpr std::ptrdiff_t m_vecReportedPosition = 0x20; // Vector
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x2C; // Vector
    constexpr std::ptrdiff_t m_hInflictor = 0x38; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hAttacker = 0x3C; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hAbility = 0x40; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flDamage = 0x44; // float32
    constexpr std::ptrdiff_t m_bitsDamageType = 0x48; // int32
    constexpr std::ptrdiff_t m_iDamageCustom = 0x4C; // int32
    constexpr std::ptrdiff_t m_iAmmoType = 0x50; // AmmoIndex_t
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x60; // float32
    constexpr std::ptrdiff_t m_bShouldBleed = 0x64; // bool
    constexpr std::ptrdiff_t m_bShouldSpark = 0x65; // bool
    constexpr std::ptrdiff_t m_nDamageFlags = 0x70; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x74; // int32
    constexpr std::ptrdiff_t m_hScriptInstance = 0x78; // HSCRIPT
    constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x94; // bool
}

namespace CTakeDamageResult {
    constexpr std::ptrdiff_t m_nHealthLost = 0x0; // int32
    constexpr std::ptrdiff_t m_nDamageTaken = 0x4; // int32
}

namespace CTakeDamageSummaryScopeGuard {
    constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector< SummaryTakeDamageInfo_t* >
}

namespace CTankTargetChange {
    constexpr std::ptrdiff_t m_newTarget = 0x4B0; // CVariantBase< CVariantDefaultAllocator >
    constexpr std::ptrdiff_t m_newTargetName = 0x4C0; // CUtlSymbolLarge
}

namespace CTankTrainAI {
    constexpr std::ptrdiff_t m_hTrain = 0x4B0; // CHandle< CFuncTrackTrain >
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4B4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_soundPlaying = 0x4B8; // int32
    constexpr std::ptrdiff_t m_startSoundName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_engineSoundName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_movementSoundName = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_targetEntityName = 0x4E8; // CUtlSymbolLarge
}

namespace CTeam {
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x4B0; // CNetworkUtlVectorBase< CHandle< CBasePlayerController > >
    constexpr std::ptrdiff_t m_aPlayers = 0x4C8; // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > >
    constexpr std::ptrdiff_t m_iScore = 0x4E0; // int32
    constexpr std::ptrdiff_t m_szTeamname = 0x4E4; // char[129]
}

namespace CTestEffect {
    constexpr std::ptrdiff_t m_iLoop = 0x4B0; // int32
    constexpr std::ptrdiff_t m_iBeam = 0x4B4; // int32
    constexpr std::ptrdiff_t m_pBeam = 0x4B8; // CBeam*[24]
    constexpr std::ptrdiff_t m_flBeamTime = 0x578; // GameTime_t[24]
    constexpr std::ptrdiff_t m_flStartTime = 0x5D8; // GameTime_t
}

namespace CTextureBasedAnimatable {
    constexpr std::ptrdiff_t m_bLoop = 0x700; // bool
    constexpr std::ptrdiff_t m_flFPS = 0x704; // float32
    constexpr std::ptrdiff_t m_hPositionKeys = 0x708; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hRotationKeys = 0x710; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x718; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x724; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0x730; // float32
    constexpr std::ptrdiff_t m_flStartFrame = 0x734; // float32
}

namespace CTimeline {
    constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
    constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
    constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
    constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
    constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
    constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
    constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
}

namespace CTimerEntity {
    constexpr std::ptrdiff_t m_OnTimer = 0x4B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerHigh = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerLow = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iDisabled = 0x528; // int32
    constexpr std::ptrdiff_t m_flInitialDelay = 0x52C; // float32
    constexpr std::ptrdiff_t m_flRefireTime = 0x530; // float32
    constexpr std::ptrdiff_t m_bUpDownState = 0x534; // bool
    constexpr std::ptrdiff_t m_iUseRandomTime = 0x538; // int32
    constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x53C; // bool
    constexpr std::ptrdiff_t m_flLowerRandomBound = 0x540; // float32
    constexpr std::ptrdiff_t m_flUpperRandomBound = 0x544; // float32
    constexpr std::ptrdiff_t m_flRemainingTime = 0x548; // float32
    constexpr std::ptrdiff_t m_bPaused = 0x54C; // bool
}

namespace CTonemapController2 {
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4B0; // float32
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4B4; // float32
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x4B8; // float32
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x4BC; // float32
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x4C0; // float32
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4C4; // float32
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4C8; // float32
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4CC; // float32
}

namespace CTonemapTrigger {
    constexpr std::ptrdiff_t m_tonemapControllerName = 0x8A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTonemapController = 0x8B0; // CEntityHandle
}

namespace CTriggerActiveWeaponDetect {
    constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x8A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszWeaponClassName = 0x8D0; // CUtlSymbolLarge
}

namespace CTriggerBrush {
    constexpr std::ptrdiff_t m_OnStartTouch = 0x700; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0x728; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUse = 0x750; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInputFilter = 0x778; // int32
    constexpr std::ptrdiff_t m_iDontMessageParent = 0x77C; // int32
}

namespace CTriggerBuoyancy {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x8A8; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0x8C8; // float32
}

namespace CTriggerDetectBulletFire {
    constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x8A8; // bool
    constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x8B0; // CEntityIOOutput
}

namespace CTriggerDetectExplosion {
    constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x8E0; // CEntityIOOutput
}

namespace CTriggerFan {
    constexpr std::ptrdiff_t m_vFanOrigin = 0x8A8; // Vector
    constexpr std::ptrdiff_t m_vFanEnd = 0x8B4; // Vector
    constexpr std::ptrdiff_t m_vNoise = 0x8C0; // Vector
    constexpr std::ptrdiff_t m_flForce = 0x8CC; // float32
    constexpr std::ptrdiff_t m_flPlayerForce = 0x8D0; // float32
    constexpr std::ptrdiff_t m_flRampTime = 0x8D4; // float32
    constexpr std::ptrdiff_t m_bFalloff = 0x8D8; // bool
    constexpr std::ptrdiff_t m_bPushPlayer = 0x8D9; // bool
    constexpr std::ptrdiff_t m_bRampDown = 0x8DA; // bool
    constexpr std::ptrdiff_t m_bAddNoise = 0x8DB; // bool
    constexpr std::ptrdiff_t m_RampTimer = 0x8E0; // CountdownTimer
}

namespace CTriggerGameEvent {
    constexpr std::ptrdiff_t m_strStartTouchEventName = 0x8A8; // CUtlString
    constexpr std::ptrdiff_t m_strEndTouchEventName = 0x8B0; // CUtlString
    constexpr std::ptrdiff_t m_strTriggerID = 0x8B8; // CUtlString
}

namespace CTriggerHurt {
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x8A8; // float32
    constexpr std::ptrdiff_t m_flDamage = 0x8AC; // float32
    constexpr std::ptrdiff_t m_flDamageCap = 0x8B0; // float32
    constexpr std::ptrdiff_t m_flLastDmgTime = 0x8B4; // GameTime_t
    constexpr std::ptrdiff_t m_flForgivenessDelay = 0x8B8; // float32
    constexpr std::ptrdiff_t m_bitsDamageInflict = 0x8BC; // int32
    constexpr std::ptrdiff_t m_damageModel = 0x8C0; // int32
    constexpr std::ptrdiff_t m_bNoDmgForce = 0x8C4; // bool
    constexpr std::ptrdiff_t m_vDamageForce = 0x8C8; // Vector
    constexpr std::ptrdiff_t m_thinkAlways = 0x8D4; // bool
    constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x8D8; // float32
    constexpr std::ptrdiff_t m_OnHurt = 0x8E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHurtPlayer = 0x908; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hurtEntities = 0x930; // CUtlVector< CHandle< CBaseEntity > >
}

namespace CTriggerImpact {
    constexpr std::ptrdiff_t m_flMagnitude = 0x8D0; // float32
    constexpr std::ptrdiff_t m_flNoise = 0x8D4; // float32
    constexpr std::ptrdiff_t m_flViewkick = 0x8D8; // float32
    constexpr std::ptrdiff_t m_pOutputForce = 0x8E0; // CEntityOutputTemplate< Vector >
}

namespace CTriggerLerpObject {
    constexpr std::ptrdiff_t m_iszLerpTarget = 0x8A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTarget = 0x8B0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x8C0; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flLerpDuration = 0x8C4; // float32
    constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x8C8; // bool
    constexpr std::ptrdiff_t m_bSingleLerpObject = 0x8C9; // bool
    constexpr std::ptrdiff_t m_vecLerpingObjects = 0x8D0; // CUtlVector< lerpdata_t >
    constexpr std::ptrdiff_t m_iszLerpEffect = 0x8E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLerpSound = 0x8F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnLerpStarted = 0x8F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLerpFinished = 0x920; // CEntityIOOutput
}

namespace CTriggerLook {
    constexpr std::ptrdiff_t m_hLookTarget = 0x8D0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flFieldOfView = 0x8D4; // float32
    constexpr std::ptrdiff_t m_flLookTime = 0x8D8; // float32
    constexpr std::ptrdiff_t m_flLookTimeTotal = 0x8DC; // float32
    constexpr std::ptrdiff_t m_flLookTimeLast = 0x8E0; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeoutDuration = 0x8E4; // float32
    constexpr std::ptrdiff_t m_bTimeoutFired = 0x8E8; // bool
    constexpr std::ptrdiff_t m_bIsLooking = 0x8E9; // bool
    constexpr std::ptrdiff_t m_b2DFOV = 0x8EA; // bool
    constexpr std::ptrdiff_t m_bUseVelocity = 0x8EB; // bool
    constexpr std::ptrdiff_t m_hActivator = 0x8EC; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bTestOcclusion = 0x8F0; // bool
    constexpr std::ptrdiff_t m_OnTimeout = 0x8F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartLook = 0x920; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndLook = 0x948; // CEntityIOOutput
}

namespace CTriggerMultiple {
    constexpr std::ptrdiff_t m_OnTrigger = 0x8A8; // CEntityIOOutput
}

namespace CTriggerPhysics {
    constexpr std::ptrdiff_t m_gravityScale = 0x8B8; // float32
    constexpr std::ptrdiff_t m_linearLimit = 0x8BC; // float32
    constexpr std::ptrdiff_t m_linearDamping = 0x8C0; // float32
    constexpr std::ptrdiff_t m_angularLimit = 0x8C4; // float32
    constexpr std::ptrdiff_t m_angularDamping = 0x8C8; // float32
    constexpr std::ptrdiff_t m_linearForce = 0x8CC; // float32
    constexpr std::ptrdiff_t m_flFrequency = 0x8D0; // float32
    constexpr std::ptrdiff_t m_flDampingRatio = 0x8D4; // float32
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8D8; // Vector
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x8E4; // bool
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x8E8; // Vector
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x8F4; // Vector
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x900; // bool
}

namespace CTriggerProximity {
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x8A8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszMeasureTarget = 0x8B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fRadius = 0x8B8; // float32
    constexpr std::ptrdiff_t m_nTouchers = 0x8BC; // int32
    constexpr std::ptrdiff_t m_NearestEntityDistance = 0x8C0; // CEntityOutputTemplate< float32 >
}

namespace CTriggerPush {
    constexpr std::ptrdiff_t m_angPushEntitySpace = 0x8A8; // QAngle
    constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x8B4; // Vector
    constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x8C0; // bool
    constexpr std::ptrdiff_t m_flAlternateTicksFix = 0x8C4; // float32
    constexpr std::ptrdiff_t m_flPushSpeed = 0x8C8; // float32
}

namespace CTriggerRemove {
    constexpr std::ptrdiff_t m_OnRemove = 0x8A8; // CEntityIOOutput
}

namespace CTriggerSave {
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x8A8; // bool
    constexpr std::ptrdiff_t m_fDangerousTimer = 0x8AC; // float32
    constexpr std::ptrdiff_t m_minHitPoints = 0x8B0; // int32
}

namespace CTriggerSndSosOpvar {
    constexpr std::ptrdiff_t m_hTouchingPlayers = 0x8A8; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_flPosition = 0x8C0; // Vector
    constexpr std::ptrdiff_t m_flCenterSize = 0x8CC; // float32
    constexpr std::ptrdiff_t m_flMinVal = 0x8D0; // float32
    constexpr std::ptrdiff_t m_flMaxVal = 0x8D4; // float32
    constexpr std::ptrdiff_t m_flWait = 0x8D8; // float32
    constexpr std::ptrdiff_t m_opvarName = 0x8E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_stackName = 0x8E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_operatorName = 0x8F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bVolIs2D = 0x8F8; // bool
    constexpr std::ptrdiff_t m_opvarNameChar = 0x8F9; // char[256]
    constexpr std::ptrdiff_t m_stackNameChar = 0x9F9; // char[256]
    constexpr std::ptrdiff_t m_operatorNameChar = 0xAF9; // char[256]
    constexpr std::ptrdiff_t m_VecNormPos = 0xBFC; // Vector
    constexpr std::ptrdiff_t m_flNormCenterSize = 0xC08; // float32
}

namespace CTriggerSoundscape {
    constexpr std::ptrdiff_t m_hSoundscape = 0x8A8; // CHandle< CEnvSoundscapeTriggerable >
    constexpr std::ptrdiff_t m_SoundscapeName = 0x8B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_spectators = 0x8B8; // CUtlVector< CHandle< CBasePlayerPawn > >
}

namespace CTriggerTeleport {
    constexpr std::ptrdiff_t m_iLandmark = 0x8A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x8B0; // bool
    constexpr std::ptrdiff_t m_bMirrorPlayer = 0x8B1; // bool
}

namespace CTriggerToggleSave {
    constexpr std::ptrdiff_t m_bDisabled = 0x8A8; // bool
}

namespace CTriggerVolume {
    constexpr std::ptrdiff_t m_iFilterName = 0x700; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x708; // CHandle< CBaseFilter >
}

namespace CVoteController {
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4B0; // int32
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4B4; // int32
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4B8; // int32[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x4CC; // int32
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4D0; // bool
    constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4D8; // CountdownTimer
    constexpr std::ptrdiff_t m_executeCommandTimer = 0x4F0; // CountdownTimer
    constexpr std::ptrdiff_t m_resetVoteTimer = 0x508; // CountdownTimer
    constexpr std::ptrdiff_t m_nVotesCast = 0x520; // int32[64]
    constexpr std::ptrdiff_t m_playerHoldingVote = 0x620; // CPlayerSlot
    constexpr std::ptrdiff_t m_playerOverrideForVote = 0x624; // CPlayerSlot
    constexpr std::ptrdiff_t m_nHighestCountIndex = 0x628; // int32
    constexpr std::ptrdiff_t m_potentialIssues = 0x630; // CUtlVector< CBaseIssue* >
    constexpr std::ptrdiff_t m_VoteOptions = 0x648; // CUtlVector< char* >
}

namespace CWeaponBaseItem {
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0xDD8; // CountdownTimer
    constexpr std::ptrdiff_t m_bRedraw = 0xDF0; // bool
}

namespace CWeaponShield {
    constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0xDF8; // float32
    constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0xDFC; // GameTime_t
    constexpr std::ptrdiff_t m_flDisplayHealth = 0xE00; // float32
}

namespace CWeaponTaser {
    constexpr std::ptrdiff_t m_fFireTime = 0xDF8; // GameTime_t
}

namespace CommandToolCommand_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_bOpened = 0x1; // bool
    constexpr std::ptrdiff_t m_InternalId = 0x4; // uint32
    constexpr std::ptrdiff_t m_ShortName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_ExecMode = 0x10; // CommandExecMode_t
    constexpr std::ptrdiff_t m_SpawnGroup = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_PeriodicExecDelay = 0x20; // float32
    constexpr std::ptrdiff_t m_SpecType = 0x24; // CommandEntitySpecType_t
    constexpr std::ptrdiff_t m_EntitySpec = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_Commands = 0x30; // CUtlString
    constexpr std::ptrdiff_t m_SetDebugBits = 0x38; // DebugOverlayBits_t
    constexpr std::ptrdiff_t m_ClearDebugBits = 0x40; // DebugOverlayBits_t
}

namespace ConceptHistory_t {
    constexpr std::ptrdiff_t timeSpoken = 0x0; // float32
    constexpr std::ptrdiff_t m_response = 0x8; // CRR_Response
}

namespace ConstraintSoundInfo {
    constexpr std::ptrdiff_t m_vSampler = 0x8; // VelocitySampler
    constexpr std::ptrdiff_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
    constexpr std::ptrdiff_t m_forwardAxis = 0x40; // Vector
    constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszReversalSounds = 0x68; // CUtlSymbolLarge[3]
    constexpr std::ptrdiff_t m_bPlayTravelSound = 0x80; // bool
    constexpr std::ptrdiff_t m_bPlayReversalSound = 0x81; // bool
}

namespace CountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float32
    constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
    constexpr std::ptrdiff_t m_timescale = 0x10; // float32
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
}

namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float32
    constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
    constexpr std::ptrdiff_t m_timescale = 0x10; // float32
}

namespace EntityRenderAttribute_t {
    constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
    constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
}

namespace EntitySpottedState_t {
    constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
}

namespace Extent {
    constexpr std::ptrdiff_t lo = 0x0; // Vector
    constexpr std::ptrdiff_t hi = 0xC; // Vector
}

namespace FilterDamageType {
    constexpr std::ptrdiff_t m_iDamageType = 0x508; // int32
}

namespace FilterHealth {
    constexpr std::ptrdiff_t m_bAdrenalineActive = 0x508; // bool
    constexpr std::ptrdiff_t m_iHealthMin = 0x50C; // int32
    constexpr std::ptrdiff_t m_iHealthMax = 0x510; // int32
}

namespace FilterTeam {
    constexpr std::ptrdiff_t m_iFilterTeam = 0x508; // int32
}

namespace GameAmmoTypeInfo_t {
    constexpr std::ptrdiff_t m_nBuySize = 0x38; // int32
    constexpr std::ptrdiff_t m_nCost = 0x3C; // int32
}

namespace GameTick_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace GameTime_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // float32
}

namespace HullFlags_t {
    constexpr std::ptrdiff_t m_bHull_Human = 0x0; // bool
    constexpr std::ptrdiff_t m_bHull_SmallCentered = 0x1; // bool
    constexpr std::ptrdiff_t m_bHull_WideHuman = 0x2; // bool
    constexpr std::ptrdiff_t m_bHull_Tiny = 0x3; // bool
    constexpr std::ptrdiff_t m_bHull_Medium = 0x4; // bool
    constexpr std::ptrdiff_t m_bHull_TinyCentered = 0x5; // bool
    constexpr std::ptrdiff_t m_bHull_Large = 0x6; // bool
    constexpr std::ptrdiff_t m_bHull_LargeCentered = 0x7; // bool
    constexpr std::ptrdiff_t m_bHull_MediumTall = 0x8; // bool
    constexpr std::ptrdiff_t m_bHull_Small = 0x9; // bool
}

namespace IntervalTimer {
    constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
}

namespace ModelConfigHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint32
}

namespace ParticleIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Transforms = 0x30; // CNetworkUtlVectorBase< CTransform >
    constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle< CBaseEntity >
}

namespace RagdollCreationParams_t {
    constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32
}

namespace RelationshipOverride_t {
    constexpr std::ptrdiff_t entity = 0x8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t classType = 0xC; // Class_T
}

namespace Relationship_t {
    constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
    constexpr std::ptrdiff_t priority = 0x4; // int32
}

namespace ResponseContext_t {
    constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
}

namespace ResponseFollowup {
    constexpr std::ptrdiff_t followup_concept = 0x0; // char*
    constexpr std::ptrdiff_t followup_contexts = 0x8; // char*
    constexpr std::ptrdiff_t followup_delay = 0x10; // float32
    constexpr std::ptrdiff_t followup_target = 0x14; // char*
    constexpr std::ptrdiff_t followup_entityiotarget = 0x1C; // char*
    constexpr std::ptrdiff_t followup_entityioinput = 0x24; // char*
    constexpr std::ptrdiff_t followup_entityiodelay = 0x2C; // float32
    constexpr std::ptrdiff_t bFired = 0x30; // bool
}

namespace ResponseParams {
    constexpr std::ptrdiff_t odds = 0x10; // int16
    constexpr std::ptrdiff_t flags = 0x12; // int16
    constexpr std::ptrdiff_t m_pFollowup = 0x18; // ResponseFollowup*
}

namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
    constexpr std::ptrdiff_t m_nCost = 0x34; // int32
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
    constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
}

namespace SimpleConstraintSoundProfile {
    constexpr std::ptrdiff_t eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    constexpr std::ptrdiff_t m_keyPoints = 0xC; // float32[2]
    constexpr std::ptrdiff_t m_reversalSoundThresholds = 0x14; // float32[3]
}

namespace SpawnPoint {
    constexpr std::ptrdiff_t m_iPriority = 0x4B0; // int32
    constexpr std::ptrdiff_t m_bEnabled = 0x4B4; // bool
    constexpr std::ptrdiff_t m_nType = 0x4B8; // int32
}

namespace SpawnPointCoopEnemy {
    constexpr std::ptrdiff_t m_szWeaponsToGive = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szPlayerModelToUse = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nArmorToSpawnWith = 0x4D0; // int32
    constexpr std::ptrdiff_t m_nDefaultBehavior = 0x4D4; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    constexpr std::ptrdiff_t m_nBotDifficulty = 0x4D8; // int32
    constexpr std::ptrdiff_t m_bIsAgressive = 0x4DC; // bool
    constexpr std::ptrdiff_t m_bStartAsleep = 0x4DD; // bool
    constexpr std::ptrdiff_t m_flHideRadius = 0x4E0; // float32
    constexpr std::ptrdiff_t m_szBehaviorTreeFile = 0x4F0; // CUtlSymbolLarge
}

namespace SummaryTakeDamageInfo_t {
    constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32
    constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
    constexpr std::ptrdiff_t result = 0xA0; // CTakeDamageResult
    constexpr std::ptrdiff_t hTarget = 0xA8; // CHandle< CBaseEntity >
}

namespace VPhysicsCollisionAttribute_t {
    constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
    constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
    constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
    constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
    constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
    constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
    constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
    constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
}

namespace VelocitySampler {
    constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
    constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
    constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float32
}

namespace ViewAngleServerChange_t {
    constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
    constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
    constexpr std::ptrdiff_t nIndex = 0x40; // uint32
}

namespace WeaponPurchaseCount_t {
    constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
    constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
}

namespace WeaponPurchaseTracker_t {
    constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
}

namespace audioparams_t {
    constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
    constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
    constexpr std::ptrdiff_t localBits = 0x6C; // uint8
    constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
    constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
}

namespace dynpitchvol_base_t {
    constexpr std::ptrdiff_t preset = 0x0; // int32
    constexpr std::ptrdiff_t pitchrun = 0x4; // int32
    constexpr std::ptrdiff_t pitchstart = 0x8; // int32
    constexpr std::ptrdiff_t spinup = 0xC; // int32
    constexpr std::ptrdiff_t spindown = 0x10; // int32
    constexpr std::ptrdiff_t volrun = 0x14; // int32
    constexpr std::ptrdiff_t volstart = 0x18; // int32
    constexpr std::ptrdiff_t fadein = 0x1C; // int32
    constexpr std::ptrdiff_t fadeout = 0x20; // int32
    constexpr std::ptrdiff_t lfotype = 0x24; // int32
    constexpr std::ptrdiff_t lforate = 0x28; // int32
    constexpr std::ptrdiff_t lfomodpitch = 0x2C; // int32
    constexpr std::ptrdiff_t lfomodvol = 0x30; // int32
    constexpr std::ptrdiff_t cspinup = 0x34; // int32
    constexpr std::ptrdiff_t cspincount = 0x38; // int32
    constexpr std::ptrdiff_t pitch = 0x3C; // int32
    constexpr std::ptrdiff_t spinupsav = 0x40; // int32
    constexpr std::ptrdiff_t spindownsav = 0x44; // int32
    constexpr std::ptrdiff_t pitchfrac = 0x48; // int32
    constexpr std::ptrdiff_t vol = 0x4C; // int32
    constexpr std::ptrdiff_t fadeinsav = 0x50; // int32
    constexpr std::ptrdiff_t fadeoutsav = 0x54; // int32
    constexpr std::ptrdiff_t volfrac = 0x58; // int32
    constexpr std::ptrdiff_t lfofrac = 0x5C; // int32
    constexpr std::ptrdiff_t lfomult = 0x60; // int32
}

namespace fogparams_t {
    constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
    constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
    constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
    constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
    constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
    constexpr std::ptrdiff_t start = 0x24; // float32
    constexpr std::ptrdiff_t end = 0x28; // float32
    constexpr std::ptrdiff_t farz = 0x2C; // float32
    constexpr std::ptrdiff_t maxdensity = 0x30; // float32
    constexpr std::ptrdiff_t exponent = 0x34; // float32
    constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
    constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
    constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
    constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
    constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
    constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
    constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
    constexpr std::ptrdiff_t duration = 0x54; // float32
    constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
    constexpr std::ptrdiff_t scattering = 0x5C; // float32
    constexpr std::ptrdiff_t locallightscale = 0x60; // float32
    constexpr std::ptrdiff_t enable = 0x64; // bool
    constexpr std::ptrdiff_t blend = 0x65; // bool
    constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
    constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
}

namespace fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle< CFogController >
    constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
    constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
    constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
    constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
    constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
    constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
    constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
    constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
    constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
    constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
    constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
    constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
    constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
}

namespace hudtextparms_t {
    constexpr std::ptrdiff_t color1 = 0x0; // Color
    constexpr std::ptrdiff_t color2 = 0x4; // Color
    constexpr std::ptrdiff_t effect = 0x8; // uint8
    constexpr std::ptrdiff_t channel = 0x9; // uint8
    constexpr std::ptrdiff_t x = 0xC; // float32
    constexpr std::ptrdiff_t y = 0x10; // float32
}

namespace lerpdata_t {
    constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_MoveType = 0x4; // MoveType_t
    constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_vecStartOrigin = 0xC; // Vector
    constexpr std::ptrdiff_t m_qStartRot = 0x20; // Quaternion
    constexpr std::ptrdiff_t m_nFXIndex = 0x30; // ParticleIndex_t
}

namespace locksound_t {
    constexpr std::ptrdiff_t sLockedSound = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t sUnlockedSound = 0x10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t flwaitSound = 0x18; // GameTime_t
}

namespace magnetted_objects_t {
    constexpr std::ptrdiff_t hEntity = 0x8; // CHandle< CBaseEntity >
}

namespace ragdoll_t {
    constexpr std::ptrdiff_t list = 0x0; // CUtlVector< ragdollelement_t >
    constexpr std::ptrdiff_t boneIndex = 0x18; // CUtlVector< int32 >
    constexpr std::ptrdiff_t allowStretch = 0x30; // bool
    constexpr std::ptrdiff_t unused = 0x31; // bool
}

namespace ragdollelement_t {
    constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
    constexpr std::ptrdiff_t parentIndex = 0x20; // int32
    constexpr std::ptrdiff_t m_flRadius = 0x24; // float32
}

namespace shard_model_desc_t {
    constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
    constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
    constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
    constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase< Vector2D >
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
    constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
    constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
    constexpr std::ptrdiff_t m_LightGroup = 0x5C; // CUtlStringToken
}

namespace sky3dparams_t {
    constexpr std::ptrdiff_t scale = 0x8; // int16
    constexpr std::ptrdiff_t origin = 0xC; // Vector
    constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
    constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
    constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
}

namespace thinkfunc_t {
    constexpr std::ptrdiff_t m_hFn = 0x8; // HSCRIPT
    constexpr std::ptrdiff_t m_nContext = 0x10; // CUtlStringToken
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x14; // GameTick_t
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x18; // GameTick_t
}