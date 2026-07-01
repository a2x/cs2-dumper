// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-01 03:08:20.812145800 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: particles.dll
        // Class count: 501
        // Enum count: 76
        namespace particles_dll {
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 7
            enum class Detail2Combo_t : uint32_t {
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
            enum class MissingParentInheritBehavior_t : uint32_t {
                MISSING_PARENT_DO_NOTHING = 0xFFFFFFFF,
                MISSING_PARENT_KILL = 0x0,
                MISSING_PARENT_FIND_NEW = 0x1,
                MISSING_PARENT_SAME_INDEX = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleTraceMissBehavior_t : uint32_t {
                PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
                PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
                PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
            };
            // Alignment: 4
            // Member count: 7
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
            // Member count: 4
            enum class ParticleVRHandChoiceList_t : uint32_t {
                PARTICLE_VRHAND_LEFT = 0x0,
                PARTICLE_VRHAND_RIGHT = 0x1,
                PARTICLE_VRHAND_CP = 0x2,
                PARTICLE_VRHAND_CP_OBJECT = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleReplicationMode_t : uint32_t {
                PARTICLE_REPLICATIONMODE_NONE = 0x0,
                PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleEntityPos_t : uint32_t {
                PARTICLE_ABS_ORIGIN = 0x0,
                PARTICLE_WORLDSPACE_CENTER = 0x1,
                PARTICLE_EYES = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleFanType_t : uint32_t {
                PARTICLE_FAN_TYPE_FAN = 0x0,
                PARTICLE_FAN_TYPE_ROTOR_WASH = 0x1,
                PARTICLE_FAN_TYPE_RADIAL = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class PetGroundType_t : uint32_t {
                PET_GROUND_NONE = 0x0,
                PET_GROUND_GRID = 0x1,
                PET_GROUND_PLANE = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class InheritableBoolType_t : uint32_t {
                INHERITABLE_BOOL_INHERIT = 0x0,
                INHERITABLE_BOOL_FALSE = 0x1,
                INHERITABLE_BOOL_TRUE = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class ParticlePostProcessPriorityGroup_t : uint32_t {
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
                PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
                PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
                PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5
            };
            // Alignment: 4
            // Member count: 7
            enum class ParticleCollisionGroup_t : uint32_t {
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
            enum class DetailCombo_t : uint32_t {
                DETAIL_COMBO_OFF = 0x0,
                DETAIL_COMBO_ADD = 0x1,
                DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
                DETAIL_COMBO_MOD2X = 0x3
            };
            // Alignment: 4
            // Member count: 12
            enum class ScalarExpressionType_t : uint32_t {
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
            // Member count: 2
            enum class BlurFilterType_t : uint32_t {
                BLURFILTER_GAUSSIAN = 0x0,
                BLURFILTER_BOX = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class StandardLightingAttenuationStyle_t : uint32_t {
                LIGHT_STYLE_OLD = 0x0,
                LIGHT_STYLE_NEW = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleParentSetMode_t : uint32_t {
                PARTICLE_SET_PARENT_NO = 0x0,
                PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
                PARTICLE_SET_PARENT_ROOT = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class ParticleLightingQuality_t : uint32_t {
                PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
                PARTICLE_LIGHTING_PER_VERTEX = 0x1,
                PARTICLE_LIGHTING_PER_PIXEL = 0xFFFFFFFF,
                PARTICLE_LIGHTING_OVERRIDE_POSITION = 0x2,
                PARTICLE_LIGHTING_OVERRIDE_COLOR = 0x3,
                PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleVolumetricSmokeCreationType_t : uint32_t {
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0x0,
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 0x1
            };
            // Alignment: 4
            // Member count: 8
            enum class SetStatisticExpressionType_t : uint32_t {
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
            // Member count: 2
            enum class ParticleMassMode_t : uint32_t {
                PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
                PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleHitboxBiasType_t : uint32_t {
                PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
                PARTICLE_HITBOX_BIAS_HITBOX = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class ParticleControlPointAxis_t : uint32_t {
                PARTICLE_CP_AXIS_X = 0x0,
                PARTICLE_CP_AXIS_Y = 0x1,
                PARTICLE_CP_AXIS_Z = 0x2,
                PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
                PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
                PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
            };
            // Alignment: 4
            // Member count: 12
            enum class ParticlePinDistance_t : uint32_t {
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
            enum class VectorFloatExpressionType_t : uint32_t {
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
            enum class ParticleFogType_t : uint32_t {
                PARTICLE_FOG_GAME_DEFAULT = 0x0,
                PARTICLE_FOG_ENABLED = 0x1,
                PARTICLE_FOG_DISABLED = 0x2
            };
            // Alignment: 4
            // Member count: 10
            enum class VectorExpressionType_t : uint32_t {
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
            enum class ParticleMultiSegmentInputSelection_t : uint32_t {
                PARTICLE_MULTISEGMENT_SELECTION_FLOAT = 0x0,
                PARTICLE_MULTISEGMENT_SELECTION_STRING = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleRotationLockType_t : uint32_t {
                PARTICLE_ROTATION_LOCK_NONE = 0x0,
                PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
                PARTICLE_ROTATION_LOCK_NORMAL = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class HitboxLerpType_t : uint32_t {
                HITBOX_LERP_LIFETIME = 0x0,
                HITBOX_LERP_CONSTANT = 0x1
            };
            // Alignment: 4
            // Member count: 7
            enum class ParticleAttrBoxFlags_t : uint32_t {
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
            enum class ParticleTopology_t : uint32_t {
                PARTICLE_TOPOLOGY_POINTS = 0x0,
                PARTICLE_TOPOLOGY_LINES = 0x1,
                PARTICLE_TOPOLOGY_TRIS = 0x2,
                PARTICLE_TOPOLOGY_QUADS = 0x3,
                PARTICLE_TOPOLOGY_CUBES = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleLightBehaviorChoiceList_t : uint32_t {
                PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
                PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
                PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ModelHitboxType_t : uint32_t {
                MODEL_HITBOX_TYPE_STANDARD = 0x0,
                MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
                MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
                MODEL_HITBOX_TYPE_SNAPSHOT = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleMultiSegmentCountSelection_t : uint32_t {
                PARTICLE_MULTISEGMENT_SEG_COUNT_7 = 0x7,
                PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 0xE,
                PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 0x10
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleOrientationType_t : uint32_t {
                PARTICLE_ORIENTATION_NONE = 0x0,
                PARTICLE_ORIENTATION_VELOCITY = 0x1,
                PARTICLE_ORIENTATION_NORMAL = 0x2,
                PARTICLE_ORIENTATION_ROTATION = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleTraceSet_t : uint32_t {
                PARTICLE_TRACE_SET_ALL = 0x0,
                PARTICLE_TRACE_SET_STATIC = 0x1,
                PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
                PARTICLE_TRACE_SET_DYNAMIC = 0x3
            };
            // Alignment: 4
            // Member count: 7
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
            // Member count: 3
            enum class ParticleSelection_t : uint32_t {
                PARTICLE_SELECTION_FIRST = 0x0,
                PARTICLE_SELECTION_LAST = 0x1,
                PARTICLE_SELECTION_NUMBER = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleToolsState_t : uint32_t {
                PARTICLE_TOOLS_STATE_ALWAYS_ON = 0xFFFFFFFF,
                PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0x0,
                PARTICLE_TOOLS_STATE_GAME_ONLY = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class SnapshotIndexType_t : uint32_t {
                SNAPSHOT_INDEX_INCREMENT = 0x0,
                SNAPSHOT_INDEX_DIRECT = 0x1
            };
            // Alignment: 4
            // Member count: 7
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
            // Member count: 2
            enum class ParticleLightnintBranchBehavior_t : uint32_t {
                PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
                PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class MaterialProxyType_t : uint32_t {
                MATERIAL_PROXY_STATUS_EFFECT = 0x0,
                MATERIAL_PROXY_TINT = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleDepthFeatheringMode_t : uint32_t {
                PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
                PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
                PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleLightUnitChoiceList_t : uint32_t {
                PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
                PARTICLE_LIGHT_UNIT_LUMENS = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleMultiSegmentSpecialCharacter_t : uint32_t {
                PARTICLE_MULTISEGMENT_SPECIAL_NONE = 0xFFFFFFFF,
                PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0x0,
                PARTICLE_MULTISEGMENT_SPECIAL_COLON = 0x1,
                PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleFalloffFunction_t : uint32_t {
                PARTICLE_FALLOFF_CONSTANT = 0x0,
                PARTICLE_FALLOFF_LINEAR = 0x1,
                PARTICLE_FALLOFF_EXPONENTIAL = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleSequenceCropOverride_t : uint32_t {
                PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xFFFFFFFF,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
                PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleDetailLevel_t : uint32_t {
                PARTICLEDETAIL_LOW = 0x0,
                PARTICLEDETAIL_MEDIUM = 0x1,
                PARTICLEDETAIL_HIGH = 0x2,
                PARTICLEDETAIL_ULTRA = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class BBoxVolumeType_t : uint32_t {
                BBOX_VOLUME = 0x0,
                BBOX_DIMENSIONS = 0x1,
                BBOX_MINS_MAXS = 0x2,
                BBOX_RADIUS = 0x3
            };
            // Alignment: 4
            // Member count: 12
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
                SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
                SPRITECARD_TEXTURE_DEPTH = 0xA,
                SPRITECARD_TEXTURE_ILLUMINATION_GRADIENT = 0xB
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleAlphaReferenceType_t : uint32_t {
                PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
                PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
                PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
            };
            // Alignment: 4
            // Member count: 15
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
            // Member count: 3
            enum class ParticleVolumetricSmokeType_t : uint32_t {
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0x0,
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK = 0x1,
                PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class RenderModelSubModelFieldType_t : uint32_t {
                SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
                SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
                SUBMODEL_AS_MESHGROUP_MASK = 0x2,
                SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleHitboxDataSelection_t : uint32_t {
                PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
                PARTICLE_HITBOX_COUNT = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class ParticleOrientationChoiceList_t : uint32_t {
                PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
                PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
                PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
                PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
                PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
                PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleCollisionMode_t : uint32_t {
                COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
                COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
                COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
                COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
                COLLISION_MODE_DISABLED = 0xFFFFFFFF
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleSortingChoiceList_t : uint32_t {
                PARTICLE_SORTING_NEAREST = 0x0,
                PARTICLE_SORTING_CREATION_TIME = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleEndcapMode_t : uint32_t {
                PARTICLE_ENDCAP_ALWAYS_ON = 0xFFFFFFFF,
                PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
                PARTICLE_ENDCAP_ENDCAP_ON = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ClosestPointTestType_t : uint32_t {
                PARTICLE_CLOSEST_TYPE_BOX = 0x0,
                PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
                PARTICLE_CLOSEST_TYPE_HYBRID = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class ParticleImpulseType_t : uint32_t {
                IMPULSE_TYPE_NONE = 0x0,
                IMPULSE_TYPE_GENERIC = 0x1,
                IMPULSE_TYPE_ROPE = 0x2,
                IMPULSE_TYPE_EXPLOSION = 0x4,
                IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
                IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleLiquidContents_t : uint32_t {
                PARTICLE_LIQUID_NONE = 0x0,
                PARTICLE_LIQUID_OIL = 0x1,
                PARTICLE_LIQUID_WATER = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class SpriteCardShaderType_t : uint32_t {
                SPRITECARD_SHADER_BASE = 0x0,
                SPRITECARD_SHADER_CUSTOM = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class ParticleOmni2LightTypeChoiceList_t : uint32_t {
                PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleLightFogLightingMode_t : uint32_t {
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
                PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleLightTypeChoiceList_t : uint32_t {
                PARTICLE_LIGHT_TYPE_POINT = 0x0,
                PARTICLE_LIGHT_TYPE_SPOT = 0x1,
                PARTICLE_LIGHT_TYPE_FX = 0x2,
                PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleOrientationSetMode_t : uint32_t {
                PARTICLE_ORIENTATION_SET_NONE = 0xFFFFFFFF,
                PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
                PARTICLE_ORIENTATION_SET_FROM_NORMAL = 0x1,
                PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x2
            };
            // Alignment: 8
            // Member count: 10
            enum class ParticleCollisionMask_t : uint64_t {
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
            enum class TextureRepetitionMode_t : uint32_t {
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
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
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
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 0
            namespace CParticleBindingRealPulse {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IntervalTimer__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xC; // float32
                constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
                constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseArraylib {
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_SourceOutput = 0x90; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedParamType = 0xA0; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionBindingInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
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
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
                constexpr std::ptrdiff_t m_ReturnType = 0xA0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_Always = 0xC0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_InlineNodeSkipSelector {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_bAnd = 0x4C; // bool
                constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
                constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nBlackboardIndex = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x70; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x78; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: None
            // Field count: 0
            namespace IParticleCollection {
            }
            // Parent: None
            // Field count: 1
            namespace ParticleAttributeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapGravityToVector {
                constexpr std::ptrdiff_t m_vInput1 = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x890; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x894; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x898; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Decay {
                constexpr std::ptrdiff_t m_bRopeDecay = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1D9; // bool
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderDeferredLight {
                constexpr std::ptrdiff_t m_bUseAlphaTestWindow = 0x228; // bool
                constexpr std::ptrdiff_t m_bUseTexture = 0x229; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x22C; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0x230; // float32
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x234; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x238; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x8F0; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_flLightDistance = 0x8F4; // float32
                constexpr std::ptrdiff_t m_flStartFalloff = 0x8F8; // float32
                constexpr std::ptrdiff_t m_flDistanceFalloff = 0x8FC; // float32
                constexpr std::ptrdiff_t m_flSpotFoV = 0x900; // float32
                constexpr std::ptrdiff_t m_nAlphaTestPointField = 0x904; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaTestRangeField = 0x908; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaTestSharpnessField = 0x90C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_hTexture = 0x910; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x918; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSpeedtoCP {
                constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nField = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_bUseDeltaV = 0x1FC; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformToVelocity {
                constexpr std::ptrdiff_t m_TransformInput = 0x1D8; // CParticleTransformInput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CollisionGroupContext_t {
                constexpr std::ptrdiff_t m_nCollisionGroupNumber = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionPreEmission {
                constexpr std::ptrdiff_t m_bRunOnce = 0x1D8; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeOutSimple {
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpringToVectorConstraint {
                constexpr std::ptrdiff_t m_flRestLength = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinDistance = 0x348; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x4B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRestingLength = 0x628; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecAnchorVector = 0x798; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderRopes {
                constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x2DF0; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x2DF4; // float32
                constexpr std::ptrdiff_t m_flMaxSize = 0x2DF8; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x2DFC; // float32
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x2E00; // float32
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x2E04; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x2E08; // float32
                constexpr std::ptrdiff_t m_flRadiusTaper = 0x2E0C; // float32
                constexpr std::ptrdiff_t m_nMinTesselation = 0x2E10; // int32
                constexpr std::ptrdiff_t m_nMaxTesselation = 0x2E14; // int32
                constexpr std::ptrdiff_t m_flTessScale = 0x2E18; // float32
                constexpr std::ptrdiff_t m_flTextureVWorldSize = 0x2E20; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flTextureVScrollRate = 0x2F90; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flTextureVOffset = 0x3100; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nTextureVParamsCP = 0x3270; // int32
                constexpr std::ptrdiff_t m_bClampV = 0x3274; // bool
                constexpr std::ptrdiff_t m_nScaleCP1 = 0x3278; // int32
                constexpr std::ptrdiff_t m_nScaleCP2 = 0x327C; // int32
                constexpr std::ptrdiff_t m_flScaleVSizeByControlPointDistance = 0x3280; // float32
                constexpr std::ptrdiff_t m_flScaleVScrollByControlPointDistance = 0x3284; // float32
                constexpr std::ptrdiff_t m_flScaleVOffsetByControlPointDistance = 0x3288; // float32
                constexpr std::ptrdiff_t m_bUseScalarForTextureCoordinate = 0x328D; // bool
                constexpr std::ptrdiff_t m_nScalarFieldForTextureCoordinate = 0x3290; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScalarAttributeTextureCoordScale = 0x3294; // float32
                constexpr std::ptrdiff_t m_bReverseOrder = 0x3298; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x3299; // bool
                constexpr std::ptrdiff_t m_nSplitField = 0x329C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bSortBySegmentID = 0x32A0; // bool
                constexpr std::ptrdiff_t m_nOrientationType = 0x32A4; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nVectorFieldForOrientation = 0x32A8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bDrawAsOpaque = 0x32AC; // bool
                constexpr std::ptrdiff_t m_bGenerateNormals = 0x32AD; // bool
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_StatusEffectCitadel {
                constexpr std::ptrdiff_t m_flSFXColorWarpAmount = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flSFXNormalAmount = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flSFXMetalnessAmount = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flSFXRoughnessAmount = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flSFXSelfIllumAmount = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flSFXSScale = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollX = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollY = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flSFXSScrollZ = 0x200; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetX = 0x204; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetY = 0x208; // float32
                constexpr std::ptrdiff_t m_flSFXSOffsetZ = 0x20C; // float32
                constexpr std::ptrdiff_t m_nDetailCombo = 0x210; // DetailCombo_t
                constexpr std::ptrdiff_t m_flSFXSDetailAmount = 0x214; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScale = 0x218; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollX = 0x21C; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollY = 0x220; // float32
                constexpr std::ptrdiff_t m_flSFXSDetailScrollZ = 0x224; // float32
                constexpr std::ptrdiff_t m_flSFXSUseModelUVs = 0x228; // float32
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSound {
                constexpr std::ptrdiff_t m_flDurationScale = 0x228; // float32
                constexpr std::ptrdiff_t m_flSndLvlScale = 0x22C; // float32
                constexpr std::ptrdiff_t m_flPitchScale = 0x230; // float32
                constexpr std::ptrdiff_t m_flVolumeScale = 0x234; // float32
                constexpr std::ptrdiff_t m_nSndLvlField = 0x238; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nDurationField = 0x23C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nPitchField = 0x240; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVolumeField = 0x244; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nChannel = 0x248; // int32
                constexpr std::ptrdiff_t m_nCPReference = 0x24C; // int32
                constexpr std::ptrdiff_t m_pszSoundName = 0x250; // char[256]
                constexpr std::ptrdiff_t m_bSuppressStopSoundEvent = 0x350; // bool
            }
            // Parent: None
            // Field count: 19
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
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointsToParticle {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bReverse = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bSetOrientation = 0x1E9; // bool
                constexpr std::ptrdiff_t m_nOrientationMode = 0x1EC; // ParticleOrientationSetMode_t
                constexpr std::ptrdiff_t m_nSetParent = 0x1F0; // ParticleParentSetMode_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPVelocityToVector {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_bNormalize = 0x1E4; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PointVectorAtNextParticle {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInterpolation = 0x1E0; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticlePreviewBodyGroup_t {
                constexpr std::ptrdiff_t m_bodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nValue = 0x8; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateScalarSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1D8; // float32
                constexpr std::ptrdiff_t m_Frequency = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nField = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOscMult = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_StatusEffect {
                constexpr std::ptrdiff_t m_nDetail2Combo = 0x1E0; // Detail2Combo_t
                constexpr std::ptrdiff_t m_flDetail2Rotation = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flDetail2Scale = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flDetail2BlendFactor = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flColorWarpIntensity = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flDiffuseWarpBlendToFull = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flEnvMapIntensity = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flAmbientScale = 0x1FC; // float32
                constexpr std::ptrdiff_t m_specularColor = 0x200; // Color
                constexpr std::ptrdiff_t m_flSpecularScale = 0x204; // float32
                constexpr std::ptrdiff_t m_flSpecularExponent = 0x208; // float32
                constexpr std::ptrdiff_t m_flSpecularExponentBlendToFull = 0x20C; // float32
                constexpr std::ptrdiff_t m_flSpecularBlendToFull = 0x210; // float32
                constexpr std::ptrdiff_t m_rimLightColor = 0x214; // Color
                constexpr std::ptrdiff_t m_flRimLightScale = 0x218; // float32
                constexpr std::ptrdiff_t m_flReflectionsTintByBaseBlendToNone = 0x21C; // float32
                constexpr std::ptrdiff_t m_flMetalnessBlendToFull = 0x220; // float32
                constexpr std::ptrdiff_t m_flSelfIllumBlendToFull = 0x224; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RtEnvCull {
                constexpr std::ptrdiff_t m_vecTestDir = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_vecTestNormal = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_bUseVelocity = 0x1F8; // bool
                constexpr std::ptrdiff_t m_bCullOnMiss = 0x1F9; // bool
                constexpr std::ptrdiff_t m_bLifeAdjust = 0x1FA; // bool
                constexpr std::ptrdiff_t m_RtEnvName = 0x1FB; // char[128]
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x27C; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x280; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistance {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_fMaxDistance = 0x348; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x4B8; // int32
                constexpr std::ptrdiff_t m_CenterOffset = 0x4BC; // Vector
                constexpr std::ptrdiff_t m_bGlobalCenter = 0x4C8; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomVector {
                constexpr std::ptrdiff_t m_vecMin = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_vecMax = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1F8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_randomnessParameters = 0x1FC; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialVelocityNoise {
                constexpr std::ptrdiff_t m_vecAbsVal = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_vecAbsValInv = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1F8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOffset = 0x8B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecOutputMin = 0xA20; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOutputMax = 0x10D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1790; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1900; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformInput = 0x1A70; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1AD8; // bool
            }
            // Parent: None
            // Field count: 5
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
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalarOnceTimed {
                constexpr std::ptrdiff_t m_bProportional = 0x1D8; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flRemapTime = 0x1F4; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelSequence {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlaneCull {
                constexpr std::ptrdiff_t m_nPlaneControlPoint = 0x1D8; // int32
                constexpr std::ptrdiff_t m_vecPlaneDirection = 0x1E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_bLocalSpace = 0x898; // bool
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x89C; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityRandom {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0x358; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x4C8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0xB80; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x1238; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0x123C; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ModelDampenMovement {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1DC; // bool
                constexpr std::ptrdiff_t m_bOutside = 0x1DD; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1DE; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1DF; // char[128]
                constexpr std::ptrdiff_t m_vecPosOffset = 0x260; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_fDrag = 0x918; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TwistAroundAxis {
                constexpr std::ptrdiff_t m_fForceAmount = 0x1E8; // float32
                constexpr std::ptrdiff_t m_TwistAxis = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1F8; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1FC; // int32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TeleportBeam {
                constexpr std::ptrdiff_t m_nCPPosition = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nCPVelocity = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nCPMisc = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPColor = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nCPInvalidColor = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nCPExtraArcData = 0x1EC; // int32
                constexpr std::ptrdiff_t m_vGravity = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_flArcMaxDuration = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flSegmentBreak = 0x200; // float32
                constexpr std::ptrdiff_t m_flArcSpeed = 0x204; // float32
                constexpr std::ptrdiff_t m_flAlpha = 0x208; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapExternalWindToCP {
                constexpr std::ptrdiff_t m_nCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vecScale = 0x1E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_bSetMagnitude = 0x8A0; // bool
                constexpr std::ptrdiff_t m_nOutVectorField = 0x8A4; // int32
            }
            // Parent: None
            // Field count: 65
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseRendererSource2 {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x228; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x398; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x508; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x678; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x680; // CParticleCollectionRendererVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xD38; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_nShaderType = 0xD3C; // SpriteCardShaderType_t
                constexpr std::ptrdiff_t m_strShaderOverride = 0xD40; // CUtlString
                constexpr std::ptrdiff_t m_flCenterXOffset = 0xD48; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flCenterYOffset = 0xEB8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flBumpStrength = 0x1028; // float32
                constexpr std::ptrdiff_t m_nCropTextureOverride = 0x102C; // ParticleSequenceCropOverride_t
                constexpr std::ptrdiff_t m_vecTexturesInput = 0x1030; // CUtlLeanVector<TextureGroup_t>
                constexpr std::ptrdiff_t m_flAnimationRate = 0x1040; // float32
                constexpr std::ptrdiff_t m_nAnimationType = 0x1044; // AnimationType_t
                constexpr std::ptrdiff_t m_bAnimateInFPS = 0x1048; // bool
                constexpr std::ptrdiff_t m_flMotionVectorScaleU = 0x1050; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flMotionVectorScaleV = 0x11C0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSelfIllumAmount = 0x1330; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDiffuseAmount = 0x14A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDiffuseClamp = 0x1610; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nLightingControlPoint = 0x1780; // int32
                constexpr std::ptrdiff_t m_nOutputBlendMode = 0x1784; // ParticleOutputBlendMode_t
                constexpr std::ptrdiff_t m_bGammaCorrectVertexColors = 0x1788; // bool
                constexpr std::ptrdiff_t m_bSaturateColorPreAlphaBlend = 0x1789; // bool
                constexpr std::ptrdiff_t m_flAddSelfAmount = 0x1790; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDesaturation = 0x1900; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flOverbrightFactor = 0x1A70; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x1BE0; // int32
                constexpr std::ptrdiff_t m_nFogType = 0x1BE4; // ParticleFogType_t
                constexpr std::ptrdiff_t m_flFogAmount = 0x1BE8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bTintByFOW = 0x1D58; // bool
                constexpr std::ptrdiff_t m_bTintByGlobalLight = 0x1D59; // bool
                constexpr std::ptrdiff_t m_nPerParticleAlphaReference = 0x1D5C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleAlphaRefWindow = 0x1D60; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nAlphaReferenceType = 0x1D64; // ParticleAlphaReferenceType_t
                constexpr std::ptrdiff_t m_flAlphaReferenceSoftness = 0x1D68; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToZero = 0x1ED8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToOne = 0x2048; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bRefract = 0x21B8; // bool
                constexpr std::ptrdiff_t m_bRefractSolid = 0x21B9; // bool
                constexpr std::ptrdiff_t m_bRefract2Passes = 0x21BA; // bool
                constexpr std::ptrdiff_t m_flRefractAmount = 0x21C0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nRefractBlurRadius = 0x2330; // int32
                constexpr std::ptrdiff_t m_nRefractBlurType = 0x2334; // BlurFilterType_t
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x2338; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x2339; // bool
                constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x233A; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x233B; // bool
                constexpr std::ptrdiff_t m_stencilTestID = 0x233C; // char[128]
                constexpr std::ptrdiff_t m_bStencilTestExclude = 0x23BC; // bool
                constexpr std::ptrdiff_t m_stencilWriteID = 0x23BD; // char[128]
                constexpr std::ptrdiff_t m_bWriteStencilOnDepthPass = 0x243D; // bool
                constexpr std::ptrdiff_t m_bWriteStencilOnDepthFail = 0x243E; // bool
                constexpr std::ptrdiff_t m_bReverseZBuffering = 0x243F; // bool
                constexpr std::ptrdiff_t m_bDisableZBuffering = 0x2440; // bool
                constexpr std::ptrdiff_t m_nFeatheringMode = 0x2444; // ParticleDepthFeatheringMode_t
                constexpr std::ptrdiff_t m_flFeatheringMinDist = 0x2448; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringMaxDist = 0x25B8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringFilter = 0x2728; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFeatheringDepthMapFilter = 0x2898; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDepthBias = 0x2A08; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nSortMethod = 0x2B78; // ParticleSortingChoiceList_t
                constexpr std::ptrdiff_t m_bBlendFramesSeq0 = 0x2B7C; // bool
                constexpr std::ptrdiff_t m_bMaxLuminanceBlendingSequence0 = 0x2B7D; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSpinUpdateBase {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OrientTo2dDirection {
                constexpr std::ptrdiff_t m_flRotOffset = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flSpinStrength = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDotProductToCP {
                constexpr std::ptrdiff_t m_nInputCP1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nInputCP2 = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x1EC; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x360; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x640; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelElementScalar {
                constexpr std::ptrdiff_t m_hModel = 0x210; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_outputMinName = 0x218; // CUtlString
                constexpr std::ptrdiff_t m_outputMaxName = 0x220; // CUtlString
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x228; // bool
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderTrails {
                constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x30E8; // bool
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x30EC; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x30F0; // float32
                constexpr std::ptrdiff_t m_nPrevPntSource = 0x30F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMaxLength = 0x30F8; // float32
                constexpr std::ptrdiff_t m_flMinLength = 0x30FC; // float32
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x3100; // bool
                constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x3104; // float32
                constexpr std::ptrdiff_t m_flLengthScale = 0x3108; // float32
                constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x310C; // float32
                constexpr std::ptrdiff_t m_flRadiusHeadTaper = 0x3110; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecHeadColorScale = 0x3280; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flHeadAlphaScale = 0x3938; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadiusTaper = 0x3AA8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecTailColorScale = 0x3C18; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flTailAlphaScale = 0x42D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nHorizCropField = 0x4440; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVertCropField = 0x4444; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flForwardShift = 0x4448; // float32
                constexpr std::ptrdiff_t m_bFlipUVBasedOnPitchYaw = 0x444C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointPositionToTimeOfDayValue {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_pszTimeOfDayParameter = 0x1E4; // char[128]
                constexpr std::ptrdiff_t m_vecDefaultValue = 0x264; // Vector
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayMaintainCount {
                constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1D8; // int32
                constexpr std::ptrdiff_t m_flDecayDelay = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x1E0; // int32
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x1E8; // CUtlString
                constexpr std::ptrdiff_t m_bLifespanDecay = 0x1F0; // bool
                constexpr std::ptrdiff_t m_flScale = 0x1F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bKillNewest = 0x368; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomModelSequence {
                constexpr std::ptrdiff_t m_ActivityName = 0x1E0; // char[256]
                constexpr std::ptrdiff_t m_SequenceName = 0x2E0; // char[256]
                constexpr std::ptrdiff_t m_hModel = 0x3E0; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ExternalGameImpulseForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bRopes = 0x358; // bool
                constexpr std::ptrdiff_t m_bRopesZOnly = 0x359; // bool
                constexpr std::ptrdiff_t m_bExplosions = 0x35A; // bool
                constexpr std::ptrdiff_t m_bParticles = 0x35B; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapAverageHitboxSpeedtoCP {
                constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nField = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nHitboxDataType = 0x1EC; // ParticleHitboxDataSelection_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x360; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x640; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nHeightControlPointNumber = 0x7B0; // int32
                constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x7B8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0xE70; // char[128]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomAlpha {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAlphaMin = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nAlphaMax = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flAlphaRandExponent = 0x1F4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NormalizeVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1DC; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeInSimple {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RepeatedTriggerChildGroup {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flClusterRefireTime = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flClusterSize = 0x358; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flClusterCooldown = 0x4C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bLimitChildCount = 0x638; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVelocityToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bNormalize = 0x1E0; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetHitboxToClosest {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0x8A0; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x920; // bool
                constexpr std::ptrdiff_t m_bUseClosestPointOnHitbox = 0x921; // bool
                constexpr std::ptrdiff_t m_nTestType = 0x924; // ClosestPointTestType_t
                constexpr std::ptrdiff_t m_flHybridRatio = 0x928; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUpdatePosition = 0xA98; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RingWave {
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flParticlesPerOrbit = 0x248; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInitialRadius = 0x3B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flThickness = 0x528; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x698; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x808; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRoll = 0x978; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flPitch = 0xAE8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flYaw = 0xC58; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bEvenDistribution = 0xDC8; // bool
                constexpr std::ptrdiff_t m_bXYVelocityOnly = 0xDC9; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomTrailLength {
                constexpr std::ptrdiff_t m_flMinLength = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMaxLength = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flLengthRandExponent = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_bOldCode = 0x1F0; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceBetweenTransforms {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_TransformStart = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x248; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flInputMin = 0x2B0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x420; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x590; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x700; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x870; // float32
                constexpr std::ptrdiff_t m_flLOSScale = 0x874; // float32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x878; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x8F8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bLOS = 0x8FC; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x900; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayOffscreen {
                constexpr std::ptrdiff_t m_flOffscreenTime = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSequentialPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flNumToAssign = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bCPPairs = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bSaveOffset = 0x1EA; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1F0; // CPathParameters
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapTimedDecay {
                constexpr std::ptrdiff_t m_flDecayTime = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDistanceToLineSegmentBase {
                constexpr std::ptrdiff_t m_nCP0 = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nCP1 = 0x1DC; // int32
                constexpr std::ptrdiff_t m_flMinInputValue = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMaxInputValue = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bInfiniteLine = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ContinuousEmitter {
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x350; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmitRate = 0x4C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmissionScale = 0x630; // float32
                constexpr std::ptrdiff_t m_flScalePerParentParticle = 0x634; // float32
                constexpr std::ptrdiff_t m_bInitFromKilledParentParticles = 0x638; // bool
                constexpr std::ptrdiff_t m_nEventType = 0x63C; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x640; // int32
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x648; // CUtlString
                constexpr std::ptrdiff_t m_nLimitPerUpdate = 0x650; // int32
                constexpr std::ptrdiff_t m_bForceEmitOnFirstUpdate = 0x654; // bool
                constexpr std::ptrdiff_t m_bForceEmitOnLastUpdate = 0x655; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateVectorSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_Frequency = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_nField = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOscMult = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x1F8; // float32
                constexpr std::ptrdiff_t m_bOffset = 0x1FC; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SequenceLifeTime {
                constexpr std::ptrdiff_t m_flFramerate = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_MoveBetweenPoints {
                constexpr std::ptrdiff_t m_flSpeedMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSpeedMax = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flEndSpread = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flStartOffset = 0x630; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flEndOffset = 0x7A0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x910; // int32
                constexpr std::ptrdiff_t m_bTrailBias = 0x914; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetUserEvent {
                constexpr std::ptrdiff_t m_flInput = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRisingEdge = 0x348; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nRisingEventType = 0x4B8; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_flFallingEdge = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFallingEventType = 0x630; // EventTypeSelection_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_QuantizeFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x348; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_BasicMovement {
                constexpr std::ptrdiff_t m_Gravity = 0x1D8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_fDrag = 0x890; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_massControls = 0xA00; // CParticleMassCalculationParameters
                constexpr std::ptrdiff_t m_nMaxConstraintPasses = 0xE58; // int32
                constexpr std::ptrdiff_t m_bUseNewCode = 0xE5C; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelElement {
                constexpr std::ptrdiff_t m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_names = 0x1E8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bShuffle = 0x200; // bool
                constexpr std::ptrdiff_t m_bLinear = 0x201; // bool
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x202; // bool
                constexpr std::ptrdiff_t m_nFieldOutput = 0x204; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromParentKilled {
                constexpr std::ptrdiff_t m_nAttributeToCopy = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nEventType = 0x1E4; // EventTypeSelection_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Callback {
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunction {
                constexpr std::ptrdiff_t m_flOpStrength = 0x8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOpEndCapState = 0x178; // ParticleEndcapMode_t
                constexpr std::ptrdiff_t m_nToolsState = 0x17C; // ParticleToolsState_t
                constexpr std::ptrdiff_t m_flOpStartFadeInTime = 0x180; // float32
                constexpr std::ptrdiff_t m_flOpEndFadeInTime = 0x184; // float32
                constexpr std::ptrdiff_t m_flOpStartFadeOutTime = 0x188; // float32
                constexpr std::ptrdiff_t m_flOpEndFadeOutTime = 0x18C; // float32
                constexpr std::ptrdiff_t m_flOpFadeOscillatePeriod = 0x190; // float32
                constexpr std::ptrdiff_t m_bNormalizeToStopTime = 0x194; // bool
                constexpr std::ptrdiff_t m_flOpTimeOffsetMin = 0x198; // float32
                constexpr std::ptrdiff_t m_flOpTimeOffsetMax = 0x19C; // float32
                constexpr std::ptrdiff_t m_nOpTimeOffsetSeed = 0x1A0; // int32
                constexpr std::ptrdiff_t m_nOpTimeScaleSeed = 0x1A4; // int32
                constexpr std::ptrdiff_t m_flOpTimeScaleMin = 0x1A8; // float32
                constexpr std::ptrdiff_t m_flOpTimeScaleMax = 0x1AC; // float32
                constexpr std::ptrdiff_t m_bDisableOperator = 0x1B2; // bool
                constexpr std::ptrdiff_t m_Notes = 0x1B8; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_GlobalLight {
                constexpr std::ptrdiff_t m_flScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_bClampLowerRange = 0x1DC; // bool
                constexpr std::ptrdiff_t m_bClampUpperRange = 0x1DD; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_OffsetVectorToVector {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1F4; // Vector
                constexpr std::ptrdiff_t m_randomnessParameters = 0x200; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetPerChildControlPointFromAttribute {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nParticleIncrement = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x1EC; // bool
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nCPField = 0x1F4; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetParentControlPointsToChildCP {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nChildControlPoint = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1EC; // int32
                constexpr std::ptrdiff_t m_bSetOrientation = 0x1F0; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_BoxConstraint {
                constexpr std::ptrdiff_t m_vecMin = 0x1D8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecMax = 0x890; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nCP = 0xF48; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xF4C; // bool
                constexpr std::ptrdiff_t m_bAccountForRadius = 0xF4D; // bool
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreatePhyllotaxis {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nScaleCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x1E8; // int32
                constexpr std::ptrdiff_t m_fRadCentCore = 0x1EC; // float32
                constexpr std::ptrdiff_t m_fRadPerPoint = 0x1F0; // float32
                constexpr std::ptrdiff_t m_fRadPerPointTo = 0x1F4; // float32
                constexpr std::ptrdiff_t m_fpointAngle = 0x1F8; // float32
                constexpr std::ptrdiff_t m_fsizeOverall = 0x1FC; // float32
                constexpr std::ptrdiff_t m_fRadBias = 0x200; // float32
                constexpr std::ptrdiff_t m_fMinRad = 0x204; // float32
                constexpr std::ptrdiff_t m_fDistBias = 0x208; // float32
                constexpr std::ptrdiff_t m_bUseLocalCoords = 0x20C; // bool
                constexpr std::ptrdiff_t m_bUseWithContEmit = 0x20D; // bool
                constexpr std::ptrdiff_t m_bUseOrigRadius = 0x20E; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_AttractToControlPoint {
                constexpr std::ptrdiff_t m_vecComponentScale = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_fForceAmount = 0x1F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fFalloffPower = 0x368; // float32
                constexpr std::ptrdiff_t m_TransformInput = 0x370; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fForceAmountMin = 0x3D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bApplyMinForce = 0x548; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomLifeTime {
                constexpr std::ptrdiff_t m_fLifetimeMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_fLifetimeMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_fLifetimeRandExponent = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityRadialRandom {
                constexpr std::ptrdiff_t m_bPerParticleCenter = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vecPosition = 0x1E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecFwd = 0x8A0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_fSpeedMin = 0xF58; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0x10C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecLocalCoordinateSystemSpeedScale = 0x1238; // Vector
                constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1245; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRadius {
                constexpr std::ptrdiff_t m_flRadiusMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flRadiusMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flRadiusRandExponent = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Orient2DRelToCP {
                constexpr std::ptrdiff_t m_flRotOffset = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flSpinStrength = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TextureControls_t {
                constexpr std::ptrdiff_t m_flFinalTextureScaleU = 0x0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureScaleV = 0x170; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureOffsetU = 0x2E0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureOffsetV = 0x450; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flFinalTextureUVRotation = 0x5C0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flZoomScale = 0x730; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flDistortion = 0x8A0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bRandomizeOffsets = 0xA10; // bool
                constexpr std::ptrdiff_t m_bClampUVs = 0xA11; // bool
                constexpr std::ptrdiff_t m_nPerParticleBlend = 0xA14; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleScale = 0xA18; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleOffsetU = 0xA1C; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleOffsetV = 0xA20; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleRotation = 0xA24; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleZoom = 0xA28; // SpriteCardPerParticleScale_t
                constexpr std::ptrdiff_t m_nPerParticleDistortion = 0xA2C; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ControlPointReference_t {
                constexpr std::ptrdiff_t m_controlPointNameString = 0x0; // int32
                constexpr std::ptrdiff_t m_vOffsetFromControlPoint = 0x4; // Vector
                constexpr std::ptrdiff_t m_bOffsetInLocalSpace = 0x10; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_nOutputCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vInput1 = 0x1E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x8A0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flLerp = 0xF58; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x10C8; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LightningSnapshotGenerator {
                constexpr std::ptrdiff_t m_nCPSnapshot = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPStartPnt = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nCPEndPnt = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flSegments = 0x1F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOffset = 0x360; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOffsetDecay = 0x4D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRecalcRate = 0x640; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flUVScale = 0x7B0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flUVOffset = 0x920; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flSplitRate = 0xA90; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flBranchTwist = 0xC00; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nBranchBehavior = 0xD70; // ParticleLightnintBranchBehavior_t
                constexpr std::ptrdiff_t m_flRadiusStart = 0xD78; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRadiusEnd = 0xEE8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flDedicatedPool = 0x1058; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelMeshGroupOnceTimed {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapQAnglesToRotation {
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionWarp {
                constexpr std::ptrdiff_t m_vecWarpMin = 0x1E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecWarpMax = 0x898; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0xF50; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xF54; // int32
                constexpr std::ptrdiff_t m_nRadiusComponent = 0xF58; // int32
                constexpr std::ptrdiff_t m_flWarpTime = 0xF5C; // float32
                constexpr std::ptrdiff_t m_flWarpStartTime = 0xF60; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0xF64; // float32
                constexpr std::ptrdiff_t m_bInvertWarp = 0xF68; // bool
                constexpr std::ptrdiff_t m_bUseCount = 0xF69; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFieldToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x358; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x4C8; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputCP = 0x638; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x63C; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x640; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CreateParticleSystemRenderer {
                constexpr std::ptrdiff_t m_hEffect = 0x228; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nEventType = 0x230; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_vecCPs = 0x238; // CUtlLeanVector<CPAssignment_t>
                constexpr std::ptrdiff_t m_szParticleConfig = 0x248; // CUtlString
                constexpr std::ptrdiff_t m_AggregationPos = 0x250; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionForce {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomVectorComponent {
                constexpr std::ptrdiff_t m_flMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nComponent = 0x1EC; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_OP_InheritFromParentParticles {
                constexpr std::ptrdiff_t m_flScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1E0; // int32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1E4; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetVectorAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x8A0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flLerp = 0xF58; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x10C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x10CC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x10D0; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformVisibilityToVector {
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x24C; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x250; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x254; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x260; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x26C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DirectionBetweenVecsToVec {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecPoint1 = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecPoint2 = 0x898; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementLoopInsideSphere {
                constexpr std::ptrdiff_t m_nCP = 0x1D8; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecScale = 0x350; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nDistSqrAttr = 0xA08; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSimpleModelCollection {
                constexpr std::ptrdiff_t m_bCenterOffset = 0x228; // bool
                constexpr std::ptrdiff_t m_hModel = 0x230; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_modelInput = 0x238; // CParticleModelInput
                constexpr std::ptrdiff_t m_fSizeCullScale = 0x298; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDisableShadows = 0x408; // bool
                constexpr std::ptrdiff_t m_bDisableMotionBlur = 0x409; // bool
                constexpr std::ptrdiff_t m_bAcceptsDecals = 0x40A; // bool
                constexpr std::ptrdiff_t m_fDrawFilter = 0x410; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nAngularVelocityField = 0x580; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_QuantizeCPComponent {
                constexpr std::ptrdiff_t m_flInputValue = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nCPOutput = 0x350; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x354; // int32
                constexpr std::ptrdiff_t m_flQuantizeValue = 0x358; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlayEndCapWhenFinished {
                constexpr std::ptrdiff_t m_bFireOnEmissionEnd = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bIncludeChildren = 0x1E1; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFloatCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x350; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
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
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromPlaneCache {
                constexpr std::ptrdiff_t m_vecOffsetMin = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_vecOffsetMax = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_bUseNormal = 0x1F9; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LazyCullCompareFloat {
                constexpr std::ptrdiff_t m_flComparsion1 = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flComparsion2 = 0x348; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flCullTime = 0x4B8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ControlPointToRadialScreenSpace {
                constexpr std::ptrdiff_t m_nCPIn = 0x1E0; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_nCPOut = 0x1F0; // int32
                constexpr std::ptrdiff_t m_nCPOutField = 0x1F4; // int32
                constexpr std::ptrdiff_t m_nCPSSPosOut = 0x1F8; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpinUpdate {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_NormalOffset {
                constexpr std::ptrdiff_t m_OffsetMin = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_OffsetMax = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1F8; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1FC; // bool
                constexpr std::ptrdiff_t m_bNormalize = 0x1FD; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDistanceToLineSegmentToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vMinOutputValue = 0x1F4; // Vector
                constexpr std::ptrdiff_t m_vMaxOutputValue = 0x200; // Vector
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderAsModels {
                constexpr std::ptrdiff_t m_ModelList = 0x228; // CUtlVector<ModelReference_t>
                constexpr std::ptrdiff_t m_flModelScale = 0x244; // float32
                constexpr std::ptrdiff_t m_bFitToModelSize = 0x248; // bool
                constexpr std::ptrdiff_t m_bNonUniformScaling = 0x249; // bool
                constexpr std::ptrdiff_t m_nXAxisScalingAttribute = 0x24C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nYAxisScalingAttribute = 0x250; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nZAxisScalingAttribute = 0x254; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSizeCullBloat = 0x258; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreationNoise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bAbsVal = 0x1E4; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1E5; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1F8; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1FC; // Vector
                constexpr std::ptrdiff_t m_flWorldTimeScale = 0x208; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Spin {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_GameLiquidSpill {
                constexpr std::ptrdiff_t m_flLiquidContentsField = 0x228; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flExpirationTime = 0x398; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAmountAttribute = 0x508; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InstantaneousEmitter {
                constexpr std::ptrdiff_t m_nParticlesToEmit = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x350; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInitFromKilledParentParticles = 0x4C0; // float32
                constexpr std::ptrdiff_t m_nEventType = 0x4C4; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_flParentParticleScale = 0x4C8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nMaxEmittedPerFrame = 0x638; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x63C; // int32
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x640; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainLineLength {
                constexpr std::ptrdiff_t m_flMinDistance = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance = 0x1DC; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_LifespanFromVelocity {
                constexpr std::ptrdiff_t m_vecComponentScale = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_flTraceOffset = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flTraceTolerance = 0x1F4; // float32
                constexpr std::ptrdiff_t m_nMaxPlanes = 0x1F8; // int32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x200; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x280; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bIncludeWater = 0x290; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseTrailRenderer {
                constexpr std::ptrdiff_t m_nOrientationType = 0x2DF0; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x2DF4; // int32
                constexpr std::ptrdiff_t m_flMinSize = 0x2DF8; // float32
                constexpr std::ptrdiff_t m_flMaxSize = 0x2DFC; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x2E00; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x2F70; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bClampV = 0x30E0; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityFromCP {
                constexpr std::ptrdiff_t m_velocityInput = 0x1E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_transformInput = 0x898; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flVelocityScale = 0x900; // float32
                constexpr std::ptrdiff_t m_bDirectionOnly = 0x904; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointOrientation {
                constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bRandomize = 0x1E2; // bool
                constexpr std::ptrdiff_t m_bSetOnce = 0x1E3; // bool
                constexpr std::ptrdiff_t m_nCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nHeadLocation = 0x1E8; // int32
                constexpr std::ptrdiff_t m_vecRotation = 0x1EC; // QAngle
                constexpr std::ptrdiff_t m_vecRotationB = 0x1F8; // QAngle
                constexpr std::ptrdiff_t m_flInterpolation = 0x208; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementSkinnedPositionFromCPSnapshot {
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1DC; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bSetNormal = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x1E9; // bool
                constexpr std::ptrdiff_t m_nIndexType = 0x1EC; // SnapshotIndexType_t
                constexpr std::ptrdiff_t m_flReadIndex = 0x1F0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flIncrement = 0x360; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x4D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x640; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x7B0; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MultiSegmentDisplaySnapshotGenerator {
                constexpr std::ptrdiff_t m_nCPSnapshot = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nSegCount = 0x1E4; // ParticleMultiSegmentCountSelection_t
                constexpr std::ptrdiff_t m_nInputType = 0x1E8; // ParticleMultiSegmentInputSelection_t
                constexpr std::ptrdiff_t m_strDefaultString = 0x1F0; // CUtlString
                constexpr std::ptrdiff_t m_flValue = 0x1F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_SpecialCharList = 0x368; // CUtlVector<ParticleMultiSegmentSpecialCharacter_t>
                constexpr std::ptrdiff_t m_vecColorUnlit = 0x380; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecColorLit = 0xA38; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flRadius = 0x10F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flSpacing = 0x1260; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMinCount = 0x13D0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxCount = 0x1540; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bPrependEmpty = 0x16B0; // bool
                constexpr std::ptrdiff_t m_flDigitsAfterDecimal = 0x16B8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateVector {
                constexpr std::ptrdiff_t m_RateMin = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_RateMax = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_FrequencyMin = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_FrequencyMax = 0x1FC; // Vector
                constexpr std::ptrdiff_t m_nField = 0x208; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportional = 0x20C; // bool
                constexpr std::ptrdiff_t m_bProportionalOp = 0x20D; // bool
                constexpr std::ptrdiff_t m_bOffset = 0x20E; // bool
                constexpr std::ptrdiff_t m_flStartTime_min = 0x210; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x214; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x218; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x21C; // float32
                constexpr std::ptrdiff_t m_flOscMult = 0x220; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOscAdd = 0x390; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRateScale = 0x500; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PositionLock {
                constexpr std::ptrdiff_t m_TransformInput = 0x1D8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flStartTime_min = 0x240; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x244; // float32
                constexpr std::ptrdiff_t m_flStartTime_exp = 0x248; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x24C; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x250; // float32
                constexpr std::ptrdiff_t m_flEndTime_exp = 0x254; // float32
                constexpr std::ptrdiff_t m_flRange = 0x258; // float32
                constexpr std::ptrdiff_t m_flRangeBias = 0x260; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flJumpThreshold = 0x3D0; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x3D4; // float32
                constexpr std::ptrdiff_t m_bLockRot = 0x3D8; // bool
                constexpr std::ptrdiff_t m_vecScale = 0x3E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0xA98; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputPrev = 0xA9C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderVRHapticEvent {
                constexpr std::ptrdiff_t m_nHand = 0x228; // ParticleVRHandChoiceList_t
                constexpr std::ptrdiff_t m_nOutputHandCP = 0x22C; // int32
                constexpr std::ptrdiff_t m_nOutputField = 0x230; // int32
                constexpr std::ptrdiff_t m_flAmplitude = 0x238; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToImpactPoint {
                constexpr std::ptrdiff_t m_nCPOut = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPIn = 0x1E4; // int32
                constexpr std::ptrdiff_t m_flUpdateRate = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flTraceLength = 0x1F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartOffset = 0x360; // float32
                constexpr std::ptrdiff_t m_flOffset = 0x364; // float32
                constexpr std::ptrdiff_t m_vecTraceDir = 0x368; // Vector
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x374; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x3F4; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_bSetToEndpoint = 0x3F8; // bool
                constexpr std::ptrdiff_t m_bTraceToClosestSurface = 0x3F9; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0x3FA; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InterpolateRadius {
                constexpr std::ptrdiff_t m_flStartTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flEndScale = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1E8; // bool
                constexpr std::ptrdiff_t m_flBias = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ReinitializeScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TurbulenceForce {
                constexpr std::ptrdiff_t m_flNoiseCoordScale0 = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale1 = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale2 = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flNoiseCoordScale3 = 0x1F4; // float32
                constexpr std::ptrdiff_t m_vecNoiseAmount0 = 0x1F8; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount1 = 0x204; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount2 = 0x210; // Vector
                constexpr std::ptrdiff_t m_vecNoiseAmount3 = 0x21C; // Vector
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelElementOnceTimed {
                constexpr std::ptrdiff_t m_hModel = 0x1D8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_inNames = 0x1E0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_outNames = 0x1F8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_fallbackNames = 0x210; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x228; // bool
                constexpr std::ptrdiff_t m_bProportional = 0x229; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x22C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x230; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRemapTime = 0x234; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToPlayer {
                constexpr std::ptrdiff_t m_nCP1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_bOrientToEyes = 0x1F0; // bool
                constexpr std::ptrdiff_t m_nPosition = 0x1F4; // ParticleEntityPos_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapTimedFreeze {
                constexpr std::ptrdiff_t m_flFreezeTime = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderGpuImplicit {
                constexpr std::ptrdiff_t m_bUsePerParticleRadius = 0x228; // bool
                constexpr std::ptrdiff_t m_nVertexCountKb = 0x22C; // uint32
                constexpr std::ptrdiff_t m_nIndexCountKb = 0x230; // uint32
                constexpr std::ptrdiff_t m_fGridSize = 0x238; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fRadiusScale = 0x3A8; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_fIsosurfaceThreshold = 0x518; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nScaleCP = 0x688; // int32
                constexpr std::ptrdiff_t m_hMaterial = 0x690; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetRandomControlPointPosition {
                constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bOrient = 0x1E1; // bool
                constexpr std::ptrdiff_t m_nCP1 = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nHeadLocation = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flReRandomRate = 0x1F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecCPMinPos = 0x360; // Vector
                constexpr std::ptrdiff_t m_vecCPMaxPos = 0x36C; // Vector
                constexpr std::ptrdiff_t m_flInterpolation = 0x378; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderVolumetricEmitter {
                constexpr std::ptrdiff_t m_strChannelType = 0x228; // CUtlString
                constexpr std::ptrdiff_t m_nType = 0x230; // ParticleVolumetricSmokeType_t
                constexpr std::ptrdiff_t m_nCreationType = 0x234; // ParticleVolumetricSmokeCreationType_t
                constexpr std::ptrdiff_t m_nEventType = 0x238; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_vecPos = 0x240; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecVelocity = 0x8F8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flRadius = 0xFB0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flDensity = 0x1120; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flTemperature = 0x1290; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMagnitude = 0x1400; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flKillRadius = 0x1570; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flFalloff = 0x16E0; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformVisibilityToScalar {
                constexpr std::ptrdiff_t m_nSetMethod = 0x1D8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x24C; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x250; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x254; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x258; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x25C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapControlPointDirectionToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ScreenSpacePositionOfTarget {
                constexpr std::ptrdiff_t m_vecTargetPosition = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bOututBehindness = 0x890; // bool
                constexpr std::ptrdiff_t m_nBehindFieldOutput = 0x894; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flBehindOutputRemap = 0x898; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nBehindSetMethod = 0xA08; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionOperator {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DragRelativeToPlane {
                constexpr std::ptrdiff_t m_flDragAtPlane = 0x1D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flFalloff = 0x348; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDirectional = 0x4B8; // bool
                constexpr std::ptrdiff_t m_vecPlaneNormal = 0x4C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xB78; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPtoVector {
                constexpr std::ptrdiff_t m_nCPInput = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomYaw {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SnapshotRigidSkinToBones {
                constexpr std::ptrdiff_t m_bTransformNormals = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bTransformRadii = 0x1D9; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1DC; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetSingleControlPointPosition {
                constexpr std::ptrdiff_t m_bSetOnce = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCP1 = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_transformInput = 0x8A0; // CParticleTransformInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceToNeighborCull {
                constexpr std::ptrdiff_t m_flDistance = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bIncludeRadii = 0x350; // bool
                constexpr std::ptrdiff_t m_flLifespanOverlap = 0x358; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFieldModify = 0x4C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flModify = 0x4D0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x640; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bUseNeighbor = 0x644; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPtoScalar {
                constexpr std::ptrdiff_t m_nCPInput = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nField = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flInterpRate = 0x1FC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x200; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionRenderer {
                constexpr std::ptrdiff_t VisibilityInputs = 0x1D8; // CParticleVisibilityInputs
                constexpr std::ptrdiff_t m_bCannotBeRefracted = 0x220; // bool
                constexpr std::ptrdiff_t m_bSkipRenderingOnMobile = 0x221; // bool
            }
            // Parent: None
            // Field count: 66
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
                constexpr std::ptrdiff_t m_nInitialParticles = 0x258; // int32
                constexpr std::ptrdiff_t m_nMaxParticles = 0x25C; // int32
                constexpr std::ptrdiff_t m_nGroupID = 0x260; // int32
                constexpr std::ptrdiff_t m_BoundingBoxMin = 0x264; // Vector
                constexpr std::ptrdiff_t m_BoundingBoxMax = 0x270; // Vector
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x27C; // float32
                constexpr std::ptrdiff_t m_nSortOverridePositionCP = 0x280; // int32
                constexpr std::ptrdiff_t m_bInfiniteBounds = 0x284; // bool
                constexpr std::ptrdiff_t m_bEnableNamedValues = 0x285; // bool
                constexpr std::ptrdiff_t m_NamedValueDomain = 0x288; // CUtlString
                constexpr std::ptrdiff_t m_NamedValueLocals = 0x290; // CUtlVector<ParticleNamedValueSource_t*>
                constexpr std::ptrdiff_t m_ConstantColor = 0x2A8; // Color
                constexpr std::ptrdiff_t m_ConstantNormal = 0x2AC; // Vector
                constexpr std::ptrdiff_t m_flConstantRadius = 0x2B8; // float32
                constexpr std::ptrdiff_t m_flConstantRotation = 0x2BC; // float32
                constexpr std::ptrdiff_t m_flConstantRotationSpeed = 0x2C0; // float32
                constexpr std::ptrdiff_t m_flConstantLifespan = 0x2C4; // float32
                constexpr std::ptrdiff_t m_nConstantSequenceNumber = 0x2C8; // int32
                constexpr std::ptrdiff_t m_nConstantSequenceNumber1 = 0x2CC; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x2D0; // int32
                constexpr std::ptrdiff_t m_hSnapshot = 0x2D8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_pszCullReplacementName = 0x2E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flCullRadius = 0x2E8; // float32
                constexpr std::ptrdiff_t m_flCullFillCost = 0x2EC; // float32
                constexpr std::ptrdiff_t m_nCullControlPoint = 0x2F0; // int32
                constexpr std::ptrdiff_t m_hFallback = 0x2F8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nFallbackMaxCount = 0x300; // int32
                constexpr std::ptrdiff_t m_hLowViolenceDef = 0x308; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_hReferenceReplacement = 0x310; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flPreSimulationTime = 0x318; // float32
                constexpr std::ptrdiff_t m_flStopSimulationAfterTime = 0x31C; // float32
                constexpr std::ptrdiff_t m_flMaximumTimeStep = 0x320; // float32
                constexpr std::ptrdiff_t m_flMaximumSimTime = 0x324; // float32
                constexpr std::ptrdiff_t m_flMinimumSimTime = 0x328; // float32
                constexpr std::ptrdiff_t m_flMinimumTimeStep = 0x32C; // float32
                constexpr std::ptrdiff_t m_nMinimumFrames = 0x330; // int32
                constexpr std::ptrdiff_t m_bIsGPUParticleSystem = 0x334; // bool
                constexpr std::ptrdiff_t m_nMinCPULevel = 0x338; // int32
                constexpr std::ptrdiff_t m_nMinGPULevel = 0x33C; // int32
                constexpr std::ptrdiff_t m_flNoDrawTimeToGoToSleep = 0x340; // float32
                constexpr std::ptrdiff_t m_flMaxDrawDistance = 0x344; // float32
                constexpr std::ptrdiff_t m_flStartFadeDistance = 0x348; // float32
                constexpr std::ptrdiff_t m_flMaxCreationDistance = 0x34C; // float32
                constexpr std::ptrdiff_t m_nAggregationMinAvailableParticles = 0x350; // int32
                constexpr std::ptrdiff_t m_flAggregateRadius = 0x354; // float32
                constexpr std::ptrdiff_t m_bShouldBatch = 0x358; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToRenderBounds = 0x359; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToSnapshot = 0x35A; // bool
                constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToCollisionHulls = 0x35B; // bool
                constexpr std::ptrdiff_t m_nViewModelEffect = 0x35C; // InheritableBoolType_t
                constexpr std::ptrdiff_t m_bScreenSpaceEffect = 0x360; // bool
                constexpr std::ptrdiff_t m_pszTargetLayerID = 0x368; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nSkipRenderControlPoint = 0x370; // int32
                constexpr std::ptrdiff_t m_nAllowRenderControlPoint = 0x374; // int32
                constexpr std::ptrdiff_t m_bShouldSort = 0x378; // bool
                constexpr std::ptrdiff_t m_controlPointConfigurations = 0x3C0; // CUtlVector<ParticleControlPointConfiguration_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelMeshGroupEndCap {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PercentageBetweenTransformsVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E0; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_TransformStart = 0x200; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x268; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x2D0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x2D4; // bool
                constexpr std::ptrdiff_t m_bRadialCheck = 0x2D5; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderScreenVelocityRotate {
                constexpr std::ptrdiff_t m_flRotateRateDegrees = 0x228; // float32
                constexpr std::ptrdiff_t m_flForwardDegrees = 0x22C; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_UpdateLightSource {
                constexpr std::ptrdiff_t m_vColorTint = 0x1D8; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMinimumLightingRadius = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flMaximumLightingRadius = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flPositionDampingConstant = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinBox {
                constexpr std::ptrdiff_t m_vecMin = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecMax = 0x898; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xF50; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xF54; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0xF58; // CRandomNumberGeneratorParameters
                constexpr std::ptrdiff_t m_bUseNewCode = 0xF60; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ChooseRandomChildrenInGroup {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flNumberOfChildren = 0x1E8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 33
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ControlpointLight {
                constexpr std::ptrdiff_t m_flScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nControlPoint1 = 0x660; // int32
                constexpr std::ptrdiff_t m_nControlPoint2 = 0x664; // int32
                constexpr std::ptrdiff_t m_nControlPoint3 = 0x668; // int32
                constexpr std::ptrdiff_t m_nControlPoint4 = 0x66C; // int32
                constexpr std::ptrdiff_t m_vecCPOffset1 = 0x670; // Vector
                constexpr std::ptrdiff_t m_vecCPOffset2 = 0x67C; // Vector
                constexpr std::ptrdiff_t m_vecCPOffset3 = 0x688; // Vector
                constexpr std::ptrdiff_t m_vecCPOffset4 = 0x694; // Vector
                constexpr std::ptrdiff_t m_LightFiftyDist1 = 0x6A0; // float32
                constexpr std::ptrdiff_t m_LightZeroDist1 = 0x6A4; // float32
                constexpr std::ptrdiff_t m_LightFiftyDist2 = 0x6A8; // float32
                constexpr std::ptrdiff_t m_LightZeroDist2 = 0x6AC; // float32
                constexpr std::ptrdiff_t m_LightFiftyDist3 = 0x6B0; // float32
                constexpr std::ptrdiff_t m_LightZeroDist3 = 0x6B4; // float32
                constexpr std::ptrdiff_t m_LightFiftyDist4 = 0x6B8; // float32
                constexpr std::ptrdiff_t m_LightZeroDist4 = 0x6BC; // float32
                constexpr std::ptrdiff_t m_LightColor1 = 0x6C0; // Color
                constexpr std::ptrdiff_t m_LightColor2 = 0x6C4; // Color
                constexpr std::ptrdiff_t m_LightColor3 = 0x6C8; // Color
                constexpr std::ptrdiff_t m_LightColor4 = 0x6CC; // Color
                constexpr std::ptrdiff_t m_bLightType1 = 0x6D0; // bool
                constexpr std::ptrdiff_t m_bLightType2 = 0x6D1; // bool
                constexpr std::ptrdiff_t m_bLightType3 = 0x6D2; // bool
                constexpr std::ptrdiff_t m_bLightType4 = 0x6D3; // bool
                constexpr std::ptrdiff_t m_bLightDynamic1 = 0x6D4; // bool
                constexpr std::ptrdiff_t m_bLightDynamic2 = 0x6D5; // bool
                constexpr std::ptrdiff_t m_bLightDynamic3 = 0x6D6; // bool
                constexpr std::ptrdiff_t m_bLightDynamic4 = 0x6D7; // bool
                constexpr std::ptrdiff_t m_bUseNormal = 0x6D8; // bool
                constexpr std::ptrdiff_t m_bUseHLambert = 0x6D9; // bool
                constexpr std::ptrdiff_t m_bClampLowerRange = 0x6DE; // bool
                constexpr std::ptrdiff_t m_bClampUpperRange = 0x6DF; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VectorFieldSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecScale = 0x358; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flBoundaryDampening = 0xA10; // float32
                constexpr std::ptrdiff_t m_bSetVelocity = 0xA14; // bool
                constexpr std::ptrdiff_t m_bLockToSurface = 0xA15; // bool
                constexpr std::ptrdiff_t m_flGridSpacing = 0xA18; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CylindricalDistanceToTransform {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x630; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformStart = 0x7A0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x808; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x870; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x874; // bool
                constexpr std::ptrdiff_t m_bAdditive = 0x875; // bool
                constexpr std::ptrdiff_t m_bCapsule = 0x876; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionPlaceOnGround {
                constexpr std::ptrdiff_t m_flOffset = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecTraceDir = 0x4C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_CollisionGroupName = 0xB78; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0xBF8; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nTraceMissBehavior = 0xC08; // ParticleTraceMissBehavior_t
                constexpr std::ptrdiff_t m_bIncludeWater = 0xC0C; // bool
                constexpr std::ptrdiff_t m_nAttribute = 0xC10; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bSetPXYZOnly = 0xC14; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0xC15; // bool
                constexpr std::ptrdiff_t m_nGroundNormalAttribute = 0xC18; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bOffsetonColOnly = 0xC1C; // bool
                constexpr std::ptrdiff_t m_flOffsetByRadiusFactor = 0xC20; // float32
                constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0xC24; // int32
                constexpr std::ptrdiff_t m_nIgnoreCP = 0xC28; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomScalar {
                constexpr std::ptrdiff_t m_flMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flExponent = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderPostProcessing {
                constexpr std::ptrdiff_t m_flPostProcessStrength = 0x228; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_hPostTexture = 0x398; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_nPriority = 0x3A0; // ParticlePostProcessPriorityGroup_t
            }
            // Parent: None
            // Field count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WorldTraceConstraint {
                constexpr std::ptrdiff_t m_nCP = 0x1D8; // int32
                constexpr std::ptrdiff_t m_vecCpOffset = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_nCollisionMode = 0x1E8; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_nCollisionModeMin = 0x1EC; // ParticleCollisionMode_t
                constexpr std::ptrdiff_t m_nTraceSet = 0x1F0; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1F4; // char[128]
                constexpr std::ptrdiff_t m_bWorldOnly = 0x274; // bool
                constexpr std::ptrdiff_t m_bBrushOnly = 0x275; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0x276; // bool
                constexpr std::ptrdiff_t m_nIgnoreCP = 0x278; // int32
                constexpr std::ptrdiff_t m_flCpMovementTolerance = 0x27C; // float32
                constexpr std::ptrdiff_t m_flRetestRate = 0x280; // float32
                constexpr std::ptrdiff_t m_flTraceTolerance = 0x284; // float32
                constexpr std::ptrdiff_t m_flCollisionConfirmationSpeed = 0x288; // float32
                constexpr std::ptrdiff_t m_nMaxTracesPerFrame = 0x28C; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x290; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flBounceAmount = 0x400; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSlideAmount = 0x570; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRandomDirScale = 0x6E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bDecayBounce = 0x850; // bool
                constexpr std::ptrdiff_t m_bKillonContact = 0x851; // bool
                constexpr std::ptrdiff_t m_flMinSpeed = 0x854; // float32
                constexpr std::ptrdiff_t m_bSetNormal = 0x858; // bool
                constexpr std::ptrdiff_t m_nStickOnCollisionField = 0x85C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flStopSpeed = 0x860; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nEntityStickDataField = 0x9D0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nEntityStickNormalField = 0x9D4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderBlobs {
                constexpr std::ptrdiff_t m_cubeWidth = 0x228; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_cutoffRadius = 0x398; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_renderRadius = 0x508; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nVertexCountKb = 0x678; // uint32
                constexpr std::ptrdiff_t m_nIndexCountKb = 0x67C; // uint32
                constexpr std::ptrdiff_t m_nScaleCP = 0x680; // int32
                constexpr std::ptrdiff_t m_MaterialVars = 0x688; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_hMaterial = 0x6B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_OscillateScalar {
                constexpr std::ptrdiff_t m_RateMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_FrequencyMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_FrequencyMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_nField = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportional = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bProportionalOp = 0x1ED; // bool
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flOscMult = 0x200; // float32
                constexpr std::ptrdiff_t m_flOscAdd = 0x204; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeOut {
                constexpr std::ptrdiff_t m_flFadeOutTimeMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFadeOutTimeMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flFadeOutTimeExp = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flFadeBias = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bProportional = 0x220; // bool
                constexpr std::ptrdiff_t m_bEaseInAndOut = 0x221; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WaterImpulseRenderer {
                constexpr std::ptrdiff_t m_vecPos = 0x228; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flRadius = 0x8E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMagnitude = 0xA50; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flShape = 0xBC0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flWindSpeed = 0xD30; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flWobble = 0xEA0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bIsRadialWind = 0x1010; // bool
                constexpr std::ptrdiff_t m_nEventType = 0x1014; // EventTypeSelection_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomSequence {
                constexpr std::ptrdiff_t m_nSequenceMin = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nSequenceMax = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bShuffle = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bLinear = 0x1E9; // bool
                constexpr std::ptrdiff_t m_WeightedList = 0x1F0; // CUtlVector<SequenceWeightedList_t>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarSplineSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nField = 0x210; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseOut = 0x214; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x358; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CollideWithParentParticles {
                constexpr std::ptrdiff_t m_flParentRadiusScale = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadiusScale = 0x348; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromVectorFieldSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nWeightUpdateCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bUseVerticalVelocity = 0x1EC; // bool
                constexpr std::ptrdiff_t m_vecScale = 0x1F0; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetVectorAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1D8; // VectorExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x898; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flLerp = 0xF50; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x10C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x10C4; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x10C8; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_AddVectorToVector {
                constexpr std::ptrdiff_t m_vecScale = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1EC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vOffsetMin = 0x1F4; // Vector
                constexpr std::ptrdiff_t m_vOffsetMax = 0x200; // Vector
                constexpr std::ptrdiff_t m_randomnessParameters = 0x20C; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialVisibilityScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F4; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformOrientationToYaw {
                constexpr std::ptrdiff_t m_TransformInput = 0x1D8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x240; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRotOffset = 0x244; // float32
                constexpr std::ptrdiff_t m_flSpinStrength = 0x248; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderStatusEffect {
                constexpr std::ptrdiff_t m_pTextureColorWarp = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureDetail2 = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureDiffuseWarp = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureFresnelColorWarp = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureFresnelWarp = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureSpecularWarp = 0x250; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureEnvMap = 0x258; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RandomForce {
                constexpr std::ptrdiff_t m_MinForce = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_MaxForce = 0x1F4; // Vector
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapParticleCountOnScalarEndCap {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nInputMax = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_bBackwards = 0x1EC; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F0; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 17
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
                constexpr std::ptrdiff_t m_bSequenceNameIsAnimClipPath = 0x55; // bool
                constexpr std::ptrdiff_t m_vecPreviewGravity = 0x58; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LocalAccelerationForce {
                constexpr std::ptrdiff_t m_nCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nScaleCP = 0x1EC; // int32
                constexpr std::ptrdiff_t m_vecAccel = 0x1F0; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ModelCull {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1DC; // bool
                constexpr std::ptrdiff_t m_bCullOutside = 0x1DD; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1DE; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1DF; // char[128]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x348; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x34C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_Lerp = 0x350; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapTransformToVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vInputMin = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vInputMax = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_vOutputMin = 0x1FC; // Vector
                constexpr std::ptrdiff_t m_vOutputMax = 0x208; // Vector
                constexpr std::ptrdiff_t m_TransformInput = 0x218; // CParticleTransformInput
                constexpr std::ptrdiff_t m_LocalSpaceTransform = 0x280; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flStartTime = 0x2E8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x2EC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x2F0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bOffset = 0x2F4; // bool
                constexpr std::ptrdiff_t m_bAccelerate = 0x2F5; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x2F8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ScreenSpaceDistanceToEdge {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMaxDistFromEdge = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x350; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x4C0; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDistanceToLineSegmentToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMinOutputValue = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flMaxOutputValue = 0x1F8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVectortoCP {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nParticleNumber = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFromCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x1E0; // CUtlString
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1EC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1F0; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1F4; // bool
                constexpr std::ptrdiff_t m_bReverse = 0x1F5; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1F8; // int32
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x200; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x370; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x4E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bSubSample = 0x650; // bool
                constexpr std::ptrdiff_t m_bPrev = 0x651; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceBetweenCPsToCP {
                constexpr std::ptrdiff_t m_nStartCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nEndCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOutputCPField = 0x1EC; // int32
                constexpr std::ptrdiff_t m_bSetOnce = 0x1F0; // bool
                constexpr std::ptrdiff_t m_flInputMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x200; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x204; // float32
                constexpr std::ptrdiff_t m_flLOSScale = 0x208; // float32
                constexpr std::ptrdiff_t m_bLOS = 0x20C; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x20D; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x290; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nSetParent = 0x294; // ParticleParentSetMode_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToHand {
                constexpr std::ptrdiff_t m_nCP1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nHand = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_bOrientToHand = 0x1F4; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistanceToPath {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance0 = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flMaxDistanceMid = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMaxDistance1 = 0x1E4; // float32
                constexpr std::ptrdiff_t m_PathParameters = 0x1F0; // CPathParameters
                constexpr std::ptrdiff_t m_flTravelTime = 0x230; // float32
                constexpr std::ptrdiff_t m_nFieldScale = 0x234; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nManualTField = 0x238; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1D8; // int32
                constexpr std::ptrdiff_t m_vecPointOffset = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_flDistance = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x358; // bool
                constexpr std::ptrdiff_t m_nAttribute = 0x35C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateAlongPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1E0; // float32
                constexpr std::ptrdiff_t m_PathParams = 0x1F0; // CPathParameters
                constexpr std::ptrdiff_t m_bUseRandomCPs = 0x230; // bool
                constexpr std::ptrdiff_t m_vEndOffset = 0x234; // Vector
                constexpr std::ptrdiff_t m_bSaveOffset = 0x240; // bool
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_GameDecalRenderer {
                constexpr std::ptrdiff_t m_sDecalGroupName = 0x228; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nEventType = 0x230; // EventTypeSelection_t
                constexpr std::ptrdiff_t m_nInteractionMask = 0x238; // ParticleCollisionMask_t
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x240; // ParticleCollisionGroup_t
                constexpr std::ptrdiff_t m_vecStartPos = 0x248; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecEndPos = 0x900; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flTraceBloat = 0xFB8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flDecalSize = 0x1128; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nDecalGroupIndex = 0x1298; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flDecalRotation = 0x1408; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vModulationColor = 0x1578; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bUseGameDefaultDecalSize = 0x1C30; // bool
                constexpr std::ptrdiff_t m_bRandomDecalRotation = 0x1C31; // bool
                constexpr std::ptrdiff_t m_bRandomlySelectDecalInGroup = 0x1C32; // bool
                constexpr std::ptrdiff_t m_bNoDecalsOnOwner = 0x1C33; // bool
                constexpr std::ptrdiff_t m_bVisualizeTraces = 0x1C34; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointsToModelParticles {
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1D8; // char[128]
                constexpr std::ptrdiff_t m_AttachmentName = 0x258; // char[128]
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x2D8; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x2DC; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x2E0; // int32
                constexpr std::ptrdiff_t m_bSkin = 0x2E4; // bool
                constexpr std::ptrdiff_t m_bAttachment = 0x2E5; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ColorInterpolateRandom {
                constexpr std::ptrdiff_t m_ColorFadeMin = 0x1D8; // Color
                constexpr std::ptrdiff_t m_ColorFadeMax = 0x1F4; // Color
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x204; // float32
                constexpr std::ptrdiff_t m_flFadeEndTime = 0x208; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x20C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseInOut = 0x210; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelSequenceToScalar {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderLights {
                constexpr std::ptrdiff_t m_flAnimationRate = 0x230; // float32
                constexpr std::ptrdiff_t m_nAnimationType = 0x234; // AnimationType_t
                constexpr std::ptrdiff_t m_bAnimateInFPS = 0x238; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x23C; // float32
                constexpr std::ptrdiff_t m_flMaxSize = 0x240; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x244; // float32
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x248; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DecayClampCount {
                constexpr std::ptrdiff_t m_nCount = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRandomNumberGeneratorParameters {
                constexpr std::ptrdiff_t m_bDistributeEvenly = 0x0; // bool
                constexpr std::ptrdiff_t m_nSeed = 0x4; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ColorLitPerParticle {
                constexpr std::ptrdiff_t m_ColorMin = 0x1F8; // Color
                constexpr std::ptrdiff_t m_ColorMax = 0x1FC; // Color
                constexpr std::ptrdiff_t m_TintMin = 0x200; // Color
                constexpr std::ptrdiff_t m_TintMax = 0x204; // Color
                constexpr std::ptrdiff_t m_flTintPerc = 0x208; // float32
                constexpr std::ptrdiff_t m_nTintBlendMode = 0x20C; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_flLightAmplification = 0x210; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderPoints {
                constexpr std::ptrdiff_t m_hMaterial = 0x228; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetAttributeToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x358; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x4C8; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x638; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x63C; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnGrid {
                constexpr std::ptrdiff_t m_nXCount = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nYCount = 0x350; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nZCount = 0x4C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nXSpacing = 0x630; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nYSpacing = 0x7A0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nZSpacing = 0x910; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nControlPointNumber = 0xA80; // int32
                constexpr std::ptrdiff_t m_bLocalSpace = 0xA84; // bool
                constexpr std::ptrdiff_t m_bCenter = 0xA85; // bool
                constexpr std::ptrdiff_t m_bHollow = 0xA86; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampCPLinearRandom {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_vecRateMin = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vecRateMax = 0x1F0; // Vector
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VelocityMatchingForce {
                constexpr std::ptrdiff_t m_flDirScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flSpdScale = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flNeighborDistance = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flFacingStrength = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bUseAABB = 0x1E8; // bool
                constexpr std::ptrdiff_t m_nCPBroadcast = 0x1EC; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomAlphaWindowThreshold {
                constexpr std::ptrdiff_t m_flMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flExponent = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnModelAtHeight {
                constexpr std::ptrdiff_t m_bUseBones = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bForceZ = 0x1E1; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nHeightCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bUseWaterHeight = 0x1EC; // bool
                constexpr std::ptrdiff_t m_flDesiredHeight = 0x1F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x360; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecDirectionBias = 0xA18; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nBiasType = 0x10D0; // ParticleHitboxBiasType_t
                constexpr std::ptrdiff_t m_bLocalCoords = 0x10D4; // bool
                constexpr std::ptrdiff_t m_bPreferMovingBoxes = 0x10D5; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x10D6; // char[128]
                constexpr std::ptrdiff_t m_flHitboxVelocityScale = 0x1158; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x12C8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ModelSurfaceSnapshotGenerator {
                constexpr std::ptrdiff_t m_nCPSnapshot = 0x1E0; // int32
                constexpr std::ptrdiff_t m_modelInput = 0x1E8; // CParticleModelInput
                constexpr std::ptrdiff_t m_flRecalcRate = 0x248; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flUSpacing = 0x3B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flVSpacing = 0x528; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flSurfaceOffset = 0x698; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bSetNormal = 0x808; // bool
                constexpr std::ptrdiff_t m_bSetUp = 0x809; // bool
                constexpr std::ptrdiff_t m_bSetGravity = 0x80A; // bool
                constexpr std::ptrdiff_t m_bSetUV = 0x80B; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RestartAfterDuration {
                constexpr std::ptrdiff_t m_flDurationMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flDurationMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_nCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPField = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bOnlyChildren = 0x1EC; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderClothForce {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVisibilityScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSequentialPathV2 {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNumToAssign = 0x350; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bLoop = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bCPPairs = 0x4C1; // bool
                constexpr std::ptrdiff_t m_bSaveOffset = 0x4C2; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x4D0; // CPathParameters
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VecInputMaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vecInput = 0x8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialDirectionToTransformToVector {
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x24C; // float32
                constexpr std::ptrdiff_t m_flOffsetRot = 0x250; // float32
                constexpr std::ptrdiff_t m_vecOffsetAxis = 0x254; // Vector
                constexpr std::ptrdiff_t m_bNormalize = 0x260; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_OP_LockToSavedSequentialPathV2 {
                constexpr std::ptrdiff_t m_flFadeStart = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFadeEnd = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bCPPairs = 0x1E0; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1F0; // CPathParameters
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NormalLock {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapTransformOrientationToRotations {
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_vecRotation = 0x248; // Vector
                constexpr std::ptrdiff_t m_bUseQuat = 0x254; // bool
                constexpr std::ptrdiff_t m_bWriteNormal = 0x255; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Cull {
                constexpr std::ptrdiff_t m_flCullPerc = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flCullStart = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flCullEnd = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flCullExp = 0x1E4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomYawFlip {
                constexpr std::ptrdiff_t m_flPercent = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SequenceWeightedList_t {
                constexpr std::ptrdiff_t m_nSequence = 0x0; // int32
                constexpr std::ptrdiff_t m_flRelativeWeight = 0x4; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ReadFromNeighboringParticle {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1E0; // int32
                constexpr std::ptrdiff_t m_DistanceCheck = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x358; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderText {
                constexpr std::ptrdiff_t m_OutlineColor = 0x228; // Color
                constexpr std::ptrdiff_t m_DefaultText = 0x230; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpToInitialPosition {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nCacheField = 0x350; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x358; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecScale = 0x4C8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRotation {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpEndCapVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutput = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_flLerpTime = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VelocityDecay {
                constexpr std::ptrdiff_t m_flMinVelocity = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPOrientationToPointAtCP {
                constexpr std::ptrdiff_t m_nInputCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_flInterpolation = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_b2DOrientation = 0x358; // bool
                constexpr std::ptrdiff_t m_bAvoidSingularity = 0x359; // bool
                constexpr std::ptrdiff_t m_bPointAway = 0x35A; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LockToPointList {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_pointList = 0x1E0; // CUtlVector<PointDefinition_t>
                constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1F8; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x1F9; // bool
                constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1FC; // int32
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementPlaceOnGround {
                constexpr std::ptrdiff_t m_flOffset = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x348; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x34C; // float32
                constexpr std::ptrdiff_t m_vecTraceDir = 0x350; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flTraceOffset = 0xA08; // float32
                constexpr std::ptrdiff_t m_flLerpRate = 0xA0C; // float32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0xA10; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0xA90; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nRefCP1 = 0xA94; // int32
                constexpr std::ptrdiff_t m_nRefCP2 = 0xA98; // int32
                constexpr std::ptrdiff_t m_nLerpCP = 0xA9C; // int32
                constexpr std::ptrdiff_t m_nTraceMissBehavior = 0xAA8; // ParticleTraceMissBehavior_t
                constexpr std::ptrdiff_t m_bIncludeShotHull = 0xAAC; // bool
                constexpr std::ptrdiff_t m_bIncludeWater = 0xAAD; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0xAB0; // bool
                constexpr std::ptrdiff_t m_bScaleOffset = 0xAB1; // bool
                constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0xAB4; // int32
                constexpr std::ptrdiff_t m_nIgnoreCP = 0xAB8; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPOrientationToDirection {
                constexpr std::ptrdiff_t m_nInputControlPoint = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1DC; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCrossProductOfTwoVectorsToVector {
                constexpr std::ptrdiff_t m_InputVec1 = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_InputVec2 = 0x890; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0xF48; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bNormalize = 0xF4C; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapTransformOrientationToRotations {
                constexpr std::ptrdiff_t m_TransformInput = 0x1D8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_vecRotation = 0x240; // Vector
                constexpr std::ptrdiff_t m_bUseQuat = 0x24C; // bool
                constexpr std::ptrdiff_t m_bWriteNormal = 0x24D; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomRotationSpeed {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MParticleMinVersion
            // MGetKV3ClassDefaults
            namespace C_OP_InheritFromParentParticlesV2 {
                constexpr std::ptrdiff_t m_flScale = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x348; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bSubSample = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x4C1; // bool
                constexpr std::ptrdiff_t m_bReverse = 0x4C2; // bool
                constexpr std::ptrdiff_t m_nMissingParentBehavior = 0x4C4; // MissingParentInheritBehavior_t
                constexpr std::ptrdiff_t m_flInterpolation = 0x4C8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomSecondSequence {
                constexpr std::ptrdiff_t m_nSequenceMin = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nSequenceMax = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFloatCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x348; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x34C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_Lerp = 0x350; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointDefinition_t {
                constexpr std::ptrdiff_t m_nControlPoint = 0x0; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x4; // bool
                constexpr std::ptrdiff_t m_vOffset = 0x8; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointPositionToRandomActiveCP {
                constexpr std::ptrdiff_t m_nCP1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nHeadLocationMin = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nHeadLocationMax = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flResetRate = 0x1F0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Diffusion {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_AgeNoise {
                constexpr std::ptrdiff_t m_bAbsVal = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1E1; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flAgeMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flAgeMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1F4; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1F8; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVectorComponentToScalar {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nComponent = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGeneralRandomRotation {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flDegrees = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flDegreesMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flDegreesMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flRotationRandExponent = 0x1F0; // float32
                constexpr std::ptrdiff_t m_bRandomlyFlipDirection = 0x1F4; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceBetweenVecs {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecPoint1 = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecPoint2 = 0x898; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flInputMin = 0xF50; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x10C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x1230; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x13A0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x1510; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bDeltaTime = 0x1514; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DampenToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_flRange = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flScale = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CalculateVectorAttribute {
                constexpr std::ptrdiff_t m_vStartValue = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_nFieldInput1 = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputScale1 = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nFieldInput2 = 0x1EC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputScale2 = 0x1F0; // float32
                constexpr std::ptrdiff_t m_nControlPointInput1 = 0x1F4; // ControlPointReference_t
                constexpr std::ptrdiff_t m_flControlPointScale1 = 0x208; // float32
                constexpr std::ptrdiff_t m_nControlPointInput2 = 0x20C; // ControlPointReference_t
                constexpr std::ptrdiff_t m_flControlPointScale2 = 0x220; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x224; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vFinalOutputScale = 0x228; // Vector
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LockToBone {
                constexpr std::ptrdiff_t m_modelInput = 0x1D8; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x238; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x2A0; // float32
                constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x2A4; // float32
                constexpr std::ptrdiff_t m_flJumpThreshold = 0x2A8; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x2AC; // float32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x2B0; // char[128]
                constexpr std::ptrdiff_t m_bRigid = 0x330; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x331; // bool
                constexpr std::ptrdiff_t m_nFieldOutput = 0x334; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputPrev = 0x338; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nRotationSetType = 0x33C; // ParticleRotationLockType_t
                constexpr std::ptrdiff_t m_bRigidRotationLock = 0x340; // bool
                constexpr std::ptrdiff_t m_vecRotation = 0x348; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flRotLerp = 0xA00; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelBodyPartOnceTimed {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ScreenSpaceRotateTowardTarget {
                constexpr std::ptrdiff_t m_vecTargetPosition = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x890; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nSetMethod = 0xA00; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_flScreenEdgeAlignmentDistance = 0xA08; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementMaintainOffset {
                constexpr std::ptrdiff_t m_vecOffset = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_nCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bRadiusScale = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinCapsuleTransform {
                constexpr std::ptrdiff_t m_fRadiusMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fRadiusMax = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fHeight = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformInput = 0x630; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fSpeedMin = 0x698; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0x808; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedRandExp = 0x978; // float32
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x980; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x1038; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x16F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldVelocity = 0x16F4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetVec {
                constexpr std::ptrdiff_t m_InputValue = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x890; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x894; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_Lerp = 0x898; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0xA08; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromParentParticles {
                constexpr std::ptrdiff_t m_flVelocityScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flIncrement = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1E8; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1EC; // int32
                constexpr std::ptrdiff_t m_bSubFrame = 0x1F0; // bool
                constexpr std::ptrdiff_t m_bSetRopeSegmentID = 0x1F1; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CheckParticleForWater {
                constexpr std::ptrdiff_t m_flRadius = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x350; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputRemap = 0x358; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x4C8; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelBodyPart {
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderOmni2Light {
                constexpr std::ptrdiff_t m_nLightType = 0x228; // ParticleOmni2LightTypeChoiceList_t
                constexpr std::ptrdiff_t m_nMaxAllowed = 0x22C; // uint16
                constexpr std::ptrdiff_t m_vColorBlend = 0x230; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x8E8; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_nBrightnessUnit = 0x8EC; // ParticleLightUnitChoiceList_t
                constexpr std::ptrdiff_t m_flBrightnessLumens = 0x8F0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flBrightnessCandelas = 0xA60; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bCastShadows = 0xBD0; // bool
                constexpr std::ptrdiff_t m_bDynamicBounce = 0xBD1; // bool
                constexpr std::ptrdiff_t m_flBounceScale = 0xBD8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bFog = 0xD48; // bool
                constexpr std::ptrdiff_t m_flFogScale = 0xD50; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLuminaireRadius = 0xEC0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSkirt = 0x1030; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRange = 0x11A0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInnerConeAngle = 0x1310; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOuterConeAngle = 0x1480; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_hLightCookie = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bSphericalCookie = 0x15F8; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConnectParentParticleToNearest {
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nSecondControlPoint = 0x1DC; // int32
                constexpr std::ptrdiff_t m_bUseRadius = 0x1E0; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flParentRadiusScale = 0x358; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPAssignment_t {
                constexpr std::ptrdiff_t m_nCPNumber = 0x0; // int32
                constexpr std::ptrdiff_t m_Pos = 0x8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOrientationMode = 0x6C0; // ParticleOrientationSetMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitSkinnedPositionFromCPSnapshot {
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1E8; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1EC; // int32
                constexpr std::ptrdiff_t m_bRigid = 0x1F0; // bool
                constexpr std::ptrdiff_t m_bSetNormal = 0x1F1; // bool
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1F2; // bool
                constexpr std::ptrdiff_t m_flMinNormalVelocity = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flMaxNormalVelocity = 0x1F8; // float32
                constexpr std::ptrdiff_t m_nIndexType = 0x1FC; // SnapshotIndexType_t
                constexpr std::ptrdiff_t m_flReadIndex = 0x200; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flIncrement = 0x370; // float32
                constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x374; // int32
                constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x378; // int32
                constexpr std::ptrdiff_t m_flBoneVelocity = 0x37C; // float32
                constexpr std::ptrdiff_t m_flBoneVelocityMax = 0x380; // float32
                constexpr std::ptrdiff_t m_bCopyColor = 0x384; // bool
                constexpr std::ptrdiff_t m_bCopyAlpha = 0x385; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x386; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LagCompensation {
                constexpr std::ptrdiff_t m_nDesiredVelocityCP = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nLatencyCP = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nLatencyCPField = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nDesiredVelocityCPField = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CollideWithSelf {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinimumSpeed = 0x348; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_Noise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1E0; // float32
                constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x1E8; // bool
                constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeAndKillForTracers {
                constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flStartAlpha = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flEndAlpha = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ColorAdjustHSL {
                constexpr std::ptrdiff_t m_flHueAdjust = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flSaturationAdjust = 0x348; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLightnessAdjust = 0x4B8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleMassCalculationParameters {
                constexpr std::ptrdiff_t m_nMassMode = 0x0; // ParticleMassMode_t
                constexpr std::ptrdiff_t m_flRadius = 0x8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flNominalRadius = 0x178; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flScale = 0x2E8; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SequenceFromModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F4; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_AlphaDecay {
                constexpr std::ptrdiff_t m_flMinAlpha = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDensityGradientToVectorAttribute {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitVec {
                constexpr std::ptrdiff_t m_InputValue = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x898; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x89C; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bNormalizedOutput = 0x8A0; // bool
                constexpr std::ptrdiff_t m_bWritePreviousPosition = 0x8A1; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetHitboxToModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nForceInModel = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bEvenDistribution = 0x1E8; // bool
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1EC; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1F0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecDirectionBias = 0x8A8; // Vector
                constexpr std::ptrdiff_t m_bMaintainHitbox = 0x8B4; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x8B5; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x8B6; // char[128]
                constexpr std::ptrdiff_t m_flShellSize = 0x938; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementMoveAlongSkinnedCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1DC; // int32
                constexpr std::ptrdiff_t m_bSetNormal = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bSetRadius = 0x1E1; // bool
                constexpr std::ptrdiff_t m_flInterpolation = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flTValue = 0x358; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutput = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x350; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x354; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialRepulsionVelocity {
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1E0; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x260; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x264; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x270; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x27C; // int32
                constexpr std::ptrdiff_t m_bPerParticle = 0x280; // bool
                constexpr std::ptrdiff_t m_bTranslate = 0x281; // bool
                constexpr std::ptrdiff_t m_bProportional = 0x282; // bool
                constexpr std::ptrdiff_t m_flTraceLength = 0x284; // float32
                constexpr std::ptrdiff_t m_bPerParticleTR = 0x288; // bool
                constexpr std::ptrdiff_t m_bInherit = 0x289; // bool
                constexpr std::ptrdiff_t m_nChildCP = 0x28C; // int32
                constexpr std::ptrdiff_t m_nChildGroupID = 0x290; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClampScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x350; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToHMD {
                constexpr std::ptrdiff_t m_nCP1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_bOrientToHMD = 0x1F0; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DifferencePreviousParticle {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1F4; // bool
                constexpr std::ptrdiff_t m_bSetPreviousParticle = 0x1F5; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFieldFromVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // VectorFloatExpressionType_t
                constexpr std::ptrdiff_t m_vecInput1 = 0x1E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vecInput2 = 0x8A0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flLerp = 0xF58; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x10C8; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputCP = 0x1238; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x123C; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PercentageBetweenTransforms {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_TransformStart = 0x1F0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x258; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x2C0; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x2C4; // bool
                constexpr std::ptrdiff_t m_bRadialCheck = 0x2C5; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PlaneCull {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flDistance = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCullInside = 0x358; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelSequenceEndCap {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFromCPSnapshot {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x1E8; // CUtlString
                constexpr std::ptrdiff_t m_nAttributeToRead = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1F4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1F8; // int32
                constexpr std::ptrdiff_t m_bRandom = 0x1FC; // bool
                constexpr std::ptrdiff_t m_bReverse = 0x1FD; // bool
                constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x200; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nManualSnapshotIndex = 0x370; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nRandomSeed = 0x4E0; // int32
                constexpr std::ptrdiff_t m_bLocalSpaceAngles = 0x4E4; // bool
            }
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderCables {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x228; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x398; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecColorScale = 0x508; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xBC0; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_hMaterial = 0xBC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nTextureRepetitionMode = 0xBD0; // TextureRepetitionMode_t
                constexpr std::ptrdiff_t m_flTextureRepeatsPerSegment = 0xBD8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flTextureRepeatsCircumference = 0xD48; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flColorMapOffsetV = 0xEB8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flColorMapOffsetU = 0x1028; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flNormalMapOffsetV = 0x1198; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flNormalMapOffsetU = 0x1308; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDrawCableCaps = 0x1478; // bool
                constexpr std::ptrdiff_t m_flCapRoundness = 0x147C; // float32
                constexpr std::ptrdiff_t m_flCapOffsetAmount = 0x1480; // float32
                constexpr std::ptrdiff_t m_flTessScale = 0x1484; // float32
                constexpr std::ptrdiff_t m_nMinTesselation = 0x1488; // int32
                constexpr std::ptrdiff_t m_nMaxTesselation = 0x148C; // int32
                constexpr std::ptrdiff_t m_nRoundness = 0x1490; // int32
                constexpr std::ptrdiff_t m_nForceRoundnessFixed = 0x1494; // bool
                constexpr std::ptrdiff_t m_LightingTransform = 0x1498; // CParticleTransformInput
                constexpr std::ptrdiff_t m_MaterialFloatVars = 0x1500; // CUtlLeanVector<FloatInputMaterialVariable_t>
                constexpr std::ptrdiff_t m_MaterialVecVars = 0x1520; // CUtlLeanVector<VecInputMaterialVariable_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InheritVelocity {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flVelocityScale = 0x1E4; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToWaterSurface {
                constexpr std::ptrdiff_t m_nSourceCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nDestCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nFlowCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nActiveCP = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nActiveCPField = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flRetestRate = 0x1F8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bAdaptiveThreshold = 0x368; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionOffset {
                constexpr std::ptrdiff_t m_OffsetMin = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_OffsetMax = 0x898; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_TransformInput = 0xF50; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLocalCoords = 0xFB8; // bool
                constexpr std::ptrdiff_t m_bProportional = 0xFB9; // bool
                constexpr std::ptrdiff_t m_randomnessParameters = 0xFBC; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_NormalAlignToCP {
                constexpr std::ptrdiff_t m_transformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nControlPointAxis = 0x248; // ParticleControlPointAxis_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ShapeMatchingConstraint {
                constexpr std::ptrdiff_t m_flShapeRestorationTime = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetChildControlPoints {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bReverse = 0x358; // bool
                constexpr std::ptrdiff_t m_bSetOrientation = 0x359; // bool
                constexpr std::ptrdiff_t m_nOrientation = 0x35C; // ParticleOrientationType_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ChladniWave {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x630; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecWaveLength = 0x7A0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecHarmonics = 0xE58; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nSetMethod = 0x1510; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_nLocalSpaceControlPoint = 0x1514; // int32
                constexpr std::ptrdiff_t m_b3D = 0x1518; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDirectionToCPToVector {
                constexpr std::ptrdiff_t m_nCP = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flOffsetRot = 0x1E4; // float32
                constexpr std::ptrdiff_t m_vecOffsetAxis = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_bNormalize = 0x1F4; // bool
                constexpr std::ptrdiff_t m_nFieldStrength = 0x1F8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DriveCPFromGlobalSoundFloat {
                constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nOutputField = 0x1E4; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F4; // float32
                constexpr std::ptrdiff_t m_StackName = 0x1F8; // CUtlString
                constexpr std::ptrdiff_t m_OperatorName = 0x200; // CUtlString
                constexpr std::ptrdiff_t m_FieldName = 0x208; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ScreenSpacePositionOfTarget {
                constexpr std::ptrdiff_t m_vecTargetPosition = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bOututBehindness = 0x898; // bool
                constexpr std::ptrdiff_t m_nBehindFieldOutput = 0x89C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flBehindOutputRemap = 0x8A0; // CParticleRemapFloatInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RtEnvCull {
                constexpr std::ptrdiff_t m_vecTestDir = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_vecTestNormal = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_bCullOnMiss = 0x1F0; // bool
                constexpr std::ptrdiff_t m_bStickInsteadOfCull = 0x1F1; // bool
                constexpr std::ptrdiff_t m_RtEnvName = 0x1F2; // char[128]
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x274; // int32
                constexpr std::ptrdiff_t m_nComponent = 0x278; // int32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PinParticleToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_bOffsetLocal = 0x898; // bool
                constexpr std::ptrdiff_t m_nParticleSelection = 0x89C; // ParticleSelection_t
                constexpr std::ptrdiff_t m_nParticleNumber = 0x8A0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nPinBreakType = 0xA10; // ParticlePinDistance_t
                constexpr std::ptrdiff_t m_flBreakDistance = 0xA18; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flBreakSpeed = 0xB88; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAge = 0xCF8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nBreakControlPointNumber = 0xE68; // int32
                constexpr std::ptrdiff_t m_nBreakControlPointNumber2 = 0xE6C; // int32
                constexpr std::ptrdiff_t m_flBreakValue = 0xE70; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0xFE0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bRetainInitialVelocity = 0x1150; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPtoVector {
                constexpr std::ptrdiff_t m_nCPInput = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_vInputMin = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_vInputMax = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_vOutputMin = 0x1FC; // Vector
                constexpr std::ptrdiff_t m_vOutputMax = 0x208; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x214; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x218; // float32
                constexpr std::ptrdiff_t m_flInterpRate = 0x21C; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x220; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bOffset = 0x224; // bool
                constexpr std::ptrdiff_t m_bAccelerate = 0x225; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateParticleImpulse {
                constexpr std::ptrdiff_t m_InputRadius = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_InputMagnitude = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFalloffFunction = 0x4C0; // ParticleFalloffFunction_t
                constexpr std::ptrdiff_t m_InputFalloffExp = 0x4C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nImpulseType = 0x638; // ParticleImpulseType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DensityForce {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flForceScale = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flTargetDensity = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateInEpitrochoid {
                constexpr std::ptrdiff_t m_nComponent1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nComponent2 = 0x1E4; // int32
                constexpr std::ptrdiff_t m_TransformInput = 0x1E8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flParticleDensity = 0x250; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOffset = 0x3C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadius1 = 0x530; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flRadius2 = 0x6A0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bUseCount = 0x810; // bool
                constexpr std::ptrdiff_t m_bUseLocalCoords = 0x811; // bool
                constexpr std::ptrdiff_t m_bOffsetExistingPos = 0x812; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ConstrainDistanceToUserSpecifiedPath {
                constexpr std::ptrdiff_t m_fMinDistance = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flMaxDistance = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_bLoopedPath = 0x1E4; // bool
                constexpr std::ptrdiff_t m_pointList = 0x1E8; // CUtlVector<PointDefinitionWithTimeValues_t>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointPositions {
                constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bOrient = 0x1E1; // bool
                constexpr std::ptrdiff_t m_bSetOnce = 0x1E2; // bool
                constexpr std::ptrdiff_t m_nCP1 = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nCP2 = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nCP3 = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nCP4 = 0x1F0; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1F4; // Vector
                constexpr std::ptrdiff_t m_vecCP2Pos = 0x200; // Vector
                constexpr std::ptrdiff_t m_vecCP3Pos = 0x20C; // Vector
                constexpr std::ptrdiff_t m_vecCP4Pos = 0x218; // Vector
                constexpr std::ptrdiff_t m_nHeadLocation = 0x224; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetFloatAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1D8; // VectorFloatExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x898; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0xF50; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x10C0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x10C4; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementRotateParticleAroundAxis {
                constexpr std::ptrdiff_t m_vecRotAxis = 0x1D8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flRotRate = 0x890; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_TransformInput = 0xA00; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLocalSpace = 0xA68; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_IntraParticleForce {
                constexpr std::ptrdiff_t m_flAttractionMinDistance = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flAttractionMaxDistance = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flAttractionMaxStrength = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flRepulsionMinDistance = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flRepulsionMaxDistance = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flRepulsionMaxStrength = 0x1FC; // float32
                constexpr std::ptrdiff_t m_bUseAABB = 0x200; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x350; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x354; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_InputStrength = 0x358; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateOnModel {
                constexpr std::ptrdiff_t m_modelInput = 0x1E0; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x240; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nForceInModel = 0x2A8; // int32
                constexpr std::ptrdiff_t m_bScaleToVolume = 0x2AC; // bool
                constexpr std::ptrdiff_t m_bEvenDistribution = 0x2AD; // bool
                constexpr std::ptrdiff_t m_nDesiredHitbox = 0x2B0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nHitboxValueFromControlPointIndex = 0x420; // int32
                constexpr std::ptrdiff_t m_vecHitBoxScale = 0x428; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flBoneVelocity = 0xAE0; // float32
                constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0xAE4; // float32
                constexpr std::ptrdiff_t m_vecDirectionBias = 0xAE8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_HitboxSetName = 0x11A0; // char[128]
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1220; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1221; // bool
                constexpr std::ptrdiff_t m_bUseMesh = 0x1222; // bool
                constexpr std::ptrdiff_t m_flShellSize = 0x1228; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_InheritFromPeerSystem {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nGroupID = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PerParticleForce {
                constexpr std::ptrdiff_t m_flForceScale = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vForce = 0x358; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nCP = 0xA10; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomNamedModelMeshGroup {
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderProjected {
                constexpr std::ptrdiff_t m_bProjectCharacter = 0x228; // bool
                constexpr std::ptrdiff_t m_bProjectWorld = 0x229; // bool
                constexpr std::ptrdiff_t m_bProjectWater = 0x22A; // bool
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x22B; // bool
                constexpr std::ptrdiff_t m_bEnableProjectedDepthControls = 0x22C; // bool
                constexpr std::ptrdiff_t m_flMinProjectionDepth = 0x230; // float32
                constexpr std::ptrdiff_t m_flMaxProjectionDepth = 0x234; // float32
                constexpr std::ptrdiff_t m_vecProjectedMaterials = 0x238; // CUtlVector<RenderProjectedMaterial_t>
                constexpr std::ptrdiff_t m_flMaterialSelection = 0x250; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flAnimationTimeScale = 0x3C0; // float32
                constexpr std::ptrdiff_t m_bOrientToNormal = 0x3C4; // bool
                constexpr std::ptrdiff_t m_MaterialVars = 0x3C8; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_flRadiusScale = 0x3E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x550; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x6C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x830; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x838; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xEF0; // ParticleColorBlendType_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaxVelocity {
                constexpr std::ptrdiff_t m_flMaxVelocity = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMinVelocity = 0x348; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_VelocityFromNormal {
                constexpr std::ptrdiff_t m_fSpeedMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_fSpeedMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bIgnoreDt = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaintainEmitter {
                constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flStartTime = 0x350; // float32
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x358; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flEmissionRate = 0x4C8; // float32
                constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x4CC; // int32
                constexpr std::ptrdiff_t m_strSnapshotSubset = 0x4D0; // CUtlString
                constexpr std::ptrdiff_t m_bEmitInstantaneously = 0x4D8; // bool
                constexpr std::ptrdiff_t m_bFinalEmitOnStop = 0x4D9; // bool
                constexpr std::ptrdiff_t m_flScale = 0x4E0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionOffsetToCP {
                constexpr std::ptrdiff_t m_nControlPointNumberStart = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nControlPointNumberEnd = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapInitialTransformDirectionToRotation {
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x248; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOffsetRot = 0x24C; // float32
                constexpr std::ptrdiff_t m_nComponent = 0x250; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeAndKill {
                constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flStartAlpha = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flEndAlpha = 0x1EC; // float32
                constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1F0; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ColorInterpolate {
                constexpr std::ptrdiff_t m_ColorFade = 0x1D8; // Color
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flFadeEndTime = 0x1EC; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1F0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bEaseInOut = 0x1F4; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarSpline {
                constexpr std::ptrdiff_t m_RateMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flBias = 0x1F0; // float32
                constexpr std::ptrdiff_t m_nField = 0x220; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportionalOp = 0x224; // bool
                constexpr std::ptrdiff_t m_bEaseOut = 0x225; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelSequenceOnceTimed {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFromObjectScale {
                constexpr std::ptrdiff_t m_nCPInput = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MaintainSequentialPath {
                constexpr std::ptrdiff_t m_fMaxDistance = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flNumToAssign = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flCohesionStrength = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bUseParticleCount = 0x1E9; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1F0; // CPathParameters
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelBodyPartEndCap {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_StopAfterCPDuration {
                constexpr std::ptrdiff_t m_flDuration = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDestroyImmediately = 0x350; // bool
                constexpr std::ptrdiff_t m_bPlayEndCap = 0x351; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGeneralSpin {
                constexpr std::ptrdiff_t m_nSpinRateDegrees = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nSpinRateMinDegrees = 0x1DC; // int32
                constexpr std::ptrdiff_t m_fSpinRateStopTime = 0x1E4; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MParticleMaxVersion
            // MParticleReplacementOp
            // MGetKV3ClassDefaults
            namespace C_OP_LockToSavedSequentialPath {
                constexpr std::ptrdiff_t m_flFadeStart = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flFadeEnd = 0x1E0; // float32
                constexpr std::ptrdiff_t m_bCPPairs = 0x1E4; // bool
                constexpr std::ptrdiff_t m_PathParams = 0x1F0; // CPathParameters
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelElementToScalar {
                constexpr std::ptrdiff_t m_hModel = 0x1E0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_names = 0x1E8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_values = 0x200; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFieldInput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x21C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x220; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x224; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClampVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1E0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOutputMax = 0x898; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderStatusEffectCitadel {
                constexpr std::ptrdiff_t m_pTextureColorWarp = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureNormal = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureMetalness = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureRoughness = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureSelfIllum = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_pTextureDetail = 0x250; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IParticleSystemDefinition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WindForce {
                constexpr std::ptrdiff_t m_vForce = 0x1E8; // Vector
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetVariable {
                constexpr std::ptrdiff_t m_variableReference = 0x1E0; // CParticleVariableRef
                constexpr std::ptrdiff_t m_transformInput = 0x230; // CParticleTransformInput
                constexpr std::ptrdiff_t m_positionOffset = 0x298; // Vector
                constexpr std::ptrdiff_t m_rotationOffset = 0x2A4; // QAngle
                constexpr std::ptrdiff_t m_vecInput = 0x2B0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_floatInput = 0x968; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderStandardLight {
                constexpr std::ptrdiff_t m_nLightType = 0x228; // ParticleLightTypeChoiceList_t
                constexpr std::ptrdiff_t m_nMaxAllowed = 0x22C; // uint16
                constexpr std::ptrdiff_t m_vecColorScale = 0x230; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x8E8; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_flIntensity = 0x8F0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bCastShadows = 0xA60; // bool
                constexpr std::ptrdiff_t m_bDynamicBounce = 0xA61; // bool
                constexpr std::ptrdiff_t m_flBounceScale = 0xA68; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flTheta = 0xBD8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flPhi = 0xD48; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRadiusMultiplier = 0xEB8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAttenuationStyle = 0x1028; // StandardLightingAttenuationStyle_t
                constexpr std::ptrdiff_t m_flFalloffLinearity = 0x1030; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flFiftyPercentFalloff = 0x11A0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flZeroPercentFalloff = 0x1310; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0x1480; // bool
                constexpr std::ptrdiff_t m_bRenderSpecular = 0x1481; // bool
                constexpr std::ptrdiff_t m_lightCookie = 0x1488; // CUtlString
                constexpr std::ptrdiff_t m_nPriority = 0x1490; // int32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x1494; // ParticleLightFogLightingMode_t
                constexpr std::ptrdiff_t m_flFogContribution = 0x1498; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_nCapsuleLightBehavior = 0x1608; // ParticleLightBehaviorChoiceList_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x160C; // float32
                constexpr std::ptrdiff_t m_bReverseOrder = 0x1610; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x1611; // bool
                constexpr std::ptrdiff_t m_nPrevPntSource = 0x1614; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flMaxLength = 0x1618; // float32
                constexpr std::ptrdiff_t m_flMinLength = 0x161C; // float32
                constexpr std::ptrdiff_t m_bIgnoreDT = 0x1620; // bool
                constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x1624; // float32
                constexpr std::ptrdiff_t m_flLengthScale = 0x1628; // float32
                constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x162C; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_DistanceToTransform {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4C0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x630; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_TransformStart = 0x7A0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_bLOS = 0x808; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x809; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x88C; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x890; // float32
                constexpr std::ptrdiff_t m_flLOSScale = 0x894; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x898; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x89C; // bool
                constexpr std::ptrdiff_t m_bAdditive = 0x89D; // bool
                constexpr std::ptrdiff_t m_vecComponentScale = 0x8A0; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapControlPointOrientationToRotation {
                constexpr std::ptrdiff_t m_nCP = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOffsetRot = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nComponent = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToCenter {
                constexpr std::ptrdiff_t m_nCP1 = 0x1E0; // int32
                constexpr std::ptrdiff_t m_vecCP1Pos = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_bUseAvgParticlePos = 0x1F0; // bool
                constexpr std::ptrdiff_t m_nSetParent = 0x1F4; // ParticleParentSetMode_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapAverageScalarValuetoCP {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // SetStatisticExpressionType_t
                constexpr std::ptrdiff_t m_flDecimalPlaces = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x358; // int32
                constexpr std::ptrdiff_t m_nOutVectorField = 0x35C; // int32
                constexpr std::ptrdiff_t m_nField = 0x360; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutputRemap = 0x368; // CParticleRemapFloatInput
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDotProductToScalar {
                constexpr std::ptrdiff_t m_nInputCP1 = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nInputCP2 = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_bUseParticleVelocity = 0x1F4; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x1FC; // bool
                constexpr std::ptrdiff_t m_bUseParticleNormal = 0x1FD; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapCPtoCP {
                constexpr std::ptrdiff_t m_nInputControlPoint = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nInputField = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOutputField = 0x1EC; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1FC; // float32
                constexpr std::ptrdiff_t m_bDerivative = 0x200; // bool
                constexpr std::ptrdiff_t m_flInterpRate = 0x204; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointRotation {
                constexpr std::ptrdiff_t m_vecRotAxis = 0x1E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flRotRate = 0x898; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nCP = 0xA08; // int32
                constexpr std::ptrdiff_t m_nLocalCP = 0xA0C; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CurlNoiseForce {
                constexpr std::ptrdiff_t m_nNoiseType = 0x1E8; // ParticleDirectionNoiseType_t
                constexpr std::ptrdiff_t m_vecNoiseFreq = 0x1F0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecNoiseScale = 0x8A8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOffset = 0xF60; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecOffsetRate = 0x1618; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flWorleySeed = 0x1CD0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flWorleyJitter = 0x1E40; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_Orient2DRelToCP {
                constexpr std::ptrdiff_t m_nCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRotOffset = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetSimulationRate {
                constexpr std::ptrdiff_t m_flSimulationScale = 0x1E0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_FadeIn {
                constexpr std::ptrdiff_t m_flFadeInTimeMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFadeInTimeMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flFadeInTimeExp = 0x1E0; // float32
                constexpr std::ptrdiff_t m_bProportional = 0x1E4; // bool
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderScreenShake {
                constexpr std::ptrdiff_t m_flDurationScale = 0x228; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x22C; // float32
                constexpr std::ptrdiff_t m_flFrequencyScale = 0x230; // float32
                constexpr std::ptrdiff_t m_flAmplitudeScale = 0x234; // float32
                constexpr std::ptrdiff_t m_nRadiusField = 0x238; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nDurationField = 0x23C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFrequencyField = 0x240; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAmplitudeField = 0x244; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFilterCP = 0x248; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapBoundingVolumetoCP {
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F0; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_HSVShiftToCP {
                constexpr std::ptrdiff_t m_nColorCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nColorGemEnableCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_DefaultHSVColor = 0x1EC; // Color
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapVectorToRotations {
                constexpr std::ptrdiff_t m_vecInput = 0x1D8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecRotation = 0x890; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_GlobalScale {
                constexpr std::ptrdiff_t m_flScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bScaleRadius = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bScalePosition = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bScaleVelocity = 0x1EE; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RadiusFromCPObject {
                constexpr std::ptrdiff_t m_nControlPoint = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialVelocityFromHitbox {
                constexpr std::ptrdiff_t m_flVelocityMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flVelocityMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1EC; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x26C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutput = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1EC; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F0; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointFieldToWater {
                constexpr std::ptrdiff_t m_nSourceCP = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nDestCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nCPField = 0x1E8; // int32
            }
            // Parent: None
            // Field count: 9
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
                constexpr std::ptrdiff_t m_TextureControls = 0x1A8; // TextureControls_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_TimeVaryingForce {
                constexpr std::ptrdiff_t m_flStartLerpTime = 0x1E8; // float32
                constexpr std::ptrdiff_t m_StartingForce = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_flEndLerpTime = 0x1F8; // float32
                constexpr std::ptrdiff_t m_EndingForce = 0x1FC; // Vector
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetCPOrientationToGroundNormal {
                constexpr std::ptrdiff_t m_flInterpRate = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flTraceOffset = 0x1E4; // float32
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x1E8; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x268; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_nInputCP = 0x26C; // int32
                constexpr std::ptrdiff_t m_nOutputCP = 0x270; // int32
                constexpr std::ptrdiff_t m_bIncludeWater = 0x280; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SnapshotSkinToBones {
                constexpr std::ptrdiff_t m_bTransformNormals = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bTransformRadii = 0x1D9; // bool
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1DC; // int32
                constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flJumpThreshold = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateWithinSphereTransform {
                constexpr std::ptrdiff_t m_fRadiusMin = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fRadiusMax = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecDistanceBias = 0x4C0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecDistanceBiasAbs = 0xB78; // Vector
                constexpr std::ptrdiff_t m_TransformInput = 0xB88; // CParticleTransformInput
                constexpr std::ptrdiff_t m_fSpeedMin = 0xBF0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedMax = 0xD60; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_fSpeedRandExp = 0xED0; // float32
                constexpr std::ptrdiff_t m_bLocalCoords = 0xED4; // bool
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0xED8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x1590; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1C48; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldVelocity = 0x1C4C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RadiusDecay {
                constexpr std::ptrdiff_t m_flMinRadius = 0x1D8; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelBodyPartToScalar {
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapScalarToVector {
                constexpr std::ptrdiff_t m_nFieldInput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1EC; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1FC; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x208; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x20C; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x210; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x214; // int32
                constexpr std::ptrdiff_t m_bLocalCoords = 0x218; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x21C; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitialSequenceFromModel {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1FC; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_NoiseEmitter {
                constexpr std::ptrdiff_t m_flEmissionDuration = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flEmissionScale = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1F0; // int32
                constexpr std::ptrdiff_t m_nWorldNoisePoint = 0x1F4; // int32
                constexpr std::ptrdiff_t m_bAbsVal = 0x1F8; // bool
                constexpr std::ptrdiff_t m_bAbsValInv = 0x1F9; // bool
                constexpr std::ptrdiff_t m_flOffset = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x200; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x204; // float32
                constexpr std::ptrdiff_t m_flNoiseScale = 0x208; // float32
                constexpr std::ptrdiff_t m_flWorldNoiseScale = 0x20C; // float32
                constexpr std::ptrdiff_t m_vecOffsetLoc = 0x210; // Vector
                constexpr std::ptrdiff_t m_flWorldTimeScale = 0x21C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionInitializer {
                constexpr std::ptrdiff_t m_nAssociatedEmitterIndex = 0x1D8; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SelectivelyEnableChildren {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nFirstChild = 0x350; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x4C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x630; // bool
                constexpr std::ptrdiff_t m_bDestroyImmediately = 0x631; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelReference_t {
                constexpr std::ptrdiff_t m_model = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_flRelativeProbabilityOfSpawn = 0x8; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PlanarConstraint {
                constexpr std::ptrdiff_t m_PointOnPlane = 0x1D8; // Vector
                constexpr std::ptrdiff_t m_PlaneNormal = 0x1E4; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1F0; // int32
                constexpr std::ptrdiff_t m_bGlobalOrigin = 0x1F4; // bool
                constexpr std::ptrdiff_t m_bGlobalNormal = 0x1F5; // bool
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMaximumDistanceToCP = 0x368; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUseOldCode = 0x4D8; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateFromCPs {
                constexpr std::ptrdiff_t m_nIncrement = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nMinCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nMaxCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nDynamicCPCount = 0x1F0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LockPoints {
                constexpr std::ptrdiff_t m_nMinCol = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nMaxCol = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nMinRow = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nMaxRow = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nControlPoint = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flBlendValue = 0x1EC; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_CreateSpiralSphere {
                constexpr std::ptrdiff_t m_TransformInput = 0x1E0; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flDensity = 0x248; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialRadius = 0x3B8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x528; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x698; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bUseParticleCount = 0x808; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CPVelocityForce {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E8; // int32
                constexpr std::ptrdiff_t m_flScale = 0x1F0; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapNamedModelElementEndCap {
                constexpr std::ptrdiff_t m_hModel = 0x1D8; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_inNames = 0x1E0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_outNames = 0x1F8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_fallbackNames = 0x210; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bModelFromRenderer = 0x228; // bool
                constexpr std::ptrdiff_t m_nFieldInput = 0x22C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x230; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ScaleVelocity {
                constexpr std::ptrdiff_t m_vecScale = 0x1E0; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MoveToHitbox {
                constexpr std::ptrdiff_t m_modelInput = 0x1D8; // CParticleModelInput
                constexpr std::ptrdiff_t m_transformInput = 0x238; // CParticleTransformInput
                constexpr std::ptrdiff_t m_flLifeTimeLerpStart = 0x2A4; // float32
                constexpr std::ptrdiff_t m_flLifeTimeLerpEnd = 0x2A8; // float32
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x2AC; // float32
                constexpr std::ptrdiff_t m_HitboxSetName = 0x2B0; // char[128]
                constexpr std::ptrdiff_t m_bUseBones = 0x330; // bool
                constexpr std::ptrdiff_t m_nLerpType = 0x334; // HitboxLerpType_t
                constexpr std::ptrdiff_t m_flInterpolation = 0x338; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PinRopeSegmentParticleToParent {
                constexpr std::ptrdiff_t m_nParticleSelection = 0x1D8; // ParticleSelection_t
                constexpr std::ptrdiff_t m_nParticleNumber = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flInterpolation = 0x350; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PointList {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_pointList = 0x1E8; // CUtlVector<PointDefinition_t>
                constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x200; // bool
                constexpr std::ptrdiff_t m_bClosedLoop = 0x201; // bool
                constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x204; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpToOtherAttribute {
                constexpr std::ptrdiff_t m_flInterpolation = 0x1D8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nFieldInputFrom = 0x348; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldInput = 0x34C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x350; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RandomColor {
                constexpr std::ptrdiff_t m_ColorMin = 0x1FC; // Color
                constexpr std::ptrdiff_t m_ColorMax = 0x200; // Color
                constexpr std::ptrdiff_t m_TintMin = 0x204; // Color
                constexpr std::ptrdiff_t m_TintMax = 0x208; // Color
                constexpr std::ptrdiff_t m_flTintPerc = 0x20C; // float32
                constexpr std::ptrdiff_t m_flUpdateThreshold = 0x210; // float32
                constexpr std::ptrdiff_t m_nTintCP = 0x214; // int32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nTintBlendMode = 0x21C; // ParticleColorBlendMode_t
                constexpr std::ptrdiff_t m_flLightAmplification = 0x220; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetGravityToCP {
                constexpr std::ptrdiff_t m_nCPInput = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1E4; // int32
                constexpr std::ptrdiff_t m_flScale = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bSetPosition = 0x358; // bool
                constexpr std::ptrdiff_t m_bSetOrientation = 0x359; // bool
                constexpr std::ptrdiff_t m_bSetZDown = 0x35A; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nInputMax = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1FC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x200; // bool
                constexpr std::ptrdiff_t m_bInvert = 0x201; // bool
                constexpr std::ptrdiff_t m_bWrap = 0x202; // bool
                constexpr std::ptrdiff_t m_flRemapBias = 0x204; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InheritFromParentParticles {
                constexpr std::ptrdiff_t m_flScale = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nIncrement = 0x1E8; // int32
                constexpr std::ptrdiff_t m_bRandomDistribution = 0x1EC; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1F0; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarLinearSimple {
                constexpr std::ptrdiff_t m_Rate = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nField = 0x210; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ChaoticAttractor {
                constexpr std::ptrdiff_t m_flAParm = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flBParm = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flCParm = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flDParm = 0x1EC; // float32
                constexpr std::ptrdiff_t m_flScale = 0x1F0; // float32
                constexpr std::ptrdiff_t m_flSpeedMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flSpeedMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_nBaseCP = 0x1FC; // int32
                constexpr std::ptrdiff_t m_bUniformSpeed = 0x200; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_MovementRigidAttachToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nScaleCPField = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bOffsetLocal = 0x1EC; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderFlattenGrass {
                constexpr std::ptrdiff_t m_flFlattenStrength = 0x228; // float32
                constexpr std::ptrdiff_t m_nStrengthFieldOverride = 0x22C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRadiusScale = 0x230; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderLightBeam {
                constexpr std::ptrdiff_t m_nMaxAllowed = 0x228; // uint16
                constexpr std::ptrdiff_t m_vColorBlend = 0x230; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x8E8; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_flBrightnessLumensPerMeter = 0x8F0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bCastShadows = 0xA60; // bool
                constexpr std::ptrdiff_t m_bDynamicBounce = 0xA61; // bool
                constexpr std::ptrdiff_t m_flBounceScale = 0xA68; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flSkirt = 0xBD8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRange = 0xD48; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flThickness = 0xEB8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EnableChildrenFromParentParticleCount {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFirstChild = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bDisableChildren = 0x358; // bool
                constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x359; // bool
                constexpr std::ptrdiff_t m_bDestroyImmediately = 0x35A; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_DistanceToCPInit {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1E8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInputMax = 0x358; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4C8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x638; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nStartCP = 0x7A8; // int32
                constexpr std::ptrdiff_t m_bLOS = 0x7AC; // bool
                constexpr std::ptrdiff_t m_CollisionGroupName = 0x7AD; // char[128]
                constexpr std::ptrdiff_t m_nTraceSet = 0x830; // ParticleTraceSet_t
                constexpr std::ptrdiff_t m_flMaxTraceLength = 0x838; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLOSScale = 0x9A8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x9AC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x9B0; // bool
                constexpr std::ptrdiff_t m_vecDistanceScale = 0x9B4; // Vector
                constexpr std::ptrdiff_t m_flRemapBias = 0x9C0; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CReplicationParameters {
                constexpr std::ptrdiff_t m_nReplicationMode = 0x0; // ParticleReplicationMode_t
                constexpr std::ptrdiff_t m_bScaleChildParticleRadii = 0x4; // bool
                constexpr std::ptrdiff_t m_flMinRandomRadiusScale = 0x8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxRandomRadiusScale = 0x178; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vMinRandomDisplacement = 0x2E8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_vMaxRandomDisplacement = 0x9A0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flModellingScale = 0x1058; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_EndCapDecay {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ForceBasedOnDistanceToPlane {
                constexpr std::ptrdiff_t m_flMinDist = 0x1E8; // float32
                constexpr std::ptrdiff_t m_vecForceAtMinDist = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_flMaxDist = 0x1F8; // float32
                constexpr std::ptrdiff_t m_vecForceAtMaxDist = 0x1FC; // Vector
                constexpr std::ptrdiff_t m_vecPlaneNormal = 0x208; // Vector
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x214; // int32
                constexpr std::ptrdiff_t m_flExponent = 0x218; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapDensityToVector {
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1D8; // float32
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1DC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flDensityMin = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flDensityMax = 0x1E4; // float32
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1F4; // Vector
                constexpr std::ptrdiff_t m_bUseParentDensity = 0x200; // bool
                constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x204; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleControlPointConfiguration_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_drivers = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                constexpr std::ptrdiff_t m_previewState = 0x20; // ParticlePreviewState_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetRigidAttachment {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nFieldInput = 0x1E4; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1E8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bLocalSpace = 0x1EC; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nVariableField = 0x8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flScale = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionConstraint {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapSpeed {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x1E8; // float32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1EC; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1F0; // bool
            }
            // Parent: None
            // Field count: 56
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderModels {
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x228; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x229; // bool
                constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x22A; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x22B; // bool
                constexpr std::ptrdiff_t m_ModelList = 0x230; // CUtlVector<ModelReference_t>
                constexpr std::ptrdiff_t m_nBodyGroupField = 0x248; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSubModelField = 0x24C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bIgnoreNormal = 0x250; // bool
                constexpr std::ptrdiff_t m_bOrientZ = 0x251; // bool
                constexpr std::ptrdiff_t m_bCenterOffset = 0x252; // bool
                constexpr std::ptrdiff_t m_vecLocalOffset = 0x258; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecLocalRotation = 0x910; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bIgnoreRadius = 0xFC8; // bool
                constexpr std::ptrdiff_t m_nModelScaleCP = 0xFCC; // int32
                constexpr std::ptrdiff_t m_vecComponentScale = 0xFD0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bLocalScale = 0x1688; // bool
                constexpr std::ptrdiff_t m_nSizeCullBloat = 0x168C; // int32
                constexpr std::ptrdiff_t m_bAnimated = 0x1690; // bool
                constexpr std::ptrdiff_t m_flAnimationRate = 0x1698; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_bScaleAnimationRate = 0x1808; // bool
                constexpr std::ptrdiff_t m_bForceLoopingAnimation = 0x1809; // bool
                constexpr std::ptrdiff_t m_bResetAnimOnStop = 0x180A; // bool
                constexpr std::ptrdiff_t m_bManualAnimFrame = 0x180B; // bool
                constexpr std::ptrdiff_t m_nAnimationScaleField = 0x180C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nAnimationField = 0x1810; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nManualFrameField = 0x1814; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_ActivityName = 0x1818; // char[256]
                constexpr std::ptrdiff_t m_SequenceName = 0x1918; // char[256]
                constexpr std::ptrdiff_t m_bEnableClothSimulation = 0x1A18; // bool
                constexpr std::ptrdiff_t m_bDisableClothGroundCollision = 0x1A19; // bool
                constexpr std::ptrdiff_t m_ClothEffectName = 0x1A1A; // char[64]
                constexpr std::ptrdiff_t m_hOverrideMaterial = 0x1A60; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bOverrideTranslucentMaterials = 0x1A68; // bool
                constexpr std::ptrdiff_t m_nSkin = 0x1A70; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_MaterialVars = 0x1BE0; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_flRenderFilter = 0x1BF8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flManualModelSelection = 0x1D68; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_modelInput = 0x1ED8; // CParticleModelInput
                constexpr std::ptrdiff_t m_nLOD = 0x1F38; // int32
                constexpr std::ptrdiff_t m_EconSlotName = 0x1F3C; // char[256]
                constexpr std::ptrdiff_t m_bOriginalModel = 0x203C; // bool
                constexpr std::ptrdiff_t m_bSuppressTint = 0x203D; // bool
                constexpr std::ptrdiff_t m_nSubModelFieldType = 0x2040; // RenderModelSubModelFieldType_t
                constexpr std::ptrdiff_t m_bDisableShadows = 0x2044; // bool
                constexpr std::ptrdiff_t m_bDisableDepthPrepass = 0x2045; // bool
                constexpr std::ptrdiff_t m_bAcceptsDecals = 0x2046; // bool
                constexpr std::ptrdiff_t m_bForceDrawInterlevedWithSiblings = 0x2047; // bool
                constexpr std::ptrdiff_t m_bDoNotDrawInParticlePass = 0x2048; // bool
                constexpr std::ptrdiff_t m_bAllowApproximateTransforms = 0x2049; // bool
                constexpr std::ptrdiff_t m_szRenderAttribute = 0x204A; // char[260]
                constexpr std::ptrdiff_t m_flRadiusScale = 0x2150; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAlphaScale = 0x22C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flRollScale = 0x2430; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nAlpha2Field = 0x25A0; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecColorScale = 0x25A8; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0x2C60; // ParticleColorBlendType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderClientPhysicsImpulse {
                constexpr std::ptrdiff_t m_flRadius = 0x228; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flMagnitude = 0x398; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nSimIdFilter = 0x508; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParticleFunctionEmitter {
                constexpr std::ptrdiff_t m_nEmitterIndex = 0x1D8; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapNamedModelMeshGroupToScalar {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointOrientationToCPVelocity {
                constexpr std::ptrdiff_t m_nCPInput = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPOutput = 0x1E4; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RopeSpringConstraint {
                constexpr std::ptrdiff_t m_flRestLength = 0x1D8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMinDistance = 0x348; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flMaxDistance = 0x4B8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flAdjustmentScale = 0x628; // float32
                constexpr std::ptrdiff_t m_flInitialRestingLength = 0x630; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_PositionWarpScalar {
                constexpr std::ptrdiff_t m_vecWarpMin = 0x1E0; // Vector
                constexpr std::ptrdiff_t m_vecWarpMax = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_InputValue = 0x1F8; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flPrevPosScale = 0x368; // float32
                constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x36C; // int32
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x370; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ForceControlPointStub {
                constexpr std::ptrdiff_t m_ControlPoint = 0x1E0; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_VectorNoise {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecOutputMin = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_vecOutputMax = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1F4; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x1F8; // bool
                constexpr std::ptrdiff_t m_bOffset = 0x1F9; // bool
                constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1FC; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapParticleCountToScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nInputMin = 0x1E0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nInputMax = 0x350; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMin = 0x4C0; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flOutputMax = 0x630; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bActiveRange = 0x7A0; // bool
                constexpr std::ptrdiff_t m_nSetMethod = 0x7A4; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_QuantizeFloat {
                constexpr std::ptrdiff_t m_InputValue = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x350; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RemapModelVolumetoCP {
                constexpr std::ptrdiff_t m_nBBoxType = 0x1E0; // BBoxVolumeType_t
                constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOutControlPointMaxNumber = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nField = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flInputMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x200; // float32
                constexpr std::ptrdiff_t m_bBBoxOnly = 0x204; // bool
                constexpr std::ptrdiff_t m_bCubeRoot = 0x205; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetToCP {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1D8; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_bOffsetLocal = 0x1E8; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParticleControlPointDriver_t {
                constexpr std::ptrdiff_t m_iControlPoint = 0x0; // ParticleParamID_t
                constexpr std::ptrdiff_t m_iAttachType = 0x10; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_vecOffset = 0x20; // Vector
                constexpr std::ptrdiff_t m_angOffset = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_entityName = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ParentVortices {
                constexpr std::ptrdiff_t m_flForceScale = 0x1E8; // float32
                constexpr std::ptrdiff_t m_vecTwistAxis = 0x1EC; // Vector
                constexpr std::ptrdiff_t m_bFlipBasedOnYaw = 0x1F8; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetControlPointToCPVelocity {
                constexpr std::ptrdiff_t m_nCPInput = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nCPOutputVel = 0x1E4; // int32
                constexpr std::ptrdiff_t m_bNormalize = 0x1E8; // bool
                constexpr std::ptrdiff_t m_nCPOutputMag = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nCPField = 0x1F0; // int32
                constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x1F8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ClientPhysics {
                constexpr std::ptrdiff_t m_strPhysicsType = 0x228; // CUtlString
                constexpr std::ptrdiff_t m_bStartAsleep = 0x230; // bool
                constexpr std::ptrdiff_t m_flPlayerWakeRadius = 0x238; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_flVehicleWakeRadius = 0x3A8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bUseHighQualitySimulation = 0x518; // bool
                constexpr std::ptrdiff_t m_nMaxParticleCount = 0x51C; // int32
                constexpr std::ptrdiff_t m_bRespectExclusionVolumes = 0x520; // bool
                constexpr std::ptrdiff_t m_bKillParticles = 0x521; // bool
                constexpr std::ptrdiff_t m_bDeleteSim = 0x522; // bool
                constexpr std::ptrdiff_t m_nControlPoint = 0x524; // int32
                constexpr std::ptrdiff_t m_nForcedSimId = 0x528; // int32
                constexpr std::ptrdiff_t m_nColorBlendType = 0x52C; // ParticleColorBlendType_t
                constexpr std::ptrdiff_t m_nForcedStatusEffects = 0x530; // ParticleAttrBoxFlags_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SpinYaw {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointDefinitionWithTimeValues_t {
                constexpr std::ptrdiff_t m_flTimeDuration = 0x14; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderProjectedMaterial_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SetFloatAttributeToVectorExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1E0; // VectorFloatExpressionType_t
                constexpr std::ptrdiff_t m_vInput1 = 0x1E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vInput2 = 0x8A0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0xF58; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x10C8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x10CC; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_ExternalWindForce {
                constexpr std::ptrdiff_t m_vecSamplePosition = 0x1E8; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_vecScale = 0x8A0; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bSampleWind = 0xF58; // bool
                constexpr std::ptrdiff_t m_bSampleWater = 0xF59; // bool
                constexpr std::ptrdiff_t m_bDampenNearWaterPlane = 0xF5A; // bool
                constexpr std::ptrdiff_t m_bSampleGravity = 0xF5B; // bool
                constexpr std::ptrdiff_t m_vecGravityForce = 0xF60; // CPerParticleVecInput
                constexpr std::ptrdiff_t m_bUseBasicMovementGravity = 0x1618; // bool
                constexpr std::ptrdiff_t m_flLocalGravityScale = 0x1620; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flLocalBuoyancyScale = 0x1790; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_vecBuoyancyForce = 0x1900; // CPerParticleVecInput
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_ModelCull {
                constexpr std::ptrdiff_t m_nControlPointNumber = 0x1E0; // int32
                constexpr std::ptrdiff_t m_bBoundBox = 0x1E4; // bool
                constexpr std::ptrdiff_t m_bCullOutside = 0x1E5; // bool
                constexpr std::ptrdiff_t m_bUseBones = 0x1E6; // bool
                constexpr std::ptrdiff_t m_HitboxSetName = 0x1E7; // char[128]
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderSprites {
                constexpr std::ptrdiff_t m_nSequenceOverride = 0x2DF0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bSequenceNumbersAreRawSequenceIndices = 0x2F60; // bool
                constexpr std::ptrdiff_t m_nOrientationType = 0x2F64; // ParticleOrientationChoiceList_t
                constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x2F68; // int32
                constexpr std::ptrdiff_t m_bUseYawWithNormalAligned = 0x2F6C; // bool
                constexpr std::ptrdiff_t m_flMinSize = 0x2F70; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flMaxSize = 0x30E0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flAlphaAdjustWithSizeAdjust = 0x3250; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flStartFadeSize = 0x33C0; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flEndFadeSize = 0x3530; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flStartFadeDot = 0x36A0; // float32
                constexpr std::ptrdiff_t m_flEndFadeDot = 0x36A4; // float32
                constexpr std::ptrdiff_t m_bDistanceAlpha = 0x36A8; // bool
                constexpr std::ptrdiff_t m_bSoftEdges = 0x36A9; // bool
                constexpr std::ptrdiff_t m_flEdgeSoftnessStart = 0x36AC; // float32
                constexpr std::ptrdiff_t m_flEdgeSoftnessEnd = 0x36B0; // float32
                constexpr std::ptrdiff_t m_bOutline = 0x36B4; // bool
                constexpr std::ptrdiff_t m_OutlineColor = 0x36B5; // Color
                constexpr std::ptrdiff_t m_nOutlineAlpha = 0x36BC; // int32
                constexpr std::ptrdiff_t m_flOutlineStart0 = 0x36C0; // float32
                constexpr std::ptrdiff_t m_flOutlineStart1 = 0x36C4; // float32
                constexpr std::ptrdiff_t m_flOutlineEnd0 = 0x36C8; // float32
                constexpr std::ptrdiff_t m_flOutlineEnd1 = 0x36CC; // float32
                constexpr std::ptrdiff_t m_nLightingMode = 0x36D0; // ParticleLightingQuality_t
                constexpr std::ptrdiff_t m_vecLightingOverride = 0x36D8; // CParticleCollectionRendererVecInput
                constexpr std::ptrdiff_t m_flLightingTessellation = 0x3D90; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_flLightingDirectionality = 0x3F00; // CParticleCollectionRendererFloatInput
                constexpr std::ptrdiff_t m_bParticleShadows = 0x4070; // bool
                constexpr std::ptrdiff_t m_flShadowDensity = 0x4074; // float32
                constexpr std::ptrdiff_t m_replicationParameters = 0x4078; // CReplicationParameters
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_PercentageBetweenTransformLerpCPs {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flInputMin = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1E0; // float32
                constexpr std::ptrdiff_t m_TransformStart = 0x1E8; // CParticleTransformInput
                constexpr std::ptrdiff_t m_TransformEnd = 0x250; // CParticleTransformInput
                constexpr std::ptrdiff_t m_nOutputStartCP = 0x2B8; // int32
                constexpr std::ptrdiff_t m_nOutputStartField = 0x2BC; // int32
                constexpr std::ptrdiff_t m_nOutputEndCP = 0x2C0; // int32
                constexpr std::ptrdiff_t m_nOutputEndField = 0x2C4; // int32
                constexpr std::ptrdiff_t m_nSetMethod = 0x2C8; // ParticleSetMethod_t
                constexpr std::ptrdiff_t m_bActiveRange = 0x2CC; // bool
                constexpr std::ptrdiff_t m_bRadialCheck = 0x2CD; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetPerChildControlPoint {
                constexpr std::ptrdiff_t m_nChildGroupID = 0x1D8; // int32
                constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1DC; // int32
                constexpr std::ptrdiff_t m_nNumControlPoints = 0x1E0; // int32
                constexpr std::ptrdiff_t m_nParticleIncrement = 0x1E8; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x358; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_bSetOrientation = 0x4C8; // bool
                constexpr std::ptrdiff_t m_nOrientationField = 0x4CC; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x4D0; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderTreeShake {
                constexpr std::ptrdiff_t m_flPeakStrength = 0x228; // float32
                constexpr std::ptrdiff_t m_nPeakStrengthFieldOverride = 0x22C; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flRadius = 0x230; // float32
                constexpr std::ptrdiff_t m_nRadiusFieldOverride = 0x234; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flShakeDuration = 0x238; // float32
                constexpr std::ptrdiff_t m_flTransitionTime = 0x23C; // float32
                constexpr std::ptrdiff_t m_flTwistAmount = 0x240; // float32
                constexpr std::ptrdiff_t m_flRadialAmount = 0x244; // float32
                constexpr std::ptrdiff_t m_flControlPointOrientationAmount = 0x248; // float32
                constexpr std::ptrdiff_t m_nControlPointForLinearDirection = 0x24C; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_WorldCollideConstraint {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_SetAttributeToScalarExpression {
                constexpr std::ptrdiff_t m_nExpression = 0x1D8; // ScalarExpressionType_t
                constexpr std::ptrdiff_t m_flInput1 = 0x1E0; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flInput2 = 0x350; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_flOutputRemap = 0x4C0; // CParticleRemapFloatInput
                constexpr std::ptrdiff_t m_nOutputField = 0x630; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_nSetMethod = 0x634; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CycleScalar {
                constexpr std::ptrdiff_t m_nDestField = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flStartValue = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flEndValue = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flCycleTime = 0x1E4; // float32
                constexpr std::ptrdiff_t m_bDoNotRepeatCycle = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bSynchronizeParticles = 0x1E9; // bool
                constexpr std::ptrdiff_t m_nCPScale = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nCPFieldMin = 0x1F0; // int32
                constexpr std::ptrdiff_t m_nCPFieldMax = 0x1F4; // int32
                constexpr std::ptrdiff_t m_nSetMethod = 0x1F8; // ParticleSetMethod_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RenderMaterialProxy {
                constexpr std::ptrdiff_t m_nMaterialControlPoint = 0x228; // int32
                constexpr std::ptrdiff_t m_nProxyType = 0x22C; // MaterialProxyType_t
                constexpr std::ptrdiff_t m_MaterialVars = 0x230; // CUtlVector<MaterialVariable_t>
                constexpr std::ptrdiff_t m_hOverrideMaterial = 0x248; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flMaterialOverrideEnabled = 0x250; // CParticleCollectionFloatInput
                constexpr std::ptrdiff_t m_vecColorScale = 0x3C0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_flAlpha = 0xA78; // CPerParticleFloatInput
                constexpr std::ptrdiff_t m_nColorBlendType = 0xBE8; // ParticleColorBlendType_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FloatInputMaterialVariable_t {
                constexpr std::ptrdiff_t m_strVariable = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flInput = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RampScalarLinear {
                constexpr std::ptrdiff_t m_RateMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_RateMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flStartTime_min = 0x1E0; // float32
                constexpr std::ptrdiff_t m_flStartTime_max = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flEndTime_min = 0x1E8; // float32
                constexpr std::ptrdiff_t m_flEndTime_max = 0x1EC; // float32
                constexpr std::ptrdiff_t m_nField = 0x210; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_bProportionalOp = 0x214; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_RotateVector {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_vecRotAxisMin = 0x1DC; // Vector
                constexpr std::ptrdiff_t m_vecRotAxisMax = 0x1E8; // Vector
                constexpr std::ptrdiff_t m_flRotRateMin = 0x1F4; // float32
                constexpr std::ptrdiff_t m_flRotRateMax = 0x1F8; // float32
                constexpr std::ptrdiff_t m_bNormalize = 0x1FC; // bool
                constexpr std::ptrdiff_t m_flScale = 0x200; // CPerParticleFloatInput
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_InitVecCollection {
                constexpr std::ptrdiff_t m_InputValue = 0x1E0; // CParticleCollectionVecInput
                constexpr std::ptrdiff_t m_nOutputField = 0x898; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_INIT_SequenceFromCP {
                constexpr std::ptrdiff_t m_bKillUnused = 0x1E0; // bool
                constexpr std::ptrdiff_t m_bRadiusScale = 0x1E1; // bool
                constexpr std::ptrdiff_t m_nCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_vecOffset = 0x1E8; // Vector
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_CPOffsetToPercentageBetweenCPs {
                constexpr std::ptrdiff_t m_flInputMin = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flInputBias = 0x1E0; // float32
                constexpr std::ptrdiff_t m_nStartCP = 0x1E4; // int32
                constexpr std::ptrdiff_t m_nEndCP = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOffsetCP = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nOuputCP = 0x1F0; // int32
                constexpr std::ptrdiff_t m_nInputCP = 0x1F4; // int32
                constexpr std::ptrdiff_t m_bRadialCheck = 0x1F8; // bool
                constexpr std::ptrdiff_t m_bScaleOffset = 0x1F9; // bool
                constexpr std::ptrdiff_t m_vecOffset = 0x1FC; // Vector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_OP_LerpEndCapScalar {
                constexpr std::ptrdiff_t m_nFieldOutput = 0x1D8; // ParticleAttributeIndex_t
                constexpr std::ptrdiff_t m_flOutput = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flLerpTime = 0x1E0; // float32
            }
        }
    }
}
