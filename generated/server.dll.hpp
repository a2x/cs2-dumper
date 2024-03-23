/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:04 +0000
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
    constexpr std::ptrdiff_t m_iSoundType = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_iSoundContext = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_iVolume = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_iSoundIndex = 0x4CC; // int32_t
    constexpr std::ptrdiff_t m_flDuration = 0x4D0; // float
    constexpr std::ptrdiff_t m_iszProxyEntityName = 0x4D8; // CUtlSymbolLarge
}

namespace CAI_ChangeHintGroup { // CBaseEntity
    constexpr std::ptrdiff_t m_iSearchType = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_strSearchName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strNewHintGroup = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x4D8; // float
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
    constexpr std::ptrdiff_t m_radius = 0x4C0; // float
    constexpr std::ptrdiff_t m_flMaxRadius = 0x4C4; // float
    constexpr std::ptrdiff_t m_iSoundLevel = 0x4C8; // soundlevel_t
    constexpr std::ptrdiff_t m_dpv = 0x4CC; // dynpitchvol_t
    constexpr std::ptrdiff_t m_fActive = 0x530; // bool
    constexpr std::ptrdiff_t m_fLooping = 0x531; // bool
    constexpr std::ptrdiff_t m_iszSound = 0x538; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSourceEntName = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSoundSource = 0x548; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x54C; // CEntityIndex
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
    constexpr std::ptrdiff_t m_bEnabled = 0x710; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0x714; // int32_t
    constexpr std::ptrdiff_t m_Color = 0x718; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0x71C; // float
    constexpr std::ptrdiff_t m_flBrightness = 0x720; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x724; // float
    constexpr std::ptrdiff_t m_nDirectLight = 0x728; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x72C; // int32_t
    constexpr std::ptrdiff_t m_nLuminaireShape = 0x730; // int32_t
    constexpr std::ptrdiff_t m_flLuminaireSize = 0x734; // float
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x738; // float
    constexpr std::ptrdiff_t m_LightStyleString = 0x740; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x748; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x750; // CNetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleEvents = 0x768; // CNetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleTargets = 0x780; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_StyleEvent = 0x798; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_hLightCookie = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flShape = 0x860; // float
    constexpr std::ptrdiff_t m_flSoftX = 0x864; // float
    constexpr std::ptrdiff_t m_flSoftY = 0x868; // float
    constexpr std::ptrdiff_t m_flSkirt = 0x86C; // float
    constexpr std::ptrdiff_t m_flSkirtNear = 0x870; // float
    constexpr std::ptrdiff_t m_vSizeParams = 0x874; // Vector
    constexpr std::ptrdiff_t m_flRange = 0x880; // float
    constexpr std::ptrdiff_t m_vShear = 0x884; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x890; // int32_t
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x894; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0x8A0; // int32_t
    constexpr std::ptrdiff_t m_nShadowMapSize = 0x8A4; // int32_t
    constexpr std::ptrdiff_t m_nShadowPriority = 0x8A8; // int32_t
    constexpr std::ptrdiff_t m_bContactShadow = 0x8AC; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0x8B0; // int32_t
    constexpr std::ptrdiff_t m_flBounceScale = 0x8B4; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0x8B8; // float
    constexpr std::ptrdiff_t m_vAlternateColor = 0x8BC; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8C8; // float
    constexpr std::ptrdiff_t m_nFog = 0x8CC; // int32_t
    constexpr std::ptrdiff_t m_flFogStrength = 0x8D0; // float
    constexpr std::ptrdiff_t m_nFogShadows = 0x8D4; // int32_t
    constexpr std::ptrdiff_t m_flFogScale = 0x8D8; // float
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0x8DC; // float
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x8E0; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x8E4; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x8E8; // float
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x8EC; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x8F0; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8FC; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x908; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x914; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x920; // Vector
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x92C; // bool
}

namespace CBaseAnimGraph { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x788; // bool
    constexpr std::ptrdiff_t m_pChoreoServices = 0x790; // IChoreoServices*
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x798; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x79C; // float
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x7A0; // Vector
    constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x7AC; // bool
    constexpr std::ptrdiff_t m_vecForce = 0x7B0; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0x7BC; // int32_t
    constexpr std::ptrdiff_t m_pRagdollPose = 0x7D0; // PhysicsRagdollPose_t*
    constexpr std::ptrdiff_t m_bClientRagdoll = 0x7D8; // bool
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
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x790; // QAngle
    constexpr std::ptrdiff_t m_fStayPushed = 0x79C; // bool
    constexpr std::ptrdiff_t m_fRotating = 0x79D; // bool
    constexpr std::ptrdiff_t m_ls = 0x7A0; // locksound_t
    constexpr std::ptrdiff_t m_sUseSound = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sLockedSound = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sUnlockedSound = 0x7D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bLocked = 0x7D8; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x7D9; // bool
    constexpr std::ptrdiff_t m_flUseLockedTime = 0x7DC; // GameTime_t
    constexpr std::ptrdiff_t m_bSolidBsp = 0x7E0; // bool
    constexpr std::ptrdiff_t m_OnDamaged = 0x7E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPressed = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUseLocked = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnIn = 0x860; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOut = 0x888; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nState = 0x8B0; // int32_t
    constexpr std::ptrdiff_t m_hConstraint = 0x8B4; // CEntityHandle
    constexpr std::ptrdiff_t m_hConstraintParent = 0x8B8; // CEntityHandle
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x8BC; // bool
    constexpr std::ptrdiff_t m_sGlowEntity = 0x8C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_glowEntity = 0x8C8; // CHandle<CBaseModelEntity>
    constexpr std::ptrdiff_t m_usable = 0x8CC; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0x8D0; // CUtlSymbolLarge
}

namespace CBaseCSGrenade { // CCSWeaponBase
    constexpr std::ptrdiff_t m_bRedraw = 0xE90; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0xE91; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0xE92; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0xE93; // bool
    constexpr std::ptrdiff_t m_bThrowAnimating = 0xE94; // bool
    constexpr std::ptrdiff_t m_fThrowTime = 0xE98; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0xE9C; // float
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0xEA0; // float
    constexpr std::ptrdiff_t m_fDropTime = 0xEA4; // GameTime_t
    constexpr std::ptrdiff_t m_bJustPulledPin = 0xEA8; // bool
    constexpr std::ptrdiff_t m_nNextHoldTick = 0xEAC; // GameTick_t
    constexpr std::ptrdiff_t m_flNextHoldFrac = 0xEB0; // float
    constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0xEB4; // CHandle<CCSWeaponBase>
}

namespace CBaseCSGrenadeProjectile { // CBaseGrenade
    constexpr std::ptrdiff_t m_vInitialPosition = 0xA20; // Vector
    constexpr std::ptrdiff_t m_vInitialVelocity = 0xA2C; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0xA38; // int32_t
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xA48; // int32_t
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xA4C; // Vector
    constexpr std::ptrdiff_t m_flSpawnTime = 0xA58; // GameTime_t
    constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xA5C; // uint8_t
    constexpr std::ptrdiff_t m_bDetonationRecorded = 0xA5D; // bool
    constexpr std::ptrdiff_t m_flDetonateTime = 0xA60; // GameTime_t
    constexpr std::ptrdiff_t m_nItemIndex = 0xA64; // uint16_t
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xA68; // Vector
    constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xA74; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xA78; // RotationVector
    constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xA84; // Vector
    constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xA90; // int32_t
    constexpr std::ptrdiff_t m_bHasEverHitPlayer = 0xA94; // bool
    constexpr std::ptrdiff_t m_bClearFromPlayers = 0xA95; // bool
}

namespace CBaseClientUIEntity { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x710; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0x718; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_CustomOutput0 = 0x730; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput1 = 0x758; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput2 = 0x780; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput3 = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput4 = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput5 = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput6 = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput7 = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput8 = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_CustomOutput9 = 0x898; // CEntityIOOutput
}

namespace CBaseCombatCharacter { // CBaseFlex
    constexpr std::ptrdiff_t m_bForceServerRagdoll = 0x978; // bool
    constexpr std::ptrdiff_t m_hMyWearables = 0x980; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
    constexpr std::ptrdiff_t m_flFieldOfView = 0x998; // float
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x99C; // float
    constexpr std::ptrdiff_t m_LastHitGroup = 0x9A0; // HitGroup_t
    constexpr std::ptrdiff_t m_bApplyStressDamage = 0x9A4; // bool
    constexpr std::ptrdiff_t m_bloodColor = 0x9A8; // int32_t
    constexpr std::ptrdiff_t m_iDamageCount = 0x9F0; // int32_t
    constexpr std::ptrdiff_t m_pVecRelationships = 0x9F8; // CUtlVector<RelationshipOverride_t>*
    constexpr std::ptrdiff_t m_strRelationships = 0xA00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_eHull = 0xA08; // Hull_t
    constexpr std::ptrdiff_t m_nNavHullIdx = 0xA0C; // uint32_t
}

namespace CBaseDMStart { // CPointEntity
    constexpr std::ptrdiff_t m_Master = 0x4C0; // CUtlSymbolLarge
}

namespace CBaseDoor { // CBaseToggle
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7A0; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7AC; // Vector
    constexpr std::ptrdiff_t m_ls = 0x7B8; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0x7D8; // bool
    constexpr std::ptrdiff_t m_bDoorGroup = 0x7D9; // bool
    constexpr std::ptrdiff_t m_bLocked = 0x7DA; // bool
    constexpr std::ptrdiff_t m_bIgnoreDebris = 0x7DB; // bool
    constexpr std::ptrdiff_t m_eSpawnPosition = 0x7DC; // FuncDoorSpawnPos_t
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7E0; // float
    constexpr std::ptrdiff_t m_NoiseMoving = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x7F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x800; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ChainTarget = 0x808; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x860; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x888; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x8B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x8D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0x900; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0x928; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0x950; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bLoopMoveSound = 0x978; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x990; // bool
    constexpr std::ptrdiff_t m_isChaining = 0x991; // bool
    constexpr std::ptrdiff_t m_bIsUsable = 0x992; // bool
}

namespace CBaseEntity { // CEntityInstance
    constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x230; // CUtlVector<thinkfunc_t>
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x248; // int32_t
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x24C; // GameTick_t
    constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x250; // GameTick_t
    constexpr std::ptrdiff_t m_isSteadyState = 0x260; // CBitVec<64>
    constexpr std::ptrdiff_t m_lastNetworkChange = 0x268; // float
    constexpr std::ptrdiff_t m_ResponseContexts = 0x278; // CUtlVector<ResponseContext_t>
    constexpr std::ptrdiff_t m_iszResponseContext = 0x290; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iHealth = 0x2B8; // int32_t
    constexpr std::ptrdiff_t m_iMaxHealth = 0x2BC; // int32_t
    constexpr std::ptrdiff_t m_lifeState = 0x2C0; // uint8_t
    constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2C4; // float
    constexpr std::ptrdiff_t m_bTakesDamage = 0x2C8; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2CC; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_bIsPlatform = 0x2D0; // bool
    constexpr std::ptrdiff_t m_MoveCollide = 0x2D2; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x2D3; // MoveType_t
    constexpr std::ptrdiff_t m_nActualMoveType = 0x2D4; // MoveType_t
    constexpr std::ptrdiff_t m_nWaterTouch = 0x2D5; // uint8_t
    constexpr std::ptrdiff_t m_nSlimeTouch = 0x2D6; // uint8_t
    constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2D7; // bool
    constexpr std::ptrdiff_t m_target = 0x2D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hDamageFilter = 0x2E0; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_iszDamageFilterName = 0x2E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveDoneTime = 0x2F0; // float
    constexpr std::ptrdiff_t m_nSubclassID = 0x2F4; // CUtlStringToken
    constexpr std::ptrdiff_t m_flAnimTime = 0x300; // float
    constexpr std::ptrdiff_t m_flSimulationTime = 0x304; // float
    constexpr std::ptrdiff_t m_flCreateTime = 0x308; // GameTime_t
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x30C; // bool
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x30D; // uint8_t
    constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x310; // Vector
    constexpr std::ptrdiff_t m_iTeamNum = 0x31C; // uint8_t
    constexpr std::ptrdiff_t m_iGlobalname = 0x320; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iSentToClients = 0x328; // int32_t
    constexpr std::ptrdiff_t m_flSpeed = 0x32C; // float
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x330; // CUtlString
    constexpr std::ptrdiff_t m_spawnflags = 0x338; // uint32_t
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x33C; // GameTick_t
    constexpr std::ptrdiff_t m_nSimulationTick = 0x340; // int32_t
    constexpr std::ptrdiff_t m_OnKilled = 0x348; // CEntityIOOutput
    constexpr std::ptrdiff_t m_fFlags = 0x370; // uint32_t
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x374; // Vector
    constexpr std::ptrdiff_t m_vecVelocity = 0x380; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3B0; // Vector
    constexpr std::ptrdiff_t m_nPushEnumCount = 0x3BC; // int32_t
    constexpr std::ptrdiff_t m_pCollision = 0x3C0; // CCollisionProperty*
    constexpr std::ptrdiff_t m_hEffectEntity = 0x3C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x3CC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_fEffects = 0x3D0; // uint32_t
    constexpr std::ptrdiff_t m_hGroundEntity = 0x3D4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flFriction = 0x3D8; // float
    constexpr std::ptrdiff_t m_flElasticity = 0x3DC; // float
    constexpr std::ptrdiff_t m_flGravityScale = 0x3E0; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x3E4; // float
    constexpr std::ptrdiff_t m_flWaterLevel = 0x3E8; // float
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x3EC; // bool
    constexpr std::ptrdiff_t m_bDisableLowViolence = 0x3ED; // bool
    constexpr std::ptrdiff_t m_nWaterType = 0x3EE; // uint8_t
    constexpr std::ptrdiff_t m_iEFlags = 0x3F0; // int32_t
    constexpr std::ptrdiff_t m_OnUser1 = 0x3F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser2 = 0x420; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser3 = 0x448; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser4 = 0x470; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInitialTeamNum = 0x498; // int32_t
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x49C; // GameTime_t
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x4A0; // QAngle
    constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x4AC; // bool
    constexpr std::ptrdiff_t m_bLagCompensate = 0x4AD; // bool
    constexpr std::ptrdiff_t m_flOverriddenFriction = 0x4B0; // float
    constexpr std::ptrdiff_t m_pBlocker = 0x4B4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flLocalTime = 0x4B8; // float
    constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4BC; // float
}

namespace CBaseEntityAPI {
}

namespace CBaseFilter { // CLogicalEntity
    constexpr std::ptrdiff_t m_bNegated = 0x4C0; // bool
    constexpr std::ptrdiff_t m_OnPass = 0x4C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFail = 0x4F0; // CEntityIOOutput
}

namespace CBaseFire { // CBaseEntity
    constexpr std::ptrdiff_t m_flScale = 0x4C0; // float
    constexpr std::ptrdiff_t m_flStartScale = 0x4C4; // float
    constexpr std::ptrdiff_t m_flScaleTime = 0x4C8; // float
    constexpr std::ptrdiff_t m_nFlags = 0x4CC; // uint32_t
}

namespace CBaseFlex { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_flexWeight = 0x8E8; // CNetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0x900; // Vector
    constexpr std::ptrdiff_t m_blinktoggle = 0x90C; // bool
    constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x960; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0x964; // GameTime_t
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0x968; // uint32_t
    constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0x96C; // bool
}

namespace CBaseFlexAlias_funCBaseFlex { // CBaseFlex
}

namespace CBaseGrenade { // CBaseFlex
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x980; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExplode = 0x9A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0x9D0; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x9D1; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0x9D2; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0x9D4; // float
    constexpr std::ptrdiff_t m_flDetonateTime = 0x9D8; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0x9DC; // float
    constexpr std::ptrdiff_t m_flDamage = 0x9E0; // float
    constexpr std::ptrdiff_t m_iszBounceSound = 0x9E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0x9F0; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0x9FC; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_flNextAttack = 0xA14; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0xA18; // CHandle<CCSPlayerPawn>
}

namespace CBaseIssue {
    constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
    constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[260]
    constexpr std::ptrdiff_t m_iNumYesVotes = 0x164; // int32_t
    constexpr std::ptrdiff_t m_iNumNoVotes = 0x168; // int32_t
    constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x16C; // int32_t
    constexpr std::ptrdiff_t m_pVoteController = 0x170; // CVoteController*
}

namespace CBaseModelEntity { // CBaseEntity
    constexpr std::ptrdiff_t m_CRenderComponent = 0x4C0; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0x4C8; // CHitboxComponent
    constexpr std::ptrdiff_t m_flDissolveStartTime = 0x4F0; // GameTime_t
    constexpr std::ptrdiff_t m_OnIgnite = 0x4F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nRenderMode = 0x520; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0x521; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0x522; // bool
    constexpr std::ptrdiff_t m_clrRender = 0x523; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0x528; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x578; // bool
    constexpr std::ptrdiff_t m_Collision = 0x580; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0x630; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x688; // float
    constexpr std::ptrdiff_t m_fadeMinDist = 0x68C; // float
    constexpr std::ptrdiff_t m_fadeMaxDist = 0x690; // float
    constexpr std::ptrdiff_t m_flFadeScale = 0x694; // float
    constexpr std::ptrdiff_t m_flShadowStrength = 0x698; // float
    constexpr std::ptrdiff_t m_nObjectCulling = 0x69C; // uint8_t
    constexpr std::ptrdiff_t m_nAddDecal = 0x6A0; // int32_t
    constexpr std::ptrdiff_t m_vDecalPosition = 0x6A4; // Vector
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x6B0; // Vector
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x6BC; // float
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x6C0; // float
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_vecViewOffset = 0x6E0; // CNetworkViewOffsetVector
}

namespace CBaseMoveBehavior { // CPathKeyFrame
    constexpr std::ptrdiff_t m_iPositionInterpolator = 0x520; // int32_t
    constexpr std::ptrdiff_t m_iRotationInterpolator = 0x524; // int32_t
    constexpr std::ptrdiff_t m_flAnimStartTime = 0x528; // float
    constexpr std::ptrdiff_t m_flAnimEndTime = 0x52C; // float
    constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x530; // float
    constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x538; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x540; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPreKeyFrame = 0x548; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPostKeyFrame = 0x550; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x558; // float
    constexpr std::ptrdiff_t m_iDirection = 0x55C; // int32_t
}

namespace CBasePlatTrain { // CBaseToggle
    constexpr std::ptrdiff_t m_NoiseMoving = 0x790; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0x798; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_volume = 0x7A8; // float
    constexpr std::ptrdiff_t m_flTWidth = 0x7AC; // float
    constexpr std::ptrdiff_t m_flTLength = 0x7B0; // float
}

namespace CBasePlayerController { // CBaseEntity
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4C8; // uint64_t
    constexpr std::ptrdiff_t m_nTickBase = 0x4D0; // uint32_t
    constexpr std::ptrdiff_t m_hPawn = 0x500; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x504; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x508; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x510; // CUtlVector<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_bIsHLTV = 0x528; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x52C; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x530; // char[128]
    constexpr std::ptrdiff_t m_szNetworkIDString = 0x5B0; // CUtlString
    constexpr std::ptrdiff_t m_fLerpTime = 0x5B8; // float
    constexpr std::ptrdiff_t m_bLagCompensation = 0x5BC; // bool
    constexpr std::ptrdiff_t m_bPredict = 0x5BD; // bool
    constexpr std::ptrdiff_t m_bAutoKickDisabled = 0x5BE; // bool
    constexpr std::ptrdiff_t m_bIsLowViolence = 0x5BF; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0x5C0; // bool
    constexpr std::ptrdiff_t m_nLastRealCommandNumberExecuted = 0x654; // int32_t
    constexpr std::ptrdiff_t m_nLastLateCommandExecuted = 0x658; // int32_t
    constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x670; // ChatIgnoreType_t
    constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x674; // float
    constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x678; // float
    constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x67C; // int32_t
    constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x680; // bool
    constexpr std::ptrdiff_t m_steamID = 0x690; // uint64_t
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x698; // uint32_t
}

namespace CBasePlayerControllerAPI {
}

namespace CBasePlayerPawn { // CBaseCombatCharacter
    constexpr std::ptrdiff_t m_pWeaponServices = 0xA10; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0xA18; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0xA20; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0xA28; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0xA30; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0xA38; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0xA40; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0xA48; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0xA50; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xA60; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xAB0; // uint32_t
    constexpr std::ptrdiff_t v_angle = 0xAB4; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0xAC0; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0xACC; // uint32_t
    constexpr std::ptrdiff_t m_skybox3d = 0xAD0; // sky3dparams_t
    constexpr std::ptrdiff_t m_fTimeLastHurt = 0xB60; // GameTime_t
    constexpr std::ptrdiff_t m_flDeathTime = 0xB64; // GameTime_t
    constexpr std::ptrdiff_t m_fNextSuicideTime = 0xB68; // GameTime_t
    constexpr std::ptrdiff_t m_fInitHUD = 0xB6C; // bool
    constexpr std::ptrdiff_t m_pExpresser = 0xB70; // CAI_Expresser*
    constexpr std::ptrdiff_t m_hController = 0xB78; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xB80; // float
    constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xB84; // float
    constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xB88; // CEntityIndex
    constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xB90; // CUtlVector<sndopvarlatchdata_t>
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
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xC70; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xC74; // float
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xC78; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xC7C; // float
    constexpr std::ptrdiff_t m_iClip1 = 0xC80; // int32_t
    constexpr std::ptrdiff_t m_iClip2 = 0xC84; // int32_t
    constexpr std::ptrdiff_t m_pReserveAmmo = 0xC88; // int32_t[2]
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xC90; // CEntityIOOutput
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
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x8E8; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0x8EC; // int32_t
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x8F0; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x8F4; // matrix3x4_t
}

namespace CBasePropDoor { // CDynamicProp
    constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xB70; // float
    constexpr std::ptrdiff_t m_hDoorList = 0xB78; // CUtlVector<CHandle<CBasePropDoor>>
    constexpr std::ptrdiff_t m_nHardwareType = 0xB90; // int32_t
    constexpr std::ptrdiff_t m_bNeedsHardware = 0xB94; // bool
    constexpr std::ptrdiff_t m_eDoorState = 0xB98; // DoorState_t
    constexpr std::ptrdiff_t m_bLocked = 0xB9C; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0xBA0; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0xBAC; // QAngle
    constexpr std::ptrdiff_t m_hBlocker = 0xBB8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bFirstBlocked = 0xBBC; // bool
    constexpr std::ptrdiff_t m_ls = 0xBC0; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0xBE0; // bool
    constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xBE4; // Vector
    constexpr std::ptrdiff_t m_hActivator = 0xBF0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_SoundMoving = 0xC00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundOpen = 0xC08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundClose = 0xC10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLock = 0xC18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundUnlock = 0xC20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLatch = 0xC28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundPound = 0xC30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundJiggle = 0xC38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLockedAnim = 0xC40; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_numCloseAttempts = 0xC48; // int32_t
    constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xC4C; // CUtlStringToken
    constexpr std::ptrdiff_t m_SlaveName = 0xC50; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMaster = 0xC58; // CHandle<CBasePropDoor>
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0xC60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0xC88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xCB0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xCD8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xD00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xD28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0xD50; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0xD78; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0xDA0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAjarOpen = 0xDC8; // CEntityIOOutput
}

namespace CBaseToggle { // CBaseModelEntity
    constexpr std::ptrdiff_t m_toggle_state = 0x710; // TOGGLE_STATE
    constexpr std::ptrdiff_t m_flMoveDistance = 0x714; // float
    constexpr std::ptrdiff_t m_flWait = 0x718; // float
    constexpr std::ptrdiff_t m_flLip = 0x71C; // float
    constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x720; // bool
    constexpr std::ptrdiff_t m_vecPosition1 = 0x724; // Vector
    constexpr std::ptrdiff_t m_vecPosition2 = 0x730; // Vector
    constexpr std::ptrdiff_t m_vecMoveAng = 0x73C; // QAngle
    constexpr std::ptrdiff_t m_vecAngle1 = 0x748; // QAngle
    constexpr std::ptrdiff_t m_vecAngle2 = 0x754; // QAngle
    constexpr std::ptrdiff_t m_flHeight = 0x760; // float
    constexpr std::ptrdiff_t m_hActivator = 0x764; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecFinalDest = 0x768; // Vector
    constexpr std::ptrdiff_t m_vecFinalAngle = 0x774; // QAngle
    constexpr std::ptrdiff_t m_movementType = 0x780; // int32_t
    constexpr std::ptrdiff_t m_sMaster = 0x788; // CUtlSymbolLarge
}

namespace CBaseTrigger { // CBaseToggle
    constexpr std::ptrdiff_t m_bDisabled = 0x790; // bool
    constexpr std::ptrdiff_t m_iFilterName = 0x798; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x7A0; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_OnStartTouch = 0x7A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouchAll = 0x7D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouchAll = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouching = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotTouching = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hTouchingEntities = 0x898; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0x8B0; // bool
}

namespace CBaseViewModel { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_vecLastFacing = 0x8F0; // Vector
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x8FC; // uint32_t
    constexpr std::ptrdiff_t m_nAnimationParity = 0x900; // uint32_t
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0x904; // float
    constexpr std::ptrdiff_t m_hWeapon = 0x908; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_sVMName = 0x910; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0x918; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0x920; // HSequence
    constexpr std::ptrdiff_t m_oldLayer = 0x924; // int32_t
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0x928; // float
    constexpr std::ptrdiff_t m_hControlPanel = 0x92C; // CHandle<CBaseEntity>
}

namespace CBeam { // CBaseModelEntity
    constexpr std::ptrdiff_t m_flFrameRate = 0x710; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x714; // float
    constexpr std::ptrdiff_t m_flFireTime = 0x718; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0x71C; // float
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0x720; // uint8_t
    constexpr std::ptrdiff_t m_hBaseMaterial = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nHaloIndex = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nBeamType = 0x738; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0x73C; // uint32_t
    constexpr std::ptrdiff_t m_hAttachEntity = 0x740; // CHandle<CBaseEntity>[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0x768; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0x774; // float
    constexpr std::ptrdiff_t m_fEndWidth = 0x778; // float
    constexpr std::ptrdiff_t m_fFadeLength = 0x77C; // float
    constexpr std::ptrdiff_t m_fHaloScale = 0x780; // float
    constexpr std::ptrdiff_t m_fAmplitude = 0x784; // float
    constexpr std::ptrdiff_t m_fStartFrame = 0x788; // float
    constexpr std::ptrdiff_t m_fSpeed = 0x78C; // float
    constexpr std::ptrdiff_t m_flFrame = 0x790; // float
    constexpr std::ptrdiff_t m_nClipStyle = 0x794; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0x798; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0x79C; // Vector
    constexpr std::ptrdiff_t m_hEndEntity = 0x7A8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nDissolveType = 0x7AC; // int32_t
}

