// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-04 13:40:42.514657500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: vphysics2.dll
        // Classes count: 124
        // Enums count: 0
        pub mod vphysics2_dll {
            // Parent: None
            // Fields count: 35
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
                pub const m_vPoint0: usize = 0x80; // 
                pub const m_vPoint1: usize = 0x8C; // 
                pub const m_nCollisionMask: usize = 0x98; // uint16
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeIndexedJiggleBone {
                pub const m_nNode: usize = 0x0; // uint32
                pub const m_nJiggleParent: usize = 0x4; // uint32
                pub const m_jiggleBone: usize = 0x8; // CFeJiggleBone
            }
            // Parent: None
            // Fields count: 7
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
            // Fields count: 7
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeQuad_t {
                pub const nNode: usize = 0x0; // uint16[4]
                pub const flSlack: usize = 0x8; // float32
                pub const vShape: usize = 0xC; // Vector4D[4]
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 5
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
            // Fields count: 5
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdRodConstraintAnim_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const f4Weight0: usize = 0x10; // fltx4
                pub const f4RelaxationFactor: usize = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 5
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
            // Fields count: 4
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
            // Fields count: 5
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlOffset_t {
                pub const vOffset: usize = 0x0; // 
                pub const nCtrlParent: usize = 0xC; // uint16
                pub const nCtrlChild: usize = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlOsOffset_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nCtrlChild: usize = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFollowNode_t {
                pub const nParentNode: usize = 0x0; // uint16
                pub const nChildNode: usize = 0x2; // uint16
                pub const flWeight: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 4
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
            // Fields count: 5
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
            // Fields count: 5
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
            // Fields count: 4
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
            // Fields count: 4
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
            // Fields count: 5
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
            // Fields count: 5
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeTreeChildren_t {
                pub const nChild: usize = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitMatrix_t {
                pub const bone: usize = 0x0; // CTransform
                pub const vCenter: usize = 0x20; // 
                pub const nEnd: usize = 0x2C; // uint16
                pub const nNode: usize = 0x2E; // uint16
                pub const nBeginDynamic: usize = 0x30; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitWeight_t {
                pub const flWeight: usize = 0x0; // float32
                pub const nNode: usize = 0x4; // uint16
                pub const nDummy: usize = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeNodeReverseOffset_t {
                pub const vOffset: usize = 0x0; // 
                pub const nBoneCtrl: usize = 0xC; // uint16
                pub const nTargetNode: usize = 0xE; // uint16
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeAnimStrayRadius_t {
                pub const nNode: usize = 0x0; // uint16[2]
                pub const flMaxDist: usize = 0x4; // float32
                pub const flRelaxationFactor: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSimdAnimStrayRadius_t {
                pub const nNode: usize = 0x0; // uint16[4][2]
                pub const flMaxDist: usize = 0x10; // fltx4
                pub const flRelaxationFactor: usize = 0x20; // fltx4
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeCtrlSoftOffset_t {
                pub const nCtrlParent: usize = 0x0; // uint16
                pub const nCtrlChild: usize = 0x2; // uint16
                pub const vOffset: usize = 0x4; // 
                pub const flAlpha: usize = 0x10; // float32
            }
            // Parent: None
            // Fields count: 5
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
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBoxRigid_t {
                pub const tmFrame2: usize = 0x0; // CTransform
                pub const nNode: usize = 0x20; // uint16
                pub const nCollisionMask: usize = 0x22; // uint16
                pub const vSize: usize = 0x24; // 
                pub const nVertexMapIndex: usize = 0x30; // uint16
                pub const nFlags: usize = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeRigidColliderIndices_t {
                pub const m_nTaperedCapsuleRigidIndex: usize = 0x0; // uint16
                pub const m_nSphereRigidIndex: usize = 0x2; // uint16
                pub const m_nBoxRigidIndex: usize = 0x4; // uint16
                pub const m_nCollisionPlaneIndex: usize = 0x6; // uint16
            }
            // Parent: None
            // Fields count: 8
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
            // Fields count: 12
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
                pub const vCenterOfMass: usize = 0x20; // 
                pub const flVolumetricSolveStrength: usize = 0x2C; // float32
                pub const nScaleSourceNode: usize = 0x30; // int16
                pub const nNodeListCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 4
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
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FourVectors2D {
                pub const x: usize = 0x0; // fltx4
                pub const y: usize = 0x10; // fltx4
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeEdgeDesc_t {
                pub const nEdge: usize = 0x0; // uint16[2]
                pub const nSide: usize = 0x4; // uint16[2][2]
                pub const nVirtElem: usize = 0xC; // uint16[2]
            }
            // Parent: None
            // Fields count: 12
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
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeWeightedNode_t {
                pub const nNode: usize = 0x0; // uint16
                pub const nWeight: usize = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBandBendLimit_t {
                pub const flDistMin: usize = 0x0; // float32
                pub const flDistMax: usize = 0x4; // float32
                pub const nNode: usize = 0x8; // uint16[6]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSoftParent_t {
                pub const nParent: usize = 0x0; // int32
                pub const flAlpha: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnPlane_t {
                pub const m_vNormal: usize = 0x0; // 
                pub const m_flOffset: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CovMatrix3 {
                pub const m_vDiag: usize = 0x0; // 
                pub const m_flXY: usize = 0xC; // float32
                pub const m_flXZ: usize = 0x10; // float32
                pub const m_flYZ: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeFitInfluence_t {
                pub const nVertexNode: usize = 0x0; // uint32
                pub const flWeight: usize = 0x4; // float32
                pub const nMatrixNode: usize = 0x8; // uint32
            }
            // Parent: FeTaperedCapsuleRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildTaperedCapsuleRigid_t {
                pub const m_nPriority: usize = 0x30; // int32
                pub const m_nVertexMapHash: usize = 0x34; // uint32
            }
            // Parent: FeBoxRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildBoxRigid_t {
                pub const m_nPriority: usize = 0x40; // int32
                pub const m_nVertexMapHash: usize = 0x44; // uint32
            }
            // Parent: FeSphereRigid_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeBuildSphereRigid_t {
                pub const m_nPriority: usize = 0x20; // int32
                pub const m_nVertexMapHash: usize = 0x24; // uint32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeSourceEdge_t {
                pub const nNode: usize = 0x0; // uint16[2]
            }
            // Parent: None
            // Fields count: 6
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFeVertexMapBuildArray {
                pub const m_Array: usize = 0x0; // CUtlVector<FeVertexMapBuild_t*>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FeProxyVertexMap_t {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_flWeight: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 7
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod Dop26_t {
                pub const m_flSupport: usize = 0x0; // float32[26]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnCapsule_t {
                pub const m_vCenter: usize = 0x0; // Vector[2]
                pub const m_flRadius: usize = 0x18; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnVertex_t {
                pub const m_nEdge: usize = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnFace_t {
                pub const m_nEdge: usize = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRegionSVM {
                pub const m_Planes: usize = 0x0; // CUtlVector<RnPlane_t>
                pub const m_Nodes: usize = 0x18; // CUtlVector<uint32>
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnHull_t {
                pub const m_vCentroid: usize = 0x0; // 
                pub const m_flMaxAngularRadius: usize = 0xC; // float32
                pub const m_Bounds: usize = 0x10; // AABB_t
                pub const m_vOrthographicAreas: usize = 0x28; // 
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnTriangle_t {
                pub const m_nIndex: usize = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnWing_t {
                pub const m_nIndex: usize = 0x0; // int32[3]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnNode_t {
                pub const m_vMin: usize = 0x0; // 
                pub const m_nChildren: usize = 0xC; // uint32
                pub const m_vMax: usize = 0x10; // 
                pub const m_nTriangleOffset: usize = 0x1C; // uint32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnMesh_t {
                pub const m_vMin: usize = 0x0; // 
                pub const m_vMax: usize = 0xC; // 
                pub const m_Nodes: usize = 0x18; // CUtlVector<RnNode_t>
                pub const m_Vertices: usize = 0x30; // CUtlVectorSIMDPaddedVector
                pub const m_Triangles: usize = 0x48; // CUtlVector<RnTriangle_t>
                pub const m_Wings: usize = 0x60; // CUtlVector<RnWing_t>
                pub const m_Materials: usize = 0x78; // CUtlVector<uint8>
                pub const m_vOrthographicAreas: usize = 0x90; // 
                pub const m_nFlags: usize = 0x9C; // uint32
                pub const m_nDebugFlags: usize = 0xA0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnShapeDesc_t {
                pub const m_nCollisionAttributeIndex: usize = 0x0; // uint32
                pub const m_nSurfacePropertyIndex: usize = 0x4; // uint32
                pub const m_UserFriendlyName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Fields count: 8
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
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CastSphereSATParams_t {
                pub const m_vRayStart: usize = 0x0; // 
                pub const m_vRayDelta: usize = 0xC; // 
                pub const m_flRadius: usize = 0x18; // float32
                pub const m_flMaxFraction: usize = 0x1C; // float32
                pub const m_flScale: usize = 0x20; // float32
                pub const m_pHull: usize = 0x28; // RnHull_t*
            }
            // Parent: None
            // Fields count: 35
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RnBodyDesc_t {
                pub const m_sDebugName: usize = 0x0; // CUtlString
                pub const m_vPosition: usize = 0x8; // 
                pub const m_qOrientation: usize = 0x14; // QuaternionStorage
                pub const m_vLinearVelocity: usize = 0x24; // 
                pub const m_vAngularVelocity: usize = 0x30; // 
                pub const m_vLocalMassCenter: usize = 0x3C; // 
                pub const m_LocalInertiaInv: usize = 0x48; // Vector[3]
                pub const m_flMassInv: usize = 0x6C; // float32
                pub const m_flGameMass: usize = 0x70; // float32
                pub const m_flInertiaScaleInv: usize = 0x74; // float32
                pub const m_flLinearDamping: usize = 0x78; // float32
                pub const m_flAngularDamping: usize = 0x7C; // float32
                pub const m_flLinearDrag: usize = 0x80; // float32
                pub const m_flAngularDrag: usize = 0x84; // float32
                pub const m_flLinearBuoyancyDrag: usize = 0x88; // float32
                pub const m_flAngularBuoyancyDrag: usize = 0x8C; // float32
                pub const m_vLastAwakeForceAccum: usize = 0x90; // 
                pub const m_vLastAwakeTorqueAccum: usize = 0x9C; // 
                pub const m_flBuoyancyFactor: usize = 0xA8; // float32
                pub const m_flGravityScale: usize = 0xAC; // float32
                pub const m_flTimeScale: usize = 0xB0; // float32
                pub const m_nBodyType: usize = 0xB4; // int32
                pub const m_nGameIndex: usize = 0xB8; // uint32
                pub const m_nGameFlags: usize = 0xBC; // uint32
                pub const m_nMinVelocityIterations: usize = 0xC0; // int8
                pub const m_nMinPositionIterations: usize = 0xC1; // int8
                pub const m_nMassPriority: usize = 0xC2; // int8
                pub const m_bEnabled: usize = 0xC3; // bool
                pub const m_bSleeping: usize = 0xC4; // bool
                pub const m_bIsContinuousEnabled: usize = 0xC5; // bool
                pub const m_bDragEnabled: usize = 0xC6; // bool
                pub const m_bBuoyancyDragEnabled: usize = 0xC7; // bool
                pub const m_bGravityDisabled: usize = 0xC8; // bool
                pub const m_bSpeculativeEnabled: usize = 0xC9; // bool
                pub const m_bHasShadowController: usize = 0xCA; // bool
            }
            // Parent: RnBodyDesc_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod vphysics_save_cphysicsbody_t {
                pub const m_nOldPointer: usize = 0xD0; // uint64
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTiltTwistConstraint {
                pub const m_nTargetAxis: usize = 0x70; // int32
                pub const m_nSlaveAxis: usize = 0x74; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestFuncs_LibraryA {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod FakeEntity_tAPI {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_RegisterInfo {
                pub const m_nReg: usize = 0x0; // PulseRuntimeRegisterIndex_t
                pub const m_Type: usize = 0x8; // CPulseValueFullType
                pub const m_OriginName: usize = 0x18; // CKV3MemberNameWithStorage
                pub const m_nWrittenByInstruction: usize = 0x50; // int32
                pub const m_nLastReadByInstruction: usize = 0x54; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Chunk {
                pub const m_Instructions: usize = 0x0; // CUtlLeanVector<PGDInstruction_t>
                pub const m_Registers: usize = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                pub const m_InstructionEditorIDs: usize = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PGDInstruction_t {
                pub const m_nCode: usize = 0x0; // PulseInstructionCode_t
                pub const m_nVar: usize = 0x4; // PulseRuntimeVarIndex_t
                pub const m_nReg0: usize = 0x8; // PulseRuntimeRegisterIndex_t
                pub const m_nReg1: usize = 0xA; // PulseRuntimeRegisterIndex_t
                pub const m_nReg2: usize = 0xC; // PulseRuntimeRegisterIndex_t
                pub const m_nInvokeBindingIndex: usize = 0x10; // PulseRuntimeInvokeIndex_t
                pub const m_nChunk: usize = 0x14; // PulseRuntimeChunkIndex_t
                pub const m_nDestInstruction: usize = 0x18; // int32
                pub const m_nCallInfoIndex: usize = 0x1C; // PulseRuntimeCallInfoIndex_t
                pub const m_nConstIdx: usize = 0x20; // PulseRuntimeConstantIndex_t
                pub const m_DomainValue: usize = 0x28; // CBufferString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Variable {
                pub const m_Name: usize = 0x0; // CUtlSymbolLarge
                pub const m_Description: usize = 0x8; // CUtlString
                pub const m_Type: usize = 0x10; // CPulseValueFullType
                pub const m_DefaultValue: usize = 0x20; // KeyValues3
                pub const m_bIsPublic: usize = 0x32; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Constant {
                pub const m_Type: usize = 0x0; // CPulseValueFullType
                pub const m_Value: usize = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_PublicOutput {
                pub const m_Name: usize = 0x0; // CUtlSymbolLarge
                pub const m_Description: usize = 0x8; // CUtlString
                pub const m_ParamType: usize = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_OutputConnection {
                pub const m_SourceOutput: usize = 0x0; // CUtlSymbolLarge
                pub const m_TargetEntity: usize = 0x8; // CUtlSymbolLarge
                pub const m_TargetInput: usize = 0x10; // CUtlSymbolLarge
                pub const m_Param: usize = 0x18; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x20; // CUtlSymbolLarge
                pub const m_nCellIndex: usize = 0x28; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x2C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x30; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseRegisterMap_t {
                pub const m_Inparams: usize = 0x0; // KeyValues3
                pub const m_Outparams: usize = 0x10; // KeyValues3
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // CUtlSymbolLarge
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x10; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x30; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x34; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x38; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // CUtlSymbolLarge
                pub const m_ParentMapName: usize = 0x10; // CUtlSymbolLarge
                pub const m_Chunks: usize = 0x18; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x30; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x48; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x60; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0x78; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0x90; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xA8; // CUtlVector<CPulse_Constant>
                pub const m_OutputConnections: usize = 0xC0; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseMathlib {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // CUtlSymbolLarge
                pub const m_nDestChunk: usize = 0x8; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0xC; // int32
            }
            // Parent: CPulse_OutflowConnection
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_ResumePoint {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseRuntimeMethodArg {
                pub const m_Name: usize = 0x0; // CKV3MemberNameWithStorage
                pub const m_Description: usize = 0x38; // CUtlString
                pub const m_Type: usize = 0x40; // CPulseValueFullType
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
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
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8>
                pub const m_nNextShuffle: usize = 0x20; // int32
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
            pub mod CPulseCell_Outflow_TestRandomYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x58; // CPulse_OutflowConnection
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
            pub mod CPulseCell_Outflow_TestExplicitYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x58; // CPulse_OutflowConnection
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
            pub mod CPulseCell_Value_TestValue50 {
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
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_bPauseForPreviousEvents: usize = 0x4; // bool
                pub const m_bCallModeSync: usize = 0x5; // bool
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CPulseGraphInstance_TestDomain {
                pub const m_bIsRunningUnitTests: usize = 0xD8; // bool
                pub const m_bExplicitTimeStepping: usize = 0xD9; // bool
                pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0xDA; // bool
                pub const m_nNextValidateIndex: usize = 0xDC; // int32
                pub const m_Tracepoints: usize = 0xE0; // CUtlVector<CUtlString>
                pub const m_bTestYesOrNoPath: usize = 0xF8; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
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
            pub mod CPulseCell_Step_TestDomainEntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            pub mod CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_TestWaitWithCursorState {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
                pub const m_WakeCancel: usize = 0x58; // CPulse_ResumePoint
                pub const m_WakeFail: usize = 0x68; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestWaitWithCursorState__CursorState_t {
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFailOnCancel: usize = 0x4; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestFuncs_DerivedDomain {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_Test_NoInflow {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            pub mod CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            pub mod CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
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
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x60; // bool
                pub const m_nDesiredKillPriority: usize = 0x64; // PulseCursorCancelPriority_t
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
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x60; // int32
            }
        }
    }
}
