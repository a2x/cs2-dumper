'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CFeIndexedJiggleBone:
    m_nNode = 0x0 # uint32_t
    m_nJiggleParent = 0x4 # uint32_t
    m_jiggleBone = 0x8 # CFeJiggleBone

class CFeJiggleBone:
    m_nFlags = 0x0 # uint32_t
    m_flLength = 0x4 # float
    m_flTipMass = 0x8 # float
    m_flYawStiffness = 0xC # float
    m_flYawDamping = 0x10 # float
    m_flPitchStiffness = 0x14 # float
    m_flPitchDamping = 0x18 # float
    m_flAlongStiffness = 0x1C # float
    m_flAlongDamping = 0x20 # float
    m_flAngleLimit = 0x24 # float
    m_flMinYaw = 0x28 # float
    m_flMaxYaw = 0x2C # float
    m_flYawFriction = 0x30 # float
    m_flYawBounce = 0x34 # float
    m_flMinPitch = 0x38 # float
    m_flMaxPitch = 0x3C # float
    m_flPitchFriction = 0x40 # float
    m_flPitchBounce = 0x44 # float
    m_flBaseMass = 0x48 # float
    m_flBaseStiffness = 0x4C # float
    m_flBaseDamping = 0x50 # float
    m_flBaseMinLeft = 0x54 # float
    m_flBaseMaxLeft = 0x58 # float
    m_flBaseLeftFriction = 0x5C # float
    m_flBaseMinUp = 0x60 # float
    m_flBaseMaxUp = 0x64 # float
    m_flBaseUpFriction = 0x68 # float
    m_flBaseMinForward = 0x6C # float
    m_flBaseMaxForward = 0x70 # float
    m_flBaseForwardFriction = 0x74 # float
    m_flRadius0 = 0x78 # float
    m_flRadius1 = 0x7C # float
    m_vPoint0 = 0x80 # Vector
    m_vPoint1 = 0x8C # Vector
    m_nCollisionMask = 0x98 # uint16_t

class CFeMorphLayer:
    m_Name = 0x0 # CUtlString
    m_nNameHash = 0x8 # uint32_t
    m_Nodes = 0x10 # CUtlVector<uint16_t>
    m_InitPos = 0x28 # CUtlVector<Vector>
    m_Gravity = 0x40 # CUtlVector<float>
    m_GoalStrength = 0x58 # CUtlVector<float>
    m_GoalDamping = 0x70 # CUtlVector<float>

class CFeNamedJiggleBone:
    m_strParentBone = 0x0 # CUtlString
    m_transform = 0x10 # CTransform
    m_nJiggleParent = 0x30 # uint32_t
    m_jiggleBone = 0x34 # CFeJiggleBone

class CFeVertexMapBuildArray:
    m_Array = 0x0 # CUtlVector<FeVertexMapBuild_t*>

class CRegionSVM:
    m_Planes = 0x0 # CUtlVector<RnPlane_t>
    m_Nodes = 0x18 # CUtlVector<uint32_t>

class CastSphereSATParams_t:
    m_vRayStart = 0x0 # Vector
    m_vRayDelta = 0xC # Vector
    m_flRadius = 0x18 # float
    m_flMaxFraction = 0x1C # float
    m_flScale = 0x20 # float
    m_pHull = 0x28 # RnHull_t*

class CovMatrix3:
    m_vDiag = 0x0 # Vector
    m_flXY = 0xC # float
    m_flXZ = 0x10 # float
    m_flYZ = 0x14 # float

class Dop26_t:
    m_flSupport = 0x0 # float[26]

class FeAnimStrayRadius_t:
    nNode = 0x0 # uint16_t[2]
    flMaxDist = 0x4 # float
    flRelaxationFactor = 0x8 # float

class FeAxialEdgeBend_t:
    te = 0x0 # float
    tv = 0x4 # float
    flDist = 0x8 # float
    flWeight = 0xC # float[4]
    nNode = 0x1C # uint16_t[6]

class FeBandBendLimit_t:
    flDistMin = 0x0 # float
    flDistMax = 0x4 # float
    nNode = 0x8 # uint16_t[6]

class FeBoxRigid_t:
    tmFrame2 = 0x0 # CTransform
    nNode = 0x20 # uint16_t
    nCollisionMask = 0x22 # uint16_t
    vSize = 0x24 # Vector
    nVertexMapIndex = 0x30 # uint16_t
    nFlags = 0x32 # uint16_t

