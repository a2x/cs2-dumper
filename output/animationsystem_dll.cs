// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

namespace CS2Dumper.Schemas {
    // Module: animationsystem.dll
    // Class count: 497
    // Enum count: 94
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
        // Alignment: 1
        // Member count: 6
        public enum MovementGait_t : byte {
            eInvalid = unchecked((byte)-1),
            eSlow = 0x0,
            eMedium = 0x1,
            eFast = 0x2,
            eVeryFast = 0x3,
            eCount = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum IKTargetCoordinateSystem : uint {
            IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
            IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
            IKTARGETCOORDINATESYSTEM_COUNT = 0x2
        }
        // Alignment: 1
        // Member count: 5
        public enum NmStateEventTypeCondition_t : byte {
            Entry = 0x0,
            FullyInState = 0x1,
            Exit = 0x2,
            Timed = 0x3,
            Any = 0x4
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
        // Alignment: 1
        // Member count: 4
        public enum NmTargetWarpAlgorithm_t : byte {
            Lerp = 0x0,
            Hermite = 0x1,
            HermiteFeaturePreserving = 0x2,
            Bezier = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum AnimPoseControl : uint {
            NoPoseControl = 0x0,
            AbsolutePoseControl = 0x1,
            RelativePoseControl = 0x2
        }
        // Alignment: 1
        // Member count: 4
        public enum NmTransitionRuleCondition_t : byte {
            AnyAllowed = 0x0,
            FullyAllowed = 0x1,
            ConditionallyAllowed = 0x2,
            Blocked = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum EDemoBoneSelectionMode : uint {
            CaptureAllBones = 0x0,
            CaptureSelectedBones = 0x1
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
        // Member count: 5
        public enum VPhysXBodyPart_t__VPhysXFlagEnum_t : uint {
            FLAG_STATIC = 0x1,
            FLAG_KINEMATIC = 0x2,
            FLAG_JOINT = 0x4,
            FLAG_MASS = 0x8,
            FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10
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
        // Member count: 4
        public enum CNmFloatMathNode__Operator_t : byte {
            Add = 0x0,
            Sub = 0x1,
            Mul = 0x2,
            Div = 0x3
        }
        // Alignment: 1
        // Member count: 2
        public enum CNmSyncEventIndexConditionNode__TriggerMode_t : byte {
            ExactlyAtEventIndex = 0x0,
            GreaterThanEqualToEventIndex = 0x1
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
        // Member count: 4
        public enum ModelBoneFlexComponent_t : uint {
            MODEL_BONE_FLEX_INVALID = unchecked((uint)-1),
            MODEL_BONE_FLEX_TX = 0x0,
            MODEL_BONE_FLEX_TY = 0x1,
            MODEL_BONE_FLEX_TZ = 0x2
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
            SearchOnlyStateEvents = 0x6,
            SearchOnlyAnimEvents = 0x7,
            SearchBothStateAndAnimEvents = 0x8
        }
        // Alignment: 4
        // Member count: 36
        public enum AnimValueSource : uint {
            MoveHeading = 0x0,
            MoveSpeed = 0x1,
            ForwardSpeed = 0x2,
            StrafeSpeed = 0x3,
            FacingHeading = 0x4,
            LookHeading = 0x5,
            LookPitch = 0x6,
            LookDistance = 0x7,
            Parameter = 0x8,
            WayPointHeading = 0x9,
            WayPointDistance = 0xA,
            BoundaryRadius = 0xB,
            TargetMoveHeading = 0xC,
            TargetMoveSpeed = 0xD,
            AccelerationHeading = 0xE,
            AccelerationSpeed = 0xF,
            SlopeHeading = 0x10,
            SlopeAngle = 0x11,
            SlopePitch = 0x12,
            SlopeYaw = 0x13,
            GoalDistance = 0x14,
            AccelerationLeftRight = 0x15,
            AccelerationFrontBack = 0x16,
            RootMotionSpeed = 0x17,
            RootMotionTurnSpeed = 0x18,
            MoveHeadingRelativeToLookHeading = 0x19,
            MaxMoveSpeed = 0x1A,
            FingerCurl_Thumb = 0x1B,
            FingerCurl_Index = 0x1C,
            FingerCurl_Middle = 0x1D,
            FingerCurl_Ring = 0x1E,
            FingerCurl_Pinky = 0x1F,
            FingerSplay_Thumb_Index = 0x20,
            FingerSplay_Index_Middle = 0x21,
            FingerSplay_Middle_Ring = 0x22,
            FingerSplay_Ring_Pinky = 0x23
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
        // Member count: 2
        public enum RagdollPoseControl : uint {
            Absolute = 0x0,
            Relative = 0x1
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
        public enum Blend2DMode : uint {
            Blend2DMode_General = 0x0,
            Blend2DMode_Directional = 0x1
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
        // Member count: 4
        public enum BlendKeyType : uint {
            BlendKey_UserValue = 0x0,
            BlendKey_Velocity = 0x1,
            BlendKey_Distance = 0x2,
            BlendKey_RemainingDistance = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum StateActionBehavior : uint {
            STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
            STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
            STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
            STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3
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
        // Member count: 6
        public enum NmFootPhaseCondition_t : byte {
            LeftFootDown = 0x0,
            LeftFootPassing = 0x1,
            LeftPhase = 0x4,
            RightFootDown = 0x2,
            RightFootPassing = 0x3,
            RightPhase = 0x5
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
        // Alignment: 1
        // Member count: 4
        public enum NmFootPhase_t : byte {
            LeftFootDown = 0x0,
            RightFootPassing = 0x1,
            RightFootDown = 0x2,
            LeftFootPassing = 0x3
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
        // Member count: 3
        public enum DampingSpeedFunction : uint {
            NoDamping = 0x0,
            Constant = 0x1,
            Spring = 0x2
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
        // Member count: 4
        public enum CNmTimeConditionNode__ComparisonType_t : byte {
            PercentageThroughState = 0x0,
            PercentageThroughSyncEvent = 0x1,
            ElapsedTime = 0x2,
            LoopCount = 0x3
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
        // Alignment: 1
        // Member count: 3
        public enum CNmBoneMask__WeightInfo_t : byte {
            Zero = 0x0,
            Mixed = 0x1,
            One = 0x2
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
        // Member count: 8
        public enum CNmTransitionNode__TransitionOptions_t : byte {
            None = 0x0,
            ClampDuration = 0x1,
            Synchronized = 0x2,
            MatchSourceTime = 0x3,
            MatchSyncEventIndex = 0x4,
            MatchSyncEventID = 0x5,
            MatchSyncEventPercentage = 0x6,
            PreferClosestSyncEventID = 0x7
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
        // Member count: 4
        public enum NmTargetWarpRule_t : byte {
            WarpXY = 0x0,
            WarpZ = 0x1,
            WarpXYZ = 0x2,
            RotationOnly = 0x3
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
        // Alignment: 4
        // Member count: 4
        public enum BoneMaskBlendSpace : uint {
            BlendSpace_Parent = 0x0,
            BlendSpace_Model = 0x1,
            BlendSpace_Model_RotationOnly = 0x2,
            BlendSpace_Model_TranslationOnly = 0x3
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
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFrameBlockAnim {
            public const nint m_nStartFrame = 0x0; // int32
            public const nint m_nEndFrame = 0x4; // int32
            public const nint m_segmentIndexArray = 0x8; // CUtlVector<int32>
        }
        // Parent: CLeafUpdateNode
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CZeroPoseUpdateNode {
        }
        // Parent: CUnaryUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSlowDownOnSlopesUpdateNode {
            public const nint m_flSlowDownStrength = 0x68; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COrientationWarpUpdateNode {
            public const nint m_hFacingPositionParameter = 0x6C; // CAnimParamHandle
            public const nint m_turnDamping = 0x70; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParameterBase {
            public const nint m_name = 0x18; // CGlobalSymbol
            public const nint m_sComment = 0x20; // CUtlString
            public const nint m_group = 0x28; // CUtlString
            public const nint m_id = 0x30; // AnimParamID
            public const nint m_componentName = 0x48; // CUtlString
            public const nint m_bNetworkingRequested = 0x68; // bool
            public const nint m_bIsReferenced = 0x69; // bool
        }
        // Parent: CAnimTagBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSequenceFinishedAnimTag {
            public const nint m_sequenceName = 0x58; // CUtlString
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSceneObjectData {
            public const nint m_vMinBounds = 0x0; // Vector
            public const nint m_vMaxBounds = 0xC; // Vector
            public const nint m_drawCalls = 0x18; // CUtlLeanVector<CMaterialDrawDescriptor>
            public const nint m_drawBounds = 0x28; // CUtlLeanVector<AABB_t>
            public const nint m_meshlets = 0x38; // CUtlLeanVector<CMeshletDescriptor>
            public const nint m_vTintColor = 0x48; // Vector4D
        }
        // Parent: CCycleBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycle {
        }
        // Parent: CLeafUpdateNode
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CInputStreamUpdateNode {
        }
        // Parent: CConcreteAnimParameter
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CIntAnimParameter {
            public const nint m_defaultValue = 0x80; // int32
            public const nint m_minValue = 0x84; // int32
            public const nint m_maxValue = 0x88; // int32
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmParameterizedBlendNode__CDefinition {
            public const nint m_sourceNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
            public const nint m_nInputParameterValueNodeIdx = 0x38; // int16
            public const nint m_bAllowLooping = 0x3A; // bool
        }
        // Parent: CNmEvent
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFrameSnapEvent {
            public const nint m_frameSnapMode = 0x18; // NmFrameSnapEventMode_t
        }
        // Parent: None
        // Field count: 0
        public static class CNmTask {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimNodePath {
            public const nint m_path = 0x0; // AnimNodeID[11]
            public const nint m_nCount = 0x2C; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimNodeOutputID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncTrack {
            public const nint m_syncEvents = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t,10>
            public const nint m_nStartEventOffset = 0xA8; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqBoneMaskList {
            public const nint m_sName = 0x0; // CBufferString
            public const nint m_nLocalBoneArray = 0x10; // CUtlVector<int16>
            public const nint m_flBoneWeightArray = 0x28; // CUtlVector<float32>
            public const nint m_flDefaultMorphCtrlWeight = 0x40; // float32
            public const nint m_morphCtrlWeightArray = 0x48; // CUtlVector<CUtlPair<CBufferString,float32>>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimEncodedFrames {
            public const nint m_fileName = 0x0; // CBufferString
            public const nint m_nFrames = 0x10; // int32
            public const nint m_nFramesPerBlock = 0x14; // int32
            public const nint m_frameblockArray = 0x18; // CUtlVector<CAnimFrameBlockAnim>
            public const nint m_usageDifferences = 0x30; // CAnimEncodeDifference
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SampleCode {
            public const nint m_subCode = 0x0; // uint8[8]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCachedPose {
            public const nint m_transforms = 0x8; // CUtlVector<CTransform>
            public const nint m_morphWeights = 0x20; // CUtlVector<float32>
            public const nint m_hSequence = 0x38; // HSequence
            public const nint m_flCycle = 0x3C; // float32
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTransitionEventConditionNode__CDefinition {
            public const nint m_requireRuleID = 0x10; // CGlobalSymbol
            public const nint m_eventConditionRules = 0x18; // CNmBitFlags
            public const nint m_nSourceStateNodeIdx = 0x1C; // int16
            public const nint m_ruleCondition = 0x1E; // NmTransitionRuleCondition_t
        }
        // Parent: CAnimTagBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CTaskStatusAnimTag {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphConfig {
            public const nint m_paramValues = 0x0; // float32[4]
            public const nint m_flDuration = 0x10; // float32
            public const nint m_nMotionIndex = 0x14; // MotionIndex
            public const nint m_nSampleStart = 0x18; // int32
            public const nint m_nSampleCount = 0x1C; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionSearchNode {
            public const nint m_children = 0x0; // CUtlVector<CMotionSearchNode*>
            public const nint m_quantizer = 0x18; // CVectorQuantizer
            public const nint m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
            public const nint m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32>>
            public const nint m_selectableSamples = 0x68; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimActivity {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_nActivity = 0x10; // int32
            public const nint m_nFlags = 0x14; // int32
            public const nint m_nWeight = 0x18; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimScriptManager {
            public const nint m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationDecodeDebugDumpElement_t {
            public const nint m_nEntityIndex = 0x0; // int32
            public const nint m_modelName = 0x8; // CUtlString
            public const nint m_poseParams = 0x10; // CUtlVector<CUtlString>
            public const nint m_decodeOps = 0x28; // CUtlVector<CUtlString>
            public const nint m_internalOps = 0x40; // CUtlVector<CUtlString>
            public const nint m_decodedAnims = 0x58; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ConfigIndex {
            public const nint m_nGroup = 0x0; // uint16
            public const nint m_nConfig = 0x2; // uint16
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXCollisionAttributes_t {
            public const nint m_CollisionGroup = 0x0; // uint32
            public const nint m_InteractAs = 0x8; // CUtlVector<uint32>
            public const nint m_InteractWith = 0x20; // CUtlVector<uint32>
            public const nint m_InteractExclude = 0x38; // CUtlVector<uint32>
            public const nint m_CollisionGroupString = 0x50; // CUtlString
            public const nint m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
            public const nint m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
            public const nint m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
        }
        // Parent: CSequenceUpdateNodeBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSequenceUpdateNode {
            public const nint m_hSequence = 0x70; // HSequence
            public const nint m_duration = 0x74; // float32
            public const nint m_paramSpans = 0x78; // CParamSpanUpdater
            public const nint m_tags = 0x90; // CUtlVector<TagSpan_t>
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmPassthroughNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDefinition__ExternalGraphSlot_t {
            public const nint m_nNodeIdx = 0x0; // int16
            public const nint m_slotID = 0x8; // CGlobalSymbol
        }
        // Parent: CUnaryUpdateNode
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAimCameraUpdateNode {
            public const nint m_hParameterPosition = 0x68; // CAnimParamHandle
            public const nint m_hParameterOrientation = 0x6A; // CAnimParamHandle
            public const nint m_hParameterSpineRotationWeight = 0x6C; // CAnimParamHandle
            public const nint m_hParameterPelvisOffset = 0x6E; // CAnimParamHandle
            public const nint m_hParameterUseIK = 0x70; // CAnimParamHandle
            public const nint m_hParameterCameraOnly = 0x72; // CAnimParamHandle
            public const nint m_hParameterWeaponDepenetrationDistance = 0x74; // CAnimParamHandle
            public const nint m_hParameterWeaponDepenetrationDelta = 0x76; // CAnimParamHandle
            public const nint m_hParameterCameraClearanceDistance = 0x78; // CAnimParamHandle
            public const nint m_opFixedSettings = 0x80; // AimCameraOpFixedSettings_t
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqSeqDescFlag {
            public const nint m_bLooping = 0x0; // bool
            public const nint m_bSnap = 0x1; // bool
            public const nint m_bAutoplay = 0x2; // bool
            public const nint m_bPost = 0x3; // bool
            public const nint m_bHidden = 0x4; // bool
            public const nint m_bMulti = 0x5; // bool
            public const nint m_bLegacyDelta = 0x6; // bool
            public const nint m_bLegacyWorldspace = 0x7; // bool
            public const nint m_bLegacyCyclepose = 0x8; // bool
            public const nint m_bLegacyRealtime = 0x9; // bool
            public const nint m_bModelDoc = 0xA; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelInfo_t {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_vHullMin = 0x4; // Vector
            public const nint m_vHullMax = 0x10; // Vector
            public const nint m_vViewMin = 0x1C; // Vector
            public const nint m_vViewMax = 0x28; // Vector
            public const nint m_flMass = 0x34; // float32
            public const nint m_vEyePosition = 0x38; // Vector
            public const nint m_flMaxEyeDeflection = 0x44; // float32
            public const nint m_sSurfaceProperty = 0x48; // CUtlString
            public const nint m_keyValueText = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class StanceInfo_t {
            public const nint m_vPosition = 0x0; // Vector
            public const nint m_flDirection = 0xC; // float32
        }
        // Parent: None
        // Field count: 1
        public static class IKBoneNameAndIndex_t {
            public const nint m_Name = 0x0; // CUtlString
        }
        // Parent: CUnaryUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStanceScaleUpdateNode {
            public const nint m_hParam = 0x68; // CAnimParamHandle
        }
        // Parent: CNmBoneMaskValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBoneMaskBlendNode__CDefinition {
            public const nint m_nSourceMaskNodeIdx = 0x10; // int16
            public const nint m_nTargetMaskNodeIdx = 0x12; // int16
            public const nint m_nBlendWeightValueNodeIdx = 0x14; // int16
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIDEventNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
            public const nint m_defaultValue = 0x18; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class HitReactFixedSettings_t {
            public const nint m_nWeightListIndex = 0x0; // int32
            public const nint m_nEffectedBoneCount = 0x4; // int32
            public const nint m_flMaxImpactForce = 0x8; // float32
            public const nint m_flMinImpactForce = 0xC; // float32
            public const nint m_flWhipImpactScale = 0x10; // float32
            public const nint m_flCounterRotationScale = 0x14; // float32
            public const nint m_flDistanceFadeScale = 0x18; // float32
            public const nint m_flPropagationScale = 0x1C; // float32
            public const nint m_flWhipDelay = 0x20; // float32
            public const nint m_flSpringStrength = 0x24; // float32
            public const nint m_flWhipSpringStrength = 0x28; // float32
            public const nint m_flMaxAngleRadians = 0x2C; // float32
            public const nint m_nHipBoneIndex = 0x30; // int32
            public const nint m_flHipBoneTranslationScale = 0x34; // float32
            public const nint m_flHipDipSpringStrength = 0x38; // float32
            public const nint m_flHipDipImpactScale = 0x3C; // float32
            public const nint m_flHipDipDelay = 0x40; // float32
        }
        // Parent: CNmGraphNode__CDefinition
        // Field count: 0
        public static class CNmPoseNode__CDefinition {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagBase {
            public const nint m_name = 0x18; // CGlobalSymbol
            public const nint m_sComment = 0x20; // CUtlString
            public const nint m_group = 0x28; // CGlobalSymbol
            public const nint m_tagID = 0x30; // AnimTagID
            public const nint m_bIsReferenced = 0x48; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraph {
            public const nint m_paramSpans = 0x10; // CParamSpanUpdater
            public const nint m_tags = 0x28; // CUtlVector<TagSpan_t>
            public const nint m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
            public const nint m_nParameterCount = 0x48; // int32
            public const nint m_nConfigStartIndex = 0x4C; // int32
            public const nint m_nConfigCount = 0x50; // int32
            public const nint m_bLoop = 0x54; // bool
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVectorInfoNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_desiredInfo = 0x12; // CNmVectorInfoNode::Info_t
        }
        // Parent: AnimationSnapshotBase_t
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationSnapshot_t {
            public const nint m_nEntIndex = 0x110; // int32
            public const nint m_modelName = 0x118; // CUtlString
        }
        // Parent: CNmBlendTaskBase
        // Field count: 0
        public static class CNmBlendTask {
        }
        // Parent: CNmValueNode__CDefinition
        // Field count: 0
        public static class CNmVectorValueNode__CDefinition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqTransition {
            public const nint m_flFadeInTime = 0x0; // float32
            public const nint m_flFadeOutTime = 0x4; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphSettingsGroup {
        }
        // Parent: CNmTargetValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVirtualParameterTargetNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDebugReplay {
            public const nint m_animGraphFileName = 0x40; // CUtlString
            public const nint m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
            public const nint m_startIndex = 0x60; // int32
            public const nint m_writeIndex = 0x64; // int32
            public const nint m_frameCount = 0x68; // int32
        }
        // Parent: CConcreteAnimParameter
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CVectorAnimParameter {
            public const nint m_defaultValue = 0x80; // Vector
            public const nint m_bInterpolate = 0x8C; // bool
        }
        // Parent: CNmTask
        // Field count: 0
        public static class CNmCachedPoseReadTask {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateMachineNode__StateDefinition_t {
            public const nint m_nStateNodeIdx = 0x0; // int16
            public const nint m_nEntryConditionNodeIdx = 0x2; // int16
            public const nint m_transitionDefinitions = 0x8; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::TransitionDefinition_t,5>
        }
        // Parent: CUnaryUpdateNode
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStanceOverrideUpdateNode {
            public const nint m_footStanceInfo = 0x68; // CUtlVector<StanceInfo_t>
            public const nint m_pStanceSourceNode = 0x80; // CAnimUpdateNodeRef
            public const nint m_hParameter = 0x90; // CAnimParamHandle
            public const nint m_eMode = 0x94; // StanceOverrideMode
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class LookAtBone_t {
            public const nint m_index = 0x0; // int32
            public const nint m_weight = 0x4; // float32
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTransitionNode__CDefinition {
            public const nint m_nTargetStateNodeIdx = 0x10; // int16
            public const nint m_nDurationOverrideNodeIdx = 0x12; // int16
            public const nint m_syncEventOffsetOverrideNodeIdx = 0x14; // int16
            public const nint m_startBoneMaskNodeIdx = 0x16; // int16
            public const nint m_flDuration = 0x18; // float32
            public const nint m_boneMaskBlendInTimePercentage = 0x1C; // NmPercent_t
            public const nint m_syncEventOffset = 0x20; // float32
            public const nint m_transitionOptions = 0x24; // CNmBitFlags
            public const nint m_targetSyncIDNodeIdx = 0x28; // int16
            public const nint m_blendWeightEasing = 0x2A; // NmEasingOperation_t
            public const nint m_rootMotionBlend = 0x2B; // NmRootMotionBlendMode_t
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatEaseNode__CDefinition {
            public const nint m_flEaseTime = 0x10; // float32
            public const nint m_flStartValue = 0x14; // float32
            public const nint m_nInputValueNodeIdx = 0x18; // int16
            public const nint m_easingOp = 0x1A; // NmEasingOperation_t
            public const nint m_bUseStartValue = 0x1B; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimEncodeDifference {
            public const nint m_boneArray = 0x0; // CUtlVector<CAnimBoneDifference>
            public const nint m_morphArray = 0x18; // CUtlVector<CAnimMorphDifference>
            public const nint m_userArray = 0x30; // CUtlVector<CAnimUserDifference>
            public const nint m_bHasRotationBitArray = 0x48; // CUtlVector<uint8>
            public const nint m_bHasMovementBitArray = 0x60; // CUtlVector<uint8>
            public const nint m_bHasMorphBitArray = 0x78; // CUtlVector<uint8>
            public const nint m_bHasUserBitArray = 0x90; // CUtlVector<uint8>
        }
        // Parent: CUnaryUpdateNode
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRootUpdateNode {
        }
        // Parent: CNmTargetValueNode__CDefinition
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTargetOffsetNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_bIsBoneSpaceOffset = 0x12; // bool
            public const nint m_rotationOffset = 0x20; // Quaternion
            public const nint m_translationOffset = 0x30; // Vector
        }
        // Parent: CLeafUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphUpdateNode {
            public const nint m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatAngleMathNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_operation = 0x12; // CNmFloatAngleMathNode::Operation_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParamHandle {
            public const nint m_type = 0x0; // AnimParamType_t
            public const nint m_index = 0x1; // uint8
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WeightList {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_weights = 0x8; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionIndex {
            public const nint m_nGroup = 0x0; // uint16
            public const nint m_nMotion = 0x2; // uint16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FollowAttachmentSettings_t {
            public const nint m_attachment = 0x0; // CAnimAttachment
            public const nint m_boneIndex = 0x80; // int32
            public const nint m_bMatchTranslation = 0x84; // bool
            public const nint m_bMatchRotation = 0x85; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimNodeID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipSelectorNode__CDefinition {
            public const nint m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
            public const nint m_conditionNodeIndices = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
        }
        // Parent: CAnimComponentUpdater
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLookComponentUpdater {
            public const nint m_hLookHeading = 0x34; // CAnimParamHandle
            public const nint m_hLookHeadingVelocity = 0x36; // CAnimParamHandle
            public const nint m_hLookPitch = 0x38; // CAnimParamHandle
            public const nint m_hLookDistance = 0x3A; // CAnimParamHandle
            public const nint m_hLookDirection = 0x3C; // CAnimParamHandle
            public const nint m_hLookTarget = 0x3E; // CAnimParamHandle
            public const nint m_hLookTargetWorldSpace = 0x40; // CAnimParamHandle
            public const nint m_bNetworkLookTarget = 0x42; // bool
        }
        // Parent: CAnimGraphSettingsGroup
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphNetworkSettings {
            public const nint m_bNetworkingEnabled = 0x20; // bool
        }
        // Parent: CLeafUpdateNode
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSingleFrameUpdateNode {
            public const nint m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
            public const nint m_hPoseCacheHandle = 0x70; // CPoseHandle
            public const nint m_hSequence = 0x74; // HSequence
            public const nint m_flCycle = 0x78; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlockSelectionMetricEvaluator {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigList {
            public const nint m_bHideMaterialGroupInTools = 0x0; // bool
            public const nint m_bHideRenderColorInTools = 0x1; // bool
            public const nint m_Configs = 0x8; // CUtlVector<CModelConfig*>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqAutoLayerFlag {
            public const nint m_bPost = 0x0; // bool
            public const nint m_bSpline = 0x1; // bool
            public const nint m_bXFade = 0x2; // bool
            public const nint m_bNoBlend = 0x3; // bool
            public const nint m_bLocal = 0x4; // bool
            public const nint m_bPose = 0x5; // bool
            public const nint m_bFetchFrame = 0x6; // bool
            public const nint m_bSubtract = 0x7; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimStateID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIDEventConditionNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
            public const nint m_eventIDs = 0x18; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelBoneFlexDriver_t {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_boneNameToken = 0x8; // uint32
            public const nint m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphData {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
        }
        // Parent: CUnaryUpdateNode
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootPinningUpdateNode {
            public const nint m_poseOpFixedData = 0x70; // FootPinningPoseOpFixedData_t
            public const nint m_eTimingSource = 0xA0; // FootPinningTimingSource
            public const nint m_params = 0xA8; // CUtlVector<CAnimParamHandle>
            public const nint m_bResetChild = 0xC0; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqPoseSetting {
            public const nint m_sPoseParameter = 0x0; // CBufferString
            public const nint m_sAttachment = 0x10; // CBufferString
            public const nint m_sReferenceSequence = 0x20; // CBufferString
            public const nint m_flValue = 0x30; // float32
            public const nint m_bX = 0x34; // bool
            public const nint m_bY = 0x35; // bool
            public const nint m_bZ = 0x36; // bool
            public const nint m_eType = 0x38; // int32
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVirtualParameterFloatNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAttachment {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_influenceNames = 0x8; // CUtlString[3]
            public const nint m_vInfluenceRotations = 0x20; // Quaternion[3]
            public const nint m_vInfluenceOffsets = 0x50; // Vector[3]
            public const nint m_influenceWeights = 0x74; // float32[3]
            public const nint m_bInfluenceRootTransform = 0x80; // bool[3]
            public const nint m_nInfluences = 0x83; // uint8
            public const nint m_bIgnoreRotation = 0x84; // bool
        }
        // Parent: CLeafUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSequenceUpdateNodeBase {
            public const nint m_playbackSpeed = 0x64; // float32
            public const nint m_bLoop = 0x68; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDrawCullingData {
            public const nint m_vConeApex = 0x0; // Vector
            public const nint m_ConeAxis = 0xC; // int8[3]
            public const nint m_ConeCutoff = 0xF; // int8
        }
        // Parent: None
        // Field count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXJoint_t {
            public const nint m_nType = 0x0; // uint16
            public const nint m_nBody1 = 0x2; // uint16
            public const nint m_nBody2 = 0x4; // uint16
            public const nint m_nFlags = 0x6; // uint16
            public const nint m_Frame1 = 0x10; // CTransform
            public const nint m_Frame2 = 0x30; // CTransform
            public const nint m_bEnableCollision = 0x50; // bool
            public const nint m_bEnableLinearLimit = 0x51; // bool
            public const nint m_LinearLimit = 0x54; // VPhysXRange_t
            public const nint m_bEnableLinearMotor = 0x5C; // bool
            public const nint m_vLinearTargetVelocity = 0x60; // Vector
            public const nint m_flMaxForce = 0x6C; // float32
            public const nint m_bEnableSwingLimit = 0x70; // bool
            public const nint m_SwingLimit = 0x74; // VPhysXRange_t
            public const nint m_bEnableTwistLimit = 0x7C; // bool
            public const nint m_TwistLimit = 0x80; // VPhysXRange_t
            public const nint m_bEnableAngularMotor = 0x88; // bool
            public const nint m_vAngularTargetVelocity = 0x8C; // Vector
            public const nint m_flMaxTorque = 0x98; // float32
            public const nint m_flLinearFrequency = 0x9C; // float32
            public const nint m_flLinearDampingRatio = 0xA0; // float32
            public const nint m_flAngularFrequency = 0xA4; // float32
            public const nint m_flAngularDampingRatio = 0xA8; // float32
            public const nint m_flFriction = 0xAC; // float32
            public const nint m_flElasticity = 0xB0; // float32
            public const nint m_flElasticDamping = 0xB4; // float32
            public const nint m_flPlasticity = 0xB8; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateNodeTransitionData {
            public const nint m_curve = 0x0; // CBlendCurve
            public const nint m_blendDuration = 0x8; // CAnimValue<float32>
            public const nint m_resetCycleValue = 0x10; // CAnimValue<float32>
            public const nint m_bReset = 0x0; // bitfield:1
            public const nint m_resetCycleOption = 0x0; // bitfield:3
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTimeRemainingMetricEvaluator {
            public const nint m_bMatchByTimeRemaining = 0x50; // bool
            public const nint m_flMaxTimeRemaining = 0x54; // float32
            public const nint m_bFilterByTimeRemaining = 0x58; // bool
            public const nint m_flMinTimeRemaining = 0x5C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement {
            public const nint m_ElementName = 0x8; // CUtlString
            public const nint m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmControlParameterVectorNode__CDefinition {
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootFixedSettings {
            public const nint m_traceSettings = 0x0; // TraceSettings_t
            public const nint m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
            public const nint m_flFootBaseLength = 0x20; // float32
            public const nint m_flMaxRotationLeft = 0x24; // float32
            public const nint m_flMaxRotationRight = 0x28; // float32
            public const nint m_footstepLandedTagIndex = 0x2C; // int32
            public const nint m_bEnableTracing = 0x30; // bool
            public const nint m_flTraceAngleBlend = 0x34; // float32
            public const nint m_nDisableTagIndex = 0x38; // int32
            public const nint m_nFootIndex = 0x3C; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfig {
            public const nint m_ConfigName = 0x0; // CUtlString
            public const nint m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
            public const nint m_bTopLevel = 0x20; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimComponentID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXAggregateData_t {
            public const nint m_nFlags = 0x0; // uint16
            public const nint m_nRefCounter = 0x2; // uint16
            public const nint m_bonesHash = 0x8; // CUtlVector<uint32>
            public const nint m_boneNames = 0x20; // CUtlVector<CUtlString>
            public const nint m_indexNames = 0x38; // CUtlVector<uint16>
            public const nint m_indexHash = 0x50; // CUtlVector<uint16>
            public const nint m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
            public const nint m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
            public const nint m_constraints2 = 0x98; // CUtlVector<VPhysXConstraint2_t>
            public const nint m_joints = 0xB0; // CUtlVector<VPhysXJoint_t>
            public const nint m_pFeModel = 0xC8; // PhysFeModelDesc_t*
            public const nint m_boneParents = 0xD0; // CUtlVector<uint16>
            public const nint m_surfacePropertyHashes = 0xE8; // CUtlVector<uint32>
            public const nint m_collisionAttributes = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
            public const nint m_debugPartNames = 0x118; // CUtlVector<CUtlString>
            public const nint m_embeddedKeyvalues = 0x130; // CUtlString
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDefinition {
            public const nint m_persistentNodeIndices = 0x0; // CUtlVector<int16>
            public const nint m_nRootNodeIdx = 0x18; // int16
            public const nint m_controlParameterIDs = 0x20; // CUtlVector<CGlobalSymbol>
            public const nint m_virtualParameterIDs = 0x38; // CUtlVector<CGlobalSymbol>
            public const nint m_virtualParameterNodeIndices = 0x50; // CUtlVector<int16>
            public const nint m_childGraphSlots = 0x68; // CUtlVector<CNmGraphDefinition::ChildGraphSlot_t>
            public const nint m_externalGraphSlots = 0x80; // CUtlVector<CNmGraphDefinition::ExternalGraphSlot_t>
            public const nint m_nodePaths = 0x108; // CUtlVector<CUtlString>
            public const nint m_runtimeVersionID = 0x120; // V_uuid_t
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSelectorNode__CDefinition {
            public const nint m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
            public const nint m_conditionNodeIndices = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDemoCaptureSettings {
            public const nint m_vecErrorRangeSplineRotation = 0x0; // Vector2D
            public const nint m_vecErrorRangeSplineTranslation = 0x8; // Vector2D
            public const nint m_vecErrorRangeSplineScale = 0x10; // Vector2D
            public const nint m_flIkRotation_MaxSplineError = 0x18; // float32
            public const nint m_flIkTranslation_MaxSplineError = 0x1C; // float32
            public const nint m_vecErrorRangeQuantizationRotation = 0x20; // Vector2D
            public const nint m_vecErrorRangeQuantizationTranslation = 0x28; // Vector2D
            public const nint m_vecErrorRangeQuantizationScale = 0x30; // Vector2D
            public const nint m_flIkRotation_MaxQuantizationError = 0x38; // float32
            public const nint m_flIkTranslation_MaxQuantizationError = 0x3C; // float32
            public const nint m_baseSequence = 0x40; // CUtlString
            public const nint m_nBaseSequenceFrame = 0x48; // int32
            public const nint m_boneSelectionMode = 0x4C; // EDemoBoneSelectionMode
            public const nint m_bones = 0x50; // CUtlVector<BoneDemoCaptureSettings_t>
            public const nint m_ikChains = 0x68; // CUtlVector<IKDemoCaptureSettings_t>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class IKDemoCaptureSettings_t {
            public const nint m_parentBoneName = 0x0; // CUtlString
            public const nint m_eMode = 0x8; // IKChannelMode
            public const nint m_ikChainName = 0x10; // CUtlString
            public const nint m_oneBoneStart = 0x18; // CUtlString
            public const nint m_oneBoneEnd = 0x20; // CUtlString
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqMultiFetchFlag {
            public const nint m_bRealtime = 0x0; // bool
            public const nint m_bCylepose = 0x1; // bool
            public const nint m_b0D = 0x2; // bool
            public const nint m_b1D = 0x3; // bool
            public const nint m_b2D = 0x4; // bool
            public const nint m_b2D_TRI = 0x5; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXRange_t {
            public const nint m_flMin = 0x0; // float32
            public const nint m_flMax = 0x4; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStopAtGoalUpdateNode {
            public const nint m_flOuterRadius = 0x6C; // float32
            public const nint m_flInnerRadius = 0x70; // float32
            public const nint m_flMaxScale = 0x74; // float32
            public const nint m_flMinScale = 0x78; // float32
            public const nint m_damping = 0x80; // CAnimInputDamping
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIDEventPercentageThroughNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
            public const nint m_eventID = 0x18; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimBoneDifference {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_parent = 0x10; // CBufferString
            public const nint m_posError = 0x20; // Vector
            public const nint m_bHasRotation = 0x2C; // bool
            public const nint m_bHasMovement = 0x2D; // bool
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCachedBoolNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_mode = 0x14; // NmCachedValueMode_t
        }
        // Parent: CCycleBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimCycle {
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CActionComponentUpdater {
            public const nint m_actions = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDataSet {
            public const nint m_variationID = 0x0; // CGlobalSymbol
            public const nint m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            public const nint m_resources = 0x10; // CUtlVector<CStrongHandleVoid>
        }
        // Parent: CPathAnimMotorUpdaterBase
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedPathAnimMotorUpdater {
            public const nint m_flAnticipationTime = 0x2C; // float32
            public const nint m_flMinSpeedScale = 0x30; // float32
            public const nint m_hAnticipationPosParam = 0x34; // CAnimParamHandle
            public const nint m_hAnticipationHeadingParam = 0x36; // CAnimParamHandle
            public const nint m_flSpringConstant = 0x38; // float32
            public const nint m_flMinSpringTension = 0x3C; // float32
            public const nint m_flMaxSpringTension = 0x40; // float32
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCachedFloatNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_mode = 0x14; // NmCachedValueMode_t
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatSwitchNode__CDefinition {
            public const nint m_nSwitchValueNodeIdx = 0x10; // int16
            public const nint m_nTrueValueNodeIdx = 0x12; // int16
            public const nint m_nFalseValueNodeIdx = 0x14; // int16
        }
        // Parent: CModelConfigElement
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetMaterialGroupOnAttachedModels {
            public const nint m_MaterialGroupName = 0x48; // CUtlString
        }
        // Parent: CNmBoneMaskValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVirtualParameterBoneMaskNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathHelperUpdateNode {
            public const nint m_flStoppingRadius = 0x68; // float32
            public const nint m_flStoppingSpeedScale = 0x6C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialGroup_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphBundleData {
            public const nint m_flULeftSrc = 0x0; // float32
            public const nint m_flVTopSrc = 0x4; // float32
            public const nint m_offsets = 0x8; // CUtlVector<float32>
            public const nint m_ranges = 0x20; // CUtlVector<float32>
        }
        // Parent: CModelConfigElement
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_UserPick {
            public const nint m_Choices = 0x48; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSolveIKTargetHandle_t {
            public const nint m_positionHandle = 0x0; // CAnimParamHandle
            public const nint m_orientationHandle = 0x2; // CAnimParamHandle
        }
        // Parent: CUnaryUpdateNode
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootAdjustmentUpdateNode {
            public const nint m_clips = 0x70; // CUtlVector<HSequence>
            public const nint m_hBasePoseCacheHandle = 0x88; // CPoseHandle
            public const nint m_facingTarget = 0x8C; // CAnimParamHandle
            public const nint m_flTurnTimeMin = 0x90; // float32
            public const nint m_flTurnTimeMax = 0x94; // float32
            public const nint m_flStepHeightMax = 0x98; // float32
            public const nint m_flStepHeightMaxAngle = 0x9C; // float32
            public const nint m_bResetChild = 0xA0; // bool
            public const nint m_bAnimationDriven = 0xA1; // bool
        }
        // Parent: CUnaryUpdateNode
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CChoreoUpdateNode {
        }
        // Parent: CBaseConstraint
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAimConstraint {
            public const nint m_qAimOffset = 0x70; // Quaternion
            public const nint m_nUpType = 0x80; // uint32
        }
        // Parent: CAnimTagBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFootFallAnimTag {
            public const nint m_foot = 0x58; // FootFallTagFoot_t
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMaterialDrawDescriptor {
            public const nint m_flUvDensity = 0x0; // float32
            public const nint m_vTintColor = 0x4; // Vector
            public const nint m_flAlpha = 0x10; // float32
            public const nint m_nNumMeshlets = 0x16; // uint16
            public const nint m_nFirstMeshlet = 0x1C; // uint32
            public const nint m_nPrimitiveType = 0x20; // RenderPrimitiveType_t
            public const nint m_nBaseVertex = 0x24; // int32
            public const nint m_nVertexCount = 0x28; // int32
            public const nint m_nStartIndex = 0x2C; // int32
            public const nint m_nIndexCount = 0x30; // int32
            public const nint m_indexBuffer = 0x98; // CRenderBufferBinding
            public const nint m_material = 0xC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSkeleton {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_boneIDs = 0x8; // CUtlLeanVector<CGlobalSymbol>
            public const nint m_parentIndices = 0x18; // CUtlVector<int32>
            public const nint m_parentSpaceReferencePose = 0x30; // CUtlVector<CTransform>
            public const nint m_modelSpaceReferencePose = 0x48; // CUtlVector<CTransform>
            public const nint m_numBonesToSampleAtLowLOD = 0x60; // int32
            public const nint m_boneMasks = 0x68; // CUtlLeanVector<CNmBoneMask>
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStepsRemainingMetricEvaluator {
            public const nint m_footIndices = 0x50; // CUtlVector<int32>
            public const nint m_flMinStepsRemaining = 0x68; // float32
        }
        // Parent: CNmParameterizedBlendNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVelocityBlendNode__CDefinition {
        }
        // Parent: CNmTask
        // Field count: 0
        public static class CNmZeroPoseTask {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CBodyGroupSetting {
            public const nint m_BodyGroupName = 0x0; // CUtlString
            public const nint m_nBodyGroupOption = 0x8; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVectorQuantizer {
            public const nint m_centroidVectors = 0x0; // CUtlVector<float32>
            public const nint m_nCentroids = 0x18; // int32
            public const nint m_nDimensions = 0x1C; // int32
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVectorCreateNode__CDefinition {
            public const nint m_inputVectorValueNodeIdx = 0x10; // int16
            public const nint m_inputValueXNodeIdx = 0x12; // int16
            public const nint m_inputValueYNodeIdx = 0x14; // int16
            public const nint m_inputValueZNodeIdx = 0x16; // int16
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
            public const nint m_entryEvents = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
            public const nint m_executeEvents = 0x38; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
            public const nint m_exitEvents = 0x58; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
            public const nint m_timedRemainingEvents = 0x78; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
            public const nint m_timedElapsedEvents = 0x90; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
            public const nint m_nLayerWeightNodeIdx = 0xA8; // int16
            public const nint m_nLayerRootMotionWeightNodeIdx = 0xAA; // int16
            public const nint m_nLayerBoneMaskNodeIdx = 0xAC; // int16
            public const nint m_bIsOffState = 0xAE; // bool
        }
        // Parent: CNmBoneMaskValueNode__CDefinition
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBoneMaskSelectorNode__CDefinition {
            public const nint m_defaultMaskNodeIdx = 0x10; // int16
            public const nint m_parameterValueNodeIdx = 0x12; // int16
            public const nint m_switchDynamically = 0x14; // bool
            public const nint m_maskNodeIndices = 0x18; // CUtlVectorFixedGrowable<int16,7>
            public const nint m_parameterValues = 0x40; // CUtlVectorFixedGrowable<CGlobalSymbol,7>
            public const nint m_flBlendTimeSeconds = 0x90; // float32
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVirtualParameterVectorNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycleMetricEvaluator {
            public const nint m_footIndices = 0x50; // CUtlVector<int32>
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmConstIDNode__CDefinition {
            public const nint m_value = 0x10; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBox {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_sSurfaceProperty = 0x8; // CUtlString
            public const nint m_sBoneName = 0x10; // CUtlString
            public const nint m_vMinBounds = 0x18; // Vector
            public const nint m_vMaxBounds = 0x24; // Vector
            public const nint m_flShapeRadius = 0x30; // float32
            public const nint m_nBoneNameHash = 0x34; // uint32
            public const nint m_nGroupId = 0x38; // int32
            public const nint m_nShapeType = 0x3C; // uint8
            public const nint m_bTranslationOnly = 0x3D; // bool
            public const nint m_CRC = 0x40; // uint32
            public const nint m_cRenderColor = 0x44; // Color
            public const nint m_nHitBoxIndex = 0x48; // uint16
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmParameterizedSelectorNode__CDefinition {
            public const nint m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
            public const nint m_parameterNodeIdx = 0x28; // int16
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelSkeletonData_t {
            public const nint m_boneName = 0x0; // CUtlVector<CUtlString>
            public const nint m_nParent = 0x18; // CUtlVector<int16>
            public const nint m_boneSphere = 0x30; // CUtlVector<float32>
            public const nint m_nFlag = 0x48; // CUtlVector<uint32>
            public const nint m_bonePosParent = 0x60; // CUtlVector<Vector>
            public const nint m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
            public const nint m_boneScaleParent = 0x90; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEvent {
            public const nint m_flStartTimeSeconds = 0x8; // float32
            public const nint m_flDurationSeconds = 0xC; // float32
            public const nint m_syncID = 0x10; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmCompressionSettings_t__QuantizationRange_t {
            public const nint m_flRangeStart = 0x0; // float32
            public const nint m_flRangeLength = 0x4; // float32
        }
        // Parent: CNmTask
        // Field count: 0
        public static class CNmBlendTaskBase {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TagSpan_t {
            public const nint m_tagIndex = 0x0; // int32
            public const nint m_startCycle = 0x4; // float32
            public const nint m_endCycle = 0x8; // float32
        }
        // Parent: CNmTargetValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmConstTargetNode__CDefinition {
            public const nint m_value = 0x10; // CNmTarget
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelDataAnimatedMaterialAttribute_t {
            public const nint m_AttributeName = 0x0; // CUtlString
            public const nint m_nNumChannels = 0x8; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionDataSet {
            public const nint m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
            public const nint m_nDimensionCount = 0x18; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CProductQuantizer {
            public const nint m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
            public const nint m_nDimensions = 0x18; // int32
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CChoiceUpdateNode {
            public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_weights = 0x70; // CUtlVector<float32>
            public const nint m_blendTimes = 0x88; // CUtlVector<float32>
            public const nint m_choiceMethod = 0xA0; // ChoiceMethod
            public const nint m_choiceChangeMethod = 0xA4; // ChoiceChangeMethod
            public const nint m_blendMethod = 0xA8; // ChoiceBlendMethod
            public const nint m_blendTime = 0xAC; // float32
            public const nint m_bCrossFade = 0xB0; // bool
            public const nint m_bResetChosen = 0xB1; // bool
            public const nint m_bDontResetSameSelection = 0xB2; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__Bone_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_BindPose = 0x10; // CTransform
            public const nint m_nParent = 0x30; // int32
        }
        // Parent: CAnimActionUpdater
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExpressionActionUpdater {
            public const nint m_hParam = 0x18; // CAnimParamHandle
            public const nint m_eParamType = 0x1A; // AnimParamType_t
            public const nint m_hScript = 0x1C; // AnimScriptHandle
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatMathNode__CDefinition {
            public const nint m_nInputValueNodeIdxA = 0x10; // int16
            public const nint m_nInputValueNodeIdxB = 0x12; // int16
            public const nint m_bReturnAbsoluteResult = 0x14; // bool
            public const nint m_operator = 0x15; // CNmFloatMathNode::Operator_t
            public const nint m_flValueB = 0x18; // float32
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerLine {
            public const nint m_vWsPositionStart = 0x40; // VectorAligned
            public const nint m_vWsPositionEnd = 0x50; // VectorAligned
            public const nint m_Color = 0x60; // Color
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCycleControlUpdateNode {
            public const nint m_valueSource = 0x68; // AnimValueSource
            public const nint m_paramIndex = 0x6C; // CAnimParamHandle
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTargetInfoNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_infoType = 0x14; // CNmTargetInfoNode::Info_t
            public const nint m_bIsWorldSpaceTarget = 0x18; // bool
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueComponentUpdater {
            public const nint m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
        }
        // Parent: CBoneConstraintBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseConstraint {
            public const nint m_name = 0x28; // CUtlString
            public const nint m_vUpVector = 0x30; // Vector
            public const nint m_slaves = 0x40; // CUtlLeanVector<CConstraintSlave>
            public const nint m_targets = 0x50; // CUtlVector<CConstraintTarget>
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmControlParameterFloatNode__CDefinition {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BlendItem_t {
            public const nint m_tags = 0x0; // CUtlVector<TagSpan_t>
            public const nint m_pChild = 0x18; // CAnimUpdateNodeRef
            public const nint m_hSequence = 0x28; // HSequence
            public const nint m_vPos = 0x2C; // Vector2D
            public const nint m_flDuration = 0x34; // float32
            public const nint m_bUseCustomDuration = 0x38; // bool
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipNode__CDefinition {
            public const nint m_nPlayInReverseValueNodeIdx = 0x10; // int16
            public const nint m_nResetTimeValueNodeIdx = 0x12; // int16
            public const nint m_bSampleRootMotion = 0x14; // bool
            public const nint m_bAllowLooping = 0x15; // bool
            public const nint m_nDataSlotIdx = 0x16; // int16
        }
        // Parent: CNmParameterizedBlendNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBlend1DNode__CDefinition {
            public const nint m_parameterization = 0x40; // CNmParameterizedBlendNode::Parameterization_t
        }
        // Parent: CAnimParameterBase
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConcreteAnimParameter {
            public const nint m_previewButton = 0x70; // AnimParamButton_t
            public const nint m_eNetworkSetting = 0x74; // AnimParamNetworkSetting
            public const nint m_bUseMostRecentValue = 0x78; // bool
            public const nint m_bAutoReset = 0x79; // bool
            public const nint m_bGameWritable = 0x7A; // bool
            public const nint m_bGraphWritable = 0x7B; // bool
        }
        // Parent: CSequenceUpdateNodeBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPairedSequenceUpdateNode {
            public const nint m_sPairedSequenceRole = 0x70; // CGlobalSymbol
        }
        // Parent: CModelConfigElement
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_RandomPick {
            public const nint m_Choices = 0x48; // CUtlVector<CUtlString>
            public const nint m_ChoiceWeights = 0x60; // CUtlVector<float32>
        }
        // Parent: CNmTask
        // Field count: 0
        public static class CNmReferencePoseTask {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXConstraint2_t {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_nParent = 0x4; // uint16
            public const nint m_nChild = 0x6; // uint16
            public const nint m_params = 0x8; // VPhysXConstraintParams_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConstraintTarget {
            public const nint m_qOffset = 0x20; // Quaternion
            public const nint m_vOffset = 0x30; // Vector
            public const nint m_nBoneHash = 0x3C; // uint32
            public const nint m_sName = 0x40; // CUtlString
            public const nint m_flWeight = 0x48; // float32
            public const nint m_bIsAttachment = 0x59; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t {
            public const nint m_nEntIndex = 0x0; // CEntityIndex
            public const nint m_nEntParent = 0x4; // CEntityIndex
            public const nint m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
            public const nint m_ModelName = 0x20; // CUtlString
            public const nint m_CaptureName = 0x28; // CUtlString
            public const nint m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
            public const nint m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
            public const nint m_nFlexControllers = 0x60; // int32
            public const nint m_bPredicted = 0x64; // bool
            public const nint m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUser {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_nType = 0x10; // int32
        }
        // Parent: CAnimComponentUpdater
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRagdollComponentUpdater {
            public const nint m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
            public const nint m_boneIndices = 0x48; // CUtlVector<int32>
            public const nint m_boneNames = 0x60; // CUtlVector<CUtlString>
            public const nint m_weightLists = 0x78; // CUtlVector<WeightList>
            public const nint m_flSpringFrequencyMin = 0x90; // float32
            public const nint m_flSpringFrequencyMax = 0x94; // float32
            public const nint m_flMaxStretch = 0x98; // float32
            public const nint m_bSolidCollisionAtZeroWeight = 0x9C; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootDefinition {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_ankleBoneName = 0x8; // CUtlString
            public const nint m_toeBoneName = 0x10; // CUtlString
            public const nint m_vBallOffset = 0x18; // Vector
            public const nint m_vHeelOffset = 0x24; // Vector
            public const nint m_flFootLength = 0x30; // float32
            public const nint m_flBindPoseDirectionMS = 0x34; // float32
            public const nint m_flTraceHeight = 0x38; // float32
            public const nint m_flTraceRadius = 0x3C; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqSynthAnimDesc {
            public const nint m_sName = 0x0; // CBufferString
            public const nint m_flags = 0x10; // CSeqSeqDescFlag
            public const nint m_transition = 0x1C; // CSeqTransition
            public const nint m_nLocalBaseReference = 0x24; // int16
            public const nint m_nLocalBoneMask = 0x26; // int16
            public const nint m_activityArray = 0x28; // CUtlVector<CAnimActivity>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmLayerBlendNode__LayerDefinition_t {
            public const nint m_nInputNodeIdx = 0x0; // int16
            public const nint m_nWeightValueNodeIdx = 0x2; // int16
            public const nint m_nBoneMaskValueNodeIdx = 0x4; // int16
            public const nint m_nRootMotionWeightValueNodeIdx = 0x6; // int16
            public const nint m_bIsSynchronized = 0x8; // bool
            public const nint m_bIgnoreEvents = 0x9; // bool
            public const nint m_bIsStateMachineLayer = 0xA; // bool
            public const nint m_blendMode = 0xB; // NmPoseBlendMode_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimComponentUpdater {
            public const nint m_name = 0x18; // CUtlString
            public const nint m_id = 0x20; // AnimComponentID
            public const nint m_networkMode = 0x24; // AnimNodeNetworkMode
            public const nint m_bStartEnabled = 0x28; // bool
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlend2DUpdateNode {
            public const nint m_items = 0x60; // CUtlVector<BlendItem_t>
            public const nint m_tags = 0x78; // CUtlVector<TagSpan_t>
            public const nint m_paramSpans = 0x90; // CParamSpanUpdater
            public const nint m_nodeItemIndices = 0xA8; // CUtlVector<int32>
            public const nint m_damping = 0xC0; // CAnimInputDamping
            public const nint m_blendSourceX = 0xD0; // AnimValueSource
            public const nint m_paramX = 0xD4; // CAnimParamHandle
            public const nint m_blendSourceY = 0xD8; // AnimValueSource
            public const nint m_paramY = 0xDC; // CAnimParamHandle
            public const nint m_eBlendMode = 0xE0; // Blend2DMode
            public const nint m_playbackSpeed = 0xE4; // float32
            public const nint m_bLoop = 0xE8; // bool
            public const nint m_bLockBlendOnReset = 0xE9; // bool
            public const nint m_bLockWhenWaning = 0xEA; // bool
            public const nint m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB; // bool
        }
        // Parent: CNmSpeedScaleBaseNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVelocityBasedSpeedScaleNode__CDefinition {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelExtPart_t {
            public const nint m_Transform = 0x0; // CTransform
            public const nint m_Name = 0x20; // CUtlString
            public const nint m_nParent = 0x28; // int32
            public const nint m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCachedIDNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_mode = 0x14; // NmCachedValueMode_t
        }
        // Parent: CLeafUpdateNode
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLeanMatrixUpdateNode {
            public const nint m_frameCorners = 0x5C; // int32[3][3]
            public const nint m_poses = 0x80; // CPoseHandle[9]
            public const nint m_damping = 0xA8; // CAnimInputDamping
            public const nint m_blendSource = 0xB8; // AnimVectorSource
            public const nint m_paramIndex = 0xBC; // CAnimParamHandle
            public const nint m_verticalAxis = 0xC0; // Vector
            public const nint m_horizontalAxis = 0xCC; // Vector
            public const nint m_hSequence = 0xD8; // HSequence
            public const nint m_flMaxValue = 0xDC; // float32
            public const nint m_nSequenceMaxFrame = 0xE0; // int32
        }
        // Parent: CConcreteAnimParameter
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSymbolAnimParameter {
            public const nint m_defaultValue = 0x80; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateMachineNode__TransitionDefinition_t {
            public const nint m_nTargetStateIdx = 0x0; // int16
            public const nint m_nConditionNodeIdx = 0x2; // int16
            public const nint m_nTransitionNodeIdx = 0x4; // int16
            public const nint m_bCanBeForced = 0x6; // bool
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatSelectorNode__CDefinition {
            public const nint m_conditionNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
            public const nint m_values = 0x38; // CUtlVectorFixedGrowable<float32,5>
            public const nint m_flDefaultValue = 0x68; // float32
            public const nint m_flEaseTime = 0x6C; // float32
            public const nint m_easingOp = 0x70; // NmEasingOperation_t
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTargetSelectorUpdateNode {
            public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_hPositionParameter = 0x74; // CAnimParamHandle
            public const nint m_hFacePositionParameter = 0x76; // CAnimParamHandle
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBoxSetList {
            public const nint m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionDBIndex {
            public const nint m_nIndex = 0x0; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDirectPlaybackTagData {
            public const nint m_sequenceName = 0x0; // CUtlString
            public const nint m_tags = 0x8; // CUtlVector<TagSpan_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatRemapNode__RemapRange_t {
            public const nint m_flBegin = 0x0; // float32
            public const nint m_flEnd = 0x4; // float32
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCurrentSyncEventIDNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateCompletedConditionNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_nTransitionDurationOverrideNodeIdx = 0x12; // int16
            public const nint m_flTransitionDurationSeconds = 0x14; // float32
        }
        // Parent: CNmEvent
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTargetWarpEvent {
            public const nint m_rule = 0x18; // NmTargetWarpRule_t
            public const nint m_algorithm = 0x19; // NmTargetWarpAlgorithm_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParamSpanUpdater {
            public const nint m_spans = 0x0; // CUtlVector<ParamSpan_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimActionUpdater {
        }
        // Parent: CAnimTagBase
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CParticleAnimTag {
            public const nint m_hParticleSystem = 0x58; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_particleSystemName = 0x60; // CUtlString
            public const nint m_configName = 0x68; // CUtlString
            public const nint m_bDetachFromOwner = 0x70; // bool
            public const nint m_bStopWhenTagEnds = 0x71; // bool
            public const nint m_bTagEndStopIsInstant = 0x72; // bool
            public const nint m_attachmentName = 0x78; // CUtlString
            public const nint m_attachmentType = 0x80; // ParticleAttachment_t
            public const nint m_attachmentCP1Name = 0x88; // CUtlString
            public const nint m_attachmentCP1Type = 0x90; // ParticleAttachment_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCycleBase {
            public const nint m_flCycle = 0x0; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FollowTargetOpFixedSettings_t {
            public const nint m_boneIndex = 0x0; // int32
            public const nint m_bBoneTarget = 0x4; // bool
            public const nint m_boneTargetIndex = 0x8; // int32
            public const nint m_bWorldCoodinateTarget = 0xC; // bool
            public const nint m_bMatchTargetOrientation = 0xD; // bool
        }
        // Parent: CNmEvent
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmRootMotionEvent {
            public const nint m_flBlendTimeSeconds = 0x18; // float32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationSnapshotBase_t {
            public const nint m_flRealTime = 0x0; // float32
            public const nint m_rootToWorld = 0x10; // matrix3x4a_t
            public const nint m_bBonesInWorldSpace = 0x40; // bool
            public const nint m_boneSetupMask = 0x48; // CUtlVector<uint32>
            public const nint m_boneTransforms = 0x60; // CUtlVector<matrix3x4a_t>
            public const nint m_flexControllers = 0x78; // CUtlVector<float32>
            public const nint m_SnapshotType = 0x90; // AnimationSnapshotType_t
            public const nint m_bHasDecodeDump = 0x94; // bool
            public const nint m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
        }
        // Parent: CAnimActionUpdater
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEmitTagActionUpdater {
            public const nint m_nTagIndex = 0x18; // int32
            public const nint m_bIsZeroDuration = 0x1C; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DynamicMeshDeformParams_t {
            public const nint m_flTensionCompressScale = 0x0; // float32
            public const nint m_flTensionStretchScale = 0x4; // float32
            public const nint m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
            public const nint m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
            public const nint m_bSmoothNormalsAcrossUvSeams = 0xA; // bool
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTimeConditionNode__CDefinition {
            public const nint m_sourceStateNodeIdx = 0x10; // int16
            public const nint m_nInputValueNodeIdx = 0x12; // int16
            public const nint m_flComparand = 0x14; // float32
            public const nint m_type = 0x18; // CNmTimeConditionNode::ComparisonType_t
            public const nint m_operator = 0x19; // CNmTimeConditionNode::Operator_t
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncEventIndexConditionNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_triggerMode = 0x12; // CNmSyncEventIndexConditionNode::TriggerMode_t
            public const nint m_syncEventIdx = 0x14; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimStateMachineUpdater {
            public const nint m_states = 0x8; // CUtlVector<CStateUpdateData>
            public const nint m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
            public const nint m_startStateIndex = 0x50; // int32
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CUnaryUpdateNode {
            public const nint m_pChildNode = 0x58; // CAnimUpdateNodeRef
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIDToFloatNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_defaultValue = 0x14; // float32
            public const nint m_IDs = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
            public const nint m_values = 0x48; // CUtlLeanVectorFixedGrowable<float32,5>
        }
        // Parent: None
        // Field count: 17
        public static class CCompressorGroup {
            public const nint m_nTotalElementCount = 0x0; // int32
            public const nint m_szChannelClass = 0x8; // CUtlVector<char*>
            public const nint m_szVariableName = 0x20; // CUtlVector<char*>
            public const nint m_nType = 0x38; // CUtlVector<fieldtype_t>
            public const nint m_nFlags = 0x50; // CUtlVector<int32>
            public const nint m_szGrouping = 0x68; // CUtlVector<CUtlString>
            public const nint m_nCompressorIndex = 0x80; // CUtlVector<int32>
            public const nint m_szElementNames = 0x98; // CUtlVector<CUtlVector<char*>>
            public const nint m_nElementUniqueID = 0xB0; // CUtlVector<CUtlVector<int32>>
            public const nint m_nElementMask = 0xC8; // CUtlVector<uint32>
            public const nint m_vectorCompressor = 0xF8; // CUtlVector<CCompressor<Vector>*>
            public const nint m_quaternionCompressor = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
            public const nint m_intCompressor = 0x128; // CUtlVector<CCompressor<int32>*>
            public const nint m_boolCompressor = 0x140; // CUtlVector<CCompressor<bool>*>
            public const nint m_colorCompressor = 0x158; // CUtlVector<CCompressor<Color>*>
            public const nint m_vector2DCompressor = 0x170; // CUtlVector<CCompressor<Vector2D>*>
            public const nint m_vector4DCompressor = 0x188; // CUtlVector<CCompressor<Vector4D>*>
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSelectorUpdateNode {
            public const nint m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_tags = 0x70; // CUtlVector<int8>
            public const nint m_blendCurve = 0x8C; // CBlendCurve
            public const nint m_flBlendTime = 0x94; // CAnimValue<float32>
            public const nint m_hParameter = 0x9C; // CAnimParamHandle
            public const nint m_nTagIndex = 0xA0; // int32
            public const nint m_eTagBehavior = 0xA4; // SelectorTagBehavior_t
            public const nint m_bResetOnChange = 0xA8; // bool
            public const nint m_bLockWhenWaning = 0xA9; // bool
            public const nint m_bSyncCyclesOnChange = 0xAA; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmPercent_t {
            public const nint m_flValue = 0x0; // float32
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateMachineComponentUpdater {
            public const nint m_stateMachine = 0x30; // CAnimStateMachineUpdater
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateNodeRef {
            public const nint m_nodeIndex = 0x8; // int32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfaceProperties {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nameHash = 0x8; // uint32
            public const nint m_baseNameHash = 0xC; // uint32
            public const nint m_bHidden = 0x18; // bool
            public const nint m_description = 0x20; // CUtlString
            public const nint m_physics = 0x28; // CPhysSurfacePropertiesPhysics
            public const nint m_audioSounds = 0x50; // CPhysSurfacePropertiesSoundNames
            public const nint m_audioParams = 0xA8; // CPhysSurfacePropertiesAudio
        }
        // Parent: CNmValueNode__CDefinition
        // Field count: 0
        public static class CNmBoneMaskValueNode__CDefinition {
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatAbsNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqPoseParamDesc {
            public const nint m_sName = 0x0; // CBufferString
            public const nint m_flStart = 0x10; // float32
            public const nint m_flEnd = 0x14; // float32
            public const nint m_flLoop = 0x18; // float32
            public const nint m_bLooping = 0x1C; // bool
        }
        // Parent: CModelConfigElement
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetBodygroup {
            public const nint m_GroupName = 0x48; // CUtlString
            public const nint m_nChoice = 0x50; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMovement {
            public const nint endframe = 0x0; // int32
            public const nint motionflags = 0x4; // int32
            public const nint v0 = 0x8; // float32
            public const nint v1 = 0xC; // float32
            public const nint angle = 0x10; // float32
            public const nint vector = 0x14; // Vector
            public const nint position = 0x20; // Vector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootStepTrigger {
            public const nint m_tags = 0x0; // CUtlVector<int32>
            public const nint m_nFootIndex = 0x18; // int32
            public const nint m_triggerPhase = 0x1C; // StepPhase
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncTrack__EventMarker_t {
            public const nint m_startTime = 0x0; // NmPercent_t
            public const nint m_ID = 0x8; // CGlobalSymbol
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathMetricEvaluator {
            public const nint m_pathTimeSamples = 0x50; // CUtlVector<float32>
            public const nint m_flDistance = 0x68; // float32
            public const nint m_bExtrapolateMovement = 0x6C; // bool
            public const nint m_flMinExtrapolationSpeed = 0x70; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootLockUpdateNode {
            public const nint m_opFixedSettings = 0x68; // FootLockPoseOpFixedSettings
            public const nint m_footSettings = 0xD0; // CUtlVector<FootFixedSettings>
            public const nint m_hipShiftDamping = 0xE8; // CAnimInputDamping
            public const nint m_rootHeightDamping = 0xF8; // CAnimInputDamping
            public const nint m_flStrideCurveScale = 0x108; // float32
            public const nint m_flStrideCurveLimitScale = 0x10C; // float32
            public const nint m_flStepHeightIncreaseScale = 0x110; // float32
            public const nint m_flStepHeightDecreaseScale = 0x114; // float32
            public const nint m_flHipShiftScale = 0x118; // float32
            public const nint m_flBlendTime = 0x11C; // float32
            public const nint m_flMaxRootHeightOffset = 0x120; // float32
            public const nint m_flMinRootHeightOffset = 0x124; // float32
            public const nint m_flTiltPlanePitchSpringStrength = 0x128; // float32
            public const nint m_flTiltPlaneRollSpringStrength = 0x12C; // float32
            public const nint m_bApplyFootRotationLimits = 0x130; // bool
            public const nint m_bApplyHipShift = 0x131; // bool
            public const nint m_bModulateStepHeight = 0x132; // bool
            public const nint m_bResetChild = 0x133; // bool
            public const nint m_bEnableVerticalCurvedPaths = 0x134; // bool
            public const nint m_bEnableRootHeightDamping = 0x135; // bool
        }
        // Parent: CNmEvent
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmOrientationWarpEvent {
        }
        // Parent: CNmValueNode__CDefinition
        // Field count: 0
        public static class CNmIDValueNode__CDefinition {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class JiggleBoneSettings_t {
            public const nint m_nBoneIndex = 0x0; // int32
            public const nint m_flSpringStrength = 0x4; // float32
            public const nint m_flMaxTimeStep = 0x8; // float32
            public const nint m_flDamping = 0xC; // float32
            public const nint m_vBoundsMaxLS = 0x10; // Vector
            public const nint m_vBoundsMinLS = 0x1C; // Vector
            public const nint m_eSimSpace = 0x28; // JiggleBoneSimSpace
        }
        // Parent: CSequenceUpdateNode
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CJumpHelperUpdateNode {
            public const nint m_hTargetParam = 0xA8; // CAnimParamHandle
            public const nint m_flOriginalJumpMovement = 0xAC; // Vector
            public const nint m_flOriginalJumpDuration = 0xB8; // float32
            public const nint m_flJumpStartCycle = 0xBC; // float32
            public const nint m_flJumpEndCycle = 0xC0; // float32
            public const nint m_eCorrectionMethod = 0xC4; // JumpCorrectionMethod
            public const nint m_bTranslationAxis = 0xC8; // bool[3]
            public const nint m_bScaleSpeed = 0xCB; // bool
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmControlParameterBoolNode__CDefinition {
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootLockPoseOpFixedSettings {
            public const nint m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
            public const nint m_hipDampingSettings = 0x18; // CAnimInputDamping
            public const nint m_nHipBoneIndex = 0x28; // int32
            public const nint m_ikSolverType = 0x2C; // IKSolverType
            public const nint m_bApplyTilt = 0x30; // bool
            public const nint m_bApplyHipDrop = 0x31; // bool
            public const nint m_bAlwaysUseFallbackHinge = 0x32; // bool
            public const nint m_bApplyFootRotationLimits = 0x33; // bool
            public const nint m_bApplyLegTwistLimits = 0x34; // bool
            public const nint m_flMaxFootHeight = 0x38; // float32
            public const nint m_flExtensionScale = 0x3C; // float32
            public const nint m_flMaxLegTwist = 0x40; // float32
            public const nint m_bEnableLockBreaking = 0x44; // bool
            public const nint m_flLockBreakTolerance = 0x48; // float32
            public const nint m_flLockBlendTime = 0x4C; // float32
            public const nint m_bEnableStretching = 0x50; // bool
            public const nint m_flMaxStretchAmount = 0x54; // float32
            public const nint m_flStretchExtensionScale = 0x58; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneVelocityMetricEvaluator {
            public const nint m_nBoneIndex = 0x50; // int32
        }
        // Parent: CModelConfigElement
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_RandomColor {
            public const nint m_Gradient = 0x48; // CColorGradient
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootMotion {
            public const nint m_strides = 0x0; // CUtlVector<CFootStride>
            public const nint m_name = 0x18; // CUtlString
            public const nint m_bAdditive = 0x20; // bool
        }
        // Parent: CUnaryUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CJiggleBoneUpdateNode {
            public const nint m_opFixedData = 0x68; // JiggleBoneSettingsList_t
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmConstVectorNode__CDefinition {
            public const nint m_value = 0x10; // Vector
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyArrayElementNameKey
        public static class MoodAnimation_t {
            public const nint m_sName = 0x0; // CUtlString
            public const nint m_flWeight = 0x8; // float32
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLODComponentUpdater {
            public const nint m_nServerLOD = 0x30; // int32
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIsTargetSetNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDataChannelDesc {
            public const nint m_szChannelClass = 0x0; // CBufferString
            public const nint m_szVariableName = 0x10; // CBufferString
            public const nint m_nFlags = 0x20; // int32
            public const nint m_nType = 0x24; // int32
            public const nint m_szGrouping = 0x28; // CBufferString
            public const nint m_szDescription = 0x38; // CBufferString
            public const nint m_szElementNameArray = 0x48; // CUtlVector<CBufferString>
            public const nint m_nElementIndexArray = 0x60; // CUtlVector<int32>
            public const nint m_nElementMaskArray = 0x78; // CUtlVector<uint32>
        }
        // Parent: CAnimComponentUpdater
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPairedSequenceComponentUpdater {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphRectData {
            public const nint m_nXLeftDst = 0x0; // int16
            public const nint m_nYTopDst = 0x2; // int16
            public const nint m_flUWidthSrc = 0x4; // float32
            public const nint m_flVHeightSrc = 0x8; // float32
            public const nint m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFoot {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_vBallOffset = 0x8; // Vector
            public const nint m_vHeelOffset = 0x14; // Vector
            public const nint m_ankleBoneIndex = 0x20; // int32
            public const nint m_toeBoneIndex = 0x24; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBoneMask {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_weightInfo = 0x8; // CNmBoneMask::WeightInfo_t
            public const nint m_weights = 0x18; // CUtlVector<float32>
        }
        // Parent: CBaseConstraint
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParentConstraint {
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCachedVectorNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_mode = 0x14; // NmCachedValueMode_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateNode__TimedEvent_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_flTimeValueSeconds = 0x8; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootPositionMetricEvaluator {
            public const nint m_footIndices = 0x50; // CUtlVector<int32>
            public const nint m_bIgnoreSlope = 0x68; // bool
        }
        // Parent: None
        // Field count: 1
        public static class HSequence {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueUpdateItem {
            public const nint m_damping = 0x0; // CAnimInputDamping
            public const nint m_hParamIn = 0x18; // CAnimParamHandle
            public const nint m_hParamOut = 0x1A; // CAnimParamHandle
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimLocalHierarchy {
            public const nint m_sBone = 0x0; // CBufferString
            public const nint m_sNewParent = 0x10; // CBufferString
            public const nint m_nStartFrame = 0x20; // int32
            public const nint m_nPeakFrame = 0x24; // int32
            public const nint m_nTailFrame = 0x28; // int32
            public const nint m_nEndFrame = 0x2C; // int32
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlendUpdateNode {
            public const nint m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
            public const nint m_sortedOrder = 0x78; // CUtlVector<uint8>
            public const nint m_targetValues = 0x90; // CUtlVector<float32>
            public const nint m_blendValueSource = 0xAC; // AnimValueSource
            public const nint m_paramIndex = 0xB0; // CAnimParamHandle
            public const nint m_damping = 0xB8; // CAnimInputDamping
            public const nint m_blendKeyType = 0xC8; // BlendKeyType
            public const nint m_bLockBlendOnReset = 0xCC; // bool
            public const nint m_bSyncCycles = 0xCD; // bool
            public const nint m_bLoop = 0xCE; // bool
            public const nint m_bLockWhenWaning = 0xCF; // bool
        }
        // Parent: CConcreteAnimParameter
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CQuaternionAnimParameter {
            public const nint m_defaultValue = 0x80; // Quaternion
            public const nint m_bInterpolate = 0x90; // bool
        }
        // Parent: None
        // Field count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PermModelData_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_modelInfo = 0x8; // PermModelInfo_t
            public const nint m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
            public const nint m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
            public const nint m_refMeshGroupMasks = 0x90; // CUtlVector<uint64>
            public const nint m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64>
            public const nint m_refLODGroupMasks = 0xC0; // CUtlVector<uint8>
            public const nint m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float32>
            public const nint m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
            public const nint m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
            public const nint m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
            public const nint m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
            public const nint m_meshGroups = 0x150; // CUtlVector<CUtlString>
            public const nint m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
            public const nint m_nDefaultMeshGroupMask = 0x180; // uint64
            public const nint m_modelSkeleton = 0x188; // ModelSkeletonData_t
            public const nint m_remappingTable = 0x230; // CUtlVector<int16>
            public const nint m_remappingTableStarts = 0x248; // CUtlVector<uint16>
            public const nint m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
            public const nint m_pModelConfigList = 0x278; // CModelConfigList*
            public const nint m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
            public const nint m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
            public const nint m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
        }
        // Parent: CNmTask
        // Field count: 0
        public static class CNmSampleTask {
        }
        // Parent: CStaticPoseCache
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStaticPoseCacheBuilder {
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSequenceGroupData {
            public const nint m_sName = 0x10; // CBufferString
            public const nint m_nFlags = 0x20; // uint32
            public const nint m_localSequenceNameArray = 0x28; // CUtlVector<CBufferString>
            public const nint m_localS1SeqDescArray = 0x40; // CUtlVector<CSeqS1SeqDesc>
            public const nint m_localMultiSeqDescArray = 0x58; // CUtlVector<CSeqS1SeqDesc>
            public const nint m_localSynthAnimDescArray = 0x70; // CUtlVector<CSeqSynthAnimDesc>
            public const nint m_localCmdSeqDescArray = 0x88; // CUtlVector<CSeqCmdSeqDesc>
            public const nint m_localBoneMaskArray = 0xA0; // CUtlVector<CSeqBoneMaskList>
            public const nint m_localScaleSetArray = 0xB8; // CUtlVector<CSeqScaleSet>
            public const nint m_localBoneNameArray = 0xD0; // CUtlVector<CBufferString>
            public const nint m_localNodeName = 0xE8; // CBufferString
            public const nint m_localPoseParamArray = 0xF8; // CUtlVector<CSeqPoseParamDesc>
            public const nint m_keyValues = 0x110; // KeyValues3
            public const nint m_localIKAutoplayLockArray = 0x120; // CUtlVector<CSeqIKLock>
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateMachineUpdateNode {
            public const nint m_stateMachine = 0x68; // CAnimStateMachineUpdater
            public const nint m_stateData = 0xC0; // CUtlVector<CStateNodeStateData>
            public const nint m_transitionData = 0xD8; // CUtlVector<CStateNodeTransitionData>
            public const nint m_bBlockWaningTags = 0xF4; // bool
            public const nint m_bLockStateWhenWaning = 0xF5; // bool
        }
        // Parent: CUnaryUpdateNode
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAimMatrixUpdateNode {
            public const nint m_opFixedSettings = 0x70; // AimMatrixOpFixedSettings_t
            public const nint m_target = 0x158; // AnimVectorSource
            public const nint m_paramIndex = 0x15C; // CAnimParamHandle
            public const nint m_hSequence = 0x160; // HSequence
            public const nint m_bResetChild = 0x164; // bool
            public const nint m_bLockWhenWaning = 0x165; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__Frame_t {
            public const nint m_flTime = 0x0; // float32
            public const nint m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
            public const nint m_Transform = 0x20; // CTransform
            public const nint m_bTeleport = 0x40; // bool
            public const nint m_CompositeBones = 0x48; // CUtlVector<CTransform>
            public const nint m_SimStateBones = 0x60; // CUtlVector<CTransform>
            public const nint m_FeModelAnims = 0x78; // CUtlVector<CTransform>
            public const nint m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
            public const nint m_FlexControllerWeights = 0xA8; // CUtlVector<float32>
        }
        // Parent: CModelConfigElement
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_Command {
            public const nint m_Command = 0x48; // CUtlString
            public const nint m_Args = 0x50; // KeyValues3
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimEventDefinition {
            public const nint m_nFrame = 0x8; // int32
            public const nint m_nEndFrame = 0xC; // int32
            public const nint m_flCycle = 0x10; // float32
            public const nint m_flDuration = 0x14; // float32
            public const nint m_EventData = 0x18; // KeyValues3
            public const nint m_sLegacyOptions = 0x28; // CBufferString
            public const nint m_sEventName = 0x38; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmRootMotionData {
            public const nint m_transforms = 0x0; // CUtlVector<CTransform>
            public const nint m_nNumFrames = 0x18; // int32
            public const nint m_flAverageLinearVelocity = 0x1C; // float32
            public const nint m_flAverageAngularVelocityRadians = 0x20; // float32
            public const nint m_totalDelta = 0x30; // CTransform
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimScriptHandle {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexOp {
            public const nint m_OpCode = 0x0; // FlexOpCode_t
            public const nint m_Data = 0x4; // int32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitReactUpdateNode {
            public const nint m_opFixedSettings = 0x68; // HitReactFixedSettings_t
            public const nint m_triggerParam = 0xB4; // CAnimParamHandle
            public const nint m_hitBoneParam = 0xB6; // CAnimParamHandle
            public const nint m_hitOffsetParam = 0xB8; // CAnimParamHandle
            public const nint m_hitDirectionParam = 0xBA; // CAnimParamHandle
            public const nint m_hitStrengthParam = 0xBC; // CAnimParamHandle
            public const nint m_flMinDelayBetweenHits = 0xC0; // float32
            public const nint m_bResetChild = 0xC4; // bool
        }
        // Parent: CUnaryUpdateNode
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLookAtUpdateNode {
            public const nint m_opFixedSettings = 0x70; // LookAtOpFixedSettings_t
            public const nint m_target = 0x138; // AnimVectorSource
            public const nint m_paramIndex = 0x13C; // CAnimParamHandle
            public const nint m_weightParamIndex = 0x13E; // CAnimParamHandle
            public const nint m_bResetChild = 0x140; // bool
            public const nint m_bLockWhenWaning = 0x141; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimBone {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_parent = 0x10; // int32
            public const nint m_pos = 0x14; // Vector
            public const nint m_quat = 0x20; // QuaternionStorage
            public const nint m_scale = 0x30; // float32
            public const nint m_qAlignment = 0x34; // QuaternionStorage
            public const nint m_flags = 0x44; // int32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParameterManagerUpdater {
            public const nint m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
            public const nint m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32>
            public const nint m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32>
            public const nint m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
            public const nint m_autoResetParams = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
            public const nint m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class BoneDemoCaptureSettings_t {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_flErrorSplineRotationMax = 0x8; // float32
            public const nint m_flErrorSplineTranslationMax = 0xC; // float32
            public const nint m_flErrorSplineScaleMax = 0x10; // float32
            public const nint m_flErrorQuantizationRotationMax = 0x14; // float32
            public const nint m_flErrorQuantizationTranslationMax = 0x18; // float32
            public const nint m_flErrorQuantizationScaleMax = 0x1C; // float32
        }
        // Parent: None
        // Field count: 2
        public static class CBoneConstraintPoseSpaceMorph__Input_t {
            public const nint m_inputValue = 0x0; // Vector
            public const nint m_outputWeightList = 0x10; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyArrayElementNameKey
        public static class MoodAnimationLayer_t {
            public const nint m_sName = 0x0; // CUtlString
            public const nint m_bActiveListening = 0x8; // bool
            public const nint m_bActiveTalking = 0x9; // bool
            public const nint m_layerAnimations = 0x10; // CUtlVector<MoodAnimation_t>
            public const nint m_flIntensity = 0x28; // CRangeFloat
            public const nint m_flDurationScale = 0x30; // CRangeFloat
            public const nint m_bScaleWithInts = 0x38; // bool
            public const nint m_flNextStart = 0x3C; // CRangeFloat
            public const nint m_flStartOffset = 0x44; // CRangeFloat
            public const nint m_flEndOffset = 0x4C; // CRangeFloat
            public const nint m_flFadeIn = 0x54; // float32
            public const nint m_flFadeOut = 0x58; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSpeedScaleUpdateNode {
            public const nint m_paramIndex = 0x68; // CAnimParamHandle
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSequenceTagSpans {
            public const nint m_sSequenceName = 0x0; // CGlobalSymbol
            public const nint m_tags = 0x8; // CUtlVector<TagSpan_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDefinition__ChildGraphSlot_t {
            public const nint m_nNodeIdx = 0x0; // int16
            public const nint m_dataSlotIdx = 0x2; // int16
        }
        // Parent: CModelConfigElement
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetBodygroupOnAttachedModels {
            public const nint m_GroupName = 0x48; // CUtlString
            public const nint m_nChoice = 0x50; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCurrentVelocityMetricEvaluator {
        }
        // Parent: CNmValueNode__CDefinition
        // Field count: 0
        public static class CNmBoolValueNode__CDefinition {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimReplayFrame {
            public const nint m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
            public const nint m_instanceData = 0x28; // CUtlBinaryBlock
            public const nint m_startingLocalToWorldTransform = 0x40; // CTransform
            public const nint m_localToWorldTransform = 0x60; // CTransform
            public const nint m_timeStamp = 0x80; // float32
        }
        // Parent: CNmEvent
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTransitionEvent {
            public const nint m_rule = 0x18; // NmTransitionRule_t
            public const nint m_ID = 0x20; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIKRig {
            public const nint m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
        }
        // Parent: CAnimMotorUpdaterBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathAnimMotorUpdaterBase {
            public const nint m_bLockToPath = 0x20; // bool
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFootstepEventPercentageThroughNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_phaseCondition = 0x12; // NmFootPhaseCondition_t
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AimCameraOpFixedSettings_t {
            public const nint m_nChainIndex = 0x0; // int32
            public const nint m_nCameraJointIndex = 0x4; // int32
            public const nint m_nPelvisJointIndex = 0x8; // int32
            public const nint m_nClavicleLeftJointIndex = 0xC; // int32
            public const nint m_nClavicleRightJointIndex = 0x10; // int32
            public const nint m_nDepenetrationJointIndex = 0x14; // int32
            public const nint m_propJoints = 0x18; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__Camera_t {
            public const nint m_tmCamera = 0x0; // CTransform
            public const nint m_flTime = 0x20; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFollowAttachmentUpdateNode {
            public const nint m_opFixedData = 0x70; // FollowAttachmentSettings_t
        }
        // Parent: CAnimComponentUpdater
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMovementComponentUpdater {
            public const nint m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
            public const nint m_facingDamping = 0x48; // CAnimInputDamping
            public const nint m_nDefaultMotorIndex = 0x60; // int32
            public const nint m_flDefaultRunSpeed = 0x64; // float32
            public const nint m_bMoveVarsDisabled = 0x68; // bool
            public const nint m_bNetworkPath = 0x69; // bool
            public const nint m_bNetworkFacing = 0x6A; // bool
            public const nint m_paramHandles = 0x6B; // CAnimParamHandle[30]
        }
        // Parent: CModelConfigElement
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetMaterialGroup {
            public const nint m_MaterialGroupName = 0x48; // CUtlString
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFutureFacingMetricEvaluator {
            public const nint m_flDistance = 0x50; // float32
            public const nint m_flTime = 0x54; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmCompressionSettings_t {
            public const nint m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
            public const nint m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
            public const nint m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
            public const nint m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
            public const nint m_constantRotation = 0x20; // Quaternion
            public const nint m_bIsRotationStatic = 0x30; // bool
            public const nint m_bIsTranslationStatic = 0x31; // bool
            public const nint m_bIsScaleStatic = 0x32; // bool
        }
        // Parent: CBinaryUpdateNode
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAddUpdateNode {
            public const nint m_footMotionTiming = 0x8C; // BinaryNodeChildOption
            public const nint m_bApplyToFootMotion = 0x90; // bool
            public const nint m_bApplyChannelsSeparately = 0x91; // bool
            public const nint m_bUseModelSpace = 0x92; // bool
            public const nint m_bApplyScale = 0x93; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyEditClassAsString
        public static class CAnimEnum {
            public const nint m_value = 0x0; // uint8
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDemoSettingsComponentUpdater {
            public const nint m_settings = 0x30; // CAnimDemoCaptureSettings
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDecoder {
            public const nint m_szName = 0x0; // CBufferString
            public const nint m_nVersion = 0x10; // int32
            public const nint m_nType = 0x14; // int32
        }
        // Parent: CNmTargetValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCachedTargetNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_mode = 0x14; // NmCachedValueMode_t
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmConstBoolNode__CDefinition {
            public const nint m_bValue = 0x10; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBitFlags {
            public const nint m_flags = 0x0; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootStride {
            public const nint m_definition = 0x0; // CFootCycleDefinition
            public const nint m_trajectories = 0x40; // CFootTrajectories
        }
        // Parent: CNmEvent
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmLegacyEvent {
            public const nint m_animEventClassName = 0x18; // CUtlString
            public const nint m_KV = 0x20; // KeyValues3
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateNodeStateData {
            public const nint m_pChild = 0x0; // CAnimUpdateNodeRef
            public const nint m_bExclusiveRootMotion = 0x0; // bitfield:1
            public const nint m_bExclusiveRootMotionFirstFrame = 0x0; // bitfield:1
        }
        // Parent: CAnimTagBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFootstepLandedAnimTag {
            public const nint m_FootstepType = 0x58; // FootstepLandedFootSoundType_t
            public const nint m_OverrideSoundName = 0x60; // CUtlString
            public const nint m_DebugAnimSourceString = 0x68; // CUtlString
            public const nint m_BoneName = 0x70; // CUtlString
        }
        // Parent: CConcreteAnimParameter
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CEnumAnimParameter {
            public const nint m_defaultValue = 0x88; // uint8
            public const nint m_enumOptions = 0x90; // CUtlVector<CUtlString>
            public const nint m_vecEnumReferenced = 0xA8; // CUtlVector<uint64>
        }
        // Parent: CAnimTagBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHandshakeAnimTagBase {
            public const nint m_bIsDisableTag = 0x50; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimTagID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimFrameSegment {
            public const nint m_nUniqueFrameIndex = 0x0; // int32
            public const nint m_nLocalElementMasks = 0x4; // uint32
            public const nint m_nLocalChannel = 0x8; // int32
            public const nint m_container = 0x10; // CUtlBinaryBlock
        }
        // Parent: CAnimComponentUpdater
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSlopeComponentUpdater {
            public const nint m_flTraceDistance = 0x34; // float32
            public const nint m_hSlopeAngle = 0x38; // CAnimParamHandle
            public const nint m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
            public const nint m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
            public const nint m_hSlopeHeading = 0x3E; // CAnimParamHandle
            public const nint m_hSlopeNormal = 0x40; // CAnimParamHandle
            public const nint m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimInputDamping {
            public const nint m_speedFunction = 0x8; // DampingSpeedFunction
            public const nint m_fSpeedScale = 0xC; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHitBoxSet {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nNameHash = 0x8; // uint32
            public const nint m_HitBoxes = 0x10; // CUtlVector<CHitBox>
            public const nint m_SourceFilename = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ChainToSolveData_t {
            public const nint m_nChainIndex = 0x0; // int32
            public const nint m_SolverSettings = 0x4; // IKSolverSettings_t
            public const nint m_TargetSettings = 0x10; // IKTargetSettings_t
            public const nint m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
            public const nint m_flDebugNormalizedValue = 0x3C; // float32
            public const nint m_vDebugOffset = 0x40; // VectorAligned
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CConstraintSlave {
            public const nint m_qBaseOrientation = 0x0; // Quaternion
            public const nint m_vBasePosition = 0x10; // Vector
            public const nint m_nBoneHash = 0x1C; // uint32
            public const nint m_flWeight = 0x20; // float32
            public const nint m_sName = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootCycleDefinition {
            public const nint m_vStancePositionMS = 0x0; // Vector
            public const nint m_vMidpointPositionMS = 0xC; // Vector
            public const nint m_flStanceDirectionMS = 0x18; // float32
            public const nint m_vToStrideStartPos = 0x1C; // Vector
            public const nint m_stanceCycle = 0x28; // CAnimCycle
            public const nint m_footLiftCycle = 0x2C; // CFootCycle
            public const nint m_footOffCycle = 0x30; // CFootCycle
            public const nint m_footStrikeCycle = 0x34; // CFootCycle
            public const nint m_footLandCycle = 0x38; // CFootCycle
        }
        // Parent: CAnimParameterBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVirtualAnimParameter {
            public const nint m_expressionString = 0x70; // CUtlString
            public const nint m_eParamType = 0x78; // AnimParamType_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionMetricEvaluator {
            public const nint m_means = 0x18; // CUtlVector<float32>
            public const nint m_standardDeviations = 0x30; // CUtlVector<float32>
            public const nint m_flWeight = 0x48; // float32
            public const nint m_nDimensionStartIndex = 0x4C; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFutureVelocityMetricEvaluator {
            public const nint m_flDistance = 0x50; // float32
            public const nint m_flStoppingDistance = 0x54; // float32
            public const nint m_flTargetSpeed = 0x58; // float32
            public const nint m_eMode = 0x5C; // VelocityMetricMode
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateNodeBase {
            public const nint m_nodePath = 0x18; // CAnimNodePath
            public const nint m_networkMode = 0x48; // AnimNodeNetworkMode
            public const nint m_name = 0x50; // CUtlString
        }
        // Parent: CAnimActionUpdater
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSetParameterActionUpdater {
            public const nint m_hParam = 0x18; // CAnimParamHandle
            public const nint m_value = 0x1A; // CAnimVariant
        }
        // Parent: CNmBoneMaskValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFixedWeightBoneMaskNode__CDefinition {
            public const nint m_flBoneWeight = 0x10; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphVariation {
            public const nint m_graphDefinition = 0x0; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            public const nint m_dataSet = 0x8; // CNmGraphDataSet
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonAnimCapture_t__FrameStamp_t {
            public const nint m_flTime = 0x0; // float32
            public const nint m_flEntitySimTime = 0x4; // float32
            public const nint m_bTeleportTick = 0x8; // bool
            public const nint m_bPredicted = 0x9; // bool
            public const nint m_flCurTime = 0xC; // float32
            public const nint m_flRealTime = 0x10; // float32
            public const nint m_nFrameCount = 0x14; // int32
            public const nint m_nTickCount = 0x18; // int32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBonePositionMetricEvaluator {
            public const nint m_nBoneIndex = 0x50; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderBufferBinding {
            public const nint m_hBuffer = 0x0; // uint64
            public const nint m_nBindOffsetBytes = 0x10; // uint32
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmExternalGraphNode__CDefinition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmParameterizedBlendNode__Parameterization_t {
            public const nint m_blendRanges = 0x0; // CUtlLeanVectorFixedGrowable<CNmParameterizedBlendNode::BlendRange_t,5>
            public const nint m_parameterRange = 0x48; // Range_t
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmNotNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMeshletDescriptor {
            public const nint m_PackedAABB = 0x0; // PackedAABB_t
            public const nint m_CullingData = 0x8; // CDrawCullingData
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphSetData {
            public const nint m_nWidth = 0x10; // int32
            public const nint m_nHeight = 0x14; // int32
            public const nint m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
            public const nint m_morphDatas = 0x30; // CUtlVector<CMorphData>
            public const nint m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
            public const nint m_FlexControllers = 0x68; // CUtlVector<CFlexController>
            public const nint m_FlexRules = 0x80; // CUtlVector<CFlexRule>
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmAndNode__CDefinition {
            public const nint m_conditionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
        }
        // Parent: CBaseConstraint
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMorphConstraint {
            public const nint m_sTargetMorph = 0x68; // CUtlString
            public const nint m_nSlaveChannel = 0x70; // int32
            public const nint m_flMin = 0x74; // float32
            public const nint m_flMax = 0x78; // float32
        }
        // Parent: CAnimTagBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CClothSettingsAnimTag {
            public const nint m_flStiffness = 0x58; // float32
            public const nint m_flEaseIn = 0x5C; // float32
            public const nint m_flEaseOut = 0x60; // float32
            public const nint m_nVertexSet = 0x68; // CUtlString
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDesc_Flag {
            public const nint m_bLooping = 0x0; // bool
            public const nint m_bAllZeros = 0x1; // bool
            public const nint m_bHidden = 0x2; // bool
            public const nint m_bDelta = 0x3; // bool
            public const nint m_bLegacyWorldspace = 0x4; // bool
            public const nint m_bModelDoc = 0x5; // bool
            public const nint m_bImplicitSeqIgnoreDelta = 0x6; // bool
            public const nint m_bAnimGraphAdditive = 0x7; // bool
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBlend2DNode__CDefinition {
            public const nint m_sourceNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
            public const nint m_nInputParameterNodeIdx0 = 0x38; // int16
            public const nint m_nInputParameterNodeIdx1 = 0x3A; // int16
            public const nint m_values = 0x40; // CUtlVectorFixedGrowable<Vector2D,10>
            public const nint m_indices = 0xA8; // CUtlVectorFixedGrowable<uint8,30>
            public const nint m_hullIndices = 0xE0; // CUtlVectorFixedGrowable<uint8,10>
            public const nint m_bAllowLooping = 0x108; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBlendCurve {
            public const nint m_flControlPoint1 = 0x0; // float32
            public const nint m_flControlPoint2 = 0x4; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphNode__CDefinition {
            public const nint m_nNodeIdx = 0x8; // int16
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerSphere {
            public const nint m_vWsPosition = 0x40; // VectorAligned
            public const nint m_flRadius = 0x50; // float32
            public const nint m_Color = 0x54; // Color
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUserDifference {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_nType = 0x10; // int32
        }
        // Parent: CNmSpeedScaleBaseNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmDurationScaleNode__CDefinition {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTransitionUpdateData {
            public const nint m_srcStateIndex = 0x0; // uint8
            public const nint m_destStateIndex = 0x1; // uint8
            public const nint m_nHandshakeMaskToDisableFirst = 0x0; // bitfield:7
            public const nint m_bDisabled = 0x0; // bitfield:1
        }
        // Parent: CHandshakeAnimTagBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CMovementHandshakeAnimTag {
        }
        // Parent: None
        // Field count: 2
        public static class CBoneConstraintPoseSpaceBone__Input_t {
            public const nint m_inputValue = 0x0; // Vector
            public const nint m_outputTransformList = 0x10; // CUtlVector<CTransform>
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqMultiFetch {
            public const nint m_flags = 0x0; // CSeqMultiFetchFlag
            public const nint m_localReferenceArray = 0x8; // CUtlVector<int16>
            public const nint m_nGroupSize = 0x20; // int32[2]
            public const nint m_nLocalPose = 0x28; // int32[2]
            public const nint m_poseKeyArray0 = 0x30; // CUtlVector<float32>
            public const nint m_poseKeyArray1 = 0x48; // CUtlVector<float32>
            public const nint m_nLocalCyclePoseParameter = 0x60; // int32
            public const nint m_bCalculatePoseParameters = 0x64; // bool
            public const nint m_bFixedBlendWeight = 0x65; // bool
            public const nint m_flFixedBlendWeightVals = 0x68; // float32[2]
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesSoundNames {
            public const nint m_impactSoft = 0x0; // CUtlString
            public const nint m_impactHard = 0x8; // CUtlString
            public const nint m_scrapeSmooth = 0x10; // CUtlString
            public const nint m_scrapeRough = 0x18; // CUtlString
            public const nint m_bulletImpact = 0x20; // CUtlString
            public const nint m_rolling = 0x28; // CUtlString
            public const nint m_break = 0x30; // CUtlString
            public const nint m_strain = 0x38; // CUtlString
            public const nint m_meleeImpact = 0x40; // CUtlString
            public const nint m_pushOff = 0x48; // CUtlString
            public const nint m_skidStop = 0x50; // CUtlString
        }
        // Parent: CAnimTagBase
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAudioAnimTag {
            public const nint m_clipName = 0x58; // CUtlString
            public const nint m_attachmentName = 0x60; // CUtlString
            public const nint m_flVolume = 0x68; // float32
            public const nint m_bStopWhenTagEnds = 0x6C; // bool
            public const nint m_bStopWhenGraphEnds = 0x6D; // bool
            public const nint m_bPlayOnServer = 0x6E; // bool
            public const nint m_bPlayOnClient = 0x6F; // bool
        }
        // Parent: CUnaryUpdateNode
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTurnHelperUpdateNode {
            public const nint m_facingTarget = 0x6C; // AnimValueSource
            public const nint m_turnStartTimeOffset = 0x70; // float32
            public const nint m_turnDuration = 0x74; // float32
            public const nint m_bMatchChildDuration = 0x78; // bool
            public const nint m_manualTurnOffset = 0x7C; // float32
            public const nint m_bUseManualTurnOffset = 0x80; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGroup {
            public const nint m_nFlags = 0x10; // uint32
            public const nint m_name = 0x18; // CBufferString
            public const nint m_localHAnimArray_Handle = 0x60; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
            public const nint m_includedGroupArray_Handle = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
            public const nint m_directHSeqGroup_Handle = 0x90; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
            public const nint m_decodeKey = 0x98; // CAnimKeyData
            public const nint m_szScripts = 0x110; // CUtlVector<CBufferString>
            public const nint m_AdditionalExtRefs = 0x128; // CUtlVector<CStrongHandleVoid>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmSyncTrackTime_t {
            public const nint m_nEventIdx = 0x0; // int32
            public const nint m_percentageThrough = 0x4; // NmPercent_t
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClip {
            public const nint m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            public const nint m_nNumFrames = 0x8; // uint32
            public const nint m_flDuration = 0xC; // float32
            public const nint m_compressedPoseData = 0x10; // CUtlBinaryBlock
            public const nint m_trackCompressionSettings = 0x28; // CUtlVector<NmCompressionSettings_t>
            public const nint m_compressedPoseOffsets = 0x40; // CUtlVector<uint32>
            public const nint m_syncTrack = 0xA0; // CNmSyncTrack
            public const nint m_rootMotion = 0x150; // CNmRootMotionData
            public const nint m_bIsAdditive = 0x1A0; // bool
        }
        // Parent: CAnimActionUpdater
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CToggleComponentActionUpdater {
            public const nint m_componentID = 0x18; // AnimComponentID
            public const nint m_bSetEnabled = 0x1C; // bool
        }
        // Parent: CNmBlendTaskBase
        // Field count: 0
        public static class CNmOverlayBlendTask {
        }
        // Parent: CNmPassthroughNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSpeedScaleBaseNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x18; // int16
            public const nint m_flDefaultInputValue = 0x1C; // float32
        }
        // Parent: CNmGraphNode__CDefinition
        // Field count: 0
        public static class CNmValueNode__CDefinition {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerPrimitiveBase {
            public const nint m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
            public const nint m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
            public const nint m_nOwningAnimNodePathCount = 0x38; // int32
        }
        // Parent: CLeafUpdateNode
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBindPoseUpdateNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmSyncTrackTimeRange_t {
            public const nint m_startTime = 0x0; // NmSyncTrackTime_t
            public const nint m_endTime = 0x8; // NmSyncTrackTime_t
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerText {
            public const nint m_vWsPosition = 0x40; // VectorAligned
            public const nint m_Color = 0x50; // Color
            public const nint m_Text = 0x58; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootTrajectory {
            public const nint m_vOffset = 0x0; // Vector
            public const nint m_flRotationOffset = 0xC; // float32
            public const nint m_flProgression = 0x10; // float32
        }
        // Parent: CLeafUpdateNode
        // Field count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionMatchingUpdateNode {
            public const nint m_dataSet = 0x58; // CMotionDataSet
            public const nint m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
            public const nint m_weights = 0x90; // CUtlVector<float32>
            public const nint m_bSearchEveryTick = 0xE0; // bool
            public const nint m_flSearchInterval = 0xE4; // float32
            public const nint m_bSearchWhenClipEnds = 0xE8; // bool
            public const nint m_bSearchWhenGoalChanges = 0xE9; // bool
            public const nint m_blendCurve = 0xEC; // CBlendCurve
            public const nint m_flSampleRate = 0xF4; // float32
            public const nint m_flBlendTime = 0xF8; // float32
            public const nint m_bLockClipWhenWaning = 0xFC; // bool
            public const nint m_flSelectionThreshold = 0x100; // float32
            public const nint m_flReselectionTimeWindow = 0x104; // float32
            public const nint m_bEnableRotationCorrection = 0x108; // bool
            public const nint m_bGoalAssist = 0x109; // bool
            public const nint m_flGoalAssistDistance = 0x10C; // float32
            public const nint m_flGoalAssistTolerance = 0x110; // float32
            public const nint m_distanceScale_Damping = 0x118; // CAnimInputDamping
            public const nint m_flDistanceScale_OuterRadius = 0x128; // float32
            public const nint m_flDistanceScale_InnerRadius = 0x12C; // float32
            public const nint m_flDistanceScale_MaxScale = 0x130; // float32
            public const nint m_flDistanceScale_MinScale = 0x134; // float32
            public const nint m_bEnableDistanceScaling = 0x138; // bool
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmReferencePoseNode__CDefinition {
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqS1SeqDesc {
            public const nint m_sName = 0x0; // CBufferString
            public const nint m_flags = 0x10; // CSeqSeqDescFlag
            public const nint m_fetch = 0x20; // CSeqMultiFetch
            public const nint m_nLocalWeightlist = 0x90; // int32
            public const nint m_autoLayerArray = 0x98; // CUtlVector<CSeqAutoLayer>
            public const nint m_IKLockArray = 0xB0; // CUtlVector<CSeqIKLock>
            public const nint m_transition = 0xC8; // CSeqTransition
            public const nint m_SequenceKeys = 0xD0; // KeyValues3
            public const nint m_LegacyKeyValueText = 0xE0; // CBufferString
            public const nint m_activityArray = 0xF0; // CUtlVector<CAnimActivity>
            public const nint m_footMotion = 0x108; // CUtlVector<CFootMotion>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexController {
            public const nint m_szName = 0x0; // CUtlString
            public const nint m_szType = 0x8; // CUtlString
            public const nint min = 0x10; // float32
            public const nint max = 0x14; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonDemoDb_t {
            public const nint m_AnimCaptures = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
            public const nint m_CameraTrack = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
            public const nint m_flRecordingTime = 0x30; // float32
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateEventConditionNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
            public const nint m_conditions = 0x18; // CUtlVectorFixedGrowable<CNmStateEventConditionNode::Condition_t,5>
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatRangeComparisonNode__CDefinition {
            public const nint m_range = 0x10; // Range_t
            public const nint m_nInputValueNodeIdx = 0x18; // int16
            public const nint m_bIsInclusiveCheck = 0x1A; // bool
        }
        // Parent: CMotionNode
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNodeSequence {
            public const nint m_tags = 0x28; // CUtlVector<TagSpan_t>
            public const nint m_hSequence = 0x40; // HSequence
            public const nint m_flPlaybackSpeed = 0x44; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexDesc {
            public const nint m_szFacs = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderMesh {
            public const nint m_sceneObjects = 0x10; // CUtlLeanVectorFixedGrowable<CSceneObjectData,1>
            public const nint m_constraints = 0x78; // CUtlLeanVector<CBaseConstraint*>
            public const nint m_skeleton = 0x88; // CRenderSkeleton
            public const nint m_meshDeformParams = 0x1A8; // DynamicMeshDeformParams_t
            public const nint m_pGroomData = 0x1B8; // CRenderGroom*
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimSkeleton {
            public const nint m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
            public const nint m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
            public const nint m_boneNames = 0x40; // CUtlVector<CUtlString>
            public const nint m_children = 0x58; // CUtlVector<CUtlVector<int32>>
            public const nint m_parents = 0x70; // CUtlVector<int32>
            public const nint m_feet = 0x88; // CUtlVector<CAnimFoot>
            public const nint m_morphNames = 0xA0; // CUtlVector<CUtlString>
            public const nint m_lodBoneCounts = 0xB8; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysics2ShapeDef_t {
            public const nint m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
            public const nint m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
            public const nint m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
            public const nint m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
            public const nint m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16>
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatCurveNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_curve = 0x18; // CPiecewiseCurve
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerAxis {
            public const nint m_xWsTransform = 0x40; // CTransform
            public const nint m_flAxisSize = 0x60; // float32
        }
        // Parent: CBaseConstraint
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTwistConstraint {
            public const nint m_bInverse = 0x68; // bool
            public const nint m_qParentBindRotation = 0x70; // Quaternion
            public const nint m_qChildBindRotation = 0x80; // Quaternion
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelBoneFlexDriverControl_t {
            public const nint m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
            public const nint m_flexController = 0x8; // CUtlString
            public const nint m_flexControllerToken = 0x10; // uint32
            public const nint m_flMin = 0x14; // float32
            public const nint m_flMax = 0x18; // float32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqCmdLayer {
            public const nint m_cmd = 0x0; // int16
            public const nint m_nLocalReference = 0x2; // int16
            public const nint m_nLocalBonemask = 0x4; // int16
            public const nint m_nDstResult = 0x6; // int16
            public const nint m_nSrcResult = 0x8; // int16
            public const nint m_bSpline = 0xA; // bool
            public const nint m_flVar1 = 0xC; // float32
            public const nint m_flVar2 = 0x10; // float32
            public const nint m_nLineNumber = 0x14; // int16
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootPinningPoseOpFixedData_t {
            public const nint m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
            public const nint m_flBlendTime = 0x18; // float32
            public const nint m_flLockBreakDistance = 0x1C; // float32
            public const nint m_flMaxLegTwist = 0x20; // float32
            public const nint m_nHipBoneIndex = 0x24; // int32
            public const nint m_bApplyLegTwistLimits = 0x28; // bool
            public const nint m_bApplyFootRotationLimits = 0x29; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderSkeletonBone_t {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_parentName = 0x8; // CUtlString
            public const nint m_invBindPose = 0x10; // matrix3x4_t
            public const nint m_bbox = 0x40; // SkeletonBoneBounds_t
            public const nint m_flSphereRadius = 0x58; // float32
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDistanceRemainingMetricEvaluator {
            public const nint m_flMaxDistance = 0x50; // float32
            public const nint m_flMinDistance = 0x54; // float32
            public const nint m_flStartGoalFilterDistance = 0x58; // float32
            public const nint m_flMaxGoalOvershootScale = 0x5C; // float32
            public const nint m_bFilterFixedMinDistance = 0x60; // bool
            public const nint m_bFilterGoalDistance = 0x61; // bool
            public const nint m_bFilterGoalOvershoot = 0x62; // bool
        }
        // Parent: CUnaryUpdateNode
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDirectPlaybackUpdateNode {
            public const nint m_bFinishEarly = 0x6C; // bool
            public const nint m_bResetOnFinish = 0x6D; // bool
            public const nint m_allTags = 0x70; // CUtlVector<CDirectPlaybackTagData>
        }
        // Parent: CNmEvent
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIDEvent {
            public const nint m_ID = 0x18; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFlexRule {
            public const nint m_nFlex = 0x0; // int32
            public const nint m_FlexOps = 0x8; // CUtlVector<CFlexOp>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ScriptInfo_t {
            public const nint m_code = 0x0; // CUtlString
            public const nint m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
            public const nint m_proxyReadParams = 0x20; // CUtlVector<int32>
            public const nint m_proxyWriteParams = 0x38; // CUtlVector<int32>
            public const nint m_eScriptType = 0x50; // AnimScriptType
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderGroom {
            public const nint m_hairs = 0x0; // CUtlVector<RenderHairStrandInfo_t>
            public const nint m_hairPositionOffsets = 0x18; // CUtlVector<uint32>
            public const nint m_hSimParamsMat = 0x40; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
            public const nint m_nSegmentsPerHairStrand = 0x48; // int32
            public const nint m_nGuideHairCount = 0x4C; // int32
            public const nint m_nHairCount = 0x50; // int32
            public const nint m_nGroomGroupID = 0x54; // int32
            public const nint m_nAttachBoneIdx = 0x58; // int32
            public const nint m_nAttachMeshIdx = 0x5C; // int32
            public const nint m_nAttachMeshDrawCallIdx = 0x60; // int32
            public const nint m_bEnableSimulation = 0x64; // bool
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmParameterizedClipSelectorNode__CDefinition {
            public const nint m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
            public const nint m_parameterNodeIdx = 0x28; // int16
        }
        // Parent: CBaseConstraint
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTiltTwistConstraint {
            public const nint m_nTargetAxis = 0x68; // int32
            public const nint m_nSlaveAxis = 0x6C; // int32
        }
        // Parent: CNmSpeedScaleBaseNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSpeedScaleNode__CDefinition {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVPhysXSurfacePropertiesList {
            public const nint m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderHairStrandInfo_t {
            public const nint m_nGuideHairIndices_nSurfaceTriIndex = 0x0; // uint32[2]
            public const nint m_vGuideBary_vBaseBary = 0x8; // uint16[4]
            public const nint m_vRootOffset_flLengthScale = 0x10; // uint16[4]
            public const nint m_nPackedBaseUv = 0x18; // uint16[2]
            public const nint m_nPackedSurfaceNormalOs = 0x1C; // uint32
            public const nint m_nPackedSurfaceTangentOs = 0x20; // uint32
        }
        // Parent: CLeafUpdateNode
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCycleControlClipUpdateNode {
            public const nint m_tags = 0x60; // CUtlVector<TagSpan_t>
            public const nint m_hSequence = 0x7C; // HSequence
            public const nint m_duration = 0x80; // float32
            public const nint m_valueSource = 0x84; // AnimValueSource
            public const nint m_paramIndex = 0x88; // CAnimParamHandle
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTargetPointNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_bIsWorldSpaceTarget = 0x12; // bool
        }
        // Parent: CNmValueNode__CDefinition
        // Field count: 0
        public static class CNmFloatValueNode__CDefinition {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStaticPoseCache {
            public const nint m_poses = 0x10; // CUtlVector<CCachedPose>
            public const nint m_nBoneCount = 0x28; // int32
            public const nint m_nMorphCount = 0x2C; // int32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class LookAtOpFixedSettings_t {
            public const nint m_attachment = 0x0; // CAnimAttachment
            public const nint m_damping = 0x80; // CAnimInputDamping
            public const nint m_bones = 0x90; // CUtlVector<LookAtBone_t>
            public const nint m_flYawLimit = 0xA8; // float32
            public const nint m_flPitchLimit = 0xAC; // float32
            public const nint m_flHysteresisInnerAngle = 0xB0; // float32
            public const nint m_flHysteresisOuterAngle = 0xB4; // float32
            public const nint m_bRotateYawForward = 0xB8; // bool
            public const nint m_bMaintainUpDirection = 0xB9; // bool
            public const nint m_bTargetIsPosition = 0xBA; // bool
            public const nint m_bUseHysteresis = 0xBB; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphSettingsManager {
            public const nint m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphModelBinding {
            public const nint m_modelName = 0x8; // CUtlString
            public const nint m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
        }
        // Parent: CBaseConstraint
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintPoseSpaceBone {
            public const nint m_inputList = 0x68; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MotionBlendItem {
            public const nint m_pChild = 0x0; // CSmartPtr<CMotionNode>
            public const nint m_flKeyValue = 0x8; // float32
        }
        // Parent: CBoneConstraintBase
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintPoseSpaceMorph {
            public const nint m_sBoneName = 0x28; // CUtlString
            public const nint m_sAttachmentName = 0x30; // CUtlString
            public const nint m_outputMorph = 0x38; // CUtlVector<CUtlString>
            public const nint m_inputList = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
            public const nint m_bClamp = 0x68; // bool
        }
        // Parent: CConcreteAnimParameter
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CFloatAnimParameter {
            public const nint m_fDefaultValue = 0x80; // float32
            public const nint m_fMinValue = 0x84; // float32
            public const nint m_fMaxValue = 0x88; // float32
            public const nint m_bInterpolate = 0x8C; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateActionUpdater {
            public const nint m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
            public const nint m_eBehavior = 0x8; // StateActionBehavior
        }
        // Parent: CAnimMotorUpdaterBase
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPlayerInputAnimMotorUpdater {
            public const nint m_sampleTimes = 0x20; // CUtlVector<float32>
            public const nint m_flSpringConstant = 0x3C; // float32
            public const nint m_flAnticipationDistance = 0x40; // float32
            public const nint m_hAnticipationPosParam = 0x44; // CAnimParamHandle
            public const nint m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
            public const nint m_bUseAcceleration = 0x48; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRenderSkeleton {
            public const nint m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
            public const nint m_boneParents = 0x30; // CUtlVector<int32>
            public const nint m_nBoneWeightCount = 0x48; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqIKLock {
            public const nint m_flPosWeight = 0x0; // float32
            public const nint m_flAngleWeight = 0x4; // float32
            public const nint m_nLocalBone = 0x8; // int16
            public const nint m_bBonesOrientedAlongPositiveX = 0xA; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParamHandleMap {
            public const nint m_list = 0x0; // CUtlHashtable<uint16,int16>
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatClampNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_clampRange = 0x14; // Range_t
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimDesc {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_flags = 0x10; // CAnimDesc_Flag
            public const nint fps = 0x18; // float32
            public const nint m_Data = 0x20; // CAnimEncodedFrames
            public const nint m_movementArray = 0xF8; // CUtlVector<CAnimMovement>
            public const nint m_xInitialOffset = 0x110; // CTransform
            public const nint m_eventArray = 0x130; // CUtlVector<CAnimEventDefinition>
            public const nint m_activityArray = 0x148; // CUtlVector<CAnimActivity>
            public const nint m_hierarchyArray = 0x160; // CUtlVector<CAnimLocalHierarchy>
            public const nint framestalltime = 0x178; // float32
            public const nint m_vecRootMin = 0x17C; // Vector
            public const nint m_vecRootMax = 0x188; // Vector
            public const nint m_vecBoneWorldMin = 0x198; // CUtlVector<Vector>
            public const nint m_vecBoneWorldMax = 0x1B0; // CUtlVector<Vector>
            public const nint m_sequenceParams = 0x1C8; // CAnimSequenceParams
        }
        // Parent: CNmPassthroughNode__CDefinition
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmRootMotionOverrideNode__CDefinition {
            public const nint m_desiredMovingVelocityNodeIdx = 0x18; // int16
            public const nint m_desiredFacingDirectionNodeIdx = 0x1A; // int16
            public const nint m_linearVelocityLimitNodeIdx = 0x1C; // int16
            public const nint m_angularVelocityLimitNodeIdx = 0x1E; // int16
            public const nint m_maxLinearVelocity = 0x20; // float32
            public const nint m_maxAngularVelocityRadians = 0x24; // float32
            public const nint m_overrideFlags = 0x28; // CNmBitFlags
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTargetWarpNode__CDefinition {
            public const nint m_nClipReferenceNodeIdx = 0x10; // int16
            public const nint m_nTargetValueNodeIdx = 0x12; // int16
            public const nint m_samplingMode = 0x14; // CNmRootMotionData::SamplingMode_t
            public const nint m_bAllowTargetUpdate = 0x15; // bool
            public const nint m_flSamplingPositionErrorThresholdSq = 0x18; // float32
            public const nint m_flMaxTangentLength = 0x1C; // float32
            public const nint m_flLerpFallbackDistanceThreshold = 0x20; // float32
            public const nint m_flTargetUpdateDistanceThreshold = 0x24; // float32
            public const nint m_flTargetUpdateAngleThresholdRadians = 0x28; // float32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesPhysics {
            public const nint m_friction = 0x0; // float32
            public const nint m_elasticity = 0x4; // float32
            public const nint m_density = 0x8; // float32
            public const nint m_thickness = 0xC; // float32
            public const nint m_softContactFrequency = 0x10; // float32
            public const nint m_softContactDampingRatio = 0x14; // float32
            public const nint m_wheelDrag = 0x18; // float32
            public const nint m_heatConductivity = 0x1C; // float32
            public const nint m_flashpoint = 0x20; // float32
        }
        // Parent: CAnimationGraphVisualizerPrimitiveBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationGraphVisualizerPie {
            public const nint m_vWsCenter = 0x40; // VectorAligned
            public const nint m_vWsStart = 0x50; // VectorAligned
            public const nint m_vWsEnd = 0x60; // VectorAligned
            public const nint m_Color = 0x70; // Color
        }
        // Parent: CBoneConstraintBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintDotToMorph {
            public const nint m_sBoneName = 0x28; // CUtlString
            public const nint m_sTargetBoneName = 0x30; // CUtlString
            public const nint m_sMorphChannelName = 0x38; // CUtlString
            public const nint m_flRemap = 0x40; // float32[4]
        }
        // Parent: CBaseConstraint
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPointConstraint {
        }
        // Parent: CMotionMetricEvaluator
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCurrentRotationVelocityMetricEvaluator {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TraceSettings_t {
            public const nint m_flTraceHeight = 0x0; // float32
            public const nint m_flTraceRadius = 0x4; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParamSpanSample_t {
            public const nint m_value = 0x0; // CAnimVariant
            public const nint m_flCycle = 0x14; // float32
        }
        // Parent: None
        // Field count: 46
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXConstraintParams_t {
            public const nint m_nType = 0x0; // int8
            public const nint m_nTranslateMotion = 0x1; // int8
            public const nint m_nRotateMotion = 0x2; // int8
            public const nint m_nFlags = 0x3; // int8
            public const nint m_anchor = 0x4; // Vector[2]
            public const nint m_axes = 0x1C; // QuaternionStorage[2]
            public const nint m_maxForce = 0x3C; // float32
            public const nint m_maxTorque = 0x40; // float32
            public const nint m_linearLimitValue = 0x44; // float32
            public const nint m_linearLimitRestitution = 0x48; // float32
            public const nint m_linearLimitSpring = 0x4C; // float32
            public const nint m_linearLimitDamping = 0x50; // float32
            public const nint m_twistLowLimitValue = 0x54; // float32
            public const nint m_twistLowLimitRestitution = 0x58; // float32
            public const nint m_twistLowLimitSpring = 0x5C; // float32
            public const nint m_twistLowLimitDamping = 0x60; // float32
            public const nint m_twistHighLimitValue = 0x64; // float32
            public const nint m_twistHighLimitRestitution = 0x68; // float32
            public const nint m_twistHighLimitSpring = 0x6C; // float32
            public const nint m_twistHighLimitDamping = 0x70; // float32
            public const nint m_swing1LimitValue = 0x74; // float32
            public const nint m_swing1LimitRestitution = 0x78; // float32
            public const nint m_swing1LimitSpring = 0x7C; // float32
            public const nint m_swing1LimitDamping = 0x80; // float32
            public const nint m_swing2LimitValue = 0x84; // float32
            public const nint m_swing2LimitRestitution = 0x88; // float32
            public const nint m_swing2LimitSpring = 0x8C; // float32
            public const nint m_swing2LimitDamping = 0x90; // float32
            public const nint m_goalPosition = 0x94; // Vector
            public const nint m_goalOrientation = 0xA0; // QuaternionStorage
            public const nint m_goalAngularVelocity = 0xB0; // Vector
            public const nint m_driveSpringX = 0xBC; // float32
            public const nint m_driveSpringY = 0xC0; // float32
            public const nint m_driveSpringZ = 0xC4; // float32
            public const nint m_driveDampingX = 0xC8; // float32
            public const nint m_driveDampingY = 0xCC; // float32
            public const nint m_driveDampingZ = 0xD0; // float32
            public const nint m_driveSpringTwist = 0xD4; // float32
            public const nint m_driveSpringSwing = 0xD8; // float32
            public const nint m_driveSpringSlerp = 0xDC; // float32
            public const nint m_driveDampingTwist = 0xE0; // float32
            public const nint m_driveDampingSwing = 0xE4; // float32
            public const nint m_driveDampingSlerp = 0xE8; // float32
            public const nint m_solverIterationCount = 0xEC; // int32
            public const nint m_projectionLinearTolerance = 0xF0; // float32
            public const nint m_projectionAngularTolerance = 0xF4; // float32
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatComparisonNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_nComparandValueNodeIdx = 0x12; // int16
            public const nint m_comparison = 0x14; // CNmFloatComparisonNode::Comparison_t
            public const nint m_flEpsilon = 0x18; // float32
            public const nint m_flComparisonValue = 0x1C; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateUpdateData {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_hScript = 0x8; // AnimScriptHandle
            public const nint m_transitionIndices = 0x10; // CUtlVector<int32>
            public const nint m_actions = 0x28; // CUtlVector<CStateActionUpdater>
            public const nint m_stateID = 0x40; // AnimStateID
            public const nint m_bIsStartState = 0x0; // bitfield:1
            public const nint m_bIsEndState = 0x0; // bitfield:1
            public const nint m_bIsPassthrough = 0x0; // bitfield:1
        }
        // Parent: CNmValueNode__CDefinition
        // Field count: 0
        public static class CNmTargetValueNode__CDefinition {
        }
        // Parent: CBaseConstraint
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class COrientConstraint {
        }
        // Parent: CUnaryUpdateNode
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMoverUpdateNode {
            public const nint m_damping = 0x70; // CAnimInputDamping
            public const nint m_facingTarget = 0x80; // AnimValueSource
            public const nint m_hMoveVecParam = 0x84; // CAnimParamHandle
            public const nint m_hMoveHeadingParam = 0x86; // CAnimParamHandle
            public const nint m_hTurnToFaceParam = 0x88; // CAnimParamHandle
            public const nint m_flTurnToFaceOffset = 0x8C; // float32
            public const nint m_flTurnToFaceLimit = 0x90; // float32
            public const nint m_bAdditive = 0x94; // bool
            public const nint m_bApplyMovement = 0x95; // bool
            public const nint m_bOrientMovement = 0x96; // bool
            public const nint m_bApplyRotation = 0x97; // bool
            public const nint m_bLimitOnly = 0x98; // bool
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmLayerBlendNode__CDefinition {
            public const nint m_nBaseNodeIdx = 0x10; // int16
            public const nint m_bOnlySampleBaseRootMotion = 0x12; // bool
            public const nint m_layerDefinition = 0x18; // CUtlLeanVectorFixedGrowable<CNmLayerBlendNode::LayerDefinition_t,3>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMotorUpdaterBase {
            public const nint m_name = 0x10; // CUtlString
            public const nint m_bDefault = 0x18; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class JiggleBoneSettingsList_t {
            public const nint m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
        }
        // Parent: CBinaryUpdateNode
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSubtractUpdateNode {
            public const nint m_footMotionTiming = 0x8C; // BinaryNodeChildOption
            public const nint m_bApplyToFootMotion = 0x90; // bool
            public const nint m_bApplyChannelsSeparately = 0x91; // bool
            public const nint m_bUseModelSpace = 0x92; // bool
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFloatRemapNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_inputRange = 0x14; // CNmFloatRemapNode::RemapRange_t
            public const nint m_outputRange = 0x1C; // CNmFloatRemapNode::RemapRange_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPoseHandle {
            public const nint m_nIndex = 0x0; // uint16
            public const nint m_eType = 0x2; // PoseType_t
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFootstepEventIDNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSolveIKChainUpdateNode {
            public const nint m_targetHandles = 0x68; // CUtlVector<CSolveIKTargetHandle_t>
            public const nint m_opFixedData = 0x80; // SolveIKChainPoseOpFixedSettings_t
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmOrNode__CDefinition {
            public const nint m_conditionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqCmdSeqDesc {
            public const nint m_sName = 0x0; // CBufferString
            public const nint m_flags = 0x10; // CSeqSeqDescFlag
            public const nint m_transition = 0x1C; // CSeqTransition
            public const nint m_nFrameRangeSequence = 0x24; // int16
            public const nint m_nFrameCount = 0x26; // int16
            public const nint m_flFPS = 0x28; // float32
            public const nint m_nSubCycles = 0x2C; // int16
            public const nint m_numLocalResults = 0x2E; // int16
            public const nint m_cmdLayerArray = 0x30; // CUtlVector<CSeqCmdLayer>
            public const nint m_eventArray = 0x48; // CUtlVector<CAnimEventDefinition>
            public const nint m_activityArray = 0x60; // CUtlVector<CAnimActivity>
            public const nint m_poseSettingArray = 0x78; // CUtlVector<CSeqPoseSetting>
        }
        // Parent: CBinaryUpdateNode
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneMaskUpdateNode {
            public const nint m_nWeightListIndex = 0x8C; // int32
            public const nint m_flRootMotionBlend = 0x90; // float32
            public const nint m_blendSpace = 0x94; // BoneMaskBlendSpace
            public const nint m_footMotionTiming = 0x98; // BinaryNodeChildOption
            public const nint m_bUseBlendScale = 0x9C; // bool
            public const nint m_blendValueSource = 0xA0; // AnimValueSource
            public const nint m_hBlendParameter = 0xA4; // CAnimParamHandle
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLeafUpdateNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SolveIKChainPoseOpFixedSettings_t {
            public const nint m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TwoBoneIKSettings_t {
            public const nint m_endEffectorType = 0x0; // IkEndEffectorType
            public const nint m_endEffectorAttachment = 0x10; // CAnimAttachment
            public const nint m_targetType = 0x90; // IkTargetType
            public const nint m_targetAttachment = 0xA0; // CAnimAttachment
            public const nint m_targetBoneIndex = 0x120; // int32
            public const nint m_hPositionParam = 0x124; // CAnimParamHandle
            public const nint m_hRotationParam = 0x126; // CAnimParamHandle
            public const nint m_bAlwaysUseFallbackHinge = 0x128; // bool
            public const nint m_vLsFallbackHingeAxis = 0x130; // VectorAligned
            public const nint m_nFixedBoneIndex = 0x140; // int32
            public const nint m_nMiddleBoneIndex = 0x144; // int32
            public const nint m_nEndBoneIndex = 0x148; // int32
            public const nint m_bMatchTargetOrientation = 0x14C; // bool
            public const nint m_bConstrainTwist = 0x14D; // bool
            public const nint m_flMaxTwist = 0x150; // float32
        }
        // Parent: CNmTask
        // Field count: 0
        public static class CNmCachedPoseWriteTask {
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimUpdateSharedData {
            public const nint m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
            public const nint m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32>
            public const nint m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
            public const nint m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
            public const nint m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
            public const nint m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
            public const nint m_settings = 0x78; // CAnimGraphSettingsManager
            public const nint m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
            public const nint m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
            public const nint m_rootNodePath = 0xB8; // CAnimNodePath
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimAttachment {
            public const nint m_influenceRotations = 0x0; // Quaternion[3]
            public const nint m_influenceOffsets = 0x30; // VectorAligned[3]
            public const nint m_influenceIndices = 0x60; // int32[3]
            public const nint m_influenceWeights = 0x6C; // float32[3]
            public const nint m_numInfluences = 0x78; // uint8
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootTrajectories {
            public const nint m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmIDComparisonNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
            public const nint m_comparison = 0x12; // CNmIDComparisonNode::Comparison_t
            public const nint m_comparisionIDs = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>
        }
        // Parent: CMotionGraph
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEditableMotionGraph {
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmConstFloatNode__CDefinition {
            public const nint m_flValue = 0x10; // float32
        }
        // Parent: CAnimTagBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CStringAnimTag {
        }
        // Parent: CConcreteAnimParameter
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CBoolAnimParameter {
            public const nint m_bDefaultValue = 0x80; // bool
        }
        // Parent: CAnimTagBase
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CRagdollAnimTag {
            public const nint m_nPoseControl = 0x58; // AnimPoseControl
            public const nint m_flFrequency = 0x5C; // float32
            public const nint m_flDampingRatio = 0x60; // float32
            public const nint m_flDecayDuration = 0x64; // float32
            public const nint m_flDecayBias = 0x68; // float32
            public const nint m_bDestroy = 0x6C; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNode {
            public const nint m_name = 0x18; // CUtlString
            public const nint m_id = 0x20; // AnimNodeID
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateMachineNode__CDefinition {
            public const nint m_stateDefinitions = 0x10; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::StateDefinition_t,5>
            public const nint m_nDefaultStateIndex = 0x130; // int16
        }
        // Parent: CAnimTagBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CBodyGroupAnimTag {
            public const nint m_nPriority = 0x58; // int32
            public const nint m_bodyGroupSettings = 0x60; // CUtlVector<CBodyGroupSetting>
        }
        // Parent: CNmBlendTaskBase
        // Field count: 0
        public static class CNmModelSpaceBlendTask {
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmZeroPoseNode__CDefinition {
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmOrientationWarpNode__CDefinition {
            public const nint m_nClipReferenceNodeIdx = 0x10; // int16
            public const nint m_nTargetValueNodeIdx = 0x12; // int16
            public const nint m_bIsOffsetNode = 0x14; // bool
            public const nint m_bIsOffsetRelativeToCharacter = 0x15; // bool
            public const nint m_samplingMode = 0x16; // CNmRootMotionData::SamplingMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyEditClassAsString
        public static class AnimParamID {
            public const nint m_id = 0x0; // uint32
        }
        // Parent: CNmBoneMaskValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBoneMaskNode__CDefinition {
            public const nint m_boneMaskID = 0x10; // CGlobalSymbol
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmChildGraphNode__CDefinition {
            public const nint m_nChildGraphIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AnimationDecodeDebugDump_t {
            public const nint m_processingType = 0x0; // AnimationProcessingType_t
            public const nint m_elems = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVirtualParameterIDNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqScaleSet {
            public const nint m_sName = 0x0; // CBufferString
            public const nint m_bRootOffset = 0x10; // bool
            public const nint m_vRootOffset = 0x14; // Vector
            public const nint m_nLocalBoneArray = 0x20; // CUtlVector<int16>
            public const nint m_flBoneScaleArray = 0x38; // CUtlVector<float32>
        }
        // Parent: CLeafUpdateNode
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDirectionalBlendUpdateNode {
            public const nint m_hSequences = 0x5C; // HSequence[8]
            public const nint m_damping = 0x80; // CAnimInputDamping
            public const nint m_blendValueSource = 0x90; // AnimValueSource
            public const nint m_paramIndex = 0x94; // CAnimParamHandle
            public const nint m_playbackSpeed = 0x98; // float32
            public const nint m_duration = 0x9C; // float32
            public const nint m_bLoop = 0xA0; // bool
            public const nint m_bLockBlendOnReset = 0xA1; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParamSpan_t {
            public const nint m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
            public const nint m_hParam = 0x18; // CAnimParamHandle
            public const nint m_eParamType = 0x1A; // AnimParamType_t
            public const nint m_flStartCycle = 0x1C; // float32
            public const nint m_flEndCycle = 0x20; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFootStepTriggerUpdateNode {
            public const nint m_triggers = 0x68; // CUtlVector<FootStepTrigger>
            public const nint m_flTolerance = 0x84; // float32
        }
        // Parent: None
        // Field count: 5
        public static class IKTargetSettings_t {
            public const nint m_TargetSource = 0x0; // IKTargetSource
            public const nint m_Bone = 0x8; // IKBoneNameAndIndex_t
            public const nint m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
            public const nint m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
            public const nint m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCurrentSyncEventIndexNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
        }
        // Parent: CModelConfigElement
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_SetRenderColor {
            public const nint m_Color = 0x48; // Color
        }
        // Parent: CNmBlendTaskBase
        // Field count: 0
        public static class CNmAdditiveBlendTask {
        }
        // Parent: CNmPoseNode__CDefinition
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmAnimationPoseNode__CDefinition {
            public const nint m_nPoseTimeValueNodeIdx = 0x10; // int16
            public const nint m_nDataSlotIdx = 0x12; // int16
            public const nint m_inputTimeRemapRange = 0x14; // Range_t
            public const nint m_flUserSpecifiedTime = 0x1C; // float32
            public const nint m_bUseFramesAsInput = 0x20; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionSearchDB {
            public const nint m_rootNode = 0x0; // CMotionSearchNode
            public const nint m_residualQuantizer = 0x80; // CProductQuantizer
            public const nint m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
        }
        // Parent: CMotionNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionNodeBlend1D {
            public const nint m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
            public const nint m_nParamIndex = 0x40; // int32
        }
        // Parent: CNmTargetValueNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmControlParameterTargetNode__CDefinition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SkeletonBoneBounds_t {
            public const nint m_vecCenter = 0x0; // Vector
            public const nint m_vecSize = 0xC; // Vector
        }
        // Parent: CUnaryUpdateNode
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTwoBoneIKUpdateNode {
            public const nint m_opFixedData = 0x70; // TwoBoneIKSettings_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VPhysXBodyPart_t {
            public const nint m_nFlags = 0x0; // uint32
            public const nint m_flMass = 0x4; // float32
            public const nint m_rnShape = 0x8; // VPhysics2ShapeDef_t
            public const nint m_nCollisionAttributeIndex = 0x80; // uint16
            public const nint m_nReserved = 0x82; // uint16
            public const nint m_flInertiaScale = 0x84; // float32
            public const nint m_flLinearDamping = 0x88; // float32
            public const nint m_flAngularDamping = 0x8C; // float32
            public const nint m_bOverrideMassCenter = 0x90; // bool
            public const nint m_vMassCenterOverride = 0x94; // Vector
        }
        // Parent: CHandshakeAnimTagBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CTaskHandshakeAnimTag {
        }
        // Parent: CUnaryUpdateNode
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFollowPathUpdateNode {
            public const nint m_flBlendOutTime = 0x6C; // float32
            public const nint m_bBlockNonPathMovement = 0x70; // bool
            public const nint m_bStopFeetAtGoal = 0x71; // bool
            public const nint m_bScaleSpeed = 0x72; // bool
            public const nint m_flScale = 0x74; // float32
            public const nint m_flMinAngle = 0x78; // float32
            public const nint m_flMaxAngle = 0x7C; // float32
            public const nint m_flSpeedScaleBlending = 0x80; // float32
            public const nint m_turnDamping = 0x88; // CAnimInputDamping
            public const nint m_facingTarget = 0x98; // AnimValueSource
            public const nint m_hParam = 0x9C; // CAnimParamHandle
            public const nint m_flTurnToFaceOffset = 0xA0; // float32
            public const nint m_bTurnToFace = 0xA4; // bool
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AimMatrixOpFixedSettings_t {
            public const nint m_attachment = 0x0; // CAnimAttachment
            public const nint m_damping = 0x80; // CAnimInputDamping
            public const nint m_poseCacheHandles = 0x90; // CPoseHandle[10]
            public const nint m_eBlendMode = 0xB8; // AimMatrixBlendMode
            public const nint m_flMaxYawAngle = 0xBC; // float32
            public const nint m_flMaxPitchAngle = 0xC0; // float32
            public const nint m_nSequenceMaxFrame = 0xC4; // int32
            public const nint m_nBoneMaskIndex = 0xC8; // int32
            public const nint m_bTargetIsPosition = 0xCC; // bool
            public const nint m_bUseBiasAndClamp = 0xCD; // bool
            public const nint m_flBiasAndClampYawOffset = 0xD0; // float32
            public const nint m_flBiasAndClampPitchOffset = 0xD4; // float32
            public const nint m_biasAndClampBlendCurve = 0xD8; // CBlendCurve
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimScriptComponentUpdater {
            public const nint m_hScript = 0x30; // AnimScriptHandle
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRagdollUpdateNode {
            public const nint m_nWeightListIndex = 0x68; // int32
            public const nint m_poseControlMethod = 0x6C; // RagdollPoseControl
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBoneConstraintBase {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmStateEventConditionNode__Condition_t {
            public const nint m_eventID = 0x0; // CGlobalSymbol
            public const nint m_eventTypeCondition = 0x8; // NmStateEventTypeCondition_t
        }
        // Parent: CPathAnimMotorUpdaterBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathAnimMotorUpdater {
        }
        // Parent: CAnimTagBase
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CMaterialAttributeAnimTag {
            public const nint m_AttributeName = 0x58; // CUtlString
            public const nint m_AttributeType = 0x60; // MatterialAttributeTagType_t
            public const nint m_flValue = 0x64; // float32
            public const nint m_Color = 0x68; // Color
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFootEventConditionNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
            public const nint m_phaseCondition = 0x12; // NmFootPhaseCondition_t
            public const nint m_eventConditionRules = 0x14; // CNmBitFlags
        }
        // Parent: CNmEvent
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmFootEvent {
            public const nint m_phase = 0x18; // NmFootPhase_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysSurfacePropertiesAudio {
            public const nint m_reflectivity = 0x0; // float32
            public const nint m_hardnessFactor = 0x4; // float32
            public const nint m_roughnessFactor = 0x8; // float32
            public const nint m_roughThreshold = 0xC; // float32
            public const nint m_hardThreshold = 0x10; // float32
            public const nint m_hardVelocityThreshold = 0x14; // float32
            public const nint m_flStaticImpactVolume = 0x18; // float32
            public const nint m_flOcclusionFactor = 0x1C; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSeqAutoLayer {
            public const nint m_nLocalReference = 0x0; // int16
            public const nint m_nLocalPose = 0x2; // int16
            public const nint m_flags = 0x4; // CSeqAutoLayerFlag
            public const nint m_start = 0xC; // float32
            public const nint m_peak = 0x10; // float32
            public const nint m_tail = 0x14; // float32
            public const nint m_end = 0x18; // float32
        }
        // Parent: CNmFloatValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmCurrentSyncEventPercentageThroughNode__CDefinition {
            public const nint m_nSourceStateNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PhysSoftbodyDesc_t {
            public const nint m_ParticleBoneHash = 0x0; // CUtlVector<uint32>
            public const nint m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
            public const nint m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
            public const nint m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
            public const nint m_InitPose = 0x60; // CUtlVector<CTransform>
            public const nint m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimSequenceParams {
            public const nint m_flFadeInTime = 0x0; // float32
            public const nint m_flFadeOutTime = 0x4; // float32
        }
        // Parent: CUnaryUpdateNode
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTargetWarpUpdateNode {
            public const nint m_hPositionParameter = 0x6C; // CAnimParamHandle
            public const nint m_hFacePositionParameter = 0x6E; // CAnimParamHandle
        }
        // Parent: CNmBoolValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVirtualParameterBoolNode__CDefinition {
            public const nint m_nChildNodeIdx = 0x10; // int16
        }
        // Parent: CUnaryUpdateNode
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFollowTargetUpdateNode {
            public const nint m_opFixedData = 0x68; // FollowTargetOpFixedSettings_t
            public const nint m_hParameterPosition = 0x80; // CAnimParamHandle
            public const nint m_hParameterOrientation = 0x82; // CAnimParamHandle
        }
        // Parent: CAnimComponentUpdater
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCPPScriptComponentUpdater {
            public const nint m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimData {
            public const nint m_name = 0x10; // CBufferString
            public const nint m_animArray = 0x20; // CUtlVector<CAnimDesc>
            public const nint m_decoderArray = 0x38; // CUtlVector<CAnimDecoder>
            public const nint m_nMaxUniqueFrameIndex = 0x50; // int32
            public const nint m_segmentArray = 0x58; // CUtlVector<CAnimFrameSegment>
        }
        // Parent: None
        // Field count: 3
        public static class IKSolverSettings_t {
            public const nint m_SolverType = 0x0; // IKSolverType
            public const nint m_nNumIterations = 0x4; // int32
            public const nint m_EndEffectorRotationFixUpMode = 0x8; // EIKEndEffectorRotationFixUpMode
        }
        // Parent: CAnimUpdateNodeBase
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBinaryUpdateNode {
            public const nint m_pChild1 = 0x58; // CAnimUpdateNodeRef
            public const nint m_pChild2 = 0x68; // CAnimUpdateNodeRef
            public const nint m_timingBehavior = 0x78; // BinaryNodeTiming
            public const nint m_flTimingBlend = 0x7C; // float32
            public const nint m_bResetChild1 = 0x80; // bool
            public const nint m_bResetChild2 = 0x81; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmParameterizedBlendNode__BlendRange_t {
            public const nint m_nInputIdx0 = 0x0; // int16
            public const nint m_nInputIdx1 = 0x2; // int16
            public const nint m_parameterValueRange = 0x4; // Range_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimKeyData {
            public const nint m_name = 0x0; // CBufferString
            public const nint m_boneArray = 0x10; // CUtlVector<CAnimBone>
            public const nint m_userArray = 0x28; // CUtlVector<CAnimUser>
            public const nint m_morphArray = 0x40; // CUtlVector<CBufferString>
            public const nint m_nChannelElements = 0x58; // int32
            public const nint m_dataChannelArray = 0x60; // CUtlVector<CAnimDataChannelDesc>
        }
        // Parent: None
        // Field count: 1
        public static class AttachmentHandle_t {
            public const nint m_Value = 0x0; // uint8
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimMorphDifference {
            public const nint m_name = 0x0; // CBufferString
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FootFixedData_t {
            public const nint m_vToeOffset = 0x0; // VectorAligned
            public const nint m_vHeelOffset = 0x10; // VectorAligned
            public const nint m_nTargetBoneIndex = 0x20; // int32
            public const nint m_nAnkleBoneIndex = 0x24; // int32
            public const nint m_nIKAnchorBoneIndex = 0x28; // int32
            public const nint m_ikChainIndex = 0x2C; // int32
            public const nint m_flMaxIKLength = 0x30; // float32
            public const nint m_nFootIndex = 0x34; // int32
            public const nint m_nTagIndex = 0x38; // int32
            public const nint m_flMaxRotationLeft = 0x3C; // float32
            public const nint m_flMaxRotationRight = 0x40; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMotionGraphGroup {
            public const nint m_searchDB = 0x0; // CMotionSearchDB
            public const nint m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
            public const nint m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
            public const nint m_sampleToConfig = 0xE8; // CUtlVector<int32>
            public const nint m_hIsActiveScript = 0x100; // AnimScriptHandle
        }
        // Parent: CNmVectorValueNode__CDefinition
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVectorNegateNode__CDefinition {
            public const nint m_nInputValueNodeIdx = 0x10; // int16
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSyncTrack__Event_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_startTime = 0x8; // NmPercent_t
            public const nint m_duration = 0xC; // NmPercent_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmTarget {
            public const nint m_transform = 0x0; // CTransform
            public const nint m_boneID = 0x20; // CGlobalSymbol
            public const nint m_bIsBoneTarget = 0x28; // bool
            public const nint m_bIsUsingBoneSpaceOffsets = 0x29; // bool
            public const nint m_bHasOffsets = 0x2A; // bool
            public const nint m_bIsSet = 0x2B; // bool
        }
        // Parent: CNmIDValueNode__CDefinition
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmControlParameterIDNode__CDefinition {
        }
        // Parent: CUnaryUpdateNode
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CWayPointHelperUpdateNode {
            public const nint m_flStartCycle = 0x6C; // float32
            public const nint m_flEndCycle = 0x70; // float32
            public const nint m_bOnlyGoals = 0x74; // bool
            public const nint m_bPreventOvershoot = 0x75; // bool
            public const nint m_bPreventUndershoot = 0x76; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        public static class CMoodVData {
            public const nint m_sModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_nMoodType = 0xE0; // MoodType_t
            public const nint m_animationLayers = 0xE8; // CUtlVector<MoodAnimationLayer_t>
        }
        // Parent: CModelConfigElement
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModelConfigElement_AttachedModel {
            public const nint m_InstanceName = 0x48; // CUtlString
            public const nint m_EntityClass = 0x50; // CUtlString
            public const nint m_hModel = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_vOffset = 0x60; // Vector
            public const nint m_aAngOffset = 0x6C; // QAngle
            public const nint m_AttachmentName = 0x78; // CUtlString
            public const nint m_LocalAttachmentOffsetName = 0x80; // CUtlString
            public const nint m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
            public const nint m_bBoneMergeFlex = 0x8C; // bool
            public const nint m_bUserSpecifiedColor = 0x8D; // bool
            public const nint m_bUserSpecifiedMaterialGroup = 0x8E; // bool
            public const nint m_bAcceptParentMaterialDrivenDecals = 0x8F; // bool
            public const nint m_BodygroupOnOtherModels = 0x90; // CUtlString
            public const nint m_MaterialGroupOnOtherModels = 0x98; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagManagerUpdater {
            public const nint m_tags = 0x38; // CUtlVector<CSmartPtr<CAnimTagBase>>
        }
    }
}
