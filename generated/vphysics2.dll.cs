public static class CFeIndexedJiggleBone {
    public const ulong m_nNode = 0x0;
    public const ulong m_nJiggleParent = 0x4;
    public const ulong m_jiggleBone = 0x8;
}

public static class CFeJiggleBone {
    public const ulong m_nFlags = 0x0;
    public const ulong m_flLength = 0x4;
    public const ulong m_flTipMass = 0x8;
    public const ulong m_flYawStiffness = 0xc;
    public const ulong m_flYawDamping = 0x10;
    public const ulong m_flPitchStiffness = 0x14;
    public const ulong m_flPitchDamping = 0x18;
    public const ulong m_flAlongStiffness = 0x1c;
    public const ulong m_flAlongDamping = 0x20;
    public const ulong m_flAngleLimit = 0x24;
    public const ulong m_flMinYaw = 0x28;
    public const ulong m_flMaxYaw = 0x2c;
    public const ulong m_flYawFriction = 0x30;
    public const ulong m_flYawBounce = 0x34;
    public const ulong m_flMinPitch = 0x38;
    public const ulong m_flMaxPitch = 0x3c;
    public const ulong m_flPitchFriction = 0x40;
    public const ulong m_flPitchBounce = 0x44;
    public const ulong m_flBaseMass = 0x48;
    public const ulong m_flBaseStiffness = 0x4c;
    public const ulong m_flBaseDamping = 0x50;
    public const ulong m_flBaseMinLeft = 0x54;
    public const ulong m_flBaseMaxLeft = 0x58;
    public const ulong m_flBaseLeftFriction = 0x5c;
    public const ulong m_flBaseMinUp = 0x60;
    public const ulong m_flBaseMaxUp = 0x64;
    public const ulong m_flBaseUpFriction = 0x68;
    public const ulong m_flBaseMinForward = 0x6c;
    public const ulong m_flBaseMaxForward = 0x70;
    public const ulong m_flBaseForwardFriction = 0x74;
    public const ulong m_flRadius0 = 0x78;
    public const ulong m_flRadius1 = 0x7c;
    public const ulong m_vPoint0 = 0x80;
    public const ulong m_vPoint1 = 0x8c;
    public const ulong m_nCollisionMask = 0x98;
}

public static class CFeMorphLayer {
    public const ulong m_Name = 0x0;
    public const ulong m_nNameHash = 0x8;
    public const ulong m_Nodes = 0x10;
    public const ulong m_InitPos = 0x28;
    public const ulong m_Gravity = 0x40;
    public const ulong m_GoalStrength = 0x58;
    public const ulong m_GoalDamping = 0x70;
}

public static class CFeNamedJiggleBone {
    public const ulong m_strParentBone = 0x0;
    public const ulong m_transform = 0x10;
    public const ulong m_nJiggleParent = 0x30;
    public const ulong m_jiggleBone = 0x34;
}

public static class CFeVertexMapBuildArray {
    public const ulong m_Array = 0x0;
}

public static class CRegionSVM {
    public const ulong m_Planes = 0x0;
    public const ulong m_Nodes = 0x18;
}

public static class CastSphereSATParams_t {
    public const ulong m_vRayStart = 0x0;
    public const ulong m_vRayDelta = 0xc;
    public const ulong m_flRadius = 0x18;
    public const ulong m_flMaxFraction = 0x1c;
    public const ulong m_flScale = 0x20;
    public const ulong m_pHull = 0x28;
}

public static class CovMatrix3 {
    public const ulong m_vDiag = 0x0;
    public const ulong m_flXY = 0xc;
    public const ulong m_flXZ = 0x10;
    public const ulong m_flYZ = 0x14;
}

public static class Dop26_t {
    public const ulong m_flSupport = 0x0;
}

public static class FeAnimStrayRadius_t {
    public const ulong nNode = 0x0;
    public const ulong flMaxDist = 0x4;
    public const ulong flRelaxationFactor = 0x8;
}

public static class FeAxialEdgeBend_t {
    public const ulong te = 0x0;
    public const ulong tv = 0x4;
    public const ulong flDist = 0x8;
    public const ulong flWeight = 0xc;
    public const ulong nNode = 0x1c;
}