namespace CBlood { // CPointEntity
    constexpr std::ptrdiff_t m_vecSprayAngles = 0x4C0; // QAngle
    constexpr std::ptrdiff_t m_vecSprayDir = 0x4CC; // Vector
    constexpr std::ptrdiff_t m_flAmount = 0x4D8; // float
    constexpr std::ptrdiff_t m_Color = 0x4DC; // int32_t
}

namespace CBodyComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
    constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
}

namespace CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t m_animationController = 0x460; // CBaseAnimGraphController
    constexpr std::ptrdiff_t __m_pChainEntity = 0x950; // CNetworkVarChainer
}

namespace CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x460; // CNetworkVarChainer
}

namespace CBodyComponentPoint { // CBodyComponent
    constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

namespace CBodyComponentSkeletonInstance { // CBodyComponent
    constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x430; // CNetworkVarChainer
}

namespace CBombTarget { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnBombExplode = 0x8B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombPlanted = 0x8E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefused = 0x908; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsBombSiteB = 0x930; // bool
    constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x931; // bool
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0x932; // bool
    constexpr std::ptrdiff_t m_szMountTarget = 0x938; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hInstructorHint = 0x940; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x944; // int32_t
}

namespace CBot {
    constexpr std::ptrdiff_t m_pController = 0x10; // CCSPlayerController*
    constexpr std::ptrdiff_t m_pPlayer = 0x18; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // bool
    constexpr std::ptrdiff_t m_id = 0x24; // uint32_t
    constexpr std::ptrdiff_t m_isRunning = 0xB0; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xB1; // bool
    constexpr std::ptrdiff_t m_forwardSpeed = 0xB4; // float
    constexpr std::ptrdiff_t m_leftSpeed = 0xB8; // float
    constexpr std::ptrdiff_t m_verticalSpeed = 0xBC; // float
    constexpr std::ptrdiff_t m_buttonFlags = 0xC0; // uint64_t
    constexpr std::ptrdiff_t m_jumpTimestamp = 0xC8; // float
    constexpr std::ptrdiff_t m_viewForward = 0xCC; // Vector
    constexpr std::ptrdiff_t m_postureStackIndex = 0xE8; // int32_t
}

namespace CBreachCharge { // CCSWeaponBase
}

namespace CBreachChargeProjectile { // CBaseGrenade
}

namespace CBreakable { // CBaseModelEntity
    constexpr std::ptrdiff_t m_Material = 0x720; // Materials
    constexpr std::ptrdiff_t m_hBreaker = 0x724; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_Explosion = 0x728; // Explosions
    constexpr std::ptrdiff_t m_iszSpawnObject = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPressureDelay = 0x738; // float
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x73C; // int32_t
    constexpr std::ptrdiff_t m_iszPropData = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x748; // float
    constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x74C; // EOverrideBlockLOS_t
    constexpr std::ptrdiff_t m_OnBreak = 0x750; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x778; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x7A0; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0x7A4; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x7A8; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0x7AC; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0x7C0; // int32_t
    constexpr std::ptrdiff_t m_PerformanceMode = 0x7C4; // PerformanceMode_t
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x7C8; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x7CC; // GameTime_t
}

namespace CBreakableProp { // CBaseProp
    constexpr std::ptrdiff_t m_OnBreak = 0x938; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x960; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnTakeDamage = 0x988; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x9B0; // float
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x9B4; // int32_t
    constexpr std::ptrdiff_t m_preferredCarryAngles = 0x9B8; // QAngle
    constexpr std::ptrdiff_t m_flPressureDelay = 0x9C4; // float
    constexpr std::ptrdiff_t m_hBreaker = 0x9C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_PerformanceMode = 0x9CC; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x9D0; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0x9D4; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x9D8; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0x9DC; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x9E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0x9E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0x9F0; // int32_t
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x9F4; // GameTime_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x9F8; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0x9FC; // float
    constexpr std::ptrdiff_t m_explodeRadius = 0xA00; // float
    constexpr std::ptrdiff_t m_explosionDelay = 0xA08; // float
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xA10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xA18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0xA20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0xA28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xA30; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xA34; // GameTime_t
    constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xA38; // bool
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xA3C; // float
    constexpr std::ptrdiff_t m_hLastAttacker = 0xA40; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hFlareEnt = 0xA44; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bUsePuntSound = 0xA48; // bool
    constexpr std::ptrdiff_t m_iszPuntSound = 0xA50; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_noGhostCollision = 0xA58; // bool
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
    constexpr std::ptrdiff_t m_density = 0x710; // int32_t
    constexpr std::ptrdiff_t m_frequency = 0x714; // int32_t
    constexpr std::ptrdiff_t m_state = 0x718; // int32_t
}

namespace CBumpMine { // CCSWeaponBase
}

namespace CBumpMineProjectile { // CBaseGrenade
}

namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float
}

namespace CBuyZone { // CBaseTrigger
    constexpr std::ptrdiff_t m_LegacyTeamNum = 0x8B8; // int32_t
}

namespace CC4 { // CCSWeaponBase
    constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xE90; // Vector
    constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0xE9C; // Vector
    constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0xEA8; // bool
    constexpr std::ptrdiff_t m_bStartedArming = 0xEA9; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0xEAC; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0xEB0; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0xEB1; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0xEB8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xED0; // int32_t
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0xED4; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0xEDB; // bool
}

namespace CCSArmsRaceScript { // CCSGameModeScript
    constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
}

namespace CCSBot { // CBot
    constexpr std::ptrdiff_t m_lastCoopSpawnPoint = 0xF0; // CHandle<SpawnPointCoopEnemy>
    constexpr std::ptrdiff_t m_eyePosition = 0x100; // Vector
    constexpr std::ptrdiff_t m_name = 0x10C; // char[64]
    constexpr std::ptrdiff_t m_combatRange = 0x14C; // float
    constexpr std::ptrdiff_t m_isRogue = 0x150; // bool
    constexpr std::ptrdiff_t m_rogueTimer = 0x158; // CountdownTimer
    constexpr std::ptrdiff_t m_diedLastRound = 0x174; // bool
    constexpr std::ptrdiff_t m_safeTime = 0x178; // float
    constexpr std::ptrdiff_t m_wasSafe = 0x17C; // bool
    constexpr std::ptrdiff_t m_blindFire = 0x184; // bool
    constexpr std::ptrdiff_t m_surpriseTimer = 0x188; // CountdownTimer
    constexpr std::ptrdiff_t m_bAllowActive = 0x1A0; // bool
    constexpr std::ptrdiff_t m_isFollowing = 0x1A1; // bool
    constexpr std::ptrdiff_t m_leader = 0x1A4; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_followTimestamp = 0x1A8; // float
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1AC; // float
    constexpr std::ptrdiff_t m_hurryTimer = 0x1B0; // CountdownTimer
    constexpr std::ptrdiff_t m_alertTimer = 0x1C8; // CountdownTimer
    constexpr std::ptrdiff_t m_sneakTimer = 0x1E0; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0x1F8; // CountdownTimer
    constexpr std::ptrdiff_t m_stateTimestamp = 0x4C8; // float
    constexpr std::ptrdiff_t m_isAttacking = 0x4CC; // bool
    constexpr std::ptrdiff_t m_isOpeningDoor = 0x4CD; // bool
    constexpr std::ptrdiff_t m_taskEntity = 0x4D4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_goalPosition = 0x4E4; // Vector
    constexpr std::ptrdiff_t m_goalEntity = 0x4F0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_avoid = 0x4F4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_avoidTimestamp = 0x4F8; // float
    constexpr std::ptrdiff_t m_isStopping = 0x4FC; // bool
    constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x4FD; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0x500; // IntervalTimer
    constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x510; // bool
    constexpr std::ptrdiff_t m_pathIndex = 0x6608; // int32_t
    constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x660C; // GameTime_t
    constexpr std::ptrdiff_t m_repathTimer = 0x6610; // CountdownTimer
    constexpr std::ptrdiff_t m_avoidFriendTimer = 0x6628; // CountdownTimer
    constexpr std::ptrdiff_t m_isFriendInTheWay = 0x6640; // bool
    constexpr std::ptrdiff_t m_politeTimer = 0x6648; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x6660; // bool
    constexpr std::ptrdiff_t m_pathLadderEnd = 0x668C; // float
    constexpr std::ptrdiff_t m_mustRunTimer = 0x66D8; // CountdownTimer
    constexpr std::ptrdiff_t m_waitTimer = 0x66F0; // CountdownTimer
    constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x6708; // CountdownTimer
    constexpr std::ptrdiff_t m_playerTravelDistance = 0x6720; // float[64]
    constexpr std::ptrdiff_t m_travelDistancePhase = 0x6820; // uint8_t
    constexpr std::ptrdiff_t m_hostageEscortCount = 0x69B8; // uint8_t
    constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x69BC; // float
    constexpr std::ptrdiff_t m_desiredTeam = 0x69C0; // int32_t
    constexpr std::ptrdiff_t m_hasJoined = 0x69C4; // bool
    constexpr std::ptrdiff_t m_isWaitingForHostage = 0x69C5; // bool
    constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x69C8; // CountdownTimer
    constexpr std::ptrdiff_t m_waitForHostageTimer = 0x69E0; // CountdownTimer
    constexpr std::ptrdiff_t m_noisePosition = 0x69F8; // Vector
    constexpr std::ptrdiff_t m_noiseTravelDistance = 0x6A04; // float
    constexpr std::ptrdiff_t m_noiseTimestamp = 0x6A08; // float
    constexpr std::ptrdiff_t m_noiseSource = 0x6A10; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_noiseBendTimer = 0x6A28; // CountdownTimer
    constexpr std::ptrdiff_t m_bentNoisePosition = 0x6A40; // Vector
    constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x6A4C; // bool
    constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6A50; // float
    constexpr std::ptrdiff_t m_lookAheadAngle = 0x6A54; // float
    constexpr std::ptrdiff_t m_forwardAngle = 0x6A58; // float
    constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x6A5C; // float
    constexpr std::ptrdiff_t m_lookAtSpot = 0x6A64; // Vector
    constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x6A74; // float
    constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6A78; // float
    constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x6A7C; // float
    constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6A80; // bool
    constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6A81; // bool
    constexpr std::ptrdiff_t m_lookAtDesc = 0x6A88; // char*
    constexpr std::ptrdiff_t m_peripheralTimestamp = 0x6A90; // float
    constexpr std::ptrdiff_t m_approachPointCount = 0x6C18; // uint8_t
    constexpr std::ptrdiff_t m_approachPointViewPosition = 0x6C1C; // Vector
    constexpr std::ptrdiff_t m_viewSteadyTimer = 0x6C28; // IntervalTimer
    constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x6C40; // CountdownTimer
    constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6C60; // CountdownTimer
    constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6C80; // float
    constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x7088; // int32_t
    constexpr std::ptrdiff_t m_lookPitch = 0x708C; // float
    constexpr std::ptrdiff_t m_lookPitchVel = 0x7090; // float
    constexpr std::ptrdiff_t m_lookYaw = 0x7094; // float
    constexpr std::ptrdiff_t m_lookYawVel = 0x7098; // float
    constexpr std::ptrdiff_t m_targetSpot = 0x709C; // Vector
    constexpr std::ptrdiff_t m_targetSpotVelocity = 0x70A8; // Vector
    constexpr std::ptrdiff_t m_targetSpotPredicted = 0x70B4; // Vector
    constexpr std::ptrdiff_t m_aimError = 0x70C0; // QAngle
    constexpr std::ptrdiff_t m_aimGoal = 0x70CC; // QAngle
    constexpr std::ptrdiff_t m_targetSpotTime = 0x70D8; // GameTime_t
    constexpr std::ptrdiff_t m_aimFocus = 0x70DC; // float
    constexpr std::ptrdiff_t m_aimFocusInterval = 0x70E0; // float
    constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x70E4; // GameTime_t
    constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x70F0; // CountdownTimer
    constexpr std::ptrdiff_t m_enemy = 0x7108; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_isEnemyVisible = 0x710C; // bool
    constexpr std::ptrdiff_t m_visibleEnemyParts = 0x710D; // uint8_t
    constexpr std::ptrdiff_t m_lastEnemyPosition = 0x7110; // Vector
    constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x711C; // float
    constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x7120; // float
    constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x7124; // float
    constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x7128; // float
    constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x712C; // float
    constexpr std::ptrdiff_t m_isLastEnemyDead = 0x7130; // bool
    constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x7134; // int32_t
    constexpr std::ptrdiff_t m_bomber = 0x7340; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_nearbyFriendCount = 0x7344; // int32_t
    constexpr std::ptrdiff_t m_closestVisibleFriend = 0x7348; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x734C; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_attentionInterval = 0x7350; // IntervalTimer
    constexpr std::ptrdiff_t m_attacker = 0x7360; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_attackedTimestamp = 0x7364; // float
    constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x7368; // IntervalTimer
    constexpr std::ptrdiff_t m_lastVictimID = 0x7378; // int32_t
    constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x737C; // bool
    constexpr std::ptrdiff_t m_isRapidFiring = 0x737D; // bool
    constexpr std::ptrdiff_t m_equipTimer = 0x7380; // IntervalTimer
    constexpr std::ptrdiff_t m_zoomTimer = 0x7390; // CountdownTimer
    constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x73A8; // GameTime_t
    constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x73B0; // CountdownTimer
    constexpr std::ptrdiff_t m_bIsSleeping = 0x73C8; // bool
    constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x73C9; // bool
    constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x73D0; // CountdownTimer
    constexpr std::ptrdiff_t m_enemyQueueIndex = 0x7488; // uint8_t
    constexpr std::ptrdiff_t m_enemyQueueCount = 0x7489; // uint8_t
    constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x748A; // uint8_t
    constexpr std::ptrdiff_t m_isStuck = 0x748B; // bool
    constexpr std::ptrdiff_t m_stuckTimestamp = 0x748C; // GameTime_t
    constexpr std::ptrdiff_t m_stuckSpot = 0x7490; // Vector
    constexpr std::ptrdiff_t m_wiggleTimer = 0x74A0; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckJumpTimer = 0x74B8; // CountdownTimer
    constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x74D0; // GameTime_t
    constexpr std::ptrdiff_t m_avgVel = 0x74D4; // float[10]
    constexpr std::ptrdiff_t m_avgVelIndex = 0x74FC; // int32_t
    constexpr std::ptrdiff_t m_avgVelCount = 0x7500; // int32_t
    constexpr std::ptrdiff_t m_lastOrigin = 0x7504; // Vector
    constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x7514; // float
    constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x7518; // float
    constexpr std::ptrdiff_t m_radioSubject = 0x751C; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_radioPosition = 0x7520; // Vector
    constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x752C; // float
    constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x7538; // int32_t
}

namespace CCSDeathmatchScript { // CCSGameModeScript
    constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
}

namespace CCSDeathmatchScript_ConVars {
}

namespace CCSGOPlayerAnimGraphState {
}

namespace CCSGOViewModel { // CPredictedViewModel
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x930; // bool
    constexpr std::ptrdiff_t m_nWeaponParity = 0x934; // uint32_t
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0x938; // uint32_t
}

namespace CCSGO_TeamIntroCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

namespace CCSGO_TeamIntroCounterTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

namespace CCSGO_TeamIntroTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

namespace CCSGO_TeamPreviewCharacterPosition { // CBaseEntity
    constexpr std::ptrdiff_t m_nVariant = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_nRandom = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_nOrdinal = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_sWeaponName = 0x4D0; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x4D8; // uint64_t
    constexpr std::ptrdiff_t m_agentItem = 0x4E0; // CEconItemView
    constexpr std::ptrdiff_t m_glovesItem = 0x758; // CEconItemView
    constexpr std::ptrdiff_t m_weaponItem = 0x9D0; // CEconItemView
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
    constexpr std::ptrdiff_t m_hPlayerResource = 0x1570; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_RetakeRules = 0x1578; // CRetakeGameRules
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x175C; // int32_t
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x1760; // int32_t
    constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1768; // CUtlVector<int32_t>[4]
    constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C8; // bool[4]
    constexpr std::ptrdiff_t m_nMatchEndCount = 0x17F0; // uint8_t
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x17F4; // int32_t
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17F8; // int32_t
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17FC; // bool
    constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x1800; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x1804; // bool
    constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1808; // int32_t
    constexpr std::ptrdiff_t m_eRoundEndReason = 0x180C; // int32_t
    constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1810; // bool
    constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x1814; // int32_t
    constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1818; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1820; // CPlayerSlot
    constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x1824; // int32_t
    constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x1828; // int32_t
    constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x182C; // int32_t
    constexpr std::ptrdiff_t m_sRoundEndMessage = 0x1830; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1838; // int32_t
    constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x183C; // bool
    constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1840; // int32_t
    constexpr std::ptrdiff_t m_nRoundEndCount = 0x1844; // uint8_t
    constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1848; // int32_t
    constexpr std::ptrdiff_t m_nRoundStartCount = 0x184C; // uint8_t
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5858; // double
    constexpr std::ptrdiff_t m_bSkipNextServerPerfSample = 0x5860; // bool
}

namespace CCSGameRulesProxy { // CGameRulesProxy
    constexpr std::ptrdiff_t m_pGameRules = 0x4C0; // CCSGameRules*
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
    constexpr std::ptrdiff_t m_name = 0x718; // CUtlSymbolLarge
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
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6C8; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x6D0; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x6D8; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x6E0; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x6E8; // uint32_t
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x6EC; // bool
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x6F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x6F8; // uint8_t
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x6FC; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x700; // int32_t
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x704; // bool
    constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x705; // bool
    constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x708; // int32_t
    constexpr std::ptrdiff_t m_bTeamChanged = 0x70C; // bool
    constexpr std::ptrdiff_t m_bInSwitchTeam = 0x70D; // bool
    constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x70E; // bool
    constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x70F; // bool
    constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x710; // bool
    constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x711; // bool
    constexpr std::ptrdiff_t m_szClan = 0x718; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szClanName = 0x720; // char[32]
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x740; // int32_t
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x748; // uint64_t
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x750; // uint64_t
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x758; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x75C; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x760; // int8_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x764; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x768; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x76C; // int32_t
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x770; // int32_t
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x774; // uint16_t
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x778; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x77C; // uint32_t
    constexpr std::ptrdiff_t m_iDraftIndex = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7AC; // uint32_t
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7B0; // uint32_t
    constexpr std::ptrdiff_t m_bCannotBeKicked = 0x7B4; // bool
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7B5; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7B6; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7B7; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7B8; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0x7B9; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7BC; // int32_t
    constexpr std::ptrdiff_t m_bControllingBot = 0x7C8; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7C9; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7CA; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7CC; // int32_t
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7D0; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7D4; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_hObserverPawn = 0x7D8; // CHandle<CCSObserverPawn>
    constexpr std::ptrdiff_t m_DesiredObserverMode = 0x7DC; // int32_t
    constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x7E0; // CEntityHandle
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x7E4; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0x7E8; // uint32_t
    constexpr std::ptrdiff_t m_iPawnArmor = 0x7EC; // int32_t
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x7F0; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x7F1; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x7F2; // uint16_t
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x7F4; // int32_t
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x7F8; // int32_t
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x7FC; // int32_t
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x800; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_iScore = 0x804; // int32_t
    constexpr std::ptrdiff_t m_iRoundScore = 0x808; // int32_t
    constexpr std::ptrdiff_t m_iRoundsWon = 0x80C; // int32_t
    constexpr std::ptrdiff_t m_vecKills = 0x810; // CNetworkUtlVectorBase<EKillTypes_t>
    constexpr std::ptrdiff_t m_bMvpNoMusic = 0x828; // bool
    constexpr std::ptrdiff_t m_eMvpReason = 0x82C; // int32_t
    constexpr std::ptrdiff_t m_iMusicKitID = 0x830; // int32_t
    constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x834; // int32_t
    constexpr std::ptrdiff_t m_iMVPs = 0x838; // int32_t
    constexpr std::ptrdiff_t m_nUpdateCounter = 0x83C; // int32_t
    constexpr std::ptrdiff_t m_flSmoothedPing = 0x840; // float
    constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xF8E8; // IntervalTimer
    constexpr std::ptrdiff_t m_bShowHints = 0xF900; // bool
    constexpr std::ptrdiff_t m_iNextTimeCheck = 0xF904; // int32_t
    constexpr std::ptrdiff_t m_bJustDidTeamKill = 0xF908; // bool
    constexpr std::ptrdiff_t m_bPunishForTeamKill = 0xF909; // bool
    constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0xF90A; // bool
    constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0xF90B; // bool
    constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0xF910; // double
    constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0xF918; // GameTime_t
    constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF91C; // GameTime_t
    constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0xF920; // uint32_t
    constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0xF924; // uint32_t
}

namespace CCSPlayerControllerAPI {
}

namespace CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x150; // int32_t
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x154; // int32_t
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x158; // uint32_t
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
    constexpr std::ptrdiff_t m_pBulletServices = 0x15A8; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0x15B0; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0x15B8; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x15C0; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pRadioServices = 0x15C8; // CCSPlayer_RadioServices*
    constexpr std::ptrdiff_t m_pDamageReactServices = 0x15D0; // CCSPlayer_DamageReactServices*
    constexpr std::ptrdiff_t m_nCharacterDefIndex = 0x15D8; // uint16_t
    constexpr std::ptrdiff_t m_hPreviousModel = 0x15E0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x15E8; // bool
    constexpr std::ptrdiff_t m_strVOPrefix = 0x15F0; // CUtlString
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x15F8; // char[18]
    constexpr std::ptrdiff_t m_bInHostageResetZone = 0x16B8; // bool
    constexpr std::ptrdiff_t m_bInBuyZone = 0x16B9; // bool
    constexpr std::ptrdiff_t m_bWasInBuyZone = 0x16BA; // bool
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x16BB; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0x16BC; // bool
    constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x16BD; // bool
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x16C0; // int32_t
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x16C4; // int32_t
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x16C8; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x16C9; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x16CC; // int32_t
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x16D0; // loadout_slot_t
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16D4; // GameTime_t
    constexpr std::ptrdiff_t m_flLandseconds = 0x16D8; // float
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x16DC; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x16E8; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x16F4; // int32_t
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x16F8; // float
    constexpr std::ptrdiff_t m_aimPunchCache = 0x1700; // CUtlVector<QAngle>
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1718; // bool
    constexpr std::ptrdiff_t m_xLastHeadBoneTransform = 0x1D60; // CTransform
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x1D80; // bool
    constexpr std::ptrdiff_t m_lastLandTime = 0x1D84; // GameTime_t
    constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x1D88; // bool
    constexpr std::ptrdiff_t m_iPlayerLocked = 0x1D8C; // int32_t
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1D94; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1D98; // GameTime_t
    constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x1D9C; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1DA0; // int32_t
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1DA4; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1DB0; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1DBC; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1DFC; // bool
    constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1E00; // Vector
    constexpr std::ptrdiff_t m_EconGloves = 0x1E10; // CEconItemView
    constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x2088; // uint8_t
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x208C; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2098; // bool
}

namespace CCSPlayerPawnAPI {
}

