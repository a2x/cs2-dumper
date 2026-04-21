// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-21 16:19:03.827280400 UTC

namespace CS2Dumper.Schemas {
    // Module: particles.dll
    // Class count: 501
    // Enum count: 76
    public static class ParticlesDll {
        // Alignment: 4
        // Member count: 2
        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 7
        public enum Detail2Combo_t : uint {
            DETAIL_2_COMBO_UNINITIALIZED = unchecked((uint)-1),
            DETAIL_2_COMBO_OFF = 0x0,
            DETAIL_2_COMBO_ADD = 0x1,
            DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
            DETAIL_2_COMBO_MOD2X = 0x3,
            DETAIL_2_COMBO_MUL = 0x4,
            DETAIL_2_COMBO_CROSSFADE = 0x5
        }
        // Alignment: 4
        // Member count: 4
        public enum MissingParentInheritBehavior_t : uint {
            MISSING_PARENT_DO_NOTHING = unchecked((uint)-1),
            MISSING_PARENT_KILL = 0x0,
            MISSING_PARENT_FIND_NEW = 0x1,
            MISSING_PARENT_SAME_INDEX = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleTraceMissBehavior_t : uint {
            PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
            PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
            PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 4
        public enum ParticleVRHandChoiceList_t : uint {
            PARTICLE_VRHAND_LEFT = 0x0,
            PARTICLE_VRHAND_RIGHT = 0x1,
            PARTICLE_VRHAND_CP = 0x2,
            PARTICLE_VRHAND_CP_OBJECT = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleReplicationMode_t : uint {
            PARTICLE_REPLICATIONMODE_NONE = 0x0,
            PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleEntityPos_t : uint {
            PARTICLE_ABS_ORIGIN = 0x0,
            PARTICLE_WORLDSPACE_CENTER = 0x1,
            PARTICLE_EYES = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleFanType_t : uint {
            PARTICLE_FAN_TYPE_FAN = 0x0,
            PARTICLE_FAN_TYPE_ROTOR_WASH = 0x1,
            PARTICLE_FAN_TYPE_RADIAL = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum PetGroundType_t : uint {
            PET_GROUND_NONE = 0x0,
            PET_GROUND_GRID = 0x1,
            PET_GROUND_PLANE = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum InheritableBoolType_t : uint {
            INHERITABLE_BOOL_INHERIT = 0x0,
            INHERITABLE_BOOL_FALSE = 0x1,
            INHERITABLE_BOOL_TRUE = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum ParticlePostProcessPriorityGroup_t : uint {
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
            PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5
        }
        // Alignment: 4
        // Member count: 7
        public enum ParticleCollisionGroup_t : uint {
            PARTICLE_COLLISION_GROUP_DEFAULT = 0x4,
            PARTICLE_COLLISION_GROUP_DEBRIS = 0x5,
            PARTICLE_COLLISION_GROUP_INTERACTIVE = 0x7,
            PARTICLE_COLLISION_GROUP_PLAYER = 0x8,
            PARTICLE_COLLISION_GROUP_VEHICLE = 0xA,
            PARTICLE_COLLISION_GROUP_NPC = 0xC,
            PARTICLE_COLLISION_GROUP_PROPS = 0x18
        }
        // Alignment: 4
        // Member count: 4
        public enum DetailCombo_t : uint {
            DETAIL_COMBO_OFF = 0x0,
            DETAIL_COMBO_ADD = 0x1,
            DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
            DETAIL_COMBO_MOD2X = 0x3
        }
        // Alignment: 4
        // Member count: 12
        public enum ScalarExpressionType_t : uint {
            SCALAR_EXPRESSION_UNINITIALIZED = unchecked((uint)-1),
            SCALAR_EXPRESSION_ADD = 0x0,
            SCALAR_EXPRESSION_SUBTRACT = 0x1,
            SCALAR_EXPRESSION_MUL = 0x2,
            SCALAR_EXPRESSION_DIVIDE = 0x3,
            SCALAR_EXPRESSION_INPUT_1 = 0x4,
            SCALAR_EXPRESSION_MIN = 0x5,
            SCALAR_EXPRESSION_MAX = 0x6,
            SCALAR_EXPRESSION_MOD = 0x7,
            SCALAR_EXPRESSION_EQUAL = 0x8,
            SCALAR_EXPRESSION_GT = 0x9,
            SCALAR_EXPRESSION_LT = 0xA
        }
        // Alignment: 4
        // Member count: 14
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
        // Member count: 2
        public enum BlurFilterType_t : uint {
            BLURFILTER_GAUSSIAN = 0x0,
            BLURFILTER_BOX = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum StandardLightingAttenuationStyle_t : uint {
            LIGHT_STYLE_OLD = 0x0,
            LIGHT_STYLE_NEW = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleParentSetMode_t : uint {
            PARTICLE_SET_PARENT_NO = 0x0,
            PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
            PARTICLE_SET_PARENT_ROOT = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum ParticleLightingQuality_t : uint {
            PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
            PARTICLE_LIGHTING_PER_VERTEX = 0x1,
            PARTICLE_LIGHTING_PER_PIXEL = unchecked((uint)-1),
            PARTICLE_LIGHTING_OVERRIDE_POSITION = 0x2,
            PARTICLE_LIGHTING_OVERRIDE_COLOR = 0x3,
            PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleVolumetricSmokeCreationType_t : uint {
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0x0,
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 0x1
        }
        // Alignment: 4
        // Member count: 8
        public enum SetStatisticExpressionType_t : uint {
            SET_EXPRESSION_UNINITIALIZED = unchecked((uint)-1),
            SET_EXPRESSION_SUM = 0x0,
            SET_EXPRESSION_MEAN = 0x1,
            SET_EXPRESSION_MEDIAN = 0x2,
            SET_EXPRESSION_MODE = 0x3,
            SET_EXPRESSION_STANDARD_DEVIATION = 0x4,
            SET_EXPRESSION_MIN = 0x5,
            SET_EXPRESSION_MAX = 0x6
        }
        // Alignment: 4
        // Member count: 11
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
        // Member count: 2
        public enum ParticleMassMode_t : uint {
            PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
            PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleHitboxBiasType_t : uint {
            PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
            PARTICLE_HITBOX_BIAS_HITBOX = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum ParticleControlPointAxis_t : uint {
            PARTICLE_CP_AXIS_X = 0x0,
            PARTICLE_CP_AXIS_Y = 0x1,
            PARTICLE_CP_AXIS_Z = 0x2,
            PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
            PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
            PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
        }
        // Alignment: 4
        // Member count: 12
        public enum ParticlePinDistance_t : uint {
            PARTICLE_PIN_DISTANCE_NONE = unchecked((uint)-1),
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
        // Member count: 7
        public enum VectorFloatExpressionType_t : uint {
            VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = unchecked((uint)-1),
            VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
            VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
            VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
            VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleFogType_t : uint {
            PARTICLE_FOG_GAME_DEFAULT = 0x0,
            PARTICLE_FOG_ENABLED = 0x1,
            PARTICLE_FOG_DISABLED = 0x2
        }
        // Alignment: 4
        // Member count: 10
        public enum VectorExpressionType_t : uint {
            VECTOR_EXPRESSION_UNINITIALIZED = unchecked((uint)-1),
            VECTOR_EXPRESSION_ADD = 0x0,
            VECTOR_EXPRESSION_SUBTRACT = 0x1,
            VECTOR_EXPRESSION_MUL = 0x2,
            VECTOR_EXPRESSION_DIVIDE = 0x3,
            VECTOR_EXPRESSION_INPUT_1 = 0x4,
            VECTOR_EXPRESSION_MIN = 0x5,
            VECTOR_EXPRESSION_MAX = 0x6,
            VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
            VECTOR_EXPRESSION_LERP = 0x8
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleMultiSegmentInputSelection_t : uint {
            PARTICLE_MULTISEGMENT_SELECTION_FLOAT = 0x0,
            PARTICLE_MULTISEGMENT_SELECTION_STRING = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleRotationLockType_t : uint {
            PARTICLE_ROTATION_LOCK_NONE = 0x0,
            PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
            PARTICLE_ROTATION_LOCK_NORMAL = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum HitboxLerpType_t : uint {
            HITBOX_LERP_LIFETIME = 0x0,
            HITBOX_LERP_CONSTANT = 0x1
        }
        // Alignment: 4
        // Member count: 7
        public enum ParticleAttrBoxFlags_t : uint {
            PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
            PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1,
            PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 0x2,
            PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 0x4,
            PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 0x8,
            PARTICLE_ATTR_BOX_FLAGS_FROZEN = 0x10,
            PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 0x20
        }
        // Alignment: 4
        // Member count: 5
        public enum ParticleTopology_t : uint {
            PARTICLE_TOPOLOGY_POINTS = 0x0,
            PARTICLE_TOPOLOGY_LINES = 0x1,
            PARTICLE_TOPOLOGY_TRIS = 0x2,
            PARTICLE_TOPOLOGY_QUADS = 0x3,
            PARTICLE_TOPOLOGY_CUBES = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleLightBehaviorChoiceList_t : uint {
            PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
            PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
            PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum ModelHitboxType_t : uint {
            MODEL_HITBOX_TYPE_STANDARD = 0x0,
            MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
            MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
            MODEL_HITBOX_TYPE_SNAPSHOT = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleMultiSegmentCountSelection_t : uint {
            PARTICLE_MULTISEGMENT_SEG_COUNT_7 = 0x7,
            PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 0xE,
            PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 0x10
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleOrientationType_t : uint {
            PARTICLE_ORIENTATION_NONE = 0x0,
            PARTICLE_ORIENTATION_VELOCITY = 0x1,
            PARTICLE_ORIENTATION_NORMAL = 0x2,
            PARTICLE_ORIENTATION_ROTATION = 0x4
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleTraceSet_t : uint {
            PARTICLE_TRACE_SET_ALL = 0x0,
            PARTICLE_TRACE_SET_STATIC = 0x1,
            PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
            PARTICLE_TRACE_SET_DYNAMIC = 0x3
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 3
        public enum ParticleSelection_t : uint {
            PARTICLE_SELECTION_FIRST = 0x0,
            PARTICLE_SELECTION_LAST = 0x1,
            PARTICLE_SELECTION_NUMBER = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleToolsState_t : uint {
            PARTICLE_TOOLS_STATE_ALWAYS_ON = unchecked((uint)-1),
            PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0x0,
            PARTICLE_TOOLS_STATE_GAME_ONLY = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum SnapshotIndexType_t : uint {
            SNAPSHOT_INDEX_INCREMENT = 0x0,
            SNAPSHOT_INDEX_DIRECT = 0x1
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 2
        public enum ParticleLightnintBranchBehavior_t : uint {
            PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
            PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum MaterialProxyType_t : uint {
            MATERIAL_PROXY_STATUS_EFFECT = 0x0,
            MATERIAL_PROXY_TINT = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleDepthFeatheringMode_t : uint {
            PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
            PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
            PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleLightUnitChoiceList_t : uint {
            PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
            PARTICLE_LIGHT_UNIT_LUMENS = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleMultiSegmentSpecialCharacter_t : uint {
            PARTICLE_MULTISEGMENT_SPECIAL_NONE = unchecked((uint)-1),
            PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0x0,
            PARTICLE_MULTISEGMENT_SPECIAL_COLON = 0x1,
            PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleFalloffFunction_t : uint {
            PARTICLE_FALLOFF_CONSTANT = 0x0,
            PARTICLE_FALLOFF_LINEAR = 0x1,
            PARTICLE_FALLOFF_EXPONENTIAL = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleSequenceCropOverride_t : uint {
            PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = unchecked((uint)-1),
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleDetailLevel_t : uint {
            PARTICLEDETAIL_LOW = 0x0,
            PARTICLEDETAIL_MEDIUM = 0x1,
            PARTICLEDETAIL_HIGH = 0x2,
            PARTICLEDETAIL_ULTRA = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum BBoxVolumeType_t : uint {
            BBOX_VOLUME = 0x0,
            BBOX_DIMENSIONS = 0x1,
            BBOX_MINS_MAXS = 0x2,
            BBOX_RADIUS = 0x3
        }
        // Alignment: 4
        // Member count: 12
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
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
            SPRITECARD_TEXTURE_DEPTH = 0xA,
            SPRITECARD_TEXTURE_ILLUMINATION_GRADIENT = 0xB
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleAlphaReferenceType_t : uint {
            PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
            PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
        }
        // Alignment: 4
        // Member count: 15
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
        // Member count: 3
        public enum ParticleVolumetricSmokeType_t : uint {
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0x0,
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK = 0x1,
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum RenderModelSubModelFieldType_t : uint {
            SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
            SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
            SUBMODEL_AS_MESHGROUP_MASK = 0x2,
            SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleHitboxDataSelection_t : uint {
            PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
            PARTICLE_HITBOX_COUNT = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum ParticleOrientationChoiceList_t : uint {
            PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
            PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
            PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
            PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
            PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
            PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5
        }
        // Alignment: 4
        // Member count: 5
        public enum ParticleCollisionMode_t : uint {
            COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
            COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
            COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
            COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
            COLLISION_MODE_DISABLED = unchecked((uint)-1)
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleSortingChoiceList_t : uint {
            PARTICLE_SORTING_NEAREST = 0x0,
            PARTICLE_SORTING_CREATION_TIME = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleEndcapMode_t : uint {
            PARTICLE_ENDCAP_ALWAYS_ON = unchecked((uint)-1),
            PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
            PARTICLE_ENDCAP_ENDCAP_ON = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ClosestPointTestType_t : uint {
            PARTICLE_CLOSEST_TYPE_BOX = 0x0,
            PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
            PARTICLE_CLOSEST_TYPE_HYBRID = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum ParticleImpulseType_t : uint {
            IMPULSE_TYPE_NONE = 0x0,
            IMPULSE_TYPE_GENERIC = 0x1,
            IMPULSE_TYPE_ROPE = 0x2,
            IMPULSE_TYPE_EXPLOSION = 0x4,
            IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
            IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleLiquidContents_t : uint {
            PARTICLE_LIQUID_NONE = 0x0,
            PARTICLE_LIQUID_OIL = 0x1,
            PARTICLE_LIQUID_WATER = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum SpriteCardShaderType_t : uint {
            SPRITECARD_SHADER_BASE = 0x0,
            SPRITECARD_SHADER_CUSTOM = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum ParticleOmni2LightTypeChoiceList_t : uint {
            PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
            PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum ParticleLightFogLightingMode_t : uint {
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleLightTypeChoiceList_t : uint {
            PARTICLE_LIGHT_TYPE_POINT = 0x0,
            PARTICLE_LIGHT_TYPE_SPOT = 0x1,
            PARTICLE_LIGHT_TYPE_FX = 0x2,
            PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum ParticleOrientationSetMode_t : uint {
            PARTICLE_ORIENTATION_SET_NONE = unchecked((uint)-1),
            PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
            PARTICLE_ORIENTATION_SET_FROM_NORMAL = 0x1,
            PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x2
        }
        // Alignment: 8
        // Member count: 10
        public enum ParticleCollisionMask_t : ulong {
            PARTICLE_MASK_ALL = unchecked((ulong)-1),
            PARTICLE_MASK_SOLID = 0xC3001,
            PARTICLE_MASK_WATER = 0x18000,
            PARTICLE_MASK_SOLID_WATER = 0xDB001,
            PARTICLE_MASK_SHOT = 0x1C1003,
            PARTICLE_MASK_SHOT_BRUSHONLY = 0x101001,
            PARTICLE_MASK_SHOT_HULL = 0x1C3001,
            PARTICLE_MASK_OPAQUE = 0x80,
            PARTICLE_MASK_DEFAULTPLAYERSOLID = 0xC3011,
            PARTICLE_MASK_NPCSOLID = 0xC3021
        }
        // Alignment: 4
        // Member count: 2
        public enum TextureRepetitionMode_t : uint {
            TEXTURE_REPETITION_PARTICLE = 0x0,
            TEXTURE_REPETITION_PATH = 0x1
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
        // MPropertyDescription
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
            public const nint m_Always = 0xC0; // CPulse_OutflowConnection
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
            public const nint m_nBlackboardIndex = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_ExpectedArgs = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x70; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x78; // CPulse_ResumePoint
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
        // Parent: None
        // Field count: 0
        public static class IParticleCollection {
        }
        // Parent: None
        // Field count: 1
        public static class ParticleAttributeIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapGravityToVector {
            public const nint m_vInput1 = 0x1D8; // CPerParticleVecInput
            public const nint m_nOutputField = 0x890; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x894; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x898; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Decay {
            public const nint m_bRopeDecay = 0x1D8; // bool
            public const nint m_bForcePreserveParticleOrder = 0x1D9; // bool
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderDeferredLight {
            public const nint m_bUseAlphaTestWindow = 0x228; // bool
            public const nint m_bUseTexture = 0x229; // bool
            public const nint m_flRadiusScale = 0x22C; // float32
            public const nint m_flAlphaScale = 0x230; // float32
            public const nint m_nAlpha2Field = 0x234; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x238; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x8F0; // ParticleColorBlendType_t
            public const nint m_flLightDistance = 0x8F4; // float32
            public const nint m_flStartFalloff = 0x8F8; // float32
            public const nint m_flDistanceFalloff = 0x8FC; // float32
            public const nint m_flSpotFoV = 0x900; // float32
            public const nint m_nAlphaTestPointField = 0x904; // ParticleAttributeIndex_t
            public const nint m_nAlphaTestRangeField = 0x908; // ParticleAttributeIndex_t
            public const nint m_nAlphaTestSharpnessField = 0x90C; // ParticleAttributeIndex_t
            public const nint m_hTexture = 0x910; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nHSVShiftControlPoint = 0x918; // int32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSpeedtoCP {
            public const nint m_nInControlPointNumber = 0x1E0; // int32
            public const nint m_nOutControlPointNumber = 0x1E4; // int32
            public const nint m_nField = 0x1E8; // int32
            public const nint m_flInputMin = 0x1EC; // float32
            public const nint m_flInputMax = 0x1F0; // float32
            public const nint m_flOutputMin = 0x1F4; // float32
            public const nint m_flOutputMax = 0x1F8; // float32
            public const nint m_bUseDeltaV = 0x1FC; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformToVelocity {
            public const nint m_TransformInput = 0x1D8; // CParticleTransformInput
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CollisionGroupContext_t {
            public const nint m_nCollisionGroupNumber = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionPreEmission {
            public const nint m_bRunOnce = 0x1D8; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeOutSimple {
            public const nint m_flFadeOutTime = 0x1D8; // float32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpringToVectorConstraint {
            public const nint m_flRestLength = 0x1D8; // CPerParticleFloatInput
            public const nint m_flMinDistance = 0x348; // CPerParticleFloatInput
            public const nint m_flMaxDistance = 0x4B8; // CPerParticleFloatInput
            public const nint m_flRestingLength = 0x628; // CPerParticleFloatInput
            public const nint m_vecAnchorVector = 0x798; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 32
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderRopes {
            public const nint m_bEnableFadingAndClamping = 0x2DF0; // bool
            public const nint m_flMinSize = 0x2DF4; // float32
            public const nint m_flMaxSize = 0x2DF8; // float32
            public const nint m_flStartFadeSize = 0x2DFC; // float32
            public const nint m_flEndFadeSize = 0x2E00; // float32
            public const nint m_flStartFadeDot = 0x2E04; // float32
            public const nint m_flEndFadeDot = 0x2E08; // float32
            public const nint m_flRadiusTaper = 0x2E0C; // float32
            public const nint m_nMinTesselation = 0x2E10; // int32
            public const nint m_nMaxTesselation = 0x2E14; // int32
            public const nint m_flTessScale = 0x2E18; // float32
            public const nint m_flTextureVWorldSize = 0x2E20; // CParticleCollectionRendererFloatInput
            public const nint m_flTextureVScrollRate = 0x2F90; // CParticleCollectionRendererFloatInput
            public const nint m_flTextureVOffset = 0x3100; // CParticleCollectionRendererFloatInput
            public const nint m_nTextureVParamsCP = 0x3270; // int32
            public const nint m_bClampV = 0x3274; // bool
            public const nint m_nScaleCP1 = 0x3278; // int32
            public const nint m_nScaleCP2 = 0x327C; // int32
            public const nint m_flScaleVSizeByControlPointDistance = 0x3280; // float32
            public const nint m_flScaleVScrollByControlPointDistance = 0x3284; // float32
            public const nint m_flScaleVOffsetByControlPointDistance = 0x3288; // float32
            public const nint m_bUseScalarForTextureCoordinate = 0x328D; // bool
            public const nint m_nScalarFieldForTextureCoordinate = 0x3290; // ParticleAttributeIndex_t
            public const nint m_flScalarAttributeTextureCoordScale = 0x3294; // float32
            public const nint m_bReverseOrder = 0x3298; // bool
            public const nint m_bClosedLoop = 0x3299; // bool
            public const nint m_nSplitField = 0x329C; // ParticleAttributeIndex_t
            public const nint m_bSortBySegmentID = 0x32A0; // bool
            public const nint m_nOrientationType = 0x32A4; // ParticleOrientationChoiceList_t
            public const nint m_nVectorFieldForOrientation = 0x32A8; // ParticleAttributeIndex_t
            public const nint m_bDrawAsOpaque = 0x32AC; // bool
            public const nint m_bGenerateNormals = 0x32AD; // bool
        }
        // Parent: None
        // Field count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_StatusEffectCitadel {
            public const nint m_flSFXColorWarpAmount = 0x1E0; // float32
            public const nint m_flSFXNormalAmount = 0x1E4; // float32
            public const nint m_flSFXMetalnessAmount = 0x1E8; // float32
            public const nint m_flSFXRoughnessAmount = 0x1EC; // float32
            public const nint m_flSFXSelfIllumAmount = 0x1F0; // float32
            public const nint m_flSFXSScale = 0x1F4; // float32
            public const nint m_flSFXSScrollX = 0x1F8; // float32
            public const nint m_flSFXSScrollY = 0x1FC; // float32
            public const nint m_flSFXSScrollZ = 0x200; // float32
            public const nint m_flSFXSOffsetX = 0x204; // float32
            public const nint m_flSFXSOffsetY = 0x208; // float32
            public const nint m_flSFXSOffsetZ = 0x20C; // float32
            public const nint m_nDetailCombo = 0x210; // DetailCombo_t
            public const nint m_flSFXSDetailAmount = 0x214; // float32
            public const nint m_flSFXSDetailScale = 0x218; // float32
            public const nint m_flSFXSDetailScrollX = 0x21C; // float32
            public const nint m_flSFXSDetailScrollY = 0x220; // float32
            public const nint m_flSFXSDetailScrollZ = 0x224; // float32
            public const nint m_flSFXSUseModelUVs = 0x228; // float32
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSound {
            public const nint m_flDurationScale = 0x228; // float32
            public const nint m_flSndLvlScale = 0x22C; // float32
            public const nint m_flPitchScale = 0x230; // float32
            public const nint m_flVolumeScale = 0x234; // float32
            public const nint m_nSndLvlField = 0x238; // ParticleAttributeIndex_t
            public const nint m_nDurationField = 0x23C; // ParticleAttributeIndex_t
            public const nint m_nPitchField = 0x240; // ParticleAttributeIndex_t
            public const nint m_nVolumeField = 0x244; // ParticleAttributeIndex_t
            public const nint m_nChannel = 0x248; // int32
            public const nint m_nCPReference = 0x24C; // int32
            public const nint m_pszSoundName = 0x250; // char[256]
            public const nint m_bSuppressStopSoundEvent = 0x350; // bool
        }
        // Parent: None
        // Field count: 19
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
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointsToParticle {
            public const nint m_nChildGroupID = 0x1D8; // int32
            public const nint m_nFirstControlPoint = 0x1DC; // int32
            public const nint m_nNumControlPoints = 0x1E0; // int32
            public const nint m_nFirstSourcePoint = 0x1E4; // int32
            public const nint m_bReverse = 0x1E8; // bool
            public const nint m_bSetOrientation = 0x1E9; // bool
            public const nint m_nOrientationMode = 0x1EC; // ParticleOrientationSetMode_t
            public const nint m_nSetParent = 0x1F0; // ParticleParentSetMode_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPVelocityToVector {
            public const nint m_nControlPoint = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1E0; // float32
            public const nint m_bNormalize = 0x1E4; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PointVectorAtNextParticle {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInterpolation = 0x1E0; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticlePreviewBodyGroup_t {
            public const nint m_bodyGroupName = 0x0; // CUtlString
            public const nint m_nValue = 0x8; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateScalarSimple {
            public const nint m_Rate = 0x1D8; // float32
            public const nint m_Frequency = 0x1DC; // float32
            public const nint m_nField = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_flOscMult = 0x1E4; // float32
            public const nint m_flOscAdd = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_StatusEffect {
            public const nint m_nDetail2Combo = 0x1E0; // Detail2Combo_t
            public const nint m_flDetail2Rotation = 0x1E4; // float32
            public const nint m_flDetail2Scale = 0x1E8; // float32
            public const nint m_flDetail2BlendFactor = 0x1EC; // float32
            public const nint m_flColorWarpIntensity = 0x1F0; // float32
            public const nint m_flDiffuseWarpBlendToFull = 0x1F4; // float32
            public const nint m_flEnvMapIntensity = 0x1F8; // float32
            public const nint m_flAmbientScale = 0x1FC; // float32
            public const nint m_specularColor = 0x200; // Color
            public const nint m_flSpecularScale = 0x204; // float32
            public const nint m_flSpecularExponent = 0x208; // float32
            public const nint m_flSpecularExponentBlendToFull = 0x20C; // float32
            public const nint m_flSpecularBlendToFull = 0x210; // float32
            public const nint m_rimLightColor = 0x214; // Color
            public const nint m_flRimLightScale = 0x218; // float32
            public const nint m_flReflectionsTintByBaseBlendToNone = 0x21C; // float32
            public const nint m_flMetalnessBlendToFull = 0x220; // float32
            public const nint m_flSelfIllumBlendToFull = 0x224; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RtEnvCull {
            public const nint m_vecTestDir = 0x1E0; // Vector
            public const nint m_vecTestNormal = 0x1EC; // Vector
            public const nint m_bUseVelocity = 0x1F8; // bool
            public const nint m_bCullOnMiss = 0x1F9; // bool
            public const nint m_bLifeAdjust = 0x1FA; // bool
            public const nint m_RtEnvName = 0x1FB; // char[128]
            public const nint m_nRTEnvCP = 0x27C; // int32
            public const nint m_nComponent = 0x280; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistance {
            public const nint m_fMinDistance = 0x1D8; // CParticleCollectionFloatInput
            public const nint m_fMaxDistance = 0x348; // CParticleCollectionFloatInput
            public const nint m_nControlPointNumber = 0x4B8; // int32
            public const nint m_CenterOffset = 0x4BC; // Vector
            public const nint m_bGlobalCenter = 0x4C8; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomVector {
            public const nint m_vecMin = 0x1E0; // Vector
            public const nint m_vecMax = 0x1EC; // Vector
            public const nint m_nFieldOutput = 0x1F8; // ParticleAttributeIndex_t
            public const nint m_randomnessParameters = 0x1FC; // CRandomNumberGeneratorParameters
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialVelocityNoise {
            public const nint m_vecAbsVal = 0x1E0; // Vector
            public const nint m_vecAbsValInv = 0x1EC; // Vector
            public const nint m_vecOffsetLoc = 0x1F8; // CPerParticleVecInput
            public const nint m_flOffset = 0x8B0; // CPerParticleFloatInput
            public const nint m_vecOutputMin = 0xA20; // CPerParticleVecInput
            public const nint m_vecOutputMax = 0x10D8; // CPerParticleVecInput
            public const nint m_flNoiseScale = 0x1790; // CPerParticleFloatInput
            public const nint m_flNoiseScaleLoc = 0x1900; // CPerParticleFloatInput
            public const nint m_TransformInput = 0x1A70; // CParticleTransformInput
            public const nint m_bIgnoreDt = 0x1AD8; // bool
        }
        // Parent: None
        // Field count: 5
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
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalarOnceTimed {
            public const nint m_bProportional = 0x1D8; // bool
            public const nint m_nFieldInput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E4; // float32
            public const nint m_flInputMax = 0x1E8; // float32
            public const nint m_flOutputMin = 0x1EC; // float32
            public const nint m_flOutputMax = 0x1F0; // float32
            public const nint m_flRemapTime = 0x1F4; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelSequence {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlaneCull {
            public const nint m_nPlaneControlPoint = 0x1D8; // int32
            public const nint m_vecPlaneDirection = 0x1E0; // CParticleCollectionVecInput
            public const nint m_bLocalSpace = 0x898; // bool
            public const nint m_flPlaneOffset = 0x89C; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityRandom {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_fSpeedMin = 0x1E8; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0x358; // CPerParticleFloatInput
            public const nint m_LocalCoordinateSystemSpeedMin = 0x4C8; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0xB80; // CPerParticleVecInput
            public const nint m_bIgnoreDT = 0x1238; // bool
            public const nint m_randomnessParameters = 0x123C; // CRandomNumberGeneratorParameters
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ModelDampenMovement {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_bBoundBox = 0x1DC; // bool
            public const nint m_bOutside = 0x1DD; // bool
            public const nint m_bUseBones = 0x1DE; // bool
            public const nint m_HitboxSetName = 0x1DF; // char[128]
            public const nint m_vecPosOffset = 0x260; // CPerParticleVecInput
            public const nint m_fDrag = 0x918; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TwistAroundAxis {
            public const nint m_fForceAmount = 0x1E8; // float32
            public const nint m_TwistAxis = 0x1EC; // Vector
            public const nint m_bLocalSpace = 0x1F8; // bool
            public const nint m_nControlPointNumber = 0x1FC; // int32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TeleportBeam {
            public const nint m_nCPPosition = 0x1D8; // int32
            public const nint m_nCPVelocity = 0x1DC; // int32
            public const nint m_nCPMisc = 0x1E0; // int32
            public const nint m_nCPColor = 0x1E4; // int32
            public const nint m_nCPInvalidColor = 0x1E8; // int32
            public const nint m_nCPExtraArcData = 0x1EC; // int32
            public const nint m_vGravity = 0x1F0; // Vector
            public const nint m_flArcMaxDuration = 0x1FC; // float32
            public const nint m_flSegmentBreak = 0x200; // float32
            public const nint m_flArcSpeed = 0x204; // float32
            public const nint m_flAlpha = 0x208; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapExternalWindToCP {
            public const nint m_nCP = 0x1E0; // int32
            public const nint m_nCPOutput = 0x1E4; // int32
            public const nint m_vecScale = 0x1E8; // CParticleCollectionVecInput
            public const nint m_bSetMagnitude = 0x8A0; // bool
            public const nint m_nOutVectorField = 0x8A4; // int32
        }
        // Parent: None
        // Field count: 65
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseRendererSource2 {
            public const nint m_flRadiusScale = 0x228; // CParticleCollectionRendererFloatInput
            public const nint m_flAlphaScale = 0x398; // CParticleCollectionRendererFloatInput
            public const nint m_flRollScale = 0x508; // CParticleCollectionRendererFloatInput
            public const nint m_nAlpha2Field = 0x678; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x680; // CParticleCollectionRendererVecInput
            public const nint m_nColorBlendType = 0xD38; // ParticleColorBlendType_t
            public const nint m_nShaderType = 0xD3C; // SpriteCardShaderType_t
            public const nint m_strShaderOverride = 0xD40; // CUtlString
            public const nint m_flCenterXOffset = 0xD48; // CParticleCollectionRendererFloatInput
            public const nint m_flCenterYOffset = 0xEB8; // CParticleCollectionRendererFloatInput
            public const nint m_flBumpStrength = 0x1028; // float32
            public const nint m_nCropTextureOverride = 0x102C; // ParticleSequenceCropOverride_t
            public const nint m_vecTexturesInput = 0x1030; // CUtlLeanVector<TextureGroup_t>
            public const nint m_flAnimationRate = 0x1040; // float32
            public const nint m_nAnimationType = 0x1044; // AnimationType_t
            public const nint m_bAnimateInFPS = 0x1048; // bool
            public const nint m_flMotionVectorScaleU = 0x1050; // CParticleCollectionRendererFloatInput
            public const nint m_flMotionVectorScaleV = 0x11C0; // CParticleCollectionRendererFloatInput
            public const nint m_flSelfIllumAmount = 0x1330; // CParticleCollectionRendererFloatInput
            public const nint m_flDiffuseAmount = 0x14A0; // CParticleCollectionRendererFloatInput
            public const nint m_flDiffuseClamp = 0x1610; // CParticleCollectionRendererFloatInput
            public const nint m_nLightingControlPoint = 0x1780; // int32
            public const nint m_nOutputBlendMode = 0x1784; // ParticleOutputBlendMode_t
            public const nint m_bGammaCorrectVertexColors = 0x1788; // bool
            public const nint m_bSaturateColorPreAlphaBlend = 0x1789; // bool
            public const nint m_flAddSelfAmount = 0x1790; // CParticleCollectionRendererFloatInput
            public const nint m_flDesaturation = 0x1900; // CParticleCollectionRendererFloatInput
            public const nint m_flOverbrightFactor = 0x1A70; // CParticleCollectionRendererFloatInput
            public const nint m_nHSVShiftControlPoint = 0x1BE0; // int32
            public const nint m_nFogType = 0x1BE4; // ParticleFogType_t
            public const nint m_flFogAmount = 0x1BE8; // CParticleCollectionRendererFloatInput
            public const nint m_bTintByFOW = 0x1D58; // bool
            public const nint m_bTintByGlobalLight = 0x1D59; // bool
            public const nint m_nPerParticleAlphaReference = 0x1D5C; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleAlphaRefWindow = 0x1D60; // SpriteCardPerParticleScale_t
            public const nint m_nAlphaReferenceType = 0x1D64; // ParticleAlphaReferenceType_t
            public const nint m_flAlphaReferenceSoftness = 0x1D68; // CParticleCollectionRendererFloatInput
            public const nint m_flSourceAlphaValueToMapToZero = 0x1ED8; // CParticleCollectionRendererFloatInput
            public const nint m_flSourceAlphaValueToMapToOne = 0x2048; // CParticleCollectionRendererFloatInput
            public const nint m_bRefract = 0x21B8; // bool
            public const nint m_bRefractSolid = 0x21B9; // bool
            public const nint m_bRefract2Passes = 0x21BA; // bool
            public const nint m_flRefractAmount = 0x21C0; // CParticleCollectionRendererFloatInput
            public const nint m_nRefractBlurRadius = 0x2330; // int32
            public const nint m_nRefractBlurType = 0x2334; // BlurFilterType_t
            public const nint m_bOnlyRenderInEffectsBloomPass = 0x2338; // bool
            public const nint m_bOnlyRenderInEffectsWaterPass = 0x2339; // bool
            public const nint m_bUseMixedResolutionRendering = 0x233A; // bool
            public const nint m_bOnlyRenderInEffecsGameOverlay = 0x233B; // bool
            public const nint m_stencilTestID = 0x233C; // char[128]
            public const nint m_bStencilTestExclude = 0x23BC; // bool
            public const nint m_stencilWriteID = 0x23BD; // char[128]
            public const nint m_bWriteStencilOnDepthPass = 0x243D; // bool
            public const nint m_bWriteStencilOnDepthFail = 0x243E; // bool
            public const nint m_bReverseZBuffering = 0x243F; // bool
            public const nint m_bDisableZBuffering = 0x2440; // bool
            public const nint m_nFeatheringMode = 0x2444; // ParticleDepthFeatheringMode_t
            public const nint m_flFeatheringMinDist = 0x2448; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringMaxDist = 0x25B8; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringFilter = 0x2728; // CParticleCollectionRendererFloatInput
            public const nint m_flFeatheringDepthMapFilter = 0x2898; // CParticleCollectionRendererFloatInput
            public const nint m_flDepthBias = 0x2A08; // CParticleCollectionRendererFloatInput
            public const nint m_nSortMethod = 0x2B78; // ParticleSortingChoiceList_t
            public const nint m_bBlendFramesSeq0 = 0x2B7C; // bool
            public const nint m_bMaxLuminanceBlendingSequence0 = 0x2B7D; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSpinUpdateBase {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OrientTo2dDirection {
            public const nint m_flRotOffset = 0x1D8; // float32
            public const nint m_flSpinStrength = 0x1DC; // float32
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDotProductToCP {
            public const nint m_nInputCP1 = 0x1E0; // int32
            public const nint m_nInputCP2 = 0x1E4; // int32
            public const nint m_nOutputCP = 0x1E8; // int32
            public const nint m_nOutVectorField = 0x1EC; // int32
            public const nint m_flInputMin = 0x1F0; // CParticleCollectionFloatInput
            public const nint m_flInputMax = 0x360; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x4D0; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x640; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelElementScalar {
            public const nint m_hModel = 0x210; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_outputMinName = 0x218; // CUtlString
            public const nint m_outputMaxName = 0x220; // CUtlString
            public const nint m_bModelFromRenderer = 0x228; // bool
        }
        // Parent: None
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderTrails {
            public const nint m_bEnableFadingAndClamping = 0x30E8; // bool
            public const nint m_flStartFadeDot = 0x30EC; // float32
            public const nint m_flEndFadeDot = 0x30F0; // float32
            public const nint m_nPrevPntSource = 0x30F4; // ParticleAttributeIndex_t
            public const nint m_flMaxLength = 0x30F8; // float32
            public const nint m_flMinLength = 0x30FC; // float32
            public const nint m_bIgnoreDT = 0x3100; // bool
            public const nint m_flConstrainRadiusToLengthRatio = 0x3104; // float32
            public const nint m_flLengthScale = 0x3108; // float32
            public const nint m_flLengthFadeInTime = 0x310C; // float32
            public const nint m_flRadiusHeadTaper = 0x3110; // CPerParticleFloatInput
            public const nint m_vecHeadColorScale = 0x3280; // CParticleCollectionVecInput
            public const nint m_flHeadAlphaScale = 0x3938; // CPerParticleFloatInput
            public const nint m_flRadiusTaper = 0x3AA8; // CPerParticleFloatInput
            public const nint m_vecTailColorScale = 0x3C18; // CParticleCollectionVecInput
            public const nint m_flTailAlphaScale = 0x42D0; // CPerParticleFloatInput
            public const nint m_nHorizCropField = 0x4440; // ParticleAttributeIndex_t
            public const nint m_nVertCropField = 0x4444; // ParticleAttributeIndex_t
            public const nint m_flForwardShift = 0x4448; // float32
            public const nint m_bFlipUVBasedOnPitchYaw = 0x444C; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointPositionToTimeOfDayValue {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_pszTimeOfDayParameter = 0x1E4; // char[128]
            public const nint m_vecDefaultValue = 0x264; // Vector
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayMaintainCount {
            public const nint m_nParticlesToMaintain = 0x1D8; // int32
            public const nint m_flDecayDelay = 0x1DC; // float32
            public const nint m_nSnapshotControlPoint = 0x1E0; // int32
            public const nint m_strSnapshotSubset = 0x1E8; // CUtlString
            public const nint m_bLifespanDecay = 0x1F0; // bool
            public const nint m_flScale = 0x1F8; // CParticleCollectionFloatInput
            public const nint m_bKillNewest = 0x368; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomModelSequence {
            public const nint m_ActivityName = 0x1E0; // char[256]
            public const nint m_SequenceName = 0x2E0; // char[256]
            public const nint m_hModel = 0x3E0; // CStrongHandle<InfoForResourceTypeCModel>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ExternalGameImpulseForce {
            public const nint m_flForceScale = 0x1E8; // CPerParticleFloatInput
            public const nint m_bRopes = 0x358; // bool
            public const nint m_bRopesZOnly = 0x359; // bool
            public const nint m_bExplosions = 0x35A; // bool
            public const nint m_bParticles = 0x35B; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapAverageHitboxSpeedtoCP {
            public const nint m_nInControlPointNumber = 0x1E0; // int32
            public const nint m_nOutControlPointNumber = 0x1E4; // int32
            public const nint m_nField = 0x1E8; // int32
            public const nint m_nHitboxDataType = 0x1EC; // ParticleHitboxDataSelection_t
            public const nint m_flInputMin = 0x1F0; // CParticleCollectionFloatInput
            public const nint m_flInputMax = 0x360; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x4D0; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x640; // CParticleCollectionFloatInput
            public const nint m_nHeightControlPointNumber = 0x7B0; // int32
            public const nint m_vecComparisonVelocity = 0x7B8; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0xE70; // char[128]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomAlpha {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_nAlphaMin = 0x1E4; // int32
            public const nint m_nAlphaMax = 0x1E8; // int32
            public const nint m_flAlphaRandExponent = 0x1F4; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NormalizeVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1DC; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeInSimple {
            public const nint m_flFadeInTime = 0x1D8; // float32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RepeatedTriggerChildGroup {
            public const nint m_nChildGroupID = 0x1E0; // int32
            public const nint m_flClusterRefireTime = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_flClusterSize = 0x358; // CParticleCollectionFloatInput
            public const nint m_flClusterCooldown = 0x4C8; // CParticleCollectionFloatInput
            public const nint m_bLimitChildCount = 0x638; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVelocityToVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1DC; // float32
            public const nint m_bNormalize = 0x1E0; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetHitboxToClosest {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_nDesiredHitbox = 0x1E4; // int32
            public const nint m_vecHitBoxScale = 0x1E8; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0x8A0; // char[128]
            public const nint m_bUseBones = 0x920; // bool
            public const nint m_bUseClosestPointOnHitbox = 0x921; // bool
            public const nint m_nTestType = 0x924; // ClosestPointTestType_t
            public const nint m_flHybridRatio = 0x928; // CParticleCollectionFloatInput
            public const nint m_bUpdatePosition = 0xA98; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RingWave {
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_flParticlesPerOrbit = 0x248; // CParticleCollectionFloatInput
            public const nint m_flInitialRadius = 0x3B8; // CPerParticleFloatInput
            public const nint m_flThickness = 0x528; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMin = 0x698; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMax = 0x808; // CPerParticleFloatInput
            public const nint m_flRoll = 0x978; // CPerParticleFloatInput
            public const nint m_flPitch = 0xAE8; // CPerParticleFloatInput
            public const nint m_flYaw = 0xC58; // CPerParticleFloatInput
            public const nint m_bEvenDistribution = 0xDC8; // bool
            public const nint m_bXYVelocityOnly = 0xDC9; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomTrailLength {
            public const nint m_flMinLength = 0x1E0; // float32
            public const nint m_flMaxLength = 0x1E4; // float32
            public const nint m_flLengthRandExponent = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalar {
            public const nint m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // float32
            public const nint m_flInputMax = 0x1E4; // float32
            public const nint m_flOutputMin = 0x1E8; // float32
            public const nint m_flOutputMax = 0x1EC; // float32
            public const nint m_bOldCode = 0x1F0; // bool
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceBetweenTransforms {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_TransformStart = 0x1E0; // CParticleTransformInput
            public const nint m_TransformEnd = 0x248; // CParticleTransformInput
            public const nint m_flInputMin = 0x2B0; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x420; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x590; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x700; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x870; // float32
            public const nint m_flLOSScale = 0x874; // float32
            public const nint m_CollisionGroupName = 0x878; // char[128]
            public const nint m_nTraceSet = 0x8F8; // ParticleTraceSet_t
            public const nint m_bLOS = 0x8FC; // bool
            public const nint m_nSetMethod = 0x900; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayOffscreen {
            public const nint m_flOffscreenTime = 0x1D8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSequentialPath {
            public const nint m_fMaxDistance = 0x1E0; // float32
            public const nint m_flNumToAssign = 0x1E4; // float32
            public const nint m_bLoop = 0x1E8; // bool
            public const nint m_bCPPairs = 0x1E9; // bool
            public const nint m_bSaveOffset = 0x1EA; // bool
            public const nint m_PathParams = 0x1F0; // CPathParameters
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapTimedDecay {
            public const nint m_flDecayTime = 0x1D8; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDistanceToLineSegmentBase {
            public const nint m_nCP0 = 0x1D8; // int32
            public const nint m_nCP1 = 0x1DC; // int32
            public const nint m_flMinInputValue = 0x1E0; // float32
            public const nint m_flMaxInputValue = 0x1E4; // float32
            public const nint m_bInfiniteLine = 0x1E8; // bool
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ContinuousEmitter {
            public const nint m_flEmissionDuration = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x350; // CParticleCollectionFloatInput
            public const nint m_flEmitRate = 0x4C0; // CParticleCollectionFloatInput
            public const nint m_flEmissionScale = 0x630; // float32
            public const nint m_flScalePerParentParticle = 0x634; // float32
            public const nint m_bInitFromKilledParentParticles = 0x638; // bool
            public const nint m_nEventType = 0x63C; // EventTypeSelection_t
            public const nint m_nSnapshotControlPoint = 0x640; // int32
            public const nint m_strSnapshotSubset = 0x648; // CUtlString
            public const nint m_nLimitPerUpdate = 0x650; // int32
            public const nint m_bForceEmitOnFirstUpdate = 0x654; // bool
            public const nint m_bForceEmitOnLastUpdate = 0x655; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateVectorSimple {
            public const nint m_Rate = 0x1D8; // Vector
            public const nint m_Frequency = 0x1E4; // Vector
            public const nint m_nField = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_flOscMult = 0x1F4; // float32
            public const nint m_flOscAdd = 0x1F8; // float32
            public const nint m_bOffset = 0x1FC; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SequenceLifeTime {
            public const nint m_flFramerate = 0x1E0; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_MoveBetweenPoints {
            public const nint m_flSpeedMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_flSpeedMax = 0x350; // CPerParticleFloatInput
            public const nint m_flEndSpread = 0x4C0; // CPerParticleFloatInput
            public const nint m_flStartOffset = 0x630; // CPerParticleFloatInput
            public const nint m_flEndOffset = 0x7A0; // CPerParticleFloatInput
            public const nint m_nEndControlPointNumber = 0x910; // int32
            public const nint m_bTrailBias = 0x914; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetUserEvent {
            public const nint m_flInput = 0x1D8; // CPerParticleFloatInput
            public const nint m_flRisingEdge = 0x348; // CPerParticleFloatInput
            public const nint m_nRisingEventType = 0x4B8; // EventTypeSelection_t
            public const nint m_flFallingEdge = 0x4C0; // CPerParticleFloatInput
            public const nint m_nFallingEventType = 0x630; // EventTypeSelection_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_QuantizeFloat {
            public const nint m_InputValue = 0x1D8; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x348; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_BasicMovement {
            public const nint m_Gravity = 0x1D8; // CParticleCollectionVecInput
            public const nint m_fDrag = 0x890; // CParticleCollectionFloatInput
            public const nint m_massControls = 0xA00; // CParticleMassCalculationParameters
            public const nint m_nMaxConstraintPasses = 0xE58; // int32
            public const nint m_bUseNewCode = 0xE5C; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelElement {
            public const nint m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_names = 0x1E8; // CUtlVector<CUtlString>
            public const nint m_bShuffle = 0x200; // bool
            public const nint m_bLinear = 0x201; // bool
            public const nint m_bModelFromRenderer = 0x202; // bool
            public const nint m_nFieldOutput = 0x204; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromParentKilled {
            public const nint m_nAttributeToCopy = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_nEventType = 0x1E4; // EventTypeSelection_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Callback {
        }
        // Parent: None
        // Field count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunction {
            public const nint m_flOpStrength = 0x8; // CParticleCollectionFloatInput
            public const nint m_nOpEndCapState = 0x178; // ParticleEndcapMode_t
            public const nint m_nToolsState = 0x17C; // ParticleToolsState_t
            public const nint m_flOpStartFadeInTime = 0x180; // float32
            public const nint m_flOpEndFadeInTime = 0x184; // float32
            public const nint m_flOpStartFadeOutTime = 0x188; // float32
            public const nint m_flOpEndFadeOutTime = 0x18C; // float32
            public const nint m_flOpFadeOscillatePeriod = 0x190; // float32
            public const nint m_bNormalizeToStopTime = 0x194; // bool
            public const nint m_flOpTimeOffsetMin = 0x198; // float32
            public const nint m_flOpTimeOffsetMax = 0x19C; // float32
            public const nint m_nOpTimeOffsetSeed = 0x1A0; // int32
            public const nint m_nOpTimeScaleSeed = 0x1A4; // int32
            public const nint m_flOpTimeScaleMin = 0x1A8; // float32
            public const nint m_flOpTimeScaleMax = 0x1AC; // float32
            public const nint m_bDisableOperator = 0x1B2; // bool
            public const nint m_Notes = 0x1B8; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_GlobalLight {
            public const nint m_flScale = 0x1D8; // float32
            public const nint m_bClampLowerRange = 0x1DC; // bool
            public const nint m_bClampUpperRange = 0x1DD; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_OffsetVectorToVector {
            public const nint m_nFieldInput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1E8; // Vector
            public const nint m_vecOutputMax = 0x1F4; // Vector
            public const nint m_randomnessParameters = 0x200; // CRandomNumberGeneratorParameters
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetPerChildControlPointFromAttribute {
            public const nint m_nChildGroupID = 0x1D8; // int32
            public const nint m_nFirstControlPoint = 0x1DC; // int32
            public const nint m_nNumControlPoints = 0x1E0; // int32
            public const nint m_nParticleIncrement = 0x1E4; // int32
            public const nint m_nFirstSourcePoint = 0x1E8; // int32
            public const nint m_bNumBasedOnParticleCount = 0x1EC; // bool
            public const nint m_nAttributeToRead = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_nCPField = 0x1F4; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetParentControlPointsToChildCP {
            public const nint m_nChildGroupID = 0x1E0; // int32
            public const nint m_nChildControlPoint = 0x1E4; // int32
            public const nint m_nNumControlPoints = 0x1E8; // int32
            public const nint m_nFirstSourcePoint = 0x1EC; // int32
            public const nint m_bSetOrientation = 0x1F0; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_BoxConstraint {
            public const nint m_vecMin = 0x1D8; // CParticleCollectionVecInput
            public const nint m_vecMax = 0x890; // CParticleCollectionVecInput
            public const nint m_nCP = 0xF48; // int32
            public const nint m_bLocalSpace = 0xF4C; // bool
            public const nint m_bAccountForRadius = 0xF4D; // bool
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreatePhyllotaxis {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_nScaleCP = 0x1E4; // int32
            public const nint m_nComponent = 0x1E8; // int32
            public const nint m_fRadCentCore = 0x1EC; // float32
            public const nint m_fRadPerPoint = 0x1F0; // float32
            public const nint m_fRadPerPointTo = 0x1F4; // float32
            public const nint m_fpointAngle = 0x1F8; // float32
            public const nint m_fsizeOverall = 0x1FC; // float32
            public const nint m_fRadBias = 0x200; // float32
            public const nint m_fMinRad = 0x204; // float32
            public const nint m_fDistBias = 0x208; // float32
            public const nint m_bUseLocalCoords = 0x20C; // bool
            public const nint m_bUseWithContEmit = 0x20D; // bool
            public const nint m_bUseOrigRadius = 0x20E; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_AttractToControlPoint {
            public const nint m_vecComponentScale = 0x1E8; // Vector
            public const nint m_fForceAmount = 0x1F8; // CPerParticleFloatInput
            public const nint m_fFalloffPower = 0x368; // float32
            public const nint m_TransformInput = 0x370; // CParticleTransformInput
            public const nint m_fForceAmountMin = 0x3D8; // CPerParticleFloatInput
            public const nint m_bApplyMinForce = 0x548; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomLifeTime {
            public const nint m_fLifetimeMin = 0x1E0; // float32
            public const nint m_fLifetimeMax = 0x1E4; // float32
            public const nint m_fLifetimeRandExponent = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityRadialRandom {
            public const nint m_bPerParticleCenter = 0x1E0; // bool
            public const nint m_nControlPointNumber = 0x1E4; // int32
            public const nint m_vecPosition = 0x1E8; // CPerParticleVecInput
            public const nint m_vecFwd = 0x8A0; // CPerParticleVecInput
            public const nint m_fSpeedMin = 0xF58; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0x10C8; // CPerParticleFloatInput
            public const nint m_vecLocalCoordinateSystemSpeedScale = 0x1238; // Vector
            public const nint m_bIgnoreDelta = 0x1245; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRadius {
            public const nint m_flRadiusMin = 0x1E0; // float32
            public const nint m_flRadiusMax = 0x1E4; // float32
            public const nint m_flRadiusRandExponent = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Orient2DRelToCP {
            public const nint m_flRotOffset = 0x1D8; // float32
            public const nint m_flSpinStrength = 0x1DC; // float32
            public const nint m_nCP = 0x1E0; // int32
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class TextureControls_t {
            public const nint m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureScaleV = 0x170; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureOffsetU = 0x2E0; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureOffsetV = 0x450; // CParticleCollectionRendererFloatInput
            public const nint m_flFinalTextureUVRotation = 0x5C0; // CParticleCollectionRendererFloatInput
            public const nint m_flZoomScale = 0x730; // CParticleCollectionRendererFloatInput
            public const nint m_flDistortion = 0x8A0; // CParticleCollectionRendererFloatInput
            public const nint m_bRandomizeOffsets = 0xA10; // bool
            public const nint m_bClampUVs = 0xA11; // bool
            public const nint m_nPerParticleBlend = 0xA14; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleScale = 0xA18; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleOffsetU = 0xA1C; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleOffsetV = 0xA20; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleRotation = 0xA24; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleZoom = 0xA28; // SpriteCardPerParticleScale_t
            public const nint m_nPerParticleDistortion = 0xA2C; // SpriteCardPerParticleScale_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ControlPointReference_t {
            public const nint m_controlPointNameString = 0x0; // int32
            public const nint m_vOffsetFromControlPoint = 0x4; // Vector
            public const nint m_bOffsetInLocalSpace = 0x10; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToVectorExpression {
            public const nint m_nExpression = 0x1E0; // VectorExpressionType_t
            public const nint m_nOutputCP = 0x1E4; // int32
            public const nint m_vInput1 = 0x1E8; // CParticleCollectionVecInput
            public const nint m_vInput2 = 0x8A0; // CParticleCollectionVecInput
            public const nint m_flLerp = 0xF58; // CPerParticleFloatInput
            public const nint m_bNormalizedOutput = 0x10C8; // bool
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LightningSnapshotGenerator {
            public const nint m_nCPSnapshot = 0x1E0; // int32
            public const nint m_nCPStartPnt = 0x1E4; // int32
            public const nint m_nCPEndPnt = 0x1E8; // int32
            public const nint m_flSegments = 0x1F0; // CParticleCollectionFloatInput
            public const nint m_flOffset = 0x360; // CParticleCollectionFloatInput
            public const nint m_flOffsetDecay = 0x4D0; // CParticleCollectionFloatInput
            public const nint m_flRecalcRate = 0x640; // CParticleCollectionFloatInput
            public const nint m_flUVScale = 0x7B0; // CParticleCollectionFloatInput
            public const nint m_flUVOffset = 0x920; // CParticleCollectionFloatInput
            public const nint m_flSplitRate = 0xA90; // CParticleCollectionFloatInput
            public const nint m_flBranchTwist = 0xC00; // CParticleCollectionFloatInput
            public const nint m_nBranchBehavior = 0xD70; // ParticleLightnintBranchBehavior_t
            public const nint m_flRadiusStart = 0xD78; // CParticleCollectionFloatInput
            public const nint m_flRadiusEnd = 0xEE8; // CParticleCollectionFloatInput
            public const nint m_flDedicatedPool = 0x1058; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelMeshGroupOnceTimed {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapQAnglesToRotation {
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionWarp {
            public const nint m_vecWarpMin = 0x1E0; // CParticleCollectionVecInput
            public const nint m_vecWarpMax = 0x898; // CParticleCollectionVecInput
            public const nint m_nScaleControlPointNumber = 0xF50; // int32
            public const nint m_nControlPointNumber = 0xF54; // int32
            public const nint m_nRadiusComponent = 0xF58; // int32
            public const nint m_flWarpTime = 0xF5C; // float32
            public const nint m_flWarpStartTime = 0xF60; // float32
            public const nint m_flPrevPosScale = 0xF64; // float32
            public const nint m_bInvertWarp = 0xF68; // bool
            public const nint m_bUseCount = 0xF69; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFieldToScalarExpression {
            public const nint m_nExpression = 0x1E0; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_flInput2 = 0x358; // CParticleCollectionFloatInput
            public const nint m_flOutputRemap = 0x4C8; // CParticleRemapFloatInput
            public const nint m_nOutputCP = 0x638; // int32
            public const nint m_nOutVectorField = 0x63C; // int32
            public const nint m_flInterpolation = 0x640; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CreateParticleSystemRenderer {
            public const nint m_hEffect = 0x228; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nEventType = 0x230; // EventTypeSelection_t
            public const nint m_vecCPs = 0x238; // CUtlLeanVector<CPAssignment_t>
            public const nint m_szParticleConfig = 0x248; // CUtlString
            public const nint m_AggregationPos = 0x250; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionForce {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomVectorComponent {
            public const nint m_flMin = 0x1E0; // float32
            public const nint m_flMax = 0x1E4; // float32
            public const nint m_nFieldOutput = 0x1E8; // ParticleAttributeIndex_t
            public const nint m_nComponent = 0x1EC; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_OP_InheritFromParentParticles {
            public const nint m_flScale = 0x1D8; // float32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1E0; // int32
            public const nint m_bRandomDistribution = 0x1E4; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetVectorAttributeToVectorExpression {
            public const nint m_nExpression = 0x1E0; // VectorExpressionType_t
            public const nint m_vInput1 = 0x1E8; // CPerParticleVecInput
            public const nint m_vInput2 = 0x8A0; // CPerParticleVecInput
            public const nint m_flLerp = 0xF58; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x10C8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x10CC; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x10D0; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformVisibilityToVector {
            public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x24C; // float32
            public const nint m_flInputMax = 0x250; // float32
            public const nint m_vecOutputMin = 0x254; // Vector
            public const nint m_vecOutputMax = 0x260; // Vector
            public const nint m_flRadius = 0x26C; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DirectionBetweenVecsToVec {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecPoint1 = 0x1E0; // CPerParticleVecInput
            public const nint m_vecPoint2 = 0x898; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementLoopInsideSphere {
            public const nint m_nCP = 0x1D8; // int32
            public const nint m_flDistance = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_vecScale = 0x350; // CParticleCollectionVecInput
            public const nint m_nDistSqrAttr = 0xA08; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSimpleModelCollection {
            public const nint m_bCenterOffset = 0x228; // bool
            public const nint m_hModel = 0x230; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_modelInput = 0x238; // CParticleModelInput
            public const nint m_fSizeCullScale = 0x298; // CParticleCollectionFloatInput
            public const nint m_bDisableShadows = 0x408; // bool
            public const nint m_bDisableMotionBlur = 0x409; // bool
            public const nint m_bAcceptsDecals = 0x40A; // bool
            public const nint m_fDrawFilter = 0x410; // CPerParticleFloatInput
            public const nint m_nAngularVelocityField = 0x580; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_QuantizeCPComponent {
            public const nint m_flInputValue = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_nCPOutput = 0x350; // int32
            public const nint m_nOutVectorField = 0x354; // int32
            public const nint m_flQuantizeValue = 0x358; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlayEndCapWhenFinished {
            public const nint m_bFireOnEmissionEnd = 0x1E0; // bool
            public const nint m_bIncludeChildren = 0x1E1; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFloatCollection {
            public const nint m_InputValue = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_nOutputField = 0x350; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 8
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
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapScalarEndCap {
            public const nint m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // float32
            public const nint m_flInputMax = 0x1E4; // float32
            public const nint m_flOutputMin = 0x1E8; // float32
            public const nint m_flOutputMax = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromPlaneCache {
            public const nint m_vecOffsetMin = 0x1E0; // Vector
            public const nint m_vecOffsetMax = 0x1EC; // Vector
            public const nint m_bUseNormal = 0x1F9; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LazyCullCompareFloat {
            public const nint m_flComparsion1 = 0x1D8; // CPerParticleFloatInput
            public const nint m_flComparsion2 = 0x348; // CPerParticleFloatInput
            public const nint m_flCullTime = 0x4B8; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ControlPointToRadialScreenSpace {
            public const nint m_nCPIn = 0x1E0; // int32
            public const nint m_vecCP1Pos = 0x1E4; // Vector
            public const nint m_nCPOut = 0x1F0; // int32
            public const nint m_nCPOutField = 0x1F4; // int32
            public const nint m_nCPSSPosOut = 0x1F8; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpinUpdate {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_NormalOffset {
            public const nint m_OffsetMin = 0x1E0; // Vector
            public const nint m_OffsetMax = 0x1EC; // Vector
            public const nint m_nControlPointNumber = 0x1F8; // int32
            public const nint m_bLocalCoords = 0x1FC; // bool
            public const nint m_bNormalize = 0x1FD; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDistanceToLineSegmentToVector {
            public const nint m_nFieldOutput = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_vMinOutputValue = 0x1F4; // Vector
            public const nint m_vMaxOutputValue = 0x200; // Vector
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderAsModels {
            public const nint m_ModelList = 0x228; // CUtlVector<ModelReference_t>
            public const nint m_flModelScale = 0x244; // float32
            public const nint m_bFitToModelSize = 0x248; // bool
            public const nint m_bNonUniformScaling = 0x249; // bool
            public const nint m_nXAxisScalingAttribute = 0x24C; // ParticleAttributeIndex_t
            public const nint m_nYAxisScalingAttribute = 0x250; // ParticleAttributeIndex_t
            public const nint m_nZAxisScalingAttribute = 0x254; // ParticleAttributeIndex_t
            public const nint m_nSizeCullBloat = 0x258; // int32
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreationNoise {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_bAbsVal = 0x1E4; // bool
            public const nint m_bAbsValInv = 0x1E5; // bool
            public const nint m_flOffset = 0x1E8; // float32
            public const nint m_flOutputMin = 0x1EC; // float32
            public const nint m_flOutputMax = 0x1F0; // float32
            public const nint m_flNoiseScale = 0x1F4; // float32
            public const nint m_flNoiseScaleLoc = 0x1F8; // float32
            public const nint m_vecOffsetLoc = 0x1FC; // Vector
            public const nint m_flWorldTimeScale = 0x208; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Spin {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_GameLiquidSpill {
            public const nint m_flLiquidContentsField = 0x228; // CParticleCollectionFloatInput
            public const nint m_flExpirationTime = 0x398; // CParticleCollectionFloatInput
            public const nint m_nAmountAttribute = 0x508; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InstantaneousEmitter {
            public const nint m_nParticlesToEmit = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x350; // CParticleCollectionFloatInput
            public const nint m_flInitFromKilledParentParticles = 0x4C0; // float32
            public const nint m_nEventType = 0x4C4; // EventTypeSelection_t
            public const nint m_flParentParticleScale = 0x4C8; // CParticleCollectionFloatInput
            public const nint m_nMaxEmittedPerFrame = 0x638; // int32
            public const nint m_nSnapshotControlPoint = 0x63C; // int32
            public const nint m_strSnapshotSubset = 0x640; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainLineLength {
            public const nint m_flMinDistance = 0x1D8; // float32
            public const nint m_flMaxDistance = 0x1DC; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_LifespanFromVelocity {
            public const nint m_vecComponentScale = 0x1E0; // Vector
            public const nint m_flTraceOffset = 0x1EC; // float32
            public const nint m_flMaxTraceLength = 0x1F0; // float32
            public const nint m_flTraceTolerance = 0x1F4; // float32
            public const nint m_nMaxPlanes = 0x1F8; // int32
            public const nint m_CollisionGroupName = 0x200; // char[128]
            public const nint m_nTraceSet = 0x280; // ParticleTraceSet_t
            public const nint m_bIncludeWater = 0x290; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseTrailRenderer {
            public const nint m_nOrientationType = 0x2DF0; // ParticleOrientationChoiceList_t
            public const nint m_nOrientationControlPoint = 0x2DF4; // int32
            public const nint m_flMinSize = 0x2DF8; // float32
            public const nint m_flMaxSize = 0x2DFC; // float32
            public const nint m_flStartFadeSize = 0x2E00; // CParticleCollectionRendererFloatInput
            public const nint m_flEndFadeSize = 0x2F70; // CParticleCollectionRendererFloatInput
            public const nint m_bClampV = 0x30E0; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityFromCP {
            public const nint m_velocityInput = 0x1E0; // CParticleCollectionVecInput
            public const nint m_transformInput = 0x898; // CParticleTransformInput
            public const nint m_flVelocityScale = 0x900; // float32
            public const nint m_bDirectionOnly = 0x904; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointOrientation {
            public const nint m_bUseWorldLocation = 0x1E0; // bool
            public const nint m_bRandomize = 0x1E2; // bool
            public const nint m_bSetOnce = 0x1E3; // bool
            public const nint m_nCP = 0x1E4; // int32
            public const nint m_nHeadLocation = 0x1E8; // int32
            public const nint m_vecRotation = 0x1EC; // QAngle
            public const nint m_vecRotationB = 0x1F8; // QAngle
            public const nint m_flInterpolation = 0x208; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementSkinnedPositionFromCPSnapshot {
            public const nint m_nSnapshotControlPointNumber = 0x1D8; // int32
            public const nint m_nControlPointNumber = 0x1DC; // int32
            public const nint m_bRandom = 0x1E0; // bool
            public const nint m_nRandomSeed = 0x1E4; // int32
            public const nint m_bSetNormal = 0x1E8; // bool
            public const nint m_bSetRadius = 0x1E9; // bool
            public const nint m_nIndexType = 0x1EC; // SnapshotIndexType_t
            public const nint m_flReadIndex = 0x1F0; // CPerParticleFloatInput
            public const nint m_flIncrement = 0x360; // CParticleCollectionFloatInput
            public const nint m_nFullLoopIncrement = 0x4D0; // CParticleCollectionFloatInput
            public const nint m_nSnapShotStartPoint = 0x640; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0x7B0; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MultiSegmentDisplaySnapshotGenerator {
            public const nint m_nCPSnapshot = 0x1E0; // int32
            public const nint m_nSegCount = 0x1E4; // ParticleMultiSegmentCountSelection_t
            public const nint m_nInputType = 0x1E8; // ParticleMultiSegmentInputSelection_t
            public const nint m_strDefaultString = 0x1F0; // CUtlString
            public const nint m_flValue = 0x1F8; // CParticleCollectionFloatInput
            public const nint m_SpecialCharList = 0x368; // CUtlVector<ParticleMultiSegmentSpecialCharacter_t>
            public const nint m_vecColorUnlit = 0x380; // CParticleCollectionVecInput
            public const nint m_vecColorLit = 0xA38; // CParticleCollectionVecInput
            public const nint m_flRadius = 0x10F0; // CParticleCollectionFloatInput
            public const nint m_flSpacing = 0x1260; // CParticleCollectionFloatInput
            public const nint m_flMinCount = 0x13D0; // CParticleCollectionFloatInput
            public const nint m_flMaxCount = 0x1540; // CParticleCollectionFloatInput
            public const nint m_bPrependEmpty = 0x16B0; // bool
            public const nint m_flDigitsAfterDecimal = 0x16B8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateVector {
            public const nint m_RateMin = 0x1D8; // Vector
            public const nint m_RateMax = 0x1E4; // Vector
            public const nint m_FrequencyMin = 0x1F0; // Vector
            public const nint m_FrequencyMax = 0x1FC; // Vector
            public const nint m_nField = 0x208; // ParticleAttributeIndex_t
            public const nint m_bProportional = 0x20C; // bool
            public const nint m_bProportionalOp = 0x20D; // bool
            public const nint m_bOffset = 0x20E; // bool
            public const nint m_flStartTime_min = 0x210; // float32
            public const nint m_flStartTime_max = 0x214; // float32
            public const nint m_flEndTime_min = 0x218; // float32
            public const nint m_flEndTime_max = 0x21C; // float32
            public const nint m_flOscMult = 0x220; // CPerParticleFloatInput
            public const nint m_flOscAdd = 0x390; // CPerParticleFloatInput
            public const nint m_flRateScale = 0x500; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PositionLock {
            public const nint m_TransformInput = 0x1D8; // CParticleTransformInput
            public const nint m_flStartTime_min = 0x240; // float32
            public const nint m_flStartTime_max = 0x244; // float32
            public const nint m_flStartTime_exp = 0x248; // float32
            public const nint m_flEndTime_min = 0x24C; // float32
            public const nint m_flEndTime_max = 0x250; // float32
            public const nint m_flEndTime_exp = 0x254; // float32
            public const nint m_flRange = 0x258; // float32
            public const nint m_flRangeBias = 0x260; // CParticleCollectionFloatInput
            public const nint m_flJumpThreshold = 0x3D0; // float32
            public const nint m_flPrevPosScale = 0x3D4; // float32
            public const nint m_bLockRot = 0x3D8; // bool
            public const nint m_vecScale = 0x3E0; // CParticleCollectionVecInput
            public const nint m_nFieldOutput = 0xA98; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputPrev = 0xA9C; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderVRHapticEvent {
            public const nint m_nHand = 0x228; // ParticleVRHandChoiceList_t
            public const nint m_nOutputHandCP = 0x22C; // int32
            public const nint m_nOutputField = 0x230; // int32
            public const nint m_flAmplitude = 0x238; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToImpactPoint {
            public const nint m_nCPOut = 0x1E0; // int32
            public const nint m_nCPIn = 0x1E4; // int32
            public const nint m_flUpdateRate = 0x1E8; // float32
            public const nint m_flTraceLength = 0x1F0; // CParticleCollectionFloatInput
            public const nint m_flStartOffset = 0x360; // float32
            public const nint m_flOffset = 0x364; // float32
            public const nint m_vecTraceDir = 0x368; // Vector
            public const nint m_CollisionGroupName = 0x374; // char[128]
            public const nint m_nTraceSet = 0x3F4; // ParticleTraceSet_t
            public const nint m_bSetToEndpoint = 0x3F8; // bool
            public const nint m_bTraceToClosestSurface = 0x3F9; // bool
            public const nint m_bIncludeWater = 0x3FA; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InterpolateRadius {
            public const nint m_flStartTime = 0x1D8; // float32
            public const nint m_flEndTime = 0x1DC; // float32
            public const nint m_flStartScale = 0x1E0; // float32
            public const nint m_flEndScale = 0x1E4; // float32
            public const nint m_bEaseInAndOut = 0x1E8; // bool
            public const nint m_flBias = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ReinitializeScalarEndCap {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1DC; // float32
            public const nint m_flOutputMax = 0x1E0; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TurbulenceForce {
            public const nint m_flNoiseCoordScale0 = 0x1E8; // float32
            public const nint m_flNoiseCoordScale1 = 0x1EC; // float32
            public const nint m_flNoiseCoordScale2 = 0x1F0; // float32
            public const nint m_flNoiseCoordScale3 = 0x1F4; // float32
            public const nint m_vecNoiseAmount0 = 0x1F8; // Vector
            public const nint m_vecNoiseAmount1 = 0x204; // Vector
            public const nint m_vecNoiseAmount2 = 0x210; // Vector
            public const nint m_vecNoiseAmount3 = 0x21C; // Vector
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelElementOnceTimed {
            public const nint m_hModel = 0x1D8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_inNames = 0x1E0; // CUtlVector<CUtlString>
            public const nint m_outNames = 0x1F8; // CUtlVector<CUtlString>
            public const nint m_fallbackNames = 0x210; // CUtlVector<CUtlString>
            public const nint m_bModelFromRenderer = 0x228; // bool
            public const nint m_bProportional = 0x229; // bool
            public const nint m_nFieldInput = 0x22C; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x230; // ParticleAttributeIndex_t
            public const nint m_flRemapTime = 0x234; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToPlayer {
            public const nint m_nCP1 = 0x1E0; // int32
            public const nint m_vecCP1Pos = 0x1E4; // Vector
            public const nint m_bOrientToEyes = 0x1F0; // bool
            public const nint m_nPosition = 0x1F4; // ParticleEntityPos_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapTimedFreeze {
            public const nint m_flFreezeTime = 0x1D8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderGpuImplicit {
            public const nint m_bUsePerParticleRadius = 0x228; // bool
            public const nint m_nVertexCountKb = 0x22C; // uint32
            public const nint m_nIndexCountKb = 0x230; // uint32
            public const nint m_fGridSize = 0x238; // CParticleCollectionRendererFloatInput
            public const nint m_fRadiusScale = 0x3A8; // CParticleCollectionRendererFloatInput
            public const nint m_fIsosurfaceThreshold = 0x518; // CParticleCollectionRendererFloatInput
            public const nint m_nScaleCP = 0x688; // int32
            public const nint m_hMaterial = 0x690; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetRandomControlPointPosition {
            public const nint m_bUseWorldLocation = 0x1E0; // bool
            public const nint m_bOrient = 0x1E1; // bool
            public const nint m_nCP1 = 0x1E4; // int32
            public const nint m_nHeadLocation = 0x1E8; // int32
            public const nint m_flReRandomRate = 0x1F0; // CParticleCollectionFloatInput
            public const nint m_vecCPMinPos = 0x360; // Vector
            public const nint m_vecCPMaxPos = 0x36C; // Vector
            public const nint m_flInterpolation = 0x378; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderVolumetricEmitter {
            public const nint m_strChannelType = 0x228; // CUtlString
            public const nint m_nType = 0x230; // ParticleVolumetricSmokeType_t
            public const nint m_nCreationType = 0x234; // ParticleVolumetricSmokeCreationType_t
            public const nint m_nEventType = 0x238; // EventTypeSelection_t
            public const nint m_vecPos = 0x240; // CPerParticleVecInput
            public const nint m_vecVelocity = 0x8F8; // CPerParticleVecInput
            public const nint m_flRadius = 0xFB0; // CPerParticleFloatInput
            public const nint m_flDensity = 0x1120; // CPerParticleFloatInput
            public const nint m_flTemperature = 0x1290; // CPerParticleFloatInput
            public const nint m_flMagnitude = 0x1400; // CPerParticleFloatInput
            public const nint m_flKillRadius = 0x1570; // CPerParticleFloatInput
            public const nint m_flFalloff = 0x16E0; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformVisibilityToScalar {
            public const nint m_nSetMethod = 0x1D8; // ParticleSetMethod_t
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x24C; // float32
            public const nint m_flInputMax = 0x250; // float32
            public const nint m_flOutputMin = 0x254; // float32
            public const nint m_flOutputMax = 0x258; // float32
            public const nint m_flRadius = 0x25C; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapControlPointDirectionToVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1DC; // float32
            public const nint m_nControlPointNumber = 0x1E0; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ScreenSpacePositionOfTarget {
            public const nint m_vecTargetPosition = 0x1D8; // CPerParticleVecInput
            public const nint m_bOututBehindness = 0x890; // bool
            public const nint m_nBehindFieldOutput = 0x894; // ParticleAttributeIndex_t
            public const nint m_flBehindOutputRemap = 0x898; // CParticleRemapFloatInput
            public const nint m_nBehindSetMethod = 0xA08; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionOperator {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DragRelativeToPlane {
            public const nint m_flDragAtPlane = 0x1D8; // CParticleCollectionFloatInput
            public const nint m_flFalloff = 0x348; // CParticleCollectionFloatInput
            public const nint m_bDirectional = 0x4B8; // bool
            public const nint m_vecPlaneNormal = 0x4C0; // CParticleCollectionVecInput
            public const nint m_nControlPointNumber = 0xB78; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPtoVector {
            public const nint m_nCPInput = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomYaw {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SnapshotRigidSkinToBones {
            public const nint m_bTransformNormals = 0x1D8; // bool
            public const nint m_bTransformRadii = 0x1D9; // bool
            public const nint m_nControlPointNumber = 0x1DC; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetSingleControlPointPosition {
            public const nint m_bSetOnce = 0x1E0; // bool
            public const nint m_nCP1 = 0x1E4; // int32
            public const nint m_vecCP1Pos = 0x1E8; // CParticleCollectionVecInput
            public const nint m_transformInput = 0x8A0; // CParticleTransformInput
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceToNeighborCull {
            public const nint m_flDistance = 0x1E0; // CPerParticleFloatInput
            public const nint m_bIncludeRadii = 0x350; // bool
            public const nint m_flLifespanOverlap = 0x358; // CPerParticleFloatInput
            public const nint m_nFieldModify = 0x4C8; // ParticleAttributeIndex_t
            public const nint m_flModify = 0x4D0; // CPerParticleFloatInput
            public const nint m_nSetMethod = 0x640; // ParticleSetMethod_t
            public const nint m_bUseNeighbor = 0x644; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPtoScalar {
            public const nint m_nCPInput = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nField = 0x1E0; // int32
            public const nint m_flInputMin = 0x1E4; // float32
            public const nint m_flInputMax = 0x1E8; // float32
            public const nint m_flOutputMin = 0x1EC; // float32
            public const nint m_flOutputMax = 0x1F0; // float32
            public const nint m_flStartTime = 0x1F4; // float32
            public const nint m_flEndTime = 0x1F8; // float32
            public const nint m_flInterpRate = 0x1FC; // float32
            public const nint m_nSetMethod = 0x200; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionRenderer {
            public const nint VisibilityInputs = 0x1D8; // CParticleVisibilityInputs
            public const nint m_bCannotBeRefracted = 0x220; // bool
            public const nint m_bSkipRenderingOnMobile = 0x221; // bool
        }
        // Parent: None
        // Field count: 66
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
            public const nint m_nInitialParticles = 0x258; // int32
            public const nint m_nMaxParticles = 0x25C; // int32
            public const nint m_nGroupID = 0x260; // int32
            public const nint m_BoundingBoxMin = 0x264; // Vector
            public const nint m_BoundingBoxMax = 0x270; // Vector
            public const nint m_flDepthSortBias = 0x27C; // float32
            public const nint m_nSortOverridePositionCP = 0x280; // int32
            public const nint m_bInfiniteBounds = 0x284; // bool
            public const nint m_bEnableNamedValues = 0x285; // bool
            public const nint m_NamedValueDomain = 0x288; // CUtlString
            public const nint m_NamedValueLocals = 0x290; // CUtlVector<ParticleNamedValueSource_t*>
            public const nint m_ConstantColor = 0x2A8; // Color
            public const nint m_ConstantNormal = 0x2AC; // Vector
            public const nint m_flConstantRadius = 0x2B8; // float32
            public const nint m_flConstantRotation = 0x2BC; // float32
            public const nint m_flConstantRotationSpeed = 0x2C0; // float32
            public const nint m_flConstantLifespan = 0x2C4; // float32
            public const nint m_nConstantSequenceNumber = 0x2C8; // int32
            public const nint m_nConstantSequenceNumber1 = 0x2CC; // int32
            public const nint m_nSnapshotControlPoint = 0x2D0; // int32
            public const nint m_hSnapshot = 0x2D8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_pszCullReplacementName = 0x2E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flCullRadius = 0x2E8; // float32
            public const nint m_flCullFillCost = 0x2EC; // float32
            public const nint m_nCullControlPoint = 0x2F0; // int32
            public const nint m_hFallback = 0x2F8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nFallbackMaxCount = 0x300; // int32
            public const nint m_hLowViolenceDef = 0x308; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_hReferenceReplacement = 0x310; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flPreSimulationTime = 0x318; // float32
            public const nint m_flStopSimulationAfterTime = 0x31C; // float32
            public const nint m_flMaximumTimeStep = 0x320; // float32
            public const nint m_flMaximumSimTime = 0x324; // float32
            public const nint m_flMinimumSimTime = 0x328; // float32
            public const nint m_flMinimumTimeStep = 0x32C; // float32
            public const nint m_nMinimumFrames = 0x330; // int32
            public const nint m_bIsGPUParticleSystem = 0x334; // bool
            public const nint m_nMinCPULevel = 0x338; // int32
            public const nint m_nMinGPULevel = 0x33C; // int32
            public const nint m_flNoDrawTimeToGoToSleep = 0x340; // float32
            public const nint m_flMaxDrawDistance = 0x344; // float32
            public const nint m_flStartFadeDistance = 0x348; // float32
            public const nint m_flMaxCreationDistance = 0x34C; // float32
            public const nint m_nAggregationMinAvailableParticles = 0x350; // int32
            public const nint m_flAggregateRadius = 0x354; // float32
            public const nint m_bShouldBatch = 0x358; // bool
            public const nint m_bShouldHitboxesFallbackToRenderBounds = 0x359; // bool
            public const nint m_bShouldHitboxesFallbackToSnapshot = 0x35A; // bool
            public const nint m_bShouldHitboxesFallbackToCollisionHulls = 0x35B; // bool
            public const nint m_nViewModelEffect = 0x35C; // InheritableBoolType_t
            public const nint m_bScreenSpaceEffect = 0x360; // bool
            public const nint m_pszTargetLayerID = 0x368; // CUtlSymbolLarge
            public const nint m_nSkipRenderControlPoint = 0x370; // int32
            public const nint m_nAllowRenderControlPoint = 0x374; // int32
            public const nint m_bShouldSort = 0x378; // bool
            public const nint m_controlPointConfigurations = 0x3C0; // CUtlVector<ParticleControlPointConfiguration_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelMeshGroupEndCap {
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PercentageBetweenTransformsVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1DC; // float32
            public const nint m_flInputMax = 0x1E0; // float32
            public const nint m_vecOutputMin = 0x1E4; // Vector
            public const nint m_vecOutputMax = 0x1F0; // Vector
            public const nint m_TransformStart = 0x200; // CParticleTransformInput
            public const nint m_TransformEnd = 0x268; // CParticleTransformInput
            public const nint m_nSetMethod = 0x2D0; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x2D4; // bool
            public const nint m_bRadialCheck = 0x2D5; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderScreenVelocityRotate {
            public const nint m_flRotateRateDegrees = 0x228; // float32
            public const nint m_flForwardDegrees = 0x22C; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_UpdateLightSource {
            public const nint m_vColorTint = 0x1D8; // Color
            public const nint m_flBrightnessScale = 0x1DC; // float32
            public const nint m_flRadiusScale = 0x1E0; // float32
            public const nint m_flMinimumLightingRadius = 0x1E4; // float32
            public const nint m_flMaximumLightingRadius = 0x1E8; // float32
            public const nint m_flPositionDampingConstant = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinBox {
            public const nint m_vecMin = 0x1E0; // CPerParticleVecInput
            public const nint m_vecMax = 0x898; // CPerParticleVecInput
            public const nint m_nControlPointNumber = 0xF50; // int32
            public const nint m_bLocalSpace = 0xF54; // bool
            public const nint m_randomnessParameters = 0xF58; // CRandomNumberGeneratorParameters
            public const nint m_bUseNewCode = 0xF60; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ChooseRandomChildrenInGroup {
            public const nint m_nChildGroupID = 0x1E0; // int32
            public const nint m_flNumberOfChildren = 0x1E8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 33
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ControlpointLight {
            public const nint m_flScale = 0x1D8; // float32
            public const nint m_nControlPoint1 = 0x660; // int32
            public const nint m_nControlPoint2 = 0x664; // int32
            public const nint m_nControlPoint3 = 0x668; // int32
            public const nint m_nControlPoint4 = 0x66C; // int32
            public const nint m_vecCPOffset1 = 0x670; // Vector
            public const nint m_vecCPOffset2 = 0x67C; // Vector
            public const nint m_vecCPOffset3 = 0x688; // Vector
            public const nint m_vecCPOffset4 = 0x694; // Vector
            public const nint m_LightFiftyDist1 = 0x6A0; // float32
            public const nint m_LightZeroDist1 = 0x6A4; // float32
            public const nint m_LightFiftyDist2 = 0x6A8; // float32
            public const nint m_LightZeroDist2 = 0x6AC; // float32
            public const nint m_LightFiftyDist3 = 0x6B0; // float32
            public const nint m_LightZeroDist3 = 0x6B4; // float32
            public const nint m_LightFiftyDist4 = 0x6B8; // float32
            public const nint m_LightZeroDist4 = 0x6BC; // float32
            public const nint m_LightColor1 = 0x6C0; // Color
            public const nint m_LightColor2 = 0x6C4; // Color
            public const nint m_LightColor3 = 0x6C8; // Color
            public const nint m_LightColor4 = 0x6CC; // Color
            public const nint m_bLightType1 = 0x6D0; // bool
            public const nint m_bLightType2 = 0x6D1; // bool
            public const nint m_bLightType3 = 0x6D2; // bool
            public const nint m_bLightType4 = 0x6D3; // bool
            public const nint m_bLightDynamic1 = 0x6D4; // bool
            public const nint m_bLightDynamic2 = 0x6D5; // bool
            public const nint m_bLightDynamic3 = 0x6D6; // bool
            public const nint m_bLightDynamic4 = 0x6D7; // bool
            public const nint m_bUseNormal = 0x6D8; // bool
            public const nint m_bUseHLambert = 0x6D9; // bool
            public const nint m_bClampLowerRange = 0x6DE; // bool
            public const nint m_bClampUpperRange = 0x6DF; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VectorFieldSnapshot {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_nAttributeToWrite = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1E0; // int32
            public const nint m_flInterpolation = 0x1E8; // CPerParticleFloatInput
            public const nint m_vecScale = 0x358; // CPerParticleVecInput
            public const nint m_flBoundaryDampening = 0xA10; // float32
            public const nint m_bSetVelocity = 0xA14; // bool
            public const nint m_bLockToSurface = 0xA15; // bool
            public const nint m_flGridSpacing = 0xA18; // float32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CylindricalDistanceToTransform {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x350; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x4C0; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x630; // CPerParticleFloatInput
            public const nint m_TransformStart = 0x7A0; // CParticleTransformInput
            public const nint m_TransformEnd = 0x808; // CParticleTransformInput
            public const nint m_nSetMethod = 0x870; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x874; // bool
            public const nint m_bAdditive = 0x875; // bool
            public const nint m_bCapsule = 0x876; // bool
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionPlaceOnGround {
            public const nint m_flOffset = 0x1E0; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x350; // CPerParticleFloatInput
            public const nint m_vecTraceDir = 0x4C0; // CPerParticleVecInput
            public const nint m_CollisionGroupName = 0xB78; // char[128]
            public const nint m_nTraceSet = 0xBF8; // ParticleTraceSet_t
            public const nint m_nTraceMissBehavior = 0xC08; // ParticleTraceMissBehavior_t
            public const nint m_bIncludeWater = 0xC0C; // bool
            public const nint m_nAttribute = 0xC10; // ParticleAttributeIndex_t
            public const nint m_bSetPXYZOnly = 0xC14; // bool
            public const nint m_bSetNormal = 0xC15; // bool
            public const nint m_nGroundNormalAttribute = 0xC18; // ParticleAttributeIndex_t
            public const nint m_bOffsetonColOnly = 0xC1C; // bool
            public const nint m_flOffsetByRadiusFactor = 0xC20; // float32
            public const nint m_nPreserveOffsetCP = 0xC24; // int32
            public const nint m_nIgnoreCP = 0xC28; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomScalar {
            public const nint m_flMin = 0x1E0; // float32
            public const nint m_flMax = 0x1E4; // float32
            public const nint m_flExponent = 0x1E8; // float32
            public const nint m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderPostProcessing {
            public const nint m_flPostProcessStrength = 0x228; // CPerParticleFloatInput
            public const nint m_hPostTexture = 0x398; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_nPriority = 0x3A0; // ParticlePostProcessPriorityGroup_t
        }
        // Parent: None
        // Field count: 27
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WorldTraceConstraint {
            public const nint m_nCP = 0x1D8; // int32
            public const nint m_vecCpOffset = 0x1DC; // Vector
            public const nint m_nCollisionMode = 0x1E8; // ParticleCollisionMode_t
            public const nint m_nCollisionModeMin = 0x1EC; // ParticleCollisionMode_t
            public const nint m_nTraceSet = 0x1F0; // ParticleTraceSet_t
            public const nint m_CollisionGroupName = 0x1F4; // char[128]
            public const nint m_bWorldOnly = 0x274; // bool
            public const nint m_bBrushOnly = 0x275; // bool
            public const nint m_bIncludeWater = 0x276; // bool
            public const nint m_nIgnoreCP = 0x278; // int32
            public const nint m_flCpMovementTolerance = 0x27C; // float32
            public const nint m_flRetestRate = 0x280; // float32
            public const nint m_flTraceTolerance = 0x284; // float32
            public const nint m_flCollisionConfirmationSpeed = 0x288; // float32
            public const nint m_nMaxTracesPerFrame = 0x28C; // float32
            public const nint m_flRadiusScale = 0x290; // CPerParticleFloatInput
            public const nint m_flBounceAmount = 0x400; // CPerParticleFloatInput
            public const nint m_flSlideAmount = 0x570; // CPerParticleFloatInput
            public const nint m_flRandomDirScale = 0x6E0; // CPerParticleFloatInput
            public const nint m_bDecayBounce = 0x850; // bool
            public const nint m_bKillonContact = 0x851; // bool
            public const nint m_flMinSpeed = 0x854; // float32
            public const nint m_bSetNormal = 0x858; // bool
            public const nint m_nStickOnCollisionField = 0x85C; // ParticleAttributeIndex_t
            public const nint m_flStopSpeed = 0x860; // CPerParticleFloatInput
            public const nint m_nEntityStickDataField = 0x9D0; // ParticleAttributeIndex_t
            public const nint m_nEntityStickNormalField = 0x9D4; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderBlobs {
            public const nint m_cubeWidth = 0x228; // CParticleCollectionRendererFloatInput
            public const nint m_cutoffRadius = 0x398; // CParticleCollectionRendererFloatInput
            public const nint m_renderRadius = 0x508; // CParticleCollectionRendererFloatInput
            public const nint m_nVertexCountKb = 0x678; // uint32
            public const nint m_nIndexCountKb = 0x67C; // uint32
            public const nint m_nScaleCP = 0x680; // int32
            public const nint m_MaterialVars = 0x688; // CUtlVector<MaterialVariable_t>
            public const nint m_hMaterial = 0x6B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_OscillateScalar {
            public const nint m_RateMin = 0x1D8; // float32
            public const nint m_RateMax = 0x1DC; // float32
            public const nint m_FrequencyMin = 0x1E0; // float32
            public const nint m_FrequencyMax = 0x1E4; // float32
            public const nint m_nField = 0x1E8; // ParticleAttributeIndex_t
            public const nint m_bProportional = 0x1EC; // bool
            public const nint m_bProportionalOp = 0x1ED; // bool
            public const nint m_flStartTime_min = 0x1F0; // float32
            public const nint m_flStartTime_max = 0x1F4; // float32
            public const nint m_flEndTime_min = 0x1F8; // float32
            public const nint m_flEndTime_max = 0x1FC; // float32
            public const nint m_flOscMult = 0x200; // float32
            public const nint m_flOscAdd = 0x204; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeOut {
            public const nint m_flFadeOutTimeMin = 0x1D8; // float32
            public const nint m_flFadeOutTimeMax = 0x1DC; // float32
            public const nint m_flFadeOutTimeExp = 0x1E0; // float32
            public const nint m_flFadeBias = 0x1E4; // float32
            public const nint m_bProportional = 0x220; // bool
            public const nint m_bEaseInAndOut = 0x221; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WaterImpulseRenderer {
            public const nint m_vecPos = 0x228; // CPerParticleVecInput
            public const nint m_flRadius = 0x8E0; // CPerParticleFloatInput
            public const nint m_flMagnitude = 0xA50; // CPerParticleFloatInput
            public const nint m_flShape = 0xBC0; // CPerParticleFloatInput
            public const nint m_flWindSpeed = 0xD30; // CPerParticleFloatInput
            public const nint m_flWobble = 0xEA0; // CPerParticleFloatInput
            public const nint m_bIsRadialWind = 0x1010; // bool
            public const nint m_nEventType = 0x1014; // EventTypeSelection_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomSequence {
            public const nint m_nSequenceMin = 0x1E0; // int32
            public const nint m_nSequenceMax = 0x1E4; // int32
            public const nint m_bShuffle = 0x1E8; // bool
            public const nint m_bLinear = 0x1E9; // bool
            public const nint m_WeightedList = 0x1F0; // CUtlVector<SequenceWeightedList_t>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarSplineSimple {
            public const nint m_Rate = 0x1D8; // float32
            public const nint m_flStartTime = 0x1DC; // float32
            public const nint m_flEndTime = 0x1E0; // float32
            public const nint m_nField = 0x210; // ParticleAttributeIndex_t
            public const nint m_bEaseOut = 0x214; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceCull {
            public const nint m_nControlPoint = 0x1E0; // int32
            public const nint m_flDistance = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x358; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CollideWithParentParticles {
            public const nint m_flParentRadiusScale = 0x1D8; // CPerParticleFloatInput
            public const nint m_flRadiusScale = 0x348; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromVectorFieldSnapshot {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_nLocalSpaceCP = 0x1E4; // int32
            public const nint m_nWeightUpdateCP = 0x1E8; // int32
            public const nint m_bUseVerticalVelocity = 0x1EC; // bool
            public const nint m_vecScale = 0x1F0; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetVectorAttributeToVectorExpression {
            public const nint m_nExpression = 0x1D8; // VectorExpressionType_t
            public const nint m_vInput1 = 0x1E0; // CPerParticleVecInput
            public const nint m_vInput2 = 0x898; // CPerParticleVecInput
            public const nint m_flLerp = 0xF50; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x10C0; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x10C4; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x10C8; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_AddVectorToVector {
            public const nint m_vecScale = 0x1E0; // Vector
            public const nint m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_vOffsetMin = 0x1F4; // Vector
            public const nint m_vOffsetMax = 0x200; // Vector
            public const nint m_randomnessParameters = 0x20C; // CRandomNumberGeneratorParameters
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialVisibilityScalar {
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E8; // float32
            public const nint m_flInputMax = 0x1EC; // float32
            public const nint m_flOutputMin = 0x1F0; // float32
            public const nint m_flOutputMax = 0x1F4; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformOrientationToYaw {
            public const nint m_TransformInput = 0x1D8; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x240; // ParticleAttributeIndex_t
            public const nint m_flRotOffset = 0x244; // float32
            public const nint m_flSpinStrength = 0x248; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderStatusEffect {
            public const nint m_pTextureColorWarp = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureDetail2 = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureDiffuseWarp = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureFresnelColorWarp = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureFresnelWarp = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureSpecularWarp = 0x250; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureEnvMap = 0x258; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RandomForce {
            public const nint m_MinForce = 0x1E8; // Vector
            public const nint m_MaxForce = 0x1F4; // Vector
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapParticleCountOnScalarEndCap {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1DC; // int32
            public const nint m_nInputMax = 0x1E0; // int32
            public const nint m_flOutputMin = 0x1E4; // float32
            public const nint m_flOutputMax = 0x1E8; // float32
            public const nint m_bBackwards = 0x1EC; // bool
            public const nint m_nSetMethod = 0x1F0; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 17
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
            public const nint m_bSequenceNameIsAnimClipPath = 0x55; // bool
            public const nint m_vecPreviewGravity = 0x58; // Vector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LocalAccelerationForce {
            public const nint m_nCP = 0x1E8; // int32
            public const nint m_nScaleCP = 0x1EC; // int32
            public const nint m_vecAccel = 0x1F0; // CParticleCollectionVecInput
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ModelCull {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_bBoundBox = 0x1DC; // bool
            public const nint m_bCullOutside = 0x1DD; // bool
            public const nint m_bUseBones = 0x1DE; // bool
            public const nint m_HitboxSetName = 0x1DF; // char[128]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFloat {
            public const nint m_InputValue = 0x1D8; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x348; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x34C; // ParticleSetMethod_t
            public const nint m_Lerp = 0x350; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapTransformToVector {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_vInputMin = 0x1E4; // Vector
            public const nint m_vInputMax = 0x1F0; // Vector
            public const nint m_vOutputMin = 0x1FC; // Vector
            public const nint m_vOutputMax = 0x208; // Vector
            public const nint m_TransformInput = 0x218; // CParticleTransformInput
            public const nint m_LocalSpaceTransform = 0x280; // CParticleTransformInput
            public const nint m_flStartTime = 0x2E8; // float32
            public const nint m_flEndTime = 0x2EC; // float32
            public const nint m_nSetMethod = 0x2F0; // ParticleSetMethod_t
            public const nint m_bOffset = 0x2F4; // bool
            public const nint m_bAccelerate = 0x2F5; // bool
            public const nint m_flRemapBias = 0x2F8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ScreenSpaceDistanceToEdge {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flMaxDistFromEdge = 0x1E0; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x350; // CParticleRemapFloatInput
            public const nint m_nSetMethod = 0x4C0; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDistanceToLineSegmentToScalar {
            public const nint m_nFieldOutput = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_flMinOutputValue = 0x1F4; // float32
            public const nint m_flMaxOutputValue = 0x1F8; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVectortoCP {
            public const nint m_nOutControlPointNumber = 0x1D8; // int32
            public const nint m_nFieldInput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nParticleNumber = 0x1E0; // int32
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFromCPSnapshot {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_strSnapshotSubset = 0x1E0; // CUtlString
            public const nint m_nAttributeToRead = 0x1E8; // ParticleAttributeIndex_t
            public const nint m_nAttributeToWrite = 0x1EC; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1F0; // int32
            public const nint m_bRandom = 0x1F4; // bool
            public const nint m_bReverse = 0x1F5; // bool
            public const nint m_nRandomSeed = 0x1F8; // int32
            public const nint m_nSnapShotStartPoint = 0x200; // CParticleCollectionFloatInput
            public const nint m_nSnapShotIncrement = 0x370; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0x4E0; // CPerParticleFloatInput
            public const nint m_bSubSample = 0x650; // bool
            public const nint m_bPrev = 0x651; // bool
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceBetweenCPsToCP {
            public const nint m_nStartCP = 0x1E0; // int32
            public const nint m_nEndCP = 0x1E4; // int32
            public const nint m_nOutputCP = 0x1E8; // int32
            public const nint m_nOutputCPField = 0x1EC; // int32
            public const nint m_bSetOnce = 0x1F0; // bool
            public const nint m_flInputMin = 0x1F4; // float32
            public const nint m_flInputMax = 0x1F8; // float32
            public const nint m_flOutputMin = 0x1FC; // float32
            public const nint m_flOutputMax = 0x200; // float32
            public const nint m_flMaxTraceLength = 0x204; // float32
            public const nint m_flLOSScale = 0x208; // float32
            public const nint m_bLOS = 0x20C; // bool
            public const nint m_CollisionGroupName = 0x20D; // char[128]
            public const nint m_nTraceSet = 0x290; // ParticleTraceSet_t
            public const nint m_nSetParent = 0x294; // ParticleParentSetMode_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToHand {
            public const nint m_nCP1 = 0x1E0; // int32
            public const nint m_nHand = 0x1E4; // int32
            public const nint m_vecCP1Pos = 0x1E8; // Vector
            public const nint m_bOrientToHand = 0x1F4; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistanceToPath {
            public const nint m_fMinDistance = 0x1D8; // float32
            public const nint m_flMaxDistance0 = 0x1DC; // float32
            public const nint m_flMaxDistanceMid = 0x1E0; // float32
            public const nint m_flMaxDistance1 = 0x1E4; // float32
            public const nint m_PathParameters = 0x1F0; // CPathParameters
            public const nint m_flTravelTime = 0x230; // float32
            public const nint m_nFieldScale = 0x234; // ParticleAttributeIndex_t
            public const nint m_nManualTField = 0x238; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceCull {
            public const nint m_nControlPoint = 0x1D8; // int32
            public const nint m_vecPointOffset = 0x1DC; // Vector
            public const nint m_flDistance = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x358; // bool
            public const nint m_nAttribute = 0x35C; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateAlongPath {
            public const nint m_fMaxDistance = 0x1E0; // float32
            public const nint m_PathParams = 0x1F0; // CPathParameters
            public const nint m_bUseRandomCPs = 0x230; // bool
            public const nint m_vEndOffset = 0x234; // Vector
            public const nint m_bSaveOffset = 0x240; // bool
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_GameDecalRenderer {
            public const nint m_sDecalGroupName = 0x228; // CGlobalSymbol
            public const nint m_nEventType = 0x230; // EventTypeSelection_t
            public const nint m_nInteractionMask = 0x238; // ParticleCollisionMask_t
            public const nint m_nCollisionGroup = 0x240; // ParticleCollisionGroup_t
            public const nint m_vecStartPos = 0x248; // CPerParticleVecInput
            public const nint m_vecEndPos = 0x900; // CPerParticleVecInput
            public const nint m_flTraceBloat = 0xFB8; // CPerParticleFloatInput
            public const nint m_flDecalSize = 0x1128; // CPerParticleFloatInput
            public const nint m_nDecalGroupIndex = 0x1298; // CPerParticleFloatInput
            public const nint m_flDecalRotation = 0x1408; // CPerParticleFloatInput
            public const nint m_vModulationColor = 0x1578; // CPerParticleVecInput
            public const nint m_bUseGameDefaultDecalSize = 0x1C30; // bool
            public const nint m_bRandomDecalRotation = 0x1C31; // bool
            public const nint m_bRandomlySelectDecalInGroup = 0x1C32; // bool
            public const nint m_bNoDecalsOnOwner = 0x1C33; // bool
            public const nint m_bVisualizeTraces = 0x1C34; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointsToModelParticles {
            public const nint m_HitboxSetName = 0x1D8; // char[128]
            public const nint m_AttachmentName = 0x258; // char[128]
            public const nint m_nFirstControlPoint = 0x2D8; // int32
            public const nint m_nNumControlPoints = 0x2DC; // int32
            public const nint m_nFirstSourcePoint = 0x2E0; // int32
            public const nint m_bSkin = 0x2E4; // bool
            public const nint m_bAttachment = 0x2E5; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ColorInterpolateRandom {
            public const nint m_ColorFadeMin = 0x1D8; // Color
            public const nint m_ColorFadeMax = 0x1F4; // Color
            public const nint m_flFadeStartTime = 0x204; // float32
            public const nint m_flFadeEndTime = 0x208; // float32
            public const nint m_nFieldOutput = 0x20C; // ParticleAttributeIndex_t
            public const nint m_bEaseInOut = 0x210; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelSequenceToScalar {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderLights {
            public const nint m_flAnimationRate = 0x230; // float32
            public const nint m_nAnimationType = 0x234; // AnimationType_t
            public const nint m_bAnimateInFPS = 0x238; // bool
            public const nint m_flMinSize = 0x23C; // float32
            public const nint m_flMaxSize = 0x240; // float32
            public const nint m_flStartFadeSize = 0x244; // float32
            public const nint m_flEndFadeSize = 0x248; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DecayClampCount {
            public const nint m_nCount = 0x1D8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRandomNumberGeneratorParameters {
            public const nint m_bDistributeEvenly = 0x0; // bool
            public const nint m_nSeed = 0x4; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ColorLitPerParticle {
            public const nint m_ColorMin = 0x1F8; // Color
            public const nint m_ColorMax = 0x1FC; // Color
            public const nint m_TintMin = 0x200; // Color
            public const nint m_TintMax = 0x204; // Color
            public const nint m_flTintPerc = 0x208; // float32
            public const nint m_nTintBlendMode = 0x20C; // ParticleColorBlendMode_t
            public const nint m_flLightAmplification = 0x210; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderPoints {
            public const nint m_hMaterial = 0x228; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetAttributeToScalarExpression {
            public const nint m_nExpression = 0x1E0; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1E8; // CPerParticleFloatInput
            public const nint m_flInput2 = 0x358; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x4C8; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x638; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x63C; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnGrid {
            public const nint m_nXCount = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_nYCount = 0x350; // CParticleCollectionFloatInput
            public const nint m_nZCount = 0x4C0; // CParticleCollectionFloatInput
            public const nint m_nXSpacing = 0x630; // CParticleCollectionFloatInput
            public const nint m_nYSpacing = 0x7A0; // CParticleCollectionFloatInput
            public const nint m_nZSpacing = 0x910; // CParticleCollectionFloatInput
            public const nint m_nControlPointNumber = 0xA80; // int32
            public const nint m_bLocalSpace = 0xA84; // bool
            public const nint m_bCenter = 0xA85; // bool
            public const nint m_bHollow = 0xA86; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampCPLinearRandom {
            public const nint m_nOutControlPointNumber = 0x1E0; // int32
            public const nint m_vecRateMin = 0x1E4; // Vector
            public const nint m_vecRateMax = 0x1F0; // Vector
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VelocityMatchingForce {
            public const nint m_flDirScale = 0x1D8; // float32
            public const nint m_flSpdScale = 0x1DC; // float32
            public const nint m_flNeighborDistance = 0x1E0; // float32
            public const nint m_flFacingStrength = 0x1E4; // float32
            public const nint m_bUseAABB = 0x1E8; // bool
            public const nint m_nCPBroadcast = 0x1EC; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomAlphaWindowThreshold {
            public const nint m_flMin = 0x1E0; // float32
            public const nint m_flMax = 0x1E4; // float32
            public const nint m_flExponent = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnModelAtHeight {
            public const nint m_bUseBones = 0x1E0; // bool
            public const nint m_bForceZ = 0x1E1; // bool
            public const nint m_nControlPointNumber = 0x1E4; // int32
            public const nint m_nHeightCP = 0x1E8; // int32
            public const nint m_bUseWaterHeight = 0x1EC; // bool
            public const nint m_flDesiredHeight = 0x1F0; // CParticleCollectionFloatInput
            public const nint m_vecHitBoxScale = 0x360; // CParticleCollectionVecInput
            public const nint m_vecDirectionBias = 0xA18; // CParticleCollectionVecInput
            public const nint m_nBiasType = 0x10D0; // ParticleHitboxBiasType_t
            public const nint m_bLocalCoords = 0x10D4; // bool
            public const nint m_bPreferMovingBoxes = 0x10D5; // bool
            public const nint m_HitboxSetName = 0x10D6; // char[128]
            public const nint m_flHitboxVelocityScale = 0x1158; // CParticleCollectionFloatInput
            public const nint m_flMaxBoneVelocity = 0x12C8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ModelSurfaceSnapshotGenerator {
            public const nint m_nCPSnapshot = 0x1E0; // int32
            public const nint m_modelInput = 0x1E8; // CParticleModelInput
            public const nint m_flRecalcRate = 0x248; // CParticleCollectionFloatInput
            public const nint m_flUSpacing = 0x3B8; // CParticleCollectionFloatInput
            public const nint m_flVSpacing = 0x528; // CParticleCollectionFloatInput
            public const nint m_flSurfaceOffset = 0x698; // CParticleCollectionFloatInput
            public const nint m_bSetNormal = 0x808; // bool
            public const nint m_bSetUp = 0x809; // bool
            public const nint m_bSetGravity = 0x80A; // bool
            public const nint m_bSetUV = 0x80B; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RestartAfterDuration {
            public const nint m_flDurationMin = 0x1D8; // float32
            public const nint m_flDurationMax = 0x1DC; // float32
            public const nint m_nCP = 0x1E0; // int32
            public const nint m_nCPField = 0x1E4; // int32
            public const nint m_nChildGroupID = 0x1E8; // int32
            public const nint m_bOnlyChildren = 0x1EC; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderClothForce {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVisibilityScalar {
            public const nint m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // float32
            public const nint m_flInputMax = 0x1E4; // float32
            public const nint m_flOutputMin = 0x1E8; // float32
            public const nint m_flOutputMax = 0x1EC; // float32
            public const nint m_flRadiusScale = 0x1F0; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSequentialPathV2 {
            public const nint m_fMaxDistance = 0x1E0; // CPerParticleFloatInput
            public const nint m_flNumToAssign = 0x350; // CParticleCollectionFloatInput
            public const nint m_bLoop = 0x4C0; // bool
            public const nint m_bCPPairs = 0x4C1; // bool
            public const nint m_bSaveOffset = 0x4C2; // bool
            public const nint m_PathParams = 0x4D0; // CPathParameters
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VecInputMaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_vecInput = 0x8; // CParticleCollectionVecInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialDirectionToTransformToVector {
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x24C; // float32
            public const nint m_flOffsetRot = 0x250; // float32
            public const nint m_vecOffsetAxis = 0x254; // Vector
            public const nint m_bNormalize = 0x260; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_OP_LockToSavedSequentialPathV2 {
            public const nint m_flFadeStart = 0x1D8; // float32
            public const nint m_flFadeEnd = 0x1DC; // float32
            public const nint m_bCPPairs = 0x1E0; // bool
            public const nint m_PathParams = 0x1F0; // CPathParameters
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NormalLock {
            public const nint m_nControlPointNumber = 0x1D8; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapTransformOrientationToRotations {
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_vecRotation = 0x248; // Vector
            public const nint m_bUseQuat = 0x254; // bool
            public const nint m_bWriteNormal = 0x255; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Cull {
            public const nint m_flCullPerc = 0x1D8; // float32
            public const nint m_flCullStart = 0x1DC; // float32
            public const nint m_flCullEnd = 0x1E0; // float32
            public const nint m_flCullExp = 0x1E4; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomYawFlip {
            public const nint m_flPercent = 0x1E0; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SequenceWeightedList_t {
            public const nint m_nSequence = 0x0; // int32
            public const nint m_flRelativeWeight = 0x4; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ReadFromNeighboringParticle {
            public const nint m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1E0; // int32
            public const nint m_DistanceCheck = 0x1E8; // CPerParticleFloatInput
            public const nint m_flInterpolation = 0x358; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderText {
            public const nint m_OutlineColor = 0x228; // Color
            public const nint m_DefaultText = 0x230; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpToInitialPosition {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_flInterpolation = 0x1E0; // CPerParticleFloatInput
            public const nint m_nCacheField = 0x350; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x358; // CParticleCollectionFloatInput
            public const nint m_vecScale = 0x4C8; // CParticleCollectionVecInput
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRotation {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpEndCapVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecOutput = 0x1DC; // Vector
            public const nint m_flLerpTime = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VelocityDecay {
            public const nint m_flMinVelocity = 0x1D8; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPOrientationToPointAtCP {
            public const nint m_nInputCP = 0x1E0; // int32
            public const nint m_nOutputCP = 0x1E4; // int32
            public const nint m_flInterpolation = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_b2DOrientation = 0x358; // bool
            public const nint m_bAvoidSingularity = 0x359; // bool
            public const nint m_bPointAway = 0x35A; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LockToPointList {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_pointList = 0x1E0; // CUtlVector<PointDefinition_t>
            public const nint m_bPlaceAlongPath = 0x1F8; // bool
            public const nint m_bClosedLoop = 0x1F9; // bool
            public const nint m_nNumPointsAlongPath = 0x1FC; // int32
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementPlaceOnGround {
            public const nint m_flOffset = 0x1D8; // CPerParticleFloatInput
            public const nint m_flMaxTraceLength = 0x348; // float32
            public const nint m_flTolerance = 0x34C; // float32
            public const nint m_vecTraceDir = 0x350; // CPerParticleVecInput
            public const nint m_flTraceOffset = 0xA08; // float32
            public const nint m_flLerpRate = 0xA0C; // float32
            public const nint m_CollisionGroupName = 0xA10; // char[128]
            public const nint m_nTraceSet = 0xA90; // ParticleTraceSet_t
            public const nint m_nRefCP1 = 0xA94; // int32
            public const nint m_nRefCP2 = 0xA98; // int32
            public const nint m_nLerpCP = 0xA9C; // int32
            public const nint m_nTraceMissBehavior = 0xAA8; // ParticleTraceMissBehavior_t
            public const nint m_bIncludeShotHull = 0xAAC; // bool
            public const nint m_bIncludeWater = 0xAAD; // bool
            public const nint m_bSetNormal = 0xAB0; // bool
            public const nint m_bScaleOffset = 0xAB1; // bool
            public const nint m_nPreserveOffsetCP = 0xAB4; // int32
            public const nint m_nIgnoreCP = 0xAB8; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPOrientationToDirection {
            public const nint m_nInputControlPoint = 0x1D8; // int32
            public const nint m_nOutputControlPoint = 0x1DC; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCrossProductOfTwoVectorsToVector {
            public const nint m_InputVec1 = 0x1D8; // CPerParticleVecInput
            public const nint m_InputVec2 = 0x890; // CPerParticleVecInput
            public const nint m_nFieldOutput = 0xF48; // ParticleAttributeIndex_t
            public const nint m_bNormalize = 0xF4C; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapTransformOrientationToRotations {
            public const nint m_TransformInput = 0x1D8; // CParticleTransformInput
            public const nint m_vecRotation = 0x240; // Vector
            public const nint m_bUseQuat = 0x24C; // bool
            public const nint m_bWriteNormal = 0x24D; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomRotationSpeed {
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MParticleMinVersion
        // MGetKV3ClassDefaults
        public static class C_OP_InheritFromParentParticlesV2 {
            public const nint m_flScale = 0x1D8; // CPerParticleFloatInput
            public const nint m_nFieldOutput = 0x348; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x350; // CPerParticleFloatInput
            public const nint m_bSubSample = 0x4C0; // bool
            public const nint m_bRandomDistribution = 0x4C1; // bool
            public const nint m_bReverse = 0x4C2; // bool
            public const nint m_nMissingParentBehavior = 0x4C4; // MissingParentInheritBehavior_t
            public const nint m_flInterpolation = 0x4C8; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomSecondSequence {
            public const nint m_nSequenceMin = 0x1E0; // int32
            public const nint m_nSequenceMax = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFloatCollection {
            public const nint m_InputValue = 0x1D8; // CParticleCollectionFloatInput
            public const nint m_nOutputField = 0x348; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x34C; // ParticleSetMethod_t
            public const nint m_Lerp = 0x350; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinition_t {
            public const nint m_nControlPoint = 0x0; // int32
            public const nint m_bLocalCoords = 0x4; // bool
            public const nint m_vOffset = 0x8; // Vector
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointPositionToRandomActiveCP {
            public const nint m_nCP1 = 0x1E0; // int32
            public const nint m_nHeadLocationMin = 0x1E4; // int32
            public const nint m_nHeadLocationMax = 0x1E8; // int32
            public const nint m_flResetRate = 0x1F0; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Diffusion {
            public const nint m_flRadiusScale = 0x1D8; // float32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nVoxelGridResolution = 0x1E0; // int32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_AgeNoise {
            public const nint m_bAbsVal = 0x1E0; // bool
            public const nint m_bAbsValInv = 0x1E1; // bool
            public const nint m_flOffset = 0x1E4; // float32
            public const nint m_flAgeMin = 0x1E8; // float32
            public const nint m_flAgeMax = 0x1EC; // float32
            public const nint m_flNoiseScale = 0x1F0; // float32
            public const nint m_flNoiseScaleLoc = 0x1F4; // float32
            public const nint m_vecOffsetLoc = 0x1F8; // Vector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVectorComponentToScalar {
            public const nint m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nComponent = 0x1E0; // int32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralRandomRotation {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_flDegrees = 0x1E4; // float32
            public const nint m_flDegreesMin = 0x1E8; // float32
            public const nint m_flDegreesMax = 0x1EC; // float32
            public const nint m_flRotationRandExponent = 0x1F0; // float32
            public const nint m_bRandomlyFlipDirection = 0x1F4; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceBetweenVecs {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecPoint1 = 0x1E0; // CPerParticleVecInput
            public const nint m_vecPoint2 = 0x898; // CPerParticleVecInput
            public const nint m_flInputMin = 0xF50; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x10C0; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x1230; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x13A0; // CPerParticleFloatInput
            public const nint m_nSetMethod = 0x1510; // ParticleSetMethod_t
            public const nint m_bDeltaTime = 0x1514; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DampenToCP {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_flRange = 0x1DC; // float32
            public const nint m_flScale = 0x1E0; // float32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CalculateVectorAttribute {
            public const nint m_vStartValue = 0x1D8; // Vector
            public const nint m_nFieldInput1 = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_flInputScale1 = 0x1E8; // float32
            public const nint m_nFieldInput2 = 0x1EC; // ParticleAttributeIndex_t
            public const nint m_flInputScale2 = 0x1F0; // float32
            public const nint m_nControlPointInput1 = 0x1F4; // ControlPointReference_t
            public const nint m_flControlPointScale1 = 0x208; // float32
            public const nint m_nControlPointInput2 = 0x20C; // ControlPointReference_t
            public const nint m_flControlPointScale2 = 0x220; // float32
            public const nint m_nFieldOutput = 0x224; // ParticleAttributeIndex_t
            public const nint m_vFinalOutputScale = 0x228; // Vector
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LockToBone {
            public const nint m_modelInput = 0x1D8; // CParticleModelInput
            public const nint m_transformInput = 0x238; // CParticleTransformInput
            public const nint m_flLifeTimeFadeStart = 0x2A0; // float32
            public const nint m_flLifeTimeFadeEnd = 0x2A4; // float32
            public const nint m_flJumpThreshold = 0x2A8; // float32
            public const nint m_flPrevPosScale = 0x2AC; // float32
            public const nint m_HitboxSetName = 0x2B0; // char[128]
            public const nint m_bRigid = 0x330; // bool
            public const nint m_bUseBones = 0x331; // bool
            public const nint m_nFieldOutput = 0x334; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputPrev = 0x338; // ParticleAttributeIndex_t
            public const nint m_nRotationSetType = 0x33C; // ParticleRotationLockType_t
            public const nint m_bRigidRotationLock = 0x340; // bool
            public const nint m_vecRotation = 0x348; // CPerParticleVecInput
            public const nint m_flRotLerp = 0xA00; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelBodyPartOnceTimed {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ScreenSpaceRotateTowardTarget {
            public const nint m_vecTargetPosition = 0x1D8; // CPerParticleVecInput
            public const nint m_flOutputRemap = 0x890; // CParticleRemapFloatInput
            public const nint m_nSetMethod = 0xA00; // ParticleSetMethod_t
            public const nint m_flScreenEdgeAlignmentDistance = 0xA08; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementMaintainOffset {
            public const nint m_vecOffset = 0x1D8; // Vector
            public const nint m_nCP = 0x1E4; // int32
            public const nint m_bRadiusScale = 0x1E8; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinCapsuleTransform {
            public const nint m_fRadiusMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_fRadiusMax = 0x350; // CPerParticleFloatInput
            public const nint m_fHeight = 0x4C0; // CPerParticleFloatInput
            public const nint m_TransformInput = 0x630; // CParticleTransformInput
            public const nint m_fSpeedMin = 0x698; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0x808; // CPerParticleFloatInput
            public const nint m_fSpeedRandExp = 0x978; // float32
            public const nint m_LocalCoordinateSystemSpeedMin = 0x980; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0x1038; // CPerParticleVecInput
            public const nint m_nFieldOutput = 0x16F0; // ParticleAttributeIndex_t
            public const nint m_nFieldVelocity = 0x16F4; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetVec {
            public const nint m_InputValue = 0x1D8; // CPerParticleVecInput
            public const nint m_nOutputField = 0x890; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x894; // ParticleSetMethod_t
            public const nint m_Lerp = 0x898; // CPerParticleFloatInput
            public const nint m_bNormalizedOutput = 0xA08; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromParentParticles {
            public const nint m_flVelocityScale = 0x1E0; // float32
            public const nint m_flIncrement = 0x1E4; // float32
            public const nint m_bRandomDistribution = 0x1E8; // bool
            public const nint m_nRandomSeed = 0x1EC; // int32
            public const nint m_bSubFrame = 0x1F0; // bool
            public const nint m_bSetRopeSegmentID = 0x1F1; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CheckParticleForWater {
            public const nint m_flRadius = 0x1E0; // CPerParticleFloatInput
            public const nint m_nFieldOutput = 0x350; // ParticleAttributeIndex_t
            public const nint m_flOutputRemap = 0x358; // CParticleRemapFloatInput
            public const nint m_nSetMethod = 0x4C8; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelBodyPart {
        }
        // Parent: None
        // Field count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderOmni2Light {
            public const nint m_nLightType = 0x228; // ParticleOmni2LightTypeChoiceList_t
            public const nint m_nMaxAllowed = 0x22C; // uint16
            public const nint m_vColorBlend = 0x230; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x8E8; // ParticleColorBlendType_t
            public const nint m_nBrightnessUnit = 0x8EC; // ParticleLightUnitChoiceList_t
            public const nint m_flBrightnessLumens = 0x8F0; // CPerParticleFloatInput
            public const nint m_flBrightnessCandelas = 0xA60; // CPerParticleFloatInput
            public const nint m_bCastShadows = 0xBD0; // bool
            public const nint m_bDynamicBounce = 0xBD1; // bool
            public const nint m_flBounceScale = 0xBD8; // CParticleCollectionFloatInput
            public const nint m_bFog = 0xD48; // bool
            public const nint m_flFogScale = 0xD50; // CPerParticleFloatInput
            public const nint m_flLuminaireRadius = 0xEC0; // CPerParticleFloatInput
            public const nint m_flSkirt = 0x1030; // CPerParticleFloatInput
            public const nint m_flRange = 0x11A0; // CPerParticleFloatInput
            public const nint m_flInnerConeAngle = 0x1310; // CPerParticleFloatInput
            public const nint m_flOuterConeAngle = 0x1480; // CPerParticleFloatInput
            public const nint m_hLightCookie = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bSphericalCookie = 0x15F8; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConnectParentParticleToNearest {
            public const nint m_nFirstControlPoint = 0x1D8; // int32
            public const nint m_nSecondControlPoint = 0x1DC; // int32
            public const nint m_bUseRadius = 0x1E0; // bool
            public const nint m_flRadiusScale = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_flParentRadiusScale = 0x358; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPAssignment_t {
            public const nint m_nCPNumber = 0x0; // int32
            public const nint m_Pos = 0x8; // CPerParticleVecInput
            public const nint m_nOrientationMode = 0x6C0; // ParticleOrientationSetMode_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        }
        // Parent: None
        // Field count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitSkinnedPositionFromCPSnapshot {
            public const nint m_nSnapshotControlPointNumber = 0x1E0; // int32
            public const nint m_nControlPointNumber = 0x1E4; // int32
            public const nint m_bRandom = 0x1E8; // bool
            public const nint m_nRandomSeed = 0x1EC; // int32
            public const nint m_bRigid = 0x1F0; // bool
            public const nint m_bSetNormal = 0x1F1; // bool
            public const nint m_bIgnoreDt = 0x1F2; // bool
            public const nint m_flMinNormalVelocity = 0x1F4; // float32
            public const nint m_flMaxNormalVelocity = 0x1F8; // float32
            public const nint m_nIndexType = 0x1FC; // SnapshotIndexType_t
            public const nint m_flReadIndex = 0x200; // CPerParticleFloatInput
            public const nint m_flIncrement = 0x370; // float32
            public const nint m_nFullLoopIncrement = 0x374; // int32
            public const nint m_nSnapShotStartPoint = 0x378; // int32
            public const nint m_flBoneVelocity = 0x37C; // float32
            public const nint m_flBoneVelocityMax = 0x380; // float32
            public const nint m_bCopyColor = 0x384; // bool
            public const nint m_bCopyAlpha = 0x385; // bool
            public const nint m_bSetRadius = 0x386; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LagCompensation {
            public const nint m_nDesiredVelocityCP = 0x1D8; // int32
            public const nint m_nLatencyCP = 0x1DC; // int32
            public const nint m_nLatencyCPField = 0x1E0; // int32
            public const nint m_nDesiredVelocityCPField = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CollideWithSelf {
            public const nint m_flRadiusScale = 0x1D8; // CPerParticleFloatInput
            public const nint m_flMinimumSpeed = 0x348; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_Noise {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1DC; // float32
            public const nint m_flOutputMax = 0x1E0; // float32
            public const nint m_fl4NoiseScale = 0x1E4; // float32
            public const nint m_bAdditive = 0x1E8; // bool
            public const nint m_flNoiseAnimationTimeScale = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeAndKillForTracers {
            public const nint m_flStartFadeInTime = 0x1D8; // float32
            public const nint m_flEndFadeInTime = 0x1DC; // float32
            public const nint m_flStartFadeOutTime = 0x1E0; // float32
            public const nint m_flEndFadeOutTime = 0x1E4; // float32
            public const nint m_flStartAlpha = 0x1E8; // float32
            public const nint m_flEndAlpha = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ColorAdjustHSL {
            public const nint m_flHueAdjust = 0x1D8; // CPerParticleFloatInput
            public const nint m_flSaturationAdjust = 0x348; // CPerParticleFloatInput
            public const nint m_flLightnessAdjust = 0x4B8; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleMassCalculationParameters {
            public const nint m_nMassMode = 0x0; // ParticleMassMode_t
            public const nint m_flRadius = 0x8; // CPerParticleFloatInput
            public const nint m_flNominalRadius = 0x178; // CPerParticleFloatInput
            public const nint m_flScale = 0x2E8; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SequenceFromModel {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputAnim = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E4; // float32
            public const nint m_flInputMax = 0x1E8; // float32
            public const nint m_flOutputMin = 0x1EC; // float32
            public const nint m_flOutputMax = 0x1F0; // float32
            public const nint m_nSetMethod = 0x1F4; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_AlphaDecay {
            public const nint m_flMinAlpha = 0x1D8; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDensityGradientToVectorAttribute {
            public const nint m_flRadiusScale = 0x1D8; // float32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitVec {
            public const nint m_InputValue = 0x1E0; // CPerParticleVecInput
            public const nint m_nOutputField = 0x898; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x89C; // ParticleSetMethod_t
            public const nint m_bNormalizedOutput = 0x8A0; // bool
            public const nint m_bWritePreviousPosition = 0x8A1; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetHitboxToModel {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_nForceInModel = 0x1E4; // int32
            public const nint m_bEvenDistribution = 0x1E8; // bool
            public const nint m_nDesiredHitbox = 0x1EC; // int32
            public const nint m_vecHitBoxScale = 0x1F0; // CParticleCollectionVecInput
            public const nint m_vecDirectionBias = 0x8A8; // Vector
            public const nint m_bMaintainHitbox = 0x8B4; // bool
            public const nint m_bUseBones = 0x8B5; // bool
            public const nint m_HitboxSetName = 0x8B6; // char[128]
            public const nint m_flShellSize = 0x938; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementMoveAlongSkinnedCPSnapshot {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_nSnapshotControlPointNumber = 0x1DC; // int32
            public const nint m_bSetNormal = 0x1E0; // bool
            public const nint m_bSetRadius = 0x1E1; // bool
            public const nint m_flInterpolation = 0x1E8; // CPerParticleFloatInput
            public const nint m_flTValue = 0x358; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpScalar {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flOutput = 0x1E0; // CPerParticleFloatInput
            public const nint m_flStartTime = 0x350; // float32
            public const nint m_flEndTime = 0x354; // float32
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialRepulsionVelocity {
            public const nint m_CollisionGroupName = 0x1E0; // char[128]
            public const nint m_nTraceSet = 0x260; // ParticleTraceSet_t
            public const nint m_vecOutputMin = 0x264; // Vector
            public const nint m_vecOutputMax = 0x270; // Vector
            public const nint m_nControlPointNumber = 0x27C; // int32
            public const nint m_bPerParticle = 0x280; // bool
            public const nint m_bTranslate = 0x281; // bool
            public const nint m_bProportional = 0x282; // bool
            public const nint m_flTraceLength = 0x284; // float32
            public const nint m_bPerParticleTR = 0x288; // bool
            public const nint m_bInherit = 0x289; // bool
            public const nint m_nChildCP = 0x28C; // int32
            public const nint m_nChildGroupID = 0x290; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClampScalar {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flOutputMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x350; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToHMD {
            public const nint m_nCP1 = 0x1E0; // int32
            public const nint m_vecCP1Pos = 0x1E4; // Vector
            public const nint m_bOrientToHMD = 0x1F0; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DifferencePreviousParticle {
            public const nint m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // float32
            public const nint m_flInputMax = 0x1E4; // float32
            public const nint m_flOutputMin = 0x1E8; // float32
            public const nint m_flOutputMax = 0x1EC; // float32
            public const nint m_nSetMethod = 0x1F0; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1F4; // bool
            public const nint m_bSetPreviousParticle = 0x1F5; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFieldFromVectorExpression {
            public const nint m_nExpression = 0x1E0; // VectorFloatExpressionType_t
            public const nint m_vecInput1 = 0x1E8; // CParticleCollectionVecInput
            public const nint m_vecInput2 = 0x8A0; // CParticleCollectionVecInput
            public const nint m_flLerp = 0xF58; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x10C8; // CParticleRemapFloatInput
            public const nint m_nOutputCP = 0x1238; // int32
            public const nint m_nOutVectorField = 0x123C; // int32
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PercentageBetweenTransforms {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1DC; // float32
            public const nint m_flInputMax = 0x1E0; // float32
            public const nint m_flOutputMin = 0x1E4; // float32
            public const nint m_flOutputMax = 0x1E8; // float32
            public const nint m_TransformStart = 0x1F0; // CParticleTransformInput
            public const nint m_TransformEnd = 0x258; // CParticleTransformInput
            public const nint m_nSetMethod = 0x2C0; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x2C4; // bool
            public const nint m_bRadialCheck = 0x2C5; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PlaneCull {
            public const nint m_nControlPoint = 0x1E0; // int32
            public const nint m_flDistance = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_bCullInside = 0x358; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelSequenceEndCap {
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFromCPSnapshot {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_strSnapshotSubset = 0x1E8; // CUtlString
            public const nint m_nAttributeToRead = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_nAttributeToWrite = 0x1F4; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1F8; // int32
            public const nint m_bRandom = 0x1FC; // bool
            public const nint m_bReverse = 0x1FD; // bool
            public const nint m_nSnapShotIncrement = 0x200; // CParticleCollectionFloatInput
            public const nint m_nManualSnapshotIndex = 0x370; // CPerParticleFloatInput
            public const nint m_nRandomSeed = 0x4E0; // int32
            public const nint m_bLocalSpaceAngles = 0x4E4; // bool
        }
        // Parent: None
        // Field count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderCables {
            public const nint m_flRadiusScale = 0x228; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x398; // CParticleCollectionFloatInput
            public const nint m_vecColorScale = 0x508; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0xBC0; // ParticleColorBlendType_t
            public const nint m_hMaterial = 0xBC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nTextureRepetitionMode = 0xBD0; // TextureRepetitionMode_t
            public const nint m_flTextureRepeatsPerSegment = 0xBD8; // CParticleCollectionFloatInput
            public const nint m_flTextureRepeatsCircumference = 0xD48; // CParticleCollectionFloatInput
            public const nint m_flColorMapOffsetV = 0xEB8; // CParticleCollectionFloatInput
            public const nint m_flColorMapOffsetU = 0x1028; // CParticleCollectionFloatInput
            public const nint m_flNormalMapOffsetV = 0x1198; // CParticleCollectionFloatInput
            public const nint m_flNormalMapOffsetU = 0x1308; // CParticleCollectionFloatInput
            public const nint m_bDrawCableCaps = 0x1478; // bool
            public const nint m_flCapRoundness = 0x147C; // float32
            public const nint m_flCapOffsetAmount = 0x1480; // float32
            public const nint m_flTessScale = 0x1484; // float32
            public const nint m_nMinTesselation = 0x1488; // int32
            public const nint m_nMaxTesselation = 0x148C; // int32
            public const nint m_nRoundness = 0x1490; // int32
            public const nint m_nForceRoundnessFixed = 0x1494; // bool
            public const nint m_LightingTransform = 0x1498; // CParticleTransformInput
            public const nint m_MaterialFloatVars = 0x1500; // CUtlLeanVector<FloatInputMaterialVariable_t>
            public const nint m_MaterialVecVars = 0x1520; // CUtlLeanVector<VecInputMaterialVariable_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InheritVelocity {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_flVelocityScale = 0x1E4; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToWaterSurface {
            public const nint m_nSourceCP = 0x1E0; // int32
            public const nint m_nDestCP = 0x1E4; // int32
            public const nint m_nFlowCP = 0x1E8; // int32
            public const nint m_nActiveCP = 0x1EC; // int32
            public const nint m_nActiveCPField = 0x1F0; // int32
            public const nint m_flRetestRate = 0x1F8; // CParticleCollectionFloatInput
            public const nint m_bAdaptiveThreshold = 0x368; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionOffset {
            public const nint m_OffsetMin = 0x1E0; // CPerParticleVecInput
            public const nint m_OffsetMax = 0x898; // CPerParticleVecInput
            public const nint m_TransformInput = 0xF50; // CParticleTransformInput
            public const nint m_bLocalCoords = 0xFB8; // bool
            public const nint m_bProportional = 0xFB9; // bool
            public const nint m_randomnessParameters = 0xFBC; // CRandomNumberGeneratorParameters
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_NormalAlignToCP {
            public const nint m_transformInput = 0x1E0; // CParticleTransformInput
            public const nint m_nControlPointAxis = 0x248; // ParticleControlPointAxis_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ShapeMatchingConstraint {
            public const nint m_flShapeRestorationTime = 0x1D8; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetChildControlPoints {
            public const nint m_nChildGroupID = 0x1D8; // int32
            public const nint m_nFirstControlPoint = 0x1DC; // int32
            public const nint m_nNumControlPoints = 0x1E0; // int32
            public const nint m_nFirstSourcePoint = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_bReverse = 0x358; // bool
            public const nint m_bSetOrientation = 0x359; // bool
            public const nint m_nOrientation = 0x35C; // ParticleOrientationType_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ChladniWave {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x350; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x4C0; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x630; // CPerParticleFloatInput
            public const nint m_vecWaveLength = 0x7A0; // CPerParticleVecInput
            public const nint m_vecHarmonics = 0xE58; // CPerParticleVecInput
            public const nint m_nSetMethod = 0x1510; // ParticleSetMethod_t
            public const nint m_nLocalSpaceControlPoint = 0x1514; // int32
            public const nint m_b3D = 0x1518; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDirectionToCPToVector {
            public const nint m_nCP = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flScale = 0x1E0; // float32
            public const nint m_flOffsetRot = 0x1E4; // float32
            public const nint m_vecOffsetAxis = 0x1E8; // Vector
            public const nint m_bNormalize = 0x1F4; // bool
            public const nint m_nFieldStrength = 0x1F8; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DriveCPFromGlobalSoundFloat {
            public const nint m_nOutputControlPoint = 0x1E0; // int32
            public const nint m_nOutputField = 0x1E4; // int32
            public const nint m_flInputMin = 0x1E8; // float32
            public const nint m_flInputMax = 0x1EC; // float32
            public const nint m_flOutputMin = 0x1F0; // float32
            public const nint m_flOutputMax = 0x1F4; // float32
            public const nint m_StackName = 0x1F8; // CUtlString
            public const nint m_OperatorName = 0x200; // CUtlString
            public const nint m_FieldName = 0x208; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ScreenSpacePositionOfTarget {
            public const nint m_vecTargetPosition = 0x1E0; // CPerParticleVecInput
            public const nint m_bOututBehindness = 0x898; // bool
            public const nint m_nBehindFieldOutput = 0x89C; // ParticleAttributeIndex_t
            public const nint m_flBehindOutputRemap = 0x8A0; // CParticleRemapFloatInput
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RtEnvCull {
            public const nint m_vecTestDir = 0x1D8; // Vector
            public const nint m_vecTestNormal = 0x1E4; // Vector
            public const nint m_bCullOnMiss = 0x1F0; // bool
            public const nint m_bStickInsteadOfCull = 0x1F1; // bool
            public const nint m_RtEnvName = 0x1F2; // char[128]
            public const nint m_nRTEnvCP = 0x274; // int32
            public const nint m_nComponent = 0x278; // int32
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PinParticleToCP {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_vecOffset = 0x1E0; // CParticleCollectionVecInput
            public const nint m_bOffsetLocal = 0x898; // bool
            public const nint m_nParticleSelection = 0x89C; // ParticleSelection_t
            public const nint m_nParticleNumber = 0x8A0; // CParticleCollectionFloatInput
            public const nint m_nPinBreakType = 0xA10; // ParticlePinDistance_t
            public const nint m_flBreakDistance = 0xA18; // CParticleCollectionFloatInput
            public const nint m_flBreakSpeed = 0xB88; // CParticleCollectionFloatInput
            public const nint m_flAge = 0xCF8; // CParticleCollectionFloatInput
            public const nint m_nBreakControlPointNumber = 0xE68; // int32
            public const nint m_nBreakControlPointNumber2 = 0xE6C; // int32
            public const nint m_flBreakValue = 0xE70; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0xFE0; // CPerParticleFloatInput
            public const nint m_bRetainInitialVelocity = 0x1150; // bool
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPtoVector {
            public const nint m_nCPInput = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nLocalSpaceCP = 0x1E0; // int32
            public const nint m_vInputMin = 0x1E4; // Vector
            public const nint m_vInputMax = 0x1F0; // Vector
            public const nint m_vOutputMin = 0x1FC; // Vector
            public const nint m_vOutputMax = 0x208; // Vector
            public const nint m_flStartTime = 0x214; // float32
            public const nint m_flEndTime = 0x218; // float32
            public const nint m_flInterpRate = 0x21C; // float32
            public const nint m_nSetMethod = 0x220; // ParticleSetMethod_t
            public const nint m_bOffset = 0x224; // bool
            public const nint m_bAccelerate = 0x225; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateParticleImpulse {
            public const nint m_InputRadius = 0x1E0; // CPerParticleFloatInput
            public const nint m_InputMagnitude = 0x350; // CPerParticleFloatInput
            public const nint m_nFalloffFunction = 0x4C0; // ParticleFalloffFunction_t
            public const nint m_InputFalloffExp = 0x4C8; // CPerParticleFloatInput
            public const nint m_nImpulseType = 0x638; // ParticleImpulseType_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DensityForce {
            public const nint m_flRadiusScale = 0x1E8; // float32
            public const nint m_flForceScale = 0x1EC; // float32
            public const nint m_flTargetDensity = 0x1F0; // float32
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateInEpitrochoid {
            public const nint m_nComponent1 = 0x1E0; // int32
            public const nint m_nComponent2 = 0x1E4; // int32
            public const nint m_TransformInput = 0x1E8; // CParticleTransformInput
            public const nint m_flParticleDensity = 0x250; // CPerParticleFloatInput
            public const nint m_flOffset = 0x3C0; // CPerParticleFloatInput
            public const nint m_flRadius1 = 0x530; // CPerParticleFloatInput
            public const nint m_flRadius2 = 0x6A0; // CPerParticleFloatInput
            public const nint m_bUseCount = 0x810; // bool
            public const nint m_bUseLocalCoords = 0x811; // bool
            public const nint m_bOffsetExistingPos = 0x812; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ConstrainDistanceToUserSpecifiedPath {
            public const nint m_fMinDistance = 0x1D8; // float32
            public const nint m_flMaxDistance = 0x1DC; // float32
            public const nint m_flTimeScale = 0x1E0; // float32
            public const nint m_bLoopedPath = 0x1E4; // bool
            public const nint m_pointList = 0x1E8; // CUtlVector<PointDefinitionWithTimeValues_t>
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointPositions {
            public const nint m_bUseWorldLocation = 0x1E0; // bool
            public const nint m_bOrient = 0x1E1; // bool
            public const nint m_bSetOnce = 0x1E2; // bool
            public const nint m_nCP1 = 0x1E4; // int32
            public const nint m_nCP2 = 0x1E8; // int32
            public const nint m_nCP3 = 0x1EC; // int32
            public const nint m_nCP4 = 0x1F0; // int32
            public const nint m_vecCP1Pos = 0x1F4; // Vector
            public const nint m_vecCP2Pos = 0x200; // Vector
            public const nint m_vecCP3Pos = 0x20C; // Vector
            public const nint m_vecCP4Pos = 0x218; // Vector
            public const nint m_nHeadLocation = 0x224; // int32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetFloatAttributeToVectorExpression {
            public const nint m_nExpression = 0x1D8; // VectorFloatExpressionType_t
            public const nint m_vInput1 = 0x1E0; // CPerParticleVecInput
            public const nint m_vInput2 = 0x898; // CPerParticleVecInput
            public const nint m_flOutputRemap = 0xF50; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x10C0; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x10C4; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementRotateParticleAroundAxis {
            public const nint m_vecRotAxis = 0x1D8; // CParticleCollectionVecInput
            public const nint m_flRotRate = 0x890; // CParticleCollectionFloatInput
            public const nint m_TransformInput = 0xA00; // CParticleTransformInput
            public const nint m_bLocalSpace = 0xA68; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_IntraParticleForce {
            public const nint m_flAttractionMinDistance = 0x1E8; // float32
            public const nint m_flAttractionMaxDistance = 0x1EC; // float32
            public const nint m_flAttractionMaxStrength = 0x1F0; // float32
            public const nint m_flRepulsionMinDistance = 0x1F4; // float32
            public const nint m_flRepulsionMaxDistance = 0x1F8; // float32
            public const nint m_flRepulsionMaxStrength = 0x1FC; // float32
            public const nint m_bUseAABB = 0x200; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitFloat {
            public const nint m_InputValue = 0x1E0; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x350; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x354; // ParticleSetMethod_t
            public const nint m_InputStrength = 0x358; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateOnModel {
            public const nint m_modelInput = 0x1E0; // CParticleModelInput
            public const nint m_transformInput = 0x240; // CParticleTransformInput
            public const nint m_nForceInModel = 0x2A8; // int32
            public const nint m_bScaleToVolume = 0x2AC; // bool
            public const nint m_bEvenDistribution = 0x2AD; // bool
            public const nint m_nDesiredHitbox = 0x2B0; // CParticleCollectionFloatInput
            public const nint m_nHitboxValueFromControlPointIndex = 0x420; // int32
            public const nint m_vecHitBoxScale = 0x428; // CParticleCollectionVecInput
            public const nint m_flBoneVelocity = 0xAE0; // float32
            public const nint m_flMaxBoneVelocity = 0xAE4; // float32
            public const nint m_vecDirectionBias = 0xAE8; // CParticleCollectionVecInput
            public const nint m_HitboxSetName = 0x11A0; // char[128]
            public const nint m_bLocalCoords = 0x1220; // bool
            public const nint m_bUseBones = 0x1221; // bool
            public const nint m_bUseMesh = 0x1222; // bool
            public const nint m_flShellSize = 0x1228; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_InheritFromPeerSystem {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1E0; // int32
            public const nint m_nGroupID = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PerParticleForce {
            public const nint m_flForceScale = 0x1E8; // CPerParticleFloatInput
            public const nint m_vForce = 0x358; // CPerParticleVecInput
            public const nint m_nCP = 0xA10; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomNamedModelMeshGroup {
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderProjected {
            public const nint m_bProjectCharacter = 0x228; // bool
            public const nint m_bProjectWorld = 0x229; // bool
            public const nint m_bProjectWater = 0x22A; // bool
            public const nint m_bFlipHorizontal = 0x22B; // bool
            public const nint m_bEnableProjectedDepthControls = 0x22C; // bool
            public const nint m_flMinProjectionDepth = 0x230; // float32
            public const nint m_flMaxProjectionDepth = 0x234; // float32
            public const nint m_vecProjectedMaterials = 0x238; // CUtlVector<RenderProjectedMaterial_t>
            public const nint m_flMaterialSelection = 0x250; // CPerParticleFloatInput
            public const nint m_flAnimationTimeScale = 0x3C0; // float32
            public const nint m_bOrientToNormal = 0x3C4; // bool
            public const nint m_MaterialVars = 0x3C8; // CUtlVector<MaterialVariable_t>
            public const nint m_flRadiusScale = 0x3E0; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x550; // CParticleCollectionFloatInput
            public const nint m_flRollScale = 0x6C0; // CParticleCollectionFloatInput
            public const nint m_nAlpha2Field = 0x830; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x838; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0xEF0; // ParticleColorBlendType_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaxVelocity {
            public const nint m_flMaxVelocity = 0x1D8; // float32
            public const nint m_flMinVelocity = 0x1DC; // float32
            public const nint m_nOverrideCP = 0x1E0; // int32
            public const nint m_nOverrideCPField = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_VelocityFromNormal {
            public const nint m_fSpeedMin = 0x1E0; // float32
            public const nint m_fSpeedMax = 0x1E4; // float32
            public const nint m_bIgnoreDt = 0x1E8; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaintainEmitter {
            public const nint m_nParticlesToMaintain = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_flStartTime = 0x350; // float32
            public const nint m_flEmissionDuration = 0x358; // CParticleCollectionFloatInput
            public const nint m_flEmissionRate = 0x4C8; // float32
            public const nint m_nSnapshotControlPoint = 0x4CC; // int32
            public const nint m_strSnapshotSubset = 0x4D0; // CUtlString
            public const nint m_bEmitInstantaneously = 0x4D8; // bool
            public const nint m_bFinalEmitOnStop = 0x4D9; // bool
            public const nint m_flScale = 0x4E0; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionOffsetToCP {
            public const nint m_nControlPointNumberStart = 0x1E0; // int32
            public const nint m_nControlPointNumberEnd = 0x1E4; // int32
            public const nint m_bLocalCoords = 0x1E8; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapInitialTransformDirectionToRotation {
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
            public const nint m_flOffsetRot = 0x24C; // float32
            public const nint m_nComponent = 0x250; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeAndKill {
            public const nint m_flStartFadeInTime = 0x1D8; // float32
            public const nint m_flEndFadeInTime = 0x1DC; // float32
            public const nint m_flStartFadeOutTime = 0x1E0; // float32
            public const nint m_flEndFadeOutTime = 0x1E4; // float32
            public const nint m_flStartAlpha = 0x1E8; // float32
            public const nint m_flEndAlpha = 0x1EC; // float32
            public const nint m_bForcePreserveParticleOrder = 0x1F0; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ColorInterpolate {
            public const nint m_ColorFade = 0x1D8; // Color
            public const nint m_flFadeStartTime = 0x1E8; // float32
            public const nint m_flFadeEndTime = 0x1EC; // float32
            public const nint m_nFieldOutput = 0x1F0; // ParticleAttributeIndex_t
            public const nint m_bEaseInOut = 0x1F4; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarSpline {
            public const nint m_RateMin = 0x1D8; // float32
            public const nint m_RateMax = 0x1DC; // float32
            public const nint m_flStartTime_min = 0x1E0; // float32
            public const nint m_flStartTime_max = 0x1E4; // float32
            public const nint m_flEndTime_min = 0x1E8; // float32
            public const nint m_flEndTime_max = 0x1EC; // float32
            public const nint m_flBias = 0x1F0; // float32
            public const nint m_nField = 0x220; // ParticleAttributeIndex_t
            public const nint m_bProportionalOp = 0x224; // bool
            public const nint m_bEaseOut = 0x225; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelSequenceOnceTimed {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFromObjectScale {
            public const nint m_nCPInput = 0x1E0; // int32
            public const nint m_nCPOutput = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MaintainSequentialPath {
            public const nint m_fMaxDistance = 0x1D8; // float32
            public const nint m_flNumToAssign = 0x1DC; // float32
            public const nint m_flCohesionStrength = 0x1E0; // float32
            public const nint m_flTolerance = 0x1E4; // float32
            public const nint m_bLoop = 0x1E8; // bool
            public const nint m_bUseParticleCount = 0x1E9; // bool
            public const nint m_PathParams = 0x1F0; // CPathParameters
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelBodyPartEndCap {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_StopAfterCPDuration {
            public const nint m_flDuration = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_bDestroyImmediately = 0x350; // bool
            public const nint m_bPlayEndCap = 0x351; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGeneralSpin {
            public const nint m_nSpinRateDegrees = 0x1D8; // int32
            public const nint m_nSpinRateMinDegrees = 0x1DC; // int32
            public const nint m_fSpinRateStopTime = 0x1E4; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MParticleMaxVersion
        // MParticleReplacementOp
        // MGetKV3ClassDefaults
        public static class C_OP_LockToSavedSequentialPath {
            public const nint m_flFadeStart = 0x1DC; // float32
            public const nint m_flFadeEnd = 0x1E0; // float32
            public const nint m_bCPPairs = 0x1E4; // bool
            public const nint m_PathParams = 0x1F0; // CPathParameters
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelElementToScalar {
            public const nint m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_names = 0x1E8; // CUtlVector<CUtlString>
            public const nint m_values = 0x200; // CUtlVector<float32>
            public const nint m_nFieldInput = 0x218; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x21C; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x220; // ParticleSetMethod_t
            public const nint m_bModelFromRenderer = 0x224; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClampVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1E0; // CPerParticleVecInput
            public const nint m_vecOutputMax = 0x898; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderStatusEffectCitadel {
            public const nint m_pTextureColorWarp = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureNormal = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureMetalness = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureRoughness = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureSelfIllum = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_pTextureDetail = 0x250; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class IParticleSystemDefinition {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WindForce {
            public const nint m_vForce = 0x1E8; // Vector
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetVariable {
            public const nint m_variableReference = 0x1E0; // CParticleVariableRef
            public const nint m_transformInput = 0x230; // CParticleTransformInput
            public const nint m_positionOffset = 0x298; // Vector
            public const nint m_rotationOffset = 0x2A4; // QAngle
            public const nint m_vecInput = 0x2B0; // CParticleCollectionVecInput
            public const nint m_floatInput = 0x968; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 32
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderStandardLight {
            public const nint m_nLightType = 0x228; // ParticleLightTypeChoiceList_t
            public const nint m_nMaxAllowed = 0x22C; // uint16
            public const nint m_vecColorScale = 0x230; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x8E8; // ParticleColorBlendType_t
            public const nint m_flIntensity = 0x8F0; // CPerParticleFloatInput
            public const nint m_bCastShadows = 0xA60; // bool
            public const nint m_bDynamicBounce = 0xA61; // bool
            public const nint m_flBounceScale = 0xA68; // CParticleCollectionFloatInput
            public const nint m_flTheta = 0xBD8; // CParticleCollectionFloatInput
            public const nint m_flPhi = 0xD48; // CParticleCollectionFloatInput
            public const nint m_flRadiusMultiplier = 0xEB8; // CParticleCollectionFloatInput
            public const nint m_nAttenuationStyle = 0x1028; // StandardLightingAttenuationStyle_t
            public const nint m_flFalloffLinearity = 0x1030; // CParticleCollectionFloatInput
            public const nint m_flFiftyPercentFalloff = 0x11A0; // CParticleCollectionFloatInput
            public const nint m_flZeroPercentFalloff = 0x1310; // CParticleCollectionFloatInput
            public const nint m_bRenderDiffuse = 0x1480; // bool
            public const nint m_bRenderSpecular = 0x1481; // bool
            public const nint m_lightCookie = 0x1488; // CUtlString
            public const nint m_nPriority = 0x1490; // int32
            public const nint m_nFogLightingMode = 0x1494; // ParticleLightFogLightingMode_t
            public const nint m_flFogContribution = 0x1498; // CParticleCollectionRendererFloatInput
            public const nint m_nCapsuleLightBehavior = 0x1608; // ParticleLightBehaviorChoiceList_t
            public const nint m_flCapsuleLength = 0x160C; // float32
            public const nint m_bReverseOrder = 0x1610; // bool
            public const nint m_bClosedLoop = 0x1611; // bool
            public const nint m_nPrevPntSource = 0x1614; // ParticleAttributeIndex_t
            public const nint m_flMaxLength = 0x1618; // float32
            public const nint m_flMinLength = 0x161C; // float32
            public const nint m_bIgnoreDT = 0x1620; // bool
            public const nint m_flConstrainRadiusToLengthRatio = 0x1624; // float32
            public const nint m_flLengthScale = 0x1628; // float32
            public const nint m_flLengthFadeInTime = 0x162C; // float32
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_DistanceToTransform {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x350; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x4C0; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x630; // CPerParticleFloatInput
            public const nint m_TransformStart = 0x7A0; // CParticleTransformInput
            public const nint m_bLOS = 0x808; // bool
            public const nint m_CollisionGroupName = 0x809; // char[128]
            public const nint m_nTraceSet = 0x88C; // ParticleTraceSet_t
            public const nint m_flMaxTraceLength = 0x890; // float32
            public const nint m_flLOSScale = 0x894; // float32
            public const nint m_nSetMethod = 0x898; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x89C; // bool
            public const nint m_bAdditive = 0x89D; // bool
            public const nint m_vecComponentScale = 0x8A0; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapControlPointOrientationToRotation {
            public const nint m_nCP = 0x1D8; // int32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flOffsetRot = 0x1E0; // float32
            public const nint m_nComponent = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToCenter {
            public const nint m_nCP1 = 0x1E0; // int32
            public const nint m_vecCP1Pos = 0x1E4; // Vector
            public const nint m_bUseAvgParticlePos = 0x1F0; // bool
            public const nint m_nSetParent = 0x1F4; // ParticleParentSetMode_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapAverageScalarValuetoCP {
            public const nint m_nExpression = 0x1E0; // SetStatisticExpressionType_t
            public const nint m_flDecimalPlaces = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_nOutControlPointNumber = 0x358; // int32
            public const nint m_nOutVectorField = 0x35C; // int32
            public const nint m_nField = 0x360; // ParticleAttributeIndex_t
            public const nint m_flOutputRemap = 0x368; // CParticleRemapFloatInput
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDotProductToScalar {
            public const nint m_nInputCP1 = 0x1D8; // int32
            public const nint m_nInputCP2 = 0x1DC; // int32
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E4; // float32
            public const nint m_flInputMax = 0x1E8; // float32
            public const nint m_flOutputMin = 0x1EC; // float32
            public const nint m_flOutputMax = 0x1F0; // float32
            public const nint m_bUseParticleVelocity = 0x1F4; // bool
            public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x1FC; // bool
            public const nint m_bUseParticleNormal = 0x1FD; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapCPtoCP {
            public const nint m_nInputControlPoint = 0x1E0; // int32
            public const nint m_nOutputControlPoint = 0x1E4; // int32
            public const nint m_nInputField = 0x1E8; // int32
            public const nint m_nOutputField = 0x1EC; // int32
            public const nint m_flInputMin = 0x1F0; // float32
            public const nint m_flInputMax = 0x1F4; // float32
            public const nint m_flOutputMin = 0x1F8; // float32
            public const nint m_flOutputMax = 0x1FC; // float32
            public const nint m_bDerivative = 0x200; // bool
            public const nint m_flInterpRate = 0x204; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointRotation {
            public const nint m_vecRotAxis = 0x1E0; // CParticleCollectionVecInput
            public const nint m_flRotRate = 0x898; // CParticleCollectionFloatInput
            public const nint m_nCP = 0xA08; // int32
            public const nint m_nLocalCP = 0xA0C; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CurlNoiseForce {
            public const nint m_nNoiseType = 0x1E8; // ParticleDirectionNoiseType_t
            public const nint m_vecNoiseFreq = 0x1F0; // CPerParticleVecInput
            public const nint m_vecNoiseScale = 0x8A8; // CPerParticleVecInput
            public const nint m_vecOffset = 0xF60; // CPerParticleVecInput
            public const nint m_vecOffsetRate = 0x1618; // CPerParticleVecInput
            public const nint m_flWorleySeed = 0x1CD0; // CPerParticleFloatInput
            public const nint m_flWorleyJitter = 0x1E40; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_Orient2DRelToCP {
            public const nint m_nCP = 0x1E0; // int32
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_flRotOffset = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetSimulationRate {
            public const nint m_flSimulationScale = 0x1E0; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_FadeIn {
            public const nint m_flFadeInTimeMin = 0x1D8; // float32
            public const nint m_flFadeInTimeMax = 0x1DC; // float32
            public const nint m_flFadeInTimeExp = 0x1E0; // float32
            public const nint m_bProportional = 0x1E4; // bool
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderScreenShake {
            public const nint m_flDurationScale = 0x228; // float32
            public const nint m_flRadiusScale = 0x22C; // float32
            public const nint m_flFrequencyScale = 0x230; // float32
            public const nint m_flAmplitudeScale = 0x234; // float32
            public const nint m_nRadiusField = 0x238; // ParticleAttributeIndex_t
            public const nint m_nDurationField = 0x23C; // ParticleAttributeIndex_t
            public const nint m_nFrequencyField = 0x240; // ParticleAttributeIndex_t
            public const nint m_nAmplitudeField = 0x244; // ParticleAttributeIndex_t
            public const nint m_nFilterCP = 0x248; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapBoundingVolumetoCP {
            public const nint m_nOutControlPointNumber = 0x1E0; // int32
            public const nint m_flInputMin = 0x1E4; // float32
            public const nint m_flInputMax = 0x1E8; // float32
            public const nint m_flOutputMin = 0x1EC; // float32
            public const nint m_flOutputMax = 0x1F0; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_HSVShiftToCP {
            public const nint m_nColorCP = 0x1E0; // int32
            public const nint m_nColorGemEnableCP = 0x1E4; // int32
            public const nint m_nOutputCP = 0x1E8; // int32
            public const nint m_DefaultHSVColor = 0x1EC; // Color
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapVectorToRotations {
            public const nint m_vecInput = 0x1D8; // CPerParticleVecInput
            public const nint m_vecRotation = 0x890; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_GlobalScale {
            public const nint m_flScale = 0x1E0; // float32
            public const nint m_nScaleControlPointNumber = 0x1E4; // int32
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_bScaleRadius = 0x1EC; // bool
            public const nint m_bScalePosition = 0x1ED; // bool
            public const nint m_bScaleVelocity = 0x1EE; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RadiusFromCPObject {
            public const nint m_nControlPoint = 0x1E0; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialVelocityFromHitbox {
            public const nint m_flVelocityMin = 0x1E0; // float32
            public const nint m_flVelocityMax = 0x1E4; // float32
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_HitboxSetName = 0x1EC; // char[128]
            public const nint m_bUseBones = 0x26C; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecOutput = 0x1DC; // Vector
            public const nint m_flStartTime = 0x1E8; // float32
            public const nint m_flEndTime = 0x1EC; // float32
            public const nint m_nSetMethod = 0x1F0; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointFieldToWater {
            public const nint m_nSourceCP = 0x1E0; // int32
            public const nint m_nDestCP = 0x1E4; // int32
            public const nint m_nCPField = 0x1E8; // int32
        }
        // Parent: None
        // Field count: 9
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
            public const nint m_TextureControls = 0x1A8; // TextureControls_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_TimeVaryingForce {
            public const nint m_flStartLerpTime = 0x1E8; // float32
            public const nint m_StartingForce = 0x1EC; // Vector
            public const nint m_flEndLerpTime = 0x1F8; // float32
            public const nint m_EndingForce = 0x1FC; // Vector
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetCPOrientationToGroundNormal {
            public const nint m_flInterpRate = 0x1D8; // float32
            public const nint m_flMaxTraceLength = 0x1DC; // float32
            public const nint m_flTolerance = 0x1E0; // float32
            public const nint m_flTraceOffset = 0x1E4; // float32
            public const nint m_CollisionGroupName = 0x1E8; // char[128]
            public const nint m_nTraceSet = 0x268; // ParticleTraceSet_t
            public const nint m_nInputCP = 0x26C; // int32
            public const nint m_nOutputCP = 0x270; // int32
            public const nint m_bIncludeWater = 0x280; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SnapshotSkinToBones {
            public const nint m_bTransformNormals = 0x1D8; // bool
            public const nint m_bTransformRadii = 0x1D9; // bool
            public const nint m_nControlPointNumber = 0x1DC; // int32
            public const nint m_flLifeTimeFadeStart = 0x1E0; // float32
            public const nint m_flLifeTimeFadeEnd = 0x1E4; // float32
            public const nint m_flJumpThreshold = 0x1E8; // float32
            public const nint m_flPrevPosScale = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateWithinSphereTransform {
            public const nint m_fRadiusMin = 0x1E0; // CPerParticleFloatInput
            public const nint m_fRadiusMax = 0x350; // CPerParticleFloatInput
            public const nint m_vecDistanceBias = 0x4C0; // CPerParticleVecInput
            public const nint m_vecDistanceBiasAbs = 0xB78; // Vector
            public const nint m_TransformInput = 0xB88; // CParticleTransformInput
            public const nint m_fSpeedMin = 0xBF0; // CPerParticleFloatInput
            public const nint m_fSpeedMax = 0xD60; // CPerParticleFloatInput
            public const nint m_fSpeedRandExp = 0xED0; // float32
            public const nint m_bLocalCoords = 0xED4; // bool
            public const nint m_LocalCoordinateSystemSpeedMin = 0xED8; // CPerParticleVecInput
            public const nint m_LocalCoordinateSystemSpeedMax = 0x1590; // CPerParticleVecInput
            public const nint m_nFieldOutput = 0x1C48; // ParticleAttributeIndex_t
            public const nint m_nFieldVelocity = 0x1C4C; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RadiusDecay {
            public const nint m_flMinRadius = 0x1D8; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelBodyPartToScalar {
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapScalarToVector {
            public const nint m_nFieldInput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E8; // float32
            public const nint m_flInputMax = 0x1EC; // float32
            public const nint m_vecOutputMin = 0x1F0; // Vector
            public const nint m_vecOutputMax = 0x1FC; // Vector
            public const nint m_flStartTime = 0x208; // float32
            public const nint m_flEndTime = 0x20C; // float32
            public const nint m_nSetMethod = 0x210; // ParticleSetMethod_t
            public const nint m_nControlPointNumber = 0x214; // int32
            public const nint m_bLocalCoords = 0x218; // bool
            public const nint m_flRemapBias = 0x21C; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitialSequenceFromModel {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutputAnim = 0x1E8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1EC; // float32
            public const nint m_flInputMax = 0x1F0; // float32
            public const nint m_flOutputMin = 0x1F4; // float32
            public const nint m_flOutputMax = 0x1F8; // float32
            public const nint m_nSetMethod = 0x1FC; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_NoiseEmitter {
            public const nint m_flEmissionDuration = 0x1E0; // float32
            public const nint m_flStartTime = 0x1E4; // float32
            public const nint m_flEmissionScale = 0x1E8; // float32
            public const nint m_nScaleControlPoint = 0x1EC; // int32
            public const nint m_nScaleControlPointField = 0x1F0; // int32
            public const nint m_nWorldNoisePoint = 0x1F4; // int32
            public const nint m_bAbsVal = 0x1F8; // bool
            public const nint m_bAbsValInv = 0x1F9; // bool
            public const nint m_flOffset = 0x1FC; // float32
            public const nint m_flOutputMin = 0x200; // float32
            public const nint m_flOutputMax = 0x204; // float32
            public const nint m_flNoiseScale = 0x208; // float32
            public const nint m_flWorldNoiseScale = 0x20C; // float32
            public const nint m_vecOffsetLoc = 0x210; // Vector
            public const nint m_flWorldTimeScale = 0x21C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionInitializer {
            public const nint m_nAssociatedEmitterIndex = 0x1D8; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SelectivelyEnableChildren {
            public const nint m_nChildGroupID = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_nFirstChild = 0x350; // CParticleCollectionFloatInput
            public const nint m_nNumChildrenToEnable = 0x4C0; // CParticleCollectionFloatInput
            public const nint m_bPlayEndcapOnStop = 0x630; // bool
            public const nint m_bDestroyImmediately = 0x631; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ModelReference_t {
            public const nint m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_flRelativeProbabilityOfSpawn = 0x8; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PlanarConstraint {
            public const nint m_PointOnPlane = 0x1D8; // Vector
            public const nint m_PlaneNormal = 0x1E4; // Vector
            public const nint m_nControlPointNumber = 0x1F0; // int32
            public const nint m_bGlobalOrigin = 0x1F4; // bool
            public const nint m_bGlobalNormal = 0x1F5; // bool
            public const nint m_flRadiusScale = 0x1F8; // CPerParticleFloatInput
            public const nint m_flMaximumDistanceToCP = 0x368; // CParticleCollectionFloatInput
            public const nint m_bUseOldCode = 0x4D8; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateFromCPs {
            public const nint m_nIncrement = 0x1E0; // int32
            public const nint m_nMinCP = 0x1E4; // int32
            public const nint m_nMaxCP = 0x1E8; // int32
            public const nint m_nDynamicCPCount = 0x1F0; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LockPoints {
            public const nint m_nMinCol = 0x1D8; // int32
            public const nint m_nMaxCol = 0x1DC; // int32
            public const nint m_nMinRow = 0x1E0; // int32
            public const nint m_nMaxRow = 0x1E4; // int32
            public const nint m_nControlPoint = 0x1E8; // int32
            public const nint m_flBlendValue = 0x1EC; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_CreateSpiralSphere {
            public const nint m_TransformInput = 0x1E0; // CParticleTransformInput
            public const nint m_flDensity = 0x248; // CPerParticleFloatInput
            public const nint m_flInitialRadius = 0x3B8; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMin = 0x528; // CPerParticleFloatInput
            public const nint m_flInitialSpeedMax = 0x698; // CPerParticleFloatInput
            public const nint m_bUseParticleCount = 0x808; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CPVelocityForce {
            public const nint m_nControlPointNumber = 0x1E8; // int32
            public const nint m_flScale = 0x1F0; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapNamedModelElementEndCap {
            public const nint m_hModel = 0x1D8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_inNames = 0x1E0; // CUtlVector<CUtlString>
            public const nint m_outNames = 0x1F8; // CUtlVector<CUtlString>
            public const nint m_fallbackNames = 0x210; // CUtlVector<CUtlString>
            public const nint m_bModelFromRenderer = 0x228; // bool
            public const nint m_nFieldInput = 0x22C; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x230; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ScaleVelocity {
            public const nint m_vecScale = 0x1E0; // CParticleCollectionVecInput
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MoveToHitbox {
            public const nint m_modelInput = 0x1D8; // CParticleModelInput
            public const nint m_transformInput = 0x238; // CParticleTransformInput
            public const nint m_flLifeTimeLerpStart = 0x2A4; // float32
            public const nint m_flLifeTimeLerpEnd = 0x2A8; // float32
            public const nint m_flPrevPosScale = 0x2AC; // float32
            public const nint m_HitboxSetName = 0x2B0; // char[128]
            public const nint m_bUseBones = 0x330; // bool
            public const nint m_nLerpType = 0x334; // HitboxLerpType_t
            public const nint m_flInterpolation = 0x338; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PinRopeSegmentParticleToParent {
            public const nint m_nParticleSelection = 0x1D8; // ParticleSelection_t
            public const nint m_nParticleNumber = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_flInterpolation = 0x350; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PointList {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_pointList = 0x1E8; // CUtlVector<PointDefinition_t>
            public const nint m_bPlaceAlongPath = 0x200; // bool
            public const nint m_bClosedLoop = 0x201; // bool
            public const nint m_nNumPointsAlongPath = 0x204; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpToOtherAttribute {
            public const nint m_flInterpolation = 0x1D8; // CPerParticleFloatInput
            public const nint m_nFieldInputFrom = 0x348; // ParticleAttributeIndex_t
            public const nint m_nFieldInput = 0x34C; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x350; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RandomColor {
            public const nint m_ColorMin = 0x1FC; // Color
            public const nint m_ColorMax = 0x200; // Color
            public const nint m_TintMin = 0x204; // Color
            public const nint m_TintMax = 0x208; // Color
            public const nint m_flTintPerc = 0x20C; // float32
            public const nint m_flUpdateThreshold = 0x210; // float32
            public const nint m_nTintCP = 0x214; // int32
            public const nint m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
            public const nint m_nTintBlendMode = 0x21C; // ParticleColorBlendMode_t
            public const nint m_flLightAmplification = 0x220; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetGravityToCP {
            public const nint m_nCPInput = 0x1E0; // int32
            public const nint m_nCPOutput = 0x1E4; // int32
            public const nint m_flScale = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_bSetPosition = 0x358; // bool
            public const nint m_bSetOrientation = 0x359; // bool
            public const nint m_bSetZDown = 0x35A; // bool
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToScalar {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1E4; // int32
            public const nint m_nInputMax = 0x1E8; // int32
            public const nint m_nScaleControlPoint = 0x1EC; // int32
            public const nint m_nScaleControlPointField = 0x1F0; // int32
            public const nint m_flOutputMin = 0x1F4; // float32
            public const nint m_flOutputMax = 0x1F8; // float32
            public const nint m_nSetMethod = 0x1FC; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x200; // bool
            public const nint m_bInvert = 0x201; // bool
            public const nint m_bWrap = 0x202; // bool
            public const nint m_flRemapBias = 0x204; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InheritFromParentParticles {
            public const nint m_flScale = 0x1E0; // float32
            public const nint m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_nIncrement = 0x1E8; // int32
            public const nint m_bRandomDistribution = 0x1EC; // bool
            public const nint m_nRandomSeed = 0x1F0; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarLinearSimple {
            public const nint m_Rate = 0x1D8; // float32
            public const nint m_flStartTime = 0x1DC; // float32
            public const nint m_flEndTime = 0x1E0; // float32
            public const nint m_nField = 0x210; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ChaoticAttractor {
            public const nint m_flAParm = 0x1E0; // float32
            public const nint m_flBParm = 0x1E4; // float32
            public const nint m_flCParm = 0x1E8; // float32
            public const nint m_flDParm = 0x1EC; // float32
            public const nint m_flScale = 0x1F0; // float32
            public const nint m_flSpeedMin = 0x1F4; // float32
            public const nint m_flSpeedMax = 0x1F8; // float32
            public const nint m_nBaseCP = 0x1FC; // int32
            public const nint m_bUniformSpeed = 0x200; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_MovementRigidAttachToCP {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_nScaleControlPoint = 0x1DC; // int32
            public const nint m_nScaleCPField = 0x1E0; // int32
            public const nint m_nFieldInput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1E8; // ParticleAttributeIndex_t
            public const nint m_bOffsetLocal = 0x1EC; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderFlattenGrass {
            public const nint m_flFlattenStrength = 0x228; // float32
            public const nint m_nStrengthFieldOverride = 0x22C; // ParticleAttributeIndex_t
            public const nint m_flRadiusScale = 0x230; // float32
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderLightBeam {
            public const nint m_nMaxAllowed = 0x228; // uint16
            public const nint m_vColorBlend = 0x230; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x8E8; // ParticleColorBlendType_t
            public const nint m_flBrightnessLumensPerMeter = 0x8F0; // CParticleCollectionFloatInput
            public const nint m_bCastShadows = 0xA60; // bool
            public const nint m_bDynamicBounce = 0xA61; // bool
            public const nint m_flBounceScale = 0xA68; // CParticleCollectionFloatInput
            public const nint m_flSkirt = 0xBD8; // CParticleCollectionFloatInput
            public const nint m_flRange = 0xD48; // CParticleCollectionFloatInput
            public const nint m_flThickness = 0xEB8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EnableChildrenFromParentParticleCount {
            public const nint m_nChildGroupID = 0x1E0; // int32
            public const nint m_nFirstChild = 0x1E4; // int32
            public const nint m_nNumChildrenToEnable = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_bDisableChildren = 0x358; // bool
            public const nint m_bPlayEndcapOnStop = 0x359; // bool
            public const nint m_bDestroyImmediately = 0x35A; // bool
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_DistanceToCPInit {
            public const nint m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1E8; // CPerParticleFloatInput
            public const nint m_flInputMax = 0x358; // CPerParticleFloatInput
            public const nint m_flOutputMin = 0x4C8; // CPerParticleFloatInput
            public const nint m_flOutputMax = 0x638; // CPerParticleFloatInput
            public const nint m_nStartCP = 0x7A8; // int32
            public const nint m_bLOS = 0x7AC; // bool
            public const nint m_CollisionGroupName = 0x7AD; // char[128]
            public const nint m_nTraceSet = 0x830; // ParticleTraceSet_t
            public const nint m_flMaxTraceLength = 0x838; // CPerParticleFloatInput
            public const nint m_flLOSScale = 0x9A8; // float32
            public const nint m_nSetMethod = 0x9AC; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x9B0; // bool
            public const nint m_vecDistanceScale = 0x9B4; // Vector
            public const nint m_flRemapBias = 0x9C0; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CReplicationParameters {
            public const nint m_nReplicationMode = 0x0; // ParticleReplicationMode_t
            public const nint m_bScaleChildParticleRadii = 0x4; // bool
            public const nint m_flMinRandomRadiusScale = 0x8; // CParticleCollectionFloatInput
            public const nint m_flMaxRandomRadiusScale = 0x178; // CParticleCollectionFloatInput
            public const nint m_vMinRandomDisplacement = 0x2E8; // CParticleCollectionVecInput
            public const nint m_vMaxRandomDisplacement = 0x9A0; // CParticleCollectionVecInput
            public const nint m_flModellingScale = 0x1058; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_EndCapDecay {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ForceBasedOnDistanceToPlane {
            public const nint m_flMinDist = 0x1E8; // float32
            public const nint m_vecForceAtMinDist = 0x1EC; // Vector
            public const nint m_flMaxDist = 0x1F8; // float32
            public const nint m_vecForceAtMaxDist = 0x1FC; // Vector
            public const nint m_vecPlaneNormal = 0x208; // Vector
            public const nint m_nControlPointNumber = 0x214; // int32
            public const nint m_flExponent = 0x218; // float32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapDensityToVector {
            public const nint m_flRadiusScale = 0x1D8; // float32
            public const nint m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            public const nint m_flDensityMin = 0x1E0; // float32
            public const nint m_flDensityMax = 0x1E4; // float32
            public const nint m_vecOutputMin = 0x1E8; // Vector
            public const nint m_vecOutputMax = 0x1F4; // Vector
            public const nint m_bUseParentDensity = 0x200; // bool
            public const nint m_nVoxelGridResolution = 0x204; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointConfiguration_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
            public const nint m_previewState = 0x20; // ParticlePreviewState_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetRigidAttachment {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_nFieldInput = 0x1E4; // ParticleAttributeIndex_t
            public const nint m_nFieldOutput = 0x1E8; // ParticleAttributeIndex_t
            public const nint m_bLocalSpace = 0x1EC; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_nVariableField = 0x8; // ParticleAttributeIndex_t
            public const nint m_flScale = 0xC; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionConstraint {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapSpeed {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1DC; // float32
            public const nint m_flInputMax = 0x1E0; // float32
            public const nint m_flOutputMin = 0x1E4; // float32
            public const nint m_flOutputMax = 0x1E8; // float32
            public const nint m_nSetMethod = 0x1EC; // ParticleSetMethod_t
            public const nint m_bIgnoreDelta = 0x1F0; // bool
        }
        // Parent: None
        // Field count: 56
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderModels {
            public const nint m_bOnlyRenderInEffectsBloomPass = 0x228; // bool
            public const nint m_bOnlyRenderInEffectsWaterPass = 0x229; // bool
            public const nint m_bUseMixedResolutionRendering = 0x22A; // bool
            public const nint m_bOnlyRenderInEffecsGameOverlay = 0x22B; // bool
            public const nint m_ModelList = 0x230; // CUtlVector<ModelReference_t>
            public const nint m_nBodyGroupField = 0x248; // ParticleAttributeIndex_t
            public const nint m_nSubModelField = 0x24C; // ParticleAttributeIndex_t
            public const nint m_bIgnoreNormal = 0x250; // bool
            public const nint m_bOrientZ = 0x251; // bool
            public const nint m_bCenterOffset = 0x252; // bool
            public const nint m_vecLocalOffset = 0x258; // CPerParticleVecInput
            public const nint m_vecLocalRotation = 0x910; // CPerParticleVecInput
            public const nint m_bIgnoreRadius = 0xFC8; // bool
            public const nint m_nModelScaleCP = 0xFCC; // int32
            public const nint m_vecComponentScale = 0xFD0; // CPerParticleVecInput
            public const nint m_bLocalScale = 0x1688; // bool
            public const nint m_nSizeCullBloat = 0x168C; // int32
            public const nint m_bAnimated = 0x1690; // bool
            public const nint m_flAnimationRate = 0x1698; // CPerParticleFloatInput
            public const nint m_bScaleAnimationRate = 0x1808; // bool
            public const nint m_bForceLoopingAnimation = 0x1809; // bool
            public const nint m_bResetAnimOnStop = 0x180A; // bool
            public const nint m_bManualAnimFrame = 0x180B; // bool
            public const nint m_nAnimationScaleField = 0x180C; // ParticleAttributeIndex_t
            public const nint m_nAnimationField = 0x1810; // ParticleAttributeIndex_t
            public const nint m_nManualFrameField = 0x1814; // ParticleAttributeIndex_t
            public const nint m_ActivityName = 0x1818; // char[256]
            public const nint m_SequenceName = 0x1918; // char[256]
            public const nint m_bEnableClothSimulation = 0x1A18; // bool
            public const nint m_bDisableClothGroundCollision = 0x1A19; // bool
            public const nint m_ClothEffectName = 0x1A1A; // char[64]
            public const nint m_hOverrideMaterial = 0x1A60; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bOverrideTranslucentMaterials = 0x1A68; // bool
            public const nint m_nSkin = 0x1A70; // CPerParticleFloatInput
            public const nint m_MaterialVars = 0x1BE0; // CUtlVector<MaterialVariable_t>
            public const nint m_flRenderFilter = 0x1BF8; // CPerParticleFloatInput
            public const nint m_flManualModelSelection = 0x1D68; // CPerParticleFloatInput
            public const nint m_modelInput = 0x1ED8; // CParticleModelInput
            public const nint m_nLOD = 0x1F38; // int32
            public const nint m_EconSlotName = 0x1F3C; // char[256]
            public const nint m_bOriginalModel = 0x203C; // bool
            public const nint m_bSuppressTint = 0x203D; // bool
            public const nint m_nSubModelFieldType = 0x2040; // RenderModelSubModelFieldType_t
            public const nint m_bDisableShadows = 0x2044; // bool
            public const nint m_bDisableDepthPrepass = 0x2045; // bool
            public const nint m_bAcceptsDecals = 0x2046; // bool
            public const nint m_bForceDrawInterlevedWithSiblings = 0x2047; // bool
            public const nint m_bDoNotDrawInParticlePass = 0x2048; // bool
            public const nint m_bAllowApproximateTransforms = 0x2049; // bool
            public const nint m_szRenderAttribute = 0x204A; // char[260]
            public const nint m_flRadiusScale = 0x2150; // CParticleCollectionFloatInput
            public const nint m_flAlphaScale = 0x22C0; // CParticleCollectionFloatInput
            public const nint m_flRollScale = 0x2430; // CParticleCollectionFloatInput
            public const nint m_nAlpha2Field = 0x25A0; // ParticleAttributeIndex_t
            public const nint m_vecColorScale = 0x25A8; // CParticleCollectionVecInput
            public const nint m_nColorBlendType = 0x2C60; // ParticleColorBlendType_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderClientPhysicsImpulse {
            public const nint m_flRadius = 0x228; // CPerParticleFloatInput
            public const nint m_flMagnitude = 0x398; // CPerParticleFloatInput
            public const nint m_nSimIdFilter = 0x508; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CParticleFunctionEmitter {
            public const nint m_nEmitterIndex = 0x1D8; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapNamedModelMeshGroupToScalar {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointOrientationToCPVelocity {
            public const nint m_nCPInput = 0x1E0; // int32
            public const nint m_nCPOutput = 0x1E4; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RopeSpringConstraint {
            public const nint m_flRestLength = 0x1D8; // CParticleCollectionFloatInput
            public const nint m_flMinDistance = 0x348; // CParticleCollectionFloatInput
            public const nint m_flMaxDistance = 0x4B8; // CParticleCollectionFloatInput
            public const nint m_flAdjustmentScale = 0x628; // float32
            public const nint m_flInitialRestingLength = 0x630; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_PositionWarpScalar {
            public const nint m_vecWarpMin = 0x1E0; // Vector
            public const nint m_vecWarpMax = 0x1EC; // Vector
            public const nint m_InputValue = 0x1F8; // CPerParticleFloatInput
            public const nint m_flPrevPosScale = 0x368; // float32
            public const nint m_nScaleControlPointNumber = 0x36C; // int32
            public const nint m_nControlPointNumber = 0x370; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ForceControlPointStub {
            public const nint m_ControlPoint = 0x1E0; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_VectorNoise {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecOutputMin = 0x1DC; // Vector
            public const nint m_vecOutputMax = 0x1E8; // Vector
            public const nint m_fl4NoiseScale = 0x1F4; // float32
            public const nint m_bAdditive = 0x1F8; // bool
            public const nint m_bOffset = 0x1F9; // bool
            public const nint m_flNoiseAnimationTimeScale = 0x1FC; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapParticleCountToScalar {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_nInputMin = 0x1E0; // CParticleCollectionFloatInput
            public const nint m_nInputMax = 0x350; // CParticleCollectionFloatInput
            public const nint m_flOutputMin = 0x4C0; // CParticleCollectionFloatInput
            public const nint m_flOutputMax = 0x630; // CParticleCollectionFloatInput
            public const nint m_bActiveRange = 0x7A0; // bool
            public const nint m_nSetMethod = 0x7A4; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_QuantizeFloat {
            public const nint m_InputValue = 0x1E0; // CPerParticleFloatInput
            public const nint m_nOutputField = 0x350; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RemapModelVolumetoCP {
            public const nint m_nBBoxType = 0x1E0; // BBoxVolumeType_t
            public const nint m_nInControlPointNumber = 0x1E4; // int32
            public const nint m_nOutControlPointNumber = 0x1E8; // int32
            public const nint m_nOutControlPointMaxNumber = 0x1EC; // int32
            public const nint m_nField = 0x1F0; // int32
            public const nint m_flInputMin = 0x1F4; // float32
            public const nint m_flInputMax = 0x1F8; // float32
            public const nint m_flOutputMin = 0x1FC; // float32
            public const nint m_flOutputMax = 0x200; // float32
            public const nint m_bBBoxOnly = 0x204; // bool
            public const nint m_bCubeRoot = 0x205; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetToCP {
            public const nint m_nControlPointNumber = 0x1D8; // int32
            public const nint m_vecOffset = 0x1DC; // Vector
            public const nint m_bOffsetLocal = 0x1E8; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ParticleControlPointDriver_t {
            public const nint m_iControlPoint = 0x0; // ParticleParamID_t
            public const nint m_iAttachType = 0x10; // ParticleAttachment_t
            public const nint m_attachmentName = 0x18; // CUtlString
            public const nint m_vecOffset = 0x20; // Vector
            public const nint m_angOffset = 0x2C; // QAngle
            public const nint m_entityName = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ParentVortices {
            public const nint m_flForceScale = 0x1E8; // float32
            public const nint m_vecTwistAxis = 0x1EC; // Vector
            public const nint m_bFlipBasedOnYaw = 0x1F8; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetControlPointToCPVelocity {
            public const nint m_nCPInput = 0x1E0; // int32
            public const nint m_nCPOutputVel = 0x1E4; // int32
            public const nint m_bNormalize = 0x1E8; // bool
            public const nint m_nCPOutputMag = 0x1EC; // int32
            public const nint m_nCPField = 0x1F0; // int32
            public const nint m_vecComparisonVelocity = 0x1F8; // CParticleCollectionVecInput
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ClientPhysics {
            public const nint m_strPhysicsType = 0x228; // CUtlString
            public const nint m_bStartAsleep = 0x230; // bool
            public const nint m_flPlayerWakeRadius = 0x238; // CParticleCollectionFloatInput
            public const nint m_flVehicleWakeRadius = 0x3A8; // CParticleCollectionFloatInput
            public const nint m_bUseHighQualitySimulation = 0x518; // bool
            public const nint m_nMaxParticleCount = 0x51C; // int32
            public const nint m_bRespectExclusionVolumes = 0x520; // bool
            public const nint m_bKillParticles = 0x521; // bool
            public const nint m_bDeleteSim = 0x522; // bool
            public const nint m_nControlPoint = 0x524; // int32
            public const nint m_nForcedSimId = 0x528; // int32
            public const nint m_nColorBlendType = 0x52C; // ParticleColorBlendType_t
            public const nint m_nForcedStatusEffects = 0x530; // ParticleAttrBoxFlags_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SpinYaw {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointDefinitionWithTimeValues_t {
            public const nint m_flTimeDuration = 0x14; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class RenderProjectedMaterial_t {
            public const nint m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SetFloatAttributeToVectorExpression {
            public const nint m_nExpression = 0x1E0; // VectorFloatExpressionType_t
            public const nint m_vInput1 = 0x1E8; // CPerParticleVecInput
            public const nint m_vInput2 = 0x8A0; // CPerParticleVecInput
            public const nint m_flOutputRemap = 0xF58; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x10C8; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x10CC; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_ExternalWindForce {
            public const nint m_vecSamplePosition = 0x1E8; // CPerParticleVecInput
            public const nint m_vecScale = 0x8A0; // CPerParticleVecInput
            public const nint m_bSampleWind = 0xF58; // bool
            public const nint m_bSampleWater = 0xF59; // bool
            public const nint m_bDampenNearWaterPlane = 0xF5A; // bool
            public const nint m_bSampleGravity = 0xF5B; // bool
            public const nint m_vecGravityForce = 0xF60; // CPerParticleVecInput
            public const nint m_bUseBasicMovementGravity = 0x1618; // bool
            public const nint m_flLocalGravityScale = 0x1620; // CPerParticleFloatInput
            public const nint m_flLocalBuoyancyScale = 0x1790; // CPerParticleFloatInput
            public const nint m_vecBuoyancyForce = 0x1900; // CPerParticleVecInput
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_ModelCull {
            public const nint m_nControlPointNumber = 0x1E0; // int32
            public const nint m_bBoundBox = 0x1E4; // bool
            public const nint m_bCullOutside = 0x1E5; // bool
            public const nint m_bUseBones = 0x1E6; // bool
            public const nint m_HitboxSetName = 0x1E7; // char[128]
        }
        // Parent: None
        // Field count: 30
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderSprites {
            public const nint m_nSequenceOverride = 0x2DF0; // CParticleCollectionRendererFloatInput
            public const nint m_bSequenceNumbersAreRawSequenceIndices = 0x2F60; // bool
            public const nint m_nOrientationType = 0x2F64; // ParticleOrientationChoiceList_t
            public const nint m_nOrientationControlPoint = 0x2F68; // int32
            public const nint m_bUseYawWithNormalAligned = 0x2F6C; // bool
            public const nint m_flMinSize = 0x2F70; // CParticleCollectionRendererFloatInput
            public const nint m_flMaxSize = 0x30E0; // CParticleCollectionRendererFloatInput
            public const nint m_flAlphaAdjustWithSizeAdjust = 0x3250; // CParticleCollectionRendererFloatInput
            public const nint m_flStartFadeSize = 0x33C0; // CParticleCollectionRendererFloatInput
            public const nint m_flEndFadeSize = 0x3530; // CParticleCollectionRendererFloatInput
            public const nint m_flStartFadeDot = 0x36A0; // float32
            public const nint m_flEndFadeDot = 0x36A4; // float32
            public const nint m_bDistanceAlpha = 0x36A8; // bool
            public const nint m_bSoftEdges = 0x36A9; // bool
            public const nint m_flEdgeSoftnessStart = 0x36AC; // float32
            public const nint m_flEdgeSoftnessEnd = 0x36B0; // float32
            public const nint m_bOutline = 0x36B4; // bool
            public const nint m_OutlineColor = 0x36B5; // Color
            public const nint m_nOutlineAlpha = 0x36BC; // int32
            public const nint m_flOutlineStart0 = 0x36C0; // float32
            public const nint m_flOutlineStart1 = 0x36C4; // float32
            public const nint m_flOutlineEnd0 = 0x36C8; // float32
            public const nint m_flOutlineEnd1 = 0x36CC; // float32
            public const nint m_nLightingMode = 0x36D0; // ParticleLightingQuality_t
            public const nint m_vecLightingOverride = 0x36D8; // CParticleCollectionRendererVecInput
            public const nint m_flLightingTessellation = 0x3D90; // CParticleCollectionRendererFloatInput
            public const nint m_flLightingDirectionality = 0x3F00; // CParticleCollectionRendererFloatInput
            public const nint m_bParticleShadows = 0x4070; // bool
            public const nint m_flShadowDensity = 0x4074; // float32
            public const nint m_replicationParameters = 0x4078; // CReplicationParameters
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_PercentageBetweenTransformLerpCPs {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flInputMin = 0x1DC; // float32
            public const nint m_flInputMax = 0x1E0; // float32
            public const nint m_TransformStart = 0x1E8; // CParticleTransformInput
            public const nint m_TransformEnd = 0x250; // CParticleTransformInput
            public const nint m_nOutputStartCP = 0x2B8; // int32
            public const nint m_nOutputStartField = 0x2BC; // int32
            public const nint m_nOutputEndCP = 0x2C0; // int32
            public const nint m_nOutputEndField = 0x2C4; // int32
            public const nint m_nSetMethod = 0x2C8; // ParticleSetMethod_t
            public const nint m_bActiveRange = 0x2CC; // bool
            public const nint m_bRadialCheck = 0x2CD; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetPerChildControlPoint {
            public const nint m_nChildGroupID = 0x1D8; // int32
            public const nint m_nFirstControlPoint = 0x1DC; // int32
            public const nint m_nNumControlPoints = 0x1E0; // int32
            public const nint m_nParticleIncrement = 0x1E8; // CParticleCollectionFloatInput
            public const nint m_nFirstSourcePoint = 0x358; // CParticleCollectionFloatInput
            public const nint m_bSetOrientation = 0x4C8; // bool
            public const nint m_nOrientationField = 0x4CC; // ParticleAttributeIndex_t
            public const nint m_bNumBasedOnParticleCount = 0x4D0; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderTreeShake {
            public const nint m_flPeakStrength = 0x228; // float32
            public const nint m_nPeakStrengthFieldOverride = 0x22C; // ParticleAttributeIndex_t
            public const nint m_flRadius = 0x230; // float32
            public const nint m_nRadiusFieldOverride = 0x234; // ParticleAttributeIndex_t
            public const nint m_flShakeDuration = 0x238; // float32
            public const nint m_flTransitionTime = 0x23C; // float32
            public const nint m_flTwistAmount = 0x240; // float32
            public const nint m_flRadialAmount = 0x244; // float32
            public const nint m_flControlPointOrientationAmount = 0x248; // float32
            public const nint m_nControlPointForLinearDirection = 0x24C; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_WorldCollideConstraint {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_SetAttributeToScalarExpression {
            public const nint m_nExpression = 0x1D8; // ScalarExpressionType_t
            public const nint m_flInput1 = 0x1E0; // CPerParticleFloatInput
            public const nint m_flInput2 = 0x350; // CPerParticleFloatInput
            public const nint m_flOutputRemap = 0x4C0; // CParticleRemapFloatInput
            public const nint m_nOutputField = 0x630; // ParticleAttributeIndex_t
            public const nint m_nSetMethod = 0x634; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CycleScalar {
            public const nint m_nDestField = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flStartValue = 0x1DC; // float32
            public const nint m_flEndValue = 0x1E0; // float32
            public const nint m_flCycleTime = 0x1E4; // float32
            public const nint m_bDoNotRepeatCycle = 0x1E8; // bool
            public const nint m_bSynchronizeParticles = 0x1E9; // bool
            public const nint m_nCPScale = 0x1EC; // int32
            public const nint m_nCPFieldMin = 0x1F0; // int32
            public const nint m_nCPFieldMax = 0x1F4; // int32
            public const nint m_nSetMethod = 0x1F8; // ParticleSetMethod_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RenderMaterialProxy {
            public const nint m_nMaterialControlPoint = 0x228; // int32
            public const nint m_nProxyType = 0x22C; // MaterialProxyType_t
            public const nint m_MaterialVars = 0x230; // CUtlVector<MaterialVariable_t>
            public const nint m_hOverrideMaterial = 0x248; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flMaterialOverrideEnabled = 0x250; // CParticleCollectionFloatInput
            public const nint m_vecColorScale = 0x3C0; // CParticleCollectionVecInput
            public const nint m_flAlpha = 0xA78; // CPerParticleFloatInput
            public const nint m_nColorBlendType = 0xBE8; // ParticleColorBlendType_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class FloatInputMaterialVariable_t {
            public const nint m_strVariable = 0x0; // CUtlString
            public const nint m_flInput = 0x8; // CParticleCollectionFloatInput
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RampScalarLinear {
            public const nint m_RateMin = 0x1D8; // float32
            public const nint m_RateMax = 0x1DC; // float32
            public const nint m_flStartTime_min = 0x1E0; // float32
            public const nint m_flStartTime_max = 0x1E4; // float32
            public const nint m_flEndTime_min = 0x1E8; // float32
            public const nint m_flEndTime_max = 0x1EC; // float32
            public const nint m_nField = 0x210; // ParticleAttributeIndex_t
            public const nint m_bProportionalOp = 0x214; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_RotateVector {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_vecRotAxisMin = 0x1DC; // Vector
            public const nint m_vecRotAxisMax = 0x1E8; // Vector
            public const nint m_flRotRateMin = 0x1F4; // float32
            public const nint m_flRotRateMax = 0x1F8; // float32
            public const nint m_bNormalize = 0x1FC; // bool
            public const nint m_flScale = 0x200; // CPerParticleFloatInput
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_InitVecCollection {
            public const nint m_InputValue = 0x1E0; // CParticleCollectionVecInput
            public const nint m_nOutputField = 0x898; // ParticleAttributeIndex_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_INIT_SequenceFromCP {
            public const nint m_bKillUnused = 0x1E0; // bool
            public const nint m_bRadiusScale = 0x1E1; // bool
            public const nint m_nCP = 0x1E4; // int32
            public const nint m_vecOffset = 0x1E8; // Vector
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_CPOffsetToPercentageBetweenCPs {
            public const nint m_flInputMin = 0x1D8; // float32
            public const nint m_flInputMax = 0x1DC; // float32
            public const nint m_flInputBias = 0x1E0; // float32
            public const nint m_nStartCP = 0x1E4; // int32
            public const nint m_nEndCP = 0x1E8; // int32
            public const nint m_nOffsetCP = 0x1EC; // int32
            public const nint m_nOuputCP = 0x1F0; // int32
            public const nint m_nInputCP = 0x1F4; // int32
            public const nint m_bRadialCheck = 0x1F8; // bool
            public const nint m_bScaleOffset = 0x1F9; // bool
            public const nint m_vecOffset = 0x1FC; // Vector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class C_OP_LerpEndCapScalar {
            public const nint m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
            public const nint m_flOutput = 0x1DC; // float32
            public const nint m_flLerpTime = 0x1E0; // float32
        }
    }
}