public static class FeBandBendLimit_t {
    public const ulong flDistMin = 0x0;
    public const ulong flDistMax = 0x4;
    public const ulong nNode = 0x8;
}

public static class FeBoxRigid_t {
    public const ulong tmFrame2 = 0x0;
    public const ulong nNode = 0x20;
    public const ulong nCollisionMask = 0x22;
    public const ulong vSize = 0x24;
    public const ulong nVertexMapIndex = 0x30;
    public const ulong nFlags = 0x32;
}

public static class FeBuildBoxRigid_t {
    public const ulong m_nPriority = 0x40;
    public const ulong m_nVertexMapHash = 0x44;
}

public static class FeBuildSphereRigid_t {
    public const ulong m_nPriority = 0x20;
    public const ulong m_nVertexMapHash = 0x24;
}

public static class FeBuildTaperedCapsuleRigid_t {
    public const ulong m_nPriority = 0x30;
    public const ulong m_nVertexMapHash = 0x34;
}

public static class FeCollisionPlane_t {
    public const ulong nCtrlParent = 0x0;
    public const ulong nChildNode = 0x2;
    public const ulong m_Plane = 0x4;
    public const ulong flStrength = 0x14;
}

public static class FeCtrlOffset_t {
    public const ulong vOffset = 0x0;
    public const ulong nCtrlParent = 0xc;
    public const ulong nCtrlChild = 0xe;
}

public static class FeCtrlOsOffset_t {
    public const ulong nCtrlParent = 0x0;
    public const ulong nCtrlChild = 0x2;
}

public static class FeCtrlSoftOffset_t {
    public const ulong nCtrlParent = 0x0;
    public const ulong nCtrlChild = 0x2;
    public const ulong vOffset = 0x4;
    public const ulong flAlpha = 0x10;
}

public static class FeEdgeDesc_t {
    public const ulong nEdge = 0x0;
    public const ulong nSide = 0x4;
    public const ulong nVirtElem = 0xc;
}

public static class FeEffectDesc_t {
    public const ulong sName = 0x0;
    public const ulong nNameHash = 0x8;
    public const ulong nType = 0xc;
    public const ulong m_Params = 0x10;
}

public static class FeFitInfluence_t {
    public const ulong nVertexNode = 0x0;
    public const ulong flWeight = 0x4;
    public const ulong nMatrixNode = 0x8;
}

public static class FeFitMatrix_t {
    public const ulong bone = 0x0;
    public const ulong vCenter = 0x20;
    public const ulong nEnd = 0x2c;
    public const ulong nNode = 0x2e;
    public const ulong nBeginDynamic = 0x30;
}

public static class FeFitWeight_t {
    public const ulong flWeight = 0x0;
    public const ulong nNode = 0x4;
    public const ulong nDummy = 0x6;
}

public static class FeFollowNode_t {
    public const ulong nParentNode = 0x0;
    public const ulong nChildNode = 0x2;
    public const ulong flWeight = 0x4;
}

public static class FeKelagerBend2_t {
    public const ulong flWeight = 0x0;
    public const ulong flHeight0 = 0xc;
    public const ulong nNode = 0x10;
    public const ulong nReserved = 0x16;
}

public static class FeMorphLayerDepr_t {
    public const ulong m_Name = 0x0;
    public const ulong m_nNameHash = 0x8;
    public const ulong m_Nodes = 0x10;
    public const ulong m_InitPos = 0x28;
    public const ulong m_Gravity = 0x40;
    public const ulong m_GoalStrength = 0x58;
    public const ulong m_GoalDamping = 0x70;
    public const ulong m_nFlags = 0x88;
}

public static class FeNodeBase_t {
    public const ulong nNode = 0x0;
    public const ulong nDummy = 0x2;
    public const ulong nNodeX0 = 0x8;
    public const ulong nNodeX1 = 0xa;
    public const ulong nNodeY0 = 0xc;
    public const ulong nNodeY1 = 0xe;
    public const ulong qAdjust = 0x10;
}