class FeBuildBoxRigid_t: # FeBoxRigid_t
    m_nPriority = 0x40 # int32_t
    m_nVertexMapHash = 0x44 # uint32_t

class FeBuildSphereRigid_t: # FeSphereRigid_t
    m_nPriority = 0x20 # int32_t
    m_nVertexMapHash = 0x24 # uint32_t

class FeBuildTaperedCapsuleRigid_t: # FeTaperedCapsuleRigid_t
    m_nPriority = 0x30 # int32_t
    m_nVertexMapHash = 0x34 # uint32_t

class FeCollisionPlane_t:
    nCtrlParent = 0x0 # uint16_t
    nChildNode = 0x2 # uint16_t
    m_Plane = 0x4 # RnPlane_t
    flStrength = 0x14 # float

class FeCtrlOffset_t:
    vOffset = 0x0 # Vector
    nCtrlParent = 0xC # uint16_t
    nCtrlChild = 0xE # uint16_t

class FeCtrlOsOffset_t:
    nCtrlParent = 0x0 # uint16_t
    nCtrlChild = 0x2 # uint16_t

class FeCtrlSoftOffset_t:
    nCtrlParent = 0x0 # uint16_t
    nCtrlChild = 0x2 # uint16_t
    vOffset = 0x4 # Vector
    flAlpha = 0x10 # float

class FeEdgeDesc_t:
    nEdge = 0x0 # uint16_t[2]
    nSide = 0x4 # uint16_t[2][2]
    nVirtElem = 0xC # uint16_t[2]

class FeEffectDesc_t:
    sName = 0x0 # CUtlString
    nNameHash = 0x8 # uint32_t
    nType = 0xC # int32_t
    m_Params = 0x10 # KeyValues3

class FeFitInfluence_t:
    nVertexNode = 0x0 # uint32_t
    flWeight = 0x4 # float
    nMatrixNode = 0x8 # uint32_t

class FeFitMatrix_t:
    bone = 0x0 # CTransform
    vCenter = 0x20 # Vector
    nEnd = 0x2C # uint16_t
    nNode = 0x2E # uint16_t
    nBeginDynamic = 0x30 # uint16_t

class FeFitWeight_t:
    flWeight = 0x0 # float
    nNode = 0x4 # uint16_t
    nDummy = 0x6 # uint16_t

class FeFollowNode_t:
    nParentNode = 0x0 # uint16_t
    nChildNode = 0x2 # uint16_t
    flWeight = 0x4 # float

class FeKelagerBend2_t:
    flWeight = 0x0 # float[3]
    flHeight0 = 0xC # float
    nNode = 0x10 # uint16_t[3]
    nReserved = 0x16 # uint16_t

class FeMorphLayerDepr_t:
    m_Name = 0x0 # CUtlString
    m_nNameHash = 0x8 # uint32_t
    m_Nodes = 0x10 # CUtlVector<uint16_t>
    m_InitPos = 0x28 # CUtlVector<Vector>
    m_Gravity = 0x40 # CUtlVector<float>
    m_GoalStrength = 0x58 # CUtlVector<float>
    m_GoalDamping = 0x70 # CUtlVector<float>
    m_nFlags = 0x88 # uint32_t

class FeNodeBase_t:
    nNode = 0x0 # uint16_t
    nDummy = 0x2 # uint16_t[3]
    nNodeX0 = 0x8 # uint16_t
    nNodeX1 = 0xA # uint16_t
    nNodeY0 = 0xC # uint16_t
    nNodeY1 = 0xE # uint16_t
    qAdjust = 0x10 # QuaternionStorage

class FeNodeIntegrator_t:
    flPointDamping = 0x0 # float
    flAnimationForceAttraction = 0x4 # float
    flAnimationVertexAttraction = 0x8 # float
    flGravity = 0xC # float

class FeNodeReverseOffset_t:
    vOffset = 0x0 # Vector
    nBoneCtrl = 0xC # uint16_t
    nTargetNode = 0xE # uint16_t

class FeNodeWindBase_t:
    nNodeX0 = 0x0 # uint16_t
    nNodeX1 = 0x2 # uint16_t
    nNodeY0 = 0x4 # uint16_t
    nNodeY1 = 0x6 # uint16_t

class FeProxyVertexMap_t:
    m_Name = 0x0 # CUtlString
    m_flWeight = 0x8 # float

