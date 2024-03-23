/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod CFeIndexedJiggleBone {
    pub const m_nNode: usize = 0x0; // uint32_t
    pub const m_nJiggleParent: usize = 0x4; // uint32_t
    pub const m_jiggleBone: usize = 0x8; // CFeJiggleBone
}

pub mod CFeJiggleBone {
    pub const m_nFlags: usize = 0x0; // uint32_t
    pub const m_flLength: usize = 0x4; // float
    pub const m_flTipMass: usize = 0x8; // float
    pub const m_flYawStiffness: usize = 0xC; // float
    pub const m_flYawDamping: usize = 0x10; // float
    pub const m_flPitchStiffness: usize = 0x14; // float
    pub const m_flPitchDamping: usize = 0x18; // float
    pub const m_flAlongStiffness: usize = 0x1C; // float
    pub const m_flAlongDamping: usize = 0x20; // float
    pub const m_flAngleLimit: usize = 0x24; // float
    pub const m_flMinYaw: usize = 0x28; // float
    pub const m_flMaxYaw: usize = 0x2C; // float
    pub const m_flYawFriction: usize = 0x30; // float
    pub const m_flYawBounce: usize = 0x34; // float
    pub const m_flMinPitch: usize = 0x38; // float
    pub const m_flMaxPitch: usize = 0x3C; // float
    pub const m_flPitchFriction: usize = 0x40; // float
    pub const m_flPitchBounce: usize = 0x44; // float
    pub const m_flBaseMass: usize = 0x48; // float
    pub const m_flBaseStiffness: usize = 0x4C; // float
    pub const m_flBaseDamping: usize = 0x50; // float
    pub const m_flBaseMinLeft: usize = 0x54; // float
    pub const m_flBaseMaxLeft: usize = 0x58; // float
    pub const m_flBaseLeftFriction: usize = 0x5C; // float
    pub const m_flBaseMinUp: usize = 0x60; // float
    pub const m_flBaseMaxUp: usize = 0x64; // float
    pub const m_flBaseUpFriction: usize = 0x68; // float
    pub const m_flBaseMinForward: usize = 0x6C; // float
    pub const m_flBaseMaxForward: usize = 0x70; // float
    pub const m_flBaseForwardFriction: usize = 0x74; // float
    pub const m_flRadius0: usize = 0x78; // float
    pub const m_flRadius1: usize = 0x7C; // float
    pub const m_vPoint0: usize = 0x80; // Vector
    pub const m_vPoint1: usize = 0x8C; // Vector
    pub const m_nCollisionMask: usize = 0x98; // uint16_t
}

pub mod CFeMorphLayer {
    pub const m_Name: usize = 0x0; // CUtlString
    pub const m_nNameHash: usize = 0x8; // uint32_t
    pub const m_Nodes: usize = 0x10; // CUtlVector<uint16_t>
    pub const m_InitPos: usize = 0x28; // CUtlVector<Vector>
    pub const m_Gravity: usize = 0x40; // CUtlVector<float>
    pub const m_GoalStrength: usize = 0x58; // CUtlVector<float>
    pub const m_GoalDamping: usize = 0x70; // CUtlVector<float>
}

pub mod CFeNamedJiggleBone {
    pub const m_strParentBone: usize = 0x0; // CUtlString
    pub const m_transform: usize = 0x10; // CTransform
    pub const m_nJiggleParent: usize = 0x30; // uint32_t
    pub const m_jiggleBone: usize = 0x34; // CFeJiggleBone
}

pub mod CFeVertexMapBuildArray {
    pub const m_Array: usize = 0x0; // CUtlVector<FeVertexMapBuild_t*>
}

pub mod CRegionSVM {
    pub const m_Planes: usize = 0x0; // CUtlVector<RnPlane_t>
    pub const m_Nodes: usize = 0x18; // CUtlVector<uint32_t>
}

pub mod CastSphereSATParams_t {
    pub const m_vRayStart: usize = 0x0; // Vector
    pub const m_vRayDelta: usize = 0xC; // Vector
    pub const m_flRadius: usize = 0x18; // float
    pub const m_flMaxFraction: usize = 0x1C; // float
    pub const m_flScale: usize = 0x20; // float
    pub const m_pHull: usize = 0x28; // RnHull_t*
}

pub mod CovMatrix3 {
    pub const m_vDiag: usize = 0x0; // Vector
    pub const m_flXY: usize = 0xC; // float
    pub const m_flXZ: usize = 0x10; // float
    pub const m_flYZ: usize = 0x14; // float
}

pub mod Dop26_t {
    pub const m_flSupport: usize = 0x0; // float[26]
}

pub mod FeAnimStrayRadius_t {
    pub const nNode: usize = 0x0; // uint16_t[2]
    pub const flMaxDist: usize = 0x4; // float
    pub const flRelaxationFactor: usize = 0x8; // float
}

