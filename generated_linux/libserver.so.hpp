/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Fri, 15 Mar 2024 16:09:39 +0000
 */

#pragma once

#include <cstddef>

namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
    constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
}

namespace AmmoIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int8_t
}

namespace AmmoTypeInfo_t {
    constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32_t
    constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
    constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
    constexpr std::ptrdiff_t m_flMass = 0x28; // float
    constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
}

namespace CAISound { // CPointEntity
    constexpr std::ptrdiff_t m_iSoundType = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_iSoundContext = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_iVolume = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_iSoundIndex = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_flDuration = 0x7B8; // float
    constexpr std::ptrdiff_t m_iszProxyEntityName = 0x7C0; // CUtlSymbolLarge
}

namespace CAI_ChangeHintGroup { // CBaseEntity
    constexpr std::ptrdiff_t m_iSearchType = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_strSearchName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strNewHintGroup = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x7C0; // float
}

namespace CAI_Expresser {
    constexpr std::ptrdiff_t m_flStopTalkTime = 0x38; // GameTime_t
    constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
    constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x40; // GameTime_t
    constexpr std::ptrdiff_t m_voicePitch = 0x44; // int32_t
    constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x4C; // bool
    constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x4D; // bool
    constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x50; // int32_t
    constexpr std::ptrdiff_t m_pOuter = 0x58; // CBaseFlex*
}

namespace CAI_ExpresserWithFollowup { // CAI_Expresser
    constexpr std::ptrdiff_t m_pPostponedFollowup = 0x60; // ResponseFollowup*
}

namespace CAK47 { // CCSWeaponBaseGun
}

namespace CAmbientGeneric { // CPointEntity
    constexpr std::ptrdiff_t m_radius = 0x7A8; // float
    constexpr std::ptrdiff_t m_flMaxRadius = 0x7AC; // float
    constexpr std::ptrdiff_t m_iSoundLevel = 0x7B0; // soundlevel_t
    constexpr std::ptrdiff_t m_dpv = 0x7B4; // dynpitchvol_t
    constexpr std::ptrdiff_t m_fActive = 0x818; // bool
    constexpr std::ptrdiff_t m_fLooping = 0x819; // bool
    constexpr std::ptrdiff_t m_iszSound = 0x820; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSourceEntName = 0x828; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSoundSource = 0x830; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x834; // CEntityIndex
}

namespace CAnimEventListener { // CAnimEventListenerBase
}

namespace CAnimEventListenerBase {
}

namespace CAnimEventQueueListener { // CAnimEventListenerBase
}

namespace CAnimGraphControllerBase {
}

namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8_t>
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16_t>
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32_t>
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64_t>
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
    constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32_t
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32_t
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32_t
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float
}

namespace CAttributeContainer { // CAttributeManager
    constexpr std::ptrdiff_t m_Item = 0x50; // CEconItemView
}

namespace CAttributeList {
    constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
}

namespace CAttributeManager {
    constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32_t
    constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
    constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
    constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
}

namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0; // float
    constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t flOut = 0x10; // float
}

namespace CBarnLight { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x9F8; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0x9FC; // int32_t
    constexpr std::ptrdiff_t m_Color = 0xA00; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0xA04; // float
    constexpr std::ptrdiff_t m_flBrightness = 0xA08; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xA0C; // float
    constexpr std::ptrdiff_t m_nDirectLight = 0xA10; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xA14; // int32_t
    constexpr std::ptrdiff_t m_nLuminaireShape = 0xA18; // int32_t
    constexpr std::ptrdiff_t m_flLuminaireSize = 0xA1C; // float
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xA20; // float
    constexpr std::ptrdiff_t m_LightStyleString = 0xA28; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xA30; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xA38; // CNetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleEvents = 0xA50; // CNetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleTargets = 0xA68; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_StyleEvent = 0xA80; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_hLightCookie = 0xB40; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flShape = 0xB48; // float
    constexpr std::ptrdiff_t m_flSoftX = 0xB4C; // float
    constexpr std::ptrdiff_t m_flSoftY = 0xB50; // float
    constexpr std::ptrdiff_t m_flSkirt = 0xB54; // float
    constexpr std::ptrdiff_t m_flSkirtNear = 0xB58; // float
    constexpr std::ptrdiff_t m_vSizeParams = 0xB5C; // Vector
    constexpr std::ptrdiff_t m_flRange = 0xB68; // float
    constexpr std::ptrdiff_t m_vShear = 0xB6C; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xB78; // int32_t
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xB7C; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0xB88; // int32_t
    constexpr std::ptrdiff_t m_nShadowMapSize = 0xB8C; // int32_t
    constexpr std::ptrdiff_t m_nShadowPriority = 0xB90; // int32_t
    constexpr std::ptrdiff_t m_bContactShadow = 0xB94; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0xB98; // int32_t
    constexpr std::ptrdiff_t m_flBounceScale = 0xB9C; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0xBA0; // float
    constexpr std::ptrdiff_t m_vAlternateColor = 0xBA4; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xBB0; // float
    constexpr std::ptrdiff_t m_nFog = 0xBB4; // int32_t
    constexpr std::ptrdiff_t m_flFogStrength = 0xBB8; // float
    constexpr std::ptrdiff_t m_nFogShadows = 0xBBC; // int32_t
    constexpr std::ptrdiff_t m_flFogScale = 0xBC0; // float
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0xBC4; // float
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xBC8; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xBCC; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xBD0; // float
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xBD4; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xBD8; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xBE4; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xBF0; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xBFC; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xC08; // Vector
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0xC14; // bool
}

namespace CBaseAnimGraph { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xA70; // bool
    constexpr std::ptrdiff_t m_pChoreoServices = 0xA78; // IChoreoServices*
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xA80; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xA84; // float
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xA88; // Vector
    constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xA94; // bool
    constexpr std::ptrdiff_t m_vecForce = 0xA98; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0xAA4; // int32_t
    constexpr std::ptrdiff_t m_pRagdollPose = 0xAB8; // PhysicsRagdollPose_t*
    constexpr std::ptrdiff_t m_bClientRagdoll = 0xAC0; // bool
}

namespace CBaseAnimGraphController { // CSkeletonAnimationController
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x220; // bool
    constexpr std::ptrdiff_t m_flSoundSyncTime = 0x224; // float
    constexpr std::ptrdiff_t m_hSequence = 0x228; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x22C; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x230; // float
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x234; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x238; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_nNotifyState = 0x244; // SequenceFinishNotifyState_t
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x246; // bool
    constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x247; // bool
    constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x248; // bool
    constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x24C; // GameTime_t
}

namespace CBaseButton { // CBaseToggle
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0xA78; // QAngle
    constexpr std::ptrdiff_t m_fStayPushed = 0xA84; // bool
    constexpr std::ptrdiff_t m_fRotating = 0xA85; // bool
    constexpr std::ptrdiff_t m_ls = 0xA88; // locksound_t
    constexpr std::ptrdiff_t m_sUseSound = 0xAA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sLockedSound = 0xAB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sUnlockedSound = 0xAB8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bLocked = 0xAC0; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0xAC1; // bool
    constexpr std::ptrdiff_t m_flUseLockedTime = 0xAC4; // GameTime_t
    constexpr std::ptrdiff_t m_bSolidBsp = 0xAC8; // bool
    constexpr std::ptrdiff_t m_OnDamaged = 0xAD0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPressed = 0xAF8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUseLocked = 0xB20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnIn = 0xB48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOut = 0xB70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nState = 0xB98; // int32_t
    constexpr std::ptrdiff_t m_hConstraint = 0xB9C; // CEntityHandle
    constexpr std::ptrdiff_t m_hConstraintParent = 0xBA0; // CEntityHandle
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xBA4; // bool
    constexpr std::ptrdiff_t m_sGlowEntity = 0xBA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_glowEntity = 0xBB0; // CHandle<CBaseModelEntity>
    constexpr std::ptrdiff_t m_usable = 0xBB4; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0xBB8; // CUtlSymbolLarge
}

namespace CBaseCSGrenade { // CCSWeaponBase
    constexpr std::ptrdiff_t m_bRedraw = 0x1198; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1199; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0x119A; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0x119B; // bool
    constexpr std::ptrdiff_t m_bThrowAnimating = 0x119C; // bool
    constexpr std::ptrdiff_t m_fThrowTime = 0x11A0; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0x11A4; // float
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x11A8; // float
    constexpr std::ptrdiff_t m_fDropTime = 0x11AC; // GameTime_t
    constexpr std::ptrdiff_t m_bJustPulledPin = 0x11B0; // bool
    constexpr std::ptrdiff_t m_nNextHoldTick = 0x11B4; // GameTick_t
    constexpr std::ptrdiff_t m_flNextHoldFrac = 0x11B8; // float
    constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x11BC; // CHandle<CCSWeaponBase>
}

namespace CBaseCSGrenadeProjectile { // CBaseGrenade
    constexpr std::ptrdiff_t m_vInitialPosition = 0xD24; // Vector
    constexpr std::ptrdiff_t m_vInitialVelocity = 0xD30; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0xD3C; // int32_t
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xD40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xD48; // int32_t
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xD4C; // Vector
    constexpr std::ptrdiff_t m_flSpawnTime = 0xD58; // GameTime_t
    constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xD5C; // uint8_t
    constexpr std::ptrdiff_t m_bDetonationRecorded = 0xD5D; // bool
    constexpr std::ptrdiff_t m_flDetonateTime = 0xD60; // GameTime_t
    constexpr std::ptrdiff_t m_nItemIndex = 0xD64; // uint16_t
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xD68; // Vector
    constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xD74; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xD78; // RotationVector
    constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xD84; // Vector
    constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xD90; // int32_t
    constexpr std::ptrdiff_t m_bHasEverHitPlayer = 0xD94; // bool
    constexpr std::ptrdiff_t m_bClearFromPlayers = 0xD95; // bool
}

namespace CBaseClientUIEntity { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x9F8; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0xA00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0xA10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_CustomOutput0 = 0xA18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput1 = 0xA40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput2 = 0xA68; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput3 = 0xA90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput4 = 0xAB8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput5 = 0xAE0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput6 = 0xB08; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput7 = 0xB30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput8 = 0xB58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput9 = 0xB80; // CEntityIOOutput
}

namespace CBaseCombatCharacter { // CBaseFlex
    constexpr std::ptrdiff_t m_bForceServerRagdoll = 0xC80; // bool
    constexpr std::ptrdiff_t m_hMyWearables = 0xC88; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
    constexpr std::ptrdiff_t m_flFieldOfView = 0xCA0; // float
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xCA4; // float
    constexpr std::ptrdiff_t m_LastHitGroup = 0xCA8; // HitGroup_t
    constexpr std::ptrdiff_t m_bApplyStressDamage = 0xCAC; // bool
    constexpr std::ptrdiff_t m_bloodColor = 0xCB0; // int32_t
    constexpr std::ptrdiff_t m_iDamageCount = 0xCF8; // int32_t
    constexpr std::ptrdiff_t m_pVecRelationships = 0xD00; // CUtlVector<RelationshipOverride_t>*
    constexpr std::ptrdiff_t m_strRelationships = 0xD08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_eHull = 0xD10; // Hull_t
    constexpr std::ptrdiff_t m_nNavHullIdx = 0xD14; // uint32_t
}

namespace CBaseDMStart { // CPointEntity
    constexpr std::ptrdiff_t m_Master = 0x7A8; // CUtlSymbolLarge
}

namespace CBaseDoor { // CBaseToggle
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0xA84; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0xA90; // Vector
    constexpr std::ptrdiff_t m_ls = 0xAA0; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0xAC0; // bool
    constexpr std::ptrdiff_t m_bDoorGroup = 0xAC1; // bool
    constexpr std::ptrdiff_t m_bLocked = 0xAC2; // bool
    constexpr std::ptrdiff_t m_bIgnoreDebris = 0xAC3; // bool
    constexpr std::ptrdiff_t m_eSpawnPosition = 0xAC4; // FuncDoorSpawnPos_t
    constexpr std::ptrdiff_t m_flBlockDamage = 0xAC8; // float
    constexpr std::ptrdiff_t m_NoiseMoving = 0xAD0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0xAD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseMovingClosed = 0xAE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0xAE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ChainTarget = 0xAF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0xAF8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0xB20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xB48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xB70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xB98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xBC0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0xBE8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0xC10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0xC38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bLoopMoveSound = 0xC60; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xC78; // bool
    constexpr std::ptrdiff_t m_isChaining = 0xC79; // bool
    constexpr std::ptrdiff_t m_bIsUsable = 0xC7A; // bool
}

namespace CBaseEntity { // CEntityInstance
    constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x508; // int32_t
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x50C; // GameTick_t
    constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x510; // GameTick_t
    constexpr std::ptrdiff_t m_isSteadyState = 0x520; // CBitVec<64>
    constexpr std::ptrdiff_t m_lastNetworkChange = 0x528; // float
    constexpr std::ptrdiff_t m_ResponseContexts = 0x540; // CUtlVector<ResponseContext_t>
    constexpr std::ptrdiff_t m_iszResponseContext = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iHealth = 0x5A0; // int32_t
    constexpr std::ptrdiff_t m_iMaxHealth = 0x5A4; // int32_t
    constexpr std::ptrdiff_t m_lifeState = 0x5A8; // uint8_t
    constexpr std::ptrdiff_t m_flDamageAccumulator = 0x5AC; // float
    constexpr std::ptrdiff_t m_bTakesDamage = 0x5B0; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x5B4; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_bIsPlatform = 0x5B8; // bool
    constexpr std::ptrdiff_t m_MoveCollide = 0x5BA; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x5BB; // MoveType_t
    constexpr std::ptrdiff_t m_nActualMoveType = 0x5BC; // MoveType_t
    constexpr std::ptrdiff_t m_nWaterTouch = 0x5BD; // uint8_t
    constexpr std::ptrdiff_t m_nSlimeTouch = 0x5BE; // uint8_t
    constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x5BF; // bool
    constexpr std::ptrdiff_t m_target = 0x5C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hDamageFilter = 0x5C8; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_iszDamageFilterName = 0x5D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveDoneTime = 0x5D8; // float
    constexpr std::ptrdiff_t m_nSubclassID = 0x5DC; // CUtlStringToken
    constexpr std::ptrdiff_t m_flAnimTime = 0x5E8; // float
    constexpr std::ptrdiff_t m_flSimulationTime = 0x5EC; // float
    constexpr std::ptrdiff_t m_flCreateTime = 0x5F0; // GameTime_t
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x5F4; // bool
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x5F5; // uint8_t
    constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x5F8; // Vector
    constexpr std::ptrdiff_t m_iTeamNum = 0x604; // uint8_t
    constexpr std::ptrdiff_t m_iGlobalname = 0x608; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iSentToClients = 0x610; // int32_t
    constexpr std::ptrdiff_t m_flSpeed = 0x614; // float
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x618; // CUtlString
    constexpr std::ptrdiff_t m_spawnflags = 0x620; // uint32_t
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x624; // GameTick_t
    constexpr std::ptrdiff_t m_nSimulationTick = 0x628; // int32_t
    constexpr std::ptrdiff_t m_OnKilled = 0x630; // CEntityIOOutput
    constexpr std::ptrdiff_t m_fFlags = 0x658; // uint32_t
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x65C; // Vector
    constexpr std::ptrdiff_t m_vecVelocity = 0x668; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x698; // Vector
    constexpr std::ptrdiff_t m_nPushEnumCount = 0x6A4; // int32_t
    constexpr std::ptrdiff_t m_pCollision = 0x6A8; // CCollisionProperty*
    constexpr std::ptrdiff_t m_hEffectEntity = 0x6B0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x6B4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_fEffects = 0x6B8; // uint32_t
    constexpr std::ptrdiff_t m_hGroundEntity = 0x6BC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flFriction = 0x6C0; // float
    constexpr std::ptrdiff_t m_flElasticity = 0x6C4; // float
    constexpr std::ptrdiff_t m_flGravityScale = 0x6C8; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x6CC; // float
    constexpr std::ptrdiff_t m_flWaterLevel = 0x6D0; // float
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x6D4; // bool
    constexpr std::ptrdiff_t m_bDisableLowViolence = 0x6D5; // bool
    constexpr std::ptrdiff_t m_nWaterType = 0x6D6; // uint8_t
    constexpr std::ptrdiff_t m_iEFlags = 0x6D8; // int32_t
    constexpr std::ptrdiff_t m_OnUser1 = 0x6E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser2 = 0x708; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser3 = 0x730; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser4 = 0x758; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInitialTeamNum = 0x780; // int32_t
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x784; // GameTime_t
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x788; // QAngle
    constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x794; // bool
    constexpr std::ptrdiff_t m_bLagCompensate = 0x795; // bool
    constexpr std::ptrdiff_t m_flOverriddenFriction = 0x798; // float
    constexpr std::ptrdiff_t m_pBlocker = 0x79C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flLocalTime = 0x7A0; // float
    constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x7A4; // float
}

namespace CBaseEntityAPI {
}

namespace CBaseFilter { // CLogicalEntity
    constexpr std::ptrdiff_t m_bNegated = 0x7A8; // bool
    constexpr std::ptrdiff_t m_OnPass = 0x7B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFail = 0x7D8; // CEntityIOOutput
}

namespace CBaseFire { // CBaseEntity
    constexpr std::ptrdiff_t m_flScale = 0x7A8; // float
    constexpr std::ptrdiff_t m_flStartScale = 0x7AC; // float
    constexpr std::ptrdiff_t m_flScaleTime = 0x7B0; // float
    constexpr std::ptrdiff_t m_nFlags = 0x7B4; // uint32_t
}

namespace CBaseFlex { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_flexWeight = 0xBF0; // CNetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0xC08; // Vector
    constexpr std::ptrdiff_t m_blinktoggle = 0xC14; // bool
    constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0xC68; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0xC6C; // GameTime_t
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0xC70; // uint32_t
    constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0xC74; // bool
}

namespace CBaseFlexAlias_funCBaseFlex { // CBaseFlex
}

namespace CBaseGrenade { // CBaseFlex
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xC88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExplode = 0xCB0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0xCD8; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xCD9; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0xCDA; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0xCDC; // float
    constexpr std::ptrdiff_t m_flDetonateTime = 0xCE0; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0xCE4; // float
    constexpr std::ptrdiff_t m_flDamage = 0xCE8; // float
    constexpr std::ptrdiff_t m_iszBounceSound = 0xCF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0xCF8; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0xD04; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_flNextAttack = 0xD1C; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0xD20; // CHandle<CCSPlayerPawn>
}

namespace CBaseIssue {
    constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
    constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[4096]
    constexpr std::ptrdiff_t m_iNumYesVotes = 0x1060; // int32_t
    constexpr std::ptrdiff_t m_iNumNoVotes = 0x1064; // int32_t
    constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x1068; // int32_t
    constexpr std::ptrdiff_t m_pVoteController = 0x1070; // CVoteController*
}

namespace CBaseModelEntity { // CBaseEntity
    constexpr std::ptrdiff_t m_CRenderComponent = 0x7A8; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0x7B0; // CHitboxComponent
    constexpr std::ptrdiff_t m_flDissolveStartTime = 0x7D8; // GameTime_t
    constexpr std::ptrdiff_t m_OnIgnite = 0x7E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nRenderMode = 0x808; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0x809; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0x80A; // bool
    constexpr std::ptrdiff_t m_clrRender = 0x80B; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0x810; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x860; // bool
    constexpr std::ptrdiff_t m_Collision = 0x868; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0x918; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x970; // float
    constexpr std::ptrdiff_t m_fadeMinDist = 0x974; // float
    constexpr std::ptrdiff_t m_fadeMaxDist = 0x978; // float
    constexpr std::ptrdiff_t m_flFadeScale = 0x97C; // float
    constexpr std::ptrdiff_t m_flShadowStrength = 0x980; // float
    constexpr std::ptrdiff_t m_nObjectCulling = 0x984; // uint8_t
    constexpr std::ptrdiff_t m_nAddDecal = 0x988; // int32_t
    constexpr std::ptrdiff_t m_vDecalPosition = 0x98C; // Vector
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x998; // Vector
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x9A4; // float
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x9A8; // float
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x9B0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_vecViewOffset = 0x9C8; // CNetworkViewOffsetVector
}

namespace CBaseMoveBehavior { // CPathKeyFrame
    constexpr std::ptrdiff_t m_iPositionInterpolator = 0x7F4; // int32_t
    constexpr std::ptrdiff_t m_iRotationInterpolator = 0x7F8; // int32_t
    constexpr std::ptrdiff_t m_flAnimStartTime = 0x7FC; // float
    constexpr std::ptrdiff_t m_flAnimEndTime = 0x800; // float
    constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x804; // float
    constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x808; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x810; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPreKeyFrame = 0x818; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPostKeyFrame = 0x820; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x828; // float
    constexpr std::ptrdiff_t m_iDirection = 0x82C; // int32_t
}

namespace CBasePlatTrain { // CBaseToggle
    constexpr std::ptrdiff_t m_NoiseMoving = 0xA78; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0xA80; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_volume = 0xA90; // float
    constexpr std::ptrdiff_t m_flTWidth = 0xA94; // float
    constexpr std::ptrdiff_t m_flTLength = 0xA98; // float
}

namespace CBasePlayerController { // CBaseEntity
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x7B0; // uint64_t
    constexpr std::ptrdiff_t m_nTickBase = 0x7B8; // uint32_t
    constexpr std::ptrdiff_t m_hPawn = 0x7E8; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x7EC; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x7F0; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x7F8; // CUtlVector<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_bIsHLTV = 0x810; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x814; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x818; // char[128]
    constexpr std::ptrdiff_t m_szNetworkIDString = 0x898; // CUtlString
    constexpr std::ptrdiff_t m_fLerpTime = 0x8A0; // float
    constexpr std::ptrdiff_t m_bLagCompensation = 0x8A4; // bool
    constexpr std::ptrdiff_t m_bPredict = 0x8A5; // bool
    constexpr std::ptrdiff_t m_bAutoKickDisabled = 0x8A6; // bool
    constexpr std::ptrdiff_t m_bIsLowViolence = 0x8A7; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0x8A8; // bool
    constexpr std::ptrdiff_t m_nLastRealCommandNumberExecuted = 0x934; // int32_t
    constexpr std::ptrdiff_t m_nLastLateCommandExecuted = 0x938; // int32_t
    constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x950; // ChatIgnoreType_t
    constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x954; // float
    constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x958; // float
    constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x95C; // int32_t
    constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x960; // bool
    constexpr std::ptrdiff_t m_steamID = 0x970; // uint64_t
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x978; // uint32_t
}

namespace CBasePlayerControllerAPI {
}

namespace CBasePlayerPawn { // CBaseCombatCharacter
    constexpr std::ptrdiff_t m_pWeaponServices = 0xD18; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0xD20; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0xD28; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0xD30; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0xD38; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0xD40; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0xD48; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0xD50; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0xD58; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xD68; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xDB8; // uint32_t
    constexpr std::ptrdiff_t v_angle = 0xDBC; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0xDC8; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0xDD4; // uint32_t
    constexpr std::ptrdiff_t m_skybox3d = 0xDD8; // sky3dparams_t
    constexpr std::ptrdiff_t m_fTimeLastHurt = 0xE68; // GameTime_t
    constexpr std::ptrdiff_t m_flDeathTime = 0xE6C; // GameTime_t
    constexpr std::ptrdiff_t m_fNextSuicideTime = 0xE70; // GameTime_t
    constexpr std::ptrdiff_t m_fInitHUD = 0xE74; // bool
    constexpr std::ptrdiff_t m_pExpresser = 0xE78; // CAI_Expresser*
    constexpr std::ptrdiff_t m_hController = 0xE80; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xE88; // float
    constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xE8C; // float
    constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xE90; // CEntityIndex
    constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xE98; // CUtlVector<sndopvarlatchdata_t>
}

namespace CBasePlayerVData { // CEntitySubclassVDataBase
    constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
    constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
    constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
    constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float
    constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float
    constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32_t
    constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32_t
    constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32_t
    constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float
    constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float
    constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float
}

namespace CBasePlayerWeapon { // CEconEntity
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xF78; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xF7C; // float
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xF80; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xF84; // float
    constexpr std::ptrdiff_t m_iClip1 = 0xF88; // int32_t
    constexpr std::ptrdiff_t m_iClip2 = 0xF8C; // int32_t
    constexpr std::ptrdiff_t m_pReserveAmmo = 0xF90; // int32_t[2]
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xF98; // CEntityIOOutput
}

namespace CBasePlayerWeaponVData { // CEntitySubclassVDataBase
    constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108; // bool
    constexpr std::ptrdiff_t m_bAllowFlipping = 0x109; // bool
    constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110; // CUtlString
    constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_iFlags = 0x1F8; // ItemFlagTypes_t
    constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC; // int32_t
    constexpr std::ptrdiff_t m_iMaxClip2 = 0x200; // int32_t
    constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204; // int32_t
    constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208; // int32_t
    constexpr std::ptrdiff_t m_iWeight = 0x20C; // int32_t
    constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210; // bool
    constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211; // bool
    constexpr std::ptrdiff_t m_iRumbleEffect = 0x214; // RumbleEffect_t
    constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x218; // bool
    constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
    constexpr std::ptrdiff_t m_iSlot = 0x240; // int32_t
    constexpr std::ptrdiff_t m_iPosition = 0x244; // int32_t
}

namespace CBaseProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xBF0; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0xBF4; // int32_t
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xBF8; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xBFC; // matrix3x4_t
}

namespace CBasePropDoor { // CDynamicProp
    constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xE74; // float
    constexpr std::ptrdiff_t m_hDoorList = 0xE78; // CUtlVector<CHandle<CBasePropDoor>>
    constexpr std::ptrdiff_t m_nHardwareType = 0xE90; // int32_t
    constexpr std::ptrdiff_t m_bNeedsHardware = 0xE94; // bool
    constexpr std::ptrdiff_t m_eDoorState = 0xE98; // DoorState_t
    constexpr std::ptrdiff_t m_bLocked = 0xE9C; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0xEA0; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0xEAC; // QAngle
    constexpr std::ptrdiff_t m_hBlocker = 0xEB8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bFirstBlocked = 0xEBC; // bool
    constexpr std::ptrdiff_t m_ls = 0xEC0; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0xEE0; // bool
    constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xEE4; // Vector
    constexpr std::ptrdiff_t m_hActivator = 0xEF0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_SoundMoving = 0xF00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundOpen = 0xF08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundClose = 0xF10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLock = 0xF18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundUnlock = 0xF20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLatch = 0xF28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundPound = 0xF30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundJiggle = 0xF38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLockedAnim = 0xF40; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_numCloseAttempts = 0xF48; // int32_t
    constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xF4C; // CUtlStringToken
    constexpr std::ptrdiff_t m_SlaveName = 0xF50; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMaster = 0xF58; // CHandle<CBasePropDoor>
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0xF60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0xF88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xFB0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xFD8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x1000; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x1028; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0x1050; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0x1078; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0x10A0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAjarOpen = 0x10C8; // CEntityIOOutput
}

namespace CBaseToggle { // CBaseModelEntity
    constexpr std::ptrdiff_t m_toggle_state = 0x9F8; // TOGGLE_STATE
    constexpr std::ptrdiff_t m_flMoveDistance = 0x9FC; // float
    constexpr std::ptrdiff_t m_flWait = 0xA00; // float
    constexpr std::ptrdiff_t m_flLip = 0xA04; // float
    constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0xA08; // bool
    constexpr std::ptrdiff_t m_vecPosition1 = 0xA0C; // Vector
    constexpr std::ptrdiff_t m_vecPosition2 = 0xA18; // Vector
    constexpr std::ptrdiff_t m_vecMoveAng = 0xA24; // QAngle
    constexpr std::ptrdiff_t m_vecAngle1 = 0xA30; // QAngle
    constexpr std::ptrdiff_t m_vecAngle2 = 0xA3C; // QAngle
    constexpr std::ptrdiff_t m_flHeight = 0xA48; // float
    constexpr std::ptrdiff_t m_hActivator = 0xA4C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecFinalDest = 0xA50; // Vector
    constexpr std::ptrdiff_t m_vecFinalAngle = 0xA5C; // QAngle
    constexpr std::ptrdiff_t m_movementType = 0xA68; // int32_t
    constexpr std::ptrdiff_t m_sMaster = 0xA70; // CUtlSymbolLarge
}

namespace CBaseTrigger { // CBaseToggle
    constexpr std::ptrdiff_t m_bDisabled = 0xA78; // bool
    constexpr std::ptrdiff_t m_iFilterName = 0xA80; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0xA88; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_OnStartTouch = 0xA90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouchAll = 0xAB8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0xAE0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouchAll = 0xB08; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouching = 0xB30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotTouching = 0xB58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hTouchingEntities = 0xB80; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0xB98; // bool
}

namespace CBaseViewModel { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_vecLastFacing = 0xBF8; // Vector
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xC04; // uint32_t
    constexpr std::ptrdiff_t m_nAnimationParity = 0xC08; // uint32_t
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0xC0C; // float
    constexpr std::ptrdiff_t m_hWeapon = 0xC10; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_sVMName = 0xC18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0xC20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0xC28; // HSequence
    constexpr std::ptrdiff_t m_oldLayer = 0xC2C; // int32_t
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0xC30; // float
    constexpr std::ptrdiff_t m_hControlPanel = 0xC34; // CHandle<CBaseEntity>
}

namespace CBeam { // CBaseModelEntity
    constexpr std::ptrdiff_t m_flFrameRate = 0x9F8; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x9FC; // float
    constexpr std::ptrdiff_t m_flFireTime = 0xA00; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0xA04; // float
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0xA08; // uint8_t
    constexpr std::ptrdiff_t m_hBaseMaterial = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nHaloIndex = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nBeamType = 0xA20; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0xA24; // uint32_t
    constexpr std::ptrdiff_t m_hAttachEntity = 0xA28; // CHandle<CBaseEntity>[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0xA50; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0xA5C; // float
    constexpr std::ptrdiff_t m_fEndWidth = 0xA60; // float
    constexpr std::ptrdiff_t m_fFadeLength = 0xA64; // float
    constexpr std::ptrdiff_t m_fHaloScale = 0xA68; // float
    constexpr std::ptrdiff_t m_fAmplitude = 0xA6C; // float
    constexpr std::ptrdiff_t m_fStartFrame = 0xA70; // float
    constexpr std::ptrdiff_t m_fSpeed = 0xA74; // float
    constexpr std::ptrdiff_t m_flFrame = 0xA78; // float
    constexpr std::ptrdiff_t m_nClipStyle = 0xA7C; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0xA80; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0xA84; // Vector
    constexpr std::ptrdiff_t m_hEndEntity = 0xA90; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nDissolveType = 0xA94; // int32_t
}

namespace CBlood { // CPointEntity
    constexpr std::ptrdiff_t m_vecSprayAngles = 0x7A8; // QAngle
    constexpr std::ptrdiff_t m_vecSprayDir = 0x7B4; // Vector
    constexpr std::ptrdiff_t m_flAmount = 0x7C0; // float
    constexpr std::ptrdiff_t m_Color = 0x7C4; // int32_t
}

namespace CBodyComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
    constexpr std::ptrdiff_t __m_pChainEntity = 0x28; // CNetworkVarChainer
}

namespace CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t m_animationController = 0x478; // CBaseAnimGraphController
    constexpr std::ptrdiff_t __m_pChainEntity = 0x980; // CNetworkVarChainer
}

namespace CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x478; // CNetworkVarChainer
}

namespace CBodyComponentPoint { // CBodyComponent
    constexpr std::ptrdiff_t m_sceneNode = 0x60; // CGameSceneNode
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1C0; // CNetworkVarChainer
}

namespace CBodyComponentSkeletonInstance { // CBodyComponent
    constexpr std::ptrdiff_t m_skeletonInstance = 0x60; // CSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x450; // CNetworkVarChainer
}

namespace CBombTarget { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnBombExplode = 0xBA0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombPlanted = 0xBC8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefused = 0xBF0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsBombSiteB = 0xC18; // bool
    constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0xC19; // bool
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0xC1A; // bool
    constexpr std::ptrdiff_t m_szMountTarget = 0xC20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hInstructorHint = 0xC28; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nBombSiteDesignation = 0xC2C; // int32_t
}

namespace CBot {
    constexpr std::ptrdiff_t m_pController = 0x10; // CCSPlayerController*
    constexpr std::ptrdiff_t m_pPlayer = 0x18; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // bool
    constexpr std::ptrdiff_t m_id = 0x24; // uint32_t
    constexpr std::ptrdiff_t m_isRunning = 0xA8; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xA9; // bool
    constexpr std::ptrdiff_t m_forwardSpeed = 0xAC; // float
    constexpr std::ptrdiff_t m_leftSpeed = 0xB0; // float
    constexpr std::ptrdiff_t m_verticalSpeed = 0xB4; // float
    constexpr std::ptrdiff_t m_buttonFlags = 0xB8; // uint64_t
    constexpr std::ptrdiff_t m_jumpTimestamp = 0xC0; // float
    constexpr std::ptrdiff_t m_viewForward = 0xC4; // Vector
    constexpr std::ptrdiff_t m_postureStackIndex = 0xE0; // int32_t
}

namespace CBreachCharge { // CCSWeaponBase
}

namespace CBreachChargeProjectile { // CBaseGrenade
}

namespace CBreakable { // CBaseModelEntity
    constexpr std::ptrdiff_t m_Material = 0xA08; // Materials
    constexpr std::ptrdiff_t m_hBreaker = 0xA0C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_Explosion = 0xA10; // Explosions
    constexpr std::ptrdiff_t m_iszSpawnObject = 0xA18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPressureDelay = 0xA20; // float
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0xA24; // int32_t
    constexpr std::ptrdiff_t m_iszPropData = 0xA28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xA30; // float
    constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0xA34; // EOverrideBlockLOS_t
    constexpr std::ptrdiff_t m_OnBreak = 0xA38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0xA60; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xA88; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0xA8C; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xA90; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0xA94; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xA98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0xAA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0xAA8; // int32_t
    constexpr std::ptrdiff_t m_PerformanceMode = 0xAAC; // PerformanceMode_t
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xAB0; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xAB4; // GameTime_t
}

namespace CBreakableProp { // CBaseProp
    constexpr std::ptrdiff_t m_OnBreak = 0xC40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0xC68; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnTakeDamage = 0xC90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xCB8; // float
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0xCBC; // int32_t
    constexpr std::ptrdiff_t m_preferredCarryAngles = 0xCC0; // QAngle
    constexpr std::ptrdiff_t m_flPressureDelay = 0xCCC; // float
    constexpr std::ptrdiff_t m_hBreaker = 0xCD0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_PerformanceMode = 0xCD4; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xCD8; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0xCDC; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xCE0; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0xCE4; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xCE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0xCF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0xCF8; // int32_t
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xCFC; // GameTime_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xD00; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0xD04; // float
    constexpr std::ptrdiff_t m_explodeRadius = 0xD08; // float
    constexpr std::ptrdiff_t m_explosionDelay = 0xD10; // float
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xD18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xD20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0xD28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0xD30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xD38; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xD3C; // GameTime_t
    constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xD40; // bool
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xD44; // float
    constexpr std::ptrdiff_t m_hLastAttacker = 0xD48; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hFlareEnt = 0xD4C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bUsePuntSound = 0xD50; // bool
    constexpr std::ptrdiff_t m_iszPuntSound = 0xD58; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_noGhostCollision = 0xD60; // bool
}