class FeQuad_t:
    nNode = 0x0 # uint16_t[4]
    flSlack = 0x8 # float
    vShape = 0xC # Vector4D[4]

class FeRigidColliderIndices_t:
    m_nTaperedCapsuleRigidIndex = 0x0 # uint16_t
    m_nSphereRigidIndex = 0x2 # uint16_t
    m_nBoxRigidIndex = 0x4 # uint16_t
    m_nCollisionPlaneIndex = 0x6 # uint16_t

class FeRodConstraint_t:
    nNode = 0x0 # uint16_t[2]
    flMaxDist = 0x4 # float
    flMinDist = 0x8 # float
    flWeight0 = 0xC # float
    flRelaxationFactor = 0x10 # float

class FeSimdAnimStrayRadius_t:
    nNode = 0x0 # uint16_t[4][2]
    flMaxDist = 0x10 # fltx4
    flRelaxationFactor = 0x20 # fltx4

class FeSimdNodeBase_t:
    nNode = 0x0 # uint16_t[4]
    nNodeX0 = 0x8 # uint16_t[4]
    nNodeX1 = 0x10 # uint16_t[4]
    nNodeY0 = 0x18 # uint16_t[4]
    nNodeY1 = 0x20 # uint16_t[4]
    nDummy = 0x28 # uint16_t[4]
    qAdjust = 0x30 # FourQuaternions

class FeSimdQuad_t:
    nNode = 0x0 # uint16_t[4][4]
    f4Slack = 0x20 # fltx4
    vShape = 0x30 # FourVectors[4]
    f4Weights = 0xF0 # fltx4[4]

class FeSimdRodConstraintAnim_t:
    nNode = 0x0 # uint16_t[4][2]
    f4Weight0 = 0x10 # fltx4
    f4RelaxationFactor = 0x20 # fltx4

class FeSimdRodConstraint_t:
    nNode = 0x0 # uint16_t[4][2]
    f4MaxDist = 0x10 # fltx4
    f4MinDist = 0x20 # fltx4
    f4Weight0 = 0x30 # fltx4
    f4RelaxationFactor = 0x40 # fltx4

class FeSimdSpringIntegrator_t:
    nNode = 0x0 # uint16_t[4][2]
    flSpringRestLength = 0x10 # fltx4
    flSpringConstant = 0x20 # fltx4
    flSpringDamping = 0x30 # fltx4
    flNodeWeight0 = 0x40 # fltx4

class FeSimdTri_t:
    nNode = 0x0 # uint32_t[4][3]
    w1 = 0x30 # fltx4
    w2 = 0x40 # fltx4
    v1x = 0x50 # fltx4
    v2 = 0x60 # FourVectors2D

class FeSoftParent_t:
    nParent = 0x0 # int32_t
    flAlpha = 0x4 # float

class FeSourceEdge_t:
    nNode = 0x0 # uint16_t[2]

class FeSphereRigid_t:
    vSphere = 0x0 # fltx4
    nNode = 0x10 # uint16_t
    nCollisionMask = 0x12 # uint16_t
    nVertexMapIndex = 0x14 # uint16_t
    nFlags = 0x16 # uint16_t

class FeSpringIntegrator_t:
    nNode = 0x0 # uint16_t[2]
    flSpringRestLength = 0x4 # float
    flSpringConstant = 0x8 # float
    flSpringDamping = 0xC # float
    flNodeWeight0 = 0x10 # float

class FeStiffHingeBuild_t:
    flMaxAngle = 0x0 # float
    flStrength = 0x4 # float
    flMotionBias = 0x8 # float[3]
    nNode = 0x14 # uint16_t[3]

class FeTaperedCapsuleRigid_t:
    vSphere = 0x0 # fltx4[2]
    nNode = 0x20 # uint16_t
    nCollisionMask = 0x22 # uint16_t
    nVertexMapIndex = 0x24 # uint16_t
    nFlags = 0x26 # uint16_t

class FeTaperedCapsuleStretch_t:
    nNode = 0x0 # uint16_t[2]
    nCollisionMask = 0x4 # uint16_t
    nDummy = 0x6 # uint16_t
    flRadius = 0x8 # float[2]

class FeTreeChildren_t:
    nChild = 0x0 # uint16_t[2]