pub mod FeAxialEdgeBend_t {
    pub const te: usize = 0x0; // float
    pub const tv: usize = 0x4; // float
    pub const flDist: usize = 0x8; // float
    pub const flWeight: usize = 0xC; // float[4]
    pub const nNode: usize = 0x1C; // uint16_t[6]
}

pub mod FeBandBendLimit_t {
    pub const flDistMin: usize = 0x0; // float
    pub const flDistMax: usize = 0x4; // float
    pub const nNode: usize = 0x8; // uint16_t[6]
}

pub mod FeBoxRigid_t {
    pub const tmFrame2: usize = 0x0; // CTransform
    pub const nNode: usize = 0x20; // uint16_t
    pub const nCollisionMask: usize = 0x22; // uint16_t
    pub const vSize: usize = 0x24; // Vector
    pub const nVertexMapIndex: usize = 0x30; // uint16_t
    pub const nFlags: usize = 0x32; // uint16_t
}

pub mod FeBuildBoxRigid_t { // FeBoxRigid_t
    pub const m_nPriority: usize = 0x40; // int32_t
    pub const m_nVertexMapHash: usize = 0x44; // uint32_t
}

pub mod FeBuildSphereRigid_t { // FeSphereRigid_t
    pub const m_nPriority: usize = 0x20; // int32_t
    pub const m_nVertexMapHash: usize = 0x24; // uint32_t
}

pub mod FeBuildTaperedCapsuleRigid_t { // FeTaperedCapsuleRigid_t
    pub const m_nPriority: usize = 0x30; // int32_t
    pub const m_nVertexMapHash: usize = 0x34; // uint32_t
}

pub mod FeCollisionPlane_t {
    pub const nCtrlParent: usize = 0x0; // uint16_t
    pub const nChildNode: usize = 0x2; // uint16_t
    pub const m_Plane: usize = 0x4; // RnPlane_t
    pub const flStrength: usize = 0x14; // float
}

pub mod FeCtrlOffset_t {
    pub const vOffset: usize = 0x0; // Vector
    pub const nCtrlParent: usize = 0xC; // uint16_t
    pub const nCtrlChild: usize = 0xE; // uint16_t
}

pub mod FeCtrlOsOffset_t {
    pub const nCtrlParent: usize = 0x0; // uint16_t
    pub const nCtrlChild: usize = 0x2; // uint16_t
}

pub mod FeCtrlSoftOffset_t {
    pub const nCtrlParent: usize = 0x0; // uint16_t
    pub const nCtrlChild: usize = 0x2; // uint16_t
    pub const vOffset: usize = 0x4; // Vector
    pub const flAlpha: usize = 0x10; // float
}

pub mod FeEdgeDesc_t {
    pub const nEdge: usize = 0x0; // uint16_t[2]
    pub const nSide: usize = 0x4; // uint16_t[2][2]
    pub const nVirtElem: usize = 0xC; // uint16_t[2]
}

pub mod FeEffectDesc_t {
    pub const sName: usize = 0x0; // CUtlString
    pub const nNameHash: usize = 0x8; // uint32_t
    pub const nType: usize = 0xC; // int32_t
    pub const m_Params: usize = 0x10; // KeyValues3
}

pub mod FeFitInfluence_t {
    pub const nVertexNode: usize = 0x0; // uint32_t
    pub const flWeight: usize = 0x4; // float
    pub const nMatrixNode: usize = 0x8; // uint32_t
}

pub mod FeFitMatrix_t {
    pub const bone: usize = 0x0; // CTransform
    pub const vCenter: usize = 0x20; // Vector
    pub const nEnd: usize = 0x2C; // uint16_t
    pub const nNode: usize = 0x2E; // uint16_t
    pub const nBeginDynamic: usize = 0x30; // uint16_t
}

pub mod FeFitWeight_t {
    pub const flWeight: usize = 0x0; // float
    pub const nNode: usize = 0x4; // uint16_t
    pub const nDummy: usize = 0x6; // uint16_t
}

pub mod FeFollowNode_t {
    pub const nParentNode: usize = 0x0; // uint16_t
    pub const nChildNode: usize = 0x2; // uint16_t
    pub const flWeight: usize = 0x4; // float
}

pub mod FeKelagerBend2_t {
    pub const flWeight: usize = 0x0; // float[3]
    pub const flHeight0: usize = 0xC; // float
    pub const nNode: usize = 0x10; // uint16_t[3]
    pub const nReserved: usize = 0x16; // uint16_t
}

pub mod FeMorphLayerDepr_t {
    pub const m_Name: usize = 0x0; // CUtlString
    pub const m_nNameHash: usize = 0x8; // uint32_t
    pub const m_Nodes: usize = 0x10; // CUtlVector<uint16_t>
    pub const m_InitPos: usize = 0x28; // CUtlVector<Vector>
    pub const m_Gravity: usize = 0x40; // CUtlVector<float>
    pub const m_GoalStrength: usize = 0x58; // CUtlVector<float>
    pub const m_GoalDamping: usize = 0x70; // CUtlVector<float>
    pub const m_nFlags: usize = 0x88; // uint32_t
}

