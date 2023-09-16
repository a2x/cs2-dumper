#![allow(non_snake_case, non_upper_case_globals)]

pub mod CFeIndexedJiggleBone {
    pub const m_nNode: usize = 0x0;
    pub const m_nJiggleParent: usize = 0x4;
    pub const m_jiggleBone: usize = 0x8;
}

pub mod CFeJiggleBone {
    pub const m_nFlags: usize = 0x0;
    pub const m_flLength: usize = 0x4;
    pub const m_flTipMass: usize = 0x8;
    pub const m_flYawStiffness: usize = 0xc;
    pub const m_flYawDamping: usize = 0x10;
    pub const m_flPitchStiffness: usize = 0x14;
    pub const m_flPitchDamping: usize = 0x18;
    pub const m_flAlongStiffness: usize = 0x1c;
    pub const m_flAlongDamping: usize = 0x20;
    pub const m_flAngleLimit: usize = 0x24;
    pub const m_flMinYaw: usize = 0x28;
    pub const m_flMaxYaw: usize = 0x2c;
    pub const m_flYawFriction: usize = 0x30;
    pub const m_flYawBounce: usize = 0x34;
    pub const m_flMinPitch: usize = 0x38;
    pub const m_flMaxPitch: usize = 0x3c;
    pub const m_flPitchFriction: usize = 0x40;
    pub const m_flPitchBounce: usize = 0x44;
    pub const m_flBaseMass: usize = 0x48;
    pub const m_flBaseStiffness: usize = 0x4c;
    pub const m_flBaseDamping: usize = 0x50;
    pub const m_flBaseMinLeft: usize = 0x54;
    pub const m_flBaseMaxLeft: usize = 0x58;
    pub const m_flBaseLeftFriction: usize = 0x5c;
    pub const m_flBaseMinUp: usize = 0x60;
    pub const m_flBaseMaxUp: usize = 0x64;
    pub const m_flBaseUpFriction: usize = 0x68;
    pub const m_flBaseMinForward: usize = 0x6c;
    pub const m_flBaseMaxForward: usize = 0x70;
    pub const m_flBaseForwardFriction: usize = 0x74;
    pub const m_flRadius0: usize = 0x78;
    pub const m_flRadius1: usize = 0x7c;
    pub const m_vPoint0: usize = 0x80;
    pub const m_vPoint1: usize = 0x8c;
    pub const m_nCollisionMask: usize = 0x98;
}

pub mod CFeMorphLayer {
    pub const m_Name: usize = 0x0;
    pub const m_nNameHash: usize = 0x8;
    pub const m_Nodes: usize = 0x10;
    pub const m_InitPos: usize = 0x28;
    pub const m_Gravity: usize = 0x40;
    pub const m_GoalStrength: usize = 0x58;
    pub const m_GoalDamping: usize = 0x70;
}

pub mod CFeNamedJiggleBone {
    pub const m_strParentBone: usize = 0x0;
    pub const m_transform: usize = 0x10;
    pub const m_nJiggleParent: usize = 0x30;
    pub const m_jiggleBone: usize = 0x34;
}

pub mod CFeVertexMapBuildArray {
    pub const m_Array: usize = 0x0;
}

pub mod CRegionSVM {
    pub const m_Planes: usize = 0x0;
    pub const m_Nodes: usize = 0x18;
}

pub mod CastSphereSATParams_t {
    pub const m_vRayStart: usize = 0x0;
    pub const m_vRayDelta: usize = 0xc;
    pub const m_flRadius: usize = 0x18;
    pub const m_flMaxFraction: usize = 0x1c;
    pub const m_flScale: usize = 0x20;
    pub const m_pHull: usize = 0x28;
}

pub mod CovMatrix3 {
    pub const m_vDiag: usize = 0x0;
    pub const m_flXY: usize = 0xc;
    pub const m_flXZ: usize = 0x10;
    pub const m_flYZ: usize = 0x14;
}

pub mod Dop26_t {
    pub const m_flSupport: usize = 0x0;
}

pub mod FeAnimStrayRadius_t {
    pub const nNode: usize = 0x0;
    pub const flMaxDist: usize = 0x4;
    pub const flRelaxationFactor: usize = 0x8;
}