class FeTri_t:
    nNode = 0x0 # uint16_t[3]
    w1 = 0x8 # float
    w2 = 0xC # float
    v1x = 0x10 # float
    v2 = 0x14 # Vector2D

class FeTwistConstraint_t:
    nNodeOrient = 0x0 # uint16_t
    nNodeEnd = 0x2 # uint16_t
    flTwistRelax = 0x4 # float
    flSwingRelax = 0x8 # float

class FeVertexMapBuild_t:
    m_VertexMapName = 0x0 # CUtlString
    m_nNameHash = 0x8 # uint32_t
    m_Color = 0xC # Color
    m_flVolumetricSolveStrength = 0x10 # float
    m_nScaleSourceNode = 0x14 # int32_t
    m_Weights = 0x18 # CUtlVector<float>

class FeVertexMapDesc_t:
    sName = 0x0 # CUtlString
    nNameHash = 0x8 # uint32_t
    nColor = 0xC # uint32_t
    nFlags = 0x10 # uint32_t
    nVertexBase = 0x14 # uint16_t
    nVertexCount = 0x16 # uint16_t
    nMapOffset = 0x18 # uint32_t
    nNodeListOffset = 0x1C # uint32_t
    vCenterOfMass = 0x20 # Vector
    flVolumetricSolveStrength = 0x2C # float
    nScaleSourceNode = 0x30 # int16_t
    nNodeListCount = 0x32 # uint16_t

class FeWeightedNode_t:
    nNode = 0x0 # uint16_t
    nWeight = 0x2 # uint16_t

class FeWorldCollisionParams_t:
    flWorldFriction = 0x0 # float
    flGroundFriction = 0x4 # float
    nListBegin = 0x8 # uint16_t
    nListEnd = 0xA # uint16_t

class FourCovMatrices3:
    m_vDiag = 0x0 # FourVectors
    m_flXY = 0x30 # fltx4
    m_flXZ = 0x40 # fltx4
    m_flYZ = 0x50 # fltx4

class FourVectors2D:
    x = 0x0 # fltx4
    y = 0x10 # fltx4

class IPhysicsPlayerController:

class OldFeEdge_t:
    m_flK = 0x0 # float[3]
    invA = 0xC # float
    t = 0x10 # float
    flThetaRelaxed = 0x14 # float
    flThetaFactor = 0x18 # float
    c01 = 0x1C # float
    c02 = 0x20 # float
    c03 = 0x24 # float
    c04 = 0x28 # float
    flAxialModelDist = 0x2C # float
    flAxialModelWeights = 0x30 # float[4]
    m_nNode = 0x40 # uint16_t[4]