namespace CBreakableStageHelper {
    constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32_t
    constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32_t
}

namespace CBtActionAim { // CBtNode
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szAimReadyKey = 0x80; // CUtlString
    constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88; // float
    constexpr std::ptrdiff_t m_bDoneAiming = 0x8C; // bool
    constexpr std::ptrdiff_t m_flLerpStartTime = 0x90; // float
    constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94; // float
    constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98; // float
    constexpr std::ptrdiff_t m_NextLookTarget = 0x9C; // QAngle
    constexpr std::ptrdiff_t m_AimTimer = 0xA8; // CountdownTimer
    constexpr std::ptrdiff_t m_SniperHoldTimer = 0xC0; // CountdownTimer
    constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xD8; // CountdownTimer
    constexpr std::ptrdiff_t m_bAcquired = 0xF0; // bool
}

namespace CBtActionCombatPositioning { // CBtNode
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80; // CUtlString
    constexpr std::ptrdiff_t m_ActionTimer = 0x88; // CountdownTimer
    constexpr std::ptrdiff_t m_bCrouching = 0xA0; // bool
}

namespace CBtActionMoveTo { // CBtNode
    constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60; // CUtlString
    constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szThreatInputKey = 0x70; // CUtlString
    constexpr std::ptrdiff_t m_vecDestination = 0x78; // Vector
    constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84; // bool
    constexpr std::ptrdiff_t m_bComputePath = 0x85; // bool
    constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88; // float
    constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
    constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xA8; // CountdownTimer
    constexpr std::ptrdiff_t m_RepathTimer = 0xC0; // CountdownTimer
    constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xD8; // float
    constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xDC; // float
    constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xE0; // float
    constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xE4; // float
}

namespace CBtActionParachutePositioning { // CBtNode
    constexpr std::ptrdiff_t m_ActionTimer = 0x58; // CountdownTimer
}

namespace CBtNode {
}

namespace CBtNodeComposite { // CBtNode
}

namespace CBtNodeCondition { // CBtNodeDecorator
    constexpr std::ptrdiff_t m_bNegated = 0x58; // bool
}

namespace CBtNodeConditionInactive { // CBtNodeCondition
    constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78; // float
    constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7C; // float
    constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80; // CountdownTimer
}

namespace CBtNodeDecorator { // CBtNode
}

namespace CBubbling { // CBaseModelEntity
    constexpr std::ptrdiff_t m_density = 0x9F8; // int32_t
    constexpr std::ptrdiff_t m_frequency = 0x9FC; // int32_t
    constexpr std::ptrdiff_t m_state = 0xA00; // int32_t
}

namespace CBumpMine { // CCSWeaponBase
}

namespace CBumpMineProjectile { // CBaseGrenade
}

namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float
}

namespace CBuyZone { // CBaseTrigger
    constexpr std::ptrdiff_t m_LegacyTeamNum = 0xB9C; // int32_t
}

namespace CC4 { // CCSWeaponBase
    constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0x1198; // Vector
    constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0x11A4; // Vector
    constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0x11B0; // bool
    constexpr std::ptrdiff_t m_bStartedArming = 0x11B1; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0x11B4; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x11B8; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x11B9; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x11C0; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x11D8; // int32_t
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x11DC; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0x11E3; // bool
}

namespace CCSArmsRaceScript { // CCSGameModeScript
    constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
}

namespace CCSBot { // CBot
    constexpr std::ptrdiff_t m_lastCoopSpawnPoint = 0xE4; // CHandle<SpawnPointCoopEnemy>
    constexpr std::ptrdiff_t m_eyePosition = 0xF0; // Vector
    constexpr std::ptrdiff_t m_name = 0xFC; // char[64]
    constexpr std::ptrdiff_t m_combatRange = 0x13C; // float
    constexpr std::ptrdiff_t m_isRogue = 0x140; // bool
    constexpr std::ptrdiff_t m_rogueTimer = 0x148; // CountdownTimer
    constexpr std::ptrdiff_t m_diedLastRound = 0x164; // bool
    constexpr std::ptrdiff_t m_safeTime = 0x168; // float
    constexpr std::ptrdiff_t m_wasSafe = 0x16C; // bool
    constexpr std::ptrdiff_t m_blindFire = 0x174; // bool
    constexpr std::ptrdiff_t m_surpriseTimer = 0x178; // CountdownTimer
    constexpr std::ptrdiff_t m_bAllowActive = 0x190; // bool
    constexpr std::ptrdiff_t m_isFollowing = 0x191; // bool
    constexpr std::ptrdiff_t m_leader = 0x194; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_followTimestamp = 0x198; // float
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x19C; // float
    constexpr std::ptrdiff_t m_hurryTimer = 0x1A0; // CountdownTimer
    constexpr std::ptrdiff_t m_alertTimer = 0x1B8; // CountdownTimer
    constexpr std::ptrdiff_t m_sneakTimer = 0x1D0; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0x1E8; // CountdownTimer
    constexpr std::ptrdiff_t m_stateTimestamp = 0x4B8; // float
    constexpr std::ptrdiff_t m_isAttacking = 0x4BC; // bool
    constexpr std::ptrdiff_t m_isOpeningDoor = 0x4BD; // bool
    constexpr std::ptrdiff_t m_taskEntity = 0x4C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_goalPosition = 0x4D4; // Vector
    constexpr std::ptrdiff_t m_goalEntity = 0x4E0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_avoid = 0x4E4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_avoidTimestamp = 0x4E8; // float
    constexpr std::ptrdiff_t m_isStopping = 0x4EC; // bool
    constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x4ED; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0x4F0; // IntervalTimer
    constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x500; // bool
    constexpr std::ptrdiff_t m_pathIndex = 0x65D8; // int32_t
    constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x65DC; // GameTime_t
    constexpr std::ptrdiff_t m_repathTimer = 0x65E0; // CountdownTimer
    constexpr std::ptrdiff_t m_avoidFriendTimer = 0x65F8; // CountdownTimer
    constexpr std::ptrdiff_t m_isFriendInTheWay = 0x6610; // bool
    constexpr std::ptrdiff_t m_politeTimer = 0x6618; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x6630; // bool
    constexpr std::ptrdiff_t m_pathLadderEnd = 0x665C; // float
    constexpr std::ptrdiff_t m_mustRunTimer = 0x66A8; // CountdownTimer
    constexpr std::ptrdiff_t m_waitTimer = 0x66C0; // CountdownTimer
    constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x66D8; // CountdownTimer
    constexpr std::ptrdiff_t m_playerTravelDistance = 0x66F0; // float[64]
    constexpr std::ptrdiff_t m_travelDistancePhase = 0x67F0; // uint8_t
    constexpr std::ptrdiff_t m_hostageEscortCount = 0x6988; // uint8_t
    constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x698C; // float
    constexpr std::ptrdiff_t m_desiredTeam = 0x6990; // int32_t
    constexpr std::ptrdiff_t m_hasJoined = 0x6994; // bool
    constexpr std::ptrdiff_t m_isWaitingForHostage = 0x6995; // bool
    constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x6998; // CountdownTimer
    constexpr std::ptrdiff_t m_waitForHostageTimer = 0x69B0; // CountdownTimer
    constexpr std::ptrdiff_t m_noisePosition = 0x69C8; // Vector
    constexpr std::ptrdiff_t m_noiseTravelDistance = 0x69D4; // float
    constexpr std::ptrdiff_t m_noiseTimestamp = 0x69D8; // float
    constexpr std::ptrdiff_t m_noiseSource = 0x69E0; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_noiseBendTimer = 0x69F8; // CountdownTimer
    constexpr std::ptrdiff_t m_bentNoisePosition = 0x6A10; // Vector
    constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x6A1C; // bool
    constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6A20; // float
    constexpr std::ptrdiff_t m_lookAheadAngle = 0x6A24; // float
    constexpr std::ptrdiff_t m_forwardAngle = 0x6A28; // float
    constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x6A2C; // float
    constexpr std::ptrdiff_t m_lookAtSpot = 0x6A34; // Vector
    constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x6A44; // float
    constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6A48; // float
    constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x6A4C; // float
    constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6A50; // bool
    constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6A51; // bool
    constexpr std::ptrdiff_t m_lookAtDesc = 0x6A58; // char*
    constexpr std::ptrdiff_t m_peripheralTimestamp = 0x6A60; // float
    constexpr std::ptrdiff_t m_approachPointCount = 0x6BE8; // uint8_t
    constexpr std::ptrdiff_t m_approachPointViewPosition = 0x6BEC; // Vector
    constexpr std::ptrdiff_t m_viewSteadyTimer = 0x6BF8; // IntervalTimer
    constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x6C10; // CountdownTimer
    constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6C30; // CountdownTimer
    constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6C50; // float
    constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x7058; // int32_t
    constexpr std::ptrdiff_t m_lookPitch = 0x705C; // float
    constexpr std::ptrdiff_t m_lookPitchVel = 0x7060; // float
    constexpr std::ptrdiff_t m_lookYaw = 0x7064; // float
    constexpr std::ptrdiff_t m_lookYawVel = 0x7068; // float
    constexpr std::ptrdiff_t m_targetSpot = 0x706C; // Vector
    constexpr std::ptrdiff_t m_targetSpotVelocity = 0x7078; // Vector
    constexpr std::ptrdiff_t m_targetSpotPredicted = 0x7084; // Vector
    constexpr std::ptrdiff_t m_aimError = 0x7090; // QAngle
    constexpr std::ptrdiff_t m_aimGoal = 0x709C; // QAngle
    constexpr std::ptrdiff_t m_targetSpotTime = 0x70A8; // GameTime_t
    constexpr std::ptrdiff_t m_aimFocus = 0x70AC; // float
    constexpr std::ptrdiff_t m_aimFocusInterval = 0x70B0; // float
    constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x70B4; // GameTime_t
    constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x70C0; // CountdownTimer
    constexpr std::ptrdiff_t m_enemy = 0x70D8; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_isEnemyVisible = 0x70DC; // bool
    constexpr std::ptrdiff_t m_visibleEnemyParts = 0x70DD; // uint8_t
    constexpr std::ptrdiff_t m_lastEnemyPosition = 0x70E0; // Vector
    constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x70EC; // float
    constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x70F0; // float
    constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x70F4; // float
    constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x70F8; // float
    constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x70FC; // float
    constexpr std::ptrdiff_t m_isLastEnemyDead = 0x7100; // bool
    constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x7104; // int32_t
    constexpr std::ptrdiff_t m_bomber = 0x7310; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_nearbyFriendCount = 0x7314; // int32_t
    constexpr std::ptrdiff_t m_closestVisibleFriend = 0x7318; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x731C; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_attentionInterval = 0x7320; // IntervalTimer
    constexpr std::ptrdiff_t m_attacker = 0x7330; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_attackedTimestamp = 0x7334; // float
    constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x7338; // IntervalTimer
    constexpr std::ptrdiff_t m_lastVictimID = 0x7348; // int32_t
    constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x734C; // bool
    constexpr std::ptrdiff_t m_isRapidFiring = 0x734D; // bool
    constexpr std::ptrdiff_t m_equipTimer = 0x7350; // IntervalTimer
    constexpr std::ptrdiff_t m_zoomTimer = 0x7360; // CountdownTimer
    constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x7378; // GameTime_t
    constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x7380; // CountdownTimer
    constexpr std::ptrdiff_t m_bIsSleeping = 0x7398; // bool
    constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x7399; // bool
    constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x73A0; // CountdownTimer
    constexpr std::ptrdiff_t m_enemyQueueIndex = 0x7458; // uint8_t
    constexpr std::ptrdiff_t m_enemyQueueCount = 0x7459; // uint8_t
    constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x745A; // uint8_t
    constexpr std::ptrdiff_t m_isStuck = 0x745B; // bool
    constexpr std::ptrdiff_t m_stuckTimestamp = 0x745C; // GameTime_t
    constexpr std::ptrdiff_t m_stuckSpot = 0x7460; // Vector
    constexpr std::ptrdiff_t m_wiggleTimer = 0x7470; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckJumpTimer = 0x7488; // CountdownTimer
    constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x74A0; // GameTime_t
    constexpr std::ptrdiff_t m_avgVel = 0x74A4; // float[10]
    constexpr std::ptrdiff_t m_avgVelIndex = 0x74CC; // int32_t
    constexpr std::ptrdiff_t m_avgVelCount = 0x74D0; // int32_t
    constexpr std::ptrdiff_t m_lastOrigin = 0x74D4; // Vector
    constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x74E4; // float
    constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x74E8; // float
    constexpr std::ptrdiff_t m_radioSubject = 0x74EC; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_radioPosition = 0x74F0; // Vector
    constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x74FC; // float
    constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x7508; // int32_t
}

namespace CCSDeathmatchScript { // CCSGameModeScript
    constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
}

namespace CCSDeathmatchScript_ConVars {
}

namespace CCSGOPlayerAnimGraphState {
}

namespace CCSGOViewModel { // CPredictedViewModel
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xC38; // bool
    constexpr std::ptrdiff_t m_nWeaponParity = 0xC3C; // uint32_t
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0xC40; // uint32_t
}

namespace CCSGO_TeamIntroCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

namespace CCSGO_TeamIntroCounterTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

namespace CCSGO_TeamIntroTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

namespace CCSGO_TeamPreviewCharacterPosition { // CBaseEntity
    constexpr std::ptrdiff_t m_nVariant = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_nRandom = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_nOrdinal = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_sWeaponName = 0x7B8; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x7C0; // uint64_t
    constexpr std::ptrdiff_t m_agentItem = 0x7C8; // CEconItemView
    constexpr std::ptrdiff_t m_glovesItem = 0xA40; // CEconItemView
    constexpr std::ptrdiff_t m_weaponItem = 0xCB8; // CEconItemView
}

namespace CCSGO_TeamSelectCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

namespace CCSGO_TeamSelectCounterTerroristPosition { // CCSGO_TeamSelectCharacterPosition
}

namespace CCSGO_TeamSelectTerroristPosition { // CCSGO_TeamSelectCharacterPosition
}

namespace CCSGO_WingmanIntroCharacterPosition { // CCSGO_TeamIntroCharacterPosition
}

namespace CCSGO_WingmanIntroCounterTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

namespace CCSGO_WingmanIntroTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

namespace CCSGameModeRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CCSGameModeRules_ArmsRace { // CCSGameModeRules
    constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // CNetworkUtlVectorBase<CUtlString>
}

namespace CCSGameModeRules_Deathmatch { // CCSGameModeRules
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float
    constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x40; // int16_t
}

namespace CCSGameModeRules_Noop { // CCSGameModeRules
}

namespace CCSGameModeScript { // CBasePulseGraphInstance
}

namespace CCSGameModeScript_ConVars {
}

namespace CCSGameRules { // CTeamplayRules
    constexpr std::ptrdiff_t __m_pChainEntity = 0x98; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bFreezePeriod = 0xC4; // bool
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC5; // bool
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xC8; // GameTime_t
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xCC; // GameTime_t
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xD0; // int32_t
    constexpr std::ptrdiff_t m_nPauseStartTick = 0xD4; // int32_t
    constexpr std::ptrdiff_t m_bServerPaused = 0xD8; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0xD9; // bool
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xDA; // bool
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xDB; // bool
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xDC; // float
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xE0; // float
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE4; // int32_t
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE8; // int32_t
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xEC; // bool
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xED; // bool
    constexpr std::ptrdiff_t m_iRoundTime = 0xF0; // int32_t
    constexpr std::ptrdiff_t m_fMatchStartTime = 0xF4; // float
    constexpr std::ptrdiff_t m_fRoundStartTime = 0xF8; // GameTime_t
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0xFC; // GameTime_t
    constexpr std::ptrdiff_t m_bGameRestart = 0x100; // bool
    constexpr std::ptrdiff_t m_flGameStartTime = 0x104; // float
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x108; // float
    constexpr std::ptrdiff_t m_gamePhase = 0x10C; // int32_t
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x110; // int32_t
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x114; // int32_t
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x118; // int32_t
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x11C; // int32_t
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x120; // bool
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x121; // bool
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x122; // bool
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x123; // bool
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x124; // bool
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x128; // int32_t
    constexpr std::ptrdiff_t m_bIsValveDS = 0x12C; // bool
    constexpr std::ptrdiff_t m_bLogoMap = 0x12D; // bool
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12E; // bool
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x130; // int32_t
    constexpr std::ptrdiff_t m_MatchDevice = 0x134; // int32_t
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0x138; // bool
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x13C; // int32_t
    constexpr std::ptrdiff_t m_szTournamentEventName = 0x140; // char[512]
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x340; // char[512]
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x540; // char[512]
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x740; // char[512]
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x940; // int32_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0x94C; // bool
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0x94D; // bool
    constexpr std::ptrdiff_t m_bIsHltvActive = 0x94E; // bool
    constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x950; // int32_t
    constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x954; // int32_t
    constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32_t
    constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x95C; // int32_t
    constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x960; // int32_t
    constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x964; // uint32_t
    constexpr std::ptrdiff_t m_numGlobalGifters = 0x968; // uint32_t
    constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32_t
    constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x970; // uint32_t[4]
    constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x980; // uint32_t[4]
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x990; // uint16_t[100]
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA58; // uint32_t[4]
    constexpr std::ptrdiff_t m_numBestOfMaps = 0xA68; // int32_t
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA6C; // int32_t
    constexpr std::ptrdiff_t m_bBombDropped = 0xA70; // bool
    constexpr std::ptrdiff_t m_bBombPlanted = 0xA71; // bool
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA74; // int32_t
    constexpr std::ptrdiff_t m_eRoundWinReason = 0xA78; // int32_t
    constexpr std::ptrdiff_t m_bTCantBuy = 0xA7C; // bool
    constexpr std::ptrdiff_t m_bCTCantBuy = 0xA7D; // bool
    constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA84; // int32_t[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32_t[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB74; // int32_t[30]
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBEC; // float[32]
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
    constexpr std::ptrdiff_t m_nServerQuestID = 0xCEC; // int32_t
    constexpr std::ptrdiff_t m_vMinimapMins = 0xCF0; // Vector
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCFC; // Vector
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xD08; // float[8]
    constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xD28; // bool
    constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32_t[10]
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD54; // int32_t[10]
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD7C; // int32_t
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD80; // int32_t
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD84; // int32_t
    constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xDA0; // bool
    constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xDA4; // GameTime_t
    constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xDA8; // GameTime_t
    constexpr std::ptrdiff_t m_bLevelInitialized = 0xDAC; // bool
    constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xDB0; // int32_t
    constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xDB4; // int32_t
    constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xDB8; // bool
    constexpr std::ptrdiff_t m_endMatchOnThink = 0xDB9; // bool
    constexpr std::ptrdiff_t m_iFreezeTime = 0xDBC; // int32_t
    constexpr std::ptrdiff_t m_iNumTerrorist = 0xDC0; // int32_t
    constexpr std::ptrdiff_t m_iNumCT = 0xDC4; // int32_t
    constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xDC8; // int32_t
    constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xDCC; // int32_t
    constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDE8; // int32_t
    constexpr std::ptrdiff_t m_bFirstConnected = 0xDEC; // bool
    constexpr std::ptrdiff_t m_bCompleteReset = 0xDED; // bool
    constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDEE; // bool
    constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDEF; // bool
    constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDF0; // bool
    constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
    constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xE18; // uint32_t
    constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xE20; // char*
    constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xE28; // uint32_t
    constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xE2C; // uint32_t
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE30; // uint32_t
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE34; // uint32_t
    constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE40; // bool
    constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE41; // bool
    constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE78; // int32_t
    constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE7C; // float
    constexpr std::ptrdiff_t m_flCoopRespawnAndHealTime = 0xE98; // float
    constexpr std::ptrdiff_t m_coopBonusCoinsFound = 0xE9C; // int32_t
    constexpr std::ptrdiff_t m_coopBonusPistolsOnly = 0xEA0; // bool
    constexpr std::ptrdiff_t m_coopPlayersInDeploymentZone = 0xEA1; // bool
    constexpr std::ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
    constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xEA4; // int32_t
    constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xEA8; // float
    constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xEAC; // float
    constexpr std::ptrdiff_t m_iAccountTerrorist = 0xEB0; // int32_t
    constexpr std::ptrdiff_t m_iAccountCT = 0xEB4; // int32_t
    constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xEB8; // int32_t
    constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xEBC; // int32_t
    constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xEC0; // int32_t
    constexpr std::ptrdiff_t m_iMaxNumCTs = 0xEC4; // int32_t
    constexpr std::ptrdiff_t m_iLoserBonus = 0xEC8; // int32_t
    constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xECC; // int32_t
    constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xED0; // float
    constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xED4; // bool
    constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xED8; // float
    constexpr std::ptrdiff_t m_iHostagesRescued = 0xEE0; // int32_t
    constexpr std::ptrdiff_t m_iHostagesTouched = 0xEE4; // int32_t
    constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEE8; // float
    constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEEC; // bool
    constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEED; // bool
    constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEEE; // bool
    constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEEF; // bool
    constexpr std::ptrdiff_t m_firstKillTime = 0xEF4; // float
    constexpr std::ptrdiff_t m_firstBloodTime = 0xEFC; // float
    constexpr std::ptrdiff_t m_hostageWasInjured = 0xF18; // bool
    constexpr std::ptrdiff_t m_hostageWasKilled = 0xF19; // bool
    constexpr std::ptrdiff_t m_bVoteCalled = 0xF28; // bool
    constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xF29; // bool
    constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xF2C; // float
    constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xF30; // bool
    constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xF34; // int32_t
    constexpr std::ptrdiff_t m_bTargetBombed = 0xF38; // bool
    constexpr std::ptrdiff_t m_bBombDefused = 0xF39; // bool
    constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF3A; // bool
    constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF58; // Vector
    constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
    constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
    constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF98; // bool
    constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF9C; // int32_t
    constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xFA0; // float
    constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xFA4; // int32_t
    constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xFA8; // float
    constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
    constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
    constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFE0; // bool
    constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFE4; // float
    constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1250; // bool
    constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1251; // bool
    constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
    constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1258; // float
    constexpr std::ptrdiff_t m_flLastThinkTime = 0x125C; // GameTime_t
    constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1260; // float
    constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x1264; // int32_t
    constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x14E0; // int32_t
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
    constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
    constexpr std::ptrdiff_t m_pGameModeRules = 0x1500; // CCSGameModeRules*
    constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x1508; // KeyValues3
    constexpr std::ptrdiff_t m_hPlayerResource = 0x1568; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_RetakeRules = 0x1570; // CRetakeGameRules
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x1754; // int32_t
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x1758; // int32_t
    constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1760; // CUtlVector<int32_t>[4]
    constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0; // bool[4]
    constexpr std::ptrdiff_t m_nMatchEndCount = 0x17E8; // uint8_t
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x17EC; // int32_t
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17F0; // int32_t
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17F4; // bool
    constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x17F8; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x17FC; // bool
    constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1800; // int32_t
    constexpr std::ptrdiff_t m_eRoundEndReason = 0x1804; // int32_t
    constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1808; // bool
    constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x180C; // int32_t
    constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1810; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1818; // CPlayerSlot
    constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x181C; // int32_t
    constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x1820; // int32_t
    constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x1824; // int32_t
    constexpr std::ptrdiff_t m_sRoundEndMessage = 0x1828; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1830; // int32_t
    constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1834; // bool
    constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1838; // int32_t
    constexpr std::ptrdiff_t m_nRoundEndCount = 0x183C; // uint8_t
    constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1840; // int32_t
    constexpr std::ptrdiff_t m_nRoundStartCount = 0x1844; // uint8_t
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5850; // double
    constexpr std::ptrdiff_t m_bSkipNextServerPerfSample = 0x5858; // bool
}

namespace CCSGameRulesProxy { // CGameRulesProxy
    constexpr std::ptrdiff_t m_pGameRules = 0x7A8; // CCSGameRules*
}

namespace CCSMinimapBoundary { // CBaseEntity
}

namespace CCSObserverPawn { // CCSPlayerPawnBase
}

namespace CCSObserverPawnAPI {
}

namespace CCSObserver_CameraServices { // CCSPlayerBase_CameraServices
}

namespace CCSObserver_MovementServices { // CPlayer_MovementServices
}

namespace CCSObserver_ObserverServices { // CPlayer_ObserverServices
}

namespace CCSObserver_UseServices { // CPlayer_UseServices
}

namespace CCSObserver_ViewModelServices { // CPlayer_ViewModelServices
}

namespace CCSPlace { // CServerOnlyModelEntity
    constexpr std::ptrdiff_t m_name = 0xA00; // CUtlSymbolLarge
}

namespace CCSPlayerBase_CameraServices { // CPlayer_CameraServices
    constexpr std::ptrdiff_t m_iFOV = 0x170; // uint32_t
    constexpr std::ptrdiff_t m_iFOVStart = 0x174; // uint32_t
    constexpr std::ptrdiff_t m_flFOVTime = 0x178; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVRate = 0x17C; // float
    constexpr std::ptrdiff_t m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
}

namespace CCSPlayerController { // CBasePlayerController
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x9A8; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x9B0; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x9B8; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x9C0; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x9C8; // uint32_t
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x9CC; // bool
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x9D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x9D8; // uint8_t
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x9DC; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x9E0; // int32_t
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x9E4; // bool
    constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x9E5; // bool
    constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x9E8; // int32_t
    constexpr std::ptrdiff_t m_bTeamChanged = 0x9EC; // bool
    constexpr std::ptrdiff_t m_bInSwitchTeam = 0x9ED; // bool
    constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x9EE; // bool
    constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x9EF; // bool
    constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x9F0; // bool
    constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x9F1; // bool
    constexpr std::ptrdiff_t m_szClan = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szClanName = 0xA00; // char[32]
    constexpr std::ptrdiff_t m_iCoachingTeam = 0xA20; // int32_t
    constexpr std::ptrdiff_t m_nPlayerDominated = 0xA28; // uint64_t
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0xA30; // uint64_t
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0xA38; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0xA3C; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0xA40; // int8_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0xA44; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0xA48; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0xA4C; // int32_t
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0xA50; // int32_t
    constexpr std::ptrdiff_t m_unActiveQuestId = 0xA54; // uint16_t
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0xA58; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0xA5C; // uint32_t
    constexpr std::ptrdiff_t m_iDraftIndex = 0xA88; // int32_t
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0xA8C; // uint32_t
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0xA90; // uint32_t
    constexpr std::ptrdiff_t m_bCannotBeKicked = 0xA94; // bool
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0xA95; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0xA96; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0xA97; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0xA98; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0xA99; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0xA9C; // int32_t
    constexpr std::ptrdiff_t m_bControllingBot = 0xAA8; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0xAA9; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0xAAA; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0xAAC; // int32_t
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0xAB0; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0xAB4; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_hObserverPawn = 0xAB8; // CHandle<CCSObserverPawn>
    constexpr std::ptrdiff_t m_DesiredObserverMode = 0xABC; // int32_t
    constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0xAC0; // CEntityHandle
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0xAC4; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0xAC8; // uint32_t
    constexpr std::ptrdiff_t m_iPawnArmor = 0xACC; // int32_t
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0xAD0; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0xAD1; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0xAD2; // uint16_t
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0xAD4; // int32_t
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0xAD8; // int32_t
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0xADC; // int32_t
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0xAE0; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_iScore = 0xAE4; // int32_t
    constexpr std::ptrdiff_t m_iRoundScore = 0xAE8; // int32_t
    constexpr std::ptrdiff_t m_iRoundsWon = 0xAEC; // int32_t
    constexpr std::ptrdiff_t m_vecKills = 0xAF0; // CNetworkUtlVectorBase<EKillTypes_t>
    constexpr std::ptrdiff_t m_bMvpNoMusic = 0xB08; // bool
    constexpr std::ptrdiff_t m_eMvpReason = 0xB0C; // int32_t
    constexpr std::ptrdiff_t m_iMusicKitID = 0xB10; // int32_t
    constexpr std::ptrdiff_t m_iMusicKitMVPs = 0xB14; // int32_t
    constexpr std::ptrdiff_t m_iMVPs = 0xB18; // int32_t
    constexpr std::ptrdiff_t m_nUpdateCounter = 0xB1C; // int32_t
    constexpr std::ptrdiff_t m_flSmoothedPing = 0xB20; // float
    constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xFBC8; // IntervalTimer
    constexpr std::ptrdiff_t m_bShowHints = 0xFBE0; // bool
    constexpr std::ptrdiff_t m_iNextTimeCheck = 0xFBE4; // int32_t
    constexpr std::ptrdiff_t m_bJustDidTeamKill = 0xFBE8; // bool
    constexpr std::ptrdiff_t m_bPunishForTeamKill = 0xFBE9; // bool
    constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0xFBEA; // bool
    constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0xFBEB; // bool
    constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0xFBF0; // double
    constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0xFBF8; // GameTime_t
    constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xFBFC; // GameTime_t
    constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0xFC00; // uint32_t
    constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0xFC04; // uint32_t
}

namespace CCSPlayerControllerAPI {
}

namespace CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x148; // int32_t
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x14C; // int32_t
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x150; // uint32_t
}

namespace CCSPlayerController_DamageServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32_t
    constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
}

namespace CCSPlayerController_InGameMoneyServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
    constexpr std::ptrdiff_t m_iAccountMoneyEarnedForNextRound = 0x44; // int32_t
    constexpr std::ptrdiff_t m_iAccount = 0x48; // int32_t
    constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32_t
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32_t
}

namespace CCSPlayerController_InventoryServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16_t
    constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32_t
    constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xF48; // uint32_t[1]
    constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0xF50; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
}

namespace CCSPlayerPawn { // CCSPlayerPawnBase
    constexpr std::ptrdiff_t m_pBulletServices = 0x18B0; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0x18B8; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0x18C0; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x18C8; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pRadioServices = 0x18D0; // CCSPlayer_RadioServices*
    constexpr std::ptrdiff_t m_pDamageReactServices = 0x18D8; // CCSPlayer_DamageReactServices*
    constexpr std::ptrdiff_t m_nCharacterDefIndex = 0x18E0; // uint16_t
    constexpr std::ptrdiff_t m_hPreviousModel = 0x18E8; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x18F0; // bool
    constexpr std::ptrdiff_t m_strVOPrefix = 0x18F8; // CUtlString
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x1900; // char[18]
    constexpr std::ptrdiff_t m_bInHostageResetZone = 0x19C0; // bool
    constexpr std::ptrdiff_t m_bInBuyZone = 0x19C1; // bool
    constexpr std::ptrdiff_t m_bWasInBuyZone = 0x19C2; // bool
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x19C3; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0x19C4; // bool
    constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x19C5; // bool
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x19C8; // int32_t
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x19CC; // int32_t
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x19D0; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x19D1; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x19D4; // int32_t
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x19D8; // loadout_slot_t
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x19DC; // GameTime_t
    constexpr std::ptrdiff_t m_flLandseconds = 0x19E0; // float
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x19E4; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x19F0; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x19FC; // int32_t
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1A00; // float
    constexpr std::ptrdiff_t m_aimPunchCache = 0x1A08; // CUtlVector<QAngle>
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1A20; // bool
    constexpr std::ptrdiff_t m_xLastHeadBoneTransform = 0x2060; // CTransform
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2080; // bool
    constexpr std::ptrdiff_t m_lastLandTime = 0x2084; // GameTime_t
    constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2088; // bool
    constexpr std::ptrdiff_t m_iPlayerLocked = 0x208C; // int32_t
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x2094; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x2098; // GameTime_t
    constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x209C; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x20A0; // int32_t
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x20A4; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x20B0; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x20BC; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x20FC; // bool
    constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x2100; // Vector
    constexpr std::ptrdiff_t m_EconGloves = 0x2110; // CEconItemView
    constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x2388; // uint8_t
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x238C; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2398; // bool
}

namespace CCSPlayerPawnAPI {
}