namespace CCSPlayerPawnBase { // CBasePlayerPawn
    constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xBC0; // CTouchExpansionComponent
    constexpr std::ptrdiff_t m_pPingServices = 0xC10; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_pViewModelServices = 0xC18; // CPlayer_ViewModelServices*
    constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0xC20; // uint32_t
    constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0xC24; // float
    constexpr std::ptrdiff_t m_hOriginalController = 0xC28; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_blindUntilTime = 0xC2C; // GameTime_t
    constexpr std::ptrdiff_t m_blindStartTime = 0xC30; // GameTime_t
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0xC34; // GameTime_t
    constexpr std::ptrdiff_t m_entitySpottedState = 0xC38; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xC50; // int32_t
    constexpr std::ptrdiff_t m_iPlayerState = 0xC54; // CSPlayerState
    constexpr std::ptrdiff_t m_chickenIdleSoundTimer = 0xC60; // CountdownTimer
    constexpr std::ptrdiff_t m_chickenJumpSoundTimer = 0xC78; // CountdownTimer
    constexpr std::ptrdiff_t m_vecLastBookmarkedPosition = 0xD30; // Vector
    constexpr std::ptrdiff_t m_flLastDistanceTraveledNotice = 0xD3C; // float
    constexpr std::ptrdiff_t m_flAccumulatedDistanceTraveled = 0xD40; // float
    constexpr std::ptrdiff_t m_flLastFriendlyFireDamageReductionRatio = 0xD44; // float
    constexpr std::ptrdiff_t m_bRespawning = 0xD48; // bool
    constexpr std::ptrdiff_t m_nLastPickupPriority = 0xD4C; // int32_t
    constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0xD50; // float
    constexpr std::ptrdiff_t m_bIsScoped = 0xD54; // bool
    constexpr std::ptrdiff_t m_bIsWalking = 0xD55; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0xD56; // bool
    constexpr std::ptrdiff_t m_bIsDefusing = 0xD57; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0xD58; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0xD5C; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0xD60; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0xD64; // bool
    constexpr std::ptrdiff_t m_GunGameImmunityColor = 0xD65; // Color
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0xD6C; // float
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xD70; // bool
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0xD71; // bool
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0xD74; // float
    constexpr std::ptrdiff_t m_flNextGuardianTooFarHurtTime = 0xD78; // float
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0xD7C; // GameTime_t
    constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0xD80; // float
    constexpr std::ptrdiff_t m_flLastEquippedHelmetTime = 0xD84; // GameTime_t
    constexpr std::ptrdiff_t m_flLastEquippedArmorTime = 0xD88; // GameTime_t
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0xD8C; // int32_t
    constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0xD90; // bool
    constexpr std::ptrdiff_t m_flLastBumpMineBumpTime = 0xD94; // GameTime_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0xD98; // GameTime_t
    constexpr std::ptrdiff_t m_iNumSpawns = 0xD9C; // int32_t
    constexpr std::ptrdiff_t m_iShouldHaveCash = 0xDA0; // int32_t
    constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xDA8; // float
    constexpr std::ptrdiff_t m_flNameChangeHistory = 0xDAC; // float[5]
    constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0xDC0; // float
    constexpr std::ptrdiff_t m_fLastGivenBombTime = 0xDC4; // float
    constexpr std::ptrdiff_t m_bHasNightVision = 0xDC8; // bool
    constexpr std::ptrdiff_t m_bNightVisionOn = 0xDC9; // bool
    constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xDCC; // float
    constexpr std::ptrdiff_t m_flLastMoneyUpdateTime = 0xDD0; // float
    constexpr std::ptrdiff_t m_MenuStringBuffer = 0xDD4; // char[1024]
    constexpr std::ptrdiff_t m_fIntroCamTime = 0x11D4; // float
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x11D8; // int32_t
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x11DC; // bool
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x11DD; // bool
    constexpr std::ptrdiff_t m_iMoveState = 0x11E0; // int32_t
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x11E4; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x11E8; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x11EC; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x11F8; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1204; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1210; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1228; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1240; // Vector[2]
    constexpr std::ptrdiff_t m_bDiedAirborne = 0x1258; // bool
    constexpr std::ptrdiff_t m_iBombSiteIndex = 0x125C; // CEntityIndex
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x1260; // int32_t
    constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1264; // bool
    constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1265; // bool
    constexpr std::ptrdiff_t m_iDirection = 0x1268; // int32_t
    constexpr std::ptrdiff_t m_iShotsFired = 0x126C; // int32_t
    constexpr std::ptrdiff_t m_ArmorValue = 0x1270; // int32_t
    constexpr std::ptrdiff_t m_flFlinchStack = 0x1274; // float
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x1278; // float
    constexpr std::ptrdiff_t m_flHitHeading = 0x127C; // float
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x1280; // int32_t
    constexpr std::ptrdiff_t m_iHostagesKilled = 0x1284; // int32_t
    constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1288; // Vector
    constexpr std::ptrdiff_t m_flFlashDuration = 0x1294; // float
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1298; // float
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x129C; // float
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x12A0; // int32_t
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x12A4; // bool
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x12A8; // float
    constexpr std::ptrdiff_t m_bStrafing = 0x12AC; // bool
    constexpr std::ptrdiff_t m_lastStandingPos = 0x12B0; // Vector
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x12BC; // float
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x12C0; // CountdownTimer
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x12D8; // Vector
    constexpr std::ptrdiff_t m_lastLadderPos = 0x12E4; // Vector
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x12F0; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x12FC; // float
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1300; // float
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1304; // Vector
    constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1318; // int32_t
    constexpr std::ptrdiff_t m_angEyeAngles = 0x131C; // QAngle
    constexpr std::ptrdiff_t m_bVCollisionInitted = 0x1328; // bool
    constexpr std::ptrdiff_t m_storedSpawnPosition = 0x132C; // Vector
    constexpr std::ptrdiff_t m_storedSpawnAngle = 0x1338; // QAngle
    constexpr std::ptrdiff_t m_bIsSpawning = 0x1344; // bool
    constexpr std::ptrdiff_t m_bHideTargetID = 0x1345; // bool
    constexpr std::ptrdiff_t m_nNumDangerZoneDamageHits = 0x1348; // int32_t
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x134C; // bool
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x134D; // bool
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1350; // CEntityIndex
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x1354; // int32_t
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1358; // int32_t
    constexpr std::ptrdiff_t m_iAddonBits = 0x135C; // int32_t
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1360; // int32_t
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x1364; // int32_t
    constexpr std::ptrdiff_t m_currentDeafnessFilter = 0x1368; // CUtlStringToken
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisSpawn = 0x136C; // int32_t
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisRound = 0x1370; // int32_t
    constexpr std::ptrdiff_t m_NumEnemiesAtRoundStart = 0x1374; // int32_t
    constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1378; // bool
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x137C; // uint32_t[5]
    constexpr std::ptrdiff_t m_iDeathFlags = 0x1390; // int32_t
    constexpr std::ptrdiff_t m_hPet = 0x1394; // CHandle<CChicken>
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1560; // uint16_t
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1562; // uint16_t
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1564; // uint16_t
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x1568; // int32_t
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x156C; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1570; // float
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1574; // Vector
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1580; // bool
    constexpr std::ptrdiff_t m_LastHitBox = 0x1584; // int32_t
    constexpr std::ptrdiff_t m_LastHealth = 0x1588; // int32_t
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x158C; // float
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x1590; // float
    constexpr std::ptrdiff_t m_pBot = 0x1598; // CCSBot*
    constexpr std::ptrdiff_t m_bBotAllowActive = 0x15A0; // bool
    constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x15A1; // bool
}

namespace CCSPlayerResource { // CBaseEntity
    constexpr std::ptrdiff_t m_bHostageAlive = 0x4C0; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4CC; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4D8; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x508; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x514; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x520; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x530; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x540; // int32_t[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x550; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x551; // bool
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
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x228; // float
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x22C; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x238; // int32_t
    constexpr std::ptrdiff_t m_flDuckAmount = 0x23C; // float
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x240; // float
    constexpr std::ptrdiff_t m_bDuckOverride = 0x244; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x245; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x248; // float
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x24C; // uint32_t
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x250; // uint32_t
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x254; // uint32_t
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x258; // float
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x268; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x270; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x271; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x272; // bool
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x280; // float[64][2]
    constexpr std::ptrdiff_t m_nTraceCount = 0x480; // int32_t
    constexpr std::ptrdiff_t m_StuckLast = 0x484; // int32_t
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x488; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x48C; // int32_t
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x490; // float
    constexpr std::ptrdiff_t m_vecForward = 0x494; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x4A0; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x4AC; // Vector
    constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4B8; // int32_t
    constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4BC; // bool
    constexpr std::ptrdiff_t m_iFootsteps = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4C4; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4C8; // float
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4CC; // float
    constexpr std::ptrdiff_t m_flJumpVel = 0x4D0; // float
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4D4; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4D8; // uint64_t
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4E0; // float
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4E4; // float
    constexpr std::ptrdiff_t m_flStamina = 0x4E8; // float
    constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4EC; // float
    constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4F0; // float
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
    constexpr std::ptrdiff_t m_flNextAttack = 0xA8; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xAC; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xAD; // bool
    constexpr std::ptrdiff_t m_hSavedWeapon = 0xB0; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_nTimeToMelee = 0xB4; // int32_t
    constexpr std::ptrdiff_t m_nTimeToSecondary = 0xB8; // int32_t
    constexpr std::ptrdiff_t m_nTimeToPrimary = 0xBC; // int32_t
    constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xC0; // int32_t
    constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xC4; // bool
    constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xC5; // bool
    constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xC6; // bool
    constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xC7; // bool
    constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC8; // uint32_t
    constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x460; // uint32_t
}

namespace CCSPulseServerFuncs_Globals {
}

namespace CCSSprite { // CSprite
}

namespace CCSTakeDamageInfoAPI {
}

namespace CCSTeam { // CTeam
    constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x578; // int32_t
    constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x57C; // int32_t
    constexpr std::ptrdiff_t m_bSurrendered = 0x580; // bool
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x581; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0x784; // int32_t
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x788; // int32_t
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x78C; // int32_t
    constexpr std::ptrdiff_t m_scoreOvertime = 0x790; // int32_t
    constexpr std::ptrdiff_t m_szClanTeamname = 0x794; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0x818; // uint32_t
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x81C; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x824; // char[8]
    constexpr std::ptrdiff_t m_flNextResourceTime = 0x82C; // float
    constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x830; // int32_t
}

namespace CCSWeaponBase { // CBasePlayerWeapon
    constexpr std::ptrdiff_t m_bRemoveable = 0xCE0; // bool
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xCE8; // float
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xCEC; // int32_t
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xCF0; // int32_t
    constexpr std::ptrdiff_t m_ePlayerFireEvent = 0xCF4; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0xCF8; // WeaponAttackType_t
    constexpr std::ptrdiff_t m_seqIdle = 0xCFC; // HSequence
    constexpr std::ptrdiff_t m_seqFirePrimary = 0xD00; // HSequence
    constexpr std::ptrdiff_t m_seqFireSecondary = 0xD04; // HSequence
    constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0xD08; // CUtlVector<HSequence>
    constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0xD20; // HSequence
    constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0xD24; // int32_t
    constexpr std::ptrdiff_t m_thirdPersonSequences = 0xD28; // HSequence[7]
    constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xD50; // bool
    constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xD51; // bool
    constexpr std::ptrdiff_t m_iState = 0xD54; // CSWeaponState_t
    constexpr std::ptrdiff_t m_flLastTimeInAir = 0xD58; // GameTime_t
    constexpr std::ptrdiff_t m_flLastDeployTime = 0xD5C; // GameTime_t
    constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xD60; // int32_t
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xD64; // uint32_t
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0xD68; // bool
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0xD88; // GameTime_t
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0xD8C; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xD90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0xDB8; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xDBC; // float
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xDC0; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xDCC; // float
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xDD0; // float
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xDD4; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xDD8; // float
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0xDDC; // GameTime_t
    constexpr std::ptrdiff_t m_iRecoilIndex = 0xDE0; // int32_t
    constexpr std::ptrdiff_t m_flRecoilIndex = 0xDE4; // float
    constexpr std::ptrdiff_t m_bBurstMode = 0xDE8; // bool
    constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xDEC; // GameTick_t
    constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xDF0; // float
    constexpr std::ptrdiff_t m_bInReload = 0xDF4; // bool
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0xDF5; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0xDF8; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0xDFC; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0xDFD; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xE00; // GameTime_t
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xE04; // int32_t
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xE08; // float
    constexpr std::ptrdiff_t m_bCanBePickedUp = 0xE20; // bool
    constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xE21; // bool
    constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xE24; // GameTime_t
    constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xE28; // GameTime_t
    constexpr std::ptrdiff_t m_hPrevOwner = 0xE2C; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_nDropTick = 0xE30; // GameTick_t
    constexpr std::ptrdiff_t m_donated = 0xE54; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0xE58; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xE5C; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xE5D; // bool
    constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0xE5E; // bool
    constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xE60; // int32_t
    constexpr std::ptrdiff_t m_IronSightController = 0xE68; // CIronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0xE80; // int32_t
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xE84; // GameTime_t
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0xE88; // int32_t
    constexpr std::ptrdiff_t m_flWatTickOffset = 0xE8C; // float
}

namespace CCSWeaponBaseAPI {
}

namespace CCSWeaponBaseGun { // CCSWeaponBase
    constexpr std::ptrdiff_t m_zoomLevel = 0xE90; // int32_t
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0xE94; // int32_t
    constexpr std::ptrdiff_t m_silencedModelIndex = 0xEA0; // int32_t
    constexpr std::ptrdiff_t m_inPrecache = 0xEA4; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0xEA5; // bool
    constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0xEA6; // bool
    constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xEA7; // bool
    constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0xEA8; // bool
    constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0xEA9; // bool
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
    constexpr std::ptrdiff_t m_sMapName = 0x8B8; // CUtlString
    constexpr std::ptrdiff_t m_sLandmarkName = 0x8C0; // CUtlString
    constexpr std::ptrdiff_t m_OnChangeLevel = 0x8C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bTouched = 0x8F0; // bool
    constexpr std::ptrdiff_t m_bNoTouch = 0x8F1; // bool
    constexpr std::ptrdiff_t m_bNewChapter = 0x8F2; // bool
    constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x8F3; // bool
}

namespace CChicken { // CDynamicProp
    constexpr std::ptrdiff_t m_AttributeManager = 0xB80; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xE48; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xE4C; // uint32_t
    constexpr std::ptrdiff_t m_updateTimer = 0xE50; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckAnchor = 0xE68; // Vector
    constexpr std::ptrdiff_t m_stuckTimer = 0xE78; // CountdownTimer
    constexpr std::ptrdiff_t m_collisionStuckTimer = 0xE90; // CountdownTimer
    constexpr std::ptrdiff_t m_isOnGround = 0xEA8; // bool
    constexpr std::ptrdiff_t m_vFallVelocity = 0xEAC; // Vector
    constexpr std::ptrdiff_t m_activity = 0xEB8; // ChickenActivity
    constexpr std::ptrdiff_t m_activityTimer = 0xEC0; // CountdownTimer
    constexpr std::ptrdiff_t m_turnRate = 0xED8; // float
    constexpr std::ptrdiff_t m_fleeFrom = 0xEDC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xEE0; // CountdownTimer
    constexpr std::ptrdiff_t m_startleTimer = 0xEF8; // CountdownTimer
    constexpr std::ptrdiff_t m_vocalizeTimer = 0xF10; // CountdownTimer
    constexpr std::ptrdiff_t m_flWhenZombified = 0xF28; // GameTime_t
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xF2C; // bool
    constexpr std::ptrdiff_t m_leader = 0xF30; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_reuseTimer = 0xF38; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xF50; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0xF58; // CountdownTimer
    constexpr std::ptrdiff_t m_flLastJumpTime = 0xF70; // float
    constexpr std::ptrdiff_t m_bInJump = 0xF74; // bool
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xF75; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x2F80; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2F98; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x3028; // CountdownTimer
    constexpr std::ptrdiff_t m_vecPathGoal = 0x3048; // Vector
    constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x3054; // GameTime_t
    constexpr std::ptrdiff_t m_followMinuteTimer = 0x3058; // CountdownTimer
    constexpr std::ptrdiff_t m_vecLastEggPoopPosition = 0x3070; // Vector
    constexpr std::ptrdiff_t m_vecEggsPooped = 0x3080; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x30A0; // CountdownTimer
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
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x4C0; // float
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4C4; // float
    constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4C8; // float
    constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4CC; // float
    constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4D0; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4D4; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxWeight = 0x4D8; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4DC; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x4DD; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x4DE; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x4DF; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x4E0; // bool
    constexpr std::ptrdiff_t m_MinFalloff = 0x4E4; // float
    constexpr std::ptrdiff_t m_MaxFalloff = 0x4E8; // float
    constexpr std::ptrdiff_t m_flCurWeight = 0x4EC; // float
    constexpr std::ptrdiff_t m_netlookupFilename = 0x4F0; // char[512]
    constexpr std::ptrdiff_t m_lookupFilename = 0x6F0; // CUtlSymbolLarge
}

namespace CColorCorrectionVolume { // CBaseTrigger
    constexpr std::ptrdiff_t m_bEnabled = 0x8B8; // bool
    constexpr std::ptrdiff_t m_MaxWeight = 0x8BC; // float
    constexpr std::ptrdiff_t m_FadeDuration = 0x8C0; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x8C4; // bool
    constexpr std::ptrdiff_t m_Weight = 0x8C8; // float
    constexpr std::ptrdiff_t m_lookupFilename = 0x8CC; // char[512]
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xACC; // float
    constexpr std::ptrdiff_t m_LastEnterTime = 0xAD0; // GameTime_t
    constexpr std::ptrdiff_t m_LastExitWeight = 0xAD4; // float
    constexpr std::ptrdiff_t m_LastExitTime = 0xAD8; // GameTime_t
}

namespace CCommentaryAuto { // CBaseEntity
    constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x510; // CEntityIOOutput
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
    constexpr std::ptrdiff_t m_massScale = 0x8E8; // float
}

namespace CCoopBonusCoin { // CDynamicProp
}

namespace CCopyRecipientFilter {
    constexpr std::ptrdiff_t m_Flags = 0x8; // int32_t
    constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
}

namespace CCredits { // CPointEntity
    constexpr std::ptrdiff_t m_OnCreditsDone = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x4E8; // bool
    constexpr std::ptrdiff_t m_flLogoLength = 0x4EC; // float
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
    constexpr std::ptrdiff_t m_nNpcEvents = 0x4500; // int32_t
}

namespace CDecoyGrenade { // CBaseCSGrenade
}

namespace CDecoyProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nDecoyShotTick = 0xAA0; // int32_t
    constexpr std::ptrdiff_t m_shotsRemaining = 0xAA4; // int32_t
    constexpr std::ptrdiff_t m_fExpireTime = 0xAA8; // GameTime_t
    constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xAB8; // uint16_t
}

namespace CDynamicLight { // CBaseModelEntity
    constexpr std::ptrdiff_t m_ActualFlags = 0x710; // uint8_t
    constexpr std::ptrdiff_t m_Flags = 0x711; // uint8_t
    constexpr std::ptrdiff_t m_LightStyle = 0x712; // uint8_t
    constexpr std::ptrdiff_t m_On = 0x713; // bool
    constexpr std::ptrdiff_t m_Radius = 0x714; // float
    constexpr std::ptrdiff_t m_Exponent = 0x718; // int32_t
    constexpr std::ptrdiff_t m_InnerAngle = 0x71C; // float
    constexpr std::ptrdiff_t m_OuterAngle = 0x720; // float
    constexpr std::ptrdiff_t m_SpotRadius = 0x724; // float
}

namespace CDynamicProp { // CBreakableProp
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xA68; // bool
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xA69; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xA6A; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xA70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0xA98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xAC0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xAE8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xB10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszIdleAnim = 0xB38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xB40; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0xB44; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0xB45; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xB46; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xB47; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0xB48; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xB49; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xB4C; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0xB50; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xB54; // int32_t
    constexpr std::ptrdiff_t m_glowColor = 0xB58; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0xB5C; // int32_t
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
    constexpr std::ptrdiff_t m_AttributeManager = 0x988; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xC50; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xC54; // uint32_t
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xC58; // int32_t
    constexpr std::ptrdiff_t m_nFallbackSeed = 0xC5C; // int32_t
    constexpr std::ptrdiff_t m_flFallbackWear = 0xC60; // float
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xC64; // int32_t
    constexpr std::ptrdiff_t m_hOldProvidee = 0xC68; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iOldOwnerClass = 0xC6C; // int32_t
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
    constexpr std::ptrdiff_t m_nForceSkin = 0xC70; // int32_t
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0xC74; // bool
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
    constexpr std::ptrdiff_t m_flFadeInStart = 0x710; // float
    constexpr std::ptrdiff_t m_flFadeInLength = 0x714; // float
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x718; // float
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x71C; // float
    constexpr std::ptrdiff_t m_flFadeOutStart = 0x720; // float
    constexpr std::ptrdiff_t m_flFadeOutLength = 0x724; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x728; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0x72C; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0x730; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0x73C; // uint32_t
}

namespace CEntityFlame { // CBaseEntity
    constexpr std::ptrdiff_t m_hEntAttached = 0x4C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bCheapEffect = 0x4C4; // bool
    constexpr std::ptrdiff_t m_flSize = 0x4C8; // float
    constexpr std::ptrdiff_t m_bUseHitboxes = 0x4CC; // bool
    constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4D0; // int32_t
    constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4D4; // float
    constexpr std::ptrdiff_t m_flLifetime = 0x4D8; // GameTime_t
    constexpr std::ptrdiff_t m_hAttacker = 0x4DC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iDangerSound = 0x4E0; // int32_t
    constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4E4; // float
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x4E8; // int32_t
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
    constexpr std::ptrdiff_t m_active = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_spriteTexture = 0x7B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_iszStartEntity = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEndEntity = 0x7C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_life = 0x7D0; // float
    constexpr std::ptrdiff_t m_boltWidth = 0x7D4; // float
    constexpr std::ptrdiff_t m_noiseAmplitude = 0x7D8; // float
    constexpr std::ptrdiff_t m_speed = 0x7DC; // int32_t
    constexpr std::ptrdiff_t m_restrike = 0x7E0; // float
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_frameStart = 0x7F0; // int32_t
    constexpr std::ptrdiff_t m_vEndPointWorld = 0x7F4; // Vector
    constexpr std::ptrdiff_t m_vEndPointRelative = 0x800; // Vector
    constexpr std::ptrdiff_t m_radius = 0x80C; // float
    constexpr std::ptrdiff_t m_TouchType = 0x810; // Touch_t
    constexpr std::ptrdiff_t m_iFilterName = 0x818; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x820; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszDecal = 0x828; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x830; // CEntityIOOutput
}

namespace CEnvBeverage { // CBaseEntity
    constexpr std::ptrdiff_t m_CanInDispenser = 0x4C0; // bool
    constexpr std::ptrdiff_t m_nBeverageType = 0x4C4; // int32_t
}

namespace CEnvCombinedLightProbeVolume { // CBaseEntity
    constexpr std::ptrdiff_t m_Color = 0x1518; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x151C; // float
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1528; // bool
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x1550; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x155C; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x1568; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x156C; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1570; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x1574; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x1578; // bool
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x157C; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1580; // Vector
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x158C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1590; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1594; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1598; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x159C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x15A0; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x15B9; // bool
}

namespace CEnvCubemap { // CBaseEntity
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x548; // bool
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x54C; // float
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x550; // Vector
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x55C; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x568; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x56C; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x570; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x574; // int32_t
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x578; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x57C; // Vector
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x588; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x58C; // bool
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x58D; // bool
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x58E; // bool
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x58F; // bool
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x590; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x5A0; // bool
}

namespace CEnvCubemapBox { // CEnvCubemap
}

namespace CEnvCubemapFog { // CBaseEntity
    constexpr std::ptrdiff_t m_flEndDistance = 0x4C0; // float
    constexpr std::ptrdiff_t m_flStartDistance = 0x4C4; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4C8; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4CC; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4D0; // float
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4D4; // float
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x4D8; // float
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4DC; // float
    constexpr std::ptrdiff_t m_flLODBias = 0x4E0; // float
    constexpr std::ptrdiff_t m_bActive = 0x4E4; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4E5; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4E8; // float
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4EC; // int32_t
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x4F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x500; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x508; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x509; // bool
}

namespace CEnvDecal { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hDecalMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_flWidth = 0x718; // float
    constexpr std::ptrdiff_t m_flHeight = 0x71C; // float
    constexpr std::ptrdiff_t m_flDepth = 0x720; // float
    constexpr std::ptrdiff_t m_nRenderOrder = 0x724; // uint32_t
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0x728; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x729; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0x72A; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0x72C; // float
}

namespace CEnvDetailController { // CBaseEntity
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x4C0; // float
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x4C4; // float
}

namespace CEnvEntityIgniter { // CBaseEntity
    constexpr std::ptrdiff_t m_flLifetime = 0x4C0; // float
}

namespace CEnvEntityMaker { // CPointEntity
    constexpr std::ptrdiff_t m_vecEntityMins = 0x4C0; // Vector
    constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4CC; // Vector
    constexpr std::ptrdiff_t m_hCurrentInstance = 0x4D8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4DC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x4E0; // Vector
    constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x4EC; // QAngle
    constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x4F8; // float
    constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x4FC; // float
    constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x500; // bool
    constexpr std::ptrdiff_t m_iszTemplate = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x538; // CEntityIOOutput
}

namespace CEnvExplosion { // CModelPointEntity
    constexpr std::ptrdiff_t m_iMagnitude = 0x710; // int32_t
    constexpr std::ptrdiff_t m_flPlayerDamage = 0x714; // float
    constexpr std::ptrdiff_t m_iRadiusOverride = 0x718; // int32_t
    constexpr std::ptrdiff_t m_flInnerRadius = 0x71C; // float
    constexpr std::ptrdiff_t m_spriteScale = 0x720; // int32_t
    constexpr std::ptrdiff_t m_flDamageForce = 0x724; // float
    constexpr std::ptrdiff_t m_hInflictor = 0x728; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x72C; // int32_t
    constexpr std::ptrdiff_t m_iszExplosionType = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomEffectName = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomSoundName = 0x748; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iClassIgnore = 0x750; // Class_T
    constexpr std::ptrdiff_t m_iClassIgnore2 = 0x754; // Class_T
    constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x758; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hEntityIgnore = 0x760; // CHandle<CBaseEntity>
}

namespace CEnvFade { // CLogicalEntity
    constexpr std::ptrdiff_t m_fadeColor = 0x4C0; // Color
    constexpr std::ptrdiff_t m_Duration = 0x4C4; // float
    constexpr std::ptrdiff_t m_HoldDuration = 0x4C8; // float
    constexpr std::ptrdiff_t m_OnBeginFade = 0x4D0; // CEntityIOOutput
}

namespace CEnvFireSensor { // CBaseEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_bHeatAtLevel = 0x4C1; // bool
    constexpr std::ptrdiff_t m_radius = 0x4C4; // float
    constexpr std::ptrdiff_t m_targetLevel = 0x4C8; // float
    constexpr std::ptrdiff_t m_targetTime = 0x4CC; // float
    constexpr std::ptrdiff_t m_levelTime = 0x4D0; // float
    constexpr std::ptrdiff_t m_OnHeatLevelStart = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHeatLevelEnd = 0x500; // CEntityIOOutput
}

namespace CEnvFireSource { // CBaseEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_radius = 0x4C4; // float
    constexpr std::ptrdiff_t m_damage = 0x4C8; // float
}

namespace CEnvFunnel { // CBaseEntity
}

namespace CEnvGlobal { // CLogicalEntity
    constexpr std::ptrdiff_t m_outCounter = 0x4C0; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_globalstate = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_triggermode = 0x4F0; // int32_t
    constexpr std::ptrdiff_t m_initialstate = 0x4F4; // int32_t
    constexpr std::ptrdiff_t m_counter = 0x4F8; // int32_t
}

namespace CEnvHudHint { // CPointEntity
    constexpr std::ptrdiff_t m_iszMessage = 0x4C0; // CUtlSymbolLarge
}

namespace CEnvInstructorHint { // CPointEntity
    constexpr std::ptrdiff_t m_iszName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszReplace_Key = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x4D8; // int32_t
    constexpr std::ptrdiff_t m_iDisplayLimit = 0x4DC; // int32_t
    constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCaption = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszActivatorCaption = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Color = 0x500; // Color
    constexpr std::ptrdiff_t m_fIconOffset = 0x504; // float
    constexpr std::ptrdiff_t m_fRange = 0x508; // float
    constexpr std::ptrdiff_t m_iPulseOption = 0x50C; // uint8_t
    constexpr std::ptrdiff_t m_iAlphaOption = 0x50D; // uint8_t
    constexpr std::ptrdiff_t m_iShakeOption = 0x50E; // uint8_t
    constexpr std::ptrdiff_t m_bStatic = 0x50F; // bool
    constexpr std::ptrdiff_t m_bNoOffscreen = 0x510; // bool
    constexpr std::ptrdiff_t m_bForceCaption = 0x511; // bool
    constexpr std::ptrdiff_t m_iInstanceType = 0x514; // int32_t
    constexpr std::ptrdiff_t m_bSuppressRest = 0x518; // bool
    constexpr std::ptrdiff_t m_iszBinding = 0x520; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x528; // bool
    constexpr std::ptrdiff_t m_bAutoStart = 0x529; // bool
    constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x52A; // bool
}

namespace CEnvInstructorVRHint { // CPointEntity
    constexpr std::ptrdiff_t m_iszName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x4D0; // int32_t
    constexpr std::ptrdiff_t m_iszCaption = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStartSound = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iLayoutFileType = 0x4E8; // int32_t
    constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iAttachType = 0x4F8; // int32_t
    constexpr std::ptrdiff_t m_flHeightOffset = 0x4FC; // float
}

