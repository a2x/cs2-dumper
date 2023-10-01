#pragma once

#include <cstddef>

namespace CFeIndexedJiggleBone {
    constexpr std::ptrdiff_t m_nNode = 0x0; // uint32
    constexpr std::ptrdiff_t m_nJiggleParent = 0x4; // uint32
    constexpr std::ptrdiff_t m_jiggleBone = 0x8; // CFeJiggleBone
}

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
    constexpr std::ptrdiff_t m_vPoint0 = 0x80; // Vector
    constexpr std::ptrdiff_t m_vPoint1 = 0x8C; // Vector
    constexpr std::ptrdiff_t m_nCollisionMask = 0x98; // uint16
}

namespace CFeMorphLayer {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
    constexpr std::ptrdiff_t m_Nodes = 0x10; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_InitPos = 0x28; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_Gravity = 0x40; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_GoalStrength = 0x58; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_GoalDamping = 0x70; // CUtlVector< float32 >
}

namespace CFeNamedJiggleBone {
    constexpr std::ptrdiff_t m_strParentBone = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_transform = 0x10; // CTransform
    constexpr std::ptrdiff_t m_nJiggleParent = 0x30; // uint32
    constexpr std::ptrdiff_t m_jiggleBone = 0x34; // CFeJiggleBone
}

namespace CFeVertexMapBuildArray {
    constexpr std::ptrdiff_t m_Array = 0x0; // CUtlVector< FeVertexMapBuild_t* >
}

namespace CRegionSVM {
    constexpr std::ptrdiff_t m_Planes = 0x0; // CUtlVector< RnPlane_t >
    constexpr std::ptrdiff_t m_Nodes = 0x18; // CUtlVector< uint32 >
}

namespace CastSphereSATParams_t {
    constexpr std::ptrdiff_t m_vRayStart = 0x0; // Vector
    constexpr std::ptrdiff_t m_vRayDelta = 0xC; // Vector
    constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
    constexpr std::ptrdiff_t m_flMaxFraction = 0x1C; // float32
    constexpr std::ptrdiff_t m_flScale = 0x20; // float32
    constexpr std::ptrdiff_t m_pHull = 0x28; // RnHull_t*
}

namespace CovMatrix3 {
    constexpr std::ptrdiff_t m_vDiag = 0x0; // Vector
    constexpr std::ptrdiff_t m_flXY = 0xC; // float32
    constexpr std::ptrdiff_t m_flXZ = 0x10; // float32
    constexpr std::ptrdiff_t m_flYZ = 0x14; // float32
}

namespace Dop26_t {
    constexpr std::ptrdiff_t m_flSupport = 0x0; // float32[26]
}

namespace FeAnimStrayRadius_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
    constexpr std::ptrdiff_t flMaxDist = 0x4; // float32
    constexpr std::ptrdiff_t flRelaxationFactor = 0x8; // float32
}

namespace FeAxialEdgeBend_t {
    constexpr std::ptrdiff_t te = 0x0; // float32
    constexpr std::ptrdiff_t tv = 0x4; // float32
    constexpr std::ptrdiff_t flDist = 0x8; // float32
    constexpr std::ptrdiff_t flWeight = 0xC; // float32[4]
    constexpr std::ptrdiff_t nNode = 0x1C; // uint16[6]
}

namespace FeBandBendLimit_t {
    constexpr std::ptrdiff_t flDistMin = 0x0; // float32
    constexpr std::ptrdiff_t flDistMax = 0x4; // float32
    constexpr std::ptrdiff_t nNode = 0x8; // uint16[6]
}

namespace FeBoxRigid_t {
    constexpr std::ptrdiff_t tmFrame2 = 0x0; // CTransform
    constexpr std::ptrdiff_t nNode = 0x20; // uint16
    constexpr std::ptrdiff_t nCollisionMask = 0x22; // uint16
    constexpr std::ptrdiff_t vSize = 0x24; // Vector
    constexpr std::ptrdiff_t nVertexMapIndex = 0x30; // uint16
    constexpr std::ptrdiff_t nFlags = 0x32; // uint16
}

namespace FeBuildBoxRigid_t {
    constexpr std::ptrdiff_t m_nPriority = 0x40; // int32
    constexpr std::ptrdiff_t m_nVertexMapHash = 0x44; // uint32
}

namespace FeBuildSphereRigid_t {
    constexpr std::ptrdiff_t m_nPriority = 0x20; // int32
    constexpr std::ptrdiff_t m_nVertexMapHash = 0x24; // uint32
}

