// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libserver.so
        // Classes count: 160
        // Enums count: 0
        namespace libserver_so {
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRangeFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
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
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAnimEventQueueListener {
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace RelationshipOverride_t {
                constexpr std::ptrdiff_t entity = 0x8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t classType = 0xC; // Class_T
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace AutoRoomDoorwayPairs_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRemapFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CHintMessage {
                constexpr std::ptrdiff_t m_hintString = 0x0; // char*
                constexpr std::ptrdiff_t m_args = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_duration = 0x20; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CFootstepTableHandle {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CDecalGroupVData {
                constexpr std::ptrdiff_t m_vecOptions = 0x0; // CUtlVector<DecalGroupOption_t>
                constexpr std::ptrdiff_t m_flTotalProbability = 0x18; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmSnapWeaponTask {
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CPlayerControllerComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CResponseQueue {
                constexpr std::ptrdiff_t m_ExpresserTargets = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CodeGenAABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CScriptUniformRandomStream {
                constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32
            }
            // Parent: 
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace lerpdata_t {
                constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_MoveType = 0x4; // MoveType_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_vecStartOrigin = 0xC; // Vector
                constexpr std::ptrdiff_t m_qStartRot = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_nFXIndex = 0x30; // ParticleIndex_t
            }
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace WrappedPhysicsJoint_t {
            }
            // Parent: 
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace SimpleConstraintSoundProfile {
                constexpr std::ptrdiff_t m_flKeyPointMinSoundThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_flKeyPointMaxSoundThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_reversalSoundThresholdSmall = 0x10; // float32
                constexpr std::ptrdiff_t m_reversalSoundThresholdMedium = 0x14; // float32
                constexpr std::ptrdiff_t m_reversalSoundThresholdLarge = 0x18; // float32
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSimpleSimTimer {
                constexpr std::ptrdiff_t m_flNext = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CPhysicsBodyGameMarkupData {
                constexpr std::ptrdiff_t m_PhysicsBodyMarkupByBoneName = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CSkillDamage {
                constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_flNPCDamageScalarVsNPC = 0x10; // float32
                constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x14; // float32
            }
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAnimEventListenerBase {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmEventConsumer {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNetworkViewOffsetVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace AmmoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CDestructiblePartsSystemData {
                constexpr std::ptrdiff_t m_PartsDataByHitGroup = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                constexpr std::ptrdiff_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x28; // CRangeInt
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRopeOverlapHit {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ResponseContext_t {
                constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeSphericalShell {
                constexpr std::ptrdiff_t m_flRadiusInner = 0x68; // float32
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CPlayerPawnComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: 
            // Fields count: 27
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
                constexpr std::ptrdiff_t m_transform = 0x60; // CTransformWS
                constexpr std::ptrdiff_t m_flAnimationScale = 0x80; // float32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0x84; // float32
                constexpr std::ptrdiff_t m_flPlaceTime = 0x88; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x8C; // float32
                constexpr std::ptrdiff_t m_flFadeDuration = 0x90; // float32
                constexpr std::ptrdiff_t m_flLightingOriginOffset = 0x94; // float32
                constexpr std::ptrdiff_t m_flBoundingRadiusSqr = 0xA0; // float32
                constexpr std::ptrdiff_t m_nSequenceIndex = 0xA4; // int16
                constexpr std::ptrdiff_t m_bIsAdjacent = 0xA6; // bool
                constexpr std::ptrdiff_t m_bDoDecalLightmapping = 0xA7; // bool
                constexpr std::ptrdiff_t m_nDecalRtEncoding = 0xA8; // DecalRtEncoding_t
                constexpr std::ptrdiff_t m_bProjectToBackfaces = 0xA9; // bool
            }
            // Parent: 
            // Fields count: 18
            //
            // Metadata:
            // ���x.
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
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSkeletonAnimationController {
                constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeMarkupVolume {
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CPathMoverEntitySpawn {
                constexpr std::ptrdiff_t hMover = 0x0; // CHandle<CFuncMover>
                constexpr std::ptrdiff_t vecOtherEntities = 0x8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CResponseCriteriaSet {
                constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x30; // int32
                constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x34; // bool
            }
            // Parent: 
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace IChoreoServices {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmEventConsumerAttributes {
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CStopwatch {
                constexpr std::ptrdiff_t m_flInterval = 0xC; // float32
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ResponseParams {
                constexpr std::ptrdiff_t odds = 0x10; // int16
                constexpr std::ptrdiff_t flags = 0x12; // int16
                constexpr std::ptrdiff_t m_pFollowup = 0x14; // ResponseFollowup*
            }
            // Parent: 
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ConstraintSoundInfo {
                constexpr std::ptrdiff_t m_vSampler = 0x8; // VelocitySampler
                constexpr std::ptrdiff_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
                constexpr std::ptrdiff_t m_forwardAxis = 0x40; // Vector
                constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSoundSmall = 0x78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSoundMedium = 0x80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSoundLarge = 0x88; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bPlayTravelSound = 0x90; // bool
                constexpr std::ptrdiff_t m_bPlayReversalSound = 0x91; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CPhysicsBodyGameMarkup {
                constexpr std::ptrdiff_t m_TargetBody = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Tag = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace PointCameraSettings_t {
                constexpr std::ptrdiff_t m_flNearBlurryDistance = 0x0; // float32
                constexpr std::ptrdiff_t m_flNearCrispDistance = 0x4; // float32
                constexpr std::ptrdiff_t m_flFarCrispDistance = 0x8; // float32
                constexpr std::ptrdiff_t m_flFarBlurryDistance = 0xC; // float32
            }
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVectorMovingAverage {
            }
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSoundEnvelope {
                constexpr std::ptrdiff_t m_current = 0x0; // float32
                constexpr std::ptrdiff_t m_target = 0x4; // float32
                constexpr std::ptrdiff_t m_rate = 0x8; // float32
                constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
            }
            // Parent: 
            // Fields count: 25
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CStopwatchBase {
                constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace SceneRequestHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeVector {
                constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x60; // bool
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace NavGravity_t {
                constexpr std::ptrdiff_t m_vGravity = 0x0; // Vector
                constexpr std::ptrdiff_t m_bDefault = 0xC; // bool
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
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
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace RotatorQueueEntry_t {
                constexpr std::ptrdiff_t qTarget = 0x0; // Quaternion
                constexpr std::ptrdiff_t eSpace = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBaseAnimGraphDestructibleParts_GraphController {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ExternalAnimGraphHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CPhysicsShake {
                constexpr std::ptrdiff_t m_force = 0x8; // Vector
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace VelocitySampler {
                constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
                constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float32
            }
            // Parent: 
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CTakeDamageResult {
                constexpr std::ptrdiff_t m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
                constexpr std::ptrdiff_t m_nHealthLost = 0x8; // int32
                constexpr std::ptrdiff_t m_nHealthBefore = 0xC; // int32
                constexpr std::ptrdiff_t m_nDamageDealt = 0x10; // int32
                constexpr std::ptrdiff_t m_flPreModifiedDamage = 0x14; // float32
                constexpr std::ptrdiff_t m_nTotalledHealthLost = 0x18; // int32
                constexpr std::ptrdiff_t m_nTotalledDamageDealt = 0x1C; // int32
                constexpr std::ptrdiff_t m_flTotalledPreModifiedDamage = 0x20; // float32
                constexpr std::ptrdiff_t m_bWasDamageSuppressed = 0x24; // bool
                constexpr std::ptrdiff_t m_bSuppressFlinch = 0x25; // bool
                constexpr std::ptrdiff_t m_nOverrideFlinchHitGroup = 0x28; // HitGroup_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace SceneEventId_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ExternalAnimGraph_t {
                constexpr std::ptrdiff_t m_hExtGraphHandle = 0x0; // ExternalAnimGraphHandle_t
                constexpr std::ptrdiff_t m_sExternalGraphSlotID = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hGraphDefinition = 0x10; // CStrongHandleCopyable<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_hExternalGraphOwner = 0x18; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_nInactiveBehavior = 0x30; // ExternalAnimGraphInactiveBehavior_t
            }
            // Parent: 
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace AmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32
                constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
                constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
                constexpr std::ptrdiff_t m_flMass = 0x28; // float32
                constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNetworkTransmitComponent {
                constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x2DC; // uint8
            }
            // Parent: 
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CPathQueryUtil {
                constexpr std::ptrdiff_t m_PathToEntityTransform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_vecPathSamplePositions = 0x30; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecPathSampleParameters = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPathSampleDistances = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bIsClosedLoop = 0x78; // bool
            }
            // Parent: 
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace RagdollCreationParams_t {
                constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32
                constexpr std::ptrdiff_t m_bForceCurrentWorldTransform = 0x10; // bool
                constexpr std::ptrdiff_t m_bUseLRURetirement = 0x11; // bool
                constexpr std::ptrdiff_t m_nHealthToGrant = 0x14; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRangeInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CWorldCompositionChunkReferenceElement_t {
                constexpr std::ptrdiff_t m_strMapToLoad = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_strLandmarkName = 0x8; // CUtlString
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRandStopwatch {
                constexpr std::ptrdiff_t m_flMinInterval = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0x10; // float32
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CMovementStatsProperty {
                constexpr std::ptrdiff_t m_nUseCounter = 0x10; // int32
                constexpr std::ptrdiff_t m_emaMovementDirection = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: 
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CGameChoreoServices {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
                constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
                constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSimpleStopwatch {
            }
            // Parent: 
            // Fields count: 28
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ragdollelement_t {
                constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
                constexpr std::ptrdiff_t parentIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x24; // float32
                constexpr std::ptrdiff_t m_nHeight = 0x28; // int32
            }
            // Parent: 
            // Fields count: 9
            //
            // Metadata:
            // ���x.
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
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBaseAnimGraphVariationUserData {
            }
            // Parent: 
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNetworkOriginQuantizedVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace magnetted_objects_t {
                constexpr std::ptrdiff_t hEntity = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CHintMessageQueue {
                constexpr std::ptrdiff_t m_tmMessageEnd = 0x0; // float32
                constexpr std::ptrdiff_t m_messages = 0x8; // CUtlVector<CHintMessage*>
                constexpr std::ptrdiff_t m_pPlayerController = 0x20; // CBasePlayerController*
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSkillInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
            }
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace thinkfunc_t {
                constexpr std::ptrdiff_t m_hFn = 0x10; // HSCRIPT
                constexpr std::ptrdiff_t m_nContext = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x1C; // GameTick_t
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x20; // GameTick_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CNavHullPresetVData {
                constexpr std::ptrdiff_t m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSkillFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace WaterWheelFrictionScale_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flFrictionScale = 0x4; // float32
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ragdollhierarchyjoint_t {
                constexpr std::ptrdiff_t parentIndex = 0x0; // int32
                constexpr std::ptrdiff_t childIndex = 0x4; // int32
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSceneEventInfo {
                constexpr std::ptrdiff_t m_iLayer = 0x0; // int32
                constexpr std::ptrdiff_t m_iPriority = 0x4; // int32
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flWeight = 0xC; // float32
                constexpr std::ptrdiff_t m_hAnimClip = 0x10; // CStrongHandle<InfoForResourceTypeCNmClip>
                constexpr std::ptrdiff_t m_sAnimClipSlot = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sAnimClipSlotWeight = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bHasArrived = 0x28; // bool
                constexpr std::ptrdiff_t m_nType = 0x2C; // int32
                constexpr std::ptrdiff_t m_flNext = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_bIsGesture = 0x34; // bool
                constexpr std::ptrdiff_t m_bShouldRemove = 0x35; // bool
                constexpr std::ptrdiff_t m_hTarget = 0x5C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSceneEventId = 0x60; // SceneEventId_t
                constexpr std::ptrdiff_t m_bClientSide = 0x64; // bool
                constexpr std::ptrdiff_t m_bStarted = 0x65; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace SoundeventPathCornerPairNetworked_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
                constexpr std::ptrdiff_t flPathLengthSqr = 0x18; // float32
                constexpr std::ptrdiff_t flP1Pct = 0x1C; // float32
                constexpr std::ptrdiff_t flP2Pct = 0x20; // float32
            }
            // Parent: 
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
                constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0xA0; // float32
                constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0xA4; // bool
                constexpr std::ptrdiff_t m_iszClassName = 0xA8; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CCS2ChickenGraphController {
                constexpr std::ptrdiff_t m_action = 0x90; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_actionSubtype = 0xA8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xC0; // CAnimGraph2ParamAutoResetOptionalRef
                constexpr std::ptrdiff_t m_idleVariation = 0xE0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_runVariation = 0xF8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_panicVariation = 0x110; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_squatVariation = 0x128; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bInWater = 0x140; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHasActionCompletedEvent = 0x158; // bool
                constexpr std::ptrdiff_t m_bWaitingForCompletedEvent = 0x159; // bool
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace locksound_t {
                constexpr std::ptrdiff_t sLockedSound = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t sUnlockedSound = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flwaitSound = 0x18; // GameTime_t
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace DecalGroupOption_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flProbability = 0x10; // float32
                constexpr std::ptrdiff_t m_bEnableAngleBetweenNormalAndGravityRange = 0x14; // bool
                constexpr std::ptrdiff_t m_flMinAngleBetweenNormalAndGravity = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxAngleBetweenNormalAndGravity = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBtNode {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAnimGraphControllerManager {
                constexpr std::ptrdiff_t m_controllers = 0x0; // CUtlVector<CAnimGraphControllerBase*>
                constexpr std::ptrdiff_t m_bGraphBindingsCreated = 0xA8; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CFiringModeFloat {
                constexpr std::ptrdiff_t m_flValues = 0x0; // float32[2]
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CCopyRecipientFilter {
                constexpr std::ptrdiff_t m_Flags = 0x8; // int32
                constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
                constexpr std::ptrdiff_t m_slotPlayerExcludedDueToPrediction = 0x30; // CPlayerSlot
            }
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CFloatMovingAverage {
            }
            // Parent: 
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSmoothFunc {
                constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float32
                constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float32
                constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float32
                constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace IHasAttributes {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ragdoll_t {
                constexpr std::ptrdiff_t list = 0x0; // CUtlVector<ragdollelement_t>
                constexpr std::ptrdiff_t hierarchyJoints = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                constexpr std::ptrdiff_t boneIndex = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t allowStretch = 0x48; // bool
                constexpr std::ptrdiff_t unused = 0x49; // bool
            }
            // Parent: 
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ISkeletonAnimationController {
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace RotatorHistoryEntry_t {
                constexpr std::ptrdiff_t qInvChange = 0x0; // Quaternion
                constexpr std::ptrdiff_t flTimeRotationStart = 0x10; // GameTime_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace GameAmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nBuySize = 0x34; // int32
                constexpr std::ptrdiff_t m_nCost = 0x38; // int32
            }
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CMotorController {
                constexpr std::ptrdiff_t m_speed = 0x8; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0xC; // float32
                constexpr std::ptrdiff_t m_axis = 0x10; // VectorWS
                constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float32
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSimTimer {
                constexpr std::ptrdiff_t m_flInterval = 0x8; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBaseIssue {
                constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
                constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[4096]
                constexpr std::ptrdiff_t m_iNumYesVotes = 0x1060; // int32
                constexpr std::ptrdiff_t m_iNumNoVotes = 0x1064; // int32
                constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x1068; // int32
                constexpr std::ptrdiff_t m_pVoteController = 0x1070; // CVoteController*
            }
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace SummaryTakeDamageInfo_t {
                constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32
                constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
                constexpr std::ptrdiff_t result = 0x128; // CTakeDamageResult
                constexpr std::ptrdiff_t hTarget = 0x158; // CHandle<CBaseEntity>
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSceneRequest {
                constexpr std::ptrdiff_t m_szPayloadTypeName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_uHandle = 0x8; // SceneRequestHandle_t
                constexpr std::ptrdiff_t m_state = 0xC; // ESceneRequestState_t
            }
            // Parent: 
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace DestructiblePartDestructionRequest_t {
                constexpr std::ptrdiff_t m_nDestroyFlags = 0x0; // EDestructibleParts_DestroyParameterFlags
                constexpr std::ptrdiff_t m_nDamageType = 0x4; // DamageTypes_t
                constexpr std::ptrdiff_t m_flPartDamage = 0x8; // float32
                constexpr std::ptrdiff_t m_flPartDamageRadius = 0xC; // float32
                constexpr std::ptrdiff_t m_vWsPartDamageOrigin = 0x10; // VectorWS
                constexpr std::ptrdiff_t m_vWsPartDamageForce = 0x1C; // Vector
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace DestructibleHitGroupToDestroy_t {
                constexpr std::ptrdiff_t m_nHitGroup = 0x0; // HitGroup_t
                constexpr std::ptrdiff_t m_nMaxDamageLevel = 0x4; // int32
            }
            // Parent: 
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRR_Response {
                constexpr std::ptrdiff_t m_Type = 0x0; // uint8
                constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
                constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
                constexpr std::ptrdiff_t m_Params = 0x160; // ResponseParams
                constexpr std::ptrdiff_t m_fMatchScore = 0x17C; // float32
                constexpr std::ptrdiff_t m_bAnyMatchingRulesInCooldown = 0x180; // bool
                constexpr std::ptrdiff_t m_szSpeakerContext = 0x188; // char*
                constexpr std::ptrdiff_t m_szWorldContext = 0x190; // char*
                constexpr std::ptrdiff_t m_Followup = 0x198; // ResponseFollowup
                constexpr std::ptrdiff_t m_recipientFilter = 0x1CA; // CUtlSymbol
            }
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmAimCSNode__CDefinition {
                constexpr std::ptrdiff_t m_nVerticalAngleNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nHorizontalAngleNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_nWeaponCategoryNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nWeaponTypeNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_nIsWeaponActionActiveNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_nWeaponDropNodeIdx = 0x16; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x1C; // float32
                constexpr std::ptrdiff_t m_flReduceRangeTimeSeconds = 0x20; // float32
            }
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CConstantForceController {
                constexpr std::ptrdiff_t m_linear = 0xC; // Vector
                constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
                constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
                constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace WaterWheelDrag_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flWheelDrag = 0x4; // float32
            }
            // Parent: 
            // Fields count: 22
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
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
                constexpr std::ptrdiff_t m_iHitGroupId = 0x78; // HitGroup_t
                constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x7C; // int32
                constexpr std::ptrdiff_t m_flFriendlyFireDamageReductionRatio = 0x80; // float32
                constexpr std::ptrdiff_t m_bStoppedBullet = 0x84; // bool
                constexpr std::ptrdiff_t m_nDestructibleHitGroupsToForceDestroy = 0x100; // CUtlVector<DestructibleHitGroupToDestroy_t>
                constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x118; // bool
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRandSimTimer {
                constexpr std::ptrdiff_t m_flMinInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0xC; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBtNodeComposite {
            }
            // Parent: 
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CRelativeLocation {
                constexpr std::ptrdiff_t m_Type = 0x18; // RelativeLocationType_t
                constexpr std::ptrdiff_t m_vRelativeOffset = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vWorldSpacePos = 0x28; // VectorWS
                constexpr std::ptrdiff_t m_hEntity = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace Extent {
                constexpr std::ptrdiff_t lo = 0x0; // VectorWS
                constexpr std::ptrdiff_t hi = 0xC; // VectorWS
            }
            // Parent: 
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace sndopvarlatchdata_t {
                constexpr std::ptrdiff_t m_iszStack = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperator = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvar = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flVal = 0x20; // float32
                constexpr std::ptrdiff_t m_vPos = 0x24; // Vector
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace IEconItemInterface {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CMultiplayer_Expresser {
                constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0xA0; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolume {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace QuestProgress {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmAimCSTask {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ParticleIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CTakeDamageSummaryScopeGuard {
                constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CIronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmEventConsumerSound {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmEventConsumerLegacy {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CInButtonState {
                constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64[3]
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmEventConsumerParticle {
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
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
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNmSnapWeaponNode__CDefinition {
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nLockLeftHandNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x10; // float32
            }
            // Parent: 
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace SoundOpvarTraceResult_t {
                constexpr std::ptrdiff_t vPos = 0x0; // Vector
                constexpr std::ptrdiff_t bDidHit = 0xC; // bool
                constexpr std::ptrdiff_t flDistSqrToCenter = 0x10; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAnimEventListener {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CFiringModeInt {
                constexpr std::ptrdiff_t m_nValues = 0x0; // int32[2]
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBtNodeDecorator {
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSAdditionalPerRoundStats_t {
                constexpr std::ptrdiff_t m_numChickensKilled = 0x0; // int32
                constexpr std::ptrdiff_t m_killsWhileBlind = 0x4; // int32
                constexpr std::ptrdiff_t m_bombCarrierkills = 0x8; // int32
                constexpr std::ptrdiff_t m_flBurnDamageInflicted = 0xC; // float32
                constexpr std::ptrdiff_t m_flBlastDamageInflicted = 0x10; // float32
                constexpr std::ptrdiff_t m_iDinks = 0x14; // int32
                constexpr std::ptrdiff_t m_bFreshStartThisRound = 0x18; // bool
                constexpr std::ptrdiff_t m_bBombPlantedAndAlive = 0x19; // bool
                constexpr std::ptrdiff_t m_nDefuseStarts = 0x1C; // int32
                constexpr std::ptrdiff_t m_nHostagePickUps = 0x20; // int32
                constexpr std::ptrdiff_t m_numTeammatesFlashed = 0x24; // int32
                constexpr std::ptrdiff_t m_strAnnotationsWorkshopId = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CEmptyGraphController {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace ModelConfigHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            namespace CEntitySubclassVDataBase {
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBreakableStageHelper {
                constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32
                constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeBreadthFirstSearch {
                constexpr std::ptrdiff_t m_vStartPos = 0x88; // Vector
                constexpr std::ptrdiff_t m_flSearchDist = 0x94; // float32
            }
            // Parent: 
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace dynpitchvol_t {
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSAdditionalMatchStats_t {
                constexpr std::ptrdiff_t m_numRoundsSurvivedStreak = 0xF8; // int32
                constexpr std::ptrdiff_t m_maxNumRoundsSurvivedStreak = 0xFC; // int32
                constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x100; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x104; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x108; // int32
                constexpr std::ptrdiff_t m_numFirstKills = 0x10C; // int32
                constexpr std::ptrdiff_t m_numClutchKills = 0x110; // int32
                constexpr std::ptrdiff_t m_numPistolKills = 0x114; // int32
                constexpr std::ptrdiff_t m_numSniperKills = 0x118; // int32
                constexpr std::ptrdiff_t m_iNumSuicides = 0x11C; // int32
                constexpr std::ptrdiff_t m_iNumTeamKills = 0x120; // int32
                constexpr std::ptrdiff_t m_flTeamDamage = 0x124; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace IRagdoll {
            }
            // Parent: 
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace hudtextparms_t {
                constexpr std::ptrdiff_t color1 = 0x0; // Color
                constexpr std::ptrdiff_t color2 = 0x4; // Color
                constexpr std::ptrdiff_t effect = 0x8; // uint8
                constexpr std::ptrdiff_t channel = 0x9; // uint8
                constexpr std::ptrdiff_t x = 0xC; // float32
                constexpr std::ptrdiff_t y = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAnimGraphControllerBase {
                constexpr std::ptrdiff_t m_hExternalGraph = 0x18; // ExternalAnimGraphHandle_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNetworkVelocityVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
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
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeAll {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CNavVolumeSphere {
                constexpr std::ptrdiff_t m_vCenter = 0x58; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x64; // float32
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace Relationship_t {
                constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
                constexpr std::ptrdiff_t priority = 0x4; // int32
            }
        }
    }
}