namespace CEnvLaser { // CBeam
    constexpr std::ptrdiff_t m_iszLaserTarget = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pSprite = 0x7B8; // CSprite*
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_firePosition = 0x7C8; // Vector
    constexpr std::ptrdiff_t m_flStartFrame = 0x7D4; // float
}

namespace CEnvLightProbeVolume { // CBaseEntity
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1498; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x14B8; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x14C4; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x14D0; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x14D4; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x14D8; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x14DC; // bool
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x14E0; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x14E4; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x14E8; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x14EC; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x14F0; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x14F4; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x1501; // bool
}

namespace CEnvMicrophone { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nSoundMask = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_flSensitivity = 0x4CC; // float
    constexpr std::ptrdiff_t m_flSmoothFactor = 0x4D0; // float
    constexpr std::ptrdiff_t m_flMaxRange = 0x4D4; // float
    constexpr std::ptrdiff_t m_iszSpeakerName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSpeaker = 0x4E0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bAvoidFeedback = 0x4E4; // bool
    constexpr std::ptrdiff_t m_iSpeakerDSPPreset = 0x4E8; // int32_t
    constexpr std::ptrdiff_t m_iszListenFilter = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hListenFilter = 0x4F8; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_SoundLevel = 0x500; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnRoutedSound = 0x528; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHeardSound = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_szLastSound = 0x578; // char[256]
    constexpr std::ptrdiff_t m_iLastRoutedFrame = 0x678; // int32_t
}

namespace CEnvMuzzleFlash { // CPointEntity
    constexpr std::ptrdiff_t m_flScale = 0x4C0; // float
    constexpr std::ptrdiff_t m_iszParentAttachment = 0x4C8; // CUtlSymbolLarge
}

namespace CEnvParticleGlow { // CParticleSystem
    constexpr std::ptrdiff_t m_flAlphaScale = 0xC88; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0xC8C; // float
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0xC90; // float
    constexpr std::ptrdiff_t m_ColorTint = 0xC94; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0xC98; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

namespace CEnvProjectedTexture { // CModelPointEntity
    constexpr std::ptrdiff_t m_hTargetEntity = 0x710; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bState = 0x714; // bool
    constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x715; // bool
    constexpr std::ptrdiff_t m_flLightFOV = 0x718; // float
    constexpr std::ptrdiff_t m_bEnableShadows = 0x71C; // bool
    constexpr std::ptrdiff_t m_bSimpleProjection = 0x71D; // bool
    constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x71E; // bool
    constexpr std::ptrdiff_t m_bLightWorld = 0x71F; // bool
    constexpr std::ptrdiff_t m_bCameraSpace = 0x720; // bool
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x724; // float
    constexpr std::ptrdiff_t m_LightColor = 0x728; // Color
    constexpr std::ptrdiff_t m_flIntensity = 0x72C; // float
    constexpr std::ptrdiff_t m_flLinearAttenuation = 0x730; // float
    constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x734; // float
    constexpr std::ptrdiff_t m_bVolumetric = 0x738; // bool
    constexpr std::ptrdiff_t m_flNoiseStrength = 0x73C; // float
    constexpr std::ptrdiff_t m_flFlashlightTime = 0x740; // float
    constexpr std::ptrdiff_t m_nNumPlanes = 0x744; // uint32_t
    constexpr std::ptrdiff_t m_flPlaneOffset = 0x748; // float
    constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x74C; // float
    constexpr std::ptrdiff_t m_flColorTransitionTime = 0x750; // float
    constexpr std::ptrdiff_t m_flAmbient = 0x754; // float
    constexpr std::ptrdiff_t m_SpotlightTextureName = 0x758; // char[512]
    constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x958; // int32_t
    constexpr std::ptrdiff_t m_nShadowQuality = 0x95C; // uint32_t
    constexpr std::ptrdiff_t m_flNearZ = 0x960; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x964; // float
    constexpr std::ptrdiff_t m_flProjectionSize = 0x968; // float
    constexpr std::ptrdiff_t m_flRotation = 0x96C; // float
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0x970; // bool
}

namespace CEnvScreenOverlay { // CPointEntity
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x4C0; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x510; // float[10]
    constexpr std::ptrdiff_t m_flStartTime = 0x538; // GameTime_t
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x53C; // int32_t
    constexpr std::ptrdiff_t m_bIsActive = 0x540; // bool
}

namespace CEnvShake { // CPointEntity
    constexpr std::ptrdiff_t m_limitToEntity = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Amplitude = 0x4C8; // float
    constexpr std::ptrdiff_t m_Frequency = 0x4CC; // float
    constexpr std::ptrdiff_t m_Duration = 0x4D0; // float
    constexpr std::ptrdiff_t m_Radius = 0x4D4; // float
    constexpr std::ptrdiff_t m_stopTime = 0x4D8; // GameTime_t
    constexpr std::ptrdiff_t m_nextShake = 0x4DC; // GameTime_t
    constexpr std::ptrdiff_t m_currentAmp = 0x4E0; // float
    constexpr std::ptrdiff_t m_maxForce = 0x4E4; // Vector
    constexpr std::ptrdiff_t m_shakeCallback = 0x4F8; // CPhysicsShake
}

namespace CEnvSky { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_bStartDisabled = 0x720; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0x721; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x725; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x72C; // float
    constexpr std::ptrdiff_t m_nFogType = 0x730; // int32_t
    constexpr std::ptrdiff_t m_flFogMinStart = 0x734; // float
    constexpr std::ptrdiff_t m_flFogMinEnd = 0x738; // float
    constexpr std::ptrdiff_t m_flFogMaxStart = 0x73C; // float
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0x740; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x744; // bool
}

namespace CEnvSoundscape { // CServerOnlyEntity
    constexpr std::ptrdiff_t m_OnPlay = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flRadius = 0x4E8; // float
    constexpr std::ptrdiff_t m_soundscapeName = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundEventName = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x500; // bool
    constexpr std::ptrdiff_t m_soundscapeIndex = 0x504; // int32_t
    constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x508; // int32_t
    constexpr std::ptrdiff_t m_soundEventHash = 0x50C; // uint32_t
    constexpr std::ptrdiff_t m_positionNames = 0x510; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_hProxySoundscape = 0x550; // CHandle<CEnvSoundscape>
    constexpr std::ptrdiff_t m_bDisabled = 0x554; // bool
}

namespace CEnvSoundscapeAlias_snd_soundscape { // CEnvSoundscape
}

namespace CEnvSoundscapeProxy { // CEnvSoundscape
    constexpr std::ptrdiff_t m_MainSoundscapeName = 0x558; // CUtlSymbolLarge
}

namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy { // CEnvSoundscapeProxy
}

namespace CEnvSoundscapeTriggerable { // CEnvSoundscape
}

namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable { // CEnvSoundscapeTriggerable
}

namespace CEnvSpark { // CPointEntity
    constexpr std::ptrdiff_t m_flDelay = 0x4C0; // float
    constexpr std::ptrdiff_t m_nMagnitude = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_nTrailLength = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_nType = 0x4CC; // int32_t
    constexpr std::ptrdiff_t m_OnSpark = 0x4D0; // CEntityIOOutput
}

namespace CEnvSplash { // CPointEntity
    constexpr std::ptrdiff_t m_flScale = 0x4C0; // float
}

namespace CEnvTilt { // CPointEntity
    constexpr std::ptrdiff_t m_Duration = 0x4C0; // float
    constexpr std::ptrdiff_t m_Radius = 0x4C4; // float
    constexpr std::ptrdiff_t m_TiltTime = 0x4C8; // float
    constexpr std::ptrdiff_t m_stopTime = 0x4CC; // GameTime_t
}

namespace CEnvTracer { // CPointEntity
    constexpr std::ptrdiff_t m_vecEnd = 0x4C0; // Vector
    constexpr std::ptrdiff_t m_flDelay = 0x4CC; // float
}

namespace CEnvViewPunch { // CPointEntity
    constexpr std::ptrdiff_t m_flRadius = 0x4C0; // float
    constexpr std::ptrdiff_t m_angViewPunch = 0x4C4; // QAngle
}

namespace CEnvVolumetricFogController { // CBaseEntity
    constexpr std::ptrdiff_t m_flScattering = 0x4C0; // float
    constexpr std::ptrdiff_t m_flAnisotropy = 0x4C4; // float
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x4C8; // float
    constexpr std::ptrdiff_t m_flDrawDistance = 0x4CC; // float
    constexpr std::ptrdiff_t m_flFadeInStart = 0x4D0; // float
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x4D4; // float
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x4D8; // float
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4DC; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4E0; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4E4; // int32_t
    constexpr std::ptrdiff_t m_vBoxMins = 0x4E8; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4F4; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x500; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x504; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x508; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x50C; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x510; // float
    constexpr std::ptrdiff_t m_flStartScattering = 0x514; // float
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x518; // float
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x51C; // float
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x520; // float
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x524; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x528; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x529; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x52A; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x538; // int32_t
    constexpr std::ptrdiff_t m_bFirstTime = 0x53C; // bool
}

namespace CEnvVolumetricFogVolume { // CBaseEntity
    constexpr std::ptrdiff_t m_bActive = 0x4C0; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x4C4; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4D0; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4DC; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x4E0; // float
    constexpr std::ptrdiff_t m_nFalloffShape = 0x4E4; // int32_t
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x4E8; // float
}

namespace CEnvWind { // CBaseEntity
    constexpr std::ptrdiff_t m_EnvWindShared = 0x4C0; // CEnvWindShared
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
    constexpr std::ptrdiff_t m_sAttributeName = 0x518; // CUtlStringToken
}

namespace CFilterClass { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterClass = 0x518; // CUtlSymbolLarge
}

namespace CFilterContext { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterContext = 0x518; // CUtlSymbolLarge
}

namespace CFilterEnemy { // CBaseFilter
    constexpr std::ptrdiff_t m_iszEnemyName = 0x518; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x520; // float
    constexpr std::ptrdiff_t m_flOuterRadius = 0x524; // float
    constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x528; // int32_t
    constexpr std::ptrdiff_t m_iszPlayerName = 0x530; // CUtlSymbolLarge
}

namespace CFilterLOS { // CBaseFilter
}

namespace CFilterMassGreater { // CBaseFilter
    constexpr std::ptrdiff_t m_fFilterMass = 0x518; // float
}

namespace CFilterModel { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterModel = 0x518; // CUtlSymbolLarge
}

namespace CFilterMultiple { // CBaseFilter
    constexpr std::ptrdiff_t m_nFilterType = 0x518; // filter_t
    constexpr std::ptrdiff_t m_iFilterName = 0x520; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_hFilter = 0x570; // CHandle<CBaseEntity>[10]
    constexpr std::ptrdiff_t m_nFilterCount = 0x598; // int32_t
}

namespace CFilterName { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterName = 0x518; // CUtlSymbolLarge
}

namespace CFilterProximity { // CBaseFilter
    constexpr std::ptrdiff_t m_flRadius = 0x518; // float
}

namespace CFire { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hEffect = 0x710; // CHandle<CBaseFire>
    constexpr std::ptrdiff_t m_hOwner = 0x714; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nFireType = 0x718; // int32_t
    constexpr std::ptrdiff_t m_flFuel = 0x71C; // float
    constexpr std::ptrdiff_t m_flDamageTime = 0x720; // GameTime_t
    constexpr std::ptrdiff_t m_lastDamage = 0x724; // GameTime_t
    constexpr std::ptrdiff_t m_flFireSize = 0x728; // float
    constexpr std::ptrdiff_t m_flLastNavUpdateTime = 0x72C; // GameTime_t
    constexpr std::ptrdiff_t m_flHeatLevel = 0x730; // float
    constexpr std::ptrdiff_t m_flHeatAbsorb = 0x734; // float
    constexpr std::ptrdiff_t m_flDamageScale = 0x738; // float
    constexpr std::ptrdiff_t m_flMaxHeat = 0x73C; // float
    constexpr std::ptrdiff_t m_flLastHeatLevel = 0x740; // float
    constexpr std::ptrdiff_t m_flAttackTime = 0x744; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x748; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x749; // bool
    constexpr std::ptrdiff_t m_bDidActivate = 0x74A; // bool
    constexpr std::ptrdiff_t m_OnIgnited = 0x750; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExtinguished = 0x778; // CEntityIOOutput
}

namespace CFireCrackerBlast { // CInferno
}

namespace CFireSmoke { // CBaseFire
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x4D0; // int32_t
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x4D4; // int32_t
}

namespace CFiringModeFloat {
    constexpr std::ptrdiff_t m_flValues = 0x0; // float[2]
}

namespace CFiringModeInt {
    constexpr std::ptrdiff_t m_nValues = 0x0; // int32_t[2]
}

namespace CFish { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_pool = 0x8E8; // CHandle<CFishPool>
    constexpr std::ptrdiff_t m_id = 0x8EC; // uint32_t
    constexpr std::ptrdiff_t m_x = 0x8F0; // float
    constexpr std::ptrdiff_t m_y = 0x8F4; // float
    constexpr std::ptrdiff_t m_z = 0x8F8; // float
    constexpr std::ptrdiff_t m_angle = 0x8FC; // float
    constexpr std::ptrdiff_t m_angleChange = 0x900; // float
    constexpr std::ptrdiff_t m_forward = 0x904; // Vector
    constexpr std::ptrdiff_t m_perp = 0x910; // Vector
    constexpr std::ptrdiff_t m_poolOrigin = 0x91C; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0x928; // float
    constexpr std::ptrdiff_t m_speed = 0x92C; // float
    constexpr std::ptrdiff_t m_desiredSpeed = 0x930; // float
    constexpr std::ptrdiff_t m_calmSpeed = 0x934; // float
    constexpr std::ptrdiff_t m_panicSpeed = 0x938; // float
    constexpr std::ptrdiff_t m_avoidRange = 0x93C; // float
    constexpr std::ptrdiff_t m_turnTimer = 0x940; // CountdownTimer
    constexpr std::ptrdiff_t m_turnClockwise = 0x958; // bool
    constexpr std::ptrdiff_t m_goTimer = 0x960; // CountdownTimer
    constexpr std::ptrdiff_t m_moveTimer = 0x978; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0x990; // CountdownTimer
    constexpr std::ptrdiff_t m_disperseTimer = 0x9A8; // CountdownTimer
    constexpr std::ptrdiff_t m_proximityTimer = 0x9C0; // CountdownTimer
    constexpr std::ptrdiff_t m_visible = 0x9D8; // CUtlVector<CFish*>
}

namespace CFishPool { // CBaseEntity
    constexpr std::ptrdiff_t m_fishCount = 0x4D0; // int32_t
    constexpr std::ptrdiff_t m_maxRange = 0x4D4; // float
    constexpr std::ptrdiff_t m_swimDepth = 0x4D8; // float
    constexpr std::ptrdiff_t m_waterLevel = 0x4DC; // float
    constexpr std::ptrdiff_t m_isDormant = 0x4E0; // bool
    constexpr std::ptrdiff_t m_fishes = 0x4E8; // CUtlVector<CHandle<CFish>>
    constexpr std::ptrdiff_t m_visTimer = 0x500; // CountdownTimer
}

namespace CFists { // CCSWeaponBase
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0xE90; // bool
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0xE94; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_bRestorePrevWep = 0xE98; // bool
    constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0xE9C; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_hWeaponPrevious = 0xEA0; // CHandle<CBasePlayerWeapon>
    constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0xEA4; // bool
    constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0xEA5; // bool
}

namespace CFlashbang { // CBaseCSGrenade
}

namespace CFlashbangProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_flTimeToDetonate = 0xA98; // float
    constexpr std::ptrdiff_t m_numOpponentsHit = 0xA9C; // uint8_t
    constexpr std::ptrdiff_t m_numTeammatesHit = 0xA9D; // uint8_t
}

namespace CFogController { // CBaseEntity
    constexpr std::ptrdiff_t m_fog = 0x4C0; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x528; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x52C; // int32_t
}

namespace CFogTrigger { // CBaseTrigger
    constexpr std::ptrdiff_t m_fog = 0x8B8; // fogparams_t
}

namespace CFogVolume { // CServerOnlyModelEntity
    constexpr std::ptrdiff_t m_fogName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_postProcessName = 0x718; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_colorCorrectionName = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x730; // bool
    constexpr std::ptrdiff_t m_bInFogVolumesList = 0x731; // bool
}

namespace CFootstepControl { // CBaseTrigger
    constexpr std::ptrdiff_t m_source = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0x8C0; // CUtlSymbolLarge
}

namespace CFootstepTableHandle {
}

namespace CFuncBrush { // CBaseModelEntity
    constexpr std::ptrdiff_t m_iSolidity = 0x710; // BrushSolidities_e
    constexpr std::ptrdiff_t m_iDisabled = 0x714; // int32_t
    constexpr std::ptrdiff_t m_bSolidBsp = 0x718; // bool
    constexpr std::ptrdiff_t m_iszExcludedClass = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bInvertExclusion = 0x728; // bool
    constexpr std::ptrdiff_t m_bScriptedMovement = 0x729; // bool
}

namespace CFuncConveyor { // CBaseModelEntity
    constexpr std::ptrdiff_t m_szConveyorModels = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x718; // float
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x71C; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x728; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x734; // float
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0x738; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x73C; // int32_t
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x740; // float
    constexpr std::ptrdiff_t m_hConveyorModels = 0x748; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
}

namespace CFuncElectrifiedVolume { // CFuncBrush
    constexpr std::ptrdiff_t m_EffectName = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectZapName = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEffectSource = 0x748; // CUtlSymbolLarge
}

namespace CFuncIllusionary { // CBaseModelEntity
}

namespace CFuncInteractionLayerClip { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x710; // bool
    constexpr std::ptrdiff_t m_iszInteractsAs = 0x718; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszInteractsWith = 0x720; // CUtlSymbolLarge
}

namespace CFuncLadder { // CBaseModelEntity
    constexpr std::ptrdiff_t m_vecLadderDir = 0x710; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0x720; // CUtlVector<CHandle<CInfoLadderDismount>>
    constexpr std::ptrdiff_t m_vecLocalTop = 0x738; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x744; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x750; // Vector
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x75C; // float
    constexpr std::ptrdiff_t m_bDisabled = 0x760; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0x761; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0x762; // bool
    constexpr std::ptrdiff_t m_surfacePropName = 0x768; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x770; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x798; // CEntityIOOutput
}

namespace CFuncLadderAlias_func_useableladder { // CFuncLadder
}

namespace CFuncMonitor { // CFuncBrush
    constexpr std::ptrdiff_t m_targetCamera = 0x730; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0x738; // int32_t
    constexpr std::ptrdiff_t m_bRenderShadows = 0x73C; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x73D; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0x740; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0x748; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bEnabled = 0x74C; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x74D; // bool
    constexpr std::ptrdiff_t m_bStartEnabled = 0x74E; // bool
}

namespace CFuncMoveLinear { // CBaseToggle
    constexpr std::ptrdiff_t m_authoredPosition = 0x790; // MoveLinearAuthoredPos_t
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x794; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7A0; // Vector
    constexpr std::ptrdiff_t m_soundStart = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundStop = 0x7B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_currentSound = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7C8; // float
    constexpr std::ptrdiff_t m_flStartPosition = 0x7CC; // float
    constexpr std::ptrdiff_t m_flMoveDistance = 0x7D0; // float
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x7E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x808; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x830; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x831; // bool
}

namespace CFuncMoveLinearAlias_momentary_door { // CFuncMoveLinear
}

namespace CFuncNavBlocker { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x710; // bool
    constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x714; // int32_t
}

namespace CFuncNavObstruction { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x718; // bool
}

namespace CFuncPlat { // CBasePlatTrain
    constexpr std::ptrdiff_t m_sNoise = 0x7B8; // CUtlSymbolLarge
}

namespace CFuncPlatRot { // CFuncPlat
    constexpr std::ptrdiff_t m_end = 0x7C0; // QAngle
    constexpr std::ptrdiff_t m_start = 0x7CC; // QAngle
}

namespace CFuncPropRespawnZone { // CBaseEntity
}

namespace CFuncRotating { // CBaseModelEntity
    constexpr std::ptrdiff_t m_OnStopped = 0x710; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStarted = 0x738; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedStart = 0x760; // CEntityIOOutput
    constexpr std::ptrdiff_t m_localRotationVector = 0x788; // RotationVector
    constexpr std::ptrdiff_t m_flFanFriction = 0x794; // float
    constexpr std::ptrdiff_t m_flAttenuation = 0x798; // float
    constexpr std::ptrdiff_t m_flVolume = 0x79C; // float
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x7A0; // float
    constexpr std::ptrdiff_t m_flMaxSpeed = 0x7A4; // float
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7A8; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x7AC; // float
    constexpr std::ptrdiff_t m_NoiseRunning = 0x7B0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bReversed = 0x7B8; // bool
    constexpr std::ptrdiff_t m_bAccelDecel = 0x7B9; // bool
    constexpr std::ptrdiff_t m_prevLocalAngles = 0x7C4; // QAngle
    constexpr std::ptrdiff_t m_angStart = 0x7D0; // QAngle
    constexpr std::ptrdiff_t m_bStopAtStartPos = 0x7DC; // bool
    constexpr std::ptrdiff_t m_vecClientOrigin = 0x7E0; // Vector
    constexpr std::ptrdiff_t m_vecClientAngles = 0x7EC; // QAngle
}

namespace CFuncShatterglass { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hGlassMaterialDamaged = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hGlassMaterialUndamaged = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFace = 0x720; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeCaps = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFins = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_matPanelTransform = 0x738; // matrix3x4_t
    constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x768; // matrix3x4_t
    constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x798; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_PanelSize = 0x7B0; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelNormalWs = 0x7B8; // Vector
    constexpr std::ptrdiff_t m_nNumShardsEverCreated = 0x7C4; // int32_t
    constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7C8; // GameTime_t
    constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7CC; // GameTime_t
    constexpr std::ptrdiff_t m_flInitAtTime = 0x7D0; // GameTime_t
    constexpr std::ptrdiff_t m_flGlassThickness = 0x7D4; // float
    constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7D8; // float
    constexpr std::ptrdiff_t m_bBreakSilent = 0x7DC; // bool
    constexpr std::ptrdiff_t m_bBreakShardless = 0x7DD; // bool
    constexpr std::ptrdiff_t m_bBroken = 0x7DE; // bool
    constexpr std::ptrdiff_t m_bHasRateLimitedShards = 0x7DF; // bool
    constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7E0; // bool
    constexpr std::ptrdiff_t m_bGlassInFrame = 0x7E1; // bool
    constexpr std::ptrdiff_t m_bStartBroken = 0x7E2; // bool
    constexpr std::ptrdiff_t m_iInitialDamageType = 0x7E3; // uint8_t
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x7E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x7F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x800; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x808; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x820; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_OnBroken = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iSurfaceType = 0x861; // uint8_t
}

namespace CFuncTankTrain { // CFuncTrackTrain
    constexpr std::ptrdiff_t m_OnDeath = 0x860; // CEntityIOOutput
}

namespace CFuncTimescale { // CBaseEntity
    constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4C0; // float
    constexpr std::ptrdiff_t m_flAcceleration = 0x4C4; // float
    constexpr std::ptrdiff_t m_flMinBlendRate = 0x4C8; // float
    constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4CC; // float
    constexpr std::ptrdiff_t m_isStarted = 0x4D0; // bool
}

namespace CFuncTrackAuto { // CFuncTrackChange
}

namespace CFuncTrackChange { // CFuncPlatRot
    constexpr std::ptrdiff_t m_trackTop = 0x7D8; // CPathTrack*
    constexpr std::ptrdiff_t m_trackBottom = 0x7E0; // CPathTrack*
    constexpr std::ptrdiff_t m_train = 0x7E8; // CFuncTrackTrain*
    constexpr std::ptrdiff_t m_trackTopName = 0x7F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trackBottomName = 0x7F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trainName = 0x800; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_code = 0x808; // TRAIN_CODE
    constexpr std::ptrdiff_t m_targetState = 0x80C; // int32_t
    constexpr std::ptrdiff_t m_use = 0x810; // int32_t
}

namespace CFuncTrackTrain { // CBaseModelEntity
    constexpr std::ptrdiff_t m_ppath = 0x710; // CHandle<CPathTrack>
    constexpr std::ptrdiff_t m_length = 0x714; // float
    constexpr std::ptrdiff_t m_vPosPrev = 0x718; // Vector
    constexpr std::ptrdiff_t m_angPrev = 0x724; // QAngle
    constexpr std::ptrdiff_t m_controlMins = 0x730; // Vector
    constexpr std::ptrdiff_t m_controlMaxs = 0x73C; // Vector
    constexpr std::ptrdiff_t m_lastBlockPos = 0x748; // Vector
    constexpr std::ptrdiff_t m_lastBlockTick = 0x754; // int32_t
    constexpr std::ptrdiff_t m_flVolume = 0x758; // float
    constexpr std::ptrdiff_t m_flBank = 0x75C; // float
    constexpr std::ptrdiff_t m_oldSpeed = 0x760; // float
    constexpr std::ptrdiff_t m_flBlockDamage = 0x764; // float
    constexpr std::ptrdiff_t m_height = 0x768; // float
    constexpr std::ptrdiff_t m_maxSpeed = 0x76C; // float
    constexpr std::ptrdiff_t m_dir = 0x770; // float
    constexpr std::ptrdiff_t m_iszSoundMove = 0x778; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovePing = 0x780; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStart = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStop = 0x790; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strPathTarget = 0x798; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x7A0; // float
    constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x7A4; // float
    constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x7A8; // GameTime_t
    constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x7AC; // float
    constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x7B0; // float
    constexpr std::ptrdiff_t m_eOrientationType = 0x7B4; // TrainOrientationType_t
    constexpr std::ptrdiff_t m_eVelocityType = 0x7B8; // TrainVelocityType_t
    constexpr std::ptrdiff_t m_OnStart = 0x7C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNext = 0x7F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x818; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x840; // bool
    constexpr std::ptrdiff_t m_flDesiredSpeed = 0x844; // float
    constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x848; // GameTime_t
    constexpr std::ptrdiff_t m_flAccelSpeed = 0x84C; // float
    constexpr std::ptrdiff_t m_flDecelSpeed = 0x850; // float
    constexpr std::ptrdiff_t m_bAccelToSpeed = 0x854; // bool
    constexpr std::ptrdiff_t m_flTimeScale = 0x858; // float
    constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x85C; // GameTime_t
}

