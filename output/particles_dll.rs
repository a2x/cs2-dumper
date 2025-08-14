// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-14 21:08:30.051873234 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: particles.dll
        // Class count: 432
        // Enum count: 68
        pub mod particles_dll {
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ParticleSetMethod_t {
                PARTICLE_SET_REPLACE_VALUE = 0x0,
                PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
                PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
                PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
                PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
                PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum Detail2Combo_t {
                DETAIL_2_COMBO_UNINITIALIZED = u32::MAX,
                DETAIL_2_COMBO_OFF = 0x0,
                DETAIL_2_COMBO_ADD = 0x1,
                DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_2_COMBO_MOD2X = 0x3,
                DETAIL_2_COMBO_MUL = 0x4,
                DETAIL_2_COMBO_CROSSFADE = 0x5
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum MissingParentInheritBehavior_t {
                MISSING_PARENT_DO_NOTHING = u32::MAX,
                MISSING_PARENT_KILL = 0x0,
                MISSING_PARENT_FIND_NEW = 0x1,
                MISSING_PARENT_SAME_INDEX = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleTraceMissBehavior_t {
                PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
                PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
                PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum PFuncVisualizationType_t {
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
            #[repr(u32)]
            pub enum ParticleVRHandChoiceList_t {
                PARTICLE_VRHAND_LEFT = 0x0,
                PARTICLE_VRHAND_RIGHT = 0x1,
                PARTICLE_VRHAND_CP = 0x2,
                PARTICLE_VRHAND_CP_OBJECT = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleReplicationMode_t {
                PARTICLE_REPLICATIONMODE_NONE = 0x0,
                PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PetGroundType_t {
                PET_GROUND_NONE = 0x0,
                PET_GROUND_GRID = 0x1,
                PET_GROUND_PLANE = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum InheritableBoolType_t {
                INHERITABLE_BOOL_INHERIT = 0x0,
                INHERITABLE_BOOL_FALSE = 0x1,
                INHERITABLE_BOOL_TRUE = 0x2
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ParticlePostProcessPriorityGroup_t {
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
                PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum ParticleCollisionGroup_t {
                PARTICLE_COLLISION_GROUP_DEFAULT = 0x4,
                PARTICLE_COLLISION_GROUP_DEBRIS = 0x5,
                PARTICLE_COLLISION_GROUP_INTERACTIVE = 0x7,
                PARTICLE_COLLISION_GROUP_PLAYER = 0x8,
                PARTICLE_COLLISION_GROUP_VEHICLE = 0xA,
                PARTICLE_COLLISION_GROUP_NPC = 0xC,
                PARTICLE_COLLISION_GROUP_PROPS = 0x18
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum ParticleColorBlendMode_t {
                PARTICLEBLEND_DEFAULT = 0x0,
                PARTICLEBLEND_OVERLAY = 0x1,
                PARTICLEBLEND_DARKEN = 0x2,
                PARTICLEBLEND_LIGHTEN = 0x3,
                PARTICLEBLEND_MULTIPLY = 0x4
            }
            // Alignment: 4
            // Member count: 13
            #[repr(u32)]
            pub enum ParticleColorBlendType_t {
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
            // Member count: 4
            #[repr(u32)]
            pub enum DetailCombo_t {
                DETAIL_COMBO_OFF = 0x0,
                DETAIL_COMBO_ADD = 0x1,
                DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_COMBO_MOD2X = 0x3
            }
            // Alignment: 4
            // Member count: 12
            #[repr(u32)]
            pub enum ScalarExpressionType_t {
                SCALAR_EXPRESSION_UNINITIALIZED = u32::MAX,
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
            #[repr(u32)]
            pub enum SpriteCardPerParticleScale_t {
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
            #[repr(u32)]
            pub enum BlurFilterType_t {
                BLURFILTER_GAUSSIAN = 0x0,
                BLURFILTER_BOX = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum StandardLightingAttenuationStyle_t {
                LIGHT_STYLE_OLD = 0x0,
                LIGHT_STYLE_NEW = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleParentSetMode_t {
                PARTICLE_SET_PARENT_NO = 0x0,
                PARTICLE_SET_PARENT_IMMEDIATE = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleLightingQuality_t {
                PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
                PARTICLE_LIGHTING_PER_VERTEX = 0x1,
                PARTICLE_LIGHTING_PER_PIXEL = u32::MAX
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum EventTypeSelection_t {
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
            #[repr(u32)]
            pub enum ParticleMassMode_t {
                PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
                PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleDirectionNoiseType_t {
                PARTICLE_DIR_NOISE_PERLIN = 0x0,
                PARTICLE_DIR_NOISE_CURL = 0x1,
                PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleHitboxBiasType_t {
                PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
                PARTICLE_HITBOX_BIAS_HITBOX = 0x1
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ParticleControlPointAxis_t {
                PARTICLE_CP_AXIS_X = 0x0,
                PARTICLE_CP_AXIS_Y = 0x1,
                PARTICLE_CP_AXIS_Z = 0x2,
                PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
                PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
                PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
            }
            // Alignment: 4
            // Member count: 12
            #[repr(u32)]
            pub enum ParticlePinDistance_t {
                PARTICLE_PIN_DISTANCE_NONE = u32::MAX,
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
            #[repr(u32)]
            pub enum VectorFloatExpressionType_t {
                VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = u32::MAX,
                VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
                VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
                VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
                VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
                VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
                VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleFogType_t {
                PARTICLE_FOG_GAME_DEFAULT = 0x0,
                PARTICLE_FOG_ENABLED = 0x1,
                PARTICLE_FOG_DISABLED = 0x2
            }
            // Alignment: 4
            // Member count: 10
            #[repr(u32)]
            pub enum VectorExpressionType_t {
                VECTOR_EXPRESSION_UNINITIALIZED = u32::MAX,
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
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleRotationLockType_t {
                PARTICLE_ROTATION_LOCK_NONE = 0x0,
                PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
                PARTICLE_ROTATION_LOCK_NORMAL = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum HitboxLerpType_t {
                HITBOX_LERP_LIFETIME = 0x0,
                HITBOX_LERP_CONSTANT = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum AnimationType_t {
                ANIMATION_TYPE_FIXED_RATE = 0x0,
                ANIMATION_TYPE_FIT_LIFETIME = 0x1,
                ANIMATION_TYPE_MANUAL_FRAMES = 0x2
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum ParticleAttrBoxFlags_t {
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
            #[repr(u32)]
            pub enum ParticleTopology_t {
                PARTICLE_TOPOLOGY_POINTS = 0x0,
                PARTICLE_TOPOLOGY_LINES = 0x1,
                PARTICLE_TOPOLOGY_TRIS = 0x2,
                PARTICLE_TOPOLOGY_QUADS = 0x3,
                PARTICLE_TOPOLOGY_CUBES = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleLightBehaviorChoiceList_t {
                PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
                PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
                PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ModelHitboxType_t {
                MODEL_HITBOX_TYPE_STANDARD = 0x0,
                MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
                MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
                MODEL_HITBOX_TYPE_SNAPSHOT = 0x3
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ParticleOrientationType_t {
                PARTICLE_ORIENTATION_NONE = 0x0,
                PARTICLE_ORIENTATION_VELOCITY = 0x1,
                PARTICLE_ORIENTATION_NORMAL = 0x2,
                PARTICLE_ORIENTATION_ROTATION = 0x4
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ParticleTraceSet_t {
                PARTICLE_TRACE_SET_ALL = 0x0,
                PARTICLE_TRACE_SET_STATIC = 0x1,
                PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
                PARTICLE_TRACE_SET_DYNAMIC = 0x3
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum ParticleTextureLayerBlendType_t {
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
            #[repr(u32)]
            pub enum ParticleSelection_t {
                PARTICLE_SELECTION_FIRST = 0x0,
                PARTICLE_SELECTION_LAST = 0x1,
                PARTICLE_SELECTION_NUMBER = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SnapshotIndexType_t {
                SNAPSHOT_INDEX_INCREMENT = 0x0,
                SNAPSHOT_INDEX_DIRECT = 0x1
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum ParticleOutputBlendMode_t {
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
            #[repr(u32)]
            pub enum ParticleLightnintBranchBehavior_t {
                PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
                PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum MaterialProxyType_t {
                MATERIAL_PROXY_STATUS_EFFECT = 0x0,
                MATERIAL_PROXY_TINT = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleDepthFeatheringMode_t {
                PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
                PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
                PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleLightUnitChoiceList_t {
                PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
                PARTICLE_LIGHT_UNIT_LUMENS = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleFalloffFunction_t {
                PARTICLE_FALLOFF_CONSTANT = 0x0,
                PARTICLE_FALLOFF_LINEAR = 0x1,
                PARTICLE_FALLOFF_EXPONENTIAL = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleSequenceCropOverride_t {
                PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = u32::MAX,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ParticleDetailLevel_t {
                PARTICLEDETAIL_LOW = 0x0,
                PARTICLEDETAIL_MEDIUM = 0x1,
                PARTICLEDETAIL_HIGH = 0x2,
                PARTICLEDETAIL_ULTRA = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum BBoxVolumeType_t {
                BBOX_VOLUME = 0x0,
                BBOX_DIMENSIONS = 0x1,
                BBOX_MINS_MAXS = 0x2
            }
            // Alignment: 4
            // Member count: 12
            #[repr(u32)]
            pub enum SpriteCardTextureType_t {
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
            #[repr(u32)]
            pub enum ParticleAlphaReferenceType_t {
                PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
                PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
            }
            // Alignment: 4
            // Member count: 15
            #[repr(u32)]
            pub enum SpriteCardTextureChannel_t {
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
            // Member count: 4
            #[repr(u32)]
            pub enum RenderModelSubModelFieldType_t {
                SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
                SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
                SUBMODEL_AS_MESHGROUP_MASK = 0x2,
                SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleHitboxDataSelection_t {
                PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
                PARTICLE_HITBOX_COUNT = 0x1
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ParticleOrientationChoiceList_t {
                PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
                PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
                PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
                PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
                PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
                PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum ParticleCollisionMode_t {
                COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
                COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
                COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
                COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
                COLLISION_MODE_DISABLED = u32::MAX
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleSortingChoiceList_t {
                PARTICLE_SORTING_NEAREST = 0x0,
                PARTICLE_SORTING_CREATION_TIME = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleEndcapMode_t {
                PARTICLE_ENDCAP_ALWAYS_ON = u32::MAX,
                PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
                PARTICLE_ENDCAP_ENDCAP_ON = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ClosestPointTestType_t {
                PARTICLE_CLOSEST_TYPE_BOX = 0x0,
                PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
                PARTICLE_CLOSEST_TYPE_HYBRID = 0x2
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ParticleImpulseType_t {
                IMPULSE_TYPE_NONE = 0x0,
                IMPULSE_TYPE_GENERIC = 0x1,
                IMPULSE_TYPE_ROPE = 0x2,
                IMPULSE_TYPE_EXPLOSION = 0x4,
                IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
                IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SpriteCardShaderType_t {
                SPRITECARD_SHADER_BASE = 0x0,
                SPRITECARD_SHADER_CUSTOM = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleOmni2LightTypeChoiceList_t {
                PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ParticleLightFogLightingMode_t {
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ParticleLightTypeChoiceList_t {
                PARTICLE_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_LIGHT_TYPE_SPOT = 0x1,
                PARTICLE_LIGHT_TYPE_FX = 0x2,
                PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum ParticleOrientationSetMode_t {
                PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
                PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1
            }
            // Alignment: 8
            // Member count: 10
            #[repr(u64)]
            pub enum ParticleCollisionMask_t {
                PARTICLE_MASK_ALL = u64::MAX,
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
            #[repr(u32)]
            pub enum TextureRepetitionMode_t {
                TEXTURE_REPETITION_PARTICLE = 0x0,
                TEXTURE_REPETITION_PATH = 0x1
            }
            // Parent: None
            // Field count: 0
            pub mod IParticleCollection {
            }
            // Parent: None
            // Field count: 1
            pub mod ParticleAttributeIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapGravityToVector {
                pub const m_vInput1: usize = 0x1C0; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x838; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x83C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x840; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Decay {
                pub const m_bRopeDecay: usize = 0x1C0; // bool
                pub const m_bForcePreserveParticleOrder: usize = 0x1C1; // bool
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderDeferredLight {
                pub const m_bUseAlphaTestWindow: usize = 0x210; // bool
                pub const m_bUseTexture: usize = 0x211; // bool
                pub const m_flRadiusScale: usize = 0x214; // float32
                pub const m_flAlphaScale: usize = 0x218; // float32
                pub const m_nAlpha2Field: usize = 0x21C; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x220; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x898; // ParticleColorBlendType_t
                pub const m_flLightDistance: usize = 0x89C; // float32
                pub const m_flStartFalloff: usize = 0x8A0; // float32
                pub const m_flDistanceFalloff: usize = 0x8A4; // float32
                pub const m_flSpotFoV: usize = 0x8A8; // float32
                pub const m_nAlphaTestPointField: usize = 0x8AC; // ParticleAttributeIndex_t
                pub const m_nAlphaTestRangeField: usize = 0x8B0; // ParticleAttributeIndex_t
                pub const m_nAlphaTestSharpnessField: usize = 0x8B4; // ParticleAttributeIndex_t
                pub const m_hTexture: usize = 0x8B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nHSVShiftControlPoint: usize = 0x8C0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapSpeedtoCP {
                pub const m_nInControlPointNumber: usize = 0x1C8; // int32
                pub const m_nOutControlPointNumber: usize = 0x1CC; // int32
                pub const m_nField: usize = 0x1D0; // int32
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_bUseDeltaV: usize = 0x1E4; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformToVelocity {
                pub const m_TransformInput: usize = 0x1C0; // CParticleTransformInput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CollisionGroupContext_t {
                pub const m_nCollisionGroupNumber: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionPreEmission {
                pub const m_bRunOnce: usize = 0x1C0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeOutSimple {
                pub const m_flFadeOutTime: usize = 0x1C0; // float32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SpringToVectorConstraint {
                pub const m_flRestLength: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flMinDistance: usize = 0x320; // CPerParticleFloatInput
                pub const m_flMaxDistance: usize = 0x480; // CPerParticleFloatInput
                pub const m_flRestingLength: usize = 0x5E0; // CPerParticleFloatInput
                pub const m_vecAnchorVector: usize = 0x740; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderRopes {
                pub const m_bEnableFadingAndClamping: usize = 0x2C18; // bool
                pub const m_flMinSize: usize = 0x2C1C; // float32
                pub const m_flMaxSize: usize = 0x2C20; // float32
                pub const m_flStartFadeSize: usize = 0x2C24; // float32
                pub const m_flEndFadeSize: usize = 0x2C28; // float32
                pub const m_flStartFadeDot: usize = 0x2C2C; // float32
                pub const m_flEndFadeDot: usize = 0x2C30; // float32
                pub const m_flRadiusTaper: usize = 0x2C34; // float32
                pub const m_nMinTesselation: usize = 0x2C38; // int32
                pub const m_nMaxTesselation: usize = 0x2C3C; // int32
                pub const m_flTessScale: usize = 0x2C40; // float32
                pub const m_flTextureVWorldSize: usize = 0x2C48; // CParticleCollectionRendererFloatInput
                pub const m_flTextureVScrollRate: usize = 0x2DA8; // CParticleCollectionRendererFloatInput
                pub const m_flTextureVOffset: usize = 0x2F08; // CParticleCollectionRendererFloatInput
                pub const m_nTextureVParamsCP: usize = 0x3068; // int32
                pub const m_bClampV: usize = 0x306C; // bool
                pub const m_nScaleCP1: usize = 0x3070; // int32
                pub const m_nScaleCP2: usize = 0x3074; // int32
                pub const m_flScaleVSizeByControlPointDistance: usize = 0x3078; // float32
                pub const m_flScaleVScrollByControlPointDistance: usize = 0x307C; // float32
                pub const m_flScaleVOffsetByControlPointDistance: usize = 0x3080; // float32
                pub const m_bUseScalarForTextureCoordinate: usize = 0x3085; // bool
                pub const m_nScalarFieldForTextureCoordinate: usize = 0x3088; // ParticleAttributeIndex_t
                pub const m_flScalarAttributeTextureCoordScale: usize = 0x308C; // float32
                pub const m_bReverseOrder: usize = 0x3090; // bool
                pub const m_bClosedLoop: usize = 0x3091; // bool
                pub const m_nOrientationType: usize = 0x3094; // ParticleOrientationChoiceList_t
                pub const m_nVectorFieldForOrientation: usize = 0x3098; // ParticleAttributeIndex_t
                pub const m_bDrawAsOpaque: usize = 0x309C; // bool
                pub const m_bGenerateNormals: usize = 0x309D; // bool
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_StatusEffectCitadel {
                pub const m_flSFXColorWarpAmount: usize = 0x1C8; // float32
                pub const m_flSFXNormalAmount: usize = 0x1CC; // float32
                pub const m_flSFXMetalnessAmount: usize = 0x1D0; // float32
                pub const m_flSFXRoughnessAmount: usize = 0x1D4; // float32
                pub const m_flSFXSelfIllumAmount: usize = 0x1D8; // float32
                pub const m_flSFXSScale: usize = 0x1DC; // float32
                pub const m_flSFXSScrollX: usize = 0x1E0; // float32
                pub const m_flSFXSScrollY: usize = 0x1E4; // float32
                pub const m_flSFXSScrollZ: usize = 0x1E8; // float32
                pub const m_flSFXSOffsetX: usize = 0x1EC; // float32
                pub const m_flSFXSOffsetY: usize = 0x1F0; // float32
                pub const m_flSFXSOffsetZ: usize = 0x1F4; // float32
                pub const m_nDetailCombo: usize = 0x1F8; // DetailCombo_t
                pub const m_flSFXSDetailAmount: usize = 0x1FC; // float32
                pub const m_flSFXSDetailScale: usize = 0x200; // float32
                pub const m_flSFXSDetailScrollX: usize = 0x204; // float32
                pub const m_flSFXSDetailScrollY: usize = 0x208; // float32
                pub const m_flSFXSDetailScrollZ: usize = 0x20C; // float32
                pub const m_flSFXSUseModelUVs: usize = 0x210; // float32
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderSound {
                pub const m_flDurationScale: usize = 0x210; // float32
                pub const m_flSndLvlScale: usize = 0x214; // float32
                pub const m_flPitchScale: usize = 0x218; // float32
                pub const m_flVolumeScale: usize = 0x21C; // float32
                pub const m_nSndLvlField: usize = 0x220; // ParticleAttributeIndex_t
                pub const m_nDurationField: usize = 0x224; // ParticleAttributeIndex_t
                pub const m_nPitchField: usize = 0x228; // ParticleAttributeIndex_t
                pub const m_nVolumeField: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_nChannel: usize = 0x230; // int32
                pub const m_nCPReference: usize = 0x234; // int32
                pub const m_pszSoundName: usize = 0x238; // char[256]
                pub const m_bSuppressStopSoundEvent: usize = 0x338; // bool
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleVisibilityInputs {
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
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointsToParticle {
                pub const m_nChildGroupID: usize = 0x1C0; // int32
                pub const m_nFirstControlPoint: usize = 0x1C4; // int32
                pub const m_nNumControlPoints: usize = 0x1C8; // int32
                pub const m_nFirstSourcePoint: usize = 0x1CC; // int32
                pub const m_bSetOrientation: usize = 0x1D0; // bool
                pub const m_nOrientationMode: usize = 0x1D4; // ParticleOrientationSetMode_t
                pub const m_nSetParent: usize = 0x1D8; // ParticleParentSetMode_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapSDFDistanceToVectorAttribute {
                pub const m_nVectorFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nVectorFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flMinDistance: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flMaxDistance: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_vValueBelowMin: usize = 0x488; // Vector
                pub const m_vValueAtMin: usize = 0x494; // Vector
                pub const m_vValueAtMax: usize = 0x4A0; // Vector
                pub const m_vValueAboveMax: usize = 0x4AC; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapCPVelocityToVector {
                pub const m_nControlPoint: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_bNormalize: usize = 0x1CC; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PointVectorAtNextParticle {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInterpolation: usize = 0x1C8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticlePreviewBodyGroup_t {
                pub const m_bodyGroupName: usize = 0x0; // CUtlString
                pub const m_nValue: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateScalarSimple {
                pub const m_Rate: usize = 0x1C0; // float32
                pub const m_Frequency: usize = 0x1C4; // float32
                pub const m_nField: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1CC; // float32
                pub const m_flOscAdd: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_StatusEffect {
                pub const m_nDetail2Combo: usize = 0x1C8; // Detail2Combo_t
                pub const m_flDetail2Rotation: usize = 0x1CC; // float32
                pub const m_flDetail2Scale: usize = 0x1D0; // float32
                pub const m_flDetail2BlendFactor: usize = 0x1D4; // float32
                pub const m_flColorWarpIntensity: usize = 0x1D8; // float32
                pub const m_flDiffuseWarpBlendToFull: usize = 0x1DC; // float32
                pub const m_flEnvMapIntensity: usize = 0x1E0; // float32
                pub const m_flAmbientScale: usize = 0x1E4; // float32
                pub const m_specularColor: usize = 0x1E8; // Color
                pub const m_flSpecularScale: usize = 0x1EC; // float32
                pub const m_flSpecularExponent: usize = 0x1F0; // float32
                pub const m_flSpecularExponentBlendToFull: usize = 0x1F4; // float32
                pub const m_flSpecularBlendToFull: usize = 0x1F8; // float32
                pub const m_rimLightColor: usize = 0x1FC; // Color
                pub const m_flRimLightScale: usize = 0x200; // float32
                pub const m_flReflectionsTintByBaseBlendToNone: usize = 0x204; // float32
                pub const m_flMetalnessBlendToFull: usize = 0x208; // float32
                pub const m_flSelfIllumBlendToFull: usize = 0x20C; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RtEnvCull {
                pub const m_vecTestDir: usize = 0x1C8; // Vector
                pub const m_vecTestNormal: usize = 0x1D4; // Vector
                pub const m_bUseVelocity: usize = 0x1E0; // bool
                pub const m_bCullOnMiss: usize = 0x1E1; // bool
                pub const m_bLifeAdjust: usize = 0x1E2; // bool
                pub const m_RtEnvName: usize = 0x1E3; // char[128]
                pub const m_nRTEnvCP: usize = 0x264; // int32
                pub const m_nComponent: usize = 0x268; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainDistance {
                pub const m_fMinDistance: usize = 0x1C0; // CParticleCollectionFloatInput
                pub const m_fMaxDistance: usize = 0x320; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0x480; // int32
                pub const m_CenterOffset: usize = 0x484; // Vector
                pub const m_bGlobalCenter: usize = 0x490; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomVector {
                pub const m_vecMin: usize = 0x1C8; // Vector
                pub const m_vecMax: usize = 0x1D4; // Vector
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_randomnessParameters: usize = 0x1E4; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialVelocityNoise {
                pub const m_vecAbsVal: usize = 0x1C8; // Vector
                pub const m_vecAbsValInv: usize = 0x1D4; // Vector
                pub const m_vecOffsetLoc: usize = 0x1E0; // CPerParticleVecInput
                pub const m_flOffset: usize = 0x858; // CPerParticleFloatInput
                pub const m_vecOutputMin: usize = 0x9B8; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x1030; // CPerParticleVecInput
                pub const m_flNoiseScale: usize = 0x16A8; // CPerParticleFloatInput
                pub const m_flNoiseScaleLoc: usize = 0x1808; // CPerParticleFloatInput
                pub const m_TransformInput: usize = 0x1968; // CParticleTransformInput
                pub const m_bIgnoreDt: usize = 0x19D0; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleChildrenInfo_t {
                pub const m_ChildRef: usize = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flDelay: usize = 0x8; // float32
                pub const m_bEndCap: usize = 0xC; // bool
                pub const m_bDisableChild: usize = 0xD; // bool
                pub const m_nDetailLevel: usize = 0x10; // ParticleDetailLevel_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapScalarOnceTimed {
                pub const m_bProportional: usize = 0x1C0; // bool
                pub const m_nFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_flRemapTime: usize = 0x1DC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelSequence {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PlaneCull {
                pub const m_nPlaneControlPoint: usize = 0x1C0; // int32
                pub const m_vecPlaneDirection: usize = 0x1C4; // Vector
                pub const m_bLocalSpace: usize = 0x1D0; // bool
                pub const m_flPlaneOffset: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityRandom {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_fSpeedMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x330; // CPerParticleFloatInput
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0x490; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0xB08; // CPerParticleVecInput
                pub const m_bIgnoreDT: usize = 0x1180; // bool
                pub const m_randomnessParameters: usize = 0x1184; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ModelDampenMovement {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_bBoundBox: usize = 0x1C4; // bool
                pub const m_bOutside: usize = 0x1C5; // bool
                pub const m_bUseBones: usize = 0x1C6; // bool
                pub const m_HitboxSetName: usize = 0x1C7; // char[128]
                pub const m_vecPosOffset: usize = 0x248; // CPerParticleVecInput
                pub const m_fDrag: usize = 0x8C0; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TwistAroundAxis {
                pub const m_fForceAmount: usize = 0x1D0; // float32
                pub const m_TwistAxis: usize = 0x1D4; // Vector
                pub const m_bLocalSpace: usize = 0x1E0; // bool
                pub const m_nControlPointNumber: usize = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TeleportBeam {
                pub const m_nCPPosition: usize = 0x1C0; // int32
                pub const m_nCPVelocity: usize = 0x1C4; // int32
                pub const m_nCPMisc: usize = 0x1C8; // int32
                pub const m_nCPColor: usize = 0x1CC; // int32
                pub const m_nCPInvalidColor: usize = 0x1D0; // int32
                pub const m_nCPExtraArcData: usize = 0x1D4; // int32
                pub const m_vGravity: usize = 0x1D8; // Vector
                pub const m_flArcMaxDuration: usize = 0x1E4; // float32
                pub const m_flSegmentBreak: usize = 0x1E8; // float32
                pub const m_flArcSpeed: usize = 0x1EC; // float32
                pub const m_flAlpha: usize = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapExternalWindToCP {
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_nCPOutput: usize = 0x1CC; // int32
                pub const m_vecScale: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_bSetMagnitude: usize = 0x848; // bool
                pub const m_nOutVectorField: usize = 0x84C; // int32
            }
            // Parent: None
            // Field count: 65
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseRendererSource2 {
                pub const m_flRadiusScale: usize = 0x210; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaScale: usize = 0x370; // CParticleCollectionRendererFloatInput
                pub const m_flRollScale: usize = 0x4D0; // CParticleCollectionRendererFloatInput
                pub const m_nAlpha2Field: usize = 0x630; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x638; // CParticleCollectionRendererVecInput
                pub const m_nColorBlendType: usize = 0xCB0; // ParticleColorBlendType_t
                pub const m_nShaderType: usize = 0xCB4; // SpriteCardShaderType_t
                pub const m_strShaderOverride: usize = 0xCB8; // CUtlString
                pub const m_flCenterXOffset: usize = 0xCC0; // CParticleCollectionRendererFloatInput
                pub const m_flCenterYOffset: usize = 0xE20; // CParticleCollectionRendererFloatInput
                pub const m_flBumpStrength: usize = 0xF80; // float32
                pub const m_nCropTextureOverride: usize = 0xF84; // ParticleSequenceCropOverride_t
                pub const m_vecTexturesInput: usize = 0xF88; // CUtlLeanVector<TextureGroup_t>
                pub const m_flAnimationRate: usize = 0xF98; // float32
                pub const m_nAnimationType: usize = 0xF9C; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0xFA0; // bool
                pub const m_flMotionVectorScaleU: usize = 0xFA8; // CParticleCollectionRendererFloatInput
                pub const m_flMotionVectorScaleV: usize = 0x1108; // CParticleCollectionRendererFloatInput
                pub const m_flSelfIllumAmount: usize = 0x1268; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseAmount: usize = 0x13C8; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseClamp: usize = 0x1528; // CParticleCollectionRendererFloatInput
                pub const m_nLightingControlPoint: usize = 0x1688; // int32
                pub const m_nSelfIllumPerParticle: usize = 0x168C; // ParticleAttributeIndex_t
                pub const m_nOutputBlendMode: usize = 0x1690; // ParticleOutputBlendMode_t
                pub const m_bGammaCorrectVertexColors: usize = 0x1694; // bool
                pub const m_bSaturateColorPreAlphaBlend: usize = 0x1695; // bool
                pub const m_flAddSelfAmount: usize = 0x1698; // CParticleCollectionRendererFloatInput
                pub const m_flDesaturation: usize = 0x17F8; // CParticleCollectionRendererFloatInput
                pub const m_flOverbrightFactor: usize = 0x1958; // CParticleCollectionRendererFloatInput
                pub const m_nHSVShiftControlPoint: usize = 0x1AB8; // int32
                pub const m_nFogType: usize = 0x1ABC; // ParticleFogType_t
                pub const m_flFogAmount: usize = 0x1AC0; // CParticleCollectionRendererFloatInput
                pub const m_bTintByFOW: usize = 0x1C20; // bool
                pub const m_bTintByGlobalLight: usize = 0x1C21; // bool
                pub const m_nPerParticleAlphaReference: usize = 0x1C24; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleAlphaRefWindow: usize = 0x1C28; // SpriteCardPerParticleScale_t
                pub const m_nAlphaReferenceType: usize = 0x1C2C; // ParticleAlphaReferenceType_t
                pub const m_flAlphaReferenceSoftness: usize = 0x1C30; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToZero: usize = 0x1D90; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToOne: usize = 0x1EF0; // CParticleCollectionRendererFloatInput
                pub const m_bRefract: usize = 0x2050; // bool
                pub const m_bRefractSolid: usize = 0x2051; // bool
                pub const m_flRefractAmount: usize = 0x2058; // CParticleCollectionRendererFloatInput
                pub const m_nRefractBlurRadius: usize = 0x21B8; // int32
                pub const m_nRefractBlurType: usize = 0x21BC; // BlurFilterType_t
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x21C0; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x21C1; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x21C2; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x21C3; // bool
                pub const m_stencilTestID: usize = 0x21C4; // char[128]
                pub const m_bStencilTestExclude: usize = 0x2244; // bool
                pub const m_stencilWriteID: usize = 0x2245; // char[128]
                pub const m_bWriteStencilOnDepthPass: usize = 0x22C5; // bool
                pub const m_bWriteStencilOnDepthFail: usize = 0x22C6; // bool
                pub const m_bReverseZBuffering: usize = 0x22C7; // bool
                pub const m_bDisableZBuffering: usize = 0x22C8; // bool
                pub const m_nFeatheringMode: usize = 0x22CC; // ParticleDepthFeatheringMode_t
                pub const m_flFeatheringMinDist: usize = 0x22D0; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringMaxDist: usize = 0x2430; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringFilter: usize = 0x2590; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringDepthMapFilter: usize = 0x26F0; // CParticleCollectionRendererFloatInput
                pub const m_flDepthBias: usize = 0x2850; // CParticleCollectionRendererFloatInput
                pub const m_nSortMethod: usize = 0x29B0; // ParticleSortingChoiceList_t
                pub const m_bBlendFramesSeq0: usize = 0x29B4; // bool
                pub const m_bMaxLuminanceBlendingSequence0: usize = 0x29B5; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSpinUpdateBase {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OrientTo2dDirection {
                pub const m_flRotOffset: usize = 0x1C0; // float32
                pub const m_flSpinStrength: usize = 0x1C4; // float32
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDotProductToCP {
                pub const m_nInputCP1: usize = 0x1C8; // int32
                pub const m_nInputCP2: usize = 0x1CC; // int32
                pub const m_nOutputCP: usize = 0x1D0; // int32
                pub const m_nOutVectorField: usize = 0x1D4; // int32
                pub const m_flInputMin: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flInputMax: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x498; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x5F8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelElementScalar {
                pub const m_hModel: usize = 0x1F8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_outputMinName: usize = 0x200; // CUtlString
                pub const m_outputMaxName: usize = 0x208; // CUtlString
                pub const m_bModelFromRenderer: usize = 0x210; // bool
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderTrails {
                pub const m_bEnableFadingAndClamping: usize = 0x2EF0; // bool
                pub const m_flStartFadeDot: usize = 0x2EF4; // float32
                pub const m_flEndFadeDot: usize = 0x2EF8; // float32
                pub const m_nPrevPntSource: usize = 0x2EFC; // ParticleAttributeIndex_t
                pub const m_flMaxLength: usize = 0x2F00; // float32
                pub const m_flMinLength: usize = 0x2F04; // float32
                pub const m_bIgnoreDT: usize = 0x2F08; // bool
                pub const m_flConstrainRadiusToLengthRatio: usize = 0x2F0C; // float32
                pub const m_flLengthScale: usize = 0x2F10; // float32
                pub const m_flLengthFadeInTime: usize = 0x2F14; // float32
                pub const m_flRadiusHeadTaper: usize = 0x2F18; // CPerParticleFloatInput
                pub const m_vecHeadColorScale: usize = 0x3078; // CParticleCollectionVecInput
                pub const m_flHeadAlphaScale: usize = 0x36F0; // CPerParticleFloatInput
                pub const m_flRadiusTaper: usize = 0x3850; // CPerParticleFloatInput
                pub const m_vecTailColorScale: usize = 0x39B0; // CParticleCollectionVecInput
                pub const m_flTailAlphaScale: usize = 0x4028; // CPerParticleFloatInput
                pub const m_nHorizCropField: usize = 0x4188; // ParticleAttributeIndex_t
                pub const m_nVertCropField: usize = 0x418C; // ParticleAttributeIndex_t
                pub const m_flForwardShift: usize = 0x4190; // float32
                pub const m_bFlipUVBasedOnPitchYaw: usize = 0x4194; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointPositionToTimeOfDayValue {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_pszTimeOfDayParameter: usize = 0x1CC; // char[128]
                pub const m_vecDefaultValue: usize = 0x24C; // Vector
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DecayMaintainCount {
                pub const m_nParticlesToMaintain: usize = 0x1C0; // int32
                pub const m_flDecayDelay: usize = 0x1C4; // float32
                pub const m_nSnapshotControlPoint: usize = 0x1C8; // int32
                pub const m_bLifespanDecay: usize = 0x1CC; // bool
                pub const m_flScale: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bKillNewest: usize = 0x330; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomModelSequence {
                pub const m_ActivityName: usize = 0x1C8; // char[256]
                pub const m_SequenceName: usize = 0x2C8; // char[256]
                pub const m_hModel: usize = 0x3C8; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ExternalGameImpulseForce {
                pub const m_flForceScale: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_bRopes: usize = 0x330; // bool
                pub const m_bRopesZOnly: usize = 0x331; // bool
                pub const m_bExplosions: usize = 0x332; // bool
                pub const m_bParticles: usize = 0x333; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapAverageHitboxSpeedtoCP {
                pub const m_nInControlPointNumber: usize = 0x1C8; // int32
                pub const m_nOutControlPointNumber: usize = 0x1CC; // int32
                pub const m_nField: usize = 0x1D0; // int32
                pub const m_nHitboxDataType: usize = 0x1D4; // ParticleHitboxDataSelection_t
                pub const m_flInputMin: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flInputMax: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x498; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x5F8; // CParticleCollectionFloatInput
                pub const m_nHeightControlPointNumber: usize = 0x758; // int32
                pub const m_vecComparisonVelocity: usize = 0x760; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0xDD8; // char[128]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomAlpha {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nAlphaMin: usize = 0x1CC; // int32
                pub const m_nAlphaMax: usize = 0x1D0; // int32
                pub const m_flAlphaRandExponent: usize = 0x1DC; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_NormalizeVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1C4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeInSimple {
                pub const m_flFadeInTime: usize = 0x1C0; // float32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RepeatedTriggerChildGroup {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_flClusterRefireTime: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flClusterSize: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_flClusterCooldown: usize = 0x490; // CParticleCollectionFloatInput
                pub const m_bLimitChildCount: usize = 0x5F0; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapVelocityToVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1C4; // float32
                pub const m_bNormalize: usize = 0x1C8; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetHitboxToClosest {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nDesiredHitbox: usize = 0x1CC; // int32
                pub const m_vecHitBoxScale: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x848; // char[128]
                pub const m_bUseBones: usize = 0x8C8; // bool
                pub const m_bUseClosestPointOnHitbox: usize = 0x8C9; // bool
                pub const m_nTestType: usize = 0x8CC; // ClosestPointTestType_t
                pub const m_flHybridRatio: usize = 0x8D0; // CParticleCollectionFloatInput
                pub const m_bUpdatePosition: usize = 0xA30; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RingWave {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_flParticlesPerOrbit: usize = 0x230; // CParticleCollectionFloatInput
                pub const m_flInitialRadius: usize = 0x390; // CPerParticleFloatInput
                pub const m_flThickness: usize = 0x4F0; // CPerParticleFloatInput
                pub const m_flInitialSpeedMin: usize = 0x650; // CPerParticleFloatInput
                pub const m_flInitialSpeedMax: usize = 0x7B0; // CPerParticleFloatInput
                pub const m_flRoll: usize = 0x910; // CPerParticleFloatInput
                pub const m_flPitch: usize = 0xA70; // CPerParticleFloatInput
                pub const m_flYaw: usize = 0xBD0; // CPerParticleFloatInput
                pub const m_bEvenDistribution: usize = 0xD30; // bool
                pub const m_bXYVelocityOnly: usize = 0xD31; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomTrailLength {
                pub const m_flMinLength: usize = 0x1C8; // float32
                pub const m_flMaxLength: usize = 0x1CC; // float32
                pub const m_flLengthRandExponent: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapScalar {
                pub const m_nFieldInput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // float32
                pub const m_flInputMax: usize = 0x1CC; // float32
                pub const m_flOutputMin: usize = 0x1D0; // float32
                pub const m_flOutputMax: usize = 0x1D4; // float32
                pub const m_bOldCode: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DistanceBetweenTransforms {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_TransformStart: usize = 0x1C8; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x230; // CParticleTransformInput
                pub const m_flInputMin: usize = 0x298; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x3F8; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x558; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x6B8; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x818; // float32
                pub const m_flLOSScale: usize = 0x81C; // float32
                pub const m_CollisionGroupName: usize = 0x820; // char[128]
                pub const m_nTraceSet: usize = 0x8A0; // ParticleTraceSet_t
                pub const m_bLOS: usize = 0x8A4; // bool
                pub const m_nSetMethod: usize = 0x8A8; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DecayOffscreen {
                pub const m_flOffscreenTime: usize = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateSequentialPath {
                pub const m_fMaxDistance: usize = 0x1C8; // float32
                pub const m_flNumToAssign: usize = 0x1CC; // float32
                pub const m_bLoop: usize = 0x1D0; // bool
                pub const m_bCPPairs: usize = 0x1D1; // bool
                pub const m_bSaveOffset: usize = 0x1D2; // bool
                pub const m_PathParams: usize = 0x1E0; // CPathParameters
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EndCapTimedDecay {
                pub const m_flDecayTime: usize = 0x1C0; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDistanceToLineSegmentBase {
                pub const m_nCP0: usize = 0x1C0; // int32
                pub const m_nCP1: usize = 0x1C4; // int32
                pub const m_flMinInputValue: usize = 0x1C8; // float32
                pub const m_flMaxInputValue: usize = 0x1CC; // float32
                pub const m_bInfiniteLine: usize = 0x1D0; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ContinuousEmitter {
                pub const m_flEmissionDuration: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_flEmitRate: usize = 0x488; // CParticleCollectionFloatInput
                pub const m_flEmissionScale: usize = 0x5E8; // float32
                pub const m_flScalePerParentParticle: usize = 0x5EC; // float32
                pub const m_bInitFromKilledParentParticles: usize = 0x5F0; // bool
                pub const m_nEventType: usize = 0x5F4; // EventTypeSelection_t
                pub const m_nSnapshotControlPoint: usize = 0x5F8; // int32
                pub const m_strSnapshotSubset: usize = 0x600; // CUtlString
                pub const m_nLimitPerUpdate: usize = 0x608; // int32
                pub const m_bForceEmitOnFirstUpdate: usize = 0x60C; // bool
                pub const m_bForceEmitOnLastUpdate: usize = 0x60D; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateVectorSimple {
                pub const m_Rate: usize = 0x1C0; // Vector
                pub const m_Frequency: usize = 0x1CC; // Vector
                pub const m_nField: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1DC; // float32
                pub const m_flOscAdd: usize = 0x1E0; // float32
                pub const m_bOffset: usize = 0x1E4; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SequenceLifeTime {
                pub const m_flFramerate: usize = 0x1C8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_MoveBetweenPoints {
                pub const m_flSpeedMin: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flSpeedMax: usize = 0x328; // CPerParticleFloatInput
                pub const m_flEndSpread: usize = 0x488; // CPerParticleFloatInput
                pub const m_flStartOffset: usize = 0x5E8; // CPerParticleFloatInput
                pub const m_flEndOffset: usize = 0x748; // CPerParticleFloatInput
                pub const m_nEndControlPointNumber: usize = 0x8A8; // int32
                pub const m_bTrailBias: usize = 0x8AC; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapScalar {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
                pub const m_flStartTime: usize = 0x1E0; // float32
                pub const m_flEndTime: usize = 0x1E4; // float32
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1EC; // bool
                pub const m_flRemapBias: usize = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetUserEvent {
                pub const m_flInput: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flRisingEdge: usize = 0x320; // CPerParticleFloatInput
                pub const m_nRisingEventType: usize = 0x480; // EventTypeSelection_t
                pub const m_flFallingEdge: usize = 0x488; // CPerParticleFloatInput
                pub const m_nFallingEventType: usize = 0x5E8; // EventTypeSelection_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_QuantizeFloat {
                pub const m_InputValue: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x320; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_BasicMovement {
                pub const m_Gravity: usize = 0x1C0; // CParticleCollectionVecInput
                pub const m_fDrag: usize = 0x838; // CParticleCollectionFloatInput
                pub const m_massControls: usize = 0x998; // CParticleMassCalculationParameters
                pub const m_nMaxConstraintPasses: usize = 0xDC0; // int32
                pub const m_bUseNewCode: usize = 0xDC4; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelElement {
                pub const m_hModel: usize = 0x1C8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1D0; // CUtlVector<CUtlString>
                pub const m_bShuffle: usize = 0x1E8; // bool
                pub const m_bLinear: usize = 0x1E9; // bool
                pub const m_bModelFromRenderer: usize = 0x1EA; // bool
                pub const m_nFieldOutput: usize = 0x1EC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFromParentKilled {
                pub const m_nAttributeToCopy: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nEventType: usize = 0x1CC; // EventTypeSelection_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Callback {
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunction {
                pub const m_flOpStrength: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_nOpEndCapState: usize = 0x168; // ParticleEndcapMode_t
                pub const m_flOpStartFadeInTime: usize = 0x16C; // float32
                pub const m_flOpEndFadeInTime: usize = 0x170; // float32
                pub const m_flOpStartFadeOutTime: usize = 0x174; // float32
                pub const m_flOpEndFadeOutTime: usize = 0x178; // float32
                pub const m_flOpFadeOscillatePeriod: usize = 0x17C; // float32
                pub const m_bNormalizeToStopTime: usize = 0x180; // bool
                pub const m_flOpTimeOffsetMin: usize = 0x184; // float32
                pub const m_flOpTimeOffsetMax: usize = 0x188; // float32
                pub const m_nOpTimeOffsetSeed: usize = 0x18C; // int32
                pub const m_nOpTimeScaleSeed: usize = 0x190; // int32
                pub const m_flOpTimeScaleMin: usize = 0x194; // float32
                pub const m_flOpTimeScaleMax: usize = 0x198; // float32
                pub const m_bDisableOperator: usize = 0x19E; // bool
                pub const m_Notes: usize = 0x1A0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_GlobalLight {
                pub const m_flScale: usize = 0x1C0; // float32
                pub const m_bClampLowerRange: usize = 0x1C4; // bool
                pub const m_bClampUpperRange: usize = 0x1C5; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_OffsetVectorToVector {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1D0; // Vector
                pub const m_vecOutputMax: usize = 0x1DC; // Vector
                pub const m_randomnessParameters: usize = 0x1E8; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetPerChildControlPointFromAttribute {
                pub const m_nChildGroupID: usize = 0x1C0; // int32
                pub const m_nFirstControlPoint: usize = 0x1C4; // int32
                pub const m_nNumControlPoints: usize = 0x1C8; // int32
                pub const m_nParticleIncrement: usize = 0x1CC; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D0; // int32
                pub const m_bNumBasedOnParticleCount: usize = 0x1D4; // bool
                pub const m_nAttributeToRead: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nCPField: usize = 0x1DC; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetParentControlPointsToChildCP {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_nChildControlPoint: usize = 0x1CC; // int32
                pub const m_nNumControlPoints: usize = 0x1D0; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D4; // int32
                pub const m_bSetOrientation: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SDFForce {
                pub const m_flForceScale: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_BoxConstraint {
                pub const m_vecMin: usize = 0x1C0; // CParticleCollectionVecInput
                pub const m_vecMax: usize = 0x838; // CParticleCollectionVecInput
                pub const m_nCP: usize = 0xEB0; // int32
                pub const m_bLocalSpace: usize = 0xEB4; // bool
                pub const m_bAccountForRadius: usize = 0xEB5; // bool
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreatePhyllotaxis {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nScaleCP: usize = 0x1CC; // int32
                pub const m_nComponent: usize = 0x1D0; // int32
                pub const m_fRadCentCore: usize = 0x1D4; // float32
                pub const m_fRadPerPoint: usize = 0x1D8; // float32
                pub const m_fRadPerPointTo: usize = 0x1DC; // float32
                pub const m_fpointAngle: usize = 0x1E0; // float32
                pub const m_fsizeOverall: usize = 0x1E4; // float32
                pub const m_fRadBias: usize = 0x1E8; // float32
                pub const m_fMinRad: usize = 0x1EC; // float32
                pub const m_fDistBias: usize = 0x1F0; // float32
                pub const m_bUseLocalCoords: usize = 0x1F4; // bool
                pub const m_bUseWithContEmit: usize = 0x1F5; // bool
                pub const m_bUseOrigRadius: usize = 0x1F6; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_AttractToControlPoint {
                pub const m_vecComponentScale: usize = 0x1D0; // Vector
                pub const m_fForceAmount: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_fFalloffPower: usize = 0x340; // float32
                pub const m_TransformInput: usize = 0x348; // CParticleTransformInput
                pub const m_fForceAmountMin: usize = 0x3B0; // CPerParticleFloatInput
                pub const m_bApplyMinForce: usize = 0x510; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomLifeTime {
                pub const m_fLifetimeMin: usize = 0x1C8; // float32
                pub const m_fLifetimeMax: usize = 0x1CC; // float32
                pub const m_fLifetimeRandExponent: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelSequenceScalar {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityRadialRandom {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_fSpeedMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x330; // CPerParticleFloatInput
                pub const m_vecLocalCoordinateSystemSpeedScale: usize = 0x490; // Vector
                pub const m_bIgnoreDelta: usize = 0x49D; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomRadius {
                pub const m_flRadiusMin: usize = 0x1C8; // float32
                pub const m_flRadiusMax: usize = 0x1CC; // float32
                pub const m_flRadiusRandExponent: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Orient2DRelToCP {
                pub const m_flRotOffset: usize = 0x1C0; // float32
                pub const m_flSpinStrength: usize = 0x1C4; // float32
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TextureControls_t {
                pub const m_flFinalTextureScaleU: usize = 0x0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureScaleV: usize = 0x160; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetU: usize = 0x2C0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetV: usize = 0x420; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureUVRotation: usize = 0x580; // CParticleCollectionRendererFloatInput
                pub const m_flZoomScale: usize = 0x6E0; // CParticleCollectionRendererFloatInput
                pub const m_flDistortion: usize = 0x840; // CParticleCollectionRendererFloatInput
                pub const m_bRandomizeOffsets: usize = 0x9A0; // bool
                pub const m_bClampUVs: usize = 0x9A1; // bool
                pub const m_nPerParticleBlend: usize = 0x9A4; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleScale: usize = 0x9A8; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetU: usize = 0x9AC; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetV: usize = 0x9B0; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleRotation: usize = 0x9B4; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleZoom: usize = 0x9B8; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleDistortion: usize = 0x9BC; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ControlPointReference_t {
                pub const m_controlPointNameString: usize = 0x0; // int32
                pub const m_vOffsetFromControlPoint: usize = 0x4; // Vector
                pub const m_bOffsetInLocalSpace: usize = 0x10; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToVectorExpression {
                pub const m_nExpression: usize = 0x1C8; // VectorExpressionType_t
                pub const m_nOutputCP: usize = 0x1CC; // int32
                pub const m_vInput1: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_vInput2: usize = 0x848; // CParticleCollectionVecInput
                pub const m_flLerp: usize = 0xEC0; // CPerParticleFloatInput
                pub const m_bNormalizedOutput: usize = 0x1020; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LightningSnapshotGenerator {
                pub const m_nCPSnapshot: usize = 0x1C8; // int32
                pub const m_nCPStartPnt: usize = 0x1CC; // int32
                pub const m_nCPEndPnt: usize = 0x1D0; // int32
                pub const m_flSegments: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flOffset: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flOffsetDecay: usize = 0x498; // CParticleCollectionFloatInput
                pub const m_flRecalcRate: usize = 0x5F8; // CParticleCollectionFloatInput
                pub const m_flUVScale: usize = 0x758; // CParticleCollectionFloatInput
                pub const m_flUVOffset: usize = 0x8B8; // CParticleCollectionFloatInput
                pub const m_flSplitRate: usize = 0xA18; // CParticleCollectionFloatInput
                pub const m_flBranchTwist: usize = 0xB78; // CParticleCollectionFloatInput
                pub const m_nBranchBehavior: usize = 0xCD8; // ParticleLightnintBranchBehavior_t
                pub const m_flRadiusStart: usize = 0xCE0; // CParticleCollectionFloatInput
                pub const m_flRadiusEnd: usize = 0xE40; // CParticleCollectionFloatInput
                pub const m_flDedicatedPool: usize = 0xFA0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelMeshGroupOnceTimed {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapSpeedToScalar {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_flStartTime: usize = 0x1D0; // float32
                pub const m_flEndTime: usize = 0x1D4; // float32
                pub const m_flInputMin: usize = 0x1D8; // float32
                pub const m_flInputMax: usize = 0x1DC; // float32
                pub const m_flOutputMin: usize = 0x1E0; // float32
                pub const m_flOutputMax: usize = 0x1E4; // float32
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
                pub const m_bPerParticle: usize = 0x1EC; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapQAnglesToRotation {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionWarp {
                pub const m_vecWarpMin: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_vecWarpMax: usize = 0x840; // CParticleCollectionVecInput
                pub const m_nScaleControlPointNumber: usize = 0xEB8; // int32
                pub const m_nControlPointNumber: usize = 0xEBC; // int32
                pub const m_nRadiusComponent: usize = 0xEC0; // int32
                pub const m_flWarpTime: usize = 0xEC4; // float32
                pub const m_flWarpStartTime: usize = 0xEC8; // float32
                pub const m_flPrevPosScale: usize = 0xECC; // float32
                pub const m_bInvertWarp: usize = 0xED0; // bool
                pub const m_bUseCount: usize = 0xED1; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SDFConstraint {
                pub const m_flMinDist: usize = 0x1C0; // CParticleCollectionFloatInput
                pub const m_flMaxDist: usize = 0x320; // CParticleCollectionFloatInput
                pub const m_nMaxIterations: usize = 0x480; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointFieldToScalarExpression {
                pub const m_nExpression: usize = 0x1C8; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flInput2: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_flOutputRemap: usize = 0x490; // CParticleRemapFloatInput
                pub const m_nOutputCP: usize = 0x5F0; // int32
                pub const m_nOutVectorField: usize = 0x5F4; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionForce {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomVectorComponent {
                pub const m_flMin: usize = 0x1C8; // float32
                pub const m_flMax: usize = 0x1CC; // float32
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1D4; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub mod C_OP_InheritFromParentParticles {
                pub const m_flScale: usize = 0x1C0; // float32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1C8; // int32
                pub const m_bRandomDistribution: usize = 0x1CC; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetVectorAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1C8; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x848; // CPerParticleVecInput
                pub const m_flLerp: usize = 0xEC0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x1020; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x1024; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x1028; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformVisibilityToVector {
                pub const m_nSetMethod: usize = 0x1C0; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x234; // float32
                pub const m_flInputMax: usize = 0x238; // float32
                pub const m_vecOutputMin: usize = 0x23C; // Vector
                pub const m_vecOutputMax: usize = 0x248; // Vector
                pub const m_flRadius: usize = 0x254; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DirectionBetweenVecsToVec {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecPoint1: usize = 0x1C8; // CPerParticleVecInput
                pub const m_vecPoint2: usize = 0x840; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementLoopInsideSphere {
                pub const m_nCP: usize = 0x1C0; // int32
                pub const m_flDistance: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_vecScale: usize = 0x328; // CParticleCollectionVecInput
                pub const m_nDistSqrAttr: usize = 0x9A0; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderSimpleModelCollection {
                pub const m_bCenterOffset: usize = 0x210; // bool
                pub const m_hModel: usize = 0x218; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_modelInput: usize = 0x220; // CParticleModelInput
                pub const m_fSizeCullScale: usize = 0x280; // CParticleCollectionFloatInput
                pub const m_bDisableShadows: usize = 0x3E0; // bool
                pub const m_bDisableMotionBlur: usize = 0x3E1; // bool
                pub const m_bAcceptsDecals: usize = 0x3E2; // bool
                pub const m_fDrawFilter: usize = 0x3E8; // CPerParticleFloatInput
                pub const m_nAngularVelocityField: usize = 0x548; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_QuantizeCPComponent {
                pub const m_flInputValue: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nCPOutput: usize = 0x328; // int32
                pub const m_nOutVectorField: usize = 0x32C; // int32
                pub const m_flQuantizeValue: usize = 0x330; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PlayEndCapWhenFinished {
                pub const m_bFireOnEmissionEnd: usize = 0x1C8; // bool
                pub const m_bIncludeChildren: usize = 0x1C9; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFloatCollection {
                pub const m_InputValue: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x328; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathParameters {
                pub const m_nStartControlPointNumber: usize = 0x0; // int32
                pub const m_nEndControlPointNumber: usize = 0x4; // int32
                pub const m_nBulgeControl: usize = 0x8; // int32
                pub const m_flBulge: usize = 0xC; // float32
                pub const m_flMidPoint: usize = 0x10; // float32
                pub const m_vStartPointOffset: usize = 0x14; // Vector
                pub const m_vMidPointOffset: usize = 0x20; // Vector
                pub const m_vEndOffset: usize = 0x2C; // Vector
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapScalarEndCap {
                pub const m_nFieldInput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // float32
                pub const m_flInputMax: usize = 0x1CC; // float32
                pub const m_flOutputMin: usize = 0x1D0; // float32
                pub const m_flOutputMax: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateFromPlaneCache {
                pub const m_vecOffsetMin: usize = 0x1C8; // Vector
                pub const m_vecOffsetMax: usize = 0x1D4; // Vector
                pub const m_bUseNormal: usize = 0x1E1; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LazyCullCompareFloat {
                pub const m_flComparsion1: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flComparsion2: usize = 0x320; // CPerParticleFloatInput
                pub const m_flCullTime: usize = 0x480; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ControlPointToRadialScreenSpace {
                pub const m_nCPIn: usize = 0x1C8; // int32
                pub const m_vecCP1Pos: usize = 0x1CC; // Vector
                pub const m_nCPOut: usize = 0x1D8; // int32
                pub const m_nCPOutField: usize = 0x1DC; // int32
                pub const m_nCPSSPosOut: usize = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SpinUpdate {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_NormalOffset {
                pub const m_OffsetMin: usize = 0x1C8; // Vector
                pub const m_OffsetMax: usize = 0x1D4; // Vector
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_bLocalCoords: usize = 0x1E4; // bool
                pub const m_bNormalize: usize = 0x1E5; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDistanceToLineSegmentToVector {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vMinOutputValue: usize = 0x1DC; // Vector
                pub const m_vMaxOutputValue: usize = 0x1E8; // Vector
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderAsModels {
                pub const m_ModelList: usize = 0x210; // CUtlVector<ModelReference_t>
                pub const m_flModelScale: usize = 0x22C; // float32
                pub const m_bFitToModelSize: usize = 0x230; // bool
                pub const m_bNonUniformScaling: usize = 0x231; // bool
                pub const m_nXAxisScalingAttribute: usize = 0x234; // ParticleAttributeIndex_t
                pub const m_nYAxisScalingAttribute: usize = 0x238; // ParticleAttributeIndex_t
                pub const m_nZAxisScalingAttribute: usize = 0x23C; // ParticleAttributeIndex_t
                pub const m_nSizeCullBloat: usize = 0x240; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreationNoise {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_bAbsVal: usize = 0x1CC; // bool
                pub const m_bAbsValInv: usize = 0x1CD; // bool
                pub const m_flOffset: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_flNoiseScale: usize = 0x1DC; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1E0; // float32
                pub const m_vecOffsetLoc: usize = 0x1E4; // Vector
                pub const m_flWorldTimeScale: usize = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Spin {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_InstantaneousEmitter {
                pub const m_nParticlesToEmit: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_flInitFromKilledParentParticles: usize = 0x488; // float32
                pub const m_nEventType: usize = 0x48C; // EventTypeSelection_t
                pub const m_flParentParticleScale: usize = 0x490; // CParticleCollectionFloatInput
                pub const m_nMaxEmittedPerFrame: usize = 0x5F0; // int32
                pub const m_nSnapshotControlPoint: usize = 0x5F4; // int32
                pub const m_strSnapshotSubset: usize = 0x5F8; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainLineLength {
                pub const m_flMinDistance: usize = 0x1C0; // float32
                pub const m_flMaxDistance: usize = 0x1C4; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_LifespanFromVelocity {
                pub const m_vecComponentScale: usize = 0x1C8; // Vector
                pub const m_flTraceOffset: usize = 0x1D4; // float32
                pub const m_flMaxTraceLength: usize = 0x1D8; // float32
                pub const m_flTraceTolerance: usize = 0x1DC; // float32
                pub const m_nMaxPlanes: usize = 0x1E0; // int32
                pub const m_CollisionGroupName: usize = 0x1E8; // char[128]
                pub const m_nTraceSet: usize = 0x268; // ParticleTraceSet_t
                pub const m_bIncludeWater: usize = 0x278; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseTrailRenderer {
                pub const m_nOrientationType: usize = 0x2C18; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x2C1C; // int32
                pub const m_flMinSize: usize = 0x2C20; // float32
                pub const m_flMaxSize: usize = 0x2C24; // float32
                pub const m_flStartFadeSize: usize = 0x2C28; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x2D88; // CParticleCollectionRendererFloatInput
                pub const m_bClampV: usize = 0x2EE8; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityFromCP {
                pub const m_velocityInput: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x840; // CParticleTransformInput
                pub const m_flVelocityScale: usize = 0x8A8; // float32
                pub const m_bDirectionOnly: usize = 0x8AC; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointOrientation {
                pub const m_bUseWorldLocation: usize = 0x1C8; // bool
                pub const m_bRandomize: usize = 0x1CA; // bool
                pub const m_bSetOnce: usize = 0x1CB; // bool
                pub const m_nCP: usize = 0x1CC; // int32
                pub const m_nHeadLocation: usize = 0x1D0; // int32
                pub const m_vecRotation: usize = 0x1D4; // QAngle
                pub const m_vecRotationB: usize = 0x1E0; // QAngle
                pub const m_flInterpolation: usize = 0x1F0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementSkinnedPositionFromCPSnapshot {
                pub const m_nSnapshotControlPointNumber: usize = 0x1C0; // int32
                pub const m_nControlPointNumber: usize = 0x1C4; // int32
                pub const m_bRandom: usize = 0x1C8; // bool
                pub const m_nRandomSeed: usize = 0x1CC; // int32
                pub const m_bSetNormal: usize = 0x1D0; // bool
                pub const m_bSetRadius: usize = 0x1D1; // bool
                pub const m_nIndexType: usize = 0x1D4; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_nFullLoopIncrement: usize = 0x498; // CParticleCollectionFloatInput
                pub const m_nSnapShotStartPoint: usize = 0x5F8; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x758; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateVector {
                pub const m_RateMin: usize = 0x1C0; // Vector
                pub const m_RateMax: usize = 0x1CC; // Vector
                pub const m_FrequencyMin: usize = 0x1D8; // Vector
                pub const m_FrequencyMax: usize = 0x1E4; // Vector
                pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1F4; // bool
                pub const m_bProportionalOp: usize = 0x1F5; // bool
                pub const m_bOffset: usize = 0x1F6; // bool
                pub const m_flStartTime_min: usize = 0x1F8; // float32
                pub const m_flStartTime_max: usize = 0x1FC; // float32
                pub const m_flEndTime_min: usize = 0x200; // float32
                pub const m_flEndTime_max: usize = 0x204; // float32
                pub const m_flOscMult: usize = 0x208; // CPerParticleFloatInput
                pub const m_flOscAdd: usize = 0x368; // CPerParticleFloatInput
                pub const m_flRateScale: usize = 0x4C8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PositionLock {
                pub const m_TransformInput: usize = 0x1C0; // CParticleTransformInput
                pub const m_flStartTime_min: usize = 0x228; // float32
                pub const m_flStartTime_max: usize = 0x22C; // float32
                pub const m_flStartTime_exp: usize = 0x230; // float32
                pub const m_flEndTime_min: usize = 0x234; // float32
                pub const m_flEndTime_max: usize = 0x238; // float32
                pub const m_flEndTime_exp: usize = 0x23C; // float32
                pub const m_flRange: usize = 0x240; // float32
                pub const m_flRangeBias: usize = 0x248; // CParticleCollectionFloatInput
                pub const m_flJumpThreshold: usize = 0x3A8; // float32
                pub const m_flPrevPosScale: usize = 0x3AC; // float32
                pub const m_bLockRot: usize = 0x3B0; // bool
                pub const m_vecScale: usize = 0x3B8; // CParticleCollectionVecInput
                pub const m_nFieldOutput: usize = 0xA30; // ParticleAttributeIndex_t
                pub const m_nFieldOutputPrev: usize = 0xA34; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderVRHapticEvent {
                pub const m_nHand: usize = 0x210; // ParticleVRHandChoiceList_t
                pub const m_nOutputHandCP: usize = 0x214; // int32
                pub const m_nOutputField: usize = 0x218; // int32
                pub const m_flAmplitude: usize = 0x220; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToImpactPoint {
                pub const m_nCPOut: usize = 0x1C8; // int32
                pub const m_nCPIn: usize = 0x1CC; // int32
                pub const m_flUpdateRate: usize = 0x1D0; // float32
                pub const m_flTraceLength: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flStartOffset: usize = 0x338; // float32
                pub const m_flOffset: usize = 0x33C; // float32
                pub const m_vecTraceDir: usize = 0x340; // Vector
                pub const m_CollisionGroupName: usize = 0x34C; // char[128]
                pub const m_nTraceSet: usize = 0x3CC; // ParticleTraceSet_t
                pub const m_bSetToEndpoint: usize = 0x3D0; // bool
                pub const m_bTraceToClosestSurface: usize = 0x3D1; // bool
                pub const m_bIncludeWater: usize = 0x3D2; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_InterpolateRadius {
                pub const m_flStartTime: usize = 0x1C0; // float32
                pub const m_flEndTime: usize = 0x1C4; // float32
                pub const m_flStartScale: usize = 0x1C8; // float32
                pub const m_flEndScale: usize = 0x1CC; // float32
                pub const m_bEaseInAndOut: usize = 0x1D0; // bool
                pub const m_flBias: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ReinitializeScalarEndCap {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1C4; // float32
                pub const m_flOutputMax: usize = 0x1C8; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TurbulenceForce {
                pub const m_flNoiseCoordScale0: usize = 0x1D0; // float32
                pub const m_flNoiseCoordScale1: usize = 0x1D4; // float32
                pub const m_flNoiseCoordScale2: usize = 0x1D8; // float32
                pub const m_flNoiseCoordScale3: usize = 0x1DC; // float32
                pub const m_vecNoiseAmount0: usize = 0x1E0; // Vector
                pub const m_vecNoiseAmount1: usize = 0x1EC; // Vector
                pub const m_vecNoiseAmount2: usize = 0x1F8; // Vector
                pub const m_vecNoiseAmount3: usize = 0x204; // Vector
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelElementOnceTimed {
                pub const m_hModel: usize = 0x1C0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_inNames: usize = 0x1C8; // CUtlVector<CUtlString>
                pub const m_outNames: usize = 0x1E0; // CUtlVector<CUtlString>
                pub const m_fallbackNames: usize = 0x1F8; // CUtlVector<CUtlString>
                pub const m_bModelFromRenderer: usize = 0x210; // bool
                pub const m_bProportional: usize = 0x211; // bool
                pub const m_nFieldInput: usize = 0x214; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flRemapTime: usize = 0x21C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToPlayer {
                pub const m_nCP1: usize = 0x1C8; // int32
                pub const m_vecCP1Pos: usize = 0x1CC; // Vector
                pub const m_bOrientToEyes: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EndCapTimedFreeze {
                pub const m_flFreezeTime: usize = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderGpuImplicit {
                pub const m_bUsePerParticleRadius: usize = 0x210; // bool
                pub const m_nVertexCountKb: usize = 0x214; // uint32
                pub const m_nIndexCountKb: usize = 0x218; // uint32
                pub const m_fGridSize: usize = 0x220; // CParticleCollectionRendererFloatInput
                pub const m_fRadiusScale: usize = 0x380; // CParticleCollectionRendererFloatInput
                pub const m_fIsosurfaceThreshold: usize = 0x4E0; // CParticleCollectionRendererFloatInput
                pub const m_nScaleCP: usize = 0x640; // int32
                pub const m_hMaterial: usize = 0x648; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetRandomControlPointPosition {
                pub const m_bUseWorldLocation: usize = 0x1C8; // bool
                pub const m_bOrient: usize = 0x1C9; // bool
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_nHeadLocation: usize = 0x1D0; // int32
                pub const m_flReRandomRate: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_vecCPMinPos: usize = 0x338; // Vector
                pub const m_vecCPMaxPos: usize = 0x344; // Vector
                pub const m_flInterpolation: usize = 0x350; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformVisibilityToScalar {
                pub const m_nSetMethod: usize = 0x1C0; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x234; // float32
                pub const m_flInputMax: usize = 0x238; // float32
                pub const m_flOutputMin: usize = 0x23C; // float32
                pub const m_flOutputMax: usize = 0x240; // float32
                pub const m_flRadius: usize = 0x244; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapControlPointDirectionToVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1C4; // float32
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ScreenSpacePositionOfTarget {
                pub const m_vecTargetPosition: usize = 0x1C0; // CPerParticleVecInput
                pub const m_bOututBehindness: usize = 0x838; // bool
                pub const m_nBehindFieldOutput: usize = 0x83C; // ParticleAttributeIndex_t
                pub const m_flBehindOutputRemap: usize = 0x840; // CParticleRemapFloatInput
                pub const m_nBehindSetMethod: usize = 0x9A0; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionOperator {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DragRelativeToPlane {
                pub const m_flDragAtPlane: usize = 0x1C0; // CParticleCollectionFloatInput
                pub const m_flFalloff: usize = 0x320; // CParticleCollectionFloatInput
                pub const m_bDirectional: usize = 0x480; // bool
                pub const m_vecPlaneNormal: usize = 0x488; // CParticleCollectionVecInput
                pub const m_nControlPointNumber: usize = 0xB00; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetCPtoVector {
                pub const m_nCPInput: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomYaw {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SnapshotRigidSkinToBones {
                pub const m_bTransformNormals: usize = 0x1C0; // bool
                pub const m_bTransformRadii: usize = 0x1C1; // bool
                pub const m_nControlPointNumber: usize = 0x1C4; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetSingleControlPointPosition {
                pub const m_bSetOnce: usize = 0x1C8; // bool
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x848; // CParticleTransformInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_DistanceToNeighborCull {
                pub const m_flDistance: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_bIncludeRadii: usize = 0x328; // bool
                pub const m_flLifespanOverlap: usize = 0x330; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapCPtoScalar {
                pub const m_nCPInput: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nField: usize = 0x1C8; // int32
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_flStartTime: usize = 0x1DC; // float32
                pub const m_flEndTime: usize = 0x1E0; // float32
                pub const m_flInterpRate: usize = 0x1E4; // float32
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionRenderer {
                pub const VisibilityInputs: usize = 0x1C0; // CParticleVisibilityInputs
                pub const m_bCannotBeRefracted: usize = 0x208; // bool
                pub const m_bSkipRenderingOnMobile: usize = 0x209; // bool
            }
            // Parent: None
            // Field count: 65
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleSystemDefinition {
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
                pub const m_nInitialParticles: usize = 0x210; // int32
                pub const m_nMaxParticles: usize = 0x214; // int32
                pub const m_nGroupID: usize = 0x218; // int32
                pub const m_BoundingBoxMin: usize = 0x21C; // Vector
                pub const m_BoundingBoxMax: usize = 0x228; // Vector
                pub const m_flDepthSortBias: usize = 0x234; // float32
                pub const m_nSortOverridePositionCP: usize = 0x238; // int32
                pub const m_bInfiniteBounds: usize = 0x23C; // bool
                pub const m_bEnableNamedValues: usize = 0x23D; // bool
                pub const m_NamedValueDomain: usize = 0x240; // CUtlString
                pub const m_NamedValueLocals: usize = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
                pub const m_ConstantColor: usize = 0x260; // Color
                pub const m_ConstantNormal: usize = 0x264; // Vector
                pub const m_flConstantRadius: usize = 0x270; // float32
                pub const m_flConstantRotation: usize = 0x274; // float32
                pub const m_flConstantRotationSpeed: usize = 0x278; // float32
                pub const m_flConstantLifespan: usize = 0x27C; // float32
                pub const m_nConstantSequenceNumber: usize = 0x280; // int32
                pub const m_nConstantSequenceNumber1: usize = 0x284; // int32
                pub const m_nSnapshotControlPoint: usize = 0x288; // int32
                pub const m_hSnapshot: usize = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_pszCullReplacementName: usize = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flCullRadius: usize = 0x2A0; // float32
                pub const m_flCullFillCost: usize = 0x2A4; // float32
                pub const m_nCullControlPoint: usize = 0x2A8; // int32
                pub const m_hFallback: usize = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nFallbackMaxCount: usize = 0x2B8; // int32
                pub const m_hLowViolenceDef: usize = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_hReferenceReplacement: usize = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flPreSimulationTime: usize = 0x2D0; // float32
                pub const m_flStopSimulationAfterTime: usize = 0x2D4; // float32
                pub const m_flMaximumTimeStep: usize = 0x2D8; // float32
                pub const m_flMaximumSimTime: usize = 0x2DC; // float32
                pub const m_flMinimumSimTime: usize = 0x2E0; // float32
                pub const m_flMinimumTimeStep: usize = 0x2E4; // float32
                pub const m_nMinimumFrames: usize = 0x2E8; // int32
                pub const m_nMinCPULevel: usize = 0x2EC; // int32
                pub const m_nMinGPULevel: usize = 0x2F0; // int32
                pub const m_flNoDrawTimeToGoToSleep: usize = 0x2F4; // float32
                pub const m_flMaxDrawDistance: usize = 0x2F8; // float32
                pub const m_flStartFadeDistance: usize = 0x2FC; // float32
                pub const m_flMaxCreationDistance: usize = 0x300; // float32
                pub const m_nAggregationMinAvailableParticles: usize = 0x304; // int32
                pub const m_flAggregateRadius: usize = 0x308; // float32
                pub const m_bShouldBatch: usize = 0x30C; // bool
                pub const m_bShouldHitboxesFallbackToRenderBounds: usize = 0x30D; // bool
                pub const m_bShouldHitboxesFallbackToSnapshot: usize = 0x30E; // bool
                pub const m_bShouldHitboxesFallbackToCollisionHulls: usize = 0x30F; // bool
                pub const m_nViewModelEffect: usize = 0x310; // InheritableBoolType_t
                pub const m_bScreenSpaceEffect: usize = 0x314; // bool
                pub const m_pszTargetLayerID: usize = 0x318; // CUtlSymbolLarge
                pub const m_nSkipRenderControlPoint: usize = 0x320; // int32
                pub const m_nAllowRenderControlPoint: usize = 0x324; // int32
                pub const m_bShouldSort: usize = 0x328; // bool
                pub const m_controlPointConfigurations: usize = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelMeshGroupEndCap {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PercentageBetweenTransformsVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C4; // float32
                pub const m_flInputMax: usize = 0x1C8; // float32
                pub const m_vecOutputMin: usize = 0x1CC; // Vector
                pub const m_vecOutputMax: usize = 0x1D8; // Vector
                pub const m_TransformStart: usize = 0x1E8; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x250; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x2B8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2BC; // bool
                pub const m_bRadialCheck: usize = 0x2BD; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderScreenVelocityRotate {
                pub const m_flRotateRateDegrees: usize = 0x210; // float32
                pub const m_flForwardDegrees: usize = 0x214; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_UpdateLightSource {
                pub const m_vColorTint: usize = 0x1C0; // Color
                pub const m_flBrightnessScale: usize = 0x1C4; // float32
                pub const m_flRadiusScale: usize = 0x1C8; // float32
                pub const m_flMinimumLightingRadius: usize = 0x1CC; // float32
                pub const m_flMaximumLightingRadius: usize = 0x1D0; // float32
                pub const m_flPositionDampingConstant: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateWithinBox {
                pub const m_vecMin: usize = 0x1C8; // CPerParticleVecInput
                pub const m_vecMax: usize = 0x840; // CPerParticleVecInput
                pub const m_nControlPointNumber: usize = 0xEB8; // int32
                pub const m_bLocalSpace: usize = 0xEBC; // bool
                pub const m_randomnessParameters: usize = 0xEC0; // CRandomNumberGeneratorParameters
                pub const m_bUseNewCode: usize = 0xEC8; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ChooseRandomChildrenInGroup {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_flNumberOfChildren: usize = 0x1D0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 33
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ControlpointLight {
                pub const m_flScale: usize = 0x1C0; // float32
                pub const m_nControlPoint1: usize = 0x650; // int32
                pub const m_nControlPoint2: usize = 0x654; // int32
                pub const m_nControlPoint3: usize = 0x658; // int32
                pub const m_nControlPoint4: usize = 0x65C; // int32
                pub const m_vecCPOffset1: usize = 0x660; // Vector
                pub const m_vecCPOffset2: usize = 0x66C; // Vector
                pub const m_vecCPOffset3: usize = 0x678; // Vector
                pub const m_vecCPOffset4: usize = 0x684; // Vector
                pub const m_LightFiftyDist1: usize = 0x690; // float32
                pub const m_LightZeroDist1: usize = 0x694; // float32
                pub const m_LightFiftyDist2: usize = 0x698; // float32
                pub const m_LightZeroDist2: usize = 0x69C; // float32
                pub const m_LightFiftyDist3: usize = 0x6A0; // float32
                pub const m_LightZeroDist3: usize = 0x6A4; // float32
                pub const m_LightFiftyDist4: usize = 0x6A8; // float32
                pub const m_LightZeroDist4: usize = 0x6AC; // float32
                pub const m_LightColor1: usize = 0x6B0; // Color
                pub const m_LightColor2: usize = 0x6B4; // Color
                pub const m_LightColor3: usize = 0x6B8; // Color
                pub const m_LightColor4: usize = 0x6BC; // Color
                pub const m_bLightType1: usize = 0x6C0; // bool
                pub const m_bLightType2: usize = 0x6C1; // bool
                pub const m_bLightType3: usize = 0x6C2; // bool
                pub const m_bLightType4: usize = 0x6C3; // bool
                pub const m_bLightDynamic1: usize = 0x6C4; // bool
                pub const m_bLightDynamic2: usize = 0x6C5; // bool
                pub const m_bLightDynamic3: usize = 0x6C6; // bool
                pub const m_bLightDynamic4: usize = 0x6C7; // bool
                pub const m_bUseNormal: usize = 0x6C8; // bool
                pub const m_bUseHLambert: usize = 0x6C9; // bool
                pub const m_bClampLowerRange: usize = 0x6CE; // bool
                pub const m_bClampUpperRange: usize = 0x6CF; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_VectorFieldSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_nAttributeToWrite: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1C8; // int32
                pub const m_flInterpolation: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_vecScale: usize = 0x330; // CPerParticleVecInput
                pub const m_flBoundaryDampening: usize = 0x9A8; // float32
                pub const m_bSetVelocity: usize = 0x9AC; // bool
                pub const m_bLockToSurface: usize = 0x9AD; // bool
                pub const m_flGridSpacing: usize = 0x9B0; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CylindricalDistanceToTransform {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x328; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x488; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x5E8; // CPerParticleFloatInput
                pub const m_TransformStart: usize = 0x748; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x7B0; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x818; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x81C; // bool
                pub const m_bAdditive: usize = 0x81D; // bool
                pub const m_bCapsule: usize = 0x81E; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionPlaceOnGround {
                pub const m_flOffset: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x328; // CPerParticleFloatInput
                pub const m_CollisionGroupName: usize = 0x488; // char[128]
                pub const m_nTraceSet: usize = 0x508; // ParticleTraceSet_t
                pub const m_nTraceMissBehavior: usize = 0x518; // ParticleTraceMissBehavior_t
                pub const m_bIncludeWater: usize = 0x51C; // bool
                pub const m_bSetNormal: usize = 0x51D; // bool
                pub const m_nAttribute: usize = 0x520; // ParticleAttributeIndex_t
                pub const m_bSetPXYZOnly: usize = 0x524; // bool
                pub const m_bTraceAlongNormal: usize = 0x525; // bool
                pub const m_nTraceDirectionAttribute: usize = 0x528; // ParticleAttributeIndex_t
                pub const m_bOffsetonColOnly: usize = 0x52C; // bool
                pub const m_flOffsetByRadiusFactor: usize = 0x530; // float32
                pub const m_nPreserveOffsetCP: usize = 0x534; // int32
                pub const m_nIgnoreCP: usize = 0x538; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomScalar {
                pub const m_flMin: usize = 0x1C8; // float32
                pub const m_flMax: usize = 0x1CC; // float32
                pub const m_flExponent: usize = 0x1D0; // float32
                pub const m_nFieldOutput: usize = 0x1D4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderPostProcessing {
                pub const m_flPostProcessStrength: usize = 0x210; // CPerParticleFloatInput
                pub const m_hPostTexture: usize = 0x370; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_nPriority: usize = 0x378; // ParticlePostProcessPriorityGroup_t
            }
            // Parent: None
            // Field count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WorldTraceConstraint {
                pub const m_nCP: usize = 0x1C0; // int32
                pub const m_vecCpOffset: usize = 0x1C4; // Vector
                pub const m_nCollisionMode: usize = 0x1D0; // ParticleCollisionMode_t
                pub const m_nCollisionModeMin: usize = 0x1D4; // ParticleCollisionMode_t
                pub const m_nTraceSet: usize = 0x1D8; // ParticleTraceSet_t
                pub const m_CollisionGroupName: usize = 0x1DC; // char[128]
                pub const m_bWorldOnly: usize = 0x25C; // bool
                pub const m_bBrushOnly: usize = 0x25D; // bool
                pub const m_bIncludeWater: usize = 0x25E; // bool
                pub const m_nIgnoreCP: usize = 0x260; // int32
                pub const m_flCpMovementTolerance: usize = 0x264; // float32
                pub const m_flRetestRate: usize = 0x268; // float32
                pub const m_flTraceTolerance: usize = 0x26C; // float32
                pub const m_flCollisionConfirmationSpeed: usize = 0x270; // float32
                pub const m_nMaxTracesPerFrame: usize = 0x274; // float32
                pub const m_flRadiusScale: usize = 0x278; // CPerParticleFloatInput
                pub const m_flBounceAmount: usize = 0x3D8; // CPerParticleFloatInput
                pub const m_flSlideAmount: usize = 0x538; // CPerParticleFloatInput
                pub const m_flRandomDirScale: usize = 0x698; // CPerParticleFloatInput
                pub const m_bDecayBounce: usize = 0x7F8; // bool
                pub const m_bKillonContact: usize = 0x7F9; // bool
                pub const m_flMinSpeed: usize = 0x7FC; // float32
                pub const m_bSetNormal: usize = 0x800; // bool
                pub const m_nStickOnCollisionField: usize = 0x804; // ParticleAttributeIndex_t
                pub const m_flStopSpeed: usize = 0x808; // CPerParticleFloatInput
                pub const m_nEntityStickDataField: usize = 0x968; // ParticleAttributeIndex_t
                pub const m_nEntityStickNormalField: usize = 0x96C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderBlobs {
                pub const m_cubeWidth: usize = 0x210; // CParticleCollectionRendererFloatInput
                pub const m_cutoffRadius: usize = 0x370; // CParticleCollectionRendererFloatInput
                pub const m_renderRadius: usize = 0x4D0; // CParticleCollectionRendererFloatInput
                pub const m_nVertexCountKb: usize = 0x630; // uint32
                pub const m_nIndexCountKb: usize = 0x634; // uint32
                pub const m_nScaleCP: usize = 0x638; // int32
                pub const m_MaterialVars: usize = 0x640; // CUtlVector<MaterialVariable_t>
                pub const m_hMaterial: usize = 0x670; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_OscillateScalar {
                pub const m_RateMin: usize = 0x1C0; // float32
                pub const m_RateMax: usize = 0x1C4; // float32
                pub const m_FrequencyMin: usize = 0x1C8; // float32
                pub const m_FrequencyMax: usize = 0x1CC; // float32
                pub const m_nField: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1D4; // bool
                pub const m_bProportionalOp: usize = 0x1D5; // bool
                pub const m_flStartTime_min: usize = 0x1D8; // float32
                pub const m_flStartTime_max: usize = 0x1DC; // float32
                pub const m_flEndTime_min: usize = 0x1E0; // float32
                pub const m_flEndTime_max: usize = 0x1E4; // float32
                pub const m_flOscMult: usize = 0x1E8; // float32
                pub const m_flOscAdd: usize = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeOut {
                pub const m_flFadeOutTimeMin: usize = 0x1C0; // float32
                pub const m_flFadeOutTimeMax: usize = 0x1C4; // float32
                pub const m_flFadeOutTimeExp: usize = 0x1C8; // float32
                pub const m_flFadeBias: usize = 0x1CC; // float32
                pub const m_bProportional: usize = 0x200; // bool
                pub const m_bEaseInAndOut: usize = 0x201; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WaterImpulseRenderer {
                pub const m_vecPos: usize = 0x210; // CPerParticleVecInput
                pub const m_flRadius: usize = 0x888; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0x9E8; // CPerParticleFloatInput
                pub const m_flShape: usize = 0xB48; // CPerParticleFloatInput
                pub const m_nEventType: usize = 0xCA8; // EventTypeSelection_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomSequence {
                pub const m_nSequenceMin: usize = 0x1C8; // int32
                pub const m_nSequenceMax: usize = 0x1CC; // int32
                pub const m_bShuffle: usize = 0x1D0; // bool
                pub const m_bLinear: usize = 0x1D1; // bool
                pub const m_WeightedList: usize = 0x1D8; // CUtlVector<SequenceWeightedList_t>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarSplineSimple {
                pub const m_Rate: usize = 0x1C0; // float32
                pub const m_flStartTime: usize = 0x1C4; // float32
                pub const m_flEndTime: usize = 0x1C8; // float32
                pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
                pub const m_bEaseOut: usize = 0x1F4; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_DistanceCull {
                pub const m_nControlPoint: usize = 0x1C8; // int32
                pub const m_flDistance: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x330; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CollideWithParentParticles {
                pub const m_flParentRadiusScale: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flRadiusScale: usize = 0x320; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFromVectorFieldSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nLocalSpaceCP: usize = 0x1CC; // int32
                pub const m_nWeightUpdateCP: usize = 0x1D0; // int32
                pub const m_bUseVerticalVelocity: usize = 0x1D4; // bool
                pub const m_vecScale: usize = 0x1D8; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetVectorAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1C0; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1C8; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x840; // CPerParticleVecInput
                pub const m_flLerp: usize = 0xEB8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x1018; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x101C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x1020; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_AddVectorToVector {
                pub const m_vecScale: usize = 0x1C8; // Vector
                pub const m_nFieldOutput: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_vOffsetMin: usize = 0x1DC; // Vector
                pub const m_vOffsetMax: usize = 0x1E8; // Vector
                pub const m_randomnessParameters: usize = 0x1F4; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapInitialVisibilityScalar {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformOrientationToYaw {
                pub const m_TransformInput: usize = 0x1C0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x228; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x22C; // float32
                pub const m_flSpinStrength: usize = 0x230; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderStatusEffect {
                pub const m_pTextureColorWarp: usize = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDetail2: usize = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDiffuseWarp: usize = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureFresnelColorWarp: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureFresnelWarp: usize = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureSpecularWarp: usize = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureEnvMap: usize = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RandomForce {
                pub const m_MinForce: usize = 0x1D0; // Vector
                pub const m_MaxForce: usize = 0x1DC; // Vector
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapParticleCountOnScalarEndCap {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1C4; // int32
                pub const m_nInputMax: usize = 0x1C8; // int32
                pub const m_flOutputMin: usize = 0x1CC; // float32
                pub const m_flOutputMax: usize = 0x1D0; // float32
                pub const m_bBackwards: usize = 0x1D4; // bool
                pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticlePreviewState_t {
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
                pub const m_vecPreviewGravity: usize = 0x58; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LocalAccelerationForce {
                pub const m_nCP: usize = 0x1D0; // int32
                pub const m_nScaleCP: usize = 0x1D4; // int32
                pub const m_vecAccel: usize = 0x1D8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ModelCull {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_bBoundBox: usize = 0x1C4; // bool
                pub const m_bCullOutside: usize = 0x1C5; // bool
                pub const m_bUseBones: usize = 0x1C6; // bool
                pub const m_HitboxSetName: usize = 0x1C7; // char[128]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetFloat {
                pub const m_InputValue: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x320; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x324; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x328; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapTransformToVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vInputMin: usize = 0x1CC; // Vector
                pub const m_vInputMax: usize = 0x1D8; // Vector
                pub const m_vOutputMin: usize = 0x1E4; // Vector
                pub const m_vOutputMax: usize = 0x1F0; // Vector
                pub const m_TransformInput: usize = 0x200; // CParticleTransformInput
                pub const m_LocalSpaceTransform: usize = 0x268; // CParticleTransformInput
                pub const m_flStartTime: usize = 0x2D0; // float32
                pub const m_flEndTime: usize = 0x2D4; // float32
                pub const m_nSetMethod: usize = 0x2D8; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x2DC; // bool
                pub const m_bAccelerate: usize = 0x2DD; // bool
                pub const m_flRemapBias: usize = 0x2E0; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SDFLighting {
                pub const m_vLightingDir: usize = 0x1C0; // Vector
                pub const m_vTint_0: usize = 0x1CC; // Vector
                pub const m_vTint_1: usize = 0x1D8; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ScreenSpaceDistanceToEdge {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flMaxDistFromEdge: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x328; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x488; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDistanceToLineSegmentToScalar {
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_flMinOutputValue: usize = 0x1DC; // float32
                pub const m_flMaxOutputValue: usize = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapVectortoCP {
                pub const m_nOutControlPointNumber: usize = 0x1C0; // int32
                pub const m_nFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nParticleNumber: usize = 0x1C8; // int32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetFromCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_strSnapshotSubset: usize = 0x1C8; // CUtlString
                pub const m_nAttributeToRead: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1D8; // int32
                pub const m_bRandom: usize = 0x1DC; // bool
                pub const m_bReverse: usize = 0x1DD; // bool
                pub const m_nRandomSeed: usize = 0x1E0; // int32
                pub const m_nSnapShotStartPoint: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_nSnapShotIncrement: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x4A8; // CPerParticleFloatInput
                pub const m_bSubSample: usize = 0x608; // bool
                pub const m_bPrev: usize = 0x609; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DistanceBetweenCPsToCP {
                pub const m_nStartCP: usize = 0x1C8; // int32
                pub const m_nEndCP: usize = 0x1CC; // int32
                pub const m_nOutputCP: usize = 0x1D0; // int32
                pub const m_nOutputCPField: usize = 0x1D4; // int32
                pub const m_bSetOnce: usize = 0x1D8; // bool
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_flOutputMin: usize = 0x1E4; // float32
                pub const m_flOutputMax: usize = 0x1E8; // float32
                pub const m_flMaxTraceLength: usize = 0x1EC; // float32
                pub const m_flLOSScale: usize = 0x1F0; // float32
                pub const m_bLOS: usize = 0x1F4; // bool
                pub const m_CollisionGroupName: usize = 0x1F5; // char[128]
                pub const m_nTraceSet: usize = 0x278; // ParticleTraceSet_t
                pub const m_nSetParent: usize = 0x27C; // ParticleParentSetMode_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToHand {
                pub const m_nCP1: usize = 0x1C8; // int32
                pub const m_nHand: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // Vector
                pub const m_bOrientToHand: usize = 0x1DC; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainDistanceToPath {
                pub const m_fMinDistance: usize = 0x1C0; // float32
                pub const m_flMaxDistance0: usize = 0x1C4; // float32
                pub const m_flMaxDistanceMid: usize = 0x1C8; // float32
                pub const m_flMaxDistance1: usize = 0x1CC; // float32
                pub const m_PathParameters: usize = 0x1D0; // CPathParameters
                pub const m_flTravelTime: usize = 0x210; // float32
                pub const m_nFieldScale: usize = 0x214; // ParticleAttributeIndex_t
                pub const m_nManualTField: usize = 0x218; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DistanceCull {
                pub const m_nControlPoint: usize = 0x1C0; // int32
                pub const m_vecPointOffset: usize = 0x1C4; // Vector
                pub const m_flDistance: usize = 0x1D0; // float32
                pub const m_bCullInside: usize = 0x1D4; // bool
                pub const m_nAttribute: usize = 0x1D8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapSDFDistanceToScalarAttribute {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nVectorFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flMinDistance: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flMaxDistance: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_flValueBelowMin: usize = 0x488; // CParticleCollectionFloatInput
                pub const m_flValueAtMin: usize = 0x5E8; // CParticleCollectionFloatInput
                pub const m_flValueAtMax: usize = 0x748; // CParticleCollectionFloatInput
                pub const m_flValueAboveMax: usize = 0x8A8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateAlongPath {
                pub const m_fMaxDistance: usize = 0x1C8; // float32
                pub const m_PathParams: usize = 0x1D0; // CPathParameters
                pub const m_bUseRandomCPs: usize = 0x210; // bool
                pub const m_vEndOffset: usize = 0x214; // Vector
                pub const m_bSaveOffset: usize = 0x220; // bool
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_GameDecalRenderer {
                pub const m_sDecalGroupName: usize = 0x210; // CGlobalSymbol
                pub const m_nEventType: usize = 0x218; // EventTypeSelection_t
                pub const m_nInteractionMask: usize = 0x220; // ParticleCollisionMask_t
                pub const m_nCollisionGroup: usize = 0x228; // ParticleCollisionGroup_t
                pub const m_vecStartPos: usize = 0x230; // CPerParticleVecInput
                pub const m_vecEndPos: usize = 0x8A8; // CPerParticleVecInput
                pub const m_flTraceBloat: usize = 0xF20; // CPerParticleFloatInput
                pub const m_flDecalSize: usize = 0x1080; // CPerParticleFloatInput
                pub const m_nDecalGroupIndex: usize = 0x11E0; // CPerParticleFloatInput
                pub const m_flDecalRotation: usize = 0x1340; // CPerParticleFloatInput
                pub const m_vModulationColor: usize = 0x14A0; // CPerParticleVecInput
                pub const m_bUseGameDefaultDecalSize: usize = 0x1B18; // bool
                pub const m_bRandomDecalRotation: usize = 0x1B19; // bool
                pub const m_bRandomlySelectDecalInGroup: usize = 0x1B1A; // bool
                pub const m_bNoDecalsOnOwner: usize = 0x1B1B; // bool
                pub const m_bVisualizeTraces: usize = 0x1B1C; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointsToModelParticles {
                pub const m_HitboxSetName: usize = 0x1C0; // char[128]
                pub const m_AttachmentName: usize = 0x240; // char[128]
                pub const m_nFirstControlPoint: usize = 0x2C0; // int32
                pub const m_nNumControlPoints: usize = 0x2C4; // int32
                pub const m_nFirstSourcePoint: usize = 0x2C8; // int32
                pub const m_bSkin: usize = 0x2CC; // bool
                pub const m_bAttachment: usize = 0x2CD; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ColorInterpolateRandom {
                pub const m_ColorFadeMin: usize = 0x1C0; // Color
                pub const m_ColorFadeMax: usize = 0x1DC; // Color
                pub const m_flFadeStartTime: usize = 0x1EC; // float32
                pub const m_flFadeEndTime: usize = 0x1F0; // float32
                pub const m_nFieldOutput: usize = 0x1F4; // ParticleAttributeIndex_t
                pub const m_bEaseInOut: usize = 0x1F8; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelSequenceToScalar {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderLights {
                pub const m_flAnimationRate: usize = 0x218; // float32
                pub const m_nAnimationType: usize = 0x21C; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0x220; // bool
                pub const m_flMinSize: usize = 0x224; // float32
                pub const m_flMaxSize: usize = 0x228; // float32
                pub const m_flStartFadeSize: usize = 0x22C; // float32
                pub const m_flEndFadeSize: usize = 0x230; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DecayClampCount {
                pub const m_nCount: usize = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRandomNumberGeneratorParameters {
                pub const m_bDistributeEvenly: usize = 0x0; // bool
                pub const m_nSeed: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ColorLitPerParticle {
                pub const m_ColorMin: usize = 0x1E0; // Color
                pub const m_ColorMax: usize = 0x1E4; // Color
                pub const m_TintMin: usize = 0x1E8; // Color
                pub const m_TintMax: usize = 0x1EC; // Color
                pub const m_flTintPerc: usize = 0x1F0; // float32
                pub const m_nTintBlendMode: usize = 0x1F4; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x1F8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderPoints {
                pub const m_hMaterial: usize = 0x210; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetAttributeToScalarExpression {
                pub const m_nExpression: usize = 0x1C8; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x330; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x490; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x5F0; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x5F4; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateOnGrid {
                pub const m_nXCount: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nYCount: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_nZCount: usize = 0x488; // CParticleCollectionFloatInput
                pub const m_nXSpacing: usize = 0x5E8; // CParticleCollectionFloatInput
                pub const m_nYSpacing: usize = 0x748; // CParticleCollectionFloatInput
                pub const m_nZSpacing: usize = 0x8A8; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0xA08; // int32
                pub const m_bLocalSpace: usize = 0xA0C; // bool
                pub const m_bCenter: usize = 0xA0D; // bool
                pub const m_bHollow: usize = 0xA0E; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampCPLinearRandom {
                pub const m_nOutControlPointNumber: usize = 0x1C8; // int32
                pub const m_vecRateMin: usize = 0x1CC; // Vector
                pub const m_vecRateMax: usize = 0x1D8; // Vector
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_VelocityMatchingForce {
                pub const m_flDirScale: usize = 0x1C0; // float32
                pub const m_flSpdScale: usize = 0x1C4; // float32
                pub const m_flNeighborDistance: usize = 0x1C8; // float32
                pub const m_flFacingStrength: usize = 0x1CC; // float32
                pub const m_bUseAABB: usize = 0x1D0; // bool
                pub const m_nCPBroadcast: usize = 0x1D4; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomAlphaWindowThreshold {
                pub const m_flMin: usize = 0x1C8; // float32
                pub const m_flMax: usize = 0x1CC; // float32
                pub const m_flExponent: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateOnModelAtHeight {
                pub const m_bUseBones: usize = 0x1C8; // bool
                pub const m_bForceZ: usize = 0x1C9; // bool
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nHeightCP: usize = 0x1D0; // int32
                pub const m_bUseWaterHeight: usize = 0x1D4; // bool
                pub const m_flDesiredHeight: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_vecHitBoxScale: usize = 0x338; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x9B0; // CParticleCollectionVecInput
                pub const m_nBiasType: usize = 0x1028; // ParticleHitboxBiasType_t
                pub const m_bLocalCoords: usize = 0x102C; // bool
                pub const m_bPreferMovingBoxes: usize = 0x102D; // bool
                pub const m_HitboxSetName: usize = 0x102E; // char[128]
                pub const m_flHitboxVelocityScale: usize = 0x10B0; // CParticleCollectionFloatInput
                pub const m_flMaxBoneVelocity: usize = 0x1210; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RestartAfterDuration {
                pub const m_flDurationMin: usize = 0x1C0; // float32
                pub const m_flDurationMax: usize = 0x1C4; // float32
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_nCPField: usize = 0x1CC; // int32
                pub const m_nChildGroupID: usize = 0x1D0; // int32
                pub const m_bOnlyChildren: usize = 0x1D4; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderClothForce {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapVisibilityScalar {
                pub const m_nFieldInput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // float32
                pub const m_flInputMax: usize = 0x1CC; // float32
                pub const m_flOutputMin: usize = 0x1D0; // float32
                pub const m_flOutputMax: usize = 0x1D4; // float32
                pub const m_flRadiusScale: usize = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateSequentialPathV2 {
                pub const m_fMaxDistance: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flNumToAssign: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_bLoop: usize = 0x488; // bool
                pub const m_bCPPairs: usize = 0x489; // bool
                pub const m_bSaveOffset: usize = 0x48A; // bool
                pub const m_PathParams: usize = 0x490; // CPathParameters
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VecInputMaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_vecInput: usize = 0x8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapInitialDirectionToTransformToVector {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x234; // float32
                pub const m_flOffsetRot: usize = 0x238; // float32
                pub const m_vecOffsetAxis: usize = 0x23C; // Vector
                pub const m_bNormalize: usize = 0x248; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub mod C_OP_LockToSavedSequentialPathV2 {
                pub const m_flFadeStart: usize = 0x1C0; // float32
                pub const m_flFadeEnd: usize = 0x1C4; // float32
                pub const m_bCPPairs: usize = 0x1C8; // bool
                pub const m_PathParams: usize = 0x1D0; // CPathParameters
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_NormalLock {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapTransformOrientationToRotations {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x230; // Vector
                pub const m_bUseQuat: usize = 0x23C; // bool
                pub const m_bWriteNormal: usize = 0x23D; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Cull {
                pub const m_flCullPerc: usize = 0x1C0; // float32
                pub const m_flCullStart: usize = 0x1C4; // float32
                pub const m_flCullEnd: usize = 0x1C8; // float32
                pub const m_flCullExp: usize = 0x1CC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomYawFlip {
                pub const m_flPercent: usize = 0x1C8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapSDFGradientToVectorAttribute {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SequenceWeightedList_t {
                pub const m_nSequence: usize = 0x0; // int32
                pub const m_flRelativeWeight: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ReadFromNeighboringParticle {
                pub const m_nFieldInput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1C8; // int32
                pub const m_DistanceCheck: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInterpolation: usize = 0x330; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderText {
                pub const m_OutlineColor: usize = 0x210; // Color
                pub const m_DefaultText: usize = 0x218; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpToInitialPosition {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_flInterpolation: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nCacheField: usize = 0x328; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_vecScale: usize = 0x490; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomRotation {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpEndCapVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1C4; // Vector
                pub const m_flLerpTime: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_VelocityDecay {
                pub const m_flMinVelocity: usize = 0x1C0; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetCPOrientationToPointAtCP {
                pub const m_nInputCP: usize = 0x1C8; // int32
                pub const m_nOutputCP: usize = 0x1CC; // int32
                pub const m_flInterpolation: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_b2DOrientation: usize = 0x330; // bool
                pub const m_bAvoidSingularity: usize = 0x331; // bool
                pub const m_bPointAway: usize = 0x332; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LockToPointList {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1C8; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x1E0; // bool
                pub const m_bClosedLoop: usize = 0x1E1; // bool
                pub const m_nNumPointsAlongPath: usize = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementPlaceOnGround {
                pub const m_flOffset: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x320; // float32
                pub const m_flTolerance: usize = 0x324; // float32
                pub const m_flTraceOffset: usize = 0x328; // float32
                pub const m_flLerpRate: usize = 0x32C; // float32
                pub const m_CollisionGroupName: usize = 0x330; // char[128]
                pub const m_nTraceSet: usize = 0x3B0; // ParticleTraceSet_t
                pub const m_nRefCP1: usize = 0x3B4; // int32
                pub const m_nRefCP2: usize = 0x3B8; // int32
                pub const m_nLerpCP: usize = 0x3BC; // int32
                pub const m_nTraceMissBehavior: usize = 0x3C8; // ParticleTraceMissBehavior_t
                pub const m_bIncludeShotHull: usize = 0x3CC; // bool
                pub const m_bIncludeWater: usize = 0x3CD; // bool
                pub const m_bSetNormal: usize = 0x3D0; // bool
                pub const m_bScaleOffset: usize = 0x3D1; // bool
                pub const m_nPreserveOffsetCP: usize = 0x3D4; // int32
                pub const m_nIgnoreCP: usize = 0x3D8; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetCPOrientationToDirection {
                pub const m_nInputControlPoint: usize = 0x1C0; // int32
                pub const m_nOutputControlPoint: usize = 0x1C4; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapCrossProductOfTwoVectorsToVector {
                pub const m_InputVec1: usize = 0x1C0; // CPerParticleVecInput
                pub const m_InputVec2: usize = 0x838; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0xEB0; // ParticleAttributeIndex_t
                pub const m_bNormalize: usize = 0xEB4; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapTransformOrientationToRotations {
                pub const m_TransformInput: usize = 0x1C0; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x228; // Vector
                pub const m_bUseQuat: usize = 0x234; // bool
                pub const m_bWriteNormal: usize = 0x235; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomRotationSpeed {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            pub mod C_OP_InheritFromParentParticlesV2 {
                pub const m_flScale: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_nFieldOutput: usize = 0x320; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x328; // CPerParticleFloatInput
                pub const m_bRandomDistribution: usize = 0x488; // bool
                pub const m_bReverse: usize = 0x489; // bool
                pub const m_nMissingParentBehavior: usize = 0x48C; // MissingParentInheritBehavior_t
                pub const m_flInterpolation: usize = 0x490; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomSecondSequence {
                pub const m_nSequenceMin: usize = 0x1C8; // int32
                pub const m_nSequenceMax: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetFloatCollection {
                pub const m_InputValue: usize = 0x1C0; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x320; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x324; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x328; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointDefinition_t {
                pub const m_nControlPoint: usize = 0x0; // int32
                pub const m_bLocalCoords: usize = 0x4; // bool
                pub const m_vOffset: usize = 0x8; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointPositionToRandomActiveCP {
                pub const m_nCP1: usize = 0x1C8; // int32
                pub const m_nHeadLocationMin: usize = 0x1CC; // int32
                pub const m_nHeadLocationMax: usize = 0x1D0; // int32
                pub const m_flResetRate: usize = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Diffusion {
                pub const m_flRadiusScale: usize = 0x1C0; // float32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nVoxelGridResolution: usize = 0x1C8; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_AgeNoise {
                pub const m_bAbsVal: usize = 0x1C8; // bool
                pub const m_bAbsValInv: usize = 0x1C9; // bool
                pub const m_flOffset: usize = 0x1CC; // float32
                pub const m_flAgeMin: usize = 0x1D0; // float32
                pub const m_flAgeMax: usize = 0x1D4; // float32
                pub const m_flNoiseScale: usize = 0x1D8; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1DC; // float32
                pub const m_vecOffsetLoc: usize = 0x1E0; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapVectorComponentToScalar {
                pub const m_nFieldInput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1C8; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGeneralRandomRotation {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flDegrees: usize = 0x1CC; // float32
                pub const m_flDegreesMin: usize = 0x1D0; // float32
                pub const m_flDegreesMax: usize = 0x1D4; // float32
                pub const m_flRotationRandExponent: usize = 0x1D8; // float32
                pub const m_bRandomlyFlipDirection: usize = 0x1DC; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DistanceBetweenVecs {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecPoint1: usize = 0x1C8; // CPerParticleVecInput
                pub const m_vecPoint2: usize = 0x840; // CPerParticleVecInput
                pub const m_flInputMin: usize = 0xEB8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x1018; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x1178; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x12D8; // CPerParticleFloatInput
                pub const m_nSetMethod: usize = 0x1438; // ParticleSetMethod_t
                pub const m_bDeltaTime: usize = 0x143C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DampenToCP {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_flRange: usize = 0x1C4; // float32
                pub const m_flScale: usize = 0x1C8; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CalculateVectorAttribute {
                pub const m_vStartValue: usize = 0x1C0; // Vector
                pub const m_nFieldInput1: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputScale1: usize = 0x1D0; // float32
                pub const m_nFieldInput2: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_flInputScale2: usize = 0x1D8; // float32
                pub const m_nControlPointInput1: usize = 0x1DC; // ControlPointReference_t
                pub const m_flControlPointScale1: usize = 0x1F0; // float32
                pub const m_nControlPointInput2: usize = 0x1F4; // ControlPointReference_t
                pub const m_flControlPointScale2: usize = 0x208; // float32
                pub const m_nFieldOutput: usize = 0x20C; // ParticleAttributeIndex_t
                pub const m_vFinalOutputScale: usize = 0x210; // Vector
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LockToBone {
                pub const m_modelInput: usize = 0x1C0; // CParticleModelInput
                pub const m_transformInput: usize = 0x220; // CParticleTransformInput
                pub const m_flLifeTimeFadeStart: usize = 0x288; // float32
                pub const m_flLifeTimeFadeEnd: usize = 0x28C; // float32
                pub const m_flJumpThreshold: usize = 0x290; // float32
                pub const m_flPrevPosScale: usize = 0x294; // float32
                pub const m_HitboxSetName: usize = 0x298; // char[128]
                pub const m_bRigid: usize = 0x318; // bool
                pub const m_bUseBones: usize = 0x319; // bool
                pub const m_nFieldOutput: usize = 0x31C; // ParticleAttributeIndex_t
                pub const m_nFieldOutputPrev: usize = 0x320; // ParticleAttributeIndex_t
                pub const m_nRotationSetType: usize = 0x324; // ParticleRotationLockType_t
                pub const m_bRigidRotationLock: usize = 0x328; // bool
                pub const m_vecRotation: usize = 0x330; // CPerParticleVecInput
                pub const m_flRotLerp: usize = 0x9A8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelBodyPartOnceTimed {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ScreenSpaceRotateTowardTarget {
                pub const m_vecTargetPosition: usize = 0x1C0; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0x838; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x998; // ParticleSetMethod_t
                pub const m_flScreenEdgeAlignmentDistance: usize = 0x9A0; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementMaintainOffset {
                pub const m_vecOffset: usize = 0x1C0; // Vector
                pub const m_nCP: usize = 0x1CC; // int32
                pub const m_bRadiusScale: usize = 0x1D0; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetVec {
                pub const m_InputValue: usize = 0x1C0; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x838; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x83C; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x840; // CPerParticleFloatInput
                pub const m_bNormalizedOutput: usize = 0x9A0; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateFromParentParticles {
                pub const m_flVelocityScale: usize = 0x1C8; // float32
                pub const m_flIncrement: usize = 0x1CC; // float32
                pub const m_bRandomDistribution: usize = 0x1D0; // bool
                pub const m_nRandomSeed: usize = 0x1D4; // int32
                pub const m_bSubFrame: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelBodyPart {
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderOmni2Light {
                pub const m_nLightType: usize = 0x210; // ParticleOmni2LightTypeChoiceList_t
                pub const m_vColorBlend: usize = 0x218; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x890; // ParticleColorBlendType_t
                pub const m_nBrightnessUnit: usize = 0x894; // ParticleLightUnitChoiceList_t
                pub const m_flBrightnessLumens: usize = 0x898; // CPerParticleFloatInput
                pub const m_flBrightnessCandelas: usize = 0x9F8; // CPerParticleFloatInput
                pub const m_bCastShadows: usize = 0xB58; // bool
                pub const m_bFog: usize = 0xB59; // bool
                pub const m_flFogScale: usize = 0xB60; // CPerParticleFloatInput
                pub const m_flLuminaireRadius: usize = 0xCC0; // CPerParticleFloatInput
                pub const m_flSkirt: usize = 0xE20; // CPerParticleFloatInput
                pub const m_flRange: usize = 0xF80; // CPerParticleFloatInput
                pub const m_flInnerConeAngle: usize = 0x10E0; // CPerParticleFloatInput
                pub const m_flOuterConeAngle: usize = 0x1240; // CPerParticleFloatInput
                pub const m_hLightCookie: usize = 0x13A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bSphericalCookie: usize = 0x13A8; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConnectParentParticleToNearest {
                pub const m_nFirstControlPoint: usize = 0x1C0; // int32
                pub const m_nSecondControlPoint: usize = 0x1C4; // int32
                pub const m_bUseRadius: usize = 0x1C8; // bool
                pub const m_flRadiusScale: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flParentRadiusScale: usize = 0x330; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitSkinnedPositionFromCPSnapshot {
                pub const m_nSnapshotControlPointNumber: usize = 0x1C8; // int32
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_bRandom: usize = 0x1D0; // bool
                pub const m_nRandomSeed: usize = 0x1D4; // int32
                pub const m_bRigid: usize = 0x1D8; // bool
                pub const m_bSetNormal: usize = 0x1D9; // bool
                pub const m_bIgnoreDt: usize = 0x1DA; // bool
                pub const m_flMinNormalVelocity: usize = 0x1DC; // float32
                pub const m_flMaxNormalVelocity: usize = 0x1E0; // float32
                pub const m_nIndexType: usize = 0x1E4; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x348; // float32
                pub const m_nFullLoopIncrement: usize = 0x34C; // int32
                pub const m_nSnapShotStartPoint: usize = 0x350; // int32
                pub const m_flBoneVelocity: usize = 0x354; // float32
                pub const m_flBoneVelocityMax: usize = 0x358; // float32
                pub const m_bCopyColor: usize = 0x35C; // bool
                pub const m_bCopyAlpha: usize = 0x35D; // bool
                pub const m_bSetRadius: usize = 0x35E; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LagCompensation {
                pub const m_nDesiredVelocityCP: usize = 0x1C0; // int32
                pub const m_nLatencyCP: usize = 0x1C4; // int32
                pub const m_nLatencyCPField: usize = 0x1C8; // int32
                pub const m_nDesiredVelocityCPField: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CollideWithSelf {
                pub const m_flRadiusScale: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flMinimumSpeed: usize = 0x320; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_Noise {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1C4; // float32
                pub const m_flOutputMax: usize = 0x1C8; // float32
                pub const m_fl4NoiseScale: usize = 0x1CC; // float32
                pub const m_bAdditive: usize = 0x1D0; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeAndKillForTracers {
                pub const m_flStartFadeInTime: usize = 0x1C0; // float32
                pub const m_flEndFadeInTime: usize = 0x1C4; // float32
                pub const m_flStartFadeOutTime: usize = 0x1C8; // float32
                pub const m_flEndFadeOutTime: usize = 0x1CC; // float32
                pub const m_flStartAlpha: usize = 0x1D0; // float32
                pub const m_flEndAlpha: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ColorAdjustHSL {
                pub const m_flHueAdjust: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_flSaturationAdjust: usize = 0x320; // CPerParticleFloatInput
                pub const m_flLightnessAdjust: usize = 0x480; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleMassCalculationParameters {
                pub const m_nMassMode: usize = 0x0; // ParticleMassMode_t
                pub const m_flRadius: usize = 0x8; // CPerParticleFloatInput
                pub const m_flNominalRadius: usize = 0x168; // CPerParticleFloatInput
                pub const m_flScale: usize = 0x2C8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SequenceFromModel {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_nSetMethod: usize = 0x1DC; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_AlphaDecay {
                pub const m_flMinAlpha: usize = 0x1C0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDensityGradientToVectorAttribute {
                pub const m_flRadiusScale: usize = 0x1C0; // float32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitVec {
                pub const m_InputValue: usize = 0x1C8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x840; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x844; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x848; // bool
                pub const m_bWritePreviousPosition: usize = 0x849; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetHitboxToModel {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nForceInModel: usize = 0x1CC; // int32
                pub const m_bEvenDistribution: usize = 0x1D0; // bool
                pub const m_nDesiredHitbox: usize = 0x1D4; // int32
                pub const m_vecHitBoxScale: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x850; // Vector
                pub const m_bMaintainHitbox: usize = 0x85C; // bool
                pub const m_bUseBones: usize = 0x85D; // bool
                pub const m_HitboxSetName: usize = 0x85E; // char[128]
                pub const m_flShellSize: usize = 0x8E0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementMoveAlongSkinnedCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_nSnapshotControlPointNumber: usize = 0x1C4; // int32
                pub const m_bSetNormal: usize = 0x1C8; // bool
                pub const m_bSetRadius: usize = 0x1C9; // bool
                pub const m_flInterpolation: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flTValue: usize = 0x330; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpScalar {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flStartTime: usize = 0x328; // float32
                pub const m_flEndTime: usize = 0x32C; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialRepulsionVelocity {
                pub const m_CollisionGroupName: usize = 0x1C8; // char[128]
                pub const m_nTraceSet: usize = 0x248; // ParticleTraceSet_t
                pub const m_vecOutputMin: usize = 0x24C; // Vector
                pub const m_vecOutputMax: usize = 0x258; // Vector
                pub const m_nControlPointNumber: usize = 0x264; // int32
                pub const m_bPerParticle: usize = 0x268; // bool
                pub const m_bTranslate: usize = 0x269; // bool
                pub const m_bProportional: usize = 0x26A; // bool
                pub const m_flTraceLength: usize = 0x26C; // float32
                pub const m_bPerParticleTR: usize = 0x270; // bool
                pub const m_bInherit: usize = 0x271; // bool
                pub const m_nChildCP: usize = 0x274; // int32
                pub const m_nChildGroupID: usize = 0x278; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ClampScalar {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x328; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToHMD {
                pub const m_nCP1: usize = 0x1C8; // int32
                pub const m_vecCP1Pos: usize = 0x1CC; // Vector
                pub const m_bOrientToHMD: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DifferencePreviousParticle {
                pub const m_nFieldInput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // float32
                pub const m_flInputMax: usize = 0x1CC; // float32
                pub const m_flOutputMin: usize = 0x1D0; // float32
                pub const m_flOutputMax: usize = 0x1D4; // float32
                pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1DC; // bool
                pub const m_bSetPreviousParticle: usize = 0x1DD; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointFieldFromVectorExpression {
                pub const m_nExpression: usize = 0x1C8; // VectorFloatExpressionType_t
                pub const m_vecInput1: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_vecInput2: usize = 0x848; // CParticleCollectionVecInput
                pub const m_flLerp: usize = 0xEC0; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x1020; // CParticleRemapFloatInput
                pub const m_nOutputCP: usize = 0x1180; // int32
                pub const m_nOutVectorField: usize = 0x1184; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PercentageBetweenTransforms {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C4; // float32
                pub const m_flInputMax: usize = 0x1C8; // float32
                pub const m_flOutputMin: usize = 0x1CC; // float32
                pub const m_flOutputMax: usize = 0x1D0; // float32
                pub const m_TransformStart: usize = 0x1D8; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x240; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x2A8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2AC; // bool
                pub const m_bRadialCheck: usize = 0x2AD; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PlaneCull {
                pub const m_nControlPoint: usize = 0x1C8; // int32
                pub const m_flDistance: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x330; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelSequenceEndCap {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFromCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_strSnapshotSubset: usize = 0x1D0; // CUtlString
                pub const m_nAttributeToRead: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1E0; // int32
                pub const m_bRandom: usize = 0x1E4; // bool
                pub const m_bReverse: usize = 0x1E5; // bool
                pub const m_nSnapShotIncrement: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_nManualSnapshotIndex: usize = 0x348; // CPerParticleFloatInput
                pub const m_nRandomSeed: usize = 0x4A8; // int32
                pub const m_bLocalSpaceAngles: usize = 0x4AC; // bool
            }
            // Parent: None
            // Field count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderCables {
                pub const m_flRadiusScale: usize = 0x210; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x370; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x4D0; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xB48; // ParticleColorBlendType_t
                pub const m_hMaterial: usize = 0xB50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nTextureRepetitionMode: usize = 0xB58; // TextureRepetitionMode_t
                pub const m_flTextureRepeatsPerSegment: usize = 0xB60; // CParticleCollectionFloatInput
                pub const m_flTextureRepeatsCircumference: usize = 0xCC0; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetV: usize = 0xE20; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetU: usize = 0xF80; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetV: usize = 0x10E0; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetU: usize = 0x1240; // CParticleCollectionFloatInput
                pub const m_bDrawCableCaps: usize = 0x13A0; // bool
                pub const m_flCapRoundness: usize = 0x13A4; // float32
                pub const m_flCapOffsetAmount: usize = 0x13A8; // float32
                pub const m_flTessScale: usize = 0x13AC; // float32
                pub const m_nMinTesselation: usize = 0x13B0; // int32
                pub const m_nMaxTesselation: usize = 0x13B4; // int32
                pub const m_nRoundness: usize = 0x13B8; // int32
                pub const m_LightingTransform: usize = 0x13C0; // CParticleTransformInput
                pub const m_MaterialFloatVars: usize = 0x1428; // CUtlLeanVector<FloatInputMaterialVariable_t>
                pub const m_MaterialVecVars: usize = 0x1448; // CUtlLeanVector<VecInputMaterialVariable_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InheritVelocity {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_flVelocityScale: usize = 0x1CC; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToWaterSurface {
                pub const m_nSourceCP: usize = 0x1C8; // int32
                pub const m_nDestCP: usize = 0x1CC; // int32
                pub const m_nFlowCP: usize = 0x1D0; // int32
                pub const m_nActiveCP: usize = 0x1D4; // int32
                pub const m_nActiveCPField: usize = 0x1D8; // int32
                pub const m_flRetestRate: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_bAdaptiveThreshold: usize = 0x340; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionOffset {
                pub const m_OffsetMin: usize = 0x1C8; // CPerParticleVecInput
                pub const m_OffsetMax: usize = 0x840; // CPerParticleVecInput
                pub const m_TransformInput: usize = 0xEB8; // CParticleTransformInput
                pub const m_bLocalCoords: usize = 0xF20; // bool
                pub const m_bProportional: usize = 0xF21; // bool
                pub const m_randomnessParameters: usize = 0xF24; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_NormalAlignToCP {
                pub const m_transformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_nControlPointAxis: usize = 0x230; // ParticleControlPointAxis_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ShapeMatchingConstraint {
                pub const m_flShapeRestorationTime: usize = 0x1C0; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetChildControlPoints {
                pub const m_nChildGroupID: usize = 0x1C0; // int32
                pub const m_nFirstControlPoint: usize = 0x1C4; // int32
                pub const m_nNumControlPoints: usize = 0x1C8; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bReverse: usize = 0x330; // bool
                pub const m_bSetOrientation: usize = 0x331; // bool
                pub const m_nOrientation: usize = 0x334; // ParticleOrientationType_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ChladniWave {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x328; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x488; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x5E8; // CPerParticleFloatInput
                pub const m_vecWaveLength: usize = 0x748; // CPerParticleVecInput
                pub const m_vecHarmonics: usize = 0xDC0; // CPerParticleVecInput
                pub const m_nSetMethod: usize = 0x1438; // ParticleSetMethod_t
                pub const m_nLocalSpaceControlPoint: usize = 0x143C; // int32
                pub const m_b3D: usize = 0x1440; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDirectionToCPToVector {
                pub const m_nCP: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_flOffsetRot: usize = 0x1CC; // float32
                pub const m_vecOffsetAxis: usize = 0x1D0; // Vector
                pub const m_bNormalize: usize = 0x1DC; // bool
                pub const m_nFieldStrength: usize = 0x1E0; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DriveCPFromGlobalSoundFloat {
                pub const m_nOutputControlPoint: usize = 0x1C8; // int32
                pub const m_nOutputField: usize = 0x1CC; // int32
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
                pub const m_StackName: usize = 0x1E0; // CUtlString
                pub const m_OperatorName: usize = 0x1E8; // CUtlString
                pub const m_FieldName: usize = 0x1F0; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ScreenSpacePositionOfTarget {
                pub const m_vecTargetPosition: usize = 0x1C8; // CPerParticleVecInput
                pub const m_bOututBehindness: usize = 0x840; // bool
                pub const m_nBehindFieldOutput: usize = 0x844; // ParticleAttributeIndex_t
                pub const m_flBehindOutputRemap: usize = 0x848; // CParticleRemapFloatInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RtEnvCull {
                pub const m_vecTestDir: usize = 0x1C0; // Vector
                pub const m_vecTestNormal: usize = 0x1CC; // Vector
                pub const m_bCullOnMiss: usize = 0x1D8; // bool
                pub const m_bStickInsteadOfCull: usize = 0x1D9; // bool
                pub const m_RtEnvName: usize = 0x1DA; // char[128]
                pub const m_nRTEnvCP: usize = 0x25C; // int32
                pub const m_nComponent: usize = 0x260; // int32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PinParticleToCP {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_vecOffset: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_bOffsetLocal: usize = 0x840; // bool
                pub const m_nParticleSelection: usize = 0x844; // ParticleSelection_t
                pub const m_nParticleNumber: usize = 0x848; // CParticleCollectionFloatInput
                pub const m_nPinBreakType: usize = 0x9A8; // ParticlePinDistance_t
                pub const m_flBreakDistance: usize = 0x9B0; // CParticleCollectionFloatInput
                pub const m_flBreakSpeed: usize = 0xB10; // CParticleCollectionFloatInput
                pub const m_flAge: usize = 0xC70; // CParticleCollectionFloatInput
                pub const m_nBreakControlPointNumber: usize = 0xDD0; // int32
                pub const m_nBreakControlPointNumber2: usize = 0xDD4; // int32
                pub const m_flBreakValue: usize = 0xDD8; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0xF38; // CPerParticleFloatInput
                pub const m_bRetainInitialVelocity: usize = 0x1098; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapCPtoVector {
                pub const m_nCPInput: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1C8; // int32
                pub const m_vInputMin: usize = 0x1CC; // Vector
                pub const m_vInputMax: usize = 0x1D8; // Vector
                pub const m_vOutputMin: usize = 0x1E4; // Vector
                pub const m_vOutputMax: usize = 0x1F0; // Vector
                pub const m_flStartTime: usize = 0x1FC; // float32
                pub const m_flEndTime: usize = 0x200; // float32
                pub const m_flInterpRate: usize = 0x204; // float32
                pub const m_nSetMethod: usize = 0x208; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x20C; // bool
                pub const m_bAccelerate: usize = 0x20D; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateParticleImpulse {
                pub const m_InputRadius: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_InputMagnitude: usize = 0x328; // CPerParticleFloatInput
                pub const m_nFalloffFunction: usize = 0x488; // ParticleFalloffFunction_t
                pub const m_InputFalloffExp: usize = 0x490; // CPerParticleFloatInput
                pub const m_nImpulseType: usize = 0x5F0; // ParticleImpulseType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DensityForce {
                pub const m_flRadiusScale: usize = 0x1D0; // float32
                pub const m_flForceScale: usize = 0x1D4; // float32
                pub const m_flTargetDensity: usize = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateInEpitrochoid {
                pub const m_nComponent1: usize = 0x1C8; // int32
                pub const m_nComponent2: usize = 0x1CC; // int32
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_flParticleDensity: usize = 0x238; // CPerParticleFloatInput
                pub const m_flOffset: usize = 0x398; // CPerParticleFloatInput
                pub const m_flRadius1: usize = 0x4F8; // CPerParticleFloatInput
                pub const m_flRadius2: usize = 0x658; // CPerParticleFloatInput
                pub const m_bUseCount: usize = 0x7B8; // bool
                pub const m_bUseLocalCoords: usize = 0x7B9; // bool
                pub const m_bOffsetExistingPos: usize = 0x7BA; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ConstrainDistanceToUserSpecifiedPath {
                pub const m_fMinDistance: usize = 0x1C0; // float32
                pub const m_flMaxDistance: usize = 0x1C4; // float32
                pub const m_flTimeScale: usize = 0x1C8; // float32
                pub const m_bLoopedPath: usize = 0x1CC; // bool
                pub const m_pointList: usize = 0x1D0; // CUtlVector<PointDefinitionWithTimeValues_t>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointPositions {
                pub const m_bUseWorldLocation: usize = 0x1C8; // bool
                pub const m_bOrient: usize = 0x1C9; // bool
                pub const m_bSetOnce: usize = 0x1CA; // bool
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_nCP2: usize = 0x1D0; // int32
                pub const m_nCP3: usize = 0x1D4; // int32
                pub const m_nCP4: usize = 0x1D8; // int32
                pub const m_vecCP1Pos: usize = 0x1DC; // Vector
                pub const m_vecCP2Pos: usize = 0x1E8; // Vector
                pub const m_vecCP3Pos: usize = 0x1F4; // Vector
                pub const m_vecCP4Pos: usize = 0x200; // Vector
                pub const m_nHeadLocation: usize = 0x20C; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetFloatAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1C0; // VectorFloatExpressionType_t
                pub const m_vInput1: usize = 0x1C8; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x840; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0xEB8; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x1018; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x101C; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementRotateParticleAroundAxis {
                pub const m_vecRotAxis: usize = 0x1C0; // CParticleCollectionVecInput
                pub const m_flRotRate: usize = 0x838; // CParticleCollectionFloatInput
                pub const m_TransformInput: usize = 0x998; // CParticleTransformInput
                pub const m_bLocalSpace: usize = 0xA00; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_IntraParticleForce {
                pub const m_flAttractionMinDistance: usize = 0x1D0; // float32
                pub const m_flAttractionMaxDistance: usize = 0x1D4; // float32
                pub const m_flAttractionMaxStrength: usize = 0x1D8; // float32
                pub const m_flRepulsionMinDistance: usize = 0x1DC; // float32
                pub const m_flRepulsionMaxDistance: usize = 0x1E0; // float32
                pub const m_flRepulsionMaxStrength: usize = 0x1E4; // float32
                pub const m_bUseAABB: usize = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitFloat {
                pub const m_InputValue: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x328; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x32C; // ParticleSetMethod_t
                pub const m_InputStrength: usize = 0x330; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateOnModel {
                pub const m_modelInput: usize = 0x1C8; // CParticleModelInput
                pub const m_transformInput: usize = 0x228; // CParticleTransformInput
                pub const m_nForceInModel: usize = 0x290; // int32
                pub const m_bScaleToVolume: usize = 0x294; // bool
                pub const m_bEvenDistribution: usize = 0x295; // bool
                pub const m_nDesiredHitbox: usize = 0x298; // CParticleCollectionFloatInput
                pub const m_nHitboxValueFromControlPointIndex: usize = 0x3F8; // int32
                pub const m_vecHitBoxScale: usize = 0x400; // CParticleCollectionVecInput
                pub const m_flBoneVelocity: usize = 0xA78; // float32
                pub const m_flMaxBoneVelocity: usize = 0xA7C; // float32
                pub const m_vecDirectionBias: usize = 0xA80; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x10F8; // char[128]
                pub const m_bLocalCoords: usize = 0x1178; // bool
                pub const m_bUseBones: usize = 0x1179; // bool
                pub const m_bUseMesh: usize = 0x117A; // bool
                pub const m_flShellSize: usize = 0x1180; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_InheritFromPeerSystem {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1C8; // int32
                pub const m_nGroupID: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PerParticleForce {
                pub const m_flForceScale: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_vForce: usize = 0x330; // CPerParticleVecInput
                pub const m_nCP: usize = 0x9A8; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomNamedModelMeshGroup {
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderProjected {
                pub const m_bProjectCharacter: usize = 0x210; // bool
                pub const m_bProjectWorld: usize = 0x211; // bool
                pub const m_bProjectWater: usize = 0x212; // bool
                pub const m_bFlipHorizontal: usize = 0x213; // bool
                pub const m_bEnableProjectedDepthControls: usize = 0x214; // bool
                pub const m_flMinProjectionDepth: usize = 0x218; // float32
                pub const m_flMaxProjectionDepth: usize = 0x21C; // float32
                pub const m_vecProjectedMaterials: usize = 0x220; // CUtlVector<RenderProjectedMaterial_t>
                pub const m_flMaterialSelection: usize = 0x238; // CPerParticleFloatInput
                pub const m_flAnimationTimeScale: usize = 0x398; // float32
                pub const m_bOrientToNormal: usize = 0x39C; // bool
                pub const m_MaterialVars: usize = 0x3A0; // CUtlVector<MaterialVariable_t>
                pub const m_flRadiusScale: usize = 0x3B8; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x518; // CParticleCollectionFloatInput
                pub const m_flRollScale: usize = 0x678; // CParticleCollectionFloatInput
                pub const m_nAlpha2Field: usize = 0x7D8; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x7E0; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xE58; // ParticleColorBlendType_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MaxVelocity {
                pub const m_flMaxVelocity: usize = 0x1C0; // float32
                pub const m_flMinVelocity: usize = 0x1C4; // float32
                pub const m_nOverrideCP: usize = 0x1C8; // int32
                pub const m_nOverrideCPField: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_VelocityFromNormal {
                pub const m_fSpeedMin: usize = 0x1C8; // float32
                pub const m_fSpeedMax: usize = 0x1CC; // float32
                pub const m_bIgnoreDt: usize = 0x1D0; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MaintainEmitter {
                pub const m_nParticlesToMaintain: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x328; // float32
                pub const m_flEmissionDuration: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_flEmissionRate: usize = 0x490; // float32
                pub const m_nSnapshotControlPoint: usize = 0x494; // int32
                pub const m_strSnapshotSubset: usize = 0x498; // CUtlString
                pub const m_bEmitInstantaneously: usize = 0x4A0; // bool
                pub const m_bFinalEmitOnStop: usize = 0x4A1; // bool
                pub const m_flScale: usize = 0x4A8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionOffsetToCP {
                pub const m_nControlPointNumberStart: usize = 0x1C8; // int32
                pub const m_nControlPointNumberEnd: usize = 0x1CC; // int32
                pub const m_bLocalCoords: usize = 0x1D0; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapInitialTransformDirectionToRotation {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x234; // float32
                pub const m_nComponent: usize = 0x238; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeAndKill {
                pub const m_flStartFadeInTime: usize = 0x1C0; // float32
                pub const m_flEndFadeInTime: usize = 0x1C4; // float32
                pub const m_flStartFadeOutTime: usize = 0x1C8; // float32
                pub const m_flEndFadeOutTime: usize = 0x1CC; // float32
                pub const m_flStartAlpha: usize = 0x1D0; // float32
                pub const m_flEndAlpha: usize = 0x1D4; // float32
                pub const m_bForcePreserveParticleOrder: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ColorInterpolate {
                pub const m_ColorFade: usize = 0x1C0; // Color
                pub const m_flFadeStartTime: usize = 0x1D0; // float32
                pub const m_flFadeEndTime: usize = 0x1D4; // float32
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_bEaseInOut: usize = 0x1DC; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarSpline {
                pub const m_RateMin: usize = 0x1C0; // float32
                pub const m_RateMax: usize = 0x1C4; // float32
                pub const m_flStartTime_min: usize = 0x1C8; // float32
                pub const m_flStartTime_max: usize = 0x1CC; // float32
                pub const m_flEndTime_min: usize = 0x1D0; // float32
                pub const m_flEndTime_max: usize = 0x1D4; // float32
                pub const m_flBias: usize = 0x1D8; // float32
                pub const m_nField: usize = 0x200; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x204; // bool
                pub const m_bEaseOut: usize = 0x205; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelSequenceOnceTimed {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointFromObjectScale {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nCPOutput: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MaintainSequentialPath {
                pub const m_fMaxDistance: usize = 0x1C0; // float32
                pub const m_flNumToAssign: usize = 0x1C4; // float32
                pub const m_flCohesionStrength: usize = 0x1C8; // float32
                pub const m_flTolerance: usize = 0x1CC; // float32
                pub const m_bLoop: usize = 0x1D0; // bool
                pub const m_bUseParticleCount: usize = 0x1D1; // bool
                pub const m_PathParams: usize = 0x1E0; // CPathParameters
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelBodyPartEndCap {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_StopAfterCPDuration {
                pub const m_flDuration: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_bDestroyImmediately: usize = 0x328; // bool
                pub const m_bPlayEndCap: usize = 0x329; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGeneralSpin {
                pub const m_nSpinRateDegrees: usize = 0x1C0; // int32
                pub const m_nSpinRateMinDegrees: usize = 0x1C4; // int32
                pub const m_fSpinRateStopTime: usize = 0x1CC; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            pub mod C_OP_LockToSavedSequentialPath {
                pub const m_flFadeStart: usize = 0x1C4; // float32
                pub const m_flFadeEnd: usize = 0x1C8; // float32
                pub const m_bCPPairs: usize = 0x1CC; // bool
                pub const m_PathParams: usize = 0x1D0; // CPathParameters
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelElementToScalar {
                pub const m_hModel: usize = 0x1C8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1D0; // CUtlVector<CUtlString>
                pub const m_values: usize = 0x1E8; // CUtlVector<float32>
                pub const m_nFieldInput: usize = 0x200; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x204; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x208; // ParticleSetMethod_t
                pub const m_bModelFromRenderer: usize = 0x20C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ClampVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1C8; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x840; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderStatusEffectCitadel {
                pub const m_pTextureColorWarp: usize = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureNormal: usize = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureMetalness: usize = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureRoughness: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureSelfIllum: usize = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDetail: usize = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapCPtoScalar {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nField: usize = 0x1D0; // int32
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_flStartTime: usize = 0x1E4; // float32
                pub const m_flEndTime: usize = 0x1E8; // float32
                pub const m_nSetMethod: usize = 0x1EC; // ParticleSetMethod_t
                pub const m_flRemapBias: usize = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IParticleSystemDefinition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WindForce {
                pub const m_vForce: usize = 0x1D0; // Vector
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetVariable {
                pub const m_variableReference: usize = 0x1C8; // CParticleVariableRef
                pub const m_transformInput: usize = 0x208; // CParticleTransformInput
                pub const m_positionOffset: usize = 0x270; // Vector
                pub const m_rotationOffset: usize = 0x27C; // QAngle
                pub const m_vecInput: usize = 0x288; // CParticleCollectionVecInput
                pub const m_floatInput: usize = 0x900; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderStandardLight {
                pub const m_nLightType: usize = 0x210; // ParticleLightTypeChoiceList_t
                pub const m_vecColorScale: usize = 0x218; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x890; // ParticleColorBlendType_t
                pub const m_flIntensity: usize = 0x898; // CParticleCollectionFloatInput
                pub const m_bCastShadows: usize = 0x9F8; // bool
                pub const m_flTheta: usize = 0xA00; // CParticleCollectionFloatInput
                pub const m_flPhi: usize = 0xB60; // CParticleCollectionFloatInput
                pub const m_flRadiusMultiplier: usize = 0xCC0; // CParticleCollectionFloatInput
                pub const m_nAttenuationStyle: usize = 0xE20; // StandardLightingAttenuationStyle_t
                pub const m_flFalloffLinearity: usize = 0xE28; // CParticleCollectionFloatInput
                pub const m_flFiftyPercentFalloff: usize = 0xF88; // CParticleCollectionFloatInput
                pub const m_flZeroPercentFalloff: usize = 0x10E8; // CParticleCollectionFloatInput
                pub const m_bRenderDiffuse: usize = 0x1248; // bool
                pub const m_bRenderSpecular: usize = 0x1249; // bool
                pub const m_lightCookie: usize = 0x1250; // CUtlString
                pub const m_nPriority: usize = 0x1258; // int32
                pub const m_nFogLightingMode: usize = 0x125C; // ParticleLightFogLightingMode_t
                pub const m_flFogContribution: usize = 0x1260; // CParticleCollectionRendererFloatInput
                pub const m_nCapsuleLightBehavior: usize = 0x13C0; // ParticleLightBehaviorChoiceList_t
                pub const m_flCapsuleLength: usize = 0x13C4; // float32
                pub const m_bReverseOrder: usize = 0x13C8; // bool
                pub const m_bClosedLoop: usize = 0x13C9; // bool
                pub const m_nPrevPntSource: usize = 0x13CC; // ParticleAttributeIndex_t
                pub const m_flMaxLength: usize = 0x13D0; // float32
                pub const m_flMinLength: usize = 0x13D4; // float32
                pub const m_bIgnoreDT: usize = 0x13D8; // bool
                pub const m_flConstrainRadiusToLengthRatio: usize = 0x13DC; // float32
                pub const m_flLengthScale: usize = 0x13E0; // float32
                pub const m_flLengthFadeInTime: usize = 0x13E4; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_DistanceToTransform {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x328; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x488; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x5E8; // CPerParticleFloatInput
                pub const m_TransformStart: usize = 0x748; // CParticleTransformInput
                pub const m_bLOS: usize = 0x7B0; // bool
                pub const m_CollisionGroupName: usize = 0x7B1; // char[128]
                pub const m_nTraceSet: usize = 0x834; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x838; // float32
                pub const m_flLOSScale: usize = 0x83C; // float32
                pub const m_nSetMethod: usize = 0x840; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x844; // bool
                pub const m_bAdditive: usize = 0x845; // bool
                pub const m_vecComponentScale: usize = 0x848; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapControlPointOrientationToRotation {
                pub const m_nCP: usize = 0x1C0; // int32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x1C8; // float32
                pub const m_nComponent: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToCenter {
                pub const m_nCP1: usize = 0x1C8; // int32
                pub const m_vecCP1Pos: usize = 0x1CC; // Vector
                pub const m_bUseAvgParticlePos: usize = 0x1D8; // bool
                pub const m_nSetParent: usize = 0x1DC; // ParticleParentSetMode_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapAverageScalarValuetoCP {
                pub const m_nOutControlPointNumber: usize = 0x1C8; // int32
                pub const m_nOutVectorField: usize = 0x1CC; // int32
                pub const m_nField: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDotProductToScalar {
                pub const m_nInputCP1: usize = 0x1C0; // int32
                pub const m_nInputCP2: usize = 0x1C4; // int32
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_bUseParticleVelocity: usize = 0x1DC; // bool
                pub const m_nSetMethod: usize = 0x1E0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1E4; // bool
                pub const m_bUseParticleNormal: usize = 0x1E5; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapCPtoCP {
                pub const m_nInputControlPoint: usize = 0x1C8; // int32
                pub const m_nOutputControlPoint: usize = 0x1CC; // int32
                pub const m_nInputField: usize = 0x1D0; // int32
                pub const m_nOutputField: usize = 0x1D4; // int32
                pub const m_flInputMin: usize = 0x1D8; // float32
                pub const m_flInputMax: usize = 0x1DC; // float32
                pub const m_flOutputMin: usize = 0x1E0; // float32
                pub const m_flOutputMax: usize = 0x1E4; // float32
                pub const m_bDerivative: usize = 0x1E8; // bool
                pub const m_flInterpRate: usize = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointRotation {
                pub const m_vecRotAxis: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_flRotRate: usize = 0x840; // CParticleCollectionFloatInput
                pub const m_nCP: usize = 0x9A0; // int32
                pub const m_nLocalCP: usize = 0x9A4; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CurlNoiseForce {
                pub const m_nNoiseType: usize = 0x1D0; // ParticleDirectionNoiseType_t
                pub const m_vecNoiseFreq: usize = 0x1D8; // CPerParticleVecInput
                pub const m_vecNoiseScale: usize = 0x850; // CPerParticleVecInput
                pub const m_vecOffset: usize = 0xEC8; // CPerParticleVecInput
                pub const m_vecOffsetRate: usize = 0x1540; // CPerParticleVecInput
                pub const m_flWorleySeed: usize = 0x1BB8; // CPerParticleFloatInput
                pub const m_flWorleyJitter: usize = 0x1D18; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_Orient2DRelToCP {
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x1D0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetSimulationRate {
                pub const m_flSimulationScale: usize = 0x1C8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_FadeIn {
                pub const m_flFadeInTimeMin: usize = 0x1C0; // float32
                pub const m_flFadeInTimeMax: usize = 0x1C4; // float32
                pub const m_flFadeInTimeExp: usize = 0x1C8; // float32
                pub const m_bProportional: usize = 0x1CC; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderScreenShake {
                pub const m_flDurationScale: usize = 0x210; // float32
                pub const m_flRadiusScale: usize = 0x214; // float32
                pub const m_flFrequencyScale: usize = 0x218; // float32
                pub const m_flAmplitudeScale: usize = 0x21C; // float32
                pub const m_nRadiusField: usize = 0x220; // ParticleAttributeIndex_t
                pub const m_nDurationField: usize = 0x224; // ParticleAttributeIndex_t
                pub const m_nFrequencyField: usize = 0x228; // ParticleAttributeIndex_t
                pub const m_nAmplitudeField: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_nFilterCP: usize = 0x230; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapBoundingVolumetoCP {
                pub const m_nOutControlPointNumber: usize = 0x1C8; // int32
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_HSVShiftToCP {
                pub const m_nColorCP: usize = 0x1C8; // int32
                pub const m_nColorGemEnableCP: usize = 0x1CC; // int32
                pub const m_nOutputCP: usize = 0x1D0; // int32
                pub const m_DefaultHSVColor: usize = 0x1D4; // Color
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_GlobalScale {
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_nScaleControlPointNumber: usize = 0x1CC; // int32
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
                pub const m_bScaleRadius: usize = 0x1D4; // bool
                pub const m_bScalePosition: usize = 0x1D5; // bool
                pub const m_bScaleVelocity: usize = 0x1D6; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RadiusFromCPObject {
                pub const m_nControlPoint: usize = 0x1C8; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialVelocityFromHitbox {
                pub const m_flVelocityMin: usize = 0x1C8; // float32
                pub const m_flVelocityMax: usize = 0x1CC; // float32
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
                pub const m_HitboxSetName: usize = 0x1D4; // char[128]
                pub const m_bUseBones: usize = 0x254; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1C4; // Vector
                pub const m_flStartTime: usize = 0x1D0; // float32
                pub const m_flEndTime: usize = 0x1D4; // float32
                pub const m_nSetMethod: usize = 0x1D8; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointFieldToWater {
                pub const m_nSourceCP: usize = 0x1C8; // int32
                pub const m_nDestCP: usize = 0x1CC; // int32
                pub const m_nCPField: usize = 0x1D0; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TextureGroup_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_bReplaceTextureWithGradient: usize = 0x1; // bool
                pub const m_hTexture: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Gradient: usize = 0x10; // CColorGradient
                pub const m_nTextureType: usize = 0x28; // SpriteCardTextureType_t
                pub const m_nTextureChannels: usize = 0x2C; // SpriteCardTextureChannel_t
                pub const m_nTextureBlendMode: usize = 0x30; // ParticleTextureLayerBlendType_t
                pub const m_flTextureBlend: usize = 0x38; // CParticleCollectionRendererFloatInput
                pub const m_TextureControls: usize = 0x198; // TextureControls_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_TimeVaryingForce {
                pub const m_flStartLerpTime: usize = 0x1D0; // float32
                pub const m_StartingForce: usize = 0x1D4; // Vector
                pub const m_flEndLerpTime: usize = 0x1E0; // float32
                pub const m_EndingForce: usize = 0x1E4; // Vector
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetCPOrientationToGroundNormal {
                pub const m_flInterpRate: usize = 0x1C0; // float32
                pub const m_flMaxTraceLength: usize = 0x1C4; // float32
                pub const m_flTolerance: usize = 0x1C8; // float32
                pub const m_flTraceOffset: usize = 0x1CC; // float32
                pub const m_CollisionGroupName: usize = 0x1D0; // char[128]
                pub const m_nTraceSet: usize = 0x250; // ParticleTraceSet_t
                pub const m_nInputCP: usize = 0x254; // int32
                pub const m_nOutputCP: usize = 0x258; // int32
                pub const m_bIncludeWater: usize = 0x268; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SnapshotSkinToBones {
                pub const m_bTransformNormals: usize = 0x1C0; // bool
                pub const m_bTransformRadii: usize = 0x1C1; // bool
                pub const m_nControlPointNumber: usize = 0x1C4; // int32
                pub const m_flLifeTimeFadeStart: usize = 0x1C8; // float32
                pub const m_flLifeTimeFadeEnd: usize = 0x1CC; // float32
                pub const m_flJumpThreshold: usize = 0x1D0; // float32
                pub const m_flPrevPosScale: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateWithinSphereTransform {
                pub const m_fRadiusMin: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_fRadiusMax: usize = 0x328; // CPerParticleFloatInput
                pub const m_vecDistanceBias: usize = 0x488; // CPerParticleVecInput
                pub const m_vecDistanceBiasAbs: usize = 0xB00; // Vector
                pub const m_TransformInput: usize = 0xB10; // CParticleTransformInput
                pub const m_fSpeedMin: usize = 0xB78; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0xCD8; // CPerParticleFloatInput
                pub const m_fSpeedRandExp: usize = 0xE38; // float32
                pub const m_bLocalCoords: usize = 0xE3C; // bool
                pub const m_flEndCPGrowthTime: usize = 0xE40; // float32
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0xE48; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0x14C0; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0x1B38; // ParticleAttributeIndex_t
                pub const m_nFieldVelocity: usize = 0x1B3C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RadiusDecay {
                pub const m_flMinRadius: usize = 0x1C0; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelBodyPartToScalar {
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapScalarToVector {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_vecOutputMin: usize = 0x1D8; // Vector
                pub const m_vecOutputMax: usize = 0x1E4; // Vector
                pub const m_flStartTime: usize = 0x1F0; // float32
                pub const m_flEndTime: usize = 0x1F4; // float32
                pub const m_nSetMethod: usize = 0x1F8; // ParticleSetMethod_t
                pub const m_nControlPointNumber: usize = 0x1FC; // int32
                pub const m_bLocalCoords: usize = 0x200; // bool
                pub const m_flRemapBias: usize = 0x204; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitialSequenceFromModel {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_nSetMethod: usize = 0x1E4; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_NoiseEmitter {
                pub const m_flEmissionDuration: usize = 0x1C8; // float32
                pub const m_flStartTime: usize = 0x1CC; // float32
                pub const m_flEmissionScale: usize = 0x1D0; // float32
                pub const m_nScaleControlPoint: usize = 0x1D4; // int32
                pub const m_nScaleControlPointField: usize = 0x1D8; // int32
                pub const m_nWorldNoisePoint: usize = 0x1DC; // int32
                pub const m_bAbsVal: usize = 0x1E0; // bool
                pub const m_bAbsValInv: usize = 0x1E1; // bool
                pub const m_flOffset: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
                pub const m_flNoiseScale: usize = 0x1F0; // float32
                pub const m_flWorldNoiseScale: usize = 0x1F4; // float32
                pub const m_vecOffsetLoc: usize = 0x1F8; // Vector
                pub const m_flWorldTimeScale: usize = 0x204; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionInitializer {
                pub const m_nAssociatedEmitterIndex: usize = 0x1C0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SelectivelyEnableChildren {
                pub const m_nChildGroupID: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nFirstChild: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_nNumChildrenToEnable: usize = 0x488; // CParticleCollectionFloatInput
                pub const m_bPlayEndcapOnStop: usize = 0x5E8; // bool
                pub const m_bDestroyImmediately: usize = 0x5E9; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ModelReference_t {
                pub const m_model: usize = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_flRelativeProbabilityOfSpawn: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PlanarConstraint {
                pub const m_PointOnPlane: usize = 0x1C0; // Vector
                pub const m_PlaneNormal: usize = 0x1CC; // Vector
                pub const m_nControlPointNumber: usize = 0x1D8; // int32
                pub const m_bGlobalOrigin: usize = 0x1DC; // bool
                pub const m_bGlobalNormal: usize = 0x1DD; // bool
                pub const m_flRadiusScale: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flMaximumDistanceToCP: usize = 0x340; // CParticleCollectionFloatInput
                pub const m_bUseOldCode: usize = 0x4A0; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateFromCPs {
                pub const m_nIncrement: usize = 0x1C8; // int32
                pub const m_nMinCP: usize = 0x1CC; // int32
                pub const m_nMaxCP: usize = 0x1D0; // int32
                pub const m_nDynamicCPCount: usize = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LockPoints {
                pub const m_nMinCol: usize = 0x1C0; // int32
                pub const m_nMaxCol: usize = 0x1C4; // int32
                pub const m_nMinRow: usize = 0x1C8; // int32
                pub const m_nMaxRow: usize = 0x1CC; // int32
                pub const m_nControlPoint: usize = 0x1D0; // int32
                pub const m_flBlendValue: usize = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_CreateSpiralSphere {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nOverrideCP: usize = 0x1CC; // int32
                pub const m_nDensity: usize = 0x1D0; // int32
                pub const m_flInitialRadius: usize = 0x1D4; // float32
                pub const m_flInitialSpeedMin: usize = 0x1D8; // float32
                pub const m_flInitialSpeedMax: usize = 0x1DC; // float32
                pub const m_bUseParticleCount: usize = 0x1E0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CPVelocityForce {
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
                pub const m_flScale: usize = 0x1D8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapNamedModelElementEndCap {
                pub const m_hModel: usize = 0x1C0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_inNames: usize = 0x1C8; // CUtlVector<CUtlString>
                pub const m_outNames: usize = 0x1E0; // CUtlVector<CUtlString>
                pub const m_fallbackNames: usize = 0x1F8; // CUtlVector<CUtlString>
                pub const m_bModelFromRenderer: usize = 0x210; // bool
                pub const m_nFieldInput: usize = 0x214; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x218; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ScaleVelocity {
                pub const m_vecScale: usize = 0x1C8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MoveToHitbox {
                pub const m_modelInput: usize = 0x1C0; // CParticleModelInput
                pub const m_transformInput: usize = 0x220; // CParticleTransformInput
                pub const m_flLifeTimeLerpStart: usize = 0x28C; // float32
                pub const m_flLifeTimeLerpEnd: usize = 0x290; // float32
                pub const m_flPrevPosScale: usize = 0x294; // float32
                pub const m_HitboxSetName: usize = 0x298; // char[128]
                pub const m_bUseBones: usize = 0x318; // bool
                pub const m_nLerpType: usize = 0x31C; // HitboxLerpType_t
                pub const m_flInterpolation: usize = 0x320; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PointList {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1D0; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x1E8; // bool
                pub const m_bClosedLoop: usize = 0x1E9; // bool
                pub const m_nNumPointsAlongPath: usize = 0x1EC; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpToOtherAttribute {
                pub const m_flInterpolation: usize = 0x1C0; // CPerParticleFloatInput
                pub const m_nFieldInputFrom: usize = 0x320; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x324; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x328; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RandomColor {
                pub const m_ColorMin: usize = 0x1E4; // Color
                pub const m_ColorMax: usize = 0x1E8; // Color
                pub const m_TintMin: usize = 0x1EC; // Color
                pub const m_TintMax: usize = 0x1F0; // Color
                pub const m_flTintPerc: usize = 0x1F4; // float32
                pub const m_flUpdateThreshold: usize = 0x1F8; // float32
                pub const m_nTintCP: usize = 0x1FC; // int32
                pub const m_nFieldOutput: usize = 0x200; // ParticleAttributeIndex_t
                pub const m_nTintBlendMode: usize = 0x204; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x208; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetGravityToCP {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nCPOutput: usize = 0x1CC; // int32
                pub const m_flScale: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bSetOrientation: usize = 0x330; // bool
                pub const m_bSetZDown: usize = 0x331; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToScalar {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1CC; // int32
                pub const m_nInputMax: usize = 0x1D0; // int32
                pub const m_nScaleControlPoint: usize = 0x1D4; // int32
                pub const m_nScaleControlPointField: usize = 0x1D8; // int32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_nSetMethod: usize = 0x1E4; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1E8; // bool
                pub const m_bInvert: usize = 0x1E9; // bool
                pub const m_bWrap: usize = 0x1EA; // bool
                pub const m_flRemapBias: usize = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InheritFromParentParticles {
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1D0; // int32
                pub const m_bRandomDistribution: usize = 0x1D4; // bool
                pub const m_nRandomSeed: usize = 0x1D8; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarLinearSimple {
                pub const m_Rate: usize = 0x1C0; // float32
                pub const m_flStartTime: usize = 0x1C4; // float32
                pub const m_flEndTime: usize = 0x1C8; // float32
                pub const m_nField: usize = 0x1F0; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ChaoticAttractor {
                pub const m_flAParm: usize = 0x1C8; // float32
                pub const m_flBParm: usize = 0x1CC; // float32
                pub const m_flCParm: usize = 0x1D0; // float32
                pub const m_flDParm: usize = 0x1D4; // float32
                pub const m_flScale: usize = 0x1D8; // float32
                pub const m_flSpeedMin: usize = 0x1DC; // float32
                pub const m_flSpeedMax: usize = 0x1E0; // float32
                pub const m_nBaseCP: usize = 0x1E4; // int32
                pub const m_bUniformSpeed: usize = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_MovementRigidAttachToCP {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_nScaleControlPoint: usize = 0x1C4; // int32
                pub const m_nScaleCPField: usize = 0x1C8; // int32
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_bOffsetLocal: usize = 0x1D4; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderFlattenGrass {
                pub const m_flFlattenStrength: usize = 0x210; // float32
                pub const m_nStrengthFieldOverride: usize = 0x214; // ParticleAttributeIndex_t
                pub const m_flRadiusScale: usize = 0x218; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderLightBeam {
                pub const m_vColorBlend: usize = 0x210; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x888; // ParticleColorBlendType_t
                pub const m_flBrightnessLumensPerMeter: usize = 0x890; // CParticleCollectionFloatInput
                pub const m_bCastShadows: usize = 0x9F0; // bool
                pub const m_flSkirt: usize = 0x9F8; // CParticleCollectionFloatInput
                pub const m_flRange: usize = 0xB58; // CParticleCollectionFloatInput
                pub const m_flThickness: usize = 0xCB8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EnableChildrenFromParentParticleCount {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_nFirstChild: usize = 0x1CC; // int32
                pub const m_nNumChildrenToEnable: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bDisableChildren: usize = 0x330; // bool
                pub const m_bPlayEndcapOnStop: usize = 0x331; // bool
                pub const m_bDestroyImmediately: usize = 0x332; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_DistanceToCPInit {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x330; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x490; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x5F0; // CPerParticleFloatInput
                pub const m_nStartCP: usize = 0x750; // int32
                pub const m_bLOS: usize = 0x754; // bool
                pub const m_CollisionGroupName: usize = 0x755; // char[128]
                pub const m_nTraceSet: usize = 0x7D8; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x7E0; // CPerParticleFloatInput
                pub const m_flLOSScale: usize = 0x940; // float32
                pub const m_nSetMethod: usize = 0x944; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x948; // bool
                pub const m_vecDistanceScale: usize = 0x94C; // Vector
                pub const m_flRemapBias: usize = 0x958; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CReplicationParameters {
                pub const m_nReplicationMode: usize = 0x0; // ParticleReplicationMode_t
                pub const m_bScaleChildParticleRadii: usize = 0x4; // bool
                pub const m_flMinRandomRadiusScale: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_flMaxRandomRadiusScale: usize = 0x168; // CParticleCollectionFloatInput
                pub const m_vMinRandomDisplacement: usize = 0x2C8; // CParticleCollectionVecInput
                pub const m_vMaxRandomDisplacement: usize = 0x940; // CParticleCollectionVecInput
                pub const m_flModellingScale: usize = 0xFB8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_EndCapDecay {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ForceBasedOnDistanceToPlane {
                pub const m_flMinDist: usize = 0x1D0; // float32
                pub const m_vecForceAtMinDist: usize = 0x1D4; // Vector
                pub const m_flMaxDist: usize = 0x1E0; // float32
                pub const m_vecForceAtMaxDist: usize = 0x1E4; // Vector
                pub const m_vecPlaneNormal: usize = 0x1F0; // Vector
                pub const m_nControlPointNumber: usize = 0x1FC; // int32
                pub const m_flExponent: usize = 0x200; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapDensityToVector {
                pub const m_flRadiusScale: usize = 0x1C0; // float32
                pub const m_nFieldOutput: usize = 0x1C4; // ParticleAttributeIndex_t
                pub const m_flDensityMin: usize = 0x1C8; // float32
                pub const m_flDensityMax: usize = 0x1CC; // float32
                pub const m_vecOutputMin: usize = 0x1D0; // Vector
                pub const m_vecOutputMax: usize = 0x1DC; // Vector
                pub const m_bUseParentDensity: usize = 0x1E8; // bool
                pub const m_nVoxelGridResolution: usize = 0x1EC; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleControlPointConfiguration_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_drivers: usize = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                pub const m_previewState: usize = 0x20; // ParticlePreviewState_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetRigidAttachment {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_bLocalSpace: usize = 0x1D4; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_nVariableField: usize = 0x8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionConstraint {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapSpeed {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C4; // float32
                pub const m_flInputMax: usize = 0x1C8; // float32
                pub const m_flOutputMin: usize = 0x1CC; // float32
                pub const m_flOutputMax: usize = 0x1D0; // float32
                pub const m_nSetMethod: usize = 0x1D4; // ParticleSetMethod_t
                pub const m_bIgnoreDelta: usize = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 55
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderModels {
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x210; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x211; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x212; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x213; // bool
                pub const m_ModelList: usize = 0x218; // CUtlVector<ModelReference_t>
                pub const m_nBodyGroupField: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_nSubModelField: usize = 0x234; // ParticleAttributeIndex_t
                pub const m_bIgnoreNormal: usize = 0x238; // bool
                pub const m_bOrientZ: usize = 0x239; // bool
                pub const m_bCenterOffset: usize = 0x23A; // bool
                pub const m_vecLocalOffset: usize = 0x240; // CPerParticleVecInput
                pub const m_vecLocalRotation: usize = 0x8B8; // CPerParticleVecInput
                pub const m_bIgnoreRadius: usize = 0xF30; // bool
                pub const m_nModelScaleCP: usize = 0xF34; // int32
                pub const m_vecComponentScale: usize = 0xF38; // CPerParticleVecInput
                pub const m_bLocalScale: usize = 0x15B0; // bool
                pub const m_nSizeCullBloat: usize = 0x15B4; // int32
                pub const m_bAnimated: usize = 0x15B8; // bool
                pub const m_flAnimationRate: usize = 0x15C0; // CPerParticleFloatInput
                pub const m_bScaleAnimationRate: usize = 0x1720; // bool
                pub const m_bForceLoopingAnimation: usize = 0x1721; // bool
                pub const m_bResetAnimOnStop: usize = 0x1722; // bool
                pub const m_bManualAnimFrame: usize = 0x1723; // bool
                pub const m_nAnimationScaleField: usize = 0x1724; // ParticleAttributeIndex_t
                pub const m_nAnimationField: usize = 0x1728; // ParticleAttributeIndex_t
                pub const m_nManualFrameField: usize = 0x172C; // ParticleAttributeIndex_t
                pub const m_ActivityName: usize = 0x1730; // char[256]
                pub const m_SequenceName: usize = 0x1830; // char[256]
                pub const m_bEnableClothSimulation: usize = 0x1930; // bool
                pub const m_ClothEffectName: usize = 0x1931; // char[64]
                pub const m_hOverrideMaterial: usize = 0x1978; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bOverrideTranslucentMaterials: usize = 0x1980; // bool
                pub const m_nSkin: usize = 0x1988; // CPerParticleFloatInput
                pub const m_MaterialVars: usize = 0x1AE8; // CUtlVector<MaterialVariable_t>
                pub const m_flRenderFilter: usize = 0x1B00; // CPerParticleFloatInput
                pub const m_flManualModelSelection: usize = 0x1C60; // CPerParticleFloatInput
                pub const m_modelInput: usize = 0x1DC0; // CParticleModelInput
                pub const m_nLOD: usize = 0x1E20; // int32
                pub const m_EconSlotName: usize = 0x1E24; // char[256]
                pub const m_bOriginalModel: usize = 0x1F24; // bool
                pub const m_bSuppressTint: usize = 0x1F25; // bool
                pub const m_nSubModelFieldType: usize = 0x1F28; // RenderModelSubModelFieldType_t
                pub const m_bDisableShadows: usize = 0x1F2C; // bool
                pub const m_bDisableDepthPrepass: usize = 0x1F2D; // bool
                pub const m_bAcceptsDecals: usize = 0x1F2E; // bool
                pub const m_bForceDrawInterlevedWithSiblings: usize = 0x1F2F; // bool
                pub const m_bDoNotDrawInParticlePass: usize = 0x1F30; // bool
                pub const m_bAllowApproximateTransforms: usize = 0x1F31; // bool
                pub const m_szRenderAttribute: usize = 0x1F32; // char[260]
                pub const m_flRadiusScale: usize = 0x2038; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x2198; // CParticleCollectionFloatInput
                pub const m_flRollScale: usize = 0x22F8; // CParticleCollectionFloatInput
                pub const m_nAlpha2Field: usize = 0x2458; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x2460; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x2AD8; // ParticleColorBlendType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderClientPhysicsImpulse {
                pub const m_flRadius: usize = 0x210; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0x370; // CPerParticleFloatInput
                pub const m_nSimIdFilter: usize = 0x4D0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CParticleFunctionEmitter {
                pub const m_nEmitterIndex: usize = 0x1C0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapNamedModelMeshGroupToScalar {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointOrientationToCPVelocity {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nCPOutput: usize = 0x1CC; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RopeSpringConstraint {
                pub const m_flRestLength: usize = 0x1C0; // CParticleCollectionFloatInput
                pub const m_flMinDistance: usize = 0x320; // CParticleCollectionFloatInput
                pub const m_flMaxDistance: usize = 0x480; // CParticleCollectionFloatInput
                pub const m_flAdjustmentScale: usize = 0x5E0; // float32
                pub const m_flInitialRestingLength: usize = 0x5E8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_PositionWarpScalar {
                pub const m_vecWarpMin: usize = 0x1C8; // Vector
                pub const m_vecWarpMax: usize = 0x1D4; // Vector
                pub const m_InputValue: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flPrevPosScale: usize = 0x340; // float32
                pub const m_nScaleControlPointNumber: usize = 0x344; // int32
                pub const m_nControlPointNumber: usize = 0x348; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ForceControlPointStub {
                pub const m_ControlPoint: usize = 0x1C8; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_VectorNoise {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1C4; // Vector
                pub const m_vecOutputMax: usize = 0x1D0; // Vector
                pub const m_fl4NoiseScale: usize = 0x1DC; // float32
                pub const m_bAdditive: usize = 0x1E0; // bool
                pub const m_bOffset: usize = 0x1E1; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1E4; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapParticleCountToScalar {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nInputMax: usize = 0x328; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x488; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x5E8; // CParticleCollectionFloatInput
                pub const m_bActiveRange: usize = 0x748; // bool
                pub const m_nSetMethod: usize = 0x74C; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_QuantizeFloat {
                pub const m_InputValue: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x328; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RemapModelVolumetoCP {
                pub const m_nBBoxType: usize = 0x1C8; // BBoxVolumeType_t
                pub const m_nInControlPointNumber: usize = 0x1CC; // int32
                pub const m_nOutControlPointNumber: usize = 0x1D0; // int32
                pub const m_nOutControlPointMaxNumber: usize = 0x1D4; // int32
                pub const m_nField: usize = 0x1D8; // int32
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_flOutputMin: usize = 0x1E4; // float32
                pub const m_flOutputMax: usize = 0x1E8; // float32
                pub const m_bBBoxOnly: usize = 0x1EC; // bool
                pub const m_bCubeRoot: usize = 0x1ED; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetToCP {
                pub const m_nControlPointNumber: usize = 0x1C0; // int32
                pub const m_vecOffset: usize = 0x1C4; // Vector
                pub const m_bOffsetLocal: usize = 0x1D0; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ParticleControlPointDriver_t {
                pub const m_iControlPoint: usize = 0x0; // int32
                pub const m_iAttachType: usize = 0x4; // ParticleAttachment_t
                pub const m_attachmentName: usize = 0x8; // CUtlString
                pub const m_vecOffset: usize = 0x10; // Vector
                pub const m_angOffset: usize = 0x1C; // QAngle
                pub const m_entityName: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ParentVortices {
                pub const m_flForceScale: usize = 0x1D0; // float32
                pub const m_vecTwistAxis: usize = 0x1D4; // Vector
                pub const m_bFlipBasedOnYaw: usize = 0x1E0; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetControlPointToCPVelocity {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nCPOutputVel: usize = 0x1CC; // int32
                pub const m_bNormalize: usize = 0x1D0; // bool
                pub const m_nCPOutputMag: usize = 0x1D4; // int32
                pub const m_nCPField: usize = 0x1D8; // int32
                pub const m_vecComparisonVelocity: usize = 0x1E0; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ClientPhysics {
                pub const m_strPhysicsType: usize = 0x210; // CUtlString
                pub const m_bStartAsleep: usize = 0x218; // bool
                pub const m_flPlayerWakeRadius: usize = 0x220; // CParticleCollectionFloatInput
                pub const m_flVehicleWakeRadius: usize = 0x380; // CParticleCollectionFloatInput
                pub const m_bUseHighQualitySimulation: usize = 0x4E0; // bool
                pub const m_nMaxParticleCount: usize = 0x4E4; // int32
                pub const m_bRespectExclusionVolumes: usize = 0x4E8; // bool
                pub const m_bKillParticles: usize = 0x4E9; // bool
                pub const m_bDeleteSim: usize = 0x4EA; // bool
                pub const m_nControlPoint: usize = 0x4EC; // int32
                pub const m_nForcedSimId: usize = 0x4F0; // int32
                pub const m_nColorBlendType: usize = 0x4F4; // ParticleColorBlendType_t
                pub const m_nForcedStatusEffects: usize = 0x4F8; // ParticleAttrBoxFlags_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SpinYaw {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointDefinitionWithTimeValues_t {
                pub const m_flTimeDuration: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod RenderProjectedMaterial_t {
                pub const m_hMaterial: usize = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SetFloatAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1C8; // VectorFloatExpressionType_t
                pub const m_vInput1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x848; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0xEC0; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x1020; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x1024; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_ExternalWindForce {
                pub const m_vecSamplePosition: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vecScale: usize = 0x848; // CPerParticleVecInput
                pub const m_bSampleWind: usize = 0xEC0; // bool
                pub const m_bSampleWater: usize = 0xEC1; // bool
                pub const m_bDampenNearWaterPlane: usize = 0xEC2; // bool
                pub const m_bSampleGravity: usize = 0xEC3; // bool
                pub const m_vecGravityForce: usize = 0xEC8; // CPerParticleVecInput
                pub const m_bUseBasicMovementGravity: usize = 0x1540; // bool
                pub const m_flLocalGravityScale: usize = 0x1548; // CPerParticleFloatInput
                pub const m_flLocalBuoyancyScale: usize = 0x16A8; // CPerParticleFloatInput
                pub const m_vecBuoyancyForce: usize = 0x1808; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_ModelCull {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_bBoundBox: usize = 0x1CC; // bool
                pub const m_bCullOutside: usize = 0x1CD; // bool
                pub const m_bUseBones: usize = 0x1CE; // bool
                pub const m_HitboxSetName: usize = 0x1CF; // char[128]
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderSprites {
                pub const m_nSequenceOverride: usize = 0x2C18; // CParticleCollectionRendererFloatInput
                pub const m_bSequenceNumbersAreRawSequenceIndices: usize = 0x2D78; // bool
                pub const m_nOrientationType: usize = 0x2D7C; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x2D80; // int32
                pub const m_bUseYawWithNormalAligned: usize = 0x2D84; // bool
                pub const m_flMinSize: usize = 0x2D88; // CParticleCollectionRendererFloatInput
                pub const m_flMaxSize: usize = 0x2EE8; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaAdjustWithSizeAdjust: usize = 0x3048; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeSize: usize = 0x31A8; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x3308; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeDot: usize = 0x3468; // float32
                pub const m_flEndFadeDot: usize = 0x346C; // float32
                pub const m_bDistanceAlpha: usize = 0x3470; // bool
                pub const m_bSoftEdges: usize = 0x3471; // bool
                pub const m_flEdgeSoftnessStart: usize = 0x3474; // float32
                pub const m_flEdgeSoftnessEnd: usize = 0x3478; // float32
                pub const m_bOutline: usize = 0x347C; // bool
                pub const m_OutlineColor: usize = 0x347D; // Color
                pub const m_nOutlineAlpha: usize = 0x3484; // int32
                pub const m_flOutlineStart0: usize = 0x3488; // float32
                pub const m_flOutlineStart1: usize = 0x348C; // float32
                pub const m_flOutlineEnd0: usize = 0x3490; // float32
                pub const m_flOutlineEnd1: usize = 0x3494; // float32
                pub const m_nLightingMode: usize = 0x3498; // ParticleLightingQuality_t
                pub const m_flLightingTessellation: usize = 0x34A0; // CParticleCollectionRendererFloatInput
                pub const m_flLightingDirectionality: usize = 0x3600; // CParticleCollectionRendererFloatInput
                pub const m_bParticleShadows: usize = 0x3760; // bool
                pub const m_flShadowDensity: usize = 0x3764; // float32
                pub const m_replicationParameters: usize = 0x3768; // CReplicationParameters
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_PercentageBetweenTransformLerpCPs {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1C4; // float32
                pub const m_flInputMax: usize = 0x1C8; // float32
                pub const m_TransformStart: usize = 0x1D0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x238; // CParticleTransformInput
                pub const m_nOutputStartCP: usize = 0x2A0; // int32
                pub const m_nOutputStartField: usize = 0x2A4; // int32
                pub const m_nOutputEndCP: usize = 0x2A8; // int32
                pub const m_nOutputEndField: usize = 0x2AC; // int32
                pub const m_nSetMethod: usize = 0x2B0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2B4; // bool
                pub const m_bRadialCheck: usize = 0x2B5; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetPerChildControlPoint {
                pub const m_nChildGroupID: usize = 0x1C0; // int32
                pub const m_nFirstControlPoint: usize = 0x1C4; // int32
                pub const m_nNumControlPoints: usize = 0x1C8; // int32
                pub const m_nParticleIncrement: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nFirstSourcePoint: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_bSetOrientation: usize = 0x490; // bool
                pub const m_nOrientationField: usize = 0x494; // ParticleAttributeIndex_t
                pub const m_bNumBasedOnParticleCount: usize = 0x498; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderTreeShake {
                pub const m_flPeakStrength: usize = 0x210; // float32
                pub const m_nPeakStrengthFieldOverride: usize = 0x214; // ParticleAttributeIndex_t
                pub const m_flRadius: usize = 0x218; // float32
                pub const m_nRadiusFieldOverride: usize = 0x21C; // ParticleAttributeIndex_t
                pub const m_flShakeDuration: usize = 0x220; // float32
                pub const m_flTransitionTime: usize = 0x224; // float32
                pub const m_flTwistAmount: usize = 0x228; // float32
                pub const m_flRadialAmount: usize = 0x22C; // float32
                pub const m_flControlPointOrientationAmount: usize = 0x230; // float32
                pub const m_nControlPointForLinearDirection: usize = 0x234; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_WorldCollideConstraint {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_SetAttributeToScalarExpression {
                pub const m_nExpression: usize = 0x1C0; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x328; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x488; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x5E8; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x5EC; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CycleScalar {
                pub const m_nDestField: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flStartValue: usize = 0x1C4; // float32
                pub const m_flEndValue: usize = 0x1C8; // float32
                pub const m_flCycleTime: usize = 0x1CC; // float32
                pub const m_bDoNotRepeatCycle: usize = 0x1D0; // bool
                pub const m_bSynchronizeParticles: usize = 0x1D1; // bool
                pub const m_nCPScale: usize = 0x1D4; // int32
                pub const m_nCPFieldMin: usize = 0x1D8; // int32
                pub const m_nCPFieldMax: usize = 0x1DC; // int32
                pub const m_nSetMethod: usize = 0x1E0; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RenderMaterialProxy {
                pub const m_nMaterialControlPoint: usize = 0x210; // int32
                pub const m_nProxyType: usize = 0x214; // MaterialProxyType_t
                pub const m_MaterialVars: usize = 0x218; // CUtlVector<MaterialVariable_t>
                pub const m_hOverrideMaterial: usize = 0x230; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flMaterialOverrideEnabled: usize = 0x238; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x398; // CParticleCollectionVecInput
                pub const m_flAlpha: usize = 0xA10; // CPerParticleFloatInput
                pub const m_nColorBlendType: usize = 0xB70; // ParticleColorBlendType_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod FloatInputMaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_flInput: usize = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RampScalarLinear {
                pub const m_RateMin: usize = 0x1C0; // float32
                pub const m_RateMax: usize = 0x1C4; // float32
                pub const m_flStartTime_min: usize = 0x1C8; // float32
                pub const m_flStartTime_max: usize = 0x1CC; // float32
                pub const m_flEndTime_min: usize = 0x1D0; // float32
                pub const m_flEndTime_max: usize = 0x1D4; // float32
                pub const m_nField: usize = 0x200; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x204; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_RotateVector {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_vecRotAxisMin: usize = 0x1C4; // Vector
                pub const m_vecRotAxisMax: usize = 0x1D0; // Vector
                pub const m_flRotRateMin: usize = 0x1DC; // float32
                pub const m_flRotRateMax: usize = 0x1E0; // float32
                pub const m_bNormalize: usize = 0x1E4; // bool
                pub const m_flScale: usize = 0x1E8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_InitVecCollection {
                pub const m_InputValue: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_nOutputField: usize = 0x840; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_INIT_SequenceFromCP {
                pub const m_bKillUnused: usize = 0x1C8; // bool
                pub const m_bRadiusScale: usize = 0x1C9; // bool
                pub const m_nCP: usize = 0x1CC; // int32
                pub const m_vecOffset: usize = 0x1D0; // Vector
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_CPOffsetToPercentageBetweenCPs {
                pub const m_flInputMin: usize = 0x1C0; // float32
                pub const m_flInputMax: usize = 0x1C4; // float32
                pub const m_flInputBias: usize = 0x1C8; // float32
                pub const m_nStartCP: usize = 0x1CC; // int32
                pub const m_nEndCP: usize = 0x1D0; // int32
                pub const m_nOffsetCP: usize = 0x1D4; // int32
                pub const m_nOuputCP: usize = 0x1D8; // int32
                pub const m_nInputCP: usize = 0x1DC; // int32
                pub const m_bRadialCheck: usize = 0x1E0; // bool
                pub const m_bScaleOffset: usize = 0x1E1; // bool
                pub const m_vecOffset: usize = 0x1E4; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_OP_LerpEndCapScalar {
                pub const m_nFieldOutput: usize = 0x1C0; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1C4; // float32
                pub const m_flLerpTime: usize = 0x1C8; // float32
            }
        }
    }
}
