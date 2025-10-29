// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 290
        // Enum count: 92
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
            // Alignment: 4
            // Member count: 29
            enum class C_EconItemView : uint32_t {
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0
            };
            // Alignment: 1
            // Member count: 36
            enum class CGameSceneNode : uint8_t {
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0
            };
            // Parent: CPointEntity
            // Field count: 10
            namespace CAmbientGeneric {
                constexpr std::ptrdiff_t m_radius = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flMaxRadius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_iSoundLevel = 0x4F8; // soundlevel_t
                constexpr std::ptrdiff_t m_dpv = 0x4FC; // dynpitchvol_t
                constexpr std::ptrdiff_t m_fActive = 0x560; // bool
                constexpr std::ptrdiff_t m_fLooping = 0x561; // bool
                constexpr std::ptrdiff_t m_iszSound = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSourceEntName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSoundSource = 0x578; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x57C; // CEntityIndex
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CEnvEntityMaker {
                constexpr std::ptrdiff_t m_vecEntityMins = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4FC; // Vector
                constexpr std::ptrdiff_t m_hCurrentInstance = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCurrentBlocker = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x510; // Vector
                constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x51C; // QAngle
                constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x528; // float32
                constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x52C; // float32
                constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x530; // bool
                constexpr std::ptrdiff_t m_iszTemplate = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x568; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 0
            namespace CPulseGraphInstance_GameBlackboard {
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CPointEntity {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CFogTrigger {
                constexpr std::ptrdiff_t m_fog = 0x9A8; // fogparams_t
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoTeleportDestination {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointBroadcastClientCommand {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CPlayerPing>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
                constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle<CPlayerPing>
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvMuzzleFlash {
                constexpr std::ptrdiff_t m_flScale = 0x4F0; // float32
                constexpr std::ptrdiff_t m_iszParentAttachment = 0x4F8; // CUtlSymbolLarge
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
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBaseTriggerAPI {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x9A8; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0xAC0; // float32
            }
            // Parent: CTonemapController2
            // Field count: 0
            namespace CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CPathTrack {
                constexpr std::ptrdiff_t m_pnext = 0x4F0; // CPathTrack*
                constexpr std::ptrdiff_t m_pprevious = 0x4F8; // CPathTrack*
                constexpr std::ptrdiff_t m_paltpath = 0x500; // CPathTrack*
                constexpr std::ptrdiff_t m_flRadius = 0x508; // float32
                constexpr std::ptrdiff_t m_length = 0x50C; // float32
                constexpr std::ptrdiff_t m_altName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIterVal = 0x518; // int32
                constexpr std::ptrdiff_t m_eOrientationType = 0x51C; // TrackOrientationType_t
                constexpr std::ptrdiff_t m_OnPass = 0x520; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: CBaseTrigger
            // Field count: 5
            namespace CTriggerProximity {
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x9A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszMeasureTarget = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fRadius = 0x9B8; // float32
                constexpr std::ptrdiff_t m_nTouchers = 0x9BC; // int32
                constexpr std::ptrdiff_t m_NearestEntityDistance = 0x9C0; // CEntityOutputTemplate<float32>
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CTankTrainAI {
                constexpr std::ptrdiff_t m_hTrain = 0x4F0; // CHandle<CFuncTrackTrain>
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundPlaying = 0x4F8; // int32
                constexpr std::ptrdiff_t m_startSoundName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_engineSoundName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_movementSoundName = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_targetEntityName = 0x528; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CInfoGameEventProxy {
                constexpr std::ptrdiff_t m_iszEventName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRange = 0x4F8; // float32
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
            namespace CInferno {
                constexpr std::ptrdiff_t m_firePositions = 0x7D8; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0xAD8; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xDD8; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0xE18; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1118; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x111C; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1120; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1124; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1128; // bool
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1129; // bool
                constexpr std::ptrdiff_t m_extent = 0x1330; // Extent
                constexpr std::ptrdiff_t m_damageTimer = 0x1348; // CountdownTimer
                constexpr std::ptrdiff_t m_damageRampTimer = 0x1360; // CountdownTimer
                constexpr std::ptrdiff_t m_splashVelocity = 0x1378; // Vector
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x1384; // Vector
                constexpr std::ptrdiff_t m_startPos = 0x1390; // Vector
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x139C; // Vector
                constexpr std::ptrdiff_t m_activeTimer = 0x13A8; // IntervalTimer
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x13B8; // int32
                constexpr std::ptrdiff_t m_nMaxFlames = 0x13BC; // int32
                constexpr std::ptrdiff_t m_nSpreadCount = 0x13C0; // int32
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x13C8; // CountdownTimer
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x13E0; // CountdownTimer
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x13F8; // uint16
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSCAR20 {
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            namespace CFuncInteractionLayerClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x7D8; // bool
                constexpr std::ptrdiff_t m_iszInteractsAs = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszInteractsWith = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerDetectBulletFire {
                constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x9A8; // bool
                constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x9B0; // CEntityIOOutput
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            namespace CCSPlayer_UseServices {
                constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x48; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            namespace CGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_szQuestName = 0x30; // char[128]
                constexpr std::ptrdiff_t m_nQuestPhase = 0xB0; // int32
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xB4; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xB8; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0xBC; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSG556 {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            namespace CRagdollConstraint {
                constexpr std::ptrdiff_t m_xmin = 0x560; // float32
                constexpr std::ptrdiff_t m_xmax = 0x564; // float32
                constexpr std::ptrdiff_t m_ymin = 0x568; // float32
                constexpr std::ptrdiff_t m_ymax = 0x56C; // float32
                constexpr std::ptrdiff_t m_zmin = 0x570; // float32
                constexpr std::ptrdiff_t m_zmax = 0x574; // float32
                constexpr std::ptrdiff_t m_xfriction = 0x578; // float32
                constexpr std::ptrdiff_t m_yfriction = 0x57C; // float32
                constexpr std::ptrdiff_t m_zfriction = 0x580; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncVehicleClip {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CCSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
            }
            // Parent: CBaseToggle
            // Field count: 13
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace CFuncMoveLinear {
                constexpr std::ptrdiff_t m_authoredPosition = 0x858; // MoveLinearAuthoredPos_t
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x85C; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x868; // Vector
                constexpr std::ptrdiff_t m_soundStart = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundStop = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_currentSound = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flBlockDamage = 0x890; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0x894; // float32
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x8A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x8F0; // bool
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x8F1; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x8F2; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CPhysMotorAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 0
            namespace CCSObserver_ObserverServices {
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
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x4F8; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x4FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x500; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x504; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x505; // char[18]
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CTestPulseIO {
                constexpr std::ptrdiff_t m_OnVariantVoid = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantBool = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantInt = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantFloat = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantString = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantColor = 0x5B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantVector = 0x5E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAllowEmptyInputs = 0x608; // bool
            }
            // Parent: CRulePointEntity
            // Field count: 0
            namespace CGamePlayerEquip {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CPointEntityFinder {
                constexpr std::ptrdiff_t m_hEntity = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iFilterName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x500; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iRefName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hReference = 0x510; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_FindMethod = 0x514; // EntFinderMethod_t
                constexpr std::ptrdiff_t m_OnFoundEntity = 0x518; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicPlayerProxy {
                constexpr std::ptrdiff_t m_hPlayer = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x520; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerDied = 0x548; // CEntityIOOutput
                constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x570; // CEntityOutputTemplate<int32>
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CBasePlayerControllerAPI {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 1
            namespace CHostageExpresserShim {
                constexpr std::ptrdiff_t m_pExpresser = 0xBE0; // CAI_Expresser*
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4F0; // bool
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
            namespace CPathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x4F8; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4FC; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x508; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x520; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x524; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x528; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x52C; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x530; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x538; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x540; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x558; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x570; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x588; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x5A0; // CNetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x5B8; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CRagdollProp
            // Field count: 0
            namespace CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CBaseProp
            // Field count: 32
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0xAC8; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0xB08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0xB30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xB58; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xB80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xBA8; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xBAC; // int32
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0xBB0; // QAngle
                constexpr std::ptrdiff_t m_flPressureDelay = 0xBBC; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xBC0; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xBC4; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0xBD0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xBD4; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xBD8; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xBDC; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xBE0; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xBE8; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xBF0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xBF4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xBF8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0xC00; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xC08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xC10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xC18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xC20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xC28; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xC2C; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xC30; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xC34; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszPuntSound = 0xC38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xC40; // bool
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xC41; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace CLightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x7D8; // CLightComponent*
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x508; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x514; // Vector
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
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x220; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x224; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x228; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x22C; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x230; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x234; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x238; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x23C; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x248; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x24A; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x24B; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x24C; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x250; // GameTime_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x588; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_bIsUsingAG2 = 0x590; // bool
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x598; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x5B0; // int32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x5B4; // int32
                constexpr std::ptrdiff_t m_nGraphCreationFlagsAG2 = 0x5B8; // uint8
                constexpr std::ptrdiff_t m_nServerGraphDefReloadCountAG2 = 0x7A0; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x7A4; // int32
            }
            // Parent: None
            // Field count: 10
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C; // bool
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector<float32>
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CModelPointEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            namespace CFuncBrush {
                constexpr std::ptrdiff_t m_iSolidity = 0x7D8; // BrushSolidities_e
                constexpr std::ptrdiff_t m_iDisabled = 0x7DC; // int32
                constexpr std::ptrdiff_t m_bSolidBsp = 0x7E0; // bool
                constexpr std::ptrdiff_t m_iszExcludedClass = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bInvertExclusion = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bScriptedMovement = 0x7F1; // bool
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CItemSoda {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
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
            namespace CParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x7D8; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x9D8; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x9D9; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x9DC; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x9E0; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x9E4; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x9E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x9F0; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x9F4; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x9F8; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xA28; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xA2C; // CHandle<CBaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xB2C; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xB2D; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xB2E; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xB2F; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xB30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xB38; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0xD38; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xD3C; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0xD48; // int32
                constexpr std::ptrdiff_t m_clrTint = 0xD4C; // Color
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            namespace CTriggerBrush {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x7D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x800; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUse = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInputFilter = 0x850; // int32
                constexpr std::ptrdiff_t m_iDontMessageParent = 0x854; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
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
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1Silencer {
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
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: CItem
            // Field count: 0
            namespace CItemAssaultSuit {
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
            namespace CBeam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x7E0; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x7E4; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x7E8; // uint8
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x7F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x7F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x800; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x804; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x808; // CHandle<CBaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x830; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x83C; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x840; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x844; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x848; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x84C; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x850; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x854; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x858; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0x85C; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0x860; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x864; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0x870; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nDissolveType = 0x874; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicEventListener {
                constexpr std::ptrdiff_t m_strEventName = 0x500; // CUtlString
                constexpr std::ptrdiff_t m_bIsEnabled = 0x508; // bool
                constexpr std::ptrdiff_t m_nTeam = 0x50C; // int32
                constexpr std::ptrdiff_t m_OnEventFired = 0x510; // CEntityIOOutput
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CInfoData {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x548; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x54C; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x550; // int32
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCSSprite {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMathColorBlend {
                constexpr std::ptrdiff_t m_flInMin = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flInMax = 0x4F4; // float32
                constexpr std::ptrdiff_t m_OutColor1 = 0x4F8; // Color
                constexpr std::ptrdiff_t m_OutColor2 = 0x4FC; // Color
                constexpr std::ptrdiff_t m_OutValue = 0x500; // CEntityOutputTemplate<Color>
            }
            // Parent: CModelPointEntity
            // Field count: 0
            namespace CShower {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace CPathSimpleAPI {
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
            namespace CPlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0x7D8; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0x7DC; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0x7E0; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0x7E4; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0x7E8; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0x7F4; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x800; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0x80C; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0x818; // int32
                constexpr std::ptrdiff_t m_nEntity = 0x81C; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0x820; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0x824; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x828; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x82C; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x82D; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x7D8; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
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
            namespace CEnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1568; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x156C; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1578; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1580; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1588; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1590; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x15A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x15A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x15C8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x15D4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x15E0; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x15E4; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x15E8; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x15EC; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x15F0; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x15F4; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x15F8; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1604; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1608; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x160C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1610; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1614; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1618; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1631; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace CSoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_iszPathCorner = 0x5B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iCountMax = 0x5C0; // int32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x5C4; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x5C8; // float32
                constexpr std::ptrdiff_t m_flDotProductMax = 0x5CC; // float32
                constexpr std::ptrdiff_t m_bPlaying = 0x5D0; // bool
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x5F8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x170; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x174; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x178; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x17C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
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
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0xEE8; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0xEF0; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0xEF8; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0xF00; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pRadioServices = 0xF08; // CCSPlayer_RadioServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0xF10; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_nCharacterDefIndex = 0xF18; // uint16
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xF1A; // bool
                constexpr std::ptrdiff_t m_strVOPrefix = 0xF20; // CUtlString
                constexpr std::ptrdiff_t m_szLastPlaceName = 0xF28; // char[18]
                constexpr std::ptrdiff_t m_bInHostageResetZone = 0xFE8; // bool
                constexpr std::ptrdiff_t m_bInBuyZone = 0xFE9; // bool
                constexpr std::ptrdiff_t m_TouchingBuyZones = 0xFF0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bWasInBuyZone = 0x1008; // bool
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1009; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x100A; // bool
                constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x100B; // bool
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x100C; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1010; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1014; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1015; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x1018; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x101C; // loadout_slot_t
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1020; // GameTime_t
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x1024; // float32
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x1028; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1034; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1040; // GameTick_t
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1044; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1048; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1060; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0x1708; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x170C; // bool
                constexpr std::ptrdiff_t m_iPlayerLocked = 0x1710; // int32
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1718; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x171C; // GameTime_t
                constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x1720; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1724; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1728; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1734; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1740; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1780; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1784; // Vector
                constexpr std::ptrdiff_t m_EconGloves = 0x1790; // CEconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1A38; // uint8
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x1A3C; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x1A48; // bool
                constexpr std::ptrdiff_t m_bLeftHanded = 0x1A49; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x1A4C; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1A50; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1A54; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1A58; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x1A5C; // float32
                constexpr std::ptrdiff_t m_bIsWalking = 0x1A60; // bool
                constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x1A64; // float32
                constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x1A68; // float32
                constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x1A6C; // float32
                constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0x1A70; // uint32
                constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0x1A74; // float32
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1A78; // GameTime_t
                constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x1A7C; // bool
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1A80; // CEntityIndex
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1A88; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1AA0; // int32
                constexpr std::ptrdiff_t m_bIsScoped = 0x1AA4; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1AA5; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1AA6; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1AA7; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1AA8; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1AAC; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1AB0; // bool
                constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1AB4; // CEntityIndex
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1AB8; // int32
                constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1ABC; // bool
                constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1ABD; // bool
                constexpr std::ptrdiff_t m_iShotsFired = 0x1AC0; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1AC4; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1AC8; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x1ACC; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x1AD0; // int32
                constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1AD4; // Vector
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1AE0; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1AE4; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1AE8; // bool
                constexpr std::ptrdiff_t m_LastHitBox = 0x1AEC; // int32
                constexpr std::ptrdiff_t m_pBot = 0x1AF0; // CCSBot*
                constexpr std::ptrdiff_t m_bBotAllowActive = 0x1AF8; // bool
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1AFC; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1B08; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1B0C; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1B10; // Vector
                constexpr std::ptrdiff_t m_nLastPickupPriority = 0x1B1C; // int32
                constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x1B20; // float32
                constexpr std::ptrdiff_t m_ArmorValue = 0x1B24; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1B28; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1B2A; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1B2C; // uint16
                constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1B30; // int32
                constexpr std::ptrdiff_t m_bIsSpawning = 0x1B34; // bool
                constexpr std::ptrdiff_t m_iDeathFlags = 0x1B40; // int32
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1B44; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1B48; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1B4C; // Vector
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1B58; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1B6C; // Color
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1B70; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1B74; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1B78; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1B84; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1B90; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1B9C; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1BB4; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1BCC; // Vector[2]
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x1BE8; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x1C50; // int32
                constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1C54; // bool
                constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1C55; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1C58; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x1C5C; // bool
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1C60; // float32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1C64; // QAngle
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
            namespace CEnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x14E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x14F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x14F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1500; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1508; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1510; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1518; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1530; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x153C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1548; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x154C; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1550; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1554; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1558; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x155C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1560; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1564; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1568; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x156C; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1579; // bool
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 3
            namespace SpawnPoint {
                constexpr std::ptrdiff_t m_iPriority = 0x4F0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x4F4; // bool
                constexpr std::ptrdiff_t m_nType = 0x4F8; // int32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM249 {
            }
            // Parent: CRopeKeyframe
            // Field count: 0
            namespace CRopeKeyframeAlias_move_rope {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs_Sounds {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulsePhysicsConstraintsFuncs {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
            }
            // Parent: CSceneEntity
            // Field count: 0
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4F0; // int8
                constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4F4; // int32
                constexpr std::ptrdiff_t m_bSaveImportant = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bCanTakeDamage = 0x4F9; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CMultiplayRules {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerRemove {
                constexpr std::ptrdiff_t m_OnRemove = 0x9A8; // CEntityIOOutput
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 1
            namespace CMarkupVolumeTagged_Nav {
                constexpr std::ptrdiff_t m_nScopes = 0x818; // NavScopeFlags_t
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerTerrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAutosave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4F0; // bool
                constexpr std::ptrdiff_t m_minHitPoints = 0x4F4; // int32
                constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4F8; // int32
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CPrecipitation {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCommentaryViewPosition {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CEnvGlobal {
                constexpr std::ptrdiff_t m_outCounter = 0x4F0; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_globalstate = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_triggermode = 0x520; // int32
                constexpr std::ptrdiff_t m_initialstate = 0x524; // int32
                constexpr std::ptrdiff_t m_counter = 0x528; // int32
            }
            // Parent: CLogicNPCCounterAABB
            // Field count: 0
            namespace CLogicNPCCounterOBB {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace CPhysMagnet {
                constexpr std::ptrdiff_t m_OnMagnetAttach = 0xA90; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMagnetDetach = 0xAB8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_massScale = 0xAE0; // float32
                constexpr std::ptrdiff_t m_forceLimit = 0xAE4; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0xAE8; // float32
                constexpr std::ptrdiff_t m_MagnettedEntities = 0xAF0; // CUtlVector<magnetted_objects_t>
                constexpr std::ptrdiff_t m_bActive = 0xB08; // bool
                constexpr std::ptrdiff_t m_bHasHitSomething = 0xB09; // bool
                constexpr std::ptrdiff_t m_flTotalMass = 0xB0C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0xB10; // float32
                constexpr std::ptrdiff_t m_flNextSuckTime = 0xB14; // GameTime_t
                constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0xB18; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP5SD {
            }
            // Parent: CCSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            namespace CWeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x11D0; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x11D1; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CCommentaryAuto {
                constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x540; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
                constexpr std::ptrdiff_t m_entity = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // CNetworkUtlVectorBase<CUtlSymbolLarge>
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
            namespace CC4 {
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0x1200; // Vector
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0x120C; // Vector
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0x1218; // bool
                constexpr std::ptrdiff_t m_bStartedArming = 0x1219; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x121C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1220; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1221; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1228; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1240; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1244; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x124B; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CHostageCarriableProp {
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_cable_dynamic {
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
            namespace CCSPlayerPawnBase {
                constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xDA0; // CTouchExpansionComponent
                constexpr std::ptrdiff_t m_pPingServices = 0xDF0; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_blindUntilTime = 0xDF8; // GameTime_t
                constexpr std::ptrdiff_t m_blindStartTime = 0xDFC; // GameTime_t
                constexpr std::ptrdiff_t m_iPlayerState = 0xE00; // CSPlayerState
                constexpr std::ptrdiff_t m_bRespawning = 0xEB0; // bool
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xEB1; // bool
                constexpr std::ptrdiff_t m_iNumSpawns = 0xEB4; // int32
                constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xEBC; // float32
                constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0xEC8; // float32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0xECC; // float32
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0xED0; // int32
                constexpr std::ptrdiff_t m_hOriginalController = 0xED4; // CHandle<CCSPlayerController>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x590; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInfoPlayerStart {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x4F1; // bool
                constexpr std::ptrdiff_t m_pPawnSubclass = 0x4F8; // CGlobalSymbol
            }
            // Parent: CBaseEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x4F4; // bool
                constexpr std::ptrdiff_t m_flSize = 0x4F8; // float32
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x4FC; // bool
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x500; // int32
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x504; // float32
                constexpr std::ptrdiff_t m_flLifetime = 0x508; // GameTime_t
                constexpr std::ptrdiff_t m_hAttacker = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x510; // float32
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x514; // int32
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
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x170; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x3F0; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3F1; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3F2; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x3F4; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3F8; // uint8
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_strStartTouchEventName (CUtlString)
            // NetworkVarNames: m_strEndTouchEventName (CUtlString)
            // NetworkVarNames: m_strTriggerID (CUtlString)
            namespace CTriggerGameEvent {
                constexpr std::ptrdiff_t m_strStartTouchEventName = 0x9A8; // CUtlString
                constexpr std::ptrdiff_t m_strEndTouchEventName = 0x9B0; // CUtlString
                constexpr std::ptrdiff_t m_strTriggerID = 0x9B8; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CMessageEntity {
                constexpr std::ptrdiff_t m_radius = 0x4F0; // int32
                constexpr std::ptrdiff_t m_messageText = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_drawText = 0x500; // bool
                constexpr std::ptrdiff_t m_bDeveloperOnly = 0x501; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x502; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CEnvEntityIgniter {
                constexpr std::ptrdiff_t m_flLifetime = 0x4F0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // Parent: CEconEntity
            // Field count: 2
            namespace CEconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0xE50; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0xE54; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseArraylib {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            namespace CItem {
                constexpr std::ptrdiff_t m_OnPlayerTouch = 0xA98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xAC0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0xAE8; // bool
                constexpr std::ptrdiff_t m_OnCacheInteraction = 0xAF0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGlovePulled = 0xB18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xB40; // VectorWS
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xB4C; // QAngle
                constexpr std::ptrdiff_t m_bPhysStartAsleep = 0xB58; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CTriggerPush {
                constexpr std::ptrdiff_t m_angPushEntitySpace = 0x9A8; // QAngle
                constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x9B4; // Vector
                constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x9C0; // bool
                constexpr std::ptrdiff_t m_bUsePathSimple = 0x9C1; // bool
                constexpr std::ptrdiff_t m_iszPathSimpleName = 0x9C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathSimple = 0x9D0; // CPathSimple*
                constexpr std::ptrdiff_t m_splinePushType = 0x9D8; // uint32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xA90; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0xA94; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xA98; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xAA0; // CTransform
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
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x4F4; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x4F8; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x510; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x528; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x530; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_szTargetsName = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x550; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: CPointEntity
            // Field count: 16
            namespace CPointAngularVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flThreshold = 0x4F4; // float32
                constexpr std::ptrdiff_t m_nLastCompareResult = 0x4F8; // int32
                constexpr std::ptrdiff_t m_nLastFireResult = 0x4FC; // int32
                constexpr std::ptrdiff_t m_flFireTime = 0x500; // GameTime_t
                constexpr std::ptrdiff_t m_flFireInterval = 0x504; // float32
                constexpr std::ptrdiff_t m_flLastAngVelocity = 0x508; // float32
                constexpr std::ptrdiff_t m_lastOrientation = 0x50C; // QAngle
                constexpr std::ptrdiff_t m_vecAxis = 0x518; // VectorWS
                constexpr std::ptrdiff_t m_bUseHelper = 0x524; // bool
                constexpr std::ptrdiff_t m_AngularVelocity = 0x528; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnLessThan = 0x550; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x578; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x5A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x5C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEqualTo = 0x5F0; // CEntityIOOutput
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
            namespace CPlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x4FC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x500; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x501; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_FollowEntity {
                constexpr std::ptrdiff_t m_ParamBoneOrAttachName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_ParamBoneOrAttachNameChild = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            namespace CPulseFuncs_GameParticleManager {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x548; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CKeepUpright {
                constexpr std::ptrdiff_t m_worldGoalAxis = 0x4F8; // Vector
                constexpr std::ptrdiff_t m_localTestAxis = 0x504; // Vector
                constexpr std::ptrdiff_t m_nameAttach = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_attachedObject = 0x520; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angularLimit = 0x524; // float32
                constexpr std::ptrdiff_t m_bActive = 0x528; // bool
                constexpr std::ptrdiff_t m_bDampAllRotation = 0x529; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x508; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x50C; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x510; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x514; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x518; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x530; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x548; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x550; // HSCRIPT
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
            namespace CEnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x4F0; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x4F4; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x500; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x504; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x508; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x50C; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x510; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x514; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x518; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x51C; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x520; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x524; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x530; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x53C; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x540; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x544; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x548; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x54C; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x550; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x554; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x558; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x55C; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x560; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x564; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x565; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x566; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x568; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x570; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x574; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x578; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x57C; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x588; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x58C; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x598; // bool
            }
            // Parent: None
            // Field count: 13
            namespace CBot {
                constexpr std::ptrdiff_t m_pController = 0x10; // CCSPlayerController*
                constexpr std::ptrdiff_t m_pPlayer = 0x18; // CCSPlayerPawn*
                constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // bool
                constexpr std::ptrdiff_t m_id = 0x24; // uint32
                constexpr std::ptrdiff_t m_isRunning = 0xC0; // bool
                constexpr std::ptrdiff_t m_isCrouching = 0xC1; // bool
                constexpr std::ptrdiff_t m_forwardSpeed = 0xC4; // float32
                constexpr std::ptrdiff_t m_leftSpeed = 0xC8; // float32
                constexpr std::ptrdiff_t m_verticalSpeed = 0xCC; // float32
                constexpr std::ptrdiff_t m_buttonFlags = 0xD0; // uint64
                constexpr std::ptrdiff_t m_jumpTimestamp = 0xD8; // float32
                constexpr std::ptrdiff_t m_viewForward = 0xDC; // Vector
                constexpr std::ptrdiff_t m_postureStackIndex = 0xF8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_SetAnimGraphParam {
                constexpr std::ptrdiff_t m_ParamName = 0x48; // CUtlString
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CDynamicProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xD70; // CAttributeContainer
                constexpr std::ptrdiff_t m_updateTimer = 0x1068; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckAnchor = 0x1080; // Vector
                constexpr std::ptrdiff_t m_stuckTimer = 0x1090; // CountdownTimer
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0x10A8; // CountdownTimer
                constexpr std::ptrdiff_t m_isOnGround = 0x10C0; // bool
                constexpr std::ptrdiff_t m_vFallVelocity = 0x10C4; // Vector
                constexpr std::ptrdiff_t m_desiredActivity = 0x10D0; // ChickenActivity
                constexpr std::ptrdiff_t m_currentActivity = 0x10D4; // ChickenActivity
                constexpr std::ptrdiff_t m_activityTimer = 0x10D8; // CountdownTimer
                constexpr std::ptrdiff_t m_turnRate = 0x10F0; // float32
                constexpr std::ptrdiff_t m_fleeFrom = 0x10F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0x10F8; // CountdownTimer
                constexpr std::ptrdiff_t m_startleTimer = 0x1110; // CountdownTimer
                constexpr std::ptrdiff_t m_vocalizeTimer = 0x1128; // CountdownTimer
                constexpr std::ptrdiff_t m_flWhenZombified = 0x1140; // GameTime_t
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1144; // bool
                constexpr std::ptrdiff_t m_leader = 0x1148; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1160; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0x1178; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0x1180; // CountdownTimer
                constexpr std::ptrdiff_t m_flLastJumpTime = 0x1198; // float32
                constexpr std::ptrdiff_t m_bInJump = 0x119C; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x31A8; // CountdownTimer
                constexpr std::ptrdiff_t m_vecPathGoal = 0x3240; // Vector
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x324C; // GameTime_t
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x3250; // CountdownTimer
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3270; // CountdownTimer
            }
            // Parent: CPhysicsProp
            // Field count: 5
            namespace CPhysicsPropRespawnable {
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xE00; // VectorWS
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xE0C; // QAngle
                constexpr std::ptrdiff_t m_vOriginalMins = 0xE18; // Vector
                constexpr std::ptrdiff_t m_vOriginalMaxs = 0xE24; // Vector
                constexpr std::ptrdiff_t m_flRespawnDuration = 0xE30; // float32
            }
            // Parent: CBeam
            // Field count: 19
            namespace CEnvBeam {
                constexpr std::ptrdiff_t m_active = 0x878; // int32
                constexpr std::ptrdiff_t m_spriteTexture = 0x880; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszStartEntity = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEndEntity = 0x890; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_life = 0x898; // float32
                constexpr std::ptrdiff_t m_boltWidth = 0x89C; // float32
                constexpr std::ptrdiff_t m_noiseAmplitude = 0x8A0; // float32
                constexpr std::ptrdiff_t m_speed = 0x8A4; // int32
                constexpr std::ptrdiff_t m_restrike = 0x8A8; // float32
                constexpr std::ptrdiff_t m_iszSpriteName = 0x8B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_frameStart = 0x8B8; // int32
                constexpr std::ptrdiff_t m_vEndPointWorld = 0x8BC; // VectorWS
                constexpr std::ptrdiff_t m_vEndPointRelative = 0x8C8; // Vector
                constexpr std::ptrdiff_t m_radius = 0x8D4; // float32
                constexpr std::ptrdiff_t m_TouchType = 0x8D8; // Touch_t
                constexpr std::ptrdiff_t m_iFilterName = 0x8E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x8E8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszDecal = 0x8F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x8F8; // CEntityIOOutput
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightSpotEntity {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerCallback {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x6A8; // CUtlVector<SoundOpvarTraceResult_t>
                constexpr std::ptrdiff_t m_doorwayPairs = 0x6C0; // CUtlVector<AutoRoomDoorwayPairs_t>
                constexpr std::ptrdiff_t m_flSize = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flSizeSqr = 0x6E0; // float32
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
            namespace CPulseCell_Outflow_ListenForEntityOutput {
                constexpr std::ptrdiff_t m_OnFired = 0x48; // SignatureOutflow_Resume
                constexpr std::ptrdiff_t m_OnCanceled = 0x90; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_strEntityOutput = 0xD8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_strEntityOutputParam = 0xE0; // CUtlString
                constexpr std::ptrdiff_t m_bListenUntilCanceled = 0xE8; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // CNetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 4
            namespace CTriggerTeleport {
                constexpr std::ptrdiff_t m_iLandmark = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x9B0; // bool
                constexpr std::ptrdiff_t m_bMirrorPlayer = 0x9B1; // bool
                constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x9B2; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWall {
                constexpr std::ptrdiff_t m_nState = 0x7D8; // int32
            }
            // Parent: None
            // Field count: 12
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
            namespace CCSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x4F0; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x4F4; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x4F8; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x500; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x508; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x510; // CEconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x7B8; // CEconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xA60; // CEconItemView
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CGameRulesProxy {
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CInfoLadderDismount {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs {
            }
            // Parent: CEnvCombinedLightProbeVolume
            // Field count: 0
            namespace CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponP250 {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_nLastHitDamageLevel = 0x64; // int32
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
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xC8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x188; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x18C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x190; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x510; // CBaseAnimGraphController
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 5
            namespace CFogVolume {
                constexpr std::ptrdiff_t m_fogName = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_postProcessName = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_colorCorrectionName = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0x7F8; // bool
                constexpr std::ptrdiff_t m_bInFogVolumesList = 0x7F9; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x7D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStarted = 0x800; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedStart = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_localRotationVector = 0x850; // RotationVector
                constexpr std::ptrdiff_t m_flFanFriction = 0x85C; // float32
                constexpr std::ptrdiff_t m_flAttenuation = 0x860; // float32
                constexpr std::ptrdiff_t m_flVolume = 0x864; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x868; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x86C; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x870; // float32
                constexpr std::ptrdiff_t m_NoiseRunning = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bReversed = 0x880; // bool
                constexpr std::ptrdiff_t m_bAccelDecel = 0x881; // bool
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x898; // QAngle
                constexpr std::ptrdiff_t m_angStart = 0x8A4; // QAngle
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x8B0; // bool
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x8B4; // Vector
                constexpr std::ptrdiff_t m_vecClientAngles = 0x8C0; // QAngle
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CTimerEntity {
                constexpr std::ptrdiff_t m_OnTimer = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimerHigh = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimerLow = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iDisabled = 0x568; // int32
                constexpr std::ptrdiff_t m_flInitialDelay = 0x56C; // float32
                constexpr std::ptrdiff_t m_flRefireTime = 0x570; // float32
                constexpr std::ptrdiff_t m_bUpDownState = 0x574; // bool
                constexpr std::ptrdiff_t m_iUseRandomTime = 0x578; // int32
                constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x57C; // bool
                constexpr std::ptrdiff_t m_flLowerRandomBound = 0x580; // float32
                constexpr std::ptrdiff_t m_flUpperRandomBound = 0x584; // float32
                constexpr std::ptrdiff_t m_flRemainingTime = 0x588; // float32
                constexpr std::ptrdiff_t m_bPaused = 0x58C; // bool
            }
            // Parent: None
            // Field count: 14
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
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x23C; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x240; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x244; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x248; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x24C; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x24D; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x24E; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x250; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x25C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x260; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x270; // int32
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x274; // Vector
            }
            // Parent: CTriggerMultiple
            // Field count: 0
            namespace CTriggerOnce {
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
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
                constexpr std::ptrdiff_t m_iEnemy2Ks = 0x7C; // int32
                constexpr std::ptrdiff_t m_iUtility_Count = 0x80; // int32
                constexpr std::ptrdiff_t m_iUtility_Successes = 0x84; // int32
                constexpr std::ptrdiff_t m_iUtility_Enemies = 0x88; // int32
                constexpr std::ptrdiff_t m_iFlash_Count = 0x8C; // int32
                constexpr std::ptrdiff_t m_iFlash_Successes = 0x90; // int32
                constexpr std::ptrdiff_t m_flHealthPointsRemovedTotal = 0x94; // float32
                constexpr std::ptrdiff_t m_flHealthPointsDealtTotal = 0x98; // float32
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9C; // int32
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xA0; // int32
                constexpr std::ptrdiff_t m_i1v1Count = 0xA4; // int32
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA8; // int32
                constexpr std::ptrdiff_t m_i1v2Count = 0xAC; // int32
                constexpr std::ptrdiff_t m_i1v2Wins = 0xB0; // int32
                constexpr std::ptrdiff_t m_iEntryCount = 0xB4; // int32
                constexpr std::ptrdiff_t m_iEntryWins = 0xB8; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            namespace CGunTarget {
                constexpr std::ptrdiff_t m_on = 0x858; // bool
                constexpr std::ptrdiff_t m_hTargetEnt = 0x85C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnDeath = 0x860; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Field count: 0
            namespace CSoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CFilterMultipleAPI {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CWorld {
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
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x125; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x1D0; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x220; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x26A; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x26B; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x26C; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
                constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle<CPointCamera>
                constexpr std::ptrdiff_t m_OverlaidStart = 0xC; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_OverlaidEnd = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponGalilAR {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x548; // float32
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0x7F0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: CItem
            // Field count: 32
            namespace CItemGeneric {
                constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xB84; // bool
                constexpr std::ptrdiff_t m_bHasPickupRadius = 0xB85; // bool
                constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xB88; // float32
                constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xB8C; // float32
                constexpr std::ptrdiff_t m_flLastPickupCheck = 0xB90; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xB94; // bool
                constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xB95; // bool
                constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xB98; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xBA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xBA8; // bool
                constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xBB0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xBB8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xBC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xBC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xBD0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xBD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xBE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pPickupFilterName = 0xBE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPickupFilter = 0xBF0; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnPickup = 0xBF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimeout = 0xC20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xC48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerTouch = 0xC70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xC98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xCC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPickupRadius = 0xCC8; // float32
                constexpr std::ptrdiff_t m_flTriggerRadius = 0xCCC; // float32
                constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xCD0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xCD8; // bool
                constexpr std::ptrdiff_t m_glowColor = 0xCD9; // Color
                constexpr std::ptrdiff_t m_bUseable = 0xCDD; // bool
                constexpr std::ptrdiff_t m_hTriggerHelper = 0xCE0; // CHandle<CItemGenericTriggerHelper>
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
            namespace CPointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4F1; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x4F4; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x510; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x514; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x518; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x51C; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x520; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_iszOutputEntityName = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x540; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOutputEntities = 0x548; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x560; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x564; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x568; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x56C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x570; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x574; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x578; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x57C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x580; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x581; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x584; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x588; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x58C; // Vector
                constexpr std::ptrdiff_t m_hUsingPlayer = 0x598; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flCustomOutputValue = 0x59C; // float32
                constexpr std::ptrdiff_t m_iszSoundEngage = 0x5A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundDisengage = 0x5A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x5B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x5B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x5C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Position = 0x5E0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PositionDelta = 0x608; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnReachedValueZero = 0x630; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueOne = 0x658; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x680; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEngage = 0x6A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDisengage = 0x6D0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            namespace CBtNodeConditionInactive {
                constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78; // float32
                constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7C; // float32
                constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80; // CountdownTimer
            }
            // Parent: CBasePlatTrain
            // Field count: 6
            namespace CFuncTrain {
                constexpr std::ptrdiff_t m_hCurrentTarget = 0x880; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_activated = 0x884; // bool
                constexpr std::ptrdiff_t m_hEnemy = 0x888; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flBlockDamage = 0x88C; // float32
                constexpr std::ptrdiff_t m_flNextBlockTime = 0x890; // GameTime_t
                constexpr std::ptrdiff_t m_iszLastTarget = 0x898; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CAI_ChangeHintGroup {
                constexpr std::ptrdiff_t m_iSearchType = 0x4F0; // int32
                constexpr std::ptrdiff_t m_strSearchName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strNewHintGroup = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRadius = 0x508; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CBaseEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x528; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x529; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x52A; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x52C; // uint32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x548; // int32
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
            namespace CPointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x4F0; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x4F4; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x4F8; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x4F9; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x500; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x504; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x508; // float32
                constexpr std::ptrdiff_t m_bActive = 0x50C; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x50D; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x510; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x514; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x518; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x51C; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x520; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x524; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x525; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x526; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x528; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x52C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x530; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x534; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x538; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x53C; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x540; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x544; // bool
                constexpr std::ptrdiff_t m_pNext = 0x548; // CPointCamera*
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
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
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
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
            namespace CEntityDissolve {
                constexpr std::ptrdiff_t m_flFadeInStart = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x7EC; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0x7F4; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x7F8; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0x804; // uint32
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
            namespace CCSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xC8; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC9; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xD0; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xD4; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xD5; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xD8; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xDC; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE0; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE4; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xE8; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xE9; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0xEC; // int32
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
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x94E; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x950; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA18; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA28; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA2C; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0xA30; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0xA31; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA34; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA38; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA3C; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA3D; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA40; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAB8; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB30; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBA8; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC28; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCA8; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCB4; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xCC0; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xCE0; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xCE8; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD10; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD38; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD3C; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD40; // int32
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xD60; // bool
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xD64; // GameTime_t
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xD68; // GameTime_t
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xD6C; // bool
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xD70; // int32
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xD74; // int32
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xD78; // bool
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xD79; // bool
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xD7C; // int32
                constexpr std::ptrdiff_t m_iNumCT = 0xD80; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xD84; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xD88; // int32
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xD90; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDA8; // int32
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDAC; // bool
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDAD; // bool
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDAE; // bool
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDAF; // bool
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDB0; // bool
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDB8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xDD4; // bool
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xDD8; // uint32
                constexpr std::ptrdiff_t m_fAvgPlayerRank = 0xDDC; // float32
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xDE0; // char*
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xDE8; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xDEC; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xDF0; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xDF4; // uint32
                constexpr std::ptrdiff_t m_nCTsAliveAtFreezetimeEnd = 0xE00; // int32
                constexpr std::ptrdiff_t m_nTerroristsAliveAtFreezetimeEnd = 0xE04; // int32
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE08; // bool
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE09; // bool
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE40; // int32
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE44; // float32
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xE60; // int32
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xE64; // float32
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xE68; // float32
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xE6C; // int32
                constexpr std::ptrdiff_t m_iAccountCT = 0xE70; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xE74; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xE78; // int32
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xE7C; // int32
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xE80; // int32
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xE84; // int32
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xE88; // float32
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xE8C; // bool
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xE90; // float32
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xE98; // int32
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xE9C; // int32
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEA0; // float32
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEA4; // bool
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEA5; // bool
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEA6; // bool
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEA7; // bool
                constexpr std::ptrdiff_t m_firstKillTime = 0xEAC; // float32
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEB4; // float32
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xED0; // bool
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xED1; // bool
                constexpr std::ptrdiff_t m_bVoteCalled = 0xEE0; // bool
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xEE1; // bool
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xEE4; // float32
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xEE8; // bool
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xEEC; // int32
                constexpr std::ptrdiff_t m_bTargetBombed = 0xEF0; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xEF1; // bool
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xEF2; // bool
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF40; // Vector
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF50; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF80; // bool
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF84; // int32
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xF88; // float32
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xF8C; // int32
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xF90; // float32
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xF98; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFC8; // bool
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFCC; // float32
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1008; // bool
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1009; // bool
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x100C; // GameTime_t
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1010; // float32
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x1014; // GameTime_t
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1018; // float32
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x101C; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x1068; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x106C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x106D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1088; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x1090; // KeyValues3
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1128; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_RetakeRules = 0x1130; // CRetakeGameRules
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x12E0; // CUtlVector<int32>[4]
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1340; // bool[4]
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x1368; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x136C; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x1370; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x1374; // bool
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x1378; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x137C; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1380; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x1384; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1388; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x138C; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1390; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1398; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x139C; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x13A0; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x13A4; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x13A8; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x13B0; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x13B4; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x13B8; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x13BC; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x13C0; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x13C4; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x53D0; // float64
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
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
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xEA0; // bool
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xEB0; // bool
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xEB1; // bool
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0xEB2; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0xEB4; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0xEBC; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0xEBD; // bool
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xEE8; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xF08; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xF10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0xF38; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xF3C; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xF40; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xF4C; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xF50; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xF54; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xF58; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xF5C; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xF60; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0xF64; // bool
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xF68; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xF6C; // float32
                constexpr std::ptrdiff_t m_bInReload = 0xF70; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xF74; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xF78; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0xF79; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xF7C; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xF80; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xF84; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xF88; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xF8C; // float32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xFA0; // bool
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xFA1; // bool
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xFA4; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xFA8; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0xFB0; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0xFB4; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0xFB8; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0xFBC; // bool
                constexpr std::ptrdiff_t m_donated = 0xFDC; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0xFE0; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xFE4; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xFE5; // bool
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xFE8; // int32
                constexpr std::ptrdiff_t m_IronSightController = 0xFF0; // CIronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1008; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x100C; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1010; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1020; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x988; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x98C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicLineToEntity {
                constexpr std::ptrdiff_t m_Line = 0x4F0; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_SourceName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_StartEntity = 0x520; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_EndEntity = 0x524; // CHandle<CBaseEntity>
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace CSoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x1F0; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x21C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x220; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x290; // WeaponPurchaseTracker_t
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CDecoyGrenade {
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
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xE8; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x160; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x201; // char[161]
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
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x508; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x514; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x520; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x52C; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x538; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSoundEventParameter {
                constexpr std::ptrdiff_t m_iszParamName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flFloatValue = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_SubGraph = 0xC0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
            }
            // Parent: CItem
            // Field count: 0
            namespace CItemKevlar {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_matPanelTransform = 0x7D8; // matrix3x4_t
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x808; // matrix3x4_t
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x838; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_PanelSize = 0x850; // Vector2D
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x858; // GameTime_t
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0x85C; // GameTime_t
                constexpr std::ptrdiff_t m_flInitAtTime = 0x860; // GameTime_t
                constexpr std::ptrdiff_t m_flGlassThickness = 0x864; // float32
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x868; // float32
                constexpr std::ptrdiff_t m_bBreakSilent = 0x86C; // bool
                constexpr std::ptrdiff_t m_bBreakShardless = 0x86D; // bool
                constexpr std::ptrdiff_t m_bBroken = 0x86E; // bool
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x86F; // bool
                constexpr std::ptrdiff_t m_bGlassInFrame = 0x870; // bool
                constexpr std::ptrdiff_t m_bStartBroken = 0x871; // bool
                constexpr std::ptrdiff_t m_iInitialDamageType = 0x872; // uint8
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x890; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x898; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x8B0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x8C8; // CUtlVector<Vector4D>
                constexpr std::ptrdiff_t m_OnBroken = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iSurfaceType = 0x908; // uint8
                constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x910; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CNavWalkable {
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
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x248; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x260; // int32
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x264; // GameTick_t
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x268; // bool
                constexpr std::ptrdiff_t m_isSteadyState = 0x278; // CTypedBitVec<64>
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x280; // float32
                constexpr std::ptrdiff_t m_ResponseContexts = 0x290; // CUtlVector<ResponseContext_t>
                constexpr std::ptrdiff_t m_iszResponseContext = 0x2A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iHealth = 0x2D0; // int32
                constexpr std::ptrdiff_t m_iMaxHealth = 0x2D4; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x2D8; // uint8
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2DC; // float32
                constexpr std::ptrdiff_t m_bTakesDamage = 0x2E0; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2E8; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x2F0; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_MoveCollide = 0x2F2; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x2F3; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x2F4; // MoveType_t
                constexpr std::ptrdiff_t m_nWaterTouch = 0x2F5; // uint8
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x2F6; // uint8
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2F7; // bool
                constexpr std::ptrdiff_t m_target = 0x2F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hDamageFilter = 0x300; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x308; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x310; // float32
                constexpr std::ptrdiff_t m_nSubclassID = 0x314; // CUtlStringToken
                constexpr std::ptrdiff_t m_flAnimTime = 0x320; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x324; // float32
                constexpr std::ptrdiff_t m_flCreateTime = 0x328; // GameTime_t
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x32C; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x32D; // uint8
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x330; // Vector
                constexpr std::ptrdiff_t m_iTeamNum = 0x33C; // uint8
                constexpr std::ptrdiff_t m_iGlobalname = 0x340; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iSentToClients = 0x348; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x34C; // float32
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x350; // CUtlString
                constexpr std::ptrdiff_t m_spawnflags = 0x358; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x35C; // GameTick_t
                constexpr std::ptrdiff_t m_nSimulationTick = 0x360; // int32
                constexpr std::ptrdiff_t m_OnKilled = 0x368; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fFlags = 0x390; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x394; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x3A0; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3D0; // Vector
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x3DC; // int32
                constexpr std::ptrdiff_t m_pCollision = 0x3E0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_hEffectEntity = 0x3E8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x3EC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_fEffects = 0x3F0; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x3F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x3F8; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x3FC; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x400; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x404; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x408; // float32
                constexpr std::ptrdiff_t m_flWaterLevel = 0x40C; // float32
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x410; // bool
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x411; // bool
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x414; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x418; // bool
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x419; // bool
                constexpr std::ptrdiff_t m_nWaterType = 0x41A; // uint8
                constexpr std::ptrdiff_t m_iEFlags = 0x41C; // int32
                constexpr std::ptrdiff_t m_OnUser1 = 0x420; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser2 = 0x448; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser3 = 0x470; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser4 = 0x498; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x4C0; // int32
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x4C4; // GameTime_t
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x4C8; // QAngle
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x4D4; // bool
                constexpr std::ptrdiff_t m_bLagCompensate = 0x4D5; // bool
                constexpr std::ptrdiff_t m_pBlocker = 0x4D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLocalTime = 0x4DC; // float32
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4E0; // float32
                constexpr std::ptrdiff_t m_nBloodType = 0x4E4; // BloodType
                constexpr std::ptrdiff_t m_pPulseGraphInstance = 0x4E8; // CPulseGraphInstance_ServerEntity*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 4
            namespace CMarkupVolumeWithRef {
                constexpr std::ptrdiff_t m_bUseRef = 0x820; // bool
                constexpr std::ptrdiff_t m_vRefPosEntitySpace = 0x824; // Vector
                constexpr std::ptrdiff_t m_vRefPosWorldSpace = 0x830; // VectorWS
                constexpr std::ptrdiff_t m_flRefDot = 0x83C; // float32
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
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
            namespace CEnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x7E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7E8; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x7E9; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x7ED; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7F4; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x7F8; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x7FC; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x800; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x804; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x808; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x80C; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoSpawnGroupLandmark {
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CPointAngleSensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_nLookAtName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetEntity = 0x500; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hLookAtEntity = 0x504; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDuration = 0x508; // float32
                constexpr std::ptrdiff_t m_flDotTolerance = 0x50C; // float32
                constexpr std::ptrdiff_t m_flFacingTime = 0x510; // GameTime_t
                constexpr std::ptrdiff_t m_bFired = 0x514; // bool
                constexpr std::ptrdiff_t m_OnFacingLookat = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_TargetDir = 0x568; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_FacingPercentage = 0x590; // CEntityOutputTemplate<float32>
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
            namespace CEnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4F0; // CEnvWindShared
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x640; // float32
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x644; // float32
                constexpr std::ptrdiff_t m_fTurbulence = 0x648; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x64C; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x650; // float32
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x654; // int32
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x658; // int32
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x65C; // int32
                constexpr std::ptrdiff_t m_bIsMaster = 0x660; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x661; // bool
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
            // Parent: CBeam
            // Field count: 5
            namespace CEnvLaser {
                constexpr std::ptrdiff_t m_iszLaserTarget = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pSprite = 0x880; // CSprite*
                constexpr std::ptrdiff_t m_iszSpriteName = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_firePosition = 0x890; // Vector
                constexpr std::ptrdiff_t m_flStartFrame = 0x89C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CSoundOpvarSetEntity {
                constexpr std::ptrdiff_t m_iszStackName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nOpvarType = 0x520; // int32
                constexpr std::ptrdiff_t m_nOpvarIndex = 0x524; // int32
                constexpr std::ptrdiff_t m_flOpvarValue = 0x528; // float32
                constexpr std::ptrdiff_t m_OpvarValueString = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bSetOnSpawn = 0x538; // bool
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CEnvBeverage {
                constexpr std::ptrdiff_t m_CanInDispenser = 0x4F0; // bool
                constexpr std::ptrdiff_t m_nBeverageType = 0x4F4; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CPhysMotor {
                constexpr std::ptrdiff_t m_nameAttach = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAnchor = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hAttachedObject = 0x500; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAnchorObject = 0x504; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_spinUp = 0x508; // float32
                constexpr std::ptrdiff_t m_spinDown = 0x50C; // float32
                constexpr std::ptrdiff_t m_flMotorFriction = 0x510; // float32
                constexpr std::ptrdiff_t m_additionalAcceleration = 0x514; // float32
                constexpr std::ptrdiff_t m_angularAcceleration = 0x518; // float32
                constexpr std::ptrdiff_t m_flTorqueScale = 0x51C; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x520; // float32
                constexpr std::ptrdiff_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0x524; // float32
                constexpr std::ptrdiff_t m_motor = 0x538; // CMotorController
            }
            // Parent: CPhysConstraint
            // Field count: 14
            namespace CSplineConstraint {
                constexpr std::ptrdiff_t m_vAnchorOffsetRestore = 0x5B0; // Vector
                constexpr std::ptrdiff_t m_hSplineEntity = 0x5BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bEnableLateralConstraint = 0x5C8; // bool
                constexpr std::ptrdiff_t m_bEnableVerticalConstraint = 0x5C9; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x5CA; // bool
                constexpr std::ptrdiff_t m_bEnableLimit = 0x5CB; // bool
                constexpr std::ptrdiff_t m_bFireEventsOnPath = 0x5CC; // bool
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x5D0; // float32
                constexpr std::ptrdiff_t m_flLinarDampingRatio = 0x5D4; // float32
                constexpr std::ptrdiff_t m_flJointFriction = 0x5D8; // float32
                constexpr std::ptrdiff_t m_flTransitionTime = 0x5DC; // float32
                constexpr std::ptrdiff_t m_vPreSolveAnchorPos = 0x600; // VectorWS
                constexpr std::ptrdiff_t m_StartTransitionTime = 0x60C; // GameTime_t
                constexpr std::ptrdiff_t m_vTangentSpaceAnchorAtTransitionStart = 0x610; // Vector
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCompare {
                constexpr std::ptrdiff_t m_flInValue = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flCompareValue = 0x4F4; // float32
                constexpr std::ptrdiff_t m_OnLessThan = 0x4F8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnEqualTo = 0x520; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnNotEqualTo = 0x548; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x570; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
            }
            // Parent: CPlayerControllerComponent
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
                constexpr std::ptrdiff_t m_iMoneyEarnedForNextRound = 0x44; // int32
                constexpr std::ptrdiff_t m_iAccount = 0x48; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x548; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CPointGamestatsCounter {
                constexpr std::ptrdiff_t m_strStatisticName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0x4F8; // bool
            }
            // Parent: CBaseDoor
            // Field count: 1
            namespace CRotDoor {
                constexpr std::ptrdiff_t m_bSolidBsp = 0xA68; // bool
            }
            // Parent: CPathSimple
            // Field count: 3
            namespace CPathMover {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x600; // CUtlVector<CHandle<CMoverPathNode>>
                constexpr std::ptrdiff_t m_vecMovers = 0x618; // CUtlVector<CHandle<CFuncMover>>
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x630; // CTransform
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncVPhysicsClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x7D8; // bool
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
            namespace CEnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4F0; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x4F4; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x500; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x50C; // bool
                constexpr std::ptrdiff_t m_nShape = 0x510; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x514; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x518; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x51C; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x520; // float32
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CFlashbangProjectile {
                constexpr std::ptrdiff_t m_flTimeToDetonate = 0xC40; // float32
                constexpr std::ptrdiff_t m_numOpponentsHit = 0xC44; // uint8
                constexpr std::ptrdiff_t m_numTeammatesHit = 0xC45; // uint8
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerMultiple {
                constexpr std::ptrdiff_t m_OnTrigger = 0x9A8; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysBallSocket {
                constexpr std::ptrdiff_t m_flJointFriction = 0x560; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x564; // bool
                constexpr std::ptrdiff_t m_flSwingLimit = 0x568; // float32
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x56C; // bool
                constexpr std::ptrdiff_t m_flMinTwistAngle = 0x570; // float32
                constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x574; // float32
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CDebugHistory {
                constexpr std::ptrdiff_t m_nNpcEvents = 0x3E8530; // int32
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
            namespace CSoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_hSource = 0x4F4; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vLastPosition = 0x568; // Vector
                constexpr std::ptrdiff_t m_iszStackName = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x588; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x590; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x594; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            namespace CWeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x11F0; // bool
            }
            // Parent: CTriggerPush
            // Field count: 1
            namespace CScriptTriggerPush {
                constexpr std::ptrdiff_t m_vExtent = 0x9E0; // Vector
            }
            // Parent: CModelPointEntity
            // Field count: 3
            namespace CRevertSaved {
                constexpr std::ptrdiff_t m_loadTime = 0x7D8; // float32
                constexpr std::ptrdiff_t m_Duration = 0x7DC; // float32
                constexpr std::ptrdiff_t m_HoldTime = 0x7E0; // float32
            }
            // Parent: CTriggerHurt
            // Field count: 1
            namespace CScriptTriggerHurt {
                constexpr std::ptrdiff_t m_vExtent = 0xA48; // Vector
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
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
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xC68; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xC6C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0xC70; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xC74; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xC80; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xC90; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0xCA8; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0xCAC; // int32
                constexpr std::ptrdiff_t m_flLastBounce = 0xCB0; // GameTime_t
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xCB4; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2F38; // bool
                constexpr std::ptrdiff_t m_bDidGroundScorch = 0x2F39; // bool
            }
            // Parent: CRuleEntity
            // Field count: 1
            namespace CRulePointEntity {
                constexpr std::ptrdiff_t m_Score = 0x7E0; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
            }
            // Parent: CBaseToggle
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x868; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x874; // Vector
                constexpr std::ptrdiff_t m_ls = 0x880; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0x8A0; // bool
                constexpr std::ptrdiff_t m_bDoorGroup = 0x8A1; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x8A2; // bool
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x8A3; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x8A4; // bool
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x8A8; // FuncDoorSpawnPos_t
                constexpr std::ptrdiff_t m_flBlockDamage = 0x8AC; // float32
                constexpr std::ptrdiff_t m_NoiseMoving = 0x8B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x8B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x8C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ChainTarget = 0x8D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x8D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x900; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x928; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x950; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x978; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x9A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0x9C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0x9F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0xA18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0xA40; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xA60; // bool
                constexpr std::ptrdiff_t m_isChaining = 0xA61; // bool
                constexpr std::ptrdiff_t m_bIsUsable = 0xA62; // bool
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CServerOnlyPointEntity {
            }
            // Parent: CItem
            // Field count: 2
            namespace CItemDefuser {
                constexpr std::ptrdiff_t m_entitySpottedState = 0xB70; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xB88; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CItemGenericTriggerHelper {
                constexpr std::ptrdiff_t m_hParentItem = 0x7D8; // CHandle<CItemGeneric>
            }
            // Parent: CRagdollProp
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace CRagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xBE0; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xBE4; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xBE8; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xBF4; // Vector
                constexpr std::ptrdiff_t m_bShouldDetach = 0xC00; // bool
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xC10; // bool
            }
            // Parent: CItem
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace CItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0xB70; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0xB74; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBasePlatTrain
            // Field count: 1
            namespace CFuncPlat {
                constexpr std::ptrdiff_t m_sNoise = 0x880; // CUtlSymbolLarge
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
            namespace CBarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x7D8; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x7DC; // int32
                constexpr std::ptrdiff_t m_Color = 0x7E0; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7EC; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0x7F0; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x7F4; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x7F8; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x7FC; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x800; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x804; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x808; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0x810; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x818; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x820; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x838; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x850; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x868; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x928; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x930; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x934; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x938; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x93C; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x940; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x944; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x950; // float32
                constexpr std::ptrdiff_t m_vShear = 0x954; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x960; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x964; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0x970; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x974; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x978; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x97C; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x97D; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x980; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x984; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x988; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x98C; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x998; // float32
                constexpr std::ptrdiff_t m_nFog = 0x99C; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x9A0; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x9A4; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x9A8; // float32
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x9AC; // bool
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x9B0; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x9B4; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x9B8; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x9BC; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x9C0; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x9C4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x9D0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x9DC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x9E8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x9F4; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0xA00; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0xA04; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0xA10; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0xA1C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0xA28; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0xA34; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0xA40; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0xA4C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0xA58; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0xA64; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0xA70; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0xA7C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0xA88; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0xA94; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0xAA0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0xAAC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xAB8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xAC4; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xAD0; // Vector
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0xADC; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0xAE0; // CNetworkUtlVectorBase<uint16>
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInstructorEventEntity {
                constexpr std::ptrdiff_t m_iszName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetPlayer = 0x500; // CHandle<CBasePlayerPawn>
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
            namespace CPointCommentaryNode {
                constexpr std::ptrdiff_t m_iszPreCommands = 0xA90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostCommands = 0xA98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xAA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszViewTarget = 0xAA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewTarget = 0xAB0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0xAB4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszViewPosition = 0xAB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewPosition = 0xAC0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewPositionMover = 0xAC4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventMovement = 0xAC8; // bool
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0xAC9; // bool
                constexpr std::ptrdiff_t m_bUnstoppable = 0xACA; // bool
                constexpr std::ptrdiff_t m_flFinishedTime = 0xACC; // GameTime_t
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0xAD0; // Vector
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0xADC; // QAngle
                constexpr std::ptrdiff_t m_vecFinishAngles = 0xAE8; // QAngle
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0xAF4; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0xAF5; // bool
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0xAF8; // VectorWS
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0xB04; // GameTime_t
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0xB08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xB30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActive = 0xB58; // bool
                constexpr std::ptrdiff_t m_flStartTime = 0xB5C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xB60; // float32
                constexpr std::ptrdiff_t m_iszTitle = 0xB68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xB70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xB78; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xB7C; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xB80; // bool
            }
            // Parent: CRotButton
            // Field count: 14
            namespace CMomentaryRotButton {
                constexpr std::ptrdiff_t m_Position = 0x9A8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnUnpressed = 0x9D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x9F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xA20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedPosition = 0xA48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_lastUsed = 0xA70; // int32
                constexpr std::ptrdiff_t m_start = 0xA74; // QAngle
                constexpr std::ptrdiff_t m_end = 0xA80; // QAngle
                constexpr std::ptrdiff_t m_IdealYaw = 0xA8C; // float32
                constexpr std::ptrdiff_t m_sNoise = 0xA90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUpdateTarget = 0xA98; // bool
                constexpr std::ptrdiff_t m_direction = 0xA9C; // int32
                constexpr std::ptrdiff_t m_returnSpeed = 0xAA0; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0xAA4; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CSceneListManager {
                constexpr std::ptrdiff_t m_hListManagers = 0x4F0; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszScenes = 0x508; // CUtlSymbolLarge[16]
                constexpr std::ptrdiff_t m_hScenes = 0x588; // CHandle<CBaseEntity>[16]
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CEnvTilt {
                constexpr std::ptrdiff_t m_Duration = 0x4F0; // float32
                constexpr std::ptrdiff_t m_Radius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_TiltTime = 0x4F8; // float32
                constexpr std::ptrdiff_t m_stopTime = 0x4FC; // GameTime_t
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
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
            namespace CPhysicsProp {
                constexpr std::ptrdiff_t m_MotionEnabled = 0xC60; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwake = 0xCB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAsleep = 0xCD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xD00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xD28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xD50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xD78; // bool
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xD79; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xD7A; // bool
                constexpr std::ptrdiff_t m_massScale = 0xD7C; // float32
                constexpr std::ptrdiff_t m_buoyancyScale = 0xD80; // float32
                constexpr std::ptrdiff_t m_damageType = 0xD84; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xD88; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xD8C; // float32
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xD90; // bool
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xD91; // bool
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xD92; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xD93; // bool
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xD94; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xD95; // bool
                constexpr std::ptrdiff_t m_flLastBurn = 0xD98; // GameTime_t
                constexpr std::ptrdiff_t m_nDynamicContinuousContactBehavior = 0xD9C; // DynamicContinuousContactBehavior_t
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xDA0; // GameTime_t
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xDA4; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xDA8; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xDAC; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xDB0; // Color
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xDB4; // bool
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xDB5; // bool
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xDBF; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xDC0; // bool
                constexpr std::ptrdiff_t m_CrateType = 0xDC4; // CPhysicsProp::CrateType_t
                constexpr std::ptrdiff_t m_strItemClass = 0xDC8; // CUtlSymbolLarge[4]
                constexpr std::ptrdiff_t m_nItemCount = 0xDE8; // int32[4]
                constexpr std::ptrdiff_t m_bRemovableForAmmoBalancing = 0xDF8; // bool
                constexpr std::ptrdiff_t m_bAwake = 0xDF9; // bool
                constexpr std::ptrdiff_t m_bAttachedToReferenceFrame = 0xDFA; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CFuncNavObstruction {
                constexpr std::ptrdiff_t m_bDisabled = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bUseAsyncObstacleUpdate = 0x7F1; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 12
            namespace CPhysWheelConstraint {
                constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x560; // float32
                constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x564; // float32
                constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x568; // float32
                constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x56C; // bool
                constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x570; // float32
                constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x574; // float32
                constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x578; // bool
                constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x57C; // float32
                constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x580; // float32
                constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x584; // float32
                constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x588; // float32
                constexpr std::ptrdiff_t m_hSteeringMimicsEntity = 0x58C; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x4F0; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x4F4; // CHandle<CSkyCamera>
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerToggleSave {
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
            namespace CColorCorrection {
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x500; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x504; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxWeight = 0x508; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x50C; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x50D; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x50E; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x50F; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x510; // bool
                constexpr std::ptrdiff_t m_MinFalloff = 0x514; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x518; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x51C; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x520; // char[512]
                constexpr std::ptrdiff_t m_lookupFilename = 0x720; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 14
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x4F0; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x4F8; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4FC; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4FD; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x500; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x504; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x508; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x509; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x50C; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x510; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x514; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x518; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x51C; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 35
            namespace CFuncRotator {
                constexpr std::ptrdiff_t m_hRotatorTarget = 0x7D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bIsRotating = 0x7DC; // bool
                constexpr std::ptrdiff_t m_bIsReversing = 0x7DD; // bool
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flDistanceAlongArcTraveled = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flTimeToWaitOscillate = 0x7EC; // float32
                constexpr std::ptrdiff_t m_flTimeRotationStart = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_qLSPrevChange = 0x800; // Quaternion
                constexpr std::ptrdiff_t m_qWSPrev = 0x810; // Quaternion
                constexpr std::ptrdiff_t m_qWSInit = 0x820; // Quaternion
                constexpr std::ptrdiff_t m_qLSInit = 0x830; // Quaternion
                constexpr std::ptrdiff_t m_qLSOrientation = 0x840; // Quaternion
                constexpr std::ptrdiff_t m_OnRotationStarted = 0x850; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRotationCompleted = 0x878; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillate = 0x8A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateStartArrive = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateStartDepart = 0x8F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateEndArrive = 0x918; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateEndDepart = 0x940; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bOscillateDepart = 0x968; // bool
                constexpr std::ptrdiff_t m_nOscillateCount = 0x96C; // int32
                constexpr std::ptrdiff_t m_eRotateType = 0x970; // CFuncRotator::Rotate_t
                constexpr std::ptrdiff_t m_ePrevRotateType = 0x974; // CFuncRotator::Rotate_t
                constexpr std::ptrdiff_t m_bHasTargetOverride = 0x978; // bool
                constexpr std::ptrdiff_t m_qOrientationOverride = 0x980; // Quaternion
                constexpr std::ptrdiff_t m_eSpaceOverride = 0x990; // RotatorTargetSpace_t
                constexpr std::ptrdiff_t m_qAngularVelocity = 0x994; // QAngle
                constexpr std::ptrdiff_t m_vLookAtForcedUp = 0x9A0; // Vector
                constexpr std::ptrdiff_t m_strRotatorTarget = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bRecordHistory = 0x9B8; // bool
                constexpr std::ptrdiff_t m_vecRotatorHistory = 0x9C0; // CUtlVector<RotatorHistoryEntry_t>
                constexpr std::ptrdiff_t m_bReturningToPreviousOrientation = 0x9D8; // bool
                constexpr std::ptrdiff_t m_vecRotatorQueue = 0x9E0; // CUtlVector<RotatorQueueEntry_t>
                constexpr std::ptrdiff_t m_vecRotatorQueueHistory = 0x9F8; // CUtlVector<RotatorHistoryEntry_t>
            }
            // Parent: CBaseEntity
            // Field count: 14
            namespace CSoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4F1; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x4F2; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x4F3; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4F4; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4F8; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x510; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x538; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x560; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x590; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x5AC; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x5B0; // int32
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            namespace CTriggerImpact {
                constexpr std::ptrdiff_t m_flMagnitude = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flNoise = 0x9D4; // float32
                constexpr std::ptrdiff_t m_flViewkick = 0x9D8; // float32
                constexpr std::ptrdiff_t m_pOutputForce = 0x9E0; // CEntityOutputTemplate<Vector>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: CHostage
            // Field count: 0
            namespace CHostageAlias_info_hostage_spawn {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x548; // int32
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
            namespace CFuncConveyor {
                constexpr std::ptrdiff_t m_szConveyorModels = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x7E0; // float32
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7E4; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x7FC; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x800; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x804; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x808; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x810; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 0
            namespace CInfoTargetServerOnly {
            }
            // Parent: None
            // Field count: 0
            namespace PropDoorRotatingOpenDirection_e {
            }
            // Parent: None
            // Field count: 0
            namespace PulseCursorCancelPriority_t {
            }
        }
    }
}
