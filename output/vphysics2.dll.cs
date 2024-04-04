// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-04 13:40:42.514657500 UTC

namespace CS2Dumper.Schemas {
    // Module: vphysics2.dll
    // Classes count: 124
    // Enums count: 0
    public static class Vphysics2Dll {
        // Parent: None
        // Fields count: 35
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
            public const nint m_vPoint0 = 0x80; // 
            public const nint m_vPoint1 = 0x8C; // 
            public const nint m_nCollisionMask = 0x98; // uint16
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeIndexedJiggleBone {
            public const nint m_nNode = 0x0; // uint32
            public const nint m_nJiggleParent = 0x4; // uint32
            public const nint m_jiggleBone = 0x8; // CFeJiggleBone
        }
        // Parent: None
        // Fields count: 7
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
        // Fields count: 7
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeQuad_t {
            public const nint nNode = 0x0; // uint16[4]
            public const nint flSlack = 0x8; // float32
            public const nint vShape = 0xC; // Vector4D[4]
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 5
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
        // Fields count: 5
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdRodConstraintAnim_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint f4Weight0 = 0x10; // fltx4
            public const nint f4RelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Fields count: 5
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
        // Fields count: 4
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
        // Fields count: 5
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOffset_t {
            public const nint vOffset = 0x0; // 
            public const nint nCtrlParent = 0xC; // uint16
            public const nint nCtrlChild = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlOsOffset_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nCtrlChild = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFollowNode_t {
            public const nint nParentNode = 0x0; // uint16
            public const nint nChildNode = 0x2; // uint16
            public const nint flWeight = 0x4; // float32
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 4
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
        // Fields count: 5
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
        // Fields count: 5
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
        // Fields count: 4
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
        // Fields count: 4
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
        // Fields count: 5
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
        // Fields count: 5
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
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeTreeChildren_t {
            public const nint nChild = 0x0; // uint16[2]
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitMatrix_t {
            public const nint bone = 0x0; // CTransform
            public const nint vCenter = 0x20; // 
            public const nint nEnd = 0x2C; // uint16
            public const nint nNode = 0x2E; // uint16
            public const nint nBeginDynamic = 0x30; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitWeight_t {
            public const nint flWeight = 0x0; // float32
            public const nint nNode = 0x4; // uint16
            public const nint nDummy = 0x6; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeNodeReverseOffset_t {
            public const nint vOffset = 0x0; // 
            public const nint nBoneCtrl = 0xC; // uint16
            public const nint nTargetNode = 0xE; // uint16
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeAnimStrayRadius_t {
            public const nint nNode = 0x0; // uint16[2]
            public const nint flMaxDist = 0x4; // float32
            public const nint flRelaxationFactor = 0x8; // float32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSimdAnimStrayRadius_t {
            public const nint nNode = 0x0; // uint16[4][2]
            public const nint flMaxDist = 0x10; // fltx4
            public const nint flRelaxationFactor = 0x20; // fltx4
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeCtrlSoftOffset_t {
            public const nint nCtrlParent = 0x0; // uint16
            public const nint nCtrlChild = 0x2; // uint16
            public const nint vOffset = 0x4; // 
            public const nint flAlpha = 0x10; // float32
        }
        // Parent: None
        // Fields count: 5
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
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBoxRigid_t {
            public const nint tmFrame2 = 0x0; // CTransform
            public const nint nNode = 0x20; // uint16
            public const nint nCollisionMask = 0x22; // uint16
            public const nint vSize = 0x24; // 
            public const nint nVertexMapIndex = 0x30; // uint16
            public const nint nFlags = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeRigidColliderIndices_t {
            public const nint m_nTaperedCapsuleRigidIndex = 0x0; // uint16
            public const nint m_nSphereRigidIndex = 0x2; // uint16
            public const nint m_nBoxRigidIndex = 0x4; // uint16
            public const nint m_nCollisionPlaneIndex = 0x6; // uint16
        }
        // Parent: None
        // Fields count: 8
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
        // Fields count: 12
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
            public const nint vCenterOfMass = 0x20; // 
            public const nint flVolumetricSolveStrength = 0x2C; // float32
            public const nint nScaleSourceNode = 0x30; // int16
            public const nint nNodeListCount = 0x32; // uint16
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 4
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
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FourVectors2D {
            public const nint x = 0x0; // fltx4
            public const nint y = 0x10; // fltx4
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeEdgeDesc_t {
            public const nint nEdge = 0x0; // uint16[2]
            public const nint nSide = 0x4; // uint16[2][2]
            public const nint nVirtElem = 0xC; // uint16[2]
        }
        // Parent: None
        // Fields count: 12
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
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeWeightedNode_t {
            public const nint nNode = 0x0; // uint16
            public const nint nWeight = 0x2; // uint16
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBandBendLimit_t {
            public const nint flDistMin = 0x0; // float32
            public const nint flDistMax = 0x4; // float32
            public const nint nNode = 0x8; // uint16[6]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSoftParent_t {
            public const nint nParent = 0x0; // int32
            public const nint flAlpha = 0x4; // float32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnPlane_t {
            public const nint m_vNormal = 0x0; // 
            public const nint m_flOffset = 0xC; // float32
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CovMatrix3 {
            public const nint m_vDiag = 0x0; // 
            public const nint m_flXY = 0xC; // float32
            public const nint m_flXZ = 0x10; // float32
            public const nint m_flYZ = 0x14; // float32
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeFitInfluence_t {
            public const nint nVertexNode = 0x0; // uint32
            public const nint flWeight = 0x4; // float32
            public const nint nMatrixNode = 0x8; // uint32
        }
        // Parent: FeTaperedCapsuleRigid_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildTaperedCapsuleRigid_t {
            public const nint m_nPriority = 0x30; // int32
            public const nint m_nVertexMapHash = 0x34; // uint32
        }
        // Parent: FeBoxRigid_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildBoxRigid_t {
            public const nint m_nPriority = 0x40; // int32
            public const nint m_nVertexMapHash = 0x44; // uint32
        }
        // Parent: FeSphereRigid_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeBuildSphereRigid_t {
            public const nint m_nPriority = 0x20; // int32
            public const nint m_nVertexMapHash = 0x24; // uint32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeSourceEdge_t {
            public const nint nNode = 0x0; // uint16[2]
        }
        // Parent: None
        // Fields count: 6
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
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFeVertexMapBuildArray {
            public const nint m_Array = 0x0; // CUtlVector<FeVertexMapBuild_t*>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FeProxyVertexMap_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_flWeight = 0x8; // float32
        }
        // Parent: None
        // Fields count: 7
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
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class Dop26_t {
            public const nint m_flSupport = 0x0; // float32[26]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnCapsule_t {
            public const nint m_vCenter = 0x0; // Vector[2]
            public const nint m_flRadius = 0x18; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnVertex_t {
            public const nint m_nEdge = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnFace_t {
            public const nint m_nEdge = 0x0; // uint8
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRegionSVM {
            public const nint m_Planes = 0x0; // CUtlVector<RnPlane_t>
            public const nint m_Nodes = 0x18; // CUtlVector<uint32>
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnHull_t {
            public const nint m_vCentroid = 0x0; // 
            public const nint m_flMaxAngularRadius = 0xC; // float32
            public const nint m_Bounds = 0x10; // AABB_t
            public const nint m_vOrthographicAreas = 0x28; // 
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
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnTriangle_t {
            public const nint m_nIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnWing_t {
            public const nint m_nIndex = 0x0; // int32[3]
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnNode_t {
            public const nint m_vMin = 0x0; // 
            public const nint m_nChildren = 0xC; // uint32
            public const nint m_vMax = 0x10; // 
            public const nint m_nTriangleOffset = 0x1C; // uint32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnMesh_t {
            public const nint m_vMin = 0x0; // 
            public const nint m_vMax = 0xC; // 
            public const nint m_Nodes = 0x18; // CUtlVector<RnNode_t>
            public const nint m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
            public const nint m_Triangles = 0x48; // CUtlVector<RnTriangle_t>
            public const nint m_Wings = 0x60; // CUtlVector<RnWing_t>
            public const nint m_Materials = 0x78; // CUtlVector<uint8>
            public const nint m_vOrthographicAreas = 0x90; // 
            public const nint m_nFlags = 0x9C; // uint32
            public const nint m_nDebugFlags = 0xA0; // uint32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnShapeDesc_t {
            public const nint m_nCollisionAttributeIndex = 0x0; // uint32
            public const nint m_nSurfacePropertyIndex = 0x4; // uint32
            public const nint m_UserFriendlyName = 0x8; // CUtlString
        }
        // Parent: None
        // Fields count: 8
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
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CastSphereSATParams_t {
            public const nint m_vRayStart = 0x0; // 
            public const nint m_vRayDelta = 0xC; // 
            public const nint m_flRadius = 0x18; // float32
            public const nint m_flMaxFraction = 0x1C; // float32
            public const nint m_flScale = 0x20; // float32
            public const nint m_pHull = 0x28; // RnHull_t*
        }
        // Parent: None
        // Fields count: 35
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RnBodyDesc_t {
            public const nint m_sDebugName = 0x0; // CUtlString
            public const nint m_vPosition = 0x8; // 
            public const nint m_qOrientation = 0x14; // QuaternionStorage
            public const nint m_vLinearVelocity = 0x24; // 
            public const nint m_vAngularVelocity = 0x30; // 
            public const nint m_vLocalMassCenter = 0x3C; // 
            public const nint m_LocalInertiaInv = 0x48; // Vector[3]
            public const nint m_flMassInv = 0x6C; // float32
            public const nint m_flGameMass = 0x70; // float32
            public const nint m_flInertiaScaleInv = 0x74; // float32
            public const nint m_flLinearDamping = 0x78; // float32
            public const nint m_flAngularDamping = 0x7C; // float32
            public const nint m_flLinearDrag = 0x80; // float32
            public const nint m_flAngularDrag = 0x84; // float32
            public const nint m_flLinearBuoyancyDrag = 0x88; // float32
            public const nint m_flAngularBuoyancyDrag = 0x8C; // float32
            public const nint m_vLastAwakeForceAccum = 0x90; // 
            public const nint m_vLastAwakeTorqueAccum = 0x9C; // 
            public const nint m_flBuoyancyFactor = 0xA8; // float32
            public const nint m_flGravityScale = 0xAC; // float32
            public const nint m_flTimeScale = 0xB0; // float32
            public const nint m_nBodyType = 0xB4; // int32
            public const nint m_nGameIndex = 0xB8; // uint32
            public const nint m_nGameFlags = 0xBC; // uint32
            public const nint m_nMinVelocityIterations = 0xC0; // int8
            public const nint m_nMinPositionIterations = 0xC1; // int8
            public const nint m_nMassPriority = 0xC2; // int8
            public const nint m_bEnabled = 0xC3; // bool
            public const nint m_bSleeping = 0xC4; // bool
            public const nint m_bIsContinuousEnabled = 0xC5; // bool
            public const nint m_bDragEnabled = 0xC6; // bool
            public const nint m_bBuoyancyDragEnabled = 0xC7; // bool
            public const nint m_bGravityDisabled = 0xC8; // bool
            public const nint m_bSpeculativeEnabled = 0xC9; // bool
            public const nint m_bHasShadowController = 0xCA; // bool
        }
        // Parent: RnBodyDesc_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class vphysics_save_cphysicsbody_t {
            public const nint m_nOldPointer = 0xD0; // uint64
        }
        // Parent: CBaseConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTiltTwistConstraint {
            public const nint m_nTargetAxis = 0x70; // int32
            public const nint m_nSlaveAxis = 0x74; // int32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_LibraryA {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntity_tAPI {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_RegisterInfo {
            public const nint m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
            public const nint m_Type = 0x8; // CPulseValueFullType
            public const nint m_OriginName = 0x18; // CKV3MemberNameWithStorage
            public const nint m_nWrittenByInstruction = 0x50; // int32
            public const nint m_nLastReadByInstruction = 0x54; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Chunk {
            public const nint m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
            public const nint m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
            public const nint m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PGDInstruction_t {
            public const nint m_nCode = 0x0; // PulseInstructionCode_t
            public const nint m_nVar = 0x4; // PulseRuntimeVarIndex_t
            public const nint m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
            public const nint m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
            public const nint m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
            public const nint m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
            public const nint m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
            public const nint m_nDestInstruction = 0x18; // int32
            public const nint m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
            public const nint m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
            public const nint m_DomainValue = 0x28; // CBufferString
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Variable {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_Type = 0x10; // CPulseValueFullType
            public const nint m_DefaultValue = 0x20; // KeyValues3
            public const nint m_bIsPublic = 0x32; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Constant {
            public const nint m_Type = 0x0; // CPulseValueFullType
            public const nint m_Value = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_PublicOutput {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_ParamType = 0x10; // CPulseValueFullType
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutputConnection {
            public const nint m_SourceOutput = 0x0; // CUtlSymbolLarge
            public const nint m_TargetEntity = 0x8; // CUtlSymbolLarge
            public const nint m_TargetInput = 0x10; // CUtlSymbolLarge
            public const nint m_Param = 0x18; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x20; // CUtlSymbolLarge
            public const nint m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x30; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseRegisterMap_t {
            public const nint m_Inparams = 0x0; // KeyValues3
            public const nint m_Outparams = 0x10; // KeyValues3
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // CUtlSymbolLarge
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x10; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x30; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x38; // int32
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // CUtlSymbolLarge
            public const nint m_ParentMapName = 0x10; // CUtlSymbolLarge
            public const nint m_Chunks = 0x18; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x30; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x48; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x60; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0x78; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0x90; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xA8; // CUtlVector<CPulse_Constant>
            public const nint m_OutputConnections = 0xC0; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
            public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0xC; // int32
        }
        // Parent: CPulse_OutflowConnection
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_ResumePoint {
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRuntimeMethodArg {
            public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
            public const nint m_Description = 0x38; // CUtlString
            public const nint m_Type = 0x40; // CPulseValueFullType
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
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
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8>
            public const nint m_nNextShuffle = 0x20; // int32
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
        public static class CPulseCell_Outflow_TestRandomYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x58; // CPulse_OutflowConnection
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
        public static class CPulseCell_Outflow_TestExplicitYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x58; // CPulse_OutflowConnection
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
        public static class CPulseCell_Value_TestValue50 {
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
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_bPauseForPreviousEvents = 0x4; // bool
            public const nint m_bCallModeSync = 0x5; // bool
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_TestDomain {
            public const nint m_bIsRunningUnitTests = 0xD8; // bool
            public const nint m_bExplicitTimeStepping = 0xD9; // bool
            public const nint m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
            public const nint m_nNextValidateIndex = 0xDC; // int32
            public const nint m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
            public const nint m_bTestYesOrNoPath = 0xF8; // bool
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainTracepoint {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainCreateFakeEntity {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainDestroyFakeEntity {
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
        public static class CPulseCell_Step_TestDomainEntFire {
            public const nint m_Input = 0x48; // CUtlString
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainGetEntityName {
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainFindEntityByName {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_TestWaitWithCursorState {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
            public const nint m_WakeCancel = 0x58; // CPulse_ResumePoint
            public const nint m_WakeFail = 0x68; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_TestWaitWithCursorState__CursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFailOnCancel = 0x4; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_DerivedDomain {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_NoInflow {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_WithDefault {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TurtleGraphics {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
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
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x60; // bool
            public const nint m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
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
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x60; // int32
        }
    }
}