pub mod FeNodeBase_t {
    pub const nNode: usize = 0x0; // uint16_t
    pub const nDummy: usize = 0x2; // uint16_t[3]
    pub const nNodeX0: usize = 0x8; // uint16_t
    pub const nNodeX1: usize = 0xA; // uint16_t
    pub const nNodeY0: usize = 0xC; // uint16_t
    pub const nNodeY1: usize = 0xE; // uint16_t
    pub const qAdjust: usize = 0x10; // QuaternionStorage
}

pub mod FeNodeIntegrator_t {
    pub const flPointDamping: usize = 0x0; // float
    pub const flAnimationForceAttraction: usize = 0x4; // float
    pub const flAnimationVertexAttraction: usize = 0x8; // float
    pub const flGravity: usize = 0xC; // float
}

pub mod FeNodeReverseOffset_t {
    pub const vOffset: usize = 0x0; // Vector
    pub const nBoneCtrl: usize = 0xC; // uint16_t
    pub const nTargetNode: usize = 0xE; // uint16_t
}

pub mod FeNodeWindBase_t {
    pub const nNodeX0: usize = 0x0; // uint16_t
    pub const nNodeX1: usize = 0x2; // uint16_t
    pub const nNodeY0: usize = 0x4; // uint16_t
    pub const nNodeY1: usize = 0x6; // uint16_t
}

pub mod FeProxyVertexMap_t {
    pub const m_Name: usize = 0x0; // CUtlString
    pub const m_flWeight: usize = 0x8; // float
}

pub mod FeQuad_t {
    pub const nNode: usize = 0x0; // uint16_t[4]
    pub const flSlack: usize = 0x8; // float
    pub const vShape: usize = 0xC; // Vector4D[4]
}

pub mod FeRigidColliderIndices_t {
    pub const m_nTaperedCapsuleRigidIndex: usize = 0x0; // uint16_t
    pub const m_nSphereRigidIndex: usize = 0x2; // uint16_t
    pub const m_nBoxRigidIndex: usize = 0x4; // uint16_t
    pub const m_nCollisionPlaneIndex: usize = 0x6; // uint16_t
}

pub mod FeRodConstraint_t {
    pub const nNode: usize = 0x0; // uint16_t[2]
    pub const flMaxDist: usize = 0x4; // float
    pub const flMinDist: usize = 0x8; // float
    pub const flWeight0: usize = 0xC; // float
    pub const flRelaxationFactor: usize = 0x10; // float
}

pub mod FeSimdAnimStrayRadius_t {
    pub const nNode: usize = 0x0; // uint16_t[4][2]
    pub const flMaxDist: usize = 0x10; // fltx4
    pub const flRelaxationFactor: usize = 0x20; // fltx4
}

pub mod FeSimdNodeBase_t {
    pub const nNode: usize = 0x0; // uint16_t[4]
    pub const nNodeX0: usize = 0x8; // uint16_t[4]
    pub const nNodeX1: usize = 0x10; // uint16_t[4]
    pub const nNodeY0: usize = 0x18; // uint16_t[4]
    pub const nNodeY1: usize = 0x20; // uint16_t[4]
    pub const nDummy: usize = 0x28; // uint16_t[4]
    pub const qAdjust: usize = 0x30; // FourQuaternions
}

pub mod FeSimdQuad_t {
    pub const nNode: usize = 0x0; // uint16_t[4][4]
    pub const f4Slack: usize = 0x20; // fltx4
    pub const vShape: usize = 0x30; // FourVectors[4]
    pub const f4Weights: usize = 0xF0; // fltx4[4]
}

pub mod FeSimdRodConstraintAnim_t {
    pub const nNode: usize = 0x0; // uint16_t[4][2]
    pub const f4Weight0: usize = 0x10; // fltx4
    pub const f4RelaxationFactor: usize = 0x20; // fltx4
}

pub mod FeSimdRodConstraint_t {
    pub const nNode: usize = 0x0; // uint16_t[4][2]
    pub const f4MaxDist: usize = 0x10; // fltx4
    pub const f4MinDist: usize = 0x20; // fltx4
    pub const f4Weight0: usize = 0x30; // fltx4
    pub const f4RelaxationFactor: usize = 0x40; // fltx4
}

pub mod FeSimdSpringIntegrator_t {
    pub const nNode: usize = 0x0; // uint16_t[4][2]
    pub const flSpringRestLength: usize = 0x10; // fltx4
    pub const flSpringConstant: usize = 0x20; // fltx4
    pub const flSpringDamping: usize = 0x30; // fltx4
    pub const flNodeWeight0: usize = 0x40; // fltx4
}