namespace CCSPlayerPawnBase { // CBasePlayerPawn
    constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xEC8; // CTouchExpansionComponent
    constexpr std::ptrdiff_t m_pPingServices = 0xF18; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_pViewModelServices = 0xF20; // CPlayer_ViewModelServices*
    constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0xF28; // uint32_t
    constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0xF2C; // float
    constexpr std::ptrdiff_t m_hOriginalController = 0xF30; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_blindUntilTime = 0xF34; // GameTime_t
    constexpr std::ptrdiff_t m_blindStartTime = 0xF38; // GameTime_t
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0xF3C; // GameTime_t
    constexpr std::ptrdiff_t m_entitySpottedState = 0xF40; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xF58; // int32_t
    constexpr std::ptrdiff_t m_iPlayerState = 0xF5C; // CSPlayerState
    constexpr std::ptrdiff_t m_chickenIdleSoundTimer = 0xF68; // CountdownTimer
    constexpr std::ptrdiff_t m_chickenJumpSoundTimer = 0xF80; // CountdownTimer
    constexpr std::ptrdiff_t m_vecLastBookmarkedPosition = 0x1038; // Vector
    constexpr std::ptrdiff_t m_flLastDistanceTraveledNotice = 0x1044; // float
    constexpr std::ptrdiff_t m_flAccumulatedDistanceTraveled = 0x1048; // float
    constexpr std::ptrdiff_t m_flLastFriendlyFireDamageReductionRatio = 0x104C; // float
    constexpr std::ptrdiff_t m_bRespawning = 0x1050; // bool
    constexpr std::ptrdiff_t m_nLastPickupPriority = 0x1054; // int32_t
    constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x1058; // float
    constexpr std::ptrdiff_t m_bIsScoped = 0x105C; // bool
    constexpr std::ptrdiff_t m_bIsWalking = 0x105D; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0x105E; // bool
    constexpr std::ptrdiff_t m_bIsDefusing = 0x105F; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1060; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1064; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1068; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0x106C; // bool
    constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x106D; // Color
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1074; // float
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x1078; // bool
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0x1079; // bool
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0x107C; // float
    constexpr std::ptrdiff_t m_flNextGuardianTooFarHurtTime = 0x1080; // float
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0x1084; // GameTime_t
    constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x1088; // float
    constexpr std::ptrdiff_t m_flLastEquippedHelmetTime = 0x108C; // GameTime_t
    constexpr std::ptrdiff_t m_flLastEquippedArmorTime = 0x1090; // GameTime_t
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0x1094; // int32_t
    constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x1098; // bool
    constexpr std::ptrdiff_t m_flLastBumpMineBumpTime = 0x109C; // GameTime_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0x10A0; // GameTime_t
    constexpr std::ptrdiff_t m_iNumSpawns = 0x10A4; // int32_t
    constexpr std::ptrdiff_t m_iShouldHaveCash = 0x10A8; // int32_t
    constexpr std::ptrdiff_t m_bInvalidSteamLogonDelayed = 0x10AC; // bool
    constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0x10B0; // float
    constexpr std::ptrdiff_t m_flNameChangeHistory = 0x10B4; // float[5]
    constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x10C8; // float
    constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x10CC; // float
    constexpr std::ptrdiff_t m_bHasNightVision = 0x10D0; // bool
    constexpr std::ptrdiff_t m_bNightVisionOn = 0x10D1; // bool
    constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0x10D4; // float
    constexpr std::ptrdiff_t m_flLastMoneyUpdateTime = 0x10D8; // float
    constexpr std::ptrdiff_t m_MenuStringBuffer = 0x10DC; // char[1024]
    constexpr std::ptrdiff_t m_fIntroCamTime = 0x14DC; // float
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x14E0; // int32_t
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x14E4; // bool
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x14E5; // bool
    constexpr std::ptrdiff_t m_iMoveState = 0x14E8; // int32_t
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x14EC; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x14F0; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x14F4; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1500; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x150C; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1518; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1530; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1548; // Vector[2]
    constexpr std::ptrdiff_t m_bDiedAirborne = 0x1560; // bool
    constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1564; // CEntityIndex
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x1568; // int32_t
    constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x156C; // bool
    constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x156D; // bool
    constexpr std::ptrdiff_t m_iDirection = 0x1570; // int32_t
    constexpr std::ptrdiff_t m_iShotsFired = 0x1574; // int32_t
    constexpr std::ptrdiff_t m_ArmorValue = 0x1578; // int32_t
    constexpr std::ptrdiff_t m_flFlinchStack = 0x157C; // float
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x1580; // float
    constexpr std::ptrdiff_t m_flHitHeading = 0x1584; // float
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x1588; // int32_t
    constexpr std::ptrdiff_t m_iHostagesKilled = 0x158C; // int32_t
    constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1590; // Vector
    constexpr std::ptrdiff_t m_flFlashDuration = 0x159C; // float
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x15A0; // float
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x15A4; // float
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x15A8; // int32_t
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x15AC; // bool
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x15B0; // float
    constexpr std::ptrdiff_t m_bStrafing = 0x15B4; // bool
    constexpr std::ptrdiff_t m_lastStandingPos = 0x15B8; // Vector
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x15C4; // float
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x15C8; // CountdownTimer
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x15E0; // Vector
    constexpr std::ptrdiff_t m_lastLadderPos = 0x15EC; // Vector
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x15F8; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1604; // float
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1608; // float
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x160C; // Vector
    constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1620; // int32_t
    constexpr std::ptrdiff_t m_angEyeAngles = 0x1624; // QAngle
    constexpr std::ptrdiff_t m_bVCollisionInitted = 0x1630; // bool
    constexpr std::ptrdiff_t m_storedSpawnPosition = 0x1634; // Vector
    constexpr std::ptrdiff_t m_storedSpawnAngle = 0x1640; // QAngle
    constexpr std::ptrdiff_t m_bIsSpawning = 0x164C; // bool
    constexpr std::ptrdiff_t m_bHideTargetID = 0x164D; // bool
    constexpr std::ptrdiff_t m_nNumDangerZoneDamageHits = 0x1650; // int32_t
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x1654; // bool
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x1655; // bool
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1658; // CEntityIndex
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x165C; // int32_t
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1660; // int32_t
    constexpr std::ptrdiff_t m_iAddonBits = 0x1664; // int32_t
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1668; // int32_t
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x166C; // int32_t
    constexpr std::ptrdiff_t m_currentDeafnessFilter = 0x1670; // CUtlStringToken
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisSpawn = 0x1674; // int32_t
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisRound = 0x1678; // int32_t
    constexpr std::ptrdiff_t m_NumEnemiesAtRoundStart = 0x167C; // int32_t
    constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1680; // bool
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1684; // uint32_t[5]
    constexpr std::ptrdiff_t m_iDeathFlags = 0x1698; // int32_t
    constexpr std::ptrdiff_t m_hPet = 0x169C; // CHandle<CChicken>
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1868; // uint16_t
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x186A; // uint16_t
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x186C; // uint16_t
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x1870; // int32_t
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1874; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1878; // float
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x187C; // Vector
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1888; // bool
    constexpr std::ptrdiff_t m_LastHitBox = 0x188C; // int32_t
    constexpr std::ptrdiff_t m_LastHealth = 0x1890; // int32_t
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x1894; // float
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x1898; // float
    constexpr std::ptrdiff_t m_pBot = 0x18A0; // CCSBot*
    constexpr std::ptrdiff_t m_bBotAllowActive = 0x18A8; // bool
    constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x18A9; // bool
}

namespace CCSPlayerResource { // CBaseEntity
    constexpr std::ptrdiff_t m_bHostageAlive = 0x7A8; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x7B4; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x7C0; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x7F0; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x7FC; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x808; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x818; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x828; // int32_t[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x838; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x839; // bool
}

namespace CCSPlayer_ActionTrackingServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_bIsRescuing = 0x23C; // bool
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
}

namespace CCSPlayer_BulletServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32_t
}

namespace CCSPlayer_BuyServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
}

namespace CCSPlayer_CameraServices { // CCSPlayerBase_CameraServices
}

namespace CCSPlayer_DamageReactServices { // CPlayerPawnComponent
}

namespace CCSPlayer_HostageServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<CBaseEntity>
}

namespace CCSPlayer_ItemServices { // CPlayer_ItemServices
    constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
    constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
    constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // bool
}

namespace CCSPlayer_MovementServices { // CPlayer_MovementServices_Humanoid
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x224; // float
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x228; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x234; // int32_t
    constexpr std::ptrdiff_t m_flDuckAmount = 0x238; // float
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x23C; // float
    constexpr std::ptrdiff_t m_bDuckOverride = 0x240; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x241; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x244; // float
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x248; // uint32_t
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x24C; // uint32_t
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x250; // uint32_t
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x254; // float
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x260; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x268; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x269; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x26A; // bool
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x278; // float[64][2]
    constexpr std::ptrdiff_t m_nTraceCount = 0x478; // int32_t
    constexpr std::ptrdiff_t m_StuckLast = 0x47C; // int32_t
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x480; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x484; // int32_t
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x488; // float
    constexpr std::ptrdiff_t m_vecForward = 0x48C; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x498; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x4A4; // Vector
    constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4B0; // int32_t
    constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4B4; // bool
    constexpr std::ptrdiff_t m_iFootsteps = 0x4B8; // int32_t
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4BC; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4C0; // float
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4C4; // float
    constexpr std::ptrdiff_t m_flJumpVel = 0x4C8; // float
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4CC; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4D0; // uint64_t
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4D8; // float
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4DC; // float
    constexpr std::ptrdiff_t m_flStamina = 0x4E0; // float
    constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4E4; // float
    constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4E8; // float
}

namespace CCSPlayer_PingServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
    constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
}

namespace CCSPlayer_RadioServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x40; // GameTime_t
    constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x44; // GameTime_t
    constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
    constexpr std::ptrdiff_t m_bIgnoreRadio = 0x58; // bool
}

namespace CCSPlayer_UseServices { // CPlayer_UseServices
    constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x40; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x44; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeStartedHoldingUse = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x4C; // GameTime_t
}

namespace CCSPlayer_ViewModelServices { // CPlayer_ViewModelServices
    constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
}

namespace CCSPlayer_WaterServices { // CPlayer_WaterServices
    constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x40; // float
    constexpr std::ptrdiff_t m_nDrownDmgRate = 0x44; // int32_t
    constexpr std::ptrdiff_t m_AirFinishedTime = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x4C; // float
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x50; // Vector
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x5C; // float
}

namespace CCSPlayer_WeaponServices { // CPlayer_WeaponServices
    constexpr std::ptrdiff_t m_flNextAttack = 0xA4; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xA8; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xA9; // bool
    constexpr std::ptrdiff_t m_hSavedWeapon = 0xAC; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_nTimeToMelee = 0xB0; // int32_t
    constexpr std::ptrdiff_t m_nTimeToSecondary = 0xB4; // int32_t
    constexpr std::ptrdiff_t m_nTimeToPrimary = 0xB8; // int32_t
    constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xBC; // int32_t
    constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xC0; // bool
    constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xC1; // bool
    constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xC2; // bool
    constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xC3; // bool
    constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC4; // uint32_t
    constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x460; // uint32_t
}

namespace CCSPulseServerFuncs_Globals {
}

namespace CCSSprite { // CSprite
}

namespace CCSTakeDamageInfoAPI {
}

namespace CCSTeam { // CTeam
    constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x860; // int32_t
    constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x864; // int32_t
    constexpr std::ptrdiff_t m_bSurrendered = 0x868; // bool
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x869; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0xA6C; // int32_t
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0xA70; // int32_t
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0xA74; // int32_t
    constexpr std::ptrdiff_t m_scoreOvertime = 0xA78; // int32_t
    constexpr std::ptrdiff_t m_szClanTeamname = 0xA7C; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0xB00; // uint32_t
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0xB04; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0xB0C; // char[8]
    constexpr std::ptrdiff_t m_flNextResourceTime = 0xB14; // float
    constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0xB18; // int32_t
}

namespace CCSWeaponBase { // CBasePlayerWeapon
    constexpr std::ptrdiff_t m_bRemoveable = 0xFE8; // bool
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xFF0; // float
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xFF4; // int32_t
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xFF8; // int32_t
    constexpr std::ptrdiff_t m_ePlayerFireEvent = 0xFFC; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x1000; // WeaponAttackType_t
    constexpr std::ptrdiff_t m_seqIdle = 0x1004; // HSequence
    constexpr std::ptrdiff_t m_seqFirePrimary = 0x1008; // HSequence
    constexpr std::ptrdiff_t m_seqFireSecondary = 0x100C; // HSequence
    constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x1010; // CUtlVector<HSequence>
    constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1028; // HSequence
    constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x102C; // int32_t
    constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1030; // HSequence[7]
    constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0x1058; // bool
    constexpr std::ptrdiff_t m_bRequireUseToTouch = 0x1059; // bool
    constexpr std::ptrdiff_t m_iState = 0x105C; // CSWeaponState_t
    constexpr std::ptrdiff_t m_flLastTimeInAir = 0x1060; // GameTime_t
    constexpr std::ptrdiff_t m_flLastDeployTime = 0x1064; // GameTime_t
    constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x1068; // int32_t
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x106C; // uint32_t
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0x1070; // bool
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x1090; // GameTime_t
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0x1094; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x1098; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0x10C0; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x10C4; // float
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x10C8; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x10D4; // float
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x10D8; // float
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x10DC; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x10E0; // float
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x10E4; // GameTime_t
    constexpr std::ptrdiff_t m_iRecoilIndex = 0x10E8; // int32_t
    constexpr std::ptrdiff_t m_flRecoilIndex = 0x10EC; // float
    constexpr std::ptrdiff_t m_bBurstMode = 0x10F0; // bool
    constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x10F4; // GameTick_t
    constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x10F8; // float
    constexpr std::ptrdiff_t m_bInReload = 0x10FC; // bool
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x10FD; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1100; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0x1104; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0x1105; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1108; // GameTime_t
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x110C; // int32_t
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1110; // float
    constexpr std::ptrdiff_t m_bCanBePickedUp = 0x1128; // bool
    constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0x1129; // bool
    constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0x112C; // GameTime_t
    constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0x1130; // GameTime_t
    constexpr std::ptrdiff_t m_hPrevOwner = 0x1134; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_nDropTick = 0x1138; // GameTick_t
    constexpr std::ptrdiff_t m_donated = 0x115C; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0x1160; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1164; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1165; // bool
    constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0x1166; // bool
    constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0x1168; // int32_t
    constexpr std::ptrdiff_t m_IronSightController = 0x1170; // CIronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0x1188; // int32_t
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x118C; // GameTime_t
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x1190; // int32_t
    constexpr std::ptrdiff_t m_flWatTickOffset = 0x1194; // float
}

namespace CCSWeaponBaseAPI {
}

namespace CCSWeaponBaseGun { // CCSWeaponBase
    constexpr std::ptrdiff_t m_zoomLevel = 0x1198; // int32_t
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x119C; // int32_t
    constexpr std::ptrdiff_t m_silencedModelIndex = 0x11A8; // int32_t
    constexpr std::ptrdiff_t m_inPrecache = 0x11AC; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x11AD; // bool
    constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0x11AE; // bool
    constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0x11AF; // bool
    constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0x11B0; // bool
    constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0x11B1; // bool
}

namespace CCSWeaponBaseVData { // CBasePlayerWeaponVData
    constexpr std::ptrdiff_t m_WeaponType = 0x248; // CSWeaponType
    constexpr std::ptrdiff_t m_WeaponCategory = 0x24C; // CSWeaponCategory
    constexpr std::ptrdiff_t m_szViewModel = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szPlayerModel = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szMagazineModel = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szHeatEffect = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szTracerParticle = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_GearSlot = 0xBF0; // gear_slot_t
    constexpr std::ptrdiff_t m_GearSlotPosition = 0xBF4; // int32_t
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
    constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xC00; // CUtlString
    constexpr std::ptrdiff_t m_nPrice = 0xC08; // int32_t
    constexpr std::ptrdiff_t m_nKillAward = 0xC0C; // int32_t
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC10; // int32_t
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC14; // int32_t
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC18; // bool
    constexpr std::ptrdiff_t m_bHasBurstMode = 0xC19; // bool
    constexpr std::ptrdiff_t m_bIsRevolver = 0xC1A; // bool
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC1B; // bool
    constexpr std::ptrdiff_t m_szName = 0xC20; // CGlobalSymbol
    constexpr std::ptrdiff_t m_szAnimExtension = 0xC28; // CUtlString
    constexpr std::ptrdiff_t m_eSilencerType = 0xC30; // CSWeaponSilencerType
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC34; // int32_t
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC38; // int32_t
    constexpr std::ptrdiff_t m_bIsFullAuto = 0xC3C; // bool
    constexpr std::ptrdiff_t m_nNumBullets = 0xC40; // int32_t
    constexpr std::ptrdiff_t m_flCycleTime = 0xC44; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xC4C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flSpread = 0xC54; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC5C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC64; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC6C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC74; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC7C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC84; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC8C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngle = 0xC94; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC9C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xCA4; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xCAC; // CFiringModeFloat
    constexpr std::ptrdiff_t m_nTracerFrequency = 0xCB4; // CFiringModeInt
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCBC; // float
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCC0; // float
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCC4; // float
    constexpr std::ptrdiff_t m_nRecoilSeed = 0xCC8; // int32_t
    constexpr std::ptrdiff_t m_nSpreadSeed = 0xCCC; // int32_t
    constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCD0; // float
    constexpr std::ptrdiff_t m_flIdleInterval = 0xCD4; // float
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCD8; // float
    constexpr std::ptrdiff_t m_flHeatPerShot = 0xCDC; // float
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCE0; // float
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCE4; // float
    constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCE8; // float
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCF0; // CUtlString
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCF8; // bool
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCF9; // bool
    constexpr std::ptrdiff_t m_nZoomLevels = 0xCFC; // int32_t
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0xD00; // int32_t
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0xD04; // int32_t
    constexpr std::ptrdiff_t m_flZoomTime0 = 0xD08; // float
    constexpr std::ptrdiff_t m_flZoomTime1 = 0xD0C; // float
    constexpr std::ptrdiff_t m_flZoomTime2 = 0xD10; // float
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD14; // float
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD18; // float
    constexpr std::ptrdiff_t m_flIronSightFOV = 0xD1C; // float
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD20; // float
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD24; // float
    constexpr std::ptrdiff_t m_angPivotAngle = 0xD28; // QAngle
    constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD34; // Vector
    constexpr std::ptrdiff_t m_nDamage = 0xD40; // int32_t
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD44; // float
    constexpr std::ptrdiff_t m_flArmorRatio = 0xD48; // float
    constexpr std::ptrdiff_t m_flPenetration = 0xD4C; // float
    constexpr std::ptrdiff_t m_flRange = 0xD50; // float
    constexpr std::ptrdiff_t m_flRangeModifier = 0xD54; // float
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD58; // float
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD5C; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD60; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD64; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD68; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD6C; // float
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD70; // int32_t
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD74; // int32_t
    constexpr std::ptrdiff_t m_flThrowVelocity = 0xD78; // float
    constexpr std::ptrdiff_t m_vSmokeColor = 0xD7C; // Vector
    constexpr std::ptrdiff_t m_szAnimClass = 0xD88; // CGlobalSymbol
}

namespace CCSWeaponBaseVDataAPI {
}

namespace CChangeLevel { // CBaseTrigger
    constexpr std::ptrdiff_t m_sMapName = 0xBA0; // CUtlString
    constexpr std::ptrdiff_t m_sLandmarkName = 0xBA8; // CUtlString
    constexpr std::ptrdiff_t m_OnChangeLevel = 0xBB0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bTouched = 0xBD8; // bool
    constexpr std::ptrdiff_t m_bNoTouch = 0xBD9; // bool
    constexpr std::ptrdiff_t m_bNewChapter = 0xBDA; // bool
    constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0xBDB; // bool
}

namespace CChicken { // CDynamicProp
    constexpr std::ptrdiff_t m_AttributeManager = 0xE88; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1150; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x1154; // uint32_t
    constexpr std::ptrdiff_t m_updateTimer = 0x1158; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckAnchor = 0x1170; // Vector
    constexpr std::ptrdiff_t m_stuckTimer = 0x1180; // CountdownTimer
    constexpr std::ptrdiff_t m_collisionStuckTimer = 0x1198; // CountdownTimer
    constexpr std::ptrdiff_t m_isOnGround = 0x11B0; // bool
    constexpr std::ptrdiff_t m_vFallVelocity = 0x11B4; // Vector
    constexpr std::ptrdiff_t m_activity = 0x11C0; // ChickenActivity
    constexpr std::ptrdiff_t m_activityTimer = 0x11C8; // CountdownTimer
    constexpr std::ptrdiff_t m_turnRate = 0x11E0; // float
    constexpr std::ptrdiff_t m_fleeFrom = 0x11E4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0x11E8; // CountdownTimer
    constexpr std::ptrdiff_t m_startleTimer = 0x1200; // CountdownTimer
    constexpr std::ptrdiff_t m_vocalizeTimer = 0x1218; // CountdownTimer
    constexpr std::ptrdiff_t m_flWhenZombified = 0x1230; // GameTime_t
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1234; // bool
    constexpr std::ptrdiff_t m_leader = 0x1238; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_reuseTimer = 0x1240; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0x1258; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0x1260; // CountdownTimer
    constexpr std::ptrdiff_t m_flLastJumpTime = 0x1278; // float
    constexpr std::ptrdiff_t m_bInJump = 0x127C; // bool
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0x127D; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x3288; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x32A0; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x3330; // CountdownTimer
    constexpr std::ptrdiff_t m_vecPathGoal = 0x3350; // Vector
    constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x335C; // GameTime_t
    constexpr std::ptrdiff_t m_followMinuteTimer = 0x3360; // CountdownTimer
    constexpr std::ptrdiff_t m_vecLastEggPoopPosition = 0x3378; // Vector
    constexpr std::ptrdiff_t m_vecEggsPooped = 0x3388; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x33A8; // CountdownTimer
}

namespace CChicken_GraphController { // CAnimGraphControllerBase
    constexpr std::ptrdiff_t m_pszActivity = 0x18; // CAnimGraphParamRef<char*>
}

namespace CCollisionProperty {
    constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
    constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
    constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8_t
    constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
    constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8_t
    constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8_t
    constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8_t
    constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
    constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float
}

namespace CColorCorrection { // CBaseEntity
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x7A8; // float
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x7AC; // float
    constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x7B0; // float
    constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x7B4; // float
    constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x7B8; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x7BC; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxWeight = 0x7C0; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x7C4; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x7C5; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x7C6; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x7C7; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x7C8; // bool
    constexpr std::ptrdiff_t m_MinFalloff = 0x7CC; // float
    constexpr std::ptrdiff_t m_MaxFalloff = 0x7D0; // float
    constexpr std::ptrdiff_t m_flCurWeight = 0x7D4; // float
    constexpr std::ptrdiff_t m_netlookupFilename = 0x7D8; // char[512]
    constexpr std::ptrdiff_t m_lookupFilename = 0x9D8; // CUtlSymbolLarge
}

namespace CColorCorrectionVolume { // CBaseTrigger
    constexpr std::ptrdiff_t m_bEnabled = 0xB99; // bool
    constexpr std::ptrdiff_t m_MaxWeight = 0xB9C; // float
    constexpr std::ptrdiff_t m_FadeDuration = 0xBA0; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0xBA4; // bool
    constexpr std::ptrdiff_t m_Weight = 0xBA8; // float
    constexpr std::ptrdiff_t m_lookupFilename = 0xBAC; // char[512]
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xDAC; // float
    constexpr std::ptrdiff_t m_LastEnterTime = 0xDB0; // GameTime_t
    constexpr std::ptrdiff_t m_LastExitWeight = 0xDB4; // float
    constexpr std::ptrdiff_t m_LastExitTime = 0xDB8; // GameTime_t
}

namespace CCommentaryAuto { // CBaseEntity
    constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x7F8; // CEntityIOOutput
}

namespace CCommentarySystem {
    constexpr std::ptrdiff_t m_bCommentaryConvarsChanging = 0x11; // bool
    constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12; // bool
    constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14; // GameTime_t
    constexpr std::ptrdiff_t m_iTeleportStage = 0x18; // int32_t
    constexpr std::ptrdiff_t m_bCheatState = 0x1C; // bool
    constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
    constexpr std::ptrdiff_t m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
    constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
    constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
    constexpr std::ptrdiff_t m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
}

namespace CCommentaryViewPosition { // CSprite
}

namespace CConstantForceController {
    constexpr std::ptrdiff_t m_linear = 0xC; // Vector
    constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
    constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
    constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
}

namespace CConstraintAnchor { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_massScale = 0xBF0; // float
}

namespace CCoopBonusCoin { // CDynamicProp
}

namespace CCopyRecipientFilter {
    constexpr std::ptrdiff_t m_Flags = 0x8; // int32_t
    constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
}

namespace CCredits { // CPointEntity
    constexpr std::ptrdiff_t m_OnCreditsDone = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x7D0; // bool
    constexpr std::ptrdiff_t m_flLogoLength = 0x7D4; // float
}

namespace CDEagle { // CCSWeaponBaseGun
}

namespace CDamageRecord {
    constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle<CCSPlayerPawnBase>
    constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle<CCSPlayerPawnBase>
    constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // CUtlString
    constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // uint64_t
    constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // uint64_t
    constexpr std::ptrdiff_t m_iDamage = 0x58; // int32_t
    constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_iNumHits = 0x60; // int32_t
    constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64; // int32_t
    constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68; // bool
    constexpr std::ptrdiff_t m_killType = 0x69; // EKillTypes_t
}

namespace CDebugHistory { // CBaseEntity
    constexpr std::ptrdiff_t m_nNpcEvents = 0x47E8; // int32_t
}

namespace CDecoyGrenade { // CBaseCSGrenade
}

namespace CDecoyProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nDecoyShotTick = 0xDA0; // int32_t
    constexpr std::ptrdiff_t m_shotsRemaining = 0xDA4; // int32_t
    constexpr std::ptrdiff_t m_fExpireTime = 0xDA8; // GameTime_t
    constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xDB8; // uint16_t
}

namespace CDynamicLight { // CBaseModelEntity
    constexpr std::ptrdiff_t m_ActualFlags = 0x9F8; // uint8_t
    constexpr std::ptrdiff_t m_Flags = 0x9F9; // uint8_t
    constexpr std::ptrdiff_t m_LightStyle = 0x9FA; // uint8_t
    constexpr std::ptrdiff_t m_On = 0x9FB; // bool
    constexpr std::ptrdiff_t m_Radius = 0x9FC; // float
    constexpr std::ptrdiff_t m_Exponent = 0xA00; // int32_t
    constexpr std::ptrdiff_t m_InnerAngle = 0xA04; // float
    constexpr std::ptrdiff_t m_OuterAngle = 0xA08; // float
    constexpr std::ptrdiff_t m_SpotRadius = 0xA0C; // float
}

namespace CDynamicProp { // CBreakableProp
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xD70; // bool
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xD71; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xD72; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xD78; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0xDA0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xDC8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xDF0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xE18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszIdleAnim = 0xE40; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xE48; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0xE4C; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0xE4D; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xE4E; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xE4F; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0xE50; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xE51; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xE54; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0xE58; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xE5C; // int32_t
    constexpr std::ptrdiff_t m_glowColor = 0xE60; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0xE64; // int32_t
}

namespace CDynamicPropAPI {
}

namespace CDynamicPropAlias_cable_dynamic { // CDynamicProp
}

namespace CDynamicPropAlias_dynamic_prop { // CDynamicProp
}

namespace CDynamicPropAlias_prop_dynamic_override { // CDynamicProp
}

namespace CEconEntity { // CBaseFlex
    constexpr std::ptrdiff_t m_AttributeManager = 0xC90; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xF58; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xF5C; // uint32_t
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xF60; // int32_t
    constexpr std::ptrdiff_t m_nFallbackSeed = 0xF64; // int32_t
    constexpr std::ptrdiff_t m_flFallbackWear = 0xF68; // float
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xF6C; // int32_t
    constexpr std::ptrdiff_t m_hOldProvidee = 0xF70; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iOldOwnerClass = 0xF74; // int32_t
}

namespace CEconItemAttribute {
    constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_flValue = 0x34; // float
    constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float
    constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
}

namespace CEconItemView { // IEconItemInterface
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38; // uint16_t
    constexpr std::ptrdiff_t m_iEntityQuality = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_iEntityLevel = 0x40; // uint32_t
    constexpr std::ptrdiff_t m_iItemID = 0x48; // uint64_t
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x50; // uint32_t
    constexpr std::ptrdiff_t m_iItemIDLow = 0x54; // uint32_t
    constexpr std::ptrdiff_t m_iAccountID = 0x58; // uint32_t
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x5C; // uint32_t
    constexpr std::ptrdiff_t m_bInitialized = 0x68; // bool
    constexpr std::ptrdiff_t m_AttributeList = 0x70; // CAttributeList
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
    constexpr std::ptrdiff_t m_szCustomName = 0x130; // char[161]
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1D1; // char[161]
}

namespace CEconWearable { // CEconEntity
    constexpr std::ptrdiff_t m_nForceSkin = 0xF78; // int32_t
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0xF7C; // bool
}

namespace CEffectData {
    constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
    constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
    constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
    constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
    constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
    constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
    constexpr std::ptrdiff_t m_flScale = 0x40; // float
    constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float
    constexpr std::ptrdiff_t m_flRadius = 0x48; // float
    constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
    constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32_t
    constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8_t
    constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16_t
    constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16_t
    constexpr std::ptrdiff_t m_nColor = 0x62; // uint8_t
    constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8_t
    constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
    constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16_t
    constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8_t
}

namespace CEnableMotionFixup { // CBaseEntity
}

namespace CEntityBlocker { // CBaseModelEntity
}

namespace CEntityComponent {
}

namespace CEntityDissolve { // CBaseModelEntity
    constexpr std::ptrdiff_t m_flFadeInStart = 0x9F8; // float
    constexpr std::ptrdiff_t m_flFadeInLength = 0x9FC; // float
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xA00; // float
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xA04; // float
    constexpr std::ptrdiff_t m_flFadeOutStart = 0xA08; // float
    constexpr std::ptrdiff_t m_flFadeOutLength = 0xA0C; // float
    constexpr std::ptrdiff_t m_flStartTime = 0xA10; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0xA14; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0xA18; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0xA24; // uint32_t
}

namespace CEntityFlame { // CBaseEntity
    constexpr std::ptrdiff_t m_hEntAttached = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bCheapEffect = 0x7AC; // bool
    constexpr std::ptrdiff_t m_flSize = 0x7B0; // float
    constexpr std::ptrdiff_t m_bUseHitboxes = 0x7B4; // bool
    constexpr std::ptrdiff_t m_iNumHitboxFires = 0x7B8; // int32_t
    constexpr std::ptrdiff_t m_flHitboxFireScale = 0x7BC; // float
    constexpr std::ptrdiff_t m_flLifetime = 0x7C0; // GameTime_t
    constexpr std::ptrdiff_t m_hAttacker = 0x7C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iDangerSound = 0x7C8; // int32_t
    constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x7CC; // float
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x7D0; // int32_t
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32_t
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flags = 0x30; // uint32_t
    constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32_t
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
    constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
}

namespace CEntitySubclassVDataBase {
}

namespace CEnvBeam { // CBeam
    constexpr std::ptrdiff_t m_active = 0xA98; // int32_t
    constexpr std::ptrdiff_t m_spriteTexture = 0xAA0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_iszStartEntity = 0xAA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEndEntity = 0xAB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_life = 0xAB8; // float
    constexpr std::ptrdiff_t m_boltWidth = 0xABC; // float
    constexpr std::ptrdiff_t m_noiseAmplitude = 0xAC0; // float
    constexpr std::ptrdiff_t m_speed = 0xAC4; // int32_t
    constexpr std::ptrdiff_t m_restrike = 0xAC8; // float
    constexpr std::ptrdiff_t m_iszSpriteName = 0xAD0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_frameStart = 0xAD8; // int32_t
    constexpr std::ptrdiff_t m_vEndPointWorld = 0xADC; // Vector
    constexpr std::ptrdiff_t m_vEndPointRelative = 0xAE8; // Vector
    constexpr std::ptrdiff_t m_radius = 0xAF4; // float
    constexpr std::ptrdiff_t m_TouchType = 0xAF8; // Touch_t
    constexpr std::ptrdiff_t m_iFilterName = 0xB00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0xB08; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszDecal = 0xB10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnTouchedByEntity = 0xB18; // CEntityIOOutput
}

namespace CEnvBeverage { // CBaseEntity
    constexpr std::ptrdiff_t m_CanInDispenser = 0x7A8; // bool
    constexpr std::ptrdiff_t m_nBeverageType = 0x7AC; // int32_t
}

namespace CEnvCombinedLightProbeVolume { // CBaseEntity
    constexpr std::ptrdiff_t m_Color = 0x1800; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x1804; // float
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x1808; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1810; // bool
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1818; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1820; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1828; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1830; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x1838; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x1844; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x1850; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x1854; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1858; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x185C; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x1860; // bool
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x1864; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1868; // Vector
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1874; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1878; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x187C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1880; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1884; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1888; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x18A1; // bool
}

namespace CEnvCubemap { // CBaseEntity
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x828; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x830; // bool
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x834; // float
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x838; // Vector
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x844; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x850; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x854; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x858; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x85C; // int32_t
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x860; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x864; // Vector
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x870; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x874; // bool
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x875; // bool
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x876; // bool
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x877; // bool
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x878; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x888; // bool
}

namespace CEnvCubemapBox { // CEnvCubemap
}

namespace CEnvCubemapFog { // CBaseEntity
    constexpr std::ptrdiff_t m_flEndDistance = 0x7A8; // float
    constexpr std::ptrdiff_t m_flStartDistance = 0x7AC; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x7B0; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x7B4; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x7B8; // float
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x7BC; // float
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x7C0; // float
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x7C4; // float
    constexpr std::ptrdiff_t m_flLODBias = 0x7C8; // float
    constexpr std::ptrdiff_t m_bActive = 0x7CC; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x7CD; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x7D0; // float
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x7D4; // int32_t
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x7F0; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x7F1; // bool
}

namespace CEnvDecal { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hDecalMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_flWidth = 0xA00; // float
    constexpr std::ptrdiff_t m_flHeight = 0xA04; // float
    constexpr std::ptrdiff_t m_flDepth = 0xA08; // float
    constexpr std::ptrdiff_t m_nRenderOrder = 0xA0C; // uint32_t
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0xA10; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xA11; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0xA12; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0xA14; // float
}

namespace CEnvDetailController { // CBaseEntity
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x7A8; // float
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x7AC; // float
}

namespace CEnvEntityIgniter { // CBaseEntity
    constexpr std::ptrdiff_t m_flLifetime = 0x7A8; // float
}

namespace CEnvEntityMaker { // CPointEntity
    constexpr std::ptrdiff_t m_vecEntityMins = 0x7A8; // Vector
    constexpr std::ptrdiff_t m_vecEntityMaxs = 0x7B4; // Vector
    constexpr std::ptrdiff_t m_hCurrentInstance = 0x7C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hCurrentBlocker = 0x7C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x7C8; // Vector
    constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x7D4; // QAngle
    constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x7E0; // float
    constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x7E4; // float
    constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x7E8; // bool
    constexpr std::ptrdiff_t m_iszTemplate = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x820; // CEntityIOOutput
}

namespace CEnvExplosion { // CModelPointEntity
    constexpr std::ptrdiff_t m_iMagnitude = 0x9F8; // int32_t
    constexpr std::ptrdiff_t m_flPlayerDamage = 0x9FC; // float
    constexpr std::ptrdiff_t m_iRadiusOverride = 0xA00; // int32_t
    constexpr std::ptrdiff_t m_flInnerRadius = 0xA04; // float
    constexpr std::ptrdiff_t m_spriteScale = 0xA08; // int32_t
    constexpr std::ptrdiff_t m_flDamageForce = 0xA0C; // float
    constexpr std::ptrdiff_t m_hInflictor = 0xA10; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iCustomDamageType = 0xA14; // int32_t
    constexpr std::ptrdiff_t m_iszExplosionType = 0xA20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomEffectName = 0xA28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomSoundName = 0xA30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iClassIgnore = 0xA38; // Class_T
    constexpr std::ptrdiff_t m_iClassIgnore2 = 0xA3C; // Class_T
    constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0xA40; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hEntityIgnore = 0xA48; // CHandle<CBaseEntity>
}

namespace CEnvFade { // CLogicalEntity
    constexpr std::ptrdiff_t m_fadeColor = 0x7A8; // Color
    constexpr std::ptrdiff_t m_Duration = 0x7AC; // float
    constexpr std::ptrdiff_t m_HoldDuration = 0x7B0; // float
    constexpr std::ptrdiff_t m_OnBeginFade = 0x7B8; // CEntityIOOutput
}

namespace CEnvFireSensor { // CBaseEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_bHeatAtLevel = 0x7A9; // bool
    constexpr std::ptrdiff_t m_radius = 0x7AC; // float
    constexpr std::ptrdiff_t m_targetLevel = 0x7B0; // float
    constexpr std::ptrdiff_t m_targetTime = 0x7B4; // float
    constexpr std::ptrdiff_t m_levelTime = 0x7B8; // float
    constexpr std::ptrdiff_t m_OnHeatLevelStart = 0x7C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHeatLevelEnd = 0x7E8; // CEntityIOOutput
}

