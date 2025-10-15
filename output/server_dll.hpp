// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 717
        // Enum count: 150
        namespace server_dll {
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
                STANCE_CURRENT = 0xFFFFFFFFFFFFFFFF,
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
                INVALID = 0xFFFFFFFFFFFFFFFF,
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
            // Member count: 7
            enum class EDestructibleParts_DestroyParameterFlags : uint32_t {
                None = 0x0,
                GenerateBreakpieces = 0x1,
                EnableFlinches = 0x2,
                ForceDamageApply = 0x4,
                IgnoreKillEntityFlag = 0x8,
                IgnoreHealthCheck = 0x10,
                Default = 0x3
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
                Default = 0xFFFFFFFFFFFFFFFF,
                CloseCircle = 0x0,
                WideCircle = 0x1,
                MediumCircle = 0x5,
                Sidekick = 0x6
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
                None = 0xFFFFFFFFFFFFFFFF,
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
                ANIM_LOOP_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
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
            // Member count: 17
            enum class BaseExplosionTypes_t : uint32_t {
                EXPLOSION_TYPE_DEFAULT = 0x0,
                EXPLOSION_TYPE_GRENADE = 0x1,
                EXPLOSION_TYPE_MOLOTOV = 0x2,
                EXPLOSION_TYPE_FIREWORKS = 0x3,
                EXPLOSION_TYPE_GASCAN = 0x4,
                EXPLOSION_TYPE_GASCYLINDER = 0x5,
                EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
                EXPLOSION_TYPE_ELECTRICAL = 0x7,
                EXPLOSION_TYPE_EMP = 0x8,
                EXPLOSION_TYPE_SHRAPNEL = 0x9,
                EXPLOSION_TYPE_SMOKEGRENADE = 0xA,
                EXPLOSION_TYPE_FLASHBANG = 0xB,
                EXPLOSION_TYPE_TRIPMINE = 0xC,
                EXPLOSION_TYPE_ICE = 0xD,
                EXPLOSION_TYPE_NONE = 0xE,
                EXPLOSION_TYPE_CUSTOM = 0xF,
                EXPLOSION_TYPE_COUNT = 0x10
            };
            // Alignment: 4
            // Member count: 40
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
                AE_PULSE_GRAPH_LOOKAT = 0x1A,
                AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1B,
                AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1C,
                AE_DISABLE_PLATFORM = 0x1D,
                AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1E,
                AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 0x1F,
                AE_DESTRUCTIBLE_PART_DESTROY = 0x20,
                AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x21,
                AE_SV_ATTACH_SILENCER_COMPLETE = 0x22,
                AE_SV_DETACH_SILENCER_COMPLETE = 0x23,
                AE_CL_EJECT_MAG = 0x24,
                AE_WPN_COMPLETE_RELOAD = 0x25,
                AE_WPN_HEALTHSHOT_INJECT = 0x26,
                AE_GRENADE_THROW_COMPLETE = 0x27
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
            // Member count: 13
            enum class RenderMode_t : uint8_t {
                kRenderNormal = 0x0,
                kRenderTransColor = 0x1,
                kRenderTransTexture = 0x2,
                kRenderGlow = 0x3,
                kRenderTransAlpha = 0x4,
                kRenderTransAdd = 0x5,
                kRenderEnvironmental = 0x6,
                kRenderTransAddFrameBlend = 0x7,
                kRenderTransAlphaAdd = 0x8,
                kRenderWorldGlow = 0x9,
                kRenderNone = 0xA,
                kRenderDevVisualizer = 0xB,
                kRenderModeCount = 0xC
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
                LOADOUT_SLOT_PROMOTED = 0xFFFFFFFFFFFFFFFE,
                LOADOUT_SLOT_INVALID = 0xFFFFFFFFFFFFFFFF,
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
                eInvalid = 0xFFFFFFFFFFFFFFFF,
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
                SS_ONDEATH_NOT_APPLICABLE = 0xFFFFFFFFFFFFFFFF,
                SS_ONDEATH_UNDEFINED = 0x0,
                SS_ONDEATH_RAGDOLL = 0x1,
                SS_ONDEATH_ANIMATED_DEATH = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ChoreoLookAtSpeed_t : uint32_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2
            };
            // Alignment: 4
            // Member count: 17
            enum class gear_slot_t : uint32_t {
                GEAR_SLOT_INVALID = 0xFFFFFFFFFFFFFFFF,
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
                AMMO_POSITION_INVALID = 0xFFFFFFFFFFFFFFFF,
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
                COMBINED = 0xFFFFFFFFFFFFFFFF
            };
            // Alignment: 4
            // Member count: 24
            enum class PreviewEOMCelebration : uint32_t {
                INVALID = 0xFFFFFFFFFFFFFFFF,
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
                ENTITY_DISSOLVE_INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_DISSOLVE_NORMAL = 0x0,
                ENTITY_DISSOLVE_ELECTRICAL = 0x1,
                ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
                ENTITY_DISSOLVE_CORE = 0x3
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
                IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
                IN_USEORRELOAD = 0x100000000,
                IN_SCORE = 0x200000000,
                IN_ZOOM = 0x400000000,
                IN_LOOK_AT_WEAPON = 0x800000000
            };
            // Alignment: 4
            // Member count: 14
            enum class HitGroup_t : uint32_t {
                HITGROUP_INVALID = 0xFFFFFFFFFFFFFFFF,
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
                OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
                OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
                OVERLAY_PROP_DEBUG = 0x200000000,
                OVERLAY_NPC_RELATION_BIT = 0x400000000,
                OVERLAY_VIEWOFFSET = 0x800000000,
                OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
                OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 0x2000000000,
                OVERLAY_ACTORNAME_BIT = 0x4000000000,
                OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
                OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000,
                OVERLAY_MINIMAL_TEXT = 0x20000000000
            };
            // Alignment: 4
            // Member count: 3
            enum class AmmoFlags_t : uint32_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
                AMMO_FLAG_MAX = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class DecalFlags_t : uint32_t {
                eNone = 0x0,
                eCannotClear = 0x1,
                eAll = 0xFFFFFFFF,
                eAllButCannotClear = 0xFFFFFFFE
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
                SUBCLASS_SCOPE_NONE = 0xFFFFFFFFFFFFFFFF,
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
            // Member count: 20
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
                kRenderFxNoDissipation = 0xE,
                kRenderFxFadeOut = 0xF,
                kRenderFxFadeIn = 0x10,
                kRenderFxPulseFastWider = 0x11,
                kRenderFxGlowShell = 0x12,
                kRenderFxMax = 0x13
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
                RUMBLE_INVALID = 0xFFFFFFFFFFFFFFFF,
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
                eInvalid = 0xFFFFFFFFFFFFFFFF,
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
                PlayerNeverConnected = 0xFFFFFFFFFFFFFFFF,
                PlayerConnected = 0x0,
                PlayerConnecting = 0x1,
                PlayerReconnecting = 0x2,
                PlayerDisconnecting = 0x3,
                PlayerDisconnected = 0x4,
                PlayerReserved = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint32_t {
                kMIN_THRESHOLD = 0x0,
                kMIN_FULL = 0x1,
                kHIGHWATER = 0x2
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
            // Member count: 23
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
                DMG_DROWN = 0x4000,
                DMG_POISON = 0x8000,
                DMG_RADIATION = 0x10000,
                DMG_DROWNRECOVER = 0x20000,
                DMG_ACID = 0x40000,
                DMG_PHYSGUN = 0x100000,
                DMG_DISSOLVE = 0x200000,
                DMG_BLAST_SURFACE = 0x400000,
                DMG_LASTGENERICFLAG = 0x400000,
                DMG_HEADSHOT = 0x800000
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
            // Alignment: 4
            // Member count: 3
            enum class eSplinePushType : uint32_t {
                k_eSplinePushAlong = 0x0,
                k_eSplinePushAway = 0x1,
                k_eSplinePushTowards = 0x2
            };
            // Alignment: 2
            // Member count: 28
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
                WPN_ANIMSTATE_END_VALID = 0x44C,
                WEAPON_LEGACY_STATE_CLEAR_FIRING = 0x44D
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
            // Member count: 6
            enum class ShakeCommand_t : uint32_t {
                SHAKE_START = 0x0,
                SHAKE_STOP = 0x1,
                SHAKE_AMPLITUDE = 0x2,
                SHAKE_FREQUENCY = 0x3,
                SHAKE_START_RUMBLEONLY = 0x4,
                SHAKE_START_NORUMBLE = 0x5
            };
            // Alignment: 4
            // Member count: 24
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
                FL_STATICPROP = 0x40000,
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
            // Member count: 20
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
                DMG_LASTDFLAG = 0x8000,
                DFLAG_IGNORE_ARMOR = 0x10000,
                DFLAG_SUPPRESS_UTILREMOVE = 0x20000
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
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            // NetworkVarNames: m_FontName (char)
            // NetworkVarNames: m_BackgroundMaterialName (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFullbright (bool)
            // NetworkVarNames: m_flWorldUnitsPerPx (float)
            // NetworkVarNames: m_flFontSize (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_bDrawBackground (bool)
            // NetworkVarNames: m_flBackgroundBorderWidth (float)
            // NetworkVarNames: m_flBackgroundBorderHeight (float)
            // NetworkVarNames: m_flBackgroundWorldToUV (float)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
            // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
            // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
            namespace CPointWorldText {
                constexpr std::ptrdiff_t m_messageText = 0x7D8; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x9D8; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0xA18; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0xA58; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0xA59; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xA5C; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0xA60; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xA64; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0xA68; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0xA6C; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0xA70; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0xA74; // float32
                constexpr std::ptrdiff_t m_Color = 0xA78; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xA7C; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xA80; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0xA84; // PointWorldTextReorientMode_t
            }
            // Parent: CPointEntity
            // Field count: 10
            namespace CAmbientGeneric {
                constexpr std::ptrdiff_t m_radius = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flMaxRadius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_iSoundLevel = 0x4F8; // soundlevel_t
                constexpr std::ptrdiff_t m_dpv = 0x4FC; // dynpitchvol_t
                constexpr std::ptrdiff_t m_fActive = 0x560; // bool
                constexpr std::ptrdiff_t m_fLooping = 0x561; // bool
                constexpr std::ptrdiff_t m_iszSound = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSourceEntName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSoundSource = 0x578; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x57C; // CEntityIndex
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CEnvEntityMaker {
                constexpr std::ptrdiff_t m_vecEntityMins = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4FC; // Vector
                constexpr std::ptrdiff_t m_hCurrentInstance = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCurrentBlocker = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x510; // Vector
                constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x51C; // QAngle
                constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x528; // float32
                constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x52C; // float32
                constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x530; // bool
                constexpr std::ptrdiff_t m_iszTemplate = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x568; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_iszEnemyName = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRadius = 0x550; // float32
                constexpr std::ptrdiff_t m_flOuterRadius = 0x554; // float32
                constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x558; // int32
                constexpr std::ptrdiff_t m_iszPlayerName = 0x560; // CUtlSymbolLarge
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
                constexpr std::ptrdiff_t m_iszEntry = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPreIdle = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPlay = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostIdle = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszNextScript = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntity = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSyncGroup = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nMoveTo = 0x530; // ScriptedMoveTo_t
                constexpr std::ptrdiff_t m_nMoveToGait = 0x534; // SharedMovementGait_t
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x538; // ScriptedHeldWeaponBehavior_t
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x53C; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x540; // bool
                constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x541; // bool
                constexpr std::ptrdiff_t m_bIsPlayingAction = 0x542; // bool
                constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x543; // bool
                constexpr std::ptrdiff_t m_bDontRotateOther = 0x544; // bool
                constexpr std::ptrdiff_t m_bIsRepeatable = 0x545; // bool
                constexpr std::ptrdiff_t m_bShouldLeaveCorpse = 0x546; // bool
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x547; // bool
                constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x548; // bool
                constexpr std::ptrdiff_t m_bCanOverrideNPCState = 0x549; // bool
                constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x54A; // bool
                constexpr std::ptrdiff_t m_bHighPriority = 0x54B; // bool
                constexpr std::ptrdiff_t m_bHideDebugComplaints = 0x54C; // bool
                constexpr std::ptrdiff_t m_bContinueOnDeath = 0x54D; // bool
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x54E; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x54F; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x550; // bool
                constexpr std::ptrdiff_t m_bSynchPostIdles = 0x551; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x552; // bool
                constexpr std::ptrdiff_t m_bIgnoreGravity = 0x553; // bool
                constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x554; // bool
                constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x555; // bool
                constexpr std::ptrdiff_t m_bDontAddModifiers = 0x556; // bool
                constexpr std::ptrdiff_t m_bDisableAimingWhileMoving = 0x557; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x558; // bool
                constexpr std::ptrdiff_t m_flRadius = 0x55C; // float32
                constexpr std::ptrdiff_t m_flRepeat = 0x560; // float32
                constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x564; // float32
                constexpr std::ptrdiff_t m_flMoveInterpTime = 0x568; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x56C; // float32
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x570; // float32
                constexpr std::ptrdiff_t m_bWaitUntilMoveCompletesToStartAnimation = 0x574; // bool
                constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x578; // int32
                constexpr std::ptrdiff_t m_startTime = 0x57C; // GameTime_t
                constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x580; // bool
                constexpr std::ptrdiff_t m_saved_effects = 0x584; // int32
                constexpr std::ptrdiff_t m_savedFlags = 0x588; // int32
                constexpr std::ptrdiff_t m_savedCollisionGroup = 0x58C; // int32
                constexpr std::ptrdiff_t m_bInterruptable = 0x590; // bool
                constexpr std::ptrdiff_t m_sequenceStarted = 0x591; // bool
                constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x592; // bool
                constexpr std::ptrdiff_t m_hTargetEnt = 0x594; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hNextCine = 0x598; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_bThinking = 0x59C; // bool
                constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x59D; // bool
                constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x59E; // bool
                constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x59F; // bool
                constexpr std::ptrdiff_t m_hForcedTarget = 0x5A0; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x5A4; // bool
                constexpr std::ptrdiff_t m_bForceSynch = 0x5A5; // bool
                constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x5A6; // bool
                constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x5A7; // bool
                constexpr std::ptrdiff_t m_onDeathBehavior = 0x5A8; // ScriptedOnDeath_t
                constexpr std::ptrdiff_t m_ConflictResponse = 0x5AC; // ScriptedConflictResponse_t
                constexpr std::ptrdiff_t m_OnBeginSequence = 0x5B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x5D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndSequence = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x628; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCancelSequence = 0x650; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x678; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnScriptEvent = 0x6A0; // CEntityIOOutput[8]
                constexpr std::ptrdiff_t m_matOtherToMain = 0x7E0; // CTransform
                constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x800; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x804; // int32
                constexpr std::ptrdiff_t m_bSkipFadeIn = 0x808; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CFogTrigger {
                constexpr std::ptrdiff_t m_fog = 0x9A8; // fogparams_t
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
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
                constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CHEGrenade {
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CPhysicsSpring {
                constexpr std::ptrdiff_t m_flFrequency = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flRestLength = 0x500; // float32
                constexpr std::ptrdiff_t m_nameAttachStart = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttachEnd = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_start = 0x518; // VectorWS
                constexpr std::ptrdiff_t m_end = 0x524; // VectorWS
                constexpr std::ptrdiff_t m_teleportTick = 0x530; // uint32
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvMuzzleFlash {
                constexpr std::ptrdiff_t m_flScale = 0x4F0; // float32
                constexpr std::ptrdiff_t m_iszParentAttachment = 0x4F8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
            // NetworkVarNames: m_flValue (float)
            // NetworkVarNames: m_flInitialValue (float)
            // NetworkVarNames: m_nRefundableCurrency (int)
            // NetworkVarNames: m_bSetBonus (bool)
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
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: nTagTick (GameTick_t)
            // NetworkVarNames: flFlinchModSmall (float)
            // NetworkVarNames: flFlinchModLarge (float)
            // NetworkVarNames: flFriendlyFireDamageReductionRatio (float)
            namespace PredictedDamageTag_t {
                constexpr std::ptrdiff_t nTagTick = 0x30; // GameTick_t
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // float32
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // float32
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C; // float32
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x9A8; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0xAC0; // float32
            }
            // Parent: CTonemapController2
            // Field count: 0
            namespace CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CPathTrack {
                constexpr std::ptrdiff_t m_pnext = 0x4F0; // CPathTrack*
                constexpr std::ptrdiff_t m_pprevious = 0x4F8; // CPathTrack*
                constexpr std::ptrdiff_t m_paltpath = 0x500; // CPathTrack*
                constexpr std::ptrdiff_t m_flRadius = 0x508; // float32
                constexpr std::ptrdiff_t m_length = 0x50C; // float32
                constexpr std::ptrdiff_t m_altName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIterVal = 0x518; // int32
                constexpr std::ptrdiff_t m_eOrientationType = 0x51C; // TrackOrientationType_t
                constexpr std::ptrdiff_t m_OnPass = 0x520; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x9A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszMeasureTarget = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fRadius = 0x9B8; // float32
                constexpr std::ptrdiff_t m_nTouchers = 0x9BC; // int32
                constexpr std::ptrdiff_t m_NearestEntityDistance = 0x9C0; // CEntityOutputTemplate<float32>
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CTankTrainAI {
                constexpr std::ptrdiff_t m_hTrain = 0x4F0; // CHandle<CFuncTrackTrain>
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundPlaying = 0x4F8; // int32
                constexpr std::ptrdiff_t m_startSoundName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_engineSoundName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_movementSoundName = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_targetEntityName = 0x528; // CUtlSymbolLarge
            }
            // Parent: CRulePointEntity
            // Field count: 2
            namespace CGameText {
                constexpr std::ptrdiff_t m_iszMessage = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_textParms = 0x7F0; // hudtextparms_t
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
            //
            // Metadata:
            // NetworkVarNames: m_unMusicID (item_definition_index_t)
            // NetworkVarNames: m_rank (MedalRank_t)
            // NetworkVarNames: m_nPersonaDataPublicLevel (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsLeader (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsTeacher (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsFriendly (int)
            // NetworkVarNames: m_nPersonaDataXpTrailLevel (int)
            // NetworkVarNames: m_vecServerAuthoritativeWeaponSlots (ServerAuthoritativeWeaponSlot_t)
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
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_vLookTargetPosition (VectorWS)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace CBaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0xA90; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0xAA8; // VectorWS
                constexpr std::ptrdiff_t m_blinktoggle = 0xAB4; // bool
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0xB08; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0xB0C; // GameTime_t
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0xB10; // SceneEventId_t
                constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0xB14; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_vFanOriginOffset (Vector)
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_bPushTowardsInfoTarget (bool)
            // NetworkVarNames: m_bPushAwayFromInfoTarget (bool)
            // NetworkVarNames: m_qNoiseDelta (Quaternion)
            // NetworkVarNames: m_hInfoFan (CHandle<CInfoFan>)
            // NetworkVarNames: m_flForce (float)
            // NetworkVarNames: m_bFalloff (bool)
            // NetworkVarNames: m_RampTimer (CountdownTimer)
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x9A8; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x9B4; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x9C0; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x9C1; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x9D0; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x9E0; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x9E4; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x9E8; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x9F0; // CountdownTimer
                constexpr std::ptrdiff_t m_vFanOriginWS = 0xA08; // VectorWS
                constexpr std::ptrdiff_t m_vFanOriginLS = 0xA14; // Vector
                constexpr std::ptrdiff_t m_vFanEndLS = 0xA20; // Vector
                constexpr std::ptrdiff_t m_vNoiseDirectionTarget = 0xA2C; // Vector
                constexpr std::ptrdiff_t m_iszInfoFan = 0xA38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRopeForceScale = 0xA40; // float32
                constexpr std::ptrdiff_t m_flParticleForceScale = 0xA44; // float32
                constexpr std::ptrdiff_t m_flPlayerForce = 0xA48; // float32
                constexpr std::ptrdiff_t m_bPlayerWindblock = 0xA4C; // bool
                constexpr std::ptrdiff_t m_flNPCForce = 0xA50; // float32
                constexpr std::ptrdiff_t m_flRampTime = 0xA54; // float32
                constexpr std::ptrdiff_t m_fNoiseDegrees = 0xA58; // float32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0xA5C; // float32
                constexpr std::ptrdiff_t m_bPushPlayer = 0xA60; // bool
                constexpr std::ptrdiff_t m_bRampDown = 0xA61; // bool
                constexpr std::ptrdiff_t m_nManagerFanIdx = 0xA64; // int32
            }
            // Parent: CPhysHinge
            // Field count: 0
            namespace CPhysHingeAlias_phys_hinge_local {
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCase {
                constexpr std::ptrdiff_t m_nCase = 0x4F0; // CUtlSymbolLarge[32]
                constexpr std::ptrdiff_t m_nShuffleCases = 0x5F0; // int32
                constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5F4; // int32
                constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5F8; // uint8[32]
                constexpr std::ptrdiff_t m_OnCase = 0x618; // CEntityIOOutput[32]
                constexpr std::ptrdiff_t m_OnDefault = 0xB18; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CInfoGameEventProxy {
                constexpr std::ptrdiff_t m_iszEventName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRange = 0x4F8; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponBizon {
            }
            // Parent: CRuleBrushEntity
            // Field count: 4
            namespace CGamePlayerZone {
                constexpr std::ptrdiff_t m_OnPlayerInZone = 0x7E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x808; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayersInCount = 0x830; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_PlayersOutCount = 0x858; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            namespace CBaseToggle {
                constexpr std::ptrdiff_t m_toggle_state = 0x7D8; // TOGGLE_STATE
                constexpr std::ptrdiff_t m_flMoveDistance = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flWait = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flLip = 0x7E4; // float32
                constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x7E8; // bool
                constexpr std::ptrdiff_t m_vecPosition1 = 0x7EC; // Vector
                constexpr std::ptrdiff_t m_vecPosition2 = 0x7F8; // Vector
                constexpr std::ptrdiff_t m_vecMoveAng = 0x804; // QAngle
                constexpr std::ptrdiff_t m_vecAngle1 = 0x810; // QAngle
                constexpr std::ptrdiff_t m_vecAngle2 = 0x81C; // QAngle
                constexpr std::ptrdiff_t m_flHeight = 0x828; // float32
                constexpr std::ptrdiff_t m_hActivator = 0x82C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecFinalDest = 0x830; // Vector
                constexpr std::ptrdiff_t m_vecFinalAngle = 0x83C; // QAngle
                constexpr std::ptrdiff_t m_movementType = 0x848; // int32
                constexpr std::ptrdiff_t m_sMaster = 0x850; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            namespace CPulseServerCursor {
                constexpr std::ptrdiff_t m_hActivator = 0xD8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCaller = 0xDC; // CHandle<CBaseEntity>
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
            //
            // Metadata:
            // NetworkVarNames: m_firePositions (Vector)
            // NetworkVarNames: m_fireParentPositions (Vector)
            // NetworkVarNames: m_bFireIsBurning (bool)
            // NetworkVarNames: m_BurnNormal (Vector)
            // NetworkVarNames: m_fireCount (int)
            // NetworkVarNames: m_nInfernoType (int)
            // NetworkVarNames: m_nFireEffectTickBegin (int)
            // NetworkVarNames: m_nFireLifetime (float)
            // NetworkVarNames: m_bInPostEffectTime (bool)
            namespace CInferno {
                constexpr std::ptrdiff_t m_firePositions = 0x7D8; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0xAD8; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xDD8; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0xE18; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1118; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x111C; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1120; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1124; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1128; // bool
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1129; // bool
                constexpr std::ptrdiff_t m_extent = 0x1330; // Extent
                constexpr std::ptrdiff_t m_damageTimer = 0x1348; // CountdownTimer
                constexpr std::ptrdiff_t m_damageRampTimer = 0x1360; // CountdownTimer
                constexpr std::ptrdiff_t m_splashVelocity = 0x1378; // Vector
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x1384; // Vector
                constexpr std::ptrdiff_t m_startPos = 0x1390; // Vector
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x139C; // Vector
                constexpr std::ptrdiff_t m_activeTimer = 0x13A8; // IntervalTimer
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x13B8; // int32
                constexpr std::ptrdiff_t m_nMaxFlames = 0x13BC; // int32
                constexpr std::ptrdiff_t m_nSpreadCount = 0x13C0; // int32
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x13C8; // CountdownTimer
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x13E0; // CountdownTimer
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x13F8; // uint16
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
                constexpr std::ptrdiff_t m_bDisabled = 0x7D8; // bool
                constexpr std::ptrdiff_t m_iszInteractsAs = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszInteractsWith = 0x7E8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerDetectBulletFire {
                constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x9A8; // bool
                constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x9B0; // CEntityIOOutput
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            namespace CCSPlayer_UseServices {
                constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x48; // GameTime_t
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
            //
            // Metadata:
            // NetworkVarNames: m_fFanForceMaxRadius (float)
            // NetworkVarNames: m_fFanForceMinRadius (float)
            // NetworkVarNames: m_flCurveDistRange (float)
            // NetworkVarNames: m_FanForceCurveString (string_t)
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x530; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x534; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x538; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x540; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            namespace CGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_szQuestName = 0x30; // char[128]
                constexpr std::ptrdiff_t m_nQuestPhase = 0xB0; // int32
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xB4; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xB8; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0xBC; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 24
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_x (float32)
            // NetworkVarNames: m_y (float32)
            // NetworkVarNames: m_z (float32)
            // NetworkVarNames: m_angle (float32)
            // NetworkVarNames: m_poolOrigin (Vector)
            // NetworkVarNames: m_waterLevel (float32)
            namespace CFish {
                constexpr std::ptrdiff_t m_pool = 0xA90; // CHandle<CFishPool>
                constexpr std::ptrdiff_t m_id = 0xA94; // uint32
                constexpr std::ptrdiff_t m_x = 0xA98; // float32
                constexpr std::ptrdiff_t m_y = 0xA9C; // float32
                constexpr std::ptrdiff_t m_z = 0xAA0; // float32
                constexpr std::ptrdiff_t m_angle = 0xAA4; // float32
                constexpr std::ptrdiff_t m_angleChange = 0xAA8; // float32
                constexpr std::ptrdiff_t m_forward = 0xAAC; // Vector
                constexpr std::ptrdiff_t m_perp = 0xAB8; // Vector
                constexpr std::ptrdiff_t m_poolOrigin = 0xAC4; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0xAD0; // float32
                constexpr std::ptrdiff_t m_speed = 0xAD4; // float32
                constexpr std::ptrdiff_t m_desiredSpeed = 0xAD8; // float32
                constexpr std::ptrdiff_t m_calmSpeed = 0xADC; // float32
                constexpr std::ptrdiff_t m_panicSpeed = 0xAE0; // float32
                constexpr std::ptrdiff_t m_avoidRange = 0xAE4; // float32
                constexpr std::ptrdiff_t m_turnTimer = 0xAE8; // CountdownTimer
                constexpr std::ptrdiff_t m_turnClockwise = 0xB00; // bool
                constexpr std::ptrdiff_t m_goTimer = 0xB08; // CountdownTimer
                constexpr std::ptrdiff_t m_moveTimer = 0xB20; // CountdownTimer
                constexpr std::ptrdiff_t m_panicTimer = 0xB38; // CountdownTimer
                constexpr std::ptrdiff_t m_disperseTimer = 0xB50; // CountdownTimer
                constexpr std::ptrdiff_t m_proximityTimer = 0xB68; // CountdownTimer
                constexpr std::ptrdiff_t m_visible = 0xB80; // CUtlVector<CFish*>
            }
            // Parent: CBot
            // Field count: 139
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
                constexpr std::ptrdiff_t m_stateTimestamp = 0x4D0; // float32
                constexpr std::ptrdiff_t m_isAttacking = 0x4D4; // bool
                constexpr std::ptrdiff_t m_isOpeningDoor = 0x4D5; // bool
                constexpr std::ptrdiff_t m_taskEntity = 0x4DC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_goalPosition = 0x4EC; // VectorWS
                constexpr std::ptrdiff_t m_goalEntity = 0x4F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_avoid = 0x4FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_avoidTimestamp = 0x500; // float32
                constexpr std::ptrdiff_t m_isStopping = 0x504; // bool
                constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x505; // bool
                constexpr std::ptrdiff_t m_stillTimer = 0x508; // IntervalTimer
                constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x518; // bool
                constexpr std::ptrdiff_t m_pathIndex = 0x5E18; // int32
                constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x5E1C; // GameTime_t
                constexpr std::ptrdiff_t m_repathTimer = 0x5E20; // CountdownTimer
                constexpr std::ptrdiff_t m_avoidFriendTimer = 0x5E38; // CountdownTimer
                constexpr std::ptrdiff_t m_isFriendInTheWay = 0x5E50; // bool
                constexpr std::ptrdiff_t m_politeTimer = 0x5E58; // CountdownTimer
                constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x5E70; // bool
                constexpr std::ptrdiff_t m_pathLadderEnd = 0x5E9C; // float32
                constexpr std::ptrdiff_t m_mustRunTimer = 0x5EE8; // CountdownTimer
                constexpr std::ptrdiff_t m_waitTimer = 0x5F00; // CountdownTimer
                constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x5F18; // CountdownTimer
                constexpr std::ptrdiff_t m_playerTravelDistance = 0x5F30; // float32[64]
                constexpr std::ptrdiff_t m_travelDistancePhase = 0x6030; // uint8
                constexpr std::ptrdiff_t m_hostageEscortCount = 0x61C8; // uint8
                constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x61CC; // float32
                constexpr std::ptrdiff_t m_desiredTeam = 0x61D0; // int32
                constexpr std::ptrdiff_t m_hasJoined = 0x61D4; // bool
                constexpr std::ptrdiff_t m_isWaitingForHostage = 0x61D5; // bool
                constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x61D8; // CountdownTimer
                constexpr std::ptrdiff_t m_waitForHostageTimer = 0x61F0; // CountdownTimer
                constexpr std::ptrdiff_t m_noisePosition = 0x6208; // Vector
                constexpr std::ptrdiff_t m_noiseTravelDistance = 0x6214; // float32
                constexpr std::ptrdiff_t m_noiseTimestamp = 0x6218; // float32
                constexpr std::ptrdiff_t m_noiseSource = 0x6220; // CCSPlayerPawn*
                constexpr std::ptrdiff_t m_noiseBendTimer = 0x6238; // CountdownTimer
                constexpr std::ptrdiff_t m_bentNoisePosition = 0x6250; // Vector
                constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x625C; // bool
                constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6260; // float32
                constexpr std::ptrdiff_t m_lookAheadAngle = 0x6264; // float32
                constexpr std::ptrdiff_t m_forwardAngle = 0x6268; // float32
                constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x626C; // float32
                constexpr std::ptrdiff_t m_lookAtSpot = 0x6274; // Vector
                constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x6284; // float32
                constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6288; // float32
                constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x628C; // float32
                constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6290; // bool
                constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6291; // bool
                constexpr std::ptrdiff_t m_lookAtDesc = 0x6298; // char*
                constexpr std::ptrdiff_t m_peripheralTimestamp = 0x62A0; // float32
                constexpr std::ptrdiff_t m_approachPointCount = 0x6428; // uint8
                constexpr std::ptrdiff_t m_approachPointViewPosition = 0x642C; // Vector
                constexpr std::ptrdiff_t m_viewSteadyTimer = 0x6438; // IntervalTimer
                constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x6450; // CountdownTimer
                constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6470; // CountdownTimer
                constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6490; // float32
                constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x6898; // int32
                constexpr std::ptrdiff_t m_lookPitch = 0x689C; // float32
                constexpr std::ptrdiff_t m_lookPitchVel = 0x68A0; // float32
                constexpr std::ptrdiff_t m_lookYaw = 0x68A4; // float32
                constexpr std::ptrdiff_t m_lookYawVel = 0x68A8; // float32
                constexpr std::ptrdiff_t m_targetSpot = 0x68AC; // Vector
                constexpr std::ptrdiff_t m_targetSpotVelocity = 0x68B8; // Vector
                constexpr std::ptrdiff_t m_targetSpotPredicted = 0x68C4; // Vector
                constexpr std::ptrdiff_t m_aimError = 0x68D0; // QAngle
                constexpr std::ptrdiff_t m_aimGoal = 0x68DC; // QAngle
                constexpr std::ptrdiff_t m_targetSpotTime = 0x68E8; // GameTime_t
                constexpr std::ptrdiff_t m_aimFocus = 0x68EC; // float32
                constexpr std::ptrdiff_t m_aimFocusInterval = 0x68F0; // float32
                constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x68F4; // GameTime_t
                constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x6900; // CountdownTimer
                constexpr std::ptrdiff_t m_enemy = 0x6918; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_isEnemyVisible = 0x691C; // bool
                constexpr std::ptrdiff_t m_visibleEnemyParts = 0x691D; // uint8
                constexpr std::ptrdiff_t m_lastEnemyPosition = 0x6920; // Vector
                constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x692C; // float32
                constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x6930; // float32
                constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x6934; // float32
                constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x6938; // float32
                constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x693C; // float32
                constexpr std::ptrdiff_t m_isLastEnemyDead = 0x6940; // bool
                constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x6944; // int32
                constexpr std::ptrdiff_t m_bomber = 0x6B50; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nearbyFriendCount = 0x6B54; // int32
                constexpr std::ptrdiff_t m_closestVisibleFriend = 0x6B58; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x6B5C; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_attentionInterval = 0x6B60; // IntervalTimer
                constexpr std::ptrdiff_t m_attacker = 0x6B70; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_attackedTimestamp = 0x6B74; // float32
                constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x6B78; // IntervalTimer
                constexpr std::ptrdiff_t m_lastVictimID = 0x6B88; // int32
                constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x6B8C; // bool
                constexpr std::ptrdiff_t m_isRapidFiring = 0x6B8D; // bool
                constexpr std::ptrdiff_t m_equipTimer = 0x6B90; // IntervalTimer
                constexpr std::ptrdiff_t m_zoomTimer = 0x6BA0; // CountdownTimer
                constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x6BB8; // GameTime_t
                constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x6BC0; // CountdownTimer
                constexpr std::ptrdiff_t m_bIsSleeping = 0x6BD8; // bool
                constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x6BD9; // bool
                constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x6BE0; // CountdownTimer
                constexpr std::ptrdiff_t m_enemyQueueIndex = 0x6C98; // uint8
                constexpr std::ptrdiff_t m_enemyQueueCount = 0x6C99; // uint8
                constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x6C9A; // uint8
                constexpr std::ptrdiff_t m_isStuck = 0x6C9B; // bool
                constexpr std::ptrdiff_t m_stuckTimestamp = 0x6C9C; // GameTime_t
                constexpr std::ptrdiff_t m_stuckSpot = 0x6CA0; // Vector
                constexpr std::ptrdiff_t m_wiggleTimer = 0x6CB0; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckJumpTimer = 0x6CC8; // CountdownTimer
                constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x6CE0; // GameTime_t
                constexpr std::ptrdiff_t m_avgVel = 0x6CE4; // float32[10]
                constexpr std::ptrdiff_t m_avgVelIndex = 0x6D0C; // int32
                constexpr std::ptrdiff_t m_avgVelCount = 0x6D10; // int32
                constexpr std::ptrdiff_t m_lastOrigin = 0x6D14; // Vector
                constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x6D24; // float32
                constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x6D28; // float32
                constexpr std::ptrdiff_t m_radioSubject = 0x6D2C; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_radioPosition = 0x6D30; // Vector
                constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x6D3C; // float32
                constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x6D48; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace CHandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x4F4; // bool
            }
            // Parent: CBaseEntity
            // Field count: 48
            namespace CLogicNPCCounter {
                constexpr std::ptrdiff_t m_OnMinCountAll = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCountAll = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactorAll = 0x540; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x568; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_1 = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x5B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactor_1 = 0x5E0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x608; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_2 = 0x630; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x658; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactor_2 = 0x680; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x6A8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_3 = 0x6D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x6F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFactor_3 = 0x720; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x748; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_hSource = 0x770; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x778; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flDistanceMax = 0x780; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x784; // bool
                constexpr std::ptrdiff_t m_nMinCountAll = 0x788; // int32
                constexpr std::ptrdiff_t m_nMaxCountAll = 0x78C; // int32
                constexpr std::ptrdiff_t m_nMinFactorAll = 0x790; // int32
                constexpr std::ptrdiff_t m_nMaxFactorAll = 0x794; // int32
                constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x7A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNPCState_1 = 0x7A8; // int32
                constexpr std::ptrdiff_t m_bInvertState_1 = 0x7AC; // bool
                constexpr std::ptrdiff_t m_nMinCount_1 = 0x7B0; // int32
                constexpr std::ptrdiff_t m_nMaxCount_1 = 0x7B4; // int32
                constexpr std::ptrdiff_t m_nMinFactor_1 = 0x7B8; // int32
                constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x7BC; // int32
                constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x7C4; // float32
                constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x7C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNPCState_2 = 0x7D0; // int32
                constexpr std::ptrdiff_t m_bInvertState_2 = 0x7D4; // bool
                constexpr std::ptrdiff_t m_nMinCount_2 = 0x7D8; // int32
                constexpr std::ptrdiff_t m_nMaxCount_2 = 0x7DC; // int32
                constexpr std::ptrdiff_t m_nMinFactor_2 = 0x7E0; // int32
                constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x7E4; // int32
                constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x7EC; // float32
                constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNPCState_3 = 0x7F8; // int32
                constexpr std::ptrdiff_t m_bInvertState_3 = 0x7FC; // bool
                constexpr std::ptrdiff_t m_nMinCount_3 = 0x800; // int32
                constexpr std::ptrdiff_t m_nMaxCount_3 = 0x804; // int32
                constexpr std::ptrdiff_t m_nMinFactor_3 = 0x808; // int32
                constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x80C; // int32
                constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x814; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            namespace CCSPlayer_RadioServices {
                constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x40; // GameTime_t
                constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
                constexpr std::ptrdiff_t m_bIgnoreRadio = 0x58; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSG556 {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            namespace CRagdollConstraint {
                constexpr std::ptrdiff_t m_xmin = 0x560; // float32
                constexpr std::ptrdiff_t m_xmax = 0x564; // float32
                constexpr std::ptrdiff_t m_ymin = 0x568; // float32
                constexpr std::ptrdiff_t m_ymax = 0x56C; // float32
                constexpr std::ptrdiff_t m_zmin = 0x570; // float32
                constexpr std::ptrdiff_t m_zmax = 0x574; // float32
                constexpr std::ptrdiff_t m_xfriction = 0x578; // float32
                constexpr std::ptrdiff_t m_yfriction = 0x57C; // float32
                constexpr std::ptrdiff_t m_zfriction = 0x580; // float32
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
                constexpr std::ptrdiff_t m_flScale = 0x4F0; // float32
            }
            // Parent: CPointCamera
            // Field count: 1
            namespace CPointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x550; // float32
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
            // Field count: 7
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
            }
            // Parent: CBaseToggle
            // Field count: 13
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace CFuncMoveLinear {
                constexpr std::ptrdiff_t m_authoredPosition = 0x858; // MoveLinearAuthoredPos_t
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x85C; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x868; // Vector
                constexpr std::ptrdiff_t m_soundStart = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundStop = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_currentSound = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flBlockDamage = 0x890; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0x894; // float32
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x8A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x8F0; // bool
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x8F1; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x8F2; // bool
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
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // Parent: CItem
            // Field count: 1
            namespace CScriptItem {
                constexpr std::ptrdiff_t m_MoveTypeOverride = 0xB70; // MoveType_t
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CBaseToggle
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x858; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x880; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x8A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x8D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x8F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x920; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x948; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x970; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0x988; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x990; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0x994; // bool
                constexpr std::ptrdiff_t m_bUseAsyncQueries = 0x9A0; // bool
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CPointPush {
                constexpr std::ptrdiff_t m_bEnabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_flMagnitude = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flConeOfInfluence = 0x500; // float32
                constexpr std::ptrdiff_t m_iszFilterName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x510; // CHandle<CBaseFilter>
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
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x4F8; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x4FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x500; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x504; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x505; // char[18]
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 21
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_RopeFlags (uint16)
            // NetworkVarNames: m_Slack (int16)
            // NetworkVarNames: m_Width (float32)
            // NetworkVarNames: m_TextureScale (float32)
            // NetworkVarNames: m_nSegments (uint8)
            // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
            // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
            // NetworkVarNames: m_Subdiv (uint8)
            // NetworkVarNames: m_nChangeCount (uint8)
            // NetworkVarNames: m_RopeLength (int16)
            // NetworkVarNames: m_fLockedPoints (uint8)
            // NetworkVarNames: m_flScrollSpeed (float32)
            // NetworkVarNames: m_hStartPoint (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hEndPoint (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
            namespace CRopeKeyframe {
                constexpr std::ptrdiff_t m_RopeFlags = 0x7E0; // uint16
                constexpr std::ptrdiff_t m_iNextLinkName = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Slack = 0x7F0; // int16
                constexpr std::ptrdiff_t m_Width = 0x7F4; // float32
                constexpr std::ptrdiff_t m_TextureScale = 0x7F8; // float32
                constexpr std::ptrdiff_t m_nSegments = 0x7FC; // uint8
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x7FD; // bool
                constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x800; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x808; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_Subdiv = 0x810; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x811; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x812; // int16
                constexpr std::ptrdiff_t m_fLockedPoints = 0x814; // uint8
                constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x815; // bool
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x818; // float32
                constexpr std::ptrdiff_t m_bStartPointValid = 0x81C; // bool
                constexpr std::ptrdiff_t m_bEndPointValid = 0x81D; // bool
                constexpr std::ptrdiff_t m_hStartPoint = 0x820; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x824; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x828; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x829; // AttachmentHandle_t
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CSmokeGrenade {
            }
            // Parent: CBaseFlex
            // Field count: 10
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
            namespace CBaseCombatCharacter {
                constexpr std::ptrdiff_t m_bForceServerRagdoll = 0xB20; // bool
                constexpr std::ptrdiff_t m_hMyWearables = 0xB28; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xB40; // float32
                constexpr std::ptrdiff_t m_bApplyStressDamage = 0xB44; // bool
                constexpr std::ptrdiff_t m_bDeathEventsDispatched = 0xB45; // bool
                constexpr std::ptrdiff_t m_pVecRelationships = 0xB88; // CUtlVector<RelationshipOverride_t>*
                constexpr std::ptrdiff_t m_strRelationships = 0xB90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_eHull = 0xB98; // Hull_t
                constexpr std::ptrdiff_t m_nNavHullIdx = 0xB9C; // uint32
                constexpr std::ptrdiff_t m_movementStats = 0xBA0; // CMovementStatsProperty
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x4F1; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x4F2; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x4F3; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x4F4; // bool
            }
            // Parent: 
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
            // Field count: 8
            namespace CTestPulseIO {
                constexpr std::ptrdiff_t m_OnVariantVoid = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantBool = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantInt = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantFloat = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantString = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantColor = 0x5B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVariantVector = 0x5E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAllowEmptyInputs = 0x608; // bool
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
                constexpr std::ptrdiff_t m_hEntity = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iFilterName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x500; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iRefName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hReference = 0x510; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_FindMethod = 0x514; // EntFinderMethod_t
                constexpr std::ptrdiff_t m_OnFoundEntity = 0x518; // CEntityIOOutput
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
            //
            // Metadata:
            // NetworkVarNames: m_bFirstAttack (bool)
            namespace CKnife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x11D0; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicPlayerProxy {
                constexpr std::ptrdiff_t m_hPlayer = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x520; // CEntityIOOutput
                constexpr std::ptrdiff_t m_PlayerDied = 0x548; // CEntityIOOutput
                constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x570; // CEntityOutputTemplate<int32>
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
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<CBaseEntity>
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
                constexpr std::ptrdiff_t m_hSoundscape = 0x9A8; // CHandle<CEnvSoundscapeTriggerable>
                constexpr std::ptrdiff_t m_SoundscapeName = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_spectators = 0x9B8; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: None
            // Field count: 0
            namespace CPointTeleportAPI {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 1
            namespace CHostageExpresserShim {
                constexpr std::ptrdiff_t m_pExpresser = 0xBE0; // CAI_Expresser*
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4F0; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponHKP2000 {
            }
            // Parent: CPhysicsProp
            // Field count: 3
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace CShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_bDebris = 0xE00; // bool
                constexpr std::ptrdiff_t m_hParentShard = 0xE04; // uint32
                constexpr std::ptrdiff_t m_ShardDesc = 0xE08; // shard_model_desc_t
            }
            // Parent: CBaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flParticleSpacing (float)
            // NetworkVarNames: m_flSlack (float)
            // NetworkVarNames: m_flRadius (float)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_nEffectState (int)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_PathNodes_Position (Vector)
            // NetworkVarNames: m_PathNodes_TangentIn (Vector)
            // NetworkVarNames: m_PathNodes_TangentOut (Vector)
            // NetworkVarNames: m_PathNodes_Color (Vector)
            // NetworkVarNames: m_PathNodes_PinEnabled (bool)
            // NetworkVarNames: m_PathNodes_RadiusScale (float)
            namespace CPathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x4F8; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4FC; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x508; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x520; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x524; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x528; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x52C; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x530; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x538; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x540; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x558; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x570; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x588; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x5A0; // CNetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x5B8; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CCredits {
                constexpr std::ptrdiff_t m_OnCreditsDone = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x518; // bool
                constexpr std::ptrdiff_t m_flLogoLength = 0x51C; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponFiveSeven {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CFishPool {
                constexpr std::ptrdiff_t m_fishCount = 0x500; // int32
                constexpr std::ptrdiff_t m_maxRange = 0x504; // float32
                constexpr std::ptrdiff_t m_swimDepth = 0x508; // float32
                constexpr std::ptrdiff_t m_waterLevel = 0x50C; // float32
                constexpr std::ptrdiff_t m_isDormant = 0x510; // bool
                constexpr std::ptrdiff_t m_fishes = 0x518; // CUtlVector<CHandle<CFish>>
                constexpr std::ptrdiff_t m_visTimer = 0x530; // CountdownTimer
            }
            // Parent: CPlayerPawnComponent
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x220; // QAngle
            }
            // Parent: CRagdollProp
            // Field count: 0
            namespace CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CBaseProp
            // Field count: 32
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0xAC8; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0xB08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0xB30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xB58; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xB80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xBA8; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xBAC; // int32
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0xBB0; // QAngle
                constexpr std::ptrdiff_t m_flPressureDelay = 0xBBC; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xBC0; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xBC4; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0xBD0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xBD4; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xBD8; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xBDC; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xBE0; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xBE8; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xBF0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xBF4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xBF8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0xC00; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xC08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xC10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xC18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xC20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xC28; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xC2C; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xC30; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xC34; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszPuntSound = 0xC38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xC40; // bool
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xC41; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace CLightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x7D8; // CLightComponent*
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x508; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x514; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            // NetworkVarNames: m_hGraphDefinitionAG2 (HNmGraphDefinitionStrong)
            // NetworkVarNames: m_bIsUsingAG2 (bool)
            // NetworkVarNames: m_serializedPoseRecipeAG2 (uint8)
            // NetworkVarNames: m_nSerializePoseRecipeSizeAG2 (int)
            // NetworkVarNames: m_nSerializePoseRecipeVersionAG2 (int)
            // NetworkVarNames: m_nGraphCreationFlagsAG2 (uint8)
            // NetworkVarNames: m_nServerGraphDefReloadCountAG2 (int)
            // NetworkVarNames: m_nServerSerializationContextIteration (int)
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x220; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x224; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x228; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x22C; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x230; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x234; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x238; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x23C; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x248; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x24A; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x24B; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x24C; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x250; // GameTime_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x588; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_bIsUsingAG2 = 0x590; // bool
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x598; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x5B0; // int32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x5B4; // int32
                constexpr std::ptrdiff_t m_nGraphCreationFlagsAG2 = 0x5B8; // uint8
                constexpr std::ptrdiff_t m_nServerGraphDefReloadCountAG2 = 0x7A0; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x7A4; // int32
            }
            // Parent: 
            // Field count: 10
            namespace CBuoyancyHelper {
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
                constexpr std::ptrdiff_t m_initialOwner = 0xD50; // CUtlSymbolLarge
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
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace CRectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xB00; // bool
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x548; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x550; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x5A0; // CHandle<CBaseEntity>[10]
            }
            // Parent: CBaseEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bHostageAlive (bool)
            // NetworkVarNames: m_isHostageFollowingSomeone (bool)
            // NetworkVarNames: m_iHostageEntityIDs (CEntityIndex)
            // NetworkVarNames: m_bombsiteCenterA (Vector)
            // NetworkVarNames: m_bombsiteCenterB (Vector)
            // NetworkVarNames: m_hostageRescueX (int)
            // NetworkVarNames: m_hostageRescueY (int)
            // NetworkVarNames: m_hostageRescueZ (int)
            // NetworkVarNames: m_bEndMatchNextMapAllVoted (bool)
            namespace CCSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x4F0; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4FC; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x508; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x538; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x544; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x550; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x560; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x570; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x580; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x581; // bool
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
                constexpr std::ptrdiff_t m_bDisabled = 0x7E0; // bool
                constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x7E4; // int32
            }
            // Parent: CPointEntity
            // Field count: 11
            namespace CMoverPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x4FC; // Vector
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szPathNodeParameter = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnStartFromOrInSegment = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStoppedAtOrInSegment = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPassThrough = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPassThroughForward = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPassThroughReverse = 0x5B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hMover = 0x5E0; // CHandle<CPathMover>
                constexpr std::ptrdiff_t m_xWSPrevParent = 0x5F0; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x518; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x528; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x52C; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x530; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x538; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x578; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x57C; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x588; // uint32
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            namespace CFuncBrush {
                constexpr std::ptrdiff_t m_iSolidity = 0x7D8; // BrushSolidities_e
                constexpr std::ptrdiff_t m_iDisabled = 0x7DC; // int32
                constexpr std::ptrdiff_t m_bSolidBsp = 0x7E0; // bool
                constexpr std::ptrdiff_t m_iszExcludedClass = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bInvertExclusion = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bScriptedMovement = 0x7F1; // bool
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: CBreakable
            // Field count: 15
            namespace CPhysBox {
                constexpr std::ptrdiff_t m_damageType = 0x8B0; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0x8B4; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x8B8; // float32
                constexpr std::ptrdiff_t m_vHoverPosePosition = 0x8BC; // Vector
                constexpr std::ptrdiff_t m_angHoverPoseAngles = 0x8C8; // QAngle
                constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x8D4; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0x8D5; // bool
                constexpr std::ptrdiff_t m_nHoverPoseFlags = 0x8D6; // HoverPoseFlags_t
                constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x8D8; // float32
                constexpr std::ptrdiff_t m_OnDamaged = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMotionEnabled = 0x930; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0x958; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouch = 0x980; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hCarryingPlayer = 0x9A8; // CHandle<CBasePlayerPawn>
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace CSoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x5B8; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x5C4; // Vector
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
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace COmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xB00; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0xB04; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0xB08; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CTriggerVolume {
                constexpr std::ptrdiff_t m_iFilterName = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x7E0; // CHandle<CBaseFilter>
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
                constexpr std::ptrdiff_t m_iMagnitude = 0x7D8; // int32
                constexpr std::ptrdiff_t m_flPlayerDamage = 0x7DC; // float32
                constexpr std::ptrdiff_t m_iRadiusOverride = 0x7E0; // int32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flDamageForce = 0x7E8; // float32
                constexpr std::ptrdiff_t m_hInflictor = 0x7EC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x7F0; // DamageTypes_t
                constexpr std::ptrdiff_t m_bCreateDebris = 0x7F4; // bool
                constexpr std::ptrdiff_t m_iszCustomEffectName = 0x800; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCustomSoundName = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bSuppressParticleImpulse = 0x810; // bool
                constexpr std::ptrdiff_t m_iClassIgnore = 0x814; // Class_T
                constexpr std::ptrdiff_t m_iClassIgnore2 = 0x818; // Class_T
                constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x820; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEntityIgnore = 0x828; // CHandle<CBaseEntity>
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
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace CFootstepControl {
                constexpr std::ptrdiff_t m_source = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0x9B0; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
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
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_szSnapshotFileName (char)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bFrozen (bool)
            // NetworkVarNames: m_flFreezeTransitionDuration (float)
            // NetworkVarNames: m_nStopType (int)
            // NetworkVarNames: m_bAnimateDuringGameplayPause (bool)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flPreSimTime (float32)
            // NetworkVarNames: m_vServerControlPoints (Vector)
            // NetworkVarNames: m_iServerControlPointAssignments (uint8)
            // NetworkVarNames: m_hControlPointEnts (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bNoSave (bool)
            // NetworkVarNames: m_bNoFreeze (bool)
            // NetworkVarNames: m_bNoRamp (bool)
            namespace CParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x7D8; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x9D8; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x9D9; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x9DC; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x9E0; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x9E4; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x9E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x9F0; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x9F4; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x9F8; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xA28; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xA2C; // CHandle<CBaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xB2C; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xB2D; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xB2E; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xB2F; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xB30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xB38; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0xD38; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xD3C; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0xD48; // int32
                constexpr std::ptrdiff_t m_clrTint = 0xD4C; // Color
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            namespace CTriggerBrush {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x7D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x800; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUse = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInputFilter = 0x850; // int32
                constexpr std::ptrdiff_t m_iDontMessageParent = 0x854; // int32
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: 
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace CSoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x500; // Vector
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1Silencer {
            }
            // Parent: 
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flValues (float)
            // NetworkVarNames: m_nValueCounts (int)
            // NetworkVarNames: m_nBucketCount (int)
            // NetworkVarNames: m_flInterval (float)
            // NetworkVarNames: m_flFinalValue (float)
            // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
            // NetworkVarNames: m_bStopped (bool)
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
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
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
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            // NetworkVarNames: m_flFrameRate (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_nNumBeamEnts (uint8)
            // NetworkVarNames: m_hBaseMaterial (HMaterialStrong)
            // NetworkVarNames: m_nHaloIndex (HMaterialStrong)
            // NetworkVarNames: m_nBeamType (BeamType_t)
            // NetworkVarNames: m_nBeamFlags (uint32)
            // NetworkVarNames: m_hAttachEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nAttachIndex (AttachmentHandle_t)
            // NetworkVarNames: m_fWidth (float32)
            // NetworkVarNames: m_fEndWidth (float32)
            // NetworkVarNames: m_fFadeLength (float32)
            // NetworkVarNames: m_fHaloScale (float32)
            // NetworkVarNames: m_fAmplitude (float32)
            // NetworkVarNames: m_fStartFrame (float32)
            // NetworkVarNames: m_fSpeed (float32)
            // NetworkVarNames: m_flFrame (float32)
            // NetworkVarNames: m_nClipStyle (BeamClipStyle_t)
            // NetworkVarNames: m_bTurnedOff (bool)
            // NetworkVarNames: m_vecEndPos (VectorWS)
            namespace CBeam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x7E0; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x7E4; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x7E8; // uint8
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x7F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x7F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x800; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x804; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x808; // CHandle<CBaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x830; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x83C; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x840; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x844; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x848; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x84C; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x850; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x854; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x858; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0x85C; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0x860; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x864; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0x870; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nDissolveType = 0x874; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicEventListener {
                constexpr std::ptrdiff_t m_strEventName = 0x500; // CUtlString
                constexpr std::ptrdiff_t m_bIsEnabled = 0x508; // bool
                constexpr std::ptrdiff_t m_nTeam = 0x50C; // int32
                constexpr std::ptrdiff_t m_OnEventFired = 0x510; // CEntityIOOutput
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
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pWeaponServices (CPlayer_WeaponServices*)
            // NetworkVarNames: m_pItemServices (CPlayer_ItemServices*)
            // NetworkVarNames: m_pAutoaimServices (CPlayer_AutoaimServices*)
            // NetworkVarNames: m_pObserverServices (CPlayer_ObserverServices*)
            // NetworkVarNames: m_pWaterServices (CPlayer_WaterServices*)
            // NetworkVarNames: m_pUseServices (CPlayer_UseServices*)
            // NetworkVarNames: m_pFlashlightServices (CPlayer_FlashlightServices*)
            // NetworkVarNames: m_pCameraServices (CPlayer_CameraServices*)
            // NetworkVarNames: m_pMovementServices (CPlayer_MovementServices*)
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_ServerViewAngleChanges (ViewAngleServerChange_t)
            // NetworkVarNames: m_iHideHUD (uint32)
            // NetworkVarNames: m_skybox3d (sky3dparams_t)
            // NetworkVarNames: m_flDeathTime (GameTime_t)
            // NetworkVarNames: m_hController (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_hDefaultController (CHandle<CBasePlayerController>)
            namespace CBasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xBE0; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0xBE8; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xBF0; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0xBF8; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0xC00; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0xC08; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xC10; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0xC18; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0xC20; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xC30; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0xC98; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0xCA4; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0xCB0; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0xCB8; // sky3dparams_t
                constexpr std::ptrdiff_t m_fTimeLastHurt = 0xD48; // GameTime_t
                constexpr std::ptrdiff_t m_flDeathTime = 0xD4C; // GameTime_t
                constexpr std::ptrdiff_t m_fNextSuicideTime = 0xD50; // GameTime_t
                constexpr std::ptrdiff_t m_fInitHUD = 0xD54; // bool
                constexpr std::ptrdiff_t m_pExpresser = 0xD58; // CAI_Expresser*
                constexpr std::ptrdiff_t m_hController = 0xD60; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0xD64; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xD6C; // float32
                constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xD70; // float32
                constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xD74; // CEntityIndex
                constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xD78; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
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
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x548; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x54C; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x550; // int32
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCSSprite {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMathColorBlend {
                constexpr std::ptrdiff_t m_flInMin = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flInMax = 0x4F4; // float32
                constexpr std::ptrdiff_t m_OutColor1 = 0x4F8; // Color
                constexpr std::ptrdiff_t m_OutColor2 = 0x4FC; // Color
                constexpr std::ptrdiff_t m_OutValue = 0x500; // CEntityOutputTemplate<Color>
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
                constexpr std::ptrdiff_t m_vExtent = 0x7F0; // Vector
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
            //
            // Metadata:
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            namespace CCSObserverPawn {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerActiveWeaponDetect {
                constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x9A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszWeaponClassName = 0x9D0; // CUtlSymbolLarge
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
            // Parent: 
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterialBase (HMaterialStrong)
            // NetworkVarNames: m_hMaterialDamageOverlay (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_vInitialPanelVertices (Vector4D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
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
            //
            // Metadata:
            // NetworkVarNames: m_nUniqueID (int)
            // NetworkVarNames: m_unAccountID (uint32)
            // NetworkVarNames: m_unTraceID (uint32)
            // NetworkVarNames: m_rtGcTime (uint32)
            // NetworkVarNames: m_vecEndPos (Vector)
            // NetworkVarNames: m_vecStart (Vector)
            // NetworkVarNames: m_vecLeft (Vector)
            // NetworkVarNames: m_vecNormal (Vector)
            // NetworkVarNames: m_nPlayer (int)
            // NetworkVarNames: m_nEntity (int)
            // NetworkVarNames: m_nHitbox (int)
            // NetworkVarNames: m_flCreationTime (float)
            // NetworkVarNames: m_nTintID (int)
            // NetworkVarNames: m_nVersion (uint8)
            // NetworkVarNames: m_ubSignature (uint8)
            namespace CPlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0x7D8; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0x7DC; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0x7E0; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0x7E4; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0x7E8; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0x7F4; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x800; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0x80C; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0x818; // int32
                constexpr std::ptrdiff_t m_nEntity = 0x81C; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0x820; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0x824; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x828; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x82C; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x82D; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x7D8; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: CBaseFlex
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
            // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
            // NetworkVarNames: m_nFallbackPaintKit (int)
            // NetworkVarNames: m_nFallbackSeed (int)
            // NetworkVarNames: m_flFallbackWear (float)
            // NetworkVarNames: m_nFallbackStatTrak (int)
            namespace CEconEntity {
                constexpr std::ptrdiff_t m_AttributeManager = 0xB30; // CAttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xE28; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xE2C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xE30; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xE34; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0xE38; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xE3C; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0xE40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xE44; // int32
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CTankTargetChange {
                constexpr std::ptrdiff_t m_newTarget = 0x4F0; // CVariantBase<CVariantDefaultAllocator>
                constexpr std::ptrdiff_t m_newTargetName = 0x500; // CUtlSymbolLarge
            }
            // Parent: CPlayer_WaterServices
            // Field count: 6
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x40; // GameTime_t
                constexpr std::ptrdiff_t m_nDrownDmgRate = 0x44; // int32
                constexpr std::ptrdiff_t m_AirFinishedTime = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x50; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x5C; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CLogicDistanceCheck {
                constexpr std::ptrdiff_t m_iszEntityA = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityB = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flZone1Distance = 0x500; // float32
                constexpr std::ptrdiff_t m_flZone2Distance = 0x504; // float32
                constexpr std::ptrdiff_t m_InZone1 = 0x508; // CEntityIOOutput
                constexpr std::ptrdiff_t m_InZone2 = 0x530; // CEntityIOOutput
                constexpr std::ptrdiff_t m_InZone3 = 0x558; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_Entity_Color (Color)
            // NetworkVarNames: m_Entity_flBrightness (float)
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_hLightProbeTexture_AmbientCube (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SDF (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_DC (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_R (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_G (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_B (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace CEnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1568; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x156C; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1578; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1580; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1588; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1590; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x15A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x15A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x15C8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x15D4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x15E0; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x15E4; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x15E8; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x15EC; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x15F0; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x15F4; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x15F8; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1604; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1608; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x160C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1610; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1614; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1618; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1631; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicDistanceAutosave {
                constexpr std::ptrdiff_t m_iszTargetEntity = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4F8; // float32
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4FC; // bool
                constexpr std::ptrdiff_t m_bCheckCough = 0x4FD; // bool
                constexpr std::ptrdiff_t m_bThinkDangerous = 0x4FE; // bool
                constexpr std::ptrdiff_t m_flDangerousTime = 0x500; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicBranch {
                constexpr std::ptrdiff_t m_bInValue = 0x4F0; // bool
                constexpr std::ptrdiff_t m_Listeners = 0x4F8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_OnTrue = 0x510; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFalse = 0x538; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_trackTop = 0x8A0; // CPathTrack*
                constexpr std::ptrdiff_t m_trackBottom = 0x8A8; // CPathTrack*
                constexpr std::ptrdiff_t m_train = 0x8B0; // CFuncTrackTrain*
                constexpr std::ptrdiff_t m_trackTopName = 0x8B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_trackBottomName = 0x8C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_trainName = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_code = 0x8D0; // TRAIN_CODE
                constexpr std::ptrdiff_t m_targetState = 0x8D4; // int32
                constexpr std::ptrdiff_t m_use = 0x8D8; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 37
            namespace CFuncTrackTrain {
                constexpr std::ptrdiff_t m_ppath = 0x7D8; // CHandle<CPathTrack>
                constexpr std::ptrdiff_t m_length = 0x7DC; // float32
                constexpr std::ptrdiff_t m_vPosPrev = 0x7E0; // Vector
                constexpr std::ptrdiff_t m_angPrev = 0x7EC; // QAngle
                constexpr std::ptrdiff_t m_controlMins = 0x7F8; // Vector
                constexpr std::ptrdiff_t m_controlMaxs = 0x804; // Vector
                constexpr std::ptrdiff_t m_lastBlockPos = 0x810; // Vector
                constexpr std::ptrdiff_t m_lastBlockTick = 0x81C; // int32
                constexpr std::ptrdiff_t m_flVolume = 0x820; // float32
                constexpr std::ptrdiff_t m_flBank = 0x824; // float32
                constexpr std::ptrdiff_t m_oldSpeed = 0x828; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x82C; // float32
                constexpr std::ptrdiff_t m_height = 0x830; // float32
                constexpr std::ptrdiff_t m_maxSpeed = 0x834; // float32
                constexpr std::ptrdiff_t m_dir = 0x838; // float32
                constexpr std::ptrdiff_t m_iszSoundMove = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovePing = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundStart = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundStop = 0x858; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strPathTarget = 0x860; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x868; // float32
                constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x86C; // float32
                constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x870; // GameTime_t
                constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x874; // float32
                constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x878; // float32
                constexpr std::ptrdiff_t m_eOrientationType = 0x87C; // TrainOrientationType_t
                constexpr std::ptrdiff_t m_eVelocityType = 0x880; // TrainVelocityType_t
                constexpr std::ptrdiff_t m_OnStart = 0x898; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNext = 0x8C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x8E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x910; // bool
                constexpr std::ptrdiff_t m_flDesiredSpeed = 0x914; // float32
                constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x918; // GameTime_t
                constexpr std::ptrdiff_t m_flAccelSpeed = 0x91C; // float32
                constexpr std::ptrdiff_t m_flDecelSpeed = 0x920; // float32
                constexpr std::ptrdiff_t m_bAccelToSpeed = 0x924; // bool
                constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x928; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 24
            namespace CEnvInstructorHint {
                constexpr std::ptrdiff_t m_iszName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReplace_Key = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iTimeout = 0x508; // int32
                constexpr std::ptrdiff_t m_iDisplayLimit = 0x50C; // int32
                constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCaption = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszActivatorCaption = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Color = 0x530; // Color
                constexpr std::ptrdiff_t m_fIconOffset = 0x534; // float32
                constexpr std::ptrdiff_t m_fRange = 0x538; // float32
                constexpr std::ptrdiff_t m_iPulseOption = 0x53C; // uint8
                constexpr std::ptrdiff_t m_iAlphaOption = 0x53D; // uint8
                constexpr std::ptrdiff_t m_iShakeOption = 0x53E; // uint8
                constexpr std::ptrdiff_t m_bStatic = 0x53F; // bool
                constexpr std::ptrdiff_t m_bNoOffscreen = 0x540; // bool
                constexpr std::ptrdiff_t m_bForceCaption = 0x541; // bool
                constexpr std::ptrdiff_t m_iInstanceType = 0x544; // int32
                constexpr std::ptrdiff_t m_bSuppressRest = 0x548; // bool
                constexpr std::ptrdiff_t m_iszBinding = 0x550; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x558; // bool
                constexpr std::ptrdiff_t m_bAutoStart = 0x559; // bool
                constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x55A; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace CEnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4F0; // CEnvWindShared
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace CSoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_iszPathCorner = 0x5B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iCountMax = 0x5C0; // int32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x5C4; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x5C8; // float32
                constexpr std::ptrdiff_t m_flDotProductMax = 0x5CC; // float32
                constexpr std::ptrdiff_t m_bPlaying = 0x5D0; // bool
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x5F8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: CPlayer_CameraServices
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iFOV (uint32)
            // NetworkVarNames: m_iFOVStart (uint32)
            // NetworkVarNames: m_flFOVTime (GameTime_t)
            // NetworkVarNames: m_flFOVRate (float32)
            // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x170; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x174; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x178; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x17C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
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
                constexpr std::ptrdiff_t m_iszConnectionTarget = 0x9D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vecConnections = 0x9D8; // CUtlVector<DynamicVolumeDef_t>
                constexpr std::ptrdiff_t m_sTransitionType = 0x9F0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bConnectionsEnabled = 0x9F8; // bool
                constexpr std::ptrdiff_t m_flTargetAreaSearchRadius = 0x9FC; // float32
                constexpr std::ptrdiff_t m_flUpdateDistance = 0xA00; // float32
                constexpr std::ptrdiff_t m_flMaxConnectionDistance = 0xA04; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            namespace CConstraintAnchor {
                constexpr std::ptrdiff_t m_massScale = 0xA90; // float32
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
            // Field count: 122
            //
            // Metadata:
            // MNetworkOutOfPVSUpdates
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
            // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
            // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
            // NetworkVarNames: m_bHasFemaleVoice (bool)
            // NetworkVarNames: m_szLastPlaceName (char)
            // NetworkVarNames: m_bInBuyZone (bool)
            // NetworkVarNames: m_bInHostageRescueZone (bool)
            // NetworkVarNames: m_bInBombZone (bool)
            // NetworkVarNames: m_iRetakesOffering (int)
            // NetworkVarNames: m_iRetakesOfferingCard (int)
            // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
            // NetworkVarNames: m_bRetakesMVPLastRound (bool)
            // NetworkVarNames: m_iRetakesMVPBoostItem (int)
            // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
            // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
            // NetworkVarNames: m_aimPunchAngle (QAngle)
            // NetworkVarNames: m_aimPunchAngleVel (QAngle)
            // NetworkVarNames: m_aimPunchTickBase (GameTick_t)
            // NetworkVarNames: m_aimPunchTickFraction (float)
            // NetworkVarNames: m_bIsBuyMenuOpen (bool)
            // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
            // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
            // NetworkVarNames: m_nRagdollDamageBone (int)
            // NetworkVarNames: m_vRagdollDamageForce (Vector)
            // NetworkVarNames: m_vRagdollDamagePosition (Vector)
            // NetworkVarNames: m_szRagdollDamageWeaponName (char)
            // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
            // NetworkVarNames: m_vRagdollServerOrigin (Vector)
            // NetworkVarNames: m_EconGloves (CEconItemView)
            // NetworkVarNames: m_nEconGlovesChanged (uint8)
            // NetworkVarNames: m_qDeathEyeAngles (QAngle)
            // NetworkVarNames: m_bLeftHanded (bool)
            // NetworkVarNames: m_fSwitchedHandednessTime (GameTime_t)
            // NetworkVarNames: m_flViewmodelOffsetX (float)
            // NetworkVarNames: m_flViewmodelOffsetY (float)
            // NetworkVarNames: m_flViewmodelOffsetZ (float)
            // NetworkVarNames: m_flViewmodelFOV (float)
            // NetworkVarNames: m_bIsWalking (bool)
            // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_bIsScoped (bool)
            // NetworkVarNames: m_bResumeZoom (bool)
            // NetworkVarNames: m_bIsDefusing (bool)
            // NetworkVarNames: m_bIsGrabbingHostage (bool)
            // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
            // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
            // NetworkVarNames: m_bInNoDefuseArea (bool)
            // NetworkVarNames: m_nWhichBombZone (int)
            // NetworkVarNames: m_iShotsFired (int)
            // NetworkVarNames: m_flFlinchStack (float)
            // NetworkVarNames: m_flVelocityModifier (float)
            // NetworkVarNames: m_flHitHeading (float)
            // NetworkVarNames: m_nHitBodyPart (int)
            // NetworkVarNames: m_bWaitForNoAttack (bool)
            // NetworkVarNames: m_bKilledByHeadshot (bool)
            // NetworkVarNames: m_thirdPersonHeading (QAngle)
            // NetworkVarNames: m_flSlopeDropOffset (float)
            // NetworkVarNames: m_flSlopeDropHeight (float)
            // NetworkVarNames: m_vHeadConstraintOffset (Vector)
            // NetworkVarNames: m_ArmorValue (int32)
            // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
            // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
            // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
            // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
            // NetworkVarNames: m_GunGameImmunityColor (Color)
            // NetworkVarNames: m_PredictedDamageTags (PredictedDamageTag_t)
            // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
            // NetworkVarNames: m_bGunGameImmunity (bool)
            // NetworkVarNames: m_fMolotovDamageTime (float)
            // NetworkVarNames: m_angEyeAngles (QAngle)
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0xEE8; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0xEF0; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0xEF8; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0xF00; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pRadioServices = 0xF08; // CCSPlayer_RadioServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0xF10; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_nCharacterDefIndex = 0xF18; // uint16
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xF1A; // bool
                constexpr std::ptrdiff_t m_strVOPrefix = 0xF20; // CUtlString
                constexpr std::ptrdiff_t m_szLastPlaceName = 0xF28; // char[18]
                constexpr std::ptrdiff_t m_bInHostageResetZone = 0xFE8; // bool
                constexpr std::ptrdiff_t m_bInBuyZone = 0xFE9; // bool
                constexpr std::ptrdiff_t m_TouchingBuyZones = 0xFF0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bWasInBuyZone = 0x1008; // bool
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1009; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x100A; // bool
                constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x100B; // bool
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x100C; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1010; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1014; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1015; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x1018; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x101C; // loadout_slot_t
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1020; // GameTime_t
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x1024; // float32
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x1028; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1034; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1040; // GameTick_t
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1044; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1048; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1060; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0x1708; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x170C; // bool
                constexpr std::ptrdiff_t m_iPlayerLocked = 0x1710; // int32
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1718; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x171C; // GameTime_t
                constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x1720; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1724; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1728; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1734; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1740; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1780; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1784; // Vector
                constexpr std::ptrdiff_t m_EconGloves = 0x1790; // CEconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1A38; // uint8
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x1A3C; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x1A48; // bool
                constexpr std::ptrdiff_t m_bLeftHanded = 0x1A49; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x1A4C; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1A50; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1A54; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1A58; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x1A5C; // float32
                constexpr std::ptrdiff_t m_bIsWalking = 0x1A60; // bool
                constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x1A64; // float32
                constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x1A68; // float32
                constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x1A6C; // float32
                constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0x1A70; // uint32
                constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0x1A74; // float32
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1A78; // GameTime_t
                constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x1A7C; // bool
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1A80; // CEntityIndex
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1A88; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1AA0; // int32
                constexpr std::ptrdiff_t m_bIsScoped = 0x1AA4; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1AA5; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1AA6; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1AA7; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1AA8; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1AAC; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1AB0; // bool
                constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1AB4; // CEntityIndex
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1AB8; // int32
                constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1ABC; // bool
                constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1ABD; // bool
                constexpr std::ptrdiff_t m_iShotsFired = 0x1AC0; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1AC4; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1AC8; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x1ACC; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x1AD0; // int32
                constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1AD4; // Vector
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1AE0; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1AE4; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1AE8; // bool
                constexpr std::ptrdiff_t m_LastHitBox = 0x1AEC; // int32
                constexpr std::ptrdiff_t m_LastHealth = 0x1AF0; // int32
                constexpr std::ptrdiff_t m_pBot = 0x1AF8; // CCSBot*
                constexpr std::ptrdiff_t m_bBotAllowActive = 0x1B00; // bool
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1B04; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1B10; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1B14; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1B18; // Vector
                constexpr std::ptrdiff_t m_nLastPickupPriority = 0x1B24; // int32
                constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x1B28; // float32
                constexpr std::ptrdiff_t m_ArmorValue = 0x1B2C; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1B30; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1B32; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1B34; // uint16
                constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1B38; // int32
                constexpr std::ptrdiff_t m_bIsSpawning = 0x1B3C; // bool
                constexpr std::ptrdiff_t m_iDeathFlags = 0x1B48; // int32
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1B4C; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1B50; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1B54; // Vector
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1B60; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1B74; // Color
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1B78; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1B7C; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1B80; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1B8C; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1B98; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1BA4; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1BBC; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1BD4; // Vector[2]
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x1BF0; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x1C58; // int32
                constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1C5C; // bool
                constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1C5D; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1C60; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x1C64; // bool
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1C68; // float32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1C6C; // QAngle
            }
            // Parent: CBaseEntity
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hLightProbeTexture_AmbientCube (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SDF (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_DC (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_R (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_G (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_B (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace CEnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x14E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x14F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x14F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1500; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1508; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1510; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1518; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1530; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x153C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1548; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x154C; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1550; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1554; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1558; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x155C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1560; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1564; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1568; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x156C; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1579; // bool
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 3
            namespace SpawnPoint {
                constexpr std::ptrdiff_t m_iPriority = 0x4F0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x4F4; // bool
                constexpr std::ptrdiff_t m_nType = 0x4F8; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CFuncMoverAPI {
            }
            // Parent: 
            // Field count: 33
            //
            // Metadata:
            // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
            // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
            // NetworkVarNames: m_angRotation (QAngle)
            // NetworkVarNames: m_flScale (float)
            // NetworkVarNames: m_name (CUtlStringToken)
            // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransformWS
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x78; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xC0; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xCC; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0; // VectorWS
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xEC; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xEE; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xEF; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xF0; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xF3; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xF4; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5; // uint8
                constexpr std::ptrdiff_t m_name = 0xF8; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x138; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x13C; // float32
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x140; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x144; // Vector
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
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
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
                constexpr std::ptrdiff_t m_hOwner = 0x190; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bActivated = 0x194; // bool
                constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x198; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sNameFixupParent = 0x1A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sNameFixupLocal = 0x1A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sProceduralWorldNameForRelays = 0x1B0; // CUtlSymbolLarge
            }
            // Parent: CSceneEntity
            // Field count: 0
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4F0; // int8
                constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4F4; // int32
                constexpr std::ptrdiff_t m_bSaveImportant = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bCanTakeDamage = 0x4F9; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hPostSettings (HPostProcessingStrong)
            // NetworkVarNames: m_flFadeDuration (float)
            // NetworkVarNames: m_flMinLogExposure (float)
            // NetworkVarNames: m_flMaxLogExposure (float)
            // NetworkVarNames: m_flMinExposure (float)
            // NetworkVarNames: m_flMaxExposure (float)
            // NetworkVarNames: m_flExposureCompensation (float)
            // NetworkVarNames: m_flExposureFadeSpeedUp (float)
            // NetworkVarNames: m_flExposureFadeSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bExposureControl (bool)
            namespace CPostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x9B8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x9C0; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x9C4; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x9C8; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x9CC; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x9D4; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x9D8; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x9DC; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x9E0; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x9E4; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x9E5; // bool
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPointProximitySensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Distance = 0x4F8; // CEntityOutputTemplate<float32>
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
            //
            // Metadata:
            // NetworkVarNames: m_bTestOcclusion (bool)
            // NetworkVarNames: m_bTestAllVisibleOcclusion (bool)
            namespace CTriggerLook {
                constexpr std::ptrdiff_t m_hLookTarget = 0x9D0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFieldOfView = 0x9D4; // float32
                constexpr std::ptrdiff_t m_flLookTime = 0x9D8; // float32
                constexpr std::ptrdiff_t m_flLookTimeTotal = 0x9DC; // float32
                constexpr std::ptrdiff_t m_flLookTimeLast = 0x9E0; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeoutDuration = 0x9E4; // float32
                constexpr std::ptrdiff_t m_bTimeoutFired = 0x9E8; // bool
                constexpr std::ptrdiff_t m_bIsLooking = 0x9E9; // bool
                constexpr std::ptrdiff_t m_b2DFOV = 0x9EA; // bool
                constexpr std::ptrdiff_t m_bUseVelocity = 0x9EB; // bool
                constexpr std::ptrdiff_t m_bTestOcclusion = 0x9EC; // bool
                constexpr std::ptrdiff_t m_bTestAllVisibleOcclusion = 0x9ED; // bool
                constexpr std::ptrdiff_t m_OnTimeout = 0x9F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartLook = 0xA18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndLook = 0xA40; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlayVCD {
                constexpr std::ptrdiff_t m_hChoreoScene = 0xF0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
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
                constexpr std::ptrdiff_t m_axis = 0x550; // VectorWS
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMultiSource {
                constexpr std::ptrdiff_t m_rgEntities = 0x4F0; // CHandle<CBaseEntity>[32]
                constexpr std::ptrdiff_t m_rgTriggered = 0x570; // int32[32]
                constexpr std::ptrdiff_t m_OnTrigger = 0x5F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iTotal = 0x618; // int32
                constexpr std::ptrdiff_t m_globalstate = 0x620; // CUtlSymbolLarge
            }
            // Parent: CCSWeaponBase
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bRedraw (bool)
            // NetworkVarNames: m_bIsHeldByPlayer (bool)
            // NetworkVarNames: m_bPinPulled (bool)
            // NetworkVarNames: m_bJumpThrow (bool)
            // NetworkVarNames: m_bThrowAnimating (bool)
            // NetworkVarNames: m_fThrowTime (GameTime_t)
            // NetworkVarNames: m_flThrowStrength (float)
            // NetworkVarNames: m_fDropTime (GameTime_t)
            // NetworkVarNames: m_fPinPullTime (GameTime_t)
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            namespace CBaseCSGrenade {
                constexpr std::ptrdiff_t m_bRedraw = 0x11D0; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x11D1; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x11D2; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x11D3; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x11D4; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x11D8; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x11DC; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x11E0; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x11E4; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x11E8; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x11EC; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x11F0; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x11F4; // CHandle<CCSWeaponBase>
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CLogicAuto {
                constexpr std::ptrdiff_t m_OnMapSpawn = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNewGame = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLoadGame = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMapTransition = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBackgroundMap = 0x5B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMultiNewMap = 0x5E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMultiNewRound = 0x608; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVREnabled = 0x630; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x658; // CEntityIOOutput
                constexpr std::ptrdiff_t m_globalstate = 0x680; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CPhysicsWire {
                constexpr std::ptrdiff_t m_nDensity = 0x4F0; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncIllusionary {
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_flRange = 0x4F4; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x4F8; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x4FC; // int32
                constexpr std::ptrdiff_t m_hLight = 0x500; // CHandle<CBaseEntity>
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CMarkupVolume {
                constexpr std::ptrdiff_t m_bDisabled = 0x7D8; // bool
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerRemove {
                constexpr std::ptrdiff_t m_OnRemove = 0x9A8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            namespace CLogicGameEventListener {
                constexpr std::ptrdiff_t m_OnEventFired = 0x500; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszGameEventName = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszGameEventItem = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bEnabled = 0x538; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x539; // bool
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
                constexpr std::ptrdiff_t m_nScopes = 0x818; // NavScopeFlags_t
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerTerrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAutosave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4F0; // bool
                constexpr std::ptrdiff_t m_minHitPoints = 0x4F4; // int32
                constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4F8; // int32
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
                constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0xC0; // bool
            }
            // Parent: 
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iWindSeed (uint32)
            // NetworkVarNames: m_iMinWind (uint16)
            // NetworkVarNames: m_iMaxWind (uint16)
            // NetworkVarNames: m_windRadius (int32)
            // NetworkVarNames: m_iMinGust (uint16)
            // NetworkVarNames: m_iMaxGust (uint16)
            // NetworkVarNames: m_flMinGustDelay (float32)
            // NetworkVarNames: m_flMaxGustDelay (float32)
            // NetworkVarNames: m_flGustDuration (float32)
            // NetworkVarNames: m_iGustDirChange (uint16)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            // NetworkVarNames: m_location (Vector)
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
                constexpr std::ptrdiff_t m_location = 0x30; // Vector
                constexpr std::ptrdiff_t m_OnGustStart = 0x40; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGustEnd = 0x68; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hEntOwner = 0x90; // CHandle<CBaseEntity>
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 6
            namespace CPointPrefab {
                constexpr std::ptrdiff_t m_targetMapName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fixupNames = 0x508; // bool
                constexpr std::ptrdiff_t m_bLoadDynamic = 0x509; // bool
                constexpr std::ptrdiff_t m_associatedRelayEntity = 0x50C; // CHandle<CPointPrefab>
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
                constexpr std::ptrdiff_t m_iszName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iTimeout = 0x500; // int32
                constexpr std::ptrdiff_t m_iszCaption = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStartSound = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iLayoutFileType = 0x518; // int32
                constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iAttachType = 0x528; // int32
                constexpr std::ptrdiff_t m_flHeightOffset = 0x52C; // float32
            }
            // Parent: CGameRulesProxy
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x4F0; // CCSGameRules*
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
                constexpr std::ptrdiff_t m_outCounter = 0x4F0; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_globalstate = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_triggermode = 0x520; // int32
                constexpr std::ptrdiff_t m_initialstate = 0x524; // int32
                constexpr std::ptrdiff_t m_counter = 0x528; // int32
            }
            // Parent: CLogicNPCCounterAABB
            // Field count: 0
            namespace CLogicNPCCounterOBB {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CPlatTrigger {
                constexpr std::ptrdiff_t m_pPlatform = 0x7D8; // CHandle<CFuncPlat>
            }
            // Parent: CPointEntity
            // Field count: 67
            //
            // Metadata:
            // NetworkVarNames: m_bIsPlayingBack (bool)
            // NetworkVarNames: m_bPaused (bool)
            // NetworkVarNames: m_bMultiplayer (bool)
            // NetworkVarNames: m_bAutogenerated (bool)
            // NetworkVarNames: m_flForceClientTime (float32)
            // NetworkVarNames: m_hActorList (CHandle<CBaseFlex>)
            // NetworkVarNames: m_nSceneStringIndex (uint16)
            namespace CSceneEntity {
                constexpr std::ptrdiff_t m_iszSceneFile = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget1 = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget2 = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget3 = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget4 = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget5 = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget6 = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget7 = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget8 = 0x540; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget1 = 0x548; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget2 = 0x54C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget3 = 0x550; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget4 = 0x554; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget5 = 0x558; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget6 = 0x55C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget7 = 0x560; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget8 = 0x564; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_sTargetAttachment = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x570; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x571; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x572; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x573; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x574; // float32
                constexpr std::ptrdiff_t m_flCurrentTime = 0x578; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x57C; // float32
                constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x580; // bool
                constexpr std::ptrdiff_t m_fPitch = 0x584; // float32
                constexpr std::ptrdiff_t m_bAutomated = 0x588; // bool
                constexpr std::ptrdiff_t m_nAutomatedAction = 0x58C; // int32
                constexpr std::ptrdiff_t m_flAutomationDelay = 0x590; // float32
                constexpr std::ptrdiff_t m_flAutomationTime = 0x594; // float32
                constexpr std::ptrdiff_t m_nSpeechPriority = 0x598; // int32
                constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x59C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x5A0; // bool
                constexpr std::ptrdiff_t m_bPausedViaInput = 0x5A1; // bool
                constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x5A2; // bool
                constexpr std::ptrdiff_t m_bWaitingForActor = 0x5A3; // bool
                constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x5A4; // bool
                constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x5A5; // bool
                constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x5A6; // bool
                constexpr std::ptrdiff_t m_bSceneFinished = 0x5A7; // bool
                constexpr std::ptrdiff_t m_hActorList = 0x5A8; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
                constexpr std::ptrdiff_t m_hRemoveActorList = 0x5C0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x608; // int32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x60C; // uint16
                constexpr std::ptrdiff_t m_OnStart = 0x610; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCompletion = 0x638; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCanceled = 0x660; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPaused = 0x688; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnResumed = 0x6B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTrigger = 0x6D8; // CEntityIOOutput[16]
                constexpr std::ptrdiff_t m_hInterruptScene = 0x9E8; // CHandle<CSceneEntity>
                constexpr std::ptrdiff_t m_nInterruptCount = 0x9EC; // int32
                constexpr std::ptrdiff_t m_bSceneMissing = 0x9F0; // bool
                constexpr std::ptrdiff_t m_bInterrupted = 0x9F1; // bool
                constexpr std::ptrdiff_t m_bCompletedEarly = 0x9F2; // bool
                constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x9F3; // bool
                constexpr std::ptrdiff_t m_bRestoring = 0x9F4; // bool
                constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x9F8; // CUtlVector<CHandle<CSceneEntity>>
                constexpr std::ptrdiff_t m_hListManagers = 0xA10; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszSoundName = 0xA28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSequenceName = 0xA30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hActor = 0xA38; // CHandle<CBaseFlex>
                constexpr std::ptrdiff_t m_hActivator = 0xA3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_BusyActor = 0xA40; // int32
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0xA44; // SceneOnPlayerDeath_t
            }
            // Parent: CBaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            namespace CTonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x500; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CMapSharedEnvironment {
                constexpr std::ptrdiff_t m_targetMapName = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: 
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
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
                constexpr std::ptrdiff_t m_OnMagnetAttach = 0xA90; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMagnetDetach = 0xAB8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_massScale = 0xAE0; // float32
                constexpr std::ptrdiff_t m_forceLimit = 0xAE4; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0xAE8; // float32
                constexpr std::ptrdiff_t m_MagnettedEntities = 0xAF0; // CUtlVector<magnetted_objects_t>
                constexpr std::ptrdiff_t m_bActive = 0xB08; // bool
                constexpr std::ptrdiff_t m_bHasHitSomething = 0xB09; // bool
                constexpr std::ptrdiff_t m_flTotalMass = 0xB0C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0xB10; // float32
                constexpr std::ptrdiff_t m_flNextSuckTime = 0xB14; // GameTime_t
                constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0xB18; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CGameGibManager {
                constexpr std::ptrdiff_t m_bAllowNewGibs = 0x508; // bool
                constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x50C; // int32
                constexpr std::ptrdiff_t m_iMaxPieces = 0x510; // int32
                constexpr std::ptrdiff_t m_iLastFrame = 0x514; // int32
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
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace CSkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x4F0; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x580; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x584; // bool
                constexpr std::ptrdiff_t m_pNext = 0x588; // CSkyCamera*
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
                constexpr std::ptrdiff_t m_position2 = 0x560; // VectorWS
                constexpr std::ptrdiff_t m_offset = 0x56C; // Vector[2]
                constexpr std::ptrdiff_t m_addLength = 0x584; // float32
                constexpr std::ptrdiff_t m_gearRatio = 0x588; // float32
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
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            namespace CWeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x11D0; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x11D1; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CCommentaryAuto {
                constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x540; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
                constexpr std::ptrdiff_t m_entity = 0x0; // CHandle<CBaseEntity>
            }
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
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
                constexpr std::ptrdiff_t m_iszStackName = 0x4F0; // CUtlSymbolLarge
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
                constexpr std::ptrdiff_t m_strMeasureTarget = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strMeasureReference = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strTargetReference = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hMeasureReference = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget = 0x510; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTargetReference = 0x514; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flScale = 0x518; // float32
                constexpr std::ptrdiff_t m_nMeasureType = 0x51C; // int32
            }
            // Parent: CCSWeaponBase
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            namespace CC4 {
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0x1200; // Vector
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0x120C; // Vector
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0x1218; // bool
                constexpr std::ptrdiff_t m_bStartedArming = 0x1219; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x121C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1220; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1221; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1228; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1240; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1244; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x124B; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CHostageCarriableProp {
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseFlex
            // Field count: 0
            namespace CBaseFlexAlias_funCBaseFlex {
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x4F4; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CTakeDamageInfoAPI {
            }
            // Parent: CBasePlayerPawn
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_CTouchExpansionComponent (CTouchExpansionComponent::Storage_t)
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            namespace CCSPlayerPawnBase {
                constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xDA0; // CTouchExpansionComponent
                constexpr std::ptrdiff_t m_pPingServices = 0xDF0; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_blindUntilTime = 0xDF8; // GameTime_t
                constexpr std::ptrdiff_t m_blindStartTime = 0xDFC; // GameTime_t
                constexpr std::ptrdiff_t m_iPlayerState = 0xE00; // CSPlayerState
                constexpr std::ptrdiff_t m_bRespawning = 0xEB0; // bool
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xEB1; // bool
                constexpr std::ptrdiff_t m_iNumSpawns = 0xEB4; // int32
                constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xEBC; // float32
                constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0xEC8; // float32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0xECC; // float32
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0xED0; // int32
                constexpr std::ptrdiff_t m_hOriginalController = 0xED4; // CHandle<CCSPlayerController>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x590; // CUtlSymbolLarge
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
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_OnBombExplode = 0x9A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombPlanted = 0x9D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefused = 0x9F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bIsBombSiteB = 0xA20; // bool
                constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0xA21; // bool
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0xA22; // bool
                constexpr std::ptrdiff_t m_szMountTarget = 0xA28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hInstructorHint = 0xA30; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nBombSiteDesignation = 0xA34; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CRuleEntity {
                constexpr std::ptrdiff_t m_iszMaster = 0x7D8; // CUtlSymbolLarge
            }
            // Parent: CPhysForce
            // Field count: 1
            namespace CPhysThruster {
                constexpr std::ptrdiff_t m_localOrigin = 0x550; // Vector
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInfoPlayerStart {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x4F1; // bool
                constexpr std::ptrdiff_t m_pPawnSubclass = 0x4F8; // CGlobalSymbol
            }
            // Parent: CBaseEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x4F4; // bool
                constexpr std::ptrdiff_t m_flSize = 0x4F8; // float32
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x4FC; // bool
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x500; // int32
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x504; // float32
                constexpr std::ptrdiff_t m_flLifetime = 0x508; // GameTime_t
                constexpr std::ptrdiff_t m_hAttacker = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x510; // float32
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x514; // int32
            }
            // Parent: CGameSceneNode
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x170; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x3F0; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3F1; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3F2; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x3F4; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3F8; // uint8
            }
            // Parent: 
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: CBaseToggle
            // Field count: 5
            namespace CBasePlatTrain {
                constexpr std::ptrdiff_t m_NoiseMoving = 0x858; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x860; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_volume = 0x870; // float32
                constexpr std::ptrdiff_t m_flTWidth = 0x874; // float32
                constexpr std::ptrdiff_t m_flTLength = 0x878; // float32
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 4
            namespace CPointTeleport {
                constexpr std::ptrdiff_t m_vSaveOrigin = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_vSaveAngles = 0x4FC; // QAngle
                constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x508; // bool
                constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x509; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_strStartTouchEventName (CUtlString)
            // NetworkVarNames: m_strEndTouchEventName (CUtlString)
            // NetworkVarNames: m_strTriggerID (CUtlString)
            namespace CTriggerGameEvent {
                constexpr std::ptrdiff_t m_strStartTouchEventName = 0x9A8; // CUtlString
                constexpr std::ptrdiff_t m_strEndTouchEventName = 0x9B0; // CUtlString
                constexpr std::ptrdiff_t m_strTriggerID = 0x9B8; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CMessageEntity {
                constexpr std::ptrdiff_t m_radius = 0x4F0; // int32
                constexpr std::ptrdiff_t m_messageText = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_drawText = 0x500; // bool
                constexpr std::ptrdiff_t m_bDeveloperOnly = 0x501; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x502; // bool
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CEnvEntityIgniter {
                constexpr std::ptrdiff_t m_flLifetime = 0x4F0; // float32
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
                constexpr std::ptrdiff_t m_nScopes = 0x840; // NavScopeFlags_t
                constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x841; // bool
                constexpr std::ptrdiff_t m_bSplitNavSpace = 0x842; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CMultiLightProxy {
                constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x500; // float32
                constexpr std::ptrdiff_t m_flBrightnessDelta = 0x504; // float32
                constexpr std::ptrdiff_t m_bPerformScreenFade = 0x508; // bool
                constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x50C; // float32
                constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x510; // float32
                constexpr std::ptrdiff_t m_vecLights = 0x518; // CUtlVector<CHandle<CLightEntity>>
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
                constexpr std::ptrdiff_t m_nForceSkin = 0xE50; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0xE54; // bool
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
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (VectorWS)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (VectorWS)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace CFuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x7D8; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0x7E8; // CUtlVector<CHandle<CInfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0x800; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x80C; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x818; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x824; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x828; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x829; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x82A; // bool
                constexpr std::ptrdiff_t m_surfacePropName = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x838; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x860; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace CFogController {
                constexpr std::ptrdiff_t m_fog = 0x4F0; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x558; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x55C; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CPointTemplateAPI {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            namespace CItem {
                constexpr std::ptrdiff_t m_OnPlayerTouch = 0xA98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xAC0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0xAE8; // bool
                constexpr std::ptrdiff_t m_OnCacheInteraction = 0xAF0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGlovePulled = 0xB18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xB40; // VectorWS
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xB4C; // QAngle
                constexpr std::ptrdiff_t m_bPhysStartAsleep = 0xB58; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CTriggerPush {
                constexpr std::ptrdiff_t m_angPushEntitySpace = 0x9A8; // QAngle
                constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x9B4; // Vector
                constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x9C0; // bool
                constexpr std::ptrdiff_t m_bUsePathSimple = 0x9C1; // bool
                constexpr std::ptrdiff_t m_iszPathSimpleName = 0x9C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathSimple = 0x9D0; // CPathSimple*
                constexpr std::ptrdiff_t m_splinePushType = 0x9D8; // uint32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xA90; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0xA94; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xA98; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xAA0; // CTransform
            }
            // Parent: CPointEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_nResolutionX (int)
            // NetworkVarNames: m_nResolutionY (int)
            // NetworkVarNames: m_szLayoutFileName (string_t)
            // NetworkVarNames: m_RenderAttrName (string_t)
            // NetworkVarNames: m_TargetEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nTargetChangeCount (int)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x4F4; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x4F8; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x510; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x528; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x530; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_szTargetsName = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x550; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: CPointEntity
            // Field count: 16
            namespace CPointAngularVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flThreshold = 0x4F4; // float32
                constexpr std::ptrdiff_t m_nLastCompareResult = 0x4F8; // int32
                constexpr std::ptrdiff_t m_nLastFireResult = 0x4FC; // int32
                constexpr std::ptrdiff_t m_flFireTime = 0x500; // GameTime_t
                constexpr std::ptrdiff_t m_flFireInterval = 0x504; // float32
                constexpr std::ptrdiff_t m_flLastAngVelocity = 0x508; // float32
                constexpr std::ptrdiff_t m_lastOrientation = 0x50C; // QAngle
                constexpr std::ptrdiff_t m_vecAxis = 0x518; // VectorWS
                constexpr std::ptrdiff_t m_bUseHelper = 0x524; // bool
                constexpr std::ptrdiff_t m_AngularVelocity = 0x528; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnLessThan = 0x550; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x578; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x5A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x5C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEqualTo = 0x5F0; // CEntityIOOutput
            }
            // Parent: CBaseEntity
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace CPlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x4FC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x500; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x501; // bool
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
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_nNextPrimaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextPrimaryAttackTickRatio (float32)
            // NetworkVarNames: m_nNextSecondaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextSecondaryAttackTickRatio (float32)
            // NetworkVarNames: m_iClip1 (int32)
            // NetworkVarNames: m_iClip2 (int32)
            // NetworkVarNames: m_pReserveAmmo (int)
            namespace CBasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xE50; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xE54; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xE58; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xE5C; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0xE60; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0xE64; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xE68; // int32[2]
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xE70; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 83
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x440; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x444; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szModel_AG2 = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
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
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x748; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0x750; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x758; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0x760; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0x768; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0x770; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x778; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0x780; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0x788; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0x790; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x798; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x7A0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x7A8; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0x7B0; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flDeployDuration = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x7C8; // float32
                constexpr std::ptrdiff_t m_nBurstShotCount = 0x7CC; // int32
                constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x7D0; // bool
                constexpr std::ptrdiff_t m_nRecoilSeed = 0x7D4; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0x7D8; // int32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x7E4; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x7E8; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x7F1; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0x7F4; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0x7F8; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0x7FC; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0x800; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0x804; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0x808; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x80C; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x810; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0x814; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x818; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0x81C; // float32
                constexpr std::ptrdiff_t m_nDamage = 0x820; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x824; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0x828; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0x82C; // float32
                constexpr std::ptrdiff_t m_flRange = 0x830; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0x834; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x838; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x83C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x840; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x844; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x848; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x84C; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x850; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x854; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0x858; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x85C; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0x868; // CGlobalSymbol
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPhysForce {
                constexpr std::ptrdiff_t m_nameAttach = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_force = 0x500; // float32
                constexpr std::ptrdiff_t m_forceTime = 0x504; // float32
                constexpr std::ptrdiff_t m_attachedObject = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_wasRestored = 0x50C; // bool
                constexpr std::ptrdiff_t m_integrator = 0x510; // CConstantForceController
            }
            // Parent: 
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
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
            //
            // Metadata:
            // NetworkVarNames: m_vecCsViewPunchAngle (QAngle)
            // NetworkVarNames: m_nCsViewPunchAngleTick (GameTick_t)
            // NetworkVarNames: m_flCsViewPunchAngleTickRatio (float32)
            // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
            // NetworkVarNames: m_hColorCorrectionCtrl (CHandle<CColorCorrection>)
            // NetworkVarNames: m_hViewEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hTonemapController (CHandle<CTonemapController2>)
            // NetworkVarNames: m_audio (audioparams_t)
            // NetworkVarNames: m_PostProcessingVolumes (CHandle<CPostProcessingVolume>)
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
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
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x548; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CKeepUpright {
                constexpr std::ptrdiff_t m_worldGoalAxis = 0x4F8; // Vector
                constexpr std::ptrdiff_t m_localTestAxis = 0x504; // Vector
                constexpr std::ptrdiff_t m_nameAttach = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_attachedObject = 0x520; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angularLimit = 0x524; // float32
                constexpr std::ptrdiff_t m_bActive = 0x528; // bool
                constexpr std::ptrdiff_t m_bDampAllRotation = 0x529; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x508; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x50C; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x510; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x514; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x518; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x530; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x548; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x550; // HSCRIPT
            }
            // Parent: CBaseEntity
            // Field count: 36
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nVolumeDepth (int)
            // NetworkVarNames: m_fFirstVolumeSliceThickness (float)
            // NetworkVarNames: m_nIndirectTextureDimX (int)
            // NetworkVarNames: m_nIndirectTextureDimY (int)
            // NetworkVarNames: m_nIndirectTextureDimZ (int)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
            // NetworkVarNames: m_flStartScatterTime (GameTime_t)
            // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
            // NetworkVarNames: m_flStartAnisotropy (float)
            // NetworkVarNames: m_flStartScattering (float)
            // NetworkVarNames: m_flStartDrawDistance (float)
            // NetworkVarNames: m_flDefaultAnisotropy (float)
            // NetworkVarNames: m_flDefaultScattering (float)
            // NetworkVarNames: m_flDefaultDrawDistance (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bEnableIndirect (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            // NetworkVarNames: m_fNoiseSpeed (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_vNoiseScale (Vector)
            // NetworkVarNames: m_fWindSpeed (float)
            // NetworkVarNames: m_vWindDirection (Vector)
            namespace CEnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x4F0; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x4F4; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x500; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x504; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x508; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x50C; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x510; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x514; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x518; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x51C; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x520; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x524; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x530; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x53C; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x540; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x544; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x548; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x54C; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x550; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x554; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x558; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x55C; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x560; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x564; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x565; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x566; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x568; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x570; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x574; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x578; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x57C; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x588; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x58C; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x598; // bool
            }
            // Parent: 
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
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_pInGameMoneyServices (CCSPlayerController_InGameMoneyServices*)
            // NetworkVarNames: m_pInventoryServices (CCSPlayerController_InventoryServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayerController_ActionTrackingServices*)
            // NetworkVarNames: m_pDamageServices (CCSPlayerController_DamageServices*)
            // NetworkVarNames: m_iPing (uint32)
            // NetworkVarNames: m_bHasCommunicationAbuseMute (bool)
            // NetworkVarNames: m_uiCommunicationMuteFlags (uint32)
            // NetworkVarNames: m_szCrosshairCodes (string_t)
            // NetworkVarNames: m_iPendingTeamNum (uint8)
            // NetworkVarNames: m_flForceTeamTime (GameTime_t)
            // NetworkVarNames: m_iCompTeammateColor (int)
            // NetworkVarNames: m_bEverPlayedOnTeam (bool)
            // NetworkVarNames: m_szClan (string_t)
            // NetworkVarNames: m_iCoachingTeam (int)
            // NetworkVarNames: m_nPlayerDominated (uint64)
            // NetworkVarNames: m_nPlayerDominatingMe (uint64)
            // NetworkVarNames: m_iCompetitiveRanking (int)
            // NetworkVarNames: m_iCompetitiveWins (int)
            // NetworkVarNames: m_iCompetitiveRankType (int8)
            // NetworkVarNames: m_iCompetitiveRankingPredicted_Win (int)
            // NetworkVarNames: m_iCompetitiveRankingPredicted_Loss (int)
            // NetworkVarNames: m_iCompetitiveRankingPredicted_Tie (int)
            // NetworkVarNames: m_nEndMatchNextMapVote (int)
            // NetworkVarNames: m_unActiveQuestId (uint16)
            // NetworkVarNames: m_rtActiveMissionPeriod (RTime32)
            // NetworkVarNames: m_nQuestProgressReason (QuestProgress::Reason)
            // NetworkVarNames: m_unPlayerTvControlFlags (uint32)
            // NetworkVarNames: m_nDisconnectionTick (int)
            // NetworkVarNames: m_bControllingBot (bool)
            // NetworkVarNames: m_bHasControlledBotThisRound (bool)
            // NetworkVarNames: m_bCanControlObservedBot (bool)
            // NetworkVarNames: m_hPlayerPawn (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hObserverPawn (CHandle<CCSObserverPawn>)
            // NetworkVarNames: m_bPawnIsAlive (bool)
            // NetworkVarNames: m_iPawnHealth (uint32)
            // NetworkVarNames: m_iPawnArmor (int)
            // NetworkVarNames: m_bPawnHasDefuser (bool)
            // NetworkVarNames: m_bPawnHasHelmet (bool)
            // NetworkVarNames: m_nPawnCharacterDefIndex (item_definition_index_t)
            // NetworkVarNames: m_iPawnLifetimeStart (int)
            // NetworkVarNames: m_iPawnLifetimeEnd (int)
            // NetworkVarNames: m_iPawnBotDifficulty (int)
            // NetworkVarNames: m_hOriginalControllerOfCurrentPawn (CHandle<CCSPlayerController>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_recentKillQueue (uint8)
            // NetworkVarNames: m_nFirstKill (uint8)
            // NetworkVarNames: m_nKillCount (uint8)
            // NetworkVarNames: m_bMvpNoMusic (bool)
            // NetworkVarNames: m_eMvpReason (int)
            // NetworkVarNames: m_iMusicKitID (int)
            // NetworkVarNames: m_iMusicKitMVPs (int)
            // NetworkVarNames: m_iMVPs (int)
            // NetworkVarNames: m_bFireBulletsSeedSynchronized (bool)
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x820; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x828; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x830; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x838; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x840; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x844; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x848; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x858; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x85C; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x860; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x864; // bool
                constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x865; // bool
                constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x868; // int32
                constexpr std::ptrdiff_t m_bTeamChanged = 0x86C; // bool
                constexpr std::ptrdiff_t m_bInSwitchTeam = 0x86D; // bool
                constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x86E; // bool
                constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x86F; // bool
                constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x870; // bool
                constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x871; // bool
                constexpr std::ptrdiff_t m_flLastJoinTeamTime = 0x874; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x880; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x888; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x890; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x898; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x89C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x8A0; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x8A4; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x8A8; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x8AC; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x8B0; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x8B4; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x8B8; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x8BC; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x8C0; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8F0; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8F4; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8F8; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8FC; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x900; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x901; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x902; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x903; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x904; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x905; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x908; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x918; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x919; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x91A; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x91C; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x920; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x924; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x928; // CHandle<CCSObserverPawn>
                constexpr std::ptrdiff_t m_DesiredObserverMode = 0x92C; // int32
                constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x930; // CEntityHandle
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x934; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x938; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x93C; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x940; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x941; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x942; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x944; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x948; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x94C; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x950; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x954; // int32
                constexpr std::ptrdiff_t m_iRoundScore = 0x958; // int32
                constexpr std::ptrdiff_t m_iRoundsWon = 0x95C; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x960; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0x968; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x969; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x96A; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x96C; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x970; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x974; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x978; // int32
                constexpr std::ptrdiff_t m_nUpdateCounter = 0x97C; // int32
                constexpr std::ptrdiff_t m_flSmoothedPing = 0x980; // float32
                constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0x988; // IntervalTimer
                constexpr std::ptrdiff_t m_bShowHints = 0x9A0; // bool
                constexpr std::ptrdiff_t m_iNextTimeCheck = 0x9A4; // int32
                constexpr std::ptrdiff_t m_bJustDidTeamKill = 0x9A8; // bool
                constexpr std::ptrdiff_t m_bPunishForTeamKill = 0x9A9; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0x9AA; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0x9AB; // bool
                constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0x9B0; // float64
                constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0x9B8; // GameTime_t
                constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0x9BC; // GameTime_t
                constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0x9C0; // uint32
                constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0x9C4; // uint32
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0xA69; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysLength {
                constexpr std::ptrdiff_t m_offset = 0x560; // Vector[2]
                constexpr std::ptrdiff_t m_vecAttach = 0x578; // VectorWS
                constexpr std::ptrdiff_t m_addLength = 0x584; // float32
                constexpr std::ptrdiff_t m_minLength = 0x588; // float32
                constexpr std::ptrdiff_t m_totalLength = 0x58C; // float32
                constexpr std::ptrdiff_t m_bEnableCollision = 0x590; // bool
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_aPlayers (CHandle<CBasePlayerPawn>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            namespace CTeam {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x4F0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x508; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x520; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x524; // char[129]
            }
            // Parent: CLogicNPCCounter
            // Field count: 4
            namespace CLogicNPCCounterAABB {
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x830; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x83C; // Vector
                constexpr std::ptrdiff_t m_vOuterMins = 0x848; // Vector
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x854; // Vector
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
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xD70; // CAttributeContainer
                constexpr std::ptrdiff_t m_updateTimer = 0x1068; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckAnchor = 0x1080; // Vector
                constexpr std::ptrdiff_t m_stuckTimer = 0x1090; // CountdownTimer
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0x10A8; // CountdownTimer
                constexpr std::ptrdiff_t m_isOnGround = 0x10C0; // bool
                constexpr std::ptrdiff_t m_vFallVelocity = 0x10C4; // Vector
                constexpr std::ptrdiff_t m_desiredActivity = 0x10D0; // ChickenActivity
                constexpr std::ptrdiff_t m_currentActivity = 0x10D4; // ChickenActivity
                constexpr std::ptrdiff_t m_activityTimer = 0x10D8; // CountdownTimer
                constexpr std::ptrdiff_t m_turnRate = 0x10F0; // float32
                constexpr std::ptrdiff_t m_fleeFrom = 0x10F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0x10F8; // CountdownTimer
                constexpr std::ptrdiff_t m_startleTimer = 0x1110; // CountdownTimer
                constexpr std::ptrdiff_t m_vocalizeTimer = 0x1128; // CountdownTimer
                constexpr std::ptrdiff_t m_flWhenZombified = 0x1140; // GameTime_t
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1144; // bool
                constexpr std::ptrdiff_t m_leader = 0x1148; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1160; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0x1178; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0x1180; // CountdownTimer
                constexpr std::ptrdiff_t m_flLastJumpTime = 0x1198; // float32
                constexpr std::ptrdiff_t m_bInJump = 0x119C; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x31A8; // CountdownTimer
                constexpr std::ptrdiff_t m_vecPathGoal = 0x3240; // Vector
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x324C; // GameTime_t
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x3250; // CountdownTimer
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3270; // CountdownTimer
            }
            // Parent: CPhysicsProp
            // Field count: 5
            namespace CPhysicsPropRespawnable {
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xE00; // VectorWS
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xE0C; // QAngle
                constexpr std::ptrdiff_t m_vOriginalMins = 0xE18; // Vector
                constexpr std::ptrdiff_t m_vOriginalMaxs = 0xE24; // Vector
                constexpr std::ptrdiff_t m_flRespawnDuration = 0xE30; // float32
            }
            // Parent: CBeam
            // Field count: 19
            namespace CEnvBeam {
                constexpr std::ptrdiff_t m_active = 0x878; // int32
                constexpr std::ptrdiff_t m_spriteTexture = 0x880; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszStartEntity = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEndEntity = 0x890; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_life = 0x898; // float32
                constexpr std::ptrdiff_t m_boltWidth = 0x89C; // float32
                constexpr std::ptrdiff_t m_noiseAmplitude = 0x8A0; // float32
                constexpr std::ptrdiff_t m_speed = 0x8A4; // int32
                constexpr std::ptrdiff_t m_restrike = 0x8A8; // float32
                constexpr std::ptrdiff_t m_iszSpriteName = 0x8B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_frameStart = 0x8B8; // int32
                constexpr std::ptrdiff_t m_vEndPointWorld = 0x8BC; // VectorWS
                constexpr std::ptrdiff_t m_vEndPointRelative = 0x8C8; // Vector
                constexpr std::ptrdiff_t m_radius = 0x8D4; // float32
                constexpr std::ptrdiff_t m_TouchType = 0x8D8; // Touch_t
                constexpr std::ptrdiff_t m_iFilterName = 0x8E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x8E8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszDecal = 0x8F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x8F8; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_tonemapControllerName = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTonemapController = 0x9B0; // CEntityHandle
            }
            // Parent: CPointEntity
            // Field count: 10
            namespace CEnvShake {
                constexpr std::ptrdiff_t m_limitToEntity = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Amplitude = 0x4F8; // float32
                constexpr std::ptrdiff_t m_Frequency = 0x4FC; // float32
                constexpr std::ptrdiff_t m_Duration = 0x500; // float32
                constexpr std::ptrdiff_t m_Radius = 0x504; // float32
                constexpr std::ptrdiff_t m_stopTime = 0x508; // GameTime_t
                constexpr std::ptrdiff_t m_nextShake = 0x50C; // GameTime_t
                constexpr std::ptrdiff_t m_currentAmp = 0x510; // float32
                constexpr std::ptrdiff_t m_maxForce = 0x514; // Vector
                constexpr std::ptrdiff_t m_shakeCallback = 0x528; // CPhysicsShake
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 41
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderNormal (Vector)
            // NetworkVarNames: m_nLadderSurfacePropIndex (int)
            // NetworkVarNames: m_flDuckAmount (float)
            // NetworkVarNames: m_flDuckSpeed (float)
            // NetworkVarNames: m_bDuckOverride (bool)
            // NetworkVarNames: m_bDesiresDuck (bool)
            // NetworkVarNames: m_flDuckOffset (float)
            // NetworkVarNames: m_nDuckTimeMsecs (uint32)
            // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
            // NetworkVarNames: m_nJumpTimeMsecs (uint32)
            // NetworkVarNames: m_flLastDuckTime (float)
            // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
            // NetworkVarNames: m_bOldJumpPressed (bool)
            // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
            // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
            // NetworkVarNames: m_flOffsetTickCompleteTime (float)
            // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
            // NetworkVarNames: m_flStamina (float)
            // NetworkVarNames: m_bWasSurfing (bool)
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x280; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x28C; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x290; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x294; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x298; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x299; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x29C; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x2A0; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x2A4; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x2A8; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x2AC; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x2B8; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x2C0; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x2C1; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x2C2; // bool
                constexpr std::ptrdiff_t m_nTraceCount = 0x4D0; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x4D4; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x4D8; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x4DC; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x4E0; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x4E4; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x4FC; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x508; // int32
                constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x50C; // bool
                constexpr std::ptrdiff_t m_iFootsteps = 0x510; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x514; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x518; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x51C; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x520; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x528; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x52C; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x530; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x534; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x538; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x53C; // float32
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x540; // float32
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x544; // float32
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x548; // float32
                constexpr std::ptrdiff_t m_bWasSurfing = 0x54C; // bool
                constexpr std::ptrdiff_t m_vecInputRotated = 0x5DC; // Vector
            }
            // Parent: 
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_unDefIdx (item_definition_index_t)
            // NetworkVarNames: m_nCost (int)
            // NetworkVarNames: m_nPrevArmor (int)
            // NetworkVarNames: m_bPrevHelmet (bool)
            // NetworkVarNames: m_hItem (CEntityHandle)
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerCallback {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x6A8; // CUtlVector<SoundOpvarTraceResult_t>
                constexpr std::ptrdiff_t m_doorwayPairs = 0x6C0; // CUtlVector<AutoRoomDoorwayPairs_t>
                constexpr std::ptrdiff_t m_flSize = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flSizeSqr = 0x6E0; // float32
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
                constexpr std::ptrdiff_t m_OnArrivedAt = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_eSpace = 0x518; // RotatorTargetSpace_t
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CPhysicsEntitySolver {
                constexpr std::ptrdiff_t m_hMovingEntity = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_separationDuration = 0x510; // float32
                constexpr std::ptrdiff_t m_cancelTime = 0x514; // GameTime_t
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCollisionPair {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_includeHierarchy = 0x500; // bool
                constexpr std::ptrdiff_t m_supportMultipleEntitiesWithSameName = 0x501; // bool
                constexpr std::ptrdiff_t m_disabled = 0x502; // bool
                constexpr std::ptrdiff_t m_succeeded = 0x503; // bool
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CTestEffect {
                constexpr std::ptrdiff_t m_iLoop = 0x4F0; // int32
                constexpr std::ptrdiff_t m_iBeam = 0x4F4; // int32
                constexpr std::ptrdiff_t m_pBeam = 0x4F8; // CBeam*[24]
                constexpr std::ptrdiff_t m_flBeamTime = 0x5B8; // GameTime_t[24]
                constexpr std::ptrdiff_t m_flStartTime = 0x618; // GameTime_t
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
            // Field count: 17
            namespace CPropDoorRotating {
                constexpr std::ptrdiff_t m_vecAxis = 0xFF0; // Vector
                constexpr std::ptrdiff_t m_flDistance = 0xFFC; // float32
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x1000; // PropDoorRotatingSpawnPos_t
                constexpr std::ptrdiff_t m_eOpenDirection = 0x1004; // PropDoorRotatingOpenDirection_e
                constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0x1008; // PropDoorRotatingOpenDirection_e
                constexpr std::ptrdiff_t m_flAjarAngle = 0x100C; // float32
                constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0x1010; // QAngle
                constexpr std::ptrdiff_t m_angRotationClosed = 0x101C; // QAngle
                constexpr std::ptrdiff_t m_angRotationOpenForward = 0x1028; // QAngle
                constexpr std::ptrdiff_t m_angRotationOpenBack = 0x1034; // QAngle
                constexpr std::ptrdiff_t m_angGoal = 0x1040; // QAngle
                constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0x104C; // Vector
                constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0x1058; // Vector
                constexpr std::ptrdiff_t m_vecBackBoundsMin = 0x1064; // Vector
                constexpr std::ptrdiff_t m_vecBackBoundsMax = 0x1070; // Vector
                constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0x107C; // bool
                constexpr std::ptrdiff_t m_hEntityBlocker = 0x1080; // CHandle<CEntityBlocker>
            }
            // Parent: CParticleSystem
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flRadiusScale (float32)
            // NetworkVarNames: m_flSelfIllumScale (float32)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
            namespace CEnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0xD50; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0xD54; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0xD58; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0xD5C; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0xD60; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CMathRemap {
                constexpr std::ptrdiff_t m_flInMin = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flInMax = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flOut1 = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flOut2 = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flOldInValue = 0x500; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x504; // bool
                constexpr std::ptrdiff_t m_OutValue = 0x508; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x530; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x558; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFellBelowMin = 0x580; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFellBelowMax = 0x5A8; // CEntityIOOutput
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 8
            namespace CSoundOpvarSetOBBWindEntity {
                constexpr std::ptrdiff_t m_vMins = 0x598; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x5A4; // Vector
                constexpr std::ptrdiff_t m_vDistanceMins = 0x5B0; // Vector
                constexpr std::ptrdiff_t m_vDistanceMaxs = 0x5BC; // Vector
                constexpr std::ptrdiff_t m_flWindMin = 0x5C8; // float32
                constexpr std::ptrdiff_t m_flWindMax = 0x5CC; // float32
                constexpr std::ptrdiff_t m_flWindMapMin = 0x5D0; // float32
                constexpr std::ptrdiff_t m_flWindMapMax = 0x5D4; // float32
            }
            // Parent: 
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
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
                constexpr std::ptrdiff_t m_vExtent = 0x9D0; // Vector
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
                constexpr std::ptrdiff_t m_iLandmark = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x9B0; // bool
                constexpr std::ptrdiff_t m_bMirrorPlayer = 0x9B1; // bool
                constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x9B2; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWall {
                constexpr std::ptrdiff_t m_nState = 0x7D8; // int32
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
            //
            // Metadata:
            // NetworkVarNames: m_nVariant (int)
            // NetworkVarNames: m_nRandom (int)
            // NetworkVarNames: m_nOrdinal (int)
            // NetworkVarNames: m_sWeaponName (CUtlString)
            // NetworkVarNames: m_xuid (XUID)
            // NetworkVarNames: m_agentItem (CEconItemView)
            // NetworkVarNames: m_glovesItem (CEconItemView)
            // NetworkVarNames: m_weaponItem (CEconItemView)
            namespace CCSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x4F0; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x4F4; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x4F8; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x500; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x508; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x510; // CEconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x7B8; // CEconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xA60; // CEconItemView
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
                constexpr std::ptrdiff_t m_iszMessage = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_MessageVolume = 0x4F8; // float32
                constexpr std::ptrdiff_t m_MessageAttenuation = 0x4FC; // int32
                constexpr std::ptrdiff_t m_Radius = 0x500; // float32
                constexpr std::ptrdiff_t m_sNoise = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnShowMessage = 0x510; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPointVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecAxis = 0x4F4; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x500; // bool
                constexpr std::ptrdiff_t m_fPrevVelocity = 0x504; // float32
                constexpr std::ptrdiff_t m_flAvgInterval = 0x508; // float32
                constexpr std::ptrdiff_t m_Velocity = 0x510; // CEntityOutputTemplate<float32>
            }
            // Parent: 
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBaseModelEntityAPI {
            }
            // Parent: CHostageExpresserShim
            // Field count: 39
            //
            // Metadata:
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_vel (Vector)
            // NetworkVarNames: m_isRescued (bool)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_nHostageState (int)
            // NetworkVarNames: m_leader (CHandle<CBaseEntity>)
            // NetworkVarNames: m_reuseTimer (CountdownTimer)
            // NetworkVarNames: m_bHandsHaveBeenCut (bool)
            // NetworkVarNames: m_hHostageGrabber (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_flRescueStartTime (GameTime_t)
            // NetworkVarNames: m_flGrabSuccessTime (GameTime_t)
            // NetworkVarNames: m_flDropStartTime (GameTime_t)
            namespace CHostage {
                constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xC08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xC30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xC58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRescued = 0xC80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_entitySpottedState = 0xCA8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xCC0; // int32
                constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xCC4; // uint32
                constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xCC8; // uint32
                constexpr std::ptrdiff_t m_bRemove = 0xCCC; // bool
                constexpr std::ptrdiff_t m_vel = 0xCD0; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0xCDC; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xCDD; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0xCE0; // int32
                constexpr std::ptrdiff_t m_leader = 0xCE4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_lastLeader = 0xCE8; // CHandle<CCSPlayerPawnBase>
                constexpr std::ptrdiff_t m_reuseTimer = 0xCF0; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xD08; // bool
                constexpr std::ptrdiff_t m_accel = 0xD0C; // Vector
                constexpr std::ptrdiff_t m_isRunning = 0xD18; // bool
                constexpr std::ptrdiff_t m_isCrouching = 0xD19; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0xD20; // CountdownTimer
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xD38; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x2D48; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2D60; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2DF0; // CountdownTimer
                constexpr std::ptrdiff_t m_wiggleTimer = 0x2E10; // CountdownTimer
                constexpr std::ptrdiff_t m_isAdjusted = 0x2E2C; // bool
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2E2D; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x2E30; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x2E34; // GameTime_t
                constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2E38; // Vector
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2E44; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x2E50; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2E54; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x2E58; // GameTime_t
                constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2E5C; // int32
                constexpr std::ptrdiff_t m_nPickupEventCount = 0x2E60; // int32
                constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2E64; // Vector
                constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2E9C; // VectorWS
            }
            // Parent: CTriggerMultiple
            // Field count: 1
            namespace CScriptTriggerMultiple {
                constexpr std::ptrdiff_t m_vExtent = 0x9D0; // Vector
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CEnvSpark {
                constexpr std::ptrdiff_t m_flDelay = 0x4F0; // float32
                constexpr std::ptrdiff_t m_nMagnitude = 0x4F4; // int32
                constexpr std::ptrdiff_t m_nTrailLength = 0x4F8; // int32
                constexpr std::ptrdiff_t m_nType = 0x4FC; // int32
                constexpr std::ptrdiff_t m_OnSpark = 0x500; // CEntityIOOutput
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            // MNetworkReplayCompatField
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CEnvCombinedLightProbeVolume
            // Field count: 0
            namespace CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: CBaseFilter
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget = 0x4F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bActive = 0x4FC; // bool
                constexpr std::ptrdiff_t m_nGoalDirection = 0x500; // PointOrientGoalDirectionType_t
                constexpr std::ptrdiff_t m_nConstraint = 0x504; // PointOrientConstraint_t
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x508; // float32
                constexpr std::ptrdiff_t m_flLastGameTime = 0x50C; // GameTime_t
            }
            // Parent: 
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: scale (int16)
            // NetworkVarNames: origin (Vector)
            // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
            // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
            // NetworkVarNames: fog (fogparams_t)
            // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
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
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_nLastHitDamageLevel = 0x64; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CChangeLevel {
                constexpr std::ptrdiff_t m_sMapName = 0x9A8; // CUtlString
                constexpr std::ptrdiff_t m_sLandmarkName = 0x9B0; // CUtlString
                constexpr std::ptrdiff_t m_OnChangeLevel = 0x9B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bTouched = 0x9E0; // bool
                constexpr std::ptrdiff_t m_bNoTouch = 0x9E1; // bool
                constexpr std::ptrdiff_t m_bNewChapter = 0x9E2; // bool
                constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x9E3; // bool
            }
            // Parent: CBaseToggle
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x858; // QAngle
                constexpr std::ptrdiff_t m_fStayPushed = 0x864; // bool
                constexpr std::ptrdiff_t m_fRotating = 0x865; // bool
                constexpr std::ptrdiff_t m_ls = 0x868; // locksound_t
                constexpr std::ptrdiff_t m_sUseSound = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sLockedSound = 0x890; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sUnlockedSound = 0x898; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sOverrideAnticipationName = 0x8A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bLocked = 0x8A8; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x8A9; // bool
                constexpr std::ptrdiff_t m_flUseLockedTime = 0x8AC; // GameTime_t
                constexpr std::ptrdiff_t m_bSolidBsp = 0x8B0; // bool
                constexpr std::ptrdiff_t m_OnDamaged = 0x8B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPressed = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUseLocked = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnIn = 0x930; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOut = 0x958; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nState = 0x980; // int32
                constexpr std::ptrdiff_t m_hConstraint = 0x984; // CEntityHandle
                constexpr std::ptrdiff_t m_hConstraintParent = 0x988; // CEntityHandle
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x98C; // bool
                constexpr std::ptrdiff_t m_sGlowEntity = 0x990; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_glowEntity = 0x998; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x99C; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x9A0; // CUtlSymbolLarge
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
            // Parent: CBaseFlex
            // Field count: 14
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_bIsLive (bool)
            // NetworkVarNames: m_DmgRadius (float32)
            // NetworkVarNames: m_flDetonateTime (GameTime_t)
            // NetworkVarNames: m_flDamage (float32)
            // NetworkVarNames: m_hThrower (CHandle<CCSPlayerPawn>)
            namespace CBaseGrenade {
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xB28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExplode = 0xB50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0xB78; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xB79; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0xB7A; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0xB7C; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0xB80; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0xB84; // float32
                constexpr std::ptrdiff_t m_flDamage = 0xB88; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0xB90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0xB98; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0xBA4; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0xBBC; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0xBC0; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseTrigger
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_MaxWeight (float32)
            // NetworkVarNames: m_FadeDuration (float32)
            // NetworkVarNames: m_Weight (float32)
            // NetworkVarNames: m_lookupFilename (char)
            namespace CColorCorrectionVolume {
                constexpr std::ptrdiff_t m_MaxWeight = 0x9A8; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x9AC; // float32
                constexpr std::ptrdiff_t m_Weight = 0x9B0; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x9B4; // char[512]
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xBB4; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xBB8; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0xBBC; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xBC0; // GameTime_t
            }
            // Parent: CPlayerControllerComponent
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_flTotalRoundDamageDealt (float)
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xC8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x188; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x18C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x190; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x510; // CBaseAnimGraphController
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
                constexpr std::ptrdiff_t m_fogName = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_postProcessName = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_colorCorrectionName = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0x7F8; // bool
                constexpr std::ptrdiff_t m_bInFogVolumesList = 0x7F9; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x7D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStarted = 0x800; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedStart = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_localRotationVector = 0x850; // RotationVector
                constexpr std::ptrdiff_t m_flFanFriction = 0x85C; // float32
                constexpr std::ptrdiff_t m_flAttenuation = 0x860; // float32
                constexpr std::ptrdiff_t m_flVolume = 0x864; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x868; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x86C; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x870; // float32
                constexpr std::ptrdiff_t m_NoiseRunning = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bReversed = 0x880; // bool
                constexpr std::ptrdiff_t m_bAccelDecel = 0x881; // bool
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x898; // QAngle
                constexpr std::ptrdiff_t m_angStart = 0x8A4; // QAngle
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x8B0; // bool
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x8B4; // Vector
                constexpr std::ptrdiff_t m_vecClientAngles = 0x8C0; // QAngle
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CTimerEntity {
                constexpr std::ptrdiff_t m_OnTimer = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimerHigh = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimerLow = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iDisabled = 0x568; // int32
                constexpr std::ptrdiff_t m_flInitialDelay = 0x56C; // float32
                constexpr std::ptrdiff_t m_flRefireTime = 0x570; // float32
                constexpr std::ptrdiff_t m_bUpDownState = 0x574; // bool
                constexpr std::ptrdiff_t m_iUseRandomTime = 0x578; // int32
                constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x57C; // bool
                constexpr std::ptrdiff_t m_flLowerRandomBound = 0x580; // float32
                constexpr std::ptrdiff_t m_flUpperRandomBound = 0x584; // float32
                constexpr std::ptrdiff_t m_flRemainingTime = 0x588; // float32
                constexpr std::ptrdiff_t m_bPaused = 0x58C; // bool
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
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_flFallVelocity (float32)
            // NetworkVarNames: m_bInCrouch (bool)
            // NetworkVarNames: m_nCrouchState (uint32)
            // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
            // NetworkVarNames: m_bDucked (bool)
            // NetworkVarNames: m_bDucking (bool)
            // NetworkVarNames: m_bInDuckJump (bool)
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x23C; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x240; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x244; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x248; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x24C; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x24D; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x24E; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x250; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x25C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x260; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x270; // int32
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x274; // Vector
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
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
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
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
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
            //
            // Metadata:
            // NetworkVarNames: m_targetCamera (CUtlString)
            // NetworkVarNames: m_nResolutionEnum (int)
            // NetworkVarNames: m_bRenderShadows (bool)
            // NetworkVarNames: m_bUseUniqueColorTarget (bool)
            // NetworkVarNames: m_brushModelName (CUtlString)
            // NetworkVarNames: m_hTargetCamera (EHANDLE)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bDraw3DSkybox (bool)
            namespace CFuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0x7F8; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x800; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0x804; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x805; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0x808; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0x810; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0x814; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x815; // bool
                constexpr std::ptrdiff_t m_bStartEnabled = 0x816; // bool
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CInfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x4F4; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x4F8; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x504; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            namespace CGunTarget {
                constexpr std::ptrdiff_t m_on = 0x858; // bool
                constexpr std::ptrdiff_t m_hTargetEnt = 0x85C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnDeath = 0x860; // CEntityIOOutput
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
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace CDecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0xC58; // int32
                constexpr std::ptrdiff_t m_shotsRemaining = 0xC5C; // int32
                constexpr std::ptrdiff_t m_fExpireTime = 0xC60; // GameTime_t
                constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xC70; // uint16
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CPrecipitationBlocker {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 3
            namespace CSoundOpvarSetPathCornerEntity {
                constexpr std::ptrdiff_t m_flDistMinSqr = 0x6C0; // float32
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x6C4; // float32
                constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x6C8; // CUtlSymbolLarge
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
            // Parent: 
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nBodyGroupChoices (int32)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x125; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x1D0; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x220; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x26A; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x26B; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x26C; // int8
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
            // Parent: 
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
            // NetworkVarNames: m_vecMins (Vector)
            // NetworkVarNames: m_vecMaxs (Vector)
            // NetworkVarNames: m_usSolidFlags (uint8)
            // NetworkVarNames: m_nSolidType (SolidType_t)
            // NetworkVarNames: m_triggerBloat (uint8)
            // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
            // NetworkVarNames: m_CollisionGroup (uint8)
            // NetworkVarNames: m_nEnablePhysics (uint8)
            // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
            // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
            // NetworkVarNames: m_vCapsuleCenter1 (Vector)
            // NetworkVarNames: m_vCapsuleCenter2 (Vector)
            // NetworkVarNames: m_flCapsuleRadius (float)
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
                constexpr std::ptrdiff_t m_fFilterMass = 0x548; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP7 {
            }
            // Parent: CCSWeaponBase
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            // NetworkVarNames: m_nRevolverCylinderIdx (int32)
            namespace CCSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x11D0; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x11D4; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x11E0; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x11E4; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x11E5; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x11E8; // int32
                constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0x11EC; // bool
                constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0x11ED; // bool
                constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0x11EE; // bool
                constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0x11EF; // bool
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CEnableMotionFixup {
            }
            // Parent: CLogicAutosave
            // Field count: 4
            namespace CLogicActiveAutosave {
                constexpr std::ptrdiff_t m_TriggerHitPoints = 0x500; // int32
                constexpr std::ptrdiff_t m_flTimeToTrigger = 0x504; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x508; // GameTime_t
                constexpr std::ptrdiff_t m_flDangerousTime = 0x50C; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CMathCounter {
                constexpr std::ptrdiff_t m_flMin = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x4F4; // float32
                constexpr std::ptrdiff_t m_bHitMin = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bHitMax = 0x4F9; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x4FA; // bool
                constexpr std::ptrdiff_t m_OutValue = 0x500; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGetValue = 0x528; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnHitMin = 0x550; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHitMax = 0x578; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnChangedFromMin = 0x5A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnChangedFromMax = 0x5C8; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CPointEntity
            // Field count: 13
            namespace CNavLinkAreaEntity {
                constexpr std::ptrdiff_t m_flWidth = 0x4F0; // float32
                constexpr std::ptrdiff_t m_vLocatorOffset = 0x4F4; // VectorWS
                constexpr std::ptrdiff_t m_qLocatorAnglesOffset = 0x500; // QAngle
                constexpr std::ptrdiff_t m_strMovementForward = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strMovementReverse = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bEnabled = 0x550; // bool
                constexpr std::ptrdiff_t m_bAllowCrossMovableConnections = 0x551; // bool
                constexpr std::ptrdiff_t m_strFilterName = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x560; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnNavLinkStart = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNavLinkFinish = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bIsTerminus = 0x5B8; // bool
                constexpr std::ptrdiff_t m_nSplits = 0x5BC; // int32
            }
            // Parent: CAttributeManager
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace CAttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // CEconItemView
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0x7F0; // CUtlSymbolLarge
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
                constexpr std::ptrdiff_t m_iFilterContext = 0x548; // CUtlSymbolLarge
            }
            // Parent: CLightDirectionalEntity
            // Field count: 0
            namespace CLightEnvironmentEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_hDecalMaterial (HMaterialStrong)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDepth (float)
            // NetworkVarNames: m_nRenderOrder (uint32)
            // NetworkVarNames: m_bProjectOnWorld (bool)
            // NetworkVarNames: m_bProjectOnCharacters (bool)
            // NetworkVarNames: m_bProjectOnWater (bool)
            // NetworkVarNames: m_flDepthSortBias (float)
            namespace CEnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x7E8; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0x7EC; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x7F1; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x7F2; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x7F4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIndirectUseLPVs (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            // NetworkVarNames: m_flHeightFogDepth (float)
            // NetworkVarNames: m_fHeightFogEdgeWidth (float)
            // NetworkVarNames: m_fIndirectLightStrength (float)
            // NetworkVarNames: m_fSunLightStrength (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_bOverrideTintColor (bool)
            // NetworkVarNames: m_bOverrideIndirectLightStrength (bool)
            // NetworkVarNames: m_bOverrideSunLightStrength (bool)
            // NetworkVarNames: m_bOverrideNoiseStrength (bool)
            namespace CEnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4F0; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x4F4; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x500; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x50C; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x50D; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x510; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x514; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x518; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x51C; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x520; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x524; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x528; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x52C; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x530; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x534; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x535; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x536; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x537; // bool
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
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
            }
            // Parent: CItem
            // Field count: 32
            namespace CItemGeneric {
                constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xB84; // bool
                constexpr std::ptrdiff_t m_bHasPickupRadius = 0xB85; // bool
                constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xB88; // float32
                constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xB8C; // float32
                constexpr std::ptrdiff_t m_flLastPickupCheck = 0xB90; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xB94; // bool
                constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xB95; // bool
                constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xB98; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xBA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xBA8; // bool
                constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xBB0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xBB8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xBC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xBC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xBD0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xBD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xBE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pPickupFilterName = 0xBE8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPickupFilter = 0xBF0; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnPickup = 0xBF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTimeout = 0xC20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xC48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerTouch = 0xC70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xC98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xCC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPickupRadius = 0xCC8; // float32
                constexpr std::ptrdiff_t m_flTriggerRadius = 0xCCC; // float32
                constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xCD0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xCD8; // bool
                constexpr std::ptrdiff_t m_glowColor = 0xCD9; // Color
                constexpr std::ptrdiff_t m_bUseable = 0xCDD; // bool
                constexpr std::ptrdiff_t m_hTriggerHelper = 0xCE0; // CHandle<CItemGenericTriggerHelper>
            }
            // Parent: CBaseEntity
            // Field count: 44
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bUpdateOnClient (bool)
            // NetworkVarNames: m_nInputType (ValueRemapperInputType_t)
            // NetworkVarNames: m_hRemapLineStart (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hRemapLineEnd (CHandle<CBaseEntity>)
            // NetworkVarNames: m_flMaximumChangePerSecond (float)
            // NetworkVarNames: m_flDisengageDistance (float)
            // NetworkVarNames: m_flEngageDistance (float)
            // NetworkVarNames: m_bRequiresUseKey (bool)
            // NetworkVarNames: m_nOutputType (ValueRemapperOutputType_t)
            // NetworkVarNames: m_hOutputEntities (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
            // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
            // NetworkVarNames: m_flMomentumModifier (float)
            // NetworkVarNames: m_flSnapValue (float)
            // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
            // NetworkVarNames: m_flInputOffset (float)
            namespace CPointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4F1; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x4F4; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x510; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x514; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x518; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x51C; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x520; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_iszOutputEntityName = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x540; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOutputEntities = 0x548; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x560; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x564; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x568; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x56C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x570; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x574; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x578; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x57C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x580; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x581; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x584; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x588; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x58C; // Vector
                constexpr std::ptrdiff_t m_hUsingPlayer = 0x598; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flCustomOutputValue = 0x59C; // float32
                constexpr std::ptrdiff_t m_iszSoundEngage = 0x5A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundDisengage = 0x5A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x5B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x5B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x5C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Position = 0x5E0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PositionDelta = 0x608; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnReachedValueZero = 0x630; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueOne = 0x658; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x680; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEngage = 0x6A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDisengage = 0x6D0; // CEntityIOOutput
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
            // Field count: 26
            //
            // Metadata:
            // NetworkVarNames: m_ragEnabled (bool)
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            namespace CRagdollProp {
                constexpr std::ptrdiff_t m_ragdoll = 0xAA0; // ragdoll_t
                constexpr std::ptrdiff_t m_bStartDisabled = 0xAF0; // bool
                constexpr std::ptrdiff_t m_ragEnabled = 0xAF8; // CNetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0xB10; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0xB28; // CNetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_lastUpdateTickCount = 0xB40; // uint32
                constexpr std::ptrdiff_t m_allAsleep = 0xB44; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xB45; // bool
                constexpr std::ptrdiff_t m_hDamageEntity = 0xB48; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hKiller = 0xB4C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xB50; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xB54; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeOutStartTime = 0xB58; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeTime = 0xB5C; // float32
                constexpr std::ptrdiff_t m_vecLastOrigin = 0xB60; // VectorWS
                constexpr std::ptrdiff_t m_flAwakeTime = 0xB6C; // GameTime_t
                constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0xB70; // GameTime_t
                constexpr std::ptrdiff_t m_strOriginClassName = 0xB78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strSourceClassName = 0xB80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0xB88; // bool
                constexpr std::ptrdiff_t m_bAllowStretch = 0xB89; // bool
                constexpr std::ptrdiff_t m_flBlendWeight = 0xB8C; // float32
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xB90; // float32
                constexpr std::ptrdiff_t m_ragdollMins = 0xB98; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_ragdollMaxs = 0xBB0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xBC8; // bool
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: CBasePlatTrain
            // Field count: 6
            namespace CFuncTrain {
                constexpr std::ptrdiff_t m_hCurrentTarget = 0x880; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_activated = 0x884; // bool
                constexpr std::ptrdiff_t m_hEnemy = 0x888; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flBlockDamage = 0x88C; // float32
                constexpr std::ptrdiff_t m_flNextBlockTime = 0x890; // GameTime_t
                constexpr std::ptrdiff_t m_iszLastTarget = 0x898; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CAI_ChangeHintGroup {
                constexpr std::ptrdiff_t m_iSearchType = 0x4F0; // int32
                constexpr std::ptrdiff_t m_strSearchName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strNewHintGroup = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flRadius = 0x508; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAug {
            }
            // Parent: CPhysConstraint
            // Field count: 18
            namespace CPhysHinge {
                constexpr std::ptrdiff_t m_soundInfo = 0x568; // ConstraintSoundInfo
                constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x628; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAtMinLimit = 0x650; // bool
                constexpr std::ptrdiff_t m_bAtMaxLimit = 0x651; // bool
                constexpr std::ptrdiff_t m_hinge = 0x654; // constraint_hingeparams_t
                constexpr std::ptrdiff_t m_hingeFriction = 0x694; // float32
                constexpr std::ptrdiff_t m_systemLoadScale = 0x698; // float32
                constexpr std::ptrdiff_t m_bIsAxisLocal = 0x69C; // bool
                constexpr std::ptrdiff_t m_flMinRotation = 0x6A0; // float32
                constexpr std::ptrdiff_t m_flMaxRotation = 0x6A4; // float32
                constexpr std::ptrdiff_t m_flInitialRotation = 0x6A8; // float32
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x6AC; // float32
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x6B0; // float32
                constexpr std::ptrdiff_t m_flAngleSpeed = 0x6B4; // float32
                constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x6B8; // float32
                constexpr std::ptrdiff_t m_OnStartMoving = 0x6C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStopMoving = 0x6E8; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CBuyZone {
                constexpr std::ptrdiff_t m_LegacyTeamNum = 0x9A8; // int32
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
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x528; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x529; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x52A; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x52C; // uint32
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
                constexpr std::ptrdiff_t m_pActivator = 0x4F0; // CHandle<CBaseEntity>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x548; // int32
            }
            // Parent: CBaseEntity
            // Field count: 26
            //
            // Metadata:
            // NetworkVarNames: m_FOV (float)
            // NetworkVarNames: m_Resolution (float)
            // NetworkVarNames: m_bFogEnable (bool)
            // NetworkVarNames: m_FogColor (Color)
            // NetworkVarNames: m_flFogStart (float)
            // NetworkVarNames: m_flFogEnd (float)
            // NetworkVarNames: m_flFogMaxDensity (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bUseScreenAspectRatio (bool)
            // NetworkVarNames: m_flAspectRatio (float)
            // NetworkVarNames: m_bNoSky (bool)
            // NetworkVarNames: m_fBrightness (float)
            // NetworkVarNames: m_flZFar (float)
            // NetworkVarNames: m_flZNear (float)
            // NetworkVarNames: m_bCanHLTVUse (bool)
            // NetworkVarNames: m_bAlignWithParent (bool)
            // NetworkVarNames: m_bDofEnabled (bool)
            // NetworkVarNames: m_flDofNearBlurry (float)
            // NetworkVarNames: m_flDofNearCrisp (float)
            // NetworkVarNames: m_flDofFarCrisp (float)
            // NetworkVarNames: m_flDofFarBlurry (float)
            // NetworkVarNames: m_flDofTiltToGround (float)
            namespace CPointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x4F0; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x4F4; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x4F8; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x4F9; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x500; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x504; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x508; // float32
                constexpr std::ptrdiff_t m_bActive = 0x50C; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x50D; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x510; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x514; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x518; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x51C; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x520; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x524; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x525; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x526; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x528; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x52C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x530; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x534; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x538; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x53C; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x540; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x544; // bool
                constexpr std::ptrdiff_t m_pNext = 0x548; // CPointCamera*
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
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
                constexpr std::ptrdiff_t m_flRadius = 0x548; // float32
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_vOrigin (VectorWS)
            // NetworkVarNames: m_vStart (VectorWS)
            // NetworkVarNames: m_vNormal (Vector)
            // NetworkVarNames: m_vAngles (QAngle)
            // NetworkVarNames: m_hEntity (CEntityHandle)
            // NetworkVarNames: m_hOtherEntity (CEntityHandle)
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flMagnitude (float32)
            // NetworkVarNames: m_flRadius (float32)
            // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
            // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
            // NetworkVarNames: m_nDamageType (uint32)
            // NetworkVarNames: m_nPenetrate (uint8)
            // NetworkVarNames: m_nMaterial (uint16)
            // NetworkVarNames: m_nHitBox (int16)
            // NetworkVarNames: m_nColor (uint8)
            // NetworkVarNames: m_fFlags (uint8)
            // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
            // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
            // NetworkVarNames: m_iEffectName (uint16)
            // NetworkVarNames: m_nExplosionType (uint8)
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
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_flFadeInStart (float32)
            // NetworkVarNames: m_flFadeInLength (float32)
            // NetworkVarNames: m_flFadeOutModelStart (float32)
            // NetworkVarNames: m_flFadeOutModelLength (float32)
            // NetworkVarNames: m_flFadeOutStart (float32)
            // NetworkVarNames: m_flFadeOutLength (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
            // NetworkVarNames: m_vDissolverOrigin (Vector)
            // NetworkVarNames: m_nMagnitude (uint32)
            namespace CEntityDissolve {
                constexpr std::ptrdiff_t m_flFadeInStart = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x7EC; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0x7F4; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x7F8; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0x804; // uint32
            }
            // Parent: None
            // Field count: 189
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
            // NetworkVarNames: m_bTerroristTimeOutActive (bool)
            // NetworkVarNames: m_bCTTimeOutActive (bool)
            // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
            // NetworkVarNames: m_flCTTimeOutRemaining (float)
            // NetworkVarNames: m_nTerroristTimeOuts (int)
            // NetworkVarNames: m_nCTTimeOuts (int)
            // NetworkVarNames: m_bTechnicalTimeOut (bool)
            // NetworkVarNames: m_bMatchWaitingForResume (bool)
            // NetworkVarNames: m_iRoundTime (int)
            // NetworkVarNames: m_fMatchStartTime (float)
            // NetworkVarNames: m_fRoundStartTime (GameTime_t)
            // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
            // NetworkVarNames: m_bGameRestart (bool)
            // NetworkVarNames: m_flGameStartTime (float)
            // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
            // NetworkVarNames: m_gamePhase (int)
            // NetworkVarNames: m_totalRoundsPlayed (int)
            // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
            // NetworkVarNames: m_nOvertimePlaying (int)
            // NetworkVarNames: m_iHostagesRemaining (int)
            // NetworkVarNames: m_bAnyHostageReached (bool)
            // NetworkVarNames: m_bMapHasBombTarget (bool)
            // NetworkVarNames: m_bMapHasRescueZone (bool)
            // NetworkVarNames: m_bMapHasBuyZone (bool)
            // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
            // NetworkVarNames: m_nQueuedMatchmakingMode (int)
            // NetworkVarNames: m_bIsValveDS (bool)
            // NetworkVarNames: m_bLogoMap (bool)
            // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
            // NetworkVarNames: m_iSpectatorSlotCount (int)
            // NetworkVarNames: m_MatchDevice (int)
            // NetworkVarNames: m_bHasMatchStarted (bool)
            // NetworkVarNames: m_nNextMapInMapgroup (int)
            // NetworkVarNames: m_szTournamentEventName (char)
            // NetworkVarNames: m_szTournamentEventStage (char)
            // NetworkVarNames: m_szMatchStatTxt (char)
            // NetworkVarNames: m_szTournamentPredictionsTxt (char)
            // NetworkVarNames: m_nTournamentPredictionsPct (int)
            // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
            // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDroppingItems (bool)
            // NetworkVarNames: m_bIsQuestEligible (bool)
            // NetworkVarNames: m_bIsHltvActive (bool)
            // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
            // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
            // NetworkVarNames: m_numBestOfMaps (int)
            // NetworkVarNames: m_nHalloweenMaskListSeed (int)
            // NetworkVarNames: m_bBombDropped (bool)
            // NetworkVarNames: m_bBombPlanted (bool)
            // NetworkVarNames: m_iRoundWinStatus (int)
            // NetworkVarNames: m_eRoundWinReason (int)
            // NetworkVarNames: m_bTCantBuy (bool)
            // NetworkVarNames: m_bCTCantBuy (bool)
            // NetworkVarNames: m_iMatchStats_RoundResults (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
            // NetworkVarNames: m_TeamRespawnWaveTimes (float)
            // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
            // NetworkVarNames: m_vMinimapMins (Vector)
            // NetworkVarNames: m_vMinimapMaxs (Vector)
            // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
            // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
            // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
            // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
            // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
            // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
            // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
            // NetworkVarNames: m_pGameModeRules (CCSGameModeRules*)
            // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
            // NetworkVarNames: m_nMatchEndCount (uint8)
            // NetworkVarNames: m_nTTeamIntroVariant (int)
            // NetworkVarNames: m_nCTTeamIntroVariant (int)
            // NetworkVarNames: m_bTeamIntroPeriod (bool)
            // NetworkVarNames: m_iRoundEndWinnerTeam (int)
            // NetworkVarNames: m_eRoundEndReason (int)
            // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
            // NetworkVarNames: m_iRoundEndTimerTime (int)
            // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
            // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
            // NetworkVarNames: m_iRoundEndFunFactData1 (int)
            // NetworkVarNames: m_iRoundEndFunFactData2 (int)
            // NetworkVarNames: m_iRoundEndFunFactData3 (int)
            // NetworkVarNames: m_sRoundEndMessage (CUtlString)
            // NetworkVarNames: m_iRoundEndPlayerCount (int)
            // NetworkVarNames: m_bRoundEndNoMusic (bool)
            // NetworkVarNames: m_iRoundEndLegacy (int)
            // NetworkVarNames: m_nRoundEndCount (uint8)
            // NetworkVarNames: m_iRoundStartRoundNumber (int)
            // NetworkVarNames: m_nRoundStartCount (uint8)
            namespace CCSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xC8; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC9; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xD0; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xD4; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xD5; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xD8; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xDC; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE0; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE4; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xE8; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xE9; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0xEC; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0xF0; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0xF4; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0xF8; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0xFC; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x100; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x104; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x108; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x10C; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x110; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x114; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x118; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x11C; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x11D; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x11E; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x11F; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x120; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x124; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x128; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x129; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12A; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x12C; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0x130; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x134; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x138; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x13C; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x33C; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x53C; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x73C; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x93C; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x940; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x944; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x948; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x949; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x94A; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x94C; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA14; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA24; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA28; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0xA2C; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0xA2D; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA30; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA34; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA38; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA39; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA3C; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAB4; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB2C; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBA4; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC24; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCA4; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCB0; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xCBC; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xCE0; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xCE8; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD10; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD38; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD3C; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD40; // int32
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xD60; // bool
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xD64; // GameTime_t
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xD68; // GameTime_t
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xD6C; // bool
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xD70; // int32
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xD74; // int32
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xD78; // bool
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xD79; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0xD7C; // int32
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xD80; // int32
                constexpr std::ptrdiff_t m_iNumCT = 0xD84; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xD88; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xD8C; // int32
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xD90; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDA8; // int32
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDAC; // bool
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDAD; // bool
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDAE; // bool
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDAF; // bool
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDB0; // bool
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDB8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xDD4; // bool
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xDD8; // uint32
                constexpr std::ptrdiff_t m_fAvgPlayerRank = 0xDDC; // float32
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xDE0; // char*
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xDE8; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xDEC; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xDF0; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xDF4; // uint32
                constexpr std::ptrdiff_t m_nCTsAliveAtFreezetimeEnd = 0xE00; // int32
                constexpr std::ptrdiff_t m_nTerroristsAliveAtFreezetimeEnd = 0xE04; // int32
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE08; // bool
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE09; // bool
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE40; // int32
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE44; // float32
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xE60; // int32
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xE64; // float32
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xE68; // float32
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xE6C; // int32
                constexpr std::ptrdiff_t m_iAccountCT = 0xE70; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xE74; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xE78; // int32
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xE7C; // int32
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xE80; // int32
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xE84; // int32
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xE88; // float32
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xE8C; // bool
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xE90; // float32
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xE98; // int32
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xE9C; // int32
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEA0; // float32
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEA4; // bool
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEA5; // bool
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEA6; // bool
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEA7; // bool
                constexpr std::ptrdiff_t m_firstKillTime = 0xEAC; // float32
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEB4; // float32
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xED0; // bool
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xED1; // bool
                constexpr std::ptrdiff_t m_bVoteCalled = 0xEE0; // bool
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xEE1; // bool
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xEE4; // float32
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xEE8; // bool
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xEEC; // int32
                constexpr std::ptrdiff_t m_bTargetBombed = 0xEF0; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xEF1; // bool
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xEF2; // bool
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF40; // Vector
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF50; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF80; // bool
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF84; // int32
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xF88; // float32
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xF8C; // int32
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xF90; // float32
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xF98; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFC8; // bool
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFCC; // float32
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1008; // bool
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1009; // bool
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x100C; // GameTime_t
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1010; // float32
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x1014; // GameTime_t
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1018; // float32
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x101C; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x1068; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x106C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x106D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1088; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x1090; // KeyValues3
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1128; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_RetakeRules = 0x1130; // CRetakeGameRules
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x12C0; // CUtlVector<int32>[4]
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1320; // bool[4]
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x1348; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x134C; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x1350; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x1354; // bool
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x1358; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x135C; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1360; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x1364; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1368; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x136C; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1370; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1378; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x137C; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x1380; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x1384; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x1388; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1390; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1394; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1398; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x139C; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x13A0; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x13A4; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x53B0; // float64
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
            //
            // Metadata:
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_nBounces (int)
            // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_nExplodeEffectTickBegin (int)
            // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0xBD0; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0xBDC; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0xBE8; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xBF0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xBF8; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xBFC; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0xC08; // GameTime_t
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xC0C; // uint8
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0xC0D; // bool
                constexpr std::ptrdiff_t m_nItemIndex = 0xC0E; // uint16
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xC10; // Vector
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xC1C; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xC20; // RotationVector
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xC2C; // Vector
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xC38; // int32
                constexpr std::ptrdiff_t m_bHasEverHitEnemy = 0xC3C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CPhysConstraint {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttach2 = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hAttach1 = 0x508; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAttach2 = 0x50C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nameAttachment1 = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAttachment2 = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_breakSound = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_forceLimit = 0x528; // float32
                constexpr std::ptrdiff_t m_torqueLimit = 0x52C; // float32
                constexpr std::ptrdiff_t m_minTeleportDistance = 0x530; // float32
                constexpr std::ptrdiff_t m_bSnapObjectPositions = 0x534; // bool
                constexpr std::ptrdiff_t m_bTreatEntity1AsInfiniteMass = 0x535; // bool
                constexpr std::ptrdiff_t m_OnBreak = 0x538; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAchievement {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnFired = 0x500; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                constexpr std::ptrdiff_t pItem = 0x0; // CEconItemView*
                constexpr std::ptrdiff_t team = 0x8; // uint16
                constexpr std::ptrdiff_t slot = 0xA; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 70
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_SecondaryColor (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_flBrightnessMult (float)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_flFalloff (float)
            // NetworkVarNames: m_flAttenuation0 (float)
            // NetworkVarNames: m_flAttenuation1 (float)
            // NetworkVarNames: m_flAttenuation2 (float)
            // NetworkVarNames: m_flTheta (float)
            // NetworkVarNames: m_flPhi (float)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_nCascades (int)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowWidth (int)
            // NetworkVarNames: m_nShadowHeight (int)
            // NetworkVarNames: m_bRenderDiffuse (bool)
            // NetworkVarNames: m_nRenderSpecular (int)
            // NetworkVarNames: m_bRenderTransmissive (bool)
            // NetworkVarNames: m_flOrthoLightWidth (float)
            // NetworkVarNames: m_flOrthoLightHeight (float)
            // NetworkVarNames: m_nStyle (int)
            // NetworkVarNames: m_Pattern (CUtlString)
            // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
            // NetworkVarNames: m_flShadowCascadeCrossFade (float)
            // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
            // NetworkVarNames: m_flShadowCascadeDistance0 (float)
            // NetworkVarNames: m_flShadowCascadeDistance1 (float)
            // NetworkVarNames: m_flShadowCascadeDistance2 (float)
            // NetworkVarNames: m_flShadowCascadeDistance3 (float)
            // NetworkVarNames: m_nShadowCascadeResolution0 (int)
            // NetworkVarNames: m_nShadowCascadeResolution1 (int)
            // NetworkVarNames: m_nShadowCascadeResolution2 (int)
            // NetworkVarNames: m_nShadowCascadeResolution3 (int)
            // NetworkVarNames: m_bUsesBakedShadowing (bool)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_nLightPathUniqueId (int32)
            // NetworkVarNames: m_nLightMapUniqueId (int32)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_bAllowSSTGeneration (bool)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nIndirectLight (int)
            // NetworkVarNames: m_flFadeMinDist (float)
            // NetworkVarNames: m_flFadeMaxDist (float)
            // NetworkVarNames: m_flShadowFadeMinDist (float)
            // NetworkVarNames: m_flShadowFadeMaxDist (float)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFlicker (bool)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_flPrecomputedMaxRange (float)
            // NetworkVarNames: m_nFogLightingMode (int)
            // NetworkVarNames: m_flFogContributionStength (float)
            // NetworkVarNames: m_flNearClipPlane (float)
            // NetworkVarNames: m_SkyColor (Color)
            // NetworkVarNames: m_flSkyIntensity (float)
            // NetworkVarNames: m_SkyAmbientBounce (Color)
            // NetworkVarNames: m_bUseSecondaryColor (bool)
            // NetworkVarNames: m_bMixedShadows (bool)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_flCapsuleLength (float)
            // NetworkVarNames: m_flMinRoughness (float)
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x30; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x6D; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x71; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x78; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x80; // float32
                constexpr std::ptrdiff_t m_flRange = 0x84; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x88; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x8C; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x94; // float32
                constexpr std::ptrdiff_t m_flTheta = 0x98; // float32
                constexpr std::ptrdiff_t m_flPhi = 0x9C; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xA8; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xAC; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB0; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xB4; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xB8; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC0; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xC4; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xC8; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xCC; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD0; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xD8; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xDC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF0; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xF4; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0xF8; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x100; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x104; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x108; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x10C; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x110; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x114; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118; // bool
                constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x119; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x134; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x135; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x184; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C; // float32
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1B0; // bool
            }
            // Parent: CBasePlayerWeapon
            // Field count: 50
            //
            // Metadata:
            // MNetworkOutOfPVSUpdates
            // NetworkVarNames: m_iWeaponGameplayAnimState (WeaponGameplayAnimState)
            // NetworkVarNames: m_flWeaponGameplayAnimStateTimestamp (GameTime_t)
            // NetworkVarNames: m_flInspectCancelCompleteTime (GameTime_t)
            // NetworkVarNames: m_bInspectPending (bool)
            // NetworkVarNames: m_bInspectShouldLoop (bool)
            // NetworkVarNames: m_weaponMode (CSWeaponMode)
            // NetworkVarNames: m_fAccuracyPenalty (float)
            // NetworkVarNames: m_iRecoilIndex (int)
            // NetworkVarNames: m_flRecoilIndex (float)
            // NetworkVarNames: m_bBurstMode (bool)
            // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
            // NetworkVarNames: m_flPostponeFireReadyFrac (float)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
            // NetworkVarNames: m_bIsHauledBack (bool)
            // NetworkVarNames: m_bSilencerOn (bool)
            // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
            // NetworkVarNames: m_iOriginalTeamNumber (int)
            // NetworkVarNames: m_iMostRecentTeamNumber (int)
            // NetworkVarNames: m_bDroppedNearBuyZone (bool)
            // NetworkVarNames: m_nextPrevOwnerUseTime (GameTime_t)
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_bWasActiveWeaponWhenDropped (bool)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_flWatTickOffset (float)
            // NetworkVarNames: m_flLastShakeTime (GameTime_t)
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xEA0; // bool
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xEB0; // bool
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xEB1; // bool
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0xEB2; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0xEB4; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0xEBC; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0xEBD; // bool
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xEE8; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xF08; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xF10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0xF38; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xF3C; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xF40; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xF4C; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xF50; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xF54; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xF58; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xF5C; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xF60; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0xF64; // bool
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xF68; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xF6C; // float32
                constexpr std::ptrdiff_t m_bInReload = 0xF70; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xF74; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xF78; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0xF79; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xF7C; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xF80; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xF84; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xF88; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xF8C; // float32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xFA0; // bool
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xFA1; // bool
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xFA4; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xFA8; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0xFB0; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0xFB4; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0xFB8; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0xFBC; // bool
                constexpr std::ptrdiff_t m_donated = 0xFDC; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0xFE0; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xFE4; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xFE5; // bool
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xFE8; // int32
                constexpr std::ptrdiff_t m_IronSightController = 0xFF0; // CIronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1008; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x100C; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1010; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1020; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x988; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x98C; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicLineToEntity {
                constexpr std::ptrdiff_t m_Line = 0x4F0; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_SourceName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_StartEntity = 0x520; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_EndEntity = 0x524; // CHandle<CBaseEntity>
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace CSoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x510; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x1F0; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x21C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x220; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x290; // WeaponPurchaseTracker_t
            }
            // Parent: CBaseButton
            // Field count: 0
            namespace CPhysicalButton {
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CInfoSpawnGroupLoadUnload {
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x568; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x590; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x598; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLandmarkName = 0x5A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x5A8; // CUtlString
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x5B0; // float32
                constexpr std::ptrdiff_t m_bAutoActivate = 0x5B4; // bool
                constexpr std::ptrdiff_t m_bUnloadingStarted = 0x5B5; // bool
                constexpr std::ptrdiff_t m_bQueueActiveSpawnGroupChange = 0x5B6; // bool
                constexpr std::ptrdiff_t m_bQueueFinishLoading = 0x5B7; // bool
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace CSoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x510; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x51C; // Vector
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
            // Parent: 
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iItemDefinitionIndex (item_definition_index_t)
            // NetworkVarNames: m_iEntityQuality (int)
            // NetworkVarNames: m_iEntityLevel (uint32)
            // NetworkVarNames: m_iItemIDHigh (uint32)
            // NetworkVarNames: m_iItemIDLow (uint32)
            // NetworkVarNames: m_iAccountID (uint32)
            // NetworkVarNames: m_iInventoryPosition (uint32)
            // NetworkVarNames: m_bInitialized (bool)
            // NetworkVarNames: m_AttributeList (CAttributeList)
            // NetworkVarNames: m_NetworkedDynamicAttributes (CAttributeList)
            // NetworkVarNames: m_szCustomName (char)
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
                constexpr std::ptrdiff_t m_Master = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 41
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
            // NetworkVarNames: m_pDestructiblePartsSystemComponent (CDestructiblePartsComponent*)
            // NetworkVarNames: m_nRenderMode (RenderMode_t)
            // NetworkVarNames: m_nRenderFX (RenderFx_t)
            // NetworkVarNames: m_clrRender (Color)
            // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_bNoInterpolate (bool)
            // NetworkVarNames: m_Collision (CCollisionProperty)
            // NetworkVarNames: m_Glow (CGlowProperty)
            // NetworkVarNames: m_flGlowBackfaceMult (float)
            // NetworkVarNames: m_fadeMinDist (float32)
            // NetworkVarNames: m_fadeMaxDist (float32)
            // NetworkVarNames: m_flFadeScale (float32)
            // NetworkVarNames: m_flShadowStrength (float32)
            // NetworkVarNames: m_nObjectCulling (uint8)
            // NetworkVarNames: m_nAddDecal (int)
            // NetworkVarNames: m_vDecalPosition (Vector)
            // NetworkVarNames: m_vDecalForwardAxis (Vector)
            // NetworkVarNames: m_nDecalMode (DecalMode_t)
            // NetworkVarNames: m_nRequiredDecalMode (DecalMode_t)
            // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_vecViewOffset (CNetworkViewOffsetVector)
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CBaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x4F0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x4F8; // CHitboxComponent
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0x510; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0x514; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0x518; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0x51C; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0x520; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x524; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x528; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x52C; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x530; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x534; // int32
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0x538; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_LastHitGroup = 0x540; // HitGroup_t
                constexpr std::ptrdiff_t m_sLastDamageSourceName = 0x548; // CGlobalSymbol
                constexpr std::ptrdiff_t m_vLastDamagePosition = 0x550; // VectorWS
                constexpr std::ptrdiff_t m_flDissolveStartTime = 0x55C; // GameTime_t
                constexpr std::ptrdiff_t m_OnIgnite = 0x560; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nRenderMode = 0x588; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0x589; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0x58A; // bool
                constexpr std::ptrdiff_t m_clrRender = 0x5A8; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x5B0; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x618; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0x619; // bool
                constexpr std::ptrdiff_t m_Collision = 0x620; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0x6D0; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x728; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0x72C; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0x730; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0x734; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0x738; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0x73C; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0x740; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0x744; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x750; // Vector
                constexpr std::ptrdiff_t m_nDecalMode = 0x75C; // DecalMode_t
                constexpr std::ptrdiff_t m_nRequiredDecalMode = 0x75D; // DecalMode_t
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x760; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0x7A0; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x7D0; // uint32[1]
            }
            // Parent: 
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
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
            // Parent: 
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_iGlowType (int32)
            // NetworkVarNames: m_iGlowTeam (int32)
            // NetworkVarNames: m_nGlowRange (int32)
            // NetworkVarNames: m_nGlowRangeMin (int32)
            // NetworkVarNames: m_glowColorOverride (Color)
            // NetworkVarNames: m_bFlashing (bool)
            // NetworkVarNames: m_flGlowTime (float)
            // NetworkVarNames: m_flGlowStartTime (float)
            // NetworkVarNames: m_bEligibleForScreenHighlight (bool)
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
                constexpr std::ptrdiff_t m_hOwner = 0xA50; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bHadOwner = 0xA54; // bool
                constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xA58; // float32
                constexpr std::ptrdiff_t m_flPreDelay = 0xA5C; // float32
                constexpr std::ptrdiff_t m_bIsBackground = 0xA60; // bool
                constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0xA61; // bool
                constexpr std::ptrdiff_t m_hTarget = 0xA64; // CHandle<CBaseEntity>
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
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_vDistanceInnerMins (Vector)
            // NetworkVarNames: m_vDistanceInnerMaxs (Vector)
            // NetworkVarNames: m_vDistanceOuterMins (Vector)
            // NetworkVarNames: m_vDistanceOuterMaxs (Vector)
            // NetworkVarNames: m_nAABBDirection (int)
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x508; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x514; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x520; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x52C; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x538; // int32
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSoundEventParameter {
                constexpr std::ptrdiff_t m_iszParamName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flFloatValue = 0x510; // float32
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
                constexpr std::ptrdiff_t m_SubGraph = 0xC0; // CPulse_OutflowConnection
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
                constexpr std::ptrdiff_t m_flRadius = 0x4F0; // float32
                constexpr std::ptrdiff_t m_angViewPunch = 0x4F4; // QAngle
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_PlayerDamager (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_PlayerRecipient (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPlayerControllerDamager (CHandle<CCSPlayerController>)
            // NetworkVarNames: m_hPlayerControllerRecipient (CHandle<CCSPlayerController>)
            // NetworkVarNames: m_szPlayerDamagerName (CUtlString)
            // NetworkVarNames: m_szPlayerRecipientName (CUtlString)
            // NetworkVarNames: m_DamagerXuid (uint64)
            // NetworkVarNames: m_RecipientXuid (uint64)
            // MNetworkReplayCompatField
            // NetworkVarNames: m_flDamage (float)
            // MNetworkReplayCompatField
            // NetworkVarNames: m_flActualHealthRemoved (float)
            // NetworkVarNames: m_iNumHits (int)
            // NetworkVarNames: m_iLastBulletUpdate (int)
            // NetworkVarNames: m_bIsOtherEnemy (bool)
            // NetworkVarNames: m_killType (EKillTypes_t)
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
            // Parent: 
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nInteractsAs (uint64)
            // NetworkVarNames: m_nInteractsWith (uint64)
            // NetworkVarNames: m_nInteractsExclude (uint64)
            // NetworkVarNames: m_nEntityId (uint32)
            // NetworkVarNames: m_nOwnerId (uint32)
            // NetworkVarNames: m_nHierarchyId (uint16)
            // NetworkVarNames: m_nCollisionGroup (uint8)
            // NetworkVarNames: m_nCollisionFunctionMask (uint8)
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
            }
            // Parent: CItem
            // Field count: 0
            namespace CItemKevlar {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_matPanelTransform = 0x7D8; // matrix3x4_t
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x808; // matrix3x4_t
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x838; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_PanelSize = 0x850; // Vector2D
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x858; // GameTime_t
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0x85C; // GameTime_t
                constexpr std::ptrdiff_t m_flInitAtTime = 0x860; // GameTime_t
                constexpr std::ptrdiff_t m_flGlassThickness = 0x864; // float32
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x868; // float32
                constexpr std::ptrdiff_t m_bBreakSilent = 0x86C; // bool
                constexpr std::ptrdiff_t m_bBreakShardless = 0x86D; // bool
                constexpr std::ptrdiff_t m_bBroken = 0x86E; // bool
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x86F; // bool
                constexpr std::ptrdiff_t m_bGlassInFrame = 0x870; // bool
                constexpr std::ptrdiff_t m_bStartBroken = 0x871; // bool
                constexpr std::ptrdiff_t m_iInitialDamageType = 0x872; // uint8
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x890; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x898; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x8B0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x8C8; // CUtlVector<Vector4D>
                constexpr std::ptrdiff_t m_OnBroken = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iSurfaceType = 0x908; // uint8
                constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x910; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CNavWalkable {
            }
            // Parent: CBaseAnimGraph
            // Field count: 27
            //
            // Metadata:
            // NetworkVarNames: m_bBombTicking (bool)
            // NetworkVarNames: m_flC4Blow (GameTime_t)
            // NetworkVarNames: m_nBombSite (int)
            // NetworkVarNames: m_nSourceSoundscapeHash (int)
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_bCannotBeDefused (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_bHasExploded (bool)
            // NetworkVarNames: m_flTimerLength (float)
            // NetworkVarNames: m_bBeingDefused (bool)
            // NetworkVarNames: m_flDefuseLength (float)
            // NetworkVarNames: m_flDefuseCountDown (GameTime_t)
            // NetworkVarNames: m_bBombDefused (bool)
            // NetworkVarNames: m_hBombDefuser (CHandle<CCSPlayerPawn>)
            namespace CPlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0xA98; // bool
                constexpr std::ptrdiff_t m_flC4Blow = 0xA9C; // GameTime_t
                constexpr std::ptrdiff_t m_nBombSite = 0xAA0; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xAA4; // int32
                constexpr std::ptrdiff_t m_bAbortDetonationBecauseWorldIsFrozen = 0xAA8; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0xAB0; // CAttributeContainer
                constexpr std::ptrdiff_t m_OnBombDefused = 0xDA8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xDD0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xDF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xE20; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0xE28; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xE40; // int32
                constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xE44; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0xE45; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0xE48; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0xE4C; // bool
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xE54; // GameTime_t
                constexpr std::ptrdiff_t m_flDefuseLength = 0xE5C; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xE60; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0xE64; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0xE68; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_iProgressBarTime = 0xE6C; // int32
                constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xE70; // bool
                constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xE71; // bool[4]
                constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xE78; // GameTime_t
                constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xE80; // QAngle
                constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xE8C; // GameTime_t
            }
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: CBaseEntity
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_iActiveIssueIndex (int)
            // NetworkVarNames: m_iOnlyTeamToVote (int)
            // NetworkVarNames: m_nVoteOptionCount (int)
            // NetworkVarNames: m_nPotentialVotes (int)
            // NetworkVarNames: m_bIsYesNoVote (bool)
            namespace CVoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4F0; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4F4; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4F8; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x50C; // int32
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x510; // bool
                constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x518; // CountdownTimer
                constexpr std::ptrdiff_t m_executeCommandTimer = 0x530; // CountdownTimer
                constexpr std::ptrdiff_t m_resetVoteTimer = 0x548; // CountdownTimer
                constexpr std::ptrdiff_t m_nVotesCast = 0x560; // int32[64]
                constexpr std::ptrdiff_t m_playerHoldingVote = 0x660; // CPlayerSlot
                constexpr std::ptrdiff_t m_playerOverrideForVote = 0x664; // CPlayerSlot
                constexpr std::ptrdiff_t m_nHighestCountIndex = 0x668; // int32
                constexpr std::ptrdiff_t m_potentialIssues = 0x670; // CUtlVector<CBaseIssue*>
                constexpr std::ptrdiff_t m_VoteOptions = 0x688; // CUtlVector<char*>
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
                constexpr std::ptrdiff_t m_damage = 0x4F0; // float32
                constexpr std::ptrdiff_t m_distance = 0x4F4; // float32
                constexpr std::ptrdiff_t m_directionEntityName = 0x4F8; // CUtlSymbolLarge
            }
            // Parent: 
            // Field count: 80
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_nPlatformType (EntityPlatformTypes_t)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_flSpeed (float)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_vecVelocity (CNetworkVelocityVector)
            // NetworkVarNames: m_vecBaseVelocity (Vector)
            // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nGroundBodyIndex (int)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_flWaterLevel (float)
            // NetworkVarNames: m_bGravityDisabled (bool)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            // NetworkVarNames: m_nBloodType (BloodType)
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x248; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x260; // int32
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x264; // GameTick_t
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x268; // bool
                constexpr std::ptrdiff_t m_isSteadyState = 0x278; // CTypedBitVec<64>
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x280; // float32
                constexpr std::ptrdiff_t m_ResponseContexts = 0x290; // CUtlVector<ResponseContext_t>
                constexpr std::ptrdiff_t m_iszResponseContext = 0x2A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iHealth = 0x2D0; // int32
                constexpr std::ptrdiff_t m_iMaxHealth = 0x2D4; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x2D8; // uint8
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2DC; // float32
                constexpr std::ptrdiff_t m_bTakesDamage = 0x2E0; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2E8; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x2F0; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_MoveCollide = 0x2F2; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x2F3; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x2F4; // MoveType_t
                constexpr std::ptrdiff_t m_nWaterTouch = 0x2F5; // uint8
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x2F6; // uint8
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2F7; // bool
                constexpr std::ptrdiff_t m_target = 0x2F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hDamageFilter = 0x300; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x308; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x310; // float32
                constexpr std::ptrdiff_t m_nSubclassID = 0x314; // CUtlStringToken
                constexpr std::ptrdiff_t m_flAnimTime = 0x320; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x324; // float32
                constexpr std::ptrdiff_t m_flCreateTime = 0x328; // GameTime_t
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x32C; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x32D; // uint8
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x330; // Vector
                constexpr std::ptrdiff_t m_iTeamNum = 0x33C; // uint8
                constexpr std::ptrdiff_t m_iGlobalname = 0x340; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iSentToClients = 0x348; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x34C; // float32
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x350; // CUtlString
                constexpr std::ptrdiff_t m_spawnflags = 0x358; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x35C; // GameTick_t
                constexpr std::ptrdiff_t m_nSimulationTick = 0x360; // int32
                constexpr std::ptrdiff_t m_OnKilled = 0x368; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fFlags = 0x390; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x394; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x3A0; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3D0; // Vector
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x3DC; // int32
                constexpr std::ptrdiff_t m_pCollision = 0x3E0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_hEffectEntity = 0x3E8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x3EC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_fEffects = 0x3F0; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x3F4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x3F8; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x3FC; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x400; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x404; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x408; // float32
                constexpr std::ptrdiff_t m_flWaterLevel = 0x40C; // float32
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x410; // bool
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x411; // bool
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x414; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x418; // bool
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x419; // bool
                constexpr std::ptrdiff_t m_nWaterType = 0x41A; // uint8
                constexpr std::ptrdiff_t m_iEFlags = 0x41C; // int32
                constexpr std::ptrdiff_t m_OnUser1 = 0x420; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser2 = 0x448; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser3 = 0x470; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser4 = 0x498; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x4C0; // int32
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x4C4; // GameTime_t
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x4C8; // QAngle
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x4D4; // bool
                constexpr std::ptrdiff_t m_bLagCompensate = 0x4D5; // bool
                constexpr std::ptrdiff_t m_pBlocker = 0x4D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLocalTime = 0x4DC; // float32
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4E0; // float32
                constexpr std::ptrdiff_t m_nBloodType = 0x4E4; // BloodType
                constexpr std::ptrdiff_t m_pPulseGraphInstance = 0x4E8; // CPulseGraphInstance_ServerEntity*
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 4
            namespace CMarkupVolumeWithRef {
                constexpr std::ptrdiff_t m_bUseRef = 0x820; // bool
                constexpr std::ptrdiff_t m_vRefPosEntitySpace = 0x824; // Vector
                constexpr std::ptrdiff_t m_vRefPosWorldSpace = 0x830; // VectorWS
                constexpr std::ptrdiff_t m_flRefDot = 0x83C; // float32
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
                constexpr std::ptrdiff_t m_end = 0x888; // QAngle
                constexpr std::ptrdiff_t m_start = 0x894; // QAngle
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CRagdollMagnet {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_radius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_force = 0x4F8; // float32
                constexpr std::ptrdiff_t m_axis = 0x4FC; // VectorWS
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
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace CSpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x7D8; // float32
                constexpr std::ptrdiff_t m_Radius = 0x7DC; // float32
                constexpr std::ptrdiff_t m_vSpotlightDir = 0x7E0; // Vector
                constexpr std::ptrdiff_t m_vSpotlightOrg = 0x7EC; // VectorWS
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_hSkyMaterialLightingOnly (HMaterialStrong)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_vTintColor (Color)
            // NetworkVarNames: m_vTintColorLightingOnly (Color)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nFogType (int)
            // NetworkVarNames: m_flFogMinStart (float)
            // NetworkVarNames: m_flFogMinEnd (float)
            // NetworkVarNames: m_flFogMaxStart (float)
            // NetworkVarNames: m_flFogMaxEnd (float)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CEnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x7E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7E8; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x7E9; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x7ED; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7F4; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x7F8; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x7FC; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x800; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x804; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x808; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x80C; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoSpawnGroupLandmark {
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CPointAngleSensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_nLookAtName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetEntity = 0x500; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hLookAtEntity = 0x504; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDuration = 0x508; // float32
                constexpr std::ptrdiff_t m_flDotTolerance = 0x50C; // float32
                constexpr std::ptrdiff_t m_flFacingTime = 0x510; // GameTime_t
                constexpr std::ptrdiff_t m_bFired = 0x514; // bool
                constexpr std::ptrdiff_t m_OnFacingLookat = 0x518; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x540; // CEntityIOOutput
                constexpr std::ptrdiff_t m_TargetDir = 0x568; // CEntityOutputTemplate<Vector>
                constexpr std::ptrdiff_t m_FacingPercentage = 0x590; // CEntityOutputTemplate<float32>
            }
            // Parent: CBaseEntity
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            // NetworkVarNames: m_fDirectionVariation (float)
            // NetworkVarNames: m_fSpeedVariation (float)
            // NetworkVarNames: m_fTurbulence (float)
            // NetworkVarNames: m_fVolumeHalfExtentXY (float)
            // NetworkVarNames: m_fVolumeHalfExtentZ (float)
            // NetworkVarNames: m_nVolumeResolutionXY (int)
            // NetworkVarNames: m_nVolumeResolutionZ (int)
            // NetworkVarNames: m_nClipmapLevels (int)
            // NetworkVarNames: m_bIsMaster (bool)
            namespace CEnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4F0; // CEnvWindShared
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x640; // float32
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x644; // float32
                constexpr std::ptrdiff_t m_fTurbulence = 0x648; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x64C; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x650; // float32
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x654; // int32
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x658; // int32
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x65C; // int32
                constexpr std::ptrdiff_t m_bIsMaster = 0x660; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x661; // bool
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iKills (int)
            // NetworkVarNames: m_iDeaths (int)
            // NetworkVarNames: m_iAssists (int)
            // NetworkVarNames: m_iDamage (int)
            // NetworkVarNames: m_iEquipmentValue (int)
            // NetworkVarNames: m_iMoneySaved (int)
            // NetworkVarNames: m_iKillReward (int)
            // NetworkVarNames: m_iLiveTime (int)
            // NetworkVarNames: m_iHeadShotKills (int)
            // NetworkVarNames: m_iObjective (int)
            // NetworkVarNames: m_iCashEarned (int)
            // NetworkVarNames: m_iUtilityDamage (int)
            // NetworkVarNames: m_iEnemiesFlashed (int)
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
            // Field count: 48
            namespace CGenericConstraint {
                constexpr std::ptrdiff_t m_nLinearMotionX = 0x568; // JointMotion_t
                constexpr std::ptrdiff_t m_nLinearMotionY = 0x56C; // JointMotion_t
                constexpr std::ptrdiff_t m_nLinearMotionZ = 0x570; // JointMotion_t
                constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x574; // float32
                constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x578; // float32
                constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x57C; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x580; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x584; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x588; // float32
                constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x58C; // float32
                constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x590; // float32
                constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x594; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x598; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x59C; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x5A0; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x5A4; // GameTime_t
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x5A8; // GameTime_t
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x5AC; // GameTime_t
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x5B0; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x5B4; // float32
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x5B8; // float32
                constexpr std::ptrdiff_t m_flNotifyForceX = 0x5BC; // float32
                constexpr std::ptrdiff_t m_flNotifyForceY = 0x5C0; // float32
                constexpr std::ptrdiff_t m_flNotifyForceZ = 0x5C4; // float32
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x5C8; // float32
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x5CC; // float32
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x5D0; // float32
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x5D4; // GameTime_t
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x5D8; // GameTime_t
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x5DC; // GameTime_t
                constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x5E0; // bool
                constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x5E1; // bool
                constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x5E2; // bool
                constexpr std::ptrdiff_t m_nAngularMotionX = 0x5E4; // JointMotion_t
                constexpr std::ptrdiff_t m_nAngularMotionY = 0x5E8; // JointMotion_t
                constexpr std::ptrdiff_t m_nAngularMotionZ = 0x5EC; // JointMotion_t
                constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x5F0; // float32
                constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x5F4; // float32
                constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x600; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x604; // float32
                constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x608; // float32
                constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x60C; // float32
                constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x610; // float32
                constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x618; // CEntityIOOutput
                constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x640; // CEntityIOOutput
                constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x668; // CEntityIOOutput
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
                constexpr std::ptrdiff_t m_iszLaserTarget = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pSprite = 0x880; // CSprite*
                constexpr std::ptrdiff_t m_iszSpriteName = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_firePosition = 0x890; // Vector
                constexpr std::ptrdiff_t m_flStartFrame = 0x89C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CSoundOpvarSetEntity {
                constexpr std::ptrdiff_t m_iszStackName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nOpvarType = 0x520; // int32
                constexpr std::ptrdiff_t m_nOpvarIndex = 0x524; // int32
                constexpr std::ptrdiff_t m_flOpvarValue = 0x528; // float32
                constexpr std::ptrdiff_t m_OpvarValueString = 0x530; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bSetOnSpawn = 0x538; // bool
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CEnvBeverage {
                constexpr std::ptrdiff_t m_CanInDispenser = 0x4F0; // bool
                constexpr std::ptrdiff_t m_nBeverageType = 0x4F4; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CPhysMotor {
                constexpr std::ptrdiff_t m_nameAttach = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nameAnchor = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hAttachedObject = 0x500; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAnchorObject = 0x504; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_spinUp = 0x508; // float32
                constexpr std::ptrdiff_t m_spinDown = 0x50C; // float32
                constexpr std::ptrdiff_t m_flMotorFriction = 0x510; // float32
                constexpr std::ptrdiff_t m_additionalAcceleration = 0x514; // float32
                constexpr std::ptrdiff_t m_angularAcceleration = 0x518; // float32
                constexpr std::ptrdiff_t m_flTorqueScale = 0x51C; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x520; // float32
                constexpr std::ptrdiff_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0x524; // float32
                constexpr std::ptrdiff_t m_motor = 0x538; // CMotorController
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CLogicGameEvent {
                constexpr std::ptrdiff_t m_iszEventName = 0x4F0; // CUtlSymbolLarge
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropMultiplayer {
            }
            // Parent: CPointEntity
            // Field count: 10
            namespace CPhysExplosion {
                constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4F0; // bool
                constexpr std::ptrdiff_t m_flMagnitude = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x4F8; // float32
                constexpr std::ptrdiff_t m_radius = 0x4FC; // float32
                constexpr std::ptrdiff_t m_targetEntityName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flInnerRadius = 0x508; // float32
                constexpr std::ptrdiff_t m_flPushScale = 0x50C; // float32
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x510; // bool
                constexpr std::ptrdiff_t m_bAffectInvulnerableEnts = 0x511; // bool
                constexpr std::ptrdiff_t m_OnPushedPlayer = 0x518; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 14
            namespace CSplineConstraint {
                constexpr std::ptrdiff_t m_vAnchorOffsetRestore = 0x5B0; // Vector
                constexpr std::ptrdiff_t m_hSplineEntity = 0x5BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bEnableLateralConstraint = 0x5C8; // bool
                constexpr std::ptrdiff_t m_bEnableVerticalConstraint = 0x5C9; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x5CA; // bool
                constexpr std::ptrdiff_t m_bEnableLimit = 0x5CB; // bool
                constexpr std::ptrdiff_t m_bFireEventsOnPath = 0x5CC; // bool
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x5D0; // float32
                constexpr std::ptrdiff_t m_flLinarDampingRatio = 0x5D4; // float32
                constexpr std::ptrdiff_t m_flJointFriction = 0x5D8; // float32
                constexpr std::ptrdiff_t m_flTransitionTime = 0x5DC; // float32
                constexpr std::ptrdiff_t m_vPreSolveAnchorPos = 0x600; // VectorWS
                constexpr std::ptrdiff_t m_StartTransitionTime = 0x60C; // GameTime_t
                constexpr std::ptrdiff_t m_vTangentSpaceAnchorAtTransitionStart = 0x610; // Vector
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCompare {
                constexpr std::ptrdiff_t m_flInValue = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flCompareValue = 0x4F4; // float32
                constexpr std::ptrdiff_t m_OnLessThan = 0x4F8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnEqualTo = 0x520; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnNotEqualTo = 0x548; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x570; // CEntityOutputTemplate<float32>
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
                constexpr std::ptrdiff_t m_OnDeath = 0x930; // CEntityIOOutput
            }
            // Parent: CBaseClientUIEntity
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_bIgnoreInput (bool)
            // NetworkVarNames: m_bLit (bool)
            // NetworkVarNames: m_bFollowPlayerAcrossTeleport (bool)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDPI (float)
            // NetworkVarNames: m_flInteractDistance (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_unOwnerContext (uint32)
            // NetworkVarNames: m_unHorizontalAlign (uint32)
            // NetworkVarNames: m_unVerticalAlign (uint32)
            // NetworkVarNames: m_unOrientation (uint32)
            // NetworkVarNames: m_bAllowInteractionFromAllSceneWorlds (bool)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            // NetworkVarNames: m_bOpaque (bool)
            // NetworkVarNames: m_bNoDepth (bool)
            // NetworkVarNames: m_bVisibleWhenParentNoDraw (bool)
            // NetworkVarNames: m_bRenderBackface (bool)
            // NetworkVarNames: m_bUseOffScreenIndicator (bool)
            // NetworkVarNames: m_bExcludeFromSaveGames (bool)
            // NetworkVarNames: m_bGrabbable (bool)
            // NetworkVarNames: m_bOnlyRenderToTexture (bool)
            // NetworkVarNames: m_bDisableMipGen (bool)
            // NetworkVarNames: m_nExplicitImageLayout (int32)
            namespace CPointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x988; // bool
                constexpr std::ptrdiff_t m_bLit = 0x989; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x98A; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x98C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x990; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x994; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x998; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x99C; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x9A0; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x9A4; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x9A8; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x9AC; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x9B0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x9B8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x9D0; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x9D1; // bool
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x9D2; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x9D3; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x9D4; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x9D5; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x9D6; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x9D7; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x9D8; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x9DC; // int32
            }
            // Parent: CSoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace CSoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x5B8; // float32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
                constexpr std::ptrdiff_t m_iMoneyEarnedForNextRound = 0x44; // int32
                constexpr std::ptrdiff_t m_iAccount = 0x48; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32
            }
            // Parent: CRuleEntity
            // Field count: 0
            namespace CRuleBrushEntity {
            }
            // Parent: CBaseEntity
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_nDraftType (int)
            // NetworkVarNames: m_nTeamWinningCoinToss (int)
            // NetworkVarNames: m_nTeamWithFirstChoice (int)
            // NetworkVarNames: m_nVoteMapIdsList (int)
            // NetworkVarNames: m_nAccountIDs (int)
            // NetworkVarNames: m_nMapId0 (int)
            // NetworkVarNames: m_nMapId1 (int)
            // NetworkVarNames: m_nMapId2 (int)
            // NetworkVarNames: m_nMapId3 (int)
            // NetworkVarNames: m_nMapId4 (int)
            // NetworkVarNames: m_nMapId5 (int)
            // NetworkVarNames: m_nStartingSide0 (int)
            // NetworkVarNames: m_nCurrentPhase (int)
            // NetworkVarNames: m_nPhaseStartTick (int)
            // NetworkVarNames: m_nPhaseDurationTicks (int)
            namespace CMapVetoPickController {
                constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4F1; // bool
                constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x510; // float64
                constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x518; // bool
                constexpr std::ptrdiff_t m_nDraftType = 0x51C; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x520; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x524; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x624; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x640; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x740; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x840; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0x940; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xA40; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xB40; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xC40; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xD40; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xE40; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE44; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE48; // int32
                constexpr std::ptrdiff_t m_OnMapVetoed = 0xE50; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnMapPicked = 0xE78; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnSidesPicked = 0xEA0; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xEC8; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnLevelTransition = 0xEF0; // CEntityOutputTemplate<int32>
            }
            // Parent: 
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_PredNetBoolVariables (uint32)
            // NetworkVarNames: m_PredNetByteVariables (byte)
            // NetworkVarNames: m_PredNetUInt16Variables (uint16)
            // NetworkVarNames: m_PredNetIntVariables (int32)
            // NetworkVarNames: m_PredNetUInt32Variables (uint32)
            // NetworkVarNames: m_PredNetUInt64Variables (uint64)
            // NetworkVarNames: m_PredNetFloatVariables (float)
            // NetworkVarNames: m_PredNetVectorVariables (Vector)
            // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
            // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
            // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
            // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
            // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_nBoolVariablesCount (int)
            // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
            // NetworkVarNames: m_nRandomSeedOffset (int)
            // NetworkVarNames: m_flLastTeleportTime (float)
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CFuncPropRespawnZone {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x548; // CUtlSymbolLarge
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
                constexpr std::ptrdiff_t m_axisEnd = 0x568; // VectorWS
                constexpr std::ptrdiff_t m_slideFriction = 0x574; // float32
                constexpr std::ptrdiff_t m_systemLoadScale = 0x578; // float32
                constexpr std::ptrdiff_t m_initialOffset = 0x57C; // float32
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x580; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x581; // bool
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x584; // float32
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x588; // float32
                constexpr std::ptrdiff_t m_bUseEntityPivot = 0x58C; // bool
                constexpr std::ptrdiff_t m_soundInfo = 0x590; // ConstraintSoundInfo
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_strGraphName (CUtlString)
            // NetworkVarNames: m_strStateBlob (CUtlString)
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x4F8; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x500; // CUtlString
            }
            // Parent: CSoundEventEntity
            // Field count: 0
            namespace CSoundEventEntityAlias_snd_event_point {
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
                constexpr std::ptrdiff_t m_strStatisticName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bDisabled = 0x4F8; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_bLoop (bool)
            // NetworkVarNames: m_flFPS (float)
            // NetworkVarNames: m_hPositionKeys (HRenderTextureStrong)
            // NetworkVarNames: m_hRotationKeys (HRenderTextureStrong)
            // NetworkVarNames: m_vAnimationBoundsMin (Vector)
            // NetworkVarNames: m_vAnimationBoundsMax (Vector)
            // NetworkVarNames: m_flStartTime (float)
            // NetworkVarNames: m_flStartFrame (float)
            namespace CTextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x7D8; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x7DC; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x7E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x7FC; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x808; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x80C; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 23
            //
            // Metadata:
            // NetworkVarNames: m_hSpriteMaterial (HMaterialStrong)
            // NetworkVarNames: m_hAttachedToEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_flSpriteFramerate (float32)
            // NetworkVarNames: m_flFrame (float32)
            // NetworkVarNames: m_nBrightness (uint32)
            // NetworkVarNames: m_flBrightnessDuration (float32)
            // NetworkVarNames: m_flSpriteScale (float32)
            // NetworkVarNames: m_flScaleDuration (float32)
            // NetworkVarNames: m_bWorldSpaceScale (bool)
            // NetworkVarNames: m_flGlowProxySize (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            namespace CSprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x7E0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x7E4; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x7EC; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x800; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x804; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x808; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x80C; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x810; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x814; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x818; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x81C; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x820; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x824; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x828; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x82C; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x830; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x834; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x838; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x83C; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x840; // int32
            }
            // Parent: CPathKeyFrame
            // Field count: 11
            namespace CBaseMoveBehavior {
                constexpr std::ptrdiff_t m_iPositionInterpolator = 0x550; // int32
                constexpr std::ptrdiff_t m_iRotationInterpolator = 0x554; // int32
                constexpr std::ptrdiff_t m_flAnimStartTime = 0x558; // float32
                constexpr std::ptrdiff_t m_flAnimEndTime = 0x55C; // float32
                constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x560; // float32
                constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x568; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x570; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_pPreKeyFrame = 0x578; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_pPostKeyFrame = 0x580; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x588; // float32
                constexpr std::ptrdiff_t m_iDirection = 0x58C; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_Flags (uint8)
            // NetworkVarNames: m_LightStyle (uint8)
            // NetworkVarNames: m_Radius (float32)
            // NetworkVarNames: m_Exponent (int32)
            // NetworkVarNames: m_InnerAngle (float32)
            // NetworkVarNames: m_OuterAngle (float32)
            // NetworkVarNames: m_SpotRadius (float32)
            namespace CDynamicLight {
                constexpr std::ptrdiff_t m_ActualFlags = 0x7D8; // uint8
                constexpr std::ptrdiff_t m_Flags = 0x7D9; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0x7DA; // uint8
                constexpr std::ptrdiff_t m_On = 0x7DB; // bool
                constexpr std::ptrdiff_t m_Radius = 0x7DC; // float32
                constexpr std::ptrdiff_t m_Exponent = 0x7E0; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0x7E4; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0x7E8; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0x7EC; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x11F0; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x11F4; // int32
            }
            // Parent: CEnvCubemap
            // Field count: 0
            namespace CEnvCubemapBox {
            }
            // Parent: CBaseDoor
            // Field count: 1
            namespace CRotDoor {
                constexpr std::ptrdiff_t m_bSolidBsp = 0xA68; // bool
            }
            // Parent: CPathSimple
            // Field count: 3
            namespace CPathMover {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x600; // CUtlVector<CHandle<CMoverPathNode>>
                constexpr std::ptrdiff_t m_vecMovers = 0x618; // CUtlVector<CHandle<CFuncMover>>
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x630; // CTransform
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncVPhysicsClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x7D8; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 8
            namespace CPhysFixed {
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x560; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x564; // float32
                constexpr std::ptrdiff_t m_flAngularFrequency = 0x568; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x56C; // float32
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x570; // bool
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x571; // bool
                constexpr std::ptrdiff_t m_sBoneName1 = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sBoneName2 = 0x580; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Field count: 2
            namespace CLogicNavigation {
                constexpr std::ptrdiff_t m_isOn = 0x4F8; // bool
                constexpr std::ptrdiff_t m_navProperty = 0x4FC; // navproperties_t
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_CPathQueryComponent (CPathQueryComponent::Storage_t)
            // NetworkVarNames: m_pathString (CUtlString)
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x500; // CPathQueryComponent
                constexpr std::ptrdiff_t m_pathString = 0x5F0; // CUtlString
                constexpr std::ptrdiff_t m_bClosedLoop = 0x5F8; // bool
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
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nShape (int)
            // NetworkVarNames: m_fWindSpeedMultiplier (float)
            // NetworkVarNames: m_fWindTurbulenceMultiplier (float)
            // NetworkVarNames: m_fWindSpeedVariationMultiplier (float)
            // NetworkVarNames: m_fWindDirectionVariationMultiplier (float)
            namespace CEnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4F0; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x4F4; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x500; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x50C; // bool
                constexpr std::ptrdiff_t m_nShape = 0x510; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x514; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x518; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x51C; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x520; // float32
            }
            // Parent: CFuncBrush
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0x7F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x800; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectZapName = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEffectSource = 0x810; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSMinimapBoundary {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: 
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: dirPrimary (Vector)
            // NetworkVarNames: colorPrimary (Color)
            // NetworkVarNames: colorSecondary (Color)
            // NetworkVarNames: colorPrimaryLerpTo (Color)
            // NetworkVarNames: colorSecondaryLerpTo (Color)
            // NetworkVarNames: start (float32)
            // NetworkVarNames: end (float32)
            // NetworkVarNames: farz (float32)
            // NetworkVarNames: maxdensity (float32)
            // NetworkVarNames: exponent (float32)
            // NetworkVarNames: HDRColorScale (float32)
            // NetworkVarNames: skyboxFogFactor (float32)
            // NetworkVarNames: skyboxFogFactorLerpTo (float32)
            // NetworkVarNames: startLerpTo (float32)
            // NetworkVarNames: endLerpTo (float32)
            // NetworkVarNames: maxdensityLerpTo (float32)
            // NetworkVarNames: lerptime (GameTime_t)
            // NetworkVarNames: duration (float32)
            // NetworkVarNames: blendtobackground (float32)
            // NetworkVarNames: scattering (float32)
            // NetworkVarNames: locallightscale (float32)
            // NetworkVarNames: enable (bool)
            // NetworkVarNames: blend (bool)
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
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace CSoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x5B8; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x5C4; // Vector
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CFlashbangProjectile {
                constexpr std::ptrdiff_t m_flTimeToDetonate = 0xC40; // float32
                constexpr std::ptrdiff_t m_numOpponentsHit = 0xC44; // uint8
                constexpr std::ptrdiff_t m_numTeammatesHit = 0xC45; // uint8
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerMultiple {
                constexpr std::ptrdiff_t m_OnTrigger = 0x9A8; // CEntityIOOutput
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysBallSocket {
                constexpr std::ptrdiff_t m_flJointFriction = 0x560; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x564; // bool
                constexpr std::ptrdiff_t m_flSwingLimit = 0x568; // float32
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x56C; // bool
                constexpr std::ptrdiff_t m_flMinTwistAngle = 0x570; // float32
                constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x574; // float32
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CDebugHistory {
                constexpr std::ptrdiff_t m_nNpcEvents = 0x3E8530; // int32
            }
            // Parent: CBaseEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace CSoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4F0; // bool
                constexpr std::ptrdiff_t m_hSource = 0x4F4; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vLastPosition = 0x568; // Vector
                constexpr std::ptrdiff_t m_iszStackName = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x588; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x590; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x594; // bool
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CPathKeyFrame {
                constexpr std::ptrdiff_t m_Origin = 0x4F0; // Vector
                constexpr std::ptrdiff_t m_Angles = 0x4FC; // QAngle
                constexpr std::ptrdiff_t m_qAngle = 0x510; // Quaternion
                constexpr std::ptrdiff_t m_iNextKey = 0x520; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flNextTime = 0x528; // float32
                constexpr std::ptrdiff_t m_pNextKey = 0x530; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_pPrevKey = 0x538; // CPathKeyFrame*
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x540; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            namespace CWeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x11F0; // bool
            }
            // Parent: CTriggerPush
            // Field count: 1
            namespace CScriptTriggerPush {
                constexpr std::ptrdiff_t m_vExtent = 0x9E0; // Vector
            }
            // Parent: CModelPointEntity
            // Field count: 3
            namespace CRevertSaved {
                constexpr std::ptrdiff_t m_loadTime = 0x7D8; // float32
                constexpr std::ptrdiff_t m_Duration = 0x7DC; // float32
                constexpr std::ptrdiff_t m_HoldTime = 0x7E0; // float32
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerBombReset {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerHurt {
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x9A8; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x9AC; // float32
                constexpr std::ptrdiff_t m_flDamageCap = 0x9B0; // float32
                constexpr std::ptrdiff_t m_flLastDmgTime = 0x9B4; // GameTime_t
                constexpr std::ptrdiff_t m_flForgivenessDelay = 0x9B8; // float32
                constexpr std::ptrdiff_t m_bitsDamageInflict = 0x9BC; // DamageTypes_t
                constexpr std::ptrdiff_t m_damageModel = 0x9C0; // int32
                constexpr std::ptrdiff_t m_bNoDmgForce = 0x9C4; // bool
                constexpr std::ptrdiff_t m_vDamageForce = 0x9C8; // Vector
                constexpr std::ptrdiff_t m_thinkAlways = 0x9D4; // bool
                constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x9D8; // float32
                constexpr std::ptrdiff_t m_OnHurt = 0x9E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHurtPlayer = 0xA08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hurtEntities = 0xA30; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CPlayer_WeaponServices
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            // NetworkVarNames: m_networkAnimTiming (uint8)
            // NetworkVarNames: m_bBlockInspectUntilNextGraphUpdate (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xB8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xBC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xBD; // bool
                constexpr std::ptrdiff_t m_hSavedWeapon = 0xC0; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_nTimeToMelee = 0xC4; // int32
                constexpr std::ptrdiff_t m_nTimeToSecondary = 0xC8; // int32
                constexpr std::ptrdiff_t m_nTimeToPrimary = 0xCC; // int32
                constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xD0; // int32
                constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xD4; // bool
                constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xD5; // bool
                constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xD6; // bool
                constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xD7; // bool
                constexpr std::ptrdiff_t m_bIsPickingUpGroundWeapon = 0xD8; // bool
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x18C0; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x18D8; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nMatchSeed (int)
            // NetworkVarNames: m_bBlockersPresent (bool)
            // NetworkVarNames: m_bRoundInProgress (bool)
            // NetworkVarNames: m_iFirstSecondHalfRound (int)
            // NetworkVarNames: m_iBombSite (int)
            namespace CRetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
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
                constexpr std::ptrdiff_t m_vExtent = 0xA48; // Vector
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
                constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x9C8; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x548; // CUtlSymbolLarge
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (uint8)
            // NetworkVarNames: m_nVoxelFrameDataSize (int)
            // NetworkVarNames: m_nVoxelUpdate (int)
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xC68; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xC6C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0xC70; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xC74; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xC80; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xC90; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0xCA8; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0xCAC; // int32
                constexpr std::ptrdiff_t m_flLastBounce = 0xCB0; // GameTime_t
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xCB4; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2F38; // bool
                constexpr std::ptrdiff_t m_bDidGroundScorch = 0x2F39; // bool
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CBlood {
                constexpr std::ptrdiff_t m_vecSprayAngles = 0x4F0; // QAngle
                constexpr std::ptrdiff_t m_vecSprayDir = 0x4FC; // Vector
                constexpr std::ptrdiff_t m_flAmount = 0x508; // float32
                constexpr std::ptrdiff_t m_Color = 0x50C; // BloodType
            }
            // Parent: CTeam
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bSurrendered (bool)
            // NetworkVarNames: m_szTeamMatchStat (char)
            // NetworkVarNames: m_numMapVictories (int)
            // NetworkVarNames: m_scoreFirstHalf (int32)
            // NetworkVarNames: m_scoreSecondHalf (int32)
            // NetworkVarNames: m_scoreOvertime (int32)
            // NetworkVarNames: m_szClanTeamname (char)
            // NetworkVarNames: m_iClanID (uint32)
            // NetworkVarNames: m_szTeamFlagImage (char)
            // NetworkVarNames: m_szTeamLogoImage (char)
            namespace CCSTeam {
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x5A8; // int32
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x5AC; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x5B0; // bool
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x5B1; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x7B4; // int32
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x7B8; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x7BC; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x7C0; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x7C4; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x848; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x84C; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x854; // char[8]
                constexpr std::ptrdiff_t m_flNextResourceTime = 0x85C; // float32
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x860; // int32
            }
            // Parent: CRuleEntity
            // Field count: 1
            namespace CRulePointEntity {
                constexpr std::ptrdiff_t m_Score = 0x7E0; // int32
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
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
            // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
            // NetworkVarNames: m_vecForce (Vector)
            // NetworkVarNames: m_nForceBone (int32)
            // NetworkVarNames: m_RagdollPose (PhysicsRagdollPose_t)
            // NetworkVarNames: m_bRagdollEnabled (bool)
            // NetworkVarNames: m_bRagdollClientSide (bool)
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x858; // bool
                constexpr std::ptrdiff_t m_pChoreoServices = 0x860; // IChoreoServices*
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x868; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x86C; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x870; // VectorWS
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x87C; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x880; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0x88C; // int32
                constexpr std::ptrdiff_t m_RagdollPose = 0x8A0; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0x8C8; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x8C9; // bool
                constexpr std::ptrdiff_t m_xParentedRagdollRootInEntitySpace = 0x8D0; // CTransform
            }
            // Parent: CBaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_flEndDistance (float)
            // NetworkVarNames: m_flStartDistance (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogHeightWidth (float)
            // NetworkVarNames: m_flFogHeightEnd (float)
            // NetworkVarNames: m_flFogHeightStart (float)
            // NetworkVarNames: m_flFogHeightExponent (float)
            // NetworkVarNames: m_flLODBias (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_nCubemapSourceType (int)
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_iszSkyEntity (string_t)
            // NetworkVarNames: m_hFogCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bHasHeightFogEnd (bool)
            namespace CEnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4F8; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4FC; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x500; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x504; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x508; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x50C; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x510; // float32
                constexpr std::ptrdiff_t m_bActive = 0x514; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x515; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x518; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x51C; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x520; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x528; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x530; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x538; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x539; // bool
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
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x868; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x874; // Vector
                constexpr std::ptrdiff_t m_ls = 0x880; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0x8A0; // bool
                constexpr std::ptrdiff_t m_bDoorGroup = 0x8A1; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x8A2; // bool
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x8A3; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x8A4; // bool
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x8A8; // FuncDoorSpawnPos_t
                constexpr std::ptrdiff_t m_flBlockDamage = 0x8AC; // float32
                constexpr std::ptrdiff_t m_NoiseMoving = 0x8B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x8B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x8C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x8C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ChainTarget = 0x8D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x8D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x900; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x928; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x950; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x978; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x9A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0x9C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0x9F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0xA18; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0xA40; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xA60; // bool
                constexpr std::ptrdiff_t m_isChaining = 0xA61; // bool
                constexpr std::ptrdiff_t m_bIsUsable = 0xA62; // bool
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CServerOnlyPointEntity {
            }
            // Parent: CRulePointEntity
            // Field count: 4
            namespace CGameMoney {
                constexpr std::ptrdiff_t m_OnMoneySpent = 0x7E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMoneySpentFail = 0x810; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nMoney = 0x838; // int32
                constexpr std::ptrdiff_t m_strAwardText = 0x840; // CUtlString
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CEnvHudHint {
                constexpr std::ptrdiff_t m_iszMessage = 0x4F0; // CUtlSymbolLarge
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
                constexpr std::ptrdiff_t m_entitySpottedState = 0xB70; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xB88; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CItemGenericTriggerHelper {
                constexpr std::ptrdiff_t m_hParentItem = 0x7D8; // CHandle<CItemGeneric>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
                constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA0; // bool
            }
            // Parent: CRagdollProp
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace CRagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xBE0; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xBE4; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xBE8; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xBF4; // Vector
                constexpr std::ptrdiff_t m_bShouldDetach = 0xC00; // bool
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xC10; // bool
            }
            // Parent: CItem
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace CItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0xB70; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0xB74; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBasePlatTrain
            // Field count: 1
            namespace CFuncPlat {
                constexpr std::ptrdiff_t m_sNoise = 0x880; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Field count: 76
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_nColorMode (int)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flColorTemperature (float)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_nLightPathUniqueId (int32)
            // NetworkVarNames: m_nLightMapUniqueId (int32)
            // NetworkVarNames: m_nLuminaireShape (int)
            // NetworkVarNames: m_flLuminaireSize (float)
            // NetworkVarNames: m_flLuminaireAnisotropy (float)
            // NetworkVarNames: m_LightStyleString (CUtlString)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_QueuedLightStyleStrings (CUtlString)
            // NetworkVarNames: m_LightStyleEvents (CUtlString)
            // NetworkVarNames: m_LightStyleTargets (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_flShape (float)
            // NetworkVarNames: m_flSoftX (float)
            // NetworkVarNames: m_flSoftY (float)
            // NetworkVarNames: m_flSkirt (float)
            // NetworkVarNames: m_flSkirtNear (float)
            // NetworkVarNames: m_vSizeParams (Vector)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_vShear (Vector)
            // NetworkVarNames: m_nBakeSpecularToCubemaps (int)
            // NetworkVarNames: m_vBakeSpecularToCubemapsSize (Vector)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowMapSize (int)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_bContactShadow (bool)
            // NetworkVarNames: m_bForceShadowsEnabled (bool)
            // NetworkVarNames: m_nBounceLight (int)
            // NetworkVarNames: m_flBounceScale (float)
            // NetworkVarNames: m_flMinRoughness (float)
            // NetworkVarNames: m_vAlternateColor (Vector)
            // NetworkVarNames: m_fAlternateColorBrightness (float)
            // NetworkVarNames: m_nFog (int)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_nFogShadows (int)
            // NetworkVarNames: m_flFogScale (float)
            // NetworkVarNames: m_bFogMixedShadows (bool)
            // NetworkVarNames: m_flFadeSizeStart (float)
            // NetworkVarNames: m_flFadeSizeEnd (float)
            // NetworkVarNames: m_flShadowFadeSizeStart (float)
            // NetworkVarNames: m_flShadowFadeSizeEnd (float)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_nPrecomputedSubFrusta (int)
            // NetworkVarNames: m_vPrecomputedOBBOrigin0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles0 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles1 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles2 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles3 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles4 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin5 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles5 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent5 (Vector)
            // NetworkVarNames: m_VisClusters (uint16)
            namespace CBarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x7D8; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x7DC; // int32
                constexpr std::ptrdiff_t m_Color = 0x7E0; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7EC; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0x7F0; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x7F4; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x7F8; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x7FC; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x800; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x804; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x808; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0x810; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x818; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x820; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x838; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x850; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x868; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x928; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x930; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x934; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x938; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x93C; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x940; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x944; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x950; // float32
                constexpr std::ptrdiff_t m_vShear = 0x954; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x960; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x964; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0x970; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x974; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x978; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x97C; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x97D; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x980; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x984; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x988; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x98C; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x998; // float32
                constexpr std::ptrdiff_t m_nFog = 0x99C; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x9A0; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x9A4; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x9A8; // float32
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x9AC; // bool
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x9B0; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x9B4; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x9B8; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x9BC; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x9C0; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x9C4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x9D0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x9DC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x9E8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x9F4; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0xA00; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0xA04; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0xA10; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0xA1C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0xA28; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0xA34; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0xA40; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0xA4C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0xA58; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0xA64; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0xA70; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0xA7C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0xA88; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0xA94; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0xAA0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0xAAC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xAB8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xAC4; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xAD0; // Vector
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0xADC; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0xAE0; // CNetworkUtlVectorBase<uint16>
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInstructorEventEntity {
                constexpr std::ptrdiff_t m_iszName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTargetPlayer = 0x500; // CHandle<CBasePlayerPawn>
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponTec9 {
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPathCorner {
                constexpr std::ptrdiff_t m_flWait = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_OnPass = 0x4F8; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerSndSosOpvar {
                constexpr std::ptrdiff_t m_hTouchingPlayers = 0x9A8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_flPosition = 0x9C0; // Vector
                constexpr std::ptrdiff_t m_flCenterSize = 0x9CC; // float32
                constexpr std::ptrdiff_t m_flMinVal = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flMaxVal = 0x9D4; // float32
                constexpr std::ptrdiff_t m_opvarName = 0x9D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_stackName = 0x9E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_operatorName = 0x9E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bVolIs2D = 0x9F0; // bool
                constexpr std::ptrdiff_t m_opvarNameChar = 0x9F1; // char[256]
                constexpr std::ptrdiff_t m_stackNameChar = 0xAF1; // char[256]
                constexpr std::ptrdiff_t m_operatorNameChar = 0xBF1; // char[256]
                constexpr std::ptrdiff_t m_VecNormPos = 0xCF4; // Vector
                constexpr std::ptrdiff_t m_flNormCenterSize = 0xD00; // float32
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
                constexpr std::ptrdiff_t m_GameBlackboard = 0x58; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x80; // CPulse_ResumePoint
            }
            // Parent: CBaseAnimGraph
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_iszCommentaryFile (string_t)
            // NetworkVarNames: m_hViewPosition (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flStartTimeInCommentary (float32)
            // NetworkVarNames: m_iszTitle (string_t)
            // NetworkVarNames: m_iszSpeakers (string_t)
            // NetworkVarNames: m_iNodeNumber (int)
            // NetworkVarNames: m_iNodeNumberMax (int)
            // NetworkVarNames: m_bListenedTo (bool)
            namespace CPointCommentaryNode {
                constexpr std::ptrdiff_t m_iszPreCommands = 0xA90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostCommands = 0xA98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xAA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszViewTarget = 0xAA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewTarget = 0xAB0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0xAB4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszViewPosition = 0xAB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewPosition = 0xAC0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewPositionMover = 0xAC4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventMovement = 0xAC8; // bool
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0xAC9; // bool
                constexpr std::ptrdiff_t m_bUnstoppable = 0xACA; // bool
                constexpr std::ptrdiff_t m_flFinishedTime = 0xACC; // GameTime_t
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0xAD0; // Vector
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0xADC; // QAngle
                constexpr std::ptrdiff_t m_vecFinishAngles = 0xAE8; // QAngle
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0xAF4; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0xAF5; // bool
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0xAF8; // VectorWS
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0xB04; // GameTime_t
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0xB08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xB30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActive = 0xB58; // bool
                constexpr std::ptrdiff_t m_flStartTime = 0xB5C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xB60; // float32
                constexpr std::ptrdiff_t m_iszTitle = 0xB68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xB70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xB78; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xB7C; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xB80; // bool
            }
            // Parent: CRotButton
            // Field count: 14
            namespace CMomentaryRotButton {
                constexpr std::ptrdiff_t m_Position = 0x9A8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnUnpressed = 0x9D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x9F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xA20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedPosition = 0xA48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_lastUsed = 0xA70; // int32
                constexpr std::ptrdiff_t m_start = 0xA74; // QAngle
                constexpr std::ptrdiff_t m_end = 0xA80; // QAngle
                constexpr std::ptrdiff_t m_IdealYaw = 0xA8C; // float32
                constexpr std::ptrdiff_t m_sNoise = 0xA90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUpdateTarget = 0xA98; // bool
                constexpr std::ptrdiff_t m_direction = 0xA9C; // int32
                constexpr std::ptrdiff_t m_returnSpeed = 0xAA0; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0xAA4; // float32
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CSceneListManager {
                constexpr std::ptrdiff_t m_hListManagers = 0x4F0; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszScenes = 0x508; // CUtlSymbolLarge[16]
                constexpr std::ptrdiff_t m_hScenes = 0x588; // CHandle<CBaseEntity>[16]
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CEnvTilt {
                constexpr std::ptrdiff_t m_Duration = 0x4F0; // float32
                constexpr std::ptrdiff_t m_Radius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_TiltTime = 0x4F8; // float32
                constexpr std::ptrdiff_t m_stopTime = 0x4FC; // GameTime_t
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: CBaseModelEntity
            // Field count: 68
            namespace CFuncMover {
                constexpr std::ptrdiff_t m_iszPathName = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPathMover = 0x7E0; // CHandle<CPathMover>
                constexpr std::ptrdiff_t m_hPrevPathMover = 0x7E4; // CHandle<CPathMover>
                constexpr std::ptrdiff_t m_iszPathNodeStart = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPathNodeEnd = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_eMoveType = 0x7F8; // CFuncMover::Move_t
                constexpr std::ptrdiff_t m_bIsReversing = 0x7FC; // bool
                constexpr std::ptrdiff_t m_vTarget = 0x800; // Vector
                constexpr std::ptrdiff_t m_flStartSpeed = 0x80C; // float32
                constexpr std::ptrdiff_t m_flPathLocation = 0x810; // float32
                constexpr std::ptrdiff_t m_flT = 0x814; // float32
                constexpr std::ptrdiff_t m_nCurrentNodeIndex = 0x818; // int32
                constexpr std::ptrdiff_t m_nPreviousNodeIndex = 0x81C; // int32
                constexpr std::ptrdiff_t m_eSolidType = 0x820; // SolidType_t
                constexpr std::ptrdiff_t m_bIsMoving = 0x821; // bool
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x824; // float32
                constexpr std::ptrdiff_t m_flDistanceToReachMaxSpeed = 0x828; // float32
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x82C; // float32
                constexpr std::ptrdiff_t m_flDistanceToReachZeroSpeed = 0x830; // float32
                constexpr std::ptrdiff_t m_flTimeMovementStart = 0x834; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeMovementStop = 0x838; // GameTime_t
                constexpr std::ptrdiff_t m_hStopAtNode = 0x83C; // CHandle<CMoverPathNode>
                constexpr std::ptrdiff_t m_flPathLocationToBeginStop = 0x840; // float32
                constexpr std::ptrdiff_t m_iszStartForwardSound = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLoopForwardSound = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStopForwardSound = 0x858; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStartReverseSound = 0x860; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLoopReverseSound = 0x868; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszStopReverseSound = 0x870; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszArriveAtDestinationSound = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnMovementEnd = 0x898; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bStartAtClosestPoint = 0x8C0; // bool
                constexpr std::ptrdiff_t m_bStartAtEnd = 0x8C1; // bool
                constexpr std::ptrdiff_t m_eOrientationUpdate = 0x8C4; // CFuncMover::OrientationUpdate_t
                constexpr std::ptrdiff_t m_flTimeStartOrientationChange = 0x8C8; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeToBlendToNewOrientation = 0x8CC; // float32
                constexpr std::ptrdiff_t m_flDurationBlendToNewOrientationRan = 0x8D0; // float32
                constexpr std::ptrdiff_t m_nOriginalOrientationIndex = 0x8D4; // int32
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x8D8; // bool
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x8D9; // bool
                constexpr std::ptrdiff_t m_OnNodePassed = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszOrientationMatchEntityName = 0x908; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOrientationMatchEntity = 0x910; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flTimeToTraverseToNextNode = 0x914; // float32
                constexpr std::ptrdiff_t m_vLerpToNewPosStartInPathEntitySpace = 0x918; // Vector
                constexpr std::ptrdiff_t m_vLerpToNewPosEndInPathEntitySpace = 0x924; // Vector
                constexpr std::ptrdiff_t m_flLerpToPositionT = 0x930; // float32
                constexpr std::ptrdiff_t m_flLerpToPositionDeltaT = 0x934; // float32
                constexpr std::ptrdiff_t m_OnLerpToPositionComplete = 0x938; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bIsPaused = 0x960; // bool
                constexpr std::ptrdiff_t m_eTransitionedToPathNodeAction = 0x964; // CFuncMover::TransitionToPathNodeAction_t
                constexpr std::ptrdiff_t m_nDelayedTeleportToNode = 0x968; // int32
                constexpr std::ptrdiff_t m_bIsVerboseLogging = 0x96C; // bool
                constexpr std::ptrdiff_t m_hFollowEntity = 0x970; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFollowDistance = 0x974; // float32
                constexpr std::ptrdiff_t m_flFollowMinimumSpeed = 0x978; // float32
                constexpr std::ptrdiff_t m_flCurFollowEntityT = 0x97C; // float32
                constexpr std::ptrdiff_t m_flCurFollowSpeed = 0x980; // float32
                constexpr std::ptrdiff_t m_strOrientationFaceEntityName = 0x988; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOrientationFaceEntity = 0x990; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnStart = 0x998; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartForward = 0x9C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartReverse = 0x9E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStop = 0xA10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStopped = 0xA38; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bNextNodeReturnsCurrent = 0xA60; // bool
                constexpr std::ptrdiff_t m_bStartedMoving = 0xA61; // bool
                constexpr std::ptrdiff_t m_eFollowEntityDirection = 0xA80; // CFuncMover::FollowEntityDirection_t
            }
            // Parent: CBreakableProp
            // Field count: 38
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_bAwake (bool)
            namespace CPhysicsProp {
                constexpr std::ptrdiff_t m_MotionEnabled = 0xC60; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwake = 0xCB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAsleep = 0xCD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xD00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xD28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xD50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xD78; // bool
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xD79; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xD7A; // bool
                constexpr std::ptrdiff_t m_massScale = 0xD7C; // float32
                constexpr std::ptrdiff_t m_buoyancyScale = 0xD80; // float32
                constexpr std::ptrdiff_t m_damageType = 0xD84; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xD88; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xD8C; // float32
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xD90; // bool
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xD91; // bool
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xD92; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xD93; // bool
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xD94; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xD95; // bool
                constexpr std::ptrdiff_t m_flLastBurn = 0xD98; // GameTime_t
                constexpr std::ptrdiff_t m_nDynamicContinuousContactBehavior = 0xD9C; // DynamicContinuousContactBehavior_t
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xDA0; // GameTime_t
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xDA4; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xDA8; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xDAC; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xDB0; // Color
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xDB4; // bool
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xDB5; // bool
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xDBF; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xDC0; // bool
                constexpr std::ptrdiff_t m_CrateType = 0xDC4; // CPhysicsProp::CrateType_t
                constexpr std::ptrdiff_t m_strItemClass = 0xDC8; // CUtlSymbolLarge[4]
                constexpr std::ptrdiff_t m_nItemCount = 0xDE8; // int32[4]
                constexpr std::ptrdiff_t m_bRemovableForAmmoBalancing = 0xDF8; // bool
                constexpr std::ptrdiff_t m_bAwake = 0xDF9; // bool
                constexpr std::ptrdiff_t m_bAttachedToReferenceFrame = 0xDFA; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CFuncNavObstruction {
                constexpr std::ptrdiff_t m_bDisabled = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bUseAsyncObstacleUpdate = 0x7F1; // bool
            }
            // Parent: CPhysConstraint
            // Field count: 12
            namespace CPhysWheelConstraint {
                constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x560; // float32
                constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x564; // float32
                constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x568; // float32
                constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x56C; // bool
                constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x570; // float32
                constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x574; // float32
                constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x578; // bool
                constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x57C; // float32
                constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x580; // float32
                constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x584; // float32
                constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x588; // float32
                constexpr std::ptrdiff_t m_hSteeringMimicsEntity = 0x58C; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x4F0; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x4F4; // CHandle<CSkyCamera>
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CPointPulse {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            namespace CMolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0xC40; // bool
                constexpr std::ptrdiff_t m_bDetonated = 0xC58; // bool
                constexpr std::ptrdiff_t m_stillTimer = 0xC60; // IntervalTimer
                constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xD40; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x548; // CUtlSymbolLarge
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerToggleSave {
            }
            // Parent: CBaseEntity
            // Field count: 17
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            namespace CColorCorrection {
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x500; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x504; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxWeight = 0x508; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x50C; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x50D; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x50E; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x50F; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x510; // bool
                constexpr std::ptrdiff_t m_MinFalloff = 0x514; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x518; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x51C; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x520; // char[512]
                constexpr std::ptrdiff_t m_lookupFilename = 0x720; // CUtlSymbolLarge
            }
            // Parent: CPropDoorRotating
            // Field count: 4
            namespace CPropDoorRotatingBreakable {
                constexpr std::ptrdiff_t m_bBreakable = 0x1090; // bool
                constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0x1091; // bool
                constexpr std::ptrdiff_t m_currentDamageState = 0x1094; // int32
                constexpr std::ptrdiff_t m_damageStates = 0x1098; // CUtlVector<CUtlSymbolLarge>
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightDirectionalEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace CBaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0x7D8; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0x7E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_CustomOutput0 = 0x7F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput1 = 0x820; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput2 = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput3 = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput4 = 0x898; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput5 = 0x8C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput6 = 0x8E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput7 = 0x910; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput8 = 0x938; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput9 = 0x960; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            namespace CBreakable {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x7E0; // CPropDataComponent
                constexpr std::ptrdiff_t m_Material = 0x820; // Materials
                constexpr std::ptrdiff_t m_hBreaker = 0x824; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Explosion = 0x828; // Explosions
                constexpr std::ptrdiff_t m_iszSpawnObject = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPressureDelay = 0x838; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x83C; // int32
                constexpr std::ptrdiff_t m_iszPropData = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x848; // float32
                constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x84C; // EOverrideBlockLOS_t
                constexpr std::ptrdiff_t m_OnBreak = 0x850; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x878; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x8A0; // PerformanceMode_t
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x8A4; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x8A8; // GameTime_t
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoLandmark {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x4F0; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x520; // CEntityIOOutput
            }
            // Parent: 
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlaySceneBase__CursorState_t {
                constexpr std::ptrdiff_t m_sceneInstance = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_mainActor = 0x4; // CHandle<CBaseEntity>
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
            // Field count: 14
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x4F0; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x4F4; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x4F8; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4FC; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4FD; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x500; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x504; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x508; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x509; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x50C; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x510; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x514; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x518; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x51C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_hGradientFogTexture (HRenderTextureStrong)
            // NetworkVarNames: m_flFogStartDistance (float)
            // NetworkVarNames: m_flFogEndDistance (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogStartHeight (float)
            // NetworkVarNames: m_flFogEndHeight (float)
            // NetworkVarNames: m_flFarZ (float)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_flFogVerticalExponent (float)
            // NetworkVarNames: m_fogColor (Color)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace CGradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x4FC; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x500; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x504; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x508; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x50C; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x510; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x514; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x518; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x51C; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x520; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x524; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x528; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x529; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x52A; // bool
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 9
            namespace CSoundOpvarSetAABBEntity {
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x6A8; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x6B4; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x6CC; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x6D8; // int32
                constexpr std::ptrdiff_t m_vInnerMins = 0x6DC; // Vector
                constexpr std::ptrdiff_t m_vInnerMaxs = 0x6E8; // Vector
                constexpr std::ptrdiff_t m_vOuterMins = 0x6F4; // Vector
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x700; // Vector
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
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace CPointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x9E0; // char[512]
            }
            // Parent: 
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
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
            // Field count: 35
            namespace CFuncRotator {
                constexpr std::ptrdiff_t m_hRotatorTarget = 0x7D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bIsRotating = 0x7DC; // bool
                constexpr std::ptrdiff_t m_bIsReversing = 0x7DD; // bool
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flDistanceAlongArcTraveled = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flTimeToWaitOscillate = 0x7EC; // float32
                constexpr std::ptrdiff_t m_flTimeRotationStart = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_qLSPrevChange = 0x800; // Quaternion
                constexpr std::ptrdiff_t m_qWSPrev = 0x810; // Quaternion
                constexpr std::ptrdiff_t m_qWSInit = 0x820; // Quaternion
                constexpr std::ptrdiff_t m_qLSInit = 0x830; // Quaternion
                constexpr std::ptrdiff_t m_qLSOrientation = 0x840; // Quaternion
                constexpr std::ptrdiff_t m_OnRotationStarted = 0x850; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRotationCompleted = 0x878; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillate = 0x8A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateStartArrive = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateStartDepart = 0x8F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateEndArrive = 0x918; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOscillateEndDepart = 0x940; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bOscillateDepart = 0x968; // bool
                constexpr std::ptrdiff_t m_nOscillateCount = 0x96C; // int32
                constexpr std::ptrdiff_t m_eRotateType = 0x970; // CFuncRotator::Rotate_t
                constexpr std::ptrdiff_t m_ePrevRotateType = 0x974; // CFuncRotator::Rotate_t
                constexpr std::ptrdiff_t m_bHasTargetOverride = 0x978; // bool
                constexpr std::ptrdiff_t m_qOrientationOverride = 0x980; // Quaternion
                constexpr std::ptrdiff_t m_eSpaceOverride = 0x990; // RotatorTargetSpace_t
                constexpr std::ptrdiff_t m_qAngularVelocity = 0x994; // QAngle
                constexpr std::ptrdiff_t m_vLookAtForcedUp = 0x9A0; // Vector
                constexpr std::ptrdiff_t m_strRotatorTarget = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bRecordHistory = 0x9B8; // bool
                constexpr std::ptrdiff_t m_vecRotatorHistory = 0x9C0; // CUtlVector<RotatorHistoryEntry_t>
                constexpr std::ptrdiff_t m_bReturningToPreviousOrientation = 0x9D8; // bool
                constexpr std::ptrdiff_t m_vecRotatorQueue = 0x9E0; // CUtlVector<RotatorQueueEntry_t>
                constexpr std::ptrdiff_t m_vecRotatorQueueHistory = 0x9F8; // CUtlVector<RotatorHistoryEntry_t>
            }
            // Parent: CBaseEntity
            // Field count: 14
            namespace CSoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4F0; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4F1; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x4F2; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x4F3; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4F4; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4F8; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x510; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x538; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x560; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x590; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x5AC; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x5B0; // int32
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerCounterterrorist {
            }
            // Parent: CLogicalEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fadeColor (Color)
            namespace CEnvFade {
                constexpr std::ptrdiff_t m_fadeColor = 0x4F0; // Color
                constexpr std::ptrdiff_t m_Duration = 0x4F4; // float32
                constexpr std::ptrdiff_t m_HoldDuration = 0x4F8; // float32
                constexpr std::ptrdiff_t m_OnBeginFade = 0x500; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float32
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            namespace CTriggerImpact {
                constexpr std::ptrdiff_t m_flMagnitude = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flNoise = 0x9D4; // float32
                constexpr std::ptrdiff_t m_flViewkick = 0x9D8; // float32
                constexpr std::ptrdiff_t m_pOutputForce = 0x9E0; // CEntityOutputTemplate<Vector>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
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
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_eDoorState (DoorState_t)
            // NetworkVarNames: m_bLocked (bool)
            // NetworkVarNames: m_bNoNPCs (bool)
            // NetworkVarNames: m_closedPosition (Vector)
            // NetworkVarNames: m_closedAngles (QAngle)
            // NetworkVarNames: m_hMaster (CHandle<CBasePropDoor>)
            namespace CBasePropDoor {
                constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xD60; // float32
                constexpr std::ptrdiff_t m_hDoorList = 0xD68; // CUtlVector<CHandle<CBasePropDoor>>
                constexpr std::ptrdiff_t m_nHardwareType = 0xD80; // int32
                constexpr std::ptrdiff_t m_bNeedsHardware = 0xD84; // bool
                constexpr std::ptrdiff_t m_eDoorState = 0xD88; // DoorState_t
                constexpr std::ptrdiff_t m_bLocked = 0xD8C; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0xD8D; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0xD90; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0xD9C; // QAngle
                constexpr std::ptrdiff_t m_hBlocker = 0xDA8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bFirstBlocked = 0xDAC; // bool
                constexpr std::ptrdiff_t m_ls = 0xDB0; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0xDD0; // bool
                constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xDD4; // VectorWS
                constexpr std::ptrdiff_t m_hActivator = 0xDE0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_SoundMoving = 0xDF8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundOpen = 0xE00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundClose = 0xE08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLock = 0xE10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundUnlock = 0xE18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLatch = 0xE20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundPound = 0xE28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundJiggle = 0xE30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLockedAnim = 0xE38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_numCloseAttempts = 0xE40; // int32
                constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xE44; // CUtlStringToken
                constexpr std::ptrdiff_t m_SlaveName = 0xE48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hMaster = 0xE50; // CHandle<CBasePropDoor>
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0xE58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0xE80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xEA8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xED0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xEF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0xF20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0xF48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0xF70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0xF98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAjarOpen = 0xFC0; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicBranchList {
                constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4F0; // CUtlSymbolLarge[16]
                constexpr std::ptrdiff_t m_LogicBranchList = 0x570; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_eLastState = 0x588; // CLogicBranchList::LogicBranchListenerLastState_t
                constexpr std::ptrdiff_t m_OnAllTrue = 0x590; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAllFalse = 0x5B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMixed = 0x5E0; // CEntityIOOutput
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
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xC58; // bool
                constexpr std::ptrdiff_t m_bNavObstacleUpdatesOverridden = 0xC59; // bool
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xC5A; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xC5B; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xC60; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xCB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xCD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xD00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xD28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xD30; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xD34; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xD35; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xD36; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xD37; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xD38; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xD39; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xD3C; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xD40; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xD44; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xD48; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0xD4C; // int32
            }
            // Parent: CHostage
            // Field count: 0
            namespace CHostageAlias_info_hostage_spawn {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x548; // int32
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_vecMoveDirEntitySpace (Vector)
            // NetworkVarNames: m_flTargetSpeed (float32)
            // NetworkVarNames: m_nTransitionStartTick (GameTick_t)
            // NetworkVarNames: m_nTransitionDurationTicks (int)
            // NetworkVarNames: m_flTransitionStartSpeed (float32)
            // NetworkVarNames: m_hConveyorModels (EHANDLE)
            namespace CFuncConveyor {
                constexpr std::ptrdiff_t m_szConveyorModels = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x7E0; // float32
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7E4; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x7F0; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x7FC; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x800; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x804; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x808; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x810; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            }
            // Parent: CBaseTrigger
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_gravityScale (float)
            // NetworkVarNames: m_linearLimit (float)
            // NetworkVarNames: m_linearDamping (float)
            // NetworkVarNames: m_angularLimit (float)
            // NetworkVarNames: m_angularDamping (float)
            // NetworkVarNames: m_linearForce (float)
            // NetworkVarNames: m_flFrequency (float)
            // NetworkVarNames: m_flDampingRatio (float)
            // NetworkVarNames: m_vecLinearForcePointAt (Vector)
            // NetworkVarNames: m_bCollapseToForcePoint (bool)
            // NetworkVarNames: m_vecLinearForcePointAtWorld (Vector)
            // NetworkVarNames: m_vecLinearForceDirection (Vector)
            // NetworkVarNames: m_bConvertToDebrisWhenPossible (bool)
            namespace CTriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x9B8; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x9BC; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x9C0; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x9C4; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x9C8; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x9CC; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x9D4; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x9D8; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x9E4; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x9E8; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x9F4; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xA00; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetB {
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CFuncTimescale {
                constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flAcceleration = 0x4F4; // float32
                constexpr std::ptrdiff_t m_flMinBlendRate = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4FC; // float32
                constexpr std::ptrdiff_t m_isStarted = 0x500; // bool
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1E9; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1F0; // CAttachmentNameSymbolWithStorage
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x2F0; // CUtlString
                constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x3D8; // uint8
                constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x3DC; // float32
                constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x3E0; // float32
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x3E4; // bool
                constexpr std::ptrdiff_t m_iFlags = 0x3E5; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x3E6; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x3E7; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x3E8; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x3EC; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x3F0; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x3F4; // int32
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x3F8; // bool
                constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x3F9; // bool
                constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x3FA; // bool
                constexpr std::ptrdiff_t m_iWeight = 0x3FC; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x400; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x401; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x404; // RumbleEffect_t
                constexpr std::ptrdiff_t m_flDropSpeed = 0x408; // float32
                constexpr std::ptrdiff_t m_iSlot = 0x40C; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x410; // int32
                constexpr std::ptrdiff_t m_aShootSounds = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 24
            namespace CSoundOpvarSetPointEntity {
                constexpr std::ptrdiff_t m_OnEnter = 0x598; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExit = 0x5C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAutoDisable = 0x5E8; // bool
                constexpr std::ptrdiff_t m_flDistanceMin = 0x62C; // float32
                constexpr std::ptrdiff_t m_flDistanceMax = 0x630; // float32
                constexpr std::ptrdiff_t m_flDistanceMapMin = 0x634; // float32
                constexpr std::ptrdiff_t m_flDistanceMapMax = 0x638; // float32
                constexpr std::ptrdiff_t m_flOcclusionRadius = 0x63C; // float32
                constexpr std::ptrdiff_t m_flOcclusionMin = 0x640; // float32
                constexpr std::ptrdiff_t m_flOcclusionMax = 0x644; // float32
                constexpr std::ptrdiff_t m_flValSetOnDisable = 0x648; // float32
                constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x64C; // bool
                constexpr std::ptrdiff_t m_bReloading = 0x64D; // bool
                constexpr std::ptrdiff_t m_nSimulationMode = 0x650; // int32
                constexpr std::ptrdiff_t m_nVisibilitySamples = 0x654; // int32
                constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x658; // Vector
                constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x664; // float32
                constexpr std::ptrdiff_t m_hDynamicEntity = 0x668; // CEntityHandle
                constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x670; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x678; // float32
                constexpr std::ptrdiff_t m_vPathingSourcePos = 0x67C; // Vector
                constexpr std::ptrdiff_t m_vPathingListenerPos = 0x688; // Vector
                constexpr std::ptrdiff_t m_vPathingDirection = 0x694; // Vector
                constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x6A0; // int32
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
                constexpr std::ptrdiff_t m_GroupNames = 0x7E0; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_Tags = 0x7F8; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bIsGroup = 0x810; // bool
                constexpr std::ptrdiff_t m_bGroupByPrefab = 0x811; // bool
                constexpr std::ptrdiff_t m_bGroupByVolume = 0x812; // bool
                constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x813; // bool
                constexpr std::ptrdiff_t m_bIsInGroup = 0x814; // bool
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: CBaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_flInfluenceRadius (float)
            // NetworkVarNames: m_Entity_vBoxProjectMins (Vector)
            // NetworkVarNames: m_Entity_vBoxProjectMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_flDiffuseScale (float)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_bDefaultEnvMap (bool)
            // NetworkVarNames: m_Entity_bDefaultSpecEnvMap (bool)
            // NetworkVarNames: m_Entity_bIndoorCubeMap (bool)
            // NetworkVarNames: m_Entity_bCopyDiffuseFromDefaultCubemap (bool)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace CEnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x570; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x578; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x57C; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x580; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x58C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x598; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x59C; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x5A0; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x5A4; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x5A8; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x5AC; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x5B8; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x5BC; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x5BD; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x5BE; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x5BF; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x5C0; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x5D0; // bool
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
            // Field count: 15
            namespace CTriggerLerpObject {
                constexpr std::ptrdiff_t m_iszLerpTarget = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTarget = 0x9B0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x9B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x9C0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flLerpDuration = 0x9C4; // float32
                constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x9C8; // bool
                constexpr std::ptrdiff_t m_bSingleLerpObject = 0x9C9; // bool
                constexpr std::ptrdiff_t m_vecLerpingObjects = 0x9D0; // CUtlVector<lerpdata_t>
                constexpr std::ptrdiff_t m_iszLerpEffect = 0x9E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLerpSound = 0x9F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x9F8; // bool
                constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x9FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnLerpStarted = 0xA00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLerpFinished = 0xA28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDetached = 0xA50; // CEntityIOOutput
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropOverride {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerSave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x9A8; // bool
                constexpr std::ptrdiff_t m_fDangerousTimer = 0x9AC; // float32
                constexpr std::ptrdiff_t m_minHitPoints = 0x9B0; // int32
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPointHurt {
                constexpr std::ptrdiff_t m_nDamage = 0x4F0; // int32
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4F4; // DamageTypes_t
                constexpr std::ptrdiff_t m_flRadius = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x4FC; // float32
                constexpr std::ptrdiff_t m_strTarget = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pActivator = 0x508; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Field count: 24
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_nTickBase (uint32)
            // NetworkVarNames: m_hPawn (CHandle<CBasePlayerPawn>)
            // NetworkVarNames: m_bKnownTeamMismatch (bool)
            // NetworkVarNames: m_iConnected (PlayerConnectedState)
            // NetworkVarNames: m_iszPlayerName (char)
            // NetworkVarNames: m_steamID (uint64)
            // NetworkVarNames: m_bNoClipEnabled (bool)
            // NetworkVarNames: m_iDesiredFOV (uint32)
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4F8; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x500; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x528; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x52C; // bool
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x530; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x534; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x538; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x550; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x554; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x558; // char[128]
                constexpr std::ptrdiff_t m_szNetworkIDString = 0x5D8; // CUtlString
                constexpr std::ptrdiff_t m_fLerpTime = 0x5E0; // float32
                constexpr std::ptrdiff_t m_bLagCompensation = 0x5E4; // bool
                constexpr std::ptrdiff_t m_bPredict = 0x5E5; // bool
                constexpr std::ptrdiff_t m_bIsLowViolence = 0x5EC; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0x5ED; // bool
                constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x728; // ChatIgnoreType_t
                constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x72C; // float32
                constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x730; // float32
                constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x734; // int32
                constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x738; // bool
                constexpr std::ptrdiff_t m_steamID = 0x748; // uint64
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x750; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x754; // uint32
            }
        }
    }
}