pub mod FeSimdTri_t {
    pub const nNode: usize = 0x0; // uint32_t[4][3]
    pub const w1: usize = 0x30; // fltx4
    pub const w2: usize = 0x40; // fltx4
    pub const v1x: usize = 0x50; // fltx4
    pub const v2: usize = 0x60; // FourVectors2D
}

pub mod FeSoftParent_t {
    pub const nParent: usize = 0x0; // int32_t
    pub const flAlpha: usize = 0x4; // float
}

pub mod FeSourceEdge_t {
    pub const nNode: usize = 0x0; // uint16_t[2]
}

pub mod FeSphereRigid_t {
    pub const vSphere: usize = 0x0; // fltx4
    pub const nNode: usize = 0x10; // uint16_t
    pub const nCollisionMask: usize = 0x12; // uint16_t
    pub const nVertexMapIndex: usize = 0x14; // uint16_t
    pub const nFlags: usize = 0x16; // uint16_t
}

pub mod FeSpringIntegrator_t {
    pub const nNode: usize = 0x0; // uint16_t[2]
    pub const flSpringRestLength: usize = 0x4; // float
    pub const flSpringConstant: usize = 0x8; // float
    pub const flSpringDamping: usize = 0xC; // float
    pub const flNodeWeight0: usize = 0x10; // float
}

pub mod FeStiffHingeBuild_t {
    pub const flMaxAngle: usize = 0x0; // float
    pub const flStrength: usize = 0x4; // float
    pub const flMotionBias: usize = 0x8; // float[3]
    pub const nNode: usize = 0x14; // uint16_t[3]
}

pub mod FeTaperedCapsuleRigid_t {
    pub const vSphere: usize = 0x0; // fltx4[2]
    pub const nNode: usize = 0x20; // uint16_t
    pub const nCollisionMask: usize = 0x22; // uint16_t
    pub const nVertexMapIndex: usize = 0x24; // uint16_t
    pub const nFlags: usize = 0x26; // uint16_t
}

pub mod FeTaperedCapsuleStretch_t {
    pub const nNode: usize = 0x0; // uint16_t[2]
    pub const nCollisionMask: usize = 0x4; // uint16_t
    pub const nDummy: usize = 0x6; // uint16_t
    pub const flRadius: usize = 0x8; // float[2]
}

pub mod FeTreeChildren_t {
    pub const nChild: usize = 0x0; // uint16_t[2]
}

pub mod FeTri_t {
    pub const nNode: usize = 0x0; // uint16_t[3]
    pub const w1: usize = 0x8; // float
    pub const w2: usize = 0xC; // float
    pub const v1x: usize = 0x10; // float
    pub const v2: usize = 0x14; // Vector2D
}

pub mod FeTwistConstraint_t {
    pub const nNodeOrient: usize = 0x0; // uint16_t
    pub const nNodeEnd: usize = 0x2; // uint16_t
    pub const flTwistRelax: usize = 0x4; // float
    pub const flSwingRelax: usize = 0x8; // float
}

pub mod FeVertexMapBuild_t {
    pub const m_VertexMapName: usize = 0x0; // CUtlString
    pub const m_nNameHash: usize = 0x8; // uint32_t
    pub const m_Color: usize = 0xC; // Color
    pub const m_flVolumetricSolveStrength: usize = 0x10; // float
    pub const m_nScaleSourceNode: usize = 0x14; // int32_t
    pub const m_Weights: usize = 0x18; // CUtlVector<float>
}

pub mod FeVertexMapDesc_t {
    pub const sName: usize = 0x0; // CUtlString
    pub const nNameHash: usize = 0x8; // uint32_t
    pub const nColor: usize = 0xC; // uint32_t
    pub const nFlags: usize = 0x10; // uint32_t
    pub const nVertexBase: usize = 0x14; // uint16_t
    pub const nVertexCount: usize = 0x16; // uint16_t
    pub const nMapOffset: usize = 0x18; // uint32_t
    pub const nNodeListOffset: usize = 0x1C; // uint32_t
    pub const vCenterOfMass: usize = 0x20; // Vector
    pub const flVolumetricSolveStrength: usize = 0x2C; // float
    pub const nScaleSourceNode: usize = 0x30; // int16_t
    pub const nNodeListCount: usize = 0x32; // uint16_t
}

pub mod FeWeightedNode_t {
    pub const nNode: usize = 0x0; // uint16_t
    pub const nWeight: usize = 0x2; // uint16_t
}

pub mod FeWorldCollisionParams_t {
    pub const flWorldFriction: usize = 0x0; // float
    pub const flGroundFriction: usize = 0x4; // float
    pub const nListBegin: usize = 0x8; // uint16_t
    pub const nListEnd: usize = 0xA; // uint16_t
}