namespace CFuncTrain { // CBasePlatTrain
    constexpr std::ptrdiff_t m_hCurrentTarget = 0x7B8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_activated = 0x7BC; // bool
    constexpr std::ptrdiff_t m_hEnemy = 0x7C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7C4; // float
    constexpr std::ptrdiff_t m_flNextBlockTime = 0x7C8; // GameTime_t
    constexpr std::ptrdiff_t m_iszLastTarget = 0x7D0; // CUtlSymbolLarge
}

namespace CFuncTrainControls { // CBaseModelEntity
}

namespace CFuncVPhysicsClip { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x710; // bool
}

namespace CFuncVehicleClip { // CBaseModelEntity
}

namespace CFuncWall { // CBaseModelEntity
    constexpr std::ptrdiff_t m_nState = 0x710; // int32_t
}

namespace CFuncWallToggle { // CFuncWall
}

namespace CFuncWater { // CBaseModelEntity
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x710; // CBuoyancyHelper
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
    constexpr std::ptrdiff_t m_bAllowNewGibs = 0x4E0; // bool
    constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x4E4; // int32_t
    constexpr std::ptrdiff_t m_iMaxPieces = 0x4E8; // int32_t
    constexpr std::ptrdiff_t m_iLastFrame = 0x4EC; // int32_t
}

namespace CGameMoney { // CRulePointEntity
    constexpr std::ptrdiff_t m_OnMoneySpent = 0x720; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMoneySpentFail = 0x748; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nMoney = 0x770; // int32_t
    constexpr std::ptrdiff_t m_strAwardText = 0x778; // CUtlString
}

namespace CGamePlayerEquip { // CRulePointEntity
}

namespace CGamePlayerZone { // CRuleBrushEntity
    constexpr std::ptrdiff_t m_OnPlayerInZone = 0x718; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x740; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayersInCount = 0x768; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_PlayersOutCount = 0x790; // CEntityOutputTemplate<int32_t>
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
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x130; // CUtlStringToken
    constexpr std::ptrdiff_t m_flZOffset = 0x134; // float
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x138; // Vector
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
    constexpr std::ptrdiff_t m_iszMessage = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_textParms = 0x728; // hudtextparms_t
}

namespace CGenericConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_nLinearMotionX = 0x520; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionY = 0x524; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionZ = 0x528; // JointMotion_t
    constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x52C; // float
    constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x530; // float
    constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x534; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x538; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x53C; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x540; // float
    constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x544; // float
    constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x548; // float
    constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x54C; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x550; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x554; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x558; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x55C; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x560; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x564; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x568; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x56C; // float
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x570; // float
    constexpr std::ptrdiff_t m_flNotifyForceX = 0x574; // float
    constexpr std::ptrdiff_t m_flNotifyForceY = 0x578; // float
    constexpr std::ptrdiff_t m_flNotifyForceZ = 0x57C; // float
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x580; // float
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x584; // float
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x588; // float
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x58C; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x590; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x594; // GameTime_t
    constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x598; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x599; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x59A; // bool
    constexpr std::ptrdiff_t m_nAngularMotionX = 0x59C; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionY = 0x5A0; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionZ = 0x5A4; // JointMotion_t
    constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x5A8; // float
    constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x5AC; // float
    constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5B0; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5B4; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5B8; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5BC; // float
    constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x5C0; // float
    constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x5C4; // float
    constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x5C8; // float
    constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x5D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x5F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x620; // CEntityIOOutput
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
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x4C8; // float
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x4CC; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4D0; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x4D4; // float
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x4D8; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x4DC; // float
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4E0; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4E4; // float
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4E8; // float
    constexpr std::ptrdiff_t m_fogColor = 0x4EC; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x4F0; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x4F4; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4F8; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4F9; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4FA; // bool
}

namespace CGunTarget { // CBaseToggle
    constexpr std::ptrdiff_t m_on = 0x790; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x794; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_OnDeath = 0x798; // CEntityIOOutput
}

namespace CHEGrenade { // CBaseCSGrenade
}

namespace CHEGrenadeProjectile { // CBaseCSGrenadeProjectile
}

namespace CHandleDummy { // CBaseEntity
}

namespace CHandleTest { // CBaseEntity
    constexpr std::ptrdiff_t m_Handle = 0x4C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bSendHandle = 0x4C4; // bool
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
    constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xA28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xA50; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xA78; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRescued = 0xAA0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_entitySpottedState = 0xAC8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xAE0; // int32_t
    constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xAE4; // uint32_t
    constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xAE8; // uint32_t
    constexpr std::ptrdiff_t m_bRemove = 0xAEC; // bool
    constexpr std::ptrdiff_t m_vel = 0xAF0; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0xAFC; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xAFD; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0xB00; // int32_t
    constexpr std::ptrdiff_t m_leader = 0xB04; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_lastLeader = 0xB08; // CHandle<CCSPlayerPawnBase>
    constexpr std::ptrdiff_t m_reuseTimer = 0xB10; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xB28; // bool
    constexpr std::ptrdiff_t m_accel = 0xB2C; // Vector
    constexpr std::ptrdiff_t m_isRunning = 0xB38; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xB39; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0xB40; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xB58; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x2B68; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2B80; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2C10; // CountdownTimer
    constexpr std::ptrdiff_t m_wiggleTimer = 0x2C30; // CountdownTimer
    constexpr std::ptrdiff_t m_isAdjusted = 0x2C4C; // bool
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2C4D; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x2C50; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x2C54; // GameTime_t
    constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2C58; // Vector
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2C64; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x2C70; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2C74; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x2C78; // GameTime_t
    constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2C7C; // int32_t
    constexpr std::ptrdiff_t m_nPickupEventCount = 0x2C80; // int32_t
    constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2C84; // Vector
    constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2CA4; // Vector
}

namespace CHostageAlias_info_hostage_spawn { // CHostage
}

namespace CHostageCarriableProp { // CBaseAnimGraph
}

namespace CHostageExpresserShim { // CBaseCombatCharacter
    constexpr std::ptrdiff_t m_pExpresser = 0xA10; // CAI_Expresser*
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
    constexpr std::ptrdiff_t m_firePositions = 0x720; // Vector[64]
    constexpr std::ptrdiff_t m_fireParentPositions = 0xA20; // Vector[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0xD20; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0xD60; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1060; // int32_t
    constexpr std::ptrdiff_t m_nInfernoType = 0x1064; // int32_t
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1068; // int32_t
    constexpr std::ptrdiff_t m_nFireLifetime = 0x106C; // float
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1070; // bool
    constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x1074; // int32_t
    constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1078; // bool
    constexpr std::ptrdiff_t m_extent = 0x1280; // Extent
    constexpr std::ptrdiff_t m_damageTimer = 0x1298; // CountdownTimer
    constexpr std::ptrdiff_t m_damageRampTimer = 0x12B0; // CountdownTimer
    constexpr std::ptrdiff_t m_splashVelocity = 0x12C8; // Vector
    constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x12D4; // Vector
    constexpr std::ptrdiff_t m_startPos = 0x12E0; // Vector
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x12EC; // Vector
    constexpr std::ptrdiff_t m_activeTimer = 0x12F8; // IntervalTimer
    constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1308; // int32_t
    constexpr std::ptrdiff_t m_nMaxFlames = 0x130C; // int32_t
    constexpr std::ptrdiff_t m_nSpreadCount = 0x1310; // int32_t
    constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1318; // CountdownTimer
    constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1330; // CountdownTimer
    constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1348; // uint16_t
}

namespace CInfoData { // CServerOnlyEntity
}

namespace CInfoDeathmatchSpawn { // SpawnPoint
}

namespace CInfoDynamicShadowHint { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_flRange = 0x4C4; // float
    constexpr std::ptrdiff_t m_nImportance = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_nLightChoice = 0x4CC; // int32_t
    constexpr std::ptrdiff_t m_hLight = 0x4D0; // CHandle<CBaseEntity>
}

namespace CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    constexpr std::ptrdiff_t m_vBoxMins = 0x4D8; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4E4; // Vector
}

namespace CInfoEnemyTerroristSpawn { // SpawnPointCoopEnemy
}

namespace CInfoGameEventProxy { // CPointEntity
    constexpr std::ptrdiff_t m_iszEventName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRange = 0x4C8; // float
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
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_nResolutionY = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x4E0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4F8; // int32_t
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x500; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_szTargetsName = 0x518; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x520; // CUtlVector<CHandle<CBaseModelEntity>>
}

namespace CInfoParticleTarget { // CPointEntity
}

namespace CInfoPlayerCounterterrorist { // SpawnPoint
}

namespace CInfoPlayerStart { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
}

namespace CInfoPlayerTerrorist { // SpawnPoint
}

namespace CInfoSpawnGroupLandmark { // CPointEntity
}

namespace CInfoSpawnGroupLoadUnload { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x538; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLandmarkName = 0x570; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x578; // CUtlString
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x580; // float
    constexpr std::ptrdiff_t m_bStreamingStarted = 0x584; // bool
    constexpr std::ptrdiff_t m_bUnloadingStarted = 0x585; // bool
}

namespace CInfoTarget { // CPointEntity
}

namespace CInfoTargetServerOnly { // CServerOnlyPointEntity
}

namespace CInfoTeleportDestination { // CPointEntity
}

namespace CInfoVisibilityBox { // CBaseEntity
    constexpr std::ptrdiff_t m_nMode = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_vBoxSize = 0x4C8; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x4D4; // bool
}

namespace CInfoWorldLayer { // CBaseEntity
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4F8; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4F9; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4FA; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4FC; // uint32_t
}

namespace CInstancedSceneEntity { // CSceneEntity
    constexpr std::ptrdiff_t m_hOwner = 0xA18; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bHadOwner = 0xA1C; // bool
    constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xA20; // float
    constexpr std::ptrdiff_t m_flPreDelay = 0xA24; // float
    constexpr std::ptrdiff_t m_bIsBackground = 0xA28; // bool
    constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0xA29; // bool
    constexpr std::ptrdiff_t m_hTarget = 0xA2C; // CHandle<CBaseEntity>
}

namespace CInstructorEventEntity { // CPointEntity
    constexpr std::ptrdiff_t m_iszName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetPlayer = 0x4D0; // CHandle<CBasePlayerPawn>
}

namespace CIronSightController {
    constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
    constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float
    constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float
    constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float
}

namespace CItem { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_OnPlayerTouch = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0x918; // bool
    constexpr std::ptrdiff_t m_OnCacheInteraction = 0x920; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x948; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGlovePulled = 0x970; // CEntityIOOutput
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0x998; // Vector
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0x9A4; // QAngle
    constexpr std::ptrdiff_t m_bPhysStartAsleep = 0x9B0; // bool
}

namespace CItemAssaultSuit { // CItem
}

namespace CItemDefuser { // CItem
    constexpr std::ptrdiff_t m_entitySpottedState = 0x9C0; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x9D8; // int32_t
}

namespace CItemDefuserAlias_item_defuser { // CItemDefuser
}

namespace CItemDogtags { // CItem
    constexpr std::ptrdiff_t m_OwningPlayer = 0x9C0; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_KillingPlayer = 0x9C4; // CHandle<CCSPlayerPawn>
}

namespace CItemGeneric { // CItem
    constexpr std::ptrdiff_t m_bHasTriggerRadius = 0x9C8; // bool
    constexpr std::ptrdiff_t m_bHasPickupRadius = 0x9C9; // bool
    constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0x9CC; // float
    constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0x9D0; // float
    constexpr std::ptrdiff_t m_flLastPickupCheck = 0x9D4; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0x9D8; // bool
    constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0x9D9; // bool
    constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0x9E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0x9E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0x9F0; // bool
    constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xA00; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xA08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xA10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xA18; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xA20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xA28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupFilterName = 0xA30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupFilter = 0xA38; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_OnPickup = 0xA40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimeout = 0xA68; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xA90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerTouch = 0xAB8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xAE0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xB08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPickupRadius = 0xB10; // float
    constexpr std::ptrdiff_t m_flTriggerRadius = 0xB14; // float
    constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xB18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xB20; // bool
    constexpr std::ptrdiff_t m_glowColor = 0xB21; // Color
    constexpr std::ptrdiff_t m_bUseable = 0xB25; // bool
    constexpr std::ptrdiff_t m_hTriggerHelper = 0xB28; // CHandle<CItemGenericTriggerHelper>
}

namespace CItemGenericTriggerHelper { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hParentItem = 0x710; // CHandle<CItemGeneric>
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
    constexpr std::ptrdiff_t m_worldGoalAxis = 0x4C8; // Vector
    constexpr std::ptrdiff_t m_localTestAxis = 0x4D4; // Vector
    constexpr std::ptrdiff_t m_nameAttach = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_attachedObject = 0x4F0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_angularLimit = 0x4F4; // float
    constexpr std::ptrdiff_t m_bActive = 0x4F8; // bool
    constexpr std::ptrdiff_t m_bDampAllRotation = 0x4F9; // bool
}

namespace CKnife { // CCSWeaponBase
    constexpr std::ptrdiff_t m_bFirstAttack = 0xE90; // bool
}

namespace CLightComponent { // CEntityComponent
    constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Color = 0x85; // Color
    constexpr std::ptrdiff_t m_SecondaryColor = 0x89; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x90; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x94; // float
    constexpr std::ptrdiff_t m_flBrightnessMult = 0x98; // float
    constexpr std::ptrdiff_t m_flRange = 0x9C; // float
    constexpr std::ptrdiff_t m_flFalloff = 0xA0; // float
    constexpr std::ptrdiff_t m_flAttenuation0 = 0xA4; // float
    constexpr std::ptrdiff_t m_flAttenuation1 = 0xA8; // float
    constexpr std::ptrdiff_t m_flAttenuation2 = 0xAC; // float
    constexpr std::ptrdiff_t m_flTheta = 0xB0; // float
    constexpr std::ptrdiff_t m_flPhi = 0xB4; // float
    constexpr std::ptrdiff_t m_hLightCookie = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nCascades = 0xC0; // int32_t
    constexpr std::ptrdiff_t m_nCastShadows = 0xC4; // int32_t
    constexpr std::ptrdiff_t m_nShadowWidth = 0xC8; // int32_t
    constexpr std::ptrdiff_t m_nShadowHeight = 0xCC; // int32_t
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xD0; // bool
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xD4; // int32_t
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xD8; // bool
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xDC; // float
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xE0; // float
    constexpr std::ptrdiff_t m_nStyle = 0xE4; // int32_t
    constexpr std::ptrdiff_t m_Pattern = 0xE8; // CUtlString
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xF0; // int32_t
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xF4; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xF8; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xFC; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x100; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x104; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x108; // float
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x10C; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x110; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x114; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x118; // int32_t
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x11C; // bool
    constexpr std::ptrdiff_t m_nShadowPriority = 0x120; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x124; // int32_t
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x128; // bool
    constexpr std::ptrdiff_t m_nDirectLight = 0x12C; // int32_t
    constexpr std::ptrdiff_t m_nIndirectLight = 0x130; // int32_t
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x134; // float
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x138; // float
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x13C; // float
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x140; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x144; // bool
    constexpr std::ptrdiff_t m_bFlicker = 0x145; // bool
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x146; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x148; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x154; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x160; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x16C; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x178; // Vector
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x184; // float
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x188; // int32_t
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x18C; // float
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x190; // float
    constexpr std::ptrdiff_t m_SkyColor = 0x194; // Color
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x198; // float
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x19C; // Color
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1A0; // bool
    constexpr std::ptrdiff_t m_bMixedShadows = 0x1A1; // bool
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1A4; // GameTime_t
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1A8; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1AC; // float
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1C0; // bool
}

namespace CLightDirectionalEntity { // CLightEntity
}

namespace CLightEntity { // CBaseModelEntity
    constexpr std::ptrdiff_t m_CLightComponent = 0x710; // CLightComponent*
}

namespace CLightEnvironmentEntity { // CLightDirectionalEntity
}

namespace CLightGlow { // CBaseModelEntity
    constexpr std::ptrdiff_t m_nHorizontalSize = 0x710; // uint32_t
    constexpr std::ptrdiff_t m_nVerticalSize = 0x714; // uint32_t
    constexpr std::ptrdiff_t m_nMinDist = 0x718; // uint32_t
    constexpr std::ptrdiff_t m_nMaxDist = 0x71C; // uint32_t
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0x720; // uint32_t
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x724; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x728; // float
}

namespace CLightOrthoEntity { // CLightEntity
}

namespace CLightSpotEntity { // CLightEntity
}

namespace CLogicAchievement { // CLogicalEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnFired = 0x4D0; // CEntityIOOutput
}

namespace CLogicActiveAutosave { // CLogicAutosave
    constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4D0; // int32_t
    constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4D4; // float
    constexpr std::ptrdiff_t m_flStartTime = 0x4D8; // GameTime_t
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4DC; // float
}

namespace CLogicAuto { // CBaseEntity
    constexpr std::ptrdiff_t m_OnMapSpawn = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNewGame = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLoadGame = 0x538; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMapTransition = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBackgroundMap = 0x588; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewMap = 0x5B0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewRound = 0x5D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVREnabled = 0x600; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x628; // CEntityIOOutput
    constexpr std::ptrdiff_t m_globalstate = 0x650; // CUtlSymbolLarge
}

namespace CLogicAutosave { // CLogicalEntity
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4C0; // bool
    constexpr std::ptrdiff_t m_minHitPoints = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4C8; // int32_t
}

namespace CLogicBranch { // CLogicalEntity
    constexpr std::ptrdiff_t m_bInValue = 0x4C0; // bool
    constexpr std::ptrdiff_t m_Listeners = 0x4C8; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_OnTrue = 0x4E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFalse = 0x508; // CEntityIOOutput
}

namespace CLogicBranchList { // CLogicalEntity
    constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4C0; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_LogicBranchList = 0x540; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_eLastState = 0x558; // CLogicBranchList::LogicBranchListenerLastState_t
    constexpr std::ptrdiff_t m_OnAllTrue = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAllFalse = 0x588; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMixed = 0x5B0; // CEntityIOOutput
}

namespace CLogicCase { // CLogicalEntity
    constexpr std::ptrdiff_t m_nCase = 0x4C0; // CUtlSymbolLarge[32]
    constexpr std::ptrdiff_t m_nShuffleCases = 0x5C0; // int32_t
    constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5C4; // int32_t
    constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5C8; // uint8_t[32]
    constexpr std::ptrdiff_t m_OnCase = 0x5E8; // CEntityIOOutput[32]
    constexpr std::ptrdiff_t m_OnDefault = 0xAE8; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
}

namespace CLogicCollisionPair { // CLogicalEntity
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_disabled = 0x4D0; // bool
    constexpr std::ptrdiff_t m_succeeded = 0x4D1; // bool
}

namespace CLogicCompare { // CLogicalEntity
    constexpr std::ptrdiff_t m_flInValue = 0x4C0; // float
    constexpr std::ptrdiff_t m_flCompareValue = 0x4C4; // float
    constexpr std::ptrdiff_t m_OnLessThan = 0x4C8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnEqualTo = 0x4F0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnNotEqualTo = 0x518; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x540; // CEntityOutputTemplate<float>
}

namespace CLogicDistanceAutosave { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszTargetEntity = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4C8; // float
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4CC; // bool
    constexpr std::ptrdiff_t m_bCheckCough = 0x4CD; // bool
    constexpr std::ptrdiff_t m_bThinkDangerous = 0x4CE; // bool
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4D0; // float
}

namespace CLogicDistanceCheck { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszEntityA = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityB = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flZone1Distance = 0x4D0; // float
    constexpr std::ptrdiff_t m_flZone2Distance = 0x4D4; // float
    constexpr std::ptrdiff_t m_InZone1 = 0x4D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone2 = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone3 = 0x528; // CEntityIOOutput
}

namespace CLogicEventListener { // CLogicalEntity
    constexpr std::ptrdiff_t m_strEventName = 0x4D0; // CUtlString
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4D8; // bool
    constexpr std::ptrdiff_t m_nTeam = 0x4DC; // int32_t
    constexpr std::ptrdiff_t m_OnEventFired = 0x4E0; // CEntityIOOutput
}

namespace CLogicGameEvent { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszEventName = 0x4C0; // CUtlSymbolLarge
}

namespace CLogicGameEventListener { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnEventFired = 0x4D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszGameEventName = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszGameEventItem = 0x500; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bEnabled = 0x508; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x509; // bool
}

namespace CLogicLineToEntity { // CLogicalEntity
    constexpr std::ptrdiff_t m_Line = 0x4C0; // CEntityOutputTemplate<Vector>
    constexpr std::ptrdiff_t m_SourceName = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_StartEntity = 0x4F0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_EndEntity = 0x4F4; // CHandle<CBaseEntity>
}

namespace CLogicMeasureMovement { // CLogicalEntity
    constexpr std::ptrdiff_t m_strMeasureTarget = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMeasureReference = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strTargetReference = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4D8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hMeasureReference = 0x4DC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget = 0x4E0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTargetReference = 0x4E4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flScale = 0x4E8; // float
    constexpr std::ptrdiff_t m_nMeasureType = 0x4EC; // int32_t
}

namespace CLogicNPCCounter { // CBaseEntity
    constexpr std::ptrdiff_t m_OnMinCountAll = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCountAll = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactorAll = 0x510; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x538; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinCount_1 = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x588; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_1 = 0x5B0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x5D8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinCount_2 = 0x600; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x628; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_2 = 0x650; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x678; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinCount_3 = 0x6A0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x6C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_3 = 0x6F0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x718; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_hSource = 0x740; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x748; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceMax = 0x750; // float
    constexpr std::ptrdiff_t m_bDisabled = 0x754; // bool
    constexpr std::ptrdiff_t m_nMinCountAll = 0x758; // int32_t
    constexpr std::ptrdiff_t m_nMaxCountAll = 0x75C; // int32_t
    constexpr std::ptrdiff_t m_nMinFactorAll = 0x760; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactorAll = 0x764; // int32_t
    constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x770; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_1 = 0x778; // int32_t
    constexpr std::ptrdiff_t m_bInvertState_1 = 0x77C; // bool
    constexpr std::ptrdiff_t m_nMinCount_1 = 0x780; // int32_t
    constexpr std::ptrdiff_t m_nMaxCount_1 = 0x784; // int32_t
    constexpr std::ptrdiff_t m_nMinFactor_1 = 0x788; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x78C; // int32_t
    constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x794; // float
    constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x798; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_2 = 0x7A0; // int32_t
    constexpr std::ptrdiff_t m_bInvertState_2 = 0x7A4; // bool
    constexpr std::ptrdiff_t m_nMinCount_2 = 0x7A8; // int32_t
    constexpr std::ptrdiff_t m_nMaxCount_2 = 0x7AC; // int32_t
    constexpr std::ptrdiff_t m_nMinFactor_2 = 0x7B0; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x7B4; // int32_t
    constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x7BC; // float
    constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x7C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_3 = 0x7C8; // int32_t
    constexpr std::ptrdiff_t m_bInvertState_3 = 0x7CC; // bool
    constexpr std::ptrdiff_t m_nMinCount_3 = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_nMaxCount_3 = 0x7D4; // int32_t
    constexpr std::ptrdiff_t m_nMinFactor_3 = 0x7D8; // int32_t
    constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x7DC; // int32_t
    constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x7E4; // float
}

namespace CLogicNPCCounterAABB { // CLogicNPCCounter
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x800; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x80C; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x818; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x824; // Vector
}

namespace CLogicNPCCounterOBB { // CLogicNPCCounterAABB
}

namespace CLogicNavigation { // CLogicalEntity
    constexpr std::ptrdiff_t m_isOn = 0x4C8; // bool
    constexpr std::ptrdiff_t m_navProperty = 0x4CC; // navproperties_t
}

namespace CLogicPlayerProxy { // CLogicalEntity
    constexpr std::ptrdiff_t m_hPlayer = 0x4C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4C8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x4F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerDied = 0x518; // CEntityIOOutput
    constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x540; // CEntityOutputTemplate<int32_t>
}

namespace CLogicProximity { // CPointEntity
}

namespace CLogicRelay { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnTrigger = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawn = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bDisabled = 0x510; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x511; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x512; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x513; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x514; // bool
}

namespace CLogicScript { // CPointEntity
}

namespace CLogicalEntity { // CServerOnlyEntity
}

namespace CMapInfo { // CPointEntity
    constexpr std::ptrdiff_t m_iBuyingStatus = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_flBombRadius = 0x4C4; // float
    constexpr std::ptrdiff_t m_iPetPopulation = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4CC; // bool
    constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4CD; // bool
    constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4D0; // float
    constexpr std::ptrdiff_t m_iHostageCount = 0x4D4; // int32_t
    constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4D8; // bool
}

namespace CMapVetoPickController { // CBaseEntity
    constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4C0; // bool
    constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4C1; // bool
    constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4E0; // double
    constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4E8; // bool
    constexpr std::ptrdiff_t m_nDraftType = 0x4EC; // int32_t
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4F0; // int32_t
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4F4; // int32_t[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5F4; // int32_t[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x610; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x710; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0x810; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0x910; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0xA10; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xB10; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xC10; // int32_t[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xD10; // int32_t[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xE10; // int32_t
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE14; // int32_t
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE18; // int32_t
    constexpr std::ptrdiff_t m_OnMapVetoed = 0xE20; // CEntityOutputTemplate<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_OnMapPicked = 0xE48; // CEntityOutputTemplate<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_OnSidesPicked = 0xE70; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xE98; // CEntityOutputTemplate<int32_t>
    constexpr std::ptrdiff_t m_OnLevelTransition = 0xEC0; // CEntityOutputTemplate<int32_t>
}

namespace CMarkupVolume { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x710; // bool
}

namespace CMarkupVolumeTagged { // CMarkupVolume
    constexpr std::ptrdiff_t m_bIsGroup = 0x748; // bool
    constexpr std::ptrdiff_t m_bGroupByPrefab = 0x749; // bool
    constexpr std::ptrdiff_t m_bGroupByVolume = 0x74A; // bool
    constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x74B; // bool
    constexpr std::ptrdiff_t m_bIsInGroup = 0x74C; // bool
}

namespace CMarkupVolumeTagged_Nav { // CMarkupVolumeTagged
}

namespace CMarkupVolumeTagged_NavGame { // CMarkupVolumeWithRef
    constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x768; // bool
}

namespace CMarkupVolumeWithRef { // CMarkupVolumeTagged
    constexpr std::ptrdiff_t m_bUseRef = 0x750; // bool
    constexpr std::ptrdiff_t m_vRefPos = 0x754; // Vector
    constexpr std::ptrdiff_t m_flRefDot = 0x760; // float
}