namespace CEnvFireSource { // CBaseEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_radius = 0x7AC; // float
    constexpr std::ptrdiff_t m_damage = 0x7B0; // float
}

namespace CEnvFunnel { // CBaseEntity
}

namespace CEnvGlobal { // CLogicalEntity
    constexpr std::ptrdiff_t m_outCounter = 0x7A8; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_globalstate = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_triggermode = 0x7D8; // int32_t
    constexpr std::ptrdiff_t m_initialstate = 0x7DC; // int32_t
    constexpr std::ptrdiff_t m_counter = 0x7E0; // int32_t
}

namespace CEnvHudHint { // CPointEntity
    constexpr std::ptrdiff_t m_iszMessage = 0x7A8; // CUtlSymbolLarge
}

namespace CEnvInstructorHint { // CPointEntity
    constexpr std::ptrdiff_t m_iszName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszReplace_Key = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x7C0; // int32_t
    constexpr std::ptrdiff_t m_iDisplayLimit = 0x7C4; // int32_t
    constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCaption = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszActivatorCaption = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Color = 0x7E8; // Color
    constexpr std::ptrdiff_t m_fIconOffset = 0x7EC; // float
    constexpr std::ptrdiff_t m_fRange = 0x7F0; // float
    constexpr std::ptrdiff_t m_iPulseOption = 0x7F4; // uint8_t
    constexpr std::ptrdiff_t m_iAlphaOption = 0x7F5; // uint8_t
    constexpr std::ptrdiff_t m_iShakeOption = 0x7F6; // uint8_t
    constexpr std::ptrdiff_t m_bStatic = 0x7F7; // bool
    constexpr std::ptrdiff_t m_bNoOffscreen = 0x7F8; // bool
    constexpr std::ptrdiff_t m_bForceCaption = 0x7F9; // bool
    constexpr std::ptrdiff_t m_iInstanceType = 0x7FC; // int32_t
    constexpr std::ptrdiff_t m_bSuppressRest = 0x800; // bool
    constexpr std::ptrdiff_t m_iszBinding = 0x808; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x810; // bool
    constexpr std::ptrdiff_t m_bAutoStart = 0x811; // bool
    constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x812; // bool
}

namespace CEnvInstructorVRHint { // CPointEntity
    constexpr std::ptrdiff_t m_iszName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x7B8; // int32_t
    constexpr std::ptrdiff_t m_iszCaption = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStartSound = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iLayoutFileType = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iAttachType = 0x7E0; // int32_t
    constexpr std::ptrdiff_t m_flHeightOffset = 0x7E4; // float
}

namespace CEnvLaser { // CBeam
    constexpr std::ptrdiff_t m_iszLaserTarget = 0xA98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pSprite = 0xAA0; // CSprite*
    constexpr std::ptrdiff_t m_iszSpriteName = 0xAA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_firePosition = 0xAB0; // Vector
    constexpr std::ptrdiff_t m_flStartFrame = 0xABC; // float
}

namespace CEnvLightProbeVolume { // CBaseEntity
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1780; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1788; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1790; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1798; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x17A0; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x17AC; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x17B8; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x17BC; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x17C0; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x17C4; // bool
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x17C8; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x17CC; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x17D0; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x17D4; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x17D8; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x17DC; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x17E9; // bool
}

namespace CEnvMicrophone { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x7AC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nSoundMask = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_flSensitivity = 0x7B4; // float
    constexpr std::ptrdiff_t m_flSmoothFactor = 0x7B8; // float
    constexpr std::ptrdiff_t m_flMaxRange = 0x7BC; // float
    constexpr std::ptrdiff_t m_iszSpeakerName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSpeaker = 0x7C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bAvoidFeedback = 0x7CC; // bool
    constexpr std::ptrdiff_t m_iSpeakerDSPPreset = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_iszListenFilter = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hListenFilter = 0x7E0; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_SoundLevel = 0x7E8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnRoutedSound = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHeardSound = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_szLastSound = 0x860; // char[256]
    constexpr std::ptrdiff_t m_iLastRoutedFrame = 0x960; // int32_t
}

namespace CEnvMuzzleFlash { // CPointEntity
    constexpr std::ptrdiff_t m_flScale = 0x7A8; // float
    constexpr std::ptrdiff_t m_iszParentAttachment = 0x7B0; // CUtlSymbolLarge
}

namespace CEnvParticleGlow { // CParticleSystem
    constexpr std::ptrdiff_t m_flAlphaScale = 0xF70; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0xF74; // float
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0xF78; // float
    constexpr std::ptrdiff_t m_ColorTint = 0xF7C; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0xF80; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

namespace CEnvProjectedTexture { // CModelPointEntity
    constexpr std::ptrdiff_t m_hTargetEntity = 0x9F8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bState = 0x9FC; // bool
    constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x9FD; // bool
    constexpr std::ptrdiff_t m_flLightFOV = 0xA00; // float
    constexpr std::ptrdiff_t m_bEnableShadows = 0xA04; // bool
    constexpr std::ptrdiff_t m_bSimpleProjection = 0xA05; // bool
    constexpr std::ptrdiff_t m_bLightOnlyTarget = 0xA06; // bool
    constexpr std::ptrdiff_t m_bLightWorld = 0xA07; // bool
    constexpr std::ptrdiff_t m_bCameraSpace = 0xA08; // bool
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xA0C; // float
    constexpr std::ptrdiff_t m_LightColor = 0xA10; // Color
    constexpr std::ptrdiff_t m_flIntensity = 0xA14; // float
    constexpr std::ptrdiff_t m_flLinearAttenuation = 0xA18; // float
    constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0xA1C; // float
    constexpr std::ptrdiff_t m_bVolumetric = 0xA20; // bool
    constexpr std::ptrdiff_t m_flNoiseStrength = 0xA24; // float
    constexpr std::ptrdiff_t m_flFlashlightTime = 0xA28; // float
    constexpr std::ptrdiff_t m_nNumPlanes = 0xA2C; // uint32_t
    constexpr std::ptrdiff_t m_flPlaneOffset = 0xA30; // float
    constexpr std::ptrdiff_t m_flVolumetricIntensity = 0xA34; // float
    constexpr std::ptrdiff_t m_flColorTransitionTime = 0xA38; // float
    constexpr std::ptrdiff_t m_flAmbient = 0xA3C; // float
    constexpr std::ptrdiff_t m_SpotlightTextureName = 0xA40; // char[512]
    constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0xC40; // int32_t
    constexpr std::ptrdiff_t m_nShadowQuality = 0xC44; // uint32_t
    constexpr std::ptrdiff_t m_flNearZ = 0xC48; // float
    constexpr std::ptrdiff_t m_flFarZ = 0xC4C; // float
    constexpr std::ptrdiff_t m_flProjectionSize = 0xC50; // float
    constexpr std::ptrdiff_t m_flRotation = 0xC54; // float
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0xC58; // bool
}

namespace CEnvScreenOverlay { // CPointEntity
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x7A8; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x7F8; // float[10]
    constexpr std::ptrdiff_t m_flStartTime = 0x820; // GameTime_t
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x824; // int32_t
    constexpr std::ptrdiff_t m_bIsActive = 0x828; // bool
}

namespace CEnvShake { // CPointEntity
    constexpr std::ptrdiff_t m_limitToEntity = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Amplitude = 0x7B0; // float
    constexpr std::ptrdiff_t m_Frequency = 0x7B4; // float
    constexpr std::ptrdiff_t m_Duration = 0x7B8; // float
    constexpr std::ptrdiff_t m_Radius = 0x7BC; // float
    constexpr std::ptrdiff_t m_stopTime = 0x7C0; // GameTime_t
    constexpr std::ptrdiff_t m_nextShake = 0x7C4; // GameTime_t
    constexpr std::ptrdiff_t m_currentAmp = 0x7C8; // float
    constexpr std::ptrdiff_t m_maxForce = 0x7CC; // Vector
    constexpr std::ptrdiff_t m_shakeCallback = 0x7E0; // CPhysicsShake
}

namespace CEnvSky { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_bStartDisabled = 0xA08; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0xA09; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xA0D; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xA14; // float
    constexpr std::ptrdiff_t m_nFogType = 0xA18; // int32_t
    constexpr std::ptrdiff_t m_flFogMinStart = 0xA1C; // float
    constexpr std::ptrdiff_t m_flFogMinEnd = 0xA20; // float
    constexpr std::ptrdiff_t m_flFogMaxStart = 0xA24; // float
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0xA28; // float
    constexpr std::ptrdiff_t m_bEnabled = 0xA2C; // bool
}

namespace CEnvSoundscape { // CServerOnlyEntity
    constexpr std::ptrdiff_t m_OnPlay = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flRadius = 0x7D0; // float
    constexpr std::ptrdiff_t m_soundscapeName = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundEventName = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x7E8; // bool
    constexpr std::ptrdiff_t m_soundscapeIndex = 0x7EC; // int32_t
    constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x7F0; // int32_t
    constexpr std::ptrdiff_t m_soundEventHash = 0x7F4; // uint32_t
    constexpr std::ptrdiff_t m_positionNames = 0x7F8; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_hProxySoundscape = 0x838; // CHandle<CEnvSoundscape>
    constexpr std::ptrdiff_t m_bDisabled = 0x83C; // bool
}

namespace CEnvSoundscapeAlias_snd_soundscape { // CEnvSoundscape
}

namespace CEnvSoundscapeProxy { // CEnvSoundscape
    constexpr std::ptrdiff_t m_MainSoundscapeName = 0x840; // CUtlSymbolLarge
}

namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy { // CEnvSoundscapeProxy
}

namespace CEnvSoundscapeTriggerable { // CEnvSoundscape
}

namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable { // CEnvSoundscapeTriggerable
}

namespace CEnvSpark { // CPointEntity
    constexpr std::ptrdiff_t m_flDelay = 0x7A8; // float
    constexpr std::ptrdiff_t m_nMagnitude = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_nTrailLength = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_nType = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_OnSpark = 0x7B8; // CEntityIOOutput
}

namespace CEnvSplash { // CPointEntity
    constexpr std::ptrdiff_t m_flScale = 0x7A8; // float
}

namespace CEnvTilt { // CPointEntity
    constexpr std::ptrdiff_t m_Duration = 0x7A8; // float
    constexpr std::ptrdiff_t m_Radius = 0x7AC; // float
    constexpr std::ptrdiff_t m_TiltTime = 0x7B0; // float
    constexpr std::ptrdiff_t m_stopTime = 0x7B4; // GameTime_t
}

namespace CEnvTracer { // CPointEntity
    constexpr std::ptrdiff_t m_vecEnd = 0x7A8; // Vector
    constexpr std::ptrdiff_t m_flDelay = 0x7B4; // float
}

namespace CEnvViewPunch { // CPointEntity
    constexpr std::ptrdiff_t m_flRadius = 0x7A8; // float
    constexpr std::ptrdiff_t m_angViewPunch = 0x7AC; // QAngle
}

namespace CEnvVolumetricFogController { // CBaseEntity
    constexpr std::ptrdiff_t m_flScattering = 0x7A8; // float
    constexpr std::ptrdiff_t m_flAnisotropy = 0x7AC; // float
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x7B0; // float
    constexpr std::ptrdiff_t m_flDrawDistance = 0x7B4; // float
    constexpr std::ptrdiff_t m_flFadeInStart = 0x7B8; // float
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x7BC; // float
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x7C0; // float
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x7C4; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x7C8; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x7CC; // int32_t
    constexpr std::ptrdiff_t m_vBoxMins = 0x7D0; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x7DC; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x7E8; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x7EC; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x7F0; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x7F4; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x7F8; // float
    constexpr std::ptrdiff_t m_flStartScattering = 0x7FC; // float
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x800; // float
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x804; // float
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x808; // float
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x80C; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x810; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x811; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x812; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x818; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x820; // int32_t
    constexpr std::ptrdiff_t m_bFirstTime = 0x824; // bool
}

namespace CEnvVolumetricFogVolume { // CBaseEntity
    constexpr std::ptrdiff_t m_bActive = 0x7A8; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x7AC; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x7B8; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x7C4; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x7C8; // float
    constexpr std::ptrdiff_t m_nFalloffShape = 0x7CC; // int32_t
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x7D0; // float
}

namespace CEnvWind { // CBaseEntity
    constexpr std::ptrdiff_t m_EnvWindShared = 0x7A8; // CEnvWindShared
}

namespace CEnvWindShared {
    constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32_t
    constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16_t
    constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16_t
    constexpr std::ptrdiff_t m_windRadius = 0x14; // int32_t
    constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16_t
    constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16_t
    constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float
    constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float
    constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float
    constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16_t
    constexpr std::ptrdiff_t m_location = 0x2C; // Vector
    constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32_t
    constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float
    constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
    constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
    constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
    constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16_t
    constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float
    constexpr std::ptrdiff_t m_OnGustStart = 0x70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGustEnd = 0x98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flVariationTime = 0xC0; // GameTime_t
    constexpr std::ptrdiff_t m_flSwayTime = 0xC4; // GameTime_t
    constexpr std::ptrdiff_t m_flSimTime = 0xC8; // GameTime_t
    constexpr std::ptrdiff_t m_flSwitchTime = 0xCC; // GameTime_t
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0xD0; // float
    constexpr std::ptrdiff_t m_bGusting = 0xD4; // bool
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0xD8; // float
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0xDC; // float
    constexpr std::ptrdiff_t m_iEntIndex = 0xE0; // CEntityIndex
}

namespace CEnvWindShared_WindAveEvent_t {
    constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float
}

namespace CEnvWindShared_WindVariationEvent_t {
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float
}

namespace CFilterAttributeInt { // CBaseFilter
    constexpr std::ptrdiff_t m_sAttributeName = 0x800; // CUtlStringToken
}

namespace CFilterClass { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterClass = 0x800; // CUtlSymbolLarge
}

namespace CFilterContext { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterContext = 0x800; // CUtlSymbolLarge
}

namespace CFilterEnemy { // CBaseFilter
    constexpr std::ptrdiff_t m_iszEnemyName = 0x800; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x808; // float
    constexpr std::ptrdiff_t m_flOuterRadius = 0x80C; // float
    constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x810; // int32_t
    constexpr std::ptrdiff_t m_iszPlayerName = 0x818; // CUtlSymbolLarge
}

namespace CFilterLOS { // CBaseFilter
}

namespace CFilterMassGreater { // CBaseFilter
    constexpr std::ptrdiff_t m_fFilterMass = 0x800; // float
}

namespace CFilterModel { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterModel = 0x800; // CUtlSymbolLarge
}

namespace CFilterMultiple { // CBaseFilter
    constexpr std::ptrdiff_t m_nFilterType = 0x800; // filter_t
    constexpr std::ptrdiff_t m_iFilterName = 0x808; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_hFilter = 0x858; // CHandle<CBaseEntity>[10]
    constexpr std::ptrdiff_t m_nFilterCount = 0x880; // int32_t
}

namespace CFilterName { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterName = 0x800; // CUtlSymbolLarge
}

namespace CFilterProximity { // CBaseFilter
    constexpr std::ptrdiff_t m_flRadius = 0x800; // float
}

namespace CFire { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hEffect = 0x9F8; // CHandle<CBaseFire>
    constexpr std::ptrdiff_t m_hOwner = 0x9FC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nFireType = 0xA00; // int32_t
    constexpr std::ptrdiff_t m_flFuel = 0xA04; // float
    constexpr std::ptrdiff_t m_flDamageTime = 0xA08; // GameTime_t
    constexpr std::ptrdiff_t m_lastDamage = 0xA0C; // GameTime_t
    constexpr std::ptrdiff_t m_flFireSize = 0xA10; // float
    constexpr std::ptrdiff_t m_flLastNavUpdateTime = 0xA14; // GameTime_t
    constexpr std::ptrdiff_t m_flHeatLevel = 0xA18; // float
    constexpr std::ptrdiff_t m_flHeatAbsorb = 0xA1C; // float
    constexpr std::ptrdiff_t m_flDamageScale = 0xA20; // float
    constexpr std::ptrdiff_t m_flMaxHeat = 0xA24; // float
    constexpr std::ptrdiff_t m_flLastHeatLevel = 0xA28; // float
    constexpr std::ptrdiff_t m_flAttackTime = 0xA2C; // float
    constexpr std::ptrdiff_t m_bEnabled = 0xA30; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0xA31; // bool
    constexpr std::ptrdiff_t m_bDidActivate = 0xA32; // bool
    constexpr std::ptrdiff_t m_OnIgnited = 0xA38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExtinguished = 0xA60; // CEntityIOOutput
}

namespace CFireCrackerBlast { // CInferno
}

namespace CFireSmoke { // CBaseFire
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x7B8; // int32_t
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x7BC; // int32_t
}

namespace CFiringModeFloat {
    constexpr std::ptrdiff_t m_flValues = 0x0; // float[2]
}

namespace CFiringModeInt {
    constexpr std::ptrdiff_t m_nValues = 0x0; // int32_t[2]
}

namespace CFish { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_pool = 0xBF0; // CHandle<CFishPool>
    constexpr std::ptrdiff_t m_id = 0xBF4; // uint32_t
    constexpr std::ptrdiff_t m_x = 0xBF8; // float
    constexpr std::ptrdiff_t m_y = 0xBFC; // float
    constexpr std::ptrdiff_t m_z = 0xC00; // float
    constexpr std::ptrdiff_t m_angle = 0xC04; // float
    constexpr std::ptrdiff_t m_angleChange = 0xC08; // float
    constexpr std::ptrdiff_t m_forward = 0xC0C; // Vector
    constexpr std::ptrdiff_t m_perp = 0xC18; // Vector
    constexpr std::ptrdiff_t m_poolOrigin = 0xC24; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0xC30; // float
    constexpr std::ptrdiff_t m_speed = 0xC34; // float
    constexpr std::ptrdiff_t m_desiredSpeed = 0xC38; // float
    constexpr std::ptrdiff_t m_calmSpeed = 0xC3C; // float
    constexpr std::ptrdiff_t m_panicSpeed = 0xC40; // float
    constexpr std::ptrdiff_t m_avoidRange = 0xC44; // float
    constexpr std::ptrdiff_t m_turnTimer = 0xC48; // CountdownTimer
    constexpr std::ptrdiff_t m_turnClockwise = 0xC60; // bool
    constexpr std::ptrdiff_t m_goTimer = 0xC68; // CountdownTimer
    constexpr std::ptrdiff_t m_moveTimer = 0xC80; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0xC98; // CountdownTimer
    constexpr std::ptrdiff_t m_disperseTimer = 0xCB0; // CountdownTimer
    constexpr std::ptrdiff_t m_proximityTimer = 0xCC8; // CountdownTimer
    constexpr std::ptrdiff_t m_visible = 0xCE0; // CUtlVector<CFish*>
}

namespace CFishPool { // CBaseEntity
    constexpr std::ptrdiff_t m_fishCount = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_maxRange = 0x7B8; // float
    constexpr std::ptrdiff_t m_swimDepth = 0x7BC; // float
    constexpr std::ptrdiff_t m_waterLevel = 0x7C0; // float
    constexpr std::ptrdiff_t m_isDormant = 0x7C4; // bool
    constexpr std::ptrdiff_t m_fishes = 0x7C8; // CUtlVector<CHandle<CFish>>
    constexpr std::ptrdiff_t m_visTimer = 0x7E0; // CountdownTimer
}

namespace CFists { // CCSWeaponBase
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x1198; // bool
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x119C; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_bRestorePrevWep = 0x11A0; // bool
    constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0x11A4; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_hWeaponPrevious = 0x11A8; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0x11AC; // bool
    constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0x11AD; // bool
}

namespace CFlashbang { // CBaseCSGrenade
}

namespace CFlashbangProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_flTimeToDetonate = 0xD98; // float
    constexpr std::ptrdiff_t m_numOpponentsHit = 0xD9C; // uint8_t
    constexpr std::ptrdiff_t m_numTeammatesHit = 0xD9D; // uint8_t
}

namespace CFogController { // CBaseEntity
    constexpr std::ptrdiff_t m_fog = 0x7A8; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x810; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x814; // int32_t
}

namespace CFogTrigger { // CBaseTrigger
    constexpr std::ptrdiff_t m_fog = 0xBA0; // fogparams_t
}

namespace CFogVolume { // CServerOnlyModelEntity
    constexpr std::ptrdiff_t m_fogName = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_postProcessName = 0xA00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_colorCorrectionName = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0xA18; // bool
    constexpr std::ptrdiff_t m_bInFogVolumesList = 0xA19; // bool
}

namespace CFootstepControl { // CBaseTrigger
    constexpr std::ptrdiff_t m_source = 0xBA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0xBA8; // CUtlSymbolLarge
}

namespace CFootstepTableHandle {
}

namespace CFuncBrush { // CBaseModelEntity
    constexpr std::ptrdiff_t m_iSolidity = 0x9F8; // BrushSolidities_e
    constexpr std::ptrdiff_t m_iDisabled = 0x9FC; // int32_t
    constexpr std::ptrdiff_t m_bSolidBsp = 0xA00; // bool
    constexpr std::ptrdiff_t m_iszExcludedClass = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bInvertExclusion = 0xA10; // bool
    constexpr std::ptrdiff_t m_bScriptedMovement = 0xA11; // bool
}

namespace CFuncConveyor { // CBaseModelEntity
    constexpr std::ptrdiff_t m_szConveyorModels = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0xA00; // float
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0xA04; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xA10; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0xA1C; // float
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0xA20; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xA24; // int32_t
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xA28; // float
    constexpr std::ptrdiff_t m_hConveyorModels = 0xA30; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
}

namespace CFuncElectrifiedVolume { // CFuncBrush
    constexpr std::ptrdiff_t m_EffectName = 0xA18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0xA20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectZapName = 0xA28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEffectSource = 0xA30; // CUtlSymbolLarge
}

namespace CFuncIllusionary { // CBaseModelEntity
}

namespace CFuncInteractionLayerClip { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x9F8; // bool
    constexpr std::ptrdiff_t m_iszInteractsAs = 0xA00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszInteractsWith = 0xA08; // CUtlSymbolLarge
}

namespace CFuncLadder { // CBaseModelEntity
    constexpr std::ptrdiff_t m_vecLadderDir = 0x9F8; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0xA08; // CUtlVector<CHandle<CInfoLadderDismount>>
    constexpr std::ptrdiff_t m_vecLocalTop = 0xA20; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xA2C; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xA38; // Vector
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xA44; // float
    constexpr std::ptrdiff_t m_bDisabled = 0xA48; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0xA49; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0xA4A; // bool
    constexpr std::ptrdiff_t m_surfacePropName = 0xA50; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0xA58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0xA80; // CEntityIOOutput
}

namespace CFuncLadderAlias_func_useableladder { // CFuncLadder
}

namespace CFuncMonitor { // CFuncBrush
    constexpr std::ptrdiff_t m_targetCamera = 0xA18; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0xA20; // int32_t
    constexpr std::ptrdiff_t m_bRenderShadows = 0xA24; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xA25; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0xA28; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0xA30; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bEnabled = 0xA34; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xA35; // bool
    constexpr std::ptrdiff_t m_bStartEnabled = 0xA36; // bool
}

namespace CFuncMoveLinear { // CBaseToggle
    constexpr std::ptrdiff_t m_authoredPosition = 0xA78; // MoveLinearAuthoredPos_t
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0xA7C; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0xA88; // Vector
    constexpr std::ptrdiff_t m_soundStart = 0xA98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundStop = 0xAA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_currentSound = 0xAA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flBlockDamage = 0xAB0; // float
    constexpr std::ptrdiff_t m_flStartPosition = 0xAB4; // float
    constexpr std::ptrdiff_t m_flMoveDistance = 0xAB8; // float
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xAC8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xAF0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0xB18; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xB19; // bool
}

namespace CFuncMoveLinearAlias_momentary_door { // CFuncMoveLinear
}

namespace CFuncNavBlocker { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x9F8; // bool
    constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x9FC; // int32_t
}

namespace CFuncNavObstruction { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0xA00; // bool
}

namespace CFuncPlat { // CBasePlatTrain
    constexpr std::ptrdiff_t m_sNoise = 0xAA0; // CUtlSymbolLarge
}

namespace CFuncPlatRot { // CFuncPlat
    constexpr std::ptrdiff_t m_end = 0xAA8; // QAngle
    constexpr std::ptrdiff_t m_start = 0xAB4; // QAngle
}

namespace CFuncPropRespawnZone { // CBaseEntity
}

namespace CFuncRotating { // CBaseModelEntity
    constexpr std::ptrdiff_t m_OnStopped = 0x9F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStarted = 0xA20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedStart = 0xA48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_localRotationVector = 0xA70; // RotationVector
    constexpr std::ptrdiff_t m_flFanFriction = 0xA7C; // float
    constexpr std::ptrdiff_t m_flAttenuation = 0xA80; // float
    constexpr std::ptrdiff_t m_flVolume = 0xA84; // float
    constexpr std::ptrdiff_t m_flTargetSpeed = 0xA88; // float
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xA8C; // float
    constexpr std::ptrdiff_t m_flBlockDamage = 0xA90; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0xA94; // float
    constexpr std::ptrdiff_t m_NoiseRunning = 0xA98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bReversed = 0xAA0; // bool
    constexpr std::ptrdiff_t m_bAccelDecel = 0xAA1; // bool
    constexpr std::ptrdiff_t m_prevLocalAngles = 0xAAC; // QAngle
    constexpr std::ptrdiff_t m_angStart = 0xAB8; // QAngle
    constexpr std::ptrdiff_t m_bStopAtStartPos = 0xAC4; // bool
    constexpr std::ptrdiff_t m_vecClientOrigin = 0xAC8; // Vector
    constexpr std::ptrdiff_t m_vecClientAngles = 0xAD4; // QAngle
}

namespace CFuncShatterglass { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hGlassMaterialDamaged = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hGlassMaterialUndamaged = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFace = 0xA08; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeCaps = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFins = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_matPanelTransform = 0xA20; // matrix3x4_t
    constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0xA50; // matrix3x4_t
    constexpr std::ptrdiff_t m_vecShatterGlassShards = 0xA80; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_PanelSize = 0xA98; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelNormalWs = 0xAA0; // Vector
    constexpr std::ptrdiff_t m_nNumShardsEverCreated = 0xAAC; // int32_t
    constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0xAB0; // GameTime_t
    constexpr std::ptrdiff_t m_flLastCleanupTime = 0xAB4; // GameTime_t
    constexpr std::ptrdiff_t m_flInitAtTime = 0xAB8; // GameTime_t
    constexpr std::ptrdiff_t m_flGlassThickness = 0xABC; // float
    constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0xAC0; // float
    constexpr std::ptrdiff_t m_bBreakSilent = 0xAC4; // bool
    constexpr std::ptrdiff_t m_bBreakShardless = 0xAC5; // bool
    constexpr std::ptrdiff_t m_bBroken = 0xAC6; // bool
    constexpr std::ptrdiff_t m_bHasRateLimitedShards = 0xAC7; // bool
    constexpr std::ptrdiff_t m_bGlassNavIgnore = 0xAC8; // bool
    constexpr std::ptrdiff_t m_bGlassInFrame = 0xAC9; // bool
    constexpr std::ptrdiff_t m_bStartBroken = 0xACA; // bool
    constexpr std::ptrdiff_t m_iInitialDamageType = 0xACB; // uint8_t
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0xAD0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0xAD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0xAE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0xAE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vInitialDamagePositions = 0xAF0; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_vExtraDamagePositions = 0xB08; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_OnBroken = 0xB20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iSurfaceType = 0xB49; // uint8_t
}

namespace CFuncTankTrain { // CFuncTrackTrain
    constexpr std::ptrdiff_t m_OnDeath = 0xB48; // CEntityIOOutput
}

namespace CFuncTimescale { // CBaseEntity
    constexpr std::ptrdiff_t m_flDesiredTimescale = 0x7A8; // float
    constexpr std::ptrdiff_t m_flAcceleration = 0x7AC; // float
    constexpr std::ptrdiff_t m_flMinBlendRate = 0x7B0; // float
    constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x7B4; // float
    constexpr std::ptrdiff_t m_isStarted = 0x7B8; // bool
}

namespace CFuncTrackAuto { // CFuncTrackChange
}

namespace CFuncTrackChange { // CFuncPlatRot
    constexpr std::ptrdiff_t m_trackTop = 0xAC0; // CPathTrack*
    constexpr std::ptrdiff_t m_trackBottom = 0xAC8; // CPathTrack*
    constexpr std::ptrdiff_t m_train = 0xAD0; // CFuncTrackTrain*
    constexpr std::ptrdiff_t m_trackTopName = 0xAD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trackBottomName = 0xAE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trainName = 0xAE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_code = 0xAF0; // TRAIN_CODE
    constexpr std::ptrdiff_t m_targetState = 0xAF4; // int32_t
    constexpr std::ptrdiff_t m_use = 0xAF8; // int32_t
}

namespace CFuncTrackTrain { // CBaseModelEntity
    constexpr std::ptrdiff_t m_ppath = 0x9F8; // CHandle<CPathTrack>
    constexpr std::ptrdiff_t m_length = 0x9FC; // float
    constexpr std::ptrdiff_t m_vPosPrev = 0xA00; // Vector
    constexpr std::ptrdiff_t m_angPrev = 0xA0C; // QAngle
    constexpr std::ptrdiff_t m_controlMins = 0xA18; // Vector
    constexpr std::ptrdiff_t m_controlMaxs = 0xA24; // Vector
    constexpr std::ptrdiff_t m_lastBlockPos = 0xA30; // Vector
    constexpr std::ptrdiff_t m_lastBlockTick = 0xA3C; // int32_t
    constexpr std::ptrdiff_t m_flVolume = 0xA40; // float
    constexpr std::ptrdiff_t m_flBank = 0xA44; // float
    constexpr std::ptrdiff_t m_oldSpeed = 0xA48; // float
    constexpr std::ptrdiff_t m_flBlockDamage = 0xA4C; // float
    constexpr std::ptrdiff_t m_height = 0xA50; // float
    constexpr std::ptrdiff_t m_maxSpeed = 0xA54; // float
    constexpr std::ptrdiff_t m_dir = 0xA58; // float
    constexpr std::ptrdiff_t m_iszSoundMove = 0xA60; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovePing = 0xA68; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStart = 0xA70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStop = 0xA78; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strPathTarget = 0xA80; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0xA88; // float
    constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0xA8C; // float
    constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0xA90; // GameTime_t
    constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0xA94; // float
    constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0xA98; // float
    constexpr std::ptrdiff_t m_eOrientationType = 0xA9C; // TrainOrientationType_t
    constexpr std::ptrdiff_t m_eVelocityType = 0xAA0; // TrainVelocityType_t
    constexpr std::ptrdiff_t m_OnStart = 0xAB0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNext = 0xAD8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0xB00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bManualSpeedChanges = 0xB28; // bool
    constexpr std::ptrdiff_t m_flDesiredSpeed = 0xB2C; // float
    constexpr std::ptrdiff_t m_flSpeedChangeTime = 0xB30; // GameTime_t
    constexpr std::ptrdiff_t m_flAccelSpeed = 0xB34; // float
    constexpr std::ptrdiff_t m_flDecelSpeed = 0xB38; // float
    constexpr std::ptrdiff_t m_bAccelToSpeed = 0xB3C; // bool
    constexpr std::ptrdiff_t m_flTimeScale = 0xB40; // float
    constexpr std::ptrdiff_t m_flNextMPSoundTime = 0xB44; // GameTime_t
}

namespace CFuncTrain { // CBasePlatTrain
    constexpr std::ptrdiff_t m_hCurrentTarget = 0xA9C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_activated = 0xAA0; // bool
    constexpr std::ptrdiff_t m_hEnemy = 0xAA4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flBlockDamage = 0xAA8; // float
    constexpr std::ptrdiff_t m_flNextBlockTime = 0xAAC; // GameTime_t
    constexpr std::ptrdiff_t m_iszLastTarget = 0xAB0; // CUtlSymbolLarge
}

namespace CFuncTrainControls { // CBaseModelEntity
}

namespace CFuncVPhysicsClip { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x9F8; // bool
}

namespace CFuncVehicleClip { // CBaseModelEntity
}

namespace CFuncWall { // CBaseModelEntity
    constexpr std::ptrdiff_t m_nState = 0x9F8; // int32_t
}

namespace CFuncWallToggle { // CFuncWall
}

namespace CFuncWater { // CBaseModelEntity
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x9F8; // CBuoyancyHelper
}

namespace CGameChoreoServices { // IChoreoServices
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
    constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
    constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
    constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
}

namespace CGameEnd { // CRulePointEntity
}

namespace CGameGibManager { // CBaseEntity
    constexpr std::ptrdiff_t m_bAllowNewGibs = 0x7C8; // bool
    constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x7CC; // int32_t
    constexpr std::ptrdiff_t m_iMaxPieces = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_iLastFrame = 0x7D4; // int32_t
}

namespace CGameMoney { // CRulePointEntity
    constexpr std::ptrdiff_t m_OnMoneySpent = 0xA08; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMoneySpentFail = 0xA30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nMoney = 0xA58; // int32_t
    constexpr std::ptrdiff_t m_strAwardText = 0xA60; // CUtlString
}

namespace CGamePlayerEquip { // CRulePointEntity
}

namespace CGamePlayerZone { // CRuleBrushEntity
    constexpr std::ptrdiff_t m_OnPlayerInZone = 0xA00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerOutZone = 0xA28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayersInCount = 0xA50; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_PlayersOutCount = 0xA78; // CEntityOutputTemplate<int32_t>
}

namespace CGameRules {
    constexpr std::ptrdiff_t m_szQuestName = 0x8; // char[128]
    constexpr std::ptrdiff_t m_nQuestPhase = 0x88; // int32_t
}

namespace CGameRulesProxy { // CBaseEntity
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
    constexpr std::ptrdiff_t m_flScale = 0xC4; // float
    constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // Vector
    constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
    constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16_t
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
    constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
    constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
    constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8_t
    constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8_t
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8_t
    constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x140; // CUtlStringToken
    constexpr std::ptrdiff_t m_flZOffset = 0x144; // float
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x148; // Vector
}

namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
    constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
}