pub mod FourCovMatrices3 {
    pub const m_vDiag: usize = 0x0; // FourVectors
    pub const m_flXY: usize = 0x30; // fltx4
    pub const m_flXZ: usize = 0x40; // fltx4
    pub const m_flYZ: usize = 0x50; // fltx4
}

pub mod FourVectors2D {
    pub const x: usize = 0x0; // fltx4
    pub const y: usize = 0x10; // fltx4
}

pub mod IPhysicsPlayerController {
}

pub mod OldFeEdge_t {
    pub const m_flK: usize = 0x0; // float[3]
    pub const invA: usize = 0xC; // float
    pub const t: usize = 0x10; // float
    pub const flThetaRelaxed: usize = 0x14; // float
    pub const flThetaFactor: usize = 0x18; // float
    pub const c01: usize = 0x1C; // float
    pub const c02: usize = 0x20; // float
    pub const c03: usize = 0x24; // float
    pub const c04: usize = 0x28; // float
    pub const flAxialModelDist: usize = 0x2C; // float
    pub const flAxialModelWeights: usize = 0x30; // float[4]
    pub const m_nNode: usize = 0x40; // uint16_t[4]
}

pub mod PhysFeModelDesc_t {
    pub const m_CtrlHash: usize = 0x0; // CUtlVector<uint32_t>
    pub const m_CtrlName: usize = 0x18; // CUtlVector<CUtlString>
    pub const m_nStaticNodeFlags: usize = 0x30; // uint32_t
    pub const m_nDynamicNodeFlags: usize = 0x34; // uint32_t
    pub const m_flLocalForce: usize = 0x38; // float
    pub const m_flLocalRotation: usize = 0x3C; // float
    pub const m_nNodeCount: usize = 0x40; // uint16_t
    pub const m_nStaticNodes: usize = 0x42; // uint16_t
    pub const m_nRotLockStaticNodes: usize = 0x44; // uint16_t
    pub const m_nFirstPositionDrivenNode: usize = 0x46; // uint16_t
    pub const m_nSimdTriCount1: usize = 0x48; // uint16_t
    pub const m_nSimdTriCount2: usize = 0x4A; // uint16_t
    pub const m_nSimdQuadCount1: usize = 0x4C; // uint16_t
    pub const m_nSimdQuadCount2: usize = 0x4E; // uint16_t
    pub const m_nQuadCount1: usize = 0x50; // uint16_t
    pub const m_nQuadCount2: usize = 0x52; // uint16_t
    pub const m_nTreeDepth: usize = 0x54; // uint16_t
    pub const m_nNodeBaseJiggleboneDependsCount: usize = 0x56; // uint16_t
    pub const m_nRopeCount: usize = 0x58; // uint16_t
    pub const m_Ropes: usize = 0x60; // CUtlVector<uint16_t>
    pub const m_NodeBases: usize = 0x78; // CUtlVector<FeNodeBase_t>
    pub const m_SimdNodeBases: usize = 0x90; // CUtlVector<FeSimdNodeBase_t>
    pub const m_Quads: usize = 0xA8; // CUtlVector<FeQuad_t>
    pub const m_SimdQuads: usize = 0xC0; // CUtlVector<FeSimdQuad_t>
    pub const m_SimdTris: usize = 0xD8; // CUtlVector<FeSimdTri_t>
    pub const m_SimdRods: usize = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
    pub const m_SimdRodsAnim: usize = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
    pub const m_InitPose: usize = 0x120; // CUtlVector<CTransform>
    pub const m_Rods: usize = 0x138; // CUtlVector<FeRodConstraint_t>
    pub const m_Twists: usize = 0x150; // CUtlVector<FeTwistConstraint_t>
    pub const m_AxialEdges: usize = 0x168; // CUtlVector<FeAxialEdgeBend_t>
    pub const m_NodeInvMasses: usize = 0x180; // CUtlVector<float>
    pub const m_CtrlOffsets: usize = 0x198; // CUtlVector<FeCtrlOffset_t>
    pub const m_CtrlOsOffsets: usize = 0x1B0; // CUtlVector<FeCtrlOsOffset_t>
    pub const m_FollowNodes: usize = 0x1C8; // CUtlVector<FeFollowNode_t>
    pub const m_CollisionPlanes: usize = 0x1E0; // CUtlVector<FeCollisionPlane_t>
    pub const m_NodeIntegrator: usize = 0x1F8; // CUtlVector<FeNodeIntegrator_t>
    pub const m_SpringIntegrator: usize = 0x210; // CUtlVector<FeSpringIntegrator_t>
    pub const m_SimdSpringIntegrator: usize = 0x228; // CUtlVector<FeSimdSpringIntegrator_t>
    pub const m_WorldCollisionParams: usize = 0x240; // CUtlVector<FeWorldCollisionParams_t>
    pub const m_LegacyStretchForce: usize = 0x258; // CUtlVector<float>
    pub const m_NodeCollisionRadii: usize = 0x270; // CUtlVector<float>
    pub const m_DynNodeFriction: usize = 0x288; // CUtlVector<float>
    pub const m_LocalRotation: usize = 0x2A0; // CUtlVector<float>
    pub const m_LocalForce: usize = 0x2B8; // CUtlVector<float>
    pub const m_TaperedCapsuleStretches: usize = 0x2D0; // CUtlVector<FeTaperedCapsuleStretch_t>
    pub const m_TaperedCapsuleRigids: usize = 0x2E8; // CUtlVector<FeTaperedCapsuleRigid_t>
    pub const m_SphereRigids: usize = 0x300; // CUtlVector<FeSphereRigid_t>
    pub const m_WorldCollisionNodes: usize = 0x318; // CUtlVector<uint16_t>
    pub const m_TreeParents: usize = 0x330; // CUtlVector<uint16_t>
    pub const m_TreeCollisionMasks: usize = 0x348; // CUtlVector<uint16_t>
    pub const m_TreeChildren: usize = 0x360; // CUtlVector<FeTreeChildren_t>
    pub const m_FreeNodes: usize = 0x378; // CUtlVector<uint16_t>
    pub const m_FitMatrices: usize = 0x390; // CUtlVector<FeFitMatrix_t>
    pub const m_FitWeights: usize = 0x3A8; // CUtlVector<FeFitWeight_t>
    pub const m_ReverseOffsets: usize = 0x3C0; // CUtlVector<FeNodeReverseOffset_t>
    pub const m_AnimStrayRadii: usize = 0x3D8; // CUtlVector<FeAnimStrayRadius_t>
    pub const m_SimdAnimStrayRadii: usize = 0x3F0; // CUtlVector<FeSimdAnimStrayRadius_t>
    pub const m_KelagerBends: usize = 0x408; // CUtlVector<FeKelagerBend2_t>
    pub const m_CtrlSoftOffsets: usize = 0x420; // CUtlVector<FeCtrlSoftOffset_t>
    pub const m_JiggleBones: usize = 0x438; // CUtlVector<CFeIndexedJiggleBone>
    pub const m_SourceElems: usize = 0x450; // CUtlVector<uint16_t>
    pub const m_GoalDampedSpringIntegrators: usize = 0x468; // CUtlVector<uint32_t>
    pub const m_Tris: usize = 0x480; // CUtlVector<FeTri_t>
    pub const m_nTriCount1: usize = 0x498; // uint16_t
    pub const m_nTriCount2: usize = 0x49A; // uint16_t
    pub const m_nReservedUint8: usize = 0x49C; // uint8_t
    pub const m_nExtraPressureIterations: usize = 0x49D; // uint8_t
    pub const m_nExtraGoalIterations: usize = 0x49E; // uint8_t
    pub const m_nExtraIterations: usize = 0x49F; // uint8_t
    pub const m_BoxRigids: usize = 0x4A0; // CUtlVector<FeBoxRigid_t>
    pub const m_DynNodeVertexSet: usize = 0x4B8; // CUtlVector<uint8_t>
    pub const m_VertexSetNames: usize = 0x4D0; // CUtlVector<uint32_t>
    pub const m_RigidColliderPriorities: usize = 0x4E8; // CUtlVector<FeRigidColliderIndices_t>
    pub const m_MorphLayers: usize = 0x500; // CUtlVector<FeMorphLayerDepr_t>
    pub const m_MorphSetData: usize = 0x518; // CUtlVector<uint8_t>
    pub const m_VertexMaps: usize = 0x530; // CUtlVector<FeVertexMapDesc_t>
    pub const m_VertexMapValues: usize = 0x548; // CUtlVector<uint8_t>
    pub const m_Effects: usize = 0x560; // CUtlVector<FeEffectDesc_t>
    pub const m_LockToParent: usize = 0x578; // CUtlVector<FeCtrlOffset_t>
    pub const m_LockToGoal: usize = 0x590; // CUtlVector<uint16_t>
    pub const m_SkelParents: usize = 0x5A8; // CUtlVector<int16_t>
    pub const m_DynNodeWindBases: usize = 0x5C0; // CUtlVector<FeNodeWindBase_t>
    pub const m_flInternalPressure: usize = 0x5D8; // float
    pub const m_flDefaultTimeDilation: usize = 0x5DC; // float
    pub const m_flWindage: usize = 0x5E0; // float
    pub const m_flWindDrag: usize = 0x5E4; // float
    pub const m_flDefaultSurfaceStretch: usize = 0x5E8; // float
    pub const m_flDefaultThreadStretch: usize = 0x5EC; // float
    pub const m_flDefaultGravityScale: usize = 0x5F0; // float
    pub const m_flDefaultVelAirDrag: usize = 0x5F4; // float
    pub const m_flDefaultExpAirDrag: usize = 0x5F8; // float
    pub const m_flDefaultVelQuadAirDrag: usize = 0x5FC; // float
    pub const m_flDefaultExpQuadAirDrag: usize = 0x600; // float
    pub const m_flRodVelocitySmoothRate: usize = 0x604; // float
    pub const m_flQuadVelocitySmoothRate: usize = 0x608; // float
    pub const m_flAddWorldCollisionRadius: usize = 0x60C; // float
    pub const m_flDefaultVolumetricSolveAmount: usize = 0x610; // float
    pub const m_nRodVelocitySmoothIterations: usize = 0x614; // uint16_t
    pub const m_nQuadVelocitySmoothIterations: usize = 0x616; // uint16_t
}