public static class FeNodeIntegrator_t {
    public const ulong flPointDamping = 0x0;
    public const ulong flAnimationForceAttraction = 0x4;
    public const ulong flAnimationVertexAttraction = 0x8;
    public const ulong flGravity = 0xc;
}

public static class FeNodeReverseOffset_t {
    public const ulong vOffset = 0x0;
    public const ulong nBoneCtrl = 0xc;
    public const ulong nTargetNode = 0xe;
}

public static class FeNodeWindBase_t {
    public const ulong nNodeX0 = 0x0;
    public const ulong nNodeX1 = 0x2;
    public const ulong nNodeY0 = 0x4;
    public const ulong nNodeY1 = 0x6;
}

public static class FeProxyVertexMap_t {
    public const ulong m_Name = 0x0;
    public const ulong m_flWeight = 0x8;
}

public static class FeQuad_t {
    public const ulong nNode = 0x0;
    public const ulong flSlack = 0x8;
    public const ulong vShape = 0xc;
}

public static class FeRigidColliderIndices_t {
    public const ulong m_nTaperedCapsuleRigidIndex = 0x0;
    public const ulong m_nSphereRigidIndex = 0x2;
    public const ulong m_nBoxRigidIndex = 0x4;
    public const ulong m_nCollisionPlaneIndex = 0x6;
}

public static class FeRodConstraint_t {
    public const ulong nNode = 0x0;
    public const ulong flMaxDist = 0x4;
    public const ulong flMinDist = 0x8;
    public const ulong flWeight0 = 0xc;
    public const ulong flRelaxationFactor = 0x10;
}

public static class FeSimdAnimStrayRadius_t {
    public const ulong nNode = 0x0;
    public const ulong flMaxDist = 0x10;
    public const ulong flRelaxationFactor = 0x20;
}

public static class FeSimdNodeBase_t {
    public const ulong nNode = 0x0;
    public const ulong nNodeX0 = 0x8;
    public const ulong nNodeX1 = 0x10;
    public const ulong nNodeY0 = 0x18;
    public const ulong nNodeY1 = 0x20;
    public const ulong nDummy = 0x28;
    public const ulong qAdjust = 0x30;
}

public static class FeSimdQuad_t {
    public const ulong nNode = 0x0;
    public const ulong f4Slack = 0x20;
    public const ulong vShape = 0x30;
    public const ulong f4Weights = 0xf0;
}

public static class FeSimdRodConstraint_t {
    public const ulong nNode = 0x0;
    public const ulong f4MaxDist = 0x10;
    public const ulong f4MinDist = 0x20;
    public const ulong f4Weight0 = 0x30;
    public const ulong f4RelaxationFactor = 0x40;
}

public static class FeSimdSpringIntegrator_t {
    public const ulong nNode = 0x0;
    public const ulong flSpringRestLength = 0x10;
    public const ulong flSpringConstant = 0x20;
    public const ulong flSpringDamping = 0x30;
    public const ulong flNodeWeight0 = 0x40;
}

public static class FeSimdTri_t {
    public const ulong nNode = 0x0;
    public const ulong w1 = 0x30;
    public const ulong w2 = 0x40;
    public const ulong v1x = 0x50;
    public const ulong v2 = 0x60;
}

public static class FeSoftParent_t {
    public const ulong nParent = 0x0;
    public const ulong flAlpha = 0x4;
}

public static class FeSourceEdge_t {
    public const ulong nNode = 0x0;
}

public static class FeSphereRigid_t {
    public const ulong vSphere = 0x0;
    public const ulong nNode = 0x10;
    public const ulong nCollisionMask = 0x12;
    public const ulong nVertexMapIndex = 0x14;
    public const ulong nFlags = 0x16;
}

public static class FeSpringIntegrator_t {
    public const ulong nNode = 0x0;
    public const ulong flSpringRestLength = 0x4;
    public const ulong flSpringConstant = 0x8;
    public const ulong flSpringDamping = 0xc;
    public const ulong flNodeWeight0 = 0x10;
}

