// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-02 16:10:48.961749300 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Classes count: 231
        // Enums count: 128
        namespace server_dll {
            // Alignment: 4
            // Members count: 19
            enum class NavAttributeEnum : uint32_t {
                NAV_MESH_AVOID = 0x80,
                NAV_MESH_STAIRS = 0x1000,
                NAV_MESH_NON_ZUP = 0x8000,
                NAV_MESH_SHORT_HEIGHT = 0x10000,
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
            // Members count: 5
            enum class NavDirType : uint32_t {
                NORTH = 0x0,
                EAST = 0x1,
                SOUTH = 0x2,
                WEST = 0x3,
                NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
            };
            // Alignment: 1
            // Members count: 3
            enum class SequenceFinishNotifyState_t : uint8_t {
                eDoNotNotify = 0x0,
                eNotifyWhenFinished = 0x1,
                eNotifyTriggered = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class PointTemplateOwnerSpawnGroupType_t : uint32_t {
                INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
                INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
                INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t {
                CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
                CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class PerformanceMode_t : uint32_t {
                PM_NORMAL = 0x0,
                PM_NO_GIBS = 0x1,
                PM_FULL_GIBS = 0x2,
                PM_REDUCED_GIBS = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class AmmoPosition_t : uint32_t {
                AMMO_POSITION_INVALID = 0xFFFFFFFFFFFFFFFF,
                AMMO_POSITION_PRIMARY = 0x0,
                AMMO_POSITION_SECONDARY = 0x1,
                AMMO_POSITION_COUNT = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class ChatIgnoreType_t : uint32_t {
                CHAT_IGNORE_NONE = 0x0,
                CHAT_IGNORE_ALL = 0x1,
                CHAT_IGNORE_TEAM = 0x2
            };
            // Alignment: 1
            // Members count: 3
            enum class FixAngleSet_t : uint8_t {
                None = 0x0,
                Absolute = 0x1,
                Relative = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class CommandExecMode_t : uint32_t {
                EXEC_MANUAL = 0x0,
                EXEC_LEVELSTART = 0x1,
                EXEC_PERIODIC = 0x2,
                EXEC_MODES_COUNT = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class CommandEntitySpecType_t : uint32_t {
                SPEC_SEARCH = 0x0,
                SPEC_TYPES_COUNT = 0x1
            };
            // Alignment: 4
            // Members count: 43
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
                AE_PULSE_GRAPH = 0x1A,
                AE_PULSE_GRAPH_LOOKAT = 0x1B,
                AE_PULSE_GRAPH_AIMAT = 0x1C,
                AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1D,
                AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1E,
                AE_CL_WEAPON_TRANSITION_INTO_HAND = 0x1F,
                AE_CL_BODYGROUP_SET_TO_CLIP = 0x20,
                AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 0x21,
                AE_SV_SHOW_SILENCER = 0x22,
                AE_SV_ATTACH_SILENCER_COMPLETE = 0x23,
                AE_SV_HIDE_SILENCER = 0x24,
                AE_SV_DETACH_SILENCER_COMPLETE = 0x25,
                AE_CL_EJECT_MAG = 0x26,
                AE_WPN_COMPLETE_RELOAD = 0x27,
                AE_WPN_HEALTHSHOT_INJECT = 0x28,
                AE_CL_C4_SCREEN_TEXT = 0x29,
                AE_GRENADE_THROW_COMPLETE = 0x2A
            };
            // Alignment: 4
            // Members count: 7
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
            // Members count: 3
            enum class ObserverInterpState_t : uint32_t {
                OBSERVER_INTERP_NONE = 0x0,
                OBSERVER_INTERP_TRAVELING = 0x1,
                OBSERVER_INTERP_SETTLING = 0x2
            };
            // Alignment: 4
            // Members count: 27
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
            // Members count: 25
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
            // Alignment: 4
            // Members count: 3
            enum class AmmoFlags_t : uint32_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
                AMMO_FLAG_MAX = 0x2
            };
            // Alignment: 4
            // Members count: 15
            enum class TakeDamageFlags_t : uint32_t {
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
                DMG_LASTDFLAG = 0x400,
                DFLAG_IGNORE_ARMOR = 0x800,
                DFLAG_SUPPRESS_UTILREMOVE = 0x1000
            };
            // Alignment: 4
            // Members count: 24
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
            // Members count: 17
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
            // Members count: 6
            enum class HierarchyType_t : uint32_t {
                HIERARCHY_NONE = 0x0,
                HIERARCHY_BONE_MERGE = 0x1,
                HIERARCHY_ATTACHMENT = 0x2,
                HIERARCHY_ABSORIGIN = 0x3,
                HIERARCHY_BONE = 0x4,
                HIERARCHY_TYPE_COUNT = 0x5
            };
            // Alignment: 4
            // Members count: 3
            enum class CanPlaySequence_t : uint32_t {
                CANNOT_PLAY = 0x0,
                CAN_PLAY_NOW = 0x1,
                CAN_PLAY_ENQUEUED = 0x2
            };
            // Alignment: 4
            // Members count: 6
            enum class ScriptedMoveTo_t : uint32_t {
                CINE_MOVETO_WAIT = 0x0,
                CINE_MOVETO_WALK = 0x1,
                CINE_MOVETO_RUN = 0x2,
                CINE_MOVETO_CUSTOM = 0x3,
                CINE_MOVETO_TELEPORT = 0x4,
                CINE_MOVETO_WAIT_FACING = 0x5
            };
            // Alignment: 4
            // Members count: 4
            enum class ScriptedOnDeath_t : uint32_t {
                SS_ONDEATH_NOT_APPLICABLE = 0xFFFFFFFFFFFFFFFF,
                SS_ONDEATH_UNDEFINED = 0x0,
                SS_ONDEATH_RAGDOLL = 0x1,
                SS_ONDEATH_ANIMATED_DEATH = 0x2
            };
            // Alignment: 4
            // Members count: 7
            enum class IChoreoServices__ScriptState_t : uint32_t {
                SCRIPT_PLAYING = 0x0,
                SCRIPT_WAIT = 0x1,
                SCRIPT_POST_IDLE = 0x2,
                SCRIPT_CLEANUP = 0x3,
                SCRIPT_WALK_TO_MARK = 0x4,
                SCRIPT_RUN_TO_MARK = 0x5,
                SCRIPT_CUSTOM_MOVE_TO_MARK = 0x6
            };
            // Alignment: 4
            // Members count: 7
            enum class IChoreoServices__ChoreoState_t : uint32_t {
                STATE_PRE_SCRIPT = 0x0,
                STATE_WAIT_FOR_SCRIPT = 0x1,
                STATE_WALK_TO_MARK = 0x2,
                STATE_SYNCHRONIZE_SCRIPT = 0x3,
                STATE_PLAY_SCRIPT = 0x4,
                STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
                STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6
            };
            // Alignment: 8
            // Members count: 21
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
            // Members count: 9
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
            // Members count: 6
            enum class ShakeCommand_t : uint32_t {
                SHAKE_START = 0x0,
                SHAKE_STOP = 0x1,
                SHAKE_AMPLITUDE = 0x2,
                SHAKE_FREQUENCY = 0x3,
                SHAKE_START_RUMBLEONLY = 0x4,
                SHAKE_START_NORUMBLE = 0x5
            };
            // Alignment: 4
            // Members count: 5
            enum class TimelineCompression_t : uint32_t {
                TIMELINE_COMPRESSION_SUM = 0x0,
                TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
                TIMELINE_COMPRESSION_AVERAGE = 0x2,
                TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
                TIMELINE_COMPRESSION_TOTAL = 0x4
            };
            // Alignment: 8
            // Members count: 39
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
                OVERLAY_ACTORNAME_BIT = 0x4000000000,
                OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
                OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000
            };
            // Alignment: 1
            // Members count: 14
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
            // Alignment: 1
            // Members count: 6
            enum class MoveCollide_t : uint8_t {
                MOVECOLLIDE_DEFAULT = 0x0,
                MOVECOLLIDE_FLY_BOUNCE = 0x1,
                MOVECOLLIDE_FLY_CUSTOM = 0x2,
                MOVECOLLIDE_FLY_SLIDE = 0x3,
                MOVECOLLIDE_COUNT = 0x4,
                MOVECOLLIDE_MAX_BITS = 0x3
            };
            // Alignment: 1
            // Members count: 9
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
            // Members count: 3
            enum class BrushSolidities_e : uint32_t {
                BRUSHSOLID_TOGGLE = 0x0,
                BRUSHSOLID_NEVER = 0x1,
                BRUSHSOLID_ALWAYS = 0x2
            };
            // Alignment: 1
            // Members count: 13
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
            // Alignment: 1
            // Members count: 20
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
            // Members count: 2
            enum class CRR_Response__ResponseEnum_t : uint32_t {
                MAX_RESPONSE_NAME = 0xC0,
                MAX_RULE_NAME = 0x80
            };
            // Alignment: 4
            // Members count: 3
            enum class LessonPanelLayoutFileTypes_t : uint32_t {
                LAYOUT_HAND_DEFAULT = 0x0,
                LAYOUT_WORLD_DEFAULT = 0x1,
                LAYOUT_CUSTOM = 0x2
            };
            // Alignment: 4
            // Members count: 5
            enum class Touch_t : uint32_t {
                touch_none = 0x0,
                touch_player_only = 0x1,
                touch_npc_only = 0x2,
                touch_player_or_npc = 0x3,
                touch_player_or_npc_or_physicsprop = 0x4
            };
            // Alignment: 4
            // Members count: 4
            enum class ScriptedMoveType_t : uint32_t {
                SCRIPTED_MOVETYPE_NONE = 0x0,
                SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
                SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
                SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class ForcedCrouchState_t : uint32_t {
                FORCEDCROUCH_NONE = 0x0,
                FORCEDCROUCH_CROUCHED = 0x1,
                FORCEDCROUCH_UNCROUCHED = 0x2
            };
            // Alignment: 4
            // Members count: 12
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
            // Members count: 1
            enum class navproperties_t : uint32_t {
                NAV_IGNORE = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class CLogicBranchList__LogicBranchListenerLastState_t : uint32_t {
                LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
                LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
                LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
                LOGIC_BRANCH_LISTENER_MIXED = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class EntFinderMethod_t : uint32_t {
                ENT_FIND_METHOD_NEAREST = 0x0,
                ENT_FIND_METHOD_FARTHEST = 0x1,
                ENT_FIND_METHOD_RANDOM = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class ValueRemapperInputType_t : uint32_t {
                InputType_PlayerShootPosition = 0x0,
                InputType_PlayerShootPositionAroundAxis = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class ValueRemapperOutputType_t : uint32_t {
                OutputType_AnimationCycle = 0x0,
                OutputType_RotationX = 0x1,
                OutputType_RotationY = 0x2,
                OutputType_RotationZ = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class ValueRemapperHapticsType_t : uint32_t {
                HaticsType_Default = 0x0,
                HaticsType_None = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class ValueRemapperMomentumType_t : uint32_t {
                MomentumType_None = 0x0,
                MomentumType_Friction = 0x1,
                MomentumType_SpringTowardSnapValue = 0x2,
                MomentumType_SpringAwayFromSnapValue = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class ValueRemapperRatchetType_t : uint32_t {
                RatchetType_Absolute = 0x0,
                RatchetType_EachEngage = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class PointWorldTextJustifyHorizontal_t : uint32_t {
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class PointWorldTextJustifyVertical_t : uint32_t {
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class PointWorldTextReorientMode_t : uint32_t {
                POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
                POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class doorCheck_e : uint32_t {
                DOOR_CHECK_FORWARD = 0x0,
                DOOR_CHECK_BACKWARD = 0x1,
                DOOR_CHECK_FULL = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class PropDoorRotatingSpawnPos_t : uint32_t {
                DOOR_SPAWN_CLOSED = 0x0,
                DOOR_SPAWN_OPEN_FORWARD = 0x1,
                DOOR_SPAWN_OPEN_BACK = 0x2,
                DOOR_SPAWN_AJAR = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class PropDoorRotatingOpenDirection_e : uint32_t {
                DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
                DOOR_ROTATING_OPEN_FORWARD = 0x1,
                DOOR_ROTATING_OPEN_BACKWARD = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class SceneOnPlayerDeath_t : uint32_t {
                SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
                SCENE_ONPLAYERDEATH_CANCEL = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class ScriptedConflictResponse_t : uint32_t {
                SS_CONFLICT_ENQUEUE = 0x0,
                SS_CONFLICT_INTERRUPT = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class TRAIN_CODE : uint32_t {
                TRAIN_SAFE = 0x0,
                TRAIN_BLOCKING = 0x1,
                TRAIN_FOLLOWING = 0x2
            };
            // Alignment: 4
            // Members count: 5
            enum class NPCFollowFormation_t : uint32_t {
                Default = 0xFFFFFFFFFFFFFFFF,
                CloseCircle = 0x0,
                WideCircle = 0x1,
                MediumCircle = 0x5,
                Sidekick = 0x6
            };
            // Alignment: 4
            // Members count: 3
            enum class NPCLookType_t : uint32_t {
                Chest = 0x0,
                Head = 0x1,
                Eyes = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class SoundEventStartType_t : uint32_t {
                SOUNDEVENT_START_PLAYER = 0x0,
                SOUNDEVENT_START_WORLD = 0x1,
                SOUNDEVENT_START_ENTITY = 0x2
            };
            // Alignment: 4
            // Members count: 8
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
            // Members count: 2
            enum class FuncDoorSpawnPos_t : uint32_t {
                FUNC_DOOR_SPAWN_CLOSED = 0x0,
                FUNC_DOOR_SPAWN_OPEN = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class filter_t : uint32_t {
                FILTER_AND = 0x0,
                FILTER_OR = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class Explosions : uint32_t {
                expRandom = 0x0,
                expDirected = 0x1,
                expUsePrecise = 0x2
            };
            // Alignment: 4
            // Members count: 12
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
            // Members count: 3
            enum class EOverrideBlockLOS_t : uint32_t {
                BLOCK_LOS_DEFAULT = 0x0,
                BLOCK_LOS_FORCE_FALSE = 0x1,
                BLOCK_LOS_FORCE_TRUE = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class MoveLinearAuthoredPos_t : uint32_t {
                MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
                MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
                MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class TrackOrientationType_t : uint32_t {
                TrackOrientation_Fixed = 0x0,
                TrackOrientation_FacePath = 0x1,
                TrackOrientation_FacePathAngles = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint32_t {
                kMIN_THRESHOLD = 0x0,
                kMIN_FULL = 0x1,
                kHIGHWATER = 0x2
            };
            // Alignment: 4
            // Members count: 23
            enum class SoundFlags_t : uint32_t {
                SOUND_NONE = 0x0,
                SOUND_COMBAT = 0x1,
                SOUND_WORLD = 0x2,
                SOUND_PLAYER = 0x4,
                SOUND_DANGER = 0x8,
                SOUND_BULLET_IMPACT = 0x10,
                SOUND_THUMPER = 0x20,
                SOUND_PHYSICS_DANGER = 0x40,
                SOUND_MOVE_AWAY = 0x80,
                SOUND_PLAYER_VEHICLE = 0x100,
                SOUND_GLASS_BREAK = 0x200,
                SOUND_PHYSICS_OBJECT = 0x400,
                SOUND_CONTEXT_GUNFIRE = 0x100000,
                SOUND_CONTEXT_COMBINE_ONLY = 0x200000,
                SOUND_CONTEXT_REACT_TO_SOURCE = 0x400000,
                SOUND_CONTEXT_EXPLOSION = 0x800000,
                SOUND_CONTEXT_EXCLUDE_COMBINE = 0x1000000,
                SOUND_CONTEXT_DANGER_APPROACH = 0x2000000,
                SOUND_CONTEXT_ALLIES_ONLY = 0x4000000,
                SOUND_CONTEXT_PANIC_NPCS = 0x8000000,
                ALL_CONTEXTS = 0xFFFFFFFFFFF00000,
                ALL_SCENTS = 0x0,
                ALL_SOUNDS = 0xFFFFF
            };
            // Alignment: 4
            // Members count: 3
            enum class TrainVelocityType_t : uint32_t {
                TrainVelocity_Instantaneous = 0x0,
                TrainVelocity_LinearBlend = 0x1,
                TrainVelocity_EaseInEaseOut = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class TrainOrientationType_t : uint32_t {
                TrainOrientation_Fixed = 0x0,
                TrainOrientation_AtPathTracks = 0x1,
                TrainOrientation_LinearBlend = 0x2,
                TrainOrientation_EaseInEaseOut = 0x3
            };
            // Alignment: 4
            // Members count: 7
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
            // Members count: 4
            enum class BeamClipStyle_t : uint32_t {
                kNOCLIP = 0x0,
                kGEOCLIP = 0x1,
                kMODELCLIP = 0x2,
                kBEAMCLIPSTYLE_NUMBITS = 0x2
            };
            // Alignment: 1
            // Members count: 10
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
            // Alignment: 1
            // Members count: 2
            enum class ShatterPanelMode : uint8_t {
                SHATTER_GLASS = 0x0,
                SHATTER_DRYWALL = 0x1
            };
            // Alignment: 1
            // Members count: 5
            enum class ShatterDamageCause : uint8_t {
                SHATTERDAMAGE_BULLET = 0x0,
                SHATTERDAMAGE_MELEE = 0x1,
                SHATTERDAMAGE_THROWN = 0x2,
                SHATTERDAMAGE_SCRIPT = 0x3,
                SHATTERDAMAGE_EXPLOSIVE = 0x4
            };
            // Alignment: 1
            // Members count: 5
            enum class ShatterGlassStressType : uint8_t {
                SHATTERGLASS_BLUNT = 0x0,
                SHATTERGLASS_BALLISTIC = 0x1,
                SHATTERGLASS_PULSE = 0x2,
                SHATTERDRYWALL_CHUNKS = 0x3,
                SHATTERGLASS_EXPLOSIVE = 0x4
            };
            // Alignment: 1
            // Members count: 3
            enum class OnFrame : uint8_t {
                ONFRAME_UNKNOWN = 0x0,
                ONFRAME_TRUE = 0x1,
                ONFRAME_FALSE = 0x2
            };
            // Alignment: 1
            // Members count: 2
            enum class ShardSolid_t : uint8_t {
                SHARD_SOLID = 0x0,
                SHARD_DEBRIS = 0x1
            };
            // Alignment: 4
            // Members count: 5
            enum class AnimLoopMode_t : uint32_t {
                ANIM_LOOP_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
                ANIM_LOOP_MODE_LOOPING = 0x1,
                ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
                ANIM_LOOP_MODE_COUNT = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class EntitySubclassScope_t : uint32_t {
                SUBCLASS_SCOPE_NONE = 0xFFFFFFFFFFFFFFFF,
                SUBCLASS_SCOPE_PRECIPITATION = 0x0,
                SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
                SUBCLASS_SCOPE_COUNT = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class SubclassVDataChangeType_t : uint32_t {
                SUBCLASS_VDATA_CREATED = 0x0,
                SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
                SUBCLASS_VDATA_RELOADED = 0x2
            };
            // Alignment: 4
            // Members count: 7
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
            // Members count: 3
            enum class WeaponSwitchReason_t : uint32_t {
                eDrawn = 0x0,
                eEquipped = 0x1,
                eUserInitiatedSwitchToLast = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class WeaponAttackType_t : uint32_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                ePrimary = 0x0,
                eSecondary = 0x1,
                eCount = 0x2
            };
            // Alignment: 4
            // Members count: 35
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
            // Alignment: 1
            // Members count: 9
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
            // Alignment: 4
            // Members count: 5
            enum class EntityDisolveType_t : uint32_t {
                ENTITY_DISSOLVE_INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_DISSOLVE_NORMAL = 0x0,
                ENTITY_DISSOLVE_ELECTRICAL = 0x1,
                ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
                ENTITY_DISSOLVE_CORE = 0x3
            };
            // Alignment: 4
            // Members count: 14
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
            // Alignment: 1
            // Members count: 7
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
            // Members count: 5
            enum class DoorState_t : uint32_t {
                DOOR_STATE_CLOSED = 0x0,
                DOOR_STATE_OPENING = 0x1,
                DOOR_STATE_OPEN = 0x2,
                DOOR_STATE_CLOSING = 0x3,
                DOOR_STATE_AJAR = 0x4
            };
            // Alignment: 4
            // Members count: 2
            enum class ShadowType_t : uint32_t {
                SHADOWS_NONE = 0x0,
                SHADOWS_SIMPLE = 0x1
            };
            // Alignment: 4
            // Members count: 10
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
            // Members count: 10
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
            // Members count: 6
            enum class LatchDirtyPermission_t : uint32_t {
                LATCH_DIRTY_DISALLOW = 0x0,
                LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
                LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
                LATCH_DIRTY_PREDICTION = 0x3,
                LATCH_DIRTY_FRAMESIMULATE = 0x4,
                LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
            };
            // Alignment: 4
            // Members count: 5
            enum class LifeState_t : uint32_t {
                LIFE_ALIVE = 0x0,
                LIFE_DYING = 0x1,
                LIFE_DEAD = 0x2,
                LIFE_RESPAWNABLE = 0x3,
                LIFE_RESPAWNING = 0x4
            };
            // Alignment: 4
            // Members count: 5
            enum class StanceType_t : uint32_t {
                STANCE_CURRENT = 0xFFFFFFFFFFFFFFFF,
                STANCE_DEFAULT = 0x0,
                STANCE_CROUCHING = 0x1,
                STANCE_PRONE = 0x2,
                NUM_STANCES = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class ModifyDamageReturn_t : uint32_t {
                CONTINUE_TO_APPLY_DAMAGE = 0x0,
                ABORT_DO_NOT_APPLY_DAMAGE = 0x1
            };
            // Alignment: 1
            // Members count: 3
            enum class BeginDeathLifeStateTransition_t : uint8_t {
                NO_CHANGE_IN_LIFESTATE = 0x0,
                TRANSITION_TO_LIFESTATE_DYING = 0x1,
                TRANSITION_TO_LIFESTATE_DEAD = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class WorldTextPanelHorizontalAlign_t : uint32_t {
                WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
                WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class WorldTextPanelVerticalAlign_t : uint32_t {
                WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
                WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class WorldTextPanelOrientation_t : uint32_t {
                WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
                WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
                WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class attributeprovidertypes_t : uint32_t {
                PROVIDER_GENERIC = 0x0,
                PROVIDER_WEAPON = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class SpawnPointCoopEnemy__BotDefaultBehavior_t : uint32_t {
                DEFEND_AREA = 0x0,
                HUNT = 0x1,
                CHARGE_ENEMY = 0x2,
                DEFEND_INVESTIGATE = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class MoveMountingAmount_t : uint32_t {
                MOVE_MOUNT_NONE = 0x0,
                MOVE_MOUNT_LOW = 0x1,
                MOVE_MOUNT_HIGH = 0x2,
                MOVE_MOUNT_MAXCOUNT = 0x3
            };
            // Alignment: 4
            // Members count: 10
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
            // Members count: 18
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
            // Members count: 8
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
            // Members count: 13
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
            // Members count: 74
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
                LOADOUT_SLOT_PET = 0x27,
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
            // Alignment: 1
            // Members count: 8
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
            // Members count: 9
            enum class PreviewCharacterMode : uint32_t {
                DIORAMA = 0x0,
                MAIN_MENU = 0x1,
                BUY_MENU = 0x2,
                TEAM_SELECT = 0x3,
                END_OF_MATCH = 0x4,
                INVENTORY_INSPECT = 0x5,
                WALKING = 0x6,
                TEAM_INTRO = 0x7,
                WINGMAN_INTRO = 0x8
            };
            // Alignment: 4
            // Members count: 6
            enum class PreviewWeaponState : uint32_t {
                DROPPED = 0x0,
                HOLSTERED = 0x1,
                DEPLOYED = 0x2,
                PLANTED = 0x3,
                INSPECT = 0x4,
                ICON = 0x5
            };
            // Alignment: 4
            // Members count: 23
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
            // Members count: 20
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
            // Members count: 7
            enum class CSWeaponCategory : uint32_t {
                WEAPONCATEGORY_OTHER = 0x0,
                WEAPONCATEGORY_MELEE = 0x1,
                WEAPONCATEGORY_SECONDARY = 0x2,
                WEAPONCATEGORY_SMG = 0x3,
                WEAPONCATEGORY_RIFLE = 0x4,
                WEAPONCATEGORY_HEAVY = 0x5,
                WEAPONCATEGORY_COUNT = 0x6
            };
            // Alignment: 4
            // Members count: 3
            enum class CSWeaponSilencerType : uint32_t {
                WEAPONSILENCER_NONE = 0x0,
                WEAPONSILENCER_DETACHABLE = 0x1,
                WEAPONSILENCER_INTEGRATED = 0x2
            };
            // Alignment: 4
            // Members count: 24
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
            // Alignment: 4
            // Members count: 5
            enum class MedalRank_t : uint32_t {
                MEDAL_RANK_NONE = 0x0,
                MEDAL_RANK_BRONZE = 0x1,
                MEDAL_RANK_SILVER = 0x2,
                MEDAL_RANK_GOLD = 0x3,
                MEDAL_RANK_COUNT = 0x4
            };
            // Alignment: 4
            // Members count: 3
            enum class CSWeaponState_t : uint32_t {
                WEAPON_NOT_CARRIED = 0x0,
                WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
                WEAPON_IS_ACTIVE = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class CSWeaponMode : uint32_t {
                Primary_Mode = 0x0,
                Secondary_Mode = 0x1,
                WeaponMode_MAX = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class C4LightEffect_t : uint32_t {
                eLightEffectNone = 0x0,
                eLightEffectDropped = 0x1,
                eLightEffectThirdPersonHeld = 0x2
            };
            // Alignment: 4
            // Members count: 17
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
            // Members count: 7
            enum class ChickenActivity : uint32_t {
                IDLE = 0x0,
                WALK = 0x1,
                RUN = 0x2,
                HOP = 0x3,
                JUMP = 0x4,
                GLIDE = 0x5,
                LAND = 0x6
            };
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
            }
            // Parent: None
            // Fields count: 11
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
                constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
                constexpr std::ptrdiff_t __m_pChainEntity = 0x1A0; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
                constexpr std::ptrdiff_t __m_pChainEntity = 0x430; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
            }
            // Parent: None
            // Fields count: 67
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
                constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x85; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x89; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x90; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x94; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x98; // float32
                constexpr std::ptrdiff_t m_flRange = 0x9C; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0xA4; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0xA8; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0xAC; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xB0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xB4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xC0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xC4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xC8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xCC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xD0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xD4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xD8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xDC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xE0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xE4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xF0; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xF4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xF8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xFC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x100; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x104; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x108; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x10C; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x110; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x114; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x118; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x11C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x120; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x124; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x128; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x12C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x130; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x134; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x138; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x13C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x140; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x144; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x145; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x146; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x148; // 
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x154; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x160; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x16C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x178; // 
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x184; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x188; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x18C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x190; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x194; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x198; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x19C; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1A0; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x1A1; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1A4; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1A8; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1AC; // float32
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1C0; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkillDamage {
                constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x10; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRemapFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
            }
            // Parent: None
            // Fields count: 3
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
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CommandToolCommand_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_bOpened = 0x1; // bool
                constexpr std::ptrdiff_t m_InternalId = 0x4; // uint32
                constexpr std::ptrdiff_t m_ShortName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ExecMode = 0x10; // CommandExecMode_t
                constexpr std::ptrdiff_t m_SpawnGroup = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_PeriodicExecDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_SpecType = 0x24; // CommandEntitySpecType_t
                constexpr std::ptrdiff_t m_EntitySpec = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_Commands = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_SetDebugBits = 0x38; // DebugOverlayBits_t
                constexpr std::ptrdiff_t m_ClearDebugBits = 0x40; // DebugOverlayBits_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CDynamicPropAPI {
            }
            // Parent: None
            // Fields count: 5
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
            // Parent: None
            // Fields count: 12
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
            // Fields count: 15
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
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // 
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
            }
            // Parent: CPlayer_MovementServices
            // Fields count: 14
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
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // 
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x210; // int32
                constexpr std::ptrdiff_t m_iTargetVolume = 0x214; // int32
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x218; // 
            }
            // Parent: None
            // Fields count: 4
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
            // Parent: None
            // Fields count: 5
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
            // Parent: None
            // Fields count: 5
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
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x460; // CBaseAnimGraphController
                constexpr std::ptrdiff_t __m_pChainEntity = 0x950; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 32
            //
            // Metadata:
            // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
            // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
            // NetworkVarNames: m_angRotation (QAngle)
            // NetworkVarNames: m_flScale (float)
            // NetworkVarNames: m_name (CUtlStringToken)
            // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // 
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
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x130; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x134; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x138; // 
            }
            // Parent: None
            // Fields count: 8
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
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x202; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x203; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x204; // int8
            }
            // Parent: CGameSceneNode
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x370; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x371; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x372; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x374; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x378; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 3
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
            // Parent: IntervalTimer
            // Fields count: 7
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
            // Fields count: 24
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
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            namespace CFootstepTableHandle {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBaseEntityAPI {
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveData {
                constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // 
                constexpr std::ptrdiff_t m_vDest = 0xC; // 
                constexpr std::ptrdiff_t m_vSrc = 0x18; // 
                constexpr std::ptrdiff_t m_angSrc = 0x24; // QAngle
                constexpr std::ptrdiff_t m_angDst = 0x30; // QAngle
                constexpr std::ptrdiff_t m_angCurrent = 0x3C; // QAngle
                constexpr std::ptrdiff_t m_flAngRate = 0x48; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x4C; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t m_bActive = 0x54; // bool
                constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x55; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x56; // bool
                constexpr std::ptrdiff_t m_nType = 0x58; // ScriptedMoveType_t
                constexpr std::ptrdiff_t m_bSuccess = 0x5C; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x60; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x64; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_ServerEntity {
                constexpr std::ptrdiff_t m_pComponent = 0xD8; // CPulseGraphComponentBase*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_SoundEventStart {
                constexpr std::ptrdiff_t m_Type = 0x48; // SoundEventStartType_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseServerFuncs_Sounds {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_PlaySceneBase {
                constexpr std::ptrdiff_t m_OnFinished = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_Triggers = 0x68; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseScriptedSequenceData_t {
                constexpr std::ptrdiff_t m_nActorID = 0x0; // int32
                constexpr std::ptrdiff_t m_szPreIdleSequence = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_szEntrySequence = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_szSequence = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_szExitSequence = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x28; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x29; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x2A; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x2B; // bool
            }
            // Parent: CEntityInstance
            // Fields count: 75
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
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_bIsPlatform (bool)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_vecVelocity (CNetworkVelocityVector)
            // NetworkVarNames: m_vecBaseVelocity (Vector)
            // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_flWaterLevel (float)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x230; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x248; // int32
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x24C; // GameTick_t
                constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x250; // GameTick_t
                constexpr std::ptrdiff_t m_isSteadyState = 0x260; // CBitVec<64>
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x268; // float32
                constexpr std::ptrdiff_t m_ResponseContexts = 0x278; // CUtlVector<ResponseContext_t>
                constexpr std::ptrdiff_t m_iszResponseContext = 0x290; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iHealth = 0x2B8; // int32
                constexpr std::ptrdiff_t m_iMaxHealth = 0x2BC; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x2C0; // uint8
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2C4; // float32
                constexpr std::ptrdiff_t m_bTakesDamage = 0x2C8; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2CC; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_bIsPlatform = 0x2D0; // bool
                constexpr std::ptrdiff_t m_MoveCollide = 0x2D2; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x2D3; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x2D4; // MoveType_t
                constexpr std::ptrdiff_t m_nWaterTouch = 0x2D5; // uint8
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x2D6; // uint8
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2D7; // bool
                constexpr std::ptrdiff_t m_target = 0x2D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hDamageFilter = 0x2E0; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x2E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x2F0; // float32
                constexpr std::ptrdiff_t m_nSubclassID = 0x2F4; // CUtlStringToken
                constexpr std::ptrdiff_t m_flAnimTime = 0x300; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x304; // float32
                constexpr std::ptrdiff_t m_flCreateTime = 0x308; // GameTime_t
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x30C; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x30D; // uint8
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x310; // 
                constexpr std::ptrdiff_t m_iTeamNum = 0x31C; // uint8
                constexpr std::ptrdiff_t m_iGlobalname = 0x320; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iSentToClients = 0x328; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x32C; // float32
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x330; // CUtlString
                constexpr std::ptrdiff_t m_spawnflags = 0x338; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x33C; // GameTick_t
                constexpr std::ptrdiff_t m_nSimulationTick = 0x340; // int32
                constexpr std::ptrdiff_t m_OnKilled = 0x348; // CEntityIOOutput
                constexpr std::ptrdiff_t m_fFlags = 0x370; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x374; // 
                constexpr std::ptrdiff_t m_vecVelocity = 0x380; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3B0; // 
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x3BC; // int32
                constexpr std::ptrdiff_t m_pCollision = 0x3C0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_hEffectEntity = 0x3C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x3CC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_fEffects = 0x3D0; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x3D4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flFriction = 0x3D8; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x3DC; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x3E0; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x3E4; // float32
                constexpr std::ptrdiff_t m_flWaterLevel = 0x3E8; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x3EC; // bool
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x3ED; // bool
                constexpr std::ptrdiff_t m_nWaterType = 0x3EE; // uint8
                constexpr std::ptrdiff_t m_iEFlags = 0x3F0; // int32
                constexpr std::ptrdiff_t m_OnUser1 = 0x3F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser2 = 0x420; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser3 = 0x448; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUser4 = 0x470; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x498; // int32
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x49C; // GameTime_t
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x4A0; // QAngle
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x4AC; // bool
                constexpr std::ptrdiff_t m_bLagCompensate = 0x4AD; // bool
                constexpr std::ptrdiff_t m_flOverriddenFriction = 0x4B0; // float32
                constexpr std::ptrdiff_t m_pBlocker = 0x4B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flLocalTime = 0x4B8; // float32
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4BC; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 17
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
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4D0; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4D4; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxWeight = 0x4D8; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4DC; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x4DD; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x4DE; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x4DF; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x4E0; // bool
                constexpr std::ptrdiff_t m_MinFalloff = 0x4E4; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x4EC; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x4F0; // char[512]
                constexpr std::ptrdiff_t m_lookupFilename = 0x6F0; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x4C4; // bool
                constexpr std::ptrdiff_t m_flSize = 0x4C8; // float32
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x4CC; // bool
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4D0; // int32
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flLifetime = 0x4D8; // GameTime_t
                constexpr std::ptrdiff_t m_hAttacker = 0x4DC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iDangerSound = 0x4E0; // int32
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4E4; // float32
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x4E8; // int32
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float32)
            // NetworkVarNames: m_nFlags (uint32)
            namespace CBaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flScaleTime = 0x4C8; // float32
                constexpr std::ptrdiff_t m_nFlags = 0x4CC; // uint32
            }
            // Parent: CBaseFire
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace CFireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x4D0; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x4D4; // int32
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace CSkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x4C0; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x550; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x554; // bool
                constexpr std::ptrdiff_t m_pNext = 0x558; // CSkyCamera*
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavLinkAnimgraphVar {
                constexpr std::ptrdiff_t m_strAnimgraphVar = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8; // uint32
            }
            // Parent: None
            // Fields count: 8
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
            // Parent: None
            // Fields count: 17
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
                constexpr std::ptrdiff_t m_vecMins = 0x40; // 
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // 
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // 
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // 
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // 
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // 
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // 
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // 
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 21
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
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x4C4; // float32
            }
            // Parent: None
            // Fields count: 31
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
                constexpr std::ptrdiff_t m_location = 0x2C; // 
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // 
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // 
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // 
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_OnGustStart = 0x70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnGustEnd = 0x98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flVariationTime = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_flSwayTime = 0xC4; // GameTime_t
                constexpr std::ptrdiff_t m_flSimTime = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_flSwitchTime = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0xD0; // float32
                constexpr std::ptrdiff_t m_bGusting = 0xD4; // bool
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0xD8; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0xDC; // float32
                constexpr std::ptrdiff_t m_iEntIndex = 0xE0; // CEntityIndex
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterial (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_ShatterPanelMode (ShatterPanelMode)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
                constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
                constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 11
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
            // Parent: None
            // Fields count: 25
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
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
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
            // Parent: None
            // Fields count: 6
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
                constexpr std::ptrdiff_t origin = 0xC; // 
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Transforms = 0x30; // CNetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace CSoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
                constexpr std::ptrdiff_t m_hSource = 0x4C4; // CEntityHandle
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vLastPosition = 0x528; // 
                constexpr std::ptrdiff_t m_iszStackName = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x540; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x548; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x550; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x554; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
            }
            // Parent: None
            // Fields count: 5
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
            // Fields count: 6
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
            // Parent: CAttributeManager
            // Fields count: 1
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
            // Parent: AmmoTypeInfo_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GameAmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nBuySize = 0x38; // int32
                constexpr std::ptrdiff_t m_nCost = 0x3C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x4C0; // CCSGameRules*
            }
            // Parent: None
            // Fields count: 215
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bServerPaused (bool)
            // NetworkVarNames: m_bGamePaused (bool)
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
            // NetworkVarNames: m_nGuardianModeWaveNumber (int)
            // NetworkVarNames: m_nGuardianModeSpecialKillsRemaining (int)
            // NetworkVarNames: m_nGuardianModeSpecialWeaponNeeded (int)
            // NetworkVarNames: m_numGlobalGiftsGiven (uint32)
            // NetworkVarNames: m_numGlobalGifters (uint32)
            // NetworkVarNames: m_numGlobalGiftsPeriodSeconds (uint32)
            // NetworkVarNames: m_arrFeaturedGiftersAccounts (uint32)
            // NetworkVarNames: m_arrFeaturedGiftersGifts (uint32)
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
            // NetworkVarNames: m_flGuardianBuyUntilTime (GameTime_t)
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
                constexpr std::ptrdiff_t __m_pChainEntity = 0x98; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xC4; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC5; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xCC; // GameTime_t
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xD0; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xD4; // int32
                constexpr std::ptrdiff_t m_bServerPaused = 0xD8; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0xD9; // bool
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xDA; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xDB; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xDC; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xE0; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xE4; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xE8; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xEC; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xED; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0xF0; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0xF4; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0xF8; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0xFC; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x100; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x104; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x108; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x10C; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x110; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x114; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x118; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x11C; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x120; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x121; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x122; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x123; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x124; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x128; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x12C; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x12D; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12E; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x130; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0x134; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x138; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x13C; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x140; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x340; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x540; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x740; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x940; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x94C; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x94D; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x94E; // bool
                constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x950; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
                constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x95C; // int32
                constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x960; // int32
                constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x964; // uint32
                constexpr std::ptrdiff_t m_numGlobalGifters = 0x968; // uint32
                constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
                constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
                constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x990; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA68; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA6C; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0xA70; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0xA71; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA74; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA78; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA7C; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA7D; // bool
                constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA84; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
                constexpr std::ptrdiff_t m_nServerQuestID = 0xCEC; // int32
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCF0; // 
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCFC; // 
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
                constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xD28; // bool
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD7C; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD80; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD84; // int32
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xDA0; // bool
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xDA4; // GameTime_t
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xDA8; // GameTime_t
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xDAC; // bool
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xDB0; // int32
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xDB4; // int32
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xDB8; // bool
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xDB9; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0xDBC; // int32
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xDC0; // int32
                constexpr std::ptrdiff_t m_iNumCT = 0xDC4; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xDC8; // int32
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xDCC; // int32
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDE8; // int32
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDEC; // bool
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDED; // bool
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDEE; // bool
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDEF; // bool
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDF0; // bool
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xE18; // uint32
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xE20; // char*
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xE28; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xE2C; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE30; // uint32
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE34; // uint32
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE40; // bool
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE41; // bool
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE78; // int32
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE7C; // float32
                constexpr std::ptrdiff_t m_flCoopRespawnAndHealTime = 0xE98; // float32
                constexpr std::ptrdiff_t m_coopBonusCoinsFound = 0xE9C; // int32
                constexpr std::ptrdiff_t m_coopBonusPistolsOnly = 0xEA0; // bool
                constexpr std::ptrdiff_t m_coopPlayersInDeploymentZone = 0xEA1; // bool
                constexpr std::ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xEA4; // int32
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xEA8; // float32
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xEB0; // int32
                constexpr std::ptrdiff_t m_iAccountCT = 0xEB4; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xEB8; // int32
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xEBC; // int32
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xEC0; // int32
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iLoserBonus = 0xEC8; // int32
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xECC; // int32
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xED0; // float32
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xED4; // bool
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xED8; // float32
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xEE0; // int32
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xEE4; // int32
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEE8; // float32
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEEC; // bool
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEED; // bool
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEEE; // bool
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEEF; // bool
                constexpr std::ptrdiff_t m_firstKillTime = 0xEF4; // float32
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEFC; // float32
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xF18; // bool
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xF19; // bool
                constexpr std::ptrdiff_t m_bVoteCalled = 0xF28; // bool
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xF29; // bool
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xF2C; // float32
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xF30; // bool
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xF34; // int32
                constexpr std::ptrdiff_t m_bTargetBombed = 0xF38; // bool
                constexpr std::ptrdiff_t m_bBombDefused = 0xF39; // bool
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF3A; // bool
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF58; // 
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF98; // bool
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF9C; // int32
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xFA0; // float32
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xFA4; // int32
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xFA8; // float32
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFE0; // bool
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFE4; // float32
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1250; // bool
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1251; // bool
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1258; // float32
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x125C; // GameTime_t
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1260; // float32
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x1264; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x14E0; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
                constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1500; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x1508; // KeyValues3
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1570; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_RetakeRules = 0x1578; // CRetakeGameRules
                constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x175C; // int32
                constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x1760; // int32
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1768; // CUtlVector<int32>[4]
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C8; // bool[4]
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x17F0; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x17F4; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x17F8; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x17FC; // bool
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x1800; // GameTime_t
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x1804; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x1808; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x180C; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x1810; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x1814; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x1818; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x1820; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x1824; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x1828; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x182C; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x1830; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1838; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x183C; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1840; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x1844; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1848; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x184C; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5858; // float64
                constexpr std::ptrdiff_t m_bSkipNextServerPerfSample = 0x5860; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSGameModeScript {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CCSGameModeScript_ConVars {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // CNetworkUtlVectorBase<CUtlString>
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSArmsRaceScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float32
                constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSDeathmatchScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CCSDeathmatchScript_ConVars {
            }
            // Parent: None
            // Fields count: 5
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
            // Parent: None
            // Fields count: 13
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
            // Parent: CSPerRoundStats_t
            // Fields count: 21
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
                constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x94; // int32
                constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x98; // int32
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9C; // int32
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xA0; // int32
                constexpr std::ptrdiff_t m_i1v1Count = 0xA4; // int32
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA8; // int32
                constexpr std::ptrdiff_t m_i1v2Count = 0xAC; // int32
                constexpr std::ptrdiff_t m_i1v2Wins = 0xB0; // int32
                constexpr std::ptrdiff_t m_iEntryCount = 0xB4; // int32
                constexpr std::ptrdiff_t m_iEntryWins = 0xB8; // int32
            }
            // Parent: CBaseEntity
            // Fields count: 8
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
                constexpr std::ptrdiff_t m_nVariant = 0x4C0; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x4C4; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x4C8; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x4D0; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x4D8; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x4E0; // CEconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x758; // CEconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0x9D0; // CEconItemView
            }
            // Parent: CBaseEntity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x4C8; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x4CC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x4D0; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x4D4; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x4D5; // char[18]
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
                constexpr std::ptrdiff_t m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
            }
            // Parent: CBaseEntity
            // Fields count: 10
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
                constexpr std::ptrdiff_t m_bHostageAlive = 0x4C0; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4CC; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4D8; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x508; // 
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x514; // 
                constexpr std::ptrdiff_t m_hostageRescueX = 0x520; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x530; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x540; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x550; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x551; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPlayerControllerAPI {
            }
            // Parent: CPlayer_CameraServices
            // Fields count: 7
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
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x23C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
            }
            // Parent: None
            // Fields count: 5
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
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
                constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // bool
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Fields count: 39
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
                constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x228; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x22C; // 
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x238; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x23C; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x240; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x244; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x245; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x248; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x24C; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x250; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x254; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x258; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x268; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x270; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x271; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x272; // bool
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x280; // 
                constexpr std::ptrdiff_t m_nTraceCount = 0x480; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x484; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x488; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x48C; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x490; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x494; // 
                constexpr std::ptrdiff_t m_vecLeft = 0x4A0; // 
                constexpr std::ptrdiff_t m_vecUp = 0x4AC; // 
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4B8; // int32
                constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4BC; // bool
                constexpr std::ptrdiff_t m_iFootsteps = 0x4C0; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4C4; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flJumpUntil = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flJumpVel = 0x4D0; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4D4; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4D8; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4E0; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4E4; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4EC; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4F0; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
            }
            // Parent: CPlayer_WeaponServices
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xA8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xAC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xAD; // bool
                constexpr std::ptrdiff_t m_hSavedWeapon = 0xB0; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_nTimeToMelee = 0xB4; // int32
                constexpr std::ptrdiff_t m_nTimeToSecondary = 0xB8; // int32
                constexpr std::ptrdiff_t m_nTimeToPrimary = 0xBC; // int32
                constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xC0; // int32
                constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xC4; // bool
                constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xC5; // bool
                constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xC6; // bool
                constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xC7; // bool
                constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC8; // uint32
                constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x460; // uint32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x150; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x154; // int32
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x158; // uint32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_PlayerDamager (CHandle<CCSPlayerPawnBase>)
            // NetworkVarNames: m_PlayerRecipient (CHandle<CCSPlayerPawnBase>)
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
                constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle<CCSPlayerPawnBase>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle<CCSPlayerPawnBase>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_iDamage = 0x58; // int32
                constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C; // int32
                constexpr std::ptrdiff_t m_iNumHits = 0x60; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68; // bool
                constexpr std::ptrdiff_t m_killType = 0x69; // EKillTypes_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
                constexpr std::ptrdiff_t m_iAccountMoneyEarnedForNextRound = 0x44; // int32
                constexpr std::ptrdiff_t m_iAccount = 0x48; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x4C; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32
            }
            // Parent: None
            // Fields count: 9
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
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0xF50; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseVDataAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeFloat {
                constexpr std::ptrdiff_t m_flValues = 0x0; // float32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeInt {
                constexpr std::ptrdiff_t m_nValues = 0x0; // int32[2]
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSObserverPawnAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPlayerPawnAPI {
            }
            // Parent: CBaseEntity
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_iActiveIssueIndex (int)
            // NetworkVarNames: m_iOnlyTeamToVote (int)
            // NetworkVarNames: m_nVoteOptionCount (int)
            // NetworkVarNames: m_nPotentialVotes (int)
            // NetworkVarNames: m_bIsYesNoVote (bool)
            namespace CVoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4C0; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4C4; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4C8; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x4DC; // int32
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4E0; // bool
                constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4E8; // CountdownTimer
                constexpr std::ptrdiff_t m_executeCommandTimer = 0x500; // CountdownTimer
                constexpr std::ptrdiff_t m_resetVoteTimer = 0x518; // CountdownTimer
                constexpr std::ptrdiff_t m_nVotesCast = 0x530; // int32[64]
                constexpr std::ptrdiff_t m_playerHoldingVote = 0x630; // CPlayerSlot
                constexpr std::ptrdiff_t m_playerOverrideForVote = 0x634; // CPlayerSlot
                constexpr std::ptrdiff_t m_nHighestCountIndex = 0x638; // int32
                constexpr std::ptrdiff_t m_potentialIssues = 0x640; // CUtlVector<CBaseIssue*>
                constexpr std::ptrdiff_t m_VoteOptions = 0x658; // CUtlVector<char*>
            }
            // Parent: CBaseEntity
            // Fields count: 24
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
                constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4C1; // bool
                constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4E0; // float64
                constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4E8; // bool
                constexpr std::ptrdiff_t m_nDraftType = 0x4EC; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4F0; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4F4; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5F4; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x610; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x710; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x810; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0x910; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xA10; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xB10; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xC10; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xD10; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xE10; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE14; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE18; // int32
                constexpr std::ptrdiff_t m_OnMapVetoed = 0xE20; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnMapPicked = 0xE48; // CEntityOutputTemplate<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_OnSidesPicked = 0xE70; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xE98; // CEntityOutputTemplate<int32>
                constexpr std::ptrdiff_t m_OnLevelTransition = 0xEC0; // CEntityOutputTemplate<int32>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CCSPulseServerFuncs_Globals {
            }
            // Parent: CBaseEntity
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flEdgeFadeDist (float)
            // NetworkVarNames: m_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_nLightProbeSizeX (int)
            // NetworkVarNames: m_nLightProbeSizeY (int)
            // NetworkVarNames: m_nLightProbeSizeZ (int)
            // NetworkVarNames: m_nLightProbeAtlasX (int)
            // NetworkVarNames: m_nLightProbeAtlasY (int)
            // NetworkVarNames: m_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CEnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Color = 0x1518; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x151C; // float32
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1528; // bool
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x1550; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x155C; // 
                constexpr std::ptrdiff_t m_bMoveable = 0x1568; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x156C; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1570; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x1574; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x1578; // bool
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x157C; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1580; // 
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x158C; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1590; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1594; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1598; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x159C; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x15A0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x15B9; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 18
            //
            // Metadata:
            // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_flInfluenceRadius (float)
            // NetworkVarNames: m_vBoxProjectMins (Vector)
            // NetworkVarNames: m_vBoxProjectMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_flEdgeFadeDist (float)
            // NetworkVarNames: m_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_flDiffuseScale (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bDefaultEnvMap (bool)
            // NetworkVarNames: m_bDefaultSpecEnvMap (bool)
            // NetworkVarNames: m_bIndoorCubeMap (bool)
            // NetworkVarNames: m_bCopyDiffuseFromDefaultCubemap (bool)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CEnvCubemap {
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x540; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x548; // bool
                constexpr std::ptrdiff_t m_flInfluenceRadius = 0x54C; // float32
                constexpr std::ptrdiff_t m_vBoxProjectMins = 0x550; // 
                constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x55C; // 
                constexpr std::ptrdiff_t m_bMoveable = 0x568; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x56C; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x570; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x574; // int32
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x578; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x57C; // 
                constexpr std::ptrdiff_t m_flDiffuseScale = 0x588; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x58C; // bool
                constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x58D; // bool
                constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x58E; // bool
                constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x58F; // bool
                constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x590; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x5A0; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 18
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
                constexpr std::ptrdiff_t m_flEndDistance = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4C8; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4CC; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4DC; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x4E0; // float32
                constexpr std::ptrdiff_t m_bActive = 0x4E4; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4E5; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4E8; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4EC; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x4F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x500; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x508; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x509; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 16
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
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x4CC; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4D0; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x4DC; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4E0; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4E4; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4E8; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x4EC; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x4F0; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x4F4; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4F9; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4FA; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nLightProbeSizeX (int)
            // NetworkVarNames: m_nLightProbeSizeY (int)
            // NetworkVarNames: m_nLightProbeSizeZ (int)
            // NetworkVarNames: m_nLightProbeAtlasX (int)
            // NetworkVarNames: m_nLightProbeAtlasY (int)
            // NetworkVarNames: m_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CEnvLightProbeVolume {
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1498; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x14B8; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x14C4; // 
                constexpr std::ptrdiff_t m_bMoveable = 0x14D0; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x14D4; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x14D8; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x14DC; // bool
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x14E0; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x14E4; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x14E8; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x14EC; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x14F0; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x14F4; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x1501; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace CPlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x4CC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4D0; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4D1; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 8
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
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4D8; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4DC; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 28
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
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
            namespace CEnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flAnisotropy = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x4D8; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4DC; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4E0; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4E4; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x4E8; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4F4; // 
                constexpr std::ptrdiff_t m_bActive = 0x500; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x504; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x508; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x50C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x510; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x514; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x518; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x51C; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x520; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x524; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x528; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x529; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x52A; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x530; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x538; // int32
                constexpr std::ptrdiff_t m_bFirstTime = 0x53C; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            namespace CEnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4C0; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x4C4; // 
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4D0; // 
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4DC; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x4E0; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x4E4; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x4E8; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace CFogController {
                constexpr std::ptrdiff_t m_fog = 0x4C0; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x528; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x52C; // int32
            }
            // Parent: CBaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CInfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x4C4; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x4C8; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x4D4; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x4E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4F9; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4FA; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4FC; // uint32
            }
            // Parent: CBaseEntity
            // Fields count: 25
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
            // NetworkVarNames: m_bDofEnabled (bool)
            // NetworkVarNames: m_flDofNearBlurry (float)
            // NetworkVarNames: m_flDofNearCrisp (float)
            // NetworkVarNames: m_flDofFarCrisp (float)
            // NetworkVarNames: m_flDofFarBlurry (float)
            // NetworkVarNames: m_flDofTiltToGround (float)
            namespace CPointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x4C0; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x4C4; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x4C8; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x4C9; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x4D0; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x4D4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4D8; // float32
                constexpr std::ptrdiff_t m_bActive = 0x4DC; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4DD; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x4E0; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x4E4; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x4EC; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x4F0; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4F4; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x4F5; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4F8; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4FC; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x500; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x504; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x508; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x50C; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x510; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x514; // bool
                constexpr std::ptrdiff_t m_pNext = 0x518; // CPointCamera*
            }
            // Parent: CBaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace CSoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x4D0; // 
            }
            // Parent: CSoundAreaEntityBase
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace CSoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x4E0; // float32
            }
            // Parent: CSoundAreaEntityBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace CSoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x4E0; // 
                constexpr std::ptrdiff_t m_vMax = 0x4EC; // 
            }
            // Parent: CBaseEntity
            // Fields count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_aPlayers (CHandle<CBasePlayerPawn>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            namespace CTeam {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x4D8; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x4F0; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x4F4; // char[129]
            }
            // Parent: CBaseEntity
            // Fields count: 25
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
            // NetworkVarNames: m_iConnected (PlayerConnectedState)
            // NetworkVarNames: m_iszPlayerName (char)
            // NetworkVarNames: m_steamID (uint64)
            // NetworkVarNames: m_iDesiredFOV (uint32)
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4C8; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x4D0; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x500; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x504; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x508; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x510; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x528; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x52C; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x530; // char[128]
                constexpr std::ptrdiff_t m_szNetworkIDString = 0x5B0; // CUtlString
                constexpr std::ptrdiff_t m_fLerpTime = 0x5B8; // float32
                constexpr std::ptrdiff_t m_bLagCompensation = 0x5BC; // bool
                constexpr std::ptrdiff_t m_bPredict = 0x5BD; // bool
                constexpr std::ptrdiff_t m_bAutoKickDisabled = 0x5BE; // bool
                constexpr std::ptrdiff_t m_bIsLowViolence = 0x5BF; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0x5C0; // bool
                constexpr std::ptrdiff_t m_nLastRealCommandNumberExecuted = 0x654; // int32
                constexpr std::ptrdiff_t m_nLastLateCommandExecuted = 0x658; // int32
                constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x670; // ChatIgnoreType_t
                constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x674; // float32
                constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x678; // float32
                constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x67C; // int32
                constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x680; // bool
                constexpr std::ptrdiff_t m_steamID = 0x690; // uint64
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x698; // uint32
            }
            // Parent: None
            // Fields count: 14
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
            // Parent: None
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x109; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_iFlags = 0x1F8; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x200; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208; // int32
                constexpr std::ptrdiff_t m_iWeight = 0x20C; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x214; // RumbleEffect_t
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x218; // bool
                constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                constexpr std::ptrdiff_t m_iSlot = 0x240; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x244; // int32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x220; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x224; // float32
                constexpr std::ptrdiff_t m_hSequence = 0x228; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x22C; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x230; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x234; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x238; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x244; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x246; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x247; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x248; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x24C; // GameTime_t
            }
            // Parent: CBaseEntity
            // Fields count: 25
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
            // NetworkVarNames: m_nRenderMode (RenderMode_t)
            // NetworkVarNames: m_nRenderFX (RenderFx_t)
            // NetworkVarNames: m_clrRender (Color)
            // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
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
                constexpr std::ptrdiff_t m_CRenderComponent = 0x4C0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x4C8; // CHitboxComponent
                constexpr std::ptrdiff_t m_flDissolveStartTime = 0x4F0; // GameTime_t
                constexpr std::ptrdiff_t m_OnIgnite = 0x4F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nRenderMode = 0x520; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0x521; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0x522; // bool
                constexpr std::ptrdiff_t m_clrRender = 0x523; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x528; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x578; // bool
                constexpr std::ptrdiff_t m_Collision = 0x580; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0x630; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x688; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0x68C; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0x690; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0x694; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0x698; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0x69C; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0x6A0; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0x6A4; // 
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x6B0; // 
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x6BC; // float32
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x6C0; // float32
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0x6E0; // CNetworkViewOffsetVector
            }
            // Parent: CBaseModelEntity
            // Fields count: 22
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
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x710; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x910; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x911; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x914; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x918; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x91C; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x920; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x928; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x92C; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x930; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x960; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x964; // CHandle<CBaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xA64; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xA65; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xA66; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xA67; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xA68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xA70; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0xC70; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xC74; // 
                constexpr std::ptrdiff_t m_nTintCP = 0xC80; // int32
                constexpr std::ptrdiff_t m_clrTint = 0xC84; // Color
            }
            // Parent: CBaseEntity
            // Fields count: 16
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
                constexpr std::ptrdiff_t m_bStartActive = 0x4C0; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4C4; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x4D0; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x4E8; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x4EC; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x4F0; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x4F4; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x4F8; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x500; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x508; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x520; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x538; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x550; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x568; // CNetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x580; // CNetworkUtlVectorBase<float32>
            }
            // Parent: CBaseModelEntity
            // Fields count: 9
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
                constexpr std::ptrdiff_t m_ActualFlags = 0x710; // uint8
                constexpr std::ptrdiff_t m_Flags = 0x711; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0x712; // uint8
                constexpr std::ptrdiff_t m_On = 0x713; // bool
                constexpr std::ptrdiff_t m_Radius = 0x714; // float32
                constexpr std::ptrdiff_t m_Exponent = 0x718; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0x71C; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0x720; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0x724; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace CEnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4C0; // CEnvWindShared
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszOverlayNames (string_t)
            // NetworkVarNames: m_flOverlayTimes (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iDesiredOverlay (int32)
            // NetworkVarNames: m_bIsActive (bool)
            namespace CEnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x4C0; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x510; // float32[10]
                constexpr std::ptrdiff_t m_flStartTime = 0x538; // GameTime_t
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x53C; // int32
                constexpr std::ptrdiff_t m_bIsActive = 0x540; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fadeColor (Color)
            namespace CEnvFade {
                constexpr std::ptrdiff_t m_fadeColor = 0x4C0; // Color
                constexpr std::ptrdiff_t m_Duration = 0x4C4; // float32
                constexpr std::ptrdiff_t m_HoldDuration = 0x4C8; // float32
                constexpr std::ptrdiff_t m_OnBeginFade = 0x4D0; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Fields count: 7
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
                constexpr std::ptrdiff_t m_nHorizontalSize = 0x710; // uint32
                constexpr std::ptrdiff_t m_nVerticalSize = 0x714; // uint32
                constexpr std::ptrdiff_t m_nMinDist = 0x718; // uint32
                constexpr std::ptrdiff_t m_nMaxDist = 0x71C; // uint32
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0x720; // uint32
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x724; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x728; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            namespace CLogicGameEventListener {
                constexpr std::ptrdiff_t m_OnEventFired = 0x4D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszGameEventName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszGameEventItem = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bEnabled = 0x508; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x509; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 44
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
                constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4C1; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x4C4; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x4D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4DC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4E0; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x4E4; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x4E8; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4EC; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x4F0; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOutputEntities = 0x518; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x530; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x534; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x538; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x53C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x540; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x544; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x548; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x54C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x550; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x551; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x554; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x558; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x55C; // 
                constexpr std::ptrdiff_t m_hUsingPlayer = 0x568; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flCustomOutputValue = 0x56C; // float32
                constexpr std::ptrdiff_t m_iszSoundEngage = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundDisengage = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x588; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x590; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Position = 0x5A0; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PositionDelta = 0x5C8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueOne = 0x618; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x640; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEngage = 0x668; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDisengage = 0x690; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 11
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
                constexpr std::ptrdiff_t m_messageText = 0x710; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x910; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x950; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x951; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x954; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x958; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x95C; // float32
                constexpr std::ptrdiff_t m_Color = 0x960; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x964; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x968; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0x96C; // PointWorldTextReorientMode_t
            }
            // Parent: CBaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4C0; // int8
                constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4C4; // int32
                constexpr std::ptrdiff_t m_bSaveImportant = 0x4C8; // bool
            }
            // Parent: None
            // Fields count: 64
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
                constexpr std::ptrdiff_t m_iszSceneFile = 0x4C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget1 = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget2 = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget3 = 0x4E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget4 = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget5 = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget6 = 0x500; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget7 = 0x508; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTarget8 = 0x510; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget1 = 0x518; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget2 = 0x51C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget3 = 0x520; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget4 = 0x524; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget5 = 0x528; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget6 = 0x52C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget7 = 0x530; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hTarget8 = 0x534; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x538; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x539; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x53A; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x53B; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x53C; // float32
                constexpr std::ptrdiff_t m_flCurrentTime = 0x540; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x544; // float32
                constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x548; // bool
                constexpr std::ptrdiff_t m_fPitch = 0x54C; // float32
                constexpr std::ptrdiff_t m_bAutomated = 0x550; // bool
                constexpr std::ptrdiff_t m_nAutomatedAction = 0x554; // int32
                constexpr std::ptrdiff_t m_flAutomationDelay = 0x558; // float32
                constexpr std::ptrdiff_t m_flAutomationTime = 0x55C; // float32
                constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x560; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x564; // bool
                constexpr std::ptrdiff_t m_bPausedViaInput = 0x565; // bool
                constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x566; // bool
                constexpr std::ptrdiff_t m_bWaitingForActor = 0x567; // bool
                constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x568; // bool
                constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x569; // bool
                constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x56A; // bool
                constexpr std::ptrdiff_t m_hActorList = 0x570; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
                constexpr std::ptrdiff_t m_hRemoveActorList = 0x588; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x5D0; // int32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5D4; // uint16
                constexpr std::ptrdiff_t m_OnStart = 0x5D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCompletion = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnCanceled = 0x628; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPaused = 0x650; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnResumed = 0x678; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTrigger = 0x6A0; // CEntityIOOutput[16]
                constexpr std::ptrdiff_t m_hInterruptScene = 0x9B0; // CHandle<CSceneEntity>
                constexpr std::ptrdiff_t m_nInterruptCount = 0x9B4; // int32
                constexpr std::ptrdiff_t m_bSceneMissing = 0x9B8; // bool
                constexpr std::ptrdiff_t m_bInterrupted = 0x9B9; // bool
                constexpr std::ptrdiff_t m_bCompletedEarly = 0x9BA; // bool
                constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x9BB; // bool
                constexpr std::ptrdiff_t m_bRestoring = 0x9BC; // bool
                constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x9C0; // CUtlVector<CHandle<CSceneEntity>>
                constexpr std::ptrdiff_t m_hListManagers = 0x9D8; // CUtlVector<CHandle<CSceneListManager>>
                constexpr std::ptrdiff_t m_iszSoundName = 0x9F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSequenceName = 0x9F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hActor = 0xA00; // CHandle<CBaseFlex>
                constexpr std::ptrdiff_t m_hActivator = 0xA04; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_BusyActor = 0xA08; // int32
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0xA0C; // SceneOnPlayerDeath_t
            }
            // Parent: CBaseModelEntity
            // Fields count: 14
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
                constexpr std::ptrdiff_t m_vDirection = 0x710; // 
                constexpr std::ptrdiff_t m_clrOverlay = 0x71C; // Color
                constexpr std::ptrdiff_t m_iszEffectName = 0x720; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSSEffectName = 0x728; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOn = 0x730; // bool
                constexpr std::ptrdiff_t m_bmaxColor = 0x731; // bool
                constexpr std::ptrdiff_t m_flSize = 0x734; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x738; // float32
                constexpr std::ptrdiff_t m_flHazeScale = 0x73C; // float32
                constexpr std::ptrdiff_t m_flAlphaHaze = 0x740; // float32
                constexpr std::ptrdiff_t m_flAlphaHdr = 0x744; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0x748; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x74C; // float32
                constexpr std::ptrdiff_t m_flFarZScale = 0x750; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace CHandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x4C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x4C4; // bool
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x790; // QAngle
                constexpr std::ptrdiff_t m_fStayPushed = 0x79C; // bool
                constexpr std::ptrdiff_t m_fRotating = 0x79D; // bool
                constexpr std::ptrdiff_t m_ls = 0x7A0; // locksound_t
                constexpr std::ptrdiff_t m_sUseSound = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sLockedSound = 0x7C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sUnlockedSound = 0x7D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bLocked = 0x7D8; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x7D9; // bool
                constexpr std::ptrdiff_t m_flUseLockedTime = 0x7DC; // GameTime_t
                constexpr std::ptrdiff_t m_bSolidBsp = 0x7E0; // bool
                constexpr std::ptrdiff_t m_OnDamaged = 0x7E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPressed = 0x810; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUseLocked = 0x838; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnIn = 0x860; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOut = 0x888; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nState = 0x8B0; // int32
                constexpr std::ptrdiff_t m_hConstraint = 0x8B4; // CEntityHandle
                constexpr std::ptrdiff_t m_hConstraintParent = 0x8B8; // CEntityHandle
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x8BC; // bool
                constexpr std::ptrdiff_t m_sGlowEntity = 0x8C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_glowEntity = 0x8C8; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x8CC; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x8D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 27
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7A0; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7AC; // 
                constexpr std::ptrdiff_t m_ls = 0x7B8; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0x7D8; // bool
                constexpr std::ptrdiff_t m_bDoorGroup = 0x7D9; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x7DA; // bool
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x7DB; // bool
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x7DC; // FuncDoorSpawnPos_t
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7E0; // float32
                constexpr std::ptrdiff_t m_NoiseMoving = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x7F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x7F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x800; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ChainTarget = 0x808; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x810; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x838; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x860; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x888; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x8B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x8D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0x900; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0x928; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0x950; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0x978; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x990; // bool
                constexpr std::ptrdiff_t m_isChaining = 0x991; // bool
                constexpr std::ptrdiff_t m_bIsUsable = 0x992; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 10
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
                constexpr std::ptrdiff_t m_flFadeInStart = 0x710; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x714; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x718; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x71C; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x720; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x724; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x728; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0x72C; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x730; // 
                constexpr std::ptrdiff_t m_nMagnitude = 0x73C; // uint32
            }
            // Parent: None
            // Fields count: 30
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
                constexpr std::ptrdiff_t m_hTargetEntity = 0x710; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bState = 0x714; // bool
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x715; // bool
                constexpr std::ptrdiff_t m_flLightFOV = 0x718; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x71C; // bool
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x71D; // bool
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x71E; // bool
                constexpr std::ptrdiff_t m_bLightWorld = 0x71F; // bool
                constexpr std::ptrdiff_t m_bCameraSpace = 0x720; // bool
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x724; // float32
                constexpr std::ptrdiff_t m_LightColor = 0x728; // Color
                constexpr std::ptrdiff_t m_flIntensity = 0x72C; // float32
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x730; // float32
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x734; // float32
                constexpr std::ptrdiff_t m_bVolumetric = 0x738; // bool
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x73C; // float32
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x740; // float32
                constexpr std::ptrdiff_t m_nNumPlanes = 0x744; // uint32
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x748; // float32
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x74C; // float32
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x750; // float32
                constexpr std::ptrdiff_t m_flAmbient = 0x754; // float32
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x758; // char[512]
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x958; // int32
                constexpr std::ptrdiff_t m_nShadowQuality = 0x95C; // uint32
                constexpr std::ptrdiff_t m_flNearZ = 0x960; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x964; // float32
                constexpr std::ptrdiff_t m_flProjectionSize = 0x968; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x96C; // float32
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x970; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 9
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
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0x718; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x71C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x720; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0x724; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x728; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x729; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x72A; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x72C; // float32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace CFuncMoveLinear {
                constexpr std::ptrdiff_t m_authoredPosition = 0x790; // MoveLinearAuthoredPos_t
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x794; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7A0; // 
                constexpr std::ptrdiff_t m_soundStart = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundStop = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_currentSound = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flMoveDistance = 0x7D0; // float32
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x7E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x808; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x830; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x831; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 19
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x710; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStarted = 0x738; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedStart = 0x760; // CEntityIOOutput
                constexpr std::ptrdiff_t m_localRotationVector = 0x788; // RotationVector
                constexpr std::ptrdiff_t m_flFanFriction = 0x794; // float32
                constexpr std::ptrdiff_t m_flAttenuation = 0x798; // float32
                constexpr std::ptrdiff_t m_flVolume = 0x79C; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x7AC; // float32
                constexpr std::ptrdiff_t m_NoiseRunning = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bReversed = 0x7B8; // bool
                constexpr std::ptrdiff_t m_bAccelDecel = 0x7B9; // bool
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x7C4; // QAngle
                constexpr std::ptrdiff_t m_angStart = 0x7D0; // QAngle
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x7DC; // bool
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x7E0; // 
                constexpr std::ptrdiff_t m_vecClientAngles = 0x7EC; // QAngle
            }
            // Parent: CBaseModelEntity
            // Fields count: 21
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
                constexpr std::ptrdiff_t m_RopeFlags = 0x718; // uint16
                constexpr std::ptrdiff_t m_iNextLinkName = 0x720; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Slack = 0x728; // int16
                constexpr std::ptrdiff_t m_Width = 0x72C; // float32
                constexpr std::ptrdiff_t m_TextureScale = 0x730; // float32
                constexpr std::ptrdiff_t m_nSegments = 0x734; // uint8
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x735; // bool
                constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x738; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x740; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_Subdiv = 0x748; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x749; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x74A; // int16
                constexpr std::ptrdiff_t m_fLockedPoints = 0x74C; // uint8
                constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x74D; // bool
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x750; // float32
                constexpr std::ptrdiff_t m_bStartPointValid = 0x754; // bool
                constexpr std::ptrdiff_t m_bEndPointValid = 0x755; // bool
                constexpr std::ptrdiff_t m_hStartPoint = 0x758; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x75C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x760; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x761; // AttachmentHandle_t
            }
            // Parent: CBaseModelEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace CSpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x710; // float32
                constexpr std::ptrdiff_t m_Radius = 0x714; // float32
                constexpr std::ptrdiff_t m_vSpotlightDir = 0x718; // 
                constexpr std::ptrdiff_t m_vSpotlightOrg = 0x724; // 
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0x790; // bool
                constexpr std::ptrdiff_t m_iFilterName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x7A0; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnStartTouch = 0x7A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x7D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x7F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x820; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x898; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0x8B0; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 24
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
                constexpr std::ptrdiff_t m_flFrameRate = 0x710; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x714; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x718; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x71C; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x720; // uint8
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x738; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x73C; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x740; // CHandle<CBaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x768; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x774; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x778; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x77C; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x780; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x784; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x788; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x78C; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x790; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0x794; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0x798; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x79C; // 
                constexpr std::ptrdiff_t m_hEndEntity = 0x7A8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nDissolveType = 0x7AC; // int32
            }
            // Parent: CBaseModelEntity
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace CFuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x710; // 
                constexpr std::ptrdiff_t m_Dismounts = 0x720; // CUtlVector<CHandle<CInfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0x738; // 
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x744; // 
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x750; // 
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x75C; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x760; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x761; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x762; // bool
                constexpr std::ptrdiff_t m_surfacePropName = 0x768; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x770; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x798; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 7
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
            // Parent: CBaseModelEntity
            // Fields count: 23
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
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x718; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x71C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x720; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x724; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x728; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x738; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x73C; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x740; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x744; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x748; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x74C; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x750; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x754; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x758; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x75C; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x760; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x764; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x768; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x76C; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x770; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x774; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x778; // int32
            }
            // Parent: CBaseModelEntity
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace CBaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0x710; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0x718; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0x720; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0x728; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_CustomOutput0 = 0x730; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput1 = 0x758; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput2 = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput3 = 0x7A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput4 = 0x7D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput5 = 0x7F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput6 = 0x820; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput7 = 0x848; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput8 = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_CustomOutput9 = 0x898; // CEntityIOOutput
            }
            // Parent: CBaseClientUIEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x8C0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x8C4; // bool
            }
            // Parent: CBaseClientUIEntity
            // Fields count: 23
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
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x8C0; // bool
                constexpr std::ptrdiff_t m_bLit = 0x8C1; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x8C2; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x8C4; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x8C8; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x8CC; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x8D0; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x8D4; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x8D8; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8DC; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x8E0; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x8E4; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8E8; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x8F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x908; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x909; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x90A; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x90B; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x90C; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x90D; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x90E; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x90F; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x910; // int32
            }
            // Parent: CPointClientUIWorldPanel
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace CPointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x918; // char[512]
            }
            // Parent: None
            // Fields count: 10
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
                constexpr std::ptrdiff_t m_bDisabled = 0x4C0; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x4C4; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x4C8; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x4D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x4D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x4E0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4F8; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x500; // CNetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_szTargetsName = 0x518; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x520; // CUtlVector<CHandle<CBaseModelEntity>>
            }
            // Parent: None
            // Fields count: 13
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
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x130; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1D1; // char[161]
            }
            // Parent: CBaseTrigger
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_OnBombExplode = 0x8B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombPlanted = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefused = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bIsBombSiteB = 0x930; // bool
                constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x931; // bool
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x932; // bool
                constexpr std::ptrdiff_t m_szMountTarget = 0x938; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hInstructorHint = 0x940; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x944; // int32
            }
            // Parent: CBaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x8B8; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x8D8; // float32
            }
            // Parent: CBasePlayerController
            // Fields count: 86
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
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6C8; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x6D0; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x6D8; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x6E0; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x6E8; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x6EC; // bool
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x6F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x6F8; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x6FC; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x700; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x704; // bool
                constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x705; // bool
                constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x708; // int32
                constexpr std::ptrdiff_t m_bTeamChanged = 0x70C; // bool
                constexpr std::ptrdiff_t m_bInSwitchTeam = 0x70D; // bool
                constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x70E; // bool
                constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x70F; // bool
                constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x710; // bool
                constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x711; // bool
                constexpr std::ptrdiff_t m_szClan = 0x718; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szClanName = 0x720; // char[32]
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x740; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x748; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x750; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x758; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x75C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x760; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x764; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x768; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x76C; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x770; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x774; // uint16
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x778; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x77C; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x7A8; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7AC; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7B0; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x7B4; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7B5; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7B6; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7B7; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7B8; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x7B9; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7BC; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x7C8; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7C9; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7CA; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7CC; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7D0; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x7D4; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x7D8; // CHandle<CCSObserverPawn>
                constexpr std::ptrdiff_t m_DesiredObserverMode = 0x7DC; // int32
                constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x7E0; // CEntityHandle
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x7E4; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x7E8; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x7EC; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x7F1; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x7F2; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x7F4; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x7F8; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x7FC; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x800; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x804; // int32
                constexpr std::ptrdiff_t m_iRoundScore = 0x808; // int32
                constexpr std::ptrdiff_t m_iRoundsWon = 0x80C; // int32
                constexpr std::ptrdiff_t m_vecKills = 0x810; // CNetworkUtlVectorBase<EKillTypes_t>
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x828; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x82C; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x830; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x834; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x838; // int32
                constexpr std::ptrdiff_t m_nUpdateCounter = 0x83C; // int32
                constexpr std::ptrdiff_t m_flSmoothedPing = 0x840; // float32
                constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xF8E8; // IntervalTimer
                constexpr std::ptrdiff_t m_bShowHints = 0xF900; // bool
                constexpr std::ptrdiff_t m_iNextTimeCheck = 0xF904; // int32
                constexpr std::ptrdiff_t m_bJustDidTeamKill = 0xF908; // bool
                constexpr std::ptrdiff_t m_bPunishForTeamKill = 0xF909; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0xF90A; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0xF90B; // bool
                constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0xF910; // float64
                constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0xF918; // GameTime_t
                constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF91C; // GameTime_t
                constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0xF920; // uint32
                constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0xF924; // uint32
            }
            // Parent: CBaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace CFootstepControl {
                constexpr std::ptrdiff_t m_source = 0x8B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0x8C0; // CUtlSymbolLarge
            }
            // Parent: CBasePlayerWeaponVData
            // Fields count: 92
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x248; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x24C; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szViewModel = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szPlayerModel = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szMagazineModel = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szHeatEffect = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szTracerParticle = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0xBF0; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0xBF4; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
                constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xC00; // CUtlString
                constexpr std::ptrdiff_t m_nPrice = 0xC08; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0xC0C; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC10; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC14; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC18; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0xC19; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0xC1A; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC1B; // bool
                constexpr std::ptrdiff_t m_szName = 0xC20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_szAnimExtension = 0xC28; // CUtlString
                constexpr std::ptrdiff_t m_eSilencerType = 0xC30; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC34; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC38; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0xC3C; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0xC40; // int32
                constexpr std::ptrdiff_t m_flCycleTime = 0xC44; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flMaxSpeed = 0xC4C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0xC54; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC5C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC64; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC6C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC74; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC7C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC84; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC8C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0xC94; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC9C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xCA4; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xCAC; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0xCB4; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCBC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCC0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCC4; // float32
                constexpr std::ptrdiff_t m_nRecoilSeed = 0xCC8; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0xCCC; // int32
                constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCD0; // float32
                constexpr std::ptrdiff_t m_flIdleInterval = 0xCD4; // float32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCD8; // float32
                constexpr std::ptrdiff_t m_flHeatPerShot = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCE0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCE8; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCF0; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCF8; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCF9; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0xCFC; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0xD00; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0xD04; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0xD08; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0xD0C; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0xD10; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD14; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD18; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0xD1C; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD20; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD24; // float32
                constexpr std::ptrdiff_t m_angPivotAngle = 0xD28; // QAngle
                constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD34; // 
                constexpr std::ptrdiff_t m_nDamage = 0xD40; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD44; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0xD48; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0xD4C; // float32
                constexpr std::ptrdiff_t m_flRange = 0xD50; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0xD54; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD58; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD5C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD60; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD64; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD68; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD6C; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD70; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD74; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0xD78; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xD7C; // 
                constexpr std::ptrdiff_t m_szAnimClass = 0xD88; // CGlobalSymbol
            }
            // Parent: CBaseModelEntity
            // Fields count: 9
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkOverride
            // NetworkVarNames: m_vecMoveDirEntitySpace (Vector)
            // NetworkVarNames: m_flTargetSpeed (float32)
            // NetworkVarNames: m_nTransitionStartTick (GameTick_t)
            // NetworkVarNames: m_nTransitionDurationTicks (int)
            // NetworkVarNames: m_flTransitionStartSpeed (float32)
            // NetworkVarNames: m_hConveyorModels (EHANDLE)
            namespace CFuncConveyor {
                constexpr std::ptrdiff_t m_szConveyorModels = 0x710; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x718; // float32
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x71C; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x728; // 
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x734; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x738; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x73C; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x740; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x748; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            }
            // Parent: None
            // Fields count: 15
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
                constexpr std::ptrdiff_t m_nUniqueID = 0x710; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0x714; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0x718; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0x71C; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0x720; // 
                constexpr std::ptrdiff_t m_vecStart = 0x72C; // 
                constexpr std::ptrdiff_t m_vecLeft = 0x738; // 
                constexpr std::ptrdiff_t m_vecNormal = 0x744; // 
                constexpr std::ptrdiff_t m_nPlayer = 0x750; // int32
                constexpr std::ptrdiff_t m_nEntity = 0x754; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0x758; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0x75C; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x760; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x764; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x765; // uint8[128]
            }
            // Parent: CBaseModelEntity
            // Fields count: 25
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
                constexpr std::ptrdiff_t m_firePositions = 0x720; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0xA20; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xD20; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0xD60; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1060; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x1064; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1068; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x106C; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1070; // bool
                constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x1074; // int32
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1078; // bool
                constexpr std::ptrdiff_t m_extent = 0x1280; // Extent
                constexpr std::ptrdiff_t m_damageTimer = 0x1298; // CountdownTimer
                constexpr std::ptrdiff_t m_damageRampTimer = 0x12B0; // CountdownTimer
                constexpr std::ptrdiff_t m_splashVelocity = 0x12C8; // 
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x12D4; // 
                constexpr std::ptrdiff_t m_startPos = 0x12E0; // 
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x12EC; // 
                constexpr std::ptrdiff_t m_activeTimer = 0x12F8; // IntervalTimer
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1308; // int32
                constexpr std::ptrdiff_t m_nMaxFlames = 0x130C; // int32
                constexpr std::ptrdiff_t m_nSpreadCount = 0x1310; // int32
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1318; // CountdownTimer
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1330; // CountdownTimer
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1348; // uint16
            }
            // Parent: CBaseModelEntity
            // Fields count: 52
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
            namespace CBarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x710; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x714; // int32
                constexpr std::ptrdiff_t m_Color = 0x718; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0x71C; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0x720; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x724; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0x728; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x72C; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x730; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x734; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x738; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0x740; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x748; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x750; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x768; // CNetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x780; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x798; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x860; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x864; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x868; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x86C; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x870; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x874; // 
                constexpr std::ptrdiff_t m_flRange = 0x880; // float32
                constexpr std::ptrdiff_t m_vShear = 0x884; // 
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x890; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x894; // 
                constexpr std::ptrdiff_t m_nCastShadows = 0x8A0; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x8A4; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x8A8; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x8AC; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x8B0; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x8B4; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x8B8; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x8BC; // 
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8C8; // float32
                constexpr std::ptrdiff_t m_nFog = 0x8CC; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x8D0; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x8D4; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x8D8; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x8DC; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x8E0; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x8E4; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x8E8; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x8EC; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x8F0; // 
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8FC; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x908; // 
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x914; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x920; // 
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x92C; // bool
            }
            // Parent: CBarnLight
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace CRectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x938; // bool
            }
            // Parent: CBarnLight
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace COmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x938; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0x93C; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0x940; // bool
            }
            // Parent: CTeam
            // Fields count: 14
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
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x578; // int32
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x57C; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x580; // bool
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x581; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x784; // int32
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x788; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x78C; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x790; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x794; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x818; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x81C; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x824; // char[8]
                constexpr std::ptrdiff_t m_flNextResourceTime = 0x82C; // float32
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x830; // int32
            }
            // Parent: CBaseModelEntity
            // Fields count: 12
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
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x720; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x721; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x725; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x72C; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x730; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x734; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x738; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x73C; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x740; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x744; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace CLightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x710; // CLightComponent*
            }
            // Parent: CBaseTrigger
            // Fields count: 16
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
                constexpr std::ptrdiff_t m_hPostSettings = 0x8C8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x8D0; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x8D4; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8D8; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x8DC; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x8E0; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x8E4; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8E8; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8EC; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x8F0; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x8F4; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x8F5; // bool
                constexpr std::ptrdiff_t m_flRate = 0x8F8; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x8FC; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x900; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x904; // float32
            }
            // Parent: CParticleSystem
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flRadiusScale (float32)
            // NetworkVarNames: m_flSelfIllumScale (float32)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
            namespace CEnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0xC88; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0xC8C; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0xC90; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0xC94; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0xC98; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: CBaseModelEntity
            // Fields count: 8
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
                constexpr std::ptrdiff_t m_bLoop = 0x710; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x714; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x718; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x720; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x728; // 
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x734; // 
                constexpr std::ptrdiff_t m_flStartTime = 0x740; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x744; // float32
            }
            // Parent: CBaseModelEntity
            // Fields count: 10
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
            // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
            // NetworkVarNames: m_vecForce (Vector)
            // NetworkVarNames: m_nForceBone (int32)
            // NetworkVarNames: m_pRagdollPose (PhysicsRagdollPose_t*)
            // NetworkVarNames: m_bClientRagdoll (bool)
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x788; // bool
                constexpr std::ptrdiff_t m_pChoreoServices = 0x790; // IChoreoServices*
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x798; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x79C; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x7A0; // 
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x7AC; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x7B0; // 
                constexpr std::ptrdiff_t m_nForceBone = 0x7BC; // int32
                constexpr std::ptrdiff_t m_pRagdollPose = 0x7D0; // PhysicsRagdollPose_t*
                constexpr std::ptrdiff_t m_bClientRagdoll = 0x7D8; // bool
            }
            // Parent: None
            // Fields count: 34
            //
            // Metadata:
            // NetworkVarNames: m_noGhostCollision (bool)
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_OnBreak = 0x938; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x960; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x988; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x9B0; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x9B4; // int32
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0x9B8; // QAngle
                constexpr std::ptrdiff_t m_flPressureDelay = 0x9C4; // float32
                constexpr std::ptrdiff_t m_hBreaker = 0x9C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x9CC; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x9D0; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x9D4; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x9D8; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x9DC; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x9E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x9E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iInteractions = 0x9F0; // int32
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x9F4; // GameTime_t
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x9F8; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x9FC; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xA00; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0xA08; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xA10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xA18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xA20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xA28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xA30; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xA34; // GameTime_t
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xA38; // bool
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xA3C; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xA40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hFlareEnt = 0xA44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xA48; // bool
                constexpr std::ptrdiff_t m_iszPuntSound = 0xA50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_noGhostCollision = 0xA58; // bool
            }
            // Parent: CBreakableProp
            // Fields count: 21
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xA68; // bool
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xA69; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xA6A; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xA70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xA98; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xAC0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xAE8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xB10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xB38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xB40; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xB44; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xB45; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xB46; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xB47; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xB48; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xB49; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xB4C; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xB50; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xB54; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xB58; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0xB5C; // int32
            }
            // Parent: CBaseTrigger
            // Fields count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_MaxWeight (float32)
            // NetworkVarNames: m_FadeDuration (float32)
            // NetworkVarNames: m_Weight (float32)
            // NetworkVarNames: m_lookupFilename (char)
            namespace CColorCorrectionVolume {
                constexpr std::ptrdiff_t m_bEnabled = 0x8B8; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x8BC; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x8C0; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x8C4; // bool
                constexpr std::ptrdiff_t m_Weight = 0x8C8; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x8CC; // char[512]
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xACC; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xAD0; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0xAD4; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xAD8; // GameTime_t
            }
            // Parent: CBaseAnimGraph
            // Fields count: 30
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
                constexpr std::ptrdiff_t m_iszPreCommands = 0x8E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostCommands = 0x8F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x8F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszViewTarget = 0x900; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewTarget = 0x908; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0x90C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszViewPosition = 0x910; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewPosition = 0x918; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewPositionMover = 0x91C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventMovement = 0x920; // bool
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0x921; // bool
                constexpr std::ptrdiff_t m_bUnstoppable = 0x922; // bool
                constexpr std::ptrdiff_t m_flFinishedTime = 0x924; // GameTime_t
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0x928; // 
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0x934; // QAngle
                constexpr std::ptrdiff_t m_vecFinishAngles = 0x940; // QAngle
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0x94C; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x94D; // bool
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0x950; // 
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0x95C; // GameTime_t
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0x960; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0x988; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActive = 0x9B0; // bool
                constexpr std::ptrdiff_t m_flStartTime = 0x9B4; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x9B8; // float32
                constexpr std::ptrdiff_t m_iszTitle = 0x9C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x9C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x9D0; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x9D4; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x9D8; // bool
            }
            // Parent: None
            // Fields count: 9
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
                constexpr std::ptrdiff_t m_targetCamera = 0x730; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x738; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0x73C; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x73D; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0x740; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0x748; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0x74C; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x74D; // bool
                constexpr std::ptrdiff_t m_bStartEnabled = 0x74E; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_strStartTouchEventName (CUtlString)
            // NetworkVarNames: m_strEndTouchEventName (CUtlString)
            // NetworkVarNames: m_strTriggerID (CUtlString)
            namespace CTriggerGameEvent {
                constexpr std::ptrdiff_t m_strStartTouchEventName = 0x8B8; // CUtlString
                constexpr std::ptrdiff_t m_strEndTouchEventName = 0x8C0; // CUtlString
                constexpr std::ptrdiff_t m_strTriggerID = 0x8C8; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0x730; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x738; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectZapName = 0x740; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEffectSource = 0x748; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_bTestOcclusion (bool)
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
                constexpr std::ptrdiff_t m_hActivator = 0x8FC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bTestOcclusion = 0x900; // bool
                constexpr std::ptrdiff_t m_OnTimeout = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartLook = 0x930; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndLook = 0x958; // CEntityIOOutput
            }
            // Parent: CBaseTrigger
            // Fields count: 13
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
                constexpr std::ptrdiff_t m_gravityScale = 0x8C8; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x8CC; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x8D0; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x8D4; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x8D8; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x8DC; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x8E0; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x8E4; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8E8; // 
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x8F4; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x8F8; // 
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x904; // 
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x910; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_vLookTargetPosition (Vector)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace CBaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0x8E8; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0x900; // 
                constexpr std::ptrdiff_t m_blinktoggle = 0x90C; // bool
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x960; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0x964; // GameTime_t
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x968; // uint32
                constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0x96C; // bool
            }
            // Parent: CDynamicProp
            // Fields count: 37
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
                constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xB70; // float32
                constexpr std::ptrdiff_t m_hDoorList = 0xB78; // CUtlVector<CHandle<CBasePropDoor>>
                constexpr std::ptrdiff_t m_nHardwareType = 0xB90; // int32
                constexpr std::ptrdiff_t m_bNeedsHardware = 0xB94; // bool
                constexpr std::ptrdiff_t m_eDoorState = 0xB98; // DoorState_t
                constexpr std::ptrdiff_t m_bLocked = 0xB9C; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0xBA0; // 
                constexpr std::ptrdiff_t m_closedAngles = 0xBAC; // QAngle
                constexpr std::ptrdiff_t m_hBlocker = 0xBB8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bFirstBlocked = 0xBBC; // bool
                constexpr std::ptrdiff_t m_ls = 0xBC0; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0xBE0; // bool
                constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xBE4; // 
                constexpr std::ptrdiff_t m_hActivator = 0xBF0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_SoundMoving = 0xC00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundOpen = 0xC08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundClose = 0xC10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLock = 0xC18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundUnlock = 0xC20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLatch = 0xC28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundPound = 0xC30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundJiggle = 0xC38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SoundLockedAnim = 0xC40; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_numCloseAttempts = 0xC48; // int32
                constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xC4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_SlaveName = 0xC50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hMaster = 0xC58; // CHandle<CBasePropDoor>
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0xC60; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xCB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xCD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xD00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0xD28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0xD50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0xD78; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0xDA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAjarOpen = 0xDC8; // CEntityIOOutput
            }
            // Parent: CBaseAnimGraph
            // Fields count: 24
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
                constexpr std::ptrdiff_t m_pool = 0x8E8; // CHandle<CFishPool>
                constexpr std::ptrdiff_t m_id = 0x8EC; // uint32
                constexpr std::ptrdiff_t m_x = 0x8F0; // float32
                constexpr std::ptrdiff_t m_y = 0x8F4; // float32
                constexpr std::ptrdiff_t m_z = 0x8F8; // float32
                constexpr std::ptrdiff_t m_angle = 0x8FC; // float32
                constexpr std::ptrdiff_t m_angleChange = 0x900; // float32
                constexpr std::ptrdiff_t m_forward = 0x904; // 
                constexpr std::ptrdiff_t m_perp = 0x910; // 
                constexpr std::ptrdiff_t m_poolOrigin = 0x91C; // 
                constexpr std::ptrdiff_t m_waterLevel = 0x928; // float32
                constexpr std::ptrdiff_t m_speed = 0x92C; // float32
                constexpr std::ptrdiff_t m_desiredSpeed = 0x930; // float32
                constexpr std::ptrdiff_t m_calmSpeed = 0x934; // float32
                constexpr std::ptrdiff_t m_panicSpeed = 0x938; // float32
                constexpr std::ptrdiff_t m_avoidRange = 0x93C; // float32
                constexpr std::ptrdiff_t m_turnTimer = 0x940; // CountdownTimer
                constexpr std::ptrdiff_t m_turnClockwise = 0x958; // bool
                constexpr std::ptrdiff_t m_goTimer = 0x960; // CountdownTimer
                constexpr std::ptrdiff_t m_moveTimer = 0x978; // CountdownTimer
                constexpr std::ptrdiff_t m_panicTimer = 0x990; // CountdownTimer
                constexpr std::ptrdiff_t m_disperseTimer = 0x9A8; // CountdownTimer
                constexpr std::ptrdiff_t m_proximityTimer = 0x9C0; // CountdownTimer
                constexpr std::ptrdiff_t m_visible = 0x9D8; // CUtlVector<CFish*>
            }
            // Parent: CBaseAnimGraph
            // Fields count: 28
            //
            // Metadata:
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            // NetworkVarNames: m_flBlendWeight (float32)
            namespace CRagdollProp {
                constexpr std::ptrdiff_t m_ragdoll = 0x8F0; // ragdoll_t
                constexpr std::ptrdiff_t m_bStartDisabled = 0x928; // bool
                constexpr std::ptrdiff_t m_ragPos = 0x930; // CNetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x948; // CNetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_hRagdollSource = 0x960; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_lastUpdateTickCount = 0x964; // uint32
                constexpr std::ptrdiff_t m_allAsleep = 0x968; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0x969; // bool
                constexpr std::ptrdiff_t m_hDamageEntity = 0x96C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hKiller = 0x970; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x974; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x978; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeOutStartTime = 0x97C; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeTime = 0x980; // float32
                constexpr std::ptrdiff_t m_vecLastOrigin = 0x984; // 
                constexpr std::ptrdiff_t m_flAwakeTime = 0x990; // GameTime_t
                constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0x994; // GameTime_t
                constexpr std::ptrdiff_t m_nBloodColor = 0x998; // int32
                constexpr std::ptrdiff_t m_strOriginClassName = 0x9A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strSourceClassName = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0x9B0; // bool
                constexpr std::ptrdiff_t m_bShouldTeleportPhysics = 0x9B1; // bool
                constexpr std::ptrdiff_t m_flBlendWeight = 0x9B4; // float32
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x9B8; // float32
                constexpr std::ptrdiff_t m_ragdollMins = 0x9C0; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_ragdollMaxs = 0x9D8; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0x9F0; // bool
                constexpr std::ptrdiff_t m_bValidatePoweredRagdollPose = 0xA50; // bool
            }
            // Parent: CBreakableProp
            // Fields count: 34
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
                constexpr std::ptrdiff_t m_MotionEnabled = 0xA68; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0xA90; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwake = 0xAB8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAsleep = 0xAE0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xB08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xB30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xB58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_massScale = 0xB80; // float32
                constexpr std::ptrdiff_t m_inertiaScale = 0xB84; // float32
                constexpr std::ptrdiff_t m_buoyancyScale = 0xB88; // float32
                constexpr std::ptrdiff_t m_damageType = 0xB8C; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xB90; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xB94; // float32
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xB98; // bool
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xB99; // bool
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xB9A; // bool
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xB9B; // bool
                constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xB9C; // int32
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xBA0; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xBA1; // bool
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xBA4; // GameTime_t
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xBA8; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xBAC; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xBB0; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xBB4; // Color
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xBB8; // bool
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xBB9; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xBBA; // bool
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xBBB; // bool
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xBBC; // bool
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xBC4; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xBC5; // bool
                constexpr std::ptrdiff_t m_bAwake = 0xBC6; // bool
                constexpr std::ptrdiff_t m_nCollisionGroupOverride = 0xBC8; // int32
            }
            // Parent: CPhysicsProp
            // Fields count: 3
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace CShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_bDebris = 0xBD0; // bool
                constexpr std::ptrdiff_t m_hParentShard = 0xBD4; // uint32
                constexpr std::ptrdiff_t m_ShardDesc = 0xBD8; // shard_model_desc_t
            }
            // Parent: CBaseFlex
            // Fields count: 9
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
                constexpr std::ptrdiff_t m_AttributeManager = 0x988; // CAttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xC50; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xC54; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xC58; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xC5C; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0xC60; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xC64; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0xC68; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xC6C; // int32
            }
            // Parent: CBaseFlex
            // Fields count: 14
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
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x980; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExplode = 0x9A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x9D0; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x9D1; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x9D2; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x9D4; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x9D8; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x9DC; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x9E0; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x9E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x9F0; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x9FC; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0xA14; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0xA18; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseAnimGraph
            // Fields count: 11
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
                constexpr std::ptrdiff_t m_vecLastFacing = 0x8F0; // 
                constexpr std::ptrdiff_t m_nViewModelIndex = 0x8FC; // uint32
                constexpr std::ptrdiff_t m_nAnimationParity = 0x900; // uint32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0x904; // float32
                constexpr std::ptrdiff_t m_hWeapon = 0x908; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_sVMName = 0x910; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sAnimationPrefix = 0x918; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hOldLayerSequence = 0x920; // HSequence
                constexpr std::ptrdiff_t m_oldLayer = 0x924; // int32
                constexpr std::ptrdiff_t m_oldLayerStartTime = 0x928; // float32
                constexpr std::ptrdiff_t m_hControlPanel = 0x92C; // CHandle<CBaseEntity>
            }
            // Parent: CBaseAnimGraph
            // Fields count: 26
            //
            // Metadata:
            // NetworkVarNames: m_bBombTicking (bool)
            // NetworkVarNames: m_flC4Blow (GameTime_t)
            // NetworkVarNames: m_nBombSite (int)
            // NetworkVarNames: m_nSourceSoundscapeHash (int)
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
                constexpr std::ptrdiff_t m_bBombTicking = 0x8E8; // bool
                constexpr std::ptrdiff_t m_flC4Blow = 0x8EC; // GameTime_t
                constexpr std::ptrdiff_t m_nBombSite = 0x8F0; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x8F4; // int32
                constexpr std::ptrdiff_t m_OnBombDefused = 0x8F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0x920; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0x948; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x970; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x978; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x990; // int32
                constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0x994; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x995; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x998; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x99C; // bool
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x9A4; // GameTime_t
                constexpr std::ptrdiff_t m_flDefuseLength = 0x9AC; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x9B0; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x9B4; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x9B8; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hControlPanel = 0x9BC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iProgressBarTime = 0x9C0; // int32
                constexpr std::ptrdiff_t m_bVoiceAlertFired = 0x9C4; // bool
                constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0x9C5; // bool[4]
                constexpr std::ptrdiff_t m_flNextBotBeepTime = 0x9CC; // GameTime_t
                constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0x9D4; // QAngle
                constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0x9E0; // GameTime_t
            }
            // Parent: CBaseGrenade
            // Fields count: 18
            //
            // Metadata:
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_nBounces (int)
            // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_nExplodeEffectTickBegin (int)
            // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0xA20; // 
                constexpr std::ptrdiff_t m_vInitialVelocity = 0xA2C; // 
                constexpr std::ptrdiff_t m_nBounces = 0xA38; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xA48; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xA4C; // 
                constexpr std::ptrdiff_t m_flSpawnTime = 0xA58; // GameTime_t
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xA5C; // uint8
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0xA5D; // bool
                constexpr std::ptrdiff_t m_flDetonateTime = 0xA60; // GameTime_t
                constexpr std::ptrdiff_t m_nItemIndex = 0xA64; // uint16
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xA68; // 
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xA74; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xA78; // RotationVector
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xA84; // 
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xA90; // int32
                constexpr std::ptrdiff_t m_bHasEverHitPlayer = 0xA94; // bool
                constexpr std::ptrdiff_t m_bClearFromPlayers = 0xA95; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace CItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x9C0; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x9C4; // CHandle<CCSPlayerPawn>
            }
            // Parent: CDynamicProp
            // Fields count: 34
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
            // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xB80; // CAttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xE48; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xE4C; // uint32
                constexpr std::ptrdiff_t m_updateTimer = 0xE50; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckAnchor = 0xE68; // 
                constexpr std::ptrdiff_t m_stuckTimer = 0xE78; // CountdownTimer
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0xE90; // CountdownTimer
                constexpr std::ptrdiff_t m_isOnGround = 0xEA8; // bool
                constexpr std::ptrdiff_t m_vFallVelocity = 0xEAC; // 
                constexpr std::ptrdiff_t m_activity = 0xEB8; // ChickenActivity
                constexpr std::ptrdiff_t m_activityTimer = 0xEC0; // CountdownTimer
                constexpr std::ptrdiff_t m_turnRate = 0xED8; // float32
                constexpr std::ptrdiff_t m_fleeFrom = 0xEDC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xEE0; // CountdownTimer
                constexpr std::ptrdiff_t m_startleTimer = 0xEF8; // CountdownTimer
                constexpr std::ptrdiff_t m_vocalizeTimer = 0xF10; // CountdownTimer
                constexpr std::ptrdiff_t m_flWhenZombified = 0xF28; // GameTime_t
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xF2C; // bool
                constexpr std::ptrdiff_t m_leader = 0xF30; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_reuseTimer = 0xF38; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xF50; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0xF58; // CountdownTimer
                constexpr std::ptrdiff_t m_flLastJumpTime = 0xF70; // float32
                constexpr std::ptrdiff_t m_bInJump = 0xF74; // bool
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xF75; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x2F80; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2F98; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x3028; // CountdownTimer
                constexpr std::ptrdiff_t m_vecPathGoal = 0x3048; // 
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x3054; // GameTime_t
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x3058; // CountdownTimer
                constexpr std::ptrdiff_t m_vecLastEggPoopPosition = 0x3070; // 
                constexpr std::ptrdiff_t m_vecEggsPooped = 0x3080; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x30A0; // CountdownTimer
            }
            // Parent: CEconEntity
            // Fields count: 8
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
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xC70; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xC74; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xC78; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xC7C; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0xC80; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0xC84; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xC88; // int32[2]
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xC90; // CEntityIOOutput
            }
            // Parent: CRagdollProp
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace CRagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xA90; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xA94; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xA98; // 
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xAA4; // 
                constexpr std::ptrdiff_t m_bShouldDetach = 0xAB0; // bool
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xAC0; // bool
            }
            // Parent: CBaseFlex
            // Fields count: 12
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
            // NetworkVarNames: m_flFieldOfView (float)
            namespace CBaseCombatCharacter {
                constexpr std::ptrdiff_t m_bForceServerRagdoll = 0x978; // bool
                constexpr std::ptrdiff_t m_hMyWearables = 0x980; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                constexpr std::ptrdiff_t m_flFieldOfView = 0x998; // float32
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x99C; // float32
                constexpr std::ptrdiff_t m_LastHitGroup = 0x9A0; // HitGroup_t
                constexpr std::ptrdiff_t m_bApplyStressDamage = 0x9A4; // bool
                constexpr std::ptrdiff_t m_bloodColor = 0x9A8; // int32
                constexpr std::ptrdiff_t m_iDamageCount = 0x9F0; // int32
                constexpr std::ptrdiff_t m_pVecRelationships = 0x9F8; // CUtlVector<RelationshipOverride_t>*
                constexpr std::ptrdiff_t m_strRelationships = 0xA00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_eHull = 0xA08; // Hull_t
                constexpr std::ptrdiff_t m_nNavHullIdx = 0xA0C; // uint32
            }
            // Parent: CBaseCombatCharacter
            // Fields count: 25
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
                constexpr std::ptrdiff_t m_pWeaponServices = 0xA10; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0xA18; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xA20; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0xA28; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0xA30; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0xA38; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xA40; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0xA48; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0xA50; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xA60; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xAB0; // uint32
                constexpr std::ptrdiff_t v_angle = 0xAB4; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0xAC0; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0xACC; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0xAD0; // sky3dparams_t
                constexpr std::ptrdiff_t m_fTimeLastHurt = 0xB60; // GameTime_t
                constexpr std::ptrdiff_t m_flDeathTime = 0xB64; // GameTime_t
                constexpr std::ptrdiff_t m_fNextSuicideTime = 0xB68; // GameTime_t
                constexpr std::ptrdiff_t m_fInitHUD = 0xB6C; // bool
                constexpr std::ptrdiff_t m_pExpresser = 0xB70; // CAI_Expresser*
                constexpr std::ptrdiff_t m_hController = 0xB78; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xB80; // float32
                constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xB84; // float32
                constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xB88; // CEntityIndex
                constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xB90; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MNetworkOverride
            // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
            // NetworkVarNames: m_nWeaponParity (uint32)
            namespace CCSGOViewModel {
                constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x930; // bool
                constexpr std::ptrdiff_t m_nWeaponParity = 0x934; // uint32
                constexpr std::ptrdiff_t m_nOldWeaponParity = 0x938; // uint32
            }
            // Parent: CBasePlayerWeapon
            // Fields count: 62
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
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_iNumEmptyAttacks (int)
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xCE0; // bool
                constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xCE8; // float32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xCEC; // int32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xCF0; // int32
                constexpr std::ptrdiff_t m_ePlayerFireEvent = 0xCF4; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0xCF8; // WeaponAttackType_t
                constexpr std::ptrdiff_t m_seqIdle = 0xCFC; // HSequence
                constexpr std::ptrdiff_t m_seqFirePrimary = 0xD00; // HSequence
                constexpr std::ptrdiff_t m_seqFireSecondary = 0xD04; // HSequence
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0xD08; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0xD20; // HSequence
                constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0xD24; // int32
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0xD28; // HSequence[7]
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xD50; // bool
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xD51; // bool
                constexpr std::ptrdiff_t m_iState = 0xD54; // CSWeaponState_t
                constexpr std::ptrdiff_t m_flLastTimeInAir = 0xD58; // GameTime_t
                constexpr std::ptrdiff_t m_flLastDeployTime = 0xD5C; // GameTime_t
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xD60; // int32
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xD64; // uint32
                constexpr std::ptrdiff_t m_bReloadsWithClips = 0xD68; // bool
                constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0xD88; // GameTime_t
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xD8C; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xD90; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0xDB8; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xDBC; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xDC0; // 
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xDCC; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xDD0; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xDD4; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xDD8; // float32
                constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0xDDC; // GameTime_t
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xDE0; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xDE4; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0xDE8; // bool
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xDEC; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xDF0; // float32
                constexpr std::ptrdiff_t m_bInReload = 0xDF4; // bool
                constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0xDF5; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xDF8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xDFC; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0xDFD; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xE00; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xE04; // int32
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xE08; // float32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xE20; // bool
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xE21; // bool
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xE24; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xE28; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0xE2C; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0xE30; // GameTick_t
                constexpr std::ptrdiff_t m_donated = 0xE54; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0xE58; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xE5C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xE5D; // bool
                constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0xE5E; // bool
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xE60; // int32
                constexpr std::ptrdiff_t m_IronSightController = 0xE68; // CIronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0xE80; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xE84; // GameTime_t
                constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0xE88; // int32
                constexpr std::ptrdiff_t m_flWatTickOffset = 0xE8C; // float32
            }
            // Parent: CCSWeaponBase
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            namespace CCSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0xE90; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0xE94; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0xEA0; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0xEA4; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0xEA5; // bool
                constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0xEA6; // bool
                constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xEA7; // bool
                constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0xEA8; // bool
                constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0xEA9; // bool
            }
            // Parent: CCSWeaponBase
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            namespace CC4 {
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xE90; // 
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0xE9C; // 
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0xEA8; // bool
                constexpr std::ptrdiff_t m_bStartedArming = 0xEA9; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0xEAC; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0xEB0; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0xEB1; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0xEB8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xED0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0xED4; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0xEDB; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0xEB0; // GameTime_t
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDisplayHealth (float)
            namespace CWeaponShield {
                constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0xEB0; // float32
                constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0xEB4; // GameTime_t
                constexpr std::ptrdiff_t m_flDisplayHealth = 0xEB8; // float32
            }
            // Parent: CBaseCSGrenadeProjectile
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            namespace CMolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0xA98; // bool
                constexpr std::ptrdiff_t m_bDetonated = 0xAA4; // bool
                constexpr std::ptrdiff_t m_stillTimer = 0xAA8; // IntervalTimer
                constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xB88; // bool
            }
            // Parent: CBaseCSGrenadeProjectile
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace CDecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0xAA0; // int32
                constexpr std::ptrdiff_t m_shotsRemaining = 0xAA4; // int32
                constexpr std::ptrdiff_t m_fExpireTime = 0xAA8; // GameTime_t
                constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xAB8; // uint16
            }
            // Parent: CBaseCSGrenadeProjectile
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (CUtlVector<uint8>)
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xAB0; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xAB4; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0xAB8; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xABC; // 
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xAC8; // 
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xAD8; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_flLastBounce = 0xAF0; // GameTime_t
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xAF4; // GameTime_t
            }
            // Parent: CCSWeaponBase
            // Fields count: 13
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
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            namespace CBaseCSGrenade {
                constexpr std::ptrdiff_t m_bRedraw = 0xE90; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0xE91; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0xE92; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0xE93; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0xE94; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0xE98; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0xE9C; // float32
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0xEA0; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0xEA4; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0xEA8; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0xEAC; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0xEB0; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0xEB4; // CHandle<CCSWeaponBase>
            }
            // Parent: CCSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
            // NetworkVarNames: m_bRedraw (bool)
            namespace CWeaponBaseItem {
                constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0xE90; // CountdownTimer
                constexpr std::ptrdiff_t m_bRedraw = 0xEA8; // bool
            }
            // Parent: CCSWeaponBase
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace CFists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0xE90; // bool
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0xE94; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_bRestorePrevWep = 0xE98; // bool
                constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0xE9C; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_hWeaponPrevious = 0xEA0; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0xEA4; // bool
                constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0xEA5; // bool
            }
            // Parent: CBasePlayerPawn
            // Fields count: 136
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
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bIsScoped (bool)
            // NetworkVarNames: m_bIsWalking (bool)
            // NetworkVarNames: m_bResumeZoom (bool)
            // NetworkVarNames: m_bIsDefusing (bool)
            // NetworkVarNames: m_bIsGrabbingHostage (bool)
            // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
            // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
            // NetworkVarNames: m_bGunGameImmunity (bool)
            // NetworkVarNames: m_GunGameImmunityColor (Color)
            // NetworkVarNames: m_fMolotovDamageTime (float)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_bCanMoveDuringFreezePeriod (bool)
            // NetworkVarNames: m_flGuardianTooFarDistFrac (float)
            // NetworkVarNames: m_flDetectedByEnemySensorTime (GameTime_t)
            // NetworkVarNames: m_nHeavyAssaultSuitCooldownRemaining (int)
            // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
            // NetworkVarNames: m_bHasNightVision (bool)
            // NetworkVarNames: m_bNightVisionOn (bool)
            // NetworkVarNames: m_bInNoDefuseArea (bool)
            // NetworkVarNames: m_bKilledByTaser (bool)
            // NetworkVarNames: m_iMoveState (int)
            // NetworkVarNames: m_nWhichBombZone (int)
            // NetworkVarNames: m_iDirection (int)
            // NetworkVarNames: m_iShotsFired (int)
            // NetworkVarNames: m_ArmorValue (int32)
            // NetworkVarNames: m_flVelocityModifier (float)
            // NetworkVarNames: m_flHitHeading (float)
            // NetworkVarNames: m_nHitBodyPart (int)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_bWaitForNoAttack (bool)
            // NetworkVarNames: m_flLowerBodyYawTarget (float)
            // NetworkVarNames: m_bStrafing (bool)
            // NetworkVarNames: m_thirdPersonHeading (QAngle)
            // NetworkVarNames: m_flSlopeDropOffset (float)
            // NetworkVarNames: m_flSlopeDropHeight (float)
            // NetworkVarNames: m_vHeadConstraintOffset (Vector)
            // NetworkVarNames: m_angEyeAngles (QAngle)
            // NetworkVarNames: m_bHideTargetID (bool)
            // NetworkVarNames: m_bHud_MiniScoreHidden (bool)
            // NetworkVarNames: m_bHud_RadarHidden (bool)
            // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
            // NetworkVarNames: m_nLastConcurrentKilled (int)
            // NetworkVarNames: m_nDeathCamMusic (int)
            // NetworkVarNames: m_iAddonBits (int)
            // NetworkVarNames: m_iPrimaryAddon (int)
            // NetworkVarNames: m_iSecondaryAddon (int)
            // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
            // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
            // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
            // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
            // NetworkVarNames: m_nSurvivalTeamNumber (int)
            // NetworkVarNames: m_bKilledByHeadshot (bool)
            namespace CCSPlayerPawnBase {
                constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xBC0; // CTouchExpansionComponent
                constexpr std::ptrdiff_t m_pPingServices = 0xC10; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_pViewModelServices = 0xC18; // CPlayer_ViewModelServices*
                constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0xC20; // uint32
                constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0xC24; // float32
                constexpr std::ptrdiff_t m_hOriginalController = 0xC28; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_blindUntilTime = 0xC2C; // GameTime_t
                constexpr std::ptrdiff_t m_blindStartTime = 0xC30; // GameTime_t
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0xC34; // GameTime_t
                constexpr std::ptrdiff_t m_entitySpottedState = 0xC38; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xC50; // int32
                constexpr std::ptrdiff_t m_iPlayerState = 0xC54; // CSPlayerState
                constexpr std::ptrdiff_t m_chickenIdleSoundTimer = 0xC60; // CountdownTimer
                constexpr std::ptrdiff_t m_chickenJumpSoundTimer = 0xC78; // CountdownTimer
                constexpr std::ptrdiff_t m_vecLastBookmarkedPosition = 0xD30; // 
                constexpr std::ptrdiff_t m_flLastDistanceTraveledNotice = 0xD3C; // float32
                constexpr std::ptrdiff_t m_flAccumulatedDistanceTraveled = 0xD40; // float32
                constexpr std::ptrdiff_t m_flLastFriendlyFireDamageReductionRatio = 0xD44; // float32
                constexpr std::ptrdiff_t m_bRespawning = 0xD48; // bool
                constexpr std::ptrdiff_t m_nLastPickupPriority = 0xD4C; // int32
                constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0xD50; // float32
                constexpr std::ptrdiff_t m_bIsScoped = 0xD54; // bool
                constexpr std::ptrdiff_t m_bIsWalking = 0xD55; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0xD56; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0xD57; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0xD58; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0xD5C; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0xD60; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0xD64; // bool
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0xD65; // Color
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0xD6C; // float32
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xD70; // bool
                constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0xD71; // bool
                constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0xD74; // float32
                constexpr std::ptrdiff_t m_flNextGuardianTooFarHurtTime = 0xD78; // float32
                constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0xD7C; // GameTime_t
                constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0xD80; // float32
                constexpr std::ptrdiff_t m_flLastEquippedHelmetTime = 0xD84; // GameTime_t
                constexpr std::ptrdiff_t m_flLastEquippedArmorTime = 0xD88; // GameTime_t
                constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0xD8C; // int32
                constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0xD90; // bool
                constexpr std::ptrdiff_t m_flLastBumpMineBumpTime = 0xD94; // GameTime_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0xD98; // GameTime_t
                constexpr std::ptrdiff_t m_iNumSpawns = 0xD9C; // int32
                constexpr std::ptrdiff_t m_iShouldHaveCash = 0xDA0; // int32
                constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xDA8; // float32
                constexpr std::ptrdiff_t m_flNameChangeHistory = 0xDAC; // float32[5]
                constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0xDC0; // float32
                constexpr std::ptrdiff_t m_fLastGivenBombTime = 0xDC4; // float32
                constexpr std::ptrdiff_t m_bHasNightVision = 0xDC8; // bool
                constexpr std::ptrdiff_t m_bNightVisionOn = 0xDC9; // bool
                constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xDCC; // float32
                constexpr std::ptrdiff_t m_flLastMoneyUpdateTime = 0xDD0; // float32
                constexpr std::ptrdiff_t m_MenuStringBuffer = 0xDD4; // char[1024]
                constexpr std::ptrdiff_t m_fIntroCamTime = 0x11D4; // float32
                constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x11D8; // int32
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x11DC; // bool
                constexpr std::ptrdiff_t m_bKilledByTaser = 0x11DD; // bool
                constexpr std::ptrdiff_t m_iMoveState = 0x11E0; // int32
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x11E4; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x11E8; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x11EC; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x11F8; // 
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1204; // 
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1210; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1228; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1240; // Vector[2]
                constexpr std::ptrdiff_t m_bDiedAirborne = 0x1258; // bool
                constexpr std::ptrdiff_t m_iBombSiteIndex = 0x125C; // CEntityIndex
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1260; // int32
                constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1264; // bool
                constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1265; // bool
                constexpr std::ptrdiff_t m_iDirection = 0x1268; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x126C; // int32
                constexpr std::ptrdiff_t m_ArmorValue = 0x1270; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1274; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1278; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x127C; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x1280; // int32
                constexpr std::ptrdiff_t m_iHostagesKilled = 0x1284; // int32
                constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1288; // 
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1294; // float32
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1298; // float32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x129C; // float32
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x12A0; // int32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x12A4; // bool
                constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x12A8; // float32
                constexpr std::ptrdiff_t m_bStrafing = 0x12AC; // bool
                constexpr std::ptrdiff_t m_lastStandingPos = 0x12B0; // 
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x12BC; // float32
                constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x12C0; // CountdownTimer
                constexpr std::ptrdiff_t m_lastLadderNormal = 0x12D8; // 
                constexpr std::ptrdiff_t m_lastLadderPos = 0x12E4; // 
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x12F0; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x12FC; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1300; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1304; // 
                constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1318; // int32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x131C; // QAngle
                constexpr std::ptrdiff_t m_bVCollisionInitted = 0x1328; // bool
                constexpr std::ptrdiff_t m_storedSpawnPosition = 0x132C; // 
                constexpr std::ptrdiff_t m_storedSpawnAngle = 0x1338; // QAngle
                constexpr std::ptrdiff_t m_bIsSpawning = 0x1344; // bool
                constexpr std::ptrdiff_t m_bHideTargetID = 0x1345; // bool
                constexpr std::ptrdiff_t m_nNumDangerZoneDamageHits = 0x1348; // int32
                constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x134C; // bool
                constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x134D; // bool
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1350; // CEntityIndex
                constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x1354; // int32
                constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1358; // int32
                constexpr std::ptrdiff_t m_iAddonBits = 0x135C; // int32
                constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1360; // int32
                constexpr std::ptrdiff_t m_iSecondaryAddon = 0x1364; // int32
                constexpr std::ptrdiff_t m_currentDeafnessFilter = 0x1368; // CUtlStringToken
                constexpr std::ptrdiff_t m_NumEnemiesKilledThisSpawn = 0x136C; // int32
                constexpr std::ptrdiff_t m_NumEnemiesKilledThisRound = 0x1370; // int32
                constexpr std::ptrdiff_t m_NumEnemiesAtRoundStart = 0x1374; // int32
                constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1378; // bool
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x137C; // uint32[5]
                constexpr std::ptrdiff_t m_iDeathFlags = 0x1390; // int32
                constexpr std::ptrdiff_t m_hPet = 0x1394; // CHandle<CChicken>
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1560; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1562; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1564; // uint16
                constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x1568; // int32
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x156C; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1570; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1574; // 
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1580; // bool
                constexpr std::ptrdiff_t m_LastHitBox = 0x1584; // int32
                constexpr std::ptrdiff_t m_LastHealth = 0x1588; // int32
                constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x158C; // float32
                constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x1590; // float32
                constexpr std::ptrdiff_t m_pBot = 0x1598; // CCSBot*
                constexpr std::ptrdiff_t m_bBotAllowActive = 0x15A0; // bool
                constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x15A1; // bool
            }
            // Parent: CCSPlayerPawnBase
            // Fields count: 0
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
            // Parent: CCSPlayerPawnBase
            // Fields count: 49
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
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x15A8; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x15B0; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x15B8; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x15C0; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pRadioServices = 0x15C8; // CCSPlayer_RadioServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x15D0; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_nCharacterDefIndex = 0x15D8; // uint16
                constexpr std::ptrdiff_t m_hPreviousModel = 0x15E0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x15E8; // bool
                constexpr std::ptrdiff_t m_strVOPrefix = 0x15F0; // CUtlString
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x15F8; // char[18]
                constexpr std::ptrdiff_t m_bInHostageResetZone = 0x16B8; // bool
                constexpr std::ptrdiff_t m_bInBuyZone = 0x16B9; // bool
                constexpr std::ptrdiff_t m_bWasInBuyZone = 0x16BA; // bool
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x16BB; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x16BC; // bool
                constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x16BD; // bool
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x16C0; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x16C4; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x16C8; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x16C9; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x16CC; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x16D0; // loadout_slot_t
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16D4; // GameTime_t
                constexpr std::ptrdiff_t m_flLandseconds = 0x16D8; // float32
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x16DC; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x16E8; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x16F4; // int32
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x16F8; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1700; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1718; // bool
                constexpr std::ptrdiff_t m_xLastHeadBoneTransform = 0x1D60; // CTransform
                constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x1D80; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0x1D84; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x1D88; // bool
                constexpr std::ptrdiff_t m_iPlayerLocked = 0x1D8C; // int32
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1D94; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1D98; // GameTime_t
                constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x1D9C; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1DA0; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1DA4; // 
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1DB0; // 
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1DBC; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1DFC; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1E00; // 
                constexpr std::ptrdiff_t m_EconGloves = 0x1E10; // CEconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x2088; // uint8
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x208C; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2098; // bool
            }
            // Parent: None
            // Fields count: 39
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
                constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xA28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xA50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xA78; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRescued = 0xAA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_entitySpottedState = 0xAC8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xAE0; // int32
                constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xAE4; // uint32
                constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xAE8; // uint32
                constexpr std::ptrdiff_t m_bRemove = 0xAEC; // bool
                constexpr std::ptrdiff_t m_vel = 0xAF0; // 
                constexpr std::ptrdiff_t m_isRescued = 0xAFC; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xAFD; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0xB00; // int32
                constexpr std::ptrdiff_t m_leader = 0xB04; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_lastLeader = 0xB08; // CHandle<CCSPlayerPawnBase>
                constexpr std::ptrdiff_t m_reuseTimer = 0xB10; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xB28; // bool
                constexpr std::ptrdiff_t m_accel = 0xB2C; // 
                constexpr std::ptrdiff_t m_isRunning = 0xB38; // bool
                constexpr std::ptrdiff_t m_isCrouching = 0xB39; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0xB40; // CountdownTimer
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xB58; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x2B68; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2B80; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2C10; // CountdownTimer
                constexpr std::ptrdiff_t m_wiggleTimer = 0x2C30; // CountdownTimer
                constexpr std::ptrdiff_t m_isAdjusted = 0x2C4C; // bool
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2C4D; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x2C50; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x2C54; // GameTime_t
                constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2C58; // 
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2C64; // 
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x2C70; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2C74; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x2C78; // GameTime_t
                constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2C7C; // int32
                constexpr std::ptrdiff_t m_nPickupEventCount = 0x2C80; // int32
                constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2C84; // 
                constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2CA4; // 
            }
        }
    }
}
