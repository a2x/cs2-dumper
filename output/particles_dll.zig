// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-22 02:40:55.168485600 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: particles.dll
        // Class count: 501
        // Enum count: 76
        pub const particles_dll = struct {
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
            // Member count: 7
            pub const Detail2Combo_t = enum(u32) {
                DETAIL_2_COMBO_UNINITIALIZED = 0xFFFFFFFF,
                DETAIL_2_COMBO_OFF = 0x0,
                DETAIL_2_COMBO_ADD = 0x1,
                DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_2_COMBO_MOD2X = 0x3,
                DETAIL_2_COMBO_MUL = 0x4,
                DETAIL_2_COMBO_CROSSFADE = 0x5
            };
            // Alignment: 4
            // Member count: 4
            pub const MissingParentInheritBehavior_t = enum(u32) {
                MISSING_PARENT_DO_NOTHING = 0xFFFFFFFF,
                MISSING_PARENT_KILL = 0x0,
                MISSING_PARENT_FIND_NEW = 0x1,
                MISSING_PARENT_SAME_INDEX = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleTraceMissBehavior_t = enum(u32) {
                PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
                PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
                PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
            };
            // Alignment: 4
            // Member count: 7
            pub const PFuncVisualizationType_t = enum(u32) {
                PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
                PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
                PFUNC_VISUALIZATION_BOX = 0x2,
                PFUNC_VISUALIZATION_RING = 0x3,
                PFUNC_VISUALIZATION_PLANE = 0x4,
                PFUNC_VISUALIZATION_LINE = 0x5,
                PFUNC_VISUALIZATION_CYLINDER = 0x6
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleVRHandChoiceList_t = enum(u32) {
                PARTICLE_VRHAND_LEFT = 0x0,
                PARTICLE_VRHAND_RIGHT = 0x1,
                PARTICLE_VRHAND_CP = 0x2,
                PARTICLE_VRHAND_CP_OBJECT = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleReplicationMode_t = enum(u32) {
                PARTICLE_REPLICATIONMODE_NONE = 0x0,
                PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleEntityPos_t = enum(u32) {
                PARTICLE_ABS_ORIGIN = 0x0,
                PARTICLE_WORLDSPACE_CENTER = 0x1,
                PARTICLE_EYES = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleFanType_t = enum(u32) {
                PARTICLE_FAN_TYPE_FAN = 0x0,
                PARTICLE_FAN_TYPE_ROTOR_WASH = 0x1,
                PARTICLE_FAN_TYPE_RADIAL = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const PetGroundType_t = enum(u32) {
                PET_GROUND_NONE = 0x0,
                PET_GROUND_GRID = 0x1,
                PET_GROUND_PLANE = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const InheritableBoolType_t = enum(u32) {
                INHERITABLE_BOOL_INHERIT = 0x0,
                INHERITABLE_BOOL_FALSE = 0x1,
                INHERITABLE_BOOL_TRUE = 0x2
            };
            // Alignment: 4
            // Member count: 6
            pub const ParticlePostProcessPriorityGroup_t = enum(u32) {
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
                PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5
            };
            // Alignment: 4
            // Member count: 7
            pub const ParticleCollisionGroup_t = enum(u32) {
                PARTICLE_COLLISION_GROUP_DEFAULT = 0x4,
                PARTICLE_COLLISION_GROUP_DEBRIS = 0x5,
                PARTICLE_COLLISION_GROUP_INTERACTIVE = 0x7,
                PARTICLE_COLLISION_GROUP_PLAYER = 0x8,
                PARTICLE_COLLISION_GROUP_VEHICLE = 0xA,
                PARTICLE_COLLISION_GROUP_NPC = 0xC,
                PARTICLE_COLLISION_GROUP_PROPS = 0x18
            };
            // Alignment: 4
            // Member count: 4
            pub const DetailCombo_t = enum(u32) {
                DETAIL_COMBO_OFF = 0x0,
                DETAIL_COMBO_ADD = 0x1,
                DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_COMBO_MOD2X = 0x3
            };
            // Alignment: 4
            // Member count: 12
            pub const ScalarExpressionType_t = enum(u32) {
                SCALAR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFF,
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
            };
            // Alignment: 4
            // Member count: 14
            pub const SpriteCardPerParticleScale_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 2
            pub const BlurFilterType_t = enum(u32) {
                BLURFILTER_GAUSSIAN = 0x0,
                BLURFILTER_BOX = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const StandardLightingAttenuationStyle_t = enum(u32) {
                LIGHT_STYLE_OLD = 0x0,
                LIGHT_STYLE_NEW = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleParentSetMode_t = enum(u32) {
                PARTICLE_SET_PARENT_NO = 0x0,
                PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
                PARTICLE_SET_PARENT_ROOT = 0x2
            };
            // Alignment: 4
            // Member count: 6
            pub const ParticleLightingQuality_t = enum(u32) {
                PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
                PARTICLE_LIGHTING_PER_VERTEX = 0x1,
                PARTICLE_LIGHTING_PER_PIXEL = 0xFFFFFFFF,
                PARTICLE_LIGHTING_OVERRIDE_POSITION = 0x2,
                PARTICLE_LIGHTING_OVERRIDE_COLOR = 0x3,
                PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 0x4
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleVolumetricSmokeCreationType_t = enum(u32) {
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0x0,
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 0x1
            };
            // Alignment: 4
            // Member count: 8
            pub const SetStatisticExpressionType_t = enum(u32) {
                SET_EXPRESSION_UNINITIALIZED = 0xFFFFFFFF,
                SET_EXPRESSION_SUM = 0x0,
                SET_EXPRESSION_MEAN = 0x1,
                SET_EXPRESSION_MEDIAN = 0x2,
                SET_EXPRESSION_MODE = 0x3,
                SET_EXPRESSION_STANDARD_DEVIATION = 0x4,
                SET_EXPRESSION_MIN = 0x5,
                SET_EXPRESSION_MAX = 0x6
            };
            // Alignment: 4
            // Member count: 11
            pub const EventTypeSelection_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleMassMode_t = enum(u32) {
                PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
                PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleHitboxBiasType_t = enum(u32) {
                PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
                PARTICLE_HITBOX_BIAS_HITBOX = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const ParticleControlPointAxis_t = enum(u32) {
                PARTICLE_CP_AXIS_X = 0x0,
                PARTICLE_CP_AXIS_Y = 0x1,
                PARTICLE_CP_AXIS_Z = 0x2,
                PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
                PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
                PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
            };
            // Alignment: 4
            // Member count: 12
            pub const ParticlePinDistance_t = enum(u32) {
                PARTICLE_PIN_DISTANCE_NONE = 0xFFFFFFFF,
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
            };
            // Alignment: 4
            // Member count: 7
            pub const VectorFloatExpressionType_t = enum(u32) {
                VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xFFFFFFFF,
                VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
                VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
                VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
                VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
                VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
                VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleFogType_t = enum(u32) {
                PARTICLE_FOG_GAME_DEFAULT = 0x0,
                PARTICLE_FOG_ENABLED = 0x1,
                PARTICLE_FOG_DISABLED = 0x2
            };
            // Alignment: 4
            // Member count: 10
            pub const VectorExpressionType_t = enum(u32) {
                VECTOR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFF,
                VECTOR_EXPRESSION_ADD = 0x0,
                VECTOR_EXPRESSION_SUBTRACT = 0x1,
                VECTOR_EXPRESSION_MUL = 0x2,
                VECTOR_EXPRESSION_DIVIDE = 0x3,
                VECTOR_EXPRESSION_INPUT_1 = 0x4,
                VECTOR_EXPRESSION_MIN = 0x5,
                VECTOR_EXPRESSION_MAX = 0x6,
                VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
                VECTOR_EXPRESSION_LERP = 0x8
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleMultiSegmentInputSelection_t = enum(u32) {
                PARTICLE_MULTISEGMENT_SELECTION_FLOAT = 0x0,
                PARTICLE_MULTISEGMENT_SELECTION_STRING = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleRotationLockType_t = enum(u32) {
                PARTICLE_ROTATION_LOCK_NONE = 0x0,
                PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
                PARTICLE_ROTATION_LOCK_NORMAL = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const HitboxLerpType_t = enum(u32) {
                HITBOX_LERP_LIFETIME = 0x0,
                HITBOX_LERP_CONSTANT = 0x1
            };
            // Alignment: 4
            // Member count: 7
            pub const ParticleAttrBoxFlags_t = enum(u32) {
                PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
                PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1,
                PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 0x2,
                PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 0x4,
                PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 0x8,
                PARTICLE_ATTR_BOX_FLAGS_FROZEN = 0x10,
                PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 0x20
            };
            // Alignment: 4
            // Member count: 5
            pub const ParticleTopology_t = enum(u32) {
                PARTICLE_TOPOLOGY_POINTS = 0x0,
                PARTICLE_TOPOLOGY_LINES = 0x1,
                PARTICLE_TOPOLOGY_TRIS = 0x2,
                PARTICLE_TOPOLOGY_QUADS = 0x3,
                PARTICLE_TOPOLOGY_CUBES = 0x4
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleLightBehaviorChoiceList_t = enum(u32) {
                PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
                PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
                PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const ModelHitboxType_t = enum(u32) {
                MODEL_HITBOX_TYPE_STANDARD = 0x0,
                MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
                MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
                MODEL_HITBOX_TYPE_SNAPSHOT = 0x3
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleMultiSegmentCountSelection_t = enum(u32) {
                PARTICLE_MULTISEGMENT_SEG_COUNT_7 = 0x7,
                PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 0xE,
                PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 0x10
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleOrientationType_t = enum(u32) {
                PARTICLE_ORIENTATION_NONE = 0x0,
                PARTICLE_ORIENTATION_VELOCITY = 0x1,
                PARTICLE_ORIENTATION_NORMAL = 0x2,
                PARTICLE_ORIENTATION_ROTATION = 0x4
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleTraceSet_t = enum(u32) {
                PARTICLE_TRACE_SET_ALL = 0x0,
                PARTICLE_TRACE_SET_STATIC = 0x1,
                PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
                PARTICLE_TRACE_SET_DYNAMIC = 0x3
            };
            // Alignment: 4
            // Member count: 7
            pub const ParticleTextureLayerBlendType_t = enum(u32) {
                SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
                SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
                SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
                SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
                SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
                SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
                SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleSelection_t = enum(u32) {
                PARTICLE_SELECTION_FIRST = 0x0,
                PARTICLE_SELECTION_LAST = 0x1,
                PARTICLE_SELECTION_NUMBER = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleToolsState_t = enum(u32) {
                PARTICLE_TOOLS_STATE_ALWAYS_ON = 0xFFFFFFFF,
                PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0x0,
                PARTICLE_TOOLS_STATE_GAME_ONLY = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const SnapshotIndexType_t = enum(u32) {
                SNAPSHOT_INDEX_INCREMENT = 0x0,
                SNAPSHOT_INDEX_DIRECT = 0x1
            };
            // Alignment: 4
            // Member count: 7
            pub const ParticleOutputBlendMode_t = enum(u32) {
                PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
                PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
                PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
                PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
                PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
                PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
                PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleLightnintBranchBehavior_t = enum(u32) {
                PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
                PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const MaterialProxyType_t = enum(u32) {
                MATERIAL_PROXY_STATUS_EFFECT = 0x0,
                MATERIAL_PROXY_TINT = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleDepthFeatheringMode_t = enum(u32) {
                PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
                PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
                PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleLightUnitChoiceList_t = enum(u32) {
                PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
                PARTICLE_LIGHT_UNIT_LUMENS = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleMultiSegmentSpecialCharacter_t = enum(u32) {
                PARTICLE_MULTISEGMENT_SPECIAL_NONE = 0xFFFFFFFF,
                PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0x0,
                PARTICLE_MULTISEGMENT_SPECIAL_COLON = 0x1,
                PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleFalloffFunction_t = enum(u32) {
                PARTICLE_FALLOFF_CONSTANT = 0x0,
                PARTICLE_FALLOFF_LINEAR = 0x1,
                PARTICLE_FALLOFF_EXPONENTIAL = 0x2
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleSequenceCropOverride_t = enum(u32) {
                PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xFFFFFFFF,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleDetailLevel_t = enum(u32) {
                PARTICLEDETAIL_LOW = 0x0,
                PARTICLEDETAIL_MEDIUM = 0x1,
                PARTICLEDETAIL_HIGH = 0x2,
                PARTICLEDETAIL_ULTRA = 0x3
            };
            // Alignment: 4
            // Member count: 4
            pub const BBoxVolumeType_t = enum(u32) {
                BBOX_VOLUME = 0x0,
                BBOX_DIMENSIONS = 0x1,
                BBOX_MINS_MAXS = 0x2,
                BBOX_RADIUS = 0x3
            };
            // Alignment: 4
            // Member count: 12
            pub const SpriteCardTextureType_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleAlphaReferenceType_t = enum(u32) {
                PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
                PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
            };
            // Alignment: 4
            // Member count: 15
            pub const SpriteCardTextureChannel_t = enum(u32) {
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
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleVolumetricSmokeType_t = enum(u32) {
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0x0,
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK = 0x1,
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL = 0x2
            };
            // Alignment: 4
            // Member count: 4
            pub const RenderModelSubModelFieldType_t = enum(u32) {
                SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
                SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
                SUBMODEL_AS_MESHGROUP_MASK = 0x2,
                SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleHitboxDataSelection_t = enum(u32) {
                PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
                PARTICLE_HITBOX_COUNT = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const ParticleOrientationChoiceList_t = enum(u32) {
                PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
                PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
                PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
                PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
                PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
                PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5
            };
            // Alignment: 4
            // Member count: 5
            pub const ParticleCollisionMode_t = enum(u32) {
                COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
                COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
                COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
                COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
                COLLISION_MODE_DISABLED = 0xFFFFFFFF
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleSortingChoiceList_t = enum(u32) {
                PARTICLE_SORTING_NEAREST = 0x0,
                PARTICLE_SORTING_CREATION_TIME = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleEndcapMode_t = enum(u32) {
                PARTICLE_ENDCAP_ALWAYS_ON = 0xFFFFFFFF,
                PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
                PARTICLE_ENDCAP_ENDCAP_ON = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ClosestPointTestType_t = enum(u32) {
                PARTICLE_CLOSEST_TYPE_BOX = 0x0,
                PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
                PARTICLE_CLOSEST_TYPE_HYBRID = 0x2
            };
            // Alignment: 4
            // Member count: 6
            pub const ParticleImpulseType_t = enum(u32) {
                IMPULSE_TYPE_NONE = 0x0,
                IMPULSE_TYPE_GENERIC = 0x1,
                IMPULSE_TYPE_ROPE = 0x2,
                IMPULSE_TYPE_EXPLOSION = 0x4,
                IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
                IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleLiquidContents_t = enum(u32) {
                PARTICLE_LIQUID_NONE = 0x0,
                PARTICLE_LIQUID_OIL = 0x1,
                PARTICLE_LIQUID_WATER = 0x2
            };
            // Alignment: 4
            // Member count: 2
            pub const SpriteCardShaderType_t = enum(u32) {
                SPRITECARD_SHADER_BASE = 0x0,
                SPRITECARD_SHADER_CUSTOM = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const ParticleOmni2LightTypeChoiceList_t = enum(u32) {
                PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
            };
            // Alignment: 4
            // Member count: 3
            pub const ParticleLightFogLightingMode_t = enum(u32) {
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleLightTypeChoiceList_t = enum(u32) {
                PARTICLE_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_LIGHT_TYPE_SPOT = 0x1,
                PARTICLE_LIGHT_TYPE_FX = 0x2,
                PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
            };
            // Alignment: 4
            // Member count: 4
            pub const ParticleOrientationSetMode_t = enum(u32) {
                PARTICLE_ORIENTATION_SET_NONE = 0xFFFFFFFF,
                PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
                PARTICLE_ORIENTATION_SET_FROM_NORMAL = 0x1,
                PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x2
            };
            // Alignment: 8
            // Member count: 10
            pub const ParticleCollisionMask_t = enum(u64) {
                PARTICLE_MASK_ALL = 0xFFFFFFFFFFFFFFFF,
                PARTICLE_MASK_SOLID = 0xC3001,
                PARTICLE_MASK_WATER = 0x18000,
                PARTICLE_MASK_SOLID_WATER = 0xDB001,
                PARTICLE_MASK_SHOT = 0x1C1003,
                PARTICLE_MASK_SHOT_BRUSHONLY = 0x101001,
                PARTICLE_MASK_SHOT_HULL = 0x1C3001,
                PARTICLE_MASK_OPAQUE = 0x80,
                PARTICLE_MASK_DEFAULTPLAYERSOLID = 0xC3011,
                PARTICLE_MASK_NPCSOLID = 0xC3021
            };
            // Alignment: 4
            // Member count: 2
            pub const TextureRepetitionMode_t = enum(u32) {
                TEXTURE_REPETITION_PARTICLE = 0x0,
                TEXTURE_REPETITION_PATH = 0x1
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
            // MPropertyDescription
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
                pub const m_Always: usize = 0xC0; // CPulse_OutflowConnection
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
                pub const m_nBlackboardIndex: usize = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x70; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x78; // CPulse_ResumePoint
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
            // Field count: 0
            pub const IParticleCollection = struct {
            };
            // Parent: None
            // Field count: 1
            pub const ParticleAttributeIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapGravityToVector = struct {
                pub const m_vInput1: usize = 0x1D8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x890; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x894; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x898; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Decay = struct {
                pub const m_bRopeDecay: usize = 0x1D8; // bool
                pub const m_bForcePreserveParticleOrder: usize = 0x1D9; // bool
            };
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderDeferredLight = struct {
                pub const m_bUseAlphaTestWindow: usize = 0x228; // bool
                pub const m_bUseTexture: usize = 0x229; // bool
                pub const m_flRadiusScale: usize = 0x22C; // float32
                pub const m_flAlphaScale: usize = 0x230; // float32
                pub const m_nAlpha2Field: usize = 0x234; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x238; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8F0; // ParticleColorBlendType_t
                pub const m_flLightDistance: usize = 0x8F4; // float32
                pub const m_flStartFalloff: usize = 0x8F8; // float32
                pub const m_flDistanceFalloff: usize = 0x8FC; // float32
                pub const m_flSpotFoV: usize = 0x900; // float32
                pub const m_nAlphaTestPointField: usize = 0x904; // ParticleAttributeIndex_t
                pub const m_nAlphaTestRangeField: usize = 0x908; // ParticleAttributeIndex_t
                pub const m_nAlphaTestSharpnessField: usize = 0x90C; // ParticleAttributeIndex_t
                pub const m_hTexture: usize = 0x910; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nHSVShiftControlPoint: usize = 0x918; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapSpeedtoCP = struct {
                pub const m_nInControlPointNumber: usize = 0x1E0; // int32
                pub const m_nOutControlPointNumber: usize = 0x1E4; // int32
                pub const m_nField: usize = 0x1E8; // int32
                pub const m_flInputMin: usize = 0x1EC; // float32
                pub const m_flInputMax: usize = 0x1F0; // float32
                pub const m_flOutputMin: usize = 0x1F4; // float32
                pub const m_flOutputMax: usize = 0x1F8; // float32
                pub const m_bUseDeltaV: usize = 0x1FC; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapTransformToVelocity = struct {
                pub const m_TransformInput: usize = 0x1D8; // CParticleTransformInput
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CollisionGroupContext_t = struct {
                pub const m_nCollisionGroupNumber: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionPreEmission = struct {
                pub const m_bRunOnce: usize = 0x1D8; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_FadeOutSimple = struct {
                pub const m_flFadeOutTime: usize = 0x1D8; // float32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SpringToVectorConstraint = struct {
                pub const m_flRestLength: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flMinDistance: usize = 0x348; // CPerParticleFloatInput
                pub const m_flMaxDistance: usize = 0x4B8; // CPerParticleFloatInput
                pub const m_flRestingLength: usize = 0x628; // CPerParticleFloatInput
                pub const m_vecAnchorVector: usize = 0x798; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderRopes = struct {
                pub const m_bEnableFadingAndClamping: usize = 0x2DF0; // bool
                pub const m_flMinSize: usize = 0x2DF4; // float32
                pub const m_flMaxSize: usize = 0x2DF8; // float32
                pub const m_flStartFadeSize: usize = 0x2DFC; // float32
                pub const m_flEndFadeSize: usize = 0x2E00; // float32
                pub const m_flStartFadeDot: usize = 0x2E04; // float32
                pub const m_flEndFadeDot: usize = 0x2E08; // float32
                pub const m_flRadiusTaper: usize = 0x2E0C; // float32
                pub const m_nMinTesselation: usize = 0x2E10; // int32
                pub const m_nMaxTesselation: usize = 0x2E14; // int32
                pub const m_flTessScale: usize = 0x2E18; // float32
                pub const m_flTextureVWorldSize: usize = 0x2E20; // CParticleCollectionRendererFloatInput
                pub const m_flTextureVScrollRate: usize = 0x2F90; // CParticleCollectionRendererFloatInput
                pub const m_flTextureVOffset: usize = 0x3100; // CParticleCollectionRendererFloatInput
                pub const m_nTextureVParamsCP: usize = 0x3270; // int32
                pub const m_bClampV: usize = 0x3274; // bool
                pub const m_nScaleCP1: usize = 0x3278; // int32
                pub const m_nScaleCP2: usize = 0x327C; // int32
                pub const m_flScaleVSizeByControlPointDistance: usize = 0x3280; // float32
                pub const m_flScaleVScrollByControlPointDistance: usize = 0x3284; // float32
                pub const m_flScaleVOffsetByControlPointDistance: usize = 0x3288; // float32
                pub const m_bUseScalarForTextureCoordinate: usize = 0x328D; // bool
                pub const m_nScalarFieldForTextureCoordinate: usize = 0x3290; // ParticleAttributeIndex_t
                pub const m_flScalarAttributeTextureCoordScale: usize = 0x3294; // float32
                pub const m_bReverseOrder: usize = 0x3298; // bool
                pub const m_bClosedLoop: usize = 0x3299; // bool
                pub const m_nSplitField: usize = 0x329C; // ParticleAttributeIndex_t
                pub const m_bSortBySegmentID: usize = 0x32A0; // bool
                pub const m_nOrientationType: usize = 0x32A4; // ParticleOrientationChoiceList_t
                pub const m_nVectorFieldForOrientation: usize = 0x32A8; // ParticleAttributeIndex_t
                pub const m_bDrawAsOpaque: usize = 0x32AC; // bool
                pub const m_bGenerateNormals: usize = 0x32AD; // bool
            };
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_StatusEffectCitadel = struct {
                pub const m_flSFXColorWarpAmount: usize = 0x1E0; // float32
                pub const m_flSFXNormalAmount: usize = 0x1E4; // float32
                pub const m_flSFXMetalnessAmount: usize = 0x1E8; // float32
                pub const m_flSFXRoughnessAmount: usize = 0x1EC; // float32
                pub const m_flSFXSelfIllumAmount: usize = 0x1F0; // float32
                pub const m_flSFXSScale: usize = 0x1F4; // float32
                pub const m_flSFXSScrollX: usize = 0x1F8; // float32
                pub const m_flSFXSScrollY: usize = 0x1FC; // float32
                pub const m_flSFXSScrollZ: usize = 0x200; // float32
                pub const m_flSFXSOffsetX: usize = 0x204; // float32
                pub const m_flSFXSOffsetY: usize = 0x208; // float32
                pub const m_flSFXSOffsetZ: usize = 0x20C; // float32
                pub const m_nDetailCombo: usize = 0x210; // DetailCombo_t
                pub const m_flSFXSDetailAmount: usize = 0x214; // float32
                pub const m_flSFXSDetailScale: usize = 0x218; // float32
                pub const m_flSFXSDetailScrollX: usize = 0x21C; // float32
                pub const m_flSFXSDetailScrollY: usize = 0x220; // float32
                pub const m_flSFXSDetailScrollZ: usize = 0x224; // float32
                pub const m_flSFXSUseModelUVs: usize = 0x228; // float32
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderSound = struct {
                pub const m_flDurationScale: usize = 0x228; // float32
                pub const m_flSndLvlScale: usize = 0x22C; // float32
                pub const m_flPitchScale: usize = 0x230; // float32
                pub const m_flVolumeScale: usize = 0x234; // float32
                pub const m_nSndLvlField: usize = 0x238; // ParticleAttributeIndex_t
                pub const m_nDurationField: usize = 0x23C; // ParticleAttributeIndex_t
                pub const m_nPitchField: usize = 0x240; // ParticleAttributeIndex_t
                pub const m_nVolumeField: usize = 0x244; // ParticleAttributeIndex_t
                pub const m_nChannel: usize = 0x248; // int32
                pub const m_nCPReference: usize = 0x24C; // int32
                pub const m_pszSoundName: usize = 0x250; // char[256]
                pub const m_bSuppressStopSoundEvent: usize = 0x350; // bool
            };
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleVisibilityInputs = struct {
                pub const m_flCameraBias: usize = 0x0; // float32
                pub const m_nCPin: usize = 0x4; // int32
                pub const m_flProxyRadius: usize = 0x8; // float32
                pub const m_flInputMin: usize = 0xC; // float32
                pub const m_flInputMax: usize = 0x10; // float32
                pub const m_flInputPixelVisFade: usize = 0x14; // float32
                pub const m_flNoPixelVisibilityFallback: usize = 0x18; // float32
                pub const m_flDistanceInputMin: usize = 0x1C; // float32
                pub const m_flDistanceInputMax: usize = 0x20; // float32
                pub const m_flDotInputMin: usize = 0x24; // float32
                pub const m_flDotInputMax: usize = 0x28; // float32
                pub const m_bDotCPAngles: usize = 0x2C; // bool
                pub const m_bDotCameraAngles: usize = 0x2D; // bool
                pub const m_flAlphaScaleMin: usize = 0x30; // float32
                pub const m_flAlphaScaleMax: usize = 0x34; // float32
                pub const m_flRadiusScaleMin: usize = 0x38; // float32
                pub const m_flRadiusScaleMax: usize = 0x3C; // float32
                pub const m_flRadiusScaleFOVBase: usize = 0x40; // float32
                pub const m_bRightEye: usize = 0x44; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointsToParticle = struct {
                pub const m_nChildGroupID: usize = 0x1D8; // int32
                pub const m_nFirstControlPoint: usize = 0x1DC; // int32
                pub const m_nNumControlPoints: usize = 0x1E0; // int32
                pub const m_nFirstSourcePoint: usize = 0x1E4; // int32
                pub const m_bReverse: usize = 0x1E8; // bool
                pub const m_bSetOrientation: usize = 0x1E9; // bool
                pub const m_nOrientationMode: usize = 0x1EC; // ParticleOrientationSetMode_t
                pub const m_nSetParent: usize = 0x1F0; // ParticleParentSetMode_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapCPVelocityToVector = struct {
                pub const m_nControlPoint: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1E0; // float32
                pub const m_bNormalize: usize = 0x1E4; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PointVectorAtNextParticle = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInterpolation: usize = 0x1E0; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticlePreviewBodyGroup_t = struct {
                pub const m_bodyGroupName: usize = 0x0; // CUtlString
                pub const m_nValue: usize = 0x8; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_OscillateScalarSimple = struct {
                pub const m_Rate: usize = 0x1D8; // float32
                pub const m_Frequency: usize = 0x1DC; // float32
                pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1E4; // float32
                pub const m_flOscAdd: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_StatusEffect = struct {
                pub const m_nDetail2Combo: usize = 0x1E0; // Detail2Combo_t
                pub const m_flDetail2Rotation: usize = 0x1E4; // float32
                pub const m_flDetail2Scale: usize = 0x1E8; // float32
                pub const m_flDetail2BlendFactor: usize = 0x1EC; // float32
                pub const m_flColorWarpIntensity: usize = 0x1F0; // float32
                pub const m_flDiffuseWarpBlendToFull: usize = 0x1F4; // float32
                pub const m_flEnvMapIntensity: usize = 0x1F8; // float32
                pub const m_flAmbientScale: usize = 0x1FC; // float32
                pub const m_specularColor: usize = 0x200; // Color
                pub const m_flSpecularScale: usize = 0x204; // float32
                pub const m_flSpecularExponent: usize = 0x208; // float32
                pub const m_flSpecularExponentBlendToFull: usize = 0x20C; // float32
                pub const m_flSpecularBlendToFull: usize = 0x210; // float32
                pub const m_rimLightColor: usize = 0x214; // Color
                pub const m_flRimLightScale: usize = 0x218; // float32
                pub const m_flReflectionsTintByBaseBlendToNone: usize = 0x21C; // float32
                pub const m_flMetalnessBlendToFull: usize = 0x220; // float32
                pub const m_flSelfIllumBlendToFull: usize = 0x224; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RtEnvCull = struct {
                pub const m_vecTestDir: usize = 0x1E0; // Vector
                pub const m_vecTestNormal: usize = 0x1EC; // Vector
                pub const m_bUseVelocity: usize = 0x1F8; // bool
                pub const m_bCullOnMiss: usize = 0x1F9; // bool
                pub const m_bLifeAdjust: usize = 0x1FA; // bool
                pub const m_RtEnvName: usize = 0x1FB; // char[128]
                pub const m_nRTEnvCP: usize = 0x27C; // int32
                pub const m_nComponent: usize = 0x280; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ConstrainDistance = struct {
                pub const m_fMinDistance: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_fMaxDistance: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0x4B8; // int32
                pub const m_CenterOffset: usize = 0x4BC; // Vector
                pub const m_bGlobalCenter: usize = 0x4C8; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomVector = struct {
                pub const m_vecMin: usize = 0x1E0; // Vector
                pub const m_vecMax: usize = 0x1EC; // Vector
                pub const m_nFieldOutput: usize = 0x1F8; // ParticleAttributeIndex_t
                pub const m_randomnessParameters: usize = 0x1FC; // CRandomNumberGeneratorParameters
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitialVelocityNoise = struct {
                pub const m_vecAbsVal: usize = 0x1E0; // Vector
                pub const m_vecAbsValInv: usize = 0x1EC; // Vector
                pub const m_vecOffsetLoc: usize = 0x1F8; // CPerParticleVecInput
                pub const m_flOffset: usize = 0x8B0; // CPerParticleFloatInput
                pub const m_vecOutputMin: usize = 0xA20; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x10D8; // CPerParticleVecInput
                pub const m_flNoiseScale: usize = 0x1790; // CPerParticleFloatInput
                pub const m_flNoiseScaleLoc: usize = 0x1900; // CPerParticleFloatInput
                pub const m_TransformInput: usize = 0x1A70; // CParticleTransformInput
                pub const m_bIgnoreDt: usize = 0x1AD8; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticleChildrenInfo_t = struct {
                pub const m_ChildRef: usize = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flDelay: usize = 0x8; // float32
                pub const m_bEndCap: usize = 0xC; // bool
                pub const m_bDisableChild: usize = 0xD; // bool
                pub const m_nDetailLevel: usize = 0x10; // ParticleDetailLevel_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapScalarOnceTimed = struct {
                pub const m_bProportional: usize = 0x1D8; // bool
                pub const m_nFieldInput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E4; // float32
                pub const m_flInputMax: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
                pub const m_flRemapTime: usize = 0x1F4; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomNamedModelSequence = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PlaneCull = struct {
                pub const m_nPlaneControlPoint: usize = 0x1D8; // int32
                pub const m_vecPlaneDirection: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_bLocalSpace: usize = 0x898; // bool
                pub const m_flPlaneOffset: usize = 0x89C; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_VelocityRandom = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_fSpeedMin: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x358; // CPerParticleFloatInput
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0x4C8; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0xB80; // CPerParticleVecInput
                pub const m_bIgnoreDT: usize = 0x1238; // bool
                pub const m_randomnessParameters: usize = 0x123C; // CRandomNumberGeneratorParameters
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ModelDampenMovement = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_bBoundBox: usize = 0x1DC; // bool
                pub const m_bOutside: usize = 0x1DD; // bool
                pub const m_bUseBones: usize = 0x1DE; // bool
                pub const m_HitboxSetName: usize = 0x1DF; // char[128]
                pub const m_vecPosOffset: usize = 0x260; // CPerParticleVecInput
                pub const m_fDrag: usize = 0x918; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_TwistAroundAxis = struct {
                pub const m_fForceAmount: usize = 0x1E8; // float32
                pub const m_TwistAxis: usize = 0x1EC; // Vector
                pub const m_bLocalSpace: usize = 0x1F8; // bool
                pub const m_nControlPointNumber: usize = 0x1FC; // int32
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_TeleportBeam = struct {
                pub const m_nCPPosition: usize = 0x1D8; // int32
                pub const m_nCPVelocity: usize = 0x1DC; // int32
                pub const m_nCPMisc: usize = 0x1E0; // int32
                pub const m_nCPColor: usize = 0x1E4; // int32
                pub const m_nCPInvalidColor: usize = 0x1E8; // int32
                pub const m_nCPExtraArcData: usize = 0x1EC; // int32
                pub const m_vGravity: usize = 0x1F0; // Vector
                pub const m_flArcMaxDuration: usize = 0x1FC; // float32
                pub const m_flSegmentBreak: usize = 0x200; // float32
                pub const m_flArcSpeed: usize = 0x204; // float32
                pub const m_flAlpha: usize = 0x208; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapExternalWindToCP = struct {
                pub const m_nCP: usize = 0x1E0; // int32
                pub const m_nCPOutput: usize = 0x1E4; // int32
                pub const m_vecScale: usize = 0x1E8; // CParticleCollectionVecInput
                pub const m_bSetMagnitude: usize = 0x8A0; // bool
                pub const m_nOutVectorField: usize = 0x8A4; // int32
            };
            // Parent: None
            // Field count: 65
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBaseRendererSource2 = struct {
                pub const m_flRadiusScale: usize = 0x228; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaScale: usize = 0x398; // CParticleCollectionRendererFloatInput
                pub const m_flRollScale: usize = 0x508; // CParticleCollectionRendererFloatInput
                pub const m_nAlpha2Field: usize = 0x678; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x680; // CParticleCollectionRendererVecInput
                pub const m_nColorBlendType: usize = 0xD38; // ParticleColorBlendType_t
                pub const m_nShaderType: usize = 0xD3C; // SpriteCardShaderType_t
                pub const m_strShaderOverride: usize = 0xD40; // CUtlString
                pub const m_flCenterXOffset: usize = 0xD48; // CParticleCollectionRendererFloatInput
                pub const m_flCenterYOffset: usize = 0xEB8; // CParticleCollectionRendererFloatInput
                pub const m_flBumpStrength: usize = 0x1028; // float32
                pub const m_nCropTextureOverride: usize = 0x102C; // ParticleSequenceCropOverride_t
                pub const m_vecTexturesInput: usize = 0x1030; // CUtlLeanVector<TextureGroup_t>
                pub const m_flAnimationRate: usize = 0x1040; // float32
                pub const m_nAnimationType: usize = 0x1044; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0x1048; // bool
                pub const m_flMotionVectorScaleU: usize = 0x1050; // CParticleCollectionRendererFloatInput
                pub const m_flMotionVectorScaleV: usize = 0x11C0; // CParticleCollectionRendererFloatInput
                pub const m_flSelfIllumAmount: usize = 0x1330; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseAmount: usize = 0x14A0; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseClamp: usize = 0x1610; // CParticleCollectionRendererFloatInput
                pub const m_nLightingControlPoint: usize = 0x1780; // int32
                pub const m_nOutputBlendMode: usize = 0x1784; // ParticleOutputBlendMode_t
                pub const m_bGammaCorrectVertexColors: usize = 0x1788; // bool
                pub const m_bSaturateColorPreAlphaBlend: usize = 0x1789; // bool
                pub const m_flAddSelfAmount: usize = 0x1790; // CParticleCollectionRendererFloatInput
                pub const m_flDesaturation: usize = 0x1900; // CParticleCollectionRendererFloatInput
                pub const m_flOverbrightFactor: usize = 0x1A70; // CParticleCollectionRendererFloatInput
                pub const m_nHSVShiftControlPoint: usize = 0x1BE0; // int32
                pub const m_nFogType: usize = 0x1BE4; // ParticleFogType_t
                pub const m_flFogAmount: usize = 0x1BE8; // CParticleCollectionRendererFloatInput
                pub const m_bTintByFOW: usize = 0x1D58; // bool
                pub const m_bTintByGlobalLight: usize = 0x1D59; // bool
                pub const m_nPerParticleAlphaReference: usize = 0x1D5C; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleAlphaRefWindow: usize = 0x1D60; // SpriteCardPerParticleScale_t
                pub const m_nAlphaReferenceType: usize = 0x1D64; // ParticleAlphaReferenceType_t
                pub const m_flAlphaReferenceSoftness: usize = 0x1D68; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToZero: usize = 0x1ED8; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToOne: usize = 0x2048; // CParticleCollectionRendererFloatInput
                pub const m_bRefract: usize = 0x21B8; // bool
                pub const m_bRefractSolid: usize = 0x21B9; // bool
                pub const m_bRefract2Passes: usize = 0x21BA; // bool
                pub const m_flRefractAmount: usize = 0x21C0; // CParticleCollectionRendererFloatInput
                pub const m_nRefractBlurRadius: usize = 0x2330; // int32
                pub const m_nRefractBlurType: usize = 0x2334; // BlurFilterType_t
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x2338; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x2339; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x233A; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x233B; // bool
                pub const m_stencilTestID: usize = 0x233C; // char[128]
                pub const m_bStencilTestExclude: usize = 0x23BC; // bool
                pub const m_stencilWriteID: usize = 0x23BD; // char[128]
                pub const m_bWriteStencilOnDepthPass: usize = 0x243D; // bool
                pub const m_bWriteStencilOnDepthFail: usize = 0x243E; // bool
                pub const m_bReverseZBuffering: usize = 0x243F; // bool
                pub const m_bDisableZBuffering: usize = 0x2440; // bool
                pub const m_nFeatheringMode: usize = 0x2444; // ParticleDepthFeatheringMode_t
                pub const m_flFeatheringMinDist: usize = 0x2448; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringMaxDist: usize = 0x25B8; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringFilter: usize = 0x2728; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringDepthMapFilter: usize = 0x2898; // CParticleCollectionRendererFloatInput
                pub const m_flDepthBias: usize = 0x2A08; // CParticleCollectionRendererFloatInput
                pub const m_nSortMethod: usize = 0x2B78; // ParticleSortingChoiceList_t
                pub const m_bBlendFramesSeq0: usize = 0x2B7C; // bool
                pub const m_bMaxLuminanceBlendingSequence0: usize = 0x2B7D; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSpinUpdateBase = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_OrientTo2dDirection = struct {
                pub const m_flRotOffset: usize = 0x1D8; // float32
                pub const m_flSpinStrength: usize = 0x1DC; // float32
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDotProductToCP = struct {
                pub const m_nInputCP1: usize = 0x1E0; // int32
                pub const m_nInputCP2: usize = 0x1E4; // int32
                pub const m_nOutputCP: usize = 0x1E8; // int32
                pub const m_nOutVectorField: usize = 0x1EC; // int32
                pub const m_flInputMin: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_flInputMax: usize = 0x360; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x4D0; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x640; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapParticleCountToNamedModelElementScalar = struct {
                pub const m_hModel: usize = 0x210; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_outputMinName: usize = 0x218; // CUtlString
                pub const m_outputMaxName: usize = 0x220; // CUtlString
                pub const m_bModelFromRenderer: usize = 0x228; // bool
            };
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderTrails = struct {
                pub const m_bEnableFadingAndClamping: usize = 0x30E8; // bool
                pub const m_flStartFadeDot: usize = 0x30EC; // float32
                pub const m_flEndFadeDot: usize = 0x30F0; // float32
                pub const m_nPrevPntSource: usize = 0x30F4; // ParticleAttributeIndex_t
                pub const m_flMaxLength: usize = 0x30F8; // float32
                pub const m_flMinLength: usize = 0x30FC; // float32
                pub const m_bIgnoreDT: usize = 0x3100; // bool
                pub const m_flConstrainRadiusToLengthRatio: usize = 0x3104; // float32
                pub const m_flLengthScale: usize = 0x3108; // float32
                pub const m_flLengthFadeInTime: usize = 0x310C; // float32
                pub const m_flRadiusHeadTaper: usize = 0x3110; // CPerParticleFloatInput
                pub const m_vecHeadColorScale: usize = 0x3280; // CParticleCollectionVecInput
                pub const m_flHeadAlphaScale: usize = 0x3938; // CPerParticleFloatInput
                pub const m_flRadiusTaper: usize = 0x3AA8; // CPerParticleFloatInput
                pub const m_vecTailColorScale: usize = 0x3C18; // CParticleCollectionVecInput
                pub const m_flTailAlphaScale: usize = 0x42D0; // CPerParticleFloatInput
                pub const m_nHorizCropField: usize = 0x4440; // ParticleAttributeIndex_t
                pub const m_nVertCropField: usize = 0x4444; // ParticleAttributeIndex_t
                pub const m_flForwardShift: usize = 0x4448; // float32
                pub const m_bFlipUVBasedOnPitchYaw: usize = 0x444C; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointPositionToTimeOfDayValue = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_pszTimeOfDayParameter: usize = 0x1E4; // char[128]
                pub const m_vecDefaultValue: usize = 0x264; // Vector
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DecayMaintainCount = struct {
                pub const m_nParticlesToMaintain: usize = 0x1D8; // int32
                pub const m_flDecayDelay: usize = 0x1DC; // float32
                pub const m_nSnapshotControlPoint: usize = 0x1E0; // int32
                pub const m_strSnapshotSubset: usize = 0x1E8; // CUtlString
                pub const m_bLifespanDecay: usize = 0x1F0; // bool
                pub const m_flScale: usize = 0x1F8; // CParticleCollectionFloatInput
                pub const m_bKillNewest: usize = 0x368; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomModelSequence = struct {
                pub const m_ActivityName: usize = 0x1E0; // char[256]
                pub const m_SequenceName: usize = 0x2E0; // char[256]
                pub const m_hModel: usize = 0x3E0; // CStrongHandle<InfoForResourceTypeCModel>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ExternalGameImpulseForce = struct {
                pub const m_flForceScale: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_bRopes: usize = 0x358; // bool
                pub const m_bRopesZOnly: usize = 0x359; // bool
                pub const m_bExplosions: usize = 0x35A; // bool
                pub const m_bParticles: usize = 0x35B; // bool
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapAverageHitboxSpeedtoCP = struct {
                pub const m_nInControlPointNumber: usize = 0x1E0; // int32
                pub const m_nOutControlPointNumber: usize = 0x1E4; // int32
                pub const m_nField: usize = 0x1E8; // int32
                pub const m_nHitboxDataType: usize = 0x1EC; // ParticleHitboxDataSelection_t
                pub const m_flInputMin: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_flInputMax: usize = 0x360; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x4D0; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x640; // CParticleCollectionFloatInput
                pub const m_nHeightControlPointNumber: usize = 0x7B0; // int32
                pub const m_vecComparisonVelocity: usize = 0x7B8; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0xE70; // char[128]
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomAlpha = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_nAlphaMin: usize = 0x1E4; // int32
                pub const m_nAlphaMax: usize = 0x1E8; // int32
                pub const m_flAlphaRandExponent: usize = 0x1F4; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_NormalizeVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1DC; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_FadeInSimple = struct {
                pub const m_flFadeInTime: usize = 0x1D8; // float32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RepeatedTriggerChildGroup = struct {
                pub const m_nChildGroupID: usize = 0x1E0; // int32
                pub const m_flClusterRefireTime: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_flClusterSize: usize = 0x358; // CParticleCollectionFloatInput
                pub const m_flClusterCooldown: usize = 0x4C8; // CParticleCollectionFloatInput
                pub const m_bLimitChildCount: usize = 0x638; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapVelocityToVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1DC; // float32
                pub const m_bNormalize: usize = 0x1E0; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SetHitboxToClosest = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_nDesiredHitbox: usize = 0x1E4; // int32
                pub const m_vecHitBoxScale: usize = 0x1E8; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x8A0; // char[128]
                pub const m_bUseBones: usize = 0x920; // bool
                pub const m_bUseClosestPointOnHitbox: usize = 0x921; // bool
                pub const m_nTestType: usize = 0x924; // ClosestPointTestType_t
                pub const m_flHybridRatio: usize = 0x928; // CParticleCollectionFloatInput
                pub const m_bUpdatePosition: usize = 0xA98; // bool
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RingWave = struct {
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_flParticlesPerOrbit: usize = 0x248; // CParticleCollectionFloatInput
                pub const m_flInitialRadius: usize = 0x3B8; // CPerParticleFloatInput
                pub const m_flThickness: usize = 0x528; // CPerParticleFloatInput
                pub const m_flInitialSpeedMin: usize = 0x698; // CPerParticleFloatInput
                pub const m_flInitialSpeedMax: usize = 0x808; // CPerParticleFloatInput
                pub const m_flRoll: usize = 0x978; // CPerParticleFloatInput
                pub const m_flPitch: usize = 0xAE8; // CPerParticleFloatInput
                pub const m_flYaw: usize = 0xC58; // CPerParticleFloatInput
                pub const m_bEvenDistribution: usize = 0xDC8; // bool
                pub const m_bXYVelocityOnly: usize = 0xDC9; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomTrailLength = struct {
                pub const m_flMinLength: usize = 0x1E0; // float32
                pub const m_flMaxLength: usize = 0x1E4; // float32
                pub const m_flLengthRandExponent: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapScalar = struct {
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // float32
                pub const m_flInputMax: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
                pub const m_bOldCode: usize = 0x1F0; // bool
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DistanceBetweenTransforms = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_TransformStart: usize = 0x1E0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x248; // CParticleTransformInput
                pub const m_flInputMin: usize = 0x2B0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x420; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x590; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x700; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x870; // float32
                pub const m_flLOSScale: usize = 0x874; // float32
                pub const m_CollisionGroupName: usize = 0x878; // char[128]
                pub const m_nTraceSet: usize = 0x8F8; // ParticleTraceSet_t
                pub const m_bLOS: usize = 0x8FC; // bool
                pub const m_nSetMethod: usize = 0x900; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DecayOffscreen = struct {
                pub const m_flOffscreenTime: usize = 0x1D8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateSequentialPath = struct {
                pub const m_fMaxDistance: usize = 0x1E0; // float32
                pub const m_flNumToAssign: usize = 0x1E4; // float32
                pub const m_bLoop: usize = 0x1E8; // bool
                pub const m_bCPPairs: usize = 0x1E9; // bool
                pub const m_bSaveOffset: usize = 0x1EA; // bool
                pub const m_PathParams: usize = 0x1F0; // CPathParameters
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_EndCapTimedDecay = struct {
                pub const m_flDecayTime: usize = 0x1D8; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDistanceToLineSegmentBase = struct {
                pub const m_nCP0: usize = 0x1D8; // int32
                pub const m_nCP1: usize = 0x1DC; // int32
                pub const m_flMinInputValue: usize = 0x1E0; // float32
                pub const m_flMaxInputValue: usize = 0x1E4; // float32
                pub const m_bInfiniteLine: usize = 0x1E8; // bool
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ContinuousEmitter = struct {
                pub const m_flEmissionDuration: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_flEmitRate: usize = 0x4C0; // CParticleCollectionFloatInput
                pub const m_flEmissionScale: usize = 0x630; // float32
                pub const m_flScalePerParentParticle: usize = 0x634; // float32
                pub const m_bInitFromKilledParentParticles: usize = 0x638; // bool
                pub const m_nEventType: usize = 0x63C; // EventTypeSelection_t
                pub const m_nSnapshotControlPoint: usize = 0x640; // int32
                pub const m_strSnapshotSubset: usize = 0x648; // CUtlString
                pub const m_nLimitPerUpdate: usize = 0x650; // int32
                pub const m_bForceEmitOnFirstUpdate: usize = 0x654; // bool
                pub const m_bForceEmitOnLastUpdate: usize = 0x655; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_OscillateVectorSimple = struct {
                pub const m_Rate: usize = 0x1D8; // Vector
                pub const m_Frequency: usize = 0x1E4; // Vector
                pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1F4; // float32
                pub const m_flOscAdd: usize = 0x1F8; // float32
                pub const m_bOffset: usize = 0x1FC; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SequenceLifeTime = struct {
                pub const m_flFramerate: usize = 0x1E0; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_MoveBetweenPoints = struct {
                pub const m_flSpeedMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flSpeedMax: usize = 0x350; // CPerParticleFloatInput
                pub const m_flEndSpread: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_flStartOffset: usize = 0x630; // CPerParticleFloatInput
                pub const m_flEndOffset: usize = 0x7A0; // CPerParticleFloatInput
                pub const m_nEndControlPointNumber: usize = 0x910; // int32
                pub const m_bTrailBias: usize = 0x914; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetUserEvent = struct {
                pub const m_flInput: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flRisingEdge: usize = 0x348; // CPerParticleFloatInput
                pub const m_nRisingEventType: usize = 0x4B8; // EventTypeSelection_t
                pub const m_flFallingEdge: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_nFallingEventType: usize = 0x630; // EventTypeSelection_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_QuantizeFloat = struct {
                pub const m_InputValue: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x348; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_BasicMovement = struct {
                pub const m_Gravity: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_fDrag: usize = 0x890; // CParticleCollectionFloatInput
                pub const m_massControls: usize = 0xA00; // CParticleMassCalculationParameters
                pub const m_nMaxConstraintPasses: usize = 0xE58; // int32
                pub const m_bUseNewCode: usize = 0xE5C; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomNamedModelElement = struct {
                pub const m_hModel: usize = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1E8; // CUtlVector<CUtlString>
                pub const m_bShuffle: usize = 0x200; // bool
                pub const m_bLinear: usize = 0x201; // bool
                pub const m_bModelFromRenderer: usize = 0x202; // bool
                pub const m_nFieldOutput: usize = 0x204; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitFromParentKilled = struct {
                pub const m_nAttributeToCopy: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_nEventType: usize = 0x1E4; // EventTypeSelection_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Callback = struct {
            };
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunction = struct {
                pub const m_flOpStrength: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_nOpEndCapState: usize = 0x178; // ParticleEndcapMode_t
                pub const m_nToolsState: usize = 0x17C; // ParticleToolsState_t
                pub const m_flOpStartFadeInTime: usize = 0x180; // float32
                pub const m_flOpEndFadeInTime: usize = 0x184; // float32
                pub const m_flOpStartFadeOutTime: usize = 0x188; // float32
                pub const m_flOpEndFadeOutTime: usize = 0x18C; // float32
                pub const m_flOpFadeOscillatePeriod: usize = 0x190; // float32
                pub const m_bNormalizeToStopTime: usize = 0x194; // bool
                pub const m_flOpTimeOffsetMin: usize = 0x198; // float32
                pub const m_flOpTimeOffsetMax: usize = 0x19C; // float32
                pub const m_nOpTimeOffsetSeed: usize = 0x1A0; // int32
                pub const m_nOpTimeScaleSeed: usize = 0x1A4; // int32
                pub const m_flOpTimeScaleMin: usize = 0x1A8; // float32
                pub const m_flOpTimeScaleMax: usize = 0x1AC; // float32
                pub const m_bDisableOperator: usize = 0x1B2; // bool
                pub const m_Notes: usize = 0x1B8; // CUtlString
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_GlobalLight = struct {
                pub const m_flScale: usize = 0x1D8; // float32
                pub const m_bClampLowerRange: usize = 0x1DC; // bool
                pub const m_bClampUpperRange: usize = 0x1DD; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_OffsetVectorToVector = struct {
                pub const m_nFieldInput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1E8; // Vector
                pub const m_vecOutputMax: usize = 0x1F4; // Vector
                pub const m_randomnessParameters: usize = 0x200; // CRandomNumberGeneratorParameters
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetPerChildControlPointFromAttribute = struct {
                pub const m_nChildGroupID: usize = 0x1D8; // int32
                pub const m_nFirstControlPoint: usize = 0x1DC; // int32
                pub const m_nNumControlPoints: usize = 0x1E0; // int32
                pub const m_nParticleIncrement: usize = 0x1E4; // int32
                pub const m_nFirstSourcePoint: usize = 0x1E8; // int32
                pub const m_bNumBasedOnParticleCount: usize = 0x1EC; // bool
                pub const m_nAttributeToRead: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_nCPField: usize = 0x1F4; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetParentControlPointsToChildCP = struct {
                pub const m_nChildGroupID: usize = 0x1E0; // int32
                pub const m_nChildControlPoint: usize = 0x1E4; // int32
                pub const m_nNumControlPoints: usize = 0x1E8; // int32
                pub const m_nFirstSourcePoint: usize = 0x1EC; // int32
                pub const m_bSetOrientation: usize = 0x1F0; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_BoxConstraint = struct {
                pub const m_vecMin: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_vecMax: usize = 0x890; // CParticleCollectionVecInput
                pub const m_nCP: usize = 0xF48; // int32
                pub const m_bLocalSpace: usize = 0xF4C; // bool
                pub const m_bAccountForRadius: usize = 0xF4D; // bool
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreatePhyllotaxis = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_nScaleCP: usize = 0x1E4; // int32
                pub const m_nComponent: usize = 0x1E8; // int32
                pub const m_fRadCentCore: usize = 0x1EC; // float32
                pub const m_fRadPerPoint: usize = 0x1F0; // float32
                pub const m_fRadPerPointTo: usize = 0x1F4; // float32
                pub const m_fpointAngle: usize = 0x1F8; // float32
                pub const m_fsizeOverall: usize = 0x1FC; // float32
                pub const m_fRadBias: usize = 0x200; // float32
                pub const m_fMinRad: usize = 0x204; // float32
                pub const m_fDistBias: usize = 0x208; // float32
                pub const m_bUseLocalCoords: usize = 0x20C; // bool
                pub const m_bUseWithContEmit: usize = 0x20D; // bool
                pub const m_bUseOrigRadius: usize = 0x20E; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_AttractToControlPoint = struct {
                pub const m_vecComponentScale: usize = 0x1E8; // Vector
                pub const m_fForceAmount: usize = 0x1F8; // CPerParticleFloatInput
                pub const m_fFalloffPower: usize = 0x368; // float32
                pub const m_TransformInput: usize = 0x370; // CParticleTransformInput
                pub const m_fForceAmountMin: usize = 0x3D8; // CPerParticleFloatInput
                pub const m_bApplyMinForce: usize = 0x548; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomLifeTime = struct {
                pub const m_fLifetimeMin: usize = 0x1E0; // float32
                pub const m_fLifetimeMax: usize = 0x1E4; // float32
                pub const m_fLifetimeRandExponent: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapParticleCountToNamedModelSequenceScalar = struct {
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_VelocityRadialRandom = struct {
                pub const m_bPerParticleCenter: usize = 0x1E0; // bool
                pub const m_nControlPointNumber: usize = 0x1E4; // int32
                pub const m_vecPosition: usize = 0x1E8; // CPerParticleVecInput
                pub const m_vecFwd: usize = 0x8A0; // CPerParticleVecInput
                pub const m_fSpeedMin: usize = 0xF58; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x10C8; // CPerParticleFloatInput
                pub const m_vecLocalCoordinateSystemSpeedScale: usize = 0x1238; // Vector
                pub const m_bIgnoreDelta: usize = 0x1245; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomRadius = struct {
                pub const m_flRadiusMin: usize = 0x1E0; // float32
                pub const m_flRadiusMax: usize = 0x1E4; // float32
                pub const m_flRadiusRandExponent: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Orient2DRelToCP = struct {
                pub const m_flRotOffset: usize = 0x1D8; // float32
                pub const m_flSpinStrength: usize = 0x1DC; // float32
                pub const m_nCP: usize = 0x1E0; // int32
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const TextureControls_t = struct {
                pub const m_flFinalTextureScaleU: usize = 0x0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureScaleV: usize = 0x170; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetU: usize = 0x2E0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetV: usize = 0x450; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureUVRotation: usize = 0x5C0; // CParticleCollectionRendererFloatInput
                pub const m_flZoomScale: usize = 0x730; // CParticleCollectionRendererFloatInput
                pub const m_flDistortion: usize = 0x8A0; // CParticleCollectionRendererFloatInput
                pub const m_bRandomizeOffsets: usize = 0xA10; // bool
                pub const m_bClampUVs: usize = 0xA11; // bool
                pub const m_nPerParticleBlend: usize = 0xA14; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleScale: usize = 0xA18; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetU: usize = 0xA1C; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetV: usize = 0xA20; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleRotation: usize = 0xA24; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleZoom: usize = 0xA28; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleDistortion: usize = 0xA2C; // SpriteCardPerParticleScale_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ControlPointReference_t = struct {
                pub const m_controlPointNameString: usize = 0x0; // int32
                pub const m_vOffsetFromControlPoint: usize = 0x4; // Vector
                pub const m_bOffsetInLocalSpace: usize = 0x10; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToVectorExpression = struct {
                pub const m_nExpression: usize = 0x1E0; // VectorExpressionType_t
                pub const m_nOutputCP: usize = 0x1E4; // int32
                pub const m_vInput1: usize = 0x1E8; // CParticleCollectionVecInput
                pub const m_vInput2: usize = 0x8A0; // CParticleCollectionVecInput
                pub const m_flLerp: usize = 0xF58; // CPerParticleFloatInput
                pub const m_bNormalizedOutput: usize = 0x10C8; // bool
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LightningSnapshotGenerator = struct {
                pub const m_nCPSnapshot: usize = 0x1E0; // int32
                pub const m_nCPStartPnt: usize = 0x1E4; // int32
                pub const m_nCPEndPnt: usize = 0x1E8; // int32
                pub const m_flSegments: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_flOffset: usize = 0x360; // CParticleCollectionFloatInput
                pub const m_flOffsetDecay: usize = 0x4D0; // CParticleCollectionFloatInput
                pub const m_flRecalcRate: usize = 0x640; // CParticleCollectionFloatInput
                pub const m_flUVScale: usize = 0x7B0; // CParticleCollectionFloatInput
                pub const m_flUVOffset: usize = 0x920; // CParticleCollectionFloatInput
                pub const m_flSplitRate: usize = 0xA90; // CParticleCollectionFloatInput
                pub const m_flBranchTwist: usize = 0xC00; // CParticleCollectionFloatInput
                pub const m_nBranchBehavior: usize = 0xD70; // ParticleLightnintBranchBehavior_t
                pub const m_flRadiusStart: usize = 0xD78; // CParticleCollectionFloatInput
                pub const m_flRadiusEnd: usize = 0xEE8; // CParticleCollectionFloatInput
                pub const m_flDedicatedPool: usize = 0x1058; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelMeshGroupOnceTimed = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapQAnglesToRotation = struct {
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PositionWarp = struct {
                pub const m_vecWarpMin: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_vecWarpMax: usize = 0x898; // CParticleCollectionVecInput
                pub const m_nScaleControlPointNumber: usize = 0xF50; // int32
                pub const m_nControlPointNumber: usize = 0xF54; // int32
                pub const m_nRadiusComponent: usize = 0xF58; // int32
                pub const m_flWarpTime: usize = 0xF5C; // float32
                pub const m_flWarpStartTime: usize = 0xF60; // float32
                pub const m_flPrevPosScale: usize = 0xF64; // float32
                pub const m_bInvertWarp: usize = 0xF68; // bool
                pub const m_bUseCount: usize = 0xF69; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointFieldToScalarExpression = struct {
                pub const m_nExpression: usize = 0x1E0; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_flInput2: usize = 0x358; // CParticleCollectionFloatInput
                pub const m_flOutputRemap: usize = 0x4C8; // CParticleRemapFloatInput
                pub const m_nOutputCP: usize = 0x638; // int32
                pub const m_nOutVectorField: usize = 0x63C; // int32
                pub const m_flInterpolation: usize = 0x640; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CreateParticleSystemRenderer = struct {
                pub const m_hEffect: usize = 0x228; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nEventType: usize = 0x230; // EventTypeSelection_t
                pub const m_vecCPs: usize = 0x238; // CUtlLeanVector<CPAssignment_t>
                pub const m_szParticleConfig: usize = 0x248; // CUtlString
                pub const m_AggregationPos: usize = 0x250; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionForce = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomVectorComponent = struct {
                pub const m_flMin: usize = 0x1E0; // float32
                pub const m_flMax: usize = 0x1E4; // float32
                pub const m_nFieldOutput: usize = 0x1E8; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1EC; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub const C_OP_InheritFromParentParticles = struct {
                pub const m_flScale: usize = 0x1D8; // float32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1E0; // int32
                pub const m_bRandomDistribution: usize = 0x1E4; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SetVectorAttributeToVectorExpression = struct {
                pub const m_nExpression: usize = 0x1E0; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1E8; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x8A0; // CPerParticleVecInput
                pub const m_flLerp: usize = 0xF58; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x10C8; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x10CC; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x10D0; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapTransformVisibilityToVector = struct {
                pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x248; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x24C; // float32
                pub const m_flInputMax: usize = 0x250; // float32
                pub const m_vecOutputMin: usize = 0x254; // Vector
                pub const m_vecOutputMax: usize = 0x260; // Vector
                pub const m_flRadius: usize = 0x26C; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DirectionBetweenVecsToVec = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecPoint1: usize = 0x1E0; // CPerParticleVecInput
                pub const m_vecPoint2: usize = 0x898; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementLoopInsideSphere = struct {
                pub const m_nCP: usize = 0x1D8; // int32
                pub const m_flDistance: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_vecScale: usize = 0x350; // CParticleCollectionVecInput
                pub const m_nDistSqrAttr: usize = 0xA08; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderSimpleModelCollection = struct {
                pub const m_bCenterOffset: usize = 0x228; // bool
                pub const m_hModel: usize = 0x230; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_modelInput: usize = 0x238; // CParticleModelInput
                pub const m_fSizeCullScale: usize = 0x298; // CParticleCollectionFloatInput
                pub const m_bDisableShadows: usize = 0x408; // bool
                pub const m_bDisableMotionBlur: usize = 0x409; // bool
                pub const m_bAcceptsDecals: usize = 0x40A; // bool
                pub const m_fDrawFilter: usize = 0x410; // CPerParticleFloatInput
                pub const m_nAngularVelocityField: usize = 0x580; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_QuantizeCPComponent = struct {
                pub const m_flInputValue: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_nCPOutput: usize = 0x350; // int32
                pub const m_nOutVectorField: usize = 0x354; // int32
                pub const m_flQuantizeValue: usize = 0x358; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PlayEndCapWhenFinished = struct {
                pub const m_bFireOnEmissionEnd: usize = 0x1E0; // bool
                pub const m_bIncludeChildren: usize = 0x1E1; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitFloatCollection = struct {
                pub const m_InputValue: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x350; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPathParameters = struct {
                pub const m_nStartControlPointNumber: usize = 0x0; // int32
                pub const m_nEndControlPointNumber: usize = 0x4; // int32
                pub const m_nBulgeControl: usize = 0x8; // int32
                pub const m_flBulge: usize = 0xC; // float32
                pub const m_flMidPoint: usize = 0x10; // float32
                pub const m_vStartPointOffset: usize = 0x14; // Vector
                pub const m_vMidPointOffset: usize = 0x20; // Vector
                pub const m_vEndOffset: usize = 0x2C; // Vector
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapScalarEndCap = struct {
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // float32
                pub const m_flInputMax: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateFromPlaneCache = struct {
                pub const m_vecOffsetMin: usize = 0x1E0; // Vector
                pub const m_vecOffsetMax: usize = 0x1EC; // Vector
                pub const m_bUseNormal: usize = 0x1F9; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LazyCullCompareFloat = struct {
                pub const m_flComparsion1: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flComparsion2: usize = 0x348; // CPerParticleFloatInput
                pub const m_flCullTime: usize = 0x4B8; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ControlPointToRadialScreenSpace = struct {
                pub const m_nCPIn: usize = 0x1E0; // int32
                pub const m_vecCP1Pos: usize = 0x1E4; // Vector
                pub const m_nCPOut: usize = 0x1F0; // int32
                pub const m_nCPOutField: usize = 0x1F4; // int32
                pub const m_nCPSSPosOut: usize = 0x1F8; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SpinUpdate = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_NormalOffset = struct {
                pub const m_OffsetMin: usize = 0x1E0; // Vector
                pub const m_OffsetMax: usize = 0x1EC; // Vector
                pub const m_nControlPointNumber: usize = 0x1F8; // int32
                pub const m_bLocalCoords: usize = 0x1FC; // bool
                pub const m_bNormalize: usize = 0x1FD; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDistanceToLineSegmentToVector = struct {
                pub const m_nFieldOutput: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_vMinOutputValue: usize = 0x1F4; // Vector
                pub const m_vMaxOutputValue: usize = 0x200; // Vector
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderAsModels = struct {
                pub const m_ModelList: usize = 0x228; // CUtlVector<ModelReference_t>
                pub const m_flModelScale: usize = 0x244; // float32
                pub const m_bFitToModelSize: usize = 0x248; // bool
                pub const m_bNonUniformScaling: usize = 0x249; // bool
                pub const m_nXAxisScalingAttribute: usize = 0x24C; // ParticleAttributeIndex_t
                pub const m_nYAxisScalingAttribute: usize = 0x250; // ParticleAttributeIndex_t
                pub const m_nZAxisScalingAttribute: usize = 0x254; // ParticleAttributeIndex_t
                pub const m_nSizeCullBloat: usize = 0x258; // int32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreationNoise = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_bAbsVal: usize = 0x1E4; // bool
                pub const m_bAbsValInv: usize = 0x1E5; // bool
                pub const m_flOffset: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
                pub const m_flNoiseScale: usize = 0x1F4; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1F8; // float32
                pub const m_vecOffsetLoc: usize = 0x1FC; // Vector
                pub const m_flWorldTimeScale: usize = 0x208; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Spin = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_GameLiquidSpill = struct {
                pub const m_flLiquidContentsField: usize = 0x228; // CParticleCollectionFloatInput
                pub const m_flExpirationTime: usize = 0x398; // CParticleCollectionFloatInput
                pub const m_nAmountAttribute: usize = 0x508; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_InstantaneousEmitter = struct {
                pub const m_nParticlesToEmit: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_flInitFromKilledParentParticles: usize = 0x4C0; // float32
                pub const m_nEventType: usize = 0x4C4; // EventTypeSelection_t
                pub const m_flParentParticleScale: usize = 0x4C8; // CParticleCollectionFloatInput
                pub const m_nMaxEmittedPerFrame: usize = 0x638; // int32
                pub const m_nSnapshotControlPoint: usize = 0x63C; // int32
                pub const m_strSnapshotSubset: usize = 0x640; // CUtlString
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ConstrainLineLength = struct {
                pub const m_flMinDistance: usize = 0x1D8; // float32
                pub const m_flMaxDistance: usize = 0x1DC; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_LifespanFromVelocity = struct {
                pub const m_vecComponentScale: usize = 0x1E0; // Vector
                pub const m_flTraceOffset: usize = 0x1EC; // float32
                pub const m_flMaxTraceLength: usize = 0x1F0; // float32
                pub const m_flTraceTolerance: usize = 0x1F4; // float32
                pub const m_nMaxPlanes: usize = 0x1F8; // int32
                pub const m_CollisionGroupName: usize = 0x200; // char[128]
                pub const m_nTraceSet: usize = 0x280; // ParticleTraceSet_t
                pub const m_bIncludeWater: usize = 0x290; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBaseTrailRenderer = struct {
                pub const m_nOrientationType: usize = 0x2DF0; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x2DF4; // int32
                pub const m_flMinSize: usize = 0x2DF8; // float32
                pub const m_flMaxSize: usize = 0x2DFC; // float32
                pub const m_flStartFadeSize: usize = 0x2E00; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x2F70; // CParticleCollectionRendererFloatInput
                pub const m_bClampV: usize = 0x30E0; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_VelocityFromCP = struct {
                pub const m_velocityInput: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x898; // CParticleTransformInput
                pub const m_flVelocityScale: usize = 0x900; // float32
                pub const m_bDirectionOnly: usize = 0x904; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointOrientation = struct {
                pub const m_bUseWorldLocation: usize = 0x1E0; // bool
                pub const m_bRandomize: usize = 0x1E2; // bool
                pub const m_bSetOnce: usize = 0x1E3; // bool
                pub const m_nCP: usize = 0x1E4; // int32
                pub const m_nHeadLocation: usize = 0x1E8; // int32
                pub const m_vecRotation: usize = 0x1EC; // QAngle
                pub const m_vecRotationB: usize = 0x1F8; // QAngle
                pub const m_flInterpolation: usize = 0x208; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementSkinnedPositionFromCPSnapshot = struct {
                pub const m_nSnapshotControlPointNumber: usize = 0x1D8; // int32
                pub const m_nControlPointNumber: usize = 0x1DC; // int32
                pub const m_bRandom: usize = 0x1E0; // bool
                pub const m_nRandomSeed: usize = 0x1E4; // int32
                pub const m_bSetNormal: usize = 0x1E8; // bool
                pub const m_bSetRadius: usize = 0x1E9; // bool
                pub const m_nIndexType: usize = 0x1EC; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x1F0; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x360; // CParticleCollectionFloatInput
                pub const m_nFullLoopIncrement: usize = 0x4D0; // CParticleCollectionFloatInput
                pub const m_nSnapShotStartPoint: usize = 0x640; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x7B0; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MultiSegmentDisplaySnapshotGenerator = struct {
                pub const m_nCPSnapshot: usize = 0x1E0; // int32
                pub const m_nSegCount: usize = 0x1E4; // ParticleMultiSegmentCountSelection_t
                pub const m_nInputType: usize = 0x1E8; // ParticleMultiSegmentInputSelection_t
                pub const m_strDefaultString: usize = 0x1F0; // CUtlString
                pub const m_flValue: usize = 0x1F8; // CParticleCollectionFloatInput
                pub const m_SpecialCharList: usize = 0x368; // CUtlVector<ParticleMultiSegmentSpecialCharacter_t>
                pub const m_vecColorUnlit: usize = 0x380; // CParticleCollectionVecInput
                pub const m_vecColorLit: usize = 0xA38; // CParticleCollectionVecInput
                pub const m_flRadius: usize = 0x10F0; // CParticleCollectionFloatInput
                pub const m_flSpacing: usize = 0x1260; // CParticleCollectionFloatInput
                pub const m_flMinCount: usize = 0x13D0; // CParticleCollectionFloatInput
                pub const m_flMaxCount: usize = 0x1540; // CParticleCollectionFloatInput
                pub const m_bPrependEmpty: usize = 0x16B0; // bool
                pub const m_flDigitsAfterDecimal: usize = 0x16B8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_OscillateVector = struct {
                pub const m_RateMin: usize = 0x1D8; // Vector
                pub const m_RateMax: usize = 0x1E4; // Vector
                pub const m_FrequencyMin: usize = 0x1F0; // Vector
                pub const m_FrequencyMax: usize = 0x1FC; // Vector
                pub const m_nField: usize = 0x208; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x20C; // bool
                pub const m_bProportionalOp: usize = 0x20D; // bool
                pub const m_bOffset: usize = 0x20E; // bool
                pub const m_flStartTime_min: usize = 0x210; // float32
                pub const m_flStartTime_max: usize = 0x214; // float32
                pub const m_flEndTime_min: usize = 0x218; // float32
                pub const m_flEndTime_max: usize = 0x21C; // float32
                pub const m_flOscMult: usize = 0x220; // CPerParticleFloatInput
                pub const m_flOscAdd: usize = 0x390; // CPerParticleFloatInput
                pub const m_flRateScale: usize = 0x500; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PositionLock = struct {
                pub const m_TransformInput: usize = 0x1D8; // CParticleTransformInput
                pub const m_flStartTime_min: usize = 0x240; // float32
                pub const m_flStartTime_max: usize = 0x244; // float32
                pub const m_flStartTime_exp: usize = 0x248; // float32
                pub const m_flEndTime_min: usize = 0x24C; // float32
                pub const m_flEndTime_max: usize = 0x250; // float32
                pub const m_flEndTime_exp: usize = 0x254; // float32
                pub const m_flRange: usize = 0x258; // float32
                pub const m_flRangeBias: usize = 0x260; // CParticleCollectionFloatInput
                pub const m_flJumpThreshold: usize = 0x3D0; // float32
                pub const m_flPrevPosScale: usize = 0x3D4; // float32
                pub const m_bLockRot: usize = 0x3D8; // bool
                pub const m_vecScale: usize = 0x3E0; // CParticleCollectionVecInput
                pub const m_nFieldOutput: usize = 0xA98; // ParticleAttributeIndex_t
                pub const m_nFieldOutputPrev: usize = 0xA9C; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderVRHapticEvent = struct {
                pub const m_nHand: usize = 0x228; // ParticleVRHandChoiceList_t
                pub const m_nOutputHandCP: usize = 0x22C; // int32
                pub const m_nOutputField: usize = 0x230; // int32
                pub const m_flAmplitude: usize = 0x238; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToImpactPoint = struct {
                pub const m_nCPOut: usize = 0x1E0; // int32
                pub const m_nCPIn: usize = 0x1E4; // int32
                pub const m_flUpdateRate: usize = 0x1E8; // float32
                pub const m_flTraceLength: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_flStartOffset: usize = 0x360; // float32
                pub const m_flOffset: usize = 0x364; // float32
                pub const m_vecTraceDir: usize = 0x368; // Vector
                pub const m_CollisionGroupName: usize = 0x374; // char[128]
                pub const m_nTraceSet: usize = 0x3F4; // ParticleTraceSet_t
                pub const m_bSetToEndpoint: usize = 0x3F8; // bool
                pub const m_bTraceToClosestSurface: usize = 0x3F9; // bool
                pub const m_bIncludeWater: usize = 0x3FA; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_InterpolateRadius = struct {
                pub const m_flStartTime: usize = 0x1D8; // float32
                pub const m_flEndTime: usize = 0x1DC; // float32
                pub const m_flStartScale: usize = 0x1E0; // float32
                pub const m_flEndScale: usize = 0x1E4; // float32
                pub const m_bEaseInAndOut: usize = 0x1E8; // bool
                pub const m_flBias: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ReinitializeScalarEndCap = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_TurbulenceForce = struct {
                pub const m_flNoiseCoordScale0: usize = 0x1E8; // float32
                pub const m_flNoiseCoordScale1: usize = 0x1EC; // float32
                pub const m_flNoiseCoordScale2: usize = 0x1F0; // float32
                pub const m_flNoiseCoordScale3: usize = 0x1F4; // float32
                pub const m_vecNoiseAmount0: usize = 0x1F8; // Vector
                pub const m_vecNoiseAmount1: usize = 0x204; // Vector
                pub const m_vecNoiseAmount2: usize = 0x210; // Vector
                pub const m_vecNoiseAmount3: usize = 0x21C; // Vector
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelElementOnceTimed = struct {
                pub const m_hModel: usize = 0x1D8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_inNames: usize = 0x1E0; // CUtlVector<CUtlString>
                pub const m_outNames: usize = 0x1F8; // CUtlVector<CUtlString>
                pub const m_fallbackNames: usize = 0x210; // CUtlVector<CUtlString>
                pub const m_bModelFromRenderer: usize = 0x228; // bool
                pub const m_bProportional: usize = 0x229; // bool
                pub const m_nFieldInput: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flRemapTime: usize = 0x234; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToPlayer = struct {
                pub const m_nCP1: usize = 0x1E0; // int32
                pub const m_vecCP1Pos: usize = 0x1E4; // Vector
                pub const m_bOrientToEyes: usize = 0x1F0; // bool
                pub const m_nPosition: usize = 0x1F4; // ParticleEntityPos_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_EndCapTimedFreeze = struct {
                pub const m_flFreezeTime: usize = 0x1D8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderGpuImplicit = struct {
                pub const m_bUsePerParticleRadius: usize = 0x228; // bool
                pub const m_nVertexCountKb: usize = 0x22C; // uint32
                pub const m_nIndexCountKb: usize = 0x230; // uint32
                pub const m_fGridSize: usize = 0x238; // CParticleCollectionRendererFloatInput
                pub const m_fRadiusScale: usize = 0x3A8; // CParticleCollectionRendererFloatInput
                pub const m_fIsosurfaceThreshold: usize = 0x518; // CParticleCollectionRendererFloatInput
                pub const m_nScaleCP: usize = 0x688; // int32
                pub const m_hMaterial: usize = 0x690; // CStrongHandle<InfoForResourceTypeIMaterial2>
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetRandomControlPointPosition = struct {
                pub const m_bUseWorldLocation: usize = 0x1E0; // bool
                pub const m_bOrient: usize = 0x1E1; // bool
                pub const m_nCP1: usize = 0x1E4; // int32
                pub const m_nHeadLocation: usize = 0x1E8; // int32
                pub const m_flReRandomRate: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_vecCPMinPos: usize = 0x360; // Vector
                pub const m_vecCPMaxPos: usize = 0x36C; // Vector
                pub const m_flInterpolation: usize = 0x378; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderVolumetricEmitter = struct {
                pub const m_strChannelType: usize = 0x228; // CUtlString
                pub const m_nType: usize = 0x230; // ParticleVolumetricSmokeType_t
                pub const m_nCreationType: usize = 0x234; // ParticleVolumetricSmokeCreationType_t
                pub const m_nEventType: usize = 0x238; // EventTypeSelection_t
                pub const m_vecPos: usize = 0x240; // CPerParticleVecInput
                pub const m_vecVelocity: usize = 0x8F8; // CPerParticleVecInput
                pub const m_flRadius: usize = 0xFB0; // CPerParticleFloatInput
                pub const m_flDensity: usize = 0x1120; // CPerParticleFloatInput
                pub const m_flTemperature: usize = 0x1290; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0x1400; // CPerParticleFloatInput
                pub const m_flKillRadius: usize = 0x1570; // CPerParticleFloatInput
                pub const m_flFalloff: usize = 0x16E0; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapTransformVisibilityToScalar = struct {
                pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x248; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x24C; // float32
                pub const m_flInputMax: usize = 0x250; // float32
                pub const m_flOutputMin: usize = 0x254; // float32
                pub const m_flOutputMax: usize = 0x258; // float32
                pub const m_flRadius: usize = 0x25C; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapControlPointDirectionToVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1DC; // float32
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ScreenSpacePositionOfTarget = struct {
                pub const m_vecTargetPosition: usize = 0x1D8; // CPerParticleVecInput
                pub const m_bOututBehindness: usize = 0x890; // bool
                pub const m_nBehindFieldOutput: usize = 0x894; // ParticleAttributeIndex_t
                pub const m_flBehindOutputRemap: usize = 0x898; // CParticleRemapFloatInput
                pub const m_nBehindSetMethod: usize = 0xA08; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionOperator = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DragRelativeToPlane = struct {
                pub const m_flDragAtPlane: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flFalloff: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_bDirectional: usize = 0x4B8; // bool
                pub const m_vecPlaneNormal: usize = 0x4C0; // CParticleCollectionVecInput
                pub const m_nControlPointNumber: usize = 0xB78; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetCPtoVector = struct {
                pub const m_nCPInput: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomYaw = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SnapshotRigidSkinToBones = struct {
                pub const m_bTransformNormals: usize = 0x1D8; // bool
                pub const m_bTransformRadii: usize = 0x1D9; // bool
                pub const m_nControlPointNumber: usize = 0x1DC; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetSingleControlPointPosition = struct {
                pub const m_bSetOnce: usize = 0x1E0; // bool
                pub const m_nCP1: usize = 0x1E4; // int32
                pub const m_vecCP1Pos: usize = 0x1E8; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x8A0; // CParticleTransformInput
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_DistanceToNeighborCull = struct {
                pub const m_flDistance: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_bIncludeRadii: usize = 0x350; // bool
                pub const m_flLifespanOverlap: usize = 0x358; // CPerParticleFloatInput
                pub const m_nFieldModify: usize = 0x4C8; // ParticleAttributeIndex_t
                pub const m_flModify: usize = 0x4D0; // CPerParticleFloatInput
                pub const m_nSetMethod: usize = 0x640; // ParticleSetMethod_t
                pub const m_bUseNeighbor: usize = 0x644; // bool
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapCPtoScalar = struct {
                pub const m_nCPInput: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nField: usize = 0x1E0; // int32
                pub const m_flInputMin: usize = 0x1E4; // float32
                pub const m_flInputMax: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
                pub const m_flStartTime: usize = 0x1F4; // float32
                pub const m_flEndTime: usize = 0x1F8; // float32
                pub const m_flInterpRate: usize = 0x1FC; // float32
                pub const m_nSetMethod: usize = 0x200; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionRenderer = struct {
                pub const VisibilityInputs: usize = 0x1D8; // CParticleVisibilityInputs
                pub const m_bCannotBeRefracted: usize = 0x220; // bool
                pub const m_bSkipRenderingOnMobile: usize = 0x221; // bool
            };
            // Parent: None
            // Field count: 66
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleSystemDefinition = struct {
                pub const m_nBehaviorVersion: usize = 0x8; // int32
                pub const m_PreEmissionOperators: usize = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
                pub const m_Emitters: usize = 0x28; // CUtlVector<CParticleFunctionEmitter*>
                pub const m_Initializers: usize = 0x40; // CUtlVector<CParticleFunctionInitializer*>
                pub const m_Operators: usize = 0x58; // CUtlVector<CParticleFunctionOperator*>
                pub const m_ForceGenerators: usize = 0x70; // CUtlVector<CParticleFunctionForce*>
                pub const m_Constraints: usize = 0x88; // CUtlVector<CParticleFunctionConstraint*>
                pub const m_Renderers: usize = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
                pub const m_Children: usize = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
                pub const m_nFirstMultipleOverride_BackwardCompat: usize = 0x178; // int32
                pub const m_nInitialParticles: usize = 0x258; // int32
                pub const m_nMaxParticles: usize = 0x25C; // int32
                pub const m_nGroupID: usize = 0x260; // int32
                pub const m_BoundingBoxMin: usize = 0x264; // Vector
                pub const m_BoundingBoxMax: usize = 0x270; // Vector
                pub const m_flDepthSortBias: usize = 0x27C; // float32
                pub const m_nSortOverridePositionCP: usize = 0x280; // int32
                pub const m_bInfiniteBounds: usize = 0x284; // bool
                pub const m_bEnableNamedValues: usize = 0x285; // bool
                pub const m_NamedValueDomain: usize = 0x288; // CUtlString
                pub const m_NamedValueLocals: usize = 0x290; // CUtlVector<ParticleNamedValueSource_t*>
                pub const m_ConstantColor: usize = 0x2A8; // Color
                pub const m_ConstantNormal: usize = 0x2AC; // Vector
                pub const m_flConstantRadius: usize = 0x2B8; // float32
                pub const m_flConstantRotation: usize = 0x2BC; // float32
                pub const m_flConstantRotationSpeed: usize = 0x2C0; // float32
                pub const m_flConstantLifespan: usize = 0x2C4; // float32
                pub const m_nConstantSequenceNumber: usize = 0x2C8; // int32
                pub const m_nConstantSequenceNumber1: usize = 0x2CC; // int32
                pub const m_nSnapshotControlPoint: usize = 0x2D0; // int32
                pub const m_hSnapshot: usize = 0x2D8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_pszCullReplacementName: usize = 0x2E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flCullRadius: usize = 0x2E8; // float32
                pub const m_flCullFillCost: usize = 0x2EC; // float32
                pub const m_nCullControlPoint: usize = 0x2F0; // int32
                pub const m_hFallback: usize = 0x2F8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nFallbackMaxCount: usize = 0x300; // int32
                pub const m_hLowViolenceDef: usize = 0x308; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_hReferenceReplacement: usize = 0x310; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flPreSimulationTime: usize = 0x318; // float32
                pub const m_flStopSimulationAfterTime: usize = 0x31C; // float32
                pub const m_flMaximumTimeStep: usize = 0x320; // float32
                pub const m_flMaximumSimTime: usize = 0x324; // float32
                pub const m_flMinimumSimTime: usize = 0x328; // float32
                pub const m_flMinimumTimeStep: usize = 0x32C; // float32
                pub const m_nMinimumFrames: usize = 0x330; // int32
                pub const m_bIsGPUParticleSystem: usize = 0x334; // bool
                pub const m_nMinCPULevel: usize = 0x338; // int32
                pub const m_nMinGPULevel: usize = 0x33C; // int32
                pub const m_flNoDrawTimeToGoToSleep: usize = 0x340; // float32
                pub const m_flMaxDrawDistance: usize = 0x344; // float32
                pub const m_flStartFadeDistance: usize = 0x348; // float32
                pub const m_flMaxCreationDistance: usize = 0x34C; // float32
                pub const m_nAggregationMinAvailableParticles: usize = 0x350; // int32
                pub const m_flAggregateRadius: usize = 0x354; // float32
                pub const m_bShouldBatch: usize = 0x358; // bool
                pub const m_bShouldHitboxesFallbackToRenderBounds: usize = 0x359; // bool
                pub const m_bShouldHitboxesFallbackToSnapshot: usize = 0x35A; // bool
                pub const m_bShouldHitboxesFallbackToCollisionHulls: usize = 0x35B; // bool
                pub const m_nViewModelEffect: usize = 0x35C; // InheritableBoolType_t
                pub const m_bScreenSpaceEffect: usize = 0x360; // bool
                pub const m_pszTargetLayerID: usize = 0x368; // CUtlSymbolLarge
                pub const m_nSkipRenderControlPoint: usize = 0x370; // int32
                pub const m_nAllowRenderControlPoint: usize = 0x374; // int32
                pub const m_bShouldSort: usize = 0x378; // bool
                pub const m_controlPointConfigurations: usize = 0x3C0; // CUtlVector<ParticleControlPointConfiguration_t>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelMeshGroupEndCap = struct {
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PercentageBetweenTransformsVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_vecOutputMin: usize = 0x1E4; // Vector
                pub const m_vecOutputMax: usize = 0x1F0; // Vector
                pub const m_TransformStart: usize = 0x200; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x268; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x2D0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2D4; // bool
                pub const m_bRadialCheck: usize = 0x2D5; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderScreenVelocityRotate = struct {
                pub const m_flRotateRateDegrees: usize = 0x228; // float32
                pub const m_flForwardDegrees: usize = 0x22C; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_UpdateLightSource = struct {
                pub const m_vColorTint: usize = 0x1D8; // Color
                pub const m_flBrightnessScale: usize = 0x1DC; // float32
                pub const m_flRadiusScale: usize = 0x1E0; // float32
                pub const m_flMinimumLightingRadius: usize = 0x1E4; // float32
                pub const m_flMaximumLightingRadius: usize = 0x1E8; // float32
                pub const m_flPositionDampingConstant: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateWithinBox = struct {
                pub const m_vecMin: usize = 0x1E0; // CPerParticleVecInput
                pub const m_vecMax: usize = 0x898; // CPerParticleVecInput
                pub const m_nControlPointNumber: usize = 0xF50; // int32
                pub const m_bLocalSpace: usize = 0xF54; // bool
                pub const m_randomnessParameters: usize = 0xF58; // CRandomNumberGeneratorParameters
                pub const m_bUseNewCode: usize = 0xF60; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ChooseRandomChildrenInGroup = struct {
                pub const m_nChildGroupID: usize = 0x1E0; // int32
                pub const m_flNumberOfChildren: usize = 0x1E8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 33
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ControlpointLight = struct {
                pub const m_flScale: usize = 0x1D8; // float32
                pub const m_nControlPoint1: usize = 0x660; // int32
                pub const m_nControlPoint2: usize = 0x664; // int32
                pub const m_nControlPoint3: usize = 0x668; // int32
                pub const m_nControlPoint4: usize = 0x66C; // int32
                pub const m_vecCPOffset1: usize = 0x670; // Vector
                pub const m_vecCPOffset2: usize = 0x67C; // Vector
                pub const m_vecCPOffset3: usize = 0x688; // Vector
                pub const m_vecCPOffset4: usize = 0x694; // Vector
                pub const m_LightFiftyDist1: usize = 0x6A0; // float32
                pub const m_LightZeroDist1: usize = 0x6A4; // float32
                pub const m_LightFiftyDist2: usize = 0x6A8; // float32
                pub const m_LightZeroDist2: usize = 0x6AC; // float32
                pub const m_LightFiftyDist3: usize = 0x6B0; // float32
                pub const m_LightZeroDist3: usize = 0x6B4; // float32
                pub const m_LightFiftyDist4: usize = 0x6B8; // float32
                pub const m_LightZeroDist4: usize = 0x6BC; // float32
                pub const m_LightColor1: usize = 0x6C0; // Color
                pub const m_LightColor2: usize = 0x6C4; // Color
                pub const m_LightColor3: usize = 0x6C8; // Color
                pub const m_LightColor4: usize = 0x6CC; // Color
                pub const m_bLightType1: usize = 0x6D0; // bool
                pub const m_bLightType2: usize = 0x6D1; // bool
                pub const m_bLightType3: usize = 0x6D2; // bool
                pub const m_bLightType4: usize = 0x6D3; // bool
                pub const m_bLightDynamic1: usize = 0x6D4; // bool
                pub const m_bLightDynamic2: usize = 0x6D5; // bool
                pub const m_bLightDynamic3: usize = 0x6D6; // bool
                pub const m_bLightDynamic4: usize = 0x6D7; // bool
                pub const m_bUseNormal: usize = 0x6D8; // bool
                pub const m_bUseHLambert: usize = 0x6D9; // bool
                pub const m_bClampLowerRange: usize = 0x6DE; // bool
                pub const m_bClampUpperRange: usize = 0x6DF; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_VectorFieldSnapshot = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_nAttributeToWrite: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1E0; // int32
                pub const m_flInterpolation: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_vecScale: usize = 0x358; // CPerParticleVecInput
                pub const m_flBoundaryDampening: usize = 0xA10; // float32
                pub const m_bSetVelocity: usize = 0xA14; // bool
                pub const m_bLockToSurface: usize = 0xA15; // bool
                pub const m_flGridSpacing: usize = 0xA18; // float32
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CylindricalDistanceToTransform = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x350; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x630; // CPerParticleFloatInput
                pub const m_TransformStart: usize = 0x7A0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x808; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x870; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x874; // bool
                pub const m_bAdditive: usize = 0x875; // bool
                pub const m_bCapsule: usize = 0x876; // bool
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PositionPlaceOnGround = struct {
                pub const m_flOffset: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x350; // CPerParticleFloatInput
                pub const m_vecTraceDir: usize = 0x4C0; // CPerParticleVecInput
                pub const m_CollisionGroupName: usize = 0xB78; // char[128]
                pub const m_nTraceSet: usize = 0xBF8; // ParticleTraceSet_t
                pub const m_nTraceMissBehavior: usize = 0xC08; // ParticleTraceMissBehavior_t
                pub const m_bIncludeWater: usize = 0xC0C; // bool
                pub const m_nAttribute: usize = 0xC10; // ParticleAttributeIndex_t
                pub const m_bSetPXYZOnly: usize = 0xC14; // bool
                pub const m_bSetNormal: usize = 0xC15; // bool
                pub const m_nGroundNormalAttribute: usize = 0xC18; // ParticleAttributeIndex_t
                pub const m_bOffsetonColOnly: usize = 0xC1C; // bool
                pub const m_flOffsetByRadiusFactor: usize = 0xC20; // float32
                pub const m_nPreserveOffsetCP: usize = 0xC24; // int32
                pub const m_nIgnoreCP: usize = 0xC28; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomScalar = struct {
                pub const m_flMin: usize = 0x1E0; // float32
                pub const m_flMax: usize = 0x1E4; // float32
                pub const m_flExponent: usize = 0x1E8; // float32
                pub const m_nFieldOutput: usize = 0x1EC; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderPostProcessing = struct {
                pub const m_flPostProcessStrength: usize = 0x228; // CPerParticleFloatInput
                pub const m_hPostTexture: usize = 0x398; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_nPriority: usize = 0x3A0; // ParticlePostProcessPriorityGroup_t
            };
            // Parent: None
            // Field count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_WorldTraceConstraint = struct {
                pub const m_nCP: usize = 0x1D8; // int32
                pub const m_vecCpOffset: usize = 0x1DC; // Vector
                pub const m_nCollisionMode: usize = 0x1E8; // ParticleCollisionMode_t
                pub const m_nCollisionModeMin: usize = 0x1EC; // ParticleCollisionMode_t
                pub const m_nTraceSet: usize = 0x1F0; // ParticleTraceSet_t
                pub const m_CollisionGroupName: usize = 0x1F4; // char[128]
                pub const m_bWorldOnly: usize = 0x274; // bool
                pub const m_bBrushOnly: usize = 0x275; // bool
                pub const m_bIncludeWater: usize = 0x276; // bool
                pub const m_nIgnoreCP: usize = 0x278; // int32
                pub const m_flCpMovementTolerance: usize = 0x27C; // float32
                pub const m_flRetestRate: usize = 0x280; // float32
                pub const m_flTraceTolerance: usize = 0x284; // float32
                pub const m_flCollisionConfirmationSpeed: usize = 0x288; // float32
                pub const m_nMaxTracesPerFrame: usize = 0x28C; // float32
                pub const m_flRadiusScale: usize = 0x290; // CPerParticleFloatInput
                pub const m_flBounceAmount: usize = 0x400; // CPerParticleFloatInput
                pub const m_flSlideAmount: usize = 0x570; // CPerParticleFloatInput
                pub const m_flRandomDirScale: usize = 0x6E0; // CPerParticleFloatInput
                pub const m_bDecayBounce: usize = 0x850; // bool
                pub const m_bKillonContact: usize = 0x851; // bool
                pub const m_flMinSpeed: usize = 0x854; // float32
                pub const m_bSetNormal: usize = 0x858; // bool
                pub const m_nStickOnCollisionField: usize = 0x85C; // ParticleAttributeIndex_t
                pub const m_flStopSpeed: usize = 0x860; // CPerParticleFloatInput
                pub const m_nEntityStickDataField: usize = 0x9D0; // ParticleAttributeIndex_t
                pub const m_nEntityStickNormalField: usize = 0x9D4; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderBlobs = struct {
                pub const m_cubeWidth: usize = 0x228; // CParticleCollectionRendererFloatInput
                pub const m_cutoffRadius: usize = 0x398; // CParticleCollectionRendererFloatInput
                pub const m_renderRadius: usize = 0x508; // CParticleCollectionRendererFloatInput
                pub const m_nVertexCountKb: usize = 0x678; // uint32
                pub const m_nIndexCountKb: usize = 0x67C; // uint32
                pub const m_nScaleCP: usize = 0x680; // int32
                pub const m_MaterialVars: usize = 0x688; // CUtlVector<MaterialVariable_t>
                pub const m_hMaterial: usize = 0x6B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_OscillateScalar = struct {
                pub const m_RateMin: usize = 0x1D8; // float32
                pub const m_RateMax: usize = 0x1DC; // float32
                pub const m_FrequencyMin: usize = 0x1E0; // float32
                pub const m_FrequencyMax: usize = 0x1E4; // float32
                pub const m_nField: usize = 0x1E8; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1EC; // bool
                pub const m_bProportionalOp: usize = 0x1ED; // bool
                pub const m_flStartTime_min: usize = 0x1F0; // float32
                pub const m_flStartTime_max: usize = 0x1F4; // float32
                pub const m_flEndTime_min: usize = 0x1F8; // float32
                pub const m_flEndTime_max: usize = 0x1FC; // float32
                pub const m_flOscMult: usize = 0x200; // float32
                pub const m_flOscAdd: usize = 0x204; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_FadeOut = struct {
                pub const m_flFadeOutTimeMin: usize = 0x1D8; // float32
                pub const m_flFadeOutTimeMax: usize = 0x1DC; // float32
                pub const m_flFadeOutTimeExp: usize = 0x1E0; // float32
                pub const m_flFadeBias: usize = 0x1E4; // float32
                pub const m_bProportional: usize = 0x220; // bool
                pub const m_bEaseInAndOut: usize = 0x221; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_WaterImpulseRenderer = struct {
                pub const m_vecPos: usize = 0x228; // CPerParticleVecInput
                pub const m_flRadius: usize = 0x8E0; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0xA50; // CPerParticleFloatInput
                pub const m_flShape: usize = 0xBC0; // CPerParticleFloatInput
                pub const m_flWindSpeed: usize = 0xD30; // CPerParticleFloatInput
                pub const m_flWobble: usize = 0xEA0; // CPerParticleFloatInput
                pub const m_bIsRadialWind: usize = 0x1010; // bool
                pub const m_nEventType: usize = 0x1014; // EventTypeSelection_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomSequence = struct {
                pub const m_nSequenceMin: usize = 0x1E0; // int32
                pub const m_nSequenceMax: usize = 0x1E4; // int32
                pub const m_bShuffle: usize = 0x1E8; // bool
                pub const m_bLinear: usize = 0x1E9; // bool
                pub const m_WeightedList: usize = 0x1F0; // CUtlVector<SequenceWeightedList_t>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RampScalarSplineSimple = struct {
                pub const m_Rate: usize = 0x1D8; // float32
                pub const m_flStartTime: usize = 0x1DC; // float32
                pub const m_flEndTime: usize = 0x1E0; // float32
                pub const m_nField: usize = 0x210; // ParticleAttributeIndex_t
                pub const m_bEaseOut: usize = 0x214; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_DistanceCull = struct {
                pub const m_nControlPoint: usize = 0x1E0; // int32
                pub const m_flDistance: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x358; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CollideWithParentParticles = struct {
                pub const m_flParentRadiusScale: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flRadiusScale: usize = 0x348; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitFromVectorFieldSnapshot = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_nLocalSpaceCP: usize = 0x1E4; // int32
                pub const m_nWeightUpdateCP: usize = 0x1E8; // int32
                pub const m_bUseVerticalVelocity: usize = 0x1EC; // bool
                pub const m_vecScale: usize = 0x1F0; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetVectorAttributeToVectorExpression = struct {
                pub const m_nExpression: usize = 0x1D8; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1E0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x898; // CPerParticleVecInput
                pub const m_flLerp: usize = 0xF50; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x10C0; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x10C4; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x10C8; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_AddVectorToVector = struct {
                pub const m_vecScale: usize = 0x1E0; // Vector
                pub const m_nFieldOutput: usize = 0x1EC; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_vOffsetMin: usize = 0x1F4; // Vector
                pub const m_vOffsetMax: usize = 0x200; // Vector
                pub const m_randomnessParameters: usize = 0x20C; // CRandomNumberGeneratorParameters
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapInitialVisibilityScalar = struct {
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E8; // float32
                pub const m_flInputMax: usize = 0x1EC; // float32
                pub const m_flOutputMin: usize = 0x1F0; // float32
                pub const m_flOutputMax: usize = 0x1F4; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapTransformOrientationToYaw = struct {
                pub const m_TransformInput: usize = 0x1D8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x240; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x244; // float32
                pub const m_flSpinStrength: usize = 0x248; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderStatusEffect = struct {
                pub const m_pTextureColorWarp: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDetail2: usize = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDiffuseWarp: usize = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureFresnelColorWarp: usize = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureFresnelWarp: usize = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureSpecularWarp: usize = 0x250; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureEnvMap: usize = 0x258; // CStrongHandle<InfoForResourceTypeCTextureBase>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RandomForce = struct {
                pub const m_MinForce: usize = 0x1E8; // Vector
                pub const m_MaxForce: usize = 0x1F4; // Vector
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapParticleCountOnScalarEndCap = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1DC; // int32
                pub const m_nInputMax: usize = 0x1E0; // int32
                pub const m_flOutputMin: usize = 0x1E4; // float32
                pub const m_flOutputMax: usize = 0x1E8; // float32
                pub const m_bBackwards: usize = 0x1EC; // bool
                pub const m_nSetMethod: usize = 0x1F0; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticlePreviewState_t = struct {
                pub const m_previewModel: usize = 0x0; // CUtlString
                pub const m_nModSpecificData: usize = 0x8; // uint32
                pub const m_groundType: usize = 0xC; // PetGroundType_t
                pub const m_sequenceName: usize = 0x10; // CUtlString
                pub const m_nFireParticleOnSequenceFrame: usize = 0x18; // int32
                pub const m_hitboxSetName: usize = 0x20; // CUtlString
                pub const m_materialGroupName: usize = 0x28; // CUtlString
                pub const m_vecBodyGroups: usize = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
                pub const m_flPlaybackSpeed: usize = 0x48; // float32
                pub const m_flParticleSimulationRate: usize = 0x4C; // float32
                pub const m_bShouldDrawHitboxes: usize = 0x50; // bool
                pub const m_bShouldDrawAttachments: usize = 0x51; // bool
                pub const m_bShouldDrawAttachmentNames: usize = 0x52; // bool
                pub const m_bShouldDrawControlPointAxes: usize = 0x53; // bool
                pub const m_bAnimationNonLooping: usize = 0x54; // bool
                pub const m_bSequenceNameIsAnimClipPath: usize = 0x55; // bool
                pub const m_vecPreviewGravity: usize = 0x58; // Vector
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LocalAccelerationForce = struct {
                pub const m_nCP: usize = 0x1E8; // int32
                pub const m_nScaleCP: usize = 0x1EC; // int32
                pub const m_vecAccel: usize = 0x1F0; // CParticleCollectionVecInput
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ModelCull = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_bBoundBox: usize = 0x1DC; // bool
                pub const m_bCullOutside: usize = 0x1DD; // bool
                pub const m_bUseBones: usize = 0x1DE; // bool
                pub const m_HitboxSetName: usize = 0x1DF; // char[128]
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetFloat = struct {
                pub const m_InputValue: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x348; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x34C; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x350; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapTransformToVector = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_vInputMin: usize = 0x1E4; // Vector
                pub const m_vInputMax: usize = 0x1F0; // Vector
                pub const m_vOutputMin: usize = 0x1FC; // Vector
                pub const m_vOutputMax: usize = 0x208; // Vector
                pub const m_TransformInput: usize = 0x218; // CParticleTransformInput
                pub const m_LocalSpaceTransform: usize = 0x280; // CParticleTransformInput
                pub const m_flStartTime: usize = 0x2E8; // float32
                pub const m_flEndTime: usize = 0x2EC; // float32
                pub const m_nSetMethod: usize = 0x2F0; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x2F4; // bool
                pub const m_bAccelerate: usize = 0x2F5; // bool
                pub const m_flRemapBias: usize = 0x2F8; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ScreenSpaceDistanceToEdge = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flMaxDistFromEdge: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x350; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x4C0; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDistanceToLineSegmentToScalar = struct {
                pub const m_nFieldOutput: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_flMinOutputValue: usize = 0x1F4; // float32
                pub const m_flMaxOutputValue: usize = 0x1F8; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapVectortoCP = struct {
                pub const m_nOutControlPointNumber: usize = 0x1D8; // int32
                pub const m_nFieldInput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nParticleNumber: usize = 0x1E0; // int32
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetFromCPSnapshot = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_strSnapshotSubset: usize = 0x1E0; // CUtlString
                pub const m_nAttributeToRead: usize = 0x1E8; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1EC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1F0; // int32
                pub const m_bRandom: usize = 0x1F4; // bool
                pub const m_bReverse: usize = 0x1F5; // bool
                pub const m_nRandomSeed: usize = 0x1F8; // int32
                pub const m_nSnapShotStartPoint: usize = 0x200; // CParticleCollectionFloatInput
                pub const m_nSnapShotIncrement: usize = 0x370; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x4E0; // CPerParticleFloatInput
                pub const m_bSubSample: usize = 0x650; // bool
                pub const m_bPrev: usize = 0x651; // bool
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DistanceBetweenCPsToCP = struct {
                pub const m_nStartCP: usize = 0x1E0; // int32
                pub const m_nEndCP: usize = 0x1E4; // int32
                pub const m_nOutputCP: usize = 0x1E8; // int32
                pub const m_nOutputCPField: usize = 0x1EC; // int32
                pub const m_bSetOnce: usize = 0x1F0; // bool
                pub const m_flInputMin: usize = 0x1F4; // float32
                pub const m_flInputMax: usize = 0x1F8; // float32
                pub const m_flOutputMin: usize = 0x1FC; // float32
                pub const m_flOutputMax: usize = 0x200; // float32
                pub const m_flMaxTraceLength: usize = 0x204; // float32
                pub const m_flLOSScale: usize = 0x208; // float32
                pub const m_bLOS: usize = 0x20C; // bool
                pub const m_CollisionGroupName: usize = 0x20D; // char[128]
                pub const m_nTraceSet: usize = 0x290; // ParticleTraceSet_t
                pub const m_nSetParent: usize = 0x294; // ParticleParentSetMode_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToHand = struct {
                pub const m_nCP1: usize = 0x1E0; // int32
                pub const m_nHand: usize = 0x1E4; // int32
                pub const m_vecCP1Pos: usize = 0x1E8; // Vector
                pub const m_bOrientToHand: usize = 0x1F4; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ConstrainDistanceToPath = struct {
                pub const m_fMinDistance: usize = 0x1D8; // float32
                pub const m_flMaxDistance0: usize = 0x1DC; // float32
                pub const m_flMaxDistanceMid: usize = 0x1E0; // float32
                pub const m_flMaxDistance1: usize = 0x1E4; // float32
                pub const m_PathParameters: usize = 0x1F0; // CPathParameters
                pub const m_flTravelTime: usize = 0x230; // float32
                pub const m_nFieldScale: usize = 0x234; // ParticleAttributeIndex_t
                pub const m_nManualTField: usize = 0x238; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DistanceCull = struct {
                pub const m_nControlPoint: usize = 0x1D8; // int32
                pub const m_vecPointOffset: usize = 0x1DC; // Vector
                pub const m_flDistance: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x358; // bool
                pub const m_nAttribute: usize = 0x35C; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateAlongPath = struct {
                pub const m_fMaxDistance: usize = 0x1E0; // float32
                pub const m_PathParams: usize = 0x1F0; // CPathParameters
                pub const m_bUseRandomCPs: usize = 0x230; // bool
                pub const m_vEndOffset: usize = 0x234; // Vector
                pub const m_bSaveOffset: usize = 0x240; // bool
            };
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_GameDecalRenderer = struct {
                pub const m_sDecalGroupName: usize = 0x228; // CGlobalSymbol
                pub const m_nEventType: usize = 0x230; // EventTypeSelection_t
                pub const m_nInteractionMask: usize = 0x238; // ParticleCollisionMask_t
                pub const m_nCollisionGroup: usize = 0x240; // ParticleCollisionGroup_t
                pub const m_vecStartPos: usize = 0x248; // CPerParticleVecInput
                pub const m_vecEndPos: usize = 0x900; // CPerParticleVecInput
                pub const m_flTraceBloat: usize = 0xFB8; // CPerParticleFloatInput
                pub const m_flDecalSize: usize = 0x1128; // CPerParticleFloatInput
                pub const m_nDecalGroupIndex: usize = 0x1298; // CPerParticleFloatInput
                pub const m_flDecalRotation: usize = 0x1408; // CPerParticleFloatInput
                pub const m_vModulationColor: usize = 0x1578; // CPerParticleVecInput
                pub const m_bUseGameDefaultDecalSize: usize = 0x1C30; // bool
                pub const m_bRandomDecalRotation: usize = 0x1C31; // bool
                pub const m_bRandomlySelectDecalInGroup: usize = 0x1C32; // bool
                pub const m_bNoDecalsOnOwner: usize = 0x1C33; // bool
                pub const m_bVisualizeTraces: usize = 0x1C34; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointsToModelParticles = struct {
                pub const m_HitboxSetName: usize = 0x1D8; // char[128]
                pub const m_AttachmentName: usize = 0x258; // char[128]
                pub const m_nFirstControlPoint: usize = 0x2D8; // int32
                pub const m_nNumControlPoints: usize = 0x2DC; // int32
                pub const m_nFirstSourcePoint: usize = 0x2E0; // int32
                pub const m_bSkin: usize = 0x2E4; // bool
                pub const m_bAttachment: usize = 0x2E5; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ColorInterpolateRandom = struct {
                pub const m_ColorFadeMin: usize = 0x1D8; // Color
                pub const m_ColorFadeMax: usize = 0x1F4; // Color
                pub const m_flFadeStartTime: usize = 0x204; // float32
                pub const m_flFadeEndTime: usize = 0x208; // float32
                pub const m_nFieldOutput: usize = 0x20C; // ParticleAttributeIndex_t
                pub const m_bEaseInOut: usize = 0x210; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapNamedModelSequenceToScalar = struct {
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderLights = struct {
                pub const m_flAnimationRate: usize = 0x230; // float32
                pub const m_nAnimationType: usize = 0x234; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0x238; // bool
                pub const m_flMinSize: usize = 0x23C; // float32
                pub const m_flMaxSize: usize = 0x240; // float32
                pub const m_flStartFadeSize: usize = 0x244; // float32
                pub const m_flEndFadeSize: usize = 0x248; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DecayClampCount = struct {
                pub const m_nCount: usize = 0x1D8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CRandomNumberGeneratorParameters = struct {
                pub const m_bDistributeEvenly: usize = 0x0; // bool
                pub const m_nSeed: usize = 0x4; // int32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_ColorLitPerParticle = struct {
                pub const m_ColorMin: usize = 0x1F8; // Color
                pub const m_ColorMax: usize = 0x1FC; // Color
                pub const m_TintMin: usize = 0x200; // Color
                pub const m_TintMax: usize = 0x204; // Color
                pub const m_flTintPerc: usize = 0x208; // float32
                pub const m_nTintBlendMode: usize = 0x20C; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x210; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderPoints = struct {
                pub const m_hMaterial: usize = 0x228; // CStrongHandle<InfoForResourceTypeIMaterial2>
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SetAttributeToScalarExpression = struct {
                pub const m_nExpression: usize = 0x1E0; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x358; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x4C8; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x638; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x63C; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateOnGrid = struct {
                pub const m_nXCount: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_nYCount: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_nZCount: usize = 0x4C0; // CParticleCollectionFloatInput
                pub const m_nXSpacing: usize = 0x630; // CParticleCollectionFloatInput
                pub const m_nYSpacing: usize = 0x7A0; // CParticleCollectionFloatInput
                pub const m_nZSpacing: usize = 0x910; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0xA80; // int32
                pub const m_bLocalSpace: usize = 0xA84; // bool
                pub const m_bCenter: usize = 0xA85; // bool
                pub const m_bHollow: usize = 0xA86; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RampCPLinearRandom = struct {
                pub const m_nOutControlPointNumber: usize = 0x1E0; // int32
                pub const m_vecRateMin: usize = 0x1E4; // Vector
                pub const m_vecRateMax: usize = 0x1F0; // Vector
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_VelocityMatchingForce = struct {
                pub const m_flDirScale: usize = 0x1D8; // float32
                pub const m_flSpdScale: usize = 0x1DC; // float32
                pub const m_flNeighborDistance: usize = 0x1E0; // float32
                pub const m_flFacingStrength: usize = 0x1E4; // float32
                pub const m_bUseAABB: usize = 0x1E8; // bool
                pub const m_nCPBroadcast: usize = 0x1EC; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomAlphaWindowThreshold = struct {
                pub const m_flMin: usize = 0x1E0; // float32
                pub const m_flMax: usize = 0x1E4; // float32
                pub const m_flExponent: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateOnModelAtHeight = struct {
                pub const m_bUseBones: usize = 0x1E0; // bool
                pub const m_bForceZ: usize = 0x1E1; // bool
                pub const m_nControlPointNumber: usize = 0x1E4; // int32
                pub const m_nHeightCP: usize = 0x1E8; // int32
                pub const m_bUseWaterHeight: usize = 0x1EC; // bool
                pub const m_flDesiredHeight: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_vecHitBoxScale: usize = 0x360; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0xA18; // CParticleCollectionVecInput
                pub const m_nBiasType: usize = 0x10D0; // ParticleHitboxBiasType_t
                pub const m_bLocalCoords: usize = 0x10D4; // bool
                pub const m_bPreferMovingBoxes: usize = 0x10D5; // bool
                pub const m_HitboxSetName: usize = 0x10D6; // char[128]
                pub const m_flHitboxVelocityScale: usize = 0x1158; // CParticleCollectionFloatInput
                pub const m_flMaxBoneVelocity: usize = 0x12C8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ModelSurfaceSnapshotGenerator = struct {
                pub const m_nCPSnapshot: usize = 0x1E0; // int32
                pub const m_modelInput: usize = 0x1E8; // CParticleModelInput
                pub const m_flRecalcRate: usize = 0x248; // CParticleCollectionFloatInput
                pub const m_flUSpacing: usize = 0x3B8; // CParticleCollectionFloatInput
                pub const m_flVSpacing: usize = 0x528; // CParticleCollectionFloatInput
                pub const m_flSurfaceOffset: usize = 0x698; // CParticleCollectionFloatInput
                pub const m_bSetNormal: usize = 0x808; // bool
                pub const m_bSetUp: usize = 0x809; // bool
                pub const m_bSetGravity: usize = 0x80A; // bool
                pub const m_bSetUV: usize = 0x80B; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RestartAfterDuration = struct {
                pub const m_flDurationMin: usize = 0x1D8; // float32
                pub const m_flDurationMax: usize = 0x1DC; // float32
                pub const m_nCP: usize = 0x1E0; // int32
                pub const m_nCPField: usize = 0x1E4; // int32
                pub const m_nChildGroupID: usize = 0x1E8; // int32
                pub const m_bOnlyChildren: usize = 0x1EC; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderClothForce = struct {
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapVisibilityScalar = struct {
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // float32
                pub const m_flInputMax: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
                pub const m_flRadiusScale: usize = 0x1F0; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateSequentialPathV2 = struct {
                pub const m_fMaxDistance: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flNumToAssign: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_bLoop: usize = 0x4C0; // bool
                pub const m_bCPPairs: usize = 0x4C1; // bool
                pub const m_bSaveOffset: usize = 0x4C2; // bool
                pub const m_PathParams: usize = 0x4D0; // CPathParameters
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const VecInputMaterialVariable_t = struct {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_vecInput: usize = 0x8; // CParticleCollectionVecInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapInitialDirectionToTransformToVector = struct {
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x248; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x24C; // float32
                pub const m_flOffsetRot: usize = 0x250; // float32
                pub const m_vecOffsetAxis: usize = 0x254; // Vector
                pub const m_bNormalize: usize = 0x260; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub const C_OP_LockToSavedSequentialPathV2 = struct {
                pub const m_flFadeStart: usize = 0x1D8; // float32
                pub const m_flFadeEnd: usize = 0x1DC; // float32
                pub const m_bCPPairs: usize = 0x1E0; // bool
                pub const m_PathParams: usize = 0x1F0; // CPathParameters
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_NormalLock = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapTransformOrientationToRotations = struct {
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x248; // Vector
                pub const m_bUseQuat: usize = 0x254; // bool
                pub const m_bWriteNormal: usize = 0x255; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Cull = struct {
                pub const m_flCullPerc: usize = 0x1D8; // float32
                pub const m_flCullStart: usize = 0x1DC; // float32
                pub const m_flCullEnd: usize = 0x1E0; // float32
                pub const m_flCullExp: usize = 0x1E4; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomYawFlip = struct {
                pub const m_flPercent: usize = 0x1E0; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const SequenceWeightedList_t = struct {
                pub const m_nSequence: usize = 0x0; // int32
                pub const m_flRelativeWeight: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ReadFromNeighboringParticle = struct {
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1E0; // int32
                pub const m_DistanceCheck: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flInterpolation: usize = 0x358; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderText = struct {
                pub const m_OutlineColor: usize = 0x228; // Color
                pub const m_DefaultText: usize = 0x230; // CUtlString
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LerpToInitialPosition = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_flInterpolation: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_nCacheField: usize = 0x350; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x358; // CParticleCollectionFloatInput
                pub const m_vecScale: usize = 0x4C8; // CParticleCollectionVecInput
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomRotation = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LerpEndCapVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1DC; // Vector
                pub const m_flLerpTime: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_VelocityDecay = struct {
                pub const m_flMinVelocity: usize = 0x1D8; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetCPOrientationToPointAtCP = struct {
                pub const m_nInputCP: usize = 0x1E0; // int32
                pub const m_nOutputCP: usize = 0x1E4; // int32
                pub const m_flInterpolation: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_b2DOrientation: usize = 0x358; // bool
                pub const m_bAvoidSingularity: usize = 0x359; // bool
                pub const m_bPointAway: usize = 0x35A; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LockToPointList = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1E0; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x1F8; // bool
                pub const m_bClosedLoop: usize = 0x1F9; // bool
                pub const m_nNumPointsAlongPath: usize = 0x1FC; // int32
            };
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementPlaceOnGround = struct {
                pub const m_flOffset: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x348; // float32
                pub const m_flTolerance: usize = 0x34C; // float32
                pub const m_vecTraceDir: usize = 0x350; // CPerParticleVecInput
                pub const m_flTraceOffset: usize = 0xA08; // float32
                pub const m_flLerpRate: usize = 0xA0C; // float32
                pub const m_CollisionGroupName: usize = 0xA10; // char[128]
                pub const m_nTraceSet: usize = 0xA90; // ParticleTraceSet_t
                pub const m_nRefCP1: usize = 0xA94; // int32
                pub const m_nRefCP2: usize = 0xA98; // int32
                pub const m_nLerpCP: usize = 0xA9C; // int32
                pub const m_nTraceMissBehavior: usize = 0xAA8; // ParticleTraceMissBehavior_t
                pub const m_bIncludeShotHull: usize = 0xAAC; // bool
                pub const m_bIncludeWater: usize = 0xAAD; // bool
                pub const m_bSetNormal: usize = 0xAB0; // bool
                pub const m_bScaleOffset: usize = 0xAB1; // bool
                pub const m_nPreserveOffsetCP: usize = 0xAB4; // int32
                pub const m_nIgnoreCP: usize = 0xAB8; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetCPOrientationToDirection = struct {
                pub const m_nInputControlPoint: usize = 0x1D8; // int32
                pub const m_nOutputControlPoint: usize = 0x1DC; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapCrossProductOfTwoVectorsToVector = struct {
                pub const m_InputVec1: usize = 0x1D8; // CPerParticleVecInput
                pub const m_InputVec2: usize = 0x890; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0xF48; // ParticleAttributeIndex_t
                pub const m_bNormalize: usize = 0xF4C; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapTransformOrientationToRotations = struct {
                pub const m_TransformInput: usize = 0x1D8; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x240; // Vector
                pub const m_bUseQuat: usize = 0x24C; // bool
                pub const m_bWriteNormal: usize = 0x24D; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomRotationSpeed = struct {
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub const C_OP_InheritFromParentParticlesV2 = struct {
                pub const m_flScale: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_nFieldOutput: usize = 0x348; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x350; // CPerParticleFloatInput
                pub const m_bSubSample: usize = 0x4C0; // bool
                pub const m_bRandomDistribution: usize = 0x4C1; // bool
                pub const m_bReverse: usize = 0x4C2; // bool
                pub const m_nMissingParentBehavior: usize = 0x4C4; // MissingParentInheritBehavior_t
                pub const m_flInterpolation: usize = 0x4C8; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomSecondSequence = struct {
                pub const m_nSequenceMin: usize = 0x1E0; // int32
                pub const m_nSequenceMax: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetFloatCollection = struct {
                pub const m_InputValue: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x348; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x34C; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x350; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PointDefinition_t = struct {
                pub const m_nControlPoint: usize = 0x0; // int32
                pub const m_bLocalCoords: usize = 0x4; // bool
                pub const m_vOffset: usize = 0x8; // Vector
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointPositionToRandomActiveCP = struct {
                pub const m_nCP1: usize = 0x1E0; // int32
                pub const m_nHeadLocationMin: usize = 0x1E4; // int32
                pub const m_nHeadLocationMax: usize = 0x1E8; // int32
                pub const m_flResetRate: usize = 0x1F0; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Diffusion = struct {
                pub const m_flRadiusScale: usize = 0x1D8; // float32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nVoxelGridResolution: usize = 0x1E0; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_AgeNoise = struct {
                pub const m_bAbsVal: usize = 0x1E0; // bool
                pub const m_bAbsValInv: usize = 0x1E1; // bool
                pub const m_flOffset: usize = 0x1E4; // float32
                pub const m_flAgeMin: usize = 0x1E8; // float32
                pub const m_flAgeMax: usize = 0x1EC; // float32
                pub const m_flNoiseScale: usize = 0x1F0; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1F4; // float32
                pub const m_vecOffsetLoc: usize = 0x1F8; // Vector
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapVectorComponentToScalar = struct {
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1E0; // int32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CGeneralRandomRotation = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flDegrees: usize = 0x1E4; // float32
                pub const m_flDegreesMin: usize = 0x1E8; // float32
                pub const m_flDegreesMax: usize = 0x1EC; // float32
                pub const m_flRotationRandExponent: usize = 0x1F0; // float32
                pub const m_bRandomlyFlipDirection: usize = 0x1F4; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DistanceBetweenVecs = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecPoint1: usize = 0x1E0; // CPerParticleVecInput
                pub const m_vecPoint2: usize = 0x898; // CPerParticleVecInput
                pub const m_flInputMin: usize = 0xF50; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x10C0; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x1230; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x13A0; // CPerParticleFloatInput
                pub const m_nSetMethod: usize = 0x1510; // ParticleSetMethod_t
                pub const m_bDeltaTime: usize = 0x1514; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DampenToCP = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_flRange: usize = 0x1DC; // float32
                pub const m_flScale: usize = 0x1E0; // float32
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CalculateVectorAttribute = struct {
                pub const m_vStartValue: usize = 0x1D8; // Vector
                pub const m_nFieldInput1: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_flInputScale1: usize = 0x1E8; // float32
                pub const m_nFieldInput2: usize = 0x1EC; // ParticleAttributeIndex_t
                pub const m_flInputScale2: usize = 0x1F0; // float32
                pub const m_nControlPointInput1: usize = 0x1F4; // ControlPointReference_t
                pub const m_flControlPointScale1: usize = 0x208; // float32
                pub const m_nControlPointInput2: usize = 0x20C; // ControlPointReference_t
                pub const m_flControlPointScale2: usize = 0x220; // float32
                pub const m_nFieldOutput: usize = 0x224; // ParticleAttributeIndex_t
                pub const m_vFinalOutputScale: usize = 0x228; // Vector
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LockToBone = struct {
                pub const m_modelInput: usize = 0x1D8; // CParticleModelInput
                pub const m_transformInput: usize = 0x238; // CParticleTransformInput
                pub const m_flLifeTimeFadeStart: usize = 0x2A0; // float32
                pub const m_flLifeTimeFadeEnd: usize = 0x2A4; // float32
                pub const m_flJumpThreshold: usize = 0x2A8; // float32
                pub const m_flPrevPosScale: usize = 0x2AC; // float32
                pub const m_HitboxSetName: usize = 0x2B0; // char[128]
                pub const m_bRigid: usize = 0x330; // bool
                pub const m_bUseBones: usize = 0x331; // bool
                pub const m_nFieldOutput: usize = 0x334; // ParticleAttributeIndex_t
                pub const m_nFieldOutputPrev: usize = 0x338; // ParticleAttributeIndex_t
                pub const m_nRotationSetType: usize = 0x33C; // ParticleRotationLockType_t
                pub const m_bRigidRotationLock: usize = 0x340; // bool
                pub const m_vecRotation: usize = 0x348; // CPerParticleVecInput
                pub const m_flRotLerp: usize = 0xA00; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelBodyPartOnceTimed = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ScreenSpaceRotateTowardTarget = struct {
                pub const m_vecTargetPosition: usize = 0x1D8; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0x890; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0xA00; // ParticleSetMethod_t
                pub const m_flScreenEdgeAlignmentDistance: usize = 0xA08; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementMaintainOffset = struct {
                pub const m_vecOffset: usize = 0x1D8; // Vector
                pub const m_nCP: usize = 0x1E4; // int32
                pub const m_bRadiusScale: usize = 0x1E8; // bool
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateWithinCapsuleTransform = struct {
                pub const m_fRadiusMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_fRadiusMax: usize = 0x350; // CPerParticleFloatInput
                pub const m_fHeight: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_TransformInput: usize = 0x630; // CParticleTransformInput
                pub const m_fSpeedMin: usize = 0x698; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x808; // CPerParticleFloatInput
                pub const m_fSpeedRandExp: usize = 0x978; // float32
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0x980; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0x1038; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0x16F0; // ParticleAttributeIndex_t
                pub const m_nFieldVelocity: usize = 0x16F4; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetVec = struct {
                pub const m_InputValue: usize = 0x1D8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x890; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x894; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x898; // CPerParticleFloatInput
                pub const m_bNormalizedOutput: usize = 0xA08; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateFromParentParticles = struct {
                pub const m_flVelocityScale: usize = 0x1E0; // float32
                pub const m_flIncrement: usize = 0x1E4; // float32
                pub const m_bRandomDistribution: usize = 0x1E8; // bool
                pub const m_nRandomSeed: usize = 0x1EC; // int32
                pub const m_bSubFrame: usize = 0x1F0; // bool
                pub const m_bSetRopeSegmentID: usize = 0x1F1; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CheckParticleForWater = struct {
                pub const m_flRadius: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_nFieldOutput: usize = 0x350; // ParticleAttributeIndex_t
                pub const m_flOutputRemap: usize = 0x358; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x4C8; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomNamedModelBodyPart = struct {
            };
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderOmni2Light = struct {
                pub const m_nLightType: usize = 0x228; // ParticleOmni2LightTypeChoiceList_t
                pub const m_nMaxAllowed: usize = 0x22C; // uint16
                pub const m_vColorBlend: usize = 0x230; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8E8; // ParticleColorBlendType_t
                pub const m_nBrightnessUnit: usize = 0x8EC; // ParticleLightUnitChoiceList_t
                pub const m_flBrightnessLumens: usize = 0x8F0; // CPerParticleFloatInput
                pub const m_flBrightnessCandelas: usize = 0xA60; // CPerParticleFloatInput
                pub const m_bCastShadows: usize = 0xBD0; // bool
                pub const m_bDynamicBounce: usize = 0xBD1; // bool
                pub const m_flBounceScale: usize = 0xBD8; // CParticleCollectionFloatInput
                pub const m_bFog: usize = 0xD48; // bool
                pub const m_flFogScale: usize = 0xD50; // CPerParticleFloatInput
                pub const m_flLuminaireRadius: usize = 0xEC0; // CPerParticleFloatInput
                pub const m_flSkirt: usize = 0x1030; // CPerParticleFloatInput
                pub const m_flRange: usize = 0x11A0; // CPerParticleFloatInput
                pub const m_flInnerConeAngle: usize = 0x1310; // CPerParticleFloatInput
                pub const m_flOuterConeAngle: usize = 0x1480; // CPerParticleFloatInput
                pub const m_hLightCookie: usize = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bSphericalCookie: usize = 0x15F8; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ConnectParentParticleToNearest = struct {
                pub const m_nFirstControlPoint: usize = 0x1D8; // int32
                pub const m_nSecondControlPoint: usize = 0x1DC; // int32
                pub const m_bUseRadius: usize = 0x1E0; // bool
                pub const m_flRadiusScale: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_flParentRadiusScale: usize = 0x358; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPAssignment_t = struct {
                pub const m_nCPNumber: usize = 0x0; // int32
                pub const m_Pos: usize = 0x8; // CPerParticleVecInput
                pub const m_nOrientationMode: usize = 0x6C0; // ParticleOrientationSetMode_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapParticleCountToNamedModelBodyPartScalar = struct {
            };
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitSkinnedPositionFromCPSnapshot = struct {
                pub const m_nSnapshotControlPointNumber: usize = 0x1E0; // int32
                pub const m_nControlPointNumber: usize = 0x1E4; // int32
                pub const m_bRandom: usize = 0x1E8; // bool
                pub const m_nRandomSeed: usize = 0x1EC; // int32
                pub const m_bRigid: usize = 0x1F0; // bool
                pub const m_bSetNormal: usize = 0x1F1; // bool
                pub const m_bIgnoreDt: usize = 0x1F2; // bool
                pub const m_flMinNormalVelocity: usize = 0x1F4; // float32
                pub const m_flMaxNormalVelocity: usize = 0x1F8; // float32
                pub const m_nIndexType: usize = 0x1FC; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x200; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x370; // float32
                pub const m_nFullLoopIncrement: usize = 0x374; // int32
                pub const m_nSnapShotStartPoint: usize = 0x378; // int32
                pub const m_flBoneVelocity: usize = 0x37C; // float32
                pub const m_flBoneVelocityMax: usize = 0x380; // float32
                pub const m_bCopyColor: usize = 0x384; // bool
                pub const m_bCopyAlpha: usize = 0x385; // bool
                pub const m_bSetRadius: usize = 0x386; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LagCompensation = struct {
                pub const m_nDesiredVelocityCP: usize = 0x1D8; // int32
                pub const m_nLatencyCP: usize = 0x1DC; // int32
                pub const m_nLatencyCPField: usize = 0x1E0; // int32
                pub const m_nDesiredVelocityCPField: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CollideWithSelf = struct {
                pub const m_flRadiusScale: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flMinimumSpeed: usize = 0x348; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_Noise = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_fl4NoiseScale: usize = 0x1E4; // float32
                pub const m_bAdditive: usize = 0x1E8; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_FadeAndKillForTracers = struct {
                pub const m_flStartFadeInTime: usize = 0x1D8; // float32
                pub const m_flEndFadeInTime: usize = 0x1DC; // float32
                pub const m_flStartFadeOutTime: usize = 0x1E0; // float32
                pub const m_flEndFadeOutTime: usize = 0x1E4; // float32
                pub const m_flStartAlpha: usize = 0x1E8; // float32
                pub const m_flEndAlpha: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ColorAdjustHSL = struct {
                pub const m_flHueAdjust: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flSaturationAdjust: usize = 0x348; // CPerParticleFloatInput
                pub const m_flLightnessAdjust: usize = 0x4B8; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleMassCalculationParameters = struct {
                pub const m_nMassMode: usize = 0x0; // ParticleMassMode_t
                pub const m_flRadius: usize = 0x8; // CPerParticleFloatInput
                pub const m_flNominalRadius: usize = 0x178; // CPerParticleFloatInput
                pub const m_flScale: usize = 0x2E8; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SequenceFromModel = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E4; // float32
                pub const m_flInputMax: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
                pub const m_nSetMethod: usize = 0x1F4; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_AlphaDecay = struct {
                pub const m_flMinAlpha: usize = 0x1D8; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDensityGradientToVectorAttribute = struct {
                pub const m_flRadiusScale: usize = 0x1D8; // float32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitVec = struct {
                pub const m_InputValue: usize = 0x1E0; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x898; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x89C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x8A0; // bool
                pub const m_bWritePreviousPosition: usize = 0x8A1; // bool
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SetHitboxToModel = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_nForceInModel: usize = 0x1E4; // int32
                pub const m_bEvenDistribution: usize = 0x1E8; // bool
                pub const m_nDesiredHitbox: usize = 0x1EC; // int32
                pub const m_vecHitBoxScale: usize = 0x1F0; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x8A8; // Vector
                pub const m_bMaintainHitbox: usize = 0x8B4; // bool
                pub const m_bUseBones: usize = 0x8B5; // bool
                pub const m_HitboxSetName: usize = 0x8B6; // char[128]
                pub const m_flShellSize: usize = 0x938; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementMoveAlongSkinnedCPSnapshot = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_nSnapshotControlPointNumber: usize = 0x1DC; // int32
                pub const m_bSetNormal: usize = 0x1E0; // bool
                pub const m_bSetRadius: usize = 0x1E1; // bool
                pub const m_flInterpolation: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flTValue: usize = 0x358; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LerpScalar = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flStartTime: usize = 0x350; // float32
                pub const m_flEndTime: usize = 0x354; // float32
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitialRepulsionVelocity = struct {
                pub const m_CollisionGroupName: usize = 0x1E0; // char[128]
                pub const m_nTraceSet: usize = 0x260; // ParticleTraceSet_t
                pub const m_vecOutputMin: usize = 0x264; // Vector
                pub const m_vecOutputMax: usize = 0x270; // Vector
                pub const m_nControlPointNumber: usize = 0x27C; // int32
                pub const m_bPerParticle: usize = 0x280; // bool
                pub const m_bTranslate: usize = 0x281; // bool
                pub const m_bProportional: usize = 0x282; // bool
                pub const m_flTraceLength: usize = 0x284; // float32
                pub const m_bPerParticleTR: usize = 0x288; // bool
                pub const m_bInherit: usize = 0x289; // bool
                pub const m_nChildCP: usize = 0x28C; // int32
                pub const m_nChildGroupID: usize = 0x290; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ClampScalar = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x350; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToHMD = struct {
                pub const m_nCP1: usize = 0x1E0; // int32
                pub const m_vecCP1Pos: usize = 0x1E4; // Vector
                pub const m_bOrientToHMD: usize = 0x1F0; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DifferencePreviousParticle = struct {
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // float32
                pub const m_flInputMax: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
                pub const m_nSetMethod: usize = 0x1F0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1F4; // bool
                pub const m_bSetPreviousParticle: usize = 0x1F5; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointFieldFromVectorExpression = struct {
                pub const m_nExpression: usize = 0x1E0; // VectorFloatExpressionType_t
                pub const m_vecInput1: usize = 0x1E8; // CParticleCollectionVecInput
                pub const m_vecInput2: usize = 0x8A0; // CParticleCollectionVecInput
                pub const m_flLerp: usize = 0xF58; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x10C8; // CParticleRemapFloatInput
                pub const m_nOutputCP: usize = 0x1238; // int32
                pub const m_nOutVectorField: usize = 0x123C; // int32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PercentageBetweenTransforms = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_flOutputMin: usize = 0x1E4; // float32
                pub const m_flOutputMax: usize = 0x1E8; // float32
                pub const m_TransformStart: usize = 0x1F0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x258; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x2C0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2C4; // bool
                pub const m_bRadialCheck: usize = 0x2C5; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PlaneCull = struct {
                pub const m_nControlPoint: usize = 0x1E0; // int32
                pub const m_flDistance: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x358; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelSequenceEndCap = struct {
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitFromCPSnapshot = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_strSnapshotSubset: usize = 0x1E8; // CUtlString
                pub const m_nAttributeToRead: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1F4; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1F8; // int32
                pub const m_bRandom: usize = 0x1FC; // bool
                pub const m_bReverse: usize = 0x1FD; // bool
                pub const m_nSnapShotIncrement: usize = 0x200; // CParticleCollectionFloatInput
                pub const m_nManualSnapshotIndex: usize = 0x370; // CPerParticleFloatInput
                pub const m_nRandomSeed: usize = 0x4E0; // int32
                pub const m_bLocalSpaceAngles: usize = 0x4E4; // bool
            };
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderCables = struct {
                pub const m_flRadiusScale: usize = 0x228; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x398; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x508; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xBC0; // ParticleColorBlendType_t
                pub const m_hMaterial: usize = 0xBC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nTextureRepetitionMode: usize = 0xBD0; // TextureRepetitionMode_t
                pub const m_flTextureRepeatsPerSegment: usize = 0xBD8; // CParticleCollectionFloatInput
                pub const m_flTextureRepeatsCircumference: usize = 0xD48; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetV: usize = 0xEB8; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetU: usize = 0x1028; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetV: usize = 0x1198; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetU: usize = 0x1308; // CParticleCollectionFloatInput
                pub const m_bDrawCableCaps: usize = 0x1478; // bool
                pub const m_flCapRoundness: usize = 0x147C; // float32
                pub const m_flCapOffsetAmount: usize = 0x1480; // float32
                pub const m_flTessScale: usize = 0x1484; // float32
                pub const m_nMinTesselation: usize = 0x1488; // int32
                pub const m_nMaxTesselation: usize = 0x148C; // int32
                pub const m_nRoundness: usize = 0x1490; // int32
                pub const m_nForceRoundnessFixed: usize = 0x1494; // bool
                pub const m_LightingTransform: usize = 0x1498; // CParticleTransformInput
                pub const m_MaterialFloatVars: usize = 0x1500; // CUtlLeanVector<FloatInputMaterialVariable_t>
                pub const m_MaterialVecVars: usize = 0x1520; // CUtlLeanVector<VecInputMaterialVariable_t>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InheritVelocity = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_flVelocityScale: usize = 0x1E4; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToWaterSurface = struct {
                pub const m_nSourceCP: usize = 0x1E0; // int32
                pub const m_nDestCP: usize = 0x1E4; // int32
                pub const m_nFlowCP: usize = 0x1E8; // int32
                pub const m_nActiveCP: usize = 0x1EC; // int32
                pub const m_nActiveCPField: usize = 0x1F0; // int32
                pub const m_flRetestRate: usize = 0x1F8; // CParticleCollectionFloatInput
                pub const m_bAdaptiveThreshold: usize = 0x368; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PositionOffset = struct {
                pub const m_OffsetMin: usize = 0x1E0; // CPerParticleVecInput
                pub const m_OffsetMax: usize = 0x898; // CPerParticleVecInput
                pub const m_TransformInput: usize = 0xF50; // CParticleTransformInput
                pub const m_bLocalCoords: usize = 0xFB8; // bool
                pub const m_bProportional: usize = 0xFB9; // bool
                pub const m_randomnessParameters: usize = 0xFBC; // CRandomNumberGeneratorParameters
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_NormalAlignToCP = struct {
                pub const m_transformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_nControlPointAxis: usize = 0x248; // ParticleControlPointAxis_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ShapeMatchingConstraint = struct {
                pub const m_flShapeRestorationTime: usize = 0x1D8; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetChildControlPoints = struct {
                pub const m_nChildGroupID: usize = 0x1D8; // int32
                pub const m_nFirstControlPoint: usize = 0x1DC; // int32
                pub const m_nNumControlPoints: usize = 0x1E0; // int32
                pub const m_nFirstSourcePoint: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bReverse: usize = 0x358; // bool
                pub const m_bSetOrientation: usize = 0x359; // bool
                pub const m_nOrientation: usize = 0x35C; // ParticleOrientationType_t
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ChladniWave = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x350; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x630; // CPerParticleFloatInput
                pub const m_vecWaveLength: usize = 0x7A0; // CPerParticleVecInput
                pub const m_vecHarmonics: usize = 0xE58; // CPerParticleVecInput
                pub const m_nSetMethod: usize = 0x1510; // ParticleSetMethod_t
                pub const m_nLocalSpaceControlPoint: usize = 0x1514; // int32
                pub const m_b3D: usize = 0x1518; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDirectionToCPToVector = struct {
                pub const m_nCP: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1E0; // float32
                pub const m_flOffsetRot: usize = 0x1E4; // float32
                pub const m_vecOffsetAxis: usize = 0x1E8; // Vector
                pub const m_bNormalize: usize = 0x1F4; // bool
                pub const m_nFieldStrength: usize = 0x1F8; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DriveCPFromGlobalSoundFloat = struct {
                pub const m_nOutputControlPoint: usize = 0x1E0; // int32
                pub const m_nOutputField: usize = 0x1E4; // int32
                pub const m_flInputMin: usize = 0x1E8; // float32
                pub const m_flInputMax: usize = 0x1EC; // float32
                pub const m_flOutputMin: usize = 0x1F0; // float32
                pub const m_flOutputMax: usize = 0x1F4; // float32
                pub const m_StackName: usize = 0x1F8; // CUtlString
                pub const m_OperatorName: usize = 0x200; // CUtlString
                pub const m_FieldName: usize = 0x208; // CUtlString
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_ScreenSpacePositionOfTarget = struct {
                pub const m_vecTargetPosition: usize = 0x1E0; // CPerParticleVecInput
                pub const m_bOututBehindness: usize = 0x898; // bool
                pub const m_nBehindFieldOutput: usize = 0x89C; // ParticleAttributeIndex_t
                pub const m_flBehindOutputRemap: usize = 0x8A0; // CParticleRemapFloatInput
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RtEnvCull = struct {
                pub const m_vecTestDir: usize = 0x1D8; // Vector
                pub const m_vecTestNormal: usize = 0x1E4; // Vector
                pub const m_bCullOnMiss: usize = 0x1F0; // bool
                pub const m_bStickInsteadOfCull: usize = 0x1F1; // bool
                pub const m_RtEnvName: usize = 0x1F2; // char[128]
                pub const m_nRTEnvCP: usize = 0x274; // int32
                pub const m_nComponent: usize = 0x278; // int32
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PinParticleToCP = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_vecOffset: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_bOffsetLocal: usize = 0x898; // bool
                pub const m_nParticleSelection: usize = 0x89C; // ParticleSelection_t
                pub const m_nParticleNumber: usize = 0x8A0; // CParticleCollectionFloatInput
                pub const m_nPinBreakType: usize = 0xA10; // ParticlePinDistance_t
                pub const m_flBreakDistance: usize = 0xA18; // CParticleCollectionFloatInput
                pub const m_flBreakSpeed: usize = 0xB88; // CParticleCollectionFloatInput
                pub const m_flAge: usize = 0xCF8; // CParticleCollectionFloatInput
                pub const m_nBreakControlPointNumber: usize = 0xE68; // int32
                pub const m_nBreakControlPointNumber2: usize = 0xE6C; // int32
                pub const m_flBreakValue: usize = 0xE70; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0xFE0; // CPerParticleFloatInput
                pub const m_bRetainInitialVelocity: usize = 0x1150; // bool
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapCPtoVector = struct {
                pub const m_nCPInput: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1E0; // int32
                pub const m_vInputMin: usize = 0x1E4; // Vector
                pub const m_vInputMax: usize = 0x1F0; // Vector
                pub const m_vOutputMin: usize = 0x1FC; // Vector
                pub const m_vOutputMax: usize = 0x208; // Vector
                pub const m_flStartTime: usize = 0x214; // float32
                pub const m_flEndTime: usize = 0x218; // float32
                pub const m_flInterpRate: usize = 0x21C; // float32
                pub const m_nSetMethod: usize = 0x220; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x224; // bool
                pub const m_bAccelerate: usize = 0x225; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateParticleImpulse = struct {
                pub const m_InputRadius: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_InputMagnitude: usize = 0x350; // CPerParticleFloatInput
                pub const m_nFalloffFunction: usize = 0x4C0; // ParticleFalloffFunction_t
                pub const m_InputFalloffExp: usize = 0x4C8; // CPerParticleFloatInput
                pub const m_nImpulseType: usize = 0x638; // ParticleImpulseType_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DensityForce = struct {
                pub const m_flRadiusScale: usize = 0x1E8; // float32
                pub const m_flForceScale: usize = 0x1EC; // float32
                pub const m_flTargetDensity: usize = 0x1F0; // float32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateInEpitrochoid = struct {
                pub const m_nComponent1: usize = 0x1E0; // int32
                pub const m_nComponent2: usize = 0x1E4; // int32
                pub const m_TransformInput: usize = 0x1E8; // CParticleTransformInput
                pub const m_flParticleDensity: usize = 0x250; // CPerParticleFloatInput
                pub const m_flOffset: usize = 0x3C0; // CPerParticleFloatInput
                pub const m_flRadius1: usize = 0x530; // CPerParticleFloatInput
                pub const m_flRadius2: usize = 0x6A0; // CPerParticleFloatInput
                pub const m_bUseCount: usize = 0x810; // bool
                pub const m_bUseLocalCoords: usize = 0x811; // bool
                pub const m_bOffsetExistingPos: usize = 0x812; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ConstrainDistanceToUserSpecifiedPath = struct {
                pub const m_fMinDistance: usize = 0x1D8; // float32
                pub const m_flMaxDistance: usize = 0x1DC; // float32
                pub const m_flTimeScale: usize = 0x1E0; // float32
                pub const m_bLoopedPath: usize = 0x1E4; // bool
                pub const m_pointList: usize = 0x1E8; // CUtlVector<PointDefinitionWithTimeValues_t>
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointPositions = struct {
                pub const m_bUseWorldLocation: usize = 0x1E0; // bool
                pub const m_bOrient: usize = 0x1E1; // bool
                pub const m_bSetOnce: usize = 0x1E2; // bool
                pub const m_nCP1: usize = 0x1E4; // int32
                pub const m_nCP2: usize = 0x1E8; // int32
                pub const m_nCP3: usize = 0x1EC; // int32
                pub const m_nCP4: usize = 0x1F0; // int32
                pub const m_vecCP1Pos: usize = 0x1F4; // Vector
                pub const m_vecCP2Pos: usize = 0x200; // Vector
                pub const m_vecCP3Pos: usize = 0x20C; // Vector
                pub const m_vecCP4Pos: usize = 0x218; // Vector
                pub const m_nHeadLocation: usize = 0x224; // int32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetFloatAttributeToVectorExpression = struct {
                pub const m_nExpression: usize = 0x1D8; // VectorFloatExpressionType_t
                pub const m_vInput1: usize = 0x1E0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x898; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0xF50; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x10C0; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x10C4; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementRotateParticleAroundAxis = struct {
                pub const m_vecRotAxis: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_flRotRate: usize = 0x890; // CParticleCollectionFloatInput
                pub const m_TransformInput: usize = 0xA00; // CParticleTransformInput
                pub const m_bLocalSpace: usize = 0xA68; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_IntraParticleForce = struct {
                pub const m_flAttractionMinDistance: usize = 0x1E8; // float32
                pub const m_flAttractionMaxDistance: usize = 0x1EC; // float32
                pub const m_flAttractionMaxStrength: usize = 0x1F0; // float32
                pub const m_flRepulsionMinDistance: usize = 0x1F4; // float32
                pub const m_flRepulsionMaxDistance: usize = 0x1F8; // float32
                pub const m_flRepulsionMaxStrength: usize = 0x1FC; // float32
                pub const m_bUseAABB: usize = 0x200; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitFloat = struct {
                pub const m_InputValue: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x350; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x354; // ParticleSetMethod_t
                pub const m_InputStrength: usize = 0x358; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateOnModel = struct {
                pub const m_modelInput: usize = 0x1E0; // CParticleModelInput
                pub const m_transformInput: usize = 0x240; // CParticleTransformInput
                pub const m_nForceInModel: usize = 0x2A8; // int32
                pub const m_bScaleToVolume: usize = 0x2AC; // bool
                pub const m_bEvenDistribution: usize = 0x2AD; // bool
                pub const m_nDesiredHitbox: usize = 0x2B0; // CParticleCollectionFloatInput
                pub const m_nHitboxValueFromControlPointIndex: usize = 0x420; // int32
                pub const m_vecHitBoxScale: usize = 0x428; // CParticleCollectionVecInput
                pub const m_flBoneVelocity: usize = 0xAE0; // float32
                pub const m_flMaxBoneVelocity: usize = 0xAE4; // float32
                pub const m_vecDirectionBias: usize = 0xAE8; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x11A0; // char[128]
                pub const m_bLocalCoords: usize = 0x1220; // bool
                pub const m_bUseBones: usize = 0x1221; // bool
                pub const m_bUseMesh: usize = 0x1222; // bool
                pub const m_flShellSize: usize = 0x1228; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_InheritFromPeerSystem = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1E0; // int32
                pub const m_nGroupID: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PerParticleForce = struct {
                pub const m_flForceScale: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_vForce: usize = 0x358; // CPerParticleVecInput
                pub const m_nCP: usize = 0xA10; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomNamedModelMeshGroup = struct {
            };
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderProjected = struct {
                pub const m_bProjectCharacter: usize = 0x228; // bool
                pub const m_bProjectWorld: usize = 0x229; // bool
                pub const m_bProjectWater: usize = 0x22A; // bool
                pub const m_bFlipHorizontal: usize = 0x22B; // bool
                pub const m_bEnableProjectedDepthControls: usize = 0x22C; // bool
                pub const m_flMinProjectionDepth: usize = 0x230; // float32
                pub const m_flMaxProjectionDepth: usize = 0x234; // float32
                pub const m_vecProjectedMaterials: usize = 0x238; // CUtlVector<RenderProjectedMaterial_t>
                pub const m_flMaterialSelection: usize = 0x250; // CPerParticleFloatInput
                pub const m_flAnimationTimeScale: usize = 0x3C0; // float32
                pub const m_bOrientToNormal: usize = 0x3C4; // bool
                pub const m_MaterialVars: usize = 0x3C8; // CUtlVector<MaterialVariable_t>
                pub const m_flRadiusScale: usize = 0x3E0; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x550; // CParticleCollectionFloatInput
                pub const m_flRollScale: usize = 0x6C0; // CParticleCollectionFloatInput
                pub const m_nAlpha2Field: usize = 0x830; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x838; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xEF0; // ParticleColorBlendType_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MaxVelocity = struct {
                pub const m_flMaxVelocity: usize = 0x1D8; // float32
                pub const m_flMinVelocity: usize = 0x1DC; // float32
                pub const m_nOverrideCP: usize = 0x1E0; // int32
                pub const m_nOverrideCPField: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_VelocityFromNormal = struct {
                pub const m_fSpeedMin: usize = 0x1E0; // float32
                pub const m_fSpeedMax: usize = 0x1E4; // float32
                pub const m_bIgnoreDt: usize = 0x1E8; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MaintainEmitter = struct {
                pub const m_nParticlesToMaintain: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x350; // float32
                pub const m_flEmissionDuration: usize = 0x358; // CParticleCollectionFloatInput
                pub const m_flEmissionRate: usize = 0x4C8; // float32
                pub const m_nSnapshotControlPoint: usize = 0x4CC; // int32
                pub const m_strSnapshotSubset: usize = 0x4D0; // CUtlString
                pub const m_bEmitInstantaneously: usize = 0x4D8; // bool
                pub const m_bFinalEmitOnStop: usize = 0x4D9; // bool
                pub const m_flScale: usize = 0x4E0; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PositionOffsetToCP = struct {
                pub const m_nControlPointNumberStart: usize = 0x1E0; // int32
                pub const m_nControlPointNumberEnd: usize = 0x1E4; // int32
                pub const m_bLocalCoords: usize = 0x1E8; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapInitialTransformDirectionToRotation = struct {
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x248; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x24C; // float32
                pub const m_nComponent: usize = 0x250; // int32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_FadeAndKill = struct {
                pub const m_flStartFadeInTime: usize = 0x1D8; // float32
                pub const m_flEndFadeInTime: usize = 0x1DC; // float32
                pub const m_flStartFadeOutTime: usize = 0x1E0; // float32
                pub const m_flEndFadeOutTime: usize = 0x1E4; // float32
                pub const m_flStartAlpha: usize = 0x1E8; // float32
                pub const m_flEndAlpha: usize = 0x1EC; // float32
                pub const m_bForcePreserveParticleOrder: usize = 0x1F0; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ColorInterpolate = struct {
                pub const m_ColorFade: usize = 0x1D8; // Color
                pub const m_flFadeStartTime: usize = 0x1E8; // float32
                pub const m_flFadeEndTime: usize = 0x1EC; // float32
                pub const m_nFieldOutput: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_bEaseInOut: usize = 0x1F4; // bool
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RampScalarSpline = struct {
                pub const m_RateMin: usize = 0x1D8; // float32
                pub const m_RateMax: usize = 0x1DC; // float32
                pub const m_flStartTime_min: usize = 0x1E0; // float32
                pub const m_flStartTime_max: usize = 0x1E4; // float32
                pub const m_flEndTime_min: usize = 0x1E8; // float32
                pub const m_flEndTime_max: usize = 0x1EC; // float32
                pub const m_flBias: usize = 0x1F0; // float32
                pub const m_nField: usize = 0x220; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x224; // bool
                pub const m_bEaseOut: usize = 0x225; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelSequenceOnceTimed = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointFromObjectScale = struct {
                pub const m_nCPInput: usize = 0x1E0; // int32
                pub const m_nCPOutput: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MaintainSequentialPath = struct {
                pub const m_fMaxDistance: usize = 0x1D8; // float32
                pub const m_flNumToAssign: usize = 0x1DC; // float32
                pub const m_flCohesionStrength: usize = 0x1E0; // float32
                pub const m_flTolerance: usize = 0x1E4; // float32
                pub const m_bLoop: usize = 0x1E8; // bool
                pub const m_bUseParticleCount: usize = 0x1E9; // bool
                pub const m_PathParams: usize = 0x1F0; // CPathParameters
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelBodyPartEndCap = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_StopAfterCPDuration = struct {
                pub const m_flDuration: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_bDestroyImmediately: usize = 0x350; // bool
                pub const m_bPlayEndCap: usize = 0x351; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CGeneralSpin = struct {
                pub const m_nSpinRateDegrees: usize = 0x1D8; // int32
                pub const m_nSpinRateMinDegrees: usize = 0x1DC; // int32
                pub const m_fSpinRateStopTime: usize = 0x1E4; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub const C_OP_LockToSavedSequentialPath = struct {
                pub const m_flFadeStart: usize = 0x1DC; // float32
                pub const m_flFadeEnd: usize = 0x1E0; // float32
                pub const m_bCPPairs: usize = 0x1E4; // bool
                pub const m_PathParams: usize = 0x1F0; // CPathParameters
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapNamedModelElementToScalar = struct {
                pub const m_hModel: usize = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1E8; // CUtlVector<CUtlString>
                pub const m_values: usize = 0x200; // CUtlVector<float32>
                pub const m_nFieldInput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x21C; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x220; // ParticleSetMethod_t
                pub const m_bModelFromRenderer: usize = 0x224; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ClampVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1E0; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x898; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderStatusEffectCitadel = struct {
                pub const m_pTextureColorWarp: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureNormal: usize = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureMetalness: usize = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureRoughness: usize = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureSelfIllum: usize = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDetail: usize = 0x250; // CStrongHandle<InfoForResourceTypeCTextureBase>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const IParticleSystemDefinition = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_WindForce = struct {
                pub const m_vForce: usize = 0x1E8; // Vector
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetVariable = struct {
                pub const m_variableReference: usize = 0x1E0; // CParticleVariableRef
                pub const m_transformInput: usize = 0x230; // CParticleTransformInput
                pub const m_positionOffset: usize = 0x298; // Vector
                pub const m_rotationOffset: usize = 0x2A4; // QAngle
                pub const m_vecInput: usize = 0x2B0; // CParticleCollectionVecInput
                pub const m_floatInput: usize = 0x968; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderStandardLight = struct {
                pub const m_nLightType: usize = 0x228; // ParticleLightTypeChoiceList_t
                pub const m_nMaxAllowed: usize = 0x22C; // uint16
                pub const m_vecColorScale: usize = 0x230; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8E8; // ParticleColorBlendType_t
                pub const m_flIntensity: usize = 0x8F0; // CPerParticleFloatInput
                pub const m_bCastShadows: usize = 0xA60; // bool
                pub const m_bDynamicBounce: usize = 0xA61; // bool
                pub const m_flBounceScale: usize = 0xA68; // CParticleCollectionFloatInput
                pub const m_flTheta: usize = 0xBD8; // CParticleCollectionFloatInput
                pub const m_flPhi: usize = 0xD48; // CParticleCollectionFloatInput
                pub const m_flRadiusMultiplier: usize = 0xEB8; // CParticleCollectionFloatInput
                pub const m_nAttenuationStyle: usize = 0x1028; // StandardLightingAttenuationStyle_t
                pub const m_flFalloffLinearity: usize = 0x1030; // CParticleCollectionFloatInput
                pub const m_flFiftyPercentFalloff: usize = 0x11A0; // CParticleCollectionFloatInput
                pub const m_flZeroPercentFalloff: usize = 0x1310; // CParticleCollectionFloatInput
                pub const m_bRenderDiffuse: usize = 0x1480; // bool
                pub const m_bRenderSpecular: usize = 0x1481; // bool
                pub const m_lightCookie: usize = 0x1488; // CUtlString
                pub const m_nPriority: usize = 0x1490; // int32
                pub const m_nFogLightingMode: usize = 0x1494; // ParticleLightFogLightingMode_t
                pub const m_flFogContribution: usize = 0x1498; // CParticleCollectionRendererFloatInput
                pub const m_nCapsuleLightBehavior: usize = 0x1608; // ParticleLightBehaviorChoiceList_t
                pub const m_flCapsuleLength: usize = 0x160C; // float32
                pub const m_bReverseOrder: usize = 0x1610; // bool
                pub const m_bClosedLoop: usize = 0x1611; // bool
                pub const m_nPrevPntSource: usize = 0x1614; // ParticleAttributeIndex_t
                pub const m_flMaxLength: usize = 0x1618; // float32
                pub const m_flMinLength: usize = 0x161C; // float32
                pub const m_bIgnoreDT: usize = 0x1620; // bool
                pub const m_flConstrainRadiusToLengthRatio: usize = 0x1624; // float32
                pub const m_flLengthScale: usize = 0x1628; // float32
                pub const m_flLengthFadeInTime: usize = 0x162C; // float32
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_DistanceToTransform = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x350; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x630; // CPerParticleFloatInput
                pub const m_TransformStart: usize = 0x7A0; // CParticleTransformInput
                pub const m_bLOS: usize = 0x808; // bool
                pub const m_CollisionGroupName: usize = 0x809; // char[128]
                pub const m_nTraceSet: usize = 0x88C; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x890; // float32
                pub const m_flLOSScale: usize = 0x894; // float32
                pub const m_nSetMethod: usize = 0x898; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x89C; // bool
                pub const m_bAdditive: usize = 0x89D; // bool
                pub const m_vecComponentScale: usize = 0x8A0; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapControlPointOrientationToRotation = struct {
                pub const m_nCP: usize = 0x1D8; // int32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x1E0; // float32
                pub const m_nComponent: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToCenter = struct {
                pub const m_nCP1: usize = 0x1E0; // int32
                pub const m_vecCP1Pos: usize = 0x1E4; // Vector
                pub const m_bUseAvgParticlePos: usize = 0x1F0; // bool
                pub const m_nSetParent: usize = 0x1F4; // ParticleParentSetMode_t
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapAverageScalarValuetoCP = struct {
                pub const m_nExpression: usize = 0x1E0; // SetStatisticExpressionType_t
                pub const m_flDecimalPlaces: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_nOutControlPointNumber: usize = 0x358; // int32
                pub const m_nOutVectorField: usize = 0x35C; // int32
                pub const m_nField: usize = 0x360; // ParticleAttributeIndex_t
                pub const m_flOutputRemap: usize = 0x368; // CParticleRemapFloatInput
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDotProductToScalar = struct {
                pub const m_nInputCP1: usize = 0x1D8; // int32
                pub const m_nInputCP2: usize = 0x1DC; // int32
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E4; // float32
                pub const m_flInputMax: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
                pub const m_bUseParticleVelocity: usize = 0x1F4; // bool
                pub const m_nSetMethod: usize = 0x1F8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1FC; // bool
                pub const m_bUseParticleNormal: usize = 0x1FD; // bool
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapCPtoCP = struct {
                pub const m_nInputControlPoint: usize = 0x1E0; // int32
                pub const m_nOutputControlPoint: usize = 0x1E4; // int32
                pub const m_nInputField: usize = 0x1E8; // int32
                pub const m_nOutputField: usize = 0x1EC; // int32
                pub const m_flInputMin: usize = 0x1F0; // float32
                pub const m_flInputMax: usize = 0x1F4; // float32
                pub const m_flOutputMin: usize = 0x1F8; // float32
                pub const m_flOutputMax: usize = 0x1FC; // float32
                pub const m_bDerivative: usize = 0x200; // bool
                pub const m_flInterpRate: usize = 0x204; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointRotation = struct {
                pub const m_vecRotAxis: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_flRotRate: usize = 0x898; // CParticleCollectionFloatInput
                pub const m_nCP: usize = 0xA08; // int32
                pub const m_nLocalCP: usize = 0xA0C; // int32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CurlNoiseForce = struct {
                pub const m_nNoiseType: usize = 0x1E8; // ParticleDirectionNoiseType_t
                pub const m_vecNoiseFreq: usize = 0x1F0; // CPerParticleVecInput
                pub const m_vecNoiseScale: usize = 0x8A8; // CPerParticleVecInput
                pub const m_vecOffset: usize = 0xF60; // CPerParticleVecInput
                pub const m_vecOffsetRate: usize = 0x1618; // CPerParticleVecInput
                pub const m_flWorleySeed: usize = 0x1CD0; // CPerParticleFloatInput
                pub const m_flWorleyJitter: usize = 0x1E40; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_Orient2DRelToCP = struct {
                pub const m_nCP: usize = 0x1E0; // int32
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x1E8; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetSimulationRate = struct {
                pub const m_flSimulationScale: usize = 0x1E0; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_FadeIn = struct {
                pub const m_flFadeInTimeMin: usize = 0x1D8; // float32
                pub const m_flFadeInTimeMax: usize = 0x1DC; // float32
                pub const m_flFadeInTimeExp: usize = 0x1E0; // float32
                pub const m_bProportional: usize = 0x1E4; // bool
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderScreenShake = struct {
                pub const m_flDurationScale: usize = 0x228; // float32
                pub const m_flRadiusScale: usize = 0x22C; // float32
                pub const m_flFrequencyScale: usize = 0x230; // float32
                pub const m_flAmplitudeScale: usize = 0x234; // float32
                pub const m_nRadiusField: usize = 0x238; // ParticleAttributeIndex_t
                pub const m_nDurationField: usize = 0x23C; // ParticleAttributeIndex_t
                pub const m_nFrequencyField: usize = 0x240; // ParticleAttributeIndex_t
                pub const m_nAmplitudeField: usize = 0x244; // ParticleAttributeIndex_t
                pub const m_nFilterCP: usize = 0x248; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapBoundingVolumetoCP = struct {
                pub const m_nOutControlPointNumber: usize = 0x1E0; // int32
                pub const m_flInputMin: usize = 0x1E4; // float32
                pub const m_flInputMax: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_HSVShiftToCP = struct {
                pub const m_nColorCP: usize = 0x1E0; // int32
                pub const m_nColorGemEnableCP: usize = 0x1E4; // int32
                pub const m_nOutputCP: usize = 0x1E8; // int32
                pub const m_DefaultHSVColor: usize = 0x1EC; // Color
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapVectorToRotations = struct {
                pub const m_vecInput: usize = 0x1D8; // CPerParticleVecInput
                pub const m_vecRotation: usize = 0x890; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_GlobalScale = struct {
                pub const m_flScale: usize = 0x1E0; // float32
                pub const m_nScaleControlPointNumber: usize = 0x1E4; // int32
                pub const m_nControlPointNumber: usize = 0x1E8; // int32
                pub const m_bScaleRadius: usize = 0x1EC; // bool
                pub const m_bScalePosition: usize = 0x1ED; // bool
                pub const m_bScaleVelocity: usize = 0x1EE; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RadiusFromCPObject = struct {
                pub const m_nControlPoint: usize = 0x1E0; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitialVelocityFromHitbox = struct {
                pub const m_flVelocityMin: usize = 0x1E0; // float32
                pub const m_flVelocityMax: usize = 0x1E4; // float32
                pub const m_nControlPointNumber: usize = 0x1E8; // int32
                pub const m_HitboxSetName: usize = 0x1EC; // char[128]
                pub const m_bUseBones: usize = 0x26C; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LerpVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1DC; // Vector
                pub const m_flStartTime: usize = 0x1E8; // float32
                pub const m_flEndTime: usize = 0x1EC; // float32
                pub const m_nSetMethod: usize = 0x1F0; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointFieldToWater = struct {
                pub const m_nSourceCP: usize = 0x1E0; // int32
                pub const m_nDestCP: usize = 0x1E4; // int32
                pub const m_nCPField: usize = 0x1E8; // int32
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const TextureGroup_t = struct {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_bReplaceTextureWithGradient: usize = 0x1; // bool
                pub const m_hTexture: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Gradient: usize = 0x10; // CColorGradient
                pub const m_nTextureType: usize = 0x28; // SpriteCardTextureType_t
                pub const m_nTextureChannels: usize = 0x2C; // SpriteCardTextureChannel_t
                pub const m_nTextureBlendMode: usize = 0x30; // ParticleTextureLayerBlendType_t
                pub const m_flTextureBlend: usize = 0x38; // CParticleCollectionRendererFloatInput
                pub const m_TextureControls: usize = 0x1A8; // TextureControls_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_TimeVaryingForce = struct {
                pub const m_flStartLerpTime: usize = 0x1E8; // float32
                pub const m_StartingForce: usize = 0x1EC; // Vector
                pub const m_flEndLerpTime: usize = 0x1F8; // float32
                pub const m_EndingForce: usize = 0x1FC; // Vector
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetCPOrientationToGroundNormal = struct {
                pub const m_flInterpRate: usize = 0x1D8; // float32
                pub const m_flMaxTraceLength: usize = 0x1DC; // float32
                pub const m_flTolerance: usize = 0x1E0; // float32
                pub const m_flTraceOffset: usize = 0x1E4; // float32
                pub const m_CollisionGroupName: usize = 0x1E8; // char[128]
                pub const m_nTraceSet: usize = 0x268; // ParticleTraceSet_t
                pub const m_nInputCP: usize = 0x26C; // int32
                pub const m_nOutputCP: usize = 0x270; // int32
                pub const m_bIncludeWater: usize = 0x280; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SnapshotSkinToBones = struct {
                pub const m_bTransformNormals: usize = 0x1D8; // bool
                pub const m_bTransformRadii: usize = 0x1D9; // bool
                pub const m_nControlPointNumber: usize = 0x1DC; // int32
                pub const m_flLifeTimeFadeStart: usize = 0x1E0; // float32
                pub const m_flLifeTimeFadeEnd: usize = 0x1E4; // float32
                pub const m_flJumpThreshold: usize = 0x1E8; // float32
                pub const m_flPrevPosScale: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateWithinSphereTransform = struct {
                pub const m_fRadiusMin: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_fRadiusMax: usize = 0x350; // CPerParticleFloatInput
                pub const m_vecDistanceBias: usize = 0x4C0; // CPerParticleVecInput
                pub const m_vecDistanceBiasAbs: usize = 0xB78; // Vector
                pub const m_TransformInput: usize = 0xB88; // CParticleTransformInput
                pub const m_fSpeedMin: usize = 0xBF0; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0xD60; // CPerParticleFloatInput
                pub const m_fSpeedRandExp: usize = 0xED0; // float32
                pub const m_bLocalCoords: usize = 0xED4; // bool
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0xED8; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0x1590; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0x1C48; // ParticleAttributeIndex_t
                pub const m_nFieldVelocity: usize = 0x1C4C; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RadiusDecay = struct {
                pub const m_flMinRadius: usize = 0x1D8; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapNamedModelBodyPartToScalar = struct {
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapScalarToVector = struct {
                pub const m_nFieldInput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E8; // float32
                pub const m_flInputMax: usize = 0x1EC; // float32
                pub const m_vecOutputMin: usize = 0x1F0; // Vector
                pub const m_vecOutputMax: usize = 0x1FC; // Vector
                pub const m_flStartTime: usize = 0x208; // float32
                pub const m_flEndTime: usize = 0x20C; // float32
                pub const m_nSetMethod: usize = 0x210; // ParticleSetMethod_t
                pub const m_nControlPointNumber: usize = 0x214; // int32
                pub const m_bLocalCoords: usize = 0x218; // bool
                pub const m_flRemapBias: usize = 0x21C; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitialSequenceFromModel = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1E8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1EC; // float32
                pub const m_flInputMax: usize = 0x1F0; // float32
                pub const m_flOutputMin: usize = 0x1F4; // float32
                pub const m_flOutputMax: usize = 0x1F8; // float32
                pub const m_nSetMethod: usize = 0x1FC; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_NoiseEmitter = struct {
                pub const m_flEmissionDuration: usize = 0x1E0; // float32
                pub const m_flStartTime: usize = 0x1E4; // float32
                pub const m_flEmissionScale: usize = 0x1E8; // float32
                pub const m_nScaleControlPoint: usize = 0x1EC; // int32
                pub const m_nScaleControlPointField: usize = 0x1F0; // int32
                pub const m_nWorldNoisePoint: usize = 0x1F4; // int32
                pub const m_bAbsVal: usize = 0x1F8; // bool
                pub const m_bAbsValInv: usize = 0x1F9; // bool
                pub const m_flOffset: usize = 0x1FC; // float32
                pub const m_flOutputMin: usize = 0x200; // float32
                pub const m_flOutputMax: usize = 0x204; // float32
                pub const m_flNoiseScale: usize = 0x208; // float32
                pub const m_flWorldNoiseScale: usize = 0x20C; // float32
                pub const m_vecOffsetLoc: usize = 0x210; // Vector
                pub const m_flWorldTimeScale: usize = 0x21C; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionInitializer = struct {
                pub const m_nAssociatedEmitterIndex: usize = 0x1D8; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SelectivelyEnableChildren = struct {
                pub const m_nChildGroupID: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_nFirstChild: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_nNumChildrenToEnable: usize = 0x4C0; // CParticleCollectionFloatInput
                pub const m_bPlayEndcapOnStop: usize = 0x630; // bool
                pub const m_bDestroyImmediately: usize = 0x631; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ModelReference_t = struct {
                pub const m_model: usize = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_flRelativeProbabilityOfSpawn: usize = 0x8; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PlanarConstraint = struct {
                pub const m_PointOnPlane: usize = 0x1D8; // Vector
                pub const m_PlaneNormal: usize = 0x1E4; // Vector
                pub const m_nControlPointNumber: usize = 0x1F0; // int32
                pub const m_bGlobalOrigin: usize = 0x1F4; // bool
                pub const m_bGlobalNormal: usize = 0x1F5; // bool
                pub const m_flRadiusScale: usize = 0x1F8; // CPerParticleFloatInput
                pub const m_flMaximumDistanceToCP: usize = 0x368; // CParticleCollectionFloatInput
                pub const m_bUseOldCode: usize = 0x4D8; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateFromCPs = struct {
                pub const m_nIncrement: usize = 0x1E0; // int32
                pub const m_nMinCP: usize = 0x1E4; // int32
                pub const m_nMaxCP: usize = 0x1E8; // int32
                pub const m_nDynamicCPCount: usize = 0x1F0; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LockPoints = struct {
                pub const m_nMinCol: usize = 0x1D8; // int32
                pub const m_nMaxCol: usize = 0x1DC; // int32
                pub const m_nMinRow: usize = 0x1E0; // int32
                pub const m_nMaxRow: usize = 0x1E4; // int32
                pub const m_nControlPoint: usize = 0x1E8; // int32
                pub const m_flBlendValue: usize = 0x1EC; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_CreateSpiralSphere = struct {
                pub const m_TransformInput: usize = 0x1E0; // CParticleTransformInput
                pub const m_flDensity: usize = 0x248; // CPerParticleFloatInput
                pub const m_flInitialRadius: usize = 0x3B8; // CPerParticleFloatInput
                pub const m_flInitialSpeedMin: usize = 0x528; // CPerParticleFloatInput
                pub const m_flInitialSpeedMax: usize = 0x698; // CPerParticleFloatInput
                pub const m_bUseParticleCount: usize = 0x808; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CPVelocityForce = struct {
                pub const m_nControlPointNumber: usize = 0x1E8; // int32
                pub const m_flScale: usize = 0x1F0; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapNamedModelElementEndCap = struct {
                pub const m_hModel: usize = 0x1D8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_inNames: usize = 0x1E0; // CUtlVector<CUtlString>
                pub const m_outNames: usize = 0x1F8; // CUtlVector<CUtlString>
                pub const m_fallbackNames: usize = 0x210; // CUtlVector<CUtlString>
                pub const m_bModelFromRenderer: usize = 0x228; // bool
                pub const m_nFieldInput: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_ScaleVelocity = struct {
                pub const m_vecScale: usize = 0x1E0; // CParticleCollectionVecInput
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MoveToHitbox = struct {
                pub const m_modelInput: usize = 0x1D8; // CParticleModelInput
                pub const m_transformInput: usize = 0x238; // CParticleTransformInput
                pub const m_flLifeTimeLerpStart: usize = 0x2A4; // float32
                pub const m_flLifeTimeLerpEnd: usize = 0x2A8; // float32
                pub const m_flPrevPosScale: usize = 0x2AC; // float32
                pub const m_HitboxSetName: usize = 0x2B0; // char[128]
                pub const m_bUseBones: usize = 0x330; // bool
                pub const m_nLerpType: usize = 0x334; // HitboxLerpType_t
                pub const m_flInterpolation: usize = 0x338; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PinRopeSegmentParticleToParent = struct {
                pub const m_nParticleSelection: usize = 0x1D8; // ParticleSelection_t
                pub const m_nParticleNumber: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x350; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PointList = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1E8; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x200; // bool
                pub const m_bClosedLoop: usize = 0x201; // bool
                pub const m_nNumPointsAlongPath: usize = 0x204; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LerpToOtherAttribute = struct {
                pub const m_flInterpolation: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_nFieldInputFrom: usize = 0x348; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x34C; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x350; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RandomColor = struct {
                pub const m_ColorMin: usize = 0x1FC; // Color
                pub const m_ColorMax: usize = 0x200; // Color
                pub const m_TintMin: usize = 0x204; // Color
                pub const m_TintMax: usize = 0x208; // Color
                pub const m_flTintPerc: usize = 0x20C; // float32
                pub const m_flUpdateThreshold: usize = 0x210; // float32
                pub const m_nTintCP: usize = 0x214; // int32
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_nTintBlendMode: usize = 0x21C; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x220; // float32
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetGravityToCP = struct {
                pub const m_nCPInput: usize = 0x1E0; // int32
                pub const m_nCPOutput: usize = 0x1E4; // int32
                pub const m_flScale: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bSetPosition: usize = 0x358; // bool
                pub const m_bSetOrientation: usize = 0x359; // bool
                pub const m_bSetZDown: usize = 0x35A; // bool
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapParticleCountToScalar = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1E4; // int32
                pub const m_nInputMax: usize = 0x1E8; // int32
                pub const m_nScaleControlPoint: usize = 0x1EC; // int32
                pub const m_nScaleControlPointField: usize = 0x1F0; // int32
                pub const m_flOutputMin: usize = 0x1F4; // float32
                pub const m_flOutputMax: usize = 0x1F8; // float32
                pub const m_nSetMethod: usize = 0x1FC; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x200; // bool
                pub const m_bInvert: usize = 0x201; // bool
                pub const m_bWrap: usize = 0x202; // bool
                pub const m_flRemapBias: usize = 0x204; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InheritFromParentParticles = struct {
                pub const m_flScale: usize = 0x1E0; // float32
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1E8; // int32
                pub const m_bRandomDistribution: usize = 0x1EC; // bool
                pub const m_nRandomSeed: usize = 0x1F0; // int32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RampScalarLinearSimple = struct {
                pub const m_Rate: usize = 0x1D8; // float32
                pub const m_flStartTime: usize = 0x1DC; // float32
                pub const m_flEndTime: usize = 0x1E0; // float32
                pub const m_nField: usize = 0x210; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_ChaoticAttractor = struct {
                pub const m_flAParm: usize = 0x1E0; // float32
                pub const m_flBParm: usize = 0x1E4; // float32
                pub const m_flCParm: usize = 0x1E8; // float32
                pub const m_flDParm: usize = 0x1EC; // float32
                pub const m_flScale: usize = 0x1F0; // float32
                pub const m_flSpeedMin: usize = 0x1F4; // float32
                pub const m_flSpeedMax: usize = 0x1F8; // float32
                pub const m_nBaseCP: usize = 0x1FC; // int32
                pub const m_bUniformSpeed: usize = 0x200; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_MovementRigidAttachToCP = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_nScaleControlPoint: usize = 0x1DC; // int32
                pub const m_nScaleCPField: usize = 0x1E0; // int32
                pub const m_nFieldInput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1E8; // ParticleAttributeIndex_t
                pub const m_bOffsetLocal: usize = 0x1EC; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderFlattenGrass = struct {
                pub const m_flFlattenStrength: usize = 0x228; // float32
                pub const m_nStrengthFieldOverride: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_flRadiusScale: usize = 0x230; // float32
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderLightBeam = struct {
                pub const m_nMaxAllowed: usize = 0x228; // uint16
                pub const m_vColorBlend: usize = 0x230; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8E8; // ParticleColorBlendType_t
                pub const m_flBrightnessLumensPerMeter: usize = 0x8F0; // CParticleCollectionFloatInput
                pub const m_bCastShadows: usize = 0xA60; // bool
                pub const m_bDynamicBounce: usize = 0xA61; // bool
                pub const m_flBounceScale: usize = 0xA68; // CParticleCollectionFloatInput
                pub const m_flSkirt: usize = 0xBD8; // CParticleCollectionFloatInput
                pub const m_flRange: usize = 0xD48; // CParticleCollectionFloatInput
                pub const m_flThickness: usize = 0xEB8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_EnableChildrenFromParentParticleCount = struct {
                pub const m_nChildGroupID: usize = 0x1E0; // int32
                pub const m_nFirstChild: usize = 0x1E4; // int32
                pub const m_nNumChildrenToEnable: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bDisableChildren: usize = 0x358; // bool
                pub const m_bPlayEndcapOnStop: usize = 0x359; // bool
                pub const m_bDestroyImmediately: usize = 0x35A; // bool
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_DistanceToCPInit = struct {
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x358; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4C8; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x638; // CPerParticleFloatInput
                pub const m_nStartCP: usize = 0x7A8; // int32
                pub const m_bLOS: usize = 0x7AC; // bool
                pub const m_CollisionGroupName: usize = 0x7AD; // char[128]
                pub const m_nTraceSet: usize = 0x830; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x838; // CPerParticleFloatInput
                pub const m_flLOSScale: usize = 0x9A8; // float32
                pub const m_nSetMethod: usize = 0x9AC; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x9B0; // bool
                pub const m_vecDistanceScale: usize = 0x9B4; // Vector
                pub const m_flRemapBias: usize = 0x9C0; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CReplicationParameters = struct {
                pub const m_nReplicationMode: usize = 0x0; // ParticleReplicationMode_t
                pub const m_bScaleChildParticleRadii: usize = 0x4; // bool
                pub const m_flMinRandomRadiusScale: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_flMaxRandomRadiusScale: usize = 0x178; // CParticleCollectionFloatInput
                pub const m_vMinRandomDisplacement: usize = 0x2E8; // CParticleCollectionVecInput
                pub const m_vMaxRandomDisplacement: usize = 0x9A0; // CParticleCollectionVecInput
                pub const m_flModellingScale: usize = 0x1058; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_EndCapDecay = struct {
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ForceBasedOnDistanceToPlane = struct {
                pub const m_flMinDist: usize = 0x1E8; // float32
                pub const m_vecForceAtMinDist: usize = 0x1EC; // Vector
                pub const m_flMaxDist: usize = 0x1F8; // float32
                pub const m_vecForceAtMaxDist: usize = 0x1FC; // Vector
                pub const m_vecPlaneNormal: usize = 0x208; // Vector
                pub const m_nControlPointNumber: usize = 0x214; // int32
                pub const m_flExponent: usize = 0x218; // float32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapDensityToVector = struct {
                pub const m_flRadiusScale: usize = 0x1D8; // float32
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flDensityMin: usize = 0x1E0; // float32
                pub const m_flDensityMax: usize = 0x1E4; // float32
                pub const m_vecOutputMin: usize = 0x1E8; // Vector
                pub const m_vecOutputMax: usize = 0x1F4; // Vector
                pub const m_bUseParentDensity: usize = 0x200; // bool
                pub const m_nVoxelGridResolution: usize = 0x204; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticleControlPointConfiguration_t = struct {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_drivers: usize = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                pub const m_previewState: usize = 0x20; // ParticlePreviewState_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SetRigidAttachment = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_nFieldInput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1E8; // ParticleAttributeIndex_t
                pub const m_bLocalSpace: usize = 0x1EC; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const MaterialVariable_t = struct {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_nVariableField: usize = 0x8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0xC; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionConstraint = struct {
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapSpeed = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_flOutputMin: usize = 0x1E4; // float32
                pub const m_flOutputMax: usize = 0x1E8; // float32
                pub const m_nSetMethod: usize = 0x1EC; // ParticleSetMethod_t
                pub const m_bIgnoreDelta: usize = 0x1F0; // bool
            };
            // Parent: None
            // Field count: 56
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderModels = struct {
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x228; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x229; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x22A; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x22B; // bool
                pub const m_ModelList: usize = 0x230; // CUtlVector<ModelReference_t>
                pub const m_nBodyGroupField: usize = 0x248; // ParticleAttributeIndex_t
                pub const m_nSubModelField: usize = 0x24C; // ParticleAttributeIndex_t
                pub const m_bIgnoreNormal: usize = 0x250; // bool
                pub const m_bOrientZ: usize = 0x251; // bool
                pub const m_bCenterOffset: usize = 0x252; // bool
                pub const m_vecLocalOffset: usize = 0x258; // CPerParticleVecInput
                pub const m_vecLocalRotation: usize = 0x910; // CPerParticleVecInput
                pub const m_bIgnoreRadius: usize = 0xFC8; // bool
                pub const m_nModelScaleCP: usize = 0xFCC; // int32
                pub const m_vecComponentScale: usize = 0xFD0; // CPerParticleVecInput
                pub const m_bLocalScale: usize = 0x1688; // bool
                pub const m_nSizeCullBloat: usize = 0x168C; // int32
                pub const m_bAnimated: usize = 0x1690; // bool
                pub const m_flAnimationRate: usize = 0x1698; // CPerParticleFloatInput
                pub const m_bScaleAnimationRate: usize = 0x1808; // bool
                pub const m_bForceLoopingAnimation: usize = 0x1809; // bool
                pub const m_bResetAnimOnStop: usize = 0x180A; // bool
                pub const m_bManualAnimFrame: usize = 0x180B; // bool
                pub const m_nAnimationScaleField: usize = 0x180C; // ParticleAttributeIndex_t
                pub const m_nAnimationField: usize = 0x1810; // ParticleAttributeIndex_t
                pub const m_nManualFrameField: usize = 0x1814; // ParticleAttributeIndex_t
                pub const m_ActivityName: usize = 0x1818; // char[256]
                pub const m_SequenceName: usize = 0x1918; // char[256]
                pub const m_bEnableClothSimulation: usize = 0x1A18; // bool
                pub const m_bDisableClothGroundCollision: usize = 0x1A19; // bool
                pub const m_ClothEffectName: usize = 0x1A1A; // char[64]
                pub const m_hOverrideMaterial: usize = 0x1A60; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bOverrideTranslucentMaterials: usize = 0x1A68; // bool
                pub const m_nSkin: usize = 0x1A70; // CPerParticleFloatInput
                pub const m_MaterialVars: usize = 0x1BE0; // CUtlVector<MaterialVariable_t>
                pub const m_flRenderFilter: usize = 0x1BF8; // CPerParticleFloatInput
                pub const m_flManualModelSelection: usize = 0x1D68; // CPerParticleFloatInput
                pub const m_modelInput: usize = 0x1ED8; // CParticleModelInput
                pub const m_nLOD: usize = 0x1F38; // int32
                pub const m_EconSlotName: usize = 0x1F3C; // char[256]
                pub const m_bOriginalModel: usize = 0x203C; // bool
                pub const m_bSuppressTint: usize = 0x203D; // bool
                pub const m_nSubModelFieldType: usize = 0x2040; // RenderModelSubModelFieldType_t
                pub const m_bDisableShadows: usize = 0x2044; // bool
                pub const m_bDisableDepthPrepass: usize = 0x2045; // bool
                pub const m_bAcceptsDecals: usize = 0x2046; // bool
                pub const m_bForceDrawInterlevedWithSiblings: usize = 0x2047; // bool
                pub const m_bDoNotDrawInParticlePass: usize = 0x2048; // bool
                pub const m_bAllowApproximateTransforms: usize = 0x2049; // bool
                pub const m_szRenderAttribute: usize = 0x204A; // char[260]
                pub const m_flRadiusScale: usize = 0x2150; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x22C0; // CParticleCollectionFloatInput
                pub const m_flRollScale: usize = 0x2430; // CParticleCollectionFloatInput
                pub const m_nAlpha2Field: usize = 0x25A0; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x25A8; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x2C60; // ParticleColorBlendType_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderClientPhysicsImpulse = struct {
                pub const m_flRadius: usize = 0x228; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0x398; // CPerParticleFloatInput
                pub const m_nSimIdFilter: usize = 0x508; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CParticleFunctionEmitter = struct {
                pub const m_nEmitterIndex: usize = 0x1D8; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapNamedModelMeshGroupToScalar = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointOrientationToCPVelocity = struct {
                pub const m_nCPInput: usize = 0x1E0; // int32
                pub const m_nCPOutput: usize = 0x1E4; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RopeSpringConstraint = struct {
                pub const m_flRestLength: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flMinDistance: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_flMaxDistance: usize = 0x4B8; // CParticleCollectionFloatInput
                pub const m_flAdjustmentScale: usize = 0x628; // float32
                pub const m_flInitialRestingLength: usize = 0x630; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_PositionWarpScalar = struct {
                pub const m_vecWarpMin: usize = 0x1E0; // Vector
                pub const m_vecWarpMax: usize = 0x1EC; // Vector
                pub const m_InputValue: usize = 0x1F8; // CPerParticleFloatInput
                pub const m_flPrevPosScale: usize = 0x368; // float32
                pub const m_nScaleControlPointNumber: usize = 0x36C; // int32
                pub const m_nControlPointNumber: usize = 0x370; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ForceControlPointStub = struct {
                pub const m_ControlPoint: usize = 0x1E0; // int32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_VectorNoise = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1DC; // Vector
                pub const m_vecOutputMax: usize = 0x1E8; // Vector
                pub const m_fl4NoiseScale: usize = 0x1F4; // float32
                pub const m_bAdditive: usize = 0x1F8; // bool
                pub const m_bOffset: usize = 0x1F9; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1FC; // float32
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapParticleCountToScalar = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_nInputMax: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x4C0; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x630; // CParticleCollectionFloatInput
                pub const m_bActiveRange: usize = 0x7A0; // bool
                pub const m_nSetMethod: usize = 0x7A4; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_QuantizeFloat = struct {
                pub const m_InputValue: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x350; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RemapModelVolumetoCP = struct {
                pub const m_nBBoxType: usize = 0x1E0; // BBoxVolumeType_t
                pub const m_nInControlPointNumber: usize = 0x1E4; // int32
                pub const m_nOutControlPointNumber: usize = 0x1E8; // int32
                pub const m_nOutControlPointMaxNumber: usize = 0x1EC; // int32
                pub const m_nField: usize = 0x1F0; // int32
                pub const m_flInputMin: usize = 0x1F4; // float32
                pub const m_flInputMax: usize = 0x1F8; // float32
                pub const m_flOutputMin: usize = 0x1FC; // float32
                pub const m_flOutputMax: usize = 0x200; // float32
                pub const m_bBBoxOnly: usize = 0x204; // bool
                pub const m_bCubeRoot: usize = 0x205; // bool
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetToCP = struct {
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_vecOffset: usize = 0x1DC; // Vector
                pub const m_bOffsetLocal: usize = 0x1E8; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ParticleControlPointDriver_t = struct {
                pub const m_iControlPoint: usize = 0x0; // ParticleParamID_t
                pub const m_iAttachType: usize = 0x10; // ParticleAttachment_t
                pub const m_attachmentName: usize = 0x18; // CUtlString
                pub const m_vecOffset: usize = 0x20; // Vector
                pub const m_angOffset: usize = 0x2C; // QAngle
                pub const m_entityName: usize = 0x38; // CUtlString
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ParentVortices = struct {
                pub const m_flForceScale: usize = 0x1E8; // float32
                pub const m_vecTwistAxis: usize = 0x1EC; // Vector
                pub const m_bFlipBasedOnYaw: usize = 0x1F8; // bool
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetControlPointToCPVelocity = struct {
                pub const m_nCPInput: usize = 0x1E0; // int32
                pub const m_nCPOutputVel: usize = 0x1E4; // int32
                pub const m_bNormalize: usize = 0x1E8; // bool
                pub const m_nCPOutputMag: usize = 0x1EC; // int32
                pub const m_nCPField: usize = 0x1F0; // int32
                pub const m_vecComparisonVelocity: usize = 0x1F8; // CParticleCollectionVecInput
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ClientPhysics = struct {
                pub const m_strPhysicsType: usize = 0x228; // CUtlString
                pub const m_bStartAsleep: usize = 0x230; // bool
                pub const m_flPlayerWakeRadius: usize = 0x238; // CParticleCollectionFloatInput
                pub const m_flVehicleWakeRadius: usize = 0x3A8; // CParticleCollectionFloatInput
                pub const m_bUseHighQualitySimulation: usize = 0x518; // bool
                pub const m_nMaxParticleCount: usize = 0x51C; // int32
                pub const m_bRespectExclusionVolumes: usize = 0x520; // bool
                pub const m_bKillParticles: usize = 0x521; // bool
                pub const m_bDeleteSim: usize = 0x522; // bool
                pub const m_nControlPoint: usize = 0x524; // int32
                pub const m_nForcedSimId: usize = 0x528; // int32
                pub const m_nColorBlendType: usize = 0x52C; // ParticleColorBlendType_t
                pub const m_nForcedStatusEffects: usize = 0x530; // ParticleAttrBoxFlags_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SpinYaw = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PointDefinitionWithTimeValues_t = struct {
                pub const m_flTimeDuration: usize = 0x14; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const RenderProjectedMaterial_t = struct {
                pub const m_hMaterial: usize = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SetFloatAttributeToVectorExpression = struct {
                pub const m_nExpression: usize = 0x1E0; // VectorFloatExpressionType_t
                pub const m_vInput1: usize = 0x1E8; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x8A0; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0xF58; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x10C8; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x10CC; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_ExternalWindForce = struct {
                pub const m_vecSamplePosition: usize = 0x1E8; // CPerParticleVecInput
                pub const m_vecScale: usize = 0x8A0; // CPerParticleVecInput
                pub const m_bSampleWind: usize = 0xF58; // bool
                pub const m_bSampleWater: usize = 0xF59; // bool
                pub const m_bDampenNearWaterPlane: usize = 0xF5A; // bool
                pub const m_bSampleGravity: usize = 0xF5B; // bool
                pub const m_vecGravityForce: usize = 0xF60; // CPerParticleVecInput
                pub const m_bUseBasicMovementGravity: usize = 0x1618; // bool
                pub const m_flLocalGravityScale: usize = 0x1620; // CPerParticleFloatInput
                pub const m_flLocalBuoyancyScale: usize = 0x1790; // CPerParticleFloatInput
                pub const m_vecBuoyancyForce: usize = 0x1900; // CPerParticleVecInput
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_ModelCull = struct {
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_bBoundBox: usize = 0x1E4; // bool
                pub const m_bCullOutside: usize = 0x1E5; // bool
                pub const m_bUseBones: usize = 0x1E6; // bool
                pub const m_HitboxSetName: usize = 0x1E7; // char[128]
            };
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderSprites = struct {
                pub const m_nSequenceOverride: usize = 0x2DF0; // CParticleCollectionRendererFloatInput
                pub const m_bSequenceNumbersAreRawSequenceIndices: usize = 0x2F60; // bool
                pub const m_nOrientationType: usize = 0x2F64; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x2F68; // int32
                pub const m_bUseYawWithNormalAligned: usize = 0x2F6C; // bool
                pub const m_flMinSize: usize = 0x2F70; // CParticleCollectionRendererFloatInput
                pub const m_flMaxSize: usize = 0x30E0; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaAdjustWithSizeAdjust: usize = 0x3250; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeSize: usize = 0x33C0; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x3530; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeDot: usize = 0x36A0; // float32
                pub const m_flEndFadeDot: usize = 0x36A4; // float32
                pub const m_bDistanceAlpha: usize = 0x36A8; // bool
                pub const m_bSoftEdges: usize = 0x36A9; // bool
                pub const m_flEdgeSoftnessStart: usize = 0x36AC; // float32
                pub const m_flEdgeSoftnessEnd: usize = 0x36B0; // float32
                pub const m_bOutline: usize = 0x36B4; // bool
                pub const m_OutlineColor: usize = 0x36B5; // Color
                pub const m_nOutlineAlpha: usize = 0x36BC; // int32
                pub const m_flOutlineStart0: usize = 0x36C0; // float32
                pub const m_flOutlineStart1: usize = 0x36C4; // float32
                pub const m_flOutlineEnd0: usize = 0x36C8; // float32
                pub const m_flOutlineEnd1: usize = 0x36CC; // float32
                pub const m_nLightingMode: usize = 0x36D0; // ParticleLightingQuality_t
                pub const m_vecLightingOverride: usize = 0x36D8; // CParticleCollectionRendererVecInput
                pub const m_flLightingTessellation: usize = 0x3D90; // CParticleCollectionRendererFloatInput
                pub const m_flLightingDirectionality: usize = 0x3F00; // CParticleCollectionRendererFloatInput
                pub const m_bParticleShadows: usize = 0x4070; // bool
                pub const m_flShadowDensity: usize = 0x4074; // float32
                pub const m_replicationParameters: usize = 0x4078; // CReplicationParameters
            };
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_PercentageBetweenTransformLerpCPs = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_TransformStart: usize = 0x1E8; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x250; // CParticleTransformInput
                pub const m_nOutputStartCP: usize = 0x2B8; // int32
                pub const m_nOutputStartField: usize = 0x2BC; // int32
                pub const m_nOutputEndCP: usize = 0x2C0; // int32
                pub const m_nOutputEndField: usize = 0x2C4; // int32
                pub const m_nSetMethod: usize = 0x2C8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2CC; // bool
                pub const m_bRadialCheck: usize = 0x2CD; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetPerChildControlPoint = struct {
                pub const m_nChildGroupID: usize = 0x1D8; // int32
                pub const m_nFirstControlPoint: usize = 0x1DC; // int32
                pub const m_nNumControlPoints: usize = 0x1E0; // int32
                pub const m_nParticleIncrement: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_nFirstSourcePoint: usize = 0x358; // CParticleCollectionFloatInput
                pub const m_bSetOrientation: usize = 0x4C8; // bool
                pub const m_nOrientationField: usize = 0x4CC; // ParticleAttributeIndex_t
                pub const m_bNumBasedOnParticleCount: usize = 0x4D0; // bool
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderTreeShake = struct {
                pub const m_flPeakStrength: usize = 0x228; // float32
                pub const m_nPeakStrengthFieldOverride: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_flRadius: usize = 0x230; // float32
                pub const m_nRadiusFieldOverride: usize = 0x234; // ParticleAttributeIndex_t
                pub const m_flShakeDuration: usize = 0x238; // float32
                pub const m_flTransitionTime: usize = 0x23C; // float32
                pub const m_flTwistAmount: usize = 0x240; // float32
                pub const m_flRadialAmount: usize = 0x244; // float32
                pub const m_flControlPointOrientationAmount: usize = 0x248; // float32
                pub const m_nControlPointForLinearDirection: usize = 0x24C; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_WorldCollideConstraint = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_SetAttributeToScalarExpression = struct {
                pub const m_nExpression: usize = 0x1D8; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x350; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x4C0; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x630; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x634; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CycleScalar = struct {
                pub const m_nDestField: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flStartValue: usize = 0x1DC; // float32
                pub const m_flEndValue: usize = 0x1E0; // float32
                pub const m_flCycleTime: usize = 0x1E4; // float32
                pub const m_bDoNotRepeatCycle: usize = 0x1E8; // bool
                pub const m_bSynchronizeParticles: usize = 0x1E9; // bool
                pub const m_nCPScale: usize = 0x1EC; // int32
                pub const m_nCPFieldMin: usize = 0x1F0; // int32
                pub const m_nCPFieldMax: usize = 0x1F4; // int32
                pub const m_nSetMethod: usize = 0x1F8; // ParticleSetMethod_t
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RenderMaterialProxy = struct {
                pub const m_nMaterialControlPoint: usize = 0x228; // int32
                pub const m_nProxyType: usize = 0x22C; // MaterialProxyType_t
                pub const m_MaterialVars: usize = 0x230; // CUtlVector<MaterialVariable_t>
                pub const m_hOverrideMaterial: usize = 0x248; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flMaterialOverrideEnabled: usize = 0x250; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x3C0; // CParticleCollectionVecInput
                pub const m_flAlpha: usize = 0xA78; // CPerParticleFloatInput
                pub const m_nColorBlendType: usize = 0xBE8; // ParticleColorBlendType_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const FloatInputMaterialVariable_t = struct {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_flInput: usize = 0x8; // CParticleCollectionFloatInput
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RampScalarLinear = struct {
                pub const m_RateMin: usize = 0x1D8; // float32
                pub const m_RateMax: usize = 0x1DC; // float32
                pub const m_flStartTime_min: usize = 0x1E0; // float32
                pub const m_flStartTime_max: usize = 0x1E4; // float32
                pub const m_flEndTime_min: usize = 0x1E8; // float32
                pub const m_flEndTime_max: usize = 0x1EC; // float32
                pub const m_nField: usize = 0x210; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x214; // bool
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_RotateVector = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vecRotAxisMin: usize = 0x1DC; // Vector
                pub const m_vecRotAxisMax: usize = 0x1E8; // Vector
                pub const m_flRotRateMin: usize = 0x1F4; // float32
                pub const m_flRotRateMax: usize = 0x1F8; // float32
                pub const m_bNormalize: usize = 0x1FC; // bool
                pub const m_flScale: usize = 0x200; // CPerParticleFloatInput
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_InitVecCollection = struct {
                pub const m_InputValue: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_nOutputField: usize = 0x898; // ParticleAttributeIndex_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_RemapParticleCountToNamedModelMeshGroupScalar = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_INIT_SequenceFromCP = struct {
                pub const m_bKillUnused: usize = 0x1E0; // bool
                pub const m_bRadiusScale: usize = 0x1E1; // bool
                pub const m_nCP: usize = 0x1E4; // int32
                pub const m_vecOffset: usize = 0x1E8; // Vector
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_CPOffsetToPercentageBetweenCPs = struct {
                pub const m_flInputMin: usize = 0x1D8; // float32
                pub const m_flInputMax: usize = 0x1DC; // float32
                pub const m_flInputBias: usize = 0x1E0; // float32
                pub const m_nStartCP: usize = 0x1E4; // int32
                pub const m_nEndCP: usize = 0x1E8; // int32
                pub const m_nOffsetCP: usize = 0x1EC; // int32
                pub const m_nOuputCP: usize = 0x1F0; // int32
                pub const m_nInputCP: usize = 0x1F4; // int32
                pub const m_bRadialCheck: usize = 0x1F8; // bool
                pub const m_bScaleOffset: usize = 0x1F9; // bool
                pub const m_vecOffset: usize = 0x1FC; // Vector
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const C_OP_LerpEndCapScalar = struct {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1DC; // float32
                pub const m_flLerpTime: usize = 0x1E0; // float32
            };
        };
    };
};