public static class FeStiffHingeBuild_t {
    public const ulong flMaxAngle = 0x0;
    public const ulong flStrength = 0x4;
    public const ulong flMotionBias = 0x8;
    public const ulong nNode = 0x14;
}

public static class FeTaperedCapsuleRigid_t {
    public const ulong vSphere = 0x0;
    public const ulong nNode = 0x20;
    public const ulong nCollisionMask = 0x22;
    public const ulong nVertexMapIndex = 0x24;
    public const ulong nFlags = 0x26;
}

public static class FeTaperedCapsuleStretch_t {
    public const ulong nNode = 0x0;
    public const ulong nCollisionMask = 0x4;
    public const ulong nDummy = 0x6;
    public const ulong flRadius = 0x8;
}

public static class FeTreeChildren_t {
    public const ulong nChild = 0x0;
}

public static class FeTri_t {
    public const ulong nNode = 0x0;
    public const ulong w1 = 0x8;
    public const ulong w2 = 0xc;
    public const ulong v1x = 0x10;
    public const ulong v2 = 0x14;
}

public static class FeTwistConstraint_t {
    public const ulong nNodeOrient = 0x0;
    public const ulong nNodeEnd = 0x2;
    public const ulong flTwistRelax = 0x4;
    public const ulong flSwingRelax = 0x8;
}

public static class FeVertexMapBuild_t {
    public const ulong m_VertexMapName = 0x0;
    public const ulong m_nNameHash = 0x8;
    public const ulong m_Color = 0xc;
    public const ulong m_flVolumetricSolveStrength = 0x10;
    public const ulong m_nScaleSourceNode = 0x14;
    public const ulong m_Weights = 0x18;
}

public static class FeVertexMapDesc_t {
    public const ulong sName = 0x0;
    public const ulong nNameHash = 0x8;
    public const ulong nColor = 0xc;
    public const ulong nFlags = 0x10;
    public const ulong nVertexBase = 0x14;
    public const ulong nVertexCount = 0x16;
    public const ulong nMapOffset = 0x18;
    public const ulong nNodeListOffset = 0x1c;
    public const ulong vCenterOfMass = 0x20;
    public const ulong flVolumetricSolveStrength = 0x2c;
    public const ulong nScaleSourceNode = 0x30;
    public const ulong nNodeListCount = 0x32;
}

public static class FeWeightedNode_t {
    public const ulong nNode = 0x0;
    public const ulong nWeight = 0x2;
}

public static class FeWorldCollisionParams_t {
    public const ulong flWorldFriction = 0x0;
    public const ulong flGroundFriction = 0x4;
    public const ulong nListBegin = 0x8;
    public const ulong nListEnd = 0xa;
}

public static class FourCovMatrices3 {
    public const ulong m_vDiag = 0x0;
    public const ulong m_flXY = 0x30;
    public const ulong m_flXZ = 0x40;
    public const ulong m_flYZ = 0x50;
}

public static class FourVectors2D {
    public const ulong x = 0x0;
    public const ulong y = 0x10;
}

public static class OldFeEdge_t {
    public const ulong m_flK = 0x0;
    public const ulong invA = 0xc;
    public const ulong t = 0x10;
    public const ulong flThetaRelaxed = 0x14;
    public const ulong flThetaFactor = 0x18;
    public const ulong c01 = 0x1c;
    public const ulong c02 = 0x20;
    public const ulong c03 = 0x24;
    public const ulong c04 = 0x28;
    public const ulong flAxialModelDist = 0x2c;
    public const ulong flAxialModelWeights = 0x30;
    public const ulong m_nNode = 0x40;
}