pub mod FeAxialEdgeBend_t {
    pub const te: usize = 0x0;
    pub const tv: usize = 0x4;
    pub const flDist: usize = 0x8;
    pub const flWeight: usize = 0xc;
    pub const nNode: usize = 0x1c;
}

pub mod FeBandBendLimit_t {
    pub const flDistMin: usize = 0x0;
    pub const flDistMax: usize = 0x4;
    pub const nNode: usize = 0x8;
}

pub mod FeBoxRigid_t {
    pub const tmFrame2: usize = 0x0;
    pub const nNode: usize = 0x20;
    pub const nCollisionMask: usize = 0x22;
    pub const vSize: usize = 0x24;
    pub const nVertexMapIndex: usize = 0x30;
    pub const nFlags: usize = 0x32;
}

pub mod FeBuildBoxRigid_t {
    pub const m_nPriority: usize = 0x40;
    pub const m_nVertexMapHash: usize = 0x44;
}

pub mod FeBuildSphereRigid_t {
    pub const m_nPriority: usize = 0x20;
    pub const m_nVertexMapHash: usize = 0x24;
}

pub mod FeBuildTaperedCapsuleRigid_t {
    pub const m_nPriority: usize = 0x30;
    pub const m_nVertexMapHash: usize = 0x34;
}

pub mod FeCollisionPlane_t {
    pub const nCtrlParent: usize = 0x0;
    pub const nChildNode: usize = 0x2;
    pub const m_Plane: usize = 0x4;
    pub const flStrength: usize = 0x14;
}

pub mod FeCtrlOffset_t {
    pub const vOffset: usize = 0x0;
    pub const nCtrlParent: usize = 0xc;
    pub const nCtrlChild: usize = 0xe;
}

pub mod FeCtrlOsOffset_t {
    pub const nCtrlParent: usize = 0x0;
    pub const nCtrlChild: usize = 0x2;
}

pub mod FeCtrlSoftOffset_t {
    pub const nCtrlParent: usize = 0x0;
    pub const nCtrlChild: usize = 0x2;
    pub const vOffset: usize = 0x4;
    pub const flAlpha: usize = 0x10;
}

pub mod FeEdgeDesc_t {
    pub const nEdge: usize = 0x0;
    pub const nSide: usize = 0x4;
    pub const nVirtElem: usize = 0xc;
}

pub mod FeEffectDesc_t {
    pub const sName: usize = 0x0;
    pub const nNameHash: usize = 0x8;
    pub const nType: usize = 0xc;
    pub const m_Params: usize = 0x10;
}

pub mod FeFitInfluence_t {
    pub const nVertexNode: usize = 0x0;
    pub const flWeight: usize = 0x4;
    pub const nMatrixNode: usize = 0x8;
}

pub mod FeFitMatrix_t {
    pub const bone: usize = 0x0;
    pub const vCenter: usize = 0x20;
    pub const nEnd: usize = 0x2c;
    pub const nNode: usize = 0x2e;
    pub const nBeginDynamic: usize = 0x30;
}

pub mod FeFitWeight_t {
    pub const flWeight: usize = 0x0;
    pub const nNode: usize = 0x4;
    pub const nDummy: usize = 0x6;
}

pub mod FeFollowNode_t {
    pub const nParentNode: usize = 0x0;
    pub const nChildNode: usize = 0x2;
    pub const flWeight: usize = 0x4;
}

pub mod FeKelagerBend2_t {
    pub const flWeight: usize = 0x0;
    pub const flHeight0: usize = 0xc;
    pub const nNode: usize = 0x10;
    pub const nReserved: usize = 0x16;
}

pub mod FeMorphLayerDepr_t {
    pub const m_Name: usize = 0x0;
    pub const m_nNameHash: usize = 0x8;
    pub const m_Nodes: usize = 0x10;
    pub const m_InitPos: usize = 0x28;
    pub const m_Gravity: usize = 0x40;
    pub const m_GoalStrength: usize = 0x58;
    pub const m_GoalDamping: usize = 0x70;
    pub const m_nFlags: usize = 0x88;
}

pub mod FeNodeBase_t {
    pub const nNode: usize = 0x0;
    pub const nDummy: usize = 0x2;
    pub const nNodeX0: usize = 0x8;
    pub const nNodeX1: usize = 0xa;
    pub const nNodeY0: usize = 0xc;
    pub const nNodeY1: usize = 0xe;
    pub const qAdjust: usize = 0x10;
}

