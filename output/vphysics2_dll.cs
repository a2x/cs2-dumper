// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-10 00:00:51.448403700 UTC

namespace CS2Dumper.Schemas {
    // Module: vphysics2.dll
    // Class count: 94
    // Enum count: 2
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
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodySpring_t {
            public const nint m_nParticle = 0x0; // 
            public const nint m_flLength = 0x4; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyParticle_t {
            public const nint m_flMassInv = 0x0; // 
        }
        // Parent: RnShapeDesc_t
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHullDesc_t {
            public const nint m_Hull = 0x18; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSoftbodyCapsule_t {
            public const nint m_vCenter = 0x0; // 
            public const nint m_flRadius = 0x18; // 
            public const nint m_nParticle = 0x1C; // 
        }
        // Parent: RnShapeDesc_t
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsuleDesc_t {
            public const nint m_Capsule = 0x18; // 
        }
        // Parent: RnShapeDesc_t
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnSphereDesc_t {
            public const nint m_Sphere = 0x18; // 
        }
        // Parent: RnShapeDesc_t
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMeshDesc_t {
            public const nint m_Mesh = 0x18; // 
        }
        // Parent: None
        // Field count: 106
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysFeModelDesc_t {
            public const nint m_CtrlHash = 0x0; // 
            public const nint m_CtrlName = 0x18; // 
            public const nint m_nStaticNodeFlags = 0x30; // 
            public const nint m_nDynamicNodeFlags = 0x34; // 
            public const nint m_flLocalForce = 0x38; // 
            public const nint m_flLocalRotation = 0x3C; // 
            public const nint m_nNodeCount = 0x40; // 
            public const nint m_nStaticNodes = 0x42; // 
            public const nint m_nRotLockStaticNodes = 0x44; // 
            public const nint m_nFirstPositionDrivenNode = 0x46; // 
            public const nint m_nSimdTriCount1 = 0x48; // 
            public const nint m_nSimdTriCount2 = 0x4A; // 
            public const nint m_nSimdQuadCount1 = 0x4C; // 
            public const nint m_nSimdQuadCount2 = 0x4E; // 
            public const nint m_nQuadCount1 = 0x50; // 
            public const nint m_nQuadCount2 = 0x52; // 
            public const nint m_nTreeDepth = 0x54; // 
            public const nint m_nNodeBaseJiggleboneDependsCount = 0x56; // 
            public const nint m_nRopeCount = 0x58; // 
            public const nint m_Ropes = 0x60; // 
            public const nint m_NodeBases = 0x78; // 
            public const nint m_SimdNodeBases = 0x90; // 
            public const nint m_Quads = 0xA8; // 
            public const nint m_SimdQuads = 0xC0; // 
            public const nint m_SimdTris = 0xD8; // 
            public const nint m_SimdRods = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
            public const nint m_SimdRodsAnim = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
            public const nint m_InitPose = 0x120; // 
            public const nint m_Rods = 0x138; // 
            public const nint m_Twists = 0x150; // CUtlVector<FeTwistConstraint_t>
            public const nint m_HingeLimits = 0x168; // 
            public const nint m_AntiTunnelProbes = 0x180; // CUtlVector<FeAntiTunnelProbe_t>
            public const nint m_AntiTunnelTargetNodes = 0x198; // 
            public const nint m_AxialEdges = 0x1B0; // 
            public const nint m_NodeInvMasses = 0x1C8; // 
            public const nint m_CtrlOffsets = 0x1E0; // 
            public const nint m_CtrlOsOffsets = 0x1F8; // 
            public const nint m_FollowNodes = 0x210; // 
            public const nint m_CollisionPlanes = 0x228; // CUtlVector<FeCollisionPlane_t>
            public const nint m_NodeIntegrator = 0x240; // CUtlVector<FeNodeIntegrator_t>
            public const nint m_SpringIntegrator = 0x258; // CUtlVector<FeSpringIntegrator_t>
            public const nint m_SimdSpringIntegrator = 0x270; // CUtlVector<FeSimdSpringIntegrator_t>
            public const nint m_WorldCollisionParams = 0x288; // CUtlVector<FeWorldCollisionParams_t>
            public const nint m_LegacyStretchForce = 0x2A0; // 
            public const nint m_NodeCollisionRadii = 0x2B8; // 
            public const nint m_DynNodeFriction = 0x2D0; // 
            public const nint m_LocalRotation = 0x2E8; // 
            public const nint m_LocalForce = 0x300; // 
            public const nint m_TaperedCapsuleStretches = 0x318; // CUtlVector<FeTaperedCapsuleStretch_t>
            public const nint m_TaperedCapsuleRigids = 0x330; // CUtlVector<FeTaperedCapsuleRigid_t>
            public const nint m_SphereRigids = 0x348; // 
            public const nint m_WorldCollisionNodes = 0x360; // 
            public const nint m_TreeParents = 0x378; // 
            public const nint m_TreeCollisionMasks = 0x390; // 
            public const nint m_TreeChildren = 0x3A8; // 
            public const nint m_FreeNodes = 0x3C0; // 
            public const nint m_FitMatrices = 0x3D8; // 
            public const nint m_FitWeights = 0x3F0; // 
            public const nint m_ReverseOffsets = 0x408; // CUtlVector<FeNodeReverseOffset_t>
            public const nint m_AnimStrayRadii = 0x420; // CUtlVector<FeAnimStrayRadius_t>
            public const nint m_SimdAnimStrayRadii = 0x438; // CUtlVector<FeSimdAnimStrayRadius_t>
            public const nint m_KelagerBends = 0x450; // 
            public const nint m_CtrlSoftOffsets = 0x468; // CUtlVector<FeCtrlSoftOffset_t>
            public const nint m_JiggleBones = 0x480; // CUtlVector<CFeIndexedJiggleBone>
            public const nint m_SourceElems = 0x498; // 
            public const nint m_GoalDampedSpringIntegrators = 0x4B0; // 
            public const nint m_Tris = 0x4C8; // 
            public const nint m_nTriCount1 = 0x4E0; // 
            public const nint m_nTriCount2 = 0x4E2; // 
            public const nint m_nReservedUint8 = 0x4E4; // 
            public const nint m_nExtraPressureIterations = 0x4E5; // 
            public const nint m_nExtraGoalIterations = 0x4E6; // 
            public const nint m_nExtraIterations = 0x4E7; // 
            public const nint m_SDFRigids = 0x4E8; // 
            public const nint m_BoxRigids = 0x500; // 
            public const nint m_DynNodeVertexSet = 0x518; // 
            public const nint m_VertexSetNames = 0x530; // 
            public const nint m_RigidColliderPriorities = 0x548; // 
            public const nint m_MorphLayers = 0x560; // 
            public const nint m_MorphSetData = 0x578; // 
            public const nint m_VertexMaps = 0x590; // 
            public const nint m_VertexMapValues = 0x5A8; // 
            public const nint m_Effects = 0x5C0; // 
            public const nint m_LockToParent = 0x5D8; // 
            public const nint m_LockToGoal = 0x5F0; // 
            public const nint m_SkelParents = 0x608; // 
            public const nint m_DynNodeWindBases = 0x620; // CUtlVector<FeNodeWindBase_t>
            public const nint m_flInternalPressure = 0x638; // 
            public const nint m_flDefaultTimeDilation = 0x63C; // 
            public const nint m_flWindage = 0x640; // 
            public const nint m_flWindDrag = 0x644; // 
            public const nint m_flDefaultSurfaceStretch = 0x648; // 
            public const nint m_flDefaultThreadStretch = 0x64C; // 
            public const nint m_flDefaultGravityScale = 0x650; // 
            public const nint m_flDefaultVelAirDrag = 0x654; // 
            public const nint m_flDefaultExpAirDrag = 0x658; // 
            public const nint m_flDefaultVelQuadAirDrag = 0x65C; // 
            public const nint m_flDefaultExpQuadAirDrag = 0x660; // 
            public const nint m_flRodVelocitySmoothRate = 0x664; // 
            public const nint m_flQuadVelocitySmoothRate = 0x668; // 
            public const nint m_flAddWorldCollisionRadius = 0x66C; // 
            public const nint m_flDefaultVolumetricSolveAmount = 0x670; // 
            public const nint m_flMotionSmoothCDT = 0x674; // 
            public const nint m_flLocalDrag1 = 0x678; // 
            public const nint m_nRodVelocitySmoothIterations = 0x67C; // 
            public const nint m_nQuadVelocitySmoothIterations = 0x67E; // 
        }
        // Parent: RnBodyDesc_t
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class vphysics_save_cphysicsbody_t {
            public const nint m_nOldPointer = 0xD0; // 
        }
        // Parent: FeBoxRigid_t
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildBoxRigid_t {
            public const nint m_nPriority = 0x40; // 
            public const nint m_nVertexMapHash = 0x44; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeIndexedJiggleBone {
            public const nint m_nNode = 0x0; // 
            public const nint m_nJiggleParent = 0x4; // 
            public const nint m_jiggleBone = 0x8; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBandBendLimit_t {
            public const nint flDistMin = 0x0; // 
            public const nint flDistMax = 0x4; // 
            public const nint nNode = 0x8; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleStretch_t {
            public const nint nNode = 0x0; // 
            public const nint nCollisionMask = 0x4; // 
            public const nint nDummy = 0x6; // 
            public const nint flRadius = 0x8; // 
        }
        // Parent: None
        // Field count: 4
        public static class constraint_axislimit_t {
            public const nint flMinRotation = 0x0; // 
            public const nint flMaxRotation = 0x4; // 
            public const nint flMotorTargetAngSpeed = 0x8; // 
            public const nint flMotorMaxTorque = 0xC; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraintAnim_t {
            public const nint nNode = 0x0; // 
            public const nint f4Weight0 = 0x10; // 
            public const nint f4RelaxationFactor = 0x20; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraint_t {
            public const nint nNode = 0x0; // 
            public const nint f4MaxDist = 0x10; // 
            public const nint f4MinDist = 0x20; // 
            public const nint f4Weight0 = 0x30; // 
            public const nint f4RelaxationFactor = 0x40; // 
        }
        // Parent: None
        // Field count: 4
        public static class constraint_hingeparams_t {
            public const nint worldPosition = 0x0; // 
            public const nint worldAxisDirection = 0xC; // 
            public const nint hingeAxis = 0x18; // 
            public const nint constraint = 0x28; // 
        }
        // Parent: FeSphereRigid_t
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSphereRigid_t {
            public const nint m_nPriority = 0x20; // 
            public const nint m_nVertexMapHash = 0x24; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdAnimStrayRadius_t {
            public const nint nNode = 0x0; // 
            public const nint flMaxDist = 0x10; // 
            public const nint flRelaxationFactor = 0x20; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnTriangle_t {
            public const nint m_nIndex = 0x0; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeProxyVertexMap_t {
            public const nint m_Name = 0x0; // 
            public const nint m_flWeight = 0x8; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeIntegrator_t {
            public const nint flPointDamping = 0x0; // 
            public const nint flAnimationForceAttraction = 0x4; // 
            public const nint flAnimationVertexAttraction = 0x8; // 
            public const nint flGravity = 0xC; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsule_t {
            public const nint m_vCenter = 0x0; // 
            public const nint m_flRadius = 0x18; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeNamedJiggleBone {
            public const nint m_strParentBone = 0x0; // 
            public const nint m_transform = 0x10; // 
            public const nint m_nJiggleParent = 0x30; // 
            public const nint m_jiggleBone = 0x34; // 
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAntiTunnelProbeBuild_t {
            public const nint flWeight = 0x0; // 
            public const nint flActivationDistance = 0x4; // 
            public const nint flBias = 0x8; // 
            public const nint flCurvature = 0xC; // 
            public const nint nFlags = 0x10; // 
            public const nint nProbeNode = 0x14; // 
            public const nint targetNodes = 0x18; // 
        }
        // Parent: None
        // Field count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBodyDesc_t {
            public const nint m_sDebugName = 0x0; // 
            public const nint m_vPosition = 0x8; // 
            public const nint m_qOrientation = 0x14; // 
            public const nint m_vLinearVelocity = 0x24; // 
            public const nint m_vAngularVelocity = 0x30; // 
            public const nint m_vLocalMassCenter = 0x3C; // 
            public const nint m_LocalInertiaInv = 0x48; // 
            public const nint m_flMassInv = 0x6C; // 
            public const nint m_flGameMass = 0x70; // 
            public const nint m_flInertiaScaleInv = 0x74; // 
            public const nint m_flLinearDamping = 0x78; // 
            public const nint m_flAngularDamping = 0x7C; // 
            public const nint m_flLinearDrag = 0x80; // 
            public const nint m_flAngularDrag = 0x84; // 
            public const nint m_flLinearBuoyancyDrag = 0x88; // 
            public const nint m_flAngularBuoyancyDrag = 0x8C; // 
            public const nint m_vLastAwakeForceAccum = 0x90; // 
            public const nint m_vLastAwakeTorqueAccum = 0x9C; // 
            public const nint m_flBuoyancyFactor = 0xA8; // 
            public const nint m_flGravityScale = 0xAC; // 
            public const nint m_flTimeScale = 0xB0; // 
            public const nint m_nBodyType = 0xB4; // 
            public const nint m_nGameIndex = 0xB8; // 
            public const nint m_nGameFlags = 0xBC; // 
            public const nint m_nMinVelocityIterations = 0xC0; // 
            public const nint m_nMinPositionIterations = 0xC1; // 
            public const nint m_nMassPriority = 0xC2; // 
            public const nint m_bEnabled = 0xC3; // 
            public const nint m_bSleeping = 0xC4; // 
            public const nint m_bIsContinuousEnabled = 0xC5; // 
            public const nint m_bDragEnabled = 0xC6; // 
            public const nint m_bBuoyancyDragEnabled = 0xC7; // 
            public const nint m_bGravityDisabled = 0xC8; // 
            public const nint m_bSpeculativeEnabled = 0xC9; // 
            public const nint m_bHasShadowController = 0xCA; // 
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OldFeEdge_t {
            public const nint m_flK = 0x0; // 
            public const nint invA = 0xC; // 
            public const nint t = 0x10; // 
            public const nint flThetaRelaxed = 0x14; // 
            public const nint flThetaFactor = 0x18; // 
            public const nint c01 = 0x1C; // 
            public const nint c02 = 0x20; // 
            public const nint c03 = 0x24; // 
            public const nint c04 = 0x28; // 
            public const nint flAxialModelDist = 0x2C; // 
            public const nint flAxialModelWeights = 0x30; // 
            public const nint m_nNode = 0x40; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFollowNode_t {
            public const nint nParentNode = 0x0; // 
            public const nint nChildNode = 0x2; // 
            public const nint flWeight = 0x4; // 
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMesh_t {
            public const nint m_vMin = 0x0; // 
            public const nint m_vMax = 0xC; // 
            public const nint m_Nodes = 0x18; // 
            public const nint m_Vertices = 0x30; // 
            public const nint m_Triangles = 0x48; // 
            public const nint m_Wings = 0x60; // 
            public const nint m_Materials = 0x78; // 
            public const nint m_vOrthographicAreas = 0x90; // 
            public const nint m_nFlags = 0x9C; // 
            public const nint m_nDebugFlags = 0xA0; // 
        }
        // Parent: None
        // Field count: 2
        public static class VertexPositionNormal_t {
            public const nint m_vPosition = 0x0; // 
            public const nint m_vNormal = 0xC; // 
        }
        // Parent: FeSDFRigid_t
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSDFRigid_t {
            public const nint m_nPriority = 0x50; // 
            public const nint m_nVertexMapHash = 0x54; // 
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBlendVertex_t {
            public const nint m_nWeight0 = 0x0; // 
            public const nint m_nIndex0 = 0x2; // 
            public const nint m_nWeight1 = 0x4; // 
            public const nint m_nIndex1 = 0x6; // 
            public const nint m_nWeight2 = 0x8; // 
            public const nint m_nIndex2 = 0xA; // 
            public const nint m_nFlags = 0xC; // 
            public const nint m_nTargetIndex = 0xE; // 
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeMorphLayer {
            public const nint m_Name = 0x0; // 
            public const nint m_nNameHash = 0x8; // 
            public const nint m_Nodes = 0x10; // 
            public const nint m_InitPos = 0x28; // 
            public const nint m_Gravity = 0x40; // 
            public const nint m_GoalStrength = 0x58; // 
            public const nint m_GoalDamping = 0x70; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlSoftOffset_t {
            public const nint nCtrlParent = 0x0; // 
            public const nint nCtrlChild = 0x2; // 
            public const nint vOffset = 0x4; // 
            public const nint flAlpha = 0x10; // 
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapDesc_t {
            public const nint sName = 0x0; // 
            public const nint nNameHash = 0x8; // 
            public const nint nColor = 0xC; // 
            public const nint nFlags = 0x10; // 
            public const nint nVertexBase = 0x14; // 
            public const nint nVertexCount = 0x16; // 
            public const nint nMapOffset = 0x18; // 
            public const nint nNodeListOffset = 0x1C; // 
            public const nint vCenterOfMass = 0x20; // 
            public const nint flVolumetricSolveStrength = 0x2C; // 
            public const nint nScaleSourceNode = 0x30; // 
            public const nint nNodeListCount = 0x32; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTaperedCapsuleRigid_t {
            public const nint vSphere = 0x0; // 
            public const nint nNode = 0x20; // 
            public const nint nCollisionMask = 0x22; // 
            public const nint nVertexMapIndex = 0x24; // 
            public const nint nFlags = 0x26; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAnimStrayRadius_t {
            public const nint nNode = 0x0; // 
            public const nint flMaxDist = 0x4; // 
            public const nint flRelaxationFactor = 0x8; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEdgeDesc_t {
            public const nint nEdge = 0x0; // 
            public const nint nSide = 0x4; // 
            public const nint nVirtElem = 0xC; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeReverseOffset_t {
            public const nint vOffset = 0x0; // 
            public const nint nBoneCtrl = 0xC; // 
            public const nint nTargetNode = 0xE; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnPlane_t {
            public const nint m_vNormal = 0x0; // 
            public const nint m_flOffset = 0xC; // 
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSDFRigid_t {
            public const nint vLocalMin = 0x0; // 
            public const nint vLocalMax = 0xC; // 
            public const nint flBounciness = 0x18; // 
            public const nint nNode = 0x1C; // 
            public const nint nCollisionMask = 0x1E; // 
            public const nint nVertexMapIndex = 0x20; // 
            public const nint nFlags = 0x22; // 
            public const nint m_Distances = 0x28; // 
            public const nint m_nWidth = 0x40; // 
            public const nint m_nHeight = 0x44; // 
            public const nint m_nDepth = 0x48; // 
        }
        // Parent: None
        // Field count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeJiggleBone {
            public const nint m_nFlags = 0x0; // 
            public const nint m_flLength = 0x4; // 
            public const nint m_flTipMass = 0x8; // 
            public const nint m_flYawStiffness = 0xC; // 
            public const nint m_flYawDamping = 0x10; // 
            public const nint m_flPitchStiffness = 0x14; // 
            public const nint m_flPitchDamping = 0x18; // 
            public const nint m_flAlongStiffness = 0x1C; // 
            public const nint m_flAlongDamping = 0x20; // 
            public const nint m_flAngleLimit = 0x24; // 
            public const nint m_flMinYaw = 0x28; // 
            public const nint m_flMaxYaw = 0x2C; // 
            public const nint m_flYawFriction = 0x30; // 
            public const nint m_flYawBounce = 0x34; // 
            public const nint m_flMinPitch = 0x38; // 
            public const nint m_flMaxPitch = 0x3C; // 
            public const nint m_flPitchFriction = 0x40; // 
            public const nint m_flPitchBounce = 0x44; // 
            public const nint m_flBaseMass = 0x48; // 
            public const nint m_flBaseStiffness = 0x4C; // 
            public const nint m_flBaseDamping = 0x50; // 
            public const nint m_flBaseMinLeft = 0x54; // 
            public const nint m_flBaseMaxLeft = 0x58; // 
            public const nint m_flBaseLeftFriction = 0x5C; // 
            public const nint m_flBaseMinUp = 0x60; // 
            public const nint m_flBaseMaxUp = 0x64; // 
            public const nint m_flBaseUpFriction = 0x68; // 
            public const nint m_flBaseMinForward = 0x6C; // 
            public const nint m_flBaseMaxForward = 0x70; // 
            public const nint m_flBaseForwardFriction = 0x74; // 
            public const nint m_flRadius0 = 0x78; // 
            public const nint m_flRadius1 = 0x7C; // 
            public const nint m_vPoint0 = 0x80; // 
            public const nint m_vPoint1 = 0x8C; // 
            public const nint m_nCollisionMask = 0x98; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRegionSVM {
            public const nint m_Planes = 0x0; // 
            public const nint m_Nodes = 0x18; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWorldCollisionParams_t {
            public const nint flWorldFriction = 0x0; // 
            public const nint flGroundFriction = 0x4; // 
            public const nint nListBegin = 0x8; // 
            public const nint nListEnd = 0xA; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnNode_t {
            public const nint m_vMin = 0x0; // 
            public const nint m_nChildren = 0xC; // 
            public const nint m_vMax = 0x10; // 
            public const nint m_nTriangleOffset = 0x1C; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitMatrix_t {
            public const nint bone = 0x0; // 
            public const nint vCenter = 0x20; // 
            public const nint nEnd = 0x2C; // 
            public const nint nNode = 0x2E; // 
            public const nint nBeginDynamic = 0x30; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdQuad_t {
            public const nint nNode = 0x0; // 
            public const nint f4Slack = 0x20; // 
            public const nint vShape = 0x30; // 
            public const nint f4Weights = 0xF0; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdSpringIntegrator_t {
            public const nint nNode = 0x0; // 
            public const nint flSpringRestLength = 0x10; // 
            public const nint flSpringConstant = 0x20; // 
            public const nint flSpringDamping = 0x30; // 
            public const nint flNodeWeight0 = 0x40; // 
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdNodeBase_t {
            public const nint nNode = 0x0; // 
            public const nint nNodeX0 = 0x8; // 
            public const nint nNodeX1 = 0x10; // 
            public const nint nNodeY0 = 0x18; // 
            public const nint nNodeY1 = 0x20; // 
            public const nint nDummy = 0x28; // 
            public const nint qAdjust = 0x30; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeQuad_t {
            public const nint nNode = 0x0; // 
            public const nint flSlack = 0x8; // 
            public const nint vShape = 0xC; // 
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeHingeLimit_t {
            public const nint nNode = 0x0; // 
            public const nint nFlags = 0xC; // 
            public const nint flWeight4 = 0x10; // 
            public const nint flWeight5 = 0x14; // 
            public const nint flAngleCenter = 0x18; // 
            public const nint flAngleExtents = 0x1C; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnWing_t {
            public const nint m_nIndex = 0x0; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWeightedNode_t {
            public const nint nNode = 0x0; // 
            public const nint nWeight = 0x2; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEffectDesc_t {
            public const nint sName = 0x0; // 
            public const nint nNameHash = 0x8; // 
            public const nint nType = 0xC; // 
            public const nint m_Params = 0x10; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSpringIntegrator_t {
            public const nint nNode = 0x0; // 
            public const nint flSpringRestLength = 0x4; // 
            public const nint flSpringConstant = 0x8; // 
            public const nint flSpringDamping = 0xC; // 
            public const nint flNodeWeight0 = 0x10; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourVectors2D {
            public const nint x = 0x0; // 
            public const nint y = 0x10; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeKelagerBend2_t {
            public const nint flWeight = 0x0; // 
            public const nint flHeight0 = 0xC; // 
            public const nint nNode = 0x10; // 
            public const nint nReserved = 0x16; // 
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CastSphereSATParams_t {
            public const nint m_vRayStart = 0x0; // 
            public const nint m_vRayDelta = 0xC; // 
            public const nint m_flRadius = 0x18; // 
            public const nint m_flMaxFraction = 0x1C; // 
            public const nint m_flScale = 0x20; // 
            public const nint m_pHull = 0x28; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRigidColliderIndices_t {
            public const nint m_nTaperedCapsuleRigidIndex = 0x0; // 
            public const nint m_nSphereRigidIndex = 0x2; // 
            public const nint m_nBoxRigidIndex = 0x4; // 
            public const nint m_nSDFRigidIndex = 0x6; // 
            public const nint m_nCollisionPlaneIndex = 0x8; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCollisionPlane_t {
            public const nint nCtrlParent = 0x0; // 
            public const nint nChildNode = 0x2; // 
            public const nint m_Plane = 0x4; // 
            public const nint flStrength = 0x14; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeStiffHingeBuild_t {
            public const nint flMaxAngle = 0x0; // 
            public const nint flStrength = 0x4; // 
            public const nint flMotionBias = 0x8; // 
            public const nint nNode = 0x14; // 
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBoxRigid_t {
            public const nint tmFrame2 = 0x0; // 
            public const nint nNode = 0x20; // 
            public const nint nCollisionMask = 0x22; // 
            public const nint vSize = 0x24; // 
            public const nint nVertexMapIndex = 0x30; // 
            public const nint nFlags = 0x32; // 
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeMorphLayerDepr_t {
            public const nint m_Name = 0x0; // 
            public const nint m_nNameHash = 0x8; // 
            public const nint m_Nodes = 0x10; // 
            public const nint m_InitPos = 0x28; // 
            public const nint m_Gravity = 0x40; // 
            public const nint m_GoalStrength = 0x58; // 
            public const nint m_GoalDamping = 0x70; // 
            public const nint m_nFlags = 0x88; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOffset_t {
            public const nint vOffset = 0x0; // 
            public const nint nCtrlParent = 0xC; // 
            public const nint nCtrlChild = 0xE; // 
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
            public const nint nNode = 0x0; // 
            public const nint nDummy = 0x2; // 
            public const nint nNodeX0 = 0x8; // 
            public const nint nNodeX1 = 0xA; // 
            public const nint nNodeY0 = 0xC; // 
            public const nint nNodeY1 = 0xE; // 
            public const nint qAdjust = 0x10; // 
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeVertexMapBuild_t {
            public const nint m_VertexMapName = 0x0; // 
            public const nint m_nNameHash = 0x8; // 
            public const nint m_Color = 0xC; // 
            public const nint m_flVolumetricSolveStrength = 0x10; // 
            public const nint m_nScaleSourceNode = 0x14; // 
            public const nint m_Weights = 0x18; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeVertexMapBuildArray {
            public const nint m_Array = 0x0; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTri_t {
            public const nint nNode = 0x0; // 
            public const nint w1 = 0x8; // 
            public const nint w2 = 0xC; // 
            public const nint v1x = 0x10; // 
            public const nint v2 = 0x14; // 
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHull_t {
            public const nint m_vCentroid = 0x0; // 
            public const nint m_flMaxAngularRadius = 0xC; // 
            public const nint m_Bounds = 0x10; // 
            public const nint m_vOrthographicAreas = 0x28; // 
            public const nint m_MassProperties = 0x34; // 
            public const nint m_flVolume = 0x64; // 
            public const nint m_flSurfaceArea = 0x68; // 
            public const nint m_Vertices = 0x70; // 
            public const nint m_VertexPositions = 0x88; // 
            public const nint m_Edges = 0xA0; // 
            public const nint m_Faces = 0xB8; // 
            public const nint m_FacePlanes = 0xD0; // 
            public const nint m_nFlags = 0xE8; // 
            public const nint m_pRegionSVM = 0xF0; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CovMatrix3 {
            public const nint m_vDiag = 0x0; // 
            public const nint m_flXY = 0xC; // 
            public const nint m_flXZ = 0x10; // 
            public const nint m_flYZ = 0x14; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnVertex_t {
            public const nint m_nEdge = 0x0; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class Dop26_t {
            public const nint m_flSupport = 0x0; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnFace_t {
            public const nint m_nEdge = 0x0; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOsOffset_t {
            public const nint nCtrlParent = 0x0; // 
            public const nint nCtrlChild = 0x2; // 
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAntiTunnelProbe_t {
            public const nint flWeight = 0x0; // 
            public const nint nFlags = 0x4; // 
            public const nint nProbeNode = 0x8; // 
            public const nint nCount = 0xA; // 
            public const nint nBegin = 0xC; // 
            public const nint flActivationDistance = 0x10; // 
            public const nint flCurvatureRadius = 0x14; // 
            public const nint flBias = 0x18; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSourceEdge_t {
            public const nint nNode = 0x0; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTwistConstraint_t {
            public const nint nNodeOrient = 0x0; // 
            public const nint nNodeEnd = 0x2; // 
            public const nint flTwistRelax = 0x4; // 
            public const nint flSwingRelax = 0x8; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeWindBase_t {
            public const nint nNodeX0 = 0x0; // 
            public const nint nNodeX1 = 0x2; // 
            public const nint nNodeY0 = 0x4; // 
            public const nint nNodeY1 = 0x6; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAxialEdgeBend_t {
            public const nint te = 0x0; // 
            public const nint tv = 0x4; // 
            public const nint flDist = 0x8; // 
            public const nint flWeight = 0xC; // 
            public const nint nNode = 0x1C; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourCovMatrices3 {
            public const nint m_vDiag = 0x0; // 
            public const nint m_flXY = 0x30; // 
            public const nint m_flXZ = 0x40; // 
            public const nint m_flYZ = 0x50; // 
        }
        // Parent: None
        // Field count: 5
        public static class constraint_breakableparams_t {
            public const nint strength = 0x0; // 
            public const nint forceLimit = 0x4; // 
            public const nint torqueLimit = 0x8; // 
            public const nint bodyMassScale = 0xC; // 
            public const nint isActive = 0x14; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSphereRigid_t {
            public const nint vSphere = 0x0; // 
            public const nint nNode = 0x10; // 
            public const nint nCollisionMask = 0x12; // 
            public const nint nVertexMapIndex = 0x14; // 
            public const nint nFlags = 0x16; // 
        }
        // Parent: FeTaperedCapsuleRigid_t
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildTaperedCapsuleRigid_t {
            public const nint m_nPriority = 0x30; // 
            public const nint m_nVertexMapHash = 0x34; // 
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSoftParent_t {
            public const nint nParent = 0x0; // 
            public const nint flAlpha = 0x4; // 
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnShapeDesc_t {
            public const nint m_nCollisionAttributeIndex = 0x0; // 
            public const nint m_nSurfacePropertyIndex = 0x4; // 
            public const nint m_UserFriendlyName = 0x8; // 
            public const nint m_bUserFriendlyNameSealed = 0x10; // 
            public const nint m_bUserFriendlyNameLong = 0x11; // 
            public const nint m_nToolMaterialHash = 0x14; // 
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTreeChildren_t {
            public const nint nChild = 0x0; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRodConstraint_t {
            public const nint nNode = 0x0; // 
            public const nint flMaxDist = 0x4; // 
            public const nint flMinDist = 0x8; // 
            public const nint flWeight0 = 0xC; // 
            public const nint flRelaxationFactor = 0x10; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitWeight_t {
            public const nint flWeight = 0x0; // 
            public const nint nNode = 0x4; // 
            public const nint nDummy = 0x6; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHalfEdge_t {
            public const nint m_nNext = 0x0; // 
            public const nint m_nTwin = 0x1; // 
            public const nint m_nOrigin = 0x2; // 
            public const nint m_nFace = 0x3; // 
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdTri_t {
            public const nint nNode = 0x0; // 
            public const nint w1 = 0x30; // 
            public const nint w2 = 0x40; // 
            public const nint v1x = 0x50; // 
            public const nint v2 = 0x60; // 
        }
        // Parent: None
        // Field count: 1
        public static class VertexPositionColor_t {
            public const nint m_vPosition = 0x0; // 
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitInfluence_t {
            public const nint nVertexNode = 0x0; // 
            public const nint flWeight = 0x4; // 
            public const nint nMatrixNode = 0x8; // 
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeHingeLimitBuild_t {
            public const nint nNode = 0x0; // 
            public const nint nFlags = 0xC; // 
            public const nint flLimitCW = 0x10; // 
            public const nint flLimitCCW = 0x14; // 
        }
    }
}