class PhysFeModelDesc_t:
    m_CtrlHash = 0x0 # CUtlVector<uint32_t>
    m_CtrlName = 0x18 # CUtlVector<CUtlString>
    m_nStaticNodeFlags = 0x30 # uint32_t
    m_nDynamicNodeFlags = 0x34 # uint32_t
    m_flLocalForce = 0x38 # float
    m_flLocalRotation = 0x3C # float
    m_nNodeCount = 0x40 # uint16_t
    m_nStaticNodes = 0x42 # uint16_t
    m_nRotLockStaticNodes = 0x44 # uint16_t
    m_nFirstPositionDrivenNode = 0x46 # uint16_t
    m_nSimdTriCount1 = 0x48 # uint16_t
    m_nSimdTriCount2 = 0x4A # uint16_t
    m_nSimdQuadCount1 = 0x4C # uint16_t
    m_nSimdQuadCount2 = 0x4E # uint16_t
    m_nQuadCount1 = 0x50 # uint16_t
    m_nQuadCount2 = 0x52 # uint16_t
    m_nTreeDepth = 0x54 # uint16_t
    m_nNodeBaseJiggleboneDependsCount = 0x56 # uint16_t
    m_nRopeCount = 0x58 # uint16_t
    m_Ropes = 0x60 # CUtlVector<uint16_t>
    m_NodeBases = 0x78 # CUtlVector<FeNodeBase_t>
    m_SimdNodeBases = 0x90 # CUtlVector<FeSimdNodeBase_t>
    m_Quads = 0xA8 # CUtlVector<FeQuad_t>
    m_SimdQuads = 0xC0 # CUtlVector<FeSimdQuad_t>
    m_SimdTris = 0xD8 # CUtlVector<FeSimdTri_t>
    m_SimdRods = 0xF0 # CUtlVector<FeSimdRodConstraint_t>
    m_SimdRodsAnim = 0x108 # CUtlVector<FeSimdRodConstraintAnim_t>
    m_InitPose = 0x120 # CUtlVector<CTransform>
    m_Rods = 0x138 # CUtlVector<FeRodConstraint_t>
    m_Twists = 0x150 # CUtlVector<FeTwistConstraint_t>
    m_AxialEdges = 0x168 # CUtlVector<FeAxialEdgeBend_t>
    m_NodeInvMasses = 0x180 # CUtlVector<float>
    m_CtrlOffsets = 0x198 # CUtlVector<FeCtrlOffset_t>
    m_CtrlOsOffsets = 0x1B0 # CUtlVector<FeCtrlOsOffset_t>
    m_FollowNodes = 0x1C8 # CUtlVector<FeFollowNode_t>
    m_CollisionPlanes = 0x1E0 # CUtlVector<FeCollisionPlane_t>
    m_NodeIntegrator = 0x1F8 # CUtlVector<FeNodeIntegrator_t>
    m_SpringIntegrator = 0x210 # CUtlVector<FeSpringIntegrator_t>
    m_SimdSpringIntegrator = 0x228 # CUtlVector<FeSimdSpringIntegrator_t>
    m_WorldCollisionParams = 0x240 # CUtlVector<FeWorldCollisionParams_t>
    m_LegacyStretchForce = 0x258 # CUtlVector<float>
    m_NodeCollisionRadii = 0x270 # CUtlVector<float>
    m_DynNodeFriction = 0x288 # CUtlVector<float>
    m_LocalRotation = 0x2A0 # CUtlVector<float>
    m_LocalForce = 0x2B8 # CUtlVector<float>
    m_TaperedCapsuleStretches = 0x2D0 # CUtlVector<FeTaperedCapsuleStretch_t>
    m_TaperedCapsuleRigids = 0x2E8 # CUtlVector<FeTaperedCapsuleRigid_t>
    m_SphereRigids = 0x300 # CUtlVector<FeSphereRigid_t>
    m_WorldCollisionNodes = 0x318 # CUtlVector<uint16_t>
    m_TreeParents = 0x330 # CUtlVector<uint16_t>
    m_TreeCollisionMasks = 0x348 # CUtlVector<uint16_t>
    m_TreeChildren = 0x360 # CUtlVector<FeTreeChildren_t>
    m_FreeNodes = 0x378 # CUtlVector<uint16_t>
    m_FitMatrices = 0x390 # CUtlVector<FeFitMatrix_t>
    m_FitWeights = 0x3A8 # CUtlVector<FeFitWeight_t>
    m_ReverseOffsets = 0x3C0 # CUtlVector<FeNodeReverseOffset_t>
    m_AnimStrayRadii = 0x3D8 # CUtlVector<FeAnimStrayRadius_t>
    m_SimdAnimStrayRadii = 0x3F0 # CUtlVector<FeSimdAnimStrayRadius_t>
    m_KelagerBends = 0x408 # CUtlVector<FeKelagerBend2_t>
    m_CtrlSoftOffsets = 0x420 # CUtlVector<FeCtrlSoftOffset_t>
    m_JiggleBones = 0x438 # CUtlVector<CFeIndexedJiggleBone>
    m_SourceElems = 0x450 # CUtlVector<uint16_t>
    m_GoalDampedSpringIntegrators = 0x468 # CUtlVector<uint32_t>
    m_Tris = 0x480 # CUtlVector<FeTri_t>
    m_nTriCount1 = 0x498 # uint16_t
    m_nTriCount2 = 0x49A # uint16_t
    m_nReservedUint8 = 0x49C # uint8_t
    m_nExtraPressureIterations = 0x49D # uint8_t
    m_nExtraGoalIterations = 0x49E # uint8_t
    m_nExtraIterations = 0x49F # uint8_t
    m_BoxRigids = 0x4A0 # CUtlVector<FeBoxRigid_t>
    m_DynNodeVertexSet = 0x4B8 # CUtlVector<uint8_t>
    m_VertexSetNames = 0x4D0 # CUtlVector<uint32_t>
    m_RigidColliderPriorities = 0x4E8 # CUtlVector<FeRigidColliderIndices_t>
    m_MorphLayers = 0x500 # CUtlVector<FeMorphLayerDepr_t>
    m_MorphSetData = 0x518 # CUtlVector<uint8_t>
    m_VertexMaps = 0x530 # CUtlVector<FeVertexMapDesc_t>
    m_VertexMapValues = 0x548 # CUtlVector<uint8_t>
    m_Effects = 0x560 # CUtlVector<FeEffectDesc_t>
    m_LockToParent = 0x578 # CUtlVector<FeCtrlOffset_t>
    m_LockToGoal = 0x590 # CUtlVector<uint16_t>
    m_SkelParents = 0x5A8 # CUtlVector<int16_t>
    m_DynNodeWindBases = 0x5C0 # CUtlVector<FeNodeWindBase_t>
    m_flInternalPressure = 0x5D8 # float
    m_flDefaultTimeDilation = 0x5DC # float
    m_flWindage = 0x5E0 # float
    m_flWindDrag = 0x5E4 # float
    m_flDefaultSurfaceStretch = 0x5E8 # float
    m_flDefaultThreadStretch = 0x5EC # float
    m_flDefaultGravityScale = 0x5F0 # float
    m_flDefaultVelAirDrag = 0x5F4 # float
    m_flDefaultExpAirDrag = 0x5F8 # float
    m_flDefaultVelQuadAirDrag = 0x5FC # float
    m_flDefaultExpQuadAirDrag = 0x600 # float
    m_flRodVelocitySmoothRate = 0x604 # float
    m_flQuadVelocitySmoothRate = 0x608 # float
    m_flAddWorldCollisionRadius = 0x60C # float
    m_flDefaultVolumetricSolveAmount = 0x610 # float
    m_nRodVelocitySmoothIterations = 0x614 # uint16_t
    m_nQuadVelocitySmoothIterations = 0x616 # uint16_t