pub mod FeNodeIntegrator_t {
    pub const flPointDamping: usize = 0x0;
    pub const flAnimationForceAttraction: usize = 0x4;
    pub const flAnimationVertexAttraction: usize = 0x8;
    pub const flGravity: usize = 0xc;
}

pub mod FeNodeReverseOffset_t {
    pub const vOffset: usize = 0x0;
    pub const nBoneCtrl: usize = 0xc;
    pub const nTargetNode: usize = 0xe;
}

pub mod FeNodeWindBase_t {
    pub const nNodeX0: usize = 0x0;
    pub const nNodeX1: usize = 0x2;
    pub const nNodeY0: usize = 0x4;
    pub const nNodeY1: usize = 0x6;
}

pub mod FeProxyVertexMap_t {
    pub const m_Name: usize = 0x0;
    pub const m_flWeight: usize = 0x8;
}

pub mod FeQuad_t {
    pub const nNode: usize = 0x0;
    pub const flSlack: usize = 0x8;
    pub const vShape: usize = 0xc;
}

pub mod FeRigidColliderIndices_t {
    pub const m_nTaperedCapsuleRigidIndex: usize = 0x0;
    pub const m_nSphereRigidIndex: usize = 0x2;
    pub const m_nBoxRigidIndex: usize = 0x4;
    pub const m_nCollisionPlaneIndex: usize = 0x6;
}

pub mod FeRodConstraint_t {
    pub const nNode: usize = 0x0;
    pub const flMaxDist: usize = 0x4;
    pub const flMinDist: usize = 0x8;
    pub const flWeight0: usize = 0xc;
    pub const flRelaxationFactor: usize = 0x10;
}

pub mod FeSimdAnimStrayRadius_t {
    pub const nNode: usize = 0x0;
    pub const flMaxDist: usize = 0x10;
    pub const flRelaxationFactor: usize = 0x20;
}

pub mod FeSimdNodeBase_t {
    pub const nNode: usize = 0x0;
    pub const nNodeX0: usize = 0x8;
    pub const nNodeX1: usize = 0x10;
    pub const nNodeY0: usize = 0x18;
    pub const nNodeY1: usize = 0x20;
    pub const nDummy: usize = 0x28;
    pub const qAdjust: usize = 0x30;
}

pub mod FeSimdQuad_t {
    pub const nNode: usize = 0x0;
    pub const f4Slack: usize = 0x20;
    pub const vShape: usize = 0x30;
    pub const f4Weights: usize = 0xf0;
}

pub mod FeSimdRodConstraint_t {
    pub const nNode: usize = 0x0;
    pub const f4MaxDist: usize = 0x10;
    pub const f4MinDist: usize = 0x20;
    pub const f4Weight0: usize = 0x30;
    pub const f4RelaxationFactor: usize = 0x40;
}

pub mod FeSimdSpringIntegrator_t {
    pub const nNode: usize = 0x0;
    pub const flSpringRestLength: usize = 0x10;
    pub const flSpringConstant: usize = 0x20;
    pub const flSpringDamping: usize = 0x30;
    pub const flNodeWeight0: usize = 0x40;
}

pub mod FeSimdTri_t {
    pub const nNode: usize = 0x0;
    pub const w1: usize = 0x30;
    pub const w2: usize = 0x40;
    pub const v1x: usize = 0x50;
    pub const v2: usize = 0x60;
}

pub mod FeSoftParent_t {
    pub const nParent: usize = 0x0;
    pub const flAlpha: usize = 0x4;
}

pub mod FeSourceEdge_t {
    pub const nNode: usize = 0x0;
}

pub mod FeSphereRigid_t {
    pub const vSphere: usize = 0x0;
    pub const nNode: usize = 0x10;
    pub const nCollisionMask: usize = 0x12;
    pub const nVertexMapIndex: usize = 0x14;
    pub const nFlags: usize = 0x16;
}

pub mod FeSpringIntegrator_t {
    pub const nNode: usize = 0x0;
    pub const flSpringRestLength: usize = 0x4;
    pub const flSpringConstant: usize = 0x8;
    pub const flSpringDamping: usize = 0xc;
    pub const flNodeWeight0: usize = 0x10;
}