namespace FeBuildTaperedCapsuleRigid_t {
    constexpr std::ptrdiff_t m_nPriority = 0x30; // int32
    constexpr std::ptrdiff_t m_nVertexMapHash = 0x34; // uint32
}

namespace FeCollisionPlane_t {
    constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
    constexpr std::ptrdiff_t nChildNode = 0x2; // uint16
    constexpr std::ptrdiff_t m_Plane = 0x4; // RnPlane_t
    constexpr std::ptrdiff_t flStrength = 0x14; // float32
}

namespace FeCtrlOffset_t {
    constexpr std::ptrdiff_t vOffset = 0x0; // Vector
    constexpr std::ptrdiff_t nCtrlParent = 0xC; // uint16
    constexpr std::ptrdiff_t nCtrlChild = 0xE; // uint16
}

namespace FeCtrlOsOffset_t {
    constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
    constexpr std::ptrdiff_t nCtrlChild = 0x2; // uint16
}

namespace FeCtrlSoftOffset_t {
    constexpr std::ptrdiff_t nCtrlParent = 0x0; // uint16
    constexpr std::ptrdiff_t nCtrlChild = 0x2; // uint16
    constexpr std::ptrdiff_t vOffset = 0x4; // Vector
    constexpr std::ptrdiff_t flAlpha = 0x10; // float32
}

namespace FeEdgeDesc_t {
    constexpr std::ptrdiff_t nEdge = 0x0; // uint16[2]
    constexpr std::ptrdiff_t nSide = 0x4; // uint16[2][2]
    constexpr std::ptrdiff_t nVirtElem = 0xC; // uint16[2]
}

namespace FeEffectDesc_t {
    constexpr std::ptrdiff_t sName = 0x0; // CUtlString
    constexpr std::ptrdiff_t nNameHash = 0x8; // uint32
    constexpr std::ptrdiff_t nType = 0xC; // int32
    constexpr std::ptrdiff_t m_Params = 0x10; // KeyValues3
}

namespace FeFitInfluence_t {
    constexpr std::ptrdiff_t nVertexNode = 0x0; // uint32
    constexpr std::ptrdiff_t flWeight = 0x4; // float32
    constexpr std::ptrdiff_t nMatrixNode = 0x8; // uint32
}

namespace FeFitMatrix_t {
    constexpr std::ptrdiff_t bone = 0x0; // CTransform
    constexpr std::ptrdiff_t vCenter = 0x20; // Vector
    constexpr std::ptrdiff_t nEnd = 0x2C; // uint16
    constexpr std::ptrdiff_t nNode = 0x2E; // uint16
    constexpr std::ptrdiff_t nBeginDynamic = 0x30; // uint16
}

namespace FeFitWeight_t {
    constexpr std::ptrdiff_t flWeight = 0x0; // float32
    constexpr std::ptrdiff_t nNode = 0x4; // uint16
    constexpr std::ptrdiff_t nDummy = 0x6; // uint16
}

namespace FeFollowNode_t {
    constexpr std::ptrdiff_t nParentNode = 0x0; // uint16
    constexpr std::ptrdiff_t nChildNode = 0x2; // uint16
    constexpr std::ptrdiff_t flWeight = 0x4; // float32
}

namespace FeKelagerBend2_t {
    constexpr std::ptrdiff_t flWeight = 0x0; // float32[3]
    constexpr std::ptrdiff_t flHeight0 = 0xC; // float32
    constexpr std::ptrdiff_t nNode = 0x10; // uint16[3]
    constexpr std::ptrdiff_t nReserved = 0x16; // uint16
}

namespace FeMorphLayerDepr_t {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
    constexpr std::ptrdiff_t m_Nodes = 0x10; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_InitPos = 0x28; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_Gravity = 0x40; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_GoalStrength = 0x58; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_GoalDamping = 0x70; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_nFlags = 0x88; // uint32
}

namespace FeNodeBase_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16
    constexpr std::ptrdiff_t nDummy = 0x2; // uint16[3]
    constexpr std::ptrdiff_t nNodeX0 = 0x8; // uint16
    constexpr std::ptrdiff_t nNodeX1 = 0xA; // uint16
    constexpr std::ptrdiff_t nNodeY0 = 0xC; // uint16
    constexpr std::ptrdiff_t nNodeY1 = 0xE; // uint16
    constexpr std::ptrdiff_t qAdjust = 0x10; // QuaternionStorage
}