namespace CGameScriptedMoveData {
    constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
    constexpr std::ptrdiff_t m_vDest = 0xC; // Vector
    constexpr std::ptrdiff_t m_vSrc = 0x18; // Vector
    constexpr std::ptrdiff_t m_angSrc = 0x24; // QAngle
    constexpr std::ptrdiff_t m_angDst = 0x30; // QAngle
    constexpr std::ptrdiff_t m_angCurrent = 0x3C; // QAngle
    constexpr std::ptrdiff_t m_flAngRate = 0x48; // float
    constexpr std::ptrdiff_t m_flDuration = 0x4C; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x50; // GameTime_t
    constexpr std::ptrdiff_t m_bActive = 0x54; // bool
    constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x55; // bool
    constexpr std::ptrdiff_t m_bIgnoreRotation = 0x56; // bool
    constexpr std::ptrdiff_t m_nType = 0x58; // ScriptedMoveType_t
    constexpr std::ptrdiff_t m_bSuccess = 0x5C; // bool
    constexpr std::ptrdiff_t m_nForcedCrouchState = 0x60; // ForcedCrouchState_t
    constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x64; // bool
}

namespace CGameText { // CRulePointEntity
    constexpr std::ptrdiff_t m_iszMessage = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_textParms = 0xA10; // hudtextparms_t
}

namespace CGenericConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_nLinearMotionX = 0x808; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionY = 0x80C; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionZ = 0x810; // JointMotion_t
    constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x814; // float
    constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x818; // float
    constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x81C; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x820; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x824; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x828; // float
    constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x82C; // float
    constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x830; // float
    constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x834; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x838; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x83C; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x840; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x844; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x848; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x84C; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x850; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x854; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x858; // float
    constexpr std::ptrdiff_t m_flNotifyForceX = 0x85C; // float
    constexpr std::ptrdiff_t m_flNotifyForceY = 0x860; // float
    constexpr std::ptrdiff_t m_flNotifyForceZ = 0x864; // float
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x868; // float
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x86C; // float
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x870; // float
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x874; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x878; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x87C; // GameTime_t
    constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x880; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x881; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x882; // bool
    constexpr std::ptrdiff_t m_nAngularMotionX = 0x884; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionY = 0x888; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionZ = 0x88C; // JointMotion_t
    constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x890; // float
    constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x894; // float
    constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x898; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x89C; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x8A0; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x8A4; // float
    constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x8A8; // float
    constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x8AC; // float
    constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x8B0; // float
    constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x8B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x8E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x908; // CEntityIOOutput
}

namespace CGlowProperty {
    constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
    constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32_t
    constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
    constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
    constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float
    constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float
    constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
    constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
}

namespace CGradientFog { // CBaseEntity
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x7A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x7B0; // float
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x7B4; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x7B8; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x7BC; // float
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x7C0; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x7C4; // float
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x7C8; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x7CC; // float
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x7D0; // float
    constexpr std::ptrdiff_t m_fogColor = 0x7D4; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x7D8; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x7DC; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x7E0; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x7E1; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x7E2; // bool
}

namespace CGunTarget { // CBaseToggle
    constexpr std::ptrdiff_t m_on = 0xA78; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0xA7C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_OnDeath = 0xA80; // CEntityIOOutput
}

namespace CHEGrenade { // CBaseCSGrenade
}

namespace CHEGrenadeProjectile { // CBaseCSGrenadeProjectile
}

namespace CHandleDummy { // CBaseEntity
}

namespace CHandleTest { // CBaseEntity
    constexpr std::ptrdiff_t m_Handle = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bSendHandle = 0x7AC; // bool
}

namespace CHintMessage {
    constexpr std::ptrdiff_t m_hintString = 0x0; // char*
    constexpr std::ptrdiff_t m_args = 0x8; // CUtlVector<char*>
    constexpr std::ptrdiff_t m_duration = 0x20; // float
}

namespace CHintMessageQueue {
    constexpr std::ptrdiff_t m_tmMessageEnd = 0x0; // float
    constexpr std::ptrdiff_t m_messages = 0x8; // CUtlVector<CHintMessage*>
    constexpr std::ptrdiff_t m_pPlayerController = 0x20; // CBasePlayerController*
}

namespace CHitboxComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32_t[1]
}

namespace CHostage { // CHostageExpresserShim
    constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xD30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xD58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xD80; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRescued = 0xDA8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_entitySpottedState = 0xDD0; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xDE8; // int32_t
    constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xDEC; // uint32_t
    constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xDF0; // uint32_t
    constexpr std::ptrdiff_t m_bRemove = 0xDF4; // bool
    constexpr std::ptrdiff_t m_vel = 0xDF8; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0xE04; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xE05; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0xE08; // int32_t
    constexpr std::ptrdiff_t m_leader = 0xE0C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_lastLeader = 0xE10; // CHandle<CCSPlayerPawnBase>
    constexpr std::ptrdiff_t m_reuseTimer = 0xE18; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xE30; // bool
    constexpr std::ptrdiff_t m_accel = 0xE34; // Vector
    constexpr std::ptrdiff_t m_isRunning = 0xE40; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xE41; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0xE48; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xE60; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x2E70; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2E88; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2F18; // CountdownTimer
    constexpr std::ptrdiff_t m_wiggleTimer = 0x2F38; // CountdownTimer
    constexpr std::ptrdiff_t m_isAdjusted = 0x2F54; // bool
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2F55; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x2F58; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x2F5C; // GameTime_t
    constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2F60; // Vector
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2F6C; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x2F78; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2F7C; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x2F80; // GameTime_t
    constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2F84; // int32_t
    constexpr std::ptrdiff_t m_nPickupEventCount = 0x2F88; // int32_t
    constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2F8C; // Vector
    constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2FAC; // Vector
}

namespace CHostageAlias_info_hostage_spawn { // CHostage
}

namespace CHostageCarriableProp { // CBaseAnimGraph
}

namespace CHostageExpresserShim { // CBaseCombatCharacter
    constexpr std::ptrdiff_t m_pExpresser = 0xD18; // CAI_Expresser*
}

namespace CHostageRescueZone { // CHostageRescueZoneShim
}

namespace CHostageRescueZoneShim { // CBaseTrigger
}

namespace CInButtonState {
    constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64_t[3]
}

namespace CIncendiaryGrenade { // CMolotovGrenade
}

namespace CInferno { // CBaseModelEntity
    constexpr std::ptrdiff_t m_firePositions = 0xA04; // Vector[64]
    constexpr std::ptrdiff_t m_fireParentPositions = 0xD04; // Vector[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0x1004; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0x1044; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1344; // int32_t
    constexpr std::ptrdiff_t m_nInfernoType = 0x1348; // int32_t
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x134C; // int32_t
    constexpr std::ptrdiff_t m_nFireLifetime = 0x1350; // float
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1354; // bool
    constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x1358; // int32_t
    constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x135C; // bool
    constexpr std::ptrdiff_t m_extent = 0x1560; // Extent
    constexpr std::ptrdiff_t m_damageTimer = 0x1578; // CountdownTimer
    constexpr std::ptrdiff_t m_damageRampTimer = 0x1590; // CountdownTimer
    constexpr std::ptrdiff_t m_splashVelocity = 0x15A8; // Vector
    constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x15B4; // Vector
    constexpr std::ptrdiff_t m_startPos = 0x15C0; // Vector
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x15CC; // Vector
    constexpr std::ptrdiff_t m_activeTimer = 0x15D8; // IntervalTimer
    constexpr std::ptrdiff_t m_fireSpawnOffset = 0x15E8; // int32_t
    constexpr std::ptrdiff_t m_nMaxFlames = 0x15EC; // int32_t
    constexpr std::ptrdiff_t m_nSpreadCount = 0x15F0; // int32_t
    constexpr std::ptrdiff_t m_BookkeepingTimer = 0x15F8; // CountdownTimer
    constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1610; // CountdownTimer
    constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1628; // uint16_t
}

namespace CInfoData { // CServerOnlyEntity
}

namespace CInfoDeathmatchSpawn { // SpawnPoint
}

namespace CInfoDynamicShadowHint { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_flRange = 0x7AC; // float
    constexpr std::ptrdiff_t m_nImportance = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_nLightChoice = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_hLight = 0x7B8; // CHandle<CBaseEntity>
}

namespace CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    constexpr std::ptrdiff_t m_vBoxMins = 0x7BC; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x7C8; // Vector
}

namespace CInfoEnemyTerroristSpawn { // SpawnPointCoopEnemy
}

namespace CInfoGameEventProxy { // CPointEntity
    constexpr std::ptrdiff_t m_iszEventName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRange = 0x7B0; // float
}

namespace CInfoInstructorHintBombTargetA { // CPointEntity
}

namespace CInfoInstructorHintBombTargetB { // CPointEntity
}

namespace CInfoInstructorHintHostageRescueZone { // CPointEntity
}

namespace CInfoInstructorHintTarget { // CPointEntity
}

namespace CInfoLadderDismount { // CBaseEntity
}

namespace CInfoLandmark { // CPointEntity
}

namespace CInfoOffscreenPanoramaTexture { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_nResolutionY = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x7C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x7E0; // int32_t
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x7E8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_szTargetsName = 0x800; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x808; // CUtlVector<CHandle<CBaseModelEntity>>
}

namespace CInfoParticleTarget { // CPointEntity
}

namespace CInfoPlayerCounterterrorist { // SpawnPoint
}

namespace CInfoPlayerStart { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
}

namespace CInfoPlayerTerrorist { // SpawnPoint
}

namespace CInfoSpawnGroupLandmark { // CPointEntity
}

namespace CInfoSpawnGroupLoadUnload { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x848; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x850; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLandmarkName = 0x858; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x860; // CUtlString
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x868; // float
    constexpr std::ptrdiff_t m_bStreamingStarted = 0x86C; // bool
    constexpr std::ptrdiff_t m_bUnloadingStarted = 0x86D; // bool
}

namespace CInfoTarget { // CPointEntity
}

namespace CInfoTargetServerOnly { // CServerOnlyPointEntity
}

namespace CInfoTeleportDestination { // CPointEntity
}

namespace CInfoVisibilityBox { // CBaseEntity
    constexpr std::ptrdiff_t m_nMode = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_vBoxSize = 0x7B0; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x7BC; // bool
}

namespace CInfoWorldLayer { // CBaseEntity
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x7E0; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x7E1; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x7E2; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x7E4; // uint32_t
}

namespace CInstancedSceneEntity { // CSceneEntity
    constexpr std::ptrdiff_t m_hOwner = 0xD00; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bHadOwner = 0xD04; // bool
    constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xD08; // float
    constexpr std::ptrdiff_t m_flPreDelay = 0xD0C; // float
    constexpr std::ptrdiff_t m_bIsBackground = 0xD10; // bool
    constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0xD11; // bool
    constexpr std::ptrdiff_t m_hTarget = 0xD14; // CHandle<CBaseEntity>
}

namespace CInstructorEventEntity { // CPointEntity
    constexpr std::ptrdiff_t m_iszName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetPlayer = 0x7B8; // CHandle<CBasePlayerPawn>
}

namespace CIronSightController {
    constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
    constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float
    constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float
    constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float
}

namespace CItem { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_OnPlayerTouch = 0xBF8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0xC20; // bool
    constexpr std::ptrdiff_t m_OnCacheInteraction = 0xC28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xC50; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGlovePulled = 0xC78; // CEntityIOOutput
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xCA0; // Vector
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xCAC; // QAngle
    constexpr std::ptrdiff_t m_bPhysStartAsleep = 0xCB8; // bool
}

namespace CItemAssaultSuit { // CItem
}

namespace CItemDefuser { // CItem
    constexpr std::ptrdiff_t m_entitySpottedState = 0xCC8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xCE0; // int32_t
}

namespace CItemDefuserAlias_item_defuser { // CItemDefuser
}

namespace CItemDogtags { // CItem
    constexpr std::ptrdiff_t m_OwningPlayer = 0xCC8; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_KillingPlayer = 0xCCC; // CHandle<CCSPlayerPawn>
}

namespace CItemGeneric { // CItem
    constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xCD0; // bool
    constexpr std::ptrdiff_t m_bHasPickupRadius = 0xCD1; // bool
    constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xCD4; // float
    constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xCD8; // float
    constexpr std::ptrdiff_t m_flLastPickupCheck = 0xCDC; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xCE0; // bool
    constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xCE1; // bool
    constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xCE8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xCF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xCF8; // bool
    constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xD00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xD08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xD10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xD18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xD20; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xD28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xD30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupFilterName = 0xD38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupFilter = 0xD40; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_OnPickup = 0xD48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimeout = 0xD70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xD98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerTouch = 0xDC0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xDE8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xE10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPickupRadius = 0xE18; // float
    constexpr std::ptrdiff_t m_flTriggerRadius = 0xE1C; // float
    constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xE20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xE28; // bool
    constexpr std::ptrdiff_t m_glowColor = 0xE29; // Color
    constexpr std::ptrdiff_t m_bUseable = 0xE2D; // bool
    constexpr std::ptrdiff_t m_hTriggerHelper = 0xE30; // CHandle<CItemGenericTriggerHelper>
}

namespace CItemGenericTriggerHelper { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hParentItem = 0x9F8; // CHandle<CItemGeneric>
}

namespace CItemHeavyAssaultSuit { // CItemAssaultSuit
}

namespace CItemKevlar { // CItem
}

namespace CItemSoda { // CBaseAnimGraph
}

namespace CItem_Healthshot { // CWeaponBaseItem
}

namespace CKeepUpright { // CPointEntity
    constexpr std::ptrdiff_t m_worldGoalAxis = 0x7B0; // Vector
    constexpr std::ptrdiff_t m_localTestAxis = 0x7BC; // Vector
    constexpr std::ptrdiff_t m_nameAttach = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_attachedObject = 0x7D8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_angularLimit = 0x7DC; // float
    constexpr std::ptrdiff_t m_bActive = 0x7E0; // bool
    constexpr std::ptrdiff_t m_bDampAllRotation = 0x7E1; // bool
}

namespace CKnife { // CCSWeaponBase
    constexpr std::ptrdiff_t m_bFirstAttack = 0x1198; // bool
}

namespace CLightComponent { // CEntityComponent
    constexpr std::ptrdiff_t __m_pChainEntity = 0x58; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Color = 0x95; // Color
    constexpr std::ptrdiff_t m_SecondaryColor = 0x99; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0xA0; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xA4; // float
    constexpr std::ptrdiff_t m_flBrightnessMult = 0xA8; // float
    constexpr std::ptrdiff_t m_flRange = 0xAC; // float
    constexpr std::ptrdiff_t m_flFalloff = 0xB0; // float
    constexpr std::ptrdiff_t m_flAttenuation0 = 0xB4; // float
    constexpr std::ptrdiff_t m_flAttenuation1 = 0xB8; // float
    constexpr std::ptrdiff_t m_flAttenuation2 = 0xBC; // float
    constexpr std::ptrdiff_t m_flTheta = 0xC0; // float
    constexpr std::ptrdiff_t m_flPhi = 0xC4; // float
    constexpr std::ptrdiff_t m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nCascades = 0xD0; // int32_t
    constexpr std::ptrdiff_t m_nCastShadows = 0xD4; // int32_t
    constexpr std::ptrdiff_t m_nShadowWidth = 0xD8; // int32_t
    constexpr std::ptrdiff_t m_nShadowHeight = 0xDC; // int32_t
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xE0; // bool
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xE4; // int32_t
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xE8; // bool
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xEC; // float
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xF0; // float
    constexpr std::ptrdiff_t m_nStyle = 0xF4; // int32_t
    constexpr std::ptrdiff_t m_Pattern = 0xF8; // CUtlString
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0x100; // int32_t
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0x104; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0x108; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0x10C; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x110; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x114; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x118; // float
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x11C; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x120; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x124; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x128; // int32_t
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x12C; // bool
    constexpr std::ptrdiff_t m_nShadowPriority = 0x130; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x134; // int32_t
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x138; // bool
    constexpr std::ptrdiff_t m_nDirectLight = 0x13C; // int32_t
    constexpr std::ptrdiff_t m_nIndirectLight = 0x140; // int32_t
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x144; // float
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x148; // float
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x14C; // float
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x150; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x154; // bool
    constexpr std::ptrdiff_t m_bFlicker = 0x155; // bool
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x156; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x158; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x164; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x170; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x17C; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x188; // Vector
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x194; // float
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x198; // int32_t
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x19C; // float
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x1A0; // float
    constexpr std::ptrdiff_t m_SkyColor = 0x1A4; // Color
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A8; // float
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1AC; // Color
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1B0; // bool
    constexpr std::ptrdiff_t m_bMixedShadows = 0x1B1; // bool
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B4; // GameTime_t
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B8; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1BC; // float
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1D0; // bool
}

namespace CLightDirectionalEntity { // CLightEntity
}

namespace CLightEntity { // CBaseModelEntity
    constexpr std::ptrdiff_t m_CLightComponent = 0x9F8; // CLightComponent*
}

namespace CLightEnvironmentEntity { // CLightDirectionalEntity
}

namespace CLightGlow { // CBaseModelEntity
    constexpr std::ptrdiff_t m_nHorizontalSize = 0x9F8; // uint32_t
    constexpr std::ptrdiff_t m_nVerticalSize = 0x9FC; // uint32_t
    constexpr std::ptrdiff_t m_nMinDist = 0xA00; // uint32_t
    constexpr std::ptrdiff_t m_nMaxDist = 0xA04; // uint32_t
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0xA08; // uint32_t
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xA0C; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xA10; // float
}

namespace CLightOrthoEntity { // CLightEntity
}

namespace CLightSpotEntity { // CLightEntity
}

namespace CLogicAchievement { // CLogicalEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_iszAchievementEventID = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnFired = 0x7B8; // CEntityIOOutput
}

namespace CLogicActiveAutosave { // CLogicAutosave
    constexpr std::ptrdiff_t m_TriggerHitPoints = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_flTimeToTrigger = 0x7B8; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x7BC; // GameTime_t
    constexpr std::ptrdiff_t m_flDangerousTime = 0x7C0; // float
}

namespace CLogicAuto { // CBaseEntity
    constexpr std::ptrdiff_t m_OnMapSpawn = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNewGame = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLoadGame = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMapTransition = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBackgroundMap = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewMap = 0x898; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewRound = 0x8C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVREnabled = 0x8E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x910; // CEntityIOOutput
    constexpr std::ptrdiff_t m_globalstate = 0x938; // CUtlSymbolLarge
}

namespace CLogicAutosave { // CLogicalEntity
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x7A8; // bool
    constexpr std::ptrdiff_t m_minHitPoints = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x7B0; // int32_t
}

namespace CLogicBranch { // CLogicalEntity
    constexpr std::ptrdiff_t m_bInValue = 0x7A8; // bool
    constexpr std::ptrdiff_t m_Listeners = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_OnTrue = 0x7C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFalse = 0x7F0; // CEntityIOOutput
}

namespace CLogicBranchList { // CLogicalEntity
    constexpr std::ptrdiff_t m_nLogicBranchNames = 0x7A8; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_LogicBranchList = 0x828; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_eLastState = 0x840; // CLogicBranchList::LogicBranchListenerLastState_t
    constexpr std::ptrdiff_t m_OnAllTrue = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAllFalse = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMixed = 0x898; // CEntityIOOutput
}

namespace CLogicCase { // CLogicalEntity
    constexpr std::ptrdiff_t m_nCase = 0x7A8; // CUtlSymbolLarge[32]
    constexpr std::ptrdiff_t m_nShuffleCases = 0x8A8; // int32_t
    constexpr std::ptrdiff_t m_nLastShuffleCase = 0x8AC; // int32_t
    constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x8B0; // uint8_t[32]
    constexpr std::ptrdiff_t m_OnCase = 0x8D0; // CEntityIOOutput[32]
    constexpr std::ptrdiff_t m_OnDefault = 0xDD0; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
}

namespace CLogicCollisionPair { // CLogicalEntity
    constexpr std::ptrdiff_t m_nameAttach1 = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_disabled = 0x7B8; // bool
    constexpr std::ptrdiff_t m_succeeded = 0x7B9; // bool
}

namespace CLogicCompare { // CLogicalEntity
    constexpr std::ptrdiff_t m_flInValue = 0x7A8; // float
    constexpr std::ptrdiff_t m_flCompareValue = 0x7AC; // float
    constexpr std::ptrdiff_t m_OnLessThan = 0x7B0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnEqualTo = 0x7D8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnNotEqualTo = 0x800; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x828; // CEntityOutputTemplate<float>
}

namespace CLogicDistanceAutosave { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszTargetEntity = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x7B0; // float
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x7B4; // bool
    constexpr std::ptrdiff_t m_bCheckCough = 0x7B5; // bool
    constexpr std::ptrdiff_t m_bThinkDangerous = 0x7B6; // bool
    constexpr std::ptrdiff_t m_flDangerousTime = 0x7B8; // float
}

namespace CLogicDistanceCheck { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszEntityA = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityB = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flZone1Distance = 0x7B8; // float
    constexpr std::ptrdiff_t m_flZone2Distance = 0x7BC; // float
    constexpr std::ptrdiff_t m_InZone1 = 0x7C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone2 = 0x7E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone3 = 0x810; // CEntityIOOutput
}

namespace CLogicEventListener { // CLogicalEntity
    constexpr std::ptrdiff_t m_strEventName = 0x7B8; // CUtlString
    constexpr std::ptrdiff_t m_bIsEnabled = 0x7C0; // bool
    constexpr std::ptrdiff_t m_nTeam = 0x7C4; // int32_t
    constexpr std::ptrdiff_t m_OnEventFired = 0x7C8; // CEntityIOOutput
}

namespace CLogicGameEvent { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszEventName = 0x7A8; // CUtlSymbolLarge
}

namespace CLogicGameEventListener { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnEventFired = 0x7B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszGameEventName = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszGameEventItem = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bEnabled = 0x7F0; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x7F1; // bool
}

namespace CLogicLineToEntity { // CLogicalEntity
    constexpr std::ptrdiff_t m_Line = 0x7A8; // CEntityOutputTemplate<Vector>
    constexpr std::ptrdiff_t m_SourceName = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_StartEntity = 0x7D8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_EndEntity = 0x7DC; // CHandle<CBaseEntity>
}

namespace CLogicMeasureMovement { // CLogicalEntity
    constexpr std::ptrdiff_t m_strMeasureTarget = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMeasureReference = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strTargetReference = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x7C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hMeasureReference = 0x7C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget = 0x7C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTargetReference = 0x7CC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flScale = 0x7D0; // float
    constexpr std::ptrdiff_t m_nMeasureType = 0x7D4; // int32_t
}

namespace CLogicNPCCounter { // CBaseEntity
    constexpr std::ptrdiff_t m_OnMinCountAll = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCountAll = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactorAll = 0x7F8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x820; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinCount_1 = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_1 = 0x898; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x8C0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinCount_2 = 0x8E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x910; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_2 = 0x938; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x960; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinCount_3 = 0x988; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x9B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_3 = 0x9D8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0xA00; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_hSource = 0xA28; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0xA30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceMax = 0xA38; // float
    constexpr std::ptrdiff_t m_bDisabled = 0xA3C; // bool
    constexpr std::ptrdiff_t m_nMinCountAll = 0xA40; // int32_t
    constexpr std::ptrdiff_t m_nMaxCountAll = 0xA44; // int32_t
    constexpr std::ptrdiff_t m_nMinFactorAll = 0xA48; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactorAll = 0xA4C; // int32_t
    constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0xA58; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_1 = 0xA60; // int32_t
    constexpr std::ptrdiff_t m_bInvertState_1 = 0xA64; // bool
    constexpr std::ptrdiff_t m_nMinCount_1 = 0xA68; // int32_t
    constexpr std::ptrdiff_t m_nMaxCount_1 = 0xA6C; // int32_t
    constexpr std::ptrdiff_t m_nMinFactor_1 = 0xA70; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactor_1 = 0xA74; // int32_t
    constexpr std::ptrdiff_t m_flDefaultDist_1 = 0xA7C; // float
    constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0xA80; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_2 = 0xA88; // int32_t
    constexpr std::ptrdiff_t m_bInvertState_2 = 0xA8C; // bool
    constexpr std::ptrdiff_t m_nMinCount_2 = 0xA90; // int32_t
    constexpr std::ptrdiff_t m_nMaxCount_2 = 0xA94; // int32_t
    constexpr std::ptrdiff_t m_nMinFactor_2 = 0xA98; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactor_2 = 0xA9C; // int32_t
    constexpr std::ptrdiff_t m_flDefaultDist_2 = 0xAA4; // float
    constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0xAA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_3 = 0xAB0; // int32_t
    constexpr std::ptrdiff_t m_bInvertState_3 = 0xAB4; // bool
    constexpr std::ptrdiff_t m_nMinCount_3 = 0xAB8; // int32_t
    constexpr std::ptrdiff_t m_nMaxCount_3 = 0xABC; // int32_t
    constexpr std::ptrdiff_t m_nMinFactor_3 = 0xAC0; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactor_3 = 0xAC4; // int32_t
    constexpr std::ptrdiff_t m_flDefaultDist_3 = 0xACC; // float
}

namespace CLogicNPCCounterAABB { // CLogicNPCCounter
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0xAE8; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0xAF4; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0xB00; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0xB0C; // Vector
}

namespace CLogicNPCCounterOBB { // CLogicNPCCounterAABB
}

namespace CLogicNavigation { // CLogicalEntity
    constexpr std::ptrdiff_t m_isOn = 0x7B0; // bool
    constexpr std::ptrdiff_t m_navProperty = 0x7B4; // navproperties_t
}

namespace CLogicPlayerProxy { // CLogicalEntity
    constexpr std::ptrdiff_t m_hPlayer = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x7B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x7D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerDied = 0x800; // CEntityIOOutput
    constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x828; // CEntityOutputTemplate<int32_t>
}

namespace CLogicProximity { // CPointEntity
}

namespace CLogicRelay { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnTrigger = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawn = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bDisabled = 0x7F8; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x7F9; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x7FA; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x7FB; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x7FC; // bool
}

namespace CLogicScript { // CPointEntity
}

namespace CLogicalEntity { // CServerOnlyEntity
}

namespace CMapInfo { // CPointEntity
    constexpr std::ptrdiff_t m_iBuyingStatus = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_flBombRadius = 0x7AC; // float
    constexpr std::ptrdiff_t m_iPetPopulation = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x7B4; // bool
    constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x7B5; // bool
    constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x7B8; // float
    constexpr std::ptrdiff_t m_iHostageCount = 0x7BC; // int32_t
    constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x7C0; // bool
}

namespace CMapVetoPickController { // CBaseEntity
    constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x7A8; // bool
    constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x7A9; // bool
    constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x7C8; // double
    constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x7D0; // bool
    constexpr std::ptrdiff_t m_nDraftType = 0x7D4; // int32_t
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x7D8; // int32_t
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x7DC; // int32_t[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x8DC; // int32_t[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x8F8; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x9F8; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0xAF8; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0xBF8; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0xCF8; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xDF8; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xEF8; // int32_t[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xFF8; // int32_t[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0x10F8; // int32_t
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0x10FC; // int32_t
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0x1100; // int32_t
    constexpr std::ptrdiff_t m_OnMapVetoed = 0x1108; // CEntityOutputTemplate<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_OnMapPicked = 0x1130; // CEntityOutputTemplate<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_OnSidesPicked = 0x1158; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0x1180; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_OnLevelTransition = 0x11A8; // CEntityOutputTemplate<int32_t>
}

namespace CMarkupVolume { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x9F8; // bool
}

namespace CMarkupVolumeTagged { // CMarkupVolume
    constexpr std::ptrdiff_t m_bIsGroup = 0xA30; // bool
    constexpr std::ptrdiff_t m_bGroupByPrefab = 0xA31; // bool
    constexpr std::ptrdiff_t m_bGroupByVolume = 0xA32; // bool
    constexpr std::ptrdiff_t m_bGroupOtherGroups = 0xA33; // bool
    constexpr std::ptrdiff_t m_bIsInGroup = 0xA34; // bool
}

namespace CMarkupVolumeTagged_Nav { // CMarkupVolumeTagged
}

namespace CMarkupVolumeTagged_NavGame { // CMarkupVolumeWithRef
    constexpr std::ptrdiff_t m_bFloodFillAttribute = 0xA48; // bool
}

namespace CMarkupVolumeWithRef { // CMarkupVolumeTagged
    constexpr std::ptrdiff_t m_bUseRef = 0xA35; // bool
    constexpr std::ptrdiff_t m_vRefPos = 0xA38; // Vector
    constexpr std::ptrdiff_t m_flRefDot = 0xA44; // float
}

namespace CMathColorBlend { // CLogicalEntity
    constexpr std::ptrdiff_t m_flInMin = 0x7A8; // float
    constexpr std::ptrdiff_t m_flInMax = 0x7AC; // float
    constexpr std::ptrdiff_t m_OutColor1 = 0x7B0; // Color
    constexpr std::ptrdiff_t m_OutColor2 = 0x7B4; // Color
    constexpr std::ptrdiff_t m_OutValue = 0x7B8; // CEntityOutputTemplate<Color>
}

namespace CMathCounter { // CLogicalEntity
    constexpr std::ptrdiff_t m_flMin = 0x7A8; // float
    constexpr std::ptrdiff_t m_flMax = 0x7AC; // float
    constexpr std::ptrdiff_t m_bHitMin = 0x7B0; // bool
    constexpr std::ptrdiff_t m_bHitMax = 0x7B1; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x7B2; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x7B8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnGetValue = 0x7E0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnHitMin = 0x808; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHitMax = 0x830; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMin = 0x858; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMax = 0x880; // CEntityIOOutput
}

namespace CMathRemap { // CLogicalEntity
    constexpr std::ptrdiff_t m_flInMin = 0x7A8; // float
    constexpr std::ptrdiff_t m_flInMax = 0x7AC; // float
    constexpr std::ptrdiff_t m_flOut1 = 0x7B0; // float
    constexpr std::ptrdiff_t m_flOut2 = 0x7B4; // float
    constexpr std::ptrdiff_t m_flOldInValue = 0x7B8; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x7BC; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x7C0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x7E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMin = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMax = 0x860; // CEntityIOOutput
}

namespace CMelee { // CCSWeaponBase
}

namespace CMessage { // CPointEntity
    constexpr std::ptrdiff_t m_iszMessage = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_MessageVolume = 0x7B0; // float
    constexpr std::ptrdiff_t m_MessageAttenuation = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_Radius = 0x7B8; // float
    constexpr std::ptrdiff_t m_sNoise = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnShowMessage = 0x7C8; // CEntityIOOutput
}

namespace CMessageEntity { // CPointEntity
    constexpr std::ptrdiff_t m_radius = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_messageText = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_drawText = 0x7B8; // bool
    constexpr std::ptrdiff_t m_bDeveloperOnly = 0x7B9; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x7BA; // bool
}

namespace CModelPointEntity { // CBaseModelEntity
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64_t
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x212; // int8_t
    constexpr std::ptrdiff_t m_nForceLOD = 0x213; // int8_t
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x214; // int8_t
}

namespace CMolotovGrenade { // CBaseCSGrenade
}

namespace CMolotovProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0xD96; // bool
    constexpr std::ptrdiff_t m_bDetonated = 0xDA0; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0xDA8; // IntervalTimer
    constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xE88; // bool
}

namespace CMomentaryRotButton { // CRotButton
    constexpr std::ptrdiff_t m_Position = 0xBC0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnUnpressed = 0xBE8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xC10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xC38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedPosition = 0xC60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_lastUsed = 0xC88; // int32_t
    constexpr std::ptrdiff_t m_start = 0xC8C; // QAngle
    constexpr std::ptrdiff_t m_end = 0xC98; // QAngle
    constexpr std::ptrdiff_t m_IdealYaw = 0xCA4; // float
    constexpr std::ptrdiff_t m_sNoise = 0xCA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUpdateTarget = 0xCB0; // bool
    constexpr std::ptrdiff_t m_direction = 0xCB4; // int32_t
    constexpr std::ptrdiff_t m_returnSpeed = 0xCB8; // float
    constexpr std::ptrdiff_t m_flStartPosition = 0xCBC; // float
}

namespace CMotorController {
    constexpr std::ptrdiff_t m_speed = 0x8; // float
    constexpr std::ptrdiff_t m_maxTorque = 0xC; // float
    constexpr std::ptrdiff_t m_axis = 0x10; // Vector
    constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float
}

namespace CMultiLightProxy { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszLightNameFilter = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLightClassFilter = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x7B8; // float
    constexpr std::ptrdiff_t m_flBrightnessDelta = 0x7BC; // float
    constexpr std::ptrdiff_t m_bPerformScreenFade = 0x7C0; // bool
    constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x7C4; // float
    constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x7C8; // float
    constexpr std::ptrdiff_t m_vecLights = 0x7D0; // CUtlVector<CHandle<CLightEntity>>
}

namespace CMultiSource { // CLogicalEntity
    constexpr std::ptrdiff_t m_rgEntities = 0x7A8; // CHandle<CBaseEntity>[32]
    constexpr std::ptrdiff_t m_rgTriggered = 0x828; // int32_t[32]
    constexpr std::ptrdiff_t m_OnTrigger = 0x8A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iTotal = 0x8D0; // int32_t
    constexpr std::ptrdiff_t m_globalstate = 0x8D8; // CUtlSymbolLarge
}

namespace CMultiplayRules { // CGameRules
}

namespace CMultiplayer_Expresser { // CAI_ExpresserWithFollowup
    constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0x70; // bool
}

namespace CNavHullPresetVData {
    constexpr std::ptrdiff_t m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
}

namespace CNavHullVData {
    constexpr std::ptrdiff_t m_bAgentEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_agentRadius = 0x4; // float
    constexpr std::ptrdiff_t m_agentHeight = 0x8; // float
    constexpr std::ptrdiff_t m_agentShortHeightEnabled = 0xC; // bool
    constexpr std::ptrdiff_t m_agentShortHeight = 0x10; // float
    constexpr std::ptrdiff_t m_agentMaxClimb = 0x14; // float
    constexpr std::ptrdiff_t m_agentMaxSlope = 0x18; // int32_t
    constexpr std::ptrdiff_t m_agentMaxJumpDownDist = 0x1C; // float
    constexpr std::ptrdiff_t m_agentMaxJumpHorizDistBase = 0x20; // float
    constexpr std::ptrdiff_t m_agentMaxJumpUpDist = 0x24; // float
    constexpr std::ptrdiff_t m_agentBorderErosion = 0x28; // int32_t
}

namespace CNavLinkAnimgraphVar {
    constexpr std::ptrdiff_t m_strAnimgraphVar = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8; // uint32_t
}

namespace CNavLinkAreaEntity { // CPointEntity
    constexpr std::ptrdiff_t m_flWidth = 0x7A8; // float
    constexpr std::ptrdiff_t m_vLocatorOffset = 0x7AC; // Vector
    constexpr std::ptrdiff_t m_qLocatorAnglesOffset = 0x7B8; // QAngle
    constexpr std::ptrdiff_t m_strMovementForward = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMovementReverse = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNavLinkIdForward = 0x7D8; // int32_t
    constexpr std::ptrdiff_t m_nNavLinkIdReverse = 0x7DC; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x7E0; // bool
    constexpr std::ptrdiff_t m_strFilterName = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x7F0; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_OnNavLinkStart = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNavLinkFinish = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsTerminus = 0x848; // bool
}

