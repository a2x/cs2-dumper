// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: server.dll
        // Class count: 290
        // Enum count: 92
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
            // Parent: CPointEntity
            // Field count: 10
            pub mod CAmbientGeneric {
                pub const m_radius: usize = 0x4F0; // float32
                pub const m_flMaxRadius: usize = 0x4F4; // float32
                pub const m_iSoundLevel: usize = 0x4F8; // soundlevel_t
                pub const m_dpv: usize = 0x4FC; // dynpitchvol_t
                pub const m_fActive: usize = 0x560; // bool
                pub const m_fLooping: usize = 0x561; // bool
                pub const m_iszSound: usize = 0x568; // CUtlSymbolLarge
                pub const m_sSourceEntName: usize = 0x570; // CUtlSymbolLarge
                pub const m_hSoundSource: usize = 0x578; // CHandle<CBaseEntity>
                pub const m_nSoundSourceEntIndex: usize = 0x57C; // CEntityIndex
            }
            // Parent: CPointEntity
            // Field count: 12
            pub mod CEnvEntityMaker {
                pub const m_vecEntityMins: usize = 0x4F0; // Vector
                pub const m_vecEntityMaxs: usize = 0x4FC; // Vector
                pub const m_hCurrentInstance: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hCurrentBlocker: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_vecBlockerOrigin: usize = 0x510; // Vector
                pub const m_angPostSpawnDirection: usize = 0x51C; // QAngle
                pub const m_flPostSpawnDirectionVariance: usize = 0x528; // float32
                pub const m_flPostSpawnSpeed: usize = 0x52C; // float32
                pub const m_bPostSpawnUseAngles: usize = 0x530; // bool
                pub const m_iszTemplate: usize = 0x538; // CUtlSymbolLarge
                pub const m_pOutputOnSpawned: usize = 0x540; // CEntityIOOutput
                pub const m_pOutputOnFailedSpawn: usize = 0x568; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_GameBlackboard {
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CPointEntity {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CFogTrigger {
                pub const m_fog: usize = 0x9A8; // fogparams_t
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoTeleportDestination {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CPointBroadcastClientCommand {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CPlayerPing>)
            pub mod CCSPlayer_PingServices {
                pub const m_flPlayerPingTokens: usize = 0x40; // GameTime_t[5]
                pub const m_hPlayerPing: usize = 0x54; // CHandle<CPlayerPing>
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CEnvMuzzleFlash {
                pub const m_flScale: usize = 0x4F0; // float32
                pub const m_iszParentAttachment: usize = 0x4F8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
            // NetworkVarNames: m_flValue (float)
            // NetworkVarNames: m_flInitialValue (float)
            // NetworkVarNames: m_nRefundableCurrency (int)
            // NetworkVarNames: m_bSetBonus (bool)
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseTriggerAPI {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            pub mod CTriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0x9A8; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0xAC0; // float32
            }
            // Parent: CTonemapController2
            // Field count: 0
            pub mod CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPointEntity
            // Field count: 9
            pub mod CPathTrack {
                pub const m_pnext: usize = 0x4F0; // CPathTrack*
                pub const m_pprevious: usize = 0x4F8; // CPathTrack*
                pub const m_paltpath: usize = 0x500; // CPathTrack*
                pub const m_flRadius: usize = 0x508; // float32
                pub const m_length: usize = 0x50C; // float32
                pub const m_altName: usize = 0x510; // CUtlSymbolLarge
                pub const m_nIterVal: usize = 0x518; // int32
                pub const m_eOrientationType: usize = 0x51C; // TrackOrientationType_t
                pub const m_OnPass: usize = 0x520; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: CBaseTrigger
            // Field count: 5
            pub mod CTriggerProximity {
                pub const m_hMeasureTarget: usize = 0x9A8; // CHandle<CBaseEntity>
                pub const m_iszMeasureTarget: usize = 0x9B0; // CUtlSymbolLarge
                pub const m_fRadius: usize = 0x9B8; // float32
                pub const m_nTouchers: usize = 0x9BC; // int32
                pub const m_NearestEntityDistance: usize = 0x9C0; // CEntityOutputTemplate<float32>
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CTankTrainAI {
                pub const m_hTrain: usize = 0x4F0; // CHandle<CFuncTrackTrain>
                pub const m_hTargetEntity: usize = 0x4F4; // CHandle<CBaseEntity>
                pub const m_soundPlaying: usize = 0x4F8; // int32
                pub const m_startSoundName: usize = 0x510; // CUtlSymbolLarge
                pub const m_engineSoundName: usize = 0x518; // CUtlSymbolLarge
                pub const m_movementSoundName: usize = 0x520; // CUtlSymbolLarge
                pub const m_targetEntityName: usize = 0x528; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CInfoGameEventProxy {
                pub const m_iszEventName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_flRange: usize = 0x4F8; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_firePositions (Vector)
            // NetworkVarNames: m_fireParentPositions (Vector)
            // NetworkVarNames: m_bFireIsBurning (bool)
            // NetworkVarNames: m_BurnNormal (Vector)
            // NetworkVarNames: m_fireCount (int)
            // NetworkVarNames: m_nInfernoType (int)
            // NetworkVarNames: m_nFireEffectTickBegin (int)
            // NetworkVarNames: m_nFireLifetime (float)
            // NetworkVarNames: m_bInPostEffectTime (bool)
            pub mod CInferno {
                pub const m_firePositions: usize = 0x7D8; // Vector[64]
                pub const m_fireParentPositions: usize = 0xAD8; // Vector[64]
                pub const m_bFireIsBurning: usize = 0xDD8; // bool[64]
                pub const m_BurnNormal: usize = 0xE18; // Vector[64]
                pub const m_fireCount: usize = 0x1118; // int32
                pub const m_nInfernoType: usize = 0x111C; // int32
                pub const m_nFireEffectTickBegin: usize = 0x1120; // int32
                pub const m_nFireLifetime: usize = 0x1124; // float32
                pub const m_bInPostEffectTime: usize = 0x1128; // bool
                pub const m_bWasCreatedInSmoke: usize = 0x1129; // bool
                pub const m_extent: usize = 0x1330; // Extent
                pub const m_damageTimer: usize = 0x1348; // CountdownTimer
                pub const m_damageRampTimer: usize = 0x1360; // CountdownTimer
                pub const m_splashVelocity: usize = 0x1378; // Vector
                pub const m_InitialSplashVelocity: usize = 0x1384; // Vector
                pub const m_startPos: usize = 0x1390; // Vector
                pub const m_vecOriginalSpawnLocation: usize = 0x139C; // Vector
                pub const m_activeTimer: usize = 0x13A8; // IntervalTimer
                pub const m_fireSpawnOffset: usize = 0x13B8; // int32
                pub const m_nMaxFlames: usize = 0x13BC; // int32
                pub const m_nSpreadCount: usize = 0x13C0; // int32
                pub const m_BookkeepingTimer: usize = 0x13C8; // CountdownTimer
                pub const m_NextSpreadTimer: usize = 0x13E0; // CountdownTimer
                pub const m_nSourceItemDefIndex: usize = 0x13F8; // uint16
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSCAR20 {
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            pub mod CFuncInteractionLayerClip {
                pub const m_bDisabled: usize = 0x7D8; // bool
                pub const m_iszInteractsAs: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_iszInteractsWith: usize = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub mod CCSObserver_UseServices {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerDetectBulletFire {
                pub const m_bPlayerFireOnly: usize = 0x9A8; // bool
                pub const m_OnDetectedBulletFire: usize = 0x9B0; // CEntityIOOutput
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            pub mod CCSPlayer_UseServices {
                pub const m_hLastKnownUseEntity: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_flLastUseTimeStamp: usize = 0x44; // GameTime_t
                pub const m_flTimeLastUsedWindow: usize = 0x48; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            pub mod CGameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_szQuestName: usize = 0x30; // char[128]
                pub const m_nQuestPhase: usize = 0xB0; // int32
                pub const m_nTotalPausedTicks: usize = 0xB4; // int32
                pub const m_nPauseStartTick: usize = 0xB8; // int32
                pub const m_bGamePaused: usize = 0xBC; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSG556 {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            pub mod CRagdollConstraint {
                pub const m_xmin: usize = 0x560; // float32
                pub const m_xmax: usize = 0x564; // float32
                pub const m_ymin: usize = 0x568; // float32
                pub const m_ymax: usize = 0x56C; // float32
                pub const m_zmin: usize = 0x570; // float32
                pub const m_zmax: usize = 0x574; // float32
                pub const m_xfriction: usize = 0x578; // float32
                pub const m_yfriction: usize = 0x57C; // float32
                pub const m_zfriction: usize = 0x580; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncVehicleClip {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CCSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPrecipitationVData {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_flInnerDistance: usize = 0x108; // float32
                pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
                pub const m_bBatchSameVolumeType: usize = 0x110; // bool
                pub const m_nRTEnvCP: usize = 0x114; // int32
                pub const m_nRTEnvCPComponent: usize = 0x118; // int32
                pub const m_szModifier: usize = 0x120; // CUtlString
            }
            // Parent: CBaseToggle
            // Field count: 13
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            pub mod CFuncMoveLinear {
                pub const m_authoredPosition: usize = 0x858; // MoveLinearAuthoredPos_t
                pub const m_angMoveEntitySpace: usize = 0x85C; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x868; // Vector
                pub const m_soundStart: usize = 0x878; // CUtlSymbolLarge
                pub const m_soundStop: usize = 0x880; // CUtlSymbolLarge
                pub const m_currentSound: usize = 0x888; // CUtlSymbolLarge
                pub const m_flBlockDamage: usize = 0x890; // float32
                pub const m_flStartPosition: usize = 0x894; // float32
                pub const m_OnFullyOpen: usize = 0x8A0; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x8C8; // CEntityIOOutput
                pub const m_bCreateMovableNavMesh: usize = 0x8F0; // bool
                pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x8F1; // bool
                pub const m_bCreateNavObstacle: usize = 0x8F2; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CPhysMotorAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 0
            pub mod CCSObserver_ObserverServices {
            }
            // Parent: CBaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            pub mod CPlayerPing {
                pub const m_hPlayer: usize = 0x4F8; // CHandle<CCSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x4FC; // CHandle<CBaseEntity>
                pub const m_iType: usize = 0x500; // int32
                pub const m_bUrgent: usize = 0x504; // bool
                pub const m_szPlaceName: usize = 0x505; // char[18]
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CHitboxComponent {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
            }
            // Parent: CEntityComponent
            // Field count: 0
            pub mod CPathQueryComponent {
            }
            // Parent: CLogicalEntity
            // Field count: 8
            pub mod CTestPulseIO {
                pub const m_OnVariantVoid: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnVariantBool: usize = 0x518; // CEntityIOOutput
                pub const m_OnVariantInt: usize = 0x540; // CEntityIOOutput
                pub const m_OnVariantFloat: usize = 0x568; // CEntityIOOutput
                pub const m_OnVariantString: usize = 0x590; // CEntityIOOutput
                pub const m_OnVariantColor: usize = 0x5B8; // CEntityIOOutput
                pub const m_OnVariantVector: usize = 0x5E0; // CEntityIOOutput
                pub const m_bAllowEmptyInputs: usize = 0x608; // bool
            }
            // Parent: CRulePointEntity
            // Field count: 0
            pub mod CGamePlayerEquip {
            }
            // Parent: CBaseEntity
            // Field count: 7
            pub mod CPointEntityFinder {
                pub const m_hEntity: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_iFilterName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x500; // CHandle<CBaseFilter>
                pub const m_iRefName: usize = 0x508; // CUtlSymbolLarge
                pub const m_hReference: usize = 0x510; // CHandle<CBaseEntity>
                pub const m_FindMethod: usize = 0x514; // EntFinderMethod_t
                pub const m_OnFoundEntity: usize = 0x518; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CLogicPlayerProxy {
                pub const m_hPlayer: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_PlayerHasAmmo: usize = 0x4F8; // CEntityIOOutput
                pub const m_PlayerHasNoAmmo: usize = 0x520; // CEntityIOOutput
                pub const m_PlayerDied: usize = 0x548; // CEntityIOOutput
                pub const m_RequestedPlayerHealth: usize = 0x570; // CEntityOutputTemplate<int32>
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePlayerControllerAPI {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 1
            pub mod CHostageExpresserShim {
                pub const m_pExpresser: usize = 0xBE0; // CAI_Expresser*
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x4F0; // bool
            }
            // Parent: CBaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flParticleSpacing (float)
            // NetworkVarNames: m_flSlack (float)
            // NetworkVarNames: m_flRadius (float)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_nEffectState (int)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_PathNodes_Position (Vector)
            // NetworkVarNames: m_PathNodes_TangentIn (Vector)
            // NetworkVarNames: m_PathNodes_TangentOut (Vector)
            // NetworkVarNames: m_PathNodes_Color (Vector)
            // NetworkVarNames: m_PathNodes_PinEnabled (bool)
            // NetworkVarNames: m_PathNodes_RadiusScale (float)
            pub mod CPathParticleRope {
                pub const m_bStartActive: usize = 0x4F8; // bool
                pub const m_flMaxSimulationTime: usize = 0x4FC; // float32
                pub const m_iszEffectName: usize = 0x500; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x508; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x520; // float32
                pub const m_flSlack: usize = 0x524; // float32
                pub const m_flRadius: usize = 0x528; // float32
                pub const m_ColorTint: usize = 0x52C; // Color
                pub const m_nEffectState: usize = 0x530; // int32
                pub const m_iEffectIndex: usize = 0x538; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x540; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x558; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x570; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x588; // CNetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x5A0; // CNetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x5B8; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CRagdollProp
            // Field count: 0
            pub mod CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CBaseProp
            // Field count: 32
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            pub mod CBreakableProp {
                pub const m_CPropDataComponent: usize = 0xAC8; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0xB08; // CEntityIOOutput
                pub const m_OnBreak: usize = 0xB30; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0xB58; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0xB80; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0xBA8; // float32
                pub const m_iMinHealthDmg: usize = 0xBAC; // int32
                pub const m_preferredCarryAngles: usize = 0xBB0; // QAngle
                pub const m_flPressureDelay: usize = 0xBBC; // float32
                pub const m_flDefBurstScale: usize = 0xBC0; // float32
                pub const m_vDefBurstOffset: usize = 0xBC4; // Vector
                pub const m_hBreaker: usize = 0xBD0; // CHandle<CBaseEntity>
                pub const m_PerformanceMode: usize = 0xBD4; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0xBD8; // GameTime_t
                pub const m_BreakableContentsType: usize = 0xBDC; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0xBE0; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0xBE8; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0xBF0; // bool
                pub const m_explodeDamage: usize = 0xBF4; // float32
                pub const m_explodeRadius: usize = 0xBF8; // float32
                pub const m_explosionDelay: usize = 0xC00; // float32
                pub const m_explosionBuildupSound: usize = 0xC08; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0xC10; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0xC18; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0xC20; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0xC28; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xC2C; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0xC30; // float32
                pub const m_hLastAttacker: usize = 0xC34; // CHandle<CBaseEntity>
                pub const m_iszPuntSound: usize = 0xC38; // CUtlSymbolLarge
                pub const m_bUsePuntSound: usize = 0xC40; // bool
                pub const m_bOriginalBlockLOS: usize = 0xC41; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            pub mod CLightEntity {
                pub const m_CLightComponent: usize = 0x7D8; // CLightComponent*
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x508; // Vector
                pub const m_vBoxMaxs: usize = 0x514; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            // NetworkVarNames: m_hGraphDefinitionAG2 (HNmGraphDefinitionStrong)
            // NetworkVarNames: m_bIsUsingAG2 (bool)
            // NetworkVarNames: m_serializedPoseRecipeAG2 (uint8)
            // NetworkVarNames: m_nSerializePoseRecipeSizeAG2 (int)
            // NetworkVarNames: m_nSerializePoseRecipeVersionAG2 (int)
            // NetworkVarNames: m_nGraphCreationFlagsAG2 (uint8)
            // NetworkVarNames: m_nServerGraphDefReloadCountAG2 (int)
            // NetworkVarNames: m_nServerSerializationContextIteration (int)
            pub mod CBaseAnimGraphController {
                pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
                pub const m_bSequenceFinished: usize = 0x220; // bool
                pub const m_flSoundSyncTime: usize = 0x224; // float32
                pub const m_nActiveIKChainMask: usize = 0x228; // uint32
                pub const m_hSequence: usize = 0x22C; // HSequence
                pub const m_flSeqStartTime: usize = 0x230; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x234; // float32
                pub const m_nAnimLoopMode: usize = 0x238; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x23C; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x248; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x24A; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x24B; // bool
                pub const m_bLastUpdateSkipped: usize = 0x24C; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x250; // GameTime_t
                pub const m_hGraphDefinitionAG2: usize = 0x588; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_bIsUsingAG2: usize = 0x590; // bool
                pub const m_serializedPoseRecipeAG2: usize = 0x598; // CNetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeSizeAG2: usize = 0x5B0; // int32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x5B4; // int32
                pub const m_nGraphCreationFlagsAG2: usize = 0x5B8; // uint8
                pub const m_nServerGraphDefReloadCountAG2: usize = 0x7A0; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x7A4; // int32
            }
            // Parent: None
            // Field count: 10
            pub mod CBuoyancyHelper {
                pub const m_nFluidType: usize = 0x18; // CUtlStringToken
                pub const m_flFluidDensity: usize = 0x1C; // float32
                pub const m_flNeutrallyBuoyantGravity: usize = 0x20; // float32
                pub const m_flNeutrallyBuoyantLinearDamping: usize = 0x24; // float32
                pub const m_flNeutrallyBuoyantAngularDamping: usize = 0x28; // float32
                pub const m_bNeutrallyBuoyant: usize = 0x2C; // bool
                pub const m_vecFractionOfWheelSubmergedForWheelFriction: usize = 0x30; // CUtlVector<float32>
                pub const m_vecWheelFrictionScales: usize = 0x48; // CUtlVector<float32>
                pub const m_vecFractionOfWheelSubmergedForWheelDrag: usize = 0x60; // CUtlVector<float32>
                pub const m_vecWheelDrag: usize = 0x78; // CUtlVector<float32>
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CModelPointEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            pub mod CFuncBrush {
                pub const m_iSolidity: usize = 0x7D8; // BrushSolidities_e
                pub const m_iDisabled: usize = 0x7DC; // int32
                pub const m_bSolidBsp: usize = 0x7E0; // bool
                pub const m_iszExcludedClass: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_bInvertExclusion: usize = 0x7F0; // bool
                pub const m_bScriptedMovement: usize = 0x7F1; // bool
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CItemSoda {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: CBaseModelEntity
            // Field count: 22
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_szSnapshotFileName (char)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bFrozen (bool)
            // NetworkVarNames: m_flFreezeTransitionDuration (float)
            // NetworkVarNames: m_nStopType (int)
            // NetworkVarNames: m_bAnimateDuringGameplayPause (bool)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flPreSimTime (float32)
            // NetworkVarNames: m_vServerControlPoints (Vector)
            // NetworkVarNames: m_iServerControlPointAssignments (uint8)
            // NetworkVarNames: m_hControlPointEnts (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bNoSave (bool)
            // NetworkVarNames: m_bNoFreeze (bool)
            // NetworkVarNames: m_bNoRamp (bool)
            pub mod CParticleSystem {
                pub const m_szSnapshotFileName: usize = 0x7D8; // char[512]
                pub const m_bActive: usize = 0x9D8; // bool
                pub const m_bFrozen: usize = 0x9D9; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x9DC; // float32
                pub const m_nStopType: usize = 0x9E0; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x9E4; // bool
                pub const m_iEffectIndex: usize = 0x9E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x9F0; // GameTime_t
                pub const m_flPreSimTime: usize = 0x9F4; // float32
                pub const m_vServerControlPoints: usize = 0x9F8; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0xA28; // uint8[4]
                pub const m_hControlPointEnts: usize = 0xA2C; // CHandle<CBaseEntity>[64]
                pub const m_bNoSave: usize = 0xB2C; // bool
                pub const m_bNoFreeze: usize = 0xB2D; // bool
                pub const m_bNoRamp: usize = 0xB2E; // bool
                pub const m_bStartActive: usize = 0xB2F; // bool
                pub const m_iszEffectName: usize = 0xB30; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0xB38; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0xD38; // int32
                pub const m_vecDataCPValue: usize = 0xD3C; // Vector
                pub const m_nTintCP: usize = 0xD48; // int32
                pub const m_clrTint: usize = 0xD4C; // Color
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            pub mod CTriggerBrush {
                pub const m_OnStartTouch: usize = 0x7D8; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x800; // CEntityIOOutput
                pub const m_OnUse: usize = 0x828; // CEntityIOOutput
                pub const m_iInputFilter: usize = 0x850; // int32
                pub const m_iDontMessageParent: usize = 0x854; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1Silencer {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flValues (float)
            // NetworkVarNames: m_nValueCounts (int)
            // NetworkVarNames: m_nBucketCount (int)
            // NetworkVarNames: m_flInterval (float)
            // NetworkVarNames: m_flFinalValue (float)
            // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
            // NetworkVarNames: m_bStopped (bool)
            pub mod CTimeline {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: CItem
            // Field count: 0
            pub mod CItemAssaultSuit {
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            // NetworkVarNames: m_flFrameRate (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_nNumBeamEnts (uint8)
            // NetworkVarNames: m_hBaseMaterial (HMaterialStrong)
            // NetworkVarNames: m_nHaloIndex (HMaterialStrong)
            // NetworkVarNames: m_nBeamType (BeamType_t)
            // NetworkVarNames: m_nBeamFlags (uint32)
            // NetworkVarNames: m_hAttachEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nAttachIndex (AttachmentHandle_t)
            // NetworkVarNames: m_fWidth (float32)
            // NetworkVarNames: m_fEndWidth (float32)
            // NetworkVarNames: m_fFadeLength (float32)
            // NetworkVarNames: m_fHaloScale (float32)
            // NetworkVarNames: m_fAmplitude (float32)
            // NetworkVarNames: m_fStartFrame (float32)
            // NetworkVarNames: m_fSpeed (float32)
            // NetworkVarNames: m_flFrame (float32)
            // NetworkVarNames: m_nClipStyle (BeamClipStyle_t)
            // NetworkVarNames: m_bTurnedOff (bool)
            // NetworkVarNames: m_vecEndPos (VectorWS)
            pub mod CBeam {
                pub const m_flFrameRate: usize = 0x7D8; // float32
                pub const m_flHDRColorScale: usize = 0x7DC; // float32
                pub const m_flFireTime: usize = 0x7E0; // GameTime_t
                pub const m_flDamage: usize = 0x7E4; // float32
                pub const m_nNumBeamEnts: usize = 0x7E8; // uint8
                pub const m_hBaseMaterial: usize = 0x7F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0x7F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0x800; // BeamType_t
                pub const m_nBeamFlags: usize = 0x804; // uint32
                pub const m_hAttachEntity: usize = 0x808; // CHandle<CBaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x830; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0x83C; // float32
                pub const m_fEndWidth: usize = 0x840; // float32
                pub const m_fFadeLength: usize = 0x844; // float32
                pub const m_fHaloScale: usize = 0x848; // float32
                pub const m_fAmplitude: usize = 0x84C; // float32
                pub const m_fStartFrame: usize = 0x850; // float32
                pub const m_fSpeed: usize = 0x854; // float32
                pub const m_flFrame: usize = 0x858; // float32
                pub const m_nClipStyle: usize = 0x85C; // BeamClipStyle_t
                pub const m_bTurnedOff: usize = 0x860; // bool
                pub const m_vecEndPos: usize = 0x864; // VectorWS
                pub const m_hEndEntity: usize = 0x870; // CHandle<CBaseEntity>
                pub const m_nDissolveType: usize = 0x874; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            pub mod CLogicEventListener {
                pub const m_strEventName: usize = 0x500; // CUtlString
                pub const m_bIsEnabled: usize = 0x508; // bool
                pub const m_nTeam: usize = 0x50C; // int32
                pub const m_OnEventFired: usize = 0x510; // CEntityIOOutput
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            pub mod CInfoData {
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod FilterHealth {
                pub const m_bAdrenalineActive: usize = 0x548; // bool
                pub const m_iHealthMin: usize = 0x54C; // int32
                pub const m_iHealthMax: usize = 0x550; // int32
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCSSprite {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CMathColorBlend {
                pub const m_flInMin: usize = 0x4F0; // float32
                pub const m_flInMax: usize = 0x4F4; // float32
                pub const m_OutColor1: usize = 0x4F8; // Color
                pub const m_OutColor2: usize = 0x4FC; // Color
                pub const m_OutValue: usize = 0x500; // CEntityOutputTemplate<Color>
            }
            // Parent: CModelPointEntity
            // Field count: 0
            pub mod CShower {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            pub mod CPathSimpleAPI {
            }
            // Parent: CModelPointEntity
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nUniqueID (int)
            // NetworkVarNames: m_unAccountID (uint32)
            // NetworkVarNames: m_unTraceID (uint32)
            // NetworkVarNames: m_rtGcTime (uint32)
            // NetworkVarNames: m_vecEndPos (Vector)
            // NetworkVarNames: m_vecStart (Vector)
            // NetworkVarNames: m_vecLeft (Vector)
            // NetworkVarNames: m_vecNormal (Vector)
            // NetworkVarNames: m_nPlayer (int)
            // NetworkVarNames: m_nEntity (int)
            // NetworkVarNames: m_nHitbox (int)
            // NetworkVarNames: m_flCreationTime (float)
            // NetworkVarNames: m_nTintID (int)
            // NetworkVarNames: m_nVersion (uint8)
            // NetworkVarNames: m_ubSignature (uint8)
            pub mod CPlayerSprayDecal {
                pub const m_nUniqueID: usize = 0x7D8; // int32
                pub const m_unAccountID: usize = 0x7DC; // uint32
                pub const m_unTraceID: usize = 0x7E0; // uint32
                pub const m_rtGcTime: usize = 0x7E4; // uint32
                pub const m_vecEndPos: usize = 0x7E8; // Vector
                pub const m_vecStart: usize = 0x7F4; // Vector
                pub const m_vecLeft: usize = 0x800; // Vector
                pub const m_vecNormal: usize = 0x80C; // Vector
                pub const m_nPlayer: usize = 0x818; // int32
                pub const m_nEntity: usize = 0x81C; // int32
                pub const m_nHitbox: usize = 0x820; // int32
                pub const m_flCreationTime: usize = 0x824; // float32
                pub const m_nTintID: usize = 0x828; // int32
                pub const m_nVersion: usize = 0x82C; // uint8
                pub const m_ubSignature: usize = 0x82D; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0x7D8; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: CBaseEntity
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_Entity_Color (Color)
            // NetworkVarNames: m_Entity_flBrightness (float)
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_hLightProbeTexture_AmbientCube (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SDF (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_DC (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_R (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_G (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_B (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            pub mod CEnvCombinedLightProbeVolume {
                pub const m_Entity_Color: usize = 0x1568; // Color
                pub const m_Entity_flBrightness: usize = 0x156C; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x1578; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1580; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1588; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1590; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x15A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x15A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x15B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x15C8; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x15D4; // Vector
                pub const m_Entity_bMoveable: usize = 0x15E0; // bool
                pub const m_Entity_nHandshake: usize = 0x15E4; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x15E8; // int32
                pub const m_Entity_nPriority: usize = 0x15EC; // int32
                pub const m_Entity_bStartDisabled: usize = 0x15F0; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x15F4; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x15F8; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x1604; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1608; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x160C; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1610; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1614; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1618; // int32
                pub const m_Entity_bEnabled: usize = 0x1631; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            pub mod CSoundEventPathCornerEntity {
                pub const m_iszPathCorner: usize = 0x5B8; // CUtlSymbolLarge
                pub const m_iCountMax: usize = 0x5C0; // int32
                pub const m_flDistanceMax: usize = 0x5C4; // float32
                pub const m_flDistMaxSqr: usize = 0x5C8; // float32
                pub const m_flDotProductMax: usize = 0x5CC; // float32
                pub const m_bPlaying: usize = 0x5D0; // bool
                pub const m_vecCornerPairsNetworked: usize = 0x5F8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: CPlayer_CameraServices
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iFOV (uint32)
            // NetworkVarNames: m_iFOVStart (uint32)
            // NetworkVarNames: m_flFOVTime (GameTime_t)
            // NetworkVarNames: m_flFOVRate (float32)
            // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x170; // uint32
                pub const m_iFOVStart: usize = 0x174; // uint32
                pub const m_flFOVTime: usize = 0x178; // GameTime_t
                pub const m_flFOVRate: usize = 0x17C; // float32
                pub const m_hZoomOwner: usize = 0x180; // CHandle<CBaseEntity>
                pub const m_hTriggerFogList: usize = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_hLastFogTrigger: usize = 0x1A0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: CCSPlayerPawnBase
            // Field count: 121
            //
            // Metadata:
            // MNetworkOutOfPVSUpdates
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
            // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
            // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
            // NetworkVarNames: m_bHasFemaleVoice (bool)
            // NetworkVarNames: m_szLastPlaceName (char)
            // NetworkVarNames: m_bInBuyZone (bool)
            // NetworkVarNames: m_bInHostageRescueZone (bool)
            // NetworkVarNames: m_bInBombZone (bool)
            // NetworkVarNames: m_iRetakesOffering (int)
            // NetworkVarNames: m_iRetakesOfferingCard (int)
            // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
            // NetworkVarNames: m_bRetakesMVPLastRound (bool)
            // NetworkVarNames: m_iRetakesMVPBoostItem (int)
            // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
            // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
            // NetworkVarNames: m_aimPunchAngle (QAngle)
            // NetworkVarNames: m_aimPunchAngleVel (QAngle)
            // NetworkVarNames: m_aimPunchTickBase (GameTick_t)
            // NetworkVarNames: m_aimPunchTickFraction (float)
            // NetworkVarNames: m_bIsBuyMenuOpen (bool)
            // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
            // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
            // NetworkVarNames: m_nRagdollDamageBone (int)
            // NetworkVarNames: m_vRagdollDamageForce (Vector)
            // NetworkVarNames: m_vRagdollDamagePosition (Vector)
            // NetworkVarNames: m_szRagdollDamageWeaponName (char)
            // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
            // NetworkVarNames: m_vRagdollServerOrigin (Vector)
            // NetworkVarNames: m_EconGloves (CEconItemView)
            // NetworkVarNames: m_nEconGlovesChanged (uint8)
            // NetworkVarNames: m_qDeathEyeAngles (QAngle)
            // NetworkVarNames: m_bLeftHanded (bool)
            // NetworkVarNames: m_fSwitchedHandednessTime (GameTime_t)
            // NetworkVarNames: m_flViewmodelOffsetX (float)
            // NetworkVarNames: m_flViewmodelOffsetY (float)
            // NetworkVarNames: m_flViewmodelOffsetZ (float)
            // NetworkVarNames: m_flViewmodelFOV (float)
            // NetworkVarNames: m_bIsWalking (bool)
            // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_bIsScoped (bool)
            // NetworkVarNames: m_bResumeZoom (bool)
            // NetworkVarNames: m_bIsDefusing (bool)
            // NetworkVarNames: m_bIsGrabbingHostage (bool)
            // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
            // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
            // NetworkVarNames: m_bInNoDefuseArea (bool)
            // NetworkVarNames: m_nWhichBombZone (int)
            // NetworkVarNames: m_iShotsFired (int)
            // NetworkVarNames: m_flFlinchStack (float)
            // NetworkVarNames: m_flVelocityModifier (float)
            // NetworkVarNames: m_flHitHeading (float)
            // NetworkVarNames: m_nHitBodyPart (int)
            // NetworkVarNames: m_bWaitForNoAttack (bool)
            // NetworkVarNames: m_bKilledByHeadshot (bool)
            // NetworkVarNames: m_thirdPersonHeading (QAngle)
            // NetworkVarNames: m_flSlopeDropOffset (float)
            // NetworkVarNames: m_flSlopeDropHeight (float)
            // NetworkVarNames: m_vHeadConstraintOffset (Vector)
            // NetworkVarNames: m_ArmorValue (int32)
            // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
            // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
            // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
            // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
            // NetworkVarNames: m_GunGameImmunityColor (Color)
            // NetworkVarNames: m_PredictedDamageTags (PredictedDamageTag_t)
            // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
            // NetworkVarNames: m_bGunGameImmunity (bool)
            // NetworkVarNames: m_fMolotovDamageTime (float)
            // NetworkVarNames: m_angEyeAngles (QAngle)
            pub mod CCSPlayerPawn {
                pub const m_pBulletServices: usize = 0xEE8; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0xEF0; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0xEF8; // CCSPlayer_BuyServices*
                pub const m_pActionTrackingServices: usize = 0xF00; // CCSPlayer_ActionTrackingServices*
                pub const m_pRadioServices: usize = 0xF08; // CCSPlayer_RadioServices*
                pub const m_pDamageReactServices: usize = 0xF10; // CCSPlayer_DamageReactServices*
                pub const m_nCharacterDefIndex: usize = 0xF18; // uint16
                pub const m_bHasFemaleVoice: usize = 0xF1A; // bool
                pub const m_strVOPrefix: usize = 0xF20; // CUtlString
                pub const m_szLastPlaceName: usize = 0xF28; // char[18]
                pub const m_bInHostageResetZone: usize = 0xFE8; // bool
                pub const m_bInBuyZone: usize = 0xFE9; // bool
                pub const m_TouchingBuyZones: usize = 0xFF0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_bWasInBuyZone: usize = 0x1008; // bool
                pub const m_bInHostageRescueZone: usize = 0x1009; // bool
                pub const m_bInBombZone: usize = 0x100A; // bool
                pub const m_bWasInHostageRescueZone: usize = 0x100B; // bool
                pub const m_iRetakesOffering: usize = 0x100C; // int32
                pub const m_iRetakesOfferingCard: usize = 0x1010; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x1014; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x1015; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x1018; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x101C; // loadout_slot_t
                pub const m_flHealthShotBoostExpirationTime: usize = 0x1020; // GameTime_t
                pub const m_flLandingTimeSeconds: usize = 0x1024; // float32
                pub const m_aimPunchAngle: usize = 0x1028; // QAngle
                pub const m_aimPunchAngleVel: usize = 0x1034; // QAngle
                pub const m_aimPunchTickBase: usize = 0x1040; // GameTick_t
                pub const m_aimPunchTickFraction: usize = 0x1044; // float32
                pub const m_aimPunchCache: usize = 0x1048; // CUtlVector<QAngle>
                pub const m_bIsBuyMenuOpen: usize = 0x1060; // bool
                pub const m_lastLandTime: usize = 0x1708; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x170C; // bool
                pub const m_iPlayerLocked: usize = 0x1710; // int32
                pub const m_flTimeOfLastInjury: usize = 0x1718; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x171C; // GameTime_t
                pub const m_bNextSprayDecalTimeExpedited: usize = 0x1720; // bool
                pub const m_nRagdollDamageBone: usize = 0x1724; // int32
                pub const m_vRagdollDamageForce: usize = 0x1728; // Vector
                pub const m_vRagdollDamagePosition: usize = 0x1734; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x1740; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x1780; // bool
                pub const m_vRagdollServerOrigin: usize = 0x1784; // Vector
                pub const m_EconGloves: usize = 0x1790; // CEconItemView
                pub const m_nEconGlovesChanged: usize = 0x1A38; // uint8
                pub const m_qDeathEyeAngles: usize = 0x1A3C; // QAngle
                pub const m_bSkipOneHeadConstraintUpdate: usize = 0x1A48; // bool
                pub const m_bLeftHanded: usize = 0x1A49; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x1A4C; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x1A50; // float32
                pub const m_flViewmodelOffsetY: usize = 0x1A54; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x1A58; // float32
                pub const m_flViewmodelFOV: usize = 0x1A5C; // float32
                pub const m_bIsWalking: usize = 0x1A60; // bool
                pub const m_fLastGivenDefuserTime: usize = 0x1A64; // float32
                pub const m_fLastGivenBombTime: usize = 0x1A68; // float32
                pub const m_flDealtDamageToEnemyMostRecentTimestamp: usize = 0x1A6C; // float32
                pub const m_iDisplayHistoryBits: usize = 0x1A70; // uint32
                pub const m_flLastAttackedTeammate: usize = 0x1A74; // float32
                pub const m_allowAutoFollowTime: usize = 0x1A78; // GameTime_t
                pub const m_bResetArmorNextSpawn: usize = 0x1A7C; // bool
                pub const m_nLastKillerIndex: usize = 0x1A80; // CEntityIndex
                pub const m_entitySpottedState: usize = 0x1A88; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1AA0; // int32
                pub const m_bIsScoped: usize = 0x1AA4; // bool
                pub const m_bResumeZoom: usize = 0x1AA5; // bool
                pub const m_bIsDefusing: usize = 0x1AA6; // bool
                pub const m_bIsGrabbingHostage: usize = 0x1AA7; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x1AA8; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x1AAC; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x1AB0; // bool
                pub const m_iBombSiteIndex: usize = 0x1AB4; // CEntityIndex
                pub const m_nWhichBombZone: usize = 0x1AB8; // int32
                pub const m_bInBombZoneTrigger: usize = 0x1ABC; // bool
                pub const m_bWasInBombZoneTrigger: usize = 0x1ABD; // bool
                pub const m_iShotsFired: usize = 0x1AC0; // int32
                pub const m_flFlinchStack: usize = 0x1AC4; // float32
                pub const m_flVelocityModifier: usize = 0x1AC8; // float32
                pub const m_flHitHeading: usize = 0x1ACC; // float32
                pub const m_nHitBodyPart: usize = 0x1AD0; // int32
                pub const m_vecTotalBulletForce: usize = 0x1AD4; // Vector
                pub const m_bWaitForNoAttack: usize = 0x1AE0; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x1AE4; // float32
                pub const m_bKilledByHeadshot: usize = 0x1AE8; // bool
                pub const m_LastHitBox: usize = 0x1AEC; // int32
                pub const m_pBot: usize = 0x1AF0; // CCSBot*
                pub const m_bBotAllowActive: usize = 0x1AF8; // bool
                pub const m_thirdPersonHeading: usize = 0x1AFC; // QAngle
                pub const m_flSlopeDropOffset: usize = 0x1B08; // float32
                pub const m_flSlopeDropHeight: usize = 0x1B0C; // float32
                pub const m_vHeadConstraintOffset: usize = 0x1B10; // Vector
                pub const m_nLastPickupPriority: usize = 0x1B1C; // int32
                pub const m_flLastPickupPriorityTime: usize = 0x1B20; // float32
                pub const m_ArmorValue: usize = 0x1B24; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x1B28; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x1B2A; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x1B2C; // uint16
                pub const m_iLastWeaponFireUsercmd: usize = 0x1B30; // int32
                pub const m_bIsSpawning: usize = 0x1B34; // bool
                pub const m_iDeathFlags: usize = 0x1B40; // int32
                pub const m_bHasDeathInfo: usize = 0x1B44; // bool
                pub const m_flDeathInfoTime: usize = 0x1B48; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x1B4C; // Vector
                pub const m_vecPlayerPatchEconIndices: usize = 0x1B58; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x1B6C; // Color
                pub const m_grenadeParameterStashTime: usize = 0x1B70; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x1B74; // bool
                pub const m_angStashedShootAngles: usize = 0x1B78; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x1B84; // Vector
                pub const m_vecStashedVelocity: usize = 0x1B90; // Vector
                pub const m_angShootAngleHistory: usize = 0x1B9C; // QAngle[2]
                pub const m_vecThrowPositionHistory: usize = 0x1BB4; // Vector[2]
                pub const m_vecVelocityHistory: usize = 0x1BCC; // Vector[2]
                pub const m_PredictedDamageTags: usize = 0x1BE8; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                pub const m_nHighestAppliedDamageTagTick: usize = 0x1C50; // int32
                pub const m_bCommittingSuicideOnTeamChange: usize = 0x1C54; // bool
                pub const m_wasNotKilledNaturally: usize = 0x1C55; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x1C58; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x1C5C; // bool
                pub const m_fMolotovDamageTime: usize = 0x1C60; // float32
                pub const m_angEyeAngles: usize = 0x1C64; // QAngle
            }
            // Parent: CBaseEntity
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hLightProbeTexture_AmbientCube (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SDF (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_DC (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_R (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_G (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_B (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            pub mod CEnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x14E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x14F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x14F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1500; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1508; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1510; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1518; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x1530; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x153C; // Vector
                pub const m_Entity_bMoveable: usize = 0x1548; // bool
                pub const m_Entity_nHandshake: usize = 0x154C; // int32
                pub const m_Entity_nPriority: usize = 0x1550; // int32
                pub const m_Entity_bStartDisabled: usize = 0x1554; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x1558; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x155C; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1560; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1564; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1568; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x156C; // int32
                pub const m_Entity_bEnabled: usize = 0x1579; // bool
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 3
            pub mod SpawnPoint {
                pub const m_iPriority: usize = 0x4F0; // int32
                pub const m_bEnabled: usize = 0x4F4; // bool
                pub const m_nType: usize = 0x4F8; // int32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM249 {
            }
            // Parent: CRopeKeyframe
            // Field count: 0
            pub mod CRopeKeyframeAlias_move_rope {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseServerFuncs_Sounds {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulsePhysicsConstraintsFuncs {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<CBaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
            }
            // Parent: CSceneEntity
            // Field count: 0
            pub mod CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x4F0; // int8
                pub const m_iMaxRagdollCount: usize = 0x4F4; // int32
                pub const m_bSaveImportant: usize = 0x4F8; // bool
                pub const m_bCanTakeDamage: usize = 0x4F9; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CMultiplayRules {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerRemove {
                pub const m_OnRemove: usize = 0x9A8; // CEntityIOOutput
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 1
            pub mod CMarkupVolumeTagged_Nav {
                pub const m_nScopes: usize = 0x818; // NavScopeFlags_t
            }
            // Parent: SpawnPoint
            // Field count: 0
            pub mod CInfoPlayerTerrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            pub mod CLogicAutosave {
                pub const m_bForceNewLevelUnit: usize = 0x4F0; // bool
                pub const m_minHitPoints: usize = 0x4F4; // int32
                pub const m_minHitPointsToCommit: usize = 0x4F8; // int32
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CPrecipitation {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCommentaryViewPosition {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            pub mod CEnvGlobal {
                pub const m_outCounter: usize = 0x4F0; // CEntityOutputTemplate<int32>
                pub const m_globalstate: usize = 0x518; // CUtlSymbolLarge
                pub const m_triggermode: usize = 0x520; // int32
                pub const m_initialstate: usize = 0x524; // int32
                pub const m_counter: usize = 0x528; // int32
            }
            // Parent: CLogicNPCCounterAABB
            // Field count: 0
            pub mod CLogicNPCCounterOBB {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            pub mod CPhysMagnet {
                pub const m_OnMagnetAttach: usize = 0xA90; // CEntityIOOutput
                pub const m_OnMagnetDetach: usize = 0xAB8; // CEntityIOOutput
                pub const m_massScale: usize = 0xAE0; // float32
                pub const m_forceLimit: usize = 0xAE4; // float32
                pub const m_torqueLimit: usize = 0xAE8; // float32
                pub const m_MagnettedEntities: usize = 0xAF0; // CUtlVector<magnetted_objects_t>
                pub const m_bActive: usize = 0xB08; // bool
                pub const m_bHasHitSomething: usize = 0xB09; // bool
                pub const m_flTotalMass: usize = 0xB0C; // float32
                pub const m_flRadius: usize = 0xB10; // float32
                pub const m_flNextSuckTime: usize = 0xB14; // GameTime_t
                pub const m_iMaxObjectsAttached: usize = 0xB18; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x30; // CScriptComponent*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_AutoaimServices {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP5SD {
            }
            // Parent: CCSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            pub mod CWeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x11D0; // bool
                pub const m_bRedraw: usize = 0x11D1; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            pub mod CCommentaryAuto {
                pub const m_OnCommentaryNewGame: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnCommentaryMidGame: usize = 0x518; // CEntityIOOutput
                pub const m_OnCommentaryMultiplayerSpawn: usize = 0x540; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
                pub const m_entity: usize = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x30; // ModelConfigHandle_t
                pub const m_Name: usize = 0x38; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x40; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x58; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CCSWeaponBase
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            pub mod CC4 {
                pub const m_vecLastValidPlayerHeldPosition: usize = 0x1200; // Vector
                pub const m_vecLastValidDroppedPosition: usize = 0x120C; // Vector
                pub const m_bDoValidDroppedPositionCheck: usize = 0x1218; // bool
                pub const m_bStartedArming: usize = 0x1219; // bool
                pub const m_fArmedTime: usize = 0x121C; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x1220; // bool
                pub const m_bIsPlantingViaUse: usize = 0x1221; // bool
                pub const m_entitySpottedState: usize = 0x1228; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1240; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x1244; // bool[7]
                pub const m_bBombPlanted: usize = 0x124B; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CHostageCarriableProp {
            }
            // Parent: CDynamicProp
            // Field count: 0
            pub mod CDynamicPropAlias_cable_dynamic {
            }
            // Parent: CBasePlayerPawn
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_CTouchExpansionComponent (CTouchExpansionComponent::Storage_t)
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            pub mod CCSPlayerPawnBase {
                pub const m_CTouchExpansionComponent: usize = 0xDA0; // CTouchExpansionComponent
                pub const m_pPingServices: usize = 0xDF0; // CCSPlayer_PingServices*
                pub const m_blindUntilTime: usize = 0xDF8; // GameTime_t
                pub const m_blindStartTime: usize = 0xDFC; // GameTime_t
                pub const m_iPlayerState: usize = 0xE00; // CSPlayerState
                pub const m_bRespawning: usize = 0xEB0; // bool
                pub const m_bHasMovedSinceSpawn: usize = 0xEB1; // bool
                pub const m_iNumSpawns: usize = 0xEB4; // int32
                pub const m_flIdleTimeSinceLastAction: usize = 0xEBC; // float32
                pub const m_fNextRadarUpdateTime: usize = 0xEC0; // float32
                pub const m_flFlashDuration: usize = 0xEC4; // float32
                pub const m_flFlashMaxAlpha: usize = 0xEC8; // float32
                pub const m_flProgressBarStartTime: usize = 0xECC; // float32
                pub const m_iProgressBarDuration: usize = 0xED0; // int32
                pub const m_hOriginalController: usize = 0xED4; // CHandle<CCSPlayerController>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x590; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CInfoPlayerStart {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_bIsMaster: usize = 0x4F1; // bool
                pub const m_pPawnSubclass: usize = 0x4F8; // CGlobalSymbol
            }
            // Parent: CBaseEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            pub mod CEntityFlame {
                pub const m_hEntAttached: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_bCheapEffect: usize = 0x4F4; // bool
                pub const m_flSize: usize = 0x4F8; // float32
                pub const m_bUseHitboxes: usize = 0x4FC; // bool
                pub const m_iNumHitboxFires: usize = 0x500; // int32
                pub const m_flHitboxFireScale: usize = 0x504; // float32
                pub const m_flLifetime: usize = 0x508; // GameTime_t
                pub const m_hAttacker: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_flDirectDamagePerSecond: usize = 0x510; // float32
                pub const m_iCustomDamageType: usize = 0x514; // int32
            }
            // Parent: CGameSceneNode
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x170; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x3F0; // bool
                pub const m_bUseParentRenderBounds: usize = 0x3F1; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x3F2; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x3F4; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x3F8; // uint8
            }
            // Parent: None
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_strStartTouchEventName (CUtlString)
            // NetworkVarNames: m_strEndTouchEventName (CUtlString)
            // NetworkVarNames: m_strTriggerID (CUtlString)
            pub mod CTriggerGameEvent {
                pub const m_strStartTouchEventName: usize = 0x9A8; // CUtlString
                pub const m_strEndTouchEventName: usize = 0x9B0; // CUtlString
                pub const m_strTriggerID: usize = 0x9B8; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CMessageEntity {
                pub const m_radius: usize = 0x4F0; // int32
                pub const m_messageText: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_drawText: usize = 0x500; // bool
                pub const m_bDeveloperOnly: usize = 0x501; // bool
                pub const m_bEnabled: usize = 0x502; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CEnvEntityIgniter {
                pub const m_flLifetime: usize = 0x4F0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // Parent: CEconEntity
            // Field count: 2
            pub mod CEconWearable {
                pub const m_nForceSkin: usize = 0xE50; // int32
                pub const m_bAlwaysAllow: usize = 0xE54; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseArraylib {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            pub mod CItem {
                pub const m_OnPlayerTouch: usize = 0xA98; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0xAC0; // CEntityIOOutput
                pub const m_bActivateWhenAtRest: usize = 0xAE8; // bool
                pub const m_OnCacheInteraction: usize = 0xAF0; // CEntityIOOutput
                pub const m_OnGlovePulled: usize = 0xB18; // CEntityIOOutput
                pub const m_vOriginalSpawnOrigin: usize = 0xB40; // VectorWS
                pub const m_vOriginalSpawnAngles: usize = 0xB4C; // QAngle
                pub const m_bPhysStartAsleep: usize = 0xB58; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 7
            pub mod CTriggerPush {
                pub const m_angPushEntitySpace: usize = 0x9A8; // QAngle
                pub const m_vecPushDirEntitySpace: usize = 0x9B4; // Vector
                pub const m_bTriggerOnStartTouch: usize = 0x9C0; // bool
                pub const m_bUsePathSimple: usize = 0x9C1; // bool
                pub const m_iszPathSimpleName: usize = 0x9C8; // CUtlSymbolLarge
                pub const m_PathSimple: usize = 0x9D0; // CPathSimple*
                pub const m_splinePushType: usize = 0x9D8; // uint32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0xA90; // bool
                pub const m_iShapeType: usize = 0xA94; // int32
                pub const m_bConformToCollisionBounds: usize = 0xA98; // bool
                pub const m_mPreferredCatchTransform: usize = 0xAA0; // CTransform
            }
            // Parent: CPointEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_nResolutionX (int)
            // NetworkVarNames: m_nResolutionY (int)
            // NetworkVarNames: m_szLayoutFileName (string_t)
            // NetworkVarNames: m_RenderAttrName (string_t)
            // NetworkVarNames: m_TargetEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nTargetChangeCount (int)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_nResolutionX: usize = 0x4F4; // int32
                pub const m_nResolutionY: usize = 0x4F8; // int32
                pub const m_szLayoutFileName: usize = 0x500; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x508; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x510; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x528; // int32
                pub const m_vecCSSClasses: usize = 0x530; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_szTargetsName: usize = 0x548; // CUtlSymbolLarge
                pub const m_AdditionalTargetEntities: usize = 0x550; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: CPointEntity
            // Field count: 16
            pub mod CPointAngularVelocitySensor {
                pub const m_hTargetEntity: usize = 0x4F0; // CHandle<CBaseEntity>
                pub const m_flThreshold: usize = 0x4F4; // float32
                pub const m_nLastCompareResult: usize = 0x4F8; // int32
                pub const m_nLastFireResult: usize = 0x4FC; // int32
                pub const m_flFireTime: usize = 0x500; // GameTime_t
                pub const m_flFireInterval: usize = 0x504; // float32
                pub const m_flLastAngVelocity: usize = 0x508; // float32
                pub const m_lastOrientation: usize = 0x50C; // QAngle
                pub const m_vecAxis: usize = 0x518; // VectorWS
                pub const m_bUseHelper: usize = 0x524; // bool
                pub const m_AngularVelocity: usize = 0x528; // CEntityOutputTemplate<float32>
                pub const m_OnLessThan: usize = 0x550; // CEntityIOOutput
                pub const m_OnLessThanOrEqualTo: usize = 0x578; // CEntityIOOutput
                pub const m_OnGreaterThan: usize = 0x5A0; // CEntityIOOutput
                pub const m_OnGreaterThanOrEqualTo: usize = 0x5C8; // CEntityIOOutput
                pub const m_OnEqualTo: usize = 0x5F0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            pub mod CPlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x4F0; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x4F4; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x4F8; // float32
                pub const m_flFadeTime: usize = 0x4FC; // float32
                pub const m_bStartDisabled: usize = 0x500; // bool
                pub const m_bIsEnabled: usize = 0x501; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_FollowEntity {
                pub const m_ParamBoneOrAttachName: usize = 0x48; // CUtlString
                pub const m_ParamBoneOrAttachNameChild: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            pub mod CPulseFuncs_GameParticleManager {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x548; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 7
            pub mod CKeepUpright {
                pub const m_worldGoalAxis: usize = 0x4F8; // Vector
                pub const m_localTestAxis: usize = 0x504; // Vector
                pub const m_nameAttach: usize = 0x518; // CUtlSymbolLarge
                pub const m_attachedObject: usize = 0x520; // CHandle<CBaseEntity>
                pub const m_angularLimit: usize = 0x524; // float32
                pub const m_bActive: usize = 0x528; // bool
                pub const m_bDampAllRotation: usize = 0x529; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 11
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x500; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x508; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x50C; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x510; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x514; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x518; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x530; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x548; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x550; // HSCRIPT
            }
            // Parent: CBaseEntity
            // Field count: 36
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nVolumeDepth (int)
            // NetworkVarNames: m_fFirstVolumeSliceThickness (float)
            // NetworkVarNames: m_nIndirectTextureDimX (int)
            // NetworkVarNames: m_nIndirectTextureDimY (int)
            // NetworkVarNames: m_nIndirectTextureDimZ (int)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
            // NetworkVarNames: m_flStartScatterTime (GameTime_t)
            // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
            // NetworkVarNames: m_flStartAnisotropy (float)
            // NetworkVarNames: m_flStartScattering (float)
            // NetworkVarNames: m_flStartDrawDistance (float)
            // NetworkVarNames: m_flDefaultAnisotropy (float)
            // NetworkVarNames: m_flDefaultScattering (float)
            // NetworkVarNames: m_flDefaultDrawDistance (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bEnableIndirect (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            // NetworkVarNames: m_fNoiseSpeed (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_vNoiseScale (Vector)
            // NetworkVarNames: m_fWindSpeed (float)
            // NetworkVarNames: m_vWindDirection (Vector)
            pub mod CEnvVolumetricFogController {
                pub const m_flScattering: usize = 0x4F0; // float32
                pub const m_TintColor: usize = 0x4F4; // Color
                pub const m_flAnisotropy: usize = 0x4F8; // float32
                pub const m_flFadeSpeed: usize = 0x4FC; // float32
                pub const m_flDrawDistance: usize = 0x500; // float32
                pub const m_flFadeInStart: usize = 0x504; // float32
                pub const m_flFadeInEnd: usize = 0x508; // float32
                pub const m_flIndirectStrength: usize = 0x50C; // float32
                pub const m_nVolumeDepth: usize = 0x510; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x514; // float32
                pub const m_nIndirectTextureDimX: usize = 0x518; // int32
                pub const m_nIndirectTextureDimY: usize = 0x51C; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x520; // int32
                pub const m_vBoxMins: usize = 0x524; // Vector
                pub const m_vBoxMaxs: usize = 0x530; // Vector
                pub const m_bActive: usize = 0x53C; // bool
                pub const m_flStartAnisoTime: usize = 0x540; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x544; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x548; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x54C; // float32
                pub const m_flStartScattering: usize = 0x550; // float32
                pub const m_flStartDrawDistance: usize = 0x554; // float32
                pub const m_flDefaultAnisotropy: usize = 0x558; // float32
                pub const m_flDefaultScattering: usize = 0x55C; // float32
                pub const m_flDefaultDrawDistance: usize = 0x560; // float32
                pub const m_bStartDisabled: usize = 0x564; // bool
                pub const m_bEnableIndirect: usize = 0x565; // bool
                pub const m_bIsMaster: usize = 0x566; // bool
                pub const m_hFogIndirectTexture: usize = 0x568; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x570; // int32
                pub const m_fNoiseSpeed: usize = 0x574; // float32
                pub const m_fNoiseStrength: usize = 0x578; // float32
                pub const m_vNoiseScale: usize = 0x57C; // Vector
                pub const m_fWindSpeed: usize = 0x588; // float32
                pub const m_vWindDirection: usize = 0x58C; // Vector
                pub const m_bFirstTime: usize = 0x598; // bool
            }
            // Parent: None
            // Field count: 13
            pub mod CBot {
                pub const m_pController: usize = 0x10; // CCSPlayerController*
                pub const m_pPlayer: usize = 0x18; // CCSPlayerPawn*
                pub const m_bHasSpawned: usize = 0x20; // bool
                pub const m_id: usize = 0x24; // uint32
                pub const m_isRunning: usize = 0xC0; // bool
                pub const m_isCrouching: usize = 0xC1; // bool
                pub const m_forwardSpeed: usize = 0xC4; // float32
                pub const m_leftSpeed: usize = 0xC8; // float32
                pub const m_verticalSpeed: usize = 0xCC; // float32
                pub const m_buttonFlags: usize = 0xD0; // uint64
                pub const m_jumpTimestamp: usize = 0xD8; // float32
                pub const m_viewForward: usize = 0xDC; // Vector
                pub const m_postureStackIndex: usize = 0xF8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_SetAnimGraphParam {
                pub const m_ParamName: usize = 0x48; // CUtlString
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: CDynamicProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            pub mod CChicken {
                pub const m_AttributeManager: usize = 0xD70; // CAttributeContainer
                pub const m_updateTimer: usize = 0x1068; // CountdownTimer
                pub const m_stuckAnchor: usize = 0x1080; // Vector
                pub const m_stuckTimer: usize = 0x1090; // CountdownTimer
                pub const m_collisionStuckTimer: usize = 0x10A8; // CountdownTimer
                pub const m_isOnGround: usize = 0x10C0; // bool
                pub const m_vFallVelocity: usize = 0x10C4; // Vector
                pub const m_desiredActivity: usize = 0x10D0; // ChickenActivity
                pub const m_currentActivity: usize = 0x10D4; // ChickenActivity
                pub const m_activityTimer: usize = 0x10D8; // CountdownTimer
                pub const m_turnRate: usize = 0x10F0; // float32
                pub const m_fleeFrom: usize = 0x10F4; // CHandle<CBaseEntity>
                pub const m_moveRateThrottleTimer: usize = 0x10F8; // CountdownTimer
                pub const m_startleTimer: usize = 0x1110; // CountdownTimer
                pub const m_vocalizeTimer: usize = 0x1128; // CountdownTimer
                pub const m_flWhenZombified: usize = 0x1140; // GameTime_t
                pub const m_jumpedThisFrame: usize = 0x1144; // bool
                pub const m_leader: usize = 0x1148; // CHandle<CCSPlayerPawn>
                pub const m_reuseTimer: usize = 0x1160; // CountdownTimer
                pub const m_hasBeenUsed: usize = 0x1178; // bool
                pub const m_jumpTimer: usize = 0x1180; // CountdownTimer
                pub const m_flLastJumpTime: usize = 0x1198; // float32
                pub const m_bInJump: usize = 0x119C; // bool
                pub const m_repathTimer: usize = 0x31A8; // CountdownTimer
                pub const m_vecPathGoal: usize = 0x3240; // Vector
                pub const m_flActiveFollowStartTime: usize = 0x324C; // GameTime_t
                pub const m_followMinuteTimer: usize = 0x3250; // CountdownTimer
                pub const m_BlockDirectionTimer: usize = 0x3270; // CountdownTimer
            }
            // Parent: CPhysicsProp
            // Field count: 5
            pub mod CPhysicsPropRespawnable {
                pub const m_vOriginalSpawnOrigin: usize = 0xE00; // VectorWS
                pub const m_vOriginalSpawnAngles: usize = 0xE0C; // QAngle
                pub const m_vOriginalMins: usize = 0xE18; // Vector
                pub const m_vOriginalMaxs: usize = 0xE24; // Vector
                pub const m_flRespawnDuration: usize = 0xE30; // float32
            }
            // Parent: CBeam
            // Field count: 19
            pub mod CEnvBeam {
                pub const m_active: usize = 0x878; // int32
                pub const m_spriteTexture: usize = 0x880; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszStartEntity: usize = 0x888; // CUtlSymbolLarge
                pub const m_iszEndEntity: usize = 0x890; // CUtlSymbolLarge
                pub const m_life: usize = 0x898; // float32
                pub const m_boltWidth: usize = 0x89C; // float32
                pub const m_noiseAmplitude: usize = 0x8A0; // float32
                pub const m_speed: usize = 0x8A4; // int32
                pub const m_restrike: usize = 0x8A8; // float32
                pub const m_iszSpriteName: usize = 0x8B0; // CUtlSymbolLarge
                pub const m_frameStart: usize = 0x8B8; // int32
                pub const m_vEndPointWorld: usize = 0x8BC; // VectorWS
                pub const m_vEndPointRelative: usize = 0x8C8; // Vector
                pub const m_radius: usize = 0x8D4; // float32
                pub const m_TouchType: usize = 0x8D8; // Touch_t
                pub const m_iFilterName: usize = 0x8E0; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x8E8; // CHandle<CBaseEntity>
                pub const m_iszDecal: usize = 0x8F0; // CUtlSymbolLarge
                pub const m_OnTouchedByEntity: usize = 0x8F8; // CEntityIOOutput
            }
            // Parent: CLightEntity
            // Field count: 0
            pub mod CLightSpotEntity {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerCallback {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            pub mod CSoundOpvarSetAutoRoomEntity {
                pub const m_traceResults: usize = 0x6A8; // CUtlVector<SoundOpvarTraceResult_t>
                pub const m_doorwayPairs: usize = 0x6C0; // CUtlVector<AutoRoomDoorwayPairs_t>
                pub const m_flSize: usize = 0x6D8; // float32
                pub const m_flHeightTolerance: usize = 0x6DC; // float32
                pub const m_flSizeSqr: usize = 0x6E0; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorSubHeaderText
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Outflow_ListenForEntityOutput {
                pub const m_OnFired: usize = 0x48; // SignatureOutflow_Resume
                pub const m_OnCanceled: usize = 0x90; // CPulse_ResumePoint
                pub const m_strEntityOutput: usize = 0xD8; // CGlobalSymbol
                pub const m_strEntityOutputParam: usize = 0xE0; // CUtlString
                pub const m_bListenUntilCanceled: usize = 0xE8; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            pub mod PhysicsRagdollPose_t {
                pub const m_Transforms: usize = 0x8; // CNetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<CBaseEntity>
                pub const m_bSetFromDebugHistory: usize = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            pub mod CPropDataComponent {
                pub const m_flDmgModBullet: usize = 0x10; // float32
                pub const m_flDmgModClub: usize = 0x14; // float32
                pub const m_flDmgModExplosive: usize = 0x18; // float32
                pub const m_flDmgModFire: usize = 0x1C; // float32
                pub const m_iszPhysicsDamageTableName: usize = 0x20; // CUtlSymbolLarge
                pub const m_iszBasePropData: usize = 0x28; // CUtlSymbolLarge
                pub const m_nInteractions: usize = 0x30; // int32
                pub const m_bSpawnMotionDisabled: usize = 0x34; // bool
                pub const m_nDisableTakePhysicsDamageSpawnFlag: usize = 0x38; // int32
                pub const m_nMotionDisabledSpawnFlag: usize = 0x3C; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 4
            pub mod CTriggerTeleport {
                pub const m_iLandmark: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_bUseLandmarkAngles: usize = 0x9B0; // bool
                pub const m_bMirrorPlayer: usize = 0x9B1; // bool
                pub const m_bCheckDestIfClearForPlayer: usize = 0x9B2; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncWall {
                pub const m_nState: usize = 0x7D8; // int32
            }
            // Parent: None
            // Field count: 12
            pub mod CBtActionAim {
                pub const m_szSensorInputKey: usize = 0x68; // CUtlString
                pub const m_szAimReadyKey: usize = 0x80; // CUtlString
                pub const m_flZoomCooldownTimestamp: usize = 0x88; // float32
                pub const m_bDoneAiming: usize = 0x8C; // bool
                pub const m_flLerpStartTime: usize = 0x90; // float32
                pub const m_flNextLookTargetLerpTime: usize = 0x94; // float32
                pub const m_flPenaltyReductionRatio: usize = 0x98; // float32
                pub const m_NextLookTarget: usize = 0x9C; // QAngle
                pub const m_AimTimer: usize = 0xA8; // CountdownTimer
                pub const m_SniperHoldTimer: usize = 0xC0; // CountdownTimer
                pub const m_FocusIntervalTimer: usize = 0xD8; // CountdownTimer
                pub const m_bAcquired: usize = 0xF0; // bool
            }
            // Parent: CBaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nVariant (int)
            // NetworkVarNames: m_nRandom (int)
            // NetworkVarNames: m_nOrdinal (int)
            // NetworkVarNames: m_sWeaponName (CUtlString)
            // NetworkVarNames: m_xuid (XUID)
            // NetworkVarNames: m_agentItem (CEconItemView)
            // NetworkVarNames: m_glovesItem (CEconItemView)
            // NetworkVarNames: m_weaponItem (CEconItemView)
            pub mod CCSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x4F0; // int32
                pub const m_nRandom: usize = 0x4F4; // int32
                pub const m_nOrdinal: usize = 0x4F8; // int32
                pub const m_sWeaponName: usize = 0x500; // CUtlString
                pub const m_xuid: usize = 0x508; // uint64
                pub const m_agentItem: usize = 0x510; // CEconItemView
                pub const m_glovesItem: usize = 0x7B8; // CEconItemView
                pub const m_weaponItem: usize = 0xA60; // CEconItemView
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CGameRulesProxy {
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CInfoLadderDismount {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseServerFuncs {
            }
            // Parent: CEnvCombinedLightProbeVolume
            // Field count: 0
            pub mod CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponP250 {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            pub mod CDestructiblePartsComponent {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<CBaseModelEntity>
                pub const m_nLastHitDamageLevel: usize = 0x64; // int32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_flTotalRoundDamageDealt (float)
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xC8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x188; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x18C; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x190; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x510; // CBaseAnimGraphController
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 5
            pub mod CFogVolume {
                pub const m_fogName: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_postProcessName: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_colorCorrectionName: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0x7F8; // bool
                pub const m_bInFogVolumesList: usize = 0x7F9; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            pub mod CFuncRotating {
                pub const m_OnStopped: usize = 0x7D8; // CEntityIOOutput
                pub const m_OnStarted: usize = 0x800; // CEntityIOOutput
                pub const m_OnReachedStart: usize = 0x828; // CEntityIOOutput
                pub const m_localRotationVector: usize = 0x850; // RotationVector
                pub const m_flFanFriction: usize = 0x85C; // float32
                pub const m_flAttenuation: usize = 0x860; // float32
                pub const m_flVolume: usize = 0x864; // float32
                pub const m_flTargetSpeed: usize = 0x868; // float32
                pub const m_flMaxSpeed: usize = 0x86C; // float32
                pub const m_flBlockDamage: usize = 0x870; // float32
                pub const m_NoiseRunning: usize = 0x878; // CUtlSymbolLarge
                pub const m_bReversed: usize = 0x880; // bool
                pub const m_bAccelDecel: usize = 0x881; // bool
                pub const m_prevLocalAngles: usize = 0x898; // QAngle
                pub const m_angStart: usize = 0x8A4; // QAngle
                pub const m_bStopAtStartPos: usize = 0x8B0; // bool
                pub const m_vecClientOrigin: usize = 0x8B4; // Vector
                pub const m_vecClientAngles: usize = 0x8C0; // QAngle
            }
            // Parent: CLogicalEntity
            // Field count: 13
            pub mod CTimerEntity {
                pub const m_OnTimer: usize = 0x4F0; // CEntityIOOutput
                pub const m_OnTimerHigh: usize = 0x518; // CEntityIOOutput
                pub const m_OnTimerLow: usize = 0x540; // CEntityIOOutput
                pub const m_iDisabled: usize = 0x568; // int32
                pub const m_flInitialDelay: usize = 0x56C; // float32
                pub const m_flRefireTime: usize = 0x570; // float32
                pub const m_bUpDownState: usize = 0x574; // bool
                pub const m_iUseRandomTime: usize = 0x578; // int32
                pub const m_bPauseAfterFiring: usize = 0x57C; // bool
                pub const m_flLowerRandomBound: usize = 0x580; // float32
                pub const m_flUpperRandomBound: usize = 0x584; // float32
                pub const m_flRemainingTime: usize = 0x588; // float32
                pub const m_bPaused: usize = 0x58C; // bool
            }
            // Parent: None
            // Field count: 14
            pub mod CBtActionMoveTo {
                pub const m_szDestinationInputKey: usize = 0x60; // CUtlString
                pub const m_szHidingSpotInputKey: usize = 0x68; // CUtlString
                pub const m_szThreatInputKey: usize = 0x70; // CUtlString
                pub const m_vecDestination: usize = 0x78; // Vector
                pub const m_bAutoLookAdjust: usize = 0x84; // bool
                pub const m_bComputePath: usize = 0x85; // bool
                pub const m_flDamagingAreasPenaltyCost: usize = 0x88; // float32
                pub const m_CheckApproximateCornersTimer: usize = 0x90; // CountdownTimer
                pub const m_CheckHighPriorityItem: usize = 0xA8; // CountdownTimer
                pub const m_RepathTimer: usize = 0xC0; // CountdownTimer
                pub const m_flArrivalEpsilon: usize = 0xD8; // float32
                pub const m_flAdditionalArrivalEpsilon2D: usize = 0xDC; // float32
                pub const m_flHidingSpotCheckDistanceThreshold: usize = 0xE0; // float32
                pub const m_flNearestAreaDistanceThreshold: usize = 0xE4; // float32
            }
            // Parent: CPlayer_MovementServices
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_flFallVelocity (float32)
            // NetworkVarNames: m_bInCrouch (bool)
            // NetworkVarNames: m_nCrouchState (uint32)
            // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
            // NetworkVarNames: m_bDucked (bool)
            // NetworkVarNames: m_bDucking (bool)
            // NetworkVarNames: m_bInDuckJump (bool)
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x238; // float32
                pub const m_flFallVelocity: usize = 0x23C; // float32
                pub const m_bInCrouch: usize = 0x240; // bool
                pub const m_nCrouchState: usize = 0x244; // uint32
                pub const m_flCrouchTransitionStartTime: usize = 0x248; // GameTime_t
                pub const m_bDucked: usize = 0x24C; // bool
                pub const m_bDucking: usize = 0x24D; // bool
                pub const m_bInDuckJump: usize = 0x24E; // bool
                pub const m_groundNormal: usize = 0x250; // Vector
                pub const m_flSurfaceFriction: usize = 0x25C; // float32
                pub const m_surfaceProps: usize = 0x260; // CUtlStringToken
                pub const m_nStepside: usize = 0x270; // int32
                pub const m_vecSmoothedVelocity: usize = 0x274; // Vector
            }
            // Parent: CTriggerMultiple
            // Field count: 0
            pub mod CTriggerOnce {
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x68; // int32
                pub const m_iEnemy4Ks: usize = 0x6C; // int32
                pub const m_iEnemy3Ks: usize = 0x70; // int32
                pub const m_iEnemyKnifeKills: usize = 0x74; // int32
                pub const m_iEnemyTaserKills: usize = 0x78; // int32
                pub const m_iEnemy2Ks: usize = 0x7C; // int32
                pub const m_iUtility_Count: usize = 0x80; // int32
                pub const m_iUtility_Successes: usize = 0x84; // int32
                pub const m_iUtility_Enemies: usize = 0x88; // int32
                pub const m_iFlash_Count: usize = 0x8C; // int32
                pub const m_iFlash_Successes: usize = 0x90; // int32
                pub const m_flHealthPointsRemovedTotal: usize = 0x94; // float32
                pub const m_flHealthPointsDealtTotal: usize = 0x98; // float32
                pub const m_nShotsFiredTotal: usize = 0x9C; // int32
                pub const m_nShotsOnTargetTotal: usize = 0xA0; // int32
                pub const m_i1v1Count: usize = 0xA4; // int32
                pub const m_i1v1Wins: usize = 0xA8; // int32
                pub const m_i1v2Count: usize = 0xAC; // int32
                pub const m_i1v2Wins: usize = 0xB0; // int32
                pub const m_iEntryCount: usize = 0xB4; // int32
                pub const m_iEntryWins: usize = 0xB8; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            pub mod EntityRenderAttribute_t {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            pub mod CGunTarget {
                pub const m_on: usize = 0x858; // bool
                pub const m_hTargetEnt: usize = 0x85C; // CHandle<CBaseEntity>
                pub const m_OnDeath: usize = 0x860; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Field count: 0
            pub mod CSoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod CFilterMultipleAPI {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            pub mod CHostageRescueZone {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CWorld {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nBodyGroupChoices (int32)
            // NetworkVarNames: m_nIdealMotionType (int8)
            pub mod CModelState {
                pub const m_hModel: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xD8; // CUtlSymbolLarge
                pub const m_bClientClothCreationSuppressed: usize = 0x125; // bool
                pub const m_MeshGroupMask: usize = 0x1D0; // uint64
                pub const m_nBodyGroupChoices: usize = 0x220; // CNetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x26A; // int8
                pub const m_nForceLOD: usize = 0x26B; // int8
                pub const m_nClothUpdateFlags: usize = 0x26C; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings__CursorState_t {
                pub const m_hCamera: usize = 0x8; // CHandle<CPointCamera>
                pub const m_OverlaidStart: usize = 0xC; // PointCameraSettings_t
                pub const m_OverlaidEnd: usize = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponGalilAR {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterMassGreater {
                pub const m_fFilterMass: usize = 0x548; // float32
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            pub mod CCSPlace {
                pub const m_name: usize = 0x7F0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: CItem
            // Field count: 32
            pub mod CItemGeneric {
                pub const m_bHasTriggerRadius: usize = 0xB84; // bool
                pub const m_bHasPickupRadius: usize = 0xB85; // bool
                pub const m_flPickupRadiusSqr: usize = 0xB88; // float32
                pub const m_flTriggerRadiusSqr: usize = 0xB8C; // float32
                pub const m_flLastPickupCheck: usize = 0xB90; // GameTime_t
                pub const m_bPlayerCounterListenerAdded: usize = 0xB94; // bool
                pub const m_bPlayerInTriggerRadius: usize = 0xB95; // bool
                pub const m_hSpawnParticleEffect: usize = 0xB98; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pAmbientSoundEffect: usize = 0xBA0; // CUtlSymbolLarge
                pub const m_bAutoStartAmbientSound: usize = 0xBA8; // bool
                pub const m_pSpawnScriptFunction: usize = 0xBB0; // CUtlSymbolLarge
                pub const m_hPickupParticleEffect: usize = 0xBB8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pPickupSoundEffect: usize = 0xBC0; // CUtlSymbolLarge
                pub const m_pPickupScriptFunction: usize = 0xBC8; // CUtlSymbolLarge
                pub const m_hTimeoutParticleEffect: usize = 0xBD0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_pTimeoutSoundEffect: usize = 0xBD8; // CUtlSymbolLarge
                pub const m_pTimeoutScriptFunction: usize = 0xBE0; // CUtlSymbolLarge
                pub const m_pPickupFilterName: usize = 0xBE8; // CUtlSymbolLarge
                pub const m_hPickupFilter: usize = 0xBF0; // CHandle<CBaseFilter>
                pub const m_OnPickup: usize = 0xBF8; // CEntityIOOutput
                pub const m_OnTimeout: usize = 0xC20; // CEntityIOOutput
                pub const m_OnTriggerStartTouch: usize = 0xC48; // CEntityIOOutput
                pub const m_OnTriggerTouch: usize = 0xC70; // CEntityIOOutput
                pub const m_OnTriggerEndTouch: usize = 0xC98; // CEntityIOOutput
                pub const m_pAllowPickupScriptFunction: usize = 0xCC0; // CUtlSymbolLarge
                pub const m_flPickupRadius: usize = 0xCC8; // float32
                pub const m_flTriggerRadius: usize = 0xCCC; // float32
                pub const m_pTriggerSoundEffect: usize = 0xCD0; // CUtlSymbolLarge
                pub const m_bGlowWhenInTrigger: usize = 0xCD8; // bool
                pub const m_glowColor: usize = 0xCD9; // Color
                pub const m_bUseable: usize = 0xCDD; // bool
                pub const m_hTriggerHelper: usize = 0xCE0; // CHandle<CItemGenericTriggerHelper>
            }
            // Parent: CBaseEntity
            // Field count: 44
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bUpdateOnClient (bool)
            // NetworkVarNames: m_nInputType (ValueRemapperInputType_t)
            // NetworkVarNames: m_hRemapLineStart (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hRemapLineEnd (CHandle<CBaseEntity>)
            // NetworkVarNames: m_flMaximumChangePerSecond (float)
            // NetworkVarNames: m_flDisengageDistance (float)
            // NetworkVarNames: m_flEngageDistance (float)
            // NetworkVarNames: m_bRequiresUseKey (bool)
            // NetworkVarNames: m_nOutputType (ValueRemapperOutputType_t)
            // NetworkVarNames: m_hOutputEntities (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
            // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
            // NetworkVarNames: m_flMomentumModifier (float)
            // NetworkVarNames: m_flSnapValue (float)
            // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
            // NetworkVarNames: m_flInputOffset (float)
            pub mod CPointValueRemapper {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_bUpdateOnClient: usize = 0x4F1; // bool
                pub const m_nInputType: usize = 0x4F4; // ValueRemapperInputType_t
                pub const m_iszRemapLineStartName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszRemapLineEndName: usize = 0x500; // CUtlSymbolLarge
                pub const m_hRemapLineStart: usize = 0x508; // CHandle<CBaseEntity>
                pub const m_hRemapLineEnd: usize = 0x50C; // CHandle<CBaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x510; // float32
                pub const m_flDisengageDistance: usize = 0x514; // float32
                pub const m_flEngageDistance: usize = 0x518; // float32
                pub const m_bRequiresUseKey: usize = 0x51C; // bool
                pub const m_nOutputType: usize = 0x520; // ValueRemapperOutputType_t
                pub const m_iszOutputEntityName: usize = 0x528; // CUtlSymbolLarge
                pub const m_iszOutputEntity2Name: usize = 0x530; // CUtlSymbolLarge
                pub const m_iszOutputEntity3Name: usize = 0x538; // CUtlSymbolLarge
                pub const m_iszOutputEntity4Name: usize = 0x540; // CUtlSymbolLarge
                pub const m_hOutputEntities: usize = 0x548; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                pub const m_nHapticsType: usize = 0x560; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x564; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x568; // float32
                pub const m_flSnapValue: usize = 0x56C; // float32
                pub const m_flCurrentMomentum: usize = 0x570; // float32
                pub const m_nRatchetType: usize = 0x574; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x578; // float32
                pub const m_flInputOffset: usize = 0x57C; // float32
                pub const m_bEngaged: usize = 0x580; // bool
                pub const m_bFirstUpdate: usize = 0x581; // bool
                pub const m_flPreviousValue: usize = 0x584; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x588; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x58C; // Vector
                pub const m_hUsingPlayer: usize = 0x598; // CHandle<CBasePlayerPawn>
                pub const m_flCustomOutputValue: usize = 0x59C; // float32
                pub const m_iszSoundEngage: usize = 0x5A0; // CUtlSymbolLarge
                pub const m_iszSoundDisengage: usize = 0x5A8; // CUtlSymbolLarge
                pub const m_iszSoundReachedValueZero: usize = 0x5B0; // CUtlSymbolLarge
                pub const m_iszSoundReachedValueOne: usize = 0x5B8; // CUtlSymbolLarge
                pub const m_iszSoundMovingLoop: usize = 0x5C0; // CUtlSymbolLarge
                pub const m_Position: usize = 0x5E0; // CEntityOutputTemplate<float32>
                pub const m_PositionDelta: usize = 0x608; // CEntityOutputTemplate<float32>
                pub const m_OnReachedValueZero: usize = 0x630; // CEntityIOOutput
                pub const m_OnReachedValueOne: usize = 0x658; // CEntityIOOutput
                pub const m_OnReachedValueCustom: usize = 0x680; // CEntityIOOutput
                pub const m_OnEngage: usize = 0x6A8; // CEntityIOOutput
                pub const m_OnDisengage: usize = 0x6D0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            pub mod CBtNodeConditionInactive {
                pub const m_flRoundStartThresholdSeconds: usize = 0x78; // float32
                pub const m_flSensorInactivityThresholdSeconds: usize = 0x7C; // float32
                pub const m_SensorInactivityTimer: usize = 0x80; // CountdownTimer
            }
            // Parent: CBasePlatTrain
            // Field count: 6
            pub mod CFuncTrain {
                pub const m_hCurrentTarget: usize = 0x880; // CHandle<CBaseEntity>
                pub const m_activated: usize = 0x884; // bool
                pub const m_hEnemy: usize = 0x888; // CHandle<CBaseEntity>
                pub const m_flBlockDamage: usize = 0x88C; // float32
                pub const m_flNextBlockTime: usize = 0x890; // GameTime_t
                pub const m_iszLastTarget: usize = 0x898; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 4
            pub mod CAI_ChangeHintGroup {
                pub const m_iSearchType: usize = 0x4F0; // int32
                pub const m_strSearchName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_strNewHintGroup: usize = 0x500; // CUtlSymbolLarge
                pub const m_flRadius: usize = 0x508; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CBaseEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x4F0; // CEntityIOOutput
                pub const m_worldName: usize = 0x518; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x520; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x528; // bool
                pub const m_bEntitiesSpawned: usize = 0x529; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x52A; // bool
                pub const m_hLayerSpawnGroup: usize = 0x52C; // uint32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            pub mod CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x548; // int32
            }
            // Parent: CBaseEntity
            // Field count: 26
            //
            // Metadata:
            // NetworkVarNames: m_FOV (float)
            // NetworkVarNames: m_Resolution (float)
            // NetworkVarNames: m_bFogEnable (bool)
            // NetworkVarNames: m_FogColor (Color)
            // NetworkVarNames: m_flFogStart (float)
            // NetworkVarNames: m_flFogEnd (float)
            // NetworkVarNames: m_flFogMaxDensity (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bUseScreenAspectRatio (bool)
            // NetworkVarNames: m_flAspectRatio (float)
            // NetworkVarNames: m_bNoSky (bool)
            // NetworkVarNames: m_fBrightness (float)
            // NetworkVarNames: m_flZFar (float)
            // NetworkVarNames: m_flZNear (float)
            // NetworkVarNames: m_bCanHLTVUse (bool)
            // NetworkVarNames: m_bAlignWithParent (bool)
            // NetworkVarNames: m_bDofEnabled (bool)
            // NetworkVarNames: m_flDofNearBlurry (float)
            // NetworkVarNames: m_flDofNearCrisp (float)
            // NetworkVarNames: m_flDofFarCrisp (float)
            // NetworkVarNames: m_flDofFarBlurry (float)
            // NetworkVarNames: m_flDofTiltToGround (float)
            pub mod CPointCamera {
                pub const m_FOV: usize = 0x4F0; // float32
                pub const m_Resolution: usize = 0x4F4; // float32
                pub const m_bFogEnable: usize = 0x4F8; // bool
                pub const m_FogColor: usize = 0x4F9; // Color
                pub const m_flFogStart: usize = 0x500; // float32
                pub const m_flFogEnd: usize = 0x504; // float32
                pub const m_flFogMaxDensity: usize = 0x508; // float32
                pub const m_bActive: usize = 0x50C; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x50D; // bool
                pub const m_flAspectRatio: usize = 0x510; // float32
                pub const m_bNoSky: usize = 0x514; // bool
                pub const m_fBrightness: usize = 0x518; // float32
                pub const m_flZFar: usize = 0x51C; // float32
                pub const m_flZNear: usize = 0x520; // float32
                pub const m_bCanHLTVUse: usize = 0x524; // bool
                pub const m_bAlignWithParent: usize = 0x525; // bool
                pub const m_bDofEnabled: usize = 0x526; // bool
                pub const m_flDofNearBlurry: usize = 0x528; // float32
                pub const m_flDofNearCrisp: usize = 0x52C; // float32
                pub const m_flDofFarCrisp: usize = 0x530; // float32
                pub const m_flDofFarBlurry: usize = 0x534; // float32
                pub const m_flDofTiltToGround: usize = 0x538; // float32
                pub const m_TargetFOV: usize = 0x53C; // float32
                pub const m_DegreesPerSecond: usize = 0x540; // float32
                pub const m_bIsOn: usize = 0x544; // bool
                pub const m_pNext: usize = 0x548; // CPointCamera*
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x70; // CAttributeManager*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_flFadeInStart (float32)
            // NetworkVarNames: m_flFadeInLength (float32)
            // NetworkVarNames: m_flFadeOutModelStart (float32)
            // NetworkVarNames: m_flFadeOutModelLength (float32)
            // NetworkVarNames: m_flFadeOutStart (float32)
            // NetworkVarNames: m_flFadeOutLength (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
            // NetworkVarNames: m_vDissolverOrigin (Vector)
            // NetworkVarNames: m_nMagnitude (uint32)
            pub mod CEntityDissolve {
                pub const m_flFadeInStart: usize = 0x7D8; // float32
                pub const m_flFadeInLength: usize = 0x7DC; // float32
                pub const m_flFadeOutModelStart: usize = 0x7E0; // float32
                pub const m_flFadeOutModelLength: usize = 0x7E4; // float32
                pub const m_flFadeOutStart: usize = 0x7E8; // float32
                pub const m_flFadeOutLength: usize = 0x7EC; // float32
                pub const m_flStartTime: usize = 0x7F0; // GameTime_t
                pub const m_nDissolveType: usize = 0x7F4; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0x7F8; // Vector
                pub const m_nMagnitude: usize = 0x804; // uint32
            }
            // Parent: None
            // Field count: 189
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
            // NetworkVarNames: m_bTerroristTimeOutActive (bool)
            // NetworkVarNames: m_bCTTimeOutActive (bool)
            // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
            // NetworkVarNames: m_flCTTimeOutRemaining (float)
            // NetworkVarNames: m_nTerroristTimeOuts (int)
            // NetworkVarNames: m_nCTTimeOuts (int)
            // NetworkVarNames: m_bTechnicalTimeOut (bool)
            // NetworkVarNames: m_bMatchWaitingForResume (bool)
            // NetworkVarNames: m_iFreezeTime (int)
            // NetworkVarNames: m_iRoundTime (int)
            // NetworkVarNames: m_fMatchStartTime (float)
            // NetworkVarNames: m_fRoundStartTime (GameTime_t)
            // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
            // NetworkVarNames: m_bGameRestart (bool)
            // NetworkVarNames: m_flGameStartTime (float)
            // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
            // NetworkVarNames: m_gamePhase (int)
            // NetworkVarNames: m_totalRoundsPlayed (int)
            // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
            // NetworkVarNames: m_nOvertimePlaying (int)
            // NetworkVarNames: m_iHostagesRemaining (int)
            // NetworkVarNames: m_bAnyHostageReached (bool)
            // NetworkVarNames: m_bMapHasBombTarget (bool)
            // NetworkVarNames: m_bMapHasRescueZone (bool)
            // NetworkVarNames: m_bMapHasBuyZone (bool)
            // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
            // NetworkVarNames: m_nQueuedMatchmakingMode (int)
            // NetworkVarNames: m_bIsValveDS (bool)
            // NetworkVarNames: m_bLogoMap (bool)
            // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
            // NetworkVarNames: m_iSpectatorSlotCount (int)
            // NetworkVarNames: m_MatchDevice (int)
            // NetworkVarNames: m_bHasMatchStarted (bool)
            // NetworkVarNames: m_nNextMapInMapgroup (int)
            // NetworkVarNames: m_szTournamentEventName (char)
            // NetworkVarNames: m_szTournamentEventStage (char)
            // NetworkVarNames: m_szMatchStatTxt (char)
            // NetworkVarNames: m_szTournamentPredictionsTxt (char)
            // NetworkVarNames: m_nTournamentPredictionsPct (int)
            // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
            // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDroppingItems (bool)
            // NetworkVarNames: m_bIsQuestEligible (bool)
            // NetworkVarNames: m_bIsHltvActive (bool)
            // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
            // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
            // NetworkVarNames: m_numBestOfMaps (int)
            // NetworkVarNames: m_nHalloweenMaskListSeed (int)
            // NetworkVarNames: m_bBombDropped (bool)
            // NetworkVarNames: m_bBombPlanted (bool)
            // NetworkVarNames: m_iRoundWinStatus (int)
            // NetworkVarNames: m_eRoundWinReason (int)
            // NetworkVarNames: m_bTCantBuy (bool)
            // NetworkVarNames: m_bCTCantBuy (bool)
            // NetworkVarNames: m_iMatchStats_RoundResults (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
            // NetworkVarNames: m_TeamRespawnWaveTimes (float)
            // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
            // NetworkVarNames: m_vMinimapMins (Vector)
            // NetworkVarNames: m_vMinimapMaxs (Vector)
            // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
            // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
            // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
            // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
            // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
            // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
            // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
            // NetworkVarNames: m_pGameModeRules (CCSGameModeRules*)
            // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
            // NetworkVarNames: m_nMatchEndCount (uint8)
            // NetworkVarNames: m_nTTeamIntroVariant (int)
            // NetworkVarNames: m_nCTTeamIntroVariant (int)
            // NetworkVarNames: m_bTeamIntroPeriod (bool)
            // NetworkVarNames: m_iRoundEndWinnerTeam (int)
            // NetworkVarNames: m_eRoundEndReason (int)
            // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
            // NetworkVarNames: m_iRoundEndTimerTime (int)
            // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
            // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
            // NetworkVarNames: m_iRoundEndFunFactData1 (int)
            // NetworkVarNames: m_iRoundEndFunFactData2 (int)
            // NetworkVarNames: m_iRoundEndFunFactData3 (int)
            // NetworkVarNames: m_sRoundEndMessage (CUtlString)
            // NetworkVarNames: m_iRoundEndPlayerCount (int)
            // NetworkVarNames: m_bRoundEndNoMusic (bool)
            // NetworkVarNames: m_iRoundEndLegacy (int)
            // NetworkVarNames: m_nRoundEndCount (uint8)
            // NetworkVarNames: m_iRoundStartRoundNumber (int)
            // NetworkVarNames: m_nRoundStartCount (uint8)
            pub mod CCSGameRules {
                pub const m_bFreezePeriod: usize = 0xC8; // bool
                pub const m_bWarmupPeriod: usize = 0xC9; // bool
                pub const m_fWarmupPeriodEnd: usize = 0xCC; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0xD0; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0xD4; // bool
                pub const m_bCTTimeOutActive: usize = 0xD5; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0xD8; // float32
                pub const m_flCTTimeOutRemaining: usize = 0xDC; // float32
                pub const m_nTerroristTimeOuts: usize = 0xE0; // int32
                pub const m_nCTTimeOuts: usize = 0xE4; // int32
                pub const m_bTechnicalTimeOut: usize = 0xE8; // bool
                pub const m_bMatchWaitingForResume: usize = 0xE9; // bool
                pub const m_iFreezeTime: usize = 0xEC; // int32
                pub const m_iRoundTime: usize = 0xF0; // int32
                pub const m_fMatchStartTime: usize = 0xF4; // float32
                pub const m_fRoundStartTime: usize = 0xF8; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0xFC; // GameTime_t
                pub const m_bGameRestart: usize = 0x100; // bool
                pub const m_flGameStartTime: usize = 0x104; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x108; // float32
                pub const m_gamePhase: usize = 0x10C; // int32
                pub const m_totalRoundsPlayed: usize = 0x110; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x114; // int32
                pub const m_nOvertimePlaying: usize = 0x118; // int32
                pub const m_iHostagesRemaining: usize = 0x11C; // int32
                pub const m_bAnyHostageReached: usize = 0x120; // bool
                pub const m_bMapHasBombTarget: usize = 0x121; // bool
                pub const m_bMapHasRescueZone: usize = 0x122; // bool
                pub const m_bMapHasBuyZone: usize = 0x123; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x124; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x128; // int32
                pub const m_bIsValveDS: usize = 0x12C; // bool
                pub const m_bLogoMap: usize = 0x12D; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x12E; // bool
                pub const m_iSpectatorSlotCount: usize = 0x130; // int32
                pub const m_MatchDevice: usize = 0x134; // int32
                pub const m_bHasMatchStarted: usize = 0x138; // bool
                pub const m_nNextMapInMapgroup: usize = 0x13C; // int32
                pub const m_szTournamentEventName: usize = 0x140; // char[512]
                pub const m_szTournamentEventStage: usize = 0x340; // char[512]
                pub const m_szMatchStatTxt: usize = 0x540; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x740; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x940; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x944; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x948; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x94C; // bool
                pub const m_bIsQuestEligible: usize = 0x94D; // bool
                pub const m_bIsHltvActive: usize = 0x94E; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x950; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0xA18; // uint32[4]
                pub const m_numBestOfMaps: usize = 0xA28; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0xA2C; // int32
                pub const m_bBombDropped: usize = 0xA30; // bool
                pub const m_bBombPlanted: usize = 0xA31; // bool
                pub const m_iRoundWinStatus: usize = 0xA34; // int32
                pub const m_eRoundWinReason: usize = 0xA38; // int32
                pub const m_bTCantBuy: usize = 0xA3C; // bool
                pub const m_bCTCantBuy: usize = 0xA3D; // bool
                pub const m_iMatchStats_RoundResults: usize = 0xA40; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xAB8; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xB30; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xBA8; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xC28; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xCA8; // Vector
                pub const m_vMinimapMaxs: usize = 0xCB4; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xCC0; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xCE0; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xCE8; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xD10; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xD38; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xD3C; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xD40; // int32
                pub const m_bHasHostageBeenTouched: usize = 0xD60; // bool
                pub const m_flIntermissionStartTime: usize = 0xD64; // GameTime_t
                pub const m_flIntermissionEndTime: usize = 0xD68; // GameTime_t
                pub const m_bLevelInitialized: usize = 0xD6C; // bool
                pub const m_iTotalRoundsPlayed: usize = 0xD70; // int32
                pub const m_iUnBalancedRounds: usize = 0xD74; // int32
                pub const m_endMatchOnRoundReset: usize = 0xD78; // bool
                pub const m_endMatchOnThink: usize = 0xD79; // bool
                pub const m_iNumTerrorist: usize = 0xD7C; // int32
                pub const m_iNumCT: usize = 0xD80; // int32
                pub const m_iNumSpawnableTerrorist: usize = 0xD84; // int32
                pub const m_iNumSpawnableCT: usize = 0xD88; // int32
                pub const m_arrSelectedHostageSpawnIndices: usize = 0xD90; // CUtlVector<int32>
                pub const m_nSpawnPointsRandomSeed: usize = 0xDA8; // int32
                pub const m_bFirstConnected: usize = 0xDAC; // bool
                pub const m_bCompleteReset: usize = 0xDAD; // bool
                pub const m_bPickNewTeamsOnReset: usize = 0xDAE; // bool
                pub const m_bScrambleTeamsOnRestart: usize = 0xDAF; // bool
                pub const m_bSwapTeamsOnRestart: usize = 0xDB0; // bool
                pub const m_nEndMatchTiedVotes: usize = 0xDB8; // CUtlVector<int32>
                pub const m_bNeedToAskPlayersForContinueVote: usize = 0xDD4; // bool
                pub const m_numQueuedMatchmakingAccounts: usize = 0xDD8; // uint32
                pub const m_fAvgPlayerRank: usize = 0xDDC; // float32
                pub const m_pQueuedMatchmakingReservationString: usize = 0xDE0; // char*
                pub const m_numTotalTournamentDrops: usize = 0xDE8; // uint32
                pub const m_numSpectatorsCountMax: usize = 0xDEC; // uint32
                pub const m_numSpectatorsCountMaxTV: usize = 0xDF0; // uint32
                pub const m_numSpectatorsCountMaxLnk: usize = 0xDF4; // uint32
                pub const m_nCTsAliveAtFreezetimeEnd: usize = 0xE00; // int32
                pub const m_nTerroristsAliveAtFreezetimeEnd: usize = 0xE04; // int32
                pub const m_bForceTeamChangeSilent: usize = 0xE08; // bool
                pub const m_bLoadingRoundBackupData: usize = 0xE09; // bool
                pub const m_nMatchInfoShowType: usize = 0xE40; // int32
                pub const m_flMatchInfoDecidedTime: usize = 0xE44; // float32
                pub const mTeamDMLastWinningTeamNumber: usize = 0xE60; // int32
                pub const mTeamDMLastThinkTime: usize = 0xE64; // float32
                pub const m_flTeamDMLastAnnouncementTime: usize = 0xE68; // float32
                pub const m_iAccountTerrorist: usize = 0xE6C; // int32
                pub const m_iAccountCT: usize = 0xE70; // int32
                pub const m_iSpawnPointCount_Terrorist: usize = 0xE74; // int32
                pub const m_iSpawnPointCount_CT: usize = 0xE78; // int32
                pub const m_iMaxNumTerrorists: usize = 0xE7C; // int32
                pub const m_iMaxNumCTs: usize = 0xE80; // int32
                pub const m_iLoserBonusMostRecentTeam: usize = 0xE84; // int32
                pub const m_tmNextPeriodicThink: usize = 0xE88; // float32
                pub const m_bVoiceWonMatchBragFired: usize = 0xE8C; // bool
                pub const m_fWarmupNextChatNoticeTime: usize = 0xE90; // float32
                pub const m_iHostagesRescued: usize = 0xE98; // int32
                pub const m_iHostagesTouched: usize = 0xE9C; // int32
                pub const m_flNextHostageAnnouncement: usize = 0xEA0; // float32
                pub const m_bNoTerroristsKilled: usize = 0xEA4; // bool
                pub const m_bNoCTsKilled: usize = 0xEA5; // bool
                pub const m_bNoEnemiesKilled: usize = 0xEA6; // bool
                pub const m_bCanDonateWeapons: usize = 0xEA7; // bool
                pub const m_firstKillTime: usize = 0xEAC; // float32
                pub const m_firstBloodTime: usize = 0xEB4; // float32
                pub const m_hostageWasInjured: usize = 0xED0; // bool
                pub const m_hostageWasKilled: usize = 0xED1; // bool
                pub const m_bVoteCalled: usize = 0xEE0; // bool
                pub const m_bServerVoteOnReset: usize = 0xEE1; // bool
                pub const m_flVoteCheckThrottle: usize = 0xEE4; // float32
                pub const m_bBuyTimeEnded: usize = 0xEE8; // bool
                pub const m_nLastFreezeEndBeep: usize = 0xEEC; // int32
                pub const m_bTargetBombed: usize = 0xEF0; // bool
                pub const m_bBombDefused: usize = 0xEF1; // bool
                pub const m_bMapHasBombZone: usize = 0xEF2; // bool
                pub const m_vecMainCTSpawnPos: usize = 0xF40; // Vector
                pub const m_CTSpawnPointsMasterList: usize = 0xF50; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPointsMasterList: usize = 0xF68; // CUtlVector<SpawnPoint*>
                pub const m_bRespawningAllRespawnablePlayers: usize = 0xF80; // bool
                pub const m_iNextCTSpawnPoint: usize = 0xF84; // int32
                pub const m_flCTSpawnPointUsedTime: usize = 0xF88; // float32
                pub const m_iNextTerroristSpawnPoint: usize = 0xF8C; // int32
                pub const m_flTerroristSpawnPointUsedTime: usize = 0xF90; // float32
                pub const m_CTSpawnPoints: usize = 0xF98; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPoints: usize = 0xFB0; // CUtlVector<SpawnPoint*>
                pub const m_bIsUnreservedGameServer: usize = 0xFC8; // bool
                pub const m_fAutobalanceDisplayTime: usize = 0xFCC; // float32
                pub const m_bAllowWeaponSwitch: usize = 0x1008; // bool
                pub const m_bRoundTimeWarningTriggered: usize = 0x1009; // bool
                pub const m_phaseChangeAnnouncementTime: usize = 0x100C; // GameTime_t
                pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1010; // float32
                pub const m_flLastThinkTime: usize = 0x1014; // GameTime_t
                pub const m_fAccumulatedRoundOffDamage: usize = 0x1018; // float32
                pub const m_nShorthandedBonusLastEvalRound: usize = 0x101C; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0x1068; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0x106C; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0x106D; // bool
                pub const m_pGameModeRules: usize = 0x1088; // CCSGameModeRules*
                pub const m_BtGlobalBlackboard: usize = 0x1090; // KeyValues3
                pub const m_hPlayerResource: usize = 0x1128; // CHandle<CBaseEntity>
                pub const m_RetakeRules: usize = 0x1130; // CRetakeGameRules
                pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x12E0; // CUtlVector<int32>[4]
                pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x1340; // bool[4]
                pub const m_nMatchEndCount: usize = 0x1368; // uint8
                pub const m_nTTeamIntroVariant: usize = 0x136C; // int32
                pub const m_nCTTeamIntroVariant: usize = 0x1370; // int32
                pub const m_bTeamIntroPeriod: usize = 0x1374; // bool
                pub const m_fTeamIntroPeriodEnd: usize = 0x1378; // GameTime_t
                pub const m_bPlayedTeamIntroVO: usize = 0x137C; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0x1380; // int32
                pub const m_eRoundEndReason: usize = 0x1384; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0x1388; // bool
                pub const m_iRoundEndTimerTime: usize = 0x138C; // int32
                pub const m_sRoundEndFunFactToken: usize = 0x1390; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0x1398; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0x139C; // int32
                pub const m_iRoundEndFunFactData2: usize = 0x13A0; // int32
                pub const m_iRoundEndFunFactData3: usize = 0x13A4; // int32
                pub const m_sRoundEndMessage: usize = 0x13A8; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0x13B0; // int32
                pub const m_bRoundEndNoMusic: usize = 0x13B4; // bool
                pub const m_iRoundEndLegacy: usize = 0x13B8; // int32
                pub const m_nRoundEndCount: usize = 0x13BC; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0x13C0; // int32
                pub const m_nRoundStartCount: usize = 0x13C4; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x53D0; // float64
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CBasePlayerWeapon
            // Field count: 50
            //
            // Metadata:
            // MNetworkOutOfPVSUpdates
            // NetworkVarNames: m_iWeaponGameplayAnimState (WeaponGameplayAnimState)
            // NetworkVarNames: m_flWeaponGameplayAnimStateTimestamp (GameTime_t)
            // NetworkVarNames: m_flInspectCancelCompleteTime (GameTime_t)
            // NetworkVarNames: m_bInspectPending (bool)
            // NetworkVarNames: m_bInspectShouldLoop (bool)
            // NetworkVarNames: m_weaponMode (CSWeaponMode)
            // NetworkVarNames: m_fAccuracyPenalty (float)
            // NetworkVarNames: m_iRecoilIndex (int)
            // NetworkVarNames: m_flRecoilIndex (float)
            // NetworkVarNames: m_bBurstMode (bool)
            // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
            // NetworkVarNames: m_flPostponeFireReadyFrac (float)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
            // NetworkVarNames: m_bIsHauledBack (bool)
            // NetworkVarNames: m_bSilencerOn (bool)
            // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
            // NetworkVarNames: m_iOriginalTeamNumber (int)
            // NetworkVarNames: m_iMostRecentTeamNumber (int)
            // NetworkVarNames: m_bDroppedNearBuyZone (bool)
            // NetworkVarNames: m_nextPrevOwnerUseTime (GameTime_t)
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_bWasActiveWeaponWhenDropped (bool)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_flWatTickOffset (float)
            // NetworkVarNames: m_flLastShakeTime (GameTime_t)
            pub mod CCSWeaponBase {
                pub const m_bRemoveable: usize = 0xEA0; // bool
                pub const m_bPlayerAmmoStockOnPickup: usize = 0xEB0; // bool
                pub const m_bRequireUseToTouch: usize = 0xEB1; // bool
                pub const m_iWeaponGameplayAnimState: usize = 0xEB2; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0xEB4; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0xEB8; // GameTime_t
                pub const m_bInspectPending: usize = 0xEBC; // bool
                pub const m_bInspectShouldLoop: usize = 0xEBD; // bool
                pub const m_nLastEmptySoundCmdNum: usize = 0xEE8; // int32
                pub const m_bFireOnEmpty: usize = 0xF08; // bool
                pub const m_OnPlayerPickup: usize = 0xF10; // CEntityIOOutput
                pub const m_weaponMode: usize = 0xF38; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0xF3C; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0xF40; // Vector
                pub const m_flTurningInaccuracy: usize = 0xF4C; // float32
                pub const m_fAccuracyPenalty: usize = 0xF50; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0xF54; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0xF58; // float32
                pub const m_iRecoilIndex: usize = 0xF5C; // int32
                pub const m_flRecoilIndex: usize = 0xF60; // float32
                pub const m_bBurstMode: usize = 0xF64; // bool
                pub const m_nPostponeFireReadyTicks: usize = 0xF68; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0xF6C; // float32
                pub const m_bInReload: usize = 0xF70; // bool
                pub const m_flDroppedAtTime: usize = 0xF74; // GameTime_t
                pub const m_bIsHauledBack: usize = 0xF78; // bool
                pub const m_bSilencerOn: usize = 0xF79; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0xF7C; // GameTime_t
                pub const m_iOriginalTeamNumber: usize = 0xF80; // int32
                pub const m_iMostRecentTeamNumber: usize = 0xF84; // int32
                pub const m_bDroppedNearBuyZone: usize = 0xF88; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0xF8C; // float32
                pub const m_bCanBePickedUp: usize = 0xFA0; // bool
                pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0xFA1; // bool
                pub const m_nextOwnerTouchTime: usize = 0xFA4; // GameTime_t
                pub const m_nextPrevOwnerTouchTime: usize = 0xFA8; // GameTime_t
                pub const m_nextPrevOwnerUseTime: usize = 0xFB0; // GameTime_t
                pub const m_hPrevOwner: usize = 0xFB4; // CHandle<CCSPlayerPawn>
                pub const m_nDropTick: usize = 0xFB8; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0xFBC; // bool
                pub const m_donated: usize = 0xFDC; // bool
                pub const m_fLastShotTime: usize = 0xFE0; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0xFE4; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0xFE5; // bool
                pub const m_numRemoveUnownedWeaponThink: usize = 0xFE8; // int32
                pub const m_IronSightController: usize = 0xFF0; // CIronSightController
                pub const m_iIronSightMode: usize = 0x1008; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x100C; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x1010; // float32
                pub const m_flLastShakeTime: usize = 0x1020; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            pub mod CPointClientUIDialog {
                pub const m_hActivator: usize = 0x988; // CHandle<CBaseEntity>
                pub const m_bStartEnabled: usize = 0x98C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 4
            pub mod CLogicLineToEntity {
                pub const m_Line: usize = 0x4F0; // CEntityOutputTemplate<Vector>
                pub const m_SourceName: usize = 0x518; // CUtlSymbolLarge
                pub const m_StartEntity: usize = 0x520; // CHandle<CBaseEntity>
                pub const m_EndEntity: usize = 0x524; // CHandle<CBaseEntity>
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            pub mod CSoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x1F0; // CHandle<CBasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x21C; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x220; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0x290; // WeaponPurchaseTracker_t
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CDecoyGrenade {
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iItemDefinitionIndex (item_definition_index_t)
            // NetworkVarNames: m_iEntityQuality (int)
            // NetworkVarNames: m_iEntityLevel (uint32)
            // NetworkVarNames: m_iItemIDHigh (uint32)
            // NetworkVarNames: m_iItemIDLow (uint32)
            // NetworkVarNames: m_iAccountID (uint32)
            // NetworkVarNames: m_iInventoryPosition (uint32)
            // NetworkVarNames: m_bInitialized (bool)
            // NetworkVarNames: m_AttributeList (CAttributeList)
            // NetworkVarNames: m_NetworkedDynamicAttributes (CAttributeList)
            // NetworkVarNames: m_szCustomName (char)
            pub mod CEconItemView {
                pub const m_iItemDefinitionIndex: usize = 0x38; // uint16
                pub const m_iEntityQuality: usize = 0x3C; // int32
                pub const m_iEntityLevel: usize = 0x40; // uint32
                pub const m_iItemID: usize = 0x48; // uint64
                pub const m_iItemIDHigh: usize = 0x50; // uint32
                pub const m_iItemIDLow: usize = 0x54; // uint32
                pub const m_iAccountID: usize = 0x58; // uint32
                pub const m_iInventoryPosition: usize = 0x5C; // uint32
                pub const m_bInitialized: usize = 0x68; // bool
                pub const m_AttributeList: usize = 0x70; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0xE8; // CAttributeList
                pub const m_szCustomName: usize = 0x160; // char[161]
                pub const m_szCustomNameOverride: usize = 0x201; // char[161]
            }
            // Parent: CBaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_vDistanceInnerMins (Vector)
            // NetworkVarNames: m_vDistanceInnerMaxs (Vector)
            // NetworkVarNames: m_vDistanceOuterMins (Vector)
            // NetworkVarNames: m_vDistanceOuterMaxs (Vector)
            // NetworkVarNames: m_nAABBDirection (int)
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x500; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x508; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x514; // Vector
                pub const m_vDistanceOuterMins: usize = 0x520; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x52C; // Vector
                pub const m_nAABBDirection: usize = 0x538; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CSoundEventParameter {
                pub const m_iszParamName: usize = 0x508; // CUtlSymbolLarge
                pub const m_flFloatValue: usize = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_SubGraph: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            }
            // Parent: CItem
            // Field count: 0
            pub mod CItemKevlar {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            pub mod CFuncShatterglass {
                pub const m_matPanelTransform: usize = 0x7D8; // matrix3x4_t
                pub const m_matPanelTransformWsTemp: usize = 0x808; // matrix3x4_t
                pub const m_vecShatterGlassShards: usize = 0x838; // CUtlVector<uint32>
                pub const m_PanelSize: usize = 0x850; // Vector2D
                pub const m_flLastShatterSoundEmitTime: usize = 0x858; // GameTime_t
                pub const m_flLastCleanupTime: usize = 0x85C; // GameTime_t
                pub const m_flInitAtTime: usize = 0x860; // GameTime_t
                pub const m_flGlassThickness: usize = 0x864; // float32
                pub const m_flSpawnInvulnerability: usize = 0x868; // float32
                pub const m_bBreakSilent: usize = 0x86C; // bool
                pub const m_bBreakShardless: usize = 0x86D; // bool
                pub const m_bBroken: usize = 0x86E; // bool
                pub const m_bGlassNavIgnore: usize = 0x86F; // bool
                pub const m_bGlassInFrame: usize = 0x870; // bool
                pub const m_bStartBroken: usize = 0x871; // bool
                pub const m_iInitialDamageType: usize = 0x872; // uint8
                pub const m_szDamagePositioningEntityName01: usize = 0x878; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName02: usize = 0x880; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName03: usize = 0x888; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName04: usize = 0x890; // CUtlSymbolLarge
                pub const m_vInitialDamagePositions: usize = 0x898; // CUtlVector<Vector>
                pub const m_vExtraDamagePositions: usize = 0x8B0; // CUtlVector<Vector>
                pub const m_vInitialPanelVertices: usize = 0x8C8; // CUtlVector<Vector4D>
                pub const m_OnBroken: usize = 0x8E0; // CEntityIOOutput
                pub const m_iSurfaceType: usize = 0x908; // uint8
                pub const m_hMaterialDamageBase: usize = 0x910; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CNavWalkable {
            }
            // Parent: None
            // Field count: 80
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_nPlatformType (EntityPlatformTypes_t)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_flSpeed (float)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_vecVelocity (CNetworkVelocityVector)
            // NetworkVarNames: m_vecBaseVelocity (Vector)
            // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nGroundBodyIndex (int)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_flWaterLevel (float)
            // NetworkVarNames: m_bGravityDisabled (bool)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            // NetworkVarNames: m_nBloodType (BloodType)
            pub mod CBaseEntity {
                pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
                pub const m_aThinkFunctions: usize = 0x248; // CUtlVector<thinkfunc_t>
                pub const m_iCurrentThinkContext: usize = 0x260; // int32
                pub const m_nLastThinkTick: usize = 0x264; // GameTick_t
                pub const m_bDisabledContextThinks: usize = 0x268; // bool
                pub const m_isSteadyState: usize = 0x278; // CTypedBitVec<64>
                pub const m_lastNetworkChange: usize = 0x280; // float32
                pub const m_ResponseContexts: usize = 0x290; // CUtlVector<ResponseContext_t>
                pub const m_iszResponseContext: usize = 0x2A8; // CUtlSymbolLarge
                pub const m_iHealth: usize = 0x2D0; // int32
                pub const m_iMaxHealth: usize = 0x2D4; // int32
                pub const m_lifeState: usize = 0x2D8; // uint8
                pub const m_flDamageAccumulator: usize = 0x2DC; // float32
                pub const m_bTakesDamage: usize = 0x2E0; // bool
                pub const m_nTakeDamageFlags: usize = 0x2E8; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x2F0; // EntityPlatformTypes_t
                pub const m_MoveCollide: usize = 0x2F2; // MoveCollide_t
                pub const m_MoveType: usize = 0x2F3; // MoveType_t
                pub const m_nActualMoveType: usize = 0x2F4; // MoveType_t
                pub const m_nWaterTouch: usize = 0x2F5; // uint8
                pub const m_nSlimeTouch: usize = 0x2F6; // uint8
                pub const m_bRestoreInHierarchy: usize = 0x2F7; // bool
                pub const m_target: usize = 0x2F8; // CUtlSymbolLarge
                pub const m_hDamageFilter: usize = 0x300; // CHandle<CBaseFilter>
                pub const m_iszDamageFilterName: usize = 0x308; // CUtlSymbolLarge
                pub const m_flMoveDoneTime: usize = 0x310; // float32
                pub const m_nSubclassID: usize = 0x314; // CUtlStringToken
                pub const m_flAnimTime: usize = 0x320; // float32
                pub const m_flSimulationTime: usize = 0x324; // float32
                pub const m_flCreateTime: usize = 0x328; // GameTime_t
                pub const m_bClientSideRagdoll: usize = 0x32C; // bool
                pub const m_ubInterpolationFrame: usize = 0x32D; // uint8
                pub const m_vPrevVPhysicsUpdatePos: usize = 0x330; // Vector
                pub const m_iTeamNum: usize = 0x33C; // uint8
                pub const m_iGlobalname: usize = 0x340; // CUtlSymbolLarge
                pub const m_iSentToClients: usize = 0x348; // int32
                pub const m_flSpeed: usize = 0x34C; // float32
                pub const m_sUniqueHammerID: usize = 0x350; // CUtlString
                pub const m_spawnflags: usize = 0x358; // uint32
                pub const m_nNextThinkTick: usize = 0x35C; // GameTick_t
                pub const m_nSimulationTick: usize = 0x360; // int32
                pub const m_OnKilled: usize = 0x368; // CEntityIOOutput
                pub const m_fFlags: usize = 0x390; // uint32
                pub const m_vecAbsVelocity: usize = 0x394; // Vector
                pub const m_vecVelocity: usize = 0x3A0; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x3D0; // Vector
                pub const m_nPushEnumCount: usize = 0x3DC; // int32
                pub const m_pCollision: usize = 0x3E0; // CCollisionProperty*
                pub const m_hEffectEntity: usize = 0x3E8; // CHandle<CBaseEntity>
                pub const m_hOwnerEntity: usize = 0x3EC; // CHandle<CBaseEntity>
                pub const m_fEffects: usize = 0x3F0; // uint32
                pub const m_hGroundEntity: usize = 0x3F4; // CHandle<CBaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x3F8; // int32
                pub const m_flFriction: usize = 0x3FC; // float32
                pub const m_flElasticity: usize = 0x400; // float32
                pub const m_flGravityScale: usize = 0x404; // float32
                pub const m_flTimeScale: usize = 0x408; // float32
                pub const m_flWaterLevel: usize = 0x40C; // float32
                pub const m_bGravityDisabled: usize = 0x410; // bool
                pub const m_bAnimatedEveryTick: usize = 0x411; // bool
                pub const m_flActualGravityScale: usize = 0x414; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x418; // bool
                pub const m_bDisableLowViolence: usize = 0x419; // bool
                pub const m_nWaterType: usize = 0x41A; // uint8
                pub const m_iEFlags: usize = 0x41C; // int32
                pub const m_OnUser1: usize = 0x420; // CEntityIOOutput
                pub const m_OnUser2: usize = 0x448; // CEntityIOOutput
                pub const m_OnUser3: usize = 0x470; // CEntityIOOutput
                pub const m_OnUser4: usize = 0x498; // CEntityIOOutput
                pub const m_iInitialTeamNum: usize = 0x4C0; // int32
                pub const m_flNavIgnoreUntilTime: usize = 0x4C4; // GameTime_t
                pub const m_vecAngVelocity: usize = 0x4C8; // QAngle
                pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x4D4; // bool
                pub const m_bLagCompensate: usize = 0x4D5; // bool
                pub const m_pBlocker: usize = 0x4D8; // CHandle<CBaseEntity>
                pub const m_flLocalTime: usize = 0x4DC; // float32
                pub const m_flVPhysicsUpdateLocalTime: usize = 0x4E0; // float32
                pub const m_nBloodType: usize = 0x4E4; // BloodType
                pub const m_pPulseGraphInstance: usize = 0x4E8; // CPulseGraphInstance_ServerEntity*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 4
            pub mod CMarkupVolumeWithRef {
                pub const m_bUseRef: usize = 0x820; // bool
                pub const m_vRefPosEntitySpace: usize = 0x824; // Vector
                pub const m_vRefPosWorldSpace: usize = 0x830; // VectorWS
                pub const m_flRefDot: usize = 0x83C; // float32
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub mod CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_hSkyMaterialLightingOnly (HMaterialStrong)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_vTintColor (Color)
            // NetworkVarNames: m_vTintColorLightingOnly (Color)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nFogType (int)
            // NetworkVarNames: m_flFogMinStart (float)
            // NetworkVarNames: m_flFogMinEnd (float)
            // NetworkVarNames: m_flFogMaxStart (float)
            // NetworkVarNames: m_flFogMaxEnd (float)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod CEnvSky {
                pub const m_hSkyMaterial: usize = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0x7E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0x7E8; // bool
                pub const m_vTintColor: usize = 0x7E9; // Color
                pub const m_vTintColorLightingOnly: usize = 0x7ED; // Color
                pub const m_flBrightnessScale: usize = 0x7F4; // float32
                pub const m_nFogType: usize = 0x7F8; // int32
                pub const m_flFogMinStart: usize = 0x7FC; // float32
                pub const m_flFogMinEnd: usize = 0x800; // float32
                pub const m_flFogMaxStart: usize = 0x804; // float32
                pub const m_flFogMaxEnd: usize = 0x808; // float32
                pub const m_bEnabled: usize = 0x80C; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoSpawnGroupLandmark {
            }
            // Parent: CPointEntity
            // Field count: 12
            pub mod CPointAngleSensor {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_nLookAtName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hTargetEntity: usize = 0x500; // CHandle<CBaseEntity>
                pub const m_hLookAtEntity: usize = 0x504; // CHandle<CBaseEntity>
                pub const m_flDuration: usize = 0x508; // float32
                pub const m_flDotTolerance: usize = 0x50C; // float32
                pub const m_flFacingTime: usize = 0x510; // GameTime_t
                pub const m_bFired: usize = 0x514; // bool
                pub const m_OnFacingLookat: usize = 0x518; // CEntityIOOutput
                pub const m_OnNotFacingLookat: usize = 0x540; // CEntityIOOutput
                pub const m_TargetDir: usize = 0x568; // CEntityOutputTemplate<Vector>
                pub const m_FacingPercentage: usize = 0x590; // CEntityOutputTemplate<float32>
            }
            // Parent: CBaseEntity
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            // NetworkVarNames: m_fDirectionVariation (float)
            // NetworkVarNames: m_fSpeedVariation (float)
            // NetworkVarNames: m_fTurbulence (float)
            // NetworkVarNames: m_fVolumeHalfExtentXY (float)
            // NetworkVarNames: m_fVolumeHalfExtentZ (float)
            // NetworkVarNames: m_nVolumeResolutionXY (int)
            // NetworkVarNames: m_nVolumeResolutionZ (int)
            // NetworkVarNames: m_nClipmapLevels (int)
            // NetworkVarNames: m_bIsMaster (bool)
            pub mod CEnvWindController {
                pub const m_EnvWindShared: usize = 0x4F0; // CEnvWindShared
                pub const m_fDirectionVariation: usize = 0x640; // float32
                pub const m_fSpeedVariation: usize = 0x644; // float32
                pub const m_fTurbulence: usize = 0x648; // float32
                pub const m_fVolumeHalfExtentXY: usize = 0x64C; // float32
                pub const m_fVolumeHalfExtentZ: usize = 0x650; // float32
                pub const m_nVolumeResolutionXY: usize = 0x654; // int32
                pub const m_nVolumeResolutionZ: usize = 0x658; // int32
                pub const m_nClipmapLevels: usize = 0x65C; // int32
                pub const m_bIsMaster: usize = 0x660; // bool
                pub const m_bFirstTime: usize = 0x661; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iKills (int)
            // NetworkVarNames: m_iDeaths (int)
            // NetworkVarNames: m_iAssists (int)
            // NetworkVarNames: m_iDamage (int)
            // NetworkVarNames: m_iEquipmentValue (int)
            // NetworkVarNames: m_iMoneySaved (int)
            // NetworkVarNames: m_iKillReward (int)
            // NetworkVarNames: m_iLiveTime (int)
            // NetworkVarNames: m_iHeadShotKills (int)
            // NetworkVarNames: m_iObjective (int)
            // NetworkVarNames: m_iCashEarned (int)
            // NetworkVarNames: m_iUtilityDamage (int)
            // NetworkVarNames: m_iEnemiesFlashed (int)
            pub mod CSPerRoundStats_t {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
            }
            // Parent: CBeam
            // Field count: 5
            pub mod CEnvLaser {
                pub const m_iszLaserTarget: usize = 0x878; // CUtlSymbolLarge
                pub const m_pSprite: usize = 0x880; // CSprite*
                pub const m_iszSpriteName: usize = 0x888; // CUtlSymbolLarge
                pub const m_firePosition: usize = 0x890; // Vector
                pub const m_flStartFrame: usize = 0x89C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 8
            pub mod CSoundOpvarSetEntity {
                pub const m_iszStackName: usize = 0x508; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x510; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x518; // CUtlSymbolLarge
                pub const m_nOpvarType: usize = 0x520; // int32
                pub const m_nOpvarIndex: usize = 0x524; // int32
                pub const m_flOpvarValue: usize = 0x528; // float32
                pub const m_OpvarValueString: usize = 0x530; // CUtlSymbolLarge
                pub const m_bSetOnSpawn: usize = 0x538; // bool
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CEnvBeverage {
                pub const m_CanInDispenser: usize = 0x4F0; // bool
                pub const m_nBeverageType: usize = 0x4F4; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 13
            pub mod CPhysMotor {
                pub const m_nameAttach: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_nameAnchor: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hAttachedObject: usize = 0x500; // CHandle<CBaseEntity>
                pub const m_hAnchorObject: usize = 0x504; // CHandle<CBaseEntity>
                pub const m_spinUp: usize = 0x508; // float32
                pub const m_spinDown: usize = 0x50C; // float32
                pub const m_flMotorFriction: usize = 0x510; // float32
                pub const m_additionalAcceleration: usize = 0x514; // float32
                pub const m_angularAcceleration: usize = 0x518; // float32
                pub const m_flTorqueScale: usize = 0x51C; // float32
                pub const m_flTargetSpeed: usize = 0x520; // float32
                pub const m_flSpeedWhenSpinUpOrSpinDownStarted: usize = 0x524; // float32
                pub const m_motor: usize = 0x538; // CMotorController
            }
            // Parent: CPhysConstraint
            // Field count: 14
            pub mod CSplineConstraint {
                pub const m_vAnchorOffsetRestore: usize = 0x5B0; // Vector
                pub const m_hSplineEntity: usize = 0x5BC; // CHandle<CBaseEntity>
                pub const m_bEnableLateralConstraint: usize = 0x5C8; // bool
                pub const m_bEnableVerticalConstraint: usize = 0x5C9; // bool
                pub const m_bEnableAngularConstraint: usize = 0x5CA; // bool
                pub const m_bEnableLimit: usize = 0x5CB; // bool
                pub const m_bFireEventsOnPath: usize = 0x5CC; // bool
                pub const m_flLinearFrequency: usize = 0x5D0; // float32
                pub const m_flLinarDampingRatio: usize = 0x5D4; // float32
                pub const m_flJointFriction: usize = 0x5D8; // float32
                pub const m_flTransitionTime: usize = 0x5DC; // float32
                pub const m_vPreSolveAnchorPos: usize = 0x600; // VectorWS
                pub const m_StartTransitionTime: usize = 0x60C; // GameTime_t
                pub const m_vTangentSpaceAnchorAtTransitionStart: usize = 0x610; // Vector
            }
            // Parent: CLogicalEntity
            // Field count: 6
            pub mod CLogicCompare {
                pub const m_flInValue: usize = 0x4F0; // float32
                pub const m_flCompareValue: usize = 0x4F4; // float32
                pub const m_OnLessThan: usize = 0x4F8; // CEntityOutputTemplate<float32>
                pub const m_OnEqualTo: usize = 0x520; // CEntityOutputTemplate<float32>
                pub const m_OnNotEqualTo: usize = 0x548; // CEntityOutputTemplate<float32>
                pub const m_OnGreaterThan: usize = 0x570; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            }
            // Parent: CPlayerControllerComponent
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_bReceivesMoneyNextRound: usize = 0x40; // bool
                pub const m_iMoneyEarnedForNextRound: usize = 0x44; // int32
                pub const m_iAccount: usize = 0x48; // int32
                pub const m_iStartAccount: usize = 0x4C; // int32
                pub const m_iTotalCashSpent: usize = 0x50; // int32
                pub const m_iCashSpentThisRound: usize = 0x54; // int32
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x548; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 2
            pub mod CPointGamestatsCounter {
                pub const m_strStatisticName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0x4F8; // bool
            }
            // Parent: CBaseDoor
            // Field count: 1
            pub mod CRotDoor {
                pub const m_bSolidBsp: usize = 0xA68; // bool
            }
            // Parent: CPathSimple
            // Field count: 3
            pub mod CPathMover {
                pub const m_vecPathNodes: usize = 0x600; // CUtlVector<CHandle<CMoverPathNode>>
                pub const m_vecMovers: usize = 0x618; // CUtlVector<CHandle<CFuncMover>>
                pub const m_xInitialPathWorldToLocal: usize = 0x630; // CTransform
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CFuncVPhysicsClip {
                pub const m_bDisabled: usize = 0x7D8; // bool
            }
            // Parent: CBaseEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nShape (int)
            // NetworkVarNames: m_fWindSpeedMultiplier (float)
            // NetworkVarNames: m_fWindTurbulenceMultiplier (float)
            // NetworkVarNames: m_fWindSpeedVariationMultiplier (float)
            // NetworkVarNames: m_fWindDirectionVariationMultiplier (float)
            pub mod CEnvWindVolume {
                pub const m_bActive: usize = 0x4F0; // bool
                pub const m_vBoxMins: usize = 0x4F4; // Vector
                pub const m_vBoxMaxs: usize = 0x500; // Vector
                pub const m_bStartDisabled: usize = 0x50C; // bool
                pub const m_nShape: usize = 0x510; // int32
                pub const m_fWindSpeedMultiplier: usize = 0x514; // float32
                pub const m_fWindTurbulenceMultiplier: usize = 0x518; // float32
                pub const m_fWindSpeedVariationMultiplier: usize = 0x51C; // float32
                pub const m_fWindDirectionVariationMultiplier: usize = 0x520; // float32
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            pub mod CFlashbangProjectile {
                pub const m_flTimeToDetonate: usize = 0xC40; // float32
                pub const m_numOpponentsHit: usize = 0xC44; // uint8
                pub const m_numTeammatesHit: usize = 0xC45; // uint8
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerMultiple {
                pub const m_OnTrigger: usize = 0x9A8; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 6
            pub mod CPhysBallSocket {
                pub const m_flJointFriction: usize = 0x560; // float32
                pub const m_bEnableSwingLimit: usize = 0x564; // bool
                pub const m_flSwingLimit: usize = 0x568; // float32
                pub const m_bEnableTwistLimit: usize = 0x56C; // bool
                pub const m_flMinTwistAngle: usize = 0x570; // float32
                pub const m_flMaxTwistAngle: usize = 0x574; // float32
            }
            // Parent: CBaseEntity
            // Field count: 1
            pub mod CDebugHistory {
                pub const m_nNpcEvents: usize = 0x3E8530; // int32
            }
            // Parent: CBaseEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            pub mod CSoundOpvarSetPointBase {
                pub const m_bDisabled: usize = 0x4F0; // bool
                pub const m_hSource: usize = 0x4F4; // CEntityHandle
                pub const m_iszSourceEntityName: usize = 0x510; // CUtlSymbolLarge
                pub const m_vLastPosition: usize = 0x568; // Vector
                pub const m_iszStackName: usize = 0x578; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x580; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x588; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x590; // int32
                pub const m_bUseAutoCompare: usize = 0x594; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            pub mod CWeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x11F0; // bool
            }
            // Parent: CTriggerPush
            // Field count: 1
            pub mod CScriptTriggerPush {
                pub const m_vExtent: usize = 0x9E0; // Vector
            }
            // Parent: CModelPointEntity
            // Field count: 3
            pub mod CRevertSaved {
                pub const m_loadTime: usize = 0x7D8; // float32
                pub const m_Duration: usize = 0x7DC; // float32
                pub const m_HoldTime: usize = 0x7E0; // float32
            }
            // Parent: CTriggerHurt
            // Field count: 1
            pub mod CScriptTriggerHurt {
                pub const m_vExtent: usize = 0xA48; // Vector
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (uint8)
            // NetworkVarNames: m_nVoxelFrameDataSize (int)
            // NetworkVarNames: m_nVoxelUpdate (int)
            pub mod CSmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0xC68; // int32
                pub const m_bDidSmokeEffect: usize = 0xC6C; // bool
                pub const m_nRandomSeed: usize = 0xC70; // int32
                pub const m_vSmokeColor: usize = 0xC74; // Vector
                pub const m_vSmokeDetonationPos: usize = 0xC80; // Vector
                pub const m_VoxelFrameData: usize = 0xC90; // CNetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0xCA8; // int32
                pub const m_nVoxelUpdate: usize = 0xCAC; // int32
                pub const m_flLastBounce: usize = 0xCB0; // GameTime_t
                pub const m_fllastSimulationTime: usize = 0xCB4; // GameTime_t
                pub const m_bExplodeFromInferno: usize = 0x2F38; // bool
                pub const m_bDidGroundScorch: usize = 0x2F39; // bool
            }
            // Parent: CRuleEntity
            // Field count: 1
            pub mod CRulePointEntity {
                pub const m_Score: usize = 0x7E0; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            }
            // Parent: CBaseToggle
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            pub mod CBaseDoor {
                pub const m_angMoveEntitySpace: usize = 0x868; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x874; // Vector
                pub const m_ls: usize = 0x880; // locksound_t
                pub const m_bForceClosed: usize = 0x8A0; // bool
                pub const m_bDoorGroup: usize = 0x8A1; // bool
                pub const m_bLocked: usize = 0x8A2; // bool
                pub const m_bIgnoreDebris: usize = 0x8A3; // bool
                pub const m_bNoNPCs: usize = 0x8A4; // bool
                pub const m_eSpawnPosition: usize = 0x8A8; // FuncDoorSpawnPos_t
                pub const m_flBlockDamage: usize = 0x8AC; // float32
                pub const m_NoiseMoving: usize = 0x8B0; // CUtlSymbolLarge
                pub const m_NoiseArrived: usize = 0x8B8; // CUtlSymbolLarge
                pub const m_NoiseMovingClosed: usize = 0x8C0; // CUtlSymbolLarge
                pub const m_NoiseArrivedClosed: usize = 0x8C8; // CUtlSymbolLarge
                pub const m_ChainTarget: usize = 0x8D0; // CUtlSymbolLarge
                pub const m_OnBlockedClosing: usize = 0x8D8; // CEntityIOOutput
                pub const m_OnBlockedOpening: usize = 0x900; // CEntityIOOutput
                pub const m_OnUnblockedClosing: usize = 0x928; // CEntityIOOutput
                pub const m_OnUnblockedOpening: usize = 0x950; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x978; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x9A0; // CEntityIOOutput
                pub const m_OnClose: usize = 0x9C8; // CEntityIOOutput
                pub const m_OnOpen: usize = 0x9F0; // CEntityIOOutput
                pub const m_OnLockedUse: usize = 0xA18; // CEntityIOOutput
                pub const m_bLoopMoveSound: usize = 0xA40; // bool
                pub const m_bCreateNavObstacle: usize = 0xA60; // bool
                pub const m_isChaining: usize = 0xA61; // bool
                pub const m_bIsUsable: usize = 0xA62; // bool
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            pub mod CServerOnlyPointEntity {
            }
            // Parent: CItem
            // Field count: 2
            pub mod CItemDefuser {
                pub const m_entitySpottedState: usize = 0xB70; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xB88; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            pub mod CItemGenericTriggerHelper {
                pub const m_hParentItem: usize = 0x7D8; // CHandle<CItemGeneric>
            }
            // Parent: CRagdollProp
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            pub mod CRagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0xBE0; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0xBE4; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0xBE8; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0xBF4; // Vector
                pub const m_bShouldDetach: usize = 0xC00; // bool
                pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xC10; // bool
            }
            // Parent: CItem
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            pub mod CItemDogtags {
                pub const m_OwningPlayer: usize = 0xB70; // CHandle<CCSPlayerPawn>
                pub const m_KillingPlayer: usize = 0xB74; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBasePlatTrain
            // Field count: 1
            pub mod CFuncPlat {
                pub const m_sNoise: usize = 0x880; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Field count: 76
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_nColorMode (int)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flColorTemperature (float)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_nLightPathUniqueId (int32)
            // NetworkVarNames: m_nLightMapUniqueId (int32)
            // NetworkVarNames: m_nLuminaireShape (int)
            // NetworkVarNames: m_flLuminaireSize (float)
            // NetworkVarNames: m_flLuminaireAnisotropy (float)
            // NetworkVarNames: m_LightStyleString (CUtlString)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_QueuedLightStyleStrings (CUtlString)
            // NetworkVarNames: m_LightStyleEvents (CUtlString)
            // NetworkVarNames: m_LightStyleTargets (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_flShape (float)
            // NetworkVarNames: m_flSoftX (float)
            // NetworkVarNames: m_flSoftY (float)
            // NetworkVarNames: m_flSkirt (float)
            // NetworkVarNames: m_flSkirtNear (float)
            // NetworkVarNames: m_vSizeParams (Vector)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_vShear (Vector)
            // NetworkVarNames: m_nBakeSpecularToCubemaps (int)
            // NetworkVarNames: m_vBakeSpecularToCubemapsSize (Vector)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowMapSize (int)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_bContactShadow (bool)
            // NetworkVarNames: m_bForceShadowsEnabled (bool)
            // NetworkVarNames: m_nBounceLight (int)
            // NetworkVarNames: m_flBounceScale (float)
            // NetworkVarNames: m_flMinRoughness (float)
            // NetworkVarNames: m_vAlternateColor (Vector)
            // NetworkVarNames: m_fAlternateColorBrightness (float)
            // NetworkVarNames: m_nFog (int)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_nFogShadows (int)
            // NetworkVarNames: m_flFogScale (float)
            // NetworkVarNames: m_bFogMixedShadows (bool)
            // NetworkVarNames: m_flFadeSizeStart (float)
            // NetworkVarNames: m_flFadeSizeEnd (float)
            // NetworkVarNames: m_flShadowFadeSizeStart (float)
            // NetworkVarNames: m_flShadowFadeSizeEnd (float)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_nPrecomputedSubFrusta (int)
            // NetworkVarNames: m_vPrecomputedOBBOrigin0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles0 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles1 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles2 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles3 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles4 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin5 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles5 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent5 (Vector)
            // NetworkVarNames: m_VisClusters (uint16)
            pub mod CBarnLight {
                pub const m_bEnabled: usize = 0x7D8; // bool
                pub const m_nColorMode: usize = 0x7DC; // int32
                pub const m_Color: usize = 0x7E0; // Color
                pub const m_flColorTemperature: usize = 0x7E4; // float32
                pub const m_flBrightness: usize = 0x7E8; // float32
                pub const m_flBrightnessScale: usize = 0x7EC; // float32
                pub const m_nDirectLight: usize = 0x7F0; // int32
                pub const m_nBakedShadowIndex: usize = 0x7F4; // int32
                pub const m_nLightPathUniqueId: usize = 0x7F8; // int32
                pub const m_nLightMapUniqueId: usize = 0x7FC; // int32
                pub const m_nLuminaireShape: usize = 0x800; // int32
                pub const m_flLuminaireSize: usize = 0x804; // float32
                pub const m_flLuminaireAnisotropy: usize = 0x808; // float32
                pub const m_LightStyleString: usize = 0x810; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0x818; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0x820; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0x838; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0x850; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_StyleEvent: usize = 0x868; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0x928; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0x930; // float32
                pub const m_flSoftX: usize = 0x934; // float32
                pub const m_flSoftY: usize = 0x938; // float32
                pub const m_flSkirt: usize = 0x93C; // float32
                pub const m_flSkirtNear: usize = 0x940; // float32
                pub const m_vSizeParams: usize = 0x944; // Vector
                pub const m_flRange: usize = 0x950; // float32
                pub const m_vShear: usize = 0x954; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0x960; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0x964; // Vector
                pub const m_nCastShadows: usize = 0x970; // int32
                pub const m_nShadowMapSize: usize = 0x974; // int32
                pub const m_nShadowPriority: usize = 0x978; // int32
                pub const m_bContactShadow: usize = 0x97C; // bool
                pub const m_bForceShadowsEnabled: usize = 0x97D; // bool
                pub const m_nBounceLight: usize = 0x980; // int32
                pub const m_flBounceScale: usize = 0x984; // float32
                pub const m_flMinRoughness: usize = 0x988; // float32
                pub const m_vAlternateColor: usize = 0x98C; // Vector
                pub const m_fAlternateColorBrightness: usize = 0x998; // float32
                pub const m_nFog: usize = 0x99C; // int32
                pub const m_flFogStrength: usize = 0x9A0; // float32
                pub const m_nFogShadows: usize = 0x9A4; // int32
                pub const m_flFogScale: usize = 0x9A8; // float32
                pub const m_bFogMixedShadows: usize = 0x9AC; // bool
                pub const m_flFadeSizeStart: usize = 0x9B0; // float32
                pub const m_flFadeSizeEnd: usize = 0x9B4; // float32
                pub const m_flShadowFadeSizeStart: usize = 0x9B8; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0x9BC; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0x9C0; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x9C4; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x9D0; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x9DC; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x9E8; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x9F4; // Vector
                pub const m_nPrecomputedSubFrusta: usize = 0xA00; // int32
                pub const m_vPrecomputedOBBOrigin0: usize = 0xA04; // Vector
                pub const m_vPrecomputedOBBAngles0: usize = 0xA10; // QAngle
                pub const m_vPrecomputedOBBExtent0: usize = 0xA1C; // Vector
                pub const m_vPrecomputedOBBOrigin1: usize = 0xA28; // Vector
                pub const m_vPrecomputedOBBAngles1: usize = 0xA34; // QAngle
                pub const m_vPrecomputedOBBExtent1: usize = 0xA40; // Vector
                pub const m_vPrecomputedOBBOrigin2: usize = 0xA4C; // Vector
                pub const m_vPrecomputedOBBAngles2: usize = 0xA58; // QAngle
                pub const m_vPrecomputedOBBExtent2: usize = 0xA64; // Vector
                pub const m_vPrecomputedOBBOrigin3: usize = 0xA70; // Vector
                pub const m_vPrecomputedOBBAngles3: usize = 0xA7C; // QAngle
                pub const m_vPrecomputedOBBExtent3: usize = 0xA88; // Vector
                pub const m_vPrecomputedOBBOrigin4: usize = 0xA94; // Vector
                pub const m_vPrecomputedOBBAngles4: usize = 0xAA0; // QAngle
                pub const m_vPrecomputedOBBExtent4: usize = 0xAAC; // Vector
                pub const m_vPrecomputedOBBOrigin5: usize = 0xAB8; // Vector
                pub const m_vPrecomputedOBBAngles5: usize = 0xAC4; // QAngle
                pub const m_vPrecomputedOBBExtent5: usize = 0xAD0; // Vector
                pub const m_bPvsModifyEntity: usize = 0xADC; // bool
                pub const m_VisClusters: usize = 0xAE0; // CNetworkUtlVectorBase<uint16>
            }
            // Parent: CPointEntity
            // Field count: 3
            pub mod CInstructorEventEntity {
                pub const m_iszName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_hTargetPlayer: usize = 0x500; // CHandle<CBasePlayerPawn>
            }
            // Parent: CBaseAnimGraph
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_iszCommentaryFile (string_t)
            // NetworkVarNames: m_hViewPosition (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flStartTimeInCommentary (float32)
            // NetworkVarNames: m_iszTitle (string_t)
            // NetworkVarNames: m_iszSpeakers (string_t)
            // NetworkVarNames: m_iNodeNumber (int)
            // NetworkVarNames: m_iNodeNumberMax (int)
            // NetworkVarNames: m_bListenedTo (bool)
            pub mod CPointCommentaryNode {
                pub const m_iszPreCommands: usize = 0xA90; // CUtlSymbolLarge
                pub const m_iszPostCommands: usize = 0xA98; // CUtlSymbolLarge
                pub const m_iszCommentaryFile: usize = 0xAA0; // CUtlSymbolLarge
                pub const m_iszViewTarget: usize = 0xAA8; // CUtlSymbolLarge
                pub const m_hViewTarget: usize = 0xAB0; // CHandle<CBaseEntity>
                pub const m_hViewTargetAngles: usize = 0xAB4; // CHandle<CBaseEntity>
                pub const m_iszViewPosition: usize = 0xAB8; // CUtlSymbolLarge
                pub const m_hViewPosition: usize = 0xAC0; // CHandle<CBaseEntity>
                pub const m_hViewPositionMover: usize = 0xAC4; // CHandle<CBaseEntity>
                pub const m_bPreventMovement: usize = 0xAC8; // bool
                pub const m_bUnderCrosshair: usize = 0xAC9; // bool
                pub const m_bUnstoppable: usize = 0xACA; // bool
                pub const m_flFinishedTime: usize = 0xACC; // GameTime_t
                pub const m_vecFinishOrigin: usize = 0xAD0; // Vector
                pub const m_vecOriginalAngles: usize = 0xADC; // QAngle
                pub const m_vecFinishAngles: usize = 0xAE8; // QAngle
                pub const m_bPreventChangesWhileMoving: usize = 0xAF4; // bool
                pub const m_bDisabled: usize = 0xAF5; // bool
                pub const m_vecTeleportOrigin: usize = 0xAF8; // VectorWS
                pub const m_flAbortedPlaybackAt: usize = 0xB04; // GameTime_t
                pub const m_pOnCommentaryStarted: usize = 0xB08; // CEntityIOOutput
                pub const m_pOnCommentaryStopped: usize = 0xB30; // CEntityIOOutput
                pub const m_bActive: usize = 0xB58; // bool
                pub const m_flStartTime: usize = 0xB5C; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0xB60; // float32
                pub const m_iszTitle: usize = 0xB68; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0xB70; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0xB78; // int32
                pub const m_iNodeNumberMax: usize = 0xB7C; // int32
                pub const m_bListenedTo: usize = 0xB80; // bool
            }
            // Parent: CRotButton
            // Field count: 14
            pub mod CMomentaryRotButton {
                pub const m_Position: usize = 0x9A8; // CEntityOutputTemplate<float32>
                pub const m_OnUnpressed: usize = 0x9D0; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x9F8; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0xA20; // CEntityIOOutput
                pub const m_OnReachedPosition: usize = 0xA48; // CEntityIOOutput
                pub const m_lastUsed: usize = 0xA70; // int32
                pub const m_start: usize = 0xA74; // QAngle
                pub const m_end: usize = 0xA80; // QAngle
                pub const m_IdealYaw: usize = 0xA8C; // float32
                pub const m_sNoise: usize = 0xA90; // CUtlSymbolLarge
                pub const m_bUpdateTarget: usize = 0xA98; // bool
                pub const m_direction: usize = 0xA9C; // int32
                pub const m_returnSpeed: usize = 0xAA0; // float32
                pub const m_flStartPosition: usize = 0xAA4; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 3
            pub mod CSceneListManager {
                pub const m_hListManagers: usize = 0x4F0; // CUtlVector<CHandle<CSceneListManager>>
                pub const m_iszScenes: usize = 0x508; // CUtlSymbolLarge[16]
                pub const m_hScenes: usize = 0x588; // CHandle<CBaseEntity>[16]
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CEnvTilt {
                pub const m_Duration: usize = 0x4F0; // float32
                pub const m_Radius: usize = 0x4F4; // float32
                pub const m_TiltTime: usize = 0x4F8; // float32
                pub const m_stopTime: usize = 0x4FC; // GameTime_t
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: CBreakableProp
            // Field count: 38
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_bAwake (bool)
            pub mod CPhysicsProp {
                pub const m_MotionEnabled: usize = 0xC60; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0xC88; // CEntityIOOutput
                pub const m_OnAwake: usize = 0xCB0; // CEntityIOOutput
                pub const m_OnAsleep: usize = 0xCD8; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0xD00; // CEntityIOOutput
                pub const m_OnOutOfWorld: usize = 0xD28; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0xD50; // CEntityIOOutput
                pub const m_bForceNavIgnore: usize = 0xD78; // bool
                pub const m_bNoNavmeshBlocker: usize = 0xD79; // bool
                pub const m_bForceNpcExclude: usize = 0xD7A; // bool
                pub const m_massScale: usize = 0xD7C; // float32
                pub const m_buoyancyScale: usize = 0xD80; // float32
                pub const m_damageType: usize = 0xD84; // int32
                pub const m_damageToEnableMotion: usize = 0xD88; // int32
                pub const m_flForceToEnableMotion: usize = 0xD8C; // float32
                pub const m_bThrownByPlayer: usize = 0xD90; // bool
                pub const m_bDroppedByPlayer: usize = 0xD91; // bool
                pub const m_bTouchedByPlayer: usize = 0xD92; // bool
                pub const m_bFirstCollisionAfterLaunch: usize = 0xD93; // bool
                pub const m_bHasBeenAwakened: usize = 0xD94; // bool
                pub const m_bIsOverrideProp: usize = 0xD95; // bool
                pub const m_flLastBurn: usize = 0xD98; // GameTime_t
                pub const m_nDynamicContinuousContactBehavior: usize = 0xD9C; // DynamicContinuousContactBehavior_t
                pub const m_fNextCheckDisableMotionContactsTime: usize = 0xDA0; // GameTime_t
                pub const m_iInitialGlowState: usize = 0xDA4; // int32
                pub const m_nGlowRange: usize = 0xDA8; // int32
                pub const m_nGlowRangeMin: usize = 0xDAC; // int32
                pub const m_glowColor: usize = 0xDB0; // Color
                pub const m_bShouldAutoConvertBackFromDebris: usize = 0xDB4; // bool
                pub const m_bMuteImpactEffects: usize = 0xDB5; // bool
                pub const m_bAcceptDamageFromHeldObjects: usize = 0xDBF; // bool
                pub const m_bEnableUseOutput: usize = 0xDC0; // bool
                pub const m_CrateType: usize = 0xDC4; // CPhysicsProp::CrateType_t
                pub const m_strItemClass: usize = 0xDC8; // CUtlSymbolLarge[4]
                pub const m_nItemCount: usize = 0xDE8; // int32[4]
                pub const m_bRemovableForAmmoBalancing: usize = 0xDF8; // bool
                pub const m_bAwake: usize = 0xDF9; // bool
                pub const m_bAttachedToReferenceFrame: usize = 0xDFA; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            pub mod CFuncNavObstruction {
                pub const m_bDisabled: usize = 0x7F0; // bool
                pub const m_bUseAsyncObstacleUpdate: usize = 0x7F1; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 12
            pub mod CPhysWheelConstraint {
                pub const m_flSuspensionFrequency: usize = 0x560; // float32
                pub const m_flSuspensionDampingRatio: usize = 0x564; // float32
                pub const m_flSuspensionHeightOffset: usize = 0x568; // float32
                pub const m_bEnableSuspensionLimit: usize = 0x56C; // bool
                pub const m_flMinSuspensionOffset: usize = 0x570; // float32
                pub const m_flMaxSuspensionOffset: usize = 0x574; // float32
                pub const m_bEnableSteeringLimit: usize = 0x578; // bool
                pub const m_flMinSteeringAngle: usize = 0x57C; // float32
                pub const m_flMaxSteeringAngle: usize = 0x580; // float32
                pub const m_flSteeringAxisFriction: usize = 0x584; // float32
                pub const m_flSpinAxisFriction: usize = 0x588; // float32
                pub const m_hSteeringMimicsEntity: usize = 0x58C; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x4F0; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x4F4; // CHandle<CSkyCamera>
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerToggleSave {
            }
            // Parent: CBaseEntity
            // Field count: 17
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            pub mod CColorCorrection {
                pub const m_flFadeInDuration: usize = 0x4F0; // float32
                pub const m_flFadeOutDuration: usize = 0x4F4; // float32
                pub const m_flStartFadeInWeight: usize = 0x4F8; // float32
                pub const m_flStartFadeOutWeight: usize = 0x4FC; // float32
                pub const m_flTimeStartFadeIn: usize = 0x500; // GameTime_t
                pub const m_flTimeStartFadeOut: usize = 0x504; // GameTime_t
                pub const m_flMaxWeight: usize = 0x508; // float32
                pub const m_bStartDisabled: usize = 0x50C; // bool
                pub const m_bEnabled: usize = 0x50D; // bool
                pub const m_bMaster: usize = 0x50E; // bool
                pub const m_bClientSide: usize = 0x50F; // bool
                pub const m_bExclusive: usize = 0x510; // bool
                pub const m_MinFalloff: usize = 0x514; // float32
                pub const m_MaxFalloff: usize = 0x518; // float32
                pub const m_flCurWeight: usize = 0x51C; // float32
                pub const m_netlookupFilename: usize = 0x520; // char[512]
                pub const m_lookupFilename: usize = 0x720; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 14
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x4F0; // int32
                pub const m_flBombRadius: usize = 0x4F4; // float32
                pub const m_iPetPopulation: usize = 0x4F8; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x4FC; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x4FD; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x500; // float32
                pub const m_iHostageCount: usize = 0x504; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x508; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x509; // bool
                pub const m_flEnvRainStrength: usize = 0x50C; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x510; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x514; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x518; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x51C; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 35
            pub mod CFuncRotator {
                pub const m_hRotatorTarget: usize = 0x7D8; // CHandle<CBaseEntity>
                pub const m_bIsRotating: usize = 0x7DC; // bool
                pub const m_bIsReversing: usize = 0x7DD; // bool
                pub const m_flTimeToReachMaxSpeed: usize = 0x7E0; // float32
                pub const m_flTimeToReachZeroSpeed: usize = 0x7E4; // float32
                pub const m_flDistanceAlongArcTraveled: usize = 0x7E8; // float32
                pub const m_flTimeToWaitOscillate: usize = 0x7EC; // float32
                pub const m_flTimeRotationStart: usize = 0x7F0; // GameTime_t
                pub const m_qLSPrevChange: usize = 0x800; // Quaternion
                pub const m_qWSPrev: usize = 0x810; // Quaternion
                pub const m_qWSInit: usize = 0x820; // Quaternion
                pub const m_qLSInit: usize = 0x830; // Quaternion
                pub const m_qLSOrientation: usize = 0x840; // Quaternion
                pub const m_OnRotationStarted: usize = 0x850; // CEntityIOOutput
                pub const m_OnRotationCompleted: usize = 0x878; // CEntityIOOutput
                pub const m_OnOscillate: usize = 0x8A0; // CEntityIOOutput
                pub const m_OnOscillateStartArrive: usize = 0x8C8; // CEntityIOOutput
                pub const m_OnOscillateStartDepart: usize = 0x8F0; // CEntityIOOutput
                pub const m_OnOscillateEndArrive: usize = 0x918; // CEntityIOOutput
                pub const m_OnOscillateEndDepart: usize = 0x940; // CEntityIOOutput
                pub const m_bOscillateDepart: usize = 0x968; // bool
                pub const m_nOscillateCount: usize = 0x96C; // int32
                pub const m_eRotateType: usize = 0x970; // CFuncRotator::Rotate_t
                pub const m_ePrevRotateType: usize = 0x974; // CFuncRotator::Rotate_t
                pub const m_bHasTargetOverride: usize = 0x978; // bool
                pub const m_qOrientationOverride: usize = 0x980; // Quaternion
                pub const m_eSpaceOverride: usize = 0x990; // RotatorTargetSpace_t
                pub const m_qAngularVelocity: usize = 0x994; // QAngle
                pub const m_vLookAtForcedUp: usize = 0x9A0; // Vector
                pub const m_strRotatorTarget: usize = 0x9B0; // CUtlSymbolLarge
                pub const m_bRecordHistory: usize = 0x9B8; // bool
                pub const m_vecRotatorHistory: usize = 0x9C0; // CUtlVector<RotatorHistoryEntry_t>
                pub const m_bReturningToPreviousOrientation: usize = 0x9D8; // bool
                pub const m_vecRotatorQueue: usize = 0x9E0; // CUtlVector<RotatorQueueEntry_t>
                pub const m_vecRotatorQueueHistory: usize = 0x9F8; // CUtlVector<RotatorHistoryEntry_t>
            }
            // Parent: CBaseEntity
            // Field count: 14
            pub mod CSoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x4F0; // bool
                pub const m_bToLocalPlayer: usize = 0x4F1; // bool
                pub const m_bStopOnNew: usize = 0x4F2; // bool
                pub const m_bSaveRestore: usize = 0x4F3; // bool
                pub const m_bSavedIsPlaying: usize = 0x4F4; // bool
                pub const m_flSavedElapsedTime: usize = 0x4F8; // float32
                pub const m_iszSourceEntityName: usize = 0x500; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x508; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x510; // CEntityOutputTemplate<uint64>
                pub const m_onSoundFinished: usize = 0x538; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x560; // float32
                pub const m_iszSoundName: usize = 0x590; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x5AC; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x5B0; // int32
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            pub mod CTriggerImpact {
                pub const m_flMagnitude: usize = 0x9D0; // float32
                pub const m_flNoise: usize = 0x9D4; // float32
                pub const m_flViewkick: usize = 0x9D8; // float32
                pub const m_pOutputForce: usize = 0x9E0; // CEntityOutputTemplate<Vector>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: CHostage
            // Field count: 0
            pub mod CHostageAlias_info_hostage_spawn {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x548; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_vecMoveDirEntitySpace (Vector)
            // NetworkVarNames: m_flTargetSpeed (float32)
            // NetworkVarNames: m_nTransitionStartTick (GameTick_t)
            // NetworkVarNames: m_nTransitionDurationTicks (int)
            // NetworkVarNames: m_flTransitionStartSpeed (float32)
            // NetworkVarNames: m_hConveyorModels (EHANDLE)
            pub mod CFuncConveyor {
                pub const m_szConveyorModels: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_flTransitionDurationSeconds: usize = 0x7E0; // float32
                pub const m_angMoveEntitySpace: usize = 0x7E4; // QAngle
                pub const m_vecMoveDirEntitySpace: usize = 0x7F0; // Vector
                pub const m_flTargetSpeed: usize = 0x7FC; // float32
                pub const m_nTransitionStartTick: usize = 0x800; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0x804; // int32
                pub const m_flTransitionStartSpeed: usize = 0x808; // float32
                pub const m_hConveyorModels: usize = 0x810; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 0
            pub mod CInfoTargetServerOnly {
            }
            // Parent: None
            // Field count: 0
            pub mod PropDoorRotatingOpenDirection_e {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseCursorCancelPriority_t {
            }
        }
    }
}
