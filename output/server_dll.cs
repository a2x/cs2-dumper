// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

namespace CS2Dumper.Schemas {
    // Module: server.dll
    // Class count: 638
    // Enum count: 139
    public static class ServerDll {
        // Alignment: 4
        // Member count: 3
        public enum PropDoorRotatingOpenDirection_e : uint {
            DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
            DOOR_ROTATING_OPEN_FORWARD = 0x1,
            DOOR_ROTATING_OPEN_BACKWARD = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum SceneOnPlayerDeath_t : uint {
            SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
            SCENE_ONPLAYERDEATH_CANCEL = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum LessonPanelLayoutFileTypes_t : uint {
            LAYOUT_HAND_DEFAULT = 0x0,
            LAYOUT_WORLD_DEFAULT = 0x1,
            LAYOUT_CUSTOM = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum TimelineCompression_t : uint {
            TIMELINE_COMPRESSION_SUM = 0x0,
            TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
            TIMELINE_COMPRESSION_AVERAGE = 0x2,
            TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
            TIMELINE_COMPRESSION_TOTAL = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum SubclassVDataChangeType_t : uint {
            SUBCLASS_VDATA_CREATED = 0x0,
            SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
            SUBCLASS_VDATA_RELOADED = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum C4LightEffect_t : uint {
            eLightEffectNone = 0x0,
            eLightEffectDropped = 0x1,
            eLightEffectThirdPersonHeld = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum StanceType_t : uint {
            STANCE_CURRENT = unchecked((uint)-1),
            STANCE_DEFAULT = 0x0,
            STANCE_CROUCHING = 0x1,
            STANCE_PRONE = 0x2,
            NUM_STANCES = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum Explosions : uint {
            expRandom = 0x0,
            expDirected = 0x1,
            expUsePrecise = 0x2
        }
        // Alignment: 4
        // Member count: 10
        public enum PreviewCharacterMode : uint {
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
        }
        // Alignment: 4
        // Member count: 3
        public enum ObserverInterpState_t : uint {
            OBSERVER_INTERP_NONE = 0x0,
            OBSERVER_INTERP_TRAVELING = 0x1,
            OBSERVER_INTERP_SETTLING = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum WorldTextPanelOrientation_t : uint {
            WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
            WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
            WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum WorldTextPanelHorizontalAlign_t : uint {
            WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
            WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2
        }
        // Alignment: 1
        // Member count: 3
        public enum SequenceFinishNotifyState_t : byte {
            eDoNotNotify = 0x0,
            eNotifyWhenFinished = 0x1,
            eNotifyTriggered = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum SoundEventStartType_t : uint {
            SOUNDEVENT_START_PLAYER = 0x0,
            SOUNDEVENT_START_WORLD = 0x1,
            SOUNDEVENT_START_ENTITY = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum TrainOrientationType_t : uint {
            TrainOrientation_Fixed = 0x0,
            TrainOrientation_AtPathTracks = 0x1,
            TrainOrientation_LinearBlend = 0x2,
            TrainOrientation_EaseInEaseOut = 0x3
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 3
        public enum BeginDeathLifeStateTransition_t : byte {
            NO_CHANGE_IN_LIFESTATE = 0x0,
            TRANSITION_TO_LIFESTATE_DYING = 0x1,
            TRANSITION_TO_LIFESTATE_DEAD = 0x2
        }
        // Alignment: 2
        // Member count: 14
        public enum SoundTypes_t : ushort {
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
        }
        // Alignment: 4
        // Member count: 24
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
        // Member count: 9
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
        // Member count: 10
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
        // Member count: 5
        public enum LifeState_t : uint {
            LIFE_ALIVE = 0x0,
            LIFE_DYING = 0x1,
            LIFE_DEAD = 0x2,
            LIFE_RESPAWNABLE = 0x3,
            LIFE_RESPAWNING = 0x4
        }
        // Alignment: 4
        // Member count: 5
        public enum NPCFollowFormation_t : uint {
            Default = unchecked((uint)-1),
            CloseCircle = 0x0,
            WideCircle = 0x1,
            MediumCircle = 0x5,
            Sidekick = 0x6
        }
        // Alignment: 4
        // Member count: 3
        public enum CSWeaponMode : uint {
            Primary_Mode = 0x0,
            Secondary_Mode = 0x1,
            WeaponMode_MAX = 0x2
        }
        // Alignment: 1
        // Member count: 3
        public enum OnFrame : byte {
            ONFRAME_UNKNOWN = 0x0,
            ONFRAME_TRUE = 0x1,
            ONFRAME_FALSE = 0x2
        }
        // Alignment: 4
        // Member count: 12
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
        // Member count: 9
        public enum BloodType : uint {
            None = unchecked((uint)-1),
            ColorRed = 0x0,
            ColorYellow = 0x1,
            ColorGreen = 0x2,
            ColorRedLVL2 = 0x3,
            ColorRedLVL3 = 0x4,
            ColorRedLVL4 = 0x5,
            ColorRedLVL5 = 0x6,
            ColorRedLVL6 = 0x7
        }
        // Alignment: 4
        // Member count: 4
        public enum BreakableContentsType_t : uint {
            BC_DEFAULT = 0x0,
            BC_EMPTY = 0x1,
            BC_PROP_GROUP_OVERRIDE = 0x2,
            BC_PARTICLE_SYSTEM_OVERRIDE = 0x3
        }
        // Alignment: 4
        // Member count: 6
        public enum ScriptedMoveTo_t : uint {
            eWait = 0x0,
            eMoveWithGait = 0x3,
            eTeleport = 0x4,
            eWaitFacing = 0x5,
            eObsoleteBackCompat1 = 0x1,
            eObsoleteBackCompat2 = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum AnimLoopMode_t : uint {
            ANIM_LOOP_MODE_INVALID = unchecked((uint)-1),
            ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
            ANIM_LOOP_MODE_LOOPING = 0x1,
            ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
            ANIM_LOOP_MODE_COUNT = 0x3
        }
        // Alignment: 2
        // Member count: 10
        public enum SoundFlags_t : ushort {
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
        }
        // Alignment: 4
        // Member count: 10
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
        // Member count: 2
        public enum filter_t : uint {
            FILTER_AND = 0x0,
            FILTER_OR = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum CSWeaponSilencerType : uint {
            WEAPONSILENCER_NONE = 0x0,
            WEAPONSILENCER_DETACHABLE = 0x1,
            WEAPONSILENCER_INTEGRATED = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum EProceduralRagdollWeightIndexPropagationMethod : uint {
            Bone = 0x0,
            BoneAndChildren = 0x1
        }
        // Alignment: 4
        // Member count: 17
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
        // Member count: 47
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
        }
        // Alignment: 1
        // Member count: 3
        public enum FixAngleSet_t : byte {
            None = 0x0,
            Absolute = 0x1,
            Relative = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum IChoreoServices__ScriptState_t : uint {
            SCRIPT_PLAYING = 0x0,
            SCRIPT_WAIT = 0x1,
            SCRIPT_POST_IDLE = 0x2,
            SCRIPT_CLEANUP = 0x3,
            SCRIPT_MOVE_TO_MARK = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum CommandEntitySpecType_t : uint {
            SPEC_SEARCH = 0x0,
            SPEC_TYPES_COUNT = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum Touch_t : uint {
            touch_none = 0x0,
            touch_player_only = 0x1,
            touch_npc_only = 0x2,
            touch_player_or_npc = 0x3,
            touch_player_or_npc_or_physicsprop = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum TrainVelocityType_t : uint {
            TrainVelocity_Instantaneous = 0x0,
            TrainVelocity_LinearBlend = 0x1,
            TrainVelocity_EaseInEaseOut = 0x2
        }
        // Alignment: 4
        // Member count: 13
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
            WEAPONTYPE_UNKNOWN = 0xC
        }
        // Alignment: 4
        // Member count: 3
        public enum EntFinderMethod_t : uint {
            ENT_FIND_METHOD_NEAREST = 0x0,
            ENT_FIND_METHOD_FARTHEST = 0x1,
            ENT_FIND_METHOD_RANDOM = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum PropDoorRotatingSpawnPos_t : uint {
            DOOR_SPAWN_CLOSED = 0x0,
            DOOR_SPAWN_OPEN_FORWARD = 0x1,
            DOOR_SPAWN_OPEN_BACK = 0x2,
            DOOR_SPAWN_AJAR = 0x3
        }
        // Alignment: 1
        // Member count: 2
        public enum ShardSolid_t : byte {
            SHARD_SOLID = 0x0,
            SHARD_DEBRIS = 0x1
        }
        // Alignment: 1
        // Member count: 3
        public enum EntityPlatformTypes_t : byte {
            ENTITY_NOT_PLATFORM = 0x0,
            ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1,
            ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum PulseNPCCondition_t : uint {
            COND_SEE_PLAYER = 0x1,
            COND_LOST_PLAYER = 0x2,
            COND_HEAR_PLAYER = 0x3,
            COND_PLAYER_PUSHING = 0x4,
            COND_NO_PRIMARY_AMMO = 0x5
        }
        // Alignment: 1
        // Member count: 13
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
        // Member count: 3
        public enum ForcedCrouchState_t : uint {
            FORCEDCROUCH_NONE = 0x0,
            FORCEDCROUCH_CROUCHED = 0x1,
            FORCEDCROUCH_UNCROUCHED = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum PerformanceMode_t : uint {
            PM_NORMAL = 0x0,
            PM_NO_GIBS = 0x1,
            PM_FULL_GIBS = 0x2,
            PM_REDUCED_GIBS = 0x3
        }
        // Alignment: 4
        // Member count: 8
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
        // Member count: 74
        public enum loadout_slot_t : uint {
            LOADOUT_SLOT_PROMOTED = unchecked((uint)-2),
            LOADOUT_SLOT_INVALID = unchecked((uint)-1),
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
        }
        // Alignment: 4
        // Member count: 2
        public enum EDestructiblePartDamagePassThroughType : uint {
            Normal = 0x0,
            Absorb = 0x1
        }
        // Alignment: 4
        // Member count: 20
        public enum NavAttributeEnum : uint {
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
        }
        // Alignment: 4
        // Member count: 3
        public enum MoveLinearAuthoredPos_t : uint {
            MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
            MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
            MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum ValueRemapperMomentumType_t : uint {
            MomentumType_None = 0x0,
            MomentumType_Friction = 0x1,
            MomentumType_SpringTowardSnapValue = 0x2,
            MomentumType_SpringAwayFromSnapValue = 0x3
        }
        // Alignment: 4
        // Member count: 12
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
        // Member count: 6
        public enum PreviewWeaponState : uint {
            DROPPED = 0x0,
            HOLSTERED = 0x1,
            DEPLOYED = 0x2,
            PLANTED = 0x3,
            INSPECT = 0x4,
            ICON = 0x5
        }
        // Alignment: 4
        // Member count: 9
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
        // Member count: 4
        public enum BeamClipStyle_t : uint {
            kNOCLIP = 0x0,
            kGEOCLIP = 0x1,
            kMODELCLIP = 0x2,
            kBEAMCLIPSTYLE_NUMBITS = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum WeaponAttackType_t : uint {
            eInvalid = unchecked((uint)-1),
            ePrimary = 0x0,
            eSecondary = 0x1,
            eCount = 0x2
        }
        // Alignment: 4
        // Member count: 8
        public enum CSPlayerBlockingUseAction_t : uint {
            k_CSPlayerBlockingUseAction_None = 0x0,
            k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
            k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
            k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
            k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
            k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0x5,
            k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x6,
            k_CSPlayerBlockingUseAction_MaxCount = 0x7
        }
        // Alignment: 4
        // Member count: 3
        public enum CSWeaponState_t : uint {
            WEAPON_NOT_CARRIED = 0x0,
            WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
            WEAPON_IS_ACTIVE = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum CommandExecMode_t : uint {
            EXEC_MANUAL = 0x0,
            EXEC_LEVELSTART = 0x1,
            EXEC_PERIODIC = 0x2,
            EXEC_MODES_COUNT = 0x3
        }
        // Alignment: 1
        // Member count: 5
        public enum ShatterDamageCause : byte {
            SHATTERDAMAGE_BULLET = 0x0,
            SHATTERDAMAGE_MELEE = 0x1,
            SHATTERDAMAGE_THROWN = 0x2,
            SHATTERDAMAGE_SCRIPT = 0x3,
            SHATTERDAMAGE_EXPLOSIVE = 0x4
        }
        // Alignment: 4
        // Member count: 4
        public enum ScriptedOnDeath_t : uint {
            SS_ONDEATH_NOT_APPLICABLE = unchecked((uint)-1),
            SS_ONDEATH_UNDEFINED = 0x0,
            SS_ONDEATH_RAGDOLL = 0x1,
            SS_ONDEATH_ANIMATED_DEATH = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum ChoreoLookAtSpeed_t : uint {
            eInvalid = unchecked((uint)-1),
            eSlow = 0x0,
            eMedium = 0x1,
            eFast = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum ScriptedMoveType_t : uint {
            SCRIPTED_MOVETYPE_NONE = 0x0,
            SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
            SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
            SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3
        }
        // Alignment: 4
        // Member count: 17
        public enum gear_slot_t : uint {
            GEAR_SLOT_INVALID = unchecked((uint)-1),
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
        // Member count: 10
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
        // Member count: 2
        public enum ScriptedConflictResponse_t : uint {
            SS_CONFLICT_ENQUEUE = 0x0,
            SS_CONFLICT_INTERRUPT = 0x1
        }
        // Alignment: 1
        // Member count: 7
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
        // Member count: 3
        public enum WorldTextPanelVerticalAlign_t : uint {
            WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
            WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum AmmoPosition_t : uint {
            AMMO_POSITION_INVALID = unchecked((uint)-1),
            AMMO_POSITION_PRIMARY = 0x0,
            AMMO_POSITION_SECONDARY = 0x1,
            AMMO_POSITION_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 10
        public enum CDebugOverlayFilterType_t : uint {
            NONE = 0x0,
            TEXT = 0x1,
            ENTITY = 0x2,
            COUNT = 0x3,
            TACTICAL_SEARCH = 0x4,
            AI_SCHEDULE = 0x5,
            AI_TASK = 0x6,
            AI_EVENT = 0x7,
            END_SIM_HISTORY_TYPES = 0x8,
            COMBINED = unchecked((uint)-1)
        }
        // Alignment: 4
        // Member count: 23
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
        // Member count: 5
        public enum EntityDisolveType_t : uint {
            ENTITY_DISSOLVE_INVALID = unchecked((uint)-1),
            ENTITY_DISSOLVE_NORMAL = 0x0,
            ENTITY_DISSOLVE_ELECTRICAL = 0x1,
            ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
            ENTITY_DISSOLVE_CORE = 0x3
        }
        // Alignment: 8
        // Member count: 21
        public enum InputBitMask_t : ulong {
            IN_NONE = 0x0,
            IN_ALL = unchecked((ulong)-1),
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
            IN_FIRST_MOD_SPECIFIC_BIT = unchecked((ulong)4294967296),
            IN_USEORRELOAD = unchecked((ulong)4294967296),
            IN_SCORE = unchecked((ulong)8589934592),
            IN_ZOOM = unchecked((ulong)17179869184),
            IN_LOOK_AT_WEAPON = unchecked((ulong)34359738368)
        }
        // Alignment: 4
        // Member count: 14
        public enum HitGroup_t : uint {
            HITGROUP_INVALID = unchecked((uint)-1),
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
        // Member count: 9
        public enum ChickenActivity : uint {
            IDLE = 0x0,
            SQUAT = 0x1,
            WALK = 0x2,
            RUN = 0x3,
            GLIDE = 0x4,
            LAND = 0x5,
            PANIC = 0x6,
            TRICK = 0x7,
            TURN_IN_PLACE = 0x8
        }
        // Alignment: 4
        // Member count: 2
        public enum PointWorldTextReorientMode_t : uint {
            POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
            POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
        }
        // Alignment: 8
        // Member count: 40
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
            OVERLAY_NPC_STEERING_REGULATIONS = unchecked((ulong)2147483648),
            OVERLAY_NPC_TASK_TEXT_BIT = unchecked((ulong)4294967296),
            OVERLAY_PROP_DEBUG = unchecked((ulong)8589934592),
            OVERLAY_NPC_RELATION_BIT = unchecked((ulong)17179869184),
            OVERLAY_VIEWOFFSET = unchecked((ulong)34359738368),
            OVERLAY_VCOLLIDE_WIREFRAME_BIT = unchecked((ulong)68719476736),
            OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = unchecked((ulong)137438953472),
            OVERLAY_ACTORNAME_BIT = unchecked((ulong)274877906944),
            OVERLAY_NPC_CONDITIONS_TEXT_BIT = unchecked((ulong)549755813888),
            OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = unchecked((ulong)1099511627776)
        }
        // Alignment: 4
        // Member count: 3
        public enum AmmoFlags_t : uint {
            AMMO_FORCE_DROP_IF_CARRIED = 0x1,
            AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
            AMMO_FLAG_MAX = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum HierarchyType_t : uint {
            HIERARCHY_NONE = 0x0,
            HIERARCHY_BONE_MERGE = 0x1,
            HIERARCHY_ATTACHMENT = 0x2,
            HIERARCHY_ABSORIGIN = 0x3,
            HIERARCHY_BONE = 0x4,
            HIERARCHY_TYPE_COUNT = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum doorCheck_e : uint {
            DOOR_CHECK_FORWARD = 0x0,
            DOOR_CHECK_BACKWARD = 0x1,
            DOOR_CHECK_FULL = 0x2
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 4
        public enum EntitySubclassScope_t : uint {
            SUBCLASS_SCOPE_NONE = unchecked((uint)-1),
            SUBCLASS_SCOPE_PRECIPITATION = 0x0,
            SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
            SUBCLASS_SCOPE_COUNT = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum PointTemplateClientOnlyEntityBehavior_t : uint {
            CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
            CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum CDebugOverlayCombinedTypes_t : uint {
            ALL = 0x0,
            ANY = 0x1,
            COUNT = 0x2
        }
        // Alignment: 1
        // Member count: 4
        public enum ShatterGlassStressType : byte {
            SHATTERGLASS_BLUNT = 0x0,
            SHATTERGLASS_BALLISTIC = 0x1,
            SHATTERGLASS_PULSE = 0x2,
            SHATTERGLASS_EXPLOSIVE = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum TrackOrientationType_t : uint {
            TrackOrientation_Fixed = 0x0,
            TrackOrientation_FacePath = 0x1,
            TrackOrientation_FacePathAngles = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum WeaponSwitchReason_t : uint {
            eDrawn = 0x0,
            eEquipped = 0x1,
            eUserInitiatedSwitchToLast = 0x2,
            eUserInitiatedSwitchHands = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum ValueRemapperRatchetType_t : uint {
            RatchetType_Absolute = 0x0,
            RatchetType_EachEngage = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum NavDirType : uint {
            NORTH = 0x0,
            EAST = 0x1,
            SOUTH = 0x2,
            WEST = 0x3,
            NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum CRR_Response__ResponseEnum_t : uint {
            MAX_RESPONSE_NAME = 0xC0,
            MAX_RULE_NAME = 0x80
        }
        // Alignment: 4
        // Member count: 4
        public enum MoveMountingAmount_t : uint {
            MOVE_MOUNT_NONE = 0x0,
            MOVE_MOUNT_LOW = 0x1,
            MOVE_MOUNT_HIGH = 0x2,
            MOVE_MOUNT_MAXCOUNT = 0x3
        }
        // Alignment: 1
        // Member count: 20
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
        // Member count: 35
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
        // Member count: 27
        public enum RumbleEffect_t : uint {
            RUMBLE_INVALID = unchecked((uint)-1),
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
        // Member count: 6
        public enum LatchDirtyPermission_t : uint {
            LATCH_DIRTY_DISALLOW = 0x0,
            LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
            LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
            LATCH_DIRTY_PREDICTION = 0x3,
            LATCH_DIRTY_FRAMESIMULATE = 0x4,
            LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
        }
        // Alignment: 4
        // Member count: 5
        public enum DoorState_t : uint {
            DOOR_STATE_CLOSED = 0x0,
            DOOR_STATE_OPENING = 0x1,
            DOOR_STATE_OPEN = 0x2,
            DOOR_STATE_CLOSING = 0x3,
            DOOR_STATE_AJAR = 0x4
        }
        // Alignment: 4
        // Member count: 4
        public enum ChoreoLookAtMode_t : uint {
            eInvalid = unchecked((uint)-1),
            eChest = 0x0,
            eHead = 0x1,
            eEyesOnly = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ChatIgnoreType_t : uint {
            CHAT_IGNORE_NONE = 0x0,
            CHAT_IGNORE_ALL = 0x1,
            CHAT_IGNORE_TEAM = 0x2
        }
        // Alignment: 4
        // Member count: 7
        public enum PlayerConnectedState : uint {
            PlayerNeverConnected = unchecked((uint)-1),
            PlayerConnected = 0x0,
            PlayerConnecting = 0x1,
            PlayerReconnecting = 0x2,
            PlayerDisconnecting = 0x3,
            PlayerDisconnected = 0x4,
            PlayerReserved = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint {
            kMIN_THRESHOLD = 0x0,
            kMIN_FULL = 0x1,
            kHIGHWATER = 0x2
        }
        // Alignment: 4
        // Member count: 1
        public enum navproperties_t : uint {
            NAV_IGNORE = 0x1
        }
        // Alignment: 1
        // Member count: 9
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
        // Member count: 24
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
        // Member count: 3
        public enum PointWorldTextJustifyVertical_t : uint {
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum attributeprovidertypes_t : uint {
            PROVIDER_GENERIC = 0x0,
            PROVIDER_WEAPON = 0x1
        }
        // Alignment: 1
        // Member count: 6
        public enum MoveCollide_t : byte {
            MOVECOLLIDE_DEFAULT = 0x0,
            MOVECOLLIDE_FLY_BOUNCE = 0x1,
            MOVECOLLIDE_FLY_CUSTOM = 0x2,
            MOVECOLLIDE_FLY_SLIDE = 0x3,
            MOVECOLLIDE_COUNT = 0x4,
            MOVECOLLIDE_MAX_BITS = 0x3
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 4
        public enum ValueRemapperOutputType_t : uint {
            OutputType_AnimationCycle = 0x0,
            OutputType_RotationX = 0x1,
            OutputType_RotationY = 0x2,
            OutputType_RotationZ = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum PointTemplateOwnerSpawnGroupType_t : uint {
            INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
            INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
            INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2
        }
        // Alignment: 1
        // Member count: 3
        public enum EContributionScoreFlag_t : byte {
            k_EContributionScoreFlag_Default = 0x0,
            k_EContributionScoreFlag_Objective = 0x1,
            k_EContributionScoreFlag_Bullets = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum eSplinePushType : uint {
            k_eSplinePushAlong = 0x0,
            k_eSplinePushAway = 0x1,
            k_eSplinePushTowards = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum EntityDistanceMode_t : uint {
            eOriginToOrigin = 0x0,
            eCenterToCenter = 0x1,
            eAxisToAxis = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum PointWorldTextJustifyHorizontal_t : uint {
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum ShakeCommand_t : uint {
            SHAKE_START = 0x0,
            SHAKE_STOP = 0x1,
            SHAKE_AMPLITUDE = 0x2,
            SHAKE_FREQUENCY = 0x3,
            SHAKE_START_RUMBLEONLY = 0x4,
            SHAKE_START_NORUMBLE = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum TRAIN_CODE : uint {
            TRAIN_SAFE = 0x0,
            TRAIN_BLOCKING = 0x1,
            TRAIN_FOLLOWING = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum BrushSolidities_e : uint {
            BRUSHSOLID_TOGGLE = 0x0,
            BRUSHSOLID_NEVER = 0x1,
            BRUSHSOLID_ALWAYS = 0x2
        }
        // Alignment: 4
        // Member count: 13
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
        // Member count: 2
        public enum ModifyDamageReturn_t : uint {
            CONTINUE_TO_APPLY_DAMAGE = 0x0,
            ABORT_DO_NOT_APPLY_DAMAGE = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum ShadowType_t : uint {
            SHADOWS_NONE = 0x0,
            SHADOWS_SIMPLE = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum ScriptedHeldWeaponBehavior_t : uint {
            eInvalid = unchecked((uint)-1),
            eHolster = 0x0,
            eDeploy = 0x1,
            eDrop = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum GrenadeType_t : uint {
            GRENADE_TYPE_EXPLOSIVE = 0x0,
            GRENADE_TYPE_FLASH = 0x1,
            GRENADE_TYPE_FIRE = 0x2,
            GRENADE_TYPE_DECOY = 0x3,
            GRENADE_TYPE_SMOKE = 0x4,
            GRENADE_TYPE_TOTAL = 0x5
        }
        // Alignment: 4
        // Member count: 2
        public enum ValueRemapperInputType_t : uint {
            InputType_PlayerShootPosition = 0x0,
            InputType_PlayerShootPositionAroundAxis = 0x1
        }
        // Alignment: 1
        // Member count: 8
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
        // Member count: 25
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
        // Alignment: 8
        // Member count: 17
        public enum TakeDamageFlags_t : ulong {
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
        }
        // Alignment: 4
        // Member count: 2
        public enum ValueRemapperHapticsType_t : uint {
            HaticsType_Default = 0x0,
            HaticsType_None = 0x1
        }
        // Alignment: 4
        // Member count: 10
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
        // Member count: 3
        public enum CanPlaySequence_t : uint {
            CANNOT_PLAY = 0x0,
            CAN_PLAY_NOW = 0x1,
            CAN_PLAY_ENQUEUED = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum MedalRank_t : uint {
            MEDAL_RANK_NONE = 0x0,
            MEDAL_RANK_BRONZE = 0x1,
            MEDAL_RANK_SILVER = 0x2,
            MEDAL_RANK_GOLD = 0x3,
            MEDAL_RANK_COUNT = 0x4
        }
        // Alignment: 4
        // Member count: 7
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
        // Member count: 2
        public enum FuncDoorSpawnPos_t : uint {
            FUNC_DOOR_SPAWN_CLOSED = 0x0,
            FUNC_DOOR_SPAWN_OPEN = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum EOverrideBlockLOS_t : uint {
            BLOCK_LOS_DEFAULT = 0x0,
            BLOCK_LOS_FORCE_FALSE = 0x1,
            BLOCK_LOS_FORCE_TRUE = 0x2
        }
        // Alignment: 1
        // Member count: 14
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
        // Parent: CBaseCombatCharacter
        // Field count: 1
        public static class CHostageExpresserShim {
            public const nint m_pExpresser = 0xAC0; // CAI_Expresser*
        }
        // Parent: CBaseTrigger
        // Field count: 3
        public static class CTriggerSoundscape {
            public const nint m_hSoundscape = 0x960; // CHandle<CEnvSoundscapeTriggerable>
            public const nint m_SoundscapeName = 0x968; // CUtlSymbolLarge
            public const nint m_spectators = 0x970; // CUtlVector<CHandle<CBasePlayerPawn>>
        }
        // Parent: CBreakableProp
        // Field count: 22
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class CDynamicProp {
            public const nint m_bCreateNavObstacle = 0xB60; // bool
            public const nint m_bNavObstacleUpdatesOverridden = 0xB61; // bool
            public const nint m_bUseHitboxesForRenderBox = 0xB62; // bool
            public const nint m_bUseAnimGraph = 0xB63; // bool
            public const nint m_pOutputAnimBegun = 0xB68; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0xB90; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0xBB8; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0xBE0; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0xC08; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0xC30; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0xC38; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0xC3C; // bool
            public const nint m_bStartDisabled = 0xC3D; // bool
            public const nint m_bFiredStartEndOutput = 0xC3E; // bool
            public const nint m_bForceNpcExclude = 0xC3F; // bool
            public const nint m_bCreateNonSolid = 0xC40; // bool
            public const nint m_bIsOverrideProp = 0xC41; // bool
            public const nint m_iInitialGlowState = 0xC44; // int32
            public const nint m_nGlowRange = 0xC48; // int32
            public const nint m_nGlowRangeMin = 0xC4C; // int32
            public const nint m_glowColor = 0xC50; // Color
            public const nint m_nGlowTeam = 0xC54; // int32
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncIllusionary {
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Field count: 40
        //
        // Metadata:
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
        // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
        // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
        // NetworkVarNames: m_flOffsetTickCompleteTime (float)
        // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
        // NetworkVarNames: m_flStamina (float)
        public static class CCSPlayer_MovementServices {
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
            public const nint m_flGroundMoveEfficiency = 0x484; // float32
            public const nint m_nOldWaterLevel = 0x488; // int32
            public const nint m_flWaterEntryTime = 0x48C; // float32
            public const nint m_vecForward = 0x490; // Vector
            public const nint m_vecLeft = 0x49C; // Vector
            public const nint m_vecUp = 0x4A8; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4B4; // int32
            public const nint m_bMadeFootstepNoise = 0x4B8; // bool
            public const nint m_iFootsteps = 0x4BC; // int32
            public const nint m_bOldJumpPressed = 0x4C0; // bool
            public const nint m_flJumpPressedTime = 0x4C4; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4C8; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4D0; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4D8; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4DC; // float32
            public const nint m_flStamina = 0x4E0; // float32
            public const nint m_flHeightAtJumpStart = 0x4E4; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4E8; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x4EC; // float32
            public const nint m_flStaminaAtJumpStart = 0x4F0; // float32
            public const nint m_flAccumulatedJumpError = 0x4F4; // float32
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
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerRemove {
            public const nint m_OnRemove = 0x960; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x538; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CProjectedDecal {
            public const nint m_nTexture = 0x4E0; // int32
            public const nint m_flDistance = 0x4E4; // float32
        }
        // Parent: CFuncTrackChange
        // Field count: 0
        public static class CFuncTrackAuto {
        }
        // Parent: CBreakable
        // Field count: 0
        public static class CPushable {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerMultiple {
            public const nint m_OnTrigger = 0x960; // CEntityIOOutput
        }
        // Parent: CBodyComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CTriggerPush {
            public const nint m_angPushEntitySpace = 0x960; // QAngle
            public const nint m_vecPushDirEntitySpace = 0x96C; // Vector
            public const nint m_bTriggerOnStartTouch = 0x978; // bool
            public const nint m_bUsePathSimple = 0x979; // bool
            public const nint m_iszPathSimpleName = 0x980; // CUtlSymbolLarge
            public const nint m_PathSimple = 0x988; // CPathSimple*
            public const nint m_splinePushType = 0x990; // uint32
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class FilterHealth {
            public const nint m_bAdrenalineActive = 0x538; // bool
            public const nint m_iHealthMin = 0x53C; // int32
            public const nint m_iHealthMax = 0x540; // int32
        }
        // Parent: CCSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: CBaseTrigger
        // Field count: 5
        public static class CTriggerProximity {
            public const nint m_hMeasureTarget = 0x960; // CHandle<CBaseEntity>
            public const nint m_iszMeasureTarget = 0x968; // CUtlSymbolLarge
            public const nint m_fRadius = 0x970; // float32
            public const nint m_nTouchers = 0x974; // int32
            public const nint m_NearestEntityDistance = 0x978; // CEntityOutputTemplate<float32>
        }
        // Parent: CFuncBrush
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        public static class CFuncElectrifiedVolume {
            public const nint m_EffectName = 0x7B0; // CUtlSymbolLarge
            public const nint m_EffectInterpenetrateName = 0x7B8; // CUtlSymbolLarge
            public const nint m_EffectZapName = 0x7C0; // CUtlSymbolLarge
            public const nint m_iszEffectSource = 0x7C8; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CBaseDMStart {
            public const nint m_Master = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CGameRulesProxy
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CCSGameRulesProxy {
            public const nint m_pGameRules = 0x4E0; // CCSGameRules*
        }
        // Parent: CBaseModelEntity
        // Field count: 5
        public static class CTriggerBrush {
            public const nint m_OnStartTouch = 0x790; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x7B8; // CEntityIOOutput
            public const nint m_OnUse = 0x7E0; // CEntityIOOutput
            public const nint m_iInputFilter = 0x808; // int32
            public const nint m_iDontMessageParent = 0x80C; // int32
        }
        // Parent: CBeam
        // Field count: 19
        public static class CEnvBeam {
            public const nint m_active = 0x830; // int32
            public const nint m_spriteTexture = 0x838; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszStartEntity = 0x840; // CUtlSymbolLarge
            public const nint m_iszEndEntity = 0x848; // CUtlSymbolLarge
            public const nint m_life = 0x850; // float32
            public const nint m_boltWidth = 0x854; // float32
            public const nint m_noiseAmplitude = 0x858; // float32
            public const nint m_speed = 0x85C; // int32
            public const nint m_restrike = 0x860; // float32
            public const nint m_iszSpriteName = 0x868; // CUtlSymbolLarge
            public const nint m_frameStart = 0x870; // int32
            public const nint m_vEndPointWorld = 0x874; // Vector
            public const nint m_vEndPointRelative = 0x880; // Vector
            public const nint m_radius = 0x88C; // float32
            public const nint m_TouchType = 0x890; // Touch_t
            public const nint m_iFilterName = 0x898; // CUtlSymbolLarge
            public const nint m_hFilter = 0x8A0; // CHandle<CBaseEntity>
            public const nint m_iszDecal = 0x8A8; // CUtlSymbolLarge
            public const nint m_OnTouchedByEntity = 0x8B0; // CEntityIOOutput
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTonemapTrigger {
            public const nint m_tonemapControllerName = 0x960; // CUtlSymbolLarge
            public const nint m_hTonemapController = 0x968; // CEntityHandle
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
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: CWeaponBaseItem
        // Field count: 0
        public static class CItem_Healthshot {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CFogTrigger {
            public const nint m_fog = 0x960; // fogparams_t
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CLogicCollisionPair {
            public const nint m_nameAttach1 = 0x4E0; // CUtlSymbolLarge
            public const nint m_nameAttach2 = 0x4E8; // CUtlSymbolLarge
            public const nint m_supportMultipleEntitiesWithSameName = 0x4F0; // bool
            public const nint m_disabled = 0x4F1; // bool
            public const nint m_succeeded = 0x4F2; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_weapon_cs_base {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerHostageReset {
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 4
        public static class CPointTeleport {
            public const nint m_vSaveOrigin = 0x4E0; // Vector
            public const nint m_vSaveAngles = 0x4EC; // QAngle
            public const nint m_bTeleportParentedEntities = 0x4F8; // bool
            public const nint m_bTeleportUseCurrentAngle = 0x4F9; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintBombTargetB {
        }
        // Parent: CBtNodeCondition
        // Field count: 3
        public static class CBtNodeConditionInactive {
            public const nint m_flRoundStartThresholdSeconds = 0x78; // float32
            public const nint m_flSensorInactivityThresholdSeconds = 0x7C; // float32
            public const nint m_SensorInactivityTimer = 0x80; // CountdownTimer
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CWeaponSawedoff {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class CTriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0x960; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x9E0; // float32
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CMoverPathNode {
            public const nint m_vInTangentLocal = 0x4E0; // Vector
            public const nint m_vOutTangentLocal = 0x4EC; // Vector
            public const nint m_szParentPathUniqueID = 0x4F8; // CUtlSymbolLarge
            public const nint m_OnPassThrough = 0x500; // CEntityIOOutput
            public const nint m_OnPassThroughForward = 0x528; // CEntityIOOutput
            public const nint m_OnPassThroughReverse = 0x550; // CEntityIOOutput
            public const nint m_hMover = 0x578; // CHandle<CPathMover>
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: CBtNode
        // Field count: 12
        public static class CBtActionAim {
            public const nint m_szSensorInputKey = 0x68; // CUtlString
            public const nint m_szAimReadyKey = 0x80; // CUtlString
            public const nint m_flZoomCooldownTimestamp = 0x88; // float32
            public const nint m_bDoneAiming = 0x8C; // bool
            public const nint m_flLerpStartTime = 0x90; // float32
            public const nint m_flNextLookTargetLerpTime = 0x94; // float32
            public const nint m_flPenaltyReductionRatio = 0x98; // float32
            public const nint m_NextLookTarget = 0x9C; // QAngle
            public const nint m_AimTimer = 0xA8; // CountdownTimer
            public const nint m_SniperHoldTimer = 0xC0; // CountdownTimer
            public const nint m_FocusIntervalTimer = 0xD8; // CountdownTimer
            public const nint m_bAcquired = 0xF0; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_ViewModelServices {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
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
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class CFogController {
            public const nint m_fog = 0x4E0; // fogparams_t
            public const nint m_bUseAngles = 0x548; // bool
            public const nint m_iChangedVariables = 0x54C; // int32
        }
        // Parent: CCSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamIntroCharacterPosition {
        }
        // Parent: CEntityComponent
        // Field count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class CDecoyProjectile {
            public const nint m_nDecoyShotTick = 0xB58; // int32
            public const nint m_shotsRemaining = 0xB5C; // int32
            public const nint m_fExpireTime = 0xB60; // GameTime_t
            public const nint m_decoyWeaponDefIndex = 0xB70; // uint16
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CEnableMotionFixup {
        }
        // Parent: CPlayer_MovementServices
        // Field count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_timescale (float32)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class CountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // GameTime_t
            public const nint m_timescale = 0x10; // float32
            public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP9 {
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CPhysicsEntitySolver {
            public const nint m_hMovingEntity = 0x4E8; // CHandle<CBaseEntity>
            public const nint m_hPhysicsBlocker = 0x4EC; // CHandle<CBaseEntity>
            public const nint m_separationDuration = 0x4F0; // float32
            public const nint m_cancelTime = 0x4F4; // GameTime_t
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
        public static class CPlayerPing {
            public const nint m_hPlayer = 0x4E8; // CHandle<CCSPlayerPawn>
            public const nint m_hPingedEntity = 0x4EC; // CHandle<CBaseEntity>
            public const nint m_iType = 0x4F0; // int32
            public const nint m_bUrgent = 0x4F4; // bool
            public const nint m_szPlaceName = 0x4F5; // char[18]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: nTagTick (GameTick_t)
        // NetworkVarNames: flFlinchModSmall (float)
        // NetworkVarNames: flFlinchModLarge (float)
        // NetworkVarNames: flFriendlyFireDamageReductionRatio (float)
        public static class PredictedDamageTag_t {
            public const nint nTagTick = 0x30; // GameTick_t
            public const nint flFlinchModSmall = 0x34; // float32
            public const nint flFlinchModLarge = 0x38; // float32
            public const nint flFriendlyFireDamageReductionRatio = 0x3C; // float32
        }
        // Parent: CCSPointScriptEntity
        // Field count: 0
        public static class CCSServerPointScriptEntity {
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
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x170; // CModelState
            public const nint m_bIsAnimationEnabled = 0x3A0; // bool
            public const nint m_bUseParentRenderBounds = 0x3A1; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x3A2; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x3A4; // CUtlStringToken
            public const nint m_nHitboxSet = 0x3A8; // uint8
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoLandmark {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP7 {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponFiveSeven {
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x490; // CBaseAnimGraphController
        }
        // Parent: CBodyComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x50; // CGameSceneNode
        }
        // Parent: CBaseEntity
        // Field count: 8
        public static class CEnvFireSensor {
            public const nint m_bEnabled = 0x4E0; // bool
            public const nint m_bHeatAtLevel = 0x4E1; // bool
            public const nint m_radius = 0x4E4; // float32
            public const nint m_targetLevel = 0x4E8; // float32
            public const nint m_targetTime = 0x4EC; // float32
            public const nint m_levelTime = 0x4F0; // float32
            public const nint m_OnHeatLevelStart = 0x4F8; // CEntityIOOutput
            public const nint m_OnHeatLevelEnd = 0x520; // CEntityIOOutput
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 2
        public static class CEnvWindShared__WindAveEvent_t {
            public const nint m_flStartWindSpeed = 0x0; // float32
            public const nint m_flAveWindSpeed = 0x4; // float32
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_cable_dynamic {
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CPointGamestatsCounter {
            public const nint m_strStatisticName = 0x4E0; // CUtlSymbolLarge
            public const nint m_bDisabled = 0x4E8; // bool
        }
        // Parent: CPointEntity
        // Field count: 10
        public static class CEnvShake {
            public const nint m_limitToEntity = 0x4E0; // CUtlSymbolLarge
            public const nint m_Amplitude = 0x4E8; // float32
            public const nint m_Frequency = 0x4EC; // float32
            public const nint m_Duration = 0x4F0; // float32
            public const nint m_Radius = 0x4F4; // float32
            public const nint m_stopTime = 0x4F8; // GameTime_t
            public const nint m_nextShake = 0x4FC; // GameTime_t
            public const nint m_currentAmp = 0x500; // float32
            public const nint m_maxForce = 0x504; // Vector
            public const nint m_shakeCallback = 0x518; // CPhysicsShake
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CPrecipitationBlocker {
        }
        // Parent: CPathKeyFrame
        // Field count: 11
        public static class CBaseMoveBehavior {
            public const nint m_iPositionInterpolator = 0x540; // int32
            public const nint m_iRotationInterpolator = 0x544; // int32
            public const nint m_flAnimStartTime = 0x548; // float32
            public const nint m_flAnimEndTime = 0x54C; // float32
            public const nint m_flAverageSpeedAcrossFrame = 0x550; // float32
            public const nint m_pCurrentKeyFrame = 0x558; // CPathKeyFrame*
            public const nint m_pTargetKeyFrame = 0x560; // CPathKeyFrame*
            public const nint m_pPreKeyFrame = 0x568; // CPathKeyFrame*
            public const nint m_pPostKeyFrame = 0x570; // CPathKeyFrame*
            public const nint m_flTimeIntoFrame = 0x578; // float32
            public const nint m_iDirection = 0x57C; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CFuncMoverAPI {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncNavObstruction {
            public const nint m_bDisabled = 0x798; // bool
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CEnvTilt {
            public const nint m_Duration = 0x4E0; // float32
            public const nint m_Radius = 0x4E4; // float32
            public const nint m_TiltTime = 0x4E8; // float32
            public const nint m_stopTime = 0x4EC; // GameTime_t
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
        public static class CBaseCSGrenade {
            public const nint m_bRedraw = 0xF68; // bool
            public const nint m_bIsHeldByPlayer = 0xF69; // bool
            public const nint m_bPinPulled = 0xF6A; // bool
            public const nint m_bJumpThrow = 0xF6B; // bool
            public const nint m_bThrowAnimating = 0xF6C; // bool
            public const nint m_fThrowTime = 0xF70; // GameTime_t
            public const nint m_flThrowStrength = 0xF74; // float32
            public const nint m_flThrowStrengthApproach = 0xF78; // float32
            public const nint m_fDropTime = 0xF7C; // GameTime_t
            public const nint m_fPinPullTime = 0xF80; // GameTime_t
            public const nint m_bJustPulledPin = 0xF84; // bool
            public const nint m_nNextHoldTick = 0xF88; // GameTick_t
            public const nint m_flNextHoldFrac = 0xF8C; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0xF90; // CHandle<CCSWeaponBase>
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CItemGenericTriggerHelper {
            public const nint m_hParentItem = 0x790; // CHandle<CItemGeneric>
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicBranchList {
            public const nint m_nLogicBranchNames = 0x4E0; // CUtlSymbolLarge[16]
            public const nint m_LogicBranchList = 0x560; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_eLastState = 0x578; // CLogicBranchList::LogicBranchListenerLastState_t
            public const nint m_OnAllTrue = 0x580; // CEntityIOOutput
            public const nint m_OnAllFalse = 0x5A8; // CEntityIOOutput
            public const nint m_OnMixed = 0x5D0; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 14
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
        // Field count: 0
        public static class CItemDefuserAlias_item_defuser {
        }
        // Parent: CModelPointEntity
        // Field count: 3
        public static class CRevertSaved {
            public const nint m_loadTime = 0x790; // float32
            public const nint m_Duration = 0x794; // float32
            public const nint m_HoldTime = 0x798; // float32
        }
        // Parent: CLogicalEntity
        // Field count: 8
        public static class CMultiLightProxy {
            public const nint m_iszLightNameFilter = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszLightClassFilter = 0x4E8; // CUtlSymbolLarge
            public const nint m_flLightRadiusFilter = 0x4F0; // float32
            public const nint m_flBrightnessDelta = 0x4F4; // float32
            public const nint m_bPerformScreenFade = 0x4F8; // bool
            public const nint m_flTargetBrightnessMultiplier = 0x4FC; // float32
            public const nint m_flCurrentBrightnessMultiplier = 0x500; // float32
            public const nint m_vecLights = 0x508; // CUtlVector<CHandle<CLightEntity>>
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
        public static class CEffectData {
            public const nint m_vOrigin = 0x8; // Vector
            public const nint m_vStart = 0x14; // Vector
            public const nint m_vNormal = 0x20; // Vector
            public const nint m_vAngles = 0x2C; // QAngle
            public const nint m_hEntity = 0x38; // CEntityHandle
            public const nint m_hOtherEntity = 0x3C; // CEntityHandle
            public const nint m_flScale = 0x40; // float32
            public const nint m_flMagnitude = 0x44; // float32
            public const nint m_flRadius = 0x48; // float32
            public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
            public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nDamageType = 0x58; // uint32
            public const nint m_nPenetrate = 0x5C; // uint8
            public const nint m_nMaterial = 0x5E; // uint16
            public const nint m_nHitBox = 0x60; // uint16
            public const nint m_nColor = 0x62; // uint8
            public const nint m_fFlags = 0x63; // uint8
            public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint m_nAttachmentName = 0x68; // CUtlStringToken
            public const nint m_iEffectName = 0x6C; // uint16
            public const nint m_nExplosionType = 0x6E; // uint8
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CEntityBlocker {
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicCase {
            public const nint m_nCase = 0x4E0; // CUtlSymbolLarge[32]
            public const nint m_nShuffleCases = 0x5E0; // int32
            public const nint m_nLastShuffleCase = 0x5E4; // int32
            public const nint m_uchShuffleCaseMap = 0x5E8; // uint8[32]
            public const nint m_OnCase = 0x608; // CEntityIOOutput[32]
            public const nint m_OnDefault = 0xB08; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
        }
        // Parent: CItem
        // Field count: 2
        public static class CItemDefuser {
            public const nint m_entitySpottedState = 0xA80; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xA98; // int32
        }
        // Parent: CRuleEntity
        // Field count: 0
        public static class CRuleBrushEntity {
        }
        // Parent: CInferno
        // Field count: 0
        public static class CFireCrackerBlast {
        }
        // Parent: CBaseEntity
        // Field count: 14
        public static class CSoundEventEntity {
            public const nint m_bStartOnSpawn = 0x4E0; // bool
            public const nint m_bToLocalPlayer = 0x4E1; // bool
            public const nint m_bStopOnNew = 0x4E2; // bool
            public const nint m_bSaveRestore = 0x4E3; // bool
            public const nint m_bSavedIsPlaying = 0x4E4; // bool
            public const nint m_flSavedElapsedTime = 0x4E8; // float32
            public const nint m_iszSourceEntityName = 0x4F0; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x4F8; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x500; // CEntityOutputTemplate<uint64>
            public const nint m_onSoundFinished = 0x528; // CEntityIOOutput
            public const nint m_flClientCullRadius = 0x550; // float32
            public const nint m_iszSoundName = 0x580; // CUtlSymbolLarge
            public const nint m_hSource = 0x590; // CEntityHandle
            public const nint m_nEntityIndexSelection = 0x594; // int32
        }
        // Parent: CPlayer_ViewModelServices
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
        }
        // Parent: CCSWeaponBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
        // NetworkVarNames: m_bRedraw (bool)
        public static class CWeaponBaseItem {
            public const nint m_SequenceCompleteTimer = 0xF68; // CountdownTimer
            public const nint m_bRedraw = 0xF80; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoParticleTarget {
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
        public static class CEnvVolumetricFogController {
            public const nint m_flScattering = 0x4E0; // float32
            public const nint m_flAnisotropy = 0x4E4; // float32
            public const nint m_flFadeSpeed = 0x4E8; // float32
            public const nint m_flDrawDistance = 0x4EC; // float32
            public const nint m_flFadeInStart = 0x4F0; // float32
            public const nint m_flFadeInEnd = 0x4F4; // float32
            public const nint m_flIndirectStrength = 0x4F8; // float32
            public const nint m_nVolumeDepth = 0x4FC; // int32
            public const nint m_fFirstVolumeSliceThickness = 0x500; // float32
            public const nint m_nIndirectTextureDimX = 0x504; // int32
            public const nint m_nIndirectTextureDimY = 0x508; // int32
            public const nint m_nIndirectTextureDimZ = 0x50C; // int32
            public const nint m_vBoxMins = 0x510; // Vector
            public const nint m_vBoxMaxs = 0x51C; // Vector
            public const nint m_bActive = 0x528; // bool
            public const nint m_flStartAnisoTime = 0x52C; // GameTime_t
            public const nint m_flStartScatterTime = 0x530; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x534; // GameTime_t
            public const nint m_flStartAnisotropy = 0x538; // float32
            public const nint m_flStartScattering = 0x53C; // float32
            public const nint m_flStartDrawDistance = 0x540; // float32
            public const nint m_flDefaultAnisotropy = 0x544; // float32
            public const nint m_flDefaultScattering = 0x548; // float32
            public const nint m_flDefaultDrawDistance = 0x54C; // float32
            public const nint m_bStartDisabled = 0x550; // bool
            public const nint m_bEnableIndirect = 0x551; // bool
            public const nint m_bIndirectUseLPVs = 0x552; // bool
            public const nint m_bIsMaster = 0x553; // bool
            public const nint m_hFogIndirectTexture = 0x558; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x560; // int32
            public const nint m_fNoiseSpeed = 0x564; // float32
            public const nint m_fNoiseStrength = 0x568; // float32
            public const nint m_vNoiseScale = 0x56C; // Vector
            public const nint m_bFirstTime = 0x578; // bool
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
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x1D8; // float32
            public const nint m_flFallVelocity = 0x1DC; // float32
            public const nint m_bInCrouch = 0x1E0; // bool
            public const nint m_nCrouchState = 0x1E4; // uint32
            public const nint m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const nint m_bDucked = 0x1EC; // bool
            public const nint m_bDucking = 0x1ED; // bool
            public const nint m_bInDuckJump = 0x1EE; // bool
            public const nint m_groundNormal = 0x1F0; // Vector
            public const nint m_flSurfaceFriction = 0x1FC; // float32
            public const nint m_surfaceProps = 0x200; // CUtlStringToken
            public const nint m_nStepside = 0x210; // int32
            public const nint m_iTargetVolume = 0x214; // int32
            public const nint m_vecSmoothedVelocity = 0x218; // Vector
        }
        // Parent: CPhysicsProp
        // Field count: 5
        public static class CPhysicsPropRespawnable {
            public const nint m_vOriginalSpawnOrigin = 0xD00; // Vector
            public const nint m_vOriginalSpawnAngles = 0xD0C; // QAngle
            public const nint m_vOriginalMins = 0xD18; // Vector
            public const nint m_vOriginalMaxs = 0xD24; // Vector
            public const nint m_flRespawnDuration = 0xD30; // float32
        }
        // Parent: CEnvSoundscapeProxy
        // Field count: 0
        public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        }
        // Parent: CPhysConstraint
        // Field count: 6
        public static class CPhysBallSocket {
            public const nint m_flJointFriction = 0x558; // float32
            public const nint m_bEnableSwingLimit = 0x55C; // bool
            public const nint m_flSwingLimit = 0x560; // float32
            public const nint m_bEnableTwistLimit = 0x564; // bool
            public const nint m_flMinTwistAngle = 0x568; // float32
            public const nint m_flMaxTwistAngle = 0x56C; // float32
        }
        // Parent: CCSGameModeRules
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x30; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x34; // float32
            public const nint m_sDMBonusWeapon = 0x38; // CUtlString
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CInfoPlayerStart {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_bIsMaster = 0x4E1; // bool
            public const nint m_pPawnSubclass = 0x4E8; // CGlobalSymbol
        }
        // Parent: CSoundOpvarSetPointBase
        // Field count: 8
        public static class CSoundOpvarSetOBBWindEntity {
            public const nint m_vMins = 0x578; // Vector
            public const nint m_vMaxs = 0x584; // Vector
            public const nint m_vDistanceMins = 0x590; // Vector
            public const nint m_vDistanceMaxs = 0x59C; // Vector
            public const nint m_flWindMin = 0x5A8; // float32
            public const nint m_flWindMax = 0x5AC; // float32
            public const nint m_flWindMapMin = 0x5B0; // float32
            public const nint m_flWindMapMax = 0x5B4; // float32
        }
        // Parent: CRagdollProp
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class CRagdollPropAttached {
            public const nint m_boneIndexAttached = 0xB48; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xB4C; // uint32
            public const nint m_attachmentPointBoneSpace = 0xB50; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xB5C; // Vector
            public const nint m_bShouldDetach = 0xB68; // bool
            public const nint m_bShouldDeleteAttachedActivationRecord = 0xB78; // bool
        }
        // Parent: CItem
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class CItemDogtags {
            public const nint m_OwningPlayer = 0xA80; // CHandle<CCSPlayerPawn>
            public const nint m_KillingPlayer = 0xA84; // CHandle<CCSPlayerPawn>
        }
        // Parent: CItem
        // Field count: 32
        public static class CItemGeneric {
            public const nint m_bHasTriggerRadius = 0xA88; // bool
            public const nint m_bHasPickupRadius = 0xA89; // bool
            public const nint m_flPickupRadiusSqr = 0xA8C; // float32
            public const nint m_flTriggerRadiusSqr = 0xA90; // float32
            public const nint m_flLastPickupCheck = 0xA94; // GameTime_t
            public const nint m_bPlayerCounterListenerAdded = 0xA98; // bool
            public const nint m_bPlayerInTriggerRadius = 0xA99; // bool
            public const nint m_hSpawnParticleEffect = 0xAA0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pAmbientSoundEffect = 0xAA8; // CUtlSymbolLarge
            public const nint m_bAutoStartAmbientSound = 0xAB0; // bool
            public const nint m_pSpawnScriptFunction = 0xAB8; // CUtlSymbolLarge
            public const nint m_hPickupParticleEffect = 0xAC0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pPickupSoundEffect = 0xAC8; // CUtlSymbolLarge
            public const nint m_pPickupScriptFunction = 0xAD0; // CUtlSymbolLarge
            public const nint m_hTimeoutParticleEffect = 0xAD8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_pTimeoutSoundEffect = 0xAE0; // CUtlSymbolLarge
            public const nint m_pTimeoutScriptFunction = 0xAE8; // CUtlSymbolLarge
            public const nint m_pPickupFilterName = 0xAF0; // CUtlSymbolLarge
            public const nint m_hPickupFilter = 0xAF8; // CHandle<CBaseFilter>
            public const nint m_OnPickup = 0xB00; // CEntityIOOutput
            public const nint m_OnTimeout = 0xB28; // CEntityIOOutput
            public const nint m_OnTriggerStartTouch = 0xB50; // CEntityIOOutput
            public const nint m_OnTriggerTouch = 0xB78; // CEntityIOOutput
            public const nint m_OnTriggerEndTouch = 0xBA0; // CEntityIOOutput
            public const nint m_pAllowPickupScriptFunction = 0xBC8; // CUtlSymbolLarge
            public const nint m_flPickupRadius = 0xBD0; // float32
            public const nint m_flTriggerRadius = 0xBD4; // float32
            public const nint m_pTriggerSoundEffect = 0xBD8; // CUtlSymbolLarge
            public const nint m_bGlowWhenInTrigger = 0xBE0; // bool
            public const nint m_glowColor = 0xBE1; // Color
            public const nint m_bUseable = 0xBE5; // bool
            public const nint m_hTriggerHelper = 0xBE8; // CHandle<CItemGenericTriggerHelper>
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightSpotEntity {
        }
        // Parent: CPlayer_WaterServices
        // Field count: 6
        public static class CCSPlayer_WaterServices {
            public const nint m_NextDrownDamageTime = 0x40; // float32
            public const nint m_nDrownDmgRate = 0x44; // int32
            public const nint m_AirFinishedTime = 0x48; // GameTime_t
            public const nint m_flWaterJumpTime = 0x4C; // float32
            public const nint m_vecWaterJumpVel = 0x50; // Vector
            public const nint m_flSwimSoundTime = 0x5C; // float32
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x4E0; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x4E4; // CHandle<CSkyCamera>
        }
        // Parent: CBasePropDoor
        // Field count: 17
        public static class CPropDoorRotating {
            public const nint m_vecAxis = 0xEE8; // Vector
            public const nint m_flDistance = 0xEF4; // float32
            public const nint m_eSpawnPosition = 0xEF8; // PropDoorRotatingSpawnPos_t
            public const nint m_eOpenDirection = 0xEFC; // PropDoorRotatingOpenDirection_e
            public const nint m_eCurrentOpenDirection = 0xF00; // PropDoorRotatingOpenDirection_e
            public const nint m_flAjarAngle = 0xF04; // float32
            public const nint m_angRotationAjarDeprecated = 0xF08; // QAngle
            public const nint m_angRotationClosed = 0xF14; // QAngle
            public const nint m_angRotationOpenForward = 0xF20; // QAngle
            public const nint m_angRotationOpenBack = 0xF2C; // QAngle
            public const nint m_angGoal = 0xF38; // QAngle
            public const nint m_vecForwardBoundsMin = 0xF44; // Vector
            public const nint m_vecForwardBoundsMax = 0xF50; // Vector
            public const nint m_vecBackBoundsMin = 0xF5C; // Vector
            public const nint m_vecBackBoundsMax = 0xF68; // Vector
            public const nint m_bAjarDoorShouldntAlwaysOpen = 0xF74; // bool
            public const nint m_hEntityBlocker = 0xF78; // CHandle<CEntityBlocker>
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
        public static class CRopeKeyframe {
            public const nint m_RopeFlags = 0x798; // uint16
            public const nint m_iNextLinkName = 0x7A0; // CUtlSymbolLarge
            public const nint m_Slack = 0x7A8; // int16
            public const nint m_Width = 0x7AC; // float32
            public const nint m_TextureScale = 0x7B0; // float32
            public const nint m_nSegments = 0x7B4; // uint8
            public const nint m_bConstrainBetweenEndpoints = 0x7B5; // bool
            public const nint m_strRopeMaterialModel = 0x7B8; // CUtlSymbolLarge
            public const nint m_iRopeMaterialModelIndex = 0x7C0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_Subdiv = 0x7C8; // uint8
            public const nint m_nChangeCount = 0x7C9; // uint8
            public const nint m_RopeLength = 0x7CA; // int16
            public const nint m_fLockedPoints = 0x7CC; // uint8
            public const nint m_bCreatedFromMapFile = 0x7CD; // bool
            public const nint m_flScrollSpeed = 0x7D0; // float32
            public const nint m_bStartPointValid = 0x7D4; // bool
            public const nint m_bEndPointValid = 0x7D5; // bool
            public const nint m_hStartPoint = 0x7D8; // CHandle<CBaseEntity>
            public const nint m_hEndPoint = 0x7DC; // CHandle<CBaseEntity>
            public const nint m_iStartAttachment = 0x7E0; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x7E1; // AttachmentHandle_t
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
        public static class CBarnLight {
            public const nint m_bEnabled = 0x790; // bool
            public const nint m_nColorMode = 0x794; // int32
            public const nint m_Color = 0x798; // Color
            public const nint m_flColorTemperature = 0x79C; // float32
            public const nint m_flBrightness = 0x7A0; // float32
            public const nint m_flBrightnessScale = 0x7A4; // float32
            public const nint m_nDirectLight = 0x7A8; // int32
            public const nint m_nBakedShadowIndex = 0x7AC; // int32
            public const nint m_nLuminaireShape = 0x7B0; // int32
            public const nint m_flLuminaireSize = 0x7B4; // float32
            public const nint m_flLuminaireAnisotropy = 0x7B8; // float32
            public const nint m_LightStyleString = 0x7C0; // CUtlString
            public const nint m_flLightStyleStartTime = 0x7C8; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0x7D0; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0x7E8; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0x800; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_StyleEvent = 0x818; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0x8D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0x8E0; // float32
            public const nint m_flSoftX = 0x8E4; // float32
            public const nint m_flSoftY = 0x8E8; // float32
            public const nint m_flSkirt = 0x8EC; // float32
            public const nint m_flSkirtNear = 0x8F0; // float32
            public const nint m_vSizeParams = 0x8F4; // Vector
            public const nint m_flRange = 0x900; // float32
            public const nint m_vShear = 0x904; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0x910; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0x914; // Vector
            public const nint m_nCastShadows = 0x920; // int32
            public const nint m_nShadowMapSize = 0x924; // int32
            public const nint m_nShadowPriority = 0x928; // int32
            public const nint m_bContactShadow = 0x92C; // bool
            public const nint m_nBounceLight = 0x930; // int32
            public const nint m_flBounceScale = 0x934; // float32
            public const nint m_flMinRoughness = 0x938; // float32
            public const nint m_vAlternateColor = 0x93C; // Vector
            public const nint m_fAlternateColorBrightness = 0x948; // float32
            public const nint m_nFog = 0x94C; // int32
            public const nint m_flFogStrength = 0x950; // float32
            public const nint m_nFogShadows = 0x954; // int32
            public const nint m_flFogScale = 0x958; // float32
            public const nint m_bFogMixedShadows = 0x95C; // bool
            public const nint m_flFadeSizeStart = 0x960; // float32
            public const nint m_flFadeSizeEnd = 0x964; // float32
            public const nint m_flShadowFadeSizeStart = 0x968; // float32
            public const nint m_flShadowFadeSizeEnd = 0x96C; // float32
            public const nint m_bPrecomputedFieldsValid = 0x970; // bool
            public const nint m_vPrecomputedBoundsMins = 0x974; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x980; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x98C; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x998; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x9A4; // Vector
            public const nint m_nPrecomputedSubFrusta = 0x9B0; // int32
            public const nint m_vPrecomputedOBBOrigin0 = 0x9B4; // Vector
            public const nint m_vPrecomputedOBBAngles0 = 0x9C0; // QAngle
            public const nint m_vPrecomputedOBBExtent0 = 0x9CC; // Vector
            public const nint m_vPrecomputedOBBOrigin1 = 0x9D8; // Vector
            public const nint m_vPrecomputedOBBAngles1 = 0x9E4; // QAngle
            public const nint m_vPrecomputedOBBExtent1 = 0x9F0; // Vector
            public const nint m_vPrecomputedOBBOrigin2 = 0x9FC; // Vector
            public const nint m_vPrecomputedOBBAngles2 = 0xA08; // QAngle
            public const nint m_vPrecomputedOBBExtent2 = 0xA14; // Vector
            public const nint m_vPrecomputedOBBOrigin3 = 0xA20; // Vector
            public const nint m_vPrecomputedOBBAngles3 = 0xA2C; // QAngle
            public const nint m_vPrecomputedOBBExtent3 = 0xA38; // Vector
            public const nint m_vPrecomputedOBBOrigin4 = 0xA44; // Vector
            public const nint m_vPrecomputedOBBAngles4 = 0xA50; // QAngle
            public const nint m_vPrecomputedOBBExtent4 = 0xA5C; // Vector
            public const nint m_vPrecomputedOBBOrigin5 = 0xA68; // Vector
            public const nint m_vPrecomputedOBBAngles5 = 0xA74; // QAngle
            public const nint m_vPrecomputedOBBExtent5 = 0xA80; // Vector
            public const nint m_bPvsModifyEntity = 0xA8C; // bool
            public const nint m_VisClusters = 0xA90; // CNetworkUtlVectorBase<uint16>
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoDeathmatchSpawn {
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CEnvViewPunch {
            public const nint m_flRadius = 0x4E0; // float32
            public const nint m_angViewPunch = 0x4E4; // QAngle
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CDEagle {
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CPathCorner {
            public const nint m_flWait = 0x4E0; // float32
            public const nint m_flRadius = 0x4E4; // float32
            public const nint m_OnPass = 0x4E8; // CEntityIOOutput
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
        public static class CCSPlayerController_InventoryServices {
            public const nint m_unMusicID = 0x40; // uint16
            public const nint m_rank = 0x44; // MedalRank_t[6]
            public const nint m_nPersonaDataPublicLevel = 0x5C; // int32
            public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32
            public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
            public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
            public const nint m_nPersonaDataXpTrailLevel = 0x6C; // int32
            public const nint m_unEquippedPlayerSprayIDs = 0xF48; // uint32[1]
            public const nint m_vecServerAuthoritativeWeaponSlots = 0xF50; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
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
        public static class CAttributeContainer {
            public const nint m_Item = 0x50; // CEconItemView
        }
        // Parent: CHostage
        // Field count: 0
        public static class CHostageAlias_info_hostage_spawn {
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CMultiSource {
            public const nint m_rgEntities = 0x4E0; // CHandle<CBaseEntity>[32]
            public const nint m_rgTriggered = 0x560; // int32[32]
            public const nint m_OnTrigger = 0x5E0; // CEntityIOOutput
            public const nint m_iTotal = 0x608; // int32
            public const nint m_globalstate = 0x610; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Field count: 2
        public static class CLogicNavigation {
            public const nint m_isOn = 0x4E8; // bool
            public const nint m_navProperty = 0x4EC; // navproperties_t
        }
        // Parent: CPointEntity
        // Field count: 12
        public static class CEnvEntityMaker {
            public const nint m_vecEntityMins = 0x4E0; // Vector
            public const nint m_vecEntityMaxs = 0x4EC; // Vector
            public const nint m_hCurrentInstance = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_hCurrentBlocker = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_vecBlockerOrigin = 0x500; // Vector
            public const nint m_angPostSpawnDirection = 0x50C; // QAngle
            public const nint m_flPostSpawnDirectionVariance = 0x518; // float32
            public const nint m_flPostSpawnSpeed = 0x51C; // float32
            public const nint m_bPostSpawnUseAngles = 0x520; // bool
            public const nint m_iszTemplate = 0x528; // CUtlSymbolLarge
            public const nint m_pOutputOnSpawned = 0x530; // CEntityIOOutput
            public const nint m_pOutputOnFailedSpawn = 0x558; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CPointEntity {
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicEventListener {
            public const nint m_strEventName = 0x4F0; // CUtlString
            public const nint m_bIsEnabled = 0x4F8; // bool
            public const nint m_nTeam = 0x4FC; // int32
            public const nint m_OnEventFired = 0x500; // CEntityIOOutput
        }
        // Parent: CBaseFilter
        // Field count: 4
        public static class CFilterMultiple {
            public const nint m_nFilterType = 0x538; // filter_t
            public const nint m_iFilterName = 0x540; // CUtlSymbolLarge[10]
            public const nint m_hFilter = 0x590; // CHandle<CBaseEntity>[10]
            public const nint m_nFilterCount = 0x5B8; // int32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_UseServices {
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
        public static class CPulseGraphInstance_ServerEntity {
            public const nint m_pComponent = 0x100; // CPulseGraphComponentBase*
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 1
        public static class CPhysicsWire {
            public const nint m_nDensity = 0x4E0; // int32
        }
        // Parent: CPropDoorRotating
        // Field count: 4
        public static class CPropDoorRotatingBreakable {
            public const nint m_bBreakable = 0xF80; // bool
            public const nint m_isAbleToCloseAreaPortals = 0xF81; // bool
            public const nint m_currentDamageState = 0xF84; // int32
            public const nint m_damageStates = 0xF88; // CUtlVector<CUtlSymbolLarge>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_player_controller {
        }
        // Parent: CBaseFire
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class CFireSmoke {
            public const nint m_nFlameModelIndex = 0x4F0; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x4F4; // int32
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
        public static class CLightGlow {
            public const nint m_nHorizontalSize = 0x790; // uint32
            public const nint m_nVerticalSize = 0x794; // uint32
            public const nint m_nMinDist = 0x798; // uint32
            public const nint m_nMaxDist = 0x79C; // uint32
            public const nint m_nOuterMaxDist = 0x7A0; // uint32
            public const nint m_flGlowProxySize = 0x7A4; // float32
            public const nint m_flHDRColorScale = 0x7A8; // float32
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
        public static class CSPerRoundStats_t {
            public const nint m_iKills = 0x30; // int32
            public const nint m_iDeaths = 0x34; // int32
            public const nint m_iAssists = 0x38; // int32
            public const nint m_iDamage = 0x3C; // int32
            public const nint m_iEquipmentValue = 0x40; // int32
            public const nint m_iMoneySaved = 0x44; // int32
            public const nint m_iKillReward = 0x48; // int32
            public const nint m_iLiveTime = 0x4C; // int32
            public const nint m_iHeadShotKills = 0x50; // int32
            public const nint m_iObjective = 0x54; // int32
            public const nint m_iCashEarned = 0x58; // int32
            public const nint m_iUtilityDamage = 0x5C; // int32
            public const nint m_iEnemiesFlashed = 0x60; // int32
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
        public static class CBasePropDoor {
            public const nint m_flAutoReturnDelay = 0xC68; // float32
            public const nint m_hDoorList = 0xC70; // CUtlVector<CHandle<CBasePropDoor>>
            public const nint m_nHardwareType = 0xC88; // int32
            public const nint m_bNeedsHardware = 0xC8C; // bool
            public const nint m_eDoorState = 0xC90; // DoorState_t
            public const nint m_bLocked = 0xC94; // bool
            public const nint m_closedPosition = 0xC98; // Vector
            public const nint m_closedAngles = 0xCA4; // QAngle
            public const nint m_hBlocker = 0xCB0; // CHandle<CBaseEntity>
            public const nint m_bFirstBlocked = 0xCB4; // bool
            public const nint m_ls = 0xCB8; // locksound_t
            public const nint m_bForceClosed = 0xCD8; // bool
            public const nint m_vecLatchWorldPosition = 0xCDC; // Vector
            public const nint m_hActivator = 0xCE8; // CHandle<CBaseEntity>
            public const nint m_SoundMoving = 0xCF8; // CUtlSymbolLarge
            public const nint m_SoundOpen = 0xD00; // CUtlSymbolLarge
            public const nint m_SoundClose = 0xD08; // CUtlSymbolLarge
            public const nint m_SoundLock = 0xD10; // CUtlSymbolLarge
            public const nint m_SoundUnlock = 0xD18; // CUtlSymbolLarge
            public const nint m_SoundLatch = 0xD20; // CUtlSymbolLarge
            public const nint m_SoundPound = 0xD28; // CUtlSymbolLarge
            public const nint m_SoundJiggle = 0xD30; // CUtlSymbolLarge
            public const nint m_SoundLockedAnim = 0xD38; // CUtlSymbolLarge
            public const nint m_numCloseAttempts = 0xD40; // int32
            public const nint m_nPhysicsMaterial = 0xD44; // CUtlStringToken
            public const nint m_SlaveName = 0xD48; // CUtlSymbolLarge
            public const nint m_hMaster = 0xD50; // CHandle<CBasePropDoor>
            public const nint m_OnBlockedClosing = 0xD58; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0xD80; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0xDA8; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0xDD0; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0xDF8; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0xE20; // CEntityIOOutput
            public const nint m_OnClose = 0xE48; // CEntityIOOutput
            public const nint m_OnOpen = 0xE70; // CEntityIOOutput
            public const nint m_OnLockedUse = 0xE98; // CEntityIOOutput
            public const nint m_OnAjarOpen = 0xEC0; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x4E0; // int8
            public const nint m_iMaxRagdollCount = 0x4E4; // int32
            public const nint m_bSaveImportant = 0x4E8; // bool
            public const nint m_bCanTakeDamage = 0x4E9; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 12
        public static class CTriggerFan {
            public const nint m_vFanOrigin = 0x960; // Vector
            public const nint m_vFanEnd = 0x96C; // Vector
            public const nint m_vNoise = 0x978; // Vector
            public const nint m_flForce = 0x984; // float32
            public const nint m_flRopeForceScale = 0x988; // float32
            public const nint m_flPlayerForce = 0x98C; // float32
            public const nint m_flRampTime = 0x990; // float32
            public const nint m_bFalloff = 0x994; // bool
            public const nint m_bPushPlayer = 0x995; // bool
            public const nint m_bRampDown = 0x996; // bool
            public const nint m_bAddNoise = 0x997; // bool
            public const nint m_RampTimer = 0x998; // CountdownTimer
        }
        // Parent: CMolotovGrenade
        // Field count: 0
        public static class CIncendiaryGrenade {
        }
        // Parent: CPathCorner
        // Field count: 0
        public static class CPathCornerCrash {
        }
        // Parent: CBaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class CHandleTest {
            public const nint m_Handle = 0x4E0; // CHandle<CBaseEntity>
            public const nint m_bSendHandle = 0x4E4; // bool
        }
        // Parent: CBaseEntity
        // Field count: 8
        public static class CSoundOpvarSetEntity {
            public const nint m_iszStackName = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x4F0; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x4F8; // CUtlSymbolLarge
            public const nint m_nOpvarType = 0x500; // int32
            public const nint m_nOpvarIndex = 0x504; // int32
            public const nint m_flOpvarValue = 0x508; // float32
            public const nint m_OpvarValueString = 0x510; // CUtlSymbolLarge
            public const nint m_bSetOnSpawn = 0x518; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CNavSpaceInfo {
            public const nint m_bCreateFlightSpace = 0x4E0; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CLogicAchievement {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_iszAchievementEventID = 0x4E8; // CUtlSymbolLarge
            public const nint m_OnFired = 0x4F0; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pathString (CUtlString)
        public static class CPathSimple {
            public const nint m_pathString = 0x538; // CUtlString
        }
        // Parent: CBtNode
        // Field count: 1
        public static class CBtActionParachutePositioning {
            public const nint m_ActionTimer = 0x58; // CountdownTimer
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
        // Field count: 0
        public static class CTouchExpansionComponent {
        }
        // Parent: CBaseAnimGraph
        // Field count: 8
        public static class CItem {
            public const nint m_OnPlayerTouch = 0x9B0; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0x9D8; // CEntityIOOutput
            public const nint m_bActivateWhenAtRest = 0xA00; // bool
            public const nint m_OnCacheInteraction = 0xA08; // CEntityIOOutput
            public const nint m_OnGlovePulled = 0xA30; // CEntityIOOutput
            public const nint m_vOriginalSpawnOrigin = 0xA58; // Vector
            public const nint m_vOriginalSpawnAngles = 0xA64; // QAngle
            public const nint m_bPhysStartAsleep = 0xA70; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 14
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_DialogXMLName (string_t)
        // NetworkVarNames: m_PanelClassName (string_t)
        // NetworkVarNames: m_PanelID (string_t)
        public static class CBaseClientUIEntity {
            public const nint m_bEnabled = 0x790; // bool
            public const nint m_DialogXMLName = 0x798; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0x7A0; // CUtlSymbolLarge
            public const nint m_PanelID = 0x7A8; // CUtlSymbolLarge
            public const nint m_CustomOutput0 = 0x7B0; // CEntityIOOutput
            public const nint m_CustomOutput1 = 0x7D8; // CEntityIOOutput
            public const nint m_CustomOutput2 = 0x800; // CEntityIOOutput
            public const nint m_CustomOutput3 = 0x828; // CEntityIOOutput
            public const nint m_CustomOutput4 = 0x850; // CEntityIOOutput
            public const nint m_CustomOutput5 = 0x878; // CEntityIOOutput
            public const nint m_CustomOutput6 = 0x8A0; // CEntityIOOutput
            public const nint m_CustomOutput7 = 0x8C8; // CEntityIOOutput
            public const nint m_CustomOutput8 = 0x8F0; // CEntityIOOutput
            public const nint m_CustomOutput9 = 0x918; // CEntityIOOutput
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
        public static class CEnvDecal {
            public const nint m_hDecalMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0x798; // float32
            public const nint m_flHeight = 0x79C; // float32
            public const nint m_flDepth = 0x7A0; // float32
            public const nint m_nRenderOrder = 0x7A4; // uint32
            public const nint m_bProjectOnWorld = 0x7A8; // bool
            public const nint m_bProjectOnCharacters = 0x7A9; // bool
            public const nint m_bProjectOnWater = 0x7AA; // bool
            public const nint m_flDepthSortBias = 0x7AC; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_entity {
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 0
        public static class CBodyComponentBaseModelEntity {
        }
        // Parent: CBaseEntity
        // Field count: 11
        public static class CLogicAuto {
            public const nint m_OnMapSpawn = 0x4E0; // CEntityIOOutput
            public const nint m_OnDemoMapSpawn = 0x508; // CEntityIOOutput
            public const nint m_OnNewGame = 0x530; // CEntityIOOutput
            public const nint m_OnLoadGame = 0x558; // CEntityIOOutput
            public const nint m_OnMapTransition = 0x580; // CEntityIOOutput
            public const nint m_OnBackgroundMap = 0x5A8; // CEntityIOOutput
            public const nint m_OnMultiNewMap = 0x5D0; // CEntityIOOutput
            public const nint m_OnMultiNewRound = 0x5F8; // CEntityIOOutput
            public const nint m_OnVREnabled = 0x620; // CEntityIOOutput
            public const nint m_OnVRNotEnabled = 0x648; // CEntityIOOutput
            public const nint m_globalstate = 0x670; // CUtlSymbolLarge
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
        public static class CSoundOpvarSetPointBase {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_hSource = 0x4E4; // CEntityHandle
            public const nint m_iszSourceEntityName = 0x4F0; // CUtlSymbolLarge
            public const nint m_vLastPosition = 0x548; // Vector
            public const nint m_iszStackName = 0x558; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x560; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x568; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x570; // int32
            public const nint m_bUseAutoCompare = 0x574; // bool
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightDirectionalEntity {
        }
        // Parent: CLogicNPCCounterAABB
        // Field count: 0
        public static class CLogicNPCCounterOBB {
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: CFuncPlatRot
        // Field count: 9
        public static class CFuncTrackChange {
            public const nint m_trackTop = 0x858; // CPathTrack*
            public const nint m_trackBottom = 0x860; // CPathTrack*
            public const nint m_train = 0x868; // CFuncTrackTrain*
            public const nint m_trackTopName = 0x870; // CUtlSymbolLarge
            public const nint m_trackBottomName = 0x878; // CUtlSymbolLarge
            public const nint m_trainName = 0x880; // CUtlSymbolLarge
            public const nint m_code = 0x888; // TRAIN_CODE
            public const nint m_targetState = 0x88C; // int32
            public const nint m_use = 0x890; // int32
        }
        // Parent: CRuleBrushEntity
        // Field count: 4
        public static class CGamePlayerZone {
            public const nint m_OnPlayerInZone = 0x798; // CEntityIOOutput
            public const nint m_OnPlayerOutZone = 0x7C0; // CEntityIOOutput
            public const nint m_PlayersInCount = 0x7E8; // CEntityOutputTemplate<int32>
            public const nint m_PlayersOutCount = 0x810; // CEntityOutputTemplate<int32>
        }
        // Parent: CRuleEntity
        // Field count: 1
        public static class CRulePointEntity {
            public const nint m_Score = 0x798; // int32
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CMessageEntity {
            public const nint m_radius = 0x4E0; // int32
            public const nint m_messageText = 0x4E8; // CUtlSymbolLarge
            public const nint m_drawText = 0x4F0; // bool
            public const nint m_bDeveloperOnly = 0x4F1; // bool
            public const nint m_bEnabled = 0x4F2; // bool
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CSmokeGrenade {
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
        public static class CBaseViewModel {
            public const nint m_vecLastFacing = 0x9B0; // Vector
            public const nint m_nViewModelIndex = 0x9BC; // uint32
            public const nint m_nAnimationParity = 0x9C0; // uint32
            public const nint m_flAnimationStartTime = 0x9C4; // float32
            public const nint m_hWeapon = 0x9C8; // CHandle<CBasePlayerWeapon>
            public const nint m_sVMName = 0x9D0; // CUtlSymbolLarge
            public const nint m_sAnimationPrefix = 0x9D8; // CUtlSymbolLarge
            public const nint m_hOldLayerSequence = 0x9E0; // HSequence
            public const nint m_oldLayer = 0x9E4; // int32
            public const nint m_oldLayerStartTime = 0x9E8; // float32
            public const nint m_hControlPanel = 0x9EC; // CHandle<CBaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_flPlayerPingTokens = 0x40; // GameTime_t[5]
            public const nint m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: CBtNode
        // Field count: 4
        public static class CBtActionCombatPositioning {
            public const nint m_szSensorInputKey = 0x68; // CUtlString
            public const nint m_szIsAttackingKey = 0x80; // CUtlString
            public const nint m_ActionTimer = 0x88; // CountdownTimer
            public const nint m_bCrouching = 0xA0; // bool
        }
        // Parent: CBaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float32)
        // NetworkVarNames: m_nFlags (uint32)
        public static class CBaseFire {
            public const nint m_flScale = 0x4E0; // float32
            public const nint m_flStartScale = 0x4E4; // float32
            public const nint m_flScaleTime = 0x4E8; // float32
            public const nint m_nFlags = 0x4EC; // uint32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMAC10 {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponGlock {
        }
        // Parent: CBaseViewModel
        // Field count: 0
        public static class CPredictedViewModel {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerActiveWeaponDetect {
            public const nint m_OnTouchedActiveWeapon = 0x960; // CEntityIOOutput
            public const nint m_iszWeaponClassName = 0x988; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 18
        public static class CEnvMicrophone {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_hMeasureTarget = 0x4E4; // CHandle<CBaseEntity>
            public const nint m_nSoundType = 0x4E8; // SoundTypes_t
            public const nint m_nSoundFlags = 0x4EA; // SoundFlags_t
            public const nint m_flSensitivity = 0x4EC; // float32
            public const nint m_flSmoothFactor = 0x4F0; // float32
            public const nint m_flMaxRange = 0x4F4; // float32
            public const nint m_iszSpeakerName = 0x4F8; // CUtlSymbolLarge
            public const nint m_hSpeaker = 0x500; // CHandle<CBaseEntity>
            public const nint m_bAvoidFeedback = 0x504; // bool
            public const nint m_iSpeakerDSPPreset = 0x508; // int32
            public const nint m_iszListenFilter = 0x510; // CUtlSymbolLarge
            public const nint m_hListenFilter = 0x518; // CHandle<CBaseFilter>
            public const nint m_SoundLevel = 0x520; // CEntityOutputTemplate<float32>
            public const nint m_OnRoutedSound = 0x548; // CEntityIOOutput
            public const nint m_OnHeardSound = 0x570; // CEntityIOOutput
            public const nint m_szLastSound = 0x598; // char[256]
            public const nint m_iLastRoutedFrame = 0x698; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CInfoSpawnGroupLoadUnload {
            public const nint m_OnSpawnGroupLoadStarted = 0x4E0; // CEntityIOOutput
            public const nint m_OnSpawnGroupLoadFinished = 0x508; // CEntityIOOutput
            public const nint m_OnSpawnGroupUnloadStarted = 0x530; // CEntityIOOutput
            public const nint m_OnSpawnGroupUnloadFinished = 0x558; // CEntityIOOutput
            public const nint m_iszSpawnGroupName = 0x580; // CUtlSymbolLarge
            public const nint m_iszSpawnGroupFilterName = 0x588; // CUtlSymbolLarge
            public const nint m_iszLandmarkName = 0x590; // CUtlSymbolLarge
            public const nint m_sFixedSpawnGroupName = 0x598; // CUtlString
            public const nint m_flTimeoutInterval = 0x5A0; // float32
            public const nint m_bStreamingStarted = 0x5A4; // bool
            public const nint m_bUnloadingStarted = 0x5A5; // bool
        }
        // Parent: CBaseEntity
        // Field count: 23
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
        public static class CBasePlayerController {
            public const nint m_nInButtonsWhichAreToggles = 0x4E8; // uint64
            public const nint m_nTickBase = 0x4F0; // uint32
            public const nint m_hPawn = 0x520; // CHandle<CBasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x524; // bool
            public const nint m_nSplitScreenSlot = 0x528; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x52C; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x530; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x548; // bool
            public const nint m_iConnected = 0x54C; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x550; // char[128]
            public const nint m_szNetworkIDString = 0x5D0; // CUtlString
            public const nint m_fLerpTime = 0x5D8; // float32
            public const nint m_bLagCompensation = 0x5DC; // bool
            public const nint m_bPredict = 0x5DD; // bool
            public const nint m_bIsLowViolence = 0x5E4; // bool
            public const nint m_bGamePaused = 0x5E5; // bool
            public const nint m_iIgnoreGlobalChat = 0x720; // ChatIgnoreType_t
            public const nint m_flLastPlayerTalkTime = 0x724; // float32
            public const nint m_flLastEntitySteadyState = 0x728; // float32
            public const nint m_nAvailableEntitySteadyState = 0x72C; // int32
            public const nint m_bHasAnySteadyStateEnts = 0x730; // bool
            public const nint m_steamID = 0x740; // uint64
            public const nint m_iDesiredFOV = 0x748; // uint32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CPointTemplateAPI {
        }
        // Parent: CCSWeaponBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bFirstAttack (bool)
        public static class CKnife {
            public const nint m_bFirstAttack = 0xF68; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 37
        public static class CFuncTrackTrain {
            public const nint m_ppath = 0x790; // CHandle<CPathTrack>
            public const nint m_length = 0x794; // float32
            public const nint m_vPosPrev = 0x798; // Vector
            public const nint m_angPrev = 0x7A4; // QAngle
            public const nint m_controlMins = 0x7B0; // Vector
            public const nint m_controlMaxs = 0x7BC; // Vector
            public const nint m_lastBlockPos = 0x7C8; // Vector
            public const nint m_lastBlockTick = 0x7D4; // int32
            public const nint m_flVolume = 0x7D8; // float32
            public const nint m_flBank = 0x7DC; // float32
            public const nint m_oldSpeed = 0x7E0; // float32
            public const nint m_flBlockDamage = 0x7E4; // float32
            public const nint m_height = 0x7E8; // float32
            public const nint m_maxSpeed = 0x7EC; // float32
            public const nint m_dir = 0x7F0; // float32
            public const nint m_iszSoundMove = 0x7F8; // CUtlSymbolLarge
            public const nint m_iszSoundMovePing = 0x800; // CUtlSymbolLarge
            public const nint m_iszSoundStart = 0x808; // CUtlSymbolLarge
            public const nint m_iszSoundStop = 0x810; // CUtlSymbolLarge
            public const nint m_strPathTarget = 0x818; // CUtlSymbolLarge
            public const nint m_flMoveSoundMinDuration = 0x820; // float32
            public const nint m_flMoveSoundMaxDuration = 0x824; // float32
            public const nint m_flNextMoveSoundTime = 0x828; // GameTime_t
            public const nint m_flMoveSoundMinPitch = 0x82C; // float32
            public const nint m_flMoveSoundMaxPitch = 0x830; // float32
            public const nint m_eOrientationType = 0x834; // TrainOrientationType_t
            public const nint m_eVelocityType = 0x838; // TrainVelocityType_t
            public const nint m_OnStart = 0x848; // CEntityIOOutput
            public const nint m_OnNext = 0x870; // CEntityIOOutput
            public const nint m_OnArrivedAtDestinationNode = 0x898; // CEntityIOOutput
            public const nint m_bManualSpeedChanges = 0x8C0; // bool
            public const nint m_flDesiredSpeed = 0x8C4; // float32
            public const nint m_flSpeedChangeTime = 0x8C8; // GameTime_t
            public const nint m_flAccelSpeed = 0x8CC; // float32
            public const nint m_flDecelSpeed = 0x8D0; // float32
            public const nint m_bAccelToSpeed = 0x8D4; // bool
            public const nint m_flNextMPSoundTime = 0x8D8; // GameTime_t
        }
        // Parent: CServerOnlyModelEntity
        // Field count: 5
        public static class CFogVolume {
            public const nint m_fogName = 0x790; // CUtlSymbolLarge
            public const nint m_postProcessName = 0x798; // CUtlSymbolLarge
            public const nint m_colorCorrectionName = 0x7A0; // CUtlSymbolLarge
            public const nint m_bDisabled = 0x7B0; // bool
            public const nint m_bInFogVolumesList = 0x7B1; // bool
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoPlayerCounterterrorist {
        }
        // Parent: CBaseModelEntity
        // Field count: 19
        public static class CFire {
            public const nint m_hEffect = 0x790; // CHandle<CBaseFire>
            public const nint m_hOwner = 0x794; // CHandle<CBaseEntity>
            public const nint m_nFireType = 0x798; // int32
            public const nint m_flFuel = 0x79C; // float32
            public const nint m_flDamageTime = 0x7A0; // GameTime_t
            public const nint m_lastDamage = 0x7A4; // GameTime_t
            public const nint m_flFireSize = 0x7A8; // float32
            public const nint m_flLastNavUpdateTime = 0x7AC; // GameTime_t
            public const nint m_flHeatLevel = 0x7B0; // float32
            public const nint m_flHeatAbsorb = 0x7B4; // float32
            public const nint m_flDamageScale = 0x7B8; // float32
            public const nint m_flMaxHeat = 0x7BC; // float32
            public const nint m_flLastHeatLevel = 0x7C0; // float32
            public const nint m_flAttackTime = 0x7C4; // float32
            public const nint m_bEnabled = 0x7C8; // bool
            public const nint m_bStartDisabled = 0x7C9; // bool
            public const nint m_bDidActivate = 0x7CA; // bool
            public const nint m_OnIgnited = 0x7D0; // CEntityIOOutput
            public const nint m_OnExtinguished = 0x7F8; // CEntityIOOutput
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
        public static class CBaseAnimGraphController {
            public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint m_bSequenceFinished = 0x220; // bool
            public const nint m_flSoundSyncTime = 0x224; // float32
            public const nint m_nActiveIKChainMask = 0x228; // uint32
            public const nint m_hSequence = 0x22C; // HSequence
            public const nint m_flSeqStartTime = 0x230; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x234; // float32
            public const nint m_nAnimLoopMode = 0x238; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x23C; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x248; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x24A; // bool
            public const nint m_bNetworkedSequenceChanged = 0x24B; // bool
            public const nint m_bLastUpdateSkipped = 0x24C; // bool
            public const nint m_flPrevAnimUpdateTime = 0x250; // GameTime_t
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSPointScriptEntity {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponBizon {
        }
        // Parent: CBasePlatTrain
        // Field count: 1
        public static class CFuncPlat {
            public const nint m_sNoise = 0x838; // CUtlSymbolLarge
        }
        // Parent: CPhysConstraint
        // Field count: 48
        public static class CGenericConstraint {
            public const nint m_nLinearMotionX = 0x560; // JointMotion_t
            public const nint m_nLinearMotionY = 0x564; // JointMotion_t
            public const nint m_nLinearMotionZ = 0x568; // JointMotion_t
            public const nint m_flLinearFrequencyX = 0x56C; // float32
            public const nint m_flLinearFrequencyY = 0x570; // float32
            public const nint m_flLinearFrequencyZ = 0x574; // float32
            public const nint m_flLinearDampingRatioX = 0x578; // float32
            public const nint m_flLinearDampingRatioY = 0x57C; // float32
            public const nint m_flLinearDampingRatioZ = 0x580; // float32
            public const nint m_flMaxLinearImpulseX = 0x584; // float32
            public const nint m_flMaxLinearImpulseY = 0x588; // float32
            public const nint m_flMaxLinearImpulseZ = 0x58C; // float32
            public const nint m_flBreakAfterTimeX = 0x590; // float32
            public const nint m_flBreakAfterTimeY = 0x594; // float32
            public const nint m_flBreakAfterTimeZ = 0x598; // float32
            public const nint m_flBreakAfterTimeStartTimeX = 0x59C; // GameTime_t
            public const nint m_flBreakAfterTimeStartTimeY = 0x5A0; // GameTime_t
            public const nint m_flBreakAfterTimeStartTimeZ = 0x5A4; // GameTime_t
            public const nint m_flBreakAfterTimeThresholdX = 0x5A8; // float32
            public const nint m_flBreakAfterTimeThresholdY = 0x5AC; // float32
            public const nint m_flBreakAfterTimeThresholdZ = 0x5B0; // float32
            public const nint m_flNotifyForceX = 0x5B4; // float32
            public const nint m_flNotifyForceY = 0x5B8; // float32
            public const nint m_flNotifyForceZ = 0x5BC; // float32
            public const nint m_flNotifyForceMinTimeX = 0x5C0; // float32
            public const nint m_flNotifyForceMinTimeY = 0x5C4; // float32
            public const nint m_flNotifyForceMinTimeZ = 0x5C8; // float32
            public const nint m_flNotifyForceLastTimeX = 0x5CC; // GameTime_t
            public const nint m_flNotifyForceLastTimeY = 0x5D0; // GameTime_t
            public const nint m_flNotifyForceLastTimeZ = 0x5D4; // GameTime_t
            public const nint m_bAxisNotifiedX = 0x5D8; // bool
            public const nint m_bAxisNotifiedY = 0x5D9; // bool
            public const nint m_bAxisNotifiedZ = 0x5DA; // bool
            public const nint m_nAngularMotionX = 0x5DC; // JointMotion_t
            public const nint m_nAngularMotionY = 0x5E0; // JointMotion_t
            public const nint m_nAngularMotionZ = 0x5E4; // JointMotion_t
            public const nint m_flAngularFrequencyX = 0x5E8; // float32
            public const nint m_flAngularFrequencyY = 0x5EC; // float32
            public const nint m_flAngularFrequencyZ = 0x5F0; // float32
            public const nint m_flAngularDampingRatioX = 0x5F4; // float32
            public const nint m_flAngularDampingRatioY = 0x5F8; // float32
            public const nint m_flAngularDampingRatioZ = 0x5FC; // float32
            public const nint m_flMaxAngularImpulseX = 0x600; // float32
            public const nint m_flMaxAngularImpulseY = 0x604; // float32
            public const nint m_flMaxAngularImpulseZ = 0x608; // float32
            public const nint m_NotifyForceReachedX = 0x610; // CEntityIOOutput
            public const nint m_NotifyForceReachedY = 0x638; // CEntityIOOutput
            public const nint m_NotifyForceReachedZ = 0x660; // CEntityIOOutput
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CDecoyGrenade {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponG3SG1 {
        }
        // Parent: CBaseModelEntity
        // Field count: 11
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
        // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
        // NetworkVarNames: m_vecForce (Vector)
        // NetworkVarNames: m_nForceBone (int32)
        // NetworkVarNames: m_RagdollPose (PhysicsRagdollPose_t)
        // NetworkVarNames: m_bRagdollClientSide (bool)
        public static class CBaseAnimGraph {
            public const nint m_bInitiallyPopulateInterpHistory = 0x808; // bool
            public const nint m_pChoreoServices = 0x810; // IChoreoServices*
            public const nint m_bAnimGraphUpdateEnabled = 0x818; // bool
            public const nint m_flMaxSlopeDistance = 0x81C; // float32
            public const nint m_vLastSlopeCheckPos = 0x820; // Vector
            public const nint m_bAnimationUpdateScheduled = 0x82C; // bool
            public const nint m_vecForce = 0x830; // Vector
            public const nint m_nForceBone = 0x83C; // int32
            public const nint m_RagdollPose = 0x850; // PhysicsRagdollPose_t
            public const nint m_bRagdollClientSide = 0x878; // bool
            public const nint m_nLastDestructiblePartDestroyedAnimgraphSetTick = 0x9A0; // int32
        }
        // Parent: CPhysForce
        // Field count: 1
        public static class CPhysTorque {
            public const nint m_axis = 0x540; // Vector
        }
        // Parent: CBaseAnimGraph
        // Field count: 27
        //
        // Metadata:
        // NetworkVarNames: m_ragPos (Vector)
        // NetworkVarNames: m_ragAngles (QAngle)
        // NetworkVarNames: m_hRagdollSource (EHANDLE)
        // NetworkVarNames: m_flBlendWeight (float32)
        public static class CRagdollProp {
            public const nint m_ragdoll = 0x9B0; // ragdoll_t
            public const nint m_bStartDisabled = 0x9E8; // bool
            public const nint m_ragPos = 0x9F0; // CNetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0xA08; // CNetworkUtlVectorBase<QAngle>
            public const nint m_hRagdollSource = 0xA20; // CHandle<CBaseEntity>
            public const nint m_lastUpdateTickCount = 0xA24; // uint32
            public const nint m_allAsleep = 0xA28; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xA29; // bool
            public const nint m_hDamageEntity = 0xA2C; // CHandle<CBaseEntity>
            public const nint m_hKiller = 0xA30; // CHandle<CBaseEntity>
            public const nint m_hPhysicsAttacker = 0xA34; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xA38; // GameTime_t
            public const nint m_flFadeOutStartTime = 0xA3C; // GameTime_t
            public const nint m_flFadeTime = 0xA40; // float32
            public const nint m_vecLastOrigin = 0xA44; // Vector
            public const nint m_flAwakeTime = 0xA50; // GameTime_t
            public const nint m_flLastOriginChangeTime = 0xA54; // GameTime_t
            public const nint m_strOriginClassName = 0xA58; // CUtlSymbolLarge
            public const nint m_strSourceClassName = 0xA60; // CUtlSymbolLarge
            public const nint m_bHasBeenPhysgunned = 0xA68; // bool
            public const nint m_bShouldTeleportPhysics = 0xA69; // bool
            public const nint m_flBlendWeight = 0xA6C; // float32
            public const nint m_flDefaultFadeScale = 0xA70; // float32
            public const nint m_ragdollMins = 0xA78; // CUtlVector<Vector>
            public const nint m_ragdollMaxs = 0xA90; // CUtlVector<Vector>
            public const nint m_bShouldDeleteActivationRecord = 0xAA8; // bool
            public const nint m_bValidatePoweredRagdollPose = 0xB08; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CItemSoda {
        }
        // Parent: CEnvCubemap
        // Field count: 0
        public static class CEnvCubemapBox {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerAPI {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_CCSWeaponBaseVData {
        }
        // Parent: CBaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint m_flFadeStartDist = 0x4E0; // float32
            public const nint m_flFadeEndDist = 0x4E4; // float32
        }
        // Parent: CTriggerOnce
        // Field count: 14
        //
        // Metadata:
        // NetworkVarNames: m_bTestOcclusion (bool)
        public static class CTriggerLook {
            public const nint m_hLookTarget = 0x988; // CHandle<CBaseEntity>
            public const nint m_flFieldOfView = 0x98C; // float32
            public const nint m_flLookTime = 0x990; // float32
            public const nint m_flLookTimeTotal = 0x994; // float32
            public const nint m_flLookTimeLast = 0x998; // GameTime_t
            public const nint m_flTimeoutDuration = 0x99C; // float32
            public const nint m_bTimeoutFired = 0x9A0; // bool
            public const nint m_bIsLooking = 0x9A1; // bool
            public const nint m_b2DFOV = 0x9A2; // bool
            public const nint m_bUseVelocity = 0x9A3; // bool
            public const nint m_bTestOcclusion = 0x9A4; // bool
            public const nint m_OnTimeout = 0x9A8; // CEntityIOOutput
            public const nint m_OnStartLook = 0x9D0; // CEntityIOOutput
            public const nint m_OnEndLook = 0x9F8; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoTeleportDestination {
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CMathRemap {
            public const nint m_flInMin = 0x4E0; // float32
            public const nint m_flInMax = 0x4E4; // float32
            public const nint m_flOut1 = 0x4E8; // float32
            public const nint m_flOut2 = 0x4EC; // float32
            public const nint m_flOldInValue = 0x4F0; // float32
            public const nint m_bEnabled = 0x4F4; // bool
            public const nint m_OutValue = 0x4F8; // CEntityOutputTemplate<float32>
            public const nint m_OnRoseAboveMin = 0x520; // CEntityIOOutput
            public const nint m_OnRoseAboveMax = 0x548; // CEntityIOOutput
            public const nint m_OnFellBelowMin = 0x570; // CEntityIOOutput
            public const nint m_OnFellBelowMax = 0x598; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CInstructorEventEntity {
            public const nint m_iszName = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x4E8; // CUtlSymbolLarge
            public const nint m_hTargetPlayer = 0x4F0; // CHandle<CBasePlayerPawn>
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
        public static class CGradientFog {
            public const nint m_hGradientFogTexture = 0x4E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x4E8; // float32
            public const nint m_flFogEndDistance = 0x4EC; // float32
            public const nint m_bHeightFogEnabled = 0x4F0; // bool
            public const nint m_flFogStartHeight = 0x4F4; // float32
            public const nint m_flFogEndHeight = 0x4F8; // float32
            public const nint m_flFarZ = 0x4FC; // float32
            public const nint m_flFogMaxOpacity = 0x500; // float32
            public const nint m_flFogFalloffExponent = 0x504; // float32
            public const nint m_flFogVerticalExponent = 0x508; // float32
            public const nint m_fogColor = 0x50C; // Color
            public const nint m_flFogStrength = 0x510; // float32
            public const nint m_flFadeTime = 0x514; // float32
            public const nint m_bStartDisabled = 0x518; // bool
            public const nint m_bIsEnabled = 0x519; // bool
            public const nint m_bGradientFogNeedsTextures = 0x51A; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_source (string_t)
        // NetworkVarNames: m_destination (string_t)
        public static class CFootstepControl {
            public const nint m_source = 0x960; // CUtlSymbolLarge
            public const nint m_destination = 0x968; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CTriggerVolume {
            public const nint m_iFilterName = 0x790; // CUtlSymbolLarge
            public const nint m_hFilter = 0x798; // CHandle<CBaseFilter>
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeAlias_snd_soundscape {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintHostageRescueZone {
        }
        // Parent: CBaseEntity
        // Field count: 7
        public static class CFishPool {
            public const nint m_fishCount = 0x4F0; // int32
            public const nint m_maxRange = 0x4F4; // float32
            public const nint m_swimDepth = 0x4F8; // float32
            public const nint m_waterLevel = 0x4FC; // float32
            public const nint m_isDormant = 0x500; // bool
            public const nint m_fishes = 0x508; // CUtlVector<CHandle<CFish>>
            public const nint m_visTimer = 0x520; // CountdownTimer
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CPointClientCommand {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncVPhysicsClip {
            public const nint m_bDisabled = 0x790; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 5
        public static class CCSPlayer_RadioServices {
            public const nint m_flGotHostageTalkTimer = 0x40; // GameTime_t
            public const nint m_flDefusingTalkTimer = 0x44; // GameTime_t
            public const nint m_flC4PlantTalkTimer = 0x48; // GameTime_t
            public const nint m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
            public const nint m_bIgnoreRadio = 0x58; // bool
        }
        // Parent: CSceneEntity
        // Field count: 7
        public static class CInstancedSceneEntity {
            public const nint m_hOwner = 0xA40; // CHandle<CBaseEntity>
            public const nint m_bHadOwner = 0xA44; // bool
            public const nint m_flPostSpeakDelay = 0xA48; // float32
            public const nint m_flPreDelay = 0xA4C; // float32
            public const nint m_bIsBackground = 0xA50; // bool
            public const nint m_bRemoveOnCompletion = 0xA51; // bool
            public const nint m_hTarget = 0xA54; // CHandle<CBaseEntity>
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CEnvHudHint {
            public const nint m_iszMessage = 0x4E0; // CUtlSymbolLarge
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
        public static class CParticleSystem {
            public const nint m_szSnapshotFileName = 0x790; // char[512]
            public const nint m_bActive = 0x990; // bool
            public const nint m_bFrozen = 0x991; // bool
            public const nint m_flFreezeTransitionDuration = 0x994; // float32
            public const nint m_nStopType = 0x998; // int32
            public const nint m_bAnimateDuringGameplayPause = 0x99C; // bool
            public const nint m_iEffectIndex = 0x9A0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0x9A8; // GameTime_t
            public const nint m_flPreSimTime = 0x9AC; // float32
            public const nint m_vServerControlPoints = 0x9B0; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0x9E0; // uint8[4]
            public const nint m_hControlPointEnts = 0x9E4; // CHandle<CBaseEntity>[64]
            public const nint m_bNoSave = 0xAE4; // bool
            public const nint m_bNoFreeze = 0xAE5; // bool
            public const nint m_bNoRamp = 0xAE6; // bool
            public const nint m_bStartActive = 0xAE7; // bool
            public const nint m_iszEffectName = 0xAE8; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0xAF0; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0xCF0; // int32
            public const nint m_vecDataCPValue = 0xCF4; // Vector
            public const nint m_nTintCP = 0xD00; // int32
            public const nint m_clrTint = 0xD04; // Color
        }
        // Parent: CEntitySubclassVDataBase
        // Field count: 22
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x1E8; // bool
            public const nint m_bAllowFlipping = 0x1E9; // bool
            public const nint m_sMuzzleAttachment = 0x1F0; // CAttachmentNameSymbolWithStorage
            public const nint m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_bLinkedCooldowns = 0x2F0; // bool
            public const nint m_iFlags = 0x2F1; // ItemFlagTypes_t
            public const nint m_nPrimaryAmmoType = 0x2F2; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x2F3; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x2F4; // int32
            public const nint m_iMaxClip2 = 0x2F8; // int32
            public const nint m_iDefaultClip1 = 0x2FC; // int32
            public const nint m_iDefaultClip2 = 0x300; // int32
            public const nint m_bReserveAmmoAsClips = 0x304; // bool
            public const nint m_iWeight = 0x308; // int32
            public const nint m_bAutoSwitchTo = 0x30C; // bool
            public const nint m_bAutoSwitchFrom = 0x30D; // bool
            public const nint m_iRumbleEffect = 0x310; // RumbleEffect_t
            public const nint m_iSlot = 0x314; // int32
            public const nint m_iPosition = 0x318; // int32
            public const nint m_aShootSounds = 0x320; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
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
        public static class CCSObserverPawn {
        }
        // Parent: CItem
        // Field count: 1
        public static class CScriptItem {
            public const nint m_MoveTypeOverride = 0xA80; // MoveType_t
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
        public static class CTimeline {
            public const nint m_flValues = 0x10; // float32[64]
            public const nint m_nValueCounts = 0x110; // int32[64]
            public const nint m_nBucketCount = 0x210; // int32
            public const nint m_flInterval = 0x214; // float32
            public const nint m_flFinalValue = 0x218; // float32
            public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
            public const nint m_bStopped = 0x220; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSG556 {
        }
        // Parent: CPointEntity
        // Field count: 10
        public static class CAmbientGeneric {
            public const nint m_radius = 0x4E0; // float32
            public const nint m_flMaxRadius = 0x4E4; // float32
            public const nint m_iSoundLevel = 0x4E8; // soundlevel_t
            public const nint m_dpv = 0x4EC; // dynpitchvol_t
            public const nint m_fActive = 0x550; // bool
            public const nint m_fLooping = 0x551; // bool
            public const nint m_iszSound = 0x558; // CUtlSymbolLarge
            public const nint m_sSourceEntName = 0x560; // CUtlSymbolLarge
            public const nint m_hSoundSource = 0x568; // CHandle<CBaseEntity>
            public const nint m_nSoundSourceEntIndex = 0x56C; // CEntityIndex
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
        public static class CDynamicLight {
            public const nint m_ActualFlags = 0x790; // uint8
            public const nint m_Flags = 0x791; // uint8
            public const nint m_LightStyle = 0x792; // uint8
            public const nint m_On = 0x793; // bool
            public const nint m_Radius = 0x794; // float32
            public const nint m_Exponent = 0x798; // int32
            public const nint m_InnerAngle = 0x79C; // float32
            public const nint m_OuterAngle = 0x7A0; // float32
            public const nint m_SpotRadius = 0x7A4; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponP90 {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerToggleSave {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CPrecipitation {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CPointServerCommand {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<CBaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CLogicalEntity {
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
        public static class CAnimGraphNetworkedVariables {
            public const nint m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32>
            public const nint m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8>
            public const nint m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16>
            public const nint m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32>
            public const nint m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32>
            public const nint m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64>
            public const nint m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float32>
            public const nint m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
            public const nint m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
            public const nint m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8>
            public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16>
            public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32>
            public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64>
            public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float32>
            public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
            public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
            public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_nBoolVariablesCount = 0x1E8; // int32
            public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint m_nRandomSeedOffset = 0x1F0; // int32
            public const nint m_flLastTeleportTime = 0x1F4; // float32
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
        public static class CPhysicsProp {
            public const nint m_MotionEnabled = 0xB60; // CEntityIOOutput
            public const nint m_OnAwakened = 0xB88; // CEntityIOOutput
            public const nint m_OnAwake = 0xBB0; // CEntityIOOutput
            public const nint m_OnAsleep = 0xBD8; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0xC00; // CEntityIOOutput
            public const nint m_OnOutOfWorld = 0xC28; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0xC50; // CEntityIOOutput
            public const nint m_bForceNavIgnore = 0xC78; // bool
            public const nint m_bNoNavmeshBlocker = 0xC79; // bool
            public const nint m_bForceNpcExclude = 0xC7A; // bool
            public const nint m_massScale = 0xC7C; // float32
            public const nint m_inertiaScale = 0xC80; // float32
            public const nint m_buoyancyScale = 0xC84; // float32
            public const nint m_damageType = 0xC88; // int32
            public const nint m_damageToEnableMotion = 0xC8C; // int32
            public const nint m_flForceToEnableMotion = 0xC90; // float32
            public const nint m_bThrownByPlayer = 0xC94; // bool
            public const nint m_bDroppedByPlayer = 0xC95; // bool
            public const nint m_bTouchedByPlayer = 0xC96; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xC97; // bool
            public const nint m_iExploitableByPlayer = 0xC98; // int32
            public const nint m_bHasBeenAwakened = 0xC9C; // bool
            public const nint m_bIsOverrideProp = 0xC9D; // bool
            public const nint m_fNextCheckDisableMotionContactsTime = 0xCA0; // GameTime_t
            public const nint m_iInitialGlowState = 0xCA4; // int32
            public const nint m_nGlowRange = 0xCA8; // int32
            public const nint m_nGlowRangeMin = 0xCAC; // int32
            public const nint m_glowColor = 0xCB0; // Color
            public const nint m_bShouldAutoConvertBackFromDebris = 0xCB4; // bool
            public const nint m_bMuteImpactEffects = 0xCB5; // bool
            public const nint m_bAcceptDamageFromHeldObjects = 0xCBF; // bool
            public const nint m_bEnableUseOutput = 0xCC0; // bool
            public const nint m_CrateType = 0xCC4; // CPhysicsProp::CrateType_t
            public const nint m_strItemClass = 0xCC8; // CUtlSymbolLarge[4]
            public const nint m_nItemCount = 0xCE8; // int32[4]
            public const nint m_bRemovableForAmmoBalancing = 0xCF8; // bool
            public const nint m_bAwake = 0xCF9; // bool
        }
        // Parent: CFuncWall
        // Field count: 0
        public static class CFuncWallToggle {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSPlayer_CameraServices {
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
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
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x68; // int32
            public const nint m_iEnemy4Ks = 0x6C; // int32
            public const nint m_iEnemy3Ks = 0x70; // int32
            public const nint m_iEnemyKnifeKills = 0x74; // int32
            public const nint m_iEnemyTaserKills = 0x78; // int32
            public const nint m_iEnemy2Ks = 0x7C; // int32
            public const nint m_iUtility_Count = 0x80; // int32
            public const nint m_iUtility_Successes = 0x84; // int32
            public const nint m_iUtility_Enemies = 0x88; // int32
            public const nint m_iFlash_Count = 0x8C; // int32
            public const nint m_iFlash_Successes = 0x90; // int32
            public const nint m_nHealthPointsRemovedTotal = 0x94; // int32
            public const nint m_nHealthPointsDealtTotal = 0x98; // int32
            public const nint m_nShotsFiredTotal = 0x9C; // int32
            public const nint m_nShotsOnTargetTotal = 0xA0; // int32
            public const nint m_i1v1Count = 0xA4; // int32
            public const nint m_i1v1Wins = 0xA8; // int32
            public const nint m_i1v2Count = 0xAC; // int32
            public const nint m_i1v2Wins = 0xB0; // int32
            public const nint m_iEntryCount = 0xB4; // int32
            public const nint m_iEntryWins = 0xB8; // int32
        }
        // Parent: CFuncLadder
        // Field count: 0
        public static class CFuncLadderAlias_func_useableladder {
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerSndSosOpvar {
            public const nint m_hTouchingPlayers = 0x960; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_flPosition = 0x978; // Vector
            public const nint m_flCenterSize = 0x984; // float32
            public const nint m_flMinVal = 0x988; // float32
            public const nint m_flMaxVal = 0x98C; // float32
            public const nint m_opvarName = 0x990; // CUtlSymbolLarge
            public const nint m_stackName = 0x998; // CUtlSymbolLarge
            public const nint m_operatorName = 0x9A0; // CUtlSymbolLarge
            public const nint m_bVolIs2D = 0x9A8; // bool
            public const nint m_opvarNameChar = 0x9A9; // char[256]
            public const nint m_stackNameChar = 0xAA9; // char[256]
            public const nint m_operatorNameChar = 0xBA9; // char[256]
            public const nint m_VecNormPos = 0xCAC; // Vector
            public const nint m_flNormCenterSize = 0xCB8; // float32
        }
        // Parent: CItem
        // Field count: 0
        public static class CItemAssaultSuit {
        }
        // Parent: CBaseEntity
        // Field count: 72
        public static class CScriptedSequence {
            public const nint m_iszEntry = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszPreIdle = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszPlay = 0x4F0; // CUtlSymbolLarge
            public const nint m_iszPostIdle = 0x4F8; // CUtlSymbolLarge
            public const nint m_iszModifierToAddOnPlay = 0x500; // CUtlSymbolLarge
            public const nint m_iszNextScript = 0x508; // CUtlSymbolLarge
            public const nint m_iszEntity = 0x510; // CUtlSymbolLarge
            public const nint m_iszSyncGroup = 0x518; // CUtlSymbolLarge
            public const nint m_nMoveTo = 0x520; // ScriptedMoveTo_t
            public const nint m_nMoveToGait = 0x524; // MovementGait_t
            public const nint m_nHeldWeaponBehavior = 0x528; // ScriptedHeldWeaponBehavior_t
            public const nint m_bIsPlayingPreIdle = 0x52C; // bool
            public const nint m_bIsPlayingEntry = 0x52D; // bool
            public const nint m_bIsPlayingAction = 0x52E; // bool
            public const nint m_bIsPlayingPostIdle = 0x52F; // bool
            public const nint m_bDontRotateOther = 0x530; // bool
            public const nint m_bIsRepeatable = 0x531; // bool
            public const nint m_bShouldLeaveCorpse = 0x532; // bool
            public const nint m_bStartOnSpawn = 0x533; // bool
            public const nint m_bDisallowInterrupts = 0x534; // bool
            public const nint m_bCanOverrideNPCState = 0x535; // bool
            public const nint m_bDontTeleportAtEnd = 0x536; // bool
            public const nint m_bHighPriority = 0x537; // bool
            public const nint m_bHideDebugComplaints = 0x538; // bool
            public const nint m_bContinueOnDeath = 0x539; // bool
            public const nint m_bLoopPreIdleSequence = 0x53A; // bool
            public const nint m_bLoopActionSequence = 0x53B; // bool
            public const nint m_bLoopPostIdleSequence = 0x53C; // bool
            public const nint m_bSynchPostIdles = 0x53D; // bool
            public const nint m_bIgnoreLookAt = 0x53E; // bool
            public const nint m_bIgnoreGravity = 0x53F; // bool
            public const nint m_bDisableNPCCollisions = 0x540; // bool
            public const nint m_bKeepAnimgraphLockedPost = 0x541; // bool
            public const nint m_bDontAddModifiers = 0x542; // bool
            public const nint m_flRadius = 0x544; // float32
            public const nint m_flRepeat = 0x548; // float32
            public const nint m_flPlayAnimFadeInTime = 0x54C; // float32
            public const nint m_flMoveInterpTime = 0x550; // float32
            public const nint m_flAngRate = 0x554; // float32
            public const nint m_bWaitUntilMoveCompletesToStartAnimation = 0x558; // bool
            public const nint m_nNotReadySequenceCount = 0x55C; // int32
            public const nint m_startTime = 0x560; // GameTime_t
            public const nint m_bWaitForBeginSequence = 0x564; // bool
            public const nint m_saved_effects = 0x568; // int32
            public const nint m_savedFlags = 0x56C; // int32
            public const nint m_savedCollisionGroup = 0x570; // int32
            public const nint m_bInterruptable = 0x574; // bool
            public const nint m_sequenceStarted = 0x575; // bool
            public const nint m_bPositionRelativeToOtherEntity = 0x576; // bool
            public const nint m_hTargetEnt = 0x578; // CHandle<CBaseEntity>
            public const nint m_hNextCine = 0x57C; // CHandle<CScriptedSequence>
            public const nint m_bThinking = 0x580; // bool
            public const nint m_bInitiatedSelfDelete = 0x581; // bool
            public const nint m_bIsTeleportingDueToMoveTo = 0x582; // bool
            public const nint m_bAllowCustomInterruptConditions = 0x583; // bool
            public const nint m_hForcedTarget = 0x584; // CHandle<CBaseAnimGraph>
            public const nint m_bDontCancelOtherSequences = 0x588; // bool
            public const nint m_bForceSynch = 0x589; // bool
            public const nint m_bPreventUpdateYawOnFinish = 0x58A; // bool
            public const nint m_bEnsureOnNavmeshOnFinish = 0x58B; // bool
            public const nint m_onDeathBehavior = 0x58C; // ScriptedOnDeath_t
            public const nint m_ConflictResponse = 0x590; // ScriptedConflictResponse_t
            public const nint m_OnBeginSequence = 0x598; // CEntityIOOutput
            public const nint m_OnActionStartOrLoop = 0x5C0; // CEntityIOOutput
            public const nint m_OnEndSequence = 0x5E8; // CEntityIOOutput
            public const nint m_OnPostIdleEndSequence = 0x610; // CEntityIOOutput
            public const nint m_OnCancelSequence = 0x638; // CEntityIOOutput
            public const nint m_OnCancelFailedSequence = 0x660; // CEntityIOOutput
            public const nint m_OnScriptEvent = 0x688; // CEntityIOOutput[8]
            public const nint m_matOtherToMain = 0x7D0; // CTransform
            public const nint m_hInteractionMainEntity = 0x7F0; // CHandle<CBaseEntity>
            public const nint m_iPlayerDeathBehavior = 0x7F4; // int32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponNegev {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponGalilAR {
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
        public static class CEnvProjectedTexture {
            public const nint m_hTargetEntity = 0x790; // CHandle<CBaseEntity>
            public const nint m_bState = 0x794; // bool
            public const nint m_bAlwaysUpdate = 0x795; // bool
            public const nint m_flLightFOV = 0x798; // float32
            public const nint m_bEnableShadows = 0x79C; // bool
            public const nint m_bSimpleProjection = 0x79D; // bool
            public const nint m_bLightOnlyTarget = 0x79E; // bool
            public const nint m_bLightWorld = 0x79F; // bool
            public const nint m_bCameraSpace = 0x7A0; // bool
            public const nint m_flBrightnessScale = 0x7A4; // float32
            public const nint m_LightColor = 0x7A8; // Color
            public const nint m_flIntensity = 0x7AC; // float32
            public const nint m_flLinearAttenuation = 0x7B0; // float32
            public const nint m_flQuadraticAttenuation = 0x7B4; // float32
            public const nint m_bVolumetric = 0x7B8; // bool
            public const nint m_flNoiseStrength = 0x7BC; // float32
            public const nint m_flFlashlightTime = 0x7C0; // float32
            public const nint m_nNumPlanes = 0x7C4; // uint32
            public const nint m_flPlaneOffset = 0x7C8; // float32
            public const nint m_flVolumetricIntensity = 0x7CC; // float32
            public const nint m_flColorTransitionTime = 0x7D0; // float32
            public const nint m_flAmbient = 0x7D4; // float32
            public const nint m_SpotlightTextureName = 0x7D8; // char[512]
            public const nint m_nSpotlightTextureFrame = 0x9D8; // int32
            public const nint m_nShadowQuality = 0x9DC; // uint32
            public const nint m_flNearZ = 0x9E0; // float32
            public const nint m_flFarZ = 0x9E4; // float32
            public const nint m_flProjectionSize = 0x9E8; // float32
            public const nint m_flRotation = 0x9EC; // float32
            public const nint m_bFlipHorizontal = 0x9F0; // bool
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_prop_dynamic_override {
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CSceneListManager {
            public const nint m_hListManagers = 0x4E0; // CUtlVector<CHandle<CSceneListManager>>
            public const nint m_iszScenes = 0x4F8; // CUtlSymbolLarge[16]
            public const nint m_hScenes = 0x578; // CHandle<CBaseEntity>[16]
        }
        // Parent: CPhysConstraint
        // Field count: 1
        public static class CSplineConstraint {
            public const nint m_vAnchorOffsetRestore = 0x5A0; // Vector
        }
        // Parent: CPlayer_ViewModelServices
        // Field count: 0
        public static class CCSObserver_ViewModelServices {
        }
        // Parent: CDynamicProp
        // Field count: 0
        public static class CDynamicPropAlias_dynamic_prop {
        }
        // Parent: None
        // Field count: 4
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
        // Field count: 0
        public static class CPhysicsPropMultiplayer {
        }
        // Parent: CBaseToggle
        // Field count: 5
        public static class CBasePlatTrain {
            public const nint m_NoiseMoving = 0x810; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x818; // CUtlSymbolLarge
            public const nint m_volume = 0x828; // float32
            public const nint m_flTWidth = 0x82C; // float32
            public const nint m_flTLength = 0x830; // float32
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 0
        public static class CSimpleMarkupVolumeTagged {
        }
        // Parent: SpawnPoint
        // Field count: 0
        public static class CInfoPlayerTerrorist {
        }
        // Parent: CPhysHinge
        // Field count: 0
        public static class CPhysHingeAlias_phys_hinge_local {
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CTankTargetChange {
            public const nint m_newTarget = 0x4E0; // CVariantBase<CVariantDefaultAllocator>
            public const nint m_newTargetName = 0x4F0; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicCompare {
            public const nint m_flInValue = 0x4E0; // float32
            public const nint m_flCompareValue = 0x4E4; // float32
            public const nint m_OnLessThan = 0x4E8; // CEntityOutputTemplate<float32>
            public const nint m_OnEqualTo = 0x510; // CEntityOutputTemplate<float32>
            public const nint m_OnNotEqualTo = 0x538; // CEntityOutputTemplate<float32>
            public const nint m_OnGreaterThan = 0x560; // CEntityOutputTemplate<float32>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x40; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 7
        public static class CLogicRelay {
            public const nint m_OnTrigger = 0x4E0; // CEntityIOOutput
            public const nint m_OnSpawn = 0x508; // CEntityIOOutput
            public const nint m_bDisabled = 0x530; // bool
            public const nint m_bWaitForRefire = 0x531; // bool
            public const nint m_bTriggerOnce = 0x532; // bool
            public const nint m_bFastRetrigger = 0x533; // bool
            public const nint m_bPassthoughCaller = 0x534; // bool
        }
        // Parent: CPlayer_ItemServices
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x40; // bool
            public const nint m_bHasHelmet = 0x41; // bool
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CKeepUpright {
            public const nint m_worldGoalAxis = 0x4E8; // Vector
            public const nint m_localTestAxis = 0x4F4; // Vector
            public const nint m_nameAttach = 0x508; // CUtlSymbolLarge
            public const nint m_attachedObject = 0x510; // CHandle<CBaseEntity>
            public const nint m_angularLimit = 0x514; // float32
            public const nint m_bActive = 0x518; // bool
            public const nint m_bDampAllRotation = 0x519; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CModelPointEntity {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0x790; // CBuoyancyHelper
        }
        // Parent: CBaseEntity
        // Field count: 5
        public static class CFuncTimescale {
            public const nint m_flDesiredTimescale = 0x4E0; // float32
            public const nint m_flAcceleration = 0x4E4; // float32
            public const nint m_flMinBlendRate = 0x4E8; // float32
            public const nint m_flBlendDeltaMultiplier = 0x4EC; // float32
            public const nint m_isStarted = 0x4F0; // bool
        }
        // Parent: CBtNode
        // Field count: 14
        public static class CBtActionMoveTo {
            public const nint m_szDestinationInputKey = 0x60; // CUtlString
            public const nint m_szHidingSpotInputKey = 0x68; // CUtlString
            public const nint m_szThreatInputKey = 0x70; // CUtlString
            public const nint m_vecDestination = 0x78; // Vector
            public const nint m_bAutoLookAdjust = 0x84; // bool
            public const nint m_bComputePath = 0x85; // bool
            public const nint m_flDamagingAreasPenaltyCost = 0x88; // float32
            public const nint m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
            public const nint m_CheckHighPriorityItem = 0xA8; // CountdownTimer
            public const nint m_RepathTimer = 0xC0; // CountdownTimer
            public const nint m_flArrivalEpsilon = 0xD8; // float32
            public const nint m_flAdditionalArrivalEpsilon2D = 0xDC; // float32
            public const nint m_flHidingSpotCheckDistanceThreshold = 0xE0; // float32
            public const nint m_flNearestAreaDistanceThreshold = 0xE4; // float32
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
        public static class CTonemapController2 {
            public const nint m_flAutoExposureMin = 0x4E0; // float32
            public const nint m_flAutoExposureMax = 0x4E4; // float32
            public const nint m_flTonemapPercentTarget = 0x4E8; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x4EC; // float32
            public const nint m_flTonemapMinAvgLum = 0x4F0; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x4F4; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x4F8; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x4FC; // float32
        }
        // Parent: CRopeKeyframe
        // Field count: 0
        public static class CRopeKeyframeAlias_move_rope {
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CEnvInstructorVRHint {
            public const nint m_iszName = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x4E8; // CUtlSymbolLarge
            public const nint m_iTimeout = 0x4F0; // int32
            public const nint m_iszCaption = 0x4F8; // CUtlSymbolLarge
            public const nint m_iszStartSound = 0x500; // CUtlSymbolLarge
            public const nint m_iLayoutFileType = 0x508; // int32
            public const nint m_iszCustomLayoutFile = 0x510; // CUtlSymbolLarge
            public const nint m_iAttachType = 0x518; // int32
            public const nint m_flHeightOffset = 0x51C; // float32
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CWeaponXM1014 {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CPlatTrigger {
            public const nint m_pPlatform = 0x790; // CHandle<CFuncPlat>
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
        public static class CEnvWindShared {
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_iWindSeed = 0xC; // uint32
            public const nint m_iMinWind = 0x10; // uint16
            public const nint m_iMaxWind = 0x12; // uint16
            public const nint m_windRadius = 0x14; // int32
            public const nint m_iMinGust = 0x18; // uint16
            public const nint m_iMaxGust = 0x1A; // uint16
            public const nint m_flMinGustDelay = 0x1C; // float32
            public const nint m_flMaxGustDelay = 0x20; // float32
            public const nint m_flGustDuration = 0x24; // float32
            public const nint m_iGustDirChange = 0x28; // uint16
            public const nint m_location = 0x2C; // Vector
            public const nint m_iszGustSound = 0x38; // int32
            public const nint m_iWindDir = 0x3C; // int32
            public const nint m_flWindSpeed = 0x40; // float32
            public const nint m_currentWindVector = 0x44; // Vector
            public const nint m_CurrentSwayVector = 0x50; // Vector
            public const nint m_PrevSwayVector = 0x5C; // Vector
            public const nint m_iInitialWindDir = 0x68; // uint16
            public const nint m_flInitialWindSpeed = 0x6C; // float32
            public const nint m_OnGustStart = 0x70; // CEntityIOOutput
            public const nint m_OnGustEnd = 0x98; // CEntityIOOutput
            public const nint m_flVariationTime = 0xC0; // GameTime_t
            public const nint m_flSwayTime = 0xC4; // GameTime_t
            public const nint m_flSimTime = 0xC8; // GameTime_t
            public const nint m_flSwitchTime = 0xCC; // GameTime_t
            public const nint m_flAveWindSpeed = 0xD0; // float32
            public const nint m_bGusting = 0xD4; // bool
            public const nint m_flWindAngleVariation = 0xD8; // float32
            public const nint m_flWindSpeedVariation = 0xDC; // float32
            public const nint m_hEntOwner = 0xE0; // CHandle<CBaseEntity>
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CMolotovGrenade {
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CPointHurt {
            public const nint m_nDamage = 0x4E0; // int32
            public const nint m_bitsDamageType = 0x4E4; // DamageTypes_t
            public const nint m_flRadius = 0x4E8; // float32
            public const nint m_flDelay = 0x4EC; // float32
            public const nint m_strTarget = 0x4F0; // CUtlSymbolLarge
            public const nint m_pActivator = 0x4F8; // CHandle<CBaseEntity>
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
        public static class CPointValueRemapper {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_bUpdateOnClient = 0x4E1; // bool
            public const nint m_nInputType = 0x4E4; // ValueRemapperInputType_t
            public const nint m_iszRemapLineStartName = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszRemapLineEndName = 0x4F0; // CUtlSymbolLarge
            public const nint m_hRemapLineStart = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_hRemapLineEnd = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x500; // float32
            public const nint m_flDisengageDistance = 0x504; // float32
            public const nint m_flEngageDistance = 0x508; // float32
            public const nint m_bRequiresUseKey = 0x50C; // bool
            public const nint m_nOutputType = 0x510; // ValueRemapperOutputType_t
            public const nint m_iszOutputEntityName = 0x518; // CUtlSymbolLarge
            public const nint m_iszOutputEntity2Name = 0x520; // CUtlSymbolLarge
            public const nint m_iszOutputEntity3Name = 0x528; // CUtlSymbolLarge
            public const nint m_iszOutputEntity4Name = 0x530; // CUtlSymbolLarge
            public const nint m_hOutputEntities = 0x538; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            public const nint m_nHapticsType = 0x550; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x554; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x558; // float32
            public const nint m_flSnapValue = 0x55C; // float32
            public const nint m_flCurrentMomentum = 0x560; // float32
            public const nint m_nRatchetType = 0x564; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x568; // float32
            public const nint m_flInputOffset = 0x56C; // float32
            public const nint m_bEngaged = 0x570; // bool
            public const nint m_bFirstUpdate = 0x571; // bool
            public const nint m_flPreviousValue = 0x574; // float32
            public const nint m_flPreviousUpdateTickTime = 0x578; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x57C; // Vector
            public const nint m_hUsingPlayer = 0x588; // CHandle<CBasePlayerPawn>
            public const nint m_flCustomOutputValue = 0x58C; // float32
            public const nint m_iszSoundEngage = 0x590; // CUtlSymbolLarge
            public const nint m_iszSoundDisengage = 0x598; // CUtlSymbolLarge
            public const nint m_iszSoundReachedValueZero = 0x5A0; // CUtlSymbolLarge
            public const nint m_iszSoundReachedValueOne = 0x5A8; // CUtlSymbolLarge
            public const nint m_iszSoundMovingLoop = 0x5B0; // CUtlSymbolLarge
            public const nint m_Position = 0x5C0; // CEntityOutputTemplate<float32>
            public const nint m_PositionDelta = 0x5E8; // CEntityOutputTemplate<float32>
            public const nint m_OnReachedValueZero = 0x610; // CEntityIOOutput
            public const nint m_OnReachedValueOne = 0x638; // CEntityIOOutput
            public const nint m_OnReachedValueCustom = 0x660; // CEntityIOOutput
            public const nint m_OnEngage = 0x688; // CEntityIOOutput
            public const nint m_OnDisengage = 0x6B0; // CEntityIOOutput
        }
        // Parent: CLogicNPCCounter
        // Field count: 4
        public static class CLogicNPCCounterAABB {
            public const nint m_vDistanceOuterMins = 0x820; // Vector
            public const nint m_vDistanceOuterMaxs = 0x82C; // Vector
            public const nint m_vOuterMins = 0x838; // Vector
            public const nint m_vOuterMaxs = 0x844; // Vector
        }
        // Parent: CEnvSoundscapeTriggerable
        // Field count: 0
        public static class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        }
        // Parent: CLightEntity
        // Field count: 0
        public static class CLightOrthoEntity {
        }
        // Parent: CSoundOpvarSetPointBase
        // Field count: 24
        public static class CSoundOpvarSetPointEntity {
            public const nint m_OnEnter = 0x578; // CEntityIOOutput
            public const nint m_OnExit = 0x5A0; // CEntityIOOutput
            public const nint m_bAutoDisable = 0x5C8; // bool
            public const nint m_flDistanceMin = 0x60C; // float32
            public const nint m_flDistanceMax = 0x610; // float32
            public const nint m_flDistanceMapMin = 0x614; // float32
            public const nint m_flDistanceMapMax = 0x618; // float32
            public const nint m_flOcclusionRadius = 0x61C; // float32
            public const nint m_flOcclusionMin = 0x620; // float32
            public const nint m_flOcclusionMax = 0x624; // float32
            public const nint m_flValSetOnDisable = 0x628; // float32
            public const nint m_bSetValueOnDisable = 0x62C; // bool
            public const nint m_bReloading = 0x62D; // bool
            public const nint m_nSimulationMode = 0x630; // int32
            public const nint m_nVisibilitySamples = 0x634; // int32
            public const nint m_vDynamicProxyPoint = 0x638; // Vector
            public const nint m_flDynamicMaximumOcclusion = 0x644; // float32
            public const nint m_hDynamicEntity = 0x648; // CEntityHandle
            public const nint m_iszDynamicEntityName = 0x650; // CUtlSymbolLarge
            public const nint m_flPathingDistanceNormFactor = 0x658; // float32
            public const nint m_vPathingSourcePos = 0x65C; // Vector
            public const nint m_vPathingListenerPos = 0x668; // Vector
            public const nint m_vPathingDirection = 0x674; // Vector
            public const nint m_nPathingSourceIndex = 0x680; // int32
        }
        // Parent: CBaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class CSkyCamera {
            public const nint m_skyboxData = 0x4E0; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x570; // CUtlStringToken
            public const nint m_bUseAngles = 0x574; // bool
            public const nint m_pNext = 0x578; // CSkyCamera*
        }
        // Parent: CRulePointEntity
        // Field count: 4
        public static class CGameMoney {
            public const nint m_OnMoneySpent = 0x7A0; // CEntityIOOutput
            public const nint m_OnMoneySpentFail = 0x7C8; // CEntityIOOutput
            public const nint m_nMoney = 0x7F0; // int32
            public const nint m_strAwardText = 0x7F8; // CUtlString
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CLogicPlayerProxy {
            public const nint m_hPlayer = 0x4E0; // CHandle<CBaseEntity>
            public const nint m_PlayerHasAmmo = 0x4E8; // CEntityIOOutput
            public const nint m_PlayerHasNoAmmo = 0x510; // CEntityIOOutput
            public const nint m_PlayerDied = 0x538; // CEntityIOOutput
            public const nint m_RequestedPlayerHealth = 0x560; // CEntityOutputTemplate<int32>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
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
        // Parent: CPointEntity
        // Field count: 3
        public static class CPhysImpact {
            public const nint m_damage = 0x4E0; // float32
            public const nint m_distance = 0x4E4; // float32
            public const nint m_directionEntityName = 0x4E8; // CUtlSymbolLarge
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
        public static class CEnvCombinedLightProbeVolume {
            public const nint m_Entity_Color = 0x1540; // Color
            public const nint m_Entity_flBrightness = 0x1544; // float32
            public const nint m_Entity_hCubemapTexture = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x1550; // bool
            public const nint m_Entity_hLightProbeTexture = 0x1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1578; // Vector
            public const nint m_Entity_vBoxMaxs = 0x1584; // Vector
            public const nint m_Entity_bMoveable = 0x1590; // bool
            public const nint m_Entity_nHandshake = 0x1594; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x1598; // int32
            public const nint m_Entity_nPriority = 0x159C; // int32
            public const nint m_Entity_bStartDisabled = 0x15A0; // bool
            public const nint m_Entity_flEdgeFadeDist = 0x15A4; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x15A8; // Vector
            public const nint m_Entity_nLightProbeSizeX = 0x15B4; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x15B8; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x15BC; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x15C0; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x15C4; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x15C8; // int32
            public const nint m_Entity_bEnabled = 0x15E1; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM249 {
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
        public static class CEnvParticleGlow {
            public const nint m_flAlphaScale = 0xD08; // float32
            public const nint m_flRadiusScale = 0xD0C; // float32
            public const nint m_flSelfIllumScale = 0xD10; // float32
            public const nint m_ColorTint = 0xD14; // Color
            public const nint m_hTextureOverride = 0xD18; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncVehicleClip {
        }
        // Parent: CSoundAreaEntityBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class CSoundAreaEntitySphere {
            public const nint m_flRadius = 0x500; // float32
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
        public static class CFuncMonitor {
            public const nint m_targetCamera = 0x7B0; // CUtlString
            public const nint m_nResolutionEnum = 0x7B8; // int32
            public const nint m_bRenderShadows = 0x7BC; // bool
            public const nint m_bUseUniqueColorTarget = 0x7BD; // bool
            public const nint m_brushModelName = 0x7C0; // CUtlString
            public const nint m_hTargetCamera = 0x7C8; // CHandle<CBaseEntity>
            public const nint m_bEnabled = 0x7CC; // bool
            public const nint m_bDraw3DSkybox = 0x7CD; // bool
            public const nint m_bStartEnabled = 0x7CE; // bool
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CEnvFunnel {
        }
        // Parent: None
        // Field count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: CCSGameModeRules
        // Field count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: CPointEntity
        // Field count: 16
        public static class CPointAngularVelocitySensor {
            public const nint m_hTargetEntity = 0x4E0; // CHandle<CBaseEntity>
            public const nint m_flThreshold = 0x4E4; // float32
            public const nint m_nLastCompareResult = 0x4E8; // int32
            public const nint m_nLastFireResult = 0x4EC; // int32
            public const nint m_flFireTime = 0x4F0; // GameTime_t
            public const nint m_flFireInterval = 0x4F4; // float32
            public const nint m_flLastAngVelocity = 0x4F8; // float32
            public const nint m_lastOrientation = 0x4FC; // QAngle
            public const nint m_vecAxis = 0x508; // Vector
            public const nint m_bUseHelper = 0x514; // bool
            public const nint m_AngularVelocity = 0x518; // CEntityOutputTemplate<float32>
            public const nint m_OnLessThan = 0x540; // CEntityIOOutput
            public const nint m_OnLessThanOrEqualTo = 0x568; // CEntityIOOutput
            public const nint m_OnGreaterThan = 0x590; // CEntityIOOutput
            public const nint m_OnGreaterThanOrEqualTo = 0x5B8; // CEntityIOOutput
            public const nint m_OnEqualTo = 0x5E0; // CEntityIOOutput
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsIncGrenade (bool)
        public static class CMolotovProjectile {
            public const nint m_bIsIncGrenade = 0xB50; // bool
            public const nint m_bDetonated = 0xB5C; // bool
            public const nint m_stillTimer = 0xB60; // IntervalTimer
            public const nint m_bHasBouncedOffPlayer = 0xC40; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CHostageRescueZoneShim {
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CPointPulse {
        }
        // Parent: CPointEntity
        // Field count: 24
        public static class CEnvInstructorHint {
            public const nint m_iszName = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszReplace_Key = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszHintTargetEntity = 0x4F0; // CUtlSymbolLarge
            public const nint m_iTimeout = 0x4F8; // int32
            public const nint m_iDisplayLimit = 0x4FC; // int32
            public const nint m_iszIcon_Onscreen = 0x500; // CUtlSymbolLarge
            public const nint m_iszIcon_Offscreen = 0x508; // CUtlSymbolLarge
            public const nint m_iszCaption = 0x510; // CUtlSymbolLarge
            public const nint m_iszActivatorCaption = 0x518; // CUtlSymbolLarge
            public const nint m_Color = 0x520; // Color
            public const nint m_fIconOffset = 0x524; // float32
            public const nint m_fRange = 0x528; // float32
            public const nint m_iPulseOption = 0x52C; // uint8
            public const nint m_iAlphaOption = 0x52D; // uint8
            public const nint m_iShakeOption = 0x52E; // uint8
            public const nint m_bStatic = 0x52F; // bool
            public const nint m_bNoOffscreen = 0x530; // bool
            public const nint m_bForceCaption = 0x531; // bool
            public const nint m_iInstanceType = 0x534; // int32
            public const nint m_bSuppressRest = 0x538; // bool
            public const nint m_iszBinding = 0x540; // CUtlSymbolLarge
            public const nint m_bAllowNoDrawTarget = 0x548; // bool
            public const nint m_bAutoStart = 0x549; // bool
            public const nint m_bLocalPlayerOnly = 0x54A; // bool
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CEnvTracer {
            public const nint m_vecEnd = 0x4E0; // Vector
            public const nint m_flDelay = 0x4EC; // float32
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CInfoGameEventProxy {
            public const nint m_iszEventName = 0x4E0; // CUtlSymbolLarge
            public const nint m_flRange = 0x4E8; // float32
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
        public static class CPointCamera {
            public const nint m_FOV = 0x4E0; // float32
            public const nint m_Resolution = 0x4E4; // float32
            public const nint m_bFogEnable = 0x4E8; // bool
            public const nint m_FogColor = 0x4E9; // Color
            public const nint m_flFogStart = 0x4F0; // float32
            public const nint m_flFogEnd = 0x4F4; // float32
            public const nint m_flFogMaxDensity = 0x4F8; // float32
            public const nint m_bActive = 0x4FC; // bool
            public const nint m_bUseScreenAspectRatio = 0x4FD; // bool
            public const nint m_flAspectRatio = 0x500; // float32
            public const nint m_bNoSky = 0x504; // bool
            public const nint m_fBrightness = 0x508; // float32
            public const nint m_flZFar = 0x50C; // float32
            public const nint m_flZNear = 0x510; // float32
            public const nint m_bCanHLTVUse = 0x514; // bool
            public const nint m_bAlignWithParent = 0x515; // bool
            public const nint m_bDofEnabled = 0x516; // bool
            public const nint m_flDofNearBlurry = 0x518; // float32
            public const nint m_flDofNearCrisp = 0x51C; // float32
            public const nint m_flDofFarCrisp = 0x520; // float32
            public const nint m_flDofFarBlurry = 0x524; // float32
            public const nint m_flDofTiltToGround = 0x528; // float32
            public const nint m_TargetFOV = 0x52C; // float32
            public const nint m_DegreesPerSecond = 0x530; // float32
            public const nint m_bIsOn = 0x534; // bool
            public const nint m_pNext = 0x538; // CPointCamera*
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_hModel (HModelStrong)
        // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
        // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
        // NetworkVarNames: m_nIdealMotionType (int8)
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
            public const nint m_MeshGroupMask = 0x198; // uint64
            public const nint m_nIdealMotionType = 0x21A; // int8
            public const nint m_nForceLOD = 0x21B; // int8
            public const nint m_nClothUpdateFlags = 0x21C; // int8
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
        public static class CFuncLadder {
            public const nint m_vecLadderDir = 0x790; // Vector
            public const nint m_Dismounts = 0x7A0; // CUtlVector<CHandle<CInfoLadderDismount>>
            public const nint m_vecLocalTop = 0x7B8; // Vector
            public const nint m_vecPlayerMountPositionTop = 0x7C4; // Vector
            public const nint m_vecPlayerMountPositionBottom = 0x7D0; // Vector
            public const nint m_flAutoRideSpeed = 0x7DC; // float32
            public const nint m_bDisabled = 0x7E0; // bool
            public const nint m_bFakeLadder = 0x7E1; // bool
            public const nint m_bHasSlack = 0x7E2; // bool
            public const nint m_surfacePropName = 0x7E8; // CUtlSymbolLarge
            public const nint m_OnPlayerGotOnLadder = 0x7F0; // CEntityIOOutput
            public const nint m_OnPlayerGotOffLadder = 0x818; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 8
        public static class CPathKeyFrame {
            public const nint m_Origin = 0x4E0; // Vector
            public const nint m_Angles = 0x4EC; // QAngle
            public const nint m_qAngle = 0x500; // Quaternion
            public const nint m_iNextKey = 0x510; // CUtlSymbolLarge
            public const nint m_flNextTime = 0x518; // float32
            public const nint m_pNextKey = 0x520; // CPathKeyFrame*
            public const nint m_pPrevKey = 0x528; // CPathKeyFrame*
            public const nint m_flMoveSpeed = 0x530; // float32
        }
        // Parent: CBaseModelEntity
        // Field count: 3
        public static class CFuncInteractionLayerClip {
            public const nint m_bDisabled = 0x790; // bool
            public const nint m_iszInteractsAs = 0x798; // CUtlSymbolLarge
            public const nint m_iszInteractsWith = 0x7A0; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: CGameRules
        // Field count: 0
        public static class CMultiplayRules {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponRevolver {
        }
        // Parent: CDynamicProp
        // Field count: 1
        public static class COrnamentProp {
            public const nint m_initialOwner = 0xC58; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Field count: 1
        public static class CLogicGameEvent {
            public const nint m_iszEventName = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 2
        public static class CEnvMuzzleFlash {
            public const nint m_flScale = 0x4E0; // float32
            public const nint m_iszParentAttachment = 0x4E8; // CUtlSymbolLarge
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
        public static class CPlayerSprayDecal {
            public const nint m_nUniqueID = 0x790; // int32
            public const nint m_unAccountID = 0x794; // uint32
            public const nint m_unTraceID = 0x798; // uint32
            public const nint m_rtGcTime = 0x79C; // uint32
            public const nint m_vecEndPos = 0x7A0; // Vector
            public const nint m_vecStart = 0x7AC; // Vector
            public const nint m_vecLeft = 0x7B8; // Vector
            public const nint m_vecNormal = 0x7C4; // Vector
            public const nint m_nPlayer = 0x7D0; // int32
            public const nint m_nEntity = 0x7D4; // int32
            public const nint m_nHitbox = 0x7D8; // int32
            public const nint m_flCreationTime = 0x7DC; // float32
            public const nint m_nTintID = 0x7E0; // int32
            public const nint m_nVersion = 0x7E4; // uint8
            public const nint m_ubSignature = 0x7E5; // uint8[128]
        }
        // Parent: CBaseTrigger
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_bBombPlantedHere (bool)
        public static class CBombTarget {
            public const nint m_OnBombExplode = 0x960; // CEntityIOOutput
            public const nint m_OnBombPlanted = 0x988; // CEntityIOOutput
            public const nint m_OnBombDefused = 0x9B0; // CEntityIOOutput
            public const nint m_bIsBombSiteB = 0x9D8; // bool
            public const nint m_bIsHeistBombTarget = 0x9D9; // bool
            public const nint m_bBombPlantedHere = 0x9DA; // bool
            public const nint m_szMountTarget = 0x9E0; // CUtlSymbolLarge
            public const nint m_hInstructorHint = 0x9E8; // CHandle<CBaseEntity>
            public const nint m_nBombSiteDesignation = 0x9EC; // int32
        }
        // Parent: CBaseEntity
        // Field count: 8
        public static class CPhysicsSpring {
            public const nint m_flFrequency = 0x4E8; // float32
            public const nint m_flDampingRatio = 0x4EC; // float32
            public const nint m_flRestLength = 0x4F0; // float32
            public const nint m_nameAttachStart = 0x4F8; // CUtlSymbolLarge
            public const nint m_nameAttachEnd = 0x500; // CUtlSymbolLarge
            public const nint m_start = 0x508; // Vector
            public const nint m_end = 0x514; // Vector
            public const nint m_teleportTick = 0x520; // uint32
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
        public static class CEnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture = 0x14C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x14C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x14D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x14E0; // Vector
            public const nint m_Entity_vBoxMaxs = 0x14EC; // Vector
            public const nint m_Entity_bMoveable = 0x14F8; // bool
            public const nint m_Entity_nHandshake = 0x14FC; // int32
            public const nint m_Entity_nPriority = 0x1500; // int32
            public const nint m_Entity_bStartDisabled = 0x1504; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x1508; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x150C; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1510; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x1514; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x1518; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x151C; // int32
            public const nint m_Entity_bEnabled = 0x1529; // bool
        }
        // Parent: CCSGameModeRules
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // CNetworkUtlVectorBase<CUtlString>
        }
        // Parent: CTriggerPush
        // Field count: 1
        public static class CScriptTriggerPush {
            public const nint m_vExtent = 0x998; // Vector
        }
        // Parent: CBaseEntity
        // Field count: 1
        public static class CEnvEntityIgniter {
            public const nint m_flLifetime = 0x4E0; // float32
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CFuncWall {
            public const nint m_nState = 0x790; // int32
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4E0; // bool
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
        public static class CDamageRecord {
            public const nint m_PlayerDamager = 0x28; // CHandle<CCSPlayerPawn>
            public const nint m_PlayerRecipient = 0x2C; // CHandle<CCSPlayerPawn>
            public const nint m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
            public const nint m_szPlayerDamagerName = 0x38; // CUtlString
            public const nint m_szPlayerRecipientName = 0x40; // CUtlString
            public const nint m_DamagerXuid = 0x48; // uint64
            public const nint m_RecipientXuid = 0x50; // uint64
            public const nint m_iBulletsDamage = 0x58; // int32
            public const nint m_iDamage = 0x5C; // int32
            public const nint m_iActualHealthRemoved = 0x60; // int32
            public const nint m_iNumHits = 0x64; // int32
            public const nint m_iLastBulletUpdate = 0x68; // int32
            public const nint m_bIsOtherEnemy = 0x6C; // bool
            public const nint m_killType = 0x6D; // EKillTypes_t
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CLogicAutosave {
            public const nint m_bForceNewLevelUnit = 0x4E0; // bool
            public const nint m_minHitPoints = 0x4E4; // int32
            public const nint m_minHitPointsToCommit = 0x4E8; // int32
        }
        // Parent: CPlayerControllerComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: CEntityComponent
        // Field count: 5
        public static class CRenderComponent {
            public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
            public const nint m_bIsRenderingWithViewModels = 0x50; // bool
            public const nint m_nSplitscreenFlags = 0x54; // uint32
            public const nint m_bEnableRendering = 0x60; // bool
            public const nint m_bInterpolationReadyToDraw = 0xB0; // bool
        }
        // Parent: CEnvSoundscape
        // Field count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x580; // CUtlSymbolLarge
        }
        // Parent: CSoundEventEntity
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
        public static class CSoundEventPathCornerEntity {
            public const nint m_iszPathCorner = 0x598; // CUtlSymbolLarge
            public const nint m_iCountMax = 0x5A0; // int32
            public const nint m_flDistanceMax = 0x5A4; // float32
            public const nint m_flDistMaxSqr = 0x5A8; // float32
            public const nint m_flDotProductMax = 0x5AC; // float32
            public const nint m_bPlaying = 0x5B0; // bool
            public const nint m_vecCornerPairsNetworked = 0x5D8; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
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
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x38; // CNetworkVarChainer
            public const nint m_Color = 0x75; // Color
            public const nint m_SecondaryColor = 0x79; // Color
            public const nint m_flBrightness = 0x80; // float32
            public const nint m_flBrightnessScale = 0x84; // float32
            public const nint m_flBrightnessMult = 0x88; // float32
            public const nint m_flRange = 0x8C; // float32
            public const nint m_flFalloff = 0x90; // float32
            public const nint m_flAttenuation0 = 0x94; // float32
            public const nint m_flAttenuation1 = 0x98; // float32
            public const nint m_flAttenuation2 = 0x9C; // float32
            public const nint m_flTheta = 0xA0; // float32
            public const nint m_flPhi = 0xA4; // float32
            public const nint m_hLightCookie = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xB0; // int32
            public const nint m_nCastShadows = 0xB4; // int32
            public const nint m_nShadowWidth = 0xB8; // int32
            public const nint m_nShadowHeight = 0xBC; // int32
            public const nint m_bRenderDiffuse = 0xC0; // bool
            public const nint m_nRenderSpecular = 0xC4; // int32
            public const nint m_bRenderTransmissive = 0xC8; // bool
            public const nint m_flOrthoLightWidth = 0xCC; // float32
            public const nint m_flOrthoLightHeight = 0xD0; // float32
            public const nint m_nStyle = 0xD4; // int32
            public const nint m_Pattern = 0xD8; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0xE0; // int32
            public const nint m_flShadowCascadeCrossFade = 0xE4; // float32
            public const nint m_flShadowCascadeDistanceFade = 0xE8; // float32
            public const nint m_flShadowCascadeDistance0 = 0xEC; // float32
            public const nint m_flShadowCascadeDistance1 = 0xF0; // float32
            public const nint m_flShadowCascadeDistance2 = 0xF4; // float32
            public const nint m_flShadowCascadeDistance3 = 0xF8; // float32
            public const nint m_nShadowCascadeResolution0 = 0xFC; // int32
            public const nint m_nShadowCascadeResolution1 = 0x100; // int32
            public const nint m_nShadowCascadeResolution2 = 0x104; // int32
            public const nint m_nShadowCascadeResolution3 = 0x108; // int32
            public const nint m_bUsesBakedShadowing = 0x10C; // bool
            public const nint m_nShadowPriority = 0x110; // int32
            public const nint m_nBakedShadowIndex = 0x114; // int32
            public const nint m_bRenderToCubemaps = 0x118; // bool
            public const nint m_nDirectLight = 0x11C; // int32
            public const nint m_nIndirectLight = 0x120; // int32
            public const nint m_flFadeMinDist = 0x124; // float32
            public const nint m_flFadeMaxDist = 0x128; // float32
            public const nint m_flShadowFadeMinDist = 0x12C; // float32
            public const nint m_flShadowFadeMaxDist = 0x130; // float32
            public const nint m_bEnabled = 0x134; // bool
            public const nint m_bFlicker = 0x135; // bool
            public const nint m_bPrecomputedFieldsValid = 0x136; // bool
            public const nint m_vPrecomputedBoundsMins = 0x138; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x144; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x150; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x15C; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x168; // Vector
            public const nint m_flPrecomputedMaxRange = 0x174; // float32
            public const nint m_nFogLightingMode = 0x178; // int32
            public const nint m_flFogContributionStength = 0x17C; // float32
            public const nint m_flNearClipPlane = 0x180; // float32
            public const nint m_SkyColor = 0x184; // Color
            public const nint m_flSkyIntensity = 0x188; // float32
            public const nint m_SkyAmbientBounce = 0x18C; // Color
            public const nint m_bUseSecondaryColor = 0x190; // bool
            public const nint m_bMixedShadows = 0x191; // bool
            public const nint m_flLightStyleStartTime = 0x194; // GameTime_t
            public const nint m_flCapsuleLength = 0x198; // float32
            public const nint m_flMinRoughness = 0x19C; // float32
            public const nint m_bPvsModifyEntity = 0x1B0; // bool
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 11
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
        public static class CSmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0xB68; // int32
            public const nint m_bDidSmokeEffect = 0xB6C; // bool
            public const nint m_nRandomSeed = 0xB70; // int32
            public const nint m_vSmokeColor = 0xB74; // Vector
            public const nint m_vSmokeDetonationPos = 0xB80; // Vector
            public const nint m_VoxelFrameData = 0xB90; // CNetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0xBA8; // int32
            public const nint m_nVoxelUpdate = 0xBAC; // int32
            public const nint m_flLastBounce = 0xBB0; // GameTime_t
            public const nint m_fllastSimulationTime = 0xBB4; // GameTime_t
            public const nint m_bExplodeFromInferno = 0x2E38; // bool
        }
        // Parent: CTriggerMultiple
        // Field count: 1
        public static class CScriptTriggerMultiple {
            public const nint m_vExtent = 0x988; // Vector
        }
        // Parent: CSoundOpvarSetPointEntity
        // Field count: 5
        public static class CSoundOpvarSetAutoRoomEntity {
            public const nint m_traceResults = 0x688; // CUtlVector<SoundOpvarTraceResult_t>
            public const nint m_doorwayPairs = 0x6A0; // CUtlVector<AutoRoomDoorwayPairs_t>
            public const nint m_flSize = 0x6B8; // float32
            public const nint m_flHeightTolerance = 0x6BC; // float32
            public const nint m_flSizeSqr = 0x6C0; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterDamageType {
            public const nint m_iDamageType = 0x538; // int32
        }
        // Parent: CBot
        // Field count: 139
        public static class CCSBot {
            public const nint m_eyePosition = 0x108; // Vector
            public const nint m_name = 0x114; // char[64]
            public const nint m_combatRange = 0x154; // float32
            public const nint m_isRogue = 0x158; // bool
            public const nint m_rogueTimer = 0x160; // CountdownTimer
            public const nint m_diedLastRound = 0x17C; // bool
            public const nint m_safeTime = 0x180; // float32
            public const nint m_wasSafe = 0x184; // bool
            public const nint m_blindFire = 0x18C; // bool
            public const nint m_surpriseTimer = 0x190; // CountdownTimer
            public const nint m_bAllowActive = 0x1A8; // bool
            public const nint m_isFollowing = 0x1A9; // bool
            public const nint m_leader = 0x1AC; // CHandle<CCSPlayerPawn>
            public const nint m_followTimestamp = 0x1B0; // float32
            public const nint m_allowAutoFollowTime = 0x1B4; // float32
            public const nint m_hurryTimer = 0x1B8; // CountdownTimer
            public const nint m_alertTimer = 0x1D0; // CountdownTimer
            public const nint m_sneakTimer = 0x1E8; // CountdownTimer
            public const nint m_panicTimer = 0x200; // CountdownTimer
            public const nint m_stateTimestamp = 0x4D0; // float32
            public const nint m_isAttacking = 0x4D4; // bool
            public const nint m_isOpeningDoor = 0x4D5; // bool
            public const nint m_taskEntity = 0x4DC; // CHandle<CBaseEntity>
            public const nint m_goalPosition = 0x4EC; // Vector
            public const nint m_goalEntity = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_avoid = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_avoidTimestamp = 0x500; // float32
            public const nint m_isStopping = 0x504; // bool
            public const nint m_hasVisitedEnemySpawn = 0x505; // bool
            public const nint m_stillTimer = 0x508; // IntervalTimer
            public const nint m_bEyeAnglesUnderPathFinderControl = 0x518; // bool
            public const nint m_pathIndex = 0x5610; // int32
            public const nint m_areaEnteredTimestamp = 0x5614; // GameTime_t
            public const nint m_repathTimer = 0x5618; // CountdownTimer
            public const nint m_avoidFriendTimer = 0x5630; // CountdownTimer
            public const nint m_isFriendInTheWay = 0x5648; // bool
            public const nint m_politeTimer = 0x5650; // CountdownTimer
            public const nint m_isWaitingBehindFriend = 0x5668; // bool
            public const nint m_pathLadderEnd = 0x5694; // float32
            public const nint m_mustRunTimer = 0x56E0; // CountdownTimer
            public const nint m_waitTimer = 0x56F8; // CountdownTimer
            public const nint m_updateTravelDistanceTimer = 0x5710; // CountdownTimer
            public const nint m_playerTravelDistance = 0x5728; // float32[64]
            public const nint m_travelDistancePhase = 0x5828; // uint8
            public const nint m_hostageEscortCount = 0x59C0; // uint8
            public const nint m_hostageEscortCountTimestamp = 0x59C4; // float32
            public const nint m_desiredTeam = 0x59C8; // int32
            public const nint m_hasJoined = 0x59CC; // bool
            public const nint m_isWaitingForHostage = 0x59CD; // bool
            public const nint m_inhibitWaitingForHostageTimer = 0x59D0; // CountdownTimer
            public const nint m_waitForHostageTimer = 0x59E8; // CountdownTimer
            public const nint m_noisePosition = 0x5A00; // Vector
            public const nint m_noiseTravelDistance = 0x5A0C; // float32
            public const nint m_noiseTimestamp = 0x5A10; // float32
            public const nint m_noiseSource = 0x5A18; // CCSPlayerPawn*
            public const nint m_noiseBendTimer = 0x5A30; // CountdownTimer
            public const nint m_bentNoisePosition = 0x5A48; // Vector
            public const nint m_bendNoisePositionValid = 0x5A54; // bool
            public const nint m_lookAroundStateTimestamp = 0x5A58; // float32
            public const nint m_lookAheadAngle = 0x5A5C; // float32
            public const nint m_forwardAngle = 0x5A60; // float32
            public const nint m_inhibitLookAroundTimestamp = 0x5A64; // float32
            public const nint m_lookAtSpot = 0x5A6C; // Vector
            public const nint m_lookAtSpotDuration = 0x5A7C; // float32
            public const nint m_lookAtSpotTimestamp = 0x5A80; // float32
            public const nint m_lookAtSpotAngleTolerance = 0x5A84; // float32
            public const nint m_lookAtSpotClearIfClose = 0x5A88; // bool
            public const nint m_lookAtSpotAttack = 0x5A89; // bool
            public const nint m_lookAtDesc = 0x5A90; // char*
            public const nint m_peripheralTimestamp = 0x5A98; // float32
            public const nint m_approachPointCount = 0x5C20; // uint8
            public const nint m_approachPointViewPosition = 0x5C24; // Vector
            public const nint m_viewSteadyTimer = 0x5C30; // IntervalTimer
            public const nint m_tossGrenadeTimer = 0x5C48; // CountdownTimer
            public const nint m_isAvoidingGrenade = 0x5C68; // CountdownTimer
            public const nint m_spotCheckTimestamp = 0x5C88; // float32
            public const nint m_checkedHidingSpotCount = 0x6090; // int32
            public const nint m_lookPitch = 0x6094; // float32
            public const nint m_lookPitchVel = 0x6098; // float32
            public const nint m_lookYaw = 0x609C; // float32
            public const nint m_lookYawVel = 0x60A0; // float32
            public const nint m_targetSpot = 0x60A4; // Vector
            public const nint m_targetSpotVelocity = 0x60B0; // Vector
            public const nint m_targetSpotPredicted = 0x60BC; // Vector
            public const nint m_aimError = 0x60C8; // QAngle
            public const nint m_aimGoal = 0x60D4; // QAngle
            public const nint m_targetSpotTime = 0x60E0; // GameTime_t
            public const nint m_aimFocus = 0x60E4; // float32
            public const nint m_aimFocusInterval = 0x60E8; // float32
            public const nint m_aimFocusNextUpdate = 0x60EC; // GameTime_t
            public const nint m_ignoreEnemiesTimer = 0x60F8; // CountdownTimer
            public const nint m_enemy = 0x6110; // CHandle<CCSPlayerPawn>
            public const nint m_isEnemyVisible = 0x6114; // bool
            public const nint m_visibleEnemyParts = 0x6115; // uint8
            public const nint m_lastEnemyPosition = 0x6118; // Vector
            public const nint m_lastSawEnemyTimestamp = 0x6124; // float32
            public const nint m_firstSawEnemyTimestamp = 0x6128; // float32
            public const nint m_currentEnemyAcquireTimestamp = 0x612C; // float32
            public const nint m_enemyDeathTimestamp = 0x6130; // float32
            public const nint m_friendDeathTimestamp = 0x6134; // float32
            public const nint m_isLastEnemyDead = 0x6138; // bool
            public const nint m_nearbyEnemyCount = 0x613C; // int32
            public const nint m_bomber = 0x6348; // CHandle<CCSPlayerPawn>
            public const nint m_nearbyFriendCount = 0x634C; // int32
            public const nint m_closestVisibleFriend = 0x6350; // CHandle<CCSPlayerPawn>
            public const nint m_closestVisibleHumanFriend = 0x6354; // CHandle<CCSPlayerPawn>
            public const nint m_attentionInterval = 0x6358; // IntervalTimer
            public const nint m_attacker = 0x6368; // CHandle<CCSPlayerPawn>
            public const nint m_attackedTimestamp = 0x636C; // float32
            public const nint m_burnedByFlamesTimer = 0x6370; // IntervalTimer
            public const nint m_lastVictimID = 0x6380; // int32
            public const nint m_isAimingAtEnemy = 0x6384; // bool
            public const nint m_isRapidFiring = 0x6385; // bool
            public const nint m_equipTimer = 0x6388; // IntervalTimer
            public const nint m_zoomTimer = 0x6398; // CountdownTimer
            public const nint m_fireWeaponTimestamp = 0x63B0; // GameTime_t
            public const nint m_lookForWeaponsOnGroundTimer = 0x63B8; // CountdownTimer
            public const nint m_bIsSleeping = 0x63D0; // bool
            public const nint m_isEnemySniperVisible = 0x63D1; // bool
            public const nint m_sawEnemySniperTimer = 0x63D8; // CountdownTimer
            public const nint m_enemyQueueIndex = 0x6490; // uint8
            public const nint m_enemyQueueCount = 0x6491; // uint8
            public const nint m_enemyQueueAttendIndex = 0x6492; // uint8
            public const nint m_isStuck = 0x6493; // bool
            public const nint m_stuckTimestamp = 0x6494; // GameTime_t
            public const nint m_stuckSpot = 0x6498; // Vector
            public const nint m_wiggleTimer = 0x64A8; // CountdownTimer
            public const nint m_stuckJumpTimer = 0x64C0; // CountdownTimer
            public const nint m_nextCleanupCheckTimestamp = 0x64D8; // GameTime_t
            public const nint m_avgVel = 0x64DC; // float32[10]
            public const nint m_avgVelIndex = 0x6504; // int32
            public const nint m_avgVelCount = 0x6508; // int32
            public const nint m_lastOrigin = 0x650C; // Vector
            public const nint m_lastRadioRecievedTimestamp = 0x651C; // float32
            public const nint m_lastRadioSentTimestamp = 0x6520; // float32
            public const nint m_radioSubject = 0x6524; // CHandle<CCSPlayerPawn>
            public const nint m_radioPosition = 0x6528; // Vector
            public const nint m_voiceEndTimestamp = 0x6534; // float32
            public const nint m_lastValidReactionQueueFrame = 0x6540; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 7
        public static class CPhysMotor {
            public const nint m_nameAttach = 0x4E0; // CUtlSymbolLarge
            public const nint m_hAttachedObject = 0x4E8; // CHandle<CBaseEntity>
            public const nint m_spinUp = 0x4EC; // float32
            public const nint m_additionalAcceleration = 0x4F0; // float32
            public const nint m_angularAcceleration = 0x4F4; // float32
            public const nint m_lastTime = 0x4F8; // GameTime_t
            public const nint m_motor = 0x510; // CMotorController
        }
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class CSoundAreaEntityBase {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_iszSoundAreaType = 0x4E8; // CUtlSymbolLarge
            public const nint m_vPos = 0x4F0; // Vector
        }
        // Parent: CPlayer_UseServices
        // Field count: 3
        public static class CCSPlayer_UseServices {
            public const nint m_hLastKnownUseEntity = 0x40; // CHandle<CBaseEntity>
            public const nint m_flLastUseTimeStamp = 0x44; // GameTime_t
            public const nint m_flTimeLastUsedWindow = 0x48; // GameTime_t
        }
        // Parent: CCSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamSelectCharacterPosition {
        }
        // Parent: CItem
        // Field count: 0
        public static class CItemKevlar {
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerHurt {
            public const nint m_flOriginalDamage = 0x960; // float32
            public const nint m_flDamage = 0x964; // float32
            public const nint m_flDamageCap = 0x968; // float32
            public const nint m_flLastDmgTime = 0x96C; // GameTime_t
            public const nint m_flForgivenessDelay = 0x970; // float32
            public const nint m_bitsDamageInflict = 0x974; // DamageTypes_t
            public const nint m_damageModel = 0x978; // int32
            public const nint m_bNoDmgForce = 0x97C; // bool
            public const nint m_vDamageForce = 0x980; // Vector
            public const nint m_thinkAlways = 0x98C; // bool
            public const nint m_hurtThinkPeriod = 0x990; // float32
            public const nint m_OnHurt = 0x998; // CEntityIOOutput
            public const nint m_OnHurtPlayer = 0x9C0; // CEntityIOOutput
            public const nint m_hurtEntities = 0x9E8; // CUtlVector<CHandle<CBaseEntity>>
        }
        // Parent: CLogicalEntity
        // Field count: 13
        public static class CPhysConstraint {
            public const nint m_nameAttach1 = 0x4E8; // CUtlSymbolLarge
            public const nint m_nameAttach2 = 0x4F0; // CUtlSymbolLarge
            public const nint m_hAttach1 = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_hAttach2 = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_nameAttachment1 = 0x500; // CUtlSymbolLarge
            public const nint m_nameAttachment2 = 0x508; // CUtlSymbolLarge
            public const nint m_breakSound = 0x510; // CUtlSymbolLarge
            public const nint m_forceLimit = 0x518; // float32
            public const nint m_torqueLimit = 0x51C; // float32
            public const nint m_teleportTick = 0x520; // uint32
            public const nint m_minTeleportDistance = 0x524; // float32
            public const nint m_bSnapObjectPositions = 0x528; // bool
            public const nint m_OnBreak = 0x530; // CEntityIOOutput
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
        public static class CMapVetoPickController {
            public const nint m_bPlayedIntroVcd = 0x4E0; // bool
            public const nint m_bNeedToPlayFiveSecondsRemaining = 0x4E1; // bool
            public const nint m_dblPreMatchDraftSequenceTime = 0x500; // float64
            public const nint m_bPreMatchDraftStateChanged = 0x508; // bool
            public const nint m_nDraftType = 0x50C; // int32
            public const nint m_nTeamWinningCoinToss = 0x510; // int32
            public const nint m_nTeamWithFirstChoice = 0x514; // int32[64]
            public const nint m_nVoteMapIdsList = 0x614; // int32[7]
            public const nint m_nAccountIDs = 0x630; // int32[64]
            public const nint m_nMapId0 = 0x730; // int32[64]
            public const nint m_nMapId1 = 0x830; // int32[64]
            public const nint m_nMapId2 = 0x930; // int32[64]
            public const nint m_nMapId3 = 0xA30; // int32[64]
            public const nint m_nMapId4 = 0xB30; // int32[64]
            public const nint m_nMapId5 = 0xC30; // int32[64]
            public const nint m_nStartingSide0 = 0xD30; // int32[64]
            public const nint m_nCurrentPhase = 0xE30; // int32
            public const nint m_nPhaseStartTick = 0xE34; // int32
            public const nint m_nPhaseDurationTicks = 0xE38; // int32
            public const nint m_OnMapVetoed = 0xE40; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnMapPicked = 0xE68; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnSidesPicked = 0xE90; // CEntityOutputTemplate<int32>
            public const nint m_OnNewPhaseStarted = 0xEB8; // CEntityOutputTemplate<int32>
            public const nint m_OnLevelTransition = 0xEE0; // CEntityOutputTemplate<int32>
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CCSMinimapBoundary {
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CSoundEnt {
            public const nint m_iFreeSound = 0x4E0; // int32
            public const nint m_iActiveSound = 0x4E4; // int32
            public const nint m_cLastActiveSounds = 0x4E8; // int32
            public const nint m_SoundPool = 0x4EC; // CSound[128]
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoSpawnGroupLandmark {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 15
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
        // Parent: CBaseTrigger
        // Field count: 3
        public static class CTriggerSave {
            public const nint m_bForceNewLevelUnit = 0x960; // bool
            public const nint m_fDangerousTimer = 0x964; // float32
            public const nint m_minHitPoints = 0x968; // int32
        }
        // Parent: CPhysConstraint
        // Field count: 11
        public static class CPhysWheelConstraint {
            public const nint m_flSuspensionFrequency = 0x558; // float32
            public const nint m_flSuspensionDampingRatio = 0x55C; // float32
            public const nint m_flSuspensionHeightOffset = 0x560; // float32
            public const nint m_bEnableSuspensionLimit = 0x564; // bool
            public const nint m_flMinSuspensionOffset = 0x568; // float32
            public const nint m_flMaxSuspensionOffset = 0x56C; // float32
            public const nint m_bEnableSteeringLimit = 0x570; // bool
            public const nint m_flMinSteeringAngle = 0x574; // float32
            public const nint m_flMaxSteeringAngle = 0x578; // float32
            public const nint m_flSteeringAxisFriction = 0x57C; // float32
            public const nint m_flSpinAxisFriction = 0x580; // float32
        }
        // Parent: CPhysConstraint
        // Field count: 6
        public static class CPhysFixed {
            public const nint m_flLinearFrequency = 0x558; // float32
            public const nint m_flLinearDampingRatio = 0x55C; // float32
            public const nint m_flAngularFrequency = 0x560; // float32
            public const nint m_flAngularDampingRatio = 0x564; // float32
            public const nint m_bEnableLinearConstraint = 0x568; // bool
            public const nint m_bEnableAngularConstraint = 0x569; // bool
        }
        // Parent: CBaseEntity
        // Field count: 11
        public static class CEnvSoundscape {
            public const nint m_OnPlay = 0x4E0; // CEntityIOOutput
            public const nint m_flRadius = 0x508; // float32
            public const nint m_soundEventName = 0x510; // CUtlSymbolLarge
            public const nint m_bOverrideWithEvent = 0x518; // bool
            public const nint m_soundscapeIndex = 0x51C; // int32
            public const nint m_soundscapeEntityListId = 0x520; // int32
            public const nint m_positionNames = 0x528; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x568; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x56C; // bool
            public const nint m_soundscapeName = 0x570; // CUtlSymbolLarge
            public const nint m_soundEventHash = 0x578; // uint32
        }
        // Parent: CEntitySubclassVDataBase
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerVData {
            public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_flHeadDamageMultiplier = 0x108; // CSkillFloat
            public const nint m_flChestDamageMultiplier = 0x118; // CSkillFloat
            public const nint m_flStomachDamageMultiplier = 0x128; // CSkillFloat
            public const nint m_flArmDamageMultiplier = 0x138; // CSkillFloat
            public const nint m_flLegDamageMultiplier = 0x148; // CSkillFloat
            public const nint m_flHoldBreathTime = 0x158; // float32
            public const nint m_flDrowningDamageInterval = 0x15C; // float32
            public const nint m_nDrowningDamageInitial = 0x160; // int32
            public const nint m_nDrowningDamageMax = 0x164; // int32
            public const nint m_nWaterSpeed = 0x168; // int32
            public const nint m_flUseRange = 0x16C; // float32
            public const nint m_flUseAngleTolerance = 0x170; // float32
            public const nint m_flCrouchTime = 0x174; // float32
        }
        // Parent: CPlayerControllerComponent
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iAccount (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_iTotalCashSpent (int)
        // NetworkVarNames: m_iCashSpentThisRound (int)
        public static class CCSPlayerController_InGameMoneyServices {
            public const nint m_bReceivesMoneyNextRound = 0x40; // bool
            public const nint m_iMoneyEarnedForNextRound = 0x44; // int32
            public const nint m_iAccount = 0x48; // int32
            public const nint m_iStartAccount = 0x4C; // int32
            public const nint m_iTotalCashSpent = 0x50; // int32
            public const nint m_iCashSpentThisRound = 0x54; // int32
        }
        // Parent: CSprite
        // Field count: 0
        public static class CSpriteOriented {
        }
        // Parent: CSoundOpvarSetAABBEntity
        // Field count: 0
        public static class CSoundOpvarSetOBBEntity {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1 {
        }
        // Parent: CBeam
        // Field count: 5
        public static class CEnvLaser {
            public const nint m_iszLaserTarget = 0x830; // CUtlSymbolLarge
            public const nint m_pSprite = 0x838; // CSprite*
            public const nint m_iszSpriteName = 0x840; // CUtlSymbolLarge
            public const nint m_firePosition = 0x848; // Vector
            public const nint m_flStartFrame = 0x854; // float32
        }
        // Parent: CSprite
        // Field count: 0
        public static class CCommentaryViewPosition {
        }
        // Parent: CTonemapController2
        // Field count: 0
        public static class CTonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: CPhysConstraint
        // Field count: 4
        public static class CPhysPulley {
            public const nint m_position2 = 0x558; // Vector
            public const nint m_offset = 0x564; // Vector[2]
            public const nint m_addLength = 0x57C; // float32
            public const nint m_gearRatio = 0x580; // float32
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CGameRulesProxy {
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
        public static class CBasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0xD30; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0xD34; // float32
            public const nint m_nNextSecondaryAttackTick = 0xD38; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0xD3C; // float32
            public const nint m_iClip1 = 0xD40; // int32
            public const nint m_iClip2 = 0xD44; // int32
            public const nint m_pReserveAmmo = 0xD48; // int32[2]
            public const nint m_OnPlayerUse = 0xD50; // CEntityIOOutput
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
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0xB0; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x170; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x174; // int32
            public const nint m_unTotalRoundDamageDealt = 0x178; // uint32
        }
        // Parent: CEntityComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: CBaseFlex
        // Field count: 0
        public static class CBaseFlexAlias_funCBaseFlex {
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
        public static class CFish {
            public const nint m_pool = 0x9A8; // CHandle<CFishPool>
            public const nint m_id = 0x9AC; // uint32
            public const nint m_x = 0x9B0; // float32
            public const nint m_y = 0x9B4; // float32
            public const nint m_z = 0x9B8; // float32
            public const nint m_angle = 0x9BC; // float32
            public const nint m_angleChange = 0x9C0; // float32
            public const nint m_forward = 0x9C4; // Vector
            public const nint m_perp = 0x9D0; // Vector
            public const nint m_poolOrigin = 0x9DC; // Vector
            public const nint m_waterLevel = 0x9E8; // float32
            public const nint m_speed = 0x9EC; // float32
            public const nint m_desiredSpeed = 0x9F0; // float32
            public const nint m_calmSpeed = 0x9F4; // float32
            public const nint m_panicSpeed = 0x9F8; // float32
            public const nint m_avoidRange = 0x9FC; // float32
            public const nint m_turnTimer = 0xA00; // CountdownTimer
            public const nint m_turnClockwise = 0xA18; // bool
            public const nint m_goTimer = 0xA20; // CountdownTimer
            public const nint m_moveTimer = 0xA38; // CountdownTimer
            public const nint m_panicTimer = 0xA50; // CountdownTimer
            public const nint m_disperseTimer = 0xA68; // CountdownTimer
            public const nint m_proximityTimer = 0xA80; // CountdownTimer
            public const nint m_visible = 0xA98; // CUtlVector<CFish*>
        }
        // Parent: CBaseEntity
        // Field count: 3
        public static class CEnvFireSource {
            public const nint m_bEnabled = 0x4E0; // bool
            public const nint m_radius = 0x4E4; // float32
            public const nint m_damage = 0x4E8; // float32
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CInfoLadderDismount {
        }
        // Parent: CBaseTrigger
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_strStartTouchEventName (CUtlString)
        // NetworkVarNames: m_strEndTouchEventName (CUtlString)
        // NetworkVarNames: m_strTriggerID (CUtlString)
        public static class CTriggerGameEvent {
            public const nint m_strStartTouchEventName = 0x960; // CUtlString
            public const nint m_strEndTouchEventName = 0x968; // CUtlString
            public const nint m_strTriggerID = 0x970; // CUtlString
        }
        // Parent: CPhysConstraint
        // Field count: 10
        public static class CPhysSlideConstraint {
            public const nint m_axisEnd = 0x560; // Vector
            public const nint m_slideFriction = 0x56C; // float32
            public const nint m_systemLoadScale = 0x570; // float32
            public const nint m_initialOffset = 0x574; // float32
            public const nint m_bEnableLinearConstraint = 0x578; // bool
            public const nint m_bEnableAngularConstraint = 0x579; // bool
            public const nint m_flMotorFrequency = 0x57C; // float32
            public const nint m_flMotorDampingRatio = 0x580; // float32
            public const nint m_bUseEntityPivot = 0x584; // bool
            public const nint m_soundInfo = 0x588; // ConstraintSoundInfo
        }
        // Parent: CBaseEntity
        // Field count: 1
        public static class CDebugHistory {
            public const nint m_nNpcEvents = 0x3E8520; // int32
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CInfoData {
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CHostageCarriableProp {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class CLightEntity {
            public const nint m_CLightComponent = 0x790; // CLightComponent*
        }
        // Parent: CBaseModelEntity
        // Field count: 18
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class CFuncRotating {
            public const nint m_OnStopped = 0x790; // CEntityIOOutput
            public const nint m_OnStarted = 0x7B8; // CEntityIOOutput
            public const nint m_OnReachedStart = 0x7E0; // CEntityIOOutput
            public const nint m_localRotationVector = 0x808; // RotationVector
            public const nint m_flFanFriction = 0x814; // float32
            public const nint m_flAttenuation = 0x818; // float32
            public const nint m_flVolume = 0x81C; // float32
            public const nint m_flTargetSpeed = 0x820; // float32
            public const nint m_flMaxSpeed = 0x824; // float32
            public const nint m_flBlockDamage = 0x828; // float32
            public const nint m_NoiseRunning = 0x830; // CUtlSymbolLarge
            public const nint m_bReversed = 0x838; // bool
            public const nint m_bAccelDecel = 0x839; // bool
            public const nint m_prevLocalAngles = 0x844; // QAngle
            public const nint m_angStart = 0x850; // QAngle
            public const nint m_bStopAtStartPos = 0x85C; // bool
            public const nint m_vecClientOrigin = 0x860; // Vector
            public const nint m_vecClientAngles = 0x86C; // QAngle
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
        public static class CBaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0xAE0; // Vector
            public const nint m_vInitialVelocity = 0xAEC; // Vector
            public const nint m_nBounces = 0xAF8; // int32
            public const nint m_nExplodeEffectIndex = 0xB00; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0xB08; // int32
            public const nint m_vecExplodeEffectOrigin = 0xB0C; // Vector
            public const nint m_flSpawnTime = 0xB18; // GameTime_t
            public const nint m_unOGSExtraFlags = 0xB1C; // uint8
            public const nint m_bDetonationRecorded = 0xB1D; // bool
            public const nint m_nItemIndex = 0xB1E; // uint16
            public const nint m_vecOriginalSpawnLocation = 0xB20; // Vector
            public const nint m_flLastBounceSoundTime = 0xB2C; // GameTime_t
            public const nint m_vecGrenadeSpin = 0xB30; // RotationVector
            public const nint m_vecLastHitSurfaceNormal = 0xB3C; // Vector
            public const nint m_nTicksAtZeroVelocity = 0xB48; // int32
            public const nint m_bHasEverHitEnemy = 0xB4C; // bool
        }
        // Parent: CServerOnlyModelEntity
        // Field count: 1
        public static class CCSPlace {
            public const nint m_name = 0x798; // CUtlSymbolLarge
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncTrainControls {
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
        public static class CEntityDissolve {
            public const nint m_flFadeInStart = 0x790; // float32
            public const nint m_flFadeInLength = 0x794; // float32
            public const nint m_flFadeOutModelStart = 0x798; // float32
            public const nint m_flFadeOutModelLength = 0x79C; // float32
            public const nint m_flFadeOutStart = 0x7A0; // float32
            public const nint m_flFadeOutLength = 0x7A4; // float32
            public const nint m_flStartTime = 0x7A8; // GameTime_t
            public const nint m_nDissolveType = 0x7AC; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0x7B0; // Vector
            public const nint m_nMagnitude = 0x7BC; // uint32
        }
        // Parent: CPointEntity
        // Field count: 12
        public static class CPointAngleSensor {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_nLookAtName = 0x4E8; // CUtlSymbolLarge
            public const nint m_hTargetEntity = 0x4F0; // CHandle<CBaseEntity>
            public const nint m_hLookAtEntity = 0x4F4; // CHandle<CBaseEntity>
            public const nint m_flDuration = 0x4F8; // float32
            public const nint m_flDotTolerance = 0x4FC; // float32
            public const nint m_flFacingTime = 0x500; // GameTime_t
            public const nint m_bFired = 0x504; // bool
            public const nint m_OnFacingLookat = 0x508; // CEntityIOOutput
            public const nint m_OnNotFacingLookat = 0x530; // CEntityIOOutput
            public const nint m_TargetDir = 0x558; // CEntityOutputTemplate<Vector>
            public const nint m_FacingPercentage = 0x580; // CEntityOutputTemplate<float32>
        }
        // Parent: CSoundEventEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class CSoundEventOBBEntity {
            public const nint m_vMins = 0x598; // Vector
            public const nint m_vMaxs = 0x5A4; // Vector
        }
        // Parent: CBtNodeDecorator
        // Field count: 1
        public static class CBtNodeCondition {
            public const nint m_bNegated = 0x58; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGapTypeQueriesForScopeSingleton
        public static class CSharedGapTypeQueryRegistration {
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
        public static class CEnvVolumetricFogVolume {
            public const nint m_bActive = 0x4E0; // bool
            public const nint m_vBoxMins = 0x4E4; // Vector
            public const nint m_vBoxMaxs = 0x4F0; // Vector
            public const nint m_bStartDisabled = 0x4FC; // bool
            public const nint m_flStrength = 0x500; // float32
            public const nint m_nFalloffShape = 0x504; // int32
            public const nint m_flFalloffExponent = 0x508; // float32
            public const nint m_flHeightFogDepth = 0x50C; // float32
            public const nint m_fHeightFogEdgeWidth = 0x510; // float32
            public const nint m_fIndirectLightStrength = 0x514; // float32
            public const nint m_fSunLightStrength = 0x518; // float32
            public const nint m_fNoiseStrength = 0x51C; // float32
            public const nint m_bOverrideIndirectLightStrength = 0x520; // bool
            public const nint m_bOverrideSunLightStrength = 0x521; // bool
            public const nint m_bOverrideNoiseStrength = 0x522; // bool
            public const nint m_bAllowLPVIndirect = 0x523; // bool
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
        public static class CBeam {
            public const nint m_flFrameRate = 0x790; // float32
            public const nint m_flHDRColorScale = 0x794; // float32
            public const nint m_flFireTime = 0x798; // GameTime_t
            public const nint m_flDamage = 0x79C; // float32
            public const nint m_nNumBeamEnts = 0x7A0; // uint8
            public const nint m_hBaseMaterial = 0x7A8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0x7B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0x7B8; // BeamType_t
            public const nint m_nBeamFlags = 0x7BC; // uint32
            public const nint m_hAttachEntity = 0x7C0; // CHandle<CBaseEntity>[10]
            public const nint m_nAttachIndex = 0x7E8; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0x7F4; // float32
            public const nint m_fEndWidth = 0x7F8; // float32
            public const nint m_fFadeLength = 0x7FC; // float32
            public const nint m_fHaloScale = 0x800; // float32
            public const nint m_fAmplitude = 0x804; // float32
            public const nint m_fStartFrame = 0x808; // float32
            public const nint m_fSpeed = 0x80C; // float32
            public const nint m_flFrame = 0x810; // float32
            public const nint m_nClipStyle = 0x814; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0x818; // bool
            public const nint m_vecEndPos = 0x81C; // Vector
            public const nint m_hEndEntity = 0x828; // CHandle<CBaseEntity>
            public const nint m_nDissolveType = 0x82C; // int32
        }
        // Parent: CBaseEntity
        // Field count: 33
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
        public static class CBaseModelEntity {
            public const nint m_CRenderComponent = 0x4E0; // CRenderComponent*
            public const nint m_CHitboxComponent = 0x4E8; // CHitboxComponent
            public const nint m_nDestructiblePartInitialStateDestructed0 = 0x510; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed1 = 0x514; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed2 = 0x518; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed3 = 0x51C; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed4 = 0x520; // HitGroup_t
            public const nint m_nLastHitDestructiblePartIndex = 0x524; // int32
            public const nint m_LastHitGroup = 0x550; // HitGroup_t
            public const nint m_flDissolveStartTime = 0x554; // GameTime_t
            public const nint m_OnIgnite = 0x558; // CEntityIOOutput
            public const nint m_nRenderMode = 0x580; // RenderMode_t
            public const nint m_nRenderFX = 0x581; // RenderFx_t
            public const nint m_bAllowFadeInView = 0x582; // bool
            public const nint m_clrRender = 0x5A0; // Color
            public const nint m_vecRenderAttributes = 0x5A8; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0x5F8; // bool
            public const nint m_bNoInterpolate = 0x5F9; // bool
            public const nint m_Collision = 0x600; // CCollisionProperty
            public const nint m_Glow = 0x6B0; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0x708; // float32
            public const nint m_fadeMinDist = 0x70C; // float32
            public const nint m_fadeMaxDist = 0x710; // float32
            public const nint m_flFadeScale = 0x714; // float32
            public const nint m_flShadowStrength = 0x718; // float32
            public const nint m_nObjectCulling = 0x71C; // uint8
            public const nint m_nAddDecal = 0x720; // int32
            public const nint m_vDecalPosition = 0x724; // Vector
            public const nint m_vDecalForwardAxis = 0x730; // Vector
            public const nint m_flDecalHealBloodRate = 0x73C; // float32
            public const nint m_flDecalHealHeightRate = 0x740; // float32
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x748; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_vecViewOffset = 0x760; // CNetworkViewOffsetVector
        }
        // Parent: CBaseAnimGraph
        // Field count: 12
        public static class CPhysMagnet {
            public const nint m_OnMagnetAttach = 0x9A8; // CEntityIOOutput
            public const nint m_OnMagnetDetach = 0x9D0; // CEntityIOOutput
            public const nint m_massScale = 0x9F8; // float32
            public const nint m_forceLimit = 0x9FC; // float32
            public const nint m_torqueLimit = 0xA00; // float32
            public const nint m_MagnettedEntities = 0xA08; // CUtlVector<magnetted_objects_t>
            public const nint m_bActive = 0xA20; // bool
            public const nint m_bHasHitSomething = 0xA21; // bool
            public const nint m_flTotalMass = 0xA24; // float32
            public const nint m_flRadius = 0xA28; // float32
            public const nint m_flNextSuckTime = 0xA2C; // GameTime_t
            public const nint m_iMaxObjectsAttached = 0xA30; // int32
        }
        // Parent: CSceneEntity
        // Field count: 0
        public static class CSceneEntityAlias_logic_choreographed_scene {
        }
        // Parent: CBaseModelEntity
        // Field count: 2
        public static class CFuncNavBlocker {
            public const nint m_bDisabled = 0x790; // bool
            public const nint m_nBlockedTeamNumber = 0x794; // int32
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CRagdollMagnet {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_radius = 0x4E4; // float32
            public const nint m_force = 0x4E8; // float32
            public const nint m_axis = 0x4EC; // Vector
        }
        // Parent: CBaseModelEntity
        // Field count: 6
        public static class CFuncBrush {
            public const nint m_iSolidity = 0x790; // BrushSolidities_e
            public const nint m_iDisabled = 0x794; // int32
            public const nint m_bSolidBsp = 0x798; // bool
            public const nint m_iszExcludedClass = 0x7A0; // CUtlSymbolLarge
            public const nint m_bInvertExclusion = 0x7A8; // bool
            public const nint m_bScriptedMovement = 0x7A9; // bool
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CPointProximitySensor {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_hTargetEntity = 0x4E4; // CHandle<CBaseEntity>
            public const nint m_Distance = 0x4E8; // CEntityOutputTemplate<float32>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x538; // CUtlSymbolLarge
        }
        // Parent: CMultiplayRules
        // Field count: 0
        public static class CTeamplayRules {
        }
        // Parent: CBaseFilter
        // Field count: 0
        public static class CFilterLOS {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (float32)
        // NetworkVarNames: m_timescale (float32)
        public static class EngineCountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // float32
            public const nint m_timescale = 0x10; // float32
        }
        // Parent: CBreakable
        // Field count: 14
        public static class CPhysBox {
            public const nint m_damageType = 0x868; // int32
            public const nint m_damageToEnableMotion = 0x86C; // int32
            public const nint m_flForceToEnableMotion = 0x870; // float32
            public const nint m_angPreferredCarryAngles = 0x874; // QAngle
            public const nint m_bNotSolidToWorld = 0x880; // bool
            public const nint m_bEnableUseOutput = 0x881; // bool
            public const nint m_iExploitableByPlayer = 0x884; // int32
            public const nint m_flTouchOutputPerEntityDelay = 0x888; // float32
            public const nint m_OnDamaged = 0x890; // CEntityIOOutput
            public const nint m_OnAwakened = 0x8B8; // CEntityIOOutput
            public const nint m_OnMotionEnabled = 0x8E0; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0x908; // CEntityIOOutput
            public const nint m_OnStartTouch = 0x930; // CEntityIOOutput
            public const nint m_hCarryingPlayer = 0x958; // CHandle<CBasePlayerPawn>
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
        public static class CBaseGrenade {
            public const nint m_OnPlayerPickup = 0xA40; // CEntityIOOutput
            public const nint m_OnExplode = 0xA68; // CEntityIOOutput
            public const nint m_bHasWarnedAI = 0xA90; // bool
            public const nint m_bIsSmokeGrenade = 0xA91; // bool
            public const nint m_bIsLive = 0xA92; // bool
            public const nint m_DmgRadius = 0xA94; // float32
            public const nint m_flDetonateTime = 0xA98; // GameTime_t
            public const nint m_flWarnAITime = 0xA9C; // float32
            public const nint m_flDamage = 0xAA0; // float32
            public const nint m_iszBounceSound = 0xAA8; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0xAB0; // CUtlString
            public const nint m_hThrower = 0xABC; // CHandle<CCSPlayerPawn>
            public const nint m_flNextAttack = 0xAD4; // GameTime_t
            public const nint m_hOriginalThrower = 0xAD8; // CHandle<CCSPlayerPawn>
        }
        // Parent: CLogicalEntity
        // Field count: 13
        public static class CTimerEntity {
            public const nint m_OnTimer = 0x4E0; // CEntityIOOutput
            public const nint m_OnTimerHigh = 0x508; // CEntityIOOutput
            public const nint m_OnTimerLow = 0x530; // CEntityIOOutput
            public const nint m_iDisabled = 0x558; // int32
            public const nint m_flInitialDelay = 0x55C; // float32
            public const nint m_flRefireTime = 0x560; // float32
            public const nint m_bUpDownState = 0x564; // bool
            public const nint m_iUseRandomTime = 0x568; // int32
            public const nint m_bPauseAfterFiring = 0x56C; // bool
            public const nint m_flLowerRandomBound = 0x570; // float32
            public const nint m_flUpperRandomBound = 0x574; // float32
            public const nint m_flRemainingTime = 0x578; // float32
            public const nint m_bPaused = 0x57C; // bool
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 0
        public static class CHEGrenadeProjectile {
        }
        // Parent: CBaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class CEnvWind {
            public const nint m_EnvWindShared = 0x4E0; // CEnvWindShared
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
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
        // NetworkVarNames: m_nextPrevOwnerUseTime (GameTime_t)
        // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_nDropTick (GameTick_t)
        // NetworkVarNames: m_fLastShotTime (GameTime_t)
        // NetworkVarNames: m_iIronSightMode (int)
        // NetworkVarNames: m_iNumEmptyAttacks (int)
        public static class CCSWeaponBase {
            public const nint m_bRemoveable = 0xDA0; // bool
            public const nint m_flFireSequenceStartTime = 0xDA8; // float32
            public const nint m_nFireSequenceStartTimeChange = 0xDAC; // int32
            public const nint m_nFireSequenceStartTimeAck = 0xDB0; // int32
            public const nint m_ePlayerFireEvent = 0xDB4; // PlayerAnimEvent_t
            public const nint m_ePlayerFireEventAttackType = 0xDB8; // WeaponAttackType_t
            public const nint m_seqIdle = 0xDBC; // HSequence
            public const nint m_seqFirePrimary = 0xDC0; // HSequence
            public const nint m_seqFireSecondary = 0xDC4; // HSequence
            public const nint m_thirdPersonFireSequences = 0xDC8; // CUtlVector<HSequence>
            public const nint m_hCurrentThirdPersonSequence = 0xDE0; // HSequence
            public const nint m_nSilencerBoneIndex = 0xDE4; // int32
            public const nint m_thirdPersonSequences = 0xDE8; // HSequence[7]
            public const nint m_bPlayerAmmoStockOnPickup = 0xE10; // bool
            public const nint m_bRequireUseToTouch = 0xE11; // bool
            public const nint m_iState = 0xE14; // CSWeaponState_t
            public const nint m_flLastTimeInAir = 0xE18; // GameTime_t
            public const nint m_nLastEmptySoundCmdNum = 0xE1C; // int32
            public const nint m_nViewModelIndex = 0xE20; // uint32
            public const nint m_bReloadsWithClips = 0xE24; // bool
            public const nint m_flTimeWeaponIdle = 0xE40; // GameTime_t
            public const nint m_bFireOnEmpty = 0xE44; // bool
            public const nint m_OnPlayerPickup = 0xE48; // CEntityIOOutput
            public const nint m_weaponMode = 0xE70; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0xE74; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0xE78; // Vector
            public const nint m_flTurningInaccuracy = 0xE84; // float32
            public const nint m_fAccuracyPenalty = 0xE88; // float32
            public const nint m_flLastAccuracyUpdateTime = 0xE8C; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0xE90; // float32
            public const nint m_fScopeZoomEndTime = 0xE94; // GameTime_t
            public const nint m_iRecoilIndex = 0xE98; // int32
            public const nint m_flRecoilIndex = 0xE9C; // float32
            public const nint m_bBurstMode = 0xEA0; // bool
            public const nint m_nPostponeFireReadyTicks = 0xEA4; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0xEA8; // float32
            public const nint m_bInReload = 0xEAC; // bool
            public const nint m_bReloadVisuallyComplete = 0xEAD; // bool
            public const nint m_flDroppedAtTime = 0xEB0; // GameTime_t
            public const nint m_bIsHauledBack = 0xEB4; // bool
            public const nint m_bSilencerOn = 0xEB5; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0xEB8; // GameTime_t
            public const nint m_iOriginalTeamNumber = 0xEBC; // int32
            public const nint m_iMostRecentTeamNumber = 0xEC0; // int32
            public const nint m_bDroppedNearBuyZone = 0xEC4; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0xEC8; // float32
            public const nint m_bCanBePickedUp = 0xEE0; // bool
            public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xEE1; // bool
            public const nint m_nextOwnerTouchTime = 0xEE4; // GameTime_t
            public const nint m_nextPrevOwnerTouchTime = 0xEE8; // GameTime_t
            public const nint m_nextPrevOwnerUseTime = 0xEF0; // GameTime_t
            public const nint m_hPrevOwner = 0xEF4; // CHandle<CCSPlayerPawn>
            public const nint m_nDropTick = 0xEF8; // GameTick_t
            public const nint m_donated = 0xF1C; // bool
            public const nint m_fLastShotTime = 0xF20; // GameTime_t
            public const nint m_bWasOwnedByCT = 0xF24; // bool
            public const nint m_bWasOwnedByTerrorist = 0xF25; // bool
            public const nint m_bFiredOutOfAmmoEvent = 0xF26; // bool
            public const nint m_numRemoveUnownedWeaponThink = 0xF28; // int32
            public const nint m_IronSightController = 0xF30; // CIronSightController
            public const nint m_iIronSightMode = 0xF48; // int32
            public const nint m_flLastLOSTraceFailureTime = 0xF4C; // GameTime_t
            public const nint m_iNumEmptyAttacks = 0xF50; // int32
            public const nint m_flWatTickOffset = 0xF54; // float32
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CHandleDummy {
        }
        // Parent: CPhysConstraint
        // Field count: 9
        public static class CRagdollConstraint {
            public const nint m_xmin = 0x558; // float32
            public const nint m_xmax = 0x55C; // float32
            public const nint m_ymin = 0x560; // float32
            public const nint m_ymax = 0x564; // float32
            public const nint m_zmin = 0x568; // float32
            public const nint m_zmax = 0x56C; // float32
            public const nint m_xfriction = 0x570; // float32
            public const nint m_yfriction = 0x574; // float32
            public const nint m_zfriction = 0x578; // float32
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CPhysExplosion {
            public const nint m_bExplodeOnSpawn = 0x4E0; // bool
            public const nint m_flMagnitude = 0x4E4; // float32
            public const nint m_flDamage = 0x4E8; // float32
            public const nint m_radius = 0x4EC; // float32
            public const nint m_targetEntityName = 0x4F0; // CUtlSymbolLarge
            public const nint m_flInnerRadius = 0x4F8; // float32
            public const nint m_flPushScale = 0x4FC; // float32
            public const nint m_bConvertToDebrisWhenPossible = 0x500; // bool
            public const nint m_OnPushedPlayer = 0x508; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CPointPush {
            public const nint m_bEnabled = 0x4E0; // bool
            public const nint m_flMagnitude = 0x4E4; // float32
            public const nint m_flRadius = 0x4E8; // float32
            public const nint m_flInnerRadius = 0x4EC; // float32
            public const nint m_flConeOfInfluence = 0x4F0; // float32
            public const nint m_iszFilterName = 0x4F8; // CUtlSymbolLarge
            public const nint m_hFilter = 0x500; // CHandle<CBaseFilter>
        }
        // Parent: CPointEntity
        // Field count: 3
        public static class CCredits {
            public const nint m_OnCreditsDone = 0x4E0; // CEntityIOOutput
            public const nint m_bRolledOutroCredits = 0x508; // bool
            public const nint m_flLogoLength = 0x50C; // float32
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
        public static class CCSPlayerResource {
            public const nint m_bHostageAlive = 0x4E0; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x4EC; // bool[12]
            public const nint m_iHostageEntityIDs = 0x4F8; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x528; // Vector
            public const nint m_bombsiteCenterB = 0x534; // Vector
            public const nint m_hostageRescueX = 0x540; // int32[4]
            public const nint m_hostageRescueY = 0x550; // int32[4]
            public const nint m_hostageRescueZ = 0x560; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x570; // bool
            public const nint m_foundGoalPositions = 0x571; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
            public const nint m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
            public const nint m_iAmmo = 0x60; // uint16[32]
            public const nint m_bPreventWeaponPickup = 0xA0; // bool
        }
        // Parent: None
        // Field count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
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
        public static class CCSTeam {
            public const nint m_nLastRecievedShorthandedRoundBonus = 0x598; // int32
            public const nint m_nShorthandedRoundBonusStartRound = 0x59C; // int32
            public const nint m_bSurrendered = 0x5A0; // bool
            public const nint m_szTeamMatchStat = 0x5A1; // char[512]
            public const nint m_numMapVictories = 0x7A4; // int32
            public const nint m_scoreFirstHalf = 0x7A8; // int32
            public const nint m_scoreSecondHalf = 0x7AC; // int32
            public const nint m_scoreOvertime = 0x7B0; // int32
            public const nint m_szClanTeamname = 0x7B4; // char[129]
            public const nint m_iClanID = 0x838; // uint32
            public const nint m_szTeamFlagImage = 0x83C; // char[8]
            public const nint m_szTeamLogoImage = 0x844; // char[8]
            public const nint m_flNextResourceTime = 0x84C; // float32
            public const nint m_iLastUpdateSentAt = 0x850; // int32
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
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
        // Field count: 4
        public static class CTriggerImpact {
            public const nint m_flMagnitude = 0x988; // float32
            public const nint m_flNoise = 0x98C; // float32
            public const nint m_flViewkick = 0x990; // float32
            public const nint m_pOutputForce = 0x998; // CEntityOutputTemplate<Vector>
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
        public static class CSun {
            public const nint m_vDirection = 0x790; // Vector
            public const nint m_clrOverlay = 0x79C; // Color
            public const nint m_iszEffectName = 0x7A0; // CUtlSymbolLarge
            public const nint m_iszSSEffectName = 0x7A8; // CUtlSymbolLarge
            public const nint m_bOn = 0x7B0; // bool
            public const nint m_bmaxColor = 0x7B1; // bool
            public const nint m_flSize = 0x7B4; // float32
            public const nint m_flRotation = 0x7B8; // float32
            public const nint m_flHazeScale = 0x7BC; // float32
            public const nint m_flAlphaHaze = 0x7C0; // float32
            public const nint m_flAlphaHdr = 0x7C4; // float32
            public const nint m_flAlphaScale = 0x7C8; // float32
            public const nint m_flHDRColorScale = 0x7CC; // float32
            public const nint m_flFarZScale = 0x7D0; // float32
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerDetectBulletFire {
            public const nint m_bPlayerFireOnly = 0x960; // bool
            public const nint m_OnDetectedBulletFire = 0x968; // CEntityIOOutput
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CWorld {
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CPointGiveAmmo {
            public const nint m_pActivator = 0x4E0; // CHandle<CBaseEntity>
        }
        // Parent: CFuncMoveLinear
        // Field count: 0
        public static class CFuncMoveLinearAlias_momentary_door {
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
        public static class CPathParticleRope {
            public const nint m_bStartActive = 0x4E8; // bool
            public const nint m_flMaxSimulationTime = 0x4EC; // float32
            public const nint m_iszEffectName = 0x4F0; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x4F8; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x510; // float32
            public const nint m_flSlack = 0x514; // float32
            public const nint m_flRadius = 0x518; // float32
            public const nint m_ColorTint = 0x51C; // Color
            public const nint m_nEffectState = 0x520; // int32
            public const nint m_iEffectIndex = 0x528; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x530; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x548; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x560; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x578; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x590; // CNetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x5A8; // CNetworkUtlVectorBase<float32>
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
        public static class CPlayerVisibility {
            public const nint m_flVisibilityStrength = 0x4E0; // float32
            public const nint m_flFogDistanceMultiplier = 0x4E4; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x4E8; // float32
            public const nint m_flFadeTime = 0x4EC; // float32
            public const nint m_bStartDisabled = 0x4F0; // bool
            public const nint m_bIsEnabled = 0x4F1; // bool
        }
        // Parent: CServerOnlyEntity
        // Field count: 0
        public static class CServerOnlyPointEntity {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CAK47 {
        }
        // Parent: CBaseTrigger
        // Field count: 4
        public static class CTriggerTeleport {
            public const nint m_iLandmark = 0x960; // CUtlSymbolLarge
            public const nint m_bUseLandmarkAngles = 0x968; // bool
            public const nint m_bMirrorPlayer = 0x969; // bool
            public const nint m_bCheckDestIfClearForPlayer = 0x96A; // bool
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CCSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamIntroTerroristPosition {
        }
        // Parent: CBaseModelEntity
        // Field count: 38
        public static class CFuncMover {
            public const nint m_bCreateMovableNavMesh = 0x790; // bool
            public const nint m_iszPathName = 0x798; // CUtlSymbolLarge
            public const nint m_hPathMover = 0x7A0; // CHandle<CPathMover>
            public const nint m_iszPathNodeStart = 0x7A8; // CUtlSymbolLarge
            public const nint m_eMoveType = 0x7B0; // CFuncMover::Move_t
            public const nint m_bIsReversing = 0x7B4; // bool
            public const nint m_vTarget = 0x7B8; // Vector
            public const nint m_flStartSpeed = 0x7C4; // float32
            public const nint m_flPathLocation = 0x7C8; // float32
            public const nint m_flT = 0x7CC; // float32
            public const nint m_nCurrentNodeIndex = 0x7D0; // int32
            public const nint m_nPreviousNodeIndex = 0x7D4; // int32
            public const nint m_bFixedOrientation = 0x7D8; // bool
            public const nint m_bFixedPitch = 0x7D9; // bool
            public const nint m_eSolidType = 0x7DA; // SolidType_t
            public const nint m_bIsMoving = 0x7DB; // bool
            public const nint m_flTimeToReachMaxSpeed = 0x7DC; // float32
            public const nint m_flDistanceToReachMaxSpeed = 0x7E0; // float32
            public const nint m_flTimeToReachZeroSpeed = 0x7E4; // float32
            public const nint m_flDistanceToReachZeroSpeed = 0x7E8; // float32
            public const nint m_flTimeMovementStart = 0x7EC; // GameTime_t
            public const nint m_flTimeMovementStop = 0x7F0; // GameTime_t
            public const nint m_hStopAtNode = 0x7F4; // CHandle<CMoverPathNode>
            public const nint m_flPathLocationToBeginStop = 0x7F8; // float32
            public const nint m_iszStartForwardSound = 0x800; // CUtlSymbolLarge
            public const nint m_iszLoopForwardSound = 0x808; // CUtlSymbolLarge
            public const nint m_iszStopForwardSound = 0x810; // CUtlSymbolLarge
            public const nint m_iszStartReverseSound = 0x818; // CUtlSymbolLarge
            public const nint m_iszLoopReverseSound = 0x820; // CUtlSymbolLarge
            public const nint m_iszStopReverseSound = 0x828; // CUtlSymbolLarge
            public const nint m_iszArriveAtDestinationSound = 0x830; // CUtlSymbolLarge
            public const nint m_OnMovementEnd = 0x840; // CEntityIOOutput
            public const nint m_bStartAtEnd = 0x868; // bool
            public const nint m_eOrientationUpdate = 0x86C; // CFuncMover::OrientationUpdate_t
            public const nint m_flTimeStartOrientationChange = 0x870; // GameTime_t
            public const nint m_flTimeToBlendToNewOrientation = 0x874; // float32
            public const nint m_flDurationBlendToNewOrientationRan = 0x878; // float32
            public const nint m_qOriginalOrientation = 0x880; // Quaternion
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
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CHEGrenade {
        }
        // Parent: CRulePointEntity
        // Field count: 0
        public static class CGameEnd {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerCallback {
        }
        // Parent: CBaseModelEntity
        // Field count: 3
        public static class CBubbling {
            public const nint m_density = 0x790; // int32
            public const nint m_frequency = 0x794; // int32
            public const nint m_state = 0x798; // int32
        }
        // Parent: CTeamplayRules
        // Field count: 190
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
            public const nint m_bFreezePeriod = 0xC8; // bool
            public const nint m_bWarmupPeriod = 0xC9; // bool
            public const nint m_fWarmupPeriodEnd = 0xCC; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0xD0; // GameTime_t
            public const nint m_bServerPaused = 0xD4; // bool
            public const nint m_bTerroristTimeOutActive = 0xD5; // bool
            public const nint m_bCTTimeOutActive = 0xD6; // bool
            public const nint m_flTerroristTimeOutRemaining = 0xD8; // float32
            public const nint m_flCTTimeOutRemaining = 0xDC; // float32
            public const nint m_nTerroristTimeOuts = 0xE0; // int32
            public const nint m_nCTTimeOuts = 0xE4; // int32
            public const nint m_bTechnicalTimeOut = 0xE8; // bool
            public const nint m_bMatchWaitingForResume = 0xE9; // bool
            public const nint m_iRoundTime = 0xEC; // int32
            public const nint m_fMatchStartTime = 0xF0; // float32
            public const nint m_fRoundStartTime = 0xF4; // GameTime_t
            public const nint m_flRestartRoundTime = 0xF8; // GameTime_t
            public const nint m_bGameRestart = 0xFC; // bool
            public const nint m_flGameStartTime = 0x100; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x104; // float32
            public const nint m_gamePhase = 0x108; // int32
            public const nint m_totalRoundsPlayed = 0x10C; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x110; // int32
            public const nint m_nOvertimePlaying = 0x114; // int32
            public const nint m_iHostagesRemaining = 0x118; // int32
            public const nint m_bAnyHostageReached = 0x11C; // bool
            public const nint m_bMapHasBombTarget = 0x11D; // bool
            public const nint m_bMapHasRescueZone = 0x11E; // bool
            public const nint m_bMapHasBuyZone = 0x11F; // bool
            public const nint m_bIsQueuedMatchmaking = 0x120; // bool
            public const nint m_nQueuedMatchmakingMode = 0x124; // int32
            public const nint m_bIsValveDS = 0x128; // bool
            public const nint m_bLogoMap = 0x129; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0x12A; // bool
            public const nint m_iSpectatorSlotCount = 0x12C; // int32
            public const nint m_MatchDevice = 0x130; // int32
            public const nint m_bHasMatchStarted = 0x134; // bool
            public const nint m_nNextMapInMapgroup = 0x138; // int32
            public const nint m_szTournamentEventName = 0x13C; // char[512]
            public const nint m_szTournamentEventStage = 0x33C; // char[512]
            public const nint m_szMatchStatTxt = 0x53C; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x73C; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x93C; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x940; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x944; // GameTime_t
            public const nint m_bIsDroppingItems = 0x948; // bool
            public const nint m_bIsQuestEligible = 0x949; // bool
            public const nint m_bIsHltvActive = 0x94A; // bool
            public const nint m_arrProhibitedItemIndices = 0x94C; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0xA14; // uint32[4]
            public const nint m_numBestOfMaps = 0xA24; // int32
            public const nint m_nHalloweenMaskListSeed = 0xA28; // int32
            public const nint m_bBombDropped = 0xA2C; // bool
            public const nint m_bBombPlanted = 0xA2D; // bool
            public const nint m_iRoundWinStatus = 0xA30; // int32
            public const nint m_eRoundWinReason = 0xA34; // int32
            public const nint m_bTCantBuy = 0xA38; // bool
            public const nint m_bCTCantBuy = 0xA39; // bool
            public const nint m_iMatchStats_RoundResults = 0xA3C; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xAB4; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xB2C; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xBA4; // float32[32]
            public const nint m_flNextRespawnWave = 0xC24; // GameTime_t[32]
            public const nint m_vMinimapMins = 0xCA4; // Vector
            public const nint m_vMinimapMaxs = 0xCB0; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xCBC; // float32[8]
            public const nint m_ullLocalMatchID = 0xCE0; // uint64
            public const nint m_nEndMatchMapGroupVoteTypes = 0xCE8; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xD10; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xD38; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xD3C; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xD40; // int32
            public const nint m_bHasHostageBeenTouched = 0xD60; // bool
            public const nint m_flIntermissionStartTime = 0xD64; // GameTime_t
            public const nint m_flIntermissionEndTime = 0xD68; // GameTime_t
            public const nint m_bLevelInitialized = 0xD6C; // bool
            public const nint m_iTotalRoundsPlayed = 0xD70; // int32
            public const nint m_iUnBalancedRounds = 0xD74; // int32
            public const nint m_endMatchOnRoundReset = 0xD78; // bool
            public const nint m_endMatchOnThink = 0xD79; // bool
            public const nint m_iFreezeTime = 0xD7C; // int32
            public const nint m_iNumTerrorist = 0xD80; // int32
            public const nint m_iNumCT = 0xD84; // int32
            public const nint m_iNumSpawnableTerrorist = 0xD88; // int32
            public const nint m_iNumSpawnableCT = 0xD8C; // int32
            public const nint m_arrSelectedHostageSpawnIndices = 0xD90; // CUtlVector<int32>
            public const nint m_nSpawnPointsRandomSeed = 0xDA8; // int32
            public const nint m_bFirstConnected = 0xDAC; // bool
            public const nint m_bCompleteReset = 0xDAD; // bool
            public const nint m_bPickNewTeamsOnReset = 0xDAE; // bool
            public const nint m_bScrambleTeamsOnRestart = 0xDAF; // bool
            public const nint m_bSwapTeamsOnRestart = 0xDB0; // bool
            public const nint m_nEndMatchTiedVotes = 0xDB8; // CUtlVector<int32>
            public const nint m_bNeedToAskPlayersForContinueVote = 0xDD4; // bool
            public const nint m_numQueuedMatchmakingAccounts = 0xDD8; // uint32
            public const nint m_fAvgPlayerRank = 0xDDC; // float32
            public const nint m_pQueuedMatchmakingReservationString = 0xDE0; // char*
            public const nint m_numTotalTournamentDrops = 0xDE8; // uint32
            public const nint m_numSpectatorsCountMax = 0xDEC; // uint32
            public const nint m_numSpectatorsCountMaxTV = 0xDF0; // uint32
            public const nint m_numSpectatorsCountMaxLnk = 0xDF4; // uint32
            public const nint m_nCTsAliveAtFreezetimeEnd = 0xE00; // int32
            public const nint m_nTerroristsAliveAtFreezetimeEnd = 0xE04; // int32
            public const nint m_bForceTeamChangeSilent = 0xE08; // bool
            public const nint m_bLoadingRoundBackupData = 0xE09; // bool
            public const nint m_nMatchInfoShowType = 0xE40; // int32
            public const nint m_flMatchInfoDecidedTime = 0xE44; // float32
            public const nint mTeamDMLastWinningTeamNumber = 0xE60; // int32
            public const nint mTeamDMLastThinkTime = 0xE64; // float32
            public const nint m_flTeamDMLastAnnouncementTime = 0xE68; // float32
            public const nint m_iAccountTerrorist = 0xE6C; // int32
            public const nint m_iAccountCT = 0xE70; // int32
            public const nint m_iSpawnPointCount_Terrorist = 0xE74; // int32
            public const nint m_iSpawnPointCount_CT = 0xE78; // int32
            public const nint m_iMaxNumTerrorists = 0xE7C; // int32
            public const nint m_iMaxNumCTs = 0xE80; // int32
            public const nint m_iLoserBonusMostRecentTeam = 0xE84; // int32
            public const nint m_tmNextPeriodicThink = 0xE88; // float32
            public const nint m_bVoiceWonMatchBragFired = 0xE8C; // bool
            public const nint m_fWarmupNextChatNoticeTime = 0xE90; // float32
            public const nint m_iHostagesRescued = 0xE98; // int32
            public const nint m_iHostagesTouched = 0xE9C; // int32
            public const nint m_flNextHostageAnnouncement = 0xEA0; // float32
            public const nint m_bNoTerroristsKilled = 0xEA4; // bool
            public const nint m_bNoCTsKilled = 0xEA5; // bool
            public const nint m_bNoEnemiesKilled = 0xEA6; // bool
            public const nint m_bCanDonateWeapons = 0xEA7; // bool
            public const nint m_firstKillTime = 0xEAC; // float32
            public const nint m_firstBloodTime = 0xEB4; // float32
            public const nint m_hostageWasInjured = 0xED0; // bool
            public const nint m_hostageWasKilled = 0xED1; // bool
            public const nint m_bVoteCalled = 0xEE0; // bool
            public const nint m_bServerVoteOnReset = 0xEE1; // bool
            public const nint m_flVoteCheckThrottle = 0xEE4; // float32
            public const nint m_bBuyTimeEnded = 0xEE8; // bool
            public const nint m_nLastFreezeEndBeep = 0xEEC; // int32
            public const nint m_bTargetBombed = 0xEF0; // bool
            public const nint m_bBombDefused = 0xEF1; // bool
            public const nint m_bMapHasBombZone = 0xEF2; // bool
            public const nint m_vecMainCTSpawnPos = 0xF40; // Vector
            public const nint m_CTSpawnPointsMasterList = 0xF50; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
            public const nint m_bRespawningAllRespawnablePlayers = 0xF80; // bool
            public const nint m_iNextCTSpawnPoint = 0xF84; // int32
            public const nint m_flCTSpawnPointUsedTime = 0xF88; // float32
            public const nint m_iNextTerroristSpawnPoint = 0xF8C; // int32
            public const nint m_flTerroristSpawnPointUsedTime = 0xF90; // float32
            public const nint m_CTSpawnPoints = 0xF98; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
            public const nint m_bIsUnreservedGameServer = 0xFC8; // bool
            public const nint m_fAutobalanceDisplayTime = 0xFCC; // float32
            public const nint m_bAllowWeaponSwitch = 0x1238; // bool
            public const nint m_bRoundTimeWarningTriggered = 0x1239; // bool
            public const nint m_phaseChangeAnnouncementTime = 0x123C; // GameTime_t
            public const nint m_fNextUpdateTeamClanNamesTime = 0x1240; // float32
            public const nint m_flLastThinkTime = 0x1244; // GameTime_t
            public const nint m_fAccumulatedRoundOffDamage = 0x1248; // float32
            public const nint m_nShorthandedBonusLastEvalRound = 0x124C; // int32
            public const nint m_nMatchAbortedEarlyReason = 0x14C8; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0x14CC; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0x14CD; // bool
            public const nint m_pGameModeRules = 0x14E8; // CCSGameModeRules*
            public const nint m_BtGlobalBlackboard = 0x14F0; // KeyValues3
            public const nint m_hPlayerResource = 0x1580; // CHandle<CBaseEntity>
            public const nint m_RetakeRules = 0x1588; // CRetakeGameRules
            public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1720; // CUtlVector<int32>[4]
            public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x1780; // bool[4]
            public const nint m_nMatchEndCount = 0x17A8; // uint8
            public const nint m_nTTeamIntroVariant = 0x17AC; // int32
            public const nint m_nCTTeamIntroVariant = 0x17B0; // int32
            public const nint m_bTeamIntroPeriod = 0x17B4; // bool
            public const nint m_fTeamIntroPeriodEnd = 0x17B8; // GameTime_t
            public const nint m_bPlayedTeamIntroVO = 0x17BC; // bool
            public const nint m_iRoundEndWinnerTeam = 0x17C0; // int32
            public const nint m_eRoundEndReason = 0x17C4; // int32
            public const nint m_bRoundEndShowTimerDefend = 0x17C8; // bool
            public const nint m_iRoundEndTimerTime = 0x17CC; // int32
            public const nint m_sRoundEndFunFactToken = 0x17D0; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0x17D8; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0x17DC; // int32
            public const nint m_iRoundEndFunFactData2 = 0x17E0; // int32
            public const nint m_iRoundEndFunFactData3 = 0x17E4; // int32
            public const nint m_sRoundEndMessage = 0x17E8; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0x17F0; // int32
            public const nint m_bRoundEndNoMusic = 0x17F4; // bool
            public const nint m_iRoundEndLegacy = 0x17F8; // int32
            public const nint m_nRoundEndCount = 0x17FC; // uint8
            public const nint m_iRoundStartRoundNumber = 0x1800; // int32
            public const nint m_nRoundStartCount = 0x1804; // uint8
            public const nint m_flLastPerfSampleTime = 0x5810; // float64
        }
        // Parent: CPhysicsProp
        // Field count: 0
        public static class CPhysicsPropOverride {
        }
        // Parent: CBaseEntity
        // Field count: 4
        public static class CAI_ChangeHintGroup {
            public const nint m_iSearchType = 0x4E0; // int32
            public const nint m_strSearchName = 0x4E8; // CUtlSymbolLarge
            public const nint m_strNewHintGroup = 0x4F0; // CUtlSymbolLarge
            public const nint m_flRadius = 0x4F8; // float32
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
        public static class CColorCorrectionVolume {
            public const nint m_bEnabled = 0x960; // bool
            public const nint m_MaxWeight = 0x964; // float32
            public const nint m_FadeDuration = 0x968; // float32
            public const nint m_bStartDisabled = 0x96C; // bool
            public const nint m_Weight = 0x970; // float32
            public const nint m_lookupFilename = 0x974; // char[512]
            public const nint m_LastEnterWeight = 0xB74; // float32
            public const nint m_LastEnterTime = 0xB78; // GameTime_t
            public const nint m_LastExitWeight = 0xB7C; // float32
            public const nint m_LastExitTime = 0xB80; // GameTime_t
        }
        // Parent: CBaseFilter
        // Field count: 5
        public static class CFilterEnemy {
            public const nint m_iszEnemyName = 0x538; // CUtlSymbolLarge
            public const nint m_flRadius = 0x540; // float32
            public const nint m_flOuterRadius = 0x544; // float32
            public const nint m_nMaxSquadmatesPerEnemy = 0x548; // int32
            public const nint m_iszPlayerName = 0x550; // CUtlSymbolLarge
        }
        // Parent: CModelPointEntity
        // Field count: 0
        public static class CShower {
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
        public static class CEnvCubemapFog {
            public const nint m_flEndDistance = 0x4E0; // float32
            public const nint m_flStartDistance = 0x4E4; // float32
            public const nint m_flFogFalloffExponent = 0x4E8; // float32
            public const nint m_bHeightFogEnabled = 0x4EC; // bool
            public const nint m_flFogHeightWidth = 0x4F0; // float32
            public const nint m_flFogHeightEnd = 0x4F4; // float32
            public const nint m_flFogHeightStart = 0x4F8; // float32
            public const nint m_flFogHeightExponent = 0x4FC; // float32
            public const nint m_flLODBias = 0x500; // float32
            public const nint m_bActive = 0x504; // bool
            public const nint m_bStartDisabled = 0x505; // bool
            public const nint m_flFogMaxOpacity = 0x508; // float32
            public const nint m_nCubemapSourceType = 0x50C; // int32
            public const nint m_hSkyMaterial = 0x510; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x518; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x520; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x528; // bool
            public const nint m_bFirstTime = 0x529; // bool
        }
        // Parent: CBaseButton
        // Field count: 0
        public static class CPhysicalButton {
        }
        // Parent: CModelPointEntity
        // Field count: 16
        public static class CEnvExplosion {
            public const nint m_iMagnitude = 0x790; // int32
            public const nint m_flPlayerDamage = 0x794; // float32
            public const nint m_iRadiusOverride = 0x798; // int32
            public const nint m_flInnerRadius = 0x79C; // float32
            public const nint m_spriteScale = 0x7A0; // int32
            public const nint m_flDamageForce = 0x7A4; // float32
            public const nint m_hInflictor = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_iCustomDamageType = 0x7AC; // DamageTypes_t
            public const nint m_bCreateDebris = 0x7B0; // bool
            public const nint m_iszExplosionType = 0x7B8; // CUtlSymbolLarge
            public const nint m_iszCustomEffectName = 0x7C0; // CUtlSymbolLarge
            public const nint m_iszCustomSoundName = 0x7C8; // CUtlSymbolLarge
            public const nint m_iClassIgnore = 0x7D0; // Class_T
            public const nint m_iClassIgnore2 = 0x7D4; // Class_T
            public const nint m_iszEntityIgnoreName = 0x7D8; // CUtlSymbolLarge
            public const nint m_hEntityIgnore = 0x7E0; // CHandle<CBaseEntity>
        }
        // Parent: CSoundEventEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class CSoundEventAABBEntity {
            public const nint m_vMins = 0x598; // Vector
            public const nint m_vMaxs = 0x5A4; // Vector
        }
        // Parent: CTriggerMultiple
        // Field count: 0
        public static class CTriggerOnce {
        }
        // Parent: CEntitySubclassVDataBase
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPrecipitationVData {
            public const nint m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_flInnerDistance = 0x108; // float32
            public const nint m_nAttachType = 0x10C; // ParticleAttachment_t
            public const nint m_bBatchSameVolumeType = 0x110; // bool
            public const nint m_nRTEnvCP = 0x114; // int32
            public const nint m_nRTEnvCPComponent = 0x118; // int32
            public const nint m_szModifier = 0x120; // CUtlString
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CLogicProximity {
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
        public static class CPointCommentaryNode {
            public const nint m_iszPreCommands = 0x9A8; // CUtlSymbolLarge
            public const nint m_iszPostCommands = 0x9B0; // CUtlSymbolLarge
            public const nint m_iszCommentaryFile = 0x9B8; // CUtlSymbolLarge
            public const nint m_iszViewTarget = 0x9C0; // CUtlSymbolLarge
            public const nint m_hViewTarget = 0x9C8; // CHandle<CBaseEntity>
            public const nint m_hViewTargetAngles = 0x9CC; // CHandle<CBaseEntity>
            public const nint m_iszViewPosition = 0x9D0; // CUtlSymbolLarge
            public const nint m_hViewPosition = 0x9D8; // CHandle<CBaseEntity>
            public const nint m_hViewPositionMover = 0x9DC; // CHandle<CBaseEntity>
            public const nint m_bPreventMovement = 0x9E0; // bool
            public const nint m_bUnderCrosshair = 0x9E1; // bool
            public const nint m_bUnstoppable = 0x9E2; // bool
            public const nint m_flFinishedTime = 0x9E4; // GameTime_t
            public const nint m_vecFinishOrigin = 0x9E8; // Vector
            public const nint m_vecOriginalAngles = 0x9F4; // QAngle
            public const nint m_vecFinishAngles = 0xA00; // QAngle
            public const nint m_bPreventChangesWhileMoving = 0xA0C; // bool
            public const nint m_bDisabled = 0xA0D; // bool
            public const nint m_vecTeleportOrigin = 0xA10; // Vector
            public const nint m_flAbortedPlaybackAt = 0xA1C; // GameTime_t
            public const nint m_pOnCommentaryStarted = 0xA20; // CEntityIOOutput
            public const nint m_pOnCommentaryStopped = 0xA48; // CEntityIOOutput
            public const nint m_bActive = 0xA70; // bool
            public const nint m_flStartTime = 0xA74; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0xA78; // float32
            public const nint m_iszTitle = 0xA80; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xA88; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xA90; // int32
            public const nint m_iNodeNumberMax = 0xA94; // int32
            public const nint m_bListenedTo = 0xA98; // bool
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
        public static class CPointClientUIWorldPanel {
            public const nint m_bIgnoreInput = 0x940; // bool
            public const nint m_bLit = 0x941; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0x942; // bool
            public const nint m_flWidth = 0x944; // float32
            public const nint m_flHeight = 0x948; // float32
            public const nint m_flDPI = 0x94C; // float32
            public const nint m_flInteractDistance = 0x950; // float32
            public const nint m_flDepthOffset = 0x954; // float32
            public const nint m_unOwnerContext = 0x958; // uint32
            public const nint m_unHorizontalAlign = 0x95C; // uint32
            public const nint m_unVerticalAlign = 0x960; // uint32
            public const nint m_unOrientation = 0x964; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x968; // bool
            public const nint m_vecCSSClasses = 0x970; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0x988; // bool
            public const nint m_bNoDepth = 0x989; // bool
            public const nint m_bRenderBackface = 0x98A; // bool
            public const nint m_bUseOffScreenIndicator = 0x98B; // bool
            public const nint m_bExcludeFromSaveGames = 0x98C; // bool
            public const nint m_bGrabbable = 0x98D; // bool
            public const nint m_bOnlyRenderToTexture = 0x98E; // bool
            public const nint m_bDisableMipGen = 0x98F; // bool
            public const nint m_nExplicitImageLayout = 0x990; // int32
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterContext {
            public const nint m_iFilterContext = 0x538; // CUtlSymbolLarge
        }
        // Parent: CPathParticleRope
        // Field count: 0
        public static class CPathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: None
        // Field count: 6
        public static class CBuoyancyHelper {
            public const nint m_nFluidType = 0x18; // CUtlStringToken
            public const nint m_flFluidDensity = 0x1C; // float32
            public const nint m_vecFractionOfWheelSubmergedForWheelFriction = 0x20; // CUtlVector<float32>
            public const nint m_vecWheelFrictionScales = 0x38; // CUtlVector<float32>
            public const nint m_vecFractionOfWheelSubmergedForWheelDrag = 0x50; // CUtlVector<float32>
            public const nint m_vecWheelDrag = 0x68; // CUtlVector<float32>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x538; // CUtlStringToken
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x250; // CHandle<CBasePlayerWeapon>
            public const nint m_bIsRescuing = 0x27C; // bool
            public const nint m_weaponPurchasesThisMatch = 0x280; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0x2D8; // WeaponPurchaseTracker_t
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CAISound {
            public const nint m_iSoundType = 0x4E0; // SoundTypes_t
            public const nint m_iSoundFlags = 0x4E2; // SoundFlags_t
            public const nint m_iVolume = 0x4E4; // int32
            public const nint m_iSoundIndex = 0x4E8; // int32
            public const nint m_flDuration = 0x4EC; // float32
            public const nint m_iszProxyEntityName = 0x4F0; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 7
        public static class CPointEntityFinder {
            public const nint m_hEntity = 0x4E0; // CHandle<CBaseEntity>
            public const nint m_iFilterName = 0x4E8; // CUtlSymbolLarge
            public const nint m_hFilter = 0x4F0; // CHandle<CBaseFilter>
            public const nint m_iRefName = 0x4F8; // CUtlSymbolLarge
            public const nint m_hReference = 0x500; // CHandle<CBaseEntity>
            public const nint m_FindMethod = 0x504; // EntFinderMethod_t
            public const nint m_OnFoundEntity = 0x508; // CEntityIOOutput
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
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x20; // ShardSolid_t
            public const nint m_vecPanelSize = 0x24; // Vector2D
            public const nint m_vecStressPositionA = 0x2C; // Vector2D
            public const nint m_vecStressPositionB = 0x34; // Vector2D
            public const nint m_vecPanelVertices = 0x40; // CNetworkUtlVectorBase<Vector2D>
            public const nint m_vInitialPanelVertices = 0x58; // CNetworkUtlVectorBase<Vector4D>
            public const nint m_flGlassHalfThickness = 0x70; // float32
            public const nint m_bHasParent = 0x74; // bool
            public const nint m_bParentFrozen = 0x75; // bool
            public const nint m_SurfacePropStringToken = 0x78; // CUtlStringToken
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0x9A8; // bool
            public const nint m_iShapeType = 0x9AC; // int32
            public const nint m_bConformToCollisionBounds = 0x9B0; // bool
            public const nint m_mPreferredCatchTransform = 0x9B4; // matrix3x4_t
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
        public static class CEnvSky {
            public const nint m_hSkyMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0x798; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0x7A0; // bool
            public const nint m_vTintColor = 0x7A1; // Color
            public const nint m_vTintColorLightingOnly = 0x7A5; // Color
            public const nint m_flBrightnessScale = 0x7AC; // float32
            public const nint m_nFogType = 0x7B0; // int32
            public const nint m_flFogMinStart = 0x7B4; // float32
            public const nint m_flFogMinEnd = 0x7B8; // float32
            public const nint m_flFogMaxStart = 0x7BC; // float32
            public const nint m_flFogMaxEnd = 0x7C0; // float32
            public const nint m_bEnabled = 0x7C4; // bool
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CPointVelocitySensor {
            public const nint m_hTargetEntity = 0x4E0; // CHandle<CBaseEntity>
            public const nint m_vecAxis = 0x4E4; // Vector
            public const nint m_bEnabled = 0x4F0; // bool
            public const nint m_fPrevVelocity = 0x4F4; // float32
            public const nint m_flAvgInterval = 0x4F8; // float32
            public const nint m_Velocity = 0x500; // CEntityOutputTemplate<float32>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterMassGreater {
            public const nint m_fFilterMass = 0x538; // float32
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterTeam {
            public const nint m_iFilterTeam = 0x538; // int32
        }
        // Parent: CFuncTrackTrain
        // Field count: 1
        public static class CFuncTankTrain {
            public const nint m_OnDeath = 0x8E0; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CNullEntity {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_observer {
        }
        // Parent: CMarkupVolumeWithRef
        // Field count: 1
        public static class CMarkupVolumeTagged_NavGame {
            public const nint m_bFloodFillAttribute = 0x7E8; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CBuyZone {
            public const nint m_LegacyTeamNum = 0x960; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x4F0; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x4F8; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x4FC; // bool
            public const nint m_pOutputOnSpawned = 0x500; // CEntityIOOutput
            public const nint m_clientOnlyEntityBehavior = 0x528; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x52C; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x530; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x548; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x560; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x568; // HSCRIPT
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CPhysForce {
            public const nint m_nameAttach = 0x4E8; // CUtlSymbolLarge
            public const nint m_force = 0x4F0; // float32
            public const nint m_forceTime = 0x4F4; // float32
            public const nint m_attachedObject = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_wasRestored = 0x4FC; // bool
            public const nint m_integrator = 0x500; // CConstantForceController
        }
        // Parent: CLogicalEntity
        // Field count: 6
        public static class CLogicDistanceAutosave {
            public const nint m_iszTargetEntity = 0x4E0; // CUtlSymbolLarge
            public const nint m_flDistanceToPlayer = 0x4E8; // float32
            public const nint m_bForceNewLevelUnit = 0x4EC; // bool
            public const nint m_bCheckCough = 0x4ED; // bool
            public const nint m_bThinkDangerous = 0x4EE; // bool
            public const nint m_flDangerousTime = 0x4F0; // float32
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_flRange = 0x4E4; // float32
            public const nint m_nImportance = 0x4E8; // int32
            public const nint m_nLightChoice = 0x4EC; // int32
            public const nint m_hLight = 0x4F0; // CHandle<CBaseEntity>
        }
        // Parent: CSoundOpvarSetPointEntity
        // Field count: 9
        public static class CSoundOpvarSetAABBEntity {
            public const nint m_vDistanceInnerMins = 0x688; // Vector
            public const nint m_vDistanceInnerMaxs = 0x694; // Vector
            public const nint m_vDistanceOuterMins = 0x6A0; // Vector
            public const nint m_vDistanceOuterMaxs = 0x6AC; // Vector
            public const nint m_nAABBDirection = 0x6B8; // int32
            public const nint m_vInnerMins = 0x6BC; // Vector
            public const nint m_vInnerMaxs = 0x6C8; // Vector
            public const nint m_vOuterMins = 0x6D4; // Vector
            public const nint m_vOuterMaxs = 0x6E0; // Vector
        }
        // Parent: None
        // Field count: 2
        public static class CEnvWindShared__WindVariationEvent_t {
            public const nint m_flWindAngleVariation = 0x0; // float32
            public const nint m_flWindSpeedVariation = 0x4; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoAPI {
        }
        // Parent: CTriggerOnce
        // Field count: 1
        public static class CScriptTriggerOnce {
            public const nint m_vExtent = 0x988; // Vector
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CNavWalkable {
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
        public static class CGlowProperty {
            public const nint m_fGlowColor = 0x8; // Vector
            public const nint m_iGlowType = 0x30; // int32
            public const nint m_iGlowTeam = 0x34; // int32
            public const nint m_nGlowRange = 0x38; // int32
            public const nint m_nGlowRangeMin = 0x3C; // int32
            public const nint m_glowColorOverride = 0x40; // Color
            public const nint m_bFlashing = 0x44; // bool
            public const nint m_flGlowTime = 0x48; // float32
            public const nint m_flGlowStartTime = 0x4C; // float32
            public const nint m_bEligibleForScreenHighlight = 0x50; // bool
            public const nint m_bGlowing = 0x51; // bool
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 3
        public static class CFlashbangProjectile {
            public const nint m_flTimeToDetonate = 0xB50; // float32
            public const nint m_numOpponentsHit = 0xB54; // uint8
            public const nint m_numTeammatesHit = 0xB55; // uint8
        }
        // Parent: CPointClientUIWorldPanel
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        public static class CPointClientUIWorldTextPanel {
            public const nint m_messageText = 0x998; // char[512]
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintTarget {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x40; // CHandle<CBaseEntity>
            public const nint m_hCarriedHostageProp = 0x44; // CHandle<CBaseEntity>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSSG08 {
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicBranch {
            public const nint m_bInValue = 0x4E0; // bool
            public const nint m_Listeners = 0x4E8; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_OnTrue = 0x500; // CEntityIOOutput
            public const nint m_OnFalse = 0x528; // CEntityIOOutput
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponUMP45 {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CSpriteAlias_env_glow {
        }
        // Parent: CBaseToggle
        // Field count: 25
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class CBaseButton {
            public const nint m_angMoveEntitySpace = 0x810; // QAngle
            public const nint m_fStayPushed = 0x81C; // bool
            public const nint m_fRotating = 0x81D; // bool
            public const nint m_ls = 0x820; // locksound_t
            public const nint m_sUseSound = 0x840; // CUtlSymbolLarge
            public const nint m_sLockedSound = 0x848; // CUtlSymbolLarge
            public const nint m_sUnlockedSound = 0x850; // CUtlSymbolLarge
            public const nint m_sOverrideAnticipationName = 0x858; // CUtlSymbolLarge
            public const nint m_bLocked = 0x860; // bool
            public const nint m_bDisabled = 0x861; // bool
            public const nint m_flUseLockedTime = 0x864; // GameTime_t
            public const nint m_bSolidBsp = 0x868; // bool
            public const nint m_OnDamaged = 0x870; // CEntityIOOutput
            public const nint m_OnPressed = 0x898; // CEntityIOOutput
            public const nint m_OnUseLocked = 0x8C0; // CEntityIOOutput
            public const nint m_OnIn = 0x8E8; // CEntityIOOutput
            public const nint m_OnOut = 0x910; // CEntityIOOutput
            public const nint m_nState = 0x938; // int32
            public const nint m_hConstraint = 0x93C; // CEntityHandle
            public const nint m_hConstraintParent = 0x940; // CEntityHandle
            public const nint m_bForceNpcExclude = 0x944; // bool
            public const nint m_sGlowEntity = 0x948; // CUtlSymbolLarge
            public const nint m_glowEntity = 0x950; // CHandle<CBaseModelEntity>
            public const nint m_usable = 0x954; // bool
            public const nint m_szDisplayText = 0x958; // CUtlSymbolLarge
        }
        // Parent: CPhysConstraint
        // Field count: 6
        public static class CPhysLength {
            public const nint m_offset = 0x558; // Vector[2]
            public const nint m_vecAttach = 0x570; // Vector
            public const nint m_addLength = 0x57C; // float32
            public const nint m_minLength = 0x580; // float32
            public const nint m_totalLength = 0x584; // float32
            public const nint m_bEnableCollision = 0x588; // bool
        }
        // Parent: CBaseEntity
        // Field count: 48
        public static class CLogicNPCCounter {
            public const nint m_OnMinCountAll = 0x4E0; // CEntityIOOutput
            public const nint m_OnMaxCountAll = 0x508; // CEntityIOOutput
            public const nint m_OnFactorAll = 0x530; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDistAll = 0x558; // CEntityOutputTemplate<float32>
            public const nint m_OnMinCount_1 = 0x580; // CEntityIOOutput
            public const nint m_OnMaxCount_1 = 0x5A8; // CEntityIOOutput
            public const nint m_OnFactor_1 = 0x5D0; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDist_1 = 0x5F8; // CEntityOutputTemplate<float32>
            public const nint m_OnMinCount_2 = 0x620; // CEntityIOOutput
            public const nint m_OnMaxCount_2 = 0x648; // CEntityIOOutput
            public const nint m_OnFactor_2 = 0x670; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDist_2 = 0x698; // CEntityOutputTemplate<float32>
            public const nint m_OnMinCount_3 = 0x6C0; // CEntityIOOutput
            public const nint m_OnMaxCount_3 = 0x6E8; // CEntityIOOutput
            public const nint m_OnFactor_3 = 0x710; // CEntityOutputTemplate<float32>
            public const nint m_OnMinPlayerDist_3 = 0x738; // CEntityOutputTemplate<float32>
            public const nint m_hSource = 0x760; // CEntityHandle
            public const nint m_iszSourceEntityName = 0x768; // CUtlSymbolLarge
            public const nint m_flDistanceMax = 0x770; // float32
            public const nint m_bDisabled = 0x774; // bool
            public const nint m_nMinCountAll = 0x778; // int32
            public const nint m_nMaxCountAll = 0x77C; // int32
            public const nint m_nMinFactorAll = 0x780; // int32
            public const nint m_nMaxFactorAll = 0x784; // int32
            public const nint m_iszNPCClassname_1 = 0x790; // CUtlSymbolLarge
            public const nint m_nNPCState_1 = 0x798; // int32
            public const nint m_bInvertState_1 = 0x79C; // bool
            public const nint m_nMinCount_1 = 0x7A0; // int32
            public const nint m_nMaxCount_1 = 0x7A4; // int32
            public const nint m_nMinFactor_1 = 0x7A8; // int32
            public const nint m_nMaxFactor_1 = 0x7AC; // int32
            public const nint m_flDefaultDist_1 = 0x7B4; // float32
            public const nint m_iszNPCClassname_2 = 0x7B8; // CUtlSymbolLarge
            public const nint m_nNPCState_2 = 0x7C0; // int32
            public const nint m_bInvertState_2 = 0x7C4; // bool
            public const nint m_nMinCount_2 = 0x7C8; // int32
            public const nint m_nMaxCount_2 = 0x7CC; // int32
            public const nint m_nMinFactor_2 = 0x7D0; // int32
            public const nint m_nMaxFactor_2 = 0x7D4; // int32
            public const nint m_flDefaultDist_2 = 0x7DC; // float32
            public const nint m_iszNPCClassname_3 = 0x7E0; // CUtlSymbolLarge
            public const nint m_nNPCState_3 = 0x7E8; // int32
            public const nint m_bInvertState_3 = 0x7EC; // bool
            public const nint m_nMinCount_3 = 0x7F0; // int32
            public const nint m_nMaxCount_3 = 0x7F4; // int32
            public const nint m_nMinFactor_3 = 0x7F8; // int32
            public const nint m_nMaxFactor_3 = 0x7FC; // int32
            public const nint m_flDefaultDist_3 = 0x804; // float32
        }
        // Parent: CPredictedViewModel
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
        public static class CCSGOViewModel {
            public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x9F0; // bool
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CBlood {
            public const nint m_vecSprayAngles = 0x4E0; // QAngle
            public const nint m_vecSprayDir = 0x4EC; // Vector
            public const nint m_flAmount = 0x4F8; // float32
            public const nint m_Color = 0x4FC; // BloodType
        }
        // Parent: CLogicalEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_fadeColor (Color)
        public static class CEnvFade {
            public const nint m_fadeColor = 0x4E0; // Color
            public const nint m_Duration = 0x4E4; // float32
            public const nint m_HoldDuration = 0x4E8; // float32
            public const nint m_OnBeginFade = 0x4F0; // CEntityIOOutput
        }
        // Parent: CBaseProp
        // Field count: 33
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        // NetworkVarNames: m_noGhostCollision (bool)
        public static class CBreakableProp {
            public const nint m_CPropDataComponent = 0x9F0; // CPropDataComponent
            public const nint m_OnBreak = 0xA30; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0xA58; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0xA80; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0xAA8; // float32
            public const nint m_iMinHealthDmg = 0xAAC; // int32
            public const nint m_preferredCarryAngles = 0xAB0; // QAngle
            public const nint m_flPressureDelay = 0xABC; // float32
            public const nint m_flDefBurstScale = 0xAC0; // float32
            public const nint m_vDefBurstOffset = 0xAC4; // Vector
            public const nint m_hBreaker = 0xAD0; // CHandle<CBaseEntity>
            public const nint m_PerformanceMode = 0xAD4; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0xAD8; // GameTime_t
            public const nint m_BreakableContentsType = 0xADC; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0xAE0; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0xAE8; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0xAF0; // bool
            public const nint m_explodeDamage = 0xAF4; // float32
            public const nint m_explodeRadius = 0xAF8; // float32
            public const nint m_explosionDelay = 0xB00; // float32
            public const nint m_explosionBuildupSound = 0xB08; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0xB10; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0xB18; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0xB20; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0xB28; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xB2C; // GameTime_t
            public const nint m_bOriginalBlockLOS = 0xB30; // bool
            public const nint m_flDefaultFadeScale = 0xB34; // float32
            public const nint m_hLastAttacker = 0xB38; // CHandle<CBaseEntity>
            public const nint m_hFlareEnt = 0xB3C; // CHandle<CBaseEntity>
            public const nint m_bUsePuntSound = 0xB40; // bool
            public const nint m_iszPuntSound = 0xB48; // CUtlSymbolLarge
            public const nint m_noGhostCollision = 0xB50; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CPathSimpleAPI {
        }
        // Parent: CBaseFlex
        // Field count: 9
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
        public static class CBaseCombatCharacter {
            public const nint m_bForceServerRagdoll = 0xA38; // bool
            public const nint m_hMyWearables = 0xA40; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            public const nint m_impactEnergyScale = 0xA58; // float32
            public const nint m_bApplyStressDamage = 0xA5C; // bool
            public const nint m_iDamageCount = 0xAA0; // int32
            public const nint m_pVecRelationships = 0xAA8; // CUtlVector<RelationshipOverride_t>*
            public const nint m_strRelationships = 0xAB0; // CUtlSymbolLarge
            public const nint m_eHull = 0xAB8; // Hull_t
            public const nint m_nNavHullIdx = 0xABC; // uint32
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
        public static class CInferno {
            public const nint m_firePositions = 0x7A0; // Vector[64]
            public const nint m_fireParentPositions = 0xAA0; // Vector[64]
            public const nint m_bFireIsBurning = 0xDA0; // bool[64]
            public const nint m_BurnNormal = 0xDE0; // Vector[64]
            public const nint m_fireCount = 0x10E0; // int32
            public const nint m_nInfernoType = 0x10E4; // int32
            public const nint m_nFireEffectTickBegin = 0x10E8; // int32
            public const nint m_nFireLifetime = 0x10EC; // float32
            public const nint m_bInPostEffectTime = 0x10F0; // bool
            public const nint m_nFiresExtinguishCount = 0x10F4; // int32
            public const nint m_bWasCreatedInSmoke = 0x10F8; // bool
            public const nint m_extent = 0x1300; // Extent
            public const nint m_damageTimer = 0x1318; // CountdownTimer
            public const nint m_damageRampTimer = 0x1330; // CountdownTimer
            public const nint m_splashVelocity = 0x1348; // Vector
            public const nint m_InitialSplashVelocity = 0x1354; // Vector
            public const nint m_startPos = 0x1360; // Vector
            public const nint m_vecOriginalSpawnLocation = 0x136C; // Vector
            public const nint m_activeTimer = 0x1378; // IntervalTimer
            public const nint m_fireSpawnOffset = 0x1388; // int32
            public const nint m_nMaxFlames = 0x138C; // int32
            public const nint m_nSpreadCount = 0x1390; // int32
            public const nint m_BookkeepingTimer = 0x1398; // CountdownTimer
            public const nint m_NextSpreadTimer = 0x13B0; // CountdownTimer
            public const nint m_nSourceItemDefIndex = 0x13C8; // uint16
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CEnvGlobal {
            public const nint m_outCounter = 0x4E0; // CEntityOutputTemplate<int32>
            public const nint m_globalstate = 0x508; // CUtlSymbolLarge
            public const nint m_triggermode = 0x510; // int32
            public const nint m_initialstate = 0x514; // int32
            public const nint m_counter = 0x518; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CBaseFilter {
            public const nint m_bNegated = 0x4E0; // bool
            public const nint m_OnPass = 0x4E8; // CEntityIOOutput
            public const nint m_OnFail = 0x510; // CEntityIOOutput
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
        public static class CTeam {
            public const nint m_aPlayerControllers = 0x4E0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x4F8; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
            public const nint m_iScore = 0x510; // int32
            public const nint m_szTeamname = 0x514; // char[129]
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponUSPSilencer {
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
        public static class CSprite {
            public const nint m_hSpriteMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0x798; // CHandle<CBaseEntity>
            public const nint m_nAttachment = 0x79C; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0x7A0; // float32
            public const nint m_flFrame = 0x7A4; // float32
            public const nint m_flDieTime = 0x7A8; // GameTime_t
            public const nint m_nBrightness = 0x7B8; // uint32
            public const nint m_flBrightnessDuration = 0x7BC; // float32
            public const nint m_flSpriteScale = 0x7C0; // float32
            public const nint m_flScaleDuration = 0x7C4; // float32
            public const nint m_bWorldSpaceScale = 0x7C8; // bool
            public const nint m_flGlowProxySize = 0x7CC; // float32
            public const nint m_flHDRColorScale = 0x7D0; // float32
            public const nint m_flLastTime = 0x7D4; // GameTime_t
            public const nint m_flMaxFrame = 0x7D8; // float32
            public const nint m_flStartScale = 0x7DC; // float32
            public const nint m_flDestScale = 0x7E0; // float32
            public const nint m_flScaleTimeStart = 0x7E4; // GameTime_t
            public const nint m_nStartBrightness = 0x7E8; // int32
            public const nint m_nDestBrightness = 0x7EC; // int32
            public const nint m_flBrightnessTimeStart = 0x7F0; // GameTime_t
            public const nint m_nSpriteWidth = 0x7F4; // int32
            public const nint m_nSpriteHeight = 0x7F8; // int32
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerGravity {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CServerRagdollTrigger {
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x4F8; // Vector
            public const nint m_vBoxMaxs = 0x504; // Vector
        }
        // Parent: CBaseEntity
        // Field count: 3
        public static class CPathMover {
            public const nint m_vecPathNodes = 0x4E8; // CUtlVector<CHandle<CMoverPathNode>>
            public const nint m_flPathLength = 0x500; // float32
            public const nint m_bClosedLoop = 0x504; // bool
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CFlashbang {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponAug {
        }
        // Parent: CDynamicProp
        // Field count: 28
        //
        // Metadata:
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        public static class CChicken {
            public const nint m_AttributeManager = 0xC78; // CAttributeContainer
            public const nint m_updateTimer = 0xF40; // CountdownTimer
            public const nint m_stuckAnchor = 0xF58; // Vector
            public const nint m_stuckTimer = 0xF68; // CountdownTimer
            public const nint m_collisionStuckTimer = 0xF80; // CountdownTimer
            public const nint m_isOnGround = 0xF98; // bool
            public const nint m_vFallVelocity = 0xF9C; // Vector
            public const nint m_desiredActivity = 0xFA8; // ChickenActivity
            public const nint m_currentActivity = 0xFAC; // ChickenActivity
            public const nint m_activityTimer = 0xFB0; // CountdownTimer
            public const nint m_turnRate = 0xFC8; // float32
            public const nint m_fleeFrom = 0xFCC; // CHandle<CBaseEntity>
            public const nint m_moveRateThrottleTimer = 0xFD0; // CountdownTimer
            public const nint m_startleTimer = 0xFE8; // CountdownTimer
            public const nint m_vocalizeTimer = 0x1000; // CountdownTimer
            public const nint m_flWhenZombified = 0x1018; // GameTime_t
            public const nint m_jumpedThisFrame = 0x101C; // bool
            public const nint m_leader = 0x1020; // CHandle<CCSPlayerPawn>
            public const nint m_reuseTimer = 0x1038; // CountdownTimer
            public const nint m_hasBeenUsed = 0x1050; // bool
            public const nint m_jumpTimer = 0x1058; // CountdownTimer
            public const nint m_flLastJumpTime = 0x1070; // float32
            public const nint m_bInJump = 0x1074; // bool
            public const nint m_repathTimer = 0x3080; // CountdownTimer
            public const nint m_vecPathGoal = 0x3118; // Vector
            public const nint m_flActiveFollowStartTime = 0x3124; // GameTime_t
            public const nint m_followMinuteTimer = 0x3128; // CountdownTimer
            public const nint m_BlockDirectionTimer = 0x3148; // CountdownTimer
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CChangeLevel {
            public const nint m_sMapName = 0x960; // CUtlString
            public const nint m_sLandmarkName = 0x968; // CUtlString
            public const nint m_OnChangeLevel = 0x970; // CEntityIOOutput
            public const nint m_bTouched = 0x998; // bool
            public const nint m_bNoTouch = 0x999; // bool
            public const nint m_bNewChapter = 0x99A; // bool
            public const nint m_bOnChangeLevelFired = 0x99B; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerLerpObject {
            public const nint m_iszLerpTarget = 0x960; // CUtlSymbolLarge
            public const nint m_hLerpTarget = 0x968; // CHandle<CBaseEntity>
            public const nint m_iszLerpTargetAttachment = 0x970; // CUtlSymbolLarge
            public const nint m_hLerpTargetAttachment = 0x978; // AttachmentHandle_t
            public const nint m_flLerpDuration = 0x97C; // float32
            public const nint m_bLerpRestoreMoveType = 0x980; // bool
            public const nint m_bSingleLerpObject = 0x981; // bool
            public const nint m_vecLerpingObjects = 0x988; // CUtlVector<lerpdata_t>
            public const nint m_iszLerpEffect = 0x9A0; // CUtlSymbolLarge
            public const nint m_iszLerpSound = 0x9A8; // CUtlSymbolLarge
            public const nint m_bAttachTouchingObject = 0x9B0; // bool
            public const nint m_hEntityToWaitForDisconnect = 0x9B4; // CHandle<CBaseEntity>
            public const nint m_OnLerpStarted = 0x9B8; // CEntityIOOutput
            public const nint m_OnLerpFinished = 0x9E0; // CEntityIOOutput
        }
        // Parent: CBaseToggle
        // Field count: 12
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class CBaseTrigger {
            public const nint m_bDisabled = 0x810; // bool
            public const nint m_iFilterName = 0x818; // CUtlSymbolLarge
            public const nint m_hFilter = 0x820; // CHandle<CBaseFilter>
            public const nint m_OnStartTouch = 0x828; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0x850; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x878; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0x8A0; // CEntityIOOutput
            public const nint m_OnTouching = 0x8C8; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0x8F0; // CEntityIOOutput
            public const nint m_OnNotTouching = 0x918; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0x940; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bClientSidePredicted = 0x958; // bool
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CLogicScript {
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
        public static class CEconEntity {
            public const nint m_AttributeManager = 0xA48; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0xD10; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0xD14; // uint32
            public const nint m_nFallbackPaintKit = 0xD18; // int32
            public const nint m_nFallbackSeed = 0xD1C; // int32
            public const nint m_flFallbackWear = 0xD20; // float32
            public const nint m_nFallbackStatTrak = 0xD24; // int32
            public const nint m_hOldProvidee = 0xD28; // CHandle<CBaseEntity>
            public const nint m_iOldOwnerClass = 0xD2C; // int32
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
        // Field count: 0
        public static class CServerOnlyEntity {
        }
        // Parent: None
        // Field count: 8
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
        public static class CPointWorldText {
            public const nint m_messageText = 0x790; // char[512]
            public const nint m_FontName = 0x990; // char[64]
            public const nint m_BackgroundMaterialName = 0x9D0; // char[64]
            public const nint m_bEnabled = 0xA10; // bool
            public const nint m_bFullbright = 0xA11; // bool
            public const nint m_flWorldUnitsPerPx = 0xA14; // float32
            public const nint m_flFontSize = 0xA18; // float32
            public const nint m_flDepthOffset = 0xA1C; // float32
            public const nint m_bDrawBackground = 0xA20; // bool
            public const nint m_flBackgroundBorderWidth = 0xA24; // float32
            public const nint m_flBackgroundBorderHeight = 0xA28; // float32
            public const nint m_flBackgroundWorldToUV = 0xA2C; // float32
            public const nint m_Color = 0xA30; // Color
            public const nint m_nJustifyHorizontal = 0xA34; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0xA38; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0xA3C; // PointWorldTextReorientMode_t
        }
        // Parent: CSoundAreaEntityBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class CSoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x500; // Vector
            public const nint m_vMax = 0x50C; // Vector
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
        public static class CTriggerPhysics {
            public const nint m_gravityScale = 0x970; // float32
            public const nint m_linearLimit = 0x974; // float32
            public const nint m_linearDamping = 0x978; // float32
            public const nint m_angularLimit = 0x97C; // float32
            public const nint m_angularDamping = 0x980; // float32
            public const nint m_linearForce = 0x984; // float32
            public const nint m_flFrequency = 0x988; // float32
            public const nint m_flDampingRatio = 0x98C; // float32
            public const nint m_vecLinearForcePointAt = 0x990; // Vector
            public const nint m_bCollapseToForcePoint = 0x99C; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x9A0; // Vector
            public const nint m_vecLinearForceDirection = 0x9AC; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0x9B8; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CPointBroadcastClientCommand {
        }
        // Parent: CBaseModelEntity
        // Field count: 26
        public static class CFuncShatterglass {
            public const nint m_matPanelTransform = 0x790; // matrix3x4_t
            public const nint m_matPanelTransformWsTemp = 0x7C0; // matrix3x4_t
            public const nint m_vecShatterGlassShards = 0x7F0; // CUtlVector<uint32>
            public const nint m_PanelSize = 0x808; // Vector2D
            public const nint m_flLastShatterSoundEmitTime = 0x810; // GameTime_t
            public const nint m_flLastCleanupTime = 0x814; // GameTime_t
            public const nint m_flInitAtTime = 0x818; // GameTime_t
            public const nint m_flGlassThickness = 0x81C; // float32
            public const nint m_flSpawnInvulnerability = 0x820; // float32
            public const nint m_bBreakSilent = 0x824; // bool
            public const nint m_bBreakShardless = 0x825; // bool
            public const nint m_bBroken = 0x826; // bool
            public const nint m_bGlassNavIgnore = 0x827; // bool
            public const nint m_bGlassInFrame = 0x828; // bool
            public const nint m_bStartBroken = 0x829; // bool
            public const nint m_iInitialDamageType = 0x82A; // uint8
            public const nint m_szDamagePositioningEntityName01 = 0x830; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName02 = 0x838; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName03 = 0x840; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName04 = 0x848; // CUtlSymbolLarge
            public const nint m_vInitialDamagePositions = 0x850; // CUtlVector<Vector>
            public const nint m_vExtraDamagePositions = 0x868; // CUtlVector<Vector>
            public const nint m_vInitialPanelVertices = 0x880; // CUtlVector<Vector4D>
            public const nint m_OnBroken = 0x898; // CEntityIOOutput
            public const nint m_iSurfaceType = 0x8C0; // uint8
            public const nint m_hMaterialDamageBase = 0x8C8; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CBaseButton
        // Field count: 0
        public static class CRotButton {
        }
        // Parent: CSoundEventEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class CSoundEventSphereEntity {
            public const nint m_flRadius = 0x598; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponHKP2000 {
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
        public static class CPlantedC4 {
            public const nint m_bBombTicking = 0x9B0; // bool
            public const nint m_flC4Blow = 0x9B4; // GameTime_t
            public const nint m_nBombSite = 0x9B8; // int32
            public const nint m_nSourceSoundscapeHash = 0x9BC; // int32
            public const nint m_AttributeManager = 0x9C0; // CAttributeContainer
            public const nint m_OnBombDefused = 0xC88; // CEntityIOOutput
            public const nint m_OnBombBeginDefuse = 0xCB0; // CEntityIOOutput
            public const nint m_OnBombDefuseAborted = 0xCD8; // CEntityIOOutput
            public const nint m_bCannotBeDefused = 0xD00; // bool
            public const nint m_entitySpottedState = 0xD08; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xD20; // int32
            public const nint m_bTrainingPlacedByPlayer = 0xD24; // bool
            public const nint m_bHasExploded = 0xD25; // bool
            public const nint m_flTimerLength = 0xD28; // float32
            public const nint m_bBeingDefused = 0xD2C; // bool
            public const nint m_fLastDefuseTime = 0xD34; // GameTime_t
            public const nint m_flDefuseLength = 0xD3C; // float32
            public const nint m_flDefuseCountDown = 0xD40; // GameTime_t
            public const nint m_bBombDefused = 0xD44; // bool
            public const nint m_hBombDefuser = 0xD48; // CHandle<CCSPlayerPawn>
            public const nint m_hControlPanel = 0xD4C; // CHandle<CBaseEntity>
            public const nint m_iProgressBarTime = 0xD50; // int32
            public const nint m_bVoiceAlertFired = 0xD54; // bool
            public const nint m_bVoiceAlertPlayed = 0xD55; // bool[4]
            public const nint m_flNextBotBeepTime = 0xD5C; // GameTime_t
            public const nint m_angCatchUpToPlayerEye = 0xD64; // QAngle
            public const nint m_flLastSpinDetectionTime = 0xD70; // GameTime_t
        }
        // Parent: CBaseClientUIEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hActivator (EHANDLE)
        public static class CPointClientUIDialog {
            public const nint m_hActivator = 0x940; // CHandle<CBaseEntity>
            public const nint m_bStartEnabled = 0x944; // bool
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CEnvSplash {
            public const nint m_flScale = 0x4E0; // float32
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
        public static class fogparams_t {
            public const nint dirPrimary = 0x8; // Vector
            public const nint colorPrimary = 0x14; // Color
            public const nint colorSecondary = 0x18; // Color
            public const nint colorPrimaryLerpTo = 0x1C; // Color
            public const nint colorSecondaryLerpTo = 0x20; // Color
            public const nint start = 0x24; // float32
            public const nint end = 0x28; // float32
            public const nint farz = 0x2C; // float32
            public const nint maxdensity = 0x30; // float32
            public const nint exponent = 0x34; // float32
            public const nint HDRColorScale = 0x38; // float32
            public const nint skyboxFogFactor = 0x3C; // float32
            public const nint skyboxFogFactorLerpTo = 0x40; // float32
            public const nint startLerpTo = 0x44; // float32
            public const nint endLerpTo = 0x48; // float32
            public const nint maxdensityLerpTo = 0x4C; // float32
            public const nint lerptime = 0x50; // GameTime_t
            public const nint duration = 0x54; // float32
            public const nint blendtobackground = 0x58; // float32
            public const nint scattering = 0x5C; // float32
            public const nint locallightscale = 0x60; // float32
            public const nint enable = 0x64; // bool
            public const nint blend = 0x65; // bool
            public const nint m_bNoReflectionFog = 0x66; // bool
            public const nint m_bPadding = 0x67; // bool
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CWeaponNOVA {
        }
        // Parent: CPointCamera
        // Field count: 1
        public static class CPointCameraVFOV {
            public const nint m_flVerticalFOV = 0x540; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class CWeaponTaser {
            public const nint m_fFireTime = 0xF88; // GameTime_t
            public const nint m_nLastAttackTick = 0xF8C; // int32
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CWaterBullet {
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CMarkupVolume {
            public const nint m_bDisabled = 0x790; // bool
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CMessage {
            public const nint m_iszMessage = 0x4E0; // CUtlSymbolLarge
            public const nint m_MessageVolume = 0x4E8; // float32
            public const nint m_MessageAttenuation = 0x4EC; // int32
            public const nint m_Radius = 0x4F0; // float32
            public const nint m_sNoise = 0x4F8; // CUtlSymbolLarge
            public const nint m_OnShowMessage = 0x500; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 5
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        public static class CLogicGameEventListener {
            public const nint m_OnEventFired = 0x4F0; // CEntityIOOutput
            public const nint m_iszGameEventName = 0x518; // CUtlSymbolLarge
            public const nint m_iszGameEventItem = 0x520; // CUtlSymbolLarge
            public const nint m_bEnabled = 0x528; // bool
            public const nint m_bStartDisabled = 0x529; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 15
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        public static class CBreakable {
            public const nint m_CPropDataComponent = 0x798; // CPropDataComponent
            public const nint m_Material = 0x7D8; // Materials
            public const nint m_hBreaker = 0x7DC; // CHandle<CBaseEntity>
            public const nint m_Explosion = 0x7E0; // Explosions
            public const nint m_iszSpawnObject = 0x7E8; // CUtlSymbolLarge
            public const nint m_flPressureDelay = 0x7F0; // float32
            public const nint m_iMinHealthDmg = 0x7F4; // int32
            public const nint m_iszPropData = 0x7F8; // CUtlSymbolLarge
            public const nint m_impactEnergyScale = 0x800; // float32
            public const nint m_nOverrideBlockLOS = 0x804; // EOverrideBlockLOS_t
            public const nint m_OnBreak = 0x808; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x830; // CEntityOutputTemplate<float32>
            public const nint m_PerformanceMode = 0x858; // PerformanceMode_t
            public const nint m_hPhysicsAttacker = 0x85C; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x860; // GameTime_t
        }
        // Parent: CBaseModelEntity
        // Field count: 16
        public static class CBaseToggle {
            public const nint m_toggle_state = 0x790; // TOGGLE_STATE
            public const nint m_flMoveDistance = 0x794; // float32
            public const nint m_flWait = 0x798; // float32
            public const nint m_flLip = 0x79C; // float32
            public const nint m_bAlwaysFireBlockedOutputs = 0x7A0; // bool
            public const nint m_vecPosition1 = 0x7A4; // Vector
            public const nint m_vecPosition2 = 0x7B0; // Vector
            public const nint m_vecMoveAng = 0x7BC; // QAngle
            public const nint m_vecAngle1 = 0x7C8; // QAngle
            public const nint m_vecAngle2 = 0x7D4; // QAngle
            public const nint m_flHeight = 0x7E0; // float32
            public const nint m_hActivator = 0x7E4; // CHandle<CBaseEntity>
            public const nint m_vecFinalDest = 0x7E8; // Vector
            public const nint m_vecFinalAngle = 0x7F4; // QAngle
            public const nint m_movementType = 0x800; // int32
            public const nint m_sMaster = 0x808; // CUtlSymbolLarge
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoTarget {
        }
        // Parent: CRotButton
        // Field count: 14
        public static class CMomentaryRotButton {
            public const nint m_Position = 0x960; // CEntityOutputTemplate<float32>
            public const nint m_OnUnpressed = 0x988; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x9B0; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x9D8; // CEntityIOOutput
            public const nint m_OnReachedPosition = 0xA00; // CEntityIOOutput
            public const nint m_lastUsed = 0xA28; // int32
            public const nint m_start = 0xA2C; // QAngle
            public const nint m_end = 0xA38; // QAngle
            public const nint m_IdealYaw = 0xA44; // float32
            public const nint m_sNoise = 0xA48; // CUtlSymbolLarge
            public const nint m_bUpdateTarget = 0xA50; // bool
            public const nint m_direction = 0xA54; // int32
            public const nint m_returnSpeed = 0xA58; // float32
            public const nint m_flStartPosition = 0xA5C; // float32
        }
        // Parent: CEntityComponent
        // Field count: 10
        public static class CPropDataComponent {
            public const nint m_flDmgModBullet = 0x10; // float32
            public const nint m_flDmgModClub = 0x14; // float32
            public const nint m_flDmgModExplosive = 0x18; // float32
            public const nint m_flDmgModFire = 0x1C; // float32
            public const nint m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
            public const nint m_iszBasePropData = 0x28; // CUtlSymbolLarge
            public const nint m_nInteractions = 0x30; // int32
            public const nint m_bSpawnMotionDisabled = 0x34; // bool
            public const nint m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
            public const nint m_nMotionDisabledSpawnFlag = 0x3C; // int32
        }
        // Parent: CRulePointEntity
        // Field count: 2
        public static class CGameText {
            public const nint m_iszMessage = 0x7A0; // CUtlSymbolLarge
            public const nint m_textParms = 0x7A8; // hudtextparms_t
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP5SD {
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
        public static class CTextureBasedAnimatable {
            public const nint m_bLoop = 0x790; // bool
            public const nint m_flFPS = 0x794; // float32
            public const nint m_hPositionKeys = 0x798; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0x7A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0x7A8; // Vector
            public const nint m_vAnimationBoundsMax = 0x7B4; // Vector
            public const nint m_flStartTime = 0x7C0; // float32
            public const nint m_flStartFrame = 0x7C4; // float32
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 3
        public static class CMarkupVolumeWithRef {
            public const nint m_bUseRef = 0x7D0; // bool
            public const nint m_vRefPos = 0x7D4; // Vector
            public const nint m_flRefDot = 0x7E0; // float32
        }
        // Parent: CPhysForce
        // Field count: 1
        public static class CPhysThruster {
            public const nint m_localOrigin = 0x540; // Vector
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPointScriptExtensions_player {
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
        public static class CCitadelSoundOpvarSetOBB {
            public const nint m_iszStackName = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x4F0; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x4F8; // Vector
            public const nint m_vDistanceInnerMaxs = 0x504; // Vector
            public const nint m_vDistanceOuterMins = 0x510; // Vector
            public const nint m_vDistanceOuterMaxs = 0x51C; // Vector
            public const nint m_nAABBDirection = 0x528; // int32
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
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponFamas {
        }
        // Parent: CPhysicsProp
        // Field count: 3
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class CShatterGlassShardPhysics {
            public const nint m_bDebris = 0xD00; // bool
            public const nint m_hParentShard = 0xD04; // uint32
            public const nint m_ShardDesc = 0xD08; // shard_model_desc_t
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterModel {
            public const nint m_iFilterModel = 0x538; // CUtlSymbolLarge
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
        public static class CCSPlayerPawnBase {
            public const nint m_CTouchExpansionComponent = 0xC68; // CTouchExpansionComponent
            public const nint m_pPingServices = 0xCB8; // CCSPlayer_PingServices*
            public const nint m_pViewModelServices = 0xCC0; // CPlayer_ViewModelServices*
            public const nint m_blindUntilTime = 0xCC8; // GameTime_t
            public const nint m_blindStartTime = 0xCCC; // GameTime_t
            public const nint m_iPlayerState = 0xCD0; // CSPlayerState
            public const nint m_bRespawning = 0xD80; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0xD84; // GameTime_t
            public const nint m_bGunGameImmunity = 0xD88; // bool
            public const nint m_fMolotovDamageTime = 0xD8C; // float32
            public const nint m_bHasMovedSinceSpawn = 0xD90; // bool
            public const nint m_iNumSpawns = 0xD94; // int32
            public const nint m_flIdleTimeSinceLastAction = 0xD9C; // float32
            public const nint m_fNextRadarUpdateTime = 0xDA0; // float32
            public const nint m_flFlashDuration = 0xDA4; // float32
            public const nint m_flFlashMaxAlpha = 0xDA8; // float32
            public const nint m_flProgressBarStartTime = 0xDAC; // float32
            public const nint m_iProgressBarDuration = 0xDB0; // int32
            public const nint m_angEyeAngles = 0xDB4; // QAngle
            public const nint m_wasNotKilledNaturally = 0xDC0; // bool
            public const nint m_bCommittingSuicideOnTeamChange = 0xDC1; // bool
            public const nint m_hOriginalController = 0xDC4; // CHandle<CCSPlayerController>
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CPathTrack {
            public const nint m_pnext = 0x4E0; // CPathTrack*
            public const nint m_pprevious = 0x4E8; // CPathTrack*
            public const nint m_paltpath = 0x4F0; // CPathTrack*
            public const nint m_flRadius = 0x4F8; // float32
            public const nint m_length = 0x4FC; // float32
            public const nint m_altName = 0x500; // CUtlSymbolLarge
            public const nint m_nIterVal = 0x508; // int32
            public const nint m_eOrientationType = 0x50C; // TrackOrientationType_t
            public const nint m_OnPass = 0x510; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 7
        public static class CLogicDistanceCheck {
            public const nint m_iszEntityA = 0x4E0; // CUtlSymbolLarge
            public const nint m_iszEntityB = 0x4E8; // CUtlSymbolLarge
            public const nint m_flZone1Distance = 0x4F0; // float32
            public const nint m_flZone2Distance = 0x4F4; // float32
            public const nint m_InZone1 = 0x4F8; // CEntityIOOutput
            public const nint m_InZone2 = 0x520; // CEntityIOOutput
            public const nint m_InZone3 = 0x548; // CEntityIOOutput
        }
        // Parent: CBarnLight
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flInnerAngle (float)
        // NetworkVarNames: m_flOuterAngle (float)
        // NetworkVarNames: m_bShowLight (bool)
        public static class COmniLight {
            public const nint m_flInnerAngle = 0xAB0; // float32
            public const nint m_flOuterAngle = 0xAB4; // float32
            public const nint m_bShowLight = 0xAB8; // bool
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
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_nResolutionX = 0x4E4; // int32
            public const nint m_nResolutionY = 0x4E8; // int32
            public const nint m_szLayoutFileName = 0x4F0; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x4F8; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x518; // int32
            public const nint m_vecCSSClasses = 0x520; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_szTargetsName = 0x538; // CUtlSymbolLarge
            public const nint m_AdditionalTargetEntities = 0x540; // CUtlVector<CHandle<CBaseModelEntity>>
        }
        // Parent: CBaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class CInfoVisibilityBox {
            public const nint m_nMode = 0x4E4; // int32
            public const nint m_vBoxSize = 0x4E8; // Vector
            public const nint m_bEnabled = 0x4F4; // bool
        }
        // Parent: CRulePointEntity
        // Field count: 0
        public static class CGamePlayerEquip {
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 0
        public static class CInfoTargetServerOnly {
        }
        // Parent: CSoundOpvarSetPointEntity
        // Field count: 3
        public static class CSoundOpvarSetPathCornerEntity {
            public const nint m_flDistMinSqr = 0x6A0; // float32
            public const nint m_flDistMaxSqr = 0x6A4; // float32
            public const nint m_iszPathCornerEntityName = 0x6A8; // CUtlSymbolLarge
        }
        // Parent: CPlayer_WeaponServices
        // Field count: 15
        //
        // Metadata:
        // NetworkVarNames: m_flNextAttack (GameTime_t)
        // NetworkVarNames: m_bIsLookingAtWeapon (bool)
        // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xA8; // GameTime_t
            public const nint m_bIsLookingAtWeapon = 0xAC; // bool
            public const nint m_bIsHoldingLookAtWeapon = 0xAD; // bool
            public const nint m_hSavedWeapon = 0xB0; // CHandle<CBasePlayerWeapon>
            public const nint m_nTimeToMelee = 0xB4; // int32
            public const nint m_nTimeToSecondary = 0xB8; // int32
            public const nint m_nTimeToPrimary = 0xBC; // int32
            public const nint m_nTimeToSniperRifle = 0xC0; // int32
            public const nint m_bIsBeingGivenItem = 0xC4; // bool
            public const nint m_bIsPickingUpItemWithUse = 0xC5; // bool
            public const nint m_bPickedUpWeapon = 0xC6; // bool
            public const nint m_bDisableAutoDeploy = 0xC7; // bool
            public const nint m_bIsPickingUpGroundWeapon = 0xC8; // bool
            public const nint m_nOldShootPositionHistoryCount = 0xCC; // uint32
            public const nint m_nOldInputHistoryCount = 0x468; // uint32
        }
        // Parent: CBaseEntity
        // Field count: 11
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class CEntityFlame {
            public const nint m_hEntAttached = 0x4E0; // CHandle<CBaseEntity>
            public const nint m_bCheapEffect = 0x4E4; // bool
            public const nint m_flSize = 0x4E8; // float32
            public const nint m_bUseHitboxes = 0x4EC; // bool
            public const nint m_iNumHitboxFires = 0x4F0; // int32
            public const nint m_flHitboxFireScale = 0x4F4; // float32
            public const nint m_flLifetime = 0x4F8; // GameTime_t
            public const nint m_hAttacker = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_iDangerSound = 0x500; // int32
            public const nint m_flDirectDamagePerSecond = 0x504; // float32
            public const nint m_iCustomDamageType = 0x508; // int32
        }
        // Parent: CCSWeaponBase
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        public static class CCSWeaponBaseGun {
            public const nint m_zoomLevel = 0xF68; // int32
            public const nint m_iBurstShotsRemaining = 0xF6C; // int32
            public const nint m_silencedModelIndex = 0xF78; // int32
            public const nint m_inPrecache = 0xF7C; // bool
            public const nint m_bNeedsBoltAction = 0xF7D; // bool
            public const nint m_bSkillReloadAvailable = 0xF7E; // bool
            public const nint m_bSkillReloadLiftedReloadKey = 0xF7F; // bool
            public const nint m_bSkillBoltInterruptAvailable = 0xF80; // bool
            public const nint m_bSkillBoltLiftedFireKey = 0xF81; // bool
        }
        // Parent: None
        // Field count: 13
        public static class CBot {
            public const nint m_pController = 0x10; // CCSPlayerController*
            public const nint m_pPlayer = 0x18; // CCSPlayerPawn*
            public const nint m_bHasSpawned = 0x20; // bool
            public const nint m_id = 0x24; // uint32
            public const nint m_isRunning = 0xC0; // bool
            public const nint m_isCrouching = 0xC1; // bool
            public const nint m_forwardSpeed = 0xC4; // float32
            public const nint m_leftSpeed = 0xC8; // float32
            public const nint m_verticalSpeed = 0xCC; // float32
            public const nint m_buttonFlags = 0xD0; // uint64
            public const nint m_jumpTimestamp = 0xD8; // float32
            public const nint m_viewForward = 0xDC; // Vector
            public const nint m_postureStackIndex = 0xF8; // int32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // NetworkVarNames: m_nameStringableIndex (int32)
        public static class CEntityIdentity {
            public const nint m_nameStringableIndex = 0x14; // int32
            public const nint m_name = 0x18; // CUtlSymbolLarge
            public const nint m_designerName = 0x20; // CUtlSymbolLarge
            public const nint m_flags = 0x30; // uint32
            public const nint m_worldGroupId = 0x38; // WorldGroupId_t
            public const nint m_fDataObjectTypes = 0x3C; // uint32
            public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint m_pPrev = 0x58; // CEntityIdentity*
            public const nint m_pNext = 0x60; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
            public const nint m_pNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: CBaseToggle
        // Field count: 3
        public static class CGunTarget {
            public const nint m_on = 0x810; // bool
            public const nint m_hTargetEnt = 0x814; // CHandle<CBaseEntity>
            public const nint m_OnDeath = 0x818; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CSoundEventParameter {
            public const nint m_iszParamName = 0x4E8; // CUtlSymbolLarge
            public const nint m_flFloatValue = 0x4F0; // float32
        }
        // Parent: CPulseGraphInstance_ServerEntity
        // Field count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_GameBlackboard {
        }
        // Parent: CMarkupVolume
        // Field count: 5
        public static class CMarkupVolumeTagged {
            public const nint m_bIsGroup = 0x7C8; // bool
            public const nint m_bGroupByPrefab = 0x7C9; // bool
            public const nint m_bGroupByVolume = 0x7CA; // bool
            public const nint m_bGroupOtherGroups = 0x7CB; // bool
            public const nint m_bIsInGroup = 0x7CC; // bool
        }
        // Parent: CBaseEntity
        // Field count: 5
        public static class CTestEffect {
            public const nint m_iLoop = 0x4E0; // int32
            public const nint m_iBeam = 0x4E4; // int32
            public const nint m_pBeam = 0x4E8; // CBeam*[24]
            public const nint m_flBeamTime = 0x5A8; // GameTime_t[24]
            public const nint m_flStartTime = 0x608; // GameTime_t
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1Silencer {
        }
        // Parent: CFuncNavBlocker
        // Field count: 1
        public static class CScriptNavBlocker {
            public const nint m_vExtent = 0x7A0; // Vector
        }
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class CConstraintAnchor {
            public const nint m_massScale = 0x9A8; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponTec9 {
        }
        // Parent: CMarkupVolumeTagged
        // Field count: 0
        public static class CMarkupVolumeTagged_Nav {
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
        public static class CSceneEntity {
            public const nint m_iszSceneFile = 0x4E8; // CUtlSymbolLarge
            public const nint m_iszResumeSceneFile = 0x4F0; // CUtlSymbolLarge
            public const nint m_iszTarget1 = 0x4F8; // CUtlSymbolLarge
            public const nint m_iszTarget2 = 0x500; // CUtlSymbolLarge
            public const nint m_iszTarget3 = 0x508; // CUtlSymbolLarge
            public const nint m_iszTarget4 = 0x510; // CUtlSymbolLarge
            public const nint m_iszTarget5 = 0x518; // CUtlSymbolLarge
            public const nint m_iszTarget6 = 0x520; // CUtlSymbolLarge
            public const nint m_iszTarget7 = 0x528; // CUtlSymbolLarge
            public const nint m_iszTarget8 = 0x530; // CUtlSymbolLarge
            public const nint m_hTarget1 = 0x538; // CHandle<CBaseEntity>
            public const nint m_hTarget2 = 0x53C; // CHandle<CBaseEntity>
            public const nint m_hTarget3 = 0x540; // CHandle<CBaseEntity>
            public const nint m_hTarget4 = 0x544; // CHandle<CBaseEntity>
            public const nint m_hTarget5 = 0x548; // CHandle<CBaseEntity>
            public const nint m_hTarget6 = 0x54C; // CHandle<CBaseEntity>
            public const nint m_hTarget7 = 0x550; // CHandle<CBaseEntity>
            public const nint m_hTarget8 = 0x554; // CHandle<CBaseEntity>
            public const nint m_sTargetAttachment = 0x558; // CUtlSymbolLarge
            public const nint m_bIsPlayingBack = 0x560; // bool
            public const nint m_bPaused = 0x561; // bool
            public const nint m_bMultiplayer = 0x562; // bool
            public const nint m_bAutogenerated = 0x563; // bool
            public const nint m_flForceClientTime = 0x564; // float32
            public const nint m_flCurrentTime = 0x568; // float32
            public const nint m_flFrameTime = 0x56C; // float32
            public const nint m_bCancelAtNextInterrupt = 0x570; // bool
            public const nint m_fPitch = 0x574; // float32
            public const nint m_bAutomated = 0x578; // bool
            public const nint m_nAutomatedAction = 0x57C; // int32
            public const nint m_flAutomationDelay = 0x580; // float32
            public const nint m_flAutomationTime = 0x584; // float32
            public const nint m_hWaitingForThisResumeScene = 0x588; // CHandle<CBaseEntity>
            public const nint m_bWaitingForResumeScene = 0x58C; // bool
            public const nint m_bPausedViaInput = 0x58D; // bool
            public const nint m_bPauseAtNextInterrupt = 0x58E; // bool
            public const nint m_bWaitingForActor = 0x58F; // bool
            public const nint m_bWaitingForInterrupt = 0x590; // bool
            public const nint m_bInterruptedActorsScenes = 0x591; // bool
            public const nint m_bBreakOnNonIdle = 0x592; // bool
            public const nint m_bSceneFinished = 0x593; // bool
            public const nint m_hActorList = 0x598; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
            public const nint m_hRemoveActorList = 0x5B0; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_nSceneFlushCounter = 0x5F8; // int32
            public const nint m_nSceneStringIndex = 0x5FC; // uint16
            public const nint m_OnStart = 0x600; // CEntityIOOutput
            public const nint m_OnCompletion = 0x628; // CEntityIOOutput
            public const nint m_OnCanceled = 0x650; // CEntityIOOutput
            public const nint m_OnPaused = 0x678; // CEntityIOOutput
            public const nint m_OnResumed = 0x6A0; // CEntityIOOutput
            public const nint m_OnTrigger = 0x6C8; // CEntityIOOutput[16]
            public const nint m_hInterruptScene = 0x9D8; // CHandle<CSceneEntity>
            public const nint m_nInterruptCount = 0x9DC; // int32
            public const nint m_bSceneMissing = 0x9E0; // bool
            public const nint m_bInterrupted = 0x9E1; // bool
            public const nint m_bCompletedEarly = 0x9E2; // bool
            public const nint m_bInterruptSceneFinished = 0x9E3; // bool
            public const nint m_bRestoring = 0x9E4; // bool
            public const nint m_hNotifySceneCompletion = 0x9E8; // CUtlVector<CHandle<CSceneEntity>>
            public const nint m_hListManagers = 0xA00; // CUtlVector<CHandle<CSceneListManager>>
            public const nint m_iszSoundName = 0xA18; // CUtlSymbolLarge
            public const nint m_iszSequenceName = 0xA20; // CUtlSymbolLarge
            public const nint m_hActor = 0xA28; // CHandle<CBaseFlex>
            public const nint m_hActivator = 0xA2C; // CHandle<CBaseEntity>
            public const nint m_BusyActor = 0xA30; // int32
            public const nint m_iPlayerDeathBehavior = 0xA34; // SceneOnPlayerDeath_t
        }
        // Parent: CLightDirectionalEntity
        // Field count: 0
        public static class CLightEnvironmentEntity {
        }
        // Parent: CLogicAutosave
        // Field count: 4
        public static class CLogicActiveAutosave {
            public const nint m_TriggerHitPoints = 0x4F0; // int32
            public const nint m_flTimeToTrigger = 0x4F4; // float32
            public const nint m_flStartTime = 0x4F8; // GameTime_t
            public const nint m_flDangerousTime = 0x4FC; // float32
        }
        // Parent: CBaseEntity
        // Field count: 2
        public static class CEnvBeverage {
            public const nint m_CanInDispenser = 0x4E0; // bool
            public const nint m_nBeverageType = 0x4E4; // int32
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
        public static class CVoteController {
            public const nint m_iActiveIssueIndex = 0x4E0; // int32
            public const nint m_iOnlyTeamToVote = 0x4E4; // int32
            public const nint m_nVoteOptionCount = 0x4E8; // int32[5]
            public const nint m_nPotentialVotes = 0x4FC; // int32
            public const nint m_bIsYesNoVote = 0x500; // bool
            public const nint m_acceptingVotesTimer = 0x508; // CountdownTimer
            public const nint m_executeCommandTimer = 0x520; // CountdownTimer
            public const nint m_resetVoteTimer = 0x538; // CountdownTimer
            public const nint m_nVotesCast = 0x550; // int32[64]
            public const nint m_playerHoldingVote = 0x650; // CPlayerSlot
            public const nint m_playerOverrideForVote = 0x654; // CPlayerSlot
            public const nint m_nHighestCountIndex = 0x658; // int32
            public const nint m_potentialIssues = 0x660; // CUtlVector<CBaseIssue*>
            public const nint m_VoteOptions = 0x678; // CUtlVector<char*>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponCZ75a {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponP250 {
        }
        // Parent: CBaseAnimGraph
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_vLookTargetPosition (Vector)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class CBaseFlex {
            public const nint m_flexWeight = 0x9A8; // CNetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0x9C0; // Vector
            public const nint m_blinktoggle = 0x9CC; // bool
            public const nint m_flAllowResponsesEndTime = 0xA20; // GameTime_t
            public const nint m_flLastFlexAnimationTime = 0xA24; // GameTime_t
            public const nint m_nNextSceneEventId = 0xA28; // SceneEventId_t
            public const nint m_bUpdateLayerPriorities = 0xA2C; // bool
        }
        // Parent: CTriggerHurt
        // Field count: 1
        public static class CScriptTriggerHurt {
            public const nint m_vExtent = 0xA00; // Vector
        }
        // Parent: CBasePlayerWeaponVData
        // Field count: 92
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x348; // CSWeaponType
            public const nint m_WeaponCategory = 0x34C; // CSWeaponCategory
            public const nint m_szViewModel = 0x350; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szPlayerModel = 0x430; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szWorldDroppedModel = 0x510; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szAimsightLensMaskModel = 0x5F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szMagazineModel = 0x6D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szHeatEffect = 0x7B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szEjectBrassEffect = 0x890; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashParticleAlt = 0x970; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashThirdPersonParticle = 0xA50; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xB30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szTracerParticle = 0xC10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_GearSlot = 0xCF0; // gear_slot_t
            public const nint m_GearSlotPosition = 0xCF4; // int32
            public const nint m_DefaultLoadoutSlot = 0xCF8; // loadout_slot_t
            public const nint m_sWrongTeamMsg = 0xD00; // CUtlString
            public const nint m_nPrice = 0xD08; // int32
            public const nint m_nKillAward = 0xD0C; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0xD10; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0xD14; // int32
            public const nint m_bMeleeWeapon = 0xD18; // bool
            public const nint m_bHasBurstMode = 0xD19; // bool
            public const nint m_bIsRevolver = 0xD1A; // bool
            public const nint m_bCannotShootUnderwater = 0xD1B; // bool
            public const nint m_szName = 0xD20; // CGlobalSymbol
            public const nint m_szAnimExtension = 0xD28; // CUtlString
            public const nint m_eSilencerType = 0xD30; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0xD34; // int32
            public const nint m_nCrosshairDeltaDistance = 0xD38; // int32
            public const nint m_bIsFullAuto = 0xD3C; // bool
            public const nint m_nNumBullets = 0xD40; // int32
            public const nint m_flCycleTime = 0xD44; // CFiringModeFloat
            public const nint m_flMaxSpeed = 0xD4C; // CFiringModeFloat
            public const nint m_flSpread = 0xD54; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0xD5C; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0xD64; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0xD6C; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0xD74; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0xD7C; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0xD84; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0xD8C; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0xD94; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0xD9C; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0xDA4; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0xDAC; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0xDB4; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0xDBC; // float32
            public const nint m_flInaccuracyJumpApex = 0xDC0; // float32
            public const nint m_flInaccuracyReload = 0xDC4; // float32
            public const nint m_nRecoilSeed = 0xDC8; // int32
            public const nint m_nSpreadSeed = 0xDCC; // int32
            public const nint m_flTimeToIdleAfterFire = 0xDD0; // float32
            public const nint m_flIdleInterval = 0xDD4; // float32
            public const nint m_flAttackMovespeedFactor = 0xDD8; // float32
            public const nint m_flHeatPerShot = 0xDDC; // float32
            public const nint m_flInaccuracyPitchShift = 0xDE0; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0xDE4; // float32
            public const nint m_flBotAudibleRange = 0xDE8; // float32
            public const nint m_szUseRadioSubtitle = 0xDF0; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0xDF8; // bool
            public const nint m_bHideViewModelWhenZoomed = 0xDF9; // bool
            public const nint m_nZoomLevels = 0xDFC; // int32
            public const nint m_nZoomFOV1 = 0xE00; // int32
            public const nint m_nZoomFOV2 = 0xE04; // int32
            public const nint m_flZoomTime0 = 0xE08; // float32
            public const nint m_flZoomTime1 = 0xE0C; // float32
            public const nint m_flZoomTime2 = 0xE10; // float32
            public const nint m_flIronSightPullUpSpeed = 0xE14; // float32
            public const nint m_flIronSightPutDownSpeed = 0xE18; // float32
            public const nint m_flIronSightFOV = 0xE1C; // float32
            public const nint m_flIronSightPivotForward = 0xE20; // float32
            public const nint m_flIronSightLooseness = 0xE24; // float32
            public const nint m_angPivotAngle = 0xE28; // QAngle
            public const nint m_vecIronSightEyePos = 0xE34; // Vector
            public const nint m_nDamage = 0xE40; // int32
            public const nint m_flHeadshotMultiplier = 0xE44; // float32
            public const nint m_flArmorRatio = 0xE48; // float32
            public const nint m_flPenetration = 0xE4C; // float32
            public const nint m_flRange = 0xE50; // float32
            public const nint m_flRangeModifier = 0xE54; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0xE58; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0xE5C; // float32
            public const nint m_flRecoveryTimeCrouch = 0xE60; // float32
            public const nint m_flRecoveryTimeStand = 0xE64; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0xE68; // float32
            public const nint m_flRecoveryTimeStandFinal = 0xE6C; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0xE70; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0xE74; // int32
            public const nint m_flThrowVelocity = 0xE78; // float32
            public const nint m_vSmokeColor = 0xE7C; // Vector
            public const nint m_szAnimClass = 0xE88; // CGlobalSymbol
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CMathColorBlend {
            public const nint m_flInMin = 0x4E0; // float32
            public const nint m_flInMax = 0x4E4; // float32
            public const nint m_OutColor1 = 0x4E8; // Color
            public const nint m_OutColor2 = 0x4EC; // Color
            public const nint m_OutValue = 0x4F0; // CEntityOutputTemplate<Color>
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
        public static class CEnvScreenOverlay {
            public const nint m_iszOverlayNames = 0x4E0; // CUtlSymbolLarge[10]
            public const nint m_flOverlayTimes = 0x530; // float32[10]
            public const nint m_flStartTime = 0x558; // GameTime_t
            public const nint m_iDesiredOverlay = 0x55C; // int32
            public const nint m_bIsActive = 0x560; // bool
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
        public static class CCSPlayerPawn {
            public const nint m_pBulletServices = 0xDD0; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0xDD8; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0xDE0; // CCSPlayer_BuyServices*
            public const nint m_pActionTrackingServices = 0xDE8; // CCSPlayer_ActionTrackingServices*
            public const nint m_pRadioServices = 0xDF0; // CCSPlayer_RadioServices*
            public const nint m_pDamageReactServices = 0xDF8; // CCSPlayer_DamageReactServices*
            public const nint m_nCharacterDefIndex = 0xE00; // uint16
            public const nint m_bHasFemaleVoice = 0xE02; // bool
            public const nint m_strVOPrefix = 0xE08; // CUtlString
            public const nint m_szLastPlaceName = 0xE10; // char[18]
            public const nint m_bInHostageResetZone = 0xED0; // bool
            public const nint m_bInBuyZone = 0xED1; // bool
            public const nint m_TouchingBuyZones = 0xED8; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bWasInBuyZone = 0xEF0; // bool
            public const nint m_bInHostageRescueZone = 0xEF1; // bool
            public const nint m_bInBombZone = 0xEF2; // bool
            public const nint m_bWasInHostageRescueZone = 0xEF3; // bool
            public const nint m_iRetakesOffering = 0xEF4; // int32
            public const nint m_iRetakesOfferingCard = 0xEF8; // int32
            public const nint m_bRetakesHasDefuseKit = 0xEFC; // bool
            public const nint m_bRetakesMVPLastRound = 0xEFD; // bool
            public const nint m_iRetakesMVPBoostItem = 0xF00; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0xF04; // loadout_slot_t
            public const nint m_flHealthShotBoostExpirationTime = 0xF08; // GameTime_t
            public const nint m_flLandingTimeSeconds = 0xF0C; // float32
            public const nint m_aimPunchAngle = 0xF10; // QAngle
            public const nint m_aimPunchAngleVel = 0xF1C; // QAngle
            public const nint m_aimPunchTickBase = 0xF28; // int32
            public const nint m_aimPunchTickFraction = 0xF2C; // float32
            public const nint m_aimPunchCache = 0xF30; // CUtlVector<QAngle>
            public const nint m_bIsBuyMenuOpen = 0xF48; // bool
            public const nint m_xLastHeadBoneTransform = 0x15F0; // CTransform
            public const nint m_bLastHeadBoneTransformIsValid = 0x1610; // bool
            public const nint m_lastLandTime = 0x1614; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x1618; // bool
            public const nint m_iPlayerLocked = 0x161C; // int32
            public const nint m_flTimeOfLastInjury = 0x1624; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x1628; // GameTime_t
            public const nint m_bNextSprayDecalTimeExpedited = 0x162C; // bool
            public const nint m_nRagdollDamageBone = 0x1630; // int32
            public const nint m_vRagdollDamageForce = 0x1634; // Vector
            public const nint m_vRagdollDamagePosition = 0x1640; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x164C; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x168C; // bool
            public const nint m_vRagdollServerOrigin = 0x1690; // Vector
            public const nint m_EconGloves = 0x16A0; // CEconItemView
            public const nint m_nEconGlovesChanged = 0x1918; // uint8
            public const nint m_qDeathEyeAngles = 0x191C; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x1928; // bool
            public const nint m_bLeftHanded = 0x1929; // bool
            public const nint m_fSwitchedHandednessTime = 0x192C; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x1930; // float32
            public const nint m_flViewmodelOffsetY = 0x1934; // float32
            public const nint m_flViewmodelOffsetZ = 0x1938; // float32
            public const nint m_flViewmodelFOV = 0x193C; // float32
            public const nint m_bIsWalking = 0x1940; // bool
            public const nint m_fLastGivenDefuserTime = 0x1944; // float32
            public const nint m_fLastGivenBombTime = 0x1948; // float32
            public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0x194C; // float32
            public const nint m_iDisplayHistoryBits = 0x1950; // uint32
            public const nint m_flLastAttackedTeammate = 0x1954; // float32
            public const nint m_allowAutoFollowTime = 0x1958; // GameTime_t
            public const nint m_bResetArmorNextSpawn = 0x195C; // bool
            public const nint m_nLastKillerIndex = 0x1960; // CEntityIndex
            public const nint m_entitySpottedState = 0x1968; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1980; // int32
            public const nint m_bIsScoped = 0x1984; // bool
            public const nint m_bResumeZoom = 0x1985; // bool
            public const nint m_bIsDefusing = 0x1986; // bool
            public const nint m_bIsGrabbingHostage = 0x1987; // bool
            public const nint m_iBlockingUseActionInProgress = 0x1988; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x198C; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x1990; // bool
            public const nint m_iBombSiteIndex = 0x1994; // CEntityIndex
            public const nint m_nWhichBombZone = 0x1998; // int32
            public const nint m_bInBombZoneTrigger = 0x199C; // bool
            public const nint m_bWasInBombZoneTrigger = 0x199D; // bool
            public const nint m_iShotsFired = 0x19A0; // int32
            public const nint m_flFlinchStack = 0x19A4; // float32
            public const nint m_flVelocityModifier = 0x19A8; // float32
            public const nint m_flHitHeading = 0x19AC; // float32
            public const nint m_nHitBodyPart = 0x19B0; // int32
            public const nint m_vecTotalBulletForce = 0x19B4; // Vector
            public const nint m_bWaitForNoAttack = 0x19C0; // bool
            public const nint m_ignoreLadderJumpTime = 0x19C4; // float32
            public const nint m_bKilledByHeadshot = 0x19C8; // bool
            public const nint m_LastHitBox = 0x19CC; // int32
            public const nint m_LastHealth = 0x19D0; // int32
            public const nint m_pBot = 0x19D8; // CCSBot*
            public const nint m_bBotAllowActive = 0x19E0; // bool
            public const nint m_thirdPersonHeading = 0x19E4; // QAngle
            public const nint m_flSlopeDropOffset = 0x19F0; // float32
            public const nint m_flSlopeDropHeight = 0x19F4; // float32
            public const nint m_vHeadConstraintOffset = 0x19F8; // Vector
            public const nint m_nLastPickupPriority = 0x1A04; // int32
            public const nint m_flLastPickupPriorityTime = 0x1A08; // float32
            public const nint m_ArmorValue = 0x1A0C; // int32
            public const nint m_unCurrentEquipmentValue = 0x1A10; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x1A12; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x1A14; // uint16
            public const nint m_iLastWeaponFireUsercmd = 0x1A18; // int32
            public const nint m_bIsSpawning = 0x1A1C; // bool
            public const nint m_iDeathFlags = 0x1A28; // int32
            public const nint m_bHasDeathInfo = 0x1A2C; // bool
            public const nint m_flDeathInfoTime = 0x1A30; // float32
            public const nint m_vecDeathInfoOrigin = 0x1A34; // Vector
            public const nint m_vecPlayerPatchEconIndices = 0x1A40; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x1A54; // Color
            public const nint m_grenadeParameterStashTime = 0x1A58; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x1A5C; // bool
            public const nint m_angStashedShootAngles = 0x1A60; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x1A6C; // Vector
            public const nint m_vecStashedVelocity = 0x1A78; // Vector
            public const nint m_angShootAngleHistory = 0x1A84; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x1A9C; // Vector[2]
            public const nint m_vecVelocityHistory = 0x1AB4; // Vector[2]
            public const nint m_PredictedDamageTags = 0x1AD0; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            public const nint m_nHighestAppliedDamageTagTick = 0x1B20; // int32
        }
        // Parent: CBasePlayerController
        // Field count: 93
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
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x788; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x790; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x798; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x7A0; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x7A8; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x7AC; // bool
            public const nint m_uiCommunicationMuteFlags = 0x7B0; // uint32
            public const nint m_szCrosshairCodes = 0x7B8; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x7C0; // uint8
            public const nint m_flForceTeamTime = 0x7C4; // GameTime_t
            public const nint m_iCompTeammateColor = 0x7C8; // int32
            public const nint m_bEverPlayedOnTeam = 0x7CC; // bool
            public const nint m_bAttemptedToGetColor = 0x7CD; // bool
            public const nint m_iTeammatePreferredColor = 0x7D0; // int32
            public const nint m_bTeamChanged = 0x7D4; // bool
            public const nint m_bInSwitchTeam = 0x7D5; // bool
            public const nint m_bHasSeenJoinGame = 0x7D6; // bool
            public const nint m_bJustBecameSpectator = 0x7D7; // bool
            public const nint m_bSwitchTeamsOnNextRoundReset = 0x7D8; // bool
            public const nint m_bRemoveAllItemsOnNextRoundReset = 0x7D9; // bool
            public const nint m_flLastJoinTeamTime = 0x7DC; // GameTime_t
            public const nint m_szClan = 0x7E0; // CUtlSymbolLarge
            public const nint m_szClanName = 0x7E8; // char[32]
            public const nint m_iCoachingTeam = 0x808; // int32
            public const nint m_nPlayerDominated = 0x810; // uint64
            public const nint m_nPlayerDominatingMe = 0x818; // uint64
            public const nint m_iCompetitiveRanking = 0x820; // int32
            public const nint m_iCompetitiveWins = 0x824; // int32
            public const nint m_iCompetitiveRankType = 0x828; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x82C; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x830; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x834; // int32
            public const nint m_nEndMatchNextMapVote = 0x838; // int32
            public const nint m_unActiveQuestId = 0x83C; // uint16
            public const nint m_rtActiveMissionPeriod = 0x840; // uint32
            public const nint m_nQuestProgressReason = 0x844; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x848; // uint32
            public const nint m_iDraftIndex = 0x878; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x87C; // uint32
            public const nint m_uiAbandonRecordedReason = 0x880; // uint32
            public const nint m_eNetworkDisconnectionReason = 0x884; // uint32
            public const nint m_bCannotBeKicked = 0x888; // bool
            public const nint m_bEverFullyConnected = 0x889; // bool
            public const nint m_bAbandonAllowsSurrender = 0x88A; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x88B; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x88C; // bool
            public const nint m_bScoreReported = 0x88D; // bool
            public const nint m_nDisconnectionTick = 0x890; // int32
            public const nint m_bControllingBot = 0x8A0; // bool
            public const nint m_bHasControlledBotThisRound = 0x8A1; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x8A2; // bool
            public const nint m_nBotsControlledThisRound = 0x8A4; // int32
            public const nint m_bCanControlObservedBot = 0x8A8; // bool
            public const nint m_hPlayerPawn = 0x8AC; // CHandle<CCSPlayerPawn>
            public const nint m_hObserverPawn = 0x8B0; // CHandle<CCSObserverPawn>
            public const nint m_DesiredObserverMode = 0x8B4; // int32
            public const nint m_hDesiredObserverTarget = 0x8B8; // CEntityHandle
            public const nint m_bPawnIsAlive = 0x8BC; // bool
            public const nint m_iPawnHealth = 0x8C0; // uint32
            public const nint m_iPawnArmor = 0x8C4; // int32
            public const nint m_bPawnHasDefuser = 0x8C8; // bool
            public const nint m_bPawnHasHelmet = 0x8C9; // bool
            public const nint m_nPawnCharacterDefIndex = 0x8CA; // uint16
            public const nint m_iPawnLifetimeStart = 0x8CC; // int32
            public const nint m_iPawnLifetimeEnd = 0x8D0; // int32
            public const nint m_iPawnBotDifficulty = 0x8D4; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x8D8; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x8DC; // int32
            public const nint m_iRoundScore = 0x8E0; // int32
            public const nint m_iRoundsWon = 0x8E4; // int32
            public const nint m_recentKillQueue = 0x8E8; // uint8[8]
            public const nint m_nFirstKill = 0x8F0; // uint8
            public const nint m_nKillCount = 0x8F1; // uint8
            public const nint m_bMvpNoMusic = 0x8F2; // bool
            public const nint m_eMvpReason = 0x8F4; // int32
            public const nint m_iMusicKitID = 0x8F8; // int32
            public const nint m_iMusicKitMVPs = 0x8FC; // int32
            public const nint m_iMVPs = 0x900; // int32
            public const nint m_nUpdateCounter = 0x904; // int32
            public const nint m_flSmoothedPing = 0x908; // float32
            public const nint m_lastHeldVoteTimer = 0xF9B0; // IntervalTimer
            public const nint m_bShowHints = 0xF9C8; // bool
            public const nint m_iNextTimeCheck = 0xF9CC; // int32
            public const nint m_bJustDidTeamKill = 0xF9D0; // bool
            public const nint m_bPunishForTeamKill = 0xF9D1; // bool
            public const nint m_bGaveTeamDamageWarning = 0xF9D2; // bool
            public const nint m_bGaveTeamDamageWarningThisRound = 0xF9D3; // bool
            public const nint m_dblLastReceivedPacketPlatFloatTime = 0xF9D8; // float64
            public const nint m_LastTeamDamageWarningTime = 0xF9E0; // GameTime_t
            public const nint m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF9E4; // GameTime_t
            public const nint m_nSuspiciousHitCount = 0xF9E8; // uint32
            public const nint m_nNonSuspiciousHitStreak = 0xF9EC; // uint32
            public const nint m_bFireBulletsSeedSynchronized = 0xFA91; // bool
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
        public static class CEconItemView {
            public const nint m_iItemDefinitionIndex = 0x38; // uint16
            public const nint m_iEntityQuality = 0x3C; // int32
            public const nint m_iEntityLevel = 0x40; // uint32
            public const nint m_iItemID = 0x48; // uint64
            public const nint m_iItemIDHigh = 0x50; // uint32
            public const nint m_iItemIDLow = 0x54; // uint32
            public const nint m_iAccountID = 0x58; // uint32
            public const nint m_iInventoryPosition = 0x5C; // uint32
            public const nint m_bInitialized = 0x68; // bool
            public const nint m_AttributeList = 0x70; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
            public const nint m_szCustomName = 0x130; // char[161]
            public const nint m_szCustomNameOverride = 0x1D1; // char[161]
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintBombTargetA {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponAWP {
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
        public static class CBasePlayerPawn {
            public const nint m_pWeaponServices = 0xAC0; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0xAC8; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0xAD0; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0xAD8; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0xAE0; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0xAE8; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0xAF0; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0xAF8; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0xB00; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0xB10; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xB60; // uint32
            public const nint v_angle = 0xB64; // QAngle
            public const nint v_anglePrevious = 0xB70; // QAngle
            public const nint m_iHideHUD = 0xB7C; // uint32
            public const nint m_skybox3d = 0xB80; // sky3dparams_t
            public const nint m_fTimeLastHurt = 0xC10; // GameTime_t
            public const nint m_flDeathTime = 0xC14; // GameTime_t
            public const nint m_fNextSuicideTime = 0xC18; // GameTime_t
            public const nint m_fInitHUD = 0xC1C; // bool
            public const nint m_pExpresser = 0xC20; // CAI_Expresser*
            public const nint m_hController = 0xC28; // CHandle<CBasePlayerController>
            public const nint m_fHltvReplayDelay = 0xC30; // float32
            public const nint m_fHltvReplayEnd = 0xC34; // float32
            public const nint m_iHltvReplayEntity = 0xC38; // CEntityIndex
            public const nint m_sndOpvarLatchData = 0xC40; // CUtlVector<sndopvarlatchdata_t>
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
        public static class CPostProcessingVolume {
            public const nint m_hPostSettings = 0x970; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0x978; // float32
            public const nint m_flMinLogExposure = 0x97C; // float32
            public const nint m_flMaxLogExposure = 0x980; // float32
            public const nint m_flMinExposure = 0x984; // float32
            public const nint m_flMaxExposure = 0x988; // float32
            public const nint m_flExposureCompensation = 0x98C; // float32
            public const nint m_flExposureFadeSpeedUp = 0x990; // float32
            public const nint m_flExposureFadeSpeedDown = 0x994; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x998; // float32
            public const nint m_bMaster = 0x99C; // bool
            public const nint m_bExposureControl = 0x99D; // bool
            public const nint m_flRate = 0x9A0; // float32
            public const nint m_flTonemapPercentTarget = 0x9A4; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x9A8; // float32
            public const nint m_flTonemapMinAvgLum = 0x9AC; // float32
        }
        // Parent: CBaseModelEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class CSpotlightEnd {
            public const nint m_flLightScale = 0x790; // float32
            public const nint m_Radius = 0x794; // float32
            public const nint m_vSpotlightDir = 0x798; // Vector
            public const nint m_vSpotlightOrg = 0x7A4; // Vector
        }
        // Parent: CBaseModelEntity
        // Field count: 1
        public static class CRuleEntity {
            public const nint m_iszMaster = 0x790; // CUtlSymbolLarge
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
        public static class CCSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x4E0; // int32
            public const nint m_nRandom = 0x4E4; // int32
            public const nint m_nOrdinal = 0x4E8; // int32
            public const nint m_sWeaponName = 0x4F0; // CUtlString
            public const nint m_xuid = 0x4F8; // uint64
            public const nint m_agentItem = 0x500; // CEconItemView
            public const nint m_glovesItem = 0x778; // CEconItemView
            public const nint m_weaponItem = 0x9F0; // CEconItemView
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerDetectExplosion {
            public const nint m_OnDetectedExplosion = 0x988; // CEntityIOOutput
        }
        // Parent: CLogicalEntity
        // Field count: 1
        public static class CSoundStackSave {
            public const nint m_iszStackName = 0x4E0; // CUtlSymbolLarge
        }
        // Parent: CPhysConstraint
        // Field count: 18
        public static class CPhysHinge {
            public const nint m_soundInfo = 0x560; // ConstraintSoundInfo
            public const nint m_NotifyMinLimitReached = 0x5E8; // CEntityIOOutput
            public const nint m_NotifyMaxLimitReached = 0x610; // CEntityIOOutput
            public const nint m_bAtMinLimit = 0x638; // bool
            public const nint m_bAtMaxLimit = 0x639; // bool
            public const nint m_hinge = 0x63C; // constraint_hingeparams_t
            public const nint m_hingeFriction = 0x67C; // float32
            public const nint m_systemLoadScale = 0x680; // float32
            public const nint m_bIsAxisLocal = 0x684; // bool
            public const nint m_flMinRotation = 0x688; // float32
            public const nint m_flMaxRotation = 0x68C; // float32
            public const nint m_flInitialRotation = 0x690; // float32
            public const nint m_flMotorFrequency = 0x694; // float32
            public const nint m_flMotorDampingRatio = 0x698; // float32
            public const nint m_flAngleSpeed = 0x69C; // float32
            public const nint m_flAngleSpeedThreshold = 0x6A0; // float32
            public const nint m_OnStartMoving = 0x6A8; // CEntityIOOutput
            public const nint m_OnStopMoving = 0x6D0; // CEntityIOOutput
        }
        // Parent: CGameRules
        // Field count: 1
        public static class CSingleplayRules {
            public const nint m_bSinglePlayerGameEnding = 0xC0; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterProximity {
            public const nint m_flRadius = 0x538; // float32
        }
        // Parent: CEconEntity
        // Field count: 2
        public static class CEconWearable {
            public const nint m_nForceSkin = 0xD30; // int32
            public const nint m_bAlwaysAllow = 0xD34; // bool
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_ItemServices {
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
        public static class CFuncConveyor {
            public const nint m_szConveyorModels = 0x790; // CUtlSymbolLarge
            public const nint m_flTransitionDurationSeconds = 0x798; // float32
            public const nint m_angMoveEntitySpace = 0x79C; // QAngle
            public const nint m_vecMoveDirEntitySpace = 0x7A8; // Vector
            public const nint m_flTargetSpeed = 0x7B4; // float32
            public const nint m_nTransitionStartTick = 0x7B8; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0x7BC; // int32
            public const nint m_flTransitionStartSpeed = 0x7C0; // float32
            public const nint m_hConveyorModels = 0x7C8; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMag7 {
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CMathCounter {
            public const nint m_flMin = 0x4E0; // float32
            public const nint m_flMax = 0x4E4; // float32
            public const nint m_bHitMin = 0x4E8; // bool
            public const nint m_bHitMax = 0x4E9; // bool
            public const nint m_bDisabled = 0x4EA; // bool
            public const nint m_OutValue = 0x4F0; // CEntityOutputTemplate<float32>
            public const nint m_OnGetValue = 0x518; // CEntityOutputTemplate<float32>
            public const nint m_OnHitMin = 0x540; // CEntityIOOutput
            public const nint m_OnHitMax = 0x568; // CEntityIOOutput
            public const nint m_OnChangedFromMin = 0x590; // CEntityIOOutput
            public const nint m_OnChangedFromMax = 0x5B8; // CEntityIOOutput
        }
        // Parent: CBaseEntity
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x4E0; // CEntityIOOutput
            public const nint m_worldName = 0x508; // CUtlSymbolLarge
            public const nint m_layerName = 0x510; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x518; // bool
            public const nint m_bEntitiesSpawned = 0x519; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x51A; // bool
            public const nint m_hLayerSpawnGroup = 0x51C; // uint32
        }
        // Parent: CBarnLight
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class CRectLight {
            public const nint m_bShowLight = 0xAB0; // bool
        }
        // Parent: CCSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class CCSGO_TeamSelectTerroristPosition {
        }
        // Parent: CBaseDoor
        // Field count: 1
        public static class CRotDoor {
            public const nint m_bSolidBsp = 0xA18; // bool
        }
        // Parent: CLogicalEntity
        // Field count: 4
        public static class CLogicLineToEntity {
            public const nint m_Line = 0x4E0; // CEntityOutputTemplate<Vector>
            public const nint m_SourceName = 0x508; // CUtlSymbolLarge
            public const nint m_StartEntity = 0x510; // CHandle<CBaseEntity>
            public const nint m_EndEntity = 0x514; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_nTotalPausedTicks (int)
        // NetworkVarNames: m_nPauseStartTick (int)
        // NetworkVarNames: m_bGamePaused (bool)
        public static class CGameRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_szQuestName = 0x30; // char[128]
            public const nint m_nQuestPhase = 0xB0; // int32
            public const nint m_nTotalPausedTicks = 0xB4; // int32
            public const nint m_nPauseStartTick = 0xB8; // int32
            public const nint m_bGamePaused = 0xBC; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
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
        public static class CEnvCubemap {
            public const nint m_Entity_hCubemapTexture = 0x560; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x568; // bool
            public const nint m_Entity_flInfluenceRadius = 0x56C; // float32
            public const nint m_Entity_vBoxProjectMins = 0x570; // Vector
            public const nint m_Entity_vBoxProjectMaxs = 0x57C; // Vector
            public const nint m_Entity_bMoveable = 0x588; // bool
            public const nint m_Entity_nHandshake = 0x58C; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x590; // int32
            public const nint m_Entity_nPriority = 0x594; // int32
            public const nint m_Entity_flEdgeFadeDist = 0x598; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x59C; // Vector
            public const nint m_Entity_flDiffuseScale = 0x5A8; // float32
            public const nint m_Entity_bStartDisabled = 0x5AC; // bool
            public const nint m_Entity_bDefaultEnvMap = 0x5AD; // bool
            public const nint m_Entity_bDefaultSpecEnvMap = 0x5AE; // bool
            public const nint m_Entity_bIndoorCubeMap = 0x5AF; // bool
            public const nint m_Entity_bCopyDiffuseFromDefaultCubemap = 0x5B0; // bool
            public const nint m_Entity_bEnabled = 0x5C0; // bool
        }
        // Parent: None
        // Field count: 3
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x28; // uint16
            public const nint unSlot = 0x2A; // uint16
            public const nint unItemDefIdx = 0x2C; // uint16
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CCSPlayer_DamageReactServices {
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
        public static class CRetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
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
        public static class CColorCorrection {
            public const nint m_flFadeInDuration = 0x4E0; // float32
            public const nint m_flFadeOutDuration = 0x4E4; // float32
            public const nint m_flStartFadeInWeight = 0x4E8; // float32
            public const nint m_flStartFadeOutWeight = 0x4EC; // float32
            public const nint m_flTimeStartFadeIn = 0x4F0; // GameTime_t
            public const nint m_flTimeStartFadeOut = 0x4F4; // GameTime_t
            public const nint m_flMaxWeight = 0x4F8; // float32
            public const nint m_bStartDisabled = 0x4FC; // bool
            public const nint m_bEnabled = 0x4FD; // bool
            public const nint m_bMaster = 0x4FE; // bool
            public const nint m_bClientSide = 0x4FF; // bool
            public const nint m_bExclusive = 0x500; // bool
            public const nint m_MinFalloff = 0x504; // float32
            public const nint m_MaxFalloff = 0x508; // float32
            public const nint m_flCurWeight = 0x50C; // float32
            public const nint m_netlookupFilename = 0x510; // char[512]
            public const nint m_lookupFilename = 0x710; // CUtlSymbolLarge
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponElite {
        }
        // Parent: CSoundEventEntity
        // Field count: 0
        public static class CSoundEventEntityAlias_snd_event_point {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBaseEntityAPI {
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
        public static class CC4 {
            public const nint m_vecLastValidPlayerHeldPosition = 0xF98; // Vector
            public const nint m_vecLastValidDroppedPosition = 0xFA4; // Vector
            public const nint m_bDoValidDroppedPositionCheck = 0xFB0; // bool
            public const nint m_bStartedArming = 0xFB1; // bool
            public const nint m_fArmedTime = 0xFB4; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0xFB8; // bool
            public const nint m_bIsPlantingViaUse = 0xFB9; // bool
            public const nint m_entitySpottedState = 0xFC0; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xFD8; // int32
            public const nint m_bPlayedArmingBeeps = 0xFDC; // bool[7]
            public const nint m_bBombPlanted = 0xFE3; // bool
        }
        // Parent: CHostageRescueZoneShim
        // Field count: 0
        public static class CHostageRescueZone {
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 6
        public static class CPointPrefab {
            public const nint m_targetMapName = 0x4E0; // CUtlSymbolLarge
            public const nint m_forceWorldGroupID = 0x4E8; // CUtlSymbolLarge
            public const nint m_associatedRelayTargetName = 0x4F0; // CUtlSymbolLarge
            public const nint m_fixupNames = 0x4F8; // bool
            public const nint m_bLoadDynamic = 0x4F9; // bool
            public const nint m_associatedRelayEntity = 0x4FC; // CHandle<CPointPrefab>
        }
        // Parent: CBaseToggle
        // Field count: 27
        //
        // Metadata:
        // NetworkVarNames: m_bIsUsable (bool)
        public static class CBaseDoor {
            public const nint m_angMoveEntitySpace = 0x820; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x82C; // Vector
            public const nint m_ls = 0x838; // locksound_t
            public const nint m_bForceClosed = 0x858; // bool
            public const nint m_bDoorGroup = 0x859; // bool
            public const nint m_bLocked = 0x85A; // bool
            public const nint m_bIgnoreDebris = 0x85B; // bool
            public const nint m_eSpawnPosition = 0x85C; // FuncDoorSpawnPos_t
            public const nint m_flBlockDamage = 0x860; // float32
            public const nint m_NoiseMoving = 0x868; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x870; // CUtlSymbolLarge
            public const nint m_NoiseMovingClosed = 0x878; // CUtlSymbolLarge
            public const nint m_NoiseArrivedClosed = 0x880; // CUtlSymbolLarge
            public const nint m_ChainTarget = 0x888; // CUtlSymbolLarge
            public const nint m_OnBlockedClosing = 0x890; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0x8B8; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0x8E0; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0x908; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x930; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x958; // CEntityIOOutput
            public const nint m_OnClose = 0x980; // CEntityIOOutput
            public const nint m_OnOpen = 0x9A8; // CEntityIOOutput
            public const nint m_OnLockedUse = 0x9D0; // CEntityIOOutput
            public const nint m_bLoopMoveSound = 0x9F8; // bool
            public const nint m_bCreateNavObstacle = 0xA10; // bool
            public const nint m_isChaining = 0xA11; // bool
            public const nint m_bIsUsable = 0xA12; // bool
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
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransform
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x78; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xC0; // QAngle
            public const nint m_flScale = 0xCC; // float32
            public const nint m_vecAbsOrigin = 0xD0; // Vector
            public const nint m_angAbsRotation = 0xDC; // QAngle
            public const nint m_flAbsScale = 0xE8; // float32
            public const nint m_nParentAttachmentOrBone = 0xEC; // int16
            public const nint m_bDebugAbsOriginChanges = 0xEE; // bool
            public const nint m_bDormant = 0xEF; // bool
            public const nint m_bForceParentToBeNetworked = 0xF0; // bool
            public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
            public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0xF3; // uint8
            public const nint m_nHierarchyType = 0xF4; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5; // uint8
            public const nint m_name = 0xF8; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x138; // CUtlStringToken
            public const nint m_flZOffset = 0x13C; // float32
            public const nint m_flClientLocalScale = 0x140; // float32
            public const nint m_vRenderOrigin = 0x144; // Vector
        }
        // Parent: CPointEntity
        // Field count: 7
        public static class CTankTrainAI {
            public const nint m_hTrain = 0x4E0; // CHandle<CFuncTrackTrain>
            public const nint m_hTargetEntity = 0x4E4; // CHandle<CBaseEntity>
            public const nint m_soundPlaying = 0x4E8; // int32
            public const nint m_startSoundName = 0x500; // CUtlSymbolLarge
            public const nint m_engineSoundName = 0x508; // CUtlSymbolLarge
            public const nint m_movementSoundName = 0x510; // CUtlSymbolLarge
            public const nint m_targetEntityName = 0x518; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Field count: 4
        public static class CGameGibManager {
            public const nint m_bAllowNewGibs = 0x500; // bool
            public const nint m_iCurrentMaxPieces = 0x504; // int32
            public const nint m_iMaxPieces = 0x508; // int32
            public const nint m_iLastFrame = 0x50C; // int32
        }
        // Parent: CBasePulseGraphInstance
        // Field count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSPointScript {
            public const nint m_pParent = 0xF8; // CCSPointScriptEntity*
        }
        // Parent: CRagdollProp
        // Field count: 0
        public static class CRagdollPropAlias_physics_prop_ragdoll {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CCSSprite {
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CFuncPropRespawnZone {
        }
        // Parent: CServerOnlyPointEntity
        // Field count: 3
        public static class SpawnPoint {
            public const nint m_iPriority = 0x4E0; // int32
            public const nint m_bEnabled = 0x4E4; // bool
            public const nint m_nType = 0x4E8; // int32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSCAR20 {
        }
        // Parent: CFuncPlat
        // Field count: 2
        public static class CFuncPlatRot {
            public const nint m_end = 0x840; // QAngle
            public const nint m_start = 0x84C; // QAngle
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CEnvSpark {
            public const nint m_flDelay = 0x4E0; // float32
            public const nint m_nMagnitude = 0x4E4; // int32
            public const nint m_nTrailLength = 0x4E8; // int32
            public const nint m_nType = 0x4EC; // int32
            public const nint m_OnSpark = 0x4F0; // CEntityIOOutput
        }
        // Parent: CPlayer_ObserverServices
        // Field count: 0
        public static class CCSObserver_ObserverServices {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: CBasePlatTrain
        // Field count: 6
        public static class CFuncTrain {
            public const nint m_hCurrentTarget = 0x838; // CHandle<CBaseEntity>
            public const nint m_activated = 0x83C; // bool
            public const nint m_hEnemy = 0x840; // CHandle<CBaseEntity>
            public const nint m_flBlockDamage = 0x844; // float32
            public const nint m_flNextBlockTime = 0x848; // GameTime_t
            public const nint m_iszLastTarget = 0x850; // CUtlSymbolLarge
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
        public static class CHostage {
            public const nint m_OnHostageBeginGrab = 0xAD8; // CEntityIOOutput
            public const nint m_OnFirstPickedUp = 0xB00; // CEntityIOOutput
            public const nint m_OnDroppedNotRescued = 0xB28; // CEntityIOOutput
            public const nint m_OnRescued = 0xB50; // CEntityIOOutput
            public const nint m_entitySpottedState = 0xB78; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xB90; // int32
            public const nint m_uiHostageSpawnExclusionGroupMask = 0xB94; // uint32
            public const nint m_nHostageSpawnRandomFactor = 0xB98; // uint32
            public const nint m_bRemove = 0xB9C; // bool
            public const nint m_vel = 0xBA0; // Vector
            public const nint m_isRescued = 0xBAC; // bool
            public const nint m_jumpedThisFrame = 0xBAD; // bool
            public const nint m_nHostageState = 0xBB0; // int32
            public const nint m_leader = 0xBB4; // CHandle<CBaseEntity>
            public const nint m_lastLeader = 0xBB8; // CHandle<CCSPlayerPawnBase>
            public const nint m_reuseTimer = 0xBC0; // CountdownTimer
            public const nint m_hasBeenUsed = 0xBD8; // bool
            public const nint m_accel = 0xBDC; // Vector
            public const nint m_isRunning = 0xBE8; // bool
            public const nint m_isCrouching = 0xBE9; // bool
            public const nint m_jumpTimer = 0xBF0; // CountdownTimer
            public const nint m_isWaitingForLeader = 0xC08; // bool
            public const nint m_repathTimer = 0x2C18; // CountdownTimer
            public const nint m_inhibitDoorTimer = 0x2C30; // CountdownTimer
            public const nint m_inhibitObstacleAvoidanceTimer = 0x2CC0; // CountdownTimer
            public const nint m_wiggleTimer = 0x2CE0; // CountdownTimer
            public const nint m_isAdjusted = 0x2CFC; // bool
            public const nint m_bHandsHaveBeenCut = 0x2CFD; // bool
            public const nint m_hHostageGrabber = 0x2D00; // CHandle<CCSPlayerPawn>
            public const nint m_fLastGrabTime = 0x2D04; // GameTime_t
            public const nint m_vecPositionWhenStartedDroppingToGround = 0x2D08; // Vector
            public const nint m_vecGrabbedPos = 0x2D14; // Vector
            public const nint m_flRescueStartTime = 0x2D20; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x2D24; // GameTime_t
            public const nint m_flDropStartTime = 0x2D28; // GameTime_t
            public const nint m_nApproachRewardPayouts = 0x2D2C; // int32
            public const nint m_nPickupEventCount = 0x2D30; // int32
            public const nint m_vecSpawnGroundPos = 0x2D34; // Vector
            public const nint m_vecHostageResetPosition = 0x2D54; // Vector
        }
        // Parent: CPointEntity
        // Field count: 13
        public static class CNavLinkAreaEntity {
            public const nint m_flWidth = 0x4E0; // float32
            public const nint m_vLocatorOffset = 0x4E4; // Vector
            public const nint m_qLocatorAnglesOffset = 0x4F0; // QAngle
            public const nint m_strMovementForward = 0x500; // CUtlSymbolLarge
            public const nint m_strMovementReverse = 0x508; // CUtlSymbolLarge
            public const nint m_nNavLinkIdForward = 0x510; // int32
            public const nint m_nNavLinkIdReverse = 0x514; // int32
            public const nint m_bEnabled = 0x518; // bool
            public const nint m_strFilterName = 0x520; // CUtlSymbolLarge
            public const nint m_hFilter = 0x528; // CHandle<CBaseFilter>
            public const nint m_OnNavLinkStart = 0x530; // CEntityIOOutput
            public const nint m_OnNavLinkFinish = 0x558; // CEntityIOOutput
            public const nint m_bIsTerminus = 0x580; // bool
        }
        // Parent: CBaseToggle
        // Field count: 12
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        public static class CFuncMoveLinear {
            public const nint m_authoredPosition = 0x810; // MoveLinearAuthoredPos_t
            public const nint m_angMoveEntitySpace = 0x814; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x820; // Vector
            public const nint m_soundStart = 0x830; // CUtlSymbolLarge
            public const nint m_soundStop = 0x838; // CUtlSymbolLarge
            public const nint m_currentSound = 0x840; // CUtlSymbolLarge
            public const nint m_flBlockDamage = 0x848; // float32
            public const nint m_flStartPosition = 0x84C; // float32
            public const nint m_OnFullyOpen = 0x858; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x880; // CEntityIOOutput
            public const nint m_bCreateMovableNavMesh = 0x8A8; // bool
            public const nint m_bCreateNavObstacle = 0x8A9; // bool
        }
        // Parent: CBaseEntity
        // Field count: 3
        public static class CCommentaryAuto {
            public const nint m_OnCommentaryNewGame = 0x4E0; // CEntityIOOutput
            public const nint m_OnCommentaryMidGame = 0x508; // CEntityIOOutput
            public const nint m_OnCommentaryMultiplayerSpawn = 0x530; // CEntityIOOutput
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CMapInfo {
            public const nint m_iBuyingStatus = 0x4E0; // int32
            public const nint m_flBombRadius = 0x4E4; // float32
            public const nint m_iPetPopulation = 0x4E8; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x4EC; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x4ED; // bool
            public const nint m_flBotMaxVisionDistance = 0x4F0; // float32
            public const nint m_iHostageCount = 0x4F4; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x4F8; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x4F9; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerBombReset {
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
        public static class CBaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint m_aThinkFunctions = 0x240; // CUtlVector<thinkfunc_t>
            public const nint m_iCurrentThinkContext = 0x258; // int32
            public const nint m_nLastThinkTick = 0x25C; // GameTick_t
            public const nint m_bDisabledContextThinks = 0x260; // bool
            public const nint m_isSteadyState = 0x270; // CTypedBitVec<64>
            public const nint m_lastNetworkChange = 0x278; // float32
            public const nint m_ResponseContexts = 0x288; // CUtlVector<ResponseContext_t>
            public const nint m_iszResponseContext = 0x2A0; // CUtlSymbolLarge
            public const nint m_iHealth = 0x2C8; // int32
            public const nint m_iMaxHealth = 0x2CC; // int32
            public const nint m_lifeState = 0x2D0; // uint8
            public const nint m_flDamageAccumulator = 0x2D4; // float32
            public const nint m_bTakesDamage = 0x2D8; // bool
            public const nint m_nTakeDamageFlags = 0x2E0; // TakeDamageFlags_t
            public const nint m_nPlatformType = 0x2E8; // EntityPlatformTypes_t
            public const nint m_MoveCollide = 0x2EA; // MoveCollide_t
            public const nint m_MoveType = 0x2EB; // MoveType_t
            public const nint m_nActualMoveType = 0x2EC; // MoveType_t
            public const nint m_nWaterTouch = 0x2ED; // uint8
            public const nint m_nSlimeTouch = 0x2EE; // uint8
            public const nint m_bRestoreInHierarchy = 0x2EF; // bool
            public const nint m_target = 0x2F0; // CUtlSymbolLarge
            public const nint m_hDamageFilter = 0x2F8; // CHandle<CBaseFilter>
            public const nint m_iszDamageFilterName = 0x300; // CUtlSymbolLarge
            public const nint m_flMoveDoneTime = 0x308; // float32
            public const nint m_nSubclassID = 0x30C; // CUtlStringToken
            public const nint m_flAnimTime = 0x318; // float32
            public const nint m_flSimulationTime = 0x31C; // float32
            public const nint m_flCreateTime = 0x320; // GameTime_t
            public const nint m_bClientSideRagdoll = 0x324; // bool
            public const nint m_ubInterpolationFrame = 0x325; // uint8
            public const nint m_vPrevVPhysicsUpdatePos = 0x328; // Vector
            public const nint m_iTeamNum = 0x334; // uint8
            public const nint m_iGlobalname = 0x338; // CUtlSymbolLarge
            public const nint m_iSentToClients = 0x340; // int32
            public const nint m_flSpeed = 0x344; // float32
            public const nint m_sUniqueHammerID = 0x348; // CUtlString
            public const nint m_spawnflags = 0x350; // uint32
            public const nint m_nNextThinkTick = 0x354; // GameTick_t
            public const nint m_nSimulationTick = 0x358; // int32
            public const nint m_OnKilled = 0x360; // CEntityIOOutput
            public const nint m_fFlags = 0x388; // uint32
            public const nint m_vecAbsVelocity = 0x38C; // Vector
            public const nint m_vecVelocity = 0x398; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x3C8; // Vector
            public const nint m_nPushEnumCount = 0x3D4; // int32
            public const nint m_pCollision = 0x3D8; // CCollisionProperty*
            public const nint m_hEffectEntity = 0x3E0; // CHandle<CBaseEntity>
            public const nint m_hOwnerEntity = 0x3E4; // CHandle<CBaseEntity>
            public const nint m_fEffects = 0x3E8; // uint32
            public const nint m_hGroundEntity = 0x3EC; // CHandle<CBaseEntity>
            public const nint m_nGroundBodyIndex = 0x3F0; // int32
            public const nint m_flFriction = 0x3F4; // float32
            public const nint m_flElasticity = 0x3F8; // float32
            public const nint m_flGravityScale = 0x3FC; // float32
            public const nint m_flTimeScale = 0x400; // float32
            public const nint m_flWaterLevel = 0x404; // float32
            public const nint m_bAnimatedEveryTick = 0x408; // bool
            public const nint m_bDisableLowViolence = 0x409; // bool
            public const nint m_nWaterType = 0x40A; // uint8
            public const nint m_iEFlags = 0x40C; // int32
            public const nint m_OnUser1 = 0x410; // CEntityIOOutput
            public const nint m_OnUser2 = 0x438; // CEntityIOOutput
            public const nint m_OnUser3 = 0x460; // CEntityIOOutput
            public const nint m_OnUser4 = 0x488; // CEntityIOOutput
            public const nint m_iInitialTeamNum = 0x4B0; // int32
            public const nint m_flNavIgnoreUntilTime = 0x4B4; // GameTime_t
            public const nint m_vecAngVelocity = 0x4B8; // QAngle
            public const nint m_bNetworkQuantizeOriginAndAngles = 0x4C4; // bool
            public const nint m_bLagCompensate = 0x4C5; // bool
            public const nint m_flOverriddenFriction = 0x4C8; // float32
            public const nint m_pBlocker = 0x4CC; // CHandle<CBaseEntity>
            public const nint m_flLocalTime = 0x4D0; // float32
            public const nint m_flVPhysicsUpdateLocalTime = 0x4D4; // float32
            public const nint m_nBloodType = 0x4D8; // BloodType
        }
        // Parent: CLogicalEntity
        // Field count: 9
        public static class CLogicMeasureMovement {
            public const nint m_strMeasureTarget = 0x4E0; // CUtlSymbolLarge
            public const nint m_strMeasureReference = 0x4E8; // CUtlSymbolLarge
            public const nint m_strTargetReference = 0x4F0; // CUtlSymbolLarge
            public const nint m_hMeasureTarget = 0x4F8; // CHandle<CBaseEntity>
            public const nint m_hMeasureReference = 0x4FC; // CHandle<CBaseEntity>
            public const nint m_hTarget = 0x500; // CHandle<CBaseEntity>
            public const nint m_hTargetReference = 0x504; // CHandle<CBaseEntity>
            public const nint m_flScale = 0x508; // float32
            public const nint m_nMeasureType = 0x50C; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: nType (FixAngleSet_t)
        // NetworkVarNames: qAngle (QAngle)
        // NetworkVarNames: nIndex (uint32)
        public static class ViewAngleServerChange_t {
            public const nint nType = 0x30; // FixAngleSet_t
            public const nint qAngle = 0x34; // QAngle
            public const nint nIndex = 0x40; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint m_Transforms = 0x8; // CNetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x20; // CHandle<CBaseEntity>
        }
    }
}
