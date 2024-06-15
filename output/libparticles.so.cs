// Generated using https://github.com/a2x/cs2-dumper
// 2024-06-15 01:33:56.502397707 UTC

namespace CS2Dumper.Schemas {
    // Module: libparticles.so
    // Classes count: 445
    // Enums count: 76
    public static class LibparticlesSo {
        // Alignment: 4
        // Members count: 6
        public enum ParticleSetMethod_t : uint {
            PARTICLE_SET_REPLACE_VALUE = 0x0,
            PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
            PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
            PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
            PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
            PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5
        }
        // Alignment: 4
        // Members count: 7
        public enum Detail2Combo_t : uint {
            DETAIL_2_COMBO_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
            DETAIL_2_COMBO_OFF = 0x0,
            DETAIL_2_COMBO_ADD = 0x1,
            DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
            DETAIL_2_COMBO_MOD2X = 0x3,
            DETAIL_2_COMBO_MUL = 0x4,
            DETAIL_2_COMBO_CROSSFADE = 0x5
        }
        // Alignment: 4
        // Members count: 4
        public enum MissingParentInheritBehavior_t : uint {
            MISSING_PARENT_DO_NOTHING = 0xFFFFFFFFFFFFFFFF,
            MISSING_PARENT_KILL = 0x0,
            MISSING_PARENT_FIND_NEW = 0x1,
            MISSING_PARENT_SAME_INDEX = 0x2
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleFloatBiasType_t : uint {
            PF_BIAS_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
            PF_BIAS_TYPE_STANDARD = 0x0,
            PF_BIAS_TYPE_GAIN = 0x1,
            PF_BIAS_TYPE_EXPONENTIAL = 0x2,
            PF_BIAS_TYPE_COUNT = 0x3
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleTraceMissBehavior_t : uint {
            PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
            PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
            PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
        }
        // Alignment: 4
        // Members count: 7
        public enum PFuncVisualizationType_t : uint {
            PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
            PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
            PFUNC_VISUALIZATION_BOX = 0x2,
            PFUNC_VISUALIZATION_RING = 0x3,
            PFUNC_VISUALIZATION_PLANE = 0x4,
            PFUNC_VISUALIZATION_LINE = 0x5,
            PFUNC_VISUALIZATION_CYLINDER = 0x6
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleVRHandChoiceList_t : uint {
            PARTICLE_VRHAND_LEFT = 0x0,
            PARTICLE_VRHAND_RIGHT = 0x1,
            PARTICLE_VRHAND_CP = 0x2,
            PARTICLE_VRHAND_CP_OBJECT = 0x3
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleReplicationMode_t : uint {
            PARTICLE_REPLICATIONMODE_NONE = 0x0,
            PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum PetGroundType_t : uint {
            PET_GROUND_NONE = 0x0,
            PET_GROUND_GRID = 0x1,
            PET_GROUND_PLANE = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum InheritableBoolType_t : uint {
            INHERITABLE_BOOL_INHERIT = 0x0,
            INHERITABLE_BOOL_FALSE = 0x1,
            INHERITABLE_BOOL_TRUE = 0x2
        }
        // Alignment: 4
        // Members count: 24
        public enum ParticleFloatType_t : uint {
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
            PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xC,
            PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xD,
            PF_TYPE_PARTICLE_NOISE = 0xE,
            PF_TYPE_PARTICLE_AGE = 0xF,
            PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x10,
            PF_TYPE_PARTICLE_FLOAT = 0x11,
            PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x12,
            PF_TYPE_PARTICLE_SPEED = 0x13,
            PF_TYPE_PARTICLE_NUMBER = 0x14,
            PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x15,
            PF_TYPE_COUNT = 0x16
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticlePostProcessPriorityGroup_t : uint {
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
            PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5
        }
        // Alignment: 4
        // Members count: 6
        public enum PFNoiseTurbulence_t : uint {
            PF_NOISE_TURB_NONE = 0x0,
            PF_NOISE_TURB_HIGHLIGHT = 0x1,
            PF_NOISE_TURB_FEEDBACK = 0x2,
            PF_NOISE_TURB_LOOPY = 0x3,
            PF_NOISE_TURB_CONTRAST = 0x4,
            PF_NOISE_TURB_ALTERNATE = 0x5
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleColorBlendMode_t : uint {
            PARTICLEBLEND_DEFAULT = 0x0,
            PARTICLEBLEND_OVERLAY = 0x1,
            PARTICLEBLEND_DARKEN = 0x2,
            PARTICLEBLEND_LIGHTEN = 0x3,
            PARTICLEBLEND_MULTIPLY = 0x4
        }
        // Alignment: 4
        // Members count: 13
        public enum ParticleColorBlendType_t : uint {
            PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
            PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
            PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
            PARTICLE_COLOR_BLEND_ADD = 0x3,
            PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
            PARTICLE_COLOR_BLEND_MOD2X = 0x5,
            PARTICLE_COLOR_BLEND_SCREEN = 0x6,
            PARTICLE_COLOR_BLEND_MAX = 0x7,
            PARTICLE_COLOR_BLEND_MIN = 0x8,
            PARTICLE_COLOR_BLEND_REPLACE = 0x9,
            PARTICLE_COLOR_BLEND_AVERAGE = 0xA,
            PARTICLE_COLOR_BLEND_NEGATE = 0xB,
            PARTICLE_COLOR_BLEND_LUMINANCE = 0xC
        }
        // Alignment: 4
        // Members count: 4
        public enum DetailCombo_t : uint {
            DETAIL_COMBO_OFF = 0x0,
            DETAIL_COMBO_ADD = 0x1,
            DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
            DETAIL_COMBO_MOD2X = 0x3
        }
        // Alignment: 4
        // Members count: 9
        public enum ScalarExpressionType_t : uint {
            SCALAR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
            SCALAR_EXPRESSION_ADD = 0x0,
            SCALAR_EXPRESSION_SUBTRACT = 0x1,
            SCALAR_EXPRESSION_MUL = 0x2,
            SCALAR_EXPRESSION_DIVIDE = 0x3,
            SCALAR_EXPRESSION_INPUT_1 = 0x4,
            SCALAR_EXPRESSION_MIN = 0x5,
            SCALAR_EXPRESSION_MAX = 0x6,
            SCALAR_EXPRESSION_MOD = 0x7
        }
        // Alignment: 4
        // Members count: 14
        public enum SpriteCardPerParticleScale_t : uint {
            SPRITECARD_TEXTURE_PP_SCALE_NONE = 0x0,
            SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 0x1,
            SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 0x2,
            SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
            SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
            SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 0x5,
            SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 0x6,
            SPRITECARD_TEXTURE_PP_SCALE_ROLL = 0x7,
            SPRITECARD_TEXTURE_PP_SCALE_YAW = 0x8,
            SPRITECARD_TEXTURE_PP_SCALE_PITCH = 0x9,
            SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 0xA,
            SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 0xB,
            SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 0xC,
            SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 0xD
        }
        // Alignment: 4
        // Members count: 2
        public enum BlurFilterType_t : uint {
            BLURFILTER_GAUSSIAN = 0x0,
            BLURFILTER_BOX = 0x1
        }
        // Alignment: 4
        // Members count: 2
        public enum StandardLightingAttenuationStyle_t : uint {
            LIGHT_STYLE_OLD = 0x0,
            LIGHT_STYLE_NEW = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleParentSetMode_t : uint {
            PARTICLE_SET_PARENT_NO = 0x0,
            PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
            PARTICLE_SET_PARENT_ROOT = 0x1
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleModelType_t : uint {
            PM_TYPE_INVALID = 0x0,
            PM_TYPE_NAMED_VALUE_MODEL = 0x1,
            PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
            PM_TYPE_CONTROL_POINT = 0x3,
            PM_TYPE_COUNT = 0x4
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleLightingQuality_t : uint {
            PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
            PARTICLE_LIGHTING_PER_VERTEX = 0x1,
            PARTICLE_LIGHTING_PER_PIXEL = 0xFFFFFFFFFFFFFFFF
        }
        // Alignment: 4
        // Members count: 4
        public enum PFNoiseType_t : uint {
            PF_NOISE_TYPE_PERLIN = 0x0,
            PF_NOISE_TYPE_SIMPLEX = 0x1,
            PF_NOISE_TYPE_WORLEY = 0x2,
            PF_NOISE_TYPE_CURL = 0x3
        }
        // Alignment: 4
        // Members count: 11
        public enum EventTypeSelection_t : uint {
            PARTICLE_EVENT_TYPE_MASK_NONE = 0x0,
            PARTICLE_EVENT_TYPE_MASK_SPAWNED = 0x1,
            PARTICLE_EVENT_TYPE_MASK_KILLED = 0x2,
            PARTICLE_EVENT_TYPE_MASK_COLLISION = 0x4,
            PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION = 0x8,
            PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED = 0x10,
            PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 0x20,
            PARTICLE_EVENT_TYPE_MASK_USER_1 = 0x40,
            PARTICLE_EVENT_TYPE_MASK_USER_2 = 0x80,
            PARTICLE_EVENT_TYPE_MASK_USER_3 = 0x100,
            PARTICLE_EVENT_TYPE_MASK_USER_4 = 0x200
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleMassMode_t : uint {
            PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
            PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleDirectionNoiseType_t : uint {
            PARTICLE_DIR_NOISE_PERLIN = 0x0,
            PARTICLE_DIR_NOISE_CURL = 0x1,
            PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleHitboxBiasType_t : uint {
            PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
            PARTICLE_HITBOX_BIAS_HITBOX = 0x1
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticleControlPointAxis_t : uint {
            PARTICLE_CP_AXIS_X = 0x0,
            PARTICLE_CP_AXIS_Y = 0x1,
            PARTICLE_CP_AXIS_Z = 0x2,
            PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
            PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
            PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
        }
        // Alignment: 4
        // Members count: 12
        public enum ParticlePinDistance_t : uint {
            PARTICLE_PIN_DISTANCE_NONE = 0xFFFFFFFFFFFFFFFF,
            PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
            PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
            PARTICLE_PIN_DISTANCE_FIRST = 0x2,
            PARTICLE_PIN_DISTANCE_LAST = 0x3,
            PARTICLE_PIN_DISTANCE_CENTER = 0x5,
            PARTICLE_PIN_DISTANCE_CP = 0x6,
            PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
            PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
            PARTICLE_PIN_SPEED = 0x9,
            PARTICLE_PIN_COLLECTION_AGE = 0xA,
            PARTICLE_PIN_FLOAT_VALUE = 0xB
        }
        // Alignment: 4
        // Members count: 7
        public enum VectorFloatExpressionType_t : uint {
            VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
            VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
            VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
            VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
            VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleFogType_t : uint {
            PARTICLE_FOG_GAME_DEFAULT = 0x0,
            PARTICLE_FOG_ENABLED = 0x1,
            PARTICLE_FOG_DISABLED = 0x2
        }
        // Alignment: 4
        // Members count: 9
        public enum VectorExpressionType_t : uint {
            VECTOR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
            VECTOR_EXPRESSION_ADD = 0x0,
            VECTOR_EXPRESSION_SUBTRACT = 0x1,
            VECTOR_EXPRESSION_MUL = 0x2,
            VECTOR_EXPRESSION_DIVIDE = 0x3,
            VECTOR_EXPRESSION_INPUT_1 = 0x4,
            VECTOR_EXPRESSION_MIN = 0x5,
            VECTOR_EXPRESSION_MAX = 0x6,
            VECTOR_EXPRESSION_CROSSPRODUCT = 0x7
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleRotationLockType_t : uint {
            PARTICLE_ROTATION_LOCK_NONE = 0x0,
            PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
            PARTICLE_ROTATION_LOCK_NORMAL = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum HitboxLerpType_t : uint {
            HITBOX_LERP_LIFETIME = 0x0,
            HITBOX_LERP_CONSTANT = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum AnimationType_t : uint {
            ANIMATION_TYPE_FIXED_RATE = 0x0,
            ANIMATION_TYPE_FIT_LIFETIME = 0x1,
            ANIMATION_TYPE_MANUAL_FRAMES = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleAttrBoxFlags_t : uint {
            PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
            PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleTopology_t : uint {
            PARTICLE_TOPOLOGY_POINTS = 0x0,
            PARTICLE_TOPOLOGY_LINES = 0x1,
            PARTICLE_TOPOLOGY_TRIS = 0x2,
            PARTICLE_TOPOLOGY_QUADS = 0x3,
            PARTICLE_TOPOLOGY_CUBES = 0x4
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleLightBehaviorChoiceList_t : uint {
            PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
            PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
            PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum ModelHitboxType_t : uint {
            MODEL_HITBOX_TYPE_STANDARD = 0x0,
            MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
            MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
            MODEL_HITBOX_TYPE_SNAPSHOT = 0x3
        }
        // Alignment: 4
        // Members count: 8
        public enum ParticleFloatMapType_t : uint {
            PF_MAP_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
            PF_MAP_TYPE_DIRECT = 0x0,
            PF_MAP_TYPE_MULT = 0x1,
            PF_MAP_TYPE_REMAP = 0x2,
            PF_MAP_TYPE_REMAP_BIASED = 0x3,
            PF_MAP_TYPE_CURVE = 0x4,
            PF_MAP_TYPE_NOTCHED = 0x5,
            PF_MAP_TYPE_COUNT = 0x6
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleTraceSet_t : uint {
            PARTICLE_TRACE_SET_ALL = 0x0,
            PARTICLE_TRACE_SET_STATIC = 0x1,
            PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
            PARTICLE_TRACE_SET_DYNAMIC = 0x3
        }
        // Alignment: 4
        // Members count: 7
        public enum ParticleTextureLayerBlendType_t : uint {
            SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
            SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
            SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
            SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
            SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
            SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
            SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleSelection_t : uint {
            PARTICLE_SELECTION_FIRST = 0x0,
            PARTICLE_SELECTION_LAST = 0x1,
            PARTICLE_SELECTION_NUMBER = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleFloatInputMode_t : uint {
            PF_INPUT_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
            PF_INPUT_MODE_CLAMPED = 0x0,
            PF_INPUT_MODE_LOOPED = 0x1,
            PF_INPUT_MODE_COUNT = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum SnapshotIndexType_t : uint {
            SNAPSHOT_INDEX_INCREMENT = 0x0,
            SNAPSHOT_INDEX_DIRECT = 0x1
        }
        // Alignment: 4
        // Members count: 7
        public enum ParticleOutputBlendMode_t : uint {
            PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
            PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
            PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
            PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
            PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
            PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
            PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleLightnintBranchBehavior_t : uint {
            PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
            PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
        }
        // Alignment: 4
        // Members count: 2
        public enum MaterialProxyType_t : uint {
            MATERIAL_PROXY_STATUS_EFFECT = 0x0,
            MATERIAL_PROXY_TINT = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleDepthFeatheringMode_t : uint {
            PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
            PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
            PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleFloatRandomMode_t : uint {
            PF_RANDOM_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
            PF_RANDOM_MODE_CONSTANT = 0x0,
            PF_RANDOM_MODE_VARYING = 0x1,
            PF_RANDOM_MODE_COUNT = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum PFNoiseModifier_t : uint {
            PF_NOISE_MODIFIER_NONE = 0x0,
            PF_NOISE_MODIFIER_LINES = 0x1,
            PF_NOISE_MODIFIER_CLUMPS = 0x2,
            PF_NOISE_MODIFIER_RINGS = 0x3
        }
        // Alignment: 4
        // Members count: 19
        public enum ParticleVecType_t : uint {
            PVEC_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
            PVEC_TYPE_LITERAL = 0x0,
            PVEC_TYPE_LITERAL_COLOR = 0x1,
            PVEC_TYPE_NAMED_VALUE = 0x2,
            PVEC_TYPE_PARTICLE_VECTOR = 0x3,
            PVEC_TYPE_PARTICLE_VELOCITY = 0x4,
            PVEC_TYPE_CP_VALUE = 0x5,
            PVEC_TYPE_CP_RELATIVE_POSITION = 0x6,
            PVEC_TYPE_CP_RELATIVE_DIR = 0x7,
            PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x8,
            PVEC_TYPE_FLOAT_COMPONENTS = 0x9,
            PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xA,
            PVEC_TYPE_FLOAT_INTERP_OPEN = 0xB,
            PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xC,
            PVEC_TYPE_RANDOM_UNIFORM = 0xD,
            PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xE,
            PVEC_TYPE_CP_DELTA = 0xF,
            PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x10,
            PVEC_TYPE_COUNT = 0x11
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleLightUnitChoiceList_t : uint {
            PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
            PARTICLE_LIGHT_UNIT_LUMENS = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleFalloffFunction_t : uint {
            PARTICLE_FALLOFF_CONSTANT = 0x0,
            PARTICLE_FALLOFF_LINEAR = 0x1,
            PARTICLE_FALLOFF_EXPONENTIAL = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleSequenceCropOverride_t : uint {
            PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xFFFFFFFFFFFFFFFF,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleDetailLevel_t : uint {
            PARTICLEDETAIL_LOW = 0x0,
            PARTICLEDETAIL_MEDIUM = 0x1,
            PARTICLEDETAIL_HIGH = 0x2,
            PARTICLEDETAIL_ULTRA = 0x3
        }
        // Alignment: 4
        // Members count: 3
        public enum BBoxVolumeType_t : uint {
            BBOX_VOLUME = 0x0,
            BBOX_DIMENSIONS = 0x1,
            BBOX_MINS_MAXS = 0x2
        }
        // Alignment: 4
        // Members count: 10
        public enum SpriteCardTextureType_t : uint {
            SPRITECARD_TEXTURE_DIFFUSE = 0x0,
            SPRITECARD_TEXTURE_ZOOM = 0x1,
            SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x2,
            SPRITECARD_TEXTURE_UVDISTORTION = 0x3,
            SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x4,
            SPRITECARD_TEXTURE_NORMALMAP = 0x5,
            SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleAlphaReferenceType_t : uint {
            PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
            PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
        }
        // Alignment: 4
        // Members count: 15
        public enum SpriteCardTextureChannel_t : uint {
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0x0,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 0x1,
            SPRITECARD_TEXTURE_CHANNEL_MIX_A = 0x2,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 0x3,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 0x4,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 0x5,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 0x6,
            SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 0x7,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
            SPRITECARD_TEXTURE_CHANNEL_MIX_R = 0x9,
            SPRITECARD_TEXTURE_CHANNEL_MIX_G = 0xA,
            SPRITECARD_TEXTURE_CHANNEL_MIX_B = 0xB,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 0xC,
            SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 0xD,
            SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 0xE
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleTransformType_t : uint {
            PT_TYPE_INVALID = 0x0,
            PT_TYPE_NAMED_VALUE = 0x1,
            PT_TYPE_CONTROL_POINT = 0x2,
            PT_TYPE_CONTROL_POINT_RANGE = 0x3,
            PT_TYPE_COUNT = 0x4
        }
        // Alignment: 4
        // Members count: 4
        public enum RenderModelSubModelFieldType_t : uint {
            SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
            SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
            SUBMODEL_AS_MESHGROUP_MASK = 0x2,
            SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleHitboxDataSelection_t : uint {
            PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
            PARTICLE_HITBOX_COUNT = 0x1
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticleOrientationChoiceList_t : uint {
            PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
            PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
            PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
            PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
            PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
            PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5
        }
        // Alignment: 4
        // Members count: 5
        public enum ParticleCollisionMode_t : uint {
            COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
            COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
            COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
            COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
            COLLISION_MODE_DISABLED = 0xFFFFFFFFFFFFFFFF
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleSortingChoiceList_t : uint {
            PARTICLE_SORTING_NEAREST = 0x0,
            PARTICLE_SORTING_CREATION_TIME = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleEndcapMode_t : uint {
            PARTICLE_ENDCAP_ALWAYS_ON = 0xFFFFFFFFFFFFFFFF,
            PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
            PARTICLE_ENDCAP_ENDCAP_ON = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum ClosestPointTestType_t : uint {
            PARTICLE_CLOSEST_TYPE_BOX = 0x0,
            PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
            PARTICLE_CLOSEST_TYPE_HYBRID = 0x2
        }
        // Alignment: 4
        // Members count: 6
        public enum ParticleImpulseType_t : uint {
            IMPULSE_TYPE_NONE = 0x0,
            IMPULSE_TYPE_GENERIC = 0x1,
            IMPULSE_TYPE_ROPE = 0x2,
            IMPULSE_TYPE_EXPLOSION = 0x4,
            IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
            IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10
        }
        // Alignment: 4
        // Members count: 2
        public enum SpriteCardShaderType_t : uint {
            SPRITECARD_SHADER_BASE = 0x0,
            SPRITECARD_SHADER_CUSTOM = 0x1
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleOmni2LightTypeChoiceList_t : uint {
            PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
            PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum ParticleLightFogLightingMode_t : uint {
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
        }
        // Alignment: 4
        // Members count: 4
        public enum ParticleLightTypeChoiceList_t : uint {
            PARTICLE_LIGHT_TYPE_POINT = 0x0,
            PARTICLE_LIGHT_TYPE_SPOT = 0x1,
            PARTICLE_LIGHT_TYPE_FX = 0x2,
            PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
        }
        // Alignment: 4
        // Members count: 2
        public enum ParticleOrientationSetMode_t : uint {
            PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
            PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1
        }
        // Alignment: 4
        // Members count: 2
        public enum TextureRepetitionMode_t : uint {
            TEXTURE_REPETITION_PARTICLE = 0x0,
            TEXTURE_REPETITION_PATH = 0x1
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapGravityToVector {
            public const nint m_vInput1 = 0x1B0; // CPerParticleVecInput
            public const nint m_nOutputField = 0x7E0; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x7E4; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x7E8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Decay {
            public const nint m_bRopeDecay = 0x1B0; // bool
            public const nint m_bForcePreserveParticleOrder = 0x1B1; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderDeferredLight {
            public const nint m_bUseAlphaTestWindow = 0x1FA; // bool
            public const nint m_bUseTexture = 0x1FB; // bool
            public const nint m_flRadiusScale = 0x1FC; // float32
            public const nint m_flAlphaScale = 0x200; // float32
            public const nint m_nAlpha2Field = 0x204; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x208; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x838; // ParticleColorBlendType_t
            public const nint m_flLightDistance = 0x83C; // float32
            public const nint m_flStartFalloff = 0x840; // float32
            public const nint m_flDistanceFalloff = 0x844; // float32
            public const nint m_flSpotFoV = 0x848; // float32
            public const nint m_nAlphaTestPointField = 0x84C; // ParticleAttributeIndex_t
            public const nint m_nAlphaTestRangeField = 0x850; // ParticleAttributeIndex_t
            public const nint m_nAlphaTestSharpnessField = 0x854; // ParticleAttributeIndex_t
            public const nint m_hTexture = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nHSVShiftControlPoint = 0x860; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSpeedtoCP {
            public const nint m_nInControlPointNumber = 0x1B4; // int32
            public const nint m_nOutControlPointNumber = 0x1B8; // int32
            public const nint m_nField = 0x1BC; // int32
            public const nint m_flInputMin = 0x1C0; // float32
            public const nint m_flInputMax = 0x1C4; // float32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_bUseDeltaV = 0x1D0; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformToVelocity {
            public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CollisionGroupContext_t {
            public const nint m_nCollisionGroupNumber = 0x0; // int32
        }
        // Parent: CParticleInput
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        // MParticleCustomFieldDefaultValue
        public static class CParticleModelInput {
            public const nint m_nType = 0xC; // ParticleModelType_t
            public const nint m_NamedValue = 0x10; // CParticleNamedValueRef
            public const nint m_nControlPoint = 0x50; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionPreEmission {
            public const nint m_bRunOnce = 0x1B0; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeOutSimple {
            public const nint m_flFadeOutTime = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpringToVectorConstraint {
            public const nint m_flRestLength = 0x1B0; // CPerParticleFloatInput
            public const nint m_flMinDistance = 0x300; // CPerParticleFloatInput
            public const nint m_flMaxDistance = 0x450; // CPerParticleFloatInput
            public const nint m_flRestingLength = 0x5A0; // CPerParticleFloatInput
            public const nint m_vecAnchorVector = 0x6F0; // CPerParticleVecInput
        }
        // Parent: CBaseRendererSource2
        // Fields count: 30
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderRopes {
            public const nint m_bEnableFadingAndClamping = 0x2640; // bool
            public const nint m_flMinSize = 0x2644; // float32
            public const nint m_flMaxSize = 0x2648; // float32
            public const nint m_flStartFadeSize = 0x264C; // float32
            public const nint m_flEndFadeSize = 0x2650; // float32
            public const nint m_flStartFadeDot = 0x2654; // float32
            public const nint m_flEndFadeDot = 0x2658; // float32
            public const nint m_flRadiusTaper = 0x265C; // float32
            public const nint m_nMinTesselation = 0x2660; // int32
            public const nint m_nMaxTesselation = 0x2664; // int32
            public const nint m_flTessScale = 0x2668; // float32
            public const nint m_flTextureVWorldSize = 0x2670; // CParticleCollectionRendererFloatInput
            public const nint m_flTextureVScrollRate = 0x27C0; // CParticleCollectionRendererFloatInput
            public const nint m_flTextureVOffset = 0x2910; // CParticleCollectionRendererFloatInput
            public const nint m_nTextureVParamsCP = 0x2A60; // int32
            public const nint m_bClampV = 0x2A64; // bool
            public const nint m_nScaleCP1 = 0x2A68; // int32
            public const nint m_nScaleCP2 = 0x2A6C; // int32
            public const nint m_flScaleVSizeByControlPointDistance = 0x2A70; // float32
            public const nint m_flScaleVScrollByControlPointDistance = 0x2A74; // float32
            public const nint m_flScaleVOffsetByControlPointDistance = 0x2A78; // float32
            public const nint m_bUseScalarForTextureCoordinate = 0x2A7D; // bool
            public const nint m_nScalarFieldForTextureCoordinate = 0x2A80; // ParticleAttributeIndex_t
            public const nint m_flScalarAttributeTextureCoordScale = 0x2A84; // float32
            public const nint m_bReverseOrder = 0x2A88; // bool
            public const nint m_bClosedLoop = 0x2A89; // bool
            public const nint m_nOrientationType = 0x2A8C; // ParticleOrientationChoiceList_t
            public const nint m_nVectorFieldForOrientation = 0x2A90; // ParticleAttributeIndex_t
            public const nint m_bDrawAsOpaque = 0x2A94; // bool
            public const nint m_bGenerateNormals = 0x2A95; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_StatusEffectCitadel {
            public const nint m_flSFXColorWarpAmount = 0x1B4; // float32
            public const nint m_flSFXNormalAmount = 0x1B8; // float32
            public const nint m_flSFXMetalnessAmount = 0x1BC; // float32
            public const nint m_flSFXRoughnessAmount = 0x1C0; // float32
            public const nint m_flSFXSelfIllumAmount = 0x1C4; // float32
            public const nint m_flSFXSScale = 0x1C8; // float32
            public const nint m_flSFXSScrollX = 0x1CC; // float32
            public const nint m_flSFXSScrollY = 0x1D0; // float32
            public const nint m_flSFXSScrollZ = 0x1D4; // float32
            public const nint m_flSFXSOffsetX = 0x1D8; // float32
            public const nint m_flSFXSOffsetY = 0x1DC; // float32
            public const nint m_flSFXSOffsetZ = 0x1E0; // float32
            public const nint m_nDetailCombo = 0x1E4; // DetailCombo_t
            public const nint m_flSFXSDetailAmount = 0x1E8; // float32
            public const nint m_flSFXSDetailScale = 0x1EC; // float32
            public const nint m_flSFXSDetailScrollX = 0x1F0; // float32
            public const nint m_flSFXSDetailScrollY = 0x1F4; // float32
            public const nint m_flSFXSDetailScrollZ = 0x1F8; // float32
            public const nint m_flSFXSUseModelUVs = 0x1FC; // float32
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSound {
            public const nint m_flDurationScale = 0x1FC; // float32
            public const nint m_flSndLvlScale = 0x200; // float32
            public const nint m_flPitchScale = 0x204; // float32
            public const nint m_flVolumeScale = 0x208; // float32
            public const nint m_nSndLvlField = 0x20C; // ParticleAttributeIndex_t
            public const nint m_nDurationField = 0x210; // ParticleAttributeIndex_t
            public const nint m_nPitchField = 0x214; // ParticleAttributeIndex_t
            public const nint m_nVolumeField = 0x218; // ParticleAttributeIndex_t
            public const nint m_nChannel = 0x21C; // int32
            public const nint m_nCPReference = 0x220; // int32
            public const nint m_pszSoundName = 0x224; // char[256]
            public const nint m_bSuppressStopSoundEvent = 0x324; // bool
        }
        // Parent: None
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleVisibilityInputs {
            public const nint m_flCameraBias = 0x0; // float32
            public const nint m_nCPin = 0x4; // int32
            public const nint m_flProxyRadius = 0x8; // float32
            public const nint m_flInputMin = 0xC; // float32
            public const nint m_flInputMax = 0x10; // float32
            public const nint m_flInputPixelVisFade = 0x14; // float32
            public const nint m_flNoPixelVisibilityFallback = 0x18; // float32
            public const nint m_flDistanceInputMin = 0x1C; // float32
            public const nint m_flDistanceInputMax = 0x20; // float32
            public const nint m_flDotInputMin = 0x24; // float32
            public const nint m_flDotInputMax = 0x28; // float32
            public const nint m_bDotCPAngles = 0x2C; // bool
            public const nint m_bDotCameraAngles = 0x2D; // bool
            public const nint m_flAlphaScaleMin = 0x30; // float32
            public const nint m_flAlphaScaleMax = 0x34; // float32
            public const nint m_flRadiusScaleMin = 0x38; // float32
            public const nint m_flRadiusScaleMax = 0x3C; // float32
            public const nint m_flRadiusScaleFOVBase = 0x40; // float32
            public const nint m_bRightEye = 0x44; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointsToParticle {
            public const nint m_nChildGroupID = 0x1B0; // int32
            public const nint m_nFirstControlPoint = 0x1B4; // int32
            public const nint m_nNumControlPoints = 0x1B8; // int32
            public const nint m_nFirstSourcePoint = 0x1BC; // int32
            public const nint m_bSetOrientation = 0x1C0; // bool
            public const nint m_nOrientationMode = 0x1C4; // ParticleOrientationSetMode_t
            public const nint m_nSetParent = 0x1C8; // ParticleParentSetMode_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSDFDistanceToVectorAttribute {
            public const nint m_nVectorFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nVectorFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flMinDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flMaxDistance = 0x308; // CParticleCollectionFloatInput
            public const nint m_vValueBelowMin = 0x458; // Vector
            public const nint m_vValueAtMin = 0x464; // Vector
            public const nint m_vValueAtMax = 0x470; // Vector
            public const nint m_vValueAboveMax = 0x47C; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPVelocityToVector {
            public const nint m_nControlPoint = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1B8; // float32
            public const nint m_bNormalize = 0x1BC; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PointVectorAtNextParticle {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInterpolation = 0x1B8; // CPerParticleFloatInput
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewBodyGroup_t {
            public const nint m_bodyGroupName = 0x0; // CUtlString
            public const nint m_nValue = 0x8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateScalarSimple {
            public const nint m_Rate = 0x1B0; // float32
            public const nint m_Frequency = 0x1B4; // float32
            public const nint m_nField = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flOscMult = 0x1BC; // float32
            public const nint m_flOscAdd = 0x1C0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_StatusEffect {
            public const nint m_nDetail2Combo = 0x1B4; // Detail2Combo_t
            public const nint m_flDetail2Rotation = 0x1B8; // float32
            public const nint m_flDetail2Scale = 0x1BC; // float32
            public const nint m_flDetail2BlendFactor = 0x1C0; // float32
            public const nint m_flColorWarpIntensity = 0x1C4; // float32
            public const nint m_flDiffuseWarpBlendToFull = 0x1C8; // float32
            public const nint m_flEnvMapIntensity = 0x1CC; // float32
            public const nint m_flAmbientScale = 0x1D0; // float32
            public const nint m_specularColor = 0x1D4; // Color
            public const nint m_flSpecularScale = 0x1D8; // float32
            public const nint m_flSpecularExponent = 0x1DC; // float32
            public const nint m_flSpecularExponentBlendToFull = 0x1E0; // float32
            public const nint m_flSpecularBlendToFull = 0x1E4; // float32
            public const nint m_rimLightColor = 0x1E8; // Color
            public const nint m_flRimLightScale = 0x1EC; // float32
            public const nint m_flReflectionsTintByBaseBlendToNone = 0x1F0; // float32
            public const nint m_flMetalnessBlendToFull = 0x1F4; // float32
            public const nint m_flSelfIllumBlendToFull = 0x1F8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RtEnvCull {
            public const nint m_vecTestDir = 0x1B4; // Vector
            public const nint m_vecTestNormal = 0x1C0; // Vector
            public const nint m_bUseVelocity = 0x1CC; // bool
            public const nint m_bCullOnMiss = 0x1CD; // bool
            public const nint m_bLifeAdjust = 0x1CE; // bool
            public const nint m_RtEnvName = 0x1CF; // char[128]
            public const nint m_nRTEnvCP = 0x250; // int32
            public const nint m_nComponent = 0x254; // int32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistance {
            public const nint m_fMinDistance = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_fMaxDistance = 0x300; // CParticleCollectionFloatInput
            public const nint m_nControlPointNumber = 0x450; // int32
            public const nint m_CenterOffset = 0x454; // Vector
            public const nint m_bGlobalCenter = 0x460; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomVector {
            public const nint m_vecMin = 0x1B4; // Vector
            public const nint m_vecMax = 0x1C0; // Vector
            public const nint m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
            public const nint m_randomnessParameters = 0x1D0; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialVelocityNoise {
            public const nint m_vecAbsVal = 0x1B4; // Vector
            public const nint m_vecAbsValInv = 0x1C0; // Vector
            public const nint m_vecOffsetLoc = 0x1D0; // CPerParticleVecInput
            public const nint m_flOffset = 0x800; // CPerParticleFloatInput
            public const nint m_vecOutputMin = 0x950; // CPerParticleVecInput
            public const nint m_vecOutputMax = 0xF80; // CPerParticleVecInput
            public const nint m_flNoiseScale = 0x15B0; // CPerParticleFloatInput
            public const nint m_flNoiseScaleLoc = 0x1700; // CPerParticleFloatInput
            public const nint m_TransformInput = 0x1850; // CParticleTransformInput
            public const nint m_bIgnoreDt = 0x18B0; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleChildrenInfo_t {
            public const nint m_ChildRef = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flDelay = 0x8; // float32
            public const nint m_bEndCap = 0xC; // bool
            public const nint m_bDisableChild = 0xD; // bool
            public const nint m_nDetailLevel = 0x10; // ParticleDetailLevel_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalarOnceTimed {
            public const nint m_bProportional = 0x1B0; // bool
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_flRemapTime = 0x1CC; // float32
        }
        // Parent: C_INIT_RandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelSequence {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlaneCull {
            public const nint m_nPlaneControlPoint = 0x1B0; // int32
            public const nint m_vecPlaneDirection = 0x1B4; // Vector
            public const nint m_bLocalSpace = 0x1C0; // bool
            public const nint m_flPlaneOffset = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityRandom {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_fSpeedMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0x308; // CPerParticleFloatInput
            public const nint m_LocalCoordinateSystemSpeedMin = 0x458; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0xA88; // CPerParticleVecInput
            public const nint m_bIgnoreDT = 0x10B8; // bool
            public const nint m_randomnessParameters = 0x10BC; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ModelDampenMovement {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_bBoundBox = 0x1B4; // bool
            public const nint m_bOutside = 0x1B5; // bool
            public const nint m_bUseBones = 0x1B6; // bool
            public const nint m_HitboxSetName = 0x1B7; // char[128]
            public const nint m_vecPosOffset = 0x238; // CPerParticleVecInput
            public const nint m_fDrag = 0x868; // float32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TwistAroundAxis {
            public const nint m_fForceAmount = 0x1BC; // float32
            public const nint m_TwistAxis = 0x1C0; // Vector
            public const nint m_bLocalSpace = 0x1CC; // bool
            public const nint m_nControlPointNumber = 0x1D0; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TeleportBeam {
            public const nint m_nCPPosition = 0x1B0; // int32
            public const nint m_nCPVelocity = 0x1B4; // int32
            public const nint m_nCPMisc = 0x1B8; // int32
            public const nint m_nCPColor = 0x1BC; // int32
            public const nint m_nCPInvalidColor = 0x1C0; // int32
            public const nint m_nCPExtraArcData = 0x1C4; // int32
            public const nint m_vGravity = 0x1C8; // Vector
            public const nint m_flArcMaxDuration = 0x1D4; // float32
            public const nint m_flSegmentBreak = 0x1D8; // float32
            public const nint m_flArcSpeed = 0x1DC; // float32
            public const nint m_flAlpha = 0x1E0; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapExternalWindToCP {
            public const nint m_nCP = 0x1B4; // int32
            public const nint m_nCPOutput = 0x1B8; // int32
            public const nint m_vecScale = 0x1C0; // CParticleCollectionVecInput
            public const nint m_bSetMagnitude = 0x7F0; // bool
            public const nint m_nOutVectorField = 0x7F4; // int32
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 62
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseRendererSource2 {
            public const nint m_flRadiusScale = 0x200; // CParticleCollectionRendererFloatInput
            public const nint m_flAlphaScale = 0x350; // CParticleCollectionRendererFloatInput
            public const nint m_flRollScale = 0x4A0; // CParticleCollectionRendererFloatInput
            public const nint m_nAlpha2Field = 0x5F0; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x5F8; // CParticleCollectionRendererVecInput
            public const nint m_nColorBlendType = 0xC28; // ParticleColorBlendType_t
            public const nint m_nShaderType = 0xC2C; // SpriteCardShaderType_t
            public const nint m_strShaderOverride = 0xC30; // CUtlString
            public const nint m_flCenterXOffset = 0xC38; // CParticleCollectionRendererFloatInput
            public const nint m_flCenterYOffset = 0xD88; // CParticleCollectionRendererFloatInput
            public const nint m_flBumpStrength = 0xED8; // float32
            public const nint m_nCropTextureOverride = 0xEDC; // ParticleSequenceCropOverride_t
            public const nint m_vecTexturesInput = 0xEE0; // CUtlVector<TextureGroup_t>
            public const nint m_flAnimationRate = 0xEF8; // float32
            public const nint m_nAnimationType = 0xEFC; // AnimationType_t
            public const nint m_bAnimateInFPS = 0xF00; // bool
            public const nint m_flSelfIllumAmount = 0xF08; // CParticleCollectionRendererFloatInput
            public const nint m_flDiffuseAmount = 0x1058; // CParticleCollectionRendererFloatInput
            public const nint m_flDiffuseClamp = 0x11A8; // CParticleCollectionRendererFloatInput
            public const nint m_nLightingControlPoint = 0x12F8; // int32
            public const nint m_nSelfIllumPerParticle = 0x12FC; // ParticleAttributeIndex_t
            public const nint m_nOutputBlendMode = 0x1300; // ParticleOutputBlendMode_t
            public const nint m_bGammaCorrectVertexColors = 0x1304; // bool
            public const nint m_bSaturateColorPreAlphaBlend = 0x1305; // bool
            public const nint m_flAddSelfAmount = 0x1308; // CParticleCollectionRendererFloatInput
            public const nint m_flDesaturation = 0x1458; // CParticleCollectionRendererFloatInput
            public const nint m_flOverbrightFactor = 0x15A8; // CParticleCollectionRendererFloatInput
            public const nint m_nHSVShiftControlPoint = 0x16F8; // int32
            public const nint m_nFogType = 0x16FC; // ParticleFogType_t
            public const nint m_flFogAmount = 0x1700; // CParticleCollectionRendererFloatInput
            public const nint m_bTintByFOW = 0x1850; // bool
            public const nint m_bTintByGlobalLight = 0x1851; // bool
            public const nint m_nPerParticleAlphaReference = 0x1854; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleAlphaRefWindow = 0x1858; // SpriteCardPerParticleScale_t
            public const nint m_nAlphaReferenceType = 0x185C; // ParticleAlphaReferenceType_t
            public const nint m_flAlphaReferenceSoftness = 0x1860; // CParticleCollectionRendererFloatInput
            public const nint m_flSourceAlphaValueToMapToZero = 0x19B0; // CParticleCollectionRendererFloatInput
            public const nint m_flSourceAlphaValueToMapToOne = 0x1B00; // CParticleCollectionRendererFloatInput
            public const nint m_bRefract = 0x1C50; // bool
            public const nint m_bRefractSolid = 0x1C51; // bool
            public const nint m_flRefractAmount = 0x1C58; // CParticleCollectionRendererFloatInput
            public const nint m_nRefractBlurRadius = 0x1DA8; // int32
            public const nint m_nRefractBlurType = 0x1DAC; // BlurFilterType_t
            public const nint m_bOnlyRenderInEffectsBloomPass = 0x1DB0; // bool
            public const nint m_bOnlyRenderInEffectsWaterPass = 0x1DB1; // bool
            public const nint m_bUseMixedResolutionRendering = 0x1DB2; // bool
            public const nint m_bOnlyRenderInEffecsGameOverlay = 0x1DB3; // bool
            public const nint m_stencilTestID = 0x1DB4; // char[128]
            public const nint m_bStencilTestExclude = 0x1E34; // bool
            public const nint m_stencilWriteID = 0x1E35; // char[128]
            public const nint m_bWriteStencilOnDepthPass = 0x1EB5; // bool
            public const nint m_bWriteStencilOnDepthFail = 0x1EB6; // bool
            public const nint m_bReverseZBuffering = 0x1EB7; // bool
            public const nint m_bDisableZBuffering = 0x1EB8; // bool
            public const nint m_nFeatheringMode = 0x1EBC; // ParticleDepthFeatheringMode_t
            public const nint m_flFeatheringMinDist = 0x1EC0; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringMaxDist = 0x2010; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringFilter = 0x2160; // CParticleCollectionRendererFloatInput
            public const nint m_flDepthBias = 0x22B0; // CParticleCollectionRendererFloatInput
            public const nint m_nSortMethod = 0x2400; // ParticleSortingChoiceList_t
            public const nint m_bBlendFramesSeq0 = 0x2404; // bool
            public const nint m_bMaxLuminanceBlendingSequence0 = 0x2405; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSpinUpdateBase {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OrientTo2dDirection {
            public const nint m_flRotOffset = 0x1B0; // float32
            public const nint m_flSpinStrength = 0x1B4; // float32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDotProductToCP {
            public const nint m_nInputCP1 = 0x1B4; // int32
            public const nint m_nInputCP2 = 0x1B8; // int32
            public const nint m_nOutputCP = 0x1BC; // int32
            public const nint m_nOutVectorField = 0x1C0; // int32
            public const nint m_flInputMin = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_flInputMax = 0x318; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x468; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x5B8; // CParticleCollectionFloatInput
        }
        // Parent: C_INIT_RemapParticleCountToScalar
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelElementScalar {
            public const nint m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_outputMinName = 0x1E8; // CUtlString
            public const nint m_outputMaxName = 0x1F0; // CUtlString
            public const nint m_bModelFromRenderer = 0x1F8; // bool
        }
        // Parent: CBaseTrailRenderer
        // Fields count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderTrails {
            public const nint m_bEnableFadingAndClamping = 0x28F1; // bool
            public const nint m_flStartFadeDot = 0x28F4; // float32
            public const nint m_flEndFadeDot = 0x28F8; // float32
            public const nint m_nPrevPntSource = 0x28FC; // ParticleAttributeIndex_t
            public const nint m_flMaxLength = 0x2900; // float32
            public const nint m_flMinLength = 0x2904; // float32
            public const nint m_bIgnoreDT = 0x2908; // bool
            public const nint m_flConstrainRadiusToLengthRatio = 0x290C; // float32
            public const nint m_flLengthScale = 0x2910; // float32
            public const nint m_flLengthFadeInTime = 0x2914; // float32
            public const nint m_flRadiusHeadTaper = 0x2918; // CPerParticleFloatInput
            public const nint m_vecHeadColorScale = 0x2A68; // CParticleCollectionVecInput
            public const nint m_flHeadAlphaScale = 0x3098; // CPerParticleFloatInput
            public const nint m_flRadiusTaper = 0x31E8; // CPerParticleFloatInput
            public const nint m_vecTailColorScale = 0x3338; // CParticleCollectionVecInput
            public const nint m_flTailAlphaScale = 0x3968; // CPerParticleFloatInput
            public const nint m_nHorizCropField = 0x3AB8; // ParticleAttributeIndex_t
            public const nint m_nVertCropField = 0x3ABC; // ParticleAttributeIndex_t
            public const nint m_flForwardShift = 0x3AC0; // float32
            public const nint m_bFlipUVBasedOnPitchYaw = 0x3AC4; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointPositionToTimeOfDayValue {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_pszTimeOfDayParameter = 0x1B8; // char[128]
            public const nint m_vecDefaultValue = 0x238; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayMaintainCount {
            public const nint m_nParticlesToMaintain = 0x1B0; // int32
            public const nint m_flDecayDelay = 0x1B4; // float32
            public const nint m_nSnapshotControlPoint = 0x1B8; // int32
            public const nint m_bLifespanDecay = 0x1BC; // bool
            public const nint m_flScale = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_bKillNewest = 0x310; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomModelSequence {
            public const nint m_ActivityName = 0x1B4; // char[256]
            public const nint m_SequenceName = 0x2B4; // char[256]
            public const nint m_hModel = 0x3B8; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: CParticleVecInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CPerParticleVecInput {
        }
        // Parent: CParticleFunctionForce
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ExternalGameImpulseForce {
            public const nint m_flForceScale = 0x1C0; // CPerParticleFloatInput
            public const nint m_bRopes = 0x310; // bool
            public const nint m_bRopesZOnly = 0x311; // bool
            public const nint m_bExplosions = 0x312; // bool
            public const nint m_bParticles = 0x313; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapAverageHitboxSpeedtoCP {
            public const nint m_nInControlPointNumber = 0x1B4; // int32
            public const nint m_nOutControlPointNumber = 0x1B8; // int32
            public const nint m_nField = 0x1BC; // int32
            public const nint m_nHitboxDataType = 0x1C0; // ParticleHitboxDataSelection_t
            public const nint m_flInputMin = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_flInputMax = 0x318; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x468; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x5B8; // CParticleCollectionFloatInput
            public const nint m_nHeightControlPointNumber = 0x708; // int32
            public const nint m_vecComparisonVelocity = 0x710; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0xD40; // char[128]
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomAlpha {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nAlphaMin = 0x1B8; // int32
            public const nint m_nAlphaMax = 0x1BC; // int32
            public const nint m_flAlphaRandExponent = 0x1C8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NormalizeVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1B4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeInSimple {
            public const nint m_flFadeInTime = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RepeatedTriggerChildGroup {
            public const nint m_nChildGroupID = 0x1B4; // int32
            public const nint m_flClusterRefireTime = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flClusterSize = 0x308; // CParticleCollectionFloatInput
            public const nint m_flClusterCooldown = 0x458; // CParticleCollectionFloatInput
            public const nint m_bLimitChildCount = 0x5A8; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderTonemapController {
            public const nint m_flTonemapLevel = 0x1FC; // float32
            public const nint m_flTonemapWeight = 0x200; // float32
            public const nint m_nTonemapLevelField = 0x204; // ParticleAttributeIndex_t
            public const nint m_nTonemapWeightField = 0x208; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVelocityToVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1B4; // float32
            public const nint m_bNormalize = 0x1B8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetHitboxToClosest {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nDesiredHitbox = 0x1B8; // int32
            public const nint m_vecHitBoxScale = 0x1C0; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0x7F0; // char[128]
            public const nint m_bUseBones = 0x870; // bool
            public const nint m_bUseClosestPointOnHitbox = 0x871; // bool
            public const nint m_nTestType = 0x874; // ClosestPointTestType_t
            public const nint m_flHybridRatio = 0x878; // CParticleCollectionFloatInput
            public const nint m_bUpdatePosition = 0x9C8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RingWave {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_flParticlesPerOrbit = 0x218; // CParticleCollectionFloatInput
            public const nint m_flInitialRadius = 0x368; // CPerParticleFloatInput
            public const nint m_flThickness = 0x4B8; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMin = 0x608; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMax = 0x758; // CPerParticleFloatInput
            public const nint m_flRoll = 0x8A8; // CPerParticleFloatInput
            public const nint m_flPitch = 0x9F8; // CPerParticleFloatInput
            public const nint m_flYaw = 0xB48; // CPerParticleFloatInput
            public const nint m_bEvenDistribution = 0xC98; // bool
            public const nint m_bXYVelocityOnly = 0xC99; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomTrailLength {
            public const nint m_flMinLength = 0x1B4; // float32
            public const nint m_flMaxLength = 0x1B8; // float32
            public const nint m_flLengthRandExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalar {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_bOldCode = 0x1C8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceBetweenTransforms {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_TransformStart = 0x1B8; // CParticleTransformInput
            public const nint m_TransformEnd = 0x218; // CParticleTransformInput
            public const nint m_flInputMin = 0x278; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x3C8; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x518; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x668; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x7B8; // float32
            public const nint m_flLOSScale = 0x7BC; // float32
            public const nint m_CollisionGroupName = 0x7C0; // char[128]
            public const nint m_nTraceSet = 0x840; // ParticleTraceSet_t
            public const nint m_bLOS = 0x844; // bool
            public const nint m_nSetMethod = 0x848; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayOffscreen {
            public const nint m_flOffscreenTime = 0x1B0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSequentialPath {
            public const nint m_fMaxDistance = 0x1B4; // float32
            public const nint m_flNumToAssign = 0x1B8; // float32
            public const nint m_bLoop = 0x1BC; // bool
            public const nint m_bCPPairs = 0x1BD; // bool
            public const nint m_bSaveOffset = 0x1BE; // bool
            public const nint m_PathParams = 0x1C0; // CPathParameters
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapTimedDecay {
            public const nint m_flDecayTime = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDistanceToLineSegmentBase {
            public const nint m_nCP0 = 0x1B0; // int32
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_flMinInputValue = 0x1B8; // float32
            public const nint m_flMaxInputValue = 0x1BC; // float32
            public const nint m_bInfiniteLine = 0x1C0; // bool
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ContinuousEmitter {
            public const nint m_flEmissionDuration = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x308; // CParticleCollectionFloatInput
            public const nint m_flEmitRate = 0x458; // CParticleCollectionFloatInput
            public const nint m_flEmissionScale = 0x5A8; // float32
            public const nint m_flScalePerParentParticle = 0x5AC; // float32
            public const nint m_bInitFromKilledParentParticles = 0x5B0; // bool
            public const nint m_nEventType = 0x5B4; // EventTypeSelection_t
            public const nint m_nSnapshotControlPoint = 0x5B8; // int32
            public const nint m_nLimitPerUpdate = 0x5BC; // int32
            public const nint m_bForceEmitOnFirstUpdate = 0x5C0; // bool
            public const nint m_bForceEmitOnLastUpdate = 0x5C1; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateVectorSimple {
            public const nint m_Rate = 0x1B0; // Vector
            public const nint m_Frequency = 0x1BC; // Vector
            public const nint m_nField = 0x1C8; // ParticleAttributeIndex_t
            public const nint m_flOscMult = 0x1CC; // float32
            public const nint m_flOscAdd = 0x1D0; // float32
            public const nint m_bOffset = 0x1D4; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SequenceLifeTime {
            public const nint m_flFramerate = 0x1B4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_MoveBetweenPoints {
            public const nint m_flSpeedMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flSpeedMax = 0x308; // CPerParticleFloatInput
            public const nint m_flEndSpread = 0x458; // CPerParticleFloatInput
            public const nint m_flStartOffset = 0x5A8; // CPerParticleFloatInput
            public const nint m_flEndOffset = 0x6F8; // CPerParticleFloatInput
            public const nint m_nEndControlPointNumber = 0x848; // int32
            public const nint m_bTrailBias = 0x84C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapScalar {
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_flStartTime = 0x1CC; // float32
            public const nint m_flEndTime = 0x1D0; // float32
            public const nint m_nSetMethod = 0x1D4; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1D8; // bool
            public const nint m_flRemapBias = 0x1DC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetUserEvent {
            public const nint m_flInput = 0x1B0; // CPerParticleFloatInput
            public const nint m_flRisingEdge = 0x300; // CPerParticleFloatInput
            public const nint m_nRisingEventType = 0x450; // EventTypeSelection_t
            public const nint m_flFallingEdge = 0x458; // CPerParticleFloatInput
            public const nint m_nFallingEventType = 0x5A8; // EventTypeSelection_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_QuantizeFloat {
            public const nint m_InputValue = 0x1B0; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x300; // ParticleAttributeIndex_t
        }
        // Parent: CBasePulseGraphInstance
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        // MPulseDomainOptInFeatureTag
        public static class CParticleCollectionBindingInstance {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_BasicMovement {
            public const nint m_Gravity = 0x1B0; // CParticleCollectionVecInput
            public const nint m_fDrag = 0x7E0; // CParticleCollectionFloatInput
            public const nint m_massControls = 0x930; // CParticleMassCalculationParameters
            public const nint m_nMaxConstraintPasses = 0xD28; // int32
            public const nint m_bUseNewCode = 0xD2C; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelElement {
            public const nint m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_names = 0x1C0; // CUtlVector<CUtlString>
            public const nint m_bShuffle = 0x1D8; // bool
            public const nint m_bLinear = 0x1D9; // bool
            public const nint m_bModelFromRenderer = 0x1DA; // bool
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromParentKilled {
            public const nint m_nAttributeToCopy = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nEventType = 0x1B8; // EventTypeSelection_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Callback {
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunction {
            public const nint m_flOpStrength = 0x8; // CParticleCollectionFloatInput
            public const nint m_nOpEndCapState = 0x158; // ParticleEndcapMode_t
            public const nint m_flOpStartFadeInTime = 0x15C; // float32
            public const nint m_flOpEndFadeInTime = 0x160; // float32
            public const nint m_flOpStartFadeOutTime = 0x164; // float32
            public const nint m_flOpEndFadeOutTime = 0x168; // float32
            public const nint m_flOpFadeOscillatePeriod = 0x16C; // float32
            public const nint m_bNormalizeToStopTime = 0x170; // bool
            public const nint m_flOpTimeOffsetMin = 0x174; // float32
            public const nint m_flOpTimeOffsetMax = 0x178; // float32
            public const nint m_nOpTimeOffsetSeed = 0x17C; // int32
            public const nint m_nOpTimeScaleSeed = 0x180; // int32
            public const nint m_flOpTimeScaleMin = 0x184; // float32
            public const nint m_flOpTimeScaleMax = 0x188; // float32
            public const nint m_bDisableOperator = 0x18E; // bool
            public const nint m_Notes = 0x190; // CUtlString
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_GlobalLight {
            public const nint m_flScale = 0x1B0; // float32
            public const nint m_bClampLowerRange = 0x1B4; // bool
            public const nint m_bClampUpperRange = 0x1B5; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_OffsetVectorToVector {
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1BC; // Vector
            public const nint m_vecOutputMax = 0x1C8; // Vector
            public const nint m_randomnessParameters = 0x1D4; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetPerChildControlPointFromAttribute {
            public const nint m_nChildGroupID = 0x1B0; // int32
            public const nint m_nFirstControlPoint = 0x1B4; // int32
            public const nint m_nNumControlPoints = 0x1B8; // int32
            public const nint m_nParticleIncrement = 0x1BC; // int32
            public const nint m_nFirstSourcePoint = 0x1C0; // int32
            public const nint m_bNumBasedOnParticleCount = 0x1C4; // bool
            public const nint m_nAttributeToRead = 0x1C8; // ParticleAttributeIndex_t
            public const nint m_nCPField = 0x1CC; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetParentControlPointsToChildCP {
            public const nint m_nChildGroupID = 0x1B4; // int32
            public const nint m_nChildControlPoint = 0x1B8; // int32
            public const nint m_nNumControlPoints = 0x1BC; // int32
            public const nint m_nFirstSourcePoint = 0x1C0; // int32
            public const nint m_bSetOrientation = 0x1C4; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SDFForce {
            public const nint m_flForceScale = 0x1BC; // float32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_BoxConstraint {
            public const nint m_vecMin = 0x1B0; // CParticleCollectionVecInput
            public const nint m_vecMax = 0x7E0; // CParticleCollectionVecInput
            public const nint m_nCP = 0xE10; // int32
            public const nint m_bLocalSpace = 0xE14; // bool
            public const nint m_bAccountForRadius = 0xE15; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreatePhyllotaxis {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nScaleCP = 0x1B8; // int32
            public const nint m_nComponent = 0x1BC; // int32
            public const nint m_fRadCentCore = 0x1C0; // float32
            public const nint m_fRadPerPoint = 0x1C4; // float32
            public const nint m_fRadPerPointTo = 0x1C8; // float32
            public const nint m_fpointAngle = 0x1CC; // float32
            public const nint m_fsizeOverall = 0x1D0; // float32
            public const nint m_fRadBias = 0x1D4; // float32
            public const nint m_fMinRad = 0x1D8; // float32
            public const nint m_fDistBias = 0x1DC; // float32
            public const nint m_bUseLocalCoords = 0x1E0; // bool
            public const nint m_bUseWithContEmit = 0x1E1; // bool
            public const nint m_bUseOrigRadius = 0x1E2; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_AttractToControlPoint {
            public const nint m_vecComponentScale = 0x1BC; // Vector
            public const nint m_fForceAmount = 0x1C8; // CPerParticleFloatInput
            public const nint m_fFalloffPower = 0x318; // float32
            public const nint m_TransformInput = 0x320; // CParticleTransformInput
            public const nint m_fForceAmountMin = 0x380; // CPerParticleFloatInput
            public const nint m_bApplyMinForce = 0x4D0; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomLifeTime {
            public const nint m_fLifetimeMin = 0x1B4; // float32
            public const nint m_fLifetimeMax = 0x1B8; // float32
            public const nint m_fLifetimeRandExponent = 0x1BC; // float32
        }
        // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityRadialRandom {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_fSpeedMin = 0x1B8; // float32
            public const nint m_fSpeedMax = 0x1BC; // float32
            public const nint m_vecLocalCoordinateSystemSpeedScale = 0x1C0; // Vector
            public const nint m_bIgnoreDelta = 0x1CD; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRadius {
            public const nint m_flRadiusMin = 0x1B4; // float32
            public const nint m_flRadiusMax = 0x1B8; // float32
            public const nint m_flRadiusRandExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Orient2DRelToCP {
            public const nint m_flRotOffset = 0x1B0; // float32
            public const nint m_flSpinStrength = 0x1B4; // float32
            public const nint m_nCP = 0x1B8; // int32
            public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureControls_t {
            public const nint m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureScaleV = 0x150; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureOffsetU = 0x2A0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureOffsetV = 0x3F0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureUVRotation = 0x540; // CParticleCollectionRendererFloatInput
            public const nint m_flZoomScale = 0x690; // CParticleCollectionRendererFloatInput
            public const nint m_flDistortion = 0x7E0; // CParticleCollectionRendererFloatInput
            public const nint m_bRandomizeOffsets = 0x930; // bool
            public const nint m_bClampUVs = 0x931; // bool
            public const nint m_nPerParticleBlend = 0x934; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleScale = 0x938; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleOffsetU = 0x93C; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleOffsetV = 0x940; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleRotation = 0x944; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleZoom = 0x948; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleDistortion = 0x94C; // SpriteCardPerParticleScale_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ControlPointReference_t {
            public const nint m_controlPointNameString = 0x0; // int32
            public const nint m_vOffsetFromControlPoint = 0x4; // Vector
            public const nint m_bOffsetInLocalSpace = 0x10; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToVectorExpression {
            public const nint m_nExpression = 0x1B4; // VectorExpressionType_t
            public const nint m_nOutputCP = 0x1B8; // int32
            public const nint m_vInput1 = 0x1C0; // CParticleCollectionVecInput
            public const nint m_vInput2 = 0x7F0; // CParticleCollectionVecInput
            public const nint m_bNormalizedOutput = 0xE20; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LightningSnapshotGenerator {
            public const nint m_nCPSnapshot = 0x1B4; // int32
            public const nint m_nCPStartPnt = 0x1B8; // int32
            public const nint m_nCPEndPnt = 0x1BC; // int32
            public const nint m_flSegments = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_flOffset = 0x310; // CParticleCollectionFloatInput
            public const nint m_flOffsetDecay = 0x460; // CParticleCollectionFloatInput
            public const nint m_flRecalcRate = 0x5B0; // CParticleCollectionFloatInput
            public const nint m_flUVScale = 0x700; // CParticleCollectionFloatInput
            public const nint m_flUVOffset = 0x850; // CParticleCollectionFloatInput
            public const nint m_flSplitRate = 0x9A0; // CParticleCollectionFloatInput
            public const nint m_flBranchTwist = 0xAF0; // CParticleCollectionFloatInput
            public const nint m_nBranchBehavior = 0xC40; // ParticleLightnintBranchBehavior_t
            public const nint m_flRadiusStart = 0xC48; // CParticleCollectionFloatInput
            public const nint m_flRadiusEnd = 0xD98; // CParticleCollectionFloatInput
            public const nint m_flDedicatedPool = 0xEE8; // CParticleCollectionFloatInput
        }
        // Parent: C_OP_RemapNamedModelElementOnceTimed
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelMeshGroupOnceTimed {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleInput {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapSpeedToScalar {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nControlPointNumber = 0x1B8; // int32
            public const nint m_flStartTime = 0x1BC; // float32
            public const nint m_flEndTime = 0x1C0; // float32
            public const nint m_flInputMin = 0x1C4; // float32
            public const nint m_flInputMax = 0x1C8; // float32
            public const nint m_flOutputMin = 0x1CC; // float32
            public const nint m_flOutputMax = 0x1D0; // float32
            public const nint m_nSetMethod = 0x1D4; // ParticleSetMethod_t
            public const nint m_bPerParticle = 0x1D8; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapQAnglesToRotation {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionWarp {
            public const nint m_vecWarpMin = 0x1B8; // CParticleCollectionVecInput
            public const nint m_vecWarpMax = 0x7E8; // CParticleCollectionVecInput
            public const nint m_nScaleControlPointNumber = 0xE18; // int32
            public const nint m_nControlPointNumber = 0xE1C; // int32
            public const nint m_nRadiusComponent = 0xE20; // int32
            public const nint m_flWarpTime = 0xE24; // float32
            public const nint m_flWarpStartTime = 0xE28; // float32
            public const nint m_flPrevPosScale = 0xE2C; // float32
            public const nint m_bInvertWarp = 0xE30; // bool
            public const nint m_bUseCount = 0xE31; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SDFConstraint {
            public const nint m_flMinDist = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_flMaxDist = 0x300; // CParticleCollectionFloatInput
            public const nint m_nMaxIterations = 0x450; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFieldToScalarExpression {
            public const nint m_nExpression = 0x1B4; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flInput2 = 0x308; // CParticleCollectionFloatInput
            public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
            public const nint m_nOutputCP = 0x5A8; // int32
            public const nint m_nOutVectorField = 0x5AC; // int32
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionForce {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomVectorComponent {
            public const nint m_flMin = 0x1B4; // float32
            public const nint m_flMax = 0x1B8; // float32
            public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_nComponent = 0x1C0; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_OP_InheritFromParentParticles {
            public const nint m_flScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1B8; // int32
            public const nint m_bRandomDistribution = 0x1BC; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetVectorAttributeToVectorExpression {
            public const nint m_nExpression = 0x1B4; // VectorExpressionType_t
            public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
            public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
            public const nint m_nOutputField = 0xE18; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0xE1C; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0xE20; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformVisibilityToVector {
            public const nint m_nSetMethod = 0x1B0; // ParticleSetMethod_t
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x21C; // float32
            public const nint m_flInputMax = 0x220; // float32
            public const nint m_vecOutputMin = 0x224; // Vector
            public const nint m_vecOutputMax = 0x230; // Vector
            public const nint m_flRadius = 0x23C; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DirectionBetweenVecsToVec {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecPoint1 = 0x1B8; // CPerParticleVecInput
            public const nint m_vecPoint2 = 0x7E8; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementLoopInsideSphere {
            public const nint m_nCP = 0x1B0; // int32
            public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_vecScale = 0x308; // CParticleCollectionVecInput
            public const nint m_nDistSqrAttr = 0x938; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSimpleModelCollection {
            public const nint m_bCenterOffset = 0x1FA; // bool
            public const nint m_hModel = 0x200; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_modelInput = 0x208; // CParticleModelInput
            public const nint m_nLOD = 0x260; // int32
            public const nint m_bDisableShadows = 0x264; // bool
            public const nint m_bDisableMotionBlur = 0x265; // bool
            public const nint m_bAcceptsDecals = 0x266; // bool
            public const nint m_nAngularVelocityField = 0x268; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_QuantizeCPComponent {
            public const nint m_flInputValue = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nCPOutput = 0x308; // int32
            public const nint m_nOutVectorField = 0x30C; // int32
            public const nint m_flQuantizeValue = 0x310; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlayEndCapWhenFinished {
            public const nint m_bFireOnEmissionEnd = 0x1B1; // bool
            public const nint m_bIncludeChildren = 0x1B2; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFloatCollection {
            public const nint m_InputValue = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPathParameters {
            public const nint m_nStartControlPointNumber = 0x0; // int32
            public const nint m_nEndControlPointNumber = 0x4; // int32
            public const nint m_nBulgeControl = 0x8; // int32
            public const nint m_flBulge = 0xC; // float32
            public const nint m_flMidPoint = 0x10; // float32
            public const nint m_vStartPointOffset = 0x14; // Vector
            public const nint m_vMidPointOffset = 0x20; // Vector
            public const nint m_vEndOffset = 0x2C; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalarEndCap {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromPlaneCache {
            public const nint m_vecOffsetMin = 0x1B4; // Vector
            public const nint m_vecOffsetMax = 0x1C0; // Vector
            public const nint m_bUseNormal = 0x1CD; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ControlPointToRadialScreenSpace {
            public const nint m_nCPIn = 0x1B4; // int32
            public const nint m_vecCP1Pos = 0x1B8; // Vector
            public const nint m_nCPOut = 0x1C4; // int32
            public const nint m_nCPOutField = 0x1C8; // int32
            public const nint m_nCPSSPosOut = 0x1CC; // int32
        }
        // Parent: CSpinUpdateBase
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpinUpdate {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_NormalOffset {
            public const nint m_OffsetMin = 0x1B4; // Vector
            public const nint m_OffsetMax = 0x1C0; // Vector
            public const nint m_nControlPointNumber = 0x1CC; // int32
            public const nint m_bLocalCoords = 0x1D0; // bool
            public const nint m_bNormalize = 0x1D1; // bool
        }
        // Parent: C_OP_RemapDistanceToLineSegmentBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDistanceToLineSegmentToVector {
            public const nint m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint m_vMinOutputValue = 0x1C8; // Vector
            public const nint m_vMaxOutputValue = 0x1D4; // Vector
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderAsModels {
            public const nint m_ModelList = 0x200; // CUtlVector<ModelReference_t>
            public const nint m_flModelScale = 0x21C; // float32
            public const nint m_bFitToModelSize = 0x220; // bool
            public const nint m_bNonUniformScaling = 0x221; // bool
            public const nint m_nXAxisScalingAttribute = 0x224; // ParticleAttributeIndex_t
            public const nint m_nYAxisScalingAttribute = 0x228; // ParticleAttributeIndex_t
            public const nint m_nZAxisScalingAttribute = 0x22C; // ParticleAttributeIndex_t
            public const nint m_nSizeCullBloat = 0x230; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreationNoise {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_bAbsVal = 0x1B8; // bool
            public const nint m_bAbsValInv = 0x1B9; // bool
            public const nint m_flOffset = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_flNoiseScale = 0x1C8; // float32
            public const nint m_flNoiseScaleLoc = 0x1CC; // float32
            public const nint m_vecOffsetLoc = 0x1D0; // Vector
            public const nint m_flWorldTimeScale = 0x1DC; // float32
        }
        // Parent: CGeneralSpin
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Spin {
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleNamedValueConfiguration_t {
            public const nint m_ConfigName = 0x0; // CUtlString
            public const nint m_ConfigValue = 0x8; // KeyValues3
            public const nint m_iAttachType = 0x18; // ParticleAttachment_t
            public const nint m_BoundEntityPath = 0x20; // CUtlString
            public const nint m_strEntityScope = 0x28; // CUtlString
            public const nint m_strAttachmentName = 0x30; // CUtlString
        }
        // Parent: CParticleInput
        // Fields count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MParticleCustomFieldDefaultValue
        public static class CParticleVecInput {
            public const nint m_nType = 0xC; // ParticleVecType_t
            public const nint m_vLiteralValue = 0x10; // Vector
            public const nint m_LiteralColor = 0x1C; // Color
            public const nint m_NamedValue = 0x20; // CParticleNamedValueRef
            public const nint m_bFollowNamedValue = 0x60; // bool
            public const nint m_nVectorAttribute = 0x64; // ParticleAttributeIndex_t
            public const nint m_vVectorAttributeScale = 0x68; // Vector
            public const nint m_nControlPoint = 0x74; // int32
            public const nint m_nDeltaControlPoint = 0x78; // int32
            public const nint m_vCPValueScale = 0x7C; // Vector
            public const nint m_vCPRelativePosition = 0x88; // Vector
            public const nint m_vCPRelativeDir = 0x94; // Vector
            public const nint m_FloatComponentX = 0xA0; // CParticleFloatInput
            public const nint m_FloatComponentY = 0x1F0; // CParticleFloatInput
            public const nint m_FloatComponentZ = 0x340; // CParticleFloatInput
            public const nint m_FloatInterp = 0x490; // CParticleFloatInput
            public const nint m_flInterpInput0 = 0x5E0; // float32
            public const nint m_flInterpInput1 = 0x5E4; // float32
            public const nint m_vInterpOutput0 = 0x5E8; // Vector
            public const nint m_vInterpOutput1 = 0x5F4; // Vector
            public const nint m_Gradient = 0x600; // CColorGradient
            public const nint m_vRandomMin = 0x618; // Vector
            public const nint m_vRandomMax = 0x624; // Vector
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InstantaneousEmitter {
            public const nint m_nParticlesToEmit = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x308; // CParticleCollectionFloatInput
            public const nint m_flInitFromKilledParentParticles = 0x458; // float32
            public const nint m_nEventType = 0x45C; // EventTypeSelection_t
            public const nint m_flParentParticleScale = 0x460; // CParticleCollectionFloatInput
            public const nint m_nMaxEmittedPerFrame = 0x5B0; // int32
            public const nint m_nSnapshotControlPoint = 0x5B4; // int32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainLineLength {
            public const nint m_flMinDistance = 0x1B0; // float32
            public const nint m_flMaxDistance = 0x1B4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_LifespanFromVelocity {
            public const nint m_vecComponentScale = 0x1B4; // Vector
            public const nint m_flTraceOffset = 0x1C0; // float32
            public const nint m_flMaxTraceLength = 0x1C4; // float32
            public const nint m_flTraceTolerance = 0x1C8; // float32
            public const nint m_nMaxPlanes = 0x1CC; // int32
            public const nint m_CollisionGroupName = 0x1D4; // char[128]
            public const nint m_nTraceSet = 0x254; // ParticleTraceSet_t
            public const nint m_bIncludeWater = 0x260; // bool
        }
        // Parent: CBaseRendererSource2
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseTrailRenderer {
            public const nint m_nOrientationType = 0x2640; // ParticleOrientationChoiceList_t
            public const nint m_nOrientationControlPoint = 0x2644; // int32
            public const nint m_flMinSize = 0x2648; // float32
            public const nint m_flMaxSize = 0x264C; // float32
            public const nint m_flStartFadeSize = 0x2650; // CParticleCollectionRendererFloatInput
            public const nint m_flEndFadeSize = 0x27A0; // CParticleCollectionRendererFloatInput
            public const nint m_bClampV = 0x28F0; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityFromCP {
            public const nint m_velocityInput = 0x1B8; // CParticleCollectionVecInput
            public const nint m_transformInput = 0x7E8; // CParticleTransformInput
            public const nint m_flVelocityScale = 0x848; // float32
            public const nint m_bDirectionOnly = 0x84C; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointOrientation {
            public const nint m_bUseWorldLocation = 0x1B1; // bool
            public const nint m_bRandomize = 0x1B3; // bool
            public const nint m_bSetOnce = 0x1B4; // bool
            public const nint m_nCP = 0x1B8; // int32
            public const nint m_nHeadLocation = 0x1BC; // int32
            public const nint m_vecRotation = 0x1C0; // QAngle
            public const nint m_vecRotationB = 0x1CC; // QAngle
            public const nint m_flInterpolation = 0x1D8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementSkinnedPositionFromCPSnapshot {
            public const nint m_nSnapshotControlPointNumber = 0x1B0; // int32
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_bRandom = 0x1B8; // bool
            public const nint m_nRandomSeed = 0x1BC; // int32
            public const nint m_bSetNormal = 0x1C0; // bool
            public const nint m_bSetRadius = 0x1C1; // bool
            public const nint m_nIndexType = 0x1C4; // SnapshotIndexType_t
            public const nint m_flReadIndex = 0x1C8; // CPerParticleFloatInput
            public const nint m_flIncrement = 0x318; // CParticleCollectionFloatInput
            public const nint m_nFullLoopIncrement = 0x468; // CParticleCollectionFloatInput
            public const nint m_nSnapShotStartPoint = 0x5B8; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0x708; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateVector {
            public const nint m_RateMin = 0x1B0; // Vector
            public const nint m_RateMax = 0x1BC; // Vector
            public const nint m_FrequencyMin = 0x1C8; // Vector
            public const nint m_FrequencyMax = 0x1D4; // Vector
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_bProportional = 0x1E4; // bool
            public const nint m_bProportionalOp = 0x1E5; // bool
            public const nint m_bOffset = 0x1E6; // bool
            public const nint m_flStartTime_min = 0x1E8; // float32
            public const nint m_flStartTime_max = 0x1EC; // float32
            public const nint m_flEndTime_min = 0x1F0; // float32
            public const nint m_flEndTime_max = 0x1F4; // float32
            public const nint m_flOscMult = 0x1F8; // CPerParticleFloatInput
            public const nint m_flOscAdd = 0x348; // CPerParticleFloatInput
            public const nint m_flRateScale = 0x498; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PositionLock {
            public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
            public const nint m_flStartTime_min = 0x210; // float32
            public const nint m_flStartTime_max = 0x214; // float32
            public const nint m_flStartTime_exp = 0x218; // float32
            public const nint m_flEndTime_min = 0x21C; // float32
            public const nint m_flEndTime_max = 0x220; // float32
            public const nint m_flEndTime_exp = 0x224; // float32
            public const nint m_flRange = 0x228; // float32
            public const nint m_flRangeBias = 0x230; // CParticleCollectionFloatInput
            public const nint m_flJumpThreshold = 0x380; // float32
            public const nint m_flPrevPosScale = 0x384; // float32
            public const nint m_bLockRot = 0x388; // bool
            public const nint m_vecScale = 0x390; // CParticleCollectionVecInput
            public const nint m_nFieldOutput = 0x9C0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputPrev = 0x9C4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderVRHapticEvent {
            public const nint m_nHand = 0x1FC; // ParticleVRHandChoiceList_t
            public const nint m_nOutputHandCP = 0x200; // int32
            public const nint m_nOutputField = 0x204; // int32
            public const nint m_flAmplitude = 0x208; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToImpactPoint {
            public const nint m_nCPOut = 0x1B4; // int32
            public const nint m_nCPIn = 0x1B8; // int32
            public const nint m_flUpdateRate = 0x1BC; // float32
            public const nint m_flTraceLength = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_flStartOffset = 0x310; // float32
            public const nint m_flOffset = 0x314; // float32
            public const nint m_vecTraceDir = 0x318; // Vector
            public const nint m_CollisionGroupName = 0x324; // char[128]
            public const nint m_nTraceSet = 0x3A4; // ParticleTraceSet_t
            public const nint m_bSetToEndpoint = 0x3A8; // bool
            public const nint m_bTraceToClosestSurface = 0x3A9; // bool
            public const nint m_bIncludeWater = 0x3AA; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InterpolateRadius {
            public const nint m_flStartTime = 0x1B0; // float32
            public const nint m_flEndTime = 0x1B4; // float32
            public const nint m_flStartScale = 0x1B8; // float32
            public const nint m_flEndScale = 0x1BC; // float32
            public const nint m_bEaseInAndOut = 0x1C0; // bool
            public const nint m_flBias = 0x1C4; // float32
        }
        // Parent: None
        // Fields count: 1
        public static class ParticleAttributeIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ReinitializeScalarEndCap {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1B4; // float32
            public const nint m_flOutputMax = 0x1B8; // float32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TurbulenceForce {
            public const nint m_flNoiseCoordScale0 = 0x1BC; // float32
            public const nint m_flNoiseCoordScale1 = 0x1C0; // float32
            public const nint m_flNoiseCoordScale2 = 0x1C4; // float32
            public const nint m_flNoiseCoordScale3 = 0x1C8; // float32
            public const nint m_vecNoiseAmount0 = 0x1CC; // Vector
            public const nint m_vecNoiseAmount1 = 0x1D8; // Vector
            public const nint m_vecNoiseAmount2 = 0x1E4; // Vector
            public const nint m_vecNoiseAmount3 = 0x1F0; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelElementOnceTimed {
            public const nint m_hModel = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_inNames = 0x1B8; // CUtlVector<CUtlString>
            public const nint m_outNames = 0x1D0; // CUtlVector<CUtlString>
            public const nint m_fallbackNames = 0x1E8; // CUtlVector<CUtlString>
            public const nint m_bModelFromRenderer = 0x200; // bool
            public const nint m_bProportional = 0x201; // bool
            public const nint m_nFieldInput = 0x204; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x208; // ParticleAttributeIndex_t
            public const nint m_flRemapTime = 0x20C; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToPlayer {
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_vecCP1Pos = 0x1B8; // Vector
            public const nint m_bOrientToEyes = 0x1C4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapTimedFreeze {
            public const nint m_flFreezeTime = 0x1B0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderGpuImplicit {
            public const nint m_bUsePerParticleRadius = 0x1FA; // bool
            public const nint m_nVertexCountKb = 0x1FC; // uint32
            public const nint m_nIndexCountKb = 0x200; // uint32
            public const nint m_fGridSize = 0x208; // CParticleCollectionRendererFloatInput
            public const nint m_fRadiusScale = 0x358; // CParticleCollectionRendererFloatInput
            public const nint m_fIsosurfaceThreshold = 0x4A8; // CParticleCollectionRendererFloatInput
            public const nint m_nScaleCP = 0x5F8; // int32
            public const nint m_hMaterial = 0x600; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: IParticleEffect
        // Fields count: 32
        public static class CNewParticleEffect {
            public const nint m_pNext = 0x10; // CNewParticleEffect*
            public const nint m_pPrev = 0x18; // CNewParticleEffect*
            public const nint m_pParticles = 0x20; // IParticleCollection*
            public const nint m_pDebugName = 0x28; // char*
            public const nint m_bDontRemove = 0x0; // bitfield:1
            public const nint m_bRemove = 0x0; // bitfield:1
            public const nint m_bNeedsBBoxUpdate = 0x0; // bitfield:1
            public const nint m_bIsFirstFrame = 0x0; // bitfield:1
            public const nint m_bAutoUpdateBBox = 0x0; // bitfield:1
            public const nint m_bAllocated = 0x0; // bitfield:1
            public const nint m_bSimulate = 0x0; // bitfield:1
            public const nint m_bShouldPerformCullCheck = 0x0; // bitfield:1
            public const nint m_bForceNoDraw = 0x0; // bitfield:1
            public const nint m_bShouldSave = 0x0; // bitfield:1
            public const nint m_bDisableAggregation = 0x0; // bitfield:1
            public const nint m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
            public const nint m_bShouldCheckFoW = 0x0; // bitfield:1
            public const nint m_vSortOrigin = 0x40; // Vector
            public const nint m_flScale = 0x4C; // float32
            public const nint m_hOwner = 0x50; // PARTICLE_EHANDLE__*
            public const nint m_pOwningParticleProperty = 0x58; // CParticleProperty*
            public const nint m_flFreezeTransitionStart = 0x70; // float32
            public const nint m_flFreezeTransitionDuration = 0x74; // float32
            public const nint m_flFreezeTransitionOverride = 0x78; // float32
            public const nint m_bFreezeTransitionActive = 0x7C; // bool
            public const nint m_bFreezeTargetState = 0x7D; // bool
            public const nint m_bCanFreeze = 0x7E; // bool
            public const nint m_LastMin = 0x80; // Vector
            public const nint m_LastMax = 0x8C; // Vector
            public const nint m_nSplitScreenUser = 0x98; // CSplitScreenSlot
            public const nint m_vecAggregationCenter = 0x9C; // Vector
            public const nint m_RefCount = 0xC0; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetRandomControlPointPosition {
            public const nint m_bUseWorldLocation = 0x1B1; // bool
            public const nint m_bOrient = 0x1B2; // bool
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_nHeadLocation = 0x1B8; // int32
            public const nint m_flReRandomRate = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_vecCPMinPos = 0x310; // Vector
            public const nint m_vecCPMaxPos = 0x31C; // Vector
            public const nint m_flInterpolation = 0x328; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformVisibilityToScalar {
            public const nint m_nSetMethod = 0x1B0; // ParticleSetMethod_t
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x21C; // float32
            public const nint m_flInputMax = 0x220; // float32
            public const nint m_flOutputMin = 0x224; // float32
            public const nint m_flOutputMax = 0x228; // float32
            public const nint m_flRadius = 0x22C; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapControlPointDirectionToVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1B4; // float32
            public const nint m_nControlPointNumber = 0x1B8; // int32
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionOperator {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DragRelativeToPlane {
            public const nint m_flDragAtPlane = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_flFalloff = 0x300; // CParticleCollectionFloatInput
            public const nint m_bDirectional = 0x450; // bool
            public const nint m_vecPlaneNormal = 0x458; // CParticleCollectionVecInput
            public const nint m_nControlPointNumber = 0xA88; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPtoVector {
            public const nint m_nCPInput = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleNamedValueSource_t {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_IsPublic = 0x8; // bool
            public const nint m_ValueType = 0xC; // PulseValueType_t
            public const nint m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
            public const nint m_NamedConfigs = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomYaw {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SnapshotRigidSkinToBones {
            public const nint m_bTransformNormals = 0x1B0; // bool
            public const nint m_bTransformRadii = 0x1B1; // bool
            public const nint m_nControlPointNumber = 0x1B4; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetSingleControlPointPosition {
            public const nint m_bSetOnce = 0x1B1; // bool
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_vecCP1Pos = 0x1B8; // CParticleCollectionVecInput
            public const nint m_transformInput = 0x7E8; // CParticleTransformInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceToNeighborCull {
            public const nint m_flDistance = 0x1B8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPtoScalar {
            public const nint m_nCPInput = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nField = 0x1B8; // int32
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_flStartTime = 0x1CC; // float32
            public const nint m_flEndTime = 0x1D0; // float32
            public const nint m_flInterpRate = 0x1D4; // float32
            public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
        }
        // Parent: CParticleFunction
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionRenderer {
            public const nint VisibilityInputs = 0x1B0; // CParticleVisibilityInputs
            public const nint m_bCannotBeRefracted = 0x1F8; // bool
            public const nint m_bSkipRenderingOnMobile = 0x1F9; // bool
        }
        // Parent: IParticleSystemDefinition
        // Fields count: 65
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleSystemDefinition {
            public const nint m_nBehaviorVersion = 0x8; // int32
            public const nint m_PreEmissionOperators = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
            public const nint m_Emitters = 0x28; // CUtlVector<CParticleFunctionEmitter*>
            public const nint m_Initializers = 0x40; // CUtlVector<CParticleFunctionInitializer*>
            public const nint m_Operators = 0x58; // CUtlVector<CParticleFunctionOperator*>
            public const nint m_ForceGenerators = 0x70; // CUtlVector<CParticleFunctionForce*>
            public const nint m_Constraints = 0x88; // CUtlVector<CParticleFunctionConstraint*>
            public const nint m_Renderers = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
            public const nint m_Children = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
            public const nint m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32
            public const nint m_nInitialParticles = 0x210; // int32
            public const nint m_nMaxParticles = 0x214; // int32
            public const nint m_nGroupID = 0x218; // int32
            public const nint m_BoundingBoxMin = 0x21C; // Vector
            public const nint m_BoundingBoxMax = 0x228; // Vector
            public const nint m_flDepthSortBias = 0x234; // float32
            public const nint m_nSortOverridePositionCP = 0x238; // int32
            public const nint m_bInfiniteBounds = 0x23C; // bool
            public const nint m_bEnableNamedValues = 0x23D; // bool
            public const nint m_NamedValueDomain = 0x240; // CUtlString
            public const nint m_NamedValueLocals = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
            public const nint m_ConstantColor = 0x260; // Color
            public const nint m_ConstantNormal = 0x264; // Vector
            public const nint m_flConstantRadius = 0x270; // float32
            public const nint m_flConstantRotation = 0x274; // float32
            public const nint m_flConstantRotationSpeed = 0x278; // float32
            public const nint m_flConstantLifespan = 0x27C; // float32
            public const nint m_nConstantSequenceNumber = 0x280; // int32
            public const nint m_nConstantSequenceNumber1 = 0x284; // int32
            public const nint m_nSnapshotControlPoint = 0x288; // int32
            public const nint m_hSnapshot = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_pszCullReplacementName = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flCullRadius = 0x2A0; // float32
            public const nint m_flCullFillCost = 0x2A4; // float32
            public const nint m_nCullControlPoint = 0x2A8; // int32
            public const nint m_hFallback = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nFallbackMaxCount = 0x2B8; // int32
            public const nint m_hLowViolenceDef = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_hReferenceReplacement = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flPreSimulationTime = 0x2D0; // float32
            public const nint m_flStopSimulationAfterTime = 0x2D4; // float32
            public const nint m_flMaximumTimeStep = 0x2D8; // float32
            public const nint m_flMaximumSimTime = 0x2DC; // float32
            public const nint m_flMinimumSimTime = 0x2E0; // float32
            public const nint m_flMinimumTimeStep = 0x2E4; // float32
            public const nint m_nMinimumFrames = 0x2E8; // int32
            public const nint m_nMinCPULevel = 0x2EC; // int32
            public const nint m_nMinGPULevel = 0x2F0; // int32
            public const nint m_flNoDrawTimeToGoToSleep = 0x2F4; // float32
            public const nint m_flMaxDrawDistance = 0x2F8; // float32
            public const nint m_flStartFadeDistance = 0x2FC; // float32
            public const nint m_flMaxCreationDistance = 0x300; // float32
            public const nint m_nAggregationMinAvailableParticles = 0x304; // int32
            public const nint m_flAggregateRadius = 0x308; // float32
            public const nint m_bShouldBatch = 0x30C; // bool
            public const nint m_bShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
            public const nint m_bShouldHitboxesFallbackToSnapshot = 0x30E; // bool
            public const nint m_bShouldHitboxesFallbackToCollisionHulls = 0x30F; // bool
            public const nint m_nViewModelEffect = 0x310; // InheritableBoolType_t
            public const nint m_bScreenSpaceEffect = 0x314; // bool
            public const nint m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
            public const nint m_nSkipRenderControlPoint = 0x320; // int32
            public const nint m_nAllowRenderControlPoint = 0x324; // int32
            public const nint m_bShouldSort = 0x328; // bool
            public const nint m_controlPointConfigurations = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
        }
        // Parent: C_OP_RemapNamedModelElementEndCap
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelMeshGroupEndCap {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PercentageBetweenTransformsVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B4; // float32
            public const nint m_flInputMax = 0x1B8; // float32
            public const nint m_vecOutputMin = 0x1BC; // Vector
            public const nint m_vecOutputMax = 0x1C8; // Vector
            public const nint m_TransformStart = 0x1D8; // CParticleTransformInput
            public const nint m_TransformEnd = 0x238; // CParticleTransformInput
            public const nint m_nSetMethod = 0x298; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x29C; // bool
            public const nint m_bRadialCheck = 0x29D; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderScreenVelocityRotate {
            public const nint m_flRotateRateDegrees = 0x1FC; // float32
            public const nint m_flForwardDegrees = 0x200; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_UpdateLightSource {
            public const nint m_vColorTint = 0x1B0; // Color
            public const nint m_flBrightnessScale = 0x1B4; // float32
            public const nint m_flRadiusScale = 0x1B8; // float32
            public const nint m_flMinimumLightingRadius = 0x1BC; // float32
            public const nint m_flMaximumLightingRadius = 0x1C0; // float32
            public const nint m_flPositionDampingConstant = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinBox {
            public const nint m_vecMin = 0x1B8; // CPerParticleVecInput
            public const nint m_vecMax = 0x7E8; // CPerParticleVecInput
            public const nint m_nControlPointNumber = 0xE18; // int32
            public const nint m_bLocalSpace = 0xE1C; // bool
            public const nint m_randomnessParameters = 0xE20; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ChooseRandomChildrenInGroup {
            public const nint m_nChildGroupID = 0x1B4; // int32
            public const nint m_flNumberOfChildren = 0x1B8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 33
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ControlpointLight {
            public const nint m_flScale = 0x1B0; // float32
            public const nint m_nControlPoint1 = 0x640; // int32
            public const nint m_nControlPoint2 = 0x644; // int32
            public const nint m_nControlPoint3 = 0x648; // int32
            public const nint m_nControlPoint4 = 0x64C; // int32
            public const nint m_vecCPOffset1 = 0x650; // Vector
            public const nint m_vecCPOffset2 = 0x65C; // Vector
            public const nint m_vecCPOffset3 = 0x668; // Vector
            public const nint m_vecCPOffset4 = 0x674; // Vector
            public const nint m_LightFiftyDist1 = 0x680; // float32
            public const nint m_LightZeroDist1 = 0x684; // float32
            public const nint m_LightFiftyDist2 = 0x688; // float32
            public const nint m_LightZeroDist2 = 0x68C; // float32
            public const nint m_LightFiftyDist3 = 0x690; // float32
            public const nint m_LightZeroDist3 = 0x694; // float32
            public const nint m_LightFiftyDist4 = 0x698; // float32
            public const nint m_LightZeroDist4 = 0x69C; // float32
            public const nint m_LightColor1 = 0x6A0; // Color
            public const nint m_LightColor2 = 0x6A4; // Color
            public const nint m_LightColor3 = 0x6A8; // Color
            public const nint m_LightColor4 = 0x6AC; // Color
            public const nint m_bLightType1 = 0x6B0; // bool
            public const nint m_bLightType2 = 0x6B1; // bool
            public const nint m_bLightType3 = 0x6B2; // bool
            public const nint m_bLightType4 = 0x6B3; // bool
            public const nint m_bLightDynamic1 = 0x6B4; // bool
            public const nint m_bLightDynamic2 = 0x6B5; // bool
            public const nint m_bLightDynamic3 = 0x6B6; // bool
            public const nint m_bLightDynamic4 = 0x6B7; // bool
            public const nint m_bUseNormal = 0x6B8; // bool
            public const nint m_bUseHLambert = 0x6B9; // bool
            public const nint m_bClampLowerRange = 0x6BE; // bool
            public const nint m_bClampUpperRange = 0x6BF; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VectorFieldSnapshot {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_nAttributeToWrite = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1B8; // int32
            public const nint m_flInterpolation = 0x1C0; // CPerParticleFloatInput
            public const nint m_vecScale = 0x310; // CPerParticleVecInput
            public const nint m_flBoundaryDampening = 0x940; // float32
            public const nint m_bSetVelocity = 0x944; // bool
            public const nint m_bLockToSurface = 0x945; // bool
            public const nint m_flGridSpacing = 0x948; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CylindricalDistanceToTransform {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
            public const nint m_TransformStart = 0x6F8; // CParticleTransformInput
            public const nint m_TransformEnd = 0x758; // CParticleTransformInput
            public const nint m_nSetMethod = 0x7B8; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x7BC; // bool
            public const nint m_bAdditive = 0x7BD; // bool
            public const nint m_bCapsule = 0x7BE; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionPlaceOnGround {
            public const nint m_flOffset = 0x1B8; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x308; // CPerParticleFloatInput
            public const nint m_CollisionGroupName = 0x458; // char[128]
            public const nint m_nTraceSet = 0x4D8; // ParticleTraceSet_t
            public const nint m_nTraceMissBehavior = 0x4E8; // ParticleTraceMissBehavior_t
            public const nint m_bIncludeWater = 0x4EC; // bool
            public const nint m_bSetNormal = 0x4ED; // bool
            public const nint m_bSetPXYZOnly = 0x4EE; // bool
            public const nint m_bTraceAlongNormal = 0x4EF; // bool
            public const nint m_bOffsetonColOnly = 0x4F0; // bool
            public const nint m_flOffsetByRadiusFactor = 0x4F4; // float32
            public const nint m_nPreserveOffsetCP = 0x4F8; // int32
            public const nint m_nIgnoreCP = 0x4FC; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomScalar {
            public const nint m_flMin = 0x1B4; // float32
            public const nint m_flMax = 0x1B8; // float32
            public const nint m_flExponent = 0x1BC; // float32
            public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderPostProcessing {
            public const nint m_flPostProcessStrength = 0x200; // CPerParticleFloatInput
            public const nint m_hPostTexture = 0x350; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_nPriority = 0x358; // ParticlePostProcessPriorityGroup_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WorldTraceConstraint {
            public const nint m_nCP = 0x1B0; // int32
            public const nint m_vecCpOffset = 0x1B4; // Vector
            public const nint m_nCollisionMode = 0x1C0; // ParticleCollisionMode_t
            public const nint m_nCollisionModeMin = 0x1C4; // ParticleCollisionMode_t
            public const nint m_nTraceSet = 0x1C8; // ParticleTraceSet_t
            public const nint m_CollisionGroupName = 0x1CC; // char[128]
            public const nint m_bWorldOnly = 0x24C; // bool
            public const nint m_bBrushOnly = 0x24D; // bool
            public const nint m_bIncludeWater = 0x24E; // bool
            public const nint m_nIgnoreCP = 0x250; // int32
            public const nint m_flCpMovementTolerance = 0x254; // float32
            public const nint m_flRetestRate = 0x258; // float32
            public const nint m_flTraceTolerance = 0x25C; // float32
            public const nint m_flCollisionConfirmationSpeed = 0x260; // float32
            public const nint m_nMaxTracesPerFrame = 0x264; // float32
            public const nint m_flRadiusScale = 0x268; // CPerParticleFloatInput
            public const nint m_flBounceAmount = 0x3B8; // CPerParticleFloatInput
            public const nint m_flSlideAmount = 0x508; // CPerParticleFloatInput
            public const nint m_flRandomDirScale = 0x658; // CPerParticleFloatInput
            public const nint m_bDecayBounce = 0x7A8; // bool
            public const nint m_bKillonContact = 0x7A9; // bool
            public const nint m_flMinSpeed = 0x7AC; // float32
            public const nint m_bSetNormal = 0x7B0; // bool
            public const nint m_nStickOnCollisionField = 0x7B4; // ParticleAttributeIndex_t
            public const nint m_flStopSpeed = 0x7B8; // CPerParticleFloatInput
            public const nint m_nEntityStickDataField = 0x908; // ParticleAttributeIndex_t
            public const nint m_nEntityStickNormalField = 0x90C; // ParticleAttributeIndex_t
        }
        // Parent: CParticleVecInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionVecInput {
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderBlobs {
            public const nint m_cubeWidth = 0x200; // CParticleCollectionRendererFloatInput
            public const nint m_cutoffRadius = 0x350; // CParticleCollectionRendererFloatInput
            public const nint m_renderRadius = 0x4A0; // CParticleCollectionRendererFloatInput
            public const nint m_nVertexCountKb = 0x5F0; // uint32
            public const nint m_nIndexCountKb = 0x5F4; // uint32
            public const nint m_nScaleCP = 0x5F8; // int32
            public const nint m_MaterialVars = 0x600; // CUtlVector<MaterialVariable_t>
            public const nint m_hMaterial = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateScalar {
            public const nint m_RateMin = 0x1B0; // float32
            public const nint m_RateMax = 0x1B4; // float32
            public const nint m_FrequencyMin = 0x1B8; // float32
            public const nint m_FrequencyMax = 0x1BC; // float32
            public const nint m_nField = 0x1C0; // ParticleAttributeIndex_t
            public const nint m_bProportional = 0x1C4; // bool
            public const nint m_bProportionalOp = 0x1C5; // bool
            public const nint m_flStartTime_min = 0x1C8; // float32
            public const nint m_flStartTime_max = 0x1CC; // float32
            public const nint m_flEndTime_min = 0x1D0; // float32
            public const nint m_flEndTime_max = 0x1D4; // float32
            public const nint m_flOscMult = 0x1D8; // float32
            public const nint m_flOscAdd = 0x1DC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeOut {
            public const nint m_flFadeOutTimeMin = 0x1B0; // float32
            public const nint m_flFadeOutTimeMax = 0x1B4; // float32
            public const nint m_flFadeOutTimeExp = 0x1B8; // float32
            public const nint m_flFadeBias = 0x1BC; // float32
            public const nint m_bProportional = 0x1F0; // bool
            public const nint m_bEaseInAndOut = 0x1F1; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomSequence {
            public const nint m_nSequenceMin = 0x1B4; // int32
            public const nint m_nSequenceMax = 0x1B8; // int32
            public const nint m_bShuffle = 0x1BC; // bool
            public const nint m_bLinear = 0x1BD; // bool
            public const nint m_WeightedList = 0x1C0; // CUtlVector<SequenceWeightedList_t>
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarSplineSimple {
            public const nint m_Rate = 0x1B0; // float32
            public const nint m_flStartTime = 0x1B4; // float32
            public const nint m_flEndTime = 0x1B8; // float32
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_bEaseOut = 0x1E4; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceCull {
            public const nint m_nControlPoint = 0x1B4; // int32
            public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x308; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CollideWithParentParticles {
            public const nint m_flParentRadiusScale = 0x1B0; // CPerParticleFloatInput
            public const nint m_flRadiusScale = 0x300; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromVectorFieldSnapshot {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nLocalSpaceCP = 0x1B8; // int32
            public const nint m_nWeightUpdateCP = 0x1BC; // int32
            public const nint m_bUseVerticalVelocity = 0x1C0; // bool
            public const nint m_vecScale = 0x1C8; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetVectorAttributeToVectorExpression {
            public const nint m_nExpression = 0x1B0; // VectorExpressionType_t
            public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
            public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
            public const nint m_nOutputField = 0xE18; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0xE1C; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0xE20; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_AddVectorToVector {
            public const nint m_vecScale = 0x1B4; // Vector
            public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x1C4; // ParticleAttributeIndex_t
            public const nint m_vOffsetMin = 0x1C8; // Vector
            public const nint m_vOffsetMax = 0x1D4; // Vector
            public const nint m_randomnessParameters = 0x1E0; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialVisibilityScalar {
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformOrientationToYaw {
            public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x210; // ParticleAttributeIndex_t
            public const nint m_flRotOffset = 0x214; // float32
            public const nint m_flSpinStrength = 0x218; // float32
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderStatusEffect {
            public const nint m_pTextureColorWarp = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureDetail2 = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureDiffuseWarp = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureFresnelColorWarp = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureFresnelWarp = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureSpecularWarp = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureEnvMap = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: CParticleFunctionForce
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RandomForce {
            public const nint m_MinForce = 0x1BC; // Vector
            public const nint m_MaxForce = 0x1C8; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapParticleCountOnScalarEndCap {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1B4; // int32
            public const nint m_nInputMax = 0x1B8; // int32
            public const nint m_flOutputMin = 0x1BC; // float32
            public const nint m_flOutputMax = 0x1C0; // float32
            public const nint m_bBackwards = 0x1C4; // bool
            public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewState_t {
            public const nint m_previewModel = 0x0; // CUtlString
            public const nint m_nModSpecificData = 0x8; // uint32
            public const nint m_groundType = 0xC; // PetGroundType_t
            public const nint m_sequenceName = 0x10; // CUtlString
            public const nint m_nFireParticleOnSequenceFrame = 0x18; // int32
            public const nint m_hitboxSetName = 0x20; // CUtlString
            public const nint m_materialGroupName = 0x28; // CUtlString
            public const nint m_vecBodyGroups = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
            public const nint m_flPlaybackSpeed = 0x48; // float32
            public const nint m_flParticleSimulationRate = 0x4C; // float32
            public const nint m_bShouldDrawHitboxes = 0x50; // bool
            public const nint m_bShouldDrawAttachments = 0x51; // bool
            public const nint m_bShouldDrawAttachmentNames = 0x52; // bool
            public const nint m_bShouldDrawControlPointAxes = 0x53; // bool
            public const nint m_bAnimationNonLooping = 0x54; // bool
            public const nint m_vecPreviewGravity = 0x58; // Vector
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LocalAccelerationForce {
            public const nint m_nCP = 0x1BC; // int32
            public const nint m_nScaleCP = 0x1C0; // int32
            public const nint m_vecAccel = 0x1C8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ModelCull {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_bBoundBox = 0x1B4; // bool
            public const nint m_bCullOutside = 0x1B5; // bool
            public const nint m_bUseBones = 0x1B6; // bool
            public const nint m_HitboxSetName = 0x1B7; // char[128]
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFloat {
            public const nint m_InputValue = 0x1B0; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x300; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x304; // ParticleSetMethod_t
            public const nint m_Lerp = 0x308; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapTransformToVector {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_vInputMin = 0x1B8; // Vector
            public const nint m_vInputMax = 0x1C4; // Vector
            public const nint m_vOutputMin = 0x1D0; // Vector
            public const nint m_vOutputMax = 0x1DC; // Vector
            public const nint m_TransformInput = 0x1E8; // CParticleTransformInput
            public const nint m_LocalSpaceTransform = 0x248; // CParticleTransformInput
            public const nint m_flStartTime = 0x2A8; // float32
            public const nint m_flEndTime = 0x2AC; // float32
            public const nint m_nSetMethod = 0x2B0; // ParticleSetMethod_t
            public const nint m_bOffset = 0x2B4; // bool
            public const nint m_bAccelerate = 0x2B5; // bool
            public const nint m_flRemapBias = 0x2B8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SDFLighting {
            public const nint m_vLightingDir = 0x1B0; // Vector
            public const nint m_vTint_0 = 0x1BC; // Vector
            public const nint m_vTint_1 = 0x1C8; // Vector
        }
        // Parent: C_OP_RemapDistanceToLineSegmentBase
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDistanceToLineSegmentToScalar {
            public const nint m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            public const nint m_flMinOutputValue = 0x1C8; // float32
            public const nint m_flMaxOutputValue = 0x1CC; // float32
        }
        // Parent: CParticleFloatInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleRemapFloatInput {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVectortoCP {
            public const nint m_nOutControlPointNumber = 0x1B0; // int32
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nParticleNumber = 0x1B8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFromCPSnapshot {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_nAttributeToRead = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nAttributeToWrite = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1BC; // int32
            public const nint m_bRandom = 0x1C0; // bool
            public const nint m_bReverse = 0x1C1; // bool
            public const nint m_nRandomSeed = 0x1C4; // int32
            public const nint m_nSnapShotStartPoint = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_nSnapShotIncrement = 0x318; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0x468; // CPerParticleFloatInput
            public const nint m_bSubSample = 0x5B8; // bool
            public const nint m_bPrev = 0x5B9; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceBetweenCPsToCP {
            public const nint m_nStartCP = 0x1B4; // int32
            public const nint m_nEndCP = 0x1B8; // int32
            public const nint m_nOutputCP = 0x1BC; // int32
            public const nint m_nOutputCPField = 0x1C0; // int32
            public const nint m_bSetOnce = 0x1C4; // bool
            public const nint m_flInputMin = 0x1C8; // float32
            public const nint m_flInputMax = 0x1CC; // float32
            public const nint m_flOutputMin = 0x1D0; // float32
            public const nint m_flOutputMax = 0x1D4; // float32
            public const nint m_flMaxTraceLength = 0x1D8; // float32
            public const nint m_flLOSScale = 0x1DC; // float32
            public const nint m_bLOS = 0x1E0; // bool
            public const nint m_CollisionGroupName = 0x1E1; // char[128]
            public const nint m_nTraceSet = 0x264; // ParticleTraceSet_t
            public const nint m_nSetParent = 0x268; // ParticleParentSetMode_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToHand {
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_nHand = 0x1B8; // int32
            public const nint m_vecCP1Pos = 0x1BC; // Vector
            public const nint m_bOrientToHand = 0x1C8; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistanceToPath {
            public const nint m_fMinDistance = 0x1B0; // float32
            public const nint m_flMaxDistance0 = 0x1B4; // float32
            public const nint m_flMaxDistanceMid = 0x1B8; // float32
            public const nint m_flMaxDistance1 = 0x1BC; // float32
            public const nint m_PathParameters = 0x1C0; // CPathParameters
            public const nint m_flTravelTime = 0x200; // float32
            public const nint m_nFieldScale = 0x204; // ParticleAttributeIndex_t
            public const nint m_nManualTField = 0x208; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceCull {
            public const nint m_nControlPoint = 0x1B0; // int32
            public const nint m_vecPointOffset = 0x1B4; // Vector
            public const nint m_flDistance = 0x1C0; // float32
            public const nint m_bCullInside = 0x1C4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSDFDistanceToScalarAttribute {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nVectorFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flMinDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flMaxDistance = 0x308; // CParticleCollectionFloatInput
            public const nint m_flValueBelowMin = 0x458; // CParticleCollectionFloatInput
            public const nint m_flValueAtMin = 0x5A8; // CParticleCollectionFloatInput
            public const nint m_flValueAtMax = 0x6F8; // CParticleCollectionFloatInput
            public const nint m_flValueAboveMax = 0x848; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateAlongPath {
            public const nint m_fMaxDistance = 0x1B4; // float32
            public const nint m_PathParams = 0x1C0; // CPathParameters
            public const nint m_bUseRandomCPs = 0x200; // bool
            public const nint m_vEndOffset = 0x204; // Vector
            public const nint m_bSaveOffset = 0x210; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointsToModelParticles {
            public const nint m_HitboxSetName = 0x1B0; // char[128]
            public const nint m_AttachmentName = 0x230; // char[128]
            public const nint m_nFirstControlPoint = 0x2B0; // int32
            public const nint m_nNumControlPoints = 0x2B4; // int32
            public const nint m_nFirstSourcePoint = 0x2B8; // int32
            public const nint m_bSkin = 0x2BC; // bool
            public const nint m_bAttachment = 0x2BD; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ColorInterpolateRandom {
            public const nint m_ColorFadeMin = 0x1B0; // Color
            public const nint m_ColorFadeMax = 0x1CC; // Color
            public const nint m_flFadeStartTime = 0x1DC; // float32
            public const nint m_flFadeEndTime = 0x1E0; // float32
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_bEaseInOut = 0x1E8; // bool
        }
        // Parent: C_INIT_RemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelSequenceToScalar {
        }
        // Parent: C_OP_RenderPoints
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderLights {
            public const nint m_flAnimationRate = 0x208; // float32
            public const nint m_nAnimationType = 0x20C; // AnimationType_t
            public const nint m_bAnimateInFPS = 0x210; // bool
            public const nint m_flMinSize = 0x214; // float32
            public const nint m_flMaxSize = 0x218; // float32
            public const nint m_flStartFadeSize = 0x21C; // float32
            public const nint m_flEndFadeSize = 0x220; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayClampCount {
            public const nint m_nCount = 0x1B0; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRandomNumberGeneratorParameters {
            public const nint m_bDistributeEvenly = 0x0; // bool
            public const nint m_nSeed = 0x4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ColorLitPerParticle {
            public const nint m_ColorMin = 0x1CC; // Color
            public const nint m_ColorMax = 0x1D0; // Color
            public const nint m_TintMin = 0x1D4; // Color
            public const nint m_TintMax = 0x1D8; // Color
            public const nint m_flTintPerc = 0x1DC; // float32
            public const nint m_nTintBlendMode = 0x1E0; // ParticleColorBlendMode_t
            public const nint m_flLightAmplification = 0x1E4; // float32
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderPoints {
            public const nint m_hMaterial = 0x200; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetAttributeToScalarExpression {
            public const nint m_nExpression = 0x1B4; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInput2 = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x5AC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnGrid {
            public const nint m_nXCount = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nYCount = 0x308; // CParticleCollectionFloatInput
            public const nint m_nZCount = 0x458; // CParticleCollectionFloatInput
            public const nint m_nXSpacing = 0x5A8; // CParticleCollectionFloatInput
            public const nint m_nYSpacing = 0x6F8; // CParticleCollectionFloatInput
            public const nint m_nZSpacing = 0x848; // CParticleCollectionFloatInput
            public const nint m_nControlPointNumber = 0x998; // int32
            public const nint m_bLocalSpace = 0x99C; // bool
            public const nint m_bCenter = 0x99D; // bool
            public const nint m_bHollow = 0x99E; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampCPLinearRandom {
            public const nint m_nOutControlPointNumber = 0x1B4; // int32
            public const nint m_vecRateMin = 0x1B8; // Vector
            public const nint m_vecRateMax = 0x1C4; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VelocityMatchingForce {
            public const nint m_flDirScale = 0x1B0; // float32
            public const nint m_flSpdScale = 0x1B4; // float32
            public const nint m_nCPBroadcast = 0x1B8; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomAlphaWindowThreshold {
            public const nint m_flMin = 0x1B4; // float32
            public const nint m_flMax = 0x1B8; // float32
            public const nint m_flExponent = 0x1BC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnModelAtHeight {
            public const nint m_bUseBones = 0x1B4; // bool
            public const nint m_bForceZ = 0x1B5; // bool
            public const nint m_nControlPointNumber = 0x1B8; // int32
            public const nint m_nHeightCP = 0x1BC; // int32
            public const nint m_bUseWaterHeight = 0x1C0; // bool
            public const nint m_flDesiredHeight = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_vecHitBoxScale = 0x318; // CParticleCollectionVecInput
            public const nint m_vecDirectionBias = 0x948; // CParticleCollectionVecInput
            public const nint m_nBiasType = 0xF78; // ParticleHitboxBiasType_t
            public const nint m_bLocalCoords = 0xF7C; // bool
            public const nint m_bPreferMovingBoxes = 0xF7D; // bool
            public const nint m_HitboxSetName = 0xF7E; // char[128]
            public const nint m_flHitboxVelocityScale = 0x1000; // CParticleCollectionFloatInput
            public const nint m_flMaxBoneVelocity = 0x1150; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleVariableRef {
            public const nint m_variableName = 0x0; // CKV3MemberNameWithStorage
            public const nint m_variableType = 0x38; // PulseValueType_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RestartAfterDuration {
            public const nint m_flDurationMin = 0x1B0; // float32
            public const nint m_flDurationMax = 0x1B4; // float32
            public const nint m_nCP = 0x1B8; // int32
            public const nint m_nCPField = 0x1BC; // int32
            public const nint m_nChildGroupID = 0x1C0; // int32
            public const nint m_bOnlyChildren = 0x1C4; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderClothForce {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVisibilityScalar {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_flRadiusScale = 0x1C8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSequentialPathV2 {
            public const nint m_fMaxDistance = 0x1B8; // CPerParticleFloatInput
            public const nint m_flNumToAssign = 0x308; // CParticleCollectionFloatInput
            public const nint m_bLoop = 0x458; // bool
            public const nint m_bCPPairs = 0x459; // bool
            public const nint m_bSaveOffset = 0x45A; // bool
            public const nint m_PathParams = 0x460; // CPathParameters
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VecInputMaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_vecInput = 0x8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialDirectionToTransformToVector {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x21C; // float32
            public const nint m_flOffsetRot = 0x220; // float32
            public const nint m_vecOffsetAxis = 0x224; // Vector
            public const nint m_bNormalize = 0x230; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_OP_LockToSavedSequentialPathV2 {
            public const nint m_flFadeStart = 0x1B0; // float32
            public const nint m_flFadeEnd = 0x1B4; // float32
            public const nint m_bCPPairs = 0x1B8; // bool
            public const nint m_PathParams = 0x1C0; // CPathParameters
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NormalLock {
            public const nint m_nControlPointNumber = 0x1B0; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapTransformOrientationToRotations {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_vecRotation = 0x218; // Vector
            public const nint m_bUseQuat = 0x224; // bool
            public const nint m_bWriteNormal = 0x225; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Cull {
            public const nint m_flCullPerc = 0x1B0; // float32
            public const nint m_flCullStart = 0x1B4; // float32
            public const nint m_flCullEnd = 0x1B8; // float32
            public const nint m_flCullExp = 0x1BC; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomYawFlip {
            public const nint m_flPercent = 0x1B4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSDFGradientToVectorAttribute {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SequenceWeightedList_t {
            public const nint m_nSequence = 0x0; // int32
            public const nint m_flRelativeWeight = 0x4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ReadFromNeighboringParticle {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1B8; // int32
            public const nint m_DistanceCheck = 0x1C0; // CPerParticleFloatInput
            public const nint m_flInterpolation = 0x310; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderText {
            public const nint m_OutlineColor = 0x1FA; // Color
            public const nint m_DefaultText = 0x200; // CUtlString
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpToInitialPosition {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_flInterpolation = 0x1B8; // CPerParticleFloatInput
            public const nint m_nCacheField = 0x308; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x310; // CParticleCollectionFloatInput
            public const nint m_vecScale = 0x460; // CParticleCollectionVecInput
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRotation {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpEndCapVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutput = 0x1B4; // Vector
            public const nint m_flLerpTime = 0x1C0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VelocityDecay {
            public const nint m_flMinVelocity = 0x1B0; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPOrientationToPointAtCP {
            public const nint m_nInputCP = 0x1B4; // int32
            public const nint m_nOutputCP = 0x1B8; // int32
            public const nint m_flInterpolation = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_b2DOrientation = 0x310; // bool
            public const nint m_bAvoidSingularity = 0x311; // bool
            public const nint m_bPointAway = 0x312; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LockToPointList {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
            public const nint m_bPlaceAlongPath = 0x1D0; // bool
            public const nint m_bClosedLoop = 0x1D1; // bool
            public const nint m_nNumPointsAlongPath = 0x1D4; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementPlaceOnGround {
            public const nint m_flOffset = 0x1B0; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x300; // float32
            public const nint m_flTolerance = 0x304; // float32
            public const nint m_flTraceOffset = 0x308; // float32
            public const nint m_flLerpRate = 0x30C; // float32
            public const nint m_CollisionGroupName = 0x310; // char[128]
            public const nint m_nTraceSet = 0x390; // ParticleTraceSet_t
            public const nint m_nRefCP1 = 0x394; // int32
            public const nint m_nRefCP2 = 0x398; // int32
            public const nint m_nLerpCP = 0x39C; // int32
            public const nint m_nTraceMissBehavior = 0x3A8; // ParticleTraceMissBehavior_t
            public const nint m_bIncludeShotHull = 0x3AC; // bool
            public const nint m_bIncludeWater = 0x3AD; // bool
            public const nint m_bSetNormal = 0x3B0; // bool
            public const nint m_bScaleOffset = 0x3B1; // bool
            public const nint m_nPreserveOffsetCP = 0x3B4; // int32
            public const nint m_nIgnoreCP = 0x3B8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPOrientationToDirection {
            public const nint m_nInputControlPoint = 0x1B0; // int32
            public const nint m_nOutputControlPoint = 0x1B4; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCrossProductOfTwoVectorsToVector {
            public const nint m_InputVec1 = 0x1B0; // CPerParticleVecInput
            public const nint m_InputVec2 = 0x7E0; // CPerParticleVecInput
            public const nint m_nFieldOutput = 0xE10; // ParticleAttributeIndex_t
            public const nint m_bNormalize = 0xE14; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformOrientationToRotations {
            public const nint m_TransformInput = 0x1B0; // CParticleTransformInput
            public const nint m_vecRotation = 0x210; // Vector
            public const nint m_bUseQuat = 0x21C; // bool
            public const nint m_bWriteNormal = 0x21D; // bool
        }
        // Parent: CGeneralRandomRotation
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRotationSpeed {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_OP_InheritFromParentParticlesV2 {
            public const nint m_flScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1B8; // int32
            public const nint m_bRandomDistribution = 0x1BC; // bool
            public const nint m_nMissingParentBehavior = 0x1C0; // MissingParentInheritBehavior_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomSecondSequence {
            public const nint m_nSequenceMin = 0x1B4; // int32
            public const nint m_nSequenceMax = 0x1B8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFloatCollection {
            public const nint m_InputValue = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_nOutputField = 0x300; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x304; // ParticleSetMethod_t
            public const nint m_Lerp = 0x308; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinition_t {
            public const nint m_nControlPoint = 0x0; // int32
            public const nint m_bLocalCoords = 0x4; // bool
            public const nint m_vOffset = 0x8; // Vector
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointPositionToRandomActiveCP {
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_nHeadLocationMin = 0x1B8; // int32
            public const nint m_nHeadLocationMax = 0x1BC; // int32
            public const nint m_flResetRate = 0x1C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Diffusion {
            public const nint m_flRadiusScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nVoxelGridResolution = 0x1B8; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_AgeNoise {
            public const nint m_bAbsVal = 0x1B4; // bool
            public const nint m_bAbsValInv = 0x1B5; // bool
            public const nint m_flOffset = 0x1B8; // float32
            public const nint m_flAgeMin = 0x1BC; // float32
            public const nint m_flAgeMax = 0x1C0; // float32
            public const nint m_flNoiseScale = 0x1C4; // float32
            public const nint m_flNoiseScaleLoc = 0x1C8; // float32
            public const nint m_vecOffsetLoc = 0x1CC; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVectorComponentToScalar {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nComponent = 0x1B8; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralRandomRotation {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flDegrees = 0x1B8; // float32
            public const nint m_flDegreesMin = 0x1BC; // float32
            public const nint m_flDegreesMax = 0x1C0; // float32
            public const nint m_flRotationRandExponent = 0x1C4; // float32
            public const nint m_bRandomlyFlipDirection = 0x1C8; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceBetweenVecs {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecPoint1 = 0x1B8; // CPerParticleVecInput
            public const nint m_vecPoint2 = 0x7E8; // CPerParticleVecInput
            public const nint m_flInputMin = 0xE18; // CPerParticleFloatInput
            public const nint m_flInputMax = 0xF68; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x10B8; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x1208; // CPerParticleFloatInput
            public const nint m_nSetMethod = 0x1358; // ParticleSetMethod_t
            public const nint m_bDeltaTime = 0x135C; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DampenToCP {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_flRange = 0x1B4; // float32
            public const nint m_flScale = 0x1B8; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CalculateVectorAttribute {
            public const nint m_vStartValue = 0x1B0; // Vector
            public const nint m_nFieldInput1 = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_flInputScale1 = 0x1C0; // float32
            public const nint m_nFieldInput2 = 0x1C4; // ParticleAttributeIndex_t
            public const nint m_flInputScale2 = 0x1C8; // float32
            public const nint m_nControlPointInput1 = 0x1CC; // ControlPointReference_t
            public const nint m_flControlPointScale1 = 0x1E0; // float32
            public const nint m_nControlPointInput2 = 0x1E4; // ControlPointReference_t
            public const nint m_flControlPointScale2 = 0x1F8; // float32
            public const nint m_nFieldOutput = 0x1FC; // ParticleAttributeIndex_t
            public const nint m_vFinalOutputScale = 0x200; // Vector
        }
        // Parent: CParticleInput
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        // MParticleCustomFieldDefaultValue
        public static class CParticleTransformInput {
            public const nint m_nType = 0xC; // ParticleTransformType_t
            public const nint m_NamedValue = 0x10; // CParticleNamedValueRef
            public const nint m_bFollowNamedValue = 0x50; // bool
            public const nint m_bSupportsDisabled = 0x51; // bool
            public const nint m_bUseOrientation = 0x52; // bool
            public const nint m_nControlPoint = 0x54; // int32
            public const nint m_nControlPointRangeMax = 0x58; // int32
            public const nint m_flEndCPGrowthTime = 0x5C; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LockToBone {
            public const nint m_modelInput = 0x1B0; // CParticleModelInput
            public const nint m_transformInput = 0x208; // CParticleTransformInput
            public const nint m_flLifeTimeFadeStart = 0x268; // float32
            public const nint m_flLifeTimeFadeEnd = 0x26C; // float32
            public const nint m_flJumpThreshold = 0x270; // float32
            public const nint m_flPrevPosScale = 0x274; // float32
            public const nint m_HitboxSetName = 0x278; // char[128]
            public const nint m_bRigid = 0x2F8; // bool
            public const nint m_bUseBones = 0x2F9; // bool
            public const nint m_nFieldOutput = 0x2FC; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputPrev = 0x300; // ParticleAttributeIndex_t
            public const nint m_nRotationSetType = 0x304; // ParticleRotationLockType_t
            public const nint m_bRigidRotationLock = 0x308; // bool
            public const nint m_vecRotation = 0x310; // CPerParticleVecInput
            public const nint m_flRotLerp = 0x940; // CPerParticleFloatInput
        }
        // Parent: C_OP_RemapNamedModelElementOnceTimed
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelBodyPartOnceTimed {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementMaintainOffset {
            public const nint m_vecOffset = 0x1B0; // Vector
            public const nint m_nCP = 0x1BC; // int32
            public const nint m_bRadiusScale = 0x1C0; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetVec {
            public const nint m_InputValue = 0x1B0; // CPerParticleVecInput
            public const nint m_nOutputField = 0x7E0; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x7E4; // ParticleSetMethod_t
            public const nint m_Lerp = 0x7E8; // CPerParticleFloatInput
            public const nint m_bNormalizedOutput = 0x938; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromParentParticles {
            public const nint m_flVelocityScale = 0x1B4; // float32
            public const nint m_flIncrement = 0x1B8; // float32
            public const nint m_bRandomDistribution = 0x1BC; // bool
            public const nint m_nRandomSeed = 0x1C0; // int32
            public const nint m_bSubFrame = 0x1C4; // bool
        }
        // Parent: None
        // Fields count: 0
        public static class IParticleEffect {
        }
        // Parent: C_INIT_RandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelBodyPart {
        }
        // Parent: None
        // Fields count: 1
        public static class PARTICLE_EHANDLE__ {
            public const nint unused = 0x0; // int32
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderOmni2Light {
            public const nint m_nLightType = 0x1FC; // ParticleOmni2LightTypeChoiceList_t
            public const nint m_vColorBlend = 0x200; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x830; // ParticleColorBlendType_t
            public const nint m_nBrightnessUnit = 0x834; // ParticleLightUnitChoiceList_t
            public const nint m_flBrightnessLumens = 0x838; // CPerParticleFloatInput
            public const nint m_flBrightnessCandelas = 0x988; // CPerParticleFloatInput
            public const nint m_bCastShadows = 0xAD8; // bool
            public const nint m_flLuminaireRadius = 0xAE0; // CPerParticleFloatInput
            public const nint m_flSkirt = 0xC30; // CPerParticleFloatInput
            public const nint m_flRange = 0xD80; // CPerParticleFloatInput
            public const nint m_flInnerConeAngle = 0xED0; // CPerParticleFloatInput
            public const nint m_flOuterConeAngle = 0x1020; // CPerParticleFloatInput
            public const nint m_hLightCookie = 0x1170; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bSphericalCookie = 0x1178; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConnectParentParticleToNearest {
            public const nint m_nFirstControlPoint = 0x1B0; // int32
            public const nint m_nSecondControlPoint = 0x1B4; // int32
            public const nint m_bUseRadius = 0x1B8; // bool
            public const nint m_flRadiusScale = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_flParentRadiusScale = 0x310; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFloatInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CPerParticleFloatInput {
        }
        // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitSkinnedPositionFromCPSnapshot {
            public const nint m_nSnapshotControlPointNumber = 0x1B4; // int32
            public const nint m_nControlPointNumber = 0x1B8; // int32
            public const nint m_bRandom = 0x1BC; // bool
            public const nint m_nRandomSeed = 0x1C0; // int32
            public const nint m_bRigid = 0x1C4; // bool
            public const nint m_bSetNormal = 0x1C5; // bool
            public const nint m_bIgnoreDt = 0x1C6; // bool
            public const nint m_flMinNormalVelocity = 0x1C8; // float32
            public const nint m_flMaxNormalVelocity = 0x1CC; // float32
            public const nint m_nIndexType = 0x1D0; // SnapshotIndexType_t
            public const nint m_flReadIndex = 0x1D8; // CPerParticleFloatInput
            public const nint m_flIncrement = 0x328; // float32
            public const nint m_nFullLoopIncrement = 0x32C; // int32
            public const nint m_nSnapShotStartPoint = 0x330; // int32
            public const nint m_flBoneVelocity = 0x334; // float32
            public const nint m_flBoneVelocityMax = 0x338; // float32
            public const nint m_bCopyColor = 0x33C; // bool
            public const nint m_bCopyAlpha = 0x33D; // bool
            public const nint m_bSetRadius = 0x33E; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LagCompensation {
            public const nint m_nDesiredVelocityCP = 0x1B0; // int32
            public const nint m_nLatencyCP = 0x1B4; // int32
            public const nint m_nLatencyCPField = 0x1B8; // int32
            public const nint m_nDesiredVelocityCPField = 0x1BC; // int32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CollideWithSelf {
            public const nint m_flRadiusScale = 0x1B0; // CPerParticleFloatInput
            public const nint m_flMinimumSpeed = 0x300; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Noise {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1B4; // float32
            public const nint m_flOutputMax = 0x1B8; // float32
            public const nint m_fl4NoiseScale = 0x1BC; // float32
            public const nint m_bAdditive = 0x1C0; // bool
            public const nint m_flNoiseAnimationTimeScale = 0x1C4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeAndKillForTracers {
            public const nint m_flStartFadeInTime = 0x1B0; // float32
            public const nint m_flEndFadeInTime = 0x1B4; // float32
            public const nint m_flStartFadeOutTime = 0x1B8; // float32
            public const nint m_flEndFadeOutTime = 0x1BC; // float32
            public const nint m_flStartAlpha = 0x1C0; // float32
            public const nint m_flEndAlpha = 0x1C4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ColorAdjustHSL {
            public const nint m_flHueAdjust = 0x1B0; // CPerParticleFloatInput
            public const nint m_flSaturationAdjust = 0x300; // CPerParticleFloatInput
            public const nint m_flLightnessAdjust = 0x450; // CPerParticleFloatInput
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleMassCalculationParameters {
            public const nint m_nMassMode = 0x0; // ParticleMassMode_t
            public const nint m_flRadius = 0x8; // CPerParticleFloatInput
            public const nint m_flNominalRadius = 0x158; // CPerParticleFloatInput
            public const nint m_flScale = 0x2A8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SequenceFromModel {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputAnim = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_nSetMethod = 0x1CC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_AlphaDecay {
            public const nint m_flMinAlpha = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDensityGradientToVectorAttribute {
            public const nint m_flRadiusScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitVec {
            public const nint m_InputValue = 0x1B8; // CPerParticleVecInput
            public const nint m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x7EC; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x7F0; // bool
            public const nint m_bWritePreviousPosition = 0x7F1; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetHitboxToModel {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nForceInModel = 0x1B8; // int32
            public const nint m_bEvenDistribution = 0x1BC; // bool
            public const nint m_nDesiredHitbox = 0x1C0; // int32
            public const nint m_vecHitBoxScale = 0x1C8; // CParticleCollectionVecInput
            public const nint m_vecDirectionBias = 0x7F8; // Vector
            public const nint m_bMaintainHitbox = 0x804; // bool
            public const nint m_bUseBones = 0x805; // bool
            public const nint m_HitboxSetName = 0x806; // char[128]
            public const nint m_flShellSize = 0x888; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementMoveAlongSkinnedCPSnapshot {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_nSnapshotControlPointNumber = 0x1B4; // int32
            public const nint m_bSetNormal = 0x1B8; // bool
            public const nint m_bSetRadius = 0x1B9; // bool
            public const nint m_flInterpolation = 0x1C0; // CPerParticleFloatInput
            public const nint m_flTValue = 0x310; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutput = 0x1B8; // CPerParticleFloatInput
            public const nint m_flStartTime = 0x308; // float32
            public const nint m_flEndTime = 0x30C; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialRepulsionVelocity {
            public const nint m_CollisionGroupName = 0x1B4; // char[128]
            public const nint m_nTraceSet = 0x234; // ParticleTraceSet_t
            public const nint m_vecOutputMin = 0x238; // Vector
            public const nint m_vecOutputMax = 0x244; // Vector
            public const nint m_nControlPointNumber = 0x250; // int32
            public const nint m_bPerParticle = 0x254; // bool
            public const nint m_bTranslate = 0x255; // bool
            public const nint m_bProportional = 0x256; // bool
            public const nint m_flTraceLength = 0x258; // float32
            public const nint m_bPerParticleTR = 0x25C; // bool
            public const nint m_bInherit = 0x25D; // bool
            public const nint m_nChildCP = 0x260; // int32
            public const nint m_nChildGroupID = 0x264; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClampScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x308; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToHMD {
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_vecCP1Pos = 0x1B8; // Vector
            public const nint m_bOrientToHMD = 0x1C4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DifferencePreviousParticle {
            public const nint m_nFieldInput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
            public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1CC; // bool
            public const nint m_bSetPreviousParticle = 0x1CD; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFieldFromVectorExpression {
            public const nint m_nExpression = 0x1B4; // VectorFloatExpressionType_t
            public const nint m_vecInput1 = 0x1B8; // CParticleCollectionVecInput
            public const nint m_vecInput2 = 0x7E8; // CParticleCollectionVecInput
            public const nint m_flOutputRemap = 0xE18; // CParticleRemapFloatInput
            public const nint m_nOutputCP = 0xF68; // int32
            public const nint m_nOutVectorField = 0xF6C; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PercentageBetweenTransforms {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B4; // float32
            public const nint m_flInputMax = 0x1B8; // float32
            public const nint m_flOutputMin = 0x1BC; // float32
            public const nint m_flOutputMax = 0x1C0; // float32
            public const nint m_TransformStart = 0x1C8; // CParticleTransformInput
            public const nint m_TransformEnd = 0x228; // CParticleTransformInput
            public const nint m_nSetMethod = 0x288; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x28C; // bool
            public const nint m_bRadialCheck = 0x28D; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PlaneCull {
            public const nint m_nControlPoint = 0x1B4; // int32
            public const nint m_flDistance = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x308; // bool
        }
        // Parent: C_OP_RemapNamedModelElementEndCap
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelSequenceEndCap {
        }
        // Parent: CParticleCollectionFloatInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionRendererFloatInput {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromCPSnapshot {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nAttributeToRead = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nAttributeToWrite = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1C0; // int32
            public const nint m_bRandom = 0x1C4; // bool
            public const nint m_bReverse = 0x1C5; // bool
            public const nint m_nSnapShotIncrement = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_nManualSnapshotIndex = 0x318; // CPerParticleFloatInput
            public const nint m_nRandomSeed = 0x468; // int32
            public const nint m_bLocalSpaceAngles = 0x46C; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 22
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderCables {
            public const nint m_flRadiusScale = 0x200; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x350; // CParticleCollectionFloatInput
            public const nint m_vecColorScale = 0x4A0; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0xAD0; // ParticleColorBlendType_t
            public const nint m_hMaterial = 0xAD8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nTextureRepetitionMode = 0xAE0; // TextureRepetitionMode_t
            public const nint m_flTextureRepeatsPerSegment = 0xAE8; // CParticleCollectionFloatInput
            public const nint m_flTextureRepeatsCircumference = 0xC38; // CParticleCollectionFloatInput
            public const nint m_flColorMapOffsetV = 0xD88; // CParticleCollectionFloatInput
            public const nint m_flColorMapOffsetU = 0xED8; // CParticleCollectionFloatInput
            public const nint m_flNormalMapOffsetV = 0x1028; // CParticleCollectionFloatInput
            public const nint m_flNormalMapOffsetU = 0x1178; // CParticleCollectionFloatInput
            public const nint m_bDrawCableCaps = 0x12C8; // bool
            public const nint m_flCapRoundness = 0x12CC; // float32
            public const nint m_flCapOffsetAmount = 0x12D0; // float32
            public const nint m_flTessScale = 0x12D4; // float32
            public const nint m_nMinTesselation = 0x12D8; // int32
            public const nint m_nMaxTesselation = 0x12DC; // int32
            public const nint m_nRoundness = 0x12E0; // int32
            public const nint m_LightingTransform = 0x12E8; // CParticleTransformInput
            public const nint m_MaterialFloatVars = 0x1348; // CUtlVector<FloatInputMaterialVariable_t>
            public const nint m_MaterialVecVars = 0x1378; // CUtlVector<VecInputMaterialVariable_t>
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InheritVelocity {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_flVelocityScale = 0x1B8; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToWaterSurface {
            public const nint m_nSourceCP = 0x1B4; // int32
            public const nint m_nDestCP = 0x1B8; // int32
            public const nint m_nFlowCP = 0x1BC; // int32
            public const nint m_nActiveCP = 0x1C0; // int32
            public const nint m_nActiveCPField = 0x1C4; // int32
            public const nint m_flRetestRate = 0x1C8; // CParticleCollectionFloatInput
            public const nint m_bAdaptiveThreshold = 0x318; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionOffset {
            public const nint m_OffsetMin = 0x1B8; // CPerParticleVecInput
            public const nint m_OffsetMax = 0x7E8; // CPerParticleVecInput
            public const nint m_TransformInput = 0xE18; // CParticleTransformInput
            public const nint m_bLocalCoords = 0xE78; // bool
            public const nint m_bProportional = 0xE79; // bool
            public const nint m_randomnessParameters = 0xE7C; // CRandomNumberGeneratorParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_NormalAlignToCP {
            public const nint m_transformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nControlPointAxis = 0x218; // ParticleControlPointAxis_t
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ShapeMatchingConstraint {
            public const nint m_flShapeRestorationTime = 0x1B0; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetChildControlPoints {
            public const nint m_nChildGroupID = 0x1B0; // int32
            public const nint m_nFirstControlPoint = 0x1B4; // int32
            public const nint m_nNumControlPoints = 0x1B8; // int32
            public const nint m_nFirstSourcePoint = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_bReverse = 0x310; // bool
            public const nint m_bSetOrientation = 0x311; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ChladniWave {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
            public const nint m_vecWaveLength = 0x6F8; // CPerParticleVecInput
            public const nint m_vecHarmonics = 0xD28; // CPerParticleVecInput
            public const nint m_nSetMethod = 0x1358; // ParticleSetMethod_t
            public const nint m_nLocalSpaceControlPoint = 0x135C; // int32
            public const nint m_b3D = 0x1360; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDirectionToCPToVector {
            public const nint m_nCP = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1B8; // float32
            public const nint m_flOffsetRot = 0x1BC; // float32
            public const nint m_vecOffsetAxis = 0x1C0; // Vector
            public const nint m_bNormalize = 0x1CC; // bool
            public const nint m_nFieldStrength = 0x1D0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DriveCPFromGlobalSoundFloat {
            public const nint m_nOutputControlPoint = 0x1B4; // int32
            public const nint m_nOutputField = 0x1B8; // int32
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_StackName = 0x1D0; // CUtlString
            public const nint m_OperatorName = 0x1D8; // CUtlString
            public const nint m_FieldName = 0x1E0; // CUtlString
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RtEnvCull {
            public const nint m_vecTestDir = 0x1B0; // Vector
            public const nint m_vecTestNormal = 0x1BC; // Vector
            public const nint m_bCullOnMiss = 0x1C8; // bool
            public const nint m_bStickInsteadOfCull = 0x1C9; // bool
            public const nint m_RtEnvName = 0x1CA; // char[128]
            public const nint m_nRTEnvCP = 0x24C; // int32
            public const nint m_nComponent = 0x250; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PinParticleToCP {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_vecOffset = 0x1B8; // CParticleCollectionVecInput
            public const nint m_bOffsetLocal = 0x7E8; // bool
            public const nint m_nParticleSelection = 0x7EC; // ParticleSelection_t
            public const nint m_nParticleNumber = 0x7F0; // CParticleCollectionFloatInput
            public const nint m_nPinBreakType = 0x940; // ParticlePinDistance_t
            public const nint m_flBreakDistance = 0x948; // CParticleCollectionFloatInput
            public const nint m_flBreakSpeed = 0xA98; // CParticleCollectionFloatInput
            public const nint m_flAge = 0xBE8; // CParticleCollectionFloatInput
            public const nint m_nBreakControlPointNumber = 0xD38; // int32
            public const nint m_nBreakControlPointNumber2 = 0xD3C; // int32
            public const nint m_flBreakValue = 0xD40; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0xE90; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPtoVector {
            public const nint m_nCPInput = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1B8; // int32
            public const nint m_vInputMin = 0x1BC; // Vector
            public const nint m_vInputMax = 0x1C8; // Vector
            public const nint m_vOutputMin = 0x1D4; // Vector
            public const nint m_vOutputMax = 0x1E0; // Vector
            public const nint m_flStartTime = 0x1EC; // float32
            public const nint m_flEndTime = 0x1F0; // float32
            public const nint m_flInterpRate = 0x1F4; // float32
            public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
            public const nint m_bOffset = 0x1FC; // bool
            public const nint m_bAccelerate = 0x1FD; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateParticleImpulse {
            public const nint m_InputRadius = 0x1B8; // CPerParticleFloatInput
            public const nint m_InputMagnitude = 0x308; // CPerParticleFloatInput
            public const nint m_nFalloffFunction = 0x458; // ParticleFalloffFunction_t
            public const nint m_InputFalloffExp = 0x460; // CPerParticleFloatInput
            public const nint m_nImpulseType = 0x5B0; // ParticleImpulseType_t
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DensityForce {
            public const nint m_flRadiusScale = 0x1BC; // float32
            public const nint m_flForceScale = 0x1C0; // float32
            public const nint m_flTargetDensity = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateInEpitrochoid {
            public const nint m_nComponent1 = 0x1B4; // int32
            public const nint m_nComponent2 = 0x1B8; // int32
            public const nint m_TransformInput = 0x1C0; // CParticleTransformInput
            public const nint m_flParticleDensity = 0x220; // CPerParticleFloatInput
            public const nint m_flOffset = 0x370; // CPerParticleFloatInput
            public const nint m_flRadius1 = 0x4C0; // CPerParticleFloatInput
            public const nint m_flRadius2 = 0x610; // CPerParticleFloatInput
            public const nint m_bUseCount = 0x760; // bool
            public const nint m_bUseLocalCoords = 0x761; // bool
            public const nint m_bOffsetExistingPos = 0x762; // bool
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistanceToUserSpecifiedPath {
            public const nint m_fMinDistance = 0x1B0; // float32
            public const nint m_flMaxDistance = 0x1B4; // float32
            public const nint m_flTimeScale = 0x1B8; // float32
            public const nint m_bLoopedPath = 0x1BC; // bool
            public const nint m_pointList = 0x1C0; // CUtlVector<PointDefinitionWithTimeValues_t>
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointPositions {
            public const nint m_bUseWorldLocation = 0x1B1; // bool
            public const nint m_bOrient = 0x1B2; // bool
            public const nint m_bSetOnce = 0x1B3; // bool
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_nCP2 = 0x1B8; // int32
            public const nint m_nCP3 = 0x1BC; // int32
            public const nint m_nCP4 = 0x1C0; // int32
            public const nint m_vecCP1Pos = 0x1C4; // Vector
            public const nint m_vecCP2Pos = 0x1D0; // Vector
            public const nint m_vecCP3Pos = 0x1DC; // Vector
            public const nint m_vecCP4Pos = 0x1E8; // Vector
            public const nint m_nHeadLocation = 0x1F4; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFloatAttributeToVectorExpression {
            public const nint m_nExpression = 0x1B0; // VectorFloatExpressionType_t
            public const nint m_vInput1 = 0x1B8; // CPerParticleVecInput
            public const nint m_vInput2 = 0x7E8; // CPerParticleVecInput
            public const nint m_flOutputRemap = 0xE18; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0xF68; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0xF6C; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementRotateParticleAroundAxis {
            public const nint m_vecRotAxis = 0x1B0; // CParticleCollectionVecInput
            public const nint m_flRotRate = 0x7E0; // CParticleCollectionFloatInput
            public const nint m_TransformInput = 0x930; // CParticleTransformInput
            public const nint m_bLocalSpace = 0x990; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_IntraParticleForce {
            public const nint m_flAttractionMinDistance = 0x1BC; // float32
            public const nint m_flAttractionMaxDistance = 0x1C0; // float32
            public const nint m_flAttractionMaxStrength = 0x1C4; // float32
            public const nint m_flRepulsionMinDistance = 0x1C8; // float32
            public const nint m_flRepulsionMaxDistance = 0x1CC; // float32
            public const nint m_flRepulsionMaxStrength = 0x1D0; // float32
            public const nint m_bUseAABB = 0x1D4; // bool
            public const nint m_bThreadIt = 0x1D5; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFloat {
            public const nint m_InputValue = 0x1B8; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x30C; // ParticleSetMethod_t
            public const nint m_InputStrength = 0x310; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnModel {
            public const nint m_modelInput = 0x1B8; // CParticleModelInput
            public const nint m_transformInput = 0x210; // CParticleTransformInput
            public const nint m_nForceInModel = 0x270; // int32
            public const nint m_bScaleToVolume = 0x274; // bool
            public const nint m_bEvenDistribution = 0x275; // bool
            public const nint m_nDesiredHitbox = 0x278; // CParticleCollectionFloatInput
            public const nint m_nHitboxValueFromControlPointIndex = 0x3C8; // int32
            public const nint m_vecHitBoxScale = 0x3D0; // CParticleCollectionVecInput
            public const nint m_flBoneVelocity = 0xA00; // float32
            public const nint m_flMaxBoneVelocity = 0xA04; // float32
            public const nint m_vecDirectionBias = 0xA08; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0x1038; // char[128]
            public const nint m_bLocalCoords = 0x10B8; // bool
            public const nint m_bUseBones = 0x10B9; // bool
            public const nint m_bUseMesh = 0x10BA; // bool
            public const nint m_flShellSize = 0x10C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InheritFromPeerSystem {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1B8; // int32
            public const nint m_nGroupID = 0x1BC; // int32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PerParticleForce {
            public const nint m_flForceScale = 0x1C0; // CPerParticleFloatInput
            public const nint m_vForce = 0x310; // CPerParticleVecInput
            public const nint m_nCP = 0x940; // int32
        }
        // Parent: C_INIT_RandomNamedModelElement
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelMeshGroup {
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderProjected {
            public const nint m_bProjectCharacter = 0x1FA; // bool
            public const nint m_bProjectWorld = 0x1FB; // bool
            public const nint m_bProjectWater = 0x1FC; // bool
            public const nint m_bFlipHorizontal = 0x1FD; // bool
            public const nint m_bEnableProjectedDepthControls = 0x1FE; // bool
            public const nint m_flMinProjectionDepth = 0x200; // float32
            public const nint m_flMaxProjectionDepth = 0x204; // float32
            public const nint m_vecProjectedMaterials = 0x208; // CUtlVector<RenderProjectedMaterial_t>
            public const nint m_flMaterialSelection = 0x220; // CPerParticleFloatInput
            public const nint m_flAnimationTimeScale = 0x370; // float32
            public const nint m_bOrientToNormal = 0x374; // bool
            public const nint m_MaterialVars = 0x378; // CUtlVector<MaterialVariable_t>
            public const nint m_flRadiusScale = 0x390; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x4E0; // CParticleCollectionFloatInput
            public const nint m_flRollScale = 0x630; // CParticleCollectionFloatInput
            public const nint m_nAlpha2Field = 0x780; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x788; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0xDB8; // ParticleColorBlendType_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaxVelocity {
            public const nint m_flMaxVelocity = 0x1B0; // float32
            public const nint m_flMinVelocity = 0x1B4; // float32
            public const nint m_nOverrideCP = 0x1B8; // int32
            public const nint m_nOverrideCPField = 0x1BC; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityFromNormal {
            public const nint m_fSpeedMin = 0x1B4; // float32
            public const nint m_fSpeedMax = 0x1B8; // float32
            public const nint m_bIgnoreDt = 0x1BC; // bool
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaintainEmitter {
            public const nint m_nParticlesToMaintain = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x308; // float32
            public const nint m_flEmissionDuration = 0x310; // CParticleCollectionFloatInput
            public const nint m_flEmissionRate = 0x460; // float32
            public const nint m_nSnapshotControlPoint = 0x464; // int32
            public const nint m_bEmitInstantaneously = 0x468; // bool
            public const nint m_bFinalEmitOnStop = 0x469; // bool
            public const nint m_flScale = 0x470; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionOffsetToCP {
            public const nint m_nControlPointNumberStart = 0x1B4; // int32
            public const nint m_nControlPointNumberEnd = 0x1B8; // int32
            public const nint m_bLocalCoords = 0x1BC; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialTransformDirectionToRotation {
            public const nint m_TransformInput = 0x1B8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_flOffsetRot = 0x21C; // float32
            public const nint m_nComponent = 0x220; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeAndKill {
            public const nint m_flStartFadeInTime = 0x1B0; // float32
            public const nint m_flEndFadeInTime = 0x1B4; // float32
            public const nint m_flStartFadeOutTime = 0x1B8; // float32
            public const nint m_flEndFadeOutTime = 0x1BC; // float32
            public const nint m_flStartAlpha = 0x1C0; // float32
            public const nint m_flEndAlpha = 0x1C4; // float32
            public const nint m_bForcePreserveParticleOrder = 0x1C8; // bool
        }
        // Parent: None
        // Fields count: 1
        public static class PARTICLE_WORLD_HANDLE__ {
            public const nint unused = 0x0; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ColorInterpolate {
            public const nint m_ColorFade = 0x1B0; // Color
            public const nint m_flFadeStartTime = 0x1C0; // float32
            public const nint m_flFadeEndTime = 0x1C4; // float32
            public const nint m_nFieldOutput = 0x1C8; // ParticleAttributeIndex_t
            public const nint m_bEaseInOut = 0x1CC; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarSpline {
            public const nint m_RateMin = 0x1B0; // float32
            public const nint m_RateMax = 0x1B4; // float32
            public const nint m_flStartTime_min = 0x1B8; // float32
            public const nint m_flStartTime_max = 0x1BC; // float32
            public const nint m_flEndTime_min = 0x1C0; // float32
            public const nint m_flEndTime_max = 0x1C4; // float32
            public const nint m_flBias = 0x1C8; // float32
            public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_bProportionalOp = 0x1F4; // bool
            public const nint m_bEaseOut = 0x1F5; // bool
        }
        // Parent: C_OP_RemapNamedModelElementOnceTimed
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelSequenceOnceTimed {
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFromObjectScale {
            public const nint m_nCPInput = 0x1B4; // int32
            public const nint m_nCPOutput = 0x1B8; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaintainSequentialPath {
            public const nint m_fMaxDistance = 0x1B0; // float32
            public const nint m_flNumToAssign = 0x1B4; // float32
            public const nint m_flCohesionStrength = 0x1B8; // float32
            public const nint m_flTolerance = 0x1BC; // float32
            public const nint m_bLoop = 0x1C0; // bool
            public const nint m_bUseParticleCount = 0x1C1; // bool
            public const nint m_PathParams = 0x1D0; // CPathParameters
        }
        // Parent: C_OP_RemapNamedModelElementEndCap
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelBodyPartEndCap {
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_StopAfterCPDuration {
            public const nint m_flDuration = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_bDestroyImmediately = 0x308; // bool
            public const nint m_bPlayEndCap = 0x309; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralSpin {
            public const nint m_nSpinRateDegrees = 0x1B0; // int32
            public const nint m_nSpinRateMinDegrees = 0x1B4; // int32
            public const nint m_fSpinRateStopTime = 0x1BC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_OP_LockToSavedSequentialPath {
            public const nint m_flFadeStart = 0x1B4; // float32
            public const nint m_flFadeEnd = 0x1B8; // float32
            public const nint m_bCPPairs = 0x1BC; // bool
            public const nint m_PathParams = 0x1C0; // CPathParameters
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelElementToScalar {
            public const nint m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_names = 0x1C0; // CUtlVector<CUtlString>
            public const nint m_values = 0x1D8; // CUtlVector<float32>
            public const nint m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1F4; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
            public const nint m_bModelFromRenderer = 0x1FC; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClampVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1B8; // CPerParticleVecInput
            public const nint m_vecOutputMax = 0x7E8; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderStatusEffectCitadel {
            public const nint m_pTextureColorWarp = 0x200; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureNormal = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureMetalness = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureRoughness = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureSelfIllum = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureDetail = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapCPtoScalar {
            public const nint m_nCPInput = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nField = 0x1BC; // int32
            public const nint m_flInputMin = 0x1C0; // float32
            public const nint m_flInputMax = 0x1C4; // float32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_flStartTime = 0x1D0; // float32
            public const nint m_flEndTime = 0x1D4; // float32
            public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
            public const nint m_flRemapBias = 0x1DC; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class IParticleSystemDefinition {
        }
        // Parent: CParticleFloatInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionFloatInput {
        }
        // Parent: CParticleFunctionForce
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WindForce {
            public const nint m_vForce = 0x1BC; // Vector
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetVariable {
            public const nint m_variableReference = 0x1B8; // CParticleVariableRef
            public const nint m_transformInput = 0x1F8; // CParticleTransformInput
            public const nint m_positionOffset = 0x258; // Vector
            public const nint m_rotationOffset = 0x264; // QAngle
            public const nint m_vecInput = 0x270; // CParticleCollectionVecInput
            public const nint m_floatInput = 0x8A0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderStandardLight {
            public const nint m_nLightType = 0x1FC; // ParticleLightTypeChoiceList_t
            public const nint m_vecColorScale = 0x200; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x830; // ParticleColorBlendType_t
            public const nint m_flIntensity = 0x838; // CParticleCollectionFloatInput
            public const nint m_bCastShadows = 0x988; // bool
            public const nint m_flTheta = 0x990; // CParticleCollectionFloatInput
            public const nint m_flPhi = 0xAE0; // CParticleCollectionFloatInput
            public const nint m_flRadiusMultiplier = 0xC30; // CParticleCollectionFloatInput
            public const nint m_nAttenuationStyle = 0xD80; // StandardLightingAttenuationStyle_t
            public const nint m_flFalloffLinearity = 0xD88; // CParticleCollectionFloatInput
            public const nint m_flFiftyPercentFalloff = 0xED8; // CParticleCollectionFloatInput
            public const nint m_flZeroPercentFalloff = 0x1028; // CParticleCollectionFloatInput
            public const nint m_bRenderDiffuse = 0x1178; // bool
            public const nint m_bRenderSpecular = 0x1179; // bool
            public const nint m_lightCookie = 0x1180; // CUtlString
            public const nint m_nPriority = 0x1188; // int32
            public const nint m_nFogLightingMode = 0x118C; // ParticleLightFogLightingMode_t
            public const nint m_flFogContribution = 0x1190; // CParticleCollectionRendererFloatInput
            public const nint m_nCapsuleLightBehavior = 0x12E0; // ParticleLightBehaviorChoiceList_t
            public const nint m_flCapsuleLength = 0x12E4; // float32
            public const nint m_bReverseOrder = 0x12E8; // bool
            public const nint m_bClosedLoop = 0x12E9; // bool
            public const nint m_nPrevPntSource = 0x12EC; // ParticleAttributeIndex_t
            public const nint m_flMaxLength = 0x12F0; // float32
            public const nint m_flMinLength = 0x12F4; // float32
            public const nint m_bIgnoreDT = 0x12F8; // bool
            public const nint m_flConstrainRadiusToLengthRatio = 0x12FC; // float32
            public const nint m_flLengthScale = 0x1300; // float32
            public const nint m_flLengthFadeInTime = 0x1304; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceToTransform {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
            public const nint m_TransformStart = 0x6F8; // CParticleTransformInput
            public const nint m_bLOS = 0x758; // bool
            public const nint m_CollisionGroupName = 0x759; // char[128]
            public const nint m_nTraceSet = 0x7DC; // ParticleTraceSet_t
            public const nint m_flMaxTraceLength = 0x7E0; // float32
            public const nint m_flLOSScale = 0x7E4; // float32
            public const nint m_nSetMethod = 0x7E8; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x7EC; // bool
            public const nint m_bAdditive = 0x7ED; // bool
            public const nint m_vecComponentScale = 0x7F0; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapControlPointOrientationToRotation {
            public const nint m_nCP = 0x1B0; // int32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flOffsetRot = 0x1B8; // float32
            public const nint m_nComponent = 0x1BC; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToCenter {
            public const nint m_nCP1 = 0x1B4; // int32
            public const nint m_vecCP1Pos = 0x1B8; // Vector
            public const nint m_nSetParent = 0x1C4; // ParticleParentSetMode_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapAverageScalarValuetoCP {
            public const nint m_nOutControlPointNumber = 0x1B4; // int32
            public const nint m_nOutVectorField = 0x1B8; // int32
            public const nint m_nField = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1C0; // float32
            public const nint m_flInputMax = 0x1C4; // float32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDotProductToScalar {
            public const nint m_nInputCP1 = 0x1B0; // int32
            public const nint m_nInputCP2 = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_flOutputMin = 0x1C4; // float32
            public const nint m_flOutputMax = 0x1C8; // float32
            public const nint m_bUseParticleVelocity = 0x1CC; // bool
            public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1D4; // bool
            public const nint m_bUseParticleNormal = 0x1D5; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPtoCP {
            public const nint m_nInputControlPoint = 0x1B4; // int32
            public const nint m_nOutputControlPoint = 0x1B8; // int32
            public const nint m_nInputField = 0x1BC; // int32
            public const nint m_nOutputField = 0x1C0; // int32
            public const nint m_flInputMin = 0x1C4; // float32
            public const nint m_flInputMax = 0x1C8; // float32
            public const nint m_flOutputMin = 0x1CC; // float32
            public const nint m_flOutputMax = 0x1D0; // float32
            public const nint m_bDerivative = 0x1D4; // bool
            public const nint m_flInterpRate = 0x1D8; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointRotation {
            public const nint m_vecRotAxis = 0x1B8; // CParticleCollectionVecInput
            public const nint m_flRotRate = 0x7E8; // CParticleCollectionFloatInput
            public const nint m_nCP = 0x938; // int32
            public const nint m_nLocalCP = 0x93C; // int32
        }
        // Parent: CParticleFunctionForce
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CurlNoiseForce {
            public const nint m_nNoiseType = 0x1BC; // ParticleDirectionNoiseType_t
            public const nint m_vecNoiseFreq = 0x1C0; // CPerParticleVecInput
            public const nint m_vecNoiseScale = 0x7F0; // CPerParticleVecInput
            public const nint m_vecOffset = 0xE20; // CPerParticleVecInput
            public const nint m_vecOffsetRate = 0x1450; // CPerParticleVecInput
            public const nint m_flWorleySeed = 0x1A80; // CPerParticleFloatInput
            public const nint m_flWorleyJitter = 0x1BD0; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_Orient2DRelToCP {
            public const nint m_nCP = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flRotOffset = 0x1BC; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetSimulationRate {
            public const nint m_flSimulationScale = 0x1B8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeIn {
            public const nint m_flFadeInTimeMin = 0x1B0; // float32
            public const nint m_flFadeInTimeMax = 0x1B4; // float32
            public const nint m_flFadeInTimeExp = 0x1B8; // float32
            public const nint m_bProportional = 0x1BC; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderScreenShake {
            public const nint m_flDurationScale = 0x1FC; // float32
            public const nint m_flRadiusScale = 0x200; // float32
            public const nint m_flFrequencyScale = 0x204; // float32
            public const nint m_flAmplitudeScale = 0x208; // float32
            public const nint m_nRadiusField = 0x20C; // ParticleAttributeIndex_t
            public const nint m_nDurationField = 0x210; // ParticleAttributeIndex_t
            public const nint m_nFrequencyField = 0x214; // ParticleAttributeIndex_t
            public const nint m_nAmplitudeField = 0x218; // ParticleAttributeIndex_t
            public const nint m_nFilterCP = 0x21C; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapBoundingVolumetoCP {
            public const nint m_nOutControlPointNumber = 0x1B4; // int32
            public const nint m_flInputMin = 0x1B8; // float32
            public const nint m_flInputMax = 0x1BC; // float32
            public const nint m_flOutputMin = 0x1C0; // float32
            public const nint m_flOutputMax = 0x1C4; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_HSVShiftToCP {
            public const nint m_nColorCP = 0x1B4; // int32
            public const nint m_nColorGemEnableCP = 0x1B8; // int32
            public const nint m_nOutputCP = 0x1BC; // int32
            public const nint m_DefaultHSVColor = 0x1C0; // Color
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_GlobalScale {
            public const nint m_flScale = 0x1B4; // float32
            public const nint m_nScaleControlPointNumber = 0x1B8; // int32
            public const nint m_nControlPointNumber = 0x1BC; // int32
            public const nint m_bScaleRadius = 0x1C0; // bool
            public const nint m_bScalePosition = 0x1C1; // bool
            public const nint m_bScaleVelocity = 0x1C2; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RadiusFromCPObject {
            public const nint m_nControlPoint = 0x1B4; // int32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialVelocityFromHitbox {
            public const nint m_flVelocityMin = 0x1B4; // float32
            public const nint m_flVelocityMax = 0x1B8; // float32
            public const nint m_nControlPointNumber = 0x1BC; // int32
            public const nint m_HitboxSetName = 0x1C0; // char[128]
            public const nint m_bUseBones = 0x240; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutput = 0x1B4; // Vector
            public const nint m_flStartTime = 0x1C0; // float32
            public const nint m_flEndTime = 0x1C4; // float32
            public const nint m_nSetMethod = 0x1C8; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFieldToWater {
            public const nint m_nSourceCP = 0x1B4; // int32
            public const nint m_nDestCP = 0x1B8; // int32
            public const nint m_nCPField = 0x1BC; // int32
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureGroup_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_bReplaceTextureWithGradient = 0x1; // bool
            public const nint m_hTexture = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Gradient = 0x10; // CColorGradient
            public const nint m_nTextureType = 0x28; // SpriteCardTextureType_t
            public const nint m_nTextureChannels = 0x2C; // SpriteCardTextureChannel_t
            public const nint m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
            public const nint m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
            public const nint m_TextureControls = 0x188; // TextureControls_t
        }
        // Parent: CParticleFunctionForce
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TimeVaryingForce {
            public const nint m_flStartLerpTime = 0x1BC; // float32
            public const nint m_StartingForce = 0x1C0; // Vector
            public const nint m_flEndLerpTime = 0x1CC; // float32
            public const nint m_EndingForce = 0x1D0; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPOrientationToGroundNormal {
            public const nint m_flInterpRate = 0x1B0; // float32
            public const nint m_flMaxTraceLength = 0x1B4; // float32
            public const nint m_flTolerance = 0x1B8; // float32
            public const nint m_flTraceOffset = 0x1BC; // float32
            public const nint m_CollisionGroupName = 0x1C0; // char[128]
            public const nint m_nTraceSet = 0x240; // ParticleTraceSet_t
            public const nint m_nInputCP = 0x244; // int32
            public const nint m_nOutputCP = 0x248; // int32
            public const nint m_bIncludeWater = 0x258; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SnapshotSkinToBones {
            public const nint m_bTransformNormals = 0x1B0; // bool
            public const nint m_bTransformRadii = 0x1B1; // bool
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_flLifeTimeFadeStart = 0x1B8; // float32
            public const nint m_flLifeTimeFadeEnd = 0x1BC; // float32
            public const nint m_flJumpThreshold = 0x1C0; // float32
            public const nint m_flPrevPosScale = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinSphereTransform {
            public const nint m_fRadiusMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_fRadiusMax = 0x308; // CPerParticleFloatInput
            public const nint m_vecDistanceBias = 0x458; // CPerParticleVecInput
            public const nint m_vecDistanceBiasAbs = 0xA88; // Vector
            public const nint m_TransformInput = 0xA98; // CParticleTransformInput
            public const nint m_fSpeedMin = 0xAF8; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0xC48; // CPerParticleFloatInput
            public const nint m_fSpeedRandExp = 0xD98; // float32
            public const nint m_bLocalCoords = 0xD9C; // bool
            public const nint m_flEndCPGrowthTime = 0xDA0; // float32
            public const nint m_LocalCoordinateSystemSpeedMin = 0xDA8; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0x13D8; // CPerParticleVecInput
            public const nint m_nFieldOutput = 0x1A08; // ParticleAttributeIndex_t
            public const nint m_nFieldVelocity = 0x1A0C; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RadiusDecay {
            public const nint m_flMinRadius = 0x1B0; // float32
        }
        // Parent: C_INIT_RemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelBodyPartToScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapScalarToVector {
            public const nint m_nFieldInput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1BC; // float32
            public const nint m_flInputMax = 0x1C0; // float32
            public const nint m_vecOutputMin = 0x1C4; // Vector
            public const nint m_vecOutputMax = 0x1D0; // Vector
            public const nint m_flStartTime = 0x1DC; // float32
            public const nint m_flEndTime = 0x1E0; // float32
            public const nint m_nSetMethod = 0x1E4; // ParticleSetMethod_t
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_bLocalCoords = 0x1EC; // bool
            public const nint m_flRemapBias = 0x1F0; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialSequenceFromModel {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputAnim = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1C0; // float32
            public const nint m_flInputMax = 0x1C4; // float32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionEmitter
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NoiseEmitter {
            public const nint m_flEmissionDuration = 0x1B4; // float32
            public const nint m_flStartTime = 0x1B8; // float32
            public const nint m_flEmissionScale = 0x1BC; // float32
            public const nint m_nScaleControlPoint = 0x1C0; // int32
            public const nint m_nScaleControlPointField = 0x1C4; // int32
            public const nint m_nWorldNoisePoint = 0x1C8; // int32
            public const nint m_bAbsVal = 0x1CC; // bool
            public const nint m_bAbsValInv = 0x1CD; // bool
            public const nint m_flOffset = 0x1D0; // float32
            public const nint m_flOutputMin = 0x1D4; // float32
            public const nint m_flOutputMax = 0x1D8; // float32
            public const nint m_flNoiseScale = 0x1DC; // float32
            public const nint m_flWorldNoiseScale = 0x1E0; // float32
            public const nint m_vecOffsetLoc = 0x1E4; // Vector
            public const nint m_flWorldTimeScale = 0x1F0; // float32
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionInitializer {
            public const nint m_nAssociatedEmitterIndex = 0x1B0; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SelectivelyEnableChildren {
            public const nint m_nChildGroupID = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nFirstChild = 0x308; // CParticleCollectionFloatInput
            public const nint m_nNumChildrenToEnable = 0x458; // CParticleCollectionFloatInput
            public const nint m_bPlayEndcapOnStop = 0x5A8; // bool
            public const nint m_bDestroyImmediately = 0x5A9; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelReference_t {
            public const nint m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_flRelativeProbabilityOfSpawn = 0x8; // float32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlanarConstraint {
            public const nint m_PointOnPlane = 0x1B0; // Vector
            public const nint m_PlaneNormal = 0x1BC; // Vector
            public const nint m_nControlPointNumber = 0x1C8; // int32
            public const nint m_bGlobalOrigin = 0x1CC; // bool
            public const nint m_bGlobalNormal = 0x1CD; // bool
            public const nint m_flRadiusScale = 0x1D0; // CPerParticleFloatInput
            public const nint m_flMaximumDistanceToCP = 0x320; // CParticleCollectionFloatInput
            public const nint m_bUseOldCode = 0x470; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromCPs {
            public const nint m_nIncrement = 0x1B4; // int32
            public const nint m_nMinCP = 0x1B8; // int32
            public const nint m_nMaxCP = 0x1BC; // int32
            public const nint m_nDynamicCPCount = 0x1C0; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LockPoints {
            public const nint m_nMinCol = 0x1B0; // int32
            public const nint m_nMaxCol = 0x1B4; // int32
            public const nint m_nMinRow = 0x1B8; // int32
            public const nint m_nMaxRow = 0x1BC; // int32
            public const nint m_nControlPoint = 0x1C0; // int32
            public const nint m_flBlendValue = 0x1C4; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSpiralSphere {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nOverrideCP = 0x1B8; // int32
            public const nint m_nDensity = 0x1BC; // int32
            public const nint m_flInitialRadius = 0x1C0; // float32
            public const nint m_flInitialSpeedMin = 0x1C4; // float32
            public const nint m_flInitialSpeedMax = 0x1C8; // float32
            public const nint m_bUseParticleCount = 0x1CC; // bool
        }
        // Parent: CParticleFunctionForce
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CPVelocityForce {
            public const nint m_nControlPointNumber = 0x1BC; // int32
            public const nint m_flScale = 0x1C0; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelElementEndCap {
            public const nint m_hModel = 0x1B0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_inNames = 0x1B8; // CUtlVector<CUtlString>
            public const nint m_outNames = 0x1D0; // CUtlVector<CUtlString>
            public const nint m_fallbackNames = 0x1E8; // CUtlVector<CUtlString>
            public const nint m_bModelFromRenderer = 0x200; // bool
            public const nint m_nFieldInput = 0x204; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x208; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ScaleVelocity {
            public const nint m_vecScale = 0x1B8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MoveToHitbox {
            public const nint m_modelInput = 0x1B0; // CParticleModelInput
            public const nint m_transformInput = 0x208; // CParticleTransformInput
            public const nint m_flLifeTimeLerpStart = 0x26C; // float32
            public const nint m_flLifeTimeLerpEnd = 0x270; // float32
            public const nint m_flPrevPosScale = 0x274; // float32
            public const nint m_HitboxSetName = 0x278; // char[128]
            public const nint m_bUseBones = 0x2F8; // bool
            public const nint m_nLerpType = 0x2FC; // HitboxLerpType_t
            public const nint m_flInterpolation = 0x300; // CPerParticleFloatInput
        }
        // Parent: CParticleInput
        // Fields count: 46
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MParticleCustomFieldDefaultValue
        public static class CParticleFloatInput {
            public const nint m_nType = 0xC; // ParticleFloatType_t
            public const nint m_nMapType = 0x10; // ParticleFloatMapType_t
            public const nint m_flLiteralValue = 0x14; // float32
            public const nint m_NamedValue = 0x18; // CParticleNamedValueRef
            public const nint m_nControlPoint = 0x58; // int32
            public const nint m_nScalarAttribute = 0x5C; // ParticleAttributeIndex_t
            public const nint m_nVectorAttribute = 0x60; // ParticleAttributeIndex_t
            public const nint m_nVectorComponent = 0x64; // int32
            public const nint m_flRandomMin = 0x68; // float32
            public const nint m_flRandomMax = 0x6C; // float32
            public const nint m_bHasRandomSignFlip = 0x70; // bool
            public const nint m_nRandomSeed = 0x74; // int32
            public const nint m_nRandomMode = 0x78; // ParticleFloatRandomMode_t
            public const nint m_flLOD0 = 0x80; // float32
            public const nint m_flLOD1 = 0x84; // float32
            public const nint m_flLOD2 = 0x88; // float32
            public const nint m_flLOD3 = 0x8C; // float32
            public const nint m_nNoiseInputVectorAttribute = 0x90; // ParticleAttributeIndex_t
            public const nint m_flNoiseOutputMin = 0x94; // float32
            public const nint m_flNoiseOutputMax = 0x98; // float32
            public const nint m_flNoiseScale = 0x9C; // float32
            public const nint m_vecNoiseOffsetRate = 0xA0; // Vector
            public const nint m_flNoiseOffset = 0xAC; // float32
            public const nint m_nNoiseOctaves = 0xB0; // int32
            public const nint m_nNoiseTurbulence = 0xB4; // PFNoiseTurbulence_t
            public const nint m_nNoiseType = 0xB8; // PFNoiseType_t
            public const nint m_nNoiseModifier = 0xBC; // PFNoiseModifier_t
            public const nint m_flNoiseTurbulenceScale = 0xC0; // float32
            public const nint m_flNoiseTurbulenceMix = 0xC4; // float32
            public const nint m_flNoiseImgPreviewScale = 0xC8; // float32
            public const nint m_bNoiseImgPreviewLive = 0xCC; // bool
            public const nint m_flNoCameraFallback = 0xD8; // float32
            public const nint m_bUseBoundsCenter = 0xDC; // bool
            public const nint m_nInputMode = 0xE0; // ParticleFloatInputMode_t
            public const nint m_flMultFactor = 0xE4; // float32
            public const nint m_flInput0 = 0xE8; // float32
            public const nint m_flInput1 = 0xEC; // float32
            public const nint m_flOutput0 = 0xF0; // float32
            public const nint m_flOutput1 = 0xF4; // float32
            public const nint m_flNotchedRangeMin = 0xF8; // float32
            public const nint m_flNotchedRangeMax = 0xFC; // float32
            public const nint m_flNotchedOutputOutside = 0x100; // float32
            public const nint m_flNotchedOutputInside = 0x104; // float32
            public const nint m_nBiasType = 0x108; // ParticleFloatBiasType_t
            public const nint m_flBiasParameter = 0x10C; // float32
            public const nint m_Curve = 0x110; // CPiecewiseCurve
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PointList {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_pointList = 0x1B8; // CUtlVector<PointDefinition_t>
            public const nint m_bPlaceAlongPath = 0x1D0; // bool
            public const nint m_bClosedLoop = 0x1D1; // bool
            public const nint m_nNumPointsAlongPath = 0x1D4; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpToOtherAttribute {
            public const nint m_flInterpolation = 0x1B0; // CPerParticleFloatInput
            public const nint m_nFieldInputFrom = 0x300; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x304; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x308; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomColor {
            public const nint m_ColorMin = 0x1D0; // Color
            public const nint m_ColorMax = 0x1D4; // Color
            public const nint m_TintMin = 0x1D8; // Color
            public const nint m_TintMax = 0x1DC; // Color
            public const nint m_flTintPerc = 0x1E0; // float32
            public const nint m_flUpdateThreshold = 0x1E4; // float32
            public const nint m_nTintCP = 0x1E8; // int32
            public const nint m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
            public const nint m_nTintBlendMode = 0x1F0; // ParticleColorBlendMode_t
            public const nint m_flLightAmplification = 0x1F4; // float32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetGravityToCP {
            public const nint m_nCPInput = 0x1B4; // int32
            public const nint m_nCPOutput = 0x1B8; // int32
            public const nint m_flScale = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_bSetOrientation = 0x310; // bool
            public const nint m_bSetZDown = 0x311; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToScalar {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1B8; // int32
            public const nint m_nInputMax = 0x1BC; // int32
            public const nint m_nScaleControlPoint = 0x1C0; // int32
            public const nint m_nScaleControlPointField = 0x1C4; // int32
            public const nint m_flOutputMin = 0x1C8; // float32
            public const nint m_flOutputMax = 0x1CC; // float32
            public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1D4; // bool
            public const nint m_bInvert = 0x1D5; // bool
            public const nint m_bWrap = 0x1D6; // bool
            public const nint m_flRemapBias = 0x1D8; // float32
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InheritFromParentParticles {
            public const nint m_flScale = 0x1B4; // float32
            public const nint m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1BC; // int32
            public const nint m_bRandomDistribution = 0x1C0; // bool
            public const nint m_nRandomSeed = 0x1C4; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarLinearSimple {
            public const nint m_Rate = 0x1B0; // float32
            public const nint m_flStartTime = 0x1B4; // float32
            public const nint m_flEndTime = 0x1B8; // float32
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ChaoticAttractor {
            public const nint m_flAParm = 0x1B4; // float32
            public const nint m_flBParm = 0x1B8; // float32
            public const nint m_flCParm = 0x1BC; // float32
            public const nint m_flDParm = 0x1C0; // float32
            public const nint m_flScale = 0x1C4; // float32
            public const nint m_flSpeedMin = 0x1C8; // float32
            public const nint m_flSpeedMax = 0x1CC; // float32
            public const nint m_nBaseCP = 0x1D0; // int32
            public const nint m_bUniformSpeed = 0x1D4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementRigidAttachToCP {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_nScaleControlPoint = 0x1B4; // int32
            public const nint m_nScaleCPField = 0x1B8; // int32
            public const nint m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            public const nint m_bOffsetLocal = 0x1C4; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderFlattenGrass {
            public const nint m_flFlattenStrength = 0x1FC; // float32
            public const nint m_nStrengthFieldOverride = 0x200; // ParticleAttributeIndex_t
            public const nint m_flRadiusScale = 0x204; // float32
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderLightBeam {
            public const nint m_vColorBlend = 0x200; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x830; // ParticleColorBlendType_t
            public const nint m_flBrightnessLumensPerMeter = 0x838; // CParticleCollectionFloatInput
            public const nint m_bCastShadows = 0x988; // bool
            public const nint m_flSkirt = 0x990; // CParticleCollectionFloatInput
            public const nint m_flRange = 0xAE0; // CParticleCollectionFloatInput
            public const nint m_flThickness = 0xC30; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EnableChildrenFromParentParticleCount {
            public const nint m_nChildGroupID = 0x1B4; // int32
            public const nint m_nFirstChild = 0x1B8; // int32
            public const nint m_nNumChildrenToEnable = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_bDisableChildren = 0x310; // bool
            public const nint m_bPlayEndcapOnStop = 0x311; // bool
            public const nint m_bDestroyImmediately = 0x312; // bool
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceToCPInit {
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x458; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x5A8; // CPerParticleFloatInput
            public const nint m_nStartCP = 0x6F8; // int32
            public const nint m_bLOS = 0x6FC; // bool
            public const nint m_CollisionGroupName = 0x6FD; // char[128]
            public const nint m_nTraceSet = 0x780; // ParticleTraceSet_t
            public const nint m_flMaxTraceLength = 0x788; // CPerParticleFloatInput
            public const nint m_flLOSScale = 0x8D8; // float32
            public const nint m_nSetMethod = 0x8DC; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x8E0; // bool
            public const nint m_vecDistanceScale = 0x8E4; // Vector
            public const nint m_flRemapBias = 0x8F0; // float32
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CReplicationParameters {
            public const nint m_nReplicationMode = 0x0; // ParticleReplicationMode_t
            public const nint m_bScaleChildParticleRadii = 0x4; // bool
            public const nint m_flMinRandomRadiusScale = 0x8; // CParticleCollectionFloatInput
            public const nint m_flMaxRandomRadiusScale = 0x158; // CParticleCollectionFloatInput
            public const nint m_vMinRandomDisplacement = 0x2A8; // CParticleCollectionVecInput
            public const nint m_vMaxRandomDisplacement = 0x8D8; // CParticleCollectionVecInput
            public const nint m_flModellingScale = 0xF08; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapDecay {
        }
        // Parent: CParticleFunctionForce
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ForceBasedOnDistanceToPlane {
            public const nint m_flMinDist = 0x1BC; // float32
            public const nint m_vecForceAtMinDist = 0x1C0; // Vector
            public const nint m_flMaxDist = 0x1CC; // float32
            public const nint m_vecForceAtMaxDist = 0x1D0; // Vector
            public const nint m_vecPlaneNormal = 0x1DC; // Vector
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_flExponent = 0x1EC; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDensityToVector {
            public const nint m_flRadiusScale = 0x1B0; // float32
            public const nint m_nFieldOutput = 0x1B4; // ParticleAttributeIndex_t
            public const nint m_flDensityMin = 0x1B8; // float32
            public const nint m_flDensityMax = 0x1BC; // float32
            public const nint m_vecOutputMin = 0x1C0; // Vector
            public const nint m_vecOutputMax = 0x1CC; // Vector
            public const nint m_bUseParentDensity = 0x1D8; // bool
            public const nint m_nVoxelGridResolution = 0x1DC; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointConfiguration_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
            public const nint m_previewState = 0x20; // ParticlePreviewState_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetRigidAttachment {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            public const nint m_bLocalSpace = 0x1C0; // bool
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_nVariableField = 0x8; // ParticleAttributeIndex_t
            public const nint m_flScale = 0xC; // float32
        }
        // Parent: CParticleFunction
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionConstraint {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSpeed {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B4; // float32
            public const nint m_flInputMax = 0x1B8; // float32
            public const nint m_flOutputMin = 0x1BC; // float32
            public const nint m_flOutputMax = 0x1C0; // float32
            public const nint m_nSetMethod = 0x1C4; // ParticleSetMethod_t
            public const nint m_bIgnoreDelta = 0x1C8; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 54
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderModels {
            public const nint m_bOnlyRenderInEffectsBloomPass = 0x1FA; // bool
            public const nint m_bOnlyRenderInEffectsWaterPass = 0x1FB; // bool
            public const nint m_bUseMixedResolutionRendering = 0x1FC; // bool
            public const nint m_bOnlyRenderInEffecsGameOverlay = 0x1FD; // bool
            public const nint m_ModelList = 0x200; // CUtlVector<ModelReference_t>
            public const nint m_nBodyGroupField = 0x218; // ParticleAttributeIndex_t
            public const nint m_nSubModelField = 0x21C; // ParticleAttributeIndex_t
            public const nint m_bIgnoreNormal = 0x220; // bool
            public const nint m_bOrientZ = 0x221; // bool
            public const nint m_bCenterOffset = 0x222; // bool
            public const nint m_vecLocalOffset = 0x228; // CPerParticleVecInput
            public const nint m_vecLocalRotation = 0x858; // CPerParticleVecInput
            public const nint m_bIgnoreRadius = 0xE88; // bool
            public const nint m_nModelScaleCP = 0xE8C; // int32
            public const nint m_vecComponentScale = 0xE90; // CPerParticleVecInput
            public const nint m_bLocalScale = 0x14C0; // bool
            public const nint m_nSizeCullBloat = 0x14C4; // int32
            public const nint m_bAnimated = 0x14C8; // bool
            public const nint m_flAnimationRate = 0x14D0; // CPerParticleFloatInput
            public const nint m_bScaleAnimationRate = 0x1620; // bool
            public const nint m_bForceLoopingAnimation = 0x1621; // bool
            public const nint m_bResetAnimOnStop = 0x1622; // bool
            public const nint m_bManualAnimFrame = 0x1623; // bool
            public const nint m_nAnimationScaleField = 0x1624; // ParticleAttributeIndex_t
            public const nint m_nAnimationField = 0x1628; // ParticleAttributeIndex_t
            public const nint m_nManualFrameField = 0x162C; // ParticleAttributeIndex_t
            public const nint m_ActivityName = 0x1630; // char[256]
            public const nint m_SequenceName = 0x1730; // char[256]
            public const nint m_bEnableClothSimulation = 0x1830; // bool
            public const nint m_ClothEffectName = 0x1831; // char[64]
            public const nint m_hOverrideMaterial = 0x1878; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bOverrideTranslucentMaterials = 0x1880; // bool
            public const nint m_nSkin = 0x1888; // CPerParticleFloatInput
            public const nint m_MaterialVars = 0x19D8; // CUtlVector<MaterialVariable_t>
            public const nint m_flManualModelSelection = 0x19F0; // CPerParticleFloatInput
            public const nint m_modelInput = 0x1B40; // CParticleModelInput
            public const nint m_nLOD = 0x1B98; // int32
            public const nint m_EconSlotName = 0x1B9C; // char[256]
            public const nint m_bOriginalModel = 0x1C9C; // bool
            public const nint m_bSuppressTint = 0x1C9D; // bool
            public const nint m_nSubModelFieldType = 0x1CA0; // RenderModelSubModelFieldType_t
            public const nint m_bDisableShadows = 0x1CA4; // bool
            public const nint m_bDisableDepthPrepass = 0x1CA5; // bool
            public const nint m_bAcceptsDecals = 0x1CA6; // bool
            public const nint m_bForceDrawInterlevedWithSiblings = 0x1CA7; // bool
            public const nint m_bDoNotDrawInParticlePass = 0x1CA8; // bool
            public const nint m_bAllowApproximateTransforms = 0x1CA9; // bool
            public const nint m_szRenderAttribute = 0x1CAA; // char[4096]
            public const nint m_flRadiusScale = 0x2CB0; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x2E00; // CParticleCollectionFloatInput
            public const nint m_flRollScale = 0x2F50; // CParticleCollectionFloatInput
            public const nint m_nAlpha2Field = 0x30A0; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x30A8; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x36D8; // ParticleColorBlendType_t
        }
        // Parent: CParticleFunction
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionEmitter {
            public const nint m_nEmitterIndex = 0x1B0; // int32
        }
        // Parent: C_INIT_RemapNamedModelElementToScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelMeshGroupToScalar {
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointOrientationToCPVelocity {
            public const nint m_nCPInput = 0x1B4; // int32
            public const nint m_nCPOutput = 0x1B8; // int32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RopeSpringConstraint {
            public const nint m_flRestLength = 0x1B0; // CParticleCollectionFloatInput
            public const nint m_flMinDistance = 0x300; // CParticleCollectionFloatInput
            public const nint m_flMaxDistance = 0x450; // CParticleCollectionFloatInput
            public const nint m_flAdjustmentScale = 0x5A0; // float32
            public const nint m_flInitialRestingLength = 0x5A8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionWarpScalar {
            public const nint m_vecWarpMin = 0x1B4; // Vector
            public const nint m_vecWarpMax = 0x1C0; // Vector
            public const nint m_InputValue = 0x1D0; // CPerParticleFloatInput
            public const nint m_flPrevPosScale = 0x320; // float32
            public const nint m_nScaleControlPointNumber = 0x324; // int32
            public const nint m_nControlPointNumber = 0x328; // int32
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ForceControlPointStub {
            public const nint m_ControlPoint = 0x1B4; // int32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VectorNoise {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1B4; // Vector
            public const nint m_vecOutputMax = 0x1C0; // Vector
            public const nint m_fl4NoiseScale = 0x1CC; // float32
            public const nint m_bAdditive = 0x1D0; // bool
            public const nint m_bOffset = 0x1D1; // bool
            public const nint m_flNoiseAnimationTimeScale = 0x1D4; // float32
        }
        // Parent: None
        // Fields count: 0
        public static class IParticleCollection {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapParticleCountToScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1B8; // CParticleCollectionFloatInput
            public const nint m_nInputMax = 0x308; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x458; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x5A8; // CParticleCollectionFloatInput
            public const nint m_bActiveRange = 0x6F8; // bool
            public const nint m_nSetMethod = 0x6FC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_QuantizeFloat {
            public const nint m_InputValue = 0x1B8; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x308; // ParticleAttributeIndex_t
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapModelVolumetoCP {
            public const nint m_nBBoxType = 0x1B4; // BBoxVolumeType_t
            public const nint m_nInControlPointNumber = 0x1B8; // int32
            public const nint m_nOutControlPointNumber = 0x1BC; // int32
            public const nint m_nOutControlPointMaxNumber = 0x1C0; // int32
            public const nint m_nField = 0x1C4; // int32
            public const nint m_flInputMin = 0x1C8; // float32
            public const nint m_flInputMax = 0x1CC; // float32
            public const nint m_flOutputMin = 0x1D0; // float32
            public const nint m_flOutputMax = 0x1D4; // float32
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetToCP {
            public const nint m_nControlPointNumber = 0x1B0; // int32
            public const nint m_vecOffset = 0x1B4; // Vector
            public const nint m_bOffsetLocal = 0x1C0; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointDriver_t {
            public const nint m_iControlPoint = 0x0; // int32
            public const nint m_iAttachType = 0x4; // ParticleAttachment_t
            public const nint m_attachmentName = 0x8; // CUtlString
            public const nint m_vecOffset = 0x10; // Vector
            public const nint m_angOffset = 0x1C; // QAngle
            public const nint m_entityName = 0x28; // CUtlString
        }
        // Parent: CParticleFunctionForce
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ParentVortices {
            public const nint m_flForceScale = 0x1BC; // float32
            public const nint m_vecTwistAxis = 0x1C0; // Vector
            public const nint m_bFlipBasedOnYaw = 0x1CC; // bool
        }
        // Parent: CParticleFunctionPreEmission
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToCPVelocity {
            public const nint m_nCPInput = 0x1B4; // int32
            public const nint m_nCPOutputVel = 0x1B8; // int32
            public const nint m_bNormalize = 0x1BC; // bool
            public const nint m_nCPOutputMag = 0x1C0; // int32
            public const nint m_nCPField = 0x1C4; // int32
            public const nint m_vecComparisonVelocity = 0x1C8; // CParticleCollectionVecInput
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClientPhysics {
            public const nint m_strPhysicsType = 0x200; // CUtlString
            public const nint m_bKillParticles = 0x208; // bool
            public const nint m_bDeleteSim = 0x209; // bool
            public const nint m_nControlPoint = 0x20C; // int32
            public const nint m_nColorBlendType = 0x210; // ParticleColorBlendType_t
        }
        // Parent: CGeneralSpin
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpinYaw {
        }
        // Parent: PointDefinition_t
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinitionWithTimeValues_t {
            public const nint m_flTimeDuration = 0x14; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderProjectedMaterial_t {
            public const nint m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CParticleFunctionForce
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ExternalWindForce {
            public const nint m_vecSamplePosition = 0x1C0; // CPerParticleVecInput
            public const nint m_vecScale = 0x7F0; // CPerParticleVecInput
            public const nint m_bSampleWind = 0xE20; // bool
            public const nint m_bSampleWater = 0xE21; // bool
            public const nint m_bDampenNearWaterPlane = 0xE22; // bool
            public const nint m_bSampleGravity = 0xE23; // bool
            public const nint m_vecGravityForce = 0xE28; // CPerParticleVecInput
            public const nint m_bUseBasicMovementGravity = 0x1458; // bool
            public const nint m_flLocalGravityScale = 0x1460; // CPerParticleFloatInput
            public const nint m_flLocalBuoyancyScale = 0x15B0; // CPerParticleFloatInput
            public const nint m_vecBuoyancyForce = 0x1700; // CPerParticleVecInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ModelCull {
            public const nint m_nControlPointNumber = 0x1B4; // int32
            public const nint m_bBoundBox = 0x1B8; // bool
            public const nint m_bCullOutside = 0x1B9; // bool
            public const nint m_bUseBones = 0x1BA; // bool
            public const nint m_HitboxSetName = 0x1BB; // char[128]
        }
        // Parent: CBaseRendererSource2
        // Fields count: 28
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSprites {
            public const nint m_nSequenceOverride = 0x2640; // CParticleCollectionRendererFloatInput
            public const nint m_nOrientationType = 0x2790; // ParticleOrientationChoiceList_t
            public const nint m_nOrientationControlPoint = 0x2794; // int32
            public const nint m_bUseYawWithNormalAligned = 0x2798; // bool
            public const nint m_flMinSize = 0x27A0; // CParticleCollectionRendererFloatInput
            public const nint m_flMaxSize = 0x28F0; // CParticleCollectionRendererFloatInput
            public const nint m_flAlphaAdjustWithSizeAdjust = 0x2A40; // CParticleCollectionRendererFloatInput
            public const nint m_flStartFadeSize = 0x2B90; // CParticleCollectionRendererFloatInput
            public const nint m_flEndFadeSize = 0x2CE0; // CParticleCollectionRendererFloatInput
            public const nint m_flStartFadeDot = 0x2E30; // float32
            public const nint m_flEndFadeDot = 0x2E34; // float32
            public const nint m_bDistanceAlpha = 0x2E38; // bool
            public const nint m_bSoftEdges = 0x2E39; // bool
            public const nint m_flEdgeSoftnessStart = 0x2E3C; // float32
            public const nint m_flEdgeSoftnessEnd = 0x2E40; // float32
            public const nint m_bOutline = 0x2E44; // bool
            public const nint m_OutlineColor = 0x2E45; // Color
            public const nint m_nOutlineAlpha = 0x2E4C; // int32
            public const nint m_flOutlineStart0 = 0x2E50; // float32
            public const nint m_flOutlineStart1 = 0x2E54; // float32
            public const nint m_flOutlineEnd0 = 0x2E58; // float32
            public const nint m_flOutlineEnd1 = 0x2E5C; // float32
            public const nint m_nLightingMode = 0x2E60; // ParticleLightingQuality_t
            public const nint m_flLightingTessellation = 0x2E68; // CParticleCollectionRendererFloatInput
            public const nint m_flLightingDirectionality = 0x2FB8; // CParticleCollectionRendererFloatInput
            public const nint m_bParticleShadows = 0x3108; // bool
            public const nint m_flShadowDensity = 0x310C; // float32
            public const nint m_replicationParameters = 0x3110; // CReplicationParameters
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PercentageBetweenTransformLerpCPs {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1B4; // float32
            public const nint m_flInputMax = 0x1B8; // float32
            public const nint m_TransformStart = 0x1C0; // CParticleTransformInput
            public const nint m_TransformEnd = 0x220; // CParticleTransformInput
            public const nint m_nOutputStartCP = 0x280; // int32
            public const nint m_nOutputStartField = 0x284; // int32
            public const nint m_nOutputEndCP = 0x288; // int32
            public const nint m_nOutputEndField = 0x28C; // int32
            public const nint m_nSetMethod = 0x290; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x294; // bool
            public const nint m_bRadialCheck = 0x295; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetPerChildControlPoint {
            public const nint m_nChildGroupID = 0x1B0; // int32
            public const nint m_nFirstControlPoint = 0x1B4; // int32
            public const nint m_nNumControlPoints = 0x1B8; // int32
            public const nint m_nParticleIncrement = 0x1C0; // CParticleCollectionFloatInput
            public const nint m_nFirstSourcePoint = 0x310; // CParticleCollectionFloatInput
            public const nint m_bSetOrientation = 0x460; // bool
            public const nint m_nOrientationField = 0x464; // ParticleAttributeIndex_t
            public const nint m_bNumBasedOnParticleCount = 0x468; // bool
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderTreeShake {
            public const nint m_flPeakStrength = 0x1FC; // float32
            public const nint m_nPeakStrengthFieldOverride = 0x200; // ParticleAttributeIndex_t
            public const nint m_flRadius = 0x204; // float32
            public const nint m_nRadiusFieldOverride = 0x208; // ParticleAttributeIndex_t
            public const nint m_flShakeDuration = 0x20C; // float32
            public const nint m_flTransitionTime = 0x210; // float32
            public const nint m_flTwistAmount = 0x214; // float32
            public const nint m_flRadialAmount = 0x218; // float32
            public const nint m_flControlPointOrientationAmount = 0x21C; // float32
            public const nint m_nControlPointForLinearDirection = 0x220; // int32
        }
        // Parent: CParticleFunctionConstraint
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WorldCollideConstraint {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetAttributeToScalarExpression {
            public const nint m_nExpression = 0x1B0; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1B8; // CPerParticleFloatInput
            public const nint m_flInput2 = 0x308; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x458; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x5A8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x5AC; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CycleScalar {
            public const nint m_nDestField = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flStartValue = 0x1B4; // float32
            public const nint m_flEndValue = 0x1B8; // float32
            public const nint m_flCycleTime = 0x1BC; // float32
            public const nint m_bDoNotRepeatCycle = 0x1C0; // bool
            public const nint m_bSynchronizeParticles = 0x1C1; // bool
            public const nint m_nCPScale = 0x1C4; // int32
            public const nint m_nCPFieldMin = 0x1C8; // int32
            public const nint m_nCPFieldMax = 0x1CC; // int32
            public const nint m_nSetMethod = 0x1D0; // ParticleSetMethod_t
        }
        // Parent: CParticleFunctionRenderer
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderMaterialProxy {
            public const nint m_nMaterialControlPoint = 0x1FC; // int32
            public const nint m_nProxyType = 0x200; // MaterialProxyType_t
            public const nint m_MaterialVars = 0x208; // CUtlVector<MaterialVariable_t>
            public const nint m_hOverrideMaterial = 0x220; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flMaterialOverrideEnabled = 0x228; // CParticleCollectionFloatInput
            public const nint m_vecColorScale = 0x378; // CParticleCollectionVecInput
            public const nint m_flAlpha = 0x9A8; // CPerParticleFloatInput
            public const nint m_nColorBlendType = 0xAF8; // ParticleColorBlendType_t
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FloatInputMaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_flInput = 0x8; // CParticleCollectionFloatInput
        }
        // Parent: CParticleCollectionVecInput
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CParticleCollectionRendererVecInput {
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarLinear {
            public const nint m_RateMin = 0x1B0; // float32
            public const nint m_RateMax = 0x1B4; // float32
            public const nint m_flStartTime_min = 0x1B8; // float32
            public const nint m_flStartTime_max = 0x1BC; // float32
            public const nint m_flEndTime_min = 0x1C0; // float32
            public const nint m_flEndTime_max = 0x1C4; // float32
            public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_bProportionalOp = 0x1F4; // bool
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RotateVector {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_vecRotAxisMin = 0x1B4; // Vector
            public const nint m_vecRotAxisMax = 0x1C0; // Vector
            public const nint m_flRotRateMin = 0x1CC; // float32
            public const nint m_flRotRateMax = 0x1D0; // float32
            public const nint m_bNormalize = 0x1D4; // bool
            public const nint m_flScale = 0x1D8; // CPerParticleFloatInput
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitVecCollection {
            public const nint m_InputValue = 0x1B8; // CParticleCollectionVecInput
            public const nint m_nOutputField = 0x7E8; // ParticleAttributeIndex_t
        }
        // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        }
        // Parent: CParticleFunctionInitializer
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SequenceFromCP {
            public const nint m_bKillUnused = 0x1B4; // bool
            public const nint m_bRadiusScale = 0x1B5; // bool
            public const nint m_nCP = 0x1B8; // int32
            public const nint m_vecOffset = 0x1BC; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CPOffsetToPercentageBetweenCPs {
            public const nint m_flInputMin = 0x1B0; // float32
            public const nint m_flInputMax = 0x1B4; // float32
            public const nint m_flInputBias = 0x1B8; // float32
            public const nint m_nStartCP = 0x1BC; // int32
            public const nint m_nEndCP = 0x1C0; // int32
            public const nint m_nOffsetCP = 0x1C4; // int32
            public const nint m_nOuputCP = 0x1C8; // int32
            public const nint m_nInputCP = 0x1CC; // int32
            public const nint m_bRadialCheck = 0x1D0; // bool
            public const nint m_bScaleOffset = 0x1D1; // bool
            public const nint m_vecOffset = 0x1D4; // Vector
        }
        // Parent: CParticleFunctionOperator
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpEndCapScalar {
            public const nint m_nFieldOutput = 0x1B0; // ParticleAttributeIndex_t
            public const nint m_flOutput = 0x1B4; // float32
            public const nint m_flLerpTime = 0x1B8; // float32
        }
        // Parent: None
        // Fields count: 0
        public static class CParticleProperty {
        }
    }
}