public static class PhysFeModelDesc_t {
    public const ulong m_CtrlHash = 0x0;
    public const ulong m_CtrlName = 0x18;
    public const ulong m_nStaticNodeFlags = 0x30;
    public const ulong m_nDynamicNodeFlags = 0x34;
    public const ulong m_flLocalForce = 0x38;
    public const ulong m_flLocalRotation = 0x3c;
    public const ulong m_nNodeCount = 0x40;
    public const ulong m_nStaticNodes = 0x42;
    public const ulong m_nRotLockStaticNodes = 0x44;
    public const ulong m_nFirstPositionDrivenNode = 0x46;
    public const ulong m_nSimdTriCount1 = 0x48;
    public const ulong m_nSimdTriCount2 = 0x4a;
    public const ulong m_nSimdQuadCount1 = 0x4c;
    public const ulong m_nSimdQuadCount2 = 0x4e;
    public const ulong m_nQuadCount1 = 0x50;
    public const ulong m_nQuadCount2 = 0x52;
    public const ulong m_nTreeDepth = 0x54;
    public const ulong m_nNodeBaseJiggleboneDependsCount = 0x56;
    public const ulong m_nRopeCount = 0x58;
    public const ulong m_Ropes = 0x60;
    public const ulong m_NodeBases = 0x78;
    public const ulong m_SimdNodeBases = 0x90;
    public const ulong m_Quads = 0xa8;
    public const ulong m_SimdQuads = 0xc0;
    public const ulong m_SimdTris = 0xd8;
    public const ulong m_SimdRods = 0xf0;
    public const ulong m_InitPose = 0x108;
    public const ulong m_Rods = 0x120;
    public const ulong m_Twists = 0x138;
    public const ulong m_AxialEdges = 0x150;
    public const ulong m_NodeInvMasses = 0x168;
    public const ulong m_CtrlOffsets = 0x180;
    public const ulong m_CtrlOsOffsets = 0x198;
    public const ulong m_FollowNodes = 0x1b0;
    public const ulong m_CollisionPlanes = 0x1c8;
    public const ulong m_NodeIntegrator = 0x1e0;
    public const ulong m_SpringIntegrator = 0x1f8;
    public const ulong m_SimdSpringIntegrator = 0x210;
    public const ulong m_WorldCollisionParams = 0x228;
    public const ulong m_LegacyStretchForce = 0x240;
    public const ulong m_NodeCollisionRadii = 0x258;
    public const ulong m_DynNodeFriction = 0x270;
    public const ulong m_LocalRotation = 0x288;
    public const ulong m_LocalForce = 0x2a0;
    public const ulong m_TaperedCapsuleStretches = 0x2b8;
    public const ulong m_TaperedCapsuleRigids = 0x2d0;
    public const ulong m_SphereRigids = 0x2e8;
    public const ulong m_WorldCollisionNodes = 0x300;
    public const ulong m_TreeParents = 0x318;
    public const ulong m_TreeCollisionMasks = 0x330;
    public const ulong m_TreeChildren = 0x348;
    public const ulong m_FreeNodes = 0x360;
    public const ulong m_FitMatrices = 0x378;
    public const ulong m_FitWeights = 0x390;
    public const ulong m_ReverseOffsets = 0x3a8;
    public const ulong m_AnimStrayRadii = 0x3c0;
    public const ulong m_SimdAnimStrayRadii = 0x3d8;
    public const ulong m_KelagerBends = 0x3f0;
    public const ulong m_CtrlSoftOffsets = 0x408;
    public const ulong m_JiggleBones = 0x420;
    public const ulong m_SourceElems = 0x438;
    public const ulong m_GoalDampedSpringIntegrators = 0x450;
    public const ulong m_Tris = 0x468;
    public const ulong m_nTriCount1 = 0x480;
    public const ulong m_nTriCount2 = 0x482;
    public const ulong m_nReservedUint8 = 0x484;
    public const ulong m_nExtraPressureIterations = 0x485;
    public const ulong m_nExtraGoalIterations = 0x486;
    public const ulong m_nExtraIterations = 0x487;
    public const ulong m_BoxRigids = 0x488;
    public const ulong m_DynNodeVertexSet = 0x4a0;
    public const ulong m_VertexSetNames = 0x4b8;
    public const ulong m_RigidColliderPriorities = 0x4d0;
    public const ulong m_MorphLayers = 0x4e8;
    public const ulong m_MorphSetData = 0x500;
    public const ulong m_VertexMaps = 0x518;
    public const ulong m_VertexMapValues = 0x530;
    public const ulong m_Effects = 0x548;
    public const ulong m_LockToParent = 0x560;
    public const ulong m_LockToGoal = 0x578;
    public const ulong m_DynNodeWindBases = 0x590;
    public const ulong m_flInternalPressure = 0x5a8;
    public const ulong m_flDefaultTimeDilation = 0x5ac;
    public const ulong m_flWindage = 0x5b0;
    public const ulong m_flWindDrag = 0x5b4;
    public const ulong m_flDefaultSurfaceStretch = 0x5b8;
    public const ulong m_flDefaultThreadStretch = 0x5bc;
    public const ulong m_flDefaultGravityScale = 0x5c0;
    public const ulong m_flDefaultVelAirDrag = 0x5c4;
    public const ulong m_flDefaultExpAirDrag = 0x5c8;
    public const ulong m_flDefaultVelQuadAirDrag = 0x5cc;
    public const ulong m_flDefaultExpQuadAirDrag = 0x5d0;
    public const ulong m_flRodVelocitySmoothRate = 0x5d4;
    public const ulong m_flQuadVelocitySmoothRate = 0x5d8;
    public const ulong m_flAddWorldCollisionRadius = 0x5dc;
    public const ulong m_flDefaultVolumetricSolveAmount = 0x5e0;
    public const ulong m_nRodVelocitySmoothIterations = 0x5e4;
    public const ulong m_nQuadVelocitySmoothIterations = 0x5e6;
}