namespace FeNodeIntegrator_t {
    constexpr std::ptrdiff_t flPointDamping = 0x0; // float32
    constexpr std::ptrdiff_t flAnimationForceAttraction = 0x4; // float32
    constexpr std::ptrdiff_t flAnimationVertexAttraction = 0x8; // float32
    constexpr std::ptrdiff_t flGravity = 0xC; // float32
}

namespace FeNodeReverseOffset_t {
    constexpr std::ptrdiff_t vOffset = 0x0; // Vector
    constexpr std::ptrdiff_t nBoneCtrl = 0xC; // uint16
    constexpr std::ptrdiff_t nTargetNode = 0xE; // uint16
}

namespace FeNodeWindBase_t {
    constexpr std::ptrdiff_t nNodeX0 = 0x0; // uint16
    constexpr std::ptrdiff_t nNodeX1 = 0x2; // uint16
    constexpr std::ptrdiff_t nNodeY0 = 0x4; // uint16
    constexpr std::ptrdiff_t nNodeY1 = 0x6; // uint16
}

namespace FeProxyVertexMap_t {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
}

namespace FeQuad_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[4]
    constexpr std::ptrdiff_t flSlack = 0x8; // float32
    constexpr std::ptrdiff_t vShape = 0xC; // Vector4D[4]
}

namespace FeRigidColliderIndices_t {
    constexpr std::ptrdiff_t m_nTaperedCapsuleRigidIndex = 0x0; // uint16
    constexpr std::ptrdiff_t m_nSphereRigidIndex = 0x2; // uint16
    constexpr std::ptrdiff_t m_nBoxRigidIndex = 0x4; // uint16
    constexpr std::ptrdiff_t m_nCollisionPlaneIndex = 0x6; // uint16
}

namespace FeRodConstraint_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
    constexpr std::ptrdiff_t flMaxDist = 0x4; // float32
    constexpr std::ptrdiff_t flMinDist = 0x8; // float32
    constexpr std::ptrdiff_t flWeight0 = 0xC; // float32
    constexpr std::ptrdiff_t flRelaxationFactor = 0x10; // float32
}

namespace FeSimdAnimStrayRadius_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
    constexpr std::ptrdiff_t flMaxDist = 0x10; // fltx4
    constexpr std::ptrdiff_t flRelaxationFactor = 0x20; // fltx4
}

namespace FeSimdNodeBase_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[4]
    constexpr std::ptrdiff_t nNodeX0 = 0x8; // uint16[4]
    constexpr std::ptrdiff_t nNodeX1 = 0x10; // uint16[4]
    constexpr std::ptrdiff_t nNodeY0 = 0x18; // uint16[4]
    constexpr std::ptrdiff_t nNodeY1 = 0x20; // uint16[4]
    constexpr std::ptrdiff_t nDummy = 0x28; // uint16[4]
    constexpr std::ptrdiff_t qAdjust = 0x30; // FourQuaternions
}

namespace FeSimdQuad_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][4]
    constexpr std::ptrdiff_t f4Slack = 0x20; // fltx4
    constexpr std::ptrdiff_t vShape = 0x30; // FourVectors[4]
    constexpr std::ptrdiff_t f4Weights = 0xF0; // fltx4[4]
}

namespace FeSimdRodConstraint_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
    constexpr std::ptrdiff_t f4MaxDist = 0x10; // fltx4
    constexpr std::ptrdiff_t f4MinDist = 0x20; // fltx4
    constexpr std::ptrdiff_t f4Weight0 = 0x30; // fltx4
    constexpr std::ptrdiff_t f4RelaxationFactor = 0x40; // fltx4
}

namespace FeSimdSpringIntegrator_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[4][2]
    constexpr std::ptrdiff_t flSpringRestLength = 0x10; // fltx4
    constexpr std::ptrdiff_t flSpringConstant = 0x20; // fltx4
    constexpr std::ptrdiff_t flSpringDamping = 0x30; // fltx4
    constexpr std::ptrdiff_t flNodeWeight0 = 0x40; // fltx4
}

namespace FeSimdTri_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint32[4][3]
    constexpr std::ptrdiff_t w1 = 0x30; // fltx4
    constexpr std::ptrdiff_t w2 = 0x40; // fltx4
    constexpr std::ptrdiff_t v1x = 0x50; // fltx4
    constexpr std::ptrdiff_t v2 = 0x60; // FourVectors2D
}

namespace FeSoftParent_t {
    constexpr std::ptrdiff_t nParent = 0x0; // int32
    constexpr std::ptrdiff_t flAlpha = 0x4; // float32
}

namespace FeSourceEdge_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
}