namespace CNavLinkMovementVData {
    constexpr std::ptrdiff_t m_bIsInterpolated = 0x0; // bool
    constexpr std::ptrdiff_t m_unRecommendedDistance = 0x4; // uint32_t
    constexpr std::ptrdiff_t m_vecAnimgraphVars = 0x8; // CUtlVector<CNavLinkAnimgraphVar>
}

namespace CNavSpaceInfo { // CPointEntity
    constexpr std::ptrdiff_t m_bCreateFlightSpace = 0x7A8; // bool
}

namespace CNavVolume {
}

namespace CNavVolumeAll { // CNavVolumeVector
}

namespace CNavVolumeBreadthFirstSearch { // CNavVolumeCalculatedVector
    constexpr std::ptrdiff_t m_vStartPos = 0x80; // Vector
    constexpr std::ptrdiff_t m_flSearchDist = 0x8C; // float
}

namespace CNavVolumeCalculatedVector { // CNavVolume
}

namespace CNavVolumeMarkupVolume { // CNavVolume
}

namespace CNavVolumeSphere { // CNavVolume
    constexpr std::ptrdiff_t m_vCenter = 0x50; // Vector
    constexpr std::ptrdiff_t m_flRadius = 0x5C; // float
}

namespace CNavVolumeSphericalShell { // CNavVolumeSphere
    constexpr std::ptrdiff_t m_flRadiusInner = 0x60; // float
}

namespace CNavVolumeVector { // CNavVolume
    constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x58; // bool
}

namespace CNavWalkable { // CPointEntity
}

namespace CNetworkOriginCellCoordQuantizedVector {
    constexpr std::ptrdiff_t m_cellX = 0x10; // uint16_t
    constexpr std::ptrdiff_t m_cellY = 0x12; // uint16_t
    constexpr std::ptrdiff_t m_cellZ = 0x14; // uint16_t
    constexpr std::ptrdiff_t m_nOutsideWorld = 0x16; // uint16_t
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
    constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x2C4; // uint8_t
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
    constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float
    constexpr std::ptrdiff_t m_flCycle = 0x10; // float
    constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
    constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
    constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float
    constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float
}

namespace CNullEntity { // CBaseEntity
}

namespace COmniLight { // CBarnLight
    constexpr std::ptrdiff_t m_flInnerAngle = 0xC20; // float
    constexpr std::ptrdiff_t m_flOuterAngle = 0xC24; // float
    constexpr std::ptrdiff_t m_bShowLight = 0xC28; // bool
}

namespace COrnamentProp { // CDynamicProp
    constexpr std::ptrdiff_t m_initialOwner = 0xE68; // CUtlSymbolLarge
}

namespace CParticleSystem { // CBaseModelEntity
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0x9F8; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0xBF8; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0xBF9; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xBFC; // float
    constexpr std::ptrdiff_t m_nStopType = 0xC00; // int32_t
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xC04; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0xC08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flStartTime = 0xC10; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0xC14; // float
    constexpr std::ptrdiff_t m_vServerControlPoints = 0xC18; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xC48; // uint8_t[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0xC4C; // CHandle<CBaseEntity>[64]
    constexpr std::ptrdiff_t m_bNoSave = 0xD4C; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0xD4D; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0xD4E; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0xD4F; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0xD50; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0xD58; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0xF58; // int32_t
    constexpr std::ptrdiff_t m_vecDataCPValue = 0xF5C; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0xF68; // int32_t
    constexpr std::ptrdiff_t m_clrTint = 0xF6C; // Color
}

namespace CPathCorner { // CPointEntity
    constexpr std::ptrdiff_t m_flWait = 0x7A8; // float
    constexpr std::ptrdiff_t m_flRadius = 0x7AC; // float
    constexpr std::ptrdiff_t m_OnPass = 0x7B0; // CEntityIOOutput
}

namespace CPathCornerCrash { // CPathCorner
}

namespace CPathKeyFrame { // CLogicalEntity
    constexpr std::ptrdiff_t m_Origin = 0x7A8; // Vector
    constexpr std::ptrdiff_t m_Angles = 0x7B4; // QAngle
    constexpr std::ptrdiff_t m_qAngle = 0x7C0; // Quaternion
    constexpr std::ptrdiff_t m_iNextKey = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flNextTime = 0x7D8; // float
    constexpr std::ptrdiff_t m_pNextKey = 0x7E0; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPrevKey = 0x7E8; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flSpeed = 0x7F0; // float
}

namespace CPathParticleRope { // CBaseEntity
    constexpr std::ptrdiff_t m_bStartActive = 0x7A8; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x7AC; // float
    constexpr std::ptrdiff_t m_iszEffectName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x7B8; // CUtlVector<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x7D0; // float
    constexpr std::ptrdiff_t m_flSlack = 0x7D4; // float
    constexpr std::ptrdiff_t m_flRadius = 0x7D8; // float
    constexpr std::ptrdiff_t m_ColorTint = 0x7DC; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x7E0; // int32_t
    constexpr std::ptrdiff_t m_iEffectIndex = 0x7E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x7F0; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x808; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x820; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x838; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x850; // CNetworkUtlVectorBase<bool>
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x868; // CNetworkUtlVectorBase<float>
}

namespace CPathParticleRopeAlias_path_particle_rope_clientside { // CPathParticleRope
}

namespace CPathTrack { // CPointEntity
    constexpr std::ptrdiff_t m_pnext = 0x7A8; // CPathTrack*
    constexpr std::ptrdiff_t m_pprevious = 0x7B0; // CPathTrack*
    constexpr std::ptrdiff_t m_paltpath = 0x7B8; // CPathTrack*
    constexpr std::ptrdiff_t m_flRadius = 0x7C0; // float
    constexpr std::ptrdiff_t m_length = 0x7C4; // float
    constexpr std::ptrdiff_t m_altName = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIterVal = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_eOrientationType = 0x7D4; // TrackOrientationType_t
    constexpr std::ptrdiff_t m_OnPass = 0x7D8; // CEntityIOOutput
}

namespace CPhysBallSocket { // CPhysConstraint
    constexpr std::ptrdiff_t m_flFriction = 0x800; // float
    constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x804; // bool
    constexpr std::ptrdiff_t m_flSwingLimit = 0x808; // float
    constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x80C; // bool
    constexpr std::ptrdiff_t m_flMinTwistAngle = 0x810; // float
    constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x814; // float
}

namespace CPhysBox { // CBreakable
    constexpr std::ptrdiff_t m_damageType = 0xAB8; // int32_t
    constexpr std::ptrdiff_t m_massScale = 0xABC; // float
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0xAC0; // int32_t
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xAC4; // float
    constexpr std::ptrdiff_t m_angPreferredCarryAngles = 0xAC8; // QAngle
    constexpr std::ptrdiff_t m_bNotSolidToWorld = 0xAD4; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0xAD5; // bool
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xAD8; // int32_t
    constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0xADC; // float
    constexpr std::ptrdiff_t m_OnDamaged = 0xAE0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0xB08; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMotionEnabled = 0xB30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xB58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouch = 0xB80; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hCarryingPlayer = 0xBA8; // CHandle<CBasePlayerPawn>
}

namespace CPhysConstraint { // CLogicalEntity
    constexpr std::ptrdiff_t m_nameAttach1 = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_breakSound = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceLimit = 0x7C8; // float
    constexpr std::ptrdiff_t m_torqueLimit = 0x7CC; // float
    constexpr std::ptrdiff_t m_teleportTick = 0x7D0; // uint32_t
    constexpr std::ptrdiff_t m_minTeleportDistance = 0x7D4; // float
    constexpr std::ptrdiff_t m_OnBreak = 0x7D8; // CEntityIOOutput
}

namespace CPhysExplosion { // CPointEntity
    constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x7A8; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x7AC; // float
    constexpr std::ptrdiff_t m_flDamage = 0x7B0; // float
    constexpr std::ptrdiff_t m_radius = 0x7B4; // float
    constexpr std::ptrdiff_t m_targetEntityName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flInnerRadius = 0x7C0; // float
    constexpr std::ptrdiff_t m_flPushScale = 0x7C4; // float
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x7C8; // bool
    constexpr std::ptrdiff_t m_OnPushedPlayer = 0x7D0; // CEntityIOOutput
}

namespace CPhysFixed { // CPhysConstraint
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x800; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x804; // float
    constexpr std::ptrdiff_t m_flAngularFrequency = 0x808; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x80C; // float
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x810; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x811; // bool
}

namespace CPhysForce { // CPointEntity
    constexpr std::ptrdiff_t m_nameAttach = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_force = 0x7B8; // float
    constexpr std::ptrdiff_t m_forceTime = 0x7BC; // float
    constexpr std::ptrdiff_t m_attachedObject = 0x7C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_wasRestored = 0x7C4; // bool
    constexpr std::ptrdiff_t m_integrator = 0x7C8; // CConstantForceController
}

namespace CPhysHinge { // CPhysConstraint
    constexpr std::ptrdiff_t m_soundInfo = 0x808; // ConstraintSoundInfo
    constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x890; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x8B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAtMinLimit = 0x8E0; // bool
    constexpr std::ptrdiff_t m_bAtMaxLimit = 0x8E1; // bool
    constexpr std::ptrdiff_t m_hinge = 0x8E4; // constraint_hingeparams_t
    constexpr std::ptrdiff_t m_hingeFriction = 0x924; // float
    constexpr std::ptrdiff_t m_systemLoadScale = 0x928; // float
    constexpr std::ptrdiff_t m_bIsAxisLocal = 0x92C; // bool
    constexpr std::ptrdiff_t m_flMinRotation = 0x930; // float
    constexpr std::ptrdiff_t m_flMaxRotation = 0x934; // float
    constexpr std::ptrdiff_t m_flInitialRotation = 0x938; // float
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x93C; // float
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x940; // float
    constexpr std::ptrdiff_t m_flAngleSpeed = 0x944; // float
    constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x948; // float
    constexpr std::ptrdiff_t m_OnStartMoving = 0x950; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStopMoving = 0x978; // CEntityIOOutput
}

namespace CPhysHingeAlias_phys_hinge_local { // CPhysHinge
}

namespace CPhysImpact { // CPointEntity
    constexpr std::ptrdiff_t m_damage = 0x7A8; // float
    constexpr std::ptrdiff_t m_distance = 0x7AC; // float
    constexpr std::ptrdiff_t m_directionEntityName = 0x7B0; // CUtlSymbolLarge
}

namespace CPhysLength { // CPhysConstraint
    constexpr std::ptrdiff_t m_offset = 0x800; // Vector[2]
    constexpr std::ptrdiff_t m_vecAttach = 0x818; // Vector
    constexpr std::ptrdiff_t m_addLength = 0x824; // float
    constexpr std::ptrdiff_t m_minLength = 0x828; // float
    constexpr std::ptrdiff_t m_totalLength = 0x82C; // float
    constexpr std::ptrdiff_t m_bEnableCollision = 0x830; // bool
}

namespace CPhysMagnet { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_OnMagnetAttach = 0xBF0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMagnetDetach = 0xC18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0xC40; // float
    constexpr std::ptrdiff_t m_forceLimit = 0xC44; // float
    constexpr std::ptrdiff_t m_torqueLimit = 0xC48; // float
    constexpr std::ptrdiff_t m_MagnettedEntities = 0xC50; // CUtlVector<magnetted_objects_t>
    constexpr std::ptrdiff_t m_bActive = 0xC68; // bool
    constexpr std::ptrdiff_t m_bHasHitSomething = 0xC69; // bool
    constexpr std::ptrdiff_t m_flTotalMass = 0xC6C; // float
    constexpr std::ptrdiff_t m_flRadius = 0xC70; // float
    constexpr std::ptrdiff_t m_flNextSuckTime = 0xC74; // GameTime_t
    constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0xC78; // int32_t
}

namespace CPhysMotor { // CLogicalEntity
    constexpr std::ptrdiff_t m_nameAttach = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hAttachedObject = 0x7B0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_spinUp = 0x7B4; // float
    constexpr std::ptrdiff_t m_additionalAcceleration = 0x7B8; // float
    constexpr std::ptrdiff_t m_angularAcceleration = 0x7BC; // float
    constexpr std::ptrdiff_t m_lastTime = 0x7C0; // GameTime_t
    constexpr std::ptrdiff_t m_motor = 0x7D8; // CMotorController
}

namespace CPhysPulley { // CPhysConstraint
    constexpr std::ptrdiff_t m_position2 = 0x800; // Vector
    constexpr std::ptrdiff_t m_offset = 0x80C; // Vector[2]
    constexpr std::ptrdiff_t m_addLength = 0x824; // float
    constexpr std::ptrdiff_t m_gearRatio = 0x828; // float
}

namespace CPhysSlideConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_axisEnd = 0x808; // Vector
    constexpr std::ptrdiff_t m_slideFriction = 0x814; // float
    constexpr std::ptrdiff_t m_systemLoadScale = 0x818; // float
    constexpr std::ptrdiff_t m_initialOffset = 0x81C; // float
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x820; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x821; // bool
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x824; // float
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x828; // float
    constexpr std::ptrdiff_t m_bUseEntityPivot = 0x82C; // bool
    constexpr std::ptrdiff_t m_soundInfo = 0x830; // ConstraintSoundInfo
}

namespace CPhysThruster { // CPhysForce
    constexpr std::ptrdiff_t m_localOrigin = 0x808; // Vector
}

namespace CPhysTorque { // CPhysForce
    constexpr std::ptrdiff_t m_axis = 0x808; // Vector
}

namespace CPhysWheelConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x800; // float
    constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x804; // float
    constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x808; // float
    constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x80C; // bool
    constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x810; // float
    constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x814; // float
    constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x818; // bool
    constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x81C; // float
    constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x820; // float
    constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x824; // float
    constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x828; // float
}

namespace CPhysicalButton { // CBaseButton
}

namespace CPhysicsEntitySolver { // CLogicalEntity
    constexpr std::ptrdiff_t m_hMovingEntity = 0x7B0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x7B4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_separationDuration = 0x7B8; // float
    constexpr std::ptrdiff_t m_cancelTime = 0x7BC; // GameTime_t
}

namespace CPhysicsProp { // CBreakableProp
    constexpr std::ptrdiff_t m_MotionEnabled = 0xD70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0xD98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwake = 0xDC0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAsleep = 0xDE8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xE10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xE38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOutOfWorld = 0xE60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0xE88; // float
    constexpr std::ptrdiff_t m_inertiaScale = 0xE8C; // float
    constexpr std::ptrdiff_t m_buoyancyScale = 0xE90; // float
    constexpr std::ptrdiff_t m_damageType = 0xE94; // int32_t
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0xE98; // int32_t
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xE9C; // float
    constexpr std::ptrdiff_t m_bThrownByPlayer = 0xEA0; // bool
    constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xEA1; // bool
    constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xEA2; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xEA3; // bool
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xEA4; // int32_t
    constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xEA8; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xEA9; // bool
    constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xEAC; // GameTime_t
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xEB0; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0xEB4; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xEB8; // int32_t
    constexpr std::ptrdiff_t m_glowColor = 0xEBC; // Color
    constexpr std::ptrdiff_t m_bForceNavIgnore = 0xEC0; // bool
    constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xEC1; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xEC2; // bool
    constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xEC3; // bool
    constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xEC4; // bool
    constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xECC; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0xECD; // bool
    constexpr std::ptrdiff_t m_bAwake = 0xECE; // bool
    constexpr std::ptrdiff_t m_nCollisionGroupOverride = 0xED0; // int32_t
}

namespace CPhysicsPropMultiplayer { // CPhysicsProp
}

namespace CPhysicsPropOverride { // CPhysicsProp
}

namespace CPhysicsPropRespawnable { // CPhysicsProp
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xED4; // Vector
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xEE0; // QAngle
    constexpr std::ptrdiff_t m_vOriginalMins = 0xEEC; // Vector
    constexpr std::ptrdiff_t m_vOriginalMaxs = 0xEF8; // Vector
    constexpr std::ptrdiff_t m_flRespawnDuration = 0xF04; // float
}

namespace CPhysicsShake {
    constexpr std::ptrdiff_t m_force = 0x8; // Vector
}

namespace CPhysicsSpring { // CBaseEntity
    constexpr std::ptrdiff_t m_flFrequency = 0x7B0; // float
    constexpr std::ptrdiff_t m_flDampingRatio = 0x7B4; // float
    constexpr std::ptrdiff_t m_flRestLength = 0x7B8; // float
    constexpr std::ptrdiff_t m_nameAttachStart = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttachEnd = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_start = 0x7D0; // Vector
    constexpr std::ptrdiff_t m_end = 0x7DC; // Vector
    constexpr std::ptrdiff_t m_teleportTick = 0x7E8; // uint32_t
}

namespace CPhysicsWire { // CBaseEntity
    constexpr std::ptrdiff_t m_nDensity = 0x7A8; // int32_t
}

namespace CPlantedC4 { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bBombTicking = 0xBF0; // bool
    constexpr std::ptrdiff_t m_flC4Blow = 0xBF4; // GameTime_t
    constexpr std::ptrdiff_t m_nBombSite = 0xBF8; // int32_t
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xBFC; // int32_t
    constexpr std::ptrdiff_t m_OnBombDefused = 0xC00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xC28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xC50; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0xC78; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0xC80; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xC98; // int32_t
    constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xC9C; // bool
    constexpr std::ptrdiff_t m_bHasExploded = 0xC9D; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0xCA0; // float
    constexpr std::ptrdiff_t m_bBeingDefused = 0xCA4; // bool
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0xCAC; // GameTime_t
    constexpr std::ptrdiff_t m_flDefuseLength = 0xCB4; // float
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0xCB8; // GameTime_t
    constexpr std::ptrdiff_t m_bBombDefused = 0xCBC; // bool
    constexpr std::ptrdiff_t m_hBombDefuser = 0xCC0; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_hControlPanel = 0xCC4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iProgressBarTime = 0xCC8; // int32_t
    constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xCCC; // bool
    constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xCCD; // bool[4]
    constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xCD4; // GameTime_t
    constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xCDC; // QAngle
    constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xCE8; // GameTime_t
}

namespace CPlatTrigger { // CBaseModelEntity
    constexpr std::ptrdiff_t m_pPlatform = 0x9F8; // CHandle<CFuncPlat>
}

namespace CPlayerControllerComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CPlayerPawnComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CPlayerPing { // CBaseEntity
    constexpr std::ptrdiff_t m_hPlayer = 0x7B0; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_hPingedEntity = 0x7B4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iType = 0x7B8; // int32_t
    constexpr std::ptrdiff_t m_bUrgent = 0x7BC; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x7BD; // char[18]
}

namespace CPlayerSprayDecal { // CModelPointEntity
    constexpr std::ptrdiff_t m_nUniqueID = 0x9F8; // int32_t
    constexpr std::ptrdiff_t m_unAccountID = 0x9FC; // uint32_t
    constexpr std::ptrdiff_t m_unTraceID = 0xA00; // uint32_t
    constexpr std::ptrdiff_t m_rtGcTime = 0xA04; // uint32_t
    constexpr std::ptrdiff_t m_vecEndPos = 0xA08; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0xA14; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0xA20; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0xA2C; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0xA38; // int32_t
    constexpr std::ptrdiff_t m_nEntity = 0xA3C; // int32_t
    constexpr std::ptrdiff_t m_nHitbox = 0xA40; // int32_t
    constexpr std::ptrdiff_t m_flCreationTime = 0xA44; // float
    constexpr std::ptrdiff_t m_nTintID = 0xA48; // int32_t
    constexpr std::ptrdiff_t m_nVersion = 0xA4C; // uint8_t
    constexpr std::ptrdiff_t m_ubSignature = 0xA4D; // uint8_t[128]
}

namespace CPlayerVisibility { // CBaseEntity
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x7A8; // float
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x7AC; // float
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x7B0; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x7B4; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x7B8; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x7B9; // bool
}

namespace CPlayer_AutoaimServices { // CPlayerPawnComponent
}

namespace CPlayer_CameraServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float
    constexpr std::ptrdiff_t m_PlayerFog = 0x58; // fogplayerparams_t
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
    constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
    constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float
    constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
}

namespace CPlayer_FlashlightServices { // CPlayerPawnComponent
}

namespace CPlayer_ItemServices { // CPlayerPawnComponent
}

namespace CPlayer_MovementServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32_t
    constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
    constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64_t
    constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64_t
    constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64_t
    constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32_t[64]
    constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32_t
    constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64_t
    constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float
    constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float[4]
    constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float
    constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float
    constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
}

namespace CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float
    constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float
    constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
    constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32_t
    constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
    constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
    constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
    constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
    constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float
    constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
    constexpr std::ptrdiff_t m_nStepside = 0x210; // int32_t
    constexpr std::ptrdiff_t m_iTargetVolume = 0x214; // int32_t
    constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x218; // Vector
}

namespace CPlayer_ObserverServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8_t
    constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
}

namespace CPlayer_UseServices { // CPlayerPawnComponent
}

namespace CPlayer_ViewModelServices { // CPlayerPawnComponent
}

namespace CPlayer_WaterServices { // CPlayerPawnComponent
}

namespace CPlayer_WeaponServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16_t[32]
    constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA0; // bool
}

namespace CPointAngleSensor { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_nLookAtName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetEntity = 0x7B8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hLookAtEntity = 0x7BC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flDuration = 0x7C0; // float
    constexpr std::ptrdiff_t m_flDotTolerance = 0x7C4; // float
    constexpr std::ptrdiff_t m_flFacingTime = 0x7C8; // GameTime_t
    constexpr std::ptrdiff_t m_bFired = 0x7CC; // bool
    constexpr std::ptrdiff_t m_OnFacingLookat = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_TargetDir = 0x820; // CEntityOutputTemplate<Vector>
    constexpr std::ptrdiff_t m_FacingPercentage = 0x848; // CEntityOutputTemplate<float>
}

namespace CPointAngularVelocitySensor { // CPointEntity
    constexpr std::ptrdiff_t m_hTargetEntity = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flThreshold = 0x7AC; // float
    constexpr std::ptrdiff_t m_nLastCompareResult = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_nLastFireResult = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_flFireTime = 0x7B8; // GameTime_t
    constexpr std::ptrdiff_t m_flFireInterval = 0x7BC; // float
    constexpr std::ptrdiff_t m_flLastAngVelocity = 0x7C0; // float
    constexpr std::ptrdiff_t m_lastOrientation = 0x7C4; // QAngle
    constexpr std::ptrdiff_t m_vecAxis = 0x7D0; // Vector
    constexpr std::ptrdiff_t m_bUseHelper = 0x7DC; // bool
    constexpr std::ptrdiff_t m_AngularVelocity = 0x7E0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnLessThan = 0x808; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x830; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x858; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x880; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEqualTo = 0x8A8; // CEntityIOOutput
}

namespace CPointBroadcastClientCommand { // CPointEntity
}

namespace CPointCamera { // CBaseEntity
    constexpr std::ptrdiff_t m_FOV = 0x7A8; // float
    constexpr std::ptrdiff_t m_Resolution = 0x7AC; // float
    constexpr std::ptrdiff_t m_bFogEnable = 0x7B0; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x7B1; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x7B8; // float
    constexpr std::ptrdiff_t m_flFogEnd = 0x7BC; // float
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x7C0; // float
    constexpr std::ptrdiff_t m_bActive = 0x7C4; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x7C5; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x7C8; // float
    constexpr std::ptrdiff_t m_bNoSky = 0x7CC; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x7D0; // float
    constexpr std::ptrdiff_t m_flZFar = 0x7D4; // float
    constexpr std::ptrdiff_t m_flZNear = 0x7D8; // float
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x7DC; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x7DD; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x7E0; // float
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x7E4; // float
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x7E8; // float
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x7EC; // float
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x7F0; // float
    constexpr std::ptrdiff_t m_TargetFOV = 0x7F4; // float
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x7F8; // float
    constexpr std::ptrdiff_t m_bIsOn = 0x7FC; // bool
    constexpr std::ptrdiff_t m_pNext = 0x800; // CPointCamera*
}

namespace CPointCameraVFOV { // CPointCamera
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x808; // float
}

namespace CPointClientCommand { // CPointEntity
}

namespace CPointClientUIDialog { // CBaseClientUIEntity
    constexpr std::ptrdiff_t m_hActivator = 0xBA8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bStartEnabled = 0xBAC; // bool
}

namespace CPointClientUIWorldPanel { // CBaseClientUIEntity
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xBA8; // bool
    constexpr std::ptrdiff_t m_bLit = 0xBA9; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xBAA; // bool
    constexpr std::ptrdiff_t m_flWidth = 0xBAC; // float
    constexpr std::ptrdiff_t m_flHeight = 0xBB0; // float
    constexpr std::ptrdiff_t m_flDPI = 0xBB4; // float
    constexpr std::ptrdiff_t m_flInteractDistance = 0xBB8; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xBBC; // float
    constexpr std::ptrdiff_t m_unOwnerContext = 0xBC0; // uint32_t
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xBC4; // uint32_t
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xBC8; // uint32_t
    constexpr std::ptrdiff_t m_unOrientation = 0xBCC; // uint32_t
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xBD0; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xBD8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_bOpaque = 0xBF0; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0xBF1; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0xBF2; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xBF3; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xBF4; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0xBF5; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xBF6; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0xBF7; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xBF8; // int32_t
}

namespace CPointClientUIWorldTextPanel { // CPointClientUIWorldPanel
    constexpr std::ptrdiff_t m_messageText = 0xBFC; // char[512]
}

namespace CPointCommentaryNode { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_iszPreCommands = 0xBF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostCommands = 0xBF8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0xC00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszViewTarget = 0xC08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewTarget = 0xC10; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hViewTargetAngles = 0xC14; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszViewPosition = 0xC18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewPosition = 0xC20; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hViewPositionMover = 0xC24; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bPreventMovement = 0xC28; // bool
    constexpr std::ptrdiff_t m_bUnderCrosshair = 0xC29; // bool
    constexpr std::ptrdiff_t m_bUnstoppable = 0xC2A; // bool
    constexpr std::ptrdiff_t m_flFinishedTime = 0xC2C; // GameTime_t
    constexpr std::ptrdiff_t m_vecFinishOrigin = 0xC30; // Vector
    constexpr std::ptrdiff_t m_vecOriginalAngles = 0xC3C; // QAngle
    constexpr std::ptrdiff_t m_vecFinishAngles = 0xC48; // QAngle
    constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0xC54; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0xC55; // bool
    constexpr std::ptrdiff_t m_vecTeleportOrigin = 0xC58; // Vector
    constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0xC64; // GameTime_t
    constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0xC68; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xC90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActive = 0xCB8; // bool
    constexpr std::ptrdiff_t m_flStartTime = 0xCBC; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xCC0; // float
    constexpr std::ptrdiff_t m_iszTitle = 0xCC8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0xCD0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0xCD8; // int32_t
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0xCDC; // int32_t
    constexpr std::ptrdiff_t m_bListenedTo = 0xCE0; // bool
}

namespace CPointEntity { // CBaseEntity
}

namespace CPointEntityFinder { // CBaseEntity
    constexpr std::ptrdiff_t m_hEntity = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iFilterName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x7B8; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_iRefName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hReference = 0x7C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_FindMethod = 0x7CC; // EntFinderMethod_t
    constexpr std::ptrdiff_t m_OnFoundEntity = 0x7D0; // CEntityIOOutput
}

namespace CPointGamestatsCounter { // CPointEntity
    constexpr std::ptrdiff_t m_strStatisticName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x7B0; // bool
}

namespace CPointGiveAmmo { // CPointEntity
    constexpr std::ptrdiff_t m_pActivator = 0x7A8; // CHandle<CBaseEntity>
}

namespace CPointHurt { // CPointEntity
    constexpr std::ptrdiff_t m_nDamage = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_bitsDamageType = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_flRadius = 0x7B0; // float
    constexpr std::ptrdiff_t m_flDelay = 0x7B4; // float
    constexpr std::ptrdiff_t m_strTarget = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pActivator = 0x7C0; // CHandle<CBaseEntity>
}

namespace CPointPrefab { // CServerOnlyPointEntity
    constexpr std::ptrdiff_t m_targetMapName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceWorldGroupID = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fixupNames = 0x7C0; // bool
    constexpr std::ptrdiff_t m_bLoadDynamic = 0x7C1; // bool
    constexpr std::ptrdiff_t m_associatedRelayEntity = 0x7C4; // CHandle<CPointPrefab>
}

namespace CPointProximitySensor { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_hTargetEntity = 0x7AC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_Distance = 0x7B0; // CEntityOutputTemplate<float>
}

namespace CPointPulse { // CBaseEntity
}

namespace CPointPush { // CPointEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x7AC; // float
    constexpr std::ptrdiff_t m_flRadius = 0x7B0; // float
    constexpr std::ptrdiff_t m_flInnerRadius = 0x7B4; // float
    constexpr std::ptrdiff_t m_flConeOfInfluence = 0x7B8; // float
    constexpr std::ptrdiff_t m_iszFilterName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x7C8; // CHandle<CBaseFilter>
}

namespace CPointScriptEntity { // CBaseEntity
}

namespace CPointServerCommand { // CPointEntity
}

namespace CPointTeleport { // CServerOnlyPointEntity
    constexpr std::ptrdiff_t m_vSaveOrigin = 0x7A8; // Vector
    constexpr std::ptrdiff_t m_vSaveAngles = 0x7B4; // QAngle
    constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x7C0; // bool
    constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x7C1; // bool
}

namespace CPointTemplate { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszWorldName = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x7C0; // float
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x7C4; // bool
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x7C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x7F0; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x7F4; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x7F8; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x810; // CUtlVector<CEntityHandle>
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x828; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x830; // HSCRIPT
}

namespace CPointValueRemapper { // CBaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x7A9; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x7AC; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x7C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x7C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x7C8; // float
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x7CC; // float
    constexpr std::ptrdiff_t m_flEngageDistance = 0x7D0; // float
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x7D4; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x7D8; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_iszOutputEntityName = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x7F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOutputEntities = 0x800; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_nHapticsType = 0x818; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x81C; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x820; // float
    constexpr std::ptrdiff_t m_flSnapValue = 0x824; // float
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x828; // float
    constexpr std::ptrdiff_t m_nRatchetType = 0x82C; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x830; // float
    constexpr std::ptrdiff_t m_flInputOffset = 0x834; // float
    constexpr std::ptrdiff_t m_bEngaged = 0x838; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x839; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x83C; // float
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x840; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x844; // Vector
    constexpr std::ptrdiff_t m_hUsingPlayer = 0x850; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flCustomOutputValue = 0x854; // float
    constexpr std::ptrdiff_t m_iszSoundEngage = 0x858; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundDisengage = 0x860; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x868; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x870; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x878; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Position = 0x888; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_PositionDelta = 0x8B0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnReachedValueZero = 0x8D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueOne = 0x900; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x928; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEngage = 0x950; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDisengage = 0x978; // CEntityIOOutput
}

namespace CPointVelocitySensor { // CPointEntity
    constexpr std::ptrdiff_t m_hTargetEntity = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecAxis = 0x7AC; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x7B8; // bool
    constexpr std::ptrdiff_t m_fPrevVelocity = 0x7BC; // float
    constexpr std::ptrdiff_t m_flAvgInterval = 0x7C0; // float
    constexpr std::ptrdiff_t m_Velocity = 0x7C8; // CEntityOutputTemplate<float>
}

namespace CPointWorldText { // CModelPointEntity
    constexpr std::ptrdiff_t m_messageText = 0x9F8; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0xBF8; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0xC38; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0xC39; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xC3C; // float
    constexpr std::ptrdiff_t m_flFontSize = 0xC40; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xC44; // float
    constexpr std::ptrdiff_t m_Color = 0xC48; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xC4C; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0xC50; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0xC54; // PointWorldTextReorientMode_t
}

namespace CPostProcessingVolume { // CBaseTrigger
    constexpr std::ptrdiff_t m_hPostSettings = 0xBB0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    constexpr std::ptrdiff_t m_flFadeDuration = 0xBB8; // float
    constexpr std::ptrdiff_t m_flMinLogExposure = 0xBBC; // float
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0xBC0; // float
    constexpr std::ptrdiff_t m_flMinExposure = 0xBC4; // float
    constexpr std::ptrdiff_t m_flMaxExposure = 0xBC8; // float
    constexpr std::ptrdiff_t m_flExposureCompensation = 0xBCC; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xBD0; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xBD4; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xBD8; // float
    constexpr std::ptrdiff_t m_bMaster = 0xBDC; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0xBDD; // bool
    constexpr std::ptrdiff_t m_flRate = 0xBE0; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xBE4; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xBE8; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xBEC; // float
}

namespace CPrecipitation { // CBaseTrigger
}

namespace CPrecipitationBlocker { // CBaseModelEntity
}

namespace CPrecipitationVData { // CEntitySubclassVDataBase
    constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float
    constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
    constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32_t
    constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32_t
    constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
}

namespace CPredictedViewModel { // CBaseViewModel
}

namespace CProjectedDecal { // CPointEntity
    constexpr std::ptrdiff_t m_nTexture = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_flDistance = 0x7AC; // float
}

namespace CPropDoorRotating { // CBasePropDoor
    constexpr std::ptrdiff_t m_vecAxis = 0x10F0; // Vector
    constexpr std::ptrdiff_t m_flDistance = 0x10FC; // float
    constexpr std::ptrdiff_t m_eSpawnPosition = 0x1100; // PropDoorRotatingSpawnPos_t
    constexpr std::ptrdiff_t m_eOpenDirection = 0x1104; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0x1108; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_flAjarAngle = 0x110C; // float
    constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0x1110; // QAngle
    constexpr std::ptrdiff_t m_angRotationClosed = 0x111C; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenForward = 0x1128; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenBack = 0x1134; // QAngle
    constexpr std::ptrdiff_t m_angGoal = 0x1140; // QAngle
    constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0x114C; // Vector
    constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0x1158; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMin = 0x1164; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMax = 0x1170; // Vector
    constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0x117C; // bool
    constexpr std::ptrdiff_t m_hEntityBlocker = 0x1180; // CHandle<CEntityBlocker>
}

namespace CPropDoorRotatingBreakable { // CPropDoorRotating
    constexpr std::ptrdiff_t m_bBreakable = 0x1184; // bool
    constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0x1185; // bool
    constexpr std::ptrdiff_t m_currentDamageState = 0x1188; // int32_t
    constexpr std::ptrdiff_t m_damageStates = 0x1190; // CUtlVector<CUtlSymbolLarge>
}

namespace CPulseCell_Inflow_GameEvent { // CPulseCell_Inflow_BaseEntrypoint
    constexpr std::ptrdiff_t m_EventName = 0x70; // CBufferString
}

