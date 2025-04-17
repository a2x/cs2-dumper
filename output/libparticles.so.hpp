// Generated using https://github.com/a2x/cs2-dumper
// 2025-04-17 03:43:32.736005207 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libparticles.so
        // Classes count: 446
        // Enums count: 77
        namespace libparticles_so {
            // Alignment: 4
            // Members count: 6
            enum class ParticleSetMethod_t : uint32_t {
                PARTICLE_SET_REPLACE_VALUE = 0x0,
                PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
                PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
                PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
                PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
                PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5
            };
            // Alignment: 4
            // Members count: 7
            enum class Detail2Combo_t : uint32_t {
                DETAIL_2_COMBO_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
                DETAIL_2_COMBO_OFF = 0x0,
                DETAIL_2_COMBO_ADD = 0x1,
                DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_2_COMBO_MOD2X = 0x3,
                DETAIL_2_COMBO_MUL = 0x4,
                DETAIL_2_COMBO_CROSSFADE = 0x5
            };
            // Alignment: 4
            // Members count: 4
            enum class MissingParentInheritBehavior_t : uint32_t {
                MISSING_PARENT_DO_NOTHING = 0xFFFFFFFFFFFFFFFF,
                MISSING_PARENT_KILL = 0x0,
                MISSING_PARENT_FIND_NEW = 0x1,
                MISSING_PARENT_SAME_INDEX = 0x2
            };
            // Alignment: 4
            // Members count: 5
            enum class ParticleFloatBiasType_t : uint32_t {
                PF_BIAS_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_BIAS_TYPE_STANDARD = 0x0,
                PF_BIAS_TYPE_GAIN = 0x1,
                PF_BIAS_TYPE_EXPONENTIAL = 0x2,
                PF_BIAS_TYPE_COUNT = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleTraceMissBehavior_t : uint32_t {
                PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
                PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
                PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
            };
            // Alignment: 4
            // Members count: 7
            enum class PFuncVisualizationType_t : uint32_t {
                PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
                PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
                PFUNC_VISUALIZATION_BOX = 0x2,
                PFUNC_VISUALIZATION_RING = 0x3,
                PFUNC_VISUALIZATION_PLANE = 0x4,
                PFUNC_VISUALIZATION_LINE = 0x5,
                PFUNC_VISUALIZATION_CYLINDER = 0x6
            };
            // Alignment: 4
            // Members count: 4
            enum class ParticleVRHandChoiceList_t : uint32_t {
                PARTICLE_VRHAND_LEFT = 0x0,
                PARTICLE_VRHAND_RIGHT = 0x1,
                PARTICLE_VRHAND_CP = 0x2,
                PARTICLE_VRHAND_CP_OBJECT = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleReplicationMode_t : uint32_t {
                PARTICLE_REPLICATIONMODE_NONE = 0x0,
                PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class PetGroundType_t : uint32_t {
                PET_GROUND_NONE = 0x0,
                PET_GROUND_GRID = 0x1,
                PET_GROUND_PLANE = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class InheritableBoolType_t : uint32_t {
                INHERITABLE_BOOL_INHERIT = 0x0,
                INHERITABLE_BOOL_FALSE = 0x1,
                INHERITABLE_BOOL_TRUE = 0x2
            };
            // Alignment: 4
            // Members count: 24
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
            };
            // Alignment: 4
            // Members count: 6
            enum class ParticlePostProcessPriorityGroup_t : uint32_t {
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
                PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5
            };
            // Alignment: 4
            // Members count: 6
            enum class PFNoiseTurbulence_t : uint32_t {
                PF_NOISE_TURB_NONE = 0x0,
                PF_NOISE_TURB_HIGHLIGHT = 0x1,
                PF_NOISE_TURB_FEEDBACK = 0x2,
                PF_NOISE_TURB_LOOPY = 0x3,
                PF_NOISE_TURB_CONTRAST = 0x4,
                PF_NOISE_TURB_ALTERNATE = 0x5
            };
            // Alignment: 4
            // Members count: 5
            enum class ParticleColorBlendMode_t : uint32_t {
                PARTICLEBLEND_DEFAULT = 0x0,
                PARTICLEBLEND_OVERLAY = 0x1,
                PARTICLEBLEND_DARKEN = 0x2,
                PARTICLEBLEND_LIGHTEN = 0x3,
                PARTICLEBLEND_MULTIPLY = 0x4
            };
            // Alignment: 4
            // Members count: 13
            enum class ParticleColorBlendType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 4
            enum class DetailCombo_t : uint32_t {
                DETAIL_COMBO_OFF = 0x0,
                DETAIL_COMBO_ADD = 0x1,
                DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_COMBO_MOD2X = 0x3
            };
            // Alignment: 4
            // Members count: 9
            enum class ScalarExpressionType_t : uint32_t {
                SCALAR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
                SCALAR_EXPRESSION_ADD = 0x0,
                SCALAR_EXPRESSION_SUBTRACT = 0x1,
                SCALAR_EXPRESSION_MUL = 0x2,
                SCALAR_EXPRESSION_DIVIDE = 0x3,
                SCALAR_EXPRESSION_INPUT_1 = 0x4,
                SCALAR_EXPRESSION_MIN = 0x5,
                SCALAR_EXPRESSION_MAX = 0x6,
                SCALAR_EXPRESSION_MOD = 0x7
            };
            // Alignment: 4
            // Members count: 14
            enum class SpriteCardPerParticleScale_t : uint32_t {
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
            // Members count: 2
            enum class BlurFilterType_t : uint32_t {
                BLURFILTER_GAUSSIAN = 0x0,
                BLURFILTER_BOX = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class StandardLightingAttenuationStyle_t : uint32_t {
                LIGHT_STYLE_OLD = 0x0,
                LIGHT_STYLE_NEW = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleParentSetMode_t : uint32_t {
                PARTICLE_SET_PARENT_NO = 0x0,
                PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
                PARTICLE_SET_PARENT_ROOT = 0x1
            };
            // Alignment: 4
            // Members count: 5
            enum class ParticleModelType_t : uint32_t {
                PM_TYPE_INVALID = 0x0,
                PM_TYPE_NAMED_VALUE_MODEL = 0x1,
                PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
                PM_TYPE_CONTROL_POINT = 0x3,
                PM_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleLightingQuality_t : uint32_t {
                PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
                PARTICLE_LIGHTING_PER_VERTEX = 0x1,
                PARTICLE_LIGHTING_PER_PIXEL = 0xFFFFFFFFFFFFFFFF
            };
            // Alignment: 4
            // Members count: 5
            enum class ParticleFloatRoundType_t : uint32_t {
                PF_ROUND_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_ROUND_TYPE_NEAREST = 0x0,
                PF_ROUND_TYPE_FLOOR = 0x1,
                PF_ROUND_TYPE_CEIL = 0x2,
                PF_ROUND_TYPE_COUNT = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class PFNoiseType_t : uint32_t {
                PF_NOISE_TYPE_PERLIN = 0x0,
                PF_NOISE_TYPE_SIMPLEX = 0x1,
                PF_NOISE_TYPE_WORLEY = 0x2,
                PF_NOISE_TYPE_CURL = 0x3
            };
            // Alignment: 4
            // Members count: 11
            enum class EventTypeSelection_t : uint32_t {
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
            // Members count: 2
            enum class ParticleMassMode_t : uint32_t {
                PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
                PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleDirectionNoiseType_t : uint32_t {
                PARTICLE_DIR_NOISE_PERLIN = 0x0,
                PARTICLE_DIR_NOISE_CURL = 0x1,
                PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleHitboxBiasType_t : uint32_t {
                PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
                PARTICLE_HITBOX_BIAS_HITBOX = 0x1
            };
            // Alignment: 4
            // Members count: 6
            enum class ParticleControlPointAxis_t : uint32_t {
                PARTICLE_CP_AXIS_X = 0x0,
                PARTICLE_CP_AXIS_Y = 0x1,
                PARTICLE_CP_AXIS_Z = 0x2,
                PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
                PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
                PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
            };
            // Alignment: 4
            // Members count: 12
            enum class ParticlePinDistance_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 7
            enum class VectorFloatExpressionType_t : uint32_t {
                VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
                VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
                VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
                VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
                VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
                VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
                VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleFogType_t : uint32_t {
                PARTICLE_FOG_GAME_DEFAULT = 0x0,
                PARTICLE_FOG_ENABLED = 0x1,
                PARTICLE_FOG_DISABLED = 0x2
            };
            // Alignment: 4
            // Members count: 9
            enum class VectorExpressionType_t : uint32_t {
                VECTOR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFFFFFFFFFF,
                VECTOR_EXPRESSION_ADD = 0x0,
                VECTOR_EXPRESSION_SUBTRACT = 0x1,
                VECTOR_EXPRESSION_MUL = 0x2,
                VECTOR_EXPRESSION_DIVIDE = 0x3,
                VECTOR_EXPRESSION_INPUT_1 = 0x4,
                VECTOR_EXPRESSION_MIN = 0x5,
                VECTOR_EXPRESSION_MAX = 0x6,
                VECTOR_EXPRESSION_CROSSPRODUCT = 0x7
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleRotationLockType_t : uint32_t {
                PARTICLE_ROTATION_LOCK_NONE = 0x0,
                PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
                PARTICLE_ROTATION_LOCK_NORMAL = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class HitboxLerpType_t : uint32_t {
                HITBOX_LERP_LIFETIME = 0x0,
                HITBOX_LERP_CONSTANT = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class AnimationType_t : uint32_t {
                ANIMATION_TYPE_FIXED_RATE = 0x0,
                ANIMATION_TYPE_FIT_LIFETIME = 0x1,
                ANIMATION_TYPE_MANUAL_FRAMES = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleAttrBoxFlags_t : uint32_t {
                PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
                PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1
            };
            // Alignment: 4
            // Members count: 5
            enum class ParticleTopology_t : uint32_t {
                PARTICLE_TOPOLOGY_POINTS = 0x0,
                PARTICLE_TOPOLOGY_LINES = 0x1,
                PARTICLE_TOPOLOGY_TRIS = 0x2,
                PARTICLE_TOPOLOGY_QUADS = 0x3,
                PARTICLE_TOPOLOGY_CUBES = 0x4
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleLightBehaviorChoiceList_t : uint32_t {
                PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
                PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
                PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class ModelHitboxType_t : uint32_t {
                MODEL_HITBOX_TYPE_STANDARD = 0x0,
                MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
                MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
                MODEL_HITBOX_TYPE_SNAPSHOT = 0x3
            };
            // Alignment: 4
            // Members count: 9
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
            // Members count: 4
            enum class ParticleTraceSet_t : uint32_t {
                PARTICLE_TRACE_SET_ALL = 0x0,
                PARTICLE_TRACE_SET_STATIC = 0x1,
                PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
                PARTICLE_TRACE_SET_DYNAMIC = 0x3
            };
            // Alignment: 4
            // Members count: 7
            enum class ParticleTextureLayerBlendType_t : uint32_t {
                SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
                SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
                SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
                SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
                SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
                SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
                SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleSelection_t : uint32_t {
                PARTICLE_SELECTION_FIRST = 0x0,
                PARTICLE_SELECTION_LAST = 0x1,
                PARTICLE_SELECTION_NUMBER = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class ParticleFloatInputMode_t : uint32_t {
                PF_INPUT_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_INPUT_MODE_CLAMPED = 0x0,
                PF_INPUT_MODE_LOOPED = 0x1,
                PF_INPUT_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class SnapshotIndexType_t : uint32_t {
                SNAPSHOT_INDEX_INCREMENT = 0x0,
                SNAPSHOT_INDEX_DIRECT = 0x1
            };
            // Alignment: 4
            // Members count: 7
            enum class ParticleOutputBlendMode_t : uint32_t {
                PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
                PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
                PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
                PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
                PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
                PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
                PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleLightnintBranchBehavior_t : uint32_t {
                PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
                PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class MaterialProxyType_t : uint32_t {
                MATERIAL_PROXY_STATUS_EFFECT = 0x0,
                MATERIAL_PROXY_TINT = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleDepthFeatheringMode_t : uint32_t {
                PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
                PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
                PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class ParticleFloatRandomMode_t : uint32_t {
                PF_RANDOM_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PF_RANDOM_MODE_CONSTANT = 0x0,
                PF_RANDOM_MODE_VARYING = 0x1,
                PF_RANDOM_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class PFNoiseModifier_t : uint32_t {
                PF_NOISE_MODIFIER_NONE = 0x0,
                PF_NOISE_MODIFIER_LINES = 0x1,
                PF_NOISE_MODIFIER_CLUMPS = 0x2,
                PF_NOISE_MODIFIER_RINGS = 0x3
            };
            // Alignment: 4
            // Members count: 19
            enum class ParticleVecType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleLightUnitChoiceList_t : uint32_t {
                PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
                PARTICLE_LIGHT_UNIT_LUMENS = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleFalloffFunction_t : uint32_t {
                PARTICLE_FALLOFF_CONSTANT = 0x0,
                PARTICLE_FALLOFF_LINEAR = 0x1,
                PARTICLE_FALLOFF_EXPONENTIAL = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleSequenceCropOverride_t : uint32_t {
                PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xFFFFFFFFFFFFFFFF,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class ParticleDetailLevel_t : uint32_t {
                PARTICLEDETAIL_LOW = 0x0,
                PARTICLEDETAIL_MEDIUM = 0x1,
                PARTICLEDETAIL_HIGH = 0x2,
                PARTICLEDETAIL_ULTRA = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class BBoxVolumeType_t : uint32_t {
                BBOX_VOLUME = 0x0,
                BBOX_DIMENSIONS = 0x1,
                BBOX_MINS_MAXS = 0x2
            };
            // Alignment: 4
            // Members count: 10
            enum class SpriteCardTextureType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 4
            enum class ParticleAlphaReferenceType_t : uint32_t {
                PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
                PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
            };
            // Alignment: 4
            // Members count: 15
            enum class SpriteCardTextureChannel_t : uint32_t {
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
            // Members count: 5
            enum class ParticleTransformType_t : uint32_t {
                PT_TYPE_INVALID = 0x0,
                PT_TYPE_NAMED_VALUE = 0x1,
                PT_TYPE_CONTROL_POINT = 0x2,
                PT_TYPE_CONTROL_POINT_RANGE = 0x3,
                PT_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Members count: 4
            enum class RenderModelSubModelFieldType_t : uint32_t {
                SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
                SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
                SUBMODEL_AS_MESHGROUP_MASK = 0x2,
                SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleHitboxDataSelection_t : uint32_t {
                PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
                PARTICLE_HITBOX_COUNT = 0x1
            };
            // Alignment: 4
            // Members count: 6
            enum class ParticleOrientationChoiceList_t : uint32_t {
                PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
                PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
                PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
                PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
                PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
                PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5
            };
            // Alignment: 4
            // Members count: 5
            enum class ParticleCollisionMode_t : uint32_t {
                COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
                COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
                COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
                COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
                COLLISION_MODE_DISABLED = 0xFFFFFFFFFFFFFFFF
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleSortingChoiceList_t : uint32_t {
                PARTICLE_SORTING_NEAREST = 0x0,
                PARTICLE_SORTING_CREATION_TIME = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleEndcapMode_t : uint32_t {
                PARTICLE_ENDCAP_ALWAYS_ON = 0xFFFFFFFFFFFFFFFF,
                PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
                PARTICLE_ENDCAP_ENDCAP_ON = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ClosestPointTestType_t : uint32_t {
                PARTICLE_CLOSEST_TYPE_BOX = 0x0,
                PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
                PARTICLE_CLOSEST_TYPE_HYBRID = 0x2
            };
            // Alignment: 4
            // Members count: 6
            enum class ParticleImpulseType_t : uint32_t {
                IMPULSE_TYPE_NONE = 0x0,
                IMPULSE_TYPE_GENERIC = 0x1,
                IMPULSE_TYPE_ROPE = 0x2,
                IMPULSE_TYPE_EXPLOSION = 0x4,
                IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
                IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10
            };
            // Alignment: 4
            // Members count: 2
            enum class SpriteCardShaderType_t : uint32_t {
                SPRITECARD_SHADER_BASE = 0x0,
                SPRITECARD_SHADER_CUSTOM = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleOmni2LightTypeChoiceList_t : uint32_t {
                PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ParticleLightFogLightingMode_t : uint32_t {
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
            };
            // Alignment: 4
            // Members count: 4
            enum class ParticleLightTypeChoiceList_t : uint32_t {
                PARTICLE_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_LIGHT_TYPE_SPOT = 0x1,
                PARTICLE_LIGHT_TYPE_FX = 0x2,
                PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class ParticleOrientationSetMode_t : uint32_t {
                PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
                PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class TextureRepetitionMode_t : uint32_t {
                TEXTURE_REPETITION_PARTICLE = 0x0,
                TEXTURE_REPETITION_PATH = 0x1
            };
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapGravityToVector {
                constexpr std::ptrdiff_t m_vInput1 = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x808; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x80C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x810; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Decay {
                constexpr std::ptrdiff_t m_bRopeDecay = 0x1B8; // bool
                constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1B9; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderDeferredLight {
                constexpr std::ptrdiff_t m_bUseAlphaTestWindow = 0x202; // bool
                constexpr std::ptrdiff_t m_bUseTexture = 0x203; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x204; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0x208; // float32
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x20C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x210; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x860; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_flLightDistance = 0x864; // float32
                constexpr std::ptrdiff_t m_flStartFalloff = 0x868; // float32
                constexpr std::ptrdiff_t m_flDistanceFalloff = 0x86C; // float32
                constexpr std::ptrdiff_t m_flSpotFoV = 0x870; // float32
                constexpr std::ptrdiff_t m_nAlphaTestPointField = 0x874; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaTestRangeField = 0x878; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaTestSharpnessField = 0x87C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_hTexture = 0x880; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x888; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSpeedtoCP {
                constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_bUseDeltaV = 0x1D8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformToVelocity {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CollisionGroupContext_t {
                constexpr std::ptrdiff_t m_nCollisionGroupNumber = 0x0; // int32
            }
            // Parent: CParticleInput
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            // MParticleCustomFieldDefaultValue
            namespace CParticleModelInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleModelType_t
                constexpr std::ptrdiff_t m_NamedValue = 0x10; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_nControlPoint = 0x50; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionPreEmission {
                constexpr std::ptrdiff_t m_bRunOnce = 0x1B8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeOutSimple {
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpringToVectorConstraint {
                constexpr std::ptrdiff_t m_flRestLength = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinDistance = 0x310; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x468; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRestingLength = 0x5C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecAnchorVector = 0x718; // CPerParticleVecInput
            }
            // Parent: CBaseRendererSource2
            // Fields count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderRopes {
                constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x29C0; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x29C4; // float32
                constexpr std::ptrdiff_t m_flMaxSize = 0x29C8; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x29CC; // float32
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x29D0; // float32
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x29D4; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x29D8; // float32
                constexpr std::ptrdiff_t m_flRadiusTaper = 0x29DC; // float32
                constexpr std::ptrdiff_t m_nMinTesselation = 0x29E0; // int32
                constexpr std::ptrdiff_t m_nMaxTesselation = 0x29E4; // int32
                constexpr std::ptrdiff_t m_flTessScale = 0x29E8; // float32
                constexpr std::ptrdiff_t m_flTextureVWorldSize = 0x29F0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flTextureVScrollRate = 0x2B48; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flTextureVOffset = 0x2CA0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nTextureVParamsCP = 0x2DF8; // int32
                constexpr std::ptrdiff_t m_bClampV = 0x2DFC; // bool
                constexpr std::ptrdiff_t m_nScaleCP1 = 0x2E00; // int32
                constexpr std::ptrdiff_t m_nScaleCP2 = 0x2E04; // int32
                constexpr std::ptrdiff_t m_flScaleVSizeByControlPointDistance = 0x2E08; // float32
                constexpr std::ptrdiff_t m_flScaleVScrollByControlPointDistance = 0x2E0C; // float32
                constexpr std::ptrdiff_t m_flScaleVOffsetByControlPointDistance = 0x2E10; // float32
                constexpr std::ptrdiff_t m_bUseScalarForTextureCoordinate = 0x2E15; // bool
                constexpr std::ptrdiff_t m_nScalarFieldForTextureCoordinate = 0x2E18; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScalarAttributeTextureCoordScale = 0x2E1C; // float32
                constexpr std::ptrdiff_t m_bReverseOrder = 0x2E20; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x2E21; // bool
                constexpr std::ptrdiff_t m_nOrientationType = 0x2E24; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nVectorFieldForOrientation = 0x2E28; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bDrawAsOpaque = 0x2E2C; // bool
                constexpr std::ptrdiff_t m_bGenerateNormals = 0x2E2D; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_StatusEffectCitadel {
                constexpr std::ptrdiff_t m_flSFXColorWarpAmount = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flSFXNormalAmount = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flSFXMetalnessAmount = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flSFXRoughnessAmount = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flSFXSelfIllumAmount = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flSFXSScale = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollX = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollY = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollZ = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetX = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetY = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetZ = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nDetailCombo = 0x1EC; // DetailCombo_t
                constexpr std::ptrdiff_t m_flSFXSDetailAmount = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScale = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollX = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollY = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollZ = 0x200; // float32
                constexpr std::ptrdiff_t m_flSFXSUseModelUVs = 0x204; // float32
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSound {
                constexpr std::ptrdiff_t m_flDurationScale = 0x204; // float32
                constexpr std::ptrdiff_t m_flSndLvlScale = 0x208; // float32
                constexpr std::ptrdiff_t m_flPitchScale = 0x20C; // float32
                constexpr std::ptrdiff_t m_flVolumeScale = 0x210; // float32
                constexpr std::ptrdiff_t m_nSndLvlField = 0x214; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nDurationField = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nPitchField = 0x21C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVolumeField = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nChannel = 0x224; // int32
                constexpr std::ptrdiff_t m_nCPReference = 0x228; // int32
                constexpr std::ptrdiff_t m_pszSoundName = 0x22C; // char[256]
                constexpr std::ptrdiff_t m_bSuppressStopSoundEvent = 0x32C; // bool
            }
            // Parent: None
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleVisibilityInputs {
                constexpr std::ptrdiff_t m_flCameraBias = 0x0; // float32
                constexpr std::ptrdiff_t m_nCPin = 0x4; // int32
                constexpr std::ptrdiff_t m_flProxyRadius = 0x8; // float32
                constexpr std::ptrdiff_t m_flInputMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flInputPixelVisFade = 0x14; // float32
                constexpr std::ptrdiff_t m_flNoPixelVisibilityFallback = 0x18; // float32
                constexpr std::ptrdiff_t m_flDistanceInputMin = 0x1C; // float32
                constexpr std::ptrdiff_t m_flDistanceInputMax = 0x20; // float32
                constexpr std::ptrdiff_t m_flDotInputMin = 0x24; // float32
                constexpr std::ptrdiff_t m_flDotInputMax = 0x28; // float32
                constexpr std::ptrdiff_t m_bDotCPAngles = 0x2C; // bool
                constexpr std::ptrdiff_t m_bDotCameraAngles = 0x2D; // bool
                constexpr std::ptrdiff_t m_flAlphaScaleMin = 0x30; // float32
                constexpr std::ptrdiff_t m_flAlphaScaleMax = 0x34; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleMin = 0x38; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleMax = 0x3C; // float32
                constexpr std::ptrdiff_t m_flRadiusScaleFOVBase = 0x40; // float32
                constexpr std::ptrdiff_t m_bRightEye = 0x44; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointsToParticle {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bSetOrientation = 0x1C8; // bool
                constexpr std::ptrdiff_t m_nOrientationMode = 0x1CC; // ParticleOrientationSetMode_t
                constexpr std::ptrdiff_t m_nSetParent = 0x1D0; // ParticleParentSetMode_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSDFDistanceToVectorAttribute {
                constexpr std::ptrdiff_t m_nVectorFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMinDistance = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vValueBelowMin = 0x470; // Vector
                constexpr std::ptrdiff_t m_vValueAtMin = 0x47C; // Vector
                constexpr std::ptrdiff_t m_vValueAtMax = 0x488; // Vector
                constexpr std::ptrdiff_t m_vValueAboveMax = 0x494; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPVelocityToVector {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bNormalize = 0x1C4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PointVectorAtNextParticle {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInterpolation = 0x1C0; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticlePreviewBodyGroup_t {
                constexpr std::ptrdiff_t m_bodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nValue = 0x8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateScalarSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B8; // float32
                constexpr std::ptrdiff_t m_Frequency = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nField = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOscMult = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1C8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_StatusEffect {
                constexpr std::ptrdiff_t m_nDetail2Combo = 0x1BC; // Detail2Combo_t
                constexpr std::ptrdiff_t m_flDetail2Rotation = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flDetail2Scale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flDetail2BlendFactor = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flColorWarpIntensity = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flDiffuseWarpBlendToFull = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flEnvMapIntensity = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flAmbientScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_specularColor = 0x1DC; // Color
                constexpr std::ptrdiff_t m_flSpecularScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flSpecularExponent = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flSpecularExponentBlendToFull = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flSpecularBlendToFull = 0x1EC; // float32
                constexpr std::ptrdiff_t m_rimLightColor = 0x1F0; // Color
                constexpr std::ptrdiff_t m_flRimLightScale = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flReflectionsTintByBaseBlendToNone = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flMetalnessBlendToFull = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flSelfIllumBlendToFull = 0x200; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RtEnvCull {
                constexpr std::ptrdiff_t m_vecTestDir = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecTestNormal = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_bUseVelocity = 0x1D4; // bool
                constexpr std::ptrdiff_t m_bCullOnMiss = 0x1D5; // bool
                constexpr std::ptrdiff_t m_bLifeAdjust = 0x1D6; // bool
                constexpr std::ptrdiff_t m_RtEnvName = 0x1D7; // char[128]
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x258; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x25C; // int32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistance {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fMaxDistance = 0x310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x468; // int32
                constexpr std::ptrdiff_t m_CenterOffset = 0x46C; // Vector
                constexpr std::ptrdiff_t m_bGlobalCenter = 0x478; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomVector {
                constexpr std::ptrdiff_t m_vecMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1D8; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialVelocityNoise {
                constexpr std::ptrdiff_t m_vecAbsVal = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecAbsValInv = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOffset = 0x828; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecOutputMin = 0x980; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOutputMax = 0xFD0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1620; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1778; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformInput = 0x18D0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1930; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleChildrenInfo_t {
                constexpr std::ptrdiff_t m_ChildRef = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flDelay = 0x8; // float32
                constexpr std::ptrdiff_t m_bEndCap = 0xC; // bool
                constexpr std::ptrdiff_t m_bDisableChild = 0xD; // bool
                constexpr std::ptrdiff_t m_nDetailLevel = 0x10; // ParticleDetailLevel_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalarOnceTimed {
                constexpr std::ptrdiff_t m_bProportional = 0x1B8; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flRemapTime = 0x1D4; // float32
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelSequence {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlaneCull {
                constexpr std::ptrdiff_t m_nPlaneControlPoint = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecPlaneDirection = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1C8; // bool
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x1CC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityRandom {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x470; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0xAC0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x1110; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1114; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ModelDampenMovement {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bOutside = 0x1BD; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1BE; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1BF; // char[128]
                constexpr std::ptrdiff_t m_vecPosOffset = 0x240; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_fDrag = 0x890; // float32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TwistAroundAxis {
                constexpr std::ptrdiff_t m_fForceAmount = 0x1C4; // float32
                constexpr std::ptrdiff_t m_TwistAxis = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1D4; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TeleportBeam {
                constexpr std::ptrdiff_t m_nCPPosition = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nCPVelocity = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPMisc = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nCPColor = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nCPInvalidColor = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nCPExtraArcData = 0x1CC; // int32
                constexpr std::ptrdiff_t m_vGravity = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_flArcMaxDuration = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flSegmentBreak = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flArcSpeed = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flAlpha = 0x1E8; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapExternalWindToCP {
                constexpr std::ptrdiff_t m_nCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vecScale = 0x1C8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_bSetMagnitude = 0x818; // bool
                constexpr std::ptrdiff_t m_nOutVectorField = 0x81C; // int32
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 64
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseRendererSource2 {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x208; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x360; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x4B8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x610; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x618; // CParticleCollectionRendererVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xC68; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_nShaderType = 0xC6C; // SpriteCardShaderType_t
                constexpr std::ptrdiff_t m_strShaderOverride = 0xC70; // CUtlString
                constexpr std::ptrdiff_t m_flCenterXOffset = 0xC78; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flCenterYOffset = 0xDD0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flBumpStrength = 0xF28; // float32
                constexpr std::ptrdiff_t m_nCropTextureOverride = 0xF2C; // ParticleSequenceCropOverride_t
                constexpr std::ptrdiff_t m_vecTexturesInput = 0xF30; // CUtlVector<TextureGroup_t>
                constexpr std::ptrdiff_t m_flAnimationRate = 0xF48; // float32
                constexpr std::ptrdiff_t m_nAnimationType = 0xF4C; // AnimationType_t
                constexpr std::ptrdiff_t m_bAnimateInFPS = 0xF50; // bool
                constexpr std::ptrdiff_t m_flMotionVectorScaleU = 0xF58; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flMotionVectorScaleV = 0x10B0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSelfIllumAmount = 0x1208; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDiffuseAmount = 0x1360; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDiffuseClamp = 0x14B8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nLightingControlPoint = 0x1610; // int32
                constexpr std::ptrdiff_t m_nSelfIllumPerParticle = 0x1614; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nOutputBlendMode = 0x1618; // ParticleOutputBlendMode_t
                constexpr std::ptrdiff_t m_bGammaCorrectVertexColors = 0x161C; // bool
                constexpr std::ptrdiff_t m_bSaturateColorPreAlphaBlend = 0x161D; // bool
                constexpr std::ptrdiff_t m_flAddSelfAmount = 0x1620; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDesaturation = 0x1778; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flOverbrightFactor = 0x18D0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x1A28; // int32
                constexpr std::ptrdiff_t m_nFogType = 0x1A2C; // ParticleFogType_t
                constexpr std::ptrdiff_t m_flFogAmount = 0x1A30; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bTintByFOW = 0x1B88; // bool
                constexpr std::ptrdiff_t m_bTintByGlobalLight = 0x1B89; // bool
                constexpr std::ptrdiff_t m_nPerParticleAlphaReference = 0x1B8C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleAlphaRefWindow = 0x1B90; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nAlphaReferenceType = 0x1B94; // ParticleAlphaReferenceType_t
                constexpr std::ptrdiff_t m_flAlphaReferenceSoftness = 0x1B98; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToZero = 0x1CF0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToOne = 0x1E48; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bRefract = 0x1FA0; // bool
                constexpr std::ptrdiff_t m_bRefractSolid = 0x1FA1; // bool
                constexpr std::ptrdiff_t m_flRefractAmount = 0x1FA8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nRefractBlurRadius = 0x2100; // int32
                constexpr std::ptrdiff_t m_nRefractBlurType = 0x2104; // BlurFilterType_t
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x2108; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x2109; // bool
                constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x210A; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x210B; // bool
                constexpr std::ptrdiff_t m_stencilTestID = 0x210C; // char[128]
                constexpr std::ptrdiff_t m_bStencilTestExclude = 0x218C; // bool
                constexpr std::ptrdiff_t m_stencilWriteID = 0x218D; // char[128]
                constexpr std::ptrdiff_t m_bWriteStencilOnDepthPass = 0x220D; // bool
                constexpr std::ptrdiff_t m_bWriteStencilOnDepthFail = 0x220E; // bool
                constexpr std::ptrdiff_t m_bReverseZBuffering = 0x220F; // bool
                constexpr std::ptrdiff_t m_bDisableZBuffering = 0x2210; // bool
                constexpr std::ptrdiff_t m_nFeatheringMode = 0x2214; // ParticleDepthFeatheringMode_t
                constexpr std::ptrdiff_t m_flFeatheringMinDist = 0x2218; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringMaxDist = 0x2370; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringFilter = 0x24C8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDepthBias = 0x2620; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nSortMethod = 0x2778; // ParticleSortingChoiceList_t
                constexpr std::ptrdiff_t m_bBlendFramesSeq0 = 0x277C; // bool
                constexpr std::ptrdiff_t m_bMaxLuminanceBlendingSequence0 = 0x277D; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSpinUpdateBase {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OrientTo2dDirection {
                constexpr std::ptrdiff_t m_flRotOffset = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flSpinStrength = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDotProductToCP {
                constexpr std::ptrdiff_t m_nInputCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nInputCP2 = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x1C8; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x328; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x480; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5D8; // CParticleCollectionFloatInput
            }
            // Parent: C_INIT_RemapParticleCountToScalar
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelElementScalar {
                constexpr std::ptrdiff_t m_hModel = 0x1E8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_outputMinName = 0x1F0; // CUtlString
                constexpr std::ptrdiff_t m_outputMaxName = 0x1F8; // CUtlString
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x200; // bool
            }
            // Parent: CBaseTrailRenderer
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderTrails {
                constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x2C81; // bool
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x2C84; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x2C88; // float32
                constexpr std::ptrdiff_t m_nPrevPntSource = 0x2C8C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMaxLength = 0x2C90; // float32
                constexpr std::ptrdiff_t m_flMinLength = 0x2C94; // float32
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x2C98; // bool
                constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x2C9C; // float32
                constexpr std::ptrdiff_t m_flLengthScale = 0x2CA0; // float32
                constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x2CA4; // float32
                constexpr std::ptrdiff_t m_flRadiusHeadTaper = 0x2CA8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecHeadColorScale = 0x2E00; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flHeadAlphaScale = 0x3450; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadiusTaper = 0x35A8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecTailColorScale = 0x3700; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flTailAlphaScale = 0x3D50; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nHorizCropField = 0x3EA8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVertCropField = 0x3EAC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flForwardShift = 0x3EB0; // float32
                constexpr std::ptrdiff_t m_bFlipUVBasedOnPitchYaw = 0x3EB4; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointPositionToTimeOfDayValue {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_pszTimeOfDayParameter = 0x1C0; // char[128]
                constexpr std::ptrdiff_t m_vecDefaultValue = 0x240; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayMaintainCount {
                constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1B8; // int32
                constexpr std::ptrdiff_t m_flDecayDelay = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bLifespanDecay = 0x1C4; // bool
                constexpr std::ptrdiff_t m_flScale = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bKillNewest = 0x320; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomModelSequence {
                constexpr std::ptrdiff_t m_ActivityName = 0x1BC; // char[256]
                constexpr std::ptrdiff_t m_SequenceName = 0x2BC; // char[256]
                constexpr std::ptrdiff_t m_hModel = 0x3C0; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: CParticleVecInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CPerParticleVecInput {
            }
            // Parent: CParticleFunctionForce
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ExternalGameImpulseForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bRopes = 0x320; // bool
                constexpr std::ptrdiff_t m_bRopesZOnly = 0x321; // bool
                constexpr std::ptrdiff_t m_bExplosions = 0x322; // bool
                constexpr std::ptrdiff_t m_bParticles = 0x323; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapAverageHitboxSpeedtoCP {
                constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nHitboxDataType = 0x1C8; // ParticleHitboxDataSelection_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x328; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x480; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nHeightControlPointNumber = 0x730; // int32
                constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x738; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0xD88; // char[128]
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomAlpha {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaMin = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nAlphaMax = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flAlphaRandExponent = 0x1D0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NormalizeVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1BC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeInSimple {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RepeatedTriggerChildGroup {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flClusterRefireTime = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flClusterSize = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flClusterCooldown = 0x470; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bLimitChildCount = 0x5C8; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderTonemapController {
                constexpr std::ptrdiff_t m_flTonemapLevel = 0x204; // float32
                constexpr std::ptrdiff_t m_flTonemapWeight = 0x208; // float32
                constexpr std::ptrdiff_t m_nTonemapLevelField = 0x20C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nTonemapWeightField = 0x210; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVelocityToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bNormalize = 0x1C0; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetHitboxToClosest {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1C8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0x818; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x898; // bool
                constexpr std::ptrdiff_t m_bUseClosestPointOnHitbox = 0x899; // bool
                constexpr std::ptrdiff_t m_nTestType = 0x89C; // ClosestPointTestType_t
                constexpr std::ptrdiff_t m_flHybridRatio = 0x8A0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUpdatePosition = 0x9F8; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RingWave {
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flParticlesPerOrbit = 0x220; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInitialRadius = 0x378; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flThickness = 0x4D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x628; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x780; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRoll = 0x8D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flPitch = 0xA30; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flYaw = 0xB88; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bEvenDistribution = 0xCE0; // bool
                constexpr std::ptrdiff_t m_bXYVelocityOnly = 0xCE1; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomTrailLength {
                constexpr std::ptrdiff_t m_flMinLength = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flMaxLength = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flLengthRandExponent = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_bOldCode = 0x1D0; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceBetweenTransforms {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_TransformStart = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x220; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flInputMin = 0x280; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x3D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x530; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x688; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flLOSScale = 0x7E4; // float32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x7E8; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x868; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bLOS = 0x86C; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x870; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayOffscreen {
                constexpr std::ptrdiff_t m_flOffscreenTime = 0x1B8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSequentialPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flNumToAssign = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x1C4; // bool
                constexpr std::ptrdiff_t m_bCPPairs = 0x1C5; // bool
                constexpr std::ptrdiff_t m_bSaveOffset = 0x1C6; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1D0; // CPathParameters
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapTimedDecay {
                constexpr std::ptrdiff_t m_flDecayTime = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDistanceToLineSegmentBase {
                constexpr std::ptrdiff_t m_nCP0 = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flMinInputValue = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flMaxInputValue = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bInfiniteLine = 0x1C8; // bool
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ContinuousEmitter {
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmitRate = 0x470; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmissionScale = 0x5C8; // float32
                constexpr std::ptrdiff_t m_flScalePerParentParticle = 0x5CC; // float32
                constexpr std::ptrdiff_t m_bInitFromKilledParentParticles = 0x5D0; // bool
                constexpr std::ptrdiff_t m_nEventType = 0x5D4; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x5D8; // int32
                constexpr std::ptrdiff_t m_nLimitPerUpdate = 0x5DC; // int32
                constexpr std::ptrdiff_t m_bForceEmitOnFirstUpdate = 0x5E0; // bool
                constexpr std::ptrdiff_t m_bForceEmitOnLastUpdate = 0x5E1; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateVectorSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_Frequency = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_nField = 0x1D0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOscMult = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1D8; // float32
                constexpr std::ptrdiff_t m_bOffset = 0x1DC; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SequenceLifeTime {
                constexpr std::ptrdiff_t m_flFramerate = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_MoveBetweenPoints {
                constexpr std::ptrdiff_t m_flSpeedMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSpeedMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flEndSpread = 0x470; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flStartOffset = 0x5C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flEndOffset = 0x720; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x878; // int32
                constexpr std::ptrdiff_t m_bTrailBias = 0x87C; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1DC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1E0; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x1E4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetUserEvent {
                constexpr std::ptrdiff_t m_flInput = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRisingEdge = 0x310; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nRisingEventType = 0x468; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_flFallingEdge = 0x470; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFallingEventType = 0x5C8; // EventTypeSelection_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_QuantizeFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x310; // ParticleAttributeIndex_t
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
            namespace CParticleCollectionBindingInstance {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_BasicMovement {
                constexpr std::ptrdiff_t m_Gravity = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_fDrag = 0x808; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_massControls = 0x960; // CParticleMassCalculationParameters
                constexpr std::ptrdiff_t m_nMaxConstraintPasses = 0xD70; // int32
                constexpr std::ptrdiff_t m_bUseNewCode = 0xD74; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelElement {
                constexpr std::ptrdiff_t m_hModel = 0x1C0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_names = 0x1C8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bShuffle = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bLinear = 0x1E1; // bool
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x1E2; // bool
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromParentKilled {
                constexpr std::ptrdiff_t m_nAttributeToCopy = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nEventType = 0x1C0; // EventTypeSelection_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Callback {
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunction {
                constexpr std::ptrdiff_t m_flOpStrength = 0x8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOpEndCapState = 0x160; // ParticleEndcapMode_t
                constexpr std::ptrdiff_t m_flOpStartFadeInTime = 0x164; // float32
                constexpr std::ptrdiff_t m_flOpEndFadeInTime = 0x168; // float32
                constexpr std::ptrdiff_t m_flOpStartFadeOutTime = 0x16C; // float32
                constexpr std::ptrdiff_t m_flOpEndFadeOutTime = 0x170; // float32
                constexpr std::ptrdiff_t m_flOpFadeOscillatePeriod = 0x174; // float32
                constexpr std::ptrdiff_t m_bNormalizeToStopTime = 0x178; // bool
                constexpr std::ptrdiff_t m_flOpTimeOffsetMin = 0x17C; // float32
                constexpr std::ptrdiff_t m_flOpTimeOffsetMax = 0x180; // float32
                constexpr std::ptrdiff_t m_nOpTimeOffsetSeed = 0x184; // int32
                constexpr std::ptrdiff_t m_nOpTimeScaleSeed = 0x188; // int32
                constexpr std::ptrdiff_t m_flOpTimeScaleMin = 0x18C; // float32
                constexpr std::ptrdiff_t m_flOpTimeScaleMax = 0x190; // float32
                constexpr std::ptrdiff_t m_bDisableOperator = 0x196; // bool
                constexpr std::ptrdiff_t m_Notes = 0x198; // CUtlString
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_GlobalLight {
                constexpr std::ptrdiff_t m_flScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_bClampLowerRange = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bClampUpperRange = 0x1BD; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_OffsetVectorToVector {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1DC; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetPerChildControlPointFromAttribute {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nParticleIncrement = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x1CC; // bool
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1D0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nCPField = 0x1D4; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetParentControlPointsToChildCP {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nChildControlPoint = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bSetOrientation = 0x1CC; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SDFForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1C4; // float32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_BoxConstraint {
                constexpr std::ptrdiff_t m_vecMin = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecMax = 0x808; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nCP = 0xE58; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xE5C; // bool
                constexpr std::ptrdiff_t m_bAccountForRadius = 0xE5D; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreatePhyllotaxis {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nScaleCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x1C4; // int32
                constexpr std::ptrdiff_t m_fRadCentCore = 0x1C8; // float32
                constexpr std::ptrdiff_t m_fRadPerPoint = 0x1CC; // float32
                constexpr std::ptrdiff_t m_fRadPerPointTo = 0x1D0; // float32
                constexpr std::ptrdiff_t m_fpointAngle = 0x1D4; // float32
                constexpr std::ptrdiff_t m_fsizeOverall = 0x1D8; // float32
                constexpr std::ptrdiff_t m_fRadBias = 0x1DC; // float32
                constexpr std::ptrdiff_t m_fMinRad = 0x1E0; // float32
                constexpr std::ptrdiff_t m_fDistBias = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bUseLocalCoords = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bUseWithContEmit = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bUseOrigRadius = 0x1EA; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_AttractToControlPoint {
                constexpr std::ptrdiff_t m_vecComponentScale = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_fForceAmount = 0x1D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fFalloffPower = 0x328; // float32
                constexpr std::ptrdiff_t m_TransformInput = 0x330; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fForceAmountMin = 0x390; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bApplyMinForce = 0x4E8; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomLifeTime {
                constexpr std::ptrdiff_t m_fLifetimeMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fLifetimeMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fLifetimeRandExponent = 0x1C4; // float32
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityRadialRandom {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecLocalCoordinateSystemSpeedScale = 0x470; // Vector
                constexpr std::ptrdiff_t m_bIgnoreDelta = 0x47D; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRadius {
                constexpr std::ptrdiff_t m_flRadiusMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flRadiusMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flRadiusRandExponent = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Orient2DRelToCP {
                constexpr std::ptrdiff_t m_flRotOffset = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flSpinStrength = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TextureControls_t {
                constexpr std::ptrdiff_t m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureScaleV = 0x158; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureOffsetU = 0x2B0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureOffsetV = 0x408; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureUVRotation = 0x560; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flZoomScale = 0x6B8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDistortion = 0x810; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bRandomizeOffsets = 0x968; // bool
                constexpr std::ptrdiff_t m_bClampUVs = 0x969; // bool
                constexpr std::ptrdiff_t m_nPerParticleBlend = 0x96C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleScale = 0x970; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleOffsetU = 0x974; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleOffsetV = 0x978; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleRotation = 0x97C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleZoom = 0x980; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleDistortion = 0x984; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ControlPointReference_t {
                constexpr std::ptrdiff_t m_controlPointNameString = 0x0; // int32
                constexpr std::ptrdiff_t m_vOffsetFromControlPoint = 0x4; // Vector
                constexpr std::ptrdiff_t m_bOffsetInLocalSpace = 0x10; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1BC; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_nOutputCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vInput1 = 0x1C8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x818; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE68; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LightningSnapshotGenerator {
                constexpr std::ptrdiff_t m_nCPSnapshot = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPStartPnt = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nCPEndPnt = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flSegments = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOffset = 0x320; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOffsetDecay = 0x478; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRecalcRate = 0x5D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flUVScale = 0x728; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flUVOffset = 0x880; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flSplitRate = 0x9D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flBranchTwist = 0xB30; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nBranchBehavior = 0xC88; // ParticleLightnintBranchBehavior_t
                constexpr std::ptrdiff_t m_flRadiusStart = 0xC90; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRadiusEnd = 0xDE8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flDedicatedPool = 0xF40; // CParticleCollectionFloatInput
            }
            // Parent: C_OP_RemapNamedModelElementOnceTimed
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelMeshGroupOnceTimed {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleInput {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapSpeedToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flStartTime = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flInputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1DC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bPerParticle = 0x1E0; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapQAnglesToRotation {
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionWarp {
                constexpr std::ptrdiff_t m_vecWarpMin = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecWarpMax = 0x810; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0xE60; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xE64; // int32
                constexpr std::ptrdiff_t m_nRadiusComponent = 0xE68; // int32
                constexpr std::ptrdiff_t m_flWarpTime = 0xE6C; // float32
                constexpr std::ptrdiff_t m_flWarpStartTime = 0xE70; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0xE74; // float32
                constexpr std::ptrdiff_t m_bInvertWarp = 0xE78; // bool
                constexpr std::ptrdiff_t m_bUseCount = 0xE79; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SDFConstraint {
                constexpr std::ptrdiff_t m_flMinDist = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxDist = 0x310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nMaxIterations = 0x468; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFieldToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1BC; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x470; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputCP = 0x5C8; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x5CC; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionForce {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomVectorComponent {
                constexpr std::ptrdiff_t m_flMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nComponent = 0x1C8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_OP_InheritFromParentParticles {
                constexpr std::ptrdiff_t m_flScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1C4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetVectorAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1BC; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x810; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0xE60; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0xE64; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE68; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformVisibilityToVector {
                constexpr std::ptrdiff_t m_nSetMethod = 0x1B8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x224; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x228; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x22C; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x238; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x244; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DirectionBetweenVecsToVec {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecPoint1 = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecPoint2 = 0x810; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementLoopInsideSphere {
                constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecScale = 0x318; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nDistSqrAttr = 0x968; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSimpleModelCollection {
                constexpr std::ptrdiff_t m_bCenterOffset = 0x202; // bool
                constexpr std::ptrdiff_t m_hModel = 0x208; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_modelInput = 0x210; // CParticleModelInput
                constexpr std::ptrdiff_t m_fSizeCullScale = 0x268; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDisableShadows = 0x3C0; // bool
                constexpr std::ptrdiff_t m_bDisableMotionBlur = 0x3C1; // bool
                constexpr std::ptrdiff_t m_bAcceptsDecals = 0x3C2; // bool
                constexpr std::ptrdiff_t m_nAngularVelocityField = 0x3C4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_QuantizeCPComponent {
                constexpr std::ptrdiff_t m_flInputValue = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nCPOutput = 0x318; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x31C; // int32
                constexpr std::ptrdiff_t m_flQuantizeValue = 0x320; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlayEndCapWhenFinished {
                constexpr std::ptrdiff_t m_bFireOnEmissionEnd = 0x1B9; // bool
                constexpr std::ptrdiff_t m_bIncludeChildren = 0x1BA; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFloatCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x318; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathParameters {
                constexpr std::ptrdiff_t m_nStartControlPointNumber = 0x0; // int32
                constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x4; // int32
                constexpr std::ptrdiff_t m_nBulgeControl = 0x8; // int32
                constexpr std::ptrdiff_t m_flBulge = 0xC; // float32
                constexpr std::ptrdiff_t m_flMidPoint = 0x10; // float32
                constexpr std::ptrdiff_t m_vStartPointOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_vMidPointOffset = 0x20; // Vector
                constexpr std::ptrdiff_t m_vEndOffset = 0x2C; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromPlaneCache {
                constexpr std::ptrdiff_t m_vecOffsetMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecOffsetMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_bUseNormal = 0x1D5; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ControlPointToRadialScreenSpace {
                constexpr std::ptrdiff_t m_nCPIn = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_nCPOut = 0x1CC; // int32
                constexpr std::ptrdiff_t m_nCPOutField = 0x1D0; // int32
                constexpr std::ptrdiff_t m_nCPSSPosOut = 0x1D4; // int32
            }
            // Parent: CSpinUpdateBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpinUpdate {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_NormalOffset {
                constexpr std::ptrdiff_t m_OffsetMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_OffsetMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D4; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bNormalize = 0x1D9; // bool
            }
            // Parent: C_OP_RemapDistanceToLineSegmentBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDistanceToLineSegmentToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vMinOutputValue = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_vMaxOutputValue = 0x1DC; // Vector
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderAsModels {
                constexpr std::ptrdiff_t m_ModelList = 0x208; // CUtlVector<ModelReference_t>
                constexpr std::ptrdiff_t m_flModelScale = 0x224; // float32
                constexpr std::ptrdiff_t m_bFitToModelSize = 0x228; // bool
                constexpr std::ptrdiff_t m_bNonUniformScaling = 0x229; // bool
                constexpr std::ptrdiff_t m_nXAxisScalingAttribute = 0x22C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nYAxisScalingAttribute = 0x230; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nZAxisScalingAttribute = 0x234; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSizeCullBloat = 0x238; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreationNoise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bAbsVal = 0x1C0; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1C1; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1D4; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_flWorldTimeScale = 0x1E4; // float32
            }
            // Parent: CGeneralSpin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Spin {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleNamedValueConfiguration_t {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ConfigValue = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_iAttachType = 0x18; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_BoundEntityPath = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_strEntityScope = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strAttachmentName = 0x30; // CUtlString
            }
            // Parent: CParticleInput
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MParticleCustomFieldDefaultValue
            namespace CParticleVecInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleVecType_t
                constexpr std::ptrdiff_t m_vLiteralValue = 0x10; // Vector
                constexpr std::ptrdiff_t m_LiteralColor = 0x1C; // Color
                constexpr std::ptrdiff_t m_NamedValue = 0x20; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_bFollowNamedValue = 0x60; // bool
                constexpr std::ptrdiff_t m_nVectorAttribute = 0x64; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vVectorAttributeScale = 0x68; // Vector
                constexpr std::ptrdiff_t m_nControlPoint = 0x74; // int32
                constexpr std::ptrdiff_t m_nDeltaControlPoint = 0x78; // int32
                constexpr std::ptrdiff_t m_vCPValueScale = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vCPRelativePosition = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCPRelativeDir = 0x94; // Vector
                constexpr std::ptrdiff_t m_FloatComponentX = 0xA0; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatComponentY = 0x1F8; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatComponentZ = 0x350; // CParticleFloatInput
                constexpr std::ptrdiff_t m_FloatInterp = 0x4A8; // CParticleFloatInput
                constexpr std::ptrdiff_t m_flInterpInput0 = 0x600; // float32
                constexpr std::ptrdiff_t m_flInterpInput1 = 0x604; // float32
                constexpr std::ptrdiff_t m_vInterpOutput0 = 0x608; // Vector
                constexpr std::ptrdiff_t m_vInterpOutput1 = 0x614; // Vector
                constexpr std::ptrdiff_t m_Gradient = 0x620; // CColorGradient
                constexpr std::ptrdiff_t m_vRandomMin = 0x638; // Vector
                constexpr std::ptrdiff_t m_vRandomMax = 0x644; // Vector
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InstantaneousEmitter {
                constexpr std::ptrdiff_t m_nParticlesToEmit = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInitFromKilledParentParticles = 0x470; // float32
                constexpr std::ptrdiff_t m_nEventType = 0x474; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_flParentParticleScale = 0x478; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nMaxEmittedPerFrame = 0x5D0; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x5D4; // int32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainLineLength {
                constexpr std::ptrdiff_t m_flMinDistance = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance = 0x1BC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_LifespanFromVelocity {
                constexpr std::ptrdiff_t m_vecComponentScale = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_flTraceOffset = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flTraceTolerance = 0x1D0; // float32
                constexpr std::ptrdiff_t m_nMaxPlanes = 0x1D4; // int32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1DC; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x25C; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bIncludeWater = 0x268; // bool
            }
            // Parent: CBaseRendererSource2
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseTrailRenderer {
                constexpr std::ptrdiff_t m_nOrientationType = 0x29C0; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x29C4; // int32
                constexpr std::ptrdiff_t m_flMinSize = 0x29C8; // float32
                constexpr std::ptrdiff_t m_flMaxSize = 0x29CC; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x29D0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x2B28; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bClampV = 0x2C80; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityFromCP {
                constexpr std::ptrdiff_t m_velocityInput = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_transformInput = 0x810; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flVelocityScale = 0x870; // float32
                constexpr std::ptrdiff_t m_bDirectionOnly = 0x874; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointOrientation {
                constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1B9; // bool
                constexpr std::ptrdiff_t m_bRandomize = 0x1BB; // bool
                constexpr std::ptrdiff_t m_bSetOnce = 0x1BC; // bool
                constexpr std::ptrdiff_t m_nCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nHeadLocation = 0x1C4; // int32
                constexpr std::ptrdiff_t m_vecRotation = 0x1C8; // QAngle
                constexpr std::ptrdiff_t m_vecRotationB = 0x1D4; // QAngle
                constexpr std::ptrdiff_t m_flInterpolation = 0x1E0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementSkinnedPositionFromCPSnapshot {
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1C0; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bSetNormal = 0x1C8; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x1C9; // bool
                constexpr std::ptrdiff_t m_nIndexType = 0x1CC; // SnapshotIndexType_t
                constexpr std::ptrdiff_t m_flReadIndex = 0x1D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flIncrement = 0x328; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x480; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x5D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x730; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateVector {
                constexpr std::ptrdiff_t m_RateMin = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_RateMax = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_FrequencyMin = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_FrequencyMax = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_nField = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportional = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bOffset = 0x1EE; // bool
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flOscMult = 0x200; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOscAdd = 0x358; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRateScale = 0x4B0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PositionLock {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flStartTime_min = 0x218; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x21C; // float32
                constexpr std::ptrdiff_t m_flStartTime_exp = 0x220; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x224; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x228; // float32
                constexpr std::ptrdiff_t m_flEndTime_exp = 0x22C; // float32
                constexpr std::ptrdiff_t m_flRange = 0x230; // float32
                constexpr std::ptrdiff_t m_flRangeBias = 0x238; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flJumpThreshold = 0x390; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x394; // float32
                constexpr std::ptrdiff_t m_bLockRot = 0x398; // bool
                constexpr std::ptrdiff_t m_vecScale = 0x3A0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x9F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputPrev = 0x9F4; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderVRHapticEvent {
                constexpr std::ptrdiff_t m_nHand = 0x204; // ParticleVRHandChoiceList_t
                constexpr std::ptrdiff_t m_nOutputHandCP = 0x208; // int32
                constexpr std::ptrdiff_t m_nOutputField = 0x20C; // int32
                constexpr std::ptrdiff_t m_flAmplitude = 0x210; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToImpactPoint {
                constexpr std::ptrdiff_t m_nCPOut = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPIn = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flUpdateRate = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flTraceLength = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartOffset = 0x320; // float32
                constexpr std::ptrdiff_t m_flOffset = 0x324; // float32
                constexpr std::ptrdiff_t m_vecTraceDir = 0x328; // Vector
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x334; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x3B4; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bSetToEndpoint = 0x3B8; // bool
                constexpr std::ptrdiff_t m_bTraceToClosestSurface = 0x3B9; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0x3BA; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InterpolateRadius {
                constexpr std::ptrdiff_t m_flStartTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1C8; // bool
                constexpr std::ptrdiff_t m_flBias = 0x1CC; // float32
            }
            // Parent: None
            // Fields count: 1
            namespace ParticleAttributeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ReinitializeScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TurbulenceForce {
                constexpr std::ptrdiff_t m_flNoiseCoordScale0 = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale1 = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale2 = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale3 = 0x1D0; // float32
                constexpr std::ptrdiff_t m_vecNoiseAmount0 = 0x1D4; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount1 = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount2 = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount3 = 0x1F8; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelElementOnceTimed {
                constexpr std::ptrdiff_t m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_inNames = 0x1C0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_outNames = 0x1D8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_fallbackNames = 0x1F0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x208; // bool
                constexpr std::ptrdiff_t m_bProportional = 0x209; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x20C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x210; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRemapTime = 0x214; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToPlayer {
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bOrientToEyes = 0x1CC; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapTimedFreeze {
                constexpr std::ptrdiff_t m_flFreezeTime = 0x1B8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderGpuImplicit {
                constexpr std::ptrdiff_t m_bUsePerParticleRadius = 0x202; // bool
                constexpr std::ptrdiff_t m_nVertexCountKb = 0x204; // uint32
                constexpr std::ptrdiff_t m_nIndexCountKb = 0x208; // uint32
                constexpr std::ptrdiff_t m_fGridSize = 0x210; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fRadiusScale = 0x368; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fIsosurfaceThreshold = 0x4C0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nScaleCP = 0x618; // int32
                constexpr std::ptrdiff_t m_hMaterial = 0x620; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: IParticleEffect
            // Fields count: 32
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
                constexpr std::ptrdiff_t m_bShouldSave = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDisableAggregation = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShouldCheckFoW = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_vSortOrigin = 0x40; // Vector
                constexpr std::ptrdiff_t m_flScale = 0x4C; // float32
                constexpr std::ptrdiff_t m_hOwner = 0x50; // PARTICLE_EHANDLE__*
                constexpr std::ptrdiff_t m_pOwningParticleProperty = 0x58; // CParticleProperty*
                constexpr std::ptrdiff_t m_flFreezeTransitionStart = 0x70; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x74; // float32
                constexpr std::ptrdiff_t m_flFreezeTransitionOverride = 0x78; // float32
                constexpr std::ptrdiff_t m_bFreezeTransitionActive = 0x7C; // bool
                constexpr std::ptrdiff_t m_bFreezeTargetState = 0x7D; // bool
                constexpr std::ptrdiff_t m_bCanFreeze = 0x7E; // bool
                constexpr std::ptrdiff_t m_LastMin = 0x80; // Vector
                constexpr std::ptrdiff_t m_LastMax = 0x8C; // Vector
                constexpr std::ptrdiff_t m_nSplitScreenUser = 0x98; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_vecAggregationCenter = 0x9C; // Vector
                constexpr std::ptrdiff_t m_RefCount = 0xC0; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetRandomControlPointPosition {
                constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1B9; // bool
                constexpr std::ptrdiff_t m_bOrient = 0x1BA; // bool
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nHeadLocation = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flReRandomRate = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecCPMinPos = 0x320; // Vector
                constexpr std::ptrdiff_t m_vecCPMaxPos = 0x32C; // Vector
                constexpr std::ptrdiff_t m_flInterpolation = 0x338; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformVisibilityToScalar {
                constexpr std::ptrdiff_t m_nSetMethod = 0x1B8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x224; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x228; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x22C; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x230; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x234; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapControlPointDirectionToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C0; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionOperator {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DragRelativeToPlane {
                constexpr std::ptrdiff_t m_flDragAtPlane = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flFalloff = 0x310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDirectional = 0x468; // bool
                constexpr std::ptrdiff_t m_vecPlaneNormal = 0x470; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xAC0; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPtoVector {
                constexpr std::ptrdiff_t m_nCPInput = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleNamedValueSource_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_IsPublic = 0x8; // bool
                constexpr std::ptrdiff_t m_ValueType = 0xC; // PulseValueType_t
                constexpr std::ptrdiff_t m_DefaultConfig = 0x10; // ParticleNamedValueConfiguration_t
                constexpr std::ptrdiff_t m_NamedConfigs = 0x48; // CUtlVector<ParticleNamedValueConfiguration_t>
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomYaw {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SnapshotRigidSkinToBones {
                constexpr std::ptrdiff_t m_bTransformNormals = 0x1B8; // bool
                constexpr std::ptrdiff_t m_bTransformRadii = 0x1B9; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetSingleControlPointPosition {
                constexpr std::ptrdiff_t m_bSetOnce = 0x1B9; // bool
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_transformInput = 0x810; // CParticleTransformInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceToNeighborCull {
                constexpr std::ptrdiff_t m_flDistance = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bIncludeRadii = 0x318; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPtoScalar {
                constexpr std::ptrdiff_t m_nCPInput = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nField = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flInterpRate = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1E0; // ParticleSetMethod_t
            }
            // Parent: CParticleFunction
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionRenderer {
                constexpr std::ptrdiff_t VisibilityInputs = 0x1B8; // CParticleVisibilityInputs
                constexpr std::ptrdiff_t m_bCannotBeRefracted = 0x200; // bool
                constexpr std::ptrdiff_t m_bSkipRenderingOnMobile = 0x201; // bool
            }
            // Parent: IParticleSystemDefinition
            // Fields count: 65
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleSystemDefinition {
                constexpr std::ptrdiff_t m_nBehaviorVersion = 0x8; // int32
                constexpr std::ptrdiff_t m_PreEmissionOperators = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
                constexpr std::ptrdiff_t m_Emitters = 0x28; // CUtlVector<CParticleFunctionEmitter*>
                constexpr std::ptrdiff_t m_Initializers = 0x40; // CUtlVector<CParticleFunctionInitializer*>
                constexpr std::ptrdiff_t m_Operators = 0x58; // CUtlVector<CParticleFunctionOperator*>
                constexpr std::ptrdiff_t m_ForceGenerators = 0x70; // CUtlVector<CParticleFunctionForce*>
                constexpr std::ptrdiff_t m_Constraints = 0x88; // CUtlVector<CParticleFunctionConstraint*>
                constexpr std::ptrdiff_t m_Renderers = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
                constexpr std::ptrdiff_t m_Children = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
                constexpr std::ptrdiff_t m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32
                constexpr std::ptrdiff_t m_nInitialParticles = 0x210; // int32
                constexpr std::ptrdiff_t m_nMaxParticles = 0x214; // int32
                constexpr std::ptrdiff_t m_nGroupID = 0x218; // int32
                constexpr std::ptrdiff_t m_BoundingBoxMin = 0x21C; // Vector
                constexpr std::ptrdiff_t m_BoundingBoxMax = 0x228; // Vector
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x234; // float32
                constexpr std::ptrdiff_t m_nSortOverridePositionCP = 0x238; // int32
                constexpr std::ptrdiff_t m_bInfiniteBounds = 0x23C; // bool
                constexpr std::ptrdiff_t m_bEnableNamedValues = 0x23D; // bool
                constexpr std::ptrdiff_t m_NamedValueDomain = 0x240; // CUtlString
                constexpr std::ptrdiff_t m_NamedValueLocals = 0x248; // CUtlVector<ParticleNamedValueSource_t*>
                constexpr std::ptrdiff_t m_ConstantColor = 0x260; // Color
                constexpr std::ptrdiff_t m_ConstantNormal = 0x264; // Vector
                constexpr std::ptrdiff_t m_flConstantRadius = 0x270; // float32
                constexpr std::ptrdiff_t m_flConstantRotation = 0x274; // float32
                constexpr std::ptrdiff_t m_flConstantRotationSpeed = 0x278; // float32
                constexpr std::ptrdiff_t m_flConstantLifespan = 0x27C; // float32
                constexpr std::ptrdiff_t m_nConstantSequenceNumber = 0x280; // int32
                constexpr std::ptrdiff_t m_nConstantSequenceNumber1 = 0x284; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x288; // int32
                constexpr std::ptrdiff_t m_hSnapshot = 0x290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_pszCullReplacementName = 0x298; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flCullRadius = 0x2A0; // float32
                constexpr std::ptrdiff_t m_flCullFillCost = 0x2A4; // float32
                constexpr std::ptrdiff_t m_nCullControlPoint = 0x2A8; // int32
                constexpr std::ptrdiff_t m_hFallback = 0x2B0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nFallbackMaxCount = 0x2B8; // int32
                constexpr std::ptrdiff_t m_hLowViolenceDef = 0x2C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_hReferenceReplacement = 0x2C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flPreSimulationTime = 0x2D0; // float32
                constexpr std::ptrdiff_t m_flStopSimulationAfterTime = 0x2D4; // float32
                constexpr std::ptrdiff_t m_flMaximumTimeStep = 0x2D8; // float32
                constexpr std::ptrdiff_t m_flMaximumSimTime = 0x2DC; // float32
                constexpr std::ptrdiff_t m_flMinimumSimTime = 0x2E0; // float32
                constexpr std::ptrdiff_t m_flMinimumTimeStep = 0x2E4; // float32
                constexpr std::ptrdiff_t m_nMinimumFrames = 0x2E8; // int32
                constexpr std::ptrdiff_t m_nMinCPULevel = 0x2EC; // int32
                constexpr std::ptrdiff_t m_nMinGPULevel = 0x2F0; // int32
                constexpr std::ptrdiff_t m_flNoDrawTimeToGoToSleep = 0x2F4; // float32
                constexpr std::ptrdiff_t m_flMaxDrawDistance = 0x2F8; // float32
                constexpr std::ptrdiff_t m_flStartFadeDistance = 0x2FC; // float32
                constexpr std::ptrdiff_t m_flMaxCreationDistance = 0x300; // float32
                constexpr std::ptrdiff_t m_nAggregationMinAvailableParticles = 0x304; // int32
                constexpr std::ptrdiff_t m_flAggregateRadius = 0x308; // float32
                constexpr std::ptrdiff_t m_bShouldBatch = 0x30C; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToRenderBounds = 0x30D; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToSnapshot = 0x30E; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToCollisionHulls = 0x30F; // bool
                constexpr std::ptrdiff_t m_nViewModelEffect = 0x310; // InheritableBoolType_t
                constexpr std::ptrdiff_t m_bScreenSpaceEffect = 0x314; // bool
                constexpr std::ptrdiff_t m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nSkipRenderControlPoint = 0x320; // int32
                constexpr std::ptrdiff_t m_nAllowRenderControlPoint = 0x324; // int32
                constexpr std::ptrdiff_t m_bShouldSort = 0x328; // bool
                constexpr std::ptrdiff_t m_controlPointConfigurations = 0x370; // CUtlVector<ParticleControlPointConfiguration_t>
            }
            // Parent: C_OP_RemapNamedModelElementEndCap
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelMeshGroupEndCap {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PercentageBetweenTransformsVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_TransformStart = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x240; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x2A0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x2A4; // bool
                constexpr std::ptrdiff_t m_bRadialCheck = 0x2A5; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderScreenVelocityRotate {
                constexpr std::ptrdiff_t m_flRotateRateDegrees = 0x204; // float32
                constexpr std::ptrdiff_t m_flForwardDegrees = 0x208; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_UpdateLightSource {
                constexpr std::ptrdiff_t m_vColorTint = 0x1B8; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flMinimumLightingRadius = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flMaximumLightingRadius = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flPositionDampingConstant = 0x1CC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinBox {
                constexpr std::ptrdiff_t m_vecMin = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecMax = 0x810; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xE60; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xE64; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0xE68; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ChooseRandomChildrenInGroup {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flNumberOfChildren = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 33
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ControlpointLight {
                constexpr std::ptrdiff_t m_flScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nControlPoint1 = 0x640; // int32
                constexpr std::ptrdiff_t m_nControlPoint2 = 0x644; // int32
                constexpr std::ptrdiff_t m_nControlPoint3 = 0x648; // int32
                constexpr std::ptrdiff_t m_nControlPoint4 = 0x64C; // int32
                constexpr std::ptrdiff_t m_vecCPOffset1 = 0x650; // Vector
                constexpr std::ptrdiff_t m_vecCPOffset2 = 0x65C; // Vector
                constexpr std::ptrdiff_t m_vecCPOffset3 = 0x668; // Vector
                constexpr std::ptrdiff_t m_vecCPOffset4 = 0x674; // Vector
                constexpr std::ptrdiff_t m_LightFiftyDist1 = 0x680; // float32
                constexpr std::ptrdiff_t m_LightZeroDist1 = 0x684; // float32
                constexpr std::ptrdiff_t m_LightFiftyDist2 = 0x688; // float32
                constexpr std::ptrdiff_t m_LightZeroDist2 = 0x68C; // float32
                constexpr std::ptrdiff_t m_LightFiftyDist3 = 0x690; // float32
                constexpr std::ptrdiff_t m_LightZeroDist3 = 0x694; // float32
                constexpr std::ptrdiff_t m_LightFiftyDist4 = 0x698; // float32
                constexpr std::ptrdiff_t m_LightZeroDist4 = 0x69C; // float32
                constexpr std::ptrdiff_t m_LightColor1 = 0x6A0; // Color
                constexpr std::ptrdiff_t m_LightColor2 = 0x6A4; // Color
                constexpr std::ptrdiff_t m_LightColor3 = 0x6A8; // Color
                constexpr std::ptrdiff_t m_LightColor4 = 0x6AC; // Color
                constexpr std::ptrdiff_t m_bLightType1 = 0x6B0; // bool
                constexpr std::ptrdiff_t m_bLightType2 = 0x6B1; // bool
                constexpr std::ptrdiff_t m_bLightType3 = 0x6B2; // bool
                constexpr std::ptrdiff_t m_bLightType4 = 0x6B3; // bool
                constexpr std::ptrdiff_t m_bLightDynamic1 = 0x6B4; // bool
                constexpr std::ptrdiff_t m_bLightDynamic2 = 0x6B5; // bool
                constexpr std::ptrdiff_t m_bLightDynamic3 = 0x6B6; // bool
                constexpr std::ptrdiff_t m_bLightDynamic4 = 0x6B7; // bool
                constexpr std::ptrdiff_t m_bUseNormal = 0x6B8; // bool
                constexpr std::ptrdiff_t m_bUseHLambert = 0x6B9; // bool
                constexpr std::ptrdiff_t m_bClampLowerRange = 0x6BE; // bool
                constexpr std::ptrdiff_t m_bClampUpperRange = 0x6BF; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VectorFieldSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecScale = 0x320; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flBoundaryDampening = 0x970; // float32
                constexpr std::ptrdiff_t m_bSetVelocity = 0x974; // bool
                constexpr std::ptrdiff_t m_bLockToSurface = 0x975; // bool
                constexpr std::ptrdiff_t m_flGridSpacing = 0x978; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CylindricalDistanceToTransform {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x470; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformStart = 0x720; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x780; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x7E0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x7E4; // bool
                constexpr std::ptrdiff_t m_bAdditive = 0x7E5; // bool
                constexpr std::ptrdiff_t m_bCapsule = 0x7E6; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionPlaceOnGround {
                constexpr std::ptrdiff_t m_flOffset = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x470; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x4F0; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nTraceMissBehavior = 0x500; // ParticleTraceMissBehavior_t
                constexpr std::ptrdiff_t m_bIncludeWater = 0x504; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0x505; // bool
                constexpr std::ptrdiff_t m_bSetPXYZOnly = 0x506; // bool
                constexpr std::ptrdiff_t m_bTraceAlongNormal = 0x507; // bool
                constexpr std::ptrdiff_t m_bOffsetonColOnly = 0x508; // bool
                constexpr std::ptrdiff_t m_flOffsetByRadiusFactor = 0x50C; // float32
                constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0x510; // int32
                constexpr std::ptrdiff_t m_nIgnoreCP = 0x514; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomScalar {
                constexpr std::ptrdiff_t m_flMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flExponent = 0x1C4; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C8; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderPostProcessing {
                constexpr std::ptrdiff_t m_flPostProcessStrength = 0x208; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_hPostTexture = 0x360; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_nPriority = 0x368; // ParticlePostProcessPriorityGroup_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WorldTraceConstraint {
                constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecCpOffset = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_nCollisionMode = 0x1C8; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_nCollisionModeMin = 0x1CC; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_nTraceSet = 0x1D0; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1D4; // char[128]
                constexpr std::ptrdiff_t m_bWorldOnly = 0x254; // bool
                constexpr std::ptrdiff_t m_bBrushOnly = 0x255; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0x256; // bool
                constexpr std::ptrdiff_t m_nIgnoreCP = 0x258; // int32
                constexpr std::ptrdiff_t m_flCpMovementTolerance = 0x25C; // float32
                constexpr std::ptrdiff_t m_flRetestRate = 0x260; // float32
                constexpr std::ptrdiff_t m_flTraceTolerance = 0x264; // float32
                constexpr std::ptrdiff_t m_flCollisionConfirmationSpeed = 0x268; // float32
                constexpr std::ptrdiff_t m_nMaxTracesPerFrame = 0x26C; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x270; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flBounceAmount = 0x3C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSlideAmount = 0x520; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRandomDirScale = 0x678; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bDecayBounce = 0x7D0; // bool
                constexpr std::ptrdiff_t m_bKillonContact = 0x7D1; // bool
                constexpr std::ptrdiff_t m_flMinSpeed = 0x7D4; // float32
                constexpr std::ptrdiff_t m_bSetNormal = 0x7D8; // bool
                constexpr std::ptrdiff_t m_nStickOnCollisionField = 0x7DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flStopSpeed = 0x7E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nEntityStickDataField = 0x938; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nEntityStickNormalField = 0x93C; // ParticleAttributeIndex_t
            }
            // Parent: CParticleVecInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionVecInput {
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderBlobs {
                constexpr std::ptrdiff_t m_cubeWidth = 0x208; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_cutoffRadius = 0x360; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_renderRadius = 0x4B8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nVertexCountKb = 0x610; // uint32
                constexpr std::ptrdiff_t m_nIndexCountKb = 0x614; // uint32
                constexpr std::ptrdiff_t m_nScaleCP = 0x618; // int32
                constexpr std::ptrdiff_t m_MaterialVars = 0x620; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_hMaterial = 0x650; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateScalar {
                constexpr std::ptrdiff_t m_RateMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_FrequencyMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_FrequencyMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_nField = 0x1C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportional = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1CD; // bool
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flOscMult = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1E4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeOut {
                constexpr std::ptrdiff_t m_flFadeOutTimeMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flFadeOutTimeMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flFadeOutTimeExp = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flFadeBias = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bProportional = 0x200; // bool
                constexpr std::ptrdiff_t m_bEaseInAndOut = 0x201; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomSequence {
                constexpr std::ptrdiff_t m_nSequenceMin = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nSequenceMax = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bShuffle = 0x1C4; // bool
                constexpr std::ptrdiff_t m_bLinear = 0x1C5; // bool
                constexpr std::ptrdiff_t m_WeightedList = 0x1C8; // CUtlVector<SequenceWeightedList_t>
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarSplineSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseOut = 0x1F4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x318; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CollideWithParentParticles {
                constexpr std::ptrdiff_t m_flParentRadiusScale = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadiusScale = 0x310; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromVectorFieldSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nWeightUpdateCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bUseVerticalVelocity = 0x1C8; // bool
                constexpr std::ptrdiff_t m_vecScale = 0x1D0; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetVectorAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1B8; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x810; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0xE60; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0xE64; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0xE68; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_AddVectorToVector {
                constexpr std::ptrdiff_t m_vecScale = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x1CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vOffsetMin = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_vOffsetMax = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1E8; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialVisibilityScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformOrientationToYaw {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRotOffset = 0x21C; // float32
                constexpr std::ptrdiff_t m_flSpinStrength = 0x220; // float32
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderStatusEffect {
                constexpr std::ptrdiff_t m_pTextureColorWarp = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureDetail2 = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureDiffuseWarp = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureFresnelColorWarp = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureFresnelWarp = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureSpecularWarp = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureEnvMap = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CParticleFunctionForce
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RandomForce {
                constexpr std::ptrdiff_t m_MinForce = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_MaxForce = 0x1D0; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapParticleCountOnScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nInputMax = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_bBackwards = 0x1CC; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticlePreviewState_t {
                constexpr std::ptrdiff_t m_previewModel = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nModSpecificData = 0x8; // uint32
                constexpr std::ptrdiff_t m_groundType = 0xC; // PetGroundType_t
                constexpr std::ptrdiff_t m_sequenceName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nFireParticleOnSequenceFrame = 0x18; // int32
                constexpr std::ptrdiff_t m_hitboxSetName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_materialGroupName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vecBodyGroups = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x48; // float32
                constexpr std::ptrdiff_t m_flParticleSimulationRate = 0x4C; // float32
                constexpr std::ptrdiff_t m_bShouldDrawHitboxes = 0x50; // bool
                constexpr std::ptrdiff_t m_bShouldDrawAttachments = 0x51; // bool
                constexpr std::ptrdiff_t m_bShouldDrawAttachmentNames = 0x52; // bool
                constexpr std::ptrdiff_t m_bShouldDrawControlPointAxes = 0x53; // bool
                constexpr std::ptrdiff_t m_bAnimationNonLooping = 0x54; // bool
                constexpr std::ptrdiff_t m_vecPreviewGravity = 0x58; // Vector
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LocalAccelerationForce {
                constexpr std::ptrdiff_t m_nCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nScaleCP = 0x1C8; // int32
                constexpr std::ptrdiff_t m_vecAccel = 0x1D0; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ModelCull {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bCullOutside = 0x1BD; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1BE; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1BF; // char[128]
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x310; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x314; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_Lerp = 0x318; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapTransformToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vInputMin = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_vInputMax = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vOutputMin = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_vOutputMax = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_TransformInput = 0x1F0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_LocalSpaceTransform = 0x250; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flStartTime = 0x2B0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x2B4; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x2B8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bOffset = 0x2BC; // bool
                constexpr std::ptrdiff_t m_bAccelerate = 0x2BD; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x2C0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SDFLighting {
                constexpr std::ptrdiff_t m_vLightingDir = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vTint_0 = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vTint_1 = 0x1D0; // Vector
            }
            // Parent: C_OP_RemapDistanceToLineSegmentBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDistanceToLineSegmentToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMinOutputValue = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flMaxOutputValue = 0x1D4; // float32
            }
            // Parent: CParticleFloatInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleRemapFloatInput {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVectortoCP {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nParticleNumber = 0x1C0; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFromCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1C8; // bool
                constexpr std::ptrdiff_t m_bReverse = 0x1C9; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1CC; // int32
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x1D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x328; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x480; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bSubSample = 0x5D8; // bool
                constexpr std::ptrdiff_t m_bPrev = 0x5D9; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceBetweenCPsToCP {
                constexpr std::ptrdiff_t m_nStartCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nEndCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nOutputCPField = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bSetOnce = 0x1CC; // bool
                constexpr std::ptrdiff_t m_flInputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flLOSScale = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bLOS = 0x1E8; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1E9; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x26C; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nSetParent = 0x270; // ParticleParentSetMode_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToHand {
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nHand = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_bOrientToHand = 0x1D0; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistanceToPath {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance0 = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flMaxDistanceMid = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flMaxDistance1 = 0x1C4; // float32
                constexpr std::ptrdiff_t m_PathParameters = 0x1D0; // CPathParameters
                constexpr std::ptrdiff_t m_flTravelTime = 0x210; // float32
                constexpr std::ptrdiff_t m_nFieldScale = 0x214; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nManualTField = 0x218; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecPointOffset = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_flDistance = 0x1C8; // float32
                constexpr std::ptrdiff_t m_bCullInside = 0x1CC; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSDFDistanceToScalarAttribute {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMinDistance = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flValueBelowMin = 0x470; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flValueAtMin = 0x5C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flValueAtMax = 0x720; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flValueAboveMax = 0x878; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateAlongPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1BC; // float32
                constexpr std::ptrdiff_t m_PathParams = 0x1C0; // CPathParameters
                constexpr std::ptrdiff_t m_bUseRandomCPs = 0x200; // bool
                constexpr std::ptrdiff_t m_vEndOffset = 0x204; // Vector
                constexpr std::ptrdiff_t m_bSaveOffset = 0x210; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointsToModelParticles {
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1B8; // char[128]
                constexpr std::ptrdiff_t m_AttachmentName = 0x238; // char[128]
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x2B8; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x2BC; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x2C0; // int32
                constexpr std::ptrdiff_t m_bSkin = 0x2C4; // bool
                constexpr std::ptrdiff_t m_bAttachment = 0x2C5; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ColorInterpolateRandom {
                constexpr std::ptrdiff_t m_ColorFadeMin = 0x1B8; // Color
                constexpr std::ptrdiff_t m_ColorFadeMax = 0x1D4; // Color
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flFadeEndTime = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseInOut = 0x1F0; // bool
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelSequenceToScalar {
            }
            // Parent: C_OP_RenderPoints
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderLights {
                constexpr std::ptrdiff_t m_flAnimationRate = 0x210; // float32
                constexpr std::ptrdiff_t m_nAnimationType = 0x214; // AnimationType_t
                constexpr std::ptrdiff_t m_bAnimateInFPS = 0x218; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x21C; // float32
                constexpr std::ptrdiff_t m_flMaxSize = 0x220; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x224; // float32
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x228; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayClampCount {
                constexpr std::ptrdiff_t m_nCount = 0x1B8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRandomNumberGeneratorParameters {
                constexpr std::ptrdiff_t m_bDistributeEvenly = 0x0; // bool
                constexpr std::ptrdiff_t m_nSeed = 0x4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ColorLitPerParticle {
                constexpr std::ptrdiff_t m_ColorMin = 0x1D4; // Color
                constexpr std::ptrdiff_t m_ColorMax = 0x1D8; // Color
                constexpr std::ptrdiff_t m_TintMin = 0x1DC; // Color
                constexpr std::ptrdiff_t m_TintMax = 0x1E0; // Color
                constexpr std::ptrdiff_t m_flTintPerc = 0x1E4; // float32
                constexpr std::ptrdiff_t m_nTintBlendMode = 0x1E8; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_flLightAmplification = 0x1EC; // float32
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderPoints {
                constexpr std::ptrdiff_t m_hMaterial = 0x208; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetAttributeToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1BC; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x470; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x5C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x5CC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnGrid {
                constexpr std::ptrdiff_t m_nXCount = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nYCount = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nZCount = 0x470; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nXSpacing = 0x5C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nYSpacing = 0x720; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nZSpacing = 0x878; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x9D0; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0x9D4; // bool
                constexpr std::ptrdiff_t m_bCenter = 0x9D5; // bool
                constexpr std::ptrdiff_t m_bHollow = 0x9D6; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampCPLinearRandom {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecRateMin = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_vecRateMax = 0x1CC; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VelocityMatchingForce {
                constexpr std::ptrdiff_t m_flDirScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flSpdScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flNeighborDistance = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flFacingStrength = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bUseAABB = 0x1C8; // bool
                constexpr std::ptrdiff_t m_nCPBroadcast = 0x1CC; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomAlphaWindowThreshold {
                constexpr std::ptrdiff_t m_flMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flExponent = 0x1C4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnModelAtHeight {
                constexpr std::ptrdiff_t m_bUseBones = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bForceZ = 0x1BD; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nHeightCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bUseWaterHeight = 0x1C8; // bool
                constexpr std::ptrdiff_t m_flDesiredHeight = 0x1D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x328; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecDirectionBias = 0x978; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nBiasType = 0xFC8; // ParticleHitboxBiasType_t
                constexpr std::ptrdiff_t m_bLocalCoords = 0xFCC; // bool
                constexpr std::ptrdiff_t m_bPreferMovingBoxes = 0xFCD; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0xFCE; // char[128]
                constexpr std::ptrdiff_t m_flHitboxVelocityScale = 0x1050; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x11A8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleVariableRef {
                constexpr std::ptrdiff_t m_variableName = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_variableType = 0x38; // PulseValueType_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RestartAfterDuration {
                constexpr std::ptrdiff_t m_flDurationMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flDurationMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nCPField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bOnlyChildren = 0x1CC; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderClothForce {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVisibilityScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D0; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSequentialPathV2 {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNumToAssign = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bLoop = 0x470; // bool
                constexpr std::ptrdiff_t m_bCPPairs = 0x471; // bool
                constexpr std::ptrdiff_t m_bSaveOffset = 0x472; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x480; // CPathParameters
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VecInputMaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vecInput = 0x8; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialDirectionToTransformToVector {
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x224; // float32
                constexpr std::ptrdiff_t m_flOffsetRot = 0x228; // float32
                constexpr std::ptrdiff_t m_vecOffsetAxis = 0x22C; // Vector
                constexpr std::ptrdiff_t m_bNormalize = 0x238; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_OP_LockToSavedSequentialPathV2 {
                constexpr std::ptrdiff_t m_flFadeStart = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flFadeEnd = 0x1BC; // float32
                constexpr std::ptrdiff_t m_bCPPairs = 0x1C0; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1D0; // CPathParameters
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NormalLock {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapTransformOrientationToRotations {
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_vecRotation = 0x220; // Vector
                constexpr std::ptrdiff_t m_bUseQuat = 0x22C; // bool
                constexpr std::ptrdiff_t m_bWriteNormal = 0x22D; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Cull {
                constexpr std::ptrdiff_t m_flCullPerc = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flCullStart = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flCullEnd = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flCullExp = 0x1C4; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomYawFlip {
                constexpr std::ptrdiff_t m_flPercent = 0x1BC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSDFGradientToVectorAttribute {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SequenceWeightedList_t {
                constexpr std::ptrdiff_t m_nSequence = 0x0; // int32
                constexpr std::ptrdiff_t m_flRelativeWeight = 0x4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ReadFromNeighboringParticle {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1C0; // int32
                constexpr std::ptrdiff_t m_DistanceCheck = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x320; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderText {
                constexpr std::ptrdiff_t m_OutlineColor = 0x202; // Color
                constexpr std::ptrdiff_t m_DefaultText = 0x208; // CUtlString
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpToInitialPosition {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nCacheField = 0x318; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x320; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecScale = 0x478; // CParticleCollectionVecInput
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRotation {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpEndCapVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutput = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_flLerpTime = 0x1C8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VelocityDecay {
                constexpr std::ptrdiff_t m_flMinVelocity = 0x1B8; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPOrientationToPointAtCP {
                constexpr std::ptrdiff_t m_nInputCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b2DOrientation = 0x320; // bool
                constexpr std::ptrdiff_t m_bAvoidSingularity = 0x321; // bool
                constexpr std::ptrdiff_t m_bPointAway = 0x322; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LockToPointList {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_pointList = 0x1C0; // CUtlVector<PointDefinition_t>
                constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x1D9; // bool
                constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1DC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementPlaceOnGround {
                constexpr std::ptrdiff_t m_flOffset = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x310; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x314; // float32
                constexpr std::ptrdiff_t m_flTraceOffset = 0x318; // float32
                constexpr std::ptrdiff_t m_flLerpRate = 0x31C; // float32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x320; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x3A0; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nRefCP1 = 0x3A4; // int32
                constexpr std::ptrdiff_t m_nRefCP2 = 0x3A8; // int32
                constexpr std::ptrdiff_t m_nLerpCP = 0x3AC; // int32
                constexpr std::ptrdiff_t m_nTraceMissBehavior = 0x3B8; // ParticleTraceMissBehavior_t
                constexpr std::ptrdiff_t m_bIncludeShotHull = 0x3BC; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0x3BD; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0x3C0; // bool
                constexpr std::ptrdiff_t m_bScaleOffset = 0x3C1; // bool
                constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0x3C4; // int32
                constexpr std::ptrdiff_t m_nIgnoreCP = 0x3C8; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPOrientationToDirection {
                constexpr std::ptrdiff_t m_nInputControlPoint = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1BC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCrossProductOfTwoVectorsToVector {
                constexpr std::ptrdiff_t m_InputVec1 = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_InputVec2 = 0x808; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0xE58; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bNormalize = 0xE5C; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformOrientationToRotations {
                constexpr std::ptrdiff_t m_TransformInput = 0x1B8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_vecRotation = 0x218; // Vector
                constexpr std::ptrdiff_t m_bUseQuat = 0x224; // bool
                constexpr std::ptrdiff_t m_bWriteNormal = 0x225; // bool
            }
            // Parent: CGeneralRandomRotation
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRotationSpeed {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_OP_InheritFromParentParticlesV2 {
                constexpr std::ptrdiff_t m_flScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1C4; // bool
                constexpr std::ptrdiff_t m_nMissingParentBehavior = 0x1C8; // MissingParentInheritBehavior_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomSecondSequence {
                constexpr std::ptrdiff_t m_nSequenceMin = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nSequenceMax = 0x1C0; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFloatCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x310; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x314; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_Lerp = 0x318; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointDefinition_t {
                constexpr std::ptrdiff_t m_nControlPoint = 0x0; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x4; // bool
                constexpr std::ptrdiff_t m_vOffset = 0x8; // Vector
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointPositionToRandomActiveCP {
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nHeadLocationMin = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nHeadLocationMax = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flResetRate = 0x1C8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Diffusion {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1C0; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_AgeNoise {
                constexpr std::ptrdiff_t m_bAbsVal = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1BD; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flAgeMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flAgeMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1D0; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1D4; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVectorComponentToScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nComponent = 0x1C0; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGeneralRandomRotation {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flDegrees = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flDegreesMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flDegreesMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flRotationRandExponent = 0x1CC; // float32
                constexpr std::ptrdiff_t m_bRandomlyFlipDirection = 0x1D0; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceBetweenVecs {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecPoint1 = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecPoint2 = 0x810; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flInputMin = 0xE60; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0xFB8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x1110; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x1268; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x13C0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bDeltaTime = 0x13C4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DampenToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_flRange = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flScale = 0x1C0; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CalculateVectorAttribute {
                constexpr std::ptrdiff_t m_vStartValue = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_nFieldInput1 = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputScale1 = 0x1C8; // float32
                constexpr std::ptrdiff_t m_nFieldInput2 = 0x1CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputScale2 = 0x1D0; // float32
                constexpr std::ptrdiff_t m_nControlPointInput1 = 0x1D4; // ControlPointReference_t
                constexpr std::ptrdiff_t m_flControlPointScale1 = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nControlPointInput2 = 0x1EC; // ControlPointReference_t
                constexpr std::ptrdiff_t m_flControlPointScale2 = 0x200; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x204; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vFinalOutputScale = 0x208; // Vector
            }
            // Parent: CParticleInput
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            // MParticleCustomFieldDefaultValue
            namespace CParticleTransformInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleTransformType_t
                constexpr std::ptrdiff_t m_NamedValue = 0x10; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_bFollowNamedValue = 0x50; // bool
                constexpr std::ptrdiff_t m_bSupportsDisabled = 0x51; // bool
                constexpr std::ptrdiff_t m_bUseOrientation = 0x52; // bool
                constexpr std::ptrdiff_t m_nControlPoint = 0x54; // int32
                constexpr std::ptrdiff_t m_nControlPointRangeMax = 0x58; // int32
                constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0x5C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LockToBone {
                constexpr std::ptrdiff_t m_modelInput = 0x1B8; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x210; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x270; // float32
                constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x274; // float32
                constexpr std::ptrdiff_t m_flJumpThreshold = 0x278; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x27C; // float32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x280; // char[128]
                constexpr std::ptrdiff_t m_bRigid = 0x300; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x301; // bool
                constexpr std::ptrdiff_t m_nFieldOutput = 0x304; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputPrev = 0x308; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nRotationSetType = 0x30C; // ParticleRotationLockType_t
                constexpr std::ptrdiff_t m_bRigidRotationLock = 0x310; // bool
                constexpr std::ptrdiff_t m_vecRotation = 0x318; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flRotLerp = 0x968; // CPerParticleFloatInput
            }
            // Parent: C_OP_RemapNamedModelElementOnceTimed
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelBodyPartOnceTimed {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementMaintainOffset {
                constexpr std::ptrdiff_t m_vecOffset = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_nCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bRadiusScale = 0x1C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetVec {
                constexpr std::ptrdiff_t m_InputValue = 0x1B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x808; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x80C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_Lerp = 0x810; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x968; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromParentParticles {
                constexpr std::ptrdiff_t m_flVelocityScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flIncrement = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1C4; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bSubFrame = 0x1CC; // bool
            }
            // Parent: None
            // Fields count: 0
            namespace IParticleEffect {
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelBodyPart {
            }
            // Parent: None
            // Fields count: 1
            namespace PARTICLE_EHANDLE__ {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderOmni2Light {
                constexpr std::ptrdiff_t m_nLightType = 0x204; // ParticleOmni2LightTypeChoiceList_t
                constexpr std::ptrdiff_t m_vColorBlend = 0x208; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x858; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_nBrightnessUnit = 0x85C; // ParticleLightUnitChoiceList_t
                constexpr std::ptrdiff_t m_flBrightnessLumens = 0x860; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flBrightnessCandelas = 0x9B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bCastShadows = 0xB10; // bool
                constexpr std::ptrdiff_t m_bFog = 0xB11; // bool
                constexpr std::ptrdiff_t m_flFogScale = 0xB18; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLuminaireRadius = 0xC70; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSkirt = 0xDC8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRange = 0xF20; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInnerConeAngle = 0x1078; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOuterConeAngle = 0x11D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_hLightCookie = 0x1328; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bSphericalCookie = 0x1330; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConnectParentParticleToNearest {
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nSecondControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bUseRadius = 0x1C0; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flParentRadiusScale = 0x320; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFloatInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CPerParticleFloatInput {
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitSkinnedPositionFromCPSnapshot {
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1C4; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bRigid = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0x1CD; // bool
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1CE; // bool
                constexpr std::ptrdiff_t m_flMinNormalVelocity = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flMaxNormalVelocity = 0x1D4; // float32
                constexpr std::ptrdiff_t m_nIndexType = 0x1D8; // SnapshotIndexType_t
                constexpr std::ptrdiff_t m_flReadIndex = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flIncrement = 0x338; // float32
                constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x33C; // int32
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x340; // int32
                constexpr std::ptrdiff_t m_flBoneVelocity = 0x344; // float32
                constexpr std::ptrdiff_t m_flBoneVelocityMax = 0x348; // float32
                constexpr std::ptrdiff_t m_bCopyColor = 0x34C; // bool
                constexpr std::ptrdiff_t m_bCopyAlpha = 0x34D; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x34E; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LagCompensation {
                constexpr std::ptrdiff_t m_nDesiredVelocityCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nLatencyCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nLatencyCPField = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nDesiredVelocityCPField = 0x1C4; // int32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CollideWithSelf {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinimumSpeed = 0x310; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Noise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x1C8; // bool
                constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1CC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeAndKillForTracers {
                constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flStartAlpha = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flEndAlpha = 0x1CC; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ColorAdjustHSL {
                constexpr std::ptrdiff_t m_flHueAdjust = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSaturationAdjust = 0x310; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLightnessAdjust = 0x468; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleMassCalculationParameters {
                constexpr std::ptrdiff_t m_nMassMode = 0x0; // ParticleMassMode_t
                constexpr std::ptrdiff_t m_flRadius = 0x8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNominalRadius = 0x160; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flScale = 0x2B8; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SequenceFromModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D4; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_AlphaDecay {
                constexpr std::ptrdiff_t m_flMinAlpha = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDensityGradientToVectorAttribute {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitVec {
                constexpr std::ptrdiff_t m_InputValue = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x810; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x814; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x818; // bool
                constexpr std::ptrdiff_t m_bWritePreviousPosition = 0x819; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetHitboxToModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nForceInModel = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bEvenDistribution = 0x1C4; // bool
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1C8; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1D0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecDirectionBias = 0x820; // Vector
                constexpr std::ptrdiff_t m_bMaintainHitbox = 0x82C; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x82D; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x82E; // char[128]
                constexpr std::ptrdiff_t m_flShellSize = 0x8B0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementMoveAlongSkinnedCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bSetNormal = 0x1C0; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x1C1; // bool
                constexpr std::ptrdiff_t m_flInterpolation = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flTValue = 0x320; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutput = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x318; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x31C; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialRepulsionVelocity {
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1BC; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x23C; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x240; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x24C; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x258; // int32
                constexpr std::ptrdiff_t m_bPerParticle = 0x25C; // bool
                constexpr std::ptrdiff_t m_bTranslate = 0x25D; // bool
                constexpr std::ptrdiff_t m_bProportional = 0x25E; // bool
                constexpr std::ptrdiff_t m_flTraceLength = 0x260; // float32
                constexpr std::ptrdiff_t m_bPerParticleTR = 0x264; // bool
                constexpr std::ptrdiff_t m_bInherit = 0x265; // bool
                constexpr std::ptrdiff_t m_nChildCP = 0x268; // int32
                constexpr std::ptrdiff_t m_nChildGroupID = 0x26C; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClampScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x318; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToHMD {
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bOrientToHMD = 0x1CC; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DifferencePreviousParticle {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1D4; // bool
                constexpr std::ptrdiff_t m_bSetPreviousParticle = 0x1D5; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFieldFromVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1BC; // VectorFloatExpressionType_t
                constexpr std::ptrdiff_t m_vecInput1 = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecInput2 = 0x810; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0xE60; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputCP = 0xFB8; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0xFBC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PercentageBetweenTransforms {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_TransformStart = 0x1D0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x230; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x290; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x294; // bool
                constexpr std::ptrdiff_t m_bRadialCheck = 0x295; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PlaneCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x318; // bool
            }
            // Parent: C_OP_RemapNamedModelElementEndCap
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelSequenceEndCap {
            }
            // Parent: CParticleCollectionFloatInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionRendererFloatInput {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C8; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1CC; // bool
                constexpr std::ptrdiff_t m_bReverse = 0x1CD; // bool
                constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x1D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nManualSnapshotIndex = 0x328; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nRandomSeed = 0x480; // int32
                constexpr std::ptrdiff_t m_bLocalSpaceAngles = 0x484; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderCables {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x208; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x360; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecColorScale = 0x4B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xB08; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_hMaterial = 0xB10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nTextureRepetitionMode = 0xB18; // TextureRepetitionMode_t
                constexpr std::ptrdiff_t m_flTextureRepeatsPerSegment = 0xB20; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flTextureRepeatsCircumference = 0xC78; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flColorMapOffsetV = 0xDD0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flColorMapOffsetU = 0xF28; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flNormalMapOffsetV = 0x1080; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flNormalMapOffsetU = 0x11D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDrawCableCaps = 0x1330; // bool
                constexpr std::ptrdiff_t m_flCapRoundness = 0x1334; // float32
                constexpr std::ptrdiff_t m_flCapOffsetAmount = 0x1338; // float32
                constexpr std::ptrdiff_t m_flTessScale = 0x133C; // float32
                constexpr std::ptrdiff_t m_nMinTesselation = 0x1340; // int32
                constexpr std::ptrdiff_t m_nMaxTesselation = 0x1344; // int32
                constexpr std::ptrdiff_t m_nRoundness = 0x1348; // int32
                constexpr std::ptrdiff_t m_LightingTransform = 0x1350; // CParticleTransformInput
                constexpr std::ptrdiff_t m_MaterialFloatVars = 0x13B0; // CUtlVector<FloatInputMaterialVariable_t>
                constexpr std::ptrdiff_t m_MaterialVecVars = 0x13E0; // CUtlVector<VecInputMaterialVariable_t>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InheritVelocity {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flVelocityScale = 0x1C0; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToWaterSurface {
                constexpr std::ptrdiff_t m_nSourceCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nDestCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nFlowCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nActiveCP = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nActiveCPField = 0x1CC; // int32
                constexpr std::ptrdiff_t m_flRetestRate = 0x1D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bAdaptiveThreshold = 0x328; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionOffset {
                constexpr std::ptrdiff_t m_OffsetMin = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_OffsetMax = 0x810; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_TransformInput = 0xE60; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLocalCoords = 0xEC0; // bool
                constexpr std::ptrdiff_t m_bProportional = 0xEC1; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0xEC4; // CRandomNumberGeneratorParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_NormalAlignToCP {
                constexpr std::ptrdiff_t m_transformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nControlPointAxis = 0x220; // ParticleControlPointAxis_t
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ShapeMatchingConstraint {
                constexpr std::ptrdiff_t m_flShapeRestorationTime = 0x1B8; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetChildControlPoints {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bReverse = 0x320; // bool
                constexpr std::ptrdiff_t m_bSetOrientation = 0x321; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ChladniWave {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x470; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecWaveLength = 0x720; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecHarmonics = 0xD70; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x13C0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_nLocalSpaceControlPoint = 0x13C4; // int32
                constexpr std::ptrdiff_t m_b3D = 0x13C8; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDirectionToCPToVector {
                constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOffsetRot = 0x1C4; // float32
                constexpr std::ptrdiff_t m_vecOffsetAxis = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_bNormalize = 0x1D4; // bool
                constexpr std::ptrdiff_t m_nFieldStrength = 0x1D8; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DriveCPFromGlobalSoundFloat {
                constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOutputField = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_StackName = 0x1D8; // CUtlString
                constexpr std::ptrdiff_t m_OperatorName = 0x1E0; // CUtlString
                constexpr std::ptrdiff_t m_FieldName = 0x1E8; // CUtlString
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RtEnvCull {
                constexpr std::ptrdiff_t m_vecTestDir = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecTestNormal = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_bCullOnMiss = 0x1D0; // bool
                constexpr std::ptrdiff_t m_bStickInsteadOfCull = 0x1D1; // bool
                constexpr std::ptrdiff_t m_RtEnvName = 0x1D2; // char[128]
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x254; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x258; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PinParticleToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_bOffsetLocal = 0x810; // bool
                constexpr std::ptrdiff_t m_nParticleSelection = 0x814; // ParticleSelection_t
                constexpr std::ptrdiff_t m_nParticleNumber = 0x818; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nPinBreakType = 0x970; // ParticlePinDistance_t
                constexpr std::ptrdiff_t m_flBreakDistance = 0x978; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flBreakSpeed = 0xAD0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAge = 0xC28; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nBreakControlPointNumber = 0xD80; // int32
                constexpr std::ptrdiff_t m_nBreakControlPointNumber2 = 0xD84; // int32
                constexpr std::ptrdiff_t m_flBreakValue = 0xD88; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0xEE0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPtoVector {
                constexpr std::ptrdiff_t m_nCPInput = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vInputMin = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_vInputMax = 0x1D0; // Vector
                constexpr std::ptrdiff_t m_vOutputMin = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_vOutputMax = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flInterpRate = 0x1FC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x200; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bOffset = 0x204; // bool
                constexpr std::ptrdiff_t m_bAccelerate = 0x205; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateParticleImpulse {
                constexpr std::ptrdiff_t m_InputRadius = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_InputMagnitude = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFalloffFunction = 0x470; // ParticleFalloffFunction_t
                constexpr std::ptrdiff_t m_InputFalloffExp = 0x478; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nImpulseType = 0x5D0; // ParticleImpulseType_t
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DensityForce {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flForceScale = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flTargetDensity = 0x1CC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateInEpitrochoid {
                constexpr std::ptrdiff_t m_nComponent1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nComponent2 = 0x1C0; // int32
                constexpr std::ptrdiff_t m_TransformInput = 0x1C8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flParticleDensity = 0x228; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOffset = 0x380; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadius1 = 0x4D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadius2 = 0x630; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bUseCount = 0x788; // bool
                constexpr std::ptrdiff_t m_bUseLocalCoords = 0x789; // bool
                constexpr std::ptrdiff_t m_bOffsetExistingPos = 0x78A; // bool
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistanceToUserSpecifiedPath {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bLoopedPath = 0x1C4; // bool
                constexpr std::ptrdiff_t m_pointList = 0x1C8; // CUtlVector<PointDefinitionWithTimeValues_t>
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointPositions {
                constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1B9; // bool
                constexpr std::ptrdiff_t m_bOrient = 0x1BA; // bool
                constexpr std::ptrdiff_t m_bSetOnce = 0x1BB; // bool
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCP2 = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nCP3 = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nCP4 = 0x1C8; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vecCP2Pos = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_vecCP3Pos = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vecCP4Pos = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_nHeadLocation = 0x1FC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFloatAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1B8; // VectorFloatExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x810; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0xE60; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0xFB8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0xFBC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementRotateParticleAroundAxis {
                constexpr std::ptrdiff_t m_vecRotAxis = 0x1B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flRotRate = 0x808; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_TransformInput = 0x960; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLocalSpace = 0x9C0; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_IntraParticleForce {
                constexpr std::ptrdiff_t m_flAttractionMinDistance = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flAttractionMaxDistance = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flAttractionMaxStrength = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flRepulsionMinDistance = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flRepulsionMaxDistance = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flRepulsionMaxStrength = 0x1D8; // float32
                constexpr std::ptrdiff_t m_bUseAABB = 0x1DC; // bool
                constexpr std::ptrdiff_t m_bThreadIt = 0x1DD; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x318; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x31C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_InputStrength = 0x320; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnModel {
                constexpr std::ptrdiff_t m_modelInput = 0x1C0; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x218; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nForceInModel = 0x278; // int32
                constexpr std::ptrdiff_t m_bScaleToVolume = 0x27C; // bool
                constexpr std::ptrdiff_t m_bEvenDistribution = 0x27D; // bool
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x280; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nHitboxValueFromControlPointIndex = 0x3D8; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x3E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flBoneVelocity = 0xA30; // float32
                constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0xA34; // float32
                constexpr std::ptrdiff_t m_vecDirectionBias = 0xA38; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1088; // char[128]
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1108; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1109; // bool
                constexpr std::ptrdiff_t m_bUseMesh = 0x110A; // bool
                constexpr std::ptrdiff_t m_flShellSize = 0x1110; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InheritFromPeerSystem {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nGroupID = 0x1C4; // int32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PerParticleForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vForce = 0x320; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nCP = 0x970; // int32
            }
            // Parent: C_INIT_RandomNamedModelElement
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelMeshGroup {
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderProjected {
                constexpr std::ptrdiff_t m_bProjectCharacter = 0x202; // bool
                constexpr std::ptrdiff_t m_bProjectWorld = 0x203; // bool
                constexpr std::ptrdiff_t m_bProjectWater = 0x204; // bool
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x205; // bool
                constexpr std::ptrdiff_t m_bEnableProjectedDepthControls = 0x206; // bool
                constexpr std::ptrdiff_t m_flMinProjectionDepth = 0x208; // float32
                constexpr std::ptrdiff_t m_flMaxProjectionDepth = 0x20C; // float32
                constexpr std::ptrdiff_t m_vecProjectedMaterials = 0x210; // CUtlVector<RenderProjectedMaterial_t>
                constexpr std::ptrdiff_t m_flMaterialSelection = 0x228; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flAnimationTimeScale = 0x380; // float32
                constexpr std::ptrdiff_t m_bOrientToNormal = 0x384; // bool
                constexpr std::ptrdiff_t m_MaterialVars = 0x388; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_flRadiusScale = 0x3A0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x4F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x650; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x7A8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x7B0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xE00; // ParticleColorBlendType_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaxVelocity {
                constexpr std::ptrdiff_t m_flMaxVelocity = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMinVelocity = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nOverrideCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nOverrideCPField = 0x1C4; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityFromNormal {
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_fSpeedMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1C4; // bool
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaintainEmitter {
                constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x318; // float32
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x320; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmissionRate = 0x478; // float32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x47C; // int32
                constexpr std::ptrdiff_t m_bEmitInstantaneously = 0x480; // bool
                constexpr std::ptrdiff_t m_bFinalEmitOnStop = 0x481; // bool
                constexpr std::ptrdiff_t m_flScale = 0x488; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionOffsetToCP {
                constexpr std::ptrdiff_t m_nControlPointNumberStart = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nControlPointNumberEnd = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1C4; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialTransformDirectionToRotation {
                constexpr std::ptrdiff_t m_TransformInput = 0x1C0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOffsetRot = 0x224; // float32
                constexpr std::ptrdiff_t m_nComponent = 0x228; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeAndKill {
                constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flStartAlpha = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flEndAlpha = 0x1CC; // float32
                constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1D0; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace PARTICLE_WORLD_HANDLE__ {
                constexpr std::ptrdiff_t unused = 0x0; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ColorInterpolate {
                constexpr std::ptrdiff_t m_ColorFade = 0x1B8; // Color
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flFadeEndTime = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseInOut = 0x1D4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarSpline {
                constexpr std::ptrdiff_t m_RateMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flBias = 0x1D0; // float32
                constexpr std::ptrdiff_t m_nField = 0x200; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportionalOp = 0x204; // bool
                constexpr std::ptrdiff_t m_bEaseOut = 0x205; // bool
            }
            // Parent: C_OP_RemapNamedModelElementOnceTimed
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelSequenceOnceTimed {
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFromObjectScale {
                constexpr std::ptrdiff_t m_nCPInput = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1C0; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaintainSequentialPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flNumToAssign = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flCohesionStrength = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x1C8; // bool
                constexpr std::ptrdiff_t m_bUseParticleCount = 0x1C9; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1D0; // CPathParameters
            }
            // Parent: C_OP_RemapNamedModelElementEndCap
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelBodyPartEndCap {
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_StopAfterCPDuration {
                constexpr std::ptrdiff_t m_flDuration = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDestroyImmediately = 0x318; // bool
                constexpr std::ptrdiff_t m_bPlayEndCap = 0x319; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGeneralSpin {
                constexpr std::ptrdiff_t m_nSpinRateDegrees = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nSpinRateMinDegrees = 0x1BC; // int32
                constexpr std::ptrdiff_t m_fSpinRateStopTime = 0x1C4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_OP_LockToSavedSequentialPath {
                constexpr std::ptrdiff_t m_flFadeStart = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flFadeEnd = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bCPPairs = 0x1C4; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1D0; // CPathParameters
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelElementToScalar {
                constexpr std::ptrdiff_t m_hModel = 0x1C0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_names = 0x1C8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_values = 0x1E0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFieldInput = 0x1F8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1FC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x200; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x204; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClampVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOutputMax = 0x810; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderStatusEffectCitadel {
                constexpr std::ptrdiff_t m_pTextureColorWarp = 0x208; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureNormal = 0x210; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureMetalness = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureRoughness = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureSelfIllum = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureDetail = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapCPtoScalar {
                constexpr std::ptrdiff_t m_nCPInput = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1E0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_flRemapBias = 0x1E4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IParticleSystemDefinition {
            }
            // Parent: CParticleFloatInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionFloatInput {
            }
            // Parent: CParticleFunctionForce
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WindForce {
                constexpr std::ptrdiff_t m_vForce = 0x1C4; // Vector
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetVariable {
                constexpr std::ptrdiff_t m_variableReference = 0x1C0; // CParticleVariableRef
                constexpr std::ptrdiff_t m_transformInput = 0x200; // CParticleTransformInput
                constexpr std::ptrdiff_t m_positionOffset = 0x260; // Vector
                constexpr std::ptrdiff_t m_rotationOffset = 0x26C; // QAngle
                constexpr std::ptrdiff_t m_vecInput = 0x278; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_floatInput = 0x8C8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderStandardLight {
                constexpr std::ptrdiff_t m_nLightType = 0x204; // ParticleLightTypeChoiceList_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x208; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x858; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_flIntensity = 0x860; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCastShadows = 0x9B8; // bool
                constexpr std::ptrdiff_t m_flTheta = 0x9C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flPhi = 0xB18; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRadiusMultiplier = 0xC70; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAttenuationStyle = 0xDC8; // StandardLightingAttenuationStyle_t
                constexpr std::ptrdiff_t m_flFalloffLinearity = 0xDD0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flFiftyPercentFalloff = 0xF28; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flZeroPercentFalloff = 0x1080; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0x11D8; // bool
                constexpr std::ptrdiff_t m_bRenderSpecular = 0x11D9; // bool
                constexpr std::ptrdiff_t m_lightCookie = 0x11E0; // CUtlString
                constexpr std::ptrdiff_t m_nPriority = 0x11E8; // int32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x11EC; // ParticleLightFogLightingMode_t
                constexpr std::ptrdiff_t m_flFogContribution = 0x11F0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nCapsuleLightBehavior = 0x1348; // ParticleLightBehaviorChoiceList_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x134C; // float32
                constexpr std::ptrdiff_t m_bReverseOrder = 0x1350; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x1351; // bool
                constexpr std::ptrdiff_t m_nPrevPntSource = 0x1354; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMaxLength = 0x1358; // float32
                constexpr std::ptrdiff_t m_flMinLength = 0x135C; // float32
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x1360; // bool
                constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x1364; // float32
                constexpr std::ptrdiff_t m_flLengthScale = 0x1368; // float32
                constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x136C; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceToTransform {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x470; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformStart = 0x720; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLOS = 0x780; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x781; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x804; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x808; // float32
                constexpr std::ptrdiff_t m_flLOSScale = 0x80C; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x810; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x814; // bool
                constexpr std::ptrdiff_t m_bAdditive = 0x815; // bool
                constexpr std::ptrdiff_t m_vecComponentScale = 0x818; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapControlPointOrientationToRotation {
                constexpr std::ptrdiff_t m_nCP = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOffsetRot = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nComponent = 0x1C4; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToCenter {
                constexpr std::ptrdiff_t m_nCP1 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1C0; // Vector
                constexpr std::ptrdiff_t m_bUseAvgParticlePos = 0x1CC; // bool
                constexpr std::ptrdiff_t m_nSetParent = 0x1D0; // ParticleParentSetMode_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapAverageScalarValuetoCP {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nField = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDotProductToScalar {
                constexpr std::ptrdiff_t m_nInputCP1 = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nInputCP2 = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_bUseParticleVelocity = 0x1D4; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1DC; // bool
                constexpr std::ptrdiff_t m_bUseParticleNormal = 0x1DD; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPtoCP {
                constexpr std::ptrdiff_t m_nInputControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nInputField = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nOutputField = 0x1C8; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D8; // float32
                constexpr std::ptrdiff_t m_bDerivative = 0x1DC; // bool
                constexpr std::ptrdiff_t m_flInterpRate = 0x1E0; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointRotation {
                constexpr std::ptrdiff_t m_vecRotAxis = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flRotRate = 0x810; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nCP = 0x968; // int32
                constexpr std::ptrdiff_t m_nLocalCP = 0x96C; // int32
            }
            // Parent: CParticleFunctionForce
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CurlNoiseForce {
                constexpr std::ptrdiff_t m_nNoiseType = 0x1C4; // ParticleDirectionNoiseType_t
                constexpr std::ptrdiff_t m_vecNoiseFreq = 0x1C8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecNoiseScale = 0x818; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOffset = 0xE68; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOffsetRate = 0x14B8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flWorleySeed = 0x1B08; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flWorleyJitter = 0x1C60; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_Orient2DRelToCP {
                constexpr std::ptrdiff_t m_nCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRotOffset = 0x1C4; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetSimulationRate {
                constexpr std::ptrdiff_t m_flSimulationScale = 0x1C0; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeIn {
                constexpr std::ptrdiff_t m_flFadeInTimeMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flFadeInTimeMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flFadeInTimeExp = 0x1C0; // float32
                constexpr std::ptrdiff_t m_bProportional = 0x1C4; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderScreenShake {
                constexpr std::ptrdiff_t m_flDurationScale = 0x204; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x208; // float32
                constexpr std::ptrdiff_t m_flFrequencyScale = 0x20C; // float32
                constexpr std::ptrdiff_t m_flAmplitudeScale = 0x210; // float32
                constexpr std::ptrdiff_t m_nRadiusField = 0x214; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nDurationField = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFrequencyField = 0x21C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAmplitudeField = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFilterCP = 0x224; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapBoundingVolumetoCP {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1CC; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_HSVShiftToCP {
                constexpr std::ptrdiff_t m_nColorCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nColorGemEnableCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_DefaultHSVColor = 0x1C8; // Color
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_GlobalScale {
                constexpr std::ptrdiff_t m_flScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bScaleRadius = 0x1C8; // bool
                constexpr std::ptrdiff_t m_bScalePosition = 0x1C9; // bool
                constexpr std::ptrdiff_t m_bScaleVelocity = 0x1CA; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RadiusFromCPObject {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1BC; // int32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialVelocityFromHitbox {
                constexpr std::ptrdiff_t m_flVelocityMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flVelocityMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C4; // int32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1C8; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x248; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutput = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D0; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFieldToWater {
                constexpr std::ptrdiff_t m_nSourceCP = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nDestCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nCPField = 0x1C4; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TextureGroup_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_bReplaceTextureWithGradient = 0x1; // bool
                constexpr std::ptrdiff_t m_hTexture = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Gradient = 0x10; // CColorGradient
                constexpr std::ptrdiff_t m_nTextureType = 0x28; // SpriteCardTextureType_t
                constexpr std::ptrdiff_t m_nTextureChannels = 0x2C; // SpriteCardTextureChannel_t
                constexpr std::ptrdiff_t m_nTextureBlendMode = 0x30; // ParticleTextureLayerBlendType_t
                constexpr std::ptrdiff_t m_flTextureBlend = 0x38; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_TextureControls = 0x190; // TextureControls_t
            }
            // Parent: CParticleFunctionForce
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TimeVaryingForce {
                constexpr std::ptrdiff_t m_flStartLerpTime = 0x1C4; // float32
                constexpr std::ptrdiff_t m_StartingForce = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_flEndLerpTime = 0x1D4; // float32
                constexpr std::ptrdiff_t m_EndingForce = 0x1D8; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPOrientationToGroundNormal {
                constexpr std::ptrdiff_t m_flInterpRate = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flTraceOffset = 0x1C4; // float32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1C8; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x248; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nInputCP = 0x24C; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x250; // int32
                constexpr std::ptrdiff_t m_bIncludeWater = 0x260; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SnapshotSkinToBones {
                constexpr std::ptrdiff_t m_bTransformNormals = 0x1B8; // bool
                constexpr std::ptrdiff_t m_bTransformRadii = 0x1B9; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flJumpThreshold = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x1CC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinSphereTransform {
                constexpr std::ptrdiff_t m_fRadiusMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fRadiusMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecDistanceBias = 0x470; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecDistanceBiasAbs = 0xAC0; // Vector
                constexpr std::ptrdiff_t m_TransformInput = 0xAD0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fSpeedMin = 0xB30; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0xC88; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedRandExp = 0xDE0; // float32
                constexpr std::ptrdiff_t m_bLocalCoords = 0xDE4; // bool
                constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0xDE8; // float32
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0xDF0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x1440; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1A90; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldVelocity = 0x1A94; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RadiusDecay {
                constexpr std::ptrdiff_t m_flMinRadius = 0x1B8; // float32
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelBodyPartToScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapScalarToVector {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1EC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1F0; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1F4; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x1F8; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialSequenceFromModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionEmitter
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NoiseEmitter {
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flEmissionScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1CC; // int32
                constexpr std::ptrdiff_t m_nWorldNoisePoint = 0x1D0; // int32
                constexpr std::ptrdiff_t m_bAbsVal = 0x1D4; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1D5; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flWorldNoiseScale = 0x1E8; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_flWorldTimeScale = 0x1F8; // float32
            }
            // Parent: CParticleFunction
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionInitializer {
                constexpr std::ptrdiff_t m_nAssociatedEmitterIndex = 0x1B8; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SelectivelyEnableChildren {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nFirstChild = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x470; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x5C8; // bool
                constexpr std::ptrdiff_t m_bDestroyImmediately = 0x5C9; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelReference_t {
                constexpr std::ptrdiff_t m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_flRelativeProbabilityOfSpawn = 0x8; // float32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlanarConstraint {
                constexpr std::ptrdiff_t m_PointOnPlane = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_PlaneNormal = 0x1C4; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D0; // int32
                constexpr std::ptrdiff_t m_bGlobalOrigin = 0x1D4; // bool
                constexpr std::ptrdiff_t m_bGlobalNormal = 0x1D5; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaximumDistanceToCP = 0x330; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUseOldCode = 0x488; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromCPs {
                constexpr std::ptrdiff_t m_nIncrement = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nMinCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nMaxCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nDynamicCPCount = 0x1C8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LockPoints {
                constexpr std::ptrdiff_t m_nMinCol = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nMaxCol = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nMinRow = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nMaxRow = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nControlPoint = 0x1C8; // int32
                constexpr std::ptrdiff_t m_flBlendValue = 0x1CC; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSpiralSphere {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nOverrideCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nDensity = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flInitialRadius = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x1D0; // float32
                constexpr std::ptrdiff_t m_bUseParticleCount = 0x1D4; // bool
            }
            // Parent: CParticleFunctionForce
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CPVelocityForce {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1C4; // int32
                constexpr std::ptrdiff_t m_flScale = 0x1C8; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelElementEndCap {
                constexpr std::ptrdiff_t m_hModel = 0x1B8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_inNames = 0x1C0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_outNames = 0x1D8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_fallbackNames = 0x1F0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x208; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x20C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x210; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ScaleVelocity {
                constexpr std::ptrdiff_t m_vecScale = 0x1C0; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MoveToHitbox {
                constexpr std::ptrdiff_t m_modelInput = 0x1B8; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x210; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flLifeTimeLerpStart = 0x274; // float32
                constexpr std::ptrdiff_t m_flLifeTimeLerpEnd = 0x278; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x27C; // float32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x280; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x300; // bool
                constexpr std::ptrdiff_t m_nLerpType = 0x304; // HitboxLerpType_t
                constexpr std::ptrdiff_t m_flInterpolation = 0x308; // CPerParticleFloatInput
            }
            // Parent: CParticleInput
            // Fields count: 47
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MParticleCustomFieldDefaultValue
            namespace CParticleFloatInput {
                constexpr std::ptrdiff_t m_nType = 0xC; // ParticleFloatType_t
                constexpr std::ptrdiff_t m_nMapType = 0x10; // ParticleFloatMapType_t
                constexpr std::ptrdiff_t m_flLiteralValue = 0x14; // float32
                constexpr std::ptrdiff_t m_NamedValue = 0x18; // CParticleNamedValueRef
                constexpr std::ptrdiff_t m_nControlPoint = 0x58; // int32
                constexpr std::ptrdiff_t m_nScalarAttribute = 0x5C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorAttribute = 0x60; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVectorComponent = 0x64; // int32
                constexpr std::ptrdiff_t m_flRandomMin = 0x68; // float32
                constexpr std::ptrdiff_t m_flRandomMax = 0x6C; // float32
                constexpr std::ptrdiff_t m_bHasRandomSignFlip = 0x70; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x74; // int32
                constexpr std::ptrdiff_t m_nRandomMode = 0x78; // ParticleFloatRandomMode_t
                constexpr std::ptrdiff_t m_flLOD0 = 0x80; // float32
                constexpr std::ptrdiff_t m_flLOD1 = 0x84; // float32
                constexpr std::ptrdiff_t m_flLOD2 = 0x88; // float32
                constexpr std::ptrdiff_t m_flLOD3 = 0x8C; // float32
                constexpr std::ptrdiff_t m_nNoiseInputVectorAttribute = 0x90; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flNoiseOutputMin = 0x94; // float32
                constexpr std::ptrdiff_t m_flNoiseOutputMax = 0x98; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x9C; // float32
                constexpr std::ptrdiff_t m_vecNoiseOffsetRate = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flNoiseOffset = 0xAC; // float32
                constexpr std::ptrdiff_t m_nNoiseOctaves = 0xB0; // int32
                constexpr std::ptrdiff_t m_nNoiseTurbulence = 0xB4; // PFNoiseTurbulence_t
                constexpr std::ptrdiff_t m_nNoiseType = 0xB8; // PFNoiseType_t
                constexpr std::ptrdiff_t m_nNoiseModifier = 0xBC; // PFNoiseModifier_t
                constexpr std::ptrdiff_t m_flNoiseTurbulenceScale = 0xC0; // float32
                constexpr std::ptrdiff_t m_flNoiseTurbulenceMix = 0xC4; // float32
                constexpr std::ptrdiff_t m_flNoiseImgPreviewScale = 0xC8; // float32
                constexpr std::ptrdiff_t m_bNoiseImgPreviewLive = 0xCC; // bool
                constexpr std::ptrdiff_t m_flNoCameraFallback = 0xD8; // float32
                constexpr std::ptrdiff_t m_bUseBoundsCenter = 0xDC; // bool
                constexpr std::ptrdiff_t m_nInputMode = 0xE0; // ParticleFloatInputMode_t
                constexpr std::ptrdiff_t m_flMultFactor = 0xE4; // float32
                constexpr std::ptrdiff_t m_flInput0 = 0xE8; // float32
                constexpr std::ptrdiff_t m_flInput1 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flOutput0 = 0xF0; // float32
                constexpr std::ptrdiff_t m_flOutput1 = 0xF4; // float32
                constexpr std::ptrdiff_t m_flNotchedRangeMin = 0xF8; // float32
                constexpr std::ptrdiff_t m_flNotchedRangeMax = 0xFC; // float32
                constexpr std::ptrdiff_t m_flNotchedOutputOutside = 0x100; // float32
                constexpr std::ptrdiff_t m_flNotchedOutputInside = 0x104; // float32
                constexpr std::ptrdiff_t m_nRoundType = 0x108; // ParticleFloatRoundType_t
                constexpr std::ptrdiff_t m_nBiasType = 0x10C; // ParticleFloatBiasType_t
                constexpr std::ptrdiff_t m_flBiasParameter = 0x110; // float32
                constexpr std::ptrdiff_t m_Curve = 0x118; // CPiecewiseCurve
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PointList {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_pointList = 0x1C0; // CUtlVector<PointDefinition_t>
                constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x1D9; // bool
                constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1DC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpToOtherAttribute {
                constexpr std::ptrdiff_t m_flInterpolation = 0x1B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFieldInputFrom = 0x310; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x314; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x318; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomColor {
                constexpr std::ptrdiff_t m_ColorMin = 0x1D8; // Color
                constexpr std::ptrdiff_t m_ColorMax = 0x1DC; // Color
                constexpr std::ptrdiff_t m_TintMin = 0x1E0; // Color
                constexpr std::ptrdiff_t m_TintMax = 0x1E4; // Color
                constexpr std::ptrdiff_t m_flTintPerc = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flUpdateThreshold = 0x1EC; // float32
                constexpr std::ptrdiff_t m_nTintCP = 0x1F0; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nTintBlendMode = 0x1F8; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_flLightAmplification = 0x1FC; // float32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetGravityToCP {
                constexpr std::ptrdiff_t m_nCPInput = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1C0; // int32
                constexpr std::ptrdiff_t m_flScale = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bSetOrientation = 0x320; // bool
                constexpr std::ptrdiff_t m_bSetZDown = 0x321; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nInputMax = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1CC; // int32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1DC; // bool
                constexpr std::ptrdiff_t m_bInvert = 0x1DD; // bool
                constexpr std::ptrdiff_t m_bWrap = 0x1DE; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x1E0; // float32
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InheritFromParentParticles {
                constexpr std::ptrdiff_t m_flScale = 0x1BC; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1C4; // int32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1C8; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1CC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarLinearSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ChaoticAttractor {
                constexpr std::ptrdiff_t m_flAParm = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flBParm = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flCParm = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flDParm = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flScale = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flSpeedMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flSpeedMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_nBaseCP = 0x1D8; // int32
                constexpr std::ptrdiff_t m_bUniformSpeed = 0x1DC; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementRigidAttachToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nScaleCPField = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bOffsetLocal = 0x1CC; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderFlattenGrass {
                constexpr std::ptrdiff_t m_flFlattenStrength = 0x204; // float32
                constexpr std::ptrdiff_t m_nStrengthFieldOverride = 0x208; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRadiusScale = 0x20C; // float32
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderLightBeam {
                constexpr std::ptrdiff_t m_vColorBlend = 0x208; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x858; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_flBrightnessLumensPerMeter = 0x860; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCastShadows = 0x9B8; // bool
                constexpr std::ptrdiff_t m_flSkirt = 0x9C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRange = 0xB18; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flThickness = 0xC70; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EnableChildrenFromParentParticleCount {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nFirstChild = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDisableChildren = 0x320; // bool
                constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x321; // bool
                constexpr std::ptrdiff_t m_bDestroyImmediately = 0x322; // bool
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceToCPInit {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x470; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nStartCP = 0x720; // int32
                constexpr std::ptrdiff_t m_bLOS = 0x724; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x725; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x7A8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x7B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLOSScale = 0x908; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x90C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x910; // bool
                constexpr std::ptrdiff_t m_vecDistanceScale = 0x914; // Vector
                constexpr std::ptrdiff_t m_flRemapBias = 0x920; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CReplicationParameters {
                constexpr std::ptrdiff_t m_nReplicationMode = 0x0; // ParticleReplicationMode_t
                constexpr std::ptrdiff_t m_bScaleChildParticleRadii = 0x4; // bool
                constexpr std::ptrdiff_t m_flMinRandomRadiusScale = 0x8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxRandomRadiusScale = 0x160; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vMinRandomDisplacement = 0x2B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vMaxRandomDisplacement = 0x908; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flModellingScale = 0xF58; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapDecay {
            }
            // Parent: CParticleFunctionForce
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ForceBasedOnDistanceToPlane {
                constexpr std::ptrdiff_t m_flMinDist = 0x1C4; // float32
                constexpr std::ptrdiff_t m_vecForceAtMinDist = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_flMaxDist = 0x1D4; // float32
                constexpr std::ptrdiff_t m_vecForceAtMaxDist = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_vecPlaneNormal = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flExponent = 0x1F4; // float32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDensityToVector {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1B8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1BC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flDensityMin = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flDensityMax = 0x1C4; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1D4; // Vector
                constexpr std::ptrdiff_t m_bUseParentDensity = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1E4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleControlPointConfiguration_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                constexpr std::ptrdiff_t m_previewState = 0x20; // ParticlePreviewState_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetRigidAttachment {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1C8; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nVariableField = 0x8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0xC; // float32
            }
            // Parent: CParticleFunction
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionConstraint {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSpeed {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1C8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1CC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1D0; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 54
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderModels {
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x202; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x203; // bool
                constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x204; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x205; // bool
                constexpr std::ptrdiff_t m_ModelList = 0x208; // CUtlVector<ModelReference_t>
                constexpr std::ptrdiff_t m_nBodyGroupField = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSubModelField = 0x224; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bIgnoreNormal = 0x228; // bool
                constexpr std::ptrdiff_t m_bOrientZ = 0x229; // bool
                constexpr std::ptrdiff_t m_bCenterOffset = 0x22A; // bool
                constexpr std::ptrdiff_t m_vecLocalOffset = 0x230; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecLocalRotation = 0x880; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bIgnoreRadius = 0xED0; // bool
                constexpr std::ptrdiff_t m_nModelScaleCP = 0xED4; // int32
                constexpr std::ptrdiff_t m_vecComponentScale = 0xED8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bLocalScale = 0x1528; // bool
                constexpr std::ptrdiff_t m_nSizeCullBloat = 0x152C; // int32
                constexpr std::ptrdiff_t m_bAnimated = 0x1530; // bool
                constexpr std::ptrdiff_t m_flAnimationRate = 0x1538; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bScaleAnimationRate = 0x1690; // bool
                constexpr std::ptrdiff_t m_bForceLoopingAnimation = 0x1691; // bool
                constexpr std::ptrdiff_t m_bResetAnimOnStop = 0x1692; // bool
                constexpr std::ptrdiff_t m_bManualAnimFrame = 0x1693; // bool
                constexpr std::ptrdiff_t m_nAnimationScaleField = 0x1694; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAnimationField = 0x1698; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nManualFrameField = 0x169C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_ActivityName = 0x16A0; // char[256]
                constexpr std::ptrdiff_t m_SequenceName = 0x17A0; // char[256]
                constexpr std::ptrdiff_t m_bEnableClothSimulation = 0x18A0; // bool
                constexpr std::ptrdiff_t m_ClothEffectName = 0x18A1; // char[64]
                constexpr std::ptrdiff_t m_hOverrideMaterial = 0x18E8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bOverrideTranslucentMaterials = 0x18F0; // bool
                constexpr std::ptrdiff_t m_nSkin = 0x18F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_MaterialVars = 0x1A50; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_flManualModelSelection = 0x1A68; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_modelInput = 0x1BC0; // CParticleModelInput
                constexpr std::ptrdiff_t m_nLOD = 0x1C18; // int32
                constexpr std::ptrdiff_t m_EconSlotName = 0x1C1C; // char[256]
                constexpr std::ptrdiff_t m_bOriginalModel = 0x1D1C; // bool
                constexpr std::ptrdiff_t m_bSuppressTint = 0x1D1D; // bool
                constexpr std::ptrdiff_t m_nSubModelFieldType = 0x1D20; // RenderModelSubModelFieldType_t
                constexpr std::ptrdiff_t m_bDisableShadows = 0x1D24; // bool
                constexpr std::ptrdiff_t m_bDisableDepthPrepass = 0x1D25; // bool
                constexpr std::ptrdiff_t m_bAcceptsDecals = 0x1D26; // bool
                constexpr std::ptrdiff_t m_bForceDrawInterlevedWithSiblings = 0x1D27; // bool
                constexpr std::ptrdiff_t m_bDoNotDrawInParticlePass = 0x1D28; // bool
                constexpr std::ptrdiff_t m_bAllowApproximateTransforms = 0x1D29; // bool
                constexpr std::ptrdiff_t m_szRenderAttribute = 0x1D2A; // char[4096]
                constexpr std::ptrdiff_t m_flRadiusScale = 0x2D30; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x2E88; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x2FE0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x3138; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x3140; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x3790; // ParticleColorBlendType_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderClientPhysicsImpulse {
                constexpr std::ptrdiff_t m_flRadius = 0x208; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMagnitude = 0x360; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nSimIdFilter = 0x4B8; // int32
            }
            // Parent: CParticleFunction
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionEmitter {
                constexpr std::ptrdiff_t m_nEmitterIndex = 0x1B8; // int32
            }
            // Parent: C_INIT_RemapNamedModelElementToScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelMeshGroupToScalar {
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointOrientationToCPVelocity {
                constexpr std::ptrdiff_t m_nCPInput = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1C0; // int32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RopeSpringConstraint {
                constexpr std::ptrdiff_t m_flRestLength = 0x1B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMinDistance = 0x310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x468; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAdjustmentScale = 0x5C0; // float32
                constexpr std::ptrdiff_t m_flInitialRestingLength = 0x5C8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionWarpScalar {
                constexpr std::ptrdiff_t m_vecWarpMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecWarpMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_InputValue = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x330; // float32
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x334; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x338; // int32
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ForceControlPointStub {
                constexpr std::ptrdiff_t m_ControlPoint = 0x1BC; // int32
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VectorNoise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1D4; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bOffset = 0x1D9; // bool
                constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 0
            namespace IParticleCollection {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapParticleCountToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nInputMax = 0x318; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x470; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x5C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bActiveRange = 0x720; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x724; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_QuantizeFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x318; // ParticleAttributeIndex_t
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapModelVolumetoCP {
                constexpr std::ptrdiff_t m_nBBoxType = 0x1BC; // BBoxVolumeType_t
                constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nOutControlPointMaxNumber = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nField = 0x1CC; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bBBoxOnly = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bCubeRoot = 0x1E1; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1B8; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_bOffsetLocal = 0x1C8; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleControlPointDriver_t {
                constexpr std::ptrdiff_t m_iControlPoint = 0x0; // int32
                constexpr std::ptrdiff_t m_iAttachType = 0x4; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vecOffset = 0x10; // Vector
                constexpr std::ptrdiff_t m_angOffset = 0x1C; // QAngle
                constexpr std::ptrdiff_t m_entityName = 0x28; // CUtlString
            }
            // Parent: CParticleFunctionForce
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ParentVortices {
                constexpr std::ptrdiff_t m_flForceScale = 0x1C4; // float32
                constexpr std::ptrdiff_t m_vecTwistAxis = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_bFlipBasedOnYaw = 0x1D4; // bool
            }
            // Parent: CParticleFunctionPreEmission
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToCPVelocity {
                constexpr std::ptrdiff_t m_nCPInput = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nCPOutputVel = 0x1C0; // int32
                constexpr std::ptrdiff_t m_bNormalize = 0x1C4; // bool
                constexpr std::ptrdiff_t m_nCPOutputMag = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nCPField = 0x1CC; // int32
                constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x1D0; // CParticleCollectionVecInput
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClientPhysics {
                constexpr std::ptrdiff_t m_strPhysicsType = 0x208; // CUtlString
                constexpr std::ptrdiff_t m_bStartAsleep = 0x210; // bool
                constexpr std::ptrdiff_t m_flPlayerWakeRadius = 0x218; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flVehicleWakeRadius = 0x370; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUseHighQualitySimulation = 0x4C8; // bool
                constexpr std::ptrdiff_t m_nMaxParticleCount = 0x4CC; // int32
                constexpr std::ptrdiff_t m_bRespectExclusionVolumes = 0x4D0; // bool
                constexpr std::ptrdiff_t m_bKillParticles = 0x4D1; // bool
                constexpr std::ptrdiff_t m_bDeleteSim = 0x4D2; // bool
                constexpr std::ptrdiff_t m_nControlPoint = 0x4D4; // int32
                constexpr std::ptrdiff_t m_nColorBlendType = 0x4D8; // ParticleColorBlendType_t
            }
            // Parent: CGeneralSpin
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpinYaw {
            }
            // Parent: PointDefinition_t
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointDefinitionWithTimeValues_t {
                constexpr std::ptrdiff_t m_flTimeDuration = 0x14; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderProjectedMaterial_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CParticleFunctionForce
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ExternalWindForce {
                constexpr std::ptrdiff_t m_vecSamplePosition = 0x1C8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecScale = 0x818; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bSampleWind = 0xE68; // bool
                constexpr std::ptrdiff_t m_bSampleWater = 0xE69; // bool
                constexpr std::ptrdiff_t m_bDampenNearWaterPlane = 0xE6A; // bool
                constexpr std::ptrdiff_t m_bSampleGravity = 0xE6B; // bool
                constexpr std::ptrdiff_t m_vecGravityForce = 0xE70; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bUseBasicMovementGravity = 0x14C0; // bool
                constexpr std::ptrdiff_t m_flLocalGravityScale = 0x14C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLocalBuoyancyScale = 0x1620; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecBuoyancyForce = 0x1778; // CPerParticleVecInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ModelCull {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1BC; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1C0; // bool
                constexpr std::ptrdiff_t m_bCullOutside = 0x1C1; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1C2; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1C3; // char[128]
            }
            // Parent: CBaseRendererSource2
            // Fields count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSprites {
                constexpr std::ptrdiff_t m_nSequenceOverride = 0x29C0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nOrientationType = 0x2B18; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x2B1C; // int32
                constexpr std::ptrdiff_t m_bUseYawWithNormalAligned = 0x2B20; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x2B28; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flMaxSize = 0x2C80; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flAlphaAdjustWithSizeAdjust = 0x2DD8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x2F30; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x3088; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x31E0; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x31E4; // float32
                constexpr std::ptrdiff_t m_bDistanceAlpha = 0x31E8; // bool
                constexpr std::ptrdiff_t m_bSoftEdges = 0x31E9; // bool
                constexpr std::ptrdiff_t m_flEdgeSoftnessStart = 0x31EC; // float32
                constexpr std::ptrdiff_t m_flEdgeSoftnessEnd = 0x31F0; // float32
                constexpr std::ptrdiff_t m_bOutline = 0x31F4; // bool
                constexpr std::ptrdiff_t m_OutlineColor = 0x31F5; // Color
                constexpr std::ptrdiff_t m_nOutlineAlpha = 0x31FC; // int32
                constexpr std::ptrdiff_t m_flOutlineStart0 = 0x3200; // float32
                constexpr std::ptrdiff_t m_flOutlineStart1 = 0x3204; // float32
                constexpr std::ptrdiff_t m_flOutlineEnd0 = 0x3208; // float32
                constexpr std::ptrdiff_t m_flOutlineEnd1 = 0x320C; // float32
                constexpr std::ptrdiff_t m_nLightingMode = 0x3210; // ParticleLightingQuality_t
                constexpr std::ptrdiff_t m_flLightingTessellation = 0x3218; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flLightingDirectionality = 0x3370; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bParticleShadows = 0x34C8; // bool
                constexpr std::ptrdiff_t m_flShadowDensity = 0x34CC; // float32
                constexpr std::ptrdiff_t m_replicationParameters = 0x34D0; // CReplicationParameters
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PercentageBetweenTransformLerpCPs {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1C0; // float32
                constexpr std::ptrdiff_t m_TransformStart = 0x1C8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x228; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nOutputStartCP = 0x288; // int32
                constexpr std::ptrdiff_t m_nOutputStartField = 0x28C; // int32
                constexpr std::ptrdiff_t m_nOutputEndCP = 0x290; // int32
                constexpr std::ptrdiff_t m_nOutputEndField = 0x294; // int32
                constexpr std::ptrdiff_t m_nSetMethod = 0x298; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x29C; // bool
                constexpr std::ptrdiff_t m_bRadialCheck = 0x29D; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetPerChildControlPoint {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1B8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1BC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nParticleIncrement = 0x1C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x320; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bSetOrientation = 0x478; // bool
                constexpr std::ptrdiff_t m_nOrientationField = 0x47C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x480; // bool
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderTreeShake {
                constexpr std::ptrdiff_t m_flPeakStrength = 0x204; // float32
                constexpr std::ptrdiff_t m_nPeakStrengthFieldOverride = 0x208; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRadius = 0x20C; // float32
                constexpr std::ptrdiff_t m_nRadiusFieldOverride = 0x210; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flShakeDuration = 0x214; // float32
                constexpr std::ptrdiff_t m_flTransitionTime = 0x218; // float32
                constexpr std::ptrdiff_t m_flTwistAmount = 0x21C; // float32
                constexpr std::ptrdiff_t m_flRadialAmount = 0x220; // float32
                constexpr std::ptrdiff_t m_flControlPointOrientationAmount = 0x224; // float32
                constexpr std::ptrdiff_t m_nControlPointForLinearDirection = 0x228; // int32
            }
            // Parent: CParticleFunctionConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WorldCollideConstraint {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetAttributeToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1B8; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x318; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x470; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x5C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x5CC; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CycleScalar {
                constexpr std::ptrdiff_t m_nDestField = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flStartValue = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flEndValue = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flCycleTime = 0x1C4; // float32
                constexpr std::ptrdiff_t m_bDoNotRepeatCycle = 0x1C8; // bool
                constexpr std::ptrdiff_t m_bSynchronizeParticles = 0x1C9; // bool
                constexpr std::ptrdiff_t m_nCPScale = 0x1CC; // int32
                constexpr std::ptrdiff_t m_nCPFieldMin = 0x1D0; // int32
                constexpr std::ptrdiff_t m_nCPFieldMax = 0x1D4; // int32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
            }
            // Parent: CParticleFunctionRenderer
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderMaterialProxy {
                constexpr std::ptrdiff_t m_nMaterialControlPoint = 0x204; // int32
                constexpr std::ptrdiff_t m_nProxyType = 0x208; // MaterialProxyType_t
                constexpr std::ptrdiff_t m_MaterialVars = 0x210; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_hOverrideMaterial = 0x228; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flMaterialOverrideEnabled = 0x230; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecColorScale = 0x388; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flAlpha = 0x9D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xB30; // ParticleColorBlendType_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FloatInputMaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flInput = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: CParticleCollectionVecInput
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CParticleCollectionRendererVecInput {
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarLinear {
                constexpr std::ptrdiff_t m_RateMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1CC; // float32
                constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1F4; // bool
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RotateVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecRotAxisMin = 0x1BC; // Vector
                constexpr std::ptrdiff_t m_vecRotAxisMax = 0x1C8; // Vector
                constexpr std::ptrdiff_t m_flRotRateMin = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flRotRateMax = 0x1D8; // float32
                constexpr std::ptrdiff_t m_bNormalize = 0x1DC; // bool
                constexpr std::ptrdiff_t m_flScale = 0x1E0; // CPerParticleFloatInput
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitVecCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x810; // ParticleAttributeIndex_t
            }
            // Parent: C_INIT_RemapParticleCountToNamedModelElementScalar
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
            }
            // Parent: CParticleFunctionInitializer
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SequenceFromCP {
                constexpr std::ptrdiff_t m_bKillUnused = 0x1BC; // bool
                constexpr std::ptrdiff_t m_bRadiusScale = 0x1BD; // bool
                constexpr std::ptrdiff_t m_nCP = 0x1C0; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1C4; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CPOffsetToPercentageBetweenCPs {
                constexpr std::ptrdiff_t m_flInputMin = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flInputBias = 0x1C0; // float32
                constexpr std::ptrdiff_t m_nStartCP = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nEndCP = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nOffsetCP = 0x1CC; // int32
                constexpr std::ptrdiff_t m_nOuputCP = 0x1D0; // int32
                constexpr std::ptrdiff_t m_nInputCP = 0x1D4; // int32
                constexpr std::ptrdiff_t m_bRadialCheck = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bScaleOffset = 0x1D9; // bool
                constexpr std::ptrdiff_t m_vecOffset = 0x1DC; // Vector
            }
            // Parent: CParticleFunctionOperator
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpEndCapScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1B8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutput = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flLerpTime = 0x1C0; // float32
            }
            // Parent: None
            // Fields count: 0
            namespace CParticleProperty {
            }
        }
    }
}
