// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-21 05:02:55.957173600 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 156
        // Enum count: 5
        namespace server_dll {
            // Alignment: 4
            // Member count: 4
            enum class CFuncMover__TransitionToPathNodeAction_t : uint32_t {
                TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
                TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
                TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
                TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
            };
            // Alignment: 4
            // Member count: 9
            enum class CFuncMover__OrientationUpdate_t : uint32_t {
                ORIENTATION_FORWARD_PATH = 0x0,
                ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
                ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
                ORIENTATION_MATCH_CONTROL_POINT = 0x3,
                ORIENTATION_FIXED = 0x4,
                ORIENTATION_FACE_PLAYER = 0x5,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
                ORIENTATION_FACE_ENTITY = 0x8
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            namespace CDestructiblePart {
                constexpr std::ptrdiff_t m_DebugName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nHitGroup = 0x8; // HitGroup_t
                constexpr std::ptrdiff_t m_bDisableHitGroupWhenDestroyed = 0xC; // bool
                constexpr std::ptrdiff_t m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0x10; // CUtlVector<HitGroup_t>
                constexpr std::ptrdiff_t m_bOnlyDestroyWhenGibbing = 0x28; // bool
                constexpr std::ptrdiff_t m_sBodyGroupName = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_DamageLevels = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventQueueListener {
            }
            // Parent: Relationship_t
            // Field count: 2
            namespace RelationshipOverride_t {
                constexpr std::ptrdiff_t entity = 0x8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t classType = 0xC; // Class_T
            }
            // Parent: None
            // Field count: 2
            namespace AutoRoomDoorwayPairs_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRemapFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 3
            namespace CHintMessage {
                constexpr std::ptrdiff_t m_hintString = 0x0; // char*
                constexpr std::ptrdiff_t m_args = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_duration = 0x20; // float32
            }
            // Parent: None
            // Field count: 7
            namespace ParticleNode_t {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iIndex = 0x4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_flGrowthDuration = 0xC; // float32
                constexpr std::ptrdiff_t m_vecGrowthOrigin = 0x10; // Vector
                constexpr std::ptrdiff_t m_flEndcapTime = 0x1C; // float32
                constexpr std::ptrdiff_t m_bMarkedForDelete = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            namespace CFootstepTableHandle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDecalGroupVData {
                constexpr std::ptrdiff_t m_vecOptions = 0x0; // CUtlVector<DecalGroupOption_t>
                constexpr std::ptrdiff_t m_flTotalProbability = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmSnapWeaponTask {
            }
            // Parent: None
            // Field count: 1
            namespace CPlayerControllerComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 1
            namespace CResponseQueue {
                constexpr std::ptrdiff_t m_ExpresserTargets = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Field count: 2
            namespace CScriptUniformRandomStream {
                constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32
            }
            // Parent: None
            // Field count: 6
            namespace lerpdata_t {
                constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_MoveType = 0x4; // MoveType_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_vecStartOrigin = 0xC; // Vector
                constexpr std::ptrdiff_t m_qStartRot = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_nFXIndex = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 0
            namespace WrappedPhysicsJoint_t {
            }
            // Parent: None
            // Field count: 3
            namespace SimpleConstraintSoundProfile {
                constexpr std::ptrdiff_t eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                constexpr std::ptrdiff_t m_keyPoints = 0xC; // float32[2]
                constexpr std::ptrdiff_t m_reversalSoundThresholds = 0x14; // float32[3]
            }
            // Parent: None
            // Field count: 2
            namespace CSimpleSimTimer {
                constexpr std::ptrdiff_t m_flNext = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysicsBodyGameMarkupData {
                constexpr std::ptrdiff_t m_PhysicsBodyMarkupByBoneName = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkillDamage {
                constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_flNPCDamageScalarVsNPC = 0x10; // float32
                constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventListenerBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumer {
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkViewOffsetVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            namespace AmmoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePartsSystemData {
                constexpr std::ptrdiff_t m_PartsDataByHitGroup = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                constexpr std::ptrdiff_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x28; // CRangeInt
            }
            // Parent: None
            // Field count: 2
            namespace CRopeOverlapHit {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 3
            namespace ResponseContext_t {
                constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CNavVolumeSphericalShell {
                constexpr std::ptrdiff_t m_flRadiusInner = 0x88; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CPlayerPawnComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            namespace CCSGOPlayerAnimGraphState {
            }
            // Parent: None
            // Field count: 24
            namespace CDecalInstance {
                constexpr std::ptrdiff_t m_sDecalGroup = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hMaterial = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_hEntity = 0x14; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nBoneIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_nTriangleIndex = 0x1C; // int32
                constexpr std::ptrdiff_t m_vPositionLS = 0x20; // Vector
                constexpr std::ptrdiff_t m_vNormalLS = 0x2C; // Vector
                constexpr std::ptrdiff_t m_vSAxisLS = 0x38; // Vector
                constexpr std::ptrdiff_t m_nFlags = 0x44; // DecalFlags_t
                constexpr std::ptrdiff_t m_Color = 0x48; // Color
                constexpr std::ptrdiff_t m_flWidth = 0x4C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x50; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x54; // float32
                constexpr std::ptrdiff_t m_flAnimationScale = 0x58; // float32
                constexpr std::ptrdiff_t m_flPlaceTime = 0x5C; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x60; // float32
                constexpr std::ptrdiff_t m_flFadeDuration = 0x64; // float32
                constexpr std::ptrdiff_t m_flLightingOriginOffset = 0x68; // float32
                constexpr std::ptrdiff_t m_flBoundingRadiusSqr = 0x78; // float32
                constexpr std::ptrdiff_t m_nSequenceIndex = 0x7C; // int16
                constexpr std::ptrdiff_t m_bIsAdjacent = 0x7E; // bool
                constexpr std::ptrdiff_t m_bDoDecalLightmapping = 0x7F; // bool
                constexpr std::ptrdiff_t m_nSkinnedModelMode = 0x80; // DecalMode_t
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveData {
                constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
                constexpr std::ptrdiff_t m_angAccumulatedRootMotionRotation = 0xC; // QAngle
                constexpr std::ptrdiff_t m_vSrc = 0x18; // VectorWS
                constexpr std::ptrdiff_t m_angSrc = 0x24; // QAngle
                constexpr std::ptrdiff_t m_angCurrent = 0x30; // QAngle
                constexpr std::ptrdiff_t m_flLockedSpeed = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x40; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x44; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bActive = 0x4C; // bool
                constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x4D; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x4E; // bool
                constexpr std::ptrdiff_t m_bSuccess = 0x4F; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x50; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x54; // bool
                constexpr std::ptrdiff_t m_vDest = 0x58; // Vector
                constexpr std::ptrdiff_t m_angDst = 0x64; // QAngle
                constexpr std::ptrdiff_t m_hDestEntity = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            namespace CSkeletonAnimationController {
                constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeMarkupVolume {
            }
            // Parent: None
            // Field count: 2
            namespace CResponseCriteriaSet {
                constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x30; // int32
                constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x34; // bool
            }
            // Parent: None
            // Field count: 11
            namespace CAI_Expresser {
                constexpr std::ptrdiff_t m_flStopTalkTime = 0x60; // GameTime_t
                constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_flQueuedSpeechTime = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_voicePitch = 0x70; // int32
                constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x78; // bool
                constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x79; // bool
                constexpr std::ptrdiff_t m_bSceneEntityDisabled = 0x7A; // bool
                constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x7C; // int32
                constexpr std::ptrdiff_t m_pOuter = 0x98; // CBaseFlex*
            }
            // Parent: None
            // Field count: 0
            namespace IChoreoServices {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerAttributes {
            }
            // Parent: CStopwatchBase
            // Field count: 1
            namespace CStopwatch {
                constexpr std::ptrdiff_t m_flInterval = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            namespace ResponseParams {
                constexpr std::ptrdiff_t odds = 0x10; // int16
                constexpr std::ptrdiff_t flags = 0x12; // int16
                constexpr std::ptrdiff_t m_pFollowup = 0x18; // ResponseFollowup*
            }
            // Parent: None
            // Field count: 8
            namespace ConstraintSoundInfo {
                constexpr std::ptrdiff_t m_vSampler = 0x8; // VelocitySampler
                constexpr std::ptrdiff_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
                constexpr std::ptrdiff_t m_forwardAxis = 0x40; // Vector
                constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSounds = 0x78; // CUtlSymbolLarge[3]
                constexpr std::ptrdiff_t m_bPlayTravelSound = 0x90; // bool
                constexpr std::ptrdiff_t m_bPlayReversalSound = 0x91; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysicsBodyGameMarkup {
                constexpr std::ptrdiff_t m_TargetBody = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Tag = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointCameraSettings_t {
                constexpr std::ptrdiff_t m_flNearBlurryDistance = 0x0; // float32
                constexpr std::ptrdiff_t m_flNearCrispDistance = 0x4; // float32
                constexpr std::ptrdiff_t m_flFarCrispDistance = 0x8; // float32
                constexpr std::ptrdiff_t m_flFarBlurryDistance = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CVectorMovingAverage {
            }
            // Parent: None
            // Field count: 4
            namespace CSoundEnvelope {
                constexpr std::ptrdiff_t m_current = 0x0; // float32
                constexpr std::ptrdiff_t m_target = 0x4; // float32
                constexpr std::ptrdiff_t m_rate = 0x8; // float32
                constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
            }
            // Parent: None
            // Field count: 25
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
            // Parent: CSimpleSimTimer
            // Field count: 1
            namespace CStopwatchBase {
                constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CNavVolumeVector {
                constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x80; // bool
            }
            // Parent: None
            // Field count: 2
            namespace NavGravity_t {
                constexpr std::ptrdiff_t m_vGravity = 0x0; // Vector
                constexpr std::ptrdiff_t m_bDefault = 0xC; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseScriptedSequenceData_t {
                constexpr std::ptrdiff_t m_nActorID = 0x0; // int32
                constexpr std::ptrdiff_t m_szPreIdleSequence = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_szEntrySequence = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_szSequence = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_szExitSequence = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nMoveTo = 0x28; // ScriptedMoveTo_t
                constexpr std::ptrdiff_t m_nMoveToGait = 0x2C; // SharedMovementGait_t
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x30; // ScriptedHeldWeaponBehavior_t
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x34; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x35; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x36; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x37; // bool
            }
            // Parent: None
            // Field count: 2
            namespace RotatorQueueEntry_t {
                constexpr std::ptrdiff_t qTarget = 0x0; // Quaternion
                constexpr std::ptrdiff_t eSpace = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Field count: 1
            namespace CPhysicsShake {
                constexpr std::ptrdiff_t m_force = 0x8; // Vector
            }
            // Parent: None
            // Field count: 3
            namespace VelocitySampler {
                constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
                constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float32
            }
            // Parent: None
            // Field count: 8
            namespace CTakeDamageResult {
                constexpr std::ptrdiff_t m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
                constexpr std::ptrdiff_t m_nHealthLost = 0x8; // int32
                constexpr std::ptrdiff_t m_nHealthBefore = 0xC; // int32
                constexpr std::ptrdiff_t m_nDamageDealt = 0x10; // int32
                constexpr std::ptrdiff_t m_flPreModifiedDamage = 0x14; // float32
                constexpr std::ptrdiff_t m_nTotalledHealthLost = 0x18; // int32
                constexpr std::ptrdiff_t m_nTotalledDamageDealt = 0x1C; // int32
                constexpr std::ptrdiff_t m_bWasDamageSuppressed = 0x20; // bool
            }
            // Parent: None
            // Field count: 19
            namespace CCS2WeaponGraphController {
                constexpr std::ptrdiff_t m_action = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_weaponCategory = 0xB8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0xD8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponExtraInfo = 0xF8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flWeaponAmmo = 0x118; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x160; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x178; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x190; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_deployVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_attackType = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_attackThrowStrength = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAttackVariation = 0x210; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectVariation = 0x228; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectExtraInfo = 0x240; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_reloadStage = 0x260; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 1
            namespace SceneEventId_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 10
            namespace CCommentarySystem {
                constexpr std::ptrdiff_t m_bCommentaryConvarsChanging = 0x11; // bool
                constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12; // bool
                constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14; // GameTime_t
                constexpr std::ptrdiff_t m_iTeleportStage = 0x18; // int32
                constexpr std::ptrdiff_t m_bCheatState = 0x1C; // bool
                constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
                constexpr std::ptrdiff_t m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Field count: 8
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
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32
                constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
                constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
                constexpr std::ptrdiff_t m_flMass = 0x28; // float32
                constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavLinkAnimgraphVar {
                constexpr std::ptrdiff_t m_sAnimGraphNavlinkType = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8; // uint32
            }
            // Parent: None
            // Field count: 1
            namespace CNetworkTransmitComponent {
                constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x184; // uint8
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavLinkMovementVData {
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bIsInterpolated = 0xE0; // bool
                constexpr std::ptrdiff_t m_unRecommendedDistance = 0xE4; // uint32
                constexpr std::ptrdiff_t m_vecAnimgraphVars = 0xE8; // CUtlVector<CNavLinkAnimgraphVar>
            }
            // Parent: None
            // Field count: 4
            namespace CChicken_GraphController {
                constexpr std::ptrdiff_t m_paramActivity = 0x268; // CAnimGraphParamRef<char*>
                constexpr std::ptrdiff_t m_paramEndActivityImmediately = 0x290; // CAnimGraphParamRef<bool>
                constexpr std::ptrdiff_t m_sActivityFinished = 0x2B0; // CAnimGraphTagRef
                constexpr std::ptrdiff_t m_paramTurnAngle = 0x2C8; // CAnimGraphParamRef<float32>
            }
            // Parent: None
            // Field count: 5
            namespace CPathQueryUtil {
                constexpr std::ptrdiff_t m_PathToEntityTransform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_vecPathSamplePositions = 0x30; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecPathSampleParameters = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPathSampleDistances = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bIsClosedLoop = 0x78; // bool
            }
            // Parent: None
            // Field count: 5
            namespace RagdollCreationParams_t {
                constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32
                constexpr std::ptrdiff_t m_bForceCurrentWorldTransform = 0x10; // bool
                constexpr std::ptrdiff_t m_bUseLRURetirement = 0x11; // bool
                constexpr std::ptrdiff_t m_nHealthToGrant = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 2
            namespace CWorldCompositionChunkReferenceElement_t {
                constexpr std::ptrdiff_t m_strMapToLoad = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_strLandmarkName = 0x8; // CUtlString
            }
            // Parent: CStopwatchBase
            // Field count: 2
            namespace CRandStopwatch {
                constexpr std::ptrdiff_t m_flMinInterval = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CMovementStatsProperty {
                constexpr std::ptrdiff_t m_nUseCounter = 0x10; // int32
                constexpr std::ptrdiff_t m_emaMovementDirection = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: None
            // Field count: 5
            namespace CGameChoreoServices {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
                constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
                constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            namespace CSimpleStopwatch {
            }
            // Parent: None
            // Field count: 28
            namespace CShatterGlassShard {
                constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
                constexpr std::ptrdiff_t m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
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
                constexpr std::ptrdiff_t m_nSubShardGeneration = 0x74; // int32
                constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x78; // Vector2D
                constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x80; // bool
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x84; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x8C; // Vector2D
                constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x94; // bool
                constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x95; // bool
                constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x96; // bool
                constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x98; // GameTime_t
                constexpr std::ptrdiff_t m_hEntityHittingMe = 0x9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecNeighbors = 0xA0; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            namespace ragdollelement_t {
                constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
                constexpr std::ptrdiff_t parentIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x24; // float32
                constexpr std::ptrdiff_t m_nHeight = 0x28; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveDef_t {
                constexpr std::ptrdiff_t m_vDestOffset = 0x0; // Vector
                constexpr std::ptrdiff_t m_hDestEntity = 0xC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angDest = 0x10; // QAngle
                constexpr std::ptrdiff_t m_flDuration = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x20; // float32
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x24; // float32
                constexpr std::ptrdiff_t m_bAimDisabled = 0x28; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x29; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x2C; // ForcedCrouchState_t
            }
            // Parent: None
            // Field count: 7
            namespace CNetworkOriginCellCoordQuantizedVector {
                constexpr std::ptrdiff_t m_cellX = 0x10; // uint16
                constexpr std::ptrdiff_t m_cellY = 0x12; // uint16
                constexpr std::ptrdiff_t m_cellZ = 0x14; // uint16
                constexpr std::ptrdiff_t m_nOutsideWorld = 0x16; // uint16
                constexpr std::ptrdiff_t m_vecX = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x20; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 8
            namespace DynamicVolumeDef_t {
                constexpr std::ptrdiff_t m_source = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_target = 0x4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nHullIdx = 0x8; // int32
                constexpr std::ptrdiff_t m_vSourceAnchorPos = 0xC; // Vector
                constexpr std::ptrdiff_t m_vTargetAnchorPos = 0x18; // Vector
                constexpr std::ptrdiff_t m_nAreaSrc = 0x24; // uint32
                constexpr std::ptrdiff_t m_nAreaDst = 0x28; // uint32
                constexpr std::ptrdiff_t m_bAttached = 0x2C; // bool
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkOriginQuantizedVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            namespace magnetted_objects_t {
                constexpr std::ptrdiff_t hEntity = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            namespace CHintMessageQueue {
                constexpr std::ptrdiff_t m_tmMessageEnd = 0x0; // float32
                constexpr std::ptrdiff_t m_messages = 0x8; // CUtlVector<CHintMessage*>
                constexpr std::ptrdiff_t m_pPlayerController = 0x20; // CBasePlayerController*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
            }
            // Parent: None
            // Field count: 4
            namespace thinkfunc_t {
                constexpr std::ptrdiff_t m_hFn = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nContext = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x14; // GameTick_t
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x18; // GameTick_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavHullPresetVData {
                constexpr std::ptrdiff_t m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WaterWheelFrictionScale_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flFrictionScale = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            namespace ragdollhierarchyjoint_t {
                constexpr std::ptrdiff_t parentIndex = 0x0; // int32
                constexpr std::ptrdiff_t childIndex = 0x4; // int32
            }
            // Parent: None
            // Field count: 13
            namespace CSceneEventInfo {
                constexpr std::ptrdiff_t m_iLayer = 0x0; // int32
                constexpr std::ptrdiff_t m_iPriority = 0x4; // int32
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flWeight = 0xC; // float32
                constexpr std::ptrdiff_t m_bHasArrived = 0x10; // bool
                constexpr std::ptrdiff_t m_nType = 0x14; // int32
                constexpr std::ptrdiff_t m_flNext = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_bIsGesture = 0x1C; // bool
                constexpr std::ptrdiff_t m_bShouldRemove = 0x1D; // bool
                constexpr std::ptrdiff_t m_hTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSceneEventId = 0x48; // SceneEventId_t
                constexpr std::ptrdiff_t m_bClientSide = 0x4C; // bool
                constexpr std::ptrdiff_t m_bStarted = 0x4D; // bool
            }
            // Parent: None
            // Field count: 5
            namespace SoundeventPathCornerPairNetworked_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
                constexpr std::ptrdiff_t flPathLengthSqr = 0x18; // float32
                constexpr std::ptrdiff_t flP1Pct = 0x1C; // float32
                constexpr std::ptrdiff_t flP2Pct = 0x20; // float32
            }
            // Parent: None
            // Field count: 13
            namespace CSoundPatch {
                constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
                constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
                constexpr std::ptrdiff_t m_shutdownTime = 0x3C; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x40; // float32
                constexpr std::ptrdiff_t m_iszSoundScriptName = 0x48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEnt = 0x50; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundEntityIndex = 0x54; // CEntityIndex
                constexpr std::ptrdiff_t m_soundOrigin = 0x58; // Vector
                constexpr std::ptrdiff_t m_isPlaying = 0x64; // int32
                constexpr std::ptrdiff_t m_Filter = 0x68; // CCopyRecipientFilter
                constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0x98; // float32
                constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0x9C; // bool
                constexpr std::ptrdiff_t m_iszClassName = 0xA0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 10
            namespace CCS2ChickenGraphController {
                constexpr std::ptrdiff_t m_action = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_actionSubtype = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xC0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_runVariation = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_panicVariation = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_squatVariation = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bInWater = 0x138; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHasActionCompletedEvent = 0x150; // bool
                constexpr std::ptrdiff_t m_bWaitingForCompletedEvent = 0x151; // bool
            }
            // Parent: None
            // Field count: 3
            namespace locksound_t {
                constexpr std::ptrdiff_t sLockedSound = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t sUnlockedSound = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flwaitSound = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DecalGroupOption_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flProbability = 0x10; // float32
                constexpr std::ptrdiff_t m_bEnableAngleBetweenNormalAndGravityRange = 0x14; // bool
                constexpr std::ptrdiff_t m_flMinAngleBetweenNormalAndGravity = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxAngleBetweenNormalAndGravity = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBtNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeFloat {
                constexpr std::ptrdiff_t m_flValues = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 2
            namespace CCopyRecipientFilter {
                constexpr std::ptrdiff_t m_Flags = 0x8; // int32
                constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
            }
            // Parent: None
            // Field count: 0
            namespace CFloatMovingAverage {
            }
            // Parent: None
            // Field count: 5
            namespace CSmoothFunc {
                constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float32
                constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float32
                constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float32
                constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32
            }
            // Parent: None
            // Field count: 0
            namespace IHasAttributes {
            }
            // Parent: None
            // Field count: 5
            namespace ragdoll_t {
                constexpr std::ptrdiff_t list = 0x0; // CUtlVector<ragdollelement_t>
                constexpr std::ptrdiff_t hierarchyJoints = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                constexpr std::ptrdiff_t boneIndex = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t allowStretch = 0x48; // bool
                constexpr std::ptrdiff_t unused = 0x49; // bool
            }
            // Parent: None
            // Field count: 10
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
            // Parent: None
            // Field count: 0
            namespace ISkeletonAnimationController {
            }
            // Parent: None
            // Field count: 2
            namespace RotatorHistoryEntry_t {
                constexpr std::ptrdiff_t qInvChange = 0x0; // Quaternion
                constexpr std::ptrdiff_t flTimeRotationStart = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GameAmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nBuySize = 0x38; // int32
                constexpr std::ptrdiff_t m_nCost = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            namespace CMotorController {
                constexpr std::ptrdiff_t m_speed = 0x8; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0xC; // float32
                constexpr std::ptrdiff_t m_axis = 0x10; // VectorWS
                constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            namespace CSimTimer {
                constexpr std::ptrdiff_t m_flInterval = 0x8; // float32
            }
            // Parent: None
            // Field count: 6
            namespace CBaseIssue {
                constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
                constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[260]
                constexpr std::ptrdiff_t m_iNumYesVotes = 0x164; // int32
                constexpr std::ptrdiff_t m_iNumNoVotes = 0x168; // int32
                constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x16C; // int32
                constexpr std::ptrdiff_t m_pVoteController = 0x170; // CVoteController*
            }
            // Parent: None
            // Field count: 4
            namespace SummaryTakeDamageInfo_t {
                constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32
                constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
                constexpr std::ptrdiff_t result = 0x130; // CTakeDamageResult
                constexpr std::ptrdiff_t hTarget = 0x158; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            namespace DestructibleHitGroupToDestroy_t {
                constexpr std::ptrdiff_t m_nHitGroup = 0x0; // HitGroup_t
                constexpr std::ptrdiff_t m_nMaxDamageLevel = 0x4; // int32
            }
            // Parent: None
            // Field count: 10
            namespace CRR_Response {
                constexpr std::ptrdiff_t m_Type = 0x0; // uint8
                constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
                constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
                constexpr std::ptrdiff_t m_Params = 0x160; // ResponseParams
                constexpr std::ptrdiff_t m_fMatchScore = 0x180; // float32
                constexpr std::ptrdiff_t m_bAnyMatchingRulesInCooldown = 0x184; // bool
                constexpr std::ptrdiff_t m_szSpeakerContext = 0x188; // char*
                constexpr std::ptrdiff_t m_szWorldContext = 0x190; // char*
                constexpr std::ptrdiff_t m_Followup = 0x198; // ResponseFollowup
                constexpr std::ptrdiff_t m_recipientFilter = 0x1CA; // CUtlSymbol
            }
            // Parent: None
            // Field count: 0
            namespace CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmAimCSNode__CDefinition {
                constexpr std::ptrdiff_t m_nVerticalAngleNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nHorizontalAngleNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x1C; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x20; // float32
            }
            // Parent: None
            // Field count: 4
            namespace CConstantForceController {
                constexpr std::ptrdiff_t m_linear = 0xC; // Vector
                constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
                constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
                constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WaterWheelDrag_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flWheelDrag = 0x4; // float32
            }
            // Parent: None
            // Field count: 22
            namespace CTakeDamageInfo {
                constexpr std::ptrdiff_t m_vecDamageForce = 0x8; // Vector
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_vecReportedPosition = 0x20; // VectorWS
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_hInflictor = 0x38; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAttacker = 0x3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAbility = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDamage = 0x44; // float32
                constexpr std::ptrdiff_t m_flTotalledDamage = 0x48; // float32
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4C; // DamageTypes_t
                constexpr std::ptrdiff_t m_iDamageCustom = 0x50; // int32
                constexpr std::ptrdiff_t m_iAmmoType = 0x54; // AmmoIndex_t
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_bShouldBleed = 0x64; // bool
                constexpr std::ptrdiff_t m_bShouldSpark = 0x65; // bool
                constexpr std::ptrdiff_t m_nDamageFlags = 0x70; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_sDamageSourceName = 0x78; // CGlobalSymbol
                constexpr std::ptrdiff_t m_iHitGroupId = 0x80; // HitGroup_t
                constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x84; // int32
                constexpr std::ptrdiff_t m_flFriendlyFireDamageReductionRatio = 0x88; // float32
                constexpr std::ptrdiff_t m_nDestructibleHitGroupsToForceDestroy = 0x108; // CUtlVector<DestructibleHitGroupToDestroy_t>
                constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x120; // bool
            }
            // Parent: CSimpleSimTimer
            // Field count: 2
            namespace CRandSimTimer {
                constexpr std::ptrdiff_t m_flMinInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBtNodeComposite {
            }
            // Parent: None
            // Field count: 4
            namespace CRelativeLocation {
                constexpr std::ptrdiff_t m_Type = 0x18; // RelativeLocationType_t
                constexpr std::ptrdiff_t m_vRelativeOffset = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vWorldSpacePos = 0x28; // VectorWS
                constexpr std::ptrdiff_t m_hEntity = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            namespace Extent {
                constexpr std::ptrdiff_t lo = 0x0; // VectorWS
                constexpr std::ptrdiff_t hi = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 5
            namespace sndopvarlatchdata_t {
                constexpr std::ptrdiff_t m_iszStack = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperator = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvar = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flVal = 0x20; // float32
                constexpr std::ptrdiff_t m_vPos = 0x24; // Vector
            }
            // Parent: None
            // Field count: 0
            namespace IEconItemInterface {
            }
            // Parent: None
            // Field count: 1
            namespace CMultiplayer_Expresser {
                constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0xA0; // bool
            }
            // Parent: None
            // Field count: 15
            namespace CBaseAnimGraphAnimGraphController {
                constexpr std::ptrdiff_t m_sDestructiblePartDestroyedHitGroup = 0x80; // CAnimGraphParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nDestructiblePartDestroyedPartIndex = 0xA8; // CAnimGraphParamOptionalRef<int32>
                constexpr std::ptrdiff_t m_bHITGROUP_INVALID_Destroyed = 0xC8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_GENERIC_Destroyed = 0xE8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_HEAD_Destroyed = 0x108; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_CHEST_Destroyed = 0x128; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_STOMACH_Destroyed = 0x148; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_LEFTARM_Destroyed = 0x168; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_RIGHTARM_Destroyed = 0x188; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_LEFTLEG_Destroyed = 0x1A8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_RIGHTLEG_Destroyed = 0x1C8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_NECK_Destroyed = 0x1E8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_UNUSED_Destroyed = 0x208; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_GEAR_Destroyed = 0x228; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_SPECIAL_Destroyed = 0x248; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolume {
            }
            // Parent: None
            // Field count: 0
            namespace QuestProgress {
            }
            // Parent: None
            // Field count: 0
            namespace CNmAimCSTask {
            }
            // Parent: None
            // Field count: 1
            namespace ParticleIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Field count: 1
            namespace CTakeDamageSummaryScopeGuard {
                constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Field count: 4
            namespace CIronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerSound {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerLegacy {
            }
            // Parent: None
            // Field count: 1
            namespace CInButtonState {
                constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64[3]
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30; // uint16
                constexpr std::ptrdiff_t unSlot = 0x32; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerParticle {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavHullVData {
                constexpr std::ptrdiff_t m_bAgentEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_agentRadius = 0x4; // float32
                constexpr std::ptrdiff_t m_agentHeight = 0x8; // float32
                constexpr std::ptrdiff_t m_agentShortHeightEnabled = 0xC; // bool
                constexpr std::ptrdiff_t m_agentShortHeight = 0x10; // float32
                constexpr std::ptrdiff_t m_agentCrawlEnabled = 0x14; // bool
                constexpr std::ptrdiff_t m_agentCrawlHeight = 0x18; // float32
                constexpr std::ptrdiff_t m_agentMaxClimb = 0x1C; // float32
                constexpr std::ptrdiff_t m_agentMaxSlope = 0x20; // int32
                constexpr std::ptrdiff_t m_agentMaxJumpDownDist = 0x24; // float32
                constexpr std::ptrdiff_t m_agentMaxJumpHorizDistBase = 0x28; // float32
                constexpr std::ptrdiff_t m_agentMaxJumpUpDist = 0x2C; // float32
                constexpr std::ptrdiff_t m_agentBorderErosion = 0x30; // int32
                constexpr std::ptrdiff_t m_flowMapGenerationEnabled = 0x34; // bool
                constexpr std::ptrdiff_t m_flowMapNodeMaxRadius = 0x38; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSnapWeaponNode__CDefinition {
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nLockLeftHandNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x1C; // float32
            }
            // Parent: None
            // Field count: 3
            namespace SoundOpvarTraceResult_t {
                constexpr std::ptrdiff_t vPos = 0x0; // Vector
                constexpr std::ptrdiff_t bDidHit = 0xC; // bool
                constexpr std::ptrdiff_t flDistSqrToCenter = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventListener {
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeInt {
                constexpr std::ptrdiff_t m_nValues = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 0
            namespace CBtNodeDecorator {
            }
            // Parent: None
            // Field count: 6
            namespace CSAdditionalPerRoundStats_t {
                constexpr std::ptrdiff_t m_numChickensKilled = 0x0; // int32
                constexpr std::ptrdiff_t m_killsWhileBlind = 0x4; // int32
                constexpr std::ptrdiff_t m_bombCarrierkills = 0x8; // int32
                constexpr std::ptrdiff_t m_flBurnDamageInflicted = 0xC; // float32
                constexpr std::ptrdiff_t m_flBlastDamageInflicted = 0x10; // float32
                constexpr std::ptrdiff_t m_iDinks = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            namespace ModelConfigHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            namespace CEntitySubclassVDataBase {
            }
            // Parent: None
            // Field count: 2
            namespace CBreakableStageHelper {
                constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32
                constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            namespace CNavVolumeBreadthFirstSearch {
                constexpr std::ptrdiff_t m_vStartPos = 0xA8; // Vector
                constexpr std::ptrdiff_t m_flSearchDist = 0xB4; // float32
            }
            // Parent: dynpitchvol_base_t
            // Field count: 0
            namespace dynpitchvol_t {
            }
            // Parent: None
            // Field count: 12
            namespace CSAdditionalMatchStats_t {
                constexpr std::ptrdiff_t m_numRoundsSurvived = 0x18; // int32
                constexpr std::ptrdiff_t m_maxNumRoundsSurvived = 0x1C; // int32
                constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x20; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x24; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x28; // int32
                constexpr std::ptrdiff_t m_numFirstKills = 0x2C; // int32
                constexpr std::ptrdiff_t m_numClutchKills = 0x30; // int32
                constexpr std::ptrdiff_t m_numPistolKills = 0x34; // int32
                constexpr std::ptrdiff_t m_numSniperKills = 0x38; // int32
                constexpr std::ptrdiff_t m_iNumSuicides = 0x3C; // int32
                constexpr std::ptrdiff_t m_iNumTeamKills = 0x40; // int32
                constexpr std::ptrdiff_t m_flTeamDamage = 0x44; // float32
            }
            // Parent: None
            // Field count: 0
            namespace IRagdoll {
            }
            // Parent: None
            // Field count: 6
            namespace hudtextparms_t {
                constexpr std::ptrdiff_t color1 = 0x0; // Color
                constexpr std::ptrdiff_t color2 = 0x4; // Color
                constexpr std::ptrdiff_t effect = 0x8; // uint8
                constexpr std::ptrdiff_t channel = 0x9; // uint8
                constexpr std::ptrdiff_t x = 0xC; // float32
                constexpr std::ptrdiff_t y = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CAnimGraphControllerBase {
                constexpr std::ptrdiff_t m_vecParamsToResetInPostGraphUpdate = 0x28; // CUtlVectorFixedGrowable<CGlobalSymbol,8>
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkVelocityVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePart_DamageLevel {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sBreakablePieceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nBodyGroupValue = 0x10; // int32
                constexpr std::ptrdiff_t m_nHealth = 0x14; // CSkillInt
                constexpr std::ptrdiff_t m_flCriticalDamagePercent = 0x24; // float32
                constexpr std::ptrdiff_t m_nDamagePassthroughType = 0x28; // EDestructiblePartDamagePassThroughType
                constexpr std::ptrdiff_t m_nDestructionDeathBehavior = 0x2C; // DestructiblePartDestructionDeathBehavior_t
                constexpr std::ptrdiff_t m_sCustomDeathHandshake = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bShouldDestroyOnDeath = 0x38; // bool
                constexpr std::ptrdiff_t m_flDeathDestroyTime = 0x3C; // CRangeFloat
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeAll {
            }
            // Parent: None
            // Field count: 2
            namespace CNavVolumeSphere {
                constexpr std::ptrdiff_t m_vCenter = 0x78; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x84; // float32
            }
            // Parent: None
            // Field count: 2
            namespace Relationship_t {
                constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
                constexpr std::ptrdiff_t priority = 0x4; // int32
            }
        }
    }
}