namespace CPulseCell_Outflow_PlaySceneBase { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_OnFinished = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0x58; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_Triggers = 0x68; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_PlaySceneBase_CursorState_t {
    constexpr std::ptrdiff_t m_sceneInstance = 0x0; // CHandle<CBaseEntity>
}

namespace CPulseCell_Outflow_PlaySequence { // CPulseCell_Outflow_PlaySceneBase
    constexpr std::ptrdiff_t m_ParamSequenceName = 0x80; // CUtlString
}

namespace CPulseCell_Outflow_PlayVCD { // CPulseCell_Outflow_PlaySceneBase
    constexpr std::ptrdiff_t m_vcdFilename = 0x80; // CUtlString
}

namespace CPulseCell_Outflow_ScriptedSequence { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_scriptedSequenceDataMain = 0x48; // PulseScriptedSequenceData_t
    constexpr std::ptrdiff_t m_vecAdditionalActors = 0x78; // CUtlVector<PulseScriptedSequenceData_t>
    constexpr std::ptrdiff_t m_OnFinished = 0x90; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xA0; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_Triggers = 0xB0; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_ScriptedSequence_CursorState_t {
    constexpr std::ptrdiff_t m_scriptedSequence = 0x0; // CHandle<CBaseEntity>
}

namespace CPulseCell_SoundEventStart { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Type = 0x48; // SoundEventStartType_t
}

namespace CPulseCell_Step_EntFire { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

namespace CPulseCell_Step_FollowEntity { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_ParamBoneOrAttachName = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_ParamBoneOrAttachNameChild = 0x50; // CUtlString
}

namespace CPulseCell_Value_FindEntByClassNameWithin { // CPulseCell_BaseValue
    constexpr std::ptrdiff_t m_EntityType = 0x48; // CUtlString
}

namespace CPulseCell_Value_FindEntByName { // CPulseCell_BaseValue
    constexpr std::ptrdiff_t m_EntityType = 0x48; // CUtlString
}

namespace CPulseGraphComponentBase {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sNameFixupParent = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sNameFixupLocal = 0x20; // CUtlSymbolLarge
}

namespace CPulseGraphComponentPointServer { // CPulseGraphComponentBase
}

namespace CPulseGraphInstance_ServerEntity { // CBasePulseGraphInstance
    constexpr std::ptrdiff_t m_pComponent = 0xD8; // CPulseGraphComponentBase*
}

namespace CPulseGraphInstance_ServerPointEntity { // CPulseGraphInstance_ServerEntity
}

namespace CPulseServerCursor { // CPulseExecCursor
}

namespace CPulseServerFuncs {
}

namespace CPulseServerFuncs_Sounds {
}

namespace CPushable { // CBreakable
}

namespace CRR_Response {
    constexpr std::ptrdiff_t m_Type = 0x0; // uint8_t
    constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
    constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
    constexpr std::ptrdiff_t m_Params = 0x141; // ResponseParams
    constexpr std::ptrdiff_t m_fMatchScore = 0x160; // float
    constexpr std::ptrdiff_t m_szSpeakerContext = 0x168; // char*
    constexpr std::ptrdiff_t m_szWorldContext = 0x170; // char*
    constexpr std::ptrdiff_t m_Followup = 0x178; // ResponseFollowup
    constexpr std::ptrdiff_t m_pchCriteriaNames = 0x1B0; // CUtlVector<CUtlSymbol>
    constexpr std::ptrdiff_t m_pchCriteriaValues = 0x1C8; // CUtlVector<char*>
}

namespace CRagdollConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_xmin = 0x800; // float
    constexpr std::ptrdiff_t m_xmax = 0x804; // float
    constexpr std::ptrdiff_t m_ymin = 0x808; // float
    constexpr std::ptrdiff_t m_ymax = 0x80C; // float
    constexpr std::ptrdiff_t m_zmin = 0x810; // float
    constexpr std::ptrdiff_t m_zmax = 0x814; // float
    constexpr std::ptrdiff_t m_xfriction = 0x818; // float
    constexpr std::ptrdiff_t m_yfriction = 0x81C; // float
    constexpr std::ptrdiff_t m_zfriction = 0x820; // float
}

namespace CRagdollMagnet { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_radius = 0x7AC; // float
    constexpr std::ptrdiff_t m_force = 0x7B0; // float
    constexpr std::ptrdiff_t m_axis = 0x7B4; // Vector
}

namespace CRagdollManager { // CBaseEntity
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x7A8; // int8_t
    constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_bSaveImportant = 0x7B0; // bool
}

namespace CRagdollProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_ragdoll = 0xBF8; // ragdoll_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0xC30; // bool
    constexpr std::ptrdiff_t m_ragPos = 0xC38; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_ragAngles = 0xC50; // CNetworkUtlVectorBase<QAngle>
    constexpr std::ptrdiff_t m_hRagdollSource = 0xC68; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_lastUpdateTickCount = 0xC6C; // uint32_t
    constexpr std::ptrdiff_t m_allAsleep = 0xC70; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xC71; // bool
    constexpr std::ptrdiff_t m_hDamageEntity = 0xC74; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hKiller = 0xC78; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xC7C; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xC80; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeOutStartTime = 0xC84; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeTime = 0xC88; // float
    constexpr std::ptrdiff_t m_vecLastOrigin = 0xC8C; // Vector
    constexpr std::ptrdiff_t m_flAwakeTime = 0xC98; // GameTime_t
    constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0xC9C; // GameTime_t
    constexpr std::ptrdiff_t m_nBloodColor = 0xCA0; // int32_t
    constexpr std::ptrdiff_t m_strOriginClassName = 0xCA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strSourceClassName = 0xCB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0xCB8; // bool
    constexpr std::ptrdiff_t m_bShouldTeleportPhysics = 0xCB9; // bool
    constexpr std::ptrdiff_t m_flBlendWeight = 0xCBC; // float
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xCC0; // float
    constexpr std::ptrdiff_t m_ragdollMins = 0xCC8; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_ragdollMaxs = 0xCE0; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xCF8; // bool
    constexpr std::ptrdiff_t m_bValidatePoweredRagdollPose = 0xD58; // bool
}

namespace CRagdollPropAlias_physics_prop_ragdoll { // CRagdollProp
}

namespace CRagdollPropAttached { // CRagdollProp
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xD98; // uint32_t
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xD9C; // uint32_t
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xDA0; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xDAC; // Vector
    constexpr std::ptrdiff_t m_bShouldDetach = 0xDB8; // bool
    constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xDC8; // bool
}

namespace CRandSimTimer { // CSimpleSimTimer
    constexpr std::ptrdiff_t m_minInterval = 0x8; // float
    constexpr std::ptrdiff_t m_maxInterval = 0xC; // float
}

namespace CRandStopwatch { // CStopwatchBase
    constexpr std::ptrdiff_t m_minInterval = 0xC; // float
    constexpr std::ptrdiff_t m_maxInterval = 0x10; // float
}

namespace CRangeFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float[2]
}

namespace CRangeInt {
    constexpr std::ptrdiff_t m_pValue = 0x0; // int32_t[2]
}

namespace CRectLight { // CBarnLight
    constexpr std::ptrdiff_t m_bShowLight = 0xC20; // bool
}

namespace CRemapFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float[4]
}

namespace CRenderComponent { // CEntityComponent
    constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32_t
    constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xC0; // bool
}

namespace CResponseCriteriaSet {
    constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x28; // int32_t
    constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x2C; // bool
}

namespace CResponseQueue {
    constexpr std::ptrdiff_t m_ExpresserTargets = 0x48; // CUtlVector<CAI_Expresser*>
}

namespace CResponseQueue_CDeferredResponse {
    constexpr std::ptrdiff_t m_contexts = 0x8; // CResponseCriteriaSet
    constexpr std::ptrdiff_t m_fDispatchTime = 0x38; // float
    constexpr std::ptrdiff_t m_hIssuer = 0x3C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_response = 0x48; // CRR_Response
    constexpr std::ptrdiff_t m_bResponseValid = 0x228; // bool
}

namespace CRetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32_t
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32_t
    constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32_t
}

namespace CRevertSaved { // CModelPointEntity
    constexpr std::ptrdiff_t m_loadTime = 0x9F8; // float
    constexpr std::ptrdiff_t m_Duration = 0x9FC; // float
    constexpr std::ptrdiff_t m_HoldTime = 0xA00; // float
}

namespace CRopeKeyframe { // CBaseModelEntity
    constexpr std::ptrdiff_t m_RopeFlags = 0xA00; // uint16_t
    constexpr std::ptrdiff_t m_iNextLinkName = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Slack = 0xA10; // int16_t
    constexpr std::ptrdiff_t m_Width = 0xA14; // float
    constexpr std::ptrdiff_t m_TextureScale = 0xA18; // float
    constexpr std::ptrdiff_t m_nSegments = 0xA1C; // uint8_t
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0xA1D; // bool
    constexpr std::ptrdiff_t m_strRopeMaterialModel = 0xA20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xA28; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_Subdiv = 0xA30; // uint8_t
    constexpr std::ptrdiff_t m_nChangeCount = 0xA31; // uint8_t
    constexpr std::ptrdiff_t m_RopeLength = 0xA32; // int16_t
    constexpr std::ptrdiff_t m_fLockedPoints = 0xA34; // uint8_t
    constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0xA35; // bool
    constexpr std::ptrdiff_t m_flScrollSpeed = 0xA38; // float
    constexpr std::ptrdiff_t m_bStartPointValid = 0xA3C; // bool
    constexpr std::ptrdiff_t m_bEndPointValid = 0xA3D; // bool
    constexpr std::ptrdiff_t m_hStartPoint = 0xA40; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hEndPoint = 0xA44; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iStartAttachment = 0xA48; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0xA49; // AttachmentHandle_t
}

namespace CRopeKeyframeAlias_move_rope { // CRopeKeyframe
}

namespace CRopeOverlapHit {
    constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecOverlappingLinks = 0x8; // CUtlVector<int32_t>
}

namespace CRotButton { // CBaseButton
}

namespace CRotDoor { // CBaseDoor
    constexpr std::ptrdiff_t m_bSolidBsp = 0xC7B; // bool
}

namespace CRuleBrushEntity { // CRuleEntity
}

namespace CRuleEntity { // CBaseModelEntity
    constexpr std::ptrdiff_t m_iszMaster = 0x9F8; // CUtlSymbolLarge
}

namespace CRulePointEntity { // CRuleEntity
    constexpr std::ptrdiff_t m_Score = 0xA00; // int32_t
}

namespace CSAdditionalMatchStats_t { // CSAdditionalPerRoundStats_t
    constexpr std::ptrdiff_t m_numRoundsSurvived = 0x14; // int32_t
    constexpr std::ptrdiff_t m_maxNumRoundsSurvived = 0x18; // int32_t
    constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x1C; // int32_t
    constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x20; // int32_t
    constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x24; // int32_t
    constexpr std::ptrdiff_t m_numFirstKills = 0x28; // int32_t
    constexpr std::ptrdiff_t m_numClutchKills = 0x2C; // int32_t
    constexpr std::ptrdiff_t m_numPistolKills = 0x30; // int32_t
    constexpr std::ptrdiff_t m_numSniperKills = 0x34; // int32_t
    constexpr std::ptrdiff_t m_iNumSuicides = 0x38; // int32_t
    constexpr std::ptrdiff_t m_iNumTeamKills = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_iTeamDamage = 0x40; // int32_t
}

namespace CSAdditionalPerRoundStats_t {
    constexpr std::ptrdiff_t m_numChickensKilled = 0x0; // int32_t
    constexpr std::ptrdiff_t m_killsWhileBlind = 0x4; // int32_t
    constexpr std::ptrdiff_t m_bombCarrierkills = 0x8; // int32_t
    constexpr std::ptrdiff_t m_iBurnDamageInflicted = 0xC; // int32_t
    constexpr std::ptrdiff_t m_iDinks = 0x10; // int32_t
}

namespace CSMatchStats_t { // CSPerRoundStats_t
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x64; // int32_t
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x68; // int32_t
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x6C; // int32_t
    constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x70; // int32_t
    constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x74; // int32_t
    constexpr std::ptrdiff_t m_iEnemy2Ks = 0x78; // int32_t
    constexpr std::ptrdiff_t m_iUtility_Count = 0x7C; // int32_t
    constexpr std::ptrdiff_t m_iUtility_Successes = 0x80; // int32_t
    constexpr std::ptrdiff_t m_iUtility_Enemies = 0x84; // int32_t
    constexpr std::ptrdiff_t m_iFlash_Count = 0x88; // int32_t
    constexpr std::ptrdiff_t m_iFlash_Successes = 0x8C; // int32_t
    constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x90; // int32_t
    constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x94; // int32_t
    constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x98; // int32_t
    constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0x9C; // int32_t
    constexpr std::ptrdiff_t m_i1v1Count = 0xA0; // int32_t
    constexpr std::ptrdiff_t m_i1v1Wins = 0xA4; // int32_t
    constexpr std::ptrdiff_t m_i1v2Count = 0xA8; // int32_t
    constexpr std::ptrdiff_t m_i1v2Wins = 0xAC; // int32_t
    constexpr std::ptrdiff_t m_iEntryCount = 0xB0; // int32_t
    constexpr std::ptrdiff_t m_iEntryWins = 0xB4; // int32_t
}

namespace CSPerRoundStats_t {
    constexpr std::ptrdiff_t m_iKills = 0x30; // int32_t
    constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32_t
    constexpr std::ptrdiff_t m_iAssists = 0x38; // int32_t
    constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32_t
    constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32_t
    constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32_t
    constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32_t
    constexpr std::ptrdiff_t m_iObjective = 0x54; // int32_t
    constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32_t
    constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32_t
}

namespace CSceneEntity { // CPointEntity
    constexpr std::ptrdiff_t m_iszSceneFile = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget1 = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget2 = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget3 = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget4 = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget5 = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget6 = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget7 = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget8 = 0x7F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTarget1 = 0x800; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget2 = 0x804; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget3 = 0x808; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget4 = 0x80C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget5 = 0x810; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget6 = 0x814; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget7 = 0x818; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget8 = 0x81C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x820; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x821; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x822; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x823; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x824; // float
    constexpr std::ptrdiff_t m_flCurrentTime = 0x828; // float
    constexpr std::ptrdiff_t m_flFrameTime = 0x82C; // float
    constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x830; // bool
    constexpr std::ptrdiff_t m_fPitch = 0x834; // float
    constexpr std::ptrdiff_t m_bAutomated = 0x838; // bool
    constexpr std::ptrdiff_t m_nAutomatedAction = 0x83C; // int32_t
    constexpr std::ptrdiff_t m_flAutomationDelay = 0x840; // float
    constexpr std::ptrdiff_t m_flAutomationTime = 0x844; // float
    constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x848; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x84C; // bool
    constexpr std::ptrdiff_t m_bPausedViaInput = 0x84D; // bool
    constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x84E; // bool
    constexpr std::ptrdiff_t m_bWaitingForActor = 0x84F; // bool
    constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x850; // bool
    constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x851; // bool
    constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x852; // bool
    constexpr std::ptrdiff_t m_hActorList = 0x858; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    constexpr std::ptrdiff_t m_hRemoveActorList = 0x870; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x8B8; // int32_t
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x8BC; // uint16_t
    constexpr std::ptrdiff_t m_OnStart = 0x8C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCompletion = 0x8E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCanceled = 0x910; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPaused = 0x938; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnResumed = 0x960; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTrigger = 0x988; // CEntityIOOutput[16]
    constexpr std::ptrdiff_t m_hInterruptScene = 0xC98; // CHandle<CSceneEntity>
    constexpr std::ptrdiff_t m_nInterruptCount = 0xC9C; // int32_t
    constexpr std::ptrdiff_t m_bSceneMissing = 0xCA0; // bool
    constexpr std::ptrdiff_t m_bInterrupted = 0xCA1; // bool
    constexpr std::ptrdiff_t m_bCompletedEarly = 0xCA2; // bool
    constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0xCA3; // bool
    constexpr std::ptrdiff_t m_bRestoring = 0xCA4; // bool
    constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0xCA8; // CUtlVector<CHandle<CSceneEntity>>
    constexpr std::ptrdiff_t m_hListManagers = 0xCC0; // CUtlVector<CHandle<CSceneListManager>>
    constexpr std::ptrdiff_t m_iszSoundName = 0xCD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSequenceName = 0xCE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hActor = 0xCE8; // CHandle<CBaseFlex>
    constexpr std::ptrdiff_t m_hActivator = 0xCEC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_BusyActor = 0xCF0; // int32_t
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0xCF4; // SceneOnPlayerDeath_t
}

namespace CSceneEntityAlias_logic_choreographed_scene { // CSceneEntity
}

namespace CSceneEventInfo {
    constexpr std::ptrdiff_t m_iLayer = 0x0; // int32_t
    constexpr std::ptrdiff_t m_iPriority = 0x4; // int32_t
    constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
    constexpr std::ptrdiff_t m_flWeight = 0xC; // float
    constexpr std::ptrdiff_t m_bHasArrived = 0x10; // bool
    constexpr std::ptrdiff_t m_nType = 0x14; // int32_t
    constexpr std::ptrdiff_t m_flNext = 0x18; // GameTime_t
    constexpr std::ptrdiff_t m_bIsGesture = 0x1C; // bool
    constexpr std::ptrdiff_t m_bShouldRemove = 0x1D; // bool
    constexpr std::ptrdiff_t m_hTarget = 0x44; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nSceneEventId = 0x48; // uint32_t
    constexpr std::ptrdiff_t m_bClientSide = 0x4C; // bool
    constexpr std::ptrdiff_t m_bStarted = 0x4D; // bool
}

namespace CSceneListManager { // CLogicalEntity
    constexpr std::ptrdiff_t m_hListManagers = 0x7A8; // CUtlVector<CHandle<CSceneListManager>>
    constexpr std::ptrdiff_t m_iszScenes = 0x7C0; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_hScenes = 0x840; // CHandle<CBaseEntity>[16]
}

namespace CScriptComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

namespace CScriptItem { // CItem
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xCC8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_MoveTypeOverride = 0xCF0; // MoveType_t
}

namespace CScriptNavBlocker { // CFuncNavBlocker
    constexpr std::ptrdiff_t m_vExtent = 0xA08; // Vector
}

namespace CScriptTriggerHurt { // CTriggerHurt
    constexpr std::ptrdiff_t m_vExtent = 0xC38; // Vector
}

namespace CScriptTriggerMultiple { // CTriggerMultiple
    constexpr std::ptrdiff_t m_vExtent = 0xBC8; // Vector
}

namespace CScriptTriggerOnce { // CTriggerOnce
    constexpr std::ptrdiff_t m_vExtent = 0xBC8; // Vector
}

namespace CScriptTriggerPush { // CTriggerPush
    constexpr std::ptrdiff_t m_vExtent = 0xBB8; // Vector
}

namespace CScriptUniformRandomStream {
    constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
    constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32_t
}

namespace CScriptedSequence { // CBaseEntity
    constexpr std::ptrdiff_t m_iszEntry = 0x7A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPreIdle = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPlay = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostIdle = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszNextScript = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntity = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSyncGroup = 0x7E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nMoveTo = 0x7E8; // ScriptedMoveTo_t
    constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x7EC; // bool
    constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x7ED; // bool
    constexpr std::ptrdiff_t m_bIsPlayingAction = 0x7EE; // bool
    constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x7EF; // bool
    constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x7F0; // bool
    constexpr std::ptrdiff_t m_bLoopActionSequence = 0x7F1; // bool
    constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x7F2; // bool
    constexpr std::ptrdiff_t m_bSynchPostIdles = 0x7F3; // bool
    constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x7F4; // bool
    constexpr std::ptrdiff_t m_bIgnoreGravity = 0x7F5; // bool
    constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x7F6; // bool
    constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x7F7; // bool
    constexpr std::ptrdiff_t m_bDontAddModifiers = 0x7F8; // bool
    constexpr std::ptrdiff_t m_flRadius = 0x7FC; // float
    constexpr std::ptrdiff_t m_flRepeat = 0x800; // float
    constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x804; // float
    constexpr std::ptrdiff_t m_flMoveInterpTime = 0x808; // float
    constexpr std::ptrdiff_t m_flAngRate = 0x80C; // float
    constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x810; // int32_t
    constexpr std::ptrdiff_t m_startTime = 0x814; // GameTime_t
    constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x818; // bool
    constexpr std::ptrdiff_t m_saved_effects = 0x81C; // int32_t
    constexpr std::ptrdiff_t m_savedFlags = 0x820; // int32_t
    constexpr std::ptrdiff_t m_savedCollisionGroup = 0x824; // int32_t
    constexpr std::ptrdiff_t m_interruptable = 0x828; // bool
    constexpr std::ptrdiff_t m_sequenceStarted = 0x829; // bool
    constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x82A; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x82C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hNextCine = 0x830; // CHandle<CScriptedSequence>
    constexpr std::ptrdiff_t m_bThinking = 0x834; // bool
    constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x835; // bool
    constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x836; // bool
    constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x837; // bool
    constexpr std::ptrdiff_t m_hLastFoundEntity = 0x838; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hForcedTarget = 0x83C; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x840; // bool
    constexpr std::ptrdiff_t m_bForceSynch = 0x841; // bool
    constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x842; // bool
    constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x843; // bool
    constexpr std::ptrdiff_t m_onDeathBehavior = 0x844; // ScriptedOnDeath_t
    constexpr std::ptrdiff_t m_ConflictResponse = 0x848; // ScriptedConflictResponse_t
    constexpr std::ptrdiff_t m_OnBeginSequence = 0x850; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x878; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndSequence = 0x8A0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x8C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelSequence = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnScriptEvent = 0x940; // CEntityIOOutput[8]
    constexpr std::ptrdiff_t m_matOtherToMain = 0xA80; // CTransform
    constexpr std::ptrdiff_t m_hInteractionMainEntity = 0xAA0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0xAA4; // int32_t
}

namespace CSensorGrenade { // CBaseCSGrenade
}

namespace CSensorGrenadeProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_fExpireTime = 0xD98; // GameTime_t
    constexpr std::ptrdiff_t m_fNextDetectPlayerSound = 0xD9C; // GameTime_t
    constexpr std::ptrdiff_t m_hDisplayGrenade = 0xDA0; // CHandle<CBaseEntity>
}

namespace CServerOnlyEntity { // CBaseEntity
}

namespace CServerOnlyModelEntity { // CBaseModelEntity
}

namespace CServerOnlyPointEntity { // CServerOnlyEntity
}

namespace CServerRagdollTrigger { // CBaseTrigger
}

namespace CShatterGlassShard {
    constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32_t
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
    constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
    constexpr std::ptrdiff_t m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
    constexpr std::ptrdiff_t m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
    constexpr std::ptrdiff_t m_hParentShard = 0x40; // uint32_t
    constexpr std::ptrdiff_t m_ShatterStressType = 0x44; // ShatterGlassStressType
    constexpr std::ptrdiff_t m_vecStressVelocity = 0x48; // Vector
    constexpr std::ptrdiff_t m_bCreatedModel = 0x54; // bool
    constexpr std::ptrdiff_t m_flLongestEdge = 0x58; // float
    constexpr std::ptrdiff_t m_flShortestEdge = 0x5C; // float
    constexpr std::ptrdiff_t m_flLongestAcross = 0x60; // float
    constexpr std::ptrdiff_t m_flShortestAcross = 0x64; // float
    constexpr std::ptrdiff_t m_flSumOfAllEdges = 0x68; // float
    constexpr std::ptrdiff_t m_flArea = 0x6C; // float
    constexpr std::ptrdiff_t m_nOnFrameEdge = 0x70; // OnFrame
    constexpr std::ptrdiff_t m_nParentPanelsNthShard = 0x74; // int32_t
    constexpr std::ptrdiff_t m_nSubShardGeneration = 0x78; // int32_t
    constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x7C; // Vector2D
    constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x84; // bool
    constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x88; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x90; // Vector2D
    constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x98; // bool
    constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x99; // bool
    constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x9A; // bool
    constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
    constexpr std::ptrdiff_t m_bShatterRateLimited = 0xA0; // bool
    constexpr std::ptrdiff_t m_hEntityHittingMe = 0xA4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecNeighbors = 0xA8; // CUtlVector<uint32_t>
}

namespace CShatterGlassShardPhysics { // CPhysicsProp
    constexpr std::ptrdiff_t m_bDebris = 0xED4; // bool
    constexpr std::ptrdiff_t m_hParentShard = 0xED8; // uint32_t
    constexpr std::ptrdiff_t m_ShardDesc = 0xEE0; // shard_model_desc_t
}

namespace CShower { // CModelPointEntity
}

namespace CSimTimer { // CSimpleSimTimer
    constexpr std::ptrdiff_t m_interval = 0x8; // float
}

namespace CSimpleMarkupVolumeTagged { // CMarkupVolumeTagged
}

namespace CSimpleSimTimer {
    constexpr std::ptrdiff_t m_next = 0x0; // GameTime_t
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
}

namespace CSimpleStopwatch { // CStopwatchBase
}

namespace CSingleplayRules { // CGameRules
    constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0x8C; // bool
}

namespace CSkeletonAnimationController { // ISkeletonAnimationController
    constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
}

namespace CSkeletonInstance { // CGameSceneNode
    constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x380; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x381; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x384; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x388; // uint8_t
}

namespace CSkillDamage {
    constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
    constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x10; // float
}

namespace CSkillFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float[4]
}

namespace CSkillInt {
    constexpr std::ptrdiff_t m_pValue = 0x0; // int32_t[4]
}

namespace CSkyCamera { // CBaseEntity
    constexpr std::ptrdiff_t m_skyboxData = 0x7A8; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x838; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x83C; // bool
    constexpr std::ptrdiff_t m_pNext = 0x840; // CSkyCamera*
}

namespace CSkyboxReference { // CBaseEntity
    constexpr std::ptrdiff_t m_worldGroupId = 0x7A8; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x7AC; // CHandle<CSkyCamera>
}

namespace CSmokeGrenade { // CBaseCSGrenade
}

namespace CSmokeGrenadeProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xDB0; // int32_t
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xDB4; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0xDB8; // int32_t
    constexpr std::ptrdiff_t m_vSmokeColor = 0xDBC; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xDC8; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0xDD8; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_flLastBounce = 0xDF0; // GameTime_t
    constexpr std::ptrdiff_t m_fllastSimulationTime = 0xDF4; // GameTime_t
}

namespace CSmoothFunc {
    constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float
    constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float
    constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float
    constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float
    constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32_t
}

namespace CSound {
    constexpr std::ptrdiff_t m_hOwner = 0x0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget = 0x4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iVolume = 0x8; // int32_t
    constexpr std::ptrdiff_t m_flOcclusionScale = 0xC; // float
    constexpr std::ptrdiff_t m_iType = 0x10; // int32_t
    constexpr std::ptrdiff_t m_iNextAudible = 0x14; // int32_t
    constexpr std::ptrdiff_t m_flExpireTime = 0x18; // GameTime_t
    constexpr std::ptrdiff_t m_iNext = 0x1C; // int16_t
    constexpr std::ptrdiff_t m_bNoExpirationTime = 0x1E; // bool
    constexpr std::ptrdiff_t m_ownerChannelIndex = 0x20; // int32_t
    constexpr std::ptrdiff_t m_vecOrigin = 0x24; // Vector
    constexpr std::ptrdiff_t m_bHasOwner = 0x30; // bool
}

namespace CSoundAreaEntityBase { // CBaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x7B8; // Vector
}

namespace CSoundAreaEntityOrientedBox { // CSoundAreaEntityBase
    constexpr std::ptrdiff_t m_vMin = 0x7C4; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x7D0; // Vector
}

namespace CSoundAreaEntitySphere { // CSoundAreaEntityBase
    constexpr std::ptrdiff_t m_flRadius = 0x7C4; // float
}

namespace CSoundEnt { // CPointEntity
    constexpr std::ptrdiff_t m_iFreeSound = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_iActiveSound = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_cLastActiveSounds = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_SoundPool = 0x7B4; // CSound[128]
}

namespace CSoundEnvelope {
    constexpr std::ptrdiff_t m_current = 0x0; // float
    constexpr std::ptrdiff_t m_target = 0x4; // float
    constexpr std::ptrdiff_t m_rate = 0x8; // float
    constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
}

namespace CSoundEventAABBEntity { // CSoundEventEntity
    constexpr std::ptrdiff_t m_vMins = 0x84C; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x858; // Vector
}

namespace CSoundEventEntity { // CBaseEntity
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x7A8; // bool
    constexpr std::ptrdiff_t m_bToLocalPlayer = 0x7A9; // bool
    constexpr std::ptrdiff_t m_bStopOnNew = 0x7AA; // bool
    constexpr std::ptrdiff_t m_bSaveRestore = 0x7AB; // bool
    constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x7AC; // bool
    constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x7B0; // float
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszAttachmentName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_onGUIDChanged = 0x7C8; // CEntityOutputTemplate<uint64_t>
    constexpr std::ptrdiff_t m_onSoundFinished = 0x7F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSoundName = 0x838; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSource = 0x848; // CEntityHandle
}

namespace CSoundEventEntityAlias_snd_event_point { // CSoundEventEntity
}

namespace CSoundEventOBBEntity { // CSoundEventEntity
    constexpr std::ptrdiff_t m_vMins = 0x84C; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x858; // Vector
}

namespace CSoundEventParameter { // CBaseEntity
    constexpr std::ptrdiff_t m_iszParamName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flFloatValue = 0x7B8; // float
}

namespace CSoundEventPathCornerEntity { // CSoundEventEntity
    constexpr std::ptrdiff_t m_iszPathCorner = 0x850; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iCountMax = 0x858; // int32_t
    constexpr std::ptrdiff_t m_flDistanceMax = 0x85C; // float
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x860; // float
    constexpr std::ptrdiff_t m_flDotProductMax = 0x864; // float
    constexpr std::ptrdiff_t bPlaying = 0x868; // bool
}

namespace CSoundOpvarSetAABBEntity { // CSoundOpvarSetPointEntity
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x94C; // Vector
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x958; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x964; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x970; // Vector
    constexpr std::ptrdiff_t m_nAABBDirection = 0x97C; // int32_t
    constexpr std::ptrdiff_t m_vInnerMins = 0x980; // Vector
    constexpr std::ptrdiff_t m_vInnerMaxs = 0x98C; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x998; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x9A4; // Vector
}

namespace CSoundOpvarSetAutoRoomEntity { // CSoundOpvarSetPointEntity
    constexpr std::ptrdiff_t m_traceResults = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
    constexpr std::ptrdiff_t m_flSize = 0x980; // float
    constexpr std::ptrdiff_t m_flHeightTolerance = 0x984; // float
    constexpr std::ptrdiff_t m_flSizeSqr = 0x988; // float
}

namespace CSoundOpvarSetEntity { // CBaseEntity
    constexpr std::ptrdiff_t m_iszStackName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nOpvarType = 0x7C8; // int32_t
    constexpr std::ptrdiff_t m_nOpvarIndex = 0x7CC; // int32_t
    constexpr std::ptrdiff_t m_flOpvarValue = 0x7D0; // float
    constexpr std::ptrdiff_t m_OpvarValueString = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bSetOnSpawn = 0x7E0; // bool
}

namespace CSoundOpvarSetOBBEntity { // CSoundOpvarSetAABBEntity
}

namespace CSoundOpvarSetOBBWindEntity { // CSoundOpvarSetPointBase
    constexpr std::ptrdiff_t m_vMins = 0x840; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x84C; // Vector
    constexpr std::ptrdiff_t m_vDistanceMins = 0x858; // Vector
    constexpr std::ptrdiff_t m_vDistanceMaxs = 0x864; // Vector
    constexpr std::ptrdiff_t m_flWindMin = 0x870; // float
    constexpr std::ptrdiff_t m_flWindMax = 0x874; // float
    constexpr std::ptrdiff_t m_flWindMapMin = 0x878; // float
    constexpr std::ptrdiff_t m_flWindMapMax = 0x87C; // float
}

namespace CSoundOpvarSetPathCornerEntity { // CSoundOpvarSetPointEntity
    constexpr std::ptrdiff_t m_flDistMinSqr = 0x968; // float
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x96C; // float
    constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x970; // CUtlSymbolLarge
}

namespace CSoundOpvarSetPointBase { // CBaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x7A8; // bool
    constexpr std::ptrdiff_t m_hSource = 0x7AC; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vLastPosition = 0x810; // Vector
    constexpr std::ptrdiff_t m_iszStackName = 0x820; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x828; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x830; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x838; // int32_t
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x83C; // bool
}

namespace CSoundOpvarSetPointEntity { // CSoundOpvarSetPointBase
    constexpr std::ptrdiff_t m_OnEnter = 0x840; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExit = 0x868; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAutoDisable = 0x890; // bool
    constexpr std::ptrdiff_t m_flDistanceMin = 0x8D4; // float
    constexpr std::ptrdiff_t m_flDistanceMax = 0x8D8; // float
    constexpr std::ptrdiff_t m_flDistanceMapMin = 0x8DC; // float
    constexpr std::ptrdiff_t m_flDistanceMapMax = 0x8E0; // float
    constexpr std::ptrdiff_t m_flOcclusionRadius = 0x8E4; // float
    constexpr std::ptrdiff_t m_flOcclusionMin = 0x8E8; // float
    constexpr std::ptrdiff_t m_flOcclusionMax = 0x8EC; // float
    constexpr std::ptrdiff_t m_flValSetOnDisable = 0x8F0; // float
    constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x8F4; // bool
    constexpr std::ptrdiff_t m_nSimulationMode = 0x8F8; // int32_t
    constexpr std::ptrdiff_t m_nVisibilitySamples = 0x8FC; // int32_t
    constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x900; // Vector
    constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x90C; // float
    constexpr std::ptrdiff_t m_hDynamicEntity = 0x910; // CEntityHandle
    constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x918; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x920; // float
    constexpr std::ptrdiff_t m_vPathingSourcePos = 0x924; // Vector
    constexpr std::ptrdiff_t m_vPathingListenerPos = 0x930; // Vector
    constexpr std::ptrdiff_t m_vPathingDirection = 0x93C; // Vector
    constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x948; // int32_t
}

namespace CSoundPatch {
    constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
    constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
    constexpr std::ptrdiff_t m_shutdownTime = 0x30; // float
    constexpr std::ptrdiff_t m_flLastTime = 0x34; // float
    constexpr std::ptrdiff_t m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hEnt = 0x40; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_soundEntityIndex = 0x44; // CEntityIndex
    constexpr std::ptrdiff_t m_soundOrigin = 0x48; // Vector
    constexpr std::ptrdiff_t m_isPlaying = 0x54; // int32_t
    constexpr std::ptrdiff_t m_Filter = 0x58; // CCopyRecipientFilter
    constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0x80; // float
    constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0x84; // bool
    constexpr std::ptrdiff_t m_iszClassName = 0x88; // CUtlSymbolLarge
}