namespace CMathColorBlend { // CLogicalEntity
    constexpr std::ptrdiff_t m_flInMin = 0x4C0; // float
    constexpr std::ptrdiff_t m_flInMax = 0x4C4; // float
    constexpr std::ptrdiff_t m_OutColor1 = 0x4C8; // Color
    constexpr std::ptrdiff_t m_OutColor2 = 0x4CC; // Color
    constexpr std::ptrdiff_t m_OutValue = 0x4D0; // CEntityOutputTemplate<Color>
}

namespace CMathCounter { // CLogicalEntity
    constexpr std::ptrdiff_t m_flMin = 0x4C0; // float
    constexpr std::ptrdiff_t m_flMax = 0x4C4; // float
    constexpr std::ptrdiff_t m_bHitMin = 0x4C8; // bool
    constexpr std::ptrdiff_t m_bHitMax = 0x4C9; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x4CA; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x4D0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnGetValue = 0x4F8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnHitMin = 0x520; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHitMax = 0x548; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMin = 0x570; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMax = 0x598; // CEntityIOOutput
}

namespace CMathRemap { // CLogicalEntity
    constexpr std::ptrdiff_t m_flInMin = 0x4C0; // float
    constexpr std::ptrdiff_t m_flInMax = 0x4C4; // float
    constexpr std::ptrdiff_t m_flOut1 = 0x4C8; // float
    constexpr std::ptrdiff_t m_flOut2 = 0x4CC; // float
    constexpr std::ptrdiff_t m_flOldInValue = 0x4D0; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x4D4; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x4D8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x528; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMin = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMax = 0x578; // CEntityIOOutput
}

namespace CMelee { // CCSWeaponBase
}

namespace CMessage { // CPointEntity
    constexpr std::ptrdiff_t m_iszMessage = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_MessageVolume = 0x4C8; // float
    constexpr std::ptrdiff_t m_MessageAttenuation = 0x4CC; // int32_t
    constexpr std::ptrdiff_t m_Radius = 0x4D0; // float
    constexpr std::ptrdiff_t m_sNoise = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnShowMessage = 0x4E0; // CEntityIOOutput
}

namespace CMessageEntity { // CPointEntity
    constexpr std::ptrdiff_t m_radius = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_messageText = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_drawText = 0x4D0; // bool
    constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4D1; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x4D2; // bool
}

namespace CModelPointEntity { // CBaseModelEntity
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64_t
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x202; // int8_t
    constexpr std::ptrdiff_t m_nForceLOD = 0x203; // int8_t
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x204; // int8_t
}

namespace CMolotovGrenade { // CBaseCSGrenade
}

namespace CMolotovProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0xA98; // bool
    constexpr std::ptrdiff_t m_bDetonated = 0xAA4; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0xAA8; // IntervalTimer
    constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xB88; // bool
}

namespace CMomentaryRotButton { // CRotButton
    constexpr std::ptrdiff_t m_Position = 0x8D8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnUnpressed = 0x900; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x928; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x950; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedPosition = 0x978; // CEntityIOOutput
    constexpr std::ptrdiff_t m_lastUsed = 0x9A0; // int32_t
    constexpr std::ptrdiff_t m_start = 0x9A4; // QAngle
    constexpr std::ptrdiff_t m_end = 0x9B0; // QAngle
    constexpr std::ptrdiff_t m_IdealYaw = 0x9BC; // float
    constexpr std::ptrdiff_t m_sNoise = 0x9C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUpdateTarget = 0x9C8; // bool
    constexpr std::ptrdiff_t m_direction = 0x9CC; // int32_t
    constexpr std::ptrdiff_t m_returnSpeed = 0x9D0; // float
    constexpr std::ptrdiff_t m_flStartPosition = 0x9D4; // float
}

namespace CMotorController {
    constexpr std::ptrdiff_t m_speed = 0x8; // float
    constexpr std::ptrdiff_t m_maxTorque = 0xC; // float
    constexpr std::ptrdiff_t m_axis = 0x10; // Vector
    constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float
}

namespace CMultiLightProxy { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4D0; // float
    constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4D4; // float
    constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4D8; // bool
    constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4DC; // float
    constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x4E0; // float
    constexpr std::ptrdiff_t m_vecLights = 0x4E8; // CUtlVector<CHandle<CLightEntity>>
}

namespace CMultiSource { // CLogicalEntity
    constexpr std::ptrdiff_t m_rgEntities = 0x4C0; // CHandle<CBaseEntity>[32]
    constexpr std::ptrdiff_t m_rgTriggered = 0x540; // int32_t[32]
    constexpr std::ptrdiff_t m_OnTrigger = 0x5C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iTotal = 0x5E8; // int32_t
    constexpr std::ptrdiff_t m_globalstate = 0x5F0; // CUtlSymbolLarge
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
    constexpr std::ptrdiff_t m_flWidth = 0x4C0; // float
    constexpr std::ptrdiff_t m_vLocatorOffset = 0x4C4; // Vector
    constexpr std::ptrdiff_t m_qLocatorAnglesOffset = 0x4D0; // QAngle
    constexpr std::ptrdiff_t m_strMovementForward = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMovementReverse = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNavLinkIdForward = 0x4F0; // int32_t
    constexpr std::ptrdiff_t m_nNavLinkIdReverse = 0x4F4; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x4F8; // bool
    constexpr std::ptrdiff_t m_strFilterName = 0x500; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x508; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_OnNavLinkStart = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNavLinkFinish = 0x538; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsTerminus = 0x560; // bool
}

namespace CNavLinkMovementVData {
    constexpr std::ptrdiff_t m_bIsInterpolated = 0x0; // bool
    constexpr std::ptrdiff_t m_unRecommendedDistance = 0x4; // uint32_t
    constexpr std::ptrdiff_t m_vecAnimgraphVars = 0x8; // CUtlVector<CNavLinkAnimgraphVar>
}

namespace CNavSpaceInfo { // CPointEntity
    constexpr std::ptrdiff_t m_bCreateFlightSpace = 0x4C0; // bool
}

namespace CNavVolume {
}

namespace CNavVolumeAll { // CNavVolumeVector
}

namespace CNavVolumeBreadthFirstSearch { // CNavVolumeCalculatedVector
    constexpr std::ptrdiff_t m_vStartPos = 0xA0; // Vector
    constexpr std::ptrdiff_t m_flSearchDist = 0xAC; // float
}

namespace CNavVolumeCalculatedVector { // CNavVolume
}

namespace CNavVolumeMarkupVolume { // CNavVolume
}

namespace CNavVolumeSphere { // CNavVolume
    constexpr std::ptrdiff_t m_vCenter = 0x70; // Vector
    constexpr std::ptrdiff_t m_flRadius = 0x7C; // float
}

namespace CNavVolumeSphericalShell { // CNavVolumeSphere
    constexpr std::ptrdiff_t m_flRadiusInner = 0x80; // float
}

namespace CNavVolumeVector { // CNavVolume
    constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x78; // bool
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
    constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x16C; // uint8_t
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
    constexpr std::ptrdiff_t m_flInnerAngle = 0x938; // float
    constexpr std::ptrdiff_t m_flOuterAngle = 0x93C; // float
    constexpr std::ptrdiff_t m_bShowLight = 0x940; // bool
}

namespace COrnamentProp { // CDynamicProp
    constexpr std::ptrdiff_t m_initialOwner = 0xB60; // CUtlSymbolLarge
}

namespace CParticleSystem { // CBaseModelEntity
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0x710; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0x910; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0x911; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x914; // float
    constexpr std::ptrdiff_t m_nStopType = 0x918; // int32_t
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x91C; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0x920; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flStartTime = 0x928; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0x92C; // float
    constexpr std::ptrdiff_t m_vServerControlPoints = 0x930; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x960; // uint8_t[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0x964; // CHandle<CBaseEntity>[64]
    constexpr std::ptrdiff_t m_bNoSave = 0xA64; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0xA65; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0xA66; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0xA67; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0xA68; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0xA70; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0xC70; // int32_t
    constexpr std::ptrdiff_t m_vecDataCPValue = 0xC74; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0xC80; // int32_t
    constexpr std::ptrdiff_t m_clrTint = 0xC84; // Color
}

namespace CPathCorner { // CPointEntity
    constexpr std::ptrdiff_t m_flWait = 0x4C0; // float
    constexpr std::ptrdiff_t m_flRadius = 0x4C4; // float
    constexpr std::ptrdiff_t m_OnPass = 0x4C8; // CEntityIOOutput
}

namespace CPathCornerCrash { // CPathCorner
}

namespace CPathKeyFrame { // CLogicalEntity
    constexpr std::ptrdiff_t m_Origin = 0x4C0; // Vector
    constexpr std::ptrdiff_t m_Angles = 0x4CC; // QAngle
    constexpr std::ptrdiff_t m_qAngle = 0x4E0; // Quaternion
    constexpr std::ptrdiff_t m_iNextKey = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flNextTime = 0x4F8; // float
    constexpr std::ptrdiff_t m_pNextKey = 0x500; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPrevKey = 0x508; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flSpeed = 0x510; // float
}

namespace CPathParticleRope { // CBaseEntity
    constexpr std::ptrdiff_t m_bStartActive = 0x4C0; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4C4; // float
    constexpr std::ptrdiff_t m_iszEffectName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x4D0; // CUtlVector<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x4E8; // float
    constexpr std::ptrdiff_t m_flSlack = 0x4EC; // float
    constexpr std::ptrdiff_t m_flRadius = 0x4F0; // float
    constexpr std::ptrdiff_t m_ColorTint = 0x4F4; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x4F8; // int32_t
    constexpr std::ptrdiff_t m_iEffectIndex = 0x500; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x508; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x520; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x538; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x550; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x568; // CNetworkUtlVectorBase<bool>
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x580; // CNetworkUtlVectorBase<float>
}

namespace CPathParticleRopeAlias_path_particle_rope_clientside { // CPathParticleRope
}

namespace CPathTrack { // CPointEntity
    constexpr std::ptrdiff_t m_pnext = 0x4C0; // CPathTrack*
    constexpr std::ptrdiff_t m_pprevious = 0x4C8; // CPathTrack*
    constexpr std::ptrdiff_t m_paltpath = 0x4D0; // CPathTrack*
    constexpr std::ptrdiff_t m_flRadius = 0x4D8; // float
    constexpr std::ptrdiff_t m_length = 0x4DC; // float
    constexpr std::ptrdiff_t m_altName = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIterVal = 0x4E8; // int32_t
    constexpr std::ptrdiff_t m_eOrientationType = 0x4EC; // TrackOrientationType_t
    constexpr std::ptrdiff_t m_OnPass = 0x4F0; // CEntityIOOutput
}

namespace CPhysBallSocket { // CPhysConstraint
    constexpr std::ptrdiff_t m_flFriction = 0x518; // float
    constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x51C; // bool
    constexpr std::ptrdiff_t m_flSwingLimit = 0x520; // float
    constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x524; // bool
    constexpr std::ptrdiff_t m_flMinTwistAngle = 0x528; // float
    constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x52C; // float
}

namespace CPhysBox { // CBreakable
    constexpr std::ptrdiff_t m_damageType = 0x7D0; // int32_t
    constexpr std::ptrdiff_t m_massScale = 0x7D4; // float
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0x7D8; // int32_t
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x7DC; // float
    constexpr std::ptrdiff_t m_angPreferredCarryAngles = 0x7E0; // QAngle
    constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x7EC; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0x7ED; // bool
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0x7F0; // int32_t
    constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x7F4; // float
    constexpr std::ptrdiff_t m_OnDamaged = 0x7F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMotionEnabled = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouch = 0x898; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hCarryingPlayer = 0x8C0; // CHandle<CBasePlayerPawn>
}

namespace CPhysConstraint { // CLogicalEntity
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_breakSound = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceLimit = 0x4E0; // float
    constexpr std::ptrdiff_t m_torqueLimit = 0x4E4; // float
    constexpr std::ptrdiff_t m_teleportTick = 0x4E8; // uint32_t
    constexpr std::ptrdiff_t m_minTeleportDistance = 0x4EC; // float
    constexpr std::ptrdiff_t m_OnBreak = 0x4F0; // CEntityIOOutput
}

namespace CPhysExplosion { // CPointEntity
    constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4C0; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x4C4; // float
    constexpr std::ptrdiff_t m_flDamage = 0x4C8; // float
    constexpr std::ptrdiff_t m_radius = 0x4CC; // float
    constexpr std::ptrdiff_t m_targetEntityName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4D8; // float
    constexpr std::ptrdiff_t m_flPushScale = 0x4DC; // float
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x4E0; // bool
    constexpr std::ptrdiff_t m_OnPushedPlayer = 0x4E8; // CEntityIOOutput
}

namespace CPhysFixed { // CPhysConstraint
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x518; // float
    constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x51C; // float
    constexpr std::ptrdiff_t m_flAngularFrequency = 0x520; // float
    constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x524; // float
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x528; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x529; // bool
}

namespace CPhysForce { // CPointEntity
    constexpr std::ptrdiff_t m_nameAttach = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_force = 0x4D0; // float
    constexpr std::ptrdiff_t m_forceTime = 0x4D4; // float
    constexpr std::ptrdiff_t m_attachedObject = 0x4D8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_wasRestored = 0x4DC; // bool
    constexpr std::ptrdiff_t m_integrator = 0x4E0; // CConstantForceController
}

namespace CPhysHinge { // CPhysConstraint
    constexpr std::ptrdiff_t m_soundInfo = 0x520; // ConstraintSoundInfo
    constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x5A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x5D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAtMinLimit = 0x5F8; // bool
    constexpr std::ptrdiff_t m_bAtMaxLimit = 0x5F9; // bool
    constexpr std::ptrdiff_t m_hinge = 0x5FC; // constraint_hingeparams_t
    constexpr std::ptrdiff_t m_hingeFriction = 0x63C; // float
    constexpr std::ptrdiff_t m_systemLoadScale = 0x640; // float
    constexpr std::ptrdiff_t m_bIsAxisLocal = 0x644; // bool
    constexpr std::ptrdiff_t m_flMinRotation = 0x648; // float
    constexpr std::ptrdiff_t m_flMaxRotation = 0x64C; // float
    constexpr std::ptrdiff_t m_flInitialRotation = 0x650; // float
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x654; // float
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x658; // float
    constexpr std::ptrdiff_t m_flAngleSpeed = 0x65C; // float
    constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x660; // float
    constexpr std::ptrdiff_t m_OnStartMoving = 0x668; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStopMoving = 0x690; // CEntityIOOutput
}

namespace CPhysHingeAlias_phys_hinge_local { // CPhysHinge
}

namespace CPhysImpact { // CPointEntity
    constexpr std::ptrdiff_t m_damage = 0x4C0; // float
    constexpr std::ptrdiff_t m_distance = 0x4C4; // float
    constexpr std::ptrdiff_t m_directionEntityName = 0x4C8; // CUtlSymbolLarge
}

namespace CPhysLength { // CPhysConstraint
    constexpr std::ptrdiff_t m_offset = 0x518; // Vector[2]
    constexpr std::ptrdiff_t m_vecAttach = 0x530; // Vector
    constexpr std::ptrdiff_t m_addLength = 0x53C; // float
    constexpr std::ptrdiff_t m_minLength = 0x540; // float
    constexpr std::ptrdiff_t m_totalLength = 0x544; // float
    constexpr std::ptrdiff_t m_bEnableCollision = 0x548; // bool
}

namespace CPhysMagnet { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_OnMagnetAttach = 0x8E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMagnetDetach = 0x910; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0x938; // float
    constexpr std::ptrdiff_t m_forceLimit = 0x93C; // float
    constexpr std::ptrdiff_t m_torqueLimit = 0x940; // float
    constexpr std::ptrdiff_t m_MagnettedEntities = 0x948; // CUtlVector<magnetted_objects_t>
    constexpr std::ptrdiff_t m_bActive = 0x960; // bool
    constexpr std::ptrdiff_t m_bHasHitSomething = 0x961; // bool
    constexpr std::ptrdiff_t m_flTotalMass = 0x964; // float
    constexpr std::ptrdiff_t m_flRadius = 0x968; // float
    constexpr std::ptrdiff_t m_flNextSuckTime = 0x96C; // GameTime_t
    constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0x970; // int32_t
}

namespace CPhysMotor { // CLogicalEntity
    constexpr std::ptrdiff_t m_nameAttach = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hAttachedObject = 0x4C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_spinUp = 0x4CC; // float
    constexpr std::ptrdiff_t m_additionalAcceleration = 0x4D0; // float
    constexpr std::ptrdiff_t m_angularAcceleration = 0x4D4; // float
    constexpr std::ptrdiff_t m_lastTime = 0x4D8; // GameTime_t
    constexpr std::ptrdiff_t m_motor = 0x4F0; // CMotorController
}

namespace CPhysPulley { // CPhysConstraint
    constexpr std::ptrdiff_t m_position2 = 0x518; // Vector
    constexpr std::ptrdiff_t m_offset = 0x524; // Vector[2]
    constexpr std::ptrdiff_t m_addLength = 0x53C; // float
    constexpr std::ptrdiff_t m_gearRatio = 0x540; // float
}

namespace CPhysSlideConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_axisEnd = 0x520; // Vector
    constexpr std::ptrdiff_t m_slideFriction = 0x52C; // float
    constexpr std::ptrdiff_t m_systemLoadScale = 0x530; // float
    constexpr std::ptrdiff_t m_initialOffset = 0x534; // float
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x538; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x539; // bool
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x53C; // float
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x540; // float
    constexpr std::ptrdiff_t m_bUseEntityPivot = 0x544; // bool
    constexpr std::ptrdiff_t m_soundInfo = 0x548; // ConstraintSoundInfo
}

namespace CPhysThruster { // CPhysForce
    constexpr std::ptrdiff_t m_localOrigin = 0x520; // Vector
}

namespace CPhysTorque { // CPhysForce
    constexpr std::ptrdiff_t m_axis = 0x520; // Vector
}

namespace CPhysWheelConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x518; // float
    constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x51C; // float
    constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x520; // float
    constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x524; // bool
    constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x528; // float
    constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x52C; // float
    constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x530; // bool
    constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x534; // float
    constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x538; // float
    constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x53C; // float
    constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x540; // float
}

namespace CPhysicalButton { // CBaseButton
}

namespace CPhysicsEntitySolver { // CLogicalEntity
    constexpr std::ptrdiff_t m_hMovingEntity = 0x4C8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4CC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_separationDuration = 0x4D0; // float
    constexpr std::ptrdiff_t m_cancelTime = 0x4D4; // GameTime_t
}

namespace CPhysicsProp { // CBreakableProp
    constexpr std::ptrdiff_t m_MotionEnabled = 0xA68; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0xA90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwake = 0xAB8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAsleep = 0xAE0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xB08; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xB30; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOutOfWorld = 0xB58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0xB80; // float
    constexpr std::ptrdiff_t m_inertiaScale = 0xB84; // float
    constexpr std::ptrdiff_t m_buoyancyScale = 0xB88; // float
    constexpr std::ptrdiff_t m_damageType = 0xB8C; // int32_t
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0xB90; // int32_t
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xB94; // float
    constexpr std::ptrdiff_t m_bThrownByPlayer = 0xB98; // bool
    constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xB99; // bool
    constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xB9A; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xB9B; // bool
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xB9C; // int32_t
    constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xBA0; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xBA1; // bool
    constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xBA4; // GameTime_t
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xBA8; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0xBAC; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xBB0; // int32_t
    constexpr std::ptrdiff_t m_glowColor = 0xBB4; // Color
    constexpr std::ptrdiff_t m_bForceNavIgnore = 0xBB8; // bool
    constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xBB9; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xBBA; // bool
    constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xBBB; // bool
    constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xBBC; // bool
    constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xBC4; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0xBC5; // bool
    constexpr std::ptrdiff_t m_bAwake = 0xBC6; // bool
    constexpr std::ptrdiff_t m_nCollisionGroupOverride = 0xBC8; // int32_t
}

namespace CPhysicsPropMultiplayer { // CPhysicsProp
}

namespace CPhysicsPropOverride { // CPhysicsProp
}

namespace CPhysicsPropRespawnable { // CPhysicsProp
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xBD0; // Vector
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xBDC; // QAngle
    constexpr std::ptrdiff_t m_vOriginalMins = 0xBE8; // Vector
    constexpr std::ptrdiff_t m_vOriginalMaxs = 0xBF4; // Vector
    constexpr std::ptrdiff_t m_flRespawnDuration = 0xC00; // float
}

namespace CPhysicsShake {
    constexpr std::ptrdiff_t m_force = 0x8; // Vector
}

namespace CPhysicsSpring { // CBaseEntity
    constexpr std::ptrdiff_t m_flFrequency = 0x4C8; // float
    constexpr std::ptrdiff_t m_flDampingRatio = 0x4CC; // float
    constexpr std::ptrdiff_t m_flRestLength = 0x4D0; // float
    constexpr std::ptrdiff_t m_nameAttachStart = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttachEnd = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_start = 0x4E8; // Vector
    constexpr std::ptrdiff_t m_end = 0x4F4; // Vector
    constexpr std::ptrdiff_t m_teleportTick = 0x500; // uint32_t
}

namespace CPhysicsWire { // CBaseEntity
    constexpr std::ptrdiff_t m_nDensity = 0x4C0; // int32_t
}

namespace CPlantedC4 { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bBombTicking = 0x8E8; // bool
    constexpr std::ptrdiff_t m_flC4Blow = 0x8EC; // GameTime_t
    constexpr std::ptrdiff_t m_nBombSite = 0x8F0; // int32_t
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x8F4; // int32_t
    constexpr std::ptrdiff_t m_OnBombDefused = 0x8F8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0x920; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0x948; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0x970; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x978; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x990; // int32_t
    constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0x994; // bool
    constexpr std::ptrdiff_t m_bHasExploded = 0x995; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0x998; // float
    constexpr std::ptrdiff_t m_bBeingDefused = 0x99C; // bool
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0x9A4; // GameTime_t
    constexpr std::ptrdiff_t m_flDefuseLength = 0x9AC; // float
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0x9B0; // GameTime_t
    constexpr std::ptrdiff_t m_bBombDefused = 0x9B4; // bool
    constexpr std::ptrdiff_t m_hBombDefuser = 0x9B8; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_hControlPanel = 0x9BC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iProgressBarTime = 0x9C0; // int32_t
    constexpr std::ptrdiff_t m_bVoiceAlertFired = 0x9C4; // bool
    constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0x9C5; // bool[4]
    constexpr std::ptrdiff_t m_flNextBotBeepTime = 0x9CC; // GameTime_t
    constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0x9D4; // QAngle
    constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0x9E0; // GameTime_t
}

namespace CPlatTrigger { // CBaseModelEntity
    constexpr std::ptrdiff_t m_pPlatform = 0x710; // CHandle<CFuncPlat>
}

namespace CPlayerControllerComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CPlayerPawnComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CPlayerPing { // CBaseEntity
    constexpr std::ptrdiff_t m_hPlayer = 0x4C8; // CHandle<CCSPlayerPawn>
    constexpr std::ptrdiff_t m_hPingedEntity = 0x4CC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iType = 0x4D0; // int32_t
    constexpr std::ptrdiff_t m_bUrgent = 0x4D4; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x4D5; // char[18]
}

namespace CPlayerSprayDecal { // CModelPointEntity
    constexpr std::ptrdiff_t m_nUniqueID = 0x710; // int32_t
    constexpr std::ptrdiff_t m_unAccountID = 0x714; // uint32_t
    constexpr std::ptrdiff_t m_unTraceID = 0x718; // uint32_t
    constexpr std::ptrdiff_t m_rtGcTime = 0x71C; // uint32_t
    constexpr std::ptrdiff_t m_vecEndPos = 0x720; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0x72C; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x738; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0x744; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0x750; // int32_t
    constexpr std::ptrdiff_t m_nEntity = 0x754; // int32_t
    constexpr std::ptrdiff_t m_nHitbox = 0x758; // int32_t
    constexpr std::ptrdiff_t m_flCreationTime = 0x75C; // float
    constexpr std::ptrdiff_t m_nTintID = 0x760; // int32_t
    constexpr std::ptrdiff_t m_nVersion = 0x764; // uint8_t
    constexpr std::ptrdiff_t m_ubSignature = 0x765; // uint8_t[128]
}

namespace CPlayerVisibility { // CBaseEntity
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4C0; // float
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4C4; // float
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4C8; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x4CC; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4D0; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4D1; // bool
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
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_nLookAtName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4D0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hLookAtEntity = 0x4D4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flDuration = 0x4D8; // float
    constexpr std::ptrdiff_t m_flDotTolerance = 0x4DC; // float
    constexpr std::ptrdiff_t m_flFacingTime = 0x4E0; // GameTime_t
    constexpr std::ptrdiff_t m_bFired = 0x4E4; // bool
    constexpr std::ptrdiff_t m_OnFacingLookat = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_TargetDir = 0x538; // CEntityOutputTemplate<Vector>
    constexpr std::ptrdiff_t m_FacingPercentage = 0x560; // CEntityOutputTemplate<float>
}

namespace CPointAngularVelocitySensor { // CPointEntity
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flThreshold = 0x4C4; // float
    constexpr std::ptrdiff_t m_nLastCompareResult = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_nLastFireResult = 0x4CC; // int32_t
    constexpr std::ptrdiff_t m_flFireTime = 0x4D0; // GameTime_t
    constexpr std::ptrdiff_t m_flFireInterval = 0x4D4; // float
    constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4D8; // float
    constexpr std::ptrdiff_t m_lastOrientation = 0x4DC; // QAngle
    constexpr std::ptrdiff_t m_vecAxis = 0x4E8; // Vector
    constexpr std::ptrdiff_t m_bUseHelper = 0x4F4; // bool
    constexpr std::ptrdiff_t m_AngularVelocity = 0x4F8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnLessThan = 0x520; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x548; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x570; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x598; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEqualTo = 0x5C0; // CEntityIOOutput
}

namespace CPointBroadcastClientCommand { // CPointEntity
}

