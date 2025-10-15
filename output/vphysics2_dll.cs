// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

namespace CS2Dumper.Schemas {
    // Module: vphysics2.dll
    // Class count: 97
    // Enum count: 3
    public static class Vphysics2Dll {
        // Alignment: 4
        // Member count: 3
        public enum JointMotion_t : uint {
            JOINT_MOTION_FREE = 0x0,
            JOINT_MOTION_LOCKED = 0x1,
            JOINT_MOTION_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum JointAxis_t : uint {
            JOINT_AXIS_X = 0x0,
            JOINT_AXIS_Y = 0x1,
            JOINT_AXIS_Z = 0x2,
            JOINT_AXIS_COUNT = 0x3
        }
        // Alignment: 1
        // Member count: 3
        public enum DynamicContinuousContactBehavior_t : byte {
            DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
            DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
            DYNAMIC_CONTINUOUS_NEVER = 0x2
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSphereDesc_t {
            public const nint m_Sphere = 0x18; // SphereBase_t<float32>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyParticle_t {
            public const nint m_flMassInv = 0x0; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHullDesc_t {
            public const nint m_Hull = 0x18; // RnHull_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsuleDesc_t {
            public const nint m_Capsule = 0x18; // RnCapsule_t
        }
        // Parent: None
        // Field count: 108
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysFeModelDesc_t {
            public const nint m_CtrlHash = 0x0; // CUtlVector<uint32>
            public const nint m_CtrlName = 0x18; // CUtlVector<CUtlString>
            public const nint m_nStaticNodeFlags = 0x30; // uint32
            public const nint m_nDynamicNodeFlags = 0x34; // uint32
            public const nint m_flLocalForce = 0x38; // float32
            public const nint m_flLocalRotation = 0x3C; // float32
            public const nint m_nNodeCount = 0x40; // uint16
            public const nint m_nStaticNodes = 0x42; // uint16
            public const nint m_nRotLockStaticNodes = 0x44; // uint16
            public const nint m_nFirstPositionDrivenNode = 0x46; // uint16
            public const nint m_nSimdTriCount1 = 0x48; // uint16
            public const nint m_nSimdTriCount2 = 0x4A; // uint16
            public const nint m_nSimdQuadCount1 = 0x4C; // uint16
            public const nint m_nSimdQuadCount2 = 0x4E; // uint16
            public const nint m_nQuadCount1 = 0x50; // uint16
            public const nint m_nQuadCount2 = 0x52; // uint16
            public const nint m_nTreeDepth = 0x54; // uint16
            public const nint m_nNodeBaseJiggleboneDependsCount = 0x56; // uint16
            public const nint m_nRopeCount = 0x58; // uint16
            public const nint m_Ropes = 0x60; // CUtlVector<uint16>
            public const nint m_NodeBases = 0x78; // CUtlVector<FeNodeBase_t>
            public const nint m_SimdNodeBases = 0x90; // CUtlVector<FeSimdNodeBase_t>
            public const nint m_Quads = 0xA8; // CUtlVector<FeQuad_t>
            public const nint m_SimdQuads = 0xC0; // CUtlVector<FeSimdQuad_t>
            public const nint m_SimdTris = 0xD8; // CUtlVector<FeSimdTri_t>
            public const nint m_SimdRods = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
            public const nint m_SimdRodsAnim = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
            public const nint m_InitPose = 0x120; // CUtlVector<CTransform>
            public const nint m_Rods = 0x138; // CUtlVector<FeRodConstraint_t>
            public const nint m_Twists = 0x150; // CUtlVector<FeTwistConstraint_t>
            public const nint m_HingeLimits = 0x168; // CUtlVector<FeHingeLimit_t>
            public const nint m_AntiTunnelBytecode = 0x180; // CUtlVector<uint32>
            public const nint m_DynKinLinks = 0x198; // CUtlVector<FeDynKinLink_t>
            public const nint m_AntiTunnelProbes = 0x1B0; // CUtlVector<FeAntiTunnelProbe_t>
            public const nint m_AntiTunnelTargetNodes = 0x1C8; // CUtlVector<uint16>
            public const nint m_AxialEdges = 0x1E0; // CUtlVector<FeAxialEdgeBend_t>
            public const nint m_NodeInvMasses = 0x1F8; // CUtlVector<float32>
            public const nint m_CtrlOffsets = 0x210; // CUtlVector<FeCtrlOffset_t>
            public const nint m_CtrlOsOffsets = 0x228; // CUtlVector<FeCtrlOsOffset_t>
            public const nint m_FollowNodes = 0x240; // CUtlVector<FeFollowNode_t>
            public const nint m_CollisionPlanes = 0x258; // CUtlVector<FeCollisionPlane_t>
            public const nint m_NodeIntegrator = 0x270; // CUtlVector<FeNodeIntegrator_t>
            public const nint m_SpringIntegrator = 0x288; // CUtlVector<FeSpringIntegrator_t>
            public const nint m_SimdSpringIntegrator = 0x2A0; // CUtlVector<FeSimdSpringIntegrator_t>
            public const nint m_WorldCollisionParams = 0x2B8; // CUtlVector<FeWorldCollisionParams_t>
            public const nint m_LegacyStretchForce = 0x2D0; // CUtlVector<float32>
            public const nint m_NodeCollisionRadii = 0x2E8; // CUtlVector<float32>
            public const nint m_DynNodeFriction = 0x300; // CUtlVector<float32>
            public const nint m_LocalRotation = 0x318; // CUtlVector<float32>
            public const nint m_LocalForce = 0x330; // CUtlVector<float32>
            public const nint m_TaperedCapsuleStretches = 0x348; // CUtlVector<FeTaperedCapsuleStretch_t>
            public const nint m_TaperedCapsuleRigids = 0x360; // CUtlVector<FeTaperedCapsuleRigid_t>
            public const nint m_SphereRigids = 0x378; // CUtlVector<FeSphereRigid_t>
            public const nint m_WorldCollisionNodes = 0x390; // CUtlVector<uint16>
            public const nint m_TreeParents = 0x3A8; // CUtlVector<uint16>
            public const nint m_TreeCollisionMasks = 0x3C0; // CUtlVector<uint16>
            public const nint m_TreeChildren = 0x3D8; // CUtlVector<FeTreeChildren_t>
            public const nint m_FreeNodes = 0x3F0; // CUtlVector<uint16>
            public const nint m_FitMatrices = 0x408; // CUtlVector<FeFitMatrix_t>
            public const nint m_FitWeights = 0x420; // CUtlVector<FeFitWeight_t>
            public const nint m_ReverseOffsets = 0x438; // CUtlVector<FeNodeReverseOffset_t>
            public const nint m_AnimStrayRadii = 0x450; // CUtlVector<FeAnimStrayRadius_t>
            public const nint m_SimdAnimStrayRadii = 0x468; // CUtlVector<FeSimdAnimStrayRadius_t>
            public const nint m_KelagerBends = 0x480; // CUtlVector<FeKelagerBend2_t>
            public const nint m_CtrlSoftOffsets = 0x498; // CUtlVector<FeCtrlSoftOffset_t>
            public const nint m_JiggleBones = 0x4B0; // CUtlVector<CFeIndexedJiggleBone>
            public const nint m_SourceElems = 0x4C8; // CUtlVector<uint16>
            public const nint m_GoalDampedSpringIntegrators = 0x4E0; // CUtlVector<uint32>
            public const nint m_Tris = 0x4F8; // CUtlVector<FeTri_t>
            public const nint m_nTriCount1 = 0x510; // uint16
            public const nint m_nTriCount2 = 0x512; // uint16
            public const nint m_nReservedUint8 = 0x514; // uint8
            public const nint m_nExtraPressureIterations = 0x515; // uint8
            public const nint m_nExtraGoalIterations = 0x516; // uint8
            public const nint m_nExtraIterations = 0x517; // uint8
            public const nint m_SDFRigids = 0x518; // CUtlVector<FeSDFRigid_t>
            public const nint m_BoxRigids = 0x530; // CUtlVector<FeBoxRigid_t>
            public const nint m_DynNodeVertexSet = 0x548; // CUtlVector<uint8>
            public const nint m_VertexSetNames = 0x560; // CUtlVector<uint32>
            public const nint m_RigidColliderPriorities = 0x578; // CUtlVector<FeRigidColliderIndices_t>
            public const nint m_MorphLayers = 0x590; // CUtlVector<FeMorphLayerDepr_t>
            public const nint m_MorphSetData = 0x5A8; // CUtlVector<uint8>
            public const nint m_VertexMaps = 0x5C0; // CUtlVector<FeVertexMapDesc_t>
            public const nint m_VertexMapValues = 0x5D8; // CUtlVector<uint8>
            public const nint m_Effects = 0x5F0; // CUtlVector<FeEffectDesc_t>
            public const nint m_LockToParent = 0x608; // CUtlVector<FeCtrlOffset_t>
            public const nint m_LockToGoal = 0x620; // CUtlVector<uint16>
            public const nint m_SkelParents = 0x638; // CUtlVector<int16>
            public const nint m_DynNodeWindBases = 0x650; // CUtlVector<FeNodeWindBase_t>
            public const nint m_flInternalPressure = 0x668; // float32
            public const nint m_flDefaultTimeDilation = 0x66C; // float32
            public const nint m_flWindage = 0x670; // float32
            public const nint m_flWindDrag = 0x674; // float32
            public const nint m_flDefaultSurfaceStretch = 0x678; // float32
            public const nint m_flDefaultThreadStretch = 0x67C; // float32
            public const nint m_flDefaultGravityScale = 0x680; // float32
            public const nint m_flDefaultVelAirDrag = 0x684; // float32
            public const nint m_flDefaultExpAirDrag = 0x688; // float32
            public const nint m_flDefaultVelQuadAirDrag = 0x68C; // float32
            public const nint m_flDefaultExpQuadAirDrag = 0x690; // float32
            public const nint m_flRodVelocitySmoothRate = 0x694; // float32
            public const nint m_flQuadVelocitySmoothRate = 0x698; // float32
            public const nint m_flAddWorldCollisionRadius = 0x69C; // float32
            public const nint m_flDefaultVolumetricSolveAmount = 0x6A0; // float32
            public const nint m_flMotionSmoothCDT = 0x6A4; // float32
            public const nint m_flLocalDrag1 = 0x6A8; // float32
            public const nint m_nRodVelocitySmoothIterations = 0x6AC; // uint16
            public const nint m_nQuadVelocitySmoothIterations = 0x6AE; // uint16
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMeshDesc_t {
            public const nint m_Mesh = 0x18; // RnMesh_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodySpring_t {
            public const nint m_nParticle = 0x0; // uint16[2]
            public const nint m_flLength = 0x4; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyCapsule_t {
            public const nint m_vCenter = 0x0; // Vector[2]
            public const nint m_flRadius = 0x18; // float32
            public const nint m_nParticle = 0x1C; // uint16[2]
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class vphysics_save_cphysicsbody_t {
            public const nint m_nOldPointer = 0xE0; // uint64
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildBoxRigid_t {
            public const nint m_nPriority = 0x40; // int32
            public const nint m_nVertexMapHash = 0x44; // uint32
            public const nint m_nAntitunnelGroupBits = 0x48; // uint32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeIndexedJiggleBone {
            public const nint m_nNode = 0x0; // uint32
            public const nint m_nJiggleParent = 0x4; // uint32
            public const nint m_jiggleBone = 0x8; // CFeJiggleBone
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBandBendLimit_t {
            public const nint flDistMin = 0x0; // float32
            public const nint flDistMax = 0x4; // float32
            public const nint nNode = 0x8; // uint16[6]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleStretch_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint nCollisionMask = 0x4; // uint16
            public const nint nDummy = 0x6; // uint16
            public const nint flRadius = 0x8; // float32[2]
        }
        // Parent: None
        // Field count: 4
        public static class constraint_axislimit_t {
            public const nint flMinRotation = 0x0; // float32
            public const nint flMaxRotation = 0x4; // float32
            public const nint flMotorTargetAngSpeed = 0x8; // float32
            public const nint flMotorMaxTorque = 0xC; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraintAnim_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint f4Weight0 = 0x10; // fltx4
            public const nint f4RelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraint_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint f4MaxDist = 0x10; // fltx4
            public const nint f4MinDist = 0x20; // fltx4
            public const nint f4Weight0 = 0x30; // fltx4
            public const nint f4RelaxationFactor = 0x40; // fltx4
        }
        // Parent: None
        // Field count: 4
        public static class constraint_hingeparams_t {
            public const nint worldPosition = 0x0; // Vector
            public const nint worldAxisDirection = 0xC; // Vector
            public const nint hingeAxis = 0x18; // constraint_axislimit_t
            public const nint constraint = 0x28; // constraint_breakableparams_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSphereRigid_t {
            public const nint m_nPriority = 0x20; // int32
            public const nint m_nVertexMapHash = 0x24; // uint32
            public const nint m_nAntitunnelGroupBits = 0x28; // uint32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdAnimStrayRadius_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint flMaxDist = 0x10; // fltx4
            public const nint flRelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnTriangle_t {
            public const nint m_nIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeProxyVertexMap_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_flWeight = 0x8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeIntegrator_t {
            public const nint flPointDamping = 0x0; // float32
            public const nint flAnimationForceAttraction = 0x4; // float32
            public const nint flAnimationVertexAttraction = 0x8; // float32
            public const nint flGravity = 0xC; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsule_t {
            public const nint m_vCenter = 0x0; // Vector[2]
            public const nint m_flRadius = 0x18; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeNamedJiggleBone {
            public const nint m_strParentBone = 0x0; // CUtlString
            public const nint m_transform = 0x10; // CTransform
            public const nint m_nJiggleParent = 0x30; // uint32
            public const nint m_jiggleBone = 0x34; // CFeJiggleBone
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAntiTunnelProbeBuild_t {
            public const nint flWeight = 0x0; // float32
            public const nint flActivationDistance = 0x4; // float32
            public const nint flBias = 0x8; // float32
            public const nint flCurvature = 0xC; // float32
            public const nint nFlags = 0x10; // uint32
            public const nint nProbeNode = 0x14; // uint16
            public const nint targetNodes = 0x18; // CUtlVector<uint16>
        }
        // Parent: None
        // Field count: 37
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBodyDesc_t {
            public const nint m_sDebugName = 0x0; // CUtlString
            public const nint m_vPosition = 0x8; // Vector
            public const nint m_qOrientation = 0x14; // QuaternionStorage
            public const nint m_vLinearVelocity = 0x24; // Vector
            public const nint m_vAngularVelocity = 0x30; // Vector
            public const nint m_vLocalMassCenter = 0x3C; // Vector
            public const nint m_LocalInertiaInv = 0x48; // Vector[3]
            public const nint m_flMassInv = 0x6C; // float32
            public const nint m_flGameMass = 0x70; // float32
            public const nint m_flMassScaleInv = 0x74; // float32
            public const nint m_flInertiaScaleInv = 0x78; // float32
            public const nint m_flLinearDamping = 0x7C; // float32
            public const nint m_flAngularDamping = 0x80; // float32
            public const nint m_flLinearDrag = 0x84; // float32
            public const nint m_flAngularDrag = 0x88; // float32
            public const nint m_flLinearBuoyancyDrag = 0x8C; // float32
            public const nint m_flAngularBuoyancyDrag = 0x90; // float32
            public const nint m_vLastAwakeForceAccum = 0x94; // Vector
            public const nint m_vLastAwakeTorqueAccum = 0xA0; // Vector
            public const nint m_flBuoyancyFactor = 0xAC; // float32
            public const nint m_flGravityScale = 0xB0; // float32
            public const nint m_flTimeScale = 0xB4; // float32
            public const nint m_nBodyType = 0xB8; // int32
            public const nint m_nGameIndex = 0xBC; // uint32
            public const nint m_nGameFlags = 0xC0; // uint32
            public const nint m_nMinVelocityIterations = 0xC4; // int8
            public const nint m_nMinPositionIterations = 0xC5; // int8
            public const nint m_nMassPriority = 0xC6; // int8
            public const nint m_bEnabled = 0xC7; // bool
            public const nint m_bSleeping = 0xC8; // bool
            public const nint m_bIsContinuousEnabled = 0xC9; // bool
            public const nint m_bDragEnabled = 0xCA; // bool
            public const nint m_bBuoyancyDragEnabled = 0xCB; // bool
            public const nint m_vGravity = 0xCC; // Vector
            public const nint m_bSpeculativeEnabled = 0xD8; // bool
            public const nint m_bHasShadowController = 0xD9; // bool
            public const nint m_nDynamicContinuousContactBehavior = 0xDA; // DynamicContinuousContactBehavior_t
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OldFeEdge_t {
            public const nint m_flK = 0x0; // float32[3]
            public const nint invA = 0xC; // float32
            public const nint t = 0x10; // float32
            public const nint flThetaRelaxed = 0x14; // float32
            public const nint flThetaFactor = 0x18; // float32
            public const nint c01 = 0x1C; // float32
            public const nint c02 = 0x20; // float32
            public const nint c03 = 0x24; // float32
            public const nint c04 = 0x28; // float32
            public const nint flAxialModelDist = 0x2C; // float32
            public const nint flAxialModelWeights = 0x30; // float32[4]
            public const nint m_nNode = 0x40; // uint16[4]
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFollowNode_t {
            public const nint nParentNode = 0x0; // uint16
            public const nint nChildNode = 0x2; // uint16
            public const nint flWeight = 0x4; // float32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMesh_t {
            public const nint m_vMin = 0x0; // Vector
            public const nint m_vMax = 0xC; // Vector
            public const nint m_Nodes = 0x18; // CUtlVector<RnNode_t>
            public const nint m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
            public const nint m_Triangles = 0x48; // CUtlVector<RnTriangle_t>
            public const nint m_Wings = 0x60; // CUtlVector<RnWing_t>
            public const nint m_TriangleEdgeFlags = 0x78; // CUtlVector<uint8>
            public const nint m_Materials = 0x90; // CUtlVector<uint8>
            public const nint m_vOrthographicAreas = 0xA8; // Vector
            public const nint m_nFlags = 0xB4; // uint32
            public const nint m_nDebugFlags = 0xB8; // uint32
        }
        // Parent: None
        // Field count: 2
        public static class VertexPositionNormal_t {
            public const nint m_vPosition = 0x0; // Vector
            public const nint m_vNormal = 0xC; // Vector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSDFRigid_t {
            public const nint m_nPriority = 0x50; // int32
            public const nint m_nVertexMapHash = 0x54; // uint32
            public const nint m_nAntitunnelGroupBits = 0x58; // uint32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBlendVertex_t {
            public const nint m_nWeight0 = 0x0; // uint16
            public const nint m_nIndex0 = 0x2; // uint16
            public const nint m_nWeight1 = 0x4; // uint16
            public const nint m_nIndex1 = 0x6; // uint16
            public const nint m_nWeight2 = 0x8; // uint16
            public const nint m_nIndex2 = 0xA; // uint16
            public const nint m_nFlags = 0xC; // uint16
            public const nint m_nTargetIndex = 0xE; // uint16
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeMorphLayer {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_Nodes = 0x10; // CUtlVector<uint16>
            public const nint m_InitPos = 0x28; // CUtlVector<Vector>
            public const nint m_Gravity = 0x40; // CUtlVector<float32>
            public const nint m_GoalStrength = 0x58; // CUtlVector<float32>
            public const nint m_GoalDamping = 0x70; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlSoftOffset_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nCtrlChild = 0x2; // uint16
            public const nint vOffset = 0x4; // Vector
            public const nint flAlpha = 0x10; // float32
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapDesc_t {
            public const nint sName = 0x0; // CUtlString
            public const nint nNameHash = 0x8; // uint32
            public const nint nColor = 0xC; // uint32
            public const nint nFlags = 0x10; // uint32
            public const nint nVertexBase = 0x14; // uint16
            public const nint nVertexCount = 0x16; // uint16
            public const nint nMapOffset = 0x18; // uint32
            public const nint nNodeListOffset = 0x1C; // uint32
            public const nint vCenterOfMass = 0x20; // Vector
            public const nint flVolumetricSolveStrength = 0x2C; // float32
            public const nint nScaleSourceNode = 0x30; // int16
            public const nint nNodeListCount = 0x32; // uint16
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleRigid_t {
            public const nint vSphere = 0x0; // fltx4[2]
            public const nint nNode = 0x20; // uint16
            public const nint nCollisionMask = 0x22; // uint16
            public const nint nVertexMapIndex = 0x24; // uint16
            public const nint nFlags = 0x26; // uint16
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAnimStrayRadius_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flMaxDist = 0x4; // float32
            public const nint flRelaxationFactor = 0x8; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEdgeDesc_t {
            public const nint nEdge = 0x0; // uint16[2]
            public const nint nSide = 0x4; // uint16[2][2]
            public const nint nVirtElem = 0xC; // uint16[2]
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeReverseOffset_t {
            public const nint vOffset = 0x0; // Vector
            public const nint nBoneCtrl = 0xC; // uint16
            public const nint nTargetNode = 0xE; // uint16
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnPlane_t {
            public const nint m_vNormal = 0x0; // Vector
            public const nint m_flOffset = 0xC; // float32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSDFRigid_t {
            public const nint vLocalMin = 0x0; // Vector
            public const nint vLocalMax = 0xC; // Vector
            public const nint flBounciness = 0x18; // float32
            public const nint nNode = 0x1C; // uint16
            public const nint nCollisionMask = 0x1E; // uint16
            public const nint nVertexMapIndex = 0x20; // uint16
            public const nint nFlags = 0x22; // uint16
            public const nint m_Distances = 0x28; // CUtlVector<float32>
            public const nint m_nWidth = 0x40; // int32
            public const nint m_nHeight = 0x44; // int32
            public const nint m_nDepth = 0x48; // int32
        }
        // Parent: None
        // Field count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeJiggleBone {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_flLength = 0x4; // float32
            public const nint m_flTipMass = 0x8; // float32
            public const nint m_flYawStiffness = 0xC; // float32
            public const nint m_flYawDamping = 0x10; // float32
            public const nint m_flPitchStiffness = 0x14; // float32
            public const nint m_flPitchDamping = 0x18; // float32
            public const nint m_flAlongStiffness = 0x1C; // float32
            public const nint m_flAlongDamping = 0x20; // float32
            public const nint m_flAngleLimit = 0x24; // float32
            public const nint m_flMinYaw = 0x28; // float32
            public const nint m_flMaxYaw = 0x2C; // float32
            public const nint m_flYawFriction = 0x30; // float32
            public const nint m_flYawBounce = 0x34; // float32
            public const nint m_flMinPitch = 0x38; // float32
            public const nint m_flMaxPitch = 0x3C; // float32
            public const nint m_flPitchFriction = 0x40; // float32
            public const nint m_flPitchBounce = 0x44; // float32
            public const nint m_flBaseMass = 0x48; // float32
            public const nint m_flBaseStiffness = 0x4C; // float32
            public const nint m_flBaseDamping = 0x50; // float32
            public const nint m_flBaseMinLeft = 0x54; // float32
            public const nint m_flBaseMaxLeft = 0x58; // float32
            public const nint m_flBaseLeftFriction = 0x5C; // float32
            public const nint m_flBaseMinUp = 0x60; // float32
            public const nint m_flBaseMaxUp = 0x64; // float32
            public const nint m_flBaseUpFriction = 0x68; // float32
            public const nint m_flBaseMinForward = 0x6C; // float32
            public const nint m_flBaseMaxForward = 0x70; // float32
            public const nint m_flBaseForwardFriction = 0x74; // float32
            public const nint m_flRadius0 = 0x78; // float32
            public const nint m_flRadius1 = 0x7C; // float32
            public const nint m_vPoint0 = 0x80; // Vector
            public const nint m_vPoint1 = 0x8C; // Vector
            public const nint m_nCollisionMask = 0x98; // uint16
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRegionSVM {
            public const nint m_Planes = 0x0; // CUtlVector<RnPlane_t>
            public const nint m_Nodes = 0x18; // CUtlVector<uint32>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWorldCollisionParams_t {
            public const nint flWorldFriction = 0x0; // float32
            public const nint flGroundFriction = 0x4; // float32
            public const nint nListBegin = 0x8; // uint16
            public const nint nListEnd = 0xA; // uint16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnNode_t {
            public const nint m_vMin = 0x0; // Vector
            public const nint m_nChildren = 0xC; // uint32
            public const nint m_vMax = 0x10; // Vector
            public const nint m_nTriangleOffset = 0x1C; // uint32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitMatrix_t {
            public const nint bone = 0x0; // CTransform
            public const nint vCenter = 0x20; // Vector
            public const nint nEnd = 0x2C; // uint16
            public const nint nNode = 0x2E; // uint16
            public const nint nBeginDynamic = 0x30; // uint16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdQuad_t {
            public const nint nNode = 0x0; // uint16[4][4]
            public const nint f4Slack = 0x20; // fltx4
            public const nint vShape = 0x30; // FourVectors[4]
            public const nint f4Weights = 0xF0; // fltx4[4]
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdSpringIntegrator_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint flSpringRestLength = 0x10; // fltx4
            public const nint flSpringConstant = 0x20; // fltx4
            public const nint flSpringDamping = 0x30; // fltx4
            public const nint flNodeWeight0 = 0x40; // fltx4
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdNodeBase_t {
            public const nint nNode = 0x0; // uint16[4]
            public const nint nNodeX0 = 0x8; // uint16[4]
            public const nint nNodeX1 = 0x10; // uint16[4]
            public const nint nNodeY0 = 0x18; // uint16[4]
            public const nint nNodeY1 = 0x20; // uint16[4]
            public const nint nDummy = 0x28; // uint16[4]
            public const nint qAdjust = 0x30; // FourQuaternions
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeQuad_t {
            public const nint nNode = 0x0; // uint16[4]
            public const nint flSlack = 0x8; // float32
            public const nint vShape = 0xC; // Vector4D[4]
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeHingeLimit_t {
            public const nint nNode = 0x0; // uint16[6]
            public const nint nFlags = 0xC; // uint32
            public const nint flWeight4 = 0x10; // float32
            public const nint flWeight5 = 0x14; // float32
            public const nint flAngleCenter = 0x18; // float32
            public const nint flAngleExtents = 0x1C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnWing_t {
            public const nint m_nIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWeightedNode_t {
            public const nint nNode = 0x0; // uint16
            public const nint nWeight = 0x2; // uint16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEffectDesc_t {
            public const nint sName = 0x0; // CUtlString
            public const nint nNameHash = 0x8; // uint32
            public const nint nType = 0xC; // int32
            public const nint m_Params = 0x10; // KeyValues3
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSpringIntegrator_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flSpringRestLength = 0x4; // float32
            public const nint flSpringConstant = 0x8; // float32
            public const nint flSpringDamping = 0xC; // float32
            public const nint flNodeWeight0 = 0x10; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourVectors2D {
            public const nint x = 0x0; // fltx4
            public const nint y = 0x10; // fltx4
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeKelagerBend2_t {
            public const nint flWeight = 0x0; // float32[3]
            public const nint flHeight0 = 0xC; // float32
            public const nint nNode = 0x10; // uint16[3]
            public const nint nReserved = 0x16; // uint16
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CastSphereSATParams_t {
            public const nint m_vRayStart = 0x0; // Vector
            public const nint m_vRayDelta = 0xC; // Vector
            public const nint m_flRadius = 0x18; // float32
            public const nint m_flMaxFraction = 0x1C; // float32
            public const nint m_flScale = 0x20; // float32
            public const nint m_pHull = 0x28; // RnHull_t*
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRigidColliderIndices_t {
            public const nint m_nTaperedCapsuleRigidIndex = 0x0; // uint16
            public const nint m_nSphereRigidIndex = 0x2; // uint16
            public const nint m_nBoxRigidIndex = 0x4; // uint16
            public const nint m_nSDFRigidIndex = 0x6; // uint16
            public const nint m_nCollisionPlaneIndex = 0x8; // uint16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCollisionPlane_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nChildNode = 0x2; // uint16
            public const nint m_Plane = 0x4; // RnPlane_t
            public const nint flStrength = 0x14; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeStiffHingeBuild_t {
            public const nint flMaxAngle = 0x0; // float32
            public const nint flStrength = 0x4; // float32
            public const nint flMotionBias = 0x8; // float32[3]
            public const nint nNode = 0x14; // uint16[3]
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBoxRigid_t {
            public const nint tmFrame2 = 0x0; // CTransform
            public const nint nNode = 0x20; // uint16
            public const nint nCollisionMask = 0x22; // uint16
            public const nint vSize = 0x24; // Vector
            public const nint nVertexMapIndex = 0x30; // uint16
            public const nint nFlags = 0x32; // uint16
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeMorphLayerDepr_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_Nodes = 0x10; // CUtlVector<uint16>
            public const nint m_InitPos = 0x28; // CUtlVector<Vector>
            public const nint m_Gravity = 0x40; // CUtlVector<float32>
            public const nint m_GoalStrength = 0x58; // CUtlVector<float32>
            public const nint m_GoalDamping = 0x70; // CUtlVector<float32>
            public const nint m_nFlags = 0x88; // uint32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOffset_t {
            public const nint vOffset = 0x0; // Vector
            public const nint nCtrlParent = 0xC; // uint16
            public const nint nCtrlChild = 0xE; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class IPhysicsPlayerController {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeBase_t {
            public const nint nNode = 0x0; // uint16
            public const nint nDummy = 0x2; // uint16[3]
            public const nint nNodeX0 = 0x8; // uint16
            public const nint nNodeX1 = 0xA; // uint16
            public const nint nNodeY0 = 0xC; // uint16
            public const nint nNodeY1 = 0xE; // uint16
            public const nint qAdjust = 0x10; // QuaternionStorage
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapBuild_t {
            public const nint m_VertexMapName = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_Color = 0xC; // Color
            public const nint m_flVolumetricSolveStrength = 0x10; // float32
            public const nint m_nScaleSourceNode = 0x14; // int32
            public const nint m_Weights = 0x18; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeVertexMapBuildArray {
            public const nint m_Array = 0x0; // CUtlVector<FeVertexMapBuild_t*>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTri_t {
            public const nint nNode = 0x0; // uint16[3]
            public const nint w1 = 0x8; // float32
            public const nint w2 = 0xC; // float32
            public const nint v1x = 0x10; // float32
            public const nint v2 = 0x14; // Vector2D
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHull_t {
            public const nint m_vCentroid = 0x0; // Vector
            public const nint m_flMaxAngularRadius = 0xC; // float32
            public const nint m_Bounds = 0x10; // AABB_t
            public const nint m_vOrthographicAreas = 0x28; // Vector
            public const nint m_MassProperties = 0x34; // matrix3x4_t
            public const nint m_flVolume = 0x64; // float32
            public const nint m_flSurfaceArea = 0x68; // float32
            public const nint m_Vertices = 0x70; // CUtlVector<RnVertex_t>
            public const nint m_VertexPositions = 0x88; // CUtlVector<Vector>
            public const nint m_Edges = 0xA0; // CUtlVector<RnHalfEdge_t>
            public const nint m_Faces = 0xB8; // CUtlVector<RnFace_t>
            public const nint m_FacePlanes = 0xD0; // CUtlVector<RnPlane_t>
            public const nint m_nFlags = 0xE8; // uint32
            public const nint m_pRegionSVM = 0xF0; // CRegionSVM*
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAntiTunnelGroupBuild_t {
            public const nint m_nVertexMapHash = 0x0; // uint32
            public const nint m_nCollisionMask = 0x4; // uint32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CovMatrix3 {
            public const nint m_vDiag = 0x0; // Vector
            public const nint m_flXY = 0xC; // float32
            public const nint m_flXZ = 0x10; // float32
            public const nint m_flYZ = 0x14; // float32
        }
        // Parent: None
        // Field count: 1
        public static class PhysicsParticleId_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnVertex_t {
            public const nint m_nEdge = 0x0; // uint8
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class Dop26_t {
            public const nint m_flSupport = 0x0; // float32[26]
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeDynKinLink_t {
            public const nint m_nParent = 0x0; // uint16
            public const nint m_nChild = 0x2; // uint16
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnFace_t {
            public const nint m_nEdge = 0x0; // uint8
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOsOffset_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nCtrlChild = 0x2; // uint16
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAntiTunnelProbe_t {
            public const nint flWeight = 0x0; // float32
            public const nint nFlags = 0x4; // uint32
            public const nint nProbeNode = 0x8; // uint16
            public const nint nCount = 0xA; // uint16
            public const nint nBegin = 0xC; // uint32
            public const nint flActivationDistance = 0x10; // float32
            public const nint flCurvatureRadius = 0x14; // float32
            public const nint flBias = 0x18; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSourceEdge_t {
            public const nint nNode = 0x0; // uint16[2]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTwistConstraint_t {
            public const nint nNodeOrient = 0x0; // uint16
            public const nint nNodeEnd = 0x2; // uint16
            public const nint flTwistRelax = 0x4; // float32
            public const nint flSwingRelax = 0x8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeWindBase_t {
            public const nint nNodeX0 = 0x0; // uint16
            public const nint nNodeX1 = 0x2; // uint16
            public const nint nNodeY0 = 0x4; // uint16
            public const nint nNodeY1 = 0x6; // uint16
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAxialEdgeBend_t {
            public const nint te = 0x0; // float32
            public const nint tv = 0x4; // float32
            public const nint flDist = 0x8; // float32
            public const nint flWeight = 0xC; // float32[4]
            public const nint nNode = 0x1C; // uint16[6]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourCovMatrices3 {
            public const nint m_vDiag = 0x0; // FourVectors
            public const nint m_flXY = 0x30; // fltx4
            public const nint m_flXZ = 0x40; // fltx4
            public const nint m_flYZ = 0x50; // fltx4
        }
        // Parent: None
        // Field count: 5
        public static class constraint_breakableparams_t {
            public const nint strength = 0x0; // float32
            public const nint forceLimit = 0x4; // float32
            public const nint torqueLimit = 0x8; // float32
            public const nint bodyMassScale = 0xC; // float32[2]
            public const nint isActive = 0x14; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSphereRigid_t {
            public const nint vSphere = 0x0; // fltx4
            public const nint nNode = 0x10; // uint16
            public const nint nCollisionMask = 0x12; // uint16
            public const nint nVertexMapIndex = 0x14; // uint16
            public const nint nFlags = 0x16; // uint16
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildTaperedCapsuleRigid_t {
            public const nint m_nPriority = 0x30; // int32
            public const nint m_nVertexMapHash = 0x34; // uint32
            public const nint m_nAntitunnelGroupBits = 0x38; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSoftParent_t {
            public const nint nParent = 0x0; // int32
            public const nint flAlpha = 0x4; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnShapeDesc_t {
            public const nint m_nCollisionAttributeIndex = 0x0; // uint32
            public const nint m_nSurfacePropertyIndex = 0x4; // uint32
            public const nint m_UserFriendlyName = 0x8; // CUtlString
            public const nint m_bUserFriendlyNameSealed = 0x10; // bool
            public const nint m_bUserFriendlyNameLong = 0x11; // bool
            public const nint m_nToolMaterialHash = 0x14; // uint32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTreeChildren_t {
            public const nint nChild = 0x0; // uint16[2]
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRodConstraint_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flMaxDist = 0x4; // float32
            public const nint flMinDist = 0x8; // float32
            public const nint flWeight0 = 0xC; // float32
            public const nint flRelaxationFactor = 0x10; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitWeight_t {
            public const nint flWeight = 0x0; // float32
            public const nint nNode = 0x4; // uint16
            public const nint nDummy = 0x6; // uint16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHalfEdge_t {
            public const nint m_nNext = 0x0; // uint8
            public const nint m_nTwin = 0x1; // uint8
            public const nint m_nOrigin = 0x2; // uint8
            public const nint m_nFace = 0x3; // uint8
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdTri_t {
            public const nint nNode = 0x0; // uint32[4][3]
            public const nint w1 = 0x30; // fltx4
            public const nint w2 = 0x40; // fltx4
            public const nint v1x = 0x50; // fltx4
            public const nint v2 = 0x60; // FourVectors2D
        }
        // Parent: None
        // Field count: 1
        public static class VertexPositionColor_t {
            public const nint m_vPosition = 0x0; // Vector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitInfluence_t {
            public const nint nVertexNode = 0x0; // uint32
            public const nint flWeight = 0x4; // float32
            public const nint nMatrixNode = 0x8; // uint32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeHingeLimitBuild_t {
            public const nint nNode = 0x0; // uint16[6]
            public const nint nFlags = 0xC; // uint32
            public const nint flLimitCW = 0x10; // float32
            public const nint flLimitCCW = 0x14; // float32
        }
    }
}