pub mod RnBlendVertex_t {
    pub const m_nWeight0: usize = 0x0; // uint16_t
    pub const m_nIndex0: usize = 0x2; // uint16_t
    pub const m_nWeight1: usize = 0x4; // uint16_t
    pub const m_nIndex1: usize = 0x6; // uint16_t
    pub const m_nWeight2: usize = 0x8; // uint16_t
    pub const m_nIndex2: usize = 0xA; // uint16_t
    pub const m_nFlags: usize = 0xC; // uint16_t
    pub const m_nTargetIndex: usize = 0xE; // uint16_t
}

pub mod RnBodyDesc_t {
    pub const m_sDebugName: usize = 0x0; // CUtlString
    pub const m_vPosition: usize = 0x8; // Vector
    pub const m_qOrientation: usize = 0x14; // QuaternionStorage
    pub const m_vLinearVelocity: usize = 0x24; // Vector
    pub const m_vAngularVelocity: usize = 0x30; // Vector
    pub const m_vLocalMassCenter: usize = 0x3C; // Vector
    pub const m_LocalInertiaInv: usize = 0x48; // Vector[3]
    pub const m_flMassInv: usize = 0x6C; // float
    pub const m_flGameMass: usize = 0x70; // float
    pub const m_flInertiaScaleInv: usize = 0x74; // float
    pub const m_flLinearDamping: usize = 0x78; // float
    pub const m_flAngularDamping: usize = 0x7C; // float
    pub const m_flLinearDrag: usize = 0x80; // float
    pub const m_flAngularDrag: usize = 0x84; // float
    pub const m_flLinearBuoyancyDrag: usize = 0x88; // float
    pub const m_flAngularBuoyancyDrag: usize = 0x8C; // float
    pub const m_vLastAwakeForceAccum: usize = 0x90; // Vector
    pub const m_vLastAwakeTorqueAccum: usize = 0x9C; // Vector
    pub const m_flBuoyancyFactor: usize = 0xA8; // float
    pub const m_flGravityScale: usize = 0xAC; // float
    pub const m_flTimeScale: usize = 0xB0; // float
    pub const m_nBodyType: usize = 0xB4; // int32_t
    pub const m_nGameIndex: usize = 0xB8; // uint32_t
    pub const m_nGameFlags: usize = 0xBC; // uint32_t
    pub const m_nMinVelocityIterations: usize = 0xC0; // int8_t
    pub const m_nMinPositionIterations: usize = 0xC1; // int8_t
    pub const m_nMassPriority: usize = 0xC2; // int8_t
    pub const m_bEnabled: usize = 0xC3; // bool
    pub const m_bSleeping: usize = 0xC4; // bool
    pub const m_bIsContinuousEnabled: usize = 0xC5; // bool
    pub const m_bDragEnabled: usize = 0xC6; // bool
    pub const m_bBuoyancyDragEnabled: usize = 0xC7; // bool
    pub const m_bGravityDisabled: usize = 0xC8; // bool
    pub const m_bSpeculativeEnabled: usize = 0xC9; // bool
    pub const m_bHasShadowController: usize = 0xCA; // bool
}

