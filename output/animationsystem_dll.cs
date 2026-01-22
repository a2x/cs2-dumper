// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

namespace CS2Dumper.Schemas {
    // Module: animationsystem.dll
    // Class count: 68
    // Enum count: 136
    public static class AnimationsystemDll {
        // Alignment: 4
        // Member count: 17
        public enum SeqCmd_t : uint {
            SeqCmd_Nop = 0x0,
            SeqCmd_LinearDelta = 0x1,
            SeqCmd_FetchFrameRange = 0x2,
            SeqCmd_Slerp = 0x3,
            SeqCmd_Add = 0x4,
            SeqCmd_Subtract = 0x5,
            SeqCmd_Scale = 0x6,
            SeqCmd_Copy = 0x7,
            SeqCmd_Blend = 0x8,
            SeqCmd_Worldspace = 0x9,
            SeqCmd_Sequence = 0xA,
            SeqCmd_FetchCycle = 0xB,
            SeqCmd_FetchFrame = 0xC,
            SeqCmd_IKLockInPlace = 0xD,
            SeqCmd_IKRestoreAll = 0xE,
            SeqCmd_ReverseSequence = 0xF,
            SeqCmd_Transform = 0x10
        }
        // Alignment: 4
        // Member count: 3
        public enum CNmEventRelevance_t : uint {
            ClientOnly = 0x0,
            ServerOnly = 0x1,
            ClientAndServer = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum BoneTransformSpace_t : uint {
            BoneTransformSpace_Invalid = unchecked((uint)-1),
            BoneTransformSpace_Parent = 0x0,
            BoneTransformSpace_Model = 0x1,
            BoneTransformSpace_World = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum CAnimationGraphVisualizerPrimitiveType : uint {
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4
        }
        // Alignment: 1
        // Member count: 3
        public enum NmTransitionRule_t : byte {
            AllowTransition = 0x0,
            ConditionallyAllowTransition = 0x1,
            BlockTransition = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum BinaryNodeTiming : uint {
            UseChild1 = 0x0,
            UseChild2 = 0x1,
            SyncChildren = 0x2
        }
        // Alignment: 1
        // Member count: 3
        public enum NmFollowBoneMode_t : byte {
            RotationAndTranslation = 0x0,
            RotationOnly = 0x1,
            TranslationOnly = 0x2
        }
        // Alignment: 4
        // Member count: 7
        public enum SolveIKChainAnimNodeDebugSetting : uint {
            SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6
        }
        // Alignment: 4
        // Member count: 2
        public enum CNmParticleEvent__Type_t : uint {
            Create = 0x0,
            Create_CFG = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum ParticleFloatBiasType_t : uint {
            PF_BIAS_TYPE_INVALID = unchecked((uint)-1),
            PF_BIAS_TYPE_STANDARD = 0x0,
            PF_BIAS_TYPE_GAIN = 0x1,
            PF_BIAS_TYPE_EXPONENTIAL = 0x2,
            PF_BIAS_TYPE_COUNT = 0x3
        }
        // Alignment: 1
        // Member count: 6
        public enum SharedMovementGait_t : byte {
            eInvalid = unchecked((byte)-1),
            eSlow = 0x0,
            eMedium = 0x1,
            eFast = 0x2,
            eVeryFast = 0x3,
            eCount = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum OrientationWarpRootMotionSource_t : uint {
            eAnimationOrProcedural = 0x0,
            eAnimationOnly = 0x1,
            eProceduralOnly = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum PulseVariableKeysSource_t : uint {
            PRIVATE = 0x0,
            CPP = 0x1,
            VMAP = 0x2,
            VMDL = 0x3,
            XML = 0x4,
            COUNT = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum IKTargetCoordinateSystem : uint {
            IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
            IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
            IKTARGETCOORDINATESYSTEM_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 31
        public enum ParticleFloatType_t : uint {
            PF_TYPE_INVALID = unchecked((uint)-1),
            PF_TYPE_LITERAL = 0x0,
            PF_TYPE_NAMED_VALUE = 0x1,
            PF_TYPE_RANDOM_UNIFORM = 0x2,
            PF_TYPE_RANDOM_BIASED = 0x3,
            PF_TYPE_COLLECTION_AGE = 0x4,
            PF_TYPE_ENDCAP_AGE = 0x5,
            PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
            PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
            PF_TYPE_CONTROL_POINT_SPEED = 0x8,
            PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
            PF_TYPE_CONCURRENT_DEF_COUNT = 0xA,
            PF_TYPE_CLOSEST_CAMERA_DISTANCE = 0xB,
            PF_TYPE_SNAPSHOT_COUNT = 0xC,
            PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xD,
            PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xE,
            PF_TYPE_PARTICLE_NOISE = 0xF,
            PF_TYPE_PARTICLE_AGE = 0x10,
            PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x11,
            PF_TYPE_PARTICLE_FLOAT = 0x12,
            PF_TYPE_PARTICLE_INITIAL_FLOAT = 0x13,
            PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x14,
            PF_TYPE_PARTICLE_INITIAL_VECTOR_COMPONENT = 0x15,
            PF_TYPE_PARTICLE_SPEED = 0x16,
            PF_TYPE_PARTICLE_NUMBER = 0x17,
            PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x18,
            PF_TYPE_PARTICLE_ROPE_SEGMENT = 0x19,
            PF_TYPE_PARTICLE_ROPE_SEGMENT_NORMALIZED = 0x1A,
            PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DISTANCE = 0x1B,
            PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DOT_PRODUCT = 0x1C,
            PF_TYPE_COUNT = 0x1D
        }
        // Alignment: 1
        // Member count: 4
        public enum CNmFloatAngleMathNode__Operation_t : byte {
            ClampTo180 = 0x0,
            ClampTo360 = 0x1,
            FlipHemisphere = 0x2,
            FlipHemisphereNegate = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum VPhysXAggregateData_t__VPhysXFlagEnum_t : uint {
            FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
            FLAG_LEVEL_COLLISION = 0x10,
            FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20
        }
        // Alignment: 1
        // Member count: 5
        public enum CNmRootMotionOverrideNode__OverrideFlags_t : byte {
            AllowMoveX = 0x0,
            AllowMoveY = 0x1,
            AllowMoveZ = 0x2,
            AllowFacingPitch = 0x3,
            ListenForEvents = 0x4
        }
        // Alignment: 1
        // Member count: 23
        public enum NmEasingOperation_t : byte {
            Linear = 0x0,
            InQuad = 0x1,
            OutQuad = 0x2,
            InOutQuad = 0x3,
            InCubic = 0x4,
            OutCubic = 0x5,
            InOutCubic = 0x6,
            InQuart = 0x7,
            OutQuart = 0x8,
            InOutQuart = 0x9,
            InQuint = 0xA,
            OutQuint = 0xB,
            InOutQuint = 0xC,
            InSine = 0xD,
            OutSine = 0xE,
            InOutSine = 0xF,
            InExpo = 0x10,
            OutExpo = 0x11,
            InOutExpo = 0x12,
            InCirc = 0x13,
            OutCirc = 0x14,
            InOutCirc = 0x15,
            None = 0x16
        }
        // Alignment: 4
        // Member count: 5
        public enum EIKEndEffectorRotationFixUpMode : uint {
            None = 0x0,
            MatchTargetOrientation = 0x1,
            LookAtTargetForward = 0x2,
            MaintainParentOrientation = 0x3,
            Count = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum MatterialAttributeTagType_t : uint {
            MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
            MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum PFNoiseTurbulence_t : uint {
            PF_NOISE_TURB_NONE = 0x0,
            PF_NOISE_TURB_HIGHLIGHT = 0x1,
            PF_NOISE_TURB_FEEDBACK = 0x2,
            PF_NOISE_TURB_LOOPY = 0x3,
            PF_NOISE_TURB_CONTRAST = 0x4,
            PF_NOISE_TURB_ALTERNATE = 0x5
        }
        // Alignment: 1
        // Member count: 4
        public enum NmTargetWarpAlgorithm_t : byte {
            Lerp = 0x0,
            Hermite = 0x1,
            HermiteFeaturePreserving = 0x2,
            Bezier = 0x3
        }
        // Alignment: 1
        // Member count: 4
        public enum NmTransitionRuleCondition_t : byte {
            AnyAllowed = 0x0,
            FullyAllowed = 0x1,
            ConditionallyAllowed = 0x2,
            Blocked = 0x3
        }
        // Alignment: 1
        // Member count: 7
        public enum ModelMeshBufferUsage_t : byte {
            MESH_BUFFER_USAGE_NONE = 0x0,
            MESH_BUFFER_USAGE_VB = 0x1,
            MESH_BUFFER_USAGE_IB = 0x2,
            MESH_BUFFER_USAGE_ADJACENCY = 0x4,
            MESH_BUFFER_USAGE_MESHLET_TRIS = 0x8,
            MESH_BUFFER_USAGE_RT_PROXY = 0x10,
            MESH_BUFFER_USAGE_VERTEX_ALBEDO = 0x20
        }
        // Alignment: 4
        // Member count: 2
        public enum TargetWarpTimingMethod : uint {
            ReachDestinationOnRootMotionEnd = 0x0,
            ReachDestinationOnWarpTagEnd = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum ScriptedMoveTo_t : uint {
            eWait = 0x0,
            eMoveWithGait = 0x3,
            eTeleport = 0x4,
            eWaitFacing = 0x5,
            eObsoleteBackCompat1 = 0x1,
            eObsoleteBackCompat2 = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum EDemoBoneSelectionMode : uint {
            CaptureAllBones = 0x0,
            CaptureSelectedBones = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum EPulseGraphExecutionHistoryFlag : uint {
            NO_FLAGS = 0x0,
            CURSOR_ADD_TAG = 0x1,
            CURSOR_REMOVE_TAG = 0x2,
            CURSOR_RETIRED = 0x4,
            REQUIREMENT_PASS = 0x8,
            REQUIREMENT_FAIL = 0x10
        }
        // Alignment: 4
        // Member count: 2
        public enum StepPhase : uint {
            StepPhase_OnGround = 0x0,
            StepPhase_InAir = 0x1
        }
        // Alignment: 4
        // Member count: 26
        public enum FlexOpCode_t : uint {
            FLEX_OP_CONST = 0x1,
            FLEX_OP_FETCH1 = 0x2,
            FLEX_OP_FETCH2 = 0x3,
            FLEX_OP_ADD = 0x4,
            FLEX_OP_SUB = 0x5,
            FLEX_OP_MUL = 0x6,
            FLEX_OP_DIV = 0x7,
            FLEX_OP_NEG = 0x8,
            FLEX_OP_EXP = 0x9,
            FLEX_OP_OPEN = 0xA,
            FLEX_OP_CLOSE = 0xB,
            FLEX_OP_COMMA = 0xC,
            FLEX_OP_MAX = 0xD,
            FLEX_OP_MIN = 0xE,
            FLEX_OP_2WAY_0 = 0xF,
            FLEX_OP_2WAY_1 = 0x10,
            FLEX_OP_NWAY = 0x11,
            FLEX_OP_COMBO = 0x12,
            FLEX_OP_DOMINATE = 0x13,
            FLEX_OP_DME_LOWER_EYELID = 0x14,
            FLEX_OP_DME_UPPER_EYELID = 0x15,
            FLEX_OP_SQRT = 0x16,
            FLEX_OP_REMAPVALCLAMPED = 0x17,
            FLEX_OP_SIN = 0x18,
            FLEX_OP_COS = 0x19,
            FLEX_OP_ABS = 0x1A
        }
        // Alignment: 4
        // Member count: 2
        public enum NmCachedValueMode_t : uint {
            OnEntry = 0x0,
            OnExit = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum AnimNodeNetworkMode : uint {
            ServerAuthoritative = 0x0,
            ClientSimulate = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum VPhysXBodyPart_t__VPhysXFlagEnum_t : uint {
            FLAG_STATIC = 0x1,
            FLAG_KINEMATIC = 0x2,
            FLAG_JOINT = 0x4,
            FLAG_MASS = 0x8,
            FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
            FLAG_DISABLE_CCD = 0x20
        }
        // Alignment: 1
        // Member count: 9
        public enum AnimParamType_t : byte {
            ANIMPARAM_UNKNOWN = 0x0,
            ANIMPARAM_BOOL = 0x1,
            ANIMPARAM_ENUM = 0x2,
            ANIMPARAM_INT = 0x3,
            ANIMPARAM_FLOAT = 0x4,
            ANIMPARAM_VECTOR = 0x5,
            ANIMPARAM_QUATERNION = 0x6,
            ANIMPARAM_GLOBALSYMBOL = 0x7,
            ANIMPARAM_COUNT = 0x8
        }
        // Alignment: 1
        // Member count: 9
        public enum NmEasingFunction_t : byte {
            Linear = 0x0,
            Quad = 0x1,
            Cubic = 0x2,
            Quart = 0x3,
            Quint = 0x4,
            Sine = 0x5,
            Expo = 0x6,
            Circ = 0x7,
            Back = 0x8
        }
        // Alignment: 4
        // Member count: 5
        public enum ParticleModelType_t : uint {
            PM_TYPE_INVALID = 0x0,
            PM_TYPE_NAMED_VALUE_MODEL = 0x1,
            PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
            PM_TYPE_CONTROL_POINT = 0x3,
            PM_TYPE_COUNT = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum IKTargetSource : uint {
            IKTARGETSOURCE_Bone = 0x0,
            IKTARGETSOURCE_AnimgraphParameter = 0x1,
            IKTARGETSOURCE_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 15
        public enum PermModelInfo_t__FlagEnum : uint {
            FLAG_TRANSLUCENT = 0x1,
            FLAG_TRANSLUCENT_TWO_PASS = 0x2,
            FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
            FLAG_SOURCE1_IMPORT = 0x8,
            FLAG_MODEL_PART_CHILD = 0x10,
            FLAG_NAV_GEN_NONE = 0x20,
            FLAG_NAV_GEN_HULL = 0x40,
            FLAG_NO_FORCED_FADE = 0x800,
            FLAG_HAS_SKINNED_MESHES = 0x400,
            FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
            FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
            FLAG_NO_ANIM_EVENTS = 0x100000,
            FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
            FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
            FLAG_MODEL_DOC = 0x800000
        }
        // Alignment: 1
        // Member count: 12
        public enum CNmFloatMathNode__Operator_t : byte {
            Add = 0x0,
            Sub = 0x1,
            Mul = 0x2,
            Div = 0x3,
            Mod = 0x4,
            Abs = 0x5,
            Negate = 0x6,
            Floor = 0x7,
            Ceiling = 0x8,
            IntegerPart = 0x9,
            FractionalPart = 0xA,
            InverseFractionalPart = 0xB
        }
        // Alignment: 1
        // Member count: 2
        public enum CNmSyncEventIndexConditionNode__TriggerMode_t : byte {
            ExactlyAtEventIndex = 0x0,
            GreaterThanEqualToEventIndex = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum ParticleFloatRoundType_t : uint {
            PF_ROUND_TYPE_INVALID = unchecked((uint)-1),
            PF_ROUND_TYPE_NEAREST = 0x0,
            PF_ROUND_TYPE_FLOOR = 0x1,
            PF_ROUND_TYPE_CEIL = 0x2,
            PF_ROUND_TYPE_COUNT = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum PFNoiseType_t : uint {
            PF_NOISE_TYPE_PERLIN = 0x0,
            PF_NOISE_TYPE_SIMPLEX = 0x1,
            PF_NOISE_TYPE_WORLEY = 0x2,
            PF_NOISE_TYPE_CURL = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum AnimParamNetworkSetting : uint {
            Auto = 0x0,
            AlwaysNetwork = 0x1,
            NeverNetwork = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum MorphFlexControllerRemapType_t : uint {
            MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
            MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
            MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
            MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3
        }
        // Alignment: 4
        // Member count: 8
        public enum MeshDrawPrimitiveFlags_t : uint {
            MESH_DRAW_FLAGS_NONE = 0x0,
            MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
            MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
            MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
            MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
            MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
            MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
            MESH_DRAW_FLAGS_DRAW_LAST = 0x80
        }
        // Alignment: 4
        // Member count: 2
        public enum TargetWarpAngleMode_t : uint {
            eFacingHeading = 0x0,
            eMoveHeading = 0x1
        }
        // Alignment: 1
        // Member count: 2
        public enum NmIKBlendMode_t : byte {
            Effector = 0x0,
            Pose = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum ModelBoneFlexComponent_t : uint {
            MODEL_BONE_FLEX_INVALID = unchecked((uint)-1),
            MODEL_BONE_FLEX_TX = 0x0,
            MODEL_BONE_FLEX_TY = 0x1,
            MODEL_BONE_FLEX_TZ = 0x2
        }
        // Alignment: 1
        // Member count: 2
        public enum CNmStateNode__TimedEvent_t__Comparison_t : byte {
            LessThanEqual = 0x0,
            GreaterThanEqual = 0x1
        }
        // Alignment: 1
        // Member count: 3
        public enum PoseType_t : byte {
            POSETYPE_STATIC = 0x0,
            POSETYPE_DYNAMIC = 0x1,
            POSETYPE_INVALID = 0xFF
        }
        // Alignment: 1
        // Member count: 2
        public enum CNmRootMotionData__SamplingMode_t : byte {
            Delta = 0x0,
            WorldSpace = 0x1
        }
        // Alignment: 1
        // Member count: 9
        public enum NmEventConditionRules_t : byte {
            LimitSearchToSourceState = 0x0,
            IgnoreInactiveEvents = 0x1,
            PreferHighestWeight = 0x2,
            PreferHighestProgress = 0x3,
            OperatorOr = 0x4,
            OperatorAnd = 0x5,
            SearchOnlyGraphEvents = 0x6,
            SearchOnlyAnimEvents = 0x7,
            SearchBothGraphAndAnimEvents = 0x8
        }
        // Alignment: 4
        // Member count: 37
        public enum AnimValueSource : uint {
            MoveHeading = 0x0,
            MoveSpeed = 0x1,
            ForwardSpeed = 0x2,
            StrafeSpeed = 0x3,
            FacingHeading = 0x4,
            LookHeading = 0x5,
            LookHeadingNormalized = 0x6,
            LookPitch = 0x7,
            LookDistance = 0x8,
            Parameter = 0x9,
            WayPointHeading = 0xA,
            WayPointDistance = 0xB,
            BoundaryRadius = 0xC,
            TargetMoveHeading = 0xD,
            TargetMoveSpeed = 0xE,
            AccelerationHeading = 0xF,
            AccelerationSpeed = 0x10,
            SlopeHeading = 0x11,
            SlopeAngle = 0x12,
            SlopePitch = 0x13,
            SlopeYaw = 0x14,
            GoalDistance = 0x15,
            AccelerationLeftRight = 0x16,
            AccelerationFrontBack = 0x17,
            RootMotionSpeed = 0x18,
            RootMotionTurnSpeed = 0x19,
            MoveHeadingRelativeToLookHeading = 0x1A,
            MaxMoveSpeed = 0x1B,
            FingerCurl_Thumb = 0x1C,
            FingerCurl_Index = 0x1D,
            FingerCurl_Middle = 0x1E,
            FingerCurl_Ring = 0x1F,
            FingerCurl_Pinky = 0x20,
            FingerSplay_Thumb_Index = 0x21,
            FingerSplay_Index_Middle = 0x22,
            FingerSplay_Middle_Ring = 0x23,
            FingerSplay_Ring_Pinky = 0x24
        }
        // Alignment: 1
        // Member count: 4
        public enum CNmTimeConditionNode__Operator_t : byte {
            LessThan = 0x0,
            LessThanEqual = 0x1,
            GreaterThan = 0x2,
            GreaterThanEqual = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum LinearRootMotionBlendMode_t : uint {
            LERP = 0x0,
            NLERP = 0x1,
            SLERP = 0x2
        }
        // Alignment: 4
        // Member count: 1
        public enum RagdollPoseControl : uint {
            Absolute = 0x0
        }
        // Alignment: 4
        // Member count: 6
        public enum IKSolverType : uint {
            IKSOLVER_Perlin = 0x0,
            IKSOLVER_TwoBone = 0x1,
            IKSOLVER_Fabrik = 0x2,
            IKSOLVER_DogLeg3Bone = 0x3,
            IKSOLVER_CCD = 0x4,
            IKSOLVER_COUNT = 0x5
        }
        // Alignment: 4
        // Member count: 2
        public enum TargetWarpCorrectionMethod : uint {
            ScaleMotion = 0x0,
            AddCorrectionDelta = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum TargetSelectorAngleMode_t : uint {
            eFacingHeading = 0x0,
            eMoveHeading = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum Blend2DMode : uint {
            Blend2DMode_General = 0x0,
            Blend2DMode_Directional = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorExecResult_t : uint {
            Succeeded = 0x0,
            Canceled = 0x1,
            Failed = 0x2,
            OngoingNotify = 0x3
        }
        // Alignment: 1
        // Member count: 3
        public enum HandshakeTagState_t : byte {
            eInactive = 0x0,
            eActive = 0x1,
            eMomentarilyInactive = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ChoiceChangeMethod : uint {
            OnReset = 0x0,
            OnCycleEnd = 0x1,
            OnResetOrCycleEnd = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum ChoiceBlendMethod : uint {
            SingleBlendTime = 0x0,
            PerChoiceBlendTimes = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum VPhysXConstraintParams_t__EnumFlags0_t : uint {
            FLAG0_SHIFT_INTERPENETRATE = 0x0,
            FLAG0_SHIFT_CONSTRAIN = 0x1,
            FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
            FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3
        }
        // Alignment: 4
        // Member count: 9
        public enum ParticleFloatMapType_t : uint {
            PF_MAP_TYPE_INVALID = unchecked((uint)-1),
            PF_MAP_TYPE_DIRECT = 0x0,
            PF_MAP_TYPE_MULT = 0x1,
            PF_MAP_TYPE_REMAP = 0x2,
            PF_MAP_TYPE_REMAP_BIASED = 0x3,
            PF_MAP_TYPE_CURVE = 0x4,
            PF_MAP_TYPE_NOTCHED = 0x5,
            PF_MAP_TYPE_ROUND = 0x6,
            PF_MAP_TYPE_COUNT = 0x7
        }
        // Alignment: 4
        // Member count: 5
        public enum AnimParamVectorType_t : uint {
            ANIMPARAM_VECTOR_TYPE_NONE = 0x0,
            ANIMPARAM_VECTOR_TYPE_POSITION_WS = 0x1,
            ANIMPARAM_VECTOR_TYPE_POSITION_LS = 0x2,
            ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 0x3,
            ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 0x4
        }
        // Alignment: 1
        // Member count: 3
        public enum CNmCurrentSyncEventNode__InfoType_t : byte {
            IndexAndPercentage = 0x0,
            IndexOnly = 0x1,
            PercentageOnly = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum BlendKeyType : uint {
            BlendKey_UserValue = 0x0,
            BlendKey_Velocity = 0x1,
            BlendKey_Distance = 0x2,
            BlendKey_RemainingDistance = 0x3
        }
        // Alignment: 4
        // Member count: 5
        public enum StateActionBehavior : uint {
            STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
            STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
            STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
            STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
            STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 0x4
        }
        // Alignment: 1
        // Member count: 4
        public enum NmRootMotionBlendMode_t : byte {
            Blend = 0x0,
            Additive = 0x1,
            IgnoreSource = 0x2,
            IgnoreTarget = 0x3
        }
        // Alignment: 1
        // Member count: 7
        public enum NmFootPhaseCondition_t : byte {
            LeftFootDown = 0x0,
            LeftFootPassing = 0x1,
            LeftPhase = 0x4,
            RightFootDown = 0x2,
            RightFootPassing = 0x3,
            RightPhase = 0x5,
            None = 0x6
        }
        // Alignment: 4
        // Member count: 22
        public enum ModelSkeletonData_t__BoneFlags_t : uint {
            FLAG_NO_BONE_FLAGS = 0x0,
            FLAG_BONEFLEXDRIVER = 0x4,
            FLAG_CLOTH = 0x8,
            FLAG_PHYSICS = 0x10,
            FLAG_ATTACHMENT = 0x20,
            FLAG_ANIMATION = 0x40,
            FLAG_MESH = 0x80,
            FLAG_HITBOX = 0x100,
            FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
            FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
            FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
            FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
            FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
            FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
            FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
            FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
            FLAG_BONE_MERGE_READ = 0x40000,
            FLAG_BONE_MERGE_WRITE = 0x80000,
            FLAG_ALL_BONE_FLAGS = 0xFFFFF,
            BLEND_PREALIGNED = 0x100000,
            FLAG_RIGIDLENGTH = 0x200000,
            FLAG_PROCEDURAL = 0x400000
        }
        // Alignment: 4
        // Member count: 4
        public enum MorphBundleType_t : uint {
            MORPH_BUNDLE_TYPE_NONE = 0x0,
            MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
            MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
            MORPH_BUNDLE_TYPE_COUNT = 0x3
        }
        // Alignment: 1
        // Member count: 2
        public enum CNmIDComparisonNode__Comparison_t : byte {
            Matches = 0x0,
            DoesntMatch = 0x1
        }
        // Alignment: 1
        // Member count: 3
        public enum NmPoseBlendMode_t : byte {
            Overlay = 0x0,
            Additive = 0x1,
            ModelSpace = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleFloatInputMode_t : uint {
            PF_INPUT_MODE_INVALID = unchecked((uint)-1),
            PF_INPUT_MODE_CLAMPED = 0x0,
            PF_INPUT_MODE_LOOPED = 0x1,
            PF_INPUT_MODE_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum ResetCycleOption : uint {
            Beginning = 0x0,
            SameCycleAsSource = 0x1,
            InverseSourceCycle = 0x2,
            FixedValue = 0x3,
            SameTimeAsSource = 0x4
        }
        // Alignment: 1
        // Member count: 6
        public enum CNmVectorInfoNode__Info_t : byte {
            X = 0x0,
            Y = 0x1,
            Z = 0x2,
            Length = 0x3,
            AngleHorizontal = 0x4,
            AngleVertical = 0x5
        }
        // Alignment: 4
        // Member count: 4
        public enum IKChannelMode : uint {
            TwoBone = 0x0,
            TwoBone_Translate = 0x1,
            OneBone = 0x2,
            OneBone_Translate = 0x3
        }
        // Alignment: 1
        // Member count: 9
        public enum NmGraphValueType_t : byte {
            Unknown = 0x0,
            Bool = 0x1,
            ID = 0x2,
            Float = 0x3,
            Vector = 0x4,
            Target = 0x5,
            BoneMask = 0x6,
            Pose = 0x7,
            Special = 0x8
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleFloatRandomMode_t : uint {
            PF_RANDOM_MODE_INVALID = unchecked((uint)-1),
            PF_RANDOM_MODE_CONSTANT = 0x0,
            PF_RANDOM_MODE_VARYING = 0x1,
            PF_RANDOM_MODE_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 33
        public enum PulseValueType_t : uint {
            PVAL_VOID = unchecked((uint)-1),
            PVAL_BOOL = 0x0,
            PVAL_INT = 0x1,
            PVAL_FLOAT = 0x2,
            PVAL_STRING = 0x3,
            PVAL_VEC2 = 0x4,
            PVAL_VEC3 = 0x5,
            PVAL_QANGLE = 0x6,
            PVAL_VEC3_WORLDSPACE = 0x7,
            PVAL_VEC4 = 0x8,
            PVAL_TRANSFORM = 0x9,
            PVAL_TRANSFORM_WORLDSPACE = 0xA,
            PVAL_COLOR_RGB = 0xB,
            PVAL_GAMETIME = 0xC,
            PVAL_EHANDLE = 0xD,
            PVAL_RESOURCE = 0xE,
            PVAL_RESOURCE_NAME = 0xF,
            PVAL_SNDEVT_GUID = 0x10,
            PVAL_SNDEVT_NAME = 0x11,
            PVAL_ENTITY_NAME = 0x12,
            PVAL_OPAQUE_HANDLE = 0x13,
            PVAL_TYPESAFE_INT = 0x14,
            PVAL_MODEL_MATERIAL_GROUP = 0x15,
            PVAL_CURSOR_FLOW = 0x16,
            PVAL_VARIANT = 0x17,
            PVAL_UNKNOWN = 0x18,
            PVAL_SCHEMA_ENUM = 0x19,
            PVAL_PANORAMA_PANEL_HANDLE = 0x1A,
            PVAL_TEST_HANDLE = 0x1B,
            PVAL_ARRAY = 0x1C,
            PVAL_TYPESAFE_INT64 = 0x1D,
            PVAL_PARTICLE_EHANDLE = 0x1E,
            PVAL_COUNT = 0x1F
        }
        // Alignment: 4
        // Member count: 4
        public enum PFNoiseModifier_t : uint {
            PF_NOISE_MODIFIER_NONE = 0x0,
            PF_NOISE_MODIFIER_LINES = 0x1,
            PF_NOISE_MODIFIER_CLUMPS = 0x2,
            PF_NOISE_MODIFIER_RINGS = 0x3
        }
        // Alignment: 4
        // Member count: 20
        public enum ParticleVecType_t : uint {
            PVEC_TYPE_INVALID = unchecked((uint)-1),
            PVEC_TYPE_LITERAL = 0x0,
            PVEC_TYPE_LITERAL_COLOR = 0x1,
            PVEC_TYPE_NAMED_VALUE = 0x2,
            PVEC_TYPE_PARTICLE_VECTOR = 0x3,
            PVEC_TYPE_PARTICLE_INITIAL_VECTOR = 0x4,
            PVEC_TYPE_PARTICLE_VELOCITY = 0x5,
            PVEC_TYPE_CP_VALUE = 0x6,
            PVEC_TYPE_CP_RELATIVE_POSITION = 0x7,
            PVEC_TYPE_CP_RELATIVE_DIR = 0x8,
            PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x9,
            PVEC_TYPE_FLOAT_COMPONENTS = 0xA,
            PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xB,
            PVEC_TYPE_FLOAT_INTERP_OPEN = 0xC,
            PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xD,
            PVEC_TYPE_RANDOM_UNIFORM = 0xE,
            PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xF,
            PVEC_TYPE_CP_DELTA = 0x10,
            PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x11,
            PVEC_TYPE_COUNT = 0x12
        }
        // Alignment: 1
        // Member count: 5
        public enum NmFootPhase_t : byte {
            LeftFootDown = 0x0,
            RightFootPassing = 0x1,
            RightFootDown = 0x2,
            LeftFootPassing = 0x3,
            None = 0x4
        }
        // Alignment: 4
        // Member count: 8
        public enum CNmTargetInfoNode__Info_t : uint {
            AngleHorizontal = 0x0,
            AngleVertical = 0x1,
            Distance = 0x2,
            DistanceHorizontalOnly = 0x3,
            DistanceVerticalOnly = 0x4,
            DeltaOrientationX = 0x5,
            DeltaOrientationY = 0x6,
            DeltaOrientationZ = 0x7
        }
        // Alignment: 4
        // Member count: 3
        public enum FootstepLandedFootSoundType_t : uint {
            FOOTSOUND_Left = 0x0,
            FOOTSOUND_Right = 0x1,
            FOOTSOUND_UseOverrideSound = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum FootLockSubVisualization : uint {
            FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
            FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum CNmSoundEvent__Position_t : uint {
            None = 0x0,
            World = 0x1,
            EntityPos = 0x2,
            EntityEyePos = 0x3,
            EntityAttachment = 0x4
        }
        // Alignment: 1
        // Member count: 4
        public enum FootstepJumpPhase_t : byte {
            Unknown = 0x0,
            NotJumping = 0x1,
            Jumping = 0x2,
            Landing = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum NmFrameSnapEventMode_t : uint {
            Floor = 0x0,
            Round = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum FootPinningTimingSource : uint {
            FootMotion = 0x0,
            Tag = 0x1,
            Parameter = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum DampingSpeedFunction : uint {
            NoDamping = 0x0,
            Constant = 0x1,
            Spring = 0x2,
            AsymmetricSpring = 0x3
        }
        // Alignment: 4
        // Member count: 6
        public enum PulseApiFeature_t : uint {
            AF_NONE = 0x0,
            AF_ENTITIES = 0x1,
            AF_PANORAMA = 0x2,
            AF_PARTICLES = 0x8,
            AF_FAKE_ENTITIES = 0x10,
            AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20
        }
        // Alignment: 4
        // Member count: 6
        public enum AnimationProcessingType_t : uint {
            ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
            ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
            ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
            ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
            ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
            ANIMATION_PROCESSING_MAX = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum JiggleBoneSimSpace : uint {
            SimSpace_Local = 0x0,
            SimSpace_Model = 0x1,
            SimSpace_World = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum StanceOverrideMode : uint {
            Sequence = 0x0,
            Node = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum IkEndEffectorType : uint {
            IkEndEffector_Attachment = 0x0,
            IkEndEffector_Bone = 0x1
        }
        // Alignment: 2
        // Member count: 3
        public enum AnimScriptType : ushort {
            ANIMSCRIPT_TYPE_INVALID = unchecked((ushort)-1),
            ANIMSCRIPT_FUSE_GENERAL = 0x0,
            ANIMSCRIPT_FUSE_STATEMACHINE = 0x1
        }
        // Alignment: 1
        // Member count: 3
        public enum CNmTimeConditionNode__ComparisonType_t : byte {
            PercentageThroughState = 0x0,
            PercentageThroughSyncEvent = 0x1,
            ElapsedTime = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum SeqPoseSetting_t : uint {
            SEQ_POSE_SETTING_CONSTANT = 0x0,
            SEQ_POSE_SETTING_ROTATION = 0x1,
            SEQ_POSE_SETTING_POSITION = 0x2,
            SEQ_POSE_SETTING_VELOCITY = 0x3
        }
        // Alignment: 4
        // Member count: 13
        public enum AnimParamButton_t : uint {
            ANIMPARAM_BUTTON_NONE = 0x0,
            ANIMPARAM_BUTTON_DPAD_UP = 0x1,
            ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
            ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
            ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
            ANIMPARAM_BUTTON_A = 0x5,
            ANIMPARAM_BUTTON_B = 0x6,
            ANIMPARAM_BUTTON_X = 0x7,
            ANIMPARAM_BUTTON_Y = 0x8,
            ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
            ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xA,
            ANIMPARAM_BUTTON_LTRIGGER = 0xB,
            ANIMPARAM_BUTTON_RTRIGGER = 0xC
        }
        // Alignment: 4
        // Member count: 3
        public enum SelectorTagBehavior_t : uint {
            SelectorTagBehavior_OnWhileCurrent = 0x0,
            SelectorTagBehavior_OffWhenFinished = 0x1,
            SelectorTagBehavior_OffBeforeFinished = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum HandshakeTagType_t : uint {
            eInvalid = unchecked((uint)-1),
            eTask = 0x0,
            eMovement = 0x1,
            eCount = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum OrientationWarpTargetOffsetMode_t : uint {
            eLiteralValue = 0x0,
            eParameter = 0x1,
            eAnimationMovementHeading = 0x2,
            eAnimationMovementHeadingAtEnd = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum OrientationWarpMode_t : uint {
            eInvalid = 0x0,
            eAngle = 0x1,
            eWorldPosition = 0x2
        }
        // Alignment: 2
        // Member count: 125
        public enum PulseInstructionCode_t : ushort {
            INVALID = 0x0,
            IMMEDIATE_HALT = 0x1,
            RETURN_VOID = 0x2,
            RETURN_VALUE = 0x3,
            NOP = 0x4,
            JUMP = 0x5,
            JUMP_COND = 0x6,
            CHUNK_LEAP = 0x7,
            CHUNK_LEAP_COND = 0x8,
            PULSE_CALL_SYNC = 0x9,
            PULSE_CALL_ASYNC_FIRE = 0xA,
            CELL_INVOKE = 0xB,
            LIBRARY_INVOKE = 0xC,
            SET_VAR = 0xD,
            GET_VAR = 0xE,
            GET_VAR_DETACH = 0xF,
            DETACH_REGISTER = 0x10,
            SET_VAR_ARRAY_ELEMENT_1D = 0x11,
            SET_VAR_OBSERVABLE = 0x12,
            GET_CONST = 0x13,
            GET_ARRAY_ELEMENT = 0x14,
            GET_DOMAIN_VALUE = 0x15,
            COPY = 0x16,
            NOT = 0x17,
            NEGATE = 0x18,
            ADD = 0x19,
            SUB = 0x1A,
            MUL = 0x1B,
            DIV = 0x1C,
            MOD = 0x1D,
            LT = 0x1E,
            LTE = 0x1F,
            EQ = 0x20,
            NE = 0x21,
            AND = 0x22,
            OR = 0x23,
            SCALE = 0x24,
            SCALE_INV = 0x25,
            ELEMENT_ACCESS = 0x26,
            CONVERT_VALUE = 0x27,
            REINTERPRET_INSTANCE = 0x28,
            GET_BLACKBOARD_REFERENCE = 0x29,
            SET_BLACKBOARD_REFERENCE = 0x2A,
            LAST_SERIALIZED_CODE = 0x2B,
            NEGATE_INT = 0x2C,
            NEGATE_FLOAT = 0x2D,
            NEGATE_VEC2 = 0x2E,
            NEGATE_VEC3 = 0x2F,
            NEGATE_VEC4 = 0x30,
            ADD_INT = 0x31,
            ADD_FLOAT = 0x32,
            ADD_STRING = 0x33,
            ADD_VEC2 = 0x34,
            ADD_VEC3 = 0x35,
            ADD_VEC3WS_VEC3 = 0x36,
            ADD_VEC3_VEC3WS = 0x37,
            ADD_VEC4 = 0x38,
            ADD_GAMETIME_FLOAT = 0x39,
            ADD_FLOAT_GAMETIME = 0x3A,
            SUB_INT = 0x3B,
            SUB_FLOAT = 0x3C,
            SUB_VEC2 = 0x3D,
            SUB_VEC3 = 0x3E,
            SUB_VEC3WS_VEC3 = 0x3F,
            SUB_VEC3WS_VEC3WS = 0x40,
            SUB_VEC4 = 0x41,
            SUB_GAMETIME_FLOAT = 0x42,
            SUB_GAMETIME = 0x43,
            MUL_INT = 0x44,
            MUL_FLOAT = 0x45,
            DIV_FLOAT = 0x46,
            MOD_INT = 0x47,
            MOD_FLOAT = 0x48,
            LT_INT = 0x49,
            LT_FLOAT = 0x4A,
            LT_GAMETIME = 0x4B,
            LTE_INT = 0x4C,
            LTE_FLOAT = 0x4D,
            LTE_GAMETIME = 0x4E,
            EQ_BOOL = 0x4F,
            EQ_INT = 0x50,
            EQ_FLOAT = 0x51,
            EQ_VEC2 = 0x52,
            EQ_VEC3 = 0x53,
            EQ_VEC3WS = 0x54,
            EQ_VEC4 = 0x55,
            EQ_STRING = 0x56,
            EQ_ENTITY_NAME = 0x57,
            EQ_SCHEMA_ENUM = 0x58,
            EQ_EHANDLE = 0x59,
            EQ_PANEL_HANDLE = 0x5A,
            EQ_OPAQUE_HANDLE = 0x5B,
            EQ_TEST_HANDLE = 0x5C,
            EQ_COLOR_RGB = 0x5D,
            EQ_ARRAY = 0x5E,
            EQ_GAMETIME = 0x5F,
            NE_BOOL = 0x60,
            NE_INT = 0x61,
            NE_FLOAT = 0x62,
            NE_VEC2 = 0x63,
            NE_VEC3 = 0x64,
            NE_VEC3WS = 0x65,
            NE_VEC4 = 0x66,
            NE_STRING = 0x67,
            NE_ENTITY_NAME = 0x68,
            NE_SCHEMA_ENUM = 0x69,
            NE_EHANDLE = 0x6A,
            NE_PANEL_HANDLE = 0x6B,
            NE_OPAQUE_HANDLE = 0x6C,
            NE_TEST_HANDLE = 0x6D,
            NE_COLOR_RGB = 0x6E,
            NE_ARRAY = 0x6F,
            NE_GAMETIME = 0x70,
            SCALE_VEC3 = 0x71,
            SCALE_VEC2 = 0x72,
            SCALE_VEC4 = 0x73,
            SCALE_INV_VEC3 = 0x74,
            SCALE_INV_VEC2 = 0x75,
            SCALE_INV_VEC4 = 0x76,
            ELEMENT_ACCESS_VEC2 = 0x77,
            ELEMENT_ACCESS_VEC3 = 0x78,
            ELEMENT_ACCESS_VEC3WS = 0x79,
            ELEMENT_ACCESS_VEC4 = 0x7A,
            ELEMENT_ACCESS_COLOR_RGB = 0x7B,
            GET_CONST_INLINE_STORAGE = 0x7C
        }
        // Alignment: 4
        // Member count: 5
        public enum ParticleTransformType_t : uint {
            PT_TYPE_INVALID = 0x0,
            PT_TYPE_NAMED_VALUE = 0x1,
            PT_TYPE_CONTROL_POINT = 0x2,
            PT_TYPE_CONTROL_POINT_RANGE = 0x3,
            PT_TYPE_COUNT = 0x4
        }
        // Alignment: 4
        // Member count: 18
        public enum ParticleAttachment_t : uint {
            PATTACH_INVALID = unchecked((uint)-1),
            PATTACH_ABSORIGIN = 0x0,
            PATTACH_ABSORIGIN_FOLLOW = 0x1,
            PATTACH_CUSTOMORIGIN = 0x2,
            PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
            PATTACH_POINT = 0x4,
            PATTACH_POINT_FOLLOW = 0x5,
            PATTACH_EYES_FOLLOW = 0x6,
            PATTACH_OVERHEAD_FOLLOW = 0x7,
            PATTACH_WORLDORIGIN = 0x8,
            PATTACH_ROOTBONE_FOLLOW = 0x9,
            PATTACH_RENDERORIGIN_FOLLOW = 0xA,
            PATTACH_MAIN_VIEW = 0xB,
            PATTACH_WATERWAKE = 0xC,
            PATTACH_CENTER_FOLLOW = 0xD,
            PATTACH_CUSTOM_GAME_STATE_1 = 0xE,
            PATTACH_HEALTHBAR = 0xF,
            MAX_PATTACH_TYPES = 0x10
        }
        // Alignment: 4
        // Member count: 3
        public enum FieldNetworkOption : uint {
            Auto = 0x0,
            ForceEnable = 0x1,
            ForceDisable = 0x2
        }
        // Alignment: 1
        // Member count: 6
        public enum NmGraphEventTypeCondition_t : byte {
            Entry = 0x0,
            FullyInState = 0x1,
            Exit = 0x2,
            Timed = 0x3,
            Generic = 0x4,
            Any = 0x5
        }
        // Alignment: 1
        // Member count: 10
        public enum CNmTransitionNode__TransitionOptions_t : byte {
            None = 0x0,
            ClampDuration = 0x1,
            Synchronized = 0x2,
            MatchSourceTime = 0x3,
            MatchSyncEventIndex = 0x4,
            MatchSyncEventID = 0x5,
            MatchSyncEventPercentage = 0x6,
            PreferClosestSyncEventID = 0x7,
            MatchTimeInSeconds = 0x8,
            OffsetTimeInSeconds = 0x9
        }
        // Alignment: 1
        // Member count: 5
        public enum CNmFloatComparisonNode__Comparison_t : byte {
            GreaterThanEqual = 0x0,
            LessThanEqual = 0x1,
            NearEqual = 0x2,
            GreaterThan = 0x3,
            LessThan = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum VPhysXJoint_t__Flags_t : uint {
            JOINT_FLAGS_NONE = 0x0,
            JOINT_FLAGS_BODY1_FIXED = 0x1,
            JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum ScriptedHeldWeaponBehavior_t : uint {
            eInvalid = unchecked((uint)-1),
            eHolster = 0x0,
            eDeploy = 0x1,
            eDrop = 0x2
        }
        // Alignment: 1
        // Member count: 3
        public enum VelocityMetricMode : byte {
            DirectionOnly = 0x0,
            MagnitudeOnly = 0x1,
            DirectionAndMagnitude = 0x2
        }
        // Alignment: 1
        // Member count: 5
        public enum FacingMode : byte {
            FacingMode_Invalid = 0x0,
            FacingMode_Manual = 0x1,
            FacingMode_Path = 0x2,
            FacingMode_LookTarget = 0x3,
            FacingMode_ManualPosition = 0x4
        }
        // Alignment: 1
        // Member count: 3
        public enum VertexAlbedoFormat_t : byte {
            VERTEX_ALBEDO_NONE = 0x0,
            VERTEX_ALBEDO_8888 = 0x1,
            VERTEX_ALBEDO_565 = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum AimMatrixBlendMode : uint {
            AimMatrixBlendMode_None = 0x0,
            AimMatrixBlendMode_Additive = 0x1,
            AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
            AimMatrixBlendMode_BoneMask = 0x3
        }
        // Alignment: 4
        // Member count: 7
        public enum AnimationSnapshotType_t : uint {
            ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
            ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
            ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
            ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
            ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
            ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
            ANIMATION_SNAPSHOT_MAX = 0x6
        }
        // Alignment: 1
        // Member count: 5
        public enum NmTargetWarpRule_t : byte {
            WarpXY = 0x0,
            WarpZ = 0x1,
            WarpXYZ = 0x2,
            RotationOnly = 0x3,
            FixedSection = 0x4
        }
        // Alignment: 4
        // Member count: 8
        public enum FootFallTagFoot_t : uint {
            FOOT1 = 0x0,
            FOOT2 = 0x1,
            FOOT3 = 0x2,
            FOOT4 = 0x3,
            FOOT5 = 0x4,
            FOOT6 = 0x5,
            FOOT7 = 0x6,
            FOOT8 = 0x7
        }
        // Alignment: 4
        // Member count: 4
        public enum ChoiceMethod : uint {
            WeightedRandom = 0x0,
            WeightedRandomNoRepeat = 0x1,
            Iterate = 0x2,
            IterateRandom = 0x3
        }
        // Alignment: 4
        // Member count: 14
        public enum AnimVectorSource : uint {
            MoveDirection = 0x0,
            FacingPosition = 0x1,
            LookDirection = 0x2,
            VectorParameter = 0x3,
            WayPointDirection = 0x4,
            Acceleration = 0x5,
            SlopeNormal = 0x6,
            SlopeNormal_WorldSpace = 0x7,
            LookTarget = 0x8,
            LookTarget_WorldSpace = 0x9,
            WayPointPosition = 0xA,
            GoalPosition = 0xB,
            RootMotionVelocity = 0xC,
            ManualTarget_WorldSpace = 0xD
        }
        // Alignment: 4
        // Member count: 4
        public enum IkTargetType : uint {
            IkTarget_Attachment = 0x0,
            IkTarget_Bone = 0x1,
            IkTarget_Parameter_ModelSpace = 0x2,
            IkTarget_Parameter_WorldSpace = 0x3
        }
        // Alignment: 1
        // Member count: 3
        public enum RenderMeshSlotType_t : byte {
            RENDERMESH_SLOT_INVALID = unchecked((byte)-1),
            RENDERMESH_SLOT_PER_VERTEX = 0x0,
            RENDERMESH_SLOT_PER_INSTANCE = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum BoneMaskBlendSpace : uint {
            BlendSpace_Parent = 0x0,
            BlendSpace_Model = 0x1,
            BlendSpace_Model_RotationOnly = 0x2,
            BlendSpace_Model_TranslationOnly = 0x3
        }
        // Alignment: 4
        // Member count: 8
        public enum MovementCapability_t : uint {
            eStrafe = 0x0,
            eIdleTurn = 0x1,
            eStart = 0x2,
            eStop = 0x3,
            eInstantStop = 0x4,
            eShuffle = 0x5,
            ePlantedTurn = 0x6,
            eCount = 0x7
        }
        // Alignment: 4
        // Member count: 5
        public enum ModelConfigAttachmentType_t : uint {
            MODEL_CONFIG_ATTACHMENT_INVALID = unchecked((uint)-1),
            MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
            MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
            MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
            MODEL_CONFIG_ATTACHMENT_COUNT = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum BinaryNodeChildOption : uint {
            Child1 = 0x0,
            Child2 = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum NPCPhysicsHullType_t : uint {
            eInvalid = 0x0,
            eGroundCapsule = 0x1,
            eCenteredCapsule = 0x2,
            eGenericCapsule = 0x3,
            eGroundBox = 0x4
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseDomainValueType_t : uint {
            INVALID = unchecked((uint)-1),
            ENTITY_NAME = 0x0,
            PANEL_ID = 0x1,
            COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum JumpCorrectionMethod : uint {
            ScaleMotion = 0x0,
            AddCorrectionDelta = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum MoodType_t : uint {
            eMoodType_Head = 0x0,
            eMoodType_Body = 0x1
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x98; // bool
            public const nint m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_PickBestOutflowSelector {
            public const nint m_nCheckType = 0x48; // PulseBestOutflowRules_t
            public const nint m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }
        // Parent: None
        // Field count: 0
        public static class CParticleBindingRealPulse {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        // MPropertyFriendlyName
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xC0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 4
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // PulseSymbol_t
            public const nint m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0x14; // int32
            public const nint m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // PulseSymbol_t
            public const nint m_DomainSubType = 0x18; // CPulseValueFullType
            public const nint m_ParentMapName = 0x30; // PulseSymbol_t
            public const nint m_ParentXmlName = 0x40; // PulseSymbol_t
            public const nint m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x80; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
            public const nint m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
            public const nint m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
            public const nint m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_FireCursors {
            public const nint m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IntervalTimer__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
            public const nint m_flWaitInterval = 0x8; // float32
            public const nint m_flWaitIntervalHigh = 0xC; // float32
            public const nint m_bCompleteOnNextWake = 0x10; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseRequirement {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        public static class CPulseCell_BaseState {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OutflowWithRequirements_t {
            public const nint m_Connection = 0x0; // CPulse_OutflowConnection
            public const nint m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
            public const nint m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IsRequirementValid {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Gradient {
            public const nint m_Gradient = 0x48; // CColorGradient
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            public const nint m_OutflowID = 0x0; // CGlobalSymbol
            public const nint m_Connection = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 0
        public static class CBasePulseGraphInstance {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x80; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x30; // PulseSymbol_t
            public const nint m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x48; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_IntervalTimer {
            public const nint m_Completed = 0x48; // CPulse_ResumePoint
            public const nint m_OnInterval = 0x90; // SignatureOutflow_Continue
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Curve {
            public const nint m_Curve = 0x48; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x80; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseArraylib {
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Continue {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x80; // PulseSymbol_t
            public const nint m_SourceOutput = 0x90; // PulseSymbol_t
            public const nint m_ExpectedParamType = 0xA0; // CPulseValueFullType
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CParticleCollectionBindingInstance {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LimitCount__InstanceState_t {
            public const nint m_nCurrentCount = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_DebugLog {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t {
            public const nint m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_IsRequirementValid__Criteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_ObservableVariableListener {
            public const nint m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_bSelfReference = 0x82; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseSelectorOutflowList_t {
            public const nint m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x80; // PulseSymbol_t
            public const nint m_Description = 0x90; // CUtlString
            public const nint m_bIsPublic = 0x98; // bool
            public const nint m_ReturnType = 0xA0; // CPulseValueFullType
            public const nint m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_BooleanSwitchState {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_SubGraph = 0xC0; // CPulse_OutflowConnection
            public const nint m_WhenTrue = 0x108; // CPulse_OutflowConnection
            public const nint m_WhenFalse = 0x150; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_BlackboardReference {
            public const nint m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            public const nint m_BlackboardResource = 0x8; // PulseSymbol_t
            public const nint m_nNodeID = 0x18; // PulseDocNodeID_t
            public const nint m_NodeName = 0x20; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // PulseSymbol_t
            public const nint m_nEditorNodeID = 0x10; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x18; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x48; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x50; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_InlineNodeSkipSelector {
            public const nint m_nFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_bAnd = 0x4C; // bool
            public const nint m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
            public const nint m_FailOutflow = 0x68; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_LimitCount {
            public const nint m_nLimitCount = 0x48; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // PulseSymbol_t
            public const nint m_GameBlackboard = 0x58; // PulseSymbol_t
            public const nint m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x80; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseObservableBoolExpression_t {
            public const nint m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
            public const nint m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
            public const nint m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x98; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomFloat {
        }
        // Parent: None
        // Field count: 0
        public static class CPulseExecCursor {
        }
    }
}
