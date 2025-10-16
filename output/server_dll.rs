// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-16 04:15:22.003365600 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: server.dll
        // Class count: 156
        // Enum count: 91
        pub mod server_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CFuncMover__TransitionToPathNodeAction_t {
                TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
                TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
                TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
                TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
            }
            // Alignment: 4
            // Member count: 9
            #[repr(u32)]
            pub enum CFuncMover__OrientationUpdate_t {
                ORIENTATION_FORWARD_PATH = 0x0,
                ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
                ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
                ORIENTATION_MATCH_CONTROL_POINT = 0x3,
                ORIENTATION_FIXED = 0x4,
                ORIENTATION_FACE_PLAYER = 0x5,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
                ORIENTATION_FACE_ENTITY = 0x8
            }
            // Alignment: 4
            // Member count: 29
            #[repr(u32)]
            pub enum C_EconItemView {
                 = 0x0
            }
            // Alignment: 1
            // Member count: 36
            #[repr(u8)]
            pub enum CGameSceneNode {
                 = 0x0
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeFloat {
                pub const m_pValue: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            pub mod CDestructiblePart {
                pub const m_DebugName: usize = 0x0; // CGlobalSymbol
                pub const m_nHitGroup: usize = 0x8; // HitGroup_t
                pub const m_bDisableHitGroupWhenDestroyed: usize = 0xC; // bool
                pub const m_nOtherHitgroupsToDestroyWhenFullyDestructed: usize = 0x10; // CUtlVector<HitGroup_t>
                pub const m_bOnlyDestroyWhenGibbing: usize = 0x28; // bool
                pub const m_sBodyGroupName: usize = 0x30; // CGlobalSymbol
                pub const m_DamageLevels: usize = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimEventQueueListener {
            }
            // Parent: Relationship_t
            // Field count: 2
            pub mod RelationshipOverride_t {
                pub const entity: usize = 0x8; // CHandle<CBaseEntity>
                pub const classType: usize = 0xC; // Class_T
            }
            // Parent: None
            // Field count: 2
            pub mod AutoRoomDoorwayPairs_t {
                pub const vP1: usize = 0x0; // Vector
                pub const vP2: usize = 0xC; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRemapFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 3
            pub mod CHintMessage {
                pub const m_hintString: usize = 0x0; // char*
                pub const m_args: usize = 0x8; // CUtlVector<char*>
                pub const m_duration: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 7
            pub mod ParticleNode_t {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_iIndex: usize = 0x4; // ParticleIndex_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_flGrowthDuration: usize = 0xC; // float32
                pub const m_vecGrowthOrigin: usize = 0x10; // Vector
                pub const m_flEndcapTime: usize = 0x1C; // float32
                pub const m_bMarkedForDelete: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            pub mod CFootstepTableHandle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDecalGroupVData {
                pub const m_vecOptions: usize = 0x0; // CUtlVector<DecalGroupOption_t>
                pub const m_flTotalProbability: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CNmSnapWeaponTask {
            }
            // Parent: None
            // Field count: 1
            pub mod CPlayerControllerComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 1
            pub mod CResponseQueue {
                pub const m_ExpresserTargets: usize = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Field count: 2
            pub mod CScriptUniformRandomStream {
                pub const m_hScriptScope: usize = 0x8; // HSCRIPT
                pub const m_nInitialSeed: usize = 0x9C; // int32
            }
            // Parent: None
            // Field count: 6
            pub mod lerpdata_t {
                pub const m_hEnt: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_MoveType: usize = 0x4; // MoveType_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_vecStartOrigin: usize = 0xC; // Vector
                pub const m_qStartRot: usize = 0x20; // Quaternion
                pub const m_nFXIndex: usize = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 0
            pub mod WrappedPhysicsJoint_t {
            }
            // Parent: None
            // Field count: 3
            pub mod SimpleConstraintSoundProfile {
                pub const eKeypoints: usize = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                pub const m_keyPoints: usize = 0xC; // float32[2]
                pub const m_reversalSoundThresholds: usize = 0x14; // float32[3]
            }
            // Parent: None
            // Field count: 2
            pub mod CSimpleSimTimer {
                pub const m_flNext: usize = 0x0; // GameTime_t
                pub const m_nWorldGroupId: usize = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsBodyGameMarkupData {
                pub const m_PhysicsBodyMarkupByBoneName: usize = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkillDamage {
                pub const m_flDamage: usize = 0x0; // CSkillFloat
                pub const m_flNPCDamageScalarVsNPC: usize = 0x10; // float32
                pub const m_flPhysicsForceDamage: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimEventListenerBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumer {
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkViewOffsetVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            pub mod AmmoIndex_t {
                pub const m_Value: usize = 0x0; // int8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePartsSystemData {
                pub const m_PartsDataByHitGroup: usize = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                pub const m_nMinMaxNumberHitGroupsToDestroyWhenGibbing: usize = 0x28; // CRangeInt
            }
            // Parent: None
            // Field count: 2
            pub mod CRopeOverlapHit {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_vecOverlappingLinks: usize = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 3
            pub mod ResponseContext_t {
                pub const m_iszName: usize = 0x0; // CUtlSymbolLarge
                pub const m_iszValue: usize = 0x8; // CUtlSymbolLarge
                pub const m_fExpirationTime: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CNavVolumeSphericalShell {
                pub const m_flRadiusInner: usize = 0x88; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CPlayerPawnComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGOPlayerAnimGraphState {
            }
            // Parent: None
            // Field count: 24
            pub mod CDecalInstance {
                pub const m_sDecalGroup: usize = 0x0; // CGlobalSymbol
                pub const m_hMaterial: usize = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_sSequenceName: usize = 0x10; // CUtlStringToken
                pub const m_hEntity: usize = 0x14; // CHandle<CBaseEntity>
                pub const m_nBoneIndex: usize = 0x18; // int32
                pub const m_nTriangleIndex: usize = 0x1C; // int32
                pub const m_vPositionLS: usize = 0x20; // Vector
                pub const m_vNormalLS: usize = 0x2C; // Vector
                pub const m_vSAxisLS: usize = 0x38; // Vector
                pub const m_nFlags: usize = 0x44; // DecalFlags_t
                pub const m_Color: usize = 0x48; // Color
                pub const m_flWidth: usize = 0x4C; // float32
                pub const m_flHeight: usize = 0x50; // float32
                pub const m_flDepth: usize = 0x54; // float32
                pub const m_flAnimationScale: usize = 0x58; // float32
                pub const m_flPlaceTime: usize = 0x5C; // GameTime_t
                pub const m_flFadeStartTime: usize = 0x60; // float32
                pub const m_flFadeDuration: usize = 0x64; // float32
                pub const m_flLightingOriginOffset: usize = 0x68; // float32
                pub const m_flBoundingRadiusSqr: usize = 0x78; // float32
                pub const m_nSequenceIndex: usize = 0x7C; // int16
                pub const m_bIsAdjacent: usize = 0x7E; // bool
                pub const m_bDoDecalLightmapping: usize = 0x7F; // bool
                pub const m_nSkinnedModelMode: usize = 0x80; // DecalMode_t
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameScriptedMoveData {
                pub const m_vAccumulatedRootMotion: usize = 0x0; // Vector
                pub const m_angAccumulatedRootMotionRotation: usize = 0xC; // QAngle
                pub const m_vSrc: usize = 0x18; // VectorWS
                pub const m_angSrc: usize = 0x24; // QAngle
                pub const m_angCurrent: usize = 0x30; // QAngle
                pub const m_flLockedSpeed: usize = 0x3C; // float32
                pub const m_flAngRate: usize = 0x40; // float32
                pub const m_flDuration: usize = 0x44; // float32
                pub const m_flStartTime: usize = 0x48; // GameTime_t
                pub const m_bActive: usize = 0x4C; // bool
                pub const m_bTeleportOnEnd: usize = 0x4D; // bool
                pub const m_bIgnoreRotation: usize = 0x4E; // bool
                pub const m_bSuccess: usize = 0x4F; // bool
                pub const m_nForcedCrouchState: usize = 0x50; // ForcedCrouchState_t
                pub const m_bIgnoreCollisions: usize = 0x54; // bool
                pub const m_vDest: usize = 0x58; // Vector
                pub const m_angDst: usize = 0x64; // QAngle
                pub const m_hDestEntity: usize = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            pub mod CSkeletonAnimationController {
                pub const m_pSkeletonInstance: usize = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeMarkupVolume {
            }
            // Parent: None
            // Field count: 2
            pub mod CResponseCriteriaSet {
                pub const m_nNumPrefixedContexts: usize = 0x30; // int32
                pub const m_bOverrideOnAppend: usize = 0x34; // bool
            }
            // Parent: None
            // Field count: 11
            pub mod CAI_Expresser {
                pub const m_flStopTalkTime: usize = 0x60; // GameTime_t
                pub const m_flStopTalkTimeWithoutDelay: usize = 0x64; // GameTime_t
                pub const m_flQueuedSpeechTime: usize = 0x68; // GameTime_t
                pub const m_flBlockedTalkTime: usize = 0x6C; // GameTime_t
                pub const m_voicePitch: usize = 0x70; // int32
                pub const m_flLastTimeAcceptedSpeak: usize = 0x74; // GameTime_t
                pub const m_bAllowSpeakingInterrupts: usize = 0x78; // bool
                pub const m_bConsiderSceneInvolvementAsSpeech: usize = 0x79; // bool
                pub const m_bSceneEntityDisabled: usize = 0x7A; // bool
                pub const m_nLastSpokenPriority: usize = 0x7C; // int32
                pub const m_pOuter: usize = 0x98; // CBaseFlex*
            }
            // Parent: None
            // Field count: 0
            pub mod IChoreoServices {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerAttributes {
            }
            // Parent: CStopwatchBase
            // Field count: 1
            pub mod CStopwatch {
                pub const m_flInterval: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            pub mod ResponseParams {
                pub const odds: usize = 0x10; // int16
                pub const flags: usize = 0x12; // int16
                pub const m_pFollowup: usize = 0x18; // ResponseFollowup*
            }
            // Parent: None
            // Field count: 8
            pub mod ConstraintSoundInfo {
                pub const m_vSampler: usize = 0x8; // VelocitySampler
                pub const m_soundProfile: usize = 0x20; // SimpleConstraintSoundProfile
                pub const m_forwardAxis: usize = 0x40; // Vector
                pub const m_iszTravelSoundFwd: usize = 0x50; // CUtlSymbolLarge
                pub const m_iszTravelSoundBack: usize = 0x58; // CUtlSymbolLarge
                pub const m_iszReversalSounds: usize = 0x78; // CUtlSymbolLarge[3]
                pub const m_bPlayTravelSound: usize = 0x90; // bool
                pub const m_bPlayReversalSound: usize = 0x91; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsBodyGameMarkup {
                pub const m_TargetBody: usize = 0x0; // CUtlString
                pub const m_Tag: usize = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointCameraSettings_t {
                pub const m_flNearBlurryDistance: usize = 0x0; // float32
                pub const m_flNearCrispDistance: usize = 0x4; // float32
                pub const m_flFarCrispDistance: usize = 0x8; // float32
                pub const m_flFarBlurryDistance: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CVectorMovingAverage {
            }
            // Parent: None
            // Field count: 4
            pub mod CSoundEnvelope {
                pub const m_current: usize = 0x0; // float32
                pub const m_target: usize = 0x4; // float32
                pub const m_rate: usize = 0x8; // float32
                pub const m_forceupdate: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 25
            pub mod dynpitchvol_base_t {
                pub const preset: usize = 0x0; // int32
                pub const pitchrun: usize = 0x4; // int32
                pub const pitchstart: usize = 0x8; // int32
                pub const spinup: usize = 0xC; // int32
                pub const spindown: usize = 0x10; // int32
                pub const volrun: usize = 0x14; // int32
                pub const volstart: usize = 0x18; // int32
                pub const fadein: usize = 0x1C; // int32
                pub const fadeout: usize = 0x20; // int32
                pub const lfotype: usize = 0x24; // int32
                pub const lforate: usize = 0x28; // int32
                pub const lfomodpitch: usize = 0x2C; // int32
                pub const lfomodvol: usize = 0x30; // int32
                pub const cspinup: usize = 0x34; // int32
                pub const cspincount: usize = 0x38; // int32
                pub const pitch: usize = 0x3C; // int32
                pub const spinupsav: usize = 0x40; // int32
                pub const spindownsav: usize = 0x44; // int32
                pub const pitchfrac: usize = 0x48; // int32
                pub const vol: usize = 0x4C; // int32
                pub const fadeinsav: usize = 0x50; // int32
                pub const fadeoutsav: usize = 0x54; // int32
                pub const volfrac: usize = 0x58; // int32
                pub const lfofrac: usize = 0x5C; // int32
                pub const lfomult: usize = 0x60; // int32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            pub mod CStopwatchBase {
                pub const m_fIsRunning: usize = 0x8; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CNavVolumeVector {
                pub const m_bHasBeenPreFiltered: usize = 0x80; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod NavGravity_t {
                pub const m_vGravity: usize = 0x0; // Vector
                pub const m_bDefault: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseScriptedSequenceData_t {
                pub const m_nActorID: usize = 0x0; // int32
                pub const m_szPreIdleSequence: usize = 0x8; // CUtlString
                pub const m_szEntrySequence: usize = 0x10; // CUtlString
                pub const m_szSequence: usize = 0x18; // CUtlString
                pub const m_szExitSequence: usize = 0x20; // CUtlString
                pub const m_nMoveTo: usize = 0x28; // ScriptedMoveTo_t
                pub const m_nMoveToGait: usize = 0x2C; // SharedMovementGait_t
                pub const m_nHeldWeaponBehavior: usize = 0x30; // ScriptedHeldWeaponBehavior_t
                pub const m_bLoopPreIdleSequence: usize = 0x34; // bool
                pub const m_bLoopActionSequence: usize = 0x35; // bool
                pub const m_bLoopPostIdleSequence: usize = 0x36; // bool
                pub const m_bIgnoreLookAt: usize = 0x37; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod RotatorQueueEntry_t {
                pub const qTarget: usize = 0x0; // Quaternion
                pub const eSpace: usize = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Field count: 1
            pub mod CPhysicsShake {
                pub const m_force: usize = 0x8; // Vector
            }
            // Parent: None
            // Field count: 3
            pub mod VelocitySampler {
                pub const m_prevSample: usize = 0x0; // Vector
                pub const m_fPrevSampleTime: usize = 0xC; // GameTime_t
                pub const m_fIdealSampleRate: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 8
            pub mod CTakeDamageResult {
                pub const m_pOriginatingInfo: usize = 0x0; // CTakeDamageInfo*
                pub const m_nHealthLost: usize = 0x8; // int32
                pub const m_nHealthBefore: usize = 0xC; // int32
                pub const m_nDamageDealt: usize = 0x10; // int32
                pub const m_flPreModifiedDamage: usize = 0x14; // float32
                pub const m_nTotalledHealthLost: usize = 0x18; // int32
                pub const m_nTotalledDamageDealt: usize = 0x1C; // int32
                pub const m_bWasDamageSuppressed: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 19
            pub mod CCS2WeaponGraphController {
                pub const m_action: usize = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_weaponCategory: usize = 0xB8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0xD8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponExtraInfo: usize = 0xF8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flWeaponAmmo: usize = 0x118; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoMax: usize = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoReserve: usize = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bWeaponIsSilenced: usize = 0x160; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponIronsightAmount: usize = 0x178; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsUsingLegacyModel: usize = 0x190; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_deployVariation: usize = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_attackType: usize = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_attackThrowStrength: usize = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAttackVariation: usize = 0x210; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectVariation: usize = 0x228; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectExtraInfo: usize = 0x240; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_reloadStage: usize = 0x260; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 1
            pub mod SceneEventId_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 10
            pub mod CCommentarySystem {
                pub const m_bCommentaryConvarsChanging: usize = 0x11; // bool
                pub const m_bCommentaryEnabledMidGame: usize = 0x12; // bool
                pub const m_flNextTeleportTime: usize = 0x14; // GameTime_t
                pub const m_iTeleportStage: usize = 0x18; // int32
                pub const m_bCheatState: usize = 0x1C; // bool
                pub const m_bIsFirstSpawnGroupToLoad: usize = 0x1D; // bool
                pub const m_hCurrentNode: usize = 0x38; // CHandle<CPointCommentaryNode>
                pub const m_hActiveCommentaryNode: usize = 0x3C; // CHandle<CPointCommentaryNode>
                pub const m_hLastCommentaryNode: usize = 0x40; // CHandle<CPointCommentaryNode>
                pub const m_vecNodes: usize = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Field count: 8
            pub mod ResponseFollowup {
                pub const followup_concept: usize = 0x0; // char*
                pub const followup_contexts: usize = 0x8; // char*
                pub const followup_delay: usize = 0x10; // float32
                pub const followup_target: usize = 0x14; // char*
                pub const followup_entityiotarget: usize = 0x1C; // char*
                pub const followup_entityioinput: usize = 0x24; // char*
                pub const followup_entityiodelay: usize = 0x2C; // float32
                pub const bFired: usize = 0x30; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AmmoTypeInfo_t {
                pub const m_nMaxCarry: usize = 0x10; // int32
                pub const m_nSplashSize: usize = 0x1C; // CRangeInt
                pub const m_nFlags: usize = 0x24; // AmmoFlags_t
                pub const m_flMass: usize = 0x28; // float32
                pub const m_flSpeed: usize = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavLinkAnimgraphVar {
                pub const m_sAnimGraphNavlinkType: usize = 0x0; // CGlobalSymbol
                pub const m_unAlignmentDegrees: usize = 0x8; // uint32
            }
            // Parent: None
            // Field count: 1
            pub mod CNetworkTransmitComponent {
                pub const m_nTransmitStateOwnedCounter: usize = 0x184; // uint8
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavLinkMovementVData {
                pub const m_sToolsOnlyOwnerModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bIsInterpolated: usize = 0xE0; // bool
                pub const m_unRecommendedDistance: usize = 0xE4; // uint32
                pub const m_vecAnimgraphVars: usize = 0xE8; // CUtlVector<CNavLinkAnimgraphVar>
            }
            // Parent: None
            // Field count: 4
            pub mod CChicken_GraphController {
                pub const m_paramActivity: usize = 0x268; // CAnimGraphParamRef<char*>
                pub const m_paramEndActivityImmediately: usize = 0x290; // CAnimGraphParamRef<bool>
                pub const m_sActivityFinished: usize = 0x2B0; // CAnimGraphTagRef
                pub const m_paramTurnAngle: usize = 0x2C8; // CAnimGraphParamRef<float32>
            }
            // Parent: None
            // Field count: 5
            pub mod CPathQueryUtil {
                pub const m_PathToEntityTransform: usize = 0x10; // CTransform
                pub const m_vecPathSamplePositions: usize = 0x30; // CUtlVector<Vector>
                pub const m_vecPathSampleParameters: usize = 0x48; // CUtlVector<float32>
                pub const m_vecPathSampleDistances: usize = 0x60; // CUtlVector<float32>
                pub const m_bIsClosedLoop: usize = 0x78; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod RagdollCreationParams_t {
                pub const m_vForce: usize = 0x0; // Vector
                pub const m_nForceBone: usize = 0xC; // int32
                pub const m_bForceCurrentWorldTransform: usize = 0x10; // bool
                pub const m_bUseLRURetirement: usize = 0x11; // bool
                pub const m_nHealthToGrant: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeInt {
                pub const m_pValue: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 2
            pub mod CWorldCompositionChunkReferenceElement_t {
                pub const m_strMapToLoad: usize = 0x0; // CUtlString
                pub const m_strLandmarkName: usize = 0x8; // CUtlString
            }
            // Parent: CStopwatchBase
            // Field count: 2
            pub mod CRandStopwatch {
                pub const m_flMinInterval: usize = 0xC; // float32
                pub const m_flMaxInterval: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod CMovementStatsProperty {
                pub const m_nUseCounter: usize = 0x10; // int32
                pub const m_emaMovementDirection: usize = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: None
            // Field count: 5
            pub mod CGameChoreoServices {
                pub const m_hOwner: usize = 0x8; // CHandle<CBaseAnimGraph>
                pub const m_hScriptedSequence: usize = 0xC; // CHandle<CScriptedSequence>
                pub const m_scriptState: usize = 0x10; // IChoreoServices::ScriptState_t
                pub const m_choreoState: usize = 0x14; // IChoreoServices::ChoreoState_t
                pub const m_flTimeStartedState: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            pub mod CSimpleStopwatch {
            }
            // Parent: None
            // Field count: 28
            pub mod CShatterGlassShard {
                pub const m_hShardHandle: usize = 0x8; // uint32
                pub const m_vecPanelVertices: usize = 0x10; // CUtlVector<Vector2D>
                pub const m_vLocalPanelSpaceOrigin: usize = 0x28; // Vector2D
                pub const m_hModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_hPhysicsEntity: usize = 0x38; // CHandle<CShatterGlassShardPhysics>
                pub const m_hParentPanel: usize = 0x3C; // CHandle<CFuncShatterglass>
                pub const m_hParentShard: usize = 0x40; // uint32
                pub const m_ShatterStressType: usize = 0x44; // ShatterGlassStressType
                pub const m_vecStressVelocity: usize = 0x48; // Vector
                pub const m_bCreatedModel: usize = 0x54; // bool
                pub const m_flLongestEdge: usize = 0x58; // float32
                pub const m_flShortestEdge: usize = 0x5C; // float32
                pub const m_flLongestAcross: usize = 0x60; // float32
                pub const m_flShortestAcross: usize = 0x64; // float32
                pub const m_flSumOfAllEdges: usize = 0x68; // float32
                pub const m_flArea: usize = 0x6C; // float32
                pub const m_nOnFrameEdge: usize = 0x70; // OnFrame
                pub const m_nSubShardGeneration: usize = 0x74; // int32
                pub const m_vecAverageVertPosition: usize = 0x78; // Vector2D
                pub const m_bAverageVertPositionIsValid: usize = 0x80; // bool
                pub const m_vecPanelSpaceStressPositionA: usize = 0x84; // Vector2D
                pub const m_vecPanelSpaceStressPositionB: usize = 0x8C; // Vector2D
                pub const m_bStressPositionAIsValid: usize = 0x94; // bool
                pub const m_bStressPositionBIsValid: usize = 0x95; // bool
                pub const m_bFlaggedForRemoval: usize = 0x96; // bool
                pub const m_flPhysicsEntitySpawnedAtTime: usize = 0x98; // GameTime_t
                pub const m_hEntityHittingMe: usize = 0x9C; // CHandle<CBaseEntity>
                pub const m_vecNeighbors: usize = 0xA0; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            pub mod ragdollelement_t {
                pub const originParentSpace: usize = 0x0; // Vector
                pub const parentIndex: usize = 0x20; // int32
                pub const m_flRadius: usize = 0x24; // float32
                pub const m_nHeight: usize = 0x28; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameScriptedMoveDef_t {
                pub const m_vDestOffset: usize = 0x0; // Vector
                pub const m_hDestEntity: usize = 0xC; // CHandle<CBaseEntity>
                pub const m_angDest: usize = 0x10; // QAngle
                pub const m_flDuration: usize = 0x1C; // float32
                pub const m_flAngRate: usize = 0x20; // float32
                pub const m_flMoveSpeed: usize = 0x24; // float32
                pub const m_bAimDisabled: usize = 0x28; // bool
                pub const m_bIgnoreRotation: usize = 0x29; // bool
                pub const m_nForcedCrouchState: usize = 0x2C; // ForcedCrouchState_t
            }
            // Parent: None
            // Field count: 7
            pub mod CNetworkOriginCellCoordQuantizedVector {
                pub const m_cellX: usize = 0x10; // uint16
                pub const m_cellY: usize = 0x12; // uint16
                pub const m_cellZ: usize = 0x14; // uint16
                pub const m_nOutsideWorld: usize = 0x16; // uint16
                pub const m_vecX: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x20; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 8
            pub mod DynamicVolumeDef_t {
                pub const m_source: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_target: usize = 0x4; // CHandle<CBaseEntity>
                pub const m_nHullIdx: usize = 0x8; // int32
                pub const m_vSourceAnchorPos: usize = 0xC; // Vector
                pub const m_vTargetAnchorPos: usize = 0x18; // Vector
                pub const m_nAreaSrc: usize = 0x24; // uint32
                pub const m_nAreaDst: usize = 0x28; // uint32
                pub const m_bAttached: usize = 0x2C; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkOriginQuantizedVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            pub mod magnetted_objects_t {
                pub const hEntity: usize = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            pub mod CHintMessageQueue {
                pub const m_tmMessageEnd: usize = 0x0; // float32
                pub const m_messages: usize = 0x8; // CUtlVector<CHintMessage*>
                pub const m_pPlayerController: usize = 0x20; // CBasePlayerController*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillInt {
                pub const m_pValue: usize = 0x0; // int32[4]
            }
            // Parent: None
            // Field count: 4
            pub mod thinkfunc_t {
                pub const m_hFn: usize = 0x8; // HSCRIPT
                pub const m_nContext: usize = 0x10; // CUtlStringToken
                pub const m_nNextThinkTick: usize = 0x14; // GameTick_t
                pub const m_nLastThinkTick: usize = 0x18; // GameTick_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavHullPresetVData {
                pub const m_vecNavHulls: usize = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WaterWheelFrictionScale_t {
                pub const m_flFractionOfWheelSubmerged: usize = 0x0; // float32
                pub const m_flFrictionScale: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod ragdollhierarchyjoint_t {
                pub const parentIndex: usize = 0x0; // int32
                pub const childIndex: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 13
            pub mod CSceneEventInfo {
                pub const m_iLayer: usize = 0x0; // int32
                pub const m_iPriority: usize = 0x4; // int32
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flWeight: usize = 0xC; // float32
                pub const m_bHasArrived: usize = 0x10; // bool
                pub const m_nType: usize = 0x14; // int32
                pub const m_flNext: usize = 0x18; // GameTime_t
                pub const m_bIsGesture: usize = 0x1C; // bool
                pub const m_bShouldRemove: usize = 0x1D; // bool
                pub const m_hTarget: usize = 0x44; // CHandle<CBaseEntity>
                pub const m_nSceneEventId: usize = 0x48; // SceneEventId_t
                pub const m_bClientSide: usize = 0x4C; // bool
                pub const m_bStarted: usize = 0x4D; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod SoundeventPathCornerPairNetworked_t {
                pub const vP1: usize = 0x0; // Vector
                pub const vP2: usize = 0xC; // Vector
                pub const flPathLengthSqr: usize = 0x18; // float32
                pub const flP1Pct: usize = 0x1C; // float32
                pub const flP2Pct: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 13
            pub mod CSoundPatch {
                pub const m_pitch: usize = 0x8; // CSoundEnvelope
                pub const m_volume: usize = 0x18; // CSoundEnvelope
                pub const m_shutdownTime: usize = 0x3C; // float32
                pub const m_flLastTime: usize = 0x40; // float32
                pub const m_iszSoundScriptName: usize = 0x48; // CUtlSymbolLarge
                pub const m_hEnt: usize = 0x50; // CHandle<CBaseEntity>
                pub const m_soundEntityIndex: usize = 0x54; // CEntityIndex
                pub const m_soundOrigin: usize = 0x58; // Vector
                pub const m_isPlaying: usize = 0x64; // int32
                pub const m_Filter: usize = 0x68; // CCopyRecipientFilter
                pub const m_flCloseCaptionDuration: usize = 0x98; // float32
                pub const m_bUpdatedSoundOrigin: usize = 0x9C; // bool
                pub const m_iszClassName: usize = 0xA0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 10
            pub mod CCS2ChickenGraphController {
                pub const m_action: usize = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_actionSubtype: usize = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xC0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_runVariation: usize = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_panicVariation: usize = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_squatVariation: usize = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bInWater: usize = 0x138; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_bHasActionCompletedEvent: usize = 0x150; // bool
                pub const m_bWaitingForCompletedEvent: usize = 0x151; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod locksound_t {
                pub const sLockedSound: usize = 0x8; // CUtlSymbolLarge
                pub const sUnlockedSound: usize = 0x10; // CUtlSymbolLarge
                pub const flwaitSound: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod DecalGroupOption_t {
                pub const m_hMaterial: usize = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                pub const m_sSequenceName: usize = 0x8; // CGlobalSymbol
                pub const m_flProbability: usize = 0x10; // float32
                pub const m_bEnableAngleBetweenNormalAndGravityRange: usize = 0x14; // bool
                pub const m_flMinAngleBetweenNormalAndGravity: usize = 0x18; // float32
                pub const m_flMaxAngleBetweenNormalAndGravity: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CFiringModeFloat {
                pub const m_flValues: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 2
            pub mod CCopyRecipientFilter {
                pub const m_Flags: usize = 0x8; // int32
                pub const m_Recipients: usize = 0x10; // CUtlVector<CPlayerSlot>
            }
            // Parent: None
            // Field count: 0
            pub mod CFloatMovingAverage {
            }
            // Parent: None
            // Field count: 5
            pub mod CSmoothFunc {
                pub const m_flSmoothAmplitude: usize = 0x8; // float32
                pub const m_flSmoothBias: usize = 0xC; // float32
                pub const m_flSmoothDuration: usize = 0x10; // float32
                pub const m_flSmoothRemainingTime: usize = 0x14; // float32
                pub const m_nSmoothDir: usize = 0x18; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod IHasAttributes {
            }
            // Parent: None
            // Field count: 5
            pub mod ragdoll_t {
                pub const list: usize = 0x0; // CUtlVector<ragdollelement_t>
                pub const hierarchyJoints: usize = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                pub const boneIndex: usize = 0x30; // CUtlVector<int32>
                pub const allowStretch: usize = 0x48; // bool
                pub const unused: usize = 0x49; // bool
            }
            // Parent: None
            // Field count: 10
            pub mod HullFlags_t {
                pub const m_bHull_Human: usize = 0x0; // bool
                pub const m_bHull_SmallCentered: usize = 0x1; // bool
                pub const m_bHull_WideHuman: usize = 0x2; // bool
                pub const m_bHull_Tiny: usize = 0x3; // bool
                pub const m_bHull_Medium: usize = 0x4; // bool
                pub const m_bHull_TinyCentered: usize = 0x5; // bool
                pub const m_bHull_Large: usize = 0x6; // bool
                pub const m_bHull_LargeCentered: usize = 0x7; // bool
                pub const m_bHull_MediumTall: usize = 0x8; // bool
                pub const m_bHull_Small: usize = 0x9; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod ISkeletonAnimationController {
            }
            // Parent: None
            // Field count: 2
            pub mod RotatorHistoryEntry_t {
                pub const qInvChange: usize = 0x0; // Quaternion
                pub const flTimeRotationStart: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod GameAmmoTypeInfo_t {
                pub const m_nBuySize: usize = 0x38; // int32
                pub const m_nCost: usize = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            pub mod CMotorController {
                pub const m_speed: usize = 0x8; // float32
                pub const m_maxTorque: usize = 0xC; // float32
                pub const m_axis: usize = 0x10; // VectorWS
                pub const m_inertiaFactor: usize = 0x1C; // float32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            pub mod CSimTimer {
                pub const m_flInterval: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CBaseIssue {
                pub const m_szTypeString: usize = 0x20; // char[64]
                pub const m_szDetailsString: usize = 0x60; // char[260]
                pub const m_iNumYesVotes: usize = 0x164; // int32
                pub const m_iNumNoVotes: usize = 0x168; // int32
                pub const m_iNumPotentialVotes: usize = 0x16C; // int32
                pub const m_pVoteController: usize = 0x170; // CVoteController*
            }
            // Parent: None
            // Field count: 4
            pub mod SummaryTakeDamageInfo_t {
                pub const nSummarisedCount: usize = 0x0; // int32
                pub const info: usize = 0x8; // CTakeDamageInfo
                pub const result: usize = 0x130; // CTakeDamageResult
                pub const hTarget: usize = 0x158; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            pub mod DestructibleHitGroupToDestroy_t {
                pub const m_nHitGroup: usize = 0x0; // HitGroup_t
                pub const m_nMaxDamageLevel: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 10
            pub mod CRR_Response {
                pub const m_Type: usize = 0x0; // uint8
                pub const m_szResponseName: usize = 0x1; // char[192]
                pub const m_szMatchingRule: usize = 0xC1; // char[128]
                pub const m_Params: usize = 0x160; // ResponseParams
                pub const m_fMatchScore: usize = 0x180; // float32
                pub const m_bAnyMatchingRulesInCooldown: usize = 0x184; // bool
                pub const m_szSpeakerContext: usize = 0x188; // char*
                pub const m_szWorldContext: usize = 0x190; // char*
                pub const m_Followup: usize = 0x198; // ResponseFollowup
                pub const m_recipientFilter: usize = 0x1CA; // CUtlSymbol
            }
            // Parent: None
            // Field count: 0
            pub mod CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmAimCSNode__CDefinition {
                pub const m_nVerticalAngleNodeIdx: usize = 0x18; // int16
                pub const m_nHorizontalAngleNodeIdx: usize = 0x1A; // int16
                pub const m_nEnabledNodeIdx: usize = 0x1C; // int16
                pub const m_flBlendTimeSeconds: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 4
            pub mod CConstantForceController {
                pub const m_linear: usize = 0xC; // Vector
                pub const m_angular: usize = 0x18; // RotationVector
                pub const m_linearSave: usize = 0x24; // Vector
                pub const m_angularSave: usize = 0x30; // RotationVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WaterWheelDrag_t {
                pub const m_flFractionOfWheelSubmerged: usize = 0x0; // float32
                pub const m_flWheelDrag: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 22
            pub mod CTakeDamageInfo {
                pub const m_vecDamageForce: usize = 0x8; // Vector
                pub const m_vecDamagePosition: usize = 0x14; // VectorWS
                pub const m_vecReportedPosition: usize = 0x20; // VectorWS
                pub const m_vecDamageDirection: usize = 0x2C; // Vector
                pub const m_hInflictor: usize = 0x38; // CHandle<CBaseEntity>
                pub const m_hAttacker: usize = 0x3C; // CHandle<CBaseEntity>
                pub const m_hAbility: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_flDamage: usize = 0x44; // float32
                pub const m_flTotalledDamage: usize = 0x48; // float32
                pub const m_bitsDamageType: usize = 0x4C; // DamageTypes_t
                pub const m_iDamageCustom: usize = 0x50; // int32
                pub const m_iAmmoType: usize = 0x54; // AmmoIndex_t
                pub const m_flOriginalDamage: usize = 0x60; // float32
                pub const m_bShouldBleed: usize = 0x64; // bool
                pub const m_bShouldSpark: usize = 0x65; // bool
                pub const m_nDamageFlags: usize = 0x70; // TakeDamageFlags_t
                pub const m_sDamageSourceName: usize = 0x78; // CGlobalSymbol
                pub const m_iHitGroupId: usize = 0x80; // HitGroup_t
                pub const m_nNumObjectsPenetrated: usize = 0x84; // int32
                pub const m_flFriendlyFireDamageReductionRatio: usize = 0x88; // float32
                pub const m_nDestructibleHitGroupsToForceDestroy: usize = 0x108; // CUtlVector<DestructibleHitGroupToDestroy_t>
                pub const m_bInTakeDamageFlow: usize = 0x120; // bool
            }
            // Parent: CSimpleSimTimer
            // Field count: 2
            pub mod CRandSimTimer {
                pub const m_flMinInterval: usize = 0x8; // float32
                pub const m_flMaxInterval: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNodeComposite {
            }
            // Parent: None
            // Field count: 4
            pub mod CRelativeLocation {
                pub const m_Type: usize = 0x18; // RelativeLocationType_t
                pub const m_vRelativeOffset: usize = 0x1C; // Vector
                pub const m_vWorldSpacePos: usize = 0x28; // VectorWS
                pub const m_hEntity: usize = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            pub mod Extent {
                pub const lo: usize = 0x0; // VectorWS
                pub const hi: usize = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 5
            pub mod sndopvarlatchdata_t {
                pub const m_iszStack: usize = 0x8; // CUtlSymbolLarge
                pub const m_iszOperator: usize = 0x10; // CUtlSymbolLarge
                pub const m_iszOpvar: usize = 0x18; // CUtlSymbolLarge
                pub const m_flVal: usize = 0x20; // float32
                pub const m_vPos: usize = 0x24; // Vector
            }
            // Parent: None
            // Field count: 0
            pub mod IEconItemInterface {
            }
            // Parent: None
            // Field count: 1
            pub mod CMultiplayer_Expresser {
                pub const m_bAllowMultipleScenes: usize = 0xA0; // bool
            }
            // Parent: None
            // Field count: 15
            pub mod CBaseAnimGraphAnimGraphController {
                pub const m_sDestructiblePartDestroyedHitGroup: usize = 0x80; // CAnimGraphParamOptionalRef<CGlobalSymbol>
                pub const m_nDestructiblePartDestroyedPartIndex: usize = 0xA8; // CAnimGraphParamOptionalRef<int32>
                pub const m_bHITGROUP_INVALID_Destroyed: usize = 0xC8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_GENERIC_Destroyed: usize = 0xE8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_HEAD_Destroyed: usize = 0x108; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_CHEST_Destroyed: usize = 0x128; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_STOMACH_Destroyed: usize = 0x148; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_LEFTARM_Destroyed: usize = 0x168; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_RIGHTARM_Destroyed: usize = 0x188; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_LEFTLEG_Destroyed: usize = 0x1A8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_RIGHTLEG_Destroyed: usize = 0x1C8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_NECK_Destroyed: usize = 0x1E8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_UNUSED_Destroyed: usize = 0x208; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_GEAR_Destroyed: usize = 0x228; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_SPECIAL_Destroyed: usize = 0x248; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolume {
            }
            // Parent: None
            // Field count: 0
            pub mod QuestProgress {
            }
            // Parent: None
            // Field count: 0
            pub mod CNmAimCSTask {
            }
            // Parent: None
            // Field count: 1
            pub mod ParticleIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Field count: 1
            pub mod CTakeDamageSummaryScopeGuard {
                pub const m_vecSummaries: usize = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Field count: 4
            pub mod CIronSightController {
                pub const m_bIronSightAvailable: usize = 0x8; // bool
                pub const m_flIronSightAmount: usize = 0xC; // float32
                pub const m_flIronSightAmountGained: usize = 0x10; // float32
                pub const m_flIronSightAmountBiased: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerSound {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerLegacy {
            }
            // Parent: None
            // Field count: 1
            pub mod CInButtonState {
                pub const m_pButtonStates: usize = 0x8; // uint64[3]
            }
            // Parent: None
            // Field count: 3
            pub mod ServerAuthoritativeWeaponSlot_t {
                pub const unClass: usize = 0x30; // uint16
                pub const unSlot: usize = 0x32; // uint16
                pub const unItemDefIdx: usize = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerParticle {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavHullVData {
                pub const m_bAgentEnabled: usize = 0x0; // bool
                pub const m_agentRadius: usize = 0x4; // float32
                pub const m_agentHeight: usize = 0x8; // float32
                pub const m_agentShortHeightEnabled: usize = 0xC; // bool
                pub const m_agentShortHeight: usize = 0x10; // float32
                pub const m_agentCrawlEnabled: usize = 0x14; // bool
                pub const m_agentCrawlHeight: usize = 0x18; // float32
                pub const m_agentMaxClimb: usize = 0x1C; // float32
                pub const m_agentMaxSlope: usize = 0x20; // int32
                pub const m_agentMaxJumpDownDist: usize = 0x24; // float32
                pub const m_agentMaxJumpHorizDistBase: usize = 0x28; // float32
                pub const m_agentMaxJumpUpDist: usize = 0x2C; // float32
                pub const m_agentBorderErosion: usize = 0x30; // int32
                pub const m_flowMapGenerationEnabled: usize = 0x34; // bool
                pub const m_flowMapNodeMaxRadius: usize = 0x38; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmSnapWeaponNode__CDefinition {
                pub const m_nEnabledNodeIdx: usize = 0x18; // int16
                pub const m_nLockLeftHandNodeIdx: usize = 0x1A; // int16
                pub const m_flBlendTimeSeconds: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 3
            pub mod SoundOpvarTraceResult_t {
                pub const vPos: usize = 0x0; // Vector
                pub const bDidHit: usize = 0xC; // bool
                pub const flDistSqrToCenter: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimEventListener {
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CFiringModeInt {
                pub const m_nValues: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNodeDecorator {
            }
            // Parent: None
            // Field count: 6
            pub mod CSAdditionalPerRoundStats_t {
                pub const m_numChickensKilled: usize = 0x0; // int32
                pub const m_killsWhileBlind: usize = 0x4; // int32
                pub const m_bombCarrierkills: usize = 0x8; // int32
                pub const m_flBurnDamageInflicted: usize = 0xC; // float32
                pub const m_flBlastDamageInflicted: usize = 0x10; // float32
                pub const m_iDinks: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod ModelConfigHandle_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            pub mod CEntitySubclassVDataBase {
            }
            // Parent: None
            // Field count: 2
            pub mod CBreakableStageHelper {
                pub const m_nCurrentStage: usize = 0x8; // int32
                pub const m_nStageCount: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod CNavVolumeBreadthFirstSearch {
                pub const m_vStartPos: usize = 0xA8; // Vector
                pub const m_flSearchDist: usize = 0xB4; // float32
            }
            // Parent: dynpitchvol_base_t
            // Field count: 0
            pub mod dynpitchvol_t {
            }
            // Parent: None
            // Field count: 12
            pub mod CSAdditionalMatchStats_t {
                pub const m_numRoundsSurvived: usize = 0x18; // int32
                pub const m_maxNumRoundsSurvived: usize = 0x1C; // int32
                pub const m_numRoundsSurvivedTotal: usize = 0x20; // int32
                pub const m_iRoundsWonWithoutPurchase: usize = 0x24; // int32
                pub const m_iRoundsWonWithoutPurchaseTotal: usize = 0x28; // int32
                pub const m_numFirstKills: usize = 0x2C; // int32
                pub const m_numClutchKills: usize = 0x30; // int32
                pub const m_numPistolKills: usize = 0x34; // int32
                pub const m_numSniperKills: usize = 0x38; // int32
                pub const m_iNumSuicides: usize = 0x3C; // int32
                pub const m_iNumTeamKills: usize = 0x40; // int32
                pub const m_flTeamDamage: usize = 0x44; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod IRagdoll {
            }
            // Parent: None
            // Field count: 6
            pub mod hudtextparms_t {
                pub const color1: usize = 0x0; // Color
                pub const color2: usize = 0x4; // Color
                pub const effect: usize = 0x8; // uint8
                pub const channel: usize = 0x9; // uint8
                pub const x: usize = 0xC; // float32
                pub const y: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CAnimGraphControllerBase {
                pub const m_vecParamsToResetInPostGraphUpdate: usize = 0x28; // CUtlVectorFixedGrowable<CGlobalSymbol,8>
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkVelocityVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePart_DamageLevel {
                pub const m_sName: usize = 0x0; // CUtlString
                pub const m_sBreakablePieceName: usize = 0x8; // CGlobalSymbol
                pub const m_nBodyGroupValue: usize = 0x10; // int32
                pub const m_nHealth: usize = 0x14; // CSkillInt
                pub const m_flCriticalDamagePercent: usize = 0x24; // float32
                pub const m_nDamagePassthroughType: usize = 0x28; // EDestructiblePartDamagePassThroughType
                pub const m_nDestructionDeathBehavior: usize = 0x2C; // DestructiblePartDestructionDeathBehavior_t
                pub const m_sCustomDeathHandshake: usize = 0x30; // CGlobalSymbol
                pub const m_bShouldDestroyOnDeath: usize = 0x38; // bool
                pub const m_flDeathDestroyTime: usize = 0x3C; // CRangeFloat
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeAll {
            }
            // Parent: None
            // Field count: 2
            pub mod CNavVolumeSphere {
                pub const m_vCenter: usize = 0x78; // Vector
                pub const m_flRadius: usize = 0x84; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod Relationship_t {
                pub const disposition: usize = 0x0; // Disposition_t
                pub const priority: usize = 0x4; // int32
            }
        }
    }
}