namespace FeSphereRigid_t {
    constexpr std::ptrdiff_t vSphere = 0x0; // fltx4
    constexpr std::ptrdiff_t nNode = 0x10; // uint16
    constexpr std::ptrdiff_t nCollisionMask = 0x12; // uint16
    constexpr std::ptrdiff_t nVertexMapIndex = 0x14; // uint16
    constexpr std::ptrdiff_t nFlags = 0x16; // uint16
}

namespace FeSpringIntegrator_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
    constexpr std::ptrdiff_t flSpringRestLength = 0x4; // float32
    constexpr std::ptrdiff_t flSpringConstant = 0x8; // float32
    constexpr std::ptrdiff_t flSpringDamping = 0xC; // float32
    constexpr std::ptrdiff_t flNodeWeight0 = 0x10; // float32
}

namespace FeStiffHingeBuild_t {
    constexpr std::ptrdiff_t flMaxAngle = 0x0; // float32
    constexpr std::ptrdiff_t flStrength = 0x4; // float32
    constexpr std::ptrdiff_t flMotionBias = 0x8; // float32[3]
    constexpr std::ptrdiff_t nNode = 0x14; // uint16[3]
}

namespace FeTaperedCapsuleRigid_t {
    constexpr std::ptrdiff_t vSphere = 0x0; // fltx4[2]
    constexpr std::ptrdiff_t nNode = 0x20; // uint16
    constexpr std::ptrdiff_t nCollisionMask = 0x22; // uint16
    constexpr std::ptrdiff_t nVertexMapIndex = 0x24; // uint16
    constexpr std::ptrdiff_t nFlags = 0x26; // uint16
}

namespace FeTaperedCapsuleStretch_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[2]
    constexpr std::ptrdiff_t nCollisionMask = 0x4; // uint16
    constexpr std::ptrdiff_t nDummy = 0x6; // uint16
    constexpr std::ptrdiff_t flRadius = 0x8; // float32[2]
}

namespace FeTreeChildren_t {
    constexpr std::ptrdiff_t nChild = 0x0; // uint16[2]
}

namespace FeTri_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16[3]
    constexpr std::ptrdiff_t w1 = 0x8; // float32
    constexpr std::ptrdiff_t w2 = 0xC; // float32
    constexpr std::ptrdiff_t v1x = 0x10; // float32
    constexpr std::ptrdiff_t v2 = 0x14; // Vector2D
}

namespace FeTwistConstraint_t {
    constexpr std::ptrdiff_t nNodeOrient = 0x0; // uint16
    constexpr std::ptrdiff_t nNodeEnd = 0x2; // uint16
    constexpr std::ptrdiff_t flTwistRelax = 0x4; // float32
    constexpr std::ptrdiff_t flSwingRelax = 0x8; // float32
}

namespace FeVertexMapBuild_t {
    constexpr std::ptrdiff_t m_VertexMapName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
    constexpr std::ptrdiff_t m_Color = 0xC; // Color
    constexpr std::ptrdiff_t m_flVolumetricSolveStrength = 0x10; // float32
    constexpr std::ptrdiff_t m_nScaleSourceNode = 0x14; // int32
    constexpr std::ptrdiff_t m_Weights = 0x18; // CUtlVector< float32 >
}

namespace FeVertexMapDesc_t {
    constexpr std::ptrdiff_t sName = 0x0; // CUtlString
    constexpr std::ptrdiff_t nNameHash = 0x8; // uint32
    constexpr std::ptrdiff_t nColor = 0xC; // uint32
    constexpr std::ptrdiff_t nFlags = 0x10; // uint32
    constexpr std::ptrdiff_t nVertexBase = 0x14; // uint16
    constexpr std::ptrdiff_t nVertexCount = 0x16; // uint16
    constexpr std::ptrdiff_t nMapOffset = 0x18; // uint32
    constexpr std::ptrdiff_t nNodeListOffset = 0x1C; // uint32
    constexpr std::ptrdiff_t vCenterOfMass = 0x20; // Vector
    constexpr std::ptrdiff_t flVolumetricSolveStrength = 0x2C; // float32
    constexpr std::ptrdiff_t nScaleSourceNode = 0x30; // int16
    constexpr std::ptrdiff_t nNodeListCount = 0x32; // uint16
}

namespace FeWeightedNode_t {
    constexpr std::ptrdiff_t nNode = 0x0; // uint16
    constexpr std::ptrdiff_t nWeight = 0x2; // uint16
}