class RnBlendVertex_t:
    m_nWeight0 = 0x0 # uint16_t
    m_nIndex0 = 0x2 # uint16_t
    m_nWeight1 = 0x4 # uint16_t
    m_nIndex1 = 0x6 # uint16_t
    m_nWeight2 = 0x8 # uint16_t
    m_nIndex2 = 0xA # uint16_t
    m_nFlags = 0xC # uint16_t
    m_nTargetIndex = 0xE # uint16_t

class RnBodyDesc_t:
    m_sDebugName = 0x0 # CUtlString
    m_vPosition = 0x8 # Vector
    m_qOrientation = 0x14 # QuaternionStorage
    m_vLinearVelocity = 0x24 # Vector
    m_vAngularVelocity = 0x30 # Vector
    m_vLocalMassCenter = 0x3C # Vector
    m_LocalInertiaInv = 0x48 # Vector[3]
    m_flMassInv = 0x6C # float
    m_flGameMass = 0x70 # float
    m_flInertiaScaleInv = 0x74 # float
    m_flLinearDamping = 0x78 # float
    m_flAngularDamping = 0x7C # float
    m_flLinearDrag = 0x80 # float
    m_flAngularDrag = 0x84 # float
    m_flLinearBuoyancyDrag = 0x88 # float
    m_flAngularBuoyancyDrag = 0x8C # float
    m_vLastAwakeForceAccum = 0x90 # Vector
    m_vLastAwakeTorqueAccum = 0x9C # Vector
    m_flBuoyancyFactor = 0xA8 # float
    m_flGravityScale = 0xAC # float
    m_flTimeScale = 0xB0 # float
    m_nBodyType = 0xB4 # int32_t
    m_nGameIndex = 0xB8 # uint32_t
    m_nGameFlags = 0xBC # uint32_t
    m_nMinVelocityIterations = 0xC0 # int8_t
    m_nMinPositionIterations = 0xC1 # int8_t
    m_nMassPriority = 0xC2 # int8_t
    m_bEnabled = 0xC3 # bool
    m_bSleeping = 0xC4 # bool
    m_bIsContinuousEnabled = 0xC5 # bool
    m_bDragEnabled = 0xC6 # bool
    m_bBuoyancyDragEnabled = 0xC7 # bool
    m_bGravityDisabled = 0xC8 # bool
    m_bSpeculativeEnabled = 0xC9 # bool
    m_bHasShadowController = 0xCA # bool

class RnCapsuleDesc_t: # RnShapeDesc_t
    m_Capsule = 0x10 # RnCapsule_t

class RnCapsule_t:
    m_vCenter = 0x0 # Vector[2]
    m_flRadius = 0x18 # float

class RnFace_t:
    m_nEdge = 0x0 # uint8_t

