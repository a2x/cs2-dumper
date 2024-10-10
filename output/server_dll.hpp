// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-10 00:00:51.448403700 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 653
        // Enum count: 138
        namespace server_dll {
            // Alignment: 4
            // Member count: 3
            enum class PropDoorRotatingOpenDirection_e : uint32_t {
                DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
                DOOR_ROTATING_OPEN_FORWARD = 0x1,
                DOOR_ROTATING_OPEN_BACKWARD = 0x2
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
            // Member count: 10
            enum class PreviewCharacterMode : uint32_t {
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
            // Member count: 3
            enum class ObserverInterpState_t : uint32_t {
                OBSERVER_INTERP_NONE = 0x0,
                OBSERVER_INTERP_TRAVELING = 0x1,
                OBSERVER_INTERP_SETTLING = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class WorldTextPanelOrientation_t : uint32_t {
                WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
                WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
                WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
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
            // Member count: 3
            enum class BeginDeathLifeStateTransition_t : uint8_t {
                NO_CHANGE_IN_LIFESTATE = 0x0,
                TRANSITION_TO_LIFESTATE_DYING = 0x1,
                TRANSITION_TO_LIFESTATE_DEAD = 0x2
            };
            // Alignment: 2
            // Member count: 14
            enum class SoundTypes_t : uint16_t {
                SOUND_NONE = 0x0,
                SOUND_COMBAT = 0x1,
                SOUND_PLAYER = 0x2,
                SOUND_DANGER = 0x3,
                SOUND_BULLET_IMPACT = 0x4,
                SOUND_THUMPER = 0x5,
                SOUND_PHYSICS_DANGER = 0x6,
                SOUND_MOVE_AWAY = 0x7,
                SOUND_PLAYER_VEHICLE = 0x8,
                SOUND_GLASS_BREAK = 0x9,
                SOUND_PHYSICS_OBJECT = 0xA,
                SOUND_WARN_FRIENDS = 0xB,
                SOUND_FOOD = 0xC,
                NUM_AI_SOUND_TYPES = 0xD
            };
            // Alignment: 4
            // Member count: 24
            enum class PlayerAnimEvent_t : uint32_t {
                PLAYERANIMEVENT_FIRE_GUN_PRIMARY = 0x0,
                PLAYERANIMEVENT_FIRE_GUN_SECONDARY = 0x1,
                PLAYERANIMEVENT_GRENADE_PULL_PIN = 0x2,
                PLAYERANIMEVENT_THROW_GRENADE = 0x3,
                PLAYERANIMEVENT_JUMP = 0x4,
                PLAYERANIMEVENT_RELOAD = 0x5,
                PLAYERANIMEVENT_CLEAR_FIRING = 0x6,
                PLAYERANIMEVENT_DEPLOY = 0x7,
                PLAYERANIMEVENT_SILENCER_STATE = 0x8,
                PLAYERANIMEVENT_SILENCER_TOGGLE = 0x9,
                PLAYERANIMEVENT_THROW_GRENADE_UNDERHAND = 0xA,
                PLAYERANIMEVENT_CATCH_WEAPON = 0xB,
                PLAYERANIMEVENT_LOOKATWEAPON_REQUEST = 0xC,
                PLAYERANIMEVENT_RELOAD_CANCEL_LOOKATWEAPON = 0xD,
                PLAYERANIMEVENT_HAULBACK = 0xE,
                PLAYERANIMEVENT_IDLE = 0xF,
                PLAYERANIMEVENT_STRIKE_HIT = 0x10,
                PLAYERANIMEVENT_STRIKE_MISS = 0x11,
                PLAYERANIMEVENT_BACKSTAB = 0x12,
                PLAYERANIMEVENT_DRYFIRE = 0x13,
                PLAYERANIMEVENT_FIDGET = 0x14,
                PLAYERANIMEVENT_RELEASE = 0x15,
                PLAYERANIMEVENT_TAUNT = 0x16,
                PLAYERANIMEVENT_COUNT = 0x17
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
            // Member count: 5
            enum class LifeState_t : uint32_t {
                LIFE_ALIVE = 0x0,
                LIFE_DYING = 0x1,
                LIFE_DEAD = 0x2,
                LIFE_RESPAWNABLE = 0x3,
                LIFE_RESPAWNING = 0x4
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
            // Alignment: 4
            // Member count: 4
            enum class BreakableContentsType_t : uint32_t {
                BC_DEFAULT = 0x0,
                BC_EMPTY = 0x1,
                BC_PROP_GROUP_OVERRIDE = 0x2,
                BC_PARTICLE_SYSTEM_OVERRIDE = 0x3
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
            // Member count: 5
            enum class AnimLoopMode_t : uint32_t {
                ANIM_LOOP_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
                ANIM_LOOP_MODE_LOOPING = 0x1,
                ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
                ANIM_LOOP_MODE_COUNT = 0x3
            };
            // Alignment: 2
            // Member count: 10
            enum class SoundFlags_t : uint16_t {
                SOUND_FLAGS_NONE = 0x0,
                SOUND_FLAG_GUNFIRE = 0x1,
                SOUND_FLAG_COMBINE_ONLY = 0x2,
                SOUND_FLAG_REACT_TO_SOURCE = 0x4,
                SOUND_FLAG_EXPLOSION = 0x8,
                SOUND_FLAG_EXCLUDE_COMBINE = 0x10,
                SOUND_FLAG_DANGER_APPROACH = 0x20,
                SOUND_FLAG_ALLIES_ONLY = 0x40,
                SOUND_FLAG_PANIC_NPCS = 0x80,
                SOUND_FLAG_SQUAD_ONLY = 0x100
            };
            // Alignment: 4
            // Member count: 10
            enum class Class_T : uint32_t {
                CLASS_NONE = 0x0,
                CLASS_PLAYER = 0x1,
                CLASS_PLAYER_ALLY = 0x2,
                CLASS_BOMB = 0x3,
                CLASS_FOOT_CONTACT_SHADOW = 0x4,
                CLASS_WEAPON = 0x5,
                CLASS_WATER_SPLASHER = 0x6,
                CLASS_WEAPON_VIEWMODEL = 0x7,
                CLASS_DOOR = 0x8,
                NUM_CLASSIFY_CLASSES = 0x9
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
            // Member count: 47
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
                AE_RAGDOLL = 0xD,
                AE_CL_STOP_RAGDOLL_CONTROL = 0xE,
                AE_CL_ENABLE_BODYGROUP = 0xF,
                AE_CL_DISABLE_BODYGROUP = 0x10,
                AE_BODYGROUP_SET_VALUE = 0x11,
                AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x12,
                AE_WEAPON_PERFORM_ATTACK = 0x13,
                AE_FIRE_INPUT = 0x14,
                AE_CL_CLOTH_ATTR = 0x15,
                AE_CL_CLOTH_GROUND_OFFSET = 0x16,
                AE_CL_CLOTH_STIFFEN = 0x17,
                AE_CL_CLOTH_EFFECT = 0x18,
                AE_CL_CREATE_ANIM_SCOPE_PROP = 0x19,
                AE_SV_IKLOCK = 0x1A,
                AE_PULSE_GRAPH = 0x1B,
                AE_PULSE_GRAPH_LOOKAT = 0x1C,
                AE_PULSE_GRAPH_AIMAT = 0x1D,
                AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1E,
                AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1F,
                AE_DISABLE_PLATFORM = 0x20,
                AE_ENABLE_PLATFORM = 0x21,
                AE_ANIMGRAPH_SET_PARAM = 0x22,
                AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x23,
                AE_CL_BODYGROUP_SET_TO_CLIP = 0x24,
                AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 0x25,
                AE_SV_SHOW_SILENCER = 0x26,
                AE_SV_ATTACH_SILENCER_COMPLETE = 0x27,
                AE_SV_HIDE_SILENCER = 0x28,
                AE_SV_DETACH_SILENCER_COMPLETE = 0x29,
                AE_CL_EJECT_MAG = 0x2A,
                AE_WPN_COMPLETE_RELOAD = 0x2B,
                AE_WPN_HEALTHSHOT_INJECT = 0x2C,
                AE_CL_C4_SCREEN_TEXT = 0x2D,
                AE_GRENADE_THROW_COMPLETE = 0x2E
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
            // Member count: 2
            enum class CommandEntitySpecType_t : uint32_t {
                SPEC_SEARCH = 0x0,
                SPEC_TYPES_COUNT = 0x1
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
            // Member count: 20
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
                WEAPONTYPE_FISTS = 0xC,
                WEAPONTYPE_BREACHCHARGE = 0xD,
                WEAPONTYPE_BUMPMINE = 0xE,
                WEAPONTYPE_TABLET = 0xF,
                WEAPONTYPE_MELEE = 0x10,
                WEAPONTYPE_SHIELD = 0x11,
                WEAPONTYPE_ZONE_REPULSOR = 0x12,
                WEAPONTYPE_UNKNOWN = 0x13
            };
            // Alignment: 4
            // Member count: 3
            enum class EntFinderMethod_t : uint32_t {
                ENT_FIND_METHOD_NEAREST = 0x0,
                ENT_FIND_METHOD_FARTHEST = 0x1,
                ENT_FIND_METHOD_RANDOM = 0x2
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
            // Member count: 4
            enum class PerformanceMode_t : uint32_t {
                PM_NORMAL = 0x0,
                PM_NO_GIBS = 0x1,
                PM_FULL_GIBS = 0x2,
                PM_REDUCED_GIBS = 0x3
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
            // Member count: 20
            enum class NavAttributeEnum : uint32_t {
                NAV_MESH_AVOID = 0x80,
                NAV_MESH_STAIRS = 0x1000,
                NAV_MESH_NON_ZUP = 0x8000,
                NAV_MESH_SHORT_HEIGHT = 0x10000,
                NAV_MESH_NON_ZUP_TRANSITION = 0x20000,
                NAV_MESH_CROUCH = 0x10000,
                NAV_MESH_JUMP = 0x2,
                NAV_MESH_PRECISE = 0x4,
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
                NAV_ATTR_LAST_INDEX = 0x1F
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
            // Member count: 18
            enum class CSPlayerBlockingUseAction_t : uint32_t {
                k_CSPlayerBlockingUseAction_None = 0x0,
                k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
                k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
                k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
                k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
                k_CSPlayerBlockingUseAction_OpeningSafe = 0x5,
                k_CSPlayerBlockingUseAction_EquippingParachute = 0x6,
                k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 0x7,
                k_CSPlayerBlockingUseAction_EquippingContract = 0x8,
                k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 0x9,
                k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 0xA,
                k_CSPlayerBlockingUseAction_PayingToOpenDoor = 0xB,
                k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 0xC,
                k_CSPlayerBlockingUseAction_EquippingExoJump = 0xD,
                k_CSPlayerBlockingUseAction_PickingUpBumpMine = 0xE,
                k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0xF,
                k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x10,
                k_CSPlayerBlockingUseAction_MaxCount = 0x11
            };
            // Alignment: 4
            // Member count: 3
            enum class CSWeaponState_t : uint32_t {
                WEAPON_NOT_CARRIED = 0x0,
                WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
                WEAPON_IS_ACTIVE = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class CommandExecMode_t : uint32_t {
                EXEC_MANUAL = 0x0,
                EXEC_LEVELSTART = 0x1,
                EXEC_PERIODIC = 0x2,
                EXEC_MODES_COUNT = 0x3
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
            // Member count: 4
            enum class ScriptedMoveType_t : uint32_t {
                SCRIPTED_MOVETYPE_NONE = 0x0,
                SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
                SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
                SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3
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
            // Alignment: 4
            // Member count: 4
            enum class AmmoPosition_t : uint32_t {
                AMMO_POSITION_INVALID = 0xFFFFFFFFFFFFFFFF,
                AMMO_POSITION_PRIMARY = 0x0,
                AMMO_POSITION_SECONDARY = 0x1,
                AMMO_POSITION_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 10
            enum class CDebugOverlayFilterType_t : uint32_t {
                NONE = 0x0,
                TEXT = 0x1,
                ENTITY = 0x2,
                COUNT = 0x3,
                TACTICAL_SEARCH = 0x4,
                AI_SCHEDULE = 0x5,
                AI_TASK = 0x6,
                AI_EVENT = 0x7,
                END_SIM_HISTORY_TYPES = 0x8,
                COMBINED = 0xFFFFFFFFFFFFFFFF
            };
            // Alignment: 4
            // Member count: 23
            enum class PreviewEOMCelebration : uint32_t {
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
            // Member count: 9
            enum class ChickenActivity : uint32_t {
                IDLE = 0x0,
                SQUAT = 0x1,
                WALK = 0x2,
                RUN = 0x3,
                GLIDE = 0x4,
                LAND = 0x5,
                PANIC = 0x6,
                TRICK = 0x7,
                TURN_IN_PLACE = 0x8
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
                OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
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
                OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000
            };
            // Alignment: 4
            // Member count: 3
            enum class AmmoFlags_t : uint32_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
                AMMO_FLAG_MAX = 0x2
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
            // Member count: 4
            enum class WeaponSwitchReason_t : uint32_t {
                eDrawn = 0x0,
                eEquipped = 0x1,
                eUserInitiatedSwitchToLast = 0x2,
                eUserInitiatedSwitchHands = 0x3
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
            // Member count: 24
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
                DMG_DROWN = 0x4000,
                DMG_POISON = 0x8000,
                DMG_RADIATION = 0x10000,
                DMG_DROWNRECOVER = 0x20000,
                DMG_ACID = 0x40000,
                DMG_PHYSGUN = 0x100000,
                DMG_DISSOLVE = 0x200000,
                DMG_BLAST_SURFACE = 0x400000,
                DMG_BUCKSHOT = 0x1000000,
                DMG_LASTGENERICFLAG = 0x1000000,
                DMG_HEADSHOT = 0x2000000,
                DMG_DANGERZONE = 0x4000000
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
            // Alignment: 4
            // Member count: 3
            enum class EntityDistanceMode_t : uint32_t {
                eOriginToOrigin = 0x0,
                eCenterToCenter = 0x1,
                eAxisToAxis = 0x2
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
            // Member count: 3
            enum class TRAIN_CODE : uint32_t {
                TRAIN_SAFE = 0x0,
                TRAIN_BLOCKING = 0x1,
                TRAIN_FOLLOWING = 0x2
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
            // Member count: 4
            enum class ScriptedHeldWeaponBehavior_t : uint32_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                eHolster = 0x0,
                eDeploy = 0x1,
                eDrop = 0x2
            };
            // Alignment: 4
            // Member count: 8
            enum class GrenadeType_t : uint32_t {
                GRENADE_TYPE_EXPLOSIVE = 0x0,
                GRENADE_TYPE_FLASH = 0x1,
                GRENADE_TYPE_FIRE = 0x2,
                GRENADE_TYPE_DECOY = 0x3,
                GRENADE_TYPE_SMOKE = 0x4,
                GRENADE_TYPE_SENSOR = 0x5,
                GRENADE_TYPE_SNOWBALL = 0x6,
                GRENADE_TYPE_TOTAL = 0x7
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
            // Member count: 17
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
                DMG_LASTDFLAG = 0x1000,
                DFLAG_IGNORE_ARMOR = 0x2000,
                DFLAG_SUPPRESS_UTILREMOVE = 0x4000
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
            // Member count: 7
            enum class ObserverMode_t : uint32_t {
                OBS_MODE_NONE = 0x0,
                OBS_MODE_FIXED = 0x1,
                OBS_MODE_IN_EYE = 0x2,
                OBS_MODE_CHASE = 0x3,
                OBS_MODE_ROAMING = 0x4,
                OBS_MODE_DIRECTED = 0x5,
                NUM_OBSERVER_MODES = 0x6
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
            // Parent: CBaseCombatCharacter
            // Field count: 1
            namespace CHostageExpresserShim {
                constexpr std::ptrdiff_t m_pExpresser = 0xA80; // 
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerSoundscape {
                constexpr std::ptrdiff_t m_hSoundscape = 0x920; // CHandle<CEnvSoundscapeTriggerable>
                constexpr std::ptrdiff_t m_SoundscapeName = 0x928; // 
                constexpr std::ptrdiff_t m_spectators = 0x930; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: CBreakableProp
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xB18; // 
                constexpr std::ptrdiff_t m_bNavObstacleUpdatesOverridden = 0xB19; // 
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xB1A; // 
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xB1B; // 
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xB20; // 
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xB48; // 
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xB70; // 
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xB98; // 
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xBC0; // 
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xBE8; // 
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xBF0; // 
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xBF4; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0xBF5; // 
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xBF6; // 
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xBF7; // 
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xBF8; // 
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xBF9; // 
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xBFC; // 
                constexpr std::ptrdiff_t m_nGlowRange = 0xC00; // 
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xC04; // 
                constexpr std::ptrdiff_t m_glowColor = 0xC08; // 
                constexpr std::ptrdiff_t m_nGlowTeam = 0xC0C; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncIllusionary {
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 41
            //
            // Metadata:
            // NetworkVarNames: m_flMaxFallVelocity (float)
            // NetworkVarNames: m_vecLadderNormal (Vector)
            // NetworkVarNames: m_nLadderSurfacePropIndex (int)
            // NetworkVarNames: m_flDuckAmount (float)
            // NetworkVarNames: m_flDuckSpeed (float)
            // NetworkVarNames: m_bDuckOverride (bool)
            // NetworkVarNames: m_bDesiresDuck (bool)
            // NetworkVarNames: m_nDuckTimeMsecs (uint32)
            // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
            // NetworkVarNames: m_nJumpTimeMsecs (uint32)
            // NetworkVarNames: m_flLastDuckTime (float)
            // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
            // NetworkVarNames: m_bOldJumpPressed (bool)
            // NetworkVarNames: m_flJumpUntil (float)
            // NetworkVarNames: m_flJumpVel (float)
            // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
            // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
            // NetworkVarNames: m_flOffsetTickCompleteTime (float)
            // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
            // NetworkVarNames: m_flStamina (float)
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x228; // 
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x22C; // 
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x238; // 
                constexpr std::ptrdiff_t m_flDuckAmount = 0x23C; // 
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x240; // 
                constexpr std::ptrdiff_t m_bDuckOverride = 0x244; // 
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x245; // 
                constexpr std::ptrdiff_t m_flDuckOffset = 0x248; // 
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x24C; // 
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x250; // 
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x254; // 
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x258; // 
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x268; // 
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x270; // 
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x271; // 
                constexpr std::ptrdiff_t m_bInStuckTest = 0x272; // 
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x280; // 
                constexpr std::ptrdiff_t m_nTraceCount = 0x480; // 
                constexpr std::ptrdiff_t m_StuckLast = 0x484; // 
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x488; // 
                constexpr std::ptrdiff_t m_flGroundMoveEfficiency = 0x48C; // 
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x490; // 
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x494; // 
                constexpr std::ptrdiff_t m_vecForward = 0x498; // 
                constexpr std::ptrdiff_t m_vecLeft = 0x4A4; // 
                constexpr std::ptrdiff_t m_vecUp = 0x4B0; // 
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4BC; // 
                constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4C0; // 
                constexpr std::ptrdiff_t m_iFootsteps = 0x4C4; // 
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4C8; // 
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4CC; // 
                constexpr std::ptrdiff_t m_flJumpUntil = 0x4D0; // 
                constexpr std::ptrdiff_t m_flJumpVel = 0x4D4; // 
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4D8; // 
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4E0; // 
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4E8; // 
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4EC; // 
                constexpr std::ptrdiff_t m_flStamina = 0x4F0; // 
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4F4; // 
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4F8; // 
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x4FC; // 
            }
            // Parent: None
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
                constexpr std::ptrdiff_t scale = 0x8; // 
                constexpr std::ptrdiff_t origin = 0xC; // 
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // 
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // 
                constexpr std::ptrdiff_t fog = 0x20; // 
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace CFists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0xF10; // 
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0xF14; // 
                constexpr std::ptrdiff_t m_bRestorePrevWep = 0xF18; // 
                constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0xF1C; // 
                constexpr std::ptrdiff_t m_hWeaponPrevious = 0xF20; // 
                constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0xF24; // 
                constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0xF25; // 
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerRemove {
                constexpr std::ptrdiff_t m_OnRemove = 0x920; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x538; // 
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CProjectedDecal {
                constexpr std::ptrdiff_t m_nTexture = 0x4E0; // 
                constexpr std::ptrdiff_t m_flDistance = 0x4E4; // 
            }
            // Parent: CFuncTrackChange
            // Field count: 0
            namespace CFuncTrackAuto {
            }
            // Parent: CBreakable
            // Field count: 0
            namespace CPushable {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerTripWire {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerMultiple {
                constexpr std::ptrdiff_t m_OnTrigger = 0x920; // 
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // 
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CTriggerPush {
                constexpr std::ptrdiff_t m_angPushEntitySpace = 0x920; // 
                constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x92C; // 
                constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x938; // 
                constexpr std::ptrdiff_t m_bUsePathSimple = 0x939; // 
                constexpr std::ptrdiff_t m_iszPathSimpleName = 0x940; // 
                constexpr std::ptrdiff_t m_PathSimple = 0x948; // 
                constexpr std::ptrdiff_t m_splinePushType = 0x950; // 
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x538; // 
                constexpr std::ptrdiff_t m_iHealthMin = 0x53C; // 
                constexpr std::ptrdiff_t m_iHealthMax = 0x540; // 
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: CBaseTrigger
            // Field count: 5
            namespace CTriggerProximity {
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x920; // 
                constexpr std::ptrdiff_t m_iszMeasureTarget = 0x928; // 
                constexpr std::ptrdiff_t m_fRadius = 0x930; // 
                constexpr std::ptrdiff_t m_nTouchers = 0x934; // 
                constexpr std::ptrdiff_t m_NearestEntityDistance = 0x938; // CEntityOutputTemplate<float32>
            }
            // Parent: CFuncBrush
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0x770; // 
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x778; // 
                constexpr std::ptrdiff_t m_EffectZapName = 0x780; // 
                constexpr std::ptrdiff_t m_iszEffectSource = 0x788; // 
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CBaseDMStart {
                constexpr std::ptrdiff_t m_Master = 0x4E0; // 
            }
            // Parent: CGameRulesProxy
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x4E0; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 5
            namespace CTriggerBrush {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x750; // 
                constexpr std::ptrdiff_t m_OnEndTouch = 0x778; // 
                constexpr std::ptrdiff_t m_OnUse = 0x7A0; // 
                constexpr std::ptrdiff_t m_iInputFilter = 0x7C8; // 
                constexpr std::ptrdiff_t m_iDontMessageParent = 0x7CC; // 
            }
            // Parent: CBeam
            // Field count: 19
            namespace CEnvBeam {
                constexpr std::ptrdiff_t m_active = 0x7F0; // 
                constexpr std::ptrdiff_t m_spriteTexture = 0x7F8; // 
                constexpr std::ptrdiff_t m_iszStartEntity = 0x800; // 
                constexpr std::ptrdiff_t m_iszEndEntity = 0x808; // 
                constexpr std::ptrdiff_t m_life = 0x810; // 
                constexpr std::ptrdiff_t m_boltWidth = 0x814; // 
                constexpr std::ptrdiff_t m_noiseAmplitude = 0x818; // 
                constexpr std::ptrdiff_t m_speed = 0x81C; // 
                constexpr std::ptrdiff_t m_restrike = 0x820; // 
                constexpr std::ptrdiff_t m_iszSpriteName = 0x828; // 
                constexpr std::ptrdiff_t m_frameStart = 0x830; // 
                constexpr std::ptrdiff_t m_vEndPointWorld = 0x834; // 
                constexpr std::ptrdiff_t m_vEndPointRelative = 0x840; // 
                constexpr std::ptrdiff_t m_radius = 0x84C; // 
                constexpr std::ptrdiff_t m_TouchType = 0x850; // 
                constexpr std::ptrdiff_t m_iFilterName = 0x858; // 
                constexpr std::ptrdiff_t m_hFilter = 0x860; // 
                constexpr std::ptrdiff_t m_iszDecal = 0x868; // 
                constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x870; // 
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTonemapTrigger {
                constexpr std::ptrdiff_t m_tonemapControllerName = 0x920; // 
                constexpr std::ptrdiff_t m_hTonemapController = 0x928; // 
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
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // 
                constexpr std::ptrdiff_t m_flValue = 0x34; // 
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // 
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // 
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // 
            }
            // Parent: CWeaponBaseItem
            // Field count: 0
            namespace CItem_Healthshot {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CFogTrigger {
                constexpr std::ptrdiff_t m_fog = 0x920; // 
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicCollisionPair {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4E0; // 
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4E8; // 
                constexpr std::ptrdiff_t m_supportMultipleEntitiesWithSameName = 0x4F0; // 
                constexpr std::ptrdiff_t m_disabled = 0x4F1; // 
                constexpr std::ptrdiff_t m_succeeded = 0x4F2; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_weapon_cs_base {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerHostageReset {
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 4
            namespace CPointTeleport {
                constexpr std::ptrdiff_t m_vSaveOrigin = 0x4E0; // 
                constexpr std::ptrdiff_t m_vSaveAngles = 0x4EC; // 
                constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4F8; // 
                constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4F9; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetB {
            }
            // Parent: CBtNodeCondition
            // Field count: 3
            namespace CBtNodeConditionInactive {
                constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78; // 
                constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7C; // 
                constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CWeaponSawedoff {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x920; // 
                constexpr std::ptrdiff_t m_flFluidDensity = 0x9A0; // 
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CMoverPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x4E0; // 
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x4EC; // 
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x4F8; // 
                constexpr std::ptrdiff_t m_OnPassThrough = 0x500; // 
                constexpr std::ptrdiff_t m_OnPassThroughForward = 0x528; // 
                constexpr std::ptrdiff_t m_OnPassThroughReverse = 0x550; // 
                constexpr std::ptrdiff_t m_hMover = 0x578; // 
            }
            // Parent: CBtNode
            // Field count: 12
            namespace CBtActionAim {
                constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // 
                constexpr std::ptrdiff_t m_szAimReadyKey = 0x80; // 
                constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88; // 
                constexpr std::ptrdiff_t m_bDoneAiming = 0x8C; // 
                constexpr std::ptrdiff_t m_flLerpStartTime = 0x90; // 
                constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94; // 
                constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98; // 
                constexpr std::ptrdiff_t m_NextLookTarget = 0x9C; // 
                constexpr std::ptrdiff_t m_AimTimer = 0xA8; // 
                constexpr std::ptrdiff_t m_SniperHoldTimer = 0xC0; // 
                constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xD8; // 
                constexpr std::ptrdiff_t m_bAcquired = 0xF0; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_ViewModelServices {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
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
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // 
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // 
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // 
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // 
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // 
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // 
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // 
                constexpr std::ptrdiff_t m_audio = 0xA8; // 
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // 
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // 
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // 
                constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace CFogController {
                constexpr std::ptrdiff_t m_fog = 0x4E0; // 
                constexpr std::ptrdiff_t m_bUseAngles = 0x548; // 
                constexpr std::ptrdiff_t m_iChangedVariables = 0x54C; // 
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroCharacterPosition {
            }
            // Parent: CEntityComponent
            // Field count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // 
                constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // 
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace CDecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0xB10; // 
                constexpr std::ptrdiff_t m_shotsRemaining = 0xB14; // 
                constexpr std::ptrdiff_t m_fExpireTime = 0xB18; // 
                constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xB28; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CEnableMotionFixup {
            }
            // Parent: CPlayer_MovementServices
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // 
                constexpr std::ptrdiff_t m_timestamp = 0xC; // 
                constexpr std::ptrdiff_t m_timescale = 0x10; // 
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // 
                constexpr std::ptrdiff_t m_name = 0xC; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP9 {
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CPhysicsEntitySolver {
                constexpr std::ptrdiff_t m_hMovingEntity = 0x4E8; // 
                constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4EC; // 
                constexpr std::ptrdiff_t m_separationDuration = 0x4F0; // 
                constexpr std::ptrdiff_t m_cancelTime = 0x4F4; // 
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
                constexpr std::ptrdiff_t m_hPlayer = 0x4E8; // 
                constexpr std::ptrdiff_t m_hPingedEntity = 0x4EC; // 
                constexpr std::ptrdiff_t m_iType = 0x4F0; // 
                constexpr std::ptrdiff_t m_bUrgent = 0x4F4; // 
                constexpr std::ptrdiff_t m_szPlaceName = 0x4F5; // 
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
                constexpr std::ptrdiff_t nTagTick = 0x30; // 
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // 
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // 
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C; // 
            }
            // Parent: CCSPointScriptEntity
            // Field count: 0
            namespace CCSServerPointScriptEntity {
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
                constexpr std::ptrdiff_t m_modelState = 0x170; // 
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x3A0; // 
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3A1; // 
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3A2; // 
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // 
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // 
                constexpr std::ptrdiff_t m_materialGroup = 0x3A4; // 
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3A8; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoLandmark {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP7 {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponFiveSeven {
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x490; // 
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x50; // 
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CEnvFireSensor {
                constexpr std::ptrdiff_t m_bEnabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_bHeatAtLevel = 0x4E1; // 
                constexpr std::ptrdiff_t m_radius = 0x4E4; // 
                constexpr std::ptrdiff_t m_targetLevel = 0x4E8; // 
                constexpr std::ptrdiff_t m_targetTime = 0x4EC; // 
                constexpr std::ptrdiff_t m_levelTime = 0x4F0; // 
                constexpr std::ptrdiff_t m_OnHeatLevelStart = 0x4F8; // 
                constexpr std::ptrdiff_t m_OnHeatLevelEnd = 0x520; // 
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            namespace CEnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // 
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // 
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_cable_dynamic {
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CPointGamestatsCounter {
                constexpr std::ptrdiff_t m_strStatisticName = 0x4E0; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x4E8; // 
            }
            // Parent: CPointEntity
            // Field count: 10
            namespace CEnvShake {
                constexpr std::ptrdiff_t m_limitToEntity = 0x4E0; // 
                constexpr std::ptrdiff_t m_Amplitude = 0x4E8; // 
                constexpr std::ptrdiff_t m_Frequency = 0x4EC; // 
                constexpr std::ptrdiff_t m_Duration = 0x4F0; // 
                constexpr std::ptrdiff_t m_Radius = 0x4F4; // 
                constexpr std::ptrdiff_t m_stopTime = 0x4F8; // 
                constexpr std::ptrdiff_t m_nextShake = 0x4FC; // 
                constexpr std::ptrdiff_t m_currentAmp = 0x500; // 
                constexpr std::ptrdiff_t m_maxForce = 0x504; // 
                constexpr std::ptrdiff_t m_shakeCallback = 0x518; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CPrecipitationBlocker {
            }
            // Parent: CPathKeyFrame
            // Field count: 11
            namespace CBaseMoveBehavior {
                constexpr std::ptrdiff_t m_iPositionInterpolator = 0x540; // 
                constexpr std::ptrdiff_t m_iRotationInterpolator = 0x544; // 
                constexpr std::ptrdiff_t m_flAnimStartTime = 0x548; // 
                constexpr std::ptrdiff_t m_flAnimEndTime = 0x54C; // 
                constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x550; // 
                constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x558; // 
                constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x560; // 
                constexpr std::ptrdiff_t m_pPreKeyFrame = 0x568; // 
                constexpr std::ptrdiff_t m_pPostKeyFrame = 0x570; // 
                constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x578; // 
                constexpr std::ptrdiff_t m_iDirection = 0x57C; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CFuncMoverAPI {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncNavObstruction {
                constexpr std::ptrdiff_t m_bDisabled = 0x758; // 
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CEnvTilt {
                constexpr std::ptrdiff_t m_Duration = 0x4E0; // 
                constexpr std::ptrdiff_t m_Radius = 0x4E4; // 
                constexpr std::ptrdiff_t m_TiltTime = 0x4E8; // 
                constexpr std::ptrdiff_t m_stopTime = 0x4EC; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bRedraw (bool)
            // NetworkVarNames: m_bIsHeldByPlayer (bool)
            // NetworkVarNames: m_bPinPulled (bool)
            // NetworkVarNames: m_bJumpThrow (bool)
            // NetworkVarNames: m_bThrowAnimating (bool)
            // NetworkVarNames: m_fThrowTime (GameTime_t)
            // NetworkVarNames: m_flThrowStrength (float)
            // NetworkVarNames: m_flThrowStrengthApproach (float)
            // NetworkVarNames: m_fDropTime (GameTime_t)
            // NetworkVarNames: m_fPinPullTime (GameTime_t)
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            namespace CBaseCSGrenade {
                constexpr std::ptrdiff_t m_bRedraw = 0xF10; // 
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0xF11; // 
                constexpr std::ptrdiff_t m_bPinPulled = 0xF12; // 
                constexpr std::ptrdiff_t m_bJumpThrow = 0xF13; // 
                constexpr std::ptrdiff_t m_bThrowAnimating = 0xF14; // 
                constexpr std::ptrdiff_t m_fThrowTime = 0xF18; // 
                constexpr std::ptrdiff_t m_flThrowStrength = 0xF1C; // 
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0xF20; // 
                constexpr std::ptrdiff_t m_fDropTime = 0xF24; // 
                constexpr std::ptrdiff_t m_fPinPullTime = 0xF28; // 
                constexpr std::ptrdiff_t m_bJustPulledPin = 0xF2C; // 
                constexpr std::ptrdiff_t m_nNextHoldTick = 0xF30; // 
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0xF34; // 
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0xF38; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CItemGenericTriggerHelper {
                constexpr std::ptrdiff_t m_hParentItem = 0x750; // 
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicBranchList {
                constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4E0; // 
                constexpr std::ptrdiff_t m_LogicBranchList = 0x560; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_eLastState = 0x578; // 
                constexpr std::ptrdiff_t m_OnAllTrue = 0x580; // 
                constexpr std::ptrdiff_t m_OnAllFalse = 0x5A8; // 
                constexpr std::ptrdiff_t m_OnMixed = 0x5D0; // 
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
            namespace fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // 
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // 
                constexpr std::ptrdiff_t m_OldColor = 0x10; // 
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // 
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // 
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // 
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // 
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // 
                constexpr std::ptrdiff_t m_NewColor = 0x28; // 
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // 
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // 
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // 
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // 
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // 
            }
            // Parent: CItemDefuser
            // Field count: 0
            namespace CItemDefuserAlias_item_defuser {
            }
            // Parent: CModelPointEntity
            // Field count: 3
            namespace CRevertSaved {
                constexpr std::ptrdiff_t m_loadTime = 0x750; // 
                constexpr std::ptrdiff_t m_Duration = 0x754; // 
                constexpr std::ptrdiff_t m_HoldTime = 0x758; // 
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CMultiLightProxy {
                constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4E8; // 
                constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4F0; // 
                constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4F4; // 
                constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4F8; // 
                constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4FC; // 
                constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x500; // 
                constexpr std::ptrdiff_t m_vecLights = 0x508; // CUtlVector<CHandle<CLightEntity>>
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_vOrigin (Vector)
            // NetworkVarNames: m_vStart (Vector)
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
            // NetworkVarNames: m_nHitBox (uint16)
            // NetworkVarNames: m_nColor (uint8)
            // NetworkVarNames: m_fFlags (uint8)
            // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
            // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
            // NetworkVarNames: m_iEffectName (uint16)
            // NetworkVarNames: m_nExplosionType (uint8)
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // 
                constexpr std::ptrdiff_t m_vStart = 0x14; // 
                constexpr std::ptrdiff_t m_vNormal = 0x20; // 
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // 
                constexpr std::ptrdiff_t m_hEntity = 0x38; // 
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // 
                constexpr std::ptrdiff_t m_flScale = 0x40; // 
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // 
                constexpr std::ptrdiff_t m_flRadius = 0x48; // 
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // 
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // 
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // 
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // 
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // 
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // 
                constexpr std::ptrdiff_t m_nColor = 0x62; // 
                constexpr std::ptrdiff_t m_fFlags = 0x63; // 
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // 
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // 
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // 
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CEntityBlocker {
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCase {
                constexpr std::ptrdiff_t m_nCase = 0x4E0; // 
                constexpr std::ptrdiff_t m_nShuffleCases = 0x5E0; // 
                constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5E4; // 
                constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5E8; // 
                constexpr std::ptrdiff_t m_OnCase = 0x608; // 
                constexpr std::ptrdiff_t m_OnDefault = 0xB08; // 
            }
            // Parent: CItem
            // Field count: 2
            namespace CItemDefuser {
                constexpr std::ptrdiff_t m_entitySpottedState = 0xA38; // 
                constexpr std::ptrdiff_t m_nSpotRules = 0xA50; // 
            }
            // Parent: CRuleEntity
            // Field count: 0
            namespace CRuleBrushEntity {
            }
            // Parent: CInferno
            // Field count: 0
            namespace CFireCrackerBlast {
            }
            // Parent: CBaseEntity
            // Field count: 14
            namespace CSoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4E0; // 
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4E1; // 
                constexpr std::ptrdiff_t m_bStopOnNew = 0x4E2; // 
                constexpr std::ptrdiff_t m_bSaveRestore = 0x4E3; // 
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4E4; // 
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x4F8; // 
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x500; // 
                constexpr std::ptrdiff_t m_onSoundFinished = 0x528; // 
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x550; // 
                constexpr std::ptrdiff_t m_iszSoundName = 0x580; // 
                constexpr std::ptrdiff_t m_hSource = 0x590; // 
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x594; // 
            }
            // Parent: CPlayer_ViewModelServices
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
            // NetworkVarNames: m_bRedraw (bool)
            namespace CWeaponBaseItem {
                constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0xF10; // 
                constexpr std::ptrdiff_t m_bRedraw = 0xF28; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: CBaseEntity
            // Field count: 34
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
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
            // NetworkVarNames: m_bIndirectUseLPVs (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            // NetworkVarNames: m_fNoiseSpeed (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_vNoiseScale (Vector)
            namespace CEnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x4E0; // 
                constexpr std::ptrdiff_t m_flAnisotropy = 0x4E4; // 
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x4E8; // 
                constexpr std::ptrdiff_t m_flDrawDistance = 0x4EC; // 
                constexpr std::ptrdiff_t m_flFadeInStart = 0x4F0; // 
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x4F4; // 
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x4F8; // 
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x4FC; // 
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x500; // 
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x504; // 
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x508; // 
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x50C; // 
                constexpr std::ptrdiff_t m_vBoxMins = 0x510; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x51C; // 
                constexpr std::ptrdiff_t m_bActive = 0x528; // 
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x52C; // 
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x530; // 
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x534; // 
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x538; // 
                constexpr std::ptrdiff_t m_flStartScattering = 0x53C; // 
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x540; // 
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x544; // 
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x548; // 
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x54C; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x550; // 
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x551; // 
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x552; // 
                constexpr std::ptrdiff_t m_bIsMaster = 0x553; // 
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x558; // 
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x560; // 
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x564; // 
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x568; // 
                constexpr std::ptrdiff_t m_vNoiseScale = 0x56C; // 
                constexpr std::ptrdiff_t m_bFirstTime = 0x578; // 
            }
            // Parent: CPlayer_MovementServices
            // Field count: 14
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
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // 
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // 
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // 
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // 
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // 
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // 
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // 
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // 
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // 
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // 
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // 
                constexpr std::ptrdiff_t m_nStepside = 0x210; // 
                constexpr std::ptrdiff_t m_iTargetVolume = 0x214; // 
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x218; // 
            }
            // Parent: CPhysicsProp
            // Field count: 5
            namespace CPhysicsPropRespawnable {
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xCB8; // 
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xCC4; // 
                constexpr std::ptrdiff_t m_vOriginalMins = 0xCD0; // 
                constexpr std::ptrdiff_t m_vOriginalMaxs = 0xCDC; // 
                constexpr std::ptrdiff_t m_flRespawnDuration = 0xCE8; // 
            }
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysBallSocket {
                constexpr std::ptrdiff_t m_flJointFriction = 0x558; // 
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x55C; // 
                constexpr std::ptrdiff_t m_flSwingLimit = 0x560; // 
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x564; // 
                constexpr std::ptrdiff_t m_flMinTwistAngle = 0x568; // 
                constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x56C; // 
            }
            // Parent: CCSGameModeRules
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // 
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // 
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // 
            }
            // Parent: CItemAssaultSuit
            // Field count: 0
            namespace CItemHeavyAssaultSuit {
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInfoPlayerStart {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_bIsMaster = 0x4E1; // 
                constexpr std::ptrdiff_t m_pPawnSubclass = 0x4E8; // 
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 8
            namespace CSoundOpvarSetOBBWindEntity {
                constexpr std::ptrdiff_t m_vMins = 0x578; // 
                constexpr std::ptrdiff_t m_vMaxs = 0x584; // 
                constexpr std::ptrdiff_t m_vDistanceMins = 0x590; // 
                constexpr std::ptrdiff_t m_vDistanceMaxs = 0x59C; // 
                constexpr std::ptrdiff_t m_flWindMin = 0x5A8; // 
                constexpr std::ptrdiff_t m_flWindMax = 0x5AC; // 
                constexpr std::ptrdiff_t m_flWindMapMin = 0x5B0; // 
                constexpr std::ptrdiff_t m_flWindMapMax = 0x5B4; // 
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
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xB00; // 
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xB04; // 
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xB08; // 
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xB14; // 
                constexpr std::ptrdiff_t m_bShouldDetach = 0xB20; // 
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xB30; // 
            }
            // Parent: CItem
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace CItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0xA38; // 
                constexpr std::ptrdiff_t m_KillingPlayer = 0xA3C; // 
            }
            // Parent: CItem
            // Field count: 32
            namespace CItemGeneric {
                constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xA40; // 
                constexpr std::ptrdiff_t m_bHasPickupRadius = 0xA41; // 
                constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xA44; // 
                constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xA48; // 
                constexpr std::ptrdiff_t m_flLastPickupCheck = 0xA4C; // 
                constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xA50; // 
                constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xA51; // 
                constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xA58; // 
                constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xA60; // 
                constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xA68; // 
                constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xA70; // 
                constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xA78; // 
                constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xA80; // 
                constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xA88; // 
                constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xA90; // 
                constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xA98; // 
                constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xAA0; // 
                constexpr std::ptrdiff_t m_pPickupFilterName = 0xAA8; // 
                constexpr std::ptrdiff_t m_hPickupFilter = 0xAB0; // 
                constexpr std::ptrdiff_t m_OnPickup = 0xAB8; // 
                constexpr std::ptrdiff_t m_OnTimeout = 0xAE0; // 
                constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xB08; // 
                constexpr std::ptrdiff_t m_OnTriggerTouch = 0xB30; // 
                constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xB58; // 
                constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xB80; // 
                constexpr std::ptrdiff_t m_flPickupRadius = 0xB88; // 
                constexpr std::ptrdiff_t m_flTriggerRadius = 0xB8C; // 
                constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xB90; // 
                constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xB98; // 
                constexpr std::ptrdiff_t m_glowColor = 0xB99; // 
                constexpr std::ptrdiff_t m_bUseable = 0xB9D; // 
                constexpr std::ptrdiff_t m_hTriggerHelper = 0xBA0; // CHandle<CItemGenericTriggerHelper>
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightSpotEntity {
            }
            // Parent: CPlayer_WaterServices
            // Field count: 6
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x40; // 
                constexpr std::ptrdiff_t m_nDrownDmgRate = 0x44; // 
                constexpr std::ptrdiff_t m_AirFinishedTime = 0x48; // 
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x4C; // 
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x50; // 
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x5C; // 
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x4E0; // 
                constexpr std::ptrdiff_t m_hSkyCamera = 0x4E4; // 
            }
            // Parent: CBasePropDoor
            // Field count: 17
            namespace CPropDoorRotating {
                constexpr std::ptrdiff_t m_vecAxis = 0xEA0; // 
                constexpr std::ptrdiff_t m_flDistance = 0xEAC; // 
                constexpr std::ptrdiff_t m_eSpawnPosition = 0xEB0; // 
                constexpr std::ptrdiff_t m_eOpenDirection = 0xEB4; // 
                constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xEB8; // 
                constexpr std::ptrdiff_t m_flAjarAngle = 0xEBC; // 
                constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xEC0; // 
                constexpr std::ptrdiff_t m_angRotationClosed = 0xECC; // 
                constexpr std::ptrdiff_t m_angRotationOpenForward = 0xED8; // 
                constexpr std::ptrdiff_t m_angRotationOpenBack = 0xEE4; // 
                constexpr std::ptrdiff_t m_angGoal = 0xEF0; // 
                constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xEFC; // 
                constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xF08; // 
                constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xF14; // 
                constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xF20; // 
                constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xF2C; // 
                constexpr std::ptrdiff_t m_hEntityBlocker = 0xF30; // 
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
                constexpr std::ptrdiff_t m_RopeFlags = 0x758; // 
                constexpr std::ptrdiff_t m_iNextLinkName = 0x760; // 
                constexpr std::ptrdiff_t m_Slack = 0x768; // 
                constexpr std::ptrdiff_t m_Width = 0x76C; // 
                constexpr std::ptrdiff_t m_TextureScale = 0x770; // 
                constexpr std::ptrdiff_t m_nSegments = 0x774; // 
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x775; // 
                constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x778; // 
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x780; // 
                constexpr std::ptrdiff_t m_Subdiv = 0x788; // 
                constexpr std::ptrdiff_t m_nChangeCount = 0x789; // 
                constexpr std::ptrdiff_t m_RopeLength = 0x78A; // 
                constexpr std::ptrdiff_t m_fLockedPoints = 0x78C; // 
                constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x78D; // 
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x790; // 
                constexpr std::ptrdiff_t m_bStartPointValid = 0x794; // 
                constexpr std::ptrdiff_t m_bEndPointValid = 0x795; // 
                constexpr std::ptrdiff_t m_hStartPoint = 0x798; // 
                constexpr std::ptrdiff_t m_hEndPoint = 0x79C; // 
                constexpr std::ptrdiff_t m_iStartAttachment = 0x7A0; // 
                constexpr std::ptrdiff_t m_iEndAttachment = 0x7A1; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 73
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
                constexpr std::ptrdiff_t m_bEnabled = 0x750; // 
                constexpr std::ptrdiff_t m_nColorMode = 0x754; // 
                constexpr std::ptrdiff_t m_Color = 0x758; // 
                constexpr std::ptrdiff_t m_flColorTemperature = 0x75C; // 
                constexpr std::ptrdiff_t m_flBrightness = 0x760; // 
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x764; // 
                constexpr std::ptrdiff_t m_nDirectLight = 0x768; // 
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x76C; // 
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x770; // 
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x774; // 
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x778; // 
                constexpr std::ptrdiff_t m_LightStyleString = 0x780; // 
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x788; // 
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x790; // 
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x7A8; // 
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x7C0; // 
                constexpr std::ptrdiff_t m_StyleEvent = 0x7D8; // 
                constexpr std::ptrdiff_t m_hLightCookie = 0x898; // 
                constexpr std::ptrdiff_t m_flShape = 0x8A0; // 
                constexpr std::ptrdiff_t m_flSoftX = 0x8A4; // 
                constexpr std::ptrdiff_t m_flSoftY = 0x8A8; // 
                constexpr std::ptrdiff_t m_flSkirt = 0x8AC; // 
                constexpr std::ptrdiff_t m_flSkirtNear = 0x8B0; // 
                constexpr std::ptrdiff_t m_vSizeParams = 0x8B4; // 
                constexpr std::ptrdiff_t m_flRange = 0x8C0; // 
                constexpr std::ptrdiff_t m_vShear = 0x8C4; // 
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x8D0; // 
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x8D4; // 
                constexpr std::ptrdiff_t m_nCastShadows = 0x8E0; // 
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x8E4; // 
                constexpr std::ptrdiff_t m_nShadowPriority = 0x8E8; // 
                constexpr std::ptrdiff_t m_bContactShadow = 0x8EC; // 
                constexpr std::ptrdiff_t m_nBounceLight = 0x8F0; // 
                constexpr std::ptrdiff_t m_flBounceScale = 0x8F4; // 
                constexpr std::ptrdiff_t m_flMinRoughness = 0x8F8; // 
                constexpr std::ptrdiff_t m_vAlternateColor = 0x8FC; // 
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x908; // 
                constexpr std::ptrdiff_t m_nFog = 0x90C; // 
                constexpr std::ptrdiff_t m_flFogStrength = 0x910; // 
                constexpr std::ptrdiff_t m_nFogShadows = 0x914; // 
                constexpr std::ptrdiff_t m_flFogScale = 0x918; // 
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x91C; // 
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x920; // 
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x924; // 
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x928; // 
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x92C; // 
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x930; // 
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x934; // 
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x940; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x94C; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x958; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x964; // 
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x970; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x974; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x980; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x98C; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x998; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x9A4; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x9B0; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x9BC; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x9C8; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x9D4; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x9E0; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x9EC; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x9F8; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0xA04; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0xA10; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0xA1C; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xA28; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xA34; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xA40; // 
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0xA4C; // 
                constexpr std::ptrdiff_t m_VisClusters = 0xA50; // 
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoDeathmatchSpawn {
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvViewPunch {
                constexpr std::ptrdiff_t m_flRadius = 0x4E0; // 
                constexpr std::ptrdiff_t m_angViewPunch = 0x4E4; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CDEagle {
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPathCorner {
                constexpr std::ptrdiff_t m_flWait = 0x4E0; // 
                constexpr std::ptrdiff_t m_flRadius = 0x4E4; // 
                constexpr std::ptrdiff_t m_OnPass = 0x4E8; // 
            }
            // Parent: CPlayerControllerComponent
            // Field count: 9
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
                constexpr std::ptrdiff_t m_unMusicID = 0x40; // 
                constexpr std::ptrdiff_t m_rank = 0x44; // 
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // 
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // 
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // 
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // 
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // 
                constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xF48; // 
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0xF50; // 
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
                constexpr std::ptrdiff_t m_Item = 0x50; // 
            }
            // Parent: CHostage
            // Field count: 0
            namespace CHostageAlias_info_hostage_spawn {
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMultiSource {
                constexpr std::ptrdiff_t m_rgEntities = 0x4E0; // 
                constexpr std::ptrdiff_t m_rgTriggered = 0x560; // 
                constexpr std::ptrdiff_t m_OnTrigger = 0x5E0; // 
                constexpr std::ptrdiff_t m_iTotal = 0x608; // 
                constexpr std::ptrdiff_t m_globalstate = 0x610; // 
            }
            // Parent: CLogicalEntity
            // Field count: 2
            namespace CLogicNavigation {
                constexpr std::ptrdiff_t m_isOn = 0x4E8; // 
                constexpr std::ptrdiff_t m_navProperty = 0x4EC; // 
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CEnvEntityMaker {
                constexpr std::ptrdiff_t m_vecEntityMins = 0x4E0; // 
                constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4EC; // 
                constexpr std::ptrdiff_t m_hCurrentInstance = 0x4F8; // 
                constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4FC; // 
                constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x500; // 
                constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x50C; // 
                constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x518; // 
                constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x51C; // 
                constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x520; // 
                constexpr std::ptrdiff_t m_iszTemplate = 0x528; // 
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x530; // 
                constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x558; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CPointEntity {
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicEventListener {
                constexpr std::ptrdiff_t m_strEventName = 0x4F0; // 
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4F8; // 
                constexpr std::ptrdiff_t m_nTeam = 0x4FC; // 
                constexpr std::ptrdiff_t m_OnEventFired = 0x500; // 
            }
            // Parent: CBaseFilter
            // Field count: 4
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x538; // 
                constexpr std::ptrdiff_t m_iFilterName = 0x540; // 
                constexpr std::ptrdiff_t m_hFilter = 0x590; // 
                constexpr std::ptrdiff_t m_nFilterCount = 0x5B8; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: CBasePulseGraphInstance
            // Field count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            // MPulseDomainOptInGameBlackboard
            // MPulseDomainOptInValueType
            namespace CPulseGraphInstance_ServerEntity {
                constexpr std::ptrdiff_t m_pComponent = 0x100; // 
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // 
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CPhysicsWire {
                constexpr std::ptrdiff_t m_nDensity = 0x4E0; // 
            }
            // Parent: CPropDoorRotating
            // Field count: 4
            namespace CPropDoorRotatingBreakable {
                constexpr std::ptrdiff_t m_bBreakable = 0xF38; // 
                constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xF39; // 
                constexpr std::ptrdiff_t m_currentDamageState = 0xF3C; // 
                constexpr std::ptrdiff_t m_damageStates = 0xF40; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_player_controller {
            }
            // Parent: CBaseFire
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace CFireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x4F0; // 
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x4F4; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CBumpMine {
            }
            // Parent: CBaseModelEntity
            // Field count: 7
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_nHorizontalSize (uint32)
            // NetworkVarNames: m_nVerticalSize (uint32)
            // NetworkVarNames: m_nMinDist (uint32)
            // NetworkVarNames: m_nMaxDist (uint32)
            // NetworkVarNames: m_nOuterMaxDist (uint32)
            // NetworkVarNames: m_flGlowProxySize (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            namespace CLightGlow {
                constexpr std::ptrdiff_t m_nHorizontalSize = 0x750; // 
                constexpr std::ptrdiff_t m_nVerticalSize = 0x754; // 
                constexpr std::ptrdiff_t m_nMinDist = 0x758; // 
                constexpr std::ptrdiff_t m_nMaxDist = 0x75C; // 
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0x760; // 
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x764; // 
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x768; // 
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
                constexpr std::ptrdiff_t m_iKills = 0x30; // 
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // 
                constexpr std::ptrdiff_t m_iAssists = 0x38; // 
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // 
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // 
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // 
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // 
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // 
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // 
                constexpr std::ptrdiff_t m_iObjective = 0x54; // 
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // 
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // 
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // 
            }
            // Parent: CDynamicProp
            // Field count: 37
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_eDoorState (DoorState_t)
            // NetworkVarNames: m_bLocked (bool)
            // NetworkVarNames: m_closedPosition (Vector)
            // NetworkVarNames: m_closedAngles (QAngle)
            // NetworkVarNames: m_hMaster (CHandle<CBasePropDoor>)
            namespace CBasePropDoor {
                constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xC20; // 
                constexpr std::ptrdiff_t m_hDoorList = 0xC28; // CUtlVector<CHandle<CBasePropDoor>>
                constexpr std::ptrdiff_t m_nHardwareType = 0xC40; // 
                constexpr std::ptrdiff_t m_bNeedsHardware = 0xC44; // 
                constexpr std::ptrdiff_t m_eDoorState = 0xC48; // 
                constexpr std::ptrdiff_t m_bLocked = 0xC4C; // 
                constexpr std::ptrdiff_t m_closedPosition = 0xC50; // 
                constexpr std::ptrdiff_t m_closedAngles = 0xC5C; // 
                constexpr std::ptrdiff_t m_hBlocker = 0xC68; // 
                constexpr std::ptrdiff_t m_bFirstBlocked = 0xC6C; // 
                constexpr std::ptrdiff_t m_ls = 0xC70; // 
                constexpr std::ptrdiff_t m_bForceClosed = 0xC90; // 
                constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xC94; // 
                constexpr std::ptrdiff_t m_hActivator = 0xCA0; // 
                constexpr std::ptrdiff_t m_SoundMoving = 0xCB0; // 
                constexpr std::ptrdiff_t m_SoundOpen = 0xCB8; // 
                constexpr std::ptrdiff_t m_SoundClose = 0xCC0; // 
                constexpr std::ptrdiff_t m_SoundLock = 0xCC8; // 
                constexpr std::ptrdiff_t m_SoundUnlock = 0xCD0; // 
                constexpr std::ptrdiff_t m_SoundLatch = 0xCD8; // 
                constexpr std::ptrdiff_t m_SoundPound = 0xCE0; // 
                constexpr std::ptrdiff_t m_SoundJiggle = 0xCE8; // 
                constexpr std::ptrdiff_t m_SoundLockedAnim = 0xCF0; // 
                constexpr std::ptrdiff_t m_numCloseAttempts = 0xCF8; // 
                constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xCFC; // 
                constexpr std::ptrdiff_t m_SlaveName = 0xD00; // 
                constexpr std::ptrdiff_t m_hMaster = 0xD08; // 
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0xD10; // 
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0xD38; // 
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xD60; // 
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xD88; // 
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xDB0; // 
                constexpr std::ptrdiff_t m_OnFullyOpen = 0xDD8; // 
                constexpr std::ptrdiff_t m_OnClose = 0xE00; // 
                constexpr std::ptrdiff_t m_OnOpen = 0xE28; // 
                constexpr std::ptrdiff_t m_OnLockedUse = 0xE50; // 
                constexpr std::ptrdiff_t m_OnAjarOpen = 0xE78; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4E0; // 
                constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4E4; // 
                constexpr std::ptrdiff_t m_bSaveImportant = 0x4E8; // 
            }
            // Parent: CBaseTrigger
            // Field count: 12
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOrigin = 0x920; // 
                constexpr std::ptrdiff_t m_vFanEnd = 0x92C; // 
                constexpr std::ptrdiff_t m_vNoise = 0x938; // 
                constexpr std::ptrdiff_t m_flForce = 0x944; // 
                constexpr std::ptrdiff_t m_flRopeForceScale = 0x948; // 
                constexpr std::ptrdiff_t m_flPlayerForce = 0x94C; // 
                constexpr std::ptrdiff_t m_flRampTime = 0x950; // 
                constexpr std::ptrdiff_t m_bFalloff = 0x954; // 
                constexpr std::ptrdiff_t m_bPushPlayer = 0x955; // 
                constexpr std::ptrdiff_t m_bRampDown = 0x956; // 
                constexpr std::ptrdiff_t m_bAddNoise = 0x957; // 
                constexpr std::ptrdiff_t m_RampTimer = 0x958; // 
            }
            // Parent: CMolotovGrenade
            // Field count: 0
            namespace CIncendiaryGrenade {
            }
            // Parent: CPathCorner
            // Field count: 0
            namespace CPathCornerCrash {
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace CHandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x4E0; // 
                constexpr std::ptrdiff_t m_bSendHandle = 0x4E4; // 
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CSoundOpvarSetEntity {
                constexpr std::ptrdiff_t m_iszStackName = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszOpvarName = 0x4F8; // 
                constexpr std::ptrdiff_t m_nOpvarType = 0x500; // 
                constexpr std::ptrdiff_t m_nOpvarIndex = 0x504; // 
                constexpr std::ptrdiff_t m_flOpvarValue = 0x508; // 
                constexpr std::ptrdiff_t m_OpvarValueString = 0x510; // 
                constexpr std::ptrdiff_t m_bSetOnSpawn = 0x518; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // 
                constexpr std::ptrdiff_t m_nCount = 0x32; // 
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CNavSpaceInfo {
                constexpr std::ptrdiff_t m_bCreateFlightSpace = 0x4E0; // 
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAchievement {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4E8; // 
                constexpr std::ptrdiff_t m_OnFired = 0x4F0; // 
            }
            // Parent: CBaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pathString (CUtlString)
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_pathString = 0x538; // 
            }
            // Parent: CBtNode
            // Field count: 1
            namespace CBtActionParachutePositioning {
                constexpr std::ptrdiff_t m_ActionTimer = 0x58; // 
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
                constexpr std::ptrdiff_t m_iFOV = 0x170; // 
                constexpr std::ptrdiff_t m_iFOVStart = 0x174; // 
                constexpr std::ptrdiff_t m_flFOVTime = 0x178; // 
                constexpr std::ptrdiff_t m_flFOVRate = 0x17C; // 
                constexpr std::ptrdiff_t m_hZoomOwner = 0x180; // 
                constexpr std::ptrdiff_t m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A0; // 
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CTouchExpansionComponent {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            namespace CItem {
                constexpr std::ptrdiff_t m_OnPlayerTouch = 0x968; // 
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x990; // 
                constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0x9B8; // 
                constexpr std::ptrdiff_t m_OnCacheInteraction = 0x9C0; // 
                constexpr std::ptrdiff_t m_OnGlovePulled = 0x9E8; // 
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xA10; // 
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xA1C; // 
                constexpr std::ptrdiff_t m_bPhysStartAsleep = 0xA28; // 
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
                constexpr std::ptrdiff_t m_bEnabled = 0x750; // 
                constexpr std::ptrdiff_t m_DialogXMLName = 0x758; // 
                constexpr std::ptrdiff_t m_PanelClassName = 0x760; // 
                constexpr std::ptrdiff_t m_PanelID = 0x768; // 
                constexpr std::ptrdiff_t m_CustomOutput0 = 0x770; // 
                constexpr std::ptrdiff_t m_CustomOutput1 = 0x798; // 
                constexpr std::ptrdiff_t m_CustomOutput2 = 0x7C0; // 
                constexpr std::ptrdiff_t m_CustomOutput3 = 0x7E8; // 
                constexpr std::ptrdiff_t m_CustomOutput4 = 0x810; // 
                constexpr std::ptrdiff_t m_CustomOutput5 = 0x838; // 
                constexpr std::ptrdiff_t m_CustomOutput6 = 0x860; // 
                constexpr std::ptrdiff_t m_CustomOutput7 = 0x888; // 
                constexpr std::ptrdiff_t m_CustomOutput8 = 0x8B0; // 
                constexpr std::ptrdiff_t m_CustomOutput9 = 0x8D8; // 
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
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x750; // 
                constexpr std::ptrdiff_t m_flWidth = 0x758; // 
                constexpr std::ptrdiff_t m_flHeight = 0x75C; // 
                constexpr std::ptrdiff_t m_flDepth = 0x760; // 
                constexpr std::ptrdiff_t m_nRenderOrder = 0x764; // 
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x768; // 
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x769; // 
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x76A; // 
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x76C; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_entity {
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseEntity
            // Field count: 11
            namespace CLogicAuto {
                constexpr std::ptrdiff_t m_OnMapSpawn = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x508; // 
                constexpr std::ptrdiff_t m_OnNewGame = 0x530; // 
                constexpr std::ptrdiff_t m_OnLoadGame = 0x558; // 
                constexpr std::ptrdiff_t m_OnMapTransition = 0x580; // 
                constexpr std::ptrdiff_t m_OnBackgroundMap = 0x5A8; // 
                constexpr std::ptrdiff_t m_OnMultiNewMap = 0x5D0; // 
                constexpr std::ptrdiff_t m_OnMultiNewRound = 0x5F8; // 
                constexpr std::ptrdiff_t m_OnVREnabled = 0x620; // 
                constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x648; // 
                constexpr std::ptrdiff_t m_globalstate = 0x670; // 
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
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_hSource = 0x4E4; // 
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4F0; // 
                constexpr std::ptrdiff_t m_vLastPosition = 0x548; // 
                constexpr std::ptrdiff_t m_iszStackName = 0x558; // 
                constexpr std::ptrdiff_t m_iszOperatorName = 0x560; // 
                constexpr std::ptrdiff_t m_iszOpvarName = 0x568; // 
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x570; // 
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x574; // 
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightDirectionalEntity {
            }
            // Parent: CLogicNPCCounterAABB
            // Field count: 0
            namespace CLogicNPCCounterOBB {
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: CFuncPlatRot
            // Field count: 9
            namespace CFuncTrackChange {
                constexpr std::ptrdiff_t m_trackTop = 0x818; // 
                constexpr std::ptrdiff_t m_trackBottom = 0x820; // 
                constexpr std::ptrdiff_t m_train = 0x828; // 
                constexpr std::ptrdiff_t m_trackTopName = 0x830; // 
                constexpr std::ptrdiff_t m_trackBottomName = 0x838; // 
                constexpr std::ptrdiff_t m_trainName = 0x840; // 
                constexpr std::ptrdiff_t m_code = 0x848; // 
                constexpr std::ptrdiff_t m_targetState = 0x84C; // 
                constexpr std::ptrdiff_t m_use = 0x850; // 
            }
            // Parent: CRuleBrushEntity
            // Field count: 4
            namespace CGamePlayerZone {
                constexpr std::ptrdiff_t m_OnPlayerInZone = 0x758; // 
                constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x780; // 
                constexpr std::ptrdiff_t m_PlayersInCount = 0x7A8; // 
                constexpr std::ptrdiff_t m_PlayersOutCount = 0x7D0; // 
            }
            // Parent: CRuleEntity
            // Field count: 1
            namespace CRulePointEntity {
                constexpr std::ptrdiff_t m_Score = 0x758; // 
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CMessageEntity {
                constexpr std::ptrdiff_t m_radius = 0x4E0; // 
                constexpr std::ptrdiff_t m_messageText = 0x4E8; // 
                constexpr std::ptrdiff_t m_drawText = 0x4F0; // 
                constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4F1; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4F2; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CSmokeGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 11
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkOverride
            // MNetworkIncludeByName
            // NetworkVarNames: m_nViewModelIndex (uint32)
            // NetworkVarNames: m_nAnimationParity (uint32)
            // NetworkVarNames: m_flAnimationStartTime (float32)
            // NetworkVarNames: m_hWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
            namespace CBaseViewModel {
                constexpr std::ptrdiff_t m_vecLastFacing = 0x968; // 
                constexpr std::ptrdiff_t m_nViewModelIndex = 0x974; // 
                constexpr std::ptrdiff_t m_nAnimationParity = 0x978; // 
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0x97C; // 
                constexpr std::ptrdiff_t m_hWeapon = 0x980; // 
                constexpr std::ptrdiff_t m_sVMName = 0x988; // 
                constexpr std::ptrdiff_t m_sAnimationPrefix = 0x990; // 
                constexpr std::ptrdiff_t m_hOldLayerSequence = 0x998; // 
                constexpr std::ptrdiff_t m_oldLayer = 0x99C; // 
                constexpr std::ptrdiff_t m_oldLayerStartTime = 0x9A0; // 
                constexpr std::ptrdiff_t m_hControlPanel = 0x9A4; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // 
                constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: CBtNode
            // Field count: 4
            namespace CBtActionCombatPositioning {
                constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // 
                constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80; // 
                constexpr std::ptrdiff_t m_ActionTimer = 0x88; // 
                constexpr std::ptrdiff_t m_bCrouching = 0xA0; // 
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float32)
            // NetworkVarNames: m_nFlags (uint32)
            namespace CBaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x4E0; // 
                constexpr std::ptrdiff_t m_flStartScale = 0x4E4; // 
                constexpr std::ptrdiff_t m_flScaleTime = 0x4E8; // 
                constexpr std::ptrdiff_t m_nFlags = 0x4EC; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMAC10 {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponGlock {
            }
            // Parent: CBaseViewModel
            // Field count: 0
            namespace CPredictedViewModel {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerActiveWeaponDetect {
                constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x920; // 
                constexpr std::ptrdiff_t m_iszWeaponClassName = 0x948; // 
            }
            // Parent: CPointEntity
            // Field count: 18
            namespace CEnvMicrophone {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x4E4; // 
                constexpr std::ptrdiff_t m_nSoundType = 0x4E8; // 
                constexpr std::ptrdiff_t m_nSoundFlags = 0x4EA; // 
                constexpr std::ptrdiff_t m_flSensitivity = 0x4EC; // 
                constexpr std::ptrdiff_t m_flSmoothFactor = 0x4F0; // 
                constexpr std::ptrdiff_t m_flMaxRange = 0x4F4; // 
                constexpr std::ptrdiff_t m_iszSpeakerName = 0x4F8; // 
                constexpr std::ptrdiff_t m_hSpeaker = 0x500; // 
                constexpr std::ptrdiff_t m_bAvoidFeedback = 0x504; // 
                constexpr std::ptrdiff_t m_iSpeakerDSPPreset = 0x508; // 
                constexpr std::ptrdiff_t m_iszListenFilter = 0x510; // 
                constexpr std::ptrdiff_t m_hListenFilter = 0x518; // 
                constexpr std::ptrdiff_t m_SoundLevel = 0x520; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnRoutedSound = 0x548; // 
                constexpr std::ptrdiff_t m_OnHeardSound = 0x570; // 
                constexpr std::ptrdiff_t m_szLastSound = 0x598; // 
                constexpr std::ptrdiff_t m_iLastRoutedFrame = 0x698; // 
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CInfoSpawnGroupLoadUnload {
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x508; // 
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x530; // 
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x558; // 
                constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x580; // 
                constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x588; // 
                constexpr std::ptrdiff_t m_iszLandmarkName = 0x590; // 
                constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x598; // 
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x5A0; // 
                constexpr std::ptrdiff_t m_bStreamingStarted = 0x5A4; // 
                constexpr std::ptrdiff_t m_bUnloadingStarted = 0x5A5; // 
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
            // NetworkVarNames: m_iDesiredFOV (uint32)
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4E8; // 
                constexpr std::ptrdiff_t m_nTickBase = 0x4F0; // 
                constexpr std::ptrdiff_t m_hPawn = 0x520; // 
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x524; // 
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x528; // 
                constexpr std::ptrdiff_t m_hSplitOwner = 0x52C; // 
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x530; // 
                constexpr std::ptrdiff_t m_bIsHLTV = 0x548; // 
                constexpr std::ptrdiff_t m_iConnected = 0x54C; // 
                constexpr std::ptrdiff_t m_iszPlayerName = 0x550; // 
                constexpr std::ptrdiff_t m_szNetworkIDString = 0x5D0; // 
                constexpr std::ptrdiff_t m_fLerpTime = 0x5D8; // 
                constexpr std::ptrdiff_t m_bLagCompensation = 0x5DC; // 
                constexpr std::ptrdiff_t m_bPredict = 0x5DD; // 
                constexpr std::ptrdiff_t m_bAutoKickDisabled = 0x5DE; // 
                constexpr std::ptrdiff_t m_bIsLowViolence = 0x5DF; // 
                constexpr std::ptrdiff_t m_bGamePaused = 0x5E0; // 
                constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x720; // 
                constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x724; // 
                constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x728; // 
                constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x72C; // 
                constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x730; // 
                constexpr std::ptrdiff_t m_steamID = 0x740; // 
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x748; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CPointTemplateAPI {
            }
            // Parent: CCSWeaponBase
            // Field count: 1
            namespace CKnife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0xF10; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 37
            namespace CFuncTrackTrain {
                constexpr std::ptrdiff_t m_ppath = 0x750; // 
                constexpr std::ptrdiff_t m_length = 0x754; // 
                constexpr std::ptrdiff_t m_vPosPrev = 0x758; // 
                constexpr std::ptrdiff_t m_angPrev = 0x764; // 
                constexpr std::ptrdiff_t m_controlMins = 0x770; // 
                constexpr std::ptrdiff_t m_controlMaxs = 0x77C; // 
                constexpr std::ptrdiff_t m_lastBlockPos = 0x788; // 
                constexpr std::ptrdiff_t m_lastBlockTick = 0x794; // 
                constexpr std::ptrdiff_t m_flVolume = 0x798; // 
                constexpr std::ptrdiff_t m_flBank = 0x79C; // 
                constexpr std::ptrdiff_t m_oldSpeed = 0x7A0; // 
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7A4; // 
                constexpr std::ptrdiff_t m_height = 0x7A8; // 
                constexpr std::ptrdiff_t m_maxSpeed = 0x7AC; // 
                constexpr std::ptrdiff_t m_dir = 0x7B0; // 
                constexpr std::ptrdiff_t m_iszSoundMove = 0x7B8; // 
                constexpr std::ptrdiff_t m_iszSoundMovePing = 0x7C0; // 
                constexpr std::ptrdiff_t m_iszSoundStart = 0x7C8; // 
                constexpr std::ptrdiff_t m_iszSoundStop = 0x7D0; // 
                constexpr std::ptrdiff_t m_strPathTarget = 0x7D8; // 
                constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x7E0; // 
                constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x7E4; // 
                constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x7E8; // 
                constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x7EC; // 
                constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x7F0; // 
                constexpr std::ptrdiff_t m_eOrientationType = 0x7F4; // 
                constexpr std::ptrdiff_t m_eVelocityType = 0x7F8; // 
                constexpr std::ptrdiff_t m_OnStart = 0x808; // 
                constexpr std::ptrdiff_t m_OnNext = 0x830; // 
                constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x858; // 
                constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x880; // 
                constexpr std::ptrdiff_t m_flDesiredSpeed = 0x884; // 
                constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x888; // 
                constexpr std::ptrdiff_t m_flAccelSpeed = 0x88C; // 
                constexpr std::ptrdiff_t m_flDecelSpeed = 0x890; // 
                constexpr std::ptrdiff_t m_bAccelToSpeed = 0x894; // 
                constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x898; // 
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 5
            namespace CFogVolume {
                constexpr std::ptrdiff_t m_fogName = 0x750; // 
                constexpr std::ptrdiff_t m_postProcessName = 0x758; // 
                constexpr std::ptrdiff_t m_colorCorrectionName = 0x760; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x770; // 
                constexpr std::ptrdiff_t m_bInFogVolumesList = 0x771; // 
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerCounterterrorist {
            }
            // Parent: CBaseModelEntity
            // Field count: 19
            namespace CFire {
                constexpr std::ptrdiff_t m_hEffect = 0x750; // 
                constexpr std::ptrdiff_t m_hOwner = 0x754; // 
                constexpr std::ptrdiff_t m_nFireType = 0x758; // 
                constexpr std::ptrdiff_t m_flFuel = 0x75C; // 
                constexpr std::ptrdiff_t m_flDamageTime = 0x760; // 
                constexpr std::ptrdiff_t m_lastDamage = 0x764; // 
                constexpr std::ptrdiff_t m_flFireSize = 0x768; // 
                constexpr std::ptrdiff_t m_flLastNavUpdateTime = 0x76C; // 
                constexpr std::ptrdiff_t m_flHeatLevel = 0x770; // 
                constexpr std::ptrdiff_t m_flHeatAbsorb = 0x774; // 
                constexpr std::ptrdiff_t m_flDamageScale = 0x778; // 
                constexpr std::ptrdiff_t m_flMaxHeat = 0x77C; // 
                constexpr std::ptrdiff_t m_flLastHeatLevel = 0x780; // 
                constexpr std::ptrdiff_t m_flAttackTime = 0x784; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x788; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x789; // 
                constexpr std::ptrdiff_t m_bDidActivate = 0x78A; // 
                constexpr std::ptrdiff_t m_OnIgnited = 0x790; // 
                constexpr std::ptrdiff_t m_OnExtinguished = 0x7B8; // 
            }
            // Parent: CSkeletonAnimationController
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x220; // 
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x224; // 
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x228; // 
                constexpr std::ptrdiff_t m_hSequence = 0x22C; // 
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x230; // 
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x234; // 
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x238; // 
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x23C; // 
                constexpr std::ptrdiff_t m_nNotifyState = 0x248; // 
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x24A; // 
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x24B; // 
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x24C; // 
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x250; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSPointScriptEntity {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponBizon {
            }
            // Parent: CBasePlatTrain
            // Field count: 1
            namespace CFuncPlat {
                constexpr std::ptrdiff_t m_sNoise = 0x7F8; // 
            }
            // Parent: CPhysConstraint
            // Field count: 48
            namespace CGenericConstraint {
                constexpr std::ptrdiff_t m_nLinearMotionX = 0x560; // 
                constexpr std::ptrdiff_t m_nLinearMotionY = 0x564; // 
                constexpr std::ptrdiff_t m_nLinearMotionZ = 0x568; // 
                constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x56C; // 
                constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x570; // 
                constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x574; // 
                constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x578; // 
                constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x57C; // 
                constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x580; // 
                constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x584; // 
                constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x588; // 
                constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x58C; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x590; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x594; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x598; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x59C; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x5A0; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x5A4; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x5A8; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x5AC; // 
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x5B0; // 
                constexpr std::ptrdiff_t m_flNotifyForceX = 0x5B4; // 
                constexpr std::ptrdiff_t m_flNotifyForceY = 0x5B8; // 
                constexpr std::ptrdiff_t m_flNotifyForceZ = 0x5BC; // 
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x5C0; // 
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x5C4; // 
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x5C8; // 
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x5CC; // 
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x5D0; // 
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x5D4; // 
                constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x5D8; // 
                constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x5D9; // 
                constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x5DA; // 
                constexpr std::ptrdiff_t m_nAngularMotionX = 0x5DC; // 
                constexpr std::ptrdiff_t m_nAngularMotionY = 0x5E0; // 
                constexpr std::ptrdiff_t m_nAngularMotionZ = 0x5E4; // 
                constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x5E8; // 
                constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x5EC; // 
                constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5F0; // 
                constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5F4; // 
                constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5F8; // 
                constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5FC; // 
                constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x600; // 
                constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x604; // 
                constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x608; // 
                constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x610; // 
                constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x638; // 
                constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x660; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CDecoyGrenade {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponG3SG1 {
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
            // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
            // NetworkVarNames: m_vecForce (Vector)
            // NetworkVarNames: m_nForceBone (int32)
            // NetworkVarNames: m_RagdollPose (PhysicsRagdollPose_t)
            // NetworkVarNames: m_bRagdollClientSide (bool)
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x7C8; // 
                constexpr std::ptrdiff_t m_pChoreoServices = 0x7D0; // 
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x7D8; // 
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x7DC; // 
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x7E0; // 
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x7EC; // 
                constexpr std::ptrdiff_t m_vecForce = 0x7F0; // 
                constexpr std::ptrdiff_t m_nForceBone = 0x7FC; // 
                constexpr std::ptrdiff_t m_RagdollPose = 0x810; // 
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x838; // 
            }
            // Parent: CPhysForce
            // Field count: 1
            namespace CPhysTorque {
                constexpr std::ptrdiff_t m_axis = 0x540; // 
            }
            // Parent: CBaseGrenade
            // Field count: 0
            namespace CBreachChargeProjectile {
            }
            // Parent: CBaseAnimGraph
            // Field count: 27
            //
            // Metadata:
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            // NetworkVarNames: m_flBlendWeight (float32)
            namespace CRagdollProp {
                constexpr std::ptrdiff_t m_ragdoll = 0x968; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x9A0; // 
                constexpr std::ptrdiff_t m_ragPos = 0x9A8; // 
                constexpr std::ptrdiff_t m_ragAngles = 0x9C0; // 
                constexpr std::ptrdiff_t m_hRagdollSource = 0x9D8; // 
                constexpr std::ptrdiff_t m_lastUpdateTickCount = 0x9DC; // 
                constexpr std::ptrdiff_t m_allAsleep = 0x9E0; // 
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0x9E1; // 
                constexpr std::ptrdiff_t m_hDamageEntity = 0x9E4; // 
                constexpr std::ptrdiff_t m_hKiller = 0x9E8; // 
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x9EC; // 
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x9F0; // 
                constexpr std::ptrdiff_t m_flFadeOutStartTime = 0x9F4; // 
                constexpr std::ptrdiff_t m_flFadeTime = 0x9F8; // 
                constexpr std::ptrdiff_t m_vecLastOrigin = 0x9FC; // 
                constexpr std::ptrdiff_t m_flAwakeTime = 0xA08; // 
                constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0xA0C; // 
                constexpr std::ptrdiff_t m_strOriginClassName = 0xA10; // 
                constexpr std::ptrdiff_t m_strSourceClassName = 0xA18; // 
                constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0xA20; // 
                constexpr std::ptrdiff_t m_bShouldTeleportPhysics = 0xA21; // 
                constexpr std::ptrdiff_t m_flBlendWeight = 0xA24; // 
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xA28; // 
                constexpr std::ptrdiff_t m_ragdollMins = 0xA30; // 
                constexpr std::ptrdiff_t m_ragdollMaxs = 0xA48; // 
                constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xA60; // 
                constexpr std::ptrdiff_t m_bValidatePoweredRagdollPose = 0xAC0; // 
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CItemSoda {
            }
            // Parent: CEnvCubemap
            // Field count: 0
            namespace CEnvCubemapBox {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_CCSWeaponBaseVData {
            }
            // Parent: CBaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x4E0; // 
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x4E4; // 
            }
            // Parent: CTriggerOnce
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bTestOcclusion (bool)
            namespace CTriggerLook {
                constexpr std::ptrdiff_t m_hLookTarget = 0x948; // 
                constexpr std::ptrdiff_t m_flFieldOfView = 0x94C; // 
                constexpr std::ptrdiff_t m_flLookTime = 0x950; // 
                constexpr std::ptrdiff_t m_flLookTimeTotal = 0x954; // 
                constexpr std::ptrdiff_t m_flLookTimeLast = 0x958; // 
                constexpr std::ptrdiff_t m_flTimeoutDuration = 0x95C; // 
                constexpr std::ptrdiff_t m_bTimeoutFired = 0x960; // 
                constexpr std::ptrdiff_t m_bIsLooking = 0x961; // 
                constexpr std::ptrdiff_t m_b2DFOV = 0x962; // 
                constexpr std::ptrdiff_t m_bUseVelocity = 0x963; // 
                constexpr std::ptrdiff_t m_bTestOcclusion = 0x964; // 
                constexpr std::ptrdiff_t m_OnTimeout = 0x968; // 
                constexpr std::ptrdiff_t m_OnStartLook = 0x990; // 
                constexpr std::ptrdiff_t m_OnEndLook = 0x9B8; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoTeleportDestination {
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CMathRemap {
                constexpr std::ptrdiff_t m_flInMin = 0x4E0; // 
                constexpr std::ptrdiff_t m_flInMax = 0x4E4; // 
                constexpr std::ptrdiff_t m_flOut1 = 0x4E8; // 
                constexpr std::ptrdiff_t m_flOut2 = 0x4EC; // 
                constexpr std::ptrdiff_t m_flOldInValue = 0x4F0; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4F4; // 
                constexpr std::ptrdiff_t m_OutValue = 0x4F8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x520; // 
                constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x548; // 
                constexpr std::ptrdiff_t m_OnFellBelowMin = 0x570; // 
                constexpr std::ptrdiff_t m_OnFellBelowMax = 0x598; // 
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CInstructorEventEntity {
                constexpr std::ptrdiff_t m_iszName = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4E8; // 
                constexpr std::ptrdiff_t m_hTargetPlayer = 0x4F0; // 
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
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4E0; // 
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x4E8; // 
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x4EC; // 
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4F0; // 
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x4F4; // 
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x4F8; // 
                constexpr std::ptrdiff_t m_flFarZ = 0x4FC; // 
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x500; // 
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x504; // 
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x508; // 
                constexpr std::ptrdiff_t m_fogColor = 0x50C; // 
                constexpr std::ptrdiff_t m_flFogStrength = 0x510; // 
                constexpr std::ptrdiff_t m_flFadeTime = 0x514; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x518; // 
                constexpr std::ptrdiff_t m_bIsEnabled = 0x519; // 
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x51A; // 
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace CFootstepControl {
                constexpr std::ptrdiff_t m_source = 0x920; // 
                constexpr std::ptrdiff_t m_destination = 0x928; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CTriggerVolume {
                constexpr std::ptrdiff_t m_iFilterName = 0x750; // 
                constexpr std::ptrdiff_t m_hFilter = 0x758; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintHostageRescueZone {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CFishPool {
                constexpr std::ptrdiff_t m_fishCount = 0x4F0; // 
                constexpr std::ptrdiff_t m_maxRange = 0x4F4; // 
                constexpr std::ptrdiff_t m_swimDepth = 0x4F8; // 
                constexpr std::ptrdiff_t m_waterLevel = 0x4FC; // 
                constexpr std::ptrdiff_t m_isDormant = 0x500; // 
                constexpr std::ptrdiff_t m_fishes = 0x508; // 
                constexpr std::ptrdiff_t m_visTimer = 0x520; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointClientCommand {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncVPhysicsClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x750; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 5
            namespace CCSPlayer_RadioServices {
                constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x40; // 
                constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x44; // 
                constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x48; // 
                constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x4C; // 
                constexpr std::ptrdiff_t m_bIgnoreRadio = 0x58; // 
            }
            // Parent: CSceneEntity
            // Field count: 7
            namespace CInstancedSceneEntity {
                constexpr std::ptrdiff_t m_hOwner = 0xA40; // 
                constexpr std::ptrdiff_t m_bHadOwner = 0xA44; // 
                constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xA48; // 
                constexpr std::ptrdiff_t m_flPreDelay = 0xA4C; // 
                constexpr std::ptrdiff_t m_bIsBackground = 0xA50; // 
                constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0xA51; // 
                constexpr std::ptrdiff_t m_hTarget = 0xA54; // 
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CEnvHudHint {
                constexpr std::ptrdiff_t m_iszMessage = 0x4E0; // 
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
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x750; // 
                constexpr std::ptrdiff_t m_bActive = 0x950; // 
                constexpr std::ptrdiff_t m_bFrozen = 0x951; // 
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x954; // 
                constexpr std::ptrdiff_t m_nStopType = 0x958; // 
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x95C; // 
                constexpr std::ptrdiff_t m_iEffectIndex = 0x960; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x968; // 
                constexpr std::ptrdiff_t m_flPreSimTime = 0x96C; // 
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x970; // 
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x9A0; // 
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x9A4; // 
                constexpr std::ptrdiff_t m_bNoSave = 0xAA4; // 
                constexpr std::ptrdiff_t m_bNoFreeze = 0xAA5; // 
                constexpr std::ptrdiff_t m_bNoRamp = 0xAA6; // 
                constexpr std::ptrdiff_t m_bStartActive = 0xAA7; // 
                constexpr std::ptrdiff_t m_iszEffectName = 0xAA8; // 
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xAB0; // 
                constexpr std::ptrdiff_t m_nDataCP = 0xCB0; // 
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xCB4; // 
                constexpr std::ptrdiff_t m_nTintCP = 0xCC0; // 
                constexpr std::ptrdiff_t m_clrTint = 0xCC4; // 
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // 
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108; // 
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1E8; // 
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1E9; // 
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1F0; // 
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x2F0; // 
                constexpr std::ptrdiff_t m_iFlags = 0x2F1; // 
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x2F2; // 
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x2F3; // 
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x2F4; // 
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x2F8; // 
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x2FC; // 
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x300; // 
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x304; // 
                constexpr std::ptrdiff_t m_iWeight = 0x308; // 
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x30C; // 
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x30D; // 
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x310; // 
                constexpr std::ptrdiff_t m_iSlot = 0x314; // 
                constexpr std::ptrdiff_t m_iPosition = 0x318; // 
                constexpr std::ptrdiff_t m_aShootSounds = 0x320; // 
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
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            namespace CCSObserverPawn {
            }
            // Parent: CItem
            // Field count: 1
            namespace CScriptItem {
                constexpr std::ptrdiff_t m_MoveTypeOverride = 0xA38; // 
            }
            // Parent: IntervalTimer
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
                constexpr std::ptrdiff_t m_flValues = 0x10; // 
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // 
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // 
                constexpr std::ptrdiff_t m_flInterval = 0x214; // 
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // 
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // 
                constexpr std::ptrdiff_t m_bStopped = 0x220; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSG556 {
            }
            // Parent: CPointEntity
            // Field count: 10
            namespace CAmbientGeneric {
                constexpr std::ptrdiff_t m_radius = 0x4E0; // 
                constexpr std::ptrdiff_t m_flMaxRadius = 0x4E4; // 
                constexpr std::ptrdiff_t m_iSoundLevel = 0x4E8; // 
                constexpr std::ptrdiff_t m_dpv = 0x4EC; // 
                constexpr std::ptrdiff_t m_fActive = 0x550; // 
                constexpr std::ptrdiff_t m_fLooping = 0x551; // 
                constexpr std::ptrdiff_t m_iszSound = 0x558; // 
                constexpr std::ptrdiff_t m_sSourceEntName = 0x560; // 
                constexpr std::ptrdiff_t m_hSoundSource = 0x568; // 
                constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x56C; // 
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
                constexpr std::ptrdiff_t m_ActualFlags = 0x750; // 
                constexpr std::ptrdiff_t m_Flags = 0x751; // 
                constexpr std::ptrdiff_t m_LightStyle = 0x752; // 
                constexpr std::ptrdiff_t m_On = 0x753; // 
                constexpr std::ptrdiff_t m_Radius = 0x754; // 
                constexpr std::ptrdiff_t m_Exponent = 0x758; // 
                constexpr std::ptrdiff_t m_InnerAngle = 0x75C; // 
                constexpr std::ptrdiff_t m_OuterAngle = 0x760; // 
                constexpr std::ptrdiff_t m_SpotRadius = 0x764; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponP90 {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerToggleSave {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CPrecipitation {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointServerCommand {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // 
                constexpr std::ptrdiff_t m_hOuter = 0x24; // 
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // 
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // 
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // 
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CLogicalEntity {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // 
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // 
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // 
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // 
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // 
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // 
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // 
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // 
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // 
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // 
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // 
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // 
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // 
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // 
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // 
            }
            // Parent: CBreakableProp
            // Field count: 37
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_bAwake (bool)
            namespace CPhysicsProp {
                constexpr std::ptrdiff_t m_MotionEnabled = 0xB18; // 
                constexpr std::ptrdiff_t m_OnAwakened = 0xB40; // 
                constexpr std::ptrdiff_t m_OnAwake = 0xB68; // 
                constexpr std::ptrdiff_t m_OnAsleep = 0xB90; // 
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xBB8; // 
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xBE0; // 
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xC08; // 
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xC30; // 
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xC31; // 
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xC32; // 
                constexpr std::ptrdiff_t m_massScale = 0xC34; // 
                constexpr std::ptrdiff_t m_inertiaScale = 0xC38; // 
                constexpr std::ptrdiff_t m_buoyancyScale = 0xC3C; // 
                constexpr std::ptrdiff_t m_damageType = 0xC40; // 
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xC44; // 
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xC48; // 
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xC4C; // 
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xC4D; // 
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xC4E; // 
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xC4F; // 
                constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xC50; // 
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xC54; // 
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xC55; // 
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xC58; // 
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xC5C; // 
                constexpr std::ptrdiff_t m_nGlowRange = 0xC60; // 
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xC64; // 
                constexpr std::ptrdiff_t m_glowColor = 0xC68; // 
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xC6C; // 
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xC6D; // 
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xC77; // 
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xC78; // 
                constexpr std::ptrdiff_t m_CrateType = 0xC7C; // 
                constexpr std::ptrdiff_t m_strItemClass = 0xC80; // 
                constexpr std::ptrdiff_t m_nItemCount = 0xCA0; // 
                constexpr std::ptrdiff_t m_bRemovableForAmmoBalancing = 0xCB0; // 
                constexpr std::ptrdiff_t m_bAwake = 0xCB1; // 
            }
            // Parent: CFuncWall
            // Field count: 0
            namespace CFuncWallToggle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // 
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // 
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CSensorGrenadeProjectile {
                constexpr std::ptrdiff_t m_fExpireTime = 0xB08; // 
                constexpr std::ptrdiff_t m_fNextDetectPlayerSound = 0xB0C; // 
                constexpr std::ptrdiff_t m_hDisplayGrenade = 0xB10; // 
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            namespace CCSPlayer_CameraServices {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CSPerRoundStats_t
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // 
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // 
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // 
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // 
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // 
                constexpr std::ptrdiff_t m_iEnemy2Ks = 0x7C; // 
                constexpr std::ptrdiff_t m_iUtility_Count = 0x80; // 
                constexpr std::ptrdiff_t m_iUtility_Successes = 0x84; // 
                constexpr std::ptrdiff_t m_iUtility_Enemies = 0x88; // 
                constexpr std::ptrdiff_t m_iFlash_Count = 0x8C; // 
                constexpr std::ptrdiff_t m_iFlash_Successes = 0x90; // 
                constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x94; // 
                constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x98; // 
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9C; // 
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xA0; // 
                constexpr std::ptrdiff_t m_i1v1Count = 0xA4; // 
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA8; // 
                constexpr std::ptrdiff_t m_i1v2Count = 0xAC; // 
                constexpr std::ptrdiff_t m_i1v2Wins = 0xB0; // 
                constexpr std::ptrdiff_t m_iEntryCount = 0xB4; // 
                constexpr std::ptrdiff_t m_iEntryWins = 0xB8; // 
            }
            // Parent: CFuncLadder
            // Field count: 0
            namespace CFuncLadderAlias_func_useableladder {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerSndSosOpvar {
                constexpr std::ptrdiff_t m_hTouchingPlayers = 0x920; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_flPosition = 0x938; // 
                constexpr std::ptrdiff_t m_flCenterSize = 0x944; // 
                constexpr std::ptrdiff_t m_flMinVal = 0x948; // 
                constexpr std::ptrdiff_t m_flMaxVal = 0x94C; // 
                constexpr std::ptrdiff_t m_opvarName = 0x950; // 
                constexpr std::ptrdiff_t m_stackName = 0x958; // 
                constexpr std::ptrdiff_t m_operatorName = 0x960; // 
                constexpr std::ptrdiff_t m_bVolIs2D = 0x968; // 
                constexpr std::ptrdiff_t m_opvarNameChar = 0x969; // 
                constexpr std::ptrdiff_t m_stackNameChar = 0xA69; // 
                constexpr std::ptrdiff_t m_operatorNameChar = 0xB69; // 
                constexpr std::ptrdiff_t m_VecNormPos = 0xC6C; // 
                constexpr std::ptrdiff_t m_flNormCenterSize = 0xC78; // 
            }
            // Parent: CItem
            // Field count: 0
            namespace CItemAssaultSuit {
            }
            // Parent: CBaseEntity
            // Field count: 72
            namespace CScriptedSequence {
                constexpr std::ptrdiff_t m_iszEntry = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszPreIdle = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszPlay = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszPostIdle = 0x4F8; // 
                constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x500; // 
                constexpr std::ptrdiff_t m_iszNextScript = 0x508; // 
                constexpr std::ptrdiff_t m_iszEntity = 0x510; // 
                constexpr std::ptrdiff_t m_iszSyncGroup = 0x518; // 
                constexpr std::ptrdiff_t m_nMoveTo = 0x520; // 
                constexpr std::ptrdiff_t m_nMoveToGait = 0x524; // 
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x528; // 
                constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x52C; // 
                constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x52D; // 
                constexpr std::ptrdiff_t m_bIsPlayingAction = 0x52E; // 
                constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x52F; // 
                constexpr std::ptrdiff_t m_bDontRotateOther = 0x530; // 
                constexpr std::ptrdiff_t m_bIsRepeatable = 0x531; // 
                constexpr std::ptrdiff_t m_bShouldLeaveCorpse = 0x532; // 
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x533; // 
                constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x534; // 
                constexpr std::ptrdiff_t m_bCanOverrideNPCState = 0x535; // 
                constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x536; // 
                constexpr std::ptrdiff_t m_bHighPriority = 0x537; // 
                constexpr std::ptrdiff_t m_bHideDebugComplaints = 0x538; // 
                constexpr std::ptrdiff_t m_bContinueOnDeath = 0x539; // 
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x53A; // 
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x53B; // 
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x53C; // 
                constexpr std::ptrdiff_t m_bSynchPostIdles = 0x53D; // 
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x53E; // 
                constexpr std::ptrdiff_t m_bIgnoreGravity = 0x53F; // 
                constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x540; // 
                constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x541; // 
                constexpr std::ptrdiff_t m_bDontAddModifiers = 0x542; // 
                constexpr std::ptrdiff_t m_flRadius = 0x544; // 
                constexpr std::ptrdiff_t m_flRepeat = 0x548; // 
                constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x54C; // 
                constexpr std::ptrdiff_t m_flMoveInterpTime = 0x550; // 
                constexpr std::ptrdiff_t m_flAngRate = 0x554; // 
                constexpr std::ptrdiff_t m_bWaitUntilMoveCompletesToStartAnimation = 0x558; // 
                constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x55C; // 
                constexpr std::ptrdiff_t m_startTime = 0x560; // 
                constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x564; // 
                constexpr std::ptrdiff_t m_saved_effects = 0x568; // 
                constexpr std::ptrdiff_t m_savedFlags = 0x56C; // 
                constexpr std::ptrdiff_t m_savedCollisionGroup = 0x570; // 
                constexpr std::ptrdiff_t m_bInterruptable = 0x574; // 
                constexpr std::ptrdiff_t m_sequenceStarted = 0x575; // 
                constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x576; // 
                constexpr std::ptrdiff_t m_hTargetEnt = 0x578; // 
                constexpr std::ptrdiff_t m_hNextCine = 0x57C; // 
                constexpr std::ptrdiff_t m_bThinking = 0x580; // 
                constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x581; // 
                constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x582; // 
                constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x583; // 
                constexpr std::ptrdiff_t m_hForcedTarget = 0x584; // 
                constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x588; // 
                constexpr std::ptrdiff_t m_bForceSynch = 0x589; // 
                constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x58A; // 
                constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x58B; // 
                constexpr std::ptrdiff_t m_onDeathBehavior = 0x58C; // 
                constexpr std::ptrdiff_t m_ConflictResponse = 0x590; // 
                constexpr std::ptrdiff_t m_OnBeginSequence = 0x598; // 
                constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x5C0; // 
                constexpr std::ptrdiff_t m_OnEndSequence = 0x5E8; // 
                constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x610; // 
                constexpr std::ptrdiff_t m_OnCancelSequence = 0x638; // 
                constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x660; // 
                constexpr std::ptrdiff_t m_OnScriptEvent = 0x688; // 
                constexpr std::ptrdiff_t m_matOtherToMain = 0x7D0; // 
                constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x7F0; // 
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x7F4; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponNegev {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponGalilAR {
            }
            // Parent: CModelPointEntity
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_hTargetEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bState (bool)
            // NetworkVarNames: m_bAlwaysUpdate (bool)
            // NetworkVarNames: m_flLightFOV (float32)
            // NetworkVarNames: m_bEnableShadows (bool)
            // NetworkVarNames: m_bSimpleProjection (bool)
            // NetworkVarNames: m_bLightOnlyTarget (bool)
            // NetworkVarNames: m_bLightWorld (bool)
            // NetworkVarNames: m_bCameraSpace (bool)
            // NetworkVarNames: m_flBrightnessScale (float32)
            // NetworkVarNames: m_LightColor (Color)
            // NetworkVarNames: m_flIntensity (float32)
            // NetworkVarNames: m_flLinearAttenuation (float32)
            // NetworkVarNames: m_flQuadraticAttenuation (float32)
            // NetworkVarNames: m_bVolumetric (bool)
            // NetworkVarNames: m_flNoiseStrength (float32)
            // NetworkVarNames: m_flFlashlightTime (float32)
            // NetworkVarNames: m_nNumPlanes (uint32)
            // NetworkVarNames: m_flPlaneOffset (float32)
            // NetworkVarNames: m_flVolumetricIntensity (float32)
            // NetworkVarNames: m_flColorTransitionTime (float32)
            // NetworkVarNames: m_flAmbient (float32)
            // NetworkVarNames: m_SpotlightTextureName (char)
            // NetworkVarNames: m_nSpotlightTextureFrame (int32)
            // NetworkVarNames: m_nShadowQuality (uint32)
            // NetworkVarNames: m_flNearZ (float32)
            // NetworkVarNames: m_flFarZ (float32)
            // NetworkVarNames: m_flProjectionSize (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_bFlipHorizontal (bool)
            namespace CEnvProjectedTexture {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x750; // 
                constexpr std::ptrdiff_t m_bState = 0x754; // 
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x755; // 
                constexpr std::ptrdiff_t m_flLightFOV = 0x758; // 
                constexpr std::ptrdiff_t m_bEnableShadows = 0x75C; // 
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x75D; // 
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x75E; // 
                constexpr std::ptrdiff_t m_bLightWorld = 0x75F; // 
                constexpr std::ptrdiff_t m_bCameraSpace = 0x760; // 
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x764; // 
                constexpr std::ptrdiff_t m_LightColor = 0x768; // 
                constexpr std::ptrdiff_t m_flIntensity = 0x76C; // 
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x770; // 
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x774; // 
                constexpr std::ptrdiff_t m_bVolumetric = 0x778; // 
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x77C; // 
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x780; // 
                constexpr std::ptrdiff_t m_nNumPlanes = 0x784; // 
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x788; // 
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x78C; // 
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x790; // 
                constexpr std::ptrdiff_t m_flAmbient = 0x794; // 
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x798; // 
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x998; // 
                constexpr std::ptrdiff_t m_nShadowQuality = 0x99C; // 
                constexpr std::ptrdiff_t m_flNearZ = 0x9A0; // 
                constexpr std::ptrdiff_t m_flFarZ = 0x9A4; // 
                constexpr std::ptrdiff_t m_flProjectionSize = 0x9A8; // 
                constexpr std::ptrdiff_t m_flRotation = 0x9AC; // 
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x9B0; // 
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CSceneListManager {
                constexpr std::ptrdiff_t m_hListManagers = 0x4E0; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszScenes = 0x4F8; // 
                constexpr std::ptrdiff_t m_hScenes = 0x578; // 
            }
            // Parent: CPhysConstraint
            // Field count: 1
            namespace CSplineConstraint {
                constexpr std::ptrdiff_t m_vAnchorOffsetRestore = 0x5A0; // 
            }
            // Parent: CPlayer_ViewModelServices
            // Field count: 0
            namespace CCSObserver_ViewModelServices {
            }
            // Parent: CDynamicProp
            // Field count: 0
            namespace CDynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // 
                constexpr std::ptrdiff_t m_Name = 0x30; // 
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // 
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropMultiplayer {
            }
            // Parent: CBaseToggle
            // Field count: 5
            namespace CBasePlatTrain {
                constexpr std::ptrdiff_t m_NoiseMoving = 0x7D0; // 
                constexpr std::ptrdiff_t m_NoiseArrived = 0x7D8; // 
                constexpr std::ptrdiff_t m_volume = 0x7E8; // 
                constexpr std::ptrdiff_t m_flTWidth = 0x7EC; // 
                constexpr std::ptrdiff_t m_flTLength = 0x7F0; // 
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 0
            namespace CSimpleMarkupVolumeTagged {
            }
            // Parent: SpawnPoint
            // Field count: 0
            namespace CInfoPlayerTerrorist {
            }
            // Parent: CPhysHinge
            // Field count: 0
            namespace CPhysHingeAlias_phys_hinge_local {
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CTankTargetChange {
                constexpr std::ptrdiff_t m_newTarget = 0x4E0; // 
                constexpr std::ptrdiff_t m_newTargetName = 0x4F0; // 
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicCompare {
                constexpr std::ptrdiff_t m_flInValue = 0x4E0; // 
                constexpr std::ptrdiff_t m_flCompareValue = 0x4E4; // 
                constexpr std::ptrdiff_t m_OnLessThan = 0x4E8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnEqualTo = 0x510; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnNotEqualTo = 0x538; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x560; // CEntityOutputTemplate<float32>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // 
            }
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnTrigger = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnSpawn = 0x508; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x530; // 
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x531; // 
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x532; // 
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x533; // 
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x534; // 
            }
            // Parent: CPlayer_ItemServices
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // 
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // 
                constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // 
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CKeepUpright {
                constexpr std::ptrdiff_t m_worldGoalAxis = 0x4E8; // 
                constexpr std::ptrdiff_t m_localTestAxis = 0x4F4; // 
                constexpr std::ptrdiff_t m_nameAttach = 0x508; // 
                constexpr std::ptrdiff_t m_attachedObject = 0x510; // 
                constexpr std::ptrdiff_t m_angularLimit = 0x514; // 
                constexpr std::ptrdiff_t m_bActive = 0x518; // 
                constexpr std::ptrdiff_t m_bDampAllRotation = 0x519; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CModelPointEntity {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x750; // 
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CFuncTimescale {
                constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4E0; // 
                constexpr std::ptrdiff_t m_flAcceleration = 0x4E4; // 
                constexpr std::ptrdiff_t m_flMinBlendRate = 0x4E8; // 
                constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4EC; // 
                constexpr std::ptrdiff_t m_isStarted = 0x4F0; // 
            }
            // Parent: CBtNode
            // Field count: 14
            namespace CBtActionMoveTo {
                constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60; // 
                constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68; // 
                constexpr std::ptrdiff_t m_szThreatInputKey = 0x70; // 
                constexpr std::ptrdiff_t m_vecDestination = 0x78; // 
                constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84; // 
                constexpr std::ptrdiff_t m_bComputePath = 0x85; // 
                constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88; // 
                constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90; // 
                constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xA8; // 
                constexpr std::ptrdiff_t m_RepathTimer = 0xC0; // 
                constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xD8; // 
                constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xDC; // 
                constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xE0; // 
                constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xE4; // 
            }
            // Parent: CBaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            namespace CTonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4E0; // 
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4E4; // 
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x4E8; // 
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x4EC; // 
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x4F0; // 
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4F4; // 
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4F8; // 
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4FC; // 
            }
            // Parent: CRopeKeyframe
            // Field count: 0
            namespace CRopeKeyframeAlias_move_rope {
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CEnvInstructorVRHint {
                constexpr std::ptrdiff_t m_iszName = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4E8; // 
                constexpr std::ptrdiff_t m_iTimeout = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszCaption = 0x4F8; // 
                constexpr std::ptrdiff_t m_iszStartSound = 0x500; // 
                constexpr std::ptrdiff_t m_iLayoutFileType = 0x508; // 
                constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x510; // 
                constexpr std::ptrdiff_t m_iAttachType = 0x518; // 
                constexpr std::ptrdiff_t m_flHeightOffset = 0x51C; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CWeaponXM1014 {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CPlatTrigger {
                constexpr std::ptrdiff_t m_pPlatform = 0x750; // 
            }
            // Parent: None
            // Field count: 31
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
            // NetworkVarNames: m_location (Vector)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            namespace CEnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // 
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // 
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // 
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // 
                constexpr std::ptrdiff_t m_windRadius = 0x14; // 
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // 
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // 
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // 
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // 
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // 
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // 
                constexpr std::ptrdiff_t m_location = 0x2C; // 
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // 
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // 
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // 
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // 
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // 
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // 
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // 
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // 
                constexpr std::ptrdiff_t m_OnGustStart = 0x70; // 
                constexpr std::ptrdiff_t m_OnGustEnd = 0x98; // 
                constexpr std::ptrdiff_t m_flVariationTime = 0xC0; // 
                constexpr std::ptrdiff_t m_flSwayTime = 0xC4; // 
                constexpr std::ptrdiff_t m_flSimTime = 0xC8; // 
                constexpr std::ptrdiff_t m_flSwitchTime = 0xCC; // 
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0xD0; // 
                constexpr std::ptrdiff_t m_bGusting = 0xD4; // 
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0xD8; // 
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0xDC; // 
                constexpr std::ptrdiff_t m_hEntOwner = 0xE0; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CMolotovGrenade {
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPointHurt {
                constexpr std::ptrdiff_t m_nDamage = 0x4E0; // 
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4E4; // 
                constexpr std::ptrdiff_t m_flRadius = 0x4E8; // 
                constexpr std::ptrdiff_t m_flDelay = 0x4EC; // 
                constexpr std::ptrdiff_t m_strTarget = 0x4F0; // 
                constexpr std::ptrdiff_t m_pActivator = 0x4F8; // 
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
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4E1; // 
                constexpr std::ptrdiff_t m_nInputType = 0x4E4; // 
                constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4F0; // 
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x4F8; // 
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4FC; // 
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x500; // 
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x504; // 
                constexpr std::ptrdiff_t m_flEngageDistance = 0x508; // 
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x50C; // 
                constexpr std::ptrdiff_t m_nOutputType = 0x510; // 
                constexpr std::ptrdiff_t m_iszOutputEntityName = 0x518; // 
                constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x520; // 
                constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x528; // 
                constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x530; // 
                constexpr std::ptrdiff_t m_hOutputEntities = 0x538; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x550; // 
                constexpr std::ptrdiff_t m_nMomentumType = 0x554; // 
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x558; // 
                constexpr std::ptrdiff_t m_flSnapValue = 0x55C; // 
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x560; // 
                constexpr std::ptrdiff_t m_nRatchetType = 0x564; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x568; // 
                constexpr std::ptrdiff_t m_flInputOffset = 0x56C; // 
                constexpr std::ptrdiff_t m_bEngaged = 0x570; // 
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x571; // 
                constexpr std::ptrdiff_t m_flPreviousValue = 0x574; // 
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x578; // 
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x57C; // 
                constexpr std::ptrdiff_t m_hUsingPlayer = 0x588; // 
                constexpr std::ptrdiff_t m_flCustomOutputValue = 0x58C; // 
                constexpr std::ptrdiff_t m_iszSoundEngage = 0x590; // 
                constexpr std::ptrdiff_t m_iszSoundDisengage = 0x598; // 
                constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x5A0; // 
                constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x5A8; // 
                constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x5B0; // 
                constexpr std::ptrdiff_t m_Position = 0x5C0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PositionDelta = 0x5E8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnReachedValueZero = 0x610; // 
                constexpr std::ptrdiff_t m_OnReachedValueOne = 0x638; // 
                constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x660; // 
                constexpr std::ptrdiff_t m_OnEngage = 0x688; // 
                constexpr std::ptrdiff_t m_OnDisengage = 0x6B0; // 
            }
            // Parent: CLogicNPCCounter
            // Field count: 4
            namespace CLogicNPCCounterAABB {
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x820; // 
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x82C; // 
                constexpr std::ptrdiff_t m_vOuterMins = 0x838; // 
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x844; // 
            }
            // Parent: CLightEntity
            // Field count: 0
            namespace CLightOrthoEntity {
            }
            // Parent: CEnvSoundscapeTriggerable
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: CSoundOpvarSetPointBase
            // Field count: 24
            namespace CSoundOpvarSetPointEntity {
                constexpr std::ptrdiff_t m_OnEnter = 0x578; // 
                constexpr std::ptrdiff_t m_OnExit = 0x5A0; // 
                constexpr std::ptrdiff_t m_bAutoDisable = 0x5C8; // 
                constexpr std::ptrdiff_t m_flDistanceMin = 0x60C; // 
                constexpr std::ptrdiff_t m_flDistanceMax = 0x610; // 
                constexpr std::ptrdiff_t m_flDistanceMapMin = 0x614; // 
                constexpr std::ptrdiff_t m_flDistanceMapMax = 0x618; // 
                constexpr std::ptrdiff_t m_flOcclusionRadius = 0x61C; // 
                constexpr std::ptrdiff_t m_flOcclusionMin = 0x620; // 
                constexpr std::ptrdiff_t m_flOcclusionMax = 0x624; // 
                constexpr std::ptrdiff_t m_flValSetOnDisable = 0x628; // 
                constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x62C; // 
                constexpr std::ptrdiff_t m_bReloading = 0x62D; // 
                constexpr std::ptrdiff_t m_nSimulationMode = 0x630; // 
                constexpr std::ptrdiff_t m_nVisibilitySamples = 0x634; // 
                constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x638; // 
                constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x644; // 
                constexpr std::ptrdiff_t m_hDynamicEntity = 0x648; // 
                constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x650; // 
                constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x658; // 
                constexpr std::ptrdiff_t m_vPathingSourcePos = 0x65C; // 
                constexpr std::ptrdiff_t m_vPathingListenerPos = 0x668; // 
                constexpr std::ptrdiff_t m_vPathingDirection = 0x674; // 
                constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x680; // 
            }
            // Parent: CBaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace CSkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x4E0; // 
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x570; // 
                constexpr std::ptrdiff_t m_bUseAngles = 0x574; // 
                constexpr std::ptrdiff_t m_pNext = 0x578; // 
            }
            // Parent: CRulePointEntity
            // Field count: 4
            namespace CGameMoney {
                constexpr std::ptrdiff_t m_OnMoneySpent = 0x760; // 
                constexpr std::ptrdiff_t m_OnMoneySpentFail = 0x788; // 
                constexpr std::ptrdiff_t m_nMoney = 0x7B0; // 
                constexpr std::ptrdiff_t m_strAwardText = 0x7B8; // 
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicPlayerProxy {
                constexpr std::ptrdiff_t m_hPlayer = 0x4E0; // 
                constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4E8; // 
                constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x510; // 
                constexpr std::ptrdiff_t m_PlayerDied = 0x538; // 
                constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x560; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // 
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // 
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // 
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponZoneRepulsor {
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPhysImpact {
                constexpr std::ptrdiff_t m_damage = 0x4E0; // 
                constexpr std::ptrdiff_t m_distance = 0x4E4; // 
                constexpr std::ptrdiff_t m_directionEntityName = 0x4E8; // 
            }
            // Parent: CBaseEntity
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_Entity_Color (Color)
            // NetworkVarNames: m_Entity_flBrightness (float)
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_hLightProbeTexture (HRenderTextureStrong)
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
                constexpr std::ptrdiff_t m_Entity_Color = 0x1540; // 
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1544; // 
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1548; // 
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1550; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x1558; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1560; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1568; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1570; // 
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1578; // 
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1584; // 
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1590; // 
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1594; // 
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x1598; // 
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x159C; // 
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x15A0; // 
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x15A4; // 
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x15A8; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x15B4; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x15B8; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x15BC; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x15C0; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x15C4; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x15C8; // 
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x15E1; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM249 {
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
                constexpr std::ptrdiff_t m_flAlphaScale = 0xCC8; // 
                constexpr std::ptrdiff_t m_flRadiusScale = 0xCCC; // 
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0xCD0; // 
                constexpr std::ptrdiff_t m_ColorTint = 0xCD4; // 
                constexpr std::ptrdiff_t m_hTextureOverride = 0xCD8; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncVehicleClip {
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace CSoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x500; // 
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
                constexpr std::ptrdiff_t m_targetCamera = 0x770; // 
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x778; // 
                constexpr std::ptrdiff_t m_bRenderShadows = 0x77C; // 
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x77D; // 
                constexpr std::ptrdiff_t m_brushModelName = 0x780; // 
                constexpr std::ptrdiff_t m_hTargetCamera = 0x788; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x78C; // 
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x78D; // 
                constexpr std::ptrdiff_t m_bStartEnabled = 0x78E; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CEnvFunnel {
            }
            // Parent: None
            // Field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // 
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // 
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // 
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // 
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // 
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // 
            }
            // Parent: CCSGameModeRules
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: CPointEntity
            // Field count: 16
            namespace CPointAngularVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4E0; // 
                constexpr std::ptrdiff_t m_flThreshold = 0x4E4; // 
                constexpr std::ptrdiff_t m_nLastCompareResult = 0x4E8; // 
                constexpr std::ptrdiff_t m_nLastFireResult = 0x4EC; // 
                constexpr std::ptrdiff_t m_flFireTime = 0x4F0; // 
                constexpr std::ptrdiff_t m_flFireInterval = 0x4F4; // 
                constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4F8; // 
                constexpr std::ptrdiff_t m_lastOrientation = 0x4FC; // 
                constexpr std::ptrdiff_t m_vecAxis = 0x508; // 
                constexpr std::ptrdiff_t m_bUseHelper = 0x514; // 
                constexpr std::ptrdiff_t m_AngularVelocity = 0x518; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnLessThan = 0x540; // 
                constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x568; // 
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x590; // 
                constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x5B8; // 
                constexpr std::ptrdiff_t m_OnEqualTo = 0x5E0; // 
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            namespace CMolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0xB08; // 
                constexpr std::ptrdiff_t m_bDetonated = 0xB14; // 
                constexpr std::ptrdiff_t m_stillTimer = 0xB18; // 
                constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xBF8; // 
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CPointPulse {
            }
            // Parent: CPointEntity
            // Field count: 24
            namespace CEnvInstructorHint {
                constexpr std::ptrdiff_t m_iszName = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszReplace_Key = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4F0; // 
                constexpr std::ptrdiff_t m_iTimeout = 0x4F8; // 
                constexpr std::ptrdiff_t m_iDisplayLimit = 0x4FC; // 
                constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x500; // 
                constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x508; // 
                constexpr std::ptrdiff_t m_iszCaption = 0x510; // 
                constexpr std::ptrdiff_t m_iszActivatorCaption = 0x518; // 
                constexpr std::ptrdiff_t m_Color = 0x520; // 
                constexpr std::ptrdiff_t m_fIconOffset = 0x524; // 
                constexpr std::ptrdiff_t m_fRange = 0x528; // 
                constexpr std::ptrdiff_t m_iPulseOption = 0x52C; // 
                constexpr std::ptrdiff_t m_iAlphaOption = 0x52D; // 
                constexpr std::ptrdiff_t m_iShakeOption = 0x52E; // 
                constexpr std::ptrdiff_t m_bStatic = 0x52F; // 
                constexpr std::ptrdiff_t m_bNoOffscreen = 0x530; // 
                constexpr std::ptrdiff_t m_bForceCaption = 0x531; // 
                constexpr std::ptrdiff_t m_iInstanceType = 0x534; // 
                constexpr std::ptrdiff_t m_bSuppressRest = 0x538; // 
                constexpr std::ptrdiff_t m_iszBinding = 0x540; // 
                constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x548; // 
                constexpr std::ptrdiff_t m_bAutoStart = 0x549; // 
                constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x54A; // 
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvTracer {
                constexpr std::ptrdiff_t m_vecEnd = 0x4E0; // 
                constexpr std::ptrdiff_t m_flDelay = 0x4EC; // 
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CInfoGameEventProxy {
                constexpr std::ptrdiff_t m_iszEventName = 0x4E0; // 
                constexpr std::ptrdiff_t m_flRange = 0x4E8; // 
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
                constexpr std::ptrdiff_t m_FOV = 0x4E0; // 
                constexpr std::ptrdiff_t m_Resolution = 0x4E4; // 
                constexpr std::ptrdiff_t m_bFogEnable = 0x4E8; // 
                constexpr std::ptrdiff_t m_FogColor = 0x4E9; // 
                constexpr std::ptrdiff_t m_flFogStart = 0x4F0; // 
                constexpr std::ptrdiff_t m_flFogEnd = 0x4F4; // 
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4F8; // 
                constexpr std::ptrdiff_t m_bActive = 0x4FC; // 
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4FD; // 
                constexpr std::ptrdiff_t m_flAspectRatio = 0x500; // 
                constexpr std::ptrdiff_t m_bNoSky = 0x504; // 
                constexpr std::ptrdiff_t m_fBrightness = 0x508; // 
                constexpr std::ptrdiff_t m_flZFar = 0x50C; // 
                constexpr std::ptrdiff_t m_flZNear = 0x510; // 
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x514; // 
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x515; // 
                constexpr std::ptrdiff_t m_bDofEnabled = 0x516; // 
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x518; // 
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x51C; // 
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x520; // 
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x524; // 
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x528; // 
                constexpr std::ptrdiff_t m_TargetFOV = 0x52C; // 
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x530; // 
                constexpr std::ptrdiff_t m_bIsOn = 0x534; // 
                constexpr std::ptrdiff_t m_pNext = 0x538; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // 
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // 
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // 
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x198; // 
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x21A; // 
                constexpr std::ptrdiff_t m_nForceLOD = 0x21B; // 
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x21C; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace CFuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x750; // 
                constexpr std::ptrdiff_t m_Dismounts = 0x760; // 
                constexpr std::ptrdiff_t m_vecLocalTop = 0x778; // 
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x784; // 
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x790; // 
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x79C; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x7A0; // 
                constexpr std::ptrdiff_t m_bFakeLadder = 0x7A1; // 
                constexpr std::ptrdiff_t m_bHasSlack = 0x7A2; // 
                constexpr std::ptrdiff_t m_surfacePropName = 0x7A8; // 
                constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x7B0; // 
                constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x7D8; // 
            }
            // Parent: CLogicalEntity
            // Field count: 8
            namespace CPathKeyFrame {
                constexpr std::ptrdiff_t m_Origin = 0x4E0; // 
                constexpr std::ptrdiff_t m_Angles = 0x4EC; // 
                constexpr std::ptrdiff_t m_qAngle = 0x500; // 
                constexpr std::ptrdiff_t m_iNextKey = 0x510; // 
                constexpr std::ptrdiff_t m_flNextTime = 0x518; // 
                constexpr std::ptrdiff_t m_pNextKey = 0x520; // 
                constexpr std::ptrdiff_t m_pPrevKey = 0x528; // 
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x530; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            namespace CFuncInteractionLayerClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x750; // 
                constexpr std::ptrdiff_t m_iszInteractsAs = 0x758; // 
                constexpr std::ptrdiff_t m_iszInteractsWith = 0x760; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // 
                constexpr std::ptrdiff_t m_pManager = 0x58; // 
            }
            // Parent: CGameRules
            // Field count: 0
            namespace CMultiplayRules {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponRevolver {
            }
            // Parent: CDynamicProp
            // Field count: 1
            namespace COrnamentProp {
                constexpr std::ptrdiff_t m_initialOwner = 0xC10; // 
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CLogicGameEvent {
                constexpr std::ptrdiff_t m_iszEventName = 0x4E0; // 
            }
            // Parent: CPointEntity
            // Field count: 2
            namespace CEnvMuzzleFlash {
                constexpr std::ptrdiff_t m_flScale = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszParentAttachment = 0x4E8; // 
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
                constexpr std::ptrdiff_t m_nUniqueID = 0x750; // 
                constexpr std::ptrdiff_t m_unAccountID = 0x754; // 
                constexpr std::ptrdiff_t m_unTraceID = 0x758; // 
                constexpr std::ptrdiff_t m_rtGcTime = 0x75C; // 
                constexpr std::ptrdiff_t m_vecEndPos = 0x760; // 
                constexpr std::ptrdiff_t m_vecStart = 0x76C; // 
                constexpr std::ptrdiff_t m_vecLeft = 0x778; // 
                constexpr std::ptrdiff_t m_vecNormal = 0x784; // 
                constexpr std::ptrdiff_t m_nPlayer = 0x790; // 
                constexpr std::ptrdiff_t m_nEntity = 0x794; // 
                constexpr std::ptrdiff_t m_nHitbox = 0x798; // 
                constexpr std::ptrdiff_t m_flCreationTime = 0x79C; // 
                constexpr std::ptrdiff_t m_nTintID = 0x7A0; // 
                constexpr std::ptrdiff_t m_nVersion = 0x7A4; // 
                constexpr std::ptrdiff_t m_ubSignature = 0x7A5; // 
            }
            // Parent: CBaseTrigger
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_OnBombExplode = 0x920; // 
                constexpr std::ptrdiff_t m_OnBombPlanted = 0x948; // 
                constexpr std::ptrdiff_t m_OnBombDefused = 0x970; // 
                constexpr std::ptrdiff_t m_bIsBombSiteB = 0x998; // 
                constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x999; // 
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x99A; // 
                constexpr std::ptrdiff_t m_szMountTarget = 0x9A0; // 
                constexpr std::ptrdiff_t m_hInstructorHint = 0x9A8; // 
                constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x9AC; // 
            }
            // Parent: CBaseEntity
            // Field count: 8
            namespace CPhysicsSpring {
                constexpr std::ptrdiff_t m_flFrequency = 0x4E8; // 
                constexpr std::ptrdiff_t m_flDampingRatio = 0x4EC; // 
                constexpr std::ptrdiff_t m_flRestLength = 0x4F0; // 
                constexpr std::ptrdiff_t m_nameAttachStart = 0x4F8; // 
                constexpr std::ptrdiff_t m_nameAttachEnd = 0x500; // 
                constexpr std::ptrdiff_t m_start = 0x508; // 
                constexpr std::ptrdiff_t m_end = 0x514; // 
                constexpr std::ptrdiff_t m_teleportTick = 0x520; // 
            }
            // Parent: CBaseEntity
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hLightProbeTexture (HRenderTextureStrong)
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
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x14C0; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x14C8; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D0; // 
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x14D8; // 
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x14E0; // 
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x14EC; // 
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x14F8; // 
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x14FC; // 
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1500; // 
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1504; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1508; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x150C; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1510; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1514; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1518; // 
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x151C; // 
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1529; // 
            }
            // Parent: CCSGameModeRules
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CTriggerPush
            // Field count: 1
            namespace CScriptTriggerPush {
                constexpr std::ptrdiff_t m_vExtent = 0x958; // 
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CEnvEntityIgniter {
                constexpr std::ptrdiff_t m_flLifetime = 0x4E0; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CFuncWall {
                constexpr std::ptrdiff_t m_nState = 0x750; // 
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4E0; // 
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
            // NetworkVarNames: m_iDamage (int)
            // NetworkVarNames: m_iActualHealthRemoved (int)
            // NetworkVarNames: m_iNumHits (int)
            // NetworkVarNames: m_iLastBulletUpdate (int)
            // NetworkVarNames: m_bIsOtherEnemy (bool)
            // NetworkVarNames: m_killType (EKillTypes_t)
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // 
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // 
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // 
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // 
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // 
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // 
                constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // 
                constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // 
                constexpr std::ptrdiff_t m_iBulletsDamage = 0x58; // 
                constexpr std::ptrdiff_t m_iDamage = 0x5C; // 
                constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x60; // 
                constexpr std::ptrdiff_t m_iNumHits = 0x64; // 
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x68; // 
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x6C; // 
                constexpr std::ptrdiff_t m_killType = 0x6D; // 
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CLogicAutosave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4E0; // 
                constexpr std::ptrdiff_t m_minHitPoints = 0x4E4; // 
                constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4E8; // 
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // 
                constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: CEntityComponent
            // Field count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // 
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // 
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // 
                constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // 
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0; // 
            }
            // Parent: CSoundEventEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace CSoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_iszPathCorner = 0x598; // 
                constexpr std::ptrdiff_t m_iCountMax = 0x5A0; // 
                constexpr std::ptrdiff_t m_flDistanceMax = 0x5A4; // 
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x5A8; // 
                constexpr std::ptrdiff_t m_flDotProductMax = 0x5AC; // 
                constexpr std::ptrdiff_t m_bPlaying = 0x5B0; // 
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x5D8; // 
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x578; // 
            }
            // Parent: CEntityComponent
            // Field count: 67
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
            // NetworkVarNames: m_bRenderToCubemaps (bool)
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
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38; // 
                constexpr std::ptrdiff_t m_Color = 0x75; // 
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79; // 
                constexpr std::ptrdiff_t m_flBrightness = 0x80; // 
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84; // 
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88; // 
                constexpr std::ptrdiff_t m_flRange = 0x8C; // 
                constexpr std::ptrdiff_t m_flFalloff = 0x90; // 
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94; // 
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98; // 
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C; // 
                constexpr std::ptrdiff_t m_flTheta = 0xA0; // 
                constexpr std::ptrdiff_t m_flPhi = 0xA4; // 
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8; // 
                constexpr std::ptrdiff_t m_nCascades = 0xB0; // 
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4; // 
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8; // 
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC; // 
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0; // 
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4; // 
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8; // 
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC; // 
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0; // 
                constexpr std::ptrdiff_t m_nStyle = 0xD4; // 
                constexpr std::ptrdiff_t m_Pattern = 0xD8; // 
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0; // 
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4; // 
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8; // 
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC; // 
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0; // 
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4; // 
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8; // 
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC; // 
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100; // 
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104; // 
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108; // 
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C; // 
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110; // 
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114; // 
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118; // 
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C; // 
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120; // 
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124; // 
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128; // 
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C; // 
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x134; // 
                constexpr std::ptrdiff_t m_bFlicker = 0x135; // 
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136; // 
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138; // 
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168; // 
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174; // 
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178; // 
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C; // 
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180; // 
                constexpr std::ptrdiff_t m_SkyColor = 0x184; // 
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188; // 
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C; // 
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190; // 
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191; // 
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194; // 
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198; // 
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C; // 
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1B0; // 
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (CUtlVector<uint8>)
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xB20; // 
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xB24; // 
                constexpr std::ptrdiff_t m_nRandomSeed = 0xB28; // 
                constexpr std::ptrdiff_t m_vSmokeColor = 0xB2C; // 
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xB38; // 
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xB48; // 
                constexpr std::ptrdiff_t m_flLastBounce = 0xB60; // 
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xB64; // 
                constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2DE8; // 
            }
            // Parent: CTriggerMultiple
            // Field count: 1
            namespace CScriptTriggerMultiple {
                constexpr std::ptrdiff_t m_vExtent = 0x948; // 
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 5
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x688; // 
                constexpr std::ptrdiff_t m_doorwayPairs = 0x6A0; // 
                constexpr std::ptrdiff_t m_flSize = 0x6B8; // 
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x6BC; // 
                constexpr std::ptrdiff_t m_flSizeSqr = 0x6C0; // 
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x538; // 
            }
            // Parent: CBot
            // Field count: 139
            namespace CCSBot {
                constexpr std::ptrdiff_t m_eyePosition = 0x108; // 
                constexpr std::ptrdiff_t m_name = 0x114; // 
                constexpr std::ptrdiff_t m_combatRange = 0x154; // 
                constexpr std::ptrdiff_t m_isRogue = 0x158; // 
                constexpr std::ptrdiff_t m_rogueTimer = 0x160; // 
                constexpr std::ptrdiff_t m_diedLastRound = 0x17C; // 
                constexpr std::ptrdiff_t m_safeTime = 0x180; // 
                constexpr std::ptrdiff_t m_wasSafe = 0x184; // 
                constexpr std::ptrdiff_t m_blindFire = 0x18C; // 
                constexpr std::ptrdiff_t m_surpriseTimer = 0x190; // 
                constexpr std::ptrdiff_t m_bAllowActive = 0x1A8; // 
                constexpr std::ptrdiff_t m_isFollowing = 0x1A9; // 
                constexpr std::ptrdiff_t m_leader = 0x1AC; // 
                constexpr std::ptrdiff_t m_followTimestamp = 0x1B0; // 
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1B4; // 
                constexpr std::ptrdiff_t m_hurryTimer = 0x1B8; // 
                constexpr std::ptrdiff_t m_alertTimer = 0x1D0; // 
                constexpr std::ptrdiff_t m_sneakTimer = 0x1E8; // 
                constexpr std::ptrdiff_t m_panicTimer = 0x200; // 
                constexpr std::ptrdiff_t m_stateTimestamp = 0x4D0; // 
                constexpr std::ptrdiff_t m_isAttacking = 0x4D4; // 
                constexpr std::ptrdiff_t m_isOpeningDoor = 0x4D5; // 
                constexpr std::ptrdiff_t m_taskEntity = 0x4DC; // 
                constexpr std::ptrdiff_t m_goalPosition = 0x4EC; // 
                constexpr std::ptrdiff_t m_goalEntity = 0x4F8; // 
                constexpr std::ptrdiff_t m_avoid = 0x4FC; // 
                constexpr std::ptrdiff_t m_avoidTimestamp = 0x500; // 
                constexpr std::ptrdiff_t m_isStopping = 0x504; // 
                constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x505; // 
                constexpr std::ptrdiff_t m_stillTimer = 0x508; // 
                constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x518; // 
                constexpr std::ptrdiff_t m_pathIndex = 0x5610; // 
                constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x5614; // 
                constexpr std::ptrdiff_t m_repathTimer = 0x5618; // 
                constexpr std::ptrdiff_t m_avoidFriendTimer = 0x5630; // 
                constexpr std::ptrdiff_t m_isFriendInTheWay = 0x5648; // 
                constexpr std::ptrdiff_t m_politeTimer = 0x5650; // 
                constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x5668; // 
                constexpr std::ptrdiff_t m_pathLadderEnd = 0x5694; // 
                constexpr std::ptrdiff_t m_mustRunTimer = 0x56E0; // 
                constexpr std::ptrdiff_t m_waitTimer = 0x56F8; // 
                constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x5710; // 
                constexpr std::ptrdiff_t m_playerTravelDistance = 0x5728; // 
                constexpr std::ptrdiff_t m_travelDistancePhase = 0x5828; // 
                constexpr std::ptrdiff_t m_hostageEscortCount = 0x59C0; // 
                constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x59C4; // 
                constexpr std::ptrdiff_t m_desiredTeam = 0x59C8; // 
                constexpr std::ptrdiff_t m_hasJoined = 0x59CC; // 
                constexpr std::ptrdiff_t m_isWaitingForHostage = 0x59CD; // 
                constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x59D0; // 
                constexpr std::ptrdiff_t m_waitForHostageTimer = 0x59E8; // 
                constexpr std::ptrdiff_t m_noisePosition = 0x5A00; // 
                constexpr std::ptrdiff_t m_noiseTravelDistance = 0x5A0C; // 
                constexpr std::ptrdiff_t m_noiseTimestamp = 0x5A10; // 
                constexpr std::ptrdiff_t m_noiseSource = 0x5A18; // 
                constexpr std::ptrdiff_t m_noiseBendTimer = 0x5A30; // 
                constexpr std::ptrdiff_t m_bentNoisePosition = 0x5A48; // 
                constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x5A54; // 
                constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x5A58; // 
                constexpr std::ptrdiff_t m_lookAheadAngle = 0x5A5C; // 
                constexpr std::ptrdiff_t m_forwardAngle = 0x5A60; // 
                constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x5A64; // 
                constexpr std::ptrdiff_t m_lookAtSpot = 0x5A6C; // 
                constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x5A7C; // 
                constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x5A80; // 
                constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x5A84; // 
                constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x5A88; // 
                constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x5A89; // 
                constexpr std::ptrdiff_t m_lookAtDesc = 0x5A90; // 
                constexpr std::ptrdiff_t m_peripheralTimestamp = 0x5A98; // 
                constexpr std::ptrdiff_t m_approachPointCount = 0x5C20; // 
                constexpr std::ptrdiff_t m_approachPointViewPosition = 0x5C24; // 
                constexpr std::ptrdiff_t m_viewSteadyTimer = 0x5C30; // 
                constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x5C48; // 
                constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x5C68; // 
                constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x5C88; // 
                constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x6090; // 
                constexpr std::ptrdiff_t m_lookPitch = 0x6094; // 
                constexpr std::ptrdiff_t m_lookPitchVel = 0x6098; // 
                constexpr std::ptrdiff_t m_lookYaw = 0x609C; // 
                constexpr std::ptrdiff_t m_lookYawVel = 0x60A0; // 
                constexpr std::ptrdiff_t m_targetSpot = 0x60A4; // 
                constexpr std::ptrdiff_t m_targetSpotVelocity = 0x60B0; // 
                constexpr std::ptrdiff_t m_targetSpotPredicted = 0x60BC; // 
                constexpr std::ptrdiff_t m_aimError = 0x60C8; // 
                constexpr std::ptrdiff_t m_aimGoal = 0x60D4; // 
                constexpr std::ptrdiff_t m_targetSpotTime = 0x60E0; // 
                constexpr std::ptrdiff_t m_aimFocus = 0x60E4; // 
                constexpr std::ptrdiff_t m_aimFocusInterval = 0x60E8; // 
                constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x60EC; // 
                constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x60F8; // 
                constexpr std::ptrdiff_t m_enemy = 0x6110; // 
                constexpr std::ptrdiff_t m_isEnemyVisible = 0x6114; // 
                constexpr std::ptrdiff_t m_visibleEnemyParts = 0x6115; // 
                constexpr std::ptrdiff_t m_lastEnemyPosition = 0x6118; // 
                constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x6124; // 
                constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x6128; // 
                constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x612C; // 
                constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x6130; // 
                constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x6134; // 
                constexpr std::ptrdiff_t m_isLastEnemyDead = 0x6138; // 
                constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x613C; // 
                constexpr std::ptrdiff_t m_bomber = 0x6348; // 
                constexpr std::ptrdiff_t m_nearbyFriendCount = 0x634C; // 
                constexpr std::ptrdiff_t m_closestVisibleFriend = 0x6350; // 
                constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x6354; // 
                constexpr std::ptrdiff_t m_attentionInterval = 0x6358; // 
                constexpr std::ptrdiff_t m_attacker = 0x6368; // 
                constexpr std::ptrdiff_t m_attackedTimestamp = 0x636C; // 
                constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x6370; // 
                constexpr std::ptrdiff_t m_lastVictimID = 0x6380; // 
                constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x6384; // 
                constexpr std::ptrdiff_t m_isRapidFiring = 0x6385; // 
                constexpr std::ptrdiff_t m_equipTimer = 0x6388; // 
                constexpr std::ptrdiff_t m_zoomTimer = 0x6398; // 
                constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x63B0; // 
                constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x63B8; // 
                constexpr std::ptrdiff_t m_bIsSleeping = 0x63D0; // 
                constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x63D1; // 
                constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x63D8; // 
                constexpr std::ptrdiff_t m_enemyQueueIndex = 0x6490; // 
                constexpr std::ptrdiff_t m_enemyQueueCount = 0x6491; // 
                constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x6492; // 
                constexpr std::ptrdiff_t m_isStuck = 0x6493; // 
                constexpr std::ptrdiff_t m_stuckTimestamp = 0x6494; // 
                constexpr std::ptrdiff_t m_stuckSpot = 0x6498; // 
                constexpr std::ptrdiff_t m_wiggleTimer = 0x64A8; // 
                constexpr std::ptrdiff_t m_stuckJumpTimer = 0x64C0; // 
                constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x64D8; // 
                constexpr std::ptrdiff_t m_avgVel = 0x64DC; // 
                constexpr std::ptrdiff_t m_avgVelIndex = 0x6504; // 
                constexpr std::ptrdiff_t m_avgVelCount = 0x6508; // 
                constexpr std::ptrdiff_t m_lastOrigin = 0x650C; // 
                constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x651C; // 
                constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x6520; // 
                constexpr std::ptrdiff_t m_radioSubject = 0x6524; // 
                constexpr std::ptrdiff_t m_radioPosition = 0x6528; // 
                constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x6534; // 
                constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x6540; // 
            }
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CPhysMotor {
                constexpr std::ptrdiff_t m_nameAttach = 0x4E0; // 
                constexpr std::ptrdiff_t m_hAttachedObject = 0x4E8; // 
                constexpr std::ptrdiff_t m_spinUp = 0x4EC; // 
                constexpr std::ptrdiff_t m_additionalAcceleration = 0x4F0; // 
                constexpr std::ptrdiff_t m_angularAcceleration = 0x4F4; // 
                constexpr std::ptrdiff_t m_lastTime = 0x4F8; // 
                constexpr std::ptrdiff_t m_motor = 0x510; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace CSoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4E8; // 
                constexpr std::ptrdiff_t m_vPos = 0x4F0; // 
            }
            // Parent: CPlayer_UseServices
            // Field count: 3
            namespace CCSPlayer_UseServices {
                constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x40; // 
                constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x44; // 
                constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x48; // 
            }
            // Parent: CCSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectCharacterPosition {
            }
            // Parent: CItem
            // Field count: 0
            namespace CItemKevlar {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerHurt {
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x920; // 
                constexpr std::ptrdiff_t m_flDamage = 0x924; // 
                constexpr std::ptrdiff_t m_flDamageCap = 0x928; // 
                constexpr std::ptrdiff_t m_flLastDmgTime = 0x92C; // 
                constexpr std::ptrdiff_t m_flForgivenessDelay = 0x930; // 
                constexpr std::ptrdiff_t m_bitsDamageInflict = 0x934; // 
                constexpr std::ptrdiff_t m_damageModel = 0x938; // 
                constexpr std::ptrdiff_t m_bNoDmgForce = 0x93C; // 
                constexpr std::ptrdiff_t m_vDamageForce = 0x940; // 
                constexpr std::ptrdiff_t m_thinkAlways = 0x94C; // 
                constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x950; // 
                constexpr std::ptrdiff_t m_OnHurt = 0x958; // 
                constexpr std::ptrdiff_t m_OnHurtPlayer = 0x980; // 
                constexpr std::ptrdiff_t m_hurtEntities = 0x9A8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CPhysConstraint {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4E8; // 
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4F0; // 
                constexpr std::ptrdiff_t m_hAttach1 = 0x4F8; // 
                constexpr std::ptrdiff_t m_hAttach2 = 0x4FC; // 
                constexpr std::ptrdiff_t m_nameAttachment1 = 0x500; // 
                constexpr std::ptrdiff_t m_nameAttachment2 = 0x508; // 
                constexpr std::ptrdiff_t m_breakSound = 0x510; // 
                constexpr std::ptrdiff_t m_forceLimit = 0x518; // 
                constexpr std::ptrdiff_t m_torqueLimit = 0x51C; // 
                constexpr std::ptrdiff_t m_teleportTick = 0x520; // 
                constexpr std::ptrdiff_t m_minTeleportDistance = 0x524; // 
                constexpr std::ptrdiff_t m_bSnapObjectPositions = 0x528; // 
                constexpr std::ptrdiff_t m_OnBreak = 0x530; // 
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
                constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4E0; // 
                constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4E1; // 
                constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x500; // 
                constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x508; // 
                constexpr std::ptrdiff_t m_nDraftType = 0x50C; // 
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x510; // 
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x514; // 
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x614; // 
                constexpr std::ptrdiff_t m_nAccountIDs = 0x630; // 
                constexpr std::ptrdiff_t m_nMapId0 = 0x730; // 
                constexpr std::ptrdiff_t m_nMapId1 = 0x830; // 
                constexpr std::ptrdiff_t m_nMapId2 = 0x930; // 
                constexpr std::ptrdiff_t m_nMapId3 = 0xA30; // 
                constexpr std::ptrdiff_t m_nMapId4 = 0xB30; // 
                constexpr std::ptrdiff_t m_nMapId5 = 0xC30; // 
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xD30; // 
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xE30; // 
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE34; // 
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE38; // 
                constexpr std::ptrdiff_t m_OnMapVetoed = 0xE40; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnMapPicked = 0xE68; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnSidesPicked = 0xE90; // 
                constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xEB8; // 
                constexpr std::ptrdiff_t m_OnLevelTransition = 0xEE0; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CCSMinimapBoundary {
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CSoundEnt {
                constexpr std::ptrdiff_t m_iFreeSound = 0x4E0; // 
                constexpr std::ptrdiff_t m_iActiveSound = 0x4E4; // 
                constexpr std::ptrdiff_t m_cLastActiveSounds = 0x4E8; // 
                constexpr std::ptrdiff_t m_SoundPool = 0x4EC; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoSpawnGroupLandmark {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // 
                constexpr std::ptrdiff_t m_nButtons = 0x48; // 
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // 
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // 
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // 
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // 
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // 
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // 
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // 
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // 
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // 
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // 
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // 
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // 
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // 
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerSave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x920; // 
                constexpr std::ptrdiff_t m_fDangerousTimer = 0x924; // 
                constexpr std::ptrdiff_t m_minHitPoints = 0x928; // 
            }
            // Parent: CPhysConstraint
            // Field count: 11
            namespace CPhysWheelConstraint {
                constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x558; // 
                constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x55C; // 
                constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x560; // 
                constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x564; // 
                constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x568; // 
                constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x56C; // 
                constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x570; // 
                constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x574; // 
                constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x578; // 
                constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x57C; // 
                constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x580; // 
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysFixed {
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x558; // 
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x55C; // 
                constexpr std::ptrdiff_t m_flAngularFrequency = 0x560; // 
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x564; // 
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x568; // 
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x569; // 
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // 
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // 
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // 
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // 
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // 
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // 
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // 
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // 
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // 
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // 
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // 
                constexpr std::ptrdiff_t m_flUseRange = 0x16C; // 
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // 
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // 
            }
            // Parent: CServerOnlyEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x4E0; // 
                constexpr std::ptrdiff_t m_flRadius = 0x508; // 
                constexpr std::ptrdiff_t m_soundscapeName = 0x510; // 
                constexpr std::ptrdiff_t m_soundEventName = 0x518; // 
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x520; // 
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x524; // 
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x528; // 
                constexpr std::ptrdiff_t m_soundEventHash = 0x52C; // 
                constexpr std::ptrdiff_t m_positionNames = 0x530; // 
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x570; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x574; // 
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
                constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // 
                constexpr std::ptrdiff_t m_iMoneyEarnedForNextRound = 0x44; // 
                constexpr std::ptrdiff_t m_iAccount = 0x48; // 
                constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // 
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // 
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // 
            }
            // Parent: CSprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Field count: 0
            namespace CSoundOpvarSetOBBEntity {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1 {
            }
            // Parent: CBeam
            // Field count: 5
            namespace CEnvLaser {
                constexpr std::ptrdiff_t m_iszLaserTarget = 0x7F0; // 
                constexpr std::ptrdiff_t m_pSprite = 0x7F8; // 
                constexpr std::ptrdiff_t m_iszSpriteName = 0x800; // 
                constexpr std::ptrdiff_t m_firePosition = 0x808; // 
                constexpr std::ptrdiff_t m_flStartFrame = 0x814; // 
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCommentaryViewPosition {
            }
            // Parent: CTonemapController2
            // Field count: 0
            namespace CTonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CPhysConstraint
            // Field count: 4
            namespace CPhysPulley {
                constexpr std::ptrdiff_t m_position2 = 0x558; // 
                constexpr std::ptrdiff_t m_offset = 0x564; // 
                constexpr std::ptrdiff_t m_addLength = 0x57C; // 
                constexpr std::ptrdiff_t m_gearRatio = 0x580; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CGameRulesProxy {
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
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xCE8; // 
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xCEC; // 
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xCF0; // 
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xCF4; // 
                constexpr std::ptrdiff_t m_iClip1 = 0xCF8; // 
                constexpr std::ptrdiff_t m_iClip2 = 0xCFC; // 
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xD00; // 
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xD08; // 
            }
            // Parent: CPlayerControllerComponent
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // 
                constexpr std::ptrdiff_t m_matchStats = 0xB0; // 
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x170; // 
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x174; // 
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x178; // 
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // 
            }
            // Parent: CBaseFlex
            // Field count: 0
            namespace CBaseFlexAlias_funCBaseFlex {
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
                constexpr std::ptrdiff_t m_pool = 0x960; // 
                constexpr std::ptrdiff_t m_id = 0x964; // 
                constexpr std::ptrdiff_t m_x = 0x968; // 
                constexpr std::ptrdiff_t m_y = 0x96C; // 
                constexpr std::ptrdiff_t m_z = 0x970; // 
                constexpr std::ptrdiff_t m_angle = 0x974; // 
                constexpr std::ptrdiff_t m_angleChange = 0x978; // 
                constexpr std::ptrdiff_t m_forward = 0x97C; // 
                constexpr std::ptrdiff_t m_perp = 0x988; // 
                constexpr std::ptrdiff_t m_poolOrigin = 0x994; // 
                constexpr std::ptrdiff_t m_waterLevel = 0x9A0; // 
                constexpr std::ptrdiff_t m_speed = 0x9A4; // 
                constexpr std::ptrdiff_t m_desiredSpeed = 0x9A8; // 
                constexpr std::ptrdiff_t m_calmSpeed = 0x9AC; // 
                constexpr std::ptrdiff_t m_panicSpeed = 0x9B0; // 
                constexpr std::ptrdiff_t m_avoidRange = 0x9B4; // 
                constexpr std::ptrdiff_t m_turnTimer = 0x9B8; // 
                constexpr std::ptrdiff_t m_turnClockwise = 0x9D0; // 
                constexpr std::ptrdiff_t m_goTimer = 0x9D8; // 
                constexpr std::ptrdiff_t m_moveTimer = 0x9F0; // 
                constexpr std::ptrdiff_t m_panicTimer = 0xA08; // 
                constexpr std::ptrdiff_t m_disperseTimer = 0xA20; // 
                constexpr std::ptrdiff_t m_proximityTimer = 0xA38; // 
                constexpr std::ptrdiff_t m_visible = 0xA50; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CEnvFireSource {
                constexpr std::ptrdiff_t m_bEnabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_radius = 0x4E4; // 
                constexpr std::ptrdiff_t m_damage = 0x4E8; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CInfoLadderDismount {
            }
            // Parent: CBaseTrigger
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_strStartTouchEventName (CUtlString)
            // NetworkVarNames: m_strEndTouchEventName (CUtlString)
            // NetworkVarNames: m_strTriggerID (CUtlString)
            namespace CTriggerGameEvent {
                constexpr std::ptrdiff_t m_strStartTouchEventName = 0x920; // 
                constexpr std::ptrdiff_t m_strEndTouchEventName = 0x928; // 
                constexpr std::ptrdiff_t m_strTriggerID = 0x930; // 
            }
            // Parent: CPhysConstraint
            // Field count: 10
            namespace CPhysSlideConstraint {
                constexpr std::ptrdiff_t m_axisEnd = 0x560; // 
                constexpr std::ptrdiff_t m_slideFriction = 0x56C; // 
                constexpr std::ptrdiff_t m_systemLoadScale = 0x570; // 
                constexpr std::ptrdiff_t m_initialOffset = 0x574; // 
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x578; // 
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x579; // 
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x57C; // 
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x580; // 
                constexpr std::ptrdiff_t m_bUseEntityPivot = 0x584; // 
                constexpr std::ptrdiff_t m_soundInfo = 0x588; // 
            }
            // Parent: CBaseEntity
            // Field count: 1
            namespace CDebugHistory {
                constexpr std::ptrdiff_t m_nNpcEvents = 0x3E8520; // 
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CInfoData {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CHostageCarriableProp {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace CLightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x750; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x750; // 
                constexpr std::ptrdiff_t m_OnStarted = 0x778; // 
                constexpr std::ptrdiff_t m_OnReachedStart = 0x7A0; // 
                constexpr std::ptrdiff_t m_localRotationVector = 0x7C8; // 
                constexpr std::ptrdiff_t m_flFanFriction = 0x7D4; // 
                constexpr std::ptrdiff_t m_flAttenuation = 0x7D8; // 
                constexpr std::ptrdiff_t m_flVolume = 0x7DC; // 
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x7E0; // 
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x7E4; // 
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7E8; // 
                constexpr std::ptrdiff_t m_NoiseRunning = 0x7F0; // 
                constexpr std::ptrdiff_t m_bReversed = 0x7F8; // 
                constexpr std::ptrdiff_t m_bAccelDecel = 0x7F9; // 
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x804; // 
                constexpr std::ptrdiff_t m_angStart = 0x810; // 
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x81C; // 
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x820; // 
                constexpr std::ptrdiff_t m_vecClientAngles = 0x82C; // 
            }
            // Parent: CBaseGrenade
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_nBounces (int)
            // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_nExplodeEffectTickBegin (int)
            // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0xA98; // 
                constexpr std::ptrdiff_t m_vInitialVelocity = 0xAA4; // 
                constexpr std::ptrdiff_t m_nBounces = 0xAB0; // 
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xAB8; // 
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xAC0; // 
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xAC4; // 
                constexpr std::ptrdiff_t m_flSpawnTime = 0xAD0; // 
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xAD4; // 
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0xAD5; // 
                constexpr std::ptrdiff_t m_nItemIndex = 0xAD6; // 
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xAD8; // 
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xAE4; // 
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xAE8; // 
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xAF4; // 
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xB00; // 
                constexpr std::ptrdiff_t m_bHasEverHitPlayer = 0xB04; // 
                constexpr std::ptrdiff_t m_bClearFromPlayers = 0xB05; // 
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0x758; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncTrainControls {
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
                constexpr std::ptrdiff_t m_flFadeInStart = 0x750; // 
                constexpr std::ptrdiff_t m_flFadeInLength = 0x754; // 
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x758; // 
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x75C; // 
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x760; // 
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x764; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x768; // 
                constexpr std::ptrdiff_t m_nDissolveType = 0x76C; // 
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x770; // 
                constexpr std::ptrdiff_t m_nMagnitude = 0x77C; // 
            }
            // Parent: CPointEntity
            // Field count: 12
            namespace CPointAngleSensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_nLookAtName = 0x4E8; // 
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4F0; // 
                constexpr std::ptrdiff_t m_hLookAtEntity = 0x4F4; // 
                constexpr std::ptrdiff_t m_flDuration = 0x4F8; // 
                constexpr std::ptrdiff_t m_flDotTolerance = 0x4FC; // 
                constexpr std::ptrdiff_t m_flFacingTime = 0x500; // 
                constexpr std::ptrdiff_t m_bFired = 0x504; // 
                constexpr std::ptrdiff_t m_OnFacingLookat = 0x508; // 
                constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x530; // 
                constexpr std::ptrdiff_t m_TargetDir = 0x558; // 
                constexpr std::ptrdiff_t m_FacingPercentage = 0x580; // CEntityOutputTemplate<float32>
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace CSoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x598; // 
                constexpr std::ptrdiff_t m_vMaxs = 0x5A4; // 
            }
            // Parent: CBtNodeDecorator
            // Field count: 1
            namespace CBtNodeCondition {
                constexpr std::ptrdiff_t m_bNegated = 0x58; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGapTypeQueriesForScopeSingleton
            namespace CSharedGapTypeQueryRegistration {
            }
            // Parent: CBaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            // NetworkVarNames: m_flHeightFogDepth (float)
            // NetworkVarNames: m_fHeightFogEdgeWidth (float)
            // NetworkVarNames: m_fIndirectLightStrength (float)
            // NetworkVarNames: m_fSunLightStrength (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_bOverrideIndirectLightStrength (bool)
            // NetworkVarNames: m_bOverrideSunLightStrength (bool)
            // NetworkVarNames: m_bOverrideNoiseStrength (bool)
            // NetworkVarNames: m_bAllowLPVIndirect (bool)
            namespace CEnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4E0; // 
                constexpr std::ptrdiff_t m_vBoxMins = 0x4E4; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4F0; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4FC; // 
                constexpr std::ptrdiff_t m_flStrength = 0x500; // 
                constexpr std::ptrdiff_t m_nFalloffShape = 0x504; // 
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x508; // 
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x50C; // 
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x510; // 
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x514; // 
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x518; // 
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x51C; // 
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x520; // 
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x521; // 
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x522; // 
                constexpr std::ptrdiff_t m_bAllowLPVIndirect = 0x523; // 
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
            // NetworkVarNames: m_vecEndPos (Vector)
            namespace CBeam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x750; // 
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x754; // 
                constexpr std::ptrdiff_t m_flFireTime = 0x758; // 
                constexpr std::ptrdiff_t m_flDamage = 0x75C; // 
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x760; // 
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x768; // 
                constexpr std::ptrdiff_t m_nHaloIndex = 0x770; // 
                constexpr std::ptrdiff_t m_nBeamType = 0x778; // 
                constexpr std::ptrdiff_t m_nBeamFlags = 0x77C; // 
                constexpr std::ptrdiff_t m_hAttachEntity = 0x780; // 
                constexpr std::ptrdiff_t m_nAttachIndex = 0x7A8; // 
                constexpr std::ptrdiff_t m_fWidth = 0x7B4; // 
                constexpr std::ptrdiff_t m_fEndWidth = 0x7B8; // 
                constexpr std::ptrdiff_t m_fFadeLength = 0x7BC; // 
                constexpr std::ptrdiff_t m_fHaloScale = 0x7C0; // 
                constexpr std::ptrdiff_t m_fAmplitude = 0x7C4; // 
                constexpr std::ptrdiff_t m_fStartFrame = 0x7C8; // 
                constexpr std::ptrdiff_t m_fSpeed = 0x7CC; // 
                constexpr std::ptrdiff_t m_flFrame = 0x7D0; // 
                constexpr std::ptrdiff_t m_nClipStyle = 0x7D4; // 
                constexpr std::ptrdiff_t m_bTurnedOff = 0x7D8; // 
                constexpr std::ptrdiff_t m_vecEndPos = 0x7DC; // 
                constexpr std::ptrdiff_t m_hEndEntity = 0x7E8; // 
                constexpr std::ptrdiff_t m_nDissolveType = 0x7EC; // 
            }
            // Parent: CBaseEntity
            // Field count: 26
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
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
            // NetworkVarNames: m_flDecalHealBloodRate (float)
            // NetworkVarNames: m_flDecalHealHeightRate (float)
            // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_vecViewOffset (CNetworkViewOffsetVector)
            namespace CBaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x4E0; // 
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x4E8; // 
                constexpr std::ptrdiff_t m_flDissolveStartTime = 0x510; // 
                constexpr std::ptrdiff_t m_OnIgnite = 0x518; // 
                constexpr std::ptrdiff_t m_nRenderMode = 0x540; // 
                constexpr std::ptrdiff_t m_nRenderFX = 0x541; // 
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0x542; // 
                constexpr std::ptrdiff_t m_clrRender = 0x560; // 
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x568; // 
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x5B8; // 
                constexpr std::ptrdiff_t m_bNoInterpolate = 0x5B9; // 
                constexpr std::ptrdiff_t m_Collision = 0x5C0; // 
                constexpr std::ptrdiff_t m_Glow = 0x670; // 
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x6C8; // 
                constexpr std::ptrdiff_t m_fadeMinDist = 0x6CC; // 
                constexpr std::ptrdiff_t m_fadeMaxDist = 0x6D0; // 
                constexpr std::ptrdiff_t m_flFadeScale = 0x6D4; // 
                constexpr std::ptrdiff_t m_flShadowStrength = 0x6D8; // 
                constexpr std::ptrdiff_t m_nObjectCulling = 0x6DC; // 
                constexpr std::ptrdiff_t m_nAddDecal = 0x6E0; // 
                constexpr std::ptrdiff_t m_vDecalPosition = 0x6E4; // 
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x6F0; // 
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x6FC; // 
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x700; // 
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x708; // 
                constexpr std::ptrdiff_t m_vecViewOffset = 0x720; // 
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace CPhysMagnet {
                constexpr std::ptrdiff_t m_OnMagnetAttach = 0x960; // 
                constexpr std::ptrdiff_t m_OnMagnetDetach = 0x988; // 
                constexpr std::ptrdiff_t m_massScale = 0x9B0; // 
                constexpr std::ptrdiff_t m_forceLimit = 0x9B4; // 
                constexpr std::ptrdiff_t m_torqueLimit = 0x9B8; // 
                constexpr std::ptrdiff_t m_MagnettedEntities = 0x9C0; // CUtlVector<magnetted_objects_t>
                constexpr std::ptrdiff_t m_bActive = 0x9D8; // 
                constexpr std::ptrdiff_t m_bHasHitSomething = 0x9D9; // 
                constexpr std::ptrdiff_t m_flTotalMass = 0x9DC; // 
                constexpr std::ptrdiff_t m_flRadius = 0x9E0; // 
                constexpr std::ptrdiff_t m_flNextSuckTime = 0x9E4; // 
                constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0x9E8; // 
            }
            // Parent: CSceneEntity
            // Field count: 0
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseModelEntity
            // Field count: 2
            namespace CFuncNavBlocker {
                constexpr std::ptrdiff_t m_bDisabled = 0x750; // 
                constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x754; // 
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CRagdollMagnet {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_radius = 0x4E4; // 
                constexpr std::ptrdiff_t m_force = 0x4E8; // 
                constexpr std::ptrdiff_t m_axis = 0x4EC; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 6
            namespace CFuncBrush {
                constexpr std::ptrdiff_t m_iSolidity = 0x750; // 
                constexpr std::ptrdiff_t m_iDisabled = 0x754; // 
                constexpr std::ptrdiff_t m_bSolidBsp = 0x758; // 
                constexpr std::ptrdiff_t m_iszExcludedClass = 0x760; // 
                constexpr std::ptrdiff_t m_bInvertExclusion = 0x768; // 
                constexpr std::ptrdiff_t m_bScriptedMovement = 0x769; // 
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CPointProximitySensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4E4; // 
                constexpr std::ptrdiff_t m_Distance = 0x4E8; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x538; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CMelee {
            }
            // Parent: CMultiplayRules
            // Field count: 0
            namespace CTeamplayRules {
            }
            // Parent: CBaseFilter
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // 
                constexpr std::ptrdiff_t m_timestamp = 0xC; // 
                constexpr std::ptrdiff_t m_timescale = 0x10; // 
            }
            // Parent: CBreakable
            // Field count: 14
            namespace CPhysBox {
                constexpr std::ptrdiff_t m_damageType = 0x828; // 
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0x82C; // 
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x830; // 
                constexpr std::ptrdiff_t m_angPreferredCarryAngles = 0x834; // 
                constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x840; // 
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0x841; // 
                constexpr std::ptrdiff_t m_iExploitableByPlayer = 0x844; // 
                constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x848; // 
                constexpr std::ptrdiff_t m_OnDamaged = 0x850; // 
                constexpr std::ptrdiff_t m_OnAwakened = 0x878; // 
                constexpr std::ptrdiff_t m_OnMotionEnabled = 0x8A0; // 
                constexpr std::ptrdiff_t m_OnPlayerUse = 0x8C8; // 
                constexpr std::ptrdiff_t m_OnStartTouch = 0x8F0; // 
                constexpr std::ptrdiff_t m_hCarryingPlayer = 0x918; // 
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
            // MNetworkExcludeByName
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
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x9F8; // 
                constexpr std::ptrdiff_t m_OnExplode = 0xA20; // 
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0xA48; // 
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xA49; // 
                constexpr std::ptrdiff_t m_bIsLive = 0xA4A; // 
                constexpr std::ptrdiff_t m_DmgRadius = 0xA4C; // 
                constexpr std::ptrdiff_t m_flDetonateTime = 0xA50; // 
                constexpr std::ptrdiff_t m_flWarnAITime = 0xA54; // 
                constexpr std::ptrdiff_t m_flDamage = 0xA58; // 
                constexpr std::ptrdiff_t m_iszBounceSound = 0xA60; // 
                constexpr std::ptrdiff_t m_ExplosionSound = 0xA68; // 
                constexpr std::ptrdiff_t m_hThrower = 0xA74; // 
                constexpr std::ptrdiff_t m_flNextAttack = 0xA8C; // 
                constexpr std::ptrdiff_t m_hOriginalThrower = 0xA90; // 
            }
            // Parent: CLogicalEntity
            // Field count: 13
            namespace CTimerEntity {
                constexpr std::ptrdiff_t m_OnTimer = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnTimerHigh = 0x508; // 
                constexpr std::ptrdiff_t m_OnTimerLow = 0x530; // 
                constexpr std::ptrdiff_t m_iDisabled = 0x558; // 
                constexpr std::ptrdiff_t m_flInitialDelay = 0x55C; // 
                constexpr std::ptrdiff_t m_flRefireTime = 0x560; // 
                constexpr std::ptrdiff_t m_bUpDownState = 0x564; // 
                constexpr std::ptrdiff_t m_iUseRandomTime = 0x568; // 
                constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x56C; // 
                constexpr std::ptrdiff_t m_flLowerRandomBound = 0x570; // 
                constexpr std::ptrdiff_t m_flUpperRandomBound = 0x574; // 
                constexpr std::ptrdiff_t m_flRemainingTime = 0x578; // 
                constexpr std::ptrdiff_t m_bPaused = 0x57C; // 
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 0
            namespace CHEGrenadeProjectile {
            }
            // Parent: CBaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace CEnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4E0; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // 
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // 
            }
            // Parent: CBasePlayerWeapon
            // Field count: 64
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_flFireSequenceStartTime (float)
            // NetworkVarNames: m_nFireSequenceStartTimeChange (int)
            // NetworkVarNames: m_ePlayerFireEvent (PlayerAnimEvent_t)
            // NetworkVarNames: m_ePlayerFireEventAttackType (WeaponAttackType_t)
            // NetworkVarNames: m_iState (CSWeaponState_t)
            // NetworkVarNames: m_nViewModelIndex (uint32)
            // NetworkVarNames: m_flTimeWeaponIdle (GameTime_t)
            // NetworkVarNames: m_weaponMode (CSWeaponMode)
            // NetworkVarNames: m_fAccuracyPenalty (float)
            // NetworkVarNames: m_iRecoilIndex (int)
            // NetworkVarNames: m_flRecoilIndex (float)
            // NetworkVarNames: m_bBurstMode (bool)
            // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
            // NetworkVarNames: m_flPostponeFireReadyFrac (float)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_bReloadVisuallyComplete (bool)
            // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
            // NetworkVarNames: m_bIsHauledBack (bool)
            // NetworkVarNames: m_bSilencerOn (bool)
            // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
            // NetworkVarNames: m_iOriginalTeamNumber (int)
            // NetworkVarNames: m_iMostRecentTeamNumber (int)
            // NetworkVarNames: m_bDroppedNearBuyZone (bool)
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_iNumEmptyAttacks (int)
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xD58; // 
                constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xD60; // 
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xD64; // 
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xD68; // 
                constexpr std::ptrdiff_t m_ePlayerFireEvent = 0xD6C; // 
                constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0xD70; // 
                constexpr std::ptrdiff_t m_seqIdle = 0xD74; // 
                constexpr std::ptrdiff_t m_seqFirePrimary = 0xD78; // 
                constexpr std::ptrdiff_t m_seqFireSecondary = 0xD7C; // 
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0xD80; // 
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0xD98; // 
                constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0xD9C; // 
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0xDA0; // 
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xDC8; // 
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xDC9; // 
                constexpr std::ptrdiff_t m_iState = 0xDCC; // 
                constexpr std::ptrdiff_t m_flLastTimeInAir = 0xDD0; // 
                constexpr std::ptrdiff_t m_flLastDeployTime = 0xDD4; // 
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xDD8; // 
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xDDC; // 
                constexpr std::ptrdiff_t m_bReloadsWithClips = 0xDE0; // 
                constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0xE00; // 
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xE04; // 
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xE08; // 
                constexpr std::ptrdiff_t m_weaponMode = 0xE30; // 
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xE34; // 
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xE38; // 
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xE44; // 
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xE48; // 
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xE4C; // 
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xE50; // 
                constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0xE54; // 
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xE58; // 
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xE5C; // 
                constexpr std::ptrdiff_t m_bBurstMode = 0xE60; // 
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xE64; // 
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xE68; // 
                constexpr std::ptrdiff_t m_bInReload = 0xE6C; // 
                constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0xE6D; // 
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xE70; // 
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xE74; // 
                constexpr std::ptrdiff_t m_bSilencerOn = 0xE75; // 
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xE78; // 
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xE7C; // 
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xE80; // 
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xE84; // 
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xE88; // 
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xEA0; // 
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xEA1; // 
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xEA4; // 
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xEA8; // 
                constexpr std::ptrdiff_t m_hPrevOwner = 0xEB0; // 
                constexpr std::ptrdiff_t m_nDropTick = 0xEB4; // 
                constexpr std::ptrdiff_t m_donated = 0xED4; // 
                constexpr std::ptrdiff_t m_fLastShotTime = 0xED8; // 
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xEDC; // 
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xEDD; // 
                constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0xEDE; // 
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xEE0; // 
                constexpr std::ptrdiff_t m_IronSightController = 0xEE8; // 
                constexpr std::ptrdiff_t m_iIronSightMode = 0xF00; // 
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xF04; // 
                constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0xF08; // 
                constexpr std::ptrdiff_t m_flWatTickOffset = 0xF0C; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CHandleDummy {
            }
            // Parent: CPhysConstraint
            // Field count: 9
            namespace CRagdollConstraint {
                constexpr std::ptrdiff_t m_xmin = 0x558; // 
                constexpr std::ptrdiff_t m_xmax = 0x55C; // 
                constexpr std::ptrdiff_t m_ymin = 0x560; // 
                constexpr std::ptrdiff_t m_ymax = 0x564; // 
                constexpr std::ptrdiff_t m_zmin = 0x568; // 
                constexpr std::ptrdiff_t m_zmax = 0x56C; // 
                constexpr std::ptrdiff_t m_xfriction = 0x570; // 
                constexpr std::ptrdiff_t m_yfriction = 0x574; // 
                constexpr std::ptrdiff_t m_zfriction = 0x578; // 
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CPhysExplosion {
                constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4E0; // 
                constexpr std::ptrdiff_t m_flMagnitude = 0x4E4; // 
                constexpr std::ptrdiff_t m_flDamage = 0x4E8; // 
                constexpr std::ptrdiff_t m_radius = 0x4EC; // 
                constexpr std::ptrdiff_t m_targetEntityName = 0x4F0; // 
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4F8; // 
                constexpr std::ptrdiff_t m_flPushScale = 0x4FC; // 
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x500; // 
                constexpr std::ptrdiff_t m_OnPushedPlayer = 0x508; // 
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CPointPush {
                constexpr std::ptrdiff_t m_bEnabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_flMagnitude = 0x4E4; // 
                constexpr std::ptrdiff_t m_flRadius = 0x4E8; // 
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4EC; // 
                constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszFilterName = 0x4F8; // 
                constexpr std::ptrdiff_t m_hFilter = 0x500; // 
            }
            // Parent: CPointEntity
            // Field count: 3
            namespace CCredits {
                constexpr std::ptrdiff_t m_OnCreditsDone = 0x4E0; // 
                constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x508; // 
                constexpr std::ptrdiff_t m_flLogoLength = 0x50C; // 
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
                constexpr std::ptrdiff_t m_bHostageAlive = 0x4E0; // 
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4EC; // 
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4F8; // 
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x528; // 
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x534; // 
                constexpr std::ptrdiff_t m_hostageRescueX = 0x540; // 
                constexpr std::ptrdiff_t m_hostageRescueY = 0x550; // 
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x560; // 
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x570; // 
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x571; // 
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
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // 
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // 
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // 
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // 
                constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA0; // 
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // 
                constexpr std::ptrdiff_t iAttribHook = 0x8; // 
                constexpr std::ptrdiff_t flOut = 0x10; // 
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
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x598; // 
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x59C; // 
                constexpr std::ptrdiff_t m_bSurrendered = 0x5A0; // 
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x5A1; // 
                constexpr std::ptrdiff_t m_numMapVictories = 0x7A4; // 
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x7A8; // 
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x7AC; // 
                constexpr std::ptrdiff_t m_scoreOvertime = 0x7B0; // 
                constexpr std::ptrdiff_t m_szClanTeamname = 0x7B4; // 
                constexpr std::ptrdiff_t m_iClanID = 0x838; // 
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x83C; // 
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x844; // 
                constexpr std::ptrdiff_t m_flNextResourceTime = 0x84C; // 
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x850; // 
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // 
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // 
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // 
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // 
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // 
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // 
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // 
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // 
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // 
            }
            // Parent: CTriggerMultiple
            // Field count: 4
            namespace CTriggerImpact {
                constexpr std::ptrdiff_t m_flMagnitude = 0x948; // 
                constexpr std::ptrdiff_t m_flNoise = 0x94C; // 
                constexpr std::ptrdiff_t m_flViewkick = 0x950; // 
                constexpr std::ptrdiff_t m_pOutputForce = 0x958; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 14
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_clrOverlay (Color)
            // NetworkVarNames: m_iszEffectName (string_t)
            // NetworkVarNames: m_iszSSEffectName (string_t)
            // NetworkVarNames: m_bOn (bool)
            // NetworkVarNames: m_bmaxColor (bool)
            // NetworkVarNames: m_flSize (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_flHazeScale (float32)
            // NetworkVarNames: m_flAlphaHaze (float32)
            // NetworkVarNames: m_flAlphaHdr (float32)
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_flFarZScale (float32)
            namespace CSun {
                constexpr std::ptrdiff_t m_vDirection = 0x750; // 
                constexpr std::ptrdiff_t m_clrOverlay = 0x75C; // 
                constexpr std::ptrdiff_t m_iszEffectName = 0x760; // 
                constexpr std::ptrdiff_t m_iszSSEffectName = 0x768; // 
                constexpr std::ptrdiff_t m_bOn = 0x770; // 
                constexpr std::ptrdiff_t m_bmaxColor = 0x771; // 
                constexpr std::ptrdiff_t m_flSize = 0x774; // 
                constexpr std::ptrdiff_t m_flRotation = 0x778; // 
                constexpr std::ptrdiff_t m_flHazeScale = 0x77C; // 
                constexpr std::ptrdiff_t m_flAlphaHaze = 0x780; // 
                constexpr std::ptrdiff_t m_flAlphaHdr = 0x784; // 
                constexpr std::ptrdiff_t m_flAlphaScale = 0x788; // 
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x78C; // 
                constexpr std::ptrdiff_t m_flFarZScale = 0x790; // 
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerDetectBulletFire {
                constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x920; // 
                constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x928; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CWorld {
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointGiveAmmo {
                constexpr std::ptrdiff_t m_pActivator = 0x4E0; // 
            }
            // Parent: CFuncMoveLinear
            // Field count: 0
            namespace CFuncMoveLinearAlias_momentary_door {
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
                constexpr std::ptrdiff_t m_bStartActive = 0x4E8; // 
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4EC; // 
                constexpr std::ptrdiff_t m_iszEffectName = 0x4F0; // 
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x4F8; // 
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x510; // 
                constexpr std::ptrdiff_t m_flSlack = 0x514; // 
                constexpr std::ptrdiff_t m_flRadius = 0x518; // 
                constexpr std::ptrdiff_t m_ColorTint = 0x51C; // 
                constexpr std::ptrdiff_t m_nEffectState = 0x520; // 
                constexpr std::ptrdiff_t m_iEffectIndex = 0x528; // 
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x530; // 
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x548; // 
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x560; // 
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x578; // 
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x590; // 
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x5A8; // 
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
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4E0; // 
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4E4; // 
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4E8; // 
                constexpr std::ptrdiff_t m_flFadeTime = 0x4EC; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4F0; // 
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4F1; // 
            }
            // Parent: CServerOnlyEntity
            // Field count: 0
            namespace CServerOnlyPointEntity {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CAK47 {
            }
            // Parent: CBaseTrigger
            // Field count: 4
            namespace CTriggerTeleport {
                constexpr std::ptrdiff_t m_iLandmark = 0x920; // 
                constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x928; // 
                constexpr std::ptrdiff_t m_bMirrorPlayer = 0x929; // 
                constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x92A; // 
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamIntroTerroristPosition {
            }
            // Parent: CBaseModelEntity
            // Field count: 38
            namespace CFuncMover {
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x750; // 
                constexpr std::ptrdiff_t m_iszPathName = 0x758; // 
                constexpr std::ptrdiff_t m_hPathMover = 0x760; // 
                constexpr std::ptrdiff_t m_iszPathNodeStart = 0x768; // 
                constexpr std::ptrdiff_t m_eMoveType = 0x770; // 
                constexpr std::ptrdiff_t m_bIsReversing = 0x774; // 
                constexpr std::ptrdiff_t m_vTarget = 0x778; // 
                constexpr std::ptrdiff_t m_flStartSpeed = 0x784; // 
                constexpr std::ptrdiff_t m_flPathLocation = 0x788; // 
                constexpr std::ptrdiff_t m_flT = 0x78C; // 
                constexpr std::ptrdiff_t m_nCurrentNodeIndex = 0x790; // 
                constexpr std::ptrdiff_t m_nPreviousNodeIndex = 0x794; // 
                constexpr std::ptrdiff_t m_bFixedOrientation = 0x798; // 
                constexpr std::ptrdiff_t m_bFixedPitch = 0x799; // 
                constexpr std::ptrdiff_t m_eSolidType = 0x79A; // 
                constexpr std::ptrdiff_t m_bIsMoving = 0x79B; // 
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x79C; // 
                constexpr std::ptrdiff_t m_flDistanceToReachMaxSpeed = 0x7A0; // 
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x7A4; // 
                constexpr std::ptrdiff_t m_flDistanceToReachZeroSpeed = 0x7A8; // 
                constexpr std::ptrdiff_t m_flTimeMovementStart = 0x7AC; // 
                constexpr std::ptrdiff_t m_flTimeMovementStop = 0x7B0; // 
                constexpr std::ptrdiff_t m_hStopAtNode = 0x7B4; // 
                constexpr std::ptrdiff_t m_flPathLocationToBeginStop = 0x7B8; // 
                constexpr std::ptrdiff_t m_iszStartForwardSound = 0x7C0; // 
                constexpr std::ptrdiff_t m_iszLoopForwardSound = 0x7C8; // 
                constexpr std::ptrdiff_t m_iszStopForwardSound = 0x7D0; // 
                constexpr std::ptrdiff_t m_iszStartReverseSound = 0x7D8; // 
                constexpr std::ptrdiff_t m_iszLoopReverseSound = 0x7E0; // 
                constexpr std::ptrdiff_t m_iszStopReverseSound = 0x7E8; // 
                constexpr std::ptrdiff_t m_iszArriveAtDestinationSound = 0x7F0; // 
                constexpr std::ptrdiff_t m_OnMovementEnd = 0x800; // 
                constexpr std::ptrdiff_t m_bStartAtEnd = 0x828; // 
                constexpr std::ptrdiff_t m_eOrientationUpdate = 0x82C; // 
                constexpr std::ptrdiff_t m_flTimeStartOrientationChange = 0x830; // 
                constexpr std::ptrdiff_t m_flTimeToBlendToNewOrientation = 0x834; // 
                constexpr std::ptrdiff_t m_flDurationBlendToNewOrientationRan = 0x838; // 
                constexpr std::ptrdiff_t m_qOriginalOrientation = 0x840; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // 
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // 
                constexpr std::ptrdiff_t localBits = 0x6C; // 
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // 
                constexpr std::ptrdiff_t soundEventHash = 0x74; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CHEGrenade {
            }
            // Parent: CRulePointEntity
            // Field count: 0
            namespace CGameEnd {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerCallback {
            }
            // Parent: CBaseModelEntity
            // Field count: 3
            namespace CBubbling {
                constexpr std::ptrdiff_t m_density = 0x750; // 
                constexpr std::ptrdiff_t m_frequency = 0x754; // 
                constexpr std::ptrdiff_t m_state = 0x758; // 
            }
            // Parent: CTeamplayRules
            // Field count: 189
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
            // NetworkVarNames: m_bServerPaused (bool)
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
            // NetworkVarNames: m_nServerQuestID (int)
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
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xC8; // 
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC9; // 
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xCC; // 
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xD0; // 
                constexpr std::ptrdiff_t m_bServerPaused = 0xD4; // 
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xD5; // 
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xD6; // 
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xD8; // 
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xDC; // 
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE0; // 
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE4; // 
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xE8; // 
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xE9; // 
                constexpr std::ptrdiff_t m_iRoundTime = 0xEC; // 
                constexpr std::ptrdiff_t m_fMatchStartTime = 0xF0; // 
                constexpr std::ptrdiff_t m_fRoundStartTime = 0xF4; // 
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0xF8; // 
                constexpr std::ptrdiff_t m_bGameRestart = 0xFC; // 
                constexpr std::ptrdiff_t m_flGameStartTime = 0x100; // 
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x104; // 
                constexpr std::ptrdiff_t m_gamePhase = 0x108; // 
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x10C; // 
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x110; // 
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x114; // 
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x118; // 
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x11C; // 
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x11D; // 
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x11E; // 
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x11F; // 
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x120; // 
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x124; // 
                constexpr std::ptrdiff_t m_bIsValveDS = 0x128; // 
                constexpr std::ptrdiff_t m_bLogoMap = 0x129; // 
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12A; // 
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x12C; // 
                constexpr std::ptrdiff_t m_MatchDevice = 0x130; // 
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x134; // 
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x138; // 
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x13C; // 
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x33C; // 
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x53C; // 
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x73C; // 
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x93C; // 
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x940; // 
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x944; // 
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x948; // 
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x949; // 
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x94A; // 
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x94C; // 
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA14; // 
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA24; // 
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA28; // 
                constexpr std::ptrdiff_t m_bBombDropped = 0xA2C; // 
                constexpr std::ptrdiff_t m_bBombPlanted = 0xA2D; // 
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA30; // 
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA34; // 
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA38; // 
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA39; // 
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA3C; // 
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAB4; // 
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB2C; // 
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBA4; // 
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC24; // 
                constexpr std::ptrdiff_t m_nServerQuestID = 0xCA4; // 
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCA8; // 
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCB4; // 
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xCC0; // 
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xCE0; // 
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xCE4; // 
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD0C; // 
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD34; // 
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD38; // 
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD3C; // 
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xD58; // 
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xD5C; // 
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xD60; // 
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xD64; // 
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xD68; // 
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xD6C; // 
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xD70; // 
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xD71; // 
                constexpr std::ptrdiff_t m_iFreezeTime = 0xD74; // 
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xD78; // 
                constexpr std::ptrdiff_t m_iNumCT = 0xD7C; // 
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xD80; // 
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xD84; // 
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xD88; // 
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDA0; // 
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDA4; // 
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDA5; // 
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDA6; // 
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDA7; // 
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDA8; // 
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDB0; // 
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xDCC; // 
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xDD0; // 
                constexpr std::ptrdiff_t m_fAvgPlayerRank = 0xDD4; // 
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xDD8; // 
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xDE0; // 
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xDE4; // 
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xDE8; // 
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xDEC; // 
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xDF8; // 
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xDF9; // 
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE30; // 
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE34; // 
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xE50; // 
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xE54; // 
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xE58; // 
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xE5C; // 
                constexpr std::ptrdiff_t m_iAccountCT = 0xE60; // 
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xE64; // 
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xE68; // 
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xE6C; // 
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xE70; // 
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xE74; // 
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xE78; // 
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xE7C; // 
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xE80; // 
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xE88; // 
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xE8C; // 
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xE90; // 
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xE94; // 
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xE95; // 
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xE96; // 
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xE97; // 
                constexpr std::ptrdiff_t m_firstKillTime = 0xE9C; // 
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEA4; // 
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xEC0; // 
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xEC1; // 
                constexpr std::ptrdiff_t m_bVoteCalled = 0xED0; // 
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xED1; // 
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xED4; // 
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xED8; // 
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xEDC; // 
                constexpr std::ptrdiff_t m_bTargetBombed = 0xEE0; // 
                constexpr std::ptrdiff_t m_bBombDefused = 0xEE1; // 
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xEE2; // 
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF30; // 
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF40; // 
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF58; // 
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF70; // 
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF74; // 
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xF78; // 
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xF7C; // 
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xF80; // 
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xF88; // 
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFA0; // 
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFB8; // 
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFBC; // 
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1228; // 
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1229; // 
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x122C; // 
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1230; // 
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x1234; // 
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1238; // 
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x123C; // 
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x14B8; // 
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14BC; // 
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14BD; // 
                constexpr std::ptrdiff_t m_pGameModeRules = 0x14D8; // 
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x14E0; // 
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1570; // 
                constexpr std::ptrdiff_t m_RetakeRules = 0x1578; // 
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1710; // 
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1770; // 
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x1798; // 
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x179C; // 
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17A0; // 
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17A4; // 
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x17A8; // 
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x17AC; // 
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x17B0; // 
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x17B4; // 
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x17B8; // 
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x17BC; // 
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x17C0; // 
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x17C8; // 
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x17CC; // 
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x17D0; // 
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x17D4; // 
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x17D8; // 
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x17E0; // 
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x17E4; // 
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x17E8; // 
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x17EC; // 
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x17F0; // 
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x17F4; // 
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5800; // 
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropOverride {
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CAI_ChangeHintGroup {
                constexpr std::ptrdiff_t m_iSearchType = 0x4E0; // 
                constexpr std::ptrdiff_t m_strSearchName = 0x4E8; // 
                constexpr std::ptrdiff_t m_strNewHintGroup = 0x4F0; // 
                constexpr std::ptrdiff_t m_flRadius = 0x4F8; // 
            }
            // Parent: CBaseTrigger
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_MaxWeight (float32)
            // NetworkVarNames: m_FadeDuration (float32)
            // NetworkVarNames: m_Weight (float32)
            // NetworkVarNames: m_lookupFilename (char)
            namespace CColorCorrectionVolume {
                constexpr std::ptrdiff_t m_bEnabled = 0x920; // 
                constexpr std::ptrdiff_t m_MaxWeight = 0x924; // 
                constexpr std::ptrdiff_t m_FadeDuration = 0x928; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x92C; // 
                constexpr std::ptrdiff_t m_Weight = 0x930; // 
                constexpr std::ptrdiff_t m_lookupFilename = 0x934; // 
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xB34; // 
                constexpr std::ptrdiff_t m_LastEnterTime = 0xB38; // 
                constexpr std::ptrdiff_t m_LastExitWeight = 0xB3C; // 
                constexpr std::ptrdiff_t m_LastExitTime = 0xB40; // 
            }
            // Parent: CBaseFilter
            // Field count: 5
            namespace CFilterEnemy {
                constexpr std::ptrdiff_t m_iszEnemyName = 0x538; // 
                constexpr std::ptrdiff_t m_flRadius = 0x540; // 
                constexpr std::ptrdiff_t m_flOuterRadius = 0x544; // 
                constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x548; // 
                constexpr std::ptrdiff_t m_iszPlayerName = 0x550; // 
            }
            // Parent: CModelPointEntity
            // Field count: 0
            namespace CShower {
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
                constexpr std::ptrdiff_t m_flEndDistance = 0x4E0; // 
                constexpr std::ptrdiff_t m_flStartDistance = 0x4E4; // 
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4E8; // 
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4EC; // 
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4F0; // 
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4F4; // 
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x4F8; // 
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4FC; // 
                constexpr std::ptrdiff_t m_flLODBias = 0x500; // 
                constexpr std::ptrdiff_t m_bActive = 0x504; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x505; // 
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x508; // 
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x50C; // 
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x510; // 
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x518; // 
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x520; // 
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x528; // 
                constexpr std::ptrdiff_t m_bFirstTime = 0x529; // 
            }
            // Parent: CBaseButton
            // Field count: 0
            namespace CPhysicalButton {
            }
            // Parent: CModelPointEntity
            // Field count: 16
            namespace CEnvExplosion {
                constexpr std::ptrdiff_t m_iMagnitude = 0x750; // 
                constexpr std::ptrdiff_t m_flPlayerDamage = 0x754; // 
                constexpr std::ptrdiff_t m_iRadiusOverride = 0x758; // 
                constexpr std::ptrdiff_t m_flInnerRadius = 0x75C; // 
                constexpr std::ptrdiff_t m_spriteScale = 0x760; // 
                constexpr std::ptrdiff_t m_flDamageForce = 0x764; // 
                constexpr std::ptrdiff_t m_hInflictor = 0x768; // 
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x76C; // 
                constexpr std::ptrdiff_t m_bCreateDebris = 0x770; // 
                constexpr std::ptrdiff_t m_iszExplosionType = 0x778; // 
                constexpr std::ptrdiff_t m_iszCustomEffectName = 0x780; // 
                constexpr std::ptrdiff_t m_iszCustomSoundName = 0x788; // 
                constexpr std::ptrdiff_t m_iClassIgnore = 0x790; // 
                constexpr std::ptrdiff_t m_iClassIgnore2 = 0x794; // 
                constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x798; // 
                constexpr std::ptrdiff_t m_hEntityIgnore = 0x7A0; // 
            }
            // Parent: CSoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace CSoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x598; // 
                constexpr std::ptrdiff_t m_vMaxs = 0x5A4; // 
            }
            // Parent: CTriggerMultiple
            // Field count: 0
            namespace CTriggerOnce {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // 
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // 
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // 
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // 
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // 
                constexpr std::ptrdiff_t m_szModifier = 0x120; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CLogicProximity {
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
                constexpr std::ptrdiff_t m_iszPreCommands = 0x960; // 
                constexpr std::ptrdiff_t m_iszPostCommands = 0x968; // 
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x970; // 
                constexpr std::ptrdiff_t m_iszViewTarget = 0x978; // 
                constexpr std::ptrdiff_t m_hViewTarget = 0x980; // 
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0x984; // 
                constexpr std::ptrdiff_t m_iszViewPosition = 0x988; // 
                constexpr std::ptrdiff_t m_hViewPosition = 0x990; // 
                constexpr std::ptrdiff_t m_hViewPositionMover = 0x994; // 
                constexpr std::ptrdiff_t m_bPreventMovement = 0x998; // 
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0x999; // 
                constexpr std::ptrdiff_t m_bUnstoppable = 0x99A; // 
                constexpr std::ptrdiff_t m_flFinishedTime = 0x99C; // 
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0x9A0; // 
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0x9AC; // 
                constexpr std::ptrdiff_t m_vecFinishAngles = 0x9B8; // 
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0x9C4; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x9C5; // 
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0x9C8; // 
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0x9D4; // 
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0x9D8; // 
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xA00; // 
                constexpr std::ptrdiff_t m_bActive = 0xA28; // 
                constexpr std::ptrdiff_t m_flStartTime = 0xA2C; // 
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xA30; // 
                constexpr std::ptrdiff_t m_iszTitle = 0xA38; // 
                constexpr std::ptrdiff_t m_iszSpeakers = 0xA40; // 
                constexpr std::ptrdiff_t m_iNodeNumber = 0xA48; // 
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xA4C; // 
                constexpr std::ptrdiff_t m_bListenedTo = 0xA50; // 
            }
            // Parent: CBaseClientUIEntity
            // Field count: 23
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
            // NetworkVarNames: m_bRenderBackface (bool)
            // NetworkVarNames: m_bUseOffScreenIndicator (bool)
            // NetworkVarNames: m_bExcludeFromSaveGames (bool)
            // NetworkVarNames: m_bGrabbable (bool)
            // NetworkVarNames: m_bOnlyRenderToTexture (bool)
            // NetworkVarNames: m_bDisableMipGen (bool)
            // NetworkVarNames: m_nExplicitImageLayout (int32)
            namespace CPointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x900; // 
                constexpr std::ptrdiff_t m_bLit = 0x901; // 
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x902; // 
                constexpr std::ptrdiff_t m_flWidth = 0x904; // 
                constexpr std::ptrdiff_t m_flHeight = 0x908; // 
                constexpr std::ptrdiff_t m_flDPI = 0x90C; // 
                constexpr std::ptrdiff_t m_flInteractDistance = 0x910; // 
                constexpr std::ptrdiff_t m_flDepthOffset = 0x914; // 
                constexpr std::ptrdiff_t m_unOwnerContext = 0x918; // 
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x91C; // 
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x920; // 
                constexpr std::ptrdiff_t m_unOrientation = 0x924; // 
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x928; // 
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x930; // 
                constexpr std::ptrdiff_t m_bOpaque = 0x948; // 
                constexpr std::ptrdiff_t m_bNoDepth = 0x949; // 
                constexpr std::ptrdiff_t m_bRenderBackface = 0x94A; // 
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x94B; // 
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x94C; // 
                constexpr std::ptrdiff_t m_bGrabbable = 0x94D; // 
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x94E; // 
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x94F; // 
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x950; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterContext {
                constexpr std::ptrdiff_t m_iFilterContext = 0x538; // 
            }
            // Parent: CPathParticleRope
            // Field count: 0
            namespace CPathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: None
            // Field count: 6
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // 
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // 
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x20; // 
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x38; // 
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x50; // 
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x68; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x538; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x200; // 
                constexpr std::ptrdiff_t m_bIsRescuing = 0x234; // 
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x238; // 
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x290; // 
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CAISound {
                constexpr std::ptrdiff_t m_iSoundType = 0x4E0; // 
                constexpr std::ptrdiff_t m_iSoundFlags = 0x4E2; // 
                constexpr std::ptrdiff_t m_iVolume = 0x4E4; // 
                constexpr std::ptrdiff_t m_iSoundIndex = 0x4E8; // 
                constexpr std::ptrdiff_t m_flDuration = 0x4EC; // 
                constexpr std::ptrdiff_t m_iszProxyEntityName = 0x4F0; // 
            }
            // Parent: CBaseEntity
            // Field count: 7
            namespace CPointEntityFinder {
                constexpr std::ptrdiff_t m_hEntity = 0x4E0; // 
                constexpr std::ptrdiff_t m_iFilterName = 0x4E8; // 
                constexpr std::ptrdiff_t m_hFilter = 0x4F0; // 
                constexpr std::ptrdiff_t m_iRefName = 0x4F8; // 
                constexpr std::ptrdiff_t m_hReference = 0x500; // 
                constexpr std::ptrdiff_t m_FindMethod = 0x504; // 
                constexpr std::ptrdiff_t m_OnFoundEntity = 0x508; // 
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_nModelID = 0x8; // 
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // 
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // 
                constexpr std::ptrdiff_t m_solid = 0x20; // 
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // 
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // 
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // 
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // CNetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // CNetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // 
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // 
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // 
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // 
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x960; // 
                constexpr std::ptrdiff_t m_iShapeType = 0x964; // 
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x968; // 
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x96C; // 
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
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x750; // 
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x758; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x760; // 
                constexpr std::ptrdiff_t m_vTintColor = 0x761; // 
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x765; // 
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x76C; // 
                constexpr std::ptrdiff_t m_nFogType = 0x770; // 
                constexpr std::ptrdiff_t m_flFogMinStart = 0x774; // 
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x778; // 
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x77C; // 
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x780; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x784; // 
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPointVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4E0; // 
                constexpr std::ptrdiff_t m_vecAxis = 0x4E4; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4F0; // 
                constexpr std::ptrdiff_t m_fPrevVelocity = 0x4F4; // 
                constexpr std::ptrdiff_t m_flAvgInterval = 0x4F8; // 
                constexpr std::ptrdiff_t m_Velocity = 0x500; // CEntityOutputTemplate<float32>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x538; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x538; // 
            }
            // Parent: CFuncTrackTrain
            // Field count: 1
            namespace CFuncTankTrain {
                constexpr std::ptrdiff_t m_OnDeath = 0x8A0; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CNullEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_observer {
            }
            // Parent: CMarkupVolumeWithRef
            // Field count: 1
            namespace CMarkupVolumeTagged_NavGame {
                constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x7A8; // 
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CBuyZone {
                constexpr std::ptrdiff_t m_LegacyTeamNum = 0x920; // 
            }
            // Parent: CLogicalEntity
            // Field count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4F0; // 
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4F8; // 
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4FC; // 
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x500; // 
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x528; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x52C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x530; // 
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x548; // 
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x560; // 
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x568; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CTripWireFire {
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CPhysForce {
                constexpr std::ptrdiff_t m_nameAttach = 0x4E8; // 
                constexpr std::ptrdiff_t m_force = 0x4F0; // 
                constexpr std::ptrdiff_t m_forceTime = 0x4F4; // 
                constexpr std::ptrdiff_t m_attachedObject = 0x4F8; // 
                constexpr std::ptrdiff_t m_wasRestored = 0x4FC; // 
                constexpr std::ptrdiff_t m_integrator = 0x500; // 
            }
            // Parent: CLogicalEntity
            // Field count: 6
            namespace CLogicDistanceAutosave {
                constexpr std::ptrdiff_t m_iszTargetEntity = 0x4E0; // 
                constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4E8; // 
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4EC; // 
                constexpr std::ptrdiff_t m_bCheckCough = 0x4ED; // 
                constexpr std::ptrdiff_t m_bThinkDangerous = 0x4EE; // 
                constexpr std::ptrdiff_t m_flDangerousTime = 0x4F0; // 
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_flRange = 0x4E4; // 
                constexpr std::ptrdiff_t m_nImportance = 0x4E8; // 
                constexpr std::ptrdiff_t m_nLightChoice = 0x4EC; // 
                constexpr std::ptrdiff_t m_hLight = 0x4F0; // 
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 9
            namespace CSoundOpvarSetAABBEntity {
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x688; // 
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x694; // 
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x6A0; // 
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x6AC; // 
                constexpr std::ptrdiff_t m_nAABBDirection = 0x6B8; // 
                constexpr std::ptrdiff_t m_vInnerMins = 0x6BC; // 
                constexpr std::ptrdiff_t m_vInnerMaxs = 0x6C8; // 
                constexpr std::ptrdiff_t m_vOuterMins = 0x6D4; // 
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x6E0; // 
            }
            // Parent: None
            // Field count: 2
            namespace CEnvWindShared__WindVariationEvent_t {
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // 
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CTakeDamageInfoAPI {
            }
            // Parent: CTriggerOnce
            // Field count: 1
            namespace CScriptTriggerOnce {
                constexpr std::ptrdiff_t m_vExtent = 0x948; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CNavWalkable {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // 
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // 
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // 
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // 
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // 
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // 
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // 
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // 
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // 
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // 
                constexpr std::ptrdiff_t m_bGlowing = 0x51; // 
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CFlashbangProjectile {
                constexpr std::ptrdiff_t m_flTimeToDetonate = 0xB08; // 
                constexpr std::ptrdiff_t m_numOpponentsHit = 0xB0C; // 
                constexpr std::ptrdiff_t m_numTeammatesHit = 0xB0D; // 
            }
            // Parent: CPointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace CPointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x958; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintTarget {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // 
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSSG08 {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CBreachCharge {
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicBranch {
                constexpr std::ptrdiff_t m_bInValue = 0x4E0; // 
                constexpr std::ptrdiff_t m_Listeners = 0x4E8; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_OnTrue = 0x500; // 
                constexpr std::ptrdiff_t m_OnFalse = 0x528; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponUMP45 {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CSpriteAlias_env_glow {
            }
            // Parent: CBaseToggle
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7D0; // 
                constexpr std::ptrdiff_t m_fStayPushed = 0x7DC; // 
                constexpr std::ptrdiff_t m_fRotating = 0x7DD; // 
                constexpr std::ptrdiff_t m_ls = 0x7E0; // 
                constexpr std::ptrdiff_t m_sUseSound = 0x800; // 
                constexpr std::ptrdiff_t m_sLockedSound = 0x808; // 
                constexpr std::ptrdiff_t m_sUnlockedSound = 0x810; // 
                constexpr std::ptrdiff_t m_sOverrideAnticipationName = 0x818; // 
                constexpr std::ptrdiff_t m_bLocked = 0x820; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x821; // 
                constexpr std::ptrdiff_t m_flUseLockedTime = 0x824; // 
                constexpr std::ptrdiff_t m_bSolidBsp = 0x828; // 
                constexpr std::ptrdiff_t m_OnDamaged = 0x830; // 
                constexpr std::ptrdiff_t m_OnPressed = 0x858; // 
                constexpr std::ptrdiff_t m_OnUseLocked = 0x880; // 
                constexpr std::ptrdiff_t m_OnIn = 0x8A8; // 
                constexpr std::ptrdiff_t m_OnOut = 0x8D0; // 
                constexpr std::ptrdiff_t m_nState = 0x8F8; // 
                constexpr std::ptrdiff_t m_hConstraint = 0x8FC; // 
                constexpr std::ptrdiff_t m_hConstraintParent = 0x900; // 
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x904; // 
                constexpr std::ptrdiff_t m_sGlowEntity = 0x908; // 
                constexpr std::ptrdiff_t m_glowEntity = 0x910; // 
                constexpr std::ptrdiff_t m_usable = 0x914; // 
                constexpr std::ptrdiff_t m_szDisplayText = 0x918; // 
            }
            // Parent: CPhysConstraint
            // Field count: 6
            namespace CPhysLength {
                constexpr std::ptrdiff_t m_offset = 0x558; // 
                constexpr std::ptrdiff_t m_vecAttach = 0x570; // 
                constexpr std::ptrdiff_t m_addLength = 0x57C; // 
                constexpr std::ptrdiff_t m_minLength = 0x580; // 
                constexpr std::ptrdiff_t m_totalLength = 0x584; // 
                constexpr std::ptrdiff_t m_bEnableCollision = 0x588; // 
            }
            // Parent: CBaseEntity
            // Field count: 48
            namespace CLogicNPCCounter {
                constexpr std::ptrdiff_t m_OnMinCountAll = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnMaxCountAll = 0x508; // 
                constexpr std::ptrdiff_t m_OnFactorAll = 0x530; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x558; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_1 = 0x580; // 
                constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x5A8; // 
                constexpr std::ptrdiff_t m_OnFactor_1 = 0x5D0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x5F8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_2 = 0x620; // 
                constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x648; // 
                constexpr std::ptrdiff_t m_OnFactor_2 = 0x670; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x698; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinCount_3 = 0x6C0; // 
                constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x6E8; // 
                constexpr std::ptrdiff_t m_OnFactor_3 = 0x710; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x738; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_hSource = 0x760; // 
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x768; // 
                constexpr std::ptrdiff_t m_flDistanceMax = 0x770; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x774; // 
                constexpr std::ptrdiff_t m_nMinCountAll = 0x778; // 
                constexpr std::ptrdiff_t m_nMaxCountAll = 0x77C; // 
                constexpr std::ptrdiff_t m_nMinFactorAll = 0x780; // 
                constexpr std::ptrdiff_t m_nMaxFactorAll = 0x784; // 
                constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x790; // 
                constexpr std::ptrdiff_t m_nNPCState_1 = 0x798; // 
                constexpr std::ptrdiff_t m_bInvertState_1 = 0x79C; // 
                constexpr std::ptrdiff_t m_nMinCount_1 = 0x7A0; // 
                constexpr std::ptrdiff_t m_nMaxCount_1 = 0x7A4; // 
                constexpr std::ptrdiff_t m_nMinFactor_1 = 0x7A8; // 
                constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x7AC; // 
                constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x7B4; // 
                constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x7B8; // 
                constexpr std::ptrdiff_t m_nNPCState_2 = 0x7C0; // 
                constexpr std::ptrdiff_t m_bInvertState_2 = 0x7C4; // 
                constexpr std::ptrdiff_t m_nMinCount_2 = 0x7C8; // 
                constexpr std::ptrdiff_t m_nMaxCount_2 = 0x7CC; // 
                constexpr std::ptrdiff_t m_nMinFactor_2 = 0x7D0; // 
                constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x7D4; // 
                constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x7DC; // 
                constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x7E0; // 
                constexpr std::ptrdiff_t m_nNPCState_3 = 0x7E8; // 
                constexpr std::ptrdiff_t m_bInvertState_3 = 0x7EC; // 
                constexpr std::ptrdiff_t m_nMinCount_3 = 0x7F0; // 
                constexpr std::ptrdiff_t m_nMaxCount_3 = 0x7F4; // 
                constexpr std::ptrdiff_t m_nMinFactor_3 = 0x7F8; // 
                constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x7FC; // 
                constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x804; // 
            }
            // Parent: CPredictedViewModel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
            namespace CCSGOViewModel {
                constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x9A8; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDisplayHealth (float)
            namespace CWeaponShield {
                constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0xF30; // 
                constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0xF34; // 
                constexpr std::ptrdiff_t m_flDisplayHealth = 0xF38; // 
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CBlood {
                constexpr std::ptrdiff_t m_vecSprayAngles = 0x4E0; // 
                constexpr std::ptrdiff_t m_vecSprayDir = 0x4EC; // 
                constexpr std::ptrdiff_t m_flAmount = 0x4F8; // 
                constexpr std::ptrdiff_t m_Color = 0x4FC; // 
            }
            // Parent: CLogicalEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fadeColor (Color)
            namespace CEnvFade {
                constexpr std::ptrdiff_t m_fadeColor = 0x4E0; // 
                constexpr std::ptrdiff_t m_Duration = 0x4E4; // 
                constexpr std::ptrdiff_t m_HoldDuration = 0x4E8; // 
                constexpr std::ptrdiff_t m_OnBeginFade = 0x4F0; // 
            }
            // Parent: CBaseProp
            // Field count: 33
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            // NetworkVarNames: m_noGhostCollision (bool)
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x9A8; // 
                constexpr std::ptrdiff_t m_OnBreak = 0x9E8; // 
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xA10; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xA38; // 
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xA60; // 
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xA64; // 
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0xA68; // 
                constexpr std::ptrdiff_t m_flPressureDelay = 0xA74; // 
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xA78; // 
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xA7C; // 
                constexpr std::ptrdiff_t m_hBreaker = 0xA88; // 
                constexpr std::ptrdiff_t m_PerformanceMode = 0xA8C; // 
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xA90; // 
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xA94; // 
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xA98; // 
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xAA0; // 
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xAA8; // 
                constexpr std::ptrdiff_t m_explodeDamage = 0xAAC; // 
                constexpr std::ptrdiff_t m_explodeRadius = 0xAB0; // 
                constexpr std::ptrdiff_t m_explosionDelay = 0xAB8; // 
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xAC0; // 
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xAC8; // 
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xAD0; // 
                constexpr std::ptrdiff_t m_explosionModifier = 0xAD8; // 
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xAE0; // 
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xAE4; // 
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xAE8; // 
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xAEC; // 
                constexpr std::ptrdiff_t m_hLastAttacker = 0xAF0; // 
                constexpr std::ptrdiff_t m_hFlareEnt = 0xAF4; // 
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xAF8; // 
                constexpr std::ptrdiff_t m_iszPuntSound = 0xB00; // 
                constexpr std::ptrdiff_t m_noGhostCollision = 0xB08; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xC8; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CPathSimpleAPI {
            }
            // Parent: CBaseFlex
            // Field count: 10
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
            namespace CBaseCombatCharacter {
                constexpr std::ptrdiff_t m_bForceServerRagdoll = 0x9F0; // 
                constexpr std::ptrdiff_t m_hMyWearables = 0x9F8; // 
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xA10; // 
                constexpr std::ptrdiff_t m_LastHitGroup = 0xA14; // 
                constexpr std::ptrdiff_t m_bApplyStressDamage = 0xA18; // 
                constexpr std::ptrdiff_t m_iDamageCount = 0xA60; // 
                constexpr std::ptrdiff_t m_pVecRelationships = 0xA68; // CUtlVector<RelationshipOverride_t>*
                constexpr std::ptrdiff_t m_strRelationships = 0xA70; // 
                constexpr std::ptrdiff_t m_eHull = 0xA78; // 
                constexpr std::ptrdiff_t m_nNavHullIdx = 0xA7C; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 25
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
                constexpr std::ptrdiff_t m_firePositions = 0x760; // 
                constexpr std::ptrdiff_t m_fireParentPositions = 0xA60; // 
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xD60; // 
                constexpr std::ptrdiff_t m_BurnNormal = 0xDA0; // 
                constexpr std::ptrdiff_t m_fireCount = 0x10A0; // 
                constexpr std::ptrdiff_t m_nInfernoType = 0x10A4; // 
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x10A8; // 
                constexpr std::ptrdiff_t m_nFireLifetime = 0x10AC; // 
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x10B0; // 
                constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x10B4; // 
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x10B8; // 
                constexpr std::ptrdiff_t m_extent = 0x12C0; // 
                constexpr std::ptrdiff_t m_damageTimer = 0x12D8; // 
                constexpr std::ptrdiff_t m_damageRampTimer = 0x12F0; // 
                constexpr std::ptrdiff_t m_splashVelocity = 0x1308; // 
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x1314; // 
                constexpr std::ptrdiff_t m_startPos = 0x1320; // 
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x132C; // 
                constexpr std::ptrdiff_t m_activeTimer = 0x1338; // 
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1348; // 
                constexpr std::ptrdiff_t m_nMaxFlames = 0x134C; // 
                constexpr std::ptrdiff_t m_nSpreadCount = 0x1350; // 
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1358; // 
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1370; // 
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1388; // 
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CEnvGlobal {
                constexpr std::ptrdiff_t m_outCounter = 0x4E0; // 
                constexpr std::ptrdiff_t m_globalstate = 0x508; // 
                constexpr std::ptrdiff_t m_triggermode = 0x510; // 
                constexpr std::ptrdiff_t m_initialstate = 0x514; // 
                constexpr std::ptrdiff_t m_counter = 0x518; // 
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnPass = 0x4E8; // 
                constexpr std::ptrdiff_t m_OnFail = 0x510; // 
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
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x4E0; // 
                constexpr std::ptrdiff_t m_aPlayers = 0x4F8; // 
                constexpr std::ptrdiff_t m_iScore = 0x510; // 
                constexpr std::ptrdiff_t m_szTeamname = 0x514; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponUSPSilencer {
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
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x750; // 
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x758; // 
                constexpr std::ptrdiff_t m_nAttachment = 0x75C; // 
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x760; // 
                constexpr std::ptrdiff_t m_flFrame = 0x764; // 
                constexpr std::ptrdiff_t m_flDieTime = 0x768; // 
                constexpr std::ptrdiff_t m_nBrightness = 0x778; // 
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x77C; // 
                constexpr std::ptrdiff_t m_flSpriteScale = 0x780; // 
                constexpr std::ptrdiff_t m_flScaleDuration = 0x784; // 
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x788; // 
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x78C; // 
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x790; // 
                constexpr std::ptrdiff_t m_flLastTime = 0x794; // 
                constexpr std::ptrdiff_t m_flMaxFrame = 0x798; // 
                constexpr std::ptrdiff_t m_flStartScale = 0x79C; // 
                constexpr std::ptrdiff_t m_flDestScale = 0x7A0; // 
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x7A4; // 
                constexpr std::ptrdiff_t m_nStartBrightness = 0x7A8; // 
                constexpr std::ptrdiff_t m_nDestBrightness = 0x7AC; // 
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x7B0; // 
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x7B4; // 
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x7B8; // 
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerGravity {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CServerRagdollTrigger {
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x4F8; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x504; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CPathMover {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x4E8; // CUtlVector<CHandle<CMoverPathNode>>
                constexpr std::ptrdiff_t m_flPathLength = 0x500; // 
                constexpr std::ptrdiff_t m_bClosedLoop = 0x504; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CFlashbang {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAug {
            }
            // Parent: CDynamicProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xC30; // 
                constexpr std::ptrdiff_t m_updateTimer = 0xEF8; // 
                constexpr std::ptrdiff_t m_stuckAnchor = 0xF10; // 
                constexpr std::ptrdiff_t m_stuckTimer = 0xF20; // 
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0xF38; // 
                constexpr std::ptrdiff_t m_isOnGround = 0xF50; // 
                constexpr std::ptrdiff_t m_vFallVelocity = 0xF54; // 
                constexpr std::ptrdiff_t m_desiredActivity = 0xF60; // 
                constexpr std::ptrdiff_t m_currentActivity = 0xF64; // 
                constexpr std::ptrdiff_t m_activityTimer = 0xF68; // 
                constexpr std::ptrdiff_t m_turnRate = 0xF80; // 
                constexpr std::ptrdiff_t m_fleeFrom = 0xF84; // 
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xF88; // 
                constexpr std::ptrdiff_t m_startleTimer = 0xFA0; // 
                constexpr std::ptrdiff_t m_vocalizeTimer = 0xFB8; // 
                constexpr std::ptrdiff_t m_flWhenZombified = 0xFD0; // 
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xFD4; // 
                constexpr std::ptrdiff_t m_leader = 0xFD8; // 
                constexpr std::ptrdiff_t m_reuseTimer = 0xFF0; // 
                constexpr std::ptrdiff_t m_hasBeenUsed = 0x1008; // 
                constexpr std::ptrdiff_t m_jumpTimer = 0x1010; // 
                constexpr std::ptrdiff_t m_flLastJumpTime = 0x1028; // 
                constexpr std::ptrdiff_t m_bInJump = 0x102C; // 
                constexpr std::ptrdiff_t m_repathTimer = 0x3038; // 
                constexpr std::ptrdiff_t m_vecPathGoal = 0x30D0; // 
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x30DC; // 
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x30E0; // 
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3100; // 
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CChangeLevel {
                constexpr std::ptrdiff_t m_sMapName = 0x920; // 
                constexpr std::ptrdiff_t m_sLandmarkName = 0x928; // 
                constexpr std::ptrdiff_t m_OnChangeLevel = 0x930; // 
                constexpr std::ptrdiff_t m_bTouched = 0x958; // 
                constexpr std::ptrdiff_t m_bNoTouch = 0x959; // 
                constexpr std::ptrdiff_t m_bNewChapter = 0x95A; // 
                constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x95B; // 
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerLerpObject {
                constexpr std::ptrdiff_t m_iszLerpTarget = 0x920; // 
                constexpr std::ptrdiff_t m_hLerpTarget = 0x928; // 
                constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x930; // 
                constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x938; // 
                constexpr std::ptrdiff_t m_flLerpDuration = 0x93C; // 
                constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x940; // 
                constexpr std::ptrdiff_t m_bSingleLerpObject = 0x941; // 
                constexpr std::ptrdiff_t m_vecLerpingObjects = 0x948; // 
                constexpr std::ptrdiff_t m_iszLerpEffect = 0x960; // 
                constexpr std::ptrdiff_t m_iszLerpSound = 0x968; // 
                constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x970; // 
                constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x974; // 
                constexpr std::ptrdiff_t m_OnLerpStarted = 0x978; // 
                constexpr std::ptrdiff_t m_OnLerpFinished = 0x9A0; // 
            }
            // Parent: CBaseToggle
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0x7D0; // 
                constexpr std::ptrdiff_t m_iFilterName = 0x7D8; // 
                constexpr std::ptrdiff_t m_hFilter = 0x7E0; // 
                constexpr std::ptrdiff_t m_OnStartTouch = 0x7E8; // 
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x810; // 
                constexpr std::ptrdiff_t m_OnEndTouch = 0x838; // 
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x860; // 
                constexpr std::ptrdiff_t m_OnTouching = 0x888; // 
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x8B0; // 
                constexpr std::ptrdiff_t m_OnNotTouching = 0x8D8; // 
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x900; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0x918; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CLogicScript {
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
                constexpr std::ptrdiff_t m_AttributeManager = 0xA00; // 
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xCC8; // 
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xCCC; // 
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xCD0; // 
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xCD4; // 
                constexpr std::ptrdiff_t m_flFallbackWear = 0xCD8; // 
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xCDC; // 
                constexpr std::ptrdiff_t m_hOldProvidee = 0xCE0; // 
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xCE4; // 
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // 
                constexpr std::ptrdiff_t m_vecMins = 0x40; // 
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // 
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // 
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // 
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // 
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // 
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // 
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // 
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // 
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // 
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // 
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // 
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // 
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // 
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // 
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // 
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CServerOnlyEntity {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // 
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // 
                constexpr std::ptrdiff_t m_flCycle = 0x10; // 
                constexpr std::ptrdiff_t m_flWeight = 0x14; // 
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // 
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // 
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // 
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // 
            }
            // Parent: CModelPointEntity
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            // NetworkVarNames: m_FontName (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFullbright (bool)
            // NetworkVarNames: m_flWorldUnitsPerPx (float)
            // NetworkVarNames: m_flFontSize (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
            // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
            // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
            namespace CPointWorldText {
                constexpr std::ptrdiff_t m_messageText = 0x750; // 
                constexpr std::ptrdiff_t m_FontName = 0x950; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x990; // 
                constexpr std::ptrdiff_t m_bFullbright = 0x991; // 
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x994; // 
                constexpr std::ptrdiff_t m_flFontSize = 0x998; // 
                constexpr std::ptrdiff_t m_flDepthOffset = 0x99C; // 
                constexpr std::ptrdiff_t m_Color = 0x9A0; // 
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x9A4; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x9A8; // 
                constexpr std::ptrdiff_t m_nReorientMode = 0x9AC; // 
            }
            // Parent: CSoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace CSoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x500; // 
                constexpr std::ptrdiff_t m_vMax = 0x50C; // 
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
                constexpr std::ptrdiff_t m_gravityScale = 0x930; // 
                constexpr std::ptrdiff_t m_linearLimit = 0x934; // 
                constexpr std::ptrdiff_t m_linearDamping = 0x938; // 
                constexpr std::ptrdiff_t m_angularLimit = 0x93C; // 
                constexpr std::ptrdiff_t m_angularDamping = 0x940; // 
                constexpr std::ptrdiff_t m_linearForce = 0x944; // 
                constexpr std::ptrdiff_t m_flFrequency = 0x948; // 
                constexpr std::ptrdiff_t m_flDampingRatio = 0x94C; // 
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x950; // 
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x95C; // 
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x960; // 
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x96C; // 
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x978; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // 
                constexpr std::ptrdiff_t m_Values = 0x34; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CPointBroadcastClientCommand {
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_matPanelTransform = 0x750; // 
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x780; // 
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x7B0; // 
                constexpr std::ptrdiff_t m_PanelSize = 0x7C8; // 
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7D0; // 
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7D4; // 
                constexpr std::ptrdiff_t m_flInitAtTime = 0x7D8; // 
                constexpr std::ptrdiff_t m_flGlassThickness = 0x7DC; // 
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7E0; // 
                constexpr std::ptrdiff_t m_bBreakSilent = 0x7E4; // 
                constexpr std::ptrdiff_t m_bBreakShardless = 0x7E5; // 
                constexpr std::ptrdiff_t m_bBroken = 0x7E6; // 
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7E7; // 
                constexpr std::ptrdiff_t m_bGlassInFrame = 0x7E8; // 
                constexpr std::ptrdiff_t m_bStartBroken = 0x7E9; // 
                constexpr std::ptrdiff_t m_iInitialDamageType = 0x7EA; // 
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x7F0; // 
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x7F8; // 
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x800; // 
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x808; // 
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x810; // 
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x828; // 
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x840; // 
                constexpr std::ptrdiff_t m_OnBroken = 0x858; // 
                constexpr std::ptrdiff_t m_iSurfaceType = 0x880; // 
                constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x888; // 
            }
            // Parent: CBaseButton
            // Field count: 0
            namespace CRotButton {
            }
            // Parent: CSoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace CSoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x598; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponHKP2000 {
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
            // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
            namespace CPlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x968; // 
                constexpr std::ptrdiff_t m_flC4Blow = 0x96C; // 
                constexpr std::ptrdiff_t m_nBombSite = 0x970; // 
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x974; // 
                constexpr std::ptrdiff_t m_AttributeManager = 0x978; // 
                constexpr std::ptrdiff_t m_OnBombDefused = 0xC40; // 
                constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xC68; // 
                constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xC90; // 
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xCB8; // 
                constexpr std::ptrdiff_t m_entitySpottedState = 0xCC0; // 
                constexpr std::ptrdiff_t m_nSpotRules = 0xCD8; // 
                constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xCDC; // 
                constexpr std::ptrdiff_t m_bHasExploded = 0xCDD; // 
                constexpr std::ptrdiff_t m_flTimerLength = 0xCE0; // 
                constexpr std::ptrdiff_t m_bBeingDefused = 0xCE4; // 
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xCEC; // 
                constexpr std::ptrdiff_t m_flDefuseLength = 0xCF4; // 
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xCF8; // 
                constexpr std::ptrdiff_t m_bBombDefused = 0xCFC; // 
                constexpr std::ptrdiff_t m_hBombDefuser = 0xD00; // 
                constexpr std::ptrdiff_t m_hControlPanel = 0xD04; // 
                constexpr std::ptrdiff_t m_iProgressBarTime = 0xD08; // 
                constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xD0C; // 
                constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xD0D; // 
                constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xD14; // 
                constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xD1C; // 
                constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xD28; // 
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x900; // 
                constexpr std::ptrdiff_t m_bStartEnabled = 0x904; // 
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CEnvSplash {
                constexpr std::ptrdiff_t m_flScale = 0x4E0; // 
            }
            // Parent: None
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
            // NetworkVarNames: m_bNoReflectionFog (bool)
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // 
                constexpr std::ptrdiff_t colorPrimary = 0x14; // 
                constexpr std::ptrdiff_t colorSecondary = 0x18; // 
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // 
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // 
                constexpr std::ptrdiff_t start = 0x24; // 
                constexpr std::ptrdiff_t end = 0x28; // 
                constexpr std::ptrdiff_t farz = 0x2C; // 
                constexpr std::ptrdiff_t maxdensity = 0x30; // 
                constexpr std::ptrdiff_t exponent = 0x34; // 
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // 
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // 
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // 
                constexpr std::ptrdiff_t startLerpTo = 0x44; // 
                constexpr std::ptrdiff_t endLerpTo = 0x48; // 
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // 
                constexpr std::ptrdiff_t lerptime = 0x50; // 
                constexpr std::ptrdiff_t duration = 0x54; // 
                constexpr std::ptrdiff_t blendtobackground = 0x58; // 
                constexpr std::ptrdiff_t scattering = 0x5C; // 
                constexpr std::ptrdiff_t locallightscale = 0x60; // 
                constexpr std::ptrdiff_t enable = 0x64; // 
                constexpr std::ptrdiff_t blend = 0x65; // 
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // 
                constexpr std::ptrdiff_t m_bPadding = 0x67; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CWeaponNOVA {
            }
            // Parent: CPointCamera
            // Field count: 1
            namespace CPointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x540; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0xF30; // 
                constexpr std::ptrdiff_t m_nLastAttackTick = 0xF34; // 
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CWaterBullet {
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CMarkupVolume {
                constexpr std::ptrdiff_t m_bDisabled = 0x750; // 
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CMessage {
                constexpr std::ptrdiff_t m_iszMessage = 0x4E0; // 
                constexpr std::ptrdiff_t m_MessageVolume = 0x4E8; // 
                constexpr std::ptrdiff_t m_MessageAttenuation = 0x4EC; // 
                constexpr std::ptrdiff_t m_Radius = 0x4F0; // 
                constexpr std::ptrdiff_t m_sNoise = 0x4F8; // 
                constexpr std::ptrdiff_t m_OnShowMessage = 0x500; // 
            }
            // Parent: CLogicalEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            namespace CLogicGameEventListener {
                constexpr std::ptrdiff_t m_OnEventFired = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszGameEventName = 0x518; // 
                constexpr std::ptrdiff_t m_iszGameEventItem = 0x520; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x528; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x529; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            namespace CBreakable {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x758; // 
                constexpr std::ptrdiff_t m_Material = 0x798; // 
                constexpr std::ptrdiff_t m_hBreaker = 0x79C; // 
                constexpr std::ptrdiff_t m_Explosion = 0x7A0; // 
                constexpr std::ptrdiff_t m_iszSpawnObject = 0x7A8; // 
                constexpr std::ptrdiff_t m_flPressureDelay = 0x7B0; // 
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x7B4; // 
                constexpr std::ptrdiff_t m_iszPropData = 0x7B8; // 
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x7C0; // 
                constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x7C4; // 
                constexpr std::ptrdiff_t m_OnBreak = 0x7C8; // 
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x7F0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x818; // 
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x81C; // 
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x820; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            namespace CBaseToggle {
                constexpr std::ptrdiff_t m_toggle_state = 0x750; // 
                constexpr std::ptrdiff_t m_flMoveDistance = 0x754; // 
                constexpr std::ptrdiff_t m_flWait = 0x758; // 
                constexpr std::ptrdiff_t m_flLip = 0x75C; // 
                constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x760; // 
                constexpr std::ptrdiff_t m_vecPosition1 = 0x764; // 
                constexpr std::ptrdiff_t m_vecPosition2 = 0x770; // 
                constexpr std::ptrdiff_t m_vecMoveAng = 0x77C; // 
                constexpr std::ptrdiff_t m_vecAngle1 = 0x788; // 
                constexpr std::ptrdiff_t m_vecAngle2 = 0x794; // 
                constexpr std::ptrdiff_t m_flHeight = 0x7A0; // 
                constexpr std::ptrdiff_t m_hActivator = 0x7A4; // 
                constexpr std::ptrdiff_t m_vecFinalDest = 0x7A8; // 
                constexpr std::ptrdiff_t m_vecFinalAngle = 0x7B4; // 
                constexpr std::ptrdiff_t m_movementType = 0x7C0; // 
                constexpr std::ptrdiff_t m_sMaster = 0x7C8; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoTarget {
            }
            // Parent: CRotButton
            // Field count: 14
            namespace CMomentaryRotButton {
                constexpr std::ptrdiff_t m_Position = 0x920; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnUnpressed = 0x948; // 
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x970; // 
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x998; // 
                constexpr std::ptrdiff_t m_OnReachedPosition = 0x9C0; // 
                constexpr std::ptrdiff_t m_lastUsed = 0x9E8; // 
                constexpr std::ptrdiff_t m_start = 0x9EC; // 
                constexpr std::ptrdiff_t m_end = 0x9F8; // 
                constexpr std::ptrdiff_t m_IdealYaw = 0xA04; // 
                constexpr std::ptrdiff_t m_sNoise = 0xA08; // 
                constexpr std::ptrdiff_t m_bUpdateTarget = 0xA10; // 
                constexpr std::ptrdiff_t m_direction = 0xA14; // 
                constexpr std::ptrdiff_t m_returnSpeed = 0xA18; // 
                constexpr std::ptrdiff_t m_flStartPosition = 0xA1C; // 
            }
            // Parent: CEntityComponent
            // Field count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // 
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // 
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // 
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // 
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // 
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // 
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // 
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // 
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // 
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // 
            }
            // Parent: CRulePointEntity
            // Field count: 2
            namespace CGameText {
                constexpr std::ptrdiff_t m_iszMessage = 0x760; // 
                constexpr std::ptrdiff_t m_textParms = 0x768; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP5SD {
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
                constexpr std::ptrdiff_t m_bLoop = 0x750; // 
                constexpr std::ptrdiff_t m_flFPS = 0x754; // 
                constexpr std::ptrdiff_t m_hPositionKeys = 0x758; // 
                constexpr std::ptrdiff_t m_hRotationKeys = 0x760; // 
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x768; // 
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x774; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x780; // 
                constexpr std::ptrdiff_t m_flStartFrame = 0x784; // 
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 3
            namespace CMarkupVolumeWithRef {
                constexpr std::ptrdiff_t m_bUseRef = 0x790; // 
                constexpr std::ptrdiff_t m_vRefPos = 0x794; // 
                constexpr std::ptrdiff_t m_flRefDot = 0x7A0; // 
            }
            // Parent: CPhysForce
            // Field count: 1
            namespace CPhysThruster {
                constexpr std::ptrdiff_t m_localOrigin = 0x540; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPointScriptExtensions_player {
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
                constexpr std::ptrdiff_t m_iszStackName = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszOpvarName = 0x4F0; // 
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x4F8; // 
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x504; // 
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x510; // 
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x51C; // 
                constexpr std::ptrdiff_t m_nAABBDirection = 0x528; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_unDefIdx (item_definition_index_t)
            // NetworkVarNames: m_nCost (int)
            // NetworkVarNames: m_nPrevArmor (int)
            // NetworkVarNames: m_bPrevHelmet (bool)
            // NetworkVarNames: m_hItem (CEntityHandle)
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // 
                constexpr std::ptrdiff_t m_nCost = 0x34; // 
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // 
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // 
                constexpr std::ptrdiff_t m_hItem = 0x40; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponFamas {
            }
            // Parent: CPhysicsProp
            // Field count: 3
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace CShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_bDebris = 0xCB8; // 
                constexpr std::ptrdiff_t m_hParentShard = 0xCBC; // 
                constexpr std::ptrdiff_t m_ShardDesc = 0xCC0; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x538; // 
            }
            // Parent: CBasePlayerPawn
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_CTouchExpansionComponent (CTouchExpansionComponent::Storage_t)
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_pViewModelServices (CPlayer_ViewModelServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
            // NetworkVarNames: m_bGunGameImmunity (bool)
            // NetworkVarNames: m_fMolotovDamageTime (float)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_angEyeAngles (QAngle)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            namespace CCSPlayerPawnBase {
                constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xC28; // 
                constexpr std::ptrdiff_t m_pPingServices = 0xC78; // 
                constexpr std::ptrdiff_t m_pViewModelServices = 0xC80; // 
                constexpr std::ptrdiff_t m_blindUntilTime = 0xC88; // 
                constexpr std::ptrdiff_t m_blindStartTime = 0xC8C; // 
                constexpr std::ptrdiff_t m_iPlayerState = 0xC90; // 
                constexpr std::ptrdiff_t m_bRespawning = 0xD40; // 
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0xD44; // 
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0xD48; // 
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0xD4C; // 
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xD50; // 
                constexpr std::ptrdiff_t m_iNumSpawns = 0xD54; // 
                constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xD5C; // 
                constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xD60; // 
                constexpr std::ptrdiff_t m_flFlashDuration = 0xD64; // 
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0xD68; // 
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0xD6C; // 
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0xD70; // 
                constexpr std::ptrdiff_t m_angEyeAngles = 0xD74; // 
                constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0xD80; // 
                constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0xD81; // 
                constexpr std::ptrdiff_t m_hOriginalController = 0xD84; // 
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CPathTrack {
                constexpr std::ptrdiff_t m_pnext = 0x4E0; // 
                constexpr std::ptrdiff_t m_pprevious = 0x4E8; // 
                constexpr std::ptrdiff_t m_paltpath = 0x4F0; // 
                constexpr std::ptrdiff_t m_flRadius = 0x4F8; // 
                constexpr std::ptrdiff_t m_length = 0x4FC; // 
                constexpr std::ptrdiff_t m_altName = 0x500; // 
                constexpr std::ptrdiff_t m_nIterVal = 0x508; // 
                constexpr std::ptrdiff_t m_eOrientationType = 0x50C; // 
                constexpr std::ptrdiff_t m_OnPass = 0x510; // 
            }
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CLogicDistanceCheck {
                constexpr std::ptrdiff_t m_iszEntityA = 0x4E0; // 
                constexpr std::ptrdiff_t m_iszEntityB = 0x4E8; // 
                constexpr std::ptrdiff_t m_flZone1Distance = 0x4F0; // 
                constexpr std::ptrdiff_t m_flZone2Distance = 0x4F4; // 
                constexpr std::ptrdiff_t m_InZone1 = 0x4F8; // 
                constexpr std::ptrdiff_t m_InZone2 = 0x520; // 
                constexpr std::ptrdiff_t m_InZone3 = 0x548; // 
            }
            // Parent: CBarnLight
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace COmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xA70; // 
                constexpr std::ptrdiff_t m_flOuterAngle = 0xA74; // 
                constexpr std::ptrdiff_t m_bShowLight = 0xA78; // 
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
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // 
                constexpr std::ptrdiff_t m_nResolutionX = 0x4E4; // 
                constexpr std::ptrdiff_t m_nResolutionY = 0x4E8; // 
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x4F0; // 
                constexpr std::ptrdiff_t m_RenderAttrName = 0x4F8; // 
                constexpr std::ptrdiff_t m_TargetEntities = 0x500; // 
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x518; // 
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x520; // 
                constexpr std::ptrdiff_t m_szTargetsName = 0x538; // 
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x540; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CInfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x4E4; // 
                constexpr std::ptrdiff_t m_vBoxSize = 0x4E8; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4F4; // 
            }
            // Parent: CRulePointEntity
            // Field count: 0
            namespace CGamePlayerEquip {
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 0
            namespace CInfoTargetServerOnly {
            }
            // Parent: CSoundOpvarSetPointEntity
            // Field count: 3
            namespace CSoundOpvarSetPathCornerEntity {
                constexpr std::ptrdiff_t m_flDistMinSqr = 0x6A0; // 
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x6A4; // 
                constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x6A8; // 
            }
            // Parent: CPlayer_WeaponServices
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xA8; // 
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xAC; // 
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xAD; // 
                constexpr std::ptrdiff_t m_hSavedWeapon = 0xB0; // 
                constexpr std::ptrdiff_t m_nTimeToMelee = 0xB4; // 
                constexpr std::ptrdiff_t m_nTimeToSecondary = 0xB8; // 
                constexpr std::ptrdiff_t m_nTimeToPrimary = 0xBC; // 
                constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xC0; // 
                constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xC4; // 
                constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xC5; // 
                constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xC6; // 
                constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xC7; // 
                constexpr std::ptrdiff_t m_bIsPickingUpGroundWeapon = 0xC8; // 
                constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xCC; // 
                constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x468; // 
            }
            // Parent: CBaseEntity
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x4E0; // 
                constexpr std::ptrdiff_t m_bCheapEffect = 0x4E4; // 
                constexpr std::ptrdiff_t m_flSize = 0x4E8; // 
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x4EC; // 
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4F0; // 
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4F4; // 
                constexpr std::ptrdiff_t m_flLifetime = 0x4F8; // 
                constexpr std::ptrdiff_t m_hAttacker = 0x4FC; // 
                constexpr std::ptrdiff_t m_iDangerSound = 0x500; // 
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x504; // 
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x508; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            namespace CCSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0xF10; // 
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0xF14; // 
                constexpr std::ptrdiff_t m_silencedModelIndex = 0xF20; // 
                constexpr std::ptrdiff_t m_inPrecache = 0xF24; // 
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0xF25; // 
                constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0xF26; // 
                constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xF27; // 
                constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0xF28; // 
                constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0xF29; // 
            }
            // Parent: None
            // Field count: 13
            namespace CBot {
                constexpr std::ptrdiff_t m_pController = 0x10; // 
                constexpr std::ptrdiff_t m_pPlayer = 0x18; // 
                constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // 
                constexpr std::ptrdiff_t m_id = 0x24; // 
                constexpr std::ptrdiff_t m_isRunning = 0xC0; // 
                constexpr std::ptrdiff_t m_isCrouching = 0xC1; // 
                constexpr std::ptrdiff_t m_forwardSpeed = 0xC4; // 
                constexpr std::ptrdiff_t m_leftSpeed = 0xC8; // 
                constexpr std::ptrdiff_t m_verticalSpeed = 0xCC; // 
                constexpr std::ptrdiff_t m_buttonFlags = 0xD0; // 
                constexpr std::ptrdiff_t m_jumpTimestamp = 0xD8; // 
                constexpr std::ptrdiff_t m_viewForward = 0xDC; // 
                constexpr std::ptrdiff_t m_postureStackIndex = 0xF8; // 
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // 
                constexpr std::ptrdiff_t m_name = 0x18; // 
                constexpr std::ptrdiff_t m_designerName = 0x20; // 
                constexpr std::ptrdiff_t m_flags = 0x30; // 
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // 
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // 
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // 
                constexpr std::ptrdiff_t m_pPrev = 0x58; // 
                constexpr std::ptrdiff_t m_pNext = 0x60; // 
                constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // 
                constexpr std::ptrdiff_t m_pNextByClass = 0x70; // 
            }
            // Parent: CBaseToggle
            // Field count: 3
            namespace CGunTarget {
                constexpr std::ptrdiff_t m_on = 0x7D0; // 
                constexpr std::ptrdiff_t m_hTargetEnt = 0x7D4; // 
                constexpr std::ptrdiff_t m_OnDeath = 0x7D8; // 
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CSoundEventParameter {
                constexpr std::ptrdiff_t m_iszParamName = 0x4E8; // 
                constexpr std::ptrdiff_t m_flFloatValue = 0x4F0; // 
            }
            // Parent: CPulseGraphInstance_ServerEntity
            // Field count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_GameBlackboard {
            }
            // Parent: CMarkupVolume
            // Field count: 5
            namespace CMarkupVolumeTagged {
                constexpr std::ptrdiff_t m_bIsGroup = 0x788; // 
                constexpr std::ptrdiff_t m_bGroupByPrefab = 0x789; // 
                constexpr std::ptrdiff_t m_bGroupByVolume = 0x78A; // 
                constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x78B; // 
                constexpr std::ptrdiff_t m_bIsInGroup = 0x78C; // 
            }
            // Parent: CBaseEntity
            // Field count: 5
            namespace CTestEffect {
                constexpr std::ptrdiff_t m_iLoop = 0x4E0; // 
                constexpr std::ptrdiff_t m_iBeam = 0x4E4; // 
                constexpr std::ptrdiff_t m_pBeam = 0x4E8; // 
                constexpr std::ptrdiff_t m_flBeamTime = 0x5A8; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x608; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1Silencer {
            }
            // Parent: CFuncNavBlocker
            // Field count: 1
            namespace CScriptNavBlocker {
                constexpr std::ptrdiff_t m_vExtent = 0x760; // 
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            namespace CConstraintAnchor {
                constexpr std::ptrdiff_t m_massScale = 0x960; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponTec9 {
            }
            // Parent: CMarkupVolumeTagged
            // Field count: 0
            namespace CMarkupVolumeTagged_Nav {
            }
            // Parent: CPointEntity
            // Field count: 66
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
                constexpr std::ptrdiff_t m_iszSceneFile = 0x4E8; // 
                constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x4F0; // 
                constexpr std::ptrdiff_t m_iszTarget1 = 0x4F8; // 
                constexpr std::ptrdiff_t m_iszTarget2 = 0x500; // 
                constexpr std::ptrdiff_t m_iszTarget3 = 0x508; // 
                constexpr std::ptrdiff_t m_iszTarget4 = 0x510; // 
                constexpr std::ptrdiff_t m_iszTarget5 = 0x518; // 
                constexpr std::ptrdiff_t m_iszTarget6 = 0x520; // 
                constexpr std::ptrdiff_t m_iszTarget7 = 0x528; // 
                constexpr std::ptrdiff_t m_iszTarget8 = 0x530; // 
                constexpr std::ptrdiff_t m_hTarget1 = 0x538; // 
                constexpr std::ptrdiff_t m_hTarget2 = 0x53C; // 
                constexpr std::ptrdiff_t m_hTarget3 = 0x540; // 
                constexpr std::ptrdiff_t m_hTarget4 = 0x544; // 
                constexpr std::ptrdiff_t m_hTarget5 = 0x548; // 
                constexpr std::ptrdiff_t m_hTarget6 = 0x54C; // 
                constexpr std::ptrdiff_t m_hTarget7 = 0x550; // 
                constexpr std::ptrdiff_t m_hTarget8 = 0x554; // 
                constexpr std::ptrdiff_t m_sTargetAttachment = 0x558; // 
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x560; // 
                constexpr std::ptrdiff_t m_bPaused = 0x561; // 
                constexpr std::ptrdiff_t m_bMultiplayer = 0x562; // 
                constexpr std::ptrdiff_t m_bAutogenerated = 0x563; // 
                constexpr std::ptrdiff_t m_flForceClientTime = 0x564; // 
                constexpr std::ptrdiff_t m_flCurrentTime = 0x568; // 
                constexpr std::ptrdiff_t m_flFrameTime = 0x56C; // 
                constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x570; // 
                constexpr std::ptrdiff_t m_fPitch = 0x574; // 
                constexpr std::ptrdiff_t m_bAutomated = 0x578; // 
                constexpr std::ptrdiff_t m_nAutomatedAction = 0x57C; // 
                constexpr std::ptrdiff_t m_flAutomationDelay = 0x580; // 
                constexpr std::ptrdiff_t m_flAutomationTime = 0x584; // 
                constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x588; // 
                constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x58C; // 
                constexpr std::ptrdiff_t m_bPausedViaInput = 0x58D; // 
                constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x58E; // 
                constexpr std::ptrdiff_t m_bWaitingForActor = 0x58F; // 
                constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x590; // 
                constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x591; // 
                constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x592; // 
                constexpr std::ptrdiff_t m_bSceneFinished = 0x593; // 
                constexpr std::ptrdiff_t m_hActorList = 0x598; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
                constexpr std::ptrdiff_t m_hRemoveActorList = 0x5B0; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x5F8; // 
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5FC; // 
                constexpr std::ptrdiff_t m_OnStart = 0x600; // 
                constexpr std::ptrdiff_t m_OnCompletion = 0x628; // 
                constexpr std::ptrdiff_t m_OnCanceled = 0x650; // 
                constexpr std::ptrdiff_t m_OnPaused = 0x678; // 
                constexpr std::ptrdiff_t m_OnResumed = 0x6A0; // 
                constexpr std::ptrdiff_t m_OnTrigger = 0x6C8; // 
                constexpr std::ptrdiff_t m_hInterruptScene = 0x9D8; // 
                constexpr std::ptrdiff_t m_nInterruptCount = 0x9DC; // 
                constexpr std::ptrdiff_t m_bSceneMissing = 0x9E0; // 
                constexpr std::ptrdiff_t m_bInterrupted = 0x9E1; // 
                constexpr std::ptrdiff_t m_bCompletedEarly = 0x9E2; // 
                constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x9E3; // 
                constexpr std::ptrdiff_t m_bRestoring = 0x9E4; // 
                constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x9E8; // CUtlVector<CHandle<CSceneEntity>>
                constexpr std::ptrdiff_t m_hListManagers = 0xA00; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszSoundName = 0xA18; // 
                constexpr std::ptrdiff_t m_iszSequenceName = 0xA20; // 
                constexpr std::ptrdiff_t m_hActor = 0xA28; // 
                constexpr std::ptrdiff_t m_hActivator = 0xA2C; // 
                constexpr std::ptrdiff_t m_BusyActor = 0xA30; // 
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0xA34; // 
            }
            // Parent: CLightDirectionalEntity
            // Field count: 0
            namespace CLightEnvironmentEntity {
            }
            // Parent: CLogicAutosave
            // Field count: 4
            namespace CLogicActiveAutosave {
                constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4F0; // 
                constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4F4; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x4F8; // 
                constexpr std::ptrdiff_t m_flDangerousTime = 0x4FC; // 
            }
            // Parent: CBaseEntity
            // Field count: 2
            namespace CEnvBeverage {
                constexpr std::ptrdiff_t m_CanInDispenser = 0x4E0; // 
                constexpr std::ptrdiff_t m_nBeverageType = 0x4E4; // 
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
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4E0; // 
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4E4; // 
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4E8; // 
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x4FC; // 
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x500; // 
                constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x508; // 
                constexpr std::ptrdiff_t m_executeCommandTimer = 0x520; // 
                constexpr std::ptrdiff_t m_resetVoteTimer = 0x538; // 
                constexpr std::ptrdiff_t m_nVotesCast = 0x550; // 
                constexpr std::ptrdiff_t m_playerHoldingVote = 0x650; // 
                constexpr std::ptrdiff_t m_playerOverrideForVote = 0x654; // 
                constexpr std::ptrdiff_t m_nHighestCountIndex = 0x658; // 
                constexpr std::ptrdiff_t m_potentialIssues = 0x660; // 
                constexpr std::ptrdiff_t m_VoteOptions = 0x678; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponCZ75a {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponP250 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_vLookTargetPosition (Vector)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace CBaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0x960; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0x978; // 
                constexpr std::ptrdiff_t m_blinktoggle = 0x984; // 
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x9D8; // 
                constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0x9DC; // 
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x9E0; // 
                constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0x9E4; // 
            }
            // Parent: CTriggerHurt
            // Field count: 1
            namespace CScriptTriggerHurt {
                constexpr std::ptrdiff_t m_vExtent = 0x9C0; // 
            }
            // Parent: CBasePlayerWeaponVData
            // Field count: 92
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x348; // 
                constexpr std::ptrdiff_t m_WeaponCategory = 0x34C; // 
                constexpr std::ptrdiff_t m_szViewModel = 0x350; // 
                constexpr std::ptrdiff_t m_szPlayerModel = 0x430; // 
                constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x510; // 
                constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x5F0; // 
                constexpr std::ptrdiff_t m_szMagazineModel = 0x6D0; // 
                constexpr std::ptrdiff_t m_szHeatEffect = 0x7B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x890; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x970; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0xA50; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xB30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szTracerParticle = 0xC10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0xCF0; // 
                constexpr std::ptrdiff_t m_GearSlotPosition = 0xCF4; // 
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xCF8; // 
                constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xD00; // 
                constexpr std::ptrdiff_t m_nPrice = 0xD08; // 
                constexpr std::ptrdiff_t m_nKillAward = 0xD0C; // 
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xD10; // 
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xD14; // 
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0xD18; // 
                constexpr std::ptrdiff_t m_bHasBurstMode = 0xD19; // 
                constexpr std::ptrdiff_t m_bIsRevolver = 0xD1A; // 
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xD1B; // 
                constexpr std::ptrdiff_t m_szName = 0xD20; // 
                constexpr std::ptrdiff_t m_szAnimExtension = 0xD28; // 
                constexpr std::ptrdiff_t m_eSilencerType = 0xD30; // 
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xD34; // 
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xD38; // 
                constexpr std::ptrdiff_t m_bIsFullAuto = 0xD3C; // 
                constexpr std::ptrdiff_t m_nNumBullets = 0xD40; // 
                constexpr std::ptrdiff_t m_flCycleTime = 0xD44; // 
                constexpr std::ptrdiff_t m_flMaxSpeed = 0xD4C; // 
                constexpr std::ptrdiff_t m_flSpread = 0xD54; // 
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xD5C; // 
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0xD64; // 
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0xD6C; // 
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0xD74; // 
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xD7C; // 
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0xD84; // 
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0xD8C; // 
                constexpr std::ptrdiff_t m_flRecoilAngle = 0xD94; // 
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xD9C; // 
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xDA4; // 
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xDAC; // 
                constexpr std::ptrdiff_t m_nTracerFrequency = 0xDB4; // 
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xDBC; // 
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xDC0; // 
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0xDC4; // 
                constexpr std::ptrdiff_t m_nRecoilSeed = 0xDC8; // 
                constexpr std::ptrdiff_t m_nSpreadSeed = 0xDCC; // 
                constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xDD0; // 
                constexpr std::ptrdiff_t m_flIdleInterval = 0xDD4; // 
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xDD8; // 
                constexpr std::ptrdiff_t m_flHeatPerShot = 0xDDC; // 
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xDE0; // 
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xDE4; // 
                constexpr std::ptrdiff_t m_flBotAudibleRange = 0xDE8; // 
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xDF0; // 
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xDF8; // 
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xDF9; // 
                constexpr std::ptrdiff_t m_nZoomLevels = 0xDFC; // 
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0xE00; // 
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0xE04; // 
                constexpr std::ptrdiff_t m_flZoomTime0 = 0xE08; // 
                constexpr std::ptrdiff_t m_flZoomTime1 = 0xE0C; // 
                constexpr std::ptrdiff_t m_flZoomTime2 = 0xE10; // 
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xE14; // 
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xE18; // 
                constexpr std::ptrdiff_t m_flIronSightFOV = 0xE1C; // 
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xE20; // 
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0xE24; // 
                constexpr std::ptrdiff_t m_angPivotAngle = 0xE28; // 
                constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xE34; // 
                constexpr std::ptrdiff_t m_nDamage = 0xE40; // 
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xE44; // 
                constexpr std::ptrdiff_t m_flArmorRatio = 0xE48; // 
                constexpr std::ptrdiff_t m_flPenetration = 0xE4C; // 
                constexpr std::ptrdiff_t m_flRange = 0xE50; // 
                constexpr std::ptrdiff_t m_flRangeModifier = 0xE54; // 
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xE58; // 
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xE5C; // 
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xE60; // 
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xE64; // 
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xE68; // 
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xE6C; // 
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xE70; // 
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xE74; // 
                constexpr std::ptrdiff_t m_flThrowVelocity = 0xE78; // 
                constexpr std::ptrdiff_t m_vSmokeColor = 0xE7C; // 
                constexpr std::ptrdiff_t m_szAnimClass = 0xE88; // 
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CMathColorBlend {
                constexpr std::ptrdiff_t m_flInMin = 0x4E0; // 
                constexpr std::ptrdiff_t m_flInMax = 0x4E4; // 
                constexpr std::ptrdiff_t m_OutColor1 = 0x4E8; // 
                constexpr std::ptrdiff_t m_OutColor2 = 0x4EC; // 
                constexpr std::ptrdiff_t m_OutValue = 0x4F0; // 
            }
            // Parent: CPointEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszOverlayNames (string_t)
            // NetworkVarNames: m_flOverlayTimes (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iDesiredOverlay (int32)
            // NetworkVarNames: m_bIsActive (bool)
            namespace CEnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x4E0; // 
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x530; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x558; // 
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x55C; // 
                constexpr std::ptrdiff_t m_bIsActive = 0x560; // 
            }
            // Parent: CCSPlayerPawnBase
            // Field count: 118
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
            // NetworkVarNames: m_aimPunchTickBase (int)
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
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0xD90; // 
                constexpr std::ptrdiff_t m_pHostageServices = 0xD98; // 
                constexpr std::ptrdiff_t m_pBuyServices = 0xDA0; // 
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0xDA8; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pRadioServices = 0xDB0; // 
                constexpr std::ptrdiff_t m_pDamageReactServices = 0xDB8; // 
                constexpr std::ptrdiff_t m_nCharacterDefIndex = 0xDC0; // 
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xDC2; // 
                constexpr std::ptrdiff_t m_strVOPrefix = 0xDC8; // 
                constexpr std::ptrdiff_t m_szLastPlaceName = 0xDD0; // 
                constexpr std::ptrdiff_t m_bInHostageResetZone = 0xE90; // 
                constexpr std::ptrdiff_t m_bInBuyZone = 0xE91; // 
                constexpr std::ptrdiff_t m_TouchingBuyZones = 0xE98; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bWasInBuyZone = 0xEB0; // 
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0xEB1; // 
                constexpr std::ptrdiff_t m_bInBombZone = 0xEB2; // 
                constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0xEB3; // 
                constexpr std::ptrdiff_t m_iRetakesOffering = 0xEB4; // 
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0xEB8; // 
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0xEBC; // 
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0xEBD; // 
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0xEC0; // 
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0xEC4; // 
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0xEC8; // 
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0xECC; // 
                constexpr std::ptrdiff_t m_aimPunchAngle = 0xED0; // 
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0xEDC; // 
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0xEE8; // 
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0xEEC; // 
                constexpr std::ptrdiff_t m_aimPunchCache = 0xEF0; // 
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0xF08; // 
                constexpr std::ptrdiff_t m_xLastHeadBoneTransform = 0x15C0; // 
                constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x15E0; // 
                constexpr std::ptrdiff_t m_lastLandTime = 0x15E4; // 
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x15E8; // 
                constexpr std::ptrdiff_t m_iPlayerLocked = 0x15EC; // 
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x15F4; // 
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x15F8; // 
                constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x15FC; // 
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1600; // 
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1604; // 
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1610; // 
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x161C; // 
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x165C; // 
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1660; // 
                constexpr std::ptrdiff_t m_EconGloves = 0x1670; // 
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x18E8; // 
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x18EC; // 
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x18F8; // 
                constexpr std::ptrdiff_t m_bLeftHanded = 0x18F9; // 
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x18FC; // 
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1900; // 
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1904; // 
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1908; // 
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x190C; // 
                constexpr std::ptrdiff_t m_bIsWalking = 0x1910; // 
                constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x1914; // 
                constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x1918; // 
                constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x191C; // 
                constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0x1920; // 
                constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0x1924; // 
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1928; // 
                constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x192C; // 
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1930; // 
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1938; // 
                constexpr std::ptrdiff_t m_nSpotRules = 0x1950; // 
                constexpr std::ptrdiff_t m_bIsScoped = 0x1954; // 
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1955; // 
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1956; // 
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1957; // 
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1958; // 
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x195C; // 
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1960; // 
                constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1964; // 
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1968; // 
                constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x196C; // 
                constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x196D; // 
                constexpr std::ptrdiff_t m_iShotsFired = 0x1970; // 
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1974; // 
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1978; // 
                constexpr std::ptrdiff_t m_flHitHeading = 0x197C; // 
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x1980; // 
                constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1984; // 
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1990; // 
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1994; // 
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1998; // 
                constexpr std::ptrdiff_t m_LastHitBox = 0x199C; // 
                constexpr std::ptrdiff_t m_LastHealth = 0x19A0; // 
                constexpr std::ptrdiff_t m_pBot = 0x19A8; // 
                constexpr std::ptrdiff_t m_bBotAllowActive = 0x19B0; // 
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x19B4; // 
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x19C0; // 
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x19C4; // 
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x19C8; // 
                constexpr std::ptrdiff_t m_nLastPickupPriority = 0x19D4; // 
                constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x19D8; // 
                constexpr std::ptrdiff_t m_ArmorValue = 0x19DC; // 
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x19E0; // 
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x19E2; // 
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x19E4; // 
                constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x19E8; // 
                constexpr std::ptrdiff_t m_bIsSpawning = 0x19EC; // 
                constexpr std::ptrdiff_t m_iDeathFlags = 0x19F8; // 
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x19FC; // 
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1A00; // 
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1A04; // 
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1A10; // 
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1A24; // 
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1A28; // 
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1A2C; // 
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1A30; // 
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1A3C; // 
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1A48; // 
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1A54; // 
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1A6C; // 
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1A84; // 
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x1AA0; // 
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x1AF0; // 
            }
            // Parent: CBaseGrenade
            // Field count: 0
            namespace CBumpMineProjectile {
            }
            // Parent: CBasePlayerController
            // Field count: 86
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_pInGameMoneyServices (CCSPlayerController_InGameMoneyServices*)
            // NetworkVarNames: m_pInventoryServices (CCSPlayerController_InventoryServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayerController_ActionTrackingServices*)
            // NetworkVarNames: m_pDamageServices (CCSPlayerController_DamageServices*)
            // NetworkVarNames: m_iPing (uint32)
            // NetworkVarNames: m_bHasCommunicationAbuseMute (bool)
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
            // NetworkVarNames: m_vecKills (EKillTypes_t)
            // NetworkVarNames: m_bMvpNoMusic (bool)
            // NetworkVarNames: m_eMvpReason (int)
            // NetworkVarNames: m_iMusicKitID (int)
            // NetworkVarNames: m_iMusicKitMVPs (int)
            // NetworkVarNames: m_iMVPs (int)
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x788; // 
                constexpr std::ptrdiff_t m_pInventoryServices = 0x790; // 
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x798; // 
                constexpr std::ptrdiff_t m_pDamageServices = 0x7A0; // 
                constexpr std::ptrdiff_t m_iPing = 0x7A8; // 
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x7AC; // 
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x7B0; // 
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x7B8; // 
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x7BC; // 
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x7C0; // 
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x7C4; // 
                constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x7C5; // 
                constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x7C8; // 
                constexpr std::ptrdiff_t m_bTeamChanged = 0x7CC; // 
                constexpr std::ptrdiff_t m_bInSwitchTeam = 0x7CD; // 
                constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x7CE; // 
                constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x7CF; // 
                constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x7D0; // 
                constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x7D1; // 
                constexpr std::ptrdiff_t m_szClan = 0x7D8; // 
                constexpr std::ptrdiff_t m_szClanName = 0x7E0; // 
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x800; // 
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x808; // 
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x810; // 
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x818; // 
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x81C; // 
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x820; // 
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x824; // 
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x828; // 
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x82C; // 
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x830; // 
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x834; // 
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x838; // 
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x83C; // 
                constexpr std::ptrdiff_t m_iDraftIndex = 0x868; // 
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x86C; // 
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x870; // 
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x874; // 
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x875; // 
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x876; // 
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x877; // 
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x878; // 
                constexpr std::ptrdiff_t m_bScoreReported = 0x879; // 
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x87C; // 
                constexpr std::ptrdiff_t m_bControllingBot = 0x888; // 
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x889; // 
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x88A; // 
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x88C; // 
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x890; // 
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x894; // 
                constexpr std::ptrdiff_t m_hObserverPawn = 0x898; // 
                constexpr std::ptrdiff_t m_DesiredObserverMode = 0x89C; // 
                constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x8A0; // 
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x8A4; // 
                constexpr std::ptrdiff_t m_iPawnHealth = 0x8A8; // 
                constexpr std::ptrdiff_t m_iPawnArmor = 0x8AC; // 
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x8B0; // 
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x8B1; // 
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x8B2; // 
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x8B4; // 
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x8B8; // 
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x8BC; // 
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x8C0; // 
                constexpr std::ptrdiff_t m_iScore = 0x8C4; // 
                constexpr std::ptrdiff_t m_iRoundScore = 0x8C8; // 
                constexpr std::ptrdiff_t m_iRoundsWon = 0x8CC; // 
                constexpr std::ptrdiff_t m_vecKills = 0x8D0; // 
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x8E8; // 
                constexpr std::ptrdiff_t m_eMvpReason = 0x8EC; // 
                constexpr std::ptrdiff_t m_iMusicKitID = 0x8F0; // 
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x8F4; // 
                constexpr std::ptrdiff_t m_iMVPs = 0x8F8; // 
                constexpr std::ptrdiff_t m_nUpdateCounter = 0x8FC; // 
                constexpr std::ptrdiff_t m_flSmoothedPing = 0x900; // 
                constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xF9A8; // 
                constexpr std::ptrdiff_t m_bShowHints = 0xF9C0; // 
                constexpr std::ptrdiff_t m_iNextTimeCheck = 0xF9C4; // 
                constexpr std::ptrdiff_t m_bJustDidTeamKill = 0xF9C8; // 
                constexpr std::ptrdiff_t m_bPunishForTeamKill = 0xF9C9; // 
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0xF9CA; // 
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0xF9CB; // 
                constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0xF9D0; // 
                constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0xF9D8; // 
                constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF9DC; // 
                constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0xF9E0; // 
                constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0xF9E4; // 
            }
            // Parent: IEconItemInterface
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
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38; // 
                constexpr std::ptrdiff_t m_iEntityQuality = 0x3C; // 
                constexpr std::ptrdiff_t m_iEntityLevel = 0x40; // 
                constexpr std::ptrdiff_t m_iItemID = 0x48; // 
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x50; // 
                constexpr std::ptrdiff_t m_iItemIDLow = 0x54; // 
                constexpr std::ptrdiff_t m_iAccountID = 0x58; // 
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x5C; // 
                constexpr std::ptrdiff_t m_bInitialized = 0x68; // 
                constexpr std::ptrdiff_t m_AttributeList = 0x70; // 
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xD0; // 
                constexpr std::ptrdiff_t m_szCustomName = 0x130; // 
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1D1; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetA {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAWP {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 25
            //
            // Metadata:
            // MNetworkUserGroupProxy
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
            namespace CBasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xA80; // 
                constexpr std::ptrdiff_t m_pItemServices = 0xA88; // 
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xA90; // 
                constexpr std::ptrdiff_t m_pObserverServices = 0xA98; // 
                constexpr std::ptrdiff_t m_pWaterServices = 0xAA0; // 
                constexpr std::ptrdiff_t m_pUseServices = 0xAA8; // 
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xAB0; // 
                constexpr std::ptrdiff_t m_pCameraServices = 0xAB8; // 
                constexpr std::ptrdiff_t m_pMovementServices = 0xAC0; // 
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xAD0; // 
                constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xB20; // 
                constexpr std::ptrdiff_t v_angle = 0xB24; // 
                constexpr std::ptrdiff_t v_anglePrevious = 0xB30; // 
                constexpr std::ptrdiff_t m_iHideHUD = 0xB3C; // 
                constexpr std::ptrdiff_t m_skybox3d = 0xB40; // 
                constexpr std::ptrdiff_t m_fTimeLastHurt = 0xBD0; // 
                constexpr std::ptrdiff_t m_flDeathTime = 0xBD4; // 
                constexpr std::ptrdiff_t m_fNextSuicideTime = 0xBD8; // 
                constexpr std::ptrdiff_t m_fInitHUD = 0xBDC; // 
                constexpr std::ptrdiff_t m_pExpresser = 0xBE0; // 
                constexpr std::ptrdiff_t m_hController = 0xBE8; // 
                constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xBF0; // 
                constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xBF4; // 
                constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xBF8; // 
                constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xC00; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: CBaseTrigger
            // Field count: 16
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
            // NetworkVarNames: m_flRate (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            namespace CPostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x930; // 
                constexpr std::ptrdiff_t m_flFadeDuration = 0x938; // 
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x93C; // 
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x940; // 
                constexpr std::ptrdiff_t m_flMinExposure = 0x944; // 
                constexpr std::ptrdiff_t m_flMaxExposure = 0x948; // 
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x94C; // 
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x950; // 
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x954; // 
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x958; // 
                constexpr std::ptrdiff_t m_bMaster = 0x95C; // 
                constexpr std::ptrdiff_t m_bExposureControl = 0x95D; // 
                constexpr std::ptrdiff_t m_flRate = 0x960; // 
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x964; // 
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x968; // 
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x96C; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace CSpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x750; // 
                constexpr std::ptrdiff_t m_Radius = 0x754; // 
                constexpr std::ptrdiff_t m_vSpotlightDir = 0x758; // 
                constexpr std::ptrdiff_t m_vSpotlightOrg = 0x764; // 
            }
            // Parent: CBaseModelEntity
            // Field count: 1
            namespace CRuleEntity {
                constexpr std::ptrdiff_t m_iszMaster = 0x750; // 
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CSensorGrenade {
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
                constexpr std::ptrdiff_t m_nVariant = 0x4E0; // 
                constexpr std::ptrdiff_t m_nRandom = 0x4E4; // 
                constexpr std::ptrdiff_t m_nOrdinal = 0x4E8; // 
                constexpr std::ptrdiff_t m_sWeaponName = 0x4F0; // 
                constexpr std::ptrdiff_t m_xuid = 0x4F8; // 
                constexpr std::ptrdiff_t m_agentItem = 0x500; // 
                constexpr std::ptrdiff_t m_glovesItem = 0x778; // 
                constexpr std::ptrdiff_t m_weaponItem = 0x9F0; // 
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerDetectExplosion {
                constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x948; // 
            }
            // Parent: CLogicalEntity
            // Field count: 1
            namespace CSoundStackSave {
                constexpr std::ptrdiff_t m_iszStackName = 0x4E0; // 
            }
            // Parent: CPhysConstraint
            // Field count: 18
            namespace CPhysHinge {
                constexpr std::ptrdiff_t m_soundInfo = 0x560; // 
                constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x5E8; // 
                constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x610; // 
                constexpr std::ptrdiff_t m_bAtMinLimit = 0x638; // 
                constexpr std::ptrdiff_t m_bAtMaxLimit = 0x639; // 
                constexpr std::ptrdiff_t m_hinge = 0x63C; // 
                constexpr std::ptrdiff_t m_hingeFriction = 0x67C; // 
                constexpr std::ptrdiff_t m_systemLoadScale = 0x680; // 
                constexpr std::ptrdiff_t m_bIsAxisLocal = 0x684; // 
                constexpr std::ptrdiff_t m_flMinRotation = 0x688; // 
                constexpr std::ptrdiff_t m_flMaxRotation = 0x68C; // 
                constexpr std::ptrdiff_t m_flInitialRotation = 0x690; // 
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x694; // 
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x698; // 
                constexpr std::ptrdiff_t m_flAngleSpeed = 0x69C; // 
                constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x6A0; // 
                constexpr std::ptrdiff_t m_OnStartMoving = 0x6A8; // 
                constexpr std::ptrdiff_t m_OnStopMoving = 0x6D0; // 
            }
            // Parent: CGameRules
            // Field count: 1
            namespace CSingleplayRules {
                constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0xC0; // 
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x538; // 
            }
            // Parent: CEconEntity
            // Field count: 2
            namespace CEconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0xCE8; // 
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0xCEC; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_ItemServices {
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
                constexpr std::ptrdiff_t m_szConveyorModels = 0x750; // 
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x758; // 
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x75C; // 
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x768; // 
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x774; // 
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x778; // 
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x77C; // 
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x780; // 
                constexpr std::ptrdiff_t m_hConveyorModels = 0x788; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMag7 {
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CMathCounter {
                constexpr std::ptrdiff_t m_flMin = 0x4E0; // 
                constexpr std::ptrdiff_t m_flMax = 0x4E4; // 
                constexpr std::ptrdiff_t m_bHitMin = 0x4E8; // 
                constexpr std::ptrdiff_t m_bHitMax = 0x4E9; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x4EA; // 
                constexpr std::ptrdiff_t m_OutValue = 0x4F0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnGetValue = 0x518; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnHitMin = 0x540; // 
                constexpr std::ptrdiff_t m_OnHitMax = 0x568; // 
                constexpr std::ptrdiff_t m_OnChangedFromMin = 0x590; // 
                constexpr std::ptrdiff_t m_OnChangedFromMax = 0x5B8; // 
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
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4E0; // 
                constexpr std::ptrdiff_t m_worldName = 0x508; // 
                constexpr std::ptrdiff_t m_layerName = 0x510; // 
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x518; // 
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x519; // 
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x51A; // 
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x51C; // 
            }
            // Parent: CBarnLight
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace CRectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xA70; // 
            }
            // Parent: CCSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace CCSGO_TeamSelectTerroristPosition {
            }
            // Parent: CBaseDoor
            // Field count: 1
            namespace CRotDoor {
                constexpr std::ptrdiff_t m_bSolidBsp = 0x9D8; // 
            }
            // Parent: CLogicalEntity
            // Field count: 4
            namespace CLogicLineToEntity {
                constexpr std::ptrdiff_t m_Line = 0x4E0; // 
                constexpr std::ptrdiff_t m_SourceName = 0x508; // 
                constexpr std::ptrdiff_t m_StartEntity = 0x510; // 
                constexpr std::ptrdiff_t m_EndEntity = 0x514; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            namespace CGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // 
                constexpr std::ptrdiff_t m_szQuestName = 0x30; // 
                constexpr std::ptrdiff_t m_nQuestPhase = 0xB0; // 
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xB4; // 
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xB8; // 
                constexpr std::ptrdiff_t m_bGamePaused = 0xBC; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // 
                constexpr std::ptrdiff_t m_pEntity = 0x10; // 
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // 
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // 
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
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x560; // 
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x568; // 
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x56C; // 
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x570; // 
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x57C; // 
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x588; // 
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x58C; // 
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x590; // 
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x594; // 
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x598; // 
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x59C; // 
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x5A8; // 
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x5AC; // 
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x5AD; // 
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x5AE; // 
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x5AF; // 
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x5B0; // 
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x5C0; // 
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x28; // 
                constexpr std::ptrdiff_t unSlot = 0x2A; // 
                constexpr std::ptrdiff_t unItemDefIdx = 0x2C; // 
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
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // 
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // 
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // 
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // 
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // 
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
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x4E0; // 
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4E4; // 
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4E8; // 
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4EC; // 
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4F0; // 
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4F4; // 
                constexpr std::ptrdiff_t m_flMaxWeight = 0x4F8; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4FC; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4FD; // 
                constexpr std::ptrdiff_t m_bMaster = 0x4FE; // 
                constexpr std::ptrdiff_t m_bClientSide = 0x4FF; // 
                constexpr std::ptrdiff_t m_bExclusive = 0x500; // 
                constexpr std::ptrdiff_t m_MinFalloff = 0x504; // 
                constexpr std::ptrdiff_t m_MaxFalloff = 0x508; // 
                constexpr std::ptrdiff_t m_flCurWeight = 0x50C; // 
                constexpr std::ptrdiff_t m_netlookupFilename = 0x510; // 
                constexpr std::ptrdiff_t m_lookupFilename = 0x710; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponElite {
            }
            // Parent: CSoundEventEntity
            // Field count: 0
            namespace CSoundEventEntityAlias_snd_event_point {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBaseEntityAPI {
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
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xF40; // 
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0xF4C; // 
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0xF58; // 
                constexpr std::ptrdiff_t m_bStartedArming = 0xF59; // 
                constexpr std::ptrdiff_t m_fArmedTime = 0xF5C; // 
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0xF60; // 
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0xF61; // 
                constexpr std::ptrdiff_t m_entitySpottedState = 0xF68; // 
                constexpr std::ptrdiff_t m_nSpotRules = 0xF80; // 
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0xF84; // 
                constexpr std::ptrdiff_t m_bBombPlanted = 0xF8B; // 
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 6
            namespace CPointPrefab {
                constexpr std::ptrdiff_t m_targetMapName = 0x4E0; // 
                constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4E8; // 
                constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x4F0; // 
                constexpr std::ptrdiff_t m_fixupNames = 0x4F8; // 
                constexpr std::ptrdiff_t m_bLoadDynamic = 0x4F9; // 
                constexpr std::ptrdiff_t m_associatedRelayEntity = 0x4FC; // 
            }
            // Parent: CBaseToggle
            // Field count: 27
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7E0; // 
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7EC; // 
                constexpr std::ptrdiff_t m_ls = 0x7F8; // 
                constexpr std::ptrdiff_t m_bForceClosed = 0x818; // 
                constexpr std::ptrdiff_t m_bDoorGroup = 0x819; // 
                constexpr std::ptrdiff_t m_bLocked = 0x81A; // 
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x81B; // 
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x81C; // 
                constexpr std::ptrdiff_t m_flBlockDamage = 0x820; // 
                constexpr std::ptrdiff_t m_NoiseMoving = 0x828; // 
                constexpr std::ptrdiff_t m_NoiseArrived = 0x830; // 
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x838; // 
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x840; // 
                constexpr std::ptrdiff_t m_ChainTarget = 0x848; // 
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x850; // 
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x878; // 
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x8A0; // 
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x8C8; // 
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x8F0; // 
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x918; // 
                constexpr std::ptrdiff_t m_OnClose = 0x940; // 
                constexpr std::ptrdiff_t m_OnOpen = 0x968; // 
                constexpr std::ptrdiff_t m_OnLockedUse = 0x990; // 
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0x9B8; // 
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x9D0; // 
                constexpr std::ptrdiff_t m_isChaining = 0x9D1; // 
                constexpr std::ptrdiff_t m_bIsUsable = 0x9D2; // 
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // 
                constexpr std::ptrdiff_t m_pOwner = 0x30; // 
                constexpr std::ptrdiff_t m_pParent = 0x38; // 
                constexpr std::ptrdiff_t m_pChild = 0x40; // 
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // 
                constexpr std::ptrdiff_t m_hParent = 0x78; // 
                constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xC0; // 
                constexpr std::ptrdiff_t m_flScale = 0xCC; // 
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0; // 
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC; // 
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8; // 
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xEC; // 
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xEE; // 
                constexpr std::ptrdiff_t m_bDormant = 0xEF; // 
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xF0; // 
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // 
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // 
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // 
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // 
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // 
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // 
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // 
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // 
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // 
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xF3; // 
                constexpr std::ptrdiff_t m_nHierarchyType = 0xF4; // 
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5; // 
                constexpr std::ptrdiff_t m_name = 0xF8; // 
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x138; // 
                constexpr std::ptrdiff_t m_flZOffset = 0x13C; // 
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x140; // 
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x144; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CTablet {
            }
            // Parent: CPointEntity
            // Field count: 7
            namespace CTankTrainAI {
                constexpr std::ptrdiff_t m_hTrain = 0x4E0; // 
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4E4; // 
                constexpr std::ptrdiff_t m_soundPlaying = 0x4E8; // 
                constexpr std::ptrdiff_t m_startSoundName = 0x500; // 
                constexpr std::ptrdiff_t m_engineSoundName = 0x508; // 
                constexpr std::ptrdiff_t m_movementSoundName = 0x510; // 
                constexpr std::ptrdiff_t m_targetEntityName = 0x518; // 
            }
            // Parent: CBaseEntity
            // Field count: 4
            namespace CGameGibManager {
                constexpr std::ptrdiff_t m_bAllowNewGibs = 0x500; // 
                constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x504; // 
                constexpr std::ptrdiff_t m_iMaxPieces = 0x508; // 
                constexpr std::ptrdiff_t m_iLastFrame = 0x50C; // 
            }
            // Parent: CBasePulseGraphInstance
            // Field count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSPointScript {
                constexpr std::ptrdiff_t m_pParent = 0xF8; // 
            }
            // Parent: CRagdollProp
            // Field count: 0
            namespace CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCSSprite {
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CFuncPropRespawnZone {
            }
            // Parent: CServerOnlyPointEntity
            // Field count: 3
            namespace SpawnPoint {
                constexpr std::ptrdiff_t m_iPriority = 0x4E0; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4E4; // 
                constexpr std::ptrdiff_t m_nType = 0x4E8; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSCAR20 {
            }
            // Parent: CBaseGrenade
            // Field count: 0
            namespace CTripWireFireProjectile {
            }
            // Parent: CFuncPlat
            // Field count: 2
            namespace CFuncPlatRot {
                constexpr std::ptrdiff_t m_end = 0x800; // 
                constexpr std::ptrdiff_t m_start = 0x80C; // 
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CEnvSpark {
                constexpr std::ptrdiff_t m_flDelay = 0x4E0; // 
                constexpr std::ptrdiff_t m_nMagnitude = 0x4E4; // 
                constexpr std::ptrdiff_t m_nTrailLength = 0x4E8; // 
                constexpr std::ptrdiff_t m_nType = 0x4EC; // 
                constexpr std::ptrdiff_t m_OnSpark = 0x4F0; // 
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 0
            namespace CCSObserver_ObserverServices {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: CBasePlatTrain
            // Field count: 6
            namespace CFuncTrain {
                constexpr std::ptrdiff_t m_hCurrentTarget = 0x7F8; // 
                constexpr std::ptrdiff_t m_activated = 0x7FC; // 
                constexpr std::ptrdiff_t m_hEnemy = 0x800; // 
                constexpr std::ptrdiff_t m_flBlockDamage = 0x804; // 
                constexpr std::ptrdiff_t m_flNextBlockTime = 0x808; // 
                constexpr std::ptrdiff_t m_iszLastTarget = 0x810; // 
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
                constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xA98; // 
                constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xAC0; // 
                constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xAE8; // 
                constexpr std::ptrdiff_t m_OnRescued = 0xB10; // 
                constexpr std::ptrdiff_t m_entitySpottedState = 0xB38; // 
                constexpr std::ptrdiff_t m_nSpotRules = 0xB50; // 
                constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xB54; // 
                constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xB58; // 
                constexpr std::ptrdiff_t m_bRemove = 0xB5C; // 
                constexpr std::ptrdiff_t m_vel = 0xB60; // 
                constexpr std::ptrdiff_t m_isRescued = 0xB6C; // 
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xB6D; // 
                constexpr std::ptrdiff_t m_nHostageState = 0xB70; // 
                constexpr std::ptrdiff_t m_leader = 0xB74; // 
                constexpr std::ptrdiff_t m_lastLeader = 0xB78; // 
                constexpr std::ptrdiff_t m_reuseTimer = 0xB80; // 
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xB98; // 
                constexpr std::ptrdiff_t m_accel = 0xB9C; // 
                constexpr std::ptrdiff_t m_isRunning = 0xBA8; // 
                constexpr std::ptrdiff_t m_isCrouching = 0xBA9; // 
                constexpr std::ptrdiff_t m_jumpTimer = 0xBB0; // 
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xBC8; // 
                constexpr std::ptrdiff_t m_repathTimer = 0x2BD8; // 
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2BF0; // 
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2C80; // 
                constexpr std::ptrdiff_t m_wiggleTimer = 0x2CA0; // 
                constexpr std::ptrdiff_t m_isAdjusted = 0x2CBC; // 
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2CBD; // 
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x2CC0; // 
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x2CC4; // 
                constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2CC8; // 
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2CD4; // 
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x2CE0; // 
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2CE4; // 
                constexpr std::ptrdiff_t m_flDropStartTime = 0x2CE8; // 
                constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2CEC; // 
                constexpr std::ptrdiff_t m_nPickupEventCount = 0x2CF0; // 
                constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2CF4; // 
                constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2D14; // 
            }
            // Parent: CPointEntity
            // Field count: 13
            namespace CNavLinkAreaEntity {
                constexpr std::ptrdiff_t m_flWidth = 0x4E0; // 
                constexpr std::ptrdiff_t m_vLocatorOffset = 0x4E4; // 
                constexpr std::ptrdiff_t m_qLocatorAnglesOffset = 0x4F0; // 
                constexpr std::ptrdiff_t m_strMovementForward = 0x500; // 
                constexpr std::ptrdiff_t m_strMovementReverse = 0x508; // 
                constexpr std::ptrdiff_t m_nNavLinkIdForward = 0x510; // 
                constexpr std::ptrdiff_t m_nNavLinkIdReverse = 0x514; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x518; // 
                constexpr std::ptrdiff_t m_strFilterName = 0x520; // 
                constexpr std::ptrdiff_t m_hFilter = 0x528; // 
                constexpr std::ptrdiff_t m_OnNavLinkStart = 0x530; // 
                constexpr std::ptrdiff_t m_OnNavLinkFinish = 0x558; // 
                constexpr std::ptrdiff_t m_bIsTerminus = 0x580; // 
            }
            // Parent: CBaseToggle
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace CFuncMoveLinear {
                constexpr std::ptrdiff_t m_authoredPosition = 0x7D0; // 
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7D4; // 
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7E0; // 
                constexpr std::ptrdiff_t m_soundStart = 0x7F0; // 
                constexpr std::ptrdiff_t m_soundStop = 0x7F8; // 
                constexpr std::ptrdiff_t m_currentSound = 0x800; // 
                constexpr std::ptrdiff_t m_flBlockDamage = 0x808; // 
                constexpr std::ptrdiff_t m_flStartPosition = 0x80C; // 
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x818; // 
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x840; // 
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x868; // 
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x869; // 
            }
            // Parent: CBaseEntity
            // Field count: 3
            namespace CCommentaryAuto {
                constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4E0; // 
                constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x508; // 
                constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x530; // 
            }
            // Parent: CPointEntity
            // Field count: 8
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x4E0; // 
                constexpr std::ptrdiff_t m_flBombRadius = 0x4E4; // 
                constexpr std::ptrdiff_t m_iPetPopulation = 0x4E8; // 
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4EC; // 
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4ED; // 
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4F0; // 
                constexpr std::ptrdiff_t m_iHostageCount = 0x4F4; // 
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4F8; // 
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerBombReset {
            }
            // Parent: CEntityInstance
            // Field count: 77
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
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            // NetworkVarNames: m_nBloodType (BloodType)
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // 
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // 
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x240; // 
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x258; // 
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x25C; // 
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x260; // 
                constexpr std::ptrdiff_t m_isSteadyState = 0x270; // 
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x278; // 
                constexpr std::ptrdiff_t m_ResponseContexts = 0x288; // CUtlVector<ResponseContext_t>
                constexpr std::ptrdiff_t m_iszResponseContext = 0x2A0; // 
                constexpr std::ptrdiff_t m_iHealth = 0x2C8; // 
                constexpr std::ptrdiff_t m_iMaxHealth = 0x2CC; // 
                constexpr std::ptrdiff_t m_lifeState = 0x2D0; // 
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2D4; // 
                constexpr std::ptrdiff_t m_bTakesDamage = 0x2D8; // 
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2E0; // 
                constexpr std::ptrdiff_t m_nPlatformType = 0x2E8; // 
                constexpr std::ptrdiff_t m_MoveCollide = 0x2EA; // 
                constexpr std::ptrdiff_t m_MoveType = 0x2EB; // 
                constexpr std::ptrdiff_t m_nActualMoveType = 0x2EC; // 
                constexpr std::ptrdiff_t m_nWaterTouch = 0x2ED; // 
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x2EE; // 
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2EF; // 
                constexpr std::ptrdiff_t m_target = 0x2F0; // 
                constexpr std::ptrdiff_t m_hDamageFilter = 0x2F8; // 
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x300; // 
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x308; // 
                constexpr std::ptrdiff_t m_nSubclassID = 0x30C; // 
                constexpr std::ptrdiff_t m_flAnimTime = 0x318; // 
                constexpr std::ptrdiff_t m_flSimulationTime = 0x31C; // 
                constexpr std::ptrdiff_t m_flCreateTime = 0x320; // 
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x324; // 
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x325; // 
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x328; // 
                constexpr std::ptrdiff_t m_iTeamNum = 0x334; // 
                constexpr std::ptrdiff_t m_iGlobalname = 0x338; // 
                constexpr std::ptrdiff_t m_iSentToClients = 0x340; // 
                constexpr std::ptrdiff_t m_flSpeed = 0x344; // 
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x348; // 
                constexpr std::ptrdiff_t m_spawnflags = 0x350; // 
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x354; // 
                constexpr std::ptrdiff_t m_nSimulationTick = 0x358; // 
                constexpr std::ptrdiff_t m_OnKilled = 0x360; // 
                constexpr std::ptrdiff_t m_fFlags = 0x388; // 
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x38C; // 
                constexpr std::ptrdiff_t m_vecVelocity = 0x398; // 
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3C8; // 
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x3D4; // 
                constexpr std::ptrdiff_t m_pCollision = 0x3D8; // 
                constexpr std::ptrdiff_t m_hEffectEntity = 0x3E0; // 
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x3E4; // 
                constexpr std::ptrdiff_t m_fEffects = 0x3E8; // 
                constexpr std::ptrdiff_t m_hGroundEntity = 0x3EC; // 
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x3F0; // 
                constexpr std::ptrdiff_t m_flFriction = 0x3F4; // 
                constexpr std::ptrdiff_t m_flElasticity = 0x3F8; // 
                constexpr std::ptrdiff_t m_flGravityScale = 0x3FC; // 
                constexpr std::ptrdiff_t m_flTimeScale = 0x400; // 
                constexpr std::ptrdiff_t m_flWaterLevel = 0x404; // 
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x408; // 
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x409; // 
                constexpr std::ptrdiff_t m_nWaterType = 0x40A; // 
                constexpr std::ptrdiff_t m_iEFlags = 0x40C; // 
                constexpr std::ptrdiff_t m_OnUser1 = 0x410; // 
                constexpr std::ptrdiff_t m_OnUser2 = 0x438; // 
                constexpr std::ptrdiff_t m_OnUser3 = 0x460; // 
                constexpr std::ptrdiff_t m_OnUser4 = 0x488; // 
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x4B0; // 
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x4B4; // 
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x4B8; // 
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x4C4; // 
                constexpr std::ptrdiff_t m_bLagCompensate = 0x4C5; // 
                constexpr std::ptrdiff_t m_flOverriddenFriction = 0x4C8; // 
                constexpr std::ptrdiff_t m_pBlocker = 0x4CC; // 
                constexpr std::ptrdiff_t m_flLocalTime = 0x4D0; // 
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4D4; // 
                constexpr std::ptrdiff_t m_nBloodType = 0x4D8; // 
            }
            // Parent: CLogicalEntity
            // Field count: 9
            namespace CLogicMeasureMovement {
                constexpr std::ptrdiff_t m_strMeasureTarget = 0x4E0; // 
                constexpr std::ptrdiff_t m_strMeasureReference = 0x4E8; // 
                constexpr std::ptrdiff_t m_strTargetReference = 0x4F0; // 
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x4F8; // 
                constexpr std::ptrdiff_t m_hMeasureReference = 0x4FC; // 
                constexpr std::ptrdiff_t m_hTarget = 0x500; // 
                constexpr std::ptrdiff_t m_hTargetReference = 0x504; // 
                constexpr std::ptrdiff_t m_flScale = 0x508; // 
                constexpr std::ptrdiff_t m_nMeasureType = 0x50C; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // 
                constexpr std::ptrdiff_t qAngle = 0x34; // 
                constexpr std::ptrdiff_t nIndex = 0x40; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // CNetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // 
            }
        }
    }
}