namespace CPointCamera { // CBaseEntity
    constexpr std::ptrdiff_t m_FOV = 0x4C0; // float
    constexpr std::ptrdiff_t m_Resolution = 0x4C4; // float
    constexpr std::ptrdiff_t m_bFogEnable = 0x4C8; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x4C9; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x4D0; // float
    constexpr std::ptrdiff_t m_flFogEnd = 0x4D4; // float
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4D8; // float
    constexpr std::ptrdiff_t m_bActive = 0x4DC; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4DD; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x4E0; // float
    constexpr std::ptrdiff_t m_bNoSky = 0x4E4; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x4E8; // float
    constexpr std::ptrdiff_t m_flZFar = 0x4EC; // float
    constexpr std::ptrdiff_t m_flZNear = 0x4F0; // float
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4F4; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x4F5; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4F8; // float
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4FC; // float
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x500; // float
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x504; // float
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x508; // float
    constexpr std::ptrdiff_t m_TargetFOV = 0x50C; // float
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x510; // float
    constexpr std::ptrdiff_t m_bIsOn = 0x514; // bool
    constexpr std::ptrdiff_t m_pNext = 0x518; // CPointCamera*
}

namespace CPointCameraVFOV { // CPointCamera
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x520; // float
}

namespace CPointClientCommand { // CPointEntity
}

namespace CPointClientUIDialog { // CBaseClientUIEntity
    constexpr std::ptrdiff_t m_hActivator = 0x8C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bStartEnabled = 0x8C4; // bool
}

namespace CPointClientUIWorldPanel { // CBaseClientUIEntity
    constexpr std::ptrdiff_t m_bIgnoreInput = 0x8C0; // bool
    constexpr std::ptrdiff_t m_bLit = 0x8C1; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x8C2; // bool
    constexpr std::ptrdiff_t m_flWidth = 0x8C4; // float
    constexpr std::ptrdiff_t m_flHeight = 0x8C8; // float
    constexpr std::ptrdiff_t m_flDPI = 0x8CC; // float
    constexpr std::ptrdiff_t m_flInteractDistance = 0x8D0; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0x8D4; // float
    constexpr std::ptrdiff_t m_unOwnerContext = 0x8D8; // uint32_t
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8DC; // uint32_t
    constexpr std::ptrdiff_t m_unVerticalAlign = 0x8E0; // uint32_t
    constexpr std::ptrdiff_t m_unOrientation = 0x8E4; // uint32_t
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8E8; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x8F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_bOpaque = 0x908; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0x909; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0x90A; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x90B; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x90C; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0x90D; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x90E; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0x90F; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x910; // int32_t
}

namespace CPointClientUIWorldTextPanel { // CPointClientUIWorldPanel
    constexpr std::ptrdiff_t m_messageText = 0x918; // char[512]
}

namespace CPointCommentaryNode { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_iszPreCommands = 0x8E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostCommands = 0x8F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0x8F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszViewTarget = 0x900; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewTarget = 0x908; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hViewTargetAngles = 0x90C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszViewPosition = 0x910; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewPosition = 0x918; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hViewPositionMover = 0x91C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bPreventMovement = 0x920; // bool
    constexpr std::ptrdiff_t m_bUnderCrosshair = 0x921; // bool
    constexpr std::ptrdiff_t m_bUnstoppable = 0x922; // bool
    constexpr std::ptrdiff_t m_flFinishedTime = 0x924; // GameTime_t
    constexpr std::ptrdiff_t m_vecFinishOrigin = 0x928; // Vector
    constexpr std::ptrdiff_t m_vecOriginalAngles = 0x934; // QAngle
    constexpr std::ptrdiff_t m_vecFinishAngles = 0x940; // QAngle
    constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0x94C; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x94D; // bool
    constexpr std::ptrdiff_t m_vecTeleportOrigin = 0x950; // Vector
    constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0x95C; // GameTime_t
    constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0x960; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0x988; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActive = 0x9B0; // bool
    constexpr std::ptrdiff_t m_flStartTime = 0x9B4; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x9B8; // float
    constexpr std::ptrdiff_t m_iszTitle = 0x9C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0x9C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0x9D0; // int32_t
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0x9D4; // int32_t
    constexpr std::ptrdiff_t m_bListenedTo = 0x9D8; // bool
}

namespace CPointEntity { // CBaseEntity
}

namespace CPointEntityFinder { // CBaseEntity
    constexpr std::ptrdiff_t m_hEntity = 0x4C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iFilterName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4D0; // CHandle<CBaseFilter>
    constexpr std::ptrdiff_t m_iRefName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hReference = 0x4E0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_FindMethod = 0x4E4; // EntFinderMethod_t
    constexpr std::ptrdiff_t m_OnFoundEntity = 0x4E8; // CEntityIOOutput
}

namespace CPointGamestatsCounter { // CPointEntity
    constexpr std::ptrdiff_t m_strStatisticName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x4C8; // bool
}

namespace CPointGiveAmmo { // CPointEntity
    constexpr std::ptrdiff_t m_pActivator = 0x4C0; // CHandle<CBaseEntity>
}

namespace CPointHurt { // CPointEntity
    constexpr std::ptrdiff_t m_nDamage = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_bitsDamageType = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_flRadius = 0x4C8; // float
    constexpr std::ptrdiff_t m_flDelay = 0x4CC; // float
    constexpr std::ptrdiff_t m_strTarget = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pActivator = 0x4D8; // CHandle<CBaseEntity>
}

namespace CPointPrefab { // CServerOnlyPointEntity
    constexpr std::ptrdiff_t m_targetMapName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fixupNames = 0x4D8; // bool
    constexpr std::ptrdiff_t m_bLoadDynamic = 0x4D9; // bool
    constexpr std::ptrdiff_t m_associatedRelayEntity = 0x4DC; // CHandle<CPointPrefab>
}

namespace CPointProximitySensor { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_Distance = 0x4C8; // CEntityOutputTemplate<float>
}

namespace CPointPulse { // CBaseEntity
}

namespace CPointPush { // CPointEntity
    constexpr std::ptrdiff_t m_bEnabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x4C4; // float
    constexpr std::ptrdiff_t m_flRadius = 0x4C8; // float
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4CC; // float
    constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4D0; // float
    constexpr std::ptrdiff_t m_iszFilterName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4E0; // CHandle<CBaseFilter>
}

namespace CPointScriptEntity { // CBaseEntity
}

namespace CPointServerCommand { // CPointEntity
}

namespace CPointTeleport { // CServerOnlyPointEntity
    constexpr std::ptrdiff_t m_vSaveOrigin = 0x4C0; // Vector
    constexpr std::ptrdiff_t m_vSaveAngles = 0x4CC; // QAngle
    constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4D8; // bool
    constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4D9; // bool
}

namespace CPointTemplate { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszWorldName = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4D8; // float
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4DC; // bool
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x4E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x508; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x50C; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x510; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x528; // CUtlVector<CEntityHandle>
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x540; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x548; // HSCRIPT
}

namespace CPointValueRemapper { // CBaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4C1; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x4C4; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x4D8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4DC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4E0; // float
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x4E4; // float
    constexpr std::ptrdiff_t m_flEngageDistance = 0x4E8; // float
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4EC; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x4F0; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x500; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x510; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOutputEntities = 0x518; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_nHapticsType = 0x530; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x534; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x538; // float
    constexpr std::ptrdiff_t m_flSnapValue = 0x53C; // float
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x540; // float
    constexpr std::ptrdiff_t m_nRatchetType = 0x544; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x548; // float
    constexpr std::ptrdiff_t m_flInputOffset = 0x54C; // float
    constexpr std::ptrdiff_t m_bEngaged = 0x550; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x551; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x554; // float
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x558; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x55C; // Vector
    constexpr std::ptrdiff_t m_hUsingPlayer = 0x568; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flCustomOutputValue = 0x56C; // float
    constexpr std::ptrdiff_t m_iszSoundEngage = 0x570; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundDisengage = 0x578; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x580; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x588; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x590; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Position = 0x5A0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_PositionDelta = 0x5C8; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueOne = 0x618; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x640; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEngage = 0x668; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDisengage = 0x690; // CEntityIOOutput
}

namespace CPointVelocitySensor { // CPointEntity
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_vecAxis = 0x4C4; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x4D0; // bool
    constexpr std::ptrdiff_t m_fPrevVelocity = 0x4D4; // float
    constexpr std::ptrdiff_t m_flAvgInterval = 0x4D8; // float
    constexpr std::ptrdiff_t m_Velocity = 0x4E0; // CEntityOutputTemplate<float>
}

namespace CPointWorldText { // CModelPointEntity
    constexpr std::ptrdiff_t m_messageText = 0x710; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0x910; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0x950; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0x951; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x954; // float
    constexpr std::ptrdiff_t m_flFontSize = 0x958; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0x95C; // float
    constexpr std::ptrdiff_t m_Color = 0x960; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x964; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0x968; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0x96C; // PointWorldTextReorientMode_t
}

namespace CPostProcessingVolume { // CBaseTrigger
    constexpr std::ptrdiff_t m_hPostSettings = 0x8C8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    constexpr std::ptrdiff_t m_flFadeDuration = 0x8D0; // float
    constexpr std::ptrdiff_t m_flMinLogExposure = 0x8D4; // float
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8D8; // float
    constexpr std::ptrdiff_t m_flMinExposure = 0x8DC; // float
    constexpr std::ptrdiff_t m_flMaxExposure = 0x8E0; // float
    constexpr std::ptrdiff_t m_flExposureCompensation = 0x8E4; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8E8; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8EC; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x8F0; // float
    constexpr std::ptrdiff_t m_bMaster = 0x8F4; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0x8F5; // bool
    constexpr std::ptrdiff_t m_flRate = 0x8F8; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x8FC; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x900; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x904; // float
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
    constexpr std::ptrdiff_t m_nTexture = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_flDistance = 0x4C4; // float
}

namespace CPropDoorRotating { // CBasePropDoor
    constexpr std::ptrdiff_t m_vecAxis = 0xDF0; // Vector
    constexpr std::ptrdiff_t m_flDistance = 0xDFC; // float
    constexpr std::ptrdiff_t m_eSpawnPosition = 0xE00; // PropDoorRotatingSpawnPos_t
    constexpr std::ptrdiff_t m_eOpenDirection = 0xE04; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xE08; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_flAjarAngle = 0xE0C; // float
    constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xE10; // QAngle
    constexpr std::ptrdiff_t m_angRotationClosed = 0xE1C; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenForward = 0xE28; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenBack = 0xE34; // QAngle
    constexpr std::ptrdiff_t m_angGoal = 0xE40; // QAngle
    constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xE4C; // Vector
    constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xE58; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xE64; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xE70; // Vector
    constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xE7C; // bool
    constexpr std::ptrdiff_t m_hEntityBlocker = 0xE80; // CHandle<CEntityBlocker>
}

namespace CPropDoorRotatingBreakable { // CPropDoorRotating
    constexpr std::ptrdiff_t m_bBreakable = 0xE88; // bool
    constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xE89; // bool
    constexpr std::ptrdiff_t m_currentDamageState = 0xE8C; // int32_t
    constexpr std::ptrdiff_t m_damageStates = 0xE90; // CUtlVector<CUtlSymbolLarge>
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
    constexpr std::ptrdiff_t m_Params = 0x148; // ResponseParams
    constexpr std::ptrdiff_t m_fMatchScore = 0x168; // float
    constexpr std::ptrdiff_t m_szSpeakerContext = 0x170; // char*
    constexpr std::ptrdiff_t m_szWorldContext = 0x178; // char*
    constexpr std::ptrdiff_t m_Followup = 0x180; // ResponseFollowup
    constexpr std::ptrdiff_t m_pchCriteriaNames = 0x1B8; // CUtlVector<CUtlSymbol>
    constexpr std::ptrdiff_t m_pchCriteriaValues = 0x1D0; // CUtlVector<char*>
}

namespace CRagdollConstraint { // CPhysConstraint
    constexpr std::ptrdiff_t m_xmin = 0x518; // float
    constexpr std::ptrdiff_t m_xmax = 0x51C; // float
    constexpr std::ptrdiff_t m_ymin = 0x520; // float
    constexpr std::ptrdiff_t m_ymax = 0x524; // float
    constexpr std::ptrdiff_t m_zmin = 0x528; // float
    constexpr std::ptrdiff_t m_zmax = 0x52C; // float
    constexpr std::ptrdiff_t m_xfriction = 0x530; // float
    constexpr std::ptrdiff_t m_yfriction = 0x534; // float
    constexpr std::ptrdiff_t m_zfriction = 0x538; // float
}

namespace CRagdollMagnet { // CPointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_radius = 0x4C4; // float
    constexpr std::ptrdiff_t m_force = 0x4C8; // float
    constexpr std::ptrdiff_t m_axis = 0x4CC; // Vector
}

namespace CRagdollManager { // CBaseEntity
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4C0; // int8_t
    constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_bSaveImportant = 0x4C8; // bool
}

namespace CRagdollProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_ragdoll = 0x8F0; // ragdoll_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x928; // bool
    constexpr std::ptrdiff_t m_ragPos = 0x930; // CNetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_ragAngles = 0x948; // CNetworkUtlVectorBase<QAngle>
    constexpr std::ptrdiff_t m_hRagdollSource = 0x960; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_lastUpdateTickCount = 0x964; // uint32_t
    constexpr std::ptrdiff_t m_allAsleep = 0x968; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0x969; // bool
    constexpr std::ptrdiff_t m_hDamageEntity = 0x96C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hKiller = 0x970; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x974; // CHandle<CBasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x978; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeOutStartTime = 0x97C; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeTime = 0x980; // float
    constexpr std::ptrdiff_t m_vecLastOrigin = 0x984; // Vector
    constexpr std::ptrdiff_t m_flAwakeTime = 0x990; // GameTime_t
    constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0x994; // GameTime_t
    constexpr std::ptrdiff_t m_nBloodColor = 0x998; // int32_t
    constexpr std::ptrdiff_t m_strOriginClassName = 0x9A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strSourceClassName = 0x9A8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0x9B0; // bool
    constexpr std::ptrdiff_t m_bShouldTeleportPhysics = 0x9B1; // bool
    constexpr std::ptrdiff_t m_flBlendWeight = 0x9B4; // float
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x9B8; // float
    constexpr std::ptrdiff_t m_ragdollMins = 0x9C0; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_ragdollMaxs = 0x9D8; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0x9F0; // bool
    constexpr std::ptrdiff_t m_bValidatePoweredRagdollPose = 0xA50; // bool
}

namespace CRagdollPropAlias_physics_prop_ragdoll { // CRagdollProp
}

namespace CRagdollPropAttached { // CRagdollProp
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xA90; // uint32_t
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xA94; // uint32_t
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xA98; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xAA4; // Vector
    constexpr std::ptrdiff_t m_bShouldDetach = 0xAB0; // bool
    constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xAC0; // bool
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
    constexpr std::ptrdiff_t m_bShowLight = 0x938; // bool
}

namespace CRemapFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0; // float[4]
}

namespace CRenderComponent { // CEntityComponent
    constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32_t
    constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0; // bool
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
    constexpr std::ptrdiff_t m_bResponseValid = 0x230; // bool
}

namespace CRetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32_t
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32_t
    constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32_t
}

namespace CRevertSaved { // CModelPointEntity
    constexpr std::ptrdiff_t m_loadTime = 0x710; // float
    constexpr std::ptrdiff_t m_Duration = 0x714; // float
    constexpr std::ptrdiff_t m_HoldTime = 0x718; // float
}

namespace CRopeKeyframe { // CBaseModelEntity
    constexpr std::ptrdiff_t m_RopeFlags = 0x718; // uint16_t
    constexpr std::ptrdiff_t m_iNextLinkName = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Slack = 0x728; // int16_t
    constexpr std::ptrdiff_t m_Width = 0x72C; // float
    constexpr std::ptrdiff_t m_TextureScale = 0x730; // float
    constexpr std::ptrdiff_t m_nSegments = 0x734; // uint8_t
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x735; // bool
    constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x740; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_Subdiv = 0x748; // uint8_t
    constexpr std::ptrdiff_t m_nChangeCount = 0x749; // uint8_t
    constexpr std::ptrdiff_t m_RopeLength = 0x74A; // int16_t
    constexpr std::ptrdiff_t m_fLockedPoints = 0x74C; // uint8_t
    constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x74D; // bool
    constexpr std::ptrdiff_t m_flScrollSpeed = 0x750; // float
    constexpr std::ptrdiff_t m_bStartPointValid = 0x754; // bool
    constexpr std::ptrdiff_t m_bEndPointValid = 0x755; // bool
    constexpr std::ptrdiff_t m_hStartPoint = 0x758; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hEndPoint = 0x75C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iStartAttachment = 0x760; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0x761; // AttachmentHandle_t
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
    constexpr std::ptrdiff_t m_bSolidBsp = 0x998; // bool
}

namespace CRuleBrushEntity { // CRuleEntity
}

namespace CRuleEntity { // CBaseModelEntity
    constexpr std::ptrdiff_t m_iszMaster = 0x710; // CUtlSymbolLarge
}

namespace CRulePointEntity { // CRuleEntity
    constexpr std::ptrdiff_t m_Score = 0x718; // int32_t
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
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32_t
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32_t
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32_t
    constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32_t
    constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32_t
    constexpr std::ptrdiff_t m_iEnemy2Ks = 0x7C; // int32_t
    constexpr std::ptrdiff_t m_iUtility_Count = 0x80; // int32_t
    constexpr std::ptrdiff_t m_iUtility_Successes = 0x84; // int32_t
    constexpr std::ptrdiff_t m_iUtility_Enemies = 0x88; // int32_t
    constexpr std::ptrdiff_t m_iFlash_Count = 0x8C; // int32_t
    constexpr std::ptrdiff_t m_iFlash_Successes = 0x90; // int32_t
    constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x94; // int32_t
    constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x98; // int32_t
    constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9C; // int32_t
    constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xA0; // int32_t
    constexpr std::ptrdiff_t m_i1v1Count = 0xA4; // int32_t
    constexpr std::ptrdiff_t m_i1v1Wins = 0xA8; // int32_t
    constexpr std::ptrdiff_t m_i1v2Count = 0xAC; // int32_t
    constexpr std::ptrdiff_t m_i1v2Wins = 0xB0; // int32_t
    constexpr std::ptrdiff_t m_iEntryCount = 0xB4; // int32_t
    constexpr std::ptrdiff_t m_iEntryWins = 0xB8; // int32_t
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
    constexpr std::ptrdiff_t m_iszSceneFile = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget1 = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget2 = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget3 = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget4 = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget5 = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget6 = 0x500; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget7 = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget8 = 0x510; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTarget1 = 0x518; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget2 = 0x51C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget3 = 0x520; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget4 = 0x524; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget5 = 0x528; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget6 = 0x52C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget7 = 0x530; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hTarget8 = 0x534; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x538; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x539; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x53A; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x53B; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x53C; // float
    constexpr std::ptrdiff_t m_flCurrentTime = 0x540; // float
    constexpr std::ptrdiff_t m_flFrameTime = 0x544; // float
    constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x548; // bool
    constexpr std::ptrdiff_t m_fPitch = 0x54C; // float
    constexpr std::ptrdiff_t m_bAutomated = 0x550; // bool
    constexpr std::ptrdiff_t m_nAutomatedAction = 0x554; // int32_t
    constexpr std::ptrdiff_t m_flAutomationDelay = 0x558; // float
    constexpr std::ptrdiff_t m_flAutomationTime = 0x55C; // float
    constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x560; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x564; // bool
    constexpr std::ptrdiff_t m_bPausedViaInput = 0x565; // bool
    constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x566; // bool
    constexpr std::ptrdiff_t m_bWaitingForActor = 0x567; // bool
    constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x568; // bool
    constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x569; // bool
    constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x56A; // bool
    constexpr std::ptrdiff_t m_hActorList = 0x570; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    constexpr std::ptrdiff_t m_hRemoveActorList = 0x588; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x5D0; // int32_t
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5D4; // uint16_t
    constexpr std::ptrdiff_t m_OnStart = 0x5D8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCompletion = 0x600; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCanceled = 0x628; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPaused = 0x650; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnResumed = 0x678; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTrigger = 0x6A0; // CEntityIOOutput[16]
    constexpr std::ptrdiff_t m_hInterruptScene = 0x9B0; // CHandle<CSceneEntity>
    constexpr std::ptrdiff_t m_nInterruptCount = 0x9B4; // int32_t
    constexpr std::ptrdiff_t m_bSceneMissing = 0x9B8; // bool
    constexpr std::ptrdiff_t m_bInterrupted = 0x9B9; // bool
    constexpr std::ptrdiff_t m_bCompletedEarly = 0x9BA; // bool
    constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x9BB; // bool
    constexpr std::ptrdiff_t m_bRestoring = 0x9BC; // bool
    constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x9C0; // CUtlVector<CHandle<CSceneEntity>>
    constexpr std::ptrdiff_t m_hListManagers = 0x9D8; // CUtlVector<CHandle<CSceneListManager>>
    constexpr std::ptrdiff_t m_iszSoundName = 0x9F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSequenceName = 0x9F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hActor = 0xA00; // CHandle<CBaseFlex>
    constexpr std::ptrdiff_t m_hActivator = 0xA04; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_BusyActor = 0xA08; // int32_t
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0xA0C; // SceneOnPlayerDeath_t
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
    constexpr std::ptrdiff_t m_hListManagers = 0x4C0; // CUtlVector<CHandle<CSceneListManager>>
    constexpr std::ptrdiff_t m_iszScenes = 0x4D8; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_hScenes = 0x558; // CHandle<CBaseEntity>[16]
}

namespace CScriptComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

namespace CScriptItem { // CItem
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x9C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_MoveTypeOverride = 0x9E8; // MoveType_t
}

namespace CScriptNavBlocker { // CFuncNavBlocker
    constexpr std::ptrdiff_t m_vExtent = 0x720; // Vector
}

namespace CScriptTriggerHurt { // CTriggerHurt
    constexpr std::ptrdiff_t m_vExtent = 0x958; // Vector
}

namespace CScriptTriggerMultiple { // CTriggerMultiple
    constexpr std::ptrdiff_t m_vExtent = 0x8E0; // Vector
}

namespace CScriptTriggerOnce { // CTriggerOnce
    constexpr std::ptrdiff_t m_vExtent = 0x8E0; // Vector
}

namespace CScriptTriggerPush { // CTriggerPush
    constexpr std::ptrdiff_t m_vExtent = 0x8D8; // Vector
}

namespace CScriptUniformRandomStream {
    constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
    constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32_t
}

namespace CScriptedSequence { // CBaseEntity
    constexpr std::ptrdiff_t m_iszEntry = 0x4C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPreIdle = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPlay = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostIdle = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszNextScript = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntity = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSyncGroup = 0x4F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nMoveTo = 0x500; // ScriptedMoveTo_t
    constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x504; // bool
    constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x505; // bool
    constexpr std::ptrdiff_t m_bIsPlayingAction = 0x506; // bool
    constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x507; // bool
    constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x508; // bool
    constexpr std::ptrdiff_t m_bLoopActionSequence = 0x509; // bool
    constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x50A; // bool
    constexpr std::ptrdiff_t m_bSynchPostIdles = 0x50B; // bool
    constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x50C; // bool
    constexpr std::ptrdiff_t m_bIgnoreGravity = 0x50D; // bool
    constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x50E; // bool
    constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x50F; // bool
    constexpr std::ptrdiff_t m_bDontAddModifiers = 0x510; // bool
    constexpr std::ptrdiff_t m_flRadius = 0x514; // float
    constexpr std::ptrdiff_t m_flRepeat = 0x518; // float
    constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x51C; // float
    constexpr std::ptrdiff_t m_flMoveInterpTime = 0x520; // float
    constexpr std::ptrdiff_t m_flAngRate = 0x524; // float
    constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x528; // int32_t
    constexpr std::ptrdiff_t m_startTime = 0x52C; // GameTime_t
    constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x530; // bool
    constexpr std::ptrdiff_t m_saved_effects = 0x534; // int32_t
    constexpr std::ptrdiff_t m_savedFlags = 0x538; // int32_t
    constexpr std::ptrdiff_t m_savedCollisionGroup = 0x53C; // int32_t
    constexpr std::ptrdiff_t m_interruptable = 0x540; // bool
    constexpr std::ptrdiff_t m_sequenceStarted = 0x541; // bool
    constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x542; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x544; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hNextCine = 0x548; // CHandle<CScriptedSequence>
    constexpr std::ptrdiff_t m_bThinking = 0x54C; // bool
    constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x54D; // bool
    constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x54E; // bool
    constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x54F; // bool
    constexpr std::ptrdiff_t m_hLastFoundEntity = 0x550; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_hForcedTarget = 0x554; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x558; // bool
    constexpr std::ptrdiff_t m_bForceSynch = 0x559; // bool
    constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x55A; // bool
    constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x55B; // bool
    constexpr std::ptrdiff_t m_onDeathBehavior = 0x55C; // ScriptedOnDeath_t
    constexpr std::ptrdiff_t m_ConflictResponse = 0x560; // ScriptedConflictResponse_t
    constexpr std::ptrdiff_t m_OnBeginSequence = 0x568; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x590; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndSequence = 0x5B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x5E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelSequence = 0x608; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x630; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnScriptEvent = 0x658; // CEntityIOOutput[8]
    constexpr std::ptrdiff_t m_matOtherToMain = 0x7A0; // CTransform
    constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x7C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x7C4; // int32_t
}

namespace CSensorGrenade { // CBaseCSGrenade
}

namespace CSensorGrenadeProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_fExpireTime = 0xA98; // GameTime_t
    constexpr std::ptrdiff_t m_fNextDetectPlayerSound = 0xA9C; // GameTime_t
    constexpr std::ptrdiff_t m_hDisplayGrenade = 0xAA0; // CHandle<CBaseEntity>
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
    constexpr std::ptrdiff_t m_bDebris = 0xBD0; // bool
    constexpr std::ptrdiff_t m_hParentShard = 0xBD4; // uint32_t
    constexpr std::ptrdiff_t m_ShardDesc = 0xBD8; // shard_model_desc_t
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
    constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0x90; // bool
}

namespace CSkeletonAnimationController { // ISkeletonAnimationController
    constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
}

namespace CSkeletonInstance { // CGameSceneNode
    constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x370; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x371; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x372; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x374; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x378; // uint8_t
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
    constexpr std::ptrdiff_t m_skyboxData = 0x4C0; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x550; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x554; // bool
    constexpr std::ptrdiff_t m_pNext = 0x558; // CSkyCamera*
}

namespace CSkyboxReference { // CBaseEntity
    constexpr std::ptrdiff_t m_worldGroupId = 0x4C0; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x4C4; // CHandle<CSkyCamera>
}

namespace CSmokeGrenade { // CBaseCSGrenade
}

namespace CSmokeGrenadeProjectile { // CBaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xAB0; // int32_t
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xAB4; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0xAB8; // int32_t
    constexpr std::ptrdiff_t m_vSmokeColor = 0xABC; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xAC8; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0xAD8; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_flLastBounce = 0xAF0; // GameTime_t
    constexpr std::ptrdiff_t m_fllastSimulationTime = 0xAF4; // GameTime_t
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
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x4D0; // Vector
}

