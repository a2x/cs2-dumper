// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-04 13:40:42.514657500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: vphysics2.dll
        // Classes count: 124
        // Enums count: 0
        namespace vphysics2_dll {
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeJiggleBone {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_flLength = 0x4; // float32
                constexpr std::ptrdiff_t m_flTipMass = 0x8; // float32
                constexpr std::ptrdiff_t m_flYawStiffness = 0xC; // float32
                constexpr std::ptrdiff_t m_flYawDamping = 0x10; // float32
                constexpr std::ptrdiff_t m_flPitchStiffness = 0x14; // float32
                constexpr std::ptrdiff_t m_flPitchDamping = 0x18; // float32
                constexpr std::ptrdiff_t m_flAlongStiffness = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAlongDamping = 0x20; // float32
                constexpr std::ptrdiff_t m_flAngleLimit = 0x24; // float32
                constexpr std::ptrdiff_t m_flMinYaw = 0x28; // float32
                constexpr std::ptrdiff_t m_flMaxYaw = 0x2C; // float32
                constexpr std::ptrdiff_t m_flYawFriction = 0x30; // float32
                constexpr std::ptrdiff_t m_flYawBounce = 0x34; // float32
                constexpr std::ptrdiff_t m_flMinPitch = 0x38; // float32
                constexpr std::ptrdiff_t m_flMaxPitch = 0x3C; // float32
                constexpr std::ptrdiff_t m_flPitchFriction = 0x40; // float32
                constexpr std::ptrdiff_t m_flPitchBounce = 0x44; // float32
                constexpr std::ptrdiff_t m_flBaseMass = 0x48; // float32
                constexpr std::ptrdiff_t m_flBaseStiffness = 0x4C; // float32
                constexpr std::ptrdiff_t m_flBaseDamping = 0x50; // float32
                constexpr std::ptrdiff_t m_flBaseMinLeft = 0x54; // float32
                constexpr std::ptrdiff_t m_flBaseMaxLeft = 0x58; // float32
                constexpr std::ptrdiff_t m_flBaseLeftFriction = 0x5C; // float32
                constexpr std::ptrdiff_t m_flBaseMinUp = 0x60; // float32
                constexpr std::ptrdiff_t m_flBaseMaxUp = 0x64; // float32
                constexpr std::ptrdiff_t m_flBaseUpFriction = 0x68; // float32
                constexpr std::ptrdiff_t m_flBaseMinForward = 0x6C; // float32
                constexpr std::ptrdiff_t m_flBaseMaxForward = 0x70; // float32
                constexpr std::ptrdiff_t m_flBaseForwardFriction = 0x74; // float32
                constexpr std::ptrdiff_t m_flRadius0 = 0x78; // float32
                constexpr std::ptrdiff_t m_flRadius1 = 0x7C; // float32
                constexpr std::ptrdiff_t m_vPoint0 = 0x80; // 
                constexpr std::ptrdiff_t m_vPoint1 = 0x8C; // 
                constexpr std::ptrdiff_t m_nCollisionMask = 0x98; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeNamedJiggleBone {
                constexpr std::ptrdiff_t m_strParentBone = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_transform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_nJiggleParent = 0x30; // uint32
                constexpr std::ptrdiff_t m_jiggleBone = 0x34; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeIndexedJiggleBone {
                constexpr std::ptrdiff_t m_nNode = 0x0; // uint32
                constexpr std::ptrdiff_t m_nJiggleParent = 0x4; // uint32
                constexpr std::ptrdiff_t m_jiggleBone = 0x8; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeBase_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16
                constexpr std::ptrdiff_t nDummy = 0x2; // uint16[3]
                constexpr std::ptrdiff_t nNodeX0 = 0x8; // uint16
                constexpr std::ptrdiff_t nNodeX1 = 0xA; // uint16
                constexpr std::ptrdiff_t nNodeY0 = 0xC; // uint16
                constexpr std::ptrdiff_t nNodeY1 = 0xE; // uint16
                constexpr std::ptrdiff_t qAdjust = 0x10; // QuaternionStorage
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdNodeBase_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4]
                constexpr std::ptrdiff_t nNodeX0 = 0x8; // uint16[4]
                constexpr std::ptrdiff_t nNodeX1 = 0x10; // uint16[4]
                constexpr std::ptrdiff_t nNodeY0 = 0x18; // uint16[4]
                constexpr std::ptrdiff_t nNodeY1 = 0x20; // uint16[4]
                constexpr std::ptrdiff_t nDummy = 0x28; // uint16[4]
                constexpr std::ptrdiff_t qAdjust = 0x30; // FourQuaternions
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeQuad_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4]
                constexpr std::ptrdiff_t flSlack = 0x8; // float32
                constexpr std::ptrdiff_t vShape = 0xC; // Vector4D[4]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdQuad_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][4]
                constexpr std::ptrdiff_t f4Slack = 0x20; // fltx4
                constexpr std::ptrdiff_t vShape = 0x30; // FourVectors[4]
                constexpr std::ptrdiff_t f4Weights = 0xF0; // fltx4[4]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdTri_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint32[4][3]
                constexpr std::ptrdiff_t w1 = 0x30; // fltx4
                constexpr std::ptrdiff_t w2 = 0x40; // fltx4
                constexpr std::ptrdiff_t v1x = 0x50; // fltx4
                constexpr std::ptrdiff_t v2 = 0x60; // FourVectors2D
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdRodConstraint_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t f4MaxDist = 0x10; // fltx4
                constexpr std::ptrdiff_t f4MinDist = 0x20; // fltx4
                constexpr std::ptrdiff_t f4Weight0 = 0x30; // fltx4
                constexpr std::ptrdiff_t f4RelaxationFactor = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdRodConstraintAnim_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t f4Weight0 = 0x10; // fltx4
                constexpr std::ptrdiff_t f4RelaxationFactor = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeRodConstraint_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t flMaxDist = 0x4; // float32
                constexpr std::ptrdiff_t flMinDist = 0x8; // float32
                constexpr std::ptrdiff_t flWeight0 = 0xC; // float32
                constexpr std::ptrdiff_t flRelaxationFactor = 0x10; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTwistConstraint_t {
                constexpr std::ptrdiff_t nNodeOrient = 0x0; // uint16
                constexpr std::ptrdiff_t nNodeEnd = 0x2; // uint16
                constexpr std::ptrdiff_t flTwistRelax = 0x4; // float32
                constexpr std::ptrdiff_t flSwingRelax = 0x8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAxialEdgeBend_t {
                constexpr std::ptrdiff_t te = 0x0; // float32
                constexpr std::ptrdiff_t tv = 0x4; // float32
                constexpr std::ptrdiff_t flDist = 0x8; // float32
                constexpr std::ptrdiff_t flWeight = 0xC; // float32[4]
                constexpr std::ptrdiff_t nNode = 0x1C; // uint16[6]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlOffset_t {
                constexpr std::ptrdiff_t vOffset = 0x0; // 
                constexpr std::ptrdiff_t nCtrlParent = 0xC; // uint16
                constexpr std::ptrdiff_t nCtrlChild = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlOsOffset_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
                constexpr std::ptrdiff_t nCtrlChild = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFollowNode_t {
                constexpr std::ptrdiff_t nParentNode = 0x0; // uint16
                constexpr std::ptrdiff_t nChildNode = 0x2; // uint16
                constexpr std::ptrdiff_t flWeight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCollisionPlane_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
                constexpr std::ptrdiff_t nChildNode = 0x2; // uint16
                constexpr std::ptrdiff_t m_Plane = 0x4; // RnPlane_t
                constexpr std::ptrdiff_t flStrength = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeIntegrator_t {
                constexpr std::ptrdiff_t flPointDamping = 0x0; // float32
                constexpr std::ptrdiff_t flAnimationForceAttraction = 0x4; // float32
                constexpr std::ptrdiff_t flAnimationVertexAttraction = 0x8; // float32
                constexpr std::ptrdiff_t flGravity = 0xC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSpringIntegrator_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t flSpringRestLength = 0x4; // float32
                constexpr std::ptrdiff_t flSpringConstant = 0x8; // float32
                constexpr std::ptrdiff_t flSpringDamping = 0xC; // float32
                constexpr std::ptrdiff_t flNodeWeight0 = 0x10; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdSpringIntegrator_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t flSpringRestLength = 0x10; // fltx4
                constexpr std::ptrdiff_t flSpringConstant = 0x20; // fltx4
                constexpr std::ptrdiff_t flSpringDamping = 0x30; // fltx4
                constexpr std::ptrdiff_t flNodeWeight0 = 0x40; // fltx4
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeWorldCollisionParams_t {
                constexpr std::ptrdiff_t flWorldFriction = 0x0; // float32
                constexpr std::ptrdiff_t flGroundFriction = 0x4; // float32
                constexpr std::ptrdiff_t nListBegin = 0x8; // uint16
                constexpr std::ptrdiff_t nListEnd = 0xA; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTaperedCapsuleStretch_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t nCollisionMask = 0x4; // uint16
                constexpr std::ptrdiff_t nDummy = 0x6; // uint16
                constexpr std::ptrdiff_t flRadius = 0x8; // float32[2]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTaperedCapsuleRigid_t {
                constexpr std::ptrdiff_t vSphere = 0x0; // fltx4[2]
                constexpr std::ptrdiff_t nNode = 0x20; // uint16
                constexpr std::ptrdiff_t nCollisionMask = 0x22; // uint16
                constexpr std::ptrdiff_t nVertexMapIndex = 0x24; // uint16
                constexpr std::ptrdiff_t nFlags = 0x26; // uint16
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSphereRigid_t {
                constexpr std::ptrdiff_t vSphere = 0x0; // fltx4
                constexpr std::ptrdiff_t nNode = 0x10; // uint16
                constexpr std::ptrdiff_t nCollisionMask = 0x12; // uint16
                constexpr std::ptrdiff_t nVertexMapIndex = 0x14; // uint16
                constexpr std::ptrdiff_t nFlags = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTreeChildren_t {
                constexpr std::ptrdiff_t nChild = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitMatrix_t {
                constexpr std::ptrdiff_t bone = 0x0; // CTransform
                constexpr std::ptrdiff_t vCenter = 0x20; // 
                constexpr std::ptrdiff_t nEnd = 0x2C; // uint16
                constexpr std::ptrdiff_t nNode = 0x2E; // uint16
                constexpr std::ptrdiff_t nBeginDynamic = 0x30; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitWeight_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // float32
                constexpr std::ptrdiff_t nNode = 0x4; // uint16
                constexpr std::ptrdiff_t nDummy = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeReverseOffset_t {
                constexpr std::ptrdiff_t vOffset = 0x0; // 
                constexpr std::ptrdiff_t nBoneCtrl = 0xC; // uint16
                constexpr std::ptrdiff_t nTargetNode = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAnimStrayRadius_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
                constexpr std::ptrdiff_t flMaxDist = 0x4; // float32
                constexpr std::ptrdiff_t flRelaxationFactor = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdAnimStrayRadius_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
                constexpr std::ptrdiff_t flMaxDist = 0x10; // fltx4
                constexpr std::ptrdiff_t flRelaxationFactor = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeKelagerBend2_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // float32[3]
                constexpr std::ptrdiff_t flHeight0 = 0xC; // float32
                constexpr std::ptrdiff_t nNode = 0x10; // uint16[3]
                constexpr std::ptrdiff_t nReserved = 0x16; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlSoftOffset_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
                constexpr std::ptrdiff_t nCtrlChild = 0x2; // uint16
                constexpr std::ptrdiff_t vOffset = 0x4; // 
                constexpr std::ptrdiff_t flAlpha = 0x10; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTri_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[3]
                constexpr std::ptrdiff_t w1 = 0x8; // float32
                constexpr std::ptrdiff_t w2 = 0xC; // float32
                constexpr std::ptrdiff_t v1x = 0x10; // float32
                constexpr std::ptrdiff_t v2 = 0x14; // Vector2D
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBoxRigid_t {
                constexpr std::ptrdiff_t tmFrame2 = 0x0; // CTransform
                constexpr std::ptrdiff_t nNode = 0x20; // uint16
                constexpr std::ptrdiff_t nCollisionMask = 0x22; // uint16
                constexpr std::ptrdiff_t vSize = 0x24; // 
                constexpr std::ptrdiff_t nVertexMapIndex = 0x30; // uint16
                constexpr std::ptrdiff_t nFlags = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeRigidColliderIndices_t {
                constexpr std::ptrdiff_t m_nTaperedCapsuleRigidIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_nSphereRigidIndex = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBoxRigidIndex = 0x4; // uint16
                constexpr std::ptrdiff_t m_nCollisionPlaneIndex = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeMorphLayerDepr_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_Nodes = 0x10; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_InitPos = 0x28; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_Gravity = 0x40; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalStrength = 0x58; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalDamping = 0x70; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFlags = 0x88; // uint32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeVertexMapDesc_t {
                constexpr std::ptrdiff_t sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t nColor = 0xC; // uint32
                constexpr std::ptrdiff_t nFlags = 0x10; // uint32
                constexpr std::ptrdiff_t nVertexBase = 0x14; // uint16
                constexpr std::ptrdiff_t nVertexCount = 0x16; // uint16
                constexpr std::ptrdiff_t nMapOffset = 0x18; // uint32
                constexpr std::ptrdiff_t nNodeListOffset = 0x1C; // uint32
                constexpr std::ptrdiff_t vCenterOfMass = 0x20; // 
                constexpr std::ptrdiff_t flVolumetricSolveStrength = 0x2C; // float32
                constexpr std::ptrdiff_t nScaleSourceNode = 0x30; // int16
                constexpr std::ptrdiff_t nNodeListCount = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeEffectDesc_t {
                constexpr std::ptrdiff_t sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t nType = 0xC; // int32
                constexpr std::ptrdiff_t m_Params = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeWindBase_t {
                constexpr std::ptrdiff_t nNodeX0 = 0x0; // uint16
                constexpr std::ptrdiff_t nNodeX1 = 0x2; // uint16
                constexpr std::ptrdiff_t nNodeY0 = 0x4; // uint16
                constexpr std::ptrdiff_t nNodeY1 = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FourVectors2D {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeEdgeDesc_t {
                constexpr std::ptrdiff_t nEdge = 0x0; // uint16[2]
                constexpr std::ptrdiff_t nSide = 0x4; // uint16[2][2]
                constexpr std::ptrdiff_t nVirtElem = 0xC; // uint16[2]
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OldFeEdge_t {
                constexpr std::ptrdiff_t m_flK = 0x0; // float32[3]
                constexpr std::ptrdiff_t invA = 0xC; // float32
                constexpr std::ptrdiff_t t = 0x10; // float32
                constexpr std::ptrdiff_t flThetaRelaxed = 0x14; // float32
                constexpr std::ptrdiff_t flThetaFactor = 0x18; // float32
                constexpr std::ptrdiff_t c01 = 0x1C; // float32
                constexpr std::ptrdiff_t c02 = 0x20; // float32
                constexpr std::ptrdiff_t c03 = 0x24; // float32
                constexpr std::ptrdiff_t c04 = 0x28; // float32
                constexpr std::ptrdiff_t flAxialModelDist = 0x2C; // float32
                constexpr std::ptrdiff_t flAxialModelWeights = 0x30; // float32[4]
                constexpr std::ptrdiff_t m_nNode = 0x40; // uint16[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeWeightedNode_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16
                constexpr std::ptrdiff_t nWeight = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeStiffHingeBuild_t {
                constexpr std::ptrdiff_t flMaxAngle = 0x0; // float32
                constexpr std::ptrdiff_t flStrength = 0x4; // float32
                constexpr std::ptrdiff_t flMotionBias = 0x8; // float32[3]
                constexpr std::ptrdiff_t nNode = 0x14; // uint16[3]
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBandBendLimit_t {
                constexpr std::ptrdiff_t flDistMin = 0x0; // float32
                constexpr std::ptrdiff_t flDistMax = 0x4; // float32
                constexpr std::ptrdiff_t nNode = 0x8; // uint16[6]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSoftParent_t {
                constexpr std::ptrdiff_t nParent = 0x0; // int32
                constexpr std::ptrdiff_t flAlpha = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnPlane_t {
                constexpr std::ptrdiff_t m_vNormal = 0x0; // 
                constexpr std::ptrdiff_t m_flOffset = 0xC; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CovMatrix3 {
                constexpr std::ptrdiff_t m_vDiag = 0x0; // 
                constexpr std::ptrdiff_t m_flXY = 0xC; // float32
                constexpr std::ptrdiff_t m_flXZ = 0x10; // float32
                constexpr std::ptrdiff_t m_flYZ = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FourCovMatrices3 {
                constexpr std::ptrdiff_t m_vDiag = 0x0; // FourVectors
                constexpr std::ptrdiff_t m_flXY = 0x30; // fltx4
                constexpr std::ptrdiff_t m_flXZ = 0x40; // fltx4
                constexpr std::ptrdiff_t m_flYZ = 0x50; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitInfluence_t {
                constexpr std::ptrdiff_t nVertexNode = 0x0; // uint32
                constexpr std::ptrdiff_t flWeight = 0x4; // float32
                constexpr std::ptrdiff_t nMatrixNode = 0x8; // uint32
            }
            // Parent: FeTaperedCapsuleRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildTaperedCapsuleRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x30; // int32
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x34; // uint32
            }
            // Parent: FeBoxRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildBoxRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x40; // int32
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x44; // uint32
            }
            // Parent: FeSphereRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildSphereRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x20; // int32
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x24; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSourceEdge_t {
                constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeVertexMapBuild_t {
                constexpr std::ptrdiff_t m_VertexMapName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_Color = 0xC; // Color
                constexpr std::ptrdiff_t m_flVolumetricSolveStrength = 0x10; // float32
                constexpr std::ptrdiff_t m_nScaleSourceNode = 0x14; // int32
                constexpr std::ptrdiff_t m_Weights = 0x18; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeVertexMapBuildArray {
                constexpr std::ptrdiff_t m_Array = 0x0; // CUtlVector<FeVertexMapBuild_t*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeProxyVertexMap_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeMorphLayer {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_Nodes = 0x10; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_InitPos = 0x28; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_Gravity = 0x40; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalStrength = 0x58; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_GoalDamping = 0x70; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace Dop26_t {
                constexpr std::ptrdiff_t m_flSupport = 0x0; // float32[26]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnCapsule_t {
                constexpr std::ptrdiff_t m_vCenter = 0x0; // Vector[2]
                constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnVertex_t {
                constexpr std::ptrdiff_t m_nEdge = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHalfEdge_t {
                constexpr std::ptrdiff_t m_nNext = 0x0; // uint8
                constexpr std::ptrdiff_t m_nTwin = 0x1; // uint8
                constexpr std::ptrdiff_t m_nOrigin = 0x2; // uint8
                constexpr std::ptrdiff_t m_nFace = 0x3; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnFace_t {
                constexpr std::ptrdiff_t m_nEdge = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRegionSVM {
                constexpr std::ptrdiff_t m_Planes = 0x0; // CUtlVector<RnPlane_t>
                constexpr std::ptrdiff_t m_Nodes = 0x18; // CUtlVector<uint32>
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHull_t {
                constexpr std::ptrdiff_t m_vCentroid = 0x0; // 
                constexpr std::ptrdiff_t m_flMaxAngularRadius = 0xC; // float32
                constexpr std::ptrdiff_t m_Bounds = 0x10; // AABB_t
                constexpr std::ptrdiff_t m_vOrthographicAreas = 0x28; // 
                constexpr std::ptrdiff_t m_MassProperties = 0x34; // matrix3x4_t
                constexpr std::ptrdiff_t m_flVolume = 0x64; // float32
                constexpr std::ptrdiff_t m_flSurfaceArea = 0x68; // float32
                constexpr std::ptrdiff_t m_Vertices = 0x70; // CUtlVector<RnVertex_t>
                constexpr std::ptrdiff_t m_VertexPositions = 0x88; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_Edges = 0xA0; // CUtlVector<RnHalfEdge_t>
                constexpr std::ptrdiff_t m_Faces = 0xB8; // CUtlVector<RnFace_t>
                constexpr std::ptrdiff_t m_FacePlanes = 0xD0; // CUtlVector<RnPlane_t>
                constexpr std::ptrdiff_t m_nFlags = 0xE8; // uint32
                constexpr std::ptrdiff_t m_pRegionSVM = 0xF0; // CRegionSVM*
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnTriangle_t {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnWing_t {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnNode_t {
                constexpr std::ptrdiff_t m_vMin = 0x0; // 
                constexpr std::ptrdiff_t m_nChildren = 0xC; // uint32
                constexpr std::ptrdiff_t m_vMax = 0x10; // 
                constexpr std::ptrdiff_t m_nTriangleOffset = 0x1C; // uint32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnMesh_t {
                constexpr std::ptrdiff_t m_vMin = 0x0; // 
                constexpr std::ptrdiff_t m_vMax = 0xC; // 
                constexpr std::ptrdiff_t m_Nodes = 0x18; // CUtlVector<RnNode_t>
                constexpr std::ptrdiff_t m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
                constexpr std::ptrdiff_t m_Triangles = 0x48; // CUtlVector<RnTriangle_t>
                constexpr std::ptrdiff_t m_Wings = 0x60; // CUtlVector<RnWing_t>
                constexpr std::ptrdiff_t m_Materials = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_vOrthographicAreas = 0x90; // 
                constexpr std::ptrdiff_t m_nFlags = 0x9C; // uint32
                constexpr std::ptrdiff_t m_nDebugFlags = 0xA0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnShapeDesc_t {
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x0; // uint32
                constexpr std::ptrdiff_t m_nSurfacePropertyIndex = 0x4; // uint32
                constexpr std::ptrdiff_t m_UserFriendlyName = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnBlendVertex_t {
                constexpr std::ptrdiff_t m_nWeight0 = 0x0; // uint16
                constexpr std::ptrdiff_t m_nIndex0 = 0x2; // uint16
                constexpr std::ptrdiff_t m_nWeight1 = 0x4; // uint16
                constexpr std::ptrdiff_t m_nIndex1 = 0x6; // uint16
                constexpr std::ptrdiff_t m_nWeight2 = 0x8; // uint16
                constexpr std::ptrdiff_t m_nIndex2 = 0xA; // uint16
                constexpr std::ptrdiff_t m_nFlags = 0xC; // uint16
                constexpr std::ptrdiff_t m_nTargetIndex = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CastSphereSATParams_t {
                constexpr std::ptrdiff_t m_vRayStart = 0x0; // 
                constexpr std::ptrdiff_t m_vRayDelta = 0xC; // 
                constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxFraction = 0x1C; // float32
                constexpr std::ptrdiff_t m_flScale = 0x20; // float32
                constexpr std::ptrdiff_t m_pHull = 0x28; // RnHull_t*
            }
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnBodyDesc_t {
                constexpr std::ptrdiff_t m_sDebugName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vPosition = 0x8; // 
                constexpr std::ptrdiff_t m_qOrientation = 0x14; // QuaternionStorage
                constexpr std::ptrdiff_t m_vLinearVelocity = 0x24; // 
                constexpr std::ptrdiff_t m_vAngularVelocity = 0x30; // 
                constexpr std::ptrdiff_t m_vLocalMassCenter = 0x3C; // 
                constexpr std::ptrdiff_t m_LocalInertiaInv = 0x48; // Vector[3]
                constexpr std::ptrdiff_t m_flMassInv = 0x6C; // float32
                constexpr std::ptrdiff_t m_flGameMass = 0x70; // float32
                constexpr std::ptrdiff_t m_flInertiaScaleInv = 0x74; // float32
                constexpr std::ptrdiff_t m_flLinearDamping = 0x78; // float32
                constexpr std::ptrdiff_t m_flAngularDamping = 0x7C; // float32
                constexpr std::ptrdiff_t m_flLinearDrag = 0x80; // float32
                constexpr std::ptrdiff_t m_flAngularDrag = 0x84; // float32
                constexpr std::ptrdiff_t m_flLinearBuoyancyDrag = 0x88; // float32
                constexpr std::ptrdiff_t m_flAngularBuoyancyDrag = 0x8C; // float32
                constexpr std::ptrdiff_t m_vLastAwakeForceAccum = 0x90; // 
                constexpr std::ptrdiff_t m_vLastAwakeTorqueAccum = 0x9C; // 
                constexpr std::ptrdiff_t m_flBuoyancyFactor = 0xA8; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0xAC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0xB0; // float32
                constexpr std::ptrdiff_t m_nBodyType = 0xB4; // int32
                constexpr std::ptrdiff_t m_nGameIndex = 0xB8; // uint32
                constexpr std::ptrdiff_t m_nGameFlags = 0xBC; // uint32
                constexpr std::ptrdiff_t m_nMinVelocityIterations = 0xC0; // int8
                constexpr std::ptrdiff_t m_nMinPositionIterations = 0xC1; // int8
                constexpr std::ptrdiff_t m_nMassPriority = 0xC2; // int8
                constexpr std::ptrdiff_t m_bEnabled = 0xC3; // bool
                constexpr std::ptrdiff_t m_bSleeping = 0xC4; // bool
                constexpr std::ptrdiff_t m_bIsContinuousEnabled = 0xC5; // bool
                constexpr std::ptrdiff_t m_bDragEnabled = 0xC6; // bool
                constexpr std::ptrdiff_t m_bBuoyancyDragEnabled = 0xC7; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0xC8; // bool
                constexpr std::ptrdiff_t m_bSpeculativeEnabled = 0xC9; // bool
                constexpr std::ptrdiff_t m_bHasShadowController = 0xCA; // bool
            }
            // Parent: RnBodyDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace vphysics_save_cphysicsbody_t {
                constexpr std::ptrdiff_t m_nOldPointer = 0xD0; // uint64
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTiltTwistConstraint {
                constexpr std::ptrdiff_t m_nTargetAxis = 0x70; // int32
                constexpr std::ptrdiff_t m_nSlaveAxis = 0x74; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_LibraryA {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace FakeEntity_tAPI {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_RegisterInfo {
                constexpr std::ptrdiff_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_Type = 0x8; // CPulseValueFullType
                constexpr std::ptrdiff_t m_OriginName = 0x18; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x50; // int32
                constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x54; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
                constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                constexpr std::ptrdiff_t m_DomainValue = 0x28; // CBufferString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultValue = 0x20; // KeyValues3
                constexpr std::ptrdiff_t m_bIsPublic = 0x32; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Value = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ParamType = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntity = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetInput = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Param = 0x18; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x30; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_Outparams = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x10; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x30; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x38; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ParentMapName = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Chunks = 0x18; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x30; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x48; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x60; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0x78; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0x90; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xA8; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_OutputConnections = 0xC0; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0xC; // int32
            }
            // Parent: CPulse_OutflowConnection
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_ResumePoint {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_Outflow_TestRandomYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_Outflow_TestExplicitYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_Value_TestValue50 {
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_bPauseForPreviousEvents = 0x4; // bool
                constexpr std::ptrdiff_t m_bCallModeSync = 0x5; // bool
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_TestDomain {
                constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xD8; // bool
                constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xD9; // bool
                constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
                constexpr std::ptrdiff_t m_nNextValidateIndex = 0xDC; // int32
                constexpr std::ptrdiff_t m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0xF8; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            namespace CPulseCell_Step_TestDomainEntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_TestWaitWithCursorState {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeCancel = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeFail = 0x68; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
                constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
                constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_DerivedDomain {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_NoInflow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            namespace CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_WaitForCursorsWithTagBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x60; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
            }
            // Parent: CPulseCell_WaitForCursorsWithTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x60; // int32
            }
        }
    }
}
