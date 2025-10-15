// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: animationsystem.dll
        // Class count: 583
        // Enum count: 131
        namespace animationsystem_dll {
            // Alignment: 4
            // Member count: 17
            enum class SeqCmd_t : uint32_t {
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
            enum class CNmEventRelevance_t : uint32_t {
                ClientOnly = 0x0,
                ServerOnly = 0x1,
                ClientAndServer = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class BoneTransformSpace_t : uint32_t {
                BoneTransformSpace_Invalid = 0xFFFFFFFFFFFFFFFF,
                BoneTransformSpace_Parent = 0x0,
                BoneTransformSpace_Model = 0x1,
                BoneTransformSpace_World = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class CAnimationGraphVisualizerPrimitiveType : uint32_t {
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4
            };
            // Alignment: 1
            // Member count: 3
            enum class NmTransitionRule_t : uint8_t {
                AllowTransition = 0x0,
                ConditionallyAllowTransition = 0x1,
                BlockTransition = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class BinaryNodeTiming : uint32_t {
                UseChild1 = 0x0,
                UseChild2 = 0x1,
                SyncChildren = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class NmFollowBoneMode_t : uint8_t {
                RotationAndTranslation = 0x0,
                RotationOnly = 0x1,
                TranslationOnly = 0x2
            };
            // Alignment: 4
            // Member count: 7
            enum class SolveIKChainAnimNodeDebugSetting : uint32_t {
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
            enum class CNmParticleEvent__Type_t : uint32_t {
                Create = 0x0,
                Create_CFG = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleFloatBiasType_t : uint32_t {
                PF_BIAS_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_BIAS_TYPE_STANDARD = 0x0,
                PF_BIAS_TYPE_GAIN = 0x1,
                PF_BIAS_TYPE_EXPONENTIAL = 0x2,
                PF_BIAS_TYPE_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 6
            enum class SharedMovementGait_t : uint8_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2,
                eVeryFast = 0x3,
                eCount = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class OrientationWarpRootMotionSource_t : uint32_t {
                eAnimationOrProcedural = 0x0,
                eAnimationOnly = 0x1,
                eProceduralOnly = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class PulseVariableKeysSource_t : uint32_t {
                PRIVATE = 0x0,
                CPP = 0x1,
                VMAP = 0x2,
                VMDL = 0x3,
                XML = 0x4,
                COUNT = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class IKTargetCoordinateSystem : uint32_t {
                IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
                IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
                IKTARGETCOORDINATESYSTEM_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 31
            enum class ParticleFloatType_t : uint32_t {
                PF_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
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
            enum class CNmFloatAngleMathNode__Operation_t : uint8_t {
                ClampTo180 = 0x0,
                ClampTo360 = 0x1,
                FlipHemisphere = 0x2,
                FlipHemisphereNegate = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : uint32_t {
                FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
                FLAG_LEVEL_COLLISION = 0x10,
                FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20
            };
            // Alignment: 1
            // Member count: 5
            enum class CNmRootMotionOverrideNode__OverrideFlags_t : uint8_t {
                AllowMoveX = 0x0,
                AllowMoveY = 0x1,
                AllowMoveZ = 0x2,
                AllowFacingPitch = 0x3,
                ListenForEvents = 0x4
            };
            // Alignment: 1
            // Member count: 23
            enum class NmEasingOperation_t : uint8_t {
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
            enum class EIKEndEffectorRotationFixUpMode : uint32_t {
                None = 0x0,
                MatchTargetOrientation = 0x1,
                LookAtTargetForward = 0x2,
                MaintainParentOrientation = 0x3,
                Count = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class MatterialAttributeTagType_t : uint32_t {
                MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
                MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class PFNoiseTurbulence_t : uint32_t {
                PF_NOISE_TURB_NONE = 0x0,
                PF_NOISE_TURB_HIGHLIGHT = 0x1,
                PF_NOISE_TURB_FEEDBACK = 0x2,
                PF_NOISE_TURB_LOOPY = 0x3,
                PF_NOISE_TURB_CONTRAST = 0x4,
                PF_NOISE_TURB_ALTERNATE = 0x5
            };
            // Alignment: 1
            // Member count: 4
            enum class NmTargetWarpAlgorithm_t : uint8_t {
                Lerp = 0x0,
                Hermite = 0x1,
                HermiteFeaturePreserving = 0x2,
                Bezier = 0x3
            };
            // Alignment: 1
            // Member count: 4
            enum class NmTransitionRuleCondition_t : uint8_t {
                AnyAllowed = 0x0,
                FullyAllowed = 0x1,
                ConditionallyAllowed = 0x2,
                Blocked = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetWarpTimingMethod : uint32_t {
                ReachDestinationOnRootMotionEnd = 0x0,
                ReachDestinationOnWarpTagEnd = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class ScriptedMoveTo_t : uint32_t {
                eWait = 0x0,
                eMoveWithGait = 0x3,
                eTeleport = 0x4,
                eWaitFacing = 0x5,
                eObsoleteBackCompat1 = 0x1,
                eObsoleteBackCompat2 = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class EDemoBoneSelectionMode : uint32_t {
                CaptureAllBones = 0x0,
                CaptureSelectedBones = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class EPulseGraphExecutionHistoryFlag : uint32_t {
                NO_FLAGS = 0x0,
                CURSOR_ADD_TAG = 0x1,
                CURSOR_REMOVE_TAG = 0x2,
                CURSOR_RETIRED = 0x4,
                REQUIREMENT_PASS = 0x8,
                REQUIREMENT_FAIL = 0x10
            };
            // Alignment: 4
            // Member count: 2
            enum class StepPhase : uint32_t {
                StepPhase_OnGround = 0x0,
                StepPhase_InAir = 0x1
            };
            // Alignment: 4
            // Member count: 26
            enum class FlexOpCode_t : uint32_t {
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
            enum class NmCachedValueMode_t : uint32_t {
                OnEntry = 0x0,
                OnExit = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class AnimNodeNetworkMode : uint32_t {
                ServerAuthoritative = 0x0,
                ClientSimulate = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : uint32_t {
                FLAG_STATIC = 0x1,
                FLAG_KINEMATIC = 0x2,
                FLAG_JOINT = 0x4,
                FLAG_MASS = 0x8,
                FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
                FLAG_DISABLE_CCD = 0x20
            };
            // Alignment: 1
            // Member count: 9
            enum class AnimParamType_t : uint8_t {
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
            enum class NmEasingFunction_t : uint8_t {
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
            enum class ParticleModelType_t : uint32_t {
                PM_TYPE_INVALID = 0x0,
                PM_TYPE_NAMED_VALUE_MODEL = 0x1,
                PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
                PM_TYPE_CONTROL_POINT = 0x3,
                PM_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class IKTargetSource : uint32_t {
                IKTARGETSOURCE_Bone = 0x0,
                IKTARGETSOURCE_AnimgraphParameter = 0x1,
                IKTARGETSOURCE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 15
            enum class PermModelInfo_t__FlagEnum : uint32_t {
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
            enum class CNmFloatMathNode__Operator_t : uint8_t {
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
            enum class CNmSyncEventIndexConditionNode__TriggerMode_t : uint8_t {
                ExactlyAtEventIndex = 0x0,
                GreaterThanEqualToEventIndex = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleFloatRoundType_t : uint32_t {
                PF_ROUND_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_ROUND_TYPE_NEAREST = 0x0,
                PF_ROUND_TYPE_FLOOR = 0x1,
                PF_ROUND_TYPE_CEIL = 0x2,
                PF_ROUND_TYPE_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class PFNoiseType_t : uint32_t {
                PF_NOISE_TYPE_PERLIN = 0x0,
                PF_NOISE_TYPE_SIMPLEX = 0x1,
                PF_NOISE_TYPE_WORLEY = 0x2,
                PF_NOISE_TYPE_CURL = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class AnimParamNetworkSetting : uint32_t {
                Auto = 0x0,
                AlwaysNetwork = 0x1,
                NeverNetwork = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class MorphFlexControllerRemapType_t : uint32_t {
                MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
                MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
                MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
                MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3
            };
            // Alignment: 4
            // Member count: 8
            enum class MeshDrawPrimitiveFlags_t : uint32_t {
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
            enum class TargetWarpAngleMode_t : uint32_t {
                eFacingHeading = 0x0,
                eMoveHeading = 0x1
            };
            // Alignment: 1
            // Member count: 2
            enum class NmIKBlendMode_t : uint8_t {
                Effector = 0x0,
                Pose = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class ModelBoneFlexComponent_t : uint32_t {
                MODEL_BONE_FLEX_INVALID = 0xFFFFFFFFFFFFFFFF,
                MODEL_BONE_FLEX_TX = 0x0,
                MODEL_BONE_FLEX_TY = 0x1,
                MODEL_BONE_FLEX_TZ = 0x2
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmStateNode__TimedEvent_t__Comparison_t : uint8_t {
                LessThanEqual = 0x0,
                GreaterThanEqual = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class PoseType_t : uint8_t {
                POSETYPE_STATIC = 0x0,
                POSETYPE_DYNAMIC = 0x1,
                POSETYPE_INVALID = 0xFF
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmRootMotionData__SamplingMode_t : uint8_t {
                Delta = 0x0,
                WorldSpace = 0x1
            };
            // Alignment: 1
            // Member count: 9
            enum class NmEventConditionRules_t : uint8_t {
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
            enum class AnimValueSource : uint32_t {
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
            enum class CNmTimeConditionNode__Operator_t : uint8_t {
                LessThan = 0x0,
                LessThanEqual = 0x1,
                GreaterThan = 0x2,
                GreaterThanEqual = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class LinearRootMotionBlendMode_t : uint32_t {
                LERP = 0x0,
                NLERP = 0x1,
                SLERP = 0x2
            };
            // Alignment: 4
            // Member count: 1
            enum class RagdollPoseControl : uint32_t {
                Absolute = 0x0
            };
            // Alignment: 4
            // Member count: 6
            enum class IKSolverType : uint32_t {
                IKSOLVER_Perlin = 0x0,
                IKSOLVER_TwoBone = 0x1,
                IKSOLVER_Fabrik = 0x2,
                IKSOLVER_DogLeg3Bone = 0x3,
                IKSOLVER_CCD = 0x4,
                IKSOLVER_COUNT = 0x5
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetWarpCorrectionMethod : uint32_t {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetSelectorAngleMode_t : uint32_t {
                eFacingHeading = 0x0,
                eMoveHeading = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class Blend2DMode : uint32_t {
                Blend2DMode_General = 0x0,
                Blend2DMode_Directional = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorExecResult_t : uint32_t {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2,
                OngoingNotify = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class ChoiceChangeMethod : uint32_t {
                OnReset = 0x0,
                OnCycleEnd = 0x1,
                OnResetOrCycleEnd = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class ChoiceBlendMethod : uint32_t {
                SingleBlendTime = 0x0,
                PerChoiceBlendTimes = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class VPhysXConstraintParams_t__EnumFlags0_t : uint32_t {
                FLAG0_SHIFT_INTERPENETRATE = 0x0,
                FLAG0_SHIFT_CONSTRAIN = 0x1,
                FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
                FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3
            };
            // Alignment: 4
            // Member count: 9
            enum class ParticleFloatMapType_t : uint32_t {
                PF_MAP_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
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
            enum class AnimParamVectorType_t : uint32_t {
                ANIMPARAM_VECTOR_TYPE_NONE = 0x0,
                ANIMPARAM_VECTOR_TYPE_POSITION_WS = 0x1,
                ANIMPARAM_VECTOR_TYPE_POSITION_LS = 0x2,
                ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 0x3,
                ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 0x4
            };
            // Alignment: 1
            // Member count: 3
            enum class CNmCurrentSyncEventNode__InfoType_t : uint8_t {
                IndexAndPercentage = 0x0,
                IndexOnly = 0x1,
                PercentageOnly = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class BlendKeyType : uint32_t {
                BlendKey_UserValue = 0x0,
                BlendKey_Velocity = 0x1,
                BlendKey_Distance = 0x2,
                BlendKey_RemainingDistance = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class StateActionBehavior : uint32_t {
                STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
                STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
                STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
                STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
                STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 0x4
            };
            // Alignment: 1
            // Member count: 4
            enum class NmRootMotionBlendMode_t : uint8_t {
                Blend = 0x0,
                Additive = 0x1,
                IgnoreSource = 0x2,
                IgnoreTarget = 0x3
            };
            // Alignment: 1
            // Member count: 6
            enum class NmFootPhaseCondition_t : uint8_t {
                LeftFootDown = 0x0,
                LeftFootPassing = 0x1,
                LeftPhase = 0x4,
                RightFootDown = 0x2,
                RightFootPassing = 0x3,
                RightPhase = 0x5
            };
            // Alignment: 4
            // Member count: 22
            enum class ModelSkeletonData_t__BoneFlags_t : uint32_t {
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
            enum class MorphBundleType_t : uint32_t {
                MORPH_BUNDLE_TYPE_NONE = 0x0,
                MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
                MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
                MORPH_BUNDLE_TYPE_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmIDComparisonNode__Comparison_t : uint8_t {
                Matches = 0x0,
                DoesntMatch = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class NmPoseBlendMode_t : uint8_t {
                Overlay = 0x0,
                Additive = 0x1,
                ModelSpace = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleFloatInputMode_t : uint32_t {
                PF_INPUT_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_INPUT_MODE_CLAMPED = 0x0,
                PF_INPUT_MODE_LOOPED = 0x1,
                PF_INPUT_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class ResetCycleOption : uint32_t {
                Beginning = 0x0,
                SameCycleAsSource = 0x1,
                InverseSourceCycle = 0x2,
                FixedValue = 0x3,
                SameTimeAsSource = 0x4
            };
            // Alignment: 1
            // Member count: 6
            enum class CNmVectorInfoNode__Info_t : uint8_t {
                X = 0x0,
                Y = 0x1,
                Z = 0x2,
                Length = 0x3,
                AngleHorizontal = 0x4,
                AngleVertical = 0x5
            };
            // Alignment: 4
            // Member count: 4
            enum class IKChannelMode : uint32_t {
                TwoBone = 0x0,
                TwoBone_Translate = 0x1,
                OneBone = 0x2,
                OneBone_Translate = 0x3
            };
            // Alignment: 1
            // Member count: 9
            enum class NmGraphValueType_t : uint8_t {
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
            enum class ParticleFloatRandomMode_t : uint32_t {
                PF_RANDOM_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_RANDOM_MODE_CONSTANT = 0x0,
                PF_RANDOM_MODE_VARYING = 0x1,
                PF_RANDOM_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 33
            enum class PulseValueType_t : uint32_t {
                PVAL_VOID = 0xFFFFFFFFFFFFFFFF,
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
            enum class PFNoiseModifier_t : uint32_t {
                PF_NOISE_MODIFIER_NONE = 0x0,
                PF_NOISE_MODIFIER_LINES = 0x1,
                PF_NOISE_MODIFIER_CLUMPS = 0x2,
                PF_NOISE_MODIFIER_RINGS = 0x3
            };
            // Alignment: 4
            // Member count: 20
            enum class ParticleVecType_t : uint32_t {
                PVEC_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
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
            // Member count: 4
            enum class NmFootPhase_t : uint8_t {
                LeftFootDown = 0x0,
                RightFootPassing = 0x1,
                RightFootDown = 0x2,
                LeftFootPassing = 0x3
            };
            // Alignment: 4
            // Member count: 8
            enum class CNmTargetInfoNode__Info_t : uint32_t {
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
            enum class FootstepLandedFootSoundType_t : uint32_t {
                FOOTSOUND_Left = 0x0,
                FOOTSOUND_Right = 0x1,
                FOOTSOUND_UseOverrideSound = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class FootLockSubVisualization : uint32_t {
                FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
                FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class CNmSoundEvent__Position_t : uint32_t {
                None = 0x0,
                World = 0x1,
                EntityPos = 0x2,
                EntityEyePos = 0x3,
                EntityAttachment = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class NmFrameSnapEventMode_t : uint32_t {
                Floor = 0x0,
                Round = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class FootPinningTimingSource : uint32_t {
                FootMotion = 0x0,
                Tag = 0x1,
                Parameter = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class DampingSpeedFunction : uint32_t {
                NoDamping = 0x0,
                Constant = 0x1,
                Spring = 0x2,
                AsymmetricSpring = 0x3
            };
            // Alignment: 4
            // Member count: 6
            enum class PulseApiFeature_t : uint32_t {
                AF_NONE = 0x0,
                AF_ENTITIES = 0x1,
                AF_PANORAMA = 0x2,
                AF_PARTICLES = 0x8,
                AF_FAKE_ENTITIES = 0x10,
                AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20
            };
            // Alignment: 4
            // Member count: 6
            enum class AnimationProcessingType_t : uint32_t {
                ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
                ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
                ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
                ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
                ANIMATION_PROCESSING_MAX = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class JiggleBoneSimSpace : uint32_t {
                SimSpace_Local = 0x0,
                SimSpace_Model = 0x1,
                SimSpace_World = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class StanceOverrideMode : uint32_t {
                Sequence = 0x0,
                Node = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class IkEndEffectorType : uint32_t {
                IkEndEffector_Attachment = 0x0,
                IkEndEffector_Bone = 0x1
            };
            // Alignment: 2
            // Member count: 3
            enum class AnimScriptType : uint16_t {
                ANIMSCRIPT_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
                ANIMSCRIPT_FUSE_GENERAL = 0x0,
                ANIMSCRIPT_FUSE_STATEMACHINE = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class CNmTimeConditionNode__ComparisonType_t : uint8_t {
                PercentageThroughState = 0x0,
                PercentageThroughSyncEvent = 0x1,
                ElapsedTime = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SeqPoseSetting_t : uint32_t {
                SEQ_POSE_SETTING_CONSTANT = 0x0,
                SEQ_POSE_SETTING_ROTATION = 0x1,
                SEQ_POSE_SETTING_POSITION = 0x2,
                SEQ_POSE_SETTING_VELOCITY = 0x3
            };
            // Alignment: 4
            // Member count: 13
            enum class AnimParamButton_t : uint32_t {
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
            enum class SelectorTagBehavior_t : uint32_t {
                SelectorTagBehavior_OnWhileCurrent = 0x0,
                SelectorTagBehavior_OffWhenFinished = 0x1,
                SelectorTagBehavior_OffBeforeFinished = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class HandshakeTagType_t : uint32_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                eTask = 0x0,
                eMovement = 0x1,
                eCount = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class OrientationWarpTargetOffsetMode_t : uint32_t {
                eLiteralValue = 0x0,
                eParameter = 0x1,
                eAnimationMovementHeading = 0x2,
                eAnimationMovementHeadingAtEnd = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class OrientationWarpMode_t : uint32_t {
                eInvalid = 0x0,
                eAngle = 0x1,
                eWorldPosition = 0x2
            };
            // Alignment: 2
            // Member count: 125
            enum class PulseInstructionCode_t : uint16_t {
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
            enum class ParticleTransformType_t : uint32_t {
                PT_TYPE_INVALID = 0x0,
                PT_TYPE_NAMED_VALUE = 0x1,
                PT_TYPE_CONTROL_POINT = 0x2,
                PT_TYPE_CONTROL_POINT_RANGE = 0x3,
                PT_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 18
            enum class ParticleAttachment_t : uint32_t {
                PATTACH_INVALID = 0xFFFFFFFFFFFFFFFF,
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
            enum class FieldNetworkOption : uint32_t {
                Auto = 0x0,
                ForceEnable = 0x1,
                ForceDisable = 0x2
            };
            // Alignment: 1
            // Member count: 6
            enum class NmGraphEventTypeCondition_t : uint8_t {
                Entry = 0x0,
                FullyInState = 0x1,
                Exit = 0x2,
                Timed = 0x3,
                Generic = 0x4,
                Any = 0x5
            };
            // Alignment: 1
            // Member count: 10
            enum class CNmTransitionNode__TransitionOptions_t : uint8_t {
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
            enum class CNmFloatComparisonNode__Comparison_t : uint8_t {
                GreaterThanEqual = 0x0,
                LessThanEqual = 0x1,
                NearEqual = 0x2,
                GreaterThan = 0x3,
                LessThan = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class VPhysXJoint_t__Flags_t : uint32_t {
                JOINT_FLAGS_NONE = 0x0,
                JOINT_FLAGS_BODY1_FIXED = 0x1,
                JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ScriptedHeldWeaponBehavior_t : uint32_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                eHolster = 0x0,
                eDeploy = 0x1,
                eDrop = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class VelocityMetricMode : uint8_t {
                DirectionOnly = 0x0,
                MagnitudeOnly = 0x1,
                DirectionAndMagnitude = 0x2
            };
            // Alignment: 1
            // Member count: 5
            enum class FacingMode : uint8_t {
                FacingMode_Invalid = 0x0,
                FacingMode_Manual = 0x1,
                FacingMode_Path = 0x2,
                FacingMode_LookTarget = 0x3,
                FacingMode_ManualPosition = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class AimMatrixBlendMode : uint32_t {
                AimMatrixBlendMode_None = 0x0,
                AimMatrixBlendMode_Additive = 0x1,
                AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
                AimMatrixBlendMode_BoneMask = 0x3
            };
            // Alignment: 4
            // Member count: 7
            enum class AnimationSnapshotType_t : uint32_t {
                ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
                ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
                ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
                ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
                ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
                ANIMATION_SNAPSHOT_MAX = 0x6
            };
            // Alignment: 1
            // Member count: 4
            enum class NmTargetWarpRule_t : uint8_t {
                WarpXY = 0x0,
                WarpZ = 0x1,
                WarpXYZ = 0x2,
                RotationOnly = 0x3
            };
            // Alignment: 4
            // Member count: 8
            enum class FootFallTagFoot_t : uint32_t {
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
            enum class ChoiceMethod : uint32_t {
                WeightedRandom = 0x0,
                WeightedRandomNoRepeat = 0x1,
                Iterate = 0x2,
                IterateRandom = 0x3
            };
            // Alignment: 4
            // Member count: 14
            enum class AnimVectorSource : uint32_t {
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
            enum class IkTargetType : uint32_t {
                IkTarget_Attachment = 0x0,
                IkTarget_Bone = 0x1,
                IkTarget_Parameter_ModelSpace = 0x2,
                IkTarget_Parameter_WorldSpace = 0x3
            };
            // Alignment: 1
            // Member count: 3
            enum class RenderMeshSlotType_t : uint8_t {
                RENDERMESH_SLOT_INVALID = 0xFFFFFFFFFFFFFFFF,
                RENDERMESH_SLOT_PER_VERTEX = 0x0,
                RENDERMESH_SLOT_PER_INSTANCE = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class BoneMaskBlendSpace : uint32_t {
                BlendSpace_Parent = 0x0,
                BlendSpace_Model = 0x1,
                BlendSpace_Model_RotationOnly = 0x2,
                BlendSpace_Model_TranslationOnly = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class ModelConfigAttachmentType_t : uint32_t {
                MODEL_CONFIG_ATTACHMENT_INVALID = 0xFFFFFFFFFFFFFFFF,
                MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
                MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
                MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
                MODEL_CONFIG_ATTACHMENT_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class BinaryNodeChildOption : uint32_t {
                Child1 = 0x0,
                Child2 = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class NPCPhysicsHullType_t : uint32_t {
                eInvalid = 0x0,
                eGroundCapsule = 0x1,
                eCenteredCapsule = 0x2,
                eGenericCapsule = 0x3,
                eGroundBox = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseDomainValueType_t : uint32_t {
                INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_NAME = 0x0,
                PANEL_ID = 0x1,
                COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class JumpCorrectionMethod : uint32_t {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class MoodType_t : uint32_t {
                eMoodType_Head = 0x0,
                eMoodType_Body = 0x1
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFrameBlockAnim {
                constexpr std::ptrdiff_t m_nStartFrame = 0x0; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0x4; // int32
                constexpr std::ptrdiff_t m_segmentIndexArray = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CZeroPoseUpdateNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSlowDownOnSlopesUpdateNode {
                constexpr std::ptrdiff_t m_flSlowDownStrength = 0x70; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace COrientationWarpUpdateNode {
                constexpr std::ptrdiff_t m_eMode = 0x74; // OrientationWarpMode_t
                constexpr std::ptrdiff_t m_hTargetParam = 0x78; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetPositionParam = 0x7A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hFallbackTargetPositionParam = 0x7C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eTargetOffsetMode = 0x80; // OrientationWarpTargetOffsetMode_t
                constexpr std::ptrdiff_t m_flTargetOffset = 0x84; // float32
                constexpr std::ptrdiff_t m_hTargetOffsetParam = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0x90; // CAnimInputDamping
                constexpr std::ptrdiff_t m_eRootMotionSource = 0xA8; // OrientationWarpRootMotionSource_t
                constexpr std::ptrdiff_t m_flMaxRootMotionScale = 0xAC; // float32
                constexpr std::ptrdiff_t m_bEnablePreferredRotationDirection = 0xB0; // bool
                constexpr std::ptrdiff_t m_ePreferredRotationDirection = 0xB4; // AnimValueSource
                constexpr std::ptrdiff_t m_flPreferredRotationThreshold = 0xB8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sComment = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_group = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_componentName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_bNetworkingRequested = 0x68; // bool
                constexpr std::ptrdiff_t m_bIsReferenced = 0x69; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSequenceFinishedAnimTag {
                constexpr std::ptrdiff_t m_sequenceName = 0x58; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSceneObjectData {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
                constexpr std::ptrdiff_t m_drawCalls = 0x18; // CUtlLeanVector<CMaterialDrawDescriptor>
                constexpr std::ptrdiff_t m_drawBounds = 0x28; // CUtlLeanVector<AABB_t>
                constexpr std::ptrdiff_t m_meshlets = 0x38; // CUtlLeanVector<CMeshletDescriptor>
                constexpr std::ptrdiff_t m_vTintColor = 0x48; // Vector4D
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycle {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            // MCustomFGDMetadata
            namespace CParticleModelInput {
                constexpr std::ptrdiff_t m_nType = 0x10; // ParticleModelType_t
                constexpr std::ptrdiff_t m_NamedValue = 0x18; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_nControlPoint = 0x58; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CInputStreamUpdateNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CIntAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // int32
                constexpr std::ptrdiff_t m_minValue = 0x84; // int32
                constexpr std::ptrdiff_t m_maxValue = 0x88; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmParameterizedBlendNode__CDefinition {
                constexpr std::ptrdiff_t m_sourceNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_nInputParameterValueNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_bAllowLooping = 0x3A; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CNmScaleTask {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFrameSnapEvent {
                constexpr std::ptrdiff_t m_frameSnapMode = 0x20; // NmFrameSnapEventMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimNodePath {
                constexpr std::ptrdiff_t m_path = 0x0; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nCount = 0x2C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimNodeOutputID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncTrack {
                constexpr std::ptrdiff_t m_syncEvents = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t,10>
                constexpr std::ptrdiff_t m_nStartEventOffset = 0xA8; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqBoneMaskList {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nLocalBoneArray = 0x10; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_flBoneWeightArray = 0x28; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDefaultMorphCtrlWeight = 0x40; // float32
                constexpr std::ptrdiff_t m_morphCtrlWeightArray = 0x48; // CUtlVector<std::pair<CBufferString,float32>>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimEncodedFrames {
                constexpr std::ptrdiff_t m_fileName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nFrames = 0x10; // int32
                constexpr std::ptrdiff_t m_nFramesPerBlock = 0x14; // int32
                constexpr std::ptrdiff_t m_frameblockArray = 0x18; // CUtlVector<CAnimFrameBlockAnim>
                constexpr std::ptrdiff_t m_usageDifferences = 0x30; // CAnimEncodeDifference
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SampleCode {
                constexpr std::ptrdiff_t m_subCode = 0x0; // uint8[8]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCachedPose {
                constexpr std::ptrdiff_t m_transforms = 0x8; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_morphWeights = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_hSequence = 0x38; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x3C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTransitionEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_requireRuleID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eventConditionRules = 0x18; // CNmBitFlags
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x1C; // int16
                constexpr std::ptrdiff_t m_ruleCondition = 0x1E; // NmTransitionRuleCondition_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CTaskStatusAnimTag {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphConfig {
                constexpr std::ptrdiff_t m_paramValues = 0x0; // float32[4]
                constexpr std::ptrdiff_t m_flDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_nMotionIndex = 0x14; // MotionIndex
                constexpr std::ptrdiff_t m_nSampleStart = 0x18; // int32
                constexpr std::ptrdiff_t m_nSampleCount = 0x1C; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionSearchNode {
                constexpr std::ptrdiff_t m_children = 0x0; // CUtlVector<CMotionSearchNode*>
                constexpr std::ptrdiff_t m_quantizer = 0x18; // CVectorQuantizer
                constexpr std::ptrdiff_t m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
                constexpr std::ptrdiff_t m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_selectableSamples = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimActivity {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nActivity = 0x10; // int32
                constexpr std::ptrdiff_t m_nFlags = 0x14; // int32
                constexpr std::ptrdiff_t m_nWeight = 0x18; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptManager {
                constexpr std::ptrdiff_t m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationDecodeDebugDumpElement_t {
                constexpr std::ptrdiff_t m_nEntityIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_poseParams = 0x10; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_decodeOps = 0x28; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_internalOps = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_decodedAnims = 0x58; // CUtlVector<CUtlString>
            }
            // Parent: 
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MovementGaitId_t {
                constexpr std::ptrdiff_t m_sId = 0x0; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeVarIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ConfigIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nConfig = 0x2; // uint16
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXCollisionAttributes_t {
                constexpr std::ptrdiff_t m_CollisionGroup = 0x0; // uint32
                constexpr std::ptrdiff_t m_InteractAs = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractWith = 0x20; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractExclude = 0x38; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_CollisionGroupString = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceUpdateNode {
                constexpr std::ptrdiff_t m_hSequence = 0x78; // HSequence
                constexpr std::ptrdiff_t m_duration = 0x7C; // float32
                constexpr std::ptrdiff_t m_paramSpans = 0x80; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x98; // CUtlVector<TagSpan_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmPassthroughNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipReferenceNode__CDefinition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDefinition__ExternalGraphSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_slotID = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeEntrypointIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAimCameraUpdateNode {
                constexpr std::ptrdiff_t m_hParameterPosition = 0x70; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterOrientation = 0x72; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterSpineRotationWeight = 0x74; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterPelvisOffset = 0x76; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterUseIK = 0x78; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterCameraOnly = 0x7A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterWeaponDepenetrationDistance = 0x7C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterWeaponDepenetrationDelta = 0x7E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterCameraClearanceDistance = 0x80; // CAnimParamHandle
                constexpr std::ptrdiff_t m_opFixedSettings = 0x88; // AimCameraOpFixedSettings_t
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeDomainValueIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqSeqDescFlag {
                constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
                constexpr std::ptrdiff_t m_bSnap = 0x1; // bool
                constexpr std::ptrdiff_t m_bAutoplay = 0x2; // bool
                constexpr std::ptrdiff_t m_bPost = 0x3; // bool
                constexpr std::ptrdiff_t m_bHidden = 0x4; // bool
                constexpr std::ptrdiff_t m_bMulti = 0x5; // bool
                constexpr std::ptrdiff_t m_bLegacyDelta = 0x6; // bool
                constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x7; // bool
                constexpr std::ptrdiff_t m_bLegacyCyclepose = 0x8; // bool
                constexpr std::ptrdiff_t m_bLegacyRealtime = 0x9; // bool
                constexpr std::ptrdiff_t m_bModelDoc = 0xA; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelInfo_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_vHullMin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vHullMax = 0x10; // Vector
                constexpr std::ptrdiff_t m_vViewMin = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vViewMax = 0x28; // Vector
                constexpr std::ptrdiff_t m_flMass = 0x34; // float32
                constexpr std::ptrdiff_t m_vEyePosition = 0x38; // Vector
                constexpr std::ptrdiff_t m_flMaxEyeDeflection = 0x44; // float32
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_keyValueText = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace StanceInfo_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
                constexpr std::ptrdiff_t m_flDirection = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            namespace IKBoneNameAndIndex_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
                constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStanceScaleUpdateNode {
                constexpr std::ptrdiff_t m_hParam = 0x70; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeInvokeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBoneMaskBlendNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceMaskNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nTargetMaskNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_nBlendWeightValueNodeIdx = 0x14; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDEventNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
                constexpr std::ptrdiff_t m_defaultValue = 0x18; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace HitReactFixedSettings_t {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nEffectedBoneCount = 0x4; // int32
                constexpr std::ptrdiff_t m_flMaxImpactForce = 0x8; // float32
                constexpr std::ptrdiff_t m_flMinImpactForce = 0xC; // float32
                constexpr std::ptrdiff_t m_flWhipImpactScale = 0x10; // float32
                constexpr std::ptrdiff_t m_flCounterRotationScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flDistanceFadeScale = 0x18; // float32
                constexpr std::ptrdiff_t m_flPropagationScale = 0x1C; // float32
                constexpr std::ptrdiff_t m_flWhipDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x24; // float32
                constexpr std::ptrdiff_t m_flWhipSpringStrength = 0x28; // float32
                constexpr std::ptrdiff_t m_flMaxAngleRadians = 0x2C; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32
                constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0x34; // float32
                constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0x38; // float32
                constexpr std::ptrdiff_t m_flHipDipImpactScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_flHipDipDelay = 0x40; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmPoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sComment = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_group = 0x28; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tagID = 0x30; // AnimTagID
                constexpr std::ptrdiff_t m_bIsReferenced = 0x48; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CPerParticleVecInput {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraph {
                constexpr std::ptrdiff_t m_paramSpans = 0x10; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_nParameterCount = 0x48; // int32
                constexpr std::ptrdiff_t m_nConfigStartIndex = 0x4C; // int32
                constexpr std::ptrdiff_t m_nConfigCount = 0x50; // int32
                constexpr std::ptrdiff_t m_bLoop = 0x54; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVectorInfoNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_desiredInfo = 0x12; // CNmVectorInfoNode::Info_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationSnapshot_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x110; // int32
                constexpr std::ptrdiff_t m_modelName = 0x118; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace CNmBlendTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmVectorValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqTransition {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmPoseTask {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphSettingsGroup {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVirtualParameterTargetNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDebugReplay {
                constexpr std::ptrdiff_t m_animGraphFileName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
                constexpr std::ptrdiff_t m_startIndex = 0x60; // int32
                constexpr std::ptrdiff_t m_writeIndex = 0x64; // int32
                constexpr std::ptrdiff_t m_frameCount = 0x68; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CVectorAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // Vector
                constexpr std::ptrdiff_t m_bInterpolate = 0x8C; // bool
                constexpr std::ptrdiff_t m_vectorType = 0x90; // AnimParamVectorType_t
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedPoseReadTask {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmStateMachineNode__StateDefinition_t {
                constexpr std::ptrdiff_t m_nStateNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_nEntryConditionNodeIdx = 0x2; // int16
                constexpr std::ptrdiff_t m_transitionDefinitions = 0x8; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::TransitionDefinition_t,5>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStanceOverrideUpdateNode {
                constexpr std::ptrdiff_t m_footStanceInfo = 0x70; // CUtlVector<StanceInfo_t>
                constexpr std::ptrdiff_t m_pStanceSourceNode = 0x88; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hParameter = 0x98; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eMode = 0x9C; // StanceOverrideMode
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysShapeMarkup_t {
                constexpr std::ptrdiff_t m_nBodyInAggregate = 0x0; // int32
                constexpr std::ptrdiff_t m_nShapeInBody = 0x4; // int32
                constexpr std::ptrdiff_t m_sHitGroup = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace LookAtBone_t {
                constexpr std::ptrdiff_t m_index = 0x0; // int32
                constexpr std::ptrdiff_t m_weight = 0x4; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTransitionNode__CDefinition {
                constexpr std::ptrdiff_t m_nTargetStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nDurationOverrideNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_timeOffsetOverrideNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_startBoneMaskNodeIdx = 0x16; // int16
                constexpr std::ptrdiff_t m_flDuration = 0x18; // float32
                constexpr std::ptrdiff_t m_boneMaskBlendInTimePercentage = 0x1C; // NmPercent_t
                constexpr std::ptrdiff_t m_flTimeOffset = 0x20; // float32
                constexpr std::ptrdiff_t m_transitionOptions = 0x24; // CNmBitFlags
                constexpr std::ptrdiff_t m_targetSyncIDNodeIdx = 0x28; // int16
                constexpr std::ptrdiff_t m_blendWeightEasing = 0x2A; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_rootMotionBlend = 0x2B; // NmRootMotionBlendMode_t
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeRegisterIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatEaseNode__CDefinition {
                constexpr std::ptrdiff_t m_flEaseTime = 0x10; // float32
                constexpr std::ptrdiff_t m_flStartValue = 0x14; // float32
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_easingOp = 0x1A; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_bUseStartValue = 0x1B; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimEncodeDifference {
                constexpr std::ptrdiff_t m_boneArray = 0x0; // CUtlVector<CAnimBoneDifference>
                constexpr std::ptrdiff_t m_morphArray = 0x18; // CUtlVector<CAnimMorphDifference>
                constexpr std::ptrdiff_t m_userArray = 0x30; // CUtlVector<CAnimUserDifference>
                constexpr std::ptrdiff_t m_bHasRotationBitArray = 0x48; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasMovementBitArray = 0x60; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasMorphBitArray = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasUserBitArray = 0x90; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRootUpdateNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTargetOffsetNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_bIsBoneSpaceOffset = 0x12; // bool
                constexpr std::ptrdiff_t m_rotationOffset = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_translationOffset = 0x30; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphUpdateNode {
                constexpr std::ptrdiff_t m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatAngleMathNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_operation = 0x12; // CNmFloatAngleMathNode::Operation_t
            }
            // Parent: None
            // Field count: 1
            namespace PulseCursorID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParamHandle {
                constexpr std::ptrdiff_t m_type = 0x0; // AnimParamType_t
                constexpr std::ptrdiff_t m_index = 0x1; // uint8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WeightList {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_weights = 0x8; // CUtlVector<float32>
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nMotion = 0x2; // uint16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FollowAttachmentSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_boneIndex = 0x80; // int32
                constexpr std::ptrdiff_t m_attachmentHandle = 0x84; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bMatchTranslation = 0x85; // bool
                constexpr std::ptrdiff_t m_bMatchRotation = 0x86; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmReferencedGraphNode__CDefinition {
                constexpr std::ptrdiff_t m_nReferencedGraphIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nFallbackNodeIdx = 0x12; // int16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimNodeID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLookComponentUpdater {
                constexpr std::ptrdiff_t m_hLookHeading = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookHeadingNormalized = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookHeadingVelocity = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookPitch = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDistance = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDirection = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTarget = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTargetWorldSpace = 0x42; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x44; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphNetworkSettings {
                constexpr std::ptrdiff_t m_bNetworkingEnabled = 0x20; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSingleFrameUpdateNode {
                constexpr std::ptrdiff_t m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
                constexpr std::ptrdiff_t m_hPoseCacheHandle = 0x70; // CPoseHandle
                constexpr std::ptrdiff_t m_hSequence = 0x74; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x78; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmChainLookatNode__CDefinition {
                constexpr std::ptrdiff_t m_chainEndBoneID = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nLookatTargetNodeIdx = 0x20; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x22; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x24; // float32
                constexpr std::ptrdiff_t m_nChainLength = 0x28; // uint8
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x29; // bool
                constexpr std::ptrdiff_t m_chainForwardDir = 0x2C; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFollowBoneNode__CDefinition {
                constexpr std::ptrdiff_t m_bone = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_followTargetBone = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x28; // int16
                constexpr std::ptrdiff_t m_mode = 0x2A; // NmFollowBoneMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlockSelectionMetricEvaluator {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRemapValueComponentUpdater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CRemapValueUpdateItem>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigList {
                constexpr std::ptrdiff_t m_bHideMaterialGroupInTools = 0x0; // bool
                constexpr std::ptrdiff_t m_bHideRenderColorInTools = 0x1; // bool
                constexpr std::ptrdiff_t m_Configs = 0x8; // CUtlVector<CModelConfig*>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqAutoLayerFlag {
                constexpr std::ptrdiff_t m_bPost = 0x0; // bool
                constexpr std::ptrdiff_t m_bSpline = 0x1; // bool
                constexpr std::ptrdiff_t m_bXFade = 0x2; // bool
                constexpr std::ptrdiff_t m_bNoBlend = 0x3; // bool
                constexpr std::ptrdiff_t m_bLocal = 0x4; // bool
                constexpr std::ptrdiff_t m_bPose = 0x5; // bool
                constexpr std::ptrdiff_t m_bFetchFrame = 0x6; // bool
                constexpr std::ptrdiff_t m_bSubtract = 0x7; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimStateID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
                constexpr std::ptrdiff_t m_eventIDs = 0x18; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelBoneFlexDriver_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_boneNameToken = 0x8; // uint32
                constexpr std::ptrdiff_t m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootPinningUpdateNode {
                constexpr std::ptrdiff_t m_poseOpFixedData = 0x78; // FootPinningPoseOpFixedData_t
                constexpr std::ptrdiff_t m_eTimingSource = 0xA8; // FootPinningTimingSource
                constexpr std::ptrdiff_t m_params = 0xB0; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_bResetChild = 0xC8; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqPoseSetting {
                constexpr std::ptrdiff_t m_sPoseParameter = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_sAttachment = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_sReferenceSequence = 0x20; // CBufferString
                constexpr std::ptrdiff_t m_flValue = 0x30; // float32
                constexpr std::ptrdiff_t m_bX = 0x34; // bool
                constexpr std::ptrdiff_t m_bY = 0x35; // bool
                constexpr std::ptrdiff_t m_bZ = 0x36; // bool
                constexpr std::ptrdiff_t m_eType = 0x38; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseGraphExecutionHistoryCursorDesc_t {
                constexpr std::ptrdiff_t vecAncestorCursorIDs = 0x0; // CUtlVector<PulseCursorID_t>
                constexpr std::ptrdiff_t nSpawnNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t nRetiredAtNodeID = 0x1C; // PulseDocNodeID_t
                constexpr std::ptrdiff_t flLastReferenced = 0x20; // float32
                constexpr std::ptrdiff_t nLastValidEntryIdx = 0x24; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVirtualParameterFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAttachment {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_influenceNames = 0x8; // CUtlString[3]
                constexpr std::ptrdiff_t m_vInfluenceRotations = 0x20; // Quaternion[3]
                constexpr std::ptrdiff_t m_vInfluenceOffsets = 0x50; // Vector[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x74; // float32[3]
                constexpr std::ptrdiff_t m_bInfluenceRootTransform = 0x80; // bool[3]
                constexpr std::ptrdiff_t m_nInfluences = 0x83; // uint8
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x84; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceUpdateNodeBase {
                constexpr std::ptrdiff_t m_playbackSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x70; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDrawCullingData {
                constexpr std::ptrdiff_t m_ConeAxis = 0x0; // int8[3]
                constexpr std::ptrdiff_t m_ConeCutoff = 0x3; // int8
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXJoint_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // uint16
                constexpr std::ptrdiff_t m_nBody1 = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBody2 = 0x4; // uint16
                constexpr std::ptrdiff_t m_nFlags = 0x6; // uint16
                constexpr std::ptrdiff_t m_Frame1 = 0x10; // CTransform
                constexpr std::ptrdiff_t m_Frame2 = 0x30; // CTransform
                constexpr std::ptrdiff_t m_bEnableCollision = 0x50; // bool
                constexpr std::ptrdiff_t m_bIsLinearConstraintDisabled = 0x51; // bool
                constexpr std::ptrdiff_t m_bIsAngularConstraintDisabled = 0x52; // bool
                constexpr std::ptrdiff_t m_bEnableLinearLimit = 0x53; // bool
                constexpr std::ptrdiff_t m_LinearLimit = 0x54; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableLinearMotor = 0x5C; // bool
                constexpr std::ptrdiff_t m_vLinearTargetVelocity = 0x60; // Vector
                constexpr std::ptrdiff_t m_flMaxForce = 0x6C; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x70; // bool
                constexpr std::ptrdiff_t m_SwingLimit = 0x74; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x7C; // bool
                constexpr std::ptrdiff_t m_TwistLimit = 0x80; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableAngularMotor = 0x88; // bool
                constexpr std::ptrdiff_t m_vAngularTargetVelocity = 0x8C; // Vector
                constexpr std::ptrdiff_t m_flMaxTorque = 0x98; // float32
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x9C; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAngularFrequency = 0xA4; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0xA8; // float32
                constexpr std::ptrdiff_t m_flFriction = 0xAC; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0xB0; // float32
                constexpr std::ptrdiff_t m_flElasticDamping = 0xB4; // float32
                constexpr std::ptrdiff_t m_flPlasticity = 0xB8; // float32
                constexpr std::ptrdiff_t m_Tag = 0xC0; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateNodeTransitionData {
                constexpr std::ptrdiff_t m_curve = 0x0; // CBlendCurve
                constexpr std::ptrdiff_t m_blendDuration = 0x8; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_resetCycleValue = 0x10; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_bReset = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_resetCycleOption = 0x0; // bitfield:3
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTimeRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x50; // bool
                constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x58; // bool
                constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x5C; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleInput {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement {
                constexpr std::ptrdiff_t m_ElementName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmControlParameterVectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootFixedSettings {
                constexpr std::ptrdiff_t m_traceSettings = 0x0; // TraceSettings_t
                constexpr std::ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_flFootBaseLength = 0x20; // float32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28; // float32
                constexpr std::ptrdiff_t m_footstepLandedTagIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_bEnableTracing = 0x30; // bool
                constexpr std::ptrdiff_t m_flTraceAngleBlend = 0x34; // float32
                constexpr std::ptrdiff_t m_nDisableTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_nFootIndex = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfig {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
                constexpr std::ptrdiff_t m_bTopLevel = 0x20; // bool
                constexpr std::ptrdiff_t m_bActiveInEditorByDefault = 0x21; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimComponentID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXAggregateData_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint16
                constexpr std::ptrdiff_t m_nRefCounter = 0x2; // uint16
                constexpr std::ptrdiff_t m_bonesHash = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneNames = 0x20; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_indexNames = 0x38; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_indexHash = 0x50; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
                constexpr std::ptrdiff_t m_shapeMarkups = 0x98; // CUtlVector<PhysShapeMarkup_t>
                constexpr std::ptrdiff_t m_constraints2 = 0xB0; // CUtlVector<VPhysXConstraint2_t>
                constexpr std::ptrdiff_t m_joints = 0xC8; // CUtlVector<VPhysXJoint_t>
                constexpr std::ptrdiff_t m_pFeModel = 0xE0; // PhysFeModelDesc_t*
                constexpr std::ptrdiff_t m_boneParents = 0xE8; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_surfacePropertyHashes = 0x100; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_collisionAttributes = 0x118; // CUtlVector<VPhysXCollisionAttributes_t>
                constexpr std::ptrdiff_t m_debugPartNames = 0x130; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_embeddedKeyvalues = 0x148; // CUtlString
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDefinition {
                constexpr std::ptrdiff_t m_variationID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_persistentNodeIndices = 0x10; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_nRootNodeIdx = 0x28; // int16
                constexpr std::ptrdiff_t m_controlParameterIDs = 0x30; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_virtualParameterIDs = 0x48; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_virtualParameterNodeIndices = 0x60; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_referencedGraphSlots = 0x78; // CUtlVector<CNmGraphDefinition::ReferencedGraphSlot_t>
                constexpr std::ptrdiff_t m_externalGraphSlots = 0x90; // CUtlVector<CNmGraphDefinition::ExternalGraphSlot_t>
                constexpr std::ptrdiff_t m_nodePaths = 0x118; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_resources = 0x130; // CUtlVector<CStrongHandleVoid>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x28; // CUtlLeanVectorFixedGrowable<int16,5>
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDemoCaptureSettings {
                constexpr std::ptrdiff_t m_vecErrorRangeSplineRotation = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeSplineTranslation = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeSplineScale = 0x10; // Vector2D
                constexpr std::ptrdiff_t m_flIkRotation_MaxSplineError = 0x18; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1C; // float32
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationRotation = 0x20; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationTranslation = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationScale = 0x30; // Vector2D
                constexpr std::ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x38; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x3C; // float32
                constexpr std::ptrdiff_t m_baseSequence = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_nBaseSequenceFrame = 0x48; // int32
                constexpr std::ptrdiff_t m_boneSelectionMode = 0x4C; // EDemoBoneSelectionMode
                constexpr std::ptrdiff_t m_bones = 0x50; // CUtlVector<BoneDemoCaptureSettings_t>
                constexpr std::ptrdiff_t m_ikChains = 0x68; // CUtlVector<IKDemoCaptureSettings_t>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IKDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_parentBoneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_eMode = 0x8; // IKChannelMode
                constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneStart = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneEnd = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqMultiFetchFlag {
                constexpr std::ptrdiff_t m_bRealtime = 0x0; // bool
                constexpr std::ptrdiff_t m_bCylepose = 0x1; // bool
                constexpr std::ptrdiff_t m_b0D = 0x2; // bool
                constexpr std::ptrdiff_t m_b1D = 0x3; // bool
                constexpr std::ptrdiff_t m_b2D = 0x4; // bool
                constexpr std::ptrdiff_t m_b2D_TRI = 0x5; // bool
            }
            // Parent: None
            // Field count: 3
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_InparamsWhichCanBeMoved = 0x10; // CKV3MemberNameSet
                constexpr std::ptrdiff_t m_Outparams = 0x20; // KeyValues3
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXRange_t {
                constexpr std::ptrdiff_t m_flMin = 0x0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x4; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStopAtGoalUpdateNode {
                constexpr std::ptrdiff_t m_flOuterRadius = 0x74; // float32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x78; // float32
                constexpr std::ptrdiff_t m_flMaxScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flMinScale = 0x80; // float32
                constexpr std::ptrdiff_t m_damping = 0x88; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDEventPercentageThroughNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
                constexpr std::ptrdiff_t m_eventID = 0x18; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimBoneDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_parent = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_posError = 0x20; // Vector
                constexpr std::ptrdiff_t m_bHasRotation = 0x2C; // bool
                constexpr std::ptrdiff_t m_bHasMovement = 0x2D; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCachedBoolNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_mode = 0x14; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimCycle {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CActionComponentUpdater {
                constexpr std::ptrdiff_t m_actions = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedPathAnimMotorUpdater {
                constexpr std::ptrdiff_t m_flAnticipationTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMinSpeedScale = 0x30; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flSpringConstant = 0x38; // float32
                constexpr std::ptrdiff_t m_flMinSpringTension = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxSpringTension = 0x40; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCachedFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_mode = 0x14; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatSwitchNode__CDefinition {
                constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_flFalseValue = 0x18; // float32
                constexpr std::ptrdiff_t m_flTrueValue = 0x1C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEntityAttributeEventBase {
                constexpr std::ptrdiff_t m_attributeName = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVirtualParameterBoneMaskNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStoppingRadius = 0x70; // float32
                constexpr std::ptrdiff_t m_flStoppingSpeedScale = 0x74; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialGroup_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphBundleData {
                constexpr std::ptrdiff_t m_flULeftSrc = 0x0; // float32
                constexpr std::ptrdiff_t m_flVTopSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_offsets = 0x8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_ranges = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_UserPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSolveIKTargetHandle_t {
                constexpr std::ptrdiff_t m_positionHandle = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_orientationHandle = 0x2; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootAdjustmentUpdateNode {
                constexpr std::ptrdiff_t m_clips = 0x78; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hBasePoseCacheHandle = 0x90; // CPoseHandle
                constexpr std::ptrdiff_t m_facingTarget = 0x94; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnTimeMin = 0x98; // float32
                constexpr std::ptrdiff_t m_flTurnTimeMax = 0x9C; // float32
                constexpr std::ptrdiff_t m_flStepHeightMax = 0xA0; // float32
                constexpr std::ptrdiff_t m_flStepHeightMaxAngle = 0xA4; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0xA8; // bool
                constexpr std::ptrdiff_t m_bAnimationDriven = 0xA9; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoreoUpdateNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAimConstraint {
                constexpr std::ptrdiff_t m_qAimOffset = 0x60; // Quaternion
                constexpr std::ptrdiff_t m_nUpType = 0x70; // uint32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMaterialDrawDescriptor__RigidMeshPart_t {
                constexpr std::ptrdiff_t m_nRigidBLASIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_nBoneIndex = 0x2; // int16
                constexpr std::ptrdiff_t m_nStartIndexOffset = 0x4; // uint32
                constexpr std::ptrdiff_t m_nPrimitiveCount = 0x8; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFootFallAnimTag {
                constexpr std::ptrdiff_t m_foot = 0x58; // FootFallTagFoot_t
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMaterialDrawDescriptor {
                constexpr std::ptrdiff_t m_flUvDensity = 0x0; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x4; // Vector
                constexpr std::ptrdiff_t m_flAlpha = 0x10; // float32
                constexpr std::ptrdiff_t m_nNumMeshlets = 0x16; // uint16
                constexpr std::ptrdiff_t m_nFirstMeshlet = 0x1C; // uint32
                constexpr std::ptrdiff_t m_nAppliedIndexOffset = 0x20; // uint32
                constexpr std::ptrdiff_t m_nDepthVertexBufferIndex = 0x24; // uint8
                constexpr std::ptrdiff_t m_nMeshletPackedIVBIndex = 0x25; // uint8
                constexpr std::ptrdiff_t m_rigidMeshParts = 0x28; // CUtlLeanVector<CMaterialDrawDescriptor::RigidMeshPart_t>
                constexpr std::ptrdiff_t m_nPrimitiveType = 0x38; // RenderPrimitiveType_t
                constexpr std::ptrdiff_t m_nBaseVertex = 0x3C; // int32
                constexpr std::ptrdiff_t m_nVertexCount = 0x40; // int32
                constexpr std::ptrdiff_t m_nStartIndex = 0x44; // int32
                constexpr std::ptrdiff_t m_nIndexCount = 0x48; // int32
                constexpr std::ptrdiff_t m_indexBuffer = 0xB0; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_meshletPackedIVB = 0xD0; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_material = 0x100; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSkeleton {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_boneIDs = 0x8; // CUtlLeanVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_parentIndices = 0x18; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_parentSpaceReferencePose = 0x30; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceReferencePose = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_numBonesToSampleAtLowLOD = 0x60; // int32
                constexpr std::ptrdiff_t m_maskDefinitions = 0x88; // CUtlLeanVector<NmBoneMaskSetDefinition_t>
                constexpr std::ptrdiff_t m_secondarySkeletons = 0xA8; // CUtlLeanVector<CNmSkeleton::SecondarySkeleton_t>
                constexpr std::ptrdiff_t m_bIsPropSkeleton = 0xB8; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStepsRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x68; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVelocityBlendNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmZeroPoseTask {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CBodyGroupSetting {
                constexpr std::ptrdiff_t m_BodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nBodyGroupOption = 0x8; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVectorQuantizer {
                constexpr std::ptrdiff_t m_centroidVectors = 0x0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nCentroids = 0x18; // int32
                constexpr std::ptrdiff_t m_nDimensions = 0x1C; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleNamedValueConfiguration_t {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ConfigValue = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_BoundValuePath = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_iAttachType = 0x20; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_strEntityScope = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strAttachmentName = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVectorCreateNode__CDefinition {
                constexpr std::ptrdiff_t m_inputVectorValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_inputValueXNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_inputValueYNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_inputValueZNodeIdx = 0x16; // int16
            }
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            namespace CParticleVecInput {
                constexpr std::ptrdiff_t m_nType = 0x10; // ParticleVecType_t
                constexpr std::ptrdiff_t m_vLiteralValue = 0x14; // Vector
                constexpr std::ptrdiff_t m_LiteralColor = 0x20; // Color
                constexpr std::ptrdiff_t m_NamedValue = 0x28; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_bFollowNamedValue = 0x68; // bool
                constexpr std::ptrdiff_t m_nVectorAttribute = 0x6C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vVectorAttributeScale = 0x70; // Vector
                constexpr std::ptrdiff_t m_nControlPoint = 0x7C; // int32
                constexpr std::ptrdiff_t m_nDeltaControlPoint = 0x80; // int32
                constexpr std::ptrdiff_t m_vCPValueScale = 0x84; // Vector
                constexpr std::ptrdiff_t m_vCPRelativePosition = 0x90; // Vector
                constexpr std::ptrdiff_t m_vCPRelativeDir = 0x9C; // Vector
                constexpr std::ptrdiff_t m_FloatComponentX = 0xA8; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatComponentY = 0x218; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatComponentZ = 0x388; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatInterp = 0x4F8; // CParticleFloatInput
                constexpr std::ptrdiff_t m_flInterpInput0 = 0x668; // float32
                constexpr std::ptrdiff_t m_flInterpInput1 = 0x66C; // float32
                constexpr std::ptrdiff_t m_vInterpOutput0 = 0x670; // Vector
                constexpr std::ptrdiff_t m_vInterpOutput1 = 0x67C; // Vector
                constexpr std::ptrdiff_t m_Gradient = 0x688; // CColorGradient
                constexpr std::ptrdiff_t m_vRandomMin = 0x6A0; // Vector
                constexpr std::ptrdiff_t m_vRandomMax = 0x6AC; // Vector
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmStateNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_entryEvents = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                constexpr std::ptrdiff_t m_executeEvents = 0x38; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                constexpr std::ptrdiff_t m_exitEvents = 0x58; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
                constexpr std::ptrdiff_t m_timedRemainingEvents = 0x78; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
                constexpr std::ptrdiff_t m_timedElapsedEvents = 0x90; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
                constexpr std::ptrdiff_t m_nLayerWeightNodeIdx = 0xA8; // int16
                constexpr std::ptrdiff_t m_nLayerRootMotionWeightNodeIdx = 0xAA; // int16
                constexpr std::ptrdiff_t m_nLayerBoneMaskNodeIdx = 0xAC; // int16
                constexpr std::ptrdiff_t m_bIsOffState = 0xAE; // bool
                constexpr std::ptrdiff_t m_bUseActualElapsedTimeInStateForTimedEvents = 0xAF; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBoneMaskSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_defaultMaskNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_parameterValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_switchDynamically = 0x14; // bool
                constexpr std::ptrdiff_t m_maskNodeIndices = 0x18; // CUtlVectorFixedGrowable<int16,7>
                constexpr std::ptrdiff_t m_parameterValues = 0x40; // CUtlVectorFixedGrowable<CGlobalSymbol,7>
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x90; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVirtualParameterVectorNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycleMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmConstIDNode__CDefinition {
                constexpr std::ptrdiff_t m_value = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBox {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_sBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vMinBounds = 0x18; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x24; // Vector
                constexpr std::ptrdiff_t m_flShapeRadius = 0x30; // float32
                constexpr std::ptrdiff_t m_nBoneNameHash = 0x34; // uint32
                constexpr std::ptrdiff_t m_nGroupId = 0x38; // int32
                constexpr std::ptrdiff_t m_nShapeType = 0x3C; // uint8
                constexpr std::ptrdiff_t m_bTranslationOnly = 0x3D; // bool
                constexpr std::ptrdiff_t m_CRC = 0x40; // uint32
                constexpr std::ptrdiff_t m_cRenderColor = 0x44; // Color
                constexpr std::ptrdiff_t m_nHitBoxIndex = 0x48; // uint16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmParameterizedSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_optionWeights = 0x28; // CUtlLeanVectorFixedGrowable<uint8,5>
                constexpr std::ptrdiff_t m_parameterNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x3A; // bool
                constexpr std::ptrdiff_t m_bHasWeightsSet = 0x3B; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelSkeletonData_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nParent = 0x18; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_boneSphere = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFlag = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_bonePosParent = 0x60; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
                constexpr std::ptrdiff_t m_boneScaleParent = 0x90; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEvent {
                constexpr std::ptrdiff_t m_flStartTimeSeconds = 0x8; // float32
                constexpr std::ptrdiff_t m_flDurationSeconds = 0xC; // float32
                constexpr std::ptrdiff_t m_syncID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bClientOnly = 0x18; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmCompressionSettings_t__QuantizationRange_t {
                constexpr std::ptrdiff_t m_flRangeStart = 0x0; // float32
                constexpr std::ptrdiff_t m_flRangeLength = 0x4; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmBlendTaskBase {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TagSpan_t {
                constexpr std::ptrdiff_t m_tagIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_startCycle = 0x4; // float32
                constexpr std::ptrdiff_t m_endCycle = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmConstTargetNode__CDefinition {
                constexpr std::ptrdiff_t m_value = 0x10; // CNmTarget
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRemapValueUpdateItem {
                constexpr std::ptrdiff_t m_hParamIn = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParamOut = 0x2; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flMinInputValue = 0x4; // float32
                constexpr std::ptrdiff_t m_flMaxInputValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flMinOutputValue = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxOutputValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelDataAnimatedMaterialAttribute_t {
                constexpr std::ptrdiff_t m_AttributeName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNumChannels = 0x8; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionDataSet {
                constexpr std::ptrdiff_t m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
                constexpr std::ptrdiff_t m_nDimensionCount = 0x18; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CProductQuantizer {
                constexpr std::ptrdiff_t m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
                constexpr std::ptrdiff_t m_nDimensions = 0x18; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoiceUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_weights = 0x78; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendTimes = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_choiceMethod = 0xA8; // ChoiceMethod
                constexpr std::ptrdiff_t m_choiceChangeMethod = 0xAC; // ChoiceChangeMethod
                constexpr std::ptrdiff_t m_blendMethod = 0xB0; // ChoiceBlendMethod
                constexpr std::ptrdiff_t m_blendTime = 0xB4; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0xB8; // bool
                constexpr std::ptrdiff_t m_bResetChosen = 0xB9; // bool
                constexpr std::ptrdiff_t m_bDontResetSameSelection = 0xBA; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Bone_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_BindPose = 0x10; // CTransform
                constexpr std::ptrdiff_t m_nParent = 0x30; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExpressionActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_hScript = 0x1C; // AnimScriptHandle
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatMathNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdxA = 0x10; // int16
                constexpr std::ptrdiff_t m_nInputValueNodeIdxB = 0x12; // int16
                constexpr std::ptrdiff_t m_bReturnAbsoluteResult = 0x14; // bool
                constexpr std::ptrdiff_t m_bReturnNegatedResult = 0x15; // bool
                constexpr std::ptrdiff_t m_operator = 0x16; // CNmFloatMathNode::Operator_t
                constexpr std::ptrdiff_t m_flValueB = 0x18; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerLine {
                constexpr std::ptrdiff_t m_vWsPositionStart = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsPositionEnd = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x60; // Color
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleControlUpdateNode {
                constexpr std::ptrdiff_t m_valueSource = 0x70; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x74; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x76; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTargetInfoNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_infoType = 0x14; // CNmTargetInfoNode::Info_t
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x18; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueComponentUpdater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseConstraint {
                constexpr std::ptrdiff_t m_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_vUpVector = 0x28; // Vector
                constexpr std::ptrdiff_t m_slaves = 0x38; // CUtlLeanVector<CConstraintSlave>
                constexpr std::ptrdiff_t m_targets = 0x48; // CUtlVector<CConstraintTarget>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmControlParameterFloatNode__CDefinition {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BlendItem_t {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pChild = 0x18; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hSequence = 0x28; // HSequence
                constexpr std::ptrdiff_t m_vPos = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_flDuration = 0x34; // float32
                constexpr std::ptrdiff_t m_bUseCustomDuration = 0x38; // bool
            }
            // Parent: None
            // Field count: 33
            namespace CNewParticleEffect {
                constexpr std::ptrdiff_t m_pNext = 0x10; // CNewParticleEffect*
                constexpr std::ptrdiff_t m_pPrev = 0x18; // CNewParticleEffect*
                constexpr std::ptrdiff_t m_pParticles = 0x20; // IParticleCollection*
                constexpr std::ptrdiff_t m_pDebugName = 0x28; // char*
                constexpr std::ptrdiff_t m_bDontRemove = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bRemove = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNeedsBBoxUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsFirstFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bAutoUpdateBBox = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bAllocated = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bSimulate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldPerformCullCheck = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bForceNoDraw = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bSuppressScreenSpaceEffect = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSave = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldCheckFoW = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsAsyncCreate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bFreezeTransitionActive = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bFreezeTargetState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bCanFreeze = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_vSortOrigin = 0x40; // Vector
                constexpr std::ptrdiff_t m_flScale = 0x4C; // float32
                constexpr std::ptrdiff_t m_hOwner = 0x50; // PARTICLE_EHANDLE__*
                constexpr std::ptrdiff_t m_pOwningParticleProperty = 0x58; // CParticleProperty*
                constexpr std::ptrdiff_t m_flFreezeTransitionStart = 0x70; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x74; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionOverride = 0x78; // float32
                constexpr std::ptrdiff_t m_LastMin = 0x7C; // Vector
                constexpr std::ptrdiff_t m_LastMax = 0x88; // Vector
                constexpr std::ptrdiff_t m_nSplitScreenUser = 0x94; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_vecAggregationCenter = 0x98; // Vector
                constexpr std::ptrdiff_t m_RefCount = 0xD0; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipNode__CDefinition {
                constexpr std::ptrdiff_t m_nPlayInReverseValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nResetTimeValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_flSpeedMultiplier = 0x14; // float32
                constexpr std::ptrdiff_t m_nStartSyncEventOffset = 0x18; // int32
                constexpr std::ptrdiff_t m_bSampleRootMotion = 0x1C; // bool
                constexpr std::ptrdiff_t m_bAllowLooping = 0x1D; // bool
                constexpr std::ptrdiff_t m_nDataSlotIdx = 0x1E; // int16
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmMaterialAttributeEvent {
                constexpr std::ptrdiff_t m_attributeName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_attributeNameToken = 0x28; // CUtlStringToken
                constexpr std::ptrdiff_t m_x = 0x30; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_y = 0x70; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_z = 0xB0; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_w = 0xF0; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBlend1DNode__CDefinition {
                constexpr std::ptrdiff_t m_parameterization = 0x40; // CNmParameterizedBlendNode::Parameterization_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConcreteAnimParameter {
                constexpr std::ptrdiff_t m_previewButton = 0x70; // AnimParamButton_t
                constexpr std::ptrdiff_t m_eNetworkSetting = 0x74; // AnimParamNetworkSetting
                constexpr std::ptrdiff_t m_bUseMostRecentValue = 0x78; // bool
                constexpr std::ptrdiff_t m_bAutoReset = 0x79; // bool
                constexpr std::ptrdiff_t m_bGameWritable = 0x7A; // bool
                constexpr std::ptrdiff_t m_bGraphWritable = 0x7B; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBoneWeightList {
                constexpr std::ptrdiff_t m_skeletonName = 0x0; // CResourceName
                constexpr std::ptrdiff_t m_boneIDs = 0xE0; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weights = 0xF8; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPairedSequenceUpdateNode {
                constexpr std::ptrdiff_t m_sPairedSequenceRole = 0x78; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_RandomPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ChoiceWeights = 0x60; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 0
            namespace CNmReferencePoseTask {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmScaleNode__CDefinition {
                constexpr std::ptrdiff_t m_nMaskNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nEnableNodeIdx = 0x1A; // int16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXConstraint2_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_nParent = 0x4; // uint16
                constexpr std::ptrdiff_t m_nChild = 0x6; // uint16
                constexpr std::ptrdiff_t m_params = 0x8; // VPhysXConstraintParams_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConstraintTarget {
                constexpr std::ptrdiff_t m_qOffset = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vOffset = 0x30; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x3C; // uint32
                constexpr std::ptrdiff_t m_sName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_bIsAttachment = 0x59; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x0; // CEntityIndex
                constexpr std::ptrdiff_t m_nEntParent = 0x4; // CEntityIndex
                constexpr std::ptrdiff_t m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
                constexpr std::ptrdiff_t m_ModelName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_CaptureName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_nFlexControllers = 0x60; // int32
                constexpr std::ptrdiff_t m_bPredicted = 0x64; // bool
                constexpr std::ptrdiff_t m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUser {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nType = 0x10; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRagdollComponentUpdater {
                constexpr std::ptrdiff_t m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
                constexpr std::ptrdiff_t m_followAttachmentNodePaths = 0x48; // CUtlVector<CAnimNodePath>
                constexpr std::ptrdiff_t m_boneIndices = 0x60; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_boneNames = 0x78; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_weightLists = 0x90; // CUtlVector<WeightList>
                constexpr std::ptrdiff_t m_boneToWeightIndices = 0xA8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0xC0; // float32
                constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0xC4; // float32
                constexpr std::ptrdiff_t m_flMaxStretch = 0xC8; // float32
                constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0xCC; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleNamedValueSource_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_IsPublic = 0x8; // bool
                constexpr std::ptrdiff_t m_ValueType = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultConfig = 0x28; // ParticleNamedValueConfiguration_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootDefinition {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ankleBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_toeBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x18; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x24; // Vector
                constexpr std::ptrdiff_t m_flFootLength = 0x30; // float32
                constexpr std::ptrdiff_t m_flBindPoseDirectionMS = 0x34; // float32
                constexpr std::ptrdiff_t m_flTraceHeight = 0x38; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x3C; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqSynthAnimDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
                constexpr std::ptrdiff_t m_nLocalBaseReference = 0x24; // int16
                constexpr std::ptrdiff_t m_nLocalBoneMask = 0x26; // int16
                constexpr std::ptrdiff_t m_activityArray = 0x28; // CUtlVector<CAnimActivity>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmLayerBlendNode__LayerDefinition_t {
                constexpr std::ptrdiff_t m_nInputNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_nWeightValueNodeIdx = 0x2; // int16
                constexpr std::ptrdiff_t m_nBoneMaskValueNodeIdx = 0x4; // int16
                constexpr std::ptrdiff_t m_nRootMotionWeightValueNodeIdx = 0x6; // int16
                constexpr std::ptrdiff_t m_bIsSynchronized = 0x8; // bool
                constexpr std::ptrdiff_t m_bIgnoreEvents = 0x9; // bool
                constexpr std::ptrdiff_t m_bIsStateMachineLayer = 0xA; // bool
                constexpr std::ptrdiff_t m_blendMode = 0xB; // NmPoseBlendMode_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimComponentUpdater {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimComponentID
                constexpr std::ptrdiff_t m_networkMode = 0x24; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_bStartEnabled = 0x28; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlend2DUpdateNode {
                constexpr std::ptrdiff_t m_items = 0x60; // CUtlVector<BlendItem_t>
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_paramSpans = 0x90; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_nodeItemIndices = 0xA8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_damping = 0xC0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSourceX = 0xD8; // AnimValueSource
                constexpr std::ptrdiff_t m_paramX = 0xDC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_blendSourceY = 0xE0; // AnimValueSource
                constexpr std::ptrdiff_t m_paramY = 0xE4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eBlendMode = 0xE8; // Blend2DMode
                constexpr std::ptrdiff_t m_playbackSpeed = 0xEC; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xF0; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xF1; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xF2; // bool
                constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xF3; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVelocityBasedSpeedScaleNode__CDefinition {
            }
            // Parent: 
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            // MFgdHelper
            namespace CNPCPhysicsHull {
                constexpr std::ptrdiff_t m_sName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eType = 0x8; // NPCPhysicsHullType_t
                constexpr std::ptrdiff_t m_flCapsuleHeight = 0xC; // float32
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0x10; // float32
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x14; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0x20; // Vector
                constexpr std::ptrdiff_t m_flGroundBoxHeight = 0x2C; // float32
                constexpr std::ptrdiff_t m_flGroundBoxWidth = 0x30; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelExtPart_t {
                constexpr std::ptrdiff_t m_Transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_Name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nParent = 0x28; // int32
                constexpr std::ptrdiff_t m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCachedIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_mode = 0x14; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLeanMatrixUpdateNode {
                constexpr std::ptrdiff_t m_frameCorners = 0x5C; // int32[3][3]
                constexpr std::ptrdiff_t m_poses = 0x80; // CPoseHandle[9]
                constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSource = 0xC0; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0xC4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_verticalAxis = 0xC8; // Vector
                constexpr std::ptrdiff_t m_horizontalAxis = 0xD4; // Vector
                constexpr std::ptrdiff_t m_hSequence = 0xE0; // HSequence
                constexpr std::ptrdiff_t m_flMaxValue = 0xE4; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xE8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSymbolAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatCurveEventNode__CDefinition {
                constexpr std::ptrdiff_t m_eventID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nDefaultNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_flDefaultValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_eventConditionRules = 0x20; // CNmBitFlags
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmStateMachineNode__TransitionDefinition_t {
                constexpr std::ptrdiff_t m_nTargetStateIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_nConditionNodeIdx = 0x2; // int16
                constexpr std::ptrdiff_t m_nTransitionNodeIdx = 0x4; // int16
                constexpr std::ptrdiff_t m_bCanBeForced = 0x6; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_values = 0x38; // CUtlVectorFixedGrowable<float32,5>
                constexpr std::ptrdiff_t m_flDefaultValue = 0x68; // float32
                constexpr std::ptrdiff_t m_flEaseTime = 0x6C; // float32
                constexpr std::ptrdiff_t m_easingOp = 0x70; // NmEasingOperation_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTargetSelectorUpdateNode {
                constexpr std::ptrdiff_t m_eAngleMode = 0x60; // TargetSelectorAngleMode_t
                constexpr std::ptrdiff_t m_children = 0x68; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_hTargetPosition = 0x84; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetFacePositionParameter = 0x86; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParameter = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hDesiredMoveHeadingParameter = 0x8A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x8C; // bool
                constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x8D; // bool
                constexpr std::ptrdiff_t m_bEnablePhaseMatching = 0x8E; // bool
                constexpr std::ptrdiff_t m_flPhaseMatchingMaxRootMotionSkip = 0x90; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBoxSetList {
                constexpr std::ptrdiff_t m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIsInactiveBranchConditionNode__CDefinition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionDBIndex {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectPlaybackTagData {
                constexpr std::ptrdiff_t m_sequenceName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionVecInput {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphEventConditionNode__Condition_t {
                constexpr std::ptrdiff_t m_eventID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eventTypeCondition = 0x8; // NmGraphEventTypeCondition_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatRemapNode__RemapRange_t {
                constexpr std::ptrdiff_t m_flBegin = 0x0; // float32
                constexpr std::ptrdiff_t m_flEnd = 0x4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCurrentSyncEventIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmStateCompletedConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nTransitionDurationOverrideNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x14; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTargetWarpEvent {
                constexpr std::ptrdiff_t m_rule = 0x20; // NmTargetWarpRule_t
                constexpr std::ptrdiff_t m_algorithm = 0x21; // NmTargetWarpAlgorithm_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParamSpanUpdater {
                constexpr std::ptrdiff_t m_spans = 0x0; // CUtlVector<ParamSpan_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimActionUpdater {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CParticleAnimTag {
                constexpr std::ptrdiff_t m_hParticleSystem = 0x58; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_particleSystemName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_configName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x70; // bool
                constexpr std::ptrdiff_t m_bAggregate = 0x71; // bool
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x72; // bool
                constexpr std::ptrdiff_t m_bTagEndStopIsInstant = 0x73; // bool
                constexpr std::ptrdiff_t m_attachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType = 0x80; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentCP1Name = 0x88; // CUtlString
                constexpr std::ptrdiff_t m_attachmentCP1Type = 0x90; // ParticleAttachment_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleBase {
                constexpr std::ptrdiff_t m_flCycle = 0x0; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FollowTargetOpFixedSettings_t {
                constexpr std::ptrdiff_t m_boneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_bBoneTarget = 0x4; // bool
                constexpr std::ptrdiff_t m_boneTargetIndex = 0x8; // int32
                constexpr std::ptrdiff_t m_bWorldCoodinateTarget = 0xC; // bool
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0xD; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDSwitchNode__CDefinition {
                constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0x14; // int16
                constexpr std::ptrdiff_t m_falseValue = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_trueValue = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmRootMotionEvent {
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x20; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x18; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationSnapshotBase_t {
                constexpr std::ptrdiff_t m_flRealTime = 0x0; // float32
                constexpr std::ptrdiff_t m_rootToWorld = 0x10; // matrix3x4a_t
                constexpr std::ptrdiff_t m_bBonesInWorldSpace = 0x40; // bool
                constexpr std::ptrdiff_t m_boneSetupMask = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneTransforms = 0x60; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_flexControllers = 0x78; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_SnapshotType = 0x90; // AnimationSnapshotType_t
                constexpr std::ptrdiff_t m_bHasDecodeDump = 0x94; // bool
                constexpr std::ptrdiff_t m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIKEffector {
                constexpr std::ptrdiff_t m_nBodyIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x4; // bool
                constexpr std::ptrdiff_t m_vTargetPosition = 0x8; // Vector
                constexpr std::ptrdiff_t m_qTargetOrientation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_flWeight = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEmitTagActionUpdater {
                constexpr std::ptrdiff_t m_nTagIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DynamicMeshDeformParams_t {
                constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0; // float32
                constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4; // float32
                constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
                constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
                constexpr std::ptrdiff_t m_bSmoothNormalsAcrossUvSeams = 0xA; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTimeConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_sourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_flComparand = 0x14; // float32
                constexpr std::ptrdiff_t m_type = 0x18; // CNmTimeConditionNode::ComparisonType_t
                constexpr std::ptrdiff_t m_operator = 0x19; // CNmTimeConditionNode::Operator_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncEventIndexConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_triggerMode = 0x12; // CNmSyncEventIndexConditionNode::TriggerMode_t
                constexpr std::ptrdiff_t m_syncEventIdx = 0x14; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimStateMachineUpdater {
                constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector<CStateUpdateData>
                constexpr std::ptrdiff_t m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
                constexpr std::ptrdiff_t m_startStateIndex = 0x50; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CUnaryUpdateNode {
                constexpr std::ptrdiff_t m_pChildNode = 0x60; // CAnimUpdateNodeRef
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDToFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_defaultValue = 0x14; // float32
                constexpr std::ptrdiff_t m_IDs = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
                constexpr std::ptrdiff_t m_values = 0x48; // CUtlLeanVectorFixedGrowable<float32,5>
            }
            // Parent: None
            // Field count: 17
            namespace CCompressorGroup {
                constexpr std::ptrdiff_t m_nTotalElementCount = 0x0; // int32
                constexpr std::ptrdiff_t m_szChannelClass = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_szVariableName = 0x20; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_nType = 0x38; // CUtlVector<fieldtype_t>
                constexpr std::ptrdiff_t m_nFlags = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_szGrouping = 0x68; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nCompressorIndex = 0x80; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_szElementNames = 0x98; // CUtlVector<CUtlVector<char*>>
                constexpr std::ptrdiff_t m_nElementUniqueID = 0xB0; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_nElementMask = 0xC8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_vectorCompressor = 0xF8; // CUtlVector<CCompressor<Vector>*>
                constexpr std::ptrdiff_t m_quaternionCompressor = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
                constexpr std::ptrdiff_t m_intCompressor = 0x128; // CUtlVector<CCompressor<int32>*>
                constexpr std::ptrdiff_t m_boolCompressor = 0x140; // CUtlVector<CCompressor<bool>*>
                constexpr std::ptrdiff_t m_colorCompressor = 0x158; // CUtlVector<CCompressor<Color>*>
                constexpr std::ptrdiff_t m_vector2DCompressor = 0x170; // CUtlVector<CCompressor<Vector2D>*>
                constexpr std::ptrdiff_t m_vector4DCompressor = 0x188; // CUtlVector<CCompressor<Vector4D>*>
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSelectorUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<int8>
                constexpr std::ptrdiff_t m_blendCurve = 0x94; // CBlendCurve
                constexpr std::ptrdiff_t m_flBlendTime = 0x9C; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_hParameter = 0xA4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_nTagIndex = 0xA8; // int32
                constexpr std::ptrdiff_t m_eTagBehavior = 0xAC; // SelectorTagBehavior_t
                constexpr std::ptrdiff_t m_bResetOnChange = 0xB0; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xB1; // bool
                constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xB2; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmPercent_t {
                constexpr std::ptrdiff_t m_flValue = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineComponentUpdater {
                constexpr std::ptrdiff_t m_stateMachine = 0x30; // CAnimStateMachineUpdater
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateNodeRef {
                constexpr std::ptrdiff_t m_nodeIndex = 0x8; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_TargetEntity = 0x10; // PulseSymbol_t
                constexpr std::ptrdiff_t m_TargetInput = 0x20; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Param = 0x30; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfaceProperties {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_baseNameHash = 0xC; // uint32
                constexpr std::ptrdiff_t m_bHidden = 0x18; // bool
                constexpr std::ptrdiff_t m_description = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
                constexpr std::ptrdiff_t m_vehicleParams = 0x40; // CPhysSurfacePropertiesVehicle
                constexpr std::ptrdiff_t m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
                constexpr std::ptrdiff_t m_audioParams = 0xA8; // CPhysSurfacePropertiesAudio
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneMaskValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqPoseParamDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flStart = 0x10; // float32
                constexpr std::ptrdiff_t m_flEnd = 0x14; // float32
                constexpr std::ptrdiff_t m_flLoop = 0x18; // float32
                constexpr std::ptrdiff_t m_bLooping = 0x1C; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetBodygroup {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMovement {
                constexpr std::ptrdiff_t endframe = 0x0; // int32
                constexpr std::ptrdiff_t motionflags = 0x4; // int32
                constexpr std::ptrdiff_t v0 = 0x8; // float32
                constexpr std::ptrdiff_t v1 = 0xC; // float32
                constexpr std::ptrdiff_t angle = 0x10; // float32
                constexpr std::ptrdiff_t vector = 0x14; // Vector
                constexpr std::ptrdiff_t position = 0x20; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleRemapFloatInput {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FollowAttachmentData {
                constexpr std::ptrdiff_t m_boneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_attachmentHandle = 0x4; // AttachmentHandle_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootStepTrigger {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nFootIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_triggerPhase = 0x1C; // StepPhase
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncTrack__EventMarker_t {
                constexpr std::ptrdiff_t m_startTime = 0x0; // NmPercent_t
                constexpr std::ptrdiff_t m_ID = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathMetricEvaluator {
                constexpr std::ptrdiff_t m_pathTimeSamples = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDistance = 0x68; // float32
                constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x6C; // bool
                constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x70; // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootLockUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // FootLockPoseOpFixedSettings
                constexpr std::ptrdiff_t m_footSettings = 0xE0; // CUtlVector<FootFixedSettings>
                constexpr std::ptrdiff_t m_hipShiftDamping = 0xF8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_rootHeightDamping = 0x110; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flStrideCurveScale = 0x128; // float32
                constexpr std::ptrdiff_t m_flStrideCurveLimitScale = 0x12C; // float32
                constexpr std::ptrdiff_t m_flStepHeightIncreaseScale = 0x130; // float32
                constexpr std::ptrdiff_t m_flStepHeightDecreaseScale = 0x134; // float32
                constexpr std::ptrdiff_t m_flHipShiftScale = 0x138; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0x13C; // float32
                constexpr std::ptrdiff_t m_flMaxRootHeightOffset = 0x140; // float32
                constexpr std::ptrdiff_t m_flMinRootHeightOffset = 0x144; // float32
                constexpr std::ptrdiff_t m_flTiltPlanePitchSpringStrength = 0x148; // float32
                constexpr std::ptrdiff_t m_flTiltPlaneRollSpringStrength = 0x14C; // float32
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x150; // bool
                constexpr std::ptrdiff_t m_bApplyHipShift = 0x151; // bool
                constexpr std::ptrdiff_t m_bModulateStepHeight = 0x152; // bool
                constexpr std::ptrdiff_t m_bResetChild = 0x153; // bool
                constexpr std::ptrdiff_t m_bEnableVerticalCurvedPaths = 0x154; // bool
                constexpr std::ptrdiff_t m_bEnableRootHeightDamping = 0x155; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmOrientationWarpEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseGraphExecutionHistoryNodeDesc_t {
                constexpr std::ptrdiff_t strCellDesc = 0x0; // CBufferString
                constexpr std::ptrdiff_t strBindingName = 0x10; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace JiggleBoneSettings_t {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flMaxTimeStep = 0x8; // float32
                constexpr std::ptrdiff_t m_flDamping = 0xC; // float32
                constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x10; // Vector
                constexpr std::ptrdiff_t m_vBoundsMinLS = 0x1C; // Vector
                constexpr std::ptrdiff_t m_eSimSpace = 0x28; // JiggleBoneSimSpace
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CJumpHelperUpdateNode {
                constexpr std::ptrdiff_t m_hTargetParam = 0xB0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flOriginalJumpMovement = 0xB4; // Vector
                constexpr std::ptrdiff_t m_flOriginalJumpDuration = 0xC0; // float32
                constexpr std::ptrdiff_t m_flJumpStartCycle = 0xC4; // float32
                constexpr std::ptrdiff_t m_flJumpEndCycle = 0xC8; // float32
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0xCC; // JumpCorrectionMethod
                constexpr std::ptrdiff_t m_bTranslationAxis = 0xD0; // bool[3]
                constexpr std::ptrdiff_t m_bScaleSpeed = 0xD3; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmControlParameterBoolNode__CDefinition {
            }
            // Parent: None
            // Field count: 11
            namespace CNmChainLookatTask {
                constexpr std::ptrdiff_t m_nChainEndBoneIdx = 0x50; // int32
                constexpr std::ptrdiff_t m_nNumBonesInChain = 0x54; // int32
                constexpr std::ptrdiff_t m_chainForwardDir = 0x58; // Vector
                constexpr std::ptrdiff_t m_flBlendWeight = 0x64; // float32
                constexpr std::ptrdiff_t m_flHorizontalAngleLimitDegrees = 0x68; // float32
                constexpr std::ptrdiff_t m_flVerticalAngleLimitDegrees = 0x6C; // float32
                constexpr std::ptrdiff_t m_lookatTarget = 0x70; // Vector
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x7C; // bool
                constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0x7D; // bool
                constexpr std::ptrdiff_t m_flHorizontalAngleDegrees = 0x80; // float32
                constexpr std::ptrdiff_t m_flVerticalAngleDegrees = 0x84; // float32
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootLockPoseOpFixedSettings {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_hipDampingSettings = 0x18; // CAnimInputDamping
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32
                constexpr std::ptrdiff_t m_ikSolverType = 0x34; // IKSolverType
                constexpr std::ptrdiff_t m_bApplyTilt = 0x38; // bool
                constexpr std::ptrdiff_t m_bApplyHipDrop = 0x39; // bool
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x3A; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x3B; // bool
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x3C; // bool
                constexpr std::ptrdiff_t m_flMaxFootHeight = 0x40; // float32
                constexpr std::ptrdiff_t m_flExtensionScale = 0x44; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x48; // float32
                constexpr std::ptrdiff_t m_bEnableLockBreaking = 0x4C; // bool
                constexpr std::ptrdiff_t m_flLockBreakTolerance = 0x50; // float32
                constexpr std::ptrdiff_t m_flLockBlendTime = 0x54; // float32
                constexpr std::ptrdiff_t m_bEnableStretching = 0x58; // bool
                constexpr std::ptrdiff_t m_flMaxStretchAmount = 0x5C; // float32
                constexpr std::ptrdiff_t m_flStretchExtensionScale = 0x60; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CWarpSectionAnimTag {
                constexpr std::ptrdiff_t m_bWarpPosition = 0x50; // bool
                constexpr std::ptrdiff_t m_bWarpOrientation = 0x51; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_RandomColor {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootMotion {
                constexpr std::ptrdiff_t m_strides = 0x0; // CUtlVector<CFootStride>
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bAdditive = 0x20; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CJiggleBoneUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // JiggleBoneSettingsList_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmConstVectorNode__CDefinition {
                constexpr std::ptrdiff_t m_value = 0x10; // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyArrayElementNameKey
            namespace MoodAnimation_t {
                constexpr std::ptrdiff_t m_sName = 0x0; // CModelAnimNameWithDeltas
                constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLODComponentUpdater {
                constexpr std::ptrdiff_t m_nServerLOD = 0x30; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIsTargetSetNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesVehicle {
                constexpr std::ptrdiff_t m_wheelDrag = 0x0; // float32
                constexpr std::ptrdiff_t m_wheelFrictionScale = 0x4; // float32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDataChannelDesc {
                constexpr std::ptrdiff_t m_szChannelClass = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_szVariableName = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nFlags = 0x20; // int32
                constexpr std::ptrdiff_t m_nType = 0x24; // int32
                constexpr std::ptrdiff_t m_szGrouping = 0x28; // CBufferString
                constexpr std::ptrdiff_t m_szDescription = 0x38; // CBufferString
                constexpr std::ptrdiff_t m_szElementNameArray = 0x48; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_nElementIndexArray = 0x60; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nElementMaskArray = 0x78; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPairedSequenceComponentUpdater {
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmParticleEvent {
                constexpr std::ptrdiff_t m_relevance = 0x20; // CNmEventRelevance_t
                constexpr std::ptrdiff_t m_type = 0x24; // CNmParticleEvent::Type_t
                constexpr std::ptrdiff_t m_hParticleSystem = 0x28; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_tags = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_bStopImmediately = 0x38; // bool
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x39; // bool
                constexpr std::ptrdiff_t m_bPlayEndCap = 0x3A; // bool
                constexpr std::ptrdiff_t m_attachmentPoint0 = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType0 = 0x48; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentPoint1 = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType1 = 0x58; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_config = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_effectForConfig = 0x68; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphRectData {
                constexpr std::ptrdiff_t m_nXLeftDst = 0x0; // int16
                constexpr std::ptrdiff_t m_nYTopDst = 0x2; // int16
                constexpr std::ptrdiff_t m_flUWidthSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_flVHeightSrc = 0x8; // float32
                constexpr std::ptrdiff_t m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFoot {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x8; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_ankleBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_toeBoneIndex = 0x24; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParentConstraint {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCachedVectorNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_mode = 0x14; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmStateNode__TimedEvent_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flTimeValueSeconds = 0x8; // float32
                constexpr std::ptrdiff_t m_comparisionOperator = 0xC; // CNmStateNode::TimedEvent_t::Comparison_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootPositionMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bIgnoreSlope = 0x68; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleVariableRef {
                constexpr std::ptrdiff_t m_variableName = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_variableType = 0x38; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            namespace HSequence {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueUpdateItem {
                constexpr std::ptrdiff_t m_damping = 0x0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_hParamIn = 0x20; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParamOut = 0x22; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimLocalHierarchy {
                constexpr std::ptrdiff_t m_sBone = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_sNewParent = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nStartFrame = 0x20; // int32
                constexpr std::ptrdiff_t m_nPeakFrame = 0x24; // int32
                constexpr std::ptrdiff_t m_nTailFrame = 0x28; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0x2C; // int32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlendUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_sortedOrder = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_targetValues = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendValueSource = 0xAC; // AnimValueSource
                constexpr std::ptrdiff_t m_eLinearRootMotionBlendMode = 0xB0; // LinearRootMotionBlendMode_t
                constexpr std::ptrdiff_t m_paramIndex = 0xB4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0xB8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendKeyType = 0xD0; // BlendKeyType
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xD4; // bool
                constexpr std::ptrdiff_t m_bSyncCycles = 0xD5; // bool
                constexpr std::ptrdiff_t m_bLoop = 0xD6; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xD7; // bool
                constexpr std::ptrdiff_t m_bIsAngle = 0xD8; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseGraphExecutionHistoryEntry_t {
                constexpr std::ptrdiff_t nCursorID = 0x0; // PulseCursorID_t
                constexpr std::ptrdiff_t nEditorID = 0x4; // PulseDocNodeID_t
                constexpr std::ptrdiff_t flExecTime = 0x8; // float32
                constexpr std::ptrdiff_t unFlags = 0xC; // uint32
                constexpr std::ptrdiff_t tagName = 0x10; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CQuaternionAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_bInterpolate = 0x90; // bool
            }
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelData_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modelInfo = 0x8; // PermModelInfo_t
                constexpr std::ptrdiff_t m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
                constexpr std::ptrdiff_t m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
                constexpr std::ptrdiff_t m_refMeshGroupMasks = 0x90; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refLODGroupMasks = 0xC0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
                constexpr std::ptrdiff_t m_meshGroups = 0x150; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
                constexpr std::ptrdiff_t m_nDefaultMeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_modelSkeleton = 0x188; // ModelSkeletonData_t
                constexpr std::ptrdiff_t m_remappingTable = 0x230; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_remappingTableStarts = 0x248; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
                constexpr std::ptrdiff_t m_pModelConfigList = 0x278; // CModelConfigList*
                constexpr std::ptrdiff_t m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
            }
            // Parent: None
            // Field count: 1
            namespace PulseCursorYieldToken_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CNmSampleTask {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStaticPoseCacheBuilder {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelMeshBufferData_t {
                constexpr std::ptrdiff_t m_nBlockIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nElementCount = 0x4; // uint32
                constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x8; // uint32
                constexpr std::ptrdiff_t m_bMeshoptCompressed = 0xC; // bool
                constexpr std::ptrdiff_t m_bMeshoptIndexSequence = 0xD; // bool
                constexpr std::ptrdiff_t m_bCompressedZSTD = 0xE; // bool
                constexpr std::ptrdiff_t m_bCreateBufferSRV = 0xF; // bool
                constexpr std::ptrdiff_t m_bCreateBufferUAV = 0x10; // bool
                constexpr std::ptrdiff_t m_bCreateRawBuffer = 0x11; // bool
                constexpr std::ptrdiff_t m_bCreatePooledBuffer = 0x12; // bool
                constexpr std::ptrdiff_t m_inputLayoutFields = 0x18; // CUtlVector<RenderInputLayoutField_t>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceGroupData {
                constexpr std::ptrdiff_t m_sName = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nFlags = 0x20; // uint32
                constexpr std::ptrdiff_t m_localSequenceNameArray = 0x28; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_localS1SeqDescArray = 0x40; // CUtlVector<CSeqS1SeqDesc>
                constexpr std::ptrdiff_t m_localMultiSeqDescArray = 0x58; // CUtlVector<CSeqS1SeqDesc>
                constexpr std::ptrdiff_t m_localSynthAnimDescArray = 0x70; // CUtlVector<CSeqSynthAnimDesc>
                constexpr std::ptrdiff_t m_localCmdSeqDescArray = 0x88; // CUtlVector<CSeqCmdSeqDesc>
                constexpr std::ptrdiff_t m_localBoneMaskArray = 0xA0; // CUtlVector<CSeqBoneMaskList>
                constexpr std::ptrdiff_t m_localScaleSetArray = 0xB8; // CUtlVector<CSeqScaleSet>
                constexpr std::ptrdiff_t m_localBoneNameArray = 0xD0; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_localNodeName = 0xE8; // CBufferString
                constexpr std::ptrdiff_t m_localPoseParamArray = 0xF8; // CUtlVector<CSeqPoseParamDesc>
                constexpr std::ptrdiff_t m_keyValues = 0x110; // KeyValues3
                constexpr std::ptrdiff_t m_localIKAutoplayLockArray = 0x120; // CUtlVector<CSeqIKLock>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineUpdateNode {
                constexpr std::ptrdiff_t m_stateMachine = 0x70; // CAnimStateMachineUpdater
                constexpr std::ptrdiff_t m_stateData = 0xC8; // CUtlVector<CStateNodeStateData>
                constexpr std::ptrdiff_t m_transitionData = 0xE0; // CUtlVector<CStateNodeTransitionData>
                constexpr std::ptrdiff_t m_bBlockWaningTags = 0xFC; // bool
                constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0xFD; // bool
                constexpr std::ptrdiff_t m_bResetWhenActivated = 0xFE; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAimMatrixUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // AimMatrixOpFixedSettings_t
                constexpr std::ptrdiff_t m_target = 0x168; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0x16C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSequence = 0x170; // HSequence
                constexpr std::ptrdiff_t m_bResetChild = 0x174; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x175; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Frame_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                constexpr std::ptrdiff_t m_Transform = 0x20; // CTransform
                constexpr std::ptrdiff_t m_bTeleport = 0x40; // bool
                constexpr std::ptrdiff_t m_CompositeBones = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_SimStateBones = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelAnims = 0x78; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
                constexpr std::ptrdiff_t m_FlexControllerWeights = 0xA8; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_Command {
                constexpr std::ptrdiff_t m_Command = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x50; // KeyValues3
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimEventDefinition {
                constexpr std::ptrdiff_t m_nFrame = 0x8; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0xC; // int32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x14; // float32
                constexpr std::ptrdiff_t m_EventData = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_sLegacyOptions = 0x28; // CBufferString
                constexpr std::ptrdiff_t m_sEventName = 0x38; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmRootMotionData {
                constexpr std::ptrdiff_t m_transforms = 0x0; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_nNumFrames = 0x18; // int32
                constexpr std::ptrdiff_t m_flAverageLinearVelocity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAverageAngularVelocityRadians = 0x20; // float32
                constexpr std::ptrdiff_t m_totalDelta = 0x30; // CTransform
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphExecutionHistory {
                constexpr std::ptrdiff_t m_nInstanceID = 0x0; // PulseGraphInstanceID_t
                constexpr std::ptrdiff_t m_strFileName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vecHistory = 0x10; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
                constexpr std::ptrdiff_t m_mapCellDesc = 0x28; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
                constexpr std::ptrdiff_t m_mapCursorDesc = 0x50; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimScriptHandle {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexOp {
                constexpr std::ptrdiff_t m_OpCode = 0x0; // FlexOpCode_t
                constexpr std::ptrdiff_t m_Data = 0x4; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitReactUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // HitReactFixedSettings_t
                constexpr std::ptrdiff_t m_triggerParam = 0xBC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitBoneParam = 0xBE; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitOffsetParam = 0xC0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitDirectionParam = 0xC2; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitStrengthParam = 0xC4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flMinDelayBetweenHits = 0xC8; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0xCC; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLookAtUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // LookAtOpFixedSettings_t
                constexpr std::ptrdiff_t m_target = 0x148; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0x14C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_weightParamIndex = 0x14E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bResetChild = 0x150; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x151; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimBone {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_parent = 0x10; // int32
                constexpr std::ptrdiff_t m_pos = 0x14; // Vector
                constexpr std::ptrdiff_t m_quat = 0x20; // QuaternionStorage
                constexpr std::ptrdiff_t m_scale = 0x30; // float32
                constexpr std::ptrdiff_t m_qAlignment = 0x34; // QuaternionStorage
                constexpr std::ptrdiff_t m_flags = 0x44; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterManagerUpdater {
                constexpr std::ptrdiff_t m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                constexpr std::ptrdiff_t m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32>
                constexpr std::ptrdiff_t m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32>
                constexpr std::ptrdiff_t m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_autoResetParams = 0x88; // CUtlVector<std::pair<CAnimParamHandle,CAnimVariant>>
                constexpr std::ptrdiff_t m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BoneDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flErrorSplineRotationMax = 0x8; // float32
                constexpr std::ptrdiff_t m_flErrorSplineTranslationMax = 0xC; // float32
                constexpr std::ptrdiff_t m_flErrorSplineScaleMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationRotationMax = 0x14; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationTranslationMax = 0x18; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationScaleMax = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CBoneConstraintPoseSpaceMorph__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputWeightList = 0x10; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyArrayElementNameKey
            namespace MoodAnimationLayer_t {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bActiveListening = 0x8; // bool
                constexpr std::ptrdiff_t m_bActiveTalking = 0x9; // bool
                constexpr std::ptrdiff_t m_layerAnimations = 0x10; // CUtlVector<MoodAnimation_t>
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // CRangeFloat
                constexpr std::ptrdiff_t m_flDurationScale = 0x30; // CRangeFloat
                constexpr std::ptrdiff_t m_bScaleWithInts = 0x38; // bool
                constexpr std::ptrdiff_t m_flNextStart = 0x3C; // CRangeFloat
                constexpr std::ptrdiff_t m_flStartOffset = 0x44; // CRangeFloat
                constexpr std::ptrdiff_t m_flEndOffset = 0x4C; // CRangeFloat
                constexpr std::ptrdiff_t m_flFadeIn = 0x54; // float32
                constexpr std::ptrdiff_t m_flFadeOut = 0x58; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSpeedScaleUpdateNode {
                constexpr std::ptrdiff_t m_paramIndex = 0x70; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceTagSpans {
                constexpr std::ptrdiff_t m_sSequenceName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetBodygroupOnAttachedModels {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurrentVelocityMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoolValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimReplayFrame {
                constexpr std::ptrdiff_t m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
                constexpr std::ptrdiff_t m_instanceData = 0x28; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_startingLocalToWorldTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_localToWorldTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_timeStamp = 0x80; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTransitionEvent {
                constexpr std::ptrdiff_t m_rule = 0x20; // NmTransitionRule_t
                constexpr std::ptrdiff_t m_ID = 0x28; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIKRig {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_vecBodies = 0x8; // CUtlVector<CNmIKBody>
                constexpr std::ptrdiff_t m_vecJoints = 0x20; // CUtlVector<CNmIKJoint>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatCurveEvent {
                constexpr std::ptrdiff_t m_ID = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_curve = 0x28; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            // MCustomFGDMetadata
            namespace CParticleTransformInput {
                constexpr std::ptrdiff_t m_nType = 0x10; // ParticleTransformType_t
                constexpr std::ptrdiff_t m_NamedValue = 0x18; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_bFollowNamedValue = 0x58; // bool
                constexpr std::ptrdiff_t m_bSupportsDisabled = 0x59; // bool
                constexpr std::ptrdiff_t m_bUseOrientation = 0x5A; // bool
                constexpr std::ptrdiff_t m_nControlPoint = 0x5C; // int32
                constexpr std::ptrdiff_t m_nControlPointRangeMax = 0x60; // int32
                constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0x64; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_bLockToPath = 0x20; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PGDInstruction_t {
                constexpr std::ptrdiff_t m_nCode = 0x0; // PulseInstructionCode_t
                constexpr std::ptrdiff_t m_nVar = 0x4; // PulseRuntimeVarIndex_t
                constexpr std::ptrdiff_t m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
                constexpr std::ptrdiff_t m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nDestInstruction = 0x18; // int32
                constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
                constexpr std::ptrdiff_t m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
                constexpr std::ptrdiff_t m_nDomainValueIdx = 0x22; // PulseRuntimeDomainValueIndex_t
                constexpr std::ptrdiff_t m_nBlackboardReferenceIdx = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFootstepEventPercentageThroughNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_phaseCondition = 0x12; // NmFootPhaseCondition_t
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AimCameraOpFixedSettings_t {
                constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nCameraJointIndex = 0x4; // int32
                constexpr std::ptrdiff_t m_nPelvisJointIndex = 0x8; // int32
                constexpr std::ptrdiff_t m_nClavicleLeftJointIndex = 0xC; // int32
                constexpr std::ptrdiff_t m_nClavicleRightJointIndex = 0x10; // int32
                constexpr std::ptrdiff_t m_nDepenetrationJointIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_propJoints = 0x18; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Camera_t {
                constexpr std::ptrdiff_t m_tmCamera = 0x0; // CTransform
                constexpr std::ptrdiff_t m_flTime = 0x20; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
                constexpr std::ptrdiff_t m_conditions = 0x18; // CUtlVectorFixedGrowable<CNmGraphEventConditionNode::Condition_t,5>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFollowAttachmentUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // FollowAttachmentSettings_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMovementComponentUpdater {
                constexpr std::ptrdiff_t m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
                constexpr std::ptrdiff_t m_facingDamping = 0x48; // CAnimInputDamping
                constexpr std::ptrdiff_t m_nDefaultMotorIndex = 0x68; // int32
                constexpr std::ptrdiff_t m_flDefaultRunSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_bMoveVarsDisabled = 0x70; // bool
                constexpr std::ptrdiff_t m_bNetworkPath = 0x71; // bool
                constexpr std::ptrdiff_t m_bNetworkFacing = 0x72; // bool
                constexpr std::ptrdiff_t m_paramHandles = 0x73; // CAnimParamHandle[34]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetMaterialGroup {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace IParticleEffect {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIKJoint {
                constexpr std::ptrdiff_t m_nParentIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nBodyIndex = 0x4; // int32
                constexpr std::ptrdiff_t m_xLocalFrame = 0x10; // CTransform
                constexpr std::ptrdiff_t m_flSwingLimit = 0x30; // float32
                constexpr std::ptrdiff_t m_flMinTwistLimit = 0x34; // float32
                constexpr std::ptrdiff_t m_flMaxTwistLimit = 0x38; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x3C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFutureFacingMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flTime = 0x54; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmCompressionSettings_t {
                constexpr std::ptrdiff_t m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_constantRotation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_bIsRotationStatic = 0x30; // bool
                constexpr std::ptrdiff_t m_bIsTranslationStatic = 0x31; // bool
                constexpr std::ptrdiff_t m_bIsScaleStatic = 0x32; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultValue = 0x30; // KeyValues3
                constexpr std::ptrdiff_t m_nKeysSource = 0x44; // PulseVariableKeysSource_t
                constexpr std::ptrdiff_t m_bIsPublicBlackboardVariable = 0x48; // bool
                constexpr std::ptrdiff_t m_bIsObservable = 0x49; // bool
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x4C; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 1
            namespace PARTICLE_EHANDLE__ {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAddUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x94; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x98; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x99; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x9A; // bool
                constexpr std::ptrdiff_t m_bApplyScale = 0x9B; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CAnimEnum {
                constexpr std::ptrdiff_t m_value = 0x0; // uint8
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDemoSettingsComponentUpdater {
                constexpr std::ptrdiff_t m_settings = 0x30; // CAnimDemoCaptureSettings
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDecoder {
                constexpr std::ptrdiff_t m_szName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nVersion = 0x10; // int32
                constexpr std::ptrdiff_t m_nType = 0x14; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCachedTargetNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_mode = 0x14; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CPerParticleFloatInput {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmConstBoolNode__CDefinition {
                constexpr std::ptrdiff_t m_bValue = 0x10; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBitFlags {
                constexpr std::ptrdiff_t m_flags = 0x0; // uint32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootStride {
                constexpr std::ptrdiff_t m_definition = 0x0; // CFootCycleDefinition
                constexpr std::ptrdiff_t m_trajectories = 0x40; // CFootTrajectories
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmLegacyEvent {
                constexpr std::ptrdiff_t m_animEventClassName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_KV = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateNodeStateData {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_bExclusiveRootMotion = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bExclusiveRootMotionFirstFrame = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFootstepLandedAnimTag {
                constexpr std::ptrdiff_t m_FootstepType = 0x58; // FootstepLandedFootSoundType_t
                constexpr std::ptrdiff_t m_OverrideSoundName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_DebugAnimSourceString = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_BoneName = 0x70; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CEnumAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x88; // uint8
                constexpr std::ptrdiff_t m_enumOptions = 0x90; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_vecEnumReferenced = 0xA8; // CUtlVector<uint64>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHandshakeAnimTagBase {
                constexpr std::ptrdiff_t m_bIsDisableTag = 0x50; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimTagID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFrameSegment {
                constexpr std::ptrdiff_t m_nUniqueFrameIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nLocalElementMasks = 0x4; // uint32
                constexpr std::ptrdiff_t m_nLocalChannel = 0x8; // int32
                constexpr std::ptrdiff_t m_container = 0x10; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSlopeComponentUpdater {
                constexpr std::ptrdiff_t m_flTraceDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_hSlopeAngle = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeHeading = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimInputDamping {
                constexpr std::ptrdiff_t m_speedFunction = 0x8; // DampingSpeedFunction
                constexpr std::ptrdiff_t m_fSpeedScale = 0xC; // float32
                constexpr std::ptrdiff_t m_fFallingSpeedScale = 0x10; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIKBody {
                constexpr std::ptrdiff_t m_flMass = 0x0; // float32
                constexpr std::ptrdiff_t m_vLocalMassCenter = 0x4; // Vector
                constexpr std::ptrdiff_t m_vRadius = 0x10; // Vector
                constexpr std::ptrdiff_t m_flResistance = 0x1C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBoxSet {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_HitBoxes = 0x10; // CUtlVector<CHitBox>
                constexpr std::ptrdiff_t m_SourceFilename = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ChainToSolveData_t {
                constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_SolverSettings = 0x4; // IKSolverSettings_t
                constexpr std::ptrdiff_t m_TargetSettings = 0x10; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
                constexpr std::ptrdiff_t m_flDebugNormalizedValue = 0x3C; // float32
                constexpr std::ptrdiff_t m_vDebugOffset = 0x40; // VectorAligned
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConstraintSlave {
                constexpr std::ptrdiff_t m_qBaseOrientation = 0x0; // Quaternion
                constexpr std::ptrdiff_t m_vBasePosition = 0x10; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x1C; // uint32
                constexpr std::ptrdiff_t m_flWeight = 0x20; // float32
                constexpr std::ptrdiff_t m_sName = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeOutputIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycleDefinition {
                constexpr std::ptrdiff_t m_vStancePositionMS = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMidpointPositionMS = 0xC; // Vector
                constexpr std::ptrdiff_t m_flStanceDirectionMS = 0x18; // float32
                constexpr std::ptrdiff_t m_vToStrideStartPos = 0x1C; // Vector
                constexpr std::ptrdiff_t m_stanceCycle = 0x28; // CAnimCycle
                constexpr std::ptrdiff_t m_footLiftCycle = 0x2C; // CFootCycle
                constexpr std::ptrdiff_t m_footOffCycle = 0x30; // CFootCycle
                constexpr std::ptrdiff_t m_footStrikeCycle = 0x34; // CFootCycle
                constexpr std::ptrdiff_t m_footLandCycle = 0x38; // CFootCycle
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVirtualAnimParameter {
                constexpr std::ptrdiff_t m_expressionString = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_eParamType = 0x78; // AnimParamType_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionMetricEvaluator {
                constexpr std::ptrdiff_t m_means = 0x18; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_standardDeviations = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_nDimensionStartIndex = 0x4C; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFutureVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flStoppingDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x58; // float32
                constexpr std::ptrdiff_t m_eMode = 0x5C; // VelocityMetricMode
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSkeleton__SecondarySkeleton_t {
                constexpr std::ptrdiff_t m_attachToBoneID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateNodeBase {
                constexpr std::ptrdiff_t m_nodePath = 0x18; // CAnimNodePath
                constexpr std::ptrdiff_t m_networkMode = 0x48; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_name = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSetParameterActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_value = 0x1A; // CAnimVariant
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFixedWeightBoneMaskNode__CDefinition {
                constexpr std::ptrdiff_t m_flBoneWeight = 0x10; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__FrameStamp_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEntitySimTime = 0x4; // float32
                constexpr std::ptrdiff_t m_bTeleportTick = 0x8; // bool
                constexpr std::ptrdiff_t m_bPredicted = 0x9; // bool
                constexpr std::ptrdiff_t m_flCurTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x10; // float32
                constexpr std::ptrdiff_t m_nFrameCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nTickCount = 0x18; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_DomainValue {
                constexpr std::ptrdiff_t m_nType = 0x0; // PulseDomainValueType_t
                constexpr std::ptrdiff_t m_Value = 0x8; // CGlobalSymbolCaseSensitive
                constexpr std::ptrdiff_t m_RequiredRuntimeType = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBonePositionMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderBufferBinding {
                constexpr std::ptrdiff_t m_hBuffer = 0x0; // uint64
                constexpr std::ptrdiff_t m_nBindOffsetBytes = 0x10; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmExternalGraphNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionRendererFloatInput {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmParameterizedBlendNode__Parameterization_t {
                constexpr std::ptrdiff_t m_blendRanges = 0x0; // CUtlLeanVectorFixedGrowable<CNmParameterizedBlendNode::BlendRange_t,5>
                constexpr std::ptrdiff_t m_parameterRange = 0x48; // Range_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEntityAttributeIntEvent {
                constexpr std::ptrdiff_t m_nIntValue = 0x38; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmNotNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMeshletDescriptor {
                constexpr std::ptrdiff_t m_PackedAABB = 0x0; // PackedAABB_t
                constexpr std::ptrdiff_t m_CullingData = 0x8; // CDrawCullingData
                constexpr std::ptrdiff_t m_nVertexOffset = 0xC; // uint32
                constexpr std::ptrdiff_t m_nTriangleOffset = 0x10; // uint32
                constexpr std::ptrdiff_t m_nVertexCount = 0x14; // uint8
                constexpr std::ptrdiff_t m_nTriangleCount = 0x15; // uint8
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphSetData {
                constexpr std::ptrdiff_t m_nWidth = 0x10; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x14; // int32
                constexpr std::ptrdiff_t m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
                constexpr std::ptrdiff_t m_morphDatas = 0x30; // CUtlVector<CMorphData>
                constexpr std::ptrdiff_t m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
                constexpr std::ptrdiff_t m_FlexControllers = 0x68; // CUtlVector<CFlexController>
                constexpr std::ptrdiff_t m_FlexRules = 0x80; // CUtlVector<CFlexRule>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmAndNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphConstraint {
                constexpr std::ptrdiff_t m_sTargetMorph = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_nSlaveChannel = 0x68; // int32
                constexpr std::ptrdiff_t m_flMin = 0x6C; // float32
                constexpr std::ptrdiff_t m_flMax = 0x70; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CClothSettingsAnimTag {
                constexpr std::ptrdiff_t m_flStiffness = 0x58; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x5C; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x60; // float32
                constexpr std::ptrdiff_t m_nVertexSet = 0x68; // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDesc_Flag {
                constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
                constexpr std::ptrdiff_t m_bAllZeros = 0x1; // bool
                constexpr std::ptrdiff_t m_bHidden = 0x2; // bool
                constexpr std::ptrdiff_t m_bDelta = 0x3; // bool
                constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x4; // bool
                constexpr std::ptrdiff_t m_bModelDoc = 0x5; // bool
                constexpr std::ptrdiff_t m_bImplicitSeqIgnoreDelta = 0x6; // bool
                constexpr std::ptrdiff_t m_bAnimGraphAdditive = 0x7; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBlend2DNode__CDefinition {
                constexpr std::ptrdiff_t m_sourceNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_nInputParameterNodeIdx0 = 0x38; // int16
                constexpr std::ptrdiff_t m_nInputParameterNodeIdx1 = 0x3A; // int16
                constexpr std::ptrdiff_t m_values = 0x40; // CUtlVectorFixedGrowable<Vector2D,10>
                constexpr std::ptrdiff_t m_indices = 0xA8; // CUtlVectorFixedGrowable<uint8,30>
                constexpr std::ptrdiff_t m_hullIndices = 0xE0; // CUtlVectorFixedGrowable<uint8,10>
                constexpr std::ptrdiff_t m_bAllowLooping = 0x108; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlendCurve {
                constexpr std::ptrdiff_t m_flControlPoint1 = 0x0; // float32
                constexpr std::ptrdiff_t m_flControlPoint2 = 0x4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphNode__CDefinition {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x8; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerSphere {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_flRadius = 0x50; // float32
                constexpr std::ptrdiff_t m_Color = 0x54; // Color
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClip__ModelSpaceSamplingChainLink_t {
                constexpr std::ptrdiff_t m_nBoneIdx = 0x0; // int32
                constexpr std::ptrdiff_t m_nParentBoneIdx = 0x4; // int32
                constexpr std::ptrdiff_t m_nParentChainLinkIdx = 0x8; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUserDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nType = 0x10; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmDurationScaleNode__CDefinition {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTransitionUpdateData {
                constexpr std::ptrdiff_t m_srcStateIndex = 0x0; // uint8
                constexpr std::ptrdiff_t m_destStateIndex = 0x1; // uint8
                constexpr std::ptrdiff_t m_nHandshakeMaskToDisableFirst = 0x0; // bitfield:7
                constexpr std::ptrdiff_t m_bDisabled = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeBlackboardReferenceIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CMovementHandshakeAnimTag {
            }
            // Parent: None
            // Field count: 2
            namespace CBoneConstraintPoseSpaceBone__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputTransformList = 0x10; // CUtlVector<CTransform>
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqMultiFetch {
                constexpr std::ptrdiff_t m_flags = 0x0; // CSeqMultiFetchFlag
                constexpr std::ptrdiff_t m_localReferenceArray = 0x8; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_nGroupSize = 0x20; // int32[2]
                constexpr std::ptrdiff_t m_nLocalPose = 0x28; // int32[2]
                constexpr std::ptrdiff_t m_poseKeyArray0 = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_poseKeyArray1 = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nLocalCyclePoseParameter = 0x60; // int32
                constexpr std::ptrdiff_t m_bCalculatePoseParameters = 0x64; // bool
                constexpr std::ptrdiff_t m_bFixedBlendWeight = 0x65; // bool
                constexpr std::ptrdiff_t m_flFixedBlendWeightVals = 0x68; // float32[2]
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesSoundNames {
                constexpr std::ptrdiff_t m_impactSoft = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_impactHard = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_scrapeSmooth = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_scrapeRough = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bulletImpact = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_rolling = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_break = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_strain = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_meleeImpact = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_pushOff = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_skidStop = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_resonant = 0x58; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmBoneMaskSetDefinition_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_primaryWeightList = 0x8; // CNmBoneWeightList
                constexpr std::ptrdiff_t m_secondaryWeightLists = 0x118; // CUtlLeanVector<CNmBoneWeightList>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAudioAnimTag {
                constexpr std::ptrdiff_t m_clipName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_attachmentName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_flVolume = 0x68; // float32
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x6C; // bool
                constexpr std::ptrdiff_t m_bStopWhenGraphEnds = 0x6D; // bool
                constexpr std::ptrdiff_t m_bPlayOnServer = 0x6E; // bool
                constexpr std::ptrdiff_t m_bPlayOnClient = 0x6F; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTurnHelperUpdateNode {
                constexpr std::ptrdiff_t m_facingTarget = 0x74; // AnimValueSource
                constexpr std::ptrdiff_t m_turnStartTimeOffset = 0x78; // float32
                constexpr std::ptrdiff_t m_turnDuration = 0x7C; // float32
                constexpr std::ptrdiff_t m_bMatchChildDuration = 0x80; // bool
                constexpr std::ptrdiff_t m_manualTurnOffset = 0x84; // float32
                constexpr std::ptrdiff_t m_bUseManualTurnOffset = 0x88; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGroup {
                constexpr std::ptrdiff_t m_nFlags = 0x10; // uint32
                constexpr std::ptrdiff_t m_name = 0x18; // CBufferString
                constexpr std::ptrdiff_t m_localHAnimArray_Handle = 0x60; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
                constexpr std::ptrdiff_t m_includedGroupArray_Handle = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_directHSeqGroup_Handle = 0x90; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
                constexpr std::ptrdiff_t m_decodeKey = 0x98; // CAnimKeyData
                constexpr std::ptrdiff_t m_szScripts = 0x110; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_AdditionalExtRefs = 0x128; // CUtlVector<CStrongHandleVoid>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmSyncTrackTime_t {
                constexpr std::ptrdiff_t m_nEventIdx = 0x0; // int32
                constexpr std::ptrdiff_t m_percentageThrough = 0x4; // NmPercent_t
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClip {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_nNumFrames = 0x8; // uint32
                constexpr std::ptrdiff_t m_flDuration = 0xC; // float32
                constexpr std::ptrdiff_t m_compressedPoseData = 0x10; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_trackCompressionSettings = 0x20; // CUtlVector<NmCompressionSettings_t>
                constexpr std::ptrdiff_t m_compressedPoseOffsets = 0x38; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_floatCurveIDs = 0x50; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_floatCurveDefs = 0x68; // CUtlVector<NmFloatCurveCompressionSettings_t>
                constexpr std::ptrdiff_t m_compressedFloatCurveData = 0x80; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_compressedFloatCurveOffsets = 0x98; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_secondaryAnimations = 0xD8; // CUtlVectorFixedGrowable<CNmClip*,1>
                constexpr std::ptrdiff_t m_syncTrack = 0xF8; // CNmSyncTrack
                constexpr std::ptrdiff_t m_rootMotion = 0x1B0; // CNmRootMotionData
                constexpr std::ptrdiff_t m_bIsAdditive = 0x200; // bool
                constexpr std::ptrdiff_t m_modelSpaceSamplingChain = 0x208; // CUtlVector<CNmClip::ModelSpaceSamplingChainLink_t>
                constexpr std::ptrdiff_t m_modelSpaceBoneSamplingIndices = 0x220; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CToggleComponentActionUpdater {
                constexpr std::ptrdiff_t m_componentID = 0x18; // AnimComponentID
                constexpr std::ptrdiff_t m_bSetEnabled = 0x1C; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CNmOverlayBlendTask {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSpeedScaleBaseNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_flDefaultInputValue = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerPrimitiveBase {
                constexpr std::ptrdiff_t m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
                constexpr std::ptrdiff_t m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nOwningAnimNodePathCount = 0x38; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBindPoseUpdateNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmSyncTrackTimeRange_t {
                constexpr std::ptrdiff_t m_startTime = 0x0; // NmSyncTrackTime_t
                constexpr std::ptrdiff_t m_endTime = 0x8; // NmSyncTrackTime_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerText {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x50; // Color
                constexpr std::ptrdiff_t m_Text = 0x58; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootTrajectory {
                constexpr std::ptrdiff_t m_vOffset = 0x8; // Vector
                constexpr std::ptrdiff_t m_flRotationOffset = 0x14; // float32
                constexpr std::ptrdiff_t m_flProgression = 0x18; // float32
            }
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionMatchingUpdateNode {
                constexpr std::ptrdiff_t m_dataSet = 0x58; // CMotionDataSet
                constexpr std::ptrdiff_t m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
                constexpr std::ptrdiff_t m_weights = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bSearchEveryTick = 0xE0; // bool
                constexpr std::ptrdiff_t m_flSearchInterval = 0xE4; // float32
                constexpr std::ptrdiff_t m_bSearchWhenClipEnds = 0xE8; // bool
                constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0xE9; // bool
                constexpr std::ptrdiff_t m_blendCurve = 0xEC; // CBlendCurve
                constexpr std::ptrdiff_t m_flSampleRate = 0xF4; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0xF8; // float32
                constexpr std::ptrdiff_t m_bLockClipWhenWaning = 0xFC; // bool
                constexpr std::ptrdiff_t m_flSelectionThreshold = 0x100; // float32
                constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x104; // float32
                constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0x108; // bool
                constexpr std::ptrdiff_t m_bGoalAssist = 0x109; // bool
                constexpr std::ptrdiff_t m_flGoalAssistDistance = 0x10C; // float32
                constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0x110; // float32
                constexpr std::ptrdiff_t m_distanceScale_Damping = 0x118; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0x130; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0x134; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0x138; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0x13C; // float32
                constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0x140; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmReferencePoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqS1SeqDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_fetch = 0x20; // CSeqMultiFetch
                constexpr std::ptrdiff_t m_nLocalWeightlist = 0x90; // int32
                constexpr std::ptrdiff_t m_autoLayerArray = 0x98; // CUtlVector<CSeqAutoLayer>
                constexpr std::ptrdiff_t m_IKLockArray = 0xB0; // CUtlVector<CSeqIKLock>
                constexpr std::ptrdiff_t m_transition = 0xC8; // CSeqTransition
                constexpr std::ptrdiff_t m_SequenceKeys = 0xD0; // KeyValues3
                constexpr std::ptrdiff_t m_LegacyKeyValueText = 0xE0; // CBufferString
                constexpr std::ptrdiff_t m_activityArray = 0xF0; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_footMotion = 0x108; // CUtlVector<CFootMotion>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexController {
                constexpr std::ptrdiff_t m_szName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_szType = 0x8; // CUtlString
                constexpr std::ptrdiff_t min = 0x10; // float32
                constexpr std::ptrdiff_t max = 0x14; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonDemoDb_t {
                constexpr std::ptrdiff_t m_AnimCaptures = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
                constexpr std::ptrdiff_t m_CameraTrack = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
                constexpr std::ptrdiff_t m_flRecordingTime = 0x30; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatRangeComparisonNode__CDefinition {
                constexpr std::ptrdiff_t m_range = 0x10; // Range_t
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_bIsInclusiveCheck = 0x1A; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNodeSequence {
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x40; // HSequence
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x44; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTwoBoneIKNode__CDefinition {
                constexpr std::ptrdiff_t m_effectorBoneID = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nEffectorTargetNodeIdx = 0x20; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x22; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x24; // float32
                constexpr std::ptrdiff_t m_blendMode = 0x28; // NmIKBlendMode_t
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x29; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexDesc {
                constexpr std::ptrdiff_t m_szFacs = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderMesh {
                constexpr std::ptrdiff_t m_sceneObjects = 0x10; // CUtlLeanVectorFixedGrowable<CSceneObjectData,1>
                constexpr std::ptrdiff_t m_constraints = 0xA8; // CUtlLeanVector<CBaseConstraint*>
                constexpr std::ptrdiff_t m_skeleton = 0xB8; // CRenderSkeleton
                constexpr std::ptrdiff_t m_bUseUV2ForCharting = 0x1B4; // bool
                constexpr std::ptrdiff_t m_bEmbeddedMapMesh = 0x1B5; // bool
                constexpr std::ptrdiff_t m_meshDeformParams = 0x1D8; // DynamicMeshDeformParams_t
                constexpr std::ptrdiff_t m_pGroomData = 0x1E8; // CRenderGroom*
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimSkeleton {
                constexpr std::ptrdiff_t m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_boneNames = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_parents = 0x70; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_feet = 0x88; // CUtlVector<CAnimFoot>
                constexpr std::ptrdiff_t m_morphNames = 0xA0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_lodBoneCounts = 0xB8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeConstantIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysics2ShapeDef_t {
                constexpr std::ptrdiff_t m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
                constexpr std::ptrdiff_t m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
                constexpr std::ptrdiff_t m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
                constexpr std::ptrdiff_t m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
                constexpr std::ptrdiff_t m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatCurveNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_curve = 0x18; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerAxis {
                constexpr std::ptrdiff_t m_xWsTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_flAxisSize = 0x60; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTwistConstraint {
                constexpr std::ptrdiff_t m_bInverse = 0x60; // bool
                constexpr std::ptrdiff_t m_qParentBindRotation = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_qChildBindRotation = 0x80; // Quaternion
            }
            // Parent: None
            // Field count: 1
            namespace PulseDocNodeID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelBoneFlexDriverControl_t {
                constexpr std::ptrdiff_t m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
                constexpr std::ptrdiff_t m_flexController = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flexControllerToken = 0x10; // uint32
                constexpr std::ptrdiff_t m_flMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flMax = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionFloatInput {
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqCmdLayer {
                constexpr std::ptrdiff_t m_cmd = 0x0; // int16
                constexpr std::ptrdiff_t m_nLocalReference = 0x2; // int16
                constexpr std::ptrdiff_t m_nLocalBonemask = 0x4; // int16
                constexpr std::ptrdiff_t m_nDstResult = 0x6; // int16
                constexpr std::ptrdiff_t m_nSrcResult = 0x8; // int16
                constexpr std::ptrdiff_t m_bSpline = 0xA; // bool
                constexpr std::ptrdiff_t m_flVar1 = 0xC; // float32
                constexpr std::ptrdiff_t m_flVar2 = 0x10; // float32
                constexpr std::ptrdiff_t m_nLineNumber = 0x14; // int16
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootPinningPoseOpFixedData_t {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_flBlendTime = 0x18; // float32
                constexpr std::ptrdiff_t m_flLockBreakDistance = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x20; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x28; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x29; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderSkeletonBone_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_parentName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_invBindPose = 0x10; // matrix3x4_t
                constexpr std::ptrdiff_t m_bbox = 0x40; // SkeletonBoneBounds_t
                constexpr std::ptrdiff_t m_flSphereRadius = 0x58; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDistanceRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_flMaxDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flMinDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x5C; // float32
                constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x60; // bool
                constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x61; // bool
                constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x62; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectPlaybackUpdateNode {
                constexpr std::ptrdiff_t m_bFinishEarly = 0x74; // bool
                constexpr std::ptrdiff_t m_bResetOnFinish = 0x75; // bool
                constexpr std::ptrdiff_t m_allTags = 0x78; // CUtlVector<CDirectPlaybackTagData>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDEvent {
                constexpr std::ptrdiff_t m_ID = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_secondaryID = 0x28; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexRule {
                constexpr std::ptrdiff_t m_nFlex = 0x0; // int32
                constexpr std::ptrdiff_t m_FlexOps = 0x8; // CUtlVector<CFlexOp>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ScriptInfo_t {
                constexpr std::ptrdiff_t m_code = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_proxyReadParams = 0x20; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_proxyWriteParams = 0x38; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_eScriptType = 0x50; // AnimScriptType
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintRbf {
                constexpr std::ptrdiff_t m_inputBones = 0x20; // CUtlVector<std::pair<CUtlString,uint32>>
                constexpr std::ptrdiff_t m_outputBones = 0x38; // CUtlVector<std::pair<CUtlString,uint32>>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSoundEvent {
                constexpr std::ptrdiff_t m_relevance = 0x20; // CNmEventRelevance_t
                constexpr std::ptrdiff_t m_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_position = 0x30; // CNmSoundEvent::Position_t
                constexpr std::ptrdiff_t m_attachmentName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_bContinuePlayingSoundAtDurationEnd = 0x48; // bool
                constexpr std::ptrdiff_t m_flDurationInterruptionThreshold = 0x4C; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderGroom {
                constexpr std::ptrdiff_t m_hairs = 0x0; // CUtlVector<RenderHairStrandInfo_t>
                constexpr std::ptrdiff_t m_hairPositionOffsets = 0x18; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_hSimParamsMat = 0x40; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_strandSegmentCountHist = 0x48; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nMaxSegmentsPerHairStrand = 0x78; // int32
                constexpr std::ptrdiff_t m_nGuideHairCount = 0x7C; // int32
                constexpr std::ptrdiff_t m_nHairCount = 0x80; // int32
                constexpr std::ptrdiff_t m_nTotalVertexCount = 0x84; // int32
                constexpr std::ptrdiff_t m_nTotalSegmentCount = 0x88; // int32
                constexpr std::ptrdiff_t m_nGroomGroupID = 0x8C; // int32
                constexpr std::ptrdiff_t m_nAttachBoneIdx = 0x90; // int32
                constexpr std::ptrdiff_t m_nAttachMeshIdx = 0x94; // int32
                constexpr std::ptrdiff_t m_nAttachMeshDrawCallIdx = 0x98; // int32
                constexpr std::ptrdiff_t m_bEnableSimulation = 0x9C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmParameterizedClipSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_optionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_optionWeights = 0x28; // CUtlLeanVectorFixedGrowable<uint8,5>
                constexpr std::ptrdiff_t m_parameterNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x3A; // bool
                constexpr std::ptrdiff_t m_bHasWeightsSet = 0x3B; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTiltTwistConstraint {
                constexpr std::ptrdiff_t m_nTargetAxis = 0x60; // int32
                constexpr std::ptrdiff_t m_nSlaveAxis = 0x64; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSpeedScaleNode__CDefinition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVPhysXSurfacePropertiesList {
                constexpr std::ptrdiff_t m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderHairStrandInfo_t {
                constexpr std::ptrdiff_t m_nGuideHairIndices_nSurfaceTriIndex = 0x0; // uint32[2]
                constexpr std::ptrdiff_t m_vGuideBary_vBaseBary = 0x8; // uint16[4]
                constexpr std::ptrdiff_t m_vRootOffset_flLengthScale = 0x10; // uint16[4]
                constexpr std::ptrdiff_t m_nPackedBaseUv = 0x18; // uint16[2]
                constexpr std::ptrdiff_t m_nPackedSurfaceNormalOs = 0x1C; // uint32
                constexpr std::ptrdiff_t m_nPackedSurfaceTangentOs = 0x20; // uint32
                constexpr std::ptrdiff_t m_nDataOffset_Segments = 0x24; // uint32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleControlClipUpdateNode {
                constexpr std::ptrdiff_t m_tags = 0x60; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x7C; // HSequence
                constexpr std::ptrdiff_t m_duration = 0x80; // float32
                constexpr std::ptrdiff_t m_valueSource = 0x84; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x8A; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTargetPointNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x12; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_RegisterInfo {
                constexpr std::ptrdiff_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_Type = 0x8; // CPulseValueFullType
                constexpr std::ptrdiff_t m_OriginName = 0x20; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x58; // int32
                constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x5C; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CWarpSectionAnimTagBase {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStaticPoseCache {
                constexpr std::ptrdiff_t m_poses = 0x10; // CUtlVector<CCachedPose>
                constexpr std::ptrdiff_t m_nBoneCount = 0x28; // int32
                constexpr std::ptrdiff_t m_nMorphCount = 0x2C; // int32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace LookAtOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bones = 0x98; // CUtlVector<LookAtBone_t>
                constexpr std::ptrdiff_t m_flYawLimit = 0xB0; // float32
                constexpr std::ptrdiff_t m_flPitchLimit = 0xB4; // float32
                constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0xB8; // float32
                constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0xBC; // float32
                constexpr std::ptrdiff_t m_bRotateYawForward = 0xC0; // bool
                constexpr std::ptrdiff_t m_bMaintainUpDirection = 0xC1; // bool
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xC2; // bool
                constexpr std::ptrdiff_t m_bUseHysteresis = 0xC3; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphSettingsManager {
                constexpr std::ptrdiff_t m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphModelBinding {
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintPoseSpaceBone {
                constexpr std::ptrdiff_t m_inputList = 0x60; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionBlendItem {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_flKeyValue = 0x8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintPoseSpaceMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_sAttachmentName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_outputMorph = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_inputList = 0x48; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
                constexpr std::ptrdiff_t m_bClamp = 0x60; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFloatAnimParameter {
                constexpr std::ptrdiff_t m_fDefaultValue = 0x80; // float32
                constexpr std::ptrdiff_t m_fMinValue = 0x84; // float32
                constexpr std::ptrdiff_t m_fMaxValue = 0x88; // float32
                constexpr std::ptrdiff_t m_bInterpolate = 0x8C; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateActionUpdater {
                constexpr std::ptrdiff_t m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
                constexpr std::ptrdiff_t m_eBehavior = 0x8; // StateActionBehavior
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPlayerInputAnimMotorUpdater {
                constexpr std::ptrdiff_t m_sampleTimes = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flSpringConstant = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAnticipationDistance = 0x40; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x44; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bUseAcceleration = 0x48; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderSkeleton {
                constexpr std::ptrdiff_t m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
                constexpr std::ptrdiff_t m_boneParents = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nBoneWeightCount = 0x48; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqIKLock {
                constexpr std::ptrdiff_t m_flPosWeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flAngleWeight = 0x4; // float32
                constexpr std::ptrdiff_t m_nLocalBone = 0x8; // int16
                constexpr std::ptrdiff_t m_bBonesOrientedAlongPositiveX = 0xA; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParamHandleMap {
                constexpr std::ptrdiff_t m_list = 0x0; // CUtlHashtable<uint16,int16>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatClampNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_clampRange = 0x14; // Range_t
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeCellIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDesc {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CAnimDesc_Flag
                constexpr std::ptrdiff_t fps = 0x18; // float32
                constexpr std::ptrdiff_t m_Data = 0x20; // CAnimEncodedFrames
                constexpr std::ptrdiff_t m_movementArray = 0xF8; // CUtlVector<CAnimMovement>
                constexpr std::ptrdiff_t m_xInitialOffset = 0x110; // CTransform
                constexpr std::ptrdiff_t m_eventArray = 0x130; // CUtlVector<CAnimEventDefinition>
                constexpr std::ptrdiff_t m_activityArray = 0x148; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_hierarchyArray = 0x160; // CUtlVector<CAnimLocalHierarchy>
                constexpr std::ptrdiff_t framestalltime = 0x178; // float32
                constexpr std::ptrdiff_t m_vecRootMin = 0x17C; // Vector
                constexpr std::ptrdiff_t m_vecRootMax = 0x188; // Vector
                constexpr std::ptrdiff_t m_vecBoneWorldMin = 0x198; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecBoneWorldMax = 0x1B0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_sequenceParams = 0x1C8; // CAnimSequenceParams
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmRootMotionOverrideNode__CDefinition {
                constexpr std::ptrdiff_t m_desiredMovingVelocityNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_desiredFacingDirectionNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_linearVelocityLimitNodeIdx = 0x1C; // int16
                constexpr std::ptrdiff_t m_angularVelocityLimitNodeIdx = 0x1E; // int16
                constexpr std::ptrdiff_t m_maxLinearVelocity = 0x20; // float32
                constexpr std::ptrdiff_t m_maxAngularVelocityRadians = 0x24; // float32
                constexpr std::ptrdiff_t m_overrideFlags = 0x28; // CNmBitFlags
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTargetWarpNode__CDefinition {
                constexpr std::ptrdiff_t m_nClipReferenceNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nTargetValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_samplingMode = 0x14; // CNmRootMotionData::SamplingMode_t
                constexpr std::ptrdiff_t m_bAllowTargetUpdate = 0x15; // bool
                constexpr std::ptrdiff_t m_flSamplingPositionErrorThresholdSq = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxTangentLength = 0x1C; // float32
                constexpr std::ptrdiff_t m_flLerpFallbackDistanceThreshold = 0x20; // float32
                constexpr std::ptrdiff_t m_flTargetUpdateDistanceThreshold = 0x24; // float32
                constexpr std::ptrdiff_t m_flTargetUpdateAngleThresholdRadians = 0x28; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesPhysics {
                constexpr std::ptrdiff_t m_friction = 0x0; // float32
                constexpr std::ptrdiff_t m_elasticity = 0x4; // float32
                constexpr std::ptrdiff_t m_density = 0x8; // float32
                constexpr std::ptrdiff_t m_thickness = 0xC; // float32
                constexpr std::ptrdiff_t m_softContactFrequency = 0x10; // float32
                constexpr std::ptrdiff_t m_softContactDampingRatio = 0x14; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerPie {
                constexpr std::ptrdiff_t m_vWsCenter = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsStart = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_vWsEnd = 0x60; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x70; // Color
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmFloatCurveCompressionSettings_t {
                constexpr std::ptrdiff_t m_range = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_bIsStatic = 0x8; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintDotToMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_sTargetBoneName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_sMorphChannelName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_flRemap = 0x38; // float32[4]
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPointConstraint {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurrentRotationVelocityMetricEvaluator {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TraceSettings_t {
                constexpr std::ptrdiff_t m_flTraceHeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParamSpanSample_t {
                constexpr std::ptrdiff_t m_value = 0x0; // CAnimVariant
                constexpr std::ptrdiff_t m_flCycle = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmFollowBoneTask {
            }
            // Parent: None
            // Field count: 46
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXConstraintParams_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // int8
                constexpr std::ptrdiff_t m_nTranslateMotion = 0x1; // int8
                constexpr std::ptrdiff_t m_nRotateMotion = 0x2; // int8
                constexpr std::ptrdiff_t m_nFlags = 0x3; // int8
                constexpr std::ptrdiff_t m_anchor = 0x4; // Vector[2]
                constexpr std::ptrdiff_t m_axes = 0x1C; // QuaternionStorage[2]
                constexpr std::ptrdiff_t m_maxForce = 0x3C; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0x40; // float32
                constexpr std::ptrdiff_t m_linearLimitValue = 0x44; // float32
                constexpr std::ptrdiff_t m_linearLimitRestitution = 0x48; // float32
                constexpr std::ptrdiff_t m_linearLimitSpring = 0x4C; // float32
                constexpr std::ptrdiff_t m_linearLimitDamping = 0x50; // float32
                constexpr std::ptrdiff_t m_twistLowLimitValue = 0x54; // float32
                constexpr std::ptrdiff_t m_twistLowLimitRestitution = 0x58; // float32
                constexpr std::ptrdiff_t m_twistLowLimitSpring = 0x5C; // float32
                constexpr std::ptrdiff_t m_twistLowLimitDamping = 0x60; // float32
                constexpr std::ptrdiff_t m_twistHighLimitValue = 0x64; // float32
                constexpr std::ptrdiff_t m_twistHighLimitRestitution = 0x68; // float32
                constexpr std::ptrdiff_t m_twistHighLimitSpring = 0x6C; // float32
                constexpr std::ptrdiff_t m_twistHighLimitDamping = 0x70; // float32
                constexpr std::ptrdiff_t m_swing1LimitValue = 0x74; // float32
                constexpr std::ptrdiff_t m_swing1LimitRestitution = 0x78; // float32
                constexpr std::ptrdiff_t m_swing1LimitSpring = 0x7C; // float32
                constexpr std::ptrdiff_t m_swing1LimitDamping = 0x80; // float32
                constexpr std::ptrdiff_t m_swing2LimitValue = 0x84; // float32
                constexpr std::ptrdiff_t m_swing2LimitRestitution = 0x88; // float32
                constexpr std::ptrdiff_t m_swing2LimitSpring = 0x8C; // float32
                constexpr std::ptrdiff_t m_swing2LimitDamping = 0x90; // float32
                constexpr std::ptrdiff_t m_goalPosition = 0x94; // Vector
                constexpr std::ptrdiff_t m_goalOrientation = 0xA0; // QuaternionStorage
                constexpr std::ptrdiff_t m_goalAngularVelocity = 0xB0; // Vector
                constexpr std::ptrdiff_t m_driveSpringX = 0xBC; // float32
                constexpr std::ptrdiff_t m_driveSpringY = 0xC0; // float32
                constexpr std::ptrdiff_t m_driveSpringZ = 0xC4; // float32
                constexpr std::ptrdiff_t m_driveDampingX = 0xC8; // float32
                constexpr std::ptrdiff_t m_driveDampingY = 0xCC; // float32
                constexpr std::ptrdiff_t m_driveDampingZ = 0xD0; // float32
                constexpr std::ptrdiff_t m_driveSpringTwist = 0xD4; // float32
                constexpr std::ptrdiff_t m_driveSpringSwing = 0xD8; // float32
                constexpr std::ptrdiff_t m_driveSpringSlerp = 0xDC; // float32
                constexpr std::ptrdiff_t m_driveDampingTwist = 0xE0; // float32
                constexpr std::ptrdiff_t m_driveDampingSwing = 0xE4; // float32
                constexpr std::ptrdiff_t m_driveDampingSlerp = 0xE8; // float32
                constexpr std::ptrdiff_t m_solverIterationCount = 0xEC; // int32
                constexpr std::ptrdiff_t m_projectionLinearTolerance = 0xF0; // float32
                constexpr std::ptrdiff_t m_projectionAngularTolerance = 0xF4; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatComparisonNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nComparandValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_comparison = 0x14; // CNmFloatComparisonNode::Comparison_t
                constexpr std::ptrdiff_t m_flEpsilon = 0x18; // float32
                constexpr std::ptrdiff_t m_flComparisonValue = 0x1C; // float32
            }
            // Parent: None
            // Field count: 13
            namespace CNmChainSolverTask {
                constexpr std::ptrdiff_t m_nEffectorBoneIdx = 0x50; // int32
                constexpr std::ptrdiff_t m_nEffectorTargetBoneIdx = 0x54; // int32
                constexpr std::ptrdiff_t m_targetTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_nNumBonesInChain = 0x80; // int32
                constexpr std::ptrdiff_t m_effectorTarget = 0x90; // CNmTarget
                constexpr std::ptrdiff_t m_blendMode = 0xC0; // NmIKBlendMode_t
                constexpr std::ptrdiff_t m_flBlendWeight = 0xC4; // float32
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0xC8; // bool
                constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0xC9; // bool
                constexpr std::ptrdiff_t m_debugEffectorBoneID = 0xD0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_chainStartTransformMS = 0xE0; // CTransform
                constexpr std::ptrdiff_t m_debugRequestedTargetTransformMS = 0x100; // CTransform
                constexpr std::ptrdiff_t m_debugTotalChainLength = 0x120; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateUpdateData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_hScript = 0x8; // AnimScriptHandle
                constexpr std::ptrdiff_t m_transitionIndices = 0x10; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_actions = 0x28; // CUtlVector<CStateActionUpdater>
                constexpr std::ptrdiff_t m_stateID = 0x40; // AnimStateID
                constexpr std::ptrdiff_t m_bIsStartState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsEndState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsPassthrough = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsPassthroughRootMotion = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPreEvaluatePassthroughTransitionPath = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace COrientConstraint {
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMoverUpdateNode {
                constexpr std::ptrdiff_t m_damping = 0x78; // CAnimInputDamping
                constexpr std::ptrdiff_t m_facingTarget = 0x90; // AnimValueSource
                constexpr std::ptrdiff_t m_hMoveVecParam = 0x94; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParam = 0x96; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTurnToFaceParam = 0x98; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x9C; // float32
                constexpr std::ptrdiff_t m_flTurnToFaceLimit = 0xA0; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0xA4; // bool
                constexpr std::ptrdiff_t m_bApplyMovement = 0xA5; // bool
                constexpr std::ptrdiff_t m_bOrientMovement = 0xA6; // bool
                constexpr std::ptrdiff_t m_bApplyRotation = 0xA7; // bool
                constexpr std::ptrdiff_t m_bLimitOnly = 0xA8; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmLayerBlendNode__CDefinition {
                constexpr std::ptrdiff_t m_nBaseNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_bOnlySampleBaseRootMotion = 0x12; // bool
                constexpr std::ptrdiff_t m_layerDefinition = 0x18; // CUtlLeanVectorFixedGrowable<CNmLayerBlendNode::LayerDefinition_t,3>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bDefault = 0x18; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace JiggleBoneSettingsList_t {
                constexpr std::ptrdiff_t m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSubtractUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x94; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x98; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x99; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x9A; // bool
            }
            // Parent: None
            // Field count: 1
            namespace PulseGraphInstanceID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFloatRemapNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_inputRange = 0x14; // CNmFloatRemapNode::RemapRange_t
                constexpr std::ptrdiff_t m_outputRange = 0x1C; // CNmFloatRemapNode::RemapRange_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPoseHandle {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_eType = 0x2; // PoseType_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFootstepEventIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSolveIKChainUpdateNode {
                constexpr std::ptrdiff_t m_targetHandles = 0x70; // CUtlVector<CSolveIKTargetHandle_t>
                constexpr std::ptrdiff_t m_opFixedData = 0x88; // SolveIKChainPoseOpFixedSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmOrNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlLeanVectorFixedGrowable<int16,4>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqCmdSeqDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
                constexpr std::ptrdiff_t m_nFrameRangeSequence = 0x24; // int16
                constexpr std::ptrdiff_t m_nFrameCount = 0x26; // int16
                constexpr std::ptrdiff_t m_flFPS = 0x28; // float32
                constexpr std::ptrdiff_t m_nSubCycles = 0x2C; // int16
                constexpr std::ptrdiff_t m_numLocalResults = 0x2E; // int16
                constexpr std::ptrdiff_t m_cmdLayerArray = 0x30; // CUtlVector<CSeqCmdLayer>
                constexpr std::ptrdiff_t m_eventArray = 0x48; // CUtlVector<CAnimEventDefinition>
                constexpr std::ptrdiff_t m_activityArray = 0x60; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_poseSettingArray = 0x78; // CUtlVector<CSeqPoseSetting>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneMaskUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x94; // int32
                constexpr std::ptrdiff_t m_flRootMotionBlend = 0x98; // float32
                constexpr std::ptrdiff_t m_blendSpace = 0x9C; // BoneMaskBlendSpace
                constexpr std::ptrdiff_t m_footMotionTiming = 0xA0; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bUseBlendScale = 0xA4; // bool
                constexpr std::ptrdiff_t m_blendValueSource = 0xA8; // AnimValueSource
                constexpr std::ptrdiff_t m_hBlendParameter = 0xAC; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLeafUpdateNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Value = 0x18; // KeyValues3
            }
            // Parent: None
            // Field count: 49
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            namespace CParticleFloatInput {
                constexpr std::ptrdiff_t m_nType = 0x10; // ParticleFloatType_t
                constexpr std::ptrdiff_t m_nMapType = 0x14; // ParticleFloatMapType_t
                constexpr std::ptrdiff_t m_flLiteralValue = 0x18; // float32
                constexpr std::ptrdiff_t m_NamedValue = 0x20; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_nControlPoint = 0x60; // int32
                constexpr std::ptrdiff_t m_nScalarAttribute = 0x64; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorAttribute = 0x68; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorComponent = 0x6C; // int32
                constexpr std::ptrdiff_t m_bReverseOrder = 0x70; // bool
                constexpr std::ptrdiff_t m_flRandomMin = 0x74; // float32
                constexpr std::ptrdiff_t m_flRandomMax = 0x78; // float32
                constexpr std::ptrdiff_t m_bHasRandomSignFlip = 0x7C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x80; // int32
                constexpr std::ptrdiff_t m_nRandomMode = 0x84; // ParticleFloatRandomMode_t
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_flLOD0 = 0x98; // float32
                constexpr std::ptrdiff_t m_flLOD1 = 0x9C; // float32
                constexpr std::ptrdiff_t m_flLOD2 = 0xA0; // float32
                constexpr std::ptrdiff_t m_flLOD3 = 0xA4; // float32
                constexpr std::ptrdiff_t m_nNoiseInputVectorAttribute = 0xA8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flNoiseOutputMin = 0xAC; // float32
                constexpr std::ptrdiff_t m_flNoiseOutputMax = 0xB0; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0xB4; // float32
                constexpr std::ptrdiff_t m_vecNoiseOffsetRate = 0xB8; // Vector
                constexpr std::ptrdiff_t m_flNoiseOffset = 0xC4; // float32
                constexpr std::ptrdiff_t m_nNoiseOctaves = 0xC8; // int32
                constexpr std::ptrdiff_t m_nNoiseTurbulence = 0xCC; // PFNoiseTurbulence_t
                constexpr std::ptrdiff_t m_nNoiseType = 0xD0; // PFNoiseType_t
                constexpr std::ptrdiff_t m_nNoiseModifier = 0xD4; // PFNoiseModifier_t
                constexpr std::ptrdiff_t m_flNoiseTurbulenceScale = 0xD8; // float32
                constexpr std::ptrdiff_t m_flNoiseTurbulenceMix = 0xDC; // float32
                constexpr std::ptrdiff_t m_flNoiseImgPreviewScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_bNoiseImgPreviewLive = 0xE4; // bool
                constexpr std::ptrdiff_t m_flNoCameraFallback = 0xF0; // float32
                constexpr std::ptrdiff_t m_bUseBoundsCenter = 0xF4; // bool
                constexpr std::ptrdiff_t m_nInputMode = 0xF8; // ParticleFloatInputMode_t
                constexpr std::ptrdiff_t m_flMultFactor = 0xFC; // float32
                constexpr std::ptrdiff_t m_flInput0 = 0x100; // float32
                constexpr std::ptrdiff_t m_flInput1 = 0x104; // float32
                constexpr std::ptrdiff_t m_flOutput0 = 0x108; // float32
                constexpr std::ptrdiff_t m_flOutput1 = 0x10C; // float32
                constexpr std::ptrdiff_t m_flNotchedRangeMin = 0x110; // float32
                constexpr std::ptrdiff_t m_flNotchedRangeMax = 0x114; // float32
                constexpr std::ptrdiff_t m_flNotchedOutputOutside = 0x118; // float32
                constexpr std::ptrdiff_t m_flNotchedOutputInside = 0x11C; // float32
                constexpr std::ptrdiff_t m_nRoundType = 0x120; // ParticleFloatRoundType_t
                constexpr std::ptrdiff_t m_nBiasType = 0x124; // ParticleFloatBiasType_t
                constexpr std::ptrdiff_t m_flBiasParameter = 0x128; // float32
                constexpr std::ptrdiff_t m_Curve = 0x130; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SolveIKChainPoseOpFixedSettings_t {
                constexpr std::ptrdiff_t m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEntityAttributeFloatEvent {
                constexpr std::ptrdiff_t m_FloatValue = 0x38; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDSelectorNode__CDefinition {
                constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10; // CUtlVectorFixedGrowable<int16,5>
                constexpr std::ptrdiff_t m_values = 0x38; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TwoBoneIKSettings_t {
                constexpr std::ptrdiff_t m_endEffectorType = 0x0; // IkEndEffectorType
                constexpr std::ptrdiff_t m_endEffectorAttachment = 0x10; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetType = 0x90; // IkTargetType
                constexpr std::ptrdiff_t m_targetAttachment = 0xA0; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetBoneIndex = 0x120; // int32
                constexpr std::ptrdiff_t m_hPositionParam = 0x124; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hRotationParam = 0x126; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128; // bool
                constexpr std::ptrdiff_t m_vLsFallbackHingeAxis = 0x130; // VectorAligned
                constexpr std::ptrdiff_t m_nFixedBoneIndex = 0x140; // int32
                constexpr std::ptrdiff_t m_nMiddleBoneIndex = 0x144; // int32
                constexpr std::ptrdiff_t m_nEndBoneIndex = 0x148; // int32
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x14C; // bool
                constexpr std::ptrdiff_t m_bConstrainTwist = 0x14D; // bool
                constexpr std::ptrdiff_t m_flMaxTwist = 0x150; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedPoseWriteTask {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateSharedData {
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
                constexpr std::ptrdiff_t m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32>
                constexpr std::ptrdiff_t m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
                constexpr std::ptrdiff_t m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
                constexpr std::ptrdiff_t m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
                constexpr std::ptrdiff_t m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
                constexpr std::ptrdiff_t m_settings = 0x78; // CAnimGraphSettingsManager
                constexpr std::ptrdiff_t m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
                constexpr std::ptrdiff_t m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
                constexpr std::ptrdiff_t m_rootNodePath = 0xB8; // CAnimNodePath
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimAttachment {
                constexpr std::ptrdiff_t m_influenceRotations = 0x0; // Quaternion[3]
                constexpr std::ptrdiff_t m_influenceOffsets = 0x30; // VectorAligned[3]
                constexpr std::ptrdiff_t m_influenceIndices = 0x60; // int32[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x6C; // float32[3]
                constexpr std::ptrdiff_t m_numInfluences = 0x78; // uint8
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootTrajectories {
                constexpr std::ptrdiff_t m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDComparisonNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_comparison = 0x12; // CNmIDComparisonNode::Comparison_t
                constexpr std::ptrdiff_t m_comparisionIDs = 0x18; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEditableMotionGraph {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmConstFloatNode__CDefinition {
                constexpr std::ptrdiff_t m_flValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CStringAnimTag {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBoolAnimParameter {
                constexpr std::ptrdiff_t m_bDefaultValue = 0x80; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CRagdollAnimTag {
                constexpr std::ptrdiff_t m_profileName = 0x58; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNode {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimNodeID
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmStateMachineNode__CDefinition {
                constexpr std::ptrdiff_t m_stateDefinitions = 0x10; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::StateDefinition_t,5>
                constexpr std::ptrdiff_t m_nDefaultStateIndex = 0x130; // int16
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBodyGroupAnimTag {
                constexpr std::ptrdiff_t m_nPriority = 0x58; // int32
                constexpr std::ptrdiff_t m_bodyGroupSettings = 0x60; // CUtlVector<CBodyGroupSetting>
            }
            // Parent: None
            // Field count: 0
            namespace CNmModelSpaceBlendTask {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmZeroPoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmOrientationWarpNode__CDefinition {
                constexpr std::ptrdiff_t m_nClipReferenceNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nTargetValueNodeIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_bIsOffsetNode = 0x14; // bool
                constexpr std::ptrdiff_t m_bIsOffsetRelativeToCharacter = 0x15; // bool
                constexpr std::ptrdiff_t m_samplingMode = 0x16; // CNmRootMotionData::SamplingMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimParamID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBoneMaskNode__CDefinition {
                constexpr std::ptrdiff_t m_boneMaskID = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationDecodeDebugDump_t {
                constexpr std::ptrdiff_t m_processingType = 0x0; // AnimationProcessingType_t
                constexpr std::ptrdiff_t m_elems = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVirtualParameterIDNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqScaleSet {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_bRootOffset = 0x10; // bool
                constexpr std::ptrdiff_t m_vRootOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_nLocalBoneArray = 0x20; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_flBoneScaleArray = 0x38; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeCallInfoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectionalBlendUpdateNode {
                constexpr std::ptrdiff_t m_hSequences = 0x5C; // HSequence[8]
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendValueSource = 0x98; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x9C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_playbackSpeed = 0xA0; // float32
                constexpr std::ptrdiff_t m_duration = 0xA4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xA8; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xA9; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDefinition__ReferencedGraphSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_dataSlotIdx = 0x2; // int16
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParamSpan_t {
                constexpr std::ptrdiff_t m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_flStartCycle = 0x1C; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x20; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootStepTriggerUpdateNode {
                constexpr std::ptrdiff_t m_triggers = 0x70; // CUtlVector<FootStepTrigger>
                constexpr std::ptrdiff_t m_flTolerance = 0x8C; // float32
            }
            // Parent: None
            // Field count: 5
            namespace IKTargetSettings_t {
                constexpr std::ptrdiff_t m_TargetSource = 0x0; // IKTargetSource
                constexpr std::ptrdiff_t m_Bone = 0x8; // IKBoneNameAndIndex_t
                constexpr std::ptrdiff_t m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
                constexpr std::ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
                constexpr std::ptrdiff_t m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetRenderColor {
                constexpr std::ptrdiff_t m_Color = 0x48; // Color
            }
            // Parent: None
            // Field count: 0
            namespace CNmAdditiveBlendTask {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmAnimationPoseNode__CDefinition {
                constexpr std::ptrdiff_t m_nPoseTimeValueNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_nDataSlotIdx = 0x12; // int16
                constexpr std::ptrdiff_t m_inputTimeRemapRange = 0x14; // Range_t
                constexpr std::ptrdiff_t m_flUserSpecifiedTime = 0x1C; // float32
                constexpr std::ptrdiff_t m_bUseFramesAsInput = 0x20; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionSearchDB {
                constexpr std::ptrdiff_t m_rootNode = 0x0; // CMotionSearchNode
                constexpr std::ptrdiff_t m_residualQuantizer = 0x80; // CProductQuantizer
                constexpr std::ptrdiff_t m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNodeBlend1D {
                constexpr std::ptrdiff_t m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
                constexpr std::ptrdiff_t m_nParamIndex = 0x40; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmCurrentSyncEventNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_infoType = 0x12; // CNmCurrentSyncEventNode::InfoType_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmControlParameterTargetNode__CDefinition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonBoneBounds_t {
                constexpr std::ptrdiff_t m_vecCenter = 0x0; // Vector
                constexpr std::ptrdiff_t m_vecSize = 0xC; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTwoBoneIKUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // TwoBoneIKSettings_t
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXBodyPart_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_flMass = 0x4; // float32
                constexpr std::ptrdiff_t m_rnShape = 0x8; // VPhysics2ShapeDef_t
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x80; // uint16
                constexpr std::ptrdiff_t m_nReserved = 0x82; // uint16
                constexpr std::ptrdiff_t m_flInertiaScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flLinearDamping = 0x88; // float32
                constexpr std::ptrdiff_t m_flAngularDamping = 0x8C; // float32
                constexpr std::ptrdiff_t m_flLinearDrag = 0x90; // float32
                constexpr std::ptrdiff_t m_flAngularDrag = 0x94; // float32
                constexpr std::ptrdiff_t m_bOverrideMassCenter = 0x98; // bool
                constexpr std::ptrdiff_t m_vMassCenterOverride = 0x9C; // Vector
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeChunkIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CTaskHandshakeAnimTag {
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFollowPathUpdateNode {
                constexpr std::ptrdiff_t m_flBlendOutTime = 0x74; // float32
                constexpr std::ptrdiff_t m_bBlockNonPathMovement = 0x78; // bool
                constexpr std::ptrdiff_t m_bStopFeetAtGoal = 0x79; // bool
                constexpr std::ptrdiff_t m_bScaleSpeed = 0x7A; // bool
                constexpr std::ptrdiff_t m_flScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flMinAngle = 0x80; // float32
                constexpr std::ptrdiff_t m_flMaxAngle = 0x84; // float32
                constexpr std::ptrdiff_t m_flSpeedScaleBlending = 0x88; // float32
                constexpr std::ptrdiff_t m_turnDamping = 0x90; // CAnimInputDamping
                constexpr std::ptrdiff_t m_facingTarget = 0xA8; // AnimValueSource
                constexpr std::ptrdiff_t m_hParam = 0xAC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0xB0; // float32
                constexpr std::ptrdiff_t m_bTurnToFace = 0xB4; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AimMatrixOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_poseCacheHandles = 0x98; // CPoseHandle[10]
                constexpr std::ptrdiff_t m_eBlendMode = 0xC0; // AimMatrixBlendMode
                constexpr std::ptrdiff_t m_flMaxYawAngle = 0xC4; // float32
                constexpr std::ptrdiff_t m_flMaxPitchAngle = 0xC8; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xCC; // int32
                constexpr std::ptrdiff_t m_nBoneMaskIndex = 0xD0; // int32
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xD4; // bool
                constexpr std::ptrdiff_t m_bUseBiasAndClamp = 0xD5; // bool
                constexpr std::ptrdiff_t m_flBiasAndClampYawOffset = 0xD8; // float32
                constexpr std::ptrdiff_t m_flBiasAndClampPitchOffset = 0xDC; // float32
                constexpr std::ptrdiff_t m_biasAndClampBlendCurve = 0xE0; // CBlendCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptComponentUpdater {
                constexpr std::ptrdiff_t m_hScript = 0x30; // AnimScriptHandle
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRagdollUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x70; // int32
                constexpr std::ptrdiff_t m_poseControlMethod = 0x74; // RagdollPoseControl
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathAnimMotorUpdater {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CMaterialAttributeAnimTag {
                constexpr std::ptrdiff_t m_AttributeName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_AttributeType = 0x60; // MatterialAttributeTagType_t
                constexpr std::ptrdiff_t m_flValue = 0x64; // float32
                constexpr std::ptrdiff_t m_Color = 0x68; // Color
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFootEventConditionNode__CDefinition {
                constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10; // int16
                constexpr std::ptrdiff_t m_phaseCondition = 0x12; // NmFootPhaseCondition_t
                constexpr std::ptrdiff_t m_eventConditionRules = 0x14; // CNmBitFlags
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFootEvent {
                constexpr std::ptrdiff_t m_phase = 0x20; // NmFootPhase_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesAudio {
                constexpr std::ptrdiff_t m_reflectivity = 0x0; // float32
                constexpr std::ptrdiff_t m_hardnessFactor = 0x4; // float32
                constexpr std::ptrdiff_t m_roughnessFactor = 0x8; // float32
                constexpr std::ptrdiff_t m_roughThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_hardThreshold = 0x10; // float32
                constexpr std::ptrdiff_t m_hardVelocityThreshold = 0x14; // float32
                constexpr std::ptrdiff_t m_flStaticImpactVolume = 0x18; // float32
                constexpr std::ptrdiff_t m_flOcclusionFactor = 0x1C; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqAutoLayer {
                constexpr std::ptrdiff_t m_nLocalReference = 0x0; // int16
                constexpr std::ptrdiff_t m_nLocalPose = 0x2; // int16
                constexpr std::ptrdiff_t m_flags = 0x4; // CSeqAutoLayerFlag
                constexpr std::ptrdiff_t m_start = 0xC; // float32
                constexpr std::ptrdiff_t m_peak = 0x10; // float32
                constexpr std::ptrdiff_t m_tail = 0x14; // float32
                constexpr std::ptrdiff_t m_end = 0x18; // float32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelEmbeddedMesh_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nMeshIndex = 0x10; // int32
                constexpr std::ptrdiff_t m_nDataBlock = 0x14; // int32
                constexpr std::ptrdiff_t m_nMorphBlock = 0x18; // int32
                constexpr std::ptrdiff_t m_vertexBuffers = 0x20; // CUtlVector<ModelMeshBufferData_t>
                constexpr std::ptrdiff_t m_indexBuffers = 0x38; // CUtlVector<ModelMeshBufferData_t>
                constexpr std::ptrdiff_t m_toolsBuffers = 0x50; // CUtlVector<ModelMeshBufferData_t>
                constexpr std::ptrdiff_t m_nVBIBBlock = 0x68; // int32
                constexpr std::ptrdiff_t m_nToolsVBBlock = 0x6C; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysSoftbodyDesc_t {
                constexpr std::ptrdiff_t m_ParticleBoneHash = 0x0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
                constexpr std::ptrdiff_t m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
                constexpr std::ptrdiff_t m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
                constexpr std::ptrdiff_t m_InitPose = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimSequenceParams {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTargetWarpUpdateNode {
                constexpr std::ptrdiff_t m_eAngleMode = 0x74; // TargetWarpAngleMode_t
                constexpr std::ptrdiff_t m_hTargetPositionParameter = 0x78; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetUpVectorParameter = 0x7A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTargetFacePositionParameter = 0x7C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParameter = 0x7E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hDesiredMoveHeadingParameter = 0x80; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0x84; // TargetWarpCorrectionMethod
                constexpr std::ptrdiff_t m_eTargetWarpTimingMethod = 0x88; // TargetWarpTimingMethod
                constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x8C; // bool
                constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x8D; // bool
                constexpr std::ptrdiff_t m_bOnlyWarpWhenTagIsFound = 0x8E; // bool
                constexpr std::ptrdiff_t m_bWarpOrientationDuringTranslation = 0x8F; // bool
                constexpr std::ptrdiff_t m_bWarpAroundCenter = 0x90; // bool
                constexpr std::ptrdiff_t m_flMaxAngle = 0x94; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVirtualParameterBoolNode__CDefinition {
                constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFollowTargetUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // FollowTargetOpFixedSettings_t
                constexpr std::ptrdiff_t m_hParameterPosition = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParameterOrientation = 0x8A; // CAnimParamHandle
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeStateOffset_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCPPScriptComponentUpdater {
                constexpr std::ptrdiff_t m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimData {
                constexpr std::ptrdiff_t m_name = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_animArray = 0x20; // CUtlVector<CAnimDesc>
                constexpr std::ptrdiff_t m_decoderArray = 0x38; // CUtlVector<CAnimDecoder>
                constexpr std::ptrdiff_t m_nMaxUniqueFrameIndex = 0x50; // int32
                constexpr std::ptrdiff_t m_segmentArray = 0x58; // CUtlVector<CAnimFrameSegment>
            }
            // Parent: None
            // Field count: 3
            namespace IKSolverSettings_t {
                constexpr std::ptrdiff_t m_SolverType = 0x0; // IKSolverType
                constexpr std::ptrdiff_t m_nNumIterations = 0x4; // int32
                constexpr std::ptrdiff_t m_EndEffectorRotationFixUpMode = 0x8; // EIKEndEffectorRotationFixUpMode
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBinaryUpdateNode {
                constexpr std::ptrdiff_t m_pChild1 = 0x60; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_pChild2 = 0x70; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_timingBehavior = 0x80; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x84; // float32
                constexpr std::ptrdiff_t m_bResetChild1 = 0x88; // bool
                constexpr std::ptrdiff_t m_bResetChild2 = 0x89; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmParameterizedBlendNode__BlendRange_t {
                constexpr std::ptrdiff_t m_nInputIdx0 = 0x0; // int16
                constexpr std::ptrdiff_t m_nInputIdx1 = 0x2; // int16
                constexpr std::ptrdiff_t m_parameterValueRange = 0x4; // Range_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimKeyData {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_boneArray = 0x10; // CUtlVector<CAnimBone>
                constexpr std::ptrdiff_t m_userArray = 0x28; // CUtlVector<CAnimUser>
                constexpr std::ptrdiff_t m_morphArray = 0x40; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_nChannelElements = 0x58; // int32
                constexpr std::ptrdiff_t m_dataChannelArray = 0x60; // CUtlVector<CAnimDataChannelDesc>
            }
            // Parent: None
            // Field count: 1
            namespace AttachmentHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint8
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMorphDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootFixedData_t {
                constexpr std::ptrdiff_t m_vToeOffset = 0x0; // VectorAligned
                constexpr std::ptrdiff_t m_vHeelOffset = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_nTargetBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nAnkleBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_nIKAnchorBoneIndex = 0x28; // int32
                constexpr std::ptrdiff_t m_ikChainIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_flMaxIKLength = 0x30; // float32
                constexpr std::ptrdiff_t m_nFootIndex = 0x34; // int32
                constexpr std::ptrdiff_t m_nTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x40; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphGroup {
                constexpr std::ptrdiff_t m_searchDB = 0x0; // CMotionSearchDB
                constexpr std::ptrdiff_t m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
                constexpr std::ptrdiff_t m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
                constexpr std::ptrdiff_t m_sampleToConfig = 0xE8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hIsActiveScript = 0x100; // AnimScriptHandle
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVectorNegateNode__CDefinition {
                constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncTrack__Event_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_startTime = 0x8; // NmPercent_t
                constexpr std::ptrdiff_t m_duration = 0xC; // NmPercent_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionRendererVecInput {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTarget {
                constexpr std::ptrdiff_t m_transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_boneID = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bIsBoneTarget = 0x28; // bool
                constexpr std::ptrdiff_t m_bIsUsingBoneSpaceOffsets = 0x29; // bool
                constexpr std::ptrdiff_t m_bHasOffsets = 0x2A; // bool
                constexpr std::ptrdiff_t m_bIsSet = 0x2B; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmControlParameterIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBodyGroupEvent {
                constexpr std::ptrdiff_t m_groupName = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CWayPointHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStartCycle = 0x74; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x78; // float32
                constexpr std::ptrdiff_t m_bOnlyGoals = 0x7C; // bool
                constexpr std::ptrdiff_t m_bPreventOvershoot = 0x7D; // bool
                constexpr std::ptrdiff_t m_bPreventUndershoot = 0x7E; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            namespace CMoodVData {
                constexpr std::ptrdiff_t m_sModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_nMoodType = 0xE0; // MoodType_t
                constexpr std::ptrdiff_t m_animationLayers = 0xE8; // CUtlVector<MoodAnimationLayer_t>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_AttachedModel {
                constexpr std::ptrdiff_t m_InstanceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_EntityClass = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_hModel = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_vOffset = 0x60; // Vector
                constexpr std::ptrdiff_t m_aAngOffset = 0x6C; // QAngle
                constexpr std::ptrdiff_t m_AttachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_LocalAttachmentOffsetName = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x8C; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedColor = 0x8D; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedMaterialGroup = 0x8E; // bool
                constexpr std::ptrdiff_t m_bAcceptParentMaterialDrivenDecals = 0x8F; // bool
                constexpr std::ptrdiff_t m_BodygroupOnOtherModels = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_MaterialGroupOnOtherModels = 0x98; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagManagerUpdater {
                constexpr std::ptrdiff_t m_tags = 0x38; // CUtlVector<CSmartPtr<CAnimTagBase>>
            }
            // Parent: None
            // Field count: 0
            namespace CParticleProperty {
            }
        }
    }
}
