// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: vphysics2.dll
        // Class count: 97
        // Enum count: 3
        pub mod vphysics2_dll {
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum JointMotion_t {
                JOINT_MOTION_FREE = 0x0,
                JOINT_MOTION_LOCKED = 0x1,
                JOINT_MOTION_COUNT = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum JointAxis_t {
                JOINT_AXIS_X = 0x0,
                JOINT_AXIS_Y = 0x1,
                JOINT_AXIS_Z = 0x2,
                JOINT_AXIS_COUNT = 0x3
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum DynamicContinuousContactBehavior_t {
                DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
                DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
                DYNAMIC_CONTINUOUS_NEVER = 0x2
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSphereDesc_t {
                pub const m_Sphere: usize = 0x18; // SphereBase_t<float32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSoftbodyParticle_t {
                pub const m_flMassInv: usize = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHullDesc_t {
                pub const m_Hull: usize = 0x18; // RnHull_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnCapsuleDesc_t {
                pub const m_Capsule: usize = 0x18; // RnCapsule_t
            }
            // Parent: None
            // Field count: 108
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysFeModelDesc_t {
                pub const m_CtrlHash: usize = 0x0; // CUtlVector<uint32>
                pub const m_CtrlName: usize = 0x18; // CUtlVector<CUtlString>
                pub const m_nStaticNodeFlags: usize = 0x30; // uint32
                pub const m_nDynamicNodeFlags: usize = 0x34; // uint32
                pub const m_flLocalForce: usize = 0x38; // float32
                pub const m_flLocalRotation: usize = 0x3C; // float32
                pub const m_nNodeCount: usize = 0x40; // uint16
                pub const m_nStaticNodes: usize = 0x42; // uint16
                pub const m_nRotLockStaticNodes: usize = 0x44; // uint16
                pub const m_nFirstPositionDrivenNode: usize = 0x46; // uint16
                pub const m_nSimdTriCount1: usize = 0x48; // uint16
                pub const m_nSimdTriCount2: usize = 0x4A; // uint16
                pub const m_nSimdQuadCount1: usize = 0x4C; // uint16
                pub const m_nSimdQuadCount2: usize = 0x4E; // uint16
                pub const m_nQuadCount1: usize = 0x50; // uint16
                pub const m_nQuadCount2: usize = 0x52; // uint16
                pub const m_nTreeDepth: usize = 0x54; // uint16
                pub const m_nNodeBaseJiggleboneDependsCount: usize = 0x56; // uint16
                pub const m_nRopeCount: usize = 0x58; // uint16
                pub const m_Ropes: usize = 0x60; // CUtlVector<uint16>
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
                pub const m_HingeLimits: usize = 0x168; // CUtlVector<FeHingeLimit_t>
                pub const m_AntiTunnelBytecode: usize = 0x180; // CUtlVector<uint32>
                pub const m_DynKinLinks: usize = 0x198; // CUtlVector<FeDynKinLink_t>
                pub const m_AntiTunnelProbes: usize = 0x1B0; // CUtlVector<FeAntiTunnelProbe_t>
                pub const m_AntiTunnelTargetNodes: usize = 0x1C8; // CUtlVector<uint16>
                pub const m_AxialEdges: usize = 0x1E0; // CUtlVector<FeAxialEdgeBend_t>
                pub const m_NodeInvMasses: usize = 0x1F8; // CUtlVector<float32>
                pub const m_CtrlOffsets: usize = 0x210; // CUtlVector<FeCtrlOffset_t>
                pub const m_CtrlOsOffsets: usize = 0x228; // CUtlVector<FeCtrlOsOffset_t>
                pub const m_FollowNodes: usize = 0x240; // CUtlVector<FeFollowNode_t>
                pub const m_CollisionPlanes: usize = 0x258; // CUtlVector<FeCollisionPlane_t>
                pub const m_NodeIntegrator: usize = 0x270; // CUtlVector<FeNodeIntegrator_t>
                pub const m_SpringIntegrator: usize = 0x288; // CUtlVector<FeSpringIntegrator_t>
                pub const m_SimdSpringIntegrator: usize = 0x2A0; // CUtlVector<FeSimdSpringIntegrator_t>
                pub const m_WorldCollisionParams: usize = 0x2B8; // CUtlVector<FeWorldCollisionParams_t>
                pub const m_LegacyStretchForce: usize = 0x2D0; // CUtlVector<float32>
                pub const m_NodeCollisionRadii: usize = 0x2E8; // CUtlVector<float32>
                pub const m_DynNodeFriction: usize = 0x300; // CUtlVector<float32>
                pub const m_LocalRotation: usize = 0x318; // CUtlVector<float32>
                pub const m_LocalForce: usize = 0x330; // CUtlVector<float32>
                pub const m_TaperedCapsuleStretches: usize = 0x348; // CUtlVector<FeTaperedCapsuleStretch_t>
                pub const m_TaperedCapsuleRigids: usize = 0x360; // CUtlVector<FeTaperedCapsuleRigid_t>
                pub const m_SphereRigids: usize = 0x378; // CUtlVector<FeSphereRigid_t>
                pub const m_WorldCollisionNodes: usize = 0x390; // CUtlVector<uint16>
                pub const m_TreeParents: usize = 0x3A8; // CUtlVector<uint16>
                pub const m_TreeCollisionMasks: usize = 0x3C0; // CUtlVector<uint16>
                pub const m_TreeChildren: usize = 0x3D8; // CUtlVector<FeTreeChildren_t>
                pub const m_FreeNodes: usize = 0x3F0; // CUtlVector<uint16>
                pub const m_FitMatrices: usize = 0x408; // CUtlVector<FeFitMatrix_t>
                pub const m_FitWeights: usize = 0x420; // CUtlVector<FeFitWeight_t>
                pub const m_ReverseOffsets: usize = 0x438; // CUtlVector<FeNodeReverseOffset_t>
                pub const m_AnimStrayRadii: usize = 0x450; // CUtlVector<FeAnimStrayRadius_t>
                pub const m_SimdAnimStrayRadii: usize = 0x468; // CUtlVector<FeSimdAnimStrayRadius_t>
                pub const m_KelagerBends: usize = 0x480; // CUtlVector<FeKelagerBend2_t>
                pub const m_CtrlSoftOffsets: usize = 0x498; // CUtlVector<FeCtrlSoftOffset_t>
                pub const m_JiggleBones: usize = 0x4B0; // CUtlVector<CFeIndexedJiggleBone>
                pub const m_SourceElems: usize = 0x4C8; // CUtlVector<uint16>
                pub const m_GoalDampedSpringIntegrators: usize = 0x4E0; // CUtlVector<uint32>
                pub const m_Tris: usize = 0x4F8; // CUtlVector<FeTri_t>
                pub const m_nTriCount1: usize = 0x510; // uint16
                pub const m_nTriCount2: usize = 0x512; // uint16
                pub const m_nReservedUint8: usize = 0x514; // uint8
                pub const m_nExtraPressureIterations: usize = 0x515; // uint8
                pub const m_nExtraGoalIterations: usize = 0x516; // uint8
                pub const m_nExtraIterations: usize = 0x517; // uint8
                pub const m_SDFRigids: usize = 0x518; // CUtlVector<FeSDFRigid_t>
                pub const m_BoxRigids: usize = 0x530; // CUtlVector<FeBoxRigid_t>
                pub const m_DynNodeVertexSet: usize = 0x548; // CUtlVector<uint8>
                pub const m_VertexSetNames: usize = 0x560; // CUtlVector<uint32>
                pub const m_RigidColliderPriorities: usize = 0x578; // CUtlVector<FeRigidColliderIndices_t>
                pub const m_MorphLayers: usize = 0x590; // CUtlVector<FeMorphLayerDepr_t>
                pub const m_MorphSetData: usize = 0x5A8; // CUtlVector<uint8>
                pub const m_VertexMaps: usize = 0x5C0; // CUtlVector<FeVertexMapDesc_t>
                pub const m_VertexMapValues: usize = 0x5D8; // CUtlVector<uint8>
                pub const m_Effects: usize = 0x5F0; // CUtlVector<FeEffectDesc_t>
                pub const m_LockToParent: usize = 0x608; // CUtlVector<FeCtrlOffset_t>
                pub const m_LockToGoal: usize = 0x620; // CUtlVector<uint16>
                pub const m_SkelParents: usize = 0x638; // CUtlVector<int16>
                pub const m_DynNodeWindBases: usize = 0x650; // CUtlVector<FeNodeWindBase_t>
                pub const m_flInternalPressure: usize = 0x668; // float32
                pub const m_flDefaultTimeDilation: usize = 0x66C; // float32
                pub const m_flWindage: usize = 0x670; // float32
                pub const m_flWindDrag: usize = 0x674; // float32
                pub const m_flDefaultSurfaceStretch: usize = 0x678; // float32
                pub const m_flDefaultThreadStretch: usize = 0x67C; // float32
                pub const m_flDefaultGravityScale: usize = 0x680; // float32
                pub const m_flDefaultVelAirDrag: usize = 0x684; // float32
                pub const m_flDefaultExpAirDrag: usize = 0x688; // float32
                pub const m_flDefaultVelQuadAirDrag: usize = 0x68C; // float32
                pub const m_flDefaultExpQuadAirDrag: usize = 0x690; // float32
                pub const m_flRodVelocitySmoothRate: usize = 0x694; // float32
                pub const m_flQuadVelocitySmoothRate: usize = 0x698; // float32
                pub const m_flAddWorldCollisionRadius: usize = 0x69C; // float32
                pub const m_flDefaultVolumetricSolveAmount: usize = 0x6A0; // float32
                pub const m_flMotionSmoothCDT: usize = 0x6A4; // float32
                pub const m_flLocalDrag1: usize = 0x6A8; // float32
                pub const m_nRodVelocitySmoothIterations: usize = 0x6AC; // uint16
                pub const m_nQuadVelocitySmoothIterations: usize = 0x6AE; // uint16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnMeshDesc_t {
                pub const m_Mesh: usize = 0x18; // RnMesh_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSoftbodySpring_t {
                pub const m_nParticle: usize = 0x0; // uint16[2]
                pub const m_flLength: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnSoftbodyCapsule_t {
                pub const m_vCenter: usize = 0x0; // Vector[2]
                pub const m_flRadius: usize = 0x18; // float32
                pub const m_nParticle: usize = 0x1C; // uint16[2]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod vphysics_save_cphysicsbody_t {
                pub const m_nOldPointer: usize = 0xE0; // uint64
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildBoxRigid_t {
                pub const m_nPriority: usize = 0x40; // int32
                pub const m_nVertexMapHash: usize = 0x44; // uint32
                pub const m_nAntitunnelGroupBits: usize = 0x48; // uint32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeIndexedJiggleBone {
                pub const m_nNode: usize = 0x0; // uint32
                pub const m_nJiggleParent: usize = 0x4; // uint32
                pub const m_jiggleBone: usize = 0x8; // CFeJiggleBone
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBandBendLimit_t {
                pub const flDistMin: usize = 0x0; // float32
                pub const flDistMax: usize = 0x4; // float32
                pub const nNode: usize = 0x8; // uint16[6]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTaperedCapsuleStretch_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const nCollisionMask: usize = 0x4; // uint16
                pub const nDummy: usize = 0x6; // uint16
                pub const flRadius: usize = 0x8; // float32[2]
            }
            // Parent: None
            // Field count: 4
            pub mod constraint_axislimit_t {
                pub const flMinRotation: usize = 0x0; // float32
                pub const flMaxRotation: usize = 0x4; // float32
                pub const flMotorTargetAngSpeed: usize = 0x8; // float32
                pub const flMotorMaxTorque: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdRodConstraintAnim_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const f4Weight0: usize = 0x10; // fltx4
                pub const f4RelaxationFactor: usize = 0x20; // fltx4
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdRodConstraint_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const f4MaxDist: usize = 0x10; // fltx4
                pub const f4MinDist: usize = 0x20; // fltx4
                pub const f4Weight0: usize = 0x30; // fltx4
                pub const f4RelaxationFactor: usize = 0x40; // fltx4
            }
            // Parent: None
            // Field count: 4
            pub mod constraint_hingeparams_t {
                pub const worldPosition: usize = 0x0; // Vector
                pub const worldAxisDirection: usize = 0xC; // Vector
                pub const hingeAxis: usize = 0x18; // constraint_axislimit_t
                pub const constraint: usize = 0x28; // constraint_breakableparams_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildSphereRigid_t {
                pub const m_nPriority: usize = 0x20; // int32
                pub const m_nVertexMapHash: usize = 0x24; // uint32
                pub const m_nAntitunnelGroupBits: usize = 0x28; // uint32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdAnimStrayRadius_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const flMaxDist: usize = 0x10; // fltx4
                pub const flRelaxationFactor: usize = 0x20; // fltx4
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnTriangle_t {
                pub const m_nIndex: usize = 0x0; // int32[3]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeProxyVertexMap_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_flWeight: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeIntegrator_t {
                pub const flPointDamping: usize = 0x0; // float32
                pub const flAnimationForceAttraction: usize = 0x4; // float32
                pub const flAnimationVertexAttraction: usize = 0x8; // float32
                pub const flGravity: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnCapsule_t {
                pub const m_vCenter: usize = 0x0; // Vector[2]
                pub const m_flRadius: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeNamedJiggleBone {
                pub const m_strParentBone: usize = 0x0; // CUtlString
                pub const m_transform: usize = 0x10; // CTransform
                pub const m_nJiggleParent: usize = 0x30; // uint32
                pub const m_jiggleBone: usize = 0x34; // CFeJiggleBone
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAntiTunnelProbeBuild_t {
                pub const flWeight: usize = 0x0; // float32
                pub const flActivationDistance: usize = 0x4; // float32
                pub const flBias: usize = 0x8; // float32
                pub const flCurvature: usize = 0xC; // float32
                pub const nFlags: usize = 0x10; // uint32
                pub const nProbeNode: usize = 0x14; // uint16
                pub const targetNodes: usize = 0x18; // CUtlVector<uint16>
            }
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnBodyDesc_t {
                pub const m_sDebugName: usize = 0x0; // CUtlString
                pub const m_vPosition: usize = 0x8; // Vector
                pub const m_qOrientation: usize = 0x14; // QuaternionStorage
                pub const m_vLinearVelocity: usize = 0x24; // Vector
                pub const m_vAngularVelocity: usize = 0x30; // Vector
                pub const m_vLocalMassCenter: usize = 0x3C; // Vector
                pub const m_LocalInertiaInv: usize = 0x48; // Vector[3]
                pub const m_flMassInv: usize = 0x6C; // float32
                pub const m_flGameMass: usize = 0x70; // float32
                pub const m_flMassScaleInv: usize = 0x74; // float32
                pub const m_flInertiaScaleInv: usize = 0x78; // float32
                pub const m_flLinearDamping: usize = 0x7C; // float32
                pub const m_flAngularDamping: usize = 0x80; // float32
                pub const m_flLinearDrag: usize = 0x84; // float32
                pub const m_flAngularDrag: usize = 0x88; // float32
                pub const m_flLinearBuoyancyDrag: usize = 0x8C; // float32
                pub const m_flAngularBuoyancyDrag: usize = 0x90; // float32
                pub const m_vLastAwakeForceAccum: usize = 0x94; // Vector
                pub const m_vLastAwakeTorqueAccum: usize = 0xA0; // Vector
                pub const m_flBuoyancyFactor: usize = 0xAC; // float32
                pub const m_flGravityScale: usize = 0xB0; // float32
                pub const m_flTimeScale: usize = 0xB4; // float32
                pub const m_nBodyType: usize = 0xB8; // int32
                pub const m_nGameIndex: usize = 0xBC; // uint32
                pub const m_nGameFlags: usize = 0xC0; // uint32
                pub const m_nMinVelocityIterations: usize = 0xC4; // int8
                pub const m_nMinPositionIterations: usize = 0xC5; // int8
                pub const m_nMassPriority: usize = 0xC6; // int8
                pub const m_bEnabled: usize = 0xC7; // bool
                pub const m_bSleeping: usize = 0xC8; // bool
                pub const m_bIsContinuousEnabled: usize = 0xC9; // bool
                pub const m_bDragEnabled: usize = 0xCA; // bool
                pub const m_bBuoyancyDragEnabled: usize = 0xCB; // bool
                pub const m_vGravity: usize = 0xCC; // Vector
                pub const m_bSpeculativeEnabled: usize = 0xD8; // bool
                pub const m_bHasShadowController: usize = 0xD9; // bool
                pub const m_nDynamicContinuousContactBehavior: usize = 0xDA; // DynamicContinuousContactBehavior_t
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod OldFeEdge_t {
                pub const m_flK: usize = 0x0; // float32[3]
                pub const invA: usize = 0xC; // float32
                pub const t: usize = 0x10; // float32
                pub const flThetaRelaxed: usize = 0x14; // float32
                pub const flThetaFactor: usize = 0x18; // float32
                pub const c01: usize = 0x1C; // float32
                pub const c02: usize = 0x20; // float32
                pub const c03: usize = 0x24; // float32
                pub const c04: usize = 0x28; // float32
                pub const flAxialModelDist: usize = 0x2C; // float32
                pub const flAxialModelWeights: usize = 0x30; // float32[4]
                pub const m_nNode: usize = 0x40; // uint16[4]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFollowNode_t {
                pub const nParentNode: usize = 0x0; // uint16
                pub const nChildNode: usize = 0x2; // uint16
                pub const flWeight: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnMesh_t {
                pub const m_vMin: usize = 0x0; // Vector
                pub const m_vMax: usize = 0xC; // Vector
                pub const m_Nodes: usize = 0x18; // CUtlVector<RnNode_t>
                pub const m_Vertices: usize = 0x30; // CUtlVectorSIMDPaddedVector
                pub const m_Triangles: usize = 0x48; // CUtlVector<RnTriangle_t>
                pub const m_Wings: usize = 0x60; // CUtlVector<RnWing_t>
                pub const m_TriangleEdgeFlags: usize = 0x78; // CUtlVector<uint8>
                pub const m_Materials: usize = 0x90; // CUtlVector<uint8>
                pub const m_vOrthographicAreas: usize = 0xA8; // Vector
                pub const m_nFlags: usize = 0xB4; // uint32
                pub const m_nDebugFlags: usize = 0xB8; // uint32
            }
            // Parent: None
            // Field count: 2
            pub mod VertexPositionNormal_t {
                pub const m_vPosition: usize = 0x0; // Vector
                pub const m_vNormal: usize = 0xC; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildSDFRigid_t {
                pub const m_nPriority: usize = 0x50; // int32
                pub const m_nVertexMapHash: usize = 0x54; // uint32
                pub const m_nAntitunnelGroupBits: usize = 0x58; // uint32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnBlendVertex_t {
                pub const m_nWeight0: usize = 0x0; // uint16
                pub const m_nIndex0: usize = 0x2; // uint16
                pub const m_nWeight1: usize = 0x4; // uint16
                pub const m_nIndex1: usize = 0x6; // uint16
                pub const m_nWeight2: usize = 0x8; // uint16
                pub const m_nIndex2: usize = 0xA; // uint16
                pub const m_nFlags: usize = 0xC; // uint16
                pub const m_nTargetIndex: usize = 0xE; // uint16
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeMorphLayer {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_Nodes: usize = 0x10; // CUtlVector<uint16>
                pub const m_InitPos: usize = 0x28; // CUtlVector<Vector>
                pub const m_Gravity: usize = 0x40; // CUtlVector<float32>
                pub const m_GoalStrength: usize = 0x58; // CUtlVector<float32>
                pub const m_GoalDamping: usize = 0x70; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlSoftOffset_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nCtrlChild: usize = 0x2; // uint16
                pub const vOffset: usize = 0x4; // Vector
                pub const flAlpha: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeVertexMapDesc_t {
                pub const sName: usize = 0x0; // CUtlString
                pub const nNameHash: usize = 0x8; // uint32
                pub const nColor: usize = 0xC; // uint32
                pub const nFlags: usize = 0x10; // uint32
                pub const nVertexBase: usize = 0x14; // uint16
                pub const nVertexCount: usize = 0x16; // uint16
                pub const nMapOffset: usize = 0x18; // uint32
                pub const nNodeListOffset: usize = 0x1C; // uint32
                pub const vCenterOfMass: usize = 0x20; // Vector
                pub const flVolumetricSolveStrength: usize = 0x2C; // float32
                pub const nScaleSourceNode: usize = 0x30; // int16
                pub const nNodeListCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTaperedCapsuleRigid_t {
                pub const vSphere: usize = 0x0; // fltx4[2]
                pub const nNode: usize = 0x20; // uint16
                pub const nCollisionMask: usize = 0x22; // uint16
                pub const nVertexMapIndex: usize = 0x24; // uint16
                pub const nFlags: usize = 0x26; // uint16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAnimStrayRadius_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flMaxDist: usize = 0x4; // float32
                pub const flRelaxationFactor: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeEdgeDesc_t {
                pub const nEdge: usize = 0x0; // uint16[2]
                pub const nSide: usize = 0x4; // uint16[2][2]
                pub const nVirtElem: usize = 0xC; // uint16[2]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeReverseOffset_t {
                pub const vOffset: usize = 0x0; // Vector
                pub const nBoneCtrl: usize = 0xC; // uint16
                pub const nTargetNode: usize = 0xE; // uint16
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnPlane_t {
                pub const m_vNormal: usize = 0x0; // Vector
                pub const m_flOffset: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSDFRigid_t {
                pub const vLocalMin: usize = 0x0; // Vector
                pub const vLocalMax: usize = 0xC; // Vector
                pub const flBounciness: usize = 0x18; // float32
                pub const nNode: usize = 0x1C; // uint16
                pub const nCollisionMask: usize = 0x1E; // uint16
                pub const nVertexMapIndex: usize = 0x20; // uint16
                pub const nFlags: usize = 0x22; // uint16
                pub const m_Distances: usize = 0x28; // CUtlVector<float32>
                pub const m_nWidth: usize = 0x40; // int32
                pub const m_nHeight: usize = 0x44; // int32
                pub const m_nDepth: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeJiggleBone {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_flLength: usize = 0x4; // float32
                pub const m_flTipMass: usize = 0x8; // float32
                pub const m_flYawStiffness: usize = 0xC; // float32
                pub const m_flYawDamping: usize = 0x10; // float32
                pub const m_flPitchStiffness: usize = 0x14; // float32
                pub const m_flPitchDamping: usize = 0x18; // float32
                pub const m_flAlongStiffness: usize = 0x1C; // float32
                pub const m_flAlongDamping: usize = 0x20; // float32
                pub const m_flAngleLimit: usize = 0x24; // float32
                pub const m_flMinYaw: usize = 0x28; // float32
                pub const m_flMaxYaw: usize = 0x2C; // float32
                pub const m_flYawFriction: usize = 0x30; // float32
                pub const m_flYawBounce: usize = 0x34; // float32
                pub const m_flMinPitch: usize = 0x38; // float32
                pub const m_flMaxPitch: usize = 0x3C; // float32
                pub const m_flPitchFriction: usize = 0x40; // float32
                pub const m_flPitchBounce: usize = 0x44; // float32
                pub const m_flBaseMass: usize = 0x48; // float32
                pub const m_flBaseStiffness: usize = 0x4C; // float32
                pub const m_flBaseDamping: usize = 0x50; // float32
                pub const m_flBaseMinLeft: usize = 0x54; // float32
                pub const m_flBaseMaxLeft: usize = 0x58; // float32
                pub const m_flBaseLeftFriction: usize = 0x5C; // float32
                pub const m_flBaseMinUp: usize = 0x60; // float32
                pub const m_flBaseMaxUp: usize = 0x64; // float32
                pub const m_flBaseUpFriction: usize = 0x68; // float32
                pub const m_flBaseMinForward: usize = 0x6C; // float32
                pub const m_flBaseMaxForward: usize = 0x70; // float32
                pub const m_flBaseForwardFriction: usize = 0x74; // float32
                pub const m_flRadius0: usize = 0x78; // float32
                pub const m_flRadius1: usize = 0x7C; // float32
                pub const m_vPoint0: usize = 0x80; // Vector
                pub const m_vPoint1: usize = 0x8C; // Vector
                pub const m_nCollisionMask: usize = 0x98; // uint16
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRegionSVM {
                pub const m_Planes: usize = 0x0; // CUtlVector<RnPlane_t>
                pub const m_Nodes: usize = 0x18; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeWorldCollisionParams_t {
                pub const flWorldFriction: usize = 0x0; // float32
                pub const flGroundFriction: usize = 0x4; // float32
                pub const nListBegin: usize = 0x8; // uint16
                pub const nListEnd: usize = 0xA; // uint16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnNode_t {
                pub const m_vMin: usize = 0x0; // Vector
                pub const m_nChildren: usize = 0xC; // uint32
                pub const m_vMax: usize = 0x10; // Vector
                pub const m_nTriangleOffset: usize = 0x1C; // uint32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitMatrix_t {
                pub const bone: usize = 0x0; // CTransform
                pub const vCenter: usize = 0x20; // Vector
                pub const nEnd: usize = 0x2C; // uint16
                pub const nNode: usize = 0x2E; // uint16
                pub const nBeginDynamic: usize = 0x30; // uint16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdQuad_t {
                pub const nNode: usize = 0x0; // uint16[4][4]
                pub const f4Slack: usize = 0x20; // fltx4
                pub const vShape: usize = 0x30; // FourVectors[4]
                pub const f4Weights: usize = 0xF0; // fltx4[4]
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdSpringIntegrator_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const flSpringRestLength: usize = 0x10; // fltx4
                pub const flSpringConstant: usize = 0x20; // fltx4
                pub const flSpringDamping: usize = 0x30; // fltx4
                pub const flNodeWeight0: usize = 0x40; // fltx4
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdNodeBase_t {
                pub const nNode: usize = 0x0; // uint16[4]
                pub const nNodeX0: usize = 0x8; // uint16[4]
                pub const nNodeX1: usize = 0x10; // uint16[4]
                pub const nNodeY0: usize = 0x18; // uint16[4]
                pub const nNodeY1: usize = 0x20; // uint16[4]
                pub const nDummy: usize = 0x28; // uint16[4]
                pub const qAdjust: usize = 0x30; // FourQuaternions
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeQuad_t {
                pub const nNode: usize = 0x0; // uint16[4]
                pub const flSlack: usize = 0x8; // float32
                pub const vShape: usize = 0xC; // Vector4D[4]
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeHingeLimit_t {
                pub const nNode: usize = 0x0; // uint16[6]
                pub const nFlags: usize = 0xC; // uint32
                pub const flWeight4: usize = 0x10; // float32
                pub const flWeight5: usize = 0x14; // float32
                pub const flAngleCenter: usize = 0x18; // float32
                pub const flAngleExtents: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnWing_t {
                pub const m_nIndex: usize = 0x0; // int32[3]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeWeightedNode_t {
                pub const nNode: usize = 0x0; // uint16
                pub const nWeight: usize = 0x2; // uint16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeEffectDesc_t {
                pub const sName: usize = 0x0; // CUtlString
                pub const nNameHash: usize = 0x8; // uint32
                pub const nType: usize = 0xC; // int32
                pub const m_Params: usize = 0x10; // KeyValues3
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSpringIntegrator_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flSpringRestLength: usize = 0x4; // float32
                pub const flSpringConstant: usize = 0x8; // float32
                pub const flSpringDamping: usize = 0xC; // float32
                pub const flNodeWeight0: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FourVectors2D {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeKelagerBend2_t {
                pub const flWeight: usize = 0x0; // float32[3]
                pub const flHeight0: usize = 0xC; // float32
                pub const nNode: usize = 0x10; // uint16[3]
                pub const nReserved: usize = 0x16; // uint16
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CastSphereSATParams_t {
                pub const m_vRayStart: usize = 0x0; // Vector
                pub const m_vRayDelta: usize = 0xC; // Vector
                pub const m_flRadius: usize = 0x18; // float32
                pub const m_flMaxFraction: usize = 0x1C; // float32
                pub const m_flScale: usize = 0x20; // float32
                pub const m_pHull: usize = 0x28; // RnHull_t*
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeRigidColliderIndices_t {
                pub const m_nTaperedCapsuleRigidIndex: usize = 0x0; // uint16
                pub const m_nSphereRigidIndex: usize = 0x2; // uint16
                pub const m_nBoxRigidIndex: usize = 0x4; // uint16
                pub const m_nSDFRigidIndex: usize = 0x6; // uint16
                pub const m_nCollisionPlaneIndex: usize = 0x8; // uint16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCollisionPlane_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nChildNode: usize = 0x2; // uint16
                pub const m_Plane: usize = 0x4; // RnPlane_t
                pub const flStrength: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeStiffHingeBuild_t {
                pub const flMaxAngle: usize = 0x0; // float32
                pub const flStrength: usize = 0x4; // float32
                pub const flMotionBias: usize = 0x8; // float32[3]
                pub const nNode: usize = 0x14; // uint16[3]
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBoxRigid_t {
                pub const tmFrame2: usize = 0x0; // CTransform
                pub const nNode: usize = 0x20; // uint16
                pub const nCollisionMask: usize = 0x22; // uint16
                pub const vSize: usize = 0x24; // Vector
                pub const nVertexMapIndex: usize = 0x30; // uint16
                pub const nFlags: usize = 0x32; // uint16
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeMorphLayerDepr_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_Nodes: usize = 0x10; // CUtlVector<uint16>
                pub const m_InitPos: usize = 0x28; // CUtlVector<Vector>
                pub const m_Gravity: usize = 0x40; // CUtlVector<float32>
                pub const m_GoalStrength: usize = 0x58; // CUtlVector<float32>
                pub const m_GoalDamping: usize = 0x70; // CUtlVector<float32>
                pub const m_nFlags: usize = 0x88; // uint32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlOffset_t {
                pub const vOffset: usize = 0x0; // Vector
                pub const nCtrlParent: usize = 0xC; // uint16
                pub const nCtrlChild: usize = 0xE; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsPlayerController {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeBase_t {
                pub const nNode: usize = 0x0; // uint16
                pub const nDummy: usize = 0x2; // uint16[3]
                pub const nNodeX0: usize = 0x8; // uint16
                pub const nNodeX1: usize = 0xA; // uint16
                pub const nNodeY0: usize = 0xC; // uint16
                pub const nNodeY1: usize = 0xE; // uint16
                pub const qAdjust: usize = 0x10; // QuaternionStorage
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeVertexMapBuild_t {
                pub const m_VertexMapName: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_Color: usize = 0xC; // Color
                pub const m_flVolumetricSolveStrength: usize = 0x10; // float32
                pub const m_nScaleSourceNode: usize = 0x14; // int32
                pub const m_Weights: usize = 0x18; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeVertexMapBuildArray {
                pub const m_Array: usize = 0x0; // CUtlVector<FeVertexMapBuild_t*>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTri_t {
                pub const nNode: usize = 0x0; // uint16[3]
                pub const w1: usize = 0x8; // float32
                pub const w2: usize = 0xC; // float32
                pub const v1x: usize = 0x10; // float32
                pub const v2: usize = 0x14; // Vector2D
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHull_t {
                pub const m_vCentroid: usize = 0x0; // Vector
                pub const m_flMaxAngularRadius: usize = 0xC; // float32
                pub const m_Bounds: usize = 0x10; // AABB_t
                pub const m_vOrthographicAreas: usize = 0x28; // Vector
                pub const m_MassProperties: usize = 0x34; // matrix3x4_t
                pub const m_flVolume: usize = 0x64; // float32
                pub const m_flSurfaceArea: usize = 0x68; // float32
                pub const m_Vertices: usize = 0x70; // CUtlVector<RnVertex_t>
                pub const m_VertexPositions: usize = 0x88; // CUtlVector<Vector>
                pub const m_Edges: usize = 0xA0; // CUtlVector<RnHalfEdge_t>
                pub const m_Faces: usize = 0xB8; // CUtlVector<RnFace_t>
                pub const m_FacePlanes: usize = 0xD0; // CUtlVector<RnPlane_t>
                pub const m_nFlags: usize = 0xE8; // uint32
                pub const m_pRegionSVM: usize = 0xF0; // CRegionSVM*
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAntiTunnelGroupBuild_t {
                pub const m_nVertexMapHash: usize = 0x0; // uint32
                pub const m_nCollisionMask: usize = 0x4; // uint32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CovMatrix3 {
                pub const m_vDiag: usize = 0x0; // Vector
                pub const m_flXY: usize = 0xC; // float32
                pub const m_flXZ: usize = 0x10; // float32
                pub const m_flYZ: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod PhysicsParticleId_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnVertex_t {
                pub const m_nEdge: usize = 0x0; // uint8
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod Dop26_t {
                pub const m_flSupport: usize = 0x0; // float32[26]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeDynKinLink_t {
                pub const m_nParent: usize = 0x0; // uint16
                pub const m_nChild: usize = 0x2; // uint16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnFace_t {
                pub const m_nEdge: usize = 0x0; // uint8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlOsOffset_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nCtrlChild: usize = 0x2; // uint16
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAntiTunnelProbe_t {
                pub const flWeight: usize = 0x0; // float32
                pub const nFlags: usize = 0x4; // uint32
                pub const nProbeNode: usize = 0x8; // uint16
                pub const nCount: usize = 0xA; // uint16
                pub const nBegin: usize = 0xC; // uint32
                pub const flActivationDistance: usize = 0x10; // float32
                pub const flCurvatureRadius: usize = 0x14; // float32
                pub const flBias: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSourceEdge_t {
                pub const nNode: usize = 0x0; // uint16[2]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTwistConstraint_t {
                pub const nNodeOrient: usize = 0x0; // uint16
                pub const nNodeEnd: usize = 0x2; // uint16
                pub const flTwistRelax: usize = 0x4; // float32
                pub const flSwingRelax: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeWindBase_t {
                pub const nNodeX0: usize = 0x0; // uint16
                pub const nNodeX1: usize = 0x2; // uint16
                pub const nNodeY0: usize = 0x4; // uint16
                pub const nNodeY1: usize = 0x6; // uint16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAxialEdgeBend_t {
                pub const te: usize = 0x0; // float32
                pub const tv: usize = 0x4; // float32
                pub const flDist: usize = 0x8; // float32
                pub const flWeight: usize = 0xC; // float32[4]
                pub const nNode: usize = 0x1C; // uint16[6]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FourCovMatrices3 {
                pub const m_vDiag: usize = 0x0; // FourVectors
                pub const m_flXY: usize = 0x30; // fltx4
                pub const m_flXZ: usize = 0x40; // fltx4
                pub const m_flYZ: usize = 0x50; // fltx4
            }
            // Parent: None
            // Field count: 5
            pub mod constraint_breakableparams_t {
                pub const strength: usize = 0x0; // float32
                pub const forceLimit: usize = 0x4; // float32
                pub const torqueLimit: usize = 0x8; // float32
                pub const bodyMassScale: usize = 0xC; // float32[2]
                pub const isActive: usize = 0x14; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSphereRigid_t {
                pub const vSphere: usize = 0x0; // fltx4
                pub const nNode: usize = 0x10; // uint16
                pub const nCollisionMask: usize = 0x12; // uint16
                pub const nVertexMapIndex: usize = 0x14; // uint16
                pub const nFlags: usize = 0x16; // uint16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildTaperedCapsuleRigid_t {
                pub const m_nPriority: usize = 0x30; // int32
                pub const m_nVertexMapHash: usize = 0x34; // uint32
                pub const m_nAntitunnelGroupBits: usize = 0x38; // uint32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSoftParent_t {
                pub const nParent: usize = 0x0; // int32
                pub const flAlpha: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnShapeDesc_t {
                pub const m_nCollisionAttributeIndex: usize = 0x0; // uint32
                pub const m_nSurfacePropertyIndex: usize = 0x4; // uint32
                pub const m_UserFriendlyName: usize = 0x8; // CUtlString
                pub const m_bUserFriendlyNameSealed: usize = 0x10; // bool
                pub const m_bUserFriendlyNameLong: usize = 0x11; // bool
                pub const m_nToolMaterialHash: usize = 0x14; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTreeChildren_t {
                pub const nChild: usize = 0x0; // uint16[2]
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeRodConstraint_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flMaxDist: usize = 0x4; // float32
                pub const flMinDist: usize = 0x8; // float32
                pub const flWeight0: usize = 0xC; // float32
                pub const flRelaxationFactor: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitWeight_t {
                pub const flWeight: usize = 0x0; // float32
                pub const nNode: usize = 0x4; // uint16
                pub const nDummy: usize = 0x6; // uint16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHalfEdge_t {
                pub const m_nNext: usize = 0x0; // uint8
                pub const m_nTwin: usize = 0x1; // uint8
                pub const m_nOrigin: usize = 0x2; // uint8
                pub const m_nFace: usize = 0x3; // uint8
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdTri_t {
                pub const nNode: usize = 0x0; // uint32[4][3]
                pub const w1: usize = 0x30; // fltx4
                pub const w2: usize = 0x40; // fltx4
                pub const v1x: usize = 0x50; // fltx4
                pub const v2: usize = 0x60; // FourVectors2D
            }
            // Parent: None
            // Field count: 1
            pub mod VertexPositionColor_t {
                pub const m_vPosition: usize = 0x0; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitInfluence_t {
                pub const nVertexNode: usize = 0x0; // uint32
                pub const flWeight: usize = 0x4; // float32
                pub const nMatrixNode: usize = 0x8; // uint32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeHingeLimitBuild_t {
                pub const nNode: usize = 0x0; // uint16[6]
                pub const nFlags: usize = 0xC; // uint32
                pub const flLimitCW: usize = 0x10; // float32
                pub const flLimitCCW: usize = 0x14; // float32
            }
        }
    }
}