pub mod FeStiffHingeBuild_t {
    pub const flMaxAngle: usize = 0x0;
    pub const flStrength: usize = 0x4;
    pub const flMotionBias: usize = 0x8;
    pub const nNode: usize = 0x14;
}

pub mod FeTaperedCapsuleRigid_t {
    pub const vSphere: usize = 0x0;
    pub const nNode: usize = 0x20;
    pub const nCollisionMask: usize = 0x22;
    pub const nVertexMapIndex: usize = 0x24;
    pub const nFlags: usize = 0x26;
}

pub mod FeTaperedCapsuleStretch_t {
    pub const nNode: usize = 0x0;
    pub const nCollisionMask: usize = 0x4;
    pub const nDummy: usize = 0x6;
    pub const flRadius: usize = 0x8;
}

pub mod FeTreeChildren_t {
    pub const nChild: usize = 0x0;
}

pub mod FeTri_t {
    pub const nNode: usize = 0x0;
    pub const w1: usize = 0x8;
    pub const w2: usize = 0xc;
    pub const v1x: usize = 0x10;
    pub const v2: usize = 0x14;
}

pub mod FeTwistConstraint_t {
    pub const nNodeOrient: usize = 0x0;
    pub const nNodeEnd: usize = 0x2;
    pub const flTwistRelax: usize = 0x4;
    pub const flSwingRelax: usize = 0x8;
}

pub mod FeVertexMapBuild_t {
    pub const m_VertexMapName: usize = 0x0;
    pub const m_nNameHash: usize = 0x8;
    pub const m_Color: usize = 0xc;
    pub const m_flVolumetricSolveStrength: usize = 0x10;
    pub const m_nScaleSourceNode: usize = 0x14;
    pub const m_Weights: usize = 0x18;
}

pub mod FeVertexMapDesc_t {
    pub const sName: usize = 0x0;
    pub const nNameHash: usize = 0x8;
    pub const nColor: usize = 0xc;
    pub const nFlags: usize = 0x10;
    pub const nVertexBase: usize = 0x14;
    pub const nVertexCount: usize = 0x16;
    pub const nMapOffset: usize = 0x18;
    pub const nNodeListOffset: usize = 0x1c;
    pub const vCenterOfMass: usize = 0x20;
    pub const flVolumetricSolveStrength: usize = 0x2c;
    pub const nScaleSourceNode: usize = 0x30;
    pub const nNodeListCount: usize = 0x32;
}

pub mod FeWeightedNode_t {
    pub const nNode: usize = 0x0;
    pub const nWeight: usize = 0x2;
}

pub mod FeWorldCollisionParams_t {
    pub const flWorldFriction: usize = 0x0;
    pub const flGroundFriction: usize = 0x4;
    pub const nListBegin: usize = 0x8;
    pub const nListEnd: usize = 0xa;
}

pub mod FourCovMatrices3 {
    pub const m_vDiag: usize = 0x0;
    pub const m_flXY: usize = 0x30;
    pub const m_flXZ: usize = 0x40;
    pub const m_flYZ: usize = 0x50;
}

pub mod FourVectors2D {
    pub const x: usize = 0x0;
    pub const y: usize = 0x10;
}

pub mod OldFeEdge_t {
    pub const m_flK: usize = 0x0;
    pub const invA: usize = 0xc;
    pub const t: usize = 0x10;
    pub const flThetaRelaxed: usize = 0x14;
    pub const flThetaFactor: usize = 0x18;
    pub const c01: usize = 0x1c;
    pub const c02: usize = 0x20;
    pub const c03: usize = 0x24;
    pub const c04: usize = 0x28;
    pub const flAxialModelDist: usize = 0x2c;
    pub const flAxialModelWeights: usize = 0x30;
    pub const m_nNode: usize = 0x40;
}