public static class RnBlendVertex_t {
    public const ulong m_nWeight0 = 0x0;
    public const ulong m_nIndex0 = 0x2;
    public const ulong m_nWeight1 = 0x4;
    public const ulong m_nIndex1 = 0x6;
    public const ulong m_nWeight2 = 0x8;
    public const ulong m_nIndex2 = 0xa;
    public const ulong m_nFlags = 0xc;
    public const ulong m_nTargetIndex = 0xe;
}

public static class RnBodyDesc_t {
    public const ulong m_sDebugName = 0x0;
    public const ulong m_vPosition = 0x8;
    public const ulong m_qOrientation = 0x14;
    public const ulong m_vLinearVelocity = 0x24;
    public const ulong m_vAngularVelocity = 0x30;
    public const ulong m_vLocalMassCenter = 0x3c;
    public const ulong m_LocalInertiaInv = 0x48;
    public const ulong m_flMassInv = 0x6c;
    public const ulong m_flGameMass = 0x70;
    public const ulong m_flInertiaScaleInv = 0x74;
    public const ulong m_flLinearDamping = 0x78;
    public const ulong m_flAngularDamping = 0x7c;
    public const ulong m_flLinearDrag = 0x80;
    public const ulong m_flAngularDrag = 0x84;
    public const ulong m_flLinearBuoyancyDrag = 0x88;
    public const ulong m_flAngularBuoyancyDrag = 0x8c;
    public const ulong m_vLastAwakeForceAccum = 0x90;
    public const ulong m_vLastAwakeTorqueAccum = 0x9c;
    public const ulong m_flBuoyancyFactor = 0xa8;
    public const ulong m_flGravityScale = 0xac;
    public const ulong m_flTimeScale = 0xb0;
    public const ulong m_nBodyType = 0xb4;
    public const ulong m_nGameIndex = 0xb8;
    public const ulong m_nGameFlags = 0xbc;
    public const ulong m_nMinVelocityIterations = 0xc0;
    public const ulong m_nMinPositionIterations = 0xc1;
    public const ulong m_nMassPriority = 0xc2;
    public const ulong m_bEnabled = 0xc3;
    public const ulong m_bSleeping = 0xc4;
    public const ulong m_bIsContinuousEnabled = 0xc5;
    public const ulong m_bDragEnabled = 0xc6;
    public const ulong m_bBuoyancyDragEnabled = 0xc7;
    public const ulong m_bGravityDisabled = 0xc8;
    public const ulong m_bSpeculativeEnabled = 0xc9;
    public const ulong m_bHasShadowController = 0xca;
}

public static class RnCapsuleDesc_t {
    public const ulong m_Capsule = 0x10;
}

public static class RnCapsule_t {
    public const ulong m_vCenter = 0x0;
    public const ulong m_flRadius = 0x18;
}