pub mod RnCapsuleDesc_t { // RnShapeDesc_t
    pub const m_Capsule: usize = 0x10; // RnCapsule_t
}

pub mod RnCapsule_t {
    pub const m_vCenter: usize = 0x0; // Vector[2]
    pub const m_flRadius: usize = 0x18; // float
}

pub mod RnFace_t {
    pub const m_nEdge: usize = 0x0; // uint8_t
}

pub mod RnHalfEdge_t {
    pub const m_nNext: usize = 0x0; // uint8_t
    pub const m_nTwin: usize = 0x1; // uint8_t
    pub const m_nOrigin: usize = 0x2; // uint8_t
    pub const m_nFace: usize = 0x3; // uint8_t
}

pub mod RnHullDesc_t { // RnShapeDesc_t
    pub const m_Hull: usize = 0x10; // RnHull_t
}

pub mod RnHull_t {
    pub const m_vCentroid: usize = 0x0; // Vector
    pub const m_flMaxAngularRadius: usize = 0xC; // float
    pub const m_Bounds: usize = 0x10; // AABB_t
    pub const m_vOrthographicAreas: usize = 0x28; // Vector
    pub const m_MassProperties: usize = 0x34; // matrix3x4_t
    pub const m_flVolume: usize = 0x64; // float
    pub const m_flSurfaceArea: usize = 0x68; // float
    pub const m_Vertices: usize = 0x70; // CUtlVector<RnVertex_t>
    pub const m_VertexPositions: usize = 0x88; // CUtlVector<Vector>
    pub const m_Edges: usize = 0xA0; // CUtlVector<RnHalfEdge_t>
    pub const m_Faces: usize = 0xB8; // CUtlVector<RnFace_t>
    pub const m_FacePlanes: usize = 0xD0; // CUtlVector<RnPlane_t>
    pub const m_nFlags: usize = 0xE8; // uint32_t
    pub const m_pRegionSVM: usize = 0xF0; // CRegionSVM*
}