namespace FeWorldCollisionParams_t {
    constexpr std::ptrdiff_t flWorldFriction = 0x0; // float32
    constexpr std::ptrdiff_t flGroundFriction = 0x4; // float32
    constexpr std::ptrdiff_t nListBegin = 0x8; // uint16
    constexpr std::ptrdiff_t nListEnd = 0xA; // uint16
}

namespace FourCovMatrices3 {
    constexpr std::ptrdiff_t m_vDiag = 0x0; // FourVectors
    constexpr std::ptrdiff_t m_flXY = 0x30; // fltx4
    constexpr std::ptrdiff_t m_flXZ = 0x40; // fltx4
    constexpr std::ptrdiff_t m_flYZ = 0x50; // fltx4
}

namespace FourVectors2D {
    constexpr std::ptrdiff_t x = 0x0; // fltx4
    constexpr std::ptrdiff_t y = 0x10; // fltx4
}

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

namespace PhysFeModelDesc_t {
    constexpr std::ptrdiff_t m_CtrlHash = 0x0; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_CtrlName = 0x18; // CUtlVector< CUtlString >
    constexpr std::ptrdiff_t m_nStaticNodeFlags = 0x30; // uint32
    constexpr std::ptrdiff_t m_nDynamicNodeFlags = 0x34; // uint32
    constexpr std::ptrdiff_t m_flLocalForce = 0x38; // float32
    constexpr std::ptrdiff_t m_flLocalRotation = 0x3C; // float32
    constexpr std::ptrdiff_t m_nNodeCount = 0x40; // uint16
    constexpr std::ptrdiff_t m_nStaticNodes = 0x42; // uint16
    constexpr std::ptrdiff_t m_nRotLockStaticNodes = 0x44; // uint16
    constexpr std::ptrdiff_t m_nFirstPositionDrivenNode = 0x46; // uint16
    constexpr std::ptrdiff_t m_nSimdTriCount1 = 0x48; // uint16
    constexpr std::ptrdiff_t m_nSimdTriCount2 = 0x4A; // uint16
    constexpr std::ptrdiff_t m_nSimdQuadCount1 = 0x4C; // uint16
    constexpr std::ptrdiff_t m_nSimdQuadCount2 = 0x4E; // uint16
    constexpr std::ptrdiff_t m_nQuadCount1 = 0x50; // uint16
    constexpr std::ptrdiff_t m_nQuadCount2 = 0x52; // uint16
    constexpr std::ptrdiff_t m_nTreeDepth = 0x54; // uint16
    constexpr std::ptrdiff_t m_nNodeBaseJiggleboneDependsCount = 0x56; // uint16
    constexpr std::ptrdiff_t m_nRopeCount = 0x58; // uint16
    constexpr std::ptrdiff_t m_Ropes = 0x60; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_NodeBases = 0x78; // CUtlVector< FeNodeBase_t >
    constexpr std::ptrdiff_t m_SimdNodeBases = 0x90; // CUtlVector< FeSimdNodeBase_t >
    constexpr std::ptrdiff_t m_Quads = 0xA8; // CUtlVector< FeQuad_t >
    constexpr std::ptrdiff_t m_SimdQuads = 0xC0; // CUtlVector< FeSimdQuad_t >
    constexpr std::ptrdiff_t m_SimdTris = 0xD8; // CUtlVector< FeSimdTri_t >
    constexpr std::ptrdiff_t m_SimdRods = 0xF0; // CUtlVector< FeSimdRodConstraint_t >
    constexpr std::ptrdiff_t m_InitPose = 0x108; // CUtlVector< CTransform >
    constexpr std::ptrdiff_t m_Rods = 0x120; // CUtlVector< FeRodConstraint_t >
    constexpr std::ptrdiff_t m_Twists = 0x138; // CUtlVector< FeTwistConstraint_t >
    constexpr std::ptrdiff_t m_AxialEdges = 0x150; // CUtlVector< FeAxialEdgeBend_t >
    constexpr std::ptrdiff_t m_NodeInvMasses = 0x168; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_CtrlOffsets = 0x180; // CUtlVector< FeCtrlOffset_t >
    constexpr std::ptrdiff_t m_CtrlOsOffsets = 0x198; // CUtlVector< FeCtrlOsOffset_t >
    constexpr std::ptrdiff_t m_FollowNodes = 0x1B0; // CUtlVector< FeFollowNode_t >
    constexpr std::ptrdiff_t m_CollisionPlanes = 0x1C8; // CUtlVector< FeCollisionPlane_t >
    constexpr std::ptrdiff_t m_NodeIntegrator = 0x1E0; // CUtlVector< FeNodeIntegrator_t >
    constexpr std::ptrdiff_t m_SpringIntegrator = 0x1F8; // CUtlVector< FeSpringIntegrator_t >
    constexpr std::ptrdiff_t m_SimdSpringIntegrator = 0x210; // CUtlVector< FeSimdSpringIntegrator_t >
    constexpr std::ptrdiff_t m_WorldCollisionParams = 0x228; // CUtlVector< FeWorldCollisionParams_t >
    constexpr std::ptrdiff_t m_LegacyStretchForce = 0x240; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_NodeCollisionRadii = 0x258; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_DynNodeFriction = 0x270; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_LocalRotation = 0x288; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_LocalForce = 0x2A0; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_TaperedCapsuleStretches = 0x2B8; // CUtlVector< FeTaperedCapsuleStretch_t >
    constexpr std::ptrdiff_t m_TaperedCapsuleRigids = 0x2D0; // CUtlVector< FeTaperedCapsuleRigid_t >
    constexpr std::ptrdiff_t m_SphereRigids = 0x2E8; // CUtlVector< FeSphereRigid_t >
    constexpr std::ptrdiff_t m_WorldCollisionNodes = 0x300; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_TreeParents = 0x318; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_TreeCollisionMasks = 0x330; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_TreeChildren = 0x348; // CUtlVector< FeTreeChildren_t >
    constexpr std::ptrdiff_t m_FreeNodes = 0x360; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_FitMatrices = 0x378; // CUtlVector< FeFitMatrix_t >
    constexpr std::ptrdiff_t m_FitWeights = 0x390; // CUtlVector< FeFitWeight_t >
    constexpr std::ptrdiff_t m_ReverseOffsets = 0x3A8; // CUtlVector< FeNodeReverseOffset_t >
    constexpr std::ptrdiff_t m_AnimStrayRadii = 0x3C0; // CUtlVector< FeAnimStrayRadius_t >
    constexpr std::ptrdiff_t m_SimdAnimStrayRadii = 0x3D8; // CUtlVector< FeSimdAnimStrayRadius_t >
    constexpr std::ptrdiff_t m_KelagerBends = 0x3F0; // CUtlVector< FeKelagerBend2_t >
    constexpr std::ptrdiff_t m_CtrlSoftOffsets = 0x408; // CUtlVector< FeCtrlSoftOffset_t >
    constexpr std::ptrdiff_t m_JiggleBones = 0x420; // CUtlVector< CFeIndexedJiggleBone >
    constexpr std::ptrdiff_t m_SourceElems = 0x438; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_GoalDampedSpringIntegrators = 0x450; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_Tris = 0x468; // CUtlVector< FeTri_t >
    constexpr std::ptrdiff_t m_nTriCount1 = 0x480; // uint16
    constexpr std::ptrdiff_t m_nTriCount2 = 0x482; // uint16
    constexpr std::ptrdiff_t m_nReservedUint8 = 0x484; // uint8
    constexpr std::ptrdiff_t m_nExtraPressureIterations = 0x485; // uint8
    constexpr std::ptrdiff_t m_nExtraGoalIterations = 0x486; // uint8
    constexpr std::ptrdiff_t m_nExtraIterations = 0x487; // uint8
    constexpr std::ptrdiff_t m_BoxRigids = 0x488; // CUtlVector< FeBoxRigid_t >
    constexpr std::ptrdiff_t m_DynNodeVertexSet = 0x4A0; // CUtlVector< uint8 >
    constexpr std::ptrdiff_t m_VertexSetNames = 0x4B8; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_RigidColliderPriorities = 0x4D0; // CUtlVector< FeRigidColliderIndices_t >
    constexpr std::ptrdiff_t m_MorphLayers = 0x4E8; // CUtlVector< FeMorphLayerDepr_t >
    constexpr std::ptrdiff_t m_MorphSetData = 0x500; // CUtlVector< uint8 >
    constexpr std::ptrdiff_t m_VertexMaps = 0x518; // CUtlVector< FeVertexMapDesc_t >
    constexpr std::ptrdiff_t m_VertexMapValues = 0x530; // CUtlVector< uint8 >
    constexpr std::ptrdiff_t m_Effects = 0x548; // CUtlVector< FeEffectDesc_t >
    constexpr std::ptrdiff_t m_LockToParent = 0x560; // CUtlVector< FeCtrlOffset_t >
    constexpr std::ptrdiff_t m_LockToGoal = 0x578; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_DynNodeWindBases = 0x590; // CUtlVector< FeNodeWindBase_t >
    constexpr std::ptrdiff_t m_flInternalPressure = 0x5A8; // float32
    constexpr std::ptrdiff_t m_flDefaultTimeDilation = 0x5AC; // float32
    constexpr std::ptrdiff_t m_flWindage = 0x5B0; // float32
    constexpr std::ptrdiff_t m_flWindDrag = 0x5B4; // float32
    constexpr std::ptrdiff_t m_flDefaultSurfaceStretch = 0x5B8; // float32
    constexpr std::ptrdiff_t m_flDefaultThreadStretch = 0x5BC; // float32
    constexpr std::ptrdiff_t m_flDefaultGravityScale = 0x5C0; // float32
    constexpr std::ptrdiff_t m_flDefaultVelAirDrag = 0x5C4; // float32
    constexpr std::ptrdiff_t m_flDefaultExpAirDrag = 0x5C8; // float32
    constexpr std::ptrdiff_t m_flDefaultVelQuadAirDrag = 0x5CC; // float32
    constexpr std::ptrdiff_t m_flDefaultExpQuadAirDrag = 0x5D0; // float32
    constexpr std::ptrdiff_t m_flRodVelocitySmoothRate = 0x5D4; // float32
    constexpr std::ptrdiff_t m_flQuadVelocitySmoothRate = 0x5D8; // float32
    constexpr std::ptrdiff_t m_flAddWorldCollisionRadius = 0x5DC; // float32
    constexpr std::ptrdiff_t m_flDefaultVolumetricSolveAmount = 0x5E0; // float32
    constexpr std::ptrdiff_t m_nRodVelocitySmoothIterations = 0x5E4; // uint16
    constexpr std::ptrdiff_t m_nQuadVelocitySmoothIterations = 0x5E6; // uint16
}

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

