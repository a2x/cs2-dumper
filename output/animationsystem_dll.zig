// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-26 05:30:26.200384300 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: animationsystem.dll
        // Class count: 662
        // Enum count: 139
        pub const animationsystem_dll = struct {
            // Alignment: 4
            // Member count: 2
            pub const PulseBestOutflowRules_t = enum(u32) {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseCursorCancelPriority_t = enum(u32) {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseMethodCallMode_t = enum(u32) {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 17
            pub const SeqCmd_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 3
            pub const CNmEventRelevance_t = enum(u32) {
                ClientOnly = 0x0,
                ServerOnly = 0x1,
                ClientAndServer = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const BoneTransformSpace_t = enum(u32) {
                BoneTransformSpace_Invalid = 0xFFFFFFFF,
                BoneTransformSpace_Parent = 0x0,
                BoneTransformSpace_Model = 0x1,
                BoneTransformSpace_World = 0x2
            };
            // Alignment: 4
            // Member count: 5
            pub const CAnimationGraphVisualizerPrimitiveType = enum(u32) {
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4
            };
            // Alignment: 1
            // Member count: 3
            pub const NmTransitionRule_t = enum(u8) {
                AllowTransition = 0x0,
                ConditionallyAllowTransition = 0x1,
                BlockTransition = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const BinaryNodeTiming = enum(u32) {
                UseChild1 = 0x0,
                UseChild2 = 0x1,
                SyncChildren = 0x2
            };
            // Alignment: 1
            // Member count: 3
            pub const NmFollowBoneMode_t = enum(u8) {
                RotationAndTranslation = 0x0,
                RotationOnly = 0x1,
                TranslationOnly = 0x2
            };
            // Alignment: 4
            // Member count: 7
            pub const SolveIKChainAnimNodeDebugSetting = enum(u32) {
                SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6
            };
            // Alignment: 4
            // Member count: 2
            pub const CNmParticleEvent__Type_t = enum(u32) {
                Create = 0x0,
                Create_CFG = 0x1
            };
            // Alignment: 4
            // Member count: 5
            pub const ParticleFloatBiasType_t = enum(u32) {
                PF_BIAS_TYPE_INVALID = 0xFFFFFFFF,
                PF_BIAS_TYPE_STANDARD = 0x0,
                PF_BIAS_TYPE_GAIN = 0x1,
                PF_BIAS_TYPE_EXPONENTIAL = 0x2,
                PF_BIAS_TYPE_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 6
            pub const SharedMovementGait_t = enum(u8) {
                eInvalid = 0xFF,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2,
                eVeryFast = 0x3,
                eCount = 0x4
            };
            // Alignment: 4
            // Member count: 3
            pub const OrientationWarpRootMotionSource_t = enum(u32) {
                eAnimationOrProcedural = 0x0,
                eAnimationOnly = 0x1,
                eProceduralOnly = 0x2
            };
            // Alignment: 4
            // Member count: 6
            pub const PulseVariableKeysSource_t = enum(u32) {
                PRIVATE = 0x0,
                CPP = 0x1,
                VMAP = 0x2,
                VMDL = 0x3,
                XML = 0x4,
                COUNT = 0x5
            };
            // Alignment: 4
            // Member count: 3
            pub const IKTargetCoordinateSystem = enum(u32) {
                IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
                IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
                IKTARGETCOORDINATESYSTEM_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 31
            pub const ParticleFloatType_t = enum(u32) {
                PF_TYPE_INVALID = 0xFFFFFFFF,
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
            };
            // Alignment: 1
            // Member count: 4
            pub const CNmFloatAngleMathNode__Operation_t = enum(u8) {
                ClampTo180 = 0x0,
                ClampTo360 = 0x1,
                FlipHemisphere = 0x2,
                FlipHemisphereNegate = 0x3
            };
            // Alignment: 4
            // Member count: 3
            pub const VPhysXAggregateData_t__VPhysXFlagEnum_t = enum(u32) {
                FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
                FLAG_LEVEL_COLLISION = 0x10,
                FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20
            };
            // Alignment: 1
            // Member count: 5
            pub const CNmRootMotionOverrideNode__OverrideFlags_t = enum(u8) {
                AllowMoveX = 0x0,
                AllowMoveY = 0x1,
                AllowMoveZ = 0x2,
                AllowFacingPitch = 0x3,
                ListenForEvents = 0x4
            };
            // Alignment: 1
            // Member count: 23
            pub const NmEasingOperation_t = enum(u8) {
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
            };
            // Alignment: 4
            // Member count: 5
            pub const EIKEndEffectorRotationFixUpMode = enum(u32) {
                None = 0x0,
                MatchTargetOrientation = 0x1,
                LookAtTargetForward = 0x2,
                MaintainParentOrientation = 0x3,
                Count = 0x4
            };
            // Alignment: 4
            // Member count: 2
            pub const MatterialAttributeTagType_t = enum(u32) {
                MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
                MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const PFNoiseTurbulence_t = enum(u32) {
                PF_NOISE_TURB_NONE = 0x0,
                PF_NOISE_TURB_HIGHLIGHT = 0x1,
                PF_NOISE_TURB_FEEDBACK = 0x2,
                PF_NOISE_TURB_LOOPY = 0x3,
                PF_NOISE_TURB_CONTRAST = 0x4,
                PF_NOISE_TURB_ALTERNATE = 0x5
            };
            // Alignment: 1
            // Member count: 4
            pub const NmTargetWarpAlgorithm_t = enum(u8) {
                Lerp = 0x0,
                Hermite = 0x1,
                HermiteFeaturePreserving = 0x2,
                Bezier = 0x3
            };
            // Alignment: 1
            // Member count: 4
            pub const NmTransitionRuleCondition_t = enum(u8) {
                AnyAllowed = 0x0,
                FullyAllowed = 0x1,
                ConditionallyAllowed = 0x2,
                Blocked = 0x3
            };
            // Alignment: 1
            // Member count: 7
            pub const ModelMeshBufferUsage_t = enum(u8) {
                MESH_BUFFER_USAGE_NONE = 0x0,
                MESH_BUFFER_USAGE_VB = 0x1,
                MESH_BUFFER_USAGE_IB = 0x2,
                MESH_BUFFER_USAGE_ADJACENCY = 0x4,
                MESH_BUFFER_USAGE_MESHLET_TRIS = 0x8,
                MESH_BUFFER_USAGE_RT_PROXY = 0x10,
                MESH_BUFFER_USAGE_VERTEX_ALBEDO = 0x20
            };
            // Alignment: 4
            // Member count: 2
            pub const TargetWarpTimingMethod = enum(u32) {
                ReachDestinationOnRootMotionEnd = 0x0,
                ReachDestinationOnWarpTagEnd = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const ScriptedMoveTo_t = enum(u32) {
                eWait = 0x0,
                eMoveWithGait = 0x3,
                eTeleport = 0x4,
                eWaitFacing = 0x5,
                eObsoleteBackCompat1 = 0x1,
                eObsoleteBackCompat2 = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const EDemoBoneSelectionMode = enum(u32) {
                CaptureAllBones = 0x0,
                CaptureSelectedBones = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const EPulseGraphExecutionHistoryFlag = enum(u32) {
                NO_FLAGS = 0x0,
                CURSOR_ADD_TAG = 0x1,
                CURSOR_REMOVE_TAG = 0x2,
                CURSOR_RETIRED = 0x4,
                REQUIREMENT_PASS = 0x8,
                REQUIREMENT_FAIL = 0x10
            };
            // Alignment: 4
            // Member count: 2
            pub const StepPhase = enum(u32) {
                StepPhase_OnGround = 0x0,
                StepPhase_InAir = 0x1
            };
            // Alignment: 4
            // Member count: 26
            pub const FlexOpCode_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 2
            pub const NmCachedValueMode_t = enum(u32) {
                OnEntry = 0x0,
                OnExit = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const AnimNodeNetworkMode = enum(u32) {
                ServerAuthoritative = 0x0,
                ClientSimulate = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const VPhysXBodyPart_t__VPhysXFlagEnum_t = enum(u32) {
                FLAG_STATIC = 0x1,
                FLAG_KINEMATIC = 0x2,
                FLAG_JOINT = 0x4,
                FLAG_MASS = 0x8,
                FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
                FLAG_DISABLE_CCD = 0x20
            };
            // Alignment: 1
            // Member count: 9
            pub const AnimParamType_t = enum(u8) {
                ANIMPARAM_UNKNOWN = 0x0,
                ANIMPARAM_BOOL = 0x1,
                ANIMPARAM_ENUM = 0x2,
                ANIMPARAM_INT = 0x3,
                ANIMPARAM_FLOAT = 0x4,
                ANIMPARAM_VECTOR = 0x5,
                ANIMPARAM_QUATERNION = 0x6,
                ANIMPARAM_GLOBALSYMBOL = 0x7,
                ANIMPARAM_COUNT = 0x8
            };
            // Alignment: 1
            // Member count: 9
            pub const NmEasingFunction_t = enum(u8) {
                Linear = 0x0,
                Quad = 0x1,
                Cubic = 0x2,
                Quart = 0x3,
                Quint = 0x4,
                Sine = 0x5,
                Expo = 0x6,
                Circ = 0x7,
                Back = 0x8
            };
            // Alignment: 4
            // Member count: 5
            pub const ParticleModelType_t = enum(u32) {
                PM_TYPE_INVALID = 0x0,
                PM_TYPE_NAMED_VALUE_MODEL = 0x1,
                PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
                PM_TYPE_CONTROL_POINT = 0x3,
                PM_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 3
            pub const IKTargetSource = enum(u32) {
                IKTARGETSOURCE_Bone = 0x0,
                IKTARGETSOURCE_AnimgraphParameter = 0x1,
                IKTARGETSOURCE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 15
            pub const PermModelInfo_t__FlagEnum = enum(u32) {
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
            };
            // Alignment: 1
            // Member count: 12
            pub const CNmFloatMathNode__Operator_t = enum(u8) {
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
            };
            // Alignment: 1
            // Member count: 2
            pub const CNmSyncEventIndexConditionNode__TriggerMode_t = enum(u8) {
                ExactlyAtEventIndex = 0x0,
                GreaterThanEqualToEventIndex = 0x1
            };
            // Alignment: 4
            // Member count: 5
            pub const ParticleFloatRoundType_t = enum(u32) {
                PF_ROUND_TYPE_INVALID = 0xFFFFFFFF,
                PF_ROUND_TYPE_NEAREST = 0x0,
                PF_ROUND_TYPE_FLOOR = 0x1,
                PF_ROUND_TYPE_CEIL = 0x2,
                PF_ROUND_TYPE_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 4
            pub const PFNoiseType_t = enum(u32) {
                PF_NOISE_TYPE_PERLIN = 0x0,
                PF_NOISE_TYPE_SIMPLEX = 0x1,
                PF_NOISE_TYPE_WORLEY = 0x2,
                PF_NOISE_TYPE_CURL = 0x3
            };
            // Alignment: 4
            // Member count: 3
            pub const AnimParamNetworkSetting = enum(u32) {
                Auto = 0x0,
                AlwaysNetwork = 0x1,
                NeverNetwork = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const MorphFlexControllerRemapType_t = enum(u32) {
                MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
                MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
                MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
                MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3
            };
            // Alignment: 4
            // Member count: 8
            pub const MeshDrawPrimitiveFlags_t = enum(u32) {
                MESH_DRAW_FLAGS_NONE = 0x0,
                MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
                MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
                MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
                MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
                MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
                MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
                MESH_DRAW_FLAGS_DRAW_LAST = 0x80
            };
            // Alignment: 4
            // Member count: 2
            pub const TargetWarpAngleMode_t = enum(u32) {
                eFacingHeading = 0x0,
                eMoveHeading = 0x1
            };
            // Alignment: 1
            // Member count: 2
            pub const NmIKBlendMode_t = enum(u8) {
                Effector = 0x0,
                Pose = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const ModelBoneFlexComponent_t = enum(u32) {
                MODEL_BONE_FLEX_INVALID = 0xFFFFFFFF,
                MODEL_BONE_FLEX_TX = 0x0,
                MODEL_BONE_FLEX_TY = 0x1,
                MODEL_BONE_FLEX_TZ = 0x2
            };
            // Alignment: 1
            // Member count: 2
            pub const CNmStateNode__TimedEvent_t__Comparison_t = enum(u8) {
                LessThanEqual = 0x0,
                GreaterThanEqual = 0x1
            };
            // Alignment: 1
            // Member count: 3
            pub const PoseType_t = enum(u8) {
                POSETYPE_STATIC = 0x0,
                POSETYPE_DYNAMIC = 0x1,
                POSETYPE_INVALID = 0xFF
            };
            // Alignment: 1
            // Member count: 2
            pub const CNmRootMotionData__SamplingMode_t = enum(u8) {
                Delta = 0x0,
                WorldSpace = 0x1
            };
            // Alignment: 1
            // Member count: 9
            pub const NmEventConditionRules_t = enum(u8) {
                LimitSearchToSourceState = 0x0,
                IgnoreInactiveEvents = 0x1,
                PreferHighestWeight = 0x2,
                PreferHighestProgress = 0x3,
                OperatorOr = 0x4,
                OperatorAnd = 0x5,
                SearchOnlyGraphEvents = 0x6,
                SearchOnlyAnimEvents = 0x7,
                SearchBothGraphAndAnimEvents = 0x8
            };
            // Alignment: 4
            // Member count: 37
            pub const AnimValueSource = enum(u32) {
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
            };
            // Alignment: 1
            // Member count: 4
            pub const CNmTimeConditionNode__Operator_t = enum(u8) {
                LessThan = 0x0,
                LessThanEqual = 0x1,
                GreaterThan = 0x2,
                GreaterThanEqual = 0x3
            };
            // Alignment: 4
            // Member count: 3
            pub const LinearRootMotionBlendMode_t = enum(u32) {
                LERP = 0x0,
                NLERP = 0x1,
                SLERP = 0x2
            };
            // Alignment: 4
            // Member count: 1
            pub const RagdollPoseControl = enum(u32) {
                Absolute = 0x0
            };
            // Alignment: 4
            // Member count: 6
            pub const IKSolverType = enum(u32) {
                IKSOLVER_Perlin = 0x0,
                IKSOLVER_TwoBone = 0x1,
                IKSOLVER_Fabrik = 0x2,
                IKSOLVER_DogLeg3Bone = 0x3,
                IKSOLVER_CCD = 0x4,
                IKSOLVER_COUNT = 0x5
            };
            // Alignment: 4
            // Member count: 2
            pub const TargetWarpCorrectionMethod = enum(u32) {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const TargetSelectorAngleMode_t = enum(u32) {
                eFacingHeading = 0x0,
                eMoveHeading = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const Blend2DMode = enum(u32) {
                Blend2DMode_General = 0x0,
                Blend2DMode_Directional = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseCursorExecResult_t = enum(u32) {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2,
                OngoingNotify = 0x3
            };
            // Alignment: 1
            // Member count: 3
            pub const HandshakeTagState_t = enum(u8) {
                eInactive = 0x0,
                eActive = 0x1,
                eMomentarilyInactive = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const ChoiceChangeMethod = enum(u32) {
                OnReset = 0x0,
                OnCycleEnd = 0x1,
                OnResetOrCycleEnd = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const ChoiceBlendMethod = enum(u32) {
                SingleBlendTime = 0x0,
                PerChoiceBlendTimes = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const VPhysXConstraintParams_t__EnumFlags0_t = enum(u32) {
                FLAG0_SHIFT_INTERPENETRATE = 0x0,
                FLAG0_SHIFT_CONSTRAIN = 0x1,
                FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
                FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3
            };
            // Alignment: 4
            // Member count: 9
            pub const ParticleFloatMapType_t = enum(u32) {
                PF_MAP_TYPE_INVALID = 0xFFFFFFFF,
                PF_MAP_TYPE_DIRECT = 0x0,
                PF_MAP_TYPE_MULT = 0x1,
                PF_MAP_TYPE_REMAP = 0x2,
                PF_MAP_TYPE_REMAP_BIASED = 0x3,
                PF_MAP_TYPE_CURVE = 0x4,
                PF_MAP_TYPE_NOTCHED = 0x5,
                PF_MAP_TYPE_ROUND = 0x6,
                PF_MAP_TYPE_COUNT = 0x7
            };
            // Alignment: 4
            // Member count: 5
            pub const AnimParamVectorType_t = enum(u32) {
                ANIMPARAM_VECTOR_TYPE_NONE = 0x0,
                ANIMPARAM_VECTOR_TYPE_POSITION_WS = 0x1,
                ANIMPARAM_VECTOR_TYPE_POSITION_LS = 0x2,
                ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 0x3,
                ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 0x4
            };
            // Alignment: 1
            // Member count: 3
            pub const CNmCurrentSyncEventNode__InfoType_t = enum(u8) {
                IndexAndPercentage = 0x0,
                IndexOnly = 0x1,
                PercentageOnly = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const BlendKeyType = enum(u32) {
                BlendKey_UserValue = 0x0,
                BlendKey_Velocity = 0x1,
                BlendKey_Distance = 0x2,
                BlendKey_RemainingDistance = 0x3
            };
            // Alignment: 4
            // Member count: 5
            pub const StateActionBehavior = enum(u32) {
                STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
                STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
                STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
                STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
                STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 0x4
            };
            // Alignment: 1
            // Member count: 4
            pub const NmRootMotionBlendMode_t = enum(u8) {
                Blend = 0x0,
                Additive = 0x1,
                IgnoreSource = 0x2,
                IgnoreTarget = 0x3
            };
            // Alignment: 1
            // Member count: 7
            pub const NmFootPhaseCondition_t = enum(u8) {
                LeftFootDown = 0x0,
                LeftFootPassing = 0x1,
                LeftPhase = 0x4,
                RightFootDown = 0x2,
                RightFootPassing = 0x3,
                RightPhase = 0x5,
                None = 0x6
            };
            // Alignment: 4
            // Member count: 22
            pub const ModelSkeletonData_t__BoneFlags_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 4
            pub const MorphBundleType_t = enum(u32) {
                MORPH_BUNDLE_TYPE_NONE = 0x0,
                MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
                MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
                MORPH_BUNDLE_TYPE_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 2
            pub const CNmIDComparisonNode__Comparison_t = enum(u8) {
                Matches = 0x0,
                DoesntMatch = 0x1
            };
            // Alignment: 1
            // Member count: 3
            pub const NmPoseBlendMode_t = enum(u8) {
                Overlay = 0x0,
                Additive = 0x1,
                ModelSpace = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleFloatInputMode_t = enum(u32) {
                PF_INPUT_MODE_INVALID = 0xFFFFFFFF,
                PF_INPUT_MODE_CLAMPED = 0x0,
                PF_INPUT_MODE_LOOPED = 0x1,
                PF_INPUT_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 5
            pub const ResetCycleOption = enum(u32) {
                Beginning = 0x0,
                SameCycleAsSource = 0x1,
                InverseSourceCycle = 0x2,
                FixedValue = 0x3,
                SameTimeAsSource = 0x4
            };
            // Alignment: 1
            // Member count: 6
            pub const CNmVectorInfoNode__Info_t = enum(u8) {
                X = 0x0,
                Y = 0x1,
                Z = 0x2,
                Length = 0x3,
                AngleHorizontal = 0x4,
                AngleVertical = 0x5
            };
            // Alignment: 4
            // Member count: 4
            pub const IKChannelMode = enum(u32) {
                TwoBone = 0x0,
                TwoBone_Translate = 0x1,
                OneBone = 0x2,
                OneBone_Translate = 0x3
            };
            // Alignment: 1
            // Member count: 9
            pub const NmGraphValueType_t = enum(u8) {
                Unknown = 0x0,
                Bool = 0x1,
                ID = 0x2,
                Float = 0x3,
                Vector = 0x4,
                Target = 0x5,
                BoneMask = 0x6,
                Pose = 0x7,
                Special = 0x8
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleFloatRandomMode_t = enum(u32) {
                PF_RANDOM_MODE_INVALID = 0xFFFFFFFF,
                PF_RANDOM_MODE_CONSTANT = 0x0,
                PF_RANDOM_MODE_VARYING = 0x1,
                PF_RANDOM_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 33
            pub const PulseValueType_t = enum(u32) {
                PVAL_VOID = 0xFFFFFFFF,
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
            };
            // Alignment: 4
            // Member count: 4
            pub const PFNoiseModifier_t = enum(u32) {
                PF_NOISE_MODIFIER_NONE = 0x0,
                PF_NOISE_MODIFIER_LINES = 0x1,
                PF_NOISE_MODIFIER_CLUMPS = 0x2,
                PF_NOISE_MODIFIER_RINGS = 0x3
            };
            // Alignment: 4
            // Member count: 20
            pub const ParticleVecType_t = enum(u32) {
                PVEC_TYPE_INVALID = 0xFFFFFFFF,
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
            };
            // Alignment: 1
            // Member count: 5
            pub const NmFootPhase_t = enum(u8) {
                LeftFootDown = 0x0,
                RightFootPassing = 0x1,
                RightFootDown = 0x2,
                LeftFootPassing = 0x3,
                None = 0x4
            };
            // Alignment: 4
            // Member count: 8
            pub const CNmTargetInfoNode__Info_t = enum(u32) {
                AngleHorizontal = 0x0,
                AngleVertical = 0x1,
                Distance = 0x2,
                DistanceHorizontalOnly = 0x3,
                DistanceVerticalOnly = 0x4,
                DeltaOrientationX = 0x5,
                DeltaOrientationY = 0x6,
                DeltaOrientationZ = 0x7
            };
            // Alignment: 4
            // Member count: 3
            pub const FootstepLandedFootSoundType_t = enum(u32) {
                FOOTSOUND_Left = 0x0,
                FOOTSOUND_Right = 0x1,
                FOOTSOUND_UseOverrideSound = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const FootLockSubVisualization = enum(u32) {
                FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
                FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1
            };
            // Alignment: 4
            // Member count: 5
            pub const CNmSoundEvent__Position_t = enum(u32) {
                None = 0x0,
                World = 0x1,
                EntityPos = 0x2,
                EntityEyePos = 0x3,
                EntityAttachment = 0x4
            };
            // Alignment: 1
            // Member count: 4
            pub const FootstepJumpPhase_t = enum(u8) {
                Unknown = 0x0,
                NotJumping = 0x1,
                Jumping = 0x2,
                Landing = 0x4
            };
            // Alignment: 4
            // Member count: 2
            pub const NmFrameSnapEventMode_t = enum(u32) {
                Floor = 0x0,
                Round = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const FootPinningTimingSource = enum(u32) {
                FootMotion = 0x0,
                Tag = 0x1,
                Parameter = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const DampingSpeedFunction = enum(u32) {
                NoDamping = 0x0,
                Constant = 0x1,
                Spring = 0x2,
                AsymmetricSpring = 0x3
            };
            // Alignment: 4
            // Member count: 6
            pub const PulseApiFeature_t = enum(u32) {
                AF_NONE = 0x0,
                AF_ENTITIES = 0x1,
                AF_PANORAMA = 0x2,
                AF_PARTICLES = 0x8,
                AF_FAKE_ENTITIES = 0x10,
                AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20
            };
            // Alignment: 4
            // Member count: 6
            pub const AnimationProcessingType_t = enum(u32) {
                ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
                ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
                ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
                ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
                ANIMATION_PROCESSING_MAX = 0x5
            };
            // Alignment: 4
            // Member count: 3
            pub const JiggleBoneSimSpace = enum(u32) {
                SimSpace_Local = 0x0,
                SimSpace_Model = 0x1,
                SimSpace_World = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const StanceOverrideMode = enum(u32) {
                Sequence = 0x0,
                Node = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const IkEndEffectorType = enum(u32) {
                IkEndEffector_Attachment = 0x0,
                IkEndEffector_Bone = 0x1
            };
            // Alignment: 2
            // Member count: 3
            pub const AnimScriptType = enum(u16) {
                ANIMSCRIPT_TYPE_INVALID = 0xFFFF,
                ANIMSCRIPT_FUSE_GENERAL = 0x0,
                ANIMSCRIPT_FUSE_STATEMACHINE = 0x1
            };
            // Alignment: 1
            // Member count: 3
            pub const CNmTimeConditionNode__ComparisonType_t = enum(u8) {
                PercentageThroughState = 0x0,
                PercentageThroughSyncEvent = 0x1,
                ElapsedTime = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const SeqPoseSetting_t = enum(u32) {
                SEQ_POSE_SETTING_CONSTANT = 0x0,
                SEQ_POSE_SETTING_ROTATION = 0x1,
                SEQ_POSE_SETTING_POSITION = 0x2,
                SEQ_POSE_SETTING_VELOCITY = 0x3
            };
            // Alignment: 4
            // Member count: 13
            pub const AnimParamButton_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 3
            pub const SelectorTagBehavior_t = enum(u32) {
                SelectorTagBehavior_OnWhileCurrent = 0x0,
                SelectorTagBehavior_OffWhenFinished = 0x1,
                SelectorTagBehavior_OffBeforeFinished = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const HandshakeTagType_t = enum(u32) {
                eInvalid = 0xFFFFFFFF,
                eTask = 0x0,
                eMovement = 0x1,
                eCount = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const OrientationWarpTargetOffsetMode_t = enum(u32) {
                eLiteralValue = 0x0,
                eParameter = 0x1,
                eAnimationMovementHeading = 0x2,
                eAnimationMovementHeadingAtEnd = 0x3
            };
            // Alignment: 4
            // Member count: 3
            pub const OrientationWarpMode_t = enum(u32) {
                eInvalid = 0x0,
                eAngle = 0x1,
                eWorldPosition = 0x2
            };
            // Alignment: 2
            // Member count: 125
            pub const PulseInstructionCode_t = enum(u16) {
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
            };
            // Alignment: 4
            // Member count: 5
            pub const ParticleTransformType_t = enum(u32) {
                PT_TYPE_INVALID = 0x0,
                PT_TYPE_NAMED_VALUE = 0x1,
                PT_TYPE_CONTROL_POINT = 0x2,
                PT_TYPE_CONTROL_POINT_RANGE = 0x3,
                PT_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 18
            pub const ParticleAttachment_t = enum(u32) {
                PATTACH_INVALID = 0xFFFFFFFF,
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
            };
            // Alignment: 4
            // Member count: 3
            pub const FieldNetworkOption = enum(u32) {
                Auto = 0x0,
                ForceEnable = 0x1,
                ForceDisable = 0x2
            };
            // Alignment: 1
            // Member count: 6
            pub const NmGraphEventTypeCondition_t = enum(u8) {
                Entry = 0x0,
                FullyInState = 0x1,
                Exit = 0x2,
                Timed = 0x3,
                Generic = 0x4,
                Any = 0x5
            };
            // Alignment: 1
            // Member count: 10
            pub const CNmTransitionNode__TransitionOptions_t = enum(u8) {
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
            };
            // Alignment: 1
            // Member count: 5
            pub const CNmFloatComparisonNode__Comparison_t = enum(u8) {
                GreaterThanEqual = 0x0,
                LessThanEqual = 0x1,
                NearEqual = 0x2,
                GreaterThan = 0x3,
                LessThan = 0x4
            };
            // Alignment: 4
            // Member count: 3
            pub const VPhysXJoint_t__Flags_t = enum(u32) {
                JOINT_FLAGS_NONE = 0x0,
                JOINT_FLAGS_BODY1_FIXED = 0x1,
                JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const ScriptedHeldWeaponBehavior_t = enum(u32) {
                eInvalid = 0xFFFFFFFF,
                eHolster = 0x0,
                eDeploy = 0x1,
                eDrop = 0x2
            };
            // Alignment: 1
            // Member count: 3
            pub const VelocityMetricMode = enum(u8) {
                DirectionOnly = 0x0,
                MagnitudeOnly = 0x1,
                DirectionAndMagnitude = 0x2
            };
            // Alignment: 1
            // Member count: 5
            pub const FacingMode = enum(u8) {
                FacingMode_Invalid = 0x0,
                FacingMode_Manual = 0x1,
                FacingMode_Path = 0x2,
                FacingMode_LookTarget = 0x3,
                FacingMode_ManualPosition = 0x4
            };
            // Alignment: 1
            // Member count: 3
            pub const VertexAlbedoFormat_t = enum(u8) {
                VERTEX_ALBEDO_NONE = 0x0,
                VERTEX_ALBEDO_8888 = 0x1,
                VERTEX_ALBEDO_565 = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const AimMatrixBlendMode = enum(u32) {
                AimMatrixBlendMode_None = 0x0,
                AimMatrixBlendMode_Additive = 0x1,
                AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
                AimMatrixBlendMode_BoneMask = 0x3
            };
            // Alignment: 4
            // Member count: 7
            pub const AnimationSnapshotType_t = enum(u32) {
                ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
                ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
                ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
                ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
                ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
                ANIMATION_SNAPSHOT_MAX = 0x6
            };
            // Alignment: 1
            // Member count: 5
            pub const NmTargetWarpRule_t = enum(u8) {
                WarpXY = 0x0,
                WarpZ = 0x1,
                WarpXYZ = 0x2,
                RotationOnly = 0x3,
                FixedSection = 0x4
            };
            // Alignment: 4
            // Member count: 8
            pub const FootFallTagFoot_t = enum(u32) {
                FOOT1 = 0x0,
                FOOT2 = 0x1,
                FOOT3 = 0x2,
                FOOT4 = 0x3,
                FOOT5 = 0x4,
                FOOT6 = 0x5,
                FOOT7 = 0x6,
                FOOT8 = 0x7
            };
            // Alignment: 4
            // Member count: 4
            pub const ChoiceMethod = enum(u32) {
                WeightedRandom = 0x0,
                WeightedRandomNoRepeat = 0x1,
                Iterate = 0x2,
                IterateRandom = 0x3
            };
            // Alignment: 4
            // Member count: 14
            pub const AnimVectorSource = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 4
            pub const IkTargetType = enum(u32) {
                IkTarget_Attachment = 0x0,
                IkTarget_Bone = 0x1,
                IkTarget_Parameter_ModelSpace = 0x2,
                IkTarget_Parameter_WorldSpace = 0x3
            };
            // Alignment: 1
            // Member count: 3
            pub const RenderMeshSlotType_t = enum(u8) {
                RENDERMESH_SLOT_INVALID = 0xFF,
                RENDERMESH_SLOT_PER_VERTEX = 0x0,
                RENDERMESH_SLOT_PER_INSTANCE = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const BoneMaskBlendSpace = enum(u32) {
                BlendSpace_Parent = 0x0,
                BlendSpace_Model = 0x1,
                BlendSpace_Model_RotationOnly = 0x2,
                BlendSpace_Model_TranslationOnly = 0x3
            };
            // Alignment: 4
            // Member count: 8
            pub const MovementCapability_t = enum(u32) {
                eStrafe = 0x0,
                eIdleTurn = 0x1,
                eStart = 0x2,
                eStop = 0x3,
                eInstantStop = 0x4,
                eShuffle = 0x5,
                ePlantedTurn = 0x6,
                eCount = 0x7
            };
            // Alignment: 4
            // Member count: 5
            pub const ModelConfigAttachmentType_t = enum(u32) {
                MODEL_CONFIG_ATTACHMENT_INVALID = 0xFFFFFFFF,
                MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
                MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
                MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
                MODEL_CONFIG_ATTACHMENT_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const BinaryNodeChildOption = enum(u32) {
                Child1 = 0x0,
                Child2 = 0x1
            };
            // Alignment: 4
            // Member count: 5
            pub const NPCPhysicsHullType_t = enum(u32) {
                eInvalid = 0x0,
                eGroundCapsule = 0x1,
                eCenteredCapsule = 0x2,
                eGenericCapsule = 0x3,
                eGroundBox = 0x4
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseDomainValueType_t = enum(u32) {
                INVALID = 0xFFFFFFFF,
                ENTITY_NAME = 0x0,
                PANEL_ID = 0x1,
                COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const JumpCorrectionMethod = enum(u32) {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const MoodType_t = enum(u32) {
                eMoodType_Head = 0x0,
                eMoodType_Body = 0x1
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_WaitForCursorsWithTag = struct {
                pub const m_bTagSelfWhenComplete: usize = 0x98; // bool
                pub const m_nDesiredKillPriority: usize = 0x9C; // PulseCursorCancelPriority_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Base = struct {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            };
            // Parent: None
            // Field count: 0
            pub const CPulse_ResumePoint = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_PickBestOutflowSelector = struct {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            };
            // Parent: None
            // Field count: 0
            pub const CParticleBindingRealPulse = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            pub const CPulseCell_WaitForObservable = struct {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 4
            pub const CPulse_OutflowConnection = struct {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseGraphDef = struct {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_FireCursors = struct {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Timeline__TimelineEvent_t = struct {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_IntervalTimer__CursorState_t = struct {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseRequirement = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            pub const CPulseCell_BaseState = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const OutflowWithRequirements_t = struct {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_IsRequirementValid = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Value_Gradient = struct {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseCursorFuncs = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = struct {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 0
            pub const CBasePulseGraphInstance = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_GraphHook = struct {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Resume = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_BaseEntrypoint = struct {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_WaitForCursorsWithTagBase = struct {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_InvokeBinding = struct {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_IntervalTimer = struct {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseTestScriptLib = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseLerp = struct {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Value_Curve = struct {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_EventHandler = struct {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseFlow = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = struct {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseLerp__CursorState_t = struct {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_WaitForCursorsWithTagBase__CursorState_t = struct {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseArraylib = struct {
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Continue = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Timeline = struct {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_EntOutputHandler = struct {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = struct {
                pub const m_nNextIndex: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            pub const CParticleCollectionBindingInstance = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_LimitCount__InstanceState_t = struct {
                pub const m_nCurrentCount: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_DebugLog = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseYieldingInflow = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseNodeDynamicOutflows_t = struct {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_IsRequirementValid__Criteria_t = struct {
                pub const m_bIsValid: usize = 0x0; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_ObservableVariableListener = struct {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleOrdered = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseSelectorOutflowList_t = struct {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_Inflow_Wait = struct {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleShuffled = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_Method = struct {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseValue = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_BooleanSwitchState = struct {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_SubGraph: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_Yield = struct {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseMathlib = struct {
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_Unknown = struct {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleRandom = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_PublicOutput = struct {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_BlackboardReference = struct {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_Value_RandomInt = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_CallInfo = struct {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_InlineNodeSkipSelector = struct {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CPulseCell_LimitCount = struct {
                pub const m_nLimitCount: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_CallExternalMethod = struct {
                pub const m_MethodName: usize = 0x48; // PulseSymbol_t
                pub const m_GameBlackboard: usize = 0x58; // PulseSymbol_t
                pub const m_ExpectedArgs: usize = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x78; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x80; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseObservableBoolExpression_t = struct {
                pub const m_EvaluateConnection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DependentObservableVars: usize = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                pub const m_DependentObservableBlackboardReferences: usize = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_LimitCount__Criteria_t = struct {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_CursorQueue = struct {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_Value_RandomFloat = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CPulseExecCursor = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimFrameBlockAnim = struct {
                pub const m_nStartFrame: usize = 0x0; // int32
                pub const m_nEndFrame: usize = 0x4; // int32
                pub const m_segmentIndexArray: usize = 0x8; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CZeroPoseUpdateNode = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSlowDownOnSlopesUpdateNode = struct {
                pub const m_flSlowDownStrength: usize = 0x70; // float32
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const COrientationWarpUpdateNode = struct {
                pub const m_eMode: usize = 0x74; // OrientationWarpMode_t
                pub const m_hTargetParam: usize = 0x78; // CAnimParamHandle
                pub const m_hTargetPositionParam: usize = 0x7A; // CAnimParamHandle
                pub const m_hFallbackTargetPositionParam: usize = 0x7C; // CAnimParamHandle
                pub const m_eTargetOffsetMode: usize = 0x80; // OrientationWarpTargetOffsetMode_t
                pub const m_flTargetOffset: usize = 0x84; // float32
                pub const m_hTargetOffsetParam: usize = 0x88; // CAnimParamHandle
                pub const m_damping: usize = 0x90; // CAnimInputDamping
                pub const m_eRootMotionSource: usize = 0xA8; // OrientationWarpRootMotionSource_t
                pub const m_flMaxRootMotionScale: usize = 0xAC; // float32
                pub const m_bEnablePreferredRotationDirection: usize = 0xB0; // bool
                pub const m_ePreferredRotationDirection: usize = 0xB4; // AnimValueSource
                pub const m_flPreferredRotationThreshold: usize = 0xB8; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimParameterBase = struct {
                pub const m_name: usize = 0x18; // CGlobalSymbol
                pub const m_sComment: usize = 0x20; // CUtlString
                pub const m_group: usize = 0x28; // CUtlString
                pub const m_id: usize = 0x30; // AnimParamID
                pub const m_componentName: usize = 0x48; // CUtlString
                pub const m_bNetworkingRequested: usize = 0x68; // bool
                pub const m_bIsReferenced: usize = 0x69; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CSequenceFinishedAnimTag = struct {
                pub const m_sequenceName: usize = 0x58; // CUtlString
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSceneObjectData = struct {
                pub const m_vMinBounds: usize = 0x0; // Vector
                pub const m_vMaxBounds: usize = 0xC; // Vector
                pub const m_drawCalls: usize = 0x18; // CUtlLeanVector<CMaterialDrawDescriptor>
                pub const m_drawBounds: usize = 0x28; // CUtlLeanVector<AABB_t>
                pub const m_meshlets: usize = 0x38; // CUtlLeanVector<CMeshletDescriptor>
                pub const m_rtProxyDrawCalls: usize = 0x48; // CUtlLeanVector<CSceneObjectData::RTProxyDrawDescriptor_t>
                pub const m_vTintColor: usize = 0x58; // Vector4D
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootCycle = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            // MCustomFGDMetadata
            pub const CParticleModelInput = struct {
                pub const m_nType: usize = 0x10; // ParticleModelType_t
                pub const m_NamedValue: usize = 0x18; // CParticleNamedValueRef
                pub const m_nControlPoint: usize = 0x58; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CInputStreamUpdateNode = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CIntAnimParameter = struct {
                pub const m_defaultValue: usize = 0x80; // int32
                pub const m_minValue: usize = 0x84; // int32
                pub const m_maxValue: usize = 0x88; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmParameterizedBlendNode__CDefinition = struct {
                pub const m_sourceNodeIndices: usize = 0x10; // CUtlVectorFixedGrowable<int16,5>
                pub const m_nInputParameterValueNodeIdx: usize = 0x38; // int16
                pub const m_bAllowLooping: usize = 0x3A; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CNmScaleTask = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFrameSnapEvent = struct {
                pub const m_frameSnapMode: usize = 0x20; // NmFrameSnapEventMode_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimNodePath = struct {
                pub const m_path: usize = 0x0; // AnimNodeID[11]
                pub const m_nCount: usize = 0x2C; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimNodeOutputID = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSyncTrack = struct {
                pub const m_syncEvents: usize = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t,10>
                pub const m_nStartEventOffset: usize = 0xA8; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqBoneMaskList = struct {
                pub const m_sName: usize = 0x0; // CBufferString
                pub const m_nLocalBoneArray: usize = 0x10; // CUtlVector<int16>
                pub const m_flBoneWeightArray: usize = 0x28; // CUtlVector<float32>
                pub const m_flDefaultMorphCtrlWeight: usize = 0x40; // float32
                pub const m_morphCtrlWeightArray: usize = 0x48; // CUtlVector<std::pair<CBufferString,float32>>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimEncodedFrames = struct {
                pub const m_fileName: usize = 0x0; // CBufferString
                pub const m_nFrames: usize = 0x10; // int32
                pub const m_nFramesPerBlock: usize = 0x14; // int32
                pub const m_frameblockArray: usize = 0x18; // CUtlVector<CAnimFrameBlockAnim>
                pub const m_usageDifferences: usize = 0x30; // CAnimEncodeDifference
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SampleCode = struct {
                pub const m_subCode: usize = 0x0; // uint8[8]
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCachedPose = struct {
                pub const m_transforms: usize = 0x8; // CUtlVector<CTransform>
                pub const m_morphWeights: usize = 0x20; // CUtlVector<float32>
                pub const m_hSequence: usize = 0x38; // HSequence
                pub const m_flCycle: usize = 0x3C; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTransitionEventConditionNode__CDefinition = struct {
                pub const m_requireRuleID: usize = 0x10; // CGlobalSymbol
                pub const m_eventConditionRules: usize = 0x18; // CNmBitFlags
                pub const m_nSourceStateNodeIdx: usize = 0x1C; // int16
                pub const m_ruleCondition: usize = 0x1E; // NmTransitionRuleCondition_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CTaskStatusAnimTag = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionGraphConfig = struct {
                pub const m_paramValues: usize = 0x0; // float32[4]
                pub const m_flDuration: usize = 0x10; // float32
                pub const m_nMotionIndex: usize = 0x14; // MotionIndex
                pub const m_nSampleStart: usize = 0x18; // int32
                pub const m_nSampleCount: usize = 0x1C; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionSearchNode = struct {
                pub const m_children: usize = 0x0; // CUtlVector<CMotionSearchNode*>
                pub const m_quantizer: usize = 0x18; // CVectorQuantizer
                pub const m_sampleCodes: usize = 0x38; // CUtlVector<CUtlVector<SampleCode>>
                pub const m_sampleIndices: usize = 0x50; // CUtlVector<CUtlVector<int32>>
                pub const m_selectableSamples: usize = 0x68; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimActivity = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_nActivity: usize = 0x10; // int32
                pub const m_nFlags: usize = 0x14; // int32
                pub const m_nWeight: usize = 0x18; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimScriptManager = struct {
                pub const m_scriptInfo: usize = 0x10; // CUtlVector<ScriptInfo_t>
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimationDecodeDebugDumpElement_t = struct {
                pub const m_nEntityIndex: usize = 0x0; // int32
                pub const m_modelName: usize = 0x8; // CUtlString
                pub const m_poseParams: usize = 0x10; // CUtlVector<CUtlString>
                pub const m_decodeOps: usize = 0x28; // CUtlVector<CUtlString>
                pub const m_internalOps: usize = 0x40; // CUtlVector<CUtlString>
                pub const m_decodedAnims: usize = 0x58; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const MovementGaitId_t = struct {
                pub const m_sId: usize = 0x0; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeVarIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ConfigIndex = struct {
                pub const m_nGroup: usize = 0x0; // uint16
                pub const m_nConfig: usize = 0x2; // uint16
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXCollisionAttributes_t = struct {
                pub const m_nIncludeDetailLayerCount: usize = 0x0; // int32
                pub const m_CollisionGroup: usize = 0x4; // uint32
                pub const m_InteractAs: usize = 0x8; // CUtlVector<uint32>
                pub const m_InteractWith: usize = 0x20; // CUtlVector<uint32>
                pub const m_InteractExclude: usize = 0x38; // CUtlVector<uint32>
                pub const m_DetailLayers: usize = 0x50; // CUtlVector<uint32>
                pub const m_CollisionGroupString: usize = 0x68; // CUtlString
                pub const m_InteractAsStrings: usize = 0x70; // CUtlVector<CUtlString>
                pub const m_InteractWithStrings: usize = 0x88; // CUtlVector<CUtlString>
                pub const m_InteractExcludeStrings: usize = 0xA0; // CUtlVector<CUtlString>
                pub const m_DetailLayerStrings: usize = 0xB8; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSequenceUpdateNode = struct {
                pub const m_hSequence: usize = 0x78; // HSequence
                pub const m_duration: usize = 0x7C; // float32
                pub const m_paramSpans: usize = 0x80; // CParamSpanUpdater
                pub const m_tags: usize = 0x98; // CUtlVector<TagSpan_t>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmPassthroughNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmClipReferenceNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphDefinition__ExternalGraphSlot_t = struct {
                pub const m_nNodeIdx: usize = 0x0; // int16
                pub const m_slotID: usize = 0x8; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeEntrypointIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAimCameraUpdateNode = struct {
                pub const m_hParameterPosition: usize = 0x70; // CAnimParamHandle
                pub const m_hParameterOrientation: usize = 0x72; // CAnimParamHandle
                pub const m_hParameterPelvisOffset: usize = 0x74; // CAnimParamHandle
                pub const m_hParameterCameraOnly: usize = 0x76; // CAnimParamHandle
                pub const m_hParameterWeaponDepenetrationDistance: usize = 0x78; // CAnimParamHandle
                pub const m_hParameterWeaponDepenetrationDelta: usize = 0x7A; // CAnimParamHandle
                pub const m_hParameterCameraClearanceDistance: usize = 0x7C; // CAnimParamHandle
                pub const m_opFixedSettings: usize = 0x80; // AimCameraOpFixedSettings_t
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeDomainValueIndex_t = struct {
                pub const m_Value: usize = 0x0; // int16
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqSeqDescFlag = struct {
                pub const m_bLooping: usize = 0x0; // bool
                pub const m_bSnap: usize = 0x1; // bool
                pub const m_bAutoplay: usize = 0x2; // bool
                pub const m_bPost: usize = 0x3; // bool
                pub const m_bHidden: usize = 0x4; // bool
                pub const m_bMulti: usize = 0x5; // bool
                pub const m_bLegacyDelta: usize = 0x6; // bool
                pub const m_bLegacyWorldspace: usize = 0x7; // bool
                pub const m_bLegacyCyclepose: usize = 0x8; // bool
                pub const m_bLegacyRealtime: usize = 0x9; // bool
                pub const m_bModelDoc: usize = 0xA; // bool
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PermModelInfo_t = struct {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_vHullMin: usize = 0x4; // Vector
                pub const m_vHullMax: usize = 0x10; // Vector
                pub const m_vViewMin: usize = 0x1C; // Vector
                pub const m_vViewMax: usize = 0x28; // Vector
                pub const m_flMass: usize = 0x34; // float32
                pub const m_vEyePosition: usize = 0x38; // Vector
                pub const m_flMaxEyeDeflection: usize = 0x44; // float32
                pub const m_sSurfaceProperty: usize = 0x48; // CUtlString
                pub const m_keyValueText: usize = 0x50; // CUtlString
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const StanceInfo_t = struct {
                pub const m_vPosition: usize = 0x0; // Vector
                pub const m_flDirection: usize = 0xC; // float32
            };
            // Parent: None
            // Field count: 1
            pub const IKBoneNameAndIndex_t = struct {
                pub const m_Name: usize = 0x0; // CUtlString
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_Chunk = struct {
                pub const m_Instructions: usize = 0x0; // CUtlLeanVector<PGDInstruction_t>
                pub const m_Registers: usize = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                pub const m_InstructionDebugInfos: usize = 0x20; // CUtlLeanVector<CPulse_InstructionDebug>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStanceScaleUpdateNode = struct {
                pub const m_hParam: usize = 0x70; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeInvokeIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBoneMaskBlendNode__CDefinition = struct {
                pub const m_nSourceMaskNodeIdx: usize = 0x10; // int16
                pub const m_nTargetMaskNodeIdx: usize = 0x12; // int16
                pub const m_nBlendWeightValueNodeIdx: usize = 0x14; // int16
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDEventNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
                pub const m_defaultValue: usize = 0x18; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const HitReactFixedSettings_t = struct {
                pub const m_nWeightListIndex: usize = 0x0; // int32
                pub const m_nEffectedBoneCount: usize = 0x4; // int32
                pub const m_flMaxImpactForce: usize = 0x8; // float32
                pub const m_flMinImpactForce: usize = 0xC; // float32
                pub const m_flWhipImpactScale: usize = 0x10; // float32
                pub const m_flCounterRotationScale: usize = 0x14; // float32
                pub const m_flDistanceFadeScale: usize = 0x18; // float32
                pub const m_flPropagationScale: usize = 0x1C; // float32
                pub const m_flWhipDelay: usize = 0x20; // float32
                pub const m_flSpringStrength: usize = 0x24; // float32
                pub const m_flWhipSpringStrength: usize = 0x28; // float32
                pub const m_flMaxAngleRadians: usize = 0x2C; // float32
                pub const m_nHipBoneIndex: usize = 0x30; // int32
                pub const m_flHipBoneTranslationScale: usize = 0x34; // float32
                pub const m_flHipDipSpringStrength: usize = 0x38; // float32
                pub const m_flHipDipImpactScale: usize = 0x3C; // float32
                pub const m_flHipDipDelay: usize = 0x40; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CNmPoseNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimTagBase = struct {
                pub const m_name: usize = 0x18; // CGlobalSymbol
                pub const m_sComment: usize = 0x20; // CUtlString
                pub const m_group: usize = 0x28; // CGlobalSymbol
                pub const m_tagID: usize = 0x30; // AnimTagID
                pub const m_bIsReferenced: usize = 0x48; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CPerParticleVecInput = struct {
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionGraph = struct {
                pub const m_paramSpans: usize = 0x10; // CParamSpanUpdater
                pub const m_tags: usize = 0x28; // CUtlVector<TagSpan_t>
                pub const m_pRootNode: usize = 0x40; // CSmartPtr<CMotionNode>
                pub const m_nParameterCount: usize = 0x48; // int32
                pub const m_nConfigStartIndex: usize = 0x4C; // int32
                pub const m_nConfigCount: usize = 0x50; // int32
                pub const m_bLoop: usize = 0x54; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVectorInfoNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_desiredInfo: usize = 0x12; // CNmVectorInfoNode::Info_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimationSnapshot_t = struct {
                pub const m_nEntIndex: usize = 0x110; // int32
                pub const m_modelName: usize = 0x118; // CUtlString
            };
            // Parent: None
            // Field count: 0
            pub const CNmBlendTask = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CNmVectorValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqTransition = struct {
                pub const m_flFadeInTime: usize = 0x0; // float32
                pub const m_flFadeOutTime: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CNmPoseTask = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimGraphSettingsGroup = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVirtualParameterTargetNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimGraphDebugReplay = struct {
                pub const m_animGraphFileName: usize = 0x40; // CUtlString
                pub const m_frameList: usize = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
                pub const m_startIndex: usize = 0x60; // int32
                pub const m_writeIndex: usize = 0x64; // int32
                pub const m_frameCount: usize = 0x68; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CVectorAnimParameter = struct {
                pub const m_defaultValue: usize = 0x80; // Vector
                pub const m_bInterpolate: usize = 0x8C; // bool
                pub const m_vectorType: usize = 0x90; // AnimParamVectorType_t
            };
            // Parent: None
            // Field count: 0
            pub const CNmCachedPoseReadTask = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmStateMachineNode__StateDefinition_t = struct {
                pub const m_nStateNodeIdx: usize = 0x0; // int16
                pub const m_nEntryConditionNodeIdx: usize = 0x2; // int16
                pub const m_transitionDefinitions: usize = 0x8; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::TransitionDefinition_t,5>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStanceOverrideUpdateNode = struct {
                pub const m_footStanceInfo: usize = 0x70; // CUtlVector<StanceInfo_t>
                pub const m_pStanceSourceNode: usize = 0x88; // CAnimUpdateNodeRef
                pub const m_hParameter: usize = 0x98; // CAnimParamHandle
                pub const m_eMode: usize = 0x9C; // StanceOverrideMode
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphDefinition__ExternalPoseSlot_t = struct {
                pub const m_nNodeIdx: usize = 0x0; // int16
                pub const m_slotID: usize = 0x8; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PhysShapeMarkup_t = struct {
                pub const m_nBodyInAggregate: usize = 0x0; // int32
                pub const m_nShapeInBody: usize = 0x4; // int32
                pub const m_sHitGroup: usize = 0x8; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const LookAtBone_t = struct {
                pub const m_index: usize = 0x0; // int32
                pub const m_weight: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTransitionNode__CDefinition = struct {
                pub const m_nTargetStateNodeIdx: usize = 0x10; // int16
                pub const m_nDurationOverrideNodeIdx: usize = 0x12; // int16
                pub const m_timeOffsetOverrideNodeIdx: usize = 0x14; // int16
                pub const m_startBoneMaskNodeIdx: usize = 0x16; // int16
                pub const m_flDuration: usize = 0x18; // float32
                pub const m_boneMaskBlendInTimePercentage: usize = 0x1C; // NmPercent_t
                pub const m_flTimeOffset: usize = 0x20; // float32
                pub const m_transitionOptions: usize = 0x24; // CNmBitFlags
                pub const m_targetSyncIDNodeIdx: usize = 0x28; // int16
                pub const m_blendWeightEasing: usize = 0x2A; // NmEasingOperation_t
                pub const m_rootMotionBlend: usize = 0x2B; // NmRootMotionBlendMode_t
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeRegisterIndex_t = struct {
                pub const m_Value: usize = 0x0; // int16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatEaseNode__CDefinition = struct {
                pub const m_flEaseTime: usize = 0x10; // float32
                pub const m_flStartValue: usize = 0x14; // float32
                pub const m_nInputValueNodeIdx: usize = 0x18; // int16
                pub const m_easingOp: usize = 0x1A; // NmEasingOperation_t
                pub const m_bUseStartValue: usize = 0x1B; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimEncodeDifference = struct {
                pub const m_boneArray: usize = 0x0; // CUtlVector<CAnimBoneDifference>
                pub const m_morphArray: usize = 0x18; // CUtlVector<CAnimMorphDifference>
                pub const m_userArray: usize = 0x30; // CUtlVector<CAnimUserDifference>
                pub const m_bHasRotationBitArray: usize = 0x48; // CUtlVector<uint8>
                pub const m_bHasMovementBitArray: usize = 0x60; // CUtlVector<uint8>
                pub const m_bHasMorphBitArray: usize = 0x78; // CUtlVector<uint8>
                pub const m_bHasUserBitArray: usize = 0x90; // CUtlVector<uint8>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRootUpdateNode = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTargetOffsetNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_bIsBoneSpaceOffset: usize = 0x12; // bool
                pub const m_rotationOffset: usize = 0x20; // Quaternion
                pub const m_translationOffset: usize = 0x30; // Vector
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionGraphUpdateNode = struct {
                pub const m_pMotionGraph: usize = 0x58; // CSmartPtr<CMotionGraph>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatAngleMathNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_operation: usize = 0x12; // CNmFloatAngleMathNode::Operation_t
            };
            // Parent: None
            // Field count: 1
            pub const PulseCursorID_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimParamHandle = struct {
                pub const m_type: usize = 0x0; // AnimParamType_t
                pub const m_index: usize = 0x1; // uint8
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const WeightList = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_weights: usize = 0x8; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const MotionIndex = struct {
                pub const m_nGroup: usize = 0x0; // uint16
                pub const m_nMotion: usize = 0x2; // uint16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FollowAttachmentSettings_t = struct {
                pub const m_attachment: usize = 0x0; // CAnimAttachment
                pub const m_boneIndex: usize = 0x80; // int32
                pub const m_attachmentHandle: usize = 0x84; // AttachmentHandle_t
                pub const m_bMatchTranslation: usize = 0x85; // bool
                pub const m_bMatchRotation: usize = 0x86; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmReferencedGraphNode__CDefinition = struct {
                pub const m_nReferencedGraphIdx: usize = 0x10; // int16
                pub const m_nFallbackNodeIdx: usize = 0x12; // int16
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimNodeID = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmClipSelectorNode__CDefinition = struct {
                pub const m_optionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                pub const m_conditionNodeIndices: usize = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CLookComponentUpdater = struct {
                pub const m_hLookHeading: usize = 0x34; // CAnimParamHandle
                pub const m_hLookHeadingNormalized: usize = 0x36; // CAnimParamHandle
                pub const m_hLookHeadingVelocity: usize = 0x38; // CAnimParamHandle
                pub const m_hLookPitch: usize = 0x3A; // CAnimParamHandle
                pub const m_hLookDistance: usize = 0x3C; // CAnimParamHandle
                pub const m_hLookDirection: usize = 0x3E; // CAnimParamHandle
                pub const m_hLookTarget: usize = 0x40; // CAnimParamHandle
                pub const m_hLookTargetWorldSpace: usize = 0x42; // CAnimParamHandle
                pub const m_bNetworkLookTarget: usize = 0x44; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIsExternalPoseSetNode__CDefinition = struct {
                pub const m_nExternalPoseNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CAnimGraphNetworkSettings = struct {
                pub const m_bNetworkingEnabled: usize = 0x20; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSingleFrameUpdateNode = struct {
                pub const m_actions: usize = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
                pub const m_hPoseCacheHandle: usize = 0x70; // CPoseHandle
                pub const m_hSequence: usize = 0x74; // HSequence
                pub const m_flCycle: usize = 0x78; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmChainLookatNode__CDefinition = struct {
                pub const m_chainEndBoneID: usize = 0x18; // CGlobalSymbol
                pub const m_nLookatTargetNodeIdx: usize = 0x20; // int16
                pub const m_nEnabledNodeIdx: usize = 0x22; // int16
                pub const m_flBlendTimeSeconds: usize = 0x24; // float32
                pub const m_nChainLength: usize = 0x28; // uint8
                pub const m_bIsTargetInWorldSpace: usize = 0x29; // bool
                pub const m_chainForwardDir: usize = 0x2C; // Vector
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFollowBoneNode__CDefinition = struct {
                pub const m_bone: usize = 0x18; // CGlobalSymbol
                pub const m_followTargetBone: usize = 0x20; // CGlobalSymbol
                pub const m_nEnabledNodeIdx: usize = 0x28; // int16
                pub const m_mode: usize = 0x2A; // NmFollowBoneMode_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBlockSelectionMetricEvaluator = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRemapValueComponentUpdater = struct {
                pub const m_items: usize = 0x30; // CUtlVector<CRemapValueUpdateItem>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigList = struct {
                pub const m_bHideMaterialGroupInTools: usize = 0x0; // bool
                pub const m_bHideRenderColorInTools: usize = 0x1; // bool
                pub const m_Configs: usize = 0x8; // CUtlVector<CModelConfig*>
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqAutoLayerFlag = struct {
                pub const m_bPost: usize = 0x0; // bool
                pub const m_bSpline: usize = 0x1; // bool
                pub const m_bXFade: usize = 0x2; // bool
                pub const m_bNoBlend: usize = 0x3; // bool
                pub const m_bLocal: usize = 0x4; // bool
                pub const m_bPose: usize = 0x5; // bool
                pub const m_bFetchFrame: usize = 0x6; // bool
                pub const m_bSubtract: usize = 0x7; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimStateID = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDEventConditionNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
                pub const m_eventIDs: usize = 0x18; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelBoneFlexDriver_t = struct {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_boneNameToken: usize = 0x8; // uint32
                pub const m_controls: usize = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMorphData = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_morphRectDatas: usize = 0x8; // CUtlVector<CMorphRectData>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootPinningUpdateNode = struct {
                pub const m_poseOpFixedData: usize = 0x78; // FootPinningPoseOpFixedData_t
                pub const m_eTimingSource: usize = 0xA8; // FootPinningTimingSource
                pub const m_params: usize = 0xB0; // CUtlVector<CAnimParamHandle>
                pub const m_bResetChild: usize = 0xC8; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqPoseSetting = struct {
                pub const m_sPoseParameter: usize = 0x0; // CBufferString
                pub const m_sAttachment: usize = 0x10; // CBufferString
                pub const m_sReferenceSequence: usize = 0x20; // CBufferString
                pub const m_flValue: usize = 0x30; // float32
                pub const m_bX: usize = 0x34; // bool
                pub const m_bY: usize = 0x35; // bool
                pub const m_bZ: usize = 0x36; // bool
                pub const m_eType: usize = 0x38; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseGraphExecutionHistoryCursorDesc_t = struct {
                pub const vecAncestorCursorIDs: usize = 0x0; // CUtlVector<PulseCursorID_t>
                pub const nSpawnNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const nRetiredAtNodeID: usize = 0x1C; // PulseDocNodeID_t
                pub const flLastReferenced: usize = 0x20; // float32
                pub const nLastValidEntryIdx: usize = 0x24; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVirtualParameterFloatNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAttachment = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_influenceNames: usize = 0x8; // CUtlString[3]
                pub const m_vInfluenceRotations: usize = 0x20; // Quaternion[3]
                pub const m_vInfluenceOffsets: usize = 0x50; // Vector[3]
                pub const m_influenceWeights: usize = 0x74; // float32[3]
                pub const m_bInfluenceRootTransform: usize = 0x80; // bool[3]
                pub const m_nInfluences: usize = 0x83; // uint8
                pub const m_bIgnoreRotation: usize = 0x84; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSequenceUpdateNodeBase = struct {
                pub const m_playbackSpeed: usize = 0x6C; // float32
                pub const m_bLoop: usize = 0x70; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDrawCullingData = struct {
                pub const m_ConeAxis: usize = 0x0; // int8[3]
                pub const m_ConeCutoff: usize = 0x3; // int8
            };
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXJoint_t = struct {
                pub const m_nType: usize = 0x0; // uint16
                pub const m_nBody1: usize = 0x2; // uint16
                pub const m_nBody2: usize = 0x4; // uint16
                pub const m_nFlags: usize = 0x6; // uint16
                pub const m_Frame1: usize = 0x10; // CTransform
                pub const m_Frame2: usize = 0x30; // CTransform
                pub const m_bEnableCollision: usize = 0x50; // bool
                pub const m_bIsLinearConstraintDisabled: usize = 0x51; // bool
                pub const m_bIsAngularConstraintDisabled: usize = 0x52; // bool
                pub const m_bEnableLinearLimit: usize = 0x53; // bool
                pub const m_LinearLimit: usize = 0x54; // VPhysXRange_t
                pub const m_bEnableLinearMotor: usize = 0x5C; // bool
                pub const m_vLinearTargetVelocity: usize = 0x60; // Vector
                pub const m_flMaxForce: usize = 0x6C; // float32
                pub const m_bEnableSwingLimit: usize = 0x70; // bool
                pub const m_SwingLimit: usize = 0x74; // VPhysXRange_t
                pub const m_bEnableTwistLimit: usize = 0x7C; // bool
                pub const m_TwistLimit: usize = 0x80; // VPhysXRange_t
                pub const m_bEnableAngularMotor: usize = 0x88; // bool
                pub const m_vAngularTargetVelocity: usize = 0x8C; // Vector
                pub const m_flMaxTorque: usize = 0x98; // float32
                pub const m_flLinearFrequency: usize = 0x9C; // float32
                pub const m_flLinearDampingRatio: usize = 0xA0; // float32
                pub const m_flAngularFrequency: usize = 0xA4; // float32
                pub const m_flAngularDampingRatio: usize = 0xA8; // float32
                pub const m_flFriction: usize = 0xAC; // float32
                pub const m_flElasticity: usize = 0xB0; // float32
                pub const m_flElasticDamping: usize = 0xB4; // float32
                pub const m_flPlasticity: usize = 0xB8; // float32
                pub const m_Tag: usize = 0xC0; // CUtlString
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStateNodeTransitionData = struct {
                pub const m_curve: usize = 0x0; // CBlendCurve
                pub const m_blendDuration: usize = 0x8; // CAnimValue<float32>
                pub const m_resetCycleValue: usize = 0x10; // CAnimValue<float32>
                pub const m_bReset: usize = 0x0; // bitfield:1
                pub const m_resetCycleOption: usize = 0x0; // bitfield:3
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTimeRemainingMetricEvaluator = struct {
                pub const m_bMatchByTimeRemaining: usize = 0x50; // bool
                pub const m_flMaxTimeRemaining: usize = 0x54; // float32
                pub const m_bFilterByTimeRemaining: usize = 0x58; // bool
                pub const m_flMinTimeRemaining: usize = 0x5C; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleInput = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement = struct {
                pub const m_ElementName: usize = 0x8; // CUtlString
                pub const m_NestedElements: usize = 0x10; // CUtlVector<CModelConfigElement*>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmControlParameterVectorNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FootFixedSettings = struct {
                pub const m_traceSettings: usize = 0x0; // TraceSettings_t
                pub const m_vFootBaseBindPosePositionMS: usize = 0x10; // VectorAligned
                pub const m_flFootBaseLength: usize = 0x20; // float32
                pub const m_flMaxRotationLeft: usize = 0x24; // float32
                pub const m_flMaxRotationRight: usize = 0x28; // float32
                pub const m_footstepLandedTagIndex: usize = 0x2C; // int32
                pub const m_bEnableTracing: usize = 0x30; // bool
                pub const m_flTraceAngleBlend: usize = 0x34; // float32
                pub const m_nDisableTagIndex: usize = 0x38; // int32
                pub const m_nFootIndex: usize = 0x3C; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBoneMaskSwitchNode__CDefinition = struct {
                pub const m_nSwitchValueNodeIdx: usize = 0x10; // int16
                pub const m_nTrueValueNodeIdx: usize = 0x12; // int16
                pub const m_nFalseValueNodeIdx: usize = 0x14; // int16
                pub const m_flBlendTimeSeconds: usize = 0x18; // float32
                pub const m_bSwitchDynamically: usize = 0x1C; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfig = struct {
                pub const m_ConfigName: usize = 0x0; // CUtlString
                pub const m_Elements: usize = 0x8; // CUtlVector<CModelConfigElement*>
                pub const m_bTopLevel: usize = 0x20; // bool
                pub const m_bActiveInEditorByDefault: usize = 0x21; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimComponentID = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXAggregateData_t = struct {
                pub const m_nFlags: usize = 0x0; // uint16
                pub const m_nRefCounter: usize = 0x2; // uint16
                pub const m_bonesHash: usize = 0x8; // CUtlVector<uint32>
                pub const m_boneNames: usize = 0x20; // CUtlVector<CUtlString>
                pub const m_indexNames: usize = 0x38; // CUtlVector<uint16>
                pub const m_indexHash: usize = 0x50; // CUtlVector<uint16>
                pub const m_bindPose: usize = 0x68; // CUtlVector<matrix3x4a_t>
                pub const m_parts: usize = 0x80; // CUtlVector<VPhysXBodyPart_t>
                pub const m_shapeMarkups: usize = 0x98; // CUtlVector<PhysShapeMarkup_t>
                pub const m_constraints2: usize = 0xB0; // CUtlVector<VPhysXConstraint2_t>
                pub const m_joints: usize = 0xC8; // CUtlVector<VPhysXJoint_t>
                pub const m_pFeModel: usize = 0xE0; // PhysFeModelDesc_t*
                pub const m_boneParents: usize = 0xE8; // CUtlVector<uint16>
                pub const m_surfacePropertyHashes: usize = 0x100; // CUtlVector<uint32>
                pub const m_collisionAttributes: usize = 0x118; // CUtlVector<VPhysXCollisionAttributes_t>
                pub const m_debugPartNames: usize = 0x130; // CUtlVector<CUtlString>
                pub const m_embeddedKeyvalues: usize = 0x148; // CUtlString
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphDefinition = struct {
                pub const m_variationID: usize = 0x0; // CGlobalSymbol
                pub const m_skeleton: usize = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                pub const m_pUserData: usize = 0x10; // CNmGraphVariationUserData*
                pub const m_persistentNodeIndices: usize = 0x18; // CUtlVector<int16>
                pub const m_nRootNodeIdx: usize = 0x30; // int16
                pub const m_controlParameterIDs: usize = 0x38; // CUtlVector<CGlobalSymbol>
                pub const m_virtualParameterIDs: usize = 0x50; // CUtlVector<CGlobalSymbol>
                pub const m_virtualParameterNodeIndices: usize = 0x68; // CUtlVector<int16>
                pub const m_referencedGraphSlots: usize = 0x80; // CUtlVector<CNmGraphDefinition::ReferencedGraphSlot_t>
                pub const m_externalGraphSlots: usize = 0x98; // CUtlVector<CNmGraphDefinition::ExternalGraphSlot_t>
                pub const m_externalPoseSlots: usize = 0xB0; // CUtlVector<CNmGraphDefinition::ExternalPoseSlot_t>
                pub const m_nodePaths: usize = 0x138; // CUtlVector<CUtlString>
                pub const m_resources: usize = 0x150; // CUtlVector<CStrongHandleVoid>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSelectorNode__CDefinition = struct {
                pub const m_optionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                pub const m_conditionNodeIndices: usize = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimDemoCaptureSettings = struct {
                pub const m_vecErrorRangeSplineRotation: usize = 0x0; // Vector2D
                pub const m_vecErrorRangeSplineTranslation: usize = 0x8; // Vector2D
                pub const m_vecErrorRangeSplineScale: usize = 0x10; // Vector2D
                pub const m_flIkRotation_MaxSplineError: usize = 0x18; // float32
                pub const m_flIkTranslation_MaxSplineError: usize = 0x1C; // float32
                pub const m_vecErrorRangeQuantizationRotation: usize = 0x20; // Vector2D
                pub const m_vecErrorRangeQuantizationTranslation: usize = 0x28; // Vector2D
                pub const m_vecErrorRangeQuantizationScale: usize = 0x30; // Vector2D
                pub const m_flIkRotation_MaxQuantizationError: usize = 0x38; // float32
                pub const m_flIkTranslation_MaxQuantizationError: usize = 0x3C; // float32
                pub const m_baseSequence: usize = 0x40; // CUtlString
                pub const m_nBaseSequenceFrame: usize = 0x48; // int32
                pub const m_boneSelectionMode: usize = 0x4C; // EDemoBoneSelectionMode
                pub const m_bones: usize = 0x50; // CUtlVector<BoneDemoCaptureSettings_t>
                pub const m_ikChains: usize = 0x68; // CUtlVector<IKDemoCaptureSettings_t>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const IKDemoCaptureSettings_t = struct {
                pub const m_parentBoneName: usize = 0x0; // CUtlString
                pub const m_eMode: usize = 0x8; // IKChannelMode
                pub const m_ikChainName: usize = 0x10; // CUtlString
                pub const m_oneBoneStart: usize = 0x18; // CUtlString
                pub const m_oneBoneEnd: usize = 0x20; // CUtlString
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqMultiFetchFlag = struct {
                pub const m_bRealtime: usize = 0x0; // bool
                pub const m_bCylepose: usize = 0x1; // bool
                pub const m_b0D: usize = 0x2; // bool
                pub const m_b1D: usize = 0x3; // bool
                pub const m_b2D: usize = 0x4; // bool
                pub const m_b2D_TRI: usize = 0x5; // bool
            };
            // Parent: None
            // Field count: 3
            pub const PulseRegisterMap_t = struct {
                pub const m_Inparams: usize = 0x0; // KeyValues3
                pub const m_InparamsWhichCanBeMoved: usize = 0x10; // CKV3MemberNameSet
                pub const m_Outparams: usize = 0x20; // KeyValues3
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXRange_t = struct {
                pub const m_flMin: usize = 0x0; // float32
                pub const m_flMax: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStopAtGoalUpdateNode = struct {
                pub const m_flOuterRadius: usize = 0x74; // float32
                pub const m_flInnerRadius: usize = 0x78; // float32
                pub const m_flMaxScale: usize = 0x7C; // float32
                pub const m_flMinScale: usize = 0x80; // float32
                pub const m_damping: usize = 0x88; // CAnimInputDamping
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDEventPercentageThroughNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
                pub const m_eventID: usize = 0x18; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimBoneDifference = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_parent: usize = 0x10; // CBufferString
                pub const m_posError: usize = 0x20; // Vector
                pub const m_bHasRotation: usize = 0x2C; // bool
                pub const m_bHasMovement: usize = 0x2D; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCachedBoolNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_mode: usize = 0x14; // NmCachedValueMode_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimCycle = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CActionComponentUpdater = struct {
                pub const m_actions: usize = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDampedPathAnimMotorUpdater = struct {
                pub const m_flAnticipationTime: usize = 0x2C; // float32
                pub const m_flMinSpeedScale: usize = 0x30; // float32
                pub const m_hAnticipationPosParam: usize = 0x34; // CAnimParamHandle
                pub const m_hAnticipationHeadingParam: usize = 0x36; // CAnimParamHandle
                pub const m_flSpringConstant: usize = 0x38; // float32
                pub const m_flMinSpringTension: usize = 0x3C; // float32
                pub const m_flMaxSpringTension: usize = 0x40; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCachedFloatNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_mode: usize = 0x14; // NmCachedValueMode_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatSwitchNode__CDefinition = struct {
                pub const m_nSwitchValueNodeIdx: usize = 0x10; // int16
                pub const m_nTrueValueNodeIdx: usize = 0x12; // int16
                pub const m_nFalseValueNodeIdx: usize = 0x14; // int16
                pub const m_flFalseValue: usize = 0x18; // float32
                pub const m_flTrueValue: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_SetMaterialGroupOnAttachedModels = struct {
                pub const m_MaterialGroupName: usize = 0x48; // CUtlString
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmEntityAttributeEventBase = struct {
                pub const m_attributeName: usize = 0x20; // CUtlString
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVirtualParameterBoneMaskNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPathHelperUpdateNode = struct {
                pub const m_flStoppingRadius: usize = 0x70; // float32
                pub const m_flStoppingSpeedScale: usize = 0x74; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const MaterialGroup_t = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_materials: usize = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMorphBundleData = struct {
                pub const m_flULeftSrc: usize = 0x0; // float32
                pub const m_flVTopSrc: usize = 0x4; // float32
                pub const m_offsets: usize = 0x8; // CUtlVector<float32>
                pub const m_ranges: usize = 0x20; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_UserPick = struct {
                pub const m_Choices: usize = 0x48; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSolveIKTargetHandle_t = struct {
                pub const m_positionHandle: usize = 0x0; // CAnimParamHandle
                pub const m_orientationHandle: usize = 0x2; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootAdjustmentUpdateNode = struct {
                pub const m_clips: usize = 0x78; // CUtlVector<HSequence>
                pub const m_hBasePoseCacheHandle: usize = 0x90; // CPoseHandle
                pub const m_facingTarget: usize = 0x94; // CAnimParamHandle
                pub const m_flTurnTimeMin: usize = 0x98; // float32
                pub const m_flTurnTimeMax: usize = 0x9C; // float32
                pub const m_flStepHeightMax: usize = 0xA0; // float32
                pub const m_flStepHeightMaxAngle: usize = 0xA4; // float32
                pub const m_bResetChild: usize = 0xA8; // bool
                pub const m_bAnimationDriven: usize = 0xA9; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CChoreoUpdateNode = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAimConstraint = struct {
                pub const m_qAimOffset: usize = 0x60; // Quaternion
                pub const m_nUpType: usize = 0x70; // uint32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMaterialDrawDescriptor__RigidMeshPart_t = struct {
                pub const m_nRigidBLASIndex: usize = 0x0; // uint16
                pub const m_nBoneIndex: usize = 0x2; // int16
                pub const m_nStartIndexOffset: usize = 0x4; // uint32
                pub const m_nPrimitiveCount: usize = 0x8; // uint32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CFootFallAnimTag = struct {
                pub const m_foot: usize = 0x58; // FootFallTagFoot_t
            };
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMaterialDrawDescriptor = struct {
                pub const m_flUvDensity: usize = 0x0; // float32
                pub const m_vTintColor: usize = 0x4; // Vector
                pub const m_flAlpha: usize = 0x10; // float32
                pub const m_nNumMeshlets: usize = 0x16; // uint16
                pub const m_nFirstMeshlet: usize = 0x1C; // uint32
                pub const m_nAppliedIndexOffset: usize = 0x20; // uint32
                pub const m_nDepthVertexBufferIndex: usize = 0x24; // uint8
                pub const m_nMeshletPackedIVBIndex: usize = 0x25; // uint8
                pub const m_rigidMeshParts: usize = 0x28; // CUtlLeanVector<CMaterialDrawDescriptor::RigidMeshPart_t>
                pub const m_nPrimitiveType: usize = 0x38; // RenderPrimitiveType_t
                pub const m_nBaseVertex: usize = 0x3C; // int32
                pub const m_nVertexCount: usize = 0x40; // int32
                pub const m_nStartIndex: usize = 0x44; // int32
                pub const m_nIndexCount: usize = 0x48; // int32
                pub const m_indexBuffer: usize = 0xB0; // CRenderBufferBinding
                pub const m_meshletPackedIVB: usize = 0xD0; // CRenderBufferBinding
                pub const m_material: usize = 0x100; // CStrongHandle<InfoForResourceTypeIMaterial2>
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSkeleton = struct {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_boneIDs: usize = 0x8; // CUtlLeanVector<CGlobalSymbol>
                pub const m_parentIndices: usize = 0x18; // CUtlVector<int32>
                pub const m_parentSpaceReferencePose: usize = 0x30; // CUtlVector<CTransform>
                pub const m_modelSpaceReferencePose: usize = 0x48; // CUtlVector<CTransform>
                pub const m_numBonesToSampleAtLowLOD: usize = 0x60; // int32
                pub const m_maskDefinitions: usize = 0x88; // CUtlLeanVector<NmBoneMaskSetDefinition_t>
                pub const m_secondarySkeletons: usize = 0xA8; // CUtlLeanVector<CNmSkeleton::SecondarySkeleton_t>
                pub const m_bIsPropSkeleton: usize = 0xB8; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStepsRemainingMetricEvaluator = struct {
                pub const m_footIndices: usize = 0x50; // CUtlVector<int32>
                pub const m_flMinStepsRemaining: usize = 0x68; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVelocityBlendNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CNmZeroPoseTask = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub const CBodyGroupSetting = struct {
                pub const m_BodyGroupName: usize = 0x0; // CUtlString
                pub const m_nBodyGroupOption: usize = 0x8; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CVectorQuantizer = struct {
                pub const m_centroidVectors: usize = 0x0; // CUtlVector<float32>
                pub const m_nCentroids: usize = 0x18; // int32
                pub const m_nDimensions: usize = 0x1C; // int32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticleNamedValueConfiguration_t = struct {
                pub const m_ConfigName: usize = 0x0; // CUtlString
                pub const m_ConfigValue: usize = 0x8; // KeyValues3
                pub const m_BoundValuePath: usize = 0x18; // CUtlString
                pub const m_iAttachType: usize = 0x20; // ParticleAttachment_t
                pub const m_strEntityScope: usize = 0x28; // CUtlString
                pub const m_strAttachmentName: usize = 0x30; // CUtlString
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVectorCreateNode__CDefinition = struct {
                pub const m_inputVectorValueNodeIdx: usize = 0x10; // int16
                pub const m_inputValueXNodeIdx: usize = 0x12; // int16
                pub const m_inputValueYNodeIdx: usize = 0x14; // int16
                pub const m_inputValueZNodeIdx: usize = 0x16; // int16
            };
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            pub const CParticleVecInput = struct {
                pub const m_nType: usize = 0x10; // ParticleVecType_t
                pub const m_vLiteralValue: usize = 0x14; // Vector
                pub const m_LiteralColor: usize = 0x20; // Color
                pub const m_NamedValue: usize = 0x28; // CParticleNamedValueRef
                pub const m_bFollowNamedValue: usize = 0x68; // bool
                pub const m_nVectorAttribute: usize = 0x6C; // ParticleAttributeIndex_t
                pub const m_vVectorAttributeScale: usize = 0x70; // Vector
                pub const m_nControlPoint: usize = 0x7C; // int32
                pub const m_nDeltaControlPoint: usize = 0x80; // int32
                pub const m_vCPValueScale: usize = 0x84; // Vector
                pub const m_vCPRelativePosition: usize = 0x90; // Vector
                pub const m_vCPRelativeDir: usize = 0x9C; // Vector
                pub const m_FloatComponentX: usize = 0xA8; // CParticleFloatInput
                pub const m_FloatComponentY: usize = 0x218; // CParticleFloatInput
                pub const m_FloatComponentZ: usize = 0x388; // CParticleFloatInput
                pub const m_FloatInterp: usize = 0x4F8; // CParticleFloatInput
                pub const m_flInterpInput0: usize = 0x668; // float32
                pub const m_flInterpInput1: usize = 0x66C; // float32
                pub const m_vInterpOutput0: usize = 0x670; // Vector
                pub const m_vInterpOutput1: usize = 0x67C; // Vector
                pub const m_Gradient: usize = 0x688; // CColorGradient
                pub const m_vRandomMin: usize = 0x6A0; // Vector
                pub const m_vRandomMax: usize = 0x6AC; // Vector
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmStateNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
                pub const m_entryEvents: usize = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                pub const m_executeEvents: usize = 0x38; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                pub const m_exitEvents: usize = 0x58; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                pub const m_timedRemainingEvents: usize = 0x78; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
                pub const m_timedElapsedEvents: usize = 0x90; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
                pub const m_nLayerWeightNodeIdx: usize = 0xA8; // int16
                pub const m_nLayerRootMotionWeightNodeIdx: usize = 0xAA; // int16
                pub const m_nLayerBoneMaskNodeIdx: usize = 0xAC; // int16
                pub const m_bIsOffState: usize = 0xAE; // bool
                pub const m_bUseActualElapsedTimeInStateForTimedEvents: usize = 0xAF; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBoneMaskSelectorNode__CDefinition = struct {
                pub const m_defaultMaskNodeIdx: usize = 0x10; // int16
                pub const m_parameterValueNodeIdx: usize = 0x12; // int16
                pub const m_bSwitchDynamically: usize = 0x14; // bool
                pub const m_maskNodeIndices: usize = 0x18; // CUtlVectorFixedGrowable<int16,7>
                pub const m_parameterValues: usize = 0x40; // CUtlVectorFixedGrowable<CGlobalSymbol,7>
                pub const m_flBlendTimeSeconds: usize = 0x90; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVirtualParameterVectorNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootCycleMetricEvaluator = struct {
                pub const m_footIndices: usize = 0x50; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmConstIDNode__CDefinition = struct {
                pub const m_value: usize = 0x10; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CHitBox = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_sSurfaceProperty: usize = 0x8; // CUtlString
                pub const m_sBoneName: usize = 0x10; // CUtlString
                pub const m_vMinBounds: usize = 0x18; // Vector
                pub const m_vMaxBounds: usize = 0x24; // Vector
                pub const m_flShapeRadius: usize = 0x30; // float32
                pub const m_nBoneNameHash: usize = 0x34; // uint32
                pub const m_nGroupId: usize = 0x38; // int32
                pub const m_nShapeType: usize = 0x3C; // uint8
                pub const m_bTranslationOnly: usize = 0x3D; // bool
                pub const m_CRC: usize = 0x40; // uint32
                pub const m_cRenderColor: usize = 0x44; // Color
                pub const m_nHitBoxIndex: usize = 0x48; // uint16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmParameterizedSelectorNode__CDefinition = struct {
                pub const m_optionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                pub const m_optionWeights: usize = 0x28; // CUtlLeanVectorFixedGrowable<uint8,5>
                pub const m_parameterNodeIdx: usize = 0x38; // int16
                pub const m_bIgnoreInvalidOptions: usize = 0x3A; // bool
                pub const m_bHasWeightsSet: usize = 0x3B; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelSkeletonData_t = struct {
                pub const m_boneName: usize = 0x0; // CUtlVector<CUtlString>
                pub const m_nParent: usize = 0x18; // CUtlVector<int16>
                pub const m_boneSphere: usize = 0x30; // CUtlVector<float32>
                pub const m_nFlag: usize = 0x48; // CUtlVector<uint32>
                pub const m_bonePosParent: usize = 0x60; // CUtlVector<Vector>
                pub const m_boneRotParent: usize = 0x78; // CUtlVector<QuaternionStorage>
                pub const m_boneScaleParent: usize = 0x90; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmEvent = struct {
                pub const m_flStartTime: usize = 0x8; // NmPercent_t
                pub const m_flDuration: usize = 0xC; // NmPercent_t
                pub const m_syncID: usize = 0x10; // CGlobalSymbol
                pub const m_bClientOnly: usize = 0x18; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmCompressionSettings_t__QuantizationRange_t = struct {
                pub const m_flRangeStart: usize = 0x0; // float32
                pub const m_flRangeLength: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CNmBlendTaskBase = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const TagSpan_t = struct {
                pub const m_tagIndex: usize = 0x0; // int32
                pub const m_startCycle: usize = 0x4; // float32
                pub const m_endCycle: usize = 0x8; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmConstTargetNode__CDefinition = struct {
                pub const m_value: usize = 0x10; // CNmTarget
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRemapValueUpdateItem = struct {
                pub const m_hParamIn: usize = 0x0; // CAnimParamHandle
                pub const m_hParamOut: usize = 0x2; // CAnimParamHandle
                pub const m_flMinInputValue: usize = 0x4; // float32
                pub const m_flMaxInputValue: usize = 0x8; // float32
                pub const m_flMinOutputValue: usize = 0xC; // float32
                pub const m_flMaxOutputValue: usize = 0x10; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PermModelDataAnimatedMaterialAttribute_t = struct {
                pub const m_AttributeName: usize = 0x0; // CUtlString
                pub const m_nNumChannels: usize = 0x8; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionDataSet = struct {
                pub const m_groups: usize = 0x0; // CUtlVector<CMotionGraphGroup>
                pub const m_nDimensionCount: usize = 0x18; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CProductQuantizer = struct {
                pub const m_subQuantizers: usize = 0x0; // CUtlVector<CVectorQuantizer>
                pub const m_nDimensions: usize = 0x18; // int32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CChoiceUpdateNode = struct {
                pub const m_children: usize = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_weights: usize = 0x78; // CUtlVector<float32>
                pub const m_blendTimes: usize = 0x90; // CUtlVector<float32>
                pub const m_choiceMethod: usize = 0xA8; // ChoiceMethod
                pub const m_choiceChangeMethod: usize = 0xAC; // ChoiceChangeMethod
                pub const m_blendMethod: usize = 0xB0; // ChoiceBlendMethod
                pub const m_blendTime: usize = 0xB4; // float32
                pub const m_bCrossFade: usize = 0xB8; // bool
                pub const m_bResetChosen: usize = 0xB9; // bool
                pub const m_bDontResetSameSelection: usize = 0xBA; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonAnimCapture_t__Bone_t = struct {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_BindPose: usize = 0x10; // CTransform
                pub const m_nParent: usize = 0x30; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CExpressionActionUpdater = struct {
                pub const m_hParam: usize = 0x18; // CAnimParamHandle
                pub const m_eParamType: usize = 0x1A; // AnimParamType_t
                pub const m_hScript: usize = 0x1C; // AnimScriptHandle
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatMathNode__CDefinition = struct {
                pub const m_nInputValueNodeIdxA: usize = 0x10; // int16
                pub const m_nInputValueNodeIdxB: usize = 0x12; // int16
                pub const m_bReturnAbsoluteResult: usize = 0x14; // bool
                pub const m_bReturnNegatedResult: usize = 0x15; // bool
                pub const m_operator: usize = 0x16; // CNmFloatMathNode::Operator_t
                pub const m_flValueB: usize = 0x18; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGraphVisualizerLine = struct {
                pub const m_vWsPositionStart: usize = 0x40; // VectorAligned
                pub const m_vWsPositionEnd: usize = 0x50; // VectorAligned
                pub const m_Color: usize = 0x60; // Color
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCycleControlUpdateNode = struct {
                pub const m_valueSource: usize = 0x70; // AnimValueSource
                pub const m_paramIndex: usize = 0x74; // CAnimParamHandle
                pub const m_bLockWhenWaning: usize = 0x76; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTargetInfoNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_infoType: usize = 0x14; // CNmTargetInfoNode::Info_t
                pub const m_bIsWorldSpaceTarget: usize = 0x18; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDampedValueComponentUpdater = struct {
                pub const m_items: usize = 0x30; // CUtlVector<CDampedValueUpdateItem>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBaseConstraint = struct {
                pub const m_name: usize = 0x20; // CUtlString
                pub const m_vUpVector: usize = 0x28; // Vector
                pub const m_slaves: usize = 0x38; // CUtlLeanVector<CConstraintSlave>
                pub const m_targets: usize = 0x48; // CUtlVector<CConstraintTarget>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmControlParameterFloatNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const BlendItem_t = struct {
                pub const m_tags: usize = 0x0; // CUtlVector<TagSpan_t>
                pub const m_pChild: usize = 0x18; // CAnimUpdateNodeRef
                pub const m_hSequence: usize = 0x28; // HSequence
                pub const m_vPos: usize = 0x2C; // Vector2D
                pub const m_flDuration: usize = 0x34; // float32
                pub const m_bUseCustomDuration: usize = 0x38; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIsExternalGraphSlotFilledNode__CDefinition = struct {
                pub const m_nExternalGraphNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 33
            pub const CNewParticleEffect = struct {
                pub const m_pNext: usize = 0x10; // CNewParticleEffect*
                pub const m_pPrev: usize = 0x18; // CNewParticleEffect*
                pub const m_pParticles: usize = 0x20; // IParticleCollection*
                pub const m_pDebugName: usize = 0x28; // char*
                pub const m_bDontRemove: usize = 0x0; // bitfield:1
                pub const m_bRemove: usize = 0x0; // bitfield:1
                pub const m_bNeedsBBoxUpdate: usize = 0x0; // bitfield:1
                pub const m_bIsFirstFrame: usize = 0x0; // bitfield:1
                pub const m_bAutoUpdateBBox: usize = 0x0; // bitfield:1
                pub const m_bAllocated: usize = 0x0; // bitfield:1
                pub const m_bSimulate: usize = 0x0; // bitfield:1
                pub const m_bShouldPerformCullCheck: usize = 0x0; // bitfield:1
                pub const m_bForceNoDraw: usize = 0x0; // bitfield:1
                pub const m_bSuppressScreenSpaceEffect: usize = 0x0; // bitfield:1
                pub const m_bShouldSave: usize = 0x0; // bitfield:1
                pub const m_bShouldSimulateDuringGamePaused: usize = 0x0; // bitfield:1
                pub const m_bShouldCheckFoW: usize = 0x0; // bitfield:1
                pub const m_bIsAsyncCreate: usize = 0x0; // bitfield:1
                pub const m_bFreezeTransitionActive: usize = 0x0; // bitfield:1
                pub const m_bFreezeTargetState: usize = 0x0; // bitfield:1
                pub const m_bCanFreeze: usize = 0x0; // bitfield:1
                pub const m_vSortOrigin: usize = 0x40; // Vector
                pub const m_flScale: usize = 0x4C; // float32
                pub const m_hOwner: usize = 0x50; // PARTICLE_EHANDLE__*
                pub const m_pOwningParticleProperty: usize = 0x58; // CParticleProperty*
                pub const m_flFreezeTransitionStart: usize = 0x70; // float32
                pub const m_flFreezeTransitionDuration: usize = 0x74; // float32
                pub const m_flFreezeTransitionOverride: usize = 0x78; // float32
                pub const m_LastMin: usize = 0x7C; // Vector
                pub const m_LastMax: usize = 0x88; // Vector
                pub const m_nSplitScreenUser: usize = 0x94; // CSplitScreenSlot
                pub const m_vecAggregationCenter: usize = 0x98; // Vector
                pub const m_RefCount: usize = 0xD0; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmClipNode__CDefinition = struct {
                pub const m_nPlayInReverseValueNodeIdx: usize = 0x10; // int16
                pub const m_nResetTimeValueNodeIdx: usize = 0x12; // int16
                pub const m_bSampleRootMotion: usize = 0x14; // bool
                pub const m_bAllowLooping: usize = 0x15; // bool
                pub const m_nDataSlotIdx: usize = 0x16; // int16
                pub const m_graphEvents: usize = 0x18; // CUtlVectorFixedGrowable<CGlobalSymbol,2>
                pub const m_flSpeedMultiplier: usize = 0x40; // float32
                pub const m_nStartSyncEventOffset: usize = 0x44; // int32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmMaterialAttributeEvent = struct {
                pub const m_attributeName: usize = 0x20; // CUtlString
                pub const m_attributeNameToken: usize = 0x28; // CUtlStringToken
                pub const m_x: usize = 0x30; // CPiecewiseCurve
                pub const m_y: usize = 0x70; // CPiecewiseCurve
                pub const m_z: usize = 0xB0; // CPiecewiseCurve
                pub const m_w: usize = 0xF0; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBlend1DNode__CDefinition = struct {
                pub const m_parameterization: usize = 0x40; // CNmParameterizedBlendNode::Parameterization_t
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CConcreteAnimParameter = struct {
                pub const m_previewButton: usize = 0x70; // AnimParamButton_t
                pub const m_eNetworkSetting: usize = 0x74; // AnimParamNetworkSetting
                pub const m_bUseMostRecentValue: usize = 0x78; // bool
                pub const m_bAutoReset: usize = 0x79; // bool
                pub const m_bGameWritable: usize = 0x7A; // bool
                pub const m_bGraphWritable: usize = 0x7B; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBoneWeightList = struct {
                pub const m_skeletonName: usize = 0x0; // CResourceName
                pub const m_boneIDs: usize = 0xE0; // CUtlVector<CGlobalSymbol>
                pub const m_weights: usize = 0xF8; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPairedSequenceUpdateNode = struct {
                pub const m_sPairedSequenceRole: usize = 0x78; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_RandomPick = struct {
                pub const m_Choices: usize = 0x48; // CUtlVector<CUtlString>
                pub const m_ChoiceWeights: usize = 0x60; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 0
            pub const CNmReferencePoseTask = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmScaleNode__CDefinition = struct {
                pub const m_nMaskNodeIdx: usize = 0x18; // int16
                pub const m_nEnableNodeIdx: usize = 0x1A; // int16
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXConstraint2_t = struct {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_nParent: usize = 0x4; // uint16
                pub const m_nChild: usize = 0x6; // uint16
                pub const m_params: usize = 0x8; // VPhysXConstraintParams_t
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CConstraintTarget = struct {
                pub const m_qOffset: usize = 0x20; // Quaternion
                pub const m_vOffset: usize = 0x30; // Vector
                pub const m_nBoneHash: usize = 0x3C; // uint32
                pub const m_sName: usize = 0x40; // CUtlString
                pub const m_flWeight: usize = 0x48; // float32
                pub const m_bIsAttachment: usize = 0x59; // bool
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonAnimCapture_t = struct {
                pub const m_nEntIndex: usize = 0x0; // CEntityIndex
                pub const m_nEntParent: usize = 0x4; // CEntityIndex
                pub const m_ImportedCollision: usize = 0x8; // CUtlVector<CEntityIndex>
                pub const m_ModelName: usize = 0x20; // CUtlString
                pub const m_CaptureName: usize = 0x28; // CUtlString
                pub const m_ModelBindPose: usize = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                pub const m_FeModelInitPose: usize = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                pub const m_nFlexControllers: usize = 0x60; // int32
                pub const m_bPredicted: usize = 0x64; // bool
                pub const m_Frames: usize = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimUser = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_nType: usize = 0x10; // int32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRagdollComponentUpdater = struct {
                pub const m_ragdollNodePaths: usize = 0x30; // CUtlVector<CAnimNodePath>
                pub const m_followAttachmentNodePaths: usize = 0x48; // CUtlVector<CAnimNodePath>
                pub const m_boneIndices: usize = 0x60; // CUtlVector<int32>
                pub const m_boneNames: usize = 0x78; // CUtlVector<CUtlString>
                pub const m_weightLists: usize = 0x90; // CUtlVector<WeightList>
                pub const m_boneToWeightIndices: usize = 0xA8; // CUtlVector<int32>
                pub const m_flSpringFrequencyMin: usize = 0xC0; // float32
                pub const m_flSpringFrequencyMax: usize = 0xC4; // float32
                pub const m_flMaxStretch: usize = 0xC8; // float32
                pub const m_bSolidCollisionAtZeroWeight: usize = 0xCC; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticleNamedValueSource_t = struct {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_IsPublic: usize = 0x8; // bool
                pub const m_ValueType: usize = 0x10; // CPulseValueFullType
                pub const m_DefaultConfig: usize = 0x28; // ParticleNamedValueConfiguration_t
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootDefinition = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_ankleBoneName: usize = 0x8; // CUtlString
                pub const m_toeBoneName: usize = 0x10; // CUtlString
                pub const m_vBallOffset: usize = 0x18; // Vector
                pub const m_vHeelOffset: usize = 0x24; // Vector
                pub const m_flFootLength: usize = 0x30; // float32
                pub const m_flBindPoseDirectionMS: usize = 0x34; // float32
                pub const m_flTraceHeight: usize = 0x38; // float32
                pub const m_flTraceRadius: usize = 0x3C; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqSynthAnimDesc = struct {
                pub const m_sName: usize = 0x0; // CBufferString
                pub const m_flags: usize = 0x10; // CSeqSeqDescFlag
                pub const m_transition: usize = 0x1C; // CSeqTransition
                pub const m_nLocalBaseReference: usize = 0x24; // int16
                pub const m_nLocalBoneMask: usize = 0x26; // int16
                pub const m_activityArray: usize = 0x28; // CUtlVector<CAnimActivity>
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmLayerBlendNode__LayerDefinition_t = struct {
                pub const m_nInputNodeIdx: usize = 0x0; // int16
                pub const m_nWeightValueNodeIdx: usize = 0x2; // int16
                pub const m_nBoneMaskValueNodeIdx: usize = 0x4; // int16
                pub const m_nRootMotionWeightValueNodeIdx: usize = 0x6; // int16
                pub const m_bIsSynchronized: usize = 0x8; // bool
                pub const m_bIgnoreEvents: usize = 0x9; // bool
                pub const m_bIsStateMachineLayer: usize = 0xA; // bool
                pub const m_blendMode: usize = 0xB; // NmPoseBlendMode_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimComponentUpdater = struct {
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_id: usize = 0x20; // AnimComponentID
                pub const m_networkMode: usize = 0x24; // AnimNodeNetworkMode
                pub const m_bStartEnabled: usize = 0x28; // bool
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBlend2DUpdateNode = struct {
                pub const m_items: usize = 0x60; // CUtlVector<BlendItem_t>
                pub const m_tags: usize = 0x78; // CUtlVector<TagSpan_t>
                pub const m_paramSpans: usize = 0x90; // CParamSpanUpdater
                pub const m_nodeItemIndices: usize = 0xA8; // CUtlVector<int32>
                pub const m_damping: usize = 0xC0; // CAnimInputDamping
                pub const m_blendSourceX: usize = 0xD8; // AnimValueSource
                pub const m_paramX: usize = 0xDC; // CAnimParamHandle
                pub const m_blendSourceY: usize = 0xE0; // AnimValueSource
                pub const m_paramY: usize = 0xE4; // CAnimParamHandle
                pub const m_eBlendMode: usize = 0xE8; // Blend2DMode
                pub const m_playbackSpeed: usize = 0xEC; // float32
                pub const m_bLoop: usize = 0xF0; // bool
                pub const m_bLockBlendOnReset: usize = 0xF1; // bool
                pub const m_bLockWhenWaning: usize = 0xF2; // bool
                pub const m_bAnimEventsAndTagsOnMostWeightedOnly: usize = 0xF3; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVelocityBasedSpeedScaleNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            // MFgdHelper
            pub const CNPCPhysicsHull = struct {
                pub const m_sName: usize = 0x0; // CGlobalSymbol
                pub const m_eType: usize = 0x8; // NPCPhysicsHullType_t
                pub const m_flCapsuleHeight: usize = 0xC; // float32
                pub const m_flCapsuleRadius: usize = 0x10; // float32
                pub const m_vCapsuleCenter1: usize = 0x14; // Vector
                pub const m_vCapsuleCenter2: usize = 0x20; // Vector
                pub const m_flGroundBoxHeight: usize = 0x2C; // float32
                pub const m_flGroundBoxWidth: usize = 0x30; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PermModelExtPart_t = struct {
                pub const m_Transform: usize = 0x0; // CTransform
                pub const m_Name: usize = 0x20; // CUtlString
                pub const m_nParent: usize = 0x28; // int32
                pub const m_refModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCachedIDNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_mode: usize = 0x14; // NmCachedValueMode_t
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CLeanMatrixUpdateNode = struct {
                pub const m_frameCorners: usize = 0x5C; // int32[3][3]
                pub const m_poses: usize = 0x80; // CPoseHandle[9]
                pub const m_damping: usize = 0xA8; // CAnimInputDamping
                pub const m_blendSource: usize = 0xC0; // AnimVectorSource
                pub const m_paramIndex: usize = 0xC4; // CAnimParamHandle
                pub const m_verticalAxis: usize = 0xC8; // Vector
                pub const m_horizontalAxis: usize = 0xD4; // Vector
                pub const m_hSequence: usize = 0xE0; // HSequence
                pub const m_flMaxValue: usize = 0xE4; // float32
                pub const m_nSequenceMaxFrame: usize = 0xE8; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CSymbolAnimParameter = struct {
                pub const m_defaultValue: usize = 0x80; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatCurveEventNode__CDefinition = struct {
                pub const m_eventID: usize = 0x10; // CGlobalSymbol
                pub const m_nDefaultNodeIdx: usize = 0x18; // int16
                pub const m_flDefaultValue: usize = 0x1C; // float32
                pub const m_eventConditionRules: usize = 0x20; // CNmBitFlags
            };
            // Parent: None
            // Field count: 0
            pub const IAnimationGraphInstance = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmStateMachineNode__TransitionDefinition_t = struct {
                pub const m_nTargetStateIdx: usize = 0x0; // int16
                pub const m_nConditionNodeIdx: usize = 0x2; // int16
                pub const m_nTransitionNodeIdx: usize = 0x4; // int16
                pub const m_bCanBeForced: usize = 0x6; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatSelectorNode__CDefinition = struct {
                pub const m_conditionNodeIndices: usize = 0x10; // CUtlVectorFixedGrowable<int16,5>
                pub const m_values: usize = 0x38; // CUtlVectorFixedGrowable<float32,5>
                pub const m_flDefaultValue: usize = 0x68; // float32
                pub const m_flEaseTime: usize = 0x6C; // float32
                pub const m_easingOp: usize = 0x70; // NmEasingOperation_t
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTargetSelectorUpdateNode = struct {
                pub const m_eAngleMode: usize = 0x60; // TargetSelectorAngleMode_t
                pub const m_children: usize = 0x68; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_hTargetPosition: usize = 0x84; // CAnimParamHandle
                pub const m_hTargetFacePositionParameter: usize = 0x86; // CAnimParamHandle
                pub const m_hMoveHeadingParameter: usize = 0x88; // CAnimParamHandle
                pub const m_hDesiredMoveHeadingParameter: usize = 0x8A; // CAnimParamHandle
                pub const m_bTargetPositionIsWorldSpace: usize = 0x8C; // bool
                pub const m_bTargetFacePositionIsWorldSpace: usize = 0x8D; // bool
                pub const m_bEnablePhaseMatching: usize = 0x8E; // bool
                pub const m_flPhaseMatchingMaxRootMotionSkip: usize = 0x90; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CHitBoxSetList = struct {
                pub const m_HitBoxSets: usize = 0x0; // CUtlVector<CHitBoxSet>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIsInactiveBranchConditionNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const MotionDBIndex = struct {
                pub const m_nIndex: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDirectPlaybackTagData = struct {
                pub const m_sequenceName: usize = 0x0; // CUtlString
                pub const m_tags: usize = 0x8; // CUtlVector<TagSpan_t>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CParticleCollectionVecInput = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphEventConditionNode__Condition_t = struct {
                pub const m_eventID: usize = 0x0; // CGlobalSymbol
                pub const m_eventTypeCondition: usize = 0x8; // NmGraphEventTypeCondition_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatRemapNode__RemapRange_t = struct {
                pub const m_flBegin: usize = 0x0; // float32
                pub const m_flEnd: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCurrentSyncEventIDNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmStateCompletedConditionNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_nTransitionDurationOverrideNodeIdx: usize = 0x12; // int16
                pub const m_flTransitionDurationSeconds: usize = 0x14; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTargetWarpEvent = struct {
                pub const m_rule: usize = 0x20; // NmTargetWarpRule_t
                pub const m_algorithm: usize = 0x21; // NmTargetWarpAlgorithm_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParamSpanUpdater = struct {
                pub const m_spans: usize = 0x0; // CUtlVector<ParamSpan_t>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimActionUpdater = struct {
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CParticleAnimTag = struct {
                pub const m_hParticleSystem: usize = 0x58; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_particleSystemName: usize = 0x60; // CUtlString
                pub const m_configName: usize = 0x68; // CUtlString
                pub const m_bDetachFromOwner: usize = 0x70; // bool
                pub const m_bAggregate: usize = 0x71; // bool
                pub const m_bStopWhenTagEnds: usize = 0x72; // bool
                pub const m_bTagEndStopIsInstant: usize = 0x73; // bool
                pub const m_attachmentName: usize = 0x78; // CUtlString
                pub const m_attachmentType: usize = 0x80; // ParticleAttachment_t
                pub const m_attachmentCP1Name: usize = 0x88; // CUtlString
                pub const m_attachmentCP1Type: usize = 0x90; // ParticleAttachment_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCycleBase = struct {
                pub const m_flCycle: usize = 0x0; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FollowTargetOpFixedSettings_t = struct {
                pub const m_boneIndex: usize = 0x0; // int32
                pub const m_bBoneTarget: usize = 0x4; // bool
                pub const m_boneTargetIndex: usize = 0x8; // int32
                pub const m_bWorldCoodinateTarget: usize = 0xC; // bool
                pub const m_bMatchTargetOrientation: usize = 0xD; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDSwitchNode__CDefinition = struct {
                pub const m_nSwitchValueNodeIdx: usize = 0x10; // int16
                pub const m_nTrueValueNodeIdx: usize = 0x12; // int16
                pub const m_nFalseValueNodeIdx: usize = 0x14; // int16
                pub const m_falseValue: usize = 0x18; // CGlobalSymbol
                pub const m_trueValue: usize = 0x20; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmRootMotionEvent = struct {
                pub const m_flBlendTimeSeconds: usize = 0x20; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_PublicOutput = struct {
                pub const m_Name: usize = 0x0; // PulseSymbol_t
                pub const m_Description: usize = 0x10; // CUtlString
                pub const m_Args: usize = 0x18; // CUtlLeanVector<CPulseRuntimeMethodArg>
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimationSnapshotBase_t = struct {
                pub const m_flRealTime: usize = 0x0; // float32
                pub const m_rootToWorld: usize = 0x10; // matrix3x4a_t
                pub const m_bBonesInWorldSpace: usize = 0x40; // bool
                pub const m_boneSetupMask: usize = 0x48; // CUtlVector<uint32>
                pub const m_boneTransforms: usize = 0x60; // CUtlVector<matrix3x4a_t>
                pub const m_flexControllers: usize = 0x78; // CUtlVector<float32>
                pub const m_SnapshotType: usize = 0x90; // AnimationSnapshotType_t
                pub const m_bHasDecodeDump: usize = 0x94; // bool
                pub const m_DecodeDump: usize = 0x98; // AnimationDecodeDebugDumpElement_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIKEffector = struct {
                pub const m_nBodyIndex: usize = 0x0; // int32
                pub const m_bEnabled: usize = 0x4; // bool
                pub const m_vTargetPosition: usize = 0x8; // Vector
                pub const m_qTargetOrientation: usize = 0x20; // Quaternion
                pub const m_flWeight: usize = 0x30; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CEmitTagActionUpdater = struct {
                pub const m_nTagIndex: usize = 0x18; // int32
                pub const m_bIsZeroDuration: usize = 0x1C; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const DynamicMeshDeformParams_t = struct {
                pub const m_flTensionCompressScale: usize = 0x0; // float32
                pub const m_flTensionStretchScale: usize = 0x4; // float32
                pub const m_bRecomputeSmoothNormalsAfterAnimation: usize = 0x8; // bool
                pub const m_bComputeDynamicMeshTensionAfterAnimation: usize = 0x9; // bool
                pub const m_bSmoothNormalsAcrossUvSeams: usize = 0xA; // bool
                pub const m_bEnableEyeBulgeDeformation: usize = 0xB; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTimeConditionNode__CDefinition = struct {
                pub const m_sourceStateNodeIdx: usize = 0x10; // int16
                pub const m_nInputValueNodeIdx: usize = 0x12; // int16
                pub const m_flComparand: usize = 0x14; // float32
                pub const m_type: usize = 0x18; // CNmTimeConditionNode::ComparisonType_t
                pub const m_operator: usize = 0x19; // CNmTimeConditionNode::Operator_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSyncEventIndexConditionNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_triggerMode: usize = 0x12; // CNmSyncEventIndexConditionNode::TriggerMode_t
                pub const m_syncEventIdx: usize = 0x14; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimStateMachineUpdater = struct {
                pub const m_states: usize = 0x8; // CUtlVector<CStateUpdateData>
                pub const m_transitions: usize = 0x20; // CUtlVector<CTransitionUpdateData>
                pub const m_startStateIndex: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CUnaryUpdateNode = struct {
                pub const m_pChildNode: usize = 0x60; // CAnimUpdateNodeRef
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDToFloatNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_defaultValue: usize = 0x14; // float32
                pub const m_IDs: usize = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
                pub const m_values: usize = 0x48; // CUtlLeanVectorFixedGrowable<float32,5>
            };
            // Parent: None
            // Field count: 17
            pub const CCompressorGroup = struct {
                pub const m_nTotalElementCount: usize = 0x0; // int32
                pub const m_szChannelClass: usize = 0x8; // CUtlVector<char*>
                pub const m_szVariableName: usize = 0x20; // CUtlVector<char*>
                pub const m_nType: usize = 0x38; // CUtlVector<fieldtype_t>
                pub const m_nFlags: usize = 0x50; // CUtlVector<int32>
                pub const m_szGrouping: usize = 0x68; // CUtlVector<CUtlString>
                pub const m_nCompressorIndex: usize = 0x80; // CUtlVector<int32>
                pub const m_szElementNames: usize = 0x98; // CUtlVector<CUtlVector<char*>>
                pub const m_nElementUniqueID: usize = 0xB0; // CUtlVector<CUtlVector<int32>>
                pub const m_nElementMask: usize = 0xC8; // CUtlVector<uint32>
                pub const m_vectorCompressor: usize = 0xF8; // CUtlVector<CCompressor<Vector>*>
                pub const m_quaternionCompressor: usize = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
                pub const m_intCompressor: usize = 0x128; // CUtlVector<CCompressor<int32>*>
                pub const m_boolCompressor: usize = 0x140; // CUtlVector<CCompressor<bool>*>
                pub const m_colorCompressor: usize = 0x158; // CUtlVector<CCompressor<Color>*>
                pub const m_vector2DCompressor: usize = 0x170; // CUtlVector<CCompressor<Vector2D>*>
                pub const m_vector4DCompressor: usize = 0x188; // CUtlVector<CCompressor<Vector4D>*>
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSelectorUpdateNode = struct {
                pub const m_children: usize = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_tags: usize = 0x78; // CUtlVector<int8>
                pub const m_blendCurve: usize = 0x94; // CBlendCurve
                pub const m_flBlendTime: usize = 0x9C; // CAnimValue<float32>
                pub const m_hParameter: usize = 0xA4; // CAnimParamHandle
                pub const m_nTagIndex: usize = 0xA8; // int32
                pub const m_eTagBehavior: usize = 0xAC; // SelectorTagBehavior_t
                pub const m_bResetOnChange: usize = 0xB0; // bool
                pub const m_bLockWhenWaning: usize = 0xB1; // bool
                pub const m_bSyncCyclesOnChange: usize = 0xB2; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmPercent_t = struct {
                pub const m_flValue: usize = 0x0; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStateMachineComponentUpdater = struct {
                pub const m_stateMachine: usize = 0x30; // CAnimStateMachineUpdater
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimUpdateNodeRef = struct {
                pub const m_nodeIndex: usize = 0x8; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_OutputConnection = struct {
                pub const m_SourceOutput: usize = 0x0; // PulseSymbol_t
                pub const m_TargetEntity: usize = 0x10; // PulseSymbol_t
                pub const m_TargetInput: usize = 0x20; // PulseSymbol_t
                pub const m_Param: usize = 0x30; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPhysSurfaceProperties = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nameHash: usize = 0x8; // uint32
                pub const m_baseNameHash: usize = 0xC; // uint32
                pub const m_bHidden: usize = 0x18; // bool
                pub const m_description: usize = 0x20; // CUtlString
                pub const m_physics: usize = 0x28; // CPhysSurfacePropertiesPhysics
                pub const m_vehicleParams: usize = 0x40; // CPhysSurfacePropertiesVehicle
                pub const m_audioSounds: usize = 0x48; // CPhysSurfacePropertiesSoundNames
                pub const m_audioParams: usize = 0xA8; // CPhysSurfacePropertiesAudio
            };
            // Parent: None
            // Field count: 0
            pub const CNmBoneMaskValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqPoseParamDesc = struct {
                pub const m_sName: usize = 0x0; // CBufferString
                pub const m_flStart: usize = 0x10; // float32
                pub const m_flEnd: usize = 0x14; // float32
                pub const m_flLoop: usize = 0x18; // float32
                pub const m_bLooping: usize = 0x1C; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_SetBodygroup = struct {
                pub const m_GroupName: usize = 0x48; // CGlobalSymbol
                pub const m_nChoice: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimMovement = struct {
                pub const endframe: usize = 0x0; // int32
                pub const motionflags: usize = 0x4; // int32
                pub const v0: usize = 0x8; // float32
                pub const v1: usize = 0xC; // float32
                pub const angle: usize = 0x10; // float32
                pub const vector: usize = 0x14; // Vector
                pub const position: usize = 0x20; // Vector
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CParticleRemapFloatInput = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FollowAttachmentData = struct {
                pub const m_boneIndex: usize = 0x0; // int32
                pub const m_attachmentHandle: usize = 0x4; // AttachmentHandle_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FootStepTrigger = struct {
                pub const m_tags: usize = 0x0; // CUtlVector<int32>
                pub const m_nFootIndex: usize = 0x18; // int32
                pub const m_triggerPhase: usize = 0x1C; // StepPhase
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSyncTrack__EventMarker_t = struct {
                pub const m_startTime: usize = 0x0; // NmPercent_t
                pub const m_ID: usize = 0x8; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPathMetricEvaluator = struct {
                pub const m_pathTimeSamples: usize = 0x50; // CUtlVector<float32>
                pub const m_flDistance: usize = 0x68; // float32
                pub const m_bExtrapolateMovement: usize = 0x6C; // bool
                pub const m_flMinExtrapolationSpeed: usize = 0x70; // float32
            };
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootLockUpdateNode = struct {
                pub const m_opFixedSettings: usize = 0x70; // FootLockPoseOpFixedSettings
                pub const m_footSettings: usize = 0xE0; // CUtlVector<FootFixedSettings>
                pub const m_hipShiftDamping: usize = 0xF8; // CAnimInputDamping
                pub const m_rootHeightDamping: usize = 0x110; // CAnimInputDamping
                pub const m_flStrideCurveScale: usize = 0x128; // float32
                pub const m_flStrideCurveLimitScale: usize = 0x12C; // float32
                pub const m_flStepHeightIncreaseScale: usize = 0x130; // float32
                pub const m_flStepHeightDecreaseScale: usize = 0x134; // float32
                pub const m_flHipShiftScale: usize = 0x138; // float32
                pub const m_flBlendTime: usize = 0x13C; // float32
                pub const m_flMaxRootHeightOffset: usize = 0x140; // float32
                pub const m_flMinRootHeightOffset: usize = 0x144; // float32
                pub const m_flTiltPlanePitchSpringStrength: usize = 0x148; // float32
                pub const m_flTiltPlaneRollSpringStrength: usize = 0x14C; // float32
                pub const m_bApplyFootRotationLimits: usize = 0x150; // bool
                pub const m_bApplyHipShift: usize = 0x151; // bool
                pub const m_bModulateStepHeight: usize = 0x152; // bool
                pub const m_bResetChild: usize = 0x153; // bool
                pub const m_bEnableVerticalCurvedPaths: usize = 0x154; // bool
                pub const m_bEnableRootHeightDamping: usize = 0x155; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmOrientationWarpEvent = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CNmIDValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseGraphExecutionHistoryNodeDesc_t = struct {
                pub const strCellDesc: usize = 0x0; // CBufferString
                pub const strBindingName: usize = 0x10; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const JiggleBoneSettings_t = struct {
                pub const m_nBoneIndex: usize = 0x0; // int32
                pub const m_flSpringStrength: usize = 0x4; // float32
                pub const m_flMaxTimeStep: usize = 0x8; // float32
                pub const m_flDamping: usize = 0xC; // float32
                pub const m_vBoundsMaxLS: usize = 0x10; // Vector
                pub const m_vBoundsMinLS: usize = 0x1C; // Vector
                pub const m_eSimSpace: usize = 0x28; // JiggleBoneSimSpace
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CJumpHelperUpdateNode = struct {
                pub const m_hTargetParam: usize = 0xB0; // CAnimParamHandle
                pub const m_flOriginalJumpMovement: usize = 0xB4; // Vector
                pub const m_flOriginalJumpDuration: usize = 0xC0; // float32
                pub const m_flJumpStartCycle: usize = 0xC4; // float32
                pub const m_flJumpEndCycle: usize = 0xC8; // float32
                pub const m_eCorrectionMethod: usize = 0xCC; // JumpCorrectionMethod
                pub const m_bTranslationAxis: usize = 0xD0; // bool[3]
                pub const m_bScaleSpeed: usize = 0xD3; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmControlParameterBoolNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 11
            pub const CNmChainLookatTask = struct {
                pub const m_nChainEndBoneIdx: usize = 0x58; // int32
                pub const m_nNumBonesInChain: usize = 0x5C; // int32
                pub const m_chainForwardDir: usize = 0x60; // Vector
                pub const m_flBlendWeight: usize = 0x6C; // float32
                pub const m_flHorizontalAngleLimitDegrees: usize = 0x70; // float32
                pub const m_flVerticalAngleLimitDegrees: usize = 0x74; // float32
                pub const m_lookatTarget: usize = 0x78; // Vector
                pub const m_bIsTargetInWorldSpace: usize = 0x84; // bool
                pub const m_bIsRunningFromDeserializedData: usize = 0x85; // bool
                pub const m_flHorizontalAngleDegrees: usize = 0x88; // float32
                pub const m_flVerticalAngleDegrees: usize = 0x8C; // float32
            };
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FootLockPoseOpFixedSettings = struct {
                pub const m_footInfo: usize = 0x0; // CUtlVector<FootFixedData_t>
                pub const m_hipDampingSettings: usize = 0x18; // CAnimInputDamping
                pub const m_nHipBoneIndex: usize = 0x30; // int32
                pub const m_ikSolverType: usize = 0x34; // IKSolverType
                pub const m_bApplyTilt: usize = 0x38; // bool
                pub const m_bApplyHipDrop: usize = 0x39; // bool
                pub const m_bAlwaysUseFallbackHinge: usize = 0x3A; // bool
                pub const m_bApplyFootRotationLimits: usize = 0x3B; // bool
                pub const m_bApplyLegTwistLimits: usize = 0x3C; // bool
                pub const m_flMaxFootHeight: usize = 0x40; // float32
                pub const m_flExtensionScale: usize = 0x44; // float32
                pub const m_flMaxLegTwist: usize = 0x48; // float32
                pub const m_bEnableLockBreaking: usize = 0x4C; // bool
                pub const m_flLockBreakTolerance: usize = 0x50; // float32
                pub const m_flLockBlendTime: usize = 0x54; // float32
                pub const m_bEnableStretching: usize = 0x58; // bool
                pub const m_flMaxStretchAmount: usize = 0x5C; // float32
                pub const m_flStretchExtensionScale: usize = 0x60; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneVelocityMetricEvaluator = struct {
                pub const m_nBoneIndex: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CWarpSectionAnimTag = struct {
                pub const m_bWarpPosition: usize = 0x50; // bool
                pub const m_bWarpOrientation: usize = 0x51; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_RandomColor = struct {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootMotion = struct {
                pub const m_strides: usize = 0x0; // CUtlVector<CFootStride>
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_bAdditive: usize = 0x20; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CJiggleBoneUpdateNode = struct {
                pub const m_opFixedData: usize = 0x70; // JiggleBoneSettingsList_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmConstVectorNode__CDefinition = struct {
                pub const m_value: usize = 0x10; // Vector
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyArrayElementNameKey
            pub const MoodAnimation_t = struct {
                pub const m_sName: usize = 0x0; // CModelAnimNameWithDeltas
                pub const m_flWeight: usize = 0x8; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CLODComponentUpdater = struct {
                pub const m_nServerLOD: usize = 0x30; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIsTargetSetNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPhysSurfacePropertiesVehicle = struct {
                pub const m_wheelDrag: usize = 0x0; // float32
                pub const m_wheelFrictionScale: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimDataChannelDesc = struct {
                pub const m_szChannelClass: usize = 0x0; // CBufferString
                pub const m_szVariableName: usize = 0x10; // CBufferString
                pub const m_nFlags: usize = 0x20; // int32
                pub const m_nType: usize = 0x24; // int32
                pub const m_szGrouping: usize = 0x28; // CBufferString
                pub const m_szDescription: usize = 0x38; // CBufferString
                pub const m_szElementNameArray: usize = 0x48; // CUtlVector<CBufferString>
                pub const m_nElementIndexArray: usize = 0x60; // CUtlVector<int32>
                pub const m_nElementMaskArray: usize = 0x78; // CUtlVector<uint32>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPairedSequenceComponentUpdater = struct {
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmParticleEvent = struct {
                pub const m_relevance: usize = 0x20; // CNmEventRelevance_t
                pub const m_type: usize = 0x24; // CNmParticleEvent::Type_t
                pub const m_hParticleSystem: usize = 0x28; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_tags: usize = 0x30; // CUtlString
                pub const m_bStopImmediately: usize = 0x38; // bool
                pub const m_bDetachFromOwner: usize = 0x39; // bool
                pub const m_bPlayEndCap: usize = 0x3A; // bool
                pub const m_attachmentPoint0: usize = 0x40; // CUtlString
                pub const m_attachmentType0: usize = 0x48; // ParticleAttachment_t
                pub const m_attachmentPoint1: usize = 0x50; // CUtlString
                pub const m_attachmentType1: usize = 0x58; // ParticleAttachment_t
                pub const m_config: usize = 0x60; // CUtlString
                pub const m_effectForConfig: usize = 0x68; // CUtlString
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMorphRectData = struct {
                pub const m_nXLeftDst: usize = 0x0; // int16
                pub const m_nYTopDst: usize = 0x2; // int16
                pub const m_flUWidthSrc: usize = 0x4; // float32
                pub const m_flVHeightSrc: usize = 0x8; // float32
                pub const m_bundleDatas: usize = 0x10; // CUtlVector<CMorphBundleData>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimFoot = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_vBallOffset: usize = 0x8; // Vector
                pub const m_vHeelOffset: usize = 0x14; // Vector
                pub const m_ankleBoneIndex: usize = 0x20; // int32
                pub const m_toeBoneIndex: usize = 0x24; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParentConstraint = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCachedVectorNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_mode: usize = 0x14; // NmCachedValueMode_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmStateNode__TimedEvent_t = struct {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_flTimeValueSeconds: usize = 0x8; // float32
                pub const m_comparisionOperator: usize = 0xC; // CNmStateNode::TimedEvent_t::Comparison_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootPositionMetricEvaluator = struct {
                pub const m_footIndices: usize = 0x50; // CUtlVector<int32>
                pub const m_bIgnoreSlope: usize = 0x68; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CParticleVariableRef = struct {
                pub const m_variableName: usize = 0x0; // CKV3MemberNameWithStorage
                pub const m_variableType: usize = 0x38; // CPulseValueFullType
            };
            // Parent: None
            // Field count: 1
            pub const HSequence = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDampedValueUpdateItem = struct {
                pub const m_damping: usize = 0x0; // CAnimInputDamping
                pub const m_hParamIn: usize = 0x20; // CAnimParamHandle
                pub const m_hParamOut: usize = 0x22; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimLocalHierarchy = struct {
                pub const m_sBone: usize = 0x0; // CBufferString
                pub const m_sNewParent: usize = 0x10; // CBufferString
                pub const m_nStartFrame: usize = 0x20; // int32
                pub const m_nPeakFrame: usize = 0x24; // int32
                pub const m_nTailFrame: usize = 0x28; // int32
                pub const m_nEndFrame: usize = 0x2C; // int32
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBlendUpdateNode = struct {
                pub const m_children: usize = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                pub const m_sortedOrder: usize = 0x78; // CUtlVector<uint8>
                pub const m_targetValues: usize = 0x90; // CUtlVector<float32>
                pub const m_blendValueSource: usize = 0xAC; // AnimValueSource
                pub const m_eLinearRootMotionBlendMode: usize = 0xB0; // LinearRootMotionBlendMode_t
                pub const m_paramIndex: usize = 0xB4; // CAnimParamHandle
                pub const m_damping: usize = 0xB8; // CAnimInputDamping
                pub const m_blendKeyType: usize = 0xD0; // BlendKeyType
                pub const m_bLockBlendOnReset: usize = 0xD4; // bool
                pub const m_bSyncCycles: usize = 0xD5; // bool
                pub const m_bLoop: usize = 0xD6; // bool
                pub const m_bLockWhenWaning: usize = 0xD7; // bool
                pub const m_bIsAngle: usize = 0xD8; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseGraphExecutionHistoryEntry_t = struct {
                pub const nCursorID: usize = 0x0; // PulseCursorID_t
                pub const nEditorID: usize = 0x4; // PulseDocNodeID_t
                pub const flExecTime: usize = 0x8; // float32
                pub const unFlags: usize = 0xC; // uint32
                pub const tagName: usize = 0x10; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CQuaternionAnimParameter = struct {
                pub const m_defaultValue: usize = 0x80; // Quaternion
                pub const m_bInterpolate: usize = 0x90; // bool
            };
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PermModelData_t = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_modelInfo: usize = 0x8; // PermModelInfo_t
                pub const m_ExtParts: usize = 0x60; // CUtlVector<PermModelExtPart_t>
                pub const m_refMeshes: usize = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
                pub const m_refMeshGroupMasks: usize = 0x90; // CUtlVector<uint64>
                pub const m_refPhysGroupMasks: usize = 0xA8; // CUtlVector<uint64>
                pub const m_refLODGroupMasks: usize = 0xC0; // CUtlVector<uint8>
                pub const m_lodGroupSwitchDistances: usize = 0xD8; // CUtlVector<float32>
                pub const m_refPhysicsData: usize = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                pub const m_refPhysicsHitboxData: usize = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                pub const m_refAnimGroups: usize = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                pub const m_refSequenceGroups: usize = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
                pub const m_meshGroups: usize = 0x150; // CUtlVector<CUtlString>
                pub const m_materialGroups: usize = 0x168; // CUtlVector<MaterialGroup_t>
                pub const m_nDefaultMeshGroupMask: usize = 0x180; // uint64
                pub const m_modelSkeleton: usize = 0x188; // ModelSkeletonData_t
                pub const m_remappingTable: usize = 0x230; // CUtlVector<int16>
                pub const m_remappingTableStarts: usize = 0x248; // CUtlVector<uint16>
                pub const m_boneFlexDrivers: usize = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
                pub const m_pModelConfigList: usize = 0x278; // CModelConfigList*
                pub const m_BodyGroupsHiddenInTools: usize = 0x280; // CUtlVector<CUtlString>
                pub const m_refAnimIncludeModels: usize = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
                pub const m_AnimatedMaterialAttributes: usize = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
                pub const m_animGraph2Refs: usize = 0x2C8; // CUtlVector<ModelAnimGraph2Ref_t>
                pub const m_vecNmSkeletonRefs: usize = 0x2E0; // CUtlVector<CStrongHandle<InfoForResourceTypeCNmSkeleton>>
            };
            // Parent: None
            // Field count: 1
            pub const PulseCursorYieldToken_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            pub const CNmSampleTask = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStaticPoseCacheBuilder = struct {
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelMeshBufferData_t = struct {
                pub const m_nBlockIndex: usize = 0x0; // int32
                pub const m_nElementCount: usize = 0x4; // uint32
                pub const m_nElementSizeInBytes: usize = 0x8; // uint32
                pub const m_bMeshoptCompressed: usize = 0xC; // bool
                pub const m_bMeshoptIndexSequence: usize = 0xD; // bool
                pub const m_bCompressedZSTD: usize = 0xE; // bool
                pub const m_bCreateBufferSRV: usize = 0xF; // bool
                pub const m_bCreateBufferUAV: usize = 0x10; // bool
                pub const m_bCreateRawBuffer: usize = 0x11; // bool
                pub const m_bCreatePooledBuffer: usize = 0x12; // bool
                pub const m_nBufferUsage: usize = 0x13; // uint8
                pub const m_inputLayoutFields: usize = 0x18; // CUtlVector<RenderInputLayoutField_t>
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSequenceGroupData = struct {
                pub const m_sName: usize = 0x10; // CBufferString
                pub const m_nFlags: usize = 0x20; // uint32
                pub const m_localSequenceNameArray: usize = 0x28; // CUtlVector<CBufferString>
                pub const m_localS1SeqDescArray: usize = 0x40; // CUtlVector<CSeqS1SeqDesc>
                pub const m_localMultiSeqDescArray: usize = 0x58; // CUtlVector<CSeqS1SeqDesc>
                pub const m_localSynthAnimDescArray: usize = 0x70; // CUtlVector<CSeqSynthAnimDesc>
                pub const m_localCmdSeqDescArray: usize = 0x88; // CUtlVector<CSeqCmdSeqDesc>
                pub const m_localBoneMaskArray: usize = 0xA0; // CUtlVector<CSeqBoneMaskList>
                pub const m_localScaleSetArray: usize = 0xB8; // CUtlVector<CSeqScaleSet>
                pub const m_localBoneNameArray: usize = 0xD0; // CUtlVector<CBufferString>
                pub const m_localNodeName: usize = 0xE8; // CBufferString
                pub const m_localPoseParamArray: usize = 0xF8; // CUtlVector<CSeqPoseParamDesc>
                pub const m_keyValues: usize = 0x110; // KeyValues3
                pub const m_localIKAutoplayLockArray: usize = 0x120; // CUtlVector<CSeqIKLock>
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStateMachineUpdateNode = struct {
                pub const m_stateMachine: usize = 0x70; // CAnimStateMachineUpdater
                pub const m_stateData: usize = 0xC8; // CUtlVector<CStateNodeStateData>
                pub const m_transitionData: usize = 0xE0; // CUtlVector<CStateNodeTransitionData>
                pub const m_bBlockWaningTags: usize = 0xFC; // bool
                pub const m_bLockStateWhenWaning: usize = 0xFD; // bool
                pub const m_bResetWhenActivated: usize = 0xFE; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAimMatrixUpdateNode = struct {
                pub const m_opFixedSettings: usize = 0x70; // AimMatrixOpFixedSettings_t
                pub const m_target: usize = 0x168; // AnimVectorSource
                pub const m_paramIndex: usize = 0x16C; // CAnimParamHandle
                pub const m_hSequence: usize = 0x170; // HSequence
                pub const m_bResetChild: usize = 0x174; // bool
                pub const m_bLockWhenWaning: usize = 0x175; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonAnimCapture_t__Frame_t = struct {
                pub const m_flTime: usize = 0x0; // float32
                pub const m_Stamp: usize = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                pub const m_Transform: usize = 0x20; // CTransform
                pub const m_bTeleport: usize = 0x40; // bool
                pub const m_CompositeBones: usize = 0x48; // CUtlVector<CTransform>
                pub const m_SimStateBones: usize = 0x60; // CUtlVector<CTransform>
                pub const m_FeModelAnims: usize = 0x78; // CUtlVector<CTransform>
                pub const m_FeModelPos: usize = 0x90; // CUtlVector<VectorAligned>
                pub const m_FlexControllerWeights: usize = 0xA8; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_Command = struct {
                pub const m_Command: usize = 0x48; // CUtlString
                pub const m_Args: usize = 0x50; // KeyValues3
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimEventDefinition = struct {
                pub const m_nFrame: usize = 0x8; // int32
                pub const m_nEndFrame: usize = 0xC; // int32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flDuration: usize = 0x14; // float32
                pub const m_EventData: usize = 0x18; // KeyValues3
                pub const m_sLegacyOptions: usize = 0x28; // CBufferString
                pub const m_sEventName: usize = 0x38; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmRootMotionData = struct {
                pub const m_transforms: usize = 0x0; // CUtlVector<CTransform>
                pub const m_nNumFrames: usize = 0x18; // int32
                pub const m_flAverageLinearVelocity: usize = 0x1C; // float32
                pub const m_flAverageAngularVelocityRadians: usize = 0x20; // float32
                pub const m_totalDelta: usize = 0x30; // CTransform
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseGraphExecutionHistory = struct {
                pub const m_nInstanceID: usize = 0x0; // PulseGraphInstanceID_t
                pub const m_strFileName: usize = 0x8; // CUtlString
                pub const m_vecHistory: usize = 0x10; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
                pub const m_mapCellDesc: usize = 0x28; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
                pub const m_mapCursorDesc: usize = 0x50; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimScriptHandle = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFlexOp = struct {
                pub const m_OpCode: usize = 0x0; // FlexOpCode_t
                pub const m_Data: usize = 0x4; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CHitReactUpdateNode = struct {
                pub const m_opFixedSettings: usize = 0x70; // HitReactFixedSettings_t
                pub const m_triggerParam: usize = 0xBC; // CAnimParamHandle
                pub const m_hitBoneParam: usize = 0xBE; // CAnimParamHandle
                pub const m_hitOffsetParam: usize = 0xC0; // CAnimParamHandle
                pub const m_hitDirectionParam: usize = 0xC2; // CAnimParamHandle
                pub const m_hitStrengthParam: usize = 0xC4; // CAnimParamHandle
                pub const m_flMinDelayBetweenHits: usize = 0xC8; // float32
                pub const m_bResetChild: usize = 0xCC; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CLookAtUpdateNode = struct {
                pub const m_opFixedSettings: usize = 0x70; // LookAtOpFixedSettings_t
                pub const m_target: usize = 0x148; // AnimVectorSource
                pub const m_paramIndex: usize = 0x14C; // CAnimParamHandle
                pub const m_weightParamIndex: usize = 0x14E; // CAnimParamHandle
                pub const m_bResetChild: usize = 0x150; // bool
                pub const m_bLockWhenWaning: usize = 0x151; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimBone = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_parent: usize = 0x10; // int32
                pub const m_pos: usize = 0x14; // Vector
                pub const m_quat: usize = 0x20; // QuaternionStorage
                pub const m_scale: usize = 0x30; // float32
                pub const m_qAlignment: usize = 0x34; // QuaternionStorage
                pub const m_flags: usize = 0x44; // int32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimParameterManagerUpdater = struct {
                pub const m_parameters: usize = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                pub const m_idToIndexMap: usize = 0x30; // CUtlHashtable<AnimParamID,int32>
                pub const m_nameToIndexMap: usize = 0x50; // CUtlHashtable<CUtlString,int32>
                pub const m_indexToHandle: usize = 0x70; // CUtlVector<CAnimParamHandle>
                pub const m_autoResetParams: usize = 0x88; // CUtlVector<std::pair<CAnimParamHandle,CAnimVariant>>
                pub const m_autoResetMap: usize = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const BoneDemoCaptureSettings_t = struct {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_flErrorSplineRotationMax: usize = 0x8; // float32
                pub const m_flErrorSplineTranslationMax: usize = 0xC; // float32
                pub const m_flErrorSplineScaleMax: usize = 0x10; // float32
                pub const m_flErrorQuantizationRotationMax: usize = 0x14; // float32
                pub const m_flErrorQuantizationTranslationMax: usize = 0x18; // float32
                pub const m_flErrorQuantizationScaleMax: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 2
            pub const CBoneConstraintPoseSpaceMorph__Input_t = struct {
                pub const m_inputValue: usize = 0x0; // Vector
                pub const m_outputWeightList: usize = 0x10; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyArrayElementNameKey
            pub const MoodAnimationLayer_t = struct {
                pub const m_sName: usize = 0x0; // CUtlString
                pub const m_bActiveListening: usize = 0x8; // bool
                pub const m_bActiveTalking: usize = 0x9; // bool
                pub const m_layerAnimations: usize = 0x10; // CUtlVector<MoodAnimation_t>
                pub const m_flIntensity: usize = 0x28; // CRangeFloat
                pub const m_flDurationScale: usize = 0x30; // CRangeFloat
                pub const m_bScaleWithInts: usize = 0x38; // bool
                pub const m_flNextStart: usize = 0x3C; // CRangeFloat
                pub const m_flStartOffset: usize = 0x44; // CRangeFloat
                pub const m_flEndOffset: usize = 0x4C; // CRangeFloat
                pub const m_flFadeIn: usize = 0x54; // float32
                pub const m_flFadeOut: usize = 0x58; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSpeedScaleUpdateNode = struct {
                pub const m_paramIndex: usize = 0x70; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSequenceTagSpans = struct {
                pub const m_sSequenceName: usize = 0x0; // CGlobalSymbol
                pub const m_tags: usize = 0x8; // CUtlVector<TagSpan_t>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_SetBodygroupOnAttachedModels = struct {
                pub const m_GroupName: usize = 0x48; // CUtlString
                pub const m_nChoice: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCurrentVelocityMetricEvaluator = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CNmBoolValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimReplayFrame = struct {
                pub const m_inputDataBlocks: usize = 0x10; // CUtlVector<CUtlBinaryBlock>
                pub const m_instanceData: usize = 0x28; // CUtlBinaryBlock
                pub const m_startingLocalToWorldTransform: usize = 0x40; // CTransform
                pub const m_localToWorldTransform: usize = 0x60; // CTransform
                pub const m_timeStamp: usize = 0x80; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTransitionEvent = struct {
                pub const m_rule: usize = 0x20; // NmTransitionRule_t
                pub const m_ID: usize = 0x28; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIKRig = struct {
                pub const m_skeleton: usize = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                pub const m_vecBodies: usize = 0x8; // CUtlVector<CNmIKBody>
                pub const m_vecJoints: usize = 0x20; // CUtlVector<CNmIKJoint>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatCurveEvent = struct {
                pub const m_ID: usize = 0x20; // CGlobalSymbol
                pub const m_curve: usize = 0x28; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            // MCustomFGDMetadata
            pub const CParticleTransformInput = struct {
                pub const m_nType: usize = 0x10; // ParticleTransformType_t
                pub const m_NamedValue: usize = 0x18; // CParticleNamedValueRef
                pub const m_bFollowNamedValue: usize = 0x58; // bool
                pub const m_bSupportsDisabled: usize = 0x59; // bool
                pub const m_bUseOrientation: usize = 0x5A; // bool
                pub const m_nControlPoint: usize = 0x5C; // int32
                pub const m_nControlPointRangeMax: usize = 0x60; // int32
                pub const m_flEndCPGrowthTime: usize = 0x64; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPathAnimMotorUpdaterBase = struct {
                pub const m_bLockToPath: usize = 0x20; // bool
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PGDInstruction_t = struct {
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
                pub const m_nDomainValueIdx: usize = 0x22; // PulseRuntimeDomainValueIndex_t
                pub const m_nBlackboardReferenceIdx: usize = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFootstepEventPercentageThroughNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_phaseCondition: usize = 0x12; // NmFootPhaseCondition_t
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AimCameraOpFixedSettings_t = struct {
                pub const m_nChainIndex: usize = 0x0; // int32
                pub const m_nCameraJointIndex: usize = 0x4; // int32
                pub const m_nPelvisJointIndex: usize = 0x8; // int32
                pub const m_nClavicleLeftJointIndex: usize = 0xC; // int32
                pub const m_nClavicleRightJointIndex: usize = 0x10; // int32
                pub const m_nDepenetrationJointIndex: usize = 0x14; // int32
                pub const m_propJoints: usize = 0x18; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonAnimCapture_t__Camera_t = struct {
                pub const m_tmCamera: usize = 0x0; // CTransform
                pub const m_flTime: usize = 0x20; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphEventConditionNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
                pub const m_conditions: usize = 0x18; // CUtlVectorFixedGrowable<CNmGraphEventConditionNode::Condition_t,5>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFollowAttachmentUpdateNode = struct {
                pub const m_opFixedData: usize = 0x70; // FollowAttachmentSettings_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMovementComponentUpdater = struct {
                pub const m_motors: usize = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
                pub const m_facingDamping: usize = 0x48; // CAnimInputDamping
                pub const m_nDefaultMotorIndex: usize = 0x68; // int32
                pub const m_flDefaultRunSpeed: usize = 0x6C; // float32
                pub const m_bMoveVarsDisabled: usize = 0x70; // bool
                pub const m_bNetworkPath: usize = 0x71; // bool
                pub const m_bNetworkFacing: usize = 0x72; // bool
                pub const m_paramHandles: usize = 0x73; // CAnimParamHandle[34]
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_SetMaterialGroup = struct {
                pub const m_MaterialGroupName: usize = 0x48; // CUtlString
            };
            // Parent: None
            // Field count: 0
            pub const IParticleEffect = struct {
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIKJoint = struct {
                pub const m_nParentIndex: usize = 0x0; // int32
                pub const m_nBodyIndex: usize = 0x4; // int32
                pub const m_xLocalFrame: usize = 0x10; // CTransform
                pub const m_flSwingLimit: usize = 0x30; // float32
                pub const m_flMinTwistLimit: usize = 0x34; // float32
                pub const m_flMaxTwistLimit: usize = 0x38; // float32
                pub const m_flWeight: usize = 0x3C; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFutureFacingMetricEvaluator = struct {
                pub const m_flDistance: usize = 0x50; // float32
                pub const m_flTime: usize = 0x54; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmCompressionSettings_t = struct {
                pub const m_translationRangeX: usize = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                pub const m_translationRangeY: usize = 0x8; // NmCompressionSettings_t::QuantizationRange_t
                pub const m_translationRangeZ: usize = 0x10; // NmCompressionSettings_t::QuantizationRange_t
                pub const m_scaleRange: usize = 0x18; // NmCompressionSettings_t::QuantizationRange_t
                pub const m_constantRotation: usize = 0x20; // Quaternion
                pub const m_bIsRotationStatic: usize = 0x30; // bool
                pub const m_bIsTranslationStatic: usize = 0x31; // bool
                pub const m_bIsScaleStatic: usize = 0x32; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_Variable = struct {
                pub const m_Name: usize = 0x0; // PulseSymbol_t
                pub const m_Description: usize = 0x10; // CUtlString
                pub const m_Type: usize = 0x18; // CPulseValueFullType
                pub const m_DefaultValue: usize = 0x30; // KeyValues3
                pub const m_nKeysSource: usize = 0x44; // PulseVariableKeysSource_t
                pub const m_bIsPublicBlackboardVariable: usize = 0x48; // bool
                pub const m_bIsObservable: usize = 0x49; // bool
                pub const m_nEditorNodeID: usize = 0x4C; // PulseDocNodeID_t
            };
            // Parent: None
            // Field count: 1
            pub const PARTICLE_EHANDLE__ = struct {
                pub const unused: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAddUpdateNode = struct {
                pub const m_footMotionTiming: usize = 0x94; // BinaryNodeChildOption
                pub const m_bApplyToFootMotion: usize = 0x98; // bool
                pub const m_bApplyChannelsSeparately: usize = 0x99; // bool
                pub const m_bUseModelSpace: usize = 0x9A; // bool
                pub const m_bApplyScale: usize = 0x9B; // bool
            };
            // Parent: None
            // Field count: 1
            pub const CAnimEnum = struct {
                pub const m_value: usize = 0x0; // uint8
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDemoSettingsComponentUpdater = struct {
                pub const m_settings: usize = 0x30; // CAnimDemoCaptureSettings
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimDecoder = struct {
                pub const m_szName: usize = 0x0; // CBufferString
                pub const m_nVersion: usize = 0x10; // int32
                pub const m_nType: usize = 0x14; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCachedTargetNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_mode: usize = 0x14; // NmCachedValueMode_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CPerParticleFloatInput = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmConstBoolNode__CDefinition = struct {
                pub const m_bValue: usize = 0x10; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBitFlags = struct {
                pub const m_flags: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootStride = struct {
                pub const m_definition: usize = 0x0; // CFootCycleDefinition
                pub const m_trajectories: usize = 0x40; // CFootTrajectories
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSceneObjectData__RTProxyDrawDescriptor_t = struct {
                pub const m_drawDesc: usize = 0x0; // CMaterialDrawDescriptor
                pub const m_mWorldFromLocal: usize = 0x108; // matrix3x4_t
                pub const m_nVertexAlbedoFormat: usize = 0x138; // VertexAlbedoFormat_t
                pub const m_nVertexAlbedoVB: usize = 0x139; // int8
                pub const m_nVertexAlbedoOffset: usize = 0x13A; // uint16
                pub const m_nVertexAlbedoStride: usize = 0x13C; // uint16
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmLegacyEvent = struct {
                pub const m_animEventClassName: usize = 0x20; // CUtlString
                pub const m_KV: usize = 0x28; // KeyValues3
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStateNodeStateData = struct {
                pub const m_pChild: usize = 0x0; // CAnimUpdateNodeRef
                pub const m_bExclusiveRootMotion: usize = 0x0; // bitfield:1
                pub const m_bExclusiveRootMotionFirstFrame: usize = 0x0; // bitfield:1
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CFootstepLandedAnimTag = struct {
                pub const m_FootstepType: usize = 0x58; // FootstepLandedFootSoundType_t
                pub const m_OverrideSoundName: usize = 0x60; // CUtlString
                pub const m_DebugAnimSourceString: usize = 0x68; // CUtlString
                pub const m_BoneName: usize = 0x70; // CUtlString
                pub const m_footstepJumpPhase: usize = 0x78; // FootstepJumpPhase_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CEnumAnimParameter = struct {
                pub const m_defaultValue: usize = 0x88; // uint8
                pub const m_enumOptions: usize = 0x90; // CUtlVector<CUtlString>
                pub const m_vecEnumReferenced: usize = 0xA8; // CUtlVector<uint64>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CHandshakeAnimTagBase = struct {
                pub const m_bIsDisableTag: usize = 0x50; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimTagID = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimFrameSegment = struct {
                pub const m_nUniqueFrameIndex: usize = 0x0; // int32
                pub const m_nLocalElementMasks: usize = 0x4; // uint32
                pub const m_nLocalChannel: usize = 0x8; // int32
                pub const m_container: usize = 0x10; // CUtlBinaryBlock
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSlopeComponentUpdater = struct {
                pub const m_flTraceDistance: usize = 0x34; // float32
                pub const m_hSlopeAngle: usize = 0x38; // CAnimParamHandle
                pub const m_hSlopeAngleFront: usize = 0x3A; // CAnimParamHandle
                pub const m_hSlopeAngleSide: usize = 0x3C; // CAnimParamHandle
                pub const m_hSlopeHeading: usize = 0x3E; // CAnimParamHandle
                pub const m_hSlopeNormal: usize = 0x40; // CAnimParamHandle
                pub const m_hSlopeNormal_WorldSpace: usize = 0x42; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CAnimInputDamping = struct {
                pub const m_speedFunction: usize = 0x8; // DampingSpeedFunction
                pub const m_fSpeedScale: usize = 0xC; // float32
                pub const m_fFallingSpeedScale: usize = 0x10; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIKBody = struct {
                pub const m_flMass: usize = 0x0; // float32
                pub const m_vLocalMassCenter: usize = 0x4; // Vector
                pub const m_vRadius: usize = 0x10; // Vector
                pub const m_flResistance: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CHitBoxSet = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nNameHash: usize = 0x8; // uint32
                pub const m_HitBoxes: usize = 0x10; // CUtlVector<CHitBox>
                pub const m_SourceFilename: usize = 0x28; // CUtlString
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ChainToSolveData_t = struct {
                pub const m_nChainIndex: usize = 0x0; // int32
                pub const m_SolverSettings: usize = 0x4; // IKSolverSettings_t
                pub const m_TargetSettings: usize = 0x10; // IKTargetSettings_t
                pub const m_DebugSetting: usize = 0x38; // SolveIKChainAnimNodeDebugSetting
                pub const m_flDebugNormalizedValue: usize = 0x3C; // float32
                pub const m_vDebugOffset: usize = 0x40; // VectorAligned
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CConstraintSlave = struct {
                pub const m_qBaseOrientation: usize = 0x0; // Quaternion
                pub const m_vBasePosition: usize = 0x10; // Vector
                pub const m_nBoneHash: usize = 0x1C; // uint32
                pub const m_flWeight: usize = 0x20; // float32
                pub const m_sName: usize = 0x28; // CUtlString
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeOutputIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootCycleDefinition = struct {
                pub const m_vStancePositionMS: usize = 0x0; // Vector
                pub const m_vMidpointPositionMS: usize = 0xC; // Vector
                pub const m_flStanceDirectionMS: usize = 0x18; // float32
                pub const m_vToStrideStartPos: usize = 0x1C; // Vector
                pub const m_stanceCycle: usize = 0x28; // CAnimCycle
                pub const m_footLiftCycle: usize = 0x2C; // CFootCycle
                pub const m_footOffCycle: usize = 0x30; // CFootCycle
                pub const m_footStrikeCycle: usize = 0x34; // CFootCycle
                pub const m_footLandCycle: usize = 0x38; // CFootCycle
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CVirtualAnimParameter = struct {
                pub const m_expressionString: usize = 0x70; // CUtlString
                pub const m_eParamType: usize = 0x78; // AnimParamType_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionMetricEvaluator = struct {
                pub const m_means: usize = 0x18; // CUtlVector<float32>
                pub const m_standardDeviations: usize = 0x30; // CUtlVector<float32>
                pub const m_flWeight: usize = 0x48; // float32
                pub const m_nDimensionStartIndex: usize = 0x4C; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFutureVelocityMetricEvaluator = struct {
                pub const m_flDistance: usize = 0x50; // float32
                pub const m_flStoppingDistance: usize = 0x54; // float32
                pub const m_flTargetSpeed: usize = 0x58; // float32
                pub const m_eMode: usize = 0x5C; // VelocityMetricMode
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSkeleton__SecondarySkeleton_t = struct {
                pub const m_attachToBoneID: usize = 0x0; // CGlobalSymbol
                pub const m_skeleton: usize = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimUpdateNodeBase = struct {
                pub const m_nodePath: usize = 0x18; // CAnimNodePath
                pub const m_networkMode: usize = 0x48; // AnimNodeNetworkMode
                pub const m_name: usize = 0x50; // CUtlString
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSetParameterActionUpdater = struct {
                pub const m_hParam: usize = 0x18; // CAnimParamHandle
                pub const m_value: usize = 0x1A; // CAnimVariant
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFixedWeightBoneMaskNode__CDefinition = struct {
                pub const m_flBoneWeight: usize = 0x10; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonAnimCapture_t__FrameStamp_t = struct {
                pub const m_flTime: usize = 0x0; // float32
                pub const m_flEntitySimTime: usize = 0x4; // float32
                pub const m_bTeleportTick: usize = 0x8; // bool
                pub const m_bPredicted: usize = 0x9; // bool
                pub const m_flCurTime: usize = 0xC; // float32
                pub const m_flRealTime: usize = 0x10; // float32
                pub const m_nFrameCount: usize = 0x14; // int32
                pub const m_nTickCount: usize = 0x18; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_DomainValue = struct {
                pub const m_nType: usize = 0x0; // PulseDomainValueType_t
                pub const m_Value: usize = 0x8; // CGlobalSymbolCaseSensitive
                pub const m_RequiredRuntimeType: usize = 0x10; // CPulseValueFullType
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBonePositionMetricEvaluator = struct {
                pub const m_nBoneIndex: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRenderBufferBinding = struct {
                pub const m_hBuffer: usize = 0x0; // uint64
                pub const m_nBindOffsetBytes: usize = 0x10; // uint32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CParticleCollectionRendererFloatInput = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmParameterizedBlendNode__Parameterization_t = struct {
                pub const m_blendRanges: usize = 0x0; // CUtlLeanVectorFixedGrowable<CNmParameterizedBlendNode::BlendRange_t,5>
                pub const m_parameterRange: usize = 0x48; // Range_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmEntityAttributeIntEvent = struct {
                pub const m_nIntValue: usize = 0x38; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmNotNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMeshletDescriptor = struct {
                pub const m_PackedAABB: usize = 0x0; // PackedAABB_t
                pub const m_CullingData: usize = 0x8; // CDrawCullingData
                pub const m_nVertexOffset: usize = 0xC; // uint32
                pub const m_nTriangleOffset: usize = 0x10; // uint32
                pub const m_nVertexCount: usize = 0x14; // uint8
                pub const m_nTriangleCount: usize = 0x15; // uint8
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMorphSetData = struct {
                pub const m_nWidth: usize = 0x10; // int32
                pub const m_nHeight: usize = 0x14; // int32
                pub const m_bundleTypes: usize = 0x18; // CUtlVector<MorphBundleType_t>
                pub const m_morphDatas: usize = 0x30; // CUtlVector<CMorphData>
                pub const m_pTextureAtlas: usize = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_FlexDesc: usize = 0x50; // CUtlVector<CFlexDesc>
                pub const m_FlexControllers: usize = 0x68; // CUtlVector<CFlexController>
                pub const m_FlexRules: usize = 0x80; // CUtlVector<CFlexRule>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmAndNode__CDefinition = struct {
                pub const m_conditionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMorphConstraint = struct {
                pub const m_sTargetMorph: usize = 0x60; // CUtlString
                pub const m_nSlaveChannel: usize = 0x68; // int32
                pub const m_flMin: usize = 0x6C; // float32
                pub const m_flMax: usize = 0x70; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CClothSettingsAnimTag = struct {
                pub const m_flStiffness: usize = 0x58; // float32
                pub const m_flEaseIn: usize = 0x5C; // float32
                pub const m_flEaseOut: usize = 0x60; // float32
                pub const m_nVertexSet: usize = 0x68; // CUtlString
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimDesc_Flag = struct {
                pub const m_bLooping: usize = 0x0; // bool
                pub const m_bAllZeros: usize = 0x1; // bool
                pub const m_bHidden: usize = 0x2; // bool
                pub const m_bDelta: usize = 0x3; // bool
                pub const m_bLegacyWorldspace: usize = 0x4; // bool
                pub const m_bModelDoc: usize = 0x5; // bool
                pub const m_bImplicitSeqIgnoreDelta: usize = 0x6; // bool
                pub const m_bAnimGraphAdditive: usize = 0x7; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBlend2DNode__CDefinition = struct {
                pub const m_sourceNodeIndices: usize = 0x10; // CUtlVectorFixedGrowable<int16,5>
                pub const m_nInputParameterNodeIdx0: usize = 0x38; // int16
                pub const m_nInputParameterNodeIdx1: usize = 0x3A; // int16
                pub const m_values: usize = 0x40; // CUtlVectorFixedGrowable<Vector2D,10>
                pub const m_indices: usize = 0xA8; // CUtlVectorFixedGrowable<uint8,30>
                pub const m_hullIndices: usize = 0xE0; // CUtlVectorFixedGrowable<uint8,10>
                pub const m_bAllowLooping: usize = 0x108; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBlendCurve = struct {
                pub const m_flControlPoint1: usize = 0x0; // float32
                pub const m_flControlPoint2: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphNode__CDefinition = struct {
                pub const m_nNodeIdx: usize = 0x8; // int16
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGraphVisualizerSphere = struct {
                pub const m_vWsPosition: usize = 0x40; // VectorAligned
                pub const m_flRadius: usize = 0x50; // float32
                pub const m_Color: usize = 0x54; // Color
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmClip__ModelSpaceSamplingChainLink_t = struct {
                pub const m_nBoneIdx: usize = 0x0; // int32
                pub const m_nParentBoneIdx: usize = 0x4; // int32
                pub const m_nParentChainLinkIdx: usize = 0x8; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimUserDifference = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_nType: usize = 0x10; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmDurationScaleNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTransitionUpdateData = struct {
                pub const m_srcStateIndex: usize = 0x0; // uint8
                pub const m_destStateIndex: usize = 0x1; // uint8
                pub const m_nHandshakeMaskToDisableFirst: usize = 0x0; // bitfield:7
                pub const m_bDisabled: usize = 0x0; // bitfield:1
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeBlackboardReferenceIndex_t = struct {
                pub const m_Value: usize = 0x0; // int16
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CMovementHandshakeAnimTag = struct {
            };
            // Parent: None
            // Field count: 2
            pub const CBoneConstraintPoseSpaceBone__Input_t = struct {
                pub const m_inputValue: usize = 0x0; // Vector
                pub const m_outputTransformList: usize = 0x10; // CUtlVector<CTransform>
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqMultiFetch = struct {
                pub const m_flags: usize = 0x0; // CSeqMultiFetchFlag
                pub const m_localReferenceArray: usize = 0x8; // CUtlVector<int16>
                pub const m_nGroupSize: usize = 0x20; // int32[2]
                pub const m_nLocalPose: usize = 0x28; // int32[2]
                pub const m_poseKeyArray0: usize = 0x30; // CUtlVector<float32>
                pub const m_poseKeyArray1: usize = 0x48; // CUtlVector<float32>
                pub const m_nLocalCyclePoseParameter: usize = 0x60; // int32
                pub const m_bCalculatePoseParameters: usize = 0x64; // bool
                pub const m_bFixedBlendWeight: usize = 0x65; // bool
                pub const m_flFixedBlendWeightVals: usize = 0x68; // float32[2]
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPhysSurfacePropertiesSoundNames = struct {
                pub const m_impactSoft: usize = 0x0; // CUtlString
                pub const m_impactHard: usize = 0x8; // CUtlString
                pub const m_scrapeSmooth: usize = 0x10; // CUtlString
                pub const m_scrapeRough: usize = 0x18; // CUtlString
                pub const m_bulletImpact: usize = 0x20; // CUtlString
                pub const m_rolling: usize = 0x28; // CUtlString
                pub const m_break: usize = 0x30; // CUtlString
                pub const m_strain: usize = 0x38; // CUtlString
                pub const m_meleeImpact: usize = 0x40; // CUtlString
                pub const m_pushOff: usize = 0x48; // CUtlString
                pub const m_skidStop: usize = 0x50; // CUtlString
                pub const m_resonant: usize = 0x58; // CUtlString
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmBoneMaskSetDefinition_t = struct {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_primaryWeightList: usize = 0x8; // CNmBoneWeightList
                pub const m_secondaryWeightLists: usize = 0x118; // CUtlLeanVector<CNmBoneWeightList>
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CAudioAnimTag = struct {
                pub const m_clipName: usize = 0x58; // CUtlString
                pub const m_attachmentName: usize = 0x60; // CUtlString
                pub const m_flVolume: usize = 0x68; // float32
                pub const m_bStopWhenTagEnds: usize = 0x6C; // bool
                pub const m_bStopWhenGraphEnds: usize = 0x6D; // bool
                pub const m_bPlayOnServer: usize = 0x6E; // bool
                pub const m_bPlayOnClient: usize = 0x6F; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTurnHelperUpdateNode = struct {
                pub const m_facingTarget: usize = 0x74; // AnimValueSource
                pub const m_turnStartTimeOffset: usize = 0x78; // float32
                pub const m_turnDuration: usize = 0x7C; // float32
                pub const m_bMatchChildDuration: usize = 0x80; // bool
                pub const m_manualTurnOffset: usize = 0x84; // float32
                pub const m_bUseManualTurnOffset: usize = 0x88; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGroup = struct {
                pub const m_nFlags: usize = 0x10; // uint32
                pub const m_name: usize = 0x18; // CBufferString
                pub const m_localHAnimArray_Handle: usize = 0x60; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
                pub const m_includedGroupArray_Handle: usize = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                pub const m_directHSeqGroup_Handle: usize = 0x90; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
                pub const m_decodeKey: usize = 0x98; // CAnimKeyData
                pub const m_szScripts: usize = 0x110; // CUtlVector<CBufferString>
                pub const m_AdditionalExtRefs: usize = 0x128; // CUtlVector<CStrongHandleVoid>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmSyncTrackTime_t = struct {
                pub const m_nEventIdx: usize = 0x0; // int32
                pub const m_percentageThrough: usize = 0x4; // NmPercent_t
            };
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmClip = struct {
                pub const m_skeleton: usize = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                pub const m_nNumFrames: usize = 0x8; // uint32
                pub const m_flDuration: usize = 0xC; // float32
                pub const m_compressedPoseData: usize = 0x10; // CUtlBinaryBlock
                pub const m_trackCompressionSettings: usize = 0x20; // CUtlVector<NmCompressionSettings_t>
                pub const m_compressedPoseOffsets: usize = 0x38; // CUtlVector<uint32>
                pub const m_floatCurveIDs: usize = 0x50; // CUtlVector<CGlobalSymbol>
                pub const m_floatCurveDefs: usize = 0x68; // CUtlVector<NmFloatCurveCompressionSettings_t>
                pub const m_compressedFloatCurveData: usize = 0x80; // CUtlVector<uint16>
                pub const m_compressedFloatCurveOffsets: usize = 0x98; // CUtlVector<uint32>
                pub const m_secondaryAnimations: usize = 0xD8; // CUtlVectorFixedGrowable<CNmClip*,1>
                pub const m_syncTrack: usize = 0xF8; // CNmSyncTrack
                pub const m_rootMotion: usize = 0x1B0; // CNmRootMotionData
                pub const m_bIsAdditive: usize = 0x200; // bool
                pub const m_modelSpaceSamplingChain: usize = 0x208; // CUtlVector<CNmClip::ModelSpaceSamplingChainLink_t>
                pub const m_modelSpaceBoneSamplingIndices: usize = 0x220; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CToggleComponentActionUpdater = struct {
                pub const m_componentID: usize = 0x18; // AnimComponentID
                pub const m_bSetEnabled: usize = 0x1C; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CNmOverlayBlendTask = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSpeedScaleBaseNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x18; // int16
                pub const m_flDefaultInputValue: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CNmValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGraphVisualizerPrimitiveBase = struct {
                pub const m_Type: usize = 0x8; // CAnimationGraphVisualizerPrimitiveType
                pub const m_OwningAnimNodePaths: usize = 0xC; // AnimNodeID[11]
                pub const m_nOwningAnimNodePathCount: usize = 0x38; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBindPoseUpdateNode = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmSyncTrackTimeRange_t = struct {
                pub const m_startTime: usize = 0x0; // NmSyncTrackTime_t
                pub const m_endTime: usize = 0x8; // NmSyncTrackTime_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGraphVisualizerText = struct {
                pub const m_vWsPosition: usize = 0x40; // VectorAligned
                pub const m_Color: usize = 0x50; // Color
                pub const m_Text: usize = 0x58; // CUtlString
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootTrajectory = struct {
                pub const m_vOffset: usize = 0x8; // Vector
                pub const m_flRotationOffset: usize = 0x14; // float32
                pub const m_flProgression: usize = 0x18; // float32
            };
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionMatchingUpdateNode = struct {
                pub const m_dataSet: usize = 0x58; // CMotionDataSet
                pub const m_metrics: usize = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
                pub const m_weights: usize = 0x90; // CUtlVector<float32>
                pub const m_bSearchEveryTick: usize = 0xE0; // bool
                pub const m_flSearchInterval: usize = 0xE4; // float32
                pub const m_bSearchWhenClipEnds: usize = 0xE8; // bool
                pub const m_bSearchWhenGoalChanges: usize = 0xE9; // bool
                pub const m_blendCurve: usize = 0xEC; // CBlendCurve
                pub const m_flSampleRate: usize = 0xF4; // float32
                pub const m_flBlendTime: usize = 0xF8; // float32
                pub const m_bLockClipWhenWaning: usize = 0xFC; // bool
                pub const m_flSelectionThreshold: usize = 0x100; // float32
                pub const m_flReselectionTimeWindow: usize = 0x104; // float32
                pub const m_bEnableRotationCorrection: usize = 0x108; // bool
                pub const m_bGoalAssist: usize = 0x109; // bool
                pub const m_flGoalAssistDistance: usize = 0x10C; // float32
                pub const m_flGoalAssistTolerance: usize = 0x110; // float32
                pub const m_distanceScale_Damping: usize = 0x118; // CAnimInputDamping
                pub const m_flDistanceScale_OuterRadius: usize = 0x130; // float32
                pub const m_flDistanceScale_InnerRadius: usize = 0x134; // float32
                pub const m_flDistanceScale_MaxScale: usize = 0x138; // float32
                pub const m_flDistanceScale_MinScale: usize = 0x13C; // float32
                pub const m_bEnableDistanceScaling: usize = 0x140; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmReferencePoseNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqS1SeqDesc = struct {
                pub const m_sName: usize = 0x0; // CBufferString
                pub const m_flags: usize = 0x10; // CSeqSeqDescFlag
                pub const m_fetch: usize = 0x20; // CSeqMultiFetch
                pub const m_nLocalWeightlist: usize = 0x90; // int32
                pub const m_autoLayerArray: usize = 0x98; // CUtlVector<CSeqAutoLayer>
                pub const m_IKLockArray: usize = 0xB0; // CUtlVector<CSeqIKLock>
                pub const m_transition: usize = 0xC8; // CSeqTransition
                pub const m_SequenceKeys: usize = 0xD0; // KeyValues3
                pub const m_LegacyKeyValueText: usize = 0xE0; // CBufferString
                pub const m_activityArray: usize = 0xF0; // CUtlVector<CAnimActivity>
                pub const m_footMotion: usize = 0x108; // CUtlVector<CFootMotion>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFlexController = struct {
                pub const m_szName: usize = 0x0; // CUtlString
                pub const m_szType: usize = 0x8; // CUtlString
                pub const min: usize = 0x10; // float32
                pub const max: usize = 0x14; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonDemoDb_t = struct {
                pub const m_AnimCaptures: usize = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
                pub const m_CameraTrack: usize = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
                pub const m_flRecordingTime: usize = 0x30; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatRangeComparisonNode__CDefinition = struct {
                pub const m_range: usize = 0x10; // Range_t
                pub const m_nInputValueNodeIdx: usize = 0x18; // int16
                pub const m_bIsInclusiveCheck: usize = 0x1A; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionNodeSequence = struct {
                pub const m_tags: usize = 0x28; // CUtlVector<TagSpan_t>
                pub const m_hSequence: usize = 0x40; // HSequence
                pub const m_flPlaybackSpeed: usize = 0x44; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTwoBoneIKNode__CDefinition = struct {
                pub const m_effectorBoneID: usize = 0x18; // CGlobalSymbol
                pub const m_nEffectorTargetNodeIdx: usize = 0x20; // int16
                pub const m_nEnabledNodeIdx: usize = 0x22; // int16
                pub const m_flBlendTimeSeconds: usize = 0x24; // float32
                pub const m_blendMode: usize = 0x28; // NmIKBlendMode_t
                pub const m_bIsTargetInWorldSpace: usize = 0x29; // bool
                pub const m_flReferencePoseTwistWeight: usize = 0x2C; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFlexDesc = struct {
                pub const m_szFacs: usize = 0x0; // CUtlString
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRenderMesh = struct {
                pub const m_sceneObjects: usize = 0x10; // CUtlLeanVectorFixedGrowable<CSceneObjectData,1>
                pub const m_constraints: usize = 0xB8; // CUtlLeanVector<CBaseConstraint*>
                pub const m_skeleton: usize = 0xC8; // CRenderSkeleton
                pub const m_bUseUV2ForCharting: usize = 0x1D4; // bool
                pub const m_bEmbeddedMapMesh: usize = 0x1D5; // bool
                pub const m_meshDeformParams: usize = 0x1F8; // DynamicMeshDeformParams_t
                pub const m_pGroomData: usize = 0x208; // CRenderGroom*
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimSkeleton = struct {
                pub const m_localSpaceTransforms: usize = 0x10; // CUtlVector<CTransform>
                pub const m_modelSpaceTransforms: usize = 0x28; // CUtlVector<CTransform>
                pub const m_boneNames: usize = 0x40; // CUtlVector<CUtlString>
                pub const m_children: usize = 0x58; // CUtlVector<CUtlVector<int32>>
                pub const m_parents: usize = 0x70; // CUtlVector<int32>
                pub const m_feet: usize = 0x88; // CUtlVector<CAnimFoot>
                pub const m_morphNames: usize = 0xA0; // CUtlVector<CUtlString>
                pub const m_lodBoneCounts: usize = 0xB8; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeConstantIndex_t = struct {
                pub const m_Value: usize = 0x0; // int16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysics2ShapeDef_t = struct {
                pub const m_spheres: usize = 0x0; // CUtlVector<RnSphereDesc_t>
                pub const m_capsules: usize = 0x18; // CUtlVector<RnCapsuleDesc_t>
                pub const m_hulls: usize = 0x30; // CUtlVector<RnHullDesc_t>
                pub const m_meshes: usize = 0x48; // CUtlVector<RnMeshDesc_t>
                pub const m_CollisionAttributeIndices: usize = 0x60; // CUtlVector<uint16>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatCurveNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_curve: usize = 0x18; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGraphVisualizerAxis = struct {
                pub const m_xWsTransform: usize = 0x40; // CTransform
                pub const m_flAxisSize: usize = 0x60; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTwistConstraint = struct {
                pub const m_bInverse: usize = 0x60; // bool
                pub const m_qParentBindRotation: usize = 0x70; // Quaternion
                pub const m_qChildBindRotation: usize = 0x80; // Quaternion
            };
            // Parent: None
            // Field count: 1
            pub const PulseDocNodeID_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelBoneFlexDriverControl_t = struct {
                pub const m_nBoneComponent: usize = 0x0; // ModelBoneFlexComponent_t
                pub const m_flexController: usize = 0x8; // CUtlString
                pub const m_flexControllerToken: usize = 0x10; // uint32
                pub const m_flMin: usize = 0x14; // float32
                pub const m_flMax: usize = 0x18; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CParticleCollectionFloatInput = struct {
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqCmdLayer = struct {
                pub const m_cmd: usize = 0x0; // int16
                pub const m_nLocalReference: usize = 0x2; // int16
                pub const m_nLocalBonemask: usize = 0x4; // int16
                pub const m_nDstResult: usize = 0x6; // int16
                pub const m_nSrcResult: usize = 0x8; // int16
                pub const m_bSpline: usize = 0xA; // bool
                pub const m_flVar1: usize = 0xC; // float32
                pub const m_flVar2: usize = 0x10; // float32
                pub const m_nLineNumber: usize = 0x14; // int16
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FootPinningPoseOpFixedData_t = struct {
                pub const m_footInfo: usize = 0x0; // CUtlVector<FootFixedData_t>
                pub const m_flBlendTime: usize = 0x18; // float32
                pub const m_flLockBreakDistance: usize = 0x1C; // float32
                pub const m_flMaxLegTwist: usize = 0x20; // float32
                pub const m_nHipBoneIndex: usize = 0x24; // int32
                pub const m_bApplyLegTwistLimits: usize = 0x28; // bool
                pub const m_bApplyFootRotationLimits: usize = 0x29; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const RenderSkeletonBone_t = struct {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_parentName: usize = 0x8; // CUtlString
                pub const m_invBindPose: usize = 0x10; // matrix3x4_t
                pub const m_bbox: usize = 0x40; // SkeletonBoneBounds_t
                pub const m_flSphereRadius: usize = 0x58; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDistanceRemainingMetricEvaluator = struct {
                pub const m_flMaxDistance: usize = 0x50; // float32
                pub const m_flMinDistance: usize = 0x54; // float32
                pub const m_flStartGoalFilterDistance: usize = 0x58; // float32
                pub const m_flMaxGoalOvershootScale: usize = 0x5C; // float32
                pub const m_bFilterFixedMinDistance: usize = 0x60; // bool
                pub const m_bFilterGoalDistance: usize = 0x61; // bool
                pub const m_bFilterGoalOvershoot: usize = 0x62; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDirectPlaybackUpdateNode = struct {
                pub const m_bFinishEarly: usize = 0x74; // bool
                pub const m_bResetOnFinish: usize = 0x75; // bool
                pub const m_allTags: usize = 0x78; // CUtlVector<CDirectPlaybackTagData>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDEvent = struct {
                pub const m_ID: usize = 0x20; // CGlobalSymbol
                pub const m_secondaryID: usize = 0x28; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFlexRule = struct {
                pub const m_nFlex: usize = 0x0; // int32
                pub const m_FlexOps: usize = 0x8; // CUtlVector<CFlexOp>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ScriptInfo_t = struct {
                pub const m_code: usize = 0x0; // CUtlString
                pub const m_paramsModified: usize = 0x8; // CUtlVector<CAnimParamHandle>
                pub const m_proxyReadParams: usize = 0x20; // CUtlVector<int32>
                pub const m_proxyWriteParams: usize = 0x38; // CUtlVector<int32>
                pub const m_eScriptType: usize = 0x50; // AnimScriptType
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneConstraintRbf = struct {
                pub const m_inputBones: usize = 0x20; // CUtlVector<std::pair<CUtlString,uint32>>
                pub const m_outputBones: usize = 0x38; // CUtlVector<std::pair<CUtlString,uint32>>
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSoundEvent = struct {
                pub const m_relevance: usize = 0x20; // CNmEventRelevance_t
                pub const m_name: usize = 0x28; // CUtlString
                pub const m_position: usize = 0x30; // CNmSoundEvent::Position_t
                pub const m_attachmentName: usize = 0x38; // CUtlString
                pub const m_tags: usize = 0x40; // CUtlString
                pub const m_bContinuePlayingSoundAtDurationEnd: usize = 0x48; // bool
                pub const m_flDurationInterruptionThreshold: usize = 0x4C; // float32
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRenderGroom = struct {
                pub const m_hairs: usize = 0x0; // CUtlVector<RenderHairStrandInfo_t>
                pub const m_hairPositionOffsets: usize = 0x18; // CUtlVector<uint32>
                pub const m_hSimParamsMat: usize = 0x40; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                pub const m_strandSegmentCountHist: usize = 0x48; // CUtlVector<int32>
                pub const m_nMaxSegmentsPerHairStrand: usize = 0x78; // int32
                pub const m_nGuideHairCount: usize = 0x7C; // int32
                pub const m_nHairCount: usize = 0x80; // int32
                pub const m_nTotalVertexCount: usize = 0x84; // int32
                pub const m_nTotalSegmentCount: usize = 0x88; // int32
                pub const m_nGroomGroupID: usize = 0x8C; // int32
                pub const m_nAttachBoneIdx: usize = 0x90; // int32
                pub const m_nAttachMeshIdx: usize = 0x94; // int32
                pub const m_nAttachMeshDrawCallIdx: usize = 0x98; // int32
                pub const m_bEnableSimulation: usize = 0x9C; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmParameterizedClipSelectorNode__CDefinition = struct {
                pub const m_optionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                pub const m_optionWeights: usize = 0x28; // CUtlLeanVectorFixedGrowable<uint8,5>
                pub const m_parameterNodeIdx: usize = 0x38; // int16
                pub const m_bIgnoreInvalidOptions: usize = 0x3A; // bool
                pub const m_bHasWeightsSet: usize = 0x3B; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTiltTwistConstraint = struct {
                pub const m_nTargetAxis: usize = 0x60; // int32
                pub const m_nSlaveAxis: usize = 0x64; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSpeedScaleNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CVPhysXSurfacePropertiesList = struct {
                pub const m_surfacePropertiesList: usize = 0x0; // CUtlVector<CPhysSurfaceProperties*>
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const RenderHairStrandInfo_t = struct {
                pub const m_nGuideHairIndices_nSurfaceTriIndex: usize = 0x0; // uint32[2]
                pub const m_vGuideBary_vBaseBary: usize = 0x8; // uint16[4]
                pub const m_vRootOffset_flLengthScale: usize = 0x10; // uint16[4]
                pub const m_nPackedBaseUv: usize = 0x18; // uint16[2]
                pub const m_nPackedSurfaceNormalOs: usize = 0x1C; // uint32
                pub const m_nPackedSurfaceTangentOs: usize = 0x20; // uint32
                pub const m_nDataOffset_Segments: usize = 0x24; // uint32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCycleControlClipUpdateNode = struct {
                pub const m_tags: usize = 0x60; // CUtlVector<TagSpan_t>
                pub const m_hSequence: usize = 0x7C; // HSequence
                pub const m_duration: usize = 0x80; // float32
                pub const m_valueSource: usize = 0x84; // AnimValueSource
                pub const m_paramIndex: usize = 0x88; // CAnimParamHandle
                pub const m_bLockWhenWaning: usize = 0x8A; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTargetPointNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_bIsWorldSpaceTarget: usize = 0x12; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTargetSelectorNode__CDefinition = struct {
                pub const m_optionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                pub const m_flOrientationScoreWeight: usize = 0x28; // float32
                pub const m_flPositionScoreWeight: usize = 0x2C; // float32
                pub const m_parameterNodeIdx: usize = 0x30; // int16
                pub const m_bIgnoreInvalidOptions: usize = 0x32; // bool
                pub const m_bIsWorldSpaceTarget: usize = 0x33; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_RegisterInfo = struct {
                pub const m_nReg: usize = 0x0; // PulseRuntimeRegisterIndex_t
                pub const m_Type: usize = 0x8; // CPulseValueFullType
                pub const m_OriginName: usize = 0x20; // CKV3MemberNameWithStorage
                pub const m_nWrittenByInstruction: usize = 0x58; // int32
                pub const m_nLastReadByInstruction: usize = 0x5C; // int32
            };
            // Parent: None
            // Field count: 0
            pub const CNmFloatValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CWarpSectionAnimTagBase = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphVariationUserData = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStaticPoseCache = struct {
                pub const m_poses: usize = 0x10; // CUtlVector<CCachedPose>
                pub const m_nBoneCount: usize = 0x28; // int32
                pub const m_nMorphCount: usize = 0x2C; // int32
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const LookAtOpFixedSettings_t = struct {
                pub const m_attachment: usize = 0x0; // CAnimAttachment
                pub const m_damping: usize = 0x80; // CAnimInputDamping
                pub const m_bones: usize = 0x98; // CUtlVector<LookAtBone_t>
                pub const m_flYawLimit: usize = 0xB0; // float32
                pub const m_flPitchLimit: usize = 0xB4; // float32
                pub const m_flHysteresisInnerAngle: usize = 0xB8; // float32
                pub const m_flHysteresisOuterAngle: usize = 0xBC; // float32
                pub const m_bRotateYawForward: usize = 0xC0; // bool
                pub const m_bMaintainUpDirection: usize = 0xC1; // bool
                pub const m_bTargetIsPosition: usize = 0xC2; // bool
                pub const m_bUseHysteresis: usize = 0xC3; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimGraphSettingsManager = struct {
                pub const m_settingsGroups: usize = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimGraphModelBinding = struct {
                pub const m_modelName: usize = 0x8; // CUtlString
                pub const m_pSharedData: usize = 0x10; // CSmartPtr<CAnimUpdateSharedData>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneConstraintPoseSpaceBone = struct {
                pub const m_inputList: usize = 0x60; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
            };
            // Parent: None
            // Field count: 10
            pub const CNmTwoBoneIKTask = struct {
                pub const m_nEffectorBoneIdx: usize = 0x58; // int32
                pub const m_nEffectorTargetBoneIdx: usize = 0x5C; // int32
                pub const m_targetTransform: usize = 0x60; // CTransform
                pub const m_effectorTarget: usize = 0x80; // CNmTarget
                pub const m_blendMode: usize = 0xB0; // NmIKBlendMode_t
                pub const m_flBlendWeight: usize = 0xB4; // float32
                pub const m_bIsTargetInWorldSpace: usize = 0xB8; // bool
                pub const m_bIsRunningFromDeserializedData: usize = 0xB9; // bool
                pub const m_flReferencePoseTwistWeight: usize = 0xBC; // float32
                pub const m_debugEffectorBoneID: usize = 0xC0; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const MotionBlendItem = struct {
                pub const m_pChild: usize = 0x0; // CSmartPtr<CMotionNode>
                pub const m_flKeyValue: usize = 0x8; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneConstraintPoseSpaceMorph = struct {
                pub const m_sBoneName: usize = 0x20; // CUtlString
                pub const m_sAttachmentName: usize = 0x28; // CUtlString
                pub const m_outputMorph: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_inputList: usize = 0x48; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
                pub const m_bClamp: usize = 0x60; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CFloatAnimParameter = struct {
                pub const m_fDefaultValue: usize = 0x80; // float32
                pub const m_fMinValue: usize = 0x84; // float32
                pub const m_fMaxValue: usize = 0x88; // float32
                pub const m_bInterpolate: usize = 0x8C; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStateActionUpdater = struct {
                pub const m_pAction: usize = 0x0; // CSmartPtr<CAnimActionUpdater>
                pub const m_eBehavior: usize = 0x8; // StateActionBehavior
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPlayerInputAnimMotorUpdater = struct {
                pub const m_sampleTimes: usize = 0x20; // CUtlVector<float32>
                pub const m_flSpringConstant: usize = 0x3C; // float32
                pub const m_flAnticipationDistance: usize = 0x40; // float32
                pub const m_hAnticipationPosParam: usize = 0x44; // CAnimParamHandle
                pub const m_hAnticipationHeadingParam: usize = 0x46; // CAnimParamHandle
                pub const m_bUseAcceleration: usize = 0x48; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRenderSkeleton = struct {
                pub const m_bones: usize = 0x0; // CUtlVector<RenderSkeletonBone_t>
                pub const m_boneParents: usize = 0x30; // CUtlVector<int32>
                pub const m_nBoneWeightCount: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqIKLock = struct {
                pub const m_flPosWeight: usize = 0x0; // float32
                pub const m_flAngleWeight: usize = 0x4; // float32
                pub const m_nLocalBone: usize = 0x8; // int16
                pub const m_bBonesOrientedAlongPositiveX: usize = 0xA; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimParamHandleMap = struct {
                pub const m_list: usize = 0x0; // CUtlHashtable<uint16,int16>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatClampNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_clampRange: usize = 0x14; // Range_t
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeCellIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmExternalPoseNode__CDefinition = struct {
                pub const m_bShouldSampleRootMotion: usize = 0x10; // bool
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimDesc = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_flags: usize = 0x10; // CAnimDesc_Flag
                pub const fps: usize = 0x18; // float32
                pub const m_Data: usize = 0x20; // CAnimEncodedFrames
                pub const m_movementArray: usize = 0xF8; // CUtlVector<CAnimMovement>
                pub const m_xInitialOffset: usize = 0x110; // CTransform
                pub const m_eventArray: usize = 0x130; // CUtlVector<CAnimEventDefinition>
                pub const m_activityArray: usize = 0x148; // CUtlVector<CAnimActivity>
                pub const m_hierarchyArray: usize = 0x160; // CUtlVector<CAnimLocalHierarchy>
                pub const framestalltime: usize = 0x178; // float32
                pub const m_vecRootMin: usize = 0x17C; // Vector
                pub const m_vecRootMax: usize = 0x188; // Vector
                pub const m_vecBoneWorldMin: usize = 0x198; // CUtlVector<Vector>
                pub const m_vecBoneWorldMax: usize = 0x1B0; // CUtlVector<Vector>
                pub const m_sequenceParams: usize = 0x1C8; // CAnimSequenceParams
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmRootMotionOverrideNode__CDefinition = struct {
                pub const m_desiredMovingVelocityNodeIdx: usize = 0x18; // int16
                pub const m_desiredFacingDirectionNodeIdx: usize = 0x1A; // int16
                pub const m_linearVelocityLimitNodeIdx: usize = 0x1C; // int16
                pub const m_angularVelocityLimitNodeIdx: usize = 0x1E; // int16
                pub const m_maxLinearVelocity: usize = 0x20; // float32
                pub const m_maxAngularVelocityRadians: usize = 0x24; // float32
                pub const m_overrideFlags: usize = 0x28; // CNmBitFlags
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTargetWarpNode__CDefinition = struct {
                pub const m_nClipReferenceNodeIdx: usize = 0x10; // int16
                pub const m_nTargetValueNodeIdx: usize = 0x12; // int16
                pub const m_samplingMode: usize = 0x14; // CNmRootMotionData::SamplingMode_t
                pub const m_bAllowTargetUpdate: usize = 0x15; // bool
                pub const m_bAlignWithTargetAtLastWarpEvent: usize = 0x16; // bool
                pub const m_flSamplingPositionErrorThresholdSq: usize = 0x18; // float32
                pub const m_flMaxTangentLength: usize = 0x1C; // float32
                pub const m_flLerpFallbackDistanceThreshold: usize = 0x20; // float32
                pub const m_flTargetUpdateDistanceThreshold: usize = 0x24; // float32
                pub const m_flTargetUpdateAngleThresholdRadians: usize = 0x28; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPhysSurfacePropertiesPhysics = struct {
                pub const m_friction: usize = 0x0; // float32
                pub const m_elasticity: usize = 0x4; // float32
                pub const m_density: usize = 0x8; // float32
                pub const m_thickness: usize = 0xC; // float32
                pub const m_softContactFrequency: usize = 0x10; // float32
                pub const m_softContactDampingRatio: usize = 0x14; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimationGraphVisualizerPie = struct {
                pub const m_vWsCenter: usize = 0x40; // VectorAligned
                pub const m_vWsStart: usize = 0x50; // VectorAligned
                pub const m_vWsEnd: usize = 0x60; // VectorAligned
                pub const m_Color: usize = 0x70; // Color
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const NmFloatCurveCompressionSettings_t = struct {
                pub const m_range: usize = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                pub const m_bIsStatic: usize = 0x8; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneConstraintDotToMorph = struct {
                pub const m_sBoneName: usize = 0x20; // CUtlString
                pub const m_sTargetBoneName: usize = 0x28; // CUtlString
                pub const m_sMorphChannelName: usize = 0x30; // CUtlString
                pub const m_flRemap: usize = 0x38; // float32[4]
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPointConstraint = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCurrentRotationVelocityMetricEvaluator = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const TraceSettings_t = struct {
                pub const m_flTraceHeight: usize = 0x0; // float32
                pub const m_flTraceRadius: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParamSpanSample_t = struct {
                pub const m_value: usize = 0x0; // CAnimVariant
                pub const m_flCycle: usize = 0x14; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CNmFollowBoneTask = struct {
            };
            // Parent: None
            // Field count: 46
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXConstraintParams_t = struct {
                pub const m_nType: usize = 0x0; // int8
                pub const m_nTranslateMotion: usize = 0x1; // int8
                pub const m_nRotateMotion: usize = 0x2; // int8
                pub const m_nFlags: usize = 0x3; // int8
                pub const m_anchor: usize = 0x4; // Vector[2]
                pub const m_axes: usize = 0x1C; // QuaternionStorage[2]
                pub const m_maxForce: usize = 0x3C; // float32
                pub const m_maxTorque: usize = 0x40; // float32
                pub const m_linearLimitValue: usize = 0x44; // float32
                pub const m_linearLimitRestitution: usize = 0x48; // float32
                pub const m_linearLimitSpring: usize = 0x4C; // float32
                pub const m_linearLimitDamping: usize = 0x50; // float32
                pub const m_twistLowLimitValue: usize = 0x54; // float32
                pub const m_twistLowLimitRestitution: usize = 0x58; // float32
                pub const m_twistLowLimitSpring: usize = 0x5C; // float32
                pub const m_twistLowLimitDamping: usize = 0x60; // float32
                pub const m_twistHighLimitValue: usize = 0x64; // float32
                pub const m_twistHighLimitRestitution: usize = 0x68; // float32
                pub const m_twistHighLimitSpring: usize = 0x6C; // float32
                pub const m_twistHighLimitDamping: usize = 0x70; // float32
                pub const m_swing1LimitValue: usize = 0x74; // float32
                pub const m_swing1LimitRestitution: usize = 0x78; // float32
                pub const m_swing1LimitSpring: usize = 0x7C; // float32
                pub const m_swing1LimitDamping: usize = 0x80; // float32
                pub const m_swing2LimitValue: usize = 0x84; // float32
                pub const m_swing2LimitRestitution: usize = 0x88; // float32
                pub const m_swing2LimitSpring: usize = 0x8C; // float32
                pub const m_swing2LimitDamping: usize = 0x90; // float32
                pub const m_goalPosition: usize = 0x94; // Vector
                pub const m_goalOrientation: usize = 0xA0; // QuaternionStorage
                pub const m_goalAngularVelocity: usize = 0xB0; // Vector
                pub const m_driveSpringX: usize = 0xBC; // float32
                pub const m_driveSpringY: usize = 0xC0; // float32
                pub const m_driveSpringZ: usize = 0xC4; // float32
                pub const m_driveDampingX: usize = 0xC8; // float32
                pub const m_driveDampingY: usize = 0xCC; // float32
                pub const m_driveDampingZ: usize = 0xD0; // float32
                pub const m_driveSpringTwist: usize = 0xD4; // float32
                pub const m_driveSpringSwing: usize = 0xD8; // float32
                pub const m_driveSpringSlerp: usize = 0xDC; // float32
                pub const m_driveDampingTwist: usize = 0xE0; // float32
                pub const m_driveDampingSwing: usize = 0xE4; // float32
                pub const m_driveDampingSlerp: usize = 0xE8; // float32
                pub const m_solverIterationCount: usize = 0xEC; // int32
                pub const m_projectionLinearTolerance: usize = 0xF0; // float32
                pub const m_projectionAngularTolerance: usize = 0xF4; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatComparisonNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_nComparandValueNodeIdx: usize = 0x12; // int16
                pub const m_comparison: usize = 0x14; // CNmFloatComparisonNode::Comparison_t
                pub const m_flEpsilon: usize = 0x18; // float32
                pub const m_flComparisonValue: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 13
            pub const CNmChainSolverTask = struct {
                pub const m_nEffectorBoneIdx: usize = 0x58; // int32
                pub const m_nEffectorTargetBoneIdx: usize = 0x5C; // int32
                pub const m_targetTransform: usize = 0x60; // CTransform
                pub const m_nNumBonesInChain: usize = 0x80; // int32
                pub const m_effectorTarget: usize = 0x90; // CNmTarget
                pub const m_blendMode: usize = 0xC0; // NmIKBlendMode_t
                pub const m_flBlendWeight: usize = 0xC4; // float32
                pub const m_bIsTargetInWorldSpace: usize = 0xC8; // bool
                pub const m_bIsRunningFromDeserializedData: usize = 0xC9; // bool
                pub const m_debugEffectorBoneID: usize = 0xD0; // CGlobalSymbol
                pub const m_chainStartTransformMS: usize = 0xE0; // CTransform
                pub const m_debugRequestedTargetTransformMS: usize = 0x100; // CTransform
                pub const m_debugTotalChainLength: usize = 0x120; // float32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CStateUpdateData = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_hScript: usize = 0x8; // AnimScriptHandle
                pub const m_transitionIndices: usize = 0x10; // CUtlVector<int32>
                pub const m_actions: usize = 0x28; // CUtlVector<CStateActionUpdater>
                pub const m_stateID: usize = 0x40; // AnimStateID
                pub const m_bIsStartState: usize = 0x0; // bitfield:1
                pub const m_bIsEndState: usize = 0x0; // bitfield:1
                pub const m_bIsPassthrough: usize = 0x0; // bitfield:1
                pub const m_bIsPassthroughRootMotion: usize = 0x0; // bitfield:1
                pub const m_bPreEvaluatePassthroughTransitionPath: usize = 0x0; // bitfield:1
            };
            // Parent: None
            // Field count: 0
            pub const CNmTargetValueNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const COrientConstraint = struct {
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMoverUpdateNode = struct {
                pub const m_damping: usize = 0x78; // CAnimInputDamping
                pub const m_facingTarget: usize = 0x90; // AnimValueSource
                pub const m_hMoveVecParam: usize = 0x94; // CAnimParamHandle
                pub const m_hMoveHeadingParam: usize = 0x96; // CAnimParamHandle
                pub const m_hTurnToFaceParam: usize = 0x98; // CAnimParamHandle
                pub const m_flTurnToFaceOffset: usize = 0x9C; // float32
                pub const m_flTurnToFaceLimit: usize = 0xA0; // float32
                pub const m_bAdditive: usize = 0xA4; // bool
                pub const m_bApplyMovement: usize = 0xA5; // bool
                pub const m_bOrientMovement: usize = 0xA6; // bool
                pub const m_bApplyRotation: usize = 0xA7; // bool
                pub const m_bLimitOnly: usize = 0xA8; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmLayerBlendNode__CDefinition = struct {
                pub const m_nBaseNodeIdx: usize = 0x10; // int16
                pub const m_bOnlySampleBaseRootMotion: usize = 0x12; // bool
                pub const m_layerDefinition: usize = 0x18; // CUtlLeanVectorFixedGrowable<CNmLayerBlendNode::LayerDefinition_t,3>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimMotorUpdaterBase = struct {
                pub const m_name: usize = 0x10; // CUtlString
                pub const m_bDefault: usize = 0x18; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const JiggleBoneSettingsList_t = struct {
                pub const m_boneSettings: usize = 0x0; // CUtlVector<JiggleBoneSettings_t>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSubtractUpdateNode = struct {
                pub const m_footMotionTiming: usize = 0x94; // BinaryNodeChildOption
                pub const m_bApplyToFootMotion: usize = 0x98; // bool
                pub const m_bApplyChannelsSeparately: usize = 0x99; // bool
                pub const m_bUseModelSpace: usize = 0x9A; // bool
            };
            // Parent: None
            // Field count: 1
            pub const PulseGraphInstanceID_t = struct {
                pub const m_Value: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFloatRemapNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_inputRange: usize = 0x14; // CNmFloatRemapNode::RemapRange_t
                pub const m_outputRange: usize = 0x1C; // CNmFloatRemapNode::RemapRange_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPoseHandle = struct {
                pub const m_nIndex: usize = 0x0; // uint16
                pub const m_eType: usize = 0x2; // PoseType_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFootstepEventIDNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSolveIKChainUpdateNode = struct {
                pub const m_targetHandles: usize = 0x70; // CUtlVector<CSolveIKTargetHandle_t>
                pub const m_opFixedData: usize = 0x88; // SolveIKChainPoseOpFixedSettings_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmOrNode__CDefinition = struct {
                pub const m_conditionNodeIndices: usize = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqCmdSeqDesc = struct {
                pub const m_sName: usize = 0x0; // CBufferString
                pub const m_flags: usize = 0x10; // CSeqSeqDescFlag
                pub const m_transition: usize = 0x1C; // CSeqTransition
                pub const m_nFrameRangeSequence: usize = 0x24; // int16
                pub const m_nFrameCount: usize = 0x26; // int16
                pub const m_flFPS: usize = 0x28; // float32
                pub const m_nSubCycles: usize = 0x2C; // int16
                pub const m_numLocalResults: usize = 0x2E; // int16
                pub const m_cmdLayerArray: usize = 0x30; // CUtlVector<CSeqCmdLayer>
                pub const m_eventArray: usize = 0x48; // CUtlVector<CAnimEventDefinition>
                pub const m_activityArray: usize = 0x60; // CUtlVector<CAnimActivity>
                pub const m_poseSettingArray: usize = 0x78; // CUtlVector<CSeqPoseSetting>
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneMaskUpdateNode = struct {
                pub const m_nWeightListIndex: usize = 0x94; // int32
                pub const m_flRootMotionBlend: usize = 0x98; // float32
                pub const m_blendSpace: usize = 0x9C; // BoneMaskBlendSpace
                pub const m_footMotionTiming: usize = 0xA0; // BinaryNodeChildOption
                pub const m_bUseBlendScale: usize = 0xA4; // bool
                pub const m_blendValueSource: usize = 0xA8; // AnimValueSource
                pub const m_hBlendParameter: usize = 0xAC; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CLeafUpdateNode = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_Constant = struct {
                pub const m_Type: usize = 0x0; // CPulseValueFullType
                pub const m_Value: usize = 0x18; // KeyValues3
            };
            // Parent: None
            // Field count: 49
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            pub const CParticleFloatInput = struct {
                pub const m_nType: usize = 0x10; // ParticleFloatType_t
                pub const m_nMapType: usize = 0x14; // ParticleFloatMapType_t
                pub const m_flLiteralValue: usize = 0x18; // float32
                pub const m_NamedValue: usize = 0x20; // CParticleNamedValueRef
                pub const m_nControlPoint: usize = 0x60; // int32
                pub const m_nScalarAttribute: usize = 0x64; // ParticleAttributeIndex_t
                pub const m_nVectorAttribute: usize = 0x68; // ParticleAttributeIndex_t
                pub const m_nVectorComponent: usize = 0x6C; // int32
                pub const m_bReverseOrder: usize = 0x70; // bool
                pub const m_flRandomMin: usize = 0x74; // float32
                pub const m_flRandomMax: usize = 0x78; // float32
                pub const m_bHasRandomSignFlip: usize = 0x7C; // bool
                pub const m_nRandomSeed: usize = 0x80; // int32
                pub const m_nRandomMode: usize = 0x84; // ParticleFloatRandomMode_t
                pub const m_strSnapshotSubset: usize = 0x90; // CUtlString
                pub const m_flLOD0: usize = 0x98; // float32
                pub const m_flLOD1: usize = 0x9C; // float32
                pub const m_flLOD2: usize = 0xA0; // float32
                pub const m_flLOD3: usize = 0xA4; // float32
                pub const m_nNoiseInputVectorAttribute: usize = 0xA8; // ParticleAttributeIndex_t
                pub const m_flNoiseOutputMin: usize = 0xAC; // float32
                pub const m_flNoiseOutputMax: usize = 0xB0; // float32
                pub const m_flNoiseScale: usize = 0xB4; // float32
                pub const m_vecNoiseOffsetRate: usize = 0xB8; // Vector
                pub const m_flNoiseOffset: usize = 0xC4; // float32
                pub const m_nNoiseOctaves: usize = 0xC8; // int32
                pub const m_nNoiseTurbulence: usize = 0xCC; // PFNoiseTurbulence_t
                pub const m_nNoiseType: usize = 0xD0; // PFNoiseType_t
                pub const m_nNoiseModifier: usize = 0xD4; // PFNoiseModifier_t
                pub const m_flNoiseTurbulenceScale: usize = 0xD8; // float32
                pub const m_flNoiseTurbulenceMix: usize = 0xDC; // float32
                pub const m_flNoiseImgPreviewScale: usize = 0xE0; // float32
                pub const m_bNoiseImgPreviewLive: usize = 0xE4; // bool
                pub const m_flNoCameraFallback: usize = 0xF0; // float32
                pub const m_bUseBoundsCenter: usize = 0xF4; // bool
                pub const m_nInputMode: usize = 0xF8; // ParticleFloatInputMode_t
                pub const m_flMultFactor: usize = 0xFC; // float32
                pub const m_flInput0: usize = 0x100; // float32
                pub const m_flInput1: usize = 0x104; // float32
                pub const m_flOutput0: usize = 0x108; // float32
                pub const m_flOutput1: usize = 0x10C; // float32
                pub const m_flNotchedRangeMin: usize = 0x110; // float32
                pub const m_flNotchedRangeMax: usize = 0x114; // float32
                pub const m_flNotchedOutputOutside: usize = 0x118; // float32
                pub const m_flNotchedOutputInside: usize = 0x11C; // float32
                pub const m_nRoundType: usize = 0x120; // ParticleFloatRoundType_t
                pub const m_nBiasType: usize = 0x124; // ParticleFloatBiasType_t
                pub const m_flBiasParameter: usize = 0x128; // float32
                pub const m_Curve: usize = 0x130; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SolveIKChainPoseOpFixedSettings_t = struct {
                pub const m_ChainsToSolveData: usize = 0x0; // CUtlVector<ChainToSolveData_t>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmEntityAttributeFloatEvent = struct {
                pub const m_FloatValue: usize = 0x38; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDSelectorNode__CDefinition = struct {
                pub const m_conditionNodeIndices: usize = 0x10; // CUtlVectorFixedGrowable<int16,5>
                pub const m_values: usize = 0x38; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
                pub const m_defaultValue: usize = 0x78; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const TwoBoneIKSettings_t = struct {
                pub const m_endEffectorType: usize = 0x0; // IkEndEffectorType
                pub const m_endEffectorAttachment: usize = 0x10; // CAnimAttachment
                pub const m_targetType: usize = 0x90; // IkTargetType
                pub const m_targetAttachment: usize = 0xA0; // CAnimAttachment
                pub const m_targetBoneIndex: usize = 0x120; // int32
                pub const m_hPositionParam: usize = 0x124; // CAnimParamHandle
                pub const m_hRotationParam: usize = 0x126; // CAnimParamHandle
                pub const m_bAlwaysUseFallbackHinge: usize = 0x128; // bool
                pub const m_vLsFallbackHingeAxis: usize = 0x130; // VectorAligned
                pub const m_nFixedBoneIndex: usize = 0x140; // int32
                pub const m_nMiddleBoneIndex: usize = 0x144; // int32
                pub const m_nEndBoneIndex: usize = 0x148; // int32
                pub const m_bMatchTargetOrientation: usize = 0x14C; // bool
                pub const m_bConstrainTwist: usize = 0x14D; // bool
                pub const m_flMaxTwist: usize = 0x150; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CNmCachedPoseWriteTask = struct {
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimUpdateSharedData = struct {
                pub const m_nodes: usize = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
                pub const m_nodeIndexMap: usize = 0x28; // CUtlHashtable<CAnimNodePath,int32>
                pub const m_components: usize = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
                pub const m_pParamListUpdater: usize = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
                pub const m_pTagManagerUpdater: usize = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
                pub const m_scriptManager: usize = 0x70; // CSmartPtr<CAnimScriptManager>
                pub const m_settings: usize = 0x78; // CAnimGraphSettingsManager
                pub const m_pStaticPoseCache: usize = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
                pub const m_pSkeleton: usize = 0xB0; // CSmartPtr<CAnimSkeleton>
                pub const m_rootNodePath: usize = 0xB8; // CAnimNodePath
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimAttachment = struct {
                pub const m_influenceRotations: usize = 0x0; // Quaternion[3]
                pub const m_influenceOffsets: usize = 0x30; // VectorAligned[3]
                pub const m_influenceIndices: usize = 0x60; // int32[3]
                pub const m_influenceWeights: usize = 0x6C; // float32[3]
                pub const m_numInfluences: usize = 0x78; // uint8
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootTrajectories = struct {
                pub const m_trajectories: usize = 0x0; // CUtlVector<CFootTrajectory>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmIDComparisonNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
                pub const m_comparison: usize = 0x12; // CNmIDComparisonNode::Comparison_t
                pub const m_comparisionIDs: usize = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CEditableMotionGraph = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmConstFloatNode__CDefinition = struct {
                pub const m_flValue: usize = 0x10; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CStringAnimTag = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CBoolAnimParameter = struct {
                pub const m_bDefaultValue: usize = 0x80; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CRagdollAnimTag = struct {
                pub const m_profileName: usize = 0x58; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionNode = struct {
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_id: usize = 0x20; // AnimNodeID
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmStateMachineNode__CDefinition = struct {
                pub const m_stateDefinitions: usize = 0x10; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::StateDefinition_t,5>
                pub const m_nDefaultStateIndex: usize = 0x130; // int16
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CBodyGroupAnimTag = struct {
                pub const m_nPriority: usize = 0x58; // int32
                pub const m_bodyGroupSettings: usize = 0x60; // CUtlVector<CBodyGroupSetting>
            };
            // Parent: None
            // Field count: 0
            pub const CNmModelSpaceBlendTask = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmZeroPoseNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmOrientationWarpNode__CDefinition = struct {
                pub const m_nClipReferenceNodeIdx: usize = 0x10; // int16
                pub const m_nTargetValueNodeIdx: usize = 0x12; // int16
                pub const m_bIsOffsetNode: usize = 0x14; // bool
                pub const m_bIsOffsetRelativeToCharacter: usize = 0x15; // bool
                pub const m_bWarpTranslation: usize = 0x16; // bool
                pub const m_samplingMode: usize = 0x17; // CNmRootMotionData::SamplingMode_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimParamID = struct {
                pub const m_id: usize = 0x0; // uint32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBoneMaskNode__CDefinition = struct {
                pub const m_boneMaskID: usize = 0x10; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelAnimGraph2Ref_t = struct {
                pub const m_sIdentifier: usize = 0x0; // CUtlString
                pub const m_hGraph: usize = 0x8; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AnimationDecodeDebugDump_t = struct {
                pub const m_processingType: usize = 0x0; // AnimationProcessingType_t
                pub const m_elems: usize = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVirtualParameterIDNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqScaleSet = struct {
                pub const m_sName: usize = 0x0; // CBufferString
                pub const m_bRootOffset: usize = 0x10; // bool
                pub const m_vRootOffset: usize = 0x14; // Vector
                pub const m_nLocalBoneArray: usize = 0x20; // CUtlVector<int16>
                pub const m_flBoneScaleArray: usize = 0x38; // CUtlVector<float32>
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeCallInfoIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CDirectionalBlendUpdateNode = struct {
                pub const m_hSequences: usize = 0x5C; // HSequence[8]
                pub const m_damping: usize = 0x80; // CAnimInputDamping
                pub const m_blendValueSource: usize = 0x98; // AnimValueSource
                pub const m_paramIndex: usize = 0x9C; // CAnimParamHandle
                pub const m_playbackSpeed: usize = 0xA0; // float32
                pub const m_duration: usize = 0xA4; // float32
                pub const m_bLoop: usize = 0xA8; // bool
                pub const m_bLockBlendOnReset: usize = 0xA9; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmGraphDefinition__ReferencedGraphSlot_t = struct {
                pub const m_nNodeIdx: usize = 0x0; // int16
                pub const m_dataSlotIdx: usize = 0x2; // int16
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParamSpan_t = struct {
                pub const m_samples: usize = 0x0; // CUtlVector<ParamSpanSample_t>
                pub const m_hParam: usize = 0x18; // CAnimParamHandle
                pub const m_eParamType: usize = 0x1A; // AnimParamType_t
                pub const m_flStartCycle: usize = 0x1C; // float32
                pub const m_flEndCycle: usize = 0x20; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFootStepTriggerUpdateNode = struct {
                pub const m_triggers: usize = 0x70; // CUtlVector<FootStepTrigger>
                pub const m_flTolerance: usize = 0x8C; // float32
            };
            // Parent: None
            // Field count: 5
            pub const IKTargetSettings_t = struct {
                pub const m_TargetSource: usize = 0x0; // IKTargetSource
                pub const m_Bone: usize = 0x8; // IKBoneNameAndIndex_t
                pub const m_AnimgraphParameterNamePosition: usize = 0x18; // AnimParamID
                pub const m_AnimgraphParameterNameOrientation: usize = 0x1C; // AnimParamID
                pub const m_TargetCoordSystem: usize = 0x20; // IKTargetCoordinateSystem
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_SetRenderColor = struct {
                pub const m_Color: usize = 0x48; // Color
            };
            // Parent: None
            // Field count: 0
            pub const CNmAdditiveBlendTask = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmAnimationPoseNode__CDefinition = struct {
                pub const m_nPoseTimeValueNodeIdx: usize = 0x10; // int16
                pub const m_nDataSlotIdx: usize = 0x12; // int16
                pub const m_inputTimeRemapRange: usize = 0x14; // Range_t
                pub const m_flUserSpecifiedTime: usize = 0x1C; // float32
                pub const m_bUseFramesAsInput: usize = 0x20; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionSearchDB = struct {
                pub const m_rootNode: usize = 0x0; // CMotionSearchNode
                pub const m_residualQuantizer: usize = 0x80; // CProductQuantizer
                pub const m_codeIndices: usize = 0xA0; // CUtlVector<MotionDBIndex>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionNodeBlend1D = struct {
                pub const m_blendItems: usize = 0x28; // CUtlVector<MotionBlendItem>
                pub const m_nParamIndex: usize = 0x40; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmCurrentSyncEventNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_infoType: usize = 0x12; // CNmCurrentSyncEventNode::InfoType_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmControlParameterTargetNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SkeletonBoneBounds_t = struct {
                pub const m_vecCenter: usize = 0x0; // Vector
                pub const m_vecSize: usize = 0xC; // Vector
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTwoBoneIKUpdateNode = struct {
                pub const m_opFixedData: usize = 0x70; // TwoBoneIKSettings_t
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VPhysXBodyPart_t = struct {
                pub const m_nFlags: usize = 0x0; // uint32
                pub const m_flMass: usize = 0x4; // float32
                pub const m_rnShape: usize = 0x8; // VPhysics2ShapeDef_t
                pub const m_nCollisionAttributeIndex: usize = 0x80; // uint16
                pub const m_nReserved: usize = 0x82; // uint16
                pub const m_flInertiaScale: usize = 0x84; // float32
                pub const m_flLinearDamping: usize = 0x88; // float32
                pub const m_flAngularDamping: usize = 0x8C; // float32
                pub const m_flLinearDrag: usize = 0x90; // float32
                pub const m_flAngularDrag: usize = 0x94; // float32
                pub const m_bOverrideMassCenter: usize = 0x98; // bool
                pub const m_vMassCenterOverride: usize = 0x9C; // Vector
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeChunkIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CTaskHandshakeAnimTag = struct {
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFollowPathUpdateNode = struct {
                pub const m_flBlendOutTime: usize = 0x74; // float32
                pub const m_bBlockNonPathMovement: usize = 0x78; // bool
                pub const m_bStopFeetAtGoal: usize = 0x79; // bool
                pub const m_bScaleSpeed: usize = 0x7A; // bool
                pub const m_flScale: usize = 0x7C; // float32
                pub const m_flMinAngle: usize = 0x80; // float32
                pub const m_flMaxAngle: usize = 0x84; // float32
                pub const m_flSpeedScaleBlending: usize = 0x88; // float32
                pub const m_turnDamping: usize = 0x90; // CAnimInputDamping
                pub const m_facingTarget: usize = 0xA8; // AnimValueSource
                pub const m_hParam: usize = 0xAC; // CAnimParamHandle
                pub const m_flTurnToFaceOffset: usize = 0xB0; // float32
                pub const m_bTurnToFace: usize = 0xB4; // bool
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AimMatrixOpFixedSettings_t = struct {
                pub const m_attachment: usize = 0x0; // CAnimAttachment
                pub const m_damping: usize = 0x80; // CAnimInputDamping
                pub const m_poseCacheHandles: usize = 0x98; // CPoseHandle[10]
                pub const m_eBlendMode: usize = 0xC0; // AimMatrixBlendMode
                pub const m_flMaxYawAngle: usize = 0xC4; // float32
                pub const m_flMaxPitchAngle: usize = 0xC8; // float32
                pub const m_nSequenceMaxFrame: usize = 0xCC; // int32
                pub const m_nBoneMaskIndex: usize = 0xD0; // int32
                pub const m_bTargetIsPosition: usize = 0xD4; // bool
                pub const m_bUseBiasAndClamp: usize = 0xD5; // bool
                pub const m_flBiasAndClampYawOffset: usize = 0xD8; // float32
                pub const m_flBiasAndClampPitchOffset: usize = 0xDC; // float32
                pub const m_biasAndClampBlendCurve: usize = 0xE0; // CBlendCurve
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimScriptComponentUpdater = struct {
                pub const m_hScript: usize = 0x30; // AnimScriptHandle
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRagdollUpdateNode = struct {
                pub const m_nWeightListIndex: usize = 0x70; // int32
                pub const m_poseControlMethod: usize = 0x74; // RagdollPoseControl
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBoneConstraintBase = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPathAnimMotorUpdater = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CMaterialAttributeAnimTag = struct {
                pub const m_AttributeName: usize = 0x58; // CUtlString
                pub const m_AttributeType: usize = 0x60; // MatterialAttributeTagType_t
                pub const m_flValue: usize = 0x64; // float32
                pub const m_Color: usize = 0x68; // Color
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFootEventConditionNode__CDefinition = struct {
                pub const m_nSourceStateNodeIdx: usize = 0x10; // int16
                pub const m_phaseCondition: usize = 0x12; // NmFootPhaseCondition_t
                pub const m_eventConditionRules: usize = 0x14; // CNmBitFlags
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmFootEvent = struct {
                pub const m_phase: usize = 0x20; // NmFootPhase_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPhysSurfacePropertiesAudio = struct {
                pub const m_reflectivity: usize = 0x0; // float32
                pub const m_hardnessFactor: usize = 0x4; // float32
                pub const m_roughnessFactor: usize = 0x8; // float32
                pub const m_roughThreshold: usize = 0xC; // float32
                pub const m_hardThreshold: usize = 0x10; // float32
                pub const m_hardVelocityThreshold: usize = 0x14; // float32
                pub const m_flStaticImpactVolume: usize = 0x18; // float32
                pub const m_flOcclusionFactor: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSeqAutoLayer = struct {
                pub const m_nLocalReference: usize = 0x0; // int16
                pub const m_nLocalPose: usize = 0x2; // int16
                pub const m_flags: usize = 0x4; // CSeqAutoLayerFlag
                pub const m_start: usize = 0xC; // float32
                pub const m_peak: usize = 0x10; // float32
                pub const m_tail: usize = 0x14; // float32
                pub const m_end: usize = 0x18; // float32
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelEmbeddedMesh_t = struct {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_nMeshIndex: usize = 0x10; // int32
                pub const m_nDataBlock: usize = 0x14; // int32
                pub const m_nMorphBlock: usize = 0x18; // int32
                pub const m_vertexBuffers: usize = 0x20; // CUtlVector<ModelMeshBufferData_t>
                pub const m_indexBuffers: usize = 0x38; // CUtlVector<ModelMeshBufferData_t>
                pub const m_toolsBuffers: usize = 0x50; // CUtlVector<ModelMeshBufferData_t>
                pub const m_nVBIBBlock: usize = 0x68; // int32
                pub const m_nToolsVBBlock: usize = 0x6C; // int32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PhysSoftbodyDesc_t = struct {
                pub const m_ParticleBoneHash: usize = 0x0; // CUtlVector<uint32>
                pub const m_Particles: usize = 0x18; // CUtlVector<RnSoftbodyParticle_t>
                pub const m_Springs: usize = 0x30; // CUtlVector<RnSoftbodySpring_t>
                pub const m_Capsules: usize = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
                pub const m_InitPose: usize = 0x60; // CUtlVector<CTransform>
                pub const m_ParticleBoneName: usize = 0x78; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseRuntimeMethodArg = struct {
                pub const m_Name: usize = 0x0; // CKV3MemberNameWithStorage
                pub const m_Description: usize = 0x38; // CUtlString
                pub const m_Type: usize = 0x40; // CPulseValueFullType
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimSequenceParams = struct {
                pub const m_flFadeInTime: usize = 0x0; // float32
                pub const m_flFadeOutTime: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CTargetWarpUpdateNode = struct {
                pub const m_eAngleMode: usize = 0x74; // TargetWarpAngleMode_t
                pub const m_hTargetPositionParameter: usize = 0x78; // CAnimParamHandle
                pub const m_hTargetUpVectorParameter: usize = 0x7A; // CAnimParamHandle
                pub const m_hTargetFacePositionParameter: usize = 0x7C; // CAnimParamHandle
                pub const m_hMoveHeadingParameter: usize = 0x7E; // CAnimParamHandle
                pub const m_hDesiredMoveHeadingParameter: usize = 0x80; // CAnimParamHandle
                pub const m_eCorrectionMethod: usize = 0x84; // TargetWarpCorrectionMethod
                pub const m_eTargetWarpTimingMethod: usize = 0x88; // TargetWarpTimingMethod
                pub const m_bTargetFacePositionIsWorldSpace: usize = 0x8C; // bool
                pub const m_bTargetPositionIsWorldSpace: usize = 0x8D; // bool
                pub const m_bOnlyWarpWhenTagIsFound: usize = 0x8E; // bool
                pub const m_bWarpOrientationDuringTranslation: usize = 0x8F; // bool
                pub const m_bWarpAroundCenter: usize = 0x90; // bool
                pub const m_flMaxAngle: usize = 0x94; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVirtualParameterBoolNode__CDefinition = struct {
                pub const m_nChildNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CFollowTargetUpdateNode = struct {
                pub const m_opFixedData: usize = 0x70; // FollowTargetOpFixedSettings_t
                pub const m_hParameterPosition: usize = 0x88; // CAnimParamHandle
                pub const m_hParameterOrientation: usize = 0x8A; // CAnimParamHandle
            };
            // Parent: None
            // Field count: 1
            pub const PulseRuntimeStateOffset_t = struct {
                pub const m_Value: usize = 0x0; // uint16
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCPPScriptComponentUpdater = struct {
                pub const m_scriptsToRun: usize = 0x30; // CUtlVector<CGlobalSymbol>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimData = struct {
                pub const m_name: usize = 0x10; // CBufferString
                pub const m_animArray: usize = 0x20; // CUtlVector<CAnimDesc>
                pub const m_decoderArray: usize = 0x38; // CUtlVector<CAnimDecoder>
                pub const m_nMaxUniqueFrameIndex: usize = 0x50; // int32
                pub const m_segmentArray: usize = 0x58; // CUtlVector<CAnimFrameSegment>
            };
            // Parent: None
            // Field count: 3
            pub const IKSolverSettings_t = struct {
                pub const m_SolverType: usize = 0x0; // IKSolverType
                pub const m_nNumIterations: usize = 0x4; // int32
                pub const m_EndEffectorRotationFixUpMode: usize = 0x8; // EIKEndEffectorRotationFixUpMode
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBinaryUpdateNode = struct {
                pub const m_pChild1: usize = 0x60; // CAnimUpdateNodeRef
                pub const m_pChild2: usize = 0x70; // CAnimUpdateNodeRef
                pub const m_timingBehavior: usize = 0x80; // BinaryNodeTiming
                pub const m_flTimingBlend: usize = 0x84; // float32
                pub const m_bResetChild1: usize = 0x88; // bool
                pub const m_bResetChild2: usize = 0x89; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmParameterizedBlendNode__BlendRange_t = struct {
                pub const m_nInputIdx0: usize = 0x0; // int16
                pub const m_nInputIdx1: usize = 0x2; // int16
                pub const m_parameterValueRange: usize = 0x4; // Range_t
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimKeyData = struct {
                pub const m_name: usize = 0x0; // CBufferString
                pub const m_boneArray: usize = 0x10; // CUtlVector<CAnimBone>
                pub const m_userArray: usize = 0x28; // CUtlVector<CAnimUser>
                pub const m_morphArray: usize = 0x40; // CUtlVector<CBufferString>
                pub const m_nChannelElements: usize = 0x58; // int32
                pub const m_dataChannelArray: usize = 0x60; // CUtlVector<CAnimDataChannelDesc>
            };
            // Parent: None
            // Field count: 1
            pub const AttachmentHandle_t = struct {
                pub const m_Value: usize = 0x0; // uint8
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimMorphDifference = struct {
                pub const m_name: usize = 0x0; // CBufferString
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FootFixedData_t = struct {
                pub const m_vToeOffset: usize = 0x0; // VectorAligned
                pub const m_vHeelOffset: usize = 0x10; // VectorAligned
                pub const m_nTargetBoneIndex: usize = 0x20; // int32
                pub const m_nAnkleBoneIndex: usize = 0x24; // int32
                pub const m_nIKAnchorBoneIndex: usize = 0x28; // int32
                pub const m_ikChainIndex: usize = 0x2C; // int32
                pub const m_flMaxIKLength: usize = 0x30; // float32
                pub const m_nFootIndex: usize = 0x34; // int32
                pub const m_nTagIndex: usize = 0x38; // int32
                pub const m_flMaxRotationLeft: usize = 0x3C; // float32
                pub const m_flMaxRotationRight: usize = 0x40; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMotionGraphGroup = struct {
                pub const m_searchDB: usize = 0x0; // CMotionSearchDB
                pub const m_motionGraphs: usize = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
                pub const m_motionGraphConfigs: usize = 0xD0; // CUtlVector<CMotionGraphConfig>
                pub const m_sampleToConfig: usize = 0xE8; // CUtlVector<int32>
                pub const m_hIsActiveScript: usize = 0x100; // AnimScriptHandle
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_InstructionDebug = struct {
                pub const m_nFlowNodeID: usize = 0x0; // PulseDocNodeID_t
                pub const m_nValueNodeID: usize = 0x4; // PulseDocNodeID_t
                pub const m_SequencePointName: usize = 0x8; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmVectorNegateNode__CDefinition = struct {
                pub const m_nInputValueNodeIdx: usize = 0x10; // int16
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmSyncTrack__Event_t = struct {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_startTime: usize = 0x8; // NmPercent_t
                pub const m_duration: usize = 0xC; // NmPercent_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub const CParticleCollectionRendererVecInput = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmTarget = struct {
                pub const m_transform: usize = 0x0; // CTransform
                pub const m_boneID: usize = 0x20; // CGlobalSymbol
                pub const m_bIsBoneTarget: usize = 0x28; // bool
                pub const m_bIsUsingBoneSpaceOffsets: usize = 0x29; // bool
                pub const m_bHasOffsets: usize = 0x2A; // bool
                pub const m_bIsSet: usize = 0x2B; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmControlParameterIDNode__CDefinition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CNmBodyGroupEvent = struct {
                pub const m_groupName: usize = 0x20; // CUtlString
                pub const m_nGroupValue: usize = 0x28; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CWayPointHelperUpdateNode = struct {
                pub const m_flStartCycle: usize = 0x74; // float32
                pub const m_flEndCycle: usize = 0x78; // float32
                pub const m_bOnlyGoals: usize = 0x7C; // bool
                pub const m_bPreventOvershoot: usize = 0x7D; // bool
                pub const m_bPreventUndershoot: usize = 0x7E; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            pub const CMoodVData = struct {
                pub const m_sModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_nMoodType: usize = 0xE0; // MoodType_t
                pub const m_animationLayers: usize = 0xE8; // CUtlVector<MoodAnimationLayer_t>
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModelConfigElement_AttachedModel = struct {
                pub const m_InstanceName: usize = 0x48; // CUtlString
                pub const m_EntityClass: usize = 0x50; // CUtlString
                pub const m_hModel: usize = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_vOffset: usize = 0x60; // Vector
                pub const m_aAngOffset: usize = 0x6C; // QAngle
                pub const m_AttachmentName: usize = 0x78; // CUtlString
                pub const m_LocalAttachmentOffsetName: usize = 0x80; // CUtlString
                pub const m_AttachmentType: usize = 0x88; // ModelConfigAttachmentType_t
                pub const m_bBoneMergeFlex: usize = 0x8C; // bool
                pub const m_bUserSpecifiedColor: usize = 0x8D; // bool
                pub const m_bUserSpecifiedMaterialGroup: usize = 0x8E; // bool
                pub const m_BodygroupOnOtherModels: usize = 0x90; // CUtlString
                pub const m_MaterialGroupOnOtherModels: usize = 0x98; // CUtlString
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAnimTagManagerUpdater = struct {
                pub const m_tags: usize = 0x38; // CUtlVector<CSmartPtr<CAnimTagBase>>
            };
            // Parent: None
            // Field count: 0
            pub const CParticleProperty = struct {
            };
        };
    };
};