pub mod RnMeshDesc_t { // RnShapeDesc_t
    pub const m_Mesh: usize = 0x10; // RnMesh_t
}

pub mod RnMesh_t {
    pub const m_vMin: usize = 0x0; // Vector
    pub const m_vMax: usize = 0xC; // Vector
    pub const m_Nodes: usize = 0x18; // CUtlVector<RnNode_t>
    pub const m_Vertices: usize = 0x30; // CUtlVectorSIMDPaddedVector
    pub const m_Triangles: usize = 0x48; // CUtlVector<RnTriangle_t>
    pub const m_Wings: usize = 0x60; // CUtlVector<RnWing_t>
    pub const m_Materials: usize = 0x78; // CUtlVector<uint8_t>
    pub const m_vOrthographicAreas: usize = 0x90; // Vector
    pub const m_nFlags: usize = 0x9C; // uint32_t
    pub const m_nDebugFlags: usize = 0xA0; // uint32_t
}

pub mod RnNode_t {
    pub const m_vMin: usize = 0x0; // Vector
    pub const m_nChildren: usize = 0xC; // uint32_t
    pub const m_vMax: usize = 0x10; // Vector
    pub const m_nTriangleOffset: usize = 0x1C; // uint32_t
}

pub mod RnPlane_t {
    pub const m_vNormal: usize = 0x0; // Vector
    pub const m_flOffset: usize = 0xC; // float
}

pub mod RnShapeDesc_t {
    pub const m_nCollisionAttributeIndex: usize = 0x0; // uint32_t
    pub const m_nSurfacePropertyIndex: usize = 0x4; // uint32_t
    pub const m_UserFriendlyName: usize = 0x8; // CUtlString
}

pub mod RnSoftbodyCapsule_t {
    pub const m_vCenter: usize = 0x0; // Vector[2]
    pub const m_flRadius: usize = 0x18; // float
    pub const m_nParticle: usize = 0x1C; // uint16_t[2]
}

pub mod RnSoftbodyParticle_t {
    pub const m_flMassInv: usize = 0x0; // float
}

pub mod RnSoftbodySpring_t {
    pub const m_nParticle: usize = 0x0; // uint16_t[2]
    pub const m_flLength: usize = 0x4; // float
}

pub mod RnSphereDesc_t { // RnShapeDesc_t
    pub const m_Sphere: usize = 0x10; // SphereBase_t<float>
}

pub mod RnTriangle_t {
    pub const m_nIndex: usize = 0x0; // int32_t[3]
}

pub mod RnVertex_t {
    pub const m_nEdge: usize = 0x0; // uint8_t
}

pub mod RnWing_t {
    pub const m_nIndex: usize = 0x0; // int32_t[3]
}

pub mod VertexPositionColor_t {
    pub const m_vPosition: usize = 0x0; // Vector
}

pub mod VertexPositionNormal_t {
    pub const m_vPosition: usize = 0x0; // Vector
    pub const m_vNormal: usize = 0xC; // Vector
}

pub mod constraint_axislimit_t {
    pub const flMinRotation: usize = 0x0; // float
    pub const flMaxRotation: usize = 0x4; // float
    pub const flMotorTargetAngSpeed: usize = 0x8; // float
    pub const flMotorMaxTorque: usize = 0xC; // float
}

pub mod constraint_breakableparams_t {
    pub const strength: usize = 0x0; // float
    pub const forceLimit: usize = 0x4; // float
    pub const torqueLimit: usize = 0x8; // float
    pub const bodyMassScale: usize = 0xC; // float[2]
    pub const isActive: usize = 0x14; // bool
}

pub mod constraint_hingeparams_t {
    pub const worldPosition: usize = 0x0; // Vector
    pub const worldAxisDirection: usize = 0xC; // Vector
    pub const hingeAxis: usize = 0x18; // constraint_axislimit_t
    pub const constraint: usize = 0x28; // constraint_breakableparams_t
}

pub mod vphysics_save_cphysicsbody_t { // RnBodyDesc_t
    pub const m_nOldPointer: usize = 0xD0; // uint64_t
}