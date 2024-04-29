// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-29 23:05:53.220233445 UTC

namespace CS2Dumper.Schemas {
    // Module: libserver.so
    // Classes count: 218
    // Enums count: 128
    public static class LibserverSo {
        // Alignment: 4
        // Members count: 3
        public enum PropDoorRotatingOpenDirection_e : uint {
            DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
            DOOR_ROTATING_OPEN_FORWARD = 0x1,
            DOOR_ROTATING_OPEN_BACKWARD = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum SceneOnPlayerDeath_t : uint {
            SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
            SCENE_ONPLAYERDEATH_CANCEL = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum LessonPanelLayoutFileTypes_t : uint {
            LAYOUT_HAND_DEFAULT = 0x0,
            LAYOUT_WORLD_DEFAULT = 0x1,
            LAYOUT_CUSTOM = 0x2
        }
        // Alignment: 4
        // Members count: 5
        public enum TimelineCompression_t : uint {
            TIMELINE_COMPRESSION_SUM = 0x0,
            TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
            TIMELINE_COMPRESSION_AVERAGE = 0x2,
            TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
            TIMELINE_COMPRESSION_TOTAL = 0x4
        }
        // Alignment: 4
        // Members count: 3
        public enum SubclassVDataChangeType_t : uint {
            SUBCLASS_VDATA_CREATED = 0x0,
            SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
            SUBCLASS_VDATA_RELOADED = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum C4LightEffect_t : uint {
            eLightEffectNone = 0x0,
            eLightEffectDropped = 0x1,
            eLightEffectThirdPersonHeld = 0x2
        }
        // Alignment: 4
        // Members count: 5
        public enum StanceType_t : uint {
            STANCE_CURRENT = 0xFFFFFFFFFFFFFFFF,
            STANCE_DEFAULT = 0x0,
            STANCE_CROUCHING = 0x1,
            STANCE_PRONE = 0x2,
            NUM_STANCES = 0x3
        }
        // Alignment: 4
        // Members count: 3
        public enum Explosions : uint {
            expRandom = 0x0,
            expDirected = 0x1,
            expUsePrecise = 0x2
        }
        // Alignment: 4
        // Members count: 9
        public enum PreviewCharacterMode : uint {
            DIORAMA = 0x0,
            MAIN_MENU = 0x1,
            BUY_MENU = 0x2,
            TEAM_SELECT = 0x3,
            END_OF_MATCH = 0x4,
            INVENTORY_INSPECT = 0x5,
            WALKING = 0x6,
            TEAM_INTRO = 0x7,
            WINGMAN_INTRO = 0x8
        }
        // Alignment: 4
        // Members count: 3
        public enum ObserverInterpState_t : uint {
            OBSERVER_INTERP_NONE = 0x0,
            OBSERVER_INTERP_TRAVELING = 0x1,
            OBSERVER_INTERP_SETTLING = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum WorldTextPanelOrientation_t : uint {
            WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
            WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
            WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum WorldTextPanelHorizontalAlign_t : uint {
            WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
            WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2
        }
        // Alignment: 1
        // Members count: 3
        public enum SequenceFinishNotifyState_t : byte {
            eDoNotNotify = 0x0,
            eNotifyWhenFinished = 0x1,
            eNotifyTriggered = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum SoundEventStartType_t : uint {
            SOUNDEVENT_START_PLAYER = 0x0,
            SOUNDEVENT_START_WORLD = 0x1,
            SOUNDEVENT_START_ENTITY = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum TrainOrientationType_t : uint {
            TrainOrientation_Fixed = 0x0,
            TrainOrientation_AtPathTracks = 0x1,
            TrainOrientation_LinearBlend = 0x2,
            TrainOrientation_EaseInEaseOut = 0x3
        }
        // Alignment: 4
        // Members count: 7
        public enum CSWeaponCategory : uint {
            WEAPONCATEGORY_OTHER = 0x0,
            WEAPONCATEGORY_MELEE = 0x1,
            WEAPONCATEGORY_SECONDARY = 0x2,
            WEAPONCATEGORY_SMG = 0x3,
            WEAPONCATEGORY_RIFLE = 0x4,
            WEAPONCATEGORY_HEAVY = 0x5,
            WEAPONCATEGORY_COUNT = 0x6
        }
        // Alignment: 1
        // Members count: 3
        public enum BeginDeathLifeStateTransition_t : byte {
            NO_CHANGE_IN_LIFESTATE = 0x0,
            TRANSITION_TO_LIFESTATE_DYING = 0x1,
            TRANSITION_TO_LIFESTATE_DEAD = 0x2
        }
        // Alignment: 4
        // Members count: 24
        public enum PlayerAnimEvent_t : uint {
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
        }
        // Alignment: 1
        // Members count: 9
        public enum ItemFlagTypes_t : byte {
            ITEM_FLAG_NONE = 0x0,
            ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 0x1,
            ITEM_FLAG_NOAUTORELOAD = 0x2,
            ITEM_FLAG_NOAUTOSWITCHEMPTY = 0x4,
            ITEM_FLAG_LIMITINWORLD = 0x8,
            ITEM_FLAG_EXHAUSTIBLE = 0x10,
            ITEM_FLAG_DOHITLOCATIONDMG = 0x20,
            ITEM_FLAG_NOAMMOPICKUPS = 0x40,
            ITEM_FLAG_NOITEMPICKUP = 0x80
        }
        // Alignment: 1
        // Members count: 2
        public enum ShatterPanelMode : byte {
            SHATTER_GLASS = 0x0,
            SHATTER_DRYWALL = 0x1
        }
        // Alignment: 1
        // Members count: 10
        public enum SurroundingBoundsType_t : byte {
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
        }
        // Alignment: 4
        // Members count: 5
        public enum LifeState_t : uint {
            LIFE_ALIVE = 0x0,
            LIFE_DYING = 0x1,
            LIFE_DEAD = 0x2,
            LIFE_RESPAWNABLE = 0x3,
            LIFE_RESPAWNING = 0x4
        }
        // Alignment: 4
        // Members count: 5
        public enum NPCFollowFormation_t : uint {
            Default = 0xFFFFFFFFFFFFFFFF,
            CloseCircle = 0x0,
            WideCircle = 0x1,
            MediumCircle = 0x5,
            Sidekick = 0x6
        }
        // Alignment: 4
        // Members count: 3
        public enum CSWeaponMode : uint {
            Primary_Mode = 0x0,
            Secondary_Mode = 0x1,
            WeaponMode_MAX = 0x2
        }
        // Alignment: 1
        // Members count: 3
        public enum OnFrame : byte {
            ONFRAME_UNKNOWN = 0x0,
            ONFRAME_TRUE = 0x1,
            ONFRAME_FALSE = 0x2
        }
        // Alignment: 4
        // Members count: 12
        public enum Materials : uint {
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
        }
        // Alignment: 4
        // Members count: 6
        public enum ScriptedMoveTo_t : uint {
            CINE_MOVETO_WAIT = 0x0,
            CINE_MOVETO_WALK = 0x1,
            CINE_MOVETO_RUN = 0x2,
            CINE_MOVETO_CUSTOM = 0x3,
            CINE_MOVETO_TELEPORT = 0x4,
            CINE_MOVETO_WAIT_FACING = 0x5
        }
        // Alignment: 4
        // Members count: 5
        public enum AnimLoopMode_t : uint {
            ANIM_LOOP_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
            ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
            ANIM_LOOP_MODE_LOOPING = 0x1,
            ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
            ANIM_LOOP_MODE_COUNT = 0x3
        }
        // Alignment: 4
        // Members count: 23
        public enum SoundFlags_t : uint {
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
            ALL_CONTEXTS = 0xFFF00000,
            ALL_SCENTS = 0x0,
            ALL_SOUNDS = 0xFFFFF
        }
        // Alignment: 4
        // Members count: 10
        public enum Class_T : uint {
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
        }
        // Alignment: 4
        // Members count: 2
        public enum filter_t : uint {
            FILTER_AND = 0x0,
            FILTER_OR = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum CSWeaponSilencerType : uint {
            WEAPONSILENCER_NONE = 0x0,
            WEAPONSILENCER_DETACHABLE = 0x1,
            WEAPONSILENCER_INTEGRATED = 0x2
        }
        // Alignment: 4
        // Members count: 17
        public enum BaseExplosionTypes_t : uint {
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
        }
        // Alignment: 4
        // Members count: 43
        public enum GameAnimEventIndex_t : uint {
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
        }
        // Alignment: 1
        // Members count: 3
        public enum FixAngleSet_t : byte {
            None = 0x0,
            Absolute = 0x1,
            Relative = 0x2
        }
        // Alignment: 4
        // Members count: 7
        public enum IChoreoServices__ScriptState_t : uint {
            SCRIPT_PLAYING = 0x0,
            SCRIPT_WAIT = 0x1,
            SCRIPT_POST_IDLE = 0x2,
            SCRIPT_CLEANUP = 0x3,
            SCRIPT_WALK_TO_MARK = 0x4,
            SCRIPT_RUN_TO_MARK = 0x5,
            SCRIPT_CUSTOM_MOVE_TO_MARK = 0x6
        }
        // Alignment: 4
        // Members count: 2
        public enum CommandEntitySpecType_t : uint {
            SPEC_SEARCH = 0x0,
            SPEC_TYPES_COUNT = 0x1
        }
        // Alignment: 4
        // Members count: 5
        public enum Touch_t : uint {
            touch_none = 0x0,
            touch_player_only = 0x1,
            touch_npc_only = 0x2,
            touch_player_or_npc = 0x3,
            touch_player_or_npc_or_physicsprop = 0x4
        }
        // Alignment: 4
        // Members count: 3
        public enum TrainVelocityType_t : uint {
            TrainVelocity_Instantaneous = 0x0,
            TrainVelocity_LinearBlend = 0x1,
            TrainVelocity_EaseInEaseOut = 0x2
        }
        // Alignment: 4
        // Members count: 20
        public enum CSWeaponType : uint {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum EntFinderMethod_t : uint {
            ENT_FIND_METHOD_NEAREST = 0x0,
            ENT_FIND_METHOD_FARTHEST = 0x1,
            ENT_FIND_METHOD_RANDOM = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum PropDoorRotatingSpawnPos_t : uint {
            DOOR_SPAWN_CLOSED = 0x0,
            DOOR_SPAWN_OPEN_FORWARD = 0x1,
            DOOR_SPAWN_OPEN_BACK = 0x2,
            DOOR_SPAWN_AJAR = 0x3
        }
        // Alignment: 1
        // Members count: 2
        public enum ShardSolid_t : byte {
            SHARD_SOLID = 0x0,
            SHARD_DEBRIS = 0x1
        }
        // Alignment: 1
        // Members count: 13
        public enum RenderMode_t : byte {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum ForcedCrouchState_t : uint {
            FORCEDCROUCH_NONE = 0x0,
            FORCEDCROUCH_CROUCHED = 0x1,
            FORCEDCROUCH_UNCROUCHED = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum PerformanceMode_t : uint {
            PM_NORMAL = 0x0,
            PM_NO_GIBS = 0x1,
            PM_FULL_GIBS = 0x2,
            PM_REDUCED_GIBS = 0x3
        }
        // Alignment: 4
        // Members count: 8
        public enum TOGGLE_STATE : uint {
            TS_AT_TOP = 0x0,
            TS_AT_BOTTOM = 0x1,
            TS_GOING_UP = 0x2,
            TS_GOING_DOWN = 0x3,
            DOOR_OPEN = 0x0,
            DOOR_CLOSED = 0x1,
            DOOR_OPENING = 0x2,
            DOOR_CLOSING = 0x3
        }
        // Alignment: 4
        // Members count: 74
        public enum loadout_slot_t : uint {
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
        }
        // Alignment: 4
        // Members count: 19
        public enum NavAttributeEnum : uint {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum MoveLinearAuthoredPos_t : uint {
            MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
            MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
            MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum ValueRemapperMomentumType_t : uint {
            MomentumType_None = 0x0,
            MomentumType_Friction = 0x1,
            MomentumType_SpringTowardSnapValue = 0x2,
            MomentumType_SpringAwayFromSnapValue = 0x3
        }
        // Alignment: 4
        // Members count: 12
        public enum Hull_t : uint {
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
        }
        // Alignment: 4
        // Members count: 6
        public enum PreviewWeaponState : uint {
            DROPPED = 0x0,
            HOLSTERED = 0x1,
            DEPLOYED = 0x2,
            PLANTED = 0x3,
            INSPECT = 0x4,
            ICON = 0x5
        }
        // Alignment: 4
        // Members count: 9
        public enum EInButtonState : uint {
            IN_BUTTON_UP = 0x0,
            IN_BUTTON_DOWN = 0x1,
            IN_BUTTON_DOWN_UP = 0x2,
            IN_BUTTON_UP_DOWN = 0x3,
            IN_BUTTON_UP_DOWN_UP = 0x4,
            IN_BUTTON_DOWN_UP_DOWN = 0x5,
            IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
            IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
            IN_BUTTON_STATE_COUNT = 0x8
        }
        // Alignment: 4
        // Members count: 4
        public enum BeamClipStyle_t : uint {
            kNOCLIP = 0x0,
            kGEOCLIP = 0x1,
            kMODELCLIP = 0x2,
            kBEAMCLIPSTYLE_NUMBITS = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum WeaponAttackType_t : uint {
            eInvalid = 0xFFFFFFFFFFFFFFFF,
            ePrimary = 0x0,
            eSecondary = 0x1,
            eCount = 0x2
        }
        // Alignment: 4
        // Members count: 18
        public enum CSPlayerBlockingUseAction_t : uint {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum CSWeaponState_t : uint {
            WEAPON_NOT_CARRIED = 0x0,
            WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
            WEAPON_IS_ACTIVE = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum CommandExecMode_t : uint {
            EXEC_MANUAL = 0x0,
            EXEC_LEVELSTART = 0x1,
            EXEC_PERIODIC = 0x2,
            EXEC_MODES_COUNT = 0x3
        }
        // Alignment: 1
        // Members count: 5
        public enum ShatterDamageCause : byte {
            SHATTERDAMAGE_BULLET = 0x0,
            SHATTERDAMAGE_MELEE = 0x1,
            SHATTERDAMAGE_THROWN = 0x2,
            SHATTERDAMAGE_SCRIPT = 0x3,
            SHATTERDAMAGE_EXPLOSIVE = 0x4
        }
        // Alignment: 4
        // Members count: 4
        public enum ScriptedOnDeath_t : uint {
            SS_ONDEATH_NOT_APPLICABLE = 0xFFFFFFFFFFFFFFFF,
            SS_ONDEATH_UNDEFINED = 0x0,
            SS_ONDEATH_RAGDOLL = 0x1,
            SS_ONDEATH_ANIMATED_DEATH = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum ScriptedMoveType_t : uint {
            SCRIPTED_MOVETYPE_NONE = 0x0,
            SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
            SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
            SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3
        }
        // Alignment: 4
        // Members count: 3
        public enum NPCLookType_t : uint {
            Chest = 0x0,
            Head = 0x1,
            Eyes = 0x2
        }
        // Alignment: 4
        // Members count: 17
        public enum gear_slot_t : uint {
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
        }
        // Alignment: 4
        // Members count: 10
        public enum CSPlayerState : uint {
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
        }
        // Alignment: 4
        // Members count: 2
        public enum ScriptedConflictResponse_t : uint {
            SS_CONFLICT_ENQUEUE = 0x0,
            SS_CONFLICT_INTERRUPT = 0x1
        }
        // Alignment: 1
        // Members count: 7
        public enum WaterLevel_t : byte {
            WL_NotInWater = 0x0,
            WL_Feet = 0x1,
            WL_Knees = 0x2,
            WL_Waist = 0x3,
            WL_Chest = 0x4,
            WL_FullyUnderwater = 0x5,
            WL_Count = 0x6
        }
        // Alignment: 4
        // Members count: 3
        public enum WorldTextPanelVerticalAlign_t : uint {
            WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
            WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum AmmoPosition_t : uint {
            AMMO_POSITION_INVALID = 0xFFFFFFFFFFFFFFFF,
            AMMO_POSITION_PRIMARY = 0x0,
            AMMO_POSITION_SECONDARY = 0x1,
            AMMO_POSITION_COUNT = 0x2
        }
        // Alignment: 4
        // Members count: 23
        public enum PreviewEOMCelebration : uint {
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
        }
        // Alignment: 4
        // Members count: 5
        public enum EntityDisolveType_t : uint {
            ENTITY_DISSOLVE_INVALID = 0xFFFFFFFFFFFFFFFF,
            ENTITY_DISSOLVE_NORMAL = 0x0,
            ENTITY_DISSOLVE_ELECTRICAL = 0x1,
            ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
            ENTITY_DISSOLVE_CORE = 0x3
        }
        // Alignment: 8
        // Members count: 21
        public enum InputBitMask_t : ulong {
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
        }
        // Alignment: 4
        // Members count: 14
        public enum HitGroup_t : uint {
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
        }
        // Alignment: 4
        // Members count: 7
        public enum ChickenActivity : uint {
            IDLE = 0x0,
            WALK = 0x1,
            RUN = 0x2,
            HOP = 0x3,
            JUMP = 0x4,
            GLIDE = 0x5,
            LAND = 0x6
        }
        // Alignment: 4
        // Members count: 2
        public enum PointWorldTextReorientMode_t : uint {
            POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
            POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
        }
        // Alignment: 8
        // Members count: 39
        public enum DebugOverlayBits_t : ulong {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum AmmoFlags_t : uint {
            AMMO_FORCE_DROP_IF_CARRIED = 0x1,
            AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
            AMMO_FLAG_MAX = 0x2
        }
        // Alignment: 4
        // Members count: 6
        public enum HierarchyType_t : uint {
            HIERARCHY_NONE = 0x0,
            HIERARCHY_BONE_MERGE = 0x1,
            HIERARCHY_ATTACHMENT = 0x2,
            HIERARCHY_ABSORIGIN = 0x3,
            HIERARCHY_BONE = 0x4,
            HIERARCHY_TYPE_COUNT = 0x5
        }
        // Alignment: 4
        // Members count: 3
        public enum doorCheck_e : uint {
            DOOR_CHECK_FORWARD = 0x0,
            DOOR_CHECK_BACKWARD = 0x1,
            DOOR_CHECK_FULL = 0x2
        }
        // Alignment: 4
        // Members count: 7
        public enum BeamType_t : uint {
            BEAM_INVALID = 0x0,
            BEAM_POINTS = 0x1,
            BEAM_ENTPOINT = 0x2,
            BEAM_ENTS = 0x3,
            BEAM_HOSE = 0x4,
            BEAM_SPLINE = 0x5,
            BEAM_LASER = 0x6
        }
        // Alignment: 4
        // Members count: 4
        public enum EntitySubclassScope_t : uint {
            SUBCLASS_SCOPE_NONE = 0xFFFFFFFFFFFFFFFF,
            SUBCLASS_SCOPE_PRECIPITATION = 0x0,
            SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
            SUBCLASS_SCOPE_COUNT = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum PointTemplateClientOnlyEntityBehavior_t : uint {
            CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
            CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1
        }
        // Alignment: 1
        // Members count: 5
        public enum ShatterGlassStressType : byte {
            SHATTERGLASS_BLUNT = 0x0,
            SHATTERGLASS_BALLISTIC = 0x1,
            SHATTERGLASS_PULSE = 0x2,
            SHATTERDRYWALL_CHUNKS = 0x3,
            SHATTERGLASS_EXPLOSIVE = 0x4
        }
        // Alignment: 4
        // Members count: 3
        public enum TrackOrientationType_t : uint {
            TrackOrientation_Fixed = 0x0,
            TrackOrientation_FacePath = 0x1,
            TrackOrientation_FacePathAngles = 0x2
        }
        // Alignment: 4
        // Members count: 4
        public enum WeaponSwitchReason_t : uint {
            eDrawn = 0x0,
            eEquipped = 0x1,
            eUserInitiatedSwitchToLast = 0x2,
            eUserInitiatedSwitchHands = 0x3
        }
        // Alignment: 4
        // Members count: 2
        public enum ValueRemapperRatchetType_t : uint {
            RatchetType_Absolute = 0x0,
            RatchetType_EachEngage = 0x1
        }
        // Alignment: 4
        // Members count: 5
        public enum NavDirType : uint {
            NORTH = 0x0,
            EAST = 0x1,
            SOUTH = 0x2,
            WEST = 0x3,
            NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
        }
        // Alignment: 4
        // Members count: 2
        public enum CRR_Response__ResponseEnum_t : uint {
            MAX_RESPONSE_NAME = 0xC0,
            MAX_RULE_NAME = 0x80
        }
        // Alignment: 4
        // Members count: 4
        public enum MoveMountingAmount_t : uint {
            MOVE_MOUNT_NONE = 0x0,
            MOVE_MOUNT_LOW = 0x1,
            MOVE_MOUNT_HIGH = 0x2,
            MOVE_MOUNT_MAXCOUNT = 0x3
        }
        // Alignment: 1
        // Members count: 20
        public enum RenderFx_t : byte {
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
        }
        // Alignment: 4
        // Members count: 35
        public enum vote_create_failed_t : uint {
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
        }
        // Alignment: 4
        // Members count: 27
        public enum RumbleEffect_t : uint {
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
        }
        // Alignment: 4
        // Members count: 6
        public enum LatchDirtyPermission_t : uint {
            LATCH_DIRTY_DISALLOW = 0x0,
            LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
            LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
            LATCH_DIRTY_PREDICTION = 0x3,
            LATCH_DIRTY_FRAMESIMULATE = 0x4,
            LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
        }
        // Alignment: 4
        // Members count: 5
        public enum DoorState_t : uint {
            DOOR_STATE_CLOSED = 0x0,
            DOOR_STATE_OPENING = 0x1,
            DOOR_STATE_OPEN = 0x2,
            DOOR_STATE_CLOSING = 0x3,
            DOOR_STATE_AJAR = 0x4
        }
        // Alignment: 4
        // Members count: 3
        public enum ChatIgnoreType_t : uint {
            CHAT_IGNORE_NONE = 0x0,
            CHAT_IGNORE_ALL = 0x1,
            CHAT_IGNORE_TEAM = 0x2
        }
        // Alignment: 4
        // Members count: 7
        public enum PlayerConnectedState : uint {
            PlayerNeverConnected = 0xFFFFFFFFFFFFFFFF,
            PlayerConnected = 0x0,
            PlayerConnecting = 0x1,
            PlayerReconnecting = 0x2,
            PlayerDisconnecting = 0x3,
            PlayerDisconnected = 0x4,
            PlayerReserved = 0x5
        }
        // Alignment: 4
        // Members count: 3
        public enum SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint {
            kMIN_THRESHOLD = 0x0,
            kMIN_FULL = 0x1,
            kHIGHWATER = 0x2
        }
        // Alignment: 4
        // Members count: 1
        public enum navproperties_t : uint {
            NAV_IGNORE = 0x1
        }
        // Alignment: 1
        // Members count: 9
        public enum SolidType_t : byte {
            SOLID_NONE = 0x0,
            SOLID_BSP = 0x1,
            SOLID_BBOX = 0x2,
            SOLID_OBB = 0x3,
            SOLID_SPHERE = 0x4,
            SOLID_POINT = 0x5,
            SOLID_VPHYSICS = 0x6,
            SOLID_CAPSULE = 0x7,
            SOLID_LAST = 0x8
        }
        // Alignment: 4
        // Members count: 24
        public enum DamageTypes_t : uint {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum PointWorldTextJustifyVertical_t : uint {
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2
        }
        // Alignment: 4
        // Members count: 2
        public enum attributeprovidertypes_t : uint {
            PROVIDER_GENERIC = 0x0,
            PROVIDER_WEAPON = 0x1
        }
        // Alignment: 1
        // Members count: 6
        public enum MoveCollide_t : byte {
            MOVECOLLIDE_DEFAULT = 0x0,
            MOVECOLLIDE_FLY_BOUNCE = 0x1,
            MOVECOLLIDE_FLY_CUSTOM = 0x2,
            MOVECOLLIDE_FLY_SLIDE = 0x3,
            MOVECOLLIDE_COUNT = 0x4,
            MOVECOLLIDE_MAX_BITS = 0x3
        }
        // Alignment: 4
        // Members count: 7
        public enum IChoreoServices__ChoreoState_t : uint {
            STATE_PRE_SCRIPT = 0x0,
            STATE_WAIT_FOR_SCRIPT = 0x1,
            STATE_WALK_TO_MARK = 0x2,
            STATE_SYNCHRONIZE_SCRIPT = 0x3,
            STATE_PLAY_SCRIPT = 0x4,
            STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
            STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6
        }
        // Alignment: 4
        // Members count: 4
        public enum ValueRemapperOutputType_t : uint {
            OutputType_AnimationCycle = 0x0,
            OutputType_RotationX = 0x1,
            OutputType_RotationY = 0x2,
            OutputType_RotationZ = 0x3
        }
        // Alignment: 4
        // Members count: 3
        public enum PointTemplateOwnerSpawnGroupType_t : uint {
            INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
            INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
            INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum PointWorldTextJustifyHorizontal_t : uint {
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2
        }
        // Alignment: 4
        // Members count: 6
        public enum ShakeCommand_t : uint {
            SHAKE_START = 0x0,
            SHAKE_STOP = 0x1,
            SHAKE_AMPLITUDE = 0x2,
            SHAKE_FREQUENCY = 0x3,
            SHAKE_START_RUMBLEONLY = 0x4,
            SHAKE_START_NORUMBLE = 0x5
        }
        // Alignment: 4
        // Members count: 3
        public enum TRAIN_CODE : uint {
            TRAIN_SAFE = 0x0,
            TRAIN_BLOCKING = 0x1,
            TRAIN_FOLLOWING = 0x2
        }
        // Alignment: 4
        // Members count: 3
        public enum BrushSolidities_e : uint {
            BRUSHSOLID_TOGGLE = 0x0,
            BRUSHSOLID_NEVER = 0x1,
            BRUSHSOLID_ALWAYS = 0x2
        }
        // Alignment: 4
        // Members count: 13
        public enum QuestProgress__Reason : uint {
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
        }
        // Alignment: 4
        // Members count: 2
        public enum ModifyDamageReturn_t : uint {
            CONTINUE_TO_APPLY_DAMAGE = 0x0,
            ABORT_DO_NOT_APPLY_DAMAGE = 0x1
        }
        // Alignment: 4
        // Members count: 2
        public enum ShadowType_t : uint {
            SHADOWS_NONE = 0x0,
            SHADOWS_SIMPLE = 0x1
        }
        // Alignment: 4
        // Members count: 8
        public enum GrenadeType_t : uint {
            GRENADE_TYPE_EXPLOSIVE = 0x0,
            GRENADE_TYPE_FLASH = 0x1,
            GRENADE_TYPE_FIRE = 0x2,
            GRENADE_TYPE_DECOY = 0x3,
            GRENADE_TYPE_SMOKE = 0x4,
            GRENADE_TYPE_SENSOR = 0x5,
            GRENADE_TYPE_SNOWBALL = 0x6,
            GRENADE_TYPE_TOTAL = 0x7
        }
        // Alignment: 4
        // Members count: 2
        public enum ValueRemapperInputType_t : uint {
            InputType_PlayerShootPosition = 0x0,
            InputType_PlayerShootPositionAroundAxis = 0x1
        }
        // Alignment: 1
        // Members count: 8
        public enum EKillTypes_t : byte {
            KILL_NONE = 0x0,
            KILL_DEFAULT = 0x1,
            KILL_HEADSHOT = 0x2,
            KILL_BLAST = 0x3,
            KILL_BURN = 0x4,
            KILL_SLASH = 0x5,
            KILL_SHOCK = 0x6,
            KILLTYPE_COUNT = 0x7
        }
        // Alignment: 4
        // Members count: 25
        public enum WeaponSound_t : uint {
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
        }
        // Alignment: 4
        // Members count: 15
        public enum TakeDamageFlags_t : uint {
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
        }
        // Alignment: 4
        // Members count: 2
        public enum ValueRemapperHapticsType_t : uint {
            HaticsType_Default = 0x0,
            HaticsType_None = 0x1
        }
        // Alignment: 4
        // Members count: 10
        public enum Disposition_t : uint {
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
        }
        // Alignment: 4
        // Members count: 3
        public enum CanPlaySequence_t : uint {
            CANNOT_PLAY = 0x0,
            CAN_PLAY_NOW = 0x1,
            CAN_PLAY_ENQUEUED = 0x2
        }
        // Alignment: 4
        // Members count: 5
        public enum MedalRank_t : uint {
            MEDAL_RANK_NONE = 0x0,
            MEDAL_RANK_BRONZE = 0x1,
            MEDAL_RANK_SILVER = 0x2,
            MEDAL_RANK_GOLD = 0x3,
            MEDAL_RANK_COUNT = 0x4
        }
        // Alignment: 4
        // Members count: 7
        public enum ObserverMode_t : uint {
            OBS_MODE_NONE = 0x0,
            OBS_MODE_FIXED = 0x1,
            OBS_MODE_IN_EYE = 0x2,
            OBS_MODE_CHASE = 0x3,
            OBS_MODE_ROAMING = 0x4,
            OBS_MODE_DIRECTED = 0x5,
            NUM_OBSERVER_MODES = 0x6
        }
        // Alignment: 4
        // Members count: 2
        public enum FuncDoorSpawnPos_t : uint {
            FUNC_DOOR_SPAWN_CLOSED = 0x0,
            FUNC_DOOR_SPAWN_OPEN = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum EOverrideBlockLOS_t : uint {
            BLOCK_LOS_DEFAULT = 0x0,
            BLOCK_LOS_FORCE_FALSE = 0x1,
            BLOCK_LOS_FORCE_TRUE = 0x2
        }
        // Alignment: 1
        // Members count: 14
        public enum MoveType_t : byte {
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
        }
        // Parent: CBreakableProp
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class CDynamicProp {
            public const nint m_bCreateNavObstacle = 0xD70; // bool
            public const nint m_bUseHitboxesForRenderBox = 0xD71; // bool
            public const nint m_bUseAnimGraph = 0xD72; // bool
            public const nint m_pOutputAnimBegun = 0xD78; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0xDA0; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0xDC8; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0xDF0; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0xE18; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0xE40; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0xE48; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0xE4C; // bool
            public const nint m_bStartDisabled = 0xE4D; // bool
            public const nint m_bFiredStartEndOutput = 0xE4E; // bool
            public const nint m_bForceNpcExclude = 0xE4F; // bool
            public const nint m_bCreateNonSolid = 0xE50; // bool
            public const nint m_bIsOverrideProp = 0xE51; // bool
            public const nint m_iInitialGlowState = 0xE54; // int32
            public const nint m_nGlowRange = 0xE58; // int32
            public const nint m_nGlowRangeMin = 0xE5C; // int32
            public const nint m_glowColor = 0xE60; // Color
            public const nint m_nGlowTeam = 0xE64; // int32
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CFuncIllusionary {
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
        public static class CCSPlayer_MovementServices {
            public const nint m_flMaxFallVelocity = 0x224; // float32
            public const nint m_vecLadderNormal = 0x228; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x234; // int32
            public const nint m_flDuckAmount = 0x238; // float32
            public const nint m_flDuckSpeed = 0x23C; // float32
            public const nint m_bDuckOverride = 0x240; // bool
            public const nint m_bDesiresDuck = 0x241; // bool
            public const nint m_flDuckOffset = 0x244; // float32
            public const nint m_nDuckTimeMsecs = 0x248; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x24C; // uint32
            public const nint m_nJumpTimeMsecs = 0x250; // uint32
            public const nint m_flLastDuckTime = 0x254; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x260; // Vector2D
            public const nint m_duckUntilOnGround = 0x268; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x269; // bool
            public const nint m_bInStuckTest = 0x26A; // bool
            public const nint m_flStuckCheckTime = 0x278; // float32[64][2]
            public const nint m_nTraceCount = 0x478; // int32
            public const nint m_StuckLast = 0x47C; // int32
            public const nint m_bSpeedCropped = 0x480; // bool
            public const nint m_nOldWaterLevel = 0x484; // int32
            public const nint m_flWaterEntryTime = 0x488; // float32
            public const nint m_vecForward = 0x48C; // Vector
            public const nint m_vecLeft = 0x498; // Vector
            public const nint m_vecUp = 0x4A4; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4B0; // int32
            public const nint m_bMadeFootstepNoise = 0x4B4; // bool
            public const nint m_iFootsteps = 0x4B8; // int32
            public const nint m_bOldJumpPressed = 0x4BC; // bool
            public const nint m_flJumpPressedTime = 0x4C0; // float32
            public const nint m_flJumpUntil = 0x4C4; // float32
            public const nint m_flJumpVel = 0x4C8; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4CC; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4D0; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4D8; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4DC; // float32
            public const nint m_flStamina = 0x4E0; // float32
            public const nint m_flHeightAtJumpStart = 0x4E4; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4E8; // float32
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
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: CCSWeaponBase
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
        // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
        public static class CFists {
            public const nint m_bPlayingUninterruptableAct = 0x11A0; // bool
            public const nint m_nUninterruptableActivity = 0x11A4; // PlayerAnimEvent_t
            public const nint m_bRestorePrevWep = 0x11A8; // bool
            public const nint m_hWeaponBeforePrevious = 0x11AC; // CHandle<CBasePlayerWeapon>
            public const nint m_hWeaponPrevious = 0x11B0; // CHandle<CBasePlayerWeapon>
            public const nint m_bDelayedHardPunchIncoming = 0x11B4; // bool
            public const nint m_bDestroyAfterTaunt = 0x11B5; // bool
        }
        // Parent: CBaseTrigger
        // Fields count: 1
        public static class CTriggerRemove {
            public const nint m_OnRemove = 0xBA0; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x800; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Fields count: 2
        public static class CProjectedDecal {
            public const nint m_nTexture = 0x7A8; // int32
            public const nint m_flDistance = 0x7AC; // float32
        }
        // Parent: CBaseTrigger
        // Fields count: 5
        public static class CTriggerProximity {
            public const nint m_hMeasureTarget = 0xB9C; // CHandle<CBaseEntity>
            public const nint m_iszMeasureTarget = 0xBA0; // CUtlSymbolLarge
            public const nint m_fRadius = 0xBA8; // float32
            public const nint m_nTouchers = 0xBAC; // int32
            public const nint m_NearestEntityDistance = 0xBB0; // CEntityOutputTemplate<float32>
        }
        // Parent: CFuncBrush
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        public static class CFuncElectrifiedVolume {
            public const nint m_EffectName = 0xA18; // CUtlSymbolLarge
            public const nint m_EffectInterpenetrateName = 0xA20; // CUtlSymbolLarge
            public const nint m_EffectZapName = 0xA28; // CUtlSymbolLarge
            public const nint m_iszEffectSource = 0xA30; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Fields count: 1
        public static class CBaseDMStart {
            public const nint m_Master = 0x7A8; // CUtlSymbolLarge
        }
        // Parent: CGameRulesProxy
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CCSGameRulesProxy {
            public const nint m_pGameRules = 0x7A8; // CCSGameRules*
        }
        // Parent: CBaseTrigger
        // Fields count: 0
        public static class CTriggerHostageReset {
        }
        // Parent: CServerOnlyPointEntity
        // Fields count: 4
        public static class CPointTeleport {
            public const nint m_vSaveOrigin = 0x7A8; // Vector
            public const nint m_vSaveAngles = 0x7B4; // QAngle
            public const nint m_bTeleportParentedEntities = 0x7C0; // bool
            public const nint m_bTeleportUseCurrentAngle = 0x7C1; // bool
        }
        // Parent: CPlayerPawnComponent
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
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint m_PlayerFog = 0x58; // fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
            public const nint m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
            public const nint m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
            public const nint m_audio = 0xA8; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x138; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponMP9 {
        }
        // Parent: CLogicalEntity
        // Fields count: 4
        public static class CPhysicsEntitySolver {
            public const nint m_hMovingEntity = 0x7B0; // CHandle<CBaseEntity>
            public const nint m_hPhysicsBlocker = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_separationDuration = 0x7B8; // float32
            public const nint m_cancelTime = 0x7BC; // GameTime_t
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
        public static class CPlayerPing {
            public const nint m_hPlayer = 0x7B0; // CHandle<CCSPlayerPawn>
            public const nint m_hPingedEntity = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_iType = 0x7B8; // int32
            public const nint m_bUrgent = 0x7BC; // bool
            public const nint m_szPlaceName = 0x7BD; // char[18]
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
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x160; // CModelState
            public const nint m_bIsAnimationEnabled = 0x380; // bool
            public const nint m_bUseParentRenderBounds = 0x381; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x384; // CUtlStringToken
            public const nint m_nHitboxSet = 0x388; // uint8
        }
        // Parent: CBaseEntity
        // Fields count: 8
        public static class CEnvFireSensor {
            public const nint m_bEnabled = 0x7A8; // bool
            public const nint m_bHeatAtLevel = 0x7A9; // bool
            public const nint m_radius = 0x7AC; // float32
            public const nint m_targetLevel = 0x7B0; // float32
            public const nint m_targetTime = 0x7B4; // float32
            public const nint m_levelTime = 0x7B8; // float32
            public const nint m_OnHeatLevelStart = 0x7C0; // CEntityIOOutput
            public const nint m_OnHeatLevelEnd = 0x7E8; // CEntityIOOutput
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: None
        // Fields count: 2
        public static class CEnvWindShared__WindAveEvent_t {
            public const nint m_flStartWindSpeed = 0x0; // float32
            public const nint m_flAveWindSpeed = 0x4; // float32
        }
        // Parent: CCSWeaponBase
        // Fields count: 14
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
        public static class CBaseCSGrenade {
            public const nint m_bRedraw = 0x11A0; // bool
            public const nint m_bIsHeldByPlayer = 0x11A1; // bool
            public const nint m_bPinPulled = 0x11A2; // bool
            public const nint m_bJumpThrow = 0x11A3; // bool
            public const nint m_bThrowAnimating = 0x11A4; // bool
            public const nint m_fThrowTime = 0x11A8; // GameTime_t
            public const nint m_flThrowStrength = 0x11AC; // float32
            public const nint m_flThrowStrengthApproach = 0x11B0; // float32
            public const nint m_fDropTime = 0x11B4; // GameTime_t
            public const nint m_fPinPullTime = 0x11B8; // GameTime_t
            public const nint m_bJustPulledPin = 0x11BC; // bool
            public const nint m_nNextHoldTick = 0x11C0; // GameTick_t
            public const nint m_flNextHoldFrac = 0x11C4; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x11C8; // CHandle<CCSWeaponBase>
        }
        // Parent: CBaseModelEntity
        // Fields count: 1
        public static class CItemGenericTriggerHelper {
            public const nint m_hParentItem = 0x9F8; // CHandle<CItemGeneric>
        }
        // Parent: CLogicalEntity
        // Fields count: 6
        public static class CLogicBranchList {
            public const nint m_nLogicBranchNames = 0x7A8; // CUtlSymbolLarge[16]
            public const nint m_LogicBranchList = 0x828; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_eLastState = 0x840; // CLogicBranchList::LogicBranchListenerLastState_t
            public const nint m_OnAllTrue = 0x848; // CEntityIOOutput
            public const nint m_OnAllFalse = 0x870; // CEntityIOOutput
            public const nint m_OnMixed = 0x898; // CEntityIOOutput
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
        public static class fogplayerparams_t {
            public const nint m_hCtrl = 0x8; // CHandle<CFogController>
            public const nint m_flTransitionTime = 0xC; // float32
            public const nint m_OldColor = 0x10; // Color
            public const nint m_flOldStart = 0x14; // float32
            public const nint m_flOldEnd = 0x18; // float32
            public const nint m_flOldMaxDensity = 0x1C; // float32
            public const nint m_flOldHDRColorScale = 0x20; // float32
            public const nint m_flOldFarZ = 0x24; // float32
            public const nint m_NewColor = 0x28; // Color
            public const nint m_flNewStart = 0x2C; // float32
            public const nint m_flNewEnd = 0x30; // float32
            public const nint m_flNewMaxDensity = 0x34; // float32
            public const nint m_flNewHDRColorScale = 0x38; // float32
            public const nint m_flNewFarZ = 0x3C; // float32
        }
        // Parent: CItemDefuser
        // Fields count: 0
        public static class CItemDefuserAlias_item_defuser {
        }
        // Parent: CModelPointEntity
        // Fields count: 3
        public static class CRevertSaved {
            public const nint m_loadTime = 0x9F8; // float32
            public const nint m_Duration = 0x9FC; // float32
            public const nint m_HoldTime = 0xA00; // float32
        }
        // Parent: CLogicalEntity
        // Fields count: 8
        public static class CMultiLightProxy {
            public const nint m_iszLightNameFilter = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszLightClassFilter = 0x7B0; // CUtlSymbolLarge
            public const nint m_flLightRadiusFilter = 0x7B8; // float32
            public const nint m_flBrightnessDelta = 0x7BC; // float32
            public const nint m_bPerformScreenFade = 0x7C0; // bool
            public const nint m_flTargetBrightnessMultiplier = 0x7C4; // float32
            public const nint m_flCurrentBrightnessMultiplier = 0x7C8; // float32
            public const nint m_vecLights = 0x7D0; // CUtlVector<CHandle<CLightEntity>>
        }
        // Parent: CItem
        // Fields count: 2
        public static class CItemDefuser {
            public const nint m_entitySpottedState = 0xCC8; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xCE0; // int32
        }
        // Parent: CRuleEntity
        // Fields count: 0
        public static class CRuleBrushEntity {
        }
        // Parent: CInferno
        // Fields count: 0
        public static class CFireCrackerBlast {
        }
        // Parent: CBaseEntity
        // Fields count: 12
        public static class CSoundEventEntity {
            public const nint m_bStartOnSpawn = 0x7A8; // bool
            public const nint m_bToLocalPlayer = 0x7A9; // bool
            public const nint m_bStopOnNew = 0x7AA; // bool
            public const nint m_bSaveRestore = 0x7AB; // bool
            public const nint m_bSavedIsPlaying = 0x7AC; // bool
            public const nint m_flSavedElapsedTime = 0x7B0; // float32
            public const nint m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x7C0; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x7C8; // CEntityOutputTemplate<uint64>
            public const nint m_onSoundFinished = 0x7F0; // CEntityIOOutput
            public const nint m_iszSoundName = 0x838; // CUtlSymbolLarge
            public const nint m_hSource = 0x848; // CEntityHandle
        }
        // Parent: CPlayer_ViewModelServices
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
        }
        // Parent: CRagdollProp
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class CRagdollPropAttached {
            public const nint m_boneIndexAttached = 0xD98; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xD9C; // uint32
            public const nint m_attachmentPointBoneSpace = 0xDA0; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xDAC; // Vector
            public const nint m_bShouldDetach = 0xDB8; // bool
            public const nint m_bShouldDeleteAttachedActivationRecord = 0xDC8; // bool
        }
        // Parent: CBasePropDoor
        // Fields count: 17
        public static class CPropDoorRotating {
            public const nint m_vecAxis = 0x10F0; // Vector
            public const nint m_flDistance = 0x10FC; // float32
            public const nint m_eSpawnPosition = 0x1100; // PropDoorRotatingSpawnPos_t
            public const nint m_eOpenDirection = 0x1104; // PropDoorRotatingOpenDirection_e
            public const nint m_eCurrentOpenDirection = 0x1108; // PropDoorRotatingOpenDirection_e
            public const nint m_flAjarAngle = 0x110C; // float32
            public const nint m_angRotationAjarDeprecated = 0x1110; // QAngle
            public const nint m_angRotationClosed = 0x111C; // QAngle
            public const nint m_angRotationOpenForward = 0x1128; // QAngle
            public const nint m_angRotationOpenBack = 0x1134; // QAngle
            public const nint m_angGoal = 0x1140; // QAngle
            public const nint m_vecForwardBoundsMin = 0x114C; // Vector
            public const nint m_vecForwardBoundsMax = 0x1158; // Vector
            public const nint m_vecBackBoundsMin = 0x1164; // Vector
            public const nint m_vecBackBoundsMax = 0x1170; // Vector
            public const nint m_bAjarDoorShouldntAlwaysOpen = 0x117C; // bool
            public const nint m_hEntityBlocker = 0x1180; // CHandle<CEntityBlocker>
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
        public static class CRopeKeyframe {
            public const nint m_RopeFlags = 0xA00; // uint16
            public const nint m_iNextLinkName = 0xA08; // CUtlSymbolLarge
            public const nint m_Slack = 0xA10; // int16
            public const nint m_Width = 0xA14; // float32
            public const nint m_TextureScale = 0xA18; // float32
            public const nint m_nSegments = 0xA1C; // uint8
            public const nint m_bConstrainBetweenEndpoints = 0xA1D; // bool
            public const nint m_strRopeMaterialModel = 0xA20; // CUtlSymbolLarge
            public const nint m_iRopeMaterialModelIndex = 0xA28; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_Subdiv = 0xA30; // uint8
            public const nint m_nChangeCount = 0xA31; // uint8
            public const nint m_RopeLength = 0xA32; // int16
            public const nint m_fLockedPoints = 0xA34; // uint8
            public const nint m_bCreatedFromMapFile = 0xA35; // bool
            public const nint m_flScrollSpeed = 0xA38; // float32
            public const nint m_bStartPointValid = 0xA3C; // bool
            public const nint m_bEndPointValid = 0xA3D; // bool
            public const nint m_hStartPoint = 0xA40; // CHandle<CBaseEntity>
            public const nint m_hEndPoint = 0xA44; // CHandle<CBaseEntity>
            public const nint m_iStartAttachment = 0xA48; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0xA49; // AttachmentHandle_t
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
        public static class CBarnLight {
            public const nint m_bEnabled = 0x9F8; // bool
            public const nint m_nColorMode = 0x9FC; // int32
            public const nint m_Color = 0xA00; // Color
            public const nint m_flColorTemperature = 0xA04; // float32
            public const nint m_flBrightness = 0xA08; // float32
            public const nint m_flBrightnessScale = 0xA0C; // float32
            public const nint m_nDirectLight = 0xA10; // int32
            public const nint m_nBakedShadowIndex = 0xA14; // int32
            public const nint m_nLuminaireShape = 0xA18; // int32
            public const nint m_flLuminaireSize = 0xA1C; // float32
            public const nint m_flLuminaireAnisotropy = 0xA20; // float32
            public const nint m_LightStyleString = 0xA28; // CUtlString
            public const nint m_flLightStyleStartTime = 0xA30; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xA38; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0xA50; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0xA68; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_StyleEvent = 0xA80; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0xB40; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0xB48; // float32
            public const nint m_flSoftX = 0xB4C; // float32
            public const nint m_flSoftY = 0xB50; // float32
            public const nint m_flSkirt = 0xB54; // float32
            public const nint m_flSkirtNear = 0xB58; // float32
            public const nint m_vSizeParams = 0xB5C; // Vector
            public const nint m_flRange = 0xB68; // float32
            public const nint m_vShear = 0xB6C; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0xB78; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0xB7C; // Vector
            public const nint m_nCastShadows = 0xB88; // int32
            public const nint m_nShadowMapSize = 0xB8C; // int32
            public const nint m_nShadowPriority = 0xB90; // int32
            public const nint m_bContactShadow = 0xB94; // bool
            public const nint m_nBounceLight = 0xB98; // int32
            public const nint m_flBounceScale = 0xB9C; // float32
            public const nint m_flMinRoughness = 0xBA0; // float32
            public const nint m_vAlternateColor = 0xBA4; // Vector
            public const nint m_fAlternateColorBrightness = 0xBB0; // float32
            public const nint m_nFog = 0xBB4; // int32
            public const nint m_flFogStrength = 0xBB8; // float32
            public const nint m_nFogShadows = 0xBBC; // int32
            public const nint m_flFogScale = 0xBC0; // float32
            public const nint m_flFadeSizeStart = 0xBC4; // float32
            public const nint m_flFadeSizeEnd = 0xBC8; // float32
            public const nint m_flShadowFadeSizeStart = 0xBCC; // float32
            public const nint m_flShadowFadeSizeEnd = 0xBD0; // float32
            public const nint m_bPrecomputedFieldsValid = 0xBD4; // bool
            public const nint m_vPrecomputedBoundsMins = 0xBD8; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0xBE4; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0xBF0; // Vector
            public const nint m_vPrecomputedOBBAngles = 0xBFC; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0xC08; // Vector
            public const nint m_bPvsModifyEntity = 0xC14; // bool
        }
        // Parent: SpawnPoint
        // Fields count: 0
        public static class CInfoDeathmatchSpawn {
        }
        // Parent: CPointEntity
        // Fields count: 2
        public static class CEnvViewPunch {
            public const nint m_flRadius = 0x7A8; // float32
            public const nint m_angViewPunch = 0x7AC; // QAngle
        }
        // Parent: CBaseEntity
        // Fields count: 1
        public static class CPhysicsWire {
            public const nint m_nDensity = 0x7A8; // int32
        }
        // Parent: CPropDoorRotating
        // Fields count: 4
        public static class CPropDoorRotatingBreakable {
            public const nint m_bBreakable = 0x1184; // bool
            public const nint m_isAbleToCloseAreaPortals = 0x1185; // bool
            public const nint m_currentDamageState = 0x1188; // int32
            public const nint m_damageStates = 0x1190; // CUtlVector<CUtlSymbolLarge>
        }
        // Parent: CBaseFire
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class CFireSmoke {
            public const nint m_nFlameModelIndex = 0x7B8; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x7BC; // int32
        }
        // Parent: CMolotovGrenade
        // Fields count: 0
        public static class CIncendiaryGrenade {
        }
        // Parent: CPathCorner
        // Fields count: 0
        public static class CPathCornerCrash {
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class CHandleTest {
            public const nint m_Handle = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_bSendHandle = 0x7AC; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 8
        public static class CSoundOpvarSetEntity {
            public const nint m_iszStackName = 0x7B0; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x7B8; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x7C0; // CUtlSymbolLarge
            public const nint m_nOpvarType = 0x7C8; // int32
            public const nint m_nOpvarIndex = 0x7CC; // int32
            public const nint m_flOpvarValue = 0x7D0; // float32
            public const nint m_OpvarValueString = 0x7D8; // CUtlSymbolLarge
            public const nint m_bSetOnSpawn = 0x7E0; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: CPointEntity
        // Fields count: 1
        public static class CNavSpaceInfo {
            public const nint m_bCreateFlightSpace = 0x7A8; // bool
        }
        // Parent: CLogicalEntity
        // Fields count: 3
        public static class CLogicAchievement {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_iszAchievementEventID = 0x7B0; // CUtlSymbolLarge
            public const nint m_OnFired = 0x7B8; // CEntityIOOutput
        }
        // Parent: CBtNode
        // Fields count: 1
        public static class CBtActionParachutePositioning {
            public const nint m_ActionTimer = 0x58; // CountdownTimer
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
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x170; // uint32
            public const nint m_iFOVStart = 0x174; // uint32
            public const nint m_flFOVTime = 0x178; // GameTime_t
            public const nint m_flFOVRate = 0x17C; // float32
            public const nint m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
            public const nint m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
        }
        // Parent: CEntityComponent
        // Fields count: 0
        public static class CTouchExpansionComponent {
        }
        // Parent: CFuncPlatRot
        // Fields count: 9
        public static class CFuncTrackChange {
            public const nint m_trackTop = 0xAC0; // CPathTrack*
            public const nint m_trackBottom = 0xAC8; // CPathTrack*
            public const nint m_train = 0xAD0; // CFuncTrackTrain*
            public const nint m_trackTopName = 0xAD8; // CUtlSymbolLarge
            public const nint m_trackBottomName = 0xAE0; // CUtlSymbolLarge
            public const nint m_trainName = 0xAE8; // CUtlSymbolLarge
            public const nint m_code = 0xAF0; // TRAIN_CODE
            public const nint m_targetState = 0xAF4; // int32
            public const nint m_use = 0xAF8; // int32
        }
        // Parent: CRuleBrushEntity
        // Fields count: 4
        public static class CGamePlayerZone {
            public const nint m_OnPlayerInZone = 0xA00; // CEntityIOOutput
            public const nint m_OnPlayerOutZone = 0xA28; // CEntityIOOutput
            public const nint m_PlayersInCount = 0xA50; // CEntityOutputTemplate<int32>
            public const nint m_PlayersOutCount = 0xA78; // CEntityOutputTemplate<int32>
        }
        // Parent: CRuleEntity
        // Fields count: 1
        public static class CRulePointEntity {
            public const nint m_Score = 0xA00; // int32
        }
        // Parent: CPointEntity
        // Fields count: 5
        public static class CMessageEntity {
            public const nint m_radius = 0x7A8; // int32
            public const nint m_messageText = 0x7B0; // CUtlSymbolLarge
            public const nint m_drawText = 0x7B8; // bool
            public const nint m_bDeveloperOnly = 0x7B9; // bool
            public const nint m_bEnabled = 0x7BA; // bool
        }
        // Parent: CBaseCSGrenade
        // Fields count: 0
        public static class CSmokeGrenade {
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
        public static class CBaseViewModel {
            public const nint m_vecLastFacing = 0xBF8; // Vector
            public const nint m_nViewModelIndex = 0xC04; // uint32
            public const nint m_nAnimationParity = 0xC08; // uint32
            public const nint m_flAnimationStartTime = 0xC0C; // float32
            public const nint m_hWeapon = 0xC10; // CHandle<CBasePlayerWeapon>
            public const nint m_sVMName = 0xC18; // CUtlSymbolLarge
            public const nint m_sAnimationPrefix = 0xC20; // CUtlSymbolLarge
            public const nint m_hOldLayerSequence = 0xC28; // HSequence
            public const nint m_oldLayer = 0xC2C; // int32
            public const nint m_oldLayerStartTime = 0xC30; // float32
            public const nint m_hControlPanel = 0xC34; // CHandle<CBaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_flPlayerPingTokens = 0x40; // GameTime_t[5]
            public const nint m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: CCSWeaponBase
        // Fields count: 1
        public static class CKnife {
            public const nint m_bFirstAttack = 0x11A0; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 38
        public static class CFuncTrackTrain {
            public const nint m_ppath = 0x9F8; // CHandle<CPathTrack>
            public const nint m_length = 0x9FC; // float32
            public const nint m_vPosPrev = 0xA00; // Vector
            public const nint m_angPrev = 0xA0C; // QAngle
            public const nint m_controlMins = 0xA18; // Vector
            public const nint m_controlMaxs = 0xA24; // Vector
            public const nint m_lastBlockPos = 0xA30; // Vector
            public const nint m_lastBlockTick = 0xA3C; // int32
            public const nint m_flVolume = 0xA40; // float32
            public const nint m_flBank = 0xA44; // float32
            public const nint m_oldSpeed = 0xA48; // float32
            public const nint m_flBlockDamage = 0xA4C; // float32
            public const nint m_height = 0xA50; // float32
            public const nint m_maxSpeed = 0xA54; // float32
            public const nint m_dir = 0xA58; // float32
            public const nint m_iszSoundMove = 0xA60; // CUtlSymbolLarge
            public const nint m_iszSoundMovePing = 0xA68; // CUtlSymbolLarge
            public const nint m_iszSoundStart = 0xA70; // CUtlSymbolLarge
            public const nint m_iszSoundStop = 0xA78; // CUtlSymbolLarge
            public const nint m_strPathTarget = 0xA80; // CUtlSymbolLarge
            public const nint m_flMoveSoundMinDuration = 0xA88; // float32
            public const nint m_flMoveSoundMaxDuration = 0xA8C; // float32
            public const nint m_flNextMoveSoundTime = 0xA90; // GameTime_t
            public const nint m_flMoveSoundMinPitch = 0xA94; // float32
            public const nint m_flMoveSoundMaxPitch = 0xA98; // float32
            public const nint m_eOrientationType = 0xA9C; // TrainOrientationType_t
            public const nint m_eVelocityType = 0xAA0; // TrainVelocityType_t
            public const nint m_OnStart = 0xAB0; // CEntityIOOutput
            public const nint m_OnNext = 0xAD8; // CEntityIOOutput
            public const nint m_OnArrivedAtDestinationNode = 0xB00; // CEntityIOOutput
            public const nint m_bManualSpeedChanges = 0xB28; // bool
            public const nint m_flDesiredSpeed = 0xB2C; // float32
            public const nint m_flSpeedChangeTime = 0xB30; // GameTime_t
            public const nint m_flAccelSpeed = 0xB34; // float32
            public const nint m_flDecelSpeed = 0xB38; // float32
            public const nint m_bAccelToSpeed = 0xB3C; // bool
            public const nint m_flTimeScale = 0xB40; // float32
            public const nint m_flNextMPSoundTime = 0xB44; // GameTime_t
        }
        // Parent: CServerOnlyModelEntity
        // Fields count: 5
        public static class CFogVolume {
            public const nint m_fogName = 0x9F8; // CUtlSymbolLarge
            public const nint m_postProcessName = 0xA00; // CUtlSymbolLarge
            public const nint m_colorCorrectionName = 0xA08; // CUtlSymbolLarge
            public const nint m_bDisabled = 0xA18; // bool
            public const nint m_bInFogVolumesList = 0xA19; // bool
        }
        // Parent: SpawnPoint
        // Fields count: 0
        public static class CInfoPlayerCounterterrorist {
        }
        // Parent: CBaseModelEntity
        // Fields count: 19
        public static class CFire {
            public const nint m_hEffect = 0x9F8; // CHandle<CBaseFire>
            public const nint m_hOwner = 0x9FC; // CHandle<CBaseEntity>
            public const nint m_nFireType = 0xA00; // int32
            public const nint m_flFuel = 0xA04; // float32
            public const nint m_flDamageTime = 0xA08; // GameTime_t
            public const nint m_lastDamage = 0xA0C; // GameTime_t
            public const nint m_flFireSize = 0xA10; // float32
            public const nint m_flLastNavUpdateTime = 0xA14; // GameTime_t
            public const nint m_flHeatLevel = 0xA18; // float32
            public const nint m_flHeatAbsorb = 0xA1C; // float32
            public const nint m_flDamageScale = 0xA20; // float32
            public const nint m_flMaxHeat = 0xA24; // float32
            public const nint m_flLastHeatLevel = 0xA28; // float32
            public const nint m_flAttackTime = 0xA2C; // float32
            public const nint m_bEnabled = 0xA30; // bool
            public const nint m_bStartDisabled = 0xA31; // bool
            public const nint m_bDidActivate = 0xA32; // bool
            public const nint m_OnIgnited = 0xA38; // CEntityIOOutput
            public const nint m_OnExtinguished = 0xA60; // CEntityIOOutput
        }
        // Parent: CSkeletonAnimationController
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flSeqStartTime (GameTime_t)
        // NetworkVarNames: m_flSeqFixedCycle (float)
        // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
        public static class CBaseAnimGraphController {
            public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint m_bSequenceFinished = 0x220; // bool
            public const nint m_flSoundSyncTime = 0x224; // float32
            public const nint m_hSequence = 0x228; // HSequence
            public const nint m_flSeqStartTime = 0x22C; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x230; // float32
            public const nint m_nAnimLoopMode = 0x234; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x238; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x244; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x246; // bool
            public const nint m_bNetworkedSequenceChanged = 0x247; // bool
            public const nint m_bLastUpdateSkipped = 0x248; // bool
            public const nint m_flPrevAnimUpdateTime = 0x24C; // GameTime_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSObserverPawnAPI {
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint m_flFadeStartDist = 0x7A8; // float32
            public const nint m_flFadeEndDist = 0x7AC; // float32
        }
        // Parent: CTriggerOnce
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_bTestOcclusion (bool)
        public static class CTriggerLook {
            public const nint m_hLookTarget = 0xBC8; // CHandle<CBaseEntity>
            public const nint m_flFieldOfView = 0xBCC; // float32
            public const nint m_flLookTime = 0xBD0; // float32
            public const nint m_flLookTimeTotal = 0xBD4; // float32
            public const nint m_flLookTimeLast = 0xBD8; // GameTime_t
            public const nint m_flTimeoutDuration = 0xBDC; // float32
            public const nint m_bTimeoutFired = 0xBE0; // bool
            public const nint m_bIsLooking = 0xBE1; // bool
            public const nint m_b2DFOV = 0xBE2; // bool
            public const nint m_bUseVelocity = 0xBE3; // bool
            public const nint m_hActivator = 0xBE4; // CHandle<CBaseEntity>
            public const nint m_bTestOcclusion = 0xBE8; // bool
            public const nint m_OnTimeout = 0xBF0; // CEntityIOOutput
            public const nint m_OnStartLook = 0xC18; // CEntityIOOutput
            public const nint m_OnEndLook = 0xC40; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CInfoTeleportDestination {
        }
        // Parent: CLogicalEntity
        // Fields count: 11
        public static class CMathRemap {
            public const nint m_flInMin = 0x7A8; // float32
            public const nint m_flInMax = 0x7AC; // float32
            public const nint m_flOut1 = 0x7B0; // float32
            public const nint m_flOut2 = 0x7B4; // float32
            public const nint m_flOldInValue = 0x7B8; // float32
            public const nint m_bEnabled = 0x7BC; // bool
            public const nint m_OutValue = 0x7C0; // CEntityOutputTemplate<float32>
            public const nint m_OnRoseAboveMin = 0x7E8; // CEntityIOOutput
            public const nint m_OnRoseAboveMax = 0x810; // CEntityIOOutput
            public const nint m_OnFellBelowMin = 0x838; // CEntityIOOutput
            public const nint m_OnFellBelowMax = 0x860; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Fields count: 3
        public static class CInstructorEventEntity {
            public const nint m_iszName = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x7B0; // CUtlSymbolLarge
            public const nint m_hTargetPlayer = 0x7B8; // CHandle<CBasePlayerPawn>
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
        public static class CGradientFog {
            public const nint m_hGradientFogTexture = 0x7A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x7B0; // float32
            public const nint m_flFogEndDistance = 0x7B4; // float32
            public const nint m_bHeightFogEnabled = 0x7B8; // bool
            public const nint m_flFogStartHeight = 0x7BC; // float32
            public const nint m_flFogEndHeight = 0x7C0; // float32
            public const nint m_flFarZ = 0x7C4; // float32
            public const nint m_flFogMaxOpacity = 0x7C8; // float32
            public const nint m_flFogFalloffExponent = 0x7CC; // float32
            public const nint m_flFogVerticalExponent = 0x7D0; // float32
            public const nint m_fogColor = 0x7D4; // Color
            public const nint m_flFogStrength = 0x7D8; // float32
            public const nint m_flFadeTime = 0x7DC; // float32
            public const nint m_bStartDisabled = 0x7E0; // bool
            public const nint m_bIsEnabled = 0x7E1; // bool
            public const nint m_bGradientFogNeedsTextures = 0x7E2; // bool
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CPointClientCommand {
        }
        // Parent: CBaseModelEntity
        // Fields count: 1
        public static class CFuncVPhysicsClip {
            public const nint m_bDisabled = 0x9F8; // bool
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 5
        public static class CCSPlayer_RadioServices {
            public const nint m_flGotHostageTalkTimer = 0x40; // GameTime_t
            public const nint m_flDefusingTalkTimer = 0x44; // GameTime_t
            public const nint m_flC4PlantTalkTimer = 0x48; // GameTime_t
            public const nint m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
            public const nint m_bIgnoreRadio = 0x58; // bool
        }
        // Parent: CSceneEntity
        // Fields count: 7
        public static class CInstancedSceneEntity {
            public const nint m_hOwner = 0xD00; // CHandle<CBaseEntity>
            public const nint m_bHadOwner = 0xD04; // bool
            public const nint m_flPostSpeakDelay = 0xD08; // float32
            public const nint m_flPreDelay = 0xD0C; // float32
            public const nint m_bIsBackground = 0xD10; // bool
            public const nint m_bRemoveOnCompletion = 0xD11; // bool
            public const nint m_hTarget = 0xD14; // CHandle<CBaseEntity>
        }
        // Parent: CPointEntity
        // Fields count: 1
        public static class CEnvHudHint {
            public const nint m_iszMessage = 0x7A8; // CUtlSymbolLarge
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
        public static class CParticleSystem {
            public const nint m_szSnapshotFileName = 0x9F8; // char[512]
            public const nint m_bActive = 0xBF8; // bool
            public const nint m_bFrozen = 0xBF9; // bool
            public const nint m_flFreezeTransitionDuration = 0xBFC; // float32
            public const nint m_nStopType = 0xC00; // int32
            public const nint m_bAnimateDuringGameplayPause = 0xC04; // bool
            public const nint m_iEffectIndex = 0xC08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0xC10; // GameTime_t
            public const nint m_flPreSimTime = 0xC14; // float32
            public const nint m_vServerControlPoints = 0xC18; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0xC48; // uint8[4]
            public const nint m_hControlPointEnts = 0xC4C; // CHandle<CBaseEntity>[64]
            public const nint m_bNoSave = 0xD4C; // bool
            public const nint m_bNoFreeze = 0xD4D; // bool
            public const nint m_bNoRamp = 0xD4E; // bool
            public const nint m_bStartActive = 0xD4F; // bool
            public const nint m_iszEffectName = 0xD50; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0xD58; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0xF58; // int32
            public const nint m_vecDataCPValue = 0xF5C; // Vector
            public const nint m_nTintCP = 0xF68; // int32
            public const nint m_clrTint = 0xF6C; // Color
        }
        // Parent: CEntitySubclassVDataBase
        // Fields count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x108; // bool
            public const nint m_bAllowFlipping = 0x109; // bool
            public const nint m_sMuzzleAttachment = 0x110; // CUtlString
            public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_iFlags = 0x1F8; // ItemFlagTypes_t
            public const nint m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x1FC; // int32
            public const nint m_iMaxClip2 = 0x200; // int32
            public const nint m_iDefaultClip1 = 0x204; // int32
            public const nint m_iDefaultClip2 = 0x208; // int32
            public const nint m_iWeight = 0x20C; // int32
            public const nint m_bAutoSwitchTo = 0x210; // bool
            public const nint m_bAutoSwitchFrom = 0x211; // bool
            public const nint m_iRumbleEffect = 0x214; // RumbleEffect_t
            public const nint m_bLinkedCooldowns = 0x218; // bool
            public const nint m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
            public const nint m_iSlot = 0x240; // int32
            public const nint m_iPosition = 0x244; // int32
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
        public static class CPhysicsProp {
            public const nint m_MotionEnabled = 0xD70; // CEntityIOOutput
            public const nint m_OnAwakened = 0xD98; // CEntityIOOutput
            public const nint m_OnAwake = 0xDC0; // CEntityIOOutput
            public const nint m_OnAsleep = 0xDE8; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0xE10; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0xE38; // CEntityIOOutput
            public const nint m_OnOutOfWorld = 0xE60; // CEntityIOOutput
            public const nint m_massScale = 0xE88; // float32
            public const nint m_inertiaScale = 0xE8C; // float32
            public const nint m_buoyancyScale = 0xE90; // float32
            public const nint m_damageType = 0xE94; // int32
            public const nint m_damageToEnableMotion = 0xE98; // int32
            public const nint m_flForceToEnableMotion = 0xE9C; // float32
            public const nint m_bThrownByPlayer = 0xEA0; // bool
            public const nint m_bDroppedByPlayer = 0xEA1; // bool
            public const nint m_bTouchedByPlayer = 0xEA2; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xEA3; // bool
            public const nint m_iExploitableByPlayer = 0xEA4; // int32
            public const nint m_bHasBeenAwakened = 0xEA8; // bool
            public const nint m_bIsOverrideProp = 0xEA9; // bool
            public const nint m_fNextCheckDisableMotionContactsTime = 0xEAC; // GameTime_t
            public const nint m_iInitialGlowState = 0xEB0; // int32
            public const nint m_nGlowRange = 0xEB4; // int32
            public const nint m_nGlowRangeMin = 0xEB8; // int32
            public const nint m_glowColor = 0xEBC; // Color
            public const nint m_bForceNavIgnore = 0xEC0; // bool
            public const nint m_bNoNavmeshBlocker = 0xEC1; // bool
            public const nint m_bForceNpcExclude = 0xEC2; // bool
            public const nint m_bShouldAutoConvertBackFromDebris = 0xEC3; // bool
            public const nint m_bMuteImpactEffects = 0xEC4; // bool
            public const nint m_bAcceptDamageFromHeldObjects = 0xECC; // bool
            public const nint m_bEnableUseOutput = 0xECD; // bool
            public const nint m_bAwake = 0xECE; // bool
            public const nint m_nCollisionGroupOverride = 0xED0; // int32
        }
        // Parent: CFuncWall
        // Fields count: 0
        public static class CFuncWallToggle {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
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
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x64; // int32
            public const nint m_iEnemy4Ks = 0x68; // int32
            public const nint m_iEnemy3Ks = 0x6C; // int32
            public const nint m_iEnemyKnifeKills = 0x70; // int32
            public const nint m_iEnemyTaserKills = 0x74; // int32
            public const nint m_iEnemy2Ks = 0x78; // int32
            public const nint m_iUtility_Count = 0x7C; // int32
            public const nint m_iUtility_Successes = 0x80; // int32
            public const nint m_iUtility_Enemies = 0x84; // int32
            public const nint m_iFlash_Count = 0x88; // int32
            public const nint m_iFlash_Successes = 0x8C; // int32
            public const nint m_nHealthPointsRemovedTotal = 0x90; // int32
            public const nint m_nHealthPointsDealtTotal = 0x94; // int32
            public const nint m_nShotsFiredTotal = 0x98; // int32
            public const nint m_nShotsOnTargetTotal = 0x9C; // int32
            public const nint m_i1v1Count = 0xA0; // int32
            public const nint m_i1v1Wins = 0xA4; // int32
            public const nint m_i1v2Count = 0xA8; // int32
            public const nint m_i1v2Wins = 0xAC; // int32
            public const nint m_iEntryCount = 0xB0; // int32
            public const nint m_iEntryWins = 0xB4; // int32
        }
        // Parent: CFuncLadder
        // Fields count: 0
        public static class CFuncLadderAlias_func_useableladder {
        }
        // Parent: CBaseTrigger
        // Fields count: 15
        public static class CTriggerSndSosOpvar {
            public const nint m_hTouchingPlayers = 0xBA0; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_flPosition = 0xBB8; // Vector
            public const nint m_flCenterSize = 0xBC4; // float32
            public const nint m_flMinVal = 0xBC8; // float32
            public const nint m_flMaxVal = 0xBCC; // float32
            public const nint m_flWait = 0xBD0; // float32
            public const nint m_opvarName = 0xBD8; // CUtlSymbolLarge
            public const nint m_stackName = 0xBE0; // CUtlSymbolLarge
            public const nint m_operatorName = 0xBE8; // CUtlSymbolLarge
            public const nint m_bVolIs2D = 0xBF0; // bool
            public const nint m_opvarNameChar = 0xBF1; // char[256]
            public const nint m_stackNameChar = 0xCF1; // char[256]
            public const nint m_operatorNameChar = 0xDF1; // char[256]
            public const nint m_VecNormPos = 0xEF4; // Vector
            public const nint m_flNormCenterSize = 0xF00; // float32
        }
        // Parent: CDynamicProp
        // Fields count: 0
        public static class CDynamicPropAlias_dynamic_prop {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x28; // ModelConfigHandle_t
            public const nint m_Name = 0x30; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: CPhysicsProp
        // Fields count: 0
        public static class CPhysicsPropMultiplayer {
        }
        // Parent: CBaseToggle
        // Fields count: 5
        public static class CBasePlatTrain {
            public const nint m_NoiseMoving = 0xA78; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0xA80; // CUtlSymbolLarge
            public const nint m_volume = 0xA90; // float32
            public const nint m_flTWidth = 0xA94; // float32
            public const nint m_flTLength = 0xA98; // float32
        }
        // Parent: CPlayer_ItemServices
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        // NetworkVarNames: m_bHasHeavyArmor (bool)
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x40; // bool
            public const nint m_bHasHelmet = 0x41; // bool
            public const nint m_bHasHeavyArmor = 0x42; // bool
        }
        // Parent: CPointEntity
        // Fields count: 7
        public static class CKeepUpright {
            public const nint m_worldGoalAxis = 0x7B0; // Vector
            public const nint m_localTestAxis = 0x7BC; // Vector
            public const nint m_nameAttach = 0x7D0; // CUtlSymbolLarge
            public const nint m_attachedObject = 0x7D8; // CHandle<CBaseEntity>
            public const nint m_angularLimit = 0x7DC; // float32
            public const nint m_bActive = 0x7E0; // bool
            public const nint m_bDampAllRotation = 0x7E1; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CModelPointEntity {
        }
        // Parent: CPointEntity
        // Fields count: 9
        public static class CEnvInstructorVRHint {
            public const nint m_iszName = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x7B0; // CUtlSymbolLarge
            public const nint m_iTimeout = 0x7B8; // int32
            public const nint m_iszCaption = 0x7C0; // CUtlSymbolLarge
            public const nint m_iszStartSound = 0x7C8; // CUtlSymbolLarge
            public const nint m_iLayoutFileType = 0x7D0; // int32
            public const nint m_iszCustomLayoutFile = 0x7D8; // CUtlSymbolLarge
            public const nint m_iAttachType = 0x7E0; // int32
            public const nint m_flHeightOffset = 0x7E4; // float32
        }
        // Parent: CCSWeaponBase
        // Fields count: 0
        public static class CWeaponXM1014 {
        }
        // Parent: CBaseModelEntity
        // Fields count: 1
        public static class CPlatTrigger {
            public const nint m_pPlatform = 0x9F8; // CHandle<CFuncPlat>
        }
        // Parent: CRulePointEntity
        // Fields count: 4
        public static class CGameMoney {
            public const nint m_OnMoneySpent = 0xA08; // CEntityIOOutput
            public const nint m_OnMoneySpentFail = 0xA30; // CEntityIOOutput
            public const nint m_nMoney = 0xA58; // int32
            public const nint m_strAwardText = 0xA60; // CUtlString
        }
        // Parent: CLogicalEntity
        // Fields count: 5
        public static class CLogicPlayerProxy {
            public const nint m_hPlayer = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_PlayerHasAmmo = 0x7B0; // CEntityIOOutput
            public const nint m_PlayerHasNoAmmo = 0x7D8; // CEntityIOOutput
            public const nint m_PlayerDied = 0x800; // CEntityIOOutput
            public const nint m_RequestedPlayerHealth = 0x828; // CEntityOutputTemplate<int32>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x40; // uint8
            public const nint m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
            public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x4C; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponZoneRepulsor {
        }
        // Parent: CPointEntity
        // Fields count: 3
        public static class CPhysImpact {
            public const nint m_damage = 0x7A8; // float32
            public const nint m_distance = 0x7AC; // float32
            public const nint m_directionEntityName = 0x7B0; // CUtlSymbolLarge
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
        public static class CEnvCombinedLightProbeVolume {
            public const nint m_Color = 0x1800; // Color
            public const nint m_flBrightness = 0x1804; // float32
            public const nint m_hCubemapTexture = 0x1808; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x1810; // bool
            public const nint m_hLightProbeTexture = 0x1818; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x1820; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x1828; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x1830; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x1838; // Vector
            public const nint m_vBoxMaxs = 0x1844; // Vector
            public const nint m_bMoveable = 0x1850; // bool
            public const nint m_nHandshake = 0x1854; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x1858; // int32
            public const nint m_nPriority = 0x185C; // int32
            public const nint m_bStartDisabled = 0x1860; // bool
            public const nint m_flEdgeFadeDist = 0x1864; // float32
            public const nint m_vEdgeFadeDists = 0x1868; // Vector
            public const nint m_nLightProbeSizeX = 0x1874; // int32
            public const nint m_nLightProbeSizeY = 0x1878; // int32
            public const nint m_nLightProbeSizeZ = 0x187C; // int32
            public const nint m_nLightProbeAtlasX = 0x1880; // int32
            public const nint m_nLightProbeAtlasY = 0x1884; // int32
            public const nint m_nLightProbeAtlasZ = 0x1888; // int32
            public const nint m_bEnabled = 0x18A1; // bool
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: CCSGameModeRules
        // Fields count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: CPointEntity
        // Fields count: 16
        public static class CPointAngularVelocitySensor {
            public const nint m_hTargetEntity = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_flThreshold = 0x7AC; // float32
            public const nint m_nLastCompareResult = 0x7B0; // int32
            public const nint m_nLastFireResult = 0x7B4; // int32
            public const nint m_flFireTime = 0x7B8; // GameTime_t
            public const nint m_flFireInterval = 0x7BC; // float32
            public const nint m_flLastAngVelocity = 0x7C0; // float32
            public const nint m_lastOrientation = 0x7C4; // QAngle
            public const nint m_vecAxis = 0x7D0; // Vector
            public const nint m_bUseHelper = 0x7DC; // bool
            public const nint m_AngularVelocity = 0x7E0; // CEntityOutputTemplate<float32>
            public const nint m_OnLessThan = 0x808; // CEntityIOOutput
            public const nint m_OnLessThanOrEqualTo = 0x830; // CEntityIOOutput
            public const nint m_OnGreaterThan = 0x858; // CEntityIOOutput
            public const nint m_OnGreaterThanOrEqualTo = 0x880; // CEntityIOOutput
            public const nint m_OnEqualTo = 0x8A8; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Fields count: 8
        public static class CPathKeyFrame {
            public const nint m_Origin = 0x7A8; // Vector
            public const nint m_Angles = 0x7B4; // QAngle
            public const nint m_qAngle = 0x7C0; // Quaternion
            public const nint m_iNextKey = 0x7D0; // CUtlSymbolLarge
            public const nint m_flNextTime = 0x7D8; // float32
            public const nint m_pNextKey = 0x7E0; // CPathKeyFrame*
            public const nint m_pPrevKey = 0x7E8; // CPathKeyFrame*
            public const nint m_flSpeed = 0x7F0; // float32
        }
        // Parent: CBaseModelEntity
        // Fields count: 3
        public static class CFuncInteractionLayerClip {
            public const nint m_bDisabled = 0x9F8; // bool
            public const nint m_iszInteractsAs = 0xA00; // CUtlSymbolLarge
            public const nint m_iszInteractsWith = 0xA08; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSWeaponBaseAPI {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponRevolver {
        }
        // Parent: CDynamicProp
        // Fields count: 1
        public static class COrnamentProp {
            public const nint m_initialOwner = 0xE68; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Fields count: 1
        public static class CLogicGameEvent {
            public const nint m_iszEventName = 0x7A8; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Fields count: 2
        public static class CEnvMuzzleFlash {
            public const nint m_flScale = 0x7A8; // float32
            public const nint m_iszParentAttachment = 0x7B0; // CUtlSymbolLarge
        }
        // Parent: CDynamicProp
        // Fields count: 0
        public static class CCoopBonusCoin {
        }
        // Parent: CSoundEventEntity
        // Fields count: 6
        public static class CSoundEventPathCornerEntity {
            public const nint m_iszPathCorner = 0x850; // CUtlSymbolLarge
            public const nint m_iCountMax = 0x858; // int32
            public const nint m_flDistanceMax = 0x85C; // float32
            public const nint m_flDistMaxSqr = 0x860; // float32
            public const nint m_flDotProductMax = 0x864; // float32
            public const nint bPlaying = 0x868; // bool
        }
        // Parent: CEnvSoundscape
        // Fields count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x840; // CUtlSymbolLarge
        }
        // Parent: CEntityComponent
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
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x58; // CNetworkVarChainer
            public const nint m_Color = 0x95; // Color
            public const nint m_SecondaryColor = 0x99; // Color
            public const nint m_flBrightness = 0xA0; // float32
            public const nint m_flBrightnessScale = 0xA4; // float32
            public const nint m_flBrightnessMult = 0xA8; // float32
            public const nint m_flRange = 0xAC; // float32
            public const nint m_flFalloff = 0xB0; // float32
            public const nint m_flAttenuation0 = 0xB4; // float32
            public const nint m_flAttenuation1 = 0xB8; // float32
            public const nint m_flAttenuation2 = 0xBC; // float32
            public const nint m_flTheta = 0xC0; // float32
            public const nint m_flPhi = 0xC4; // float32
            public const nint m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xD0; // int32
            public const nint m_nCastShadows = 0xD4; // int32
            public const nint m_nShadowWidth = 0xD8; // int32
            public const nint m_nShadowHeight = 0xDC; // int32
            public const nint m_bRenderDiffuse = 0xE0; // bool
            public const nint m_nRenderSpecular = 0xE4; // int32
            public const nint m_bRenderTransmissive = 0xE8; // bool
            public const nint m_flOrthoLightWidth = 0xEC; // float32
            public const nint m_flOrthoLightHeight = 0xF0; // float32
            public const nint m_nStyle = 0xF4; // int32
            public const nint m_Pattern = 0xF8; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0x100; // int32
            public const nint m_flShadowCascadeCrossFade = 0x104; // float32
            public const nint m_flShadowCascadeDistanceFade = 0x108; // float32
            public const nint m_flShadowCascadeDistance0 = 0x10C; // float32
            public const nint m_flShadowCascadeDistance1 = 0x110; // float32
            public const nint m_flShadowCascadeDistance2 = 0x114; // float32
            public const nint m_flShadowCascadeDistance3 = 0x118; // float32
            public const nint m_nShadowCascadeResolution0 = 0x11C; // int32
            public const nint m_nShadowCascadeResolution1 = 0x120; // int32
            public const nint m_nShadowCascadeResolution2 = 0x124; // int32
            public const nint m_nShadowCascadeResolution3 = 0x128; // int32
            public const nint m_bUsesBakedShadowing = 0x12C; // bool
            public const nint m_nShadowPriority = 0x130; // int32
            public const nint m_nBakedShadowIndex = 0x134; // int32
            public const nint m_bRenderToCubemaps = 0x138; // bool
            public const nint m_nDirectLight = 0x13C; // int32
            public const nint m_nIndirectLight = 0x140; // int32
            public const nint m_flFadeMinDist = 0x144; // float32
            public const nint m_flFadeMaxDist = 0x148; // float32
            public const nint m_flShadowFadeMinDist = 0x14C; // float32
            public const nint m_flShadowFadeMaxDist = 0x150; // float32
            public const nint m_bEnabled = 0x154; // bool
            public const nint m_bFlicker = 0x155; // bool
            public const nint m_bPrecomputedFieldsValid = 0x156; // bool
            public const nint m_vPrecomputedBoundsMins = 0x158; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x164; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x170; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x17C; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x188; // Vector
            public const nint m_flPrecomputedMaxRange = 0x194; // float32
            public const nint m_nFogLightingMode = 0x198; // int32
            public const nint m_flFogContributionStength = 0x19C; // float32
            public const nint m_flNearClipPlane = 0x1A0; // float32
            public const nint m_SkyColor = 0x1A4; // Color
            public const nint m_flSkyIntensity = 0x1A8; // float32
            public const nint m_SkyAmbientBounce = 0x1AC; // Color
            public const nint m_bUseSecondaryColor = 0x1B0; // bool
            public const nint m_bMixedShadows = 0x1B1; // bool
            public const nint m_flLightStyleStartTime = 0x1B4; // GameTime_t
            public const nint m_flCapsuleLength = 0x1B8; // float32
            public const nint m_flMinRoughness = 0x1BC; // float32
            public const nint m_bPvsModifyEntity = 0x1D0; // bool
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
        public static class CSmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0xDB0; // int32
            public const nint m_bDidSmokeEffect = 0xDB4; // bool
            public const nint m_nRandomSeed = 0xDB8; // int32
            public const nint m_vSmokeColor = 0xDBC; // Vector
            public const nint m_vSmokeDetonationPos = 0xDC8; // Vector
            public const nint m_VoxelFrameData = 0xDD8; // CUtlVector<uint8>
            public const nint m_flLastBounce = 0xDF0; // GameTime_t
            public const nint m_fllastSimulationTime = 0xDF4; // GameTime_t
        }
        // Parent: CTriggerMultiple
        // Fields count: 1
        public static class CScriptTriggerMultiple {
            public const nint m_vExtent = 0xBC8; // Vector
        }
        // Parent: CSoundOpvarSetPointEntity
        // Fields count: 4
        public static class CSoundOpvarSetAutoRoomEntity {
            public const nint m_traceResults = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
            public const nint m_flSize = 0x980; // float32
            public const nint m_flHeightTolerance = 0x984; // float32
            public const nint m_flSizeSqr = 0x988; // float32
        }
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
        }
        // Parent: CItem
        // Fields count: 0
        public static class CItemKevlar {
        }
        // Parent: CBaseTrigger
        // Fields count: 14
        public static class CTriggerHurt {
            public const nint m_flOriginalDamage = 0xB9C; // float32
            public const nint m_flDamage = 0xBA0; // float32
            public const nint m_flDamageCap = 0xBA4; // float32
            public const nint m_flLastDmgTime = 0xBA8; // GameTime_t
            public const nint m_flForgivenessDelay = 0xBAC; // float32
            public const nint m_bitsDamageInflict = 0xBB0; // int32
            public const nint m_damageModel = 0xBB4; // int32
            public const nint m_bNoDmgForce = 0xBB8; // bool
            public const nint m_vDamageForce = 0xBBC; // Vector
            public const nint m_thinkAlways = 0xBC8; // bool
            public const nint m_hurtThinkPeriod = 0xBCC; // float32
            public const nint m_OnHurt = 0xBD0; // CEntityIOOutput
            public const nint m_OnHurtPlayer = 0xBF8; // CEntityIOOutput
            public const nint m_hurtEntities = 0xC20; // CUtlVector<CHandle<CBaseEntity>>
        }
        // Parent: CLogicalEntity
        // Fields count: 8
        public static class CPhysConstraint {
            public const nint m_nameAttach1 = 0x7B0; // CUtlSymbolLarge
            public const nint m_nameAttach2 = 0x7B8; // CUtlSymbolLarge
            public const nint m_breakSound = 0x7C0; // CUtlSymbolLarge
            public const nint m_forceLimit = 0x7C8; // float32
            public const nint m_torqueLimit = 0x7CC; // float32
            public const nint m_teleportTick = 0x7D0; // uint32
            public const nint m_minTeleportDistance = 0x7D4; // float32
            public const nint m_OnBreak = 0x7D8; // CEntityIOOutput
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
        public static class CMapVetoPickController {
            public const nint m_bPlayedIntroVcd = 0x7A8; // bool
            public const nint m_bNeedToPlayFiveSecondsRemaining = 0x7A9; // bool
            public const nint m_dblPreMatchDraftSequenceTime = 0x7C8; // float64
            public const nint m_bPreMatchDraftStateChanged = 0x7D0; // bool
            public const nint m_nDraftType = 0x7D4; // int32
            public const nint m_nTeamWinningCoinToss = 0x7D8; // int32
            public const nint m_nTeamWithFirstChoice = 0x7DC; // int32[64]
            public const nint m_nVoteMapIdsList = 0x8DC; // int32[7]
            public const nint m_nAccountIDs = 0x8F8; // int32[64]
            public const nint m_nMapId0 = 0x9F8; // int32[64]
            public const nint m_nMapId1 = 0xAF8; // int32[64]
            public const nint m_nMapId2 = 0xBF8; // int32[64]
            public const nint m_nMapId3 = 0xCF8; // int32[64]
            public const nint m_nMapId4 = 0xDF8; // int32[64]
            public const nint m_nMapId5 = 0xEF8; // int32[64]
            public const nint m_nStartingSide0 = 0xFF8; // int32[64]
            public const nint m_nCurrentPhase = 0x10F8; // int32
            public const nint m_nPhaseStartTick = 0x10FC; // int32
            public const nint m_nPhaseDurationTicks = 0x1100; // int32
            public const nint m_OnMapVetoed = 0x1108; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnMapPicked = 0x1130; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnSidesPicked = 0x1158; // CEntityOutputTemplate<int32>
            public const nint m_OnNewPhaseStarted = 0x1180; // CEntityOutputTemplate<int32>
            public const nint m_OnLevelTransition = 0x11A8; // CEntityOutputTemplate<int32>
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CCSMinimapBoundary {
        }
        // Parent: CPointEntity
        // Fields count: 4
        public static class CSoundEnt {
            public const nint m_iFreeSound = 0x7A8; // int32
            public const nint m_iActiveSound = 0x7AC; // int32
            public const nint m_cLastActiveSounds = 0x7B0; // int32
            public const nint m_SoundPool = 0x7B4; // CSound[128]
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CInfoSpawnGroupLandmark {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x40; // int32
            public const nint m_nButtons = 0x48; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x68; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x70; // uint64
            public const nint m_nButtonDoublePressed = 0x78; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x80; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x180; // uint32
            public const nint m_nToggleButtonDownMask = 0x188; // uint64
            public const nint m_flMaxspeed = 0x198; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
            public const nint m_flForwardMove = 0x1AC; // float32
            public const nint m_flLeftMove = 0x1B0; // float32
            public const nint m_flUpMove = 0x1B4; // float32
            public const nint m_vecLastMovementImpulses = 0x1B8; // Vector
            public const nint m_vecOldViewAngles = 0x1C4; // QAngle
        }
        // Parent: CSprite
        // Fields count: 0
        public static class CSpriteOriented {
        }
        // Parent: CSoundOpvarSetAABBEntity
        // Fields count: 0
        public static class CSoundOpvarSetOBBEntity {
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponM4A1 {
        }
        // Parent: CBeam
        // Fields count: 5
        public static class CEnvLaser {
            public const nint m_iszLaserTarget = 0xA98; // CUtlSymbolLarge
            public const nint m_pSprite = 0xAA0; // CSprite*
            public const nint m_iszSpriteName = 0xAA8; // CUtlSymbolLarge
            public const nint m_firePosition = 0xAB0; // Vector
            public const nint m_flStartFrame = 0xABC; // float32
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
        public static class CBasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0xF78; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0xF7C; // float32
            public const nint m_nNextSecondaryAttackTick = 0xF80; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0xF84; // float32
            public const nint m_iClip1 = 0xF88; // int32
            public const nint m_iClip2 = 0xF8C; // int32
            public const nint m_pReserveAmmo = 0xF90; // int32[2]
            public const nint m_OnPlayerUse = 0xF98; // CEntityIOOutput
        }
        // Parent: CPlayerControllerComponent
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
        // NetworkVarNames: m_matchStats (CSMatchStats_t)
        // NetworkVarNames: m_iNumRoundKills (int)
        // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
        // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0x90; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x148; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x14C; // int32
            public const nint m_unTotalRoundDamageDealt = 0x150; // uint32
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: CBaseFlex
        // Fields count: 0
        public static class CBaseFlexAlias_funCBaseFlex {
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
        public static class CFish {
            public const nint m_pool = 0xBF0; // CHandle<CFishPool>
            public const nint m_id = 0xBF4; // uint32
            public const nint m_x = 0xBF8; // float32
            public const nint m_y = 0xBFC; // float32
            public const nint m_z = 0xC00; // float32
            public const nint m_angle = 0xC04; // float32
            public const nint m_angleChange = 0xC08; // float32
            public const nint m_forward = 0xC0C; // Vector
            public const nint m_perp = 0xC18; // Vector
            public const nint m_poolOrigin = 0xC24; // Vector
            public const nint m_waterLevel = 0xC30; // float32
            public const nint m_speed = 0xC34; // float32
            public const nint m_desiredSpeed = 0xC38; // float32
            public const nint m_calmSpeed = 0xC3C; // float32
            public const nint m_panicSpeed = 0xC40; // float32
            public const nint m_avoidRange = 0xC44; // float32
            public const nint m_turnTimer = 0xC48; // CountdownTimer
            public const nint m_turnClockwise = 0xC60; // bool
            public const nint m_goTimer = 0xC68; // CountdownTimer
            public const nint m_moveTimer = 0xC80; // CountdownTimer
            public const nint m_panicTimer = 0xC98; // CountdownTimer
            public const nint m_disperseTimer = 0xCB0; // CountdownTimer
            public const nint m_proximityTimer = 0xCC8; // CountdownTimer
            public const nint m_visible = 0xCE0; // CUtlVector<CFish*>
        }
        // Parent: CBaseEntity
        // Fields count: 3
        public static class CEnvFireSource {
            public const nint m_bEnabled = 0x7A8; // bool
            public const nint m_radius = 0x7AC; // float32
            public const nint m_damage = 0x7B0; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CInfoLadderDismount {
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
        public static class CBaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0xD24; // Vector
            public const nint m_vInitialVelocity = 0xD30; // Vector
            public const nint m_nBounces = 0xD3C; // int32
            public const nint m_nExplodeEffectIndex = 0xD40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0xD48; // int32
            public const nint m_vecExplodeEffectOrigin = 0xD4C; // Vector
            public const nint m_flSpawnTime = 0xD58; // GameTime_t
            public const nint m_unOGSExtraFlags = 0xD5C; // uint8
            public const nint m_bDetonationRecorded = 0xD5D; // bool
            public const nint m_flDetonateTime = 0xD60; // GameTime_t
            public const nint m_nItemIndex = 0xD64; // uint16
            public const nint m_vecOriginalSpawnLocation = 0xD68; // Vector
            public const nint m_flLastBounceSoundTime = 0xD74; // GameTime_t
            public const nint m_vecGrenadeSpin = 0xD78; // RotationVector
            public const nint m_vecLastHitSurfaceNormal = 0xD84; // Vector
            public const nint m_nTicksAtZeroVelocity = 0xD90; // int32
            public const nint m_bHasEverHitPlayer = 0xD94; // bool
            public const nint m_bClearFromPlayers = 0xD95; // bool
        }
        // Parent: CServerOnlyModelEntity
        // Fields count: 1
        public static class CCSPlace {
            public const nint m_name = 0xA00; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Fields count: 0
        public static class CFuncTrainControls {
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
        public static class CEntityDissolve {
            public const nint m_flFadeInStart = 0x9F8; // float32
            public const nint m_flFadeInLength = 0x9FC; // float32
            public const nint m_flFadeOutModelStart = 0xA00; // float32
            public const nint m_flFadeOutModelLength = 0xA04; // float32
            public const nint m_flFadeOutStart = 0xA08; // float32
            public const nint m_flFadeOutLength = 0xA0C; // float32
            public const nint m_flStartTime = 0xA10; // GameTime_t
            public const nint m_nDissolveType = 0xA14; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xA18; // Vector
            public const nint m_nMagnitude = 0xA24; // uint32
        }
        // Parent: CSoundEventEntity
        // Fields count: 2
        public static class CSoundEventOBBEntity {
            public const nint m_vMins = 0x84C; // Vector
            public const nint m_vMaxs = 0x858; // Vector
        }
        // Parent: CPointEntity
        // Fields count: 12
        public static class CPointAngleSensor {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_nLookAtName = 0x7B0; // CUtlSymbolLarge
            public const nint m_hTargetEntity = 0x7B8; // CHandle<CBaseEntity>
            public const nint m_hLookAtEntity = 0x7BC; // CHandle<CBaseEntity>
            public const nint m_flDuration = 0x7C0; // float32
            public const nint m_flDotTolerance = 0x7C4; // float32
            public const nint m_flFacingTime = 0x7C8; // GameTime_t
            public const nint m_bFired = 0x7CC; // bool
            public const nint m_OnFacingLookat = 0x7D0; // CEntityIOOutput
            public const nint m_OnNotFacingLookat = 0x7F8; // CEntityIOOutput
            public const nint m_TargetDir = 0x820; // CEntityOutputTemplate<Vector>
            public const nint m_FacingPercentage = 0x848; // CEntityOutputTemplate<float32>
        }
        // Parent: CBtNodeDecorator
        // Fields count: 1
        public static class CBtNodeCondition {
            public const nint m_bNegated = 0x58; // bool
        }
        // Parent: CBaseAnimGraph
        // Fields count: 12
        public static class CPhysMagnet {
            public const nint m_OnMagnetAttach = 0xBF0; // CEntityIOOutput
            public const nint m_OnMagnetDetach = 0xC18; // CEntityIOOutput
            public const nint m_massScale = 0xC40; // float32
            public const nint m_forceLimit = 0xC44; // float32
            public const nint m_torqueLimit = 0xC48; // float32
            public const nint m_MagnettedEntities = 0xC50; // CUtlVector<magnetted_objects_t>
            public const nint m_bActive = 0xC68; // bool
            public const nint m_bHasHitSomething = 0xC69; // bool
            public const nint m_flTotalMass = 0xC6C; // float32
            public const nint m_flRadius = 0xC70; // float32
            public const nint m_flNextSuckTime = 0xC74; // GameTime_t
            public const nint m_iMaxObjectsAttached = 0xC78; // int32
        }
        // Parent: CSceneEntity
        // Fields count: 0
        public static class CSceneEntityAlias_logic_choreographed_scene {
        }
        // Parent: CBaseModelEntity
        // Fields count: 2
        public static class CFuncNavBlocker {
            public const nint m_bDisabled = 0x9F8; // bool
            public const nint m_nBlockedTeamNumber = 0x9FC; // int32
        }
        // Parent: CPointEntity
        // Fields count: 4
        public static class CRagdollMagnet {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_radius = 0x7AC; // float32
            public const nint m_force = 0x7B0; // float32
            public const nint m_axis = 0x7B4; // Vector
        }
        // Parent: CBaseModelEntity
        // Fields count: 6
        public static class CFuncBrush {
            public const nint m_iSolidity = 0x9F8; // BrushSolidities_e
            public const nint m_iDisabled = 0x9FC; // int32
            public const nint m_bSolidBsp = 0xA00; // bool
            public const nint m_iszExcludedClass = 0xA08; // CUtlSymbolLarge
            public const nint m_bInvertExclusion = 0xA10; // bool
            public const nint m_bScriptedMovement = 0xA11; // bool
        }
        // Parent: CPointEntity
        // Fields count: 3
        public static class CPointProximitySensor {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_hTargetEntity = 0x7AC; // CHandle<CBaseEntity>
            public const nint m_Distance = 0x7B0; // CEntityOutputTemplate<float32>
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x800; // CUtlSymbolLarge
        }
        // Parent: CBaseCSGrenadeProjectile
        // Fields count: 0
        public static class CHEGrenadeProjectile {
        }
        // Parent: CBaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class CEnvWind {
            public const nint m_EnvWindShared = 0x7A8; // CEnvWindShared
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
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
        public static class CCSTeam {
            public const nint m_nLastRecievedShorthandedRoundBonus = 0x860; // int32
            public const nint m_nShorthandedRoundBonusStartRound = 0x864; // int32
            public const nint m_bSurrendered = 0x868; // bool
            public const nint m_szTeamMatchStat = 0x869; // char[512]
            public const nint m_numMapVictories = 0xA6C; // int32
            public const nint m_scoreFirstHalf = 0xA70; // int32
            public const nint m_scoreSecondHalf = 0xA74; // int32
            public const nint m_scoreOvertime = 0xA78; // int32
            public const nint m_szClanTeamname = 0xA7C; // char[129]
            public const nint m_iClanID = 0xB00; // uint32
            public const nint m_szTeamFlagImage = 0xB04; // char[8]
            public const nint m_szTeamLogoImage = 0xB0C; // char[8]
            public const nint m_flNextResourceTime = 0xB14; // float32
            public const nint m_iLastUpdateSentAt = 0xB18; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
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
        public static class VPhysicsCollisionAttribute_t {
            public const nint m_nInteractsAs = 0x8; // uint64
            public const nint m_nInteractsWith = 0x10; // uint64
            public const nint m_nInteractsExclude = 0x18; // uint64
            public const nint m_nEntityId = 0x20; // uint32
            public const nint m_nOwnerId = 0x24; // uint32
            public const nint m_nHierarchyId = 0x28; // uint16
            public const nint m_nCollisionGroup = 0x2A; // uint8
            public const nint m_nCollisionFunctionMask = 0x2B; // uint8
        }
        // Parent: CTriggerMultiple
        // Fields count: 4
        public static class CTriggerImpact {
            public const nint m_flMagnitude = 0xBC8; // float32
            public const nint m_flNoise = 0xBCC; // float32
            public const nint m_flViewkick = 0xBD0; // float32
            public const nint m_pOutputForce = 0xBD8; // CEntityOutputTemplate<Vector>
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
        public static class CSun {
            public const nint m_vDirection = 0x9F8; // Vector
            public const nint m_clrOverlay = 0xA04; // Color
            public const nint m_iszEffectName = 0xA08; // CUtlSymbolLarge
            public const nint m_iszSSEffectName = 0xA10; // CUtlSymbolLarge
            public const nint m_bOn = 0xA18; // bool
            public const nint m_bmaxColor = 0xA19; // bool
            public const nint m_flSize = 0xA1C; // float32
            public const nint m_flRotation = 0xA20; // float32
            public const nint m_flHazeScale = 0xA24; // float32
            public const nint m_flAlphaHaze = 0xA28; // float32
            public const nint m_flAlphaHdr = 0xA2C; // float32
            public const nint m_flAlphaScale = 0xA30; // float32
            public const nint m_flHDRColorScale = 0xA34; // float32
            public const nint m_flFarZScale = 0xA38; // float32
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
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: CBaseCSGrenade
        // Fields count: 0
        public static class CHEGrenade {
        }
        // Parent: CRulePointEntity
        // Fields count: 0
        public static class CGameEnd {
        }
        // Parent: CBaseTrigger
        // Fields count: 0
        public static class CTriggerCallback {
        }
        // Parent: CBaseModelEntity
        // Fields count: 3
        public static class CBubbling {
            public const nint m_density = 0x9F8; // int32
            public const nint m_frequency = 0x9FC; // int32
            public const nint m_state = 0xA00; // int32
        }
        // Parent: CTeamplayRules
        // Fields count: 216
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
        public static class CCSGameRules {
            public const nint __m_pChainEntity = 0x98; // CNetworkVarChainer
            public const nint m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
            public const nint m_bFreezePeriod = 0xC4; // bool
            public const nint m_bWarmupPeriod = 0xC5; // bool
            public const nint m_fWarmupPeriodEnd = 0xC8; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0xCC; // GameTime_t
            public const nint m_nTotalPausedTicks = 0xD0; // int32
            public const nint m_nPauseStartTick = 0xD4; // int32
            public const nint m_bServerPaused = 0xD8; // bool
            public const nint m_bGamePaused = 0xD9; // bool
            public const nint m_bTerroristTimeOutActive = 0xDA; // bool
            public const nint m_bCTTimeOutActive = 0xDB; // bool
            public const nint m_flTerroristTimeOutRemaining = 0xDC; // float32
            public const nint m_flCTTimeOutRemaining = 0xE0; // float32
            public const nint m_nTerroristTimeOuts = 0xE4; // int32
            public const nint m_nCTTimeOuts = 0xE8; // int32
            public const nint m_bTechnicalTimeOut = 0xEC; // bool
            public const nint m_bMatchWaitingForResume = 0xED; // bool
            public const nint m_iRoundTime = 0xF0; // int32
            public const nint m_fMatchStartTime = 0xF4; // float32
            public const nint m_fRoundStartTime = 0xF8; // GameTime_t
            public const nint m_flRestartRoundTime = 0xFC; // GameTime_t
            public const nint m_bGameRestart = 0x100; // bool
            public const nint m_flGameStartTime = 0x104; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x108; // float32
            public const nint m_gamePhase = 0x10C; // int32
            public const nint m_totalRoundsPlayed = 0x110; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x114; // int32
            public const nint m_nOvertimePlaying = 0x118; // int32
            public const nint m_iHostagesRemaining = 0x11C; // int32
            public const nint m_bAnyHostageReached = 0x120; // bool
            public const nint m_bMapHasBombTarget = 0x121; // bool
            public const nint m_bMapHasRescueZone = 0x122; // bool
            public const nint m_bMapHasBuyZone = 0x123; // bool
            public const nint m_bIsQueuedMatchmaking = 0x124; // bool
            public const nint m_nQueuedMatchmakingMode = 0x128; // int32
            public const nint m_bIsValveDS = 0x12C; // bool
            public const nint m_bLogoMap = 0x12D; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0x12E; // bool
            public const nint m_iSpectatorSlotCount = 0x130; // int32
            public const nint m_MatchDevice = 0x134; // int32
            public const nint m_bHasMatchStarted = 0x138; // bool
            public const nint m_nNextMapInMapgroup = 0x13C; // int32
            public const nint m_szTournamentEventName = 0x140; // char[512]
            public const nint m_szTournamentEventStage = 0x340; // char[512]
            public const nint m_szMatchStatTxt = 0x540; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x740; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x940; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
            public const nint m_bIsDroppingItems = 0x94C; // bool
            public const nint m_bIsQuestEligible = 0x94D; // bool
            public const nint m_bIsHltvActive = 0x94E; // bool
            public const nint m_nGuardianModeWaveNumber = 0x950; // int32
            public const nint m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
            public const nint m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
            public const nint m_nGuardianGrenadesToGiveBots = 0x95C; // int32
            public const nint m_nNumHeaviesToSpawn = 0x960; // int32
            public const nint m_numGlobalGiftsGiven = 0x964; // uint32
            public const nint m_numGlobalGifters = 0x968; // uint32
            public const nint m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
            public const nint m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
            public const nint m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
            public const nint m_arrProhibitedItemIndices = 0x990; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
            public const nint m_numBestOfMaps = 0xA68; // int32
            public const nint m_nHalloweenMaskListSeed = 0xA6C; // int32
            public const nint m_bBombDropped = 0xA70; // bool
            public const nint m_bBombPlanted = 0xA71; // bool
            public const nint m_iRoundWinStatus = 0xA74; // int32
            public const nint m_eRoundWinReason = 0xA78; // int32
            public const nint m_bTCantBuy = 0xA7C; // bool
            public const nint m_bCTCantBuy = 0xA7D; // bool
            public const nint m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
            public const nint m_iMatchStats_RoundResults = 0xA84; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
            public const nint m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
            public const nint m_nServerQuestID = 0xCEC; // int32
            public const nint m_vMinimapMins = 0xCF0; // Vector
            public const nint m_vMinimapMaxs = 0xCFC; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
            public const nint m_bDontIncrementCoopWave = 0xD28; // bool
            public const nint m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
            public const nint m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xD7C; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xD80; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xD84; // int32
            public const nint m_bHasHostageBeenTouched = 0xDA0; // bool
            public const nint m_flIntermissionStartTime = 0xDA4; // GameTime_t
            public const nint m_flIntermissionEndTime = 0xDA8; // GameTime_t
            public const nint m_bLevelInitialized = 0xDAC; // bool
            public const nint m_iTotalRoundsPlayed = 0xDB0; // int32
            public const nint m_iUnBalancedRounds = 0xDB4; // int32
            public const nint m_endMatchOnRoundReset = 0xDB8; // bool
            public const nint m_endMatchOnThink = 0xDB9; // bool
            public const nint m_iFreezeTime = 0xDBC; // int32
            public const nint m_iNumTerrorist = 0xDC0; // int32
            public const nint m_iNumCT = 0xDC4; // int32
            public const nint m_iNumSpawnableTerrorist = 0xDC8; // int32
            public const nint m_iNumSpawnableCT = 0xDCC; // int32
            public const nint m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32>
            public const nint m_nSpawnPointsRandomSeed = 0xDE8; // int32
            public const nint m_bFirstConnected = 0xDEC; // bool
            public const nint m_bCompleteReset = 0xDED; // bool
            public const nint m_bPickNewTeamsOnReset = 0xDEE; // bool
            public const nint m_bScrambleTeamsOnRestart = 0xDEF; // bool
            public const nint m_bSwapTeamsOnRestart = 0xDF0; // bool
            public const nint m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32>
            public const nint m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
            public const nint m_numQueuedMatchmakingAccounts = 0xE18; // uint32
            public const nint m_fAvgPlayerRank = 0xE1C; // float32
            public const nint m_pQueuedMatchmakingReservationString = 0xE20; // char*
            public const nint m_numTotalTournamentDrops = 0xE28; // uint32
            public const nint m_numSpectatorsCountMax = 0xE2C; // uint32
            public const nint m_numSpectatorsCountMaxTV = 0xE30; // uint32
            public const nint m_numSpectatorsCountMaxLnk = 0xE34; // uint32
            public const nint m_bForceTeamChangeSilent = 0xE40; // bool
            public const nint m_bLoadingRoundBackupData = 0xE41; // bool
            public const nint m_nMatchInfoShowType = 0xE78; // int32
            public const nint m_flMatchInfoDecidedTime = 0xE7C; // float32
            public const nint m_flCoopRespawnAndHealTime = 0xE98; // float32
            public const nint m_coopBonusCoinsFound = 0xE9C; // int32
            public const nint m_coopBonusPistolsOnly = 0xEA0; // bool
            public const nint m_coopPlayersInDeploymentZone = 0xEA1; // bool
            public const nint m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
            public const nint mTeamDMLastWinningTeamNumber = 0xEA4; // int32
            public const nint mTeamDMLastThinkTime = 0xEA8; // float32
            public const nint m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
            public const nint m_iAccountTerrorist = 0xEB0; // int32
            public const nint m_iAccountCT = 0xEB4; // int32
            public const nint m_iSpawnPointCount_Terrorist = 0xEB8; // int32
            public const nint m_iSpawnPointCount_CT = 0xEBC; // int32
            public const nint m_iMaxNumTerrorists = 0xEC0; // int32
            public const nint m_iMaxNumCTs = 0xEC4; // int32
            public const nint m_iLoserBonus = 0xEC8; // int32
            public const nint m_iLoserBonusMostRecentTeam = 0xECC; // int32
            public const nint m_tmNextPeriodicThink = 0xED0; // float32
            public const nint m_bVoiceWonMatchBragFired = 0xED4; // bool
            public const nint m_fWarmupNextChatNoticeTime = 0xED8; // float32
            public const nint m_iHostagesRescued = 0xEE0; // int32
            public const nint m_iHostagesTouched = 0xEE4; // int32
            public const nint m_flNextHostageAnnouncement = 0xEE8; // float32
            public const nint m_bNoTerroristsKilled = 0xEEC; // bool
            public const nint m_bNoCTsKilled = 0xEED; // bool
            public const nint m_bNoEnemiesKilled = 0xEEE; // bool
            public const nint m_bCanDonateWeapons = 0xEEF; // bool
            public const nint m_firstKillTime = 0xEF4; // float32
            public const nint m_firstBloodTime = 0xEFC; // float32
            public const nint m_hostageWasInjured = 0xF18; // bool
            public const nint m_hostageWasKilled = 0xF19; // bool
            public const nint m_bVoteCalled = 0xF28; // bool
            public const nint m_bServerVoteOnReset = 0xF29; // bool
            public const nint m_flVoteCheckThrottle = 0xF2C; // float32
            public const nint m_bBuyTimeEnded = 0xF30; // bool
            public const nint m_nLastFreezeEndBeep = 0xF34; // int32
            public const nint m_bTargetBombed = 0xF38; // bool
            public const nint m_bBombDefused = 0xF39; // bool
            public const nint m_bMapHasBombZone = 0xF3A; // bool
            public const nint m_vecMainCTSpawnPos = 0xF58; // Vector
            public const nint m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
            public const nint m_bRespawningAllRespawnablePlayers = 0xF98; // bool
            public const nint m_iNextCTSpawnPoint = 0xF9C; // int32
            public const nint m_flCTSpawnPointUsedTime = 0xFA0; // float32
            public const nint m_iNextTerroristSpawnPoint = 0xFA4; // int32
            public const nint m_flTerroristSpawnPointUsedTime = 0xFA8; // float32
            public const nint m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
            public const nint m_bIsUnreservedGameServer = 0xFE0; // bool
            public const nint m_fAutobalanceDisplayTime = 0xFE4; // float32
            public const nint m_bAllowWeaponSwitch = 0x1250; // bool
            public const nint m_bRoundTimeWarningTriggered = 0x1251; // bool
            public const nint m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
            public const nint m_fNextUpdateTeamClanNamesTime = 0x1258; // float32
            public const nint m_flLastThinkTime = 0x125C; // GameTime_t
            public const nint m_fAccumulatedRoundOffDamage = 0x1260; // float32
            public const nint m_nShorthandedBonusLastEvalRound = 0x1264; // int32
            public const nint m_nMatchAbortedEarlyReason = 0x14E0; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
            public const nint m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
            public const nint m_pGameModeRules = 0x1500; // CCSGameModeRules*
            public const nint m_BtGlobalBlackboard = 0x1508; // KeyValues3
            public const nint m_hPlayerResource = 0x1568; // CHandle<CBaseEntity>
            public const nint m_RetakeRules = 0x1570; // CRetakeGameRules
            public const nint m_GuardianBotSkillLevelMax = 0x1754; // int32
            public const nint m_GuardianBotSkillLevelMin = 0x1758; // int32
            public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1760; // CUtlVector<int32>[4]
            public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0; // bool[4]
            public const nint m_nMatchEndCount = 0x17E8; // uint8
            public const nint m_nTTeamIntroVariant = 0x17EC; // int32
            public const nint m_nCTTeamIntroVariant = 0x17F0; // int32
            public const nint m_bTeamIntroPeriod = 0x17F4; // bool
            public const nint m_fTeamIntroPeriodEnd = 0x17F8; // GameTime_t
            public const nint m_bPlayedTeamIntroVO = 0x17FC; // bool
            public const nint m_iRoundEndWinnerTeam = 0x1800; // int32
            public const nint m_eRoundEndReason = 0x1804; // int32
            public const nint m_bRoundEndShowTimerDefend = 0x1808; // bool
            public const nint m_iRoundEndTimerTime = 0x180C; // int32
            public const nint m_sRoundEndFunFactToken = 0x1810; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0x1818; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0x181C; // int32
            public const nint m_iRoundEndFunFactData2 = 0x1820; // int32
            public const nint m_iRoundEndFunFactData3 = 0x1824; // int32
            public const nint m_sRoundEndMessage = 0x1828; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0x1830; // int32
            public const nint m_bRoundEndNoMusic = 0x1834; // bool
            public const nint m_iRoundEndLegacy = 0x1838; // int32
            public const nint m_nRoundEndCount = 0x183C; // uint8
            public const nint m_iRoundStartRoundNumber = 0x1840; // int32
            public const nint m_nRoundStartCount = 0x1844; // uint8
            public const nint m_flLastPerfSampleTime = 0x5850; // float64
            public const nint m_bSkipNextServerPerfSample = 0x5858; // bool
        }
        // Parent: CModelPointEntity
        // Fields count: 0
        public static class CShower {
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
        public static class CEnvCubemapFog {
            public const nint m_flEndDistance = 0x7A8; // float32
            public const nint m_flStartDistance = 0x7AC; // float32
            public const nint m_flFogFalloffExponent = 0x7B0; // float32
            public const nint m_bHeightFogEnabled = 0x7B4; // bool
            public const nint m_flFogHeightWidth = 0x7B8; // float32
            public const nint m_flFogHeightEnd = 0x7BC; // float32
            public const nint m_flFogHeightStart = 0x7C0; // float32
            public const nint m_flFogHeightExponent = 0x7C4; // float32
            public const nint m_flLODBias = 0x7C8; // float32
            public const nint m_bActive = 0x7CC; // bool
            public const nint m_bStartDisabled = 0x7CD; // bool
            public const nint m_flFogMaxOpacity = 0x7D0; // float32
            public const nint m_nCubemapSourceType = 0x7D4; // int32
            public const nint m_hSkyMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x7E0; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x7F0; // bool
            public const nint m_bFirstTime = 0x7F1; // bool
        }
        // Parent: CBaseButton
        // Fields count: 0
        public static class CPhysicalButton {
        }
        // Parent: CSoundEventEntity
        // Fields count: 2
        public static class CSoundEventAABBEntity {
            public const nint m_vMins = 0x84C; // Vector
            public const nint m_vMaxs = 0x858; // Vector
        }
        // Parent: CModelPointEntity
        // Fields count: 15
        public static class CEnvExplosion {
            public const nint m_iMagnitude = 0x9F8; // int32
            public const nint m_flPlayerDamage = 0x9FC; // float32
            public const nint m_iRadiusOverride = 0xA00; // int32
            public const nint m_flInnerRadius = 0xA04; // float32
            public const nint m_spriteScale = 0xA08; // int32
            public const nint m_flDamageForce = 0xA0C; // float32
            public const nint m_hInflictor = 0xA10; // CHandle<CBaseEntity>
            public const nint m_iCustomDamageType = 0xA14; // int32
            public const nint m_iszExplosionType = 0xA20; // CUtlSymbolLarge
            public const nint m_iszCustomEffectName = 0xA28; // CUtlSymbolLarge
            public const nint m_iszCustomSoundName = 0xA30; // CUtlSymbolLarge
            public const nint m_iClassIgnore = 0xA38; // Class_T
            public const nint m_iClassIgnore2 = 0xA3C; // Class_T
            public const nint m_iszEntityIgnoreName = 0xA40; // CUtlSymbolLarge
            public const nint m_hEntityIgnore = 0xA48; // CHandle<CBaseEntity>
        }
        // Parent: CBaseFilter
        // Fields count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x800; // CUtlStringToken
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle<CBasePlayerWeapon>
            public const nint m_bIsRescuing = 0x23C; // bool
            public const nint m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
        }
        // Parent: CPointEntity
        // Fields count: 6
        public static class CAISound {
            public const nint m_iSoundType = 0x7A8; // int32
            public const nint m_iSoundContext = 0x7AC; // int32
            public const nint m_iVolume = 0x7B0; // int32
            public const nint m_iSoundIndex = 0x7B4; // int32
            public const nint m_flDuration = 0x7B8; // float32
            public const nint m_iszProxyEntityName = 0x7C0; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Fields count: 7
        public static class CPointEntityFinder {
            public const nint m_hEntity = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_iFilterName = 0x7B0; // CUtlSymbolLarge
            public const nint m_hFilter = 0x7B8; // CHandle<CBaseFilter>
            public const nint m_iRefName = 0x7C0; // CUtlSymbolLarge
            public const nint m_hReference = 0x7C8; // CHandle<CBaseEntity>
            public const nint m_FindMethod = 0x7CC; // EntFinderMethod_t
            public const nint m_OnFoundEntity = 0x7D0; // CEntityIOOutput
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
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x18; // ShardSolid_t
            public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
            public const nint m_vecPanelSize = 0x1C; // Vector2D
            public const nint m_vecStressPositionA = 0x24; // Vector2D
            public const nint m_vecStressPositionB = 0x2C; // Vector2D
            public const nint m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
            public const nint m_flGlassHalfThickness = 0x50; // float32
            public const nint m_bHasParent = 0x54; // bool
            public const nint m_bParentFrozen = 0x55; // bool
            public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: CMarkupVolumeWithRef
        // Fields count: 1
        public static class CMarkupVolumeTagged_NavGame {
            public const nint m_bFloodFillAttribute = 0xA48; // bool
        }
        // Parent: CBaseTrigger
        // Fields count: 1
        public static class CBuyZone {
            public const nint m_LegacyTeamNum = 0xB9C; // int32
        }
        // Parent: CLogicalEntity
        // Fields count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x7A8; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x7B0; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x7B8; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x7C0; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x7C4; // bool
            public const nint m_pOutputOnSpawned = 0x7C8; // CEntityIOOutput
            public const nint m_clientOnlyEntityBehavior = 0x7F0; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x7F4; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x7F8; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x810; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x828; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x830; // HSCRIPT
        }
        // Parent: CBaseCSGrenade
        // Fields count: 0
        public static class CTripWireFire {
        }
        // Parent: CPointEntity
        // Fields count: 6
        public static class CPhysForce {
            public const nint m_nameAttach = 0x7B0; // CUtlSymbolLarge
            public const nint m_force = 0x7B8; // float32
            public const nint m_forceTime = 0x7BC; // float32
            public const nint m_attachedObject = 0x7C0; // CHandle<CBaseEntity>
            public const nint m_wasRestored = 0x7C4; // bool
            public const nint m_integrator = 0x7C8; // CConstantForceController
        }
        // Parent: CLogicalEntity
        // Fields count: 6
        public static class CLogicDistanceAutosave {
            public const nint m_iszTargetEntity = 0x7A8; // CUtlSymbolLarge
            public const nint m_flDistanceToPlayer = 0x7B0; // float32
            public const nint m_bForceNewLevelUnit = 0x7B4; // bool
            public const nint m_bCheckCough = 0x7B5; // bool
            public const nint m_bThinkDangerous = 0x7B6; // bool
            public const nint m_flDangerousTime = 0x7B8; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponSSG08 {
        }
        // Parent: CCSWeaponBase
        // Fields count: 0
        public static class CBreachCharge {
        }
        // Parent: CLogicalEntity
        // Fields count: 4
        public static class CLogicBranch {
            public const nint m_bInValue = 0x7A8; // bool
            public const nint m_Listeners = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_OnTrue = 0x7C8; // CEntityIOOutput
            public const nint m_OnFalse = 0x7F0; // CEntityIOOutput
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponUMP45 {
        }
        // Parent: CSprite
        // Fields count: 0
        public static class CSpriteAlias_env_glow {
        }
        // Parent: CBaseToggle
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class CBaseButton {
            public const nint m_angMoveEntitySpace = 0xA78; // QAngle
            public const nint m_fStayPushed = 0xA84; // bool
            public const nint m_fRotating = 0xA85; // bool
            public const nint m_ls = 0xA88; // locksound_t
            public const nint m_sUseSound = 0xAA8; // CUtlSymbolLarge
            public const nint m_sLockedSound = 0xAB0; // CUtlSymbolLarge
            public const nint m_sUnlockedSound = 0xAB8; // CUtlSymbolLarge
            public const nint m_bLocked = 0xAC0; // bool
            public const nint m_bDisabled = 0xAC1; // bool
            public const nint m_flUseLockedTime = 0xAC4; // GameTime_t
            public const nint m_bSolidBsp = 0xAC8; // bool
            public const nint m_OnDamaged = 0xAD0; // CEntityIOOutput
            public const nint m_OnPressed = 0xAF8; // CEntityIOOutput
            public const nint m_OnUseLocked = 0xB20; // CEntityIOOutput
            public const nint m_OnIn = 0xB48; // CEntityIOOutput
            public const nint m_OnOut = 0xB70; // CEntityIOOutput
            public const nint m_nState = 0xB98; // int32
            public const nint m_hConstraint = 0xB9C; // CEntityHandle
            public const nint m_hConstraintParent = 0xBA0; // CEntityHandle
            public const nint m_bForceNpcExclude = 0xBA4; // bool
            public const nint m_sGlowEntity = 0xBA8; // CUtlSymbolLarge
            public const nint m_glowEntity = 0xBB0; // CHandle<CBaseModelEntity>
            public const nint m_usable = 0xBB4; // bool
            public const nint m_szDisplayText = 0xBB8; // CUtlSymbolLarge
        }
        // Parent: CPhysConstraint
        // Fields count: 6
        public static class CPhysLength {
            public const nint m_offset = 0x800; // Vector[2]
            public const nint m_vecAttach = 0x818; // Vector
            public const nint m_addLength = 0x824; // float32
            public const nint m_minLength = 0x828; // float32
            public const nint m_totalLength = 0x82C; // float32
            public const nint m_bEnableCollision = 0x830; // bool
        }
        // Parent: CPointEntity
        // Fields count: 4
        public static class CBlood {
            public const nint m_vecSprayAngles = 0x7A8; // QAngle
            public const nint m_vecSprayDir = 0x7B4; // Vector
            public const nint m_flAmount = 0x7C0; // float32
            public const nint m_Color = 0x7C4; // int32
        }
        // Parent: CLogicalEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_fadeColor (Color)
        public static class CEnvFade {
            public const nint m_fadeColor = 0x7A8; // Color
            public const nint m_Duration = 0x7AC; // float32
            public const nint m_HoldDuration = 0x7B0; // float32
            public const nint m_OnBeginFade = 0x7B8; // CEntityIOOutput
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponUSPSilencer {
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
        public static class CSprite {
            public const nint m_hSpriteMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0xA00; // CHandle<CBaseEntity>
            public const nint m_nAttachment = 0xA04; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0xA08; // float32
            public const nint m_flFrame = 0xA0C; // float32
            public const nint m_flDieTime = 0xA10; // GameTime_t
            public const nint m_nBrightness = 0xA20; // uint32
            public const nint m_flBrightnessDuration = 0xA24; // float32
            public const nint m_flSpriteScale = 0xA28; // float32
            public const nint m_flScaleDuration = 0xA2C; // float32
            public const nint m_bWorldSpaceScale = 0xA30; // bool
            public const nint m_flGlowProxySize = 0xA34; // float32
            public const nint m_flHDRColorScale = 0xA38; // float32
            public const nint m_flLastTime = 0xA3C; // GameTime_t
            public const nint m_flMaxFrame = 0xA40; // float32
            public const nint m_flStartScale = 0xA44; // float32
            public const nint m_flDestScale = 0xA48; // float32
            public const nint m_flScaleTimeStart = 0xA4C; // GameTime_t
            public const nint m_nStartBrightness = 0xA50; // int32
            public const nint m_nDestBrightness = 0xA54; // int32
            public const nint m_flBrightnessTimeStart = 0xA58; // GameTime_t
            public const nint m_nSpriteWidth = 0xA5C; // int32
            public const nint m_nSpriteHeight = 0xA60; // int32
        }
        // Parent: CBaseTrigger
        // Fields count: 0
        public static class CTriggerGravity {
        }
        // Parent: CBaseTrigger
        // Fields count: 7
        public static class CChangeLevel {
            public const nint m_sMapName = 0xBA0; // CUtlString
            public const nint m_sLandmarkName = 0xBA8; // CUtlString
            public const nint m_OnChangeLevel = 0xBB0; // CEntityIOOutput
            public const nint m_bTouched = 0xBD8; // bool
            public const nint m_bNoTouch = 0xBD9; // bool
            public const nint m_bNewChapter = 0xBDA; // bool
            public const nint m_bOnChangeLevelFired = 0xBDB; // bool
        }
        // Parent: CBaseTrigger
        // Fields count: 14
        public static class CTriggerLerpObject {
            public const nint m_iszLerpTarget = 0xBA0; // CUtlSymbolLarge
            public const nint m_hLerpTarget = 0xBA8; // CHandle<CBaseEntity>
            public const nint m_iszLerpTargetAttachment = 0xBB0; // CUtlSymbolLarge
            public const nint m_hLerpTargetAttachment = 0xBB8; // AttachmentHandle_t
            public const nint m_flLerpDuration = 0xBBC; // float32
            public const nint m_bLerpRestoreMoveType = 0xBC0; // bool
            public const nint m_bSingleLerpObject = 0xBC1; // bool
            public const nint m_vecLerpingObjects = 0xBC8; // CUtlVector<lerpdata_t>
            public const nint m_iszLerpEffect = 0xBE0; // CUtlSymbolLarge
            public const nint m_iszLerpSound = 0xBE8; // CUtlSymbolLarge
            public const nint m_bAttachTouchingObject = 0xBF0; // bool
            public const nint m_hEntityToWaitForDisconnect = 0xBF4; // CHandle<CBaseEntity>
            public const nint m_OnLerpStarted = 0xBF8; // CEntityIOOutput
            public const nint m_OnLerpFinished = 0xC20; // CEntityIOOutput
        }
        // Parent: CBaseToggle
        // Fields count: 11
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class CBaseTrigger {
            public const nint m_bDisabled = 0xA78; // bool
            public const nint m_iFilterName = 0xA80; // CUtlSymbolLarge
            public const nint m_hFilter = 0xA88; // CHandle<CBaseFilter>
            public const nint m_OnStartTouch = 0xA90; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0xAB8; // CEntityIOOutput
            public const nint m_OnEndTouch = 0xAE0; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0xB08; // CEntityIOOutput
            public const nint m_OnTouching = 0xB30; // CEntityIOOutput
            public const nint m_OnNotTouching = 0xB58; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0xB80; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bClientSidePredicted = 0xB98; // bool
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CLogicScript {
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
        public static class CEconEntity {
            public const nint m_AttributeManager = 0xC90; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0xF58; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0xF5C; // uint32
            public const nint m_nFallbackPaintKit = 0xF60; // int32
            public const nint m_nFallbackSeed = 0xF64; // int32
            public const nint m_flFallbackWear = 0xF68; // float32
            public const nint m_nFallbackStatTrak = 0xF6C; // int32
            public const nint m_hOldProvidee = 0xF70; // CHandle<CBaseEntity>
            public const nint m_iOldOwnerClass = 0xF74; // int32
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
        public static class CCollisionProperty {
            public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
            public const nint m_vecMins = 0x40; // Vector
            public const nint m_vecMaxs = 0x4C; // Vector
            public const nint m_usSolidFlags = 0x5A; // uint8
            public const nint m_nSolidType = 0x5B; // SolidType_t
            public const nint m_triggerBloat = 0x5C; // uint8
            public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
            public const nint m_CollisionGroup = 0x5E; // uint8
            public const nint m_nEnablePhysics = 0x5F; // uint8
            public const nint m_flBoundingRadius = 0x60; // float32
            public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
            public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
            public const nint m_vecSurroundingMaxs = 0x7C; // Vector
            public const nint m_vecSurroundingMins = 0x88; // Vector
            public const nint m_vCapsuleCenter1 = 0x94; // Vector
            public const nint m_vCapsuleCenter2 = 0xA0; // Vector
            public const nint m_flCapsuleRadius = 0xAC; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 0
        public static class CServerOnlyEntity {
        }
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
        public static class CNetworkedSequenceOperation {
            public const nint m_hSequence = 0x8; // HSequence
            public const nint m_flPrevCycle = 0xC; // float32
            public const nint m_flCycle = 0x10; // float32
            public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
            public const nint m_bSequenceChangeNetworked = 0x1C; // bool
            public const nint m_bDiscontinuity = 0x1D; // bool
            public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float32
            public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float32
        }
        // Parent: CPointEntity
        // Fields count: 0
        public static class CPointBroadcastClientCommand {
        }
        // Parent: CBaseModelEntity
        // Fields count: 32
        public static class CFuncShatterglass {
            public const nint m_hGlassMaterialDamaged = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hGlassMaterialUndamaged = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hConcreteMaterialEdgeFace = 0xA08; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hConcreteMaterialEdgeCaps = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hConcreteMaterialEdgeFins = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_matPanelTransform = 0xA20; // matrix3x4_t
            public const nint m_matPanelTransformWsTemp = 0xA50; // matrix3x4_t
            public const nint m_vecShatterGlassShards = 0xA80; // CUtlVector<uint32>
            public const nint m_PanelSize = 0xA98; // Vector2D
            public const nint m_vecPanelNormalWs = 0xAA0; // Vector
            public const nint m_nNumShardsEverCreated = 0xAAC; // int32
            public const nint m_flLastShatterSoundEmitTime = 0xAB0; // GameTime_t
            public const nint m_flLastCleanupTime = 0xAB4; // GameTime_t
            public const nint m_flInitAtTime = 0xAB8; // GameTime_t
            public const nint m_flGlassThickness = 0xABC; // float32
            public const nint m_flSpawnInvulnerability = 0xAC0; // float32
            public const nint m_bBreakSilent = 0xAC4; // bool
            public const nint m_bBreakShardless = 0xAC5; // bool
            public const nint m_bBroken = 0xAC6; // bool
            public const nint m_bHasRateLimitedShards = 0xAC7; // bool
            public const nint m_bGlassNavIgnore = 0xAC8; // bool
            public const nint m_bGlassInFrame = 0xAC9; // bool
            public const nint m_bStartBroken = 0xACA; // bool
            public const nint m_iInitialDamageType = 0xACB; // uint8
            public const nint m_szDamagePositioningEntityName01 = 0xAD0; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName02 = 0xAD8; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName03 = 0xAE0; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName04 = 0xAE8; // CUtlSymbolLarge
            public const nint m_vInitialDamagePositions = 0xAF0; // CUtlVector<Vector>
            public const nint m_vExtraDamagePositions = 0xB08; // CUtlVector<Vector>
            public const nint m_OnBroken = 0xB20; // CEntityIOOutput
            public const nint m_iSurfaceType = 0xB49; // uint8
        }
        // Parent: CBaseButton
        // Fields count: 0
        public static class CRotButton {
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class CWeaponTaser {
            public const nint m_fFireTime = 0x11BC; // GameTime_t
            public const nint m_nLastAttackTick = 0x11C0; // int32
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class CWaterBullet {
        }
        // Parent: CBaseModelEntity
        // Fields count: 1
        public static class CMarkupVolume {
            public const nint m_bEnabled = 0x9F8; // bool
        }
        // Parent: CPointEntity
        // Fields count: 6
        public static class CMessage {
            public const nint m_iszMessage = 0x7A8; // CUtlSymbolLarge
            public const nint m_MessageVolume = 0x7B0; // float32
            public const nint m_MessageAttenuation = 0x7B4; // int32
            public const nint m_Radius = 0x7B8; // float32
            public const nint m_sNoise = 0x7C0; // CUtlSymbolLarge
            public const nint m_OnShowMessage = 0x7C8; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        public static class CLogicGameEventListener {
            public const nint m_OnEventFired = 0x7B8; // CEntityIOOutput
            public const nint m_iszGameEventName = 0x7E0; // CUtlSymbolLarge
            public const nint m_iszGameEventItem = 0x7E8; // CUtlSymbolLarge
            public const nint m_bEnabled = 0x7F0; // bool
            public const nint m_bStartDisabled = 0x7F1; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 21
        public static class CBreakable {
            public const nint m_Material = 0xA08; // Materials
            public const nint m_hBreaker = 0xA0C; // CHandle<CBaseEntity>
            public const nint m_Explosion = 0xA10; // Explosions
            public const nint m_iszSpawnObject = 0xA18; // CUtlSymbolLarge
            public const nint m_flPressureDelay = 0xA20; // float32
            public const nint m_iMinHealthDmg = 0xA24; // int32
            public const nint m_iszPropData = 0xA28; // CUtlSymbolLarge
            public const nint m_impactEnergyScale = 0xA30; // float32
            public const nint m_nOverrideBlockLOS = 0xA34; // EOverrideBlockLOS_t
            public const nint m_OnBreak = 0xA38; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0xA60; // CEntityOutputTemplate<float32>
            public const nint m_flDmgModBullet = 0xA88; // float32
            public const nint m_flDmgModClub = 0xA8C; // float32
            public const nint m_flDmgModExplosive = 0xA90; // float32
            public const nint m_flDmgModFire = 0xA94; // float32
            public const nint m_iszPhysicsDamageTableName = 0xA98; // CUtlSymbolLarge
            public const nint m_iszBasePropData = 0xAA0; // CUtlSymbolLarge
            public const nint m_iInteractions = 0xAA8; // int32
            public const nint m_PerformanceMode = 0xAAC; // PerformanceMode_t
            public const nint m_hPhysicsAttacker = 0xAB0; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xAB4; // GameTime_t
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSDeathmatchScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
        }
        // Parent: CRulePointEntity
        // Fields count: 2
        public static class CGameText {
            public const nint m_iszMessage = 0xA08; // CUtlSymbolLarge
            public const nint m_textParms = 0xA10; // hudtextparms_t
        }
    }
}
