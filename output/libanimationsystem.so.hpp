// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libanimationsystem.so
        // Classes count: 594
        // Enums count: 8
        namespace libanimationsystem_so {
            // Alignment: 1
            // Members count: 4
            enum class CPulseCell_BooleanSwitchState : uint8_t {
                 = 0x0,
                 = 0x0,
                 = 0x0,
                 = 0x0
            };
            // Alignment: 4
            // Members count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CAnimFrameBlockAnim {
                constexpr std::ptrdiff_t m_nStartFrame = 0x0; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0x4; // int32
                constexpr std::ptrdiff_t m_segmentIndexArray = 0x8; // CUtlVector<int32>
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
            namespace CZeroPoseUpdateNode {
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
            namespace CSlowDownOnSlopesUpdateNode {
                constexpr std::ptrdiff_t m_flSlowDownStrength = 0x70; // float32
            }
            // Parent: None
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
            // 
            namespace COrientationWarpUpdateNode {
                constexpr std::ptrdiff_t m_eMode = 0x74; // OrientationWarpMode_t
                constexpr std::ptrdiff_t m_hTargetParam = 0x78; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetPositionParam = 0x7A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hFallbackTargetPositionParam = 0x7C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eTargetOffsetMode = 0x80; // OrientationWarpTargetOffsetMode_t
                constexpr std::ptrdiff_t m_flTargetOffset = 0x84; // float32
                constexpr std::ptrdiff_t m_hTargetOffsetParam = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0x90; // CAnimInputDamping
                constexpr std::ptrdiff_t m_eRootMotionSource = 0xA8; // OrientationWarpRootMotionSource_t
                constexpr std::ptrdiff_t m_flMaxRootMotionScale = 0xAC; // float32
                constexpr std::ptrdiff_t m_bEnablePreferredRotationDirection = 0xB0; // bool
                constexpr std::ptrdiff_t m_ePreferredRotationDirection = 0xB4; // AnimValueSource
                constexpr std::ptrdiff_t m_flPreferredRotationThreshold = 0xB8; // float32
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
            namespace CAnimParameterBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sComment = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_group = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_componentName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_bNetworkingRequested = 0x68; // bool
                constexpr std::ptrdiff_t m_bIsReferenced = 0x69; // bool
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
            namespace CSequenceFinishedAnimTag {
                constexpr std::ptrdiff_t m_sequenceName = 0x58; // CUtlString
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CSceneObjectData {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
                constexpr std::ptrdiff_t m_drawCalls = 0x18; // CUtlLeanVector<CMaterialDrawDescriptor>
                constexpr std::ptrdiff_t m_drawBounds = 0x28; // CUtlLeanVector<AABB_t>
                constexpr std::ptrdiff_t m_meshlets = 0x38; // CUtlLeanVector<CMeshletDescriptor>
                constexpr std::ptrdiff_t m_rtProxyDrawCalls = 0x48; // CUtlLeanVector<CSceneObjectData::RTProxyDrawDescriptor_t>
                constexpr std::ptrdiff_t m_vTintColor = 0x58; // Vector4D
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
            namespace CFootCycle {
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
            namespace CParticleModelInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleModelType_t
                constexpr std::ptrdiff_t m_NamedValue = 0x10; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_nControlPoint = 0x50; // int32
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
            namespace CInputStreamUpdateNode {
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
            namespace CIntAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // int32
                constexpr std::ptrdiff_t m_minValue = 0x7C; // int32
                constexpr std::ptrdiff_t m_maxValue = 0x80; // int32
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
            namespace CNmParameterizedBlendNode__CDefinition {
                constexpr std::ptrdiff_t m_sourceNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_nInputParameterValueNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_bAllowLooping = 0x3A; // bool
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
            namespace CNmScaleTask {
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
            namespace CNmFrameSnapEvent {
                constexpr std::ptrdiff_t m_frameSnapMode = 0x1C; // NmFrameSnapEventMode_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CAnimNodePath {
                constexpr std::ptrdiff_t m_path = 0x0; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nCount = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimNodeOutputID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmSyncTrack {
                constexpr std::ptrdiff_t m_syncEvents = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t,10>
                constexpr std::ptrdiff_t m_nStartEventOffset = 0xA8; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CSeqBoneMaskList {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nLocalBoneArray = 0x10; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_flBoneWeightArray = 0x28; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDefaultMorphCtrlWeight = 0x40; // float32
                constexpr std::ptrdiff_t m_morphCtrlWeightArray = 0x48; // CUtlVector<std::pair<CBufferString,float32>>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimEncodedFrames {
                constexpr std::ptrdiff_t m_fileName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nFrames = 0x10; // int32
                constexpr std::ptrdiff_t m_nFramesPerBlock = 0x14; // int32
                constexpr std::ptrdiff_t m_frameblockArray = 0x18; // CUtlVector<CAnimFrameBlockAnim>
                constexpr std::ptrdiff_t m_usageDifferences = 0x30; // CAnimEncodeDifference
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace SampleCode {
                constexpr std::ptrdiff_t m_subCode = 0x0; // uint8[8]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CCachedPose {
                constexpr std::ptrdiff_t m_transforms = 0x8; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_morphWeights = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_hSequence = 0x38; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x3C; // float32
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
            // 
            namespace CNmTransitionEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_requireRuleID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eventConditionRules = 0x18; // CNmBitFlags
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x1C; // int16
                constexpr std::ptrdiff_t m_ruleCondition = 0x1E; // NmTransitionRuleCondition_t
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
            namespace CTaskStatusAnimTag {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CMotionGraphConfig {
                constexpr std::ptrdiff_t m_paramValues = 0x0; // float32[4]
                constexpr std::ptrdiff_t m_flDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_nMotionIndex = 0x14; // MotionIndex
                constexpr std::ptrdiff_t m_nSampleStart = 0x18; // int32
                constexpr std::ptrdiff_t m_nSampleCount = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CMotionSearchNode {
                constexpr std::ptrdiff_t m_children = 0x0; // CUtlVector<CMotionSearchNode*>
                constexpr std::ptrdiff_t m_quantizer = 0x18; // CVectorQuantizer
                constexpr std::ptrdiff_t m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
                constexpr std::ptrdiff_t m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_selectableSamples = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CAnimActivity {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nActivity = 0x10; // int32
                constexpr std::ptrdiff_t m_nFlags = 0x14; // int32
                constexpr std::ptrdiff_t m_nWeight = 0x18; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CAnimScriptManager {
                constexpr std::ptrdiff_t m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace AnimationDecodeDebugDumpElement_t {
                constexpr std::ptrdiff_t m_nEntityIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_poseParams = 0x10; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_decodeOps = 0x28; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_internalOps = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_decodedAnims = 0x58; // CUtlVector<CUtlString>
            }
            // Parent: 
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace MovementGaitId_t {
                constexpr std::ptrdiff_t m_sId = 0x0; // CGlobalSymbol
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
            namespace PulseRuntimeVarIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace ConfigIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nConfig = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace VPhysXCollisionAttributes_t {
                constexpr std::ptrdiff_t m_nIncludeDetailLayerCount = 0x0; // int32
                constexpr std::ptrdiff_t m_CollisionGroup = 0x4; // uint32
                constexpr std::ptrdiff_t m_InteractAs = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractWith = 0x20; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractExclude = 0x38; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_DetailLayers = 0x50; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_CollisionGroupString = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_InteractAsStrings = 0x70; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractWithStrings = 0x88; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractExcludeStrings = 0xA0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_DetailLayerStrings = 0xB8; // CUtlVector<CUtlString>
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
            // 
            namespace CSequenceUpdateNode {
                constexpr std::ptrdiff_t m_hSequence = 0x74; // HSequence
                constexpr std::ptrdiff_t m_duration = 0x78; // float32
                constexpr std::ptrdiff_t m_paramSpans = 0x80; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x98; // CUtlVector<TagSpan_t>
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
            namespace CNmPassthroughNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
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
            namespace CNmClipReferenceNode__CDefinition {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmGraphDefinition__ExternalGraphSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_slotID = 0x8; // CGlobalSymbol
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
            namespace PulseRuntimeEntrypointIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
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
            // 
            namespace CAimCameraUpdateNode {
                constexpr std::ptrdiff_t m_hParameterPosition = 0x70; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterOrientation = 0x72; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterPelvisOffset = 0x74; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterCameraOnly = 0x76; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterWeaponDepenetrationDistance = 0x78; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterWeaponDepenetrationDelta = 0x7A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterCameraClearanceDistance = 0x7C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_opFixedSettings = 0x80; // AimCameraOpFixedSettings_t
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
            namespace PulseRuntimeDomainValueIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace CSeqSeqDescFlag {
                constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
                constexpr std::ptrdiff_t m_bSnap = 0x1; // bool
                constexpr std::ptrdiff_t m_bAutoplay = 0x2; // bool
                constexpr std::ptrdiff_t m_bPost = 0x3; // bool
                constexpr std::ptrdiff_t m_bHidden = 0x4; // bool
                constexpr std::ptrdiff_t m_bMulti = 0x5; // bool
                constexpr std::ptrdiff_t m_bLegacyDelta = 0x6; // bool
                constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x7; // bool
                constexpr std::ptrdiff_t m_bLegacyCyclepose = 0x8; // bool
                constexpr std::ptrdiff_t m_bLegacyRealtime = 0x9; // bool
                constexpr std::ptrdiff_t m_bModelDoc = 0xA; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace PermModelInfo_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_vHullMin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vHullMax = 0x10; // Vector
                constexpr std::ptrdiff_t m_vViewMin = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vViewMax = 0x28; // Vector
                constexpr std::ptrdiff_t m_flMass = 0x34; // float32
                constexpr std::ptrdiff_t m_vEyePosition = 0x38; // Vector
                constexpr std::ptrdiff_t m_flMaxEyeDeflection = 0x44; // float32
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_keyValueText = 0x50; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace StanceInfo_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
                constexpr std::ptrdiff_t m_flDirection = 0xC; // float32
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
            namespace IKBoneNameAndIndex_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
                constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                constexpr std::ptrdiff_t m_InstructionDebugInfos = 0x20; // CUtlLeanVector<CPulse_InstructionDebug>
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
            namespace CStanceScaleUpdateNode {
                constexpr std::ptrdiff_t m_hParam = 0x70; // CAnimParamHandle
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
            namespace PulseRuntimeInvokeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
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
            namespace CNmBoneMaskBlendNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceMaskNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTargetMaskNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nBlendWeightValueNodeIdx = 0xE; // int16
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
            namespace CNmIDEventNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0xC; // CNmBitFlags
                constexpr std::ptrdiff_t m_defaultValue = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // ���x.
            namespace HitReactFixedSettings_t {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nEffectedBoneCount = 0x4; // int32
                constexpr std::ptrdiff_t m_flMaxImpactForce = 0x8; // float32
                constexpr std::ptrdiff_t m_flMinImpactForce = 0xC; // float32
                constexpr std::ptrdiff_t m_flWhipImpactScale = 0x10; // float32
                constexpr std::ptrdiff_t m_flCounterRotationScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flDistanceFadeScale = 0x18; // float32
                constexpr std::ptrdiff_t m_flPropagationScale = 0x1C; // float32
                constexpr std::ptrdiff_t m_flWhipDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x24; // float32
                constexpr std::ptrdiff_t m_flWhipSpringStrength = 0x28; // float32
                constexpr std::ptrdiff_t m_flMaxAngleRadians = 0x2C; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32
                constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0x34; // float32
                constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0x38; // float32
                constexpr std::ptrdiff_t m_flHipDipImpactScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_flHipDipDelay = 0x40; // float32
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
            namespace CNmPoseNode__CDefinition {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimTagBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sComment = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_group = 0x28; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tagID = 0x30; // AnimTagID
                constexpr std::ptrdiff_t m_bIsReferenced = 0x48; // bool
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
            namespace CPerParticleVecInput {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CMotionGraph {
                constexpr std::ptrdiff_t m_paramSpans = 0x10; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_nParameterCount = 0x48; // int32
                constexpr std::ptrdiff_t m_nConfigStartIndex = 0x4C; // int32
                constexpr std::ptrdiff_t m_nConfigCount = 0x50; // int32
                constexpr std::ptrdiff_t m_bLoop = 0x54; // bool
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
            namespace CNmVectorInfoNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_desiredInfo = 0xC; // CNmVectorInfoNode::Info_t
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
            namespace AnimationSnapshot_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x108; // int32
                constexpr std::ptrdiff_t m_modelName = 0x110; // CUtlString
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
            namespace CNmBlendTask {
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
            namespace CNmVectorValueNode__CDefinition {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CSeqTransition {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float32
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
            namespace CNmPoseTask {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            namespace CAnimGraphSettingsGroup {
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
            namespace CNmVirtualParameterTargetNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimGraphDebugReplay {
                constexpr std::ptrdiff_t m_animGraphFileName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
                constexpr std::ptrdiff_t m_startIndex = 0x60; // int32
                constexpr std::ptrdiff_t m_writeIndex = 0x64; // int32
                constexpr std::ptrdiff_t m_frameCount = 0x68; // int32
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
            namespace CVectorAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // Vector
                constexpr std::ptrdiff_t m_bInterpolate = 0x84; // bool
                constexpr std::ptrdiff_t m_vectorType = 0x88; // AnimParamVectorType_t
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
            namespace CNmCachedPoseReadTask {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmStateMachineNode__StateDefinition_t {
                constexpr std::ptrdiff_t m_nStateNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_nEntryConditionNodeIdx = 0x2; // int16
                constexpr std::ptrdiff_t m_transitionDefinitions = 0x8; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::TransitionDefinition_t,5>
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
            // 
            namespace CStanceOverrideUpdateNode {
                constexpr std::ptrdiff_t m_footStanceInfo = 0x70; // CUtlVector<StanceInfo_t>
                constexpr std::ptrdiff_t m_pStanceSourceNode = 0x88; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hParameter = 0x98; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eMode = 0x9C; // StanceOverrideMode
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmGraphDefinition__ExternalPoseSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_slotID = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace PhysShapeMarkup_t {
                constexpr std::ptrdiff_t m_nBodyInAggregate = 0x0; // int32
                constexpr std::ptrdiff_t m_nShapeInBody = 0x4; // int32
                constexpr std::ptrdiff_t m_sHitGroup = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace LookAtBone_t {
                constexpr std::ptrdiff_t m_index = 0x0; // int32
                constexpr std::ptrdiff_t m_weight = 0x4; // float32
            }
            // Parent: None
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
            // 
            namespace CNmTransitionNode__CDefinition {
                constexpr std::ptrdiff_t m_nTargetStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nDurationOverrideNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_timeOffsetOverrideNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_startBoneMaskNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_flDuration = 0x14; // float32
                constexpr std::ptrdiff_t m_boneMaskBlendInTimePercentage = 0x18; // NmPercent_t
                constexpr std::ptrdiff_t m_flTimeOffset = 0x1C; // float32
                constexpr std::ptrdiff_t m_transitionOptions = 0x20; // CNmBitFlags
                constexpr std::ptrdiff_t m_targetSyncIDNodeIdx = 0x24; // int16
                constexpr std::ptrdiff_t m_blendWeightEasing = 0x26; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_rootMotionBlend = 0x27; // NmRootMotionBlendMode_t
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
            namespace PulseRuntimeRegisterIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
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
            // 
            namespace CNmFloatEaseNode__CDefinition {
                constexpr std::ptrdiff_t m_flEaseTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flStartValue = 0x10; // float32
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_easingOp = 0x16; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_bUseStartValue = 0x17; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CAnimEncodeDifference {
                constexpr std::ptrdiff_t m_boneArray = 0x0; // CUtlVector<CAnimBoneDifference>
                constexpr std::ptrdiff_t m_morphArray = 0x18; // CUtlVector<CAnimMorphDifference>
                constexpr std::ptrdiff_t m_userArray = 0x30; // CUtlVector<CAnimUserDifference>
                constexpr std::ptrdiff_t m_bHasRotationBitArray = 0x48; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasMovementBitArray = 0x60; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasMorphBitArray = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasUserBitArray = 0x90; // CUtlVector<uint8>
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
            namespace CRootUpdateNode {
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
            // 
            // 
            namespace CNmTargetOffsetNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_bIsBoneSpaceOffset = 0xC; // bool
                constexpr std::ptrdiff_t m_rotationOffset = 0x10; // Quaternion
                constexpr std::ptrdiff_t m_translationOffset = 0x20; // Vector
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
            namespace CMotionGraphUpdateNode {
                constexpr std::ptrdiff_t m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
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
            namespace CNmFloatAngleMathNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_operation = 0xC; // CNmFloatAngleMathNode::Operation_t
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
            namespace PulseCursorID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CAnimParamHandle {
                constexpr std::ptrdiff_t m_type = 0x0; // AnimParamType_t
                constexpr std::ptrdiff_t m_index = 0x1; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace WeightList {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_weights = 0x8; // CUtlVector<float32>
            }
            // Parent: 
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace MotionIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nMotion = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace FollowAttachmentSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_boneIndex = 0x80; // int32
                constexpr std::ptrdiff_t m_attachmentHandle = 0x84; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bMatchTranslation = 0x85; // bool
                constexpr std::ptrdiff_t m_bMatchRotation = 0x86; // bool
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
            namespace CNmReferencedGraphNode__CDefinition {
                constexpr std::ptrdiff_t m_nReferencedGraphIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nFallbackNodeIdx = 0xC; // int16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimNodeID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
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
            namespace CNmClipSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
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
            namespace CLookComponentUpdater {
                constexpr std::ptrdiff_t m_hLookHeading = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookHeadingNormalized = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookHeadingVelocity = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookPitch = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDistance = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDirection = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTarget = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTargetWorldSpace = 0x42; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x44; // bool
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
            namespace CNmIsExternalPoseSetNode__CDefinition {
                constexpr std::ptrdiff_t m_nExternalPoseNodeIdx = 0xA; // int16
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
            namespace CAnimGraphNetworkSettings {
                constexpr std::ptrdiff_t m_bNetworkingEnabled = 0x20; // bool
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
            // 
            namespace CSingleFrameUpdateNode {
                constexpr std::ptrdiff_t m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
                constexpr std::ptrdiff_t m_hPoseCacheHandle = 0x70; // CPoseHandle
                constexpr std::ptrdiff_t m_hSequence = 0x74; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x78; // float32
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
            // 
            namespace CNmChainLookatNode__CDefinition {
                constexpr std::ptrdiff_t m_chainEndBoneID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nLookatTargetNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x1C; // float32
                constexpr std::ptrdiff_t m_nChainLength = 0x20; // uint8
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x21; // bool
                constexpr std::ptrdiff_t m_chainForwardDir = 0x24; // Vector
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
            // 
            namespace CNmFollowBoneNode__CDefinition {
                constexpr std::ptrdiff_t m_bone = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_followTargetBone = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x20; // int16
                constexpr std::ptrdiff_t m_mode = 0x22; // NmFollowBoneMode_t
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
            namespace CBlockSelectionMetricEvaluator {
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
            namespace CRemapValueComponentUpdater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CRemapValueUpdateItem>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CModelConfigList {
                constexpr std::ptrdiff_t m_bHideMaterialGroupInTools = 0x0; // bool
                constexpr std::ptrdiff_t m_bHideRenderColorInTools = 0x1; // bool
                constexpr std::ptrdiff_t m_Configs = 0x8; // CUtlVector<CModelConfig*>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CSeqAutoLayerFlag {
                constexpr std::ptrdiff_t m_bPost = 0x0; // bool
                constexpr std::ptrdiff_t m_bSpline = 0x1; // bool
                constexpr std::ptrdiff_t m_bXFade = 0x2; // bool
                constexpr std::ptrdiff_t m_bNoBlend = 0x3; // bool
                constexpr std::ptrdiff_t m_bLocal = 0x4; // bool
                constexpr std::ptrdiff_t m_bPose = 0x5; // bool
                constexpr std::ptrdiff_t m_bFetchFrame = 0x6; // bool
                constexpr std::ptrdiff_t m_bSubtract = 0x7; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimStateID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
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
            namespace CNmIDEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0xC; // CNmBitFlags
                constexpr std::ptrdiff_t m_eventIDs = 0x10; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace ModelBoneFlexDriver_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_boneNameToken = 0x8; // uint32
                constexpr std::ptrdiff_t m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CMorphData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
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
            // 
            namespace CFootPinningUpdateNode {
                constexpr std::ptrdiff_t m_poseOpFixedData = 0x78; // FootPinningPoseOpFixedData_t
                constexpr std::ptrdiff_t m_eTimingSource = 0xA8; // FootPinningTimingSource
                constexpr std::ptrdiff_t m_params = 0xB0; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_bResetChild = 0xC8; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CSeqPoseSetting {
                constexpr std::ptrdiff_t m_sPoseParameter = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_sAttachment = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_sReferenceSequence = 0x20; // CBufferString
                constexpr std::ptrdiff_t m_flValue = 0x30; // float32
                constexpr std::ptrdiff_t m_bX = 0x34; // bool
                constexpr std::ptrdiff_t m_bY = 0x35; // bool
                constexpr std::ptrdiff_t m_bZ = 0x36; // bool
                constexpr std::ptrdiff_t m_eType = 0x38; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace PulseGraphExecutionHistoryCursorDesc_t {
                constexpr std::ptrdiff_t vecAncestorCursorIDs = 0x0; // CUtlVector<PulseCursorID_t>
                constexpr std::ptrdiff_t nSpawnNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t nRetiredAtNodeID = 0x1C; // PulseDocNodeID_t
                constexpr std::ptrdiff_t flLastReferenced = 0x20; // float32
                constexpr std::ptrdiff_t nLastValidEntryIdx = 0x24; // int32
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
            namespace CNmVirtualParameterFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CAttachment {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_influenceNames = 0x8; // CUtlString[3]
                constexpr std::ptrdiff_t m_vInfluenceRotations = 0x20; // Quaternion[3]
                constexpr std::ptrdiff_t m_vInfluenceOffsets = 0x50; // Vector[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x74; // float32[3]
                constexpr std::ptrdiff_t m_bInfluenceRootTransform = 0x80; // bool[3]
                constexpr std::ptrdiff_t m_nInfluences = 0x83; // uint8
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x84; // bool
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
            namespace CSequenceUpdateNodeBase {
                constexpr std::ptrdiff_t m_playbackSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x70; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CDrawCullingData {
                constexpr std::ptrdiff_t m_ConeAxis = 0x0; // int8[3]
                constexpr std::ptrdiff_t m_ConeCutoff = 0x3; // int8
            }
            // Parent: None
            // Fields count: 30
            //
            // Metadata:
            // ���x.
            namespace VPhysXJoint_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // uint16
                constexpr std::ptrdiff_t m_nBody1 = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBody2 = 0x4; // uint16
                constexpr std::ptrdiff_t m_nFlags = 0x6; // uint16
                constexpr std::ptrdiff_t m_Frame1 = 0x10; // CTransform
                constexpr std::ptrdiff_t m_Frame2 = 0x30; // CTransform
                constexpr std::ptrdiff_t m_bEnableCollision = 0x50; // bool
                constexpr std::ptrdiff_t m_bIsLinearConstraintDisabled = 0x51; // bool
                constexpr std::ptrdiff_t m_bIsAngularConstraintDisabled = 0x52; // bool
                constexpr std::ptrdiff_t m_bEnableLinearLimit = 0x53; // bool
                constexpr std::ptrdiff_t m_LinearLimit = 0x54; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableLinearMotor = 0x5C; // bool
                constexpr std::ptrdiff_t m_vLinearTargetVelocity = 0x60; // Vector
                constexpr std::ptrdiff_t m_flMaxForce = 0x6C; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x70; // bool
                constexpr std::ptrdiff_t m_SwingLimit = 0x74; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x7C; // bool
                constexpr std::ptrdiff_t m_TwistLimit = 0x80; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableAngularMotor = 0x88; // bool
                constexpr std::ptrdiff_t m_vAngularTargetVelocity = 0x8C; // Vector
                constexpr std::ptrdiff_t m_flMaxTorque = 0x98; // float32
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x9C; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAngularFrequency = 0xA4; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0xA8; // float32
                constexpr std::ptrdiff_t m_flFriction = 0xAC; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0xB0; // float32
                constexpr std::ptrdiff_t m_flElasticDamping = 0xB4; // float32
                constexpr std::ptrdiff_t m_flPlasticity = 0xB8; // float32
                constexpr std::ptrdiff_t m_Tag = 0xC0; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CStateNodeTransitionData {
                constexpr std::ptrdiff_t m_curve = 0x0; // CBlendCurve
                constexpr std::ptrdiff_t m_blendDuration = 0x8; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_resetCycleValue = 0x10; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_bReset = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_resetCycleOption = 0x0; // bitfield:3
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
            // 
            namespace CTimeRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x50; // bool
                constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x58; // bool
                constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x5C; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            namespace CParticleInput {
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
            namespace CModelConfigElement {
                constexpr std::ptrdiff_t m_ElementName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
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
            namespace CNmControlParameterVectorNode__CDefinition {
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace FootFixedSettings {
                constexpr std::ptrdiff_t m_traceSettings = 0x0; // TraceSettings_t
                constexpr std::ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_flFootBaseLength = 0x20; // float32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28; // float32
                constexpr std::ptrdiff_t m_footstepLandedTagIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_bEnableTracing = 0x30; // bool
                constexpr std::ptrdiff_t m_flTraceAngleBlend = 0x34; // float32
                constexpr std::ptrdiff_t m_nDisableTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_nFootIndex = 0x3C; // int32
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
            // 
            namespace CNmBoneMaskSwitchNode__CDefinition {
                constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x10; // float32
                constexpr std::ptrdiff_t m_bSwitchDynamically = 0x14; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CModelConfig {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
                constexpr std::ptrdiff_t m_bTopLevel = 0x20; // bool
                constexpr std::ptrdiff_t m_bActiveInEditorByDefault = 0x21; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimComponentID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // ���x.
            namespace VPhysXAggregateData_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint16
                constexpr std::ptrdiff_t m_nRefCounter = 0x2; // uint16
                constexpr std::ptrdiff_t m_bonesHash = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneNames = 0x20; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_indexNames = 0x38; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_indexHash = 0x50; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
                constexpr std::ptrdiff_t m_shapeMarkups = 0x98; // CUtlVector<PhysShapeMarkup_t>
                constexpr std::ptrdiff_t m_constraints2 = 0xB0; // CUtlVector<VPhysXConstraint2_t>
                constexpr std::ptrdiff_t m_joints = 0xC8; // CUtlVector<VPhysXJoint_t>
                constexpr std::ptrdiff_t m_pFeModel = 0xE0; // PhysFeModelDesc_t*
                constexpr std::ptrdiff_t m_boneParents = 0xE8; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_surfacePropertyHashes = 0x100; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_collisionAttributes = 0x118; // CUtlVector<VPhysXCollisionAttributes_t>
                constexpr std::ptrdiff_t m_debugPartNames = 0x130; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_embeddedKeyvalues = 0x148; // CUtlString
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            namespace CNmGraphDefinition {
                constexpr std::ptrdiff_t m_variationID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_pUserData = 0x10; // CNmGraphVariationUserData*
                constexpr std::ptrdiff_t m_persistentNodeIndices = 0x18; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_nRootNodeIdx = 0x30; // int16
                constexpr std::ptrdiff_t m_controlParameterIDs = 0x38; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_virtualParameterIDs = 0x50; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_virtualParameterNodeIndices = 0x68; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_referencedGraphSlots = 0x80; // CUtlVector<CNmGraphDefinition::ReferencedGraphSlot_t>
                constexpr std::ptrdiff_t m_externalGraphSlots = 0x98; // CUtlVector<CNmGraphDefinition::ExternalGraphSlot_t>
                constexpr std::ptrdiff_t m_externalPoseSlots = 0xB0; // CUtlVector<CNmGraphDefinition::ExternalPoseSlot_t>
                constexpr std::ptrdiff_t m_nodePaths = 0x138; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_resources = 0x150; // CUtlVector<CStrongHandleVoid>
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
            namespace CNmSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            namespace CAnimDemoCaptureSettings {
                constexpr std::ptrdiff_t m_vecErrorRangeSplineRotation = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeSplineTranslation = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeSplineScale = 0x10; // Vector2D
                constexpr std::ptrdiff_t m_flIkRotation_MaxSplineError = 0x18; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1C; // float32
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationRotation = 0x20; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationTranslation = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationScale = 0x30; // Vector2D
                constexpr std::ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x38; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x3C; // float32
                constexpr std::ptrdiff_t m_baseSequence = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_nBaseSequenceFrame = 0x48; // int32
                constexpr std::ptrdiff_t m_boneSelectionMode = 0x4C; // EDemoBoneSelectionMode
                constexpr std::ptrdiff_t m_bones = 0x50; // CUtlVector<BoneDemoCaptureSettings_t>
                constexpr std::ptrdiff_t m_ikChains = 0x68; // CUtlVector<IKDemoCaptureSettings_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace IKDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_parentBoneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_eMode = 0x8; // IKChannelMode
                constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneStart = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneEnd = 0x20; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CSeqMultiFetchFlag {
                constexpr std::ptrdiff_t m_bRealtime = 0x0; // bool
                constexpr std::ptrdiff_t m_bCylepose = 0x1; // bool
                constexpr std::ptrdiff_t m_b0D = 0x2; // bool
                constexpr std::ptrdiff_t m_b1D = 0x3; // bool
                constexpr std::ptrdiff_t m_b2D = 0x4; // bool
                constexpr std::ptrdiff_t m_b2D_TRI = 0x5; // bool
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
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_InparamsWhichCanBeMoved = 0x10; // CKV3MemberNameSet
                constexpr std::ptrdiff_t m_Outparams = 0x20; // KeyValues3
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace VPhysXRange_t {
                constexpr std::ptrdiff_t m_flMin = 0x0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x4; // float32
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
            // 
            namespace CStopAtGoalUpdateNode {
                constexpr std::ptrdiff_t m_flOuterRadius = 0x74; // float32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x78; // float32
                constexpr std::ptrdiff_t m_flMaxScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flMinScale = 0x80; // float32
                constexpr std::ptrdiff_t m_damping = 0x88; // CAnimInputDamping
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
            namespace CNmIDEventPercentageThroughNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0xC; // CNmBitFlags
                constexpr std::ptrdiff_t m_eventID = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimBoneDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_parent = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_posError = 0x20; // Vector
                constexpr std::ptrdiff_t m_bHasRotation = 0x2C; // bool
                constexpr std::ptrdiff_t m_bHasMovement = 0x2D; // bool
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
            namespace CNmCachedBoolNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_mode = 0xC; // NmCachedValueMode_t
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
            namespace CAnimCycle {
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
            namespace CActionComponentUpdater {
                constexpr std::ptrdiff_t m_actions = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
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
            // 
            namespace CDampedPathAnimMotorUpdater {
                constexpr std::ptrdiff_t m_flAnticipationTime = 0x20; // float32
                constexpr std::ptrdiff_t m_flMinSpeedScale = 0x24; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x28; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x2A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flSpringConstant = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMinSpringTension = 0x30; // float32
                constexpr std::ptrdiff_t m_flMaxSpringTension = 0x34; // float32
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
            namespace CNmCachedFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_mode = 0xC; // NmCachedValueMode_t
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
            // 
            namespace CNmFloatSwitchNode__CDefinition {
                constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_flFalseValue = 0x10; // float32
                constexpr std::ptrdiff_t m_flTrueValue = 0x14; // float32
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
            namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
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
            namespace CNmEntityAttributeEventBase {
                constexpr std::ptrdiff_t m_attributeName = 0x20; // CUtlString
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
            namespace CNmVirtualParameterBoneMaskNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
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
            namespace CPathHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStoppingRadius = 0x70; // float32
                constexpr std::ptrdiff_t m_flStoppingSpeedScale = 0x74; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace MaterialGroup_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CMorphBundleData {
                constexpr std::ptrdiff_t m_flULeftSrc = 0x0; // float32
                constexpr std::ptrdiff_t m_flVTopSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_offsets = 0x8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_ranges = 0x20; // CUtlVector<float32>
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
            namespace CModelConfigElement_UserPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CSolveIKTargetHandle_t {
                constexpr std::ptrdiff_t m_positionHandle = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_orientationHandle = 0x2; // CAnimParamHandle
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
            namespace CFootAdjustmentUpdateNode {
                constexpr std::ptrdiff_t m_clips = 0x78; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hBasePoseCacheHandle = 0x90; // CPoseHandle
                constexpr std::ptrdiff_t m_facingTarget = 0x94; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnTimeMin = 0x98; // float32
                constexpr std::ptrdiff_t m_flTurnTimeMax = 0x9C; // float32
                constexpr std::ptrdiff_t m_flStepHeightMax = 0xA0; // float32
                constexpr std::ptrdiff_t m_flStepHeightMaxAngle = 0xA4; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0xA8; // bool
                constexpr std::ptrdiff_t m_bAnimationDriven = 0xA9; // bool
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
            namespace CChoreoUpdateNode {
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
            namespace CAimConstraint {
                constexpr std::ptrdiff_t m_qAimOffset = 0x60; // Quaternion
                constexpr std::ptrdiff_t m_nUpType = 0x70; // uint32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CMaterialDrawDescriptor__RigidMeshPart_t {
                constexpr std::ptrdiff_t m_nRigidBLASIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_nBoneIndex = 0x2; // int16
                constexpr std::ptrdiff_t m_nStartIndexOffset = 0x4; // uint32
                constexpr std::ptrdiff_t m_nPrimitiveCount = 0x8; // uint32
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
            namespace CFootFallAnimTag {
                constexpr std::ptrdiff_t m_foot = 0x58; // FootFallTagFoot_t
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // ���x.
            namespace CMaterialDrawDescriptor {
                constexpr std::ptrdiff_t m_flUvDensity = 0x0; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x4; // Vector
                constexpr std::ptrdiff_t m_flAlpha = 0x10; // float32
                constexpr std::ptrdiff_t m_nNumMeshlets = 0x16; // uint16
                constexpr std::ptrdiff_t m_nFirstMeshlet = 0x1C; // uint32
                constexpr std::ptrdiff_t m_nAppliedIndexOffset = 0x20; // uint32
                constexpr std::ptrdiff_t m_nDepthVertexBufferIndex = 0x24; // uint8
                constexpr std::ptrdiff_t m_nMeshletPackedIVBIndex = 0x25; // uint8
                constexpr std::ptrdiff_t m_rigidMeshParts = 0x28; // CUtlLeanVector<CMaterialDrawDescriptor::RigidMeshPart_t>
                constexpr std::ptrdiff_t m_nPrimitiveType = 0x38; // RenderPrimitiveType_t
                constexpr std::ptrdiff_t m_nBaseVertex = 0x3C; // int32
                constexpr std::ptrdiff_t m_nVertexCount = 0x40; // int32
                constexpr std::ptrdiff_t m_nStartIndex = 0x44; // int32
                constexpr std::ptrdiff_t m_nIndexCount = 0x48; // int32
                constexpr std::ptrdiff_t m_indexBuffer = 0xB0; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_meshletPackedIVB = 0xD0; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_material = 0x100; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace CNmSkeleton {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_boneIDs = 0x8; // CUtlLeanVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_parentIndices = 0x18; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_parentSpaceReferencePose = 0x30; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceReferencePose = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_numBonesToSampleAtLowLOD = 0x60; // int32
                constexpr std::ptrdiff_t m_maskDefinitions = 0x88; // CUtlLeanVector<NmBoneMaskSetDefinition_t>
                constexpr std::ptrdiff_t m_secondarySkeletons = 0xA8; // CUtlLeanVector<CNmSkeleton::SecondarySkeleton_t>
                constexpr std::ptrdiff_t m_bIsPropSkeleton = 0xB8; // bool
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
            namespace CStepsRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x68; // float32
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
            namespace CNmVelocityBlendNode__CDefinition {
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
            namespace CNmZeroPoseTask {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CBodyGroupSetting {
                constexpr std::ptrdiff_t m_BodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nBodyGroupOption = 0x8; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CVectorQuantizer {
                constexpr std::ptrdiff_t m_centroidVectors = 0x0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nCentroids = 0x18; // int32
                constexpr std::ptrdiff_t m_nDimensions = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace ParticleNamedValueConfiguration_t {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ConfigValue = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_BoundValuePath = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_iAttachType = 0x20; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_strEntityScope = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strAttachmentName = 0x30; // CUtlString
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
            // 
            namespace CNmVectorCreateNode__CDefinition {
                constexpr std::ptrdiff_t m_inputVectorValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_inputValueXNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_inputValueYNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_inputValueZNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Fields count: 23
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
            namespace CParticleVecInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleVecType_t
                constexpr std::ptrdiff_t m_vLiteralValue = 0x10; // Vector
                constexpr std::ptrdiff_t m_LiteralColor = 0x1C; // Color
                constexpr std::ptrdiff_t m_NamedValue = 0x20; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_bFollowNamedValue = 0x60; // bool
                constexpr std::ptrdiff_t m_nVectorAttribute = 0x64; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vVectorAttributeScale = 0x68; // Vector
                constexpr std::ptrdiff_t m_nControlPoint = 0x74; // int32
                constexpr std::ptrdiff_t m_nDeltaControlPoint = 0x78; // int32
                constexpr std::ptrdiff_t m_vCPValueScale = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vCPRelativePosition = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCPRelativeDir = 0x94; // Vector
                constexpr std::ptrdiff_t m_FloatComponentX = 0xA0; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatComponentY = 0x208; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatComponentZ = 0x370; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatInterp = 0x4D8; // CParticleFloatInput
                constexpr std::ptrdiff_t m_flInterpInput0 = 0x640; // float32
                constexpr std::ptrdiff_t m_flInterpInput1 = 0x644; // float32
                constexpr std::ptrdiff_t m_vInterpOutput0 = 0x648; // Vector
                constexpr std::ptrdiff_t m_vInterpOutput1 = 0x654; // Vector
                constexpr std::ptrdiff_t m_Gradient = 0x660; // CColorGradient
                constexpr std::ptrdiff_t m_vRandomMin = 0x678; // Vector
                constexpr std::ptrdiff_t m_vRandomMax = 0x684; // Vector
            }
            // Parent: None
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
            // 
            namespace CNmStateNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_entryEvents = 0x10; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                constexpr std::ptrdiff_t m_executeEvents = 0x30; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                constexpr std::ptrdiff_t m_exitEvents = 0x50; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                constexpr std::ptrdiff_t m_timedRemainingEvents = 0x70; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
                constexpr std::ptrdiff_t m_timedElapsedEvents = 0x88; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
                constexpr std::ptrdiff_t m_nLayerWeightNodeIdx = 0xA0; // int16
                constexpr std::ptrdiff_t m_nLayerRootMotionWeightNodeIdx = 0xA2; // int16
                constexpr std::ptrdiff_t m_nLayerBoneMaskNodeIdx = 0xA4; // int16
                constexpr std::ptrdiff_t m_bIsOffState = 0xA6; // bool
                constexpr std::ptrdiff_t m_bUseActualElapsedTimeInStateForTimedEvents = 0xA7; // bool
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
            // 
            namespace CNmBoneMaskSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_defaultMaskNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_parameterValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_bSwitchDynamically = 0xE; // bool
                constexpr std::ptrdiff_t m_maskNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,7>
                constexpr std::ptrdiff_t m_parameterValues = 0x38; // CUtlVectorFixedGrowable<CGlobalSymbol,7>
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x88; // float32
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
            namespace CNmVirtualParameterVectorNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
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
            namespace CFootCycleMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
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
            namespace CNmConstIDNode__CDefinition {
                constexpr std::ptrdiff_t m_value = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            namespace CHitBox {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_sBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vMinBounds = 0x18; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x24; // Vector
                constexpr std::ptrdiff_t m_flShapeRadius = 0x30; // float32
                constexpr std::ptrdiff_t m_nBoneNameHash = 0x34; // uint32
                constexpr std::ptrdiff_t m_nGroupId = 0x38; // int32
                constexpr std::ptrdiff_t m_nShapeType = 0x3C; // uint8
                constexpr std::ptrdiff_t m_bTranslationOnly = 0x3D; // bool
                constexpr std::ptrdiff_t m_CRC = 0x40; // uint32
                constexpr std::ptrdiff_t m_cRenderColor = 0x44; // Color
                constexpr std::ptrdiff_t m_nHitBoxIndex = 0x48; // uint16
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
            // 
            namespace CNmParameterizedSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_optionWeights = 0x28; // CUtlLeanVectorFixedGrowable<uint8,5>
                constexpr std::ptrdiff_t m_parameterNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x3A; // bool
                constexpr std::ptrdiff_t m_bHasWeightsSet = 0x3B; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace ModelSkeletonData_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nParent = 0x18; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_boneSphere = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFlag = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_bonePosParent = 0x60; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
                constexpr std::ptrdiff_t m_boneScaleParent = 0x90; // CUtlVector<float32>
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
            namespace CNmEvent {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // NmPercent_t
                constexpr std::ptrdiff_t m_flDuration = 0xC; // NmPercent_t
                constexpr std::ptrdiff_t m_syncID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bClientOnly = 0x18; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace NmCompressionSettings_t__QuantizationRange_t {
                constexpr std::ptrdiff_t m_flRangeStart = 0x0; // float32
                constexpr std::ptrdiff_t m_flRangeLength = 0x4; // float32
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
            namespace CNmBlendTaskBase {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace TagSpan_t {
                constexpr std::ptrdiff_t m_tagIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_startCycle = 0x4; // float32
                constexpr std::ptrdiff_t m_endCycle = 0x8; // float32
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
            namespace CNmConstTargetNode__CDefinition {
                constexpr std::ptrdiff_t m_value = 0x10; // CNmTarget
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CRemapValueUpdateItem {
                constexpr std::ptrdiff_t m_hParamIn = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParamOut = 0x2; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flMinInputValue = 0x4; // float32
                constexpr std::ptrdiff_t m_flMaxInputValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flMinOutputValue = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxOutputValue = 0x10; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace PermModelDataAnimatedMaterialAttribute_t {
                constexpr std::ptrdiff_t m_AttributeName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNumChannels = 0x8; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CMotionDataSet {
                constexpr std::ptrdiff_t m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
                constexpr std::ptrdiff_t m_nDimensionCount = 0x18; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CProductQuantizer {
                constexpr std::ptrdiff_t m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
                constexpr std::ptrdiff_t m_nDimensions = 0x18; // int32
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
            namespace CChoiceUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_weights = 0x78; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendTimes = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_choiceMethod = 0xA8; // ChoiceMethod
                constexpr std::ptrdiff_t m_choiceChangeMethod = 0xAC; // ChoiceChangeMethod
                constexpr std::ptrdiff_t m_blendMethod = 0xB0; // ChoiceBlendMethod
                constexpr std::ptrdiff_t m_blendTime = 0xB4; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0xB8; // bool
                constexpr std::ptrdiff_t m_bResetChosen = 0xB9; // bool
                constexpr std::ptrdiff_t m_bDontResetSameSelection = 0xBA; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace SkeletonAnimCapture_t__Bone_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_BindPose = 0x10; // CTransform
                constexpr std::ptrdiff_t m_nParent = 0x30; // int32
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
            namespace CExpressionActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_hScript = 0x1C; // AnimScriptHandle
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
            // 
            namespace CNmFloatMathNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdxA = 0xA; // int16
                constexpr std::ptrdiff_t m_nInputValueNodeIdxB = 0xC; // int16
                constexpr std::ptrdiff_t m_bReturnAbsoluteResult = 0xE; // bool
                constexpr std::ptrdiff_t m_bReturnNegatedResult = 0xF; // bool
                constexpr std::ptrdiff_t m_operator = 0x10; // CNmFloatMathNode::Operator_t
                constexpr std::ptrdiff_t m_flValueB = 0x14; // float32
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
            // 
            namespace CAnimationGraphVisualizerLine {
                constexpr std::ptrdiff_t m_vWsPositionStart = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsPositionEnd = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x60; // Color
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
            namespace CCycleControlUpdateNode {
                constexpr std::ptrdiff_t m_valueSource = 0x70; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x74; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x76; // bool
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
            namespace CNmTargetInfoNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_infoType = 0xC; // CNmTargetInfoNode::Info_t
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x10; // bool
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
            namespace CDampedValueComponentUpdater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
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
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBaseConstraint {
                constexpr std::ptrdiff_t m_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_vUpVector = 0x28; // Vector
                constexpr std::ptrdiff_t m_slaves = 0x38; // CUtlLeanVector<CConstraintSlave>
                constexpr std::ptrdiff_t m_targets = 0x48; // CUtlVector<CConstraintTarget>
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
            namespace CNmControlParameterFloatNode__CDefinition {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace BlendItem_t {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pChild = 0x18; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hSequence = 0x28; // HSequence
                constexpr std::ptrdiff_t m_vPos = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_flDuration = 0x34; // float32
                constexpr std::ptrdiff_t m_bUseCustomDuration = 0x38; // bool
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
            namespace CNmIsExternalGraphSlotFilledNode__CDefinition {
                constexpr std::ptrdiff_t m_nExternalGraphNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 33
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
            namespace CNewParticleEffect {
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
                constexpr std::ptrdiff_t m_bSuppressScreenSpaceEffect = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSave = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldCheckFoW = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsAsyncCreate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bFreezeTransitionActive = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bFreezeTargetState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bCanFreeze = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_vSortOrigin = 0x40; // Vector
                constexpr std::ptrdiff_t m_flScale = 0x4C; // float32
                constexpr std::ptrdiff_t m_hOwner = 0x50; // PARTICLE_EHANDLE__*
                constexpr std::ptrdiff_t m_pOwningParticleProperty = 0x58; // CParticleProperty*
                constexpr std::ptrdiff_t m_flFreezeTransitionStart = 0x70; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x74; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionOverride = 0x78; // float32
                constexpr std::ptrdiff_t m_LastMin = 0x7C; // Vector
                constexpr std::ptrdiff_t m_LastMax = 0x88; // Vector
                constexpr std::ptrdiff_t m_nSplitScreenUser = 0x94; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_vecAggregationCenter = 0x98; // Vector
                constexpr std::ptrdiff_t m_RefCount = 0xD0; // int32
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
            // 
            namespace CNmClipNode__CDefinition {
                constexpr std::ptrdiff_t m_nPlayInReverseValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nResetTimeValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_bSampleRootMotion = 0xE; // bool
                constexpr std::ptrdiff_t m_bAllowLooping = 0xF; // bool
                constexpr std::ptrdiff_t m_nDataSlotIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_graphEvents = 0x18; // CUtlVectorFixedGrowable<CGlobalSymbol,2>
                constexpr std::ptrdiff_t m_flSpeedMultiplier = 0x40; // float32
                constexpr std::ptrdiff_t m_nStartSyncEventOffset = 0x44; // int32
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
            // 
            namespace CNmMaterialAttributeEvent {
                constexpr std::ptrdiff_t m_attributeName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_attributeNameToken = 0x28; // CUtlStringToken
                constexpr std::ptrdiff_t m_x = 0x30; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_y = 0x70; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_z = 0xB0; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_w = 0xF0; // CPiecewiseCurve
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
            namespace CNmBlend1DNode__CDefinition {
                constexpr std::ptrdiff_t m_parameterization = 0x40; // CNmParameterizedBlendNode::Parameterization_t
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
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CConcreteAnimParameter {
                constexpr std::ptrdiff_t m_previewButton = 0x6C; // AnimParamButton_t
                constexpr std::ptrdiff_t m_eNetworkSetting = 0x70; // AnimParamNetworkSetting
                constexpr std::ptrdiff_t m_bUseMostRecentValue = 0x74; // bool
                constexpr std::ptrdiff_t m_bAutoReset = 0x75; // bool
                constexpr std::ptrdiff_t m_bGameWritable = 0x76; // bool
                constexpr std::ptrdiff_t m_bGraphWritable = 0x77; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmBoneWeightList {
                constexpr std::ptrdiff_t m_skeletonName = 0x0; // CResourceName
                constexpr std::ptrdiff_t m_boneIDs = 0xE0; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weights = 0xF8; // CUtlVector<float32>
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
            namespace CPairedSequenceUpdateNode {
                constexpr std::ptrdiff_t m_sPairedSequenceRole = 0x78; // CGlobalSymbol
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
            namespace CModelConfigElement_RandomPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ChoiceWeights = 0x60; // CUtlVector<float32>
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
            namespace CNmReferencePoseTask {
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
            namespace CNmScaleNode__CDefinition {
                constexpr std::ptrdiff_t m_nMaskNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nEnableNodeIdx = 0xE; // int16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace VPhysXConstraint2_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_nParent = 0x4; // uint16
                constexpr std::ptrdiff_t m_nChild = 0x6; // uint16
                constexpr std::ptrdiff_t m_params = 0x8; // VPhysXConstraintParams_t
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CConstraintTarget {
                constexpr std::ptrdiff_t m_qOffset = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vOffset = 0x30; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x3C; // uint32
                constexpr std::ptrdiff_t m_sName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_bIsAttachment = 0x59; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace SkeletonAnimCapture_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x0; // CEntityIndex
                constexpr std::ptrdiff_t m_nEntParent = 0x4; // CEntityIndex
                constexpr std::ptrdiff_t m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
                constexpr std::ptrdiff_t m_ModelName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_CaptureName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_nFlexControllers = 0x60; // int32
                constexpr std::ptrdiff_t m_bPredicted = 0x64; // bool
                constexpr std::ptrdiff_t m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CAnimUser {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nType = 0x10; // int32
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
            namespace CRagdollComponentUpdater {
                constexpr std::ptrdiff_t m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
                constexpr std::ptrdiff_t m_followAttachmentNodePaths = 0x48; // CUtlVector<CAnimNodePath>
                constexpr std::ptrdiff_t m_boneIndices = 0x60; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_boneNames = 0x78; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_weightLists = 0x90; // CUtlVector<WeightList>
                constexpr std::ptrdiff_t m_boneToWeightIndices = 0xA8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0xC0; // float32
                constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0xC4; // float32
                constexpr std::ptrdiff_t m_flMaxStretch = 0xC8; // float32
                constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0xCC; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace ParticleNamedValueSource_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_IsPublic = 0x8; // bool
                constexpr std::ptrdiff_t m_ValueType = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultConfig = 0x28; // ParticleNamedValueConfiguration_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace CFootDefinition {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ankleBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_toeBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x18; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x24; // Vector
                constexpr std::ptrdiff_t m_flFootLength = 0x30; // float32
                constexpr std::ptrdiff_t m_flBindPoseDirectionMS = 0x34; // float32
                constexpr std::ptrdiff_t m_flTraceHeight = 0x38; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CSeqSynthAnimDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
                constexpr std::ptrdiff_t m_nLocalBaseReference = 0x24; // int16
                constexpr std::ptrdiff_t m_nLocalBoneMask = 0x26; // int16
                constexpr std::ptrdiff_t m_activityArray = 0x28; // CUtlVector<CAnimActivity>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CNmLayerBlendNode__LayerDefinition_t {
                constexpr std::ptrdiff_t m_nInputNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_nWeightValueNodeIdx = 0x2; // int16
                constexpr std::ptrdiff_t m_nBoneMaskValueNodeIdx = 0x4; // int16
                constexpr std::ptrdiff_t m_nRootMotionWeightValueNodeIdx = 0x6; // int16
                constexpr std::ptrdiff_t m_bIsSynchronized = 0x8; // bool
                constexpr std::ptrdiff_t m_bIgnoreEvents = 0x9; // bool
                constexpr std::ptrdiff_t m_bIsStateMachineLayer = 0xA; // bool
                constexpr std::ptrdiff_t m_blendMode = 0xB; // NmPoseBlendMode_t
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
            namespace CAnimComponentUpdater {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimComponentID
                constexpr std::ptrdiff_t m_networkMode = 0x24; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_bStartEnabled = 0x28; // bool
            }
            // Parent: None
            // Fields count: 15
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
            namespace CBlend2DUpdateNode {
                constexpr std::ptrdiff_t m_items = 0x60; // CUtlVector<BlendItem_t>
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_paramSpans = 0x90; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_nodeItemIndices = 0xA8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_damping = 0xC0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSourceX = 0xD8; // AnimValueSource
                constexpr std::ptrdiff_t m_paramX = 0xDC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_blendSourceY = 0xE0; // AnimValueSource
                constexpr std::ptrdiff_t m_paramY = 0xE4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eBlendMode = 0xE8; // Blend2DMode
                constexpr std::ptrdiff_t m_playbackSpeed = 0xEC; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xF0; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xF1; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xF2; // bool
                constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xF3; // bool
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
            namespace CNmVelocityBasedSpeedScaleNode__CDefinition {
            }
            // Parent: 
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CNPCPhysicsHull {
                constexpr std::ptrdiff_t m_sName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eType = 0x8; // NPCPhysicsHullType_t
                constexpr std::ptrdiff_t m_flCapsuleHeight = 0xC; // float32
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0x10; // float32
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x14; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0x20; // Vector
                constexpr std::ptrdiff_t m_flGroundBoxHeight = 0x2C; // float32
                constexpr std::ptrdiff_t m_flGroundBoxWidth = 0x30; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace PermModelExtPart_t {
                constexpr std::ptrdiff_t m_Transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_Name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nParent = 0x28; // int32
                constexpr std::ptrdiff_t m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
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
            namespace CNmCachedIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_mode = 0xC; // NmCachedValueMode_t
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
            namespace CLeanMatrixUpdateNode {
                constexpr std::ptrdiff_t m_frameCorners = 0x5C; // int32[3][3]
                constexpr std::ptrdiff_t m_poses = 0x80; // CPoseHandle[9]
                constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSource = 0xC0; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0xC4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_verticalAxis = 0xC8; // Vector
                constexpr std::ptrdiff_t m_horizontalAxis = 0xD4; // Vector
                constexpr std::ptrdiff_t m_hSequence = 0xE0; // HSequence
                constexpr std::ptrdiff_t m_flMaxValue = 0xE4; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xE8; // int32
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
            namespace CSymbolAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // CGlobalSymbol
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
            // 
            namespace CNmFloatCurveEventNode__CDefinition {
                constexpr std::ptrdiff_t m_eventID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nDefaultNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_flDefaultValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_eventConditionRules = 0x20; // CNmBitFlags
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
            namespace IAnimationGraphInstance {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CNmStateMachineNode__TransitionDefinition_t {
                constexpr std::ptrdiff_t m_nTargetStateIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_nConditionNodeIdx = 0x2; // int16
                constexpr std::ptrdiff_t m_nTransitionNodeIdx = 0x4; // int16
                constexpr std::ptrdiff_t m_bCanBeForced = 0x6; // bool
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
            // 
            namespace CNmFloatSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_values = 0x38; // CUtlVectorFixedGrowable<float32,5>
                constexpr std::ptrdiff_t m_flDefaultValue = 0x68; // float32
                constexpr std::ptrdiff_t m_flEaseTime = 0x6C; // float32
                constexpr std::ptrdiff_t m_easingOp = 0x70; // NmEasingOperation_t
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
            namespace CTargetSelectorUpdateNode {
                constexpr std::ptrdiff_t m_eAngleMode = 0x60; // TargetSelectorAngleMode_t
                constexpr std::ptrdiff_t m_children = 0x68; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_hTargetPosition = 0x84; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetFacePositionParameter = 0x86; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParameter = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hDesiredMoveHeadingParameter = 0x8A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x8C; // bool
                constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x8D; // bool
                constexpr std::ptrdiff_t m_bEnablePhaseMatching = 0x8E; // bool
                constexpr std::ptrdiff_t m_flPhaseMatchingMaxRootMotionSkip = 0x90; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CHitBoxSetList {
                constexpr std::ptrdiff_t m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
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
            namespace CNmIsInactiveBranchConditionNode__CDefinition {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace MotionDBIndex {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CDirectPlaybackTagData {
                constexpr std::ptrdiff_t m_sequenceName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
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
            namespace CParticleCollectionVecInput {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmGraphEventConditionNode__Condition_t {
                constexpr std::ptrdiff_t m_eventID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eventTypeCondition = 0x8; // NmGraphEventTypeCondition_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmFloatRemapNode__RemapRange_t {
                constexpr std::ptrdiff_t m_flBegin = 0x0; // float32
                constexpr std::ptrdiff_t m_flEnd = 0x4; // float32
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
            namespace CNmCurrentSyncEventIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
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
            namespace CNmStateCompletedConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTransitionDurationOverrideNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x10; // float32
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
            namespace CNmTargetWarpEvent {
                constexpr std::ptrdiff_t m_rule = 0x19; // NmTargetWarpRule_t
                constexpr std::ptrdiff_t m_algorithm = 0x1A; // NmTargetWarpAlgorithm_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CParamSpanUpdater {
                constexpr std::ptrdiff_t m_spans = 0x0; // CUtlVector<ParamSpan_t>
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
            namespace CAnimActionUpdater {
            }
            // Parent: None
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
            // 
            namespace CParticleAnimTag {
                constexpr std::ptrdiff_t m_hParticleSystem = 0x58; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_particleSystemName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_configName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x70; // bool
                constexpr std::ptrdiff_t m_bAggregate = 0x71; // bool
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x72; // bool
                constexpr std::ptrdiff_t m_bTagEndStopIsInstant = 0x73; // bool
                constexpr std::ptrdiff_t m_attachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType = 0x80; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentCP1Name = 0x88; // CUtlString
                constexpr std::ptrdiff_t m_attachmentCP1Type = 0x90; // ParticleAttachment_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CCycleBase {
                constexpr std::ptrdiff_t m_flCycle = 0x0; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace FollowTargetOpFixedSettings_t {
                constexpr std::ptrdiff_t m_boneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_bBoneTarget = 0x4; // bool
                constexpr std::ptrdiff_t m_boneTargetIndex = 0x8; // int32
                constexpr std::ptrdiff_t m_bWorldCoodinateTarget = 0xC; // bool
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0xD; // bool
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
            // 
            namespace CNmIDSwitchNode__CDefinition {
                constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_falseValue = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_trueValue = 0x18; // CGlobalSymbol
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
            namespace CNmRootMotionEvent {
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x18; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace AnimationSnapshotBase_t {
                constexpr std::ptrdiff_t m_flRealTime = 0x0; // float32
                constexpr std::ptrdiff_t m_rootToWorld = 0x10; // matrix3x4a_t
                constexpr std::ptrdiff_t m_bBonesInWorldSpace = 0x40; // bool
                constexpr std::ptrdiff_t m_boneSetupMask = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneTransforms = 0x60; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_flexControllers = 0x78; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_SnapshotType = 0x90; // AnimationSnapshotType_t
                constexpr std::ptrdiff_t m_bHasDecodeDump = 0x94; // bool
                constexpr std::ptrdiff_t m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CNmIKEffector {
                constexpr std::ptrdiff_t m_nBodyIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x4; // bool
                constexpr std::ptrdiff_t m_vTargetPosition = 0x8; // Vector
                constexpr std::ptrdiff_t m_qTargetOrientation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_flWeight = 0x30; // float32
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
            namespace CEmitTagActionUpdater {
                constexpr std::ptrdiff_t m_nTagIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1C; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace DynamicMeshDeformParams_t {
                constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0; // float32
                constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4; // float32
                constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
                constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
                constexpr std::ptrdiff_t m_bSmoothNormalsAcrossUvSeams = 0xA; // bool
                constexpr std::ptrdiff_t m_bEnableEyeBulgeDeformation = 0xB; // bool
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
            // 
            namespace CNmTimeConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_sourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_flComparand = 0x10; // float32
                constexpr std::ptrdiff_t m_type = 0x14; // CNmTimeConditionNode::ComparisonType_t
                constexpr std::ptrdiff_t m_operator = 0x15; // CNmTimeConditionNode::Operator_t
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
            namespace CNmSyncEventIndexConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_triggerMode = 0xC; // CNmSyncEventIndexConditionNode::TriggerMode_t
                constexpr std::ptrdiff_t m_syncEventIdx = 0x10; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CAnimStateMachineUpdater {
                constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector<CStateUpdateData>
                constexpr std::ptrdiff_t m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
                constexpr std::ptrdiff_t m_startStateIndex = 0x50; // int32
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
            namespace CUnaryUpdateNode {
                constexpr std::ptrdiff_t m_pChildNode = 0x60; // CAnimUpdateNodeRef
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
            // 
            namespace CNmIDToFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_defaultValue = 0xC; // float32
                constexpr std::ptrdiff_t m_IDs = 0x10; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
                constexpr std::ptrdiff_t m_values = 0x40; // CUtlLeanVectorFixedGrowable<float32,5>
            }
            // Parent: None
            // Fields count: 17
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
            namespace CCompressorGroup {
                constexpr std::ptrdiff_t m_nTotalElementCount = 0x0; // int32
                constexpr std::ptrdiff_t m_szChannelClass = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_szVariableName = 0x20; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_nType = 0x38; // CUtlVector<fieldtype_t>
                constexpr std::ptrdiff_t m_nFlags = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_szGrouping = 0x68; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nCompressorIndex = 0x80; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_szElementNames = 0x98; // CUtlVector<CUtlVector<char*>>
                constexpr std::ptrdiff_t m_nElementUniqueID = 0xB0; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_nElementMask = 0xC8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_vectorCompressor = 0xF8; // CUtlVector<CCompressor<Vector>*>
                constexpr std::ptrdiff_t m_quaternionCompressor = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
                constexpr std::ptrdiff_t m_intCompressor = 0x128; // CUtlVector<CCompressor<int32>*>
                constexpr std::ptrdiff_t m_boolCompressor = 0x140; // CUtlVector<CCompressor<bool>*>
                constexpr std::ptrdiff_t m_colorCompressor = 0x158; // CUtlVector<CCompressor<Color>*>
                constexpr std::ptrdiff_t m_vector2DCompressor = 0x170; // CUtlVector<CCompressor<Vector2D>*>
                constexpr std::ptrdiff_t m_vector4DCompressor = 0x188; // CUtlVector<CCompressor<Vector4D>*>
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
            namespace CSelectorUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<int8>
                constexpr std::ptrdiff_t m_blendCurve = 0x94; // CBlendCurve
                constexpr std::ptrdiff_t m_flBlendTime = 0x9C; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_hParameter = 0xA4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_nTagIndex = 0xA8; // int32
                constexpr std::ptrdiff_t m_eTagBehavior = 0xAC; // SelectorTagBehavior_t
                constexpr std::ptrdiff_t m_bResetOnChange = 0xB0; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xB1; // bool
                constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xB2; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace NmPercent_t {
                constexpr std::ptrdiff_t m_flValue = 0x0; // float32
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
            namespace CStateMachineComponentUpdater {
                constexpr std::ptrdiff_t m_stateMachine = 0x30; // CAnimStateMachineUpdater
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CAnimUpdateNodeRef {
                constexpr std::ptrdiff_t m_nodeIndex = 0x8; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_TargetEntity = 0x10; // PulseSymbol_t
                constexpr std::ptrdiff_t m_TargetInput = 0x20; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Param = 0x30; // PulseSymbol_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace CPhysSurfaceProperties {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_baseNameHash = 0xC; // uint32
                constexpr std::ptrdiff_t m_bHidden = 0x18; // bool
                constexpr std::ptrdiff_t m_description = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
                constexpr std::ptrdiff_t m_vehicleParams = 0x40; // CPhysSurfacePropertiesVehicle
                constexpr std::ptrdiff_t m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
                constexpr std::ptrdiff_t m_audioParams = 0xA8; // CPhysSurfacePropertiesAudio
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
            namespace CNmBoneMaskValueNode__CDefinition {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CSeqPoseParamDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flStart = 0x10; // float32
                constexpr std::ptrdiff_t m_flEnd = 0x14; // float32
                constexpr std::ptrdiff_t m_flLoop = 0x18; // float32
                constexpr std::ptrdiff_t m_bLooping = 0x1C; // bool
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
            namespace CModelConfigElement_SetBodygroup {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CAnimMovement {
                constexpr std::ptrdiff_t endframe = 0x0; // int32
                constexpr std::ptrdiff_t motionflags = 0x4; // int32
                constexpr std::ptrdiff_t v0 = 0x8; // float32
                constexpr std::ptrdiff_t v1 = 0xC; // float32
                constexpr std::ptrdiff_t angle = 0x10; // float32
                constexpr std::ptrdiff_t vector = 0x14; // Vector
                constexpr std::ptrdiff_t position = 0x20; // Vector
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
            namespace CParticleRemapFloatInput {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace FollowAttachmentData {
                constexpr std::ptrdiff_t m_boneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_attachmentHandle = 0x4; // AttachmentHandle_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace FootStepTrigger {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nFootIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_triggerPhase = 0x1C; // StepPhase
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmSyncTrack__EventMarker_t {
                constexpr std::ptrdiff_t m_startTime = 0x0; // NmPercent_t
                constexpr std::ptrdiff_t m_ID = 0x8; // CGlobalSymbol
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
            // 
            namespace CPathMetricEvaluator {
                constexpr std::ptrdiff_t m_pathTimeSamples = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDistance = 0x68; // float32
                constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x6C; // bool
                constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x70; // float32
            }
            // Parent: None
            // Fields count: 20
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
            namespace CFootLockUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // FootLockPoseOpFixedSettings
                constexpr std::ptrdiff_t m_footSettings = 0xE0; // CUtlVector<FootFixedSettings>
                constexpr std::ptrdiff_t m_hipShiftDamping = 0xF8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_rootHeightDamping = 0x110; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flStrideCurveScale = 0x128; // float32
                constexpr std::ptrdiff_t m_flStrideCurveLimitScale = 0x12C; // float32
                constexpr std::ptrdiff_t m_flStepHeightIncreaseScale = 0x130; // float32
                constexpr std::ptrdiff_t m_flStepHeightDecreaseScale = 0x134; // float32
                constexpr std::ptrdiff_t m_flHipShiftScale = 0x138; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0x13C; // float32
                constexpr std::ptrdiff_t m_flMaxRootHeightOffset = 0x140; // float32
                constexpr std::ptrdiff_t m_flMinRootHeightOffset = 0x144; // float32
                constexpr std::ptrdiff_t m_flTiltPlanePitchSpringStrength = 0x148; // float32
                constexpr std::ptrdiff_t m_flTiltPlaneRollSpringStrength = 0x14C; // float32
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x150; // bool
                constexpr std::ptrdiff_t m_bApplyHipShift = 0x151; // bool
                constexpr std::ptrdiff_t m_bModulateStepHeight = 0x152; // bool
                constexpr std::ptrdiff_t m_bResetChild = 0x153; // bool
                constexpr std::ptrdiff_t m_bEnableVerticalCurvedPaths = 0x154; // bool
                constexpr std::ptrdiff_t m_bEnableRootHeightDamping = 0x155; // bool
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
            namespace CNmOrientationWarpEvent {
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
            namespace CNmIDValueNode__CDefinition {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace PulseGraphExecutionHistoryNodeDesc_t {
                constexpr std::ptrdiff_t strCellDesc = 0x0; // CBufferString
                constexpr std::ptrdiff_t strBindingName = 0x10; // PulseSymbol_t
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace JiggleBoneSettings_t {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flMaxTimeStep = 0x8; // float32
                constexpr std::ptrdiff_t m_flDamping = 0xC; // float32
                constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x10; // Vector
                constexpr std::ptrdiff_t m_vBoundsMinLS = 0x1C; // Vector
                constexpr std::ptrdiff_t m_eSimSpace = 0x28; // JiggleBoneSimSpace
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
            // 
            namespace CJumpHelperUpdateNode {
                constexpr std::ptrdiff_t m_hTargetParam = 0xB0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flOriginalJumpMovement = 0xB4; // Vector
                constexpr std::ptrdiff_t m_flOriginalJumpDuration = 0xC0; // float32
                constexpr std::ptrdiff_t m_flJumpStartCycle = 0xC4; // float32
                constexpr std::ptrdiff_t m_flJumpEndCycle = 0xC8; // float32
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0xCC; // JumpCorrectionMethod
                constexpr std::ptrdiff_t m_bTranslationAxis = 0xD0; // bool[3]
                constexpr std::ptrdiff_t m_bScaleSpeed = 0xD3; // bool
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
            namespace CNmControlParameterBoolNode__CDefinition {
            }
            // Parent: None
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
            // 
            namespace CNmChainLookatTask {
                constexpr std::ptrdiff_t m_nChainEndBoneIdx = 0x54; // int32
                constexpr std::ptrdiff_t m_nNumBonesInChain = 0x58; // int32
                constexpr std::ptrdiff_t m_chainForwardDir = 0x5C; // Vector
                constexpr std::ptrdiff_t m_flBlendWeight = 0x68; // float32
                constexpr std::ptrdiff_t m_flHorizontalAngleLimitDegrees = 0x6C; // float32
                constexpr std::ptrdiff_t m_flVerticalAngleLimitDegrees = 0x70; // float32
                constexpr std::ptrdiff_t m_lookatTarget = 0x74; // Vector
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x80; // bool
                constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0x81; // bool
                constexpr std::ptrdiff_t m_flHorizontalAngleDegrees = 0x84; // float32
                constexpr std::ptrdiff_t m_flVerticalAngleDegrees = 0x88; // float32
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // ���x.
            namespace FootLockPoseOpFixedSettings {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_hipDampingSettings = 0x18; // CAnimInputDamping
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32
                constexpr std::ptrdiff_t m_ikSolverType = 0x34; // IKSolverType
                constexpr std::ptrdiff_t m_bApplyTilt = 0x38; // bool
                constexpr std::ptrdiff_t m_bApplyHipDrop = 0x39; // bool
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x3A; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x3B; // bool
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x3C; // bool
                constexpr std::ptrdiff_t m_flMaxFootHeight = 0x40; // float32
                constexpr std::ptrdiff_t m_flExtensionScale = 0x44; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x48; // float32
                constexpr std::ptrdiff_t m_bEnableLockBreaking = 0x4C; // bool
                constexpr std::ptrdiff_t m_flLockBreakTolerance = 0x50; // float32
                constexpr std::ptrdiff_t m_flLockBlendTime = 0x54; // float32
                constexpr std::ptrdiff_t m_bEnableStretching = 0x58; // bool
                constexpr std::ptrdiff_t m_flMaxStretchAmount = 0x5C; // float32
                constexpr std::ptrdiff_t m_flStretchExtensionScale = 0x60; // float32
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
            namespace CBoneVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
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
            namespace CWarpSectionAnimTag {
                constexpr std::ptrdiff_t m_bWarpPosition = 0x49; // bool
                constexpr std::ptrdiff_t m_bWarpOrientation = 0x4A; // bool
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
            namespace CModelConfigElement_RandomColor {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CFootMotion {
                constexpr std::ptrdiff_t m_strides = 0x0; // CUtlVector<CFootStride>
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bAdditive = 0x20; // bool
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
            namespace CJiggleBoneUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // JiggleBoneSettingsList_t
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
            namespace CNmConstVectorNode__CDefinition {
                constexpr std::ptrdiff_t m_value = 0xC; // Vector
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace MoodAnimation_t {
                constexpr std::ptrdiff_t m_sName = 0x0; // CModelAnimNameWithDeltas
                constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
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
            namespace CLODComponentUpdater {
                constexpr std::ptrdiff_t m_nServerLOD = 0x30; // int32
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
            namespace CNmIsTargetSetNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CPhysSurfacePropertiesVehicle {
                constexpr std::ptrdiff_t m_wheelDrag = 0x0; // float32
                constexpr std::ptrdiff_t m_wheelFrictionScale = 0x4; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace CAnimDataChannelDesc {
                constexpr std::ptrdiff_t m_szChannelClass = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_szVariableName = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nFlags = 0x20; // int32
                constexpr std::ptrdiff_t m_nType = 0x24; // int32
                constexpr std::ptrdiff_t m_szGrouping = 0x28; // CBufferString
                constexpr std::ptrdiff_t m_szDescription = 0x38; // CBufferString
                constexpr std::ptrdiff_t m_szElementNameArray = 0x48; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_nElementIndexArray = 0x60; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nElementMaskArray = 0x78; // CUtlVector<uint32>
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
            namespace CPairedSequenceComponentUpdater {
            }
            // Parent: None
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
            // 
            namespace CNmParticleEvent {
                constexpr std::ptrdiff_t m_relevance = 0x1C; // CNmEventRelevance_t
                constexpr std::ptrdiff_t m_type = 0x20; // CNmParticleEvent::Type_t
                constexpr std::ptrdiff_t m_hParticleSystem = 0x28; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_tags = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_bStopImmediately = 0x38; // bool
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x39; // bool
                constexpr std::ptrdiff_t m_bPlayEndCap = 0x3A; // bool
                constexpr std::ptrdiff_t m_attachmentPoint0 = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType0 = 0x48; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentPoint1 = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType1 = 0x58; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_config = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_effectForConfig = 0x68; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CMorphRectData {
                constexpr std::ptrdiff_t m_nXLeftDst = 0x0; // int16
                constexpr std::ptrdiff_t m_nYTopDst = 0x2; // int16
                constexpr std::ptrdiff_t m_flUWidthSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_flVHeightSrc = 0x8; // float32
                constexpr std::ptrdiff_t m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimFoot {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x8; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_ankleBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_toeBoneIndex = 0x24; // int32
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
            namespace CParentConstraint {
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
            namespace CNmCachedVectorNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_mode = 0xC; // NmCachedValueMode_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmStateNode__TimedEvent_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flTimeValueSeconds = 0x8; // float32
                constexpr std::ptrdiff_t m_comparisionOperator = 0xC; // CNmStateNode::TimedEvent_t::Comparison_t
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
            namespace CFootPositionMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bIgnoreSlope = 0x68; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CParticleVariableRef {
                constexpr std::ptrdiff_t m_variableName = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_variableType = 0x38; // CPulseValueFullType
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
            namespace HSequence {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CDampedValueUpdateItem {
                constexpr std::ptrdiff_t m_damping = 0x0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_hParamIn = 0x20; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParamOut = 0x22; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CAnimLocalHierarchy {
                constexpr std::ptrdiff_t m_sBone = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_sNewParent = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nStartFrame = 0x20; // int32
                constexpr std::ptrdiff_t m_nPeakFrame = 0x24; // int32
                constexpr std::ptrdiff_t m_nTailFrame = 0x28; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0x2C; // int32
            }
            // Parent: None
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
            // 
            namespace CBlendUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_sortedOrder = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_targetValues = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendValueSource = 0xAC; // AnimValueSource
                constexpr std::ptrdiff_t m_eLinearRootMotionBlendMode = 0xB0; // LinearRootMotionBlendMode_t
                constexpr std::ptrdiff_t m_paramIndex = 0xB4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0xB8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendKeyType = 0xD0; // BlendKeyType
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xD4; // bool
                constexpr std::ptrdiff_t m_bSyncCycles = 0xD5; // bool
                constexpr std::ptrdiff_t m_bLoop = 0xD6; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xD7; // bool
                constexpr std::ptrdiff_t m_bIsAngle = 0xD8; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace PulseGraphExecutionHistoryEntry_t {
                constexpr std::ptrdiff_t nCursorID = 0x0; // PulseCursorID_t
                constexpr std::ptrdiff_t nEditorID = 0x4; // PulseDocNodeID_t
                constexpr std::ptrdiff_t flExecTime = 0x8; // float32
                constexpr std::ptrdiff_t unFlags = 0xC; // uint32
                constexpr std::ptrdiff_t tagName = 0x10; // PulseSymbol_t
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
            namespace CQuaternionAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_bInterpolate = 0x90; // bool
            }
            // Parent: None
            // Fields count: 25
            //
            // Metadata:
            // ���x.
            namespace PermModelData_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modelInfo = 0x8; // PermModelInfo_t
                constexpr std::ptrdiff_t m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
                constexpr std::ptrdiff_t m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
                constexpr std::ptrdiff_t m_refMeshGroupMasks = 0x90; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refLODGroupMasks = 0xC0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
                constexpr std::ptrdiff_t m_meshGroups = 0x150; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
                constexpr std::ptrdiff_t m_nDefaultMeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_modelSkeleton = 0x188; // ModelSkeletonData_t
                constexpr std::ptrdiff_t m_remappingTable = 0x230; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_remappingTableStarts = 0x248; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
                constexpr std::ptrdiff_t m_pModelConfigList = 0x278; // CModelConfigList*
                constexpr std::ptrdiff_t m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
                constexpr std::ptrdiff_t m_animGraph2Refs = 0x2C8; // CUtlVector<ModelAnimGraph2Ref_t>
                constexpr std::ptrdiff_t m_vecNmSkeletonRefs = 0x2E0; // CUtlVector<CStrongHandle<InfoForResourceTypeCNmSkeleton>>
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
            namespace PulseCursorYieldToken_t {
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
            namespace CNmSampleTask {
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
            namespace CStaticPoseCacheBuilder {
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace ModelMeshBufferData_t {
                constexpr std::ptrdiff_t m_nBlockIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nElementCount = 0x4; // uint32
                constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x8; // uint32
                constexpr std::ptrdiff_t m_bMeshoptCompressed = 0xC; // bool
                constexpr std::ptrdiff_t m_bMeshoptIndexSequence = 0xD; // bool
                constexpr std::ptrdiff_t m_bCompressedZSTD = 0xE; // bool
                constexpr std::ptrdiff_t m_bCreateBufferSRV = 0xF; // bool
                constexpr std::ptrdiff_t m_bCreateBufferUAV = 0x10; // bool
                constexpr std::ptrdiff_t m_bCreateRawBuffer = 0x11; // bool
                constexpr std::ptrdiff_t m_bCreatePooledBuffer = 0x12; // bool
                constexpr std::ptrdiff_t m_nBufferUsage = 0x13; // uint8
                constexpr std::ptrdiff_t m_inputLayoutFields = 0x18; // CUtlVector<RenderInputLayoutField_t>
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // ���x.
            namespace CSequenceGroupData {
                constexpr std::ptrdiff_t m_sName = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nFlags = 0x20; // uint32
                constexpr std::ptrdiff_t m_localSequenceNameArray = 0x28; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_localS1SeqDescArray = 0x40; // CUtlVector<CSeqS1SeqDesc>
                constexpr std::ptrdiff_t m_localMultiSeqDescArray = 0x58; // CUtlVector<CSeqS1SeqDesc>
                constexpr std::ptrdiff_t m_localSynthAnimDescArray = 0x70; // CUtlVector<CSeqSynthAnimDesc>
                constexpr std::ptrdiff_t m_localCmdSeqDescArray = 0x88; // CUtlVector<CSeqCmdSeqDesc>
                constexpr std::ptrdiff_t m_localBoneMaskArray = 0xA0; // CUtlVector<CSeqBoneMaskList>
                constexpr std::ptrdiff_t m_localScaleSetArray = 0xB8; // CUtlVector<CSeqScaleSet>
                constexpr std::ptrdiff_t m_localBoneNameArray = 0xD0; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_localNodeName = 0xE8; // CBufferString
                constexpr std::ptrdiff_t m_localPoseParamArray = 0xF8; // CUtlVector<CSeqPoseParamDesc>
                constexpr std::ptrdiff_t m_keyValues = 0x110; // KeyValues3
                constexpr std::ptrdiff_t m_localIKAutoplayLockArray = 0x120; // CUtlVector<CSeqIKLock>
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
            // 
            namespace CStateMachineUpdateNode {
                constexpr std::ptrdiff_t m_stateMachine = 0x70; // CAnimStateMachineUpdater
                constexpr std::ptrdiff_t m_stateData = 0xC8; // CUtlVector<CStateNodeStateData>
                constexpr std::ptrdiff_t m_transitionData = 0xE0; // CUtlVector<CStateNodeTransitionData>
                constexpr std::ptrdiff_t m_bBlockWaningTags = 0xFC; // bool
                constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0xFD; // bool
                constexpr std::ptrdiff_t m_bResetWhenActivated = 0xFE; // bool
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
            // 
            // 
            namespace CAimMatrixUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // AimMatrixOpFixedSettings_t
                constexpr std::ptrdiff_t m_target = 0x168; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0x16C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSequence = 0x170; // HSequence
                constexpr std::ptrdiff_t m_bResetChild = 0x174; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x175; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace SkeletonAnimCapture_t__Frame_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                constexpr std::ptrdiff_t m_Transform = 0x20; // CTransform
                constexpr std::ptrdiff_t m_bTeleport = 0x40; // bool
                constexpr std::ptrdiff_t m_CompositeBones = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_SimStateBones = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelAnims = 0x78; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
                constexpr std::ptrdiff_t m_FlexControllerWeights = 0xA8; // CUtlVector<float32>
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
            namespace CModelConfigElement_Command {
                constexpr std::ptrdiff_t m_Command = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x50; // KeyValues3
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CAnimEventDefinition {
                constexpr std::ptrdiff_t m_nFrame = 0x8; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0xC; // int32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x14; // float32
                constexpr std::ptrdiff_t m_EventData = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_sLegacyOptions = 0x28; // CBufferString
                constexpr std::ptrdiff_t m_sEventName = 0x38; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CNmRootMotionData {
                constexpr std::ptrdiff_t m_transforms = 0x0; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_nNumFrames = 0x18; // int32
                constexpr std::ptrdiff_t m_flAverageLinearVelocity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAverageAngularVelocityRadians = 0x20; // float32
                constexpr std::ptrdiff_t m_totalDelta = 0x30; // CTransform
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CPulseGraphExecutionHistory {
                constexpr std::ptrdiff_t m_nInstanceID = 0x0; // PulseGraphInstanceID_t
                constexpr std::ptrdiff_t m_strFileName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vecHistory = 0x10; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
                constexpr std::ptrdiff_t m_mapCellDesc = 0x28; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
                constexpr std::ptrdiff_t m_mapCursorDesc = 0x50; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimScriptHandle {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CFlexOp {
                constexpr std::ptrdiff_t m_OpCode = 0x0; // FlexOpCode_t
                constexpr std::ptrdiff_t m_Data = 0x4; // int32
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
            // 
            namespace CHitReactUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // HitReactFixedSettings_t
                constexpr std::ptrdiff_t m_triggerParam = 0xBC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitBoneParam = 0xBE; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitOffsetParam = 0xC0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitDirectionParam = 0xC2; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitStrengthParam = 0xC4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flMinDelayBetweenHits = 0xC8; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0xCC; // bool
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
            // 
            // 
            namespace CLookAtUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // LookAtOpFixedSettings_t
                constexpr std::ptrdiff_t m_target = 0x148; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0x14C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_weightParamIndex = 0x14E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bResetChild = 0x150; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x151; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CAnimBone {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_parent = 0x10; // int32
                constexpr std::ptrdiff_t m_pos = 0x14; // Vector
                constexpr std::ptrdiff_t m_quat = 0x20; // QuaternionStorage
                constexpr std::ptrdiff_t m_scale = 0x30; // float32
                constexpr std::ptrdiff_t m_qAlignment = 0x34; // QuaternionStorage
                constexpr std::ptrdiff_t m_flags = 0x44; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CAnimParameterManagerUpdater {
                constexpr std::ptrdiff_t m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                constexpr std::ptrdiff_t m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32>
                constexpr std::ptrdiff_t m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32>
                constexpr std::ptrdiff_t m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_autoResetParams = 0x88; // CUtlVector<std::pair<CAnimParamHandle,CAnimVariant>>
                constexpr std::ptrdiff_t m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace BoneDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flErrorSplineRotationMax = 0x8; // float32
                constexpr std::ptrdiff_t m_flErrorSplineTranslationMax = 0xC; // float32
                constexpr std::ptrdiff_t m_flErrorSplineScaleMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationRotationMax = 0x14; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationTranslationMax = 0x18; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationScaleMax = 0x1C; // float32
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
            namespace CBoneConstraintPoseSpaceMorph__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputWeightList = 0x10; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace MoodAnimationLayer_t {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bActiveListening = 0x8; // bool
                constexpr std::ptrdiff_t m_bActiveTalking = 0x9; // bool
                constexpr std::ptrdiff_t m_layerAnimations = 0x10; // CUtlVector<MoodAnimation_t>
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // CRangeFloat
                constexpr std::ptrdiff_t m_flDurationScale = 0x30; // CRangeFloat
                constexpr std::ptrdiff_t m_bScaleWithInts = 0x38; // bool
                constexpr std::ptrdiff_t m_flNextStart = 0x3C; // CRangeFloat
                constexpr std::ptrdiff_t m_flStartOffset = 0x44; // CRangeFloat
                constexpr std::ptrdiff_t m_flEndOffset = 0x4C; // CRangeFloat
                constexpr std::ptrdiff_t m_flFadeIn = 0x54; // float32
                constexpr std::ptrdiff_t m_flFadeOut = 0x58; // float32
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
            namespace CSpeedScaleUpdateNode {
                constexpr std::ptrdiff_t m_paramIndex = 0x70; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CSequenceTagSpans {
                constexpr std::ptrdiff_t m_sSequenceName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
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
            namespace CModelConfigElement_SetBodygroupOnAttachedModels {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
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
            namespace CCurrentVelocityMetricEvaluator {
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
            namespace CNmBoolValueNode__CDefinition {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimReplayFrame {
                constexpr std::ptrdiff_t m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
                constexpr std::ptrdiff_t m_instanceData = 0x28; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_startingLocalToWorldTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_localToWorldTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_timeStamp = 0x80; // float32
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
            namespace CNmTransitionEvent {
                constexpr std::ptrdiff_t m_rule = 0x19; // NmTransitionRule_t
                constexpr std::ptrdiff_t m_ID = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmIKRig {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_vecBodies = 0x8; // CUtlVector<CNmIKBody>
                constexpr std::ptrdiff_t m_vecJoints = 0x20; // CUtlVector<CNmIKJoint>
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
            namespace CNmFloatCurveEvent {
                constexpr std::ptrdiff_t m_ID = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_curve = 0x28; // CPiecewiseCurve
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
            // 
            namespace CParticleTransformInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleTransformType_t
                constexpr std::ptrdiff_t m_NamedValue = 0x10; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_bFollowNamedValue = 0x50; // bool
                constexpr std::ptrdiff_t m_bSupportsDisabled = 0x51; // bool
                constexpr std::ptrdiff_t m_bUseOrientation = 0x52; // bool
                constexpr std::ptrdiff_t m_nControlPoint = 0x54; // int32
                constexpr std::ptrdiff_t m_nControlPointRangeMax = 0x58; // int32
                constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0x5C; // float32
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
            namespace CPathAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_bLockToPath = 0x19; // bool
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace PGDInstruction_t {
                constexpr std::ptrdiff_t m_nCode = 0x0; // PulseInstructionCode_t
                constexpr std::ptrdiff_t m_nVar = 0x4; // PulseRuntimeVarIndex_t
                constexpr std::ptrdiff_t m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
                constexpr std::ptrdiff_t m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nDestInstruction = 0x18; // int32
                constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
                constexpr std::ptrdiff_t m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
                constexpr std::ptrdiff_t m_nDomainValueIdx = 0x22; // PulseRuntimeDomainValueIndex_t
                constexpr std::ptrdiff_t m_nBlackboardReferenceIdx = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
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
            namespace CNmFootstepEventPercentageThroughNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_phaseCondition = 0xC; // NmFootPhaseCondition_t
                constexpr std::ptrdiff_t m_eventConditionRules = 0x10; // CNmBitFlags
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace AimCameraOpFixedSettings_t {
                constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nCameraJointIndex = 0x4; // int32
                constexpr std::ptrdiff_t m_nPelvisJointIndex = 0x8; // int32
                constexpr std::ptrdiff_t m_nClavicleLeftJointIndex = 0xC; // int32
                constexpr std::ptrdiff_t m_nClavicleRightJointIndex = 0x10; // int32
                constexpr std::ptrdiff_t m_nDepenetrationJointIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_propJoints = 0x18; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace SkeletonAnimCapture_t__Camera_t {
                constexpr std::ptrdiff_t m_tmCamera = 0x0; // CTransform
                constexpr std::ptrdiff_t m_flTime = 0x20; // float32
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
            namespace CNmGraphEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0xC; // CNmBitFlags
                constexpr std::ptrdiff_t m_conditions = 0x10; // CUtlVectorFixedGrowable<CNmGraphEventConditionNode::Condition_t,5>
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
            namespace CFollowAttachmentUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // FollowAttachmentSettings_t
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
            // 
            namespace CMovementComponentUpdater {
                constexpr std::ptrdiff_t m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
                constexpr std::ptrdiff_t m_facingDamping = 0x48; // CAnimInputDamping
                constexpr std::ptrdiff_t m_nDefaultMotorIndex = 0x68; // int32
                constexpr std::ptrdiff_t m_flDefaultRunSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_bMoveVarsDisabled = 0x70; // bool
                constexpr std::ptrdiff_t m_bNetworkPath = 0x71; // bool
                constexpr std::ptrdiff_t m_bNetworkFacing = 0x72; // bool
                constexpr std::ptrdiff_t m_paramHandles = 0x73; // CAnimParamHandle[34]
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
            namespace CModelConfigElement_SetMaterialGroup {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
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
            namespace IParticleEffect {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CNmIKJoint {
                constexpr std::ptrdiff_t m_nParentIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nBodyIndex = 0x4; // int32
                constexpr std::ptrdiff_t m_xLocalFrame = 0x10; // CTransform
                constexpr std::ptrdiff_t m_flSwingLimit = 0x30; // float32
                constexpr std::ptrdiff_t m_flMinTwistLimit = 0x34; // float32
                constexpr std::ptrdiff_t m_flMaxTwistLimit = 0x38; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x3C; // float32
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
            namespace CFutureFacingMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flTime = 0x54; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace NmCompressionSettings_t {
                constexpr std::ptrdiff_t m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_constantRotation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_bIsRotationStatic = 0x30; // bool
                constexpr std::ptrdiff_t m_bIsTranslationStatic = 0x31; // bool
                constexpr std::ptrdiff_t m_bIsScaleStatic = 0x32; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultValue = 0x30; // KeyValues3
                constexpr std::ptrdiff_t m_nKeysSource = 0x44; // PulseVariableKeysSource_t
                constexpr std::ptrdiff_t m_bIsPublicBlackboardVariable = 0x48; // bool
                constexpr std::ptrdiff_t m_bIsObservable = 0x49; // bool
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x4C; // PulseDocNodeID_t
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
            namespace PARTICLE_EHANDLE__ {
                constexpr std::ptrdiff_t unused = 0x0; // int32
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
            // 
            namespace CAddUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x90; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x94; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x95; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x96; // bool
                constexpr std::ptrdiff_t m_bApplyScale = 0x97; // bool
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
            namespace CAnimEnum {
                constexpr std::ptrdiff_t m_value = 0x0; // uint8
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
            namespace CDemoSettingsComponentUpdater {
                constexpr std::ptrdiff_t m_settings = 0x30; // CAnimDemoCaptureSettings
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CAnimDecoder {
                constexpr std::ptrdiff_t m_szName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nVersion = 0x10; // int32
                constexpr std::ptrdiff_t m_nType = 0x14; // int32
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
            namespace CNmCachedTargetNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_mode = 0xC; // NmCachedValueMode_t
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
            namespace CPerParticleFloatInput {
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
            namespace CNmConstBoolNode__CDefinition {
                constexpr std::ptrdiff_t m_bValue = 0xA; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CNmBitFlags {
                constexpr std::ptrdiff_t m_flags = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CFootStride {
                constexpr std::ptrdiff_t m_definition = 0x0; // CFootCycleDefinition
                constexpr std::ptrdiff_t m_trajectories = 0x40; // CFootTrajectories
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CSceneObjectData__RTProxyDrawDescriptor_t {
                constexpr std::ptrdiff_t m_drawDesc = 0x0; // CMaterialDrawDescriptor
                constexpr std::ptrdiff_t m_mWorldFromLocal = 0x108; // matrix3x4_t
                constexpr std::ptrdiff_t m_nVertexAlbedoFormat = 0x138; // VertexAlbedoFormat_t
                constexpr std::ptrdiff_t m_nVertexAlbedoVB = 0x139; // int8
                constexpr std::ptrdiff_t m_nVertexAlbedoOffset = 0x13A; // uint16
                constexpr std::ptrdiff_t m_nVertexAlbedoStride = 0x13C; // uint16
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
            namespace CNmLegacyEvent {
                constexpr std::ptrdiff_t m_animEventClassName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_KV = 0x28; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CStateNodeStateData {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_bExclusiveRootMotion = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bExclusiveRootMotionFirstFrame = 0x0; // bitfield:1
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
            // 
            namespace CFootstepLandedAnimTag {
                constexpr std::ptrdiff_t m_FootstepType = 0x58; // FootstepLandedFootSoundType_t
                constexpr std::ptrdiff_t m_OverrideSoundName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_DebugAnimSourceString = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_BoneName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_footstepJumpPhase = 0x78; // FootstepJumpPhase_t
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
            namespace CEnumAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // uint8
                constexpr std::ptrdiff_t m_enumOptions = 0x88; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_vecEnumReferenced = 0xA0; // CUtlVector<uint64>
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
            namespace CHandshakeAnimTagBase {
                constexpr std::ptrdiff_t m_bIsDisableTag = 0x49; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimTagID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CAnimFrameSegment {
                constexpr std::ptrdiff_t m_nUniqueFrameIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nLocalElementMasks = 0x4; // uint32
                constexpr std::ptrdiff_t m_nLocalChannel = 0x8; // int32
                constexpr std::ptrdiff_t m_container = 0x10; // CUtlBinaryBlock
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
            // 
            namespace CSlopeComponentUpdater {
                constexpr std::ptrdiff_t m_flTraceDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_hSlopeAngle = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeHeading = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CAnimInputDamping {
                constexpr std::ptrdiff_t m_speedFunction = 0x8; // DampingSpeedFunction
                constexpr std::ptrdiff_t m_fSpeedScale = 0xC; // float32
                constexpr std::ptrdiff_t m_fFallingSpeedScale = 0x10; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CNmIKBody {
                constexpr std::ptrdiff_t m_flMass = 0x0; // float32
                constexpr std::ptrdiff_t m_vLocalMassCenter = 0x4; // Vector
                constexpr std::ptrdiff_t m_vRadius = 0x10; // Vector
                constexpr std::ptrdiff_t m_flResistance = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CHitBoxSet {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_HitBoxes = 0x10; // CUtlVector<CHitBox>
                constexpr std::ptrdiff_t m_SourceFilename = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace ChainToSolveData_t {
                constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_SolverSettings = 0x4; // IKSolverSettings_t
                constexpr std::ptrdiff_t m_TargetSettings = 0x10; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
                constexpr std::ptrdiff_t m_flDebugNormalizedValue = 0x3C; // float32
                constexpr std::ptrdiff_t m_vDebugOffset = 0x40; // VectorAligned
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CConstraintSlave {
                constexpr std::ptrdiff_t m_qBaseOrientation = 0x0; // Quaternion
                constexpr std::ptrdiff_t m_vBasePosition = 0x10; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x1C; // uint32
                constexpr std::ptrdiff_t m_flWeight = 0x20; // float32
                constexpr std::ptrdiff_t m_sName = 0x28; // CUtlString
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
            namespace PulseRuntimeOutputIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace CFootCycleDefinition {
                constexpr std::ptrdiff_t m_vStancePositionMS = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMidpointPositionMS = 0xC; // Vector
                constexpr std::ptrdiff_t m_flStanceDirectionMS = 0x18; // float32
                constexpr std::ptrdiff_t m_vToStrideStartPos = 0x1C; // Vector
                constexpr std::ptrdiff_t m_stanceCycle = 0x28; // CAnimCycle
                constexpr std::ptrdiff_t m_footLiftCycle = 0x2C; // CFootCycle
                constexpr std::ptrdiff_t m_footOffCycle = 0x30; // CFootCycle
                constexpr std::ptrdiff_t m_footStrikeCycle = 0x34; // CFootCycle
                constexpr std::ptrdiff_t m_footLandCycle = 0x38; // CFootCycle
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
            namespace CVirtualAnimParameter {
                constexpr std::ptrdiff_t m_expressionString = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_eParamType = 0x78; // AnimParamType_t
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
            namespace CMotionMetricEvaluator {
                constexpr std::ptrdiff_t m_means = 0x18; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_standardDeviations = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_nDimensionStartIndex = 0x4C; // int32
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
            // 
            namespace CFutureVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flStoppingDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x58; // float32
                constexpr std::ptrdiff_t m_eMode = 0x5C; // VelocityMetricMode
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmSkeleton__SecondarySkeleton_t {
                constexpr std::ptrdiff_t m_attachToBoneID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
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
            namespace CAnimUpdateNodeBase {
                constexpr std::ptrdiff_t m_nodePath = 0x14; // CAnimNodePath
                constexpr std::ptrdiff_t m_networkMode = 0x44; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_name = 0x50; // CUtlString
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
            namespace CSetParameterActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_value = 0x1A; // CAnimVariant
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
            namespace CNmFixedWeightBoneMaskNode__CDefinition {
                constexpr std::ptrdiff_t m_flBoneWeight = 0xC; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace SkeletonAnimCapture_t__FrameStamp_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEntitySimTime = 0x4; // float32
                constexpr std::ptrdiff_t m_bTeleportTick = 0x8; // bool
                constexpr std::ptrdiff_t m_bPredicted = 0x9; // bool
                constexpr std::ptrdiff_t m_flCurTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x10; // float32
                constexpr std::ptrdiff_t m_nFrameCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nTickCount = 0x18; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CPulse_DomainValue {
                constexpr std::ptrdiff_t m_nType = 0x0; // PulseDomainValueType_t
                constexpr std::ptrdiff_t m_Value = 0x8; // CGlobalSymbolCaseSensitive
                constexpr std::ptrdiff_t m_RequiredRuntimeType = 0x10; // CPulseValueFullType
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
            namespace CBonePositionMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CRenderBufferBinding {
                constexpr std::ptrdiff_t m_hBuffer = 0x0; // uint64
                constexpr std::ptrdiff_t m_nBindOffsetBytes = 0x10; // uint32
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
            namespace CParticleCollectionRendererFloatInput {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmParameterizedBlendNode__Parameterization_t {
                constexpr std::ptrdiff_t m_blendRanges = 0x0; // CUtlLeanVectorFixedGrowable<CNmParameterizedBlendNode::BlendRange_t,5>
                constexpr std::ptrdiff_t m_parameterRange = 0x48; // Range_t
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
            namespace CNmEntityAttributeIntEvent {
                constexpr std::ptrdiff_t m_nIntValue = 0x38; // int32
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
            namespace CNmNotNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CMeshletDescriptor {
                constexpr std::ptrdiff_t m_PackedAABB = 0x0; // PackedAABB_t
                constexpr std::ptrdiff_t m_CullingData = 0x8; // CDrawCullingData
                constexpr std::ptrdiff_t m_nVertexOffset = 0xC; // uint32
                constexpr std::ptrdiff_t m_nTriangleOffset = 0x10; // uint32
                constexpr std::ptrdiff_t m_nVertexCount = 0x14; // uint8
                constexpr std::ptrdiff_t m_nTriangleCount = 0x15; // uint8
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CMorphSetData {
                constexpr std::ptrdiff_t m_nWidth = 0xC; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x10; // int32
                constexpr std::ptrdiff_t m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
                constexpr std::ptrdiff_t m_morphDatas = 0x30; // CUtlVector<CMorphData>
                constexpr std::ptrdiff_t m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
                constexpr std::ptrdiff_t m_FlexControllers = 0x68; // CUtlVector<CFlexController>
                constexpr std::ptrdiff_t m_FlexRules = 0x80; // CUtlVector<CFlexRule>
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
            namespace CNmAndNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
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
            // 
            namespace CMorphConstraint {
                constexpr std::ptrdiff_t m_sTargetMorph = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_nSlaveChannel = 0x68; // int32
                constexpr std::ptrdiff_t m_flMin = 0x6C; // float32
                constexpr std::ptrdiff_t m_flMax = 0x70; // float32
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
            // 
            namespace CClothSettingsAnimTag {
                constexpr std::ptrdiff_t m_flStiffness = 0x58; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x5C; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x60; // float32
                constexpr std::ptrdiff_t m_nVertexSet = 0x68; // CUtlString
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CAnimDesc_Flag {
                constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
                constexpr std::ptrdiff_t m_bAllZeros = 0x1; // bool
                constexpr std::ptrdiff_t m_bHidden = 0x2; // bool
                constexpr std::ptrdiff_t m_bDelta = 0x3; // bool
                constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x4; // bool
                constexpr std::ptrdiff_t m_bModelDoc = 0x5; // bool
                constexpr std::ptrdiff_t m_bImplicitSeqIgnoreDelta = 0x6; // bool
                constexpr std::ptrdiff_t m_bAnimGraphAdditive = 0x7; // bool
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
            // 
            namespace CNmBlend2DNode__CDefinition {
                constexpr std::ptrdiff_t m_sourceNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_nInputParameterNodeIdx0 = 0x38; // int16
                constexpr std::ptrdiff_t m_nInputParameterNodeIdx1 = 0x3A; // int16
                constexpr std::ptrdiff_t m_values = 0x40; // CUtlVectorFixedGrowable<Vector2D,10>
                constexpr std::ptrdiff_t m_indices = 0xA8; // CUtlVectorFixedGrowable<uint8,30>
                constexpr std::ptrdiff_t m_hullIndices = 0xE0; // CUtlVectorFixedGrowable<uint8,10>
                constexpr std::ptrdiff_t m_bAllowLooping = 0x108; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CBlendCurve {
                constexpr std::ptrdiff_t m_flControlPoint1 = 0x0; // float32
                constexpr std::ptrdiff_t m_flControlPoint2 = 0x4; // float32
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
            namespace CNmGraphNode__CDefinition {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x8; // int16
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
            // 
            namespace CAnimationGraphVisualizerSphere {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_flRadius = 0x50; // float32
                constexpr std::ptrdiff_t m_Color = 0x54; // Color
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmClip__ModelSpaceSamplingChainLink_t {
                constexpr std::ptrdiff_t m_nBoneIdx = 0x0; // int32
                constexpr std::ptrdiff_t m_nParentBoneIdx = 0x4; // int32
                constexpr std::ptrdiff_t m_nParentChainLinkIdx = 0x8; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CAnimUserDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nType = 0x10; // int32
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
            namespace CNmDurationScaleNode__CDefinition {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CTransitionUpdateData {
                constexpr std::ptrdiff_t m_srcStateIndex = 0x0; // uint8
                constexpr std::ptrdiff_t m_destStateIndex = 0x1; // uint8
                constexpr std::ptrdiff_t m_nHandshakeMaskToDisableFirst = 0x0; // bitfield:7
                constexpr std::ptrdiff_t m_bDisabled = 0x0; // bitfield:1
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
            namespace PulseRuntimeBlackboardReferenceIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
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
            namespace CMovementHandshakeAnimTag {
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
            namespace CBoneConstraintPoseSpaceBone__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputTransformList = 0x10; // CUtlVector<CTransform>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace CSeqMultiFetch {
                constexpr std::ptrdiff_t m_flags = 0x0; // CSeqMultiFetchFlag
                constexpr std::ptrdiff_t m_localReferenceArray = 0x8; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_nGroupSize = 0x20; // int32[2]
                constexpr std::ptrdiff_t m_nLocalPose = 0x28; // int32[2]
                constexpr std::ptrdiff_t m_poseKeyArray0 = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_poseKeyArray1 = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nLocalCyclePoseParameter = 0x60; // int32
                constexpr std::ptrdiff_t m_bCalculatePoseParameters = 0x64; // bool
                constexpr std::ptrdiff_t m_bFixedBlendWeight = 0x65; // bool
                constexpr std::ptrdiff_t m_flFixedBlendWeightVals = 0x68; // float32[2]
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace CPhysSurfacePropertiesSoundNames {
                constexpr std::ptrdiff_t m_impactSoft = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_impactHard = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_scrapeSmooth = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_scrapeRough = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bulletImpact = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_rolling = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_break = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_strain = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_meleeImpact = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_pushOff = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_skidStop = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_resonant = 0x58; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace NmBoneMaskSetDefinition_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_primaryWeightList = 0x8; // CNmBoneWeightList
                constexpr std::ptrdiff_t m_secondaryWeightLists = 0x118; // CUtlLeanVector<CNmBoneWeightList>
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
            // 
            namespace CAudioAnimTag {
                constexpr std::ptrdiff_t m_clipName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_attachmentName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_flVolume = 0x68; // float32
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x6C; // bool
                constexpr std::ptrdiff_t m_bStopWhenGraphEnds = 0x6D; // bool
                constexpr std::ptrdiff_t m_bPlayOnServer = 0x6E; // bool
                constexpr std::ptrdiff_t m_bPlayOnClient = 0x6F; // bool
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
            // 
            namespace CTurnHelperUpdateNode {
                constexpr std::ptrdiff_t m_facingTarget = 0x74; // AnimValueSource
                constexpr std::ptrdiff_t m_turnStartTimeOffset = 0x78; // float32
                constexpr std::ptrdiff_t m_turnDuration = 0x7C; // float32
                constexpr std::ptrdiff_t m_bMatchChildDuration = 0x80; // bool
                constexpr std::ptrdiff_t m_manualTurnOffset = 0x84; // float32
                constexpr std::ptrdiff_t m_bUseManualTurnOffset = 0x88; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CAnimationGroup {
                constexpr std::ptrdiff_t m_nFlags = 0xC; // uint32
                constexpr std::ptrdiff_t m_name = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_localHAnimArray_Handle = 0x58; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
                constexpr std::ptrdiff_t m_includedGroupArray_Handle = 0x70; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_directHSeqGroup_Handle = 0x88; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
                constexpr std::ptrdiff_t m_decodeKey = 0x90; // CAnimKeyData
                constexpr std::ptrdiff_t m_szScripts = 0x108; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_AdditionalExtRefs = 0x120; // CUtlVector<CStrongHandleVoid>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace NmSyncTrackTime_t {
                constexpr std::ptrdiff_t m_nEventIdx = 0x0; // int32
                constexpr std::ptrdiff_t m_percentageThrough = 0x4; // NmPercent_t
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            namespace CNmClip {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_nNumFrames = 0x8; // uint32
                constexpr std::ptrdiff_t m_flDuration = 0xC; // float32
                constexpr std::ptrdiff_t m_compressedPoseData = 0x10; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_trackCompressionSettings = 0x20; // CUtlVector<NmCompressionSettings_t>
                constexpr std::ptrdiff_t m_compressedPoseOffsets = 0x38; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_floatCurveIDs = 0x50; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_floatCurveDefs = 0x68; // CUtlVector<NmFloatCurveCompressionSettings_t>
                constexpr std::ptrdiff_t m_compressedFloatCurveData = 0x80; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_compressedFloatCurveOffsets = 0x98; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_secondaryAnimations = 0xD8; // CUtlVectorFixedGrowable<CNmClip*,1>
                constexpr std::ptrdiff_t m_syncTrack = 0xF8; // CNmSyncTrack
                constexpr std::ptrdiff_t m_rootMotion = 0x1B0; // CNmRootMotionData
                constexpr std::ptrdiff_t m_bIsAdditive = 0x200; // bool
                constexpr std::ptrdiff_t m_modelSpaceSamplingChain = 0x208; // CUtlVector<CNmClip::ModelSpaceSamplingChainLink_t>
                constexpr std::ptrdiff_t m_modelSpaceBoneSamplingIndices = 0x220; // CUtlVector<int32>
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
            namespace CToggleComponentActionUpdater {
                constexpr std::ptrdiff_t m_componentID = 0x18; // AnimComponentID
                constexpr std::ptrdiff_t m_bSetEnabled = 0x1C; // bool
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
            namespace CNmOverlayBlendTask {
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
            namespace CNmSpeedScaleBaseNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_flDefaultInputValue = 0x10; // float32
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
            namespace CNmValueNode__CDefinition {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CAnimationGraphVisualizerPrimitiveBase {
                constexpr std::ptrdiff_t m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
                constexpr std::ptrdiff_t m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nOwningAnimNodePathCount = 0x38; // int32
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
            namespace CBindPoseUpdateNode {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace NmSyncTrackTimeRange_t {
                constexpr std::ptrdiff_t m_startTime = 0x0; // NmSyncTrackTime_t
                constexpr std::ptrdiff_t m_endTime = 0x8; // NmSyncTrackTime_t
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
            // 
            namespace CAnimationGraphVisualizerText {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x50; // Color
                constexpr std::ptrdiff_t m_Text = 0x58; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CFootTrajectory {
                constexpr std::ptrdiff_t m_vOffset = 0x8; // Vector
                constexpr std::ptrdiff_t m_flRotationOffset = 0x14; // float32
                constexpr std::ptrdiff_t m_flProgression = 0x18; // float32
            }
            // Parent: None
            // Fields count: 23
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
            namespace CMotionMatchingUpdateNode {
                constexpr std::ptrdiff_t m_dataSet = 0x58; // CMotionDataSet
                constexpr std::ptrdiff_t m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
                constexpr std::ptrdiff_t m_weights = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bSearchEveryTick = 0xE0; // bool
                constexpr std::ptrdiff_t m_flSearchInterval = 0xE4; // float32
                constexpr std::ptrdiff_t m_bSearchWhenClipEnds = 0xE8; // bool
                constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0xE9; // bool
                constexpr std::ptrdiff_t m_blendCurve = 0xEC; // CBlendCurve
                constexpr std::ptrdiff_t m_flSampleRate = 0xF4; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0xF8; // float32
                constexpr std::ptrdiff_t m_bLockClipWhenWaning = 0xFC; // bool
                constexpr std::ptrdiff_t m_flSelectionThreshold = 0x100; // float32
                constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x104; // float32
                constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0x108; // bool
                constexpr std::ptrdiff_t m_bGoalAssist = 0x109; // bool
                constexpr std::ptrdiff_t m_flGoalAssistDistance = 0x10C; // float32
                constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0x110; // float32
                constexpr std::ptrdiff_t m_distanceScale_Damping = 0x118; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0x130; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0x134; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0x138; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0x13C; // float32
                constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0x140; // bool
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
            namespace CNmReferencePoseNode__CDefinition {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace CSeqS1SeqDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_fetch = 0x20; // CSeqMultiFetch
                constexpr std::ptrdiff_t m_nLocalWeightlist = 0x90; // int32
                constexpr std::ptrdiff_t m_autoLayerArray = 0x98; // CUtlVector<CSeqAutoLayer>
                constexpr std::ptrdiff_t m_IKLockArray = 0xB0; // CUtlVector<CSeqIKLock>
                constexpr std::ptrdiff_t m_transition = 0xC8; // CSeqTransition
                constexpr std::ptrdiff_t m_SequenceKeys = 0xD0; // KeyValues3
                constexpr std::ptrdiff_t m_LegacyKeyValueText = 0xE0; // CBufferString
                constexpr std::ptrdiff_t m_activityArray = 0xF0; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_footMotion = 0x108; // CUtlVector<CFootMotion>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CFlexController {
                constexpr std::ptrdiff_t m_szName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_szType = 0x8; // CUtlString
                constexpr std::ptrdiff_t min = 0x10; // float32
                constexpr std::ptrdiff_t max = 0x14; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace SkeletonDemoDb_t {
                constexpr std::ptrdiff_t m_AnimCaptures = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
                constexpr std::ptrdiff_t m_CameraTrack = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
                constexpr std::ptrdiff_t m_flRecordingTime = 0x30; // float32
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
            namespace CNmFloatRangeComparisonNode__CDefinition {
                constexpr std::ptrdiff_t m_range = 0xC; // Range_t
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_bIsInclusiveCheck = 0x16; // bool
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
            namespace CMotionNodeSequence {
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x40; // HSequence
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x44; // float32
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
            // 
            namespace CNmTwoBoneIKNode__CDefinition {
                constexpr std::ptrdiff_t m_effectorBoneID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nEffectorTargetNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x1C; // float32
                constexpr std::ptrdiff_t m_blendMode = 0x20; // NmIKBlendMode_t
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x21; // bool
                constexpr std::ptrdiff_t m_flReferencePoseTwistWeight = 0x24; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CFlexDesc {
                constexpr std::ptrdiff_t m_szFacs = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CRenderMesh {
                constexpr std::ptrdiff_t m_sceneObjects = 0x10; // CUtlLeanVectorFixedGrowable<CSceneObjectData,1>
                constexpr std::ptrdiff_t m_constraints = 0xB8; // CUtlLeanVector<CBaseConstraint*>
                constexpr std::ptrdiff_t m_skeleton = 0xC8; // CRenderSkeleton
                constexpr std::ptrdiff_t m_bUseUV2ForCharting = 0x1D4; // bool
                constexpr std::ptrdiff_t m_bEmbeddedMapMesh = 0x1D5; // bool
                constexpr std::ptrdiff_t m_meshDeformParams = 0x1F8; // DynamicMeshDeformParams_t
                constexpr std::ptrdiff_t m_pGroomData = 0x208; // CRenderGroom*
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CAnimSkeleton {
                constexpr std::ptrdiff_t m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_boneNames = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_parents = 0x70; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_feet = 0x88; // CUtlVector<CAnimFoot>
                constexpr std::ptrdiff_t m_morphNames = 0xA0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_lodBoneCounts = 0xB8; // CUtlVector<int32>
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
            namespace PulseRuntimeConstantIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace VPhysics2ShapeDef_t {
                constexpr std::ptrdiff_t m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
                constexpr std::ptrdiff_t m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
                constexpr std::ptrdiff_t m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
                constexpr std::ptrdiff_t m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
                constexpr std::ptrdiff_t m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16>
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
            namespace CNmFloatCurveNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_curve = 0x10; // CPiecewiseCurve
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
            namespace CAnimationGraphVisualizerAxis {
                constexpr std::ptrdiff_t m_xWsTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_flAxisSize = 0x60; // float32
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
            // 
            namespace CTwistConstraint {
                constexpr std::ptrdiff_t m_bInverse = 0x60; // bool
                constexpr std::ptrdiff_t m_qParentBindRotation = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_qChildBindRotation = 0x80; // Quaternion
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
            namespace PulseDocNodeID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace ModelBoneFlexDriverControl_t {
                constexpr std::ptrdiff_t m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
                constexpr std::ptrdiff_t m_flexController = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flexControllerToken = 0x10; // uint32
                constexpr std::ptrdiff_t m_flMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flMax = 0x18; // float32
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
            namespace CParticleCollectionFloatInput {
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace CSeqCmdLayer {
                constexpr std::ptrdiff_t m_cmd = 0x0; // int16
                constexpr std::ptrdiff_t m_nLocalReference = 0x2; // int16
                constexpr std::ptrdiff_t m_nLocalBonemask = 0x4; // int16
                constexpr std::ptrdiff_t m_nDstResult = 0x6; // int16
                constexpr std::ptrdiff_t m_nSrcResult = 0x8; // int16
                constexpr std::ptrdiff_t m_bSpline = 0xA; // bool
                constexpr std::ptrdiff_t m_flVar1 = 0xC; // float32
                constexpr std::ptrdiff_t m_flVar2 = 0x10; // float32
                constexpr std::ptrdiff_t m_nLineNumber = 0x14; // int16
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace FootPinningPoseOpFixedData_t {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_flBlendTime = 0x18; // float32
                constexpr std::ptrdiff_t m_flLockBreakDistance = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x20; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x28; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x29; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace RenderSkeletonBone_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_parentName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_invBindPose = 0x10; // matrix3x4_t
                constexpr std::ptrdiff_t m_bbox = 0x40; // SkeletonBoneBounds_t
                constexpr std::ptrdiff_t m_flSphereRadius = 0x58; // float32
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
            // 
            namespace CDistanceRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_flMaxDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flMinDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x5C; // float32
                constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x60; // bool
                constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x61; // bool
                constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x62; // bool
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
            namespace CDirectPlaybackUpdateNode {
                constexpr std::ptrdiff_t m_bFinishEarly = 0x74; // bool
                constexpr std::ptrdiff_t m_bResetOnFinish = 0x75; // bool
                constexpr std::ptrdiff_t m_allTags = 0x78; // CUtlVector<CDirectPlaybackTagData>
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
            namespace CNmIDEvent {
                constexpr std::ptrdiff_t m_ID = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_secondaryID = 0x28; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CFlexRule {
                constexpr std::ptrdiff_t m_nFlex = 0x0; // int32
                constexpr std::ptrdiff_t m_FlexOps = 0x8; // CUtlVector<CFlexOp>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace ScriptInfo_t {
                constexpr std::ptrdiff_t m_code = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_proxyReadParams = 0x20; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_proxyWriteParams = 0x38; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_eScriptType = 0x50; // AnimScriptType
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
            namespace CBoneConstraintRbf {
                constexpr std::ptrdiff_t m_inputBones = 0x20; // CUtlVector<std::pair<CUtlString,uint32>>
                constexpr std::ptrdiff_t m_outputBones = 0x38; // CUtlVector<std::pair<CUtlString,uint32>>
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
            // 
            namespace CNmSoundEvent {
                constexpr std::ptrdiff_t m_relevance = 0x1C; // CNmEventRelevance_t
                constexpr std::ptrdiff_t m_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_position = 0x28; // CNmSoundEvent::Position_t
                constexpr std::ptrdiff_t m_attachmentName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_bContinuePlayingSoundAtDurationEnd = 0x40; // bool
                constexpr std::ptrdiff_t m_flDurationInterruptionThreshold = 0x44; // float32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // ���x.
            namespace CRenderGroom {
                constexpr std::ptrdiff_t m_hairs = 0x0; // CUtlVector<RenderHairStrandInfo_t>
                constexpr std::ptrdiff_t m_hairPositionOffsets = 0x18; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_hSimParamsMat = 0x40; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_strandSegmentCountHist = 0x48; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nMaxSegmentsPerHairStrand = 0x78; // int32
                constexpr std::ptrdiff_t m_nGuideHairCount = 0x7C; // int32
                constexpr std::ptrdiff_t m_nHairCount = 0x80; // int32
                constexpr std::ptrdiff_t m_nTotalVertexCount = 0x84; // int32
                constexpr std::ptrdiff_t m_nTotalSegmentCount = 0x88; // int32
                constexpr std::ptrdiff_t m_nGroomGroupID = 0x8C; // int32
                constexpr std::ptrdiff_t m_nAttachBoneIdx = 0x90; // int32
                constexpr std::ptrdiff_t m_nAttachMeshIdx = 0x94; // int32
                constexpr std::ptrdiff_t m_nAttachMeshDrawCallIdx = 0x98; // int32
                constexpr std::ptrdiff_t m_bEnableSimulation = 0x9C; // bool
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
            // 
            namespace CNmParameterizedClipSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_optionWeights = 0x28; // CUtlLeanVectorFixedGrowable<uint8,5>
                constexpr std::ptrdiff_t m_parameterNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x3A; // bool
                constexpr std::ptrdiff_t m_bHasWeightsSet = 0x3B; // bool
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
            namespace CTiltTwistConstraint {
                constexpr std::ptrdiff_t m_nTargetAxis = 0x60; // int32
                constexpr std::ptrdiff_t m_nSlaveAxis = 0x64; // int32
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
            namespace CNmSpeedScaleNode__CDefinition {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CVPhysXSurfacePropertiesList {
                constexpr std::ptrdiff_t m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace RenderHairStrandInfo_t {
                constexpr std::ptrdiff_t m_nGuideHairIndices_nSurfaceTriIndex = 0x0; // uint32[2]
                constexpr std::ptrdiff_t m_vGuideBary_vBaseBary = 0x8; // uint16[4]
                constexpr std::ptrdiff_t m_vRootOffset_flLengthScale = 0x10; // uint16[4]
                constexpr std::ptrdiff_t m_nPackedBaseUv = 0x18; // uint16[2]
                constexpr std::ptrdiff_t m_nPackedSurfaceNormalOs = 0x1C; // uint32
                constexpr std::ptrdiff_t m_nPackedSurfaceTangentOs = 0x20; // uint32
                constexpr std::ptrdiff_t m_nDataOffset_Segments = 0x24; // uint32
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
            // 
            namespace CCycleControlClipUpdateNode {
                constexpr std::ptrdiff_t m_tags = 0x60; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x7C; // HSequence
                constexpr std::ptrdiff_t m_duration = 0x80; // float32
                constexpr std::ptrdiff_t m_valueSource = 0x84; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x8A; // bool
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
            namespace CNmTargetPointNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0xC; // bool
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
            // 
            namespace CNmTargetSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_flOrientationScoreWeight = 0x28; // float32
                constexpr std::ptrdiff_t m_flPositionScoreWeight = 0x2C; // float32
                constexpr std::ptrdiff_t m_parameterNodeIdx = 0x30; // int16
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x32; // bool
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x33; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CPulse_RegisterInfo {
                constexpr std::ptrdiff_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_Type = 0x8; // CPulseValueFullType
                constexpr std::ptrdiff_t m_OriginName = 0x20; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x58; // int32
                constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x5C; // int32
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
            namespace CNmFloatValueNode__CDefinition {
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
            namespace CWarpSectionAnimTagBase {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            namespace CNmGraphVariationUserData {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CStaticPoseCache {
                constexpr std::ptrdiff_t m_poses = 0x10; // CUtlVector<CCachedPose>
                constexpr std::ptrdiff_t m_nBoneCount = 0x28; // int32
                constexpr std::ptrdiff_t m_nMorphCount = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace LookAtOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bones = 0x98; // CUtlVector<LookAtBone_t>
                constexpr std::ptrdiff_t m_flYawLimit = 0xB0; // float32
                constexpr std::ptrdiff_t m_flPitchLimit = 0xB4; // float32
                constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0xB8; // float32
                constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0xBC; // float32
                constexpr std::ptrdiff_t m_bRotateYawForward = 0xC0; // bool
                constexpr std::ptrdiff_t m_bMaintainUpDirection = 0xC1; // bool
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xC2; // bool
                constexpr std::ptrdiff_t m_bUseHysteresis = 0xC3; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CAnimGraphSettingsManager {
                constexpr std::ptrdiff_t m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CAnimGraphModelBinding {
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
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
            namespace CBoneConstraintPoseSpaceBone {
                constexpr std::ptrdiff_t m_inputList = 0x60; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
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
            // 
            namespace CNmTwoBoneIKTask {
                constexpr std::ptrdiff_t m_nEffectorBoneIdx = 0x54; // int32
                constexpr std::ptrdiff_t m_nEffectorTargetBoneIdx = 0x58; // int32
                constexpr std::ptrdiff_t m_targetTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_effectorTarget = 0x80; // CNmTarget
                constexpr std::ptrdiff_t m_blendMode = 0xB0; // NmIKBlendMode_t
                constexpr std::ptrdiff_t m_flBlendWeight = 0xB4; // float32
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0xB8; // bool
                constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0xB9; // bool
                constexpr std::ptrdiff_t m_flReferencePoseTwistWeight = 0xBC; // float32
                constexpr std::ptrdiff_t m_debugEffectorBoneID = 0xC0; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace MotionBlendItem {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_flKeyValue = 0x8; // float32
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
            // 
            namespace CBoneConstraintPoseSpaceMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_sAttachmentName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_outputMorph = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_inputList = 0x48; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
                constexpr std::ptrdiff_t m_bClamp = 0x60; // bool
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
            // 
            namespace CFloatAnimParameter {
                constexpr std::ptrdiff_t m_fDefaultValue = 0x78; // float32
                constexpr std::ptrdiff_t m_fMinValue = 0x7C; // float32
                constexpr std::ptrdiff_t m_fMaxValue = 0x80; // float32
                constexpr std::ptrdiff_t m_bInterpolate = 0x84; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CStateActionUpdater {
                constexpr std::ptrdiff_t m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
                constexpr std::ptrdiff_t m_eBehavior = 0x8; // StateActionBehavior
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
            // 
            namespace CPlayerInputAnimMotorUpdater {
                constexpr std::ptrdiff_t m_sampleTimes = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flSpringConstant = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAnticipationDistance = 0x40; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x44; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bUseAcceleration = 0x48; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CRenderSkeleton {
                constexpr std::ptrdiff_t m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
                constexpr std::ptrdiff_t m_boneParents = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nBoneWeightCount = 0x48; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            namespace CSeqIKLock {
                constexpr std::ptrdiff_t m_flPosWeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flAngleWeight = 0x4; // float32
                constexpr std::ptrdiff_t m_nLocalBone = 0x8; // int16
                constexpr std::ptrdiff_t m_bBonesOrientedAlongPositiveX = 0xA; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CAnimParamHandleMap {
                constexpr std::ptrdiff_t m_list = 0x0; // CUtlHashtable<uint16,int16>
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
            namespace CNmFloatClampNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_clampRange = 0xC; // Range_t
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
            namespace PulseRuntimeCellIndex_t {
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
            namespace CNmExternalPoseNode__CDefinition {
                constexpr std::ptrdiff_t m_bShouldSampleRootMotion = 0xA; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            namespace CAnimDesc {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CAnimDesc_Flag
                constexpr std::ptrdiff_t fps = 0x18; // float32
                constexpr std::ptrdiff_t m_Data = 0x20; // CAnimEncodedFrames
                constexpr std::ptrdiff_t m_movementArray = 0xF8; // CUtlVector<CAnimMovement>
                constexpr std::ptrdiff_t m_xInitialOffset = 0x110; // CTransform
                constexpr std::ptrdiff_t m_eventArray = 0x130; // CUtlVector<CAnimEventDefinition>
                constexpr std::ptrdiff_t m_activityArray = 0x148; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_hierarchyArray = 0x160; // CUtlVector<CAnimLocalHierarchy>
                constexpr std::ptrdiff_t framestalltime = 0x178; // float32
                constexpr std::ptrdiff_t m_vecRootMin = 0x17C; // Vector
                constexpr std::ptrdiff_t m_vecRootMax = 0x188; // Vector
                constexpr std::ptrdiff_t m_vecBoneWorldMin = 0x198; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecBoneWorldMax = 0x1B0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_sequenceParams = 0x1C8; // CAnimSequenceParams
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
            // 
            namespace CNmRootMotionOverrideNode__CDefinition {
                constexpr std::ptrdiff_t m_desiredMovingVelocityNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_desiredFacingDirectionNodeIdx = 0xE; // int16
                constexpr std::ptrdiff_t m_linearVelocityLimitNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_angularVelocityLimitNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_maxLinearVelocity = 0x14; // float32
                constexpr std::ptrdiff_t m_maxAngularVelocityRadians = 0x18; // float32
                constexpr std::ptrdiff_t m_overrideFlags = 0x1C; // CNmBitFlags
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
            namespace CNmTargetWarpNode__CDefinition {
                constexpr std::ptrdiff_t m_nClipReferenceNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTargetValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_samplingMode = 0xE; // CNmRootMotionData::SamplingMode_t
                constexpr std::ptrdiff_t m_bAllowTargetUpdate = 0xF; // bool
                constexpr std::ptrdiff_t m_bAlignWithTargetAtLastWarpEvent = 0x10; // bool
                constexpr std::ptrdiff_t m_flSamplingPositionErrorThresholdSq = 0x14; // float32
                constexpr std::ptrdiff_t m_flMaxTangentLength = 0x18; // float32
                constexpr std::ptrdiff_t m_flLerpFallbackDistanceThreshold = 0x1C; // float32
                constexpr std::ptrdiff_t m_flTargetUpdateDistanceThreshold = 0x20; // float32
                constexpr std::ptrdiff_t m_flTargetUpdateAngleThresholdRadians = 0x24; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CPhysSurfacePropertiesPhysics {
                constexpr std::ptrdiff_t m_friction = 0x0; // float32
                constexpr std::ptrdiff_t m_elasticity = 0x4; // float32
                constexpr std::ptrdiff_t m_density = 0x8; // float32
                constexpr std::ptrdiff_t m_thickness = 0xC; // float32
                constexpr std::ptrdiff_t m_softContactFrequency = 0x10; // float32
                constexpr std::ptrdiff_t m_softContactDampingRatio = 0x14; // float32
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
            // 
            // 
            namespace CAnimationGraphVisualizerPie {
                constexpr std::ptrdiff_t m_vWsCenter = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsStart = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_vWsEnd = 0x60; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x70; // Color
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace NmFloatCurveCompressionSettings_t {
                constexpr std::ptrdiff_t m_range = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_bIsStatic = 0x8; // bool
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
            // 
            namespace CBoneConstraintDotToMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_sTargetBoneName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_sMorphChannelName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_flRemap = 0x38; // float32[4]
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
            namespace CPointConstraint {
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
            namespace CCurrentRotationVelocityMetricEvaluator {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace TraceSettings_t {
                constexpr std::ptrdiff_t m_flTraceHeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace ParamSpanSample_t {
                constexpr std::ptrdiff_t m_value = 0x0; // CAnimVariant
                constexpr std::ptrdiff_t m_flCycle = 0x14; // float32
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
            namespace CNmFollowBoneTask {
            }
            // Parent: None
            // Fields count: 46
            //
            // Metadata:
            // ���x.
            namespace VPhysXConstraintParams_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // int8
                constexpr std::ptrdiff_t m_nTranslateMotion = 0x1; // int8
                constexpr std::ptrdiff_t m_nRotateMotion = 0x2; // int8
                constexpr std::ptrdiff_t m_nFlags = 0x3; // int8
                constexpr std::ptrdiff_t m_anchor = 0x4; // Vector[2]
                constexpr std::ptrdiff_t m_axes = 0x1C; // QuaternionStorage[2]
                constexpr std::ptrdiff_t m_maxForce = 0x3C; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0x40; // float32
                constexpr std::ptrdiff_t m_linearLimitValue = 0x44; // float32
                constexpr std::ptrdiff_t m_linearLimitRestitution = 0x48; // float32
                constexpr std::ptrdiff_t m_linearLimitSpring = 0x4C; // float32
                constexpr std::ptrdiff_t m_linearLimitDamping = 0x50; // float32
                constexpr std::ptrdiff_t m_twistLowLimitValue = 0x54; // float32
                constexpr std::ptrdiff_t m_twistLowLimitRestitution = 0x58; // float32
                constexpr std::ptrdiff_t m_twistLowLimitSpring = 0x5C; // float32
                constexpr std::ptrdiff_t m_twistLowLimitDamping = 0x60; // float32
                constexpr std::ptrdiff_t m_twistHighLimitValue = 0x64; // float32
                constexpr std::ptrdiff_t m_twistHighLimitRestitution = 0x68; // float32
                constexpr std::ptrdiff_t m_twistHighLimitSpring = 0x6C; // float32
                constexpr std::ptrdiff_t m_twistHighLimitDamping = 0x70; // float32
                constexpr std::ptrdiff_t m_swing1LimitValue = 0x74; // float32
                constexpr std::ptrdiff_t m_swing1LimitRestitution = 0x78; // float32
                constexpr std::ptrdiff_t m_swing1LimitSpring = 0x7C; // float32
                constexpr std::ptrdiff_t m_swing1LimitDamping = 0x80; // float32
                constexpr std::ptrdiff_t m_swing2LimitValue = 0x84; // float32
                constexpr std::ptrdiff_t m_swing2LimitRestitution = 0x88; // float32
                constexpr std::ptrdiff_t m_swing2LimitSpring = 0x8C; // float32
                constexpr std::ptrdiff_t m_swing2LimitDamping = 0x90; // float32
                constexpr std::ptrdiff_t m_goalPosition = 0x94; // Vector
                constexpr std::ptrdiff_t m_goalOrientation = 0xA0; // QuaternionStorage
                constexpr std::ptrdiff_t m_goalAngularVelocity = 0xB0; // Vector
                constexpr std::ptrdiff_t m_driveSpringX = 0xBC; // float32
                constexpr std::ptrdiff_t m_driveSpringY = 0xC0; // float32
                constexpr std::ptrdiff_t m_driveSpringZ = 0xC4; // float32
                constexpr std::ptrdiff_t m_driveDampingX = 0xC8; // float32
                constexpr std::ptrdiff_t m_driveDampingY = 0xCC; // float32
                constexpr std::ptrdiff_t m_driveDampingZ = 0xD0; // float32
                constexpr std::ptrdiff_t m_driveSpringTwist = 0xD4; // float32
                constexpr std::ptrdiff_t m_driveSpringSwing = 0xD8; // float32
                constexpr std::ptrdiff_t m_driveSpringSlerp = 0xDC; // float32
                constexpr std::ptrdiff_t m_driveDampingTwist = 0xE0; // float32
                constexpr std::ptrdiff_t m_driveDampingSwing = 0xE4; // float32
                constexpr std::ptrdiff_t m_driveDampingSlerp = 0xE8; // float32
                constexpr std::ptrdiff_t m_solverIterationCount = 0xEC; // int32
                constexpr std::ptrdiff_t m_projectionLinearTolerance = 0xF0; // float32
                constexpr std::ptrdiff_t m_projectionAngularTolerance = 0xF4; // float32
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
            // 
            namespace CNmFloatComparisonNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nComparandValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_comparison = 0xE; // CNmFloatComparisonNode::Comparison_t
                constexpr std::ptrdiff_t m_flEpsilon = 0x10; // float32
                constexpr std::ptrdiff_t m_flComparisonValue = 0x14; // float32
            }
            // Parent: None
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
            // 
            // 
            namespace CNmChainSolverTask {
                constexpr std::ptrdiff_t m_nEffectorBoneIdx = 0x54; // int32
                constexpr std::ptrdiff_t m_nEffectorTargetBoneIdx = 0x58; // int32
                constexpr std::ptrdiff_t m_targetTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_nNumBonesInChain = 0x80; // int32
                constexpr std::ptrdiff_t m_effectorTarget = 0x90; // CNmTarget
                constexpr std::ptrdiff_t m_blendMode = 0xC0; // NmIKBlendMode_t
                constexpr std::ptrdiff_t m_flBlendWeight = 0xC4; // float32
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0xC8; // bool
                constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0xC9; // bool
                constexpr std::ptrdiff_t m_debugEffectorBoneID = 0xD0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_chainStartTransformMS = 0xE0; // CTransform
                constexpr std::ptrdiff_t m_debugRequestedTargetTransformMS = 0x100; // CTransform
                constexpr std::ptrdiff_t m_debugTotalChainLength = 0x120; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace CStateUpdateData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_hScript = 0x8; // AnimScriptHandle
                constexpr std::ptrdiff_t m_transitionIndices = 0x10; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_actions = 0x28; // CUtlVector<CStateActionUpdater>
                constexpr std::ptrdiff_t m_stateID = 0x40; // AnimStateID
                constexpr std::ptrdiff_t m_bIsStartState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsEndState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsPassthrough = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsPassthroughRootMotion = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPreEvaluatePassthroughTransitionPath = 0x0; // bitfield:1
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
            namespace CNmTargetValueNode__CDefinition {
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
            namespace COrientConstraint {
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
            namespace CMoverUpdateNode {
                constexpr std::ptrdiff_t m_damping = 0x78; // CAnimInputDamping
                constexpr std::ptrdiff_t m_facingTarget = 0x90; // AnimValueSource
                constexpr std::ptrdiff_t m_hMoveVecParam = 0x94; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParam = 0x96; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTurnToFaceParam = 0x98; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x9C; // float32
                constexpr std::ptrdiff_t m_flTurnToFaceLimit = 0xA0; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0xA4; // bool
                constexpr std::ptrdiff_t m_bApplyMovement = 0xA5; // bool
                constexpr std::ptrdiff_t m_bOrientMovement = 0xA6; // bool
                constexpr std::ptrdiff_t m_bApplyRotation = 0xA7; // bool
                constexpr std::ptrdiff_t m_bLimitOnly = 0xA8; // bool
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
            namespace CNmLayerBlendNode__CDefinition {
                constexpr std::ptrdiff_t m_nBaseNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_bOnlySampleBaseRootMotion = 0xC; // bool
                constexpr std::ptrdiff_t m_layerDefinition = 0x10; // CUtlLeanVectorFixedGrowable<CNmLayerBlendNode::LayerDefinition_t,3>
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
            namespace CAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bDefault = 0x18; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace JiggleBoneSettingsList_t {
                constexpr std::ptrdiff_t m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
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
            // 
            namespace CSubtractUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x90; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x94; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x95; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x96; // bool
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
            namespace PulseGraphInstanceID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
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
            namespace CNmFloatRemapNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_inputRange = 0xC; // CNmFloatRemapNode::RemapRange_t
                constexpr std::ptrdiff_t m_outputRange = 0x14; // CNmFloatRemapNode::RemapRange_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CPoseHandle {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_eType = 0x2; // PoseType_t
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
            namespace CNmFootstepEventIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0xC; // CNmBitFlags
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
            namespace CSolveIKChainUpdateNode {
                constexpr std::ptrdiff_t m_targetHandles = 0x70; // CUtlVector<CSolveIKTargetHandle_t>
                constexpr std::ptrdiff_t m_opFixedData = 0x88; // SolveIKChainPoseOpFixedSettings_t
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
            namespace CNmOrNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace CSeqCmdSeqDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
                constexpr std::ptrdiff_t m_nFrameRangeSequence = 0x24; // int16
                constexpr std::ptrdiff_t m_nFrameCount = 0x26; // int16
                constexpr std::ptrdiff_t m_flFPS = 0x28; // float32
                constexpr std::ptrdiff_t m_nSubCycles = 0x2C; // int16
                constexpr std::ptrdiff_t m_numLocalResults = 0x2E; // int16
                constexpr std::ptrdiff_t m_cmdLayerArray = 0x30; // CUtlVector<CSeqCmdLayer>
                constexpr std::ptrdiff_t m_eventArray = 0x48; // CUtlVector<CAnimEventDefinition>
                constexpr std::ptrdiff_t m_activityArray = 0x60; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_poseSettingArray = 0x78; // CUtlVector<CSeqPoseSetting>
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
            // 
            namespace CBoneMaskUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x90; // int32
                constexpr std::ptrdiff_t m_flRootMotionBlend = 0x94; // float32
                constexpr std::ptrdiff_t m_blendSpace = 0x98; // BoneMaskBlendSpace
                constexpr std::ptrdiff_t m_footMotionTiming = 0x9C; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bUseBlendScale = 0xA0; // bool
                constexpr std::ptrdiff_t m_blendValueSource = 0xA4; // AnimValueSource
                constexpr std::ptrdiff_t m_hBlendParameter = 0xA8; // CAnimParamHandle
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
            namespace CLeafUpdateNode {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Value = 0x18; // KeyValues3
            }
            // Parent: None
            // Fields count: 49
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
            namespace CParticleFloatInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleFloatType_t
                constexpr std::ptrdiff_t m_nMapType = 0x10; // ParticleFloatMapType_t
                constexpr std::ptrdiff_t m_flLiteralValue = 0x14; // float32
                constexpr std::ptrdiff_t m_NamedValue = 0x18; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_nControlPoint = 0x58; // int32
                constexpr std::ptrdiff_t m_nScalarAttribute = 0x5C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorAttribute = 0x60; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorComponent = 0x64; // int32
                constexpr std::ptrdiff_t m_bReverseOrder = 0x68; // bool
                constexpr std::ptrdiff_t m_flRandomMin = 0x6C; // float32
                constexpr std::ptrdiff_t m_flRandomMax = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasRandomSignFlip = 0x74; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x78; // int32
                constexpr std::ptrdiff_t m_nRandomMode = 0x7C; // ParticleFloatRandomMode_t
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x88; // CUtlString
                constexpr std::ptrdiff_t m_flLOD0 = 0x90; // float32
                constexpr std::ptrdiff_t m_flLOD1 = 0x94; // float32
                constexpr std::ptrdiff_t m_flLOD2 = 0x98; // float32
                constexpr std::ptrdiff_t m_flLOD3 = 0x9C; // float32
                constexpr std::ptrdiff_t m_nNoiseInputVectorAttribute = 0xA0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flNoiseOutputMin = 0xA4; // float32
                constexpr std::ptrdiff_t m_flNoiseOutputMax = 0xA8; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0xAC; // float32
                constexpr std::ptrdiff_t m_vecNoiseOffsetRate = 0xB0; // Vector
                constexpr std::ptrdiff_t m_flNoiseOffset = 0xBC; // float32
                constexpr std::ptrdiff_t m_nNoiseOctaves = 0xC0; // int32
                constexpr std::ptrdiff_t m_nNoiseTurbulence = 0xC4; // PFNoiseTurbulence_t
                constexpr std::ptrdiff_t m_nNoiseType = 0xC8; // PFNoiseType_t
                constexpr std::ptrdiff_t m_nNoiseModifier = 0xCC; // PFNoiseModifier_t
                constexpr std::ptrdiff_t m_flNoiseTurbulenceScale = 0xD0; // float32
                constexpr std::ptrdiff_t m_flNoiseTurbulenceMix = 0xD4; // float32
                constexpr std::ptrdiff_t m_flNoiseImgPreviewScale = 0xD8; // float32
                constexpr std::ptrdiff_t m_bNoiseImgPreviewLive = 0xDC; // bool
                constexpr std::ptrdiff_t m_flNoCameraFallback = 0xE8; // float32
                constexpr std::ptrdiff_t m_bUseBoundsCenter = 0xEC; // bool
                constexpr std::ptrdiff_t m_nInputMode = 0xF0; // ParticleFloatInputMode_t
                constexpr std::ptrdiff_t m_flMultFactor = 0xF4; // float32
                constexpr std::ptrdiff_t m_flInput0 = 0xF8; // float32
                constexpr std::ptrdiff_t m_flInput1 = 0xFC; // float32
                constexpr std::ptrdiff_t m_flOutput0 = 0x100; // float32
                constexpr std::ptrdiff_t m_flOutput1 = 0x104; // float32
                constexpr std::ptrdiff_t m_flNotchedRangeMin = 0x108; // float32
                constexpr std::ptrdiff_t m_flNotchedRangeMax = 0x10C; // float32
                constexpr std::ptrdiff_t m_flNotchedOutputOutside = 0x110; // float32
                constexpr std::ptrdiff_t m_flNotchedOutputInside = 0x114; // float32
                constexpr std::ptrdiff_t m_nRoundType = 0x118; // ParticleFloatRoundType_t
                constexpr std::ptrdiff_t m_nBiasType = 0x11C; // ParticleFloatBiasType_t
                constexpr std::ptrdiff_t m_flBiasParameter = 0x120; // float32
                constexpr std::ptrdiff_t m_Curve = 0x128; // CPiecewiseCurve
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace SolveIKChainPoseOpFixedSettings_t {
                constexpr std::ptrdiff_t m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
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
            namespace CNmEntityAttributeFloatEvent {
                constexpr std::ptrdiff_t m_FloatValue = 0x38; // CPiecewiseCurve
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
            namespace CNmIDSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_values = 0x38; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            namespace TwoBoneIKSettings_t {
                constexpr std::ptrdiff_t m_endEffectorType = 0x0; // IkEndEffectorType
                constexpr std::ptrdiff_t m_endEffectorAttachment = 0x10; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetType = 0x90; // IkTargetType
                constexpr std::ptrdiff_t m_targetAttachment = 0xA0; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetBoneIndex = 0x120; // int32
                constexpr std::ptrdiff_t m_hPositionParam = 0x124; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hRotationParam = 0x126; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128; // bool
                constexpr std::ptrdiff_t m_vLsFallbackHingeAxis = 0x130; // VectorAligned
                constexpr std::ptrdiff_t m_nFixedBoneIndex = 0x140; // int32
                constexpr std::ptrdiff_t m_nMiddleBoneIndex = 0x144; // int32
                constexpr std::ptrdiff_t m_nEndBoneIndex = 0x148; // int32
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x14C; // bool
                constexpr std::ptrdiff_t m_bConstrainTwist = 0x14D; // bool
                constexpr std::ptrdiff_t m_flMaxTwist = 0x150; // float32
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
            namespace CNmCachedPoseWriteTask {
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            namespace CAnimUpdateSharedData {
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
                constexpr std::ptrdiff_t m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32>
                constexpr std::ptrdiff_t m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
                constexpr std::ptrdiff_t m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
                constexpr std::ptrdiff_t m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
                constexpr std::ptrdiff_t m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
                constexpr std::ptrdiff_t m_settings = 0x78; // CAnimGraphSettingsManager
                constexpr std::ptrdiff_t m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
                constexpr std::ptrdiff_t m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
                constexpr std::ptrdiff_t m_rootNodePath = 0xB8; // CAnimNodePath
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimAttachment {
                constexpr std::ptrdiff_t m_influenceRotations = 0x0; // Quaternion[3]
                constexpr std::ptrdiff_t m_influenceOffsets = 0x30; // VectorAligned[3]
                constexpr std::ptrdiff_t m_influenceIndices = 0x60; // int32[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x6C; // float32[3]
                constexpr std::ptrdiff_t m_numInfluences = 0x78; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CFootTrajectories {
                constexpr std::ptrdiff_t m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
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
            namespace CNmIDComparisonNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_comparison = 0xC; // CNmIDComparisonNode::Comparison_t
                constexpr std::ptrdiff_t m_comparisionIDs = 0x10; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>
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
            namespace CEditableMotionGraph {
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
            namespace CNmConstFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_flValue = 0xC; // float32
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
            namespace CStringAnimTag {
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
            namespace CBoolAnimParameter {
                constexpr std::ptrdiff_t m_bDefaultValue = 0x78; // bool
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
            namespace CRagdollAnimTag {
                constexpr std::ptrdiff_t m_profileName = 0x58; // CGlobalSymbol
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
            namespace CMotionNode {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimNodeID
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
            namespace CNmStateMachineNode__CDefinition {
                constexpr std::ptrdiff_t m_stateDefinitions = 0x10; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::StateDefinition_t,5>
                constexpr std::ptrdiff_t m_nDefaultStateIndex = 0x130; // int16
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
            namespace CBodyGroupAnimTag {
                constexpr std::ptrdiff_t m_nPriority = 0x58; // int32
                constexpr std::ptrdiff_t m_bodyGroupSettings = 0x60; // CUtlVector<CBodyGroupSetting>
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
            namespace CNmModelSpaceBlendTask {
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
            namespace CNmZeroPoseNode__CDefinition {
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
            // 
            namespace CNmOrientationWarpNode__CDefinition {
                constexpr std::ptrdiff_t m_nClipReferenceNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nTargetValueNodeIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_bIsOffsetNode = 0xE; // bool
                constexpr std::ptrdiff_t m_bIsOffsetRelativeToCharacter = 0xF; // bool
                constexpr std::ptrdiff_t m_bWarpTranslation = 0x10; // bool
                constexpr std::ptrdiff_t m_samplingMode = 0x11; // CNmRootMotionData::SamplingMode_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace AnimParamID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
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
            namespace CNmBoneMaskNode__CDefinition {
                constexpr std::ptrdiff_t m_boneMaskID = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace ModelAnimGraph2Ref_t {
                constexpr std::ptrdiff_t m_sIdentifier = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_hGraph = 0x8; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace AnimationDecodeDebugDump_t {
                constexpr std::ptrdiff_t m_processingType = 0x0; // AnimationProcessingType_t
                constexpr std::ptrdiff_t m_elems = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
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
            namespace CNmVirtualParameterIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CSeqScaleSet {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_bRootOffset = 0x10; // bool
                constexpr std::ptrdiff_t m_vRootOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_nLocalBoneArray = 0x20; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_flBoneScaleArray = 0x38; // CUtlVector<float32>
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
            namespace PulseRuntimeCallInfoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
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
            // 
            namespace CDirectionalBlendUpdateNode {
                constexpr std::ptrdiff_t m_hSequences = 0x5C; // HSequence[8]
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendValueSource = 0x98; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x9C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_playbackSpeed = 0xA0; // float32
                constexpr std::ptrdiff_t m_duration = 0xA4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xA8; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xA9; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CNmGraphDefinition__ReferencedGraphSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_dataSlotIdx = 0x2; // int16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace ParamSpan_t {
                constexpr std::ptrdiff_t m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_flStartCycle = 0x1C; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x20; // float32
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
            namespace CFootStepTriggerUpdateNode {
                constexpr std::ptrdiff_t m_triggers = 0x70; // CUtlVector<FootStepTrigger>
                constexpr std::ptrdiff_t m_flTolerance = 0x8C; // float32
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
            namespace IKTargetSettings_t {
                constexpr std::ptrdiff_t m_TargetSource = 0x0; // IKTargetSource
                constexpr std::ptrdiff_t m_Bone = 0x8; // IKBoneNameAndIndex_t
                constexpr std::ptrdiff_t m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
                constexpr std::ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
                constexpr std::ptrdiff_t m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
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
            namespace CModelConfigElement_SetRenderColor {
                constexpr std::ptrdiff_t m_Color = 0x48; // Color
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
            namespace CNmAdditiveBlendTask {
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
            // 
            namespace CNmAnimationPoseNode__CDefinition {
                constexpr std::ptrdiff_t m_nPoseTimeValueNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_nDataSlotIdx = 0xC; // int16
                constexpr std::ptrdiff_t m_inputTimeRemapRange = 0x10; // Range_t
                constexpr std::ptrdiff_t m_flUserSpecifiedTime = 0x18; // float32
                constexpr std::ptrdiff_t m_bUseFramesAsInput = 0x1C; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CMotionSearchDB {
                constexpr std::ptrdiff_t m_rootNode = 0x0; // CMotionSearchNode
                constexpr std::ptrdiff_t m_residualQuantizer = 0x80; // CProductQuantizer
                constexpr std::ptrdiff_t m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
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
            namespace CMotionNodeBlend1D {
                constexpr std::ptrdiff_t m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
                constexpr std::ptrdiff_t m_nParamIndex = 0x40; // int32
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
            namespace CNmCurrentSyncEventNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_infoType = 0xC; // CNmCurrentSyncEventNode::InfoType_t
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
            namespace CNmControlParameterTargetNode__CDefinition {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace SkeletonBoneBounds_t {
                constexpr std::ptrdiff_t m_vecCenter = 0x0; // Vector
                constexpr std::ptrdiff_t m_vecSize = 0xC; // Vector
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
            namespace CTwoBoneIKUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // TwoBoneIKSettings_t
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            namespace VPhysXBodyPart_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_flMass = 0x4; // float32
                constexpr std::ptrdiff_t m_rnShape = 0x8; // VPhysics2ShapeDef_t
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x80; // uint16
                constexpr std::ptrdiff_t m_nReserved = 0x82; // uint16
                constexpr std::ptrdiff_t m_flInertiaScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flLinearDamping = 0x88; // float32
                constexpr std::ptrdiff_t m_flAngularDamping = 0x8C; // float32
                constexpr std::ptrdiff_t m_flLinearDrag = 0x90; // float32
                constexpr std::ptrdiff_t m_flAngularDrag = 0x94; // float32
                constexpr std::ptrdiff_t m_bOverrideMassCenter = 0x98; // bool
                constexpr std::ptrdiff_t m_vMassCenterOverride = 0x9C; // Vector
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
            namespace PulseRuntimeChunkIndex_t {
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
            namespace CTaskHandshakeAnimTag {
            }
            // Parent: None
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
            // 
            namespace CFollowPathUpdateNode {
                constexpr std::ptrdiff_t m_flBlendOutTime = 0x74; // float32
                constexpr std::ptrdiff_t m_bBlockNonPathMovement = 0x78; // bool
                constexpr std::ptrdiff_t m_bStopFeetAtGoal = 0x79; // bool
                constexpr std::ptrdiff_t m_bScaleSpeed = 0x7A; // bool
                constexpr std::ptrdiff_t m_flScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flMinAngle = 0x80; // float32
                constexpr std::ptrdiff_t m_flMaxAngle = 0x84; // float32
                constexpr std::ptrdiff_t m_flSpeedScaleBlending = 0x88; // float32
                constexpr std::ptrdiff_t m_turnDamping = 0x90; // CAnimInputDamping
                constexpr std::ptrdiff_t m_facingTarget = 0xA8; // AnimValueSource
                constexpr std::ptrdiff_t m_hParam = 0xAC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0xB0; // float32
                constexpr std::ptrdiff_t m_bTurnToFace = 0xB4; // bool
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            namespace AimMatrixOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_poseCacheHandles = 0x98; // CPoseHandle[10]
                constexpr std::ptrdiff_t m_eBlendMode = 0xC0; // AimMatrixBlendMode
                constexpr std::ptrdiff_t m_flMaxYawAngle = 0xC4; // float32
                constexpr std::ptrdiff_t m_flMaxPitchAngle = 0xC8; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xCC; // int32
                constexpr std::ptrdiff_t m_nBoneMaskIndex = 0xD0; // int32
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xD4; // bool
                constexpr std::ptrdiff_t m_bUseBiasAndClamp = 0xD5; // bool
                constexpr std::ptrdiff_t m_flBiasAndClampYawOffset = 0xD8; // float32
                constexpr std::ptrdiff_t m_flBiasAndClampPitchOffset = 0xDC; // float32
                constexpr std::ptrdiff_t m_biasAndClampBlendCurve = 0xE0; // CBlendCurve
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
            namespace CAnimScriptComponentUpdater {
                constexpr std::ptrdiff_t m_hScript = 0x30; // AnimScriptHandle
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
            namespace CRagdollUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x70; // int32
                constexpr std::ptrdiff_t m_poseControlMethod = 0x74; // RagdollPoseControl
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
            namespace CBoneConstraintBase {
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
            namespace CPathAnimMotorUpdater {
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
            // 
            namespace CMaterialAttributeAnimTag {
                constexpr std::ptrdiff_t m_AttributeName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_AttributeType = 0x60; // MatterialAttributeTagType_t
                constexpr std::ptrdiff_t m_flValue = 0x64; // float32
                constexpr std::ptrdiff_t m_Color = 0x68; // Color
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
            namespace CNmFootEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0xA; // int16
                constexpr std::ptrdiff_t m_phaseCondition = 0xC; // NmFootPhaseCondition_t
                constexpr std::ptrdiff_t m_eventConditionRules = 0x10; // CNmBitFlags
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
            namespace CNmFootEvent {
                constexpr std::ptrdiff_t m_phase = 0x19; // NmFootPhase_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            namespace CPhysSurfacePropertiesAudio {
                constexpr std::ptrdiff_t m_reflectivity = 0x0; // float32
                constexpr std::ptrdiff_t m_hardnessFactor = 0x4; // float32
                constexpr std::ptrdiff_t m_roughnessFactor = 0x8; // float32
                constexpr std::ptrdiff_t m_roughThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_hardThreshold = 0x10; // float32
                constexpr std::ptrdiff_t m_hardVelocityThreshold = 0x14; // float32
                constexpr std::ptrdiff_t m_flStaticImpactVolume = 0x18; // float32
                constexpr std::ptrdiff_t m_flOcclusionFactor = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            namespace CSeqAutoLayer {
                constexpr std::ptrdiff_t m_nLocalReference = 0x0; // int16
                constexpr std::ptrdiff_t m_nLocalPose = 0x2; // int16
                constexpr std::ptrdiff_t m_flags = 0x4; // CSeqAutoLayerFlag
                constexpr std::ptrdiff_t m_start = 0xC; // float32
                constexpr std::ptrdiff_t m_peak = 0x10; // float32
                constexpr std::ptrdiff_t m_tail = 0x14; // float32
                constexpr std::ptrdiff_t m_end = 0x18; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            namespace ModelEmbeddedMesh_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nMeshIndex = 0x10; // int32
                constexpr std::ptrdiff_t m_nDataBlock = 0x14; // int32
                constexpr std::ptrdiff_t m_nMorphBlock = 0x18; // int32
                constexpr std::ptrdiff_t m_vertexBuffers = 0x20; // CUtlVector<ModelMeshBufferData_t>
                constexpr std::ptrdiff_t m_indexBuffers = 0x38; // CUtlVector<ModelMeshBufferData_t>
                constexpr std::ptrdiff_t m_toolsBuffers = 0x50; // CUtlVector<ModelMeshBufferData_t>
                constexpr std::ptrdiff_t m_nVBIBBlock = 0x68; // int32
                constexpr std::ptrdiff_t m_nToolsVBBlock = 0x6C; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace PhysSoftbodyDesc_t {
                constexpr std::ptrdiff_t m_ParticleBoneHash = 0x0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
                constexpr std::ptrdiff_t m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
                constexpr std::ptrdiff_t m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
                constexpr std::ptrdiff_t m_InitPose = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            namespace CAnimSequenceParams {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float32
            }
            // Parent: None
            // Fields count: 14
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
            namespace CTargetWarpUpdateNode {
                constexpr std::ptrdiff_t m_eAngleMode = 0x74; // TargetWarpAngleMode_t
                constexpr std::ptrdiff_t m_hTargetPositionParameter = 0x78; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetUpVectorParameter = 0x7A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetFacePositionParameter = 0x7C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParameter = 0x7E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hDesiredMoveHeadingParameter = 0x80; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0x84; // TargetWarpCorrectionMethod
                constexpr std::ptrdiff_t m_eTargetWarpTimingMethod = 0x88; // TargetWarpTimingMethod
                constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x8C; // bool
                constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x8D; // bool
                constexpr std::ptrdiff_t m_bOnlyWarpWhenTagIsFound = 0x8E; // bool
                constexpr std::ptrdiff_t m_bWarpOrientationDuringTranslation = 0x8F; // bool
                constexpr std::ptrdiff_t m_bWarpAroundCenter = 0x90; // bool
                constexpr std::ptrdiff_t m_flMaxAngle = 0x94; // float32
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
            namespace CNmVirtualParameterBoolNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0xA; // int16
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
            namespace CFollowTargetUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // FollowTargetOpFixedSettings_t
                constexpr std::ptrdiff_t m_hParameterPosition = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterOrientation = 0x8A; // CAnimParamHandle
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
            namespace PulseRuntimeStateOffset_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
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
            namespace CCPPScriptComponentUpdater {
                constexpr std::ptrdiff_t m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CAnimData {
                constexpr std::ptrdiff_t m_name = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_animArray = 0x20; // CUtlVector<CAnimDesc>
                constexpr std::ptrdiff_t m_decoderArray = 0x38; // CUtlVector<CAnimDecoder>
                constexpr std::ptrdiff_t m_nMaxUniqueFrameIndex = 0x50; // int32
                constexpr std::ptrdiff_t m_segmentArray = 0x58; // CUtlVector<CAnimFrameSegment>
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
            namespace IKSolverSettings_t {
                constexpr std::ptrdiff_t m_SolverType = 0x0; // IKSolverType
                constexpr std::ptrdiff_t m_nNumIterations = 0x4; // int32
                constexpr std::ptrdiff_t m_EndEffectorRotationFixUpMode = 0x8; // EIKEndEffectorRotationFixUpMode
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
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CBinaryUpdateNode {
                constexpr std::ptrdiff_t m_pChild1 = 0x60; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_pChild2 = 0x70; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_timingBehavior = 0x80; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x84; // float32
                constexpr std::ptrdiff_t m_bResetChild1 = 0x88; // bool
                constexpr std::ptrdiff_t m_bResetChild2 = 0x89; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmParameterizedBlendNode__BlendRange_t {
                constexpr std::ptrdiff_t m_nInputIdx0 = 0x0; // int16
                constexpr std::ptrdiff_t m_nInputIdx1 = 0x2; // int16
                constexpr std::ptrdiff_t m_parameterValueRange = 0x4; // Range_t
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CAnimKeyData {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_boneArray = 0x10; // CUtlVector<CAnimBone>
                constexpr std::ptrdiff_t m_userArray = 0x28; // CUtlVector<CAnimUser>
                constexpr std::ptrdiff_t m_morphArray = 0x40; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_nChannelElements = 0x58; // int32
                constexpr std::ptrdiff_t m_dataChannelArray = 0x60; // CUtlVector<CAnimDataChannelDesc>
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
            namespace AttachmentHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CAnimMorphDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            namespace FootFixedData_t {
                constexpr std::ptrdiff_t m_vToeOffset = 0x0; // VectorAligned
                constexpr std::ptrdiff_t m_vHeelOffset = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_nTargetBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nAnkleBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_nIKAnchorBoneIndex = 0x28; // int32
                constexpr std::ptrdiff_t m_ikChainIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_flMaxIKLength = 0x30; // float32
                constexpr std::ptrdiff_t m_nFootIndex = 0x34; // int32
                constexpr std::ptrdiff_t m_nTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x40; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            namespace CMotionGraphGroup {
                constexpr std::ptrdiff_t m_searchDB = 0x0; // CMotionSearchDB
                constexpr std::ptrdiff_t m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
                constexpr std::ptrdiff_t m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
                constexpr std::ptrdiff_t m_sampleToConfig = 0xE8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hIsActiveScript = 0x100; // AnimScriptHandle
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CPulse_InstructionDebug {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x0; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nValueNodeID = 0x4; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_SequencePointName = 0x8; // CGlobalSymbol
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
            namespace CNmVectorNegateNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0xA; // int16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CNmSyncTrack__Event_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_startTime = 0x8; // NmPercent_t
                constexpr std::ptrdiff_t m_duration = 0xC; // NmPercent_t
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
            namespace CParticleCollectionRendererVecInput {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            namespace CNmTarget {
                constexpr std::ptrdiff_t m_transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_boneID = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bIsBoneTarget = 0x28; // bool
                constexpr std::ptrdiff_t m_bIsUsingBoneSpaceOffsets = 0x29; // bool
                constexpr std::ptrdiff_t m_bHasOffsets = 0x2A; // bool
                constexpr std::ptrdiff_t m_bIsSet = 0x2B; // bool
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
            namespace CNmControlParameterIDNode__CDefinition {
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
            namespace CNmBodyGroupEvent {
                constexpr std::ptrdiff_t m_groupName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nGroupValue = 0x28; // int32
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
            // 
            namespace CWayPointHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStartCycle = 0x74; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x78; // float32
                constexpr std::ptrdiff_t m_bOnlyGoals = 0x7C; // bool
                constexpr std::ptrdiff_t m_bPreventOvershoot = 0x7D; // bool
                constexpr std::ptrdiff_t m_bPreventUndershoot = 0x7E; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            namespace CMoodVData {
                constexpr std::ptrdiff_t m_sModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_nMoodType = 0xE0; // MoodType_t
                constexpr std::ptrdiff_t m_animationLayers = 0xE8; // CUtlVector<MoodAnimationLayer_t>
            }
            // Parent: None
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
            // 
            namespace CModelConfigElement_AttachedModel {
                constexpr std::ptrdiff_t m_InstanceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_EntityClass = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_hModel = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_vOffset = 0x60; // Vector
                constexpr std::ptrdiff_t m_aAngOffset = 0x6C; // QAngle
                constexpr std::ptrdiff_t m_AttachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_LocalAttachmentOffsetName = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x8C; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedColor = 0x8D; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedMaterialGroup = 0x8E; // bool
                constexpr std::ptrdiff_t m_BodygroupOnOtherModels = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_MaterialGroupOnOtherModels = 0x98; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            namespace CAnimTagManagerUpdater {
                constexpr std::ptrdiff_t m_tags = 0x38; // CUtlVector<CSmartPtr<CAnimTagBase>>
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
            namespace CParticleProperty {
            }
        }
    }
}