pub mod PhysFeModelDesc_t {
    pub const m_CtrlHash: usize = 0x0;
    pub const m_CtrlName: usize = 0x18;
    pub const m_nStaticNodeFlags: usize = 0x30;
    pub const m_nDynamicNodeFlags: usize = 0x34;
    pub const m_flLocalForce: usize = 0x38;
    pub const m_flLocalRotation: usize = 0x3c;
    pub const m_nNodeCount: usize = 0x40;
    pub const m_nStaticNodes: usize = 0x42;
    pub const m_nRotLockStaticNodes: usize = 0x44;
    pub const m_nFirstPositionDrivenNode: usize = 0x46;
    pub const m_nSimdTriCount1: usize = 0x48;
    pub const m_nSimdTriCount2: usize = 0x4a;
    pub const m_nSimdQuadCount1: usize = 0x4c;
    pub const m_nSimdQuadCount2: usize = 0x4e;
    pub const m_nQuadCount1: usize = 0x50;
    pub const m_nQuadCount2: usize = 0x52;
    pub const m_nTreeDepth: usize = 0x54;
    pub const m_nNodeBaseJiggleboneDependsCount: usize = 0x56;
    pub const m_nRopeCount: usize = 0x58;
    pub const m_Ropes: usize = 0x60;
    pub const m_NodeBases: usize = 0x78;
    pub const m_SimdNodeBases: usize = 0x90;
    pub const m_Quads: usize = 0xa8;
    pub const m_SimdQuads: usize = 0xc0;
    pub const m_SimdTris: usize = 0xd8;
    pub const m_SimdRods: usize = 0xf0;
    pub const m_InitPose: usize = 0x108;
    pub const m_Rods: usize = 0x120;
    pub const m_Twists: usize = 0x138;
    pub const m_AxialEdges: usize = 0x150;
    pub const m_NodeInvMasses: usize = 0x168;
    pub const m_CtrlOffsets: usize = 0x180;
    pub const m_CtrlOsOffsets: usize = 0x198;
    pub const m_FollowNodes: usize = 0x1b0;
    pub const m_CollisionPlanes: usize = 0x1c8;
    pub const m_NodeIntegrator: usize = 0x1e0;
    pub const m_SpringIntegrator: usize = 0x1f8;
    pub const m_SimdSpringIntegrator: usize = 0x210;
    pub const m_WorldCollisionParams: usize = 0x228;
    pub const m_LegacyStretchForce: usize = 0x240;
    pub const m_NodeCollisionRadii: usize = 0x258;
    pub const m_DynNodeFriction: usize = 0x270;
    pub const m_LocalRotation: usize = 0x288;
    pub const m_LocalForce: usize = 0x2a0;
    pub const m_TaperedCapsuleStretches: usize = 0x2b8;
    pub const m_TaperedCapsuleRigids: usize = 0x2d0;
    pub const m_SphereRigids: usize = 0x2e8;
    pub const m_WorldCollisionNodes: usize = 0x300;
    pub const m_TreeParents: usize = 0x318;
    pub const m_TreeCollisionMasks: usize = 0x330;
    pub const m_TreeChildren: usize = 0x348;
    pub const m_FreeNodes: usize = 0x360;
    pub const m_FitMatrices: usize = 0x378;
    pub const m_FitWeights: usize = 0x390;
    pub const m_ReverseOffsets: usize = 0x3a8;
    pub const m_AnimStrayRadii: usize = 0x3c0;
    pub const m_SimdAnimStrayRadii: usize = 0x3d8;
    pub const m_KelagerBends: usize = 0x3f0;
    pub const m_CtrlSoftOffsets: usize = 0x408;
    pub const m_JiggleBones: usize = 0x420;
    pub const m_SourceElems: usize = 0x438;
    pub const m_GoalDampedSpringIntegrators: usize = 0x450;
    pub const m_Tris: usize = 0x468;
    pub const m_nTriCount1: usize = 0x480;
    pub const m_nTriCount2: usize = 0x482;
    pub const m_nReservedUint8: usize = 0x484;
    pub const m_nExtraPressureIterations: usize = 0x485;
    pub const m_nExtraGoalIterations: usize = 0x486;
    pub const m_nExtraIterations: usize = 0x487;
    pub const m_BoxRigids: usize = 0x488;
    pub const m_DynNodeVertexSet: usize = 0x4a0;
    pub const m_VertexSetNames: usize = 0x4b8;
    pub const m_RigidColliderPriorities: usize = 0x4d0;
    pub const m_MorphLayers: usize = 0x4e8;
    pub const m_MorphSetData: usize = 0x500;
    pub const m_VertexMaps: usize = 0x518;
    pub const m_VertexMapValues: usize = 0x530;
    pub const m_Effects: usize = 0x548;
    pub const m_LockToParent: usize = 0x560;
    pub const m_LockToGoal: usize = 0x578;
    pub const m_DynNodeWindBases: usize = 0x590;
    pub const m_flInternalPressure: usize = 0x5a8;
    pub const m_flDefaultTimeDilation: usize = 0x5ac;
    pub const m_flWindage: usize = 0x5b0;
    pub const m_flWindDrag: usize = 0x5b4;
    pub const m_flDefaultSurfaceStretch: usize = 0x5b8;
    pub const m_flDefaultThreadStretch: usize = 0x5bc;
    pub const m_flDefaultGravityScale: usize = 0x5c0;
    pub const m_flDefaultVelAirDrag: usize = 0x5c4;
    pub const m_flDefaultExpAirDrag: usize = 0x5c8;
    pub const m_flDefaultVelQuadAirDrag: usize = 0x5cc;
    pub const m_flDefaultExpQuadAirDrag: usize = 0x5d0;
    pub const m_flRodVelocitySmoothRate: usize = 0x5d4;
    pub const m_flQuadVelocitySmoothRate: usize = 0x5d8;
    pub const m_flAddWorldCollisionRadius: usize = 0x5dc;
    pub const m_flDefaultVolumetricSolveAmount: usize = 0x5e0;
    pub const m_nRodVelocitySmoothIterations: usize = 0x5e4;
    pub const m_nQuadVelocitySmoothIterations: usize = 0x5e6;
}