class RnHalfEdge_t:
    m_nNext = 0x0 # uint8_t
    m_nTwin = 0x1 # uint8_t
    m_nOrigin = 0x2 # uint8_t
    m_nFace = 0x3 # uint8_t

class RnHullDesc_t: # RnShapeDesc_t
    m_Hull = 0x10 # RnHull_t

class RnHull_t:
    m_vCentroid = 0x0 # Vector
    m_flMaxAngularRadius = 0xC # float
    m_Bounds = 0x10 # AABB_t
    m_vOrthographicAreas = 0x28 # Vector
    m_MassProperties = 0x34 # matrix3x4_t
    m_flVolume = 0x64 # float
    m_flSurfaceArea = 0x68 # float
    m_Vertices = 0x70 # CUtlVector<RnVertex_t>
    m_VertexPositions = 0x88 # CUtlVector<Vector>
    m_Edges = 0xA0 # CUtlVector<RnHalfEdge_t>
    m_Faces = 0xB8 # CUtlVector<RnFace_t>
    m_FacePlanes = 0xD0 # CUtlVector<RnPlane_t>
    m_nFlags = 0xE8 # uint32_t
    m_pRegionSVM = 0xF0 # CRegionSVM*

class RnMeshDesc_t: # RnShapeDesc_t
    m_Mesh = 0x10 # RnMesh_t

class RnMesh_t:
    m_vMin = 0x0 # Vector
    m_vMax = 0xC # Vector
    m_Nodes = 0x18 # CUtlVector<RnNode_t>
    m_Vertices = 0x30 # CUtlVectorSIMDPaddedVector
    m_Triangles = 0x48 # CUtlVector<RnTriangle_t>
    m_Wings = 0x60 # CUtlVector<RnWing_t>
    m_Materials = 0x78 # CUtlVector<uint8_t>
    m_vOrthographicAreas = 0x90 # Vector
    m_nFlags = 0x9C # uint32_t
    m_nDebugFlags = 0xA0 # uint32_t

class RnNode_t:
    m_vMin = 0x0 # Vector
    m_nChildren = 0xC # uint32_t
    m_vMax = 0x10 # Vector
    m_nTriangleOffset = 0x1C # uint32_t

class RnPlane_t:
    m_vNormal = 0x0 # Vector
    m_flOffset = 0xC # float

class RnShapeDesc_t:
    m_nCollisionAttributeIndex = 0x0 # uint32_t
    m_nSurfacePropertyIndex = 0x4 # uint32_t
    m_UserFriendlyName = 0x8 # CUtlString

class RnSoftbodyCapsule_t:
    m_vCenter = 0x0 # Vector[2]
    m_flRadius = 0x18 # float
    m_nParticle = 0x1C # uint16_t[2]

class RnSoftbodyParticle_t:
    m_flMassInv = 0x0 # float

class RnSoftbodySpring_t:
    m_nParticle = 0x0 # uint16_t[2]
    m_flLength = 0x4 # float

class RnSphereDesc_t: # RnShapeDesc_t
    m_Sphere = 0x10 # SphereBase_t<float>

class RnTriangle_t:
    m_nIndex = 0x0 # int32_t[3]

class RnVertex_t:
    m_nEdge = 0x0 # uint8_t

class RnWing_t:
    m_nIndex = 0x0 # int32_t[3]

class VertexPositionColor_t:
    m_vPosition = 0x0 # Vector

class VertexPositionNormal_t:
    m_vPosition = 0x0 # Vector
    m_vNormal = 0xC # Vector

class constraint_axislimit_t:
    flMinRotation = 0x0 # float
    flMaxRotation = 0x4 # float
    flMotorTargetAngSpeed = 0x8 # float
    flMotorMaxTorque = 0xC # float

class constraint_breakableparams_t:
    strength = 0x0 # float
    forceLimit = 0x4 # float
    torqueLimit = 0x8 # float
    bodyMassScale = 0xC # float[2]
    isActive = 0x14 # bool

class constraint_hingeparams_t:
    worldPosition = 0x0 # Vector
    worldAxisDirection = 0xC # Vector
    hingeAxis = 0x18 # constraint_axislimit_t
    constraint = 0x28 # constraint_breakableparams_t

class vphysics_save_cphysicsbody_t: # RnBodyDesc_t
    m_nOldPointer = 0xD0 # uint64_t
