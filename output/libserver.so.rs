// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-29 23:05:53.220233445 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libserver.so
        // Classes count: 218
        // Enums count: 128
        pub mod libserver_so {
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum PropDoorRotatingOpenDirection_e {
                DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
                DOOR_ROTATING_OPEN_FORWARD = 0x1,
                DOOR_ROTATING_OPEN_BACKWARD = 0x2
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum SceneOnPlayerDeath_t {
                SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
                SCENE_ONPLAYERDEATH_CANCEL = 0x1
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum LessonPanelLayoutFileTypes_t {
                LAYOUT_HAND_DEFAULT = 0x0,
                LAYOUT_WORLD_DEFAULT = 0x1,
                LAYOUT_CUSTOM = 0x2
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum TimelineCompression_t {
                TIMELINE_COMPRESSION_SUM = 0x0,
                TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
                TIMELINE_COMPRESSION_AVERAGE = 0x2,
                TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
                TIMELINE_COMPRESSION_TOTAL = 0x4
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum SubclassVDataChangeType_t {
                SUBCLASS_VDATA_CREATED = 0x0,
                SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
                SUBCLASS_VDATA_RELOADED = 0x2
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum C4LightEffect_t {
                eLightEffectNone = 0x0,
                eLightEffectDropped = 0x1,
                eLightEffectThirdPersonHeld = 0x2
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum StanceType_t {
                STANCE_CURRENT = u32::MAX,
                STANCE_DEFAULT = 0x0,
                STANCE_CROUCHING = 0x1,
                STANCE_PRONE = 0x2,
                NUM_STANCES = 0x3
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum Explosions {
                expRandom = 0x0,
                expDirected = 0x1,
                expUsePrecise = 0x2
            }
            // Alignment: 4
            // Members count: 9
            #[repr(u32)]
            pub enum PreviewCharacterMode {
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
            #[repr(u32)]
            pub enum ObserverInterpState_t {
                OBSERVER_INTERP_NONE = 0x0,
                OBSERVER_INTERP_TRAVELING = 0x1,
                OBSERVER_INTERP_SETTLING = 0x2
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum WorldTextPanelOrientation_t {
                WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
                WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
                WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum WorldTextPanelHorizontalAlign_t {
                WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
                WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2
            }
            // Alignment: 1
            // Members count: 3
            #[repr(u8)]
            pub enum SequenceFinishNotifyState_t {
                eDoNotNotify = 0x0,
                eNotifyWhenFinished = 0x1,
                eNotifyTriggered = 0x2
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum SoundEventStartType_t {
                SOUNDEVENT_START_PLAYER = 0x0,
                SOUNDEVENT_START_WORLD = 0x1,
                SOUNDEVENT_START_ENTITY = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum TrainOrientationType_t {
                TrainOrientation_Fixed = 0x0,
                TrainOrientation_AtPathTracks = 0x1,
                TrainOrientation_LinearBlend = 0x2,
                TrainOrientation_EaseInEaseOut = 0x3
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum CSWeaponCategory {
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
            #[repr(u8)]
            pub enum BeginDeathLifeStateTransition_t {
                NO_CHANGE_IN_LIFESTATE = 0x0,
                TRANSITION_TO_LIFESTATE_DYING = 0x1,
                TRANSITION_TO_LIFESTATE_DEAD = 0x2
            }
            // Alignment: 4
            // Members count: 24
            #[repr(u32)]
            pub enum PlayerAnimEvent_t {
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
            #[repr(u8)]
            pub enum ItemFlagTypes_t {
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
            #[repr(u8)]
            pub enum ShatterPanelMode {
                SHATTER_GLASS = 0x0,
                SHATTER_DRYWALL = 0x1
            }
            // Alignment: 1
            // Members count: 10
            #[repr(u8)]
            pub enum SurroundingBoundsType_t {
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
            #[repr(u32)]
            pub enum LifeState_t {
                LIFE_ALIVE = 0x0,
                LIFE_DYING = 0x1,
                LIFE_DEAD = 0x2,
                LIFE_RESPAWNABLE = 0x3,
                LIFE_RESPAWNING = 0x4
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum NPCFollowFormation_t {
                Default = u32::MAX,
                CloseCircle = 0x0,
                WideCircle = 0x1,
                MediumCircle = 0x5,
                Sidekick = 0x6
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum CSWeaponMode {
                Primary_Mode = 0x0,
                Secondary_Mode = 0x1,
                WeaponMode_MAX = 0x2
            }
            // Alignment: 1
            // Members count: 3
            #[repr(u8)]
            pub enum OnFrame {
                ONFRAME_UNKNOWN = 0x0,
                ONFRAME_TRUE = 0x1,
                ONFRAME_FALSE = 0x2
            }
            // Alignment: 4
            // Members count: 12
            #[repr(u32)]
            pub enum Materials {
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
            #[repr(u32)]
            pub enum ScriptedMoveTo_t {
                CINE_MOVETO_WAIT = 0x0,
                CINE_MOVETO_WALK = 0x1,
                CINE_MOVETO_RUN = 0x2,
                CINE_MOVETO_CUSTOM = 0x3,
                CINE_MOVETO_TELEPORT = 0x4,
                CINE_MOVETO_WAIT_FACING = 0x5
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum AnimLoopMode_t {
                ANIM_LOOP_MODE_INVALID = u32::MAX,
                ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
                ANIM_LOOP_MODE_LOOPING = 0x1,
                ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
                ANIM_LOOP_MODE_COUNT = 0x3
            }
            // Alignment: 4
            // Members count: 23
            #[repr(u32)]
            pub enum SoundFlags_t {
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
            #[repr(u32)]
            pub enum Class_T {
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
            #[repr(u32)]
            pub enum filter_t {
                FILTER_AND = 0x0,
                FILTER_OR = 0x1
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum CSWeaponSilencerType {
                WEAPONSILENCER_NONE = 0x0,
                WEAPONSILENCER_DETACHABLE = 0x1,
                WEAPONSILENCER_INTEGRATED = 0x2
            }
            // Alignment: 4
            // Members count: 17
            #[repr(u32)]
            pub enum BaseExplosionTypes_t {
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
            #[repr(u32)]
            pub enum GameAnimEventIndex_t {
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
            #[repr(u8)]
            pub enum FixAngleSet_t {
                None = 0x0,
                Absolute = 0x1,
                Relative = 0x2
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum IChoreoServices__ScriptState_t {
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
            #[repr(u32)]
            pub enum CommandEntitySpecType_t {
                SPEC_SEARCH = 0x0,
                SPEC_TYPES_COUNT = 0x1
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum Touch_t {
                touch_none = 0x0,
                touch_player_only = 0x1,
                touch_npc_only = 0x2,
                touch_player_or_npc = 0x3,
                touch_player_or_npc_or_physicsprop = 0x4
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum TrainVelocityType_t {
                TrainVelocity_Instantaneous = 0x0,
                TrainVelocity_LinearBlend = 0x1,
                TrainVelocity_EaseInEaseOut = 0x2
            }
            // Alignment: 4
            // Members count: 20
            #[repr(u32)]
            pub enum CSWeaponType {
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
            #[repr(u32)]
            pub enum EntFinderMethod_t {
                ENT_FIND_METHOD_NEAREST = 0x0,
                ENT_FIND_METHOD_FARTHEST = 0x1,
                ENT_FIND_METHOD_RANDOM = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum PropDoorRotatingSpawnPos_t {
                DOOR_SPAWN_CLOSED = 0x0,
                DOOR_SPAWN_OPEN_FORWARD = 0x1,
                DOOR_SPAWN_OPEN_BACK = 0x2,
                DOOR_SPAWN_AJAR = 0x3
            }
            // Alignment: 1
            // Members count: 2
            #[repr(u8)]
            pub enum ShardSolid_t {
                SHARD_SOLID = 0x0,
                SHARD_DEBRIS = 0x1
            }
            // Alignment: 1
            // Members count: 13
            #[repr(u8)]
            pub enum RenderMode_t {
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
            #[repr(u32)]
            pub enum ForcedCrouchState_t {
                FORCEDCROUCH_NONE = 0x0,
                FORCEDCROUCH_CROUCHED = 0x1,
                FORCEDCROUCH_UNCROUCHED = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum PerformanceMode_t {
                PM_NORMAL = 0x0,
                PM_NO_GIBS = 0x1,
                PM_FULL_GIBS = 0x2,
                PM_REDUCED_GIBS = 0x3
            }
            // Alignment: 4
            // Members count: 8
            #[repr(u32)]
            pub enum TOGGLE_STATE {
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
            #[repr(u32)]
            pub enum loadout_slot_t {
                LOADOUT_SLOT_PROMOTED = 0xFFFFFFFFFFFFFFFE,
                LOADOUT_SLOT_INVALID = u32::MAX,
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
            #[repr(u32)]
            pub enum NavAttributeEnum {
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
            #[repr(u32)]
            pub enum MoveLinearAuthoredPos_t {
                MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
                MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
                MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum ValueRemapperMomentumType_t {
                MomentumType_None = 0x0,
                MomentumType_Friction = 0x1,
                MomentumType_SpringTowardSnapValue = 0x2,
                MomentumType_SpringAwayFromSnapValue = 0x3
            }
            // Alignment: 4
            // Members count: 12
            #[repr(u32)]
            pub enum Hull_t {
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
            #[repr(u32)]
            pub enum PreviewWeaponState {
                DROPPED = 0x0,
                HOLSTERED = 0x1,
                DEPLOYED = 0x2,
                PLANTED = 0x3,
                INSPECT = 0x4,
                ICON = 0x5
            }
            // Alignment: 4
            // Members count: 9
            #[repr(u32)]
            pub enum EInButtonState {
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
            #[repr(u32)]
            pub enum BeamClipStyle_t {
                kNOCLIP = 0x0,
                kGEOCLIP = 0x1,
                kMODELCLIP = 0x2,
                kBEAMCLIPSTYLE_NUMBITS = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum WeaponAttackType_t {
                eInvalid = u32::MAX,
                ePrimary = 0x0,
                eSecondary = 0x1,
                eCount = 0x2
            }
            // Alignment: 4
            // Members count: 18
            #[repr(u32)]
            pub enum CSPlayerBlockingUseAction_t {
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
            #[repr(u32)]
            pub enum CSWeaponState_t {
                WEAPON_NOT_CARRIED = 0x0,
                WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
                WEAPON_IS_ACTIVE = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum CommandExecMode_t {
                EXEC_MANUAL = 0x0,
                EXEC_LEVELSTART = 0x1,
                EXEC_PERIODIC = 0x2,
                EXEC_MODES_COUNT = 0x3
            }
            // Alignment: 1
            // Members count: 5
            #[repr(u8)]
            pub enum ShatterDamageCause {
                SHATTERDAMAGE_BULLET = 0x0,
                SHATTERDAMAGE_MELEE = 0x1,
                SHATTERDAMAGE_THROWN = 0x2,
                SHATTERDAMAGE_SCRIPT = 0x3,
                SHATTERDAMAGE_EXPLOSIVE = 0x4
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum ScriptedOnDeath_t {
                SS_ONDEATH_NOT_APPLICABLE = u32::MAX,
                SS_ONDEATH_UNDEFINED = 0x0,
                SS_ONDEATH_RAGDOLL = 0x1,
                SS_ONDEATH_ANIMATED_DEATH = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum ScriptedMoveType_t {
                SCRIPTED_MOVETYPE_NONE = 0x0,
                SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
                SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
                SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum NPCLookType_t {
                Chest = 0x0,
                Head = 0x1,
                Eyes = 0x2
            }
            // Alignment: 4
            // Members count: 17
            #[repr(u32)]
            pub enum gear_slot_t {
                GEAR_SLOT_INVALID = u32::MAX,
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
            #[repr(u32)]
            pub enum CSPlayerState {
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
            #[repr(u32)]
            pub enum ScriptedConflictResponse_t {
                SS_CONFLICT_ENQUEUE = 0x0,
                SS_CONFLICT_INTERRUPT = 0x1
            }
            // Alignment: 1
            // Members count: 7
            #[repr(u8)]
            pub enum WaterLevel_t {
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
            #[repr(u32)]
            pub enum WorldTextPanelVerticalAlign_t {
                WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
                WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
                WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum AmmoPosition_t {
                AMMO_POSITION_INVALID = u32::MAX,
                AMMO_POSITION_PRIMARY = 0x0,
                AMMO_POSITION_SECONDARY = 0x1,
                AMMO_POSITION_COUNT = 0x2
            }
            // Alignment: 4
            // Members count: 23
            #[repr(u32)]
            pub enum PreviewEOMCelebration {
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
            #[repr(u32)]
            pub enum EntityDisolveType_t {
                ENTITY_DISSOLVE_INVALID = u32::MAX,
                ENTITY_DISSOLVE_NORMAL = 0x0,
                ENTITY_DISSOLVE_ELECTRICAL = 0x1,
                ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
                ENTITY_DISSOLVE_CORE = 0x3
            }
            // Alignment: 8
            // Members count: 21
            #[repr(u64)]
            pub enum InputBitMask_t {
                IN_NONE = 0x0,
                IN_ALL = u64::MAX,
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
            #[repr(u32)]
            pub enum HitGroup_t {
                HITGROUP_INVALID = u32::MAX,
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
            #[repr(u32)]
            pub enum ChickenActivity {
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
            #[repr(u32)]
            pub enum PointWorldTextReorientMode_t {
                POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
                POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
            }
            // Alignment: 8
            // Members count: 39
            #[repr(u64)]
            pub enum DebugOverlayBits_t {
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
            #[repr(u32)]
            pub enum AmmoFlags_t {
                AMMO_FORCE_DROP_IF_CARRIED = 0x1,
                AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
                AMMO_FLAG_MAX = 0x2
            }
            // Alignment: 4
            // Members count: 6
            #[repr(u32)]
            pub enum HierarchyType_t {
                HIERARCHY_NONE = 0x0,
                HIERARCHY_BONE_MERGE = 0x1,
                HIERARCHY_ATTACHMENT = 0x2,
                HIERARCHY_ABSORIGIN = 0x3,
                HIERARCHY_BONE = 0x4,
                HIERARCHY_TYPE_COUNT = 0x5
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum doorCheck_e {
                DOOR_CHECK_FORWARD = 0x0,
                DOOR_CHECK_BACKWARD = 0x1,
                DOOR_CHECK_FULL = 0x2
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum BeamType_t {
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
            #[repr(u32)]
            pub enum EntitySubclassScope_t {
                SUBCLASS_SCOPE_NONE = u32::MAX,
                SUBCLASS_SCOPE_PRECIPITATION = 0x0,
                SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
                SUBCLASS_SCOPE_COUNT = 0x2
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum PointTemplateClientOnlyEntityBehavior_t {
                CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
                CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1
            }
            // Alignment: 1
            // Members count: 5
            #[repr(u8)]
            pub enum ShatterGlassStressType {
                SHATTERGLASS_BLUNT = 0x0,
                SHATTERGLASS_BALLISTIC = 0x1,
                SHATTERGLASS_PULSE = 0x2,
                SHATTERDRYWALL_CHUNKS = 0x3,
                SHATTERGLASS_EXPLOSIVE = 0x4
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum TrackOrientationType_t {
                TrackOrientation_Fixed = 0x0,
                TrackOrientation_FacePath = 0x1,
                TrackOrientation_FacePathAngles = 0x2
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum WeaponSwitchReason_t {
                eDrawn = 0x0,
                eEquipped = 0x1,
                eUserInitiatedSwitchToLast = 0x2,
                eUserInitiatedSwitchHands = 0x3
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum ValueRemapperRatchetType_t {
                RatchetType_Absolute = 0x0,
                RatchetType_EachEngage = 0x1
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum NavDirType {
                NORTH = 0x0,
                EAST = 0x1,
                SOUTH = 0x2,
                WEST = 0x3,
                NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum CRR_Response__ResponseEnum_t {
                MAX_RESPONSE_NAME = 0xC0,
                MAX_RULE_NAME = 0x80
            }
            // Alignment: 4
            // Members count: 4
            #[repr(u32)]
            pub enum MoveMountingAmount_t {
                MOVE_MOUNT_NONE = 0x0,
                MOVE_MOUNT_LOW = 0x1,
                MOVE_MOUNT_HIGH = 0x2,
                MOVE_MOUNT_MAXCOUNT = 0x3
            }
            // Alignment: 1
            // Members count: 20
            #[repr(u8)]
            pub enum RenderFx_t {
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
            #[repr(u32)]
            pub enum vote_create_failed_t {
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
            #[repr(u32)]
            pub enum RumbleEffect_t {
                RUMBLE_INVALID = u32::MAX,
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
            #[repr(u32)]
            pub enum LatchDirtyPermission_t {
                LATCH_DIRTY_DISALLOW = 0x0,
                LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
                LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
                LATCH_DIRTY_PREDICTION = 0x3,
                LATCH_DIRTY_FRAMESIMULATE = 0x4,
                LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum DoorState_t {
                DOOR_STATE_CLOSED = 0x0,
                DOOR_STATE_OPENING = 0x1,
                DOOR_STATE_OPEN = 0x2,
                DOOR_STATE_CLOSING = 0x3,
                DOOR_STATE_AJAR = 0x4
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum ChatIgnoreType_t {
                CHAT_IGNORE_NONE = 0x0,
                CHAT_IGNORE_ALL = 0x1,
                CHAT_IGNORE_TEAM = 0x2
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum PlayerConnectedState {
                PlayerNeverConnected = u32::MAX,
                PlayerConnected = 0x0,
                PlayerConnecting = 0x1,
                PlayerReconnecting = 0x2,
                PlayerDisconnecting = 0x3,
                PlayerDisconnected = 0x4,
                PlayerReserved = 0x5
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t {
                kMIN_THRESHOLD = 0x0,
                kMIN_FULL = 0x1,
                kHIGHWATER = 0x2
            }
            // Alignment: 4
            // Members count: 1
            #[repr(u32)]
            pub enum navproperties_t {
                NAV_IGNORE = 0x1
            }
            // Alignment: 1
            // Members count: 9
            #[repr(u8)]
            pub enum SolidType_t {
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
            #[repr(u32)]
            pub enum DamageTypes_t {
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
            #[repr(u32)]
            pub enum PointWorldTextJustifyVertical_t {
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum attributeprovidertypes_t {
                PROVIDER_GENERIC = 0x0,
                PROVIDER_WEAPON = 0x1
            }
            // Alignment: 1
            // Members count: 6
            #[repr(u8)]
            pub enum MoveCollide_t {
                MOVECOLLIDE_DEFAULT = 0x0,
                MOVECOLLIDE_FLY_BOUNCE = 0x1,
                MOVECOLLIDE_FLY_CUSTOM = 0x2,
                MOVECOLLIDE_FLY_SLIDE = 0x3,
                MOVECOLLIDE_COUNT = 0x4,
                MOVECOLLIDE_MAX_BITS = 0x3
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum IChoreoServices__ChoreoState_t {
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
            #[repr(u32)]
            pub enum ValueRemapperOutputType_t {
                OutputType_AnimationCycle = 0x0,
                OutputType_RotationX = 0x1,
                OutputType_RotationY = 0x2,
                OutputType_RotationZ = 0x3
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum PointTemplateOwnerSpawnGroupType_t {
                INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
                INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
                INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum PointWorldTextJustifyHorizontal_t {
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
                POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2
            }
            // Alignment: 4
            // Members count: 6
            #[repr(u32)]
            pub enum ShakeCommand_t {
                SHAKE_START = 0x0,
                SHAKE_STOP = 0x1,
                SHAKE_AMPLITUDE = 0x2,
                SHAKE_FREQUENCY = 0x3,
                SHAKE_START_RUMBLEONLY = 0x4,
                SHAKE_START_NORUMBLE = 0x5
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum TRAIN_CODE {
                TRAIN_SAFE = 0x0,
                TRAIN_BLOCKING = 0x1,
                TRAIN_FOLLOWING = 0x2
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum BrushSolidities_e {
                BRUSHSOLID_TOGGLE = 0x0,
                BRUSHSOLID_NEVER = 0x1,
                BRUSHSOLID_ALWAYS = 0x2
            }
            // Alignment: 4
            // Members count: 13
            #[repr(u32)]
            pub enum QuestProgress__Reason {
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
            #[repr(u32)]
            pub enum ModifyDamageReturn_t {
                CONTINUE_TO_APPLY_DAMAGE = 0x0,
                ABORT_DO_NOT_APPLY_DAMAGE = 0x1
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum ShadowType_t {
                SHADOWS_NONE = 0x0,
                SHADOWS_SIMPLE = 0x1
            }
            // Alignment: 4
            // Members count: 8
            #[repr(u32)]
            pub enum GrenadeType_t {
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
            #[repr(u32)]
            pub enum ValueRemapperInputType_t {
                InputType_PlayerShootPosition = 0x0,
                InputType_PlayerShootPositionAroundAxis = 0x1
            }
            // Alignment: 1
            // Members count: 8
            #[repr(u8)]
            pub enum EKillTypes_t {
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
            #[repr(u32)]
            pub enum WeaponSound_t {
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
            #[repr(u32)]
            pub enum TakeDamageFlags_t {
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
            #[repr(u32)]
            pub enum ValueRemapperHapticsType_t {
                HaticsType_Default = 0x0,
                HaticsType_None = 0x1
            }
            // Alignment: 4
            // Members count: 10
            #[repr(u32)]
            pub enum Disposition_t {
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
            #[repr(u32)]
            pub enum CanPlaySequence_t {
                CANNOT_PLAY = 0x0,
                CAN_PLAY_NOW = 0x1,
                CAN_PLAY_ENQUEUED = 0x2
            }
            // Alignment: 4
            // Members count: 5
            #[repr(u32)]
            pub enum MedalRank_t {
                MEDAL_RANK_NONE = 0x0,
                MEDAL_RANK_BRONZE = 0x1,
                MEDAL_RANK_SILVER = 0x2,
                MEDAL_RANK_GOLD = 0x3,
                MEDAL_RANK_COUNT = 0x4
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum ObserverMode_t {
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
            #[repr(u32)]
            pub enum FuncDoorSpawnPos_t {
                FUNC_DOOR_SPAWN_CLOSED = 0x0,
                FUNC_DOOR_SPAWN_OPEN = 0x1
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum EOverrideBlockLOS_t {
                BLOCK_LOS_DEFAULT = 0x0,
                BLOCK_LOS_FORCE_FALSE = 0x1,
                BLOCK_LOS_FORCE_TRUE = 0x2
            }
            // Alignment: 1
            // Members count: 14
            #[repr(u8)]
            pub enum MoveType_t {
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
            pub mod CDynamicProp {
                pub const m_bCreateNavObstacle: usize = 0xD70; // bool
                pub const m_bUseHitboxesForRenderBox: usize = 0xD71; // bool
                pub const m_bUseAnimGraph: usize = 0xD72; // bool
                pub const m_pOutputAnimBegun: usize = 0xD78; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0xDA0; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0xDC8; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0xDF0; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0xE18; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0xE40; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0xE48; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0xE4C; // bool
                pub const m_bStartDisabled: usize = 0xE4D; // bool
                pub const m_bFiredStartEndOutput: usize = 0xE4E; // bool
                pub const m_bForceNpcExclude: usize = 0xE4F; // bool
                pub const m_bCreateNonSolid: usize = 0xE50; // bool
                pub const m_bIsOverrideProp: usize = 0xE51; // bool
                pub const m_iInitialGlowState: usize = 0xE54; // int32
                pub const m_nGlowRange: usize = 0xE58; // int32
                pub const m_nGlowRangeMin: usize = 0xE5C; // int32
                pub const m_glowColor: usize = 0xE60; // Color
                pub const m_nGlowTeam: usize = 0xE64; // int32
            }
            // Parent: CBaseModelEntity
            // Fields count: 0
            pub mod CFuncIllusionary {
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
            pub mod CCSPlayer_MovementServices {
                pub const m_flMaxFallVelocity: usize = 0x224; // float32
                pub const m_vecLadderNormal: usize = 0x228; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x234; // int32
                pub const m_flDuckAmount: usize = 0x238; // float32
                pub const m_flDuckSpeed: usize = 0x23C; // float32
                pub const m_bDuckOverride: usize = 0x240; // bool
                pub const m_bDesiresDuck: usize = 0x241; // bool
                pub const m_flDuckOffset: usize = 0x244; // float32
                pub const m_nDuckTimeMsecs: usize = 0x248; // uint32
                pub const m_nDuckJumpTimeMsecs: usize = 0x24C; // uint32
                pub const m_nJumpTimeMsecs: usize = 0x250; // uint32
                pub const m_flLastDuckTime: usize = 0x254; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x260; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x268; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x269; // bool
                pub const m_bInStuckTest: usize = 0x26A; // bool
                pub const m_flStuckCheckTime: usize = 0x278; // float32[64][2]
                pub const m_nTraceCount: usize = 0x478; // int32
                pub const m_StuckLast: usize = 0x47C; // int32
                pub const m_bSpeedCropped: usize = 0x480; // bool
                pub const m_nOldWaterLevel: usize = 0x484; // int32
                pub const m_flWaterEntryTime: usize = 0x488; // float32
                pub const m_vecForward: usize = 0x48C; // Vector
                pub const m_vecLeft: usize = 0x498; // Vector
                pub const m_vecUp: usize = 0x4A4; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x4B0; // int32
                pub const m_bMadeFootstepNoise: usize = 0x4B4; // bool
                pub const m_iFootsteps: usize = 0x4B8; // int32
                pub const m_bOldJumpPressed: usize = 0x4BC; // bool
                pub const m_flJumpPressedTime: usize = 0x4C0; // float32
                pub const m_flJumpUntil: usize = 0x4C4; // float32
                pub const m_flJumpVel: usize = 0x4C8; // float32
                pub const m_fStashGrenadeParameterWhen: usize = 0x4CC; // GameTime_t
                pub const m_nButtonDownMaskPrev: usize = 0x4D0; // uint64
                pub const m_flOffsetTickCompleteTime: usize = 0x4D8; // float32
                pub const m_flOffsetTickStashedSpeed: usize = 0x4DC; // float32
                pub const m_flStamina: usize = 0x4E0; // float32
                pub const m_flHeightAtJumpStart: usize = 0x4E4; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x4E8; // float32
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
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: CCSWeaponBase
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            pub mod CFists {
                pub const m_bPlayingUninterruptableAct: usize = 0x11A0; // bool
                pub const m_nUninterruptableActivity: usize = 0x11A4; // PlayerAnimEvent_t
                pub const m_bRestorePrevWep: usize = 0x11A8; // bool
                pub const m_hWeaponBeforePrevious: usize = 0x11AC; // CHandle<CBasePlayerWeapon>
                pub const m_hWeaponPrevious: usize = 0x11B0; // CHandle<CBasePlayerWeapon>
                pub const m_bDelayedHardPunchIncoming: usize = 0x11B4; // bool
                pub const m_bDestroyAfterTaunt: usize = 0x11B5; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 1
            pub mod CTriggerRemove {
                pub const m_OnRemove: usize = 0xBA0; // CEntityIOOutput
            }
            // Parent: CBaseFilter
            // Fields count: 1
            pub mod CFilterName {
                pub const m_iFilterName: usize = 0x800; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Fields count: 2
            pub mod CProjectedDecal {
                pub const m_nTexture: usize = 0x7A8; // int32
                pub const m_flDistance: usize = 0x7AC; // float32
            }
            // Parent: CBaseTrigger
            // Fields count: 5
            pub mod CTriggerProximity {
                pub const m_hMeasureTarget: usize = 0xB9C; // CHandle<CBaseEntity>
                pub const m_iszMeasureTarget: usize = 0xBA0; // CUtlSymbolLarge
                pub const m_fRadius: usize = 0xBA8; // float32
                pub const m_nTouchers: usize = 0xBAC; // int32
                pub const m_NearestEntityDistance: usize = 0xBB0; // CEntityOutputTemplate<float32>
            }
            // Parent: CFuncBrush
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            pub mod CFuncElectrifiedVolume {
                pub const m_EffectName: usize = 0xA18; // CUtlSymbolLarge
                pub const m_EffectInterpenetrateName: usize = 0xA20; // CUtlSymbolLarge
                pub const m_EffectZapName: usize = 0xA28; // CUtlSymbolLarge
                pub const m_iszEffectSource: usize = 0xA30; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Fields count: 1
            pub mod CBaseDMStart {
                pub const m_Master: usize = 0x7A8; // CUtlSymbolLarge
            }
            // Parent: CGameRulesProxy
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            pub mod CCSGameRulesProxy {
                pub const m_pGameRules: usize = 0x7A8; // CCSGameRules*
            }
            // Parent: CBaseTrigger
            // Fields count: 0
            pub mod CTriggerHostageReset {
            }
            // Parent: CServerOnlyPointEntity
            // Fields count: 4
            pub mod CPointTeleport {
                pub const m_vSaveOrigin: usize = 0x7A8; // Vector
                pub const m_vSaveAngles: usize = 0x7B4; // QAngle
                pub const m_bTeleportParentedEntities: usize = 0x7C0; // bool
                pub const m_bTeleportUseCurrentAngle: usize = 0x7C1; // bool
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
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float32
                pub const m_PlayerFog: usize = 0x58; // fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<CColorCorrection>
                pub const m_hViewEntity: usize = 0x9C; // CHandle<CBaseEntity>
                pub const m_hTonemapController: usize = 0xA0; // CHandle<CTonemapController2>
                pub const m_audio: usize = 0xA8; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x138; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float32
                pub const m_hTriggerSoundscapeList: usize = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponMP9 {
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            pub mod CPhysicsEntitySolver {
                pub const m_hMovingEntity: usize = 0x7B0; // CHandle<CBaseEntity>
                pub const m_hPhysicsBlocker: usize = 0x7B4; // CHandle<CBaseEntity>
                pub const m_separationDuration: usize = 0x7B8; // float32
                pub const m_cancelTime: usize = 0x7BC; // GameTime_t
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
            pub mod CPlayerPing {
                pub const m_hPlayer: usize = 0x7B0; // CHandle<CCSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x7B4; // CHandle<CBaseEntity>
                pub const m_iType: usize = 0x7B8; // int32
                pub const m_bUrgent: usize = 0x7BC; // bool
                pub const m_szPlaceName: usize = 0x7BD; // char[18]
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
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x160; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x380; // bool
                pub const m_bUseParentRenderBounds: usize = 0x381; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x382; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x384; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x388; // uint8
            }
            // Parent: CBaseEntity
            // Fields count: 8
            pub mod CEnvFireSensor {
                pub const m_bEnabled: usize = 0x7A8; // bool
                pub const m_bHeatAtLevel: usize = 0x7A9; // bool
                pub const m_radius: usize = 0x7AC; // float32
                pub const m_targetLevel: usize = 0x7B0; // float32
                pub const m_targetTime: usize = 0x7B4; // float32
                pub const m_levelTime: usize = 0x7B8; // float32
                pub const m_OnHeatLevelStart: usize = 0x7C0; // CEntityIOOutput
                pub const m_OnHeatLevelEnd: usize = 0x7E8; // CEntityIOOutput
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Fields count: 2
            pub mod CEnvWindShared__WindAveEvent_t {
                pub const m_flStartWindSpeed: usize = 0x0; // float32
                pub const m_flAveWindSpeed: usize = 0x4; // float32
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
            pub mod CBaseCSGrenade {
                pub const m_bRedraw: usize = 0x11A0; // bool
                pub const m_bIsHeldByPlayer: usize = 0x11A1; // bool
                pub const m_bPinPulled: usize = 0x11A2; // bool
                pub const m_bJumpThrow: usize = 0x11A3; // bool
                pub const m_bThrowAnimating: usize = 0x11A4; // bool
                pub const m_fThrowTime: usize = 0x11A8; // GameTime_t
                pub const m_flThrowStrength: usize = 0x11AC; // float32
                pub const m_flThrowStrengthApproach: usize = 0x11B0; // float32
                pub const m_fDropTime: usize = 0x11B4; // GameTime_t
                pub const m_fPinPullTime: usize = 0x11B8; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x11BC; // bool
                pub const m_nNextHoldTick: usize = 0x11C0; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x11C4; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x11C8; // CHandle<CCSWeaponBase>
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            pub mod CItemGenericTriggerHelper {
                pub const m_hParentItem: usize = 0x9F8; // CHandle<CItemGeneric>
            }
            // Parent: CLogicalEntity
            // Fields count: 6
            pub mod CLogicBranchList {
                pub const m_nLogicBranchNames: usize = 0x7A8; // CUtlSymbolLarge[16]
                pub const m_LogicBranchList: usize = 0x828; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_eLastState: usize = 0x840; // CLogicBranchList::LogicBranchListenerLastState_t
                pub const m_OnAllTrue: usize = 0x848; // CEntityIOOutput
                pub const m_OnAllFalse: usize = 0x870; // CEntityIOOutput
                pub const m_OnMixed: usize = 0x898; // CEntityIOOutput
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
            pub mod fogplayerparams_t {
                pub const m_hCtrl: usize = 0x8; // CHandle<CFogController>
                pub const m_flTransitionTime: usize = 0xC; // float32
                pub const m_OldColor: usize = 0x10; // Color
                pub const m_flOldStart: usize = 0x14; // float32
                pub const m_flOldEnd: usize = 0x18; // float32
                pub const m_flOldMaxDensity: usize = 0x1C; // float32
                pub const m_flOldHDRColorScale: usize = 0x20; // float32
                pub const m_flOldFarZ: usize = 0x24; // float32
                pub const m_NewColor: usize = 0x28; // Color
                pub const m_flNewStart: usize = 0x2C; // float32
                pub const m_flNewEnd: usize = 0x30; // float32
                pub const m_flNewMaxDensity: usize = 0x34; // float32
                pub const m_flNewHDRColorScale: usize = 0x38; // float32
                pub const m_flNewFarZ: usize = 0x3C; // float32
            }
            // Parent: CItemDefuser
            // Fields count: 0
            pub mod CItemDefuserAlias_item_defuser {
            }
            // Parent: CModelPointEntity
            // Fields count: 3
            pub mod CRevertSaved {
                pub const m_loadTime: usize = 0x9F8; // float32
                pub const m_Duration: usize = 0x9FC; // float32
                pub const m_HoldTime: usize = 0xA00; // float32
            }
            // Parent: CLogicalEntity
            // Fields count: 8
            pub mod CMultiLightProxy {
                pub const m_iszLightNameFilter: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_iszLightClassFilter: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_flLightRadiusFilter: usize = 0x7B8; // float32
                pub const m_flBrightnessDelta: usize = 0x7BC; // float32
                pub const m_bPerformScreenFade: usize = 0x7C0; // bool
                pub const m_flTargetBrightnessMultiplier: usize = 0x7C4; // float32
                pub const m_flCurrentBrightnessMultiplier: usize = 0x7C8; // float32
                pub const m_vecLights: usize = 0x7D0; // CUtlVector<CHandle<CLightEntity>>
            }
            // Parent: CItem
            // Fields count: 2
            pub mod CItemDefuser {
                pub const m_entitySpottedState: usize = 0xCC8; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xCE0; // int32
            }
            // Parent: CRuleEntity
            // Fields count: 0
            pub mod CRuleBrushEntity {
            }
            // Parent: CInferno
            // Fields count: 0
            pub mod CFireCrackerBlast {
            }
            // Parent: CBaseEntity
            // Fields count: 12
            pub mod CSoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x7A8; // bool
                pub const m_bToLocalPlayer: usize = 0x7A9; // bool
                pub const m_bStopOnNew: usize = 0x7AA; // bool
                pub const m_bSaveRestore: usize = 0x7AB; // bool
                pub const m_bSavedIsPlaying: usize = 0x7AC; // bool
                pub const m_flSavedElapsedTime: usize = 0x7B0; // float32
                pub const m_iszSourceEntityName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x7C8; // CEntityOutputTemplate<uint64>
                pub const m_onSoundFinished: usize = 0x7F0; // CEntityIOOutput
                pub const m_iszSoundName: usize = 0x838; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x848; // CEntityHandle
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            pub mod CCSPlayer_ViewModelServices {
                pub const m_hViewModel: usize = 0x40; // CHandle<CBaseViewModel>[3]
            }
            // Parent: CRagdollProp
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            pub mod CRagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0xD98; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0xD9C; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0xDA0; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0xDAC; // Vector
                pub const m_bShouldDetach: usize = 0xDB8; // bool
                pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xDC8; // bool
            }
            // Parent: CBasePropDoor
            // Fields count: 17
            pub mod CPropDoorRotating {
                pub const m_vecAxis: usize = 0x10F0; // Vector
                pub const m_flDistance: usize = 0x10FC; // float32
                pub const m_eSpawnPosition: usize = 0x1100; // PropDoorRotatingSpawnPos_t
                pub const m_eOpenDirection: usize = 0x1104; // PropDoorRotatingOpenDirection_e
                pub const m_eCurrentOpenDirection: usize = 0x1108; // PropDoorRotatingOpenDirection_e
                pub const m_flAjarAngle: usize = 0x110C; // float32
                pub const m_angRotationAjarDeprecated: usize = 0x1110; // QAngle
                pub const m_angRotationClosed: usize = 0x111C; // QAngle
                pub const m_angRotationOpenForward: usize = 0x1128; // QAngle
                pub const m_angRotationOpenBack: usize = 0x1134; // QAngle
                pub const m_angGoal: usize = 0x1140; // QAngle
                pub const m_vecForwardBoundsMin: usize = 0x114C; // Vector
                pub const m_vecForwardBoundsMax: usize = 0x1158; // Vector
                pub const m_vecBackBoundsMin: usize = 0x1164; // Vector
                pub const m_vecBackBoundsMax: usize = 0x1170; // Vector
                pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0x117C; // bool
                pub const m_hEntityBlocker: usize = 0x1180; // CHandle<CEntityBlocker>
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
            pub mod CRopeKeyframe {
                pub const m_RopeFlags: usize = 0xA00; // uint16
                pub const m_iNextLinkName: usize = 0xA08; // CUtlSymbolLarge
                pub const m_Slack: usize = 0xA10; // int16
                pub const m_Width: usize = 0xA14; // float32
                pub const m_TextureScale: usize = 0xA18; // float32
                pub const m_nSegments: usize = 0xA1C; // uint8
                pub const m_bConstrainBetweenEndpoints: usize = 0xA1D; // bool
                pub const m_strRopeMaterialModel: usize = 0xA20; // CUtlSymbolLarge
                pub const m_iRopeMaterialModelIndex: usize = 0xA28; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_Subdiv: usize = 0xA30; // uint8
                pub const m_nChangeCount: usize = 0xA31; // uint8
                pub const m_RopeLength: usize = 0xA32; // int16
                pub const m_fLockedPoints: usize = 0xA34; // uint8
                pub const m_bCreatedFromMapFile: usize = 0xA35; // bool
                pub const m_flScrollSpeed: usize = 0xA38; // float32
                pub const m_bStartPointValid: usize = 0xA3C; // bool
                pub const m_bEndPointValid: usize = 0xA3D; // bool
                pub const m_hStartPoint: usize = 0xA40; // CHandle<CBaseEntity>
                pub const m_hEndPoint: usize = 0xA44; // CHandle<CBaseEntity>
                pub const m_iStartAttachment: usize = 0xA48; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0xA49; // AttachmentHandle_t
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
            pub mod CBarnLight {
                pub const m_bEnabled: usize = 0x9F8; // bool
                pub const m_nColorMode: usize = 0x9FC; // int32
                pub const m_Color: usize = 0xA00; // Color
                pub const m_flColorTemperature: usize = 0xA04; // float32
                pub const m_flBrightness: usize = 0xA08; // float32
                pub const m_flBrightnessScale: usize = 0xA0C; // float32
                pub const m_nDirectLight: usize = 0xA10; // int32
                pub const m_nBakedShadowIndex: usize = 0xA14; // int32
                pub const m_nLuminaireShape: usize = 0xA18; // int32
                pub const m_flLuminaireSize: usize = 0xA1C; // float32
                pub const m_flLuminaireAnisotropy: usize = 0xA20; // float32
                pub const m_LightStyleString: usize = 0xA28; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0xA30; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0xA38; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0xA50; // CNetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0xA68; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_StyleEvent: usize = 0xA80; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0xB40; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0xB48; // float32
                pub const m_flSoftX: usize = 0xB4C; // float32
                pub const m_flSoftY: usize = 0xB50; // float32
                pub const m_flSkirt: usize = 0xB54; // float32
                pub const m_flSkirtNear: usize = 0xB58; // float32
                pub const m_vSizeParams: usize = 0xB5C; // Vector
                pub const m_flRange: usize = 0xB68; // float32
                pub const m_vShear: usize = 0xB6C; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0xB78; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0xB7C; // Vector
                pub const m_nCastShadows: usize = 0xB88; // int32
                pub const m_nShadowMapSize: usize = 0xB8C; // int32
                pub const m_nShadowPriority: usize = 0xB90; // int32
                pub const m_bContactShadow: usize = 0xB94; // bool
                pub const m_nBounceLight: usize = 0xB98; // int32
                pub const m_flBounceScale: usize = 0xB9C; // float32
                pub const m_flMinRoughness: usize = 0xBA0; // float32
                pub const m_vAlternateColor: usize = 0xBA4; // Vector
                pub const m_fAlternateColorBrightness: usize = 0xBB0; // float32
                pub const m_nFog: usize = 0xBB4; // int32
                pub const m_flFogStrength: usize = 0xBB8; // float32
                pub const m_nFogShadows: usize = 0xBBC; // int32
                pub const m_flFogScale: usize = 0xBC0; // float32
                pub const m_flFadeSizeStart: usize = 0xBC4; // float32
                pub const m_flFadeSizeEnd: usize = 0xBC8; // float32
                pub const m_flShadowFadeSizeStart: usize = 0xBCC; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0xBD0; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0xBD4; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0xBD8; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0xBE4; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0xBF0; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0xBFC; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0xC08; // Vector
                pub const m_bPvsModifyEntity: usize = 0xC14; // bool
            }
            // Parent: SpawnPoint
            // Fields count: 0
            pub mod CInfoDeathmatchSpawn {
            }
            // Parent: CPointEntity
            // Fields count: 2
            pub mod CEnvViewPunch {
                pub const m_flRadius: usize = 0x7A8; // float32
                pub const m_angViewPunch: usize = 0x7AC; // QAngle
            }
            // Parent: CBaseEntity
            // Fields count: 1
            pub mod CPhysicsWire {
                pub const m_nDensity: usize = 0x7A8; // int32
            }
            // Parent: CPropDoorRotating
            // Fields count: 4
            pub mod CPropDoorRotatingBreakable {
                pub const m_bBreakable: usize = 0x1184; // bool
                pub const m_isAbleToCloseAreaPortals: usize = 0x1185; // bool
                pub const m_currentDamageState: usize = 0x1188; // int32
                pub const m_damageStates: usize = 0x1190; // CUtlVector<CUtlSymbolLarge>
            }
            // Parent: CBaseFire
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            pub mod CFireSmoke {
                pub const m_nFlameModelIndex: usize = 0x7B8; // int32
                pub const m_nFlameFromAboveModelIndex: usize = 0x7BC; // int32
            }
            // Parent: CMolotovGrenade
            // Fields count: 0
            pub mod CIncendiaryGrenade {
            }
            // Parent: CPathCorner
            // Fields count: 0
            pub mod CPathCornerCrash {
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            pub mod CHandleTest {
                pub const m_Handle: usize = 0x7A8; // CHandle<CBaseEntity>
                pub const m_bSendHandle: usize = 0x7AC; // bool
            }
            // Parent: CBaseEntity
            // Fields count: 8
            pub mod CSoundOpvarSetEntity {
                pub const m_iszStackName: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_nOpvarType: usize = 0x7C8; // int32
                pub const m_nOpvarIndex: usize = 0x7CC; // int32
                pub const m_flOpvarValue: usize = 0x7D0; // float32
                pub const m_OpvarValueString: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_bSetOnSpawn: usize = 0x7E0; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // Parent: CPointEntity
            // Fields count: 1
            pub mod CNavSpaceInfo {
                pub const m_bCreateFlightSpace: usize = 0x7A8; // bool
            }
            // Parent: CLogicalEntity
            // Fields count: 3
            pub mod CLogicAchievement {
                pub const m_bDisabled: usize = 0x7A8; // bool
                pub const m_iszAchievementEventID: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_OnFired: usize = 0x7B8; // CEntityIOOutput
            }
            // Parent: CBtNode
            // Fields count: 1
            pub mod CBtActionParachutePositioning {
                pub const m_ActionTimer: usize = 0x58; // CountdownTimer
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
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x170; // uint32
                pub const m_iFOVStart: usize = 0x174; // uint32
                pub const m_flFOVTime: usize = 0x178; // GameTime_t
                pub const m_flFOVRate: usize = 0x17C; // float32
                pub const m_hZoomOwner: usize = 0x180; // CHandle<CBaseEntity>
                pub const m_hTriggerFogList: usize = 0x188; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_hLastFogTrigger: usize = 0x1A0; // CHandle<CBaseEntity>
            }
            // Parent: CEntityComponent
            // Fields count: 0
            pub mod CTouchExpansionComponent {
            }
            // Parent: CFuncPlatRot
            // Fields count: 9
            pub mod CFuncTrackChange {
                pub const m_trackTop: usize = 0xAC0; // CPathTrack*
                pub const m_trackBottom: usize = 0xAC8; // CPathTrack*
                pub const m_train: usize = 0xAD0; // CFuncTrackTrain*
                pub const m_trackTopName: usize = 0xAD8; // CUtlSymbolLarge
                pub const m_trackBottomName: usize = 0xAE0; // CUtlSymbolLarge
                pub const m_trainName: usize = 0xAE8; // CUtlSymbolLarge
                pub const m_code: usize = 0xAF0; // TRAIN_CODE
                pub const m_targetState: usize = 0xAF4; // int32
                pub const m_use: usize = 0xAF8; // int32
            }
            // Parent: CRuleBrushEntity
            // Fields count: 4
            pub mod CGamePlayerZone {
                pub const m_OnPlayerInZone: usize = 0xA00; // CEntityIOOutput
                pub const m_OnPlayerOutZone: usize = 0xA28; // CEntityIOOutput
                pub const m_PlayersInCount: usize = 0xA50; // CEntityOutputTemplate<int32>
                pub const m_PlayersOutCount: usize = 0xA78; // CEntityOutputTemplate<int32>
            }
            // Parent: CRuleEntity
            // Fields count: 1
            pub mod CRulePointEntity {
                pub const m_Score: usize = 0xA00; // int32
            }
            // Parent: CPointEntity
            // Fields count: 5
            pub mod CMessageEntity {
                pub const m_radius: usize = 0x7A8; // int32
                pub const m_messageText: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_drawText: usize = 0x7B8; // bool
                pub const m_bDeveloperOnly: usize = 0x7B9; // bool
                pub const m_bEnabled: usize = 0x7BA; // bool
            }
            // Parent: CBaseCSGrenade
            // Fields count: 0
            pub mod CSmokeGrenade {
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
            pub mod CBaseViewModel {
                pub const m_vecLastFacing: usize = 0xBF8; // Vector
                pub const m_nViewModelIndex: usize = 0xC04; // uint32
                pub const m_nAnimationParity: usize = 0xC08; // uint32
                pub const m_flAnimationStartTime: usize = 0xC0C; // float32
                pub const m_hWeapon: usize = 0xC10; // CHandle<CBasePlayerWeapon>
                pub const m_sVMName: usize = 0xC18; // CUtlSymbolLarge
                pub const m_sAnimationPrefix: usize = 0xC20; // CUtlSymbolLarge
                pub const m_hOldLayerSequence: usize = 0xC28; // HSequence
                pub const m_oldLayer: usize = 0xC2C; // int32
                pub const m_oldLayerStartTime: usize = 0xC30; // float32
                pub const m_hControlPanel: usize = 0xC34; // CHandle<CBaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            pub mod CCSPlayer_PingServices {
                pub const m_flPlayerPingTokens: usize = 0x40; // GameTime_t[5]
                pub const m_hPlayerPing: usize = 0x54; // CHandle<CBaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: CCSWeaponBase
            // Fields count: 1
            pub mod CKnife {
                pub const m_bFirstAttack: usize = 0x11A0; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 38
            pub mod CFuncTrackTrain {
                pub const m_ppath: usize = 0x9F8; // CHandle<CPathTrack>
                pub const m_length: usize = 0x9FC; // float32
                pub const m_vPosPrev: usize = 0xA00; // Vector
                pub const m_angPrev: usize = 0xA0C; // QAngle
                pub const m_controlMins: usize = 0xA18; // Vector
                pub const m_controlMaxs: usize = 0xA24; // Vector
                pub const m_lastBlockPos: usize = 0xA30; // Vector
                pub const m_lastBlockTick: usize = 0xA3C; // int32
                pub const m_flVolume: usize = 0xA40; // float32
                pub const m_flBank: usize = 0xA44; // float32
                pub const m_oldSpeed: usize = 0xA48; // float32
                pub const m_flBlockDamage: usize = 0xA4C; // float32
                pub const m_height: usize = 0xA50; // float32
                pub const m_maxSpeed: usize = 0xA54; // float32
                pub const m_dir: usize = 0xA58; // float32
                pub const m_iszSoundMove: usize = 0xA60; // CUtlSymbolLarge
                pub const m_iszSoundMovePing: usize = 0xA68; // CUtlSymbolLarge
                pub const m_iszSoundStart: usize = 0xA70; // CUtlSymbolLarge
                pub const m_iszSoundStop: usize = 0xA78; // CUtlSymbolLarge
                pub const m_strPathTarget: usize = 0xA80; // CUtlSymbolLarge
                pub const m_flMoveSoundMinDuration: usize = 0xA88; // float32
                pub const m_flMoveSoundMaxDuration: usize = 0xA8C; // float32
                pub const m_flNextMoveSoundTime: usize = 0xA90; // GameTime_t
                pub const m_flMoveSoundMinPitch: usize = 0xA94; // float32
                pub const m_flMoveSoundMaxPitch: usize = 0xA98; // float32
                pub const m_eOrientationType: usize = 0xA9C; // TrainOrientationType_t
                pub const m_eVelocityType: usize = 0xAA0; // TrainVelocityType_t
                pub const m_OnStart: usize = 0xAB0; // CEntityIOOutput
                pub const m_OnNext: usize = 0xAD8; // CEntityIOOutput
                pub const m_OnArrivedAtDestinationNode: usize = 0xB00; // CEntityIOOutput
                pub const m_bManualSpeedChanges: usize = 0xB28; // bool
                pub const m_flDesiredSpeed: usize = 0xB2C; // float32
                pub const m_flSpeedChangeTime: usize = 0xB30; // GameTime_t
                pub const m_flAccelSpeed: usize = 0xB34; // float32
                pub const m_flDecelSpeed: usize = 0xB38; // float32
                pub const m_bAccelToSpeed: usize = 0xB3C; // bool
                pub const m_flTimeScale: usize = 0xB40; // float32
                pub const m_flNextMPSoundTime: usize = 0xB44; // GameTime_t
            }
            // Parent: CServerOnlyModelEntity
            // Fields count: 5
            pub mod CFogVolume {
                pub const m_fogName: usize = 0x9F8; // CUtlSymbolLarge
                pub const m_postProcessName: usize = 0xA00; // CUtlSymbolLarge
                pub const m_colorCorrectionName: usize = 0xA08; // CUtlSymbolLarge
                pub const m_bDisabled: usize = 0xA18; // bool
                pub const m_bInFogVolumesList: usize = 0xA19; // bool
            }
            // Parent: SpawnPoint
            // Fields count: 0
            pub mod CInfoPlayerCounterterrorist {
            }
            // Parent: CBaseModelEntity
            // Fields count: 19
            pub mod CFire {
                pub const m_hEffect: usize = 0x9F8; // CHandle<CBaseFire>
                pub const m_hOwner: usize = 0x9FC; // CHandle<CBaseEntity>
                pub const m_nFireType: usize = 0xA00; // int32
                pub const m_flFuel: usize = 0xA04; // float32
                pub const m_flDamageTime: usize = 0xA08; // GameTime_t
                pub const m_lastDamage: usize = 0xA0C; // GameTime_t
                pub const m_flFireSize: usize = 0xA10; // float32
                pub const m_flLastNavUpdateTime: usize = 0xA14; // GameTime_t
                pub const m_flHeatLevel: usize = 0xA18; // float32
                pub const m_flHeatAbsorb: usize = 0xA1C; // float32
                pub const m_flDamageScale: usize = 0xA20; // float32
                pub const m_flMaxHeat: usize = 0xA24; // float32
                pub const m_flLastHeatLevel: usize = 0xA28; // float32
                pub const m_flAttackTime: usize = 0xA2C; // float32
                pub const m_bEnabled: usize = 0xA30; // bool
                pub const m_bStartDisabled: usize = 0xA31; // bool
                pub const m_bDidActivate: usize = 0xA32; // bool
                pub const m_OnIgnited: usize = 0xA38; // CEntityIOOutput
                pub const m_OnExtinguished: usize = 0xA60; // CEntityIOOutput
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
            pub mod CBaseAnimGraphController {
                pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
                pub const m_bSequenceFinished: usize = 0x220; // bool
                pub const m_flSoundSyncTime: usize = 0x224; // float32
                pub const m_hSequence: usize = 0x228; // HSequence
                pub const m_flSeqStartTime: usize = 0x22C; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x230; // float32
                pub const m_nAnimLoopMode: usize = 0x234; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x238; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x244; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x246; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x247; // bool
                pub const m_bLastUpdateSkipped: usize = 0x248; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x24C; // GameTime_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSObserverPawnAPI {
            }
            // Parent: CBaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            pub mod CEnvDetailController {
                pub const m_flFadeStartDist: usize = 0x7A8; // float32
                pub const m_flFadeEndDist: usize = 0x7AC; // float32
            }
            // Parent: CTriggerOnce
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_bTestOcclusion (bool)
            pub mod CTriggerLook {
                pub const m_hLookTarget: usize = 0xBC8; // CHandle<CBaseEntity>
                pub const m_flFieldOfView: usize = 0xBCC; // float32
                pub const m_flLookTime: usize = 0xBD0; // float32
                pub const m_flLookTimeTotal: usize = 0xBD4; // float32
                pub const m_flLookTimeLast: usize = 0xBD8; // GameTime_t
                pub const m_flTimeoutDuration: usize = 0xBDC; // float32
                pub const m_bTimeoutFired: usize = 0xBE0; // bool
                pub const m_bIsLooking: usize = 0xBE1; // bool
                pub const m_b2DFOV: usize = 0xBE2; // bool
                pub const m_bUseVelocity: usize = 0xBE3; // bool
                pub const m_hActivator: usize = 0xBE4; // CHandle<CBaseEntity>
                pub const m_bTestOcclusion: usize = 0xBE8; // bool
                pub const m_OnTimeout: usize = 0xBF0; // CEntityIOOutput
                pub const m_OnStartLook: usize = 0xC18; // CEntityIOOutput
                pub const m_OnEndLook: usize = 0xC40; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Fields count: 0
            pub mod CInfoTeleportDestination {
            }
            // Parent: CLogicalEntity
            // Fields count: 11
            pub mod CMathRemap {
                pub const m_flInMin: usize = 0x7A8; // float32
                pub const m_flInMax: usize = 0x7AC; // float32
                pub const m_flOut1: usize = 0x7B0; // float32
                pub const m_flOut2: usize = 0x7B4; // float32
                pub const m_flOldInValue: usize = 0x7B8; // float32
                pub const m_bEnabled: usize = 0x7BC; // bool
                pub const m_OutValue: usize = 0x7C0; // CEntityOutputTemplate<float32>
                pub const m_OnRoseAboveMin: usize = 0x7E8; // CEntityIOOutput
                pub const m_OnRoseAboveMax: usize = 0x810; // CEntityIOOutput
                pub const m_OnFellBelowMin: usize = 0x838; // CEntityIOOutput
                pub const m_OnFellBelowMax: usize = 0x860; // CEntityIOOutput
            }
            // Parent: CPointEntity
            // Fields count: 3
            pub mod CInstructorEventEntity {
                pub const m_iszName: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_hTargetPlayer: usize = 0x7B8; // CHandle<CBasePlayerPawn>
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
            pub mod CGradientFog {
                pub const m_hGradientFogTexture: usize = 0x7A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x7B0; // float32
                pub const m_flFogEndDistance: usize = 0x7B4; // float32
                pub const m_bHeightFogEnabled: usize = 0x7B8; // bool
                pub const m_flFogStartHeight: usize = 0x7BC; // float32
                pub const m_flFogEndHeight: usize = 0x7C0; // float32
                pub const m_flFarZ: usize = 0x7C4; // float32
                pub const m_flFogMaxOpacity: usize = 0x7C8; // float32
                pub const m_flFogFalloffExponent: usize = 0x7CC; // float32
                pub const m_flFogVerticalExponent: usize = 0x7D0; // float32
                pub const m_fogColor: usize = 0x7D4; // Color
                pub const m_flFogStrength: usize = 0x7D8; // float32
                pub const m_flFadeTime: usize = 0x7DC; // float32
                pub const m_bStartDisabled: usize = 0x7E0; // bool
                pub const m_bIsEnabled: usize = 0x7E1; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x7E2; // bool
            }
            // Parent: CPointEntity
            // Fields count: 0
            pub mod CPointClientCommand {
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            pub mod CFuncVPhysicsClip {
                pub const m_bDisabled: usize = 0x9F8; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 5
            pub mod CCSPlayer_RadioServices {
                pub const m_flGotHostageTalkTimer: usize = 0x40; // GameTime_t
                pub const m_flDefusingTalkTimer: usize = 0x44; // GameTime_t
                pub const m_flC4PlantTalkTimer: usize = 0x48; // GameTime_t
                pub const m_flRadioTokenSlots: usize = 0x4C; // GameTime_t[3]
                pub const m_bIgnoreRadio: usize = 0x58; // bool
            }
            // Parent: CSceneEntity
            // Fields count: 7
            pub mod CInstancedSceneEntity {
                pub const m_hOwner: usize = 0xD00; // CHandle<CBaseEntity>
                pub const m_bHadOwner: usize = 0xD04; // bool
                pub const m_flPostSpeakDelay: usize = 0xD08; // float32
                pub const m_flPreDelay: usize = 0xD0C; // float32
                pub const m_bIsBackground: usize = 0xD10; // bool
                pub const m_bRemoveOnCompletion: usize = 0xD11; // bool
                pub const m_hTarget: usize = 0xD14; // CHandle<CBaseEntity>
            }
            // Parent: CPointEntity
            // Fields count: 1
            pub mod CEnvHudHint {
                pub const m_iszMessage: usize = 0x7A8; // CUtlSymbolLarge
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
            pub mod CParticleSystem {
                pub const m_szSnapshotFileName: usize = 0x9F8; // char[512]
                pub const m_bActive: usize = 0xBF8; // bool
                pub const m_bFrozen: usize = 0xBF9; // bool
                pub const m_flFreezeTransitionDuration: usize = 0xBFC; // float32
                pub const m_nStopType: usize = 0xC00; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0xC04; // bool
                pub const m_iEffectIndex: usize = 0xC08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0xC10; // GameTime_t
                pub const m_flPreSimTime: usize = 0xC14; // float32
                pub const m_vServerControlPoints: usize = 0xC18; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0xC48; // uint8[4]
                pub const m_hControlPointEnts: usize = 0xC4C; // CHandle<CBaseEntity>[64]
                pub const m_bNoSave: usize = 0xD4C; // bool
                pub const m_bNoFreeze: usize = 0xD4D; // bool
                pub const m_bNoRamp: usize = 0xD4E; // bool
                pub const m_bStartActive: usize = 0xD4F; // bool
                pub const m_iszEffectName: usize = 0xD50; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0xD58; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0xF58; // int32
                pub const m_vecDataCPValue: usize = 0xF5C; // Vector
                pub const m_nTintCP: usize = 0xF68; // int32
                pub const m_clrTint: usize = 0xF6C; // Color
            }
            // Parent: CEntitySubclassVDataBase
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerWeaponVData {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x108; // bool
                pub const m_bAllowFlipping: usize = 0x109; // bool
                pub const m_sMuzzleAttachment: usize = 0x110; // CUtlString
                pub const m_szMuzzleFlashParticle: usize = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_iFlags: usize = 0x1F8; // ItemFlagTypes_t
                pub const m_nPrimaryAmmoType: usize = 0x1F9; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x1FA; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x1FC; // int32
                pub const m_iMaxClip2: usize = 0x200; // int32
                pub const m_iDefaultClip1: usize = 0x204; // int32
                pub const m_iDefaultClip2: usize = 0x208; // int32
                pub const m_iWeight: usize = 0x20C; // int32
                pub const m_bAutoSwitchTo: usize = 0x210; // bool
                pub const m_bAutoSwitchFrom: usize = 0x211; // bool
                pub const m_iRumbleEffect: usize = 0x214; // RumbleEffect_t
                pub const m_bLinkedCooldowns: usize = 0x218; // bool
                pub const m_aShootSounds: usize = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                pub const m_iSlot: usize = 0x240; // int32
                pub const m_iPosition: usize = 0x244; // int32
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
            pub mod CPhysicsProp {
                pub const m_MotionEnabled: usize = 0xD70; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0xD98; // CEntityIOOutput
                pub const m_OnAwake: usize = 0xDC0; // CEntityIOOutput
                pub const m_OnAsleep: usize = 0xDE8; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0xE10; // CEntityIOOutput
                pub const m_OnPlayerPickup: usize = 0xE38; // CEntityIOOutput
                pub const m_OnOutOfWorld: usize = 0xE60; // CEntityIOOutput
                pub const m_massScale: usize = 0xE88; // float32
                pub const m_inertiaScale: usize = 0xE8C; // float32
                pub const m_buoyancyScale: usize = 0xE90; // float32
                pub const m_damageType: usize = 0xE94; // int32
                pub const m_damageToEnableMotion: usize = 0xE98; // int32
                pub const m_flForceToEnableMotion: usize = 0xE9C; // float32
                pub const m_bThrownByPlayer: usize = 0xEA0; // bool
                pub const m_bDroppedByPlayer: usize = 0xEA1; // bool
                pub const m_bTouchedByPlayer: usize = 0xEA2; // bool
                pub const m_bFirstCollisionAfterLaunch: usize = 0xEA3; // bool
                pub const m_iExploitableByPlayer: usize = 0xEA4; // int32
                pub const m_bHasBeenAwakened: usize = 0xEA8; // bool
                pub const m_bIsOverrideProp: usize = 0xEA9; // bool
                pub const m_fNextCheckDisableMotionContactsTime: usize = 0xEAC; // GameTime_t
                pub const m_iInitialGlowState: usize = 0xEB0; // int32
                pub const m_nGlowRange: usize = 0xEB4; // int32
                pub const m_nGlowRangeMin: usize = 0xEB8; // int32
                pub const m_glowColor: usize = 0xEBC; // Color
                pub const m_bForceNavIgnore: usize = 0xEC0; // bool
                pub const m_bNoNavmeshBlocker: usize = 0xEC1; // bool
                pub const m_bForceNpcExclude: usize = 0xEC2; // bool
                pub const m_bShouldAutoConvertBackFromDebris: usize = 0xEC3; // bool
                pub const m_bMuteImpactEffects: usize = 0xEC4; // bool
                pub const m_bAcceptDamageFromHeldObjects: usize = 0xECC; // bool
                pub const m_bEnableUseOutput: usize = 0xECD; // bool
                pub const m_bAwake: usize = 0xECE; // bool
                pub const m_nCollisionGroupOverride: usize = 0xED0; // int32
            }
            // Parent: CFuncWall
            // Fields count: 0
            pub mod CFuncWallToggle {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: CCSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
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
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x64; // int32
                pub const m_iEnemy4Ks: usize = 0x68; // int32
                pub const m_iEnemy3Ks: usize = 0x6C; // int32
                pub const m_iEnemyKnifeKills: usize = 0x70; // int32
                pub const m_iEnemyTaserKills: usize = 0x74; // int32
                pub const m_iEnemy2Ks: usize = 0x78; // int32
                pub const m_iUtility_Count: usize = 0x7C; // int32
                pub const m_iUtility_Successes: usize = 0x80; // int32
                pub const m_iUtility_Enemies: usize = 0x84; // int32
                pub const m_iFlash_Count: usize = 0x88; // int32
                pub const m_iFlash_Successes: usize = 0x8C; // int32
                pub const m_nHealthPointsRemovedTotal: usize = 0x90; // int32
                pub const m_nHealthPointsDealtTotal: usize = 0x94; // int32
                pub const m_nShotsFiredTotal: usize = 0x98; // int32
                pub const m_nShotsOnTargetTotal: usize = 0x9C; // int32
                pub const m_i1v1Count: usize = 0xA0; // int32
                pub const m_i1v1Wins: usize = 0xA4; // int32
                pub const m_i1v2Count: usize = 0xA8; // int32
                pub const m_i1v2Wins: usize = 0xAC; // int32
                pub const m_iEntryCount: usize = 0xB0; // int32
                pub const m_iEntryWins: usize = 0xB4; // int32
            }
            // Parent: CFuncLadder
            // Fields count: 0
            pub mod CFuncLadderAlias_func_useableladder {
            }
            // Parent: CBaseTrigger
            // Fields count: 15
            pub mod CTriggerSndSosOpvar {
                pub const m_hTouchingPlayers: usize = 0xBA0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_flPosition: usize = 0xBB8; // Vector
                pub const m_flCenterSize: usize = 0xBC4; // float32
                pub const m_flMinVal: usize = 0xBC8; // float32
                pub const m_flMaxVal: usize = 0xBCC; // float32
                pub const m_flWait: usize = 0xBD0; // float32
                pub const m_opvarName: usize = 0xBD8; // CUtlSymbolLarge
                pub const m_stackName: usize = 0xBE0; // CUtlSymbolLarge
                pub const m_operatorName: usize = 0xBE8; // CUtlSymbolLarge
                pub const m_bVolIs2D: usize = 0xBF0; // bool
                pub const m_opvarNameChar: usize = 0xBF1; // char[256]
                pub const m_stackNameChar: usize = 0xCF1; // char[256]
                pub const m_operatorNameChar: usize = 0xDF1; // char[256]
                pub const m_VecNormPos: usize = 0xEF4; // Vector
                pub const m_flNormCenterSize: usize = 0xF00; // float32
            }
            // Parent: CDynamicProp
            // Fields count: 0
            pub mod CDynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
                pub const m_Name: usize = 0x30; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CPhysicsProp
            // Fields count: 0
            pub mod CPhysicsPropMultiplayer {
            }
            // Parent: CBaseToggle
            // Fields count: 5
            pub mod CBasePlatTrain {
                pub const m_NoiseMoving: usize = 0xA78; // CUtlSymbolLarge
                pub const m_NoiseArrived: usize = 0xA80; // CUtlSymbolLarge
                pub const m_volume: usize = 0xA90; // float32
                pub const m_flTWidth: usize = 0xA94; // float32
                pub const m_flTLength: usize = 0xA98; // float32
            }
            // Parent: CPlayer_ItemServices
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x40; // bool
                pub const m_bHasHelmet: usize = 0x41; // bool
                pub const m_bHasHeavyArmor: usize = 0x42; // bool
            }
            // Parent: CPointEntity
            // Fields count: 7
            pub mod CKeepUpright {
                pub const m_worldGoalAxis: usize = 0x7B0; // Vector
                pub const m_localTestAxis: usize = 0x7BC; // Vector
                pub const m_nameAttach: usize = 0x7D0; // CUtlSymbolLarge
                pub const m_attachedObject: usize = 0x7D8; // CHandle<CBaseEntity>
                pub const m_angularLimit: usize = 0x7DC; // float32
                pub const m_bActive: usize = 0x7E0; // bool
                pub const m_bDampAllRotation: usize = 0x7E1; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 0
            pub mod CModelPointEntity {
            }
            // Parent: CPointEntity
            // Fields count: 9
            pub mod CEnvInstructorVRHint {
                pub const m_iszName: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_iszHintTargetEntity: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_iTimeout: usize = 0x7B8; // int32
                pub const m_iszCaption: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_iszStartSound: usize = 0x7C8; // CUtlSymbolLarge
                pub const m_iLayoutFileType: usize = 0x7D0; // int32
                pub const m_iszCustomLayoutFile: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_iAttachType: usize = 0x7E0; // int32
                pub const m_flHeightOffset: usize = 0x7E4; // float32
            }
            // Parent: CCSWeaponBase
            // Fields count: 0
            pub mod CWeaponXM1014 {
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            pub mod CPlatTrigger {
                pub const m_pPlatform: usize = 0x9F8; // CHandle<CFuncPlat>
            }
            // Parent: CRulePointEntity
            // Fields count: 4
            pub mod CGameMoney {
                pub const m_OnMoneySpent: usize = 0xA08; // CEntityIOOutput
                pub const m_OnMoneySpentFail: usize = 0xA30; // CEntityIOOutput
                pub const m_nMoney: usize = 0xA58; // int32
                pub const m_strAwardText: usize = 0xA60; // CUtlString
            }
            // Parent: CLogicalEntity
            // Fields count: 5
            pub mod CLogicPlayerProxy {
                pub const m_hPlayer: usize = 0x7A8; // CHandle<CBaseEntity>
                pub const m_PlayerHasAmmo: usize = 0x7B0; // CEntityIOOutput
                pub const m_PlayerHasNoAmmo: usize = 0x7D8; // CEntityIOOutput
                pub const m_PlayerDied: usize = 0x800; // CEntityIOOutput
                pub const m_RequestedPlayerHealth: usize = 0x828; // CEntityOutputTemplate<int32>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<CBaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponZoneRepulsor {
            }
            // Parent: CPointEntity
            // Fields count: 3
            pub mod CPhysImpact {
                pub const m_damage: usize = 0x7A8; // float32
                pub const m_distance: usize = 0x7AC; // float32
                pub const m_directionEntityName: usize = 0x7B0; // CUtlSymbolLarge
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
            pub mod CEnvCombinedLightProbeVolume {
                pub const m_Color: usize = 0x1800; // Color
                pub const m_flBrightness: usize = 0x1804; // float32
                pub const m_hCubemapTexture: usize = 0x1808; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bCustomCubemapTexture: usize = 0x1810; // bool
                pub const m_hLightProbeTexture: usize = 0x1818; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1820; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1828; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1830; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vBoxMins: usize = 0x1838; // Vector
                pub const m_vBoxMaxs: usize = 0x1844; // Vector
                pub const m_bMoveable: usize = 0x1850; // bool
                pub const m_nHandshake: usize = 0x1854; // int32
                pub const m_nEnvCubeMapArrayIndex: usize = 0x1858; // int32
                pub const m_nPriority: usize = 0x185C; // int32
                pub const m_bStartDisabled: usize = 0x1860; // bool
                pub const m_flEdgeFadeDist: usize = 0x1864; // float32
                pub const m_vEdgeFadeDists: usize = 0x1868; // Vector
                pub const m_nLightProbeSizeX: usize = 0x1874; // int32
                pub const m_nLightProbeSizeY: usize = 0x1878; // int32
                pub const m_nLightProbeSizeZ: usize = 0x187C; // int32
                pub const m_nLightProbeAtlasX: usize = 0x1880; // int32
                pub const m_nLightProbeAtlasY: usize = 0x1884; // int32
                pub const m_nLightProbeAtlasZ: usize = 0x1888; // int32
                pub const m_bEnabled: usize = 0x18A1; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: CPointEntity
            // Fields count: 16
            pub mod CPointAngularVelocitySensor {
                pub const m_hTargetEntity: usize = 0x7A8; // CHandle<CBaseEntity>
                pub const m_flThreshold: usize = 0x7AC; // float32
                pub const m_nLastCompareResult: usize = 0x7B0; // int32
                pub const m_nLastFireResult: usize = 0x7B4; // int32
                pub const m_flFireTime: usize = 0x7B8; // GameTime_t
                pub const m_flFireInterval: usize = 0x7BC; // float32
                pub const m_flLastAngVelocity: usize = 0x7C0; // float32
                pub const m_lastOrientation: usize = 0x7C4; // QAngle
                pub const m_vecAxis: usize = 0x7D0; // Vector
                pub const m_bUseHelper: usize = 0x7DC; // bool
                pub const m_AngularVelocity: usize = 0x7E0; // CEntityOutputTemplate<float32>
                pub const m_OnLessThan: usize = 0x808; // CEntityIOOutput
                pub const m_OnLessThanOrEqualTo: usize = 0x830; // CEntityIOOutput
                pub const m_OnGreaterThan: usize = 0x858; // CEntityIOOutput
                pub const m_OnGreaterThanOrEqualTo: usize = 0x880; // CEntityIOOutput
                pub const m_OnEqualTo: usize = 0x8A8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Fields count: 8
            pub mod CPathKeyFrame {
                pub const m_Origin: usize = 0x7A8; // Vector
                pub const m_Angles: usize = 0x7B4; // QAngle
                pub const m_qAngle: usize = 0x7C0; // Quaternion
                pub const m_iNextKey: usize = 0x7D0; // CUtlSymbolLarge
                pub const m_flNextTime: usize = 0x7D8; // float32
                pub const m_pNextKey: usize = 0x7E0; // CPathKeyFrame*
                pub const m_pPrevKey: usize = 0x7E8; // CPathKeyFrame*
                pub const m_flSpeed: usize = 0x7F0; // float32
            }
            // Parent: CBaseModelEntity
            // Fields count: 3
            pub mod CFuncInteractionLayerClip {
                pub const m_bDisabled: usize = 0x9F8; // bool
                pub const m_iszInteractsAs: usize = 0xA00; // CUtlSymbolLarge
                pub const m_iszInteractsWith: usize = 0xA08; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSWeaponBaseAPI {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x58; // CAttributeManager*
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponRevolver {
            }
            // Parent: CDynamicProp
            // Fields count: 1
            pub mod COrnamentProp {
                pub const m_initialOwner: usize = 0xE68; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Fields count: 1
            pub mod CLogicGameEvent {
                pub const m_iszEventName: usize = 0x7A8; // CUtlSymbolLarge
            }
            // Parent: CPointEntity
            // Fields count: 2
            pub mod CEnvMuzzleFlash {
                pub const m_flScale: usize = 0x7A8; // float32
                pub const m_iszParentAttachment: usize = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: CDynamicProp
            // Fields count: 0
            pub mod CCoopBonusCoin {
            }
            // Parent: CSoundEventEntity
            // Fields count: 6
            pub mod CSoundEventPathCornerEntity {
                pub const m_iszPathCorner: usize = 0x850; // CUtlSymbolLarge
                pub const m_iCountMax: usize = 0x858; // int32
                pub const m_flDistanceMax: usize = 0x85C; // float32
                pub const m_flDistMaxSqr: usize = 0x860; // float32
                pub const m_flDotProductMax: usize = 0x864; // float32
                pub const bPlaying: usize = 0x868; // bool
            }
            // Parent: CEnvSoundscape
            // Fields count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x840; // CUtlSymbolLarge
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
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x58; // CNetworkVarChainer
                pub const m_Color: usize = 0x95; // Color
                pub const m_SecondaryColor: usize = 0x99; // Color
                pub const m_flBrightness: usize = 0xA0; // float32
                pub const m_flBrightnessScale: usize = 0xA4; // float32
                pub const m_flBrightnessMult: usize = 0xA8; // float32
                pub const m_flRange: usize = 0xAC; // float32
                pub const m_flFalloff: usize = 0xB0; // float32
                pub const m_flAttenuation0: usize = 0xB4; // float32
                pub const m_flAttenuation1: usize = 0xB8; // float32
                pub const m_flAttenuation2: usize = 0xBC; // float32
                pub const m_flTheta: usize = 0xC0; // float32
                pub const m_flPhi: usize = 0xC4; // float32
                pub const m_hLightCookie: usize = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xD0; // int32
                pub const m_nCastShadows: usize = 0xD4; // int32
                pub const m_nShadowWidth: usize = 0xD8; // int32
                pub const m_nShadowHeight: usize = 0xDC; // int32
                pub const m_bRenderDiffuse: usize = 0xE0; // bool
                pub const m_nRenderSpecular: usize = 0xE4; // int32
                pub const m_bRenderTransmissive: usize = 0xE8; // bool
                pub const m_flOrthoLightWidth: usize = 0xEC; // float32
                pub const m_flOrthoLightHeight: usize = 0xF0; // float32
                pub const m_nStyle: usize = 0xF4; // int32
                pub const m_Pattern: usize = 0xF8; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0x100; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0x104; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0x108; // float32
                pub const m_flShadowCascadeDistance0: usize = 0x10C; // float32
                pub const m_flShadowCascadeDistance1: usize = 0x110; // float32
                pub const m_flShadowCascadeDistance2: usize = 0x114; // float32
                pub const m_flShadowCascadeDistance3: usize = 0x118; // float32
                pub const m_nShadowCascadeResolution0: usize = 0x11C; // int32
                pub const m_nShadowCascadeResolution1: usize = 0x120; // int32
                pub const m_nShadowCascadeResolution2: usize = 0x124; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x128; // int32
                pub const m_bUsesBakedShadowing: usize = 0x12C; // bool
                pub const m_nShadowPriority: usize = 0x130; // int32
                pub const m_nBakedShadowIndex: usize = 0x134; // int32
                pub const m_bRenderToCubemaps: usize = 0x138; // bool
                pub const m_nDirectLight: usize = 0x13C; // int32
                pub const m_nIndirectLight: usize = 0x140; // int32
                pub const m_flFadeMinDist: usize = 0x144; // float32
                pub const m_flFadeMaxDist: usize = 0x148; // float32
                pub const m_flShadowFadeMinDist: usize = 0x14C; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x150; // float32
                pub const m_bEnabled: usize = 0x154; // bool
                pub const m_bFlicker: usize = 0x155; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x156; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x158; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x164; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x170; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x17C; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x188; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x194; // float32
                pub const m_nFogLightingMode: usize = 0x198; // int32
                pub const m_flFogContributionStength: usize = 0x19C; // float32
                pub const m_flNearClipPlane: usize = 0x1A0; // float32
                pub const m_SkyColor: usize = 0x1A4; // Color
                pub const m_flSkyIntensity: usize = 0x1A8; // float32
                pub const m_SkyAmbientBounce: usize = 0x1AC; // Color
                pub const m_bUseSecondaryColor: usize = 0x1B0; // bool
                pub const m_bMixedShadows: usize = 0x1B1; // bool
                pub const m_flLightStyleStartTime: usize = 0x1B4; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x1B8; // float32
                pub const m_flMinRoughness: usize = 0x1BC; // float32
                pub const m_bPvsModifyEntity: usize = 0x1D0; // bool
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
            pub mod CSmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0xDB0; // int32
                pub const m_bDidSmokeEffect: usize = 0xDB4; // bool
                pub const m_nRandomSeed: usize = 0xDB8; // int32
                pub const m_vSmokeColor: usize = 0xDBC; // Vector
                pub const m_vSmokeDetonationPos: usize = 0xDC8; // Vector
                pub const m_VoxelFrameData: usize = 0xDD8; // CUtlVector<uint8>
                pub const m_flLastBounce: usize = 0xDF0; // GameTime_t
                pub const m_fllastSimulationTime: usize = 0xDF4; // GameTime_t
            }
            // Parent: CTriggerMultiple
            // Fields count: 1
            pub mod CScriptTriggerMultiple {
                pub const m_vExtent: usize = 0xBC8; // Vector
            }
            // Parent: CSoundOpvarSetPointEntity
            // Fields count: 4
            pub mod CSoundOpvarSetAutoRoomEntity {
                pub const m_traceResults: usize = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
                pub const m_flSize: usize = 0x980; // float32
                pub const m_flHeightTolerance: usize = 0x984; // float32
                pub const m_flSizeSqr: usize = 0x988; // float32
            }
            // Parent: None
            // Fields count: 0
            pub mod CEntityComponent {
            }
            // Parent: CItem
            // Fields count: 0
            pub mod CItemKevlar {
            }
            // Parent: CBaseTrigger
            // Fields count: 14
            pub mod CTriggerHurt {
                pub const m_flOriginalDamage: usize = 0xB9C; // float32
                pub const m_flDamage: usize = 0xBA0; // float32
                pub const m_flDamageCap: usize = 0xBA4; // float32
                pub const m_flLastDmgTime: usize = 0xBA8; // GameTime_t
                pub const m_flForgivenessDelay: usize = 0xBAC; // float32
                pub const m_bitsDamageInflict: usize = 0xBB0; // int32
                pub const m_damageModel: usize = 0xBB4; // int32
                pub const m_bNoDmgForce: usize = 0xBB8; // bool
                pub const m_vDamageForce: usize = 0xBBC; // Vector
                pub const m_thinkAlways: usize = 0xBC8; // bool
                pub const m_hurtThinkPeriod: usize = 0xBCC; // float32
                pub const m_OnHurt: usize = 0xBD0; // CEntityIOOutput
                pub const m_OnHurtPlayer: usize = 0xBF8; // CEntityIOOutput
                pub const m_hurtEntities: usize = 0xC20; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CLogicalEntity
            // Fields count: 8
            pub mod CPhysConstraint {
                pub const m_nameAttach1: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_nameAttach2: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_breakSound: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_forceLimit: usize = 0x7C8; // float32
                pub const m_torqueLimit: usize = 0x7CC; // float32
                pub const m_teleportTick: usize = 0x7D0; // uint32
                pub const m_minTeleportDistance: usize = 0x7D4; // float32
                pub const m_OnBreak: usize = 0x7D8; // CEntityIOOutput
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
            pub mod CMapVetoPickController {
                pub const m_bPlayedIntroVcd: usize = 0x7A8; // bool
                pub const m_bNeedToPlayFiveSecondsRemaining: usize = 0x7A9; // bool
                pub const m_dblPreMatchDraftSequenceTime: usize = 0x7C8; // float64
                pub const m_bPreMatchDraftStateChanged: usize = 0x7D0; // bool
                pub const m_nDraftType: usize = 0x7D4; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x7D8; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x7DC; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x8DC; // int32[7]
                pub const m_nAccountIDs: usize = 0x8F8; // int32[64]
                pub const m_nMapId0: usize = 0x9F8; // int32[64]
                pub const m_nMapId1: usize = 0xAF8; // int32[64]
                pub const m_nMapId2: usize = 0xBF8; // int32[64]
                pub const m_nMapId3: usize = 0xCF8; // int32[64]
                pub const m_nMapId4: usize = 0xDF8; // int32[64]
                pub const m_nMapId5: usize = 0xEF8; // int32[64]
                pub const m_nStartingSide0: usize = 0xFF8; // int32[64]
                pub const m_nCurrentPhase: usize = 0x10F8; // int32
                pub const m_nPhaseStartTick: usize = 0x10FC; // int32
                pub const m_nPhaseDurationTicks: usize = 0x1100; // int32
                pub const m_OnMapVetoed: usize = 0x1108; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnMapPicked: usize = 0x1130; // CEntityOutputTemplate<CUtlSymbolLarge>
                pub const m_OnSidesPicked: usize = 0x1158; // CEntityOutputTemplate<int32>
                pub const m_OnNewPhaseStarted: usize = 0x1180; // CEntityOutputTemplate<int32>
                pub const m_OnLevelTransition: usize = 0x11A8; // CEntityOutputTemplate<int32>
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CCSMinimapBoundary {
            }
            // Parent: CPointEntity
            // Fields count: 4
            pub mod CSoundEnt {
                pub const m_iFreeSound: usize = 0x7A8; // int32
                pub const m_iActiveSound: usize = 0x7AC; // int32
                pub const m_cLastActiveSounds: usize = 0x7B0; // int32
                pub const m_SoundPool: usize = 0x7B4; // CSound[128]
            }
            // Parent: CPointEntity
            // Fields count: 0
            pub mod CInfoSpawnGroupLandmark {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x40; // int32
                pub const m_nButtons: usize = 0x48; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64
                pub const m_nButtonDoublePressed: usize = 0x78; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x188; // uint64
                pub const m_flMaxspeed: usize = 0x198; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float32[4]
                pub const m_flForwardMove: usize = 0x1AC; // float32
                pub const m_flLeftMove: usize = 0x1B0; // float32
                pub const m_flUpMove: usize = 0x1B4; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
                pub const m_vecOldViewAngles: usize = 0x1C4; // QAngle
            }
            // Parent: CSprite
            // Fields count: 0
            pub mod CSpriteOriented {
            }
            // Parent: CSoundOpvarSetAABBEntity
            // Fields count: 0
            pub mod CSoundOpvarSetOBBEntity {
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponM4A1 {
            }
            // Parent: CBeam
            // Fields count: 5
            pub mod CEnvLaser {
                pub const m_iszLaserTarget: usize = 0xA98; // CUtlSymbolLarge
                pub const m_pSprite: usize = 0xAA0; // CSprite*
                pub const m_iszSpriteName: usize = 0xAA8; // CUtlSymbolLarge
                pub const m_firePosition: usize = 0xAB0; // Vector
                pub const m_flStartFrame: usize = 0xABC; // float32
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
            pub mod CBasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0xF78; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0xF7C; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0xF80; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0xF84; // float32
                pub const m_iClip1: usize = 0xF88; // int32
                pub const m_iClip2: usize = 0xF8C; // int32
                pub const m_pReserveAmmo: usize = 0xF90; // int32[2]
                pub const m_OnPlayerUse: usize = 0xF98; // CEntityIOOutput
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
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0x90; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x148; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x14C; // int32
                pub const m_unTotalRoundDamageDealt: usize = 0x150; // uint32
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            pub mod CHitboxComponent {
                pub const m_bvDisabledHitGroups: usize = 0x24; // uint32[1]
            }
            // Parent: CBaseFlex
            // Fields count: 0
            pub mod CBaseFlexAlias_funCBaseFlex {
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
            pub mod CFish {
                pub const m_pool: usize = 0xBF0; // CHandle<CFishPool>
                pub const m_id: usize = 0xBF4; // uint32
                pub const m_x: usize = 0xBF8; // float32
                pub const m_y: usize = 0xBFC; // float32
                pub const m_z: usize = 0xC00; // float32
                pub const m_angle: usize = 0xC04; // float32
                pub const m_angleChange: usize = 0xC08; // float32
                pub const m_forward: usize = 0xC0C; // Vector
                pub const m_perp: usize = 0xC18; // Vector
                pub const m_poolOrigin: usize = 0xC24; // Vector
                pub const m_waterLevel: usize = 0xC30; // float32
                pub const m_speed: usize = 0xC34; // float32
                pub const m_desiredSpeed: usize = 0xC38; // float32
                pub const m_calmSpeed: usize = 0xC3C; // float32
                pub const m_panicSpeed: usize = 0xC40; // float32
                pub const m_avoidRange: usize = 0xC44; // float32
                pub const m_turnTimer: usize = 0xC48; // CountdownTimer
                pub const m_turnClockwise: usize = 0xC60; // bool
                pub const m_goTimer: usize = 0xC68; // CountdownTimer
                pub const m_moveTimer: usize = 0xC80; // CountdownTimer
                pub const m_panicTimer: usize = 0xC98; // CountdownTimer
                pub const m_disperseTimer: usize = 0xCB0; // CountdownTimer
                pub const m_proximityTimer: usize = 0xCC8; // CountdownTimer
                pub const m_visible: usize = 0xCE0; // CUtlVector<CFish*>
            }
            // Parent: CBaseEntity
            // Fields count: 3
            pub mod CEnvFireSource {
                pub const m_bEnabled: usize = 0x7A8; // bool
                pub const m_radius: usize = 0x7AC; // float32
                pub const m_damage: usize = 0x7B0; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CInfoLadderDismount {
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
            pub mod CBaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0xD24; // Vector
                pub const m_vInitialVelocity: usize = 0xD30; // Vector
                pub const m_nBounces: usize = 0xD3C; // int32
                pub const m_nExplodeEffectIndex: usize = 0xD40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0xD48; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0xD4C; // Vector
                pub const m_flSpawnTime: usize = 0xD58; // GameTime_t
                pub const m_unOGSExtraFlags: usize = 0xD5C; // uint8
                pub const m_bDetonationRecorded: usize = 0xD5D; // bool
                pub const m_flDetonateTime: usize = 0xD60; // GameTime_t
                pub const m_nItemIndex: usize = 0xD64; // uint16
                pub const m_vecOriginalSpawnLocation: usize = 0xD68; // Vector
                pub const m_flLastBounceSoundTime: usize = 0xD74; // GameTime_t
                pub const m_vecGrenadeSpin: usize = 0xD78; // RotationVector
                pub const m_vecLastHitSurfaceNormal: usize = 0xD84; // Vector
                pub const m_nTicksAtZeroVelocity: usize = 0xD90; // int32
                pub const m_bHasEverHitPlayer: usize = 0xD94; // bool
                pub const m_bClearFromPlayers: usize = 0xD95; // bool
            }
            // Parent: CServerOnlyModelEntity
            // Fields count: 1
            pub mod CCSPlace {
                pub const m_name: usize = 0xA00; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Fields count: 0
            pub mod CFuncTrainControls {
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
            pub mod CEntityDissolve {
                pub const m_flFadeInStart: usize = 0x9F8; // float32
                pub const m_flFadeInLength: usize = 0x9FC; // float32
                pub const m_flFadeOutModelStart: usize = 0xA00; // float32
                pub const m_flFadeOutModelLength: usize = 0xA04; // float32
                pub const m_flFadeOutStart: usize = 0xA08; // float32
                pub const m_flFadeOutLength: usize = 0xA0C; // float32
                pub const m_flStartTime: usize = 0xA10; // GameTime_t
                pub const m_nDissolveType: usize = 0xA14; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0xA18; // Vector
                pub const m_nMagnitude: usize = 0xA24; // uint32
            }
            // Parent: CSoundEventEntity
            // Fields count: 2
            pub mod CSoundEventOBBEntity {
                pub const m_vMins: usize = 0x84C; // Vector
                pub const m_vMaxs: usize = 0x858; // Vector
            }
            // Parent: CPointEntity
            // Fields count: 12
            pub mod CPointAngleSensor {
                pub const m_bDisabled: usize = 0x7A8; // bool
                pub const m_nLookAtName: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_hTargetEntity: usize = 0x7B8; // CHandle<CBaseEntity>
                pub const m_hLookAtEntity: usize = 0x7BC; // CHandle<CBaseEntity>
                pub const m_flDuration: usize = 0x7C0; // float32
                pub const m_flDotTolerance: usize = 0x7C4; // float32
                pub const m_flFacingTime: usize = 0x7C8; // GameTime_t
                pub const m_bFired: usize = 0x7CC; // bool
                pub const m_OnFacingLookat: usize = 0x7D0; // CEntityIOOutput
                pub const m_OnNotFacingLookat: usize = 0x7F8; // CEntityIOOutput
                pub const m_TargetDir: usize = 0x820; // CEntityOutputTemplate<Vector>
                pub const m_FacingPercentage: usize = 0x848; // CEntityOutputTemplate<float32>
            }
            // Parent: CBtNodeDecorator
            // Fields count: 1
            pub mod CBtNodeCondition {
                pub const m_bNegated: usize = 0x58; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 12
            pub mod CPhysMagnet {
                pub const m_OnMagnetAttach: usize = 0xBF0; // CEntityIOOutput
                pub const m_OnMagnetDetach: usize = 0xC18; // CEntityIOOutput
                pub const m_massScale: usize = 0xC40; // float32
                pub const m_forceLimit: usize = 0xC44; // float32
                pub const m_torqueLimit: usize = 0xC48; // float32
                pub const m_MagnettedEntities: usize = 0xC50; // CUtlVector<magnetted_objects_t>
                pub const m_bActive: usize = 0xC68; // bool
                pub const m_bHasHitSomething: usize = 0xC69; // bool
                pub const m_flTotalMass: usize = 0xC6C; // float32
                pub const m_flRadius: usize = 0xC70; // float32
                pub const m_flNextSuckTime: usize = 0xC74; // GameTime_t
                pub const m_iMaxObjectsAttached: usize = 0xC78; // int32
            }
            // Parent: CSceneEntity
            // Fields count: 0
            pub mod CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CBaseModelEntity
            // Fields count: 2
            pub mod CFuncNavBlocker {
                pub const m_bDisabled: usize = 0x9F8; // bool
                pub const m_nBlockedTeamNumber: usize = 0x9FC; // int32
            }
            // Parent: CPointEntity
            // Fields count: 4
            pub mod CRagdollMagnet {
                pub const m_bDisabled: usize = 0x7A8; // bool
                pub const m_radius: usize = 0x7AC; // float32
                pub const m_force: usize = 0x7B0; // float32
                pub const m_axis: usize = 0x7B4; // Vector
            }
            // Parent: CBaseModelEntity
            // Fields count: 6
            pub mod CFuncBrush {
                pub const m_iSolidity: usize = 0x9F8; // BrushSolidities_e
                pub const m_iDisabled: usize = 0x9FC; // int32
                pub const m_bSolidBsp: usize = 0xA00; // bool
                pub const m_iszExcludedClass: usize = 0xA08; // CUtlSymbolLarge
                pub const m_bInvertExclusion: usize = 0xA10; // bool
                pub const m_bScriptedMovement: usize = 0xA11; // bool
            }
            // Parent: CPointEntity
            // Fields count: 3
            pub mod CPointProximitySensor {
                pub const m_bDisabled: usize = 0x7A8; // bool
                pub const m_hTargetEntity: usize = 0x7AC; // CHandle<CBaseEntity>
                pub const m_Distance: usize = 0x7B0; // CEntityOutputTemplate<float32>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: CBaseFilter
            // Fields count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x800; // CUtlSymbolLarge
            }
            // Parent: CBaseCSGrenadeProjectile
            // Fields count: 0
            pub mod CHEGrenadeProjectile {
            }
            // Parent: CBaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            pub mod CEnvWind {
                pub const m_EnvWindShared: usize = 0x7A8; // CEnvWindShared
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
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
            pub mod CCSTeam {
                pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x860; // int32
                pub const m_nShorthandedRoundBonusStartRound: usize = 0x864; // int32
                pub const m_bSurrendered: usize = 0x868; // bool
                pub const m_szTeamMatchStat: usize = 0x869; // char[512]
                pub const m_numMapVictories: usize = 0xA6C; // int32
                pub const m_scoreFirstHalf: usize = 0xA70; // int32
                pub const m_scoreSecondHalf: usize = 0xA74; // int32
                pub const m_scoreOvertime: usize = 0xA78; // int32
                pub const m_szClanTeamname: usize = 0xA7C; // char[129]
                pub const m_iClanID: usize = 0xB00; // uint32
                pub const m_szTeamFlagImage: usize = 0xB04; // char[8]
                pub const m_szTeamLogoImage: usize = 0xB0C; // char[8]
                pub const m_flNextResourceTime: usize = 0xB14; // float32
                pub const m_iLastUpdateSentAt: usize = 0xB18; // int32
            }
            // Parent: None
            // Fields count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
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
            pub mod VPhysicsCollisionAttribute_t {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nCollisionGroup: usize = 0x2A; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8
            }
            // Parent: CTriggerMultiple
            // Fields count: 4
            pub mod CTriggerImpact {
                pub const m_flMagnitude: usize = 0xBC8; // float32
                pub const m_flNoise: usize = 0xBCC; // float32
                pub const m_flViewkick: usize = 0xBD0; // float32
                pub const m_pOutputForce: usize = 0xBD8; // CEntityOutputTemplate<Vector>
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
            pub mod CSun {
                pub const m_vDirection: usize = 0x9F8; // Vector
                pub const m_clrOverlay: usize = 0xA04; // Color
                pub const m_iszEffectName: usize = 0xA08; // CUtlSymbolLarge
                pub const m_iszSSEffectName: usize = 0xA10; // CUtlSymbolLarge
                pub const m_bOn: usize = 0xA18; // bool
                pub const m_bmaxColor: usize = 0xA19; // bool
                pub const m_flSize: usize = 0xA1C; // float32
                pub const m_flRotation: usize = 0xA20; // float32
                pub const m_flHazeScale: usize = 0xA24; // float32
                pub const m_flAlphaHaze: usize = 0xA28; // float32
                pub const m_flAlphaHdr: usize = 0xA2C; // float32
                pub const m_flAlphaScale: usize = 0xA30; // float32
                pub const m_flHDRColorScale: usize = 0xA34; // float32
                pub const m_flFarZScale: usize = 0xA38; // float32
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
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // Parent: CBaseCSGrenade
            // Fields count: 0
            pub mod CHEGrenade {
            }
            // Parent: CRulePointEntity
            // Fields count: 0
            pub mod CGameEnd {
            }
            // Parent: CBaseTrigger
            // Fields count: 0
            pub mod CTriggerCallback {
            }
            // Parent: CBaseModelEntity
            // Fields count: 3
            pub mod CBubbling {
                pub const m_density: usize = 0x9F8; // int32
                pub const m_frequency: usize = 0x9FC; // int32
                pub const m_state: usize = 0xA00; // int32
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
            pub mod CCSGameRules {
                pub const __m_pChainEntity: usize = 0x98; // CNetworkVarChainer
                pub const m_coopMissionManager: usize = 0xC0; // CHandle<CBaseEntity>
                pub const m_bFreezePeriod: usize = 0xC4; // bool
                pub const m_bWarmupPeriod: usize = 0xC5; // bool
                pub const m_fWarmupPeriodEnd: usize = 0xC8; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0xCC; // GameTime_t
                pub const m_nTotalPausedTicks: usize = 0xD0; // int32
                pub const m_nPauseStartTick: usize = 0xD4; // int32
                pub const m_bServerPaused: usize = 0xD8; // bool
                pub const m_bGamePaused: usize = 0xD9; // bool
                pub const m_bTerroristTimeOutActive: usize = 0xDA; // bool
                pub const m_bCTTimeOutActive: usize = 0xDB; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0xDC; // float32
                pub const m_flCTTimeOutRemaining: usize = 0xE0; // float32
                pub const m_nTerroristTimeOuts: usize = 0xE4; // int32
                pub const m_nCTTimeOuts: usize = 0xE8; // int32
                pub const m_bTechnicalTimeOut: usize = 0xEC; // bool
                pub const m_bMatchWaitingForResume: usize = 0xED; // bool
                pub const m_iRoundTime: usize = 0xF0; // int32
                pub const m_fMatchStartTime: usize = 0xF4; // float32
                pub const m_fRoundStartTime: usize = 0xF8; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0xFC; // GameTime_t
                pub const m_bGameRestart: usize = 0x100; // bool
                pub const m_flGameStartTime: usize = 0x104; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x108; // float32
                pub const m_gamePhase: usize = 0x10C; // int32
                pub const m_totalRoundsPlayed: usize = 0x110; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x114; // int32
                pub const m_nOvertimePlaying: usize = 0x118; // int32
                pub const m_iHostagesRemaining: usize = 0x11C; // int32
                pub const m_bAnyHostageReached: usize = 0x120; // bool
                pub const m_bMapHasBombTarget: usize = 0x121; // bool
                pub const m_bMapHasRescueZone: usize = 0x122; // bool
                pub const m_bMapHasBuyZone: usize = 0x123; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x124; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x128; // int32
                pub const m_bIsValveDS: usize = 0x12C; // bool
                pub const m_bLogoMap: usize = 0x12D; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x12E; // bool
                pub const m_iSpectatorSlotCount: usize = 0x130; // int32
                pub const m_MatchDevice: usize = 0x134; // int32
                pub const m_bHasMatchStarted: usize = 0x138; // bool
                pub const m_nNextMapInMapgroup: usize = 0x13C; // int32
                pub const m_szTournamentEventName: usize = 0x140; // char[512]
                pub const m_szTournamentEventStage: usize = 0x340; // char[512]
                pub const m_szMatchStatTxt: usize = 0x540; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x740; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x940; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x944; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x948; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x94C; // bool
                pub const m_bIsQuestEligible: usize = 0x94D; // bool
                pub const m_bIsHltvActive: usize = 0x94E; // bool
                pub const m_nGuardianModeWaveNumber: usize = 0x950; // int32
                pub const m_nGuardianModeSpecialKillsRemaining: usize = 0x954; // int32
                pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0x958; // int32
                pub const m_nGuardianGrenadesToGiveBots: usize = 0x95C; // int32
                pub const m_nNumHeaviesToSpawn: usize = 0x960; // int32
                pub const m_numGlobalGiftsGiven: usize = 0x964; // uint32
                pub const m_numGlobalGifters: usize = 0x968; // uint32
                pub const m_numGlobalGiftsPeriodSeconds: usize = 0x96C; // uint32
                pub const m_arrFeaturedGiftersAccounts: usize = 0x970; // uint32[4]
                pub const m_arrFeaturedGiftersGifts: usize = 0x980; // uint32[4]
                pub const m_arrProhibitedItemIndices: usize = 0x990; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0xA58; // uint32[4]
                pub const m_numBestOfMaps: usize = 0xA68; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0xA6C; // int32
                pub const m_bBombDropped: usize = 0xA70; // bool
                pub const m_bBombPlanted: usize = 0xA71; // bool
                pub const m_iRoundWinStatus: usize = 0xA74; // int32
                pub const m_eRoundWinReason: usize = 0xA78; // int32
                pub const m_bTCantBuy: usize = 0xA7C; // bool
                pub const m_bCTCantBuy: usize = 0xA7D; // bool
                pub const m_flGuardianBuyUntilTime: usize = 0xA80; // GameTime_t
                pub const m_iMatchStats_RoundResults: usize = 0xA84; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xAFC; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xB74; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xBEC; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xC6C; // GameTime_t[32]
                pub const m_nServerQuestID: usize = 0xCEC; // int32
                pub const m_vMinimapMins: usize = 0xCF0; // Vector
                pub const m_vMinimapMaxs: usize = 0xCFC; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xD08; // float32[8]
                pub const m_bDontIncrementCoopWave: usize = 0xD28; // bool
                pub const m_bSpawnedTerrorHuntHeavy: usize = 0xD29; // bool
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xD2C; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xD54; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xD7C; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xD80; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xD84; // int32
                pub const m_bHasHostageBeenTouched: usize = 0xDA0; // bool
                pub const m_flIntermissionStartTime: usize = 0xDA4; // GameTime_t
                pub const m_flIntermissionEndTime: usize = 0xDA8; // GameTime_t
                pub const m_bLevelInitialized: usize = 0xDAC; // bool
                pub const m_iTotalRoundsPlayed: usize = 0xDB0; // int32
                pub const m_iUnBalancedRounds: usize = 0xDB4; // int32
                pub const m_endMatchOnRoundReset: usize = 0xDB8; // bool
                pub const m_endMatchOnThink: usize = 0xDB9; // bool
                pub const m_iFreezeTime: usize = 0xDBC; // int32
                pub const m_iNumTerrorist: usize = 0xDC0; // int32
                pub const m_iNumCT: usize = 0xDC4; // int32
                pub const m_iNumSpawnableTerrorist: usize = 0xDC8; // int32
                pub const m_iNumSpawnableCT: usize = 0xDCC; // int32
                pub const m_arrSelectedHostageSpawnIndices: usize = 0xDD0; // CUtlVector<int32>
                pub const m_nSpawnPointsRandomSeed: usize = 0xDE8; // int32
                pub const m_bFirstConnected: usize = 0xDEC; // bool
                pub const m_bCompleteReset: usize = 0xDED; // bool
                pub const m_bPickNewTeamsOnReset: usize = 0xDEE; // bool
                pub const m_bScrambleTeamsOnRestart: usize = 0xDEF; // bool
                pub const m_bSwapTeamsOnRestart: usize = 0xDF0; // bool
                pub const m_nEndMatchTiedVotes: usize = 0xDF8; // CUtlVector<int32>
                pub const m_bNeedToAskPlayersForContinueVote: usize = 0xE14; // bool
                pub const m_numQueuedMatchmakingAccounts: usize = 0xE18; // uint32
                pub const m_fAvgPlayerRank: usize = 0xE1C; // float32
                pub const m_pQueuedMatchmakingReservationString: usize = 0xE20; // char*
                pub const m_numTotalTournamentDrops: usize = 0xE28; // uint32
                pub const m_numSpectatorsCountMax: usize = 0xE2C; // uint32
                pub const m_numSpectatorsCountMaxTV: usize = 0xE30; // uint32
                pub const m_numSpectatorsCountMaxLnk: usize = 0xE34; // uint32
                pub const m_bForceTeamChangeSilent: usize = 0xE40; // bool
                pub const m_bLoadingRoundBackupData: usize = 0xE41; // bool
                pub const m_nMatchInfoShowType: usize = 0xE78; // int32
                pub const m_flMatchInfoDecidedTime: usize = 0xE7C; // float32
                pub const m_flCoopRespawnAndHealTime: usize = 0xE98; // float32
                pub const m_coopBonusCoinsFound: usize = 0xE9C; // int32
                pub const m_coopBonusPistolsOnly: usize = 0xEA0; // bool
                pub const m_coopPlayersInDeploymentZone: usize = 0xEA1; // bool
                pub const m_coopMissionDeadPlayerRespawnEnabled: usize = 0xEA2; // bool
                pub const mTeamDMLastWinningTeamNumber: usize = 0xEA4; // int32
                pub const mTeamDMLastThinkTime: usize = 0xEA8; // float32
                pub const m_flTeamDMLastAnnouncementTime: usize = 0xEAC; // float32
                pub const m_iAccountTerrorist: usize = 0xEB0; // int32
                pub const m_iAccountCT: usize = 0xEB4; // int32
                pub const m_iSpawnPointCount_Terrorist: usize = 0xEB8; // int32
                pub const m_iSpawnPointCount_CT: usize = 0xEBC; // int32
                pub const m_iMaxNumTerrorists: usize = 0xEC0; // int32
                pub const m_iMaxNumCTs: usize = 0xEC4; // int32
                pub const m_iLoserBonus: usize = 0xEC8; // int32
                pub const m_iLoserBonusMostRecentTeam: usize = 0xECC; // int32
                pub const m_tmNextPeriodicThink: usize = 0xED0; // float32
                pub const m_bVoiceWonMatchBragFired: usize = 0xED4; // bool
                pub const m_fWarmupNextChatNoticeTime: usize = 0xED8; // float32
                pub const m_iHostagesRescued: usize = 0xEE0; // int32
                pub const m_iHostagesTouched: usize = 0xEE4; // int32
                pub const m_flNextHostageAnnouncement: usize = 0xEE8; // float32
                pub const m_bNoTerroristsKilled: usize = 0xEEC; // bool
                pub const m_bNoCTsKilled: usize = 0xEED; // bool
                pub const m_bNoEnemiesKilled: usize = 0xEEE; // bool
                pub const m_bCanDonateWeapons: usize = 0xEEF; // bool
                pub const m_firstKillTime: usize = 0xEF4; // float32
                pub const m_firstBloodTime: usize = 0xEFC; // float32
                pub const m_hostageWasInjured: usize = 0xF18; // bool
                pub const m_hostageWasKilled: usize = 0xF19; // bool
                pub const m_bVoteCalled: usize = 0xF28; // bool
                pub const m_bServerVoteOnReset: usize = 0xF29; // bool
                pub const m_flVoteCheckThrottle: usize = 0xF2C; // float32
                pub const m_bBuyTimeEnded: usize = 0xF30; // bool
                pub const m_nLastFreezeEndBeep: usize = 0xF34; // int32
                pub const m_bTargetBombed: usize = 0xF38; // bool
                pub const m_bBombDefused: usize = 0xF39; // bool
                pub const m_bMapHasBombZone: usize = 0xF3A; // bool
                pub const m_vecMainCTSpawnPos: usize = 0xF58; // Vector
                pub const m_CTSpawnPointsMasterList: usize = 0xF68; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPointsMasterList: usize = 0xF80; // CUtlVector<SpawnPoint*>
                pub const m_bRespawningAllRespawnablePlayers: usize = 0xF98; // bool
                pub const m_iNextCTSpawnPoint: usize = 0xF9C; // int32
                pub const m_flCTSpawnPointUsedTime: usize = 0xFA0; // float32
                pub const m_iNextTerroristSpawnPoint: usize = 0xFA4; // int32
                pub const m_flTerroristSpawnPointUsedTime: usize = 0xFA8; // float32
                pub const m_CTSpawnPoints: usize = 0xFB0; // CUtlVector<SpawnPoint*>
                pub const m_TerroristSpawnPoints: usize = 0xFC8; // CUtlVector<SpawnPoint*>
                pub const m_bIsUnreservedGameServer: usize = 0xFE0; // bool
                pub const m_fAutobalanceDisplayTime: usize = 0xFE4; // float32
                pub const m_bAllowWeaponSwitch: usize = 0x1250; // bool
                pub const m_bRoundTimeWarningTriggered: usize = 0x1251; // bool
                pub const m_phaseChangeAnnouncementTime: usize = 0x1254; // GameTime_t
                pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1258; // float32
                pub const m_flLastThinkTime: usize = 0x125C; // GameTime_t
                pub const m_fAccumulatedRoundOffDamage: usize = 0x1260; // float32
                pub const m_nShorthandedBonusLastEvalRound: usize = 0x1264; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0x14E0; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0x14E4; // bool
                pub const m_bHasTriggeredCoopSpawnReset: usize = 0x14E5; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0x14E6; // bool
                pub const m_pGameModeRules: usize = 0x1500; // CCSGameModeRules*
                pub const m_BtGlobalBlackboard: usize = 0x1508; // KeyValues3
                pub const m_hPlayerResource: usize = 0x1568; // CHandle<CBaseEntity>
                pub const m_RetakeRules: usize = 0x1570; // CRetakeGameRules
                pub const m_GuardianBotSkillLevelMax: usize = 0x1754; // int32
                pub const m_GuardianBotSkillLevelMin: usize = 0x1758; // int32
                pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x1760; // CUtlVector<int32>[4]
                pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x17C0; // bool[4]
                pub const m_nMatchEndCount: usize = 0x17E8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0x17EC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0x17F0; // int32
                pub const m_bTeamIntroPeriod: usize = 0x17F4; // bool
                pub const m_fTeamIntroPeriodEnd: usize = 0x17F8; // GameTime_t
                pub const m_bPlayedTeamIntroVO: usize = 0x17FC; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0x1800; // int32
                pub const m_eRoundEndReason: usize = 0x1804; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0x1808; // bool
                pub const m_iRoundEndTimerTime: usize = 0x180C; // int32
                pub const m_sRoundEndFunFactToken: usize = 0x1810; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0x1818; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0x181C; // int32
                pub const m_iRoundEndFunFactData2: usize = 0x1820; // int32
                pub const m_iRoundEndFunFactData3: usize = 0x1824; // int32
                pub const m_sRoundEndMessage: usize = 0x1828; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0x1830; // int32
                pub const m_bRoundEndNoMusic: usize = 0x1834; // bool
                pub const m_iRoundEndLegacy: usize = 0x1838; // int32
                pub const m_nRoundEndCount: usize = 0x183C; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0x1840; // int32
                pub const m_nRoundStartCount: usize = 0x1844; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x5850; // float64
                pub const m_bSkipNextServerPerfSample: usize = 0x5858; // bool
            }
            // Parent: CModelPointEntity
            // Fields count: 0
            pub mod CShower {
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
            pub mod CEnvCubemapFog {
                pub const m_flEndDistance: usize = 0x7A8; // float32
                pub const m_flStartDistance: usize = 0x7AC; // float32
                pub const m_flFogFalloffExponent: usize = 0x7B0; // float32
                pub const m_bHeightFogEnabled: usize = 0x7B4; // bool
                pub const m_flFogHeightWidth: usize = 0x7B8; // float32
                pub const m_flFogHeightEnd: usize = 0x7BC; // float32
                pub const m_flFogHeightStart: usize = 0x7C0; // float32
                pub const m_flFogHeightExponent: usize = 0x7C4; // float32
                pub const m_flLODBias: usize = 0x7C8; // float32
                pub const m_bActive: usize = 0x7CC; // bool
                pub const m_bStartDisabled: usize = 0x7CD; // bool
                pub const m_flFogMaxOpacity: usize = 0x7D0; // float32
                pub const m_nCubemapSourceType: usize = 0x7D4; // int32
                pub const m_hSkyMaterial: usize = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x7F0; // bool
                pub const m_bFirstTime: usize = 0x7F1; // bool
            }
            // Parent: CBaseButton
            // Fields count: 0
            pub mod CPhysicalButton {
            }
            // Parent: CSoundEventEntity
            // Fields count: 2
            pub mod CSoundEventAABBEntity {
                pub const m_vMins: usize = 0x84C; // Vector
                pub const m_vMaxs: usize = 0x858; // Vector
            }
            // Parent: CModelPointEntity
            // Fields count: 15
            pub mod CEnvExplosion {
                pub const m_iMagnitude: usize = 0x9F8; // int32
                pub const m_flPlayerDamage: usize = 0x9FC; // float32
                pub const m_iRadiusOverride: usize = 0xA00; // int32
                pub const m_flInnerRadius: usize = 0xA04; // float32
                pub const m_spriteScale: usize = 0xA08; // int32
                pub const m_flDamageForce: usize = 0xA0C; // float32
                pub const m_hInflictor: usize = 0xA10; // CHandle<CBaseEntity>
                pub const m_iCustomDamageType: usize = 0xA14; // int32
                pub const m_iszExplosionType: usize = 0xA20; // CUtlSymbolLarge
                pub const m_iszCustomEffectName: usize = 0xA28; // CUtlSymbolLarge
                pub const m_iszCustomSoundName: usize = 0xA30; // CUtlSymbolLarge
                pub const m_iClassIgnore: usize = 0xA38; // Class_T
                pub const m_iClassIgnore2: usize = 0xA3C; // Class_T
                pub const m_iszEntityIgnoreName: usize = 0xA40; // CUtlSymbolLarge
                pub const m_hEntityIgnore: usize = 0xA48; // CHandle<CBaseEntity>
            }
            // Parent: CBaseFilter
            // Fields count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x800; // CUtlStringToken
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x208; // CHandle<CBasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x23C; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x240; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0x298; // WeaponPurchaseTracker_t
            }
            // Parent: CPointEntity
            // Fields count: 6
            pub mod CAISound {
                pub const m_iSoundType: usize = 0x7A8; // int32
                pub const m_iSoundContext: usize = 0x7AC; // int32
                pub const m_iVolume: usize = 0x7B0; // int32
                pub const m_iSoundIndex: usize = 0x7B4; // int32
                pub const m_flDuration: usize = 0x7B8; // float32
                pub const m_iszProxyEntityName: usize = 0x7C0; // CUtlSymbolLarge
            }
            // Parent: CBaseEntity
            // Fields count: 7
            pub mod CPointEntityFinder {
                pub const m_hEntity: usize = 0x7A8; // CHandle<CBaseEntity>
                pub const m_iFilterName: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x7B8; // CHandle<CBaseFilter>
                pub const m_iRefName: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_hReference: usize = 0x7C8; // CHandle<CBaseEntity>
                pub const m_FindMethod: usize = 0x7CC; // EntFinderMethod_t
                pub const m_OnFoundEntity: usize = 0x7D0; // CEntityIOOutput
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
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x18; // ShardSolid_t
                pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
                pub const m_vecPanelSize: usize = 0x1C; // Vector2D
                pub const m_vecStressPositionA: usize = 0x24; // Vector2D
                pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
                pub const m_vecPanelVertices: usize = 0x38; // CNetworkUtlVectorBase<Vector2D>
                pub const m_flGlassHalfThickness: usize = 0x50; // float32
                pub const m_bHasParent: usize = 0x54; // bool
                pub const m_bParentFrozen: usize = 0x55; // bool
                pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
            }
            // Parent: CMarkupVolumeWithRef
            // Fields count: 1
            pub mod CMarkupVolumeTagged_NavGame {
                pub const m_bFloodFillAttribute: usize = 0xA48; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 1
            pub mod CBuyZone {
                pub const m_LegacyTeamNum: usize = 0xB9C; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x7C0; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x7C4; // bool
                pub const m_pOutputOnSpawned: usize = 0x7C8; // CEntityIOOutput
                pub const m_clientOnlyEntityBehavior: usize = 0x7F0; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x7F4; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x7F8; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x810; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x828; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x830; // HSCRIPT
            }
            // Parent: CBaseCSGrenade
            // Fields count: 0
            pub mod CTripWireFire {
            }
            // Parent: CPointEntity
            // Fields count: 6
            pub mod CPhysForce {
                pub const m_nameAttach: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_force: usize = 0x7B8; // float32
                pub const m_forceTime: usize = 0x7BC; // float32
                pub const m_attachedObject: usize = 0x7C0; // CHandle<CBaseEntity>
                pub const m_wasRestored: usize = 0x7C4; // bool
                pub const m_integrator: usize = 0x7C8; // CConstantForceController
            }
            // Parent: CLogicalEntity
            // Fields count: 6
            pub mod CLogicDistanceAutosave {
                pub const m_iszTargetEntity: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_flDistanceToPlayer: usize = 0x7B0; // float32
                pub const m_bForceNewLevelUnit: usize = 0x7B4; // bool
                pub const m_bCheckCough: usize = 0x7B5; // bool
                pub const m_bThinkDangerous: usize = 0x7B6; // bool
                pub const m_flDangerousTime: usize = 0x7B8; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponSSG08 {
            }
            // Parent: CCSWeaponBase
            // Fields count: 0
            pub mod CBreachCharge {
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            pub mod CLogicBranch {
                pub const m_bInValue: usize = 0x7A8; // bool
                pub const m_Listeners: usize = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_OnTrue: usize = 0x7C8; // CEntityIOOutput
                pub const m_OnFalse: usize = 0x7F0; // CEntityIOOutput
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponUMP45 {
            }
            // Parent: CSprite
            // Fields count: 0
            pub mod CSpriteAlias_env_glow {
            }
            // Parent: CBaseToggle
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            pub mod CBaseButton {
                pub const m_angMoveEntitySpace: usize = 0xA78; // QAngle
                pub const m_fStayPushed: usize = 0xA84; // bool
                pub const m_fRotating: usize = 0xA85; // bool
                pub const m_ls: usize = 0xA88; // locksound_t
                pub const m_sUseSound: usize = 0xAA8; // CUtlSymbolLarge
                pub const m_sLockedSound: usize = 0xAB0; // CUtlSymbolLarge
                pub const m_sUnlockedSound: usize = 0xAB8; // CUtlSymbolLarge
                pub const m_bLocked: usize = 0xAC0; // bool
                pub const m_bDisabled: usize = 0xAC1; // bool
                pub const m_flUseLockedTime: usize = 0xAC4; // GameTime_t
                pub const m_bSolidBsp: usize = 0xAC8; // bool
                pub const m_OnDamaged: usize = 0xAD0; // CEntityIOOutput
                pub const m_OnPressed: usize = 0xAF8; // CEntityIOOutput
                pub const m_OnUseLocked: usize = 0xB20; // CEntityIOOutput
                pub const m_OnIn: usize = 0xB48; // CEntityIOOutput
                pub const m_OnOut: usize = 0xB70; // CEntityIOOutput
                pub const m_nState: usize = 0xB98; // int32
                pub const m_hConstraint: usize = 0xB9C; // CEntityHandle
                pub const m_hConstraintParent: usize = 0xBA0; // CEntityHandle
                pub const m_bForceNpcExclude: usize = 0xBA4; // bool
                pub const m_sGlowEntity: usize = 0xBA8; // CUtlSymbolLarge
                pub const m_glowEntity: usize = 0xBB0; // CHandle<CBaseModelEntity>
                pub const m_usable: usize = 0xBB4; // bool
                pub const m_szDisplayText: usize = 0xBB8; // CUtlSymbolLarge
            }
            // Parent: CPhysConstraint
            // Fields count: 6
            pub mod CPhysLength {
                pub const m_offset: usize = 0x800; // Vector[2]
                pub const m_vecAttach: usize = 0x818; // Vector
                pub const m_addLength: usize = 0x824; // float32
                pub const m_minLength: usize = 0x828; // float32
                pub const m_totalLength: usize = 0x82C; // float32
                pub const m_bEnableCollision: usize = 0x830; // bool
            }
            // Parent: CPointEntity
            // Fields count: 4
            pub mod CBlood {
                pub const m_vecSprayAngles: usize = 0x7A8; // QAngle
                pub const m_vecSprayDir: usize = 0x7B4; // Vector
                pub const m_flAmount: usize = 0x7C0; // float32
                pub const m_Color: usize = 0x7C4; // int32
            }
            // Parent: CLogicalEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fadeColor (Color)
            pub mod CEnvFade {
                pub const m_fadeColor: usize = 0x7A8; // Color
                pub const m_Duration: usize = 0x7AC; // float32
                pub const m_HoldDuration: usize = 0x7B0; // float32
                pub const m_OnBeginFade: usize = 0x7B8; // CEntityIOOutput
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponUSPSilencer {
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
            pub mod CSprite {
                pub const m_hSpriteMaterial: usize = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0xA00; // CHandle<CBaseEntity>
                pub const m_nAttachment: usize = 0xA04; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0xA08; // float32
                pub const m_flFrame: usize = 0xA0C; // float32
                pub const m_flDieTime: usize = 0xA10; // GameTime_t
                pub const m_nBrightness: usize = 0xA20; // uint32
                pub const m_flBrightnessDuration: usize = 0xA24; // float32
                pub const m_flSpriteScale: usize = 0xA28; // float32
                pub const m_flScaleDuration: usize = 0xA2C; // float32
                pub const m_bWorldSpaceScale: usize = 0xA30; // bool
                pub const m_flGlowProxySize: usize = 0xA34; // float32
                pub const m_flHDRColorScale: usize = 0xA38; // float32
                pub const m_flLastTime: usize = 0xA3C; // GameTime_t
                pub const m_flMaxFrame: usize = 0xA40; // float32
                pub const m_flStartScale: usize = 0xA44; // float32
                pub const m_flDestScale: usize = 0xA48; // float32
                pub const m_flScaleTimeStart: usize = 0xA4C; // GameTime_t
                pub const m_nStartBrightness: usize = 0xA50; // int32
                pub const m_nDestBrightness: usize = 0xA54; // int32
                pub const m_flBrightnessTimeStart: usize = 0xA58; // GameTime_t
                pub const m_nSpriteWidth: usize = 0xA5C; // int32
                pub const m_nSpriteHeight: usize = 0xA60; // int32
            }
            // Parent: CBaseTrigger
            // Fields count: 0
            pub mod CTriggerGravity {
            }
            // Parent: CBaseTrigger
            // Fields count: 7
            pub mod CChangeLevel {
                pub const m_sMapName: usize = 0xBA0; // CUtlString
                pub const m_sLandmarkName: usize = 0xBA8; // CUtlString
                pub const m_OnChangeLevel: usize = 0xBB0; // CEntityIOOutput
                pub const m_bTouched: usize = 0xBD8; // bool
                pub const m_bNoTouch: usize = 0xBD9; // bool
                pub const m_bNewChapter: usize = 0xBDA; // bool
                pub const m_bOnChangeLevelFired: usize = 0xBDB; // bool
            }
            // Parent: CBaseTrigger
            // Fields count: 14
            pub mod CTriggerLerpObject {
                pub const m_iszLerpTarget: usize = 0xBA0; // CUtlSymbolLarge
                pub const m_hLerpTarget: usize = 0xBA8; // CHandle<CBaseEntity>
                pub const m_iszLerpTargetAttachment: usize = 0xBB0; // CUtlSymbolLarge
                pub const m_hLerpTargetAttachment: usize = 0xBB8; // AttachmentHandle_t
                pub const m_flLerpDuration: usize = 0xBBC; // float32
                pub const m_bLerpRestoreMoveType: usize = 0xBC0; // bool
                pub const m_bSingleLerpObject: usize = 0xBC1; // bool
                pub const m_vecLerpingObjects: usize = 0xBC8; // CUtlVector<lerpdata_t>
                pub const m_iszLerpEffect: usize = 0xBE0; // CUtlSymbolLarge
                pub const m_iszLerpSound: usize = 0xBE8; // CUtlSymbolLarge
                pub const m_bAttachTouchingObject: usize = 0xBF0; // bool
                pub const m_hEntityToWaitForDisconnect: usize = 0xBF4; // CHandle<CBaseEntity>
                pub const m_OnLerpStarted: usize = 0xBF8; // CEntityIOOutput
                pub const m_OnLerpFinished: usize = 0xC20; // CEntityIOOutput
            }
            // Parent: CBaseToggle
            // Fields count: 11
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            pub mod CBaseTrigger {
                pub const m_bDisabled: usize = 0xA78; // bool
                pub const m_iFilterName: usize = 0xA80; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0xA88; // CHandle<CBaseFilter>
                pub const m_OnStartTouch: usize = 0xA90; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0xAB8; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0xAE0; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0xB08; // CEntityIOOutput
                pub const m_OnTouching: usize = 0xB30; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0xB58; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0xB80; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_bClientSidePredicted: usize = 0xB98; // bool
            }
            // Parent: CPointEntity
            // Fields count: 0
            pub mod CLogicScript {
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
            pub mod CEconEntity {
                pub const m_AttributeManager: usize = 0xC90; // CAttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0xF58; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0xF5C; // uint32
                pub const m_nFallbackPaintKit: usize = 0xF60; // int32
                pub const m_nFallbackSeed: usize = 0xF64; // int32
                pub const m_flFallbackWear: usize = 0xF68; // float32
                pub const m_nFallbackStatTrak: usize = 0xF6C; // int32
                pub const m_hOldProvidee: usize = 0xF70; // CHandle<CBaseEntity>
                pub const m_iOldOwnerClass: usize = 0xF74; // int32
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
            pub mod CCollisionProperty {
                pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
                pub const m_vecMins: usize = 0x40; // Vector
                pub const m_vecMaxs: usize = 0x4C; // Vector
                pub const m_usSolidFlags: usize = 0x5A; // uint8
                pub const m_nSolidType: usize = 0x5B; // SolidType_t
                pub const m_triggerBloat: usize = 0x5C; // uint8
                pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
                pub const m_CollisionGroup: usize = 0x5E; // uint8
                pub const m_nEnablePhysics: usize = 0x5F; // uint8
                pub const m_flBoundingRadius: usize = 0x60; // float32
                pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
                pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
                pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
                pub const m_vecSurroundingMins: usize = 0x88; // Vector
                pub const m_vCapsuleCenter1: usize = 0x94; // Vector
                pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
                pub const m_flCapsuleRadius: usize = 0xAC; // float32
            }
            // Parent: CBaseEntity
            // Fields count: 0
            pub mod CServerOnlyEntity {
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            pub mod CNetworkedSequenceOperation {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            }
            // Parent: CPointEntity
            // Fields count: 0
            pub mod CPointBroadcastClientCommand {
            }
            // Parent: CBaseModelEntity
            // Fields count: 32
            pub mod CFuncShatterglass {
                pub const m_hGlassMaterialDamaged: usize = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hGlassMaterialUndamaged: usize = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hConcreteMaterialEdgeFace: usize = 0xA08; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hConcreteMaterialEdgeCaps: usize = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hConcreteMaterialEdgeFins: usize = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_matPanelTransform: usize = 0xA20; // matrix3x4_t
                pub const m_matPanelTransformWsTemp: usize = 0xA50; // matrix3x4_t
                pub const m_vecShatterGlassShards: usize = 0xA80; // CUtlVector<uint32>
                pub const m_PanelSize: usize = 0xA98; // Vector2D
                pub const m_vecPanelNormalWs: usize = 0xAA0; // Vector
                pub const m_nNumShardsEverCreated: usize = 0xAAC; // int32
                pub const m_flLastShatterSoundEmitTime: usize = 0xAB0; // GameTime_t
                pub const m_flLastCleanupTime: usize = 0xAB4; // GameTime_t
                pub const m_flInitAtTime: usize = 0xAB8; // GameTime_t
                pub const m_flGlassThickness: usize = 0xABC; // float32
                pub const m_flSpawnInvulnerability: usize = 0xAC0; // float32
                pub const m_bBreakSilent: usize = 0xAC4; // bool
                pub const m_bBreakShardless: usize = 0xAC5; // bool
                pub const m_bBroken: usize = 0xAC6; // bool
                pub const m_bHasRateLimitedShards: usize = 0xAC7; // bool
                pub const m_bGlassNavIgnore: usize = 0xAC8; // bool
                pub const m_bGlassInFrame: usize = 0xAC9; // bool
                pub const m_bStartBroken: usize = 0xACA; // bool
                pub const m_iInitialDamageType: usize = 0xACB; // uint8
                pub const m_szDamagePositioningEntityName01: usize = 0xAD0; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName02: usize = 0xAD8; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName03: usize = 0xAE0; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName04: usize = 0xAE8; // CUtlSymbolLarge
                pub const m_vInitialDamagePositions: usize = 0xAF0; // CUtlVector<Vector>
                pub const m_vExtraDamagePositions: usize = 0xB08; // CUtlVector<Vector>
                pub const m_OnBroken: usize = 0xB20; // CEntityIOOutput
                pub const m_iSurfaceType: usize = 0xB49; // uint8
            }
            // Parent: CBaseButton
            // Fields count: 0
            pub mod CRotButton {
            }
            // Parent: CCSWeaponBaseGun
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            pub mod CWeaponTaser {
                pub const m_fFireTime: usize = 0x11BC; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x11C0; // int32
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            pub mod CWaterBullet {
            }
            // Parent: CBaseModelEntity
            // Fields count: 1
            pub mod CMarkupVolume {
                pub const m_bEnabled: usize = 0x9F8; // bool
            }
            // Parent: CPointEntity
            // Fields count: 6
            pub mod CMessage {
                pub const m_iszMessage: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_MessageVolume: usize = 0x7B0; // float32
                pub const m_MessageAttenuation: usize = 0x7B4; // int32
                pub const m_Radius: usize = 0x7B8; // float32
                pub const m_sNoise: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_OnShowMessage: usize = 0x7C8; // CEntityIOOutput
            }
            // Parent: CLogicalEntity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            pub mod CLogicGameEventListener {
                pub const m_OnEventFired: usize = 0x7B8; // CEntityIOOutput
                pub const m_iszGameEventName: usize = 0x7E0; // CUtlSymbolLarge
                pub const m_iszGameEventItem: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_bEnabled: usize = 0x7F0; // bool
                pub const m_bStartDisabled: usize = 0x7F1; // bool
            }
            // Parent: CBaseModelEntity
            // Fields count: 21
            pub mod CBreakable {
                pub const m_Material: usize = 0xA08; // Materials
                pub const m_hBreaker: usize = 0xA0C; // CHandle<CBaseEntity>
                pub const m_Explosion: usize = 0xA10; // Explosions
                pub const m_iszSpawnObject: usize = 0xA18; // CUtlSymbolLarge
                pub const m_flPressureDelay: usize = 0xA20; // float32
                pub const m_iMinHealthDmg: usize = 0xA24; // int32
                pub const m_iszPropData: usize = 0xA28; // CUtlSymbolLarge
                pub const m_impactEnergyScale: usize = 0xA30; // float32
                pub const m_nOverrideBlockLOS: usize = 0xA34; // EOverrideBlockLOS_t
                pub const m_OnBreak: usize = 0xA38; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0xA60; // CEntityOutputTemplate<float32>
                pub const m_flDmgModBullet: usize = 0xA88; // float32
                pub const m_flDmgModClub: usize = 0xA8C; // float32
                pub const m_flDmgModExplosive: usize = 0xA90; // float32
                pub const m_flDmgModFire: usize = 0xA94; // float32
                pub const m_iszPhysicsDamageTableName: usize = 0xA98; // CUtlSymbolLarge
                pub const m_iszBasePropData: usize = 0xAA0; // CUtlSymbolLarge
                pub const m_iInteractions: usize = 0xAA8; // int32
                pub const m_PerformanceMode: usize = 0xAAC; // PerformanceMode_t
                pub const m_hPhysicsAttacker: usize = 0xAB0; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xAB4; // GameTime_t
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSDeathmatchScript {
                pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: CRulePointEntity
            // Fields count: 2
            pub mod CGameText {
                pub const m_iszMessage: usize = 0xA08; // CUtlSymbolLarge
                pub const m_textParms: usize = 0xA10; // hudtextparms_t
            }
        }
    }
}