pub mod RnBlendVertex_t {
    pub const m_nWeight0: usize = 0x0;
    pub const m_nIndex0: usize = 0x2;
    pub const m_nWeight1: usize = 0x4;
    pub const m_nIndex1: usize = 0x6;
    pub const m_nWeight2: usize = 0x8;
    pub const m_nIndex2: usize = 0xa;
    pub const m_nFlags: usize = 0xc;
    pub const m_nTargetIndex: usize = 0xe;
}

pub mod RnBodyDesc_t {
    pub const m_sDebugName: usize = 0x0;
    pub const m_vPosition: usize = 0x8;
    pub const m_qOrientation: usize = 0x14;
    pub const m_vLinearVelocity: usize = 0x24;
    pub const m_vAngularVelocity: usize = 0x30;
    pub const m_vLocalMassCenter: usize = 0x3c;
    pub const m_LocalInertiaInv: usize = 0x48;
    pub const m_flMassInv: usize = 0x6c;
    pub const m_flGameMass: usize = 0x70;
    pub const m_flInertiaScaleInv: usize = 0x74;
    pub const m_flLinearDamping: usize = 0x78;
    pub const m_flAngularDamping: usize = 0x7c;
    pub const m_flLinearDrag: usize = 0x80;
    pub const m_flAngularDrag: usize = 0x84;
    pub const m_flLinearBuoyancyDrag: usize = 0x88;
    pub const m_flAngularBuoyancyDrag: usize = 0x8c;
    pub const m_vLastAwakeForceAccum: usize = 0x90;
    pub const m_vLastAwakeTorqueAccum: usize = 0x9c;
    pub const m_flBuoyancyFactor: usize = 0xa8;
    pub const m_flGravityScale: usize = 0xac;
    pub const m_flTimeScale: usize = 0xb0;
    pub const m_nBodyType: usize = 0xb4;
    pub const m_nGameIndex: usize = 0xb8;
    pub const m_nGameFlags: usize = 0xbc;
    pub const m_nMinVelocityIterations: usize = 0xc0;
    pub const m_nMinPositionIterations: usize = 0xc1;
    pub const m_nMassPriority: usize = 0xc2;
    pub const m_bEnabled: usize = 0xc3;
    pub const m_bSleeping: usize = 0xc4;
    pub const m_bIsContinuousEnabled: usize = 0xc5;
    pub const m_bDragEnabled: usize = 0xc6;
    pub const m_bBuoyancyDragEnabled: usize = 0xc7;
    pub const m_bGravityDisabled: usize = 0xc8;
    pub const m_bSpeculativeEnabled: usize = 0xc9;
    pub const m_bHasShadowController: usize = 0xca;
}

pub mod RnCapsuleDesc_t {
    pub const m_Capsule: usize = 0x10;
}

pub mod RnCapsule_t {
    pub const m_vCenter: usize = 0x0;
    pub const m_flRadius: usize = 0x18;
}

pub mod RnFace_t {
    pub const m_nEdge: usize = 0x0;
}