namespace CSoundAreaEntityOrientedBox { // CSoundAreaEntityBase
    constexpr std::ptrdiff_t m_vMin = 0x4E0; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x4EC; // Vector
}

namespace CSoundAreaEntitySphere { // CSoundAreaEntityBase
    constexpr std::ptrdiff_t m_flRadius = 0x4E0; // float
}

namespace CSoundEnt { // CPointEntity
    constexpr std::ptrdiff_t m_iFreeSound = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_iActiveSound = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_cLastActiveSounds = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_SoundPool = 0x4CC; // CSound[128]
}

namespace CSoundEnvelope {
    constexpr std::ptrdiff_t m_current = 0x0; // float
    constexpr std::ptrdiff_t m_target = 0x4; // float
    constexpr std::ptrdiff_t m_rate = 0x8; // float
    constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
}

namespace CSoundEventAABBEntity { // CSoundEventEntity
    constexpr std::ptrdiff_t m_vMins = 0x568; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x574; // Vector
}

namespace CSoundEventEntity { // CBaseEntity
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4C0; // bool
    constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4C1; // bool
    constexpr std::ptrdiff_t m_bStopOnNew = 0x4C2; // bool
    constexpr std::ptrdiff_t m_bSaveRestore = 0x4C3; // bool
    constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4C4; // bool
    constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4C8; // float
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszAttachmentName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_onGUIDChanged = 0x4E0; // CEntityOutputTemplate<uint64_t>
    constexpr std::ptrdiff_t m_onSoundFinished = 0x508; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSoundName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSource = 0x560; // CEntityHandle
}

namespace CSoundEventEntityAlias_snd_event_point { // CSoundEventEntity
}

namespace CSoundEventOBBEntity { // CSoundEventEntity
    constexpr std::ptrdiff_t m_vMins = 0x568; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x574; // Vector
}

namespace CSoundEventParameter { // CBaseEntity
    constexpr std::ptrdiff_t m_iszParamName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flFloatValue = 0x4D0; // float
}

namespace CSoundEventPathCornerEntity { // CSoundEventEntity
    constexpr std::ptrdiff_t m_iszPathCorner = 0x568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iCountMax = 0x570; // int32_t
    constexpr std::ptrdiff_t m_flDistanceMax = 0x574; // float
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x578; // float
    constexpr std::ptrdiff_t m_flDotProductMax = 0x57C; // float
    constexpr std::ptrdiff_t bPlaying = 0x580; // bool
}

namespace CSoundOpvarSetAABBEntity { // CSoundOpvarSetPointEntity
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x668; // Vector
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x674; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x680; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x68C; // Vector
    constexpr std::ptrdiff_t m_nAABBDirection = 0x698; // int32_t
    constexpr std::ptrdiff_t m_vInnerMins = 0x69C; // Vector
    constexpr std::ptrdiff_t m_vInnerMaxs = 0x6A8; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x6B4; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x6C0; // Vector
}

namespace CSoundOpvarSetAutoRoomEntity { // CSoundOpvarSetPointEntity
    constexpr std::ptrdiff_t m_traceResults = 0x668; // CUtlVector<SoundOpvarTraceResult_t>
    constexpr std::ptrdiff_t m_flSize = 0x698; // float
    constexpr std::ptrdiff_t m_flHeightTolerance = 0x69C; // float
    constexpr std::ptrdiff_t m_flSizeSqr = 0x6A0; // float
}

namespace CSoundOpvarSetEntity { // CBaseEntity
    constexpr std::ptrdiff_t m_iszStackName = 0x4C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nOpvarType = 0x4E0; // int32_t
    constexpr std::ptrdiff_t m_nOpvarIndex = 0x4E4; // int32_t
    constexpr std::ptrdiff_t m_flOpvarValue = 0x4E8; // float
    constexpr std::ptrdiff_t m_OpvarValueString = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bSetOnSpawn = 0x4F8; // bool
}

namespace CSoundOpvarSetOBBEntity { // CSoundOpvarSetAABBEntity
}

namespace CSoundOpvarSetOBBWindEntity { // CSoundOpvarSetPointBase
    constexpr std::ptrdiff_t m_vMins = 0x558; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x564; // Vector
    constexpr std::ptrdiff_t m_vDistanceMins = 0x570; // Vector
    constexpr std::ptrdiff_t m_vDistanceMaxs = 0x57C; // Vector
    constexpr std::ptrdiff_t m_flWindMin = 0x588; // float
    constexpr std::ptrdiff_t m_flWindMax = 0x58C; // float
    constexpr std::ptrdiff_t m_flWindMapMin = 0x590; // float
    constexpr std::ptrdiff_t m_flWindMapMax = 0x594; // float
}

namespace CSoundOpvarSetPathCornerEntity { // CSoundOpvarSetPointEntity
    constexpr std::ptrdiff_t m_flDistMinSqr = 0x680; // float
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x684; // float
    constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x688; // CUtlSymbolLarge
}

namespace CSoundOpvarSetPointBase { // CBaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
    constexpr std::ptrdiff_t m_hSource = 0x4C4; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vLastPosition = 0x528; // Vector
    constexpr std::ptrdiff_t m_iszStackName = 0x538; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x548; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x550; // int32_t
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x554; // bool
}

namespace CSoundOpvarSetPointEntity { // CSoundOpvarSetPointBase
    constexpr std::ptrdiff_t m_OnEnter = 0x558; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExit = 0x580; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAutoDisable = 0x5A8; // bool
    constexpr std::ptrdiff_t m_flDistanceMin = 0x5EC; // float
    constexpr std::ptrdiff_t m_flDistanceMax = 0x5F0; // float
    constexpr std::ptrdiff_t m_flDistanceMapMin = 0x5F4; // float
    constexpr std::ptrdiff_t m_flDistanceMapMax = 0x5F8; // float
    constexpr std::ptrdiff_t m_flOcclusionRadius = 0x5FC; // float
    constexpr std::ptrdiff_t m_flOcclusionMin = 0x600; // float
    constexpr std::ptrdiff_t m_flOcclusionMax = 0x604; // float
    constexpr std::ptrdiff_t m_flValSetOnDisable = 0x608; // float
    constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x60C; // bool
    constexpr std::ptrdiff_t m_nSimulationMode = 0x610; // int32_t
    constexpr std::ptrdiff_t m_nVisibilitySamples = 0x614; // int32_t
    constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x618; // Vector
    constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x624; // float
    constexpr std::ptrdiff_t m_hDynamicEntity = 0x628; // CEntityHandle
    constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x630; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x638; // float
    constexpr std::ptrdiff_t m_vPathingSourcePos = 0x63C; // Vector
    constexpr std::ptrdiff_t m_vPathingListenerPos = 0x648; // Vector
    constexpr std::ptrdiff_t m_vPathingDirection = 0x654; // Vector
    constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x660; // int32_t
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
    constexpr std::ptrdiff_t m_iszStackName = 0x4C0; // CUtlSymbolLarge
}

namespace CSplineConstraint { // CPhysConstraint
}

namespace CSpotlightEnd { // CBaseModelEntity
    constexpr std::ptrdiff_t m_flLightScale = 0x710; // float
    constexpr std::ptrdiff_t m_Radius = 0x714; // float
    constexpr std::ptrdiff_t m_vSpotlightDir = 0x718; // Vector
    constexpr std::ptrdiff_t m_vSpotlightOrg = 0x724; // Vector
}

namespace CSprite { // CBaseModelEntity
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0x718; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_nAttachment = 0x71C; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0x720; // float
    constexpr std::ptrdiff_t m_flFrame = 0x724; // float
    constexpr std::ptrdiff_t m_flDieTime = 0x728; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0x738; // uint32_t
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0x73C; // float
    constexpr std::ptrdiff_t m_flSpriteScale = 0x740; // float
    constexpr std::ptrdiff_t m_flScaleDuration = 0x744; // float
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x748; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x74C; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x750; // float
    constexpr std::ptrdiff_t m_flLastTime = 0x754; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0x758; // float
    constexpr std::ptrdiff_t m_flStartScale = 0x75C; // float
    constexpr std::ptrdiff_t m_flDestScale = 0x760; // float
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x764; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0x768; // int32_t
    constexpr std::ptrdiff_t m_nDestBrightness = 0x76C; // int32_t
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x770; // GameTime_t
    constexpr std::ptrdiff_t m_nSpriteWidth = 0x774; // int32_t
    constexpr std::ptrdiff_t m_nSpriteHeight = 0x778; // int32_t
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
    constexpr std::ptrdiff_t m_vDirection = 0x710; // Vector
    constexpr std::ptrdiff_t m_clrOverlay = 0x71C; // Color
    constexpr std::ptrdiff_t m_iszEffectName = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSSEffectName = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOn = 0x730; // bool
    constexpr std::ptrdiff_t m_bmaxColor = 0x731; // bool
    constexpr std::ptrdiff_t m_flSize = 0x734; // float
    constexpr std::ptrdiff_t m_flRotation = 0x738; // float
    constexpr std::ptrdiff_t m_flHazeScale = 0x73C; // float
    constexpr std::ptrdiff_t m_flAlphaHaze = 0x740; // float
    constexpr std::ptrdiff_t m_flAlphaHdr = 0x744; // float
    constexpr std::ptrdiff_t m_flAlphaScale = 0x748; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x74C; // float
    constexpr std::ptrdiff_t m_flFarZScale = 0x750; // float
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
    constexpr std::ptrdiff_t m_newTarget = 0x4C0; // CVariantBase<CVariantDefaultAllocator>
    constexpr std::ptrdiff_t m_newTargetName = 0x4D0; // CUtlSymbolLarge
}

namespace CTankTrainAI { // CPointEntity
    constexpr std::ptrdiff_t m_hTrain = 0x4C0; // CHandle<CFuncTrackTrain>
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4C4; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_soundPlaying = 0x4C8; // int32_t
    constexpr std::ptrdiff_t m_startSoundName = 0x4E0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_engineSoundName = 0x4E8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_movementSoundName = 0x4F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_targetEntityName = 0x4F8; // CUtlSymbolLarge
}

namespace CTeam { // CBaseEntity
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_aPlayers = 0x4D8; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    constexpr std::ptrdiff_t m_iScore = 0x4F0; // int32_t
    constexpr std::ptrdiff_t m_szTeamname = 0x4F4; // char[129]
}

namespace CTeamplayRules { // CMultiplayRules
}

namespace CTestEffect { // CBaseEntity
    constexpr std::ptrdiff_t m_iLoop = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_iBeam = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_pBeam = 0x4C8; // CBeam*[24]
    constexpr std::ptrdiff_t m_flBeamTime = 0x588; // GameTime_t[24]
    constexpr std::ptrdiff_t m_flStartTime = 0x5E8; // GameTime_t
}

namespace CTextureBasedAnimatable { // CBaseModelEntity
    constexpr std::ptrdiff_t m_bLoop = 0x710; // bool
    constexpr std::ptrdiff_t m_flFPS = 0x714; // float
    constexpr std::ptrdiff_t m_hPositionKeys = 0x718; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hRotationKeys = 0x720; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x728; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x734; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0x740; // float
    constexpr std::ptrdiff_t m_flStartFrame = 0x744; // float
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
    constexpr std::ptrdiff_t m_OnTimer = 0x4C0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerHigh = 0x4E8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerLow = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iDisabled = 0x538; // int32_t
    constexpr std::ptrdiff_t m_flInitialDelay = 0x53C; // float
    constexpr std::ptrdiff_t m_flRefireTime = 0x540; // float
    constexpr std::ptrdiff_t m_bUpDownState = 0x544; // bool
    constexpr std::ptrdiff_t m_iUseRandomTime = 0x548; // int32_t
    constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x54C; // bool
    constexpr std::ptrdiff_t m_flLowerRandomBound = 0x550; // float
    constexpr std::ptrdiff_t m_flUpperRandomBound = 0x554; // float
    constexpr std::ptrdiff_t m_flRemainingTime = 0x558; // float
    constexpr std::ptrdiff_t m_bPaused = 0x55C; // bool
}

namespace CTonemapController2 { // CBaseEntity
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4C0; // float
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4C4; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x4C8; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x4CC; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x4D0; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4D4; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4D8; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4DC; // float
}

namespace CTonemapController2Alias_env_tonemap_controller2 { // CTonemapController2
}

namespace CTonemapTrigger { // CBaseTrigger
    constexpr std::ptrdiff_t m_tonemapControllerName = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTonemapController = 0x8C0; // CEntityHandle
}

namespace CTouchExpansionComponent { // CEntityComponent
}

namespace CTriggerActiveWeaponDetect { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x8B8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszWeaponClassName = 0x8E0; // CUtlSymbolLarge
}

namespace CTriggerBombReset { // CBaseTrigger
}

namespace CTriggerBrush { // CBaseModelEntity
    constexpr std::ptrdiff_t m_OnStartTouch = 0x710; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0x738; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUse = 0x760; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInputFilter = 0x788; // int32_t
    constexpr std::ptrdiff_t m_iDontMessageParent = 0x78C; // int32_t
}

namespace CTriggerBuoyancy { // CBaseTrigger
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x8B8; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0x8D8; // float
}

namespace CTriggerCallback { // CBaseTrigger
}

namespace CTriggerDetectBulletFire { // CBaseTrigger
    constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x8B8; // bool
    constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x8C0; // CEntityIOOutput
}

namespace CTriggerDetectExplosion { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x8F0; // CEntityIOOutput
}

namespace CTriggerFan { // CBaseTrigger
    constexpr std::ptrdiff_t m_vFanOrigin = 0x8B8; // Vector
    constexpr std::ptrdiff_t m_vFanEnd = 0x8C4; // Vector
    constexpr std::ptrdiff_t m_vNoise = 0x8D0; // Vector
    constexpr std::ptrdiff_t m_flForce = 0x8DC; // float
    constexpr std::ptrdiff_t m_flRopeForceScale = 0x8E0; // float
    constexpr std::ptrdiff_t m_flPlayerForce = 0x8E4; // float
    constexpr std::ptrdiff_t m_flRampTime = 0x8E8; // float
    constexpr std::ptrdiff_t m_bFalloff = 0x8EC; // bool
    constexpr std::ptrdiff_t m_bPushPlayer = 0x8ED; // bool
    constexpr std::ptrdiff_t m_bRampDown = 0x8EE; // bool
    constexpr std::ptrdiff_t m_bAddNoise = 0x8EF; // bool
    constexpr std::ptrdiff_t m_RampTimer = 0x8F0; // CountdownTimer
}

namespace CTriggerGameEvent { // CBaseTrigger
    constexpr std::ptrdiff_t m_strStartTouchEventName = 0x8B8; // CUtlString
    constexpr std::ptrdiff_t m_strEndTouchEventName = 0x8C0; // CUtlString
    constexpr std::ptrdiff_t m_strTriggerID = 0x8C8; // CUtlString
}

namespace CTriggerGravity { // CBaseTrigger
}

namespace CTriggerHostageReset { // CBaseTrigger
}

namespace CTriggerHurt { // CBaseTrigger
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x8B8; // float
    constexpr std::ptrdiff_t m_flDamage = 0x8BC; // float
    constexpr std::ptrdiff_t m_flDamageCap = 0x8C0; // float
    constexpr std::ptrdiff_t m_flLastDmgTime = 0x8C4; // GameTime_t
    constexpr std::ptrdiff_t m_flForgivenessDelay = 0x8C8; // float
    constexpr std::ptrdiff_t m_bitsDamageInflict = 0x8CC; // int32_t
    constexpr std::ptrdiff_t m_damageModel = 0x8D0; // int32_t
    constexpr std::ptrdiff_t m_bNoDmgForce = 0x8D4; // bool
    constexpr std::ptrdiff_t m_vDamageForce = 0x8D8; // Vector
    constexpr std::ptrdiff_t m_thinkAlways = 0x8E4; // bool
    constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x8E8; // float
    constexpr std::ptrdiff_t m_OnHurt = 0x8F0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHurtPlayer = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hurtEntities = 0x940; // CUtlVector<CHandle<CBaseEntity>>
}

namespace CTriggerHurtGhost { // CTriggerHurt
}

namespace CTriggerImpact { // CTriggerMultiple
    constexpr std::ptrdiff_t m_flMagnitude = 0x8E0; // float
    constexpr std::ptrdiff_t m_flNoise = 0x8E4; // float
    constexpr std::ptrdiff_t m_flViewkick = 0x8E8; // float
    constexpr std::ptrdiff_t m_pOutputForce = 0x8F0; // CEntityOutputTemplate<Vector>
}

namespace CTriggerLerpObject { // CBaseTrigger
    constexpr std::ptrdiff_t m_iszLerpTarget = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTarget = 0x8C0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x8C8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x8D0; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flLerpDuration = 0x8D4; // float
    constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x8D8; // bool
    constexpr std::ptrdiff_t m_bSingleLerpObject = 0x8D9; // bool
    constexpr std::ptrdiff_t m_vecLerpingObjects = 0x8E0; // CUtlVector<lerpdata_t>
    constexpr std::ptrdiff_t m_iszLerpEffect = 0x8F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLerpSound = 0x900; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x908; // bool
    constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x90C; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_OnLerpStarted = 0x910; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLerpFinished = 0x938; // CEntityIOOutput
}

namespace CTriggerLook { // CTriggerOnce
    constexpr std::ptrdiff_t m_hLookTarget = 0x8E0; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_flFieldOfView = 0x8E4; // float
    constexpr std::ptrdiff_t m_flLookTime = 0x8E8; // float
    constexpr std::ptrdiff_t m_flLookTimeTotal = 0x8EC; // float
    constexpr std::ptrdiff_t m_flLookTimeLast = 0x8F0; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeoutDuration = 0x8F4; // float
    constexpr std::ptrdiff_t m_bTimeoutFired = 0x8F8; // bool
    constexpr std::ptrdiff_t m_bIsLooking = 0x8F9; // bool
    constexpr std::ptrdiff_t m_b2DFOV = 0x8FA; // bool
    constexpr std::ptrdiff_t m_bUseVelocity = 0x8FB; // bool
    constexpr std::ptrdiff_t m_hActivator = 0x8FC; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_bTestOcclusion = 0x900; // bool
    constexpr std::ptrdiff_t m_OnTimeout = 0x908; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartLook = 0x930; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndLook = 0x958; // CEntityIOOutput
}

namespace CTriggerMultiple { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnTrigger = 0x8B8; // CEntityIOOutput
}

namespace CTriggerOnce { // CTriggerMultiple
}

namespace CTriggerPhysics { // CBaseTrigger
    constexpr std::ptrdiff_t m_gravityScale = 0x8C8; // float
    constexpr std::ptrdiff_t m_linearLimit = 0x8CC; // float
    constexpr std::ptrdiff_t m_linearDamping = 0x8D0; // float
    constexpr std::ptrdiff_t m_angularLimit = 0x8D4; // float
    constexpr std::ptrdiff_t m_angularDamping = 0x8D8; // float
    constexpr std::ptrdiff_t m_linearForce = 0x8DC; // float
    constexpr std::ptrdiff_t m_flFrequency = 0x8E0; // float
    constexpr std::ptrdiff_t m_flDampingRatio = 0x8E4; // float
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8E8; // Vector
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x8F4; // bool
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x8F8; // Vector
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x904; // Vector
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x910; // bool
}

namespace CTriggerProximity { // CBaseTrigger
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x8B8; // CHandle<CBaseEntity>
    constexpr std::ptrdiff_t m_iszMeasureTarget = 0x8C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fRadius = 0x8C8; // float
    constexpr std::ptrdiff_t m_nTouchers = 0x8CC; // int32_t
    constexpr std::ptrdiff_t m_NearestEntityDistance = 0x8D0; // CEntityOutputTemplate<float>
}

namespace CTriggerPush { // CBaseTrigger
    constexpr std::ptrdiff_t m_angPushEntitySpace = 0x8B8; // QAngle
    constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x8C4; // Vector
    constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x8D0; // bool
}

namespace CTriggerRemove { // CBaseTrigger
    constexpr std::ptrdiff_t m_OnRemove = 0x8B8; // CEntityIOOutput
}

namespace CTriggerSave { // CBaseTrigger
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x8B8; // bool
    constexpr std::ptrdiff_t m_fDangerousTimer = 0x8BC; // float
    constexpr std::ptrdiff_t m_minHitPoints = 0x8C0; // int32_t
}

namespace CTriggerSndSosOpvar { // CBaseTrigger
    constexpr std::ptrdiff_t m_hTouchingPlayers = 0x8B8; // CUtlVector<CHandle<CBaseEntity>>
    constexpr std::ptrdiff_t m_flPosition = 0x8D0; // Vector
    constexpr std::ptrdiff_t m_flCenterSize = 0x8DC; // float
    constexpr std::ptrdiff_t m_flMinVal = 0x8E0; // float
    constexpr std::ptrdiff_t m_flMaxVal = 0x8E4; // float
    constexpr std::ptrdiff_t m_flWait = 0x8E8; // float
    constexpr std::ptrdiff_t m_opvarName = 0x8F0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_stackName = 0x8F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_operatorName = 0x900; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bVolIs2D = 0x908; // bool
    constexpr std::ptrdiff_t m_opvarNameChar = 0x909; // char[256]
    constexpr std::ptrdiff_t m_stackNameChar = 0xA09; // char[256]
    constexpr std::ptrdiff_t m_operatorNameChar = 0xB09; // char[256]
    constexpr std::ptrdiff_t m_VecNormPos = 0xC0C; // Vector
    constexpr std::ptrdiff_t m_flNormCenterSize = 0xC18; // float
}

namespace CTriggerSoundscape { // CBaseTrigger
    constexpr std::ptrdiff_t m_hSoundscape = 0x8B8; // CHandle<CEnvSoundscapeTriggerable>
    constexpr std::ptrdiff_t m_SoundscapeName = 0x8C0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_spectators = 0x8C8; // CUtlVector<CHandle<CBasePlayerPawn>>
}

namespace CTriggerTeleport { // CBaseTrigger
    constexpr std::ptrdiff_t m_iLandmark = 0x8B8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x8C0; // bool
    constexpr std::ptrdiff_t m_bMirrorPlayer = 0x8C1; // bool
}

namespace CTriggerToggleSave { // CBaseTrigger
    constexpr std::ptrdiff_t m_bDisabled = 0x8B8; // bool
}

namespace CTriggerTripWire { // CBaseTrigger
}

namespace CTriggerVolume { // CBaseModelEntity
    constexpr std::ptrdiff_t m_iFilterName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x718; // CHandle<CBaseFilter>
}

namespace CTripWireFire { // CBaseCSGrenade
}

namespace CTripWireFireProjectile { // CBaseGrenade
}

namespace CVoteController { // CBaseEntity
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4C4; // int32_t
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4C8; // int32_t[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x4DC; // int32_t
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4E0; // bool
    constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4E8; // CountdownTimer
    constexpr std::ptrdiff_t m_executeCommandTimer = 0x500; // CountdownTimer
    constexpr std::ptrdiff_t m_resetVoteTimer = 0x518; // CountdownTimer
    constexpr std::ptrdiff_t m_nVotesCast = 0x530; // int32_t[64]
    constexpr std::ptrdiff_t m_playerHoldingVote = 0x630; // CPlayerSlot
    constexpr std::ptrdiff_t m_playerOverrideForVote = 0x634; // CPlayerSlot
    constexpr std::ptrdiff_t m_nHighestCountIndex = 0x638; // int32_t
    constexpr std::ptrdiff_t m_potentialIssues = 0x640; // CUtlVector<CBaseIssue*>
    constexpr std::ptrdiff_t m_VoteOptions = 0x658; // CUtlVector<char*>
}

namespace CWaterBullet { // CBaseAnimGraph
}

namespace CWeaponAWP { // CCSWeaponBaseGun
}

namespace CWeaponAug { // CCSWeaponBaseGun
}

namespace CWeaponBaseItem { // CCSWeaponBase
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0xE90; // CountdownTimer
    constexpr std::ptrdiff_t m_bRedraw = 0xEA8; // bool
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
    constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0xEB0; // float
    constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0xEB4; // GameTime_t
    constexpr std::ptrdiff_t m_flDisplayHealth = 0xEB8; // float
}

namespace CWeaponTaser { // CCSWeaponBaseGun
    constexpr std::ptrdiff_t m_fFireTime = 0xEB0; // GameTime_t
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
    constexpr std::ptrdiff_t m_iDamageType = 0x518; // int32_t
}

namespace FilterHealth { // CBaseFilter
    constexpr std::ptrdiff_t m_bAdrenalineActive = 0x518; // bool
    constexpr std::ptrdiff_t m_iHealthMin = 0x51C; // int32_t
    constexpr std::ptrdiff_t m_iHealthMax = 0x520; // int32_t
}

namespace FilterTeam { // CBaseFilter
    constexpr std::ptrdiff_t m_iFilterTeam = 0x518; // int32_t
}

namespace GameAmmoTypeInfo_t { // AmmoTypeInfo_t
    constexpr std::ptrdiff_t m_nBuySize = 0x38; // int32_t
    constexpr std::ptrdiff_t m_nCost = 0x3C; // int32_t
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
    constexpr std::ptrdiff_t m_pFollowup = 0x18; // ResponseFollowup*
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
    constexpr std::ptrdiff_t m_iPriority = 0x4C0; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x4C4; // bool
    constexpr std::ptrdiff_t m_nType = 0x4C8; // int32_t
}

namespace SpawnPointCoopEnemy { // SpawnPoint
    constexpr std::ptrdiff_t m_szWeaponsToGive = 0x4D0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szPlayerModelToUse = 0x4D8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nArmorToSpawnWith = 0x4E0; // int32_t
    constexpr std::ptrdiff_t m_nDefaultBehavior = 0x4E4; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    constexpr std::ptrdiff_t m_nBotDifficulty = 0x4E8; // int32_t
    constexpr std::ptrdiff_t m_bIsAgressive = 0x4EC; // bool
    constexpr std::ptrdiff_t m_bStartAsleep = 0x4ED; // bool
    constexpr std::ptrdiff_t m_flHideRadius = 0x4F0; // float
    constexpr std::ptrdiff_t m_szBehaviorTreeFile = 0x500; // CUtlSymbolLarge
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
    constexpr std::ptrdiff_t m_hFn = 0x8; // HSCRIPT
    constexpr std::ptrdiff_t m_nContext = 0x10; // CUtlStringToken
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x14; // GameTick_t
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x18; // GameTick_t
}