namespace CSoundStackSave { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszStackName = 0x7A8; // CUtlSymbolLarge
}

namespace CSplineConstraint { // CPhysConstraint
}

namespace CSpotlightEnd { // CBaseModelEntity
    constexpr std::ptrdiff_t m_flLightScale = 0x9F8; // float
    constexpr std::ptrdiff_t m_Radius = 0x9FC; // float
    constexpr std::ptrdiff_t m_vSpotlightDir = 0xA00; // Vector
    constexpr std::ptrdiff_t m_vSpotlightOrg = 0xA0C; // Vector
}

namespace CSprite { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0xA00; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nAttachment = 0xA04; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0xA08; // float
    constexpr std::ptrdiff_t m_flFrame = 0xA0C; // float
    constexpr std::ptrdiff_t m_flDieTime = 0xA10; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0xA20; // uint32_t
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0xA24; // float
    constexpr std::ptrdiff_t m_flSpriteScale = 0xA28; // float
    constexpr std::ptrdiff_t m_flScaleDuration = 0xA2C; // float
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xA30; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xA34; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xA38; // float
    constexpr std::ptrdiff_t m_flLastTime = 0xA3C; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0xA40; // float
    constexpr std::ptrdiff_t m_flStartScale = 0xA44; // float
    constexpr std::ptrdiff_t m_flDestScale = 0xA48; // float
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xA4C; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0xA50; // int32_t
    constexpr std::ptrdiff_t m_nDestBrightness = 0xA54; // int32_t
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xA58; // GameTime_t
    constexpr std::ptrdiff_t m_nSpriteWidth = 0xA5C; // int32_t
    constexpr std::ptrdiff_t m_nSpriteHeight = 0xA60; // int32_t
}

namespace CSpriteAlias_env_glow { // CSprite
}

namespace CSpriteOriented { // CSprite
}

namespace CStopwatch { // CStopwatchBase
    constexpr std::ptrdiff_t m_interval = 0xC; // float
}

namespace CStopwatchBase { // CSimpleSimTimer
    constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
}

namespace CSun { // CBaseModelEntity
    constexpr std::ptrdiff_t m_vDirection = 0x9F8; // Vector
    constexpr std::ptrdiff_t m_clrOverlay = 0xA04; // Color
    constexpr std::ptrdiff_t m_iszEffectName = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSSEffectName = 0xA10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOn = 0xA18; // bool
    constexpr std::ptrdiff_t m_bmaxColor = 0xA19; // bool
    constexpr std::ptrdiff_t m_flSize = 0xA1C; // float
    constexpr std::ptrdiff_t m_flRotation = 0xA20; // float
    constexpr std::ptrdiff_t m_flHazeScale = 0xA24; // float
    constexpr std::ptrdiff_t m_flAlphaHaze = 0xA28; // float
    constexpr std::ptrdiff_t m_flAlphaHdr = 0xA2C; // float
    constexpr std::ptrdiff_t m_flAlphaScale = 0xA30; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xA34; // float
    constexpr std::ptrdiff_t m_flFarZScale = 0xA38; // float
}

namespace CTablet { // CCSWeaponBase
}

namespace CTakeDamageInfo {
    constexpr std::ptrdiff_t m_vecDamageForce = 0x8; // Vector
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x14; // Vector
    constexpr std::ptrdiff_t m_vecReportedPosition = 0x20; // Vector
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x2C; // Vector
    constexpr std::ptrdiff_t m_hInflictor = 0x38; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hAttacker = 0x3C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hAbility = 0x40; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flDamage = 0x44; // float
    constexpr std::ptrdiff_t m_bitsDamageType = 0x48; // int32_t
    constexpr std::ptrdiff_t m_iDamageCustom = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_iAmmoType = 0x50; // AmmoIndex_t
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x60; // float
    constexpr std::ptrdiff_t m_bShouldBleed = 0x64; // bool
    constexpr std::ptrdiff_t m_bShouldSpark = 0x65; // bool
    constexpr std::ptrdiff_t m_nDamageFlags = 0x70; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x74; // int32_t
    constexpr std::ptrdiff_t m_hScriptInstance = 0x78; // HSCRIPT
    constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x94; // bool
}

namespace CTakeDamageInfoAPI {
}

namespace CTakeDamageResult {
    constexpr std::ptrdiff_t m_nHealthLost = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nDamageTaken = 0x4; // int32_t
}

namespace CTakeDamageSummaryScopeGuard {
    constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
}

namespace CTankTargetChange { // CPointEntity
    constexpr std::ptrdiff_t m_newTarget = 0x7A8; // CVariantBase<CVariantDefaultAllocator>
    constexpr std::ptrdiff_t m_newTargetName = 0x7B8; // CUtlSymbolLarge
}

namespace CTankTrainAI { // CPointEntity
    constexpr std::ptrdiff_t m_hTrain = 0x7A8; // CHandle<CFuncTrackTrain>
    constexpr std::ptrdiff_t m_hTargetEntity = 0x7AC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_soundPlaying = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_startSoundName = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_engineSoundName = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_movementSoundName = 0x7D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_targetEntityName = 0x7E0; // CUtlSymbolLarge
}

namespace CTeam { // CBaseEntity
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x7A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_aPlayers = 0x7C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    constexpr std::ptrdiff_t m_iScore = 0x7D8; // int32_t
    constexpr std::ptrdiff_t m_szTeamname = 0x7DC; // char[129]
}

namespace CTeamplayRules { // CMultiplayRules
}

namespace CTestEffect { // CBaseEntity
    constexpr std::ptrdiff_t m_iLoop = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_iBeam = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_pBeam = 0x7B0; // CBeam*[24]
    constexpr std::ptrdiff_t m_flBeamTime = 0x870; // GameTime_t[24]
    constexpr std::ptrdiff_t m_flStartTime = 0x8D0; // GameTime_t
}

namespace CTextureBasedAnimatable { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bLoop = 0x9F8; // bool
    constexpr std::ptrdiff_t m_flFPS = 0x9FC; // float
    constexpr std::ptrdiff_t m_hPositionKeys = 0xA00; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hRotationKeys = 0xA08; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xA10; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xA1C; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0xA28; // float
    constexpr std::ptrdiff_t m_flStartFrame = 0xA2C; // float
}

namespace CTimeline { // IntervalTimer
    constexpr std::ptrdiff_t m_flValues = 0x10; // float[64]
    constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32_t[64]
    constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32_t
    constexpr std::ptrdiff_t m_flInterval = 0x214; // float
    constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float
    constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
    constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
}

namespace CTimerEntity { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnTimer = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerHigh = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerLow = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iDisabled = 0x820; // int32_t
    constexpr std::ptrdiff_t m_flInitialDelay = 0x824; // float
    constexpr std::ptrdiff_t m_flRefireTime = 0x828; // float
    constexpr std::ptrdiff_t m_bUpDownState = 0x82C; // bool
    constexpr std::ptrdiff_t m_iUseRandomTime = 0x830; // int32_t
    constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x834; // bool
    constexpr std::ptrdiff_t m_flLowerRandomBound = 0x838; // float
    constexpr std::ptrdiff_t m_flUpperRandomBound = 0x83C; // float
    constexpr std::ptrdiff_t m_flRemainingTime = 0x840; // float
    constexpr std::ptrdiff_t m_bPaused = 0x844; // bool
}

namespace CTonemapController2 { // CBaseEntity
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x7A8; // float
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x7AC; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x7B0; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x7B4; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x7B8; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x7BC; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x7C0; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x7C4; // float
}

namespace CTonemapController2Alias_env_tonemap_controller2 { // CTonemapController2
}

namespace CTonemapTrigger { // CBaseTrigger
    constexpr std::ptrdiff_t m_tonemapControllerName = 0xBA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTonemapController = 0xBA8; // CEntityHandle
}

namespace CTouchExpansionComponent { // CEntityComponent
}

namespace CTriggerActiveWeaponDetect { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0xBA0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszWeaponClassName = 0xBC8; // CUtlSymbolLarge
}

namespace CTriggerBombReset { // CBaseTrigger
}

namespace CTriggerBrush { // CBaseModelEntity
    constexpr std::ptrdiff_t m_OnStartTouch = 0x9F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0xA20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUse = 0xA48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInputFilter = 0xA70; // int32_t
    constexpr std::ptrdiff_t m_iDontMessageParent = 0xA74; // int32_t
}

namespace CTriggerBuoyancy { // CBaseTrigger
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xBA0; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0xBC0; // float
}

namespace CTriggerCallback { // CBaseTrigger
}

namespace CTriggerDetectBulletFire { // CBaseTrigger
    constexpr std::ptrdiff_t m_bPlayerFireOnly = 0xB99; // bool
    constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0xBA0; // CEntityIOOutput
}

namespace CTriggerDetectExplosion { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnDetectedExplosion = 0xBE8; // CEntityIOOutput
}

namespace CTriggerFan { // CBaseTrigger
    constexpr std::ptrdiff_t m_vFanOrigin = 0xB9C; // Vector
    constexpr std::ptrdiff_t m_vFanEnd = 0xBA8; // Vector
    constexpr std::ptrdiff_t m_vNoise = 0xBB4; // Vector
    constexpr std::ptrdiff_t m_flForce = 0xBC0; // float
    constexpr std::ptrdiff_t m_flRopeForceScale = 0xBC4; // float
    constexpr std::ptrdiff_t m_flPlayerForce = 0xBC8; // float
    constexpr std::ptrdiff_t m_flRampTime = 0xBCC; // float
    constexpr std::ptrdiff_t m_bFalloff = 0xBD0; // bool
    constexpr std::ptrdiff_t m_bPushPlayer = 0xBD1; // bool
    constexpr std::ptrdiff_t m_bRampDown = 0xBD2; // bool
    constexpr std::ptrdiff_t m_bAddNoise = 0xBD3; // bool
    constexpr std::ptrdiff_t m_RampTimer = 0xBD8; // CountdownTimer
}

namespace CTriggerGameEvent { // CBaseTrigger
    constexpr std::ptrdiff_t m_strStartTouchEventName = 0xBA0; // CUtlString
    constexpr std::ptrdiff_t m_strEndTouchEventName = 0xBA8; // CUtlString
    constexpr std::ptrdiff_t m_strTriggerID = 0xBB0; // CUtlString
}

namespace CTriggerGravity { // CBaseTrigger
}

namespace CTriggerHostageReset { // CBaseTrigger
}

namespace CTriggerHurt { // CBaseTrigger
    constexpr std::ptrdiff_t m_flOriginalDamage = 0xB9C; // float
    constexpr std::ptrdiff_t m_flDamage = 0xBA0; // float
    constexpr std::ptrdiff_t m_flDamageCap = 0xBA4; // float
    constexpr std::ptrdiff_t m_flLastDmgTime = 0xBA8; // GameTime_t
    constexpr std::ptrdiff_t m_flForgivenessDelay = 0xBAC; // float
    constexpr std::ptrdiff_t m_bitsDamageInflict = 0xBB0; // int32_t
    constexpr std::ptrdiff_t m_damageModel = 0xBB4; // int32_t
    constexpr std::ptrdiff_t m_bNoDmgForce = 0xBB8; // bool
    constexpr std::ptrdiff_t m_vDamageForce = 0xBBC; // Vector
    constexpr std::ptrdiff_t m_thinkAlways = 0xBC8; // bool
    constexpr std::ptrdiff_t m_hurtThinkPeriod = 0xBCC; // float
    constexpr std::ptrdiff_t m_OnHurt = 0xBD0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHurtPlayer = 0xBF8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hurtEntities = 0xC20; // CUtlVector<CHandle<CBaseEntity>>
}

namespace CTriggerHurtGhost { // CTriggerHurt
}

namespace CTriggerImpact { // CTriggerMultiple
    constexpr std::ptrdiff_t m_flMagnitude = 0xBC8; // float
    constexpr std::ptrdiff_t m_flNoise = 0xBCC; // float
    constexpr std::ptrdiff_t m_flViewkick = 0xBD0; // float
    constexpr std::ptrdiff_t m_pOutputForce = 0xBD8; // CEntityOutputTemplate<Vector>
}

namespace CTriggerLerpObject { // CBaseTrigger
    constexpr std::ptrdiff_t m_iszLerpTarget = 0xBA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTarget = 0xBA8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0xBB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0xBB8; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flLerpDuration = 0xBBC; // float
    constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0xBC0; // bool
    constexpr std::ptrdiff_t m_bSingleLerpObject = 0xBC1; // bool
    constexpr std::ptrdiff_t m_vecLerpingObjects = 0xBC8; // CUtlVector<lerpdata_t>
    constexpr std::ptrdiff_t m_iszLerpEffect = 0xBE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLerpSound = 0xBE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAttachTouchingObject = 0xBF0; // bool
    constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0xBF4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_OnLerpStarted = 0xBF8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLerpFinished = 0xC20; // CEntityIOOutput
}

namespace CTriggerLook { // CTriggerOnce
    constexpr std::ptrdiff_t m_hLookTarget = 0xBC8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flFieldOfView = 0xBCC; // float
    constexpr std::ptrdiff_t m_flLookTime = 0xBD0; // float
    constexpr std::ptrdiff_t m_flLookTimeTotal = 0xBD4; // float
    constexpr std::ptrdiff_t m_flLookTimeLast = 0xBD8; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeoutDuration = 0xBDC; // float
    constexpr std::ptrdiff_t m_bTimeoutFired = 0xBE0; // bool
    constexpr std::ptrdiff_t m_bIsLooking = 0xBE1; // bool
    constexpr std::ptrdiff_t m_b2DFOV = 0xBE2; // bool
    constexpr std::ptrdiff_t m_bUseVelocity = 0xBE3; // bool
    constexpr std::ptrdiff_t m_hActivator = 0xBE4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bTestOcclusion = 0xBE8; // bool
    constexpr std::ptrdiff_t m_OnTimeout = 0xBF0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartLook = 0xC18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndLook = 0xC40; // CEntityIOOutput
}

namespace CTriggerMultiple { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnTrigger = 0xBA0; // CEntityIOOutput
}

namespace CTriggerOnce { // CTriggerMultiple
}

namespace CTriggerPhysics { // CBaseTrigger
    constexpr std::ptrdiff_t m_gravityScale = 0xBB0; // float
    constexpr std::ptrdiff_t m_linearLimit = 0xBB4; // float
    constexpr std::ptrdiff_t m_linearDamping = 0xBB8; // float
    constexpr std::ptrdiff_t m_angularLimit = 0xBBC; // float
    constexpr std::ptrdiff_t m_angularDamping = 0xBC0; // float
    constexpr std::ptrdiff_t m_linearForce = 0xBC4; // float
    constexpr std::ptrdiff_t m_flFrequency = 0xBC8; // float
    constexpr std::ptrdiff_t m_flDampingRatio = 0xBCC; // float
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xBD0; // Vector
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xBDC; // bool
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xBE0; // Vector
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xBEC; // Vector
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xBF8; // bool
}

namespace CTriggerProximity { // CBaseTrigger
    constexpr std::ptrdiff_t m_hMeasureTarget = 0xB9C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszMeasureTarget = 0xBA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fRadius = 0xBA8; // float
    constexpr std::ptrdiff_t m_nTouchers = 0xBAC; // int32_t
    constexpr std::ptrdiff_t m_NearestEntityDistance = 0xBB0; // CEntityOutputTemplate<float>
}

namespace CTriggerPush { // CBaseTrigger
    constexpr std::ptrdiff_t m_angPushEntitySpace = 0xB9C; // QAngle
    constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0xBA8; // Vector
    constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0xBB4; // bool
}

namespace CTriggerRemove { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnRemove = 0xBA0; // CEntityIOOutput
}

namespace CTriggerSave { // CBaseTrigger
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0xB99; // bool
    constexpr std::ptrdiff_t m_fDangerousTimer = 0xB9C; // float
    constexpr std::ptrdiff_t m_minHitPoints = 0xBA0; // int32_t
}

namespace CTriggerSndSosOpvar { // CBaseTrigger
    constexpr std::ptrdiff_t m_hTouchingPlayers = 0xBA0; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_flPosition = 0xBB8; // Vector
    constexpr std::ptrdiff_t m_flCenterSize = 0xBC4; // float
    constexpr std::ptrdiff_t m_flMinVal = 0xBC8; // float
    constexpr std::ptrdiff_t m_flMaxVal = 0xBCC; // float
    constexpr std::ptrdiff_t m_flWait = 0xBD0; // float
    constexpr std::ptrdiff_t m_opvarName = 0xBD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_stackName = 0xBE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_operatorName = 0xBE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bVolIs2D = 0xBF0; // bool
    constexpr std::ptrdiff_t m_opvarNameChar = 0xBF1; // char[256]
    constexpr std::ptrdiff_t m_stackNameChar = 0xCF1; // char[256]
    constexpr std::ptrdiff_t m_operatorNameChar = 0xDF1; // char[256]
    constexpr std::ptrdiff_t m_VecNormPos = 0xEF4; // Vector
    constexpr std::ptrdiff_t m_flNormCenterSize = 0xF00; // float
}

namespace CTriggerSoundscape { // CBaseTrigger
    constexpr std::ptrdiff_t m_hSoundscape = 0xB9C; // CHandle<CEnvSoundscapeTriggerable>
    constexpr std::ptrdiff_t m_SoundscapeName = 0xBA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_spectators = 0xBA8; // CUtlVector<CHandle<CBasePlayerPawn>>
}

namespace CTriggerTeleport { // CBaseTrigger
    constexpr std::ptrdiff_t m_iLandmark = 0xBA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0xBA8; // bool
    constexpr std::ptrdiff_t m_bMirrorPlayer = 0xBA9; // bool
}

namespace CTriggerToggleSave { // CBaseTrigger
    constexpr std::ptrdiff_t m_bDisabled = 0xB99; // bool
}

namespace CTriggerTripWire { // CBaseTrigger
}

namespace CTriggerVolume { // CBaseModelEntity
    constexpr std::ptrdiff_t m_iFilterName = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0xA00; // CHandle<CBaseFilter>
}

namespace CTripWireFire { // CBaseCSGrenade
}

namespace CTripWireFireProjectile { // CBaseGrenade
}

namespace CVoteController { // CBaseEntity
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x7B0; // int32_t[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x7C4; // int32_t
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x7C8; // bool
    constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x7D0; // CountdownTimer
    constexpr std::ptrdiff_t m_executeCommandTimer = 0x7E8; // CountdownTimer
    constexpr std::ptrdiff_t m_resetVoteTimer = 0x800; // CountdownTimer
    constexpr std::ptrdiff_t m_nVotesCast = 0x818; // int32_t[64]
    constexpr std::ptrdiff_t m_playerHoldingVote = 0x918; // CPlayerSlot
    constexpr std::ptrdiff_t m_playerOverrideForVote = 0x91C; // CPlayerSlot
    constexpr std::ptrdiff_t m_nHighestCountIndex = 0x920; // int32_t
    constexpr std::ptrdiff_t m_potentialIssues = 0x928; // CUtlVector<CBaseIssue*>
    constexpr std::ptrdiff_t m_VoteOptions = 0x940; // CUtlVector<char*>
}

namespace CWaterBullet { // CBaseAnimGraph
}

namespace CWeaponAWP { // CCSWeaponBaseGun
}

namespace CWeaponAug { // CCSWeaponBaseGun
}

namespace CWeaponBaseItem { // CCSWeaponBase
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x1198; // CountdownTimer
    constexpr std::ptrdiff_t m_bRedraw = 0x11B0; // bool
}

namespace CWeaponBizon { // CCSWeaponBaseGun
}

namespace CWeaponCZ75a { // CCSWeaponBaseGun
}

namespace CWeaponElite { // CCSWeaponBaseGun
}

namespace CWeaponFamas { // CCSWeaponBaseGun
}

namespace CWeaponFiveSeven { // CCSWeaponBaseGun
}

namespace CWeaponG3SG1 { // CCSWeaponBaseGun
}

namespace CWeaponGalilAR { // CCSWeaponBaseGun
}

namespace CWeaponGlock { // CCSWeaponBaseGun
}

namespace CWeaponHKP2000 { // CCSWeaponBaseGun
}

namespace CWeaponM249 { // CCSWeaponBaseGun
}

namespace CWeaponM4A1 { // CCSWeaponBaseGun
}

namespace CWeaponM4A1Silencer { // CCSWeaponBaseGun
}

namespace CWeaponMAC10 { // CCSWeaponBaseGun
}

namespace CWeaponMP5SD { // CCSWeaponBaseGun
}

namespace CWeaponMP7 { // CCSWeaponBaseGun
}

namespace CWeaponMP9 { // CCSWeaponBaseGun
}

namespace CWeaponMag7 { // CCSWeaponBaseGun
}

namespace CWeaponNOVA { // CCSWeaponBase
}

namespace CWeaponNegev { // CCSWeaponBaseGun
}

namespace CWeaponP250 { // CCSWeaponBaseGun
}

namespace CWeaponP90 { // CCSWeaponBaseGun
}

namespace CWeaponRevolver { // CCSWeaponBaseGun
}

namespace CWeaponSCAR20 { // CCSWeaponBaseGun
}

namespace CWeaponSG556 { // CCSWeaponBaseGun
}

namespace CWeaponSSG08 { // CCSWeaponBaseGun
}

namespace CWeaponSawedoff { // CCSWeaponBase
}

namespace CWeaponShield { // CCSWeaponBaseGun
    constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0x11B4; // float
    constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0x11B8; // GameTime_t
    constexpr std::ptrdiff_t m_flDisplayHealth = 0x11BC; // float
}

namespace CWeaponTaser { // CCSWeaponBaseGun
    constexpr std::ptrdiff_t m_fFireTime = 0x11B4; // GameTime_t
}

namespace CWeaponTec9 { // CCSWeaponBaseGun
}

namespace CWeaponUMP45 { // CCSWeaponBaseGun
}

namespace CWeaponUSPSilencer { // CCSWeaponBaseGun
}

namespace CWeaponXM1014 { // CCSWeaponBase
}

namespace CWeaponZoneRepulsor { // CCSWeaponBaseGun
}

namespace CWorld { // CBaseModelEntity
}

namespace CommandToolCommand_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_bOpened = 0x1; // bool
    constexpr std::ptrdiff_t m_InternalId = 0x4; // uint32_t
    constexpr std::ptrdiff_t m_ShortName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_ExecMode = 0x10; // CommandExecMode_t
    constexpr std::ptrdiff_t m_SpawnGroup = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_PeriodicExecDelay = 0x20; // float
    constexpr std::ptrdiff_t m_SpecType = 0x24; // CommandEntitySpecType_t
    constexpr std::ptrdiff_t m_EntitySpec = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_Commands = 0x30; // CUtlString
    constexpr std::ptrdiff_t m_SetDebugBits = 0x38; // DebugOverlayBits_t
    constexpr std::ptrdiff_t m_ClearDebugBits = 0x40; // DebugOverlayBits_t
}

namespace ConceptHistory_t {
    constexpr std::ptrdiff_t timeSpoken = 0x0; // float
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
    constexpr std::ptrdiff_t m_duration = 0x8; // float
    constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
    constexpr std::ptrdiff_t m_timescale = 0x10; // float
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
}

namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float
    constexpr std::ptrdiff_t m_timestamp = 0xC; // float
    constexpr std::ptrdiff_t m_timescale = 0x10; // float
}

namespace EntityRenderAttribute_t {
    constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
    constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
}

namespace EntitySpottedState_t {
    constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32_t[2]
}

namespace Extent {
    constexpr std::ptrdiff_t lo = 0x0; // Vector
    constexpr std::ptrdiff_t hi = 0xC; // Vector
}

namespace FilterDamageType { // CBaseFilter
    constexpr std::ptrdiff_t m_iDamageType = 0x800; // int32_t
}

namespace FilterHealth { // CBaseFilter
    constexpr std::ptrdiff_t m_bAdrenalineActive = 0x800; // bool
    constexpr std::ptrdiff_t m_iHealthMin = 0x804; // int32_t
    constexpr std::ptrdiff_t m_iHealthMax = 0x808; // int32_t
}

namespace FilterTeam { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterTeam = 0x800; // int32_t
}

namespace GameAmmoTypeInfo_t { // AmmoTypeInfo_t
    constexpr std::ptrdiff_t m_nBuySize = 0x34; // int32_t
    constexpr std::ptrdiff_t m_nCost = 0x38; // int32_t
}

namespace GameTick_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace GameTime_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // float
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

namespace IChoreoServices {
}

namespace IEconItemInterface {
}

namespace IHasAttributes {
}

namespace IRagdoll {
}

namespace ISkeletonAnimationController {
}

namespace IntervalTimer {
    constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
}

namespace ModelConfigHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint32_t
}

namespace NavGravity_t {
    constexpr std::ptrdiff_t m_vGravity = 0x0; // Vector
    constexpr std::ptrdiff_t m_bDefault = 0xC; // bool
}

namespace ParticleIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Transforms = 0x30; // CNetworkUtlVectorBase<CTransform>
    constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<CBaseEntity>
}

namespace PulseScriptedSequenceData_t {
    constexpr std::ptrdiff_t m_nActorID = 0x0; // int32_t
    constexpr std::ptrdiff_t m_szPreIdleSequence = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_szEntrySequence = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_szSequence = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_szExitSequence = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x28; // bool
    constexpr std::ptrdiff_t m_bLoopActionSequence = 0x29; // bool
    constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x2A; // bool
    constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x2B; // bool
}

namespace QuestProgress {
}

namespace RagdollCreationParams_t {
    constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32_t
}

namespace RelationshipOverride_t { // Relationship_t
    constexpr std::ptrdiff_t entity = 0x8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t classType = 0xC; // Class_T
}

namespace Relationship_t {
    constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
    constexpr std::ptrdiff_t priority = 0x4; // int32_t
}

namespace ResponseContext_t {
    constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
}

namespace ResponseFollowup {
    constexpr std::ptrdiff_t followup_concept = 0x0; // char*
    constexpr std::ptrdiff_t followup_contexts = 0x8; // char*
    constexpr std::ptrdiff_t followup_delay = 0x10; // float
    constexpr std::ptrdiff_t followup_target = 0x14; // char*
    constexpr std::ptrdiff_t followup_entityiotarget = 0x1C; // char*
    constexpr std::ptrdiff_t followup_entityioinput = 0x24; // char*
    constexpr std::ptrdiff_t followup_entityiodelay = 0x2C; // float
    constexpr std::ptrdiff_t bFired = 0x30; // bool
}

namespace ResponseParams {
    constexpr std::ptrdiff_t odds = 0x10; // int16_t
    constexpr std::ptrdiff_t flags = 0x12; // int16_t
    constexpr std::ptrdiff_t m_pFollowup = 0x14; // ResponseFollowup*
}

namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_nCost = 0x34; // int32_t
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32_t
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
    constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
}

namespace SequenceHistory_t {
    constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float
    constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float
    constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float
}

namespace ServerAuthoritativeWeaponSlot_t {
    constexpr std::ptrdiff_t unClass = 0x28; // uint16_t
    constexpr std::ptrdiff_t unSlot = 0x2A; // uint16_t
    constexpr std::ptrdiff_t unItemDefIdx = 0x2C; // uint16_t
}

namespace SimpleConstraintSoundProfile {
    constexpr std::ptrdiff_t eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    constexpr std::ptrdiff_t m_keyPoints = 0xC; // float[2]
    constexpr std::ptrdiff_t m_reversalSoundThresholds = 0x14; // float[3]
}

namespace SoundOpvarTraceResult_t {
    constexpr std::ptrdiff_t vPos = 0x0; // Vector
    constexpr std::ptrdiff_t bDidHit = 0xC; // bool
    constexpr std::ptrdiff_t flDistSqrToCenter = 0x10; // float
}

namespace SpawnPoint { // CServerOnlyPointEntity
    constexpr std::ptrdiff_t m_iPriority = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x7AC; // bool
    constexpr std::ptrdiff_t m_nType = 0x7B0; // int32_t
}

namespace SpawnPointCoopEnemy { // SpawnPoint
    constexpr std::ptrdiff_t m_szWeaponsToGive = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szPlayerModelToUse = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nArmorToSpawnWith = 0x7C8; // int32_t
    constexpr std::ptrdiff_t m_nDefaultBehavior = 0x7CC; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    constexpr std::ptrdiff_t m_nBotDifficulty = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_bIsAgressive = 0x7D4; // bool
    constexpr std::ptrdiff_t m_bStartAsleep = 0x7D5; // bool
    constexpr std::ptrdiff_t m_flHideRadius = 0x7D8; // float
    constexpr std::ptrdiff_t m_szBehaviorTreeFile = 0x7E8; // CUtlSymbolLarge
}

namespace SummaryTakeDamageInfo_t {
    constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32_t
    constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
    constexpr std::ptrdiff_t result = 0xA0; // CTakeDamageResult
    constexpr std::ptrdiff_t hTarget = 0xA8; // CHandle<CBaseEntity>
}

namespace VPhysicsCollisionAttribute_t {
    constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64_t
    constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64_t
    constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64_t
    constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32_t
    constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32_t
    constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16_t
    constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8_t
    constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8_t
}

namespace VelocitySampler {
    constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
    constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
    constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float
}

namespace ViewAngleServerChange_t {
    constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
    constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
    constexpr std::ptrdiff_t nIndex = 0x40; // uint32_t
}

namespace WeaponPurchaseCount_t {
    constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_nCount = 0x32; // uint16_t
}

namespace WeaponPurchaseTracker_t {
    constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
}

namespace audioparams_t {
    constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
    constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32_t
    constexpr std::ptrdiff_t localBits = 0x6C; // uint8_t
    constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32_t
    constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32_t
}

namespace dynpitchvol_base_t {
    constexpr std::ptrdiff_t preset = 0x0; // int32_t
    constexpr std::ptrdiff_t pitchrun = 0x4; // int32_t
    constexpr std::ptrdiff_t pitchstart = 0x8; // int32_t
    constexpr std::ptrdiff_t spinup = 0xC; // int32_t
    constexpr std::ptrdiff_t spindown = 0x10; // int32_t
    constexpr std::ptrdiff_t volrun = 0x14; // int32_t
    constexpr std::ptrdiff_t volstart = 0x18; // int32_t
    constexpr std::ptrdiff_t fadein = 0x1C; // int32_t
    constexpr std::ptrdiff_t fadeout = 0x20; // int32_t
    constexpr std::ptrdiff_t lfotype = 0x24; // int32_t
    constexpr std::ptrdiff_t lforate = 0x28; // int32_t
    constexpr std::ptrdiff_t lfomodpitch = 0x2C; // int32_t
    constexpr std::ptrdiff_t lfomodvol = 0x30; // int32_t
    constexpr std::ptrdiff_t cspinup = 0x34; // int32_t
    constexpr std::ptrdiff_t cspincount = 0x38; // int32_t
    constexpr std::ptrdiff_t pitch = 0x3C; // int32_t
    constexpr std::ptrdiff_t spinupsav = 0x40; // int32_t
    constexpr std::ptrdiff_t spindownsav = 0x44; // int32_t
    constexpr std::ptrdiff_t pitchfrac = 0x48; // int32_t
    constexpr std::ptrdiff_t vol = 0x4C; // int32_t
    constexpr std::ptrdiff_t fadeinsav = 0x50; // int32_t
    constexpr std::ptrdiff_t fadeoutsav = 0x54; // int32_t
    constexpr std::ptrdiff_t volfrac = 0x58; // int32_t
    constexpr std::ptrdiff_t lfofrac = 0x5C; // int32_t
    constexpr std::ptrdiff_t lfomult = 0x60; // int32_t
}

namespace dynpitchvol_t { // dynpitchvol_base_t
}

namespace fogparams_t {
    constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
    constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
    constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
    constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
    constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
    constexpr std::ptrdiff_t start = 0x24; // float
    constexpr std::ptrdiff_t end = 0x28; // float
    constexpr std::ptrdiff_t farz = 0x2C; // float
    constexpr std::ptrdiff_t maxdensity = 0x30; // float
    constexpr std::ptrdiff_t exponent = 0x34; // float
    constexpr std::ptrdiff_t HDRColorScale = 0x38; // float
    constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float
    constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float
    constexpr std::ptrdiff_t startLerpTo = 0x44; // float
    constexpr std::ptrdiff_t endLerpTo = 0x48; // float
    constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float
    constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
    constexpr std::ptrdiff_t duration = 0x54; // float
    constexpr std::ptrdiff_t blendtobackground = 0x58; // float
    constexpr std::ptrdiff_t scattering = 0x5C; // float
    constexpr std::ptrdiff_t locallightscale = 0x60; // float
    constexpr std::ptrdiff_t enable = 0x64; // bool
    constexpr std::ptrdiff_t blend = 0x65; // bool
    constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
    constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
}

namespace fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<CFogController>
    constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float
    constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
    constexpr std::ptrdiff_t m_flOldStart = 0x14; // float
    constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float
    constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float
    constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float
    constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float
    constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
    constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float
    constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float
    constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float
    constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float
    constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float
}

namespace hudtextparms_t {
    constexpr std::ptrdiff_t color1 = 0x0; // Color
    constexpr std::ptrdiff_t color2 = 0x4; // Color
    constexpr std::ptrdiff_t effect = 0x8; // uint8_t
    constexpr std::ptrdiff_t channel = 0x9; // uint8_t
    constexpr std::ptrdiff_t x = 0xC; // float
    constexpr std::ptrdiff_t y = 0x10; // float
}

namespace lerpdata_t {
    constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle<CBaseEntity>
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
    constexpr std::ptrdiff_t hEntity = 0x8; // CHandle<CBaseEntity>
}

namespace ragdoll_t {
    constexpr std::ptrdiff_t list = 0x0; // CUtlVector<ragdollelement_t>
    constexpr std::ptrdiff_t boneIndex = 0x18; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t allowStretch = 0x30; // bool
    constexpr std::ptrdiff_t unused = 0x31; // bool
}

namespace ragdollelement_t {
    constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
    constexpr std::ptrdiff_t parentIndex = 0x20; // int32_t
    constexpr std::ptrdiff_t m_flRadius = 0x24; // float
}

namespace shard_model_desc_t {
    constexpr std::ptrdiff_t m_nModelID = 0x8; // int32_t
    constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
    constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
    constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float
    constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
    constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
}

namespace sky3dparams_t {
    constexpr std::ptrdiff_t scale = 0x8; // int16_t
    constexpr std::ptrdiff_t origin = 0xC; // Vector
    constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float
    constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
    constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
}

namespace sndopvarlatchdata_t {
    constexpr std::ptrdiff_t m_iszStack = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperator = 0x10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvar = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flVal = 0x20; // float
    constexpr std::ptrdiff_t m_vPos = 0x24; // Vector
}

namespace thinkfunc_t {
    constexpr std::ptrdiff_t m_hFn = 0x10; // HSCRIPT
    constexpr std::ptrdiff_t m_nContext = 0x18; // CUtlStringToken
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x1C; // GameTick_t
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x20; // GameTick_t
}