pub mod RnHalfEdge_t {
    pub const m_nNext: usize = 0x0;
    pub const m_nTwin: usize = 0x1;
    pub const m_nOrigin: usize = 0x2;
    pub const m_nFace: usize = 0x3;
}

pub mod RnHullDesc_t {
    pub const m_Hull: usize = 0x10;
}

pub mod RnHull_t {
    pub const m_vCentroid: usize = 0x0;
    pub const m_flMaxAngularRadius: usize = 0xc;
    pub const m_Bounds: usize = 0x10;
    pub const m_vOrthographicAreas: usize = 0x28;
    pub const m_MassProperties: usize = 0x34;
    pub const m_flVolume: usize = 0x64;
    pub const m_Vertices: usize = 0x68;
    pub const m_Edges: usize = 0x80;
    pub const m_Faces: usize = 0x98;
    pub const m_Planes: usize = 0xb0;
    pub const m_nFlags: usize = 0xc8;
    pub const m_pRegionSVM: usize = 0xd0;
}

pub mod RnMeshDesc_t {
    pub const m_Mesh: usize = 0x10;
}

pub mod RnMesh_t {
    pub const m_vMin: usize = 0x0;
    pub const m_vMax: usize = 0xc;
    pub const m_Nodes: usize = 0x18;
    pub const m_Vertices: usize = 0x30;
    pub const m_Triangles: usize = 0x48;
    pub const m_Wings: usize = 0x60;
    pub const m_Materials: usize = 0x78;
    pub const m_vOrthographicAreas: usize = 0x90;
    pub const m_nFlags: usize = 0x9c;
}

pub mod RnNode_t {
    pub const m_vMin: usize = 0x0;
    pub const m_nChildren: usize = 0xc;
    pub const m_vMax: usize = 0x10;
    pub const m_nTriangleOffset: usize = 0x1c;
}

pub mod RnPlane_t {
    pub const m_vNormal: usize = 0x0;
    pub const m_flOffset: usize = 0xc;
}

pub mod RnShapeDesc_t {
    pub const m_nCollisionAttributeIndex: usize = 0x0;
    pub const m_nSurfacePropertyIndex: usize = 0x4;
    pub const m_UserFriendlyName: usize = 0x8;
}

pub mod RnSoftbodyCapsule_t {
    pub const m_vCenter: usize = 0x0;
    pub const m_flRadius: usize = 0x18;
    pub const m_nParticle: usize = 0x1c;
}

pub mod RnSoftbodyParticle_t {
    pub const m_flMassInv: usize = 0x0;
}

pub mod RnSoftbodySpring_t {
    pub const m_nParticle: usize = 0x0;
    pub const m_flLength: usize = 0x4;
}

pub mod RnSphereDesc_t {
    pub const m_Sphere: usize = 0x10;
}

pub mod RnSphere_t {
    pub const m_vCenter: usize = 0x0;
    pub const m_flRadius: usize = 0xc;
}

pub mod RnTriangle_t {
    pub const m_nIndex: usize = 0x0;
}

pub mod RnWing_t {
    pub const m_nIndex: usize = 0x0;
}

pub mod VertexPositionColor_t {
    pub const m_vPosition: usize = 0x0;
}

pub mod VertexPositionNormal_t {
    pub const m_vPosition: usize = 0x0;
    pub const m_vNormal: usize = 0xc;
}

pub mod constraint_axislimit_t {
    pub const flMinRotation: usize = 0x0;
    pub const flMaxRotation: usize = 0x4;
    pub const flMotorTargetAngSpeed: usize = 0x8;
    pub const flMotorMaxTorque: usize = 0xc;
}

pub mod constraint_breakableparams_t {
    pub const strength: usize = 0x0;
    pub const forceLimit: usize = 0x4;
    pub const torqueLimit: usize = 0x8;
    pub const bodyMassScale: usize = 0xc;
    pub const isActive: usize = 0x14;
}

pub mod constraint_hingeparams_t {
    pub const worldPosition: usize = 0x0;
    pub const worldAxisDirection: usize = 0xc;
    pub const hingeAxis: usize = 0x18;
    pub const constraint: usize = 0x28;
}

pub mod vphysics_save_cphysicsbody_t {
    pub const m_nOldPointer: usize = 0xd0;
}