namespace RnBodyDesc_t {
    constexpr std::ptrdiff_t m_sDebugName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_vPosition = 0x8; // Vector
    constexpr std::ptrdiff_t m_qOrientation = 0x14; // QuaternionStorage
    constexpr std::ptrdiff_t m_vLinearVelocity = 0x24; // Vector
    constexpr std::ptrdiff_t m_vAngularVelocity = 0x30; // Vector
    constexpr std::ptrdiff_t m_vLocalMassCenter = 0x3C; // Vector
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
    constexpr std::ptrdiff_t m_vLastAwakeForceAccum = 0x90; // Vector
    constexpr std::ptrdiff_t m_vLastAwakeTorqueAccum = 0x9C; // Vector
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

namespace RnCapsuleDesc_t {
    constexpr std::ptrdiff_t m_Capsule = 0x10; // RnCapsule_t
}

namespace RnCapsule_t {
    constexpr std::ptrdiff_t m_vCenter = 0x0; // Vector[2]
    constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
}

namespace RnFace_t {
    constexpr std::ptrdiff_t m_nEdge = 0x0; // uint8
}

namespace RnHalfEdge_t {
    constexpr std::ptrdiff_t m_nNext = 0x0; // uint8
    constexpr std::ptrdiff_t m_nTwin = 0x1; // uint8
    constexpr std::ptrdiff_t m_nOrigin = 0x2; // uint8
    constexpr std::ptrdiff_t m_nFace = 0x3; // uint8
}

namespace RnHullDesc_t {
    constexpr std::ptrdiff_t m_Hull = 0x10; // RnHull_t
}

namespace RnHull_t {
    constexpr std::ptrdiff_t m_vCentroid = 0x0; // Vector
    constexpr std::ptrdiff_t m_flMaxAngularRadius = 0xC; // float32
    constexpr std::ptrdiff_t m_Bounds = 0x10; // AABB_t
    constexpr std::ptrdiff_t m_vOrthographicAreas = 0x28; // Vector
    constexpr std::ptrdiff_t m_MassProperties = 0x34; // matrix3x4_t
    constexpr std::ptrdiff_t m_flVolume = 0x64; // float32
    constexpr std::ptrdiff_t m_Vertices = 0x68; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_Edges = 0x80; // CUtlVector< RnHalfEdge_t >
    constexpr std::ptrdiff_t m_Faces = 0x98; // CUtlVector< RnFace_t >
    constexpr std::ptrdiff_t m_Planes = 0xB0; // CUtlVector< RnPlane_t >
    constexpr std::ptrdiff_t m_nFlags = 0xC8; // uint32
    constexpr std::ptrdiff_t m_pRegionSVM = 0xD0; // CRegionSVM*
}

namespace RnMeshDesc_t {
    constexpr std::ptrdiff_t m_Mesh = 0x10; // RnMesh_t
}

namespace RnMesh_t {
    constexpr std::ptrdiff_t m_vMin = 0x0; // Vector
    constexpr std::ptrdiff_t m_vMax = 0xC; // Vector
    constexpr std::ptrdiff_t m_Nodes = 0x18; // CUtlVector< RnNode_t >
    constexpr std::ptrdiff_t m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
    constexpr std::ptrdiff_t m_Triangles = 0x48; // CUtlVector< RnTriangle_t >
    constexpr std::ptrdiff_t m_Wings = 0x60; // CUtlVector< RnWing_t >
    constexpr std::ptrdiff_t m_Materials = 0x78; // CUtlVector< uint8 >
    constexpr std::ptrdiff_t m_vOrthographicAreas = 0x90; // Vector
    constexpr std::ptrdiff_t m_nFlags = 0x9C; // uint32
    constexpr std::ptrdiff_t m_nDebugFlags = 0xA0; // uint32
}

namespace RnNode_t {
    constexpr std::ptrdiff_t m_vMin = 0x0; // Vector
    constexpr std::ptrdiff_t m_nChildren = 0xC; // uint32
    constexpr std::ptrdiff_t m_vMax = 0x10; // Vector
    constexpr std::ptrdiff_t m_nTriangleOffset = 0x1C; // uint32
}

namespace RnPlane_t {
    constexpr std::ptrdiff_t m_vNormal = 0x0; // Vector
    constexpr std::ptrdiff_t m_flOffset = 0xC; // float32
}

namespace RnShapeDesc_t {
    constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x0; // uint32
    constexpr std::ptrdiff_t m_nSurfacePropertyIndex = 0x4; // uint32
    constexpr std::ptrdiff_t m_UserFriendlyName = 0x8; // CUtlString
}

namespace RnSoftbodyCapsule_t {
    constexpr std::ptrdiff_t m_vCenter = 0x0; // Vector[2]
    constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
    constexpr std::ptrdiff_t m_nParticle = 0x1C; // uint16[2]
}

namespace RnSoftbodyParticle_t {
    constexpr std::ptrdiff_t m_flMassInv = 0x0; // float32
}

namespace RnSoftbodySpring_t {
    constexpr std::ptrdiff_t m_nParticle = 0x0; // uint16[2]
    constexpr std::ptrdiff_t m_flLength = 0x4; // float32
}

namespace RnSphereDesc_t {
    constexpr std::ptrdiff_t m_Sphere = 0x10; // RnSphere_t
}

namespace RnSphere_t {
    constexpr std::ptrdiff_t m_vCenter = 0x0; // Vector
    constexpr std::ptrdiff_t m_flRadius = 0xC; // float32
}

namespace RnTriangle_t {
    constexpr std::ptrdiff_t m_nIndex = 0x0; // int32[3]
}

namespace RnWing_t {
    constexpr std::ptrdiff_t m_nIndex = 0x0; // int32[3]
}

namespace VertexPositionColor_t {
    constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
}

namespace VertexPositionNormal_t {
    constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
    constexpr std::ptrdiff_t m_vNormal = 0xC; // Vector
}

namespace constraint_axislimit_t {
    constexpr std::ptrdiff_t flMinRotation = 0x0; // float32
    constexpr std::ptrdiff_t flMaxRotation = 0x4; // float32
    constexpr std::ptrdiff_t flMotorTargetAngSpeed = 0x8; // float32
    constexpr std::ptrdiff_t flMotorMaxTorque = 0xC; // float32
}

namespace constraint_breakableparams_t {
    constexpr std::ptrdiff_t strength = 0x0; // float32
    constexpr std::ptrdiff_t forceLimit = 0x4; // float32
    constexpr std::ptrdiff_t torqueLimit = 0x8; // float32
    constexpr std::ptrdiff_t bodyMassScale = 0xC; // float32[2]
    constexpr std::ptrdiff_t isActive = 0x14; // bool
}

namespace constraint_hingeparams_t {
    constexpr std::ptrdiff_t worldPosition = 0x0; // Vector
    constexpr std::ptrdiff_t worldAxisDirection = 0xC; // Vector
    constexpr std::ptrdiff_t hingeAxis = 0x18; // constraint_axislimit_t
    constexpr std::ptrdiff_t constraint = 0x28; // constraint_breakableparams_t
}

namespace vphysics_save_cphysicsbody_t {
    constexpr std::ptrdiff_t m_nOldPointer = 0xD0; // uint64
}