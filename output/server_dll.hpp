// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-01 03:08:20.812145800 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 944
        // Enum count: 179
        namespace server_dll {
            // Alignment: 4
            // Member count: 4
            enum class CLogicBranchList__LogicBranchListenerLastState_t : uint32_t {
                LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
                LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
                LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
                LOGIC_BRANCH_LISTENER_MIXED = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class CFuncMover__Move_t : uint32_t {
                MOVE_LOOP = 0x0,
                MOVE_OSCILLATE = 0x1,
                MOVE_STOP_AT_END = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class CFuncRotator__Rotate_t : uint32_t {
                ROTATE_LOOP = 0x0,
                ROTATE_OSCILLATE = 0x1,
                ROTATE_STOP_AT_END = 0x2,
                ROTATE_LOOK_AT_TARGET = 0x3,
                ROTATE_LOOK_AT_TARGET_ONLY_YAW = 0x4,
                ROTATE_RETURN_TO_INITIAL_ORIENTATION = 0x5
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class CPhysicsProp__CrateType_t : uint32_t {
                CRATE_SPECIFIC_ITEM = 0x0,
                CRATE_TYPE_COUNT = 0x1
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
            // Member count: 3
            enum class CFuncMover__FollowConstraint_t : uint32_t {
                FOLLOW_CONSTRAINT_DISTANCE = 0x0,
                FOLLOW_CONSTRAINT_SPRING = 0x1,
                FOLLOW_CONSTRAINT_RATIO = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class CFuncMover__FollowEntityDirection_t : uint32_t {
                FOLLOW_ENTITY_BIDIRECTIONAL = 0x0,
                FOLLOW_ENTITY_FORWARD = 0x1,
                FOLLOW_ENTITY_REVERSE = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class CFuncMover__TransitionToPathNodeAction_t : uint32_t {
                TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
                TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
                TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
                TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
            };
            // Alignment: 4
            // Member count: 9
            enum class CFuncMover__OrientationUpdate_t : uint32_t {
                ORIENTATION_FORWARD_PATH = 0x0,
                ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
                ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
                ORIENTATION_MATCH_CONTROL_POINT = 0x3,
                ORIENTATION_FIXED = 0x4,
                ORIENTATION_FACE_PLAYER = 0x5,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
                ORIENTATION_FACE_ENTITY = 0x8
            };
            // Alignment: 4
            // Member count: 3
            enum class PropDoorRotatingOpenDirection_e : uint32_t {
                DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
                DOOR_ROTATING_OPEN_FORWARD = 0x1,
                DOOR_ROTATING_OPEN_BACKWARD = 0x2
            };
            // Alignment: 4
            // Member count: 1
            enum class PulseCollisionGroup_t : uint32_t {
                DEFAULT = 0x0
            };
            // Alignment: 4
            // Member count: 2
            enum class SceneOnPlayerDeath_t : uint32_t {
                SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
                SCENE_ONPLAYERDEATH_CANCEL = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class LessonPanelLayoutFileTypes_t : uint32_t {
                LAYOUT_HAND_DEFAULT = 0x0,
                LAYOUT_WORLD_DEFAULT = 0x1,
                LAYOUT_CUSTOM = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class TimelineCompression_t : uint32_t {
                TIMELINE_COMPRESSION_SUM = 0x0,
                TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
                TIMELINE_COMPRESSION_AVERAGE = 0x2,
                TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
                TIMELINE_COMPRESSION_TOTAL = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class SubclassVDataChangeType_t : uint32_t {
                SUBCLASS_VDATA_CREATED = 0x0,
                SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
                SUBCLASS_VDATA_RELOADED = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class C4LightEffect_t : uint32_t {
                eLightEffectNone = 0x0,
                eLightEffectDropped = 0x1,
                eLightEffectThirdPersonHeld = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class StanceType_t : uint32_t {
                STANCE_CURRENT = 0xFFFFFFFF,
                STANCE_DEFAULT = 0x0,
                STANCE_CROUCHING = 0x1,
                STANCE_PRONE = 0x2,
                NUM_STANCES = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class Explosions : uint32_t {
                expRandom = 0x0,
                expDirected = 0x1,
                expUsePrecise = 0x2
            };
            // Alignment: 4
            // Member count: 11
            enum class PreviewCharacterMode : uint32_t {
                INVALID = 0xFFFFFFFF,
                DIORAMA = 0x0,
                MAIN_MENU = 0x1,
                BUY_MENU = 0x2,
                TEAM_SELECT = 0x3,
                END_OF_MATCH = 0x4,
                INVENTORY_INSPECT = 0x5,
                WALKING = 0x6,
                TEAM_INTRO = 0x7,
                WINGMAN_INTRO = 0x8,
                BANNER = 0x9
            };
            // Alignment: 4
            // Member count: 4
            enum class ObserverInterpState_t : uint32_t {
                OBSERVER_INTERP_NONE = 0x0,
                OBSERVER_INTERP_STARTING = 0x1,
                OBSERVER_INTERP_TRAVELING = 0x2,
                OBSERVER_INTERP_SETTLING = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class WorldTextPanelOrientation_t : uint32_t {
                WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
                WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
                WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
            };
            // Alignment: 4
            // Member count: 8
            enum class EDestructibleParts_DestroyParameterFlags : uint32_t {
                None = 0x0,
                GenerateBreakpieces = 0x1,
                SetBodyGroupAndCollisionState = 0x2,
                EnableFlinches = 0x4,
                ForceDamageApply = 0x8,
                IgnoreKillEntityFlag = 0x10,
                IgnoreHealthCheck = 0x20,
                Default = 0x7
            };
            // Alignment: 4
            // Member count: 3
            enum class WorldTextPanelHorizontalAlign_t : uint32_t {
                WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
                WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class SequenceFinishNotifyState_t : uint8_t {
                eDoNotNotify = 0x0,
                eNotifyWhenFinished = 0x1,
                eNotifyTriggered = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class SoundEventStartType_t : uint32_t {
                SOUNDEVENT_START_PLAYER = 0x0,
                SOUNDEVENT_START_WORLD = 0x1,
                SOUNDEVENT_START_ENTITY = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class soundcommands_t : uint32_t {
                SOUNDCTRL_CHANGE_VOLUME = 0x0,
                SOUNDCTRL_CHANGE_PITCH = 0x1,
                SOUNDCTRL_STOP = 0x2,
                SOUNDCTRL_DESTROY = 0x3,
                SOUNDCTRL_FADEOUT = 0x4
            };
            // Alignment: 4
            // Member count: 5
            enum class AnimGraphDebugDrawType_t : uint32_t {
                None = 0x0,
                WsPosition = 0x1,
                MsPosition = 0x2,
                WsDirection = 0x3,
                MsDirection = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class TrainOrientationType_t : uint32_t {
                TrainOrientation_Fixed = 0x0,
                TrainOrientation_AtPathTracks = 0x1,
                TrainOrientation_LinearBlend = 0x2,
                TrainOrientation_EaseInEaseOut = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class CInfoChoreoLocatorShapeType_t : uint32_t {
                POINT = 0x0,
                LINE = 0x1,
                COUNT = 0x2,
                NONE = 0x3
            };
            // Alignment: 4
            // Member count: 7
            enum class CSWeaponCategory : uint32_t {
                WEAPONCATEGORY_OTHER = 0x0,
                WEAPONCATEGORY_MELEE = 0x1,
                WEAPONCATEGORY_SECONDARY = 0x2,
                WEAPONCATEGORY_SMG = 0x3,
                WEAPONCATEGORY_RIFLE = 0x4,
                WEAPONCATEGORY_HEAVY = 0x5,
                WEAPONCATEGORY_COUNT = 0x6
            };
            // Alignment: 1
            // Member count: 2
            enum class BeginDeathLifeStateTransition_t : uint8_t {
                TRANSITION_TO_LIFESTATE_DYING = 0x0,
                TRANSITION_TO_LIFESTATE_DEAD = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class PointOrientGoalDirectionType_t : uint32_t {
                eAbsOrigin = 0x0,
                eCenter = 0x1,
                eHead = 0x2,
                eForward = 0x3,
                eEyesForward = 0x4
            };
            // Alignment: 1
            // Member count: 9
            enum class ItemFlagTypes_t : uint8_t {
                ITEM_FLAG_NONE = 0x0,
                ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 0x1,
                ITEM_FLAG_NOAUTORELOAD = 0x2,
                ITEM_FLAG_NOAUTOSWITCHEMPTY = 0x4,
                ITEM_FLAG_LIMITINWORLD = 0x8,
                ITEM_FLAG_EXHAUSTIBLE = 0x10,
                ITEM_FLAG_DOHITLOCATIONDMG = 0x20,
                ITEM_FLAG_NOAMMOPICKUPS = 0x40,
                ITEM_FLAG_NOITEMPICKUP = 0x80
            };
            // Alignment: 1
            // Member count: 10
            enum class SurroundingBoundsType_t : uint8_t {
                USE_OBB_COLLISION_BOUNDS = 0x0,
                USE_BEST_COLLISION_BOUNDS = 0x1,
                USE_HITBOXES = 0x2,
                USE_SPECIFIED_BOUNDS = 0x3,
                USE_GAME_CODE = 0x4,
                USE_ROTATION_EXPANDED_BOUNDS = 0x5,
                USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 0x6,
                USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 0x7,
                USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x8,
                SURROUNDING_TYPE_BIT_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 6
            enum class LifeState_t : uint32_t {
                LIFE_ALIVE = 0x0,
                LIFE_DYING = 0x1,
                LIFE_DEAD = 0x2,
                LIFE_RESPAWNABLE = 0x3,
                LIFE_RESPAWNING = 0x4,
                NUM_LIFESTATES = 0x5
            };
            // Alignment: 4
            // Member count: 2
            enum class PointOrientConstraint_t : uint32_t {
                eNone = 0x0,
                ePreserveUpAxis = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class NPCFollowFormation_t : uint32_t {
                Default = 0xFFFFFFFF,
                CloseCircle = 0x0,
                WideCircle = 0x1,
                MediumCircle = 0x5,
                Sidekick = 0x6
            };
            // Alignment: 1
            // Member count: 3
            enum class GLOBALESTATE : uint8_t {
                GLOBAL_OFF = 0x0,
                GLOBAL_ON = 0x1,
                GLOBAL_DEAD = 0x2
            };
            // Alignment: 1
            // Member count: 6
            enum class AnimationAlgorithm_t : uint8_t {
                eInvalid = 0xFF,
                eNone = 0x0,
                eSequence = 0x1,
                eAnimGraph2 = 0x2,
                eAnimGraph2Secondary = 0x3,
                eCount = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class CSWeaponMode : uint32_t {
                Primary_Mode = 0x0,
                Secondary_Mode = 0x1,
                WeaponMode_MAX = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class OnFrame : uint8_t {
                ONFRAME_UNKNOWN = 0x0,
                ONFRAME_TRUE = 0x1,
                ONFRAME_FALSE = 0x2
            };
            // Alignment: 4
            // Member count: 12
            enum class Materials : uint32_t {
                matGlass = 0x0,
                matWood = 0x1,
                matMetal = 0x2,
                matFlesh = 0x3,
                matCinderBlock = 0x4,
                matCeilingTile = 0x5,
                matComputer = 0x6,
                matUnbreakableGlass = 0x7,
                matRocks = 0x8,
                matWeb = 0x9,
                matNone = 0xA,
                matLastMaterial = 0xB
            };
            // Alignment: 4
            // Member count: 9
            enum class BloodType : uint32_t {
                None = 0xFFFFFFFF,
                ColorRed = 0x0,
                ColorYellow = 0x1,
                ColorGreen = 0x2,
                ColorRedLVL2 = 0x3,
                ColorRedLVL3 = 0x4,
                ColorRedLVL4 = 0x5,
                ColorRedLVL5 = 0x6,
                ColorRedLVL6 = 0x7
            };
            // Alignment: 1
            // Member count: 5
            enum class NavScope_t : uint8_t {
                eGround = 0x0,
                eAir = 0x1,
                eCount = 0x2,
                eFirst = 0x0,
                eInvalid = 0xFF
            };
            // Alignment: 4
            // Member count: 4
            enum class BreakableContentsType_t : uint32_t {
                BC_DEFAULT = 0x0,
                BC_EMPTY = 0x1,
                BC_PROP_GROUP_OVERRIDE = 0x2,
                BC_PARTICLE_SYSTEM_OVERRIDE = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class AnimLoopMode_t : uint32_t {
                ANIM_LOOP_MODE_INVALID = 0xFFFFFFFF,
                ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
                ANIM_LOOP_MODE_LOOPING = 0x1,
                ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
                ANIM_LOOP_MODE_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 14
            enum class Class_T : uint32_t {
                CLASS_NONE = 0x0,
                CLASS_PLAYER = 0x1,
                CLASS_PLAYER_ALLY = 0x2,
                CLASS_C4_FOR_RADAR = 0x3,
                CLASS_FOOT_CONTACT_SHADOW = 0x4,
                CLASS_WEAPON = 0x5,
                CLASS_WATER_SPLASHER = 0x6,
                CLASS_HUDMODEL_WEAPON = 0x7,
                CLASS_HUDMODEL_ARMS = 0x8,
                CLASS_HUDMODEL_ADDON = 0x9,
                CLASS_WORLDMODEL_GLOVES = 0xA,
                CLASS_DOOR = 0xB,
                CLASS_PLANTED_C4 = 0xC,
                NUM_CLASSIFY_CLASSES = 0xD
            };
            // Alignment: 4
            // Member count: 2
            enum class filter_t : uint32_t {
                FILTER_AND = 0x0,
                FILTER_OR = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class CSWeaponSilencerType : uint32_t {
                WEAPONSILENCER_NONE = 0x0,
                WEAPONSILENCER_DETACHABLE = 0x1,
                WEAPONSILENCER_INTEGRATED = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class EProceduralRagdollWeightIndexPropagationMethod : uint32_t {
                Bone = 0x0,
                BoneAndChildren = 0x1
            };
            // Alignment: 4
            // Member count: 37
            enum class GameAnimEventIndex_t : uint32_t {
                AE_EMPTY = 0x0,
                AE_CL_PLAYSOUND = 0x1,
                AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
                AE_CL_PLAYSOUND_POSITION = 0x3,
                AE_SV_PLAYSOUND = 0x4,
                AE_CL_STOPSOUND = 0x5,
                AE_CL_PLAYSOUND_LOOPING = 0x6,
                AE_CL_CREATE_PARTICLE_EFFECT = 0x7,
                AE_CL_STOP_PARTICLE_EFFECT = 0x8,
                AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0x9,
                AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0xA,
                AE_SV_STOP_PARTICLE_EFFECT = 0xB,
                AE_FOOTSTEP = 0xC,
                AE_CL_STOP_RAGDOLL_CONTROL = 0xD,
                AE_CL_ENABLE_BODYGROUP = 0xE,
                AE_CL_DISABLE_BODYGROUP = 0xF,
                AE_BODYGROUP_SET_VALUE = 0x10,
                AE_WEAPON_PERFORM_ATTACK = 0x11,
                AE_FIRE_INPUT = 0x12,
                AE_CL_CLOTH_ATTR = 0x13,
                AE_CL_CLOTH_GROUND_OFFSET = 0x14,
                AE_CL_CLOTH_STIFFEN = 0x15,
                AE_CL_CLOTH_EFFECT = 0x16,
                AE_CL_CREATE_ANIM_SCOPE_PROP = 0x17,
                AE_SV_IKLOCK = 0x18,
                AE_PULSE_GRAPH = 0x19,
                AE_DISABLE_PLATFORM = 0x1A,
                AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1B,
                AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 0x1C,
                AE_DESTRUCTIBLE_PART_DESTROY = 0x1D,
                AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x1E,
                AE_SV_ATTACH_SILENCER_COMPLETE = 0x1F,
                AE_SV_DETACH_SILENCER_COMPLETE = 0x20,
                AE_CL_EJECT_MAG = 0x21,
                AE_WPN_COMPLETE_RELOAD = 0x22,
                AE_WPN_HEALTHSHOT_INJECT = 0x23,
                AE_GRENADE_THROW_COMPLETE = 0x24
            };
            // Alignment: 1
            // Member count: 3
            enum class FixAngleSet_t : uint8_t {
                None = 0x0,
                Absolute = 0x1,
                Relative = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class IChoreoServices__ScriptState_t : uint32_t {
                SCRIPT_PLAYING = 0x0,
                SCRIPT_WAIT = 0x1,
                SCRIPT_POST_IDLE = 0x2,
                SCRIPT_CLEANUP = 0x3,
                SCRIPT_MOVE_TO_MARK = 0x4
            };
            // Alignment: 4
            // Member count: 5
            enum class Touch_t : uint32_t {
                touch_none = 0x0,
                touch_player_only = 0x1,
                touch_npc_only = 0x2,
                touch_player_or_npc = 0x3,
                touch_player_or_npc_or_physicsprop = 0x4
            };
            // Alignment: 1
            // Member count: 4
            enum class CCSPlayerAnimationState__MoveType_t : uint8_t {
                None = 0x0,
                Ground = 0x1,
                Air = 0x2,
                Ladder = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class TrainVelocityType_t : uint32_t {
                TrainVelocity_Instantaneous = 0x0,
                TrainVelocity_LinearBlend = 0x1,
                TrainVelocity_EaseInEaseOut = 0x2
            };
            // Alignment: 4
            // Member count: 13
            enum class CSWeaponType : uint32_t {
                WEAPONTYPE_KNIFE = 0x0,
                WEAPONTYPE_PISTOL = 0x1,
                WEAPONTYPE_SUBMACHINEGUN = 0x2,
                WEAPONTYPE_RIFLE = 0x3,
                WEAPONTYPE_SHOTGUN = 0x4,
                WEAPONTYPE_SNIPER_RIFLE = 0x5,
                WEAPONTYPE_MACHINEGUN = 0x6,
                WEAPONTYPE_C4 = 0x7,
                WEAPONTYPE_TASER = 0x8,
                WEAPONTYPE_GRENADE = 0x9,
                WEAPONTYPE_EQUIPMENT = 0xA,
                WEAPONTYPE_STACKABLEITEM = 0xB,
                WEAPONTYPE_UNKNOWN = 0xC
            };
            // Alignment: 1
            // Member count: 4
            enum class NavScopeFlags_t : uint8_t {
                eGround = 0x1,
                eAir = 0x2,
                eAll = 0x3,
                eNone = 0x0
            };
            // Alignment: 4
            // Member count: 3
            enum class EntFinderMethod_t : uint32_t {
                ENT_FIND_METHOD_NEAREST = 0x0,
                ENT_FIND_METHOD_FARTHEST = 0x1,
                ENT_FIND_METHOD_RANDOM = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class TestInputOutputCombinationsEnum_t : uint32_t {
                ZERO = 0x0,
                ONE = 0x1,
                TWO = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class FuncMoverMovementSummaryFlags_t : uint32_t {
                eNone = 0x0,
                eMovementBegin = 0x1,
                eStopBegin = 0x2,
                eStopComplete = 0x4,
                eReversing = 0x8,
                eEventsDispatched = 0x10
            };
            // Alignment: 4
            // Member count: 4
            enum class PropDoorRotatingSpawnPos_t : uint32_t {
                DOOR_SPAWN_CLOSED = 0x0,
                DOOR_SPAWN_OPEN_FORWARD = 0x1,
                DOOR_SPAWN_OPEN_BACK = 0x2,
                DOOR_SPAWN_AJAR = 0x3
            };
            // Alignment: 1
            // Member count: 2
            enum class ShardSolid_t : uint8_t {
                SHARD_SOLID = 0x0,
                SHARD_DEBRIS = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class EntityPlatformTypes_t : uint8_t {
                ENTITY_NOT_PLATFORM = 0x0,
                ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1,
                ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class PulseNPCCondition_t : uint32_t {
                COND_SEE_PLAYER = 0x1,
                COND_LOST_PLAYER = 0x2,
                COND_HEAR_PLAYER = 0x3,
                COND_PLAYER_PUSHING = 0x4,
                COND_NO_PRIMARY_AMMO = 0x5
            };
            // Alignment: 1
            // Member count: 4
            enum class RenderMode_t : uint8_t {
                kRenderNormal = 0x0,
                kRenderTransAlpha = 0x1,
                kRenderNone = 0x2,
                kRenderModeCount = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class ForcedCrouchState_t : uint32_t {
                FORCEDCROUCH_NONE = 0x0,
                FORCEDCROUCH_CROUCHED = 0x1,
                FORCEDCROUCH_UNCROUCHED = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class PerformanceMode_t : uint32_t {
                PM_NORMAL = 0x0,
                PM_NO_GIBS = 0x1
            };
            // Alignment: 4
            // Member count: 8
            enum class TOGGLE_STATE : uint32_t {
                TS_AT_TOP = 0x0,
                TS_AT_BOTTOM = 0x1,
                TS_GOING_UP = 0x2,
                TS_GOING_DOWN = 0x3,
                DOOR_OPEN = 0x0,
                DOOR_CLOSED = 0x1,
                DOOR_OPENING = 0x2,
                DOOR_CLOSING = 0x3
            };
            // Alignment: 4
            // Member count: 74
            enum class loadout_slot_t : uint32_t {
                LOADOUT_SLOT_PROMOTED = 0xFFFFFFFF,
                LOADOUT_SLOT_INVALID = 0xFFFFFFFF,
                LOADOUT_SLOT_MELEE = 0x0,
                LOADOUT_SLOT_C4 = 0x1,
                LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0x0,
                LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 0x1,
                LOADOUT_SLOT_SECONDARY0 = 0x2,
                LOADOUT_SLOT_SECONDARY1 = 0x3,
                LOADOUT_SLOT_SECONDARY2 = 0x4,
                LOADOUT_SLOT_SECONDARY3 = 0x5,
                LOADOUT_SLOT_SECONDARY4 = 0x6,
                LOADOUT_SLOT_SECONDARY5 = 0x7,
                LOADOUT_SLOT_SMG0 = 0x8,
                LOADOUT_SLOT_SMG1 = 0x9,
                LOADOUT_SLOT_SMG2 = 0xA,
                LOADOUT_SLOT_SMG3 = 0xB,
                LOADOUT_SLOT_SMG4 = 0xC,
                LOADOUT_SLOT_SMG5 = 0xD,
                LOADOUT_SLOT_RIFLE0 = 0xE,
                LOADOUT_SLOT_RIFLE1 = 0xF,
                LOADOUT_SLOT_RIFLE2 = 0x10,
                LOADOUT_SLOT_RIFLE3 = 0x11,
                LOADOUT_SLOT_RIFLE4 = 0x12,
                LOADOUT_SLOT_RIFLE5 = 0x13,
                LOADOUT_SLOT_HEAVY0 = 0x14,
                LOADOUT_SLOT_HEAVY1 = 0x15,
                LOADOUT_SLOT_HEAVY2 = 0x16,
                LOADOUT_SLOT_HEAVY3 = 0x17,
                LOADOUT_SLOT_HEAVY4 = 0x18,
                LOADOUT_SLOT_HEAVY5 = 0x19,
                LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 0x2,
                LOADOUT_SLOT_LAST_WHEEL_WEAPON = 0x19,
                LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 0x8,
                LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 0x19,
                LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 0x1A,
                LOADOUT_SLOT_GRENADE0 = 0x1A,
                LOADOUT_SLOT_GRENADE1 = 0x1B,
                LOADOUT_SLOT_GRENADE2 = 0x1C,
                LOADOUT_SLOT_GRENADE3 = 0x1D,
                LOADOUT_SLOT_GRENADE4 = 0x1E,
                LOADOUT_SLOT_GRENADE5 = 0x1F,
                LOADOUT_SLOT_LAST_WHEEL_GRENADE = 0x1F,
                LOADOUT_SLOT_EQUIPMENT0 = 0x20,
                LOADOUT_SLOT_EQUIPMENT1 = 0x21,
                LOADOUT_SLOT_EQUIPMENT2 = 0x22,
                LOADOUT_SLOT_EQUIPMENT3 = 0x23,
                LOADOUT_SLOT_EQUIPMENT4 = 0x24,
                LOADOUT_SLOT_EQUIPMENT5 = 0x25,
                LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 0x20,
                LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 0x25,
                LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 0x26,
                LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 0x27,
                LOADOUT_SLOT_CLOTHING_FACEMASK = 0x28,
                LOADOUT_SLOT_CLOTHING_HANDS = 0x29,
                LOADOUT_SLOT_FIRST_COSMETIC = 0x29,
                LOADOUT_SLOT_LAST_COSMETIC = 0x29,
                LOADOUT_SLOT_CLOTHING_EYEWEAR = 0x2A,
                LOADOUT_SLOT_CLOTHING_HAT = 0x2B,
                LOADOUT_SLOT_CLOTHING_LOWERBODY = 0x2C,
                LOADOUT_SLOT_CLOTHING_TORSO = 0x2D,
                LOADOUT_SLOT_CLOTHING_APPEARANCE = 0x2E,
                LOADOUT_SLOT_MISC0 = 0x2F,
                LOADOUT_SLOT_MISC1 = 0x30,
                LOADOUT_SLOT_MISC2 = 0x31,
                LOADOUT_SLOT_MISC3 = 0x32,
                LOADOUT_SLOT_MISC4 = 0x33,
                LOADOUT_SLOT_MISC5 = 0x34,
                LOADOUT_SLOT_MISC6 = 0x35,
                LOADOUT_SLOT_MUSICKIT = 0x36,
                LOADOUT_SLOT_FLAIR0 = 0x37,
                LOADOUT_SLOT_SPRAY0 = 0x38,
                LOADOUT_SLOT_FIRST_ALL_CHARACTER = 0x36,
                LOADOUT_SLOT_LAST_ALL_CHARACTER = 0x38,
                LOADOUT_SLOT_COUNT = 0x39
            };
            // Alignment: 4
            // Member count: 4
            enum class EDestructiblePartDamagePassThroughType : uint32_t {
                Normal = 0x0,
                Absorb = 0x1,
                InvincibleAbsorb = 0x2,
                InvinciblePassthrough = 0x3
            };
            // Alignment: 8
            // Member count: 20
            enum class NavAttributeEnum : uint64_t {
                NAV_MESH_AVOID = 0x80,
                NAV_MESH_STAIRS = 0x1000,
                NAV_MESH_NON_ZUP = 0x8000,
                NAV_MESH_CROUCH_HEIGHT = 0x10000,
                NAV_MESH_NON_ZUP_TRANSITION = 0x20000,
                NAV_MESH_CRAWL_HEIGHT = 0x40000,
                NAV_MESH_CROUCH = 0x10000,
                NAV_MESH_JUMP = 0x2,
                NAV_MESH_NO_JUMP = 0x8,
                NAV_MESH_STOP = 0x10,
                NAV_MESH_RUN = 0x20,
                NAV_MESH_WALK = 0x40,
                NAV_MESH_TRANSIENT = 0x100,
                NAV_MESH_DONT_HIDE = 0x200,
                NAV_MESH_STAND = 0x400,
                NAV_MESH_NO_HOSTAGES = 0x800,
                NAV_MESH_NO_MERGE = 0x2000,
                NAV_MESH_OBSTACLE_TOP = 0x4000,
                NAV_ATTR_FIRST_GAME_INDEX = 0x13,
                NAV_ATTR_LAST_INDEX = 0x3F
            };
            // Alignment: 4
            // Member count: 3
            enum class MoveLinearAuthoredPos_t : uint32_t {
                MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
                MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
                MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class InteractionPassive_t : uint32_t {
                INTERACT_PASSIVE_NONE = 0x0,
                INTERACT_PASSIVE_LOOKAT = 0x1,
                INTERACT_PASSIVE_SPEAK = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ValueRemapperMomentumType_t : uint32_t {
                MomentumType_None = 0x0,
                MomentumType_Friction = 0x1,
                MomentumType_SpringTowardSnapValue = 0x2,
                MomentumType_SpringAwayFromSnapValue = 0x3
            };
            // Alignment: 4
            // Member count: 12
            enum class Hull_t : uint32_t {
                HULL_HUMAN = 0x0,
                HULL_SMALL_CENTERED = 0x1,
                HULL_WIDE_HUMAN = 0x2,
                HULL_TINY = 0x3,
                HULL_MEDIUM = 0x4,
                HULL_TINY_CENTERED = 0x5,
                HULL_LARGE = 0x6,
                HULL_LARGE_CENTERED = 0x7,
                HULL_MEDIUM_TALL = 0x8,
                HULL_SMALL = 0x9,
                NUM_HULLS = 0xA,
                HULL_NONE = 0xB
            };
            // Alignment: 1
            // Member count: 3
            enum class ExternalAnimGraphInactiveBehavior_t : uint8_t {
                eNone = 0x0,
                eUnbind = 0x1,
                eUnbindAndDelete = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class BodySectionAuthority_t : uint32_t {
                eNone = 0x0,
                eLowerBody = 0x1,
                eUpperBody = 0x2,
                eFullBody = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class ESceneRequestState_t : uint32_t {
                INACTIVE = 0x0,
                ACTIVE = 0x1,
                FINISHED = 0x2,
                FAILED = 0x3
            };
            // Alignment: 1
            // Member count: 7
            enum class CCSPlayerAnimationState__GroundMoveState_t : uint8_t {
                None = 0x0,
                Idle = 0x1,
                Start = 0x2,
                Move = 0x3,
                TurnOnSpot = 0x4,
                TurnOnSpotLoop = 0x5,
                PlantAndTurn = 0x6
            };
            // Alignment: 4
            // Member count: 6
            enum class PreviewWeaponState : uint32_t {
                DROPPED = 0x0,
                HOLSTERED = 0x1,
                DEPLOYED = 0x2,
                PLANTED = 0x3,
                INSPECT = 0x4,
                ICON = 0x5
            };
            // Alignment: 4
            // Member count: 9
            enum class EInButtonState : uint32_t {
                IN_BUTTON_UP = 0x0,
                IN_BUTTON_DOWN = 0x1,
                IN_BUTTON_DOWN_UP = 0x2,
                IN_BUTTON_UP_DOWN = 0x3,
                IN_BUTTON_UP_DOWN_UP = 0x4,
                IN_BUTTON_DOWN_UP_DOWN = 0x5,
                IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
                IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
                IN_BUTTON_STATE_COUNT = 0x8
            };
            // Alignment: 4
            // Member count: 4
            enum class BeamClipStyle_t : uint32_t {
                kNOCLIP = 0x0,
                kGEOCLIP = 0x1,
                kMODELCLIP = 0x2,
                kBEAMCLIPSTYLE_NUMBITS = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class WeaponAttackType_t : uint32_t {
                eInvalid = 0xFFFFFFFF,
                ePrimary = 0x0,
                eSecondary = 0x1,
                eCount = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class CDebugOverlayFilterTextType_t : uint32_t {
                FILTER_TEXT_NONE = 0x0,
                MATCH = 0x1,
                HIERARCHY = 0x2,
                COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 8
            enum class CSPlayerBlockingUseAction_t : uint32_t {
                k_CSPlayerBlockingUseAction_None = 0x0,
                k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
                k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
                k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
                k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
                k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0x5,
                k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x6,
                k_CSPlayerBlockingUseAction_MaxCount = 0x7
            };
            // Alignment: 1
            // Member count: 5
            enum class ShatterDamageCause : uint8_t {
                SHATTERDAMAGE_BULLET = 0x0,
                SHATTERDAMAGE_MELEE = 0x1,
                SHATTERDAMAGE_THROWN = 0x2,
                SHATTERDAMAGE_SCRIPT = 0x3,
                SHATTERDAMAGE_EXPLOSIVE = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class ScriptedOnDeath_t : uint32_t {
                SS_ONDEATH_NOT_APPLICABLE = 0xFFFFFFFF,
                SS_ONDEATH_UNDEFINED = 0x0,
                SS_ONDEATH_RAGDOLL = 0x1,
                SS_ONDEATH_ANIMATED_DEATH = 0x2
            };
            // Alignment: 4
            // Member count: 66
            enum class CSWeaponNameID : uint32_t {
                WEAPONID_GLOCK = 0x0,
                WEAPONID_HKP2000 = 0x1,
                WEAPONID_CZ75A = 0x2,
                WEAPONID_ELITE = 0x3,
                WEAPONID_DEAGLE = 0x4,
                WEAPONID_FIVESEVEN = 0x5,
                WEAPONID_P250 = 0x6,
                WEAPONID_REVOLVER = 0x7,
                WEAPONID_TEC9 = 0x8,
                WEAPONID_USP_SILENCER = 0x9,
                WEAPONID_AK47 = 0xA,
                WEAPONID_M4A1 = 0xB,
                WEAPONID_M4A1_SILENCER = 0xC,
                WEAPONID_FAMAS = 0xD,
                WEAPONID_GALILAR = 0xE,
                WEAPONID_AUG = 0xF,
                WEAPONID_SG556 = 0x10,
                WEAPONID_BIZON = 0x11,
                WEAPONID_MAC10 = 0x12,
                WEAPONID_MP5SD = 0x13,
                WEAPONID_MP7 = 0x14,
                WEAPONID_MP9 = 0x15,
                WEAPONID_P90 = 0x16,
                WEAPONID_UMP45 = 0x17,
                WEAPONID_MAG7 = 0x18,
                WEAPONID_NOVA = 0x19,
                WEAPONID_SAWEDOFF = 0x1A,
                WEAPONID_XM1014 = 0x1B,
                WEAPONID_AWP = 0x1C,
                WEAPONID_SSG08 = 0x1D,
                WEAPONID_G3SG1 = 0x1E,
                WEAPONID_SCAR20 = 0x1F,
                WEAPONID_M249 = 0x20,
                WEAPONID_NEGEV = 0x21,
                WEAPONID_TASER = 0x22,
                WEAPONID_DECOY = 0x23,
                WEAPONID_FLASHBANG = 0x24,
                WEAPONID_HEGRENADE = 0x25,
                WEAPONID_INCGRENADE = 0x26,
                WEAPONID_MOLOTOV = 0x27,
                WEAPONID_SMOKEGRENADE = 0x28,
                WEAPONID_C4 = 0x29,
                WEAPONID_HEALTHSHOT = 0x2A,
                WEAPONID_KNIFE = 0x2B,
                WEAPONID_KNIFE_T = 0x2C,
                WEAPONID_KNIFE_CSS = 0x2D,
                WEAPONID_KNIFE_FLIP = 0x2E,
                WEAPONID_KNIFE_GUT = 0x2F,
                WEAPONID_KNIFE_KARAMBIT = 0x30,
                WEAPONID_BAYONET = 0x31,
                WEAPONID_KNIFE_M9_BAYONET = 0x32,
                WEAPONID_KNIFE_TACTICAL = 0x33,
                WEAPONID_KNIFE_FALCHION = 0x34,
                WEAPONID_KNIFE_SURVIVAL_BOWIE = 0x35,
                WEAPONID_KNIFE_BUTTERFLY = 0x36,
                WEAPONID_KNIFE_PUSH = 0x37,
                WEAPONID_KNIFE_CORD = 0x38,
                WEAPONID_KNIFE_CANIS = 0x39,
                WEAPONID_KNIFE_URSUS = 0x3A,
                WEAPONID_KNIFE_GYPSY_JACKKNIFE = 0x3B,
                WEAPONID_KNIFE_OUTDOOR = 0x3C,
                WEAPONID_KNIFE_STILETTO = 0x3D,
                WEAPONID_KNIFE_WIDOWMAKER = 0x3E,
                WEAPONID_KNIFE_SKELETON = 0x3F,
                WEAPONID_KNIFE_KUKRI = 0x40,
                WEAPONID_UNKNOWN = 0x41
            };
            // Alignment: 4
            // Member count: 4
            enum class ChoreoLookAtSpeed_t : uint32_t {
                eInvalid = 0xFFFFFFFF,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2
            };
            // Alignment: 4
            // Member count: 17
            enum class gear_slot_t : uint32_t {
                GEAR_SLOT_INVALID = 0xFFFFFFFF,
                GEAR_SLOT_RIFLE = 0x0,
                GEAR_SLOT_PISTOL = 0x1,
                GEAR_SLOT_KNIFE = 0x2,
                GEAR_SLOT_GRENADES = 0x3,
                GEAR_SLOT_C4 = 0x4,
                GEAR_SLOT_RESERVED_SLOT6 = 0x5,
                GEAR_SLOT_RESERVED_SLOT7 = 0x6,
                GEAR_SLOT_RESERVED_SLOT8 = 0x7,
                GEAR_SLOT_RESERVED_SLOT9 = 0x8,
                GEAR_SLOT_RESERVED_SLOT10 = 0x9,
                GEAR_SLOT_RESERVED_SLOT11 = 0xA,
                GEAR_SLOT_BOOSTS = 0xB,
                GEAR_SLOT_UTILITY = 0xC,
                GEAR_SLOT_COUNT = 0xD,
                GEAR_SLOT_FIRST = 0x0,
                GEAR_SLOT_LAST = 0xC
            };
            // Alignment: 4
            // Member count: 10
            enum class CSPlayerState : uint32_t {
                STATE_ACTIVE = 0x0,
                STATE_WELCOME = 0x1,
                STATE_PICKINGTEAM = 0x2,
                STATE_PICKINGCLASS = 0x3,
                STATE_DEATH_ANIM = 0x4,
                STATE_DEATH_WAIT_FOR_KEY = 0x5,
                STATE_OBSERVER_MODE = 0x6,
                STATE_GUNGAME_RESPAWN = 0x7,
                STATE_DORMANT = 0x8,
                NUM_PLAYER_STATES = 0x9
            };
            // Alignment: 4
            // Member count: 2
            enum class ScriptedConflictResponse_t : uint32_t {
                SS_CONFLICT_ENQUEUE = 0x0,
                SS_CONFLICT_INTERRUPT = 0x1
            };
            // Alignment: 1
            // Member count: 7
            enum class WaterLevel_t : uint8_t {
                WL_NotInWater = 0x0,
                WL_Feet = 0x1,
                WL_Knees = 0x2,
                WL_Waist = 0x3,
                WL_Chest = 0x4,
                WL_FullyUnderwater = 0x5,
                WL_Count = 0x6
            };
            // Alignment: 4
            // Member count: 3
            enum class WorldTextPanelVerticalAlign_t : uint32_t {
                WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
                WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
            };
            // Alignment: 1
            // Member count: 4
            enum class RelativeLocationType_t : uint8_t {
                WORLD_SPACE_POSITION = 0x0,
                RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 0x1,
                RELATIVE_TO_ENTITY_YAW_ONLY = 0x2,
                RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class AmmoPosition_t : uint32_t {
                AMMO_POSITION_INVALID = 0xFFFFFFFF,
                AMMO_POSITION_PRIMARY = 0x0,
                AMMO_POSITION_SECONDARY = 0x1,
                AMMO_POSITION_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 11
            enum class CDebugOverlayFilterType_t : uint32_t {
                NONE = 0x0,
                TEXT = 0x1,
                ENTITY = 0x2,
                COUNT = 0x3,
                TACTICAL_SEARCH = 0x4,
                AI_SCHEDULE = 0x5,
                AI_TASK = 0x6,
                AI_EVENT = 0x7,
                AI_PATHFINDING = 0x8,
                END_SIM_HISTORY_TYPES = 0x9,
                COMBINED = 0xFFFFFFFF
            };
            // Alignment: 4
            // Member count: 2
            enum class ENPCBehaviorOverride_t : uint32_t {
                eKeepExisting = 0x0,
                eTakeOver = 0x1
            };
            // Alignment: 4
            // Member count: 24
            enum class PreviewEOMCelebration : uint32_t {
                INVALID = 0xFFFFFFFF,
                WALKUP = 0x0,
                PUNCHING = 0x1,
                SWAGGER = 0x2,
                DROPDOWN = 0x3,
                STRETCH = 0x4,
                SWAT_FEMALE = 0x5,
                MASK_F = 0x6,
                GUERILLA = 0x7,
                GUERILLA02 = 0x8,
                GENDARMERIE = 0x9,
                SCUBA_FEMALE = 0xA,
                SCUBA_MALE = 0xB,
                AVA_DEFEAT = 0xC,
                GENDARMERIE_DEFEAT = 0xD,
                MAE_DEFEAT = 0xE,
                RICKSAW_DEFEAT = 0xF,
                SCUBA_FEMALE_DEFEAT = 0x10,
                SCUBA_MALE_DEFEAT = 0x11,
                CRASSWATER_DEFEAT = 0x12,
                DARRYL_DEFEAT = 0x13,
                DOCTOR_DEFEAT = 0x14,
                MUHLIK_DEFEAT = 0x15,
                VYPA_DEFEAT = 0x16
            };
            // Alignment: 4
            // Member count: 5
            enum class EntityDisolveType_t : uint32_t {
                ENTITY_DISSOLVE_INVALID = 0xFFFFFFFF,
                ENTITY_DISSOLVE_NORMAL = 0x0,
                ENTITY_DISSOLVE_ELECTRICAL = 0x1,
                ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
                ENTITY_DISSOLVE_CORE = 0x3
            };
            // Alignment: 4
            // Member count: 22
            enum class SaveRestoreTableFlags_t : uint32_t {
                FENTTABLE_NONE = 0x0,
                FENTTABLE_PLAYER = 0xFFFFFFFF,
                FENTTABLE_REMOVED = 0x40000000,
                FENTTABLE_MOVEABLE = 0x20000000,
                FENTTABLE_GLOBAL = 0x10000000,
                FENTTABLE_PLAYERCHILD = 0x8000000,
                LEVELMASK_BIT_0 = 0x1,
                LEVELMASK_BIT_1 = 0x2,
                LEVELMASK_BIT_2 = 0x4,
                LEVELMASK_BIT_3 = 0x8,
                LEVELMASK_BIT_4 = 0x10,
                LEVELMASK_BIT_5 = 0x20,
                LEVELMASK_BIT_6 = 0x40,
                LEVELMASK_BIT_7 = 0x80,
                LEVELMASK_BIT_8 = 0x100,
                LEVELMASK_BIT_9 = 0x200,
                LEVELMASK_BIT_10 = 0x400,
                LEVELMASK_BIT_11 = 0x800,
                LEVELMASK_BIT_12 = 0x1000,
                LEVELMASK_BIT_13 = 0x2000,
                LEVELMASK_BIT_14 = 0x4000,
                LEVELMASK_BIT_15 = 0x8000
            };
            // Alignment: 8
            // Member count: 21
            enum class InputBitMask_t : uint64_t {
                IN_NONE = 0x0,
                IN_ALL = 0xFFFFFFFFFFFFFFFF,
                IN_ATTACK = 0x1,
                IN_JUMP = 0x2,
                IN_DUCK = 0x4,
                IN_FORWARD = 0x8,
                IN_BACK = 0x10,
                IN_USE = 0x20,
                IN_TURNLEFT = 0x80,
                IN_TURNRIGHT = 0x100,
                IN_MOVELEFT = 0x200,
                IN_MOVERIGHT = 0x400,
                IN_ATTACK2 = 0x800,
                IN_RELOAD = 0x2000,
                IN_SPEED = 0x10000,
                IN_JOYAUTOSPRINT = 0x20000,
                IN_FIRST_MOD_SPECIFIC_BIT = 0xFFFFFFFFFFFFFFFF,
                IN_USEORRELOAD = 0xFFFFFFFFFFFFFFFF,
                IN_SCORE = 0xFFFFFFFFFFFFFFFF,
                IN_ZOOM = 0xFFFFFFFFFFFFFFFF,
                IN_LOOK_AT_WEAPON = 0xFFFFFFFFFFFFFFFF
            };
            // Alignment: 4
            // Member count: 14
            enum class HitGroup_t : uint32_t {
                HITGROUP_INVALID = 0xFFFFFFFF,
                HITGROUP_GENERIC = 0x0,
                HITGROUP_HEAD = 0x1,
                HITGROUP_CHEST = 0x2,
                HITGROUP_STOMACH = 0x3,
                HITGROUP_LEFTARM = 0x4,
                HITGROUP_RIGHTARM = 0x5,
                HITGROUP_LEFTLEG = 0x6,
                HITGROUP_RIGHTLEG = 0x7,
                HITGROUP_NECK = 0x8,
                HITGROUP_UNUSED = 0x9,
                HITGROUP_GEAR = 0xA,
                HITGROUP_SPECIAL = 0xB,
                HITGROUP_COUNT = 0xC
            };
            // Alignment: 4
            // Member count: 11
            enum class ChickenActivity : uint32_t {
                IDLE = 0x0,
                SQUAT = 0x1,
                WALK = 0x2,
                RUN = 0x3,
                GLIDE = 0x4,
                LAND = 0x5,
                PANIC = 0x6,
                TRICK = 0x7,
                TURN_IN_PLACE = 0x8,
                FEED = 0x9,
                SLEEP = 0xA
            };
            // Alignment: 4
            // Member count: 2
            enum class PointWorldTextReorientMode_t : uint32_t {
                POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
                POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
            };
            // Alignment: 8
            // Member count: 40
            enum class DebugOverlayBits_t : uint64_t {
                OVERLAY_TEXT_BIT = 0x1,
                OVERLAY_NAME_BIT = 0x2,
                OVERLAY_BBOX_BIT = 0x4,
                OVERLAY_PIVOT_BIT = 0x8,
                OVERLAY_MESSAGE_BIT = 0x10,
                OVERLAY_ABSBOX_BIT = 0x20,
                OVERLAY_RBOX_BIT = 0x40,
                OVERLAY_SHOW_BLOCKSLOS = 0x80,
                OVERLAY_ATTACHMENTS_BIT = 0x100,
                OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
                OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
                OVERLAY_SKELETON_BIT = 0x800,
                OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
                OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
                OVERLAY_HITBOX_BIT = 0x4000,
                OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
                OVERLAY_AUTOAIM_BIT = 0x10000,
                OVERLAY_NPC_SELECTED_BIT = 0x20000,
                OVERLAY_JOINT_INFO_BIT = 0x40000,
                OVERLAY_NPC_ROUTE_BIT = 0x80000,
                OVERLAY_VISIBILITY_TRACES_BIT = 0x100000,
                OVERLAY_NPC_ENEMIES_BIT = 0x400000,
                OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
                OVERLAY_NPC_COMBAT_BIT = 0x1000000,
                OVERLAY_NPC_TASK_BIT = 0x2000000,
                OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
                OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
                OVERLAY_NPC_KILL_BIT = 0x10000000,
                OVERLAY_BUDDHA_MODE = 0x40000000,
                OVERLAY_NPC_STEERING_REGULATIONS = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_NPC_TASK_TEXT_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_PROP_DEBUG = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_NPC_RELATION_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_VIEWOFFSET = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_ACTORNAME_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0xFFFFFFFFFFFFFFFF,
                OVERLAY_MINIMAL_TEXT = 0xFFFFFFFFFFFFFFFF
            };
            // Alignment: 4
            // Member count: 3
            enum class AmmoFlags_t : uint32_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
                AMMO_FLAG_MAX = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class DecalFlags_t : uint32_t {
                eNone = 0x0,
                eCannotClear = 0x1,
                eDecalProjectToBackfaces = 0x2,
                eAll = 0xFFFFFFFF,
                eAllButCannotClear = 0xFFFFFFFF
            };
            // Alignment: 4
            // Member count: 6
            enum class HierarchyType_t : uint32_t {
                HIERARCHY_NONE = 0x0,
                HIERARCHY_BONE_MERGE = 0x1,
                HIERARCHY_ATTACHMENT = 0x2,
                HIERARCHY_ABSORIGIN = 0x3,
                HIERARCHY_BONE = 0x4,
                HIERARCHY_TYPE_COUNT = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class doorCheck_e : uint32_t {
                DOOR_CHECK_FORWARD = 0x0,
                DOOR_CHECK_BACKWARD = 0x1,
                DOOR_CHECK_FULL = 0x2
            };
            // Alignment: 4
            // Member count: 7
            enum class BeamType_t : uint32_t {
                BEAM_INVALID = 0x0,
                BEAM_POINTS = 0x1,
                BEAM_ENTPOINT = 0x2,
                BEAM_ENTS = 0x3,
                BEAM_HOSE = 0x4,
                BEAM_SPLINE = 0x5,
                BEAM_LASER = 0x6
            };
            // Alignment: 4
            // Member count: 4
            enum class EntitySubclassScope_t : uint32_t {
                SUBCLASS_SCOPE_NONE = 0xFFFFFFFF,
                SUBCLASS_SCOPE_PRECIPITATION = 0x0,
                SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
                SUBCLASS_SCOPE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t {
                CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
                CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class CDebugOverlayCombinedTypes_t : uint32_t {
                ALL = 0x0,
                ANY = 0x1,
                COUNT = 0x2
            };
            // Alignment: 1
            // Member count: 4
            enum class ShatterGlassStressType : uint8_t {
                SHATTERGLASS_BLUNT = 0x0,
                SHATTERGLASS_BALLISTIC = 0x1,
                SHATTERGLASS_PULSE = 0x2,
                SHATTERGLASS_EXPLOSIVE = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class TrackOrientationType_t : uint32_t {
                TrackOrientation_Fixed = 0x0,
                TrackOrientation_FacePath = 0x1,
                TrackOrientation_FacePathAngles = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class WeaponSwitchReason_t : uint32_t {
                eDrawn = 0x0,
                eEquipped = 0x1,
                eUserInitiatedSwitchToLast = 0x2,
                eUserInitiatedUIKeyPress = 0x3,
                eUserInitiatedSwitchHands = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class ValueRemapperRatchetType_t : uint32_t {
                RatchetType_Absolute = 0x0,
                RatchetType_EachEngage = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class NavDirType : uint32_t {
                NORTH = 0x0,
                EAST = 0x1,
                SOUTH = 0x2,
                WEST = 0x3,
                NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class CRR_Response__ResponseEnum_t : uint32_t {
                MAX_RESPONSE_NAME = 0xC0,
                MAX_RULE_NAME = 0x80
            };
            // Alignment: 4
            // Member count: 4
            enum class MoveMountingAmount_t : uint32_t {
                MOVE_MOUNT_NONE = 0x0,
                MOVE_MOUNT_LOW = 0x1,
                MOVE_MOUNT_HIGH = 0x2,
                MOVE_MOUNT_MAXCOUNT = 0x3
            };
            // Alignment: 1
            // Member count: 3
            enum class HoverPoseFlags_t : uint8_t {
                eNone = 0x0,
                ePosition = 0x1,
                eAngles = 0x2
            };
            // Alignment: 1
            // Member count: 18
            enum class RenderFx_t : uint8_t {
                kRenderFxNone = 0x0,
                kRenderFxPulseSlow = 0x1,
                kRenderFxPulseFast = 0x2,
                kRenderFxPulseSlowWide = 0x3,
                kRenderFxPulseFastWide = 0x4,
                kRenderFxFadeSlow = 0x5,
                kRenderFxFadeFast = 0x6,
                kRenderFxSolidSlow = 0x7,
                kRenderFxSolidFast = 0x8,
                kRenderFxStrobeSlow = 0x9,
                kRenderFxStrobeFast = 0xA,
                kRenderFxStrobeFaster = 0xB,
                kRenderFxFlickerSlow = 0xC,
                kRenderFxFlickerFast = 0xD,
                kRenderFxFadeOut = 0xE,
                kRenderFxFadeIn = 0xF,
                kRenderFxPulseFastWider = 0x10,
                kRenderFxMax = 0x11
            };
            // Alignment: 4
            // Member count: 35
            enum class vote_create_failed_t : uint32_t {
                VOTE_FAILED_GENERIC = 0x0,
                VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
                VOTE_FAILED_RATE_EXCEEDED = 0x2,
                VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
                VOTE_FAILED_QUORUM_FAILURE = 0x4,
                VOTE_FAILED_ISSUE_DISABLED = 0x5,
                VOTE_FAILED_MAP_NOT_FOUND = 0x6,
                VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
                VOTE_FAILED_FAILED_RECENTLY = 0x8,
                VOTE_FAILED_TEAM_CANT_CALL = 0x9,
                VOTE_FAILED_WAITINGFORPLAYERS = 0xA,
                VOTE_FAILED_PLAYERNOTFOUND = 0xB,
                VOTE_FAILED_CANNOT_KICK_ADMIN = 0xC,
                VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xD,
                VOTE_FAILED_SPECTATOR = 0xE,
                VOTE_FAILED_FAILED_RECENT_KICK = 0xF,
                VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 0x10,
                VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 0x11,
                VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 0x12,
                VOTE_FAILED_FAILED_RECENT_RESTART = 0x13,
                VOTE_FAILED_SWAP_IN_PROGRESS = 0x14,
                VOTE_FAILED_DISABLED = 0x15,
                VOTE_FAILED_NEXTLEVEL_SET = 0x16,
                VOTE_FAILED_TOO_EARLY_SURRENDER = 0x17,
                VOTE_FAILED_MATCH_PAUSED = 0x18,
                VOTE_FAILED_MATCH_NOT_PAUSED = 0x19,
                VOTE_FAILED_NOT_IN_WARMUP = 0x1A,
                VOTE_FAILED_NOT_10_PLAYERS = 0x1B,
                VOTE_FAILED_TIMEOUT_ACTIVE = 0x1C,
                VOTE_FAILED_TIMEOUT_INACTIVE = 0x1D,
                VOTE_FAILED_TIMEOUT_EXHAUSTED = 0x1E,
                VOTE_FAILED_CANT_ROUND_END = 0x1F,
                VOTE_FAILED_REMATCH = 0x20,
                VOTE_FAILED_CONTINUE = 0x21,
                VOTE_FAILED_MAX = 0x22
            };
            // Alignment: 4
            // Member count: 27
            enum class RumbleEffect_t : uint32_t {
                RUMBLE_INVALID = 0xFFFFFFFF,
                RUMBLE_STOP_ALL = 0x0,
                RUMBLE_PISTOL = 0x1,
                RUMBLE_357 = 0x2,
                RUMBLE_SMG1 = 0x3,
                RUMBLE_AR2 = 0x4,
                RUMBLE_SHOTGUN_SINGLE = 0x5,
                RUMBLE_SHOTGUN_DOUBLE = 0x6,
                RUMBLE_AR2_ALT_FIRE = 0x7,
                RUMBLE_RPG_MISSILE = 0x8,
                RUMBLE_CROWBAR_SWING = 0x9,
                RUMBLE_AIRBOAT_GUN = 0xA,
                RUMBLE_JEEP_ENGINE_LOOP = 0xB,
                RUMBLE_FLAT_LEFT = 0xC,
                RUMBLE_FLAT_RIGHT = 0xD,
                RUMBLE_FLAT_BOTH = 0xE,
                RUMBLE_DMG_LOW = 0xF,
                RUMBLE_DMG_MED = 0x10,
                RUMBLE_DMG_HIGH = 0x11,
                RUMBLE_FALL_LONG = 0x12,
                RUMBLE_FALL_SHORT = 0x13,
                RUMBLE_PHYSCANNON_OPEN = 0x14,
                RUMBLE_PHYSCANNON_PUNT = 0x15,
                RUMBLE_PHYSCANNON_LOW = 0x16,
                RUMBLE_PHYSCANNON_MEDIUM = 0x17,
                RUMBLE_PHYSCANNON_HIGH = 0x18,
                NUM_RUMBLE_EFFECTS = 0x19
            };
            // Alignment: 4
            // Member count: 6
            enum class LatchDirtyPermission_t : uint32_t {
                LATCH_DIRTY_DISALLOW = 0x0,
                LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
                LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
                LATCH_DIRTY_PREDICTION = 0x3,
                LATCH_DIRTY_FRAMESIMULATE = 0x4,
                LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
            };
            // Alignment: 4
            // Member count: 5
            enum class DoorState_t : uint32_t {
                DOOR_STATE_CLOSED = 0x0,
                DOOR_STATE_OPENING = 0x1,
                DOOR_STATE_OPEN = 0x2,
                DOOR_STATE_CLOSING = 0x3,
                DOOR_STATE_AJAR = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class ChoreoLookAtMode_t : uint32_t {
                eInvalid = 0xFFFFFFFF,
                eChest = 0x0,
                eHead = 0x1,
                eEyesOnly = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ChatIgnoreType_t : uint32_t {
                CHAT_IGNORE_NONE = 0x0,
                CHAT_IGNORE_ALL = 0x1,
                CHAT_IGNORE_TEAM = 0x2
            };
            // Alignment: 4
            // Member count: 7
            enum class PlayerConnectedState : uint32_t {
                NeverConnected = 0xFFFFFFFF,
                Connected = 0x0,
                Connecting = 0x1,
                Reconnecting = 0x2,
                Disconnecting = 0x3,
                Disconnected = 0x4,
                Reserved = 0x5
            };
            // Alignment: 4
            // Member count: 29
            enum class PreviewCharacterBannerAnimation : uint32_t {
                INVALID = 0xFFFFFFFF,
                IDLE_OFFSCREEN = 0x0,
                BANNER_AWP_ACE_GUN = 0x1,
                BANNER_AWP_ACE_A = 0x2,
                BANNER_AWP_ACE_B = 0x3,
                BANNER_AWP_ACE_C = 0x4,
                BANNER_AWP_ACE_D = 0x5,
                BANNER_AWP_ACE_E = 0x6,
                BANNER_PISTOL3SHOT = 0x7,
                BANNER_3SHOT_A = 0x8,
                BANNER_3SHOT_B = 0x9,
                BANNER_3SHOT_C = 0xA,
                BANNER_PISTOL4SHOT = 0xB,
                BANNER_4SHOT_A = 0xC,
                BANNER_4SHOT_B = 0xD,
                BANNER_4SHOT_C = 0xE,
                BANNER_4SHOT_D = 0xF,
                CELEBRATE_STRETCH_NOWEAP_IDLE0 = 0x10,
                BANNER_BOMB_PLANT = 0x11,
                BANNER_BOMB_DEFUSAL_VER = 0x12,
                BANNER_FIRE = 0x13,
                BANNER_BOMB_BLAST_TOSS = 0x14,
                BANNER_BOMB_BLAST01 = 0x15,
                BANNER_BOMB_BLAST02 = 0x16,
                BANNER_BOMB_BLAST03 = 0x17,
                BANNER_CELEBRATE_01 = 0x18,
                BANNER_CELEBRATE_02 = 0x19,
                BANNER_CELEBRATE_03 = 0x1A,
                BANNER_CELEBRATE_04 = 0x1B
            };
            // Alignment: 4
            // Member count: 1
            enum class navproperties_t : uint32_t {
                NAV_IGNORE = 0x1
            };
            // Alignment: 2
            // Member count: 7
            enum class EntityEffects_t : uint16_t {
                DEPRICATED_EF_NOINTERP = 0x8,
                EF_NOSHADOW = 0x10,
                EF_NODRAW = 0x20,
                EF_NORECEIVESHADOW = 0x40,
                EF_PARENT_ANIMATES = 0x200,
                EF_NODRAW_BUT_TRANSMIT = 0x400,
                EF_MAX_BITS = 0xA
            };
            // Alignment: 4
            // Member count: 6
            enum class ChoreoExternalAnimgraphControlState_t : uint32_t {
                eNone = 0x0,
                eBegin = 0x1,
                eLooping = 0x2,
                eExit = 0x3,
                eAbort = 0x4,
                eCount = 0x5
            };
            // Alignment: 1
            // Member count: 9
            enum class SolidType_t : uint8_t {
                SOLID_NONE = 0x0,
                SOLID_BSP = 0x1,
                SOLID_BBOX = 0x2,
                SOLID_OBB = 0x3,
                SOLID_SPHERE = 0x4,
                SOLID_POINT = 0x5,
                SOLID_VPHYSICS = 0x6,
                SOLID_CAPSULE = 0x7,
                SOLID_LAST = 0x8
            };
            // Alignment: 4
            // Member count: 22
            enum class DamageTypes_t : uint32_t {
                DMG_GENERIC = 0x0,
                DMG_CRUSH = 0x1,
                DMG_BULLET = 0x2,
                DMG_SLASH = 0x4,
                DMG_BURN = 0x8,
                DMG_VEHICLE = 0x10,
                DMG_FALL = 0x20,
                DMG_BLAST = 0x40,
                DMG_CLUB = 0x80,
                DMG_SHOCK = 0x100,
                DMG_SONIC = 0x200,
                DMG_ENERGYBEAM = 0x400,
                DMG_BUCKSHOT = 0x800,
                DMG_BLAST_SURFACE = 0x1000,
                DMG_DISSOLVE = 0x2000,
                DMG_DROWN = 0x4000,
                DMG_POISON = 0x8000,
                DMG_RADIATION = 0x10000,
                DMG_DROWNRECOVER = 0x20000,
                DMG_ACID = 0x40000,
                DMG_LASTGENERICFLAG = 0x40000,
                DMG_HEADSHOT = 0x80000
            };
            // Alignment: 4
            // Member count: 3
            enum class PointWorldTextJustifyVertical_t : uint32_t {
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class attributeprovidertypes_t : uint32_t {
                PROVIDER_GENERIC = 0x0,
                PROVIDER_WEAPON = 0x1
            };
            // Alignment: 1
            // Member count: 6
            enum class MoveCollide_t : uint8_t {
                MOVECOLLIDE_DEFAULT = 0x0,
                MOVECOLLIDE_FLY_BOUNCE = 0x1,
                MOVECOLLIDE_FLY_CUSTOM = 0x2,
                MOVECOLLIDE_FLY_SLIDE = 0x3,
                MOVECOLLIDE_COUNT = 0x4,
                MOVECOLLIDE_MAX_BITS = 0x3
            };
            // Alignment: 4
            // Member count: 7
            enum class IChoreoServices__ChoreoState_t : uint32_t {
                STATE_PRE_SCRIPT = 0x0,
                STATE_WAIT_FOR_SCRIPT = 0x1,
                STATE_WALK_TO_MARK = 0x2,
                STATE_SYNCHRONIZE_SCRIPT = 0x3,
                STATE_PLAY_SCRIPT = 0x4,
                STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
                STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6
            };
            // Alignment: 4
            // Member count: 4
            enum class ValueRemapperOutputType_t : uint32_t {
                OutputType_AnimationCycle = 0x0,
                OutputType_RotationX = 0x1,
                OutputType_RotationY = 0x2,
                OutputType_RotationZ = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class INavObstacle__NavObstacleType_t : uint32_t {
                NAV_OBSTACLE_TYPE_INVALID = 0xFFFFFFFF,
                NAV_OBSTACLE_TYPE_NONE = 0x0,
                NAV_OBSTACLE_TYPE_AVOID = 0x1,
                NAV_OBSTACLE_TYPE_CONN = 0x2,
                NAV_OBSTACLE_TYPE_BLOCK = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class PointTemplateOwnerSpawnGroupType_t : uint32_t {
                INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
                INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
                INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class EContributionScoreFlag_t : uint8_t {
                k_EContributionScoreFlag_Default = 0x0,
                k_EContributionScoreFlag_Objective = 0x1,
                k_EContributionScoreFlag_Bullets = 0x2
            };
            // Alignment: 1
            // Member count: 9
            enum class CCSPlayerAnimationState__Direction_t : uint8_t {
                None = 0x0,
                N = 0x1,
                NE = 0x2,
                E = 0x3,
                SE = 0x4,
                S = 0x5,
                SW = 0x6,
                W = 0x7,
                NW = 0x8
            };
            // Alignment: 4
            // Member count: 3
            enum class eSplinePushType : uint32_t {
                k_eSplinePushAlong = 0x0,
                k_eSplinePushAway = 0x1,
                k_eSplinePushTowards = 0x2
            };
            // Alignment: 2
            // Member count: 29
            enum class WeaponGameplayAnimState : uint16_t {
                WPN_ANIMSTATE_UNINITIALIZED = 0x0,
                WPN_ANIMSTATE_DROPPED = 0x1,
                WPN_ANIMSTATE_HOLSTERED = 0xA,
                WPN_ANIMSTATE_DEPLOY = 0xB,
                WPN_ANIMSTATE_IDLE = 0x32,
                WPN_ANIMSTATE_SHOOT_PRIMARY = 0x64,
                WPN_ANIMSTATE_SHOOT_SECONDARY = 0x65,
                WPN_ANIMSTATE_SHOOT_DRYFIRE = 0x66,
                WPN_ANIMSTATE_CHARGE = 0x67,
                WPN_ANIMSTATE_GRENADE_PULL_PIN = 0xC8,
                WPN_ANIMSTATE_GRENADE_READY = 0xC9,
                WPN_ANIMSTATE_GRENADE_THROW = 0xCA,
                WPN_ANIMSTATE_C4_PLANT = 0x12C,
                WPN_ANIMSTATE_HEALTHSHOT_INJECT = 0x190,
                WPN_ANIMSTATE_KNIFE_PRIMARY_HIT = 0x1F4,
                WPN_ANIMSTATE_KNIFE_PRIMARY_MISS = 0x1F5,
                WPN_ANIMSTATE_KNIFE_SECONDARY_HIT = 0x1F6,
                WPN_ANIMSTATE_KNIFE_SECONDARY_MISS = 0x1F7,
                WPN_ANIMSTATE_KNIFE_PRIMARY_STAB = 0x1F8,
                WPN_ANIMSTATE_KNIFE_SECONDARY_STAB = 0x1F9,
                WPN_ANIMSTATE_SILENCER_APPLY = 0x258,
                WPN_ANIMSTATE_SILENCER_REMOVE = 0x259,
                WPN_ANIMSTATE_RELOAD = 0x320,
                WPN_ANIMSTATE_RELOAD_OUTRO = 0x321,
                WPN_ANIMSTATE_INSPECT = 0x3E8,
                WPN_ANIMSTATE_INSPECT_OUTRO = 0x3E9,
                WPN_ANIMSTATE_INVENTORY_UI_TUMBLE = 0x5DC,
                WPN_ANIMSTATE_INVENTORY_UI_KEYCHAIN_APPLY = 0x5DD,
                WPN_ANIMSTATE_END_VALID = 0x7D0
            };
            // Alignment: 4
            // Member count: 2
            enum class EDestructiblePartRadiusDamageApplyType : uint32_t {
                ScaleByExplosionRadius = 0x0,
                PrioritizeClosestPart = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class EntityDistanceMode_t : uint32_t {
                eOriginToOrigin = 0x0,
                eCenterToCenter = 0x1,
                eAxisToAxis = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseTraceContents_t : uint32_t {
                STATIC_LEVEL = 0x0,
                SOLID = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class PointWorldTextJustifyHorizontal_t : uint32_t {
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2
            };
            // Alignment: 4
            // Member count: 7
            enum class ShakeCommand_t : uint32_t {
                SHAKE_START = 0x0,
                SHAKE_STOP = 0x1,
                SHAKE_AMPLITUDE = 0x2,
                SHAKE_FREQUENCY = 0x3,
                SHAKE_START_RUMBLEONLY = 0x4,
                SHAKE_START_NORUMBLE = 0x5,
                SHAKE_DURATION = 0x6
            };
            // Alignment: 4
            // Member count: 23
            enum class Flags_t : uint32_t {
                FL_ONGROUND = 0x1,
                FL_DUCKING = 0x2,
                FL_WATERJUMP = 0x4,
                FL_BOT = 0x10,
                FL_FROZEN = 0x20,
                FL_ATCONTROLS = 0x40,
                FL_CLIENT = 0x80,
                FL_FAKECLIENT = 0x100,
                FL_FLY = 0x400,
                FL_SUPPRESS_SAVE = 0x800,
                FL_IN_VEHICLE = 0x1000,
                FL_GODMODE = 0x4000,
                FL_NOTARGET = 0x8000,
                FL_AIMTARGET = 0x10000,
                FL_GRENADE = 0x100000,
                FL_DONTTOUCH = 0x400000,
                FL_BASEVELOCITY = 0x800000,
                FL_CONVEYOR = 0x1000000,
                FL_OBJECT = 0x2000000,
                FL_ONFIRE = 0x8000000,
                FL_DISSOLVING = 0x10000000,
                FL_TRANSRAGDOLL = 0x20000000,
                FL_UNBLOCKABLE_BY_PLAYER = 0x40000000
            };
            // Alignment: 4
            // Member count: 3
            enum class TRAIN_CODE : uint32_t {
                TRAIN_SAFE = 0x0,
                TRAIN_BLOCKING = 0x1,
                TRAIN_FOLLOWING = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class DestructiblePartDestructionDeathBehavior_t : uint32_t {
                eDoNotKill = 0x0,
                eKill = 0x1,
                eGib = 0x2,
                eRemove = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class BrushSolidities_e : uint32_t {
                BRUSHSOLID_TOGGLE = 0x0,
                BRUSHSOLID_NEVER = 0x1,
                BRUSHSOLID_ALWAYS = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class InteractionPriority_t : uint32_t {
                INTERACT_PRIORITY_NONE = 0x0,
                INTERACT_PRIORITY_PASSIVE = 0x1,
                INTERACT_PRIORITY_LOW = 0x2,
                INTERACT_PRIORITY_MED = 0x3,
                INTERACT_PRIORITY_HIGH = 0x4
            };
            // Alignment: 4
            // Member count: 13
            enum class QuestProgress__Reason : uint32_t {
                QUEST_NONINITIALIZED = 0x0,
                QUEST_OK = 0x1,
                QUEST_NOT_ENOUGH_PLAYERS = 0x2,
                QUEST_WARMUP = 0x3,
                QUEST_NOT_CONNECTED_TO_STEAM = 0x4,
                QUEST_NONOFFICIAL_SERVER = 0x5,
                QUEST_NO_ENTITLEMENT = 0x6,
                QUEST_NO_QUEST = 0x7,
                QUEST_PLAYER_IS_BOT = 0x8,
                QUEST_WRONG_MAP = 0x9,
                QUEST_WRONG_MODE = 0xA,
                QUEST_NOT_SYNCED_WITH_SERVER = 0xB,
                QUEST_REASON_MAX = 0xC
            };
            // Alignment: 4
            // Member count: 2
            enum class ModifyDamageReturn_t : uint32_t {
                CONTINUE_TO_APPLY_DAMAGE = 0x0,
                ABORT_DO_NOT_APPLY_DAMAGE = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class ShadowType_t : uint32_t {
                SHADOWS_NONE = 0x0,
                SHADOWS_SIMPLE = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class GrenadeType_t : uint32_t {
                GRENADE_TYPE_EXPLOSIVE = 0x0,
                GRENADE_TYPE_FLASH = 0x1,
                GRENADE_TYPE_FIRE = 0x2,
                GRENADE_TYPE_DECOY = 0x3,
                GRENADE_TYPE_SMOKE = 0x4,
                GRENADE_TYPE_TOTAL = 0x5
            };
            // Alignment: 4
            // Member count: 2
            enum class ValueRemapperInputType_t : uint32_t {
                InputType_PlayerShootPosition = 0x0,
                InputType_PlayerShootPositionAroundAxis = 0x1
            };
            // Alignment: 1
            // Member count: 8
            enum class EKillTypes_t : uint8_t {
                KILL_NONE = 0x0,
                KILL_DEFAULT = 0x1,
                KILL_HEADSHOT = 0x2,
                KILL_BLAST = 0x3,
                KILL_BURN = 0x4,
                KILL_SLASH = 0x5,
                KILL_SHOCK = 0x6,
                KILLTYPE_COUNT = 0x7
            };
            // Alignment: 4
            // Member count: 25
            enum class WeaponSound_t : uint32_t {
                WEAPON_SOUND_EMPTY = 0x0,
                WEAPON_SOUND_SECONDARY_EMPTY = 0x1,
                WEAPON_SOUND_SINGLE = 0x2,
                WEAPON_SOUND_SECONDARY_ATTACK = 0x3,
                WEAPON_SOUND_MELEE_MISS = 0x4,
                WEAPON_SOUND_MELEE_HIT = 0x5,
                WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
                WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
                WEAPON_SOUND_MELEE_HIT_NPC = 0x8,
                WEAPON_SOUND_SPECIAL1 = 0x9,
                WEAPON_SOUND_SPECIAL2 = 0xA,
                WEAPON_SOUND_SPECIAL3 = 0xB,
                WEAPON_SOUND_NEARLYEMPTY = 0xC,
                WEAPON_SOUND_IMPACT = 0xD,
                WEAPON_SOUND_REFLECT = 0xE,
                WEAPON_SOUND_SECONDARY_IMPACT = 0xF,
                WEAPON_SOUND_SECONDARY_REFLECT = 0x10,
                WEAPON_SOUND_RELOAD = 0x11,
                WEAPON_SOUND_SINGLE_ACCURATE = 0x12,
                WEAPON_SOUND_ZOOM_IN = 0x13,
                WEAPON_SOUND_ZOOM_OUT = 0x14,
                WEAPON_SOUND_MOUSE_PRESSED = 0x15,
                WEAPON_SOUND_DROP = 0x16,
                WEAPON_SOUND_RADIO_USE = 0x17,
                WEAPON_SOUND_NUM_TYPES = 0x18
            };
            // Alignment: 8
            // Member count: 22
            enum class TakeDamageFlags_t : uint64_t {
                DFLAG_NONE = 0x0,
                DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
                DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
                DFLAG_SUPPRESS_EFFECTS = 0x4,
                DFLAG_PREVENT_DEATH = 0x8,
                DFLAG_FORCE_DEATH = 0x10,
                DFLAG_ALWAYS_GIB = 0x20,
                DFLAG_NEVER_GIB = 0x40,
                DFLAG_REMOVE_NO_RAGDOLL = 0x80,
                DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
                DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
                DFLAG_RADIUS_DMG = 0x400,
                DFLAG_FORCEREDUCEARMOR_DMG = 0x800,
                DFLAG_SUPPRESS_INTERRUPT_FLINCH = 0x1000,
                DFLAG_IGNORE_DESTRUCTIBLE_PARTS = 0x2000,
                DFLAG_SUPPRESS_BREAKABLES = 0x4000,
                DFLAG_FORCE_PHYSICS_FORCE = 0x8000,
                DFLAG_SUPPRESS_SCREENSPACE_DAMAGE_FX = 0x10000,
                DFLAG_ALLOW_NON_AUTHORITATIVE = 0x20000,
                DMG_LASTDFLAG = 0x20000,
                DFLAG_IGNORE_ARMOR = 0x40000,
                DFLAG_SUPPRESS_UTILREMOVE = 0x80000
            };
            // Alignment: 4
            // Member count: 2
            enum class ValueRemapperHapticsType_t : uint32_t {
                HaticsType_Default = 0x0,
                HaticsType_None = 0x1
            };
            // Alignment: 4
            // Member count: 10
            enum class Disposition_t : uint32_t {
                D_ER = 0x0,
                D_HT = 0x1,
                D_FR = 0x2,
                D_LI = 0x3,
                D_NU = 0x4,
                D_ERROR = 0x0,
                D_HATE = 0x1,
                D_FEAR = 0x2,
                D_LIKE = 0x3,
                D_NEUTRAL = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class RotatorTargetSpace_t : uint32_t {
                ROTATOR_TARGET_WORLDSPACE = 0x0,
                ROTATOR_TARGET_LOCALSPACE = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class CanPlaySequence_t : uint32_t {
                CANNOT_PLAY = 0x0,
                CAN_PLAY_NOW = 0x1,
                CAN_PLAY_ENQUEUED = 0x2
            };
            // Alignment: 1
            // Member count: 4
            enum class CCSPlayerAnimationState__AirAction_t : uint8_t {
                None = 0x0,
                Jump = 0x1,
                StartFall = 0x2,
                Land = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class MedalRank_t : uint32_t {
                MEDAL_RANK_NONE = 0x0,
                MEDAL_RANK_BRONZE = 0x1,
                MEDAL_RANK_SILVER = 0x2,
                MEDAL_RANK_GOLD = 0x3,
                MEDAL_RANK_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 6
            enum class ObserverMode_t : uint32_t {
                OBS_MODE_NONE = 0x0,
                OBS_MODE_FIXED = 0x1,
                OBS_MODE_IN_EYE = 0x2,
                OBS_MODE_CHASE = 0x3,
                OBS_MODE_ROAMING = 0x4,
                NUM_OBSERVER_MODES = 0x5
            };
            // Alignment: 4
            // Member count: 2
            enum class FuncDoorSpawnPos_t : uint32_t {
                FUNC_DOOR_SPAWN_CLOSED = 0x0,
                FUNC_DOOR_SPAWN_OPEN = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class EOverrideBlockLOS_t : uint32_t {
                BLOCK_LOS_DEFAULT = 0x0,
                BLOCK_LOS_FORCE_FALSE = 0x1,
                BLOCK_LOS_FORCE_TRUE = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class EntityAttachmentType_t : uint32_t {
                eAbsOrigin = 0x0,
                eCenter = 0x1,
                eEyes = 0x2,
                eAttachment = 0x3
            };
            // Alignment: 1
            // Member count: 14
            enum class MoveType_t : uint8_t {
                MOVETYPE_NONE = 0x0,
                MOVETYPE_OBSOLETE = 0x1,
                MOVETYPE_WALK = 0x2,
                MOVETYPE_FLY = 0x3,
                MOVETYPE_FLYGRAVITY = 0x4,
                MOVETYPE_VPHYSICS = 0x5,
                MOVETYPE_PUSH = 0x6,
                MOVETYPE_NOCLIP = 0x7,
                MOVETYPE_OBSERVER = 0x8,
                MOVETYPE_LADDER = 0x9,
                MOVETYPE_CUSTOM = 0xA,
                MOVETYPE_LAST = 0xB,
                MOVETYPE_INVALID = 0xB,
                MOVETYPE_MAX_BITS = 0x5
            };
            // Parent: CCSWeaponBaseShotgun
            // Field count: 0
            namespace CWeaponNOVA {
            }
            // Parent: CModelPointEntity
            // Field count: 16
            namespace CPointWorldText {
                constexpr std::ptrdiff_t m_messageText = 0x768; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x968; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x9A8; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x9E8; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x9E9; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x9EC; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x9F0; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x9F4; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0x9F8; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x9FC; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0xA00; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0xA04; // float32
                constexpr std::ptrdiff_t m_Color = 0xA08; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xA0C; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xA10; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0xA14; // PointWorldTextReorientMode_t
            }
            // Parent: CPointEntity
            // Field count: 10
            namespace CAmbientGeneric {
                constexpr std::ptrdiff_t m_radius = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flMaxRadius = 0x4AC; // float32
                constexpr std::ptrdiff_t m_iSoundLevel = 0x4B0; // soundlevel_t
                constexpr std::ptrdiff_t m_dpv = 0x4B4; // dynpitchvol_t
                constexpr std::ptrdiff_t m_fActive = 0x518; // bool
                constexpr std::ptrdiff_t m_fLooping = 0x519; // bool
                constexpr std::ptrdiff_t m_iszSound = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSourceEntName = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSoundSource = 0x530; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x534; // CEntityIndex
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CEnvEntityMaker {
                constexpr std::ptrdiff_t m_vecEntityMins = 0x4A8; // Vector
                constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4B4; // Vector
                constexpr std::ptrdiff_t m_hCurrentInstance = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x4C8; // Vector
                constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x4D4; // QAngle
                constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x4E0; // float32
                constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x4E4; // float32
                constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x4E8; // bool
                constexpr std::ptrdiff_t m_iszTemplate = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x510; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 0
            namespace CPulseGraphInstance_GameBlackboard {
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CPointEntity {
            }
            // Parent: CBaseFilter
            // Field count: 5
            namespace CFilterEnemy {
                constexpr std::ptrdiff_t m_iszEnemyName = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRadius = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flOuterRadius = 0x4EC; // float32
                constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x4F0; // int32
                constexpr std::ptrdiff_t m_iszPlayerName = 0x4F8; // CUtlSymbolLarge
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
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
            // Parent: CFuncTrackChange
            // Field count: 0
            namespace CFuncTrackAuto {
            }
            // Parent: CBaseEntity
            // Field count: 77
            namespace CScriptedSequence {
                constexpr std::ptrdiff_t m_iszEntry = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPreIdle = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPlay = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostIdle = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszNextScript = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntity = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSyncGroup = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nMoveTo = 0x4E8; // ScriptedMoveTo_t
                constexpr std::ptrdiff_t m_nMoveToGait = 0x4EC; // SharedMovementGait_t
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x4F0; // ScriptedHeldWeaponBehavior_t
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x4F4; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x4F9; // bool
                constexpr std::ptrdiff_t m_bIsPlayingAction = 0x4FA; // bool
                constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x4FB; // bool
                constexpr std::ptrdiff_t m_bDontRotateOther = 0x4FC; // bool
                constexpr std::ptrdiff_t m_bIsRepeatable = 0x4FD; // bool
                constexpr std::ptrdiff_t m_bShouldLeaveCorpse = 0x4FE; // bool
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4FF; // bool
                constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x500; // bool
                constexpr std::ptrdiff_t m_bCanOverrideNPCState = 0x501; // bool
                constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x502; // bool
                constexpr std::ptrdiff_t m_bHighPriority = 0x503; // bool
                constexpr std::ptrdiff_t m_bHideDebugComplaints = 0x504; // bool
                constexpr std::ptrdiff_t m_bContinueOnDeath = 0x505; // bool
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x506; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x507; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x508; // bool
                constexpr std::ptrdiff_t m_bSynchPostIdles = 0x509; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x50A; // bool
                constexpr std::ptrdiff_t m_bIgnoreGravity = 0x50B; // bool
                constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x50C; // bool
                constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x50D; // bool
                constexpr std::ptrdiff_t m_bDontAddModifiers = 0x50E; // bool
                constexpr std::ptrdiff_t m_bDisableAimingWhileMoving = 0x50F; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x510; // bool
                constexpr std::ptrdiff_t m_flRadius = 0x514; // float32
                constexpr std::ptrdiff_t m_flRepeat = 0x518; // float32
                constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x51C; // float32
                constexpr std::ptrdiff_t m_flMoveInterpTime = 0x520; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x524; // float32
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x528; // float32
                constexpr std::ptrdiff_t m_bWaitUntilMoveCompletesToStartAnimation = 0x52C; // bool
                constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x530; // int32
                constexpr std::ptrdiff_t m_startTime = 0x534; // GameTime_t
                constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x538; // bool
                constexpr std::ptrdiff_t m_saved_effects = 0x53C; // int32
                constexpr std::ptrdiff_t m_savedFlags = 0x540; // int32
                constexpr std::ptrdiff_t m_savedCollisionGroup = 0x544; // int32
                constexpr std::ptrdiff_t m_bInterruptable = 0x548; // bool
                constexpr std::ptrdiff_t m_sequenceStarted = 0x549; // bool
                constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x54A; // bool
                constexpr std::ptrdiff_t m_hTargetEnt = 0x54C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hNextCine = 0x550; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_bThinking = 0x554; // bool
                constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x555; // bool
                constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x556; // bool
                constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x557; // bool
                constexpr std::ptrdiff_t m_hForcedTarget = 0x558; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x55C; // bool
                constexpr std::ptrdiff_t m_bForceSynch = 0x55D; // bool
                constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x55E; // bool
                constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x55F; // bool
                constexpr std::ptrdiff_t m_onDeathBehavior = 0x560; // ScriptedOnDeath_t
                constexpr std::ptrdiff_t m_ConflictResponse = 0x564; // ScriptedConflictResponse_t
                constexpr std::ptrdiff_t m_OnBeginSequence = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x580; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndSequence = 0x598; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x5B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCancelSequence = 0x5C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x5E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnScriptEvent = 0x5F8; // CEntityIOOutput[8]
                constexpr std::ptrdiff_t m_matOtherToMain = 0x6C0; // CTransform
                constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x6E0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x6E4; // int32
                constexpr std::ptrdiff_t m_bSkipFadeIn = 0x6E8; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CFogTrigger {
                constexpr std::ptrdiff_t m_fog = 0x8C8; // fogparams_t
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoTeleportDestination {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointBroadcastClientCommand {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x48; // GameTime_t[5]
                constexpr std::ptrdiff_t m_hPlayerPing = 0x5C; // CHandle<CPlayerPing>
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CHEGrenade {
            }
            // Parent: CBaseEntity
            // Field count: 9
            namespace CPhysicsSpring {
                constexpr std::ptrdiff_t m_pSpringJoint = 0x4A8; // IPhysicsJoint*
                constexpr std::ptrdiff_t m_flFrequency = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flRestLength = 0x4B8; // float32
                constexpr std::ptrdiff_t m_nameAttachStart = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttachEnd = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_start = 0x4D0; // VectorWS
                constexpr std::ptrdiff_t m_end = 0x4DC; // VectorWS
                constexpr std::ptrdiff_t m_teleportTick = 0x4E8; // uint32
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvMuzzleFlash {
                constexpr std::ptrdiff_t m_flScale = 0x4A8; // float32
                constexpr std::ptrdiff_t m_iszParentAttachment = 0x4B0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 5
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBaseTriggerAPI {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponRevolver {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncTrainControls {
            }
            // Parent: None
            // Field count: 4
            namespace CBtActionCombatPositioning {
                constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_ActionTimer = 0x88; // CountdownTimer
                constexpr std::ptrdiff_t m_bCrouching = 0xA0; // bool
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CFuncRetakeBarrier {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x8C8; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x9E0; // float32
            }
            // Parent: CTonemapController2
            // Field count: 0
            namespace CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CPathTrack {
                constexpr std::ptrdiff_t m_pnext = 0x4A8; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_pprevious = 0x4AC; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_paltpath = 0x4B0; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_flRadius = 0x4B4; // float32
                constexpr std::ptrdiff_t m_length = 0x4B8; // float32
                constexpr std::ptrdiff_t m_altName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIterVal = 0x4C8; // int32
                constexpr std::ptrdiff_t m_eOrientationType = 0x4CC; // TrackOrientationType_t
                constexpr std::ptrdiff_t m_OnPass = 0x4D0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: CBaseTrigger
            // Field count: 5
            namespace CTriggerProximity {
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x8C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszMeasureTarget = 0x8D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fRadius = 0x8D8; // float32
                constexpr std::ptrdiff_t m_nTouchers = 0x8DC; // int32
                constexpr std::ptrdiff_t m_NearestEntityDistance = 0x8E0; // CEntityOutputTemplate<float32>
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CTankTrainAI {
                constexpr std::ptrdiff_t m_hTrain = 0x4A8; // CHandle<CFuncTrackTrain>
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4AC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundPlaying = 0x4B0; // int32
                constexpr std::ptrdiff_t m_startSoundName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_engineSoundName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_movementSoundName = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_targetEntityName = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CRulePointEntity
            // Field count: 2
            namespace CGameText {
                constexpr std::ptrdiff_t m_iszMessage = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_textParms = 0x780; // hudtextparms_t
            }
            // Parent: CRulePointEntity
            // Field count: 0
            namespace CGameEnd {
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoDeathmatchSpawn {
            }
            // Parent: CPlayerControllerComponent
            // Field count: 10
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
                constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32
                constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xF48; // uint32[1]
                constexpr std::ptrdiff_t m_unCurrentLoadoutHash = 0xF50; // uint64
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0xF58; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 9
            namespace CCSPlayerModernJump {
                constexpr std::ptrdiff_t m_nLastActualJumpPressTick = 0x10; // GameTick_t
                constexpr std::ptrdiff_t m_flLastActualJumpPressFrac = 0x14; // float32
                constexpr std::ptrdiff_t m_nLastUsableJumpPressTick = 0x18; // GameTick_t
                constexpr std::ptrdiff_t m_flLastUsableJumpPressFrac = 0x1C; // float32
                constexpr std::ptrdiff_t m_nLastLandedTick = 0x20; // GameTick_t
                constexpr std::ptrdiff_t m_flLastLandedFrac = 0x24; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityX = 0x28; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityY = 0x2C; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityZ = 0x30; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: CBaseTrigger
            // Field count: 25
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x8C8; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x8D4; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x8E0; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x8E1; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x8F0; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x900; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x904; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x908; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x910; // CountdownTimer
                constexpr std::ptrdiff_t m_vFanOriginWS = 0x928; // VectorWS
                constexpr std::ptrdiff_t m_vFanOriginLS = 0x934; // Vector
                constexpr std::ptrdiff_t m_vFanEndLS = 0x940; // Vector
                constexpr std::ptrdiff_t m_vNoiseDirectionTarget = 0x94C; // Vector
                constexpr std::ptrdiff_t m_iszInfoFan = 0x958; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRopeForceScale = 0x960; // float32
                constexpr std::ptrdiff_t m_flParticleForceScale = 0x964; // float32
                constexpr std::ptrdiff_t m_flPlayerForce = 0x968; // float32
                constexpr std::ptrdiff_t m_bPlayerWindblock = 0x96C; // bool
                constexpr std::ptrdiff_t m_flNPCForce = 0x970; // float32
                constexpr std::ptrdiff_t m_flRampTime = 0x974; // float32
                constexpr std::ptrdiff_t m_fNoiseDegrees = 0x978; // float32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x97C; // float32
                constexpr std::ptrdiff_t m_bPushPlayer = 0x980; // bool
                constexpr std::ptrdiff_t m_bRampDown = 0x981; // bool
                constexpr std::ptrdiff_t m_nManagerFanIdx = 0x984; // int32
            }
            // Parent: CPhysHinge
            // Field count: 0
            namespace CPhysHingeAlias_phys_hinge_local {
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCase {
                constexpr std::ptrdiff_t m_nCase = 0x4A8; // CUtlSymbolLarge[32]
                constexpr std::ptrdiff_t m_nShuffleCases = 0x5A8; // int32
                constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5AC; // int32
                constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5B0; // uint8[32]
                constexpr std::ptrdiff_t m_OnCase = 0x5D0; // CEntityIOOutput[32]
                constexpr std::ptrdiff_t m_OnDefault = 0x8D0; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Outflow_PlayVOLine {
                constexpr std::ptrdiff_t m_OnFinished = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CInfoGameEventProxy {
                constexpr std::ptrdiff_t m_iszEventName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRange = 0x4B0; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CTestPulseIOComponent_DerivedAPI {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponBizon {
            }
            // Parent: CRuleBrushEntity
            // Field count: 4
            namespace CGamePlayerZone {
                constexpr std::ptrdiff_t m_OnPlayerInZone = 0x770; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x788; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayersInCount = 0x7A0; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_PlayersOutCount = 0x7C0; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            namespace CBaseToggle {
                constexpr std::ptrdiff_t m_toggle_state = 0x768; // TOGGLE_STATE
                constexpr std::ptrdiff_t m_flMoveDistance = 0x76C; // float32
                constexpr std::ptrdiff_t m_flWait = 0x770; // float32
                constexpr std::ptrdiff_t m_flLip = 0x774; // float32
                constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x778; // bool
                constexpr std::ptrdiff_t m_vecPosition1 = 0x77C; // Vector
                constexpr std::ptrdiff_t m_vecPosition2 = 0x788; // Vector
                constexpr std::ptrdiff_t m_vecMoveAng = 0x794; // QAngle
                constexpr std::ptrdiff_t m_vecAngle1 = 0x7A0; // QAngle
                constexpr std::ptrdiff_t m_vecAngle2 = 0x7AC; // QAngle
                constexpr std::ptrdiff_t m_flHeight = 0x7B8; // float32
                constexpr std::ptrdiff_t m_hActivator = 0x7BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecFinalDest = 0x7C0; // Vector
                constexpr std::ptrdiff_t m_vecFinalAngle = 0x7CC; // QAngle
                constexpr std::ptrdiff_t m_movementType = 0x7D8; // int32
                constexpr std::ptrdiff_t m_sMaster = 0x7E0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            namespace CPulseServerCursor {
                constexpr std::ptrdiff_t m_hActivator = 0xE8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCaller = 0xEC; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_PlaySequence {
                constexpr std::ptrdiff_t m_SequenceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            namespace CInferno {
                constexpr std::ptrdiff_t m_firePositions = 0x768; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0xA68; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xD68; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0xDA8; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x10A8; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x10AC; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x10B0; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x10B4; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x10B8; // bool
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x10B9; // bool
                constexpr std::ptrdiff_t m_extent = 0x12C0; // Extent
                constexpr std::ptrdiff_t m_damageTimer = 0x12D8; // CountdownTimer
                constexpr std::ptrdiff_t m_damageRampTimer = 0x12F0; // CountdownTimer
                constexpr std::ptrdiff_t m_splashVelocity = 0x1308; // Vector
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x1314; // Vector
                constexpr std::ptrdiff_t m_startPos = 0x1320; // Vector
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x132C; // Vector
                constexpr std::ptrdiff_t m_activeTimer = 0x1338; // IntervalTimer
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1348; // int32
                constexpr std::ptrdiff_t m_nMaxFlames = 0x134C; // int32
                constexpr std::ptrdiff_t m_nSpreadCount = 0x1350; // int32
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1358; // CountdownTimer
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1370; // CountdownTimer
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1388; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CTouchExpansionComponent {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlaySceneBase {
                constexpr std::ptrdiff_t m_OnFinished = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0x90; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_Triggers = 0xD8; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings {
                constexpr std::ptrdiff_t m_flSeconds = 0x90; // float32
                constexpr std::ptrdiff_t m_Start = 0x94; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_End = 0xA4; // PointCameraSettings_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSCAR20 {
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            namespace CFuncInteractionLayerClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x768; // bool
                constexpr std::ptrdiff_t m_iszInteractsAs = 0x770; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszInteractsWith = 0x778; // CUtlSymbolLarge
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerDetectBulletFire {
                constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x8C8; // bool
                constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x8D0; // CEntityIOOutput
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            namespace CCSPlayer_UseServices {
                constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x48; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x4C; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x50; // GameTime_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAWP {
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
            // Parent: CPointEntity
            // Field count: 4
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x4E8; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x4EC; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x4F0; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x4F8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 8
            namespace CGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_szQuestName = 0x30; // char[128]
                constexpr std::ptrdiff_t m_nQuestPhase = 0xB0; // int32
                constexpr std::ptrdiff_t m_nLastMatchTime = 0xB4; // uint32
                constexpr std::ptrdiff_t m_nLastMatchTime_MatchID64 = 0xB8; // uint64
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xC0; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xC4; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0xC8; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 24
            namespace CFish {
                constexpr std::ptrdiff_t m_pool = 0x940; // CHandle<CFishPool>
                constexpr std::ptrdiff_t m_id = 0x944; // uint32
                constexpr std::ptrdiff_t m_x = 0x948; // float32
                constexpr std::ptrdiff_t m_y = 0x94C; // float32
                constexpr std::ptrdiff_t m_z = 0x950; // float32
                constexpr std::ptrdiff_t m_angle = 0x954; // float32
                constexpr std::ptrdiff_t m_angleChange = 0x958; // float32
                constexpr std::ptrdiff_t m_forward = 0x95C; // Vector
                constexpr std::ptrdiff_t m_perp = 0x968; // Vector
                constexpr std::ptrdiff_t m_poolOrigin = 0x974; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0x980; // float32
                constexpr std::ptrdiff_t m_speed = 0x984; // float32
                constexpr std::ptrdiff_t m_desiredSpeed = 0x988; // float32
                constexpr std::ptrdiff_t m_calmSpeed = 0x98C; // float32
                constexpr std::ptrdiff_t m_panicSpeed = 0x990; // float32
                constexpr std::ptrdiff_t m_avoidRange = 0x994; // float32
                constexpr std::ptrdiff_t m_turnTimer = 0x998; // CountdownTimer
                constexpr std::ptrdiff_t m_turnClockwise = 0x9B0; // bool
                constexpr std::ptrdiff_t m_goTimer = 0x9B8; // CountdownTimer
                constexpr std::ptrdiff_t m_moveTimer = 0x9D0; // CountdownTimer
                constexpr std::ptrdiff_t m_panicTimer = 0x9E8; // CountdownTimer
                constexpr std::ptrdiff_t m_disperseTimer = 0xA00; // CountdownTimer
                constexpr std::ptrdiff_t m_proximityTimer = 0xA18; // CountdownTimer
                constexpr std::ptrdiff_t m_visible = 0xA30; // CUtlVector<CFish*>
            }
            // Parent: CBot
            // Field count: 140
            namespace CCSBot {
                constexpr std::ptrdiff_t m_eyePosition = 0x108; // VectorWS
                constexpr std::ptrdiff_t m_name = 0x114; // char[64]
                constexpr std::ptrdiff_t m_combatRange = 0x154; // float32
                constexpr std::ptrdiff_t m_isRogue = 0x158; // bool
                constexpr std::ptrdiff_t m_rogueTimer = 0x160; // CountdownTimer
                constexpr std::ptrdiff_t m_diedLastRound = 0x17C; // bool
                constexpr std::ptrdiff_t m_safeTime = 0x180; // float32
                constexpr std::ptrdiff_t m_wasSafe = 0x184; // bool
                constexpr std::ptrdiff_t m_blindFire = 0x18C; // bool
                constexpr std::ptrdiff_t m_surpriseTimer = 0x190; // CountdownTimer
                constexpr std::ptrdiff_t m_bAllowActive = 0x1A8; // bool
                constexpr std::ptrdiff_t m_isFollowing = 0x1A9; // bool
                constexpr std::ptrdiff_t m_leader = 0x1AC; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_followTimestamp = 0x1B0; // float32
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1B4; // float32
                constexpr std::ptrdiff_t m_hurryTimer = 0x1B8; // CountdownTimer
                constexpr std::ptrdiff_t m_alertTimer = 0x1D0; // CountdownTimer
                constexpr std::ptrdiff_t m_sneakTimer = 0x1E8; // CountdownTimer
                constexpr std::ptrdiff_t m_panicTimer = 0x200; // CountdownTimer
                constexpr std::ptrdiff_t m_stateTimestamp = 0x5C8; // float32
                constexpr std::ptrdiff_t m_isAttacking = 0x5CC; // bool
                constexpr std::ptrdiff_t m_isOpeningDoor = 0x5CD; // bool
                constexpr std::ptrdiff_t m_taskEntity = 0x5D4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_goalPosition = 0x5E4; // VectorWS
                constexpr std::ptrdiff_t m_goalEntity = 0x5F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_avoid = 0x5F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_avoidTimestamp = 0x5F8; // float32
                constexpr std::ptrdiff_t m_isStopping = 0x5FC; // bool
                constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x5FD; // bool
                constexpr std::ptrdiff_t m_stillTimer = 0x600; // IntervalTimer
                constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x610; // bool
                constexpr std::ptrdiff_t m_pathIndex = 0x4F10; // int32
                constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x4F14; // GameTime_t
                constexpr std::ptrdiff_t m_repathTimer = 0x4F18; // CountdownTimer
                constexpr std::ptrdiff_t m_avoidFriendTimer = 0x4F30; // CountdownTimer
                constexpr std::ptrdiff_t m_isFriendInTheWay = 0x4F48; // bool
                constexpr std::ptrdiff_t m_politeTimer = 0x4F50; // CountdownTimer
                constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x4F68; // bool
                constexpr std::ptrdiff_t m_pathLadderEnd = 0x4F94; // float32
                constexpr std::ptrdiff_t m_mustRunTimer = 0x4FE0; // CountdownTimer
                constexpr std::ptrdiff_t m_waitTimer = 0x4FF8; // CountdownTimer
                constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x5010; // CountdownTimer
                constexpr std::ptrdiff_t m_playerTravelDistance = 0x5028; // float32[64]
                constexpr std::ptrdiff_t m_travelDistancePhase = 0x5128; // uint8
                constexpr std::ptrdiff_t m_hostageEscortCount = 0x52C0; // uint8
                constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x52C4; // float32
                constexpr std::ptrdiff_t m_desiredTeam = 0x52C8; // int32
                constexpr std::ptrdiff_t m_hasJoined = 0x52CC; // bool
                constexpr std::ptrdiff_t m_isWaitingForHostage = 0x52CD; // bool
                constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x52D0; // CountdownTimer
                constexpr std::ptrdiff_t m_waitForHostageTimer = 0x52E8; // CountdownTimer
                constexpr std::ptrdiff_t m_noisePosition = 0x5300; // Vector
                constexpr std::ptrdiff_t m_noiseTravelDistance = 0x530C; // float32
                constexpr std::ptrdiff_t m_noiseTimestamp = 0x5310; // float32
                constexpr std::ptrdiff_t m_noiseSource = 0x5318; // CCSPlayerPawn*
                constexpr std::ptrdiff_t m_noiseBendTimer = 0x5330; // CountdownTimer
                constexpr std::ptrdiff_t m_bentNoisePosition = 0x5348; // Vector
                constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x5354; // bool
                constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x5358; // float32
                constexpr std::ptrdiff_t m_lookAheadAngle = 0x535C; // float32
                constexpr std::ptrdiff_t m_lookUpAngle = 0x5360; // float32
                constexpr std::ptrdiff_t m_forwardAngle = 0x5364; // float32
                constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x5368; // float32
                constexpr std::ptrdiff_t m_lookAtSpot = 0x5370; // Vector
                constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x5380; // float32
                constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x5384; // float32
                constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x5388; // float32
                constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x538C; // bool
                constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x538D; // bool
                constexpr std::ptrdiff_t m_lookAtDesc = 0x5390; // char*
                constexpr std::ptrdiff_t m_peripheralTimestamp = 0x5398; // float32
                constexpr std::ptrdiff_t m_approachPointCount = 0x5520; // uint8
                constexpr std::ptrdiff_t m_approachPointViewPosition = 0x5524; // Vector
                constexpr std::ptrdiff_t m_viewSteadyTimer = 0x5530; // IntervalTimer
                constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x5548; // CountdownTimer
                constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x5568; // CountdownTimer
                constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x5588; // float32
                constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x5990; // int32
                constexpr std::ptrdiff_t m_lookPitch = 0x5994; // float32
                constexpr std::ptrdiff_t m_lookPitchVel = 0x5998; // float32
                constexpr std::ptrdiff_t m_lookYaw = 0x599C; // float32
                constexpr std::ptrdiff_t m_lookYawVel = 0x59A0; // float32
                constexpr std::ptrdiff_t m_targetSpot = 0x59A4; // Vector
                constexpr std::ptrdiff_t m_targetSpotVelocity = 0x59B0; // Vector
                constexpr std::ptrdiff_t m_targetSpotPredicted = 0x59BC; // Vector
                constexpr std::ptrdiff_t m_aimError = 0x59C8; // QAngle
                constexpr std::ptrdiff_t m_aimGoal = 0x59D4; // QAngle
                constexpr std::ptrdiff_t m_targetSpotTime = 0x59E0; // GameTime_t
                constexpr std::ptrdiff_t m_aimFocus = 0x59E4; // float32
                constexpr std::ptrdiff_t m_aimFocusInterval = 0x59E8; // float32
                constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x59EC; // GameTime_t
                constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x59F8; // CountdownTimer
                constexpr std::ptrdiff_t m_enemy = 0x5A10; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_isEnemyVisible = 0x5A14; // bool
                constexpr std::ptrdiff_t m_visibleEnemyParts = 0x5A15; // uint8
                constexpr std::ptrdiff_t m_lastEnemyPosition = 0x5A18; // Vector
                constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x5A24; // float32
                constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x5A28; // float32
                constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x5A2C; // float32
                constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x5A30; // float32
                constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x5A34; // float32
                constexpr std::ptrdiff_t m_isLastEnemyDead = 0x5A38; // bool
                constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x5A3C; // int32
                constexpr std::ptrdiff_t m_bomber = 0x5C48; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nearbyFriendCount = 0x5C4C; // int32
                constexpr std::ptrdiff_t m_closestVisibleFriend = 0x5C50; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x5C54; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_attentionInterval = 0x5C58; // IntervalTimer
                constexpr std::ptrdiff_t m_attacker = 0x5C68; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_attackedTimestamp = 0x5C6C; // float32
                constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x5C70; // IntervalTimer
                constexpr std::ptrdiff_t m_lastVictimID = 0x5C80; // int32
                constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x5C84; // bool
                constexpr std::ptrdiff_t m_isRapidFiring = 0x5C85; // bool
                constexpr std::ptrdiff_t m_equipTimer = 0x5C88; // IntervalTimer
                constexpr std::ptrdiff_t m_zoomTimer = 0x5C98; // CountdownTimer
                constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x5CB0; // GameTime_t
                constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x5CB8; // CountdownTimer
                constexpr std::ptrdiff_t m_bIsSleeping = 0x5CD0; // bool
                constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x5CD1; // bool
                constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x5CD8; // CountdownTimer
                constexpr std::ptrdiff_t m_enemyQueueIndex = 0x5D90; // uint8
                constexpr std::ptrdiff_t m_enemyQueueCount = 0x5D91; // uint8
                constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x5D92; // uint8
                constexpr std::ptrdiff_t m_isStuck = 0x5D93; // bool
                constexpr std::ptrdiff_t m_stuckTimestamp = 0x5D94; // GameTime_t
                constexpr std::ptrdiff_t m_stuckSpot = 0x5D98; // Vector
                constexpr std::ptrdiff_t m_wiggleTimer = 0x5DA8; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckJumpTimer = 0x5DC0; // CountdownTimer
                constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x5DD8; // GameTime_t
                constexpr std::ptrdiff_t m_avgVel = 0x5DDC; // float32[10]
                constexpr std::ptrdiff_t m_avgVelIndex = 0x5E04; // int32
                constexpr std::ptrdiff_t m_avgVelCount = 0x5E08; // int32
                constexpr std::ptrdiff_t m_lastOrigin = 0x5E0C; // Vector
                constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x5E1C; // float32
                constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x5E20; // float32
                constexpr std::ptrdiff_t m_radioSubject = 0x5E24; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_radioPosition = 0x5E28; // Vector
                constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x5E34; // float32
                constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x5E40; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CHandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x4A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x4AC; // bool
            }
            // Parent: CBaseEntity
            // Field count: 48
            namespace CLogicNPCCounter {
                constexpr std::ptrdiff_t m_OnMinCountAll = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCountAll = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactorAll = 0x4D8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x4F8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_1 = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x530; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactor_1 = 0x548; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x568; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_2 = 0x588; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x5A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactor_2 = 0x5B8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x5D8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_3 = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x610; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactor_3 = 0x628; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x648; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_hSource = 0x668; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x670; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flDistanceMax = 0x678; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x67C; // bool
                constexpr std::ptrdiff_t m_nMinCountAll = 0x680; // int32
                constexpr std::ptrdiff_t m_nMaxCountAll = 0x684; // int32
                constexpr std::ptrdiff_t m_nMinFactorAll = 0x688; // int32
                constexpr std::ptrdiff_t m_nMaxFactorAll = 0x68C; // int32
                constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x698; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNPCState_1 = 0x6A0; // int32
                constexpr std::ptrdiff_t m_bInvertState_1 = 0x6A4; // bool
                constexpr std::ptrdiff_t m_nMinCount_1 = 0x6A8; // int32
                constexpr std::ptrdiff_t m_nMaxCount_1 = 0x6AC; // int32
                constexpr std::ptrdiff_t m_nMinFactor_1 = 0x6B0; // int32
                constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x6B4; // int32
                constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x6BC; // float32
                constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x6C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNPCState_2 = 0x6C8; // int32
                constexpr std::ptrdiff_t m_bInvertState_2 = 0x6CC; // bool
                constexpr std::ptrdiff_t m_nMinCount_2 = 0x6D0; // int32
                constexpr std::ptrdiff_t m_nMaxCount_2 = 0x6D4; // int32
                constexpr std::ptrdiff_t m_nMinFactor_2 = 0x6D8; // int32
                constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x6DC; // int32
                constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x6E4; // float32
                constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x6E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNPCState_3 = 0x6F0; // int32
                constexpr std::ptrdiff_t m_bInvertState_3 = 0x6F4; // bool
                constexpr std::ptrdiff_t m_nMinCount_3 = 0x6F8; // int32
                constexpr std::ptrdiff_t m_nMaxCount_3 = 0x6FC; // int32
                constexpr std::ptrdiff_t m_nMinFactor_3 = 0x700; // int32
                constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x704; // int32
                constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x70C; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            namespace CCSPlayer_RadioServices {
                constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x4C; // GameTime_t
                constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x50; // GameTime_t
                constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x54; // GameTime_t[3]
                constexpr std::ptrdiff_t m_bIgnoreRadio = 0x60; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSG556 {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            namespace CRagdollConstraint {
                constexpr std::ptrdiff_t m_xmin = 0x508; // float32
                constexpr std::ptrdiff_t m_xmax = 0x50C; // float32
                constexpr std::ptrdiff_t m_ymin = 0x510; // float32
                constexpr std::ptrdiff_t m_ymax = 0x514; // float32
                constexpr std::ptrdiff_t m_zmin = 0x518; // float32
                constexpr std::ptrdiff_t m_zmax = 0x51C; // float32
                constexpr std::ptrdiff_t m_xfriction = 0x520; // float32
                constexpr std::ptrdiff_t m_yfriction = 0x524; // float32
                constexpr std::ptrdiff_t m_zfriction = 0x528; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncVehicleClip {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CDEagle {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponFamas {
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CEnvSplash {
                constexpr std::ptrdiff_t m_flScale = 0x4A8; // float32
            }
            // Parent: CPointCamera
            // Field count: 1
            namespace CPointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x508; // float32
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CTestPulseIOAPI {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CCSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
                constexpr std::ptrdiff_t m_nUseSnapshotFromSurfaceGraph = 0x128; // int32
                constexpr std::ptrdiff_t m_snapshotFilter = 0x12C; // PrecipitationFilter_t
            }
            // Parent: CBaseToggle
            // Field count: 13
            namespace CFuncMoveLinear {
                constexpr std::ptrdiff_t m_authoredPosition = 0x7E8; // MoveLinearAuthoredPos_t
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7EC; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7F8; // Vector
                constexpr std::ptrdiff_t m_soundStart = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundStop = 0x810; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_currentSound = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flBlockDamage = 0x820; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0x824; // float32
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x830; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x860; // bool
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x861; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x862; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CPhysMotorAPI {
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
            // Parent: CItem
            // Field count: 1
            namespace CScriptItem {
                constexpr std::ptrdiff_t m_MoveTypeOverride = 0x9E0; // MoveType_t
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CBaseToggle
            // Field count: 12
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x7E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x800; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x818; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x830; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x860; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x878; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x890; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0x8A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x8B0; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0x8B4; // bool
                constexpr std::ptrdiff_t m_bUseAsyncQueries = 0x8C0; // bool
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CPointPush {
                constexpr std::ptrdiff_t m_bEnabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_flMagnitude = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4B8; // float32
                constexpr std::ptrdiff_t m_iszFilterName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x4C8; // CHandle<CBaseFilter>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_EntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 0
            namespace CCSObserver_ObserverServices {
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x4B0; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x4B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x4B8; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x4BC; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x4BD; // char[18]
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 21
            namespace CRopeKeyframe {
                constexpr std::ptrdiff_t m_RopeFlags = 0x770; // uint16
                constexpr std::ptrdiff_t m_iNextLinkName = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Slack = 0x780; // int16
                constexpr std::ptrdiff_t m_Width = 0x784; // float32
                constexpr std::ptrdiff_t m_TextureScale = 0x788; // float32
                constexpr std::ptrdiff_t m_nSegments = 0x78C; // uint8
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x78D; // bool
                constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x798; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_Subdiv = 0x7A0; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x7A1; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x7A2; // int16
                constexpr std::ptrdiff_t m_fLockedPoints = 0x7A4; // uint8
                constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x7A5; // bool
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x7A8; // float32
                constexpr std::ptrdiff_t m_bStartPointValid = 0x7AC; // bool
                constexpr std::ptrdiff_t m_bEndPointValid = 0x7AD; // bool
                constexpr std::ptrdiff_t m_hStartPoint = 0x7B0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x7B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x7B8; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x7B9; // AttachmentHandle_t
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CSmokeGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 10
            namespace CBaseCombatCharacter {
                constexpr std::ptrdiff_t m_bForceServerRagdoll = 0x940; // bool
                constexpr std::ptrdiff_t m_hMyWearables = 0x948; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x960; // float32
                constexpr std::ptrdiff_t m_bApplyStressDamage = 0x964; // bool
                constexpr std::ptrdiff_t m_bDeathEventsDispatched = 0x965; // bool
                constexpr std::ptrdiff_t m_pVecRelationships = 0x9A8; // CUtlVector<RelationshipOverride_t>*
                constexpr std::ptrdiff_t m_strRelationships = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_eHull = 0x9B8; // Hull_t
                constexpr std::ptrdiff_t m_nNavHullIdx = 0x9BC; // uint32
                constexpr std::ptrdiff_t m_movementStats = 0x9C0; // CMovementStatsProperty
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30; // uint16
                constexpr std::ptrdiff_t unSlot = 0x32; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnSpawn = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTrigger = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x4D8; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x4D9; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x4DA; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x4DB; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x4DC; // bool
            }
            // Parent: None
            // Field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // Parent: CLogicalEntity
            // Field count: 23
            namespace CTestPulseIO {
                constexpr std::ptrdiff_t m_OnVariantVoid = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantBool = 0x4C0; // CEntityOutputTemplate<bool>
                constexpr std::ptrdiff_t m_OnVariantInt = 0x4E0; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnVariantFloat = 0x500; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnVariantString = 0x520; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnVariantColor = 0x540; // CEntityOutputTemplate<Color>
                constexpr std::ptrdiff_t m_OnVariantVector = 0x560; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_bAllowEmptyInputs = 0x588; // bool
                constexpr std::ptrdiff_t m_TestComponent = 0x590; // CTestPulseIOComponent_Derived
                constexpr std::ptrdiff_t m_OnInternalTestVoid = 0x5C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnInternalTestBool = 0x5D8; // CEntityOutputTemplate<bool>
                constexpr std::ptrdiff_t m_OnInternalTestInt = 0x5F8; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnInternalTestFloat = 0x618; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnInternalTestString = 0x638; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnInternalTestColor = 0x658; // CEntityOutputTemplate<Color>
                constexpr std::ptrdiff_t m_OnInternalTestVector = 0x678; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_OnInternalTestEntityName = 0x6A0; // CEntityOutputTemplate<CEntityNameString>
                constexpr std::ptrdiff_t m_OnInternalTestEntityHandle = 0x6C0; // CEntityOutputTemplate<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_OnInternalTestSchemaEnum = 0x6E0; // CEntityOutputTemplate<TestInputOutputCombinationsEnum_t>
                constexpr std::ptrdiff_t m_OnInternalTestFloatString = 0x700; // CEntityOutputTemplate<CTestPulseIO::FloatStringArgs_t>
                constexpr std::ptrdiff_t m_OnInternalTestEntityNameString = 0x728; // CEntityOutputTemplate<CTestPulseIO::EntityNameStringArgs_t>
                constexpr std::ptrdiff_t m_OnInternalTestEntityHandleInt = 0x750; // CEntityOutputTemplate<CTestPulseIO::EntityHandleIntArgs_t>
                constexpr std::ptrdiff_t m_OnInternalTestStringStringString = 0x770; // CEntityOutputTemplate<CTestPulseIO::ThreeStringArgs_t>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponUMP45 {
            }
            // Parent: CRulePointEntity
            // Field count: 0
            namespace CGamePlayerEquip {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CPointEntityFinder {
                constexpr std::ptrdiff_t m_hEntity = 0x4A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iFilterName = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x4B8; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iRefName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hReference = 0x4C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_FindMethod = 0x4CC; // EntFinderMethod_t
                constexpr std::ptrdiff_t m_OnFoundEntity = 0x4D0; // CEntityIOOutput
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
            // Parent: CCSWeaponBase
            // Field count: 1
            namespace CKnife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1030; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicPlayerProxy {
                constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerDied = 0x4D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x4F0; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_hPlayer = 0x510; // CHandle<CBaseEntity>
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CBasePlayerControllerAPI {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 0
            namespace CSimpleMarkupVolumeTagged {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x48; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4C; // CHandle<CBaseEntity>
            }
            // Parent: CEntityComponent
            // Field count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xA8; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CWaterBullet {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerSoundscape {
                constexpr std::ptrdiff_t m_hSoundscape = 0x8C8; // CHandle<CEnvSoundscapeTriggerable>
                constexpr std::ptrdiff_t m_SoundscapeName = 0x8D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_spectators = 0x8D8; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlayVOLine__CursorState_t {
                constexpr std::ptrdiff_t m_sceneInstance = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace CPointTeleportAPI {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 1
            namespace CHostageExpresserShim {
                constexpr std::ptrdiff_t m_pExpresser = 0xA00; // CAI_Expresser*
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4A8; // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerLegacyJump {
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponHKP2000 {
            }
            // Parent: CPhysicsProp
            // Field count: 3
            namespace CShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_bDebris = 0xC10; // bool
                constexpr std::ptrdiff_t m_hParentShard = 0xC14; // uint32
                constexpr std::ptrdiff_t m_ShardDesc = 0xC18; // shard_model_desc_t
            }
            // Parent: CBaseEntity
            // Field count: 16
            namespace CPathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x4B0; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4B4; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x4C0; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x4DC; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x4E0; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x4E4; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x4E8; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x4F0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x4F8; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x510; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x528; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x540; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x558; // CNetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x570; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CCredits {
                constexpr std::ptrdiff_t m_OnCreditsDone = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x4C0; // bool
                constexpr std::ptrdiff_t m_flLogoLength = 0x4C4; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponFiveSeven {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CFishPool {
                constexpr std::ptrdiff_t m_fishCount = 0x4B8; // int32
                constexpr std::ptrdiff_t m_maxRange = 0x4BC; // float32
                constexpr std::ptrdiff_t m_swimDepth = 0x4C0; // float32
                constexpr std::ptrdiff_t m_waterLevel = 0x4C4; // float32
                constexpr std::ptrdiff_t m_isDormant = 0x4C8; // bool
                constexpr std::ptrdiff_t m_fishes = 0x4D0; // CUtlVector<CHandle<CFish>>
                constexpr std::ptrdiff_t m_visTimer = 0x4E8; // CountdownTimer
            }
            // Parent: CPlayerPawnComponent
            // Field count: 18
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x48; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x50; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x78; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x80; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x88; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x188; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x190; // uint64
                constexpr std::ptrdiff_t m_flCmdForwardMove = 0x1A0; // float32
                constexpr std::ptrdiff_t m_flCmdLeftMove = 0x1A4; // float32
                constexpr std::ptrdiff_t m_flCmdUpMove = 0x1A8; // float32
                constexpr std::ptrdiff_t m_flMaxspeed = 0x1AC; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x1B0; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x240; // QAngle
            }
            // Parent: CRagdollProp
            // Field count: 0
            namespace CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CBaseProp
            // Field count: 33
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x978; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x9B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x9D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x9E8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xA08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xA20; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xA24; // int32
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0xA28; // QAngle
                constexpr std::ptrdiff_t m_flPressureDelay = 0xA34; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xA38; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xA3C; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0xA48; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xA4C; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xA50; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xA54; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xA58; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xA60; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xA68; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xA6C; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xA70; // float32
                constexpr std::ptrdiff_t m_sExplosionType = 0xA78; // CGlobalSymbol
                constexpr std::ptrdiff_t m_explosionDelay = 0xA80; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xA88; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xA90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xA98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xAA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xAA8; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xAAC; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xAB0; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xAB4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszPuntSound = 0xAB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xAC0; // bool
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xAC1; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CLightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x768; // CLightComponent*
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x4C0; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4CC; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 31
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
                constexpr std::ptrdiff_t m_nNextExternalGraphHandle = 0x1C; // ExternalAnimGraphHandle_t
                constexpr std::ptrdiff_t m_vecSecondarySkeletonSlotIDs = 0x20; // CNetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_vecSecondarySkeletons = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
                constexpr std::ptrdiff_t m_nSecondarySkeletonMasterCount = 0x50; // int32
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x54; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x58; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x5C; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x60; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x64; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x68; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x6C; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x78; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x79; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x7A; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x7B; // bool
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x7C; // bool
                constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0x80; // GameTick_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x320; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_SerializePoseRecipeAG2Slots = 0x328; // CUtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                constexpr std::ptrdiff_t m_SerializePoseRecipeAG2Dynamic = 0x390; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeAG2ActiveSlot = 0x3A8; // uint32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x3AC; // int32
                constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x3C0; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x3C4; // int32
                constexpr std::ptrdiff_t m_primaryGraphId = 0x3C8; // ResourceId_t
                constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x3D0; // CNetworkUtlVectorBase<ResourceId_t>
                constexpr std::ptrdiff_t m_vecExternalClipIds = 0x3E8; // CNetworkUtlVectorBase<ResourceId_t>
                constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x400; // CGlobalSymbol
                constexpr std::ptrdiff_t m_pGraphInstanceAG2 = 0x408; // CNmGraphInstance*
                constexpr std::ptrdiff_t m_vecExternalGraphs = 0x620; // CUtlVector<ExternalAnimGraph_t>
            }
            // Parent: None
            // Field count: 1
            namespace AnimGraph2SerializedPoseRecipeSlot_t {
                constexpr std::ptrdiff_t m_topology = 0x30; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 11
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_pController = 0x8; // IPhysicsMotionController*
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C; // bool
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector<float32>
            }
            // Parent: CDynamicProp
            // Field count: 1
            namespace COrnamentProp {
                constexpr std::ptrdiff_t m_initialOwner = 0xB80; // CUtlSymbolLarge
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            namespace CCSPlayer_CameraServices {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CModelPointEntity {
            }
            // Parent: CBarnLight
            // Field count: 1
            namespace CRectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xA50; // bool
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x4E0; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x4E8; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x538; // CHandle<CBaseEntity>[10]
            }
            // Parent: CBaseEntity
            // Field count: 10
            namespace CCSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x4A8; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4B4; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4C0; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x4FC; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x508; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x518; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x528; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x538; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x539; // bool
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
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CFuncNavBlocker {
                constexpr std::ptrdiff_t m_bDisabled = 0x770; // bool
                constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x774; // int32
            }
            // Parent: CPathNode
            // Field count: 5
            namespace CMoverPathNode {
                constexpr std::ptrdiff_t m_OnStartFromOrInSegment = 0x500; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_OnStoppedAtOrInSegment = 0x520; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_OnPassThrough = 0x540; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_OnPassThroughForward = 0x560; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_OnPassThroughReverse = 0x580; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x4C0; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x4D0; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x4D4; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x4D8; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x4E0; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x520; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x524; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x530; // uint32
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            namespace CFuncBrush {
                constexpr std::ptrdiff_t m_iSolidity = 0x768; // BrushSolidities_e
                constexpr std::ptrdiff_t m_iDisabled = 0x76C; // int32
                constexpr std::ptrdiff_t m_bSolidBsp = 0x770; // bool
                constexpr std::ptrdiff_t m_iszExcludedClass = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bInvertExclusion = 0x780; // bool
                constexpr std::ptrdiff_t m_bScriptedMovement = 0x781; // bool
            }
            // Parent: CBodyComponent
            // Field count: 1
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: CBreakable
            // Field count: 15
            namespace CPhysBox {
                constexpr std::ptrdiff_t m_damageType = 0x840; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0x844; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x848; // float32
                constexpr std::ptrdiff_t m_vHoverPosePosition = 0x84C; // Vector
                constexpr std::ptrdiff_t m_angHoverPoseAngles = 0x858; // QAngle
                constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x864; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0x865; // bool
                constexpr std::ptrdiff_t m_nHoverPoseFlags = 0x866; // HoverPoseFlags_t
                constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x868; // float32
                constexpr std::ptrdiff_t m_OnDamaged = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0x888; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMotionEnabled = 0x8A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0x8B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouch = 0x8D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hCarryingPlayer = 0x8E8; // CHandle<CBasePlayerPawn>
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            namespace CSoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x568; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x574; // Vector
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CItemSoda {
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
            // Parent: CBarnLight
            // Field count: 3
            namespace COmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xA50; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0xA54; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0xA58; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CTriggerVolume {
                constexpr std::ptrdiff_t m_iFilterName = 0x768; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x770; // CHandle<CBaseFilter>
            }
            // Parent: None
            // Field count: 1
            namespace CBtNodeCondition {
                constexpr std::ptrdiff_t m_bNegated = 0x58; // bool
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
            // Parent: CModelPointEntity
            // Field count: 15
            namespace CEnvExplosion {
                constexpr std::ptrdiff_t m_iMagnitude = 0x768; // int32
                constexpr std::ptrdiff_t m_flPlayerDamage = 0x76C; // float32
                constexpr std::ptrdiff_t m_iRadiusOverride = 0x770; // int32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x774; // float32
                constexpr std::ptrdiff_t m_flDamageForce = 0x778; // float32
                constexpr std::ptrdiff_t m_hInflictor = 0x77C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x780; // DamageTypes_t
                constexpr std::ptrdiff_t m_bCreateDebris = 0x784; // bool
                constexpr std::ptrdiff_t m_iszCustomEffectName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCustomSoundName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bSuppressParticleImpulse = 0x7A0; // bool
                constexpr std::ptrdiff_t m_iClassIgnore = 0x7A4; // Class_T
                constexpr std::ptrdiff_t m_iClassIgnore2 = 0x7A8; // Class_T
                constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEntityIgnore = 0x7B8; // CHandle<CBaseEntity>
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
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTestPulseIO__ThreeStringArgs_t {
                constexpr std::ptrdiff_t strArg1 = 0x0; // CUtlString
                constexpr std::ptrdiff_t strArg2 = 0x8; // CUtlString
                constexpr std::ptrdiff_t strArg3 = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CFootstepControl {
                constexpr std::ptrdiff_t m_source = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0x8D0; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x48; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x49; // bool
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
            // Parent: CBaseModelEntity
            // Field count: 22
            namespace CParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x768; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x968; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x969; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x96C; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x970; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x974; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x978; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x980; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x984; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x988; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x9B8; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x9BC; // CHandle<CBaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xABC; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xABD; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xABE; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xABF; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xAC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xAC8; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0xCC8; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xCCC; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0xCD8; // int32
                constexpr std::ptrdiff_t m_clrTint = 0xCDC; // Color
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            namespace CTriggerBrush {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x768; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUse = 0x798; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInputFilter = 0x7B0; // int32
                constexpr std::ptrdiff_t m_iDontMessageParent = 0x7B4; // int32
            }
            // Parent: None
            // Field count: 2
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CSoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x4B8; // Vector
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1Silencer {
            }
            // Parent: None
            // Field count: 7
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
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
            namespace CTestPulseIO__FloatStringArgs_t {
                constexpr std::ptrdiff_t flOutFloat = 0x0; // float32
                constexpr std::ptrdiff_t strOutString = 0x8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
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
            // Parent: CItem
            // Field count: 0
            namespace CItemAssaultSuit {
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            namespace CBeam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x768; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x76C; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x770; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x774; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x778; // uint8
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x780; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x788; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x790; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x794; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x798; // CHandle<CBaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x7C0; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x7CC; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x7D0; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x7D4; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x7D8; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x7DC; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x7E0; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x7E8; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0x7EC; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0x7F0; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x7F4; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0x800; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nDissolveType = 0x804; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicEventListener {
                constexpr std::ptrdiff_t m_strEventName = 0x4B8; // CUtlString
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4C0; // bool
                constexpr std::ptrdiff_t m_nTeam = 0x4C4; // int32
                constexpr std::ptrdiff_t m_OnEventFired = 0x4C8; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CInfoData {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponNegev {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponElite {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 25
            namespace CBasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xA00; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0xA08; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xA10; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0xA18; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0xA20; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0xA28; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xA30; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0xA38; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0xA40; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xA50; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0xAB8; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0xAC4; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0xAD0; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0xAD8; // sky3dparams_t
                constexpr std::ptrdiff_t m_fTimeLastHurt = 0xB68; // GameTime_t
                constexpr std::ptrdiff_t m_flDeathTime = 0xB6C; // GameTime_t
                constexpr std::ptrdiff_t m_fNextSuicideTime = 0xB70; // GameTime_t
                constexpr std::ptrdiff_t m_fInitHUD = 0xB74; // bool
                constexpr std::ptrdiff_t m_pExpresser = 0xB78; // CAI_Expresser*
                constexpr std::ptrdiff_t m_hController = 0xB80; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0xB84; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xB8C; // float32
                constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xB90; // float32
                constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xB94; // CEntityIndex
                constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xB98; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: None
            // Field count: 2
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x4E0; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x4E4; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x4E8; // int32
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCSSprite {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMathColorBlend {
                constexpr std::ptrdiff_t m_flInMin = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flInMax = 0x4AC; // float32
                constexpr std::ptrdiff_t m_OutColor1 = 0x4B0; // Color
                constexpr std::ptrdiff_t m_OutColor2 = 0x4B4; // Color
                constexpr std::ptrdiff_t m_OutValue = 0x4B8; // CEntityOutputTemplate<Color>
            }
            // Parent: CModelPointEntity
            // Field count: 0
            namespace CShower {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: CFuncNavBlocker
            // Field count: 1
            namespace CScriptNavBlocker {
                constexpr std::ptrdiff_t m_vExtent = 0x780; // Vector
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CEntityBlocker {
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace CPathSimpleAPI {
            }
            // Parent: CCSPlayerPawnBase
            // Field count: 0
            namespace CCSObserverPawn {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerActiveWeaponDetect {
                constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszWeaponClassName = 0x8E0; // CUtlSymbolLarge
            }
            // Parent: CFuncLadder
            // Field count: 0
            namespace CFuncLadderAlias_func_useableladder {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointServerCommand {
            }
            // Parent: None
            // Field count: 13
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // CNetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // CNetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
            }
            // Parent: CModelPointEntity
            // Field count: 15
            namespace CPlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0x768; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0x76C; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0x770; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0x774; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0x778; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0x784; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x790; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0x79C; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0x7A8; // int32
                constexpr std::ptrdiff_t m_nEntity = 0x7AC; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0x7B0; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0x7B4; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x7B8; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x7BC; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x7BD; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x768; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            namespace CPointPrefabAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
                constexpr std::ptrdiff_t m_nEventID = 0x0; // int32
                constexpr std::ptrdiff_t m_Outflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: CBaseAnimGraph
            // Field count: 9
            namespace CEconEntity {
                constexpr std::ptrdiff_t m_AttributeManager = 0x958; // CAttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xC50; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xC54; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xC58; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xC5C; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0xC60; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xC64; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0xC68; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xC6C; // int32
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CTankTargetChange {
                constexpr std::ptrdiff_t m_newTarget = 0x4A8; // CVariantBase<CVariantDefaultAllocator>
                constexpr std::ptrdiff_t m_newTargetName = 0x4B8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_WaterServices
            // Field count: 6
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_nDrownDmgRate = 0x4C; // int32
                constexpr std::ptrdiff_t m_AirFinishedTime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x54; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x58; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x64; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CLogicDistanceCheck {
                constexpr std::ptrdiff_t m_iszEntityA = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityB = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flZone1Distance = 0x4B8; // float32
                constexpr std::ptrdiff_t m_flZone2Distance = 0x4BC; // float32
                constexpr std::ptrdiff_t m_InZone1 = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_InZone2 = 0x4D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_InZone3 = 0x4F0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 29
            namespace CEnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1520; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1524; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1530; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1578; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1580; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x158C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1598; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x159C; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x15A0; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x15A4; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x15A8; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x15AC; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x15B0; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x15BC; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x15C0; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x15C4; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x15C8; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x15CC; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x15D0; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x15E9; // bool
            }
            // Parent: None
            // Field count: 3
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicDistanceAutosave {
                constexpr std::ptrdiff_t m_iszTargetEntity = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4B0; // float32
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4B4; // bool
                constexpr std::ptrdiff_t m_bCheckCough = 0x4B5; // bool
                constexpr std::ptrdiff_t m_bThinkDangerous = 0x4B6; // bool
                constexpr std::ptrdiff_t m_flDangerousTime = 0x4B8; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicBranch {
                constexpr std::ptrdiff_t m_bInValue = 0x4A8; // bool
                constexpr std::ptrdiff_t m_Listeners = 0x4B0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_OnTrue = 0x4C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFalse = 0x4E0; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_ScriptedSequence {
                constexpr std::ptrdiff_t m_szSyncGroup = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nExpectedNumSequencesInSyncGroup = 0x50; // int32
                constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x54; // bool
                constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x55; // bool
                constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x56; // bool
                constexpr std::ptrdiff_t m_scriptedSequenceDataMain = 0x58; // PulseScriptedSequenceData_t
                constexpr std::ptrdiff_t m_vecAdditionalActors = 0x90; // CUtlVector<PulseScriptedSequenceData_t>
                constexpr std::ptrdiff_t m_OnFinished = 0xA8; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xF0; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_Triggers = 0x138; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CFuncPlatRot
            // Field count: 9
            namespace CFuncTrackChange {
                constexpr std::ptrdiff_t m_trackTop = 0x830; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_trackBottom = 0x834; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_train = 0x838; // CHandle<CFuncTrackTrain>
                constexpr std::ptrdiff_t m_trackTopName = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_trackBottomName = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_trainName = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_code = 0x858; // TRAIN_CODE
                constexpr std::ptrdiff_t m_targetState = 0x85C; // int32
                constexpr std::ptrdiff_t m_use = 0x860; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 37
            namespace CFuncTrackTrain {
                constexpr std::ptrdiff_t m_ppath = 0x768; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_length = 0x76C; // float32
                constexpr std::ptrdiff_t m_vPosPrev = 0x770; // Vector
                constexpr std::ptrdiff_t m_angPrev = 0x77C; // QAngle
                constexpr std::ptrdiff_t m_controlMins = 0x788; // Vector
                constexpr std::ptrdiff_t m_controlMaxs = 0x794; // Vector
                constexpr std::ptrdiff_t m_lastBlockPos = 0x7A0; // Vector
                constexpr std::ptrdiff_t m_lastBlockTick = 0x7AC; // int32
                constexpr std::ptrdiff_t m_flVolume = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flBank = 0x7B4; // float32
                constexpr std::ptrdiff_t m_oldSpeed = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7BC; // float32
                constexpr std::ptrdiff_t m_height = 0x7C0; // float32
                constexpr std::ptrdiff_t m_maxSpeed = 0x7C4; // float32
                constexpr std::ptrdiff_t m_dir = 0x7C8; // float32
                constexpr std::ptrdiff_t m_iszSoundMove = 0x7D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovePing = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundStart = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundStop = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strPathTarget = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x7F8; // float32
                constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x7FC; // float32
                constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x800; // GameTime_t
                constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x804; // float32
                constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x808; // float32
                constexpr std::ptrdiff_t m_eOrientationType = 0x80C; // TrainOrientationType_t
                constexpr std::ptrdiff_t m_eVelocityType = 0x810; // TrainVelocityType_t
                constexpr std::ptrdiff_t m_OnStart = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNext = 0x840; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x858; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x870; // bool
                constexpr std::ptrdiff_t m_flDesiredSpeed = 0x874; // float32
                constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x878; // GameTime_t
                constexpr std::ptrdiff_t m_flAccelSpeed = 0x87C; // float32
                constexpr std::ptrdiff_t m_flDecelSpeed = 0x880; // float32
                constexpr std::ptrdiff_t m_bAccelToSpeed = 0x884; // bool
                constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x888; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 24
            namespace CEnvInstructorHint {
                constexpr std::ptrdiff_t m_iszName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReplace_Key = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iTimeout = 0x4C0; // int32
                constexpr std::ptrdiff_t m_iDisplayLimit = 0x4C4; // int32
                constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCaption = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszActivatorCaption = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Color = 0x4E8; // Color
                constexpr std::ptrdiff_t m_fIconOffset = 0x4EC; // float32
                constexpr std::ptrdiff_t m_fRange = 0x4F0; // float32
                constexpr std::ptrdiff_t m_iPulseOption = 0x4F4; // uint8
                constexpr std::ptrdiff_t m_iAlphaOption = 0x4F5; // uint8
                constexpr std::ptrdiff_t m_iShakeOption = 0x4F6; // uint8
                constexpr std::ptrdiff_t m_bStatic = 0x4F7; // bool
                constexpr std::ptrdiff_t m_bNoOffscreen = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bForceCaption = 0x4F9; // bool
                constexpr std::ptrdiff_t m_iInstanceType = 0x4FC; // int32
                constexpr std::ptrdiff_t m_bSuppressRest = 0x500; // bool
                constexpr std::ptrdiff_t m_iszBinding = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x510; // bool
                constexpr std::ptrdiff_t m_bAutoStart = 0x511; // bool
                constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x512; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CEnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4A8; // CEnvWindShared
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            namespace CSoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_iszPathCorner = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iCountMax = 0x570; // int32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x574; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x578; // float32
                constexpr std::ptrdiff_t m_flDotProductMax = 0x57C; // float32
                constexpr std::ptrdiff_t m_bPlaying = 0x580; // bool
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x5A8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: CPlayer_CameraServices
            // Field count: 7
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x178; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x17C; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x180; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x184; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x188; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTriggerFogList = 0x190; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A8; // CHandle<CBaseEntity>
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
            // Parent: CTriggerMultiple
            // Field count: 7
            namespace CDynamicNavConnectionsVolume {
                constexpr std::ptrdiff_t m_iszConnectionTarget = 0x8E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vecConnections = 0x8E8; // CUtlVector<DynamicVolumeDef_t>
                constexpr std::ptrdiff_t m_sTransitionType = 0x900; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bConnectionsEnabled = 0x908; // bool
                constexpr std::ptrdiff_t m_flTargetAreaSearchRadius = 0x90C; // float32
                constexpr std::ptrdiff_t m_flUpdateDistance = 0x910; // float32
                constexpr std::ptrdiff_t m_flMaxConnectionDistance = 0x914; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            namespace CConstraintAnchor {
                constexpr std::ptrdiff_t m_massScale = 0x940; // float32
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
            // Parent: CCSPlayerPawnBase
            // Field count: 105
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0xD08; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0xD10; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0xD18; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0xD20; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pAimPunchServices = 0xD28; // CCSPlayer_AimPunchServices*
                constexpr std::ptrdiff_t m_pRadioServices = 0xD30; // CCSPlayer_RadioServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0xD38; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_nCharacterDefIndex = 0xD40; // uint16
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xD42; // bool
                constexpr std::ptrdiff_t m_strVOPrefix = 0xD48; // CUtlString
                constexpr std::ptrdiff_t m_szLastPlaceName = 0xD50; // char[18]
                constexpr std::ptrdiff_t m_bInHostageResetZone = 0xE40; // bool
                constexpr std::ptrdiff_t m_bInBuyZone = 0xE41; // bool
                constexpr std::ptrdiff_t m_TouchingBuyZones = 0xE48; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bWasInBuyZone = 0xE60; // bool
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0xE61; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0xE62; // bool
                constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0xE63; // bool
                constexpr std::ptrdiff_t m_iRetakesOffering = 0xE64; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0xE68; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0xE6C; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0xE6D; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0xE70; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0xE74; // loadout_slot_t
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0xE78; // GameTime_t
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0xE7C; // float32
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0xE80; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0xEBC; // bool
                constexpr std::ptrdiff_t m_iPlayerLocked = 0xEC0; // int32
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0xEC8; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0xECC; // GameTime_t
                constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0xED0; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0xED4; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0xED8; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0xEE4; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0xEF0; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0xF30; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0xF34; // Vector
                constexpr std::ptrdiff_t m_EconGloves = 0xF40; // CEconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x11E8; // uint8
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x11EC; // QAngle
                constexpr std::ptrdiff_t m_bLeftHanded = 0x11F8; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x11FC; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1200; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1204; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1208; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x120C; // float32
                constexpr std::ptrdiff_t m_bIsWalking = 0x1210; // bool
                constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x1214; // float32
                constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x1218; // float32
                constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x121C; // float32
                constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0x1220; // uint32
                constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0x1224; // float32
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1228; // GameTime_t
                constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x122C; // bool
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1230; // CEntityIndex
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1238; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1250; // int32
                constexpr std::ptrdiff_t m_bIsScoped = 0x1254; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1255; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1256; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1257; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1258; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x125C; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1260; // bool
                constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1264; // CEntityIndex
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1268; // int32
                constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x126C; // bool
                constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x126D; // bool
                constexpr std::ptrdiff_t m_iShotsFired = 0x1270; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1274; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1278; // float32
                constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x127C; // Vector
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1288; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x128C; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1290; // bool
                constexpr std::ptrdiff_t m_LastHitBox = 0x1294; // int32
                constexpr std::ptrdiff_t m_pBot = 0x1298; // CCSBot*
                constexpr std::ptrdiff_t m_bBotAllowActive = 0x12A0; // bool
                constexpr std::ptrdiff_t m_nLastPickupPriority = 0x12A4; // int32
                constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x12A8; // float32
                constexpr std::ptrdiff_t m_ArmorValue = 0x12AC; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x12B0; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x12B2; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x12B4; // uint16
                constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x12B8; // int32
                constexpr std::ptrdiff_t m_bIsSpawning = 0x12BC; // bool
                constexpr std::ptrdiff_t m_iDeathFlags = 0x12C8; // int32
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x12CC; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x12D0; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x12D4; // Vector
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x12E0; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x12F4; // Color
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x12F8; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x12FC; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1300; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x130C; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1318; // Vector
                constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1330; // bool
                constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1331; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1334; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x1338; // bool
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x133C; // float32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1340; // QAngle
            }
            // Parent: CBaseEntity
            // Field count: 22
            namespace CEnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x14B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x14C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x14C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x14D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x14E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x14E8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x14F4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1500; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1504; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1508; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x150C; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1510; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1514; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1518; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x151C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1520; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1524; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1531; // bool
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 3
            namespace SpawnPoint {
                constexpr std::ptrdiff_t m_iPriority = 0x4A8; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x4AC; // bool
                constexpr std::ptrdiff_t m_nType = 0x4B0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CFuncMoverAPI {
            }
            // Parent: None
            // Field count: 32
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransformWS
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // VectorWS
                constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
                constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x104; // CUtlStringToken
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x108; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x10C; // Vector
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM249 {
            }
            // Parent: CRopeKeyframe
            // Field count: 0
            namespace CRopeKeyframeAlias_move_rope {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs_Sounds {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulsePhysicsConstraintsFuncs {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x48; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x4C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x50; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CCashStack {
                constexpr std::ptrdiff_t m_nCashStackValue = 0x768; // int32
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CLogicScript {
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
            }
            // Parent: None
            // Field count: 6
            namespace CPulseGraphInstance_ServerEntity {
                constexpr std::ptrdiff_t m_hOwner = 0x1A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bActivated = 0x1AC; // bool
                constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x1B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sNameFixupParent = 0x1B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sNameFixupLocal = 0x1C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sProceduralWorldNameForRelays = 0x1C8; // CUtlSymbolLarge
            }
            // Parent: CSceneEntity
            // Field count: 0
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4A8; // int8
                constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4AC; // int32
                constexpr std::ptrdiff_t m_bSaveImportant = 0x4B0; // bool
                constexpr std::ptrdiff_t m_bCanTakeDamage = 0x4B1; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 12
            namespace CPostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x8D8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x8E0; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x8E4; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8E8; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x8EC; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x8F0; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x8F4; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8F8; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8FC; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x900; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x904; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x905; // bool
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPointProximitySensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4AC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Distance = 0x4B0; // CEntityOutputTemplate<float32>
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
            // Parent: CTriggerOnce
            // Field count: 15
            namespace CTriggerLook {
                constexpr std::ptrdiff_t m_hLookTarget = 0x8E0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFieldOfView = 0x8E4; // float32
                constexpr std::ptrdiff_t m_flLookTime = 0x8E8; // float32
                constexpr std::ptrdiff_t m_flLookTimeTotal = 0x8EC; // float32
                constexpr std::ptrdiff_t m_flLookTimeLast = 0x8F0; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeoutDuration = 0x8F4; // float32
                constexpr std::ptrdiff_t m_bTimeoutFired = 0x8F8; // bool
                constexpr std::ptrdiff_t m_bIsLooking = 0x8F9; // bool
                constexpr std::ptrdiff_t m_b2DFOV = 0x8FA; // bool
                constexpr std::ptrdiff_t m_bUseVelocity = 0x8FB; // bool
                constexpr std::ptrdiff_t m_bTestOcclusion = 0x8FC; // bool
                constexpr std::ptrdiff_t m_bTestAllVisibleOcclusion = 0x8FD; // bool
                constexpr std::ptrdiff_t m_OnTimeout = 0x900; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartLook = 0x918; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndLook = 0x930; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlayVCD {
                constexpr std::ptrdiff_t m_hChoreoScene = 0xF0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
                constexpr std::ptrdiff_t m_OnPaused = 0xF8; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_OnResumed = 0x140; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_OutRequirements = 0x188; // CUtlVector<CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t>
            }
            // Parent: None
            // Field count: 0
            namespace CMultiplayRules {
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CMolotovGrenade {
            }
            // Parent: CPhysForce
            // Field count: 1
            namespace CPhysTorque {
                constexpr std::ptrdiff_t m_axis = 0x508; // VectorWS
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMultiSource {
                constexpr std::ptrdiff_t m_rgEntities = 0x4A8; // CHandle<CBaseEntity>[32]
                constexpr std::ptrdiff_t m_rgTriggered = 0x528; // int32[32]
                constexpr std::ptrdiff_t m_OnTrigger = 0x5A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iTotal = 0x5C0; // int32
                constexpr std::ptrdiff_t m_globalstate = 0x5C8; // CUtlSymbolLarge
            }
            // Parent: CCSWeaponBase
            // Field count: 13
            namespace CBaseCSGrenade {
                constexpr std::ptrdiff_t m_bRedraw = 0x1030; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1031; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1032; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1033; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1034; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1038; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x103C; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x1040; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x1044; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x1048; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x104C; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1050; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1054; // CHandle<CCSWeaponBase>
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CLogicAuto {
                constexpr std::ptrdiff_t m_OnMapSpawn = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNewGame = 0x4D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLoadGame = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMapTransition = 0x508; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBackgroundMap = 0x520; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMultiNewMap = 0x538; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMultiNewRound = 0x550; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVREnabled = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x580; // CEntityIOOutput
                constexpr std::ptrdiff_t m_globalstate = 0x598; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CPhysicsWire {
                constexpr std::ptrdiff_t m_nDensity = 0x4A8; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncIllusionary {
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_flRange = 0x4AC; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x4B0; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x4B4; // int32
                constexpr std::ptrdiff_t m_hLight = 0x4B8; // CHandle<CBaseEntity>
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CMarkupVolume {
                constexpr std::ptrdiff_t m_bDisabled = 0x768; // bool
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x4A8; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x4B4; // Vector
                constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x4C0; // CUtlString
                constexpr std::ptrdiff_t m_strPathNodeParameter = 0x4C8; // CUtlString
                constexpr std::ptrdiff_t m_xWSPrevParent = 0x4D0; // CTransform
                constexpr std::ptrdiff_t m_hPath = 0x4F0; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerRemove {
                constexpr std::ptrdiff_t m_OnRemove = 0x8C8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicGameEventListener {
                constexpr std::ptrdiff_t m_OnEventFired = 0x4B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszGameEventName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszGameEventItem = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bEnabled = 0x4E0; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4E1; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CServerOnlyModelEntity {
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
            // Parent: CMarkupVolumeTagged
            // Field count: 1
            namespace CMarkupVolumeTagged_Nav {
                constexpr std::ptrdiff_t m_nScopes = 0x7A8; // NavScopeFlags_t
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerTerrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAutosave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4A8; // bool
                constexpr std::ptrdiff_t m_minHitPoints = 0x4AC; // int32
                constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4B0; // int32
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroTerroristPosition {
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
            namespace CSingleplayRules {
                constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0xD0; // bool
            }
            // Parent: None
            // Field count: 17
            namespace CEnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x2A; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2C; // float32
                constexpr std::ptrdiff_t m_location = 0x30; // VectorWS
                constexpr std::ptrdiff_t m_OnGustStart = 0x40; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGustEnd = 0x58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hEntOwner = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 7
            namespace CPointPrefab {
                constexpr std::ptrdiff_t m_targetMapName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fixupNames = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bLoadDynamic = 0x4C1; // bool
                constexpr std::ptrdiff_t m_associatedRelayEntity = 0x4C4; // CHandle<CPointPrefab>
                constexpr std::ptrdiff_t m_ProceduralRelaySources = 0x4C8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CEnvInstructorVRHint {
                constexpr std::ptrdiff_t m_iszName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iTimeout = 0x4B8; // int32
                constexpr std::ptrdiff_t m_iszCaption = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStartSound = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iLayoutFileType = 0x4D0; // int32
                constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iAttachType = 0x4E0; // int32
                constexpr std::ptrdiff_t m_flHeightOffset = 0x4E4; // float32
            }
            // Parent: CGameRulesProxy
            // Field count: 1
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x4A8; // CCSGameRules*
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CPrecipitation {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCommentaryViewPosition {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CEnvGlobal {
                constexpr std::ptrdiff_t m_outCounter = 0x4A8; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_globalstate = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_triggermode = 0x4D0; // int32
                constexpr std::ptrdiff_t m_initialstate = 0x4D4; // int32
                constexpr std::ptrdiff_t m_counter = 0x4D8; // int32
            }
            // Parent: CLogicNPCCounterAABB
            // Field count: 0
            namespace CLogicNPCCounterOBB {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CPlatTrigger {
                constexpr std::ptrdiff_t m_pPlatform = 0x768; // CHandle<CFuncPlat>
            }
            // Parent: CPointEntity
            // Field count: 66
            namespace CSceneEntity {
                constexpr std::ptrdiff_t m_iszSceneFile = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget1 = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget2 = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget3 = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget4 = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget5 = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget6 = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget7 = 0x4E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget8 = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget1 = 0x4F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget2 = 0x4FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget3 = 0x500; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget4 = 0x504; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget5 = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget6 = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget7 = 0x510; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget8 = 0x514; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hLocatorOrigin = 0x518; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_sTargetAttachment = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x528; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x529; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x52A; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x52B; // bool
                constexpr std::ptrdiff_t m_bAllRequirementsComplete = 0x52C; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x530; // float32
                constexpr std::ptrdiff_t m_flCurrentTime = 0x534; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x538; // float32
                constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x53C; // bool
                constexpr std::ptrdiff_t m_fPitch = 0x540; // float32
                constexpr std::ptrdiff_t m_bAutomated = 0x544; // bool
                constexpr std::ptrdiff_t m_nAutomatedAction = 0x548; // int32
                constexpr std::ptrdiff_t m_flAutomationDelay = 0x54C; // float32
                constexpr std::ptrdiff_t m_flAutomationTime = 0x550; // float32
                constexpr std::ptrdiff_t m_nSpeechPriority = 0x554; // int32
                constexpr std::ptrdiff_t m_bPausedViaInput = 0x558; // bool
                constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x559; // bool
                constexpr std::ptrdiff_t m_bWaitingForActor = 0x55A; // bool
                constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x55B; // bool
                constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x55C; // bool
                constexpr std::ptrdiff_t m_bTakeOverNPCBehavior = 0x55D; // bool
                constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x55E; // bool
                constexpr std::ptrdiff_t m_bSceneFinished = 0x55F; // bool
                constexpr std::ptrdiff_t m_hActorList = 0x560; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_hRemoveActorList = 0x578; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5C0; // uint16
                constexpr std::ptrdiff_t m_OnStart = 0x5C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCompletion = 0x5E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCanceled = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPaused = 0x610; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnResumed = 0x628; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPulseRequirement = 0x640; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hInterruptScene = 0x758; // CHandle<CSceneEntity>
                constexpr std::ptrdiff_t m_nInterruptCount = 0x75C; // int32
                constexpr std::ptrdiff_t m_bSceneMissing = 0x760; // bool
                constexpr std::ptrdiff_t m_bInterrupted = 0x761; // bool
                constexpr std::ptrdiff_t m_bCompletedEarly = 0x762; // bool
                constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x763; // bool
                constexpr std::ptrdiff_t m_bRestoring = 0x764; // bool
                constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x768; // CUtlVector<CHandle<CSceneEntity>>
                constexpr std::ptrdiff_t m_hListManagers = 0x780; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszSoundName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSequenceName = 0x7A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hActor = 0x7A8; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_hActivator = 0x7AC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_BusyActor = 0x7B0; // int32
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x7B4; // SceneOnPlayerDeath_t
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CChoreoInfoTarget {
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CTonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4B8; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CMapSharedEnvironment {
                constexpr std::ptrdiff_t m_targetMapName = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            namespace CTakeDamageResultAPI {
            }
            // Parent: None
            // Field count: 8
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace CPhysMagnet {
                constexpr std::ptrdiff_t m_OnMagnetAttach = 0x940; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMagnetDetach = 0x958; // CEntityIOOutput
                constexpr std::ptrdiff_t m_massScale = 0x970; // float32
                constexpr std::ptrdiff_t m_forceLimit = 0x974; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0x978; // float32
                constexpr std::ptrdiff_t m_MagnettedEntities = 0x980; // CUtlVector<magnetted_objects_t>
                constexpr std::ptrdiff_t m_bActive = 0x998; // bool
                constexpr std::ptrdiff_t m_bHasHitSomething = 0x999; // bool
                constexpr std::ptrdiff_t m_flTotalMass = 0x99C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x9A0; // float32
                constexpr std::ptrdiff_t m_flNextSuckTime = 0x9A4; // GameTime_t
                constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0x9A8; // int32
            }
            // Parent: None
            // Field count: 3
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CGameGibManager {
                constexpr std::ptrdiff_t m_bAllowNewGibs = 0x4C0; // bool
                constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x4C4; // int32
                constexpr std::ptrdiff_t m_iMaxPieces = 0x4C8; // int32
                constexpr std::ptrdiff_t m_iLastFrame = 0x4CC; // int32
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CHandleDummy {
            }
            // Parent: CFuncWall
            // Field count: 0
            namespace CFuncWallToggle {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48; // int32
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CSkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x4A8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x538; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x53C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x540; // CSkyCamera*
            }
            // Parent: CCSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: CItemDefuser
            // Field count: 0
            namespace CItemDefuserAlias_item_defuser {
            }
            // Parent: CPathCorner
            // Field count: 0
            namespace CPathCornerCrash {
            }
            // Parent: CPhysConstraint
            // Field count: 4
            namespace CPhysPulley {
                constexpr std::ptrdiff_t m_position2 = 0x508; // VectorWS
                constexpr std::ptrdiff_t m_offset = 0x514; // Vector[2]
                constexpr std::ptrdiff_t m_addLength = 0x52C; // float32
                constexpr std::ptrdiff_t m_gearRatio = 0x530; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSPetPlacement {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP5SD {
            }
            // Parent: CCSWeaponBase
            // Field count: 2
            namespace CWeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1030; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1031; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CCommentaryAuto {
                constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x4D8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
                constexpr std::ptrdiff_t m_entity = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 4
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponUSPSilencer {
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CSoundStackSave {
                constexpr std::ptrdiff_t m_iszStackName = 0x4A8; // CUtlSymbolLarge
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
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMag7 {
            }
            // Parent: CLogicalEntity
            // Field count: 9
            namespace CLogicMeasureMovement {
                constexpr std::ptrdiff_t m_strMeasureTarget = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strMeasureReference = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strTargetReference = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hMeasureReference = 0x4C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget = 0x4C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTargetReference = 0x4CC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flScale = 0x4D0; // float32
                constexpr std::ptrdiff_t m_nMeasureType = 0x4D4; // int32
            }
            // Parent: CCSWeaponBase
            // Field count: 11
            namespace CC4 {
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0x1060; // Vector
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0x106C; // Vector
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0x1078; // bool
                constexpr std::ptrdiff_t m_bStartedArming = 0x1079; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x107C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1080; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1081; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1088; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x10A0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x10A4; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x10AB; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CHostageCarriableProp {
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_cable_dynamic {
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x4AC; // float32
            }
            // Parent: CBasePlayerPawn
            // Field count: 15
            namespace CCSPlayerPawnBase {
                constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xBC0; // CTouchExpansionComponent
                constexpr std::ptrdiff_t m_pPingServices = 0xC10; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_blindUntilTime = 0xC18; // GameTime_t
                constexpr std::ptrdiff_t m_blindStartTime = 0xC1C; // GameTime_t
                constexpr std::ptrdiff_t m_iPlayerState = 0xC20; // CSPlayerState
                constexpr std::ptrdiff_t m_bRespawning = 0xCD0; // bool
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xCD1; // bool
                constexpr std::ptrdiff_t m_iNumSpawns = 0xCD4; // int32
                constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xCDC; // float32
                constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xCE0; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0xCE8; // float32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0xCEC; // float32
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0xCF0; // int32
                constexpr std::ptrdiff_t m_hOriginalController = 0xCF4; // CHandle<CCSPlayerController>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x538; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSPointScriptEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: CBaseTrigger
            // Field count: 9
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_OnBombExplode = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombPlanted = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefused = 0x8F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bIsBombSiteB = 0x910; // bool
                constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x911; // bool
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x912; // bool
                constexpr std::ptrdiff_t m_szMountTarget = 0x918; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hInstructorHint = 0x920; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x924; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CRuleEntity {
                constexpr std::ptrdiff_t m_iszMaster = 0x768; // CUtlSymbolLarge
            }
            // Parent: CPhysForce
            // Field count: 1
            namespace CPhysThruster {
                constexpr std::ptrdiff_t m_localOrigin = 0x508; // Vector
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInfoPlayerStart {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x4A9; // bool
                constexpr std::ptrdiff_t m_pPawnSubclass = 0x4B0; // CGlobalSymbol
            }
            // Parent: CBaseEntity
            // Field count: 10
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x4A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x4AC; // bool
                constexpr std::ptrdiff_t m_flSize = 0x4B0; // float32
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x4B4; // bool
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4B8; // int32
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flLifetime = 0x4C0; // GameTime_t
                constexpr std::ptrdiff_t m_hAttacker = 0x4C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4C8; // float32
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x4CC; // int32
            }
            // Parent: CGameSceneNode
            // Field count: 8
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x130; // CModelState
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x380; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x381; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x388; // uint8
                constexpr std::ptrdiff_t m_bForceServerConstraintsEnabled = 0x3E4; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: CBaseToggle
            // Field count: 5
            namespace CBasePlatTrain {
                constexpr std::ptrdiff_t m_NoiseMoving = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_volume = 0x800; // float32
                constexpr std::ptrdiff_t m_flTWidth = 0x804; // float32
                constexpr std::ptrdiff_t m_flTLength = 0x808; // float32
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 4
            namespace CPointTeleport {
                constexpr std::ptrdiff_t m_vSaveOrigin = 0x4A8; // Vector
                constexpr std::ptrdiff_t m_vSaveAngles = 0x4B4; // QAngle
                constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4C1; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerGameEvent {
                constexpr std::ptrdiff_t m_strStartTouchEventName = 0x8C8; // CUtlString
                constexpr std::ptrdiff_t m_strEndTouchEventName = 0x8D0; // CUtlString
                constexpr std::ptrdiff_t m_strTriggerID = 0x8D8; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CMessageEntity {
                constexpr std::ptrdiff_t m_radius = 0x4A8; // int32
                constexpr std::ptrdiff_t m_messageText = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_drawText = 0x4B8; // bool
                constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4B9; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x4BA; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CEnvEntityIgniter {
                constexpr std::ptrdiff_t m_flLifetime = 0x4A8; // float32
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
            // Parent: CMarkupVolumeWithRef
            // Field count: 3
            namespace CMarkupVolumeTagged_NavGame {
                constexpr std::ptrdiff_t m_nScopes = 0x7D0; // NavScopeFlags_t
                constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x7D1; // bool
                constexpr std::ptrdiff_t m_bSplitNavSpace = 0x7D2; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CMultiLightProxy {
                constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4B8; // float32
                constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4BC; // float32
                constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4C0; // bool
                constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x4C8; // float32
                constexpr std::ptrdiff_t m_vecLights = 0x4D0; // CUtlVector<CHandle<CLightEntity>>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1 {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerHostageReset {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseAnimFuncs {
            }
            // Parent: CEconEntity
            // Field count: 2
            namespace CEconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0xC70; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0xC74; // bool
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
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMAC10 {
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            namespace CFuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x768; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0x778; // CUtlVector<CHandle<CInfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0x790; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x79C; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x7A8; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x7B4; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x7B8; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x7B9; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x7BA; // bool
                constexpr std::ptrdiff_t m_surfacePropName = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x7C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x7E0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CFogController {
                constexpr std::ptrdiff_t m_fog = 0x4A8; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x510; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x514; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CPointTemplateAPI {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            namespace CItem {
                constexpr std::ptrdiff_t m_OnPlayerTouch = 0x948; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x960; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0x978; // bool
                constexpr std::ptrdiff_t m_OnCacheInteraction = 0x980; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGlovePulled = 0x998; // CEntityIOOutput
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0x9B0; // VectorWS
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0x9BC; // QAngle
                constexpr std::ptrdiff_t m_bPhysStartAsleep = 0x9C8; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CTriggerPush {
                constexpr std::ptrdiff_t m_angPushEntitySpace = 0x8C8; // QAngle
                constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x8D4; // Vector
                constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x8E0; // bool
                constexpr std::ptrdiff_t m_bUsePathSimple = 0x8E1; // bool
                constexpr std::ptrdiff_t m_iszPathSimpleName = 0x8E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathSimple = 0x8F0; // CHandle<CPathSimple>
                constexpr std::ptrdiff_t m_splinePushType = 0x8F4; // uint32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x940; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x944; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x948; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x950; // CTransform
            }
            // Parent: CPointEntity
            // Field count: 11
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x4AC; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x4B0; // int32
                constexpr std::ptrdiff_t m_szPanelType = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x4D0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4E8; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x4F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_szTargetsName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x510; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: CPointEntity
            // Field count: 16
            namespace CPointAngularVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flThreshold = 0x4AC; // float32
                constexpr std::ptrdiff_t m_nLastCompareResult = 0x4B0; // int32
                constexpr std::ptrdiff_t m_nLastFireResult = 0x4B4; // int32
                constexpr std::ptrdiff_t m_flFireTime = 0x4B8; // GameTime_t
                constexpr std::ptrdiff_t m_flFireInterval = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4C0; // float32
                constexpr std::ptrdiff_t m_lastOrientation = 0x4C4; // QAngle
                constexpr std::ptrdiff_t m_vecAxis = 0x4D0; // VectorWS
                constexpr std::ptrdiff_t m_bUseHelper = 0x4DC; // bool
                constexpr std::ptrdiff_t m_AngularVelocity = 0x4E0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnLessThan = 0x500; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x530; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x548; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEqualTo = 0x560; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 6
            namespace CPlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x4B4; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4B8; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4B9; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_FollowEntity {
                constexpr std::ptrdiff_t m_ParamBoneOrAttachName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_ParamBoneOrAttachNameChild = 0x50; // CUtlString
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CFlashbang {
            }
            // Parent: CEconEntity
            // Field count: 8
            namespace CBasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xC70; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xC74; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xC78; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xC7C; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0xC80; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0xC84; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xC88; // int32[2]
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xC90; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x520; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x524; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szAnimSkeleton = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                constexpr std::ptrdiff_t m_vecMuzzlePos0 = 0x608; // Vector
                constexpr std::ptrdiff_t m_vecMuzzlePos1 = 0x614; // Vector
                constexpr std::ptrdiff_t m_szTracerParticle = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0x700; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0x704; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0x708; // loadout_slot_t
                constexpr std::ptrdiff_t m_nPrice = 0x70C; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0x710; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0x714; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0x718; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0x71C; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0x71D; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0x71E; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0x71F; // bool
                constexpr std::ptrdiff_t m_szName = 0x720; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eSilencerType = 0x728; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0x72C; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0x730; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0x734; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0x738; // int32
                constexpr std::ptrdiff_t m_bReloadsSingleShells = 0x73C; // bool
                constexpr std::ptrdiff_t m_flCycleTime = 0x740; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flCycleTimeWhenInBurstMode = 0x748; // float32
                constexpr std::ptrdiff_t m_flTimeBetweenBurstShots = 0x74C; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x750; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0x758; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x760; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0x768; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0x770; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0x778; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x780; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0x788; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0x790; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0x798; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x7A0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x7A8; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x7B0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0x7B8; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flDeployDuration = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x7D0; // float32
                constexpr std::ptrdiff_t m_nBurstShotCount = 0x7D4; // int32
                constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x7D8; // bool
                constexpr std::ptrdiff_t m_nRecoilSeed = 0x7DC; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0x7E0; // int32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x7EC; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x7F0; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x7F8; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x7F9; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0x7FC; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0x800; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0x804; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0x808; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0x80C; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0x810; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x814; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x818; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0x81C; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x820; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0x824; // float32
                constexpr std::ptrdiff_t m_nDamage = 0x828; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x82C; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0x830; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0x834; // float32
                constexpr std::ptrdiff_t m_flRange = 0x838; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0x83C; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x840; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x844; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x848; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x84C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x850; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x854; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x858; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x85C; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0x860; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x864; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0x870; // CGlobalSymbol
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CPhysForce {
                constexpr std::ptrdiff_t m_pController = 0x4A8; // IPhysicsMotionController*
                constexpr std::ptrdiff_t m_nameAttach = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_force = 0x4B8; // float32
                constexpr std::ptrdiff_t m_forceTime = 0x4BC; // float32
                constexpr std::ptrdiff_t m_attachedObject = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_wasRestored = 0x4C4; // bool
                constexpr std::ptrdiff_t m_integrator = 0x4C8; // CConstantForceController
            }
            // Parent: None
            // Field count: 6
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoTarget {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 12
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x54; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x58; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x60; // fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xA0; // CHandle<CColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0xA4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA8; // CHandle<CTonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xB0; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x128; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x140; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x144; // float32
                constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x160; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
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
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            namespace CPulseFuncs_GameParticleManager {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            namespace CScenePayloadVData {
                constexpr std::ptrdiff_t m_eNPCBehavior = 0x0; // ENPCBehaviorOverride_t
                constexpr std::ptrdiff_t m_sPulseFile = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
                constexpr std::ptrdiff_t m_sSceneFile = 0xE8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
                constexpr std::ptrdiff_t m_ePriority = 0x1C8; // InteractionPriority_t
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 8
            namespace CKeepUpright {
                constexpr std::ptrdiff_t m_worldGoalAxis = 0x4B0; // Vector
                constexpr std::ptrdiff_t m_localTestAxis = 0x4BC; // Vector
                constexpr std::ptrdiff_t m_pController = 0x4C8; // IPhysicsMotionController*
                constexpr std::ptrdiff_t m_nameAttach = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_attachedObject = 0x4D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angularLimit = 0x4DC; // float32
                constexpr std::ptrdiff_t m_bActive = 0x4E0; // bool
                constexpr std::ptrdiff_t m_bDampAllRotation = 0x4E1; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4C0; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4C4; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x4C8; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x4CC; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x4D0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x4E8; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x500; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x508; // HSCRIPT
                constexpr std::ptrdiff_t m_OnEntitySpawned = 0x510; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: CBaseEntity
            // Field count: 36
            namespace CEnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x4A8; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x4AC; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x4B8; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x4C4; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x4C8; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x4CC; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4D0; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4D4; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4D8; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x4DC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4E8; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x4F4; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x4F8; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x4FC; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x500; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x504; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x508; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x50C; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x510; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x514; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x518; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x51C; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x51D; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x51E; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x528; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x52C; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x530; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x534; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x540; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x544; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x550; // bool
            }
            // Parent: None
            // Field count: 13
            namespace CBot {
                constexpr std::ptrdiff_t m_pController = 0x10; // CCSPlayerController*
                constexpr std::ptrdiff_t m_pPlayer = 0x18; // CCSPlayerPawn*
                constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // bool
                constexpr std::ptrdiff_t m_id = 0x24; // uint32
                constexpr std::ptrdiff_t m_isRunning = 0xC0; // bool
                constexpr std::ptrdiff_t m_isCrouching = 0xC1; // bool
                constexpr std::ptrdiff_t m_forwardSpeed = 0xC4; // float32
                constexpr std::ptrdiff_t m_leftSpeed = 0xC8; // float32
                constexpr std::ptrdiff_t m_verticalSpeed = 0xCC; // float32
                constexpr std::ptrdiff_t m_buttonFlags = 0xD0; // uint64
                constexpr std::ptrdiff_t m_jumpTimestamp = 0xD8; // float32
                constexpr std::ptrdiff_t m_viewForward = 0xDC; // Vector
                constexpr std::ptrdiff_t m_postureStackIndex = 0xF8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_SetAnimGraphParam {
                constexpr std::ptrdiff_t m_ParamName = 0x48; // CUtlString
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 92
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x7E0; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x7E8; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x7F0; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x7F8; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x800; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x804; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x808; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x810; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x818; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x81C; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x820; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x824; // bool
                constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x825; // bool
                constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x828; // int32
                constexpr std::ptrdiff_t m_bTeamChanged = 0x82C; // bool
                constexpr std::ptrdiff_t m_bInSwitchTeam = 0x82D; // bool
                constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x82E; // bool
                constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x82F; // bool
                constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x830; // bool
                constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x831; // bool
                constexpr std::ptrdiff_t m_flLastJoinTeamTime = 0x834; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x838; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x840; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x848; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x850; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x858; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x85C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x860; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x864; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x868; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x86C; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x870; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x874; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x878; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x87C; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x880; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8B0; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8B4; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8B8; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8BC; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8C0; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8C1; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8C2; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8C3; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8C4; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x8C5; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8C8; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x8D8; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x8D9; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x8DA; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x8DC; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x8E0; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x8E4; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x8E8; // CHandle<CCSObserverPawn>
                constexpr std::ptrdiff_t m_DesiredObserverMode = 0x8EC; // int32
                constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x8F0; // CEntityHandle
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x8F4; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x8F8; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x8FC; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x900; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x901; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x902; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x904; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x908; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x90C; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x910; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x914; // int32
                constexpr std::ptrdiff_t m_iRoundScore = 0x918; // int32
                constexpr std::ptrdiff_t m_iRoundsWon = 0x91C; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x920; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0x928; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x929; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x92A; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x92C; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x930; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x934; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x938; // int32
                constexpr std::ptrdiff_t m_nUpdateCounter = 0x93C; // int32
                constexpr std::ptrdiff_t m_flSmoothedPing = 0x940; // float32
                constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0x948; // IntervalTimer
                constexpr std::ptrdiff_t m_bShowHints = 0x960; // bool
                constexpr std::ptrdiff_t m_iNextTimeCheck = 0x964; // int32
                constexpr std::ptrdiff_t m_bJustDidTeamKill = 0x968; // bool
                constexpr std::ptrdiff_t m_bPunishForTeamKill = 0x969; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0x96A; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0x96B; // bool
                constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0x970; // float64
                constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0x978; // GameTime_t
                constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0x97C; // GameTime_t
                constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0x980; // uint32
                constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0x984; // uint32
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0xA29; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 5
            namespace CPhysLength {
                constexpr std::ptrdiff_t m_offset = 0x508; // Vector[2]
                constexpr std::ptrdiff_t m_vecAttach = 0x520; // VectorWS
                constexpr std::ptrdiff_t m_addLength = 0x52C; // float32
                constexpr std::ptrdiff_t m_minLength = 0x530; // float32
                constexpr std::ptrdiff_t m_totalLength = 0x534; // float32
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CTeam {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x4A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x4D8; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x4DC; // char[129]
            }
            // Parent: CLogicNPCCounter
            // Field count: 4
            namespace CLogicNPCCounterAABB {
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x728; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x734; // Vector
                constexpr std::ptrdiff_t m_vOuterMins = 0x740; // Vector
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x74C; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: CDynamicProp
            // Field count: 28
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xBA0; // CAttributeContainer
                constexpr std::ptrdiff_t m_updateTimer = 0xE98; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckAnchor = 0xEB0; // Vector
                constexpr std::ptrdiff_t m_stuckTimer = 0xEC0; // CountdownTimer
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0xED8; // CountdownTimer
                constexpr std::ptrdiff_t m_isOnGround = 0xEF0; // bool
                constexpr std::ptrdiff_t m_vFallVelocity = 0xEF4; // Vector
                constexpr std::ptrdiff_t m_desiredActivity = 0xF00; // ChickenActivity
                constexpr std::ptrdiff_t m_currentActivity = 0xF04; // ChickenActivity
                constexpr std::ptrdiff_t m_activityTimer = 0xF08; // CountdownTimer
                constexpr std::ptrdiff_t m_turnRate = 0xF20; // float32
                constexpr std::ptrdiff_t m_fleeFrom = 0xF24; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xF28; // CountdownTimer
                constexpr std::ptrdiff_t m_startleTimer = 0xF40; // CountdownTimer
                constexpr std::ptrdiff_t m_vocalizeTimer = 0xF58; // CountdownTimer
                constexpr std::ptrdiff_t m_flWhenZombified = 0xF70; // GameTime_t
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xF74; // bool
                constexpr std::ptrdiff_t m_leader = 0xF78; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_reuseTimer = 0xF90; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xFA8; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0xFB0; // CountdownTimer
                constexpr std::ptrdiff_t m_flLastJumpTime = 0xFC8; // float32
                constexpr std::ptrdiff_t m_bInJump = 0xFCC; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x2FD8; // CountdownTimer
                constexpr std::ptrdiff_t m_vecPathGoal = 0x3070; // Vector
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x307C; // GameTime_t
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x3080; // CountdownTimer
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x30A0; // CountdownTimer
            }
            // Parent: CPhysicsProp
            // Field count: 5
            namespace CPhysicsPropRespawnable {
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xC10; // VectorWS
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xC1C; // QAngle
                constexpr std::ptrdiff_t m_vOriginalMins = 0xC28; // Vector
                constexpr std::ptrdiff_t m_vOriginalMaxs = 0xC34; // Vector
                constexpr std::ptrdiff_t m_flRespawnDuration = 0xC40; // float32
            }
            // Parent: CBeam
            // Field count: 19
            namespace CEnvBeam {
                constexpr std::ptrdiff_t m_active = 0x808; // int32
                constexpr std::ptrdiff_t m_spriteTexture = 0x810; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszStartEntity = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEndEntity = 0x820; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_life = 0x828; // float32
                constexpr std::ptrdiff_t m_boltWidth = 0x82C; // float32
                constexpr std::ptrdiff_t m_noiseAmplitude = 0x830; // float32
                constexpr std::ptrdiff_t m_speed = 0x834; // int32
                constexpr std::ptrdiff_t m_restrike = 0x838; // float32
                constexpr std::ptrdiff_t m_iszSpriteName = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_frameStart = 0x848; // int32
                constexpr std::ptrdiff_t m_vEndPointWorld = 0x84C; // VectorWS
                constexpr std::ptrdiff_t m_vEndPointRelative = 0x858; // Vector
                constexpr std::ptrdiff_t m_radius = 0x864; // float32
                constexpr std::ptrdiff_t m_TouchType = 0x868; // Touch_t
                constexpr std::ptrdiff_t m_iFilterName = 0x870; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x878; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszDecal = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x888; // CEntityIOOutput
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightSpotEntity {
            }
            // Parent: CCSWeaponBaseShotgun
            // Field count: 0
            namespace CWeaponSawedoff {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTonemapTrigger {
                constexpr std::ptrdiff_t m_tonemapControllerName = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTonemapController = 0x8D0; // CEntityHandle
            }
            // Parent: CPointEntity
            // Field count: 11
            namespace CEnvShake {
                constexpr std::ptrdiff_t m_limitToEntity = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Amplitude = 0x4B0; // float32
                constexpr std::ptrdiff_t m_Frequency = 0x4B4; // float32
                constexpr std::ptrdiff_t m_Duration = 0x4B8; // float32
                constexpr std::ptrdiff_t m_Radius = 0x4BC; // float32
                constexpr std::ptrdiff_t m_stopTime = 0x4C0; // GameTime_t
                constexpr std::ptrdiff_t m_nextShake = 0x4C4; // GameTime_t
                constexpr std::ptrdiff_t m_currentAmp = 0x4C8; // float32
                constexpr std::ptrdiff_t m_maxForce = 0x4CC; // Vector
                constexpr std::ptrdiff_t m_pShakeController = 0x4D8; // IPhysicsMotionController*
                constexpr std::ptrdiff_t m_shakeCallback = 0x4E0; // CPhysicsShake
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 52
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_AnimationState = 0x310; // CCSPlayerAnimationState
                constexpr std::ptrdiff_t m_bUsingGroundTopologyOffset = 0x3F0; // bool
                constexpr std::ptrdiff_t m_flUsingGroundTopologyOffsetTransitionSmoothing = 0x3F4; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x3F8; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x404; // int32
                constexpr std::ptrdiff_t m_bDucked = 0x408; // bool
                constexpr std::ptrdiff_t m_flDuckAmount = 0x40C; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x410; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x414; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x415; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x416; // bool
                constexpr std::ptrdiff_t m_flDuckRootOffset = 0x418; // float32
                constexpr std::ptrdiff_t m_flDuckViewOffset = 0x41C; // float32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x420; // float32
                constexpr std::ptrdiff_t m_flBombPlantViewOffset = 0x424; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x430; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x438; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x439; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x43A; // bool
                constexpr std::ptrdiff_t m_nTraceCount = 0x648; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x64C; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x650; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x654; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x658; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x65C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x668; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x674; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x680; // int32
                constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x684; // bool
                constexpr std::ptrdiff_t m_iFootsteps = 0x688; // int32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x68C; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x690; // uint64
                constexpr std::ptrdiff_t m_bUseFrictionStashedSpeed = 0x698; // bool
                constexpr std::ptrdiff_t m_flUseFrictionStashedSpeedUntilFrac = 0x69C; // float32
                constexpr std::ptrdiff_t m_flFrictionStashedSpeed = 0x6A0; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x6A4; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x6A8; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x6AC; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x6B0; // float32
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x6B4; // float32
                constexpr std::ptrdiff_t m_flVelMulAtJumpStart = 0x6B8; // float32
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x6BC; // float32
                constexpr std::ptrdiff_t m_LegacyJump = 0x6C0; // CCSPlayerLegacyJump
                constexpr std::ptrdiff_t m_ModernJump = 0x6D8; // CCSPlayerModernJump
                constexpr std::ptrdiff_t m_nLastJumpTick = 0x710; // GameTick_t
                constexpr std::ptrdiff_t m_flLastJumpFrac = 0x714; // float32
                constexpr std::ptrdiff_t m_flLastJumpVelocityZ = 0x718; // float32
                constexpr std::ptrdiff_t m_bJumpApexPending = 0x71C; // bool
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x720; // float32
                constexpr std::ptrdiff_t m_bWasSurfing = 0x724; // bool
                constexpr std::ptrdiff_t m_vecWalkWishVel = 0x7B4; // Vector2D
                constexpr std::ptrdiff_t m_bHasEverProcessedCommand = 0xFE0; // bool
            }
            // Parent: None
            // Field count: 5
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTestPulseIO__EntityNameStringArgs_t {
                constexpr std::ptrdiff_t nameA = 0x0; // CEntityNameString
                constexpr std::ptrdiff_t strValueB = 0x8; // CUtlSymbolLarge
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerCallback {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x640; // CUtlVector<SoundOpvarTraceResult_t>
                constexpr std::ptrdiff_t m_doorwayPairs = 0x658; // CUtlVector<AutoRoomDoorwayPairs_t>
                constexpr std::ptrdiff_t m_flSize = 0x670; // float32
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x674; // float32
                constexpr std::ptrdiff_t m_flSizeSqr = 0x678; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorSubHeaderText
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Outflow_ListenForEntityOutput {
                constexpr std::ptrdiff_t m_OnFired = 0x48; // SignatureOutflow_Resume
                constexpr std::ptrdiff_t m_OnCanceled = 0x90; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_strEntityOutput = 0xD8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_strEntityOutputParam = 0xE0; // CUtlString
                constexpr std::ptrdiff_t m_bListenUntilCanceled = 0xE8; // bool
            }
            // Parent: CBreakable
            // Field count: 0
            namespace CPushable {
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CRotatorTarget {
                constexpr std::ptrdiff_t m_OnArrivedAt = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_eSpace = 0x4C0; // RotatorTargetSpace_t
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CPhysicsEntitySolver {
                constexpr std::ptrdiff_t m_hMovingEntity = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_separationDuration = 0x4C8; // float32
                constexpr std::ptrdiff_t m_cancelTime = 0x4CC; // GameTime_t
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCollisionPair {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_includeHierarchy = 0x4B8; // bool
                constexpr std::ptrdiff_t m_supportMultipleEntitiesWithSameName = 0x4B9; // bool
                constexpr std::ptrdiff_t m_disabled = 0x4BA; // bool
                constexpr std::ptrdiff_t m_succeeded = 0x4BB; // bool
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CTestEffect {
                constexpr std::ptrdiff_t m_iLoop = 0x4A8; // int32
                constexpr std::ptrdiff_t m_iBeam = 0x4AC; // int32
                constexpr std::ptrdiff_t m_pBeam = 0x4B0; // CHandle<CBeam>[24]
                constexpr std::ptrdiff_t m_flBeamTime = 0x510; // GameTime_t[24]
                constexpr std::ptrdiff_t m_flStartTime = 0x570; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_ScriptedSequence__CursorState_t {
                constexpr std::ptrdiff_t m_scriptedSequence = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: CBasePropDoor
            // Field count: 18
            namespace CPropDoorRotating {
                constexpr std::ptrdiff_t m_vecAxis = 0xD80; // Vector
                constexpr std::ptrdiff_t m_flDistance = 0xD8C; // float32
                constexpr std::ptrdiff_t m_eSpawnPosition = 0xD90; // PropDoorRotatingSpawnPos_t
                constexpr std::ptrdiff_t m_eOpenDirection = 0xD94; // PropDoorRotatingOpenDirection_e
                constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xD98; // PropDoorRotatingOpenDirection_e
                constexpr std::ptrdiff_t m_eDefaultCheckDirection = 0xD9C; // doorCheck_e
                constexpr std::ptrdiff_t m_flAjarAngle = 0xDA0; // float32
                constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xDA4; // QAngle
                constexpr std::ptrdiff_t m_angRotationClosed = 0xDB0; // QAngle
                constexpr std::ptrdiff_t m_angRotationOpenForward = 0xDBC; // QAngle
                constexpr std::ptrdiff_t m_angRotationOpenBack = 0xDC8; // QAngle
                constexpr std::ptrdiff_t m_angGoal = 0xDD4; // QAngle
                constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xDE0; // Vector
                constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xDEC; // Vector
                constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xDF8; // Vector
                constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xE04; // Vector
                constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xE10; // bool
                constexpr std::ptrdiff_t m_hEntityBlocker = 0xE14; // CHandle<CEntityBlocker>
            }
            // Parent: CParticleSystem
            // Field count: 5
            namespace CEnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0xCE0; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0xCE8; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0xCEC; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0xCF0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CMathRemap {
                constexpr std::ptrdiff_t m_flInMin = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flInMax = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flOut1 = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flOut2 = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flOldInValue = 0x4B8; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x4BC; // bool
                constexpr std::ptrdiff_t m_OutValue = 0x4C0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x4E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFellBelowMin = 0x510; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFellBelowMax = 0x528; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 8
            namespace CSoundOpvarSetOBBWindEntity {
                constexpr std::ptrdiff_t m_vMins = 0x550; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x55C; // Vector
                constexpr std::ptrdiff_t m_vDistanceMins = 0x568; // Vector
                constexpr std::ptrdiff_t m_vDistanceMaxs = 0x574; // Vector
                constexpr std::ptrdiff_t m_flWindMin = 0x580; // float32
                constexpr std::ptrdiff_t m_flWindMax = 0x584; // float32
                constexpr std::ptrdiff_t m_flWindMapMin = 0x588; // float32
                constexpr std::ptrdiff_t m_flWindMapMax = 0x58C; // float32
            }
            // Parent: None
            // Field count: 3
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // CNetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // int32
            }
            // Parent: CTriggerOnce
            // Field count: 1
            namespace CScriptTriggerOnce {
                constexpr std::ptrdiff_t m_vExtent = 0x8E0; // Vector
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightOrthoEntity {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintHostageRescueZone {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 4
            namespace CTriggerTeleport {
                constexpr std::ptrdiff_t m_iLandmark = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x8D0; // bool
                constexpr std::ptrdiff_t m_bMirrorPlayer = 0x8D1; // bool
                constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x8D2; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWall {
                constexpr std::ptrdiff_t m_nState = 0x768; // int32
            }
            // Parent: None
            // Field count: 12
            namespace CBtActionAim {
                constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_szAimReadyKey = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88; // float32
                constexpr std::ptrdiff_t m_bDoneAiming = 0x8C; // bool
                constexpr std::ptrdiff_t m_flLerpStartTime = 0x90; // float32
                constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94; // float32
                constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98; // float32
                constexpr std::ptrdiff_t m_NextLookTarget = 0x9C; // QAngle
                constexpr std::ptrdiff_t m_AimTimer = 0xA8; // CountdownTimer
                constexpr std::ptrdiff_t m_SniperHoldTimer = 0xC0; // CountdownTimer
                constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xD8; // CountdownTimer
                constexpr std::ptrdiff_t m_bAcquired = 0xF0; // bool
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CCSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x4A8; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x4AC; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x4B0; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x4B8; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x4C0; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x4C8; // CEconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x770; // CEconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xA18; // CEconItemView
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CGameRulesProxy {
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CInfoLadderDismount {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs {
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CMessage {
                constexpr std::ptrdiff_t m_iszMessage = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_MessageVolume = 0x4B0; // float32
                constexpr std::ptrdiff_t m_MessageAttenuation = 0x4B4; // int32
                constexpr std::ptrdiff_t m_Radius = 0x4B8; // float32
                constexpr std::ptrdiff_t m_sNoise = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnShowMessage = 0x4C8; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPointVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecAxis = 0x4AC; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x4B8; // bool
                constexpr std::ptrdiff_t m_fPrevVelocity = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flAvgInterval = 0x4C0; // float32
                constexpr std::ptrdiff_t m_Velocity = 0x4C8; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2PawnGraphController {
                constexpr std::ptrdiff_t m_bIsDefusing = 0x588; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_moveType = 0x5A0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_moveDirectionID = 0x5B8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flMoveSpeedX = 0x5D0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flMoveSpeedY = 0x5E8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flMoveSpeedHorizontal = 0x600; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flPreviousMoveSpeedHorizontal = 0x618; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flCrouchAmount = 0x630; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsWalking = 0x648; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponDropAmount = 0x660; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_groundAction = 0x678; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_groundActionDirectionID = 0x690; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flGroundTurnAngleOrVelocity = 0x6A8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderCycle = 0x6C0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderYaw = 0x6D8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderYawBackwards = 0x6F0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_airAction = 0x708; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flAirHeightAboveGround = 0x720; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_leftFootTarget = 0x738; // CAnimGraph2ParamOptionalRef<CNmTarget>
                constexpr std::ptrdiff_t m_rightFootTarget = 0x750; // CAnimGraph2ParamOptionalRef<CNmTarget>
                constexpr std::ptrdiff_t m_flFlashedAmount = 0x768; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAimPitchAngle = 0x780; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAimYawAngle = 0x798; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flinchHead = 0x7B0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flinchHeadRestart = 0x7C8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flinchBody = 0x7E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flinchBodyRestart = 0x7F8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flinchIsOnFire = 0x810; // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 3
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBaseModelEntityAPI {
            }
            // Parent: CTriggerMultiple
            // Field count: 1
            namespace CScriptTriggerMultiple {
                constexpr std::ptrdiff_t m_vExtent = 0x8E0; // Vector
            }
            // Parent: CHostageExpresserShim
            // Field count: 39
            namespace CHostage {
                constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xA28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xA40; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xA58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRescued = 0xA70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_entitySpottedState = 0xA88; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xAA0; // int32
                constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xAA4; // uint32
                constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xAA8; // uint32
                constexpr std::ptrdiff_t m_bRemove = 0xAAC; // bool
                constexpr std::ptrdiff_t m_vel = 0xAB0; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0xABC; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xABD; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0xAC0; // int32
                constexpr std::ptrdiff_t m_leader = 0xAC4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_lastLeader = 0xAC8; // CHandle<CCSPlayerPawnBase>
                constexpr std::ptrdiff_t m_reuseTimer = 0xAD0; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xAE8; // bool
                constexpr std::ptrdiff_t m_accel = 0xAEC; // Vector
                constexpr std::ptrdiff_t m_isRunning = 0xAF8; // bool
                constexpr std::ptrdiff_t m_isCrouching = 0xAF9; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0xB00; // CountdownTimer
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xB18; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x2B28; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2B40; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2BD0; // CountdownTimer
                constexpr std::ptrdiff_t m_wiggleTimer = 0x2BF0; // CountdownTimer
                constexpr std::ptrdiff_t m_isAdjusted = 0x2C0C; // bool
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2C0D; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x2C10; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x2C14; // GameTime_t
                constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2C18; // Vector
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2C24; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x2C30; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2C34; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x2C38; // GameTime_t
                constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2C3C; // int32
                constexpr std::ptrdiff_t m_nPickupEventCount = 0x2C40; // int32
                constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2C44; // Vector
                constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2C7C; // VectorWS
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CEnvSpark {
                constexpr std::ptrdiff_t m_flDelay = 0x4A8; // float32
                constexpr std::ptrdiff_t m_nMagnitude = 0x4AC; // int32
                constexpr std::ptrdiff_t m_nTrailLength = 0x4B0; // int32
                constexpr std::ptrdiff_t m_nType = 0x4B4; // int32
                constexpr std::ptrdiff_t m_OnSpark = 0x4B8; // CEntityIOOutput
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CEnvCombinedLightProbeVolume
            // Field count: 0
            namespace CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseModelEntity__OnDamageLevelChangedArgs_t {
                constexpr std::ptrdiff_t nHitGroup = 0x0; // HitGroup_t
                constexpr std::ptrdiff_t nDamageLevel = 0x4; // int32
                constexpr std::ptrdiff_t nDamageLevelsRemaining = 0x8; // int32
                constexpr std::ptrdiff_t nPrevDamageLevel = 0xC; // int32
            }
            // Parent: CBaseFilter
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget = 0x4B0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bActive = 0x4B4; // bool
                constexpr std::ptrdiff_t m_nGoalDirection = 0x4B8; // PointOrientGoalDirectionType_t
                constexpr std::ptrdiff_t m_nConstraint = 0x4BC; // PointOrientConstraint_t
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flLastGameTime = 0x4C4; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponP250 {
            }
            // Parent: None
            // Field count: 4
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_pAnimGraphDestructibleGraphController = 0x68; // CBaseAnimGraphDestructibleParts_GraphController*
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CChangeLevel {
                constexpr std::ptrdiff_t m_sMapName = 0x8C8; // CUtlString
                constexpr std::ptrdiff_t m_sLandmarkName = 0x8D0; // CUtlString
                constexpr std::ptrdiff_t m_OnChangeLevel = 0x8D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bTouched = 0x8F0; // bool
                constexpr std::ptrdiff_t m_bNoTouch = 0x8F1; // bool
                constexpr std::ptrdiff_t m_bNewChapter = 0x8F2; // bool
                constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x8F3; // bool
            }
            // Parent: CBaseToggle
            // Field count: 25
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7E8; // QAngle
                constexpr std::ptrdiff_t m_fStayPushed = 0x7F4; // bool
                constexpr std::ptrdiff_t m_fRotating = 0x7F5; // bool
                constexpr std::ptrdiff_t m_ls = 0x7F8; // locksound_t
                constexpr std::ptrdiff_t m_sUseSound = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sLockedSound = 0x820; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sUnlockedSound = 0x828; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sOverrideAnticipationName = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bLocked = 0x838; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x839; // bool
                constexpr std::ptrdiff_t m_flUseLockedTime = 0x83C; // GameTime_t
                constexpr std::ptrdiff_t m_bSolidBsp = 0x840; // bool
                constexpr std::ptrdiff_t m_OnDamaged = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPressed = 0x860; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUseLocked = 0x878; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnIn = 0x890; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOut = 0x8A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nState = 0x8C0; // int32
                constexpr std::ptrdiff_t m_hConstraint = 0x8C4; // CEntityHandle
                constexpr std::ptrdiff_t m_hConstraintParent = 0x8C8; // CEntityHandle
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x8CC; // bool
                constexpr std::ptrdiff_t m_sGlowEntity = 0x8D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_glowEntity = 0x8D8; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x8DC; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x8E0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_SoundEventStart {
                constexpr std::ptrdiff_t m_Type = 0x48; // SoundEventStartType_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: CWeaponBaseItem
            // Field count: 0
            namespace CItem_Healthshot {
            }
            // Parent: CBaseAnimGraph
            // Field count: 14
            namespace CBaseGrenade {
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x948; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExplode = 0x960; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x978; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x979; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x97A; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x97C; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x980; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x984; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x988; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x990; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x998; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x9A0; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x9B8; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x9BC; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseTrigger
            // Field count: 8
            namespace CColorCorrectionVolume {
                constexpr std::ptrdiff_t m_MaxWeight = 0x8C8; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x8CC; // float32
                constexpr std::ptrdiff_t m_Weight = 0x8D0; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x8D4; // char[512]
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xAD4; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xAD8; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0xADC; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xAE0; // GameTime_t
            }
            // Parent: CPlayerControllerComponent
            // Field count: 5
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xC8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x188; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x18C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x190; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x4A0; // CBaseAnimGraphController
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
            // Parent: CServerOnlyModelEntity
            // Field count: 5
            namespace CFogVolume {
                constexpr std::ptrdiff_t m_fogName = 0x768; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_postProcessName = 0x770; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_colorCorrectionName = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0x788; // bool
                constexpr std::ptrdiff_t m_bInFogVolumesList = 0x789; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x768; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStarted = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedStart = 0x798; // CEntityIOOutput
                constexpr std::ptrdiff_t m_localRotationVector = 0x7B0; // RotationVector
                constexpr std::ptrdiff_t m_flFanFriction = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flAttenuation = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flVolume = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7D0; // float32
                constexpr std::ptrdiff_t m_NoiseRunning = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bReversed = 0x7E0; // bool
                constexpr std::ptrdiff_t m_bAccelDecel = 0x7E1; // bool
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x7F8; // QAngle
                constexpr std::ptrdiff_t m_angStart = 0x804; // QAngle
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x810; // bool
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x814; // Vector
                constexpr std::ptrdiff_t m_vecClientAngles = 0x820; // QAngle
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CTimerEntity {
                constexpr std::ptrdiff_t m_OnTimer = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimerHigh = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimerLow = 0x4D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iDisabled = 0x4F0; // int32
                constexpr std::ptrdiff_t m_flInitialDelay = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flRefireTime = 0x4F8; // float32
                constexpr std::ptrdiff_t m_bUpDownState = 0x4FC; // bool
                constexpr std::ptrdiff_t m_iUseRandomTime = 0x500; // int32
                constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x504; // bool
                constexpr std::ptrdiff_t m_flLowerRandomBound = 0x508; // float32
                constexpr std::ptrdiff_t m_flUpperRandomBound = 0x50C; // float32
                constexpr std::ptrdiff_t m_flRemainingTime = 0x510; // float32
                constexpr std::ptrdiff_t m_bPaused = 0x514; // bool
            }
            // Parent: None
            // Field count: 14
            namespace CBtActionMoveTo {
                constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_szThreatInputKey = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_vecDestination = 0x78; // Vector
                constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84; // bool
                constexpr std::ptrdiff_t m_bComputePath = 0x85; // bool
                constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88; // float32
                constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
                constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xA8; // CountdownTimer
                constexpr std::ptrdiff_t m_RepathTimer = 0xC0; // CountdownTimer
                constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xD8; // float32
                constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xDC; // float32
                constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xE0; // float32
                constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xE4; // float32
            }
            // Parent: CPlayer_MovementServices
            // Field count: 7
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x258; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x25C; // float32
                constexpr std::ptrdiff_t m_groundNormal = 0x260; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x26C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x270; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x280; // int32
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x284; // Vector
            }
            // Parent: None
            // Field count: 0
            namespace CBaseEntityAPI {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponG3SG1 {
            }
            // Parent: CTriggerMultiple
            // Field count: 0
            namespace CTriggerOnce {
            }
            // Parent: None
            // Field count: 21
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
                constexpr std::ptrdiff_t m_iEnemy2Ks = 0x7C; // int32
                constexpr std::ptrdiff_t m_iUtility_Count = 0x80; // int32
                constexpr std::ptrdiff_t m_iUtility_Successes = 0x84; // int32
                constexpr std::ptrdiff_t m_iUtility_Enemies = 0x88; // int32
                constexpr std::ptrdiff_t m_iFlash_Count = 0x8C; // int32
                constexpr std::ptrdiff_t m_iFlash_Successes = 0x90; // int32
                constexpr std::ptrdiff_t m_flHealthPointsRemovedTotal = 0x94; // float32
                constexpr std::ptrdiff_t m_flHealthPointsDealtTotal = 0x98; // float32
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9C; // int32
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xA0; // int32
                constexpr std::ptrdiff_t m_i1v1Count = 0xA4; // int32
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA8; // int32
                constexpr std::ptrdiff_t m_i1v2Count = 0xAC; // int32
                constexpr std::ptrdiff_t m_i1v2Wins = 0xB0; // int32
                constexpr std::ptrdiff_t m_iEntryCount = 0xB4; // int32
                constexpr std::ptrdiff_t m_iEntryWins = 0xB8; // int32
            }
            // Parent: None
            // Field count: 2
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
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
            // Parent: CFuncBrush
            // Field count: 9
            namespace CFuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0x788; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x790; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0x794; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x795; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0x798; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0x7A0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0x7A4; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x7A5; // bool
                constexpr std::ptrdiff_t m_bStartEnabled = 0x7A6; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CInfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x4AC; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x4B0; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x4BC; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            namespace CGunTarget {
                constexpr std::ptrdiff_t m_on = 0x7E8; // bool
                constexpr std::ptrdiff_t m_hTargetEnt = 0x7EC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnDeath = 0x7F0; // CEntityIOOutput
            }
            // Parent: CSoundEventEntity
            // Field count: 5
            namespace CSoundEventConeEntity {
                constexpr std::ptrdiff_t m_flEmitterAngle = 0x568; // float32
                constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x56C; // float32
                constexpr std::ptrdiff_t m_flAttenMin = 0x570; // float32
                constexpr std::ptrdiff_t m_flAttenMax = 0x574; // float32
                constexpr std::ptrdiff_t m_iszParameterName = 0x578; // CUtlSymbolLarge
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Field count: 0
            namespace CSoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CFilterMultipleAPI {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            namespace CDecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0xA48; // int32
                constexpr std::ptrdiff_t m_shotsRemaining = 0xA4C; // int32
                constexpr std::ptrdiff_t m_fExpireTime = 0xA50; // GameTime_t
                constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xA60; // uint16
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CPrecipitationBlocker {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 4
            namespace CSoundOpvarSetPathCornerEntity {
                constexpr std::ptrdiff_t m_bUseParentedPath = 0x658; // bool
                constexpr std::ptrdiff_t m_flDistMinSqr = 0x65C; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x660; // float32
                constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x668; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointClientCommand {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CWorld {
            }
            // Parent: CLogicalEntity
            // Field count: 14
            namespace CPathMoverEntitySpawner {
                constexpr std::ptrdiff_t m_szSpawnTemplates = 0x4A8; // CUtlSymbolLarge[4]
                constexpr std::ptrdiff_t m_nSpawnIndex = 0x4C8; // int32
                constexpr std::ptrdiff_t m_hPathMover = 0x4CC; // CHandle<CPathMover>
                constexpr std::ptrdiff_t m_flSpawnFrequencySeconds = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flSpawnFrequencyDistToNearestMover = 0x4D4; // float32
                constexpr std::ptrdiff_t m_mapSpawnedMoverTemplates = 0x4D8; // CUtlHashtable<CHandle<CFuncMover>,PathMoverEntitySpawn>
                constexpr std::ptrdiff_t m_nMaxActive = 0x4F8; // int32
                constexpr std::ptrdiff_t m_nSpawnNum = 0x4FC; // int32
                constexpr std::ptrdiff_t m_flLastSpawnTime = 0x500; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x504; // bool
                constexpr std::ptrdiff_t m_bDestroyMoverOnArrivedAtEnd = 0x505; // bool
                constexpr std::ptrdiff_t m_vecQueuedRemovals = 0x508; // CUtlVector<CHandle<CFuncMover>>
                constexpr std::ptrdiff_t m_OnTemplateSpawned = 0x520; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTemplateGroupSpawned = 0x538; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 14
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pVPhysicsAggregate = 0xE0; // IPhysAggregateInstance*
                constexpr std::ptrdiff_t m_flRootBoneOffset_x = 0xE8; // float32
                constexpr std::ptrdiff_t m_flRootBoneOffset_y = 0xEC; // float32
                constexpr std::ptrdiff_t m_flRootBoneOffset_z = 0xF0; // float32
                constexpr std::ptrdiff_t m_nRootBoneOffsetResetSerialNumber = 0xF4; // uint8
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xF5; // bool
                constexpr std::ptrdiff_t m_nAnimStateNoInterpSerialNumber = 0x1A0; // uint8
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x1A8; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x1F8; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x242; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x243; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x244; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
                constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle<CPointCamera>
                constexpr std::ptrdiff_t m_OverlaidStart = 0xC; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_OverlaidEnd = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponGlock {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 0
            namespace CHEGrenadeProjectile {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerGravity {
            }
            // Parent: None
            // Field count: 17
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponGalilAR {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x4E0; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP7 {
            }
            // Parent: CCSWeaponBase
            // Field count: 10
            namespace CCSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1030; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1034; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1040; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x1044; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1045; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1048; // int32
                constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0x104C; // bool
                constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0x104D; // bool
                constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0x104E; // bool
                constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0x104F; // bool
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CEnableMotionFixup {
            }
            // Parent: CLogicAutosave
            // Field count: 4
            namespace CLogicActiveAutosave {
                constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4B8; // int32
                constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x4C0; // GameTime_t
                constexpr std::ptrdiff_t m_flDangerousTime = 0x4C4; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CMathCounter {
                constexpr std::ptrdiff_t m_flMin = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flMax = 0x4AC; // float32
                constexpr std::ptrdiff_t m_bHitMin = 0x4B0; // bool
                constexpr std::ptrdiff_t m_bHitMax = 0x4B1; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x4B2; // bool
                constexpr std::ptrdiff_t m_OutValue = 0x4B8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGetValue = 0x4D8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnHitMin = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHitMax = 0x510; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnChangedFromMin = 0x528; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnChangedFromMax = 0x540; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CAttributeManager
            // Field count: 1
            namespace CAttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // CEconItemView
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0x780; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterContext {
                constexpr std::ptrdiff_t m_iFilterContext = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CLightDirectionalEntity
            // Field count: 0
            namespace CLightEnvironmentEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            namespace CEnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x768; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0x770; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x774; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x778; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0x77C; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x780; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x781; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x782; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x784; // float32
            }
            // Parent: CBaseEntity
            // Field count: 18
            namespace CEnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4A8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x4AC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4B8; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4C4; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x4C5; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x4C8; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x4CC; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x4D4; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x4D8; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x4DC; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x4E0; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x4E4; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x4E8; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x4EC; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x4ED; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x4EE; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x4EF; // bool
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CServerOnlyEntity {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_PlaySequence__CursorState_t {
                constexpr std::ptrdiff_t m_hTarget = 0x0; // CHandle<CBaseAnimGraph>
            }
            // Parent: CBodyComponent
            // Field count: 1
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
            }
            // Parent: CItem
            // Field count: 32
            namespace CItemGeneric {
                constexpr std::ptrdiff_t m_bHasTriggerRadius = 0x9F4; // bool
                constexpr std::ptrdiff_t m_bHasPickupRadius = 0x9F5; // bool
                constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0x9F8; // float32
                constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0x9FC; // float32
                constexpr std::ptrdiff_t m_flLastPickupCheck = 0xA00; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xA04; // bool
                constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xA05; // bool
                constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xA08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xA10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xA18; // bool
                constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xA20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xA28; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xA30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xA38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xA48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xA50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pPickupFilterName = 0xA58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPickupFilter = 0xA60; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnPickup = 0xA68; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimeout = 0xA80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xA98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerTouch = 0xAB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xAC8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xAE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPickupRadius = 0xAE8; // float32
                constexpr std::ptrdiff_t m_flTriggerRadius = 0xAEC; // float32
                constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xAF0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xAF8; // bool
                constexpr std::ptrdiff_t m_glowColor = 0xAF9; // Color
                constexpr std::ptrdiff_t m_bUseable = 0xAFD; // bool
                constexpr std::ptrdiff_t m_hTriggerHelper = 0xB00; // CHandle<CItemGenericTriggerHelper>
            }
            // Parent: CBaseEntity
            // Field count: 44
            namespace CPointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4A9; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x4AC; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x4D0; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4D4; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x4D8; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x4E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOutputEntities = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x518; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x51C; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x520; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x524; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x528; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x52C; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x530; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x534; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x538; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x539; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x53C; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x540; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x544; // Vector
                constexpr std::ptrdiff_t m_hUsingPlayer = 0x550; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flCustomOutputValue = 0x554; // float32
                constexpr std::ptrdiff_t m_iszSoundEngage = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundDisengage = 0x560; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Position = 0x598; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PositionDelta = 0x5B8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueOne = 0x5F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x608; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEngage = 0x620; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDisengage = 0x638; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            namespace CBtNodeConditionInactive {
                constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78; // float32
                constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7C; // float32
                constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80; // CountdownTimer
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 31
            namespace CRagdollProp {
                constexpr std::ptrdiff_t m_ragdoll = 0x950; // ragdoll_t
                constexpr std::ptrdiff_t m_bStartDisabled = 0x9A0; // bool
                constexpr std::ptrdiff_t m_ragEnabled = 0x9A8; // CNetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x9C0; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x9D8; // CNetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_lastUpdateTickCount = 0x9F0; // uint32
                constexpr std::ptrdiff_t m_allAsleep = 0x9F4; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0x9F5; // bool
                constexpr std::ptrdiff_t m_nNavObstacleType = 0x9F8; // INavObstacle::NavObstacleType_t
                constexpr std::ptrdiff_t m_bUpdateNavWhenMoving = 0x9FC; // bool
                constexpr std::ptrdiff_t m_bForceNavObstacleCut = 0x9FD; // bool
                constexpr std::ptrdiff_t m_bAttachedToReferenceFrame = 0x9FE; // bool
                constexpr std::ptrdiff_t m_hDamageEntity = 0xA00; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hKiller = 0xA04; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xA08; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xA0C; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeOutStartTime = 0xA10; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeTime = 0xA14; // float32
                constexpr std::ptrdiff_t m_vecLastOrigin = 0xA18; // VectorWS
                constexpr std::ptrdiff_t m_flAwakeTime = 0xA24; // GameTime_t
                constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0xA28; // GameTime_t
                constexpr std::ptrdiff_t m_strOriginClassName = 0xA30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strSourceClassName = 0xA38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0xA40; // bool
                constexpr std::ptrdiff_t m_bAllowStretch = 0xA41; // bool
                constexpr std::ptrdiff_t m_flBlendWeight = 0xA44; // float32
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xA48; // float32
                constexpr std::ptrdiff_t m_ragdollMins = 0xA50; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_ragdollMaxs = 0xA68; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xA80; // bool
                constexpr std::ptrdiff_t m_vecNavObstacles = 0xA98; // CUtlVector<INavObstacle*>
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: CBasePlatTrain
            // Field count: 6
            namespace CFuncTrain {
                constexpr std::ptrdiff_t m_hCurrentTarget = 0x810; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_activated = 0x814; // bool
                constexpr std::ptrdiff_t m_hEnemy = 0x818; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flBlockDamage = 0x81C; // float32
                constexpr std::ptrdiff_t m_flNextBlockTime = 0x820; // GameTime_t
                constexpr std::ptrdiff_t m_iszLastTarget = 0x828; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CAI_ChangeHintGroup {
                constexpr std::ptrdiff_t m_iSearchType = 0x4A8; // int32
                constexpr std::ptrdiff_t m_strSearchName = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strNewHintGroup = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRadius = 0x4C0; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xD0; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAug {
            }
            // Parent: CPhysConstraint
            // Field count: 19
            namespace CPhysHinge {
                constexpr std::ptrdiff_t m_soundInfo = 0x510; // ConstraintSoundInfo
                constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x5A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x5C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAtMinLimit = 0x5D8; // bool
                constexpr std::ptrdiff_t m_bAtMaxLimit = 0x5D9; // bool
                constexpr std::ptrdiff_t m_hinge = 0x5DC; // constraint_hingeparams_t
                constexpr std::ptrdiff_t m_hingeFriction = 0x61C; // float32
                constexpr std::ptrdiff_t m_systemLoadScale = 0x620; // float32
                constexpr std::ptrdiff_t m_bIsAxisLocal = 0x624; // bool
                constexpr std::ptrdiff_t m_flMinRotation = 0x628; // float32
                constexpr std::ptrdiff_t m_flMaxRotation = 0x62C; // float32
                constexpr std::ptrdiff_t m_flInitialRotation = 0x630; // float32
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x634; // float32
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x638; // float32
                constexpr std::ptrdiff_t m_flAngleSpeed = 0x63C; // float32
                constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x640; // float32
                constexpr std::ptrdiff_t m_flLimitsDebugVisRotation = 0x644; // float32
                constexpr std::ptrdiff_t m_OnStartMoving = 0x648; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStopMoving = 0x660; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CBuyZone {
                constexpr std::ptrdiff_t m_LegacyTeamNum = 0x8C8; // int32
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CInfoChoreoAnchor {
                constexpr std::ptrdiff_t m_vecTargetEntries = 0x4A8; // CUtlVector<CInfoChoreoAnchorPosition>
                constexpr std::ptrdiff_t m_vecTargetWarps = 0x4C0; // CUtlVector<CInfoChoreoAnchorPosition>
            }
            // Parent: None
            // Field count: 0
            namespace DestructiblePartDamageRequestAPI {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSSG08 {
            }
            // Parent: None
            // Field count: 0
            namespace CLogicRelayAPI {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4D0; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4D1; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4D2; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4D4; // uint32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CLogicProximity {
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointGiveAmmo {
                constexpr std::ptrdiff_t m_pActivator = 0x4A8; // CHandle<CBaseEntity>
            }
            // Parent: CCSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupStart {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x4E0; // int32
            }
            // Parent: CBaseEntity
            // Field count: 26
            namespace CPointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x4A8; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x4AC; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x4B0; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x4B1; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x4B8; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4C0; // float32
                constexpr std::ptrdiff_t m_bActive = 0x4C4; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4C5; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x4C8; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x4CC; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x4D8; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4DC; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x4DD; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x4DE; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4E0; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4E4; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x4EC; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x4F0; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x4F4; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x4F8; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x4FC; // bool
                constexpr std::ptrdiff_t m_pNext = 0x500; // CPointCamera*
            }
            // Parent: None
            // Field count: 2
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
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
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x4E0; // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2WeaponGraphController {
                constexpr std::ptrdiff_t m_action = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponActionSpeedScale = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_weaponCategory = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0xE8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponExtraInfo = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flWeaponAmmo = 0x118; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x160; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x178; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x190; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_deployVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_attackType = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_attackThrowStrength = 0x1F0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAttackVariation = 0x208; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectVariation = 0x220; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectExtraInfo = 0x238; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_reloadStage = 0x250; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 20
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // VectorWS
                constexpr std::ptrdiff_t m_vStart = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // int16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            namespace CEntityDissolve {
                constexpr std::ptrdiff_t m_flFadeInStart = 0x768; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x76C; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x770; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x774; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x778; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x77C; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x780; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0x784; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x788; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0x794; // uint32
            }
            // Parent: None
            // Field count: 189
            namespace CCSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xD8; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xD9; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xDC; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xE0; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xE4; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xE5; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xE8; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xEC; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xF0; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xF4; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xF8; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xF9; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0xFC; // int32
                constexpr std::ptrdiff_t m_iRoundTime = 0x100; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x104; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x108; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x10C; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x110; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x114; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x118; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x11C; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x120; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x124; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x128; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x12C; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x130; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x131; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x132; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x133; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x134; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x138; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x13C; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x13D; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x13E; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x140; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0x144; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x148; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x14C; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x150; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x350; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x550; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x750; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x950; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x954; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x958; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x95C; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x95D; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x95E; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x95F; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x960; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA28; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA38; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA3C; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0xA40; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA44; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA48; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA4C; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA4D; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA50; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAC8; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB40; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBB8; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC38; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCB8; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCC4; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xCD0; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xCF0; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xCF8; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD20; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD48; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD4C; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD50; // int32
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xD70; // bool
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xD74; // GameTime_t
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xD78; // GameTime_t
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xD7C; // bool
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xD80; // int32
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xD84; // int32
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xD88; // bool
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xD89; // bool
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xD8C; // int32
                constexpr std::ptrdiff_t m_iNumCT = 0xD90; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xD94; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xD98; // int32
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDA0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDB8; // int32
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDBC; // bool
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDBD; // bool
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDBE; // bool
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDBF; // bool
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDC0; // bool
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDC8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xDE4; // bool
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xDE8; // uint32
                constexpr std::ptrdiff_t m_fAvgPlayerRank = 0xDEC; // float32
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xDF0; // char*
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xDF8; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xDFC; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE00; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE04; // uint32
                constexpr std::ptrdiff_t m_nCTsAliveAtFreezetimeEnd = 0xE10; // int32
                constexpr std::ptrdiff_t m_nTerroristsAliveAtFreezetimeEnd = 0xE14; // int32
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE18; // bool
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE19; // bool
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE50; // int32
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE54; // float32
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xE70; // int32
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xE74; // float32
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xE78; // float32
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xE7C; // int32
                constexpr std::ptrdiff_t m_iAccountCT = 0xE80; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xE84; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xE88; // int32
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xE8C; // int32
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xE90; // int32
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xE94; // int32
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xE98; // float32
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xE9C; // bool
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xEA0; // float32
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xEA8; // int32
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xEAC; // int32
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEB0; // float32
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEB4; // bool
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEB5; // bool
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEB6; // bool
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEB7; // bool
                constexpr std::ptrdiff_t m_firstKillTime = 0xEBC; // float32
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEC4; // float32
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xEE0; // bool
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xEE1; // bool
                constexpr std::ptrdiff_t m_bVoteCalled = 0xEF0; // bool
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xEF1; // bool
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xEF4; // float32
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xEF8; // bool
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xEFC; // int32
                constexpr std::ptrdiff_t m_bTargetBombed = 0xF00; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xF01; // bool
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF02; // bool
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF50; // Vector
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF60; // CUtlVector<CHandle<SpawnPoint>>
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF78; // CUtlVector<CHandle<SpawnPoint>>
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF90; // bool
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF94; // int32
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xF98; // float32
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xF9C; // int32
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xFA0; // float32
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFA8; // CUtlVector<CHandle<SpawnPoint>>
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFC0; // CUtlVector<CHandle<SpawnPoint>>
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFD8; // bool
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFDC; // float32
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1018; // bool
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1019; // bool
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x101C; // GameTime_t
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1020; // float32
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x1024; // GameTime_t
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1028; // float32
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x102C; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x1078; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x107C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x107D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1098; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x10A0; // KeyValues3
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1138; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_RetakeRules = 0x1140; // CRetakeGameRules
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1330; // CUtlVector<int32>[4]
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1390; // bool[4]
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x13B8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x13BC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x13C0; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x13C4; // bool
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x13C8; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x13CC; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x13D0; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x13D4; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x13D8; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x13DC; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x13E0; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x13E8; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x13EC; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x13F0; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x13F4; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x13F8; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1400; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1404; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1408; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x140C; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1410; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x1414; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5420; // float64
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CBaseGrenade
            // Field count: 16
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x9C0; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x9CC; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x9D8; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x9E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x9E8; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x9EC; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0x9F8; // GameTime_t
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0x9FC; // uint8
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0x9FD; // bool
                constexpr std::ptrdiff_t m_nItemIndex = 0x9FE; // uint16
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xA00; // Vector
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xA0C; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xA10; // RotationVector
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xA1C; // Vector
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xA28; // int32
                constexpr std::ptrdiff_t m_bHasEverHitEnemy = 0xA2C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 14
            namespace CPhysConstraint {
                constexpr std::ptrdiff_t m_hJoint = 0x4A8; // IPhysicsJoint*
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hAttach1 = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAttach2 = 0x4C4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nameAttachment1 = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttachment2 = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_breakSound = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_forceLimit = 0x4E0; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0x4E4; // float32
                constexpr std::ptrdiff_t m_minTeleportDistance = 0x4E8; // float32
                constexpr std::ptrdiff_t m_bSnapObjectPositions = 0x4EC; // bool
                constexpr std::ptrdiff_t m_bTreatEntity1AsInfiniteMass = 0x4ED; // bool
                constexpr std::ptrdiff_t m_OnBreak = 0x4F0; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAchievement {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnFired = 0x4B8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                constexpr std::ptrdiff_t pItem = 0x0; // CEconItemView*
                constexpr std::ptrdiff_t team = 0x8; // uint16
                constexpr std::ptrdiff_t slot = 0xA; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 71
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x75; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x80; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88; // float32
                constexpr std::ptrdiff_t m_flRange = 0x8C; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xA0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xA4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xB0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xD4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x118; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x11C; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x120; // bool
                constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x121; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x124; // int32
                constexpr std::ptrdiff_t m_nBounceLight = 0x128; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x12C; // float32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x130; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x134; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x138; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x13C; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x140; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x141; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x142; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x15C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x168; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x174; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x180; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x184; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x188; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x18C; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x190; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x194; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x198; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x19C; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x19D; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1A0; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1A4; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1A8; // float32
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1B8; // bool
            }
            // Parent: CBasePlayerWeapon
            // Field count: 52
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xCB8; // bool
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xCB9; // bool
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xCBA; // bool
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0xCBC; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0xCC0; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0xCC4; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0xCC8; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0xCC9; // bool
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xCF4; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xD10; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xD18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0xD30; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xD34; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xD38; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xD44; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xD48; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xD4C; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xD50; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xD54; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xD58; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0xD5C; // bool
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xD60; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xD64; // float32
                constexpr std::ptrdiff_t m_bInReload = 0xD68; // bool
                constexpr std::ptrdiff_t m_nDeployTick = 0xD6C; // GameTick_t
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xD70; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xD78; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0xD79; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xD7C; // GameTime_t
                constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0xD80; // float32
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xD84; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xD88; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xD8C; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xD90; // float32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xDA8; // bool
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xDA9; // bool
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xDAC; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xDB0; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0xDB8; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0xDBC; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0xDC0; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0xDC4; // bool
                constexpr std::ptrdiff_t m_donated = 0xDE4; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0xDE8; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xDEC; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xDED; // bool
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xDF0; // int32
                constexpr std::ptrdiff_t m_IronSightController = 0xE50; // CIronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0xE68; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xE6C; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0xE70; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0xE80; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x8C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x8CC; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicLineToEntity {
                constexpr std::ptrdiff_t m_Line = 0x4A8; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_SourceName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_StartEntity = 0x4D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_EndEntity = 0x4DC; // CHandle<CBaseEntity>
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            namespace CSoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x4C8; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x1F8; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x224; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x228; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            namespace CTestPulseIOComponent_API {
            }
            // Parent: CBaseButton
            // Field count: 0
            namespace CPhysicalButton {
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CInfoSpawnGroupLoadUnload {
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x4D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLandmarkName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x520; // CUtlString
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x528; // float32
                constexpr std::ptrdiff_t m_bAutoActivate = 0x52C; // bool
                constexpr std::ptrdiff_t m_bUnloadingStarted = 0x52D; // bool
                constexpr std::ptrdiff_t m_bQueueActiveSpawnGroupChange = 0x52E; // bool
                constexpr std::ptrdiff_t m_bQueueFinishLoading = 0x52F; // bool
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 2
            namespace CSoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x4C8; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x4D4; // Vector
            }
            // Parent: CPlayer_MovementServices
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorSubHeaderText
            namespace CPulseCell_Outflow_ListenForAnimgraphTag {
                constexpr std::ptrdiff_t m_OnStart = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnEnd = 0x90; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xD8; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_TagName = 0x120; // CGlobalSymbol
            }
            // Parent: CEntityComponent
            // Field count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
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
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CDecoyGrenade {
            }
            // Parent: None
            // Field count: 13
            namespace CEconItemView {
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x40; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x48; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x50; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x54; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x58; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x5C; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x68; // bool
                constexpr std::ptrdiff_t m_AttributeList = 0x70; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xE8; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x160; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x201; // char[161]
            }
            // Parent: CMolotovGrenade
            // Field count: 0
            namespace CIncendiaryGrenade {
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CBaseDMStart {
                constexpr std::ptrdiff_t m_Master = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 40
            namespace CBaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x4A8; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x4B0; // CHitboxComponent
                constexpr std::ptrdiff_t m_pChoreoComponent = 0x4C8; // CChoreoComponent*
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0x4D0; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0x4D4; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0x4D8; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0x4DC; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0x4E0; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x4E4; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x4E8; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x4EC; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x4F0; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x4F4; // int32
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0x4F9; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0x4FA; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0x4FB; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0x4FC; // bool
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0x500; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_OnDestructibleHitGroupDamageLevelChanged = 0x508; // CEntityOutputTemplate<CBaseModelEntity::OnDamageLevelChangedArgs_t>
                constexpr std::ptrdiff_t m_flDissolveStartTime = 0x530; // GameTime_t
                constexpr std::ptrdiff_t m_OnIgnite = 0x538; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nRenderMode = 0x550; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0x551; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0x552; // bool
                constexpr std::ptrdiff_t m_clrRender = 0x570; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x578; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x5E0; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0x5E1; // bool
                constexpr std::ptrdiff_t m_Collision = 0x5E8; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0x698; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x6F0; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0x6F4; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0x6F8; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0x700; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0x704; // uint8
                constexpr std::ptrdiff_t m_bodyGroupChoices = 0x708; // CUtlOrderedMap<CGlobalSymbol,int32>
                constexpr std::ptrdiff_t m_vecViewOffset = 0x730; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x760; // uint32[1]
            }
            // Parent: None
            // Field count: 14
            namespace fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<CFogController>
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
                constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
                constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
            }
            // Parent: None
            // Field count: 11
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
                constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
            }
            // Parent: CSceneEntity
            // Field count: 7
            namespace CInstancedSceneEntity {
                constexpr std::ptrdiff_t m_hOwner = 0x7C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bHadOwner = 0x7C4; // bool
                constexpr std::ptrdiff_t m_flPostSpeakDelay = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flPreDelay = 0x7CC; // float32
                constexpr std::ptrdiff_t m_bIsBackground = 0x7D0; // bool
                constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0x7D1; // bool
                constexpr std::ptrdiff_t m_hTarget = 0x7D4; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x4C0; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x4CC; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x4D8; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x4E4; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x4F0; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSoundEventParameter {
                constexpr std::ptrdiff_t m_iszParamName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flFloatValue = 0x4C8; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_WaterServices {
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
            // Parent: CBaseButton
            // Field count: 0
            namespace CRotButton {
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvViewPunch {
                constexpr std::ptrdiff_t m_flRadius = 0x4A8; // float32
                constexpr std::ptrdiff_t m_angViewPunch = 0x4AC; // QAngle
            }
            // Parent: None
            // Field count: 15
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x30; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x34; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x58; // uint64
                constexpr std::ptrdiff_t m_flBulletsDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x64; // float32
                constexpr std::ptrdiff_t m_flActualHealthRemoved = 0x68; // float32
                constexpr std::ptrdiff_t m_iNumHits = 0x6C; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x70; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x74; // bool
                constexpr std::ptrdiff_t m_killType = 0x75; // EKillTypes_t
            }
            // Parent: None
            // Field count: 11
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nDetailLayerMask = 0x2A; // uint16
                constexpr std::ptrdiff_t m_nDetailLayerMaskType = 0x2C; // uint8
                constexpr std::ptrdiff_t m_nTargetDetailLayer = 0x2D; // uint8
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2E; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2F; // uint8
            }
            // Parent: CItem
            // Field count: 0
            namespace CItemKevlar {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_matPanelTransform = 0x768; // matrix3x4_t
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x798; // matrix3x4_t
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x7C8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_PanelSize = 0x7E0; // Vector2D
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7E8; // GameTime_t
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7EC; // GameTime_t
                constexpr std::ptrdiff_t m_flInitAtTime = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_flGlassThickness = 0x7F4; // float32
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7F8; // float32
                constexpr std::ptrdiff_t m_bBreakSilent = 0x7FC; // bool
                constexpr std::ptrdiff_t m_bBreakShardless = 0x7FD; // bool
                constexpr std::ptrdiff_t m_bBroken = 0x7FE; // bool
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7FF; // bool
                constexpr std::ptrdiff_t m_bGlassInFrame = 0x800; // bool
                constexpr std::ptrdiff_t m_bStartBroken = 0x801; // bool
                constexpr std::ptrdiff_t m_iInitialDamageType = 0x802; // uint8
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x810; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x820; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x828; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x840; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x858; // CUtlVector<Vector4D>
                constexpr std::ptrdiff_t m_OnBroken = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iSurfaceType = 0x888; // uint8
                constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x890; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CNavWalkable {
            }
            // Parent: CBaseAnimGraph
            // Field count: 27
            namespace CPlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x948; // bool
                constexpr std::ptrdiff_t m_flC4Blow = 0x94C; // GameTime_t
                constexpr std::ptrdiff_t m_nBombSite = 0x950; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x954; // int32
                constexpr std::ptrdiff_t m_bAbortDetonationBecauseWorldIsFrozen = 0x958; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x960; // CAttributeContainer
                constexpr std::ptrdiff_t m_OnBombDefused = 0xC58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xC70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xCA0; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0xCA8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xCC0; // int32
                constexpr std::ptrdiff_t m_bHasExploded = 0xCC4; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xCC5; // bool
                constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xCC6; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0xCC8; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0xCCC; // bool
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xCD4; // GameTime_t
                constexpr std::ptrdiff_t m_flDefuseLength = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xCE0; // GameTime_t
                constexpr std::ptrdiff_t m_hBombDefuser = 0xCE4; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_iProgressBarTime = 0xCE8; // int32
                constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xCEC; // bool
                constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xCED; // bool[4]
                constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xCF4; // GameTime_t
                constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xCFC; // QAngle
                constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xD08; // GameTime_t
            }
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: CBaseEntity
            // Field count: 14
            namespace CVoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4A8; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4AC; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4B0; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x4C4; // int32
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4C8; // bool
                constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4D0; // CountdownTimer
                constexpr std::ptrdiff_t m_executeCommandTimer = 0x4E8; // CountdownTimer
                constexpr std::ptrdiff_t m_resetVoteTimer = 0x500; // CountdownTimer
                constexpr std::ptrdiff_t m_nVotesCast = 0x518; // int32[64]
                constexpr std::ptrdiff_t m_playerHoldingVote = 0x618; // CPlayerSlot
                constexpr std::ptrdiff_t m_playerOverrideForVote = 0x61C; // CPlayerSlot
                constexpr std::ptrdiff_t m_nHighestCountIndex = 0x620; // int32
                constexpr std::ptrdiff_t m_potentialIssues = 0x628; // CUtlVector<CBaseIssue*>
                constexpr std::ptrdiff_t m_VoteOptions = 0x640; // CUtlVector<char*>
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
            // Parent: CPointEntity
            // Field count: 3
            namespace CPhysImpact {
                constexpr std::ptrdiff_t m_damage = 0x4A8; // float32
                constexpr std::ptrdiff_t m_distance = 0x4AC; // float32
                constexpr std::ptrdiff_t m_directionEntityName = 0x4B0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 86
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x30; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x248; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x260; // int32
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x264; // GameTick_t
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x268; // bool
                constexpr std::ptrdiff_t m_isSteadyState = 0x278; // CTypedBitVec<64>
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x280; // float32
                constexpr std::ptrdiff_t m_think = 0x288; // BASEPTR
                constexpr std::ptrdiff_t m_ResponseContexts = 0x290; // CUtlVector<ResponseContext_t>
                constexpr std::ptrdiff_t m_iszResponseContext = 0x2A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pfnTouch = 0x2B0; // ENTITYFUNCPTR
                constexpr std::ptrdiff_t m_pfnUse = 0x2B8; // USEPTR
                constexpr std::ptrdiff_t m_pfnBlocked = 0x2C0; // ENTITYFUNCPTR
                constexpr std::ptrdiff_t m_pfnMoveDone = 0x2C8; // BASEPTR
                constexpr std::ptrdiff_t m_iHealth = 0x2D0; // int32
                constexpr std::ptrdiff_t m_iMaxHealth = 0x2D4; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x2D8; // uint8
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2DC; // float32
                constexpr std::ptrdiff_t m_bTakesDamage = 0x2E0; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2E8; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x2F0; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_MoveCollide = 0x2F2; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x2F3; // MoveType_t
                constexpr std::ptrdiff_t m_nPreviouslySetMoveType = 0x2F4; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x2F5; // MoveType_t
                constexpr std::ptrdiff_t m_nWaterTouch = 0x2F6; // uint8
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x2F7; // uint8
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2F8; // bool
                constexpr std::ptrdiff_t m_target = 0x300; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hDamageFilter = 0x308; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x310; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x318; // float32
                constexpr std::ptrdiff_t m_nSubclassID = 0x31C; // CUtlStringToken
                constexpr std::ptrdiff_t m_flAnimTime = 0x328; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x32C; // float32
                constexpr std::ptrdiff_t m_flCreateTime = 0x330; // GameTime_t
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x334; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x335; // uint8
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x338; // VectorWS
                constexpr std::ptrdiff_t m_iTeamNum = 0x344; // uint8
                constexpr std::ptrdiff_t m_iGlobalname = 0x348; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iSentToClients = 0x350; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x354; // float32
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x358; // CUtlString
                constexpr std::ptrdiff_t m_spawnflags = 0x360; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x364; // GameTick_t
                constexpr std::ptrdiff_t m_nSimulationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_OnKilled = 0x370; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fFlags = 0x388; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x38C; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x398; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3C8; // Vector
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x3D4; // int32
                constexpr std::ptrdiff_t m_pCollision = 0x3D8; // CCollisionProperty*
                constexpr std::ptrdiff_t m_hEffectEntity = 0x3E0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x3E4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_fEffects = 0x3E8; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x3EC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x3F0; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x3F4; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x3F8; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x3FC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x400; // float32
                constexpr std::ptrdiff_t m_flWaterLevel = 0x404; // float32
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x408; // bool
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x409; // bool
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x40C; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x410; // bool
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x411; // bool
                constexpr std::ptrdiff_t m_nWaterType = 0x412; // uint8
                constexpr std::ptrdiff_t m_iEFlags = 0x414; // int32
                constexpr std::ptrdiff_t m_OnUser1 = 0x418; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser2 = 0x430; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser3 = 0x448; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser4 = 0x460; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x478; // int32
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x47C; // GameTime_t
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x480; // QAngle
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x48C; // bool
                constexpr std::ptrdiff_t m_bLagCompensate = 0x48D; // bool
                constexpr std::ptrdiff_t m_pBlocker = 0x490; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLocalTime = 0x494; // float32
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x498; // float32
                constexpr std::ptrdiff_t m_nBloodType = 0x49C; // BloodType
                constexpr std::ptrdiff_t m_pPulseGraphInstance = 0x4A0; // CPulseGraphInstance_ServerEntity*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: None
            // Field count: 2
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 4
            namespace CMarkupVolumeWithRef {
                constexpr std::ptrdiff_t m_bUseRef = 0x7B0; // bool
                constexpr std::ptrdiff_t m_vRefPosEntitySpace = 0x7B4; // Vector
                constexpr std::ptrdiff_t m_vRefPosWorldSpace = 0x7C0; // VectorWS
                constexpr std::ptrdiff_t m_flRefDot = 0x7CC; // float32
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // Parent: CFuncPlat
            // Field count: 2
            namespace CFuncPlatRot {
                constexpr std::ptrdiff_t m_end = 0x818; // QAngle
                constexpr std::ptrdiff_t m_start = 0x824; // QAngle
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CRagdollMagnet {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_radius = 0x4AC; // float32
                constexpr std::ptrdiff_t m_force = 0x4B0; // float32
                constexpr std::ptrdiff_t m_axis = 0x4B4; // VectorWS
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintTarget {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CSpriteAlias_env_glow {
            }
            // Parent: CInferno
            // Field count: 0
            namespace CFireCrackerBlast {
            }
            // Parent: CBaseModelEntity
            // Field count: 4
            namespace CSpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x768; // float32
                constexpr std::ptrdiff_t m_Radius = 0x76C; // float32
                constexpr std::ptrdiff_t m_vSpotlightDir = 0x770; // Vector
                constexpr std::ptrdiff_t m_vSpotlightOrg = 0x77C; // VectorWS
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            namespace CEnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x768; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x770; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x778; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x779; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x77D; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x784; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x788; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x78C; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x790; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x794; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x798; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x79C; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoSpawnGroupLandmark {
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CPointAngleSensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_nLookAtName = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4B8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hLookAtEntity = 0x4BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDuration = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flDotTolerance = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flFacingTime = 0x4C8; // GameTime_t
                constexpr std::ptrdiff_t m_bFired = 0x4CC; // bool
                constexpr std::ptrdiff_t m_OnFacingLookat = 0x4D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x4E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_TargetDir = 0x500; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_FacingPercentage = 0x528; // CEntityOutputTemplate<float32>
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CEnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4A8; // CEnvWindShared
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x5D8; // float32
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x5DC; // float32
                constexpr std::ptrdiff_t m_fTurbulence = 0x5E0; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x5E4; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x5E8; // float32
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x5EC; // int32
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x5F0; // int32
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x5F4; // int32
                constexpr std::ptrdiff_t m_bIsMaster = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x5F9; // bool
            }
            // Parent: None
            // Field count: 13
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
                constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
                constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
            }
            // Parent: CPhysConstraint
            // Field count: 49
            namespace CGenericConstraint {
                constexpr std::ptrdiff_t m_bPlaceAnchorsAtConstraintTransform = 0x510; // bool
                constexpr std::ptrdiff_t m_nLinearMotionX = 0x514; // JointMotion_t
                constexpr std::ptrdiff_t m_nLinearMotionY = 0x518; // JointMotion_t
                constexpr std::ptrdiff_t m_nLinearMotionZ = 0x51C; // JointMotion_t
                constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x520; // float32
                constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x524; // float32
                constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x528; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x52C; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x530; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x534; // float32
                constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x538; // float32
                constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x53C; // float32
                constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x540; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x544; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x548; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x54C; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x550; // GameTime_t
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x554; // GameTime_t
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x558; // GameTime_t
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x55C; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x560; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x564; // float32
                constexpr std::ptrdiff_t m_flNotifyForceX = 0x568; // float32
                constexpr std::ptrdiff_t m_flNotifyForceY = 0x56C; // float32
                constexpr std::ptrdiff_t m_flNotifyForceZ = 0x570; // float32
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x574; // float32
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x578; // float32
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x57C; // float32
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x580; // GameTime_t
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x584; // GameTime_t
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x588; // GameTime_t
                constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x58C; // bool
                constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x58D; // bool
                constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x58E; // bool
                constexpr std::ptrdiff_t m_nAngularMotionX = 0x590; // JointMotion_t
                constexpr std::ptrdiff_t m_nAngularMotionY = 0x594; // JointMotion_t
                constexpr std::ptrdiff_t m_nAngularMotionZ = 0x598; // JointMotion_t
                constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x59C; // float32
                constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x5A0; // float32
                constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5A4; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5A8; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5AC; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5B0; // float32
                constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x5B4; // float32
                constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x5B8; // float32
                constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x5BC; // float32
                constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x5C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x5D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x5F0; // CEntityIOOutput
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
            // Parent: CBeam
            // Field count: 5
            namespace CEnvLaser {
                constexpr std::ptrdiff_t m_iszLaserTarget = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pSprite = 0x810; // CHandle<CSprite>
                constexpr std::ptrdiff_t m_iszSpriteName = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_firePosition = 0x820; // Vector
                constexpr std::ptrdiff_t m_flStartFrame = 0x82C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CSoundOpvarSetEntity {
                constexpr std::ptrdiff_t m_iszStackName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nOpvarType = 0x4D8; // int32
                constexpr std::ptrdiff_t m_nOpvarIndex = 0x4DC; // int32
                constexpr std::ptrdiff_t m_flOpvarValue = 0x4E0; // float32
                constexpr std::ptrdiff_t m_OpvarValueString = 0x4E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bSetOnSpawn = 0x4F0; // bool
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CEnvBeverage {
                constexpr std::ptrdiff_t m_CanInDispenser = 0x4A8; // bool
                constexpr std::ptrdiff_t m_nBeverageType = 0x4AC; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 15
            namespace CPhysMotor {
                constexpr std::ptrdiff_t m_nameAttach = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAnchor = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hAttachedObject = 0x4B8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAnchorObject = 0x4BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_spinUp = 0x4C0; // float32
                constexpr std::ptrdiff_t m_spinDown = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flMotorFriction = 0x4C8; // float32
                constexpr std::ptrdiff_t m_additionalAcceleration = 0x4CC; // float32
                constexpr std::ptrdiff_t m_angularAcceleration = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flTorqueScale = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0x4DC; // float32
                constexpr std::ptrdiff_t m_pFixedWorldBody = 0x4E0; // IPhysicsBody*
                constexpr std::ptrdiff_t m_pMotorJoint = 0x4E8; // IPhysicsJoint*
                constexpr std::ptrdiff_t m_motor = 0x4F0; // CMotorController
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CLogicGameEvent {
                constexpr std::ptrdiff_t m_iszEventName = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropMultiplayer {
            }
            // Parent: CPointEntity
            // Field count: 11
            namespace CPhysExplosion {
                constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4A8; // bool
                constexpr std::ptrdiff_t m_flMagnitude = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x4B0; // float32
                constexpr std::ptrdiff_t m_radius = 0x4B4; // float32
                constexpr std::ptrdiff_t m_targetEntityName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flPushScale = 0x4C4; // float32
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x4C8; // bool
                constexpr std::ptrdiff_t m_bAffectInvulnerableEnts = 0x4C9; // bool
                constexpr std::ptrdiff_t m_bDisablePushClamp = 0x4CA; // bool
                constexpr std::ptrdiff_t m_OnPushedPlayer = 0x4D0; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 15
            namespace CSplineConstraint {
                constexpr std::ptrdiff_t m_vAnchorOffsetRestore = 0x558; // Vector
                constexpr std::ptrdiff_t m_hSplineEntity = 0x564; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_pSplineBody = 0x568; // IPhysicsBody*
                constexpr std::ptrdiff_t m_bEnableLateralConstraint = 0x570; // bool
                constexpr std::ptrdiff_t m_bEnableVerticalConstraint = 0x571; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x572; // bool
                constexpr std::ptrdiff_t m_bEnableLimit = 0x573; // bool
                constexpr std::ptrdiff_t m_bFireEventsOnPath = 0x574; // bool
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x578; // float32
                constexpr std::ptrdiff_t m_flLinarDampingRatio = 0x57C; // float32
                constexpr std::ptrdiff_t m_flJointFriction = 0x580; // float32
                constexpr std::ptrdiff_t m_flTransitionTime = 0x584; // float32
                constexpr std::ptrdiff_t m_vPreSolveAnchorPos = 0x598; // VectorWS
                constexpr std::ptrdiff_t m_StartTransitionTime = 0x5A4; // GameTime_t
                constexpr std::ptrdiff_t m_vTangentSpaceAnchorAtTransitionStart = 0x5A8; // Vector
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCompare {
                constexpr std::ptrdiff_t m_flInValue = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flCompareValue = 0x4AC; // float32
                constexpr std::ptrdiff_t m_OnLessThan = 0x4B0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnEqualTo = 0x4D0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnNotEqualTo = 0x4F0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x510; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGameModeRules_Noop {
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
            // Parent: CFuncTrackTrain
            // Field count: 1
            namespace CFuncTankTrain {
                constexpr std::ptrdiff_t m_OnDeath = 0x890; // CEntityIOOutput
            }
            // Parent: CBaseClientUIEntity
            // Field count: 24
            namespace CPointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x8C8; // bool
                constexpr std::ptrdiff_t m_bLit = 0x8C9; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x8CA; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x8CC; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x8D0; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x8D4; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x8D8; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x8DC; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x8E0; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8E4; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x8E8; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x8EC; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8F0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x8F8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x910; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x911; // bool
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x912; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x913; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x914; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x915; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x916; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x917; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x918; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x91C; // int32
            }
            // Parent: CSoundEventEntity
            // Field count: 1
            namespace CSoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x568; // float32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 6
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
                constexpr std::ptrdiff_t m_iMoneyEarnedForNextRound = 0x44; // int32
                constexpr std::ptrdiff_t m_iAccount = 0x48; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
            namespace CCSPlayer_AimPunchServices {
                constexpr std::ptrdiff_t m_predictableBaseTick = 0x48; // GameTick_t
                constexpr std::ptrdiff_t m_predictableBaseTickInterpAmount = 0x4C; // float32
                constexpr std::ptrdiff_t m_predictableBaseAngle = 0x50; // QAngle
                constexpr std::ptrdiff_t m_predictableBaseAngleVel = 0x5C; // QAngle
                constexpr std::ptrdiff_t m_unpredictableBaseTick = 0xA0; // GameTick_t
                constexpr std::ptrdiff_t m_unpredictableBaseAngle = 0xA4; // QAngle
            }
            // Parent: CRuleEntity
            // Field count: 0
            namespace CRuleBrushEntity {
            }
            // Parent: CBaseEntity
            // Field count: 24
            namespace CMapVetoPickController {
                constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4A8; // bool
                constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4A9; // bool
                constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4C8; // float64
                constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4D0; // bool
                constexpr std::ptrdiff_t m_nDraftType = 0x4D4; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4D8; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4DC; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5DC; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x5F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x6F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x7F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0x8F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0x9F8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xAF8; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xBF8; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xCF8; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xDF8; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xDFC; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE00; // int32
                constexpr std::ptrdiff_t m_OnMapVetoed = 0xE08; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnMapPicked = 0xE28; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnSidesPicked = 0xE48; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xE68; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnLevelTransition = 0xE88; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CFuncPropRespawnZone {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponP90 {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CNavSpaceInfo {
            }
            // Parent: CPhysConstraint
            // Field count: 10
            namespace CPhysSlideConstraint {
                constexpr std::ptrdiff_t m_axisEnd = 0x510; // VectorWS
                constexpr std::ptrdiff_t m_slideFriction = 0x51C; // float32
                constexpr std::ptrdiff_t m_systemLoadScale = 0x520; // float32
                constexpr std::ptrdiff_t m_initialOffset = 0x524; // float32
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x528; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x529; // bool
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x52C; // float32
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x530; // float32
                constexpr std::ptrdiff_t m_bUseEntityPivot = 0x534; // bool
                constexpr std::ptrdiff_t m_soundInfo = 0x538; // ConstraintSoundInfo
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x4B0; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x4B8; // CUtlString
            }
            // Parent: CSoundEventEntity
            // Field count: 0
            namespace CSoundEventEntityAlias_snd_event_point {
            }
            // Parent: None
            // Field count: 5
            namespace CChoreoComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_hOwner = 0x30; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x68; // SceneEventId_t
                constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0x6C; // bool
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x70; // GameTime_t
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
            // Parent: CPointEntity
            // Field count: 2
            namespace CPointGamestatsCounter {
                constexpr std::ptrdiff_t m_strStatisticName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0x4B0; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 8
            namespace CTextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x768; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x76C; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x770; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x778; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x780; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x78C; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x798; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x79C; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 23
            namespace CSprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x768; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x770; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x774; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x778; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x77C; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x780; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x790; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x794; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x798; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x79C; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x7A0; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x7AC; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x7BC; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x7C0; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x7C4; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x7C8; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x7CC; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x7D0; // int32
            }
            // Parent: CPathKeyFrame
            // Field count: 11
            namespace CBaseMoveBehavior {
                constexpr std::ptrdiff_t m_iPositionInterpolator = 0x4F0; // int32
                constexpr std::ptrdiff_t m_iRotationInterpolator = 0x4F4; // int32
                constexpr std::ptrdiff_t m_flAnimStartTime = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flAnimEndTime = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x500; // float32
                constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x504; // CHandle<CPathKeyFrame>
                constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x508; // CHandle<CPathKeyFrame>
                constexpr std::ptrdiff_t m_pPreKeyFrame = 0x50C; // CHandle<CPathKeyFrame>
                constexpr std::ptrdiff_t m_pPostKeyFrame = 0x510; // CHandle<CPathKeyFrame>
                constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x514; // float32
                constexpr std::ptrdiff_t m_iDirection = 0x518; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            namespace CDynamicLight {
                constexpr std::ptrdiff_t m_ActualFlags = 0x768; // uint8
                constexpr std::ptrdiff_t m_Flags = 0x769; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0x76A; // uint8
                constexpr std::ptrdiff_t m_On = 0x76B; // bool
                constexpr std::ptrdiff_t m_Radius = 0x76C; // float32
                constexpr std::ptrdiff_t m_Exponent = 0x770; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0x774; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0x778; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0x77C; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1050; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1054; // int32
            }
            // Parent: CEnvCubemap
            // Field count: 0
            namespace CEnvCubemapBox {
            }
            // Parent: CBaseDoor
            // Field count: 1
            namespace CRotDoor {
                constexpr std::ptrdiff_t m_bSolidBsp = 0x968; // bool
            }
            // Parent: CPathWithDynamicNodes
            // Field count: 3
            namespace CPathMover {
                constexpr std::ptrdiff_t m_vecMovers = 0x5F0; // CUtlVector<CHandle<CFuncMover>>
                constexpr std::ptrdiff_t m_hMoverSpawner = 0x608; // CHandle<CPathMoverEntitySpawner>
                constexpr std::ptrdiff_t m_iszMoverSpawnerName = 0x610; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncVPhysicsClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x768; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 8
            namespace CPhysFixed {
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x508; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x50C; // float32
                constexpr std::ptrdiff_t m_flAngularFrequency = 0x510; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x514; // float32
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x518; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x519; // bool
                constexpr std::ptrdiff_t m_sBoneName1 = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sBoneName2 = 0x528; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Field count: 2
            namespace CLogicNavigation {
                constexpr std::ptrdiff_t m_isOn = 0x4B0; // bool
                constexpr std::ptrdiff_t m_navProperty = 0x4B4; // navproperties_t
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x4B0; // CPathQueryComponent
                constexpr std::ptrdiff_t m_pathString = 0x5A0; // CUtlString
                constexpr std::ptrdiff_t m_bClosedLoop = 0x5A8; // bool
            }
            // Parent: CPathParticleRope
            // Field count: 0
            namespace CPathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPointPulseAPI {
            }
            // Parent: CBaseEntity
            // Field count: 9
            namespace CEnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4A8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x4AC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4B8; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4C4; // bool
                constexpr std::ptrdiff_t m_nShape = 0x4C8; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x4CC; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x4D0; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x4D4; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x4D8; // float32
            }
            // Parent: CFuncBrush
            // Field count: 4
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0x788; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectZapName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEffectSource = 0x7A0; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSMinimapBoundary {
            }
            // Parent: None
            // Field count: 2
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: None
            // Field count: 25
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
                constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
                constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
                constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
                constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_bPadding2 = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            namespace CSoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x568; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x574; // Vector
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CFlashbangProjectile {
                constexpr std::ptrdiff_t m_flTimeToDetonate = 0xA30; // float32
                constexpr std::ptrdiff_t m_numOpponentsHit = 0xA34; // uint8
                constexpr std::ptrdiff_t m_numTeammatesHit = 0xA35; // uint8
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerMultiple {
                constexpr std::ptrdiff_t m_OnTrigger = 0x8C8; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysBallSocket {
                constexpr std::ptrdiff_t m_flJointFriction = 0x508; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x50C; // bool
                constexpr std::ptrdiff_t m_flSwingLimit = 0x510; // float32
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x514; // bool
                constexpr std::ptrdiff_t m_flMinTwistAngle = 0x518; // float32
                constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x51C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CDebugHistory {
                constexpr std::ptrdiff_t m_nNpcEvents = 0x3E84E8; // int32
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CSoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8; // bool
                constexpr std::ptrdiff_t m_hSource = 0x4AC; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vLastPosition = 0x520; // Vector
                constexpr std::ptrdiff_t m_flRefreshTime = 0x52C; // float32
                constexpr std::ptrdiff_t m_iszStackName = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x540; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x548; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x54C; // bool
                constexpr std::ptrdiff_t m_bFastRefresh = 0x54D; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            namespace CExplosionTypeData {
                constexpr std::ptrdiff_t m_SoundName = 0x0; // CSoundEventName
                constexpr std::ptrdiff_t m_ParticleEffect = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_bIsIncindiary = 0xF0; // bool
                constexpr std::ptrdiff_t m_bHasForces = 0xF1; // bool
                constexpr std::ptrdiff_t m_DecalType = 0xF8; // CGlobalSymbol
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CPathKeyFrame {
                constexpr std::ptrdiff_t m_Origin = 0x4A8; // Vector
                constexpr std::ptrdiff_t m_Angles = 0x4B4; // QAngle
                constexpr std::ptrdiff_t m_qAngle = 0x4C0; // Quaternion
                constexpr std::ptrdiff_t m_iNextKey = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flNextTime = 0x4D8; // float32
                constexpr std::ptrdiff_t m_pNextKey = 0x4DC; // CHandle<CPathKeyFrame>
                constexpr std::ptrdiff_t m_pPrevKey = 0x4E0; // CHandle<CPathKeyFrame>
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x4E4; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 1
            namespace CWeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1050; // bool
            }
            // Parent: CTriggerPush
            // Field count: 1
            namespace CScriptTriggerPush {
                constexpr std::ptrdiff_t m_vExtent = 0x8F8; // Vector
            }
            // Parent: CModelPointEntity
            // Field count: 3
            namespace CRevertSaved {
                constexpr std::ptrdiff_t m_loadTime = 0x768; // float32
                constexpr std::ptrdiff_t m_Duration = 0x76C; // float32
                constexpr std::ptrdiff_t m_HoldTime = 0x770; // float32
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerBombReset {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerHurt {
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x8C8; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x8CC; // float32
                constexpr std::ptrdiff_t m_flDamageCap = 0x8D0; // float32
                constexpr std::ptrdiff_t m_flLastDmgTime = 0x8D4; // GameTime_t
                constexpr std::ptrdiff_t m_flForgivenessDelay = 0x8D8; // float32
                constexpr std::ptrdiff_t m_bitsDamageInflict = 0x8DC; // DamageTypes_t
                constexpr std::ptrdiff_t m_damageModel = 0x8E0; // int32
                constexpr std::ptrdiff_t m_bNoDmgForce = 0x8E4; // bool
                constexpr std::ptrdiff_t m_vDamageForce = 0x8E8; // Vector
                constexpr std::ptrdiff_t m_thinkAlways = 0x8F4; // bool
                constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x8F8; // float32
                constexpr std::ptrdiff_t m_OnHurt = 0x900; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHurtPlayer = 0x918; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hurtEntities = 0x930; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CPlayer_WeaponServices
            // Field count: 13
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_hSavedWeapon = 0xC4; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_nTimeToMelee = 0xC8; // int32
                constexpr std::ptrdiff_t m_nTimeToSecondary = 0xCC; // int32
                constexpr std::ptrdiff_t m_nTimeToPrimary = 0xD0; // int32
                constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xD4; // int32
                constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xD8; // bool
                constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xD9; // bool
                constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xDA; // bool
                constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xDB; // bool
                constexpr std::ptrdiff_t m_bIsPickingUpGroundWeapon = 0xDC; // bool
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x1860; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x1878; // bool
            }
            // Parent: None
            // Field count: 6
            namespace CRetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0x138; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0x13C; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0x13D; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x144; // int32
                constexpr std::ptrdiff_t m_hBombPlanter = 0x148; // CHandle<CCSPlayerPawn>
            }
            // Parent: CEnvSoundscapeTriggerable
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetA {
            }
            // Parent: None
            // Field count: 0
            namespace CTeamplayRules {
            }
            // Parent: CTriggerHurt
            // Field count: 1
            namespace CScriptTriggerHurt {
                constexpr std::ptrdiff_t m_vExtent = 0x950; // Vector
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP9 {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerDetectExplosion {
                constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x8F0; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 12
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xA58; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xA5C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0xA60; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xA64; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xA70; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xA80; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0xA98; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0xA9C; // int32
                constexpr std::ptrdiff_t m_flLastBounce = 0xAA0; // GameTime_t
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xAA4; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2D28; // bool
                constexpr std::ptrdiff_t m_bDidGroundScorch = 0x2D29; // bool
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CBlood {
                constexpr std::ptrdiff_t m_vecSprayAngles = 0x4A8; // QAngle
                constexpr std::ptrdiff_t m_vecSprayDir = 0x4B4; // Vector
                constexpr std::ptrdiff_t m_flAmount = 0x4C0; // float32
                constexpr std::ptrdiff_t m_Color = 0x4C4; // BloodType
            }
            // Parent: CTeam
            // Field count: 14
            namespace CCSTeam {
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x560; // int32
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x564; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x568; // bool
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x569; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x76C; // int32
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x770; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x774; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x778; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x77C; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x800; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x804; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x80C; // char[8]
                constexpr std::ptrdiff_t m_flNextResourceTime = 0x814; // float32
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x818; // int32
            }
            // Parent: CRuleEntity
            // Field count: 1
            namespace CRulePointEntity {
                constexpr std::ptrdiff_t m_Score = 0x770; // int32
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
            // Parent: CFuncMoveLinear
            // Field count: 0
            namespace CFuncMoveLinearAlias_momentary_door {
            }
            // Parent: CBaseModelEntity
            // Field count: 13
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_graphControllerManager = 0x768; // CAnimGraphControllerManager
                constexpr std::ptrdiff_t m_pMainGraphController = 0x818; // CAnimGraphControllerBase*
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x820; // bool
                constexpr std::ptrdiff_t m_pChoreoServices = 0x828; // IChoreoServices*
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x830; // bool
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x831; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x834; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0x840; // int32
                constexpr std::ptrdiff_t m_pRagdollControl = 0x850; // IPhysicsRagdollControl*
                constexpr std::ptrdiff_t m_RagdollPose = 0x858; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0x880; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x881; // bool
                constexpr std::ptrdiff_t m_xParentedRagdollRootInEntitySpace = 0x890; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 24
            namespace CEnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4B0; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4B4; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4B8; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x4C8; // float32
                constexpr std::ptrdiff_t m_bActive = 0x4CC; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4CD; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4D0; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4D4; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x4D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nHeightFogType = 0x4E8; // int32
                constexpr std::ptrdiff_t m_nFogHeightBlendMode = 0x4EC; // int32
                constexpr std::ptrdiff_t m_nFogHeightCoordinateSpace = 0x4F0; // int32
                constexpr std::ptrdiff_t m_nDistanceFogType = 0x4F4; // int32
                constexpr std::ptrdiff_t m_DistanceFogCurveString = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_HeightFogCurveString = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x5A0; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x5A1; // bool
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
            // Parent: CBaseToggle
            // Field count: 28
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7F8; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x804; // Vector
                constexpr std::ptrdiff_t m_ls = 0x810; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0x830; // bool
                constexpr std::ptrdiff_t m_bDoorGroup = 0x831; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x832; // bool
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x833; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x834; // bool
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x838; // FuncDoorSpawnPos_t
                constexpr std::ptrdiff_t m_flBlockDamage = 0x83C; // float32
                constexpr std::ptrdiff_t m_NoiseMoving = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x858; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ChainTarget = 0x860; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x868; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x880; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x898; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x8B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0x8F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0x910; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0x928; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0x940; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x960; // bool
                constexpr std::ptrdiff_t m_isChaining = 0x961; // bool
                constexpr std::ptrdiff_t m_bIsUsable = 0x962; // bool
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CServerOnlyPointEntity {
            }
            // Parent: CRulePointEntity
            // Field count: 4
            namespace CGameMoney {
                constexpr std::ptrdiff_t m_OnMoneySpent = 0x778; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMoneySpentFail = 0x790; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nMoney = 0x7A8; // int32
                constexpr std::ptrdiff_t m_strAwardText = 0x7B0; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CEnvHudHint {
                constexpr std::ptrdiff_t m_iszMessage = 0x4A8; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CNullEntity {
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CLogicalEntity {
            }
            // Parent: CItem
            // Field count: 2
            namespace CItemDefuser {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x9E0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x9F8; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CItemGenericTriggerHelper {
                constexpr std::ptrdiff_t m_hParentItem = 0x768; // CHandle<CItemGeneric>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
                constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA8; // bool
            }
            // Parent: CRagdollProp
            // Field count: 6
            namespace CRagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xAB0; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xAB4; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xAB8; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xAC4; // Vector
                constexpr std::ptrdiff_t m_bShouldDetach = 0xAD0; // bool
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xAE0; // bool
            }
            // Parent: CItem
            // Field count: 2
            namespace CItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x9E0; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x9E4; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBasePlatTrain
            // Field count: 1
            namespace CFuncPlat {
                constexpr std::ptrdiff_t m_sNoise = 0x810; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Field count: 77
            namespace CBarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x768; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x76C; // int32
                constexpr std::ptrdiff_t m_Color = 0x770; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0x774; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0x778; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x77C; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0x780; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x784; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x788; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x78C; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x790; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x794; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x798; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0x7A0; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x7A8; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x7B0; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x7C8; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x7E0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x7F8; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x878; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x880; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x884; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x888; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x88C; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x890; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x894; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x8A0; // float32
                constexpr std::ptrdiff_t m_vShear = 0x8A4; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x8B0; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x8B4; // Vector
                constexpr std::ptrdiff_t m_flBakeSpecularToCubemapsScale = 0x8C0; // float32
                constexpr std::ptrdiff_t m_nCastShadows = 0x8C4; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x8C8; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x8CC; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x8D0; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x8D1; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x8D4; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x8D8; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x8DC; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x8E0; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8EC; // float32
                constexpr std::ptrdiff_t m_nFog = 0x8F0; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x8F4; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x8F8; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x8FC; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x900; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x904; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x908; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x90C; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x910; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x914; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x920; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x92C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x938; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x944; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x950; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x954; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x960; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x96C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x978; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x984; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x990; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x99C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x9A8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x9B4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x9C0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x9CC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x9D8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x9E4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x9F0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x9FC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xA08; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xA14; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xA20; // Vector
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0xA2C; // bool
                constexpr std::ptrdiff_t m_bTransmitAlways = 0xA2D; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0xA30; // CNetworkUtlVectorBase<uint16>
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInstructorEventEntity {
                constexpr std::ptrdiff_t m_iszName = 0x4A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetPlayer = 0x4B8; // CHandle<CBasePlayerPawn>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponTec9 {
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPathCorner {
                constexpr std::ptrdiff_t m_flWait = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x4AC; // float32
                constexpr std::ptrdiff_t m_OnPass = 0x4B0; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerSndSosOpvar {
                constexpr std::ptrdiff_t m_hTouchingPlayers = 0x8C8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_flPosition = 0x8E0; // Vector
                constexpr std::ptrdiff_t m_flCenterSize = 0x8EC; // float32
                constexpr std::ptrdiff_t m_flMinVal = 0x8F0; // float32
                constexpr std::ptrdiff_t m_flMaxVal = 0x8F4; // float32
                constexpr std::ptrdiff_t m_opvarName = 0x8F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_stackName = 0x900; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_operatorName = 0x908; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bVolIs2D = 0x910; // bool
                constexpr std::ptrdiff_t m_opvarNameChar = 0x911; // char[256]
                constexpr std::ptrdiff_t m_stackNameChar = 0xA11; // char[256]
                constexpr std::ptrdiff_t m_operatorNameChar = 0xB11; // char[256]
                constexpr std::ptrdiff_t m_VecNormPos = 0xC14; // Vector
                constexpr std::ptrdiff_t m_flNormCenterSize = 0xC20; // float32
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
            // Parent: CBaseAnimGraph
            // Field count: 30
            namespace CPointCommentaryNode {
                constexpr std::ptrdiff_t m_iszPreCommands = 0x940; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostCommands = 0x948; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x950; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszViewTarget = 0x958; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewTarget = 0x960; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0x964; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszViewPosition = 0x968; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewPosition = 0x970; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewPositionMover = 0x974; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventMovement = 0x978; // bool
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0x979; // bool
                constexpr std::ptrdiff_t m_bUnstoppable = 0x97A; // bool
                constexpr std::ptrdiff_t m_flFinishedTime = 0x97C; // GameTime_t
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0x980; // Vector
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0x98C; // QAngle
                constexpr std::ptrdiff_t m_vecFinishAngles = 0x998; // QAngle
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0x9A4; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x9A5; // bool
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0x9A8; // VectorWS
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0x9B4; // GameTime_t
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0x9B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0x9D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActive = 0x9E8; // bool
                constexpr std::ptrdiff_t m_flStartTime = 0x9EC; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x9F0; // float32
                constexpr std::ptrdiff_t m_iszTitle = 0x9F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xA00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xA08; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xA0C; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xA10; // bool
            }
            // Parent: CRotButton
            // Field count: 14
            namespace CMomentaryRotButton {
                constexpr std::ptrdiff_t m_Position = 0x8E8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnUnpressed = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x920; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x938; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedPosition = 0x950; // CEntityIOOutput
                constexpr std::ptrdiff_t m_lastUsed = 0x968; // int32
                constexpr std::ptrdiff_t m_start = 0x96C; // QAngle
                constexpr std::ptrdiff_t m_end = 0x978; // QAngle
                constexpr std::ptrdiff_t m_IdealYaw = 0x984; // float32
                constexpr std::ptrdiff_t m_sNoise = 0x988; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUpdateTarget = 0x990; // bool
                constexpr std::ptrdiff_t m_direction = 0x994; // int32
                constexpr std::ptrdiff_t m_returnSpeed = 0x998; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0x99C; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CSceneListManager {
                constexpr std::ptrdiff_t m_hListManagers = 0x4A8; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszScenes = 0x4C0; // CUtlSymbolLarge[16]
                constexpr std::ptrdiff_t m_hScenes = 0x540; // CHandle<CBaseEntity>[16]
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CEnvTilt {
                constexpr std::ptrdiff_t m_Duration = 0x4A8; // float32
                constexpr std::ptrdiff_t m_Radius = 0x4AC; // float32
                constexpr std::ptrdiff_t m_TiltTime = 0x4B0; // float32
                constexpr std::ptrdiff_t m_stopTime = 0x4B4; // GameTime_t
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: CBaseModelEntity
            // Field count: 91
            namespace CFuncMover {
                constexpr std::ptrdiff_t m_iszPathName = 0x768; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPathMover = 0x770; // CHandle<CPathMover>
                constexpr std::ptrdiff_t m_hPrevPathMover = 0x774; // CHandle<CPathMover>
                constexpr std::ptrdiff_t m_iszPathNodeStart = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPathNodeEnd = 0x780; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bIgnoreEndNode = 0x788; // bool
                constexpr std::ptrdiff_t m_eMoveType = 0x78C; // CFuncMover::Move_t
                constexpr std::ptrdiff_t m_bIsReversing = 0x790; // bool
                constexpr std::ptrdiff_t m_flStartSpeed = 0x794; // float32
                constexpr std::ptrdiff_t m_flPathLocation = 0x798; // float32
                constexpr std::ptrdiff_t m_flT = 0x79C; // float32
                constexpr std::ptrdiff_t m_nCurrentNodeIndex = 0x7A0; // int32
                constexpr std::ptrdiff_t m_nPreviousNodeIndex = 0x7A4; // int32
                constexpr std::ptrdiff_t m_eSolidType = 0x7A8; // SolidType_t
                constexpr std::ptrdiff_t m_bIsMoving = 0x7A9; // bool
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flDistanceToReachMaxSpeed = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flComputedDistanceToReachMaxSpeed = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flComputedDistanceToReachZeroSpeed = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flStartCurveScale = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flStopCurveScale = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flDistanceToReachZeroSpeed = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flTimeMovementStart = 0x7CC; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeMovementStop = 0x7D0; // GameTime_t
                constexpr std::ptrdiff_t m_hStopAtNode = 0x7D4; // CHandle<CMoverPathNode>
                constexpr std::ptrdiff_t m_flPathLocationToBeginStop = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flPathLocationStart = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flBeginStopT = 0x7E0; // float32
                constexpr std::ptrdiff_t m_iszStartForwardSound = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLoopForwardSound = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStopForwardSound = 0x7F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStartReverseSound = 0x800; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLoopReverseSound = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStopReverseSound = 0x810; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszArriveAtDestinationSound = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnMovementEnd = 0x838; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bStartAtClosestPoint = 0x850; // bool
                constexpr std::ptrdiff_t m_bStartAtEnd = 0x851; // bool
                constexpr std::ptrdiff_t m_bStartFollowingClosestMover = 0x852; // bool
                constexpr std::ptrdiff_t m_eOrientationUpdate = 0x854; // CFuncMover::OrientationUpdate_t
                constexpr std::ptrdiff_t m_flTimeStartOrientationChange = 0x858; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeToBlendToNewOrientation = 0x85C; // float32
                constexpr std::ptrdiff_t m_flDurationBlendToNewOrientationRan = 0x860; // float32
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x864; // bool
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x865; // bool
                constexpr std::ptrdiff_t m_OnNodePassed = 0x868; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_iszOrientationMatchEntityName = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOrientationMatchEntity = 0x890; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flTimeToTraverseToNextNode = 0x894; // float32
                constexpr std::ptrdiff_t m_vLerpToNewPosStartInPathEntitySpace = 0x898; // Vector
                constexpr std::ptrdiff_t m_vLerpToNewPosEndInPathEntitySpace = 0x8A4; // Vector
                constexpr std::ptrdiff_t m_flLerpToPositionT = 0x8B0; // float32
                constexpr std::ptrdiff_t m_flLerpToPositionDeltaT = 0x8B4; // float32
                constexpr std::ptrdiff_t m_OnLerpToPositionComplete = 0x8B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bIsPaused = 0x8D0; // bool
                constexpr std::ptrdiff_t m_eTransitionedToPathNodeAction = 0x8D4; // CFuncMover::TransitionToPathNodeAction_t
                constexpr std::ptrdiff_t m_qTransitionSourceOrientation = 0x8E0; // Quaternion
                constexpr std::ptrdiff_t m_nDelayedTeleportToNode = 0x8F0; // int32
                constexpr std::ptrdiff_t m_bIsImGuiLogging = 0x8F4; // bool
                constexpr std::ptrdiff_t m_hFollowEntity = 0x8F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFollowDistance = 0x8FC; // float32
                constexpr std::ptrdiff_t m_flFollowMinimumSpeed = 0x900; // float32
                constexpr std::ptrdiff_t m_flCurFollowEntityT = 0x904; // float32
                constexpr std::ptrdiff_t m_flCurFollowSpeed = 0x908; // float32
                constexpr std::ptrdiff_t m_strOrientationFaceEntityName = 0x910; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOrientationFaceEntity = 0x918; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnStart = 0x920; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartForward = 0x938; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartReverse = 0x950; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStop = 0x968; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStopped = 0x980; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bNextNodeReturnsCurrent = 0x998; // bool
                constexpr std::ptrdiff_t m_bStartedMoving = 0x999; // bool
                constexpr std::ptrdiff_t m_eFollowEntityDirection = 0x9B8; // CFuncMover::FollowEntityDirection_t
                constexpr std::ptrdiff_t m_hFollowMover = 0x9BC; // CHandle<CFuncMover>
                constexpr std::ptrdiff_t m_iszFollowMoverEntityName = 0x9C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flFollowMoverDistance = 0x9C8; // float32
                constexpr std::ptrdiff_t m_flFollowMoverRatio = 0x9CC; // float32
                constexpr std::ptrdiff_t m_flFollowMoverCalculatedDistance = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flFollowMoverSpringStrength = 0x9D4; // float32
                constexpr std::ptrdiff_t m_nFollowMoverConstraintPriority = 0x9D8; // int32
                constexpr std::ptrdiff_t m_bFollowConstraintsInitialized = 0x9DC; // bool
                constexpr std::ptrdiff_t m_eFollowConstraint = 0x9E0; // CFuncMover::FollowConstraint_t
                constexpr std::ptrdiff_t m_flFollowMoverSpeed = 0x9E4; // float32
                constexpr std::ptrdiff_t m_flFollowMoverVelocity = 0x9E8; // float32
                constexpr std::ptrdiff_t m_nTickMovementRan = 0x9EC; // GameTick_t
                constexpr std::ptrdiff_t m_movementSummary = 0x9F0; // FuncMoverMovementSummary_t
                constexpr std::ptrdiff_t m_bStopFromBeginStopTarget = 0xA10; // bool
                constexpr std::ptrdiff_t m_bQueueStop = 0xA11; // bool
                constexpr std::ptrdiff_t m_bQueueStopMoving = 0xA12; // bool
            }
            // Parent: CBreakableProp
            // Field count: 42
            namespace CPhysicsProp {
                constexpr std::ptrdiff_t m_MotionEnabled = 0xAE0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0xAF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwake = 0xB10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAsleep = 0xB28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xB40; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xB58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xB70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xB88; // bool
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xB89; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xB8A; // bool
                constexpr std::ptrdiff_t m_massScale = 0xB8C; // float32
                constexpr std::ptrdiff_t m_buoyancyScale = 0xB90; // float32
                constexpr std::ptrdiff_t m_damageType = 0xB94; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xB98; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xB9C; // float32
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xBA0; // bool
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xBA1; // bool
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xBA2; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xBA3; // bool
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xBA4; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xBA5; // bool
                constexpr std::ptrdiff_t m_flLastBurn = 0xBA8; // GameTime_t
                constexpr std::ptrdiff_t m_nDynamicContinuousContactBehavior = 0xBAC; // DynamicContinuousContactBehavior_t
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xBB0; // GameTime_t
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xBB4; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xBB8; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xBBC; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xBC0; // Color
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xBC4; // bool
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xBC5; // bool
                constexpr std::ptrdiff_t m_nNavObstacleType = 0xBC8; // INavObstacle::NavObstacleType_t
                constexpr std::ptrdiff_t m_bUpdateNavWhenMoving = 0xBCC; // bool
                constexpr std::ptrdiff_t m_bForceNavObstacleCut = 0xBCD; // bool
                constexpr std::ptrdiff_t m_bAllowObstacleConvexHullMerging = 0xBCE; // bool
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xBCF; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xBD0; // bool
                constexpr std::ptrdiff_t m_CrateType = 0xBD4; // CPhysicsProp::CrateType_t
                constexpr std::ptrdiff_t m_strItemClass = 0xBD8; // CUtlSymbolLarge[4]
                constexpr std::ptrdiff_t m_nItemCount = 0xBF8; // int32[4]
                constexpr std::ptrdiff_t m_bRemovableForAmmoBalancing = 0xC08; // bool
                constexpr std::ptrdiff_t m_bAwake = 0xC09; // bool
                constexpr std::ptrdiff_t m_bAttachedToReferenceFrame = 0xC0A; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CFuncNavObstruction {
                constexpr std::ptrdiff_t m_bDisabled = 0x780; // bool
                constexpr std::ptrdiff_t m_bUseAsyncObstacleUpdate = 0x781; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 12
            namespace CPhysWheelConstraint {
                constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x508; // float32
                constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x50C; // float32
                constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x510; // float32
                constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x514; // bool
                constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x518; // float32
                constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x51C; // float32
                constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x520; // bool
                constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x524; // float32
                constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x528; // float32
                constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x52C; // float32
                constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x530; // float32
                constexpr std::ptrdiff_t m_hSteeringMimicsEntity = 0x534; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x4A8; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x4AC; // CHandle<CSkyCamera>
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CPointPulse {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CMolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0xA30; // bool
                constexpr std::ptrdiff_t m_bDetonated = 0xA48; // bool
                constexpr std::ptrdiff_t m_stillTimer = 0xA50; // IntervalTimer
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x4E0; // CUtlSymbolLarge
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerToggleSave {
            }
            // Parent: CPathSimple
            // Field count: 2
            namespace CPathWithDynamicNodes {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x5B0; // CNetworkUtlVectorBase<CHandle<CPathNode>>
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x5D0; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 17
            namespace CColorCorrection {
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4B4; // float32
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4B8; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4BC; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxWeight = 0x4C0; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4C4; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x4C5; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x4C6; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x4C7; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x4C8; // bool
                constexpr std::ptrdiff_t m_MinFalloff = 0x4CC; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x4D4; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x4D8; // char[512]
                constexpr std::ptrdiff_t m_lookupFilename = 0x6D8; // CUtlSymbolLarge
            }
            // Parent: CPropDoorRotating
            // Field count: 4
            namespace CPropDoorRotatingBreakable {
                constexpr std::ptrdiff_t m_bBreakable = 0xE20; // bool
                constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xE21; // bool
                constexpr std::ptrdiff_t m_currentDamageState = 0xE24; // int32
                constexpr std::ptrdiff_t m_damageStates = 0xE28; // CUtlVector<CUtlSymbolLarge>
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightDirectionalEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 14
            namespace CBaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0x768; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0x770; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0x780; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_CustomOutput0 = 0x788; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput1 = 0x7A8; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput2 = 0x7C8; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput3 = 0x7E8; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput4 = 0x808; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput5 = 0x828; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput6 = 0x848; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput7 = 0x868; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput8 = 0x888; // CEntityOutputTemplate<CUtlString>
                constexpr std::ptrdiff_t m_CustomOutput9 = 0x8A8; // CEntityOutputTemplate<CUtlString>
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            namespace CBreakable {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x770; // CPropDataComponent
                constexpr std::ptrdiff_t m_Material = 0x7B0; // Materials
                constexpr std::ptrdiff_t m_hBreaker = 0x7B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Explosion = 0x7B8; // Explosions
                constexpr std::ptrdiff_t m_iszSpawnObject = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPressureDelay = 0x7C8; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x7CC; // int32
                constexpr std::ptrdiff_t m_iszPropData = 0x7D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x7D8; // float32
                constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x7DC; // EOverrideBlockLOS_t
                constexpr std::ptrdiff_t m_OnStartDeath = 0x7E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x7F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x810; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x830; // PerformanceMode_t
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x834; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x838; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoLandmark {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x4A8; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x4B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x4C8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlaySceneBase__CursorState_t {
                constexpr std::ptrdiff_t m_sceneInstance = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_mainActor = 0x4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_cursorIDToEventID = 0x8; // CUtlHashtable<PulseCursorID_t,int32>
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
            // Parent: CPointEntity
            // Field count: 15
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x4A8; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x4AC; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x4B0; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4B4; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4B5; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4B8; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x4BC; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x4C1; // bool
                constexpr std::ptrdiff_t m_bGPUCullSkybox = 0x4C2; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x4D4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 16
            namespace CGradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x4B4; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4B8; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4D0; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x4D4; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x4DC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4E0; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4E1; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4E2; // bool
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 9
            namespace CSoundOpvarSetAABBEntity {
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x640; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x64C; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x658; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x664; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x670; // int32
                constexpr std::ptrdiff_t m_vInnerMins = 0x674; // Vector
                constexpr std::ptrdiff_t m_vInnerMaxs = 0x680; // Vector
                constexpr std::ptrdiff_t m_vOuterMins = 0x68C; // Vector
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x698; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlaySequence {
                constexpr std::ptrdiff_t m_ParamSequenceName = 0xF0; // CUtlString
            }
            // Parent: CPointClientUIWorldPanel
            // Field count: 1
            namespace CPointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x920; // char[512]
            }
            // Parent: None
            // Field count: 12
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringTableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pAttributes = 0x48; // CEntityAttributeTable*
                constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 41
            namespace CFuncRotator {
                constexpr std::ptrdiff_t m_hRotatorTarget = 0x768; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bIsRotating = 0x76C; // bool
                constexpr std::ptrdiff_t m_bIsReversing = 0x76D; // bool
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x770; // float32
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x774; // float32
                constexpr std::ptrdiff_t m_flDistanceAlongArcTraveled = 0x778; // float32
                constexpr std::ptrdiff_t m_flTimeToWaitOscillate = 0x77C; // float32
                constexpr std::ptrdiff_t m_flTimeRotationStart = 0x780; // GameTime_t
                constexpr std::ptrdiff_t m_qLSPrevChange = 0x790; // Quaternion
                constexpr std::ptrdiff_t m_qWSPrev = 0x7A0; // Quaternion
                constexpr std::ptrdiff_t m_qWSInit = 0x7B0; // Quaternion
                constexpr std::ptrdiff_t m_qLSInit = 0x7C0; // Quaternion
                constexpr std::ptrdiff_t m_qLSOrientation = 0x7D0; // Quaternion
                constexpr std::ptrdiff_t m_OnRotationStarted = 0x7E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRotationCompleted = 0x7F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillate = 0x810; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateStartArrive = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateStartDepart = 0x840; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateEndArrive = 0x858; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateEndDepart = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bOscillateDepart = 0x888; // bool
                constexpr std::ptrdiff_t m_nOscillateCount = 0x88C; // int32
                constexpr std::ptrdiff_t m_eRotateType = 0x890; // CFuncRotator::Rotate_t
                constexpr std::ptrdiff_t m_ePrevRotateType = 0x894; // CFuncRotator::Rotate_t
                constexpr std::ptrdiff_t m_bHasTargetOverride = 0x898; // bool
                constexpr std::ptrdiff_t m_qOrientationOverride = 0x8A0; // Quaternion
                constexpr std::ptrdiff_t m_eSpaceOverride = 0x8B0; // RotatorTargetSpace_t
                constexpr std::ptrdiff_t m_qAngularVelocity = 0x8B4; // QAngle
                constexpr std::ptrdiff_t m_vLookAtForcedUp = 0x8C0; // Vector
                constexpr std::ptrdiff_t m_strRotatorTarget = 0x8D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bRecordHistory = 0x8D8; // bool
                constexpr std::ptrdiff_t m_vecRotatorHistory = 0x8E0; // CUtlVector<RotatorHistoryEntry_t>
                constexpr std::ptrdiff_t m_bReturningToPreviousOrientation = 0x8F8; // bool
                constexpr std::ptrdiff_t m_vecRotatorQueue = 0x900; // CUtlVector<RotatorQueueEntry_t>
                constexpr std::ptrdiff_t m_vecRotatorQueueHistory = 0x918; // CUtlVector<RotatorHistoryEntry_t>
                constexpr std::ptrdiff_t m_eSolidType = 0x930; // SolidType_t
                constexpr std::ptrdiff_t m_hSpeedFromMover = 0x934; // CHandle<CFuncMover>
                constexpr std::ptrdiff_t m_iszSpeedFromMover = 0x938; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flSpeedScale = 0x940; // float32
                constexpr std::ptrdiff_t m_flMinYawRotation = 0x944; // float32
                constexpr std::ptrdiff_t m_flMaxYawRotation = 0x948; // float32
            }
            // Parent: CBaseEntity
            // Field count: 14
            namespace CSoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4A8; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4A9; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x4AA; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x4AB; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4AC; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4B0; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x4C8; // CEntityOutputTemplate<SndOpEventGuid_t>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x510; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x540; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x55C; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x560; // int32
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerCounterterrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CEnvFade {
                constexpr std::ptrdiff_t m_fadeColor = 0x4A8; // Color
                constexpr std::ptrdiff_t m_Duration = 0x4AC; // float32
                constexpr std::ptrdiff_t m_HoldDuration = 0x4B0; // float32
                constexpr std::ptrdiff_t m_OnBeginFade = 0x4B8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sModelNameAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x1E8; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x1F8; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x208; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x218; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x228; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x23C; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x240; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x244; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x248; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x24C; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x250; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x254; // float32
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            namespace CTriggerImpact {
                constexpr std::ptrdiff_t m_flMagnitude = 0x8E0; // float32
                constexpr std::ptrdiff_t m_flNoise = 0x8E4; // float32
                constexpr std::ptrdiff_t m_flViewkick = 0x8E8; // float32
                constexpr std::ptrdiff_t m_pOutputForce = 0x8F0; // CEntityOutputTemplate<Vector>
            }
            // Parent: None
            // Field count: 3
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTestPulseIO__EntityHandleIntArgs_t {
                constexpr std::ptrdiff_t handleA = 0x0; // CEntityHandle
                constexpr std::ptrdiff_t valueB = 0x4; // int32
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
            // Parent: CDynamicProp
            // Field count: 38
            namespace CBasePropDoor {
                constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xB90; // float32
                constexpr std::ptrdiff_t m_hDoorList = 0xB98; // CUtlVector<CHandle<CBasePropDoor>>
                constexpr std::ptrdiff_t m_nHardwareType = 0xBB0; // int32
                constexpr std::ptrdiff_t m_bNeedsHardware = 0xBB4; // bool
                constexpr std::ptrdiff_t m_eDoorState = 0xBB8; // DoorState_t
                constexpr std::ptrdiff_t m_bLocked = 0xBBC; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0xBBD; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0xBC0; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0xBCC; // QAngle
                constexpr std::ptrdiff_t m_hBlocker = 0xBD8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bFirstBlocked = 0xBDC; // bool
                constexpr std::ptrdiff_t m_ls = 0xBE0; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0xC00; // bool
                constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xC04; // VectorWS
                constexpr std::ptrdiff_t m_hActivator = 0xC10; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_SoundMoving = 0xC28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundOpen = 0xC30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundClose = 0xC38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLock = 0xC40; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundUnlock = 0xC48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLatch = 0xC50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundPound = 0xC58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundJiggle = 0xC60; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLockedAnim = 0xC68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_numCloseAttempts = 0xC70; // int32
                constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xC74; // CUtlStringToken
                constexpr std::ptrdiff_t m_SlaveName = 0xC78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hMaster = 0xC80; // CHandle<CBasePropDoor>
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0xCA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xCB8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xCD0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xCE8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0xD00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0xD18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0xD30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0xD48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAjarOpen = 0xD60; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicBranchList {
                constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4A8; // CUtlSymbolLarge[16]
                constexpr std::ptrdiff_t m_LogicBranchList = 0x528; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_eLastState = 0x540; // CLogicBranchList::LogicBranchListenerLastState_t
                constexpr std::ptrdiff_t m_OnAllTrue = 0x548; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAllFalse = 0x560; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMixed = 0x578; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace CBtActionParachutePositioning {
                constexpr std::ptrdiff_t m_ActionTimer = 0x58; // CountdownTimer
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CAK47 {
            }
            // Parent: CBreakableProp
            // Field count: 22
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xAD8; // bool
                constexpr std::ptrdiff_t m_bNavObstacleUpdatesOverridden = 0xAD9; // bool
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xADA; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xADB; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xAE0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xAF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xB10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xB28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xB40; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xB58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xB60; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xB64; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xB65; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xB66; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xB67; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xB68; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xB69; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xB6C; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xB70; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xB74; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xB78; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0xB7C; // int32
            }
            // Parent: CHostage
            // Field count: 0
            namespace CHostageAlias_info_hostage_spawn {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x4E0; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            namespace CFuncConveyor {
                constexpr std::ptrdiff_t m_szConveyorModels = 0x768; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x770; // float32
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x774; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x780; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x78C; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x790; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x794; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x798; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x7A0; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerPhysics {
                constexpr std::ptrdiff_t m_pController = 0x8D0; // IPhysicsMotionController*
                constexpr std::ptrdiff_t m_gravityScale = 0x8D8; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x8DC; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x8E0; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x8E4; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x8E8; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x8EC; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x8F0; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x8F4; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8F8; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x904; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x908; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x914; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x920; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetB {
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CFuncTimescale {
                constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flAcceleration = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flMinBlendRate = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4B4; // float32
                constexpr std::ptrdiff_t m_isStarted = 0x4B8; // bool
            }
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szWorldModelAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x2C8; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x2C9; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x2D0; // CAttachmentNameSymbolWithStorage
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x2F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x3D0; // CUtlString
                constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x3D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x4B8; // uint8
                constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x4C0; // float32
                constexpr std::ptrdiff_t m_bGenerateMuzzleLight = 0x4C4; // bool
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x4C5; // bool
                constexpr std::ptrdiff_t m_iFlags = 0x4C6; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_iWeight = 0x4C8; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x4CC; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x4CD; // bool
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x4CE; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x4CF; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x4D0; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x4D4; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x4D8; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x4DC; // int32
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x4E0; // bool
                constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x4E1; // bool
                constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x4E2; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x4E4; // RumbleEffect_t
                constexpr std::ptrdiff_t m_flDropSpeed = 0x4E8; // float32
                constexpr std::ptrdiff_t m_iSlot = 0x4EC; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x4F0; // int32
                constexpr std::ptrdiff_t m_aShootSounds = 0x4F8; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: CPointEntity
            // Field count: 15
            namespace CInfoInteraction {
                constexpr std::ptrdiff_t m_hSceneRequest = 0x4A8; // SceneRequestHandle_t
                constexpr std::ptrdiff_t m_hSceneOpportunity = 0x4AC; // SceneOpportunityHandle_t
                constexpr std::ptrdiff_t m_bEnabled = 0x4B0; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4B1; // bool
                constexpr std::ptrdiff_t m_strSceneVDataName = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strPulseVDataName = 0x4C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRadius = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flOwnerFOV = 0x4EC; // float32
                constexpr std::ptrdiff_t m_strLocalInterestReqTags = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strLocalInterestOptTags = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strLookTarget = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flDuration = 0x508; // float32
                constexpr std::ptrdiff_t m_flCooldown = 0x50C; // float32
                constexpr std::ptrdiff_t m_nRepeatCount = 0x510; // int32
                constexpr std::ptrdiff_t m_bDisableOnExit = 0x514; // bool
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 24
            namespace CSoundOpvarSetPointEntity {
                constexpr std::ptrdiff_t m_OnEnter = 0x550; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExit = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAutoDisable = 0x580; // bool
                constexpr std::ptrdiff_t m_flDistanceMin = 0x5C4; // float32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x5C8; // float32
                constexpr std::ptrdiff_t m_flDistanceMapMin = 0x5CC; // float32
                constexpr std::ptrdiff_t m_flDistanceMapMax = 0x5D0; // float32
                constexpr std::ptrdiff_t m_flOcclusionRadius = 0x5D4; // float32
                constexpr std::ptrdiff_t m_flOcclusionMin = 0x5D8; // float32
                constexpr std::ptrdiff_t m_flOcclusionMax = 0x5DC; // float32
                constexpr std::ptrdiff_t m_flValSetOnDisable = 0x5E0; // float32
                constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x5E4; // bool
                constexpr std::ptrdiff_t m_bReloading = 0x5E5; // bool
                constexpr std::ptrdiff_t m_nSimulationMode = 0x5E8; // int32
                constexpr std::ptrdiff_t m_nVisibilitySamples = 0x5EC; // int32
                constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x5F0; // Vector
                constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x5FC; // float32
                constexpr std::ptrdiff_t m_hDynamicEntity = 0x600; // CEntityHandle
                constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x610; // float32
                constexpr std::ptrdiff_t m_vPathingSourcePos = 0x614; // Vector
                constexpr std::ptrdiff_t m_vPathingListenerPos = 0x620; // Vector
                constexpr std::ptrdiff_t m_vPathingDirection = 0x62C; // Vector
                constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x638; // int32
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 0
            namespace CInfoTargetServerOnly {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CServerRagdollTrigger {
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_dynamic_prop {
            }
            // Parent: CMarkupVolume
            // Field count: 7
            namespace CMarkupVolumeTagged {
                constexpr std::ptrdiff_t m_GroupNames = 0x770; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_Tags = 0x788; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bIsGroup = 0x7A0; // bool
                constexpr std::ptrdiff_t m_bGroupByPrefab = 0x7A1; // bool
                constexpr std::ptrdiff_t m_bGroupByVolume = 0x7A2; // bool
                constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x7A3; // bool
                constexpr std::ptrdiff_t m_bIsInGroup = 0x7A4; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: CBaseEntity
            // Field count: 18
            namespace CEnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x530; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x534; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x538; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x544; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x550; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x554; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x558; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x55C; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x560; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x564; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x570; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x574; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x575; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x576; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x577; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x578; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x588; // bool
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: CCSWeaponBaseShotgun
            // Field count: 0
            namespace CWeaponXM1014 {
            }
            // Parent: CBaseTrigger
            // Field count: 16
            namespace CTriggerLerpObject {
                constexpr std::ptrdiff_t m_iszLerpTarget = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTarget = 0x8D0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x8D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x8E0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flLerpDuration = 0x8E4; // float32
                constexpr std::ptrdiff_t m_bAttachedEntityWasParented = 0x8E8; // bool
                constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x8E9; // bool
                constexpr std::ptrdiff_t m_bSingleLerpObject = 0x8EA; // bool
                constexpr std::ptrdiff_t m_vecLerpingObjects = 0x8F0; // CUtlVector<lerpdata_t>
                constexpr std::ptrdiff_t m_iszLerpEffect = 0x908; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLerpSound = 0x910; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x918; // bool
                constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x91C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnLerpStarted = 0x920; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLerpFinished = 0x938; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDetached = 0x950; // CEntityIOOutput
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropOverride {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerSave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x8C8; // bool
                constexpr std::ptrdiff_t m_fDangerousTimer = 0x8CC; // float32
                constexpr std::ptrdiff_t m_minHitPoints = 0x8D0; // int32
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPointHurt {
                constexpr std::ptrdiff_t m_nDamage = 0x4A8; // int32
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4AC; // DamageTypes_t
                constexpr std::ptrdiff_t m_flRadius = 0x4B0; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x4B4; // float32
                constexpr std::ptrdiff_t m_strTarget = 0x4B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pActivator = 0x4C0; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 25
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4B0; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x4B8; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x4E0; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x4E4; // bool
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x4E8; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x4EC; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x4F0; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x508; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x50C; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iMostConnected = 0x510; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x514; // char[128]
                constexpr std::ptrdiff_t m_szNetworkIDString = 0x598; // CUtlString
                constexpr std::ptrdiff_t m_fLerpTime = 0x5A0; // float32
                constexpr std::ptrdiff_t m_bLagCompensation = 0x5A4; // bool
                constexpr std::ptrdiff_t m_bPredict = 0x5A5; // bool
                constexpr std::ptrdiff_t m_bIsLowViolence = 0x5AC; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0x5AD; // bool
                constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x6E8; // ChatIgnoreType_t
                constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x6F0; // float32
                constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x6F4; // int32
                constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x6F8; // bool
                constexpr std::ptrdiff_t m_steamID = 0x708; // uint64
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x710; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x714; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            namespace CDestructiblePart {
                constexpr std::ptrdiff_t m_DebugName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nHitGroup = 0x8; // HitGroup_t
                constexpr std::ptrdiff_t m_bDisableHitGroupWhenDestroyed = 0xC; // bool
                constexpr std::ptrdiff_t m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0x10; // CUtlVector<HitGroup_t>
                constexpr std::ptrdiff_t m_bOnlyDestroyWhenGibbing = 0x28; // bool
                constexpr std::ptrdiff_t m_sBodyGroupName = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_DamageLevels = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventQueueListener {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysBlockHeader_t {
                constexpr std::ptrdiff_t nSaved = 0x0; // int32
                constexpr std::ptrdiff_t pWorldObject = 0x8; // uint64
            }
            // Parent: Relationship_t
            // Field count: 2
            namespace RelationshipOverride_t {
                constexpr std::ptrdiff_t entity = 0x8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t classType = 0xC; // Class_T
            }
            // Parent: None
            // Field count: 2
            namespace AutoRoomDoorwayPairs_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NavHull_t {
                constexpr std::ptrdiff_t m_nHullIdx = 0x0; // int32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDebugSnapshotData_t {
                constexpr std::ptrdiff_t m_text = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_dataType = 0x8; // uint32
                constexpr std::ptrdiff_t m_userFlags = 0xC; // uint32
                constexpr std::ptrdiff_t m_userData = 0x10; // uint32
                constexpr std::ptrdiff_t m_userVector = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_userTransform = 0x20; // CTransformWS
                constexpr std::ptrdiff_t m_userShape = 0x40; // CGenericShapeProxy
                constexpr std::ptrdiff_t m_drawColor = 0xD8; // Color
                constexpr std::ptrdiff_t m_vecDebugOverlayData = 0xE0; // CUtlVector<CDebugDrawHistoryData*>
                constexpr std::ptrdiff_t m_pStructuredData = 0xF8; // DebugSnapshotBaseStructuredData_t*
                constexpr std::ptrdiff_t m_hEntity = 0x100; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_sEntityName = 0x108; // CUtlString
                constexpr std::ptrdiff_t m_nEntityIndex = 0x110; // CEntityIndex
                constexpr std::ptrdiff_t m_children = 0x120; // CUtlLeanVector<CDebugSnapshotData_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRemapFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 3
            namespace CHintMessage {
                constexpr std::ptrdiff_t m_hintString = 0x0; // char*
                constexpr std::ptrdiff_t m_args = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_duration = 0x20; // float32
            }
            // Parent: None
            // Field count: 7
            namespace ParticleNode_t {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iIndex = 0x4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_flGrowthDuration = 0xC; // float32
                constexpr std::ptrdiff_t m_vecGrowthOrigin = 0x10; // Vector
                constexpr std::ptrdiff_t m_flEndcapTime = 0x1C; // float32
                constexpr std::ptrdiff_t m_bMarkedForDelete = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            namespace CFootstepTableHandle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDecalGroupVData {
                constexpr std::ptrdiff_t m_vecOptions = 0x0; // CUtlVector<DecalGroupOption_t>
                constexpr std::ptrdiff_t m_flTotalProbability = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmSnapWeaponTask {
            }
            // Parent: None
            // Field count: 1
            namespace CPlayerControllerComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 1
            namespace CResponseQueue {
                constexpr std::ptrdiff_t m_ExpresserTargets = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Field count: 2
            namespace CodeGenAABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
            }
            // Parent: None
            // Field count: 2
            namespace CScriptUniformRandomStream {
                constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32
            }
            // Parent: None
            // Field count: 6
            namespace lerpdata_t {
                constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_MoveType = 0x4; // MoveType_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_vecStartOrigin = 0xC; // Vector
                constexpr std::ptrdiff_t m_qStartRot = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_nFXIndex = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 1
            namespace WrappedPhysicsJoint_t {
                constexpr std::ptrdiff_t m_pJoint = 0x0; // IPhysicsJoint*
            }
            // Parent: None
            // Field count: 5
            namespace SimpleConstraintSoundProfile {
                constexpr std::ptrdiff_t m_flKeyPointMinSoundThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_flKeyPointMaxSoundThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_reversalSoundThresholdSmall = 0x10; // float32
                constexpr std::ptrdiff_t m_reversalSoundThresholdMedium = 0x14; // float32
                constexpr std::ptrdiff_t m_reversalSoundThresholdLarge = 0x18; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CSimpleSimTimer {
                constexpr std::ptrdiff_t m_flNext = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_BaseNPCAnimGraph_DebugSnapshotData_t {
                constexpr std::ptrdiff_t e_action_desired = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t b_action_restart = 0x10; // bool
                constexpr std::ptrdiff_t e_movement_type_desired = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t b_movement_type_restart = 0x20; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysicsBodyGameMarkupData {
                constexpr std::ptrdiff_t m_PhysicsBodyMarkupByBoneName = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SoundCommand_t {
                constexpr std::ptrdiff_t m_time = 0x8; // float32
                constexpr std::ptrdiff_t m_deltaTime = 0xC; // float32
                constexpr std::ptrdiff_t m_command = 0x10; // soundcommands_t
                constexpr std::ptrdiff_t m_value = 0x14; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace modifiedconvars_t {
                constexpr std::ptrdiff_t pszConvar = 0x0; // char[128]
                constexpr std::ptrdiff_t pszCurrentValue = 0x80; // char[128]
                constexpr std::ptrdiff_t pszOrgValue = 0x100; // char[128]
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTestPulseIOComponent_Derived {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SAVE_HEADER {
                constexpr std::ptrdiff_t m_saveId = 0x0; // int32
                constexpr std::ptrdiff_t m_version = 0x4; // int32
                constexpr std::ptrdiff_t m_nConnectionCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nMapVersion = 0xC; // int32
                constexpr std::ptrdiff_t m_sSpawnGroupName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vecWorldOffset = 0x20; // matrix3x4a_t
                constexpr std::ptrdiff_t m_flSaveTime = 0x50; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkillDamage {
                constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_flNPCDamageScalarVsNPC = 0x10; // float32
                constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DebugSnapshotBaseStructuredData_t {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MDebugSnapshotDataSummaryFn
            namespace AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
                constexpr std::ptrdiff_t m_sInitialQueryName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sCurrentQueryName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nMode = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nType = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nState = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_Motor_DebugSnapshotData_t {
                constexpr std::ptrdiff_t current_movement_gait_set = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t current_movement_gait = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t movement_setting_id = 0x18; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 0
            namespace CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 1
            namespace physics_save_sphere_t {
                constexpr std::ptrdiff_t radius = 0x0; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GAME_HEADER {
                constexpr std::ptrdiff_t m_sComment = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nSpawnGroupCount = 0x8; // int32
                constexpr std::ptrdiff_t m_sLandmark = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_sRequiredAddons = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventListenerBase {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_BaseNPC_DebugSnapshotData_t {
                constexpr std::ptrdiff_t npc_state = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t current_enemy = 0x10; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t s_current_schedule = 0x18; // CUtlString
                constexpr std::ptrdiff_t s_current_task = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t s_schedule_interrupt_reason = 0x28; // CUtlString
                constexpr std::ptrdiff_t s_schedule_fail_reason = 0x30; // CUtlString
                constexpr std::ptrdiff_t conditions = 0x38; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t anim_events = 0x50; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t e_action_body_section = 0x68; // CGlobalSymbol
                constexpr std::ptrdiff_t e_movement_body_section = 0x70; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDebugDrawHistoryData {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_etype = 0x4; // ESceneViewDebugOverlaysListenerDataType_t
                constexpr std::ptrdiff_t m_vectors = 0x8; // CUtlLeanVector<Vector4D>
                constexpr std::ptrdiff_t m_colors = 0x18; // CUtlLeanVector<Color>
                constexpr std::ptrdiff_t m_dimensions = 0x28; // CUtlLeanVector<float32>
                constexpr std::ptrdiff_t m_times = 0x38; // CUtlLeanVector<float64>
                constexpr std::ptrdiff_t m_uint64s = 0x48; // CUtlLeanVector<uint64>
                constexpr std::ptrdiff_t m_bools = 0x58; // CUtlLeanVector<bool>
                constexpr std::ptrdiff_t m_strings = 0x68; // CUtlLeanVector<CUtlString>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumer {
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkViewOffsetVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            namespace AmmoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneRequestTargetMapPair_t {
                constexpr std::ptrdiff_t m_actorName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_targetName = 0x8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePartsSystemData {
                constexpr std::ptrdiff_t m_PartsDataByHitGroup = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                constexpr std::ptrdiff_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x28; // CRangeInt
            }
            // Parent: None
            // Field count: 2
            namespace CRopeOverlapHit {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 3
            namespace ResponseContext_t {
                constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CNavVolumeSphericalShell {
                constexpr std::ptrdiff_t m_flRadiusInner = 0x88; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CPlayerPawnComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_Navigator_DebugSnapshotData_t {
                constexpr std::ptrdiff_t s_npc_nav_authority = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t s_goal_nav_search_id = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t s_goal_source_location = 0x18; // CUtlString
                constexpr std::ptrdiff_t goal_actual_pos = 0x20; // VectorWS
                constexpr std::ptrdiff_t goal_base_pos = 0x2C; // VectorWS
                constexpr std::ptrdiff_t waypoints = 0x38; // CUtlVector<AI_Navigator_DebugSnapshotData_t::Waypoint_t>
            }
            // Parent: None
            // Field count: 26
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDecalInstance {
                constexpr std::ptrdiff_t m_sDecalGroup = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hMaterial = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_hEntity = 0x14; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nBoneIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_nTriangleIndex = 0x1C; // int32
                constexpr std::ptrdiff_t m_vPositionLS = 0x20; // Vector
                constexpr std::ptrdiff_t m_vPositionOS = 0x2C; // Vector
                constexpr std::ptrdiff_t m_vNormalLS = 0x38; // Vector
                constexpr std::ptrdiff_t m_vSAxisLS = 0x44; // Vector
                constexpr std::ptrdiff_t m_nFlags = 0x50; // DecalFlags_t
                constexpr std::ptrdiff_t m_Color = 0x54; // Color
                constexpr std::ptrdiff_t m_flWidth = 0x58; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x5C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x60; // float32
                constexpr std::ptrdiff_t m_transform = 0x70; // CTransformWS
                constexpr std::ptrdiff_t m_flAnimationScale = 0x90; // float32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0x94; // float32
                constexpr std::ptrdiff_t m_flPlaceTime = 0x98; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x9C; // float32
                constexpr std::ptrdiff_t m_flFadeDuration = 0xA0; // float32
                constexpr std::ptrdiff_t m_flLightingOriginOffset = 0xA4; // float32
                constexpr std::ptrdiff_t m_flBoundingRadiusSqr = 0xB0; // float32
                constexpr std::ptrdiff_t m_nSequenceIndex = 0xB4; // int16
                constexpr std::ptrdiff_t m_bIsAdjacent = 0xB6; // bool
                constexpr std::ptrdiff_t m_bDoDecalLightmapping = 0xB7; // bool
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveData {
                constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
                constexpr std::ptrdiff_t m_angAccumulatedRootMotionRotation = 0xC; // QAngle
                constexpr std::ptrdiff_t m_vSrc = 0x18; // VectorWS
                constexpr std::ptrdiff_t m_angSrc = 0x24; // QAngle
                constexpr std::ptrdiff_t m_angCurrent = 0x30; // QAngle
                constexpr std::ptrdiff_t m_flLockedSpeed = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x40; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x44; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bActive = 0x4C; // bool
                constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x4D; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x4E; // bool
                constexpr std::ptrdiff_t m_bSuccess = 0x4F; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x50; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x54; // bool
                constexpr std::ptrdiff_t m_vDest = 0x58; // Vector
                constexpr std::ptrdiff_t m_angDst = 0x64; // QAngle
                constexpr std::ptrdiff_t m_hDestEntity = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            namespace CSkeletonAnimationController {
                constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeMarkupVolume {
            }
            // Parent: None
            // Field count: 2
            namespace CResponseCriteriaSet {
                constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x30; // int32
                constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x34; // bool
            }
            // Parent: None
            // Field count: 11
            namespace CAI_Expresser {
                constexpr std::ptrdiff_t m_flStopTalkTime = 0x60; // GameTime_t
                constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_flQueuedSpeechTime = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_voicePitch = 0x70; // int32
                constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x78; // bool
                constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x79; // bool
                constexpr std::ptrdiff_t m_bSceneEntityDisabled = 0x7A; // bool
                constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x7C; // int32
                constexpr std::ptrdiff_t m_pOuter = 0x98; // CBaseModelEntity*
            }
            // Parent: None
            // Field count: 0
            namespace IChoreoServices {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerAttributes {
            }
            // Parent: CStopwatchBase
            // Field count: 1
            namespace CStopwatch {
                constexpr std::ptrdiff_t m_flInterval = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            namespace ResponseParams {
                constexpr std::ptrdiff_t odds = 0x10; // int16
                constexpr std::ptrdiff_t flags = 0x12; // int16
                constexpr std::ptrdiff_t m_pFollowup = 0x18; // ResponseFollowup*
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SPAWNGROUP_HEADER {
                constexpr std::ptrdiff_t m_sGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sEntityLumpName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vecWorldOffset = 0x10; // matrix3x4a_t
                constexpr std::ptrdiff_t m_bClientSpawnGroup = 0x40; // bool
                constexpr std::ptrdiff_t m_bSuppressAllEntities = 0x41; // bool
            }
            // Parent: None
            // Field count: 4
            namespace globalentity_t {
                constexpr std::ptrdiff_t name = 0x0; // CUtlSymbol
                constexpr std::ptrdiff_t levelName = 0x2; // CUtlSymbol
                constexpr std::ptrdiff_t state = 0x4; // GLOBALESTATE
                constexpr std::ptrdiff_t counter = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            namespace SceneInterestTags_t {
                constexpr std::ptrdiff_t m_Tags = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 10
            namespace ConstraintSoundInfo {
                constexpr std::ptrdiff_t m_vSampler = 0x8; // VelocitySampler
                constexpr std::ptrdiff_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
                constexpr std::ptrdiff_t m_forwardAxis = 0x40; // Vector
                constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSoundSmall = 0x78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSoundMedium = 0x80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSoundLarge = 0x88; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bPlayTravelSound = 0x90; // bool
                constexpr std::ptrdiff_t m_bPlayReversalSound = 0x91; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysicsBodyGameMarkup {
                constexpr std::ptrdiff_t m_TargetBody = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Tag = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointCameraSettings_t {
                constexpr std::ptrdiff_t m_flNearBlurryDistance = 0x0; // float32
                constexpr std::ptrdiff_t m_flNearCrispDistance = 0x4; // float32
                constexpr std::ptrdiff_t m_flFarCrispDistance = 0x8; // float32
                constexpr std::ptrdiff_t m_flFarBlurryDistance = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DebugDrawBoneTransforms_t {
                constexpr std::ptrdiff_t vecBones = 0x10; // CUtlVectorFixedGrowable<CTransform,128>
            }
            // Parent: None
            // Field count: 0
            namespace CVectorMovingAverage {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_MotorGroundAnimgraph_DebugSnapshotData_t {
                constexpr std::ptrdiff_t state = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t b_has_path = 0x10; // bool
                constexpr std::ptrdiff_t f_remaining_ground_path_length = 0x14; // float32
                constexpr std::ptrdiff_t f_current_speed = 0x18; // float32
                constexpr std::ptrdiff_t move_type = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t f_move_heading_actual = 0x28; // float32
                constexpr std::ptrdiff_t f_move_heading_desired = 0x2C; // float32
                constexpr std::ptrdiff_t f_current_lean = 0x30; // float32
                constexpr std::ptrdiff_t f_target_lean = 0x34; // float32
                constexpr std::ptrdiff_t vec_events = 0x38; // CUtlVector<AI_MotorGroundAnimgraph_DebugSnapshotData_t::Event_t>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundEnvelope {
                constexpr std::ptrdiff_t m_current = 0x0; // float32
                constexpr std::ptrdiff_t m_target = 0x4; // float32
                constexpr std::ptrdiff_t m_rate = 0x8; // float32
                constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
            }
            // Parent: None
            // Field count: 25
            namespace dynpitchvol_base_t {
                constexpr std::ptrdiff_t preset = 0x0; // int32
                constexpr std::ptrdiff_t pitchrun = 0x4; // int32
                constexpr std::ptrdiff_t pitchstart = 0x8; // int32
                constexpr std::ptrdiff_t spinup = 0xC; // int32
                constexpr std::ptrdiff_t spindown = 0x10; // int32
                constexpr std::ptrdiff_t volrun = 0x14; // int32
                constexpr std::ptrdiff_t volstart = 0x18; // int32
                constexpr std::ptrdiff_t fadein = 0x1C; // int32
                constexpr std::ptrdiff_t fadeout = 0x20; // int32
                constexpr std::ptrdiff_t lfotype = 0x24; // int32
                constexpr std::ptrdiff_t lforate = 0x28; // int32
                constexpr std::ptrdiff_t lfomodpitch = 0x2C; // int32
                constexpr std::ptrdiff_t lfomodvol = 0x30; // int32
                constexpr std::ptrdiff_t cspinup = 0x34; // int32
                constexpr std::ptrdiff_t cspincount = 0x38; // int32
                constexpr std::ptrdiff_t pitch = 0x3C; // int32
                constexpr std::ptrdiff_t spinupsav = 0x40; // int32
                constexpr std::ptrdiff_t spindownsav = 0x44; // int32
                constexpr std::ptrdiff_t pitchfrac = 0x48; // int32
                constexpr std::ptrdiff_t vol = 0x4C; // int32
                constexpr std::ptrdiff_t fadeinsav = 0x50; // int32
                constexpr std::ptrdiff_t fadeoutsav = 0x54; // int32
                constexpr std::ptrdiff_t volfrac = 0x58; // int32
                constexpr std::ptrdiff_t lfofrac = 0x5C; // int32
                constexpr std::ptrdiff_t lfomult = 0x60; // int32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            namespace CStopwatchBase {
                constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
            }
            // Parent: None
            // Field count: 1
            namespace SceneRequestHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            namespace CNavVolumeVector {
                constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x80; // bool
            }
            // Parent: None
            // Field count: 2
            namespace NavGravity_t {
                constexpr std::ptrdiff_t m_vGravity = 0x0; // Vector
                constexpr std::ptrdiff_t m_bDefault = 0xC; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseScriptedSequenceData_t {
                constexpr std::ptrdiff_t m_nActorID = 0x0; // int32
                constexpr std::ptrdiff_t m_szPreIdleSequence = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_szEntrySequence = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_szSequence = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_szExitSequence = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nMoveTo = 0x28; // ScriptedMoveTo_t
                constexpr std::ptrdiff_t m_nMoveToGait = 0x2C; // SharedMovementGait_t
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x30; // ScriptedHeldWeaponBehavior_t
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x34; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x35; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x36; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x37; // bool
            }
            // Parent: None
            // Field count: 2
            namespace RotatorQueueEntry_t {
                constexpr std::ptrdiff_t qTarget = 0x0; // Quaternion
                constexpr std::ptrdiff_t eSpace = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseAnimGraphDestructibleParts_GraphController {
            }
            // Parent: None
            // Field count: 1
            namespace ExternalAnimGraphHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 1
            namespace CPhysicsShake {
                constexpr std::ptrdiff_t m_force = 0x8; // Vector
            }
            // Parent: None
            // Field count: 6
            namespace CInfoChoreoAnchorPosition {
                constexpr std::ptrdiff_t m_vOrigin = 0x0; // Vector
                constexpr std::ptrdiff_t m_qAngles = 0xC; // QAngle
                constexpr std::ptrdiff_t m_vExtentsMin = 0x18; // Vector
                constexpr std::ptrdiff_t m_vExtentsMax = 0x24; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x30; // float32
                constexpr std::ptrdiff_t m_nShapeType = 0x34; // CInfoChoreoLocatorShapeType_t
            }
            // Parent: None
            // Field count: 3
            namespace VelocitySampler {
                constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
                constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTakeDamageResult {
                constexpr std::ptrdiff_t m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
                constexpr std::ptrdiff_t m_DestructibleHitGroupRequests = 0x8; // CUtlLeanVector<DestructiblePartDamageRequest_t>
                constexpr std::ptrdiff_t m_nHealthLost = 0x18; // int32
                constexpr std::ptrdiff_t m_nHealthBefore = 0x1C; // int32
                constexpr std::ptrdiff_t m_flDamageDealt = 0x20; // float32
                constexpr std::ptrdiff_t m_flPreModifiedDamage = 0x24; // float32
                constexpr std::ptrdiff_t m_nTotalledHealthLost = 0x28; // int32
                constexpr std::ptrdiff_t m_flTotalledDamageDealt = 0x2C; // float32
                constexpr std::ptrdiff_t m_flTotalledPreModifiedDamage = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewDamageAccumulatorValue = 0x34; // float32
                constexpr std::ptrdiff_t m_nDamageFlags = 0x38; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_bWasDamageSuppressed = 0x40; // bool
                constexpr std::ptrdiff_t m_bSuppressFlinch = 0x41; // bool
                constexpr std::ptrdiff_t m_nOverrideFlinchHitGroup = 0x44; // HitGroup_t
            }
            // Parent: None
            // Field count: 1
            namespace SceneEventId_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 5
            namespace ExternalAnimGraph_t {
                constexpr std::ptrdiff_t m_hExtGraphHandle = 0x0; // ExternalAnimGraphHandle_t
                constexpr std::ptrdiff_t m_sExternalGraphSlotID = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hGraphDefinition = 0x10; // CStrongHandleCopyable<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_hExternalGraphOwner = 0x18; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_nInactiveBehavior = 0x30; // ExternalAnimGraphInactiveBehavior_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCommentarySystem {
                constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12; // bool
                constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14; // GameTime_t
                constexpr std::ptrdiff_t m_iTeleportStage = 0x18; // int32
                constexpr std::ptrdiff_t m_bCheatState = 0x1C; // bool
                constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
                constexpr std::ptrdiff_t m_ModifiedConvars = 0x20; // CUtlVector<modifiedconvars_t>
                constexpr std::ptrdiff_t m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Field count: 8
            namespace ResponseFollowup {
                constexpr std::ptrdiff_t followup_concept = 0x0; // char*
                constexpr std::ptrdiff_t followup_contexts = 0x8; // char*
                constexpr std::ptrdiff_t followup_delay = 0x10; // float32
                constexpr std::ptrdiff_t followup_target = 0x14; // char*
                constexpr std::ptrdiff_t followup_entityiotarget = 0x1C; // char*
                constexpr std::ptrdiff_t followup_entityioinput = 0x24; // char*
                constexpr std::ptrdiff_t followup_entityiodelay = 0x2C; // float32
                constexpr std::ptrdiff_t bFired = 0x30; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32
                constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
                constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
                constexpr std::ptrdiff_t m_flMass = 0x28; // float32
                constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Field count: 1
            namespace CNetworkTransmitComponent {
                constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x184; // uint8
            }
            // Parent: None
            // Field count: 5
            namespace CPathQueryUtil {
                constexpr std::ptrdiff_t m_PathToEntityTransform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_vecPathSamplePositions = 0x30; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecPathSampleParameters = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPathSampleDistances = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bIsClosedLoop = 0x78; // bool
            }
            // Parent: None
            // Field count: 5
            namespace RagdollCreationParams_t {
                constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32
                constexpr std::ptrdiff_t m_bForceCurrentWorldTransform = 0x10; // bool
                constexpr std::ptrdiff_t m_bUseLRURetirement = 0x11; // bool
                constexpr std::ptrdiff_t m_nHealthToGrant = 0x14; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRelativeTransform {
                constexpr std::ptrdiff_t m_bTransformIsWorldSpace = 0x0; // bool
                constexpr std::ptrdiff_t m_transform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_transformWS = 0x30; // CTransformWS
                constexpr std::ptrdiff_t m_hEntity = 0x50; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 2
            namespace CWorldCompositionChunkReferenceElement_t {
                constexpr std::ptrdiff_t m_strMapToLoad = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_strLandmarkName = 0x8; // CUtlString
            }
            // Parent: CStopwatchBase
            // Field count: 2
            namespace CRandStopwatch {
                constexpr std::ptrdiff_t m_flMinInterval = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CMovementStatsProperty {
                constexpr std::ptrdiff_t m_nUseCounter = 0x10; // int32
                constexpr std::ptrdiff_t m_emaMovementDirection = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: None
            // Field count: 5
            namespace CGameChoreoServices {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
                constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
                constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysObjectHeader_t {
                constexpr std::ptrdiff_t type = 0x0; // PhysInterfaceId_t
                constexpr std::ptrdiff_t hEntity = 0x4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t fieldName = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t nObjects = 0x10; // int32
                constexpr std::ptrdiff_t modelName = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t bbox = 0x20; // AABB_t
                constexpr std::ptrdiff_t sphere = 0x38; // physics_save_sphere_t
                constexpr std::ptrdiff_t iCollide = 0x3C; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CSimpleStopwatch {
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CShatterGlassShard {
                constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
                constexpr std::ptrdiff_t m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
                constexpr std::ptrdiff_t m_hParentShard = 0x40; // uint32
                constexpr std::ptrdiff_t m_ShatterStressType = 0x44; // ShatterGlassStressType
                constexpr std::ptrdiff_t m_vecStressVelocity = 0x48; // Vector
                constexpr std::ptrdiff_t m_bCreatedModel = 0x54; // bool
                constexpr std::ptrdiff_t m_flLongestEdge = 0x58; // float32
                constexpr std::ptrdiff_t m_flShortestEdge = 0x5C; // float32
                constexpr std::ptrdiff_t m_flLongestAcross = 0x60; // float32
                constexpr std::ptrdiff_t m_flShortestAcross = 0x64; // float32
                constexpr std::ptrdiff_t m_flSumOfAllEdges = 0x68; // float32
                constexpr std::ptrdiff_t m_flArea = 0x6C; // float32
                constexpr std::ptrdiff_t m_nOnFrameEdge = 0x70; // OnFrame
                constexpr std::ptrdiff_t m_nSubShardGeneration = 0x74; // int32
                constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x78; // Vector2D
                constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x80; // bool
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x84; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x8C; // Vector2D
                constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x94; // bool
                constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x95; // bool
                constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x96; // bool
                constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x98; // GameTime_t
                constexpr std::ptrdiff_t m_hEntityHittingMe = 0x9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecNeighbors = 0xA0; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            namespace ragdollelement_t {
                constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
                constexpr std::ptrdiff_t parentIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x24; // float32
                constexpr std::ptrdiff_t m_nHeight = 0x28; // int32
            }
            // Parent: None
            // Field count: 9
            namespace CGameScriptedMoveDef_t {
                constexpr std::ptrdiff_t m_vDestOffset = 0x0; // Vector
                constexpr std::ptrdiff_t m_hDestEntity = 0xC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angDest = 0x10; // QAngle
                constexpr std::ptrdiff_t m_flDuration = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x20; // float32
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x24; // float32
                constexpr std::ptrdiff_t m_bAimDisabled = 0x28; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x29; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x2C; // ForcedCrouchState_t
            }
            // Parent: None
            // Field count: 7
            namespace CNetworkOriginCellCoordQuantizedVector {
                constexpr std::ptrdiff_t m_cellX = 0x10; // uint16
                constexpr std::ptrdiff_t m_cellY = 0x12; // uint16
                constexpr std::ptrdiff_t m_cellZ = 0x14; // uint16
                constexpr std::ptrdiff_t m_nOutsideWorld = 0x16; // uint16
                constexpr std::ptrdiff_t m_vecX = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x20; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseAnimGraphVariationUserData {
            }
            // Parent: None
            // Field count: 8
            namespace DynamicVolumeDef_t {
                constexpr std::ptrdiff_t m_source = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_target = 0x4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nHullIdx = 0x8; // int32
                constexpr std::ptrdiff_t m_vSourceAnchorPos = 0xC; // Vector
                constexpr std::ptrdiff_t m_vTargetAnchorPos = 0x18; // Vector
                constexpr std::ptrdiff_t m_nAreaSrc = 0x24; // uint32
                constexpr std::ptrdiff_t m_nAreaDst = 0x28; // uint32
                constexpr std::ptrdiff_t m_bAttached = 0x2C; // bool
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkOriginQuantizedVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            namespace magnetted_objects_t {
                constexpr std::ptrdiff_t hEntity = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            namespace CHintMessageQueue {
                constexpr std::ptrdiff_t m_tmMessageEnd = 0x0; // float32
                constexpr std::ptrdiff_t m_messages = 0x8; // CUtlVector<CHintMessage*>
                constexpr std::ptrdiff_t m_pPlayerController = 0x20; // CBasePlayerController*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
            }
            // Parent: None
            // Field count: 5
            namespace thinkfunc_t {
                constexpr std::ptrdiff_t m_think = 0x0; // BASEPTR
                constexpr std::ptrdiff_t m_hFn = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nContext = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x14; // GameTick_t
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x18; // GameTick_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavHullPresetVData {
                constexpr std::ptrdiff_t m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WaterWheelFrictionScale_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flFrictionScale = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            namespace ragdollhierarchyjoint_t {
                constexpr std::ptrdiff_t parentIndex = 0x0; // int32
                constexpr std::ptrdiff_t childIndex = 0x4; // int32
            }
            // Parent: None
            // Field count: 16
            namespace CSceneEventInfo {
                constexpr std::ptrdiff_t m_iLayer = 0x0; // int32
                constexpr std::ptrdiff_t m_iPriority = 0x4; // int32
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flWeight = 0xC; // float32
                constexpr std::ptrdiff_t m_hAnimClip = 0x10; // CStrongHandle<InfoForResourceTypeCNmClip>
                constexpr std::ptrdiff_t m_sAnimClipSlot = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sAnimClipSlotWeight = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bHasArrived = 0x28; // bool
                constexpr std::ptrdiff_t m_nType = 0x2C; // int32
                constexpr std::ptrdiff_t m_flNext = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_bIsGesture = 0x34; // bool
                constexpr std::ptrdiff_t m_bShouldRemove = 0x35; // bool
                constexpr std::ptrdiff_t m_hTarget = 0x5C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSceneEventId = 0x60; // SceneEventId_t
                constexpr std::ptrdiff_t m_bClientSide = 0x64; // bool
                constexpr std::ptrdiff_t m_bStarted = 0x65; // bool
            }
            // Parent: None
            // Field count: 5
            namespace SoundeventPathCornerPairNetworked_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // VectorWS
                constexpr std::ptrdiff_t vP2 = 0xC; // VectorWS
                constexpr std::ptrdiff_t flPathLengthSqr = 0x18; // float32
                constexpr std::ptrdiff_t flP1Pct = 0x1C; // float32
                constexpr std::ptrdiff_t flP2Pct = 0x20; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundPatch {
                constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
                constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
                constexpr std::ptrdiff_t m_shutdownTime = 0x3C; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x40; // float32
                constexpr std::ptrdiff_t m_iszSoundScriptName = 0x48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEnt = 0x50; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundEntityIndex = 0x54; // CEntityIndex
                constexpr std::ptrdiff_t m_soundOrigin = 0x58; // VectorWS
                constexpr std::ptrdiff_t m_isPlaying = 0x64; // int32
                constexpr std::ptrdiff_t m_Filter = 0x68; // CCopyRecipientFilter
                constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0xA0; // float32
                constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0xA4; // bool
                constexpr std::ptrdiff_t m_iszClassName = 0xA8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 18
            namespace CSceneOpportunity {
                constexpr std::ptrdiff_t m_hOwner = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_uHandle = 0x4; // SceneOpportunityHandle_t
                constexpr std::ptrdiff_t m_strInteractVDataName = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bEnabled = 0x10; // bool
                constexpr std::ptrdiff_t m_bActive = 0x11; // bool
                constexpr std::ptrdiff_t m_ePriority = 0x14; // InteractionPriority_t
                constexpr std::ptrdiff_t m_flRadius = 0x18; // float32
                constexpr std::ptrdiff_t m_LocalInterestReqTags = 0x20; // SceneInterestTags_t
                constexpr std::ptrdiff_t m_LocalInterestOptTags = 0x38; // SceneInterestTags_t
                constexpr std::ptrdiff_t m_flOwnerFOV = 0x50; // float32
                constexpr std::ptrdiff_t m_ActorList = 0x58; // CUtlVector<SceneOpportunityActor_t>
                constexpr std::ptrdiff_t m_hLookTarget = 0x70; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDuration = 0x74; // float32
                constexpr std::ptrdiff_t m_tStartTime = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_flCooldown = 0x7C; // float32
                constexpr std::ptrdiff_t m_tCooldownTime = 0x80; // GameTime_t
                constexpr std::ptrdiff_t m_nRepeatCount = 0x84; // int32
                constexpr std::ptrdiff_t m_bDisableOnExit = 0x88; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2ChickenGraphController {
                constexpr std::ptrdiff_t m_action = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_actionSubtype = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xB8; // CAnimGraph2ParamAutoResetOptionalRef
                constexpr std::ptrdiff_t m_idleVariation = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_runVariation = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_panicVariation = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_squatVariation = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bInWater = 0x138; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHasActionCompletedEvent = 0x150; // bool
                constexpr std::ptrdiff_t m_bWaitingForCompletedEvent = 0x151; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace levellist_t {
                constexpr std::ptrdiff_t m_sMapName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sLandmarkName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_hEntLandmark = 0x10; // CEntityHandle
                constexpr std::ptrdiff_t m_vecLandmarkOrigin = 0x14; // Vector
                constexpr std::ptrdiff_t m_vecLandmarkAngles = 0x20; // QAngle
            }
            // Parent: None
            // Field count: 3
            namespace locksound_t {
                constexpr std::ptrdiff_t sLockedSound = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t sUnlockedSound = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flwaitSound = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DecalGroupOption_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flProbability = 0x10; // float32
                constexpr std::ptrdiff_t m_bEnableAngleBetweenNormalAndGravityRange = 0x14; // bool
                constexpr std::ptrdiff_t m_flMinAngleBetweenNormalAndGravity = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxAngleBetweenNormalAndGravity = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBtNode {
            }
            // Parent: None
            // Field count: 2
            namespace CAnimGraphControllerManager {
                constexpr std::ptrdiff_t m_controllers = 0x0; // CUtlVector<CAnimGraphControllerBase*>
                constexpr std::ptrdiff_t m_bGraphBindingsCreated = 0xA8; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeFloat {
                constexpr std::ptrdiff_t m_flValues = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCopyRecipientFilter {
                constexpr std::ptrdiff_t m_Flags = 0x8; // int32
                constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
                constexpr std::ptrdiff_t m_slotPlayerExcludedDueToPrediction = 0x30; // CPlayerSlot
            }
            // Parent: None
            // Field count: 0
            namespace CFloatMovingAverage {
            }
            // Parent: None
            // Field count: 8
            namespace FuncMoverMovementSummary_t {
                constexpr std::ptrdiff_t flStartT = 0x0; // float32
                constexpr std::ptrdiff_t flEndT = 0x4; // float32
                constexpr std::ptrdiff_t nStartNodeIndex = 0x8; // int32
                constexpr std::ptrdiff_t nStopNodeIndex = 0xC; // int32
                constexpr std::ptrdiff_t nMovementMode = 0x10; // int32
                constexpr std::ptrdiff_t nFlags = 0x14; // FuncMoverMovementSummaryFlags_t
                constexpr std::ptrdiff_t nTick = 0x18; // GameTick_t
                constexpr std::ptrdiff_t hPathMover = 0x1C; // CHandle<CPathMover>
            }
            // Parent: None
            // Field count: 5
            namespace CSmoothFunc {
                constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float32
                constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float32
                constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float32
                constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32
            }
            // Parent: None
            // Field count: 0
            namespace IHasAttributes {
            }
            // Parent: None
            // Field count: 5
            namespace ragdoll_t {
                constexpr std::ptrdiff_t list = 0x0; // CUtlVector<ragdollelement_t>
                constexpr std::ptrdiff_t hierarchyJoints = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                constexpr std::ptrdiff_t boneIndex = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t allowStretch = 0x48; // bool
                constexpr std::ptrdiff_t unused = 0x49; // bool
            }
            // Parent: None
            // Field count: 10
            namespace HullFlags_t {
                constexpr std::ptrdiff_t m_bHull_Human = 0x0; // bool
                constexpr std::ptrdiff_t m_bHull_SmallCentered = 0x1; // bool
                constexpr std::ptrdiff_t m_bHull_WideHuman = 0x2; // bool
                constexpr std::ptrdiff_t m_bHull_Tiny = 0x3; // bool
                constexpr std::ptrdiff_t m_bHull_Medium = 0x4; // bool
                constexpr std::ptrdiff_t m_bHull_TinyCentered = 0x5; // bool
                constexpr std::ptrdiff_t m_bHull_Large = 0x6; // bool
                constexpr std::ptrdiff_t m_bHull_LargeCentered = 0x7; // bool
                constexpr std::ptrdiff_t m_bHull_MediumTall = 0x8; // bool
                constexpr std::ptrdiff_t m_bHull_Small = 0x9; // bool
            }
            // Parent: None
            // Field count: 0
            namespace ISkeletonAnimationController {
            }
            // Parent: None
            // Field count: 2
            namespace RotatorHistoryEntry_t {
                constexpr std::ptrdiff_t qInvChange = 0x0; // Quaternion
                constexpr std::ptrdiff_t flTimeRotationStart = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GameAmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nBuySize = 0x38; // int32
                constexpr std::ptrdiff_t m_nCost = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            namespace CMotorController {
                constexpr std::ptrdiff_t m_speed = 0x8; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0xC; // float32
                constexpr std::ptrdiff_t m_axis = 0x10; // VectorWS
                constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            namespace CSimTimer {
                constexpr std::ptrdiff_t m_flInterval = 0x8; // float32
            }
            // Parent: None
            // Field count: 6
            namespace CBaseIssue {
                constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
                constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[260]
                constexpr std::ptrdiff_t m_iNumYesVotes = 0x164; // int32
                constexpr std::ptrdiff_t m_iNumNoVotes = 0x168; // int32
                constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x16C; // int32
                constexpr std::ptrdiff_t m_pVoteController = 0x170; // CVoteController*
            }
            // Parent: None
            // Field count: 4
            namespace SummaryTakeDamageInfo_t {
                constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32
                constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
                constexpr std::ptrdiff_t result = 0x120; // CTakeDamageResult
                constexpr std::ptrdiff_t hTarget = 0x170; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            namespace INavObstacle {
                constexpr std::ptrdiff_t m_nId = 0x8; // uint64
            }
            // Parent: None
            // Field count: 9
            namespace CSceneRequest {
                constexpr std::ptrdiff_t m_szPayloadVDataName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_uHandle = 0x8; // SceneRequestHandle_t
                constexpr std::ptrdiff_t m_state = 0xC; // ESceneRequestState_t
                constexpr std::ptrdiff_t m_nNPCBehaviorOverride = 0x10; // ENPCBehaviorOverride_t
                constexpr std::ptrdiff_t m_vecActorMap = 0x18; // CUtlVector<SceneRequestTargetMapPair_t>
                constexpr std::ptrdiff_t m_vecAnchorMap = 0x30; // CUtlVector<SceneRequestTargetMapPair_t>
                constexpr std::ptrdiff_t m_vecGraphMap = 0x48; // CUtlVector<SceneRequestTargetMapPair_t>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nameMapKV3 = 0x68; // KeyValues3
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace entitytable_t {
                constexpr std::ptrdiff_t id = 0x0; // int32
                constexpr std::ptrdiff_t edictindex = 0x4; // CEntityIndex
                constexpr std::ptrdiff_t saveentityindex = 0x8; // CEntityIndex
                constexpr std::ptrdiff_t bWasSaved = 0x14; // bool
                constexpr std::ptrdiff_t flags = 0x18; // SaveRestoreTableFlags_t
                constexpr std::ptrdiff_t classname = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t globalname = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t entityname = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t landmarkModelSpace = 0x38; // Vector
                constexpr std::ptrdiff_t m_pPrecacheEntityKeys = 0x48; // CEntityKeyValues*
            }
            // Parent: None
            // Field count: 6
            namespace SceneOpportunityActor_t {
                constexpr std::ptrdiff_t m_hActor = 0x0; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_bDynamicActor = 0x4; // bool
                constexpr std::ptrdiff_t m_bAnchor = 0x5; // bool
                constexpr std::ptrdiff_t m_strActorName = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strEntityName = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_InterestTags = 0x18; // SceneInterestTags_t
            }
            // Parent: None
            // Field count: 10
            namespace CRR_Response {
                constexpr std::ptrdiff_t m_Type = 0x0; // uint8
                constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
                constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
                constexpr std::ptrdiff_t m_Params = 0x160; // ResponseParams
                constexpr std::ptrdiff_t m_fMatchScore = 0x180; // float32
                constexpr std::ptrdiff_t m_bAnyMatchingRulesInCooldown = 0x184; // bool
                constexpr std::ptrdiff_t m_szSpeakerContext = 0x188; // char*
                constexpr std::ptrdiff_t m_szWorldContext = 0x190; // char*
                constexpr std::ptrdiff_t m_Followup = 0x198; // ResponseFollowup
                constexpr std::ptrdiff_t m_recipientFilter = 0x1CA; // CUtlSymbol
            }
            // Parent: None
            // Field count: 0
            namespace CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmAimCSNode__CDefinition {
                constexpr std::ptrdiff_t m_nVerticalAngleNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nHorizontalAngleNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_nWeaponCategoryNodeIdx = 0x1C; // int16
                constexpr std::ptrdiff_t m_nWeaponTypeNodeIdx = 0x1E; // int16
                constexpr std::ptrdiff_t m_nWeaponActionNodeIdx = 0x20; // int16
                constexpr std::ptrdiff_t m_nWeaponDropNodeIdx = 0x22; // int16
                constexpr std::ptrdiff_t m_nIsDefusingNodeIdx = 0x24; // int16
                constexpr std::ptrdiff_t m_nCrouchWeightNodeIdx = 0x26; // int16
                constexpr std::ptrdiff_t m_flHandIKBlendInTimeSeconds = 0x28; // float32
                constexpr std::ptrdiff_t m_flActionBlendTimeSeconds = 0x2C; // float32
                constexpr std::ptrdiff_t m_flPlantingBlendTimeSeconds = 0x30; // float32
            }
            // Parent: None
            // Field count: 4
            namespace CConstantForceController {
                constexpr std::ptrdiff_t m_linear = 0xC; // Vector
                constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
                constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
                constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WaterWheelDrag_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flWheelDrag = 0x4; // float32
            }
            // Parent: None
            // Field count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTakeDamageInfo {
                constexpr std::ptrdiff_t m_vecDamageForce = 0x8; // Vector
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_vecReportedPosition = 0x20; // VectorWS
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_hInflictor = 0x38; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAttacker = 0x3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAbility = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDamage = 0x44; // float32
                constexpr std::ptrdiff_t m_flTotalledDamage = 0x48; // float32
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4C; // DamageTypes_t
                constexpr std::ptrdiff_t m_iDamageCustom = 0x50; // int32
                constexpr std::ptrdiff_t m_iAmmoType = 0x54; // AmmoIndex_t
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_bShouldBleed = 0x64; // bool
                constexpr std::ptrdiff_t m_bShouldSpark = 0x65; // bool
                constexpr std::ptrdiff_t m_nDamageFlags = 0x70; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_iHitGroupId = 0x78; // HitGroup_t
                constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x7C; // int32
                constexpr std::ptrdiff_t m_flFriendlyFireDamageReductionRatio = 0x80; // float32
                constexpr std::ptrdiff_t m_bStoppedBullet = 0x84; // bool
                constexpr std::ptrdiff_t m_DestructibleHitGroupRequests = 0x100; // CUtlLeanVector<DestructiblePartDamageRequest_t>
                constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x110; // bool
            }
            // Parent: CSimpleSimTimer
            // Field count: 2
            namespace CRandSimTimer {
                constexpr std::ptrdiff_t m_flMinInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBtNodeComposite {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRelativeLocation {
                constexpr std::ptrdiff_t m_Type = 0x18; // RelativeLocationType_t
                constexpr std::ptrdiff_t m_vRelativeOffset = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vWorldSpacePos = 0x28; // VectorWS
                constexpr std::ptrdiff_t m_hEntity = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            namespace Extent {
                constexpr std::ptrdiff_t lo = 0x0; // VectorWS
                constexpr std::ptrdiff_t hi = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 5
            namespace sndopvarlatchdata_t {
                constexpr std::ptrdiff_t m_iszStack = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperator = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvar = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flVal = 0x20; // float32
                constexpr std::ptrdiff_t m_vPos = 0x24; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PrecipitationFilter_t {
                constexpr std::ptrdiff_t m_flMaxRadius = 0x0; // float32
            }
            // Parent: None
            // Field count: 0
            namespace IEconItemInterface {
            }
            // Parent: None
            // Field count: 2
            namespace PathMoverEntitySpawn {
                constexpr std::ptrdiff_t hMover = 0x0; // CHandle<CFuncMover>
                constexpr std::ptrdiff_t vecOtherEntities = 0x8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: None
            // Field count: 1
            namespace CMultiplayer_Expresser {
                constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0xA0; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolume {
            }
            // Parent: None
            // Field count: 0
            namespace QuestProgress {
            }
            // Parent: None
            // Field count: 0
            namespace CNmAimCSTask {
            }
            // Parent: None
            // Field count: 1
            namespace ParticleIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Field count: 1
            namespace CTakeDamageSummaryScopeGuard {
                constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Field count: 4
            namespace CIronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerSound {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerLegacy {
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DestructiblePartDamageRequest_t {
                constexpr std::ptrdiff_t m_nHitGroup = 0x0; // HitGroup_t
                constexpr std::ptrdiff_t m_nDamageLevel = 0x4; // int32
                constexpr std::ptrdiff_t m_nDesiredHealth = 0x8; // uint16
                constexpr std::ptrdiff_t m_nDestroyFlags = 0xC; // EDestructibleParts_DestroyParameterFlags
                constexpr std::ptrdiff_t m_nDamageType = 0x10; // DamageTypes_t
                constexpr std::ptrdiff_t m_flBreakDamage = 0x14; // float32
                constexpr std::ptrdiff_t m_flBreakDamageRadius = 0x18; // float32
                constexpr std::ptrdiff_t m_vWsBreakDamageOrigin = 0x1C; // VectorWS
                constexpr std::ptrdiff_t m_vWsBreakDamageForce = 0x28; // Vector
            }
            // Parent: None
            // Field count: 1
            namespace CInButtonState {
                constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64[3]
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerParticle {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavHullVData {
                constexpr std::ptrdiff_t m_bAgentEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_agentRadius = 0x4; // float32
                constexpr std::ptrdiff_t m_agentHeight = 0x8; // float32
                constexpr std::ptrdiff_t m_agentShortHeightEnabled = 0xC; // bool
                constexpr std::ptrdiff_t m_agentShortHeight = 0x10; // float32
                constexpr std::ptrdiff_t m_agentCrawlEnabled = 0x14; // bool
                constexpr std::ptrdiff_t m_agentCrawlHeight = 0x18; // float32
                constexpr std::ptrdiff_t m_agentMaxClimb = 0x1C; // float32
                constexpr std::ptrdiff_t m_agentMaxSlope = 0x20; // int32
                constexpr std::ptrdiff_t m_agentMaxJumpDownDist = 0x24; // float32
                constexpr std::ptrdiff_t m_agentMaxJumpHorizDistBase = 0x28; // float32
                constexpr std::ptrdiff_t m_agentMaxJumpUpDist = 0x2C; // float32
                constexpr std::ptrdiff_t m_agentBorderErosion = 0x30; // int32
                constexpr std::ptrdiff_t m_flowMapGenerationEnabled = 0x34; // bool
                constexpr std::ptrdiff_t m_flowMapNodeMaxRadius = 0x38; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_DefaultNPC_DebugSnapshotData_t {
                constexpr std::ptrdiff_t s_npc_current_ability = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t s_npc_tactic_current = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t s_npc_tactic_phase = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t tactic_interrupt_conditions = 0x20; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t s_npc_current_movement = 0x38; // CUtlString
                constexpr std::ptrdiff_t path_query_schedule = 0x40; // AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t
                constexpr std::ptrdiff_t path_query_tactic = 0x68; // AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t
                constexpr std::ptrdiff_t path_queries_speculative = 0x90; // CUtlVector<AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSnapWeaponNode__CDefinition {
                constexpr std::ptrdiff_t m_nFlashedAmountNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nWeaponCategoryNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_nWeaponTypeNodeIdx = 0x1C; // int16
            }
            // Parent: None
            // Field count: 3
            namespace SoundOpvarTraceResult_t {
                constexpr std::ptrdiff_t vPos = 0x0; // Vector
                constexpr std::ptrdiff_t bDidHit = 0xC; // bool
                constexpr std::ptrdiff_t flDistSqrToCenter = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventListener {
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeInt {
                constexpr std::ptrdiff_t m_nValues = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 0
            namespace CBtNodeDecorator {
            }
            // Parent: None
            // Field count: 12
            namespace CSAdditionalPerRoundStats_t {
                constexpr std::ptrdiff_t m_numChickensKilled = 0x0; // int32
                constexpr std::ptrdiff_t m_killsWhileBlind = 0x4; // int32
                constexpr std::ptrdiff_t m_bombCarrierkills = 0x8; // int32
                constexpr std::ptrdiff_t m_flBurnDamageInflicted = 0xC; // float32
                constexpr std::ptrdiff_t m_flBlastDamageInflicted = 0x10; // float32
                constexpr std::ptrdiff_t m_iDinks = 0x14; // int32
                constexpr std::ptrdiff_t m_bFreshStartThisRound = 0x18; // bool
                constexpr std::ptrdiff_t m_bBombPlantedAndAlive = 0x19; // bool
                constexpr std::ptrdiff_t m_nDefuseStarts = 0x1C; // int32
                constexpr std::ptrdiff_t m_nHostagePickUps = 0x20; // int32
                constexpr std::ptrdiff_t m_numTeammatesFlashed = 0x24; // int32
                constexpr std::ptrdiff_t m_strAnnotationsWorkshopId = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEmptyGraphController {
            }
            // Parent: None
            // Field count: 1
            namespace ModelConfigHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            namespace CEntitySubclassVDataBase {
            }
            // Parent: None
            // Field count: 2
            namespace CBreakableStageHelper {
                constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32
                constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_MotorGroundAnimgraph_DebugSnapshotData_t__Event_t {
                constexpr std::ptrdiff_t description = 0x0; // CUtlString
                constexpr std::ptrdiff_t location = 0x8; // VectorWS
            }
            // Parent: None
            // Field count: 2
            namespace CNavVolumeBreadthFirstSearch {
                constexpr std::ptrdiff_t m_vStartPos = 0xA8; // VectorWS
                constexpr std::ptrdiff_t m_flSearchDist = 0xB4; // float32
            }
            // Parent: None
            // Field count: 1
            namespace SceneOpportunityHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: dynpitchvol_base_t
            // Field count: 0
            namespace dynpitchvol_t {
            }
            // Parent: None
            // Field count: 12
            namespace CSAdditionalMatchStats_t {
                constexpr std::ptrdiff_t m_numRoundsSurvivedStreak = 0xF8; // int32
                constexpr std::ptrdiff_t m_maxNumRoundsSurvivedStreak = 0xFC; // int32
                constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x100; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x104; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x108; // int32
                constexpr std::ptrdiff_t m_numFirstKills = 0x10C; // int32
                constexpr std::ptrdiff_t m_numClutchKills = 0x110; // int32
                constexpr std::ptrdiff_t m_numPistolKills = 0x114; // int32
                constexpr std::ptrdiff_t m_numSniperKills = 0x118; // int32
                constexpr std::ptrdiff_t m_iNumSuicides = 0x11C; // int32
                constexpr std::ptrdiff_t m_iNumTeamKills = 0x120; // int32
                constexpr std::ptrdiff_t m_flTeamDamage = 0x124; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AI_Navigator_DebugSnapshotData_t__Waypoint_t {
                constexpr std::ptrdiff_t position = 0x0; // VectorWS
                constexpr std::ptrdiff_t nav_type = 0xC; // uint32
                constexpr std::ptrdiff_t flags = 0x10; // uint32
            }
            // Parent: None
            // Field count: 4
            namespace CSceneCriteria {
                constexpr std::ptrdiff_t m_hOwner = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_ePriority = 0x4; // InteractionPriority_t
                constexpr std::ptrdiff_t m_InterestReqTags = 0x8; // SceneInterestTags_t
                constexpr std::ptrdiff_t m_InterestOptTags = 0x20; // SceneInterestTags_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTestPulseIOComponent {
                constexpr std::ptrdiff_t m_ComponentData = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_OnComponentTestFunc = 0x10; // CEntityOutputTemplate<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 0
            namespace IRagdoll {
            }
            // Parent: None
            // Field count: 16
            namespace CCSPlayerAnimationState {
                constexpr std::ptrdiff_t m_currentMoveType = 0x18; // CCSPlayerAnimationState::MoveType_t
                constexpr std::ptrdiff_t m_groundMoveState = 0x19; // CCSPlayerAnimationState::GroundMoveState_t
                constexpr std::ptrdiff_t m_groundActionDirection = 0x1A; // CCSPlayerAnimationState::Direction_t
                constexpr std::ptrdiff_t m_airAction = 0x1B; // CCSPlayerAnimationState::AirAction_t
                constexpr std::ptrdiff_t m_bWasOnGroundLastUpdate = 0x1C; // bool
                constexpr std::ptrdiff_t m_bWasStationaryLastUpdate = 0x1D; // bool
                constexpr std::ptrdiff_t m_actionStartTick = 0x20; // GameTick_t
                constexpr std::ptrdiff_t m_staticAimTimerStartTick = 0x24; // GameTick_t
                constexpr std::ptrdiff_t m_plantAndTurnStartTick = 0x28; // GameTick_t
                constexpr std::ptrdiff_t m_flTurnOnSpotAngle = 0x2C; // float32
                constexpr std::ptrdiff_t m_flPreviousAimYaw = 0x30; // float32
                constexpr std::ptrdiff_t m_flPreviousHorizontalSpeed = 0x34; // float32
                constexpr std::ptrdiff_t m_flFootIKOffsetLeft = 0x38; // float32
                constexpr std::ptrdiff_t m_flFootIKOffsetRight = 0x3C; // float32
                constexpr std::ptrdiff_t m_flWeaponDropPercentageDueToMovement = 0x40; // float32
                constexpr std::ptrdiff_t m_flWeaponDropSmoothDampVelocity = 0x44; // float32
            }
            // Parent: None
            // Field count: 6
            namespace hudtextparms_t {
                constexpr std::ptrdiff_t color1 = 0x0; // Color
                constexpr std::ptrdiff_t color2 = 0x4; // Color
                constexpr std::ptrdiff_t effect = 0x8; // uint8
                constexpr std::ptrdiff_t channel = 0x9; // uint8
                constexpr std::ptrdiff_t x = 0xC; // float32
                constexpr std::ptrdiff_t y = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphControllerBase {
                constexpr std::ptrdiff_t m_hExternalGraph = 0x10; // ExternalAnimGraphHandle_t
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkVelocityVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePart_DamageLevel {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sBreakablePieceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nBodyGroupValue = 0x10; // int32
                constexpr std::ptrdiff_t m_nHealth = 0x14; // CSkillInt
                constexpr std::ptrdiff_t m_flCriticalDamagePercent = 0x24; // float32
                constexpr std::ptrdiff_t m_nDamagePassthroughType = 0x28; // EDestructiblePartDamagePassThroughType
                constexpr std::ptrdiff_t m_nDestructionDeathBehavior = 0x2C; // DestructiblePartDestructionDeathBehavior_t
                constexpr std::ptrdiff_t m_sCustomDeathHandshake = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bShouldDestroyOnDeath = 0x38; // bool
                constexpr std::ptrdiff_t m_flDeathDestroyTime = 0x3C; // CRangeFloat
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeAll {
            }
            // Parent: None
            // Field count: 2
            namespace CNavVolumeSphere {
                constexpr std::ptrdiff_t m_vCenter = 0x78; // VectorWS
                constexpr std::ptrdiff_t m_flRadius = 0x84; // float32
            }
            // Parent: None
            // Field count: 2
            namespace Relationship_t {
                constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
                constexpr std::ptrdiff_t priority = 0x4; // int32
            }
        }
    }
}
