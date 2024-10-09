// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-09 00:40:16.266688100 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: vphysics2.dll
        // Class count: 94
        // Enum count: 2
        namespace vphysics2_dll {
            // Alignment: 4
            // Member count: 3
            enum class JointMotion_t : uint32_t {
                JOINT_MOTION_FREE = 0x0,
                JOINT_MOTION_LOCKED = 0x1,
                JOINT_MOTION_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class JointAxis_t : uint32_t {
                JOINT_AXIS_X = 0x0,
                JOINT_AXIS_Y = 0x1,
                JOINT_AXIS_Z = 0x2,
                JOINT_AXIS_COUNT = 0x3
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSoftbodySpring_t {
                constexpr std::ptrdiff_t m_nParticle = 0x0; // 
                constexpr std::ptrdiff_t m_flLength = 0x4; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSoftbodyParticle_t {
                constexpr std::ptrdiff_t m_flMassInv = 0x0; // 
            }
            // Parent: RnShapeDesc_t
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHullDesc_t {
                constexpr std::ptrdiff_t m_Hull = 0x18; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSoftbodyCapsule_t {
                constexpr std::ptrdiff_t m_vCenter = 0x0; // 
                constexpr std::ptrdiff_t m_flRadius = 0x18; // 
                constexpr std::ptrdiff_t m_nParticle = 0x1C; // 
            }
            // Parent: RnShapeDesc_t
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnCapsuleDesc_t {
                constexpr std::ptrdiff_t m_Capsule = 0x18; // 
            }
            // Parent: RnShapeDesc_t
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnSphereDesc_t {
                constexpr std::ptrdiff_t m_Sphere = 0x18; // 
            }
            // Parent: RnShapeDesc_t
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnMeshDesc_t {
                constexpr std::ptrdiff_t m_Mesh = 0x18; // 
            }
            // Parent: None
            // Field count: 106
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysFeModelDesc_t {
                constexpr std::ptrdiff_t m_CtrlHash = 0x0; // 
                constexpr std::ptrdiff_t m_CtrlName = 0x18; // 
                constexpr std::ptrdiff_t m_nStaticNodeFlags = 0x30; // 
                constexpr std::ptrdiff_t m_nDynamicNodeFlags = 0x34; // 
                constexpr std::ptrdiff_t m_flLocalForce = 0x38; // 
                constexpr std::ptrdiff_t m_flLocalRotation = 0x3C; // 
                constexpr std::ptrdiff_t m_nNodeCount = 0x40; // 
                constexpr std::ptrdiff_t m_nStaticNodes = 0x42; // 
                constexpr std::ptrdiff_t m_nRotLockStaticNodes = 0x44; // 
                constexpr std::ptrdiff_t m_nFirstPositionDrivenNode = 0x46; // 
                constexpr std::ptrdiff_t m_nSimdTriCount1 = 0x48; // 
                constexpr std::ptrdiff_t m_nSimdTriCount2 = 0x4A; // 
                constexpr std::ptrdiff_t m_nSimdQuadCount1 = 0x4C; // 
                constexpr std::ptrdiff_t m_nSimdQuadCount2 = 0x4E; // 
                constexpr std::ptrdiff_t m_nQuadCount1 = 0x50; // 
                constexpr std::ptrdiff_t m_nQuadCount2 = 0x52; // 
                constexpr std::ptrdiff_t m_nTreeDepth = 0x54; // 
                constexpr std::ptrdiff_t m_nNodeBaseJiggleboneDependsCount = 0x56; // 
                constexpr std::ptrdiff_t m_nRopeCount = 0x58; // 
                constexpr std::ptrdiff_t m_Ropes = 0x60; // 
                constexpr std::ptrdiff_t m_NodeBases = 0x78; // 
                constexpr std::ptrdiff_t m_SimdNodeBases = 0x90; // 
                constexpr std::ptrdiff_t m_Quads = 0xA8; // 
                constexpr std::ptrdiff_t m_SimdQuads = 0xC0; // 
                constexpr std::ptrdiff_t m_SimdTris = 0xD8; // 
                constexpr std::ptrdiff_t m_SimdRods = 0xF0; // CUtlVector<FeSimdRodConstraint_t>
                constexpr std::ptrdiff_t m_SimdRodsAnim = 0x108; // CUtlVector<FeSimdRodConstraintAnim_t>
                constexpr std::ptrdiff_t m_InitPose = 0x120; // 
                constexpr std::ptrdiff_t m_Rods = 0x138; // 
                constexpr std::ptrdiff_t m_Twists = 0x150; // CUtlVector<FeTwistConstraint_t>
                constexpr std::ptrdiff_t m_HingeLimits = 0x168; // 
                constexpr std::ptrdiff_t m_AntiTunnelProbes = 0x180; // CUtlVector<FeAntiTunnelProbe_t>
                constexpr std::ptrdiff_t m_AntiTunnelTargetNodes = 0x198; // 
                constexpr std::ptrdiff_t m_AxialEdges = 0x1B0; // 
                constexpr std::ptrdiff_t m_NodeInvMasses = 0x1C8; // 
                constexpr std::ptrdiff_t m_CtrlOffsets = 0x1E0; // 
                constexpr std::ptrdiff_t m_CtrlOsOffsets = 0x1F8; // 
                constexpr std::ptrdiff_t m_FollowNodes = 0x210; // 
                constexpr std::ptrdiff_t m_CollisionPlanes = 0x228; // CUtlVector<FeCollisionPlane_t>
                constexpr std::ptrdiff_t m_NodeIntegrator = 0x240; // CUtlVector<FeNodeIntegrator_t>
                constexpr std::ptrdiff_t m_SpringIntegrator = 0x258; // CUtlVector<FeSpringIntegrator_t>
                constexpr std::ptrdiff_t m_SimdSpringIntegrator = 0x270; // CUtlVector<FeSimdSpringIntegrator_t>
                constexpr std::ptrdiff_t m_WorldCollisionParams = 0x288; // CUtlVector<FeWorldCollisionParams_t>
                constexpr std::ptrdiff_t m_LegacyStretchForce = 0x2A0; // 
                constexpr std::ptrdiff_t m_NodeCollisionRadii = 0x2B8; // 
                constexpr std::ptrdiff_t m_DynNodeFriction = 0x2D0; // 
                constexpr std::ptrdiff_t m_LocalRotation = 0x2E8; // 
                constexpr std::ptrdiff_t m_LocalForce = 0x300; // 
                constexpr std::ptrdiff_t m_TaperedCapsuleStretches = 0x318; // CUtlVector<FeTaperedCapsuleStretch_t>
                constexpr std::ptrdiff_t m_TaperedCapsuleRigids = 0x330; // CUtlVector<FeTaperedCapsuleRigid_t>
                constexpr std::ptrdiff_t m_SphereRigids = 0x348; // 
                constexpr std::ptrdiff_t m_WorldCollisionNodes = 0x360; // 
                constexpr std::ptrdiff_t m_TreeParents = 0x378; // 
                constexpr std::ptrdiff_t m_TreeCollisionMasks = 0x390; // 
                constexpr std::ptrdiff_t m_TreeChildren = 0x3A8; // 
                constexpr std::ptrdiff_t m_FreeNodes = 0x3C0; // 
                constexpr std::ptrdiff_t m_FitMatrices = 0x3D8; // 
                constexpr std::ptrdiff_t m_FitWeights = 0x3F0; // 
                constexpr std::ptrdiff_t m_ReverseOffsets = 0x408; // CUtlVector<FeNodeReverseOffset_t>
                constexpr std::ptrdiff_t m_AnimStrayRadii = 0x420; // CUtlVector<FeAnimStrayRadius_t>
                constexpr std::ptrdiff_t m_SimdAnimStrayRadii = 0x438; // CUtlVector<FeSimdAnimStrayRadius_t>
                constexpr std::ptrdiff_t m_KelagerBends = 0x450; // 
                constexpr std::ptrdiff_t m_CtrlSoftOffsets = 0x468; // CUtlVector<FeCtrlSoftOffset_t>
                constexpr std::ptrdiff_t m_JiggleBones = 0x480; // CUtlVector<CFeIndexedJiggleBone>
                constexpr std::ptrdiff_t m_SourceElems = 0x498; // 
                constexpr std::ptrdiff_t m_GoalDampedSpringIntegrators = 0x4B0; // 
                constexpr std::ptrdiff_t m_Tris = 0x4C8; // 
                constexpr std::ptrdiff_t m_nTriCount1 = 0x4E0; // 
                constexpr std::ptrdiff_t m_nTriCount2 = 0x4E2; // 
                constexpr std::ptrdiff_t m_nReservedUint8 = 0x4E4; // 
                constexpr std::ptrdiff_t m_nExtraPressureIterations = 0x4E5; // 
                constexpr std::ptrdiff_t m_nExtraGoalIterations = 0x4E6; // 
                constexpr std::ptrdiff_t m_nExtraIterations = 0x4E7; // 
                constexpr std::ptrdiff_t m_SDFRigids = 0x4E8; // 
                constexpr std::ptrdiff_t m_BoxRigids = 0x500; // 
                constexpr std::ptrdiff_t m_DynNodeVertexSet = 0x518; // 
                constexpr std::ptrdiff_t m_VertexSetNames = 0x530; // 
                constexpr std::ptrdiff_t m_RigidColliderPriorities = 0x548; // 
                constexpr std::ptrdiff_t m_MorphLayers = 0x560; // 
                constexpr std::ptrdiff_t m_MorphSetData = 0x578; // 
                constexpr std::ptrdiff_t m_VertexMaps = 0x590; // 
                constexpr std::ptrdiff_t m_VertexMapValues = 0x5A8; // 
                constexpr std::ptrdiff_t m_Effects = 0x5C0; // 
                constexpr std::ptrdiff_t m_LockToParent = 0x5D8; // 
                constexpr std::ptrdiff_t m_LockToGoal = 0x5F0; // 
                constexpr std::ptrdiff_t m_SkelParents = 0x608; // 
                constexpr std::ptrdiff_t m_DynNodeWindBases = 0x620; // 
                constexpr std::ptrdiff_t m_flInternalPressure = 0x638; // 
                constexpr std::ptrdiff_t m_flDefaultTimeDilation = 0x63C; // 
                constexpr std::ptrdiff_t m_flWindage = 0x640; // 
                constexpr std::ptrdiff_t m_flWindDrag = 0x644; // 
                constexpr std::ptrdiff_t m_flDefaultSurfaceStretch = 0x648; // 
                constexpr std::ptrdiff_t m_flDefaultThreadStretch = 0x64C; // 
                constexpr std::ptrdiff_t m_flDefaultGravityScale = 0x650; // 
                constexpr std::ptrdiff_t m_flDefaultVelAirDrag = 0x654; // 
                constexpr std::ptrdiff_t m_flDefaultExpAirDrag = 0x658; // 
                constexpr std::ptrdiff_t m_flDefaultVelQuadAirDrag = 0x65C; // 
                constexpr std::ptrdiff_t m_flDefaultExpQuadAirDrag = 0x660; // 
                constexpr std::ptrdiff_t m_flRodVelocitySmoothRate = 0x664; // 
                constexpr std::ptrdiff_t m_flQuadVelocitySmoothRate = 0x668; // 
                constexpr std::ptrdiff_t m_flAddWorldCollisionRadius = 0x66C; // 
                constexpr std::ptrdiff_t m_flDefaultVolumetricSolveAmount = 0x670; // 
                constexpr std::ptrdiff_t m_flMotionSmoothCDT = 0x674; // 
                constexpr std::ptrdiff_t m_flLocalDrag1 = 0x678; // 
                constexpr std::ptrdiff_t m_nRodVelocitySmoothIterations = 0x67C; // 
                constexpr std::ptrdiff_t m_nQuadVelocitySmoothIterations = 0x67E; // 
            }
            // Parent: RnBodyDesc_t
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace vphysics_save_cphysicsbody_t {
                constexpr std::ptrdiff_t m_nOldPointer = 0xD0; // 
            }
            // Parent: FeBoxRigid_t
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildBoxRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x40; // 
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x44; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeIndexedJiggleBone {
                constexpr std::ptrdiff_t m_nNode = 0x0; // 
                constexpr std::ptrdiff_t m_nJiggleParent = 0x4; // 
                constexpr std::ptrdiff_t m_jiggleBone = 0x8; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBandBendLimit_t {
                constexpr std::ptrdiff_t flDistMin = 0x0; // 
                constexpr std::ptrdiff_t flDistMax = 0x4; // 
                constexpr std::ptrdiff_t nNode = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTaperedCapsuleStretch_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t nCollisionMask = 0x4; // 
                constexpr std::ptrdiff_t nDummy = 0x6; // 
                constexpr std::ptrdiff_t flRadius = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            namespace constraint_axislimit_t {
                constexpr std::ptrdiff_t flMinRotation = 0x0; // 
                constexpr std::ptrdiff_t flMaxRotation = 0x4; // 
                constexpr std::ptrdiff_t flMotorTargetAngSpeed = 0x8; // 
                constexpr std::ptrdiff_t flMotorMaxTorque = 0xC; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdRodConstraintAnim_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t f4Weight0 = 0x10; // 
                constexpr std::ptrdiff_t f4RelaxationFactor = 0x20; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdRodConstraint_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t f4MaxDist = 0x10; // 
                constexpr std::ptrdiff_t f4MinDist = 0x20; // 
                constexpr std::ptrdiff_t f4Weight0 = 0x30; // 
                constexpr std::ptrdiff_t f4RelaxationFactor = 0x40; // 
            }
            // Parent: None
            // Field count: 4
            namespace constraint_hingeparams_t {
                constexpr std::ptrdiff_t worldPosition = 0x0; // 
                constexpr std::ptrdiff_t worldAxisDirection = 0xC; // 
                constexpr std::ptrdiff_t hingeAxis = 0x18; // 
                constexpr std::ptrdiff_t constraint = 0x28; // 
            }
            // Parent: FeSphereRigid_t
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildSphereRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x20; // 
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x24; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdAnimStrayRadius_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t flMaxDist = 0x10; // 
                constexpr std::ptrdiff_t flRelaxationFactor = 0x20; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnTriangle_t {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeProxyVertexMap_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // 
                constexpr std::ptrdiff_t m_flWeight = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeIntegrator_t {
                constexpr std::ptrdiff_t flPointDamping = 0x0; // 
                constexpr std::ptrdiff_t flAnimationForceAttraction = 0x4; // 
                constexpr std::ptrdiff_t flAnimationVertexAttraction = 0x8; // 
                constexpr std::ptrdiff_t flGravity = 0xC; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnCapsule_t {
                constexpr std::ptrdiff_t m_vCenter = 0x0; // 
                constexpr std::ptrdiff_t m_flRadius = 0x18; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeNamedJiggleBone {
                constexpr std::ptrdiff_t m_strParentBone = 0x0; // 
                constexpr std::ptrdiff_t m_transform = 0x10; // 
                constexpr std::ptrdiff_t m_nJiggleParent = 0x30; // 
                constexpr std::ptrdiff_t m_jiggleBone = 0x34; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAntiTunnelProbeBuild_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // 
                constexpr std::ptrdiff_t flActivationDistance = 0x4; // 
                constexpr std::ptrdiff_t flBias = 0x8; // 
                constexpr std::ptrdiff_t flCurvature = 0xC; // 
                constexpr std::ptrdiff_t nFlags = 0x10; // 
                constexpr std::ptrdiff_t nProbeNode = 0x14; // 
                constexpr std::ptrdiff_t targetNodes = 0x18; // 
            }
            // Parent: None
            // Field count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnBodyDesc_t {
                constexpr std::ptrdiff_t m_sDebugName = 0x0; // 
                constexpr std::ptrdiff_t m_vPosition = 0x8; // 
                constexpr std::ptrdiff_t m_qOrientation = 0x14; // 
                constexpr std::ptrdiff_t m_vLinearVelocity = 0x24; // 
                constexpr std::ptrdiff_t m_vAngularVelocity = 0x30; // 
                constexpr std::ptrdiff_t m_vLocalMassCenter = 0x3C; // 
                constexpr std::ptrdiff_t m_LocalInertiaInv = 0x48; // 
                constexpr std::ptrdiff_t m_flMassInv = 0x6C; // 
                constexpr std::ptrdiff_t m_flGameMass = 0x70; // 
                constexpr std::ptrdiff_t m_flInertiaScaleInv = 0x74; // 
                constexpr std::ptrdiff_t m_flLinearDamping = 0x78; // 
                constexpr std::ptrdiff_t m_flAngularDamping = 0x7C; // 
                constexpr std::ptrdiff_t m_flLinearDrag = 0x80; // 
                constexpr std::ptrdiff_t m_flAngularDrag = 0x84; // 
                constexpr std::ptrdiff_t m_flLinearBuoyancyDrag = 0x88; // 
                constexpr std::ptrdiff_t m_flAngularBuoyancyDrag = 0x8C; // 
                constexpr std::ptrdiff_t m_vLastAwakeForceAccum = 0x90; // 
                constexpr std::ptrdiff_t m_vLastAwakeTorqueAccum = 0x9C; // 
                constexpr std::ptrdiff_t m_flBuoyancyFactor = 0xA8; // 
                constexpr std::ptrdiff_t m_flGravityScale = 0xAC; // 
                constexpr std::ptrdiff_t m_flTimeScale = 0xB0; // 
                constexpr std::ptrdiff_t m_nBodyType = 0xB4; // 
                constexpr std::ptrdiff_t m_nGameIndex = 0xB8; // 
                constexpr std::ptrdiff_t m_nGameFlags = 0xBC; // 
                constexpr std::ptrdiff_t m_nMinVelocityIterations = 0xC0; // 
                constexpr std::ptrdiff_t m_nMinPositionIterations = 0xC1; // 
                constexpr std::ptrdiff_t m_nMassPriority = 0xC2; // 
                constexpr std::ptrdiff_t m_bEnabled = 0xC3; // 
                constexpr std::ptrdiff_t m_bSleeping = 0xC4; // 
                constexpr std::ptrdiff_t m_bIsContinuousEnabled = 0xC5; // 
                constexpr std::ptrdiff_t m_bDragEnabled = 0xC6; // 
                constexpr std::ptrdiff_t m_bBuoyancyDragEnabled = 0xC7; // 
                constexpr std::ptrdiff_t m_bGravityDisabled = 0xC8; // 
                constexpr std::ptrdiff_t m_bSpeculativeEnabled = 0xC9; // 
                constexpr std::ptrdiff_t m_bHasShadowController = 0xCA; // 
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OldFeEdge_t {
                constexpr std::ptrdiff_t m_flK = 0x0; // 
                constexpr std::ptrdiff_t invA = 0xC; // 
                constexpr std::ptrdiff_t t = 0x10; // 
                constexpr std::ptrdiff_t flThetaRelaxed = 0x14; // 
                constexpr std::ptrdiff_t flThetaFactor = 0x18; // 
                constexpr std::ptrdiff_t c01 = 0x1C; // 
                constexpr std::ptrdiff_t c02 = 0x20; // 
                constexpr std::ptrdiff_t c03 = 0x24; // 
                constexpr std::ptrdiff_t c04 = 0x28; // 
                constexpr std::ptrdiff_t flAxialModelDist = 0x2C; // 
                constexpr std::ptrdiff_t flAxialModelWeights = 0x30; // 
                constexpr std::ptrdiff_t m_nNode = 0x40; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFollowNode_t {
                constexpr std::ptrdiff_t nParentNode = 0x0; // 
                constexpr std::ptrdiff_t nChildNode = 0x2; // 
                constexpr std::ptrdiff_t flWeight = 0x4; // 
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnMesh_t {
                constexpr std::ptrdiff_t m_vMin = 0x0; // 
                constexpr std::ptrdiff_t m_vMax = 0xC; // 
                constexpr std::ptrdiff_t m_Nodes = 0x18; // 
                constexpr std::ptrdiff_t m_Vertices = 0x30; // 
                constexpr std::ptrdiff_t m_Triangles = 0x48; // 
                constexpr std::ptrdiff_t m_Wings = 0x60; // 
                constexpr std::ptrdiff_t m_Materials = 0x78; // 
                constexpr std::ptrdiff_t m_vOrthographicAreas = 0x90; // 
                constexpr std::ptrdiff_t m_nFlags = 0x9C; // 
                constexpr std::ptrdiff_t m_nDebugFlags = 0xA0; // 
            }
            // Parent: None
            // Field count: 2
            namespace VertexPositionNormal_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // 
                constexpr std::ptrdiff_t m_vNormal = 0xC; // 
            }
            // Parent: FeSDFRigid_t
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildSDFRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x50; // 
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x54; // 
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnBlendVertex_t {
                constexpr std::ptrdiff_t m_nWeight0 = 0x0; // 
                constexpr std::ptrdiff_t m_nIndex0 = 0x2; // 
                constexpr std::ptrdiff_t m_nWeight1 = 0x4; // 
                constexpr std::ptrdiff_t m_nIndex1 = 0x6; // 
                constexpr std::ptrdiff_t m_nWeight2 = 0x8; // 
                constexpr std::ptrdiff_t m_nIndex2 = 0xA; // 
                constexpr std::ptrdiff_t m_nFlags = 0xC; // 
                constexpr std::ptrdiff_t m_nTargetIndex = 0xE; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeMorphLayer {
                constexpr std::ptrdiff_t m_Name = 0x0; // 
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // 
                constexpr std::ptrdiff_t m_Nodes = 0x10; // 
                constexpr std::ptrdiff_t m_InitPos = 0x28; // 
                constexpr std::ptrdiff_t m_Gravity = 0x40; // 
                constexpr std::ptrdiff_t m_GoalStrength = 0x58; // 
                constexpr std::ptrdiff_t m_GoalDamping = 0x70; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlSoftOffset_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // 
                constexpr std::ptrdiff_t nCtrlChild = 0x2; // 
                constexpr std::ptrdiff_t vOffset = 0x4; // 
                constexpr std::ptrdiff_t flAlpha = 0x10; // 
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeVertexMapDesc_t {
                constexpr std::ptrdiff_t sName = 0x0; // 
                constexpr std::ptrdiff_t nNameHash = 0x8; // 
                constexpr std::ptrdiff_t nColor = 0xC; // 
                constexpr std::ptrdiff_t nFlags = 0x10; // 
                constexpr std::ptrdiff_t nVertexBase = 0x14; // 
                constexpr std::ptrdiff_t nVertexCount = 0x16; // 
                constexpr std::ptrdiff_t nMapOffset = 0x18; // 
                constexpr std::ptrdiff_t nNodeListOffset = 0x1C; // 
                constexpr std::ptrdiff_t vCenterOfMass = 0x20; // 
                constexpr std::ptrdiff_t flVolumetricSolveStrength = 0x2C; // 
                constexpr std::ptrdiff_t nScaleSourceNode = 0x30; // 
                constexpr std::ptrdiff_t nNodeListCount = 0x32; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTaperedCapsuleRigid_t {
                constexpr std::ptrdiff_t vSphere = 0x0; // 
                constexpr std::ptrdiff_t nNode = 0x20; // 
                constexpr std::ptrdiff_t nCollisionMask = 0x22; // 
                constexpr std::ptrdiff_t nVertexMapIndex = 0x24; // 
                constexpr std::ptrdiff_t nFlags = 0x26; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAnimStrayRadius_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t flMaxDist = 0x4; // 
                constexpr std::ptrdiff_t flRelaxationFactor = 0x8; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeEdgeDesc_t {
                constexpr std::ptrdiff_t nEdge = 0x0; // 
                constexpr std::ptrdiff_t nSide = 0x4; // 
                constexpr std::ptrdiff_t nVirtElem = 0xC; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeReverseOffset_t {
                constexpr std::ptrdiff_t vOffset = 0x0; // 
                constexpr std::ptrdiff_t nBoneCtrl = 0xC; // 
                constexpr std::ptrdiff_t nTargetNode = 0xE; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnPlane_t {
                constexpr std::ptrdiff_t m_vNormal = 0x0; // 
                constexpr std::ptrdiff_t m_flOffset = 0xC; // 
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSDFRigid_t {
                constexpr std::ptrdiff_t vLocalMin = 0x0; // 
                constexpr std::ptrdiff_t vLocalMax = 0xC; // 
                constexpr std::ptrdiff_t flBounciness = 0x18; // 
                constexpr std::ptrdiff_t nNode = 0x1C; // 
                constexpr std::ptrdiff_t nCollisionMask = 0x1E; // 
                constexpr std::ptrdiff_t nVertexMapIndex = 0x20; // 
                constexpr std::ptrdiff_t nFlags = 0x22; // 
                constexpr std::ptrdiff_t m_Distances = 0x28; // 
                constexpr std::ptrdiff_t m_nWidth = 0x40; // 
                constexpr std::ptrdiff_t m_nHeight = 0x44; // 
                constexpr std::ptrdiff_t m_nDepth = 0x48; // 
            }
            // Parent: None
            // Field count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeJiggleBone {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // 
                constexpr std::ptrdiff_t m_flLength = 0x4; // 
                constexpr std::ptrdiff_t m_flTipMass = 0x8; // 
                constexpr std::ptrdiff_t m_flYawStiffness = 0xC; // 
                constexpr std::ptrdiff_t m_flYawDamping = 0x10; // 
                constexpr std::ptrdiff_t m_flPitchStiffness = 0x14; // 
                constexpr std::ptrdiff_t m_flPitchDamping = 0x18; // 
                constexpr std::ptrdiff_t m_flAlongStiffness = 0x1C; // 
                constexpr std::ptrdiff_t m_flAlongDamping = 0x20; // 
                constexpr std::ptrdiff_t m_flAngleLimit = 0x24; // 
                constexpr std::ptrdiff_t m_flMinYaw = 0x28; // 
                constexpr std::ptrdiff_t m_flMaxYaw = 0x2C; // 
                constexpr std::ptrdiff_t m_flYawFriction = 0x30; // 
                constexpr std::ptrdiff_t m_flYawBounce = 0x34; // 
                constexpr std::ptrdiff_t m_flMinPitch = 0x38; // 
                constexpr std::ptrdiff_t m_flMaxPitch = 0x3C; // 
                constexpr std::ptrdiff_t m_flPitchFriction = 0x40; // 
                constexpr std::ptrdiff_t m_flPitchBounce = 0x44; // 
                constexpr std::ptrdiff_t m_flBaseMass = 0x48; // 
                constexpr std::ptrdiff_t m_flBaseStiffness = 0x4C; // 
                constexpr std::ptrdiff_t m_flBaseDamping = 0x50; // 
                constexpr std::ptrdiff_t m_flBaseMinLeft = 0x54; // 
                constexpr std::ptrdiff_t m_flBaseMaxLeft = 0x58; // 
                constexpr std::ptrdiff_t m_flBaseLeftFriction = 0x5C; // 
                constexpr std::ptrdiff_t m_flBaseMinUp = 0x60; // 
                constexpr std::ptrdiff_t m_flBaseMaxUp = 0x64; // 
                constexpr std::ptrdiff_t m_flBaseUpFriction = 0x68; // 
                constexpr std::ptrdiff_t m_flBaseMinForward = 0x6C; // 
                constexpr std::ptrdiff_t m_flBaseMaxForward = 0x70; // 
                constexpr std::ptrdiff_t m_flBaseForwardFriction = 0x74; // 
                constexpr std::ptrdiff_t m_flRadius0 = 0x78; // 
                constexpr std::ptrdiff_t m_flRadius1 = 0x7C; // 
                constexpr std::ptrdiff_t m_vPoint0 = 0x80; // 
                constexpr std::ptrdiff_t m_vPoint1 = 0x8C; // 
                constexpr std::ptrdiff_t m_nCollisionMask = 0x98; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRegionSVM {
                constexpr std::ptrdiff_t m_Planes = 0x0; // 
                constexpr std::ptrdiff_t m_Nodes = 0x18; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeWorldCollisionParams_t {
                constexpr std::ptrdiff_t flWorldFriction = 0x0; // 
                constexpr std::ptrdiff_t flGroundFriction = 0x4; // 
                constexpr std::ptrdiff_t nListBegin = 0x8; // 
                constexpr std::ptrdiff_t nListEnd = 0xA; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnNode_t {
                constexpr std::ptrdiff_t m_vMin = 0x0; // 
                constexpr std::ptrdiff_t m_nChildren = 0xC; // 
                constexpr std::ptrdiff_t m_vMax = 0x10; // 
                constexpr std::ptrdiff_t m_nTriangleOffset = 0x1C; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitMatrix_t {
                constexpr std::ptrdiff_t bone = 0x0; // 
                constexpr std::ptrdiff_t vCenter = 0x20; // 
                constexpr std::ptrdiff_t nEnd = 0x2C; // 
                constexpr std::ptrdiff_t nNode = 0x2E; // 
                constexpr std::ptrdiff_t nBeginDynamic = 0x30; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdQuad_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t f4Slack = 0x20; // 
                constexpr std::ptrdiff_t vShape = 0x30; // 
                constexpr std::ptrdiff_t f4Weights = 0xF0; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdSpringIntegrator_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t flSpringRestLength = 0x10; // 
                constexpr std::ptrdiff_t flSpringConstant = 0x20; // 
                constexpr std::ptrdiff_t flSpringDamping = 0x30; // 
                constexpr std::ptrdiff_t flNodeWeight0 = 0x40; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdNodeBase_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t nNodeX0 = 0x8; // 
                constexpr std::ptrdiff_t nNodeX1 = 0x10; // 
                constexpr std::ptrdiff_t nNodeY0 = 0x18; // 
                constexpr std::ptrdiff_t nNodeY1 = 0x20; // 
                constexpr std::ptrdiff_t nDummy = 0x28; // 
                constexpr std::ptrdiff_t qAdjust = 0x30; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeQuad_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t flSlack = 0x8; // 
                constexpr std::ptrdiff_t vShape = 0xC; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeHingeLimit_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t nFlags = 0xC; // 
                constexpr std::ptrdiff_t flWeight4 = 0x10; // 
                constexpr std::ptrdiff_t flWeight5 = 0x14; // 
                constexpr std::ptrdiff_t flAngleCenter = 0x18; // 
                constexpr std::ptrdiff_t flAngleExtents = 0x1C; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnWing_t {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeWeightedNode_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t nWeight = 0x2; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeEffectDesc_t {
                constexpr std::ptrdiff_t sName = 0x0; // 
                constexpr std::ptrdiff_t nNameHash = 0x8; // 
                constexpr std::ptrdiff_t nType = 0xC; // 
                constexpr std::ptrdiff_t m_Params = 0x10; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSpringIntegrator_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t flSpringRestLength = 0x4; // 
                constexpr std::ptrdiff_t flSpringConstant = 0x8; // 
                constexpr std::ptrdiff_t flSpringDamping = 0xC; // 
                constexpr std::ptrdiff_t flNodeWeight0 = 0x10; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FourVectors2D {
                constexpr std::ptrdiff_t x = 0x0; // 
                constexpr std::ptrdiff_t y = 0x10; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeKelagerBend2_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // 
                constexpr std::ptrdiff_t flHeight0 = 0xC; // 
                constexpr std::ptrdiff_t nNode = 0x10; // 
                constexpr std::ptrdiff_t nReserved = 0x16; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CastSphereSATParams_t {
                constexpr std::ptrdiff_t m_vRayStart = 0x0; // 
                constexpr std::ptrdiff_t m_vRayDelta = 0xC; // 
                constexpr std::ptrdiff_t m_flRadius = 0x18; // 
                constexpr std::ptrdiff_t m_flMaxFraction = 0x1C; // 
                constexpr std::ptrdiff_t m_flScale = 0x20; // 
                constexpr std::ptrdiff_t m_pHull = 0x28; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeRigidColliderIndices_t {
                constexpr std::ptrdiff_t m_nTaperedCapsuleRigidIndex = 0x0; // 
                constexpr std::ptrdiff_t m_nSphereRigidIndex = 0x2; // 
                constexpr std::ptrdiff_t m_nBoxRigidIndex = 0x4; // 
                constexpr std::ptrdiff_t m_nSDFRigidIndex = 0x6; // 
                constexpr std::ptrdiff_t m_nCollisionPlaneIndex = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCollisionPlane_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // 
                constexpr std::ptrdiff_t nChildNode = 0x2; // 
                constexpr std::ptrdiff_t m_Plane = 0x4; // 
                constexpr std::ptrdiff_t flStrength = 0x14; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeStiffHingeBuild_t {
                constexpr std::ptrdiff_t flMaxAngle = 0x0; // 
                constexpr std::ptrdiff_t flStrength = 0x4; // 
                constexpr std::ptrdiff_t flMotionBias = 0x8; // 
                constexpr std::ptrdiff_t nNode = 0x14; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBoxRigid_t {
                constexpr std::ptrdiff_t tmFrame2 = 0x0; // 
                constexpr std::ptrdiff_t nNode = 0x20; // 
                constexpr std::ptrdiff_t nCollisionMask = 0x22; // 
                constexpr std::ptrdiff_t vSize = 0x24; // 
                constexpr std::ptrdiff_t nVertexMapIndex = 0x30; // 
                constexpr std::ptrdiff_t nFlags = 0x32; // 
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeMorphLayerDepr_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // 
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // 
                constexpr std::ptrdiff_t m_Nodes = 0x10; // 
                constexpr std::ptrdiff_t m_InitPos = 0x28; // 
                constexpr std::ptrdiff_t m_Gravity = 0x40; // 
                constexpr std::ptrdiff_t m_GoalStrength = 0x58; // 
                constexpr std::ptrdiff_t m_GoalDamping = 0x70; // 
                constexpr std::ptrdiff_t m_nFlags = 0x88; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlOffset_t {
                constexpr std::ptrdiff_t vOffset = 0x0; // 
                constexpr std::ptrdiff_t nCtrlParent = 0xC; // 
                constexpr std::ptrdiff_t nCtrlChild = 0xE; // 
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsPlayerController {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeBase_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t nDummy = 0x2; // 
                constexpr std::ptrdiff_t nNodeX0 = 0x8; // 
                constexpr std::ptrdiff_t nNodeX1 = 0xA; // 
                constexpr std::ptrdiff_t nNodeY0 = 0xC; // 
                constexpr std::ptrdiff_t nNodeY1 = 0xE; // 
                constexpr std::ptrdiff_t qAdjust = 0x10; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeVertexMapBuild_t {
                constexpr std::ptrdiff_t m_VertexMapName = 0x0; // 
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // 
                constexpr std::ptrdiff_t m_Color = 0xC; // 
                constexpr std::ptrdiff_t m_flVolumetricSolveStrength = 0x10; // 
                constexpr std::ptrdiff_t m_nScaleSourceNode = 0x14; // 
                constexpr std::ptrdiff_t m_Weights = 0x18; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFeVertexMapBuildArray {
                constexpr std::ptrdiff_t m_Array = 0x0; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTri_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t w1 = 0x8; // 
                constexpr std::ptrdiff_t w2 = 0xC; // 
                constexpr std::ptrdiff_t v1x = 0x10; // 
                constexpr std::ptrdiff_t v2 = 0x14; // 
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHull_t {
                constexpr std::ptrdiff_t m_vCentroid = 0x0; // 
                constexpr std::ptrdiff_t m_flMaxAngularRadius = 0xC; // 
                constexpr std::ptrdiff_t m_Bounds = 0x10; // 
                constexpr std::ptrdiff_t m_vOrthographicAreas = 0x28; // 
                constexpr std::ptrdiff_t m_MassProperties = 0x34; // 
                constexpr std::ptrdiff_t m_flVolume = 0x64; // 
                constexpr std::ptrdiff_t m_flSurfaceArea = 0x68; // 
                constexpr std::ptrdiff_t m_Vertices = 0x70; // 
                constexpr std::ptrdiff_t m_VertexPositions = 0x88; // 
                constexpr std::ptrdiff_t m_Edges = 0xA0; // 
                constexpr std::ptrdiff_t m_Faces = 0xB8; // 
                constexpr std::ptrdiff_t m_FacePlanes = 0xD0; // 
                constexpr std::ptrdiff_t m_nFlags = 0xE8; // 
                constexpr std::ptrdiff_t m_pRegionSVM = 0xF0; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CovMatrix3 {
                constexpr std::ptrdiff_t m_vDiag = 0x0; // 
                constexpr std::ptrdiff_t m_flXY = 0xC; // 
                constexpr std::ptrdiff_t m_flXZ = 0x10; // 
                constexpr std::ptrdiff_t m_flYZ = 0x14; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnVertex_t {
                constexpr std::ptrdiff_t m_nEdge = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace Dop26_t {
                constexpr std::ptrdiff_t m_flSupport = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnFace_t {
                constexpr std::ptrdiff_t m_nEdge = 0x0; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeCtrlOsOffset_t {
                constexpr std::ptrdiff_t nCtrlParent = 0x0; // 
                constexpr std::ptrdiff_t nCtrlChild = 0x2; // 
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAntiTunnelProbe_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // 
                constexpr std::ptrdiff_t nFlags = 0x4; // 
                constexpr std::ptrdiff_t nProbeNode = 0x8; // 
                constexpr std::ptrdiff_t nCount = 0xA; // 
                constexpr std::ptrdiff_t nBegin = 0xC; // 
                constexpr std::ptrdiff_t flActivationDistance = 0x10; // 
                constexpr std::ptrdiff_t flCurvatureRadius = 0x14; // 
                constexpr std::ptrdiff_t flBias = 0x18; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSourceEdge_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTwistConstraint_t {
                constexpr std::ptrdiff_t nNodeOrient = 0x0; // 
                constexpr std::ptrdiff_t nNodeEnd = 0x2; // 
                constexpr std::ptrdiff_t flTwistRelax = 0x4; // 
                constexpr std::ptrdiff_t flSwingRelax = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeNodeWindBase_t {
                constexpr std::ptrdiff_t nNodeX0 = 0x0; // 
                constexpr std::ptrdiff_t nNodeX1 = 0x2; // 
                constexpr std::ptrdiff_t nNodeY0 = 0x4; // 
                constexpr std::ptrdiff_t nNodeY1 = 0x6; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeAxialEdgeBend_t {
                constexpr std::ptrdiff_t te = 0x0; // 
                constexpr std::ptrdiff_t tv = 0x4; // 
                constexpr std::ptrdiff_t flDist = 0x8; // 
                constexpr std::ptrdiff_t flWeight = 0xC; // 
                constexpr std::ptrdiff_t nNode = 0x1C; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FourCovMatrices3 {
                constexpr std::ptrdiff_t m_vDiag = 0x0; // 
                constexpr std::ptrdiff_t m_flXY = 0x30; // 
                constexpr std::ptrdiff_t m_flXZ = 0x40; // 
                constexpr std::ptrdiff_t m_flYZ = 0x50; // 
            }
            // Parent: None
            // Field count: 5
            namespace constraint_breakableparams_t {
                constexpr std::ptrdiff_t strength = 0x0; // 
                constexpr std::ptrdiff_t forceLimit = 0x4; // 
                constexpr std::ptrdiff_t torqueLimit = 0x8; // 
                constexpr std::ptrdiff_t bodyMassScale = 0xC; // 
                constexpr std::ptrdiff_t isActive = 0x14; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSphereRigid_t {
                constexpr std::ptrdiff_t vSphere = 0x0; // 
                constexpr std::ptrdiff_t nNode = 0x10; // 
                constexpr std::ptrdiff_t nCollisionMask = 0x12; // 
                constexpr std::ptrdiff_t nVertexMapIndex = 0x14; // 
                constexpr std::ptrdiff_t nFlags = 0x16; // 
            }
            // Parent: FeTaperedCapsuleRigid_t
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeBuildTaperedCapsuleRigid_t {
                constexpr std::ptrdiff_t m_nPriority = 0x30; // 
                constexpr std::ptrdiff_t m_nVertexMapHash = 0x34; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSoftParent_t {
                constexpr std::ptrdiff_t nParent = 0x0; // 
                constexpr std::ptrdiff_t flAlpha = 0x4; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnShapeDesc_t {
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x0; // 
                constexpr std::ptrdiff_t m_nSurfacePropertyIndex = 0x4; // 
                constexpr std::ptrdiff_t m_UserFriendlyName = 0x8; // 
                constexpr std::ptrdiff_t m_bUserFriendlyNameSealed = 0x10; // 
                constexpr std::ptrdiff_t m_bUserFriendlyNameLong = 0x11; // 
                constexpr std::ptrdiff_t m_nToolMaterialHash = 0x14; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeTreeChildren_t {
                constexpr std::ptrdiff_t nChild = 0x0; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeRodConstraint_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t flMaxDist = 0x4; // 
                constexpr std::ptrdiff_t flMinDist = 0x8; // 
                constexpr std::ptrdiff_t flWeight0 = 0xC; // 
                constexpr std::ptrdiff_t flRelaxationFactor = 0x10; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitWeight_t {
                constexpr std::ptrdiff_t flWeight = 0x0; // 
                constexpr std::ptrdiff_t nNode = 0x4; // 
                constexpr std::ptrdiff_t nDummy = 0x6; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RnHalfEdge_t {
                constexpr std::ptrdiff_t m_nNext = 0x0; // 
                constexpr std::ptrdiff_t m_nTwin = 0x1; // 
                constexpr std::ptrdiff_t m_nOrigin = 0x2; // 
                constexpr std::ptrdiff_t m_nFace = 0x3; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeSimdTri_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t w1 = 0x30; // 
                constexpr std::ptrdiff_t w2 = 0x40; // 
                constexpr std::ptrdiff_t v1x = 0x50; // 
                constexpr std::ptrdiff_t v2 = 0x60; // 
            }
            // Parent: None
            // Field count: 1
            namespace VertexPositionColor_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeFitInfluence_t {
                constexpr std::ptrdiff_t nVertexNode = 0x0; // 
                constexpr std::ptrdiff_t flWeight = 0x4; // 
                constexpr std::ptrdiff_t nMatrixNode = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FeHingeLimitBuild_t {
                constexpr std::ptrdiff_t nNode = 0x0; // 
                constexpr std::ptrdiff_t nFlags = 0xC; // 
                constexpr std::ptrdiff_t flLimitCW = 0x10; // 
                constexpr std::ptrdiff_t flLimitCCW = 0x14; // 
            }
        }
    }
}