public static class RnFace_t {
    public const ulong m_nEdge = 0x0;
}

public static class RnHalfEdge_t {
    public const ulong m_nNext = 0x0;
    public const ulong m_nTwin = 0x1;
    public const ulong m_nOrigin = 0x2;
    public const ulong m_nFace = 0x3;
}

public static class RnHullDesc_t {
    public const ulong m_Hull = 0x10;
}

public static class RnHull_t {
    public const ulong m_vCentroid = 0x0;
    public const ulong m_flMaxAngularRadius = 0xc;
    public const ulong m_Bounds = 0x10;
    public const ulong m_vOrthographicAreas = 0x28;
    public const ulong m_MassProperties = 0x34;
    public const ulong m_flVolume = 0x64;
    public const ulong m_Vertices = 0x68;
    public const ulong m_Edges = 0x80;
    public const ulong m_Faces = 0x98;
    public const ulong m_Planes = 0xb0;
    public const ulong m_nFlags = 0xc8;
    public const ulong m_pRegionSVM = 0xd0;
}

public static class RnMeshDesc_t {
    public const ulong m_Mesh = 0x10;
}

public static class RnMesh_t {
    public const ulong m_vMin = 0x0;
    public const ulong m_vMax = 0xc;
    public const ulong m_Nodes = 0x18;
    public const ulong m_Vertices = 0x30;
    public const ulong m_Triangles = 0x48;
    public const ulong m_Wings = 0x60;
    public const ulong m_Materials = 0x78;
    public const ulong m_vOrthographicAreas = 0x90;
    public const ulong m_nFlags = 0x9c;
}

public static class RnNode_t {
    public const ulong m_vMin = 0x0;
    public const ulong m_nChildren = 0xc;
    public const ulong m_vMax = 0x10;
    public const ulong m_nTriangleOffset = 0x1c;
}

public static class RnPlane_t {
    public const ulong m_vNormal = 0x0;
    public const ulong m_flOffset = 0xc;
}

public static class RnShapeDesc_t {
    public const ulong m_nCollisionAttributeIndex = 0x0;
    public const ulong m_nSurfacePropertyIndex = 0x4;
    public const ulong m_UserFriendlyName = 0x8;
}

public static class RnSoftbodyCapsule_t {
    public const ulong m_vCenter = 0x0;
    public const ulong m_flRadius = 0x18;
    public const ulong m_nParticle = 0x1c;
}

public static class RnSoftbodyParticle_t {
    public const ulong m_flMassInv = 0x0;
}

public static class RnSoftbodySpring_t {
    public const ulong m_nParticle = 0x0;
    public const ulong m_flLength = 0x4;
}

public static class RnSphereDesc_t {
    public const ulong m_Sphere = 0x10;
}

public static class RnSphere_t {
    public const ulong m_vCenter = 0x0;
    public const ulong m_flRadius = 0xc;
}

public static class RnTriangle_t {
    public const ulong m_nIndex = 0x0;
}

public static class RnWing_t {
    public const ulong m_nIndex = 0x0;
}

public static class VertexPositionColor_t {
    public const ulong m_vPosition = 0x0;
}

public static class VertexPositionNormal_t {
    public const ulong m_vPosition = 0x0;
    public const ulong m_vNormal = 0xc;
}

public static class constraint_axislimit_t {
    public const ulong flMinRotation = 0x0;
    public const ulong flMaxRotation = 0x4;
    public const ulong flMotorTargetAngSpeed = 0x8;
    public const ulong flMotorMaxTorque = 0xc;
}

public static class constraint_breakableparams_t {
    public const ulong strength = 0x0;
    public const ulong forceLimit = 0x4;
    public const ulong torqueLimit = 0x8;
    public const ulong bodyMassScale = 0xc;
    public const ulong isActive = 0x14;
}

public static class constraint_hingeparams_t {
    public const ulong worldPosition = 0x0;
    public const ulong worldAxisDirection = 0xc;
    public const ulong hingeAxis = 0x18;
    public const ulong constraint = 0x28;
}

public static class vphysics_save_cphysicsbody_t {
    public const ulong m_nOldPointer = 0xd0